/**
 * decamp dumper generated SDK
 * Package: /Script/TidalCraneHoagieRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TidalCraneHoagieRuntime.TidalCraneHoagieVehicleAnimInstance
// Kind: Class; super: FortHoagieVehicleAnimInstance
class UTidalCraneHoagieVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x6F0]; // 0x0000
    std::uint8_t RotDelta[0x18]; // 0x06F0 (Size: 0x18, Type: StructProperty)
    double YawLeftAlpha; // 0x0708 (Size: 0x8, Type: DoubleProperty)
    double YawRightAlpha; // 0x0710 (Size: 0x8, Type: DoubleProperty)
    double ThrustNoiseAlpha; // 0x0718 (Size: 0x8, Type: DoubleProperty)
    double AdjustNoiseAlpha; // 0x0720 (Size: 0x8, Type: DoubleProperty)
    double SpeedTotal; // 0x0728 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UTidalCraneHoagieVehicleAnimInstance, RotDelta) == 1776, "Offset mismatch for UTidalCraneHoagieVehicleAnimInstance::RotDelta");
static_assert(offsetof(UTidalCraneHoagieVehicleAnimInstance, YawLeftAlpha) == 1800, "Offset mismatch for UTidalCraneHoagieVehicleAnimInstance::YawLeftAlpha");
static_assert(offsetof(UTidalCraneHoagieVehicleAnimInstance, YawRightAlpha) == 1808, "Offset mismatch for UTidalCraneHoagieVehicleAnimInstance::YawRightAlpha");
static_assert(offsetof(UTidalCraneHoagieVehicleAnimInstance, ThrustNoiseAlpha) == 1816, "Offset mismatch for UTidalCraneHoagieVehicleAnimInstance::ThrustNoiseAlpha");
static_assert(offsetof(UTidalCraneHoagieVehicleAnimInstance, AdjustNoiseAlpha) == 1824, "Offset mismatch for UTidalCraneHoagieVehicleAnimInstance::AdjustNoiseAlpha");
static_assert(offsetof(UTidalCraneHoagieVehicleAnimInstance, SpeedTotal) == 1832, "Offset mismatch for UTidalCraneHoagieVehicleAnimInstance::SpeedTotal");
