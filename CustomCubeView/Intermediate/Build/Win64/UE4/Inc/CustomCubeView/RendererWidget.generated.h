// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector2D;
struct FVector;
struct FHitResult;
#ifdef CUSTOMCUBEVIEW_RendererWidget_generated_h
#error "RendererWidget.generated.h already included, missing '#pragma once' in RendererWidget.h"
#endif
#define CUSTOMCUBEVIEW_RendererWidget_generated_h

#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_12_DELEGATE \
struct _Script_CustomCubeView_eventCubeRotatedDelegate_Parms \
{ \
	FRotator CubeRotator; \
}; \
static inline void FCubeRotatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CubeRotatedDelegate, FRotator CubeRotator) \
{ \
	_Script_CustomCubeView_eventCubeRotatedDelegate_Parms Parms; \
	Parms.CubeRotator=CubeRotator; \
	CubeRotatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_SPARSE_DATA
#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetViewCaptureRenderTargetSize); \
	DECLARE_FUNCTION(execBP_DeprojectCubeViewToWorld); \
	DECLARE_FUNCTION(execBP_LineTraceSingle); \
	DECLARE_FUNCTION(execSyncCubeRotation);


#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetViewCaptureRenderTargetSize); \
	DECLARE_FUNCTION(execBP_DeprojectCubeViewToWorld); \
	DECLARE_FUNCTION(execBP_LineTraceSingle); \
	DECLARE_FUNCTION(execSyncCubeRotation);


#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURendererWidget(); \
	friend struct Z_Construct_UClass_URendererWidget_Statics; \
public: \
	DECLARE_CLASS(URendererWidget, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomCubeView"), NO_API) \
	DECLARE_SERIALIZER(URendererWidget)


#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesURendererWidget(); \
	friend struct Z_Construct_UClass_URendererWidget_Statics; \
public: \
	DECLARE_CLASS(URendererWidget, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomCubeView"), NO_API) \
	DECLARE_SERIALIZER(URendererWidget)


#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URendererWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URendererWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URendererWidget(URendererWidget&&); \
	NO_API URendererWidget(const URendererWidget&); \
public:


#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URendererWidget(URendererWidget&&); \
	NO_API URendererWidget(const URendererWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URendererWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URendererWidget)


#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_20_PROLOG
#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_SPARSE_DATA \
	HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_RPC_WRAPPERS \
	HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_INCLASS \
	HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_SPARSE_DATA \
	HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMCUBEVIEW_API UClass* StaticClass<class URendererWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_RendererWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
