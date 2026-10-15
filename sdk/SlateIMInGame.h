/**
 * decamp dumper generated SDK
 * Package: /Script/SlateIMInGame
 */
#pragma once
#include "Basic.h"

// /Script/SlateIMInGame.SlateIMInGameNomadTab
// Kind: Class; super: SlateIMInGameWidgetBase
class USlateIMInGameNomadTab
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

static_assert(offsetof(USlateIMInGameNomadTab, PrimaryActorTick) == 40, "Offset mismatch for USlateIMInGameNomadTab::PrimaryActorTick");
static_assert(offsetof(USlateIMInGameNomadTab, bAlwaysRelevant) == 88, "Offset mismatch for USlateIMInGameNomadTab::bAlwaysRelevant");
static_assert(offsetof(USlateIMInGameNomadTab, bExchangedRoles) == 89, "Offset mismatch for USlateIMInGameNomadTab::bExchangedRoles");
static_assert(offsetof(USlateIMInGameNomadTab, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for USlateIMInGameNomadTab::bAllowTickBeforeBeginPlay");
static_assert(offsetof(USlateIMInGameNomadTab, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for USlateIMInGameNomadTab::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(USlateIMInGameNomadTab, bActorEnableCollision) == 93, "Offset mismatch for USlateIMInGameNomadTab::bActorEnableCollision");
static_assert(offsetof(USlateIMInGameNomadTab, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for USlateIMInGameNomadTab::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USlateIMInGameNomadTab, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for USlateIMInGameNomadTab::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USlateIMInGameNomadTab, RemoteRole) == 96, "Offset mismatch for USlateIMInGameNomadTab::RemoteRole");
static_assert(offsetof(USlateIMInGameNomadTab, InitialLifeSpan) == 100, "Offset mismatch for USlateIMInGameNomadTab::InitialLifeSpan");
static_assert(offsetof(USlateIMInGameNomadTab, CustomTimeDilation) == 104, "Offset mismatch for USlateIMInGameNomadTab::CustomTimeDilation");
static_assert(offsetof(USlateIMInGameNomadTab, RayTracingGroupId) == 108, "Offset mismatch for USlateIMInGameNomadTab::RayTracingGroupId");
static_assert(offsetof(USlateIMInGameNomadTab, AttachmentReplication) == 112, "Offset mismatch for USlateIMInGameNomadTab::AttachmentReplication");
static_assert(offsetof(USlateIMInGameNomadTab, ReplicatedMovement) == 208, "Offset mismatch for USlateIMInGameNomadTab::ReplicatedMovement");
static_assert(offsetof(USlateIMInGameNomadTab, Owner) == 344, "Offset mismatch for USlateIMInGameNomadTab::Owner");
static_assert(offsetof(USlateIMInGameNomadTab, NetDriverName) == 352, "Offset mismatch for USlateIMInGameNomadTab::NetDriverName");
static_assert(offsetof(USlateIMInGameNomadTab, Role) == 356, "Offset mismatch for USlateIMInGameNomadTab::Role");
static_assert(offsetof(USlateIMInGameNomadTab, NetDormancy) == 357, "Offset mismatch for USlateIMInGameNomadTab::NetDormancy");
static_assert(offsetof(USlateIMInGameNomadTab, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for USlateIMInGameNomadTab::SpawnCollisionHandlingMethod");
static_assert(offsetof(USlateIMInGameNomadTab, AutoReceiveInput) == 359, "Offset mismatch for USlateIMInGameNomadTab::AutoReceiveInput");
static_assert(offsetof(USlateIMInGameNomadTab, InputPriority) == 360, "Offset mismatch for USlateIMInGameNomadTab::InputPriority");
static_assert(offsetof(USlateIMInGameNomadTab, InputComponent) == 368, "Offset mismatch for USlateIMInGameNomadTab::InputComponent");
static_assert(offsetof(USlateIMInGameNomadTab, NetTag) == 376, "Offset mismatch for USlateIMInGameNomadTab::NetTag");
static_assert(offsetof(USlateIMInGameNomadTab, NetCullDistanceSquared) == 380, "Offset mismatch for USlateIMInGameNomadTab::NetCullDistanceSquared");
static_assert(offsetof(USlateIMInGameNomadTab, NetUpdateFrequency) == 384, "Offset mismatch for USlateIMInGameNomadTab::NetUpdateFrequency");
static_assert(offsetof(USlateIMInGameNomadTab, MinNetUpdateFrequency) == 388, "Offset mismatch for USlateIMInGameNomadTab::MinNetUpdateFrequency");
static_assert(offsetof(USlateIMInGameNomadTab, NetPriority) == 392, "Offset mismatch for USlateIMInGameNomadTab::NetPriority");
static_assert(offsetof(USlateIMInGameNomadTab, PhysicsReplicationMode) == 396, "Offset mismatch for USlateIMInGameNomadTab::PhysicsReplicationMode");
static_assert(offsetof(USlateIMInGameNomadTab, Instigator) == 408, "Offset mismatch for USlateIMInGameNomadTab::Instigator");
static_assert(offsetof(USlateIMInGameNomadTab, Children) == 416, "Offset mismatch for USlateIMInGameNomadTab::Children");
static_assert(offsetof(USlateIMInGameNomadTab, RootComponent) == 432, "Offset mismatch for USlateIMInGameNomadTab::RootComponent");
static_assert(offsetof(USlateIMInGameNomadTab, HLODLayer) == 448, "Offset mismatch for USlateIMInGameNomadTab::HLODLayer");
static_assert(offsetof(USlateIMInGameNomadTab, Layers) == 456, "Offset mismatch for USlateIMInGameNomadTab::Layers");
static_assert(offsetof(USlateIMInGameNomadTab, ParentComponent) == 472, "Offset mismatch for USlateIMInGameNomadTab::ParentComponent");
static_assert(offsetof(USlateIMInGameNomadTab, Tags) == 496, "Offset mismatch for USlateIMInGameNomadTab::Tags");
static_assert(offsetof(USlateIMInGameNomadTab, OnTakeAnyDamage) == 512, "Offset mismatch for USlateIMInGameNomadTab::OnTakeAnyDamage");
static_assert(offsetof(USlateIMInGameNomadTab, OnTakePointDamage) == 513, "Offset mismatch for USlateIMInGameNomadTab::OnTakePointDamage");
static_assert(offsetof(USlateIMInGameNomadTab, OnTakeRadialDamage) == 514, "Offset mismatch for USlateIMInGameNomadTab::OnTakeRadialDamage");
static_assert(offsetof(USlateIMInGameNomadTab, OnActorBeginOverlap) == 515, "Offset mismatch for USlateIMInGameNomadTab::OnActorBeginOverlap");
static_assert(offsetof(USlateIMInGameNomadTab, OnActorEndOverlap) == 516, "Offset mismatch for USlateIMInGameNomadTab::OnActorEndOverlap");
static_assert(offsetof(USlateIMInGameNomadTab, OnBeginCursorOver) == 517, "Offset mismatch for USlateIMInGameNomadTab::OnBeginCursorOver");
static_assert(offsetof(USlateIMInGameNomadTab, OnEndCursorOver) == 518, "Offset mismatch for USlateIMInGameNomadTab::OnEndCursorOver");
static_assert(offsetof(USlateIMInGameNomadTab, OnClicked) == 519, "Offset mismatch for USlateIMInGameNomadTab::OnClicked");
static_assert(offsetof(USlateIMInGameNomadTab, OnReleased) == 520, "Offset mismatch for USlateIMInGameNomadTab::OnReleased");
static_assert(offsetof(USlateIMInGameNomadTab, OnInputTouchBegin) == 521, "Offset mismatch for USlateIMInGameNomadTab::OnInputTouchBegin");
static_assert(offsetof(USlateIMInGameNomadTab, OnInputTouchEnd) == 522, "Offset mismatch for USlateIMInGameNomadTab::OnInputTouchEnd");
static_assert(offsetof(USlateIMInGameNomadTab, OnInputTouchEnter) == 523, "Offset mismatch for USlateIMInGameNomadTab::OnInputTouchEnter");
static_assert(offsetof(USlateIMInGameNomadTab, OnInputTouchLeave) == 524, "Offset mismatch for USlateIMInGameNomadTab::OnInputTouchLeave");
static_assert(offsetof(USlateIMInGameNomadTab, OnActorHit) == 525, "Offset mismatch for USlateIMInGameNomadTab::OnActorHit");
static_assert(offsetof(USlateIMInGameNomadTab, OnDestroyed) == 526, "Offset mismatch for USlateIMInGameNomadTab::OnDestroyed");
static_assert(offsetof(USlateIMInGameNomadTab, OnEndPlay) == 527, "Offset mismatch for USlateIMInGameNomadTab::OnEndPlay");
static_assert(offsetof(USlateIMInGameNomadTab, InstanceComponents) == 592, "Offset mismatch for USlateIMInGameNomadTab::InstanceComponents");
static_assert(offsetof(USlateIMInGameNomadTab, BlueprintCreatedComponents) == 608, "Offset mismatch for USlateIMInGameNomadTab::BlueprintCreatedComponents");

// /Script/SlateIMInGame.SlateIMInGameWidgetBase
// Kind: Class; super: Actor
class USlateIMInGameWidgetBase
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

static_assert(offsetof(USlateIMInGameWidgetBase, PrimaryActorTick) == 40, "Offset mismatch for USlateIMInGameWidgetBase::PrimaryActorTick");
static_assert(offsetof(USlateIMInGameWidgetBase, bAlwaysRelevant) == 88, "Offset mismatch for USlateIMInGameWidgetBase::bAlwaysRelevant");
static_assert(offsetof(USlateIMInGameWidgetBase, bExchangedRoles) == 89, "Offset mismatch for USlateIMInGameWidgetBase::bExchangedRoles");
static_assert(offsetof(USlateIMInGameWidgetBase, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for USlateIMInGameWidgetBase::bAllowTickBeforeBeginPlay");
static_assert(offsetof(USlateIMInGameWidgetBase, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for USlateIMInGameWidgetBase::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(USlateIMInGameWidgetBase, bActorEnableCollision) == 93, "Offset mismatch for USlateIMInGameWidgetBase::bActorEnableCollision");
static_assert(offsetof(USlateIMInGameWidgetBase, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for USlateIMInGameWidgetBase::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USlateIMInGameWidgetBase, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for USlateIMInGameWidgetBase::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USlateIMInGameWidgetBase, RemoteRole) == 96, "Offset mismatch for USlateIMInGameWidgetBase::RemoteRole");
static_assert(offsetof(USlateIMInGameWidgetBase, InitialLifeSpan) == 100, "Offset mismatch for USlateIMInGameWidgetBase::InitialLifeSpan");
static_assert(offsetof(USlateIMInGameWidgetBase, CustomTimeDilation) == 104, "Offset mismatch for USlateIMInGameWidgetBase::CustomTimeDilation");
static_assert(offsetof(USlateIMInGameWidgetBase, RayTracingGroupId) == 108, "Offset mismatch for USlateIMInGameWidgetBase::RayTracingGroupId");
static_assert(offsetof(USlateIMInGameWidgetBase, AttachmentReplication) == 112, "Offset mismatch for USlateIMInGameWidgetBase::AttachmentReplication");
static_assert(offsetof(USlateIMInGameWidgetBase, ReplicatedMovement) == 208, "Offset mismatch for USlateIMInGameWidgetBase::ReplicatedMovement");
static_assert(offsetof(USlateIMInGameWidgetBase, Owner) == 344, "Offset mismatch for USlateIMInGameWidgetBase::Owner");
static_assert(offsetof(USlateIMInGameWidgetBase, NetDriverName) == 352, "Offset mismatch for USlateIMInGameWidgetBase::NetDriverName");
static_assert(offsetof(USlateIMInGameWidgetBase, Role) == 356, "Offset mismatch for USlateIMInGameWidgetBase::Role");
static_assert(offsetof(USlateIMInGameWidgetBase, NetDormancy) == 357, "Offset mismatch for USlateIMInGameWidgetBase::NetDormancy");
static_assert(offsetof(USlateIMInGameWidgetBase, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for USlateIMInGameWidgetBase::SpawnCollisionHandlingMethod");
static_assert(offsetof(USlateIMInGameWidgetBase, AutoReceiveInput) == 359, "Offset mismatch for USlateIMInGameWidgetBase::AutoReceiveInput");
static_assert(offsetof(USlateIMInGameWidgetBase, InputPriority) == 360, "Offset mismatch for USlateIMInGameWidgetBase::InputPriority");
static_assert(offsetof(USlateIMInGameWidgetBase, InputComponent) == 368, "Offset mismatch for USlateIMInGameWidgetBase::InputComponent");
static_assert(offsetof(USlateIMInGameWidgetBase, NetTag) == 376, "Offset mismatch for USlateIMInGameWidgetBase::NetTag");
static_assert(offsetof(USlateIMInGameWidgetBase, NetCullDistanceSquared) == 380, "Offset mismatch for USlateIMInGameWidgetBase::NetCullDistanceSquared");
static_assert(offsetof(USlateIMInGameWidgetBase, NetUpdateFrequency) == 384, "Offset mismatch for USlateIMInGameWidgetBase::NetUpdateFrequency");
static_assert(offsetof(USlateIMInGameWidgetBase, MinNetUpdateFrequency) == 388, "Offset mismatch for USlateIMInGameWidgetBase::MinNetUpdateFrequency");
static_assert(offsetof(USlateIMInGameWidgetBase, NetPriority) == 392, "Offset mismatch for USlateIMInGameWidgetBase::NetPriority");
static_assert(offsetof(USlateIMInGameWidgetBase, PhysicsReplicationMode) == 396, "Offset mismatch for USlateIMInGameWidgetBase::PhysicsReplicationMode");
static_assert(offsetof(USlateIMInGameWidgetBase, Instigator) == 408, "Offset mismatch for USlateIMInGameWidgetBase::Instigator");
static_assert(offsetof(USlateIMInGameWidgetBase, Children) == 416, "Offset mismatch for USlateIMInGameWidgetBase::Children");
static_assert(offsetof(USlateIMInGameWidgetBase, RootComponent) == 432, "Offset mismatch for USlateIMInGameWidgetBase::RootComponent");
static_assert(offsetof(USlateIMInGameWidgetBase, HLODLayer) == 448, "Offset mismatch for USlateIMInGameWidgetBase::HLODLayer");
static_assert(offsetof(USlateIMInGameWidgetBase, Layers) == 456, "Offset mismatch for USlateIMInGameWidgetBase::Layers");
static_assert(offsetof(USlateIMInGameWidgetBase, ParentComponent) == 472, "Offset mismatch for USlateIMInGameWidgetBase::ParentComponent");
static_assert(offsetof(USlateIMInGameWidgetBase, Tags) == 496, "Offset mismatch for USlateIMInGameWidgetBase::Tags");
static_assert(offsetof(USlateIMInGameWidgetBase, OnTakeAnyDamage) == 512, "Offset mismatch for USlateIMInGameWidgetBase::OnTakeAnyDamage");
static_assert(offsetof(USlateIMInGameWidgetBase, OnTakePointDamage) == 513, "Offset mismatch for USlateIMInGameWidgetBase::OnTakePointDamage");
static_assert(offsetof(USlateIMInGameWidgetBase, OnTakeRadialDamage) == 514, "Offset mismatch for USlateIMInGameWidgetBase::OnTakeRadialDamage");
static_assert(offsetof(USlateIMInGameWidgetBase, OnActorBeginOverlap) == 515, "Offset mismatch for USlateIMInGameWidgetBase::OnActorBeginOverlap");
static_assert(offsetof(USlateIMInGameWidgetBase, OnActorEndOverlap) == 516, "Offset mismatch for USlateIMInGameWidgetBase::OnActorEndOverlap");
static_assert(offsetof(USlateIMInGameWidgetBase, OnBeginCursorOver) == 517, "Offset mismatch for USlateIMInGameWidgetBase::OnBeginCursorOver");
static_assert(offsetof(USlateIMInGameWidgetBase, OnEndCursorOver) == 518, "Offset mismatch for USlateIMInGameWidgetBase::OnEndCursorOver");
static_assert(offsetof(USlateIMInGameWidgetBase, OnClicked) == 519, "Offset mismatch for USlateIMInGameWidgetBase::OnClicked");
static_assert(offsetof(USlateIMInGameWidgetBase, OnReleased) == 520, "Offset mismatch for USlateIMInGameWidgetBase::OnReleased");
static_assert(offsetof(USlateIMInGameWidgetBase, OnInputTouchBegin) == 521, "Offset mismatch for USlateIMInGameWidgetBase::OnInputTouchBegin");
static_assert(offsetof(USlateIMInGameWidgetBase, OnInputTouchEnd) == 522, "Offset mismatch for USlateIMInGameWidgetBase::OnInputTouchEnd");
static_assert(offsetof(USlateIMInGameWidgetBase, OnInputTouchEnter) == 523, "Offset mismatch for USlateIMInGameWidgetBase::OnInputTouchEnter");
static_assert(offsetof(USlateIMInGameWidgetBase, OnInputTouchLeave) == 524, "Offset mismatch for USlateIMInGameWidgetBase::OnInputTouchLeave");
static_assert(offsetof(USlateIMInGameWidgetBase, OnActorHit) == 525, "Offset mismatch for USlateIMInGameWidgetBase::OnActorHit");
static_assert(offsetof(USlateIMInGameWidgetBase, OnDestroyed) == 526, "Offset mismatch for USlateIMInGameWidgetBase::OnDestroyed");
static_assert(offsetof(USlateIMInGameWidgetBase, OnEndPlay) == 527, "Offset mismatch for USlateIMInGameWidgetBase::OnEndPlay");
static_assert(offsetof(USlateIMInGameWidgetBase, InstanceComponents) == 592, "Offset mismatch for USlateIMInGameWidgetBase::InstanceComponents");
static_assert(offsetof(USlateIMInGameWidgetBase, BlueprintCreatedComponents) == 608, "Offset mismatch for USlateIMInGameWidgetBase::BlueprintCreatedComponents");

// /Script/SlateIMInGame.SlateIMInGameWidgetCheatManager
// Kind: Class; super: CheatManagerExtension
class USlateIMInGameWidgetCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateIMInGame.SlateIMInGameWindow
// Kind: Class; super: SlateIMInGameWidgetBase
class USlateIMInGameWindow
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

static_assert(offsetof(USlateIMInGameWindow, PrimaryActorTick) == 40, "Offset mismatch for USlateIMInGameWindow::PrimaryActorTick");
static_assert(offsetof(USlateIMInGameWindow, bAlwaysRelevant) == 88, "Offset mismatch for USlateIMInGameWindow::bAlwaysRelevant");
static_assert(offsetof(USlateIMInGameWindow, bExchangedRoles) == 89, "Offset mismatch for USlateIMInGameWindow::bExchangedRoles");
static_assert(offsetof(USlateIMInGameWindow, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for USlateIMInGameWindow::bAllowTickBeforeBeginPlay");
static_assert(offsetof(USlateIMInGameWindow, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for USlateIMInGameWindow::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(USlateIMInGameWindow, bActorEnableCollision) == 93, "Offset mismatch for USlateIMInGameWindow::bActorEnableCollision");
static_assert(offsetof(USlateIMInGameWindow, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for USlateIMInGameWindow::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USlateIMInGameWindow, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for USlateIMInGameWindow::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USlateIMInGameWindow, RemoteRole) == 96, "Offset mismatch for USlateIMInGameWindow::RemoteRole");
static_assert(offsetof(USlateIMInGameWindow, InitialLifeSpan) == 100, "Offset mismatch for USlateIMInGameWindow::InitialLifeSpan");
static_assert(offsetof(USlateIMInGameWindow, CustomTimeDilation) == 104, "Offset mismatch for USlateIMInGameWindow::CustomTimeDilation");
static_assert(offsetof(USlateIMInGameWindow, RayTracingGroupId) == 108, "Offset mismatch for USlateIMInGameWindow::RayTracingGroupId");
static_assert(offsetof(USlateIMInGameWindow, AttachmentReplication) == 112, "Offset mismatch for USlateIMInGameWindow::AttachmentReplication");
static_assert(offsetof(USlateIMInGameWindow, ReplicatedMovement) == 208, "Offset mismatch for USlateIMInGameWindow::ReplicatedMovement");
static_assert(offsetof(USlateIMInGameWindow, Owner) == 344, "Offset mismatch for USlateIMInGameWindow::Owner");
static_assert(offsetof(USlateIMInGameWindow, NetDriverName) == 352, "Offset mismatch for USlateIMInGameWindow::NetDriverName");
static_assert(offsetof(USlateIMInGameWindow, Role) == 356, "Offset mismatch for USlateIMInGameWindow::Role");
static_assert(offsetof(USlateIMInGameWindow, NetDormancy) == 357, "Offset mismatch for USlateIMInGameWindow::NetDormancy");
static_assert(offsetof(USlateIMInGameWindow, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for USlateIMInGameWindow::SpawnCollisionHandlingMethod");
static_assert(offsetof(USlateIMInGameWindow, AutoReceiveInput) == 359, "Offset mismatch for USlateIMInGameWindow::AutoReceiveInput");
static_assert(offsetof(USlateIMInGameWindow, InputPriority) == 360, "Offset mismatch for USlateIMInGameWindow::InputPriority");
static_assert(offsetof(USlateIMInGameWindow, InputComponent) == 368, "Offset mismatch for USlateIMInGameWindow::InputComponent");
static_assert(offsetof(USlateIMInGameWindow, NetTag) == 376, "Offset mismatch for USlateIMInGameWindow::NetTag");
static_assert(offsetof(USlateIMInGameWindow, NetCullDistanceSquared) == 380, "Offset mismatch for USlateIMInGameWindow::NetCullDistanceSquared");
static_assert(offsetof(USlateIMInGameWindow, NetUpdateFrequency) == 384, "Offset mismatch for USlateIMInGameWindow::NetUpdateFrequency");
static_assert(offsetof(USlateIMInGameWindow, MinNetUpdateFrequency) == 388, "Offset mismatch for USlateIMInGameWindow::MinNetUpdateFrequency");
static_assert(offsetof(USlateIMInGameWindow, NetPriority) == 392, "Offset mismatch for USlateIMInGameWindow::NetPriority");
static_assert(offsetof(USlateIMInGameWindow, PhysicsReplicationMode) == 396, "Offset mismatch for USlateIMInGameWindow::PhysicsReplicationMode");
static_assert(offsetof(USlateIMInGameWindow, Instigator) == 408, "Offset mismatch for USlateIMInGameWindow::Instigator");
static_assert(offsetof(USlateIMInGameWindow, Children) == 416, "Offset mismatch for USlateIMInGameWindow::Children");
static_assert(offsetof(USlateIMInGameWindow, RootComponent) == 432, "Offset mismatch for USlateIMInGameWindow::RootComponent");
static_assert(offsetof(USlateIMInGameWindow, HLODLayer) == 448, "Offset mismatch for USlateIMInGameWindow::HLODLayer");
static_assert(offsetof(USlateIMInGameWindow, Layers) == 456, "Offset mismatch for USlateIMInGameWindow::Layers");
static_assert(offsetof(USlateIMInGameWindow, ParentComponent) == 472, "Offset mismatch for USlateIMInGameWindow::ParentComponent");
static_assert(offsetof(USlateIMInGameWindow, Tags) == 496, "Offset mismatch for USlateIMInGameWindow::Tags");
static_assert(offsetof(USlateIMInGameWindow, OnTakeAnyDamage) == 512, "Offset mismatch for USlateIMInGameWindow::OnTakeAnyDamage");
static_assert(offsetof(USlateIMInGameWindow, OnTakePointDamage) == 513, "Offset mismatch for USlateIMInGameWindow::OnTakePointDamage");
static_assert(offsetof(USlateIMInGameWindow, OnTakeRadialDamage) == 514, "Offset mismatch for USlateIMInGameWindow::OnTakeRadialDamage");
static_assert(offsetof(USlateIMInGameWindow, OnActorBeginOverlap) == 515, "Offset mismatch for USlateIMInGameWindow::OnActorBeginOverlap");
static_assert(offsetof(USlateIMInGameWindow, OnActorEndOverlap) == 516, "Offset mismatch for USlateIMInGameWindow::OnActorEndOverlap");
static_assert(offsetof(USlateIMInGameWindow, OnBeginCursorOver) == 517, "Offset mismatch for USlateIMInGameWindow::OnBeginCursorOver");
static_assert(offsetof(USlateIMInGameWindow, OnEndCursorOver) == 518, "Offset mismatch for USlateIMInGameWindow::OnEndCursorOver");
static_assert(offsetof(USlateIMInGameWindow, OnClicked) == 519, "Offset mismatch for USlateIMInGameWindow::OnClicked");
static_assert(offsetof(USlateIMInGameWindow, OnReleased) == 520, "Offset mismatch for USlateIMInGameWindow::OnReleased");
static_assert(offsetof(USlateIMInGameWindow, OnInputTouchBegin) == 521, "Offset mismatch for USlateIMInGameWindow::OnInputTouchBegin");
static_assert(offsetof(USlateIMInGameWindow, OnInputTouchEnd) == 522, "Offset mismatch for USlateIMInGameWindow::OnInputTouchEnd");
static_assert(offsetof(USlateIMInGameWindow, OnInputTouchEnter) == 523, "Offset mismatch for USlateIMInGameWindow::OnInputTouchEnter");
static_assert(offsetof(USlateIMInGameWindow, OnInputTouchLeave) == 524, "Offset mismatch for USlateIMInGameWindow::OnInputTouchLeave");
static_assert(offsetof(USlateIMInGameWindow, OnActorHit) == 525, "Offset mismatch for USlateIMInGameWindow::OnActorHit");
static_assert(offsetof(USlateIMInGameWindow, OnDestroyed) == 526, "Offset mismatch for USlateIMInGameWindow::OnDestroyed");
static_assert(offsetof(USlateIMInGameWindow, OnEndPlay) == 527, "Offset mismatch for USlateIMInGameWindow::OnEndPlay");
static_assert(offsetof(USlateIMInGameWindow, InstanceComponents) == 592, "Offset mismatch for USlateIMInGameWindow::InstanceComponents");
static_assert(offsetof(USlateIMInGameWindow, BlueprintCreatedComponents) == 608, "Offset mismatch for USlateIMInGameWindow::BlueprintCreatedComponents");
