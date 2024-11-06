#pragma once


#include "UObject/ObjectMacros.h"
// Packed
#include "Misc/EnumRange.h"

#include "CubeComponentPosType.generated.h"

// seq: Front->Back->Up->Down->Left->Right

UENUM(BlueprintType)
enum class ECubeComponentPos : uint8
{
	// 前
	EFront,
	EFrontUp,
	EFrontDown,
	EFrontLeft,
	EFrontRight,
	EFrontUpLeft,
	EFrontUpRight,
	EFrontDownLeft,
	EFrontDownRight,

	// 后
	EBack,
	EBackUp,
	EBackDown,
	EBackLeft,
	EBackRight,
	EBackUpLeft,
	EBackUpRight,
	EBackDownLeft,
	EBackDownRight,

	// 上
	EUp,
	EUpLeft,
	EUpRight,

	// 下
	EDown,
	EDownLeft,
	EDownRight,

	// 左
	ELeft,

	// 右
	ERight
};
// 使该枚举可以遍历
ENUM_RANGE_BY_FIRST_AND_LAST(ECubeComponentPos, ECubeComponentPos::EFront, ECubeComponentPos::ERight)

template <typename TEnum>
FString GetEnumValueAsString(const FString& EnumName, TEnum EnumValue)
{
	const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *EnumName, true);
	if (!EnumPtr)
	{
		return FString("InValid");
	}
	return EnumPtr->GetNameStringByIndex(static_cast<int32>(EnumValue));
}


USTRUCT(BlueprintType)
struct FCubeDescribeDetail
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="CubeView|Cube")
	ECubeComponentPos CubeCompPos;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CubeView|Cube")
	UStaticMesh* CubeMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CubeView|Cube")
	UMaterialInstance* CubeMaterial;

public:
	FCubeDescribeDetail(){}
	FCubeDescribeDetail(ECubeComponentPos PresetsPos)
		:CubeCompPos(PresetsPos),CubeMesh(nullptr),CubeMaterial(nullptr)
	{}
};