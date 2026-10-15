/**
 * decamp dumper generated SDK
 * Package: /Script/WmfMediaFactory
 */
#pragma once
#include "Basic.h"

// /Script/WmfMediaFactory.WmfMediaSettings
// Kind: Class; super: Object
class UWmfMediaSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AllowNonStandardCodecs; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LowLatency; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NativeAudioOut; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t HardwareAcceleratedVideoDecoding; // 0x002B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWmfMediaSettings, AllowNonStandardCodecs) == 40, "Offset mismatch for UWmfMediaSettings::AllowNonStandardCodecs");
static_assert(offsetof(UWmfMediaSettings, LowLatency) == 41, "Offset mismatch for UWmfMediaSettings::LowLatency");
static_assert(offsetof(UWmfMediaSettings, NativeAudioOut) == 42, "Offset mismatch for UWmfMediaSettings::NativeAudioOut");
static_assert(offsetof(UWmfMediaSettings, HardwareAcceleratedVideoDecoding) == 43, "Offset mismatch for UWmfMediaSettings::HardwareAcceleratedVideoDecoding");
