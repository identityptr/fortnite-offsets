/**
 * decamp dumper generated SDK
 * Package: /Script/InstancedActors
 */
#pragma once
#include "Basic.h"

// /Script/InstancedActors.ClassConfigOverrideEntry
// Kind: ScriptStruct; super: none
struct FClassConfigOverrideEntry
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ConfigOverride[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClassConfigOverrideEntry, ConfigOverride) == 8, "Offset mismatch for FClassConfigOverrideEntry::ConfigOverride");

// /Script/InstancedActors.InstancedActorsClassSettings
// Kind: ScriptStruct; super: InstancedActorsClassSettingsBase
struct FInstancedActorsClassSettings
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t OverrideSettings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInstancedActorsClassSettings, OverrideSettings) == 24, "Offset mismatch for FInstancedActorsClassSettings::OverrideSettings");

// /Script/InstancedActors.InstancedActorsClassSettingsBase
// Kind: ScriptStruct; super: TableRowBase
struct FInstancedActorsClassSettingsBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> BaseSettings; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInstancedActorsClassSettingsBase, BaseSettings) == 8, "Offset mismatch for FInstancedActorsClassSettingsBase::BaseSettings");

// /Script/InstancedActors.InstancedActorsConfig
// Kind: ScriptStruct; super: none
struct FInstancedActorsConfig
{
public:
    void* ServerActorSpawnerSubsystemClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* ClientActorSpawnerSubsystemClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* InstancedActorsSubsystemClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
    void* StationaryVisualizationTraitClass; // 0x0018 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FInstancedActorsConfig, ServerActorSpawnerSubsystemClass) == 0, "Offset mismatch for FInstancedActorsConfig::ServerActorSpawnerSubsystemClass");
static_assert(offsetof(FInstancedActorsConfig, ClientActorSpawnerSubsystemClass) == 8, "Offset mismatch for FInstancedActorsConfig::ClientActorSpawnerSubsystemClass");
static_assert(offsetof(FInstancedActorsConfig, InstancedActorsSubsystemClass) == 16, "Offset mismatch for FInstancedActorsConfig::InstancedActorsSubsystemClass");
static_assert(offsetof(FInstancedActorsConfig, StationaryVisualizationTraitClass) == 24, "Offset mismatch for FInstancedActorsConfig::StationaryVisualizationTraitClass");

// /Script/InstancedActors.InstancedActorsDataSharedFragment
// Kind: ScriptStruct; super: MassSharedFragment
struct FInstancedActorsDataSharedFragment
{
public:
    TWeakObjectPtr<void> InstanceData; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FInstancedActorsDataSharedFragment, InstanceData) == 0, "Offset mismatch for FInstancedActorsDataSharedFragment::InstanceData");

// /Script/InstancedActors.InstancedActorsDelta
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FInstancedActorsDelta
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t InstanceIndex[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t bDestroyed; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentLifecyclePhaseIndex; // 0x000F (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInstancedActorsDelta, InstanceIndex) == 12, "Offset mismatch for FInstancedActorsDelta::InstanceIndex");
static_assert(offsetof(FInstancedActorsDelta, bDestroyed) == 14, "Offset mismatch for FInstancedActorsDelta::bDestroyed");
static_assert(offsetof(FInstancedActorsDelta, CurrentLifecyclePhaseIndex) == 15, "Offset mismatch for FInstancedActorsDelta::CurrentLifecyclePhaseIndex");

// /Script/InstancedActors.InstancedActorsDeltaList
// Kind: ScriptStruct; super: FastArraySerializer
struct FInstancedActorsDeltaList
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> InstanceDeltas; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInstancedActorsDeltaList, InstanceDeltas) == 96, "Offset mismatch for FInstancedActorsDeltaList::InstanceDeltas");

// /Script/InstancedActors.InstancedActorsFragment
// Kind: ScriptStruct; super: MassFragment
struct FInstancedActorsFragment
{
public:
    TWeakObjectPtr<void> InstanceData; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t InstanceIndex[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInstancedActorsFragment, InstanceData) == 0, "Offset mismatch for FInstancedActorsFragment::InstanceData");
static_assert(offsetof(FInstancedActorsFragment, InstanceIndex) == 8, "Offset mismatch for FInstancedActorsFragment::InstanceIndex");

// /Script/InstancedActors.InstancedActorsInstanceHandle
// Kind: ScriptStruct; super: none
struct FInstancedActorsInstanceHandle
{
public:
    TWeakObjectPtr<void> InstancedActorData; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Index[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInstancedActorsInstanceHandle, InstancedActorData) == 0, "Offset mismatch for FInstancedActorsInstanceHandle::InstancedActorData");
static_assert(offsetof(FInstancedActorsInstanceHandle, Index) == 8, "Offset mismatch for FInstancedActorsInstanceHandle::Index");

// /Script/InstancedActors.InstancedActorsInstanceIndex
// Kind: ScriptStruct; super: none
struct FInstancedActorsInstanceIndex
{
public:
    std::uint16_t Index; // 0x0000 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FInstancedActorsInstanceIndex, Index) == 0, "Offset mismatch for FInstancedActorsInstanceIndex::Index");

// /Script/InstancedActors.InstancedActorsIterationContext
// Kind: ScriptStruct; super: none
struct FInstancedActorsIterationContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InstancedActors.InstancedActorsManagerHandle
// Kind: ScriptStruct; super: none
struct FInstancedActorsManagerHandle
{
public:
    std::int32_t ManagerID; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInstancedActorsManagerHandle, ManagerID) == 0, "Offset mismatch for FInstancedActorsManagerHandle::ManagerID");

// /Script/InstancedActors.InstancedActorsMassSpawnData
// Kind: ScriptStruct; super: none
struct FInstancedActorsMassSpawnData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InstancedActors.InstancedActorsMeshSwitchFragment
// Kind: ScriptStruct; super: MassFragment
struct FInstancedActorsMeshSwitchFragment
{
public:
    std::uint8_t NewStaticMeshDescHandle[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint8_t NewSkinnedMeshDescHandle[0x1]; // 0x0002 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInstancedActorsMeshSwitchFragment, NewStaticMeshDescHandle) == 0, "Offset mismatch for FInstancedActorsMeshSwitchFragment::NewStaticMeshDescHandle");
static_assert(offsetof(FInstancedActorsMeshSwitchFragment, NewSkinnedMeshDescHandle) == 2, "Offset mismatch for FInstancedActorsMeshSwitchFragment::NewSkinnedMeshDescHandle");

// /Script/InstancedActors.InstancedActorsModifierVolumeHandle
// Kind: ScriptStruct; super: none
struct FInstancedActorsModifierVolumeHandle
{
public:
    std::int32_t ModifierVolumeID; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInstancedActorsModifierVolumeHandle, ModifierVolumeID) == 0, "Offset mismatch for FInstancedActorsModifierVolumeHandle::ModifierVolumeID");

// /Script/InstancedActors.InstancedActorsSettings
// Kind: ScriptStruct; super: TableRowBase
struct FInstancedActorsSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bOverride_AffectDistanceFieldLighting; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bOverride_DetailedRepresentationLODDistance (shared storage)
    // 0x0008 BoolProperty bOverride_LODDistanceScales (shared storage)
    // 0x0008 BoolProperty bOverride_MaxActorDistance (shared storage)
    // 0x0008 BoolProperty bOverride_MaxInstanceDistance (shared storage)
    // 0x0008 BoolProperty bOverride_MaxInstanceDistances (shared storage)
    // 0x0008 BoolProperty bOverride_bDisableAutoDistanceCulling (shared storage)
    // 0x0008 BoolProperty bOverride_bInstancesCastShadows (shared storage)
    std::uint8_t bOverride_ActorClass; // 0x0009 (Size: 0x1, Type: BoolProperty)
    // 0x0009 BoolProperty bOverride_ActorEjectionMovementThreshold (shared storage)
    // 0x0009 BoolProperty bOverride_ForceLowRepresentationLODDistance (shared storage)
    // 0x0009 BoolProperty bOverride_OverrideWorldPartitionGrid (shared storage)
    // 0x0009 BoolProperty bOverride_ScaleEntityCount (shared storage)
    // 0x0009 BoolProperty bOverride_WorldPositionOffsetDisableDistance (shared storage)
    // 0x0009 BoolProperty bOverride_bCanEverAffectNavigation (shared storage)
    // 0x0009 BoolProperty bOverride_bEjectOnActorMoved (shared storage)
    std::uint8_t bOverride_GameplayTags; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bOverride_bCanBeDamaged (shared storage)
    // 0x000A BoolProperty bOverride_bControlPhysicsState (shared storage)
    // 0x000A BoolProperty bOverride_bIgnoreModifierVolumes (shared storage)
    // 0x000A BoolProperty bOverride_bModifierVolumeCheckFullyEnclosed (shared storage)
    std::uint8_t bInstancesCastShadows; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    double MaxActorDistance; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bDisableAutoDistanceCulling; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bControlPhysicsState; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x001A
    double MaxInstanceDistance; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> MaxInstanceDistances; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LODDistanceScales; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AffectDistanceFieldLighting; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    double DetailedRepresentationLODDistance; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double ForceLowRepresentationLODDistance; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    std::int32_t WorldPositionOffsetDisableDistance; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEjectOnActorMoved; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x006D
    float ActorEjectionMovementThreshold; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanEverAffectNavigation; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0075
    std::uint8_t OverrideWorldPartitionGrid[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    float ScaleEntityCount; // 0x007C (Size: 0x4, Type: FloatProperty)
    void* ActorClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bCanBeDamaged; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreModifierVolumes; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bModifierVolumeCheckFullyEnclosed; // 0x008A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x5]; // 0x008B
    std::uint8_t GameplayTags[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    TArray<void*> AppliedSettingsOverrides; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInstancedActorsSettings, bOverride_AffectDistanceFieldLighting) == 8, "Offset mismatch for FInstancedActorsSettings::bOverride_AffectDistanceFieldLighting");
static_assert(offsetof(FInstancedActorsSettings, bOverride_ActorClass) == 9, "Offset mismatch for FInstancedActorsSettings::bOverride_ActorClass");
static_assert(offsetof(FInstancedActorsSettings, bOverride_GameplayTags) == 10, "Offset mismatch for FInstancedActorsSettings::bOverride_GameplayTags");
static_assert(offsetof(FInstancedActorsSettings, bInstancesCastShadows) == 11, "Offset mismatch for FInstancedActorsSettings::bInstancesCastShadows");
static_assert(offsetof(FInstancedActorsSettings, MaxActorDistance) == 16, "Offset mismatch for FInstancedActorsSettings::MaxActorDistance");
static_assert(offsetof(FInstancedActorsSettings, bDisableAutoDistanceCulling) == 24, "Offset mismatch for FInstancedActorsSettings::bDisableAutoDistanceCulling");
static_assert(offsetof(FInstancedActorsSettings, bControlPhysicsState) == 25, "Offset mismatch for FInstancedActorsSettings::bControlPhysicsState");
static_assert(offsetof(FInstancedActorsSettings, MaxInstanceDistance) == 32, "Offset mismatch for FInstancedActorsSettings::MaxInstanceDistance");
static_assert(offsetof(FInstancedActorsSettings, MaxInstanceDistances) == 40, "Offset mismatch for FInstancedActorsSettings::MaxInstanceDistances");
static_assert(offsetof(FInstancedActorsSettings, LODDistanceScales) == 56, "Offset mismatch for FInstancedActorsSettings::LODDistanceScales");
static_assert(offsetof(FInstancedActorsSettings, AffectDistanceFieldLighting) == 72, "Offset mismatch for FInstancedActorsSettings::AffectDistanceFieldLighting");
static_assert(offsetof(FInstancedActorsSettings, DetailedRepresentationLODDistance) == 88, "Offset mismatch for FInstancedActorsSettings::DetailedRepresentationLODDistance");
static_assert(offsetof(FInstancedActorsSettings, ForceLowRepresentationLODDistance) == 96, "Offset mismatch for FInstancedActorsSettings::ForceLowRepresentationLODDistance");
static_assert(offsetof(FInstancedActorsSettings, WorldPositionOffsetDisableDistance) == 104, "Offset mismatch for FInstancedActorsSettings::WorldPositionOffsetDisableDistance");
static_assert(offsetof(FInstancedActorsSettings, bEjectOnActorMoved) == 108, "Offset mismatch for FInstancedActorsSettings::bEjectOnActorMoved");
static_assert(offsetof(FInstancedActorsSettings, ActorEjectionMovementThreshold) == 112, "Offset mismatch for FInstancedActorsSettings::ActorEjectionMovementThreshold");
static_assert(offsetof(FInstancedActorsSettings, bCanEverAffectNavigation) == 116, "Offset mismatch for FInstancedActorsSettings::bCanEverAffectNavigation");
static_assert(offsetof(FInstancedActorsSettings, OverrideWorldPartitionGrid) == 120, "Offset mismatch for FInstancedActorsSettings::OverrideWorldPartitionGrid");
static_assert(offsetof(FInstancedActorsSettings, ScaleEntityCount) == 124, "Offset mismatch for FInstancedActorsSettings::ScaleEntityCount");
static_assert(offsetof(FInstancedActorsSettings, ActorClass) == 128, "Offset mismatch for FInstancedActorsSettings::ActorClass");
static_assert(offsetof(FInstancedActorsSettings, bCanBeDamaged) == 136, "Offset mismatch for FInstancedActorsSettings::bCanBeDamaged");
static_assert(offsetof(FInstancedActorsSettings, bIgnoreModifierVolumes) == 137, "Offset mismatch for FInstancedActorsSettings::bIgnoreModifierVolumes");
static_assert(offsetof(FInstancedActorsSettings, bModifierVolumeCheckFullyEnclosed) == 138, "Offset mismatch for FInstancedActorsSettings::bModifierVolumeCheckFullyEnclosed");
static_assert(offsetof(FInstancedActorsSettings, GameplayTags) == 144, "Offset mismatch for FInstancedActorsSettings::GameplayTags");
static_assert(offsetof(FInstancedActorsSettings, AppliedSettingsOverrides) == 176, "Offset mismatch for FInstancedActorsSettings::AppliedSettingsOverrides");

// /Script/InstancedActors.InstancedActorsSoftVisualizationDesc
// Kind: ScriptStruct; super: none
struct FInstancedActorsSoftVisualizationDesc
{
public:
    TArray<void*> ISMComponentDescriptors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInstancedActorsSoftVisualizationDesc, ISMComponentDescriptors) == 0, "Offset mismatch for FInstancedActorsSoftVisualizationDesc::ISMComponentDescriptors");

// /Script/InstancedActors.InstancedActorsTagSet
// Kind: ScriptStruct; super: none
struct FInstancedActorsTagSet
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Hash[0x1]; // 0x0020 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FInstancedActorsTagSet, Tags) == 0, "Offset mismatch for FInstancedActorsTagSet::Tags");
static_assert(offsetof(FInstancedActorsTagSet, Hash) == 32, "Offset mismatch for FInstancedActorsTagSet::Hash");

// /Script/InstancedActors.InstancedActorsVisualizationDesc
// Kind: ScriptStruct; super: none
struct FInstancedActorsVisualizationDesc
{
public:
    TArray<void*> ISMComponentDescriptors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CustomDataFloats; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInstancedActorsVisualizationDesc, ISMComponentDescriptors) == 0, "Offset mismatch for FInstancedActorsVisualizationDesc::ISMComponentDescriptors");
static_assert(offsetof(FInstancedActorsVisualizationDesc, CustomDataFloats) == 16, "Offset mismatch for FInstancedActorsVisualizationDesc::CustomDataFloats");

// /Script/InstancedActors.InstancedActorsVisualizationInfo
// Kind: ScriptStruct; super: none
struct FInstancedActorsVisualizationInfo
{
public:
    std::uint8_t VisualizationDesc[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TArray<void*> ISMComponents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MassStaticMeshDescHandle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInstancedActorsVisualizationInfo, VisualizationDesc) == 0, "Offset mismatch for FInstancedActorsVisualizationInfo::VisualizationDesc");
static_assert(offsetof(FInstancedActorsVisualizationInfo, ISMComponents) == 32, "Offset mismatch for FInstancedActorsVisualizationInfo::ISMComponents");
static_assert(offsetof(FInstancedActorsVisualizationInfo, MassStaticMeshDescHandle) == 48, "Offset mismatch for FInstancedActorsVisualizationInfo::MassStaticMeshDescHandle");

// /Script/InstancedActors.InstancedActorsVisualizationProcessorTag
// Kind: ScriptStruct; super: MassTag
struct FInstancedActorsVisualizationProcessorTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InstancedActors.ClientInstancedActorsSpawnerSubsystem
// Kind: Class; super: MassActorSpawnerSubsystem
class UClientInstancedActorsSpawnerSubsystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> SpawnRequests; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorsToDestroy; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeactivatedActorsToDestroy; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UClientInstancedActorsSpawnerSubsystem, SpawnRequests) == 64, "Offset mismatch for UClientInstancedActorsSpawnerSubsystem::SpawnRequests");
static_assert(offsetof(UClientInstancedActorsSpawnerSubsystem, ActorsToDestroy) == 80, "Offset mismatch for UClientInstancedActorsSpawnerSubsystem::ActorsToDestroy");
static_assert(offsetof(UClientInstancedActorsSpawnerSubsystem, DeactivatedActorsToDestroy) == 96, "Offset mismatch for UClientInstancedActorsSpawnerSubsystem::DeactivatedActorsToDestroy");

// /Script/InstancedActors.GameFeatureAction_ConfigureInstancedActors
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_ConfigureInstancedActors
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ConfigOverride[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameFeatureAction_ConfigureInstancedActors, ConfigOverride) == 40, "Offset mismatch for UGameFeatureAction_ConfigureInstancedActors::ConfigOverride");

// /Script/InstancedActors.InstancedActorsComponent
// Kind: Class; super: ActorComponent
class UInstancedActorsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t InstanceHandle[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInstancedActorsComponent, InstanceHandle) == 192, "Offset mismatch for UInstancedActorsComponent::InstanceHandle");

// /Script/InstancedActors.InstancedActorsData
// Kind: Class; super: Object
class UInstancedActorsData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint16_t ID; // 0x0028 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    void* ActorClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AdditionalTags[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    TArray<void*> InstanceTransforms; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint16_t NumValidInstances; // 0x0080 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0002[0x6]; // 0x0082
    std::uint8_t Bounds[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint16_t NumInstances; // 0x00C0 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0003[0x6]; // 0x00C2
    TArray<void*> Entities; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x30]; // 0x00D8
    TArray<void*> InstanceVisualizations; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x20]; // 0x0118
    std::uint8_t CachedLocalBounds[0xA8]; // 0x0138 (Size: 0xA8, Type: StructProperty)
    std::uint8_t InstanceDeltas[0x78]; // 0x01E0 (Size: 0x78, Type: StructProperty)
    std::uint8_t EntityConfig[0x30]; // 0x0258 (Size: 0x30, Type: StructProperty)
    std::uint8_t CombinedTags[0x1]; // 0x0288 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInstancedActorsData, ID) == 40, "Offset mismatch for UInstancedActorsData::ID");
static_assert(offsetof(UInstancedActorsData, ActorClass) == 48, "Offset mismatch for UInstancedActorsData::ActorClass");
static_assert(offsetof(UInstancedActorsData, AdditionalTags) == 56, "Offset mismatch for UInstancedActorsData::AdditionalTags");
static_assert(offsetof(UInstancedActorsData, InstanceTransforms) == 112, "Offset mismatch for UInstancedActorsData::InstanceTransforms");
static_assert(offsetof(UInstancedActorsData, NumValidInstances) == 128, "Offset mismatch for UInstancedActorsData::NumValidInstances");
static_assert(offsetof(UInstancedActorsData, Bounds) == 136, "Offset mismatch for UInstancedActorsData::Bounds");
static_assert(offsetof(UInstancedActorsData, NumInstances) == 192, "Offset mismatch for UInstancedActorsData::NumInstances");
static_assert(offsetof(UInstancedActorsData, Entities) == 200, "Offset mismatch for UInstancedActorsData::Entities");
static_assert(offsetof(UInstancedActorsData, InstanceVisualizations) == 264, "Offset mismatch for UInstancedActorsData::InstanceVisualizations");
static_assert(offsetof(UInstancedActorsData, CachedLocalBounds) == 312, "Offset mismatch for UInstancedActorsData::CachedLocalBounds");
static_assert(offsetof(UInstancedActorsData, InstanceDeltas) == 480, "Offset mismatch for UInstancedActorsData::InstanceDeltas");
static_assert(offsetof(UInstancedActorsData, EntityConfig) == 600, "Offset mismatch for UInstancedActorsData::EntityConfig");
static_assert(offsetof(UInstancedActorsData, CombinedTags) == 648, "Offset mismatch for UInstancedActorsData::CombinedTags");

// /Script/InstancedActors.InstancedActorsDebugProcessor
// Kind: Class; super: MassProcessor
class UInstancedActorsDebugProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UInstancedActorsDebugProcessor, ExecutionOrder) == 40, "Offset mismatch for UInstancedActorsDebugProcessor::ExecutionOrder");
static_assert(offsetof(UInstancedActorsDebugProcessor, ProcessingPhase) == 80, "Offset mismatch for UInstancedActorsDebugProcessor::ProcessingPhase");
static_assert(offsetof(UInstancedActorsDebugProcessor, ExecutionFlags) == 81, "Offset mismatch for UInstancedActorsDebugProcessor::ExecutionFlags");
static_assert(offsetof(UInstancedActorsDebugProcessor, bAggregateRequirements) == 82, "Offset mismatch for UInstancedActorsDebugProcessor::bAggregateRequirements");
static_assert(offsetof(UInstancedActorsDebugProcessor, ActivationState) == 83, "Offset mismatch for UInstancedActorsDebugProcessor::ActivationState");
static_assert(offsetof(UInstancedActorsDebugProcessor, ExecutionPriority) == 84, "Offset mismatch for UInstancedActorsDebugProcessor::ExecutionPriority");

// /Script/InstancedActors.InstancedActorsInitializerProcessor
// Kind: Class; super: MassProcessor
class UInstancedActorsInitializerProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UInstancedActorsInitializerProcessor, ExecutionOrder) == 40, "Offset mismatch for UInstancedActorsInitializerProcessor::ExecutionOrder");
static_assert(offsetof(UInstancedActorsInitializerProcessor, ProcessingPhase) == 80, "Offset mismatch for UInstancedActorsInitializerProcessor::ProcessingPhase");
static_assert(offsetof(UInstancedActorsInitializerProcessor, ExecutionFlags) == 81, "Offset mismatch for UInstancedActorsInitializerProcessor::ExecutionFlags");
static_assert(offsetof(UInstancedActorsInitializerProcessor, bAggregateRequirements) == 82, "Offset mismatch for UInstancedActorsInitializerProcessor::bAggregateRequirements");
static_assert(offsetof(UInstancedActorsInitializerProcessor, ActivationState) == 83, "Offset mismatch for UInstancedActorsInitializerProcessor::ActivationState");
static_assert(offsetof(UInstancedActorsInitializerProcessor, ExecutionPriority) == 84, "Offset mismatch for UInstancedActorsInitializerProcessor::ExecutionPriority");

// /Script/InstancedActors.InstancedActorsManager
// Kind: Class; super: PartitionActor
class UInstancedActorsManager
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    void* InstancedActorSubsystem; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ManagerHandle[0x18]; // 0x0288 (Size: 0x18, Type: StructProperty)
    std::uint8_t SavedActorGuid[0x10]; // 0x02A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bHasSpawnedEntities; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x02B1
    std::uint16_t NextInstanceDataID; // 0x02B2 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0002[0x4]; // 0x02B4
    TArray<void*> PerActorClassInstanceData; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InstanceBounds[0x78]; // 0x02C8 (Size: 0x78, Type: StructProperty)
    TMap<void*, void*> ISMComponentToInstanceDataMap; // 0x0340 (Size: 0x10, Type: MapProperty)
    void* InstancedActorsDataClass; // 0x0350 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UInstancedActorsManager, InstancedActorSubsystem) == 640, "Offset mismatch for UInstancedActorsManager::InstancedActorSubsystem");
static_assert(offsetof(UInstancedActorsManager, ManagerHandle) == 648, "Offset mismatch for UInstancedActorsManager::ManagerHandle");
static_assert(offsetof(UInstancedActorsManager, SavedActorGuid) == 672, "Offset mismatch for UInstancedActorsManager::SavedActorGuid");
static_assert(offsetof(UInstancedActorsManager, bHasSpawnedEntities) == 688, "Offset mismatch for UInstancedActorsManager::bHasSpawnedEntities");
static_assert(offsetof(UInstancedActorsManager, NextInstanceDataID) == 690, "Offset mismatch for UInstancedActorsManager::NextInstanceDataID");
static_assert(offsetof(UInstancedActorsManager, PerActorClassInstanceData) == 696, "Offset mismatch for UInstancedActorsManager::PerActorClassInstanceData");
static_assert(offsetof(UInstancedActorsManager, InstanceBounds) == 712, "Offset mismatch for UInstancedActorsManager::InstanceBounds");
static_assert(offsetof(UInstancedActorsManager, ISMComponentToInstanceDataMap) == 832, "Offset mismatch for UInstancedActorsManager::ISMComponentToInstanceDataMap");
static_assert(offsetof(UInstancedActorsManager, InstancedActorsDataClass) == 848, "Offset mismatch for UInstancedActorsManager::InstancedActorsDataClass");

// /Script/InstancedActors.InstancedActorsModifierBase
// Kind: Class; super: Object
class UInstancedActorsModifierBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InstanceTagsQuery[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInstancedActorsModifierBase, InstanceTagsQuery) == 40, "Offset mismatch for UInstancedActorsModifierBase::InstanceTagsQuery");

// /Script/InstancedActors.InstancedActorsModifierVolume
// Kind: Class; super: Actor
class UInstancedActorsModifierVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ModifierVolumeComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInstancedActorsModifierVolume, ModifierVolumeComponent) == 624, "Offset mismatch for UInstancedActorsModifierVolume::ModifierVolumeComponent");

// /Script/InstancedActors.InstancedActorsModifierVolumeComponent
// Kind: Class; super: PrimitiveComponent
class UInstancedActorsModifierVolumeComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t Shape; // 0x0570 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0571
    std::uint8_t Extent[0x18]; // 0x0578 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0590 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0594
    TArray<void*> Modifiers; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreOwnLevelsInstances; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x05A9
    TArray<void*> LevelsToIgnore; // 0x05B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Color[0x4]; // 0x05C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDrawOnlyIfSelected; // 0x05C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x05C5
    float LineThickness; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ModifierVolumeHandle[0x4]; // 0x05CC (Size: 0x4, Type: StructProperty)
    TArray<void*> ModifiedManagers; // 0x05D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInstancedActorsModifierVolumeComponent, Shape) == 1392, "Offset mismatch for UInstancedActorsModifierVolumeComponent::Shape");
static_assert(offsetof(UInstancedActorsModifierVolumeComponent, Extent) == 1400, "Offset mismatch for UInstancedActorsModifierVolumeComponent::Extent");
static_assert(offsetof(UInstancedActorsModifierVolumeComponent, Radius) == 1424, "Offset mismatch for UInstancedActorsModifierVolumeComponent::Radius");
static_assert(offsetof(UInstancedActorsModifierVolumeComponent, Modifiers) == 1432, "Offset mismatch for UInstancedActorsModifierVolumeComponent::Modifiers");
static_assert(offsetof(UInstancedActorsModifierVolumeComponent, bIgnoreOwnLevelsInstances) == 1448, "Offset mismatch for UInstancedActorsModifierVolumeComponent::bIgnoreOwnLevelsInstances");
static_assert(offsetof(UInstancedActorsModifierVolumeComponent, LevelsToIgnore) == 1456, "Offset mismatch for UInstancedActorsModifierVolumeComponent::LevelsToIgnore");
static_assert(offsetof(UInstancedActorsModifierVolumeComponent, Color) == 1472, "Offset mismatch for UInstancedActorsModifierVolumeComponent::Color");
static_assert(offsetof(UInstancedActorsModifierVolumeComponent, bDrawOnlyIfSelected) == 1476, "Offset mismatch for UInstancedActorsModifierVolumeComponent::bDrawOnlyIfSelected");
static_assert(offsetof(UInstancedActorsModifierVolumeComponent, LineThickness) == 1480, "Offset mismatch for UInstancedActorsModifierVolumeComponent::LineThickness");
static_assert(offsetof(UInstancedActorsModifierVolumeComponent, ModifierVolumeHandle) == 1484, "Offset mismatch for UInstancedActorsModifierVolumeComponent::ModifierVolumeHandle");
static_assert(offsetof(UInstancedActorsModifierVolumeComponent, ModifiedManagers) == 1488, "Offset mismatch for UInstancedActorsModifierVolumeComponent::ModifiedManagers");

// /Script/InstancedActors.InstancedActorsProjectSettings
// Kind: Class; super: DeveloperSettings
class UInstancedActorsProjectSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t GridSize; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t NamedSettingsRegistryType[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActorClassSettingsRegistryType[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t DefaultBaseSettingsName[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    FName EnforcedSettingsName; // 0x0040 (Size: 0x8, Type: NameProperty)
    std::uint8_t DefaultConfig[0x38]; // 0x0048 (Size: 0x38, Type: StructProperty)
    std::uint8_t CompiledActiveConfig[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    TArray<void*> ClassConfigOverrides; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInstancedActorsProjectSettings, GridSize) == 48, "Offset mismatch for UInstancedActorsProjectSettings::GridSize");
static_assert(offsetof(UInstancedActorsProjectSettings, NamedSettingsRegistryType) == 52, "Offset mismatch for UInstancedActorsProjectSettings::NamedSettingsRegistryType");
static_assert(offsetof(UInstancedActorsProjectSettings, ActorClassSettingsRegistryType) == 56, "Offset mismatch for UInstancedActorsProjectSettings::ActorClassSettingsRegistryType");
static_assert(offsetof(UInstancedActorsProjectSettings, DefaultBaseSettingsName) == 60, "Offset mismatch for UInstancedActorsProjectSettings::DefaultBaseSettingsName");
static_assert(offsetof(UInstancedActorsProjectSettings, EnforcedSettingsName) == 64, "Offset mismatch for UInstancedActorsProjectSettings::EnforcedSettingsName");
static_assert(offsetof(UInstancedActorsProjectSettings, DefaultConfig) == 72, "Offset mismatch for UInstancedActorsProjectSettings::DefaultConfig");
static_assert(offsetof(UInstancedActorsProjectSettings, CompiledActiveConfig) == 128, "Offset mismatch for UInstancedActorsProjectSettings::CompiledActiveConfig");
static_assert(offsetof(UInstancedActorsProjectSettings, ClassConfigOverrides) == 160, "Offset mismatch for UInstancedActorsProjectSettings::ClassConfigOverrides");

// /Script/InstancedActors.InstancedActorsRemovalModifierVolume
// Kind: Class; super: InstancedActorsModifierVolume
class UInstancedActorsRemovalModifierVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ModifierVolumeComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInstancedActorsRemovalModifierVolume, ModifierVolumeComponent) == 624, "Offset mismatch for UInstancedActorsRemovalModifierVolume::ModifierVolumeComponent");

// /Script/InstancedActors.InstancedActorsRepresentationActorManagement
// Kind: Class; super: MassRepresentationActorManagement
class UInstancedActorsRepresentationActorManagement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InstancedActors.InstancedActorsRepresentationSubsystem
// Kind: Class; super: MassRepresentationSubsystem
class UInstancedActorsRepresentationSubsystem
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> VisualizationComponent; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Visualizer; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
    void* ActorSpawnerSubsystem; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0090
    void* WorldPartitionSubsystem; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInstancedActorsRepresentationSubsystem, VisualizationComponent) == 120, "Offset mismatch for UInstancedActorsRepresentationSubsystem::VisualizationComponent");
static_assert(offsetof(UInstancedActorsRepresentationSubsystem, Visualizer) == 128, "Offset mismatch for UInstancedActorsRepresentationSubsystem::Visualizer");
static_assert(offsetof(UInstancedActorsRepresentationSubsystem, ActorSpawnerSubsystem) == 136, "Offset mismatch for UInstancedActorsRepresentationSubsystem::ActorSpawnerSubsystem");
static_assert(offsetof(UInstancedActorsRepresentationSubsystem, WorldPartitionSubsystem) == 160, "Offset mismatch for UInstancedActorsRepresentationSubsystem::WorldPartitionSubsystem");

// /Script/InstancedActors.InstancedActorsRuntimeRemovalProcessor
// Kind: Class; super: MassProcessor
class UInstancedActorsRuntimeRemovalProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UInstancedActorsRuntimeRemovalProcessor, ExecutionOrder) == 40, "Offset mismatch for UInstancedActorsRuntimeRemovalProcessor::ExecutionOrder");
static_assert(offsetof(UInstancedActorsRuntimeRemovalProcessor, ProcessingPhase) == 80, "Offset mismatch for UInstancedActorsRuntimeRemovalProcessor::ProcessingPhase");
static_assert(offsetof(UInstancedActorsRuntimeRemovalProcessor, ExecutionFlags) == 81, "Offset mismatch for UInstancedActorsRuntimeRemovalProcessor::ExecutionFlags");
static_assert(offsetof(UInstancedActorsRuntimeRemovalProcessor, bAggregateRequirements) == 82, "Offset mismatch for UInstancedActorsRuntimeRemovalProcessor::bAggregateRequirements");
static_assert(offsetof(UInstancedActorsRuntimeRemovalProcessor, ActivationState) == 83, "Offset mismatch for UInstancedActorsRuntimeRemovalProcessor::ActivationState");
static_assert(offsetof(UInstancedActorsRuntimeRemovalProcessor, ExecutionPriority) == 84, "Offset mismatch for UInstancedActorsRuntimeRemovalProcessor::ExecutionPriority");

// /Script/InstancedActors.InstancedActorsStationaryLODBatchProcessor
// Kind: Class; super: MassProcessor
class UInstancedActorsStationaryLODBatchProcessor
{
public:
    std::uint8_t Pad_0000[0xD20]; // 0x0000
    double DelayPerBulkLOD; // 0x0D20 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UInstancedActorsStationaryLODBatchProcessor, DelayPerBulkLOD) == 3360, "Offset mismatch for UInstancedActorsStationaryLODBatchProcessor::DelayPerBulkLOD");

// /Script/InstancedActors.InstancedActorsSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UInstancedActorsSubsystem
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

static_assert(offsetof(UInstancedActorsSubsystem, ProjectSettings) == 104, "Offset mismatch for UInstancedActorsSubsystem::ProjectSettings");
static_assert(offsetof(UInstancedActorsSubsystem, DataRegistrySubsystem) == 112, "Offset mismatch for UInstancedActorsSubsystem::DataRegistrySubsystem");
static_assert(offsetof(UInstancedActorsSubsystem, ActorPartitionSubsystem) == 120, "Offset mismatch for UInstancedActorsSubsystem::ActorPartitionSubsystem");
static_assert(offsetof(UInstancedActorsSubsystem, InstancedActorsManagerClass) == 128, "Offset mismatch for UInstancedActorsSubsystem::InstancedActorsManagerClass");
static_assert(offsetof(UInstancedActorsSubsystem, ExemplarActorWorld) == 592, "Offset mismatch for UInstancedActorsSubsystem::ExemplarActorWorld");
static_assert(offsetof(UInstancedActorsSubsystem, SettingsType) == 616, "Offset mismatch for UInstancedActorsSubsystem::SettingsType");

// /Script/InstancedActors.InstancedActorsVisualizationProcessor
// Kind: Class; super: MassVisualizationProcessor
class UInstancedActorsVisualizationProcessor
{
public:
    std::uint8_t Pad_0000[0x710]; // 0x0000
    std::uint8_t UpdateParams[0x1]; // 0x0710 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInstancedActorsVisualizationProcessor, UpdateParams) == 1808, "Offset mismatch for UInstancedActorsVisualizationProcessor::UpdateParams");

// /Script/InstancedActors.InstancedActorsVisualizationSwitcherProcessor
// Kind: Class; super: MassProcessor
class UInstancedActorsVisualizationSwitcherProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UInstancedActorsVisualizationSwitcherProcessor, ExecutionOrder) == 40, "Offset mismatch for UInstancedActorsVisualizationSwitcherProcessor::ExecutionOrder");
static_assert(offsetof(UInstancedActorsVisualizationSwitcherProcessor, ProcessingPhase) == 80, "Offset mismatch for UInstancedActorsVisualizationSwitcherProcessor::ProcessingPhase");
static_assert(offsetof(UInstancedActorsVisualizationSwitcherProcessor, ExecutionFlags) == 81, "Offset mismatch for UInstancedActorsVisualizationSwitcherProcessor::ExecutionFlags");
static_assert(offsetof(UInstancedActorsVisualizationSwitcherProcessor, bAggregateRequirements) == 82, "Offset mismatch for UInstancedActorsVisualizationSwitcherProcessor::bAggregateRequirements");
static_assert(offsetof(UInstancedActorsVisualizationSwitcherProcessor, ActivationState) == 83, "Offset mismatch for UInstancedActorsVisualizationSwitcherProcessor::ActivationState");
static_assert(offsetof(UInstancedActorsVisualizationSwitcherProcessor, ExecutionPriority) == 84, "Offset mismatch for UInstancedActorsVisualizationSwitcherProcessor::ExecutionPriority");

// /Script/InstancedActors.InstancedActorsVisualizationTrait
// Kind: Class; super: MassStationaryDistanceVisualizationTrait
class UInstancedActorsVisualizationTrait
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    TWeakObjectPtr<void> InstanceData; // 0x0120 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UInstancedActorsVisualizationTrait, InstanceData) == 288, "Offset mismatch for UInstancedActorsVisualizationTrait::InstanceData");

// /Script/InstancedActors.RemoveInstancedActorsModifier
// Kind: Class; super: InstancedActorsModifierBase
class URemoveInstancedActorsModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InstanceTagsQuery[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URemoveInstancedActorsModifier, InstanceTagsQuery) == 40, "Offset mismatch for URemoveInstancedActorsModifier::InstanceTagsQuery");

// /Script/InstancedActors.RemoveInstancesModifierVolumeComponent
// Kind: Class; super: InstancedActorsModifierVolumeComponent
class URemoveInstancesModifierVolumeComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t Shape; // 0x0570 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0571
    std::uint8_t Extent[0x18]; // 0x0578 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0590 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0594
    TArray<void*> Modifiers; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreOwnLevelsInstances; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x05A9
    TArray<void*> LevelsToIgnore; // 0x05B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Color[0x4]; // 0x05C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDrawOnlyIfSelected; // 0x05C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x05C5
    float LineThickness; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ModifierVolumeHandle[0x4]; // 0x05CC (Size: 0x4, Type: StructProperty)
    TArray<void*> ModifiedManagers; // 0x05D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URemoveInstancesModifierVolumeComponent, Shape) == 1392, "Offset mismatch for URemoveInstancesModifierVolumeComponent::Shape");
static_assert(offsetof(URemoveInstancesModifierVolumeComponent, Extent) == 1400, "Offset mismatch for URemoveInstancesModifierVolumeComponent::Extent");
static_assert(offsetof(URemoveInstancesModifierVolumeComponent, Radius) == 1424, "Offset mismatch for URemoveInstancesModifierVolumeComponent::Radius");
static_assert(offsetof(URemoveInstancesModifierVolumeComponent, Modifiers) == 1432, "Offset mismatch for URemoveInstancesModifierVolumeComponent::Modifiers");
static_assert(offsetof(URemoveInstancesModifierVolumeComponent, bIgnoreOwnLevelsInstances) == 1448, "Offset mismatch for URemoveInstancesModifierVolumeComponent::bIgnoreOwnLevelsInstances");
static_assert(offsetof(URemoveInstancesModifierVolumeComponent, LevelsToIgnore) == 1456, "Offset mismatch for URemoveInstancesModifierVolumeComponent::LevelsToIgnore");
static_assert(offsetof(URemoveInstancesModifierVolumeComponent, Color) == 1472, "Offset mismatch for URemoveInstancesModifierVolumeComponent::Color");
static_assert(offsetof(URemoveInstancesModifierVolumeComponent, bDrawOnlyIfSelected) == 1476, "Offset mismatch for URemoveInstancesModifierVolumeComponent::bDrawOnlyIfSelected");
static_assert(offsetof(URemoveInstancesModifierVolumeComponent, LineThickness) == 1480, "Offset mismatch for URemoveInstancesModifierVolumeComponent::LineThickness");
static_assert(offsetof(URemoveInstancesModifierVolumeComponent, ModifierVolumeHandle) == 1484, "Offset mismatch for URemoveInstancesModifierVolumeComponent::ModifierVolumeHandle");
static_assert(offsetof(URemoveInstancesModifierVolumeComponent, ModifiedManagers) == 1488, "Offset mismatch for URemoveInstancesModifierVolumeComponent::ModifiedManagers");

// /Script/InstancedActors.ServerInstancedActorsSpawnerSubsystem
// Kind: Class; super: MassActorSpawnerSubsystem
class UServerInstancedActorsSpawnerSubsystem
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* TransientActorBeingSpawned; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TransientActorSpawningInstance[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UServerInstancedActorsSpawnerSubsystem, TransientActorBeingSpawned) == 200, "Offset mismatch for UServerInstancedActorsSpawnerSubsystem::TransientActorBeingSpawned");
static_assert(offsetof(UServerInstancedActorsSpawnerSubsystem, TransientActorSpawningInstance) == 208, "Offset mismatch for UServerInstancedActorsSpawnerSubsystem::TransientActorSpawningInstance");
