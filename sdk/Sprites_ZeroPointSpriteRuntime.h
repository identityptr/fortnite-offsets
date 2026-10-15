/**
 * decamp dumper generated SDK
 * Package: /Script/Sprites_ZeroPointSpriteRuntime
 */
#pragma once
#include "Basic.h"

// /Script/Sprites_ZeroPointSpriteRuntime.ZeroPointSpriteAttributeSet
// Kind: Class; super: FortAttributeSet
class UZeroPointSpriteAttributeSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t CurrentCharges[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UZeroPointSpriteAttributeSet, CurrentCharges) == 72, "Offset mismatch for UZeroPointSpriteAttributeSet::CurrentCharges");
