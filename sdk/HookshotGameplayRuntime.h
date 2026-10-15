/**
 * decamp dumper generated SDK
 * Package: /Script/HookshotGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HookshotGameplayRuntime.FortCheatManager_Hookshot
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_Hookshot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HookShotGameplayEffectClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t HookShooterAISpawnerData[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    FName HookshotTypeName; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortCheatManager_Hookshot, HookShotGameplayEffectClass) == 40, "Offset mismatch for UFortCheatManager_Hookshot::HookShotGameplayEffectClass");
static_assert(offsetof(UFortCheatManager_Hookshot, HookShooterAISpawnerData) == 72, "Offset mismatch for UFortCheatManager_Hookshot::HookShooterAISpawnerData");
static_assert(offsetof(UFortCheatManager_Hookshot, HookshotTypeName) == 104, "Offset mismatch for UFortCheatManager_Hookshot::HookshotTypeName");
