/**
 * decamp dumper generated SDK
 * Package: /Script/AvfMediaFactory
 */
#pragma once
#include "Basic.h"

// /Script/AvfMediaFactory.AvfMediaSettings
// Kind: Class; super: Object
class UAvfMediaSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NativeAudioOut; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAvfMediaSettings, NativeAudioOut) == 40, "Offset mismatch for UAvfMediaSettings::NativeAudioOut");
