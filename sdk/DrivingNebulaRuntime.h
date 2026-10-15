/**
 * decamp dumper generated SDK
 * Package: /Script/DrivingNebulaRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DrivingNebulaRuntime.DrivingNebula_BlockSpawnData
// Kind: ScriptStruct; super: none
struct FDrivingNebula_BlockSpawnData
{
public:
    std::uint8_t RelativeTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t Mesh[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BlockColor; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0081
    std::int32_t VariationIndex; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t FallOrder; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bPreSpawned; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLingers; // 0x008D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDrivingNebula_BlockSpawnData, RelativeTransform) == 0, "Offset mismatch for FDrivingNebula_BlockSpawnData::RelativeTransform");
static_assert(offsetof(FDrivingNebula_BlockSpawnData, Mesh) == 96, "Offset mismatch for FDrivingNebula_BlockSpawnData::Mesh");
static_assert(offsetof(FDrivingNebula_BlockSpawnData, BlockColor) == 128, "Offset mismatch for FDrivingNebula_BlockSpawnData::BlockColor");
static_assert(offsetof(FDrivingNebula_BlockSpawnData, VariationIndex) == 132, "Offset mismatch for FDrivingNebula_BlockSpawnData::VariationIndex");
static_assert(offsetof(FDrivingNebula_BlockSpawnData, FallOrder) == 136, "Offset mismatch for FDrivingNebula_BlockSpawnData::FallOrder");
static_assert(offsetof(FDrivingNebula_BlockSpawnData, bPreSpawned) == 140, "Offset mismatch for FDrivingNebula_BlockSpawnData::bPreSpawned");
static_assert(offsetof(FDrivingNebula_BlockSpawnData, bLingers) == 141, "Offset mismatch for FDrivingNebula_BlockSpawnData::bLingers");

// /Script/DrivingNebulaRuntime.BGA_DrivingNebula_Spawner
// Kind: Class; super: BuildingGameplayActor
class UBGA_DrivingNebula_Spawner
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    TArray<void*> BakedBlocks; // 0x0920 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> BlockColorMap; // 0x0930 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UBGA_DrivingNebula_Spawner, BakedBlocks) == 2336, "Offset mismatch for UBGA_DrivingNebula_Spawner::BakedBlocks");
static_assert(offsetof(UBGA_DrivingNebula_Spawner, BlockColorMap) == 2352, "Offset mismatch for UBGA_DrivingNebula_Spawner::BlockColorMap");

// /Script/DrivingNebulaRuntime.StaticMeshComponent_DrivingNebula_BlockPreview
// Kind: Class; super: StaticMeshComponent
class UStaticMeshComponent_DrivingNebula_BlockPreview
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    std::uint8_t BlockData[0x90]; // 0x06B0 (Size: 0x90, Type: StructProperty)
    std::int32_t BlockTintCPDIndex; // 0x0740 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UStaticMeshComponent_DrivingNebula_BlockPreview, BlockData) == 1712, "Offset mismatch for UStaticMeshComponent_DrivingNebula_BlockPreview::BlockData");
static_assert(offsetof(UStaticMeshComponent_DrivingNebula_BlockPreview, BlockTintCPDIndex) == 1856, "Offset mismatch for UStaticMeshComponent_DrivingNebula_BlockPreview::BlockTintCPDIndex");

// /Script/DrivingNebulaRuntime.TargetingSelectionTask_Trace_DrivingNebula
// Kind: Class; super: TargetingSelectionTask_Trace
class UTargetingSelectionTask_Trace_DrivingNebula
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    float DuplicateImpactTolerance; // 0x0170 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UTargetingSelectionTask_Trace_DrivingNebula, DuplicateImpactTolerance) == 368, "Offset mismatch for UTargetingSelectionTask_Trace_DrivingNebula::DuplicateImpactTolerance");
