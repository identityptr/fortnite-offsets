/**
 * decamp dumper generated SDK
 * Package: /Script/JunoDynamicActivityMatrixRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMActiveActivityRecord
// Kind: ScriptStruct; super: none
struct FJunoDAMActiveActivityRecord
{
public:
    std::uint8_t ActivityID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t LocationType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    std::uint8_t Location[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t TileGuid[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t POIGuid[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t ActivityGUID[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bExpired; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    FName OriginalPOIRegistryName; // 0x005C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoDAMActiveActivityRecord, ActivityID) == 0, "Offset mismatch for FJunoDAMActiveActivityRecord::ActivityID");
static_assert(offsetof(FJunoDAMActiveActivityRecord, LocationType) == 8, "Offset mismatch for FJunoDAMActiveActivityRecord::LocationType");
static_assert(offsetof(FJunoDAMActiveActivityRecord, Location) == 16, "Offset mismatch for FJunoDAMActiveActivityRecord::Location");
static_assert(offsetof(FJunoDAMActiveActivityRecord, TileGuid) == 40, "Offset mismatch for FJunoDAMActiveActivityRecord::TileGuid");
static_assert(offsetof(FJunoDAMActiveActivityRecord, POIGuid) == 56, "Offset mismatch for FJunoDAMActiveActivityRecord::POIGuid");
static_assert(offsetof(FJunoDAMActiveActivityRecord, ActivityGUID) == 72, "Offset mismatch for FJunoDAMActiveActivityRecord::ActivityGUID");
static_assert(offsetof(FJunoDAMActiveActivityRecord, bExpired) == 88, "Offset mismatch for FJunoDAMActiveActivityRecord::bExpired");
static_assert(offsetof(FJunoDAMActiveActivityRecord, OriginalPOIRegistryName) == 92, "Offset mismatch for FJunoDAMActiveActivityRecord::OriginalPOIRegistryName");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMActivityEligibilityContext
// Kind: ScriptStruct; super: none
struct FJunoDAMActivityEligibilityContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMLocationContext
// Kind: ScriptStruct; super: none
struct FJunoDAMLocationContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMPersistenceFeatureData_InGameClass_PersistentInfo
// Kind: ScriptStruct; super: none
struct FJunoDAMPersistenceFeatureData_InGameClass_PersistentInfo
{
public:
    std::uint8_t SaveData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoDAMPersistenceFeatureData_InGameClass_PersistentInfo, SaveData) == 0, "Offset mismatch for FJunoDAMPersistenceFeatureData_InGameClass_PersistentInfo::SaveData");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMSaveData
// Kind: ScriptStruct; super: none
struct FJunoDAMSaveData
{
public:
    TArray<void*> ActiveActivities; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SlotCooldowns; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> LifetimeSpawnCounts; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoDAMSaveData, ActiveActivities) == 0, "Offset mismatch for FJunoDAMSaveData::ActiveActivities");
static_assert(offsetof(FJunoDAMSaveData, SlotCooldowns) == 16, "Offset mismatch for FJunoDAMSaveData::SlotCooldowns");
static_assert(offsetof(FJunoDAMSaveData, LifetimeSpawnCounts) == 32, "Offset mismatch for FJunoDAMSaveData::LifetimeSpawnCounts");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMScenarioSourceBase
// Kind: ScriptStruct; super: none
struct FJunoDAMScenarioSourceBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMScenarioSource_Fixed
// Kind: ScriptStruct; super: JunoDAMScenarioSourceBase
struct FJunoDAMScenarioSource_Fixed
{
public:
    std::uint8_t Encounter[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoDAMScenarioSource_Fixed, Encounter) == 0, "Offset mismatch for FJunoDAMScenarioSource_Fixed::Encounter");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMScenarioSource_Pool
// Kind: ScriptStruct; super: JunoDAMScenarioSourceBase
struct FJunoDAMScenarioSource_Pool
{
public:
    std::uint8_t EncounterPool[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoDAMScenarioSource_Pool, EncounterPool) == 0, "Offset mismatch for FJunoDAMScenarioSource_Pool::EncounterPool");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMSlotCooldown
// Kind: ScriptStruct; super: none
struct FJunoDAMSlotCooldown
{
public:
    std::uint8_t SlotGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExpiryUtc[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoDAMSlotCooldown, SlotGuid) == 0, "Offset mismatch for FJunoDAMSlotCooldown::SlotGuid");
static_assert(offsetof(FJunoDAMSlotCooldown, ExpiryUtc) == 16, "Offset mismatch for FJunoDAMSlotCooldown::ExpiryUtc");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDynamicActivityRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoDynamicActivityRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RegistryID[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t Weight[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    float SpawnChance; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0044
    std::uint8_t SpawnConditions[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t bRemoveOnCompletion; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0071
    std::uint8_t DespawnConditions[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::int32_t MaxConcurrentInstancesInWorld; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxLifetimeSpawns; // 0x00A4 (Size: 0x4, Type: IntProperty)
    float MinDistanceBetweenSameActivity; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LocationType; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsCombatActivity; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x00AE
    std::uint8_t LocationContextTagQuery[0x48]; // 0x00B0 (Size: 0x48, Type: StructProperty)
    std::uint8_t POIRow[0x8]; // 0x00F8 (Size: 0x8, Type: StructProperty)
    std::uint8_t ScenarioDefinition[0x20]; // 0x0100 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> FixedVariables; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RandomVariables; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RandomVariableCollection; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ScenarioOverride[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoDynamicActivityRow, RegistryID) == 8, "Offset mismatch for FJunoDynamicActivityRow::RegistryID");
static_assert(offsetof(FJunoDynamicActivityRow, bEnabled) == 16, "Offset mismatch for FJunoDynamicActivityRow::bEnabled");
static_assert(offsetof(FJunoDynamicActivityRow, Weight) == 24, "Offset mismatch for FJunoDynamicActivityRow::Weight");
static_assert(offsetof(FJunoDynamicActivityRow, SpawnChance) == 64, "Offset mismatch for FJunoDynamicActivityRow::SpawnChance");
static_assert(offsetof(FJunoDynamicActivityRow, SpawnConditions) == 72, "Offset mismatch for FJunoDynamicActivityRow::SpawnConditions");
static_assert(offsetof(FJunoDynamicActivityRow, bRemoveOnCompletion) == 112, "Offset mismatch for FJunoDynamicActivityRow::bRemoveOnCompletion");
static_assert(offsetof(FJunoDynamicActivityRow, DespawnConditions) == 120, "Offset mismatch for FJunoDynamicActivityRow::DespawnConditions");
static_assert(offsetof(FJunoDynamicActivityRow, MaxConcurrentInstancesInWorld) == 160, "Offset mismatch for FJunoDynamicActivityRow::MaxConcurrentInstancesInWorld");
static_assert(offsetof(FJunoDynamicActivityRow, MaxLifetimeSpawns) == 164, "Offset mismatch for FJunoDynamicActivityRow::MaxLifetimeSpawns");
static_assert(offsetof(FJunoDynamicActivityRow, MinDistanceBetweenSameActivity) == 168, "Offset mismatch for FJunoDynamicActivityRow::MinDistanceBetweenSameActivity");
static_assert(offsetof(FJunoDynamicActivityRow, LocationType) == 172, "Offset mismatch for FJunoDynamicActivityRow::LocationType");
static_assert(offsetof(FJunoDynamicActivityRow, bIsCombatActivity) == 173, "Offset mismatch for FJunoDynamicActivityRow::bIsCombatActivity");
static_assert(offsetof(FJunoDynamicActivityRow, LocationContextTagQuery) == 176, "Offset mismatch for FJunoDynamicActivityRow::LocationContextTagQuery");
static_assert(offsetof(FJunoDynamicActivityRow, POIRow) == 248, "Offset mismatch for FJunoDynamicActivityRow::POIRow");
static_assert(offsetof(FJunoDynamicActivityRow, ScenarioDefinition) == 256, "Offset mismatch for FJunoDynamicActivityRow::ScenarioDefinition");
static_assert(offsetof(FJunoDynamicActivityRow, FixedVariables) == 288, "Offset mismatch for FJunoDynamicActivityRow::FixedVariables");
static_assert(offsetof(FJunoDynamicActivityRow, RandomVariables) == 304, "Offset mismatch for FJunoDynamicActivityRow::RandomVariables");
static_assert(offsetof(FJunoDynamicActivityRow, RandomVariableCollection) == 320, "Offset mismatch for FJunoDynamicActivityRow::RandomVariableCollection");
static_assert(offsetof(FJunoDynamicActivityRow, ScenarioOverride) == 336, "Offset mismatch for FJunoDynamicActivityRow::ScenarioOverride");

// /Script/JunoDynamicActivityMatrixRuntime.JunoSelectedDynamicActivity
// Kind: ScriptStruct; super: none
struct FJunoSelectedDynamicActivity
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMLocationProxyPrefab
// Kind: Class; super: Actor
class UJunoDAMLocationProxyPrefab
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoDAMLocationProxyPrefab, PrimaryActorTick) == 40, "Offset mismatch for UJunoDAMLocationProxyPrefab::PrimaryActorTick");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, bAlwaysRelevant) == 88, "Offset mismatch for UJunoDAMLocationProxyPrefab::bAlwaysRelevant");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, bExchangedRoles) == 89, "Offset mismatch for UJunoDAMLocationProxyPrefab::bExchangedRoles");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UJunoDAMLocationProxyPrefab::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UJunoDAMLocationProxyPrefab::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, bActorEnableCollision) == 93, "Offset mismatch for UJunoDAMLocationProxyPrefab::bActorEnableCollision");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UJunoDAMLocationProxyPrefab::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UJunoDAMLocationProxyPrefab::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, RemoteRole) == 96, "Offset mismatch for UJunoDAMLocationProxyPrefab::RemoteRole");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, InitialLifeSpan) == 100, "Offset mismatch for UJunoDAMLocationProxyPrefab::InitialLifeSpan");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, CustomTimeDilation) == 104, "Offset mismatch for UJunoDAMLocationProxyPrefab::CustomTimeDilation");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, RayTracingGroupId) == 108, "Offset mismatch for UJunoDAMLocationProxyPrefab::RayTracingGroupId");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, AttachmentReplication) == 112, "Offset mismatch for UJunoDAMLocationProxyPrefab::AttachmentReplication");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, ReplicatedMovement) == 208, "Offset mismatch for UJunoDAMLocationProxyPrefab::ReplicatedMovement");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, Owner) == 344, "Offset mismatch for UJunoDAMLocationProxyPrefab::Owner");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, NetDriverName) == 352, "Offset mismatch for UJunoDAMLocationProxyPrefab::NetDriverName");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, Role) == 356, "Offset mismatch for UJunoDAMLocationProxyPrefab::Role");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, NetDormancy) == 357, "Offset mismatch for UJunoDAMLocationProxyPrefab::NetDormancy");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UJunoDAMLocationProxyPrefab::SpawnCollisionHandlingMethod");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, AutoReceiveInput) == 359, "Offset mismatch for UJunoDAMLocationProxyPrefab::AutoReceiveInput");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, InputPriority) == 360, "Offset mismatch for UJunoDAMLocationProxyPrefab::InputPriority");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, InputComponent) == 368, "Offset mismatch for UJunoDAMLocationProxyPrefab::InputComponent");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, NetTag) == 376, "Offset mismatch for UJunoDAMLocationProxyPrefab::NetTag");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, NetCullDistanceSquared) == 380, "Offset mismatch for UJunoDAMLocationProxyPrefab::NetCullDistanceSquared");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, NetUpdateFrequency) == 384, "Offset mismatch for UJunoDAMLocationProxyPrefab::NetUpdateFrequency");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, MinNetUpdateFrequency) == 388, "Offset mismatch for UJunoDAMLocationProxyPrefab::MinNetUpdateFrequency");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, NetPriority) == 392, "Offset mismatch for UJunoDAMLocationProxyPrefab::NetPriority");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, PhysicsReplicationMode) == 396, "Offset mismatch for UJunoDAMLocationProxyPrefab::PhysicsReplicationMode");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, Instigator) == 408, "Offset mismatch for UJunoDAMLocationProxyPrefab::Instigator");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, Children) == 416, "Offset mismatch for UJunoDAMLocationProxyPrefab::Children");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, RootComponent) == 432, "Offset mismatch for UJunoDAMLocationProxyPrefab::RootComponent");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, HLODLayer) == 448, "Offset mismatch for UJunoDAMLocationProxyPrefab::HLODLayer");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, Layers) == 456, "Offset mismatch for UJunoDAMLocationProxyPrefab::Layers");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, ParentComponent) == 472, "Offset mismatch for UJunoDAMLocationProxyPrefab::ParentComponent");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, Tags) == 496, "Offset mismatch for UJunoDAMLocationProxyPrefab::Tags");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnTakeAnyDamage) == 512, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnTakeAnyDamage");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnTakePointDamage) == 513, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnTakePointDamage");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnTakeRadialDamage) == 514, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnTakeRadialDamage");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnActorBeginOverlap) == 515, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnActorBeginOverlap");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnActorEndOverlap) == 516, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnActorEndOverlap");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnBeginCursorOver) == 517, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnBeginCursorOver");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnEndCursorOver) == 518, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnEndCursorOver");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnClicked) == 519, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnClicked");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnReleased) == 520, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnReleased");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnInputTouchBegin) == 521, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnInputTouchBegin");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnInputTouchEnd) == 522, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnInputTouchEnd");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnInputTouchEnter) == 523, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnInputTouchEnter");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnInputTouchLeave) == 524, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnInputTouchLeave");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnActorHit) == 525, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnActorHit");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnDestroyed) == 526, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnDestroyed");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, OnEndPlay) == 527, "Offset mismatch for UJunoDAMLocationProxyPrefab::OnEndPlay");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, InstanceComponents) == 592, "Offset mismatch for UJunoDAMLocationProxyPrefab::InstanceComponents");
static_assert(offsetof(UJunoDAMLocationProxyPrefab, BlueprintCreatedComponents) == 608, "Offset mismatch for UJunoDAMLocationProxyPrefab::BlueprintCreatedComponents");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMPersistenceFeatureData
// Kind: Class; super: JunoBasePFWPersistenceFeatureData
class UJunoDAMPersistenceFeatureData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t SaveData[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoDAMPersistenceFeatureData, SaveData) == 88, "Offset mismatch for UJunoDAMPersistenceFeatureData::SaveData");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMPersistenceFeatureData_Container
// Kind: Class; super: JunoBasePFWPersistenceFeatureDataContainer
class UJunoDAMPersistenceFeatureData_Container
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, GameplayTagContainer) == 40, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::GameplayTagContainer");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, RestoreVersionInfo) == 72, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::RestoreVersionInfo");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, SupportedVersionsTable) == 88, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::SupportedVersionsTable");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, RestoreAttemptCount) == 120, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::RestoreAttemptCount");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, SaveAttemptCount) == 128, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::SaveAttemptCount");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, DeleteAttemptCount) == 136, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::DeleteAttemptCount");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, ServiceData) == 144, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::ServiceData");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, BackendRequestsQueue) == 152, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::BackendRequestsQueue");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, PersistentClassName) == 160, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::PersistentClassName");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, PersistentName) == 168, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::PersistentName");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, Description) == 216, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::Description");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoDAMPersistenceFeatureData_Container, DeinitProcess) == 248, "Offset mismatch for UJunoDAMPersistenceFeatureData_Container::DeinitProcess");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoDAMPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoDAMPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoDAMPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoDAMPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoDAMPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoDAMPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoDAMPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoDAMPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoDAMPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoDAMPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoDAMPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoDAMPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoDAMPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoDAMPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoDAMPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoDAMPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoDAMPersistenceFeatureModule::Description");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDAMSpawnAction_RequestActivity
// Kind: Class; super: FortAthenaLivingWorldSpawnAction
class UJunoDAMSpawnAction_RequestActivity
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoDynamicActivityMatrixRuntime.JunoDynamicActivityHandlerBase
// Kind: Class; super: Object
class UJunoDynamicActivityHandlerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoDynamicActivityMatrixRuntime.JunoDynamicActivityHandler_DynamicPOI
// Kind: Class; super: JunoDynamicActivityHandlerBase
class UJunoDynamicActivityHandler_DynamicPOI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MaxActivitiesPerTileLoad[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDistanceFromCombatPOIs[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t CombatPOICapabilityTag[0x4]; // 0x0078 (Size: 0x4, Type: StructProperty)
    std::uint8_t CosmeticPOIExclusionTag[0x4]; // 0x007C (Size: 0x4, Type: StructProperty)
    std::uint8_t SlotSizeFilter[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinPlayerDespawnDistance[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlotCooldownSeconds[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoDynamicActivityHandler_DynamicPOI, MaxActivitiesPerTileLoad) == 40, "Offset mismatch for UJunoDynamicActivityHandler_DynamicPOI::MaxActivitiesPerTileLoad");
static_assert(offsetof(UJunoDynamicActivityHandler_DynamicPOI, MinDistanceFromCombatPOIs) == 80, "Offset mismatch for UJunoDynamicActivityHandler_DynamicPOI::MinDistanceFromCombatPOIs");
static_assert(offsetof(UJunoDynamicActivityHandler_DynamicPOI, CombatPOICapabilityTag) == 120, "Offset mismatch for UJunoDynamicActivityHandler_DynamicPOI::CombatPOICapabilityTag");
static_assert(offsetof(UJunoDynamicActivityHandler_DynamicPOI, CosmeticPOIExclusionTag) == 124, "Offset mismatch for UJunoDynamicActivityHandler_DynamicPOI::CosmeticPOIExclusionTag");
static_assert(offsetof(UJunoDynamicActivityHandler_DynamicPOI, SlotSizeFilter) == 128, "Offset mismatch for UJunoDynamicActivityHandler_DynamicPOI::SlotSizeFilter");
static_assert(offsetof(UJunoDynamicActivityHandler_DynamicPOI, MinPlayerDespawnDistance) == 152, "Offset mismatch for UJunoDynamicActivityHandler_DynamicPOI::MinPlayerDespawnDistance");
static_assert(offsetof(UJunoDynamicActivityHandler_DynamicPOI, SlotCooldownSeconds) == 192, "Offset mismatch for UJunoDynamicActivityHandler_DynamicPOI::SlotCooldownSeconds");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDynamicActivityHandler_WorldAnchored
// Kind: Class; super: JunoDynamicActivityHandlerBase
class UJunoDynamicActivityHandler_WorldAnchored
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoDynamicActivityMatrixRuntime.JunoDynamicActivityMatrixDirector
// Kind: Class; super: FortGameStateComponent
class UJunoDynamicActivityMatrixDirector
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t DynamicActivitiesRegistry[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    std::uint8_t MinDistanceBetweenActivities[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::int32_t MaxConcurrentActivities; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00F4
    TMap<void*, void*> ActivityHandlerClasses; // 0x00F8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0108
    TArray<void*> ActiveActivities; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> PersistenceFeatureData; // 0x0120 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0128
    TWeakObjectPtr<void> CachedLivingWorldManager; // 0x0138 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0004[0x30]; // 0x0140
    TMap<void*, void*> ActivityHandlers; // 0x0170 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoDynamicActivityMatrixDirector, DynamicActivitiesRegistry) == 192, "Offset mismatch for UJunoDynamicActivityMatrixDirector::DynamicActivitiesRegistry");
static_assert(offsetof(UJunoDynamicActivityMatrixDirector, MinDistanceBetweenActivities) == 200, "Offset mismatch for UJunoDynamicActivityMatrixDirector::MinDistanceBetweenActivities");
static_assert(offsetof(UJunoDynamicActivityMatrixDirector, MaxConcurrentActivities) == 240, "Offset mismatch for UJunoDynamicActivityMatrixDirector::MaxConcurrentActivities");
static_assert(offsetof(UJunoDynamicActivityMatrixDirector, ActivityHandlerClasses) == 248, "Offset mismatch for UJunoDynamicActivityMatrixDirector::ActivityHandlerClasses");
static_assert(offsetof(UJunoDynamicActivityMatrixDirector, ActiveActivities) == 272, "Offset mismatch for UJunoDynamicActivityMatrixDirector::ActiveActivities");
static_assert(offsetof(UJunoDynamicActivityMatrixDirector, PersistenceFeatureData) == 288, "Offset mismatch for UJunoDynamicActivityMatrixDirector::PersistenceFeatureData");
static_assert(offsetof(UJunoDynamicActivityMatrixDirector, CachedLivingWorldManager) == 312, "Offset mismatch for UJunoDynamicActivityMatrixDirector::CachedLivingWorldManager");
static_assert(offsetof(UJunoDynamicActivityMatrixDirector, ActivityHandlers) == 368, "Offset mismatch for UJunoDynamicActivityMatrixDirector::ActivityHandlers");

// /Script/JunoDynamicActivityMatrixRuntime.JunoDynamicActivityWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class UJunoDynamicActivityWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoDynamicActivityWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UJunoDynamicActivityWorldConditionSchema::ContextDataDescs");
