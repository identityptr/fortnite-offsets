/**
 * decamp dumper generated SDK
 * Package: /Script/SquareClubNativeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SquareClubNativeRuntime.SquareClubAbilitiesData
// Kind: Class; super: PrimaryDataAsset
class USquareClubAbilitiesData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Abilities; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USquareClubAbilitiesData, Abilities) == 40, "Offset mismatch for USquareClubAbilitiesData::Abilities");
