/**
 * decamp dumper generated SDK
 * Package: /Script/OratorElevenLabsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/OratorElevenLabsRuntime.OratorElevenLabsVoiceModifiers
// Kind: ScriptStruct; super: none
struct FOratorElevenLabsVoiceModifiers
{
public:
    std::uint8_t PlaybackVolumeMultiplierOverride[0x8]; // 0x0000 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t PlaybackPitchOverride[0x8]; // 0x0008 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t SpeedOverride[0x1]; // 0x0010 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FOratorElevenLabsVoiceModifiers, PlaybackVolumeMultiplierOverride) == 0, "Offset mismatch for FOratorElevenLabsVoiceModifiers::PlaybackVolumeMultiplierOverride");
static_assert(offsetof(FOratorElevenLabsVoiceModifiers, PlaybackPitchOverride) == 8, "Offset mismatch for FOratorElevenLabsVoiceModifiers::PlaybackPitchOverride");
static_assert(offsetof(FOratorElevenLabsVoiceModifiers, SpeedOverride) == 16, "Offset mismatch for FOratorElevenLabsVoiceModifiers::SpeedOverride");

// /Script/OratorElevenLabsRuntime.OratorElevenLabsDialogueProvider
// Kind: Class; super: OratorDialogueProvider
class UOratorElevenLabsDialogueProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DialogueAudioFormat; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TMap<void*, void*> AvailableVoices; // 0x0030 (Size: 0x10, Type: MapProperty)
    float MinAudioToStreamSeconds; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UOratorElevenLabsDialogueProvider, DialogueAudioFormat) == 40, "Offset mismatch for UOratorElevenLabsDialogueProvider::DialogueAudioFormat");
static_assert(offsetof(UOratorElevenLabsDialogueProvider, AvailableVoices) == 48, "Offset mismatch for UOratorElevenLabsDialogueProvider::AvailableVoices");
static_assert(offsetof(UOratorElevenLabsDialogueProvider, MinAudioToStreamSeconds) == 64, "Offset mismatch for UOratorElevenLabsDialogueProvider::MinAudioToStreamSeconds");

// /Script/OratorElevenLabsRuntime.OratorElevenLabsMusicProvider
// Kind: Class; super: OratorMusicProvider
class UOratorElevenLabsMusicProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MusicAudioFormat; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MusicAudioModel; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bForceInstrumental; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002B
    float MinAudioToStreamSeconds; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UOratorElevenLabsMusicProvider, MusicAudioFormat) == 40, "Offset mismatch for UOratorElevenLabsMusicProvider::MusicAudioFormat");
static_assert(offsetof(UOratorElevenLabsMusicProvider, MusicAudioModel) == 41, "Offset mismatch for UOratorElevenLabsMusicProvider::MusicAudioModel");
static_assert(offsetof(UOratorElevenLabsMusicProvider, bForceInstrumental) == 42, "Offset mismatch for UOratorElevenLabsMusicProvider::bForceInstrumental");
static_assert(offsetof(UOratorElevenLabsMusicProvider, MinAudioToStreamSeconds) == 44, "Offset mismatch for UOratorElevenLabsMusicProvider::MinAudioToStreamSeconds");

// /Script/OratorElevenLabsRuntime.OratorElevenLabsSpeechProvider
// Kind: Class; super: OratorTextToSpeechProvider
class UOratorElevenLabsSpeechProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Voice[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t SpeechAudioFormat; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpeechAudioModel; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0032
    std::uint8_t SpeechStreamingConfig[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t VoiceModifiers[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float MinAudioToStreamSeconds; // 0x0068 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UOratorElevenLabsSpeechProvider, Voice) == 40, "Offset mismatch for UOratorElevenLabsSpeechProvider::Voice");
static_assert(offsetof(UOratorElevenLabsSpeechProvider, SpeechAudioFormat) == 48, "Offset mismatch for UOratorElevenLabsSpeechProvider::SpeechAudioFormat");
static_assert(offsetof(UOratorElevenLabsSpeechProvider, SpeechAudioModel) == 49, "Offset mismatch for UOratorElevenLabsSpeechProvider::SpeechAudioModel");
static_assert(offsetof(UOratorElevenLabsSpeechProvider, SpeechStreamingConfig) == 56, "Offset mismatch for UOratorElevenLabsSpeechProvider::SpeechStreamingConfig");
static_assert(offsetof(UOratorElevenLabsSpeechProvider, VoiceModifiers) == 80, "Offset mismatch for UOratorElevenLabsSpeechProvider::VoiceModifiers");
static_assert(offsetof(UOratorElevenLabsSpeechProvider, MinAudioToStreamSeconds) == 104, "Offset mismatch for UOratorElevenLabsSpeechProvider::MinAudioToStreamSeconds");

// /Script/OratorElevenLabsRuntime.OratorElevenLabsTranscriptionProvider
// Kind: Class; super: OratorTranscriptionProvider
class UOratorElevenLabsTranscriptionProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Model; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOratorElevenLabsTranscriptionProvider, Model) == 40, "Offset mismatch for UOratorElevenLabsTranscriptionProvider::Model");
