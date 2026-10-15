/**
 * decamp dumper generated SDK
 * Package: /Script/ElectraDataChannelRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer
// Kind: Class; super: Actor
class UElectraDataChannelPlayer
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnTerminalError; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UElectraDataChannelPlayer, OnTerminalError) == 624, "Offset mismatch for UElectraDataChannelPlayer::OnTerminalError");

// /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder
// Kind: Class; super: Actor
class UElectraDataChannelRecorder
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

static_assert(offsetof(UElectraDataChannelRecorder, PrimaryActorTick) == 40, "Offset mismatch for UElectraDataChannelRecorder::PrimaryActorTick");
static_assert(offsetof(UElectraDataChannelRecorder, bAlwaysRelevant) == 88, "Offset mismatch for UElectraDataChannelRecorder::bAlwaysRelevant");
static_assert(offsetof(UElectraDataChannelRecorder, bExchangedRoles) == 89, "Offset mismatch for UElectraDataChannelRecorder::bExchangedRoles");
static_assert(offsetof(UElectraDataChannelRecorder, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UElectraDataChannelRecorder::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UElectraDataChannelRecorder, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UElectraDataChannelRecorder::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UElectraDataChannelRecorder, bActorEnableCollision) == 93, "Offset mismatch for UElectraDataChannelRecorder::bActorEnableCollision");
static_assert(offsetof(UElectraDataChannelRecorder, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UElectraDataChannelRecorder::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UElectraDataChannelRecorder, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UElectraDataChannelRecorder::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UElectraDataChannelRecorder, RemoteRole) == 96, "Offset mismatch for UElectraDataChannelRecorder::RemoteRole");
static_assert(offsetof(UElectraDataChannelRecorder, InitialLifeSpan) == 100, "Offset mismatch for UElectraDataChannelRecorder::InitialLifeSpan");
static_assert(offsetof(UElectraDataChannelRecorder, CustomTimeDilation) == 104, "Offset mismatch for UElectraDataChannelRecorder::CustomTimeDilation");
static_assert(offsetof(UElectraDataChannelRecorder, RayTracingGroupId) == 108, "Offset mismatch for UElectraDataChannelRecorder::RayTracingGroupId");
static_assert(offsetof(UElectraDataChannelRecorder, AttachmentReplication) == 112, "Offset mismatch for UElectraDataChannelRecorder::AttachmentReplication");
static_assert(offsetof(UElectraDataChannelRecorder, ReplicatedMovement) == 208, "Offset mismatch for UElectraDataChannelRecorder::ReplicatedMovement");
static_assert(offsetof(UElectraDataChannelRecorder, Owner) == 344, "Offset mismatch for UElectraDataChannelRecorder::Owner");
static_assert(offsetof(UElectraDataChannelRecorder, NetDriverName) == 352, "Offset mismatch for UElectraDataChannelRecorder::NetDriverName");
static_assert(offsetof(UElectraDataChannelRecorder, Role) == 356, "Offset mismatch for UElectraDataChannelRecorder::Role");
static_assert(offsetof(UElectraDataChannelRecorder, NetDormancy) == 357, "Offset mismatch for UElectraDataChannelRecorder::NetDormancy");
static_assert(offsetof(UElectraDataChannelRecorder, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UElectraDataChannelRecorder::SpawnCollisionHandlingMethod");
static_assert(offsetof(UElectraDataChannelRecorder, AutoReceiveInput) == 359, "Offset mismatch for UElectraDataChannelRecorder::AutoReceiveInput");
static_assert(offsetof(UElectraDataChannelRecorder, InputPriority) == 360, "Offset mismatch for UElectraDataChannelRecorder::InputPriority");
static_assert(offsetof(UElectraDataChannelRecorder, InputComponent) == 368, "Offset mismatch for UElectraDataChannelRecorder::InputComponent");
static_assert(offsetof(UElectraDataChannelRecorder, NetTag) == 376, "Offset mismatch for UElectraDataChannelRecorder::NetTag");
static_assert(offsetof(UElectraDataChannelRecorder, NetCullDistanceSquared) == 380, "Offset mismatch for UElectraDataChannelRecorder::NetCullDistanceSquared");
static_assert(offsetof(UElectraDataChannelRecorder, NetUpdateFrequency) == 384, "Offset mismatch for UElectraDataChannelRecorder::NetUpdateFrequency");
static_assert(offsetof(UElectraDataChannelRecorder, MinNetUpdateFrequency) == 388, "Offset mismatch for UElectraDataChannelRecorder::MinNetUpdateFrequency");
static_assert(offsetof(UElectraDataChannelRecorder, NetPriority) == 392, "Offset mismatch for UElectraDataChannelRecorder::NetPriority");
static_assert(offsetof(UElectraDataChannelRecorder, PhysicsReplicationMode) == 396, "Offset mismatch for UElectraDataChannelRecorder::PhysicsReplicationMode");
static_assert(offsetof(UElectraDataChannelRecorder, Instigator) == 408, "Offset mismatch for UElectraDataChannelRecorder::Instigator");
static_assert(offsetof(UElectraDataChannelRecorder, Children) == 416, "Offset mismatch for UElectraDataChannelRecorder::Children");
static_assert(offsetof(UElectraDataChannelRecorder, RootComponent) == 432, "Offset mismatch for UElectraDataChannelRecorder::RootComponent");
static_assert(offsetof(UElectraDataChannelRecorder, HLODLayer) == 448, "Offset mismatch for UElectraDataChannelRecorder::HLODLayer");
static_assert(offsetof(UElectraDataChannelRecorder, Layers) == 456, "Offset mismatch for UElectraDataChannelRecorder::Layers");
static_assert(offsetof(UElectraDataChannelRecorder, ParentComponent) == 472, "Offset mismatch for UElectraDataChannelRecorder::ParentComponent");
static_assert(offsetof(UElectraDataChannelRecorder, Tags) == 496, "Offset mismatch for UElectraDataChannelRecorder::Tags");
static_assert(offsetof(UElectraDataChannelRecorder, OnTakeAnyDamage) == 512, "Offset mismatch for UElectraDataChannelRecorder::OnTakeAnyDamage");
static_assert(offsetof(UElectraDataChannelRecorder, OnTakePointDamage) == 513, "Offset mismatch for UElectraDataChannelRecorder::OnTakePointDamage");
static_assert(offsetof(UElectraDataChannelRecorder, OnTakeRadialDamage) == 514, "Offset mismatch for UElectraDataChannelRecorder::OnTakeRadialDamage");
static_assert(offsetof(UElectraDataChannelRecorder, OnActorBeginOverlap) == 515, "Offset mismatch for UElectraDataChannelRecorder::OnActorBeginOverlap");
static_assert(offsetof(UElectraDataChannelRecorder, OnActorEndOverlap) == 516, "Offset mismatch for UElectraDataChannelRecorder::OnActorEndOverlap");
static_assert(offsetof(UElectraDataChannelRecorder, OnBeginCursorOver) == 517, "Offset mismatch for UElectraDataChannelRecorder::OnBeginCursorOver");
static_assert(offsetof(UElectraDataChannelRecorder, OnEndCursorOver) == 518, "Offset mismatch for UElectraDataChannelRecorder::OnEndCursorOver");
static_assert(offsetof(UElectraDataChannelRecorder, OnClicked) == 519, "Offset mismatch for UElectraDataChannelRecorder::OnClicked");
static_assert(offsetof(UElectraDataChannelRecorder, OnReleased) == 520, "Offset mismatch for UElectraDataChannelRecorder::OnReleased");
static_assert(offsetof(UElectraDataChannelRecorder, OnInputTouchBegin) == 521, "Offset mismatch for UElectraDataChannelRecorder::OnInputTouchBegin");
static_assert(offsetof(UElectraDataChannelRecorder, OnInputTouchEnd) == 522, "Offset mismatch for UElectraDataChannelRecorder::OnInputTouchEnd");
static_assert(offsetof(UElectraDataChannelRecorder, OnInputTouchEnter) == 523, "Offset mismatch for UElectraDataChannelRecorder::OnInputTouchEnter");
static_assert(offsetof(UElectraDataChannelRecorder, OnInputTouchLeave) == 524, "Offset mismatch for UElectraDataChannelRecorder::OnInputTouchLeave");
static_assert(offsetof(UElectraDataChannelRecorder, OnActorHit) == 525, "Offset mismatch for UElectraDataChannelRecorder::OnActorHit");
static_assert(offsetof(UElectraDataChannelRecorder, OnDestroyed) == 526, "Offset mismatch for UElectraDataChannelRecorder::OnDestroyed");
static_assert(offsetof(UElectraDataChannelRecorder, OnEndPlay) == 527, "Offset mismatch for UElectraDataChannelRecorder::OnEndPlay");
static_assert(offsetof(UElectraDataChannelRecorder, InstanceComponents) == 592, "Offset mismatch for UElectraDataChannelRecorder::InstanceComponents");
static_assert(offsetof(UElectraDataChannelRecorder, BlueprintCreatedComponents) == 608, "Offset mismatch for UElectraDataChannelRecorder::BlueprintCreatedComponents");

// /Script/ElectraDataChannelRuntime.ElectraDataChannelTarget
// Kind: Class; super: Actor
class UElectraDataChannelTarget
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

static_assert(offsetof(UElectraDataChannelTarget, PrimaryActorTick) == 40, "Offset mismatch for UElectraDataChannelTarget::PrimaryActorTick");
static_assert(offsetof(UElectraDataChannelTarget, bAlwaysRelevant) == 88, "Offset mismatch for UElectraDataChannelTarget::bAlwaysRelevant");
static_assert(offsetof(UElectraDataChannelTarget, bExchangedRoles) == 89, "Offset mismatch for UElectraDataChannelTarget::bExchangedRoles");
static_assert(offsetof(UElectraDataChannelTarget, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UElectraDataChannelTarget::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UElectraDataChannelTarget, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UElectraDataChannelTarget::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UElectraDataChannelTarget, bActorEnableCollision) == 93, "Offset mismatch for UElectraDataChannelTarget::bActorEnableCollision");
static_assert(offsetof(UElectraDataChannelTarget, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UElectraDataChannelTarget::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UElectraDataChannelTarget, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UElectraDataChannelTarget::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UElectraDataChannelTarget, RemoteRole) == 96, "Offset mismatch for UElectraDataChannelTarget::RemoteRole");
static_assert(offsetof(UElectraDataChannelTarget, InitialLifeSpan) == 100, "Offset mismatch for UElectraDataChannelTarget::InitialLifeSpan");
static_assert(offsetof(UElectraDataChannelTarget, CustomTimeDilation) == 104, "Offset mismatch for UElectraDataChannelTarget::CustomTimeDilation");
static_assert(offsetof(UElectraDataChannelTarget, RayTracingGroupId) == 108, "Offset mismatch for UElectraDataChannelTarget::RayTracingGroupId");
static_assert(offsetof(UElectraDataChannelTarget, AttachmentReplication) == 112, "Offset mismatch for UElectraDataChannelTarget::AttachmentReplication");
static_assert(offsetof(UElectraDataChannelTarget, ReplicatedMovement) == 208, "Offset mismatch for UElectraDataChannelTarget::ReplicatedMovement");
static_assert(offsetof(UElectraDataChannelTarget, Owner) == 344, "Offset mismatch for UElectraDataChannelTarget::Owner");
static_assert(offsetof(UElectraDataChannelTarget, NetDriverName) == 352, "Offset mismatch for UElectraDataChannelTarget::NetDriverName");
static_assert(offsetof(UElectraDataChannelTarget, Role) == 356, "Offset mismatch for UElectraDataChannelTarget::Role");
static_assert(offsetof(UElectraDataChannelTarget, NetDormancy) == 357, "Offset mismatch for UElectraDataChannelTarget::NetDormancy");
static_assert(offsetof(UElectraDataChannelTarget, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UElectraDataChannelTarget::SpawnCollisionHandlingMethod");
static_assert(offsetof(UElectraDataChannelTarget, AutoReceiveInput) == 359, "Offset mismatch for UElectraDataChannelTarget::AutoReceiveInput");
static_assert(offsetof(UElectraDataChannelTarget, InputPriority) == 360, "Offset mismatch for UElectraDataChannelTarget::InputPriority");
static_assert(offsetof(UElectraDataChannelTarget, InputComponent) == 368, "Offset mismatch for UElectraDataChannelTarget::InputComponent");
static_assert(offsetof(UElectraDataChannelTarget, NetTag) == 376, "Offset mismatch for UElectraDataChannelTarget::NetTag");
static_assert(offsetof(UElectraDataChannelTarget, NetCullDistanceSquared) == 380, "Offset mismatch for UElectraDataChannelTarget::NetCullDistanceSquared");
static_assert(offsetof(UElectraDataChannelTarget, NetUpdateFrequency) == 384, "Offset mismatch for UElectraDataChannelTarget::NetUpdateFrequency");
static_assert(offsetof(UElectraDataChannelTarget, MinNetUpdateFrequency) == 388, "Offset mismatch for UElectraDataChannelTarget::MinNetUpdateFrequency");
static_assert(offsetof(UElectraDataChannelTarget, NetPriority) == 392, "Offset mismatch for UElectraDataChannelTarget::NetPriority");
static_assert(offsetof(UElectraDataChannelTarget, PhysicsReplicationMode) == 396, "Offset mismatch for UElectraDataChannelTarget::PhysicsReplicationMode");
static_assert(offsetof(UElectraDataChannelTarget, Instigator) == 408, "Offset mismatch for UElectraDataChannelTarget::Instigator");
static_assert(offsetof(UElectraDataChannelTarget, Children) == 416, "Offset mismatch for UElectraDataChannelTarget::Children");
static_assert(offsetof(UElectraDataChannelTarget, RootComponent) == 432, "Offset mismatch for UElectraDataChannelTarget::RootComponent");
static_assert(offsetof(UElectraDataChannelTarget, HLODLayer) == 448, "Offset mismatch for UElectraDataChannelTarget::HLODLayer");
static_assert(offsetof(UElectraDataChannelTarget, Layers) == 456, "Offset mismatch for UElectraDataChannelTarget::Layers");
static_assert(offsetof(UElectraDataChannelTarget, ParentComponent) == 472, "Offset mismatch for UElectraDataChannelTarget::ParentComponent");
static_assert(offsetof(UElectraDataChannelTarget, Tags) == 496, "Offset mismatch for UElectraDataChannelTarget::Tags");
static_assert(offsetof(UElectraDataChannelTarget, OnTakeAnyDamage) == 512, "Offset mismatch for UElectraDataChannelTarget::OnTakeAnyDamage");
static_assert(offsetof(UElectraDataChannelTarget, OnTakePointDamage) == 513, "Offset mismatch for UElectraDataChannelTarget::OnTakePointDamage");
static_assert(offsetof(UElectraDataChannelTarget, OnTakeRadialDamage) == 514, "Offset mismatch for UElectraDataChannelTarget::OnTakeRadialDamage");
static_assert(offsetof(UElectraDataChannelTarget, OnActorBeginOverlap) == 515, "Offset mismatch for UElectraDataChannelTarget::OnActorBeginOverlap");
static_assert(offsetof(UElectraDataChannelTarget, OnActorEndOverlap) == 516, "Offset mismatch for UElectraDataChannelTarget::OnActorEndOverlap");
static_assert(offsetof(UElectraDataChannelTarget, OnBeginCursorOver) == 517, "Offset mismatch for UElectraDataChannelTarget::OnBeginCursorOver");
static_assert(offsetof(UElectraDataChannelTarget, OnEndCursorOver) == 518, "Offset mismatch for UElectraDataChannelTarget::OnEndCursorOver");
static_assert(offsetof(UElectraDataChannelTarget, OnClicked) == 519, "Offset mismatch for UElectraDataChannelTarget::OnClicked");
static_assert(offsetof(UElectraDataChannelTarget, OnReleased) == 520, "Offset mismatch for UElectraDataChannelTarget::OnReleased");
static_assert(offsetof(UElectraDataChannelTarget, OnInputTouchBegin) == 521, "Offset mismatch for UElectraDataChannelTarget::OnInputTouchBegin");
static_assert(offsetof(UElectraDataChannelTarget, OnInputTouchEnd) == 522, "Offset mismatch for UElectraDataChannelTarget::OnInputTouchEnd");
static_assert(offsetof(UElectraDataChannelTarget, OnInputTouchEnter) == 523, "Offset mismatch for UElectraDataChannelTarget::OnInputTouchEnter");
static_assert(offsetof(UElectraDataChannelTarget, OnInputTouchLeave) == 524, "Offset mismatch for UElectraDataChannelTarget::OnInputTouchLeave");
static_assert(offsetof(UElectraDataChannelTarget, OnActorHit) == 525, "Offset mismatch for UElectraDataChannelTarget::OnActorHit");
static_assert(offsetof(UElectraDataChannelTarget, OnDestroyed) == 526, "Offset mismatch for UElectraDataChannelTarget::OnDestroyed");
static_assert(offsetof(UElectraDataChannelTarget, OnEndPlay) == 527, "Offset mismatch for UElectraDataChannelTarget::OnEndPlay");
static_assert(offsetof(UElectraDataChannelTarget, InstanceComponents) == 592, "Offset mismatch for UElectraDataChannelTarget::InstanceComponents");
static_assert(offsetof(UElectraDataChannelTarget, BlueprintCreatedComponents) == 608, "Offset mismatch for UElectraDataChannelTarget::BlueprintCreatedComponents");
