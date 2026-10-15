/**
 * decamp dumper generated SDK
 * Package: /Script/VkCloudCooked3Runtime
 */
#pragma once
#include "Basic.h"

// /Script/VkCloudCooked3Runtime.VkCloudCooked3TestActor
// Kind: Class; super: Actor
class UVkCloudCooked3TestActor
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

static_assert(offsetof(UVkCloudCooked3TestActor, PrimaryActorTick) == 40, "Offset mismatch for UVkCloudCooked3TestActor::PrimaryActorTick");
static_assert(offsetof(UVkCloudCooked3TestActor, bAlwaysRelevant) == 88, "Offset mismatch for UVkCloudCooked3TestActor::bAlwaysRelevant");
static_assert(offsetof(UVkCloudCooked3TestActor, bExchangedRoles) == 89, "Offset mismatch for UVkCloudCooked3TestActor::bExchangedRoles");
static_assert(offsetof(UVkCloudCooked3TestActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UVkCloudCooked3TestActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UVkCloudCooked3TestActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UVkCloudCooked3TestActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UVkCloudCooked3TestActor, bActorEnableCollision) == 93, "Offset mismatch for UVkCloudCooked3TestActor::bActorEnableCollision");
static_assert(offsetof(UVkCloudCooked3TestActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UVkCloudCooked3TestActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UVkCloudCooked3TestActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UVkCloudCooked3TestActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UVkCloudCooked3TestActor, RemoteRole) == 96, "Offset mismatch for UVkCloudCooked3TestActor::RemoteRole");
static_assert(offsetof(UVkCloudCooked3TestActor, InitialLifeSpan) == 100, "Offset mismatch for UVkCloudCooked3TestActor::InitialLifeSpan");
static_assert(offsetof(UVkCloudCooked3TestActor, CustomTimeDilation) == 104, "Offset mismatch for UVkCloudCooked3TestActor::CustomTimeDilation");
static_assert(offsetof(UVkCloudCooked3TestActor, RayTracingGroupId) == 108, "Offset mismatch for UVkCloudCooked3TestActor::RayTracingGroupId");
static_assert(offsetof(UVkCloudCooked3TestActor, AttachmentReplication) == 112, "Offset mismatch for UVkCloudCooked3TestActor::AttachmentReplication");
static_assert(offsetof(UVkCloudCooked3TestActor, ReplicatedMovement) == 208, "Offset mismatch for UVkCloudCooked3TestActor::ReplicatedMovement");
static_assert(offsetof(UVkCloudCooked3TestActor, Owner) == 344, "Offset mismatch for UVkCloudCooked3TestActor::Owner");
static_assert(offsetof(UVkCloudCooked3TestActor, NetDriverName) == 352, "Offset mismatch for UVkCloudCooked3TestActor::NetDriverName");
static_assert(offsetof(UVkCloudCooked3TestActor, Role) == 356, "Offset mismatch for UVkCloudCooked3TestActor::Role");
static_assert(offsetof(UVkCloudCooked3TestActor, NetDormancy) == 357, "Offset mismatch for UVkCloudCooked3TestActor::NetDormancy");
static_assert(offsetof(UVkCloudCooked3TestActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UVkCloudCooked3TestActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UVkCloudCooked3TestActor, AutoReceiveInput) == 359, "Offset mismatch for UVkCloudCooked3TestActor::AutoReceiveInput");
static_assert(offsetof(UVkCloudCooked3TestActor, InputPriority) == 360, "Offset mismatch for UVkCloudCooked3TestActor::InputPriority");
static_assert(offsetof(UVkCloudCooked3TestActor, InputComponent) == 368, "Offset mismatch for UVkCloudCooked3TestActor::InputComponent");
static_assert(offsetof(UVkCloudCooked3TestActor, NetTag) == 376, "Offset mismatch for UVkCloudCooked3TestActor::NetTag");
static_assert(offsetof(UVkCloudCooked3TestActor, NetCullDistanceSquared) == 380, "Offset mismatch for UVkCloudCooked3TestActor::NetCullDistanceSquared");
static_assert(offsetof(UVkCloudCooked3TestActor, NetUpdateFrequency) == 384, "Offset mismatch for UVkCloudCooked3TestActor::NetUpdateFrequency");
static_assert(offsetof(UVkCloudCooked3TestActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UVkCloudCooked3TestActor::MinNetUpdateFrequency");
static_assert(offsetof(UVkCloudCooked3TestActor, NetPriority) == 392, "Offset mismatch for UVkCloudCooked3TestActor::NetPriority");
static_assert(offsetof(UVkCloudCooked3TestActor, PhysicsReplicationMode) == 396, "Offset mismatch for UVkCloudCooked3TestActor::PhysicsReplicationMode");
static_assert(offsetof(UVkCloudCooked3TestActor, Instigator) == 408, "Offset mismatch for UVkCloudCooked3TestActor::Instigator");
static_assert(offsetof(UVkCloudCooked3TestActor, Children) == 416, "Offset mismatch for UVkCloudCooked3TestActor::Children");
static_assert(offsetof(UVkCloudCooked3TestActor, RootComponent) == 432, "Offset mismatch for UVkCloudCooked3TestActor::RootComponent");
static_assert(offsetof(UVkCloudCooked3TestActor, HLODLayer) == 448, "Offset mismatch for UVkCloudCooked3TestActor::HLODLayer");
static_assert(offsetof(UVkCloudCooked3TestActor, Layers) == 456, "Offset mismatch for UVkCloudCooked3TestActor::Layers");
static_assert(offsetof(UVkCloudCooked3TestActor, ParentComponent) == 472, "Offset mismatch for UVkCloudCooked3TestActor::ParentComponent");
static_assert(offsetof(UVkCloudCooked3TestActor, Tags) == 496, "Offset mismatch for UVkCloudCooked3TestActor::Tags");
static_assert(offsetof(UVkCloudCooked3TestActor, OnTakeAnyDamage) == 512, "Offset mismatch for UVkCloudCooked3TestActor::OnTakeAnyDamage");
static_assert(offsetof(UVkCloudCooked3TestActor, OnTakePointDamage) == 513, "Offset mismatch for UVkCloudCooked3TestActor::OnTakePointDamage");
static_assert(offsetof(UVkCloudCooked3TestActor, OnTakeRadialDamage) == 514, "Offset mismatch for UVkCloudCooked3TestActor::OnTakeRadialDamage");
static_assert(offsetof(UVkCloudCooked3TestActor, OnActorBeginOverlap) == 515, "Offset mismatch for UVkCloudCooked3TestActor::OnActorBeginOverlap");
static_assert(offsetof(UVkCloudCooked3TestActor, OnActorEndOverlap) == 516, "Offset mismatch for UVkCloudCooked3TestActor::OnActorEndOverlap");
static_assert(offsetof(UVkCloudCooked3TestActor, OnBeginCursorOver) == 517, "Offset mismatch for UVkCloudCooked3TestActor::OnBeginCursorOver");
static_assert(offsetof(UVkCloudCooked3TestActor, OnEndCursorOver) == 518, "Offset mismatch for UVkCloudCooked3TestActor::OnEndCursorOver");
static_assert(offsetof(UVkCloudCooked3TestActor, OnClicked) == 519, "Offset mismatch for UVkCloudCooked3TestActor::OnClicked");
static_assert(offsetof(UVkCloudCooked3TestActor, OnReleased) == 520, "Offset mismatch for UVkCloudCooked3TestActor::OnReleased");
static_assert(offsetof(UVkCloudCooked3TestActor, OnInputTouchBegin) == 521, "Offset mismatch for UVkCloudCooked3TestActor::OnInputTouchBegin");
static_assert(offsetof(UVkCloudCooked3TestActor, OnInputTouchEnd) == 522, "Offset mismatch for UVkCloudCooked3TestActor::OnInputTouchEnd");
static_assert(offsetof(UVkCloudCooked3TestActor, OnInputTouchEnter) == 523, "Offset mismatch for UVkCloudCooked3TestActor::OnInputTouchEnter");
static_assert(offsetof(UVkCloudCooked3TestActor, OnInputTouchLeave) == 524, "Offset mismatch for UVkCloudCooked3TestActor::OnInputTouchLeave");
static_assert(offsetof(UVkCloudCooked3TestActor, OnActorHit) == 525, "Offset mismatch for UVkCloudCooked3TestActor::OnActorHit");
static_assert(offsetof(UVkCloudCooked3TestActor, OnDestroyed) == 526, "Offset mismatch for UVkCloudCooked3TestActor::OnDestroyed");
static_assert(offsetof(UVkCloudCooked3TestActor, OnEndPlay) == 527, "Offset mismatch for UVkCloudCooked3TestActor::OnEndPlay");
static_assert(offsetof(UVkCloudCooked3TestActor, InstanceComponents) == 592, "Offset mismatch for UVkCloudCooked3TestActor::InstanceComponents");
static_assert(offsetof(UVkCloudCooked3TestActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UVkCloudCooked3TestActor::BlueprintCreatedComponents");
