// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Public/PreviewScene.h"


/**
 *  继承UE提供的新建NewWorld接口类
 */
class CUSTOMCUBEVIEW_API FRendererWidgitPreviewScene : public FPreviewScene
{
public:
	virtual ~FRendererWidgitPreviewScene() override;
	// 添加SceneComponent的方法

	virtual void AddComponent_Scene(class USceneComponent* Component);
	virtual void RemoveComponent_Scene(class USceneComponent* Component);

	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;
private:
	TArray<class USceneComponent*> ScencComponents;


};
