/**
 * decamp dumper generated SDK
 * Package: /Script/SunRoseEnvGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SunRoseEnvGameplayRuntime.FortChargingSet_SunroseDash
// Kind: Class; super: FortAttributeSet
class UFortChargingSet_SunroseDash
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t CurrentCharges[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortChargingSet_SunroseDash, CurrentCharges) == 72, "Offset mismatch for UFortChargingSet_SunroseDash::CurrentCharges");
