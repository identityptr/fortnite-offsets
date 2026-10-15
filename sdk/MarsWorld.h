/**
 * decamp dumper generated SDK
 * Package: /Script/MarsWorld
 */
#pragma once
#include "Basic.h"

// /Script/MarsWorld.MarsInstancedActorsSubsystem
// Kind: Class; super: JunoInstancedActorSubsystem
class UMarsInstancedActorsSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ProjectSettings; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* DataRegistrySubsystem; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* ActorPartitionSubsystem; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* InstancedActorsManagerClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x1C8]; // 0x0088
    void* ExemplarActorWorld; // 0x0250 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0258
    void* SettingsType; // 0x0268 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMarsInstancedActorsSubsystem, ProjectSettings) == 104, "Offset mismatch for UMarsInstancedActorsSubsystem::ProjectSettings");
static_assert(offsetof(UMarsInstancedActorsSubsystem, DataRegistrySubsystem) == 112, "Offset mismatch for UMarsInstancedActorsSubsystem::DataRegistrySubsystem");
static_assert(offsetof(UMarsInstancedActorsSubsystem, ActorPartitionSubsystem) == 120, "Offset mismatch for UMarsInstancedActorsSubsystem::ActorPartitionSubsystem");
static_assert(offsetof(UMarsInstancedActorsSubsystem, InstancedActorsManagerClass) == 128, "Offset mismatch for UMarsInstancedActorsSubsystem::InstancedActorsManagerClass");
static_assert(offsetof(UMarsInstancedActorsSubsystem, ExemplarActorWorld) == 592, "Offset mismatch for UMarsInstancedActorsSubsystem::ExemplarActorWorld");
static_assert(offsetof(UMarsInstancedActorsSubsystem, SettingsType) == 616, "Offset mismatch for UMarsInstancedActorsSubsystem::SettingsType");

// /Script/MarsWorld.MarsProfileGo
// Kind: Class; super: LFNProfileGo
class UMarsProfileGo
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TMap<void*, void*> CsvNonPersistentMetadata; // 0x0088 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CsvMetadata; // 0x0098 (Size: 0x10, Type: MapProperty)
    float DefaultSettleTime; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x364]; // 0x00AC
    TArray<void*> ProfileGoScenarios; // 0x0410 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoGeneratedScenarios; // 0x0420 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoCollections; // 0x0430 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProfileGoCommands; // 0x0440 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimProfilingAssetsBlacklist; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimProfilingCosmeticsWhitelist; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedAthenaCosmeticItemDefinitions; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedAthenaCosmeticVariantTokens; // 0x0480 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMarsProfileGo, CsvNonPersistentMetadata) == 136, "Offset mismatch for UMarsProfileGo::CsvNonPersistentMetadata");
static_assert(offsetof(UMarsProfileGo, CsvMetadata) == 152, "Offset mismatch for UMarsProfileGo::CsvMetadata");
static_assert(offsetof(UMarsProfileGo, DefaultSettleTime) == 168, "Offset mismatch for UMarsProfileGo::DefaultSettleTime");
static_assert(offsetof(UMarsProfileGo, ProfileGoScenarios) == 1040, "Offset mismatch for UMarsProfileGo::ProfileGoScenarios");
static_assert(offsetof(UMarsProfileGo, ProfileGoGeneratedScenarios) == 1056, "Offset mismatch for UMarsProfileGo::ProfileGoGeneratedScenarios");
static_assert(offsetof(UMarsProfileGo, ProfileGoCollections) == 1072, "Offset mismatch for UMarsProfileGo::ProfileGoCollections");
static_assert(offsetof(UMarsProfileGo, ProfileGoCommands) == 1088, "Offset mismatch for UMarsProfileGo::ProfileGoCommands");
static_assert(offsetof(UMarsProfileGo, AnimProfilingAssetsBlacklist) == 1104, "Offset mismatch for UMarsProfileGo::AnimProfilingAssetsBlacklist");
static_assert(offsetof(UMarsProfileGo, AnimProfilingCosmeticsWhitelist) == 1120, "Offset mismatch for UMarsProfileGo::AnimProfilingCosmeticsWhitelist");
static_assert(offsetof(UMarsProfileGo, CachedAthenaCosmeticItemDefinitions) == 1136, "Offset mismatch for UMarsProfileGo::CachedAthenaCosmeticItemDefinitions");
static_assert(offsetof(UMarsProfileGo, CachedAthenaCosmeticVariantTokens) == 1152, "Offset mismatch for UMarsProfileGo::CachedAthenaCosmeticVariantTokens");

// /Script/MarsWorld.MarsWorldTileSelection
// Kind: Class; super: JunoWorldTileSelectionBase
class UMarsWorldTileSelection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> ProceduralWorldSettings; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    float TileExtent; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::int32_t WorldGridCount; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int64_t WorldSize; // 0x0038 (Size: 0x8, Type: Int64Property)
    std::uint8_t BaseTileset[0x4]; // 0x0040 (Size: 0x4, Type: StructProperty)
    std::uint8_t bRequiresDebugArea; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableBiomeSwaps; // 0x0045 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableBorderPermutations; // 0x0046 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0047
    FName WaterTileName; // 0x0048 (Size: 0x8, Type: NameProperty)
    void* JunoWorldTileLayoutInterface; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* RandomStreamGenerator; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMarsWorldTileSelection, ProceduralWorldSettings) == 40, "Offset mismatch for UMarsWorldTileSelection::ProceduralWorldSettings");
static_assert(offsetof(UMarsWorldTileSelection, TileExtent) == 48, "Offset mismatch for UMarsWorldTileSelection::TileExtent");
static_assert(offsetof(UMarsWorldTileSelection, WorldGridCount) == 52, "Offset mismatch for UMarsWorldTileSelection::WorldGridCount");
static_assert(offsetof(UMarsWorldTileSelection, WorldSize) == 56, "Offset mismatch for UMarsWorldTileSelection::WorldSize");
static_assert(offsetof(UMarsWorldTileSelection, BaseTileset) == 64, "Offset mismatch for UMarsWorldTileSelection::BaseTileset");
static_assert(offsetof(UMarsWorldTileSelection, bRequiresDebugArea) == 68, "Offset mismatch for UMarsWorldTileSelection::bRequiresDebugArea");
static_assert(offsetof(UMarsWorldTileSelection, bEnableBiomeSwaps) == 69, "Offset mismatch for UMarsWorldTileSelection::bEnableBiomeSwaps");
static_assert(offsetof(UMarsWorldTileSelection, bEnableBorderPermutations) == 70, "Offset mismatch for UMarsWorldTileSelection::bEnableBorderPermutations");
static_assert(offsetof(UMarsWorldTileSelection, WaterTileName) == 72, "Offset mismatch for UMarsWorldTileSelection::WaterTileName");
static_assert(offsetof(UMarsWorldTileSelection, JunoWorldTileLayoutInterface) == 80, "Offset mismatch for UMarsWorldTileSelection::JunoWorldTileLayoutInterface");
static_assert(offsetof(UMarsWorldTileSelection, RandomStreamGenerator) == 88, "Offset mismatch for UMarsWorldTileSelection::RandomStreamGenerator");
