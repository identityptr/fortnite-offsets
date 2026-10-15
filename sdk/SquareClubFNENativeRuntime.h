/**
 * decamp dumper generated SDK
 * Package: /Script/SquareClubFNENativeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SquareClubFNENativeRuntime.AbilityPayload_Targets
// Kind: Class; super: Object
class UAbilityPayload_Targets
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Targets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAbilityPayload_Targets, Targets) == 40, "Offset mismatch for UAbilityPayload_Targets::Targets");
