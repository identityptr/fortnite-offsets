/**
 * decamp dumper generated SDK
 * Package: /Script/AudioAnalyzer
 */
#pragma once
#include "Basic.h"

// /Script/AudioAnalyzer.AudioAnalyzer
// Kind: Class; super: Object
class UAudioAnalyzer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* AudioBus; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0030
    void* AudioAnalyzerSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAudioAnalyzer, AudioBus) == 40, "Offset mismatch for UAudioAnalyzer::AudioBus");
static_assert(offsetof(UAudioAnalyzer, AudioAnalyzerSubsystem) == 56, "Offset mismatch for UAudioAnalyzer::AudioAnalyzerSubsystem");

// /Script/AudioAnalyzer.AudioAnalyzerAssetBase
// Kind: Class; super: Object
class UAudioAnalyzerAssetBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioAnalyzer.AudioAnalyzerNRT
// Kind: Class; super: AudioAnalyzerAssetBase
class UAudioAnalyzerNRT
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Sound; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    float DurationInSeconds; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAudioAnalyzerNRT, Sound) == 40, "Offset mismatch for UAudioAnalyzerNRT::Sound");
static_assert(offsetof(UAudioAnalyzerNRT, DurationInSeconds) == 48, "Offset mismatch for UAudioAnalyzerNRT::DurationInSeconds");

// /Script/AudioAnalyzer.AudioAnalyzerNRTSettings
// Kind: Class; super: AudioAnalyzerAssetBase
class UAudioAnalyzerNRTSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioAnalyzer.AudioAnalyzerSettings
// Kind: Class; super: AudioAnalyzerAssetBase
class UAudioAnalyzerSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioAnalyzer.AudioAnalyzerSubsystem
// Kind: Class; super: EngineSubsystem
class UAudioAnalyzerSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> AudioAnalyzers; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioAnalyzerSubsystem, AudioAnalyzers) == 48, "Offset mismatch for UAudioAnalyzerSubsystem::AudioAnalyzers");
