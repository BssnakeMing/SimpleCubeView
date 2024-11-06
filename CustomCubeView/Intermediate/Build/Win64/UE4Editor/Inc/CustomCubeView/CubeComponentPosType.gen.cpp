// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomCubeView/Public/CubeComponentPosType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeComponentPosType() {}
// Cross Module References
	CUSTOMCUBEVIEW_API UEnum* Z_Construct_UEnum_CustomCubeView_ECubeComponentPos();
	UPackage* Z_Construct_UPackage__Script_CustomCubeView();
	CUSTOMCUBEVIEW_API UScriptStruct* Z_Construct_UScriptStruct_FCubeDescribeDetail();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	static UEnum* ECubeComponentPos_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomCubeView_ECubeComponentPos, Z_Construct_UPackage__Script_CustomCubeView(), TEXT("ECubeComponentPos"));
		}
		return Singleton;
	}
	template<> CUSTOMCUBEVIEW_API UEnum* StaticEnum<ECubeComponentPos>()
	{
		return ECubeComponentPos_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECubeComponentPos(ECubeComponentPos_StaticEnum, TEXT("/Script/CustomCubeView"), TEXT("ECubeComponentPos"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomCubeView_ECubeComponentPos_Hash() { return 3402237976U; }
	UEnum* Z_Construct_UEnum_CustomCubeView_ECubeComponentPos()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomCubeView();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECubeComponentPos"), 0, Get_Z_Construct_UEnum_CustomCubeView_ECubeComponentPos_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECubeComponentPos::EFront", (int64)ECubeComponentPos::EFront },
				{ "ECubeComponentPos::EFrontUp", (int64)ECubeComponentPos::EFrontUp },
				{ "ECubeComponentPos::EFrontDown", (int64)ECubeComponentPos::EFrontDown },
				{ "ECubeComponentPos::EFrontLeft", (int64)ECubeComponentPos::EFrontLeft },
				{ "ECubeComponentPos::EFrontRight", (int64)ECubeComponentPos::EFrontRight },
				{ "ECubeComponentPos::EFrontUpLeft", (int64)ECubeComponentPos::EFrontUpLeft },
				{ "ECubeComponentPos::EFrontUpRight", (int64)ECubeComponentPos::EFrontUpRight },
				{ "ECubeComponentPos::EFrontDownLeft", (int64)ECubeComponentPos::EFrontDownLeft },
				{ "ECubeComponentPos::EFrontDownRight", (int64)ECubeComponentPos::EFrontDownRight },
				{ "ECubeComponentPos::EBack", (int64)ECubeComponentPos::EBack },
				{ "ECubeComponentPos::EBackUp", (int64)ECubeComponentPos::EBackUp },
				{ "ECubeComponentPos::EBackDown", (int64)ECubeComponentPos::EBackDown },
				{ "ECubeComponentPos::EBackLeft", (int64)ECubeComponentPos::EBackLeft },
				{ "ECubeComponentPos::EBackRight", (int64)ECubeComponentPos::EBackRight },
				{ "ECubeComponentPos::EBackUpLeft", (int64)ECubeComponentPos::EBackUpLeft },
				{ "ECubeComponentPos::EBackUpRight", (int64)ECubeComponentPos::EBackUpRight },
				{ "ECubeComponentPos::EBackDownLeft", (int64)ECubeComponentPos::EBackDownLeft },
				{ "ECubeComponentPos::EBackDownRight", (int64)ECubeComponentPos::EBackDownRight },
				{ "ECubeComponentPos::EUp", (int64)ECubeComponentPos::EUp },
				{ "ECubeComponentPos::EUpLeft", (int64)ECubeComponentPos::EUpLeft },
				{ "ECubeComponentPos::EUpRight", (int64)ECubeComponentPos::EUpRight },
				{ "ECubeComponentPos::EDown", (int64)ECubeComponentPos::EDown },
				{ "ECubeComponentPos::EDownLeft", (int64)ECubeComponentPos::EDownLeft },
				{ "ECubeComponentPos::EDownRight", (int64)ECubeComponentPos::EDownRight },
				{ "ECubeComponentPos::ELeft", (int64)ECubeComponentPos::ELeft },
				{ "ECubeComponentPos::ERight", (int64)ECubeComponentPos::ERight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// seq: Front->Back->Up->Down->Left->Right\n" },
				{ "EBack.Comment", "// \xe5\x90\x8e\n" },
				{ "EBack.Name", "ECubeComponentPos::EBack" },
				{ "EBack.ToolTip", "\xe5\x90\x8e" },
				{ "EBackDown.Name", "ECubeComponentPos::EBackDown" },
				{ "EBackDownLeft.Name", "ECubeComponentPos::EBackDownLeft" },
				{ "EBackDownRight.Name", "ECubeComponentPos::EBackDownRight" },
				{ "EBackLeft.Name", "ECubeComponentPos::EBackLeft" },
				{ "EBackRight.Name", "ECubeComponentPos::EBackRight" },
				{ "EBackUp.Name", "ECubeComponentPos::EBackUp" },
				{ "EBackUpLeft.Name", "ECubeComponentPos::EBackUpLeft" },
				{ "EBackUpRight.Name", "ECubeComponentPos::EBackUpRight" },
				{ "EDown.Comment", "// \xe4\xb8\x8b\n" },
				{ "EDown.Name", "ECubeComponentPos::EDown" },
				{ "EDown.ToolTip", "\xe4\xb8\x8b" },
				{ "EDownLeft.Name", "ECubeComponentPos::EDownLeft" },
				{ "EDownRight.Name", "ECubeComponentPos::EDownRight" },
				{ "EFront.Comment", "// \xe5\x89\x8d\n" },
				{ "EFront.Name", "ECubeComponentPos::EFront" },
				{ "EFront.ToolTip", "\xe5\x89\x8d" },
				{ "EFrontDown.Name", "ECubeComponentPos::EFrontDown" },
				{ "EFrontDownLeft.Name", "ECubeComponentPos::EFrontDownLeft" },
				{ "EFrontDownRight.Name", "ECubeComponentPos::EFrontDownRight" },
				{ "EFrontLeft.Name", "ECubeComponentPos::EFrontLeft" },
				{ "EFrontRight.Name", "ECubeComponentPos::EFrontRight" },
				{ "EFrontUp.Name", "ECubeComponentPos::EFrontUp" },
				{ "EFrontUpLeft.Name", "ECubeComponentPos::EFrontUpLeft" },
				{ "EFrontUpRight.Name", "ECubeComponentPos::EFrontUpRight" },
				{ "ELeft.Comment", "// \xe5\xb7\xa6\n" },
				{ "ELeft.Name", "ECubeComponentPos::ELeft" },
				{ "ELeft.ToolTip", "\xe5\xb7\xa6" },
				{ "ERight.Comment", "// \xe5\x8f\xb3\n" },
				{ "ERight.Name", "ECubeComponentPos::ERight" },
				{ "ERight.ToolTip", "\xe5\x8f\xb3" },
				{ "EUp.Comment", "// \xe4\xb8\x8a\n" },
				{ "EUp.Name", "ECubeComponentPos::EUp" },
				{ "EUp.ToolTip", "\xe4\xb8\x8a" },
				{ "EUpLeft.Name", "ECubeComponentPos::EUpLeft" },
				{ "EUpRight.Name", "ECubeComponentPos::EUpRight" },
				{ "ModuleRelativePath", "Public/CubeComponentPosType.h" },
				{ "ToolTip", "seq: Front->Back->Up->Down->Left->Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomCubeView,
				nullptr,
				"ECubeComponentPos",
				"ECubeComponentPos",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCubeDescribeDetail::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CUSTOMCUBEVIEW_API uint32 Get_Z_Construct_UScriptStruct_FCubeDescribeDetail_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCubeDescribeDetail, Z_Construct_UPackage__Script_CustomCubeView(), TEXT("CubeDescribeDetail"), sizeof(FCubeDescribeDetail), Get_Z_Construct_UScriptStruct_FCubeDescribeDetail_Hash());
	}
	return Singleton;
}
template<> CUSTOMCUBEVIEW_API UScriptStruct* StaticStruct<FCubeDescribeDetail>()
{
	return FCubeDescribeDetail::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCubeDescribeDetail(FCubeDescribeDetail::StaticStruct, TEXT("/Script/CustomCubeView"), TEXT("CubeDescribeDetail"), false, nullptr, nullptr);
static struct FScriptStruct_CustomCubeView_StaticRegisterNativesFCubeDescribeDetail
{
	FScriptStruct_CustomCubeView_StaticRegisterNativesFCubeDescribeDetail()
	{
		UScriptStruct::DeferCppStructOps<FCubeDescribeDetail>(FName(TEXT("CubeDescribeDetail")));
	}
} ScriptStruct_CustomCubeView_StaticRegisterNativesFCubeDescribeDetail;
	struct Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CubeCompPos_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeCompPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CubeCompPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CubeComponentPosType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCubeDescribeDetail>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeCompPos_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeCompPos_MetaData[] = {
		{ "Category", "CubeView|Cube" },
		{ "ModuleRelativePath", "Public/CubeComponentPosType.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeCompPos = { "CubeCompPos", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCubeDescribeDetail, CubeCompPos), Z_Construct_UEnum_CustomCubeView_ECubeComponentPos, METADATA_PARAMS(Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeCompPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeCompPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeMesh_MetaData[] = {
		{ "Category", "CubeView|Cube" },
		{ "ModuleRelativePath", "Public/CubeComponentPosType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCubeDescribeDetail, CubeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeMaterial_MetaData[] = {
		{ "Category", "CubeView|Cube" },
		{ "ModuleRelativePath", "Public/CubeComponentPosType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeMaterial = { "CubeMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCubeDescribeDetail, CubeMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeCompPos_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeCompPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::NewProp_CubeMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomCubeView,
		nullptr,
		&NewStructOps,
		"CubeDescribeDetail",
		sizeof(FCubeDescribeDetail),
		alignof(FCubeDescribeDetail),
		Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCubeDescribeDetail()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCubeDescribeDetail_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CustomCubeView();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CubeDescribeDetail"), sizeof(FCubeDescribeDetail), Get_Z_Construct_UScriptStruct_FCubeDescribeDetail_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCubeDescribeDetail_Hash() { return 4079308495U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
