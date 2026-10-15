/**
 * decamp dumper generated SDK
 * Package: /Script/TidalCraneWeaponGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TidalCraneWeaponGameplayRuntime.RevolverTidalCraneWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class URevolverTidalCraneWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    float RotationXRoll; // 0x0360 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0364
    double InterpSpeed; // 0x0368 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(URevolverTidalCraneWeaponAnimInstance, RotationXRoll) == 864, "Offset mismatch for URevolverTidalCraneWeaponAnimInstance::RotationXRoll");
static_assert(offsetof(URevolverTidalCraneWeaponAnimInstance, InterpSpeed) == 872, "Offset mismatch for URevolverTidalCraneWeaponAnimInstance::InterpSpeed");
