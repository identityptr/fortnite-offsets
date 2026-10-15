/**
 * decamp dumper generated SDK
 * Package: /Script/JunoWheelsDemoRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoWheelsDemoRuntime.JunoWheelActor
// Kind: Class; super: AttachableWheel
class UJunoWheelActor
{
public:
    std::uint8_t Pad_0000[0x3E8]; // 0x0000
    void* HealthSet; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* AbilitySystemComponent; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x03F8
    std::uint8_t WheelGuid[0x18]; // 0x0410 (Size: 0x18, Type: StructProperty)
    void* AssociatedItem; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocalAttachData[0x58]; // 0x0430 (Size: 0x58, Type: StructProperty)
    std::int32_t CurveTableIndexToWheelPresets; // 0x0488 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x048C
    std::uint8_t ControlChannelTags_Steering_Left[0x20]; // 0x0490 (Size: 0x20, Type: StructProperty)
    std::uint8_t ControlChannelTags_Steering_Right[0x20]; // 0x04B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ControlChannelTags_Velocity_Forwards[0x20]; // 0x04D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ControlChannelTags_Velocity_Backwards[0x20]; // 0x04F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ControlChannelTags_Brake[0x20]; // 0x0510 (Size: 0x20, Type: StructProperty)
    std::uint8_t MaxSteerAngle_Curve[0x10]; // 0x0530 (Size: 0x10, Type: StructProperty)
    float MaxSteerAngle; // 0x0540 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0544
    std::uint8_t MaxAccelerationTorque_Curve[0x10]; // 0x0548 (Size: 0x10, Type: StructProperty)
    float MaxAccelerationTorque; // 0x0558 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x055C
    std::uint8_t MaxBrakeTorque_Curve[0x10]; // 0x0560 (Size: 0x10, Type: StructProperty)
    float MaxBrakeTorque; // 0x0570 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0574
    std::uint8_t MaxAngularVelocity_Curve[0x10]; // 0x0578 (Size: 0x10, Type: StructProperty)
    float MaxAngularVelocity; // 0x0588 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bControlChannelInvert_Steering; // 0x058C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bControlChannelInvert_Velocity; // 0x058D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x2]; // 0x058E
    std::uint8_t SteeringMatchRate_Curve[0x10]; // 0x0590 (Size: 0x10, Type: StructProperty)
    float SteeringMatchRate; // 0x05A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x4]; // 0x05A4
    std::uint8_t VelocityMatchRate_Curve[0x10]; // 0x05A8 (Size: 0x10, Type: StructProperty)
    float VelocityMatchRate; // 0x05B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x4]; // 0x05BC
    std::uint8_t BrakeMatchRate_Curve[0x10]; // 0x05C0 (Size: 0x10, Type: StructProperty)
    float BrakeMatchRate; // 0x05D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0009[0x4]; // 0x05D4
    std::uint8_t AngularVelocityBrakeThreshold_Curve[0x10]; // 0x05D8 (Size: 0x10, Type: StructProperty)
    float AngularVelocityBrakeThreshold; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000A[0x4]; // 0x05EC
    void* TEMP_HotfixableWheelMaterial; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000B[0x8]; // 0x05F8
    void* ControlChannelComponent; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* PowerConsumerComponent; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* ActorRef; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000C[0x10]; // 0x0618
    std::uint8_t DefaultTags[0x20]; // 0x0628 (Size: 0x20, Type: StructProperty)
    std::uint8_t bShowSecondInteractPrompt; // 0x0648 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoWheelActor, HealthSet) == 1000, "Offset mismatch for UJunoWheelActor::HealthSet");
static_assert(offsetof(UJunoWheelActor, AbilitySystemComponent) == 1008, "Offset mismatch for UJunoWheelActor::AbilitySystemComponent");
static_assert(offsetof(UJunoWheelActor, WheelGuid) == 1040, "Offset mismatch for UJunoWheelActor::WheelGuid");
static_assert(offsetof(UJunoWheelActor, AssociatedItem) == 1064, "Offset mismatch for UJunoWheelActor::AssociatedItem");
static_assert(offsetof(UJunoWheelActor, LocalAttachData) == 1072, "Offset mismatch for UJunoWheelActor::LocalAttachData");
static_assert(offsetof(UJunoWheelActor, CurveTableIndexToWheelPresets) == 1160, "Offset mismatch for UJunoWheelActor::CurveTableIndexToWheelPresets");
static_assert(offsetof(UJunoWheelActor, ControlChannelTags_Steering_Left) == 1168, "Offset mismatch for UJunoWheelActor::ControlChannelTags_Steering_Left");
static_assert(offsetof(UJunoWheelActor, ControlChannelTags_Steering_Right) == 1200, "Offset mismatch for UJunoWheelActor::ControlChannelTags_Steering_Right");
static_assert(offsetof(UJunoWheelActor, ControlChannelTags_Velocity_Forwards) == 1232, "Offset mismatch for UJunoWheelActor::ControlChannelTags_Velocity_Forwards");
static_assert(offsetof(UJunoWheelActor, ControlChannelTags_Velocity_Backwards) == 1264, "Offset mismatch for UJunoWheelActor::ControlChannelTags_Velocity_Backwards");
static_assert(offsetof(UJunoWheelActor, ControlChannelTags_Brake) == 1296, "Offset mismatch for UJunoWheelActor::ControlChannelTags_Brake");
static_assert(offsetof(UJunoWheelActor, MaxSteerAngle_Curve) == 1328, "Offset mismatch for UJunoWheelActor::MaxSteerAngle_Curve");
static_assert(offsetof(UJunoWheelActor, MaxSteerAngle) == 1344, "Offset mismatch for UJunoWheelActor::MaxSteerAngle");
static_assert(offsetof(UJunoWheelActor, MaxAccelerationTorque_Curve) == 1352, "Offset mismatch for UJunoWheelActor::MaxAccelerationTorque_Curve");
static_assert(offsetof(UJunoWheelActor, MaxAccelerationTorque) == 1368, "Offset mismatch for UJunoWheelActor::MaxAccelerationTorque");
static_assert(offsetof(UJunoWheelActor, MaxBrakeTorque_Curve) == 1376, "Offset mismatch for UJunoWheelActor::MaxBrakeTorque_Curve");
static_assert(offsetof(UJunoWheelActor, MaxBrakeTorque) == 1392, "Offset mismatch for UJunoWheelActor::MaxBrakeTorque");
static_assert(offsetof(UJunoWheelActor, MaxAngularVelocity_Curve) == 1400, "Offset mismatch for UJunoWheelActor::MaxAngularVelocity_Curve");
static_assert(offsetof(UJunoWheelActor, MaxAngularVelocity) == 1416, "Offset mismatch for UJunoWheelActor::MaxAngularVelocity");
static_assert(offsetof(UJunoWheelActor, bControlChannelInvert_Steering) == 1420, "Offset mismatch for UJunoWheelActor::bControlChannelInvert_Steering");
static_assert(offsetof(UJunoWheelActor, bControlChannelInvert_Velocity) == 1421, "Offset mismatch for UJunoWheelActor::bControlChannelInvert_Velocity");
static_assert(offsetof(UJunoWheelActor, SteeringMatchRate_Curve) == 1424, "Offset mismatch for UJunoWheelActor::SteeringMatchRate_Curve");
static_assert(offsetof(UJunoWheelActor, SteeringMatchRate) == 1440, "Offset mismatch for UJunoWheelActor::SteeringMatchRate");
static_assert(offsetof(UJunoWheelActor, VelocityMatchRate_Curve) == 1448, "Offset mismatch for UJunoWheelActor::VelocityMatchRate_Curve");
static_assert(offsetof(UJunoWheelActor, VelocityMatchRate) == 1464, "Offset mismatch for UJunoWheelActor::VelocityMatchRate");
static_assert(offsetof(UJunoWheelActor, BrakeMatchRate_Curve) == 1472, "Offset mismatch for UJunoWheelActor::BrakeMatchRate_Curve");
static_assert(offsetof(UJunoWheelActor, BrakeMatchRate) == 1488, "Offset mismatch for UJunoWheelActor::BrakeMatchRate");
static_assert(offsetof(UJunoWheelActor, AngularVelocityBrakeThreshold_Curve) == 1496, "Offset mismatch for UJunoWheelActor::AngularVelocityBrakeThreshold_Curve");
static_assert(offsetof(UJunoWheelActor, AngularVelocityBrakeThreshold) == 1512, "Offset mismatch for UJunoWheelActor::AngularVelocityBrakeThreshold");
static_assert(offsetof(UJunoWheelActor, TEMP_HotfixableWheelMaterial) == 1520, "Offset mismatch for UJunoWheelActor::TEMP_HotfixableWheelMaterial");
static_assert(offsetof(UJunoWheelActor, ControlChannelComponent) == 1536, "Offset mismatch for UJunoWheelActor::ControlChannelComponent");
static_assert(offsetof(UJunoWheelActor, PowerConsumerComponent) == 1544, "Offset mismatch for UJunoWheelActor::PowerConsumerComponent");
static_assert(offsetof(UJunoWheelActor, ActorRef) == 1552, "Offset mismatch for UJunoWheelActor::ActorRef");
static_assert(offsetof(UJunoWheelActor, DefaultTags) == 1576, "Offset mismatch for UJunoWheelActor::DefaultTags");
static_assert(offsetof(UJunoWheelActor, bShowSecondInteractPrompt) == 1608, "Offset mismatch for UJunoWheelActor::bShowSecondInteractPrompt");

// /Script/JunoWheelsDemoRuntime.JunoWheelSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UJunoWheelSubsystem
{
public:
    std::uint8_t Opaque[1];
};
