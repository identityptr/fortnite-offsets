/**
 * decamp dumper generated SDK
 * Package: /Script/FirePetalWeaponGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FirePetalWeaponGameplayRuntime.FlavorFirePetalSMGAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class UFlavorFirePetalSMGAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    double CurrentRotation; // 0x0360 (Size: 0x8, Type: DoubleProperty)
    double ScaleDupeMag; // 0x0368 (Size: 0x8, Type: DoubleProperty)
    double ScaleMag; // 0x0370 (Size: 0x8, Type: DoubleProperty)
    double RotationAmount; // 0x0378 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t CurrentRotator[0x18]; // 0x0380 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsCrouchWalking; // 0x0398 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFlavorFirePetalSMGAnimInstance, CurrentRotation) == 864, "Offset mismatch for UFlavorFirePetalSMGAnimInstance::CurrentRotation");
static_assert(offsetof(UFlavorFirePetalSMGAnimInstance, ScaleDupeMag) == 872, "Offset mismatch for UFlavorFirePetalSMGAnimInstance::ScaleDupeMag");
static_assert(offsetof(UFlavorFirePetalSMGAnimInstance, ScaleMag) == 880, "Offset mismatch for UFlavorFirePetalSMGAnimInstance::ScaleMag");
static_assert(offsetof(UFlavorFirePetalSMGAnimInstance, RotationAmount) == 888, "Offset mismatch for UFlavorFirePetalSMGAnimInstance::RotationAmount");
static_assert(offsetof(UFlavorFirePetalSMGAnimInstance, CurrentRotator) == 896, "Offset mismatch for UFlavorFirePetalSMGAnimInstance::CurrentRotator");
static_assert(offsetof(UFlavorFirePetalSMGAnimInstance, bIsCrouchWalking) == 920, "Offset mismatch for UFlavorFirePetalSMGAnimInstance::bIsCrouchWalking");
