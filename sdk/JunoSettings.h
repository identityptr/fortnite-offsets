/**
 * decamp dumper generated SDK
 * Package: /Script/JunoSettings
 */
#pragma once
#include "Basic.h"

// /Script/JunoSettings.JunoClientSettingRecordPartition
// Kind: Class; super: FortClientSettingRecordPartition
class UJunoClientSettingRecordPartition
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    float MusicVolume; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoClientSettingRecordPartition, MusicVolume) == 64, "Offset mismatch for UJunoClientSettingRecordPartition::MusicVolume");
