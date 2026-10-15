/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayMessages
 */
#pragma once
#include "Basic.h"

// /Script/GameplayMessages.EventMessageTag
// Kind: ScriptStruct; super: GameplayTag
struct FEventMessageTag
{
public:
    FName TagName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FEventMessageTag, TagName) == 0, "Offset mismatch for FEventMessageTag::TagName");

// /Script/GameplayMessages.GameplayMessageReceiverData
// Kind: ScriptStruct; super: none
struct FGameplayMessageReceiverData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayMessages.GameplayMessageReceiverHandle
// Kind: ScriptStruct; super: none
struct FGameplayMessageReceiverHandle
{
public:
    TWeakObjectPtr<void> Subsystem; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Channel[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t ID; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGameplayMessageReceiverHandle, Subsystem) == 0, "Offset mismatch for FGameplayMessageReceiverHandle::Subsystem");
static_assert(offsetof(FGameplayMessageReceiverHandle, Channel) == 8, "Offset mismatch for FGameplayMessageReceiverHandle::Channel");
static_assert(offsetof(FGameplayMessageReceiverHandle, ID) == 12, "Offset mismatch for FGameplayMessageReceiverHandle::ID");

// /Script/GameplayMessages.ReplicatedMessage
// Kind: ScriptStruct; super: none
struct FReplicatedMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayMessages.ReplicatedMessageData
// Kind: ScriptStruct; super: none
struct FReplicatedMessageData
{
public:
    void* StructType; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FReplicatedMessageData, StructType) == 0, "Offset mismatch for FReplicatedMessageData::StructType");

// /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver
// Kind: Class; super: BlueprintAsyncActionBase
class UAsyncAction_RegisterGameplayMessageReceiver
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnMessageReceived; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate HandleSavedState; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate HandleStateCleared; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_RegisterGameplayMessageReceiver, OnMessageReceived) == 48, "Offset mismatch for UAsyncAction_RegisterGameplayMessageReceiver::OnMessageReceived");
static_assert(offsetof(UAsyncAction_RegisterGameplayMessageReceiver, HandleSavedState) == 64, "Offset mismatch for UAsyncAction_RegisterGameplayMessageReceiver::HandleSavedState");
static_assert(offsetof(UAsyncAction_RegisterGameplayMessageReceiver, HandleStateCleared) == 80, "Offset mismatch for UAsyncAction_RegisterGameplayMessageReceiver::HandleStateCleared");

// /Script/GameplayMessages.BlueprintEventMessageTagLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlueprintEventMessageTagLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayMessages.GameplayMessageReplicator
// Kind: Class; super: Actor
class UGameplayMessageReplicator
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

static_assert(offsetof(UGameplayMessageReplicator, PrimaryActorTick) == 40, "Offset mismatch for UGameplayMessageReplicator::PrimaryActorTick");
static_assert(offsetof(UGameplayMessageReplicator, bAlwaysRelevant) == 88, "Offset mismatch for UGameplayMessageReplicator::bAlwaysRelevant");
static_assert(offsetof(UGameplayMessageReplicator, bExchangedRoles) == 89, "Offset mismatch for UGameplayMessageReplicator::bExchangedRoles");
static_assert(offsetof(UGameplayMessageReplicator, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UGameplayMessageReplicator::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UGameplayMessageReplicator, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UGameplayMessageReplicator::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UGameplayMessageReplicator, bActorEnableCollision) == 93, "Offset mismatch for UGameplayMessageReplicator::bActorEnableCollision");
static_assert(offsetof(UGameplayMessageReplicator, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UGameplayMessageReplicator::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UGameplayMessageReplicator, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UGameplayMessageReplicator::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UGameplayMessageReplicator, RemoteRole) == 96, "Offset mismatch for UGameplayMessageReplicator::RemoteRole");
static_assert(offsetof(UGameplayMessageReplicator, InitialLifeSpan) == 100, "Offset mismatch for UGameplayMessageReplicator::InitialLifeSpan");
static_assert(offsetof(UGameplayMessageReplicator, CustomTimeDilation) == 104, "Offset mismatch for UGameplayMessageReplicator::CustomTimeDilation");
static_assert(offsetof(UGameplayMessageReplicator, RayTracingGroupId) == 108, "Offset mismatch for UGameplayMessageReplicator::RayTracingGroupId");
static_assert(offsetof(UGameplayMessageReplicator, AttachmentReplication) == 112, "Offset mismatch for UGameplayMessageReplicator::AttachmentReplication");
static_assert(offsetof(UGameplayMessageReplicator, ReplicatedMovement) == 208, "Offset mismatch for UGameplayMessageReplicator::ReplicatedMovement");
static_assert(offsetof(UGameplayMessageReplicator, Owner) == 344, "Offset mismatch for UGameplayMessageReplicator::Owner");
static_assert(offsetof(UGameplayMessageReplicator, NetDriverName) == 352, "Offset mismatch for UGameplayMessageReplicator::NetDriverName");
static_assert(offsetof(UGameplayMessageReplicator, Role) == 356, "Offset mismatch for UGameplayMessageReplicator::Role");
static_assert(offsetof(UGameplayMessageReplicator, NetDormancy) == 357, "Offset mismatch for UGameplayMessageReplicator::NetDormancy");
static_assert(offsetof(UGameplayMessageReplicator, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UGameplayMessageReplicator::SpawnCollisionHandlingMethod");
static_assert(offsetof(UGameplayMessageReplicator, AutoReceiveInput) == 359, "Offset mismatch for UGameplayMessageReplicator::AutoReceiveInput");
static_assert(offsetof(UGameplayMessageReplicator, InputPriority) == 360, "Offset mismatch for UGameplayMessageReplicator::InputPriority");
static_assert(offsetof(UGameplayMessageReplicator, InputComponent) == 368, "Offset mismatch for UGameplayMessageReplicator::InputComponent");
static_assert(offsetof(UGameplayMessageReplicator, NetTag) == 376, "Offset mismatch for UGameplayMessageReplicator::NetTag");
static_assert(offsetof(UGameplayMessageReplicator, NetCullDistanceSquared) == 380, "Offset mismatch for UGameplayMessageReplicator::NetCullDistanceSquared");
static_assert(offsetof(UGameplayMessageReplicator, NetUpdateFrequency) == 384, "Offset mismatch for UGameplayMessageReplicator::NetUpdateFrequency");
static_assert(offsetof(UGameplayMessageReplicator, MinNetUpdateFrequency) == 388, "Offset mismatch for UGameplayMessageReplicator::MinNetUpdateFrequency");
static_assert(offsetof(UGameplayMessageReplicator, NetPriority) == 392, "Offset mismatch for UGameplayMessageReplicator::NetPriority");
static_assert(offsetof(UGameplayMessageReplicator, PhysicsReplicationMode) == 396, "Offset mismatch for UGameplayMessageReplicator::PhysicsReplicationMode");
static_assert(offsetof(UGameplayMessageReplicator, Instigator) == 408, "Offset mismatch for UGameplayMessageReplicator::Instigator");
static_assert(offsetof(UGameplayMessageReplicator, Children) == 416, "Offset mismatch for UGameplayMessageReplicator::Children");
static_assert(offsetof(UGameplayMessageReplicator, RootComponent) == 432, "Offset mismatch for UGameplayMessageReplicator::RootComponent");
static_assert(offsetof(UGameplayMessageReplicator, HLODLayer) == 448, "Offset mismatch for UGameplayMessageReplicator::HLODLayer");
static_assert(offsetof(UGameplayMessageReplicator, Layers) == 456, "Offset mismatch for UGameplayMessageReplicator::Layers");
static_assert(offsetof(UGameplayMessageReplicator, ParentComponent) == 472, "Offset mismatch for UGameplayMessageReplicator::ParentComponent");
static_assert(offsetof(UGameplayMessageReplicator, Tags) == 496, "Offset mismatch for UGameplayMessageReplicator::Tags");
static_assert(offsetof(UGameplayMessageReplicator, OnTakeAnyDamage) == 512, "Offset mismatch for UGameplayMessageReplicator::OnTakeAnyDamage");
static_assert(offsetof(UGameplayMessageReplicator, OnTakePointDamage) == 513, "Offset mismatch for UGameplayMessageReplicator::OnTakePointDamage");
static_assert(offsetof(UGameplayMessageReplicator, OnTakeRadialDamage) == 514, "Offset mismatch for UGameplayMessageReplicator::OnTakeRadialDamage");
static_assert(offsetof(UGameplayMessageReplicator, OnActorBeginOverlap) == 515, "Offset mismatch for UGameplayMessageReplicator::OnActorBeginOverlap");
static_assert(offsetof(UGameplayMessageReplicator, OnActorEndOverlap) == 516, "Offset mismatch for UGameplayMessageReplicator::OnActorEndOverlap");
static_assert(offsetof(UGameplayMessageReplicator, OnBeginCursorOver) == 517, "Offset mismatch for UGameplayMessageReplicator::OnBeginCursorOver");
static_assert(offsetof(UGameplayMessageReplicator, OnEndCursorOver) == 518, "Offset mismatch for UGameplayMessageReplicator::OnEndCursorOver");
static_assert(offsetof(UGameplayMessageReplicator, OnClicked) == 519, "Offset mismatch for UGameplayMessageReplicator::OnClicked");
static_assert(offsetof(UGameplayMessageReplicator, OnReleased) == 520, "Offset mismatch for UGameplayMessageReplicator::OnReleased");
static_assert(offsetof(UGameplayMessageReplicator, OnInputTouchBegin) == 521, "Offset mismatch for UGameplayMessageReplicator::OnInputTouchBegin");
static_assert(offsetof(UGameplayMessageReplicator, OnInputTouchEnd) == 522, "Offset mismatch for UGameplayMessageReplicator::OnInputTouchEnd");
static_assert(offsetof(UGameplayMessageReplicator, OnInputTouchEnter) == 523, "Offset mismatch for UGameplayMessageReplicator::OnInputTouchEnter");
static_assert(offsetof(UGameplayMessageReplicator, OnInputTouchLeave) == 524, "Offset mismatch for UGameplayMessageReplicator::OnInputTouchLeave");
static_assert(offsetof(UGameplayMessageReplicator, OnActorHit) == 525, "Offset mismatch for UGameplayMessageReplicator::OnActorHit");
static_assert(offsetof(UGameplayMessageReplicator, OnDestroyed) == 526, "Offset mismatch for UGameplayMessageReplicator::OnDestroyed");
static_assert(offsetof(UGameplayMessageReplicator, OnEndPlay) == 527, "Offset mismatch for UGameplayMessageReplicator::OnEndPlay");
static_assert(offsetof(UGameplayMessageReplicator, InstanceComponents) == 592, "Offset mismatch for UGameplayMessageReplicator::InstanceComponents");
static_assert(offsetof(UGameplayMessageReplicator, BlueprintCreatedComponents) == 608, "Offset mismatch for UGameplayMessageReplicator::BlueprintCreatedComponents");

// /Script/GameplayMessages.GameplayMessageRouter
// Kind: Class; super: GameInstanceSubsystem
class UGameplayMessageRouter
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* MessageReplicator; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayMessageRouter, MessageReplicator) == 80, "Offset mismatch for UGameplayMessageRouter::MessageReplicator");
