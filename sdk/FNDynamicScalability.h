/**
 * decamp dumper generated SDK
 * Package: /Script/FNDynamicScalability
 */
#pragma once
#include "Basic.h"

// /Script/FNDynamicScalability.FNDynamicScalabilityOperatorKeyVal
// Kind: ScriptStruct; super: none
struct FFNDynamicScalabilityOperatorKeyVal
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    float Scale; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFNDynamicScalabilityOperatorKeyVal, Name) == 0, "Offset mismatch for FFNDynamicScalabilityOperatorKeyVal::Name");
static_assert(offsetof(FFNDynamicScalabilityOperatorKeyVal, Scale) == 16, "Offset mismatch for FFNDynamicScalabilityOperatorKeyVal::Scale");

// /Script/FNDynamicScalability.FNDynamicScalabilityManagerActor
// Kind: Class; super: Actor
class UFNDynamicScalabilityManagerActor
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

static_assert(offsetof(UFNDynamicScalabilityManagerActor, PrimaryActorTick) == 40, "Offset mismatch for UFNDynamicScalabilityManagerActor::PrimaryActorTick");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, bAlwaysRelevant) == 88, "Offset mismatch for UFNDynamicScalabilityManagerActor::bAlwaysRelevant");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, bExchangedRoles) == 89, "Offset mismatch for UFNDynamicScalabilityManagerActor::bExchangedRoles");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UFNDynamicScalabilityManagerActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UFNDynamicScalabilityManagerActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, bActorEnableCollision) == 93, "Offset mismatch for UFNDynamicScalabilityManagerActor::bActorEnableCollision");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UFNDynamicScalabilityManagerActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UFNDynamicScalabilityManagerActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, RemoteRole) == 96, "Offset mismatch for UFNDynamicScalabilityManagerActor::RemoteRole");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, InitialLifeSpan) == 100, "Offset mismatch for UFNDynamicScalabilityManagerActor::InitialLifeSpan");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, CustomTimeDilation) == 104, "Offset mismatch for UFNDynamicScalabilityManagerActor::CustomTimeDilation");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, RayTracingGroupId) == 108, "Offset mismatch for UFNDynamicScalabilityManagerActor::RayTracingGroupId");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, AttachmentReplication) == 112, "Offset mismatch for UFNDynamicScalabilityManagerActor::AttachmentReplication");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, ReplicatedMovement) == 208, "Offset mismatch for UFNDynamicScalabilityManagerActor::ReplicatedMovement");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, Owner) == 344, "Offset mismatch for UFNDynamicScalabilityManagerActor::Owner");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, NetDriverName) == 352, "Offset mismatch for UFNDynamicScalabilityManagerActor::NetDriverName");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, Role) == 356, "Offset mismatch for UFNDynamicScalabilityManagerActor::Role");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, NetDormancy) == 357, "Offset mismatch for UFNDynamicScalabilityManagerActor::NetDormancy");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UFNDynamicScalabilityManagerActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, AutoReceiveInput) == 359, "Offset mismatch for UFNDynamicScalabilityManagerActor::AutoReceiveInput");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, InputPriority) == 360, "Offset mismatch for UFNDynamicScalabilityManagerActor::InputPriority");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, InputComponent) == 368, "Offset mismatch for UFNDynamicScalabilityManagerActor::InputComponent");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, NetTag) == 376, "Offset mismatch for UFNDynamicScalabilityManagerActor::NetTag");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, NetCullDistanceSquared) == 380, "Offset mismatch for UFNDynamicScalabilityManagerActor::NetCullDistanceSquared");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, NetUpdateFrequency) == 384, "Offset mismatch for UFNDynamicScalabilityManagerActor::NetUpdateFrequency");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UFNDynamicScalabilityManagerActor::MinNetUpdateFrequency");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, NetPriority) == 392, "Offset mismatch for UFNDynamicScalabilityManagerActor::NetPriority");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, PhysicsReplicationMode) == 396, "Offset mismatch for UFNDynamicScalabilityManagerActor::PhysicsReplicationMode");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, Instigator) == 408, "Offset mismatch for UFNDynamicScalabilityManagerActor::Instigator");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, Children) == 416, "Offset mismatch for UFNDynamicScalabilityManagerActor::Children");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, RootComponent) == 432, "Offset mismatch for UFNDynamicScalabilityManagerActor::RootComponent");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, HLODLayer) == 448, "Offset mismatch for UFNDynamicScalabilityManagerActor::HLODLayer");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, Layers) == 456, "Offset mismatch for UFNDynamicScalabilityManagerActor::Layers");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, ParentComponent) == 472, "Offset mismatch for UFNDynamicScalabilityManagerActor::ParentComponent");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, Tags) == 496, "Offset mismatch for UFNDynamicScalabilityManagerActor::Tags");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnTakeAnyDamage) == 512, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnTakeAnyDamage");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnTakePointDamage) == 513, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnTakePointDamage");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnTakeRadialDamage) == 514, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnTakeRadialDamage");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnActorBeginOverlap) == 515, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnActorBeginOverlap");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnActorEndOverlap) == 516, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnActorEndOverlap");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnBeginCursorOver) == 517, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnBeginCursorOver");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnEndCursorOver) == 518, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnEndCursorOver");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnClicked) == 519, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnClicked");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnReleased) == 520, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnReleased");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnInputTouchBegin) == 521, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnInputTouchBegin");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnInputTouchEnd) == 522, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnInputTouchEnd");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnInputTouchEnter) == 523, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnInputTouchEnter");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnInputTouchLeave) == 524, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnInputTouchLeave");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnActorHit) == 525, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnActorHit");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnDestroyed) == 526, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnDestroyed");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, OnEndPlay) == 527, "Offset mismatch for UFNDynamicScalabilityManagerActor::OnEndPlay");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, InstanceComponents) == 592, "Offset mismatch for UFNDynamicScalabilityManagerActor::InstanceComponents");
static_assert(offsetof(UFNDynamicScalabilityManagerActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UFNDynamicScalabilityManagerActor::BlueprintCreatedComponents");

// /Script/FNDynamicScalability.FNDynamicScalabilityOperator
// Kind: Class; super: Interface
class UFNDynamicScalabilityOperator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FNDynamicScalability.FNDynamicScalabilityOperatorSetComponent
// Kind: Class; super: ActorComponent
class UFNDynamicScalabilityOperatorSetComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> Values; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFNDynamicScalabilityOperatorSetComponent, Values) == 200, "Offset mismatch for UFNDynamicScalabilityOperatorSetComponent::Values");

// /Script/FNDynamicScalability.FNDynamicScalabilityVolumeActor
// Kind: Class; super: Actor
class UFNDynamicScalabilityVolumeActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* BoxVolume; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* Manager; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    FName ManagerTag; // 0x0280 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFNDynamicScalabilityVolumeActor, BoxVolume) == 624, "Offset mismatch for UFNDynamicScalabilityVolumeActor::BoxVolume");
static_assert(offsetof(UFNDynamicScalabilityVolumeActor, Manager) == 632, "Offset mismatch for UFNDynamicScalabilityVolumeActor::Manager");
static_assert(offsetof(UFNDynamicScalabilityVolumeActor, ManagerTag) == 640, "Offset mismatch for UFNDynamicScalabilityVolumeActor::ManagerTag");
