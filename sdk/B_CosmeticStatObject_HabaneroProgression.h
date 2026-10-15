/**
 * decamp dumper generated SDK
 * Package: /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression
 */
#pragma once
#include "Basic.h"

// /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression.B_CosmeticStatObject_HabaneroProgression_C
// Kind: BlueprintGeneratedClass; super: FortCosmeticStatObject_HabaneroProgression
class UB_CosmeticStatObject_HabaneroProgression_C
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t TrackDateType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0079
    TArray<void*> AllowedHabaneroTypes; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ProgressionType; // 0x0098 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UB_CosmeticStatObject_HabaneroProgression_C, TrackDateType) == 120, "Offset mismatch for UB_CosmeticStatObject_HabaneroProgression_C::TrackDateType");
static_assert(offsetof(UB_CosmeticStatObject_HabaneroProgression_C, AllowedHabaneroTypes) == 136, "Offset mismatch for UB_CosmeticStatObject_HabaneroProgression_C::AllowedHabaneroTypes");
static_assert(offsetof(UB_CosmeticStatObject_HabaneroProgression_C, ProgressionType) == 152, "Offset mismatch for UB_CosmeticStatObject_HabaneroProgression_C::ProgressionType");
