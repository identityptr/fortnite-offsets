/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteDynamicXpTypes
 */
#pragma once
#include "Basic.h"

// /Script/FortniteDynamicXpTypes.RestedXpUsage
// Kind: ScriptStruct; super: none
struct FRestedXpUsage
{
public:
    std::uint8_t RestedXpUsage; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t FixedRestedXpAmount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRestedXpUsage, RestedXpUsage) == 0, "Offset mismatch for FRestedXpUsage::RestedXpUsage");
static_assert(offsetof(FRestedXpUsage, FixedRestedXpAmount) == 4, "Offset mismatch for FRestedXpUsage::FixedRestedXpAmount");
