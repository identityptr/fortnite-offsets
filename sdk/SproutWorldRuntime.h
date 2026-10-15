/**
 * decamp dumper generated SDK
 * Package: /Script/SproutWorldRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SproutWorldRuntime.SproutProfileGo
// Kind: Class; super: LFNProfileGo
class USproutProfileGo
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

static_assert(offsetof(USproutProfileGo, CsvNonPersistentMetadata) == 136, "Offset mismatch for USproutProfileGo::CsvNonPersistentMetadata");
static_assert(offsetof(USproutProfileGo, CsvMetadata) == 152, "Offset mismatch for USproutProfileGo::CsvMetadata");
static_assert(offsetof(USproutProfileGo, DefaultSettleTime) == 168, "Offset mismatch for USproutProfileGo::DefaultSettleTime");
static_assert(offsetof(USproutProfileGo, ProfileGoScenarios) == 1040, "Offset mismatch for USproutProfileGo::ProfileGoScenarios");
static_assert(offsetof(USproutProfileGo, ProfileGoGeneratedScenarios) == 1056, "Offset mismatch for USproutProfileGo::ProfileGoGeneratedScenarios");
static_assert(offsetof(USproutProfileGo, ProfileGoCollections) == 1072, "Offset mismatch for USproutProfileGo::ProfileGoCollections");
static_assert(offsetof(USproutProfileGo, ProfileGoCommands) == 1088, "Offset mismatch for USproutProfileGo::ProfileGoCommands");
static_assert(offsetof(USproutProfileGo, AnimProfilingAssetsBlacklist) == 1104, "Offset mismatch for USproutProfileGo::AnimProfilingAssetsBlacklist");
static_assert(offsetof(USproutProfileGo, AnimProfilingCosmeticsWhitelist) == 1120, "Offset mismatch for USproutProfileGo::AnimProfilingCosmeticsWhitelist");
static_assert(offsetof(USproutProfileGo, CachedAthenaCosmeticItemDefinitions) == 1136, "Offset mismatch for USproutProfileGo::CachedAthenaCosmeticItemDefinitions");
static_assert(offsetof(USproutProfileGo, CachedAthenaCosmeticVariantTokens) == 1152, "Offset mismatch for USproutProfileGo::CachedAthenaCosmeticVariantTokens");

// /Script/SproutWorldRuntime.SproutRoadActor
// Kind: Class; super: Actor
class USproutRoadActor
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

static_assert(offsetof(USproutRoadActor, PrimaryActorTick) == 40, "Offset mismatch for USproutRoadActor::PrimaryActorTick");
static_assert(offsetof(USproutRoadActor, bAlwaysRelevant) == 88, "Offset mismatch for USproutRoadActor::bAlwaysRelevant");
static_assert(offsetof(USproutRoadActor, bExchangedRoles) == 89, "Offset mismatch for USproutRoadActor::bExchangedRoles");
static_assert(offsetof(USproutRoadActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for USproutRoadActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(USproutRoadActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for USproutRoadActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(USproutRoadActor, bActorEnableCollision) == 93, "Offset mismatch for USproutRoadActor::bActorEnableCollision");
static_assert(offsetof(USproutRoadActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for USproutRoadActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USproutRoadActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for USproutRoadActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USproutRoadActor, RemoteRole) == 96, "Offset mismatch for USproutRoadActor::RemoteRole");
static_assert(offsetof(USproutRoadActor, InitialLifeSpan) == 100, "Offset mismatch for USproutRoadActor::InitialLifeSpan");
static_assert(offsetof(USproutRoadActor, CustomTimeDilation) == 104, "Offset mismatch for USproutRoadActor::CustomTimeDilation");
static_assert(offsetof(USproutRoadActor, RayTracingGroupId) == 108, "Offset mismatch for USproutRoadActor::RayTracingGroupId");
static_assert(offsetof(USproutRoadActor, AttachmentReplication) == 112, "Offset mismatch for USproutRoadActor::AttachmentReplication");
static_assert(offsetof(USproutRoadActor, ReplicatedMovement) == 208, "Offset mismatch for USproutRoadActor::ReplicatedMovement");
static_assert(offsetof(USproutRoadActor, Owner) == 344, "Offset mismatch for USproutRoadActor::Owner");
static_assert(offsetof(USproutRoadActor, NetDriverName) == 352, "Offset mismatch for USproutRoadActor::NetDriverName");
static_assert(offsetof(USproutRoadActor, Role) == 356, "Offset mismatch for USproutRoadActor::Role");
static_assert(offsetof(USproutRoadActor, NetDormancy) == 357, "Offset mismatch for USproutRoadActor::NetDormancy");
static_assert(offsetof(USproutRoadActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for USproutRoadActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(USproutRoadActor, AutoReceiveInput) == 359, "Offset mismatch for USproutRoadActor::AutoReceiveInput");
static_assert(offsetof(USproutRoadActor, InputPriority) == 360, "Offset mismatch for USproutRoadActor::InputPriority");
static_assert(offsetof(USproutRoadActor, InputComponent) == 368, "Offset mismatch for USproutRoadActor::InputComponent");
static_assert(offsetof(USproutRoadActor, NetTag) == 376, "Offset mismatch for USproutRoadActor::NetTag");
static_assert(offsetof(USproutRoadActor, NetCullDistanceSquared) == 380, "Offset mismatch for USproutRoadActor::NetCullDistanceSquared");
static_assert(offsetof(USproutRoadActor, NetUpdateFrequency) == 384, "Offset mismatch for USproutRoadActor::NetUpdateFrequency");
static_assert(offsetof(USproutRoadActor, MinNetUpdateFrequency) == 388, "Offset mismatch for USproutRoadActor::MinNetUpdateFrequency");
static_assert(offsetof(USproutRoadActor, NetPriority) == 392, "Offset mismatch for USproutRoadActor::NetPriority");
static_assert(offsetof(USproutRoadActor, PhysicsReplicationMode) == 396, "Offset mismatch for USproutRoadActor::PhysicsReplicationMode");
static_assert(offsetof(USproutRoadActor, Instigator) == 408, "Offset mismatch for USproutRoadActor::Instigator");
static_assert(offsetof(USproutRoadActor, Children) == 416, "Offset mismatch for USproutRoadActor::Children");
static_assert(offsetof(USproutRoadActor, RootComponent) == 432, "Offset mismatch for USproutRoadActor::RootComponent");
static_assert(offsetof(USproutRoadActor, HLODLayer) == 448, "Offset mismatch for USproutRoadActor::HLODLayer");
static_assert(offsetof(USproutRoadActor, Layers) == 456, "Offset mismatch for USproutRoadActor::Layers");
static_assert(offsetof(USproutRoadActor, ParentComponent) == 472, "Offset mismatch for USproutRoadActor::ParentComponent");
static_assert(offsetof(USproutRoadActor, Tags) == 496, "Offset mismatch for USproutRoadActor::Tags");
static_assert(offsetof(USproutRoadActor, OnTakeAnyDamage) == 512, "Offset mismatch for USproutRoadActor::OnTakeAnyDamage");
static_assert(offsetof(USproutRoadActor, OnTakePointDamage) == 513, "Offset mismatch for USproutRoadActor::OnTakePointDamage");
static_assert(offsetof(USproutRoadActor, OnTakeRadialDamage) == 514, "Offset mismatch for USproutRoadActor::OnTakeRadialDamage");
static_assert(offsetof(USproutRoadActor, OnActorBeginOverlap) == 515, "Offset mismatch for USproutRoadActor::OnActorBeginOverlap");
static_assert(offsetof(USproutRoadActor, OnActorEndOverlap) == 516, "Offset mismatch for USproutRoadActor::OnActorEndOverlap");
static_assert(offsetof(USproutRoadActor, OnBeginCursorOver) == 517, "Offset mismatch for USproutRoadActor::OnBeginCursorOver");
static_assert(offsetof(USproutRoadActor, OnEndCursorOver) == 518, "Offset mismatch for USproutRoadActor::OnEndCursorOver");
static_assert(offsetof(USproutRoadActor, OnClicked) == 519, "Offset mismatch for USproutRoadActor::OnClicked");
static_assert(offsetof(USproutRoadActor, OnReleased) == 520, "Offset mismatch for USproutRoadActor::OnReleased");
static_assert(offsetof(USproutRoadActor, OnInputTouchBegin) == 521, "Offset mismatch for USproutRoadActor::OnInputTouchBegin");
static_assert(offsetof(USproutRoadActor, OnInputTouchEnd) == 522, "Offset mismatch for USproutRoadActor::OnInputTouchEnd");
static_assert(offsetof(USproutRoadActor, OnInputTouchEnter) == 523, "Offset mismatch for USproutRoadActor::OnInputTouchEnter");
static_assert(offsetof(USproutRoadActor, OnInputTouchLeave) == 524, "Offset mismatch for USproutRoadActor::OnInputTouchLeave");
static_assert(offsetof(USproutRoadActor, OnActorHit) == 525, "Offset mismatch for USproutRoadActor::OnActorHit");
static_assert(offsetof(USproutRoadActor, OnDestroyed) == 526, "Offset mismatch for USproutRoadActor::OnDestroyed");
static_assert(offsetof(USproutRoadActor, OnEndPlay) == 527, "Offset mismatch for USproutRoadActor::OnEndPlay");
static_assert(offsetof(USproutRoadActor, InstanceComponents) == 592, "Offset mismatch for USproutRoadActor::InstanceComponents");
static_assert(offsetof(USproutRoadActor, BlueprintCreatedComponents) == 608, "Offset mismatch for USproutRoadActor::BlueprintCreatedComponents");
