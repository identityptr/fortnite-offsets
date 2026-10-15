/**
 * decamp dumper generated SDK
 * Package: /Script/DualWieldingRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DualWieldingRuntime.FortGameplayAbility_ReloadPrimary
// Kind: Class; super: FortGameplayAbility_Reload
class UFortGameplayAbility_ReloadPrimary
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::int32_t NumTimesReloaded; // 0x0B20 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortGameplayAbility_ReloadPrimary, NumTimesReloaded) == 2848, "Offset mismatch for UFortGameplayAbility_ReloadPrimary::NumTimesReloaded");

// /Script/DualWieldingRuntime.FortGameplayAbility_ReloadSecondary
// Kind: Class; super: FortGameplayAbility_Reload
class UFortGameplayAbility_ReloadSecondary
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::int32_t NumTimesReloaded; // 0x0B20 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortGameplayAbility_ReloadSecondary, NumTimesReloaded) == 2848, "Offset mismatch for UFortGameplayAbility_ReloadSecondary::NumTimesReloaded");

// /Script/DualWieldingRuntime.FortWeaponRanged_DualWieldable
// Kind: Class; super: FortWeaponRanged
class UFortWeaponRanged_DualWieldable
{
public:
    std::uint8_t Pad_0000[0x2968]; // 0x0000
    void* SecondaryFireAnimation; // 0x2968 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryReloadAnimation; // 0x2970 (Size: 0x8, Type: ObjectProperty)
    void* BothPairedReloadAnimation; // 0x2978 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryWeaponFireMontage; // 0x2980 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryWeaponReloadMontage; // 0x2988 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DualWieldRole; // 0x2990 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCombineWeaponFunctionality; // 0x2991 (Size: 0x1, Type: BoolProperty)
    // 0x2991 BoolProperty bCombinedSecondaryFiresWithPrimary (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x2992
    std::uint8_t bAllowDeferredSecondaryFireInputForPrimaryWeapon; // 0x2994 (Size: 0x1, Type: BoolProperty)
    // 0x2994 BoolProperty bAlternateWeaponFiring (shared storage)
    // 0x2994 BoolProperty bSecondaryUsesPrimaryAmmo (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x2995
    TWeakObjectPtr<void> PairedWeapon; // 0x2998 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortWeaponRanged_DualWieldable, SecondaryFireAnimation) == 10600, "Offset mismatch for UFortWeaponRanged_DualWieldable::SecondaryFireAnimation");
static_assert(offsetof(UFortWeaponRanged_DualWieldable, SecondaryReloadAnimation) == 10608, "Offset mismatch for UFortWeaponRanged_DualWieldable::SecondaryReloadAnimation");
static_assert(offsetof(UFortWeaponRanged_DualWieldable, BothPairedReloadAnimation) == 10616, "Offset mismatch for UFortWeaponRanged_DualWieldable::BothPairedReloadAnimation");
static_assert(offsetof(UFortWeaponRanged_DualWieldable, SecondaryWeaponFireMontage) == 10624, "Offset mismatch for UFortWeaponRanged_DualWieldable::SecondaryWeaponFireMontage");
static_assert(offsetof(UFortWeaponRanged_DualWieldable, SecondaryWeaponReloadMontage) == 10632, "Offset mismatch for UFortWeaponRanged_DualWieldable::SecondaryWeaponReloadMontage");
static_assert(offsetof(UFortWeaponRanged_DualWieldable, DualWieldRole) == 10640, "Offset mismatch for UFortWeaponRanged_DualWieldable::DualWieldRole");
static_assert(offsetof(UFortWeaponRanged_DualWieldable, bCombineWeaponFunctionality) == 10641, "Offset mismatch for UFortWeaponRanged_DualWieldable::bCombineWeaponFunctionality");
static_assert(offsetof(UFortWeaponRanged_DualWieldable, bAllowDeferredSecondaryFireInputForPrimaryWeapon) == 10644, "Offset mismatch for UFortWeaponRanged_DualWieldable::bAllowDeferredSecondaryFireInputForPrimaryWeapon");
static_assert(offsetof(UFortWeaponRanged_DualWieldable, PairedWeapon) == 10648, "Offset mismatch for UFortWeaponRanged_DualWieldable::PairedWeapon");
