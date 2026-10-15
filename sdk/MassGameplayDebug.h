/**
 * decamp dumper generated SDK
 * Package: /Script/MassGameplayDebug
 */
#pragma once
#include "Basic.h"

// /Script/MassGameplayDebug.AgentDebugVisualization
// Kind: ScriptStruct; super: TableRowBase
struct FAgentDebugVisualization
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Mesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* MaterialOverride; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint32_t VisualNearCullDistance; // 0x0018 (Size: 0x4, Type: UInt32Property)
    std::uint32_t VisualFarCullDistance; // 0x001C (Size: 0x4, Type: UInt32Property)
    std::uint8_t WireShape; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAgentDebugVisualization, Mesh) == 8, "Offset mismatch for FAgentDebugVisualization::Mesh");
static_assert(offsetof(FAgentDebugVisualization, MaterialOverride) == 16, "Offset mismatch for FAgentDebugVisualization::MaterialOverride");
static_assert(offsetof(FAgentDebugVisualization, VisualNearCullDistance) == 24, "Offset mismatch for FAgentDebugVisualization::VisualNearCullDistance");
static_assert(offsetof(FAgentDebugVisualization, VisualFarCullDistance) == 28, "Offset mismatch for FAgentDebugVisualization::VisualFarCullDistance");
static_assert(offsetof(FAgentDebugVisualization, WireShape) == 32, "Offset mismatch for FAgentDebugVisualization::WireShape");

// /Script/MassGameplayDebug.DataFragment_DebugVis
// Kind: ScriptStruct; super: MassFragment
struct FDataFragment_DebugVis
{
public:
    std::uint8_t Shape; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDataFragment_DebugVis, Shape) == 0, "Offset mismatch for FDataFragment_DebugVis::Shape");

// /Script/MassGameplayDebug.MassDebuggableTag
// Kind: ScriptStruct; super: MassTag
struct FMassDebuggableTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassGameplayDebug.SimDebugDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FSimDebugDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Mesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* MaterialOverride; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float Scale; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSimDebugDataRow, Mesh) == 8, "Offset mismatch for FSimDebugDataRow::Mesh");
static_assert(offsetof(FSimDebugDataRow, MaterialOverride) == 16, "Offset mismatch for FSimDebugDataRow::MaterialOverride");
static_assert(offsetof(FSimDebugDataRow, Scale) == 24, "Offset mismatch for FSimDebugDataRow::Scale");

// /Script/MassGameplayDebug.SimDebugVisFragment
// Kind: ScriptStruct; super: MassFragment
struct FSimDebugVisFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassGameplayDebug.DebugVisLocationProcessor
// Kind: Class; super: MassProcessor
class UDebugVisLocationProcessor
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

static_assert(offsetof(UDebugVisLocationProcessor, ExecutionOrder) == 40, "Offset mismatch for UDebugVisLocationProcessor::ExecutionOrder");
static_assert(offsetof(UDebugVisLocationProcessor, ProcessingPhase) == 80, "Offset mismatch for UDebugVisLocationProcessor::ProcessingPhase");
static_assert(offsetof(UDebugVisLocationProcessor, ExecutionFlags) == 81, "Offset mismatch for UDebugVisLocationProcessor::ExecutionFlags");
static_assert(offsetof(UDebugVisLocationProcessor, bAggregateRequirements) == 82, "Offset mismatch for UDebugVisLocationProcessor::bAggregateRequirements");
static_assert(offsetof(UDebugVisLocationProcessor, ActivationState) == 83, "Offset mismatch for UDebugVisLocationProcessor::ActivationState");
static_assert(offsetof(UDebugVisLocationProcessor, ExecutionPriority) == 84, "Offset mismatch for UDebugVisLocationProcessor::ExecutionPriority");

// /Script/MassGameplayDebug.MassDebugVisualizationComponent
// Kind: Class; super: ActorComponent
class UMassDebugVisualizationComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UMassDebugVisualizationComponent, PrimaryComponentTick) == 56, "Offset mismatch for UMassDebugVisualizationComponent::PrimaryComponentTick");
static_assert(offsetof(UMassDebugVisualizationComponent, ComponentTags) == 104, "Offset mismatch for UMassDebugVisualizationComponent::ComponentTags");
static_assert(offsetof(UMassDebugVisualizationComponent, AssetUserData) == 120, "Offset mismatch for UMassDebugVisualizationComponent::AssetUserData");
static_assert(offsetof(UMassDebugVisualizationComponent, UCSSerializationIndex) == 144, "Offset mismatch for UMassDebugVisualizationComponent::UCSSerializationIndex");
static_assert(offsetof(UMassDebugVisualizationComponent, bNetAddressable) == 152, "Offset mismatch for UMassDebugVisualizationComponent::bNetAddressable");
static_assert(offsetof(UMassDebugVisualizationComponent, bAutoActivate) == 154, "Offset mismatch for UMassDebugVisualizationComponent::bAutoActivate");
static_assert(offsetof(UMassDebugVisualizationComponent, bIsEditorOnly) == 155, "Offset mismatch for UMassDebugVisualizationComponent::bIsEditorOnly");
static_assert(offsetof(UMassDebugVisualizationComponent, CreationMethod) == 185, "Offset mismatch for UMassDebugVisualizationComponent::CreationMethod");
static_assert(offsetof(UMassDebugVisualizationComponent, OnComponentActivated) == 186, "Offset mismatch for UMassDebugVisualizationComponent::OnComponentActivated");
static_assert(offsetof(UMassDebugVisualizationComponent, OnComponentDeactivated) == 187, "Offset mismatch for UMassDebugVisualizationComponent::OnComponentDeactivated");

// /Script/MassGameplayDebug.MassDebugVisualizationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassDebugVisualizationTrait
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValidTargetConfig; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassDebugVisualizationTrait, ValidTargetConfig) == 40, "Offset mismatch for UMassDebugVisualizationTrait::ValidTargetConfig");

// /Script/MassGameplayDebug.MassDebugVisualizer
// Kind: Class; super: Actor
class UMassDebugVisualizer
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

static_assert(offsetof(UMassDebugVisualizer, PrimaryActorTick) == 40, "Offset mismatch for UMassDebugVisualizer::PrimaryActorTick");
static_assert(offsetof(UMassDebugVisualizer, bAlwaysRelevant) == 88, "Offset mismatch for UMassDebugVisualizer::bAlwaysRelevant");
static_assert(offsetof(UMassDebugVisualizer, bExchangedRoles) == 89, "Offset mismatch for UMassDebugVisualizer::bExchangedRoles");
static_assert(offsetof(UMassDebugVisualizer, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UMassDebugVisualizer::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UMassDebugVisualizer, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UMassDebugVisualizer::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UMassDebugVisualizer, bActorEnableCollision) == 93, "Offset mismatch for UMassDebugVisualizer::bActorEnableCollision");
static_assert(offsetof(UMassDebugVisualizer, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UMassDebugVisualizer::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UMassDebugVisualizer, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UMassDebugVisualizer::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UMassDebugVisualizer, RemoteRole) == 96, "Offset mismatch for UMassDebugVisualizer::RemoteRole");
static_assert(offsetof(UMassDebugVisualizer, InitialLifeSpan) == 100, "Offset mismatch for UMassDebugVisualizer::InitialLifeSpan");
static_assert(offsetof(UMassDebugVisualizer, CustomTimeDilation) == 104, "Offset mismatch for UMassDebugVisualizer::CustomTimeDilation");
static_assert(offsetof(UMassDebugVisualizer, RayTracingGroupId) == 108, "Offset mismatch for UMassDebugVisualizer::RayTracingGroupId");
static_assert(offsetof(UMassDebugVisualizer, AttachmentReplication) == 112, "Offset mismatch for UMassDebugVisualizer::AttachmentReplication");
static_assert(offsetof(UMassDebugVisualizer, ReplicatedMovement) == 208, "Offset mismatch for UMassDebugVisualizer::ReplicatedMovement");
static_assert(offsetof(UMassDebugVisualizer, Owner) == 344, "Offset mismatch for UMassDebugVisualizer::Owner");
static_assert(offsetof(UMassDebugVisualizer, NetDriverName) == 352, "Offset mismatch for UMassDebugVisualizer::NetDriverName");
static_assert(offsetof(UMassDebugVisualizer, Role) == 356, "Offset mismatch for UMassDebugVisualizer::Role");
static_assert(offsetof(UMassDebugVisualizer, NetDormancy) == 357, "Offset mismatch for UMassDebugVisualizer::NetDormancy");
static_assert(offsetof(UMassDebugVisualizer, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UMassDebugVisualizer::SpawnCollisionHandlingMethod");
static_assert(offsetof(UMassDebugVisualizer, AutoReceiveInput) == 359, "Offset mismatch for UMassDebugVisualizer::AutoReceiveInput");
static_assert(offsetof(UMassDebugVisualizer, InputPriority) == 360, "Offset mismatch for UMassDebugVisualizer::InputPriority");
static_assert(offsetof(UMassDebugVisualizer, InputComponent) == 368, "Offset mismatch for UMassDebugVisualizer::InputComponent");
static_assert(offsetof(UMassDebugVisualizer, NetTag) == 376, "Offset mismatch for UMassDebugVisualizer::NetTag");
static_assert(offsetof(UMassDebugVisualizer, NetCullDistanceSquared) == 380, "Offset mismatch for UMassDebugVisualizer::NetCullDistanceSquared");
static_assert(offsetof(UMassDebugVisualizer, NetUpdateFrequency) == 384, "Offset mismatch for UMassDebugVisualizer::NetUpdateFrequency");
static_assert(offsetof(UMassDebugVisualizer, MinNetUpdateFrequency) == 388, "Offset mismatch for UMassDebugVisualizer::MinNetUpdateFrequency");
static_assert(offsetof(UMassDebugVisualizer, NetPriority) == 392, "Offset mismatch for UMassDebugVisualizer::NetPriority");
static_assert(offsetof(UMassDebugVisualizer, PhysicsReplicationMode) == 396, "Offset mismatch for UMassDebugVisualizer::PhysicsReplicationMode");
static_assert(offsetof(UMassDebugVisualizer, Instigator) == 408, "Offset mismatch for UMassDebugVisualizer::Instigator");
static_assert(offsetof(UMassDebugVisualizer, Children) == 416, "Offset mismatch for UMassDebugVisualizer::Children");
static_assert(offsetof(UMassDebugVisualizer, RootComponent) == 432, "Offset mismatch for UMassDebugVisualizer::RootComponent");
static_assert(offsetof(UMassDebugVisualizer, HLODLayer) == 448, "Offset mismatch for UMassDebugVisualizer::HLODLayer");
static_assert(offsetof(UMassDebugVisualizer, Layers) == 456, "Offset mismatch for UMassDebugVisualizer::Layers");
static_assert(offsetof(UMassDebugVisualizer, ParentComponent) == 472, "Offset mismatch for UMassDebugVisualizer::ParentComponent");
static_assert(offsetof(UMassDebugVisualizer, Tags) == 496, "Offset mismatch for UMassDebugVisualizer::Tags");
static_assert(offsetof(UMassDebugVisualizer, OnTakeAnyDamage) == 512, "Offset mismatch for UMassDebugVisualizer::OnTakeAnyDamage");
static_assert(offsetof(UMassDebugVisualizer, OnTakePointDamage) == 513, "Offset mismatch for UMassDebugVisualizer::OnTakePointDamage");
static_assert(offsetof(UMassDebugVisualizer, OnTakeRadialDamage) == 514, "Offset mismatch for UMassDebugVisualizer::OnTakeRadialDamage");
static_assert(offsetof(UMassDebugVisualizer, OnActorBeginOverlap) == 515, "Offset mismatch for UMassDebugVisualizer::OnActorBeginOverlap");
static_assert(offsetof(UMassDebugVisualizer, OnActorEndOverlap) == 516, "Offset mismatch for UMassDebugVisualizer::OnActorEndOverlap");
static_assert(offsetof(UMassDebugVisualizer, OnBeginCursorOver) == 517, "Offset mismatch for UMassDebugVisualizer::OnBeginCursorOver");
static_assert(offsetof(UMassDebugVisualizer, OnEndCursorOver) == 518, "Offset mismatch for UMassDebugVisualizer::OnEndCursorOver");
static_assert(offsetof(UMassDebugVisualizer, OnClicked) == 519, "Offset mismatch for UMassDebugVisualizer::OnClicked");
static_assert(offsetof(UMassDebugVisualizer, OnReleased) == 520, "Offset mismatch for UMassDebugVisualizer::OnReleased");
static_assert(offsetof(UMassDebugVisualizer, OnInputTouchBegin) == 521, "Offset mismatch for UMassDebugVisualizer::OnInputTouchBegin");
static_assert(offsetof(UMassDebugVisualizer, OnInputTouchEnd) == 522, "Offset mismatch for UMassDebugVisualizer::OnInputTouchEnd");
static_assert(offsetof(UMassDebugVisualizer, OnInputTouchEnter) == 523, "Offset mismatch for UMassDebugVisualizer::OnInputTouchEnter");
static_assert(offsetof(UMassDebugVisualizer, OnInputTouchLeave) == 524, "Offset mismatch for UMassDebugVisualizer::OnInputTouchLeave");
static_assert(offsetof(UMassDebugVisualizer, OnActorHit) == 525, "Offset mismatch for UMassDebugVisualizer::OnActorHit");
static_assert(offsetof(UMassDebugVisualizer, OnDestroyed) == 526, "Offset mismatch for UMassDebugVisualizer::OnDestroyed");
static_assert(offsetof(UMassDebugVisualizer, OnEndPlay) == 527, "Offset mismatch for UMassDebugVisualizer::OnEndPlay");
static_assert(offsetof(UMassDebugVisualizer, InstanceComponents) == 592, "Offset mismatch for UMassDebugVisualizer::InstanceComponents");
static_assert(offsetof(UMassDebugVisualizer, BlueprintCreatedComponents) == 608, "Offset mismatch for UMassDebugVisualizer::BlueprintCreatedComponents");

// /Script/MassGameplayDebug.MassDebuggerSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassDebuggerSubsystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* VisualizationComponent; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* DebugVisualizer; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassDebuggerSubsystem, VisualizationComponent) == 64, "Offset mismatch for UMassDebuggerSubsystem::VisualizationComponent");
static_assert(offsetof(UMassDebuggerSubsystem, DebugVisualizer) == 72, "Offset mismatch for UMassDebuggerSubsystem::DebugVisualizer");

// /Script/MassGameplayDebug.MassProcessor_UpdateDebugVis
// Kind: Class; super: MassProcessor
class UMassProcessor_UpdateDebugVis
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

static_assert(offsetof(UMassProcessor_UpdateDebugVis, ExecutionOrder) == 40, "Offset mismatch for UMassProcessor_UpdateDebugVis::ExecutionOrder");
static_assert(offsetof(UMassProcessor_UpdateDebugVis, ProcessingPhase) == 80, "Offset mismatch for UMassProcessor_UpdateDebugVis::ProcessingPhase");
static_assert(offsetof(UMassProcessor_UpdateDebugVis, ExecutionFlags) == 81, "Offset mismatch for UMassProcessor_UpdateDebugVis::ExecutionFlags");
static_assert(offsetof(UMassProcessor_UpdateDebugVis, bAggregateRequirements) == 82, "Offset mismatch for UMassProcessor_UpdateDebugVis::bAggregateRequirements");
static_assert(offsetof(UMassProcessor_UpdateDebugVis, ActivationState) == 83, "Offset mismatch for UMassProcessor_UpdateDebugVis::ActivationState");
static_assert(offsetof(UMassProcessor_UpdateDebugVis, ExecutionPriority) == 84, "Offset mismatch for UMassProcessor_UpdateDebugVis::ExecutionPriority");
