/**
 * decamp dumper generated SDK
 * Package: /Script/MutableAssetUserData
 */
#pragma once
#include "Basic.h"

// /Script/MutableAssetUserData.MeshAddAssetUserData
// Kind: ScriptStruct; super: ExternalOperation
struct FMeshAddAssetUserData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MutableAssetUserData.MutableAssetUserData
// Kind: ScriptStruct; super: CustomizableObjectExternalAssetCollector
struct FMutableAssetUserData
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* AssetUserData; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMutableAssetUserData, AssetUserData) == 24, "Offset mismatch for FMutableAssetUserData::AssetUserData");
