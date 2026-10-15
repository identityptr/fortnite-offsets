/**
 * decamp dumper generated SDK
 * Package: /Game/Abilities/B_FortGlobalAbilityTargetingActor
 */
#pragma once
#include "Basic.h"

// /Game/Abilities/B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C
// Kind: BlueprintGeneratedClass; super: FortGlobalAbilityTargetingActor
class UB_FortGlobalAbilityTargetingActor_C
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

static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, PrimaryActorTick) == 40, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::PrimaryActorTick");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, bAlwaysRelevant) == 88, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::bAlwaysRelevant");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, bExchangedRoles) == 89, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::bExchangedRoles");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, bActorEnableCollision) == 93, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::bActorEnableCollision");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, RemoteRole) == 96, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::RemoteRole");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, InitialLifeSpan) == 100, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::InitialLifeSpan");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, CustomTimeDilation) == 104, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::CustomTimeDilation");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, RayTracingGroupId) == 108, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::RayTracingGroupId");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, AttachmentReplication) == 112, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::AttachmentReplication");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, ReplicatedMovement) == 208, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::ReplicatedMovement");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, Owner) == 344, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::Owner");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, NetDriverName) == 352, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::NetDriverName");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, Role) == 356, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::Role");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, NetDormancy) == 357, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::NetDormancy");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::SpawnCollisionHandlingMethod");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, AutoReceiveInput) == 359, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::AutoReceiveInput");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, InputPriority) == 360, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::InputPriority");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, InputComponent) == 368, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::InputComponent");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, NetTag) == 376, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::NetTag");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, NetCullDistanceSquared) == 380, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::NetCullDistanceSquared");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, NetUpdateFrequency) == 384, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::NetUpdateFrequency");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, MinNetUpdateFrequency) == 388, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::MinNetUpdateFrequency");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, NetPriority) == 392, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::NetPriority");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, PhysicsReplicationMode) == 396, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::PhysicsReplicationMode");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, Instigator) == 408, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::Instigator");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, Children) == 416, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::Children");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, RootComponent) == 432, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::RootComponent");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, HLODLayer) == 448, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::HLODLayer");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, Layers) == 456, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::Layers");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, ParentComponent) == 472, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::ParentComponent");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, Tags) == 496, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::Tags");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnTakeAnyDamage) == 512, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnTakeAnyDamage");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnTakePointDamage) == 513, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnTakePointDamage");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnTakeRadialDamage) == 514, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnTakeRadialDamage");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnActorBeginOverlap) == 515, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnActorBeginOverlap");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnActorEndOverlap) == 516, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnActorEndOverlap");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnBeginCursorOver) == 517, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnBeginCursorOver");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnEndCursorOver) == 518, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnEndCursorOver");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnClicked) == 519, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnClicked");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnReleased) == 520, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnReleased");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnInputTouchBegin) == 521, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnInputTouchBegin");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnInputTouchEnd) == 522, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnInputTouchEnd");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnInputTouchEnter) == 523, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnInputTouchEnter");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnInputTouchLeave) == 524, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnInputTouchLeave");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnActorHit) == 525, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnActorHit");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnDestroyed) == 526, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnDestroyed");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, OnEndPlay) == 527, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::OnEndPlay");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, InstanceComponents) == 592, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::InstanceComponents");
static_assert(offsetof(UB_FortGlobalAbilityTargetingActor_C, BlueprintCreatedComponents) == 608, "Offset mismatch for UB_FortGlobalAbilityTargetingActor_C::BlueprintCreatedComponents");
