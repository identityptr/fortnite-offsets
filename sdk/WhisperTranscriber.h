/**
 * decamp dumper generated SDK
 * Package: /Script/WhisperTranscriber
 */
#pragma once
#include "Basic.h"

// /Script/WhisperTranscriber.WhisperTranscriberConfig
// Kind: Class; super: PrimaryDataAsset
class UWhisperTranscriberConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* EncoderModel; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* DecoderModel; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumVocabTokens; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    TArray<void*> VocabTokens; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::int32_t FFTWindowDurationMS; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t FFTStrideMS; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::int32_t NumMelBands; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t AudioEncoderRequiredDuration; // 0x005C (Size: 0x4, Type: IntProperty)
    std::int32_t AudioEncoderSampleRate; // 0x0060 (Size: 0x4, Type: IntProperty)
    float AudioMinDuration; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float AudioMaxDuration; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinSampleRate; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSampleRate; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t EstimatedOutputTokens; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxOutputTokens; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x007C
    std::int64_t StartOfTranscriptTokenID; // 0x0080 (Size: 0x8, Type: Int64Property)
    std::int64_t TranslateTokenID; // 0x0088 (Size: 0x8, Type: Int64Property)
    std::int64_t TranscribeTokenID; // 0x0090 (Size: 0x8, Type: Int64Property)
    TMap<void*, void*> LanguageCodeTokenIDs; // 0x0098 (Size: 0x10, Type: MapProperty)
    std::int64_t EndOfTextTokenID; // 0x00A8 (Size: 0x8, Type: Int64Property)
    std::int64_t NoTimestampsTokenID; // 0x00B0 (Size: 0x8, Type: Int64Property)
    std::uint8_t SuppressedTokens[0x10]; // 0x00B8 (Size: 0x10, Type: SetProperty)
    std::int32_t StreamingTokensToRemove; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalNumVocabTokens; // 0x00CC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UWhisperTranscriberConfig, EncoderModel) == 40, "Offset mismatch for UWhisperTranscriberConfig::EncoderModel");
static_assert(offsetof(UWhisperTranscriberConfig, DecoderModel) == 48, "Offset mismatch for UWhisperTranscriberConfig::DecoderModel");
static_assert(offsetof(UWhisperTranscriberConfig, NumVocabTokens) == 56, "Offset mismatch for UWhisperTranscriberConfig::NumVocabTokens");
static_assert(offsetof(UWhisperTranscriberConfig, VocabTokens) == 64, "Offset mismatch for UWhisperTranscriberConfig::VocabTokens");
static_assert(offsetof(UWhisperTranscriberConfig, FFTWindowDurationMS) == 80, "Offset mismatch for UWhisperTranscriberConfig::FFTWindowDurationMS");
static_assert(offsetof(UWhisperTranscriberConfig, FFTStrideMS) == 84, "Offset mismatch for UWhisperTranscriberConfig::FFTStrideMS");
static_assert(offsetof(UWhisperTranscriberConfig, NumMelBands) == 88, "Offset mismatch for UWhisperTranscriberConfig::NumMelBands");
static_assert(offsetof(UWhisperTranscriberConfig, AudioEncoderRequiredDuration) == 92, "Offset mismatch for UWhisperTranscriberConfig::AudioEncoderRequiredDuration");
static_assert(offsetof(UWhisperTranscriberConfig, AudioEncoderSampleRate) == 96, "Offset mismatch for UWhisperTranscriberConfig::AudioEncoderSampleRate");
static_assert(offsetof(UWhisperTranscriberConfig, AudioMinDuration) == 100, "Offset mismatch for UWhisperTranscriberConfig::AudioMinDuration");
static_assert(offsetof(UWhisperTranscriberConfig, AudioMaxDuration) == 104, "Offset mismatch for UWhisperTranscriberConfig::AudioMaxDuration");
static_assert(offsetof(UWhisperTranscriberConfig, MinSampleRate) == 108, "Offset mismatch for UWhisperTranscriberConfig::MinSampleRate");
static_assert(offsetof(UWhisperTranscriberConfig, MaxSampleRate) == 112, "Offset mismatch for UWhisperTranscriberConfig::MaxSampleRate");
static_assert(offsetof(UWhisperTranscriberConfig, EstimatedOutputTokens) == 116, "Offset mismatch for UWhisperTranscriberConfig::EstimatedOutputTokens");
static_assert(offsetof(UWhisperTranscriberConfig, MaxOutputTokens) == 120, "Offset mismatch for UWhisperTranscriberConfig::MaxOutputTokens");
static_assert(offsetof(UWhisperTranscriberConfig, StartOfTranscriptTokenID) == 128, "Offset mismatch for UWhisperTranscriberConfig::StartOfTranscriptTokenID");
static_assert(offsetof(UWhisperTranscriberConfig, TranslateTokenID) == 136, "Offset mismatch for UWhisperTranscriberConfig::TranslateTokenID");
static_assert(offsetof(UWhisperTranscriberConfig, TranscribeTokenID) == 144, "Offset mismatch for UWhisperTranscriberConfig::TranscribeTokenID");
static_assert(offsetof(UWhisperTranscriberConfig, LanguageCodeTokenIDs) == 152, "Offset mismatch for UWhisperTranscriberConfig::LanguageCodeTokenIDs");
static_assert(offsetof(UWhisperTranscriberConfig, EndOfTextTokenID) == 168, "Offset mismatch for UWhisperTranscriberConfig::EndOfTextTokenID");
static_assert(offsetof(UWhisperTranscriberConfig, NoTimestampsTokenID) == 176, "Offset mismatch for UWhisperTranscriberConfig::NoTimestampsTokenID");
static_assert(offsetof(UWhisperTranscriberConfig, SuppressedTokens) == 184, "Offset mismatch for UWhisperTranscriberConfig::SuppressedTokens");
static_assert(offsetof(UWhisperTranscriberConfig, StreamingTokensToRemove) == 200, "Offset mismatch for UWhisperTranscriberConfig::StreamingTokensToRemove");
static_assert(offsetof(UWhisperTranscriberConfig, TotalNumVocabTokens) == 204, "Offset mismatch for UWhisperTranscriberConfig::TotalNumVocabTokens");

// /Script/WhisperTranscriber.WhisperTranscriberHandle
// Kind: Class; super: Object
class UWhisperTranscriberHandle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnTranscription; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0040
    void* TranscriberConfig; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWhisperTranscriberHandle, OnTranscription) == 48, "Offset mismatch for UWhisperTranscriberHandle::OnTranscription");
static_assert(offsetof(UWhisperTranscriberHandle, TranscriberConfig) == 104, "Offset mismatch for UWhisperTranscriberHandle::TranscriberConfig");
