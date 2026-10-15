/**
 * decamp dumper generated SDK
 * Package: /Script/SpeedOverTimeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpeedOverTimeRuntime.HacksSprintBoostOvertimeLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UHacksSprintBoostOvertimeLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float PitchTransformAlpha; // 0x1170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1174
    double VelocityPitch; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TopSpeedOvertimeTacSprint[0x10]; // 0x1180 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpeedOvertimeTacSprint[0x10]; // 0x1190 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxSpeedTag[0x8]; // 0x11A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t CurrentUpVec[0x1]; // 0x11A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UHacksSprintBoostOvertimeLayerAnimInstance, PitchTransformAlpha) == 4464, "Offset mismatch for UHacksSprintBoostOvertimeLayerAnimInstance::PitchTransformAlpha");
static_assert(offsetof(UHacksSprintBoostOvertimeLayerAnimInstance, VelocityPitch) == 4472, "Offset mismatch for UHacksSprintBoostOvertimeLayerAnimInstance::VelocityPitch");
static_assert(offsetof(UHacksSprintBoostOvertimeLayerAnimInstance, TopSpeedOvertimeTacSprint) == 4480, "Offset mismatch for UHacksSprintBoostOvertimeLayerAnimInstance::TopSpeedOvertimeTacSprint");
static_assert(offsetof(UHacksSprintBoostOvertimeLayerAnimInstance, SpeedOvertimeTacSprint) == 4496, "Offset mismatch for UHacksSprintBoostOvertimeLayerAnimInstance::SpeedOvertimeTacSprint");
static_assert(offsetof(UHacksSprintBoostOvertimeLayerAnimInstance, MaxSpeedTag) == 4512, "Offset mismatch for UHacksSprintBoostOvertimeLayerAnimInstance::MaxSpeedTag");
static_assert(offsetof(UHacksSprintBoostOvertimeLayerAnimInstance, CurrentUpVec) == 4520, "Offset mismatch for UHacksSprintBoostOvertimeLayerAnimInstance::CurrentUpVec");
