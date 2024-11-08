// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"

#include "Widgets/Images/SImage.h"


/**
 *  这里显示异世界的CubeMesh，同时具有按钮点击等功能
 */


class UPostProcessComponent;
class FRendererWidgitPreviewScene;
class URendererWidget;

struct FCubeDescribeDetail;


class CUSTOMCUBEVIEW_API SPreviewScene : public SImage
{

public:
	// 定义按钮的属性，使该控件也能被点击
	SLATE_BEGIN_ARGS(SPreviewScene)
		: _ClickMethod(EButtonClickMethod::DownAndUp)
		, _TouchMethod(EButtonTouchMethod::DownAndUp){}

		/** Sets the rules to use for determining whether the button was clicked.  This is an advanced setting and generally should be left as the default. */
		SLATE_ARGUMENT(EButtonClickMethod::Type, ClickMethod)

		/** How should the button be clicked with touch events? */
		SLATE_ARGUMENT(EButtonTouchMethod::Type, TouchMethod)

		SLATE_ARGUMENT(URendererWidget*, PreviewScenePtr)

		// 捕获到的画面绘制到这里，这个变量将不保存，需要的可以取消注释
		SLATE_ARGUMENT(UTextureRenderTarget2D*, RenderTargetTexture)
		SLATE_ARGUMENT(UTextureRenderTarget2D*, AlphaTexture)
		// 描边材质
		SLATE_ARGUMENT(UMaterialInterface*, OutLineMaterial)

		SLATE_ARGUMENT(FTransform, MeshTransform)
		SLATE_ARGUMENT(FTransform, CameraTransform)

		SLATE_ARGUMENT(TArray<FCubeDescribeDetail>, CubeDetail)

		SLATE_ARGUMENT(ESceneCaptureSource, CaptureSource)

	SLATE_END_ARGS()
	void Construct(const FArguments& InArgs);

public:
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	/*virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, 
		FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;*/

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;
	
	virtual FReply OnTouchMoved(const FGeometry& MyGeometry, const FPointerEvent& InTouchEvent) override;

protected:
	/** Press the button */
	virtual void Press();

	/** Release the button */
	virtual void Release();

public:

	/**
	 * 每帧更新模型和捕获摄像机信息
	 */
	void UpdateRendererWidgetPreview() const;

	// 用于同步编辑器修改
	void SynchronizeUWidget(FTransform mMeshTransform, FTransform mCameraTransform);

	/**
	 *	重写射线检测，更改WorldObject使该函数能够打到CubeView的世界
	 *	碰撞是否沿着给定的线追踪并返回遇到的第一次碰撞。
	 *	这只会查找属于ObjectTypes指定类型的对象。
	 *
	 * @param Start 				线段的起点
	 * @param End 					结束线段结束
	 * @param ObjectTypes 			要跟踪的对象类型数组
	 * @param bTraceComplex 		True用于测试复杂碰撞，false用于测试简化碰撞
	 * @param OutHit 				跟踪命中的OutHit属性
	 * @return 						如果有命中，则返回True，否则返回false
	 */
	bool LineTraceSingleForCubeView(const FVector Start, const FVector End,
		const TArray<TEnumAsByte<EObjectTypeQuery> >& ObjectTypes, bool bTraceComplex,
		const TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf = true,
		FLinearColor TraceColor = FLinearColor::Red, FLinearColor TraceHitColor = FLinearColor::Green, float DrawTime = 5.0f);

	/**
	 *  将CubeView上的鼠标位置转为CubeViewWorld的世界位置和方向
	 *
	 * @param ScreentPosition		鼠标映射在CubeViewWidget上的位置
	 * @param OutWorldPosition		CubeView世界位置
	 * @param OutWorldDirection		CubeView世界方向
	 */
	void DeprojectCubeViewToWorld(const FVector2D& ScreentPosition, FVector& OutWorldPosition, FVector& OutWorldDirection);

	/**
	 * GameWorld游戏世界上的模型旋转时调用，同步CubeView的旋转
	 * @param GameWorldRotator 游戏世界上模型的旋转
	 */
	void SyncCubeRotator(FRotator GameWorldRotator);

	/**
	 * @return 获取捕获组件的RenderTarget的设定大小
	 */
	FVector2D GetViewRenderTargetSize()const;

protected:
	/** Utility function to translate other input click methods to regular ones. */
	TEnumAsByte<EButtonClickMethod::Type> GetClickMethodFromInputType(const FPointerEvent& MouseEvent) const;

	/** How should the button be clicked with touch events? */
	TEnumAsByte<EButtonTouchMethod::Type> TouchMethod = EButtonTouchMethod::PreciseTap;

	/** Sets whether a click should be triggered on mouse down, mouse up, or that both a mouse down and up are required. */
	TEnumAsByte<EButtonClickMethod::Type> ClickMethod = EButtonClickMethod::DownAndUp;

	/** 鼠标在屏幕空间中按下的位置，用于MouseMove */
	FVector2D PressedScreenSpacePosition;

	/** True if this button is currently in a pressed state */
	uint8 bIsPressed : 1;

protected:
	// 这里放置UWidget传递进来的参数
	URendererWidget* PreviewScenePtr = nullptr;

	// 模型在异世界的位置
	FTransform MeshTransform;

	// 捕获部件在异世界的位置
	FTransform CameraTransform;

private:
	// 上一次被击中的CubeMesh部件
	UPrimitiveComponent* LastSceneComp = nullptr;
	TArray<UStaticMeshComponent*> MeshComponents;
	UPostProcessComponent* OutLinePostComponent = nullptr;

	USceneCaptureComponent2D* CaptureComponent = nullptr;
	ESceneCaptureSource CaptureSource = ESceneCaptureSource::SCS_FinalColorHDR;

	USceneCaptureComponent2D* AlphaCaptureComp = nullptr;

	TSharedPtr<FRendererWidgitPreviewScene> RenderScene;

	FTimerHandle ClickTimerHandle;

	// 是否将模型渐变到PosType点位位置
	bool bLerpTransformCube = false;
	FTransform PosTransform;

	bool bLerpRenderOpacity = false;
};
