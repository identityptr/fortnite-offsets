/**
 * decamp dumper generated SDK
 * Package: /Script/DeployedCoverGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DeployedCoverGameplayRuntime.DeployedCoverSpawnInfo
// Kind: ScriptStruct; super: none
struct FDeployedCoverSpawnInfo
{
public:
    std::uint8_t bIsValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> OverlappingActors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* BaseActor; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDeployedCoverSpawnInfo, bIsValid) == 0, "Offset mismatch for FDeployedCoverSpawnInfo::bIsValid");
static_assert(offsetof(FDeployedCoverSpawnInfo, OverlappingActors) == 8, "Offset mismatch for FDeployedCoverSpawnInfo::OverlappingActors");
static_assert(offsetof(FDeployedCoverSpawnInfo, BaseActor) == 24, "Offset mismatch for FDeployedCoverSpawnInfo::BaseActor");

// /Script/DeployedCoverGameplayRuntime.DeployedCoverSpawnerData
// Kind: ScriptStruct; super: none
struct FDeployedCoverSpawnerData
{
public:
    std::uint8_t bLineTraceForSpawnRot; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAdjustAttachBase; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDontSpawnOnPlayers; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDontSpawnOnPhysicsSim; // 0x0003 (Size: 0x1, Type: BoolProperty)
    float TraceCapsuleRadius; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TraceCapsuleHalfHeightCenter; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TraceCapsuleHalfHeightSide; // 0x000C (Size: 0x4, Type: FloatProperty)
    float BuildingPropMaxHealth; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    double MinDotWithUp; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double ZOffsetTolerance; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t VolumeBlockTag[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t TraceChannel; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    TArray<void*> SpawnData; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClassesToBlockSpawn; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDeployedCoverSpawnerData, bLineTraceForSpawnRot) == 0, "Offset mismatch for FDeployedCoverSpawnerData::bLineTraceForSpawnRot");
static_assert(offsetof(FDeployedCoverSpawnerData, bAdjustAttachBase) == 1, "Offset mismatch for FDeployedCoverSpawnerData::bAdjustAttachBase");
static_assert(offsetof(FDeployedCoverSpawnerData, bDontSpawnOnPlayers) == 2, "Offset mismatch for FDeployedCoverSpawnerData::bDontSpawnOnPlayers");
static_assert(offsetof(FDeployedCoverSpawnerData, bDontSpawnOnPhysicsSim) == 3, "Offset mismatch for FDeployedCoverSpawnerData::bDontSpawnOnPhysicsSim");
static_assert(offsetof(FDeployedCoverSpawnerData, TraceCapsuleRadius) == 4, "Offset mismatch for FDeployedCoverSpawnerData::TraceCapsuleRadius");
static_assert(offsetof(FDeployedCoverSpawnerData, TraceCapsuleHalfHeightCenter) == 8, "Offset mismatch for FDeployedCoverSpawnerData::TraceCapsuleHalfHeightCenter");
static_assert(offsetof(FDeployedCoverSpawnerData, TraceCapsuleHalfHeightSide) == 12, "Offset mismatch for FDeployedCoverSpawnerData::TraceCapsuleHalfHeightSide");
static_assert(offsetof(FDeployedCoverSpawnerData, BuildingPropMaxHealth) == 16, "Offset mismatch for FDeployedCoverSpawnerData::BuildingPropMaxHealth");
static_assert(offsetof(FDeployedCoverSpawnerData, MinDotWithUp) == 24, "Offset mismatch for FDeployedCoverSpawnerData::MinDotWithUp");
static_assert(offsetof(FDeployedCoverSpawnerData, ZOffsetTolerance) == 32, "Offset mismatch for FDeployedCoverSpawnerData::ZOffsetTolerance");
static_assert(offsetof(FDeployedCoverSpawnerData, VolumeBlockTag) == 40, "Offset mismatch for FDeployedCoverSpawnerData::VolumeBlockTag");
static_assert(offsetof(FDeployedCoverSpawnerData, TraceChannel) == 44, "Offset mismatch for FDeployedCoverSpawnerData::TraceChannel");
static_assert(offsetof(FDeployedCoverSpawnerData, SpawnData) == 48, "Offset mismatch for FDeployedCoverSpawnerData::SpawnData");
static_assert(offsetof(FDeployedCoverSpawnerData, ClassesToBlockSpawn) == 64, "Offset mismatch for FDeployedCoverSpawnerData::ClassesToBlockSpawn");

// /Script/DeployedCoverGameplayRuntime.DeployedCoverFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UDeployedCoverFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
