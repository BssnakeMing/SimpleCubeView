// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/Image.h"
#include "CubeComponentPosType.h"

#include "RendererWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCubeRotatedDelegate, FRotator, CubeRotator);



class SPreviewScene;
/**
 * 
 */
UCLASS()
class CUSTOMCUBEVIEW_API URendererWidget : public UImage
{
	GENERATED_BODY()

public:
	URendererWidget();

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void SynchronizeProperties() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

public:
	// 修改Cube的Rotation
	UFUNCTION(BlueprintCallable,Category="CubeView")
	void SyncCubeRotation(FRotator GameWorldRotation);

	// 暴露给蓝图的异世界射线检测
	UFUNCTION(BlueprintCallable, Category = "CubeView")
	bool BP_LineTraceSingle(const FVector Start, const FVector End, FHitResult& OutHit);

	// 暴露给蓝图的鼠标位置转换
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CubeView")
	void BP_DeprojectCubeViewToWorld(const FVector2D& ScreentPosition, FVector& OutWorldPosition, FVector& OutWorldDirection);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CubeView")
	FVector2D BP_GetViewCaptureRenderTargetSize();

public:

	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="CubeView")
	UTextureRenderTarget2D* RenderTargetTexture;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CubeView")
	TArray<FCubeDescribeDetail> CubeDetails;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CubeView")
	FTransform MeshTransform;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CubeView")
	FTransform CameraTransform;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CubeView")
	UMaterialInterface* OutlineMaterial;

public:
	/** The type of mouse action required by the user to trigger the buttons 'Click' */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CubeView|Interaction")
	TEnumAsByte<EButtonClickMethod::Type> ClickMethod;

	/** The type of touch action required by the user to trigger the buttons 'Click' */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CubeView|Interaction")
	TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;

	UPROPERTY(interp, Category = SceneCapture, meta = (DisplayName = "CubeView|Capture Source"))
	TEnumAsByte<enum ESceneCaptureSource> CaptureSource;

	// 旋转CubeView后，通过委托广播新的旋转
	UPROPERTY(BlueprintAssignable,Category="CubeView")
	FCubeRotatedDelegate CubeRotated;

public:
	FCubeRotatedDelegate& GetCubeRotatedDelegate();

private:
	TSharedPtr<SPreviewScene> PreviewSceneImage;
};
