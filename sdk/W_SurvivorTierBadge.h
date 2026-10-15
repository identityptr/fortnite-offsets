/**
 * decamp dumper generated SDK
 * Package: /Game/UI/SurvivorTiers/W_SurvivorTierBadge
 */
#pragma once
#include "Basic.h"

// /Game/UI/SurvivorTiers/W_SurvivorTierBadge.W_SurvivorTierBadge_C
// Kind: WidgetBlueprintGeneratedClass; super: FortAthenaSurvivorTierBadge
class UW_SurvivorTierBadge_C
{
public:
    std::uint8_t Pad_0000[0x318]; // 0x0000
    std::uint8_t UberGraphFrame[0x18]; // 0x0318 (Size: 0x18, Type: StructProperty)
    void* LazyImage_Icon; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0338
    void* WhooshSound; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0368
    std::uint8_t SmallFont[0x58]; // 0x0370 (Size: 0x58, Type: StructProperty)
    std::uint8_t LargeFont[0x1]; // 0x03C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UW_SurvivorTierBadge_C, UberGraphFrame) == 792, "Offset mismatch for UW_SurvivorTierBadge_C::UberGraphFrame");
static_assert(offsetof(UW_SurvivorTierBadge_C, LazyImage_Icon) == 816, "Offset mismatch for UW_SurvivorTierBadge_C::LazyImage_Icon");
static_assert(offsetof(UW_SurvivorTierBadge_C, WhooshSound) == 864, "Offset mismatch for UW_SurvivorTierBadge_C::WhooshSound");
static_assert(offsetof(UW_SurvivorTierBadge_C, SmallFont) == 880, "Offset mismatch for UW_SurvivorTierBadge_C::SmallFont");
static_assert(offsetof(UW_SurvivorTierBadge_C, LargeFont) == 968, "Offset mismatch for UW_SurvivorTierBadge_C::LargeFont");
