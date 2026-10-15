/**
 * decamp dumper generated SDK
 * Package: /Script/EntityStreaming
 */
#pragma once
#include "Basic.h"

// /Script/EntityStreaming.EntityStreamingCell
// Kind: ScriptStruct; super: none
struct FEntityStreamingCell
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Bounds[0x38]; // 0x0010 (Size: 0x38, Type: StructProperty)
    std::uint8_t bIsSpatial; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0049
    double StreamingDistance; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> Assets; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnreferencedAssets; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Dependents; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Prerequisites; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEntityStreamingCell, Guid) == 0, "Offset mismatch for FEntityStreamingCell::Guid");
static_assert(offsetof(FEntityStreamingCell, Bounds) == 16, "Offset mismatch for FEntityStreamingCell::Bounds");
static_assert(offsetof(FEntityStreamingCell, bIsSpatial) == 72, "Offset mismatch for FEntityStreamingCell::bIsSpatial");
static_assert(offsetof(FEntityStreamingCell, StreamingDistance) == 80, "Offset mismatch for FEntityStreamingCell::StreamingDistance");
static_assert(offsetof(FEntityStreamingCell, Assets) == 88, "Offset mismatch for FEntityStreamingCell::Assets");
static_assert(offsetof(FEntityStreamingCell, UnreferencedAssets) == 104, "Offset mismatch for FEntityStreamingCell::UnreferencedAssets");
static_assert(offsetof(FEntityStreamingCell, Dependents) == 120, "Offset mismatch for FEntityStreamingCell::Dependents");
static_assert(offsetof(FEntityStreamingCell, Prerequisites) == 136, "Offset mismatch for FEntityStreamingCell::Prerequisites");

// /Script/EntityStreaming.EntityStreamingAssetUserData
// Kind: Class; super: AssetUserData
class UEntityStreamingAssetUserData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> StreamingCells; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEntityStreamingAssetUserData, StreamingCells) == 48, "Offset mismatch for UEntityStreamingAssetUserData::StreamingCells");

// /Script/EntityStreaming.EntityStreamingAssetUserDataEntity
// Kind: Class; super: EntityStreamingAssetUserData
class UEntityStreamingAssetUserDataEntity
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> StreamingCells; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEntityStreamingAssetUserDataEntity, StreamingCells) == 48, "Offset mismatch for UEntityStreamingAssetUserDataEntity::StreamingCells");

// /Script/EntityStreaming.EntityStreamingCellAsset
// Kind: Class; super: Object
class UEntityStreamingCellAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Entities; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEntityStreamingCellAsset, Entities) == 40, "Offset mismatch for UEntityStreamingCellAsset::Entities");

// /Script/EntityStreaming.EntityStreamingSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UEntityStreamingSubsystem
{
public:
    std::uint8_t Opaque[1];
};
