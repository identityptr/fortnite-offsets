/**
 * decamp dumper generated SDK
 * Package: /Script/VehicleComponent
 */
#pragma once
#include "Basic.h"

// /Script/VehicleComponent.ModularVehicleGraphComponent
// Kind: Class; super: ModularVehicleBaseComponent
class UModularVehicleGraphComponent
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

static_assert(offsetof(UModularVehicleGraphComponent, OnModuleAddedEvent) == 464, "Offset mismatch for UModularVehicleGraphComponent::OnModuleAddedEvent");
static_assert(offsetof(UModularVehicleGraphComponent, OnModuleRemovedEvent) == 480, "Offset mismatch for UModularVehicleGraphComponent::OnModuleRemovedEvent");
static_assert(offsetof(UModularVehicleGraphComponent, LinearDamping) == 496, "Offset mismatch for UModularVehicleGraphComponent::LinearDamping");
static_assert(offsetof(UModularVehicleGraphComponent, AngularDamping) == 500, "Offset mismatch for UModularVehicleGraphComponent::AngularDamping");
static_assert(offsetof(UModularVehicleGraphComponent, SuspensionTraceCollisionResponses) == 504, "Offset mismatch for UModularVehicleGraphComponent::SuspensionTraceCollisionResponses");
static_assert(offsetof(UModularVehicleGraphComponent, SuspensionCollisionChannel) == 568, "Offset mismatch for UModularVehicleGraphComponent::SuspensionCollisionChannel");
static_assert(offsetof(UModularVehicleGraphComponent, bSuspensionTraceComplex) == 569, "Offset mismatch for UModularVehicleGraphComponent::bSuspensionTraceComplex");
static_assert(offsetof(UModularVehicleGraphComponent, TraceType) == 570, "Offset mismatch for UModularVehicleGraphComponent::TraceType");
static_assert(offsetof(UModularVehicleGraphComponent, bKeepVehicleAwake) == 571, "Offset mismatch for UModularVehicleGraphComponent::bKeepVehicleAwake");
static_assert(offsetof(UModularVehicleGraphComponent, InputProducerClass) == 576, "Offset mismatch for UModularVehicleGraphComponent::InputProducerClass");
static_assert(offsetof(UModularVehicleGraphComponent, InputQuantizationType) == 584, "Offset mismatch for UModularVehicleGraphComponent::InputQuantizationType");
static_assert(offsetof(UModularVehicleGraphComponent, bRequiresControllerForInputs) == 585, "Offset mismatch for UModularVehicleGraphComponent::bRequiresControllerForInputs");
static_assert(offsetof(UModularVehicleGraphComponent, bAutoAddComponentsFromWorld) == 586, "Offset mismatch for UModularVehicleGraphComponent::bAutoAddComponentsFromWorld");
static_assert(offsetof(UModularVehicleGraphComponent, AutoAddOverlappingBoxSize) == 592, "Offset mismatch for UModularVehicleGraphComponent::AutoAddOverlappingBoxSize");
static_assert(offsetof(UModularVehicleGraphComponent, DelayClusteringCount) == 616, "Offset mismatch for UModularVehicleGraphComponent::DelayClusteringCount");
static_assert(offsetof(UModularVehicleGraphComponent, ComponentToPhysicsObjects) == 624, "Offset mismatch for UModularVehicleGraphComponent::ComponentToPhysicsObjects");
static_assert(offsetof(UModularVehicleGraphComponent, ReplicatedState) == 664, "Offset mismatch for UModularVehicleGraphComponent::ReplicatedState");
static_assert(offsetof(UModularVehicleGraphComponent, GearInput) == 688, "Offset mismatch for UModularVehicleGraphComponent::GearInput");
static_assert(offsetof(UModularVehicleGraphComponent, CurrentGear) == 692, "Offset mismatch for UModularVehicleGraphComponent::CurrentGear");
static_assert(offsetof(UModularVehicleGraphComponent, EngineRPM) == 696, "Offset mismatch for UModularVehicleGraphComponent::EngineRPM");
static_assert(offsetof(UModularVehicleGraphComponent, EngineTorque) == 700, "Offset mismatch for UModularVehicleGraphComponent::EngineTorque");
static_assert(offsetof(UModularVehicleGraphComponent, NetworkPhysicsComponent) == 704, "Offset mismatch for UModularVehicleGraphComponent::NetworkPhysicsComponent");
static_assert(offsetof(UModularVehicleGraphComponent, InputConfig) == 712, "Offset mismatch for UModularVehicleGraphComponent::InputConfig");
static_assert(offsetof(UModularVehicleGraphComponent, StateInputConfiguration) == 728, "Offset mismatch for UModularVehicleGraphComponent::StateInputConfiguration");
static_assert(offsetof(UModularVehicleGraphComponent, TreeProcessingOrder) == 744, "Offset mismatch for UModularVehicleGraphComponent::TreeProcessingOrder");
static_assert(offsetof(UModularVehicleGraphComponent, ConstructionDatas) == 752, "Offset mismatch for UModularVehicleGraphComponent::ConstructionDatas");
static_assert(offsetof(UModularVehicleGraphComponent, InputProducer) == 968, "Offset mismatch for UModularVehicleGraphComponent::InputProducer");

// /Script/VehicleComponent.ModularVehicleSceneGraphPawn
// Kind: Class; super: Pawn
class UModularVehicleSceneGraphPawn
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    void* EntityPtr; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    void* EntityOwnerPtr; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    void* StaticMeshComponent; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* VehicleSimComponent; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UModularVehicleSceneGraphPawn, EntityPtr) == 752, "Offset mismatch for UModularVehicleSceneGraphPawn::EntityPtr");
static_assert(offsetof(UModularVehicleSceneGraphPawn, EntityOwnerPtr) == 760, "Offset mismatch for UModularVehicleSceneGraphPawn::EntityOwnerPtr");
static_assert(offsetof(UModularVehicleSceneGraphPawn, StaticMeshComponent) == 768, "Offset mismatch for UModularVehicleSceneGraphPawn::StaticMeshComponent");
static_assert(offsetof(UModularVehicleSceneGraphPawn, VehicleSimComponent) == 776, "Offset mismatch for UModularVehicleSceneGraphPawn::VehicleSimComponent");
