/**
 * decamp dumper generated SDK
 * Package: /Script/ThermalLanceGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ThermalLanceGameplayRuntime.LaserCutterWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class ULaserCutterWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t Spinner_RampDownCurve[0x48]; // 0x0360 (Size: 0x48, Type: StructProperty)
    std::uint8_t Spinner_RampUpCurve[0x48]; // 0x03A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t GaugeNeedleRotation[0x18]; // 0x03F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpinnerRotation[0x18]; // 0x0408 (Size: 0x18, Type: StructProperty)
    double MinNeedleRotationAngle; // 0x0420 (Size: 0x8, Type: DoubleProperty)
    double MaxNeedleRotationAngle; // 0x0428 (Size: 0x8, Type: DoubleProperty)
    double SpinnerMaxSpeed; // 0x0430 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsFiring; // 0x0438 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoPulse; // 0x0439 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULaserCutterWeaponAnimInstance, Spinner_RampDownCurve) == 864, "Offset mismatch for ULaserCutterWeaponAnimInstance::Spinner_RampDownCurve");
static_assert(offsetof(ULaserCutterWeaponAnimInstance, Spinner_RampUpCurve) == 936, "Offset mismatch for ULaserCutterWeaponAnimInstance::Spinner_RampUpCurve");
static_assert(offsetof(ULaserCutterWeaponAnimInstance, GaugeNeedleRotation) == 1008, "Offset mismatch for ULaserCutterWeaponAnimInstance::GaugeNeedleRotation");
static_assert(offsetof(ULaserCutterWeaponAnimInstance, SpinnerRotation) == 1032, "Offset mismatch for ULaserCutterWeaponAnimInstance::SpinnerRotation");
static_assert(offsetof(ULaserCutterWeaponAnimInstance, MinNeedleRotationAngle) == 1056, "Offset mismatch for ULaserCutterWeaponAnimInstance::MinNeedleRotationAngle");
static_assert(offsetof(ULaserCutterWeaponAnimInstance, MaxNeedleRotationAngle) == 1064, "Offset mismatch for ULaserCutterWeaponAnimInstance::MaxNeedleRotationAngle");
static_assert(offsetof(ULaserCutterWeaponAnimInstance, SpinnerMaxSpeed) == 1072, "Offset mismatch for ULaserCutterWeaponAnimInstance::SpinnerMaxSpeed");
static_assert(offsetof(ULaserCutterWeaponAnimInstance, bIsFiring) == 1080, "Offset mismatch for ULaserCutterWeaponAnimInstance::bIsFiring");
static_assert(offsetof(ULaserCutterWeaponAnimInstance, bDoPulse) == 1081, "Offset mismatch for ULaserCutterWeaponAnimInstance::bDoPulse");

// /Script/ThermalLanceGameplayRuntime.LaserCutterWeaponInterface
// Kind: Class; super: Interface
class ULaserCutterWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ThermalLanceGameplayRuntime.ThermalLanceLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UThermalLanceLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t PullbackPose_Curve[0x48]; // 0x1170 (Size: 0x48, Type: StructProperty)
    std::uint8_t OverheatShake_Curve[0x48]; // 0x11B8 (Size: 0x48, Type: StructProperty)
    std::uint8_t bIsFiring; // 0x1200 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoPulse; // 0x1201 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x1202
    float AdditiveAlpha; // 0x1204 (Size: 0x4, Type: FloatProperty)
    float OverheatShake_Alpha; // 0x1208 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UThermalLanceLayerAnimInstance, PullbackPose_Curve) == 4464, "Offset mismatch for UThermalLanceLayerAnimInstance::PullbackPose_Curve");
static_assert(offsetof(UThermalLanceLayerAnimInstance, OverheatShake_Curve) == 4536, "Offset mismatch for UThermalLanceLayerAnimInstance::OverheatShake_Curve");
static_assert(offsetof(UThermalLanceLayerAnimInstance, bIsFiring) == 4608, "Offset mismatch for UThermalLanceLayerAnimInstance::bIsFiring");
static_assert(offsetof(UThermalLanceLayerAnimInstance, bDoPulse) == 4609, "Offset mismatch for UThermalLanceLayerAnimInstance::bDoPulse");
static_assert(offsetof(UThermalLanceLayerAnimInstance, AdditiveAlpha) == 4612, "Offset mismatch for UThermalLanceLayerAnimInstance::AdditiveAlpha");
static_assert(offsetof(UThermalLanceLayerAnimInstance, OverheatShake_Alpha) == 4616, "Offset mismatch for UThermalLanceLayerAnimInstance::OverheatShake_Alpha");
