// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AttachWorkActor.generated.h"



class USceneCaptureComponent2D;
class UPostProcessComponent;
class UMaterialInstance;
class UTextureRenderTarget2D;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS()
class CUSTOMCUBEVIEW_API AAttachWorkActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAttachWorkActor();

	virtual void BeginPlay() override;

public:
	UPROPERTY(BlueprintReadOnly,Category = "CubeView|Test")
	USceneCaptureComponent2D* CaptureComponent;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "CubeView|Test")
	UPostProcessComponent* PostProcessComponent;

	UPROPERTY(EditAnywhere, Category = "CubeView|Test")
	UMaterialInstance* PostProcessMaterial;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "CubeView|Test")
	UTextureRenderTarget2D* CapatureTexture;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CubeView|Test")
	UStaticMesh* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CubeView|Test")
	UStaticMeshComponent* StaticMeshComp;

};
