/**
 * decamp dumper generated SDK
 * Package: /Script/JunoRidableRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoRidableRuntime.JunoRidableBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoRidableBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoRidableRuntime.JunoRidableCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoRidableCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CreatureRidableComponentClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t GenericRiderAbilitySet[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t StartRidingEventTag[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t GenericAbilitySetHandle[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoRidableCheatManager, CreatureRidableComponentClass) == 40, "Offset mismatch for UJunoRidableCheatManager::CreatureRidableComponentClass");
static_assert(offsetof(UJunoRidableCheatManager, GenericRiderAbilitySet) == 72, "Offset mismatch for UJunoRidableCheatManager::GenericRiderAbilitySet");
static_assert(offsetof(UJunoRidableCheatManager, StartRidingEventTag) == 104, "Offset mismatch for UJunoRidableCheatManager::StartRidingEventTag");
static_assert(offsetof(UJunoRidableCheatManager, GenericAbilitySetHandle) == 112, "Offset mismatch for UJunoRidableCheatManager::GenericAbilitySetHandle");
