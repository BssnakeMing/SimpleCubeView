// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomCubeView/Public/RendererWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRendererWidget() {}
// Cross Module References
	CUSTOMCUBEVIEW_API UFunction* Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CustomCubeView();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	CUSTOMCUBEVIEW_API UClass* Z_Construct_UClass_URendererWidget_NoRegister();
	CUSTOMCUBEVIEW_API UClass* Z_Construct_UClass_URendererWidget();
	UMG_API UClass* Z_Construct_UClass_UImage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	CUSTOMCUBEVIEW_API UScriptStruct* Z_Construct_UScriptStruct_FCubeDescribeDetail();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonClickMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonTouchMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureSource();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics
	{
		struct _Script_CustomCubeView_eventCubeRotatedDelegate_Parms
		{
			FQuat CubeRotator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CubeRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics::NewProp_CubeRotator = { "CubeRotator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CustomCubeView_eventCubeRotatedDelegate_Parms, CubeRotator), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics::NewProp_CubeRotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CustomCubeView, nullptr, "CubeRotatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_CustomCubeView_eventCubeRotatedDelegate_Parms), Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URendererWidget::execBP_GetViewCaptureRenderTargetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->BP_GetViewCaptureRenderTargetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URendererWidget::execBP_DeprojectCubeViewToWorld)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreentPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_DeprojectCubeViewToWorld(Z_Param_Out_ScreentPosition,Z_Param_Out_OutWorldPosition,Z_Param_Out_OutWorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URendererWidget::execBP_LineTraceSingle)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_LineTraceSingle(Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URendererWidget::execSyncCubeRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_GameWorldRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncCubeRotation(Z_Param_GameWorldRotation);
		P_NATIVE_END;
	}
	void URendererWidget::StaticRegisterNativesURendererWidget()
	{
		UClass* Class = URendererWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_DeprojectCubeViewToWorld", &URendererWidget::execBP_DeprojectCubeViewToWorld },
			{ "BP_GetViewCaptureRenderTargetSize", &URendererWidget::execBP_GetViewCaptureRenderTargetSize },
			{ "BP_LineTraceSingle", &URendererWidget::execBP_LineTraceSingle },
			{ "SyncCubeRotation", &URendererWidget::execSyncCubeRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics
	{
		struct RendererWidget_eventBP_DeprojectCubeViewToWorld_Parms
		{
			FVector2D ScreentPosition;
			FVector OutWorldPosition;
			FVector OutWorldDirection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreentPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreentPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutWorldPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutWorldDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::NewProp_ScreentPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::NewProp_ScreentPosition = { "ScreentPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RendererWidget_eventBP_DeprojectCubeViewToWorld_Parms, ScreentPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::NewProp_ScreentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::NewProp_ScreentPosition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::NewProp_OutWorldPosition = { "OutWorldPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RendererWidget_eventBP_DeprojectCubeViewToWorld_Parms, OutWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::NewProp_OutWorldDirection = { "OutWorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RendererWidget_eventBP_DeprojectCubeViewToWorld_Parms, OutWorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::NewProp_ScreentPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::NewProp_OutWorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::NewProp_OutWorldDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "CubeView" },
		{ "Comment", "// \xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe9\xbc\xa0\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae\xe8\xbd\xac\xe6\x8d\xa2\n" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
		{ "ToolTip", "\xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe9\xbc\xa0\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae\xe8\xbd\xac\xe6\x8d\xa2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URendererWidget, nullptr, "BP_DeprojectCubeViewToWorld", nullptr, nullptr, sizeof(RendererWidget_eventBP_DeprojectCubeViewToWorld_Parms), Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics
	{
		struct RendererWidget_eventBP_GetViewCaptureRenderTargetSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RendererWidget_eventBP_GetViewCaptureRenderTargetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "CubeView" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URendererWidget, nullptr, "BP_GetViewCaptureRenderTargetSize", nullptr, nullptr, sizeof(RendererWidget_eventBP_GetViewCaptureRenderTargetSize_Parms), Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics
	{
		struct RendererWidget_eventBP_LineTraceSingle_Parms
		{
			FVector Start;
			FVector End;
			FHitResult OutHit;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RendererWidget_eventBP_LineTraceSingle_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RendererWidget_eventBP_LineTraceSingle_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_End_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RendererWidget_eventBP_LineTraceSingle_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RendererWidget_eventBP_LineTraceSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RendererWidget_eventBP_LineTraceSingle_Parms), &Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "CubeView" },
		{ "Comment", "// \xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe5\xbc\x82\xe4\xb8\x96\xe7\x95\x8c\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\n" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
		{ "ToolTip", "\xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe5\xbc\x82\xe4\xb8\x96\xe7\x95\x8c\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URendererWidget, nullptr, "BP_LineTraceSingle", nullptr, nullptr, sizeof(RendererWidget_eventBP_LineTraceSingle_Parms), Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics
	{
		struct RendererWidget_eventSyncCubeRotation_Parms
		{
			FRotator GameWorldRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameWorldRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics::NewProp_GameWorldRotation = { "GameWorldRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RendererWidget_eventSyncCubeRotation_Parms, GameWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics::NewProp_GameWorldRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "CubeView" },
		{ "Comment", "// \xe4\xbf\xae\xe6\x94\xb9""Cube\xe7\x9a\x84Rotation\n" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
		{ "ToolTip", "\xe4\xbf\xae\xe6\x94\xb9""Cube\xe7\x9a\x84Rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URendererWidget, nullptr, "SyncCubeRotation", nullptr, nullptr, sizeof(RendererWidget_eventSyncCubeRotation_Parms), Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URendererWidget_SyncCubeRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URendererWidget_SyncCubeRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URendererWidget_NoRegister()
	{
		return URendererWidget::StaticClass();
	}
	struct Z_Construct_UClass_URendererWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTargetTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlphaTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CubeDetails_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CubeDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClickMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TouchMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CaptureSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeRotated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CubeRotated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URendererWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomCubeView,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URendererWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URendererWidget_BP_DeprojectCubeViewToWorld, "BP_DeprojectCubeViewToWorld" }, // 4175983433
		{ &Z_Construct_UFunction_URendererWidget_BP_GetViewCaptureRenderTargetSize, "BP_GetViewCaptureRenderTargetSize" }, // 2332722878
		{ &Z_Construct_UFunction_URendererWidget_BP_LineTraceSingle, "BP_LineTraceSingle" }, // 800471080
		{ &Z_Construct_UFunction_URendererWidget_SyncCubeRotation, "SyncCubeRotation" }, // 2705000174
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RendererWidget.h" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::NewProp_RenderTargetTexture_MetaData[] = {
		{ "Category", "CubeView" },
		{ "Comment", "// \xe8\xbe\x93\xe5\x87\xba\xe7\x94\xbb\xe9\x9d\xa2\n" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe7\x94\xbb\xe9\x9d\xa2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_RenderTargetTexture = { "RenderTargetTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererWidget, RenderTargetTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::NewProp_RenderTargetTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::NewProp_RenderTargetTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::NewProp_AlphaTexture_MetaData[] = {
		{ "Category", "CubeView" },
		{ "Comment", "// \xe8\xbe\x93\xe5\x87\xba\xe9\x80\x8f\xe6\x98\x8e\xe9\x80\x9a\xe9\x81\x93\n" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe9\x80\x8f\xe6\x98\x8e\xe9\x80\x9a\xe9\x81\x93" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_AlphaTexture = { "AlphaTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererWidget, AlphaTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::NewProp_AlphaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::NewProp_AlphaTexture_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeDetails_Inner = { "CubeDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCubeDescribeDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeDetails_MetaData[] = {
		{ "Category", "CubeView" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeDetails = { "CubeDetails", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererWidget, CubeDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::NewProp_MeshTransform_MetaData[] = {
		{ "Category", "CubeView" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_MeshTransform = { "MeshTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererWidget, MeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::NewProp_MeshTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::NewProp_MeshTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::NewProp_CameraTransform_MetaData[] = {
		{ "Category", "CubeView" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererWidget, CameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::NewProp_CameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::NewProp_CameraTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::NewProp_OutlineMaterial_MetaData[] = {
		{ "Category", "CubeView" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_OutlineMaterial = { "OutlineMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererWidget, OutlineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::NewProp_OutlineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::NewProp_OutlineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::NewProp_ClickMethod_MetaData[] = {
		{ "Category", "CubeView|Interaction" },
		{ "Comment", "/** The type of mouse action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
		{ "ToolTip", "The type of mouse action required by the user to trigger the buttons 'Click'" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_ClickMethod = { "ClickMethod", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererWidget, ClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::NewProp_ClickMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::NewProp_ClickMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::NewProp_TouchMethod_MetaData[] = {
		{ "Category", "CubeView|Interaction" },
		{ "Comment", "/** The type of touch action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
		{ "ToolTip", "The type of touch action required by the user to trigger the buttons 'Click'" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_TouchMethod = { "TouchMethod", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererWidget, TouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::NewProp_TouchMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::NewProp_TouchMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::NewProp_CaptureSource_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "DisplayName", "CubeView|Capture Source" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_CaptureSource = { "CaptureSource", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererWidget, CaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::NewProp_CaptureSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::NewProp_CaptureSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeRotated_MetaData[] = {
		{ "Category", "CubeView" },
		{ "Comment", "// \xe6\x97\x8b\xe8\xbd\xac""CubeView\xe5\x90\x8e\xef\xbc\x8c\xe9\x80\x9a\xe8\xbf\x87\xe5\xa7\x94\xe6\x89\x98\xe5\xb9\xbf\xe6\x92\xad\xe6\x96\xb0\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac\n" },
		{ "ModuleRelativePath", "Public/RendererWidget.h" },
		{ "ToolTip", "\xe6\x97\x8b\xe8\xbd\xac""CubeView\xe5\x90\x8e\xef\xbc\x8c\xe9\x80\x9a\xe8\xbf\x87\xe5\xa7\x94\xe6\x89\x98\xe5\xb9\xbf\xe6\x92\xad\xe6\x96\xb0\xe7\x9a\x84\xe6\x97\x8b\xe8\xbd\xac" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeRotated = { "CubeRotated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererWidget, CubeRotated), Z_Construct_UDelegateFunction_CustomCubeView_CubeRotatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeRotated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeRotated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URendererWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_RenderTargetTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_AlphaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_MeshTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_CameraTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_OutlineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_ClickMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_TouchMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_CaptureSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererWidget_Statics::NewProp_CubeRotated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URendererWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URendererWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URendererWidget_Statics::ClassParams = {
		&URendererWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URendererWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URendererWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URendererWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URendererWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URendererWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URendererWidget, 2399535738);
	template<> CUSTOMCUBEVIEW_API UClass* StaticClass<URendererWidget>()
	{
		return URendererWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URendererWidget(Z_Construct_UClass_URendererWidget, &URendererWidget::StaticClass, TEXT("/Script/CustomCubeView"), TEXT("URendererWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URendererWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
