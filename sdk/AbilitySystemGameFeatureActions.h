/**
 * decamp dumper generated SDK
 * Package: /Script/AbilitySystemGameFeatureActions
 */
#pragma once
#include "Basic.h"

// /Script/AbilitySystemGameFeatureActions.GameFeatureAction_AddAttributeDefaults
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddAttributeDefaults
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bApplyOnRegister; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> AttribDefaultTableNames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_AddAttributeDefaults, bApplyOnRegister) == 40, "Offset mismatch for UGameFeatureAction_AddAttributeDefaults::bApplyOnRegister");
static_assert(offsetof(UGameFeatureAction_AddAttributeDefaults, AttribDefaultTableNames) == 48, "Offset mismatch for UGameFeatureAction_AddAttributeDefaults::AttribDefaultTableNames");
