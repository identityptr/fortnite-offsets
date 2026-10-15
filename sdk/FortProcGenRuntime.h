/**
 * decamp dumper generated SDK
 * Package: /Script/FortProcGenRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortProcGenRuntime.FortInstanceRandomStream
// Kind: ScriptStruct; super: none
struct FFortInstanceRandomStream
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortProcGenRuntime.PCGAttributeToTags
// Kind: ScriptStruct; super: none
struct FPCGAttributeToTags
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    FName AttributeName; // 0x0020 (Size: 0x8, Type: NameProperty)
    double MinValue; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double MaxValue; // 0x0030 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FPCGAttributeToTags, Tags) == 0, "Offset mismatch for FPCGAttributeToTags::Tags");
static_assert(offsetof(FPCGAttributeToTags, AttributeName) == 32, "Offset mismatch for FPCGAttributeToTags::AttributeName");
static_assert(offsetof(FPCGAttributeToTags, MinValue) == 40, "Offset mismatch for FPCGAttributeToTags::MinValue");
static_assert(offsetof(FPCGAttributeToTags, MaxValue) == 48, "Offset mismatch for FPCGAttributeToTags::MaxValue");

// /Script/FortProcGenRuntime.PCGAttributeToTagsConditionSet
// Kind: ScriptStruct; super: none
struct FPCGAttributeToTagsConditionSet
{
public:
    std::uint8_t bOverridePreviousTags; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExclusiveConditionalTags; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    TArray<void*> ConditionalTags; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGAttributeToTagsConditionSet, bOverridePreviousTags) == 0, "Offset mismatch for FPCGAttributeToTagsConditionSet::bOverridePreviousTags");
static_assert(offsetof(FPCGAttributeToTagsConditionSet, bExclusiveConditionalTags) == 1, "Offset mismatch for FPCGAttributeToTagsConditionSet::bExclusiveConditionalTags");
static_assert(offsetof(FPCGAttributeToTagsConditionSet, ConditionalTags) == 8, "Offset mismatch for FPCGAttributeToTagsConditionSet::ConditionalTags");

// /Script/FortProcGenRuntime.AsyncAction_FortProcGenRandomSubsystemReady
// Kind: Class; super: BlueprintAsyncActionBase
class UAsyncAction_FortProcGenRandomSubsystemReady
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnReady; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_FortProcGenRandomSubsystemReady, OnReady) == 48, "Offset mismatch for UAsyncAction_FortProcGenRandomSubsystemReady::OnReady");

// /Script/FortProcGenRuntime.FortProcGenActor
// Kind: Class; super: Actor
class UFortProcGenActor
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

static_assert(offsetof(UFortProcGenActor, PrimaryActorTick) == 40, "Offset mismatch for UFortProcGenActor::PrimaryActorTick");
static_assert(offsetof(UFortProcGenActor, bAlwaysRelevant) == 88, "Offset mismatch for UFortProcGenActor::bAlwaysRelevant");
static_assert(offsetof(UFortProcGenActor, bExchangedRoles) == 89, "Offset mismatch for UFortProcGenActor::bExchangedRoles");
static_assert(offsetof(UFortProcGenActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UFortProcGenActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UFortProcGenActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UFortProcGenActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UFortProcGenActor, bActorEnableCollision) == 93, "Offset mismatch for UFortProcGenActor::bActorEnableCollision");
static_assert(offsetof(UFortProcGenActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UFortProcGenActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortProcGenActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UFortProcGenActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortProcGenActor, RemoteRole) == 96, "Offset mismatch for UFortProcGenActor::RemoteRole");
static_assert(offsetof(UFortProcGenActor, InitialLifeSpan) == 100, "Offset mismatch for UFortProcGenActor::InitialLifeSpan");
static_assert(offsetof(UFortProcGenActor, CustomTimeDilation) == 104, "Offset mismatch for UFortProcGenActor::CustomTimeDilation");
static_assert(offsetof(UFortProcGenActor, RayTracingGroupId) == 108, "Offset mismatch for UFortProcGenActor::RayTracingGroupId");
static_assert(offsetof(UFortProcGenActor, AttachmentReplication) == 112, "Offset mismatch for UFortProcGenActor::AttachmentReplication");
static_assert(offsetof(UFortProcGenActor, ReplicatedMovement) == 208, "Offset mismatch for UFortProcGenActor::ReplicatedMovement");
static_assert(offsetof(UFortProcGenActor, Owner) == 344, "Offset mismatch for UFortProcGenActor::Owner");
static_assert(offsetof(UFortProcGenActor, NetDriverName) == 352, "Offset mismatch for UFortProcGenActor::NetDriverName");
static_assert(offsetof(UFortProcGenActor, Role) == 356, "Offset mismatch for UFortProcGenActor::Role");
static_assert(offsetof(UFortProcGenActor, NetDormancy) == 357, "Offset mismatch for UFortProcGenActor::NetDormancy");
static_assert(offsetof(UFortProcGenActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UFortProcGenActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UFortProcGenActor, AutoReceiveInput) == 359, "Offset mismatch for UFortProcGenActor::AutoReceiveInput");
static_assert(offsetof(UFortProcGenActor, InputPriority) == 360, "Offset mismatch for UFortProcGenActor::InputPriority");
static_assert(offsetof(UFortProcGenActor, InputComponent) == 368, "Offset mismatch for UFortProcGenActor::InputComponent");
static_assert(offsetof(UFortProcGenActor, NetTag) == 376, "Offset mismatch for UFortProcGenActor::NetTag");
static_assert(offsetof(UFortProcGenActor, NetCullDistanceSquared) == 380, "Offset mismatch for UFortProcGenActor::NetCullDistanceSquared");
static_assert(offsetof(UFortProcGenActor, NetUpdateFrequency) == 384, "Offset mismatch for UFortProcGenActor::NetUpdateFrequency");
static_assert(offsetof(UFortProcGenActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UFortProcGenActor::MinNetUpdateFrequency");
static_assert(offsetof(UFortProcGenActor, NetPriority) == 392, "Offset mismatch for UFortProcGenActor::NetPriority");
static_assert(offsetof(UFortProcGenActor, PhysicsReplicationMode) == 396, "Offset mismatch for UFortProcGenActor::PhysicsReplicationMode");
static_assert(offsetof(UFortProcGenActor, Instigator) == 408, "Offset mismatch for UFortProcGenActor::Instigator");
static_assert(offsetof(UFortProcGenActor, Children) == 416, "Offset mismatch for UFortProcGenActor::Children");
static_assert(offsetof(UFortProcGenActor, RootComponent) == 432, "Offset mismatch for UFortProcGenActor::RootComponent");
static_assert(offsetof(UFortProcGenActor, HLODLayer) == 448, "Offset mismatch for UFortProcGenActor::HLODLayer");
static_assert(offsetof(UFortProcGenActor, Layers) == 456, "Offset mismatch for UFortProcGenActor::Layers");
static_assert(offsetof(UFortProcGenActor, ParentComponent) == 472, "Offset mismatch for UFortProcGenActor::ParentComponent");
static_assert(offsetof(UFortProcGenActor, Tags) == 496, "Offset mismatch for UFortProcGenActor::Tags");
static_assert(offsetof(UFortProcGenActor, OnTakeAnyDamage) == 512, "Offset mismatch for UFortProcGenActor::OnTakeAnyDamage");
static_assert(offsetof(UFortProcGenActor, OnTakePointDamage) == 513, "Offset mismatch for UFortProcGenActor::OnTakePointDamage");
static_assert(offsetof(UFortProcGenActor, OnTakeRadialDamage) == 514, "Offset mismatch for UFortProcGenActor::OnTakeRadialDamage");
static_assert(offsetof(UFortProcGenActor, OnActorBeginOverlap) == 515, "Offset mismatch for UFortProcGenActor::OnActorBeginOverlap");
static_assert(offsetof(UFortProcGenActor, OnActorEndOverlap) == 516, "Offset mismatch for UFortProcGenActor::OnActorEndOverlap");
static_assert(offsetof(UFortProcGenActor, OnBeginCursorOver) == 517, "Offset mismatch for UFortProcGenActor::OnBeginCursorOver");
static_assert(offsetof(UFortProcGenActor, OnEndCursorOver) == 518, "Offset mismatch for UFortProcGenActor::OnEndCursorOver");
static_assert(offsetof(UFortProcGenActor, OnClicked) == 519, "Offset mismatch for UFortProcGenActor::OnClicked");
static_assert(offsetof(UFortProcGenActor, OnReleased) == 520, "Offset mismatch for UFortProcGenActor::OnReleased");
static_assert(offsetof(UFortProcGenActor, OnInputTouchBegin) == 521, "Offset mismatch for UFortProcGenActor::OnInputTouchBegin");
static_assert(offsetof(UFortProcGenActor, OnInputTouchEnd) == 522, "Offset mismatch for UFortProcGenActor::OnInputTouchEnd");
static_assert(offsetof(UFortProcGenActor, OnInputTouchEnter) == 523, "Offset mismatch for UFortProcGenActor::OnInputTouchEnter");
static_assert(offsetof(UFortProcGenActor, OnInputTouchLeave) == 524, "Offset mismatch for UFortProcGenActor::OnInputTouchLeave");
static_assert(offsetof(UFortProcGenActor, OnActorHit) == 525, "Offset mismatch for UFortProcGenActor::OnActorHit");
static_assert(offsetof(UFortProcGenActor, OnDestroyed) == 526, "Offset mismatch for UFortProcGenActor::OnDestroyed");
static_assert(offsetof(UFortProcGenActor, OnEndPlay) == 527, "Offset mismatch for UFortProcGenActor::OnEndPlay");
static_assert(offsetof(UFortProcGenActor, InstanceComponents) == 592, "Offset mismatch for UFortProcGenActor::InstanceComponents");
static_assert(offsetof(UFortProcGenActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UFortProcGenActor::BlueprintCreatedComponents");

// /Script/FortProcGenRuntime.FortProcGenManager
// Kind: Class; super: FortProcGenRandomSubsystem
class UFortProcGenManager
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FMulticastInlineDelegate OnProcGenReady; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProcGenStarted; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProcGenFinished; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0xA]; // 0x0098
    std::uint8_t bRequiresStreamingLevels; // 0x00A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x00A3
    TSet<void*> ActiveGeneratingActors; // 0x00A8 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UFortProcGenManager, OnProcGenReady) == 104, "Offset mismatch for UFortProcGenManager::OnProcGenReady");
static_assert(offsetof(UFortProcGenManager, OnProcGenStarted) == 120, "Offset mismatch for UFortProcGenManager::OnProcGenStarted");
static_assert(offsetof(UFortProcGenManager, OnProcGenFinished) == 136, "Offset mismatch for UFortProcGenManager::OnProcGenFinished");
static_assert(offsetof(UFortProcGenManager, bRequiresStreamingLevels) == 162, "Offset mismatch for UFortProcGenManager::bRequiresStreamingLevels");
static_assert(offsetof(UFortProcGenManager, ActiveGeneratingActors) == 168, "Offset mismatch for UFortProcGenManager::ActiveGeneratingActors");

// /Script/FortProcGenRuntime.FortProcGenRandomSubsystem
// Kind: Class; super: WorldSubsystem
class UFortProcGenRandomSubsystem
{
public:
    std::uint8_t Opaque[1];
};
