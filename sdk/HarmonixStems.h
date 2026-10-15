/**
 * decamp dumper generated SDK
 * Package: /Script/HarmonixStems
 */
#pragma once
#include "Basic.h"

// /Script/HarmonixStems.MediaStreamAssetStem
// Kind: ScriptStruct; super: none
struct FMediaStreamAssetStem
{
public:
    FName StemName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Channels; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMediaStreamAssetStem, StemName) == 0, "Offset mismatch for FMediaStreamAssetStem::StemName");
static_assert(offsetof(FMediaStreamAssetStem, Channels) == 8, "Offset mismatch for FMediaStreamAssetStem::Channels");

// /Script/HarmonixStems.MusicAssetStemChannel
// Kind: ScriptStruct; super: none
struct FMusicAssetStemChannel
{
public:
    std::int32_t SourceIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    float LevelInDecibels; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMusicAssetStemChannel, SourceIndex) == 0, "Offset mismatch for FMusicAssetStemChannel::SourceIndex");
static_assert(offsetof(FMusicAssetStemChannel, LevelInDecibels) == 4, "Offset mismatch for FMusicAssetStemChannel::LevelInDecibels");

// /Script/HarmonixStems.StemConfigurationAudioBus
// Kind: ScriptStruct; super: none
struct FStemConfigurationAudioBus
{
public:
    FName StemName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* AudioBus; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStemConfigurationAudioBus, StemName) == 0, "Offset mismatch for FStemConfigurationAudioBus::StemName");
static_assert(offsetof(FStemConfigurationAudioBus, AudioBus) == 8, "Offset mismatch for FStemConfigurationAudioBus::AudioBus");

// /Script/HarmonixStems.WavesAssetStem
// Kind: ScriptStruct; super: none
struct FWavesAssetStem
{
public:
    FName StemName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* SoundWave; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ChannelLevelsInDecibels; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWavesAssetStem, StemName) == 0, "Offset mismatch for FWavesAssetStem::StemName");
static_assert(offsetof(FWavesAssetStem, SoundWave) == 8, "Offset mismatch for FWavesAssetStem::SoundWave");
static_assert(offsetof(FWavesAssetStem, ChannelLevelsInDecibels) == 16, "Offset mismatch for FWavesAssetStem::ChannelLevelsInDecibels");

// /Script/HarmonixStems.StemConfiguration
// Kind: Class; super: Object
class UStemConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Stems; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStemConfiguration, Stems) == 40, "Offset mismatch for UStemConfiguration::Stems");

// /Script/HarmonixStems.StemmedMediaStreamAsset
// Kind: Class; super: StemmedMusicAsset
class UStemmedMediaStreamAsset
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* MediaPlayer; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StreamStems; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStemmedMediaStreamAsset, MediaPlayer) == 64, "Offset mismatch for UStemmedMediaStreamAsset::MediaPlayer");
static_assert(offsetof(UStemmedMediaStreamAsset, StreamStems) == 72, "Offset mismatch for UStemmedMediaStreamAsset::StreamStems");

// /Script/HarmonixStems.StemmedMusicAsset
// Kind: Class; super: Object
class UStemmedMusicAsset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* MidiFile; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* StemConfiguration; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStemmedMusicAsset, MidiFile) == 48, "Offset mismatch for UStemmedMusicAsset::MidiFile");
static_assert(offsetof(UStemmedMusicAsset, StemConfiguration) == 56, "Offset mismatch for UStemmedMusicAsset::StemConfiguration");

// /Script/HarmonixStems.StemmedWavesAsset
// Kind: Class; super: StemmedMusicAsset
class UStemmedWavesAsset
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> WavesStems; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStemmedWavesAsset, WavesStems) == 72, "Offset mismatch for UStemmedWavesAsset::WavesStems");
