/**
 * decamp dumper generated SDK
 * Package: /Script/WarEffortRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WarEffortRuntime.FundingManager
// Kind: Class; super: Actor
class UFundingManager
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

static_assert(offsetof(UFundingManager, PrimaryActorTick) == 40, "Offset mismatch for UFundingManager::PrimaryActorTick");
static_assert(offsetof(UFundingManager, bAlwaysRelevant) == 88, "Offset mismatch for UFundingManager::bAlwaysRelevant");
static_assert(offsetof(UFundingManager, bExchangedRoles) == 89, "Offset mismatch for UFundingManager::bExchangedRoles");
static_assert(offsetof(UFundingManager, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UFundingManager::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UFundingManager, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UFundingManager::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UFundingManager, bActorEnableCollision) == 93, "Offset mismatch for UFundingManager::bActorEnableCollision");
static_assert(offsetof(UFundingManager, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UFundingManager::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFundingManager, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UFundingManager::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFundingManager, RemoteRole) == 96, "Offset mismatch for UFundingManager::RemoteRole");
static_assert(offsetof(UFundingManager, InitialLifeSpan) == 100, "Offset mismatch for UFundingManager::InitialLifeSpan");
static_assert(offsetof(UFundingManager, CustomTimeDilation) == 104, "Offset mismatch for UFundingManager::CustomTimeDilation");
static_assert(offsetof(UFundingManager, RayTracingGroupId) == 108, "Offset mismatch for UFundingManager::RayTracingGroupId");
static_assert(offsetof(UFundingManager, AttachmentReplication) == 112, "Offset mismatch for UFundingManager::AttachmentReplication");
static_assert(offsetof(UFundingManager, ReplicatedMovement) == 208, "Offset mismatch for UFundingManager::ReplicatedMovement");
static_assert(offsetof(UFundingManager, Owner) == 344, "Offset mismatch for UFundingManager::Owner");
static_assert(offsetof(UFundingManager, NetDriverName) == 352, "Offset mismatch for UFundingManager::NetDriverName");
static_assert(offsetof(UFundingManager, Role) == 356, "Offset mismatch for UFundingManager::Role");
static_assert(offsetof(UFundingManager, NetDormancy) == 357, "Offset mismatch for UFundingManager::NetDormancy");
static_assert(offsetof(UFundingManager, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UFundingManager::SpawnCollisionHandlingMethod");
static_assert(offsetof(UFundingManager, AutoReceiveInput) == 359, "Offset mismatch for UFundingManager::AutoReceiveInput");
static_assert(offsetof(UFundingManager, InputPriority) == 360, "Offset mismatch for UFundingManager::InputPriority");
static_assert(offsetof(UFundingManager, InputComponent) == 368, "Offset mismatch for UFundingManager::InputComponent");
static_assert(offsetof(UFundingManager, NetTag) == 376, "Offset mismatch for UFundingManager::NetTag");
static_assert(offsetof(UFundingManager, NetCullDistanceSquared) == 380, "Offset mismatch for UFundingManager::NetCullDistanceSquared");
static_assert(offsetof(UFundingManager, NetUpdateFrequency) == 384, "Offset mismatch for UFundingManager::NetUpdateFrequency");
static_assert(offsetof(UFundingManager, MinNetUpdateFrequency) == 388, "Offset mismatch for UFundingManager::MinNetUpdateFrequency");
static_assert(offsetof(UFundingManager, NetPriority) == 392, "Offset mismatch for UFundingManager::NetPriority");
static_assert(offsetof(UFundingManager, PhysicsReplicationMode) == 396, "Offset mismatch for UFundingManager::PhysicsReplicationMode");
static_assert(offsetof(UFundingManager, Instigator) == 408, "Offset mismatch for UFundingManager::Instigator");
static_assert(offsetof(UFundingManager, Children) == 416, "Offset mismatch for UFundingManager::Children");
static_assert(offsetof(UFundingManager, RootComponent) == 432, "Offset mismatch for UFundingManager::RootComponent");
static_assert(offsetof(UFundingManager, HLODLayer) == 448, "Offset mismatch for UFundingManager::HLODLayer");
static_assert(offsetof(UFundingManager, Layers) == 456, "Offset mismatch for UFundingManager::Layers");
static_assert(offsetof(UFundingManager, ParentComponent) == 472, "Offset mismatch for UFundingManager::ParentComponent");
static_assert(offsetof(UFundingManager, Tags) == 496, "Offset mismatch for UFundingManager::Tags");
static_assert(offsetof(UFundingManager, OnTakeAnyDamage) == 512, "Offset mismatch for UFundingManager::OnTakeAnyDamage");
static_assert(offsetof(UFundingManager, OnTakePointDamage) == 513, "Offset mismatch for UFundingManager::OnTakePointDamage");
static_assert(offsetof(UFundingManager, OnTakeRadialDamage) == 514, "Offset mismatch for UFundingManager::OnTakeRadialDamage");
static_assert(offsetof(UFundingManager, OnActorBeginOverlap) == 515, "Offset mismatch for UFundingManager::OnActorBeginOverlap");
static_assert(offsetof(UFundingManager, OnActorEndOverlap) == 516, "Offset mismatch for UFundingManager::OnActorEndOverlap");
static_assert(offsetof(UFundingManager, OnBeginCursorOver) == 517, "Offset mismatch for UFundingManager::OnBeginCursorOver");
static_assert(offsetof(UFundingManager, OnEndCursorOver) == 518, "Offset mismatch for UFundingManager::OnEndCursorOver");
static_assert(offsetof(UFundingManager, OnClicked) == 519, "Offset mismatch for UFundingManager::OnClicked");
static_assert(offsetof(UFundingManager, OnReleased) == 520, "Offset mismatch for UFundingManager::OnReleased");
static_assert(offsetof(UFundingManager, OnInputTouchBegin) == 521, "Offset mismatch for UFundingManager::OnInputTouchBegin");
static_assert(offsetof(UFundingManager, OnInputTouchEnd) == 522, "Offset mismatch for UFundingManager::OnInputTouchEnd");
static_assert(offsetof(UFundingManager, OnInputTouchEnter) == 523, "Offset mismatch for UFundingManager::OnInputTouchEnter");
static_assert(offsetof(UFundingManager, OnInputTouchLeave) == 524, "Offset mismatch for UFundingManager::OnInputTouchLeave");
static_assert(offsetof(UFundingManager, OnActorHit) == 525, "Offset mismatch for UFundingManager::OnActorHit");
static_assert(offsetof(UFundingManager, OnDestroyed) == 526, "Offset mismatch for UFundingManager::OnDestroyed");
static_assert(offsetof(UFundingManager, OnEndPlay) == 527, "Offset mismatch for UFundingManager::OnEndPlay");
static_assert(offsetof(UFundingManager, InstanceComponents) == 592, "Offset mismatch for UFundingManager::InstanceComponents");
static_assert(offsetof(UFundingManager, BlueprintCreatedComponents) == 608, "Offset mismatch for UFundingManager::BlueprintCreatedComponents");
