/**
 * decamp dumper generated SDK
 * Package: /Script/SparksSettingsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksSettingsRuntime.SparksClientSettingRecordPartition
// Kind: Class; super: FortClientSettingRecordPartition
class USparksClientSettingRecordPartition
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bSynchronizeMyDanceEmotesToJamTracks; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    float GameplayMusicVolume; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USparksClientSettingRecordPartition, bSynchronizeMyDanceEmotesToJamTracks) == 64, "Offset mismatch for USparksClientSettingRecordPartition::bSynchronizeMyDanceEmotesToJamTracks");
static_assert(offsetof(USparksClientSettingRecordPartition, GameplayMusicVolume) == 68, "Offset mismatch for USparksClientSettingRecordPartition::GameplayMusicVolume");
