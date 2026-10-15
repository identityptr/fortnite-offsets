/**
 * decamp dumper generated SDK
 * Package: /Script/AttachableWheelsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AttachableWheelsRuntime.AttachableWheelAttachData
// Kind: ScriptStruct; super: none
struct FAttachableWheelAttachData
{
public:
    TWeakObjectPtr<void> PrimitiveComponent; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pos[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Axis1[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Axis2[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    float Damping; // 0x0050 (Size: 0x4, Type: FloatProperty)
    FName AttachmentName; // 0x0054 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAttachableWheelAttachData, PrimitiveComponent) == 0, "Offset mismatch for FAttachableWheelAttachData::PrimitiveComponent");
static_assert(offsetof(FAttachableWheelAttachData, Pos) == 8, "Offset mismatch for FAttachableWheelAttachData::Pos");
static_assert(offsetof(FAttachableWheelAttachData, Axis1) == 32, "Offset mismatch for FAttachableWheelAttachData::Axis1");
static_assert(offsetof(FAttachableWheelAttachData, Axis2) == 56, "Offset mismatch for FAttachableWheelAttachData::Axis2");
static_assert(offsetof(FAttachableWheelAttachData, Damping) == 80, "Offset mismatch for FAttachableWheelAttachData::Damping");
static_assert(offsetof(FAttachableWheelAttachData, AttachmentName) == 84, "Offset mismatch for FAttachableWheelAttachData::AttachmentName");

// /Script/AttachableWheelsRuntime.AttachableWheelRuntimeData
// Kind: ScriptStruct; super: none
struct FAttachableWheelRuntimeData
{
public:
    float Torque; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Velocity; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SteerAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAttachableWheelRuntimeData, Torque) == 0, "Offset mismatch for FAttachableWheelRuntimeData::Torque");
static_assert(offsetof(FAttachableWheelRuntimeData, Velocity) == 4, "Offset mismatch for FAttachableWheelRuntimeData::Velocity");
static_assert(offsetof(FAttachableWheelRuntimeData, SteerAngle) == 8, "Offset mismatch for FAttachableWheelRuntimeData::SteerAngle");

// /Script/AttachableWheelsRuntime.AttachableWheel
// Kind: Class; super: Actor
class UAttachableWheel
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* WheelMeshComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WheelOrientation[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    float WheelDistance; // 0x0290 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0294
    void* AxleConstraint; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AttachData[0x58]; // 0x02A0 (Size: 0x58, Type: StructProperty)
    std::uint8_t bAutoCreateAttachableWheelsComponent; // 0x02F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableWheelWheelCollision; // 0x02F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateRuntimeData; // 0x02FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x02FB
    std::uint8_t RuntimeData[0x1]; // 0x02FC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAttachableWheel, WheelMeshComponent) == 624, "Offset mismatch for UAttachableWheel::WheelMeshComponent");
static_assert(offsetof(UAttachableWheel, WheelOrientation) == 632, "Offset mismatch for UAttachableWheel::WheelOrientation");
static_assert(offsetof(UAttachableWheel, WheelDistance) == 656, "Offset mismatch for UAttachableWheel::WheelDistance");
static_assert(offsetof(UAttachableWheel, AxleConstraint) == 664, "Offset mismatch for UAttachableWheel::AxleConstraint");
static_assert(offsetof(UAttachableWheel, AttachData) == 672, "Offset mismatch for UAttachableWheel::AttachData");
static_assert(offsetof(UAttachableWheel, bAutoCreateAttachableWheelsComponent) == 760, "Offset mismatch for UAttachableWheel::bAutoCreateAttachableWheelsComponent");
static_assert(offsetof(UAttachableWheel, bEnableWheelWheelCollision) == 761, "Offset mismatch for UAttachableWheel::bEnableWheelWheelCollision");
static_assert(offsetof(UAttachableWheel, bReplicateRuntimeData) == 762, "Offset mismatch for UAttachableWheel::bReplicateRuntimeData");
static_assert(offsetof(UAttachableWheel, RuntimeData) == 764, "Offset mismatch for UAttachableWheel::RuntimeData");

// /Script/AttachableWheelsRuntime.AttachableWheelsComponent
// Kind: Class; super: ActorComponent
class UAttachableWheelsComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t AttachedWheels[0x10]; // 0x00C8 (Size: 0x10, Type: SetProperty)
    float MaxChassisMassFraction; // 0x00D8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAttachableWheelsComponent, AttachedWheels) == 200, "Offset mismatch for UAttachableWheelsComponent::AttachedWheels");
static_assert(offsetof(UAttachableWheelsComponent, MaxChassisMassFraction) == 216, "Offset mismatch for UAttachableWheelsComponent::MaxChassisMassFraction");
