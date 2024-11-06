// Fill out your copyright notice in the Description page of Project Settings.


#include "RendererWidgetPreviewScene.h"

#include "Engine/SimpleConstructionScript.h"

FRendererWidgitPreviewScene::~FRendererWidgitPreviewScene()
{
	// Remove all the attached components
	for (int32 ComponentIndex = 0; ComponentIndex < ScencComponents.Num(); ComponentIndex++)
	{
		USceneComponent* Component = ScencComponents[ComponentIndex];

		Component->UnregisterComponent();
	}

	// 不需要调用父类析构
	//FPreviewScene::~FPreviewScene();
}

void FRendererWidgitPreviewScene::AddComponent_Scene(class USceneComponent* Component)
{
	ScencComponents.AddUnique(Component);
	Component->RegisterComponentWithWorld(GetWorld());

	GetScene()->UpdateSpeedTreeWind(0.0);
}

void FRendererWidgitPreviewScene::RemoveComponent_Scene(class USceneComponent* Component)
{
	Component->UnregisterComponent();
	ScencComponents.Remove(Component);
}

void FRendererWidgitPreviewScene::AddReferencedObjects(FReferenceCollector& Collector)
{
	Collector.AddReferencedObjects(ScencComponents);
	FPreviewScene::AddReferencedObjects(Collector);
}
