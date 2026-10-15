/**
 * decamp dumper generated SDK
 * Package: /Script/AudioPlatformConfiguration
 */
#pragma once
#include "Basic.h"

// /Script/AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// Kind: ScriptStruct; super: none
struct FPlatformRuntimeAudioCompressionOverrides
{
public:
    std::uint8_t bOverrideCompressionTimes; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float DurationThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumRandomBranches; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t SoundCueQualityIndex; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, bOverrideCompressionTimes) == 0, "Offset mismatch for FPlatformRuntimeAudioCompressionOverrides::bOverrideCompressionTimes");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, DurationThreshold) == 4, "Offset mismatch for FPlatformRuntimeAudioCompressionOverrides::DurationThreshold");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, MaxNumRandomBranches) == 8, "Offset mismatch for FPlatformRuntimeAudioCompressionOverrides::MaxNumRandomBranches");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, SoundCueQualityIndex) == 12, "Offset mismatch for FPlatformRuntimeAudioCompressionOverrides::SoundCueQualityIndex");
