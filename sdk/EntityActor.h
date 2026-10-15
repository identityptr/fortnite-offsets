/**
 * decamp dumper generated SDK
 * Package: /Script/EntityActor
 */
#pragma once
#include "Basic.h"

// /Script/EntityActor.ActorToEntityAdapterComponent
// Kind: Class; super: ActorComponent
class UActorToEntityAdapterComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> SerializedComponents; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bForceOwnerReplication; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UActorToEntityAdapterComponent, SerializedComponents) == 200, "Offset mismatch for UActorToEntityAdapterComponent::SerializedComponents");
static_assert(offsetof(UActorToEntityAdapterComponent, bForceOwnerReplication) == 216, "Offset mismatch for UActorToEntityAdapterComponent::bForceOwnerReplication");

// /Script/EntityActor.EntityAbilityInterface
// Kind: Class; super: Interface
class UEntityAbilityInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityActor.EntityActorCollisionComponent
// Kind: Class; super: EntityEnableableComponent
class UEntityActorCollisionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FName ShadowVar_CollisionProfileName; // 0x00C0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PrimitiveComponentCache[0x22]; // 0x00C8 (Size: 0x22, Type: SoftObjectProperty)
    std::uint8_t CollisionShapeMode; // 0x00EA (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UEntityActorCollisionComponent, ShadowVar_CollisionProfileName) == 192, "Offset mismatch for UEntityActorCollisionComponent::ShadowVar_CollisionProfileName");
static_assert(offsetof(UEntityActorCollisionComponent, PrimitiveComponentCache) == 200, "Offset mismatch for UEntityActorCollisionComponent::PrimitiveComponentCache");
static_assert(offsetof(UEntityActorCollisionComponent, CollisionShapeMode) == 234, "Offset mismatch for UEntityActorCollisionComponent::CollisionShapeMode");

// /Script/EntityActor.EntityActorComponent
// Kind: Class; super: EntityComponent
class UEntityActorComponent
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* ActorComponent; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCreatedActorComponent; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEntityActorComponent, ActorComponent) == 96, "Offset mismatch for UEntityActorComponent::ActorComponent");
static_assert(offsetof(UEntityActorComponent, bCreatedActorComponent) == 104, "Offset mismatch for UEntityActorComponent::bCreatedActorComponent");

// /Script/EntityActor.EntityActorCustomReplicationComponent
// Kind: Class; super: EntityComponent
class UEntityActorCustomReplicationComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t ReplicationOverride; // 0x0058 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ReplicationRelevancyBucketType; // 0x0059 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x005A
    float CustomReplicationRelevancyRange; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UEntityActorCustomReplicationComponent, ReplicationOverride) == 88, "Offset mismatch for UEntityActorCustomReplicationComponent::ReplicationOverride");
static_assert(offsetof(UEntityActorCustomReplicationComponent, ReplicationRelevancyBucketType) == 89, "Offset mismatch for UEntityActorCustomReplicationComponent::ReplicationRelevancyBucketType");
static_assert(offsetof(UEntityActorCustomReplicationComponent, CustomReplicationRelevancyRange) == 92, "Offset mismatch for UEntityActorCustomReplicationComponent::CustomReplicationRelevancyRange");

// /Script/EntityActor.EntityActorLocalInputComponent
// Kind: Class; super: EntityComponent
class UEntityActorLocalInputComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t AutoReceiveControllerInput; // 0x0058 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UEntityActorLocalInputComponent, AutoReceiveControllerInput) == 88, "Offset mismatch for UEntityActorLocalInputComponent::AutoReceiveControllerInput");

// /Script/EntityActor.EntityActorPlayerComponent
// Kind: Class; super: EntityDataBackedComponent
class UEntityActorPlayerComponent
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t PlayerID[0x30]; // 0x0060 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlayerControllerCache[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> PlayerStateCache; // 0x00B0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UEntityActorPlayerComponent, PlayerID) == 96, "Offset mismatch for UEntityActorPlayerComponent::PlayerID");
static_assert(offsetof(UEntityActorPlayerComponent, PlayerControllerCache) == 144, "Offset mismatch for UEntityActorPlayerComponent::PlayerControllerCache");
static_assert(offsetof(UEntityActorPlayerComponent, PlayerStateCache) == 176, "Offset mismatch for UEntityActorPlayerComponent::PlayerStateCache");

// /Script/EntityActor.EntityActorPositionComponent
// Kind: Class; super: EntityPositionComponent
class UEntityActorPositionComponent
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ShadowVar_Location[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEntityActorPositionComponent, ShadowVar_Location) == 96, "Offset mismatch for UEntityActorPositionComponent::ShadowVar_Location");

// /Script/EntityActor.EntityActorRotationComponent
// Kind: Class; super: EntityRotationComponent
class UEntityActorRotationComponent
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ShadowVar_Rotation[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEntityActorRotationComponent, ShadowVar_Rotation) == 96, "Offset mismatch for UEntityActorRotationComponent::ShadowVar_Rotation");

// /Script/EntityActor.EntityActorScaleComponent
// Kind: Class; super: EntityScaleComponent
class UEntityActorScaleComponent
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ShadowVar_Scale[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEntityActorScaleComponent, ShadowVar_Scale) == 96, "Offset mismatch for UEntityActorScaleComponent::ShadowVar_Scale");

// /Script/EntityActor.EntityActorSkeletalMeshRenderComponent
// Kind: Class; super: EntityComponent
class UEntityActorSkeletalMeshRenderComponent
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t bAddedMeshRenderComponent; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* ShadowVar_SkeletalMesh; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShadowVar_EnableCollision; // 0x0070 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UEntityActorSkeletalMeshRenderComponent, bAddedMeshRenderComponent) == 96, "Offset mismatch for UEntityActorSkeletalMeshRenderComponent::bAddedMeshRenderComponent");
static_assert(offsetof(UEntityActorSkeletalMeshRenderComponent, ShadowVar_SkeletalMesh) == 104, "Offset mismatch for UEntityActorSkeletalMeshRenderComponent::ShadowVar_SkeletalMesh");
static_assert(offsetof(UEntityActorSkeletalMeshRenderComponent, ShadowVar_EnableCollision) == 112, "Offset mismatch for UEntityActorSkeletalMeshRenderComponent::ShadowVar_EnableCollision");

// /Script/EntityActor.EntityActorStaticMeshRenderComponent
// Kind: Class; super: EntityActorComponent
class UEntityActorStaticMeshRenderComponent
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> ShadowVar_MeshMaterials; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ShadowVar_EnableCollision; // 0x0098 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0099
    float ShadowVar_MaxDrawDistance; // 0x009C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UEntityActorStaticMeshRenderComponent, ShadowVar_MeshMaterials) == 136, "Offset mismatch for UEntityActorStaticMeshRenderComponent::ShadowVar_MeshMaterials");
static_assert(offsetof(UEntityActorStaticMeshRenderComponent, ShadowVar_EnableCollision) == 152, "Offset mismatch for UEntityActorStaticMeshRenderComponent::ShadowVar_EnableCollision");
static_assert(offsetof(UEntityActorStaticMeshRenderComponent, ShadowVar_MaxDrawDistance) == 156, "Offset mismatch for UEntityActorStaticMeshRenderComponent::ShadowVar_MaxDrawDistance");

// /Script/EntityActor.EntityActorSubsystem
// Kind: Class; super: WorldSubsystem
class UEntityActorSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityActor.EntityActorTextDisplayComponent
// Kind: Class; super: EntityActorComponent
class UEntityActorTextDisplayComponent
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t DisplayText[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    float ShadowVar_WorldSize; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ShadowVar_TextRenderColor[0x4]; // 0x009C (Size: 0x4, Type: StructProperty)
    std::uint8_t bAddedTextRenderComponent; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEntityActorTextDisplayComponent, DisplayText) == 136, "Offset mismatch for UEntityActorTextDisplayComponent::DisplayText");
static_assert(offsetof(UEntityActorTextDisplayComponent, ShadowVar_WorldSize) == 152, "Offset mismatch for UEntityActorTextDisplayComponent::ShadowVar_WorldSize");
static_assert(offsetof(UEntityActorTextDisplayComponent, ShadowVar_TextRenderColor) == 156, "Offset mismatch for UEntityActorTextDisplayComponent::ShadowVar_TextRenderColor");
static_assert(offsetof(UEntityActorTextDisplayComponent, bAddedTextRenderComponent) == 160, "Offset mismatch for UEntityActorTextDisplayComponent::bAddedTextRenderComponent");

// /Script/EntityActor.EntityDynamicActivationComponent
// Kind: Class; super: EntityEnableableComponent
class UEntityDynamicActivationComponent
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    float TransitionTargetTime; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTargetState; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0085
    TArray<void*> LinkedComponents; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEntityDynamicActivationComponent, TransitionTargetTime) == 128, "Offset mismatch for UEntityDynamicActivationComponent::TransitionTargetTime");
static_assert(offsetof(UEntityDynamicActivationComponent, bTargetState) == 132, "Offset mismatch for UEntityDynamicActivationComponent::bTargetState");
static_assert(offsetof(UEntityDynamicActivationComponent, LinkedComponents) == 136, "Offset mismatch for UEntityDynamicActivationComponent::LinkedComponents");

// /Script/EntityActor.EntityToActorAdapterComponent
// Kind: Class; super: EntityComponent
class UEntityToActorAdapterComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityActor.SimObject
// Kind: Class; super: Actor
class USimObject
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

static_assert(offsetof(USimObject, PrimaryActorTick) == 40, "Offset mismatch for USimObject::PrimaryActorTick");
static_assert(offsetof(USimObject, bAlwaysRelevant) == 88, "Offset mismatch for USimObject::bAlwaysRelevant");
static_assert(offsetof(USimObject, bExchangedRoles) == 89, "Offset mismatch for USimObject::bExchangedRoles");
static_assert(offsetof(USimObject, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for USimObject::bAllowTickBeforeBeginPlay");
static_assert(offsetof(USimObject, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for USimObject::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(USimObject, bActorEnableCollision) == 93, "Offset mismatch for USimObject::bActorEnableCollision");
static_assert(offsetof(USimObject, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for USimObject::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USimObject, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for USimObject::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USimObject, RemoteRole) == 96, "Offset mismatch for USimObject::RemoteRole");
static_assert(offsetof(USimObject, InitialLifeSpan) == 100, "Offset mismatch for USimObject::InitialLifeSpan");
static_assert(offsetof(USimObject, CustomTimeDilation) == 104, "Offset mismatch for USimObject::CustomTimeDilation");
static_assert(offsetof(USimObject, RayTracingGroupId) == 108, "Offset mismatch for USimObject::RayTracingGroupId");
static_assert(offsetof(USimObject, AttachmentReplication) == 112, "Offset mismatch for USimObject::AttachmentReplication");
static_assert(offsetof(USimObject, ReplicatedMovement) == 208, "Offset mismatch for USimObject::ReplicatedMovement");
static_assert(offsetof(USimObject, Owner) == 344, "Offset mismatch for USimObject::Owner");
static_assert(offsetof(USimObject, NetDriverName) == 352, "Offset mismatch for USimObject::NetDriverName");
static_assert(offsetof(USimObject, Role) == 356, "Offset mismatch for USimObject::Role");
static_assert(offsetof(USimObject, NetDormancy) == 357, "Offset mismatch for USimObject::NetDormancy");
static_assert(offsetof(USimObject, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for USimObject::SpawnCollisionHandlingMethod");
static_assert(offsetof(USimObject, AutoReceiveInput) == 359, "Offset mismatch for USimObject::AutoReceiveInput");
static_assert(offsetof(USimObject, InputPriority) == 360, "Offset mismatch for USimObject::InputPriority");
static_assert(offsetof(USimObject, InputComponent) == 368, "Offset mismatch for USimObject::InputComponent");
static_assert(offsetof(USimObject, NetTag) == 376, "Offset mismatch for USimObject::NetTag");
static_assert(offsetof(USimObject, NetCullDistanceSquared) == 380, "Offset mismatch for USimObject::NetCullDistanceSquared");
static_assert(offsetof(USimObject, NetUpdateFrequency) == 384, "Offset mismatch for USimObject::NetUpdateFrequency");
static_assert(offsetof(USimObject, MinNetUpdateFrequency) == 388, "Offset mismatch for USimObject::MinNetUpdateFrequency");
static_assert(offsetof(USimObject, NetPriority) == 392, "Offset mismatch for USimObject::NetPriority");
static_assert(offsetof(USimObject, PhysicsReplicationMode) == 396, "Offset mismatch for USimObject::PhysicsReplicationMode");
static_assert(offsetof(USimObject, Instigator) == 408, "Offset mismatch for USimObject::Instigator");
static_assert(offsetof(USimObject, Children) == 416, "Offset mismatch for USimObject::Children");
static_assert(offsetof(USimObject, RootComponent) == 432, "Offset mismatch for USimObject::RootComponent");
static_assert(offsetof(USimObject, HLODLayer) == 448, "Offset mismatch for USimObject::HLODLayer");
static_assert(offsetof(USimObject, Layers) == 456, "Offset mismatch for USimObject::Layers");
static_assert(offsetof(USimObject, ParentComponent) == 472, "Offset mismatch for USimObject::ParentComponent");
static_assert(offsetof(USimObject, Tags) == 496, "Offset mismatch for USimObject::Tags");
static_assert(offsetof(USimObject, OnTakeAnyDamage) == 512, "Offset mismatch for USimObject::OnTakeAnyDamage");
static_assert(offsetof(USimObject, OnTakePointDamage) == 513, "Offset mismatch for USimObject::OnTakePointDamage");
static_assert(offsetof(USimObject, OnTakeRadialDamage) == 514, "Offset mismatch for USimObject::OnTakeRadialDamage");
static_assert(offsetof(USimObject, OnActorBeginOverlap) == 515, "Offset mismatch for USimObject::OnActorBeginOverlap");
static_assert(offsetof(USimObject, OnActorEndOverlap) == 516, "Offset mismatch for USimObject::OnActorEndOverlap");
static_assert(offsetof(USimObject, OnBeginCursorOver) == 517, "Offset mismatch for USimObject::OnBeginCursorOver");
static_assert(offsetof(USimObject, OnEndCursorOver) == 518, "Offset mismatch for USimObject::OnEndCursorOver");
static_assert(offsetof(USimObject, OnClicked) == 519, "Offset mismatch for USimObject::OnClicked");
static_assert(offsetof(USimObject, OnReleased) == 520, "Offset mismatch for USimObject::OnReleased");
static_assert(offsetof(USimObject, OnInputTouchBegin) == 521, "Offset mismatch for USimObject::OnInputTouchBegin");
static_assert(offsetof(USimObject, OnInputTouchEnd) == 522, "Offset mismatch for USimObject::OnInputTouchEnd");
static_assert(offsetof(USimObject, OnInputTouchEnter) == 523, "Offset mismatch for USimObject::OnInputTouchEnter");
static_assert(offsetof(USimObject, OnInputTouchLeave) == 524, "Offset mismatch for USimObject::OnInputTouchLeave");
static_assert(offsetof(USimObject, OnActorHit) == 525, "Offset mismatch for USimObject::OnActorHit");
static_assert(offsetof(USimObject, OnDestroyed) == 526, "Offset mismatch for USimObject::OnDestroyed");
static_assert(offsetof(USimObject, OnEndPlay) == 527, "Offset mismatch for USimObject::OnEndPlay");
static_assert(offsetof(USimObject, InstanceComponents) == 592, "Offset mismatch for USimObject::InstanceComponents");
static_assert(offsetof(USimObject, BlueprintCreatedComponents) == 608, "Offset mismatch for USimObject::BlueprintCreatedComponents");
