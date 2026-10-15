/**
 * decamp dumper generated SDK
 * Package: /Script/SparksMicrophoneRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksMicrophoneRuntime.SparksAutoCorrelationPitchDetectorSettings
// Kind: ScriptStruct; super: none
struct FSparksAutoCorrelationPitchDetectorSettings
{
public:
    float AnalysisHopSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinimumFrequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaximumFrequency; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Sensitivity; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSparksAutoCorrelationPitchDetectorSettings, AnalysisHopSeconds) == 0, "Offset mismatch for FSparksAutoCorrelationPitchDetectorSettings::AnalysisHopSeconds");
static_assert(offsetof(FSparksAutoCorrelationPitchDetectorSettings, MinimumFrequency) == 4, "Offset mismatch for FSparksAutoCorrelationPitchDetectorSettings::MinimumFrequency");
static_assert(offsetof(FSparksAutoCorrelationPitchDetectorSettings, MaximumFrequency) == 8, "Offset mismatch for FSparksAutoCorrelationPitchDetectorSettings::MaximumFrequency");
static_assert(offsetof(FSparksAutoCorrelationPitchDetectorSettings, Sensitivity) == 12, "Offset mismatch for FSparksAutoCorrelationPitchDetectorSettings::Sensitivity");

// /Script/SparksMicrophoneRuntime.SparksEnvelopeFollowerSettings
// Kind: ScriptStruct; super: none
struct FSparksEnvelopeFollowerSettings
{
public:
    float AttackTimeMs; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ReleaseTimeMs; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSparksEnvelopeFollowerSettings, AttackTimeMs) == 0, "Offset mismatch for FSparksEnvelopeFollowerSettings::AttackTimeMs");
static_assert(offsetof(FSparksEnvelopeFollowerSettings, ReleaseTimeMs) == 4, "Offset mismatch for FSparksEnvelopeFollowerSettings::ReleaseTimeMs");

// /Script/SparksMicrophoneRuntime.SparksPitchInfo
// Kind: ScriptStruct; super: none
struct FSparksPitchInfo
{
public:
    float Frequency; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Strength; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Loudness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SongPosSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DurationSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSparksPitchInfo, Frequency) == 0, "Offset mismatch for FSparksPitchInfo::Frequency");
static_assert(offsetof(FSparksPitchInfo, Strength) == 4, "Offset mismatch for FSparksPitchInfo::Strength");
static_assert(offsetof(FSparksPitchInfo, Loudness) == 8, "Offset mismatch for FSparksPitchInfo::Loudness");
static_assert(offsetof(FSparksPitchInfo, SongPosSeconds) == 12, "Offset mismatch for FSparksPitchInfo::SongPosSeconds");
static_assert(offsetof(FSparksPitchInfo, DurationSeconds) == 16, "Offset mismatch for FSparksPitchInfo::DurationSeconds");

// /Script/SparksMicrophoneRuntime.SparksYINPitchDetectorSettings
// Kind: ScriptStruct; super: none
struct FSparksYINPitchDetectorSettings
{
public:
    float AnalysisHopSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinimumFrequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaximumFrequency; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Threshold; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSparksYINPitchDetectorSettings, AnalysisHopSeconds) == 0, "Offset mismatch for FSparksYINPitchDetectorSettings::AnalysisHopSeconds");
static_assert(offsetof(FSparksYINPitchDetectorSettings, MinimumFrequency) == 4, "Offset mismatch for FSparksYINPitchDetectorSettings::MinimumFrequency");
static_assert(offsetof(FSparksYINPitchDetectorSettings, MaximumFrequency) == 8, "Offset mismatch for FSparksYINPitchDetectorSettings::MaximumFrequency");
static_assert(offsetof(FSparksYINPitchDetectorSettings, Threshold) == 12, "Offset mismatch for FSparksYINPitchDetectorSettings::Threshold");

// /Script/SparksMicrophoneRuntime.FortAthenaMutator_SparksVocalChannel
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_SparksVocalChannel
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SparksVocalChannel, bMutatesGameMode) == 688, "Offset mismatch for UFortAthenaMutator_SparksVocalChannel::bMutatesGameMode");
static_assert(offsetof(UFortAthenaMutator_SparksVocalChannel, CachedGameMode) == 696, "Offset mismatch for UFortAthenaMutator_SparksVocalChannel::CachedGameMode");
static_assert(offsetof(UFortAthenaMutator_SparksVocalChannel, CachedGameState) == 704, "Offset mismatch for UFortAthenaMutator_SparksVocalChannel::CachedGameState");
static_assert(offsetof(UFortAthenaMutator_SparksVocalChannel, InitializedPlayerControllers) == 712, "Offset mismatch for UFortAthenaMutator_SparksVocalChannel::InitializedPlayerControllers");
static_assert(offsetof(UFortAthenaMutator_SparksVocalChannel, OverridePriority) == 732, "Offset mismatch for UFortAthenaMutator_SparksVocalChannel::OverridePriority");
static_assert(offsetof(UFortAthenaMutator_SparksVocalChannel, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortAthenaMutator_SparksVocalChannel::bOnlyRunOnGameThread");

// /Script/SparksMicrophoneRuntime.SparksAudioCaptureComponent
// Kind: Class; super: ControllerComponent
class USparksAudioCaptureComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPitchesDetected; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t AutoCorrelationSettings[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t YINPitchDetectorSettings[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t EnvelopeFollowerSettings[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    FString UserPreferredAudioCaptureDeviceId; // 0x0108 (Size: 0x10, Type: StrProperty)
    FString UserPreferredAudioCaptureDeviceName; // 0x0118 (Size: 0x10, Type: StrProperty)
    float MicSensitivity; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x1C]; // 0x012C
    void* MusicClockComponent; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksAudioCaptureComponent, OnPitchesDetected) == 192, "Offset mismatch for USparksAudioCaptureComponent::OnPitchesDetected");
static_assert(offsetof(USparksAudioCaptureComponent, AutoCorrelationSettings) == 208, "Offset mismatch for USparksAudioCaptureComponent::AutoCorrelationSettings");
static_assert(offsetof(USparksAudioCaptureComponent, YINPitchDetectorSettings) == 224, "Offset mismatch for USparksAudioCaptureComponent::YINPitchDetectorSettings");
static_assert(offsetof(USparksAudioCaptureComponent, EnvelopeFollowerSettings) == 240, "Offset mismatch for USparksAudioCaptureComponent::EnvelopeFollowerSettings");
static_assert(offsetof(USparksAudioCaptureComponent, UserPreferredAudioCaptureDeviceId) == 264, "Offset mismatch for USparksAudioCaptureComponent::UserPreferredAudioCaptureDeviceId");
static_assert(offsetof(USparksAudioCaptureComponent, UserPreferredAudioCaptureDeviceName) == 280, "Offset mismatch for USparksAudioCaptureComponent::UserPreferredAudioCaptureDeviceName");
static_assert(offsetof(USparksAudioCaptureComponent, MicSensitivity) == 296, "Offset mismatch for USparksAudioCaptureComponent::MicSensitivity");
static_assert(offsetof(USparksAudioCaptureComponent, MusicClockComponent) == 328, "Offset mismatch for USparksAudioCaptureComponent::MusicClockComponent");
