/**
 * decamp dumper generated SDK
 * Package: /Script/ChaosModularVehicleEngine
 */
#pragma once
#include "Basic.h"

// /Script/ChaosModularVehicleEngine.AnimNode_ModularVehicleController
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_ModularVehicleController
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ComponentPose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int32_t LODThreshold; // 0x0020 (Size: 0x4, Type: IntProperty)
    float ActualAlpha; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaInputType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    float Alpha; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t AlphaBoolBlend[0x48]; // 0x0038 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaScaleBiasClamp[0x1]; // 0x0084 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_ModularVehicleController, ComponentPose) == 16, "Offset mismatch for FAnimNode_ModularVehicleController::ComponentPose");
static_assert(offsetof(FAnimNode_ModularVehicleController, LODThreshold) == 32, "Offset mismatch for FAnimNode_ModularVehicleController::LODThreshold");
static_assert(offsetof(FAnimNode_ModularVehicleController, ActualAlpha) == 36, "Offset mismatch for FAnimNode_ModularVehicleController::ActualAlpha");
static_assert(offsetof(FAnimNode_ModularVehicleController, AlphaInputType) == 40, "Offset mismatch for FAnimNode_ModularVehicleController::AlphaInputType");
static_assert(offsetof(FAnimNode_ModularVehicleController, bAlphaBoolEnabled) == 41, "Offset mismatch for FAnimNode_ModularVehicleController::bAlphaBoolEnabled");
static_assert(offsetof(FAnimNode_ModularVehicleController, Alpha) == 44, "Offset mismatch for FAnimNode_ModularVehicleController::Alpha");
static_assert(offsetof(FAnimNode_ModularVehicleController, AlphaScaleBias) == 48, "Offset mismatch for FAnimNode_ModularVehicleController::AlphaScaleBias");
static_assert(offsetof(FAnimNode_ModularVehicleController, AlphaBoolBlend) == 56, "Offset mismatch for FAnimNode_ModularVehicleController::AlphaBoolBlend");
static_assert(offsetof(FAnimNode_ModularVehicleController, AlphaCurveName) == 128, "Offset mismatch for FAnimNode_ModularVehicleController::AlphaCurveName");
static_assert(offsetof(FAnimNode_ModularVehicleController, AlphaScaleBiasClamp) == 132, "Offset mismatch for FAnimNode_ModularVehicleController::AlphaScaleBiasClamp");

// /Script/ChaosModularVehicleEngine.ConstructionData
// Kind: ScriptStruct; super: none
struct FConstructionData
{
public:
    void* Component; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ConstructionIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FConstructionData, Component) == 0, "Offset mismatch for FConstructionData::Component");
static_assert(offsetof(FConstructionData, ConstructionIndex) == 8, "Offset mismatch for FConstructionData::ConstructionIndex");

// /Script/ChaosModularVehicleEngine.ModularReplicatedState
// Kind: ScriptStruct; super: ModularVehicleInputs
struct FModularReplicatedState
{
public:
    std::uint8_t Reverse; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t KeepAwake; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t Container[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FModularReplicatedState, Reverse) == 0, "Offset mismatch for FModularReplicatedState::Reverse");
static_assert(offsetof(FModularReplicatedState, KeepAwake) == 1, "Offset mismatch for FModularReplicatedState::KeepAwake");
static_assert(offsetof(FModularReplicatedState, Container) == 8, "Offset mismatch for FModularReplicatedState::Container");

// /Script/ChaosModularVehicleEngine.ModularVehicleAnimationInstanceProxy
// Kind: ScriptStruct; super: AnimInstanceProxy
struct FModularVehicleAnimationInstanceProxy
{
public:
    std::uint8_t Pad_0000[0x3F0]; // 0x0000
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x03F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FModularVehicleAnimationInstanceProxy, SlotGroupInertializationRequestDataMap) == 1008, "Offset mismatch for FModularVehicleAnimationInstanceProxy::SlotGroupInertializationRequestDataMap");

// /Script/ChaosModularVehicleEngine.ModularVehicleInputs
// Kind: ScriptStruct; super: none
struct FModularVehicleInputs
{
public:
    std::uint8_t Reverse; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t KeepAwake; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t Container[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FModularVehicleInputs, Reverse) == 0, "Offset mismatch for FModularVehicleInputs::Reverse");
static_assert(offsetof(FModularVehicleInputs, KeepAwake) == 1, "Offset mismatch for FModularVehicleInputs::KeepAwake");
static_assert(offsetof(FModularVehicleInputs, Container) == 8, "Offset mismatch for FModularVehicleInputs::Container");

// /Script/ChaosModularVehicleEngine.ModularVehicleSocket
// Kind: ScriptStruct; super: none
struct FModularVehicleSocket
{
public:
    FName SocketName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t RelativeLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeRotation[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FModularVehicleSocket, SocketName) == 0, "Offset mismatch for FModularVehicleSocket::SocketName");
static_assert(offsetof(FModularVehicleSocket, RelativeLocation) == 8, "Offset mismatch for FModularVehicleSocket::RelativeLocation");
static_assert(offsetof(FModularVehicleSocket, RelativeRotation) == 32, "Offset mismatch for FModularVehicleSocket::RelativeRotation");

// /Script/ChaosModularVehicleEngine.ModuleAnimationSetup
// Kind: ScriptStruct; super: none
struct FModuleAnimationSetup
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosModularVehicleEngine.ModuleInputNetTokenData
// Kind: ScriptStruct; super: none
struct FModuleInputNetTokenData
{
public:
    TArray<void*> Types; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DecayValues; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FModuleInputNetTokenData, Types) == 0, "Offset mismatch for FModuleInputNetTokenData::Types");
static_assert(offsetof(FModuleInputNetTokenData, DecayValues) == 16, "Offset mismatch for FModuleInputNetTokenData::DecayValues");

// /Script/ChaosModularVehicleEngine.NetworkModularVehicleInputs
// Kind: ScriptStruct; super: NetworkPhysicsData
struct FNetworkModularVehicleInputs
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t VehicleInputs[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNetworkModularVehicleInputs, VehicleInputs) == 48, "Offset mismatch for FNetworkModularVehicleInputs::VehicleInputs");

// /Script/ChaosModularVehicleEngine.NetworkModularVehicleStateNetTokenData
// Kind: ScriptStruct; super: none
struct FNetworkModularVehicleStateNetTokenData
{
public:
    TArray<void*> Hashes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Indexes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ModuleShouldSerialize; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNetworkModularVehicleStateNetTokenData, Hashes) == 0, "Offset mismatch for FNetworkModularVehicleStateNetTokenData::Hashes");
static_assert(offsetof(FNetworkModularVehicleStateNetTokenData, Indexes) == 16, "Offset mismatch for FNetworkModularVehicleStateNetTokenData::Indexes");
static_assert(offsetof(FNetworkModularVehicleStateNetTokenData, ModuleShouldSerialize) == 32, "Offset mismatch for FNetworkModularVehicleStateNetTokenData::ModuleShouldSerialize");

// /Script/ChaosModularVehicleEngine.NetworkModularVehicleStates
// Kind: ScriptStruct; super: NetworkPhysicsData
struct FNetworkModularVehicleStates
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t ServerFrame; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNetworkModularVehicleStates, ServerFrame) == 8, "Offset mismatch for FNetworkModularVehicleStates::ServerFrame");

// /Script/ChaosModularVehicleEngine.VehicleComponentData
// Kind: ScriptStruct; super: none
struct FVehicleComponentData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* VisualComponentToAnimate; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVehicleComponentData, VisualComponentToAnimate) == 8, "Offset mismatch for FVehicleComponentData::VisualComponentToAnimate");

// /Script/ChaosModularVehicleEngine.ClusterUnionVehicleComponent
// Kind: Class; super: ClusterUnionComponent
class UClusterUnionVehicleComponent
{
public:
    std::uint8_t Pad_0000[0x6C0]; // 0x0000
    TArray<void*> Sockets; // 0x06C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UClusterUnionVehicleComponent, Sockets) == 1728, "Offset mismatch for UClusterUnionVehicleComponent::Sockets");

// /Script/ChaosModularVehicleEngine.InputModifier_ModularVehicleSmooth
// Kind: Class; super: InputModifier
class UInputModifier_ModularVehicleSmooth
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float RiseRate; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UInputModifier_ModularVehicleSmooth, RiseRate) == 40, "Offset mismatch for UInputModifier_ModularVehicleSmooth::RiseRate");

// /Script/ChaosModularVehicleEngine.ModularVehicleAnimationInstance
// Kind: Class; super: AnimInstance
class UModularVehicleAnimationInstance
{
public:
    std::uint8_t Pad_0000[0x700]; // 0x0000
    void* ModularVehicleComponent; // 0x0700 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UModularVehicleAnimationInstance, ModularVehicleComponent) == 1792, "Offset mismatch for UModularVehicleAnimationInstance::ModularVehicleComponent");

// /Script/ChaosModularVehicleEngine.ModularVehicleAsset
// Kind: Class; super: Object
class UModularVehicleAsset
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosModularVehicleEngine.ModularVehicleBaseComponent
// Kind: Class; super: PawnMovementComponent
class UModularVehicleBaseComponent
{
public:
    std::uint8_t Pad_0000[0x1D0]; // 0x0000
    FMulticastInlineDelegate OnModuleAddedEvent; // 0x01D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnModuleRemovedEvent; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float LinearDamping; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float AngularDamping; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SuspensionTraceCollisionResponses[0x40]; // 0x01F8 (Size: 0x40, Type: StructProperty)
    std::uint8_t SuspensionCollisionChannel; // 0x0238 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bSuspensionTraceComplex; // 0x0239 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TraceType; // 0x023A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bKeepVehicleAwake; // 0x023B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x023C
    void* InputProducerClass; // 0x0240 (Size: 0x8, Type: ClassProperty)
    std::uint8_t InputQuantizationType; // 0x0248 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRequiresControllerForInputs; // 0x0249 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoAddComponentsFromWorld; // 0x024A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x024B
    std::uint8_t AutoAddOverlappingBoxSize[0x18]; // 0x0250 (Size: 0x18, Type: StructProperty)
    std::int32_t DelayClusteringCount; // 0x0268 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x026C
    TMap<void*, void*> ComponentToPhysicsObjects; // 0x0270 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0004[0x18]; // 0x0280
    std::uint8_t ReplicatedState[0x18]; // 0x0298 (Size: 0x18, Type: StructProperty)
    std::int32_t GearInput; // 0x02B0 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentGear; // 0x02B4 (Size: 0x4, Type: IntProperty)
    float EngineRPM; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    float EngineTorque; // 0x02BC (Size: 0x4, Type: FloatProperty)
    void* NetworkPhysicsComponent; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> InputConfig; // 0x02C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StateInputConfiguration; // 0x02D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TreeProcessingOrder; // 0x02E8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x7]; // 0x02E9
    TArray<void*> ConstructionDatas; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0006[0xC8]; // 0x0300
    void* InputProducer; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UModularVehicleBaseComponent, OnModuleAddedEvent) == 464, "Offset mismatch for UModularVehicleBaseComponent::OnModuleAddedEvent");
static_assert(offsetof(UModularVehicleBaseComponent, OnModuleRemovedEvent) == 480, "Offset mismatch for UModularVehicleBaseComponent::OnModuleRemovedEvent");
static_assert(offsetof(UModularVehicleBaseComponent, LinearDamping) == 496, "Offset mismatch for UModularVehicleBaseComponent::LinearDamping");
static_assert(offsetof(UModularVehicleBaseComponent, AngularDamping) == 500, "Offset mismatch for UModularVehicleBaseComponent::AngularDamping");
static_assert(offsetof(UModularVehicleBaseComponent, SuspensionTraceCollisionResponses) == 504, "Offset mismatch for UModularVehicleBaseComponent::SuspensionTraceCollisionResponses");
static_assert(offsetof(UModularVehicleBaseComponent, SuspensionCollisionChannel) == 568, "Offset mismatch for UModularVehicleBaseComponent::SuspensionCollisionChannel");
static_assert(offsetof(UModularVehicleBaseComponent, bSuspensionTraceComplex) == 569, "Offset mismatch for UModularVehicleBaseComponent::bSuspensionTraceComplex");
static_assert(offsetof(UModularVehicleBaseComponent, TraceType) == 570, "Offset mismatch for UModularVehicleBaseComponent::TraceType");
static_assert(offsetof(UModularVehicleBaseComponent, bKeepVehicleAwake) == 571, "Offset mismatch for UModularVehicleBaseComponent::bKeepVehicleAwake");
static_assert(offsetof(UModularVehicleBaseComponent, InputProducerClass) == 576, "Offset mismatch for UModularVehicleBaseComponent::InputProducerClass");
static_assert(offsetof(UModularVehicleBaseComponent, InputQuantizationType) == 584, "Offset mismatch for UModularVehicleBaseComponent::InputQuantizationType");
static_assert(offsetof(UModularVehicleBaseComponent, bRequiresControllerForInputs) == 585, "Offset mismatch for UModularVehicleBaseComponent::bRequiresControllerForInputs");
static_assert(offsetof(UModularVehicleBaseComponent, bAutoAddComponentsFromWorld) == 586, "Offset mismatch for UModularVehicleBaseComponent::bAutoAddComponentsFromWorld");
static_assert(offsetof(UModularVehicleBaseComponent, AutoAddOverlappingBoxSize) == 592, "Offset mismatch for UModularVehicleBaseComponent::AutoAddOverlappingBoxSize");
static_assert(offsetof(UModularVehicleBaseComponent, DelayClusteringCount) == 616, "Offset mismatch for UModularVehicleBaseComponent::DelayClusteringCount");
static_assert(offsetof(UModularVehicleBaseComponent, ComponentToPhysicsObjects) == 624, "Offset mismatch for UModularVehicleBaseComponent::ComponentToPhysicsObjects");
static_assert(offsetof(UModularVehicleBaseComponent, ReplicatedState) == 664, "Offset mismatch for UModularVehicleBaseComponent::ReplicatedState");
static_assert(offsetof(UModularVehicleBaseComponent, GearInput) == 688, "Offset mismatch for UModularVehicleBaseComponent::GearInput");
static_assert(offsetof(UModularVehicleBaseComponent, CurrentGear) == 692, "Offset mismatch for UModularVehicleBaseComponent::CurrentGear");
static_assert(offsetof(UModularVehicleBaseComponent, EngineRPM) == 696, "Offset mismatch for UModularVehicleBaseComponent::EngineRPM");
static_assert(offsetof(UModularVehicleBaseComponent, EngineTorque) == 700, "Offset mismatch for UModularVehicleBaseComponent::EngineTorque");
static_assert(offsetof(UModularVehicleBaseComponent, NetworkPhysicsComponent) == 704, "Offset mismatch for UModularVehicleBaseComponent::NetworkPhysicsComponent");
static_assert(offsetof(UModularVehicleBaseComponent, InputConfig) == 712, "Offset mismatch for UModularVehicleBaseComponent::InputConfig");
static_assert(offsetof(UModularVehicleBaseComponent, StateInputConfiguration) == 728, "Offset mismatch for UModularVehicleBaseComponent::StateInputConfiguration");
static_assert(offsetof(UModularVehicleBaseComponent, TreeProcessingOrder) == 744, "Offset mismatch for UModularVehicleBaseComponent::TreeProcessingOrder");
static_assert(offsetof(UModularVehicleBaseComponent, ConstructionDatas) == 752, "Offset mismatch for UModularVehicleBaseComponent::ConstructionDatas");
static_assert(offsetof(UModularVehicleBaseComponent, InputProducer) == 968, "Offset mismatch for UModularVehicleBaseComponent::InputProducer");

// /Script/ChaosModularVehicleEngine.ModularVehicleClusterActor
// Kind: Class; super: Actor
class UModularVehicleClusterActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ClusterUnionVehicleComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* VehicleSimComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UModularVehicleClusterActor, ClusterUnionVehicleComponent) == 624, "Offset mismatch for UModularVehicleClusterActor::ClusterUnionVehicleComponent");
static_assert(offsetof(UModularVehicleClusterActor, VehicleSimComponent) == 632, "Offset mismatch for UModularVehicleClusterActor::VehicleSimComponent");

// /Script/ChaosModularVehicleEngine.ModularVehicleClusterPawn
// Kind: Class; super: Pawn
class UModularVehicleClusterPawn
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    void* ClusterUnionVehicleComponent; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    void* VehicleSimComponent; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UModularVehicleClusterPawn, ClusterUnionVehicleComponent) == 752, "Offset mismatch for UModularVehicleClusterPawn::ClusterUnionVehicleComponent");
static_assert(offsetof(UModularVehicleClusterPawn, VehicleSimComponent) == 760, "Offset mismatch for UModularVehicleClusterPawn::VehicleSimComponent");

// /Script/ChaosModularVehicleEngine.ModularVehicleSkeletalPawn
// Kind: Class; super: Pawn
class UModularVehicleSkeletalPawn
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    void* SkeletalMeshComponent; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    void* VehicleSimComponent; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UModularVehicleSkeletalPawn, SkeletalMeshComponent) == 752, "Offset mismatch for UModularVehicleSkeletalPawn::SkeletalMeshComponent");
static_assert(offsetof(UModularVehicleSkeletalPawn, VehicleSimComponent) == 760, "Offset mismatch for UModularVehicleSkeletalPawn::VehicleSimComponent");

// /Script/ChaosModularVehicleEngine.SimModuleActor
// Kind: Class; super: Actor
class USimModuleActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* MeshComp; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* SimComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USimModuleActor, MeshComp) == 624, "Offset mismatch for USimModuleActor::MeshComp");
static_assert(offsetof(USimModuleActor, SimComponent) == 632, "Offset mismatch for USimModuleActor::SimComponent");

// /Script/ChaosModularVehicleEngine.VehicleDefaultInputProducer
// Kind: Class; super: VehicleInputProducerBase
class UVehicleDefaultInputProducer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosModularVehicleEngine.VehiclePlaybackInputProducer
// Kind: Class; super: VehicleInputProducerBase
class UVehiclePlaybackInputProducer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosModularVehicleEngine.VehicleRandomInputProducer
// Kind: Class; super: VehicleInputProducerBase
class UVehicleRandomInputProducer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosModularVehicleEngine.VehicleSimAerofoilComponent
// Kind: Class; super: VehicleSimBaseComponent
class UVehicleSimAerofoilComponent
{
public:
    std::uint8_t Pad_0000[0x5C0]; // 0x0000
    std::uint8_t Offset[0x18]; // 0x05C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ForceAxis[0x18]; // 0x05D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ControlRotationAxis[0x18]; // 0x05F0 (Size: 0x18, Type: StructProperty)
    float Area; // 0x0608 (Size: 0x4, Type: FloatProperty)
    float Camber; // 0x060C (Size: 0x4, Type: FloatProperty)
    float MaxControlAngle; // 0x0610 (Size: 0x4, Type: FloatProperty)
    float StallAngle; // 0x0614 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Type; // 0x0618 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0619
    float LiftMultiplier; // 0x061C (Size: 0x4, Type: FloatProperty)
    float DragMultiplier; // 0x0620 (Size: 0x4, Type: FloatProperty)
    float AnimationMagnitudeMultiplier; // 0x0624 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVehicleSimAerofoilComponent, Offset) == 1472, "Offset mismatch for UVehicleSimAerofoilComponent::Offset");
static_assert(offsetof(UVehicleSimAerofoilComponent, ForceAxis) == 1496, "Offset mismatch for UVehicleSimAerofoilComponent::ForceAxis");
static_assert(offsetof(UVehicleSimAerofoilComponent, ControlRotationAxis) == 1520, "Offset mismatch for UVehicleSimAerofoilComponent::ControlRotationAxis");
static_assert(offsetof(UVehicleSimAerofoilComponent, Area) == 1544, "Offset mismatch for UVehicleSimAerofoilComponent::Area");
static_assert(offsetof(UVehicleSimAerofoilComponent, Camber) == 1548, "Offset mismatch for UVehicleSimAerofoilComponent::Camber");
static_assert(offsetof(UVehicleSimAerofoilComponent, MaxControlAngle) == 1552, "Offset mismatch for UVehicleSimAerofoilComponent::MaxControlAngle");
static_assert(offsetof(UVehicleSimAerofoilComponent, StallAngle) == 1556, "Offset mismatch for UVehicleSimAerofoilComponent::StallAngle");
static_assert(offsetof(UVehicleSimAerofoilComponent, Type) == 1560, "Offset mismatch for UVehicleSimAerofoilComponent::Type");
static_assert(offsetof(UVehicleSimAerofoilComponent, LiftMultiplier) == 1564, "Offset mismatch for UVehicleSimAerofoilComponent::LiftMultiplier");
static_assert(offsetof(UVehicleSimAerofoilComponent, DragMultiplier) == 1568, "Offset mismatch for UVehicleSimAerofoilComponent::DragMultiplier");
static_assert(offsetof(UVehicleSimAerofoilComponent, AnimationMagnitudeMultiplier) == 1572, "Offset mismatch for UVehicleSimAerofoilComponent::AnimationMagnitudeMultiplier");

// /Script/ChaosModularVehicleEngine.VehicleSimBaseComponent
// Kind: Class; super: PrimitiveComponent
class UVehicleSimBaseComponent
{
public:
    std::uint8_t Pad_0000[0x578]; // 0x0000
    FName BoneName; // 0x0578 (Size: 0x8, Type: NameProperty)
    std::uint8_t AnimationOffset[0x18]; // 0x0580 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAnimationEnabled; // 0x0598 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0599
    TArray<void*> InputConfig; // 0x05A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleSimBaseComponent, BoneName) == 1400, "Offset mismatch for UVehicleSimBaseComponent::BoneName");
static_assert(offsetof(UVehicleSimBaseComponent, AnimationOffset) == 1408, "Offset mismatch for UVehicleSimBaseComponent::AnimationOffset");
static_assert(offsetof(UVehicleSimBaseComponent, bAnimationEnabled) == 1432, "Offset mismatch for UVehicleSimBaseComponent::bAnimationEnabled");
static_assert(offsetof(UVehicleSimBaseComponent, InputConfig) == 1440, "Offset mismatch for UVehicleSimBaseComponent::InputConfig");

// /Script/ChaosModularVehicleEngine.VehicleSimBaseComponentInterface
// Kind: Class; super: Interface
class UVehicleSimBaseComponentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosModularVehicleEngine.VehicleSimBaseSceneComponent
// Kind: Class; super: SceneComponent
class UVehicleSimBaseSceneComponent
{
public:
    std::uint8_t Pad_0000[0x248]; // 0x0000
    TArray<void*> InputConfig; // 0x0248 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleSimBaseSceneComponent, InputConfig) == 584, "Offset mismatch for UVehicleSimBaseSceneComponent::InputConfig");

// /Script/ChaosModularVehicleEngine.VehicleSimChassisComponent
// Kind: Class; super: VehicleSimBaseComponent
class UVehicleSimChassisComponent
{
public:
    std::uint8_t Pad_0000[0x5C0]; // 0x0000
    float AreaMetresSquared; // 0x05C0 (Size: 0x4, Type: FloatProperty)
    float DragCoefficient; // 0x05C4 (Size: 0x4, Type: FloatProperty)
    float DensityOfMedium; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    float XAxisMultiplier; // 0x05CC (Size: 0x4, Type: FloatProperty)
    float YAxisMultiplier; // 0x05D0 (Size: 0x4, Type: FloatProperty)
    float AngularDamping; // 0x05D4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVehicleSimChassisComponent, AreaMetresSquared) == 1472, "Offset mismatch for UVehicleSimChassisComponent::AreaMetresSquared");
static_assert(offsetof(UVehicleSimChassisComponent, DragCoefficient) == 1476, "Offset mismatch for UVehicleSimChassisComponent::DragCoefficient");
static_assert(offsetof(UVehicleSimChassisComponent, DensityOfMedium) == 1480, "Offset mismatch for UVehicleSimChassisComponent::DensityOfMedium");
static_assert(offsetof(UVehicleSimChassisComponent, XAxisMultiplier) == 1484, "Offset mismatch for UVehicleSimChassisComponent::XAxisMultiplier");
static_assert(offsetof(UVehicleSimChassisComponent, YAxisMultiplier) == 1488, "Offset mismatch for UVehicleSimChassisComponent::YAxisMultiplier");
static_assert(offsetof(UVehicleSimChassisComponent, AngularDamping) == 1492, "Offset mismatch for UVehicleSimChassisComponent::AngularDamping");

// /Script/ChaosModularVehicleEngine.VehicleSimClutchComponent
// Kind: Class; super: VehicleSimBaseComponent
class UVehicleSimClutchComponent
{
public:
    std::uint8_t Pad_0000[0x5C0]; // 0x0000
    float ClutchStrength; // 0x05C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVehicleSimClutchComponent, ClutchStrength) == 1472, "Offset mismatch for UVehicleSimClutchComponent::ClutchStrength");

// /Script/ChaosModularVehicleEngine.VehicleSimEngineComponent
// Kind: Class; super: VehicleSimBaseComponent
class UVehicleSimEngineComponent
{
public:
    std::uint8_t Pad_0000[0x5C0]; // 0x0000
    std::uint8_t TorqueCurve[0x48]; // 0x05C0 (Size: 0x48, Type: StructProperty)
    float MaxTorque; // 0x0608 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxRPM; // 0x060C (Size: 0x4, Type: IntProperty)
    std::int32_t EngineIdleRPM; // 0x0610 (Size: 0x4, Type: IntProperty)
    float EngineBrakeEffect; // 0x0614 (Size: 0x4, Type: FloatProperty)
    float EngineInertia; // 0x0618 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVehicleSimEngineComponent, TorqueCurve) == 1472, "Offset mismatch for UVehicleSimEngineComponent::TorqueCurve");
static_assert(offsetof(UVehicleSimEngineComponent, MaxTorque) == 1544, "Offset mismatch for UVehicleSimEngineComponent::MaxTorque");
static_assert(offsetof(UVehicleSimEngineComponent, MaxRPM) == 1548, "Offset mismatch for UVehicleSimEngineComponent::MaxRPM");
static_assert(offsetof(UVehicleSimEngineComponent, EngineIdleRPM) == 1552, "Offset mismatch for UVehicleSimEngineComponent::EngineIdleRPM");
static_assert(offsetof(UVehicleSimEngineComponent, EngineBrakeEffect) == 1556, "Offset mismatch for UVehicleSimEngineComponent::EngineBrakeEffect");
static_assert(offsetof(UVehicleSimEngineComponent, EngineInertia) == 1560, "Offset mismatch for UVehicleSimEngineComponent::EngineInertia");

// /Script/ChaosModularVehicleEngine.VehicleSimSuspensionComponent
// Kind: Class; super: VehicleSimBaseComponent
class UVehicleSimSuspensionComponent
{
public:
    std::uint8_t Pad_0000[0x5C0]; // 0x0000
    std::uint8_t SuspensionAxis[0x18]; // 0x05C0 (Size: 0x18, Type: StructProperty)
    float SuspensionMaxRaise; // 0x05D8 (Size: 0x4, Type: FloatProperty)
    float SuspensionMaxDrop; // 0x05DC (Size: 0x4, Type: FloatProperty)
    float SpringRate; // 0x05E0 (Size: 0x4, Type: FloatProperty)
    float SpringPreload; // 0x05E4 (Size: 0x4, Type: FloatProperty)
    float SpringDamping; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    float SuspensionForceEffect; // 0x05EC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVehicleSimSuspensionComponent, SuspensionAxis) == 1472, "Offset mismatch for UVehicleSimSuspensionComponent::SuspensionAxis");
static_assert(offsetof(UVehicleSimSuspensionComponent, SuspensionMaxRaise) == 1496, "Offset mismatch for UVehicleSimSuspensionComponent::SuspensionMaxRaise");
static_assert(offsetof(UVehicleSimSuspensionComponent, SuspensionMaxDrop) == 1500, "Offset mismatch for UVehicleSimSuspensionComponent::SuspensionMaxDrop");
static_assert(offsetof(UVehicleSimSuspensionComponent, SpringRate) == 1504, "Offset mismatch for UVehicleSimSuspensionComponent::SpringRate");
static_assert(offsetof(UVehicleSimSuspensionComponent, SpringPreload) == 1508, "Offset mismatch for UVehicleSimSuspensionComponent::SpringPreload");
static_assert(offsetof(UVehicleSimSuspensionComponent, SpringDamping) == 1512, "Offset mismatch for UVehicleSimSuspensionComponent::SpringDamping");
static_assert(offsetof(UVehicleSimSuspensionComponent, SuspensionForceEffect) == 1516, "Offset mismatch for UVehicleSimSuspensionComponent::SuspensionForceEffect");

// /Script/ChaosModularVehicleEngine.VehicleSimThrusterComponent
// Kind: Class; super: VehicleSimBaseComponent
class UVehicleSimThrusterComponent
{
public:
    std::uint8_t Pad_0000[0x5C0]; // 0x0000
    float MaxThrustForce; // 0x05C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x05C4
    std::uint8_t ForceAxis[0x18]; // 0x05C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ForceOffset[0x18]; // 0x05E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSteeringEnabled; // 0x05F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x05F9
    std::uint8_t SteeringAxis[0x18]; // 0x0600 (Size: 0x18, Type: StructProperty)
    float MaxSteeringAngle; // 0x0618 (Size: 0x4, Type: FloatProperty)
    float SteeringForceEffect; // 0x061C (Size: 0x4, Type: FloatProperty)
    float BoostMultiplierEffect; // 0x0620 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVehicleSimThrusterComponent, MaxThrustForce) == 1472, "Offset mismatch for UVehicleSimThrusterComponent::MaxThrustForce");
static_assert(offsetof(UVehicleSimThrusterComponent, ForceAxis) == 1480, "Offset mismatch for UVehicleSimThrusterComponent::ForceAxis");
static_assert(offsetof(UVehicleSimThrusterComponent, ForceOffset) == 1504, "Offset mismatch for UVehicleSimThrusterComponent::ForceOffset");
static_assert(offsetof(UVehicleSimThrusterComponent, bSteeringEnabled) == 1528, "Offset mismatch for UVehicleSimThrusterComponent::bSteeringEnabled");
static_assert(offsetof(UVehicleSimThrusterComponent, SteeringAxis) == 1536, "Offset mismatch for UVehicleSimThrusterComponent::SteeringAxis");
static_assert(offsetof(UVehicleSimThrusterComponent, MaxSteeringAngle) == 1560, "Offset mismatch for UVehicleSimThrusterComponent::MaxSteeringAngle");
static_assert(offsetof(UVehicleSimThrusterComponent, SteeringForceEffect) == 1564, "Offset mismatch for UVehicleSimThrusterComponent::SteeringForceEffect");
static_assert(offsetof(UVehicleSimThrusterComponent, BoostMultiplierEffect) == 1568, "Offset mismatch for UVehicleSimThrusterComponent::BoostMultiplierEffect");

// /Script/ChaosModularVehicleEngine.VehicleSimTransmissionComponent
// Kind: Class; super: VehicleSimBaseComponent
class UVehicleSimTransmissionComponent
{
public:
    std::uint8_t Pad_0000[0x5D8]; // 0x0000
    FMulticastInlineDelegate OnGearChangeEvent; // 0x05D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> ForwardRatios; // 0x05E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReverseRatios; // 0x05F8 (Size: 0x10, Type: ArrayProperty)
    float FinalDriveRatio; // 0x0608 (Size: 0x4, Type: FloatProperty)
    std::int32_t ChangeUpRPM; // 0x060C (Size: 0x4, Type: IntProperty)
    std::int32_t ChangeDownRPM; // 0x0610 (Size: 0x4, Type: IntProperty)
    float GearChangeTime; // 0x0614 (Size: 0x4, Type: FloatProperty)
    float GearHysteresisTime; // 0x0618 (Size: 0x4, Type: FloatProperty)
    float TransmissionEfficiency; // 0x061C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TransmissionType; // 0x0620 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReverse; // 0x0621 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVehicleSimTransmissionComponent, OnGearChangeEvent) == 1496, "Offset mismatch for UVehicleSimTransmissionComponent::OnGearChangeEvent");
static_assert(offsetof(UVehicleSimTransmissionComponent, ForwardRatios) == 1512, "Offset mismatch for UVehicleSimTransmissionComponent::ForwardRatios");
static_assert(offsetof(UVehicleSimTransmissionComponent, ReverseRatios) == 1528, "Offset mismatch for UVehicleSimTransmissionComponent::ReverseRatios");
static_assert(offsetof(UVehicleSimTransmissionComponent, FinalDriveRatio) == 1544, "Offset mismatch for UVehicleSimTransmissionComponent::FinalDriveRatio");
static_assert(offsetof(UVehicleSimTransmissionComponent, ChangeUpRPM) == 1548, "Offset mismatch for UVehicleSimTransmissionComponent::ChangeUpRPM");
static_assert(offsetof(UVehicleSimTransmissionComponent, ChangeDownRPM) == 1552, "Offset mismatch for UVehicleSimTransmissionComponent::ChangeDownRPM");
static_assert(offsetof(UVehicleSimTransmissionComponent, GearChangeTime) == 1556, "Offset mismatch for UVehicleSimTransmissionComponent::GearChangeTime");
static_assert(offsetof(UVehicleSimTransmissionComponent, GearHysteresisTime) == 1560, "Offset mismatch for UVehicleSimTransmissionComponent::GearHysteresisTime");
static_assert(offsetof(UVehicleSimTransmissionComponent, TransmissionEfficiency) == 1564, "Offset mismatch for UVehicleSimTransmissionComponent::TransmissionEfficiency");
static_assert(offsetof(UVehicleSimTransmissionComponent, TransmissionType) == 1568, "Offset mismatch for UVehicleSimTransmissionComponent::TransmissionType");
static_assert(offsetof(UVehicleSimTransmissionComponent, AutoReverse) == 1569, "Offset mismatch for UVehicleSimTransmissionComponent::AutoReverse");

// /Script/ChaosModularVehicleEngine.VehicleSimWheelComponent
// Kind: Class; super: VehicleSimBaseComponent
class UVehicleSimWheelComponent
{
public:
    std::uint8_t Pad_0000[0x5D8]; // 0x0000
    FMulticastInlineDelegate OnWheelTouchChangeEvent; // 0x05D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float WheelRadius; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    float WheelWidth; // 0x05EC (Size: 0x4, Type: FloatProperty)
    float WheelInertia; // 0x05F0 (Size: 0x4, Type: FloatProperty)
    float FrictionMultiplier; // 0x05F4 (Size: 0x4, Type: FloatProperty)
    float CorneringStiffness; // 0x05F8 (Size: 0x4, Type: FloatProperty)
    float SlipAngleLimit; // 0x05FC (Size: 0x4, Type: FloatProperty)
    float MaxBrakeTorque; // 0x0600 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHandbrakeEnabled; // 0x0604 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0605
    float HandbrakeTorque; // 0x0608 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSteeringEnabled; // 0x060C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x060D
    float MaxSteeringAngle; // 0x0610 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bABSEnabled; // 0x0614 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTractionControlEnabled; // 0x0615 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AxisType; // 0x0616 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0617
    std::uint8_t ForceOffset[0x18]; // 0x0618 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReverseDirection; // 0x0630 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVehicleSimWheelComponent, OnWheelTouchChangeEvent) == 1496, "Offset mismatch for UVehicleSimWheelComponent::OnWheelTouchChangeEvent");
static_assert(offsetof(UVehicleSimWheelComponent, WheelRadius) == 1512, "Offset mismatch for UVehicleSimWheelComponent::WheelRadius");
static_assert(offsetof(UVehicleSimWheelComponent, WheelWidth) == 1516, "Offset mismatch for UVehicleSimWheelComponent::WheelWidth");
static_assert(offsetof(UVehicleSimWheelComponent, WheelInertia) == 1520, "Offset mismatch for UVehicleSimWheelComponent::WheelInertia");
static_assert(offsetof(UVehicleSimWheelComponent, FrictionMultiplier) == 1524, "Offset mismatch for UVehicleSimWheelComponent::FrictionMultiplier");
static_assert(offsetof(UVehicleSimWheelComponent, CorneringStiffness) == 1528, "Offset mismatch for UVehicleSimWheelComponent::CorneringStiffness");
static_assert(offsetof(UVehicleSimWheelComponent, SlipAngleLimit) == 1532, "Offset mismatch for UVehicleSimWheelComponent::SlipAngleLimit");
static_assert(offsetof(UVehicleSimWheelComponent, MaxBrakeTorque) == 1536, "Offset mismatch for UVehicleSimWheelComponent::MaxBrakeTorque");
static_assert(offsetof(UVehicleSimWheelComponent, bHandbrakeEnabled) == 1540, "Offset mismatch for UVehicleSimWheelComponent::bHandbrakeEnabled");
static_assert(offsetof(UVehicleSimWheelComponent, HandbrakeTorque) == 1544, "Offset mismatch for UVehicleSimWheelComponent::HandbrakeTorque");
static_assert(offsetof(UVehicleSimWheelComponent, bSteeringEnabled) == 1548, "Offset mismatch for UVehicleSimWheelComponent::bSteeringEnabled");
static_assert(offsetof(UVehicleSimWheelComponent, MaxSteeringAngle) == 1552, "Offset mismatch for UVehicleSimWheelComponent::MaxSteeringAngle");
static_assert(offsetof(UVehicleSimWheelComponent, bABSEnabled) == 1556, "Offset mismatch for UVehicleSimWheelComponent::bABSEnabled");
static_assert(offsetof(UVehicleSimWheelComponent, bTractionControlEnabled) == 1557, "Offset mismatch for UVehicleSimWheelComponent::bTractionControlEnabled");
static_assert(offsetof(UVehicleSimWheelComponent, AxisType) == 1558, "Offset mismatch for UVehicleSimWheelComponent::AxisType");
static_assert(offsetof(UVehicleSimWheelComponent, ForceOffset) == 1560, "Offset mismatch for UVehicleSimWheelComponent::ForceOffset");
static_assert(offsetof(UVehicleSimWheelComponent, ReverseDirection) == 1584, "Offset mismatch for UVehicleSimWheelComponent::ReverseDirection");
