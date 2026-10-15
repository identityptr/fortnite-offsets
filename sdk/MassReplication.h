/**
 * decamp dumper generated SDK
 * Package: /Script/MassReplication
 */
#pragma once
#include "Basic.h"

// /Script/MassReplication.MassBubbleInfoClassHandle
// Kind: ScriptStruct; super: SimpleIndexedHandleBase
struct FMassBubbleInfoClassHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassReplication.MassClientBubbleInfoData
// Kind: ScriptStruct; super: none
struct FMassClientBubbleInfoData
{
public:
    TArray<void*> Bubbles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* BubbleClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FMassClientBubbleInfoData, Bubbles) == 0, "Offset mismatch for FMassClientBubbleInfoData::Bubbles");
static_assert(offsetof(FMassClientBubbleInfoData, BubbleClass) == 16, "Offset mismatch for FMassClientBubbleInfoData::BubbleClass");

// /Script/MassReplication.MassClientBubbleSerializerBase
// Kind: ScriptStruct; super: FastArraySerializer
struct FMassClientBubbleSerializerBase
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* World; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* SpawnerSubsystem; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0058
    void* ReplicationSubsystem; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassClientBubbleSerializerBase, World) == 72, "Offset mismatch for FMassClientBubbleSerializerBase::World");
static_assert(offsetof(FMassClientBubbleSerializerBase, SpawnerSubsystem) == 80, "Offset mismatch for FMassClientBubbleSerializerBase::SpawnerSubsystem");
static_assert(offsetof(FMassClientBubbleSerializerBase, ReplicationSubsystem) == 104, "Offset mismatch for FMassClientBubbleSerializerBase::ReplicationSubsystem");

// /Script/MassReplication.MassClientHandle
// Kind: ScriptStruct; super: IndexedHandleBase
struct FMassClientHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassReplication.MassFastArrayItemBase
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FMassFastArrayItemBase
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t Handle[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassFastArrayItemBase, Handle) == 12, "Offset mismatch for FMassFastArrayItemBase::Handle");

// /Script/MassReplication.MassInReplicationGridTag
// Kind: ScriptStruct; super: MassTag
struct FMassInReplicationGridTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassReplication.MassReplicatedAgentFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassReplicatedAgentFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassReplication.MassReplicatedAgentHandle
// Kind: ScriptStruct; super: CompactIndexedHandleBase
struct FMassReplicatedAgentHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassReplication.MassReplicationGridCellLocationFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassReplicationGridCellLocationFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassReplication.MassReplicationLODFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassReplicationLODFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassReplication.MassReplicationParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassReplicationParameters
{
public:
    float LODDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0004
    float BufferHysteresisOnDistancePercentage; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t LODMaxCount; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0018
    std::int32_t LODMaxCountPerViewer; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0028
    float UpdateInterval; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0038
    void* BubbleInfoClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
    void* ReplicatorClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FMassReplicationParameters, LODDistance) == 0, "Offset mismatch for FMassReplicationParameters::LODDistance");
static_assert(offsetof(FMassReplicationParameters, BufferHysteresisOnDistancePercentage) == 16, "Offset mismatch for FMassReplicationParameters::BufferHysteresisOnDistancePercentage");
static_assert(offsetof(FMassReplicationParameters, LODMaxCount) == 20, "Offset mismatch for FMassReplicationParameters::LODMaxCount");
static_assert(offsetof(FMassReplicationParameters, LODMaxCountPerViewer) == 36, "Offset mismatch for FMassReplicationParameters::LODMaxCountPerViewer");
static_assert(offsetof(FMassReplicationParameters, UpdateInterval) == 52, "Offset mismatch for FMassReplicationParameters::UpdateInterval");
static_assert(offsetof(FMassReplicationParameters, BubbleInfoClass) == 72, "Offset mismatch for FMassReplicationParameters::BubbleInfoClass");
static_assert(offsetof(FMassReplicationParameters, ReplicatorClass) == 80, "Offset mismatch for FMassReplicationParameters::ReplicatorClass");

// /Script/MassReplication.MassReplicationSharedFragment
// Kind: ScriptStruct; super: MassSharedFragment
struct FMassReplicationSharedFragment
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> BubbleInfos; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x2038]; // 0x0030
    void* CachedReplicator; // 0x2068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassReplicationSharedFragment, BubbleInfos) == 32, "Offset mismatch for FMassReplicationSharedFragment::BubbleInfos");
static_assert(offsetof(FMassReplicationSharedFragment, CachedReplicator) == 8296, "Offset mismatch for FMassReplicationSharedFragment::CachedReplicator");

// /Script/MassReplication.MassReplicationViewerInfoFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassReplicationViewerInfoFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassReplication.ReplicatedAgentBase
// Kind: ScriptStruct; super: none
struct FReplicatedAgentBase
{
public:
    std::uint8_t NetID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t TemplateId[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReplicatedAgentBase, NetID) == 0, "Offset mismatch for FReplicatedAgentBase::NetID");
static_assert(offsetof(FReplicatedAgentBase, TemplateId) == 8, "Offset mismatch for FReplicatedAgentBase::TemplateId");

// /Script/MassReplication.ReplicatedAgentPositionYawData
// Kind: ScriptStruct; super: none
struct FReplicatedAgentPositionYawData
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Yaw; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FReplicatedAgentPositionYawData, Position) == 0, "Offset mismatch for FReplicatedAgentPositionYawData::Position");
static_assert(offsetof(FReplicatedAgentPositionYawData, Yaw) == 24, "Offset mismatch for FReplicatedAgentPositionYawData::Yaw");

// /Script/MassReplication.MassClientBubbleInfoBase
// Kind: Class; super: Info
class UMassClientBubbleInfoBase
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

static_assert(offsetof(UMassClientBubbleInfoBase, PrimaryActorTick) == 40, "Offset mismatch for UMassClientBubbleInfoBase::PrimaryActorTick");
static_assert(offsetof(UMassClientBubbleInfoBase, bAlwaysRelevant) == 88, "Offset mismatch for UMassClientBubbleInfoBase::bAlwaysRelevant");
static_assert(offsetof(UMassClientBubbleInfoBase, bExchangedRoles) == 89, "Offset mismatch for UMassClientBubbleInfoBase::bExchangedRoles");
static_assert(offsetof(UMassClientBubbleInfoBase, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UMassClientBubbleInfoBase::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UMassClientBubbleInfoBase, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UMassClientBubbleInfoBase::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UMassClientBubbleInfoBase, bActorEnableCollision) == 93, "Offset mismatch for UMassClientBubbleInfoBase::bActorEnableCollision");
static_assert(offsetof(UMassClientBubbleInfoBase, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UMassClientBubbleInfoBase::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UMassClientBubbleInfoBase, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UMassClientBubbleInfoBase::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UMassClientBubbleInfoBase, RemoteRole) == 96, "Offset mismatch for UMassClientBubbleInfoBase::RemoteRole");
static_assert(offsetof(UMassClientBubbleInfoBase, InitialLifeSpan) == 100, "Offset mismatch for UMassClientBubbleInfoBase::InitialLifeSpan");
static_assert(offsetof(UMassClientBubbleInfoBase, CustomTimeDilation) == 104, "Offset mismatch for UMassClientBubbleInfoBase::CustomTimeDilation");
static_assert(offsetof(UMassClientBubbleInfoBase, RayTracingGroupId) == 108, "Offset mismatch for UMassClientBubbleInfoBase::RayTracingGroupId");
static_assert(offsetof(UMassClientBubbleInfoBase, AttachmentReplication) == 112, "Offset mismatch for UMassClientBubbleInfoBase::AttachmentReplication");
static_assert(offsetof(UMassClientBubbleInfoBase, ReplicatedMovement) == 208, "Offset mismatch for UMassClientBubbleInfoBase::ReplicatedMovement");
static_assert(offsetof(UMassClientBubbleInfoBase, Owner) == 344, "Offset mismatch for UMassClientBubbleInfoBase::Owner");
static_assert(offsetof(UMassClientBubbleInfoBase, NetDriverName) == 352, "Offset mismatch for UMassClientBubbleInfoBase::NetDriverName");
static_assert(offsetof(UMassClientBubbleInfoBase, Role) == 356, "Offset mismatch for UMassClientBubbleInfoBase::Role");
static_assert(offsetof(UMassClientBubbleInfoBase, NetDormancy) == 357, "Offset mismatch for UMassClientBubbleInfoBase::NetDormancy");
static_assert(offsetof(UMassClientBubbleInfoBase, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UMassClientBubbleInfoBase::SpawnCollisionHandlingMethod");
static_assert(offsetof(UMassClientBubbleInfoBase, AutoReceiveInput) == 359, "Offset mismatch for UMassClientBubbleInfoBase::AutoReceiveInput");
static_assert(offsetof(UMassClientBubbleInfoBase, InputPriority) == 360, "Offset mismatch for UMassClientBubbleInfoBase::InputPriority");
static_assert(offsetof(UMassClientBubbleInfoBase, InputComponent) == 368, "Offset mismatch for UMassClientBubbleInfoBase::InputComponent");
static_assert(offsetof(UMassClientBubbleInfoBase, NetTag) == 376, "Offset mismatch for UMassClientBubbleInfoBase::NetTag");
static_assert(offsetof(UMassClientBubbleInfoBase, NetCullDistanceSquared) == 380, "Offset mismatch for UMassClientBubbleInfoBase::NetCullDistanceSquared");
static_assert(offsetof(UMassClientBubbleInfoBase, NetUpdateFrequency) == 384, "Offset mismatch for UMassClientBubbleInfoBase::NetUpdateFrequency");
static_assert(offsetof(UMassClientBubbleInfoBase, MinNetUpdateFrequency) == 388, "Offset mismatch for UMassClientBubbleInfoBase::MinNetUpdateFrequency");
static_assert(offsetof(UMassClientBubbleInfoBase, NetPriority) == 392, "Offset mismatch for UMassClientBubbleInfoBase::NetPriority");
static_assert(offsetof(UMassClientBubbleInfoBase, PhysicsReplicationMode) == 396, "Offset mismatch for UMassClientBubbleInfoBase::PhysicsReplicationMode");
static_assert(offsetof(UMassClientBubbleInfoBase, Instigator) == 408, "Offset mismatch for UMassClientBubbleInfoBase::Instigator");
static_assert(offsetof(UMassClientBubbleInfoBase, Children) == 416, "Offset mismatch for UMassClientBubbleInfoBase::Children");
static_assert(offsetof(UMassClientBubbleInfoBase, RootComponent) == 432, "Offset mismatch for UMassClientBubbleInfoBase::RootComponent");
static_assert(offsetof(UMassClientBubbleInfoBase, HLODLayer) == 448, "Offset mismatch for UMassClientBubbleInfoBase::HLODLayer");
static_assert(offsetof(UMassClientBubbleInfoBase, Layers) == 456, "Offset mismatch for UMassClientBubbleInfoBase::Layers");
static_assert(offsetof(UMassClientBubbleInfoBase, ParentComponent) == 472, "Offset mismatch for UMassClientBubbleInfoBase::ParentComponent");
static_assert(offsetof(UMassClientBubbleInfoBase, Tags) == 496, "Offset mismatch for UMassClientBubbleInfoBase::Tags");
static_assert(offsetof(UMassClientBubbleInfoBase, OnTakeAnyDamage) == 512, "Offset mismatch for UMassClientBubbleInfoBase::OnTakeAnyDamage");
static_assert(offsetof(UMassClientBubbleInfoBase, OnTakePointDamage) == 513, "Offset mismatch for UMassClientBubbleInfoBase::OnTakePointDamage");
static_assert(offsetof(UMassClientBubbleInfoBase, OnTakeRadialDamage) == 514, "Offset mismatch for UMassClientBubbleInfoBase::OnTakeRadialDamage");
static_assert(offsetof(UMassClientBubbleInfoBase, OnActorBeginOverlap) == 515, "Offset mismatch for UMassClientBubbleInfoBase::OnActorBeginOverlap");
static_assert(offsetof(UMassClientBubbleInfoBase, OnActorEndOverlap) == 516, "Offset mismatch for UMassClientBubbleInfoBase::OnActorEndOverlap");
static_assert(offsetof(UMassClientBubbleInfoBase, OnBeginCursorOver) == 517, "Offset mismatch for UMassClientBubbleInfoBase::OnBeginCursorOver");
static_assert(offsetof(UMassClientBubbleInfoBase, OnEndCursorOver) == 518, "Offset mismatch for UMassClientBubbleInfoBase::OnEndCursorOver");
static_assert(offsetof(UMassClientBubbleInfoBase, OnClicked) == 519, "Offset mismatch for UMassClientBubbleInfoBase::OnClicked");
static_assert(offsetof(UMassClientBubbleInfoBase, OnReleased) == 520, "Offset mismatch for UMassClientBubbleInfoBase::OnReleased");
static_assert(offsetof(UMassClientBubbleInfoBase, OnInputTouchBegin) == 521, "Offset mismatch for UMassClientBubbleInfoBase::OnInputTouchBegin");
static_assert(offsetof(UMassClientBubbleInfoBase, OnInputTouchEnd) == 522, "Offset mismatch for UMassClientBubbleInfoBase::OnInputTouchEnd");
static_assert(offsetof(UMassClientBubbleInfoBase, OnInputTouchEnter) == 523, "Offset mismatch for UMassClientBubbleInfoBase::OnInputTouchEnter");
static_assert(offsetof(UMassClientBubbleInfoBase, OnInputTouchLeave) == 524, "Offset mismatch for UMassClientBubbleInfoBase::OnInputTouchLeave");
static_assert(offsetof(UMassClientBubbleInfoBase, OnActorHit) == 525, "Offset mismatch for UMassClientBubbleInfoBase::OnActorHit");
static_assert(offsetof(UMassClientBubbleInfoBase, OnDestroyed) == 526, "Offset mismatch for UMassClientBubbleInfoBase::OnDestroyed");
static_assert(offsetof(UMassClientBubbleInfoBase, OnEndPlay) == 527, "Offset mismatch for UMassClientBubbleInfoBase::OnEndPlay");
static_assert(offsetof(UMassClientBubbleInfoBase, InstanceComponents) == 592, "Offset mismatch for UMassClientBubbleInfoBase::InstanceComponents");
static_assert(offsetof(UMassClientBubbleInfoBase, BlueprintCreatedComponents) == 608, "Offset mismatch for UMassClientBubbleInfoBase::BlueprintCreatedComponents");

// /Script/MassReplication.MassReplicationEntityDestructionObserver
// Kind: Class; super: MassObserverProcessor
class UMassReplicationEntityDestructionObserver
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassReplicationEntityDestructionObserver, ObservedType) == 256, "Offset mismatch for UMassReplicationEntityDestructionObserver::ObservedType");
static_assert(offsetof(UMassReplicationEntityDestructionObserver, ObservedTypes) == 264, "Offset mismatch for UMassReplicationEntityDestructionObserver::ObservedTypes");
static_assert(offsetof(UMassReplicationEntityDestructionObserver, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassReplicationEntityDestructionObserver::bAutoRegisterWithObserverRegistry");

// /Script/MassReplication.MassReplicationGridProcessor
// Kind: Class; super: MassProcessor
class UMassReplicationGridProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassReplicationGridProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassReplicationGridProcessor::ExecutionOrder");
static_assert(offsetof(UMassReplicationGridProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassReplicationGridProcessor::ProcessingPhase");
static_assert(offsetof(UMassReplicationGridProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassReplicationGridProcessor::ExecutionFlags");
static_assert(offsetof(UMassReplicationGridProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassReplicationGridProcessor::bAggregateRequirements");
static_assert(offsetof(UMassReplicationGridProcessor, ActivationState) == 83, "Offset mismatch for UMassReplicationGridProcessor::ActivationState");
static_assert(offsetof(UMassReplicationGridProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassReplicationGridProcessor::ExecutionPriority");

// /Script/MassReplication.MassReplicationGridRemoverProcessor
// Kind: Class; super: MassObserverProcessor
class UMassReplicationGridRemoverProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassReplicationGridRemoverProcessor, ObservedType) == 256, "Offset mismatch for UMassReplicationGridRemoverProcessor::ObservedType");
static_assert(offsetof(UMassReplicationGridRemoverProcessor, ObservedTypes) == 264, "Offset mismatch for UMassReplicationGridRemoverProcessor::ObservedTypes");
static_assert(offsetof(UMassReplicationGridRemoverProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassReplicationGridRemoverProcessor::bAutoRegisterWithObserverRegistry");

// /Script/MassReplication.MassReplicationProcessor
// Kind: Class; super: MassProcessor
class UMassReplicationProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ReplicationSubsystem; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassReplicationProcessor, ReplicationSubsystem) == 256, "Offset mismatch for UMassReplicationProcessor::ReplicationSubsystem");

// /Script/MassReplication.MassReplicationSettings
// Kind: Class; super: MassModuleSettings
class UMassReplicationSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float ReplicationGridCellSize; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMassReplicationSettings, ReplicationGridCellSize) == 40, "Offset mismatch for UMassReplicationSettings::ReplicationGridCellSize");

// /Script/MassReplication.MassReplicationSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassReplicationSubsystem
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> BubbleInfoArray; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0088
    void* World; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* MassLODSubsystem; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassReplicationSubsystem, BubbleInfoArray) == 120, "Offset mismatch for UMassReplicationSubsystem::BubbleInfoArray");
static_assert(offsetof(UMassReplicationSubsystem, World) == 184, "Offset mismatch for UMassReplicationSubsystem::World");
static_assert(offsetof(UMassReplicationSubsystem, MassLODSubsystem) == 192, "Offset mismatch for UMassReplicationSubsystem::MassLODSubsystem");

// /Script/MassReplication.MassReplicationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassReplicationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassReplicationTrait, Params) == 48, "Offset mismatch for UMassReplicationTrait::Params");

// /Script/MassReplication.MassReplicatorBase
// Kind: Class; super: Object
class UMassReplicatorBase
{
public:
    std::uint8_t Opaque[1];
};
