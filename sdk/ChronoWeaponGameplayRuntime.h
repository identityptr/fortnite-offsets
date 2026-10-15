/**
 * decamp dumper generated SDK
 * Package: /Script/ChronoWeaponGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ChronoWeaponGameplayRuntime.AnimInstance_ChronoPanRifle
// Kind: Class; super: AnimInstance
class UAnimInstance_ChronoPanRifle
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bIsFiring; // 0x0260 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReloading; // 0x0261 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0262
    float MagRotationValue; // 0x0264 (Size: 0x4, Type: FloatProperty)
    FName ResetMagRotationCurveName; // 0x0268 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UAnimInstance_ChronoPanRifle, bIsFiring) == 608, "Offset mismatch for UAnimInstance_ChronoPanRifle::bIsFiring");
static_assert(offsetof(UAnimInstance_ChronoPanRifle, bIsReloading) == 609, "Offset mismatch for UAnimInstance_ChronoPanRifle::bIsReloading");
static_assert(offsetof(UAnimInstance_ChronoPanRifle, MagRotationValue) == 612, "Offset mismatch for UAnimInstance_ChronoPanRifle::MagRotationValue");
static_assert(offsetof(UAnimInstance_ChronoPanRifle, ResetMagRotationCurveName) == 616, "Offset mismatch for UAnimInstance_ChronoPanRifle::ResetMagRotationCurveName");
