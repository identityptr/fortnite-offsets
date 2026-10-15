/**
 * decamp dumper generated SDK
 * Package: /Script/WildEstateConsumablesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WildEstateConsumablesRuntime.BrickSailConsumableWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class UBrickSailConsumableWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    float OffsetAlpha; // 0x0360 (Size: 0x4, Type: FloatProperty)
    float Y_Offset; // 0x0364 (Size: 0x4, Type: FloatProperty)
    float TailAlpha; // 0x0368 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBrickSailConsumableWeaponAnimInstance, OffsetAlpha) == 864, "Offset mismatch for UBrickSailConsumableWeaponAnimInstance::OffsetAlpha");
static_assert(offsetof(UBrickSailConsumableWeaponAnimInstance, Y_Offset) == 868, "Offset mismatch for UBrickSailConsumableWeaponAnimInstance::Y_Offset");
static_assert(offsetof(UBrickSailConsumableWeaponAnimInstance, TailAlpha) == 872, "Offset mismatch for UBrickSailConsumableWeaponAnimInstance::TailAlpha");

// /Script/WildEstateConsumablesRuntime.DillHailLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UDillHailLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float PelvisTwist; // 0x1170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1174
    double NW_Run_Alpha; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    float NotSkydiving; // 0x1180 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDillHailLayerAnimInstance, PelvisTwist) == 4464, "Offset mismatch for UDillHailLayerAnimInstance::PelvisTwist");
static_assert(offsetof(UDillHailLayerAnimInstance, NW_Run_Alpha) == 4472, "Offset mismatch for UDillHailLayerAnimInstance::NW_Run_Alpha");
static_assert(offsetof(UDillHailLayerAnimInstance, NotSkydiving) == 4480, "Offset mismatch for UDillHailLayerAnimInstance::NotSkydiving");

// /Script/WildEstateConsumablesRuntime.SteelKiteLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class USteelKiteLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    double NW_Run_Alpha; // 0x1170 (Size: 0x8, Type: DoubleProperty)
    double PeelyOffsetTwistCrouchMoving; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    double PeelyOffsetCrouchMoving; // 0x1180 (Size: 0x8, Type: DoubleProperty)
    double PeelyOffsetPelvisRoll; // 0x1188 (Size: 0x8, Type: DoubleProperty)
    double PeelyOffsetTransY; // 0x1190 (Size: 0x8, Type: DoubleProperty)
    float PeelyOffset; // 0x1198 (Size: 0x4, Type: FloatProperty)
    float PelvisTwist; // 0x119C (Size: 0x4, Type: FloatProperty)
    float PeelyOffsetTwist; // 0x11A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsCrouchMovingNotSliding; // 0x11A4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USteelKiteLayerAnimInstance, NW_Run_Alpha) == 4464, "Offset mismatch for USteelKiteLayerAnimInstance::NW_Run_Alpha");
static_assert(offsetof(USteelKiteLayerAnimInstance, PeelyOffsetTwistCrouchMoving) == 4472, "Offset mismatch for USteelKiteLayerAnimInstance::PeelyOffsetTwistCrouchMoving");
static_assert(offsetof(USteelKiteLayerAnimInstance, PeelyOffsetCrouchMoving) == 4480, "Offset mismatch for USteelKiteLayerAnimInstance::PeelyOffsetCrouchMoving");
static_assert(offsetof(USteelKiteLayerAnimInstance, PeelyOffsetPelvisRoll) == 4488, "Offset mismatch for USteelKiteLayerAnimInstance::PeelyOffsetPelvisRoll");
static_assert(offsetof(USteelKiteLayerAnimInstance, PeelyOffsetTransY) == 4496, "Offset mismatch for USteelKiteLayerAnimInstance::PeelyOffsetTransY");
static_assert(offsetof(USteelKiteLayerAnimInstance, PeelyOffset) == 4504, "Offset mismatch for USteelKiteLayerAnimInstance::PeelyOffset");
static_assert(offsetof(USteelKiteLayerAnimInstance, PelvisTwist) == 4508, "Offset mismatch for USteelKiteLayerAnimInstance::PelvisTwist");
static_assert(offsetof(USteelKiteLayerAnimInstance, PeelyOffsetTwist) == 4512, "Offset mismatch for USteelKiteLayerAnimInstance::PeelyOffsetTwist");
static_assert(offsetof(USteelKiteLayerAnimInstance, bIsCrouchMovingNotSliding) == 4516, "Offset mismatch for USteelKiteLayerAnimInstance::bIsCrouchMovingNotSliding");
