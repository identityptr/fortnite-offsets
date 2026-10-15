/**
 * decamp dumper generated SDK
 * Package: /Script/SoundFields
 */
#pragma once
#include "Basic.h"

// /Script/SoundFields.AmbisonicsEncodingSettings
// Kind: Class; super: SoundfieldEncodingSettingsBase
class UAmbisonicsEncodingSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t AmbisonicsOrder; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UAmbisonicsEncodingSettings, AmbisonicsOrder) == 40, "Offset mismatch for UAmbisonicsEncodingSettings::AmbisonicsOrder");
