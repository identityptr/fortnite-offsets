/**
 * decamp dumper generated SDK
 * Package: /Script/TeaCakeWeaponsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TeaCakeWeaponsRuntime.FoundationDMRMythicLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFoundationDMRMythicLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bOnChargeEnd; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnChargeStart; // 0x1171 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFoundationDMRMythicLayerAnimInstance, bOnChargeEnd) == 4464, "Offset mismatch for UFoundationDMRMythicLayerAnimInstance::bOnChargeEnd");
static_assert(offsetof(UFoundationDMRMythicLayerAnimInstance, bOnChargeStart) == 4465, "Offset mismatch for UFoundationDMRMythicLayerAnimInstance::bOnChargeStart");

// /Script/TeaCakeWeaponsRuntime.FoundationDMRMythicWPNAnimInstance
// Kind: Class; super: AnimInstance
class UFoundationDMRMythicWPNAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bOnChargeEnd; // 0x0260 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnChargeStart; // 0x0261 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFoundationDMRMythicWPNAnimInstance, bOnChargeEnd) == 608, "Offset mismatch for UFoundationDMRMythicWPNAnimInstance::bOnChargeEnd");
static_assert(offsetof(UFoundationDMRMythicWPNAnimInstance, bOnChargeStart) == 609, "Offset mismatch for UFoundationDMRMythicWPNAnimInstance::bOnChargeStart");

// /Script/TeaCakeWeaponsRuntime.FoundationDMRMythicWeaponInterface
// Kind: Class; super: Interface
class UFoundationDMRMythicWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TeaCakeWeaponsRuntime.HeavyPistolWPNAnimInstance
// Kind: Class; super: FortAnimInstance
class UHeavyPistolWPNAnimInstance
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    double CurrentRotation; // 0x0450 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsReloading; // 0x0458 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0459
    double ReloadInterpSpeed; // 0x0460 (Size: 0x8, Type: DoubleProperty)
    double RotationIncrement; // 0x0468 (Size: 0x8, Type: DoubleProperty)
    double FireInterpSpeed; // 0x0470 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UHeavyPistolWPNAnimInstance, CurrentRotation) == 1104, "Offset mismatch for UHeavyPistolWPNAnimInstance::CurrentRotation");
static_assert(offsetof(UHeavyPistolWPNAnimInstance, bIsReloading) == 1112, "Offset mismatch for UHeavyPistolWPNAnimInstance::bIsReloading");
static_assert(offsetof(UHeavyPistolWPNAnimInstance, ReloadInterpSpeed) == 1120, "Offset mismatch for UHeavyPistolWPNAnimInstance::ReloadInterpSpeed");
static_assert(offsetof(UHeavyPistolWPNAnimInstance, RotationIncrement) == 1128, "Offset mismatch for UHeavyPistolWPNAnimInstance::RotationIncrement");
static_assert(offsetof(UHeavyPistolWPNAnimInstance, FireInterpSpeed) == 1136, "Offset mismatch for UHeavyPistolWPNAnimInstance::FireInterpSpeed");
