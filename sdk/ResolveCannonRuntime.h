/**
 * decamp dumper generated SDK
 * Package: /Script/ResolveCannonRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ResolveCannonRuntime.FortVehicleAnimInstance_MountedCannon
// Kind: Class; super: FortMountedTurretAnimInstance
class UFortVehicleAnimInstance_MountedCannon
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    float AimingYawLastFrame; // 0x0520 (Size: 0x4, Type: FloatProperty)
    float MinTimeStepForInterpolatingTurnRate; // 0x0524 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortVehicleAnimInstance_MountedCannon, AimingYawLastFrame) == 1312, "Offset mismatch for UFortVehicleAnimInstance_MountedCannon::AimingYawLastFrame");
static_assert(offsetof(UFortVehicleAnimInstance_MountedCannon, MinTimeStepForInterpolatingTurnRate) == 1316, "Offset mismatch for UFortVehicleAnimInstance_MountedCannon::MinTimeStepForInterpolatingTurnRate");
