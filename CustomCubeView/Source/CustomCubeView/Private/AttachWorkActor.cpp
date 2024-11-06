// Fill out your copyright notice in the Description page of Project Settings.


#include "AttachWorkActor.h"

#include "Components/PostProcessComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AAttachWorkActor::AAttachWorkActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

void AAttachWorkActor::BeginPlay()
{
	Super::BeginPlay();

	CaptureComponent = NewObject<USceneCaptureComponent2D>(this, TEXT("SceneCapture"));
	UWorld* thisWorld = AActor::GetWorld();
	CaptureComponent->TextureTarget = CapatureTexture;
	CaptureComponent->CaptureSource = ESceneCaptureSource::SCS_FinalColorHDR;

	FString ShowFlagName = FString("PostProcessing");
	FEngineShowFlagsSetting PostSetting;
	PostSetting.Enabled = true;
	PostSetting.ShowFlagName = ShowFlagName;

	CaptureComponent->ShowFlagSettings.Add(PostSetting);
	CaptureComponent->RegisterComponentWithWorld(thisWorld);
	FAttachmentTransformRules Attachment = FAttachmentTransformRules(EAttachmentRule::KeepRelative, false);
	CaptureComponent->AttachToComponent(GetRootComponent(), Attachment);

	PostProcessComponent = NewObject<UPostProcessComponent>(this, TEXT("PostComponent"));
	PostProcessComponent->Settings.AddBlendable(PostProcessMaterial,1.f);
	PostProcessComponent->RegisterComponentWithWorld(thisWorld);

	StaticMeshComp = NewObject<UStaticMeshComponent>(this, TEXT("staticMeshComp"));
	StaticMeshComp->SetStaticMesh(StaticMesh);
	StaticMeshComp->SetRenderCustomDepth(true);
	StaticMeshComp->RegisterComponentWithWorld(thisWorld);
}


