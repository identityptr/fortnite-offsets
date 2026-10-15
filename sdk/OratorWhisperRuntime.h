/**
 * decamp dumper generated SDK
 * Package: /Script/OratorWhisperRuntime
 */
#pragma once
#include "Basic.h"

// /Script/OratorWhisperRuntime.OratorInternalWhisperTranscriptionProvider
// Kind: Class; super: OratorTranscriptionProvider
class UOratorInternalWhisperTranscriptionProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString EndpointURL; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString Language; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString Prompt; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnableVAD; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOratorInternalWhisperTranscriptionProvider, EndpointURL) == 40, "Offset mismatch for UOratorInternalWhisperTranscriptionProvider::EndpointURL");
static_assert(offsetof(UOratorInternalWhisperTranscriptionProvider, Language) == 56, "Offset mismatch for UOratorInternalWhisperTranscriptionProvider::Language");
static_assert(offsetof(UOratorInternalWhisperTranscriptionProvider, Prompt) == 72, "Offset mismatch for UOratorInternalWhisperTranscriptionProvider::Prompt");
static_assert(offsetof(UOratorInternalWhisperTranscriptionProvider, bEnableVAD) == 88, "Offset mismatch for UOratorInternalWhisperTranscriptionProvider::bEnableVAD");

// /Script/OratorWhisperRuntime.OratorWhisperEditorSettings
// Kind: Class; super: DeveloperSettings
class UOratorWhisperEditorSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString EndpointURLOverride; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UOratorWhisperEditorSettings, EndpointURLOverride) == 48, "Offset mismatch for UOratorWhisperEditorSettings::EndpointURLOverride");

// /Script/OratorWhisperRuntime.OratorWhisperTranscriptionProvider
// Kind: Class; super: OratorTranscriptionProvider
class UOratorWhisperTranscriptionProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t WhisperConfig[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bEnableStreaming; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    float StreamingIntervalSeconds; // 0x004C (Size: 0x4, Type: FloatProperty)
    void* LoadedWhisperConfig; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOratorWhisperTranscriptionProvider, WhisperConfig) == 40, "Offset mismatch for UOratorWhisperTranscriptionProvider::WhisperConfig");
static_assert(offsetof(UOratorWhisperTranscriptionProvider, bEnableStreaming) == 72, "Offset mismatch for UOratorWhisperTranscriptionProvider::bEnableStreaming");
static_assert(offsetof(UOratorWhisperTranscriptionProvider, StreamingIntervalSeconds) == 76, "Offset mismatch for UOratorWhisperTranscriptionProvider::StreamingIntervalSeconds");
static_assert(offsetof(UOratorWhisperTranscriptionProvider, LoadedWhisperConfig) == 80, "Offset mismatch for UOratorWhisperTranscriptionProvider::LoadedWhisperConfig");
