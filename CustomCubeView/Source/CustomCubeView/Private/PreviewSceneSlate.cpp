// Fill out your copyright notice in the Description page of Project Settings.


#include "PreviewSceneSlate.h"

#include "RendererWidget.h"
#include "RendererWidgetPreviewScene.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetMathLibrary.h"
// Packed
#include "Materials/MaterialInstance.h"
#include "TimerManager.h"


void SPreviewScene::Construct(const FArguments& InArgs)
{
	bIsPressed = false;

	MeshTransform = InArgs._MeshTransform;
	CameraTransform = InArgs._CameraTransform;

	ClickMethod = InArgs._ClickMethod;
	TouchMethod = InArgs._TouchMethod;
	//PressMethod = InArgs._PressMethod;

	PreviewScenePtr = InArgs._PreviewScenePtr;

	CaptureSource = InArgs._CaptureSource;

	RenderScene = MakeShareable(new FRendererWidgitPreviewScene());
	UWorld* RenderWorld = RenderScene->GetWorld();
#pragma region CaptureComponent
	// 添加摄像头
	CaptureComponent = NewObject<USceneCaptureComponent2D>(RenderWorld,TEXT("CaptureComponent"));
	CaptureComponent->TextureTarget = InArgs._RenderTargetTexture;
	// SCS_FinalColorLDR可以捕获最终的颜色，但是没有透明度通道信息，渲染出来是一个黑色的背景
	CaptureComponent->CaptureSource = CaptureSource;
	CaptureComponent->FOVAngle = 30.f;

	FString ShowFlagName = FString("PostProcessing");
	FEngineShowFlagsSetting PostSetting;
	PostSetting.Enabled = true;
	PostSetting.ShowFlagName = ShowFlagName;
	CaptureComponent->ShowFlagSettings.Add(PostSetting);

	RenderScene->AddComponent(CaptureComponent, CameraTransform);

#pragma endregion CaptureComponent

#pragma region PostComponent
	// 添加后处理
	OutLinePostComponent = NewObject<UPostProcessComponent>(RenderWorld,TEXT("PostComponent"));
	OutLinePostComponent->Settings.AddBlendable(InArgs._OutLineMaterial,1.f);
	
	RenderScene->AddComponent(OutLinePostComponent, FTransform::Identity);
#pragma endregion PostComponent

	// 添加模型
	if (InArgs._CubeDetail.Num() != 0)
	{
		int32 forIndex = 0;
		for (FCubeDescribeDetail CubeDetail : InArgs._CubeDetail)
		{
			if (!CubeDetail.CubeMesh || !CubeDetail.CubeMaterial)
			{
				forIndex++;
				break;
			}

			FString CubeTagStr = GetEnumValueAsString("ECubeComponentPos", CubeDetail.CubeCompPos);

			FString MeshName = FString("MeshComp_") + FString::FromInt(forIndex);
			auto MeshComponent = NewObject<UStaticMeshComponent>(RenderWorld, *MeshName);
			MeshComponent->SetStaticMesh(CubeDetail.CubeMesh);
			MeshComponent->ComponentTags.Add(*CubeTagStr);
			MeshComponent->SetMaterial(0, CubeDetail.CubeMaterial);

			RenderScene->AddComponent(MeshComponent, MeshTransform);
			MeshComponents.Add(MeshComponent);

			forIndex++;
		}


		/*for (int i = 0 ; i< InArgs._CubeDetail.Num();i++)
		{
			UStaticMesh* Mesh = InArgs._CubeMesh[i];
			FName MeshTag = FName(*InArgs._CubeMeshTags[i]);

			FString MeshName = FString("MeshComp_") + FString::FromInt(i);
			auto MeshComponent = NewObject<UStaticMeshComponent>(RenderWorld, *MeshName);
			MeshComponent->SetStaticMesh(Mesh);
			MeshComponent->ComponentTags.Add(MeshTag);

			RenderScene->AddComponent(MeshComponent, MeshTransform);
			MeshComponents.Add(MeshComponent);
		}*/
	}

	CaptureComponent->UpdateSceneCaptureContents(RenderScene->GetScene());

	SetCanTick(true);

	SetRenderOpacity(0.4f);
}

void SPreviewScene::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SImage::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);
	if (bLerpTransformCube)
	{
		if (MeshTransform.Equals(PosTransform, 0.001f))
		{
			bLerpTransformCube = false;
		}

		MeshTransform = UKismetMathLibrary::TLerp(MeshTransform, PosTransform, InDeltaTime * 5.f);

		PreviewScenePtr->GetCubeRotatedDelegate().Broadcast(MeshTransform.Rotator());
	}


	// 这个放置最后
	UpdateRendererWidgetPreview();
}

FReply SPreviewScene::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = FReply::Unhandled();
	if (IsEnabled() && (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton || MouseEvent.IsTouchEvent()))
	{
		Press();
		PressedScreenSpacePosition = MouseEvent.GetScreenSpacePosition();

		EButtonClickMethod::Type InputClickMethod = GetClickMethodFromInputType(MouseEvent);

		if (InputClickMethod == EButtonClickMethod::PreciseClick)
		{
			// do not capture the pointer for precise taps or clicks
			// 
			Reply = FReply::Handled();
		}
		else
		{
			//we need to capture the mouse for MouseUp events
			Reply = FReply::Handled().CaptureMouse(AsShared());
		}

		PreviewScenePtr->GetWorld()->GetTimerManager().SetTimer(ClickTimerHandle,[this]
		{
			PreviewScenePtr->GetWorld()->GetTimerManager().ClearTimer(ClickTimerHandle);
		},0.2f,false);


		bLerpTransformCube = false;
	}

	Invalidate(EInvalidateWidget::Layout);

	//return the constructed reply
	return Reply;
}

FReply SPreviewScene::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	FReply Reply = FReply::Unhandled();
	const EButtonClickMethod::Type InputClickMethod = GetClickMethodFromInputType(MouseEvent);
	const bool bMustBePressed = InputClickMethod == EButtonClickMethod::DownAndUp || InputClickMethod == EButtonClickMethod::PreciseClick;
	const bool bMeetsPressedRequirements = (!bMustBePressed || (bIsPressed && bMustBePressed));

	if (bMeetsPressedRequirements && ((MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton || MouseEvent.IsTouchEvent())))
	{
		Release();

		if (IsEnabled())
		{
			if (InputClickMethod == EButtonClickMethod::MouseDown)
			{
				// NOTE: If we're configured to click on mouse-down/precise-tap, then we never capture the mouse thus
				//       may never receive an OnMouseButtonUp() call.  We make sure that our bIsPressed
				//       state is reset by overriding OnMouseLeave().
			}
			else
			{
				bool bEventOverButton = IsHovered();

				if (!bEventOverButton && MouseEvent.IsTouchEvent())
				{
					bEventOverButton = MyGeometry.IsUnderLocation(MouseEvent.GetScreenSpacePosition());
				}

				if (bEventOverButton)
				{
					// If we asked for a precise tap, all we need is for the user to have not moved their pointer very far.
					const bool bTriggerForTouchEvent = InputClickMethod == EButtonClickMethod::PreciseClick;

					// If we were asked to allow the button to be clicked on mouse up, regardless of whether the user
					// pressed the button down first, then we'll allow the click to proceed without an active capture
					const bool bTriggerForMouseEvent = (InputClickMethod == EButtonClickMethod::MouseUp || HasMouseCapture());

					// 在0.2秒内抬起视为点击
					bool ClickTime = PreviewScenePtr->GetWorld()->GetTimerManager().IsTimerActive(ClickTimerHandle);

					if ((bTriggerForTouchEvent || bTriggerForMouseEvent) && ClickTime)
					{
						if (LastSceneComp)
						{
							TArray<FName> CubePosTag = LastSceneComp->ComponentTags;

							// 获取Tag确定位置，然后旋转向它
							bLerpTransformCube = false;
							for (FName PosTag : CubePosTag)
							{
								FString tagStr = PosTag.ToString();
								for (ECubeComponentPos CubeEnum : TEnumRange<ECubeComponentPos>())
								{
									FString CubeCompTypeStr = GetEnumValueAsString("ECubeComponentPos", CubeEnum);
									if (tagStr.Equals(CubeCompTypeStr))
									{
#pragma region CubePosEnum
										switch (CubeEnum)
										{
										case ECubeComponentPos::EFront:
											{
											PosTransform = FTransform();
											}
											break;
										case ECubeComponentPos::EFrontUp:
											{
											FRotator FrontUp = FRotator(45, 0, 0);
											PosTransform = FTransform(FrontUp.Quaternion());
											}
											break;
										case ECubeComponentPos::EFrontDown:
											{
											FRotator FrontDown = FRotator(-45, 0, 0);
											PosTransform = FTransform(FrontDown.Quaternion());
											}
											break;
										case ECubeComponentPos::EFrontLeft:
											{
											FRotator FrontLeft = FRotator(0, -45, 0);
											PosTransform = FTransform(FrontLeft.Quaternion());
											}
											break;
										case ECubeComponentPos::EFrontRight:
											{
											FRotator FrontRight = FRotator(0, 45, 0);
											PosTransform = FTransform(FrontRight.Quaternion());
											}
											break;
										case ECubeComponentPos::EFrontUpLeft:
											{
											FRotator FrontUpLeft = FRotator(45, -45, 0);
											PosTransform = FTransform(FrontUpLeft.Quaternion());
											}
											break;
										case ECubeComponentPos::EFrontUpRight:
											{
											FRotator FrontUpRight = FRotator(45, 45, 0);
											PosTransform = FTransform(FrontUpRight.Quaternion());
											}
											break;
										case ECubeComponentPos::EFrontDownLeft:
											{
											FRotator FrontDownLeft = FRotator(-45, -45, 0);
											PosTransform = FTransform(FrontDownLeft.Quaternion());
											}
											break;
										case ECubeComponentPos::EFrontDownRight:
											{
											FRotator FrontDownRight = FRotator(-45, 45, 0);
											PosTransform = FTransform(FrontDownRight.Quaternion());
											}
											break;
										case ECubeComponentPos::EBack:
											{
											FRotator Back = FRotator(180, 0, 0);
											PosTransform = FTransform(Back.Quaternion());
											}
											break;
										case ECubeComponentPos::EBackUp:
											{
											FRotator BackUp = FRotator(135, 0, 0);
											PosTransform = FTransform(BackUp.Quaternion());
											}
											break;
										case ECubeComponentPos::EBackDown:
											{
											FRotator BackDown = FRotator(-135, 0, 0);
											PosTransform = FTransform(BackDown.Quaternion());
											}
											break;
										case ECubeComponentPos::EBackLeft:
											{
											FRotator BackLeft = FRotator(0, 135, -180);
											PosTransform = FTransform(BackLeft.Quaternion());
											}
											break;
										case ECubeComponentPos::EBackRight:
											{
											FRotator BackRight = FRotator(0, -135, -180);
											PosTransform = FTransform(BackRight.Quaternion());
											}
											break;
										case ECubeComponentPos::EBackUpLeft:
											{
											FRotator BackUpLeft = FRotator(45, 135, -180);
											PosTransform = FTransform(BackUpLeft.Quaternion());
											}
											break;
										case ECubeComponentPos::EBackUpRight:
											{
											FRotator BackUpRight = FRotator(135, 45, 0);
											PosTransform = FTransform(BackUpRight.Quaternion());
											}
											break;
										case ECubeComponentPos::EBackDownLeft:
											{
											FRotator BackDownLeft = FRotator(-45, 135, -180);
											PosTransform = FTransform(BackDownLeft.Quaternion());
											}
											break;
										case ECubeComponentPos::EBackDownRight:
											{
											FRotator BackDownRight = FRotator(-45, -135, -180);
											PosTransform = FTransform(BackDownRight.Quaternion());
											}
											break;
										case ECubeComponentPos::EUp:
											{
											FRotator Up = FRotator(90,0,0);
											PosTransform = FTransform(Up.Quaternion());
											}
											break;
										case ECubeComponentPos::EUpLeft:
											{
											FRotator UpLeft = FRotator(90, 0, 45);
											PosTransform = FTransform(UpLeft.Quaternion());
											}
											break;
										case ECubeComponentPos::EUpRight:
											{
											FRotator UpRight = FRotator(90, 180, 135);
											PosTransform = FTransform(UpRight.Quaternion());
											}
											break;
										case ECubeComponentPos::EDown:
											{
											FRotator Down = FRotator(-90, 0, 0);
											PosTransform = FTransform(Down.Quaternion());
											}
											break;
										case ECubeComponentPos::EDownLeft:
											{
											FRotator DownLeft = FRotator(-90, -45, 0);
											PosTransform = FTransform(DownLeft.Quaternion());
											}
											break;
										case ECubeComponentPos::EDownRight:
											{
											FRotator DownRight = FRotator(-90, 45, 0);
											PosTransform = FTransform(DownRight.Quaternion());
											}
											break;
										case ECubeComponentPos::ELeft:
											{
											FRotator Left = FRotator(0, -90, 0);
											PosTransform = FTransform(Left.Quaternion());
											}
											break;
										case ECubeComponentPos::ERight:
											{
											FRotator Right = FRotator(0, 90, 0);
											PosTransform = FTransform(Right.Quaternion());
											}
											break;
										default: ;
										}
#pragma endregion CubePosEnum
										bLerpTransformCube = true;
									}else
									{
										bLerpTransformCube = false;
									}

									if (bLerpTransformCube)
									{
										break;
									}
								}
								if (bLerpTransformCube)
								{
									break;
								}
							}
						}
					}
				}
			}
		}

		//If the user of the button didn't handle this click, then the button's
		//default behavior handles it.
		if (Reply.IsEventHandled() == false)
		{
			Reply = FReply::Handled();
		}
	}

	//If the user hasn't requested a new mouse captor and the button still has mouse capture,
	//then the default behavior of the button is to release mouse capture.
	if (Reply.GetMouseCaptor().IsValid() == false && HasMouseCapture())
	{
		Reply.ReleaseMouseCapture();
	}

	Invalidate(EInvalidateWidget::Layout);

	return Reply;
}

FReply SPreviewScene::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	SetRenderOpacity(1.f);


	FVector2D MousePosInViewport = UWidgetLayoutLibrary::GetMousePositionOnViewport(PreviewScenePtr);
	FGeometry TickGeometry = GetTickSpaceGeometry();
	FVector2D WidgetPosInTopLeft = TickGeometry.GetLocalPositionAtCoordinates(FVector2D(0.f, 0.f));
	FVector2D WidgetSize = TickGeometry.GetLocalSize();
	FVector2D ViewRenderSize = GetViewRenderTargetSize();

	// 将视口上鼠标位置映射到捕获视口上
	FVector2D MousePosInCapture;
	MousePosInCapture.X = UKismetMathLibrary::MapRangeUnclamped(MousePosInViewport.X, WidgetPosInTopLeft.X,
		WidgetPosInTopLeft.X+WidgetSize.X,0.f, ViewRenderSize.X);
	MousePosInCapture.Y = UKismetMathLibrary::MapRangeUnclamped(MousePosInViewport.Y, WidgetPosInTopLeft.Y,
		WidgetPosInTopLeft.Y + WidgetSize.Y, 0.f, ViewRenderSize.Y);

	// 捕获视口投射捕获世界空间
	FVector OutWorldPosition;
	FVector OutWorldDirection;
	DeprojectCubeViewToWorld(MousePosInCapture, OutWorldPosition, OutWorldDirection);

#pragma region LineTrace
	TArray<TEnumAsByte<EObjectTypeQuery>> HitObjectTypes;
	TArray<AActor*> HitActorsToIgnore;
	FHitResult OutHit;

	// 动态物体
	HitObjectTypes.Add(EObjectTypeQuery::ObjectTypeQuery1);
	HitObjectTypes.Add(EObjectTypeQuery::ObjectTypeQuery2);

	bool TraceResult = LineTraceSingleForCubeView(OutWorldPosition, OutWorldPosition + (OutWorldDirection * 400),
		HitObjectTypes, false, HitActorsToIgnore, EDrawDebugTrace::None, OutHit);
#pragma endregion


	if (TraceResult)
	{
		if (LastSceneComp)
		{
			if (LastSceneComp != OutHit.GetComponent())
			{
				LastSceneComp->SetRenderCustomDepth(false);
				LastSceneComp = OutHit.GetComponent();
			}
		}
		else
		{
			LastSceneComp = OutHit.GetComponent();
		}
		LastSceneComp->SetRenderCustomDepth(true);
	}
	else if (LastSceneComp)
	{
		LastSceneComp->SetRenderCustomDepth(false);
		LastSceneComp = nullptr;
	}

	if (bIsPressed)
	{
		// 获取鼠标位移差距，进行模型旋转
		auto CursorDelta = MouseEvent.GetCursorDelta();

		FRotator DeltaRotator = FRotator(CursorDelta.Y, -CursorDelta.X, 0);

		const FQuat NewWorldRotation = DeltaRotator.Quaternion() * MeshTransform.GetRotation();

		// 更新 MeshTransform 的旋转部分
		MeshTransform.SetRotation(NewWorldRotation);
		PreviewScenePtr->GetCubeRotatedDelegate().Broadcast(NewWorldRotation.Rotator());

		return FReply::Handled();
	}
	return FReply::Unhandled();
}

void SPreviewScene::Press()
{
	if (!bIsPressed)
	{
		bIsPressed = true;
	}
}

void SPreviewScene::Release()
{
	if (bIsPressed)
	{
		bIsPressed = false;
	}
}

void SPreviewScene::UpdateRendererWidgetPreview() const
{
	for (UStaticMeshComponent* MeshComponent : MeshComponents)
	{
		MeshComponent->SetWorldTransform(MeshTransform);
		MeshComponent->SendRenderTransform_Concurrent();
	}

	RenderScene->UpdateCaptureContents();

	CaptureComponent->SetWorldTransform(CameraTransform);
	CaptureComponent->UpdateSceneCaptureContents(RenderScene->GetScene());
}

void SPreviewScene::SynchronizeUWidget(FTransform mMeshTransform, FTransform mCameraTransform)
{
	MeshTransform = mMeshTransform;
	CameraTransform = mCameraTransform;
}

bool SPreviewScene::LineTraceSingleForCubeView(const FVector Start, const FVector End,
                                               const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore,
                                               EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor,
                                               FLinearColor TraceHitColor, float DrawTime)
{
	
	const UObject* WorldContextObject = RenderScene->GetWorld();
	return UKismetSystemLibrary::LineTraceSingleForObjects(WorldContextObject, Start, End, ObjectTypes, bTraceComplex,
		ActorsToIgnore, DrawDebugType, OutHit, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime);
}

void SPreviewScene::DeprojectCubeViewToWorld(const FVector2D& ScreentPosition, FVector& OutWorldPosition,
                                             FVector& OutWorldDirection)
{
	// 视口矩阵
	const FTransform& Transform = CaptureComponent->GetComponentToWorld();
	FMatrix ViewMatrix = Transform.ToInverseMatrixWithScale();
	ViewMatrix = ViewMatrix * FMatrix(FPlane(0, 0, 1, 0), FPlane(1, 0, 0, 0), FPlane(0, 1, 0, 0), FPlane(0, 0, 0, 1));

	// 自定义投影矩阵
	const float FOV = CaptureComponent->FOVAngle * (float)PI / 360.0f;
	FIntPoint CaptureSize(CaptureComponent->TextureTarget->GetSurfaceWidth(), CaptureComponent->TextureTarget->GetSurfaceHeight());
	float XAxisMultiplier;
	float YAxisMultiplier;
	if (CaptureSize.X > CaptureSize.Y)
	{
		XAxisMultiplier = 1.0f;
		YAxisMultiplier = CaptureSize.X / (float)CaptureSize.Y;
	}
	else
	{
		// if the viewport is taller than it is wide
		XAxisMultiplier = CaptureSize.Y / (float)CaptureSize.X;
		YAxisMultiplier = 1.0f;
	}
	//FViewMatrices
	FMatrix    ProjectionMatrix = FReversedZPerspectiveMatrix(FOV, FOV, XAxisMultiplier, YAxisMultiplier, GNearClippingPlane, GNearClippingPlane);

	const FMatrix InverseViewMatrix = ViewMatrix.InverseFast();
	const FMatrix InvProjectionMatrix = ProjectionMatrix.Inverse();
	const FIntRect ViewRect = FIntRect(0, 0, CaptureSize.X, CaptureSize.Y);
	FSceneView::DeprojectScreenToWorld(ScreentPosition, ViewRect, InverseViewMatrix, InvProjectionMatrix, OutWorldPosition, OutWorldDirection);
}

void SPreviewScene::SyncCubeRotator(FRotator GameWorldRotator)
{
	FQuat NewRotationQuat = GameWorldRotator.Quaternion();
	MeshTransform.SetRotation(NewRotationQuat);
}

FVector2D SPreviewScene::GetViewRenderTargetSize() const
{
	return FVector2D(CaptureComponent->TextureTarget->GetSurfaceWidth(), CaptureComponent->TextureTarget->GetSurfaceHeight());
}

TEnumAsByte<EButtonClickMethod::Type> SPreviewScene::GetClickMethodFromInputType(const FPointerEvent& MouseEvent) const
{
	if (MouseEvent.IsTouchEvent())
	{
		switch (TouchMethod)
		{
		case EButtonTouchMethod::Down:
			return EButtonClickMethod::MouseDown;
		case EButtonTouchMethod::DownAndUp:
			return EButtonClickMethod::DownAndUp;
		case EButtonTouchMethod::PreciseTap:
			return EButtonClickMethod::PreciseClick;
		}
	}

	return ClickMethod;
}
