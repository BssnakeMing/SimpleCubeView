// Fill out your copyright notice in the Description page of Project Settings.


#include "RendererWidget.h"

#include "PreviewSceneSlate.h"

URendererWidget::URendererWidget()
{
	for (ECubeComponentPos CubeEnum : TEnumRange<ECubeComponentPos>())
	{
		CubeDetails.Add(FCubeDescribeDetail(CubeEnum));
	}
}

TSharedRef<SWidget> URendererWidget::RebuildWidget()
{
	PreviewSceneImage = SNew(SPreviewScene)
		.ClickMethod(ClickMethod)
		.TouchMethod(TouchMethod)

		.RenderTargetTexture(RenderTargetTexture)
		.PreviewScenePtr(this)
		.OutLineMaterial(OutlineMaterial)

		.MeshTransform(MeshTransform)
		.CameraTransform(CameraTransform)

		.CubeDetail(CubeDetails)
		
		.CaptureSource(CaptureSource);

	MyImage = PreviewSceneImage;
	return PreviewSceneImage.ToSharedRef();
}

void URendererWidget::SynchronizeProperties()
{
	if (PreviewSceneImage)
	{
		MyImage = PreviewSceneImage;

		// 编辑器变更时，SWidget同时更新
		PreviewSceneImage->SynchronizeUWidget(MeshTransform,CameraTransform);
	}


	Super::SynchronizeProperties();
}

void URendererWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	PreviewSceneImage.Reset();
}

void URendererWidget::SyncCubeRotation(FRotator GameWorldRotation)
{
	PreviewSceneImage->SyncCubeRotator(GameWorldRotation);
}

bool URendererWidget::BP_LineTraceSingle(const FVector Start, const FVector End, FHitResult& OutHit)
{
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(EObjectTypeQuery::ObjectTypeQuery2);

	TArray<AActor*>ActorsToIgnore;

	return PreviewSceneImage->LineTraceSingleForCubeView(Start, End, ObjectTypes, 
		false, ActorsToIgnore, EDrawDebugTrace::ForDuration, OutHit, true);
}

void URendererWidget::BP_DeprojectCubeViewToWorld(const FVector2D& ScreentPosition, FVector& OutWorldPosition,
	FVector& OutWorldDirection)
{
	PreviewSceneImage->DeprojectCubeViewToWorld(ScreentPosition,OutWorldPosition,OutWorldDirection);
}

FVector2D URendererWidget::BP_GetViewCaptureRenderTargetSize()
{
	return PreviewSceneImage->GetViewRenderTargetSize();
}

FCubeRotatedDelegate& URendererWidget::GetCubeRotatedDelegate()
{
	return CubeRotated;
}
