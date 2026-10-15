/**
 * decamp dumper generated SDK
 * Package: /Script/ChaosSolverEngine
 */
#pragma once
#include "Basic.h"

// /Script/ChaosSolverEngine.BreakEventCallbackWrapper
// Kind: ScriptStruct; super: none
struct FBreakEventCallbackWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosSolverEngine.ChaosDebugSubstepControl
// Kind: ScriptStruct; super: none
struct FChaosDebugSubstepControl
{
public:
    std::uint8_t bPause; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSubstep; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStep; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosDebugSubstepControl, bPause) == 0, "Offset mismatch for FChaosDebugSubstepControl::bPause");
static_assert(offsetof(FChaosDebugSubstepControl, bSubstep) == 1, "Offset mismatch for FChaosDebugSubstepControl::bSubstep");
static_assert(offsetof(FChaosDebugSubstepControl, bStep) == 2, "Offset mismatch for FChaosDebugSubstepControl::bStep");

// /Script/ChaosSolverEngine.ChaosHandlerSet
// Kind: ScriptStruct; super: none
struct FChaosHandlerSet
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSet<void*> ChaosHandlers; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FChaosHandlerSet, ChaosHandlers) == 8, "Offset mismatch for FChaosHandlerSet::ChaosHandlers");

// /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
// Kind: ScriptStruct; super: none
struct FChaosPhysicsCollisionInfo
{
public:
    void* Component; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* OtherComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Location[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t AccumulatedImpulse[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t OtherVelocity[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t OtherAngularVelocity[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    float Mass; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float OtherMass; // 0x00BC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosPhysicsCollisionInfo, Component) == 0, "Offset mismatch for FChaosPhysicsCollisionInfo::Component");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherComponent) == 8, "Offset mismatch for FChaosPhysicsCollisionInfo::OtherComponent");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Location) == 16, "Offset mismatch for FChaosPhysicsCollisionInfo::Location");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Normal) == 40, "Offset mismatch for FChaosPhysicsCollisionInfo::Normal");
static_assert(offsetof(FChaosPhysicsCollisionInfo, AccumulatedImpulse) == 64, "Offset mismatch for FChaosPhysicsCollisionInfo::AccumulatedImpulse");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Velocity) == 88, "Offset mismatch for FChaosPhysicsCollisionInfo::Velocity");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherVelocity) == 112, "Offset mismatch for FChaosPhysicsCollisionInfo::OtherVelocity");
static_assert(offsetof(FChaosPhysicsCollisionInfo, AngularVelocity) == 136, "Offset mismatch for FChaosPhysicsCollisionInfo::AngularVelocity");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherAngularVelocity) == 160, "Offset mismatch for FChaosPhysicsCollisionInfo::OtherAngularVelocity");
static_assert(offsetof(FChaosPhysicsCollisionInfo, Mass) == 184, "Offset mismatch for FChaosPhysicsCollisionInfo::Mass");
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherMass) == 188, "Offset mismatch for FChaosPhysicsCollisionInfo::OtherMass");

// /Script/ChaosSolverEngine.ChaosVDChannelStateChangeCommandMessage
// Kind: ScriptStruct; super: none
struct FChaosVDChannelStateChangeCommandMessage
{
public:
    std::uint8_t NewState[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDChannelStateChangeCommandMessage, NewState) == 0, "Offset mismatch for FChaosVDChannelStateChangeCommandMessage::NewState");

// /Script/ChaosSolverEngine.ChaosVDChannelStateChangeResponseMessage
// Kind: ScriptStruct; super: none
struct FChaosVDChannelStateChangeResponseMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t NewState[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDChannelStateChangeResponseMessage, InstanceID) == 0, "Offset mismatch for FChaosVDChannelStateChangeResponseMessage::InstanceID");
static_assert(offsetof(FChaosVDChannelStateChangeResponseMessage, NewState) == 16, "Offset mismatch for FChaosVDChannelStateChangeResponseMessage::NewState");

// /Script/ChaosSolverEngine.ChaosVDDataChannelState
// Kind: ScriptStruct; super: none
struct FChaosVDDataChannelState
{
public:
    FString ChannelName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanChangeChannelState; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosVDDataChannelState, ChannelName) == 0, "Offset mismatch for FChaosVDDataChannelState::ChannelName");
static_assert(offsetof(FChaosVDDataChannelState, bIsEnabled) == 16, "Offset mismatch for FChaosVDDataChannelState::bIsEnabled");
static_assert(offsetof(FChaosVDDataChannelState, bCanChangeChannelState) == 17, "Offset mismatch for FChaosVDDataChannelState::bCanChangeChannelState");

// /Script/ChaosSolverEngine.ChaosVDFullSessionInfoResponseData
// Kind: ScriptStruct; super: none
struct FChaosVDFullSessionInfoResponseData
{
public:
    TArray<void*> DataChannelsStates; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosVDFullSessionInfoResponseData, DataChannelsStates) == 0, "Offset mismatch for FChaosVDFullSessionInfoResponseData::DataChannelsStates");

// /Script/ChaosSolverEngine.ChaosVDRelayTraceDataMessage
// Kind: ScriptStruct; super: none
struct FChaosVDRelayTraceDataMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> DataBuffer; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosVDRelayTraceDataMessage, InstanceID) == 0, "Offset mismatch for FChaosVDRelayTraceDataMessage::InstanceID");
static_assert(offsetof(FChaosVDRelayTraceDataMessage, DataBuffer) == 16, "Offset mismatch for FChaosVDRelayTraceDataMessage::DataBuffer");

// /Script/ChaosSolverEngine.ChaosVDRelayTraceStatusMessage
// Kind: ScriptStruct; super: none
struct FChaosVDRelayTraceStatusMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int64_t QueuedDataBytesNum; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::uint8_t ThrottlingState; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosVDRelayTraceStatusMessage, InstanceID) == 0, "Offset mismatch for FChaosVDRelayTraceStatusMessage::InstanceID");
static_assert(offsetof(FChaosVDRelayTraceStatusMessage, QueuedDataBytesNum) == 16, "Offset mismatch for FChaosVDRelayTraceStatusMessage::QueuedDataBytesNum");
static_assert(offsetof(FChaosVDRelayTraceStatusMessage, ThrottlingState) == 24, "Offset mismatch for FChaosVDRelayTraceStatusMessage::ThrottlingState");

// /Script/ChaosSolverEngine.ChaosVDSessionData
// Kind: ScriptStruct; super: none
struct FChaosVDSessionData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosSolverEngine.ChaosVDStopRecordingCommandMessage
// Kind: ScriptStruct; super: StopRecordingCommandMessage
struct FChaosVDStopRecordingCommandMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosSolverEngine.CrumblingEventCallbackWrapper
// Kind: ScriptStruct; super: none
struct FCrumblingEventCallbackWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosSolverEngine.DataflowRigidSolverProxy
// Kind: ScriptStruct; super: DataflowPhysicsSolverProxy
struct FDataflowRigidSolverProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosSolverEngine.RemovalEventCallbackWrapper
// Kind: ScriptStruct; super: none
struct FRemovalEventCallbackWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosSolverEngine.ChaosDebugDrawComponent
// Kind: Class; super: ActorComponent
class UChaosDebugDrawComponent
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

static_assert(offsetof(UChaosDebugDrawComponent, PrimaryComponentTick) == 56, "Offset mismatch for UChaosDebugDrawComponent::PrimaryComponentTick");
static_assert(offsetof(UChaosDebugDrawComponent, ComponentTags) == 104, "Offset mismatch for UChaosDebugDrawComponent::ComponentTags");
static_assert(offsetof(UChaosDebugDrawComponent, AssetUserData) == 120, "Offset mismatch for UChaosDebugDrawComponent::AssetUserData");
static_assert(offsetof(UChaosDebugDrawComponent, UCSSerializationIndex) == 144, "Offset mismatch for UChaosDebugDrawComponent::UCSSerializationIndex");
static_assert(offsetof(UChaosDebugDrawComponent, bNetAddressable) == 152, "Offset mismatch for UChaosDebugDrawComponent::bNetAddressable");
static_assert(offsetof(UChaosDebugDrawComponent, bAutoActivate) == 154, "Offset mismatch for UChaosDebugDrawComponent::bAutoActivate");
static_assert(offsetof(UChaosDebugDrawComponent, bIsEditorOnly) == 155, "Offset mismatch for UChaosDebugDrawComponent::bIsEditorOnly");
static_assert(offsetof(UChaosDebugDrawComponent, CreationMethod) == 185, "Offset mismatch for UChaosDebugDrawComponent::CreationMethod");
static_assert(offsetof(UChaosDebugDrawComponent, OnComponentActivated) == 186, "Offset mismatch for UChaosDebugDrawComponent::OnComponentActivated");
static_assert(offsetof(UChaosDebugDrawComponent, OnComponentDeactivated) == 187, "Offset mismatch for UChaosDebugDrawComponent::OnComponentDeactivated");

// /Script/ChaosSolverEngine.ChaosDebugDrawSubsystem
// Kind: Class; super: WorldSubsystem
class UChaosDebugDrawSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosSolverEngine.ChaosEventListenerComponent
// Kind: Class; super: ActorComponent
class UChaosEventListenerComponent
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

static_assert(offsetof(UChaosEventListenerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UChaosEventListenerComponent::PrimaryComponentTick");
static_assert(offsetof(UChaosEventListenerComponent, ComponentTags) == 104, "Offset mismatch for UChaosEventListenerComponent::ComponentTags");
static_assert(offsetof(UChaosEventListenerComponent, AssetUserData) == 120, "Offset mismatch for UChaosEventListenerComponent::AssetUserData");
static_assert(offsetof(UChaosEventListenerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UChaosEventListenerComponent::UCSSerializationIndex");
static_assert(offsetof(UChaosEventListenerComponent, bNetAddressable) == 152, "Offset mismatch for UChaosEventListenerComponent::bNetAddressable");
static_assert(offsetof(UChaosEventListenerComponent, bAutoActivate) == 154, "Offset mismatch for UChaosEventListenerComponent::bAutoActivate");
static_assert(offsetof(UChaosEventListenerComponent, bIsEditorOnly) == 155, "Offset mismatch for UChaosEventListenerComponent::bIsEditorOnly");
static_assert(offsetof(UChaosEventListenerComponent, CreationMethod) == 185, "Offset mismatch for UChaosEventListenerComponent::CreationMethod");
static_assert(offsetof(UChaosEventListenerComponent, OnComponentActivated) == 186, "Offset mismatch for UChaosEventListenerComponent::OnComponentActivated");
static_assert(offsetof(UChaosEventListenerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UChaosEventListenerComponent::OnComponentDeactivated");

// /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
// Kind: Class; super: ChaosEventListenerComponent
class UChaosGameplayEventDispatcher
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    TMap<void*, void*> CollisionEventRegistrations; // 0x0108 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> BreakEventRegistrations; // 0x0118 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> RemovalEventRegistrations; // 0x0128 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CrumblingEventRegistrations; // 0x0138 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UChaosGameplayEventDispatcher, CollisionEventRegistrations) == 264, "Offset mismatch for UChaosGameplayEventDispatcher::CollisionEventRegistrations");
static_assert(offsetof(UChaosGameplayEventDispatcher, BreakEventRegistrations) == 280, "Offset mismatch for UChaosGameplayEventDispatcher::BreakEventRegistrations");
static_assert(offsetof(UChaosGameplayEventDispatcher, RemovalEventRegistrations) == 296, "Offset mismatch for UChaosGameplayEventDispatcher::RemovalEventRegistrations");
static_assert(offsetof(UChaosGameplayEventDispatcher, CrumblingEventRegistrations) == 312, "Offset mismatch for UChaosGameplayEventDispatcher::CrumblingEventRegistrations");

// /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
// Kind: Class; super: Interface
class UChaosNotifyHandlerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosSolverEngine.ChaosSolver
// Kind: Class; super: Object
class UChaosSolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosSolverEngine.ChaosSolverActor
// Kind: Class; super: Actor
class UChaosSolverActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t Properties[0x84]; // 0x0278 (Size: 0x84, Type: StructProperty)
    float TimeStepMultiplier; // 0x02FC (Size: 0x4, Type: FloatProperty)
    std::int32_t CollisionIterations; // 0x0300 (Size: 0x4, Type: IntProperty)
    std::int32_t PushOutIterations; // 0x0304 (Size: 0x4, Type: IntProperty)
    std::int32_t PushOutPairIterations; // 0x0308 (Size: 0x4, Type: IntProperty)
    float ClusterConnectionFactor; // 0x030C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ClusterUnionConnectionType; // 0x0310 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DoGenerateCollisionData; // 0x0311 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0312
    std::uint8_t CollisionFilterSettings[0x10]; // 0x0314 (Size: 0x10, Type: StructProperty)
    std::uint8_t DoGenerateBreakingData; // 0x0324 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0325
    std::uint8_t BreakingFilterSettings[0x10]; // 0x0328 (Size: 0x10, Type: StructProperty)
    std::uint8_t DoGenerateTrailingData; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0339
    std::uint8_t TrailingFilterSettings[0x10]; // 0x033C (Size: 0x10, Type: StructProperty)
    float MassScale; // 0x034C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasFloor; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0351
    float FloorHeight; // 0x0354 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ChaosDebugSubstepControl[0x8]; // 0x0358 (Size: 0x8, Type: StructProperty)
    void* SpriteComponent; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SimulationAsset[0x78]; // 0x0368 (Size: 0x78, Type: StructProperty)
    void* GameplayEventDispatcherComponent; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UChaosSolverActor, Properties) == 632, "Offset mismatch for UChaosSolverActor::Properties");
static_assert(offsetof(UChaosSolverActor, TimeStepMultiplier) == 764, "Offset mismatch for UChaosSolverActor::TimeStepMultiplier");
static_assert(offsetof(UChaosSolverActor, CollisionIterations) == 768, "Offset mismatch for UChaosSolverActor::CollisionIterations");
static_assert(offsetof(UChaosSolverActor, PushOutIterations) == 772, "Offset mismatch for UChaosSolverActor::PushOutIterations");
static_assert(offsetof(UChaosSolverActor, PushOutPairIterations) == 776, "Offset mismatch for UChaosSolverActor::PushOutPairIterations");
static_assert(offsetof(UChaosSolverActor, ClusterConnectionFactor) == 780, "Offset mismatch for UChaosSolverActor::ClusterConnectionFactor");
static_assert(offsetof(UChaosSolverActor, ClusterUnionConnectionType) == 784, "Offset mismatch for UChaosSolverActor::ClusterUnionConnectionType");
static_assert(offsetof(UChaosSolverActor, DoGenerateCollisionData) == 785, "Offset mismatch for UChaosSolverActor::DoGenerateCollisionData");
static_assert(offsetof(UChaosSolverActor, CollisionFilterSettings) == 788, "Offset mismatch for UChaosSolverActor::CollisionFilterSettings");
static_assert(offsetof(UChaosSolverActor, DoGenerateBreakingData) == 804, "Offset mismatch for UChaosSolverActor::DoGenerateBreakingData");
static_assert(offsetof(UChaosSolverActor, BreakingFilterSettings) == 808, "Offset mismatch for UChaosSolverActor::BreakingFilterSettings");
static_assert(offsetof(UChaosSolverActor, DoGenerateTrailingData) == 824, "Offset mismatch for UChaosSolverActor::DoGenerateTrailingData");
static_assert(offsetof(UChaosSolverActor, TrailingFilterSettings) == 828, "Offset mismatch for UChaosSolverActor::TrailingFilterSettings");
static_assert(offsetof(UChaosSolverActor, MassScale) == 844, "Offset mismatch for UChaosSolverActor::MassScale");
static_assert(offsetof(UChaosSolverActor, bHasFloor) == 848, "Offset mismatch for UChaosSolverActor::bHasFloor");
static_assert(offsetof(UChaosSolverActor, FloorHeight) == 852, "Offset mismatch for UChaosSolverActor::FloorHeight");
static_assert(offsetof(UChaosSolverActor, ChaosDebugSubstepControl) == 856, "Offset mismatch for UChaosSolverActor::ChaosDebugSubstepControl");
static_assert(offsetof(UChaosSolverActor, SpriteComponent) == 864, "Offset mismatch for UChaosSolverActor::SpriteComponent");
static_assert(offsetof(UChaosSolverActor, SimulationAsset) == 872, "Offset mismatch for UChaosSolverActor::SimulationAsset");
static_assert(offsetof(UChaosSolverActor, GameplayEventDispatcherComponent) == 992, "Offset mismatch for UChaosSolverActor::GameplayEventDispatcherComponent");

// /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UChaosSolverEngineBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosSolverEngine.ChaosSolverSettings
// Kind: Class; super: DeveloperSettings
class UChaosSolverSettings
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t DefaultChaosSolverActorClass[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChaosSolverSettings, DefaultChaosSolverActorClass) == 56, "Offset mismatch for UChaosSolverSettings::DefaultChaosSolverActorClass");
