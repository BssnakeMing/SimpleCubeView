// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMCUBEVIEW_CubeComponentPosType_generated_h
#error "CubeComponentPosType.generated.h already included, missing '#pragma once' in CubeComponentPosType.h"
#endif
#define CUSTOMCUBEVIEW_CubeComponentPosType_generated_h

#define HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_CubeComponentPosType_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCubeDescribeDetail_Statics; \
	CUSTOMCUBEVIEW_API static class UScriptStruct* StaticStruct();


template<> CUSTOMCUBEVIEW_API UScriptStruct* StaticStruct<struct FCubeDescribeDetail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_CustomCubeView_Source_CustomCubeView_Public_CubeComponentPosType_h


#define FOREACH_ENUM_ECUBECOMPONENTPOS(op) \
	op(ECubeComponentPos::EFront) \
	op(ECubeComponentPos::EFrontUp) \
	op(ECubeComponentPos::EFrontDown) \
	op(ECubeComponentPos::EFrontLeft) \
	op(ECubeComponentPos::EFrontRight) \
	op(ECubeComponentPos::EFrontUpLeft) \
	op(ECubeComponentPos::EFrontUpRight) \
	op(ECubeComponentPos::EFrontDownLeft) \
	op(ECubeComponentPos::EFrontDownRight) \
	op(ECubeComponentPos::EBack) \
	op(ECubeComponentPos::EBackUp) \
	op(ECubeComponentPos::EBackDown) \
	op(ECubeComponentPos::EBackLeft) \
	op(ECubeComponentPos::EBackRight) \
	op(ECubeComponentPos::EBackUpLeft) \
	op(ECubeComponentPos::EBackUpRight) \
	op(ECubeComponentPos::EBackDownLeft) \
	op(ECubeComponentPos::EBackDownRight) \
	op(ECubeComponentPos::EUp) \
	op(ECubeComponentPos::EUpLeft) \
	op(ECubeComponentPos::EUpRight) \
	op(ECubeComponentPos::EDown) \
	op(ECubeComponentPos::EDownLeft) \
	op(ECubeComponentPos::EDownRight) \
	op(ECubeComponentPos::ELeft) \
	op(ECubeComponentPos::ERight) 

enum class ECubeComponentPos : uint8;
template<> CUSTOMCUBEVIEW_API UEnum* StaticEnum<ECubeComponentPos>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
