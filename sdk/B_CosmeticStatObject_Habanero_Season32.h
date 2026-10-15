/**
 * decamp dumper generated SDK
 * Package: /RankedCosmeticStats/CosmeticStatObjects/B_CosmeticStatObject_Habanero_Season32
 */
#pragma once
#include "Basic.h"

// /RankedCosmeticStats/CosmeticStatObjects/B_CosmeticStatObject_Habanero_Season32.B_CosmeticStatObject_Habanero_Season32_C
// Kind: BlueprintGeneratedClass; super: FortCosmeticStatObject_HabaneroProgressionModular
class UB_CosmeticStatObject_Habanero_Season32_C
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t TrackFilter[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t ProgressCalculator[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t StatManagerTag[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UB_CosmeticStatObject_Habanero_Season32_C, TrackFilter) == 120, "Offset mismatch for UB_CosmeticStatObject_Habanero_Season32_C::TrackFilter");
static_assert(offsetof(UB_CosmeticStatObject_Habanero_Season32_C, ProgressCalculator) == 136, "Offset mismatch for UB_CosmeticStatObject_Habanero_Season32_C::ProgressCalculator");
static_assert(offsetof(UB_CosmeticStatObject_Habanero_Season32_C, StatManagerTag) == 152, "Offset mismatch for UB_CosmeticStatObject_Habanero_Season32_C::StatManagerTag");
