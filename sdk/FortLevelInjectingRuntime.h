/**
 * decamp dumper generated SDK
 * Package: /Script/FortLevelInjectingRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortLevelInjectingRuntime.FortHotfixableInjectionEQSFloatParam
// Kind: ScriptStruct; super: none
struct FFortHotfixableInjectionEQSFloatParam
{
public:
    FName ParamName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortHotfixableInjectionEQSFloatParam, ParamName) == 0, "Offset mismatch for FFortHotfixableInjectionEQSFloatParam::ParamName");
static_assert(offsetof(FFortHotfixableInjectionEQSFloatParam, Value) == 8, "Offset mismatch for FFortHotfixableInjectionEQSFloatParam::Value");

// /Script/FortLevelInjectingRuntime.FortLevelInjectionLocationMetadata
// Kind: ScriptStruct; super: TableRowBase
struct FFortLevelInjectionLocationMetadata
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortLevelInjectionLocationMetadata, bEnabled) == 8, "Offset mismatch for FFortLevelInjectionLocationMetadata::bEnabled");

// /Script/FortLevelInjectingRuntime.FortLevelInjectionRuntimeData
// Kind: ScriptStruct; super: none
struct FFortLevelInjectionRuntimeData
{
public:
    std::uint8_t LevelGUID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t LevelTransform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortLevelInjectionRuntimeData, LevelGUID) == 0, "Offset mismatch for FFortLevelInjectionRuntimeData::LevelGUID");
static_assert(offsetof(FFortLevelInjectionRuntimeData, LevelTransform) == 16, "Offset mismatch for FFortLevelInjectionRuntimeData::LevelTransform");

// /Script/FortLevelInjectingRuntime.FortLevelInjectionRuntimeDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FFortLevelInjectionRuntimeDataArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Items; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortLevelInjectionRuntimeDataArray, Items) == 72, "Offset mismatch for FFortLevelInjectionRuntimeDataArray::Items");

// /Script/FortLevelInjectingRuntime.FortLevelInjectionRuntimeDataBase
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FFortLevelInjectionRuntimeDataBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InjectionData[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LevelGUID[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t LevelTransform[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortLevelInjectionRuntimeDataBase, InjectionData) == 16, "Offset mismatch for FFortLevelInjectionRuntimeDataBase::InjectionData");
static_assert(offsetof(FFortLevelInjectionRuntimeDataBase, LevelGUID) == 48, "Offset mismatch for FFortLevelInjectionRuntimeDataBase::LevelGUID");
static_assert(offsetof(FFortLevelInjectionRuntimeDataBase, LevelTransform) == 64, "Offset mismatch for FFortLevelInjectionRuntimeDataBase::LevelTransform");

// /Script/FortLevelInjectingRuntime.FortLevelInjectionWorldAssetData
// Kind: ScriptStruct; super: none
struct FFortLevelInjectionWorldAssetData
{
public:
    std::uint8_t WorldAsset[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    FName TargetGridName; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortLevelInjectionWorldAssetData, WorldAsset) == 0, "Offset mismatch for FFortLevelInjectionWorldAssetData::WorldAsset");
static_assert(offsetof(FFortLevelInjectionWorldAssetData, TargetGridName) == 32, "Offset mismatch for FFortLevelInjectionWorldAssetData::TargetGridName");

// /Script/FortLevelInjectingRuntime.OnFortDynamicPOIInjected
// Kind: ScriptStruct; super: none
struct FOnFortDynamicPOIInjected
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortLevelInjectingRuntime.FortDynamicPOIInjectionManager
// Kind: Class; super: FortLevelInjectionManager
class UFortDynamicPOIInjectionManager
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    std::uint8_t LevelRevealDuration[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t LevelPreInjectionDuration[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t TeleportLocationUpOffset[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    void* LocationMetadataTable; // 0x0188 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GeoOffsetFromSpawnPoint[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    void* ObstaclePreset; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x01B0
    std::uint8_t ChosenInjectTransform[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDynamicPOIInjectionManager, LevelRevealDuration) == 272, "Offset mismatch for UFortDynamicPOIInjectionManager::LevelRevealDuration");
static_assert(offsetof(UFortDynamicPOIInjectionManager, LevelPreInjectionDuration) == 312, "Offset mismatch for UFortDynamicPOIInjectionManager::LevelPreInjectionDuration");
static_assert(offsetof(UFortDynamicPOIInjectionManager, TeleportLocationUpOffset) == 352, "Offset mismatch for UFortDynamicPOIInjectionManager::TeleportLocationUpOffset");
static_assert(offsetof(UFortDynamicPOIInjectionManager, LocationMetadataTable) == 392, "Offset mismatch for UFortDynamicPOIInjectionManager::LocationMetadataTable");
static_assert(offsetof(UFortDynamicPOIInjectionManager, GeoOffsetFromSpawnPoint) == 400, "Offset mismatch for UFortDynamicPOIInjectionManager::GeoOffsetFromSpawnPoint");
static_assert(offsetof(UFortDynamicPOIInjectionManager, ObstaclePreset) == 424, "Offset mismatch for UFortDynamicPOIInjectionManager::ObstaclePreset");
static_assert(offsetof(UFortDynamicPOIInjectionManager, ChosenInjectTransform) == 448, "Offset mismatch for UFortDynamicPOIInjectionManager::ChosenInjectTransform");

// /Script/FortLevelInjectingRuntime.FortLevelInjectionCheatManager
// Kind: Class; super: ChildCheatManager
class UFortLevelInjectionCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortLevelInjectingRuntime.FortLevelInjectionData
// Kind: Class; super: FortLevelInjectionDataBase
class UFortLevelInjectionData
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* LimitedInjectableLocationsEQS; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QueryParams; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InjectableLocationsLimit[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortLevelInjectionData, LimitedInjectableLocationsEQS) == 200, "Offset mismatch for UFortLevelInjectionData::LimitedInjectableLocationsEQS");
static_assert(offsetof(UFortLevelInjectionData, QueryParams) == 208, "Offset mismatch for UFortLevelInjectionData::QueryParams");
static_assert(offsetof(UFortLevelInjectionData, InjectableLocationsLimit) == 224, "Offset mismatch for UFortLevelInjectionData::InjectableLocationsLimit");

// /Script/FortLevelInjectingRuntime.FortLevelInjectionDataBase
// Kind: Class; super: DataAsset
class UFortLevelInjectionDataBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t BaseLevelAssetData[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    TArray<void*> HLODData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BoundsExtent[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    FString InjectedLevelCellSuffix; // 0x0078 (Size: 0x10, Type: StrProperty)
    std::int32_t InjectionRequestPriority; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x008C
    std::uint8_t Enabled[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    FString DebugName; // 0x00B8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortLevelInjectionDataBase, BaseLevelAssetData) == 40, "Offset mismatch for UFortLevelInjectionDataBase::BaseLevelAssetData");
static_assert(offsetof(UFortLevelInjectionDataBase, HLODData) == 80, "Offset mismatch for UFortLevelInjectionDataBase::HLODData");
static_assert(offsetof(UFortLevelInjectionDataBase, BoundsExtent) == 96, "Offset mismatch for UFortLevelInjectionDataBase::BoundsExtent");
static_assert(offsetof(UFortLevelInjectionDataBase, InjectedLevelCellSuffix) == 120, "Offset mismatch for UFortLevelInjectionDataBase::InjectedLevelCellSuffix");
static_assert(offsetof(UFortLevelInjectionDataBase, InjectionRequestPriority) == 136, "Offset mismatch for UFortLevelInjectionDataBase::InjectionRequestPriority");
static_assert(offsetof(UFortLevelInjectionDataBase, Enabled) == 144, "Offset mismatch for UFortLevelInjectionDataBase::Enabled");
static_assert(offsetof(UFortLevelInjectionDataBase, DebugName) == 184, "Offset mismatch for UFortLevelInjectionDataBase::DebugName");

// /Script/FortLevelInjectingRuntime.FortLevelInjectionLocation
// Kind: Class; super: BuildingLevelInstance
class UFortLevelInjectionLocation
{
public:
    std::uint8_t Pad_0000[0x738]; // 0x0000
    std::uint8_t InstanceTags[0x20]; // 0x0738 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocationMetadata[0x10]; // 0x0758 (Size: 0x10, Type: StructProperty)
    TSoftObjectPtr<void> NoWorldAsset; // 0x0768 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortLevelInjectionLocation, InstanceTags) == 1848, "Offset mismatch for UFortLevelInjectionLocation::InstanceTags");
static_assert(offsetof(UFortLevelInjectionLocation, LocationMetadata) == 1880, "Offset mismatch for UFortLevelInjectionLocation::LocationMetadata");
static_assert(offsetof(UFortLevelInjectionLocation, NoWorldAsset) == 1896, "Offset mismatch for UFortLevelInjectionLocation::NoWorldAsset");

// /Script/FortLevelInjectingRuntime.FortLevelInjectionManager
// Kind: Class; super: GameStateComponent
class UFortLevelInjectionManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* InjectionData; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EventTagDensityData; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InjectedLevels; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t EQSHandle; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x00EC
    std::uint8_t bPendingRequest; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReadyToInject; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00FA
    TArray<void*> ReservedInjectionLocations; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortLevelInjectionManager, InjectionData) == 192, "Offset mismatch for UFortLevelInjectionManager::InjectionData");
static_assert(offsetof(UFortLevelInjectionManager, EventTagDensityData) == 200, "Offset mismatch for UFortLevelInjectionManager::EventTagDensityData");
static_assert(offsetof(UFortLevelInjectionManager, InjectedLevels) == 216, "Offset mismatch for UFortLevelInjectionManager::InjectedLevels");
static_assert(offsetof(UFortLevelInjectionManager, EQSHandle) == 232, "Offset mismatch for UFortLevelInjectionManager::EQSHandle");
static_assert(offsetof(UFortLevelInjectionManager, bPendingRequest) == 248, "Offset mismatch for UFortLevelInjectionManager::bPendingRequest");
static_assert(offsetof(UFortLevelInjectionManager, bReadyToInject) == 249, "Offset mismatch for UFortLevelInjectionManager::bReadyToInject");
static_assert(offsetof(UFortLevelInjectionManager, ReservedInjectionLocations) == 256, "Offset mismatch for UFortLevelInjectionManager::ReservedInjectionLocations");

// /Script/FortLevelInjectingRuntime.FortLevelInjectionManagerBase
// Kind: Class; super: GameStateComponent
class UFortLevelInjectionManagerBase
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t InjectedLevels[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortLevelInjectionManagerBase, InjectedLevels) == 192, "Offset mismatch for UFortLevelInjectionManagerBase::InjectedLevels");
