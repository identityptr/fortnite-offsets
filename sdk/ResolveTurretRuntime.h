/**
 * decamp dumper generated SDK
 * Package: /Script/ResolveTurretRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFortPlayerAnimInstance_AntiVehMountedTurret
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t HandAttachL[0x18]; // 0x1170 (Size: 0x18, Type: StructProperty)
    std::uint8_t HandAttachR[0x18]; // 0x1188 (Size: 0x18, Type: StructProperty)
    std::uint8_t HandAttachBoneNameL[0x4]; // 0x11A0 (Size: 0x4, Type: NameProperty)
    FName HandAttachBoneNameR; // 0x11A4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortPlayerAnimInstance_AntiVehMountedTurret, HandAttachL) == 4464, "Offset mismatch for UFortPlayerAnimInstance_AntiVehMountedTurret::HandAttachL");
static_assert(offsetof(UFortPlayerAnimInstance_AntiVehMountedTurret, HandAttachR) == 4488, "Offset mismatch for UFortPlayerAnimInstance_AntiVehMountedTurret::HandAttachR");
static_assert(offsetof(UFortPlayerAnimInstance_AntiVehMountedTurret, HandAttachBoneNameL) == 4512, "Offset mismatch for UFortPlayerAnimInstance_AntiVehMountedTurret::HandAttachBoneNameL");
static_assert(offsetof(UFortPlayerAnimInstance_AntiVehMountedTurret, HandAttachBoneNameR) == 4516, "Offset mismatch for UFortPlayerAnimInstance_AntiVehMountedTurret::HandAttachBoneNameR");

// /Script/ResolveTurretRuntime.FortVehicleAnimInstance_AntiVehMountedTurret
// Kind: Class; super: FortMountedTurretAnimInstance
class UFortVehicleAnimInstance_AntiVehMountedTurret
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    float YawDeltaSmoothed; // 0x0520 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortVehicleAnimInstance_AntiVehMountedTurret, YawDeltaSmoothed) == 1312, "Offset mismatch for UFortVehicleAnimInstance_AntiVehMountedTurret::YawDeltaSmoothed");

// /Script/ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret
// Kind: Class; super: FortMountedTurretAnimInstance
class UFortVehicleAnimInstance_SevenMountedTurret
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    float YawDeltaSmoothed; // 0x0520 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortVehicleAnimInstance_SevenMountedTurret, YawDeltaSmoothed) == 1312, "Offset mismatch for UFortVehicleAnimInstance_SevenMountedTurret::YawDeltaSmoothed");
