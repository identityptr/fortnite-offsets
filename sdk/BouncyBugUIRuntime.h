/**
 * decamp dumper generated SDK
 * Package: /Script/BouncyBugUIRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BouncyBugUIRuntime.FortGameplayAbility_BouncyBugBouncingMovement
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_BouncyBugBouncingMovement
{
public:
    std::uint8_t Pad_0000[0xB40]; // 0x0000
    std::uint8_t PrimaryActionName[0x4]; // 0x0B40 (Size: 0x4, Type: NameProperty)
    std::uint8_t UseActionNameKBM[0x4]; // 0x0B44 (Size: 0x4, Type: NameProperty)
    FName UseActionNameGamepad; // 0x0B48 (Size: 0x8, Type: NameProperty)
    std::uint8_t BounceText[0x10]; // 0x0B50 (Size: 0x10, Type: TextProperty)
    std::uint8_t DiveBounceText[0x10]; // 0x0B60 (Size: 0x10, Type: TextProperty)
    std::uint8_t RevUpText[0x10]; // 0x0B70 (Size: 0x10, Type: TextProperty)
    FText ExitText; // 0x0B80 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortGameplayAbility_BouncyBugBouncingMovement, PrimaryActionName) == 2880, "Offset mismatch for UFortGameplayAbility_BouncyBugBouncingMovement::PrimaryActionName");
static_assert(offsetof(UFortGameplayAbility_BouncyBugBouncingMovement, UseActionNameKBM) == 2884, "Offset mismatch for UFortGameplayAbility_BouncyBugBouncingMovement::UseActionNameKBM");
static_assert(offsetof(UFortGameplayAbility_BouncyBugBouncingMovement, UseActionNameGamepad) == 2888, "Offset mismatch for UFortGameplayAbility_BouncyBugBouncingMovement::UseActionNameGamepad");
static_assert(offsetof(UFortGameplayAbility_BouncyBugBouncingMovement, BounceText) == 2896, "Offset mismatch for UFortGameplayAbility_BouncyBugBouncingMovement::BounceText");
static_assert(offsetof(UFortGameplayAbility_BouncyBugBouncingMovement, DiveBounceText) == 2912, "Offset mismatch for UFortGameplayAbility_BouncyBugBouncingMovement::DiveBounceText");
static_assert(offsetof(UFortGameplayAbility_BouncyBugBouncingMovement, RevUpText) == 2928, "Offset mismatch for UFortGameplayAbility_BouncyBugBouncingMovement::RevUpText");
static_assert(offsetof(UFortGameplayAbility_BouncyBugBouncingMovement, ExitText) == 2944, "Offset mismatch for UFortGameplayAbility_BouncyBugBouncingMovement::ExitText");
