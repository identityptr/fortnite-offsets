/**
 * decamp dumper generated SDK
 * Package: /Script/AudioSynesthesia
 */
#pragma once
#include "Basic.h"

// /Script/AudioSynesthesia.ConstantQResults
// Kind: ScriptStruct; super: none
struct FConstantQResults
{
public:
    float TimeSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> SpectrumValues; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConstantQResults, TimeSeconds) == 0, "Offset mismatch for FConstantQResults::TimeSeconds");
static_assert(offsetof(FConstantQResults, SpectrumValues) == 8, "Offset mismatch for FConstantQResults::SpectrumValues");

// /Script/AudioSynesthesia.LoudnessResults
// Kind: ScriptStruct; super: none
struct FLoudnessResults
{
public:
    float Loudness; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float NormalizedLoudness; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PerceptualEnergy; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TimeSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLoudnessResults, Loudness) == 0, "Offset mismatch for FLoudnessResults::Loudness");
static_assert(offsetof(FLoudnessResults, NormalizedLoudness) == 4, "Offset mismatch for FLoudnessResults::NormalizedLoudness");
static_assert(offsetof(FLoudnessResults, PerceptualEnergy) == 8, "Offset mismatch for FLoudnessResults::PerceptualEnergy");
static_assert(offsetof(FLoudnessResults, TimeSeconds) == 12, "Offset mismatch for FLoudnessResults::TimeSeconds");

// /Script/AudioSynesthesia.MeterResults
// Kind: ScriptStruct; super: none
struct FMeterResults
{
public:
    float TimeSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MeterValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PeakValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSamplesClipping; // 0x000C (Size: 0x4, Type: IntProperty)
    float ClippingValue; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMeterResults, TimeSeconds) == 0, "Offset mismatch for FMeterResults::TimeSeconds");
static_assert(offsetof(FMeterResults, MeterValue) == 4, "Offset mismatch for FMeterResults::MeterValue");
static_assert(offsetof(FMeterResults, PeakValue) == 8, "Offset mismatch for FMeterResults::PeakValue");
static_assert(offsetof(FMeterResults, NumSamplesClipping) == 12, "Offset mismatch for FMeterResults::NumSamplesClipping");
static_assert(offsetof(FMeterResults, ClippingValue) == 16, "Offset mismatch for FMeterResults::ClippingValue");

// /Script/AudioSynesthesia.SynesthesiaSpectrumResults
// Kind: ScriptStruct; super: none
struct FSynesthesiaSpectrumResults
{
public:
    float TimeSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> SpectrumValues; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSynesthesiaSpectrumResults, TimeSeconds) == 0, "Offset mismatch for FSynesthesiaSpectrumResults::TimeSeconds");
static_assert(offsetof(FSynesthesiaSpectrumResults, SpectrumValues) == 8, "Offset mismatch for FSynesthesiaSpectrumResults::SpectrumValues");

// /Script/AudioSynesthesia.AudioSynesthesiaNRT
// Kind: Class; super: AudioAnalyzerNRT
class UAudioSynesthesiaNRT
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Sound; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    float DurationInSeconds; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAudioSynesthesiaNRT, Sound) == 40, "Offset mismatch for UAudioSynesthesiaNRT::Sound");
static_assert(offsetof(UAudioSynesthesiaNRT, DurationInSeconds) == 48, "Offset mismatch for UAudioSynesthesiaNRT::DurationInSeconds");

// /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings
// Kind: Class; super: AudioAnalyzerNRTSettings
class UAudioSynesthesiaNRTSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioSynesthesia.AudioSynesthesiaSettings
// Kind: Class; super: AudioAnalyzerSettings
class UAudioSynesthesiaSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioSynesthesia.ConstantQAnalyzer
// Kind: Class; super: AudioAnalyzer
class UConstantQAnalyzer
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* Settings; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnConstantQResults; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00B8
    FMulticastInlineDelegate OnLatestConstantQResults; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UConstantQAnalyzer, Settings) == 160, "Offset mismatch for UConstantQAnalyzer::Settings");
static_assert(offsetof(UConstantQAnalyzer, OnConstantQResults) == 168, "Offset mismatch for UConstantQAnalyzer::OnConstantQResults");
static_assert(offsetof(UConstantQAnalyzer, OnLatestConstantQResults) == 208, "Offset mismatch for UConstantQAnalyzer::OnLatestConstantQResults");

// /Script/AudioSynesthesia.ConstantQNRT
// Kind: Class; super: AudioSynesthesiaNRT
class UConstantQNRT
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Settings; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConstantQNRT, Settings) == 120, "Offset mismatch for UConstantQNRT::Settings");

// /Script/AudioSynesthesia.ConstantQNRTSettings
// Kind: Class; super: AudioSynesthesiaNRTSettings
class UConstantQNRTSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float StartingFrequency; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumBands; // 0x002C (Size: 0x4, Type: IntProperty)
    float NumBandsPerOctave; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float AnalysisPeriod; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDownmixToMono; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FFTSize; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t WindowType; // 0x003A (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpectrumType; // 0x003B (Size: 0x1, Type: EnumProperty)
    float BandWidthStretch; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CQTNormalization; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    float NoiseFloorDb; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UConstantQNRTSettings, StartingFrequency) == 40, "Offset mismatch for UConstantQNRTSettings::StartingFrequency");
static_assert(offsetof(UConstantQNRTSettings, NumBands) == 44, "Offset mismatch for UConstantQNRTSettings::NumBands");
static_assert(offsetof(UConstantQNRTSettings, NumBandsPerOctave) == 48, "Offset mismatch for UConstantQNRTSettings::NumBandsPerOctave");
static_assert(offsetof(UConstantQNRTSettings, AnalysisPeriod) == 52, "Offset mismatch for UConstantQNRTSettings::AnalysisPeriod");
static_assert(offsetof(UConstantQNRTSettings, bDownmixToMono) == 56, "Offset mismatch for UConstantQNRTSettings::bDownmixToMono");
static_assert(offsetof(UConstantQNRTSettings, FFTSize) == 57, "Offset mismatch for UConstantQNRTSettings::FFTSize");
static_assert(offsetof(UConstantQNRTSettings, WindowType) == 58, "Offset mismatch for UConstantQNRTSettings::WindowType");
static_assert(offsetof(UConstantQNRTSettings, SpectrumType) == 59, "Offset mismatch for UConstantQNRTSettings::SpectrumType");
static_assert(offsetof(UConstantQNRTSettings, BandWidthStretch) == 60, "Offset mismatch for UConstantQNRTSettings::BandWidthStretch");
static_assert(offsetof(UConstantQNRTSettings, CQTNormalization) == 64, "Offset mismatch for UConstantQNRTSettings::CQTNormalization");
static_assert(offsetof(UConstantQNRTSettings, NoiseFloorDb) == 68, "Offset mismatch for UConstantQNRTSettings::NoiseFloorDb");

// /Script/AudioSynesthesia.ConstantQSettings
// Kind: Class; super: AudioSynesthesiaSettings
class UConstantQSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float StartingFrequencyHz; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumBands; // 0x002C (Size: 0x4, Type: IntProperty)
    float NumBandsPerOctave; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float AnalysisPeriodInSeconds; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDownmixToMono; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FFTSize; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t WindowType; // 0x003A (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpectrumType; // 0x003B (Size: 0x1, Type: EnumProperty)
    float BandWidthStretch; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CQTNormalization; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    float NoiseFloorDb; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UConstantQSettings, StartingFrequencyHz) == 40, "Offset mismatch for UConstantQSettings::StartingFrequencyHz");
static_assert(offsetof(UConstantQSettings, NumBands) == 44, "Offset mismatch for UConstantQSettings::NumBands");
static_assert(offsetof(UConstantQSettings, NumBandsPerOctave) == 48, "Offset mismatch for UConstantQSettings::NumBandsPerOctave");
static_assert(offsetof(UConstantQSettings, AnalysisPeriodInSeconds) == 52, "Offset mismatch for UConstantQSettings::AnalysisPeriodInSeconds");
static_assert(offsetof(UConstantQSettings, bDownmixToMono) == 56, "Offset mismatch for UConstantQSettings::bDownmixToMono");
static_assert(offsetof(UConstantQSettings, FFTSize) == 57, "Offset mismatch for UConstantQSettings::FFTSize");
static_assert(offsetof(UConstantQSettings, WindowType) == 58, "Offset mismatch for UConstantQSettings::WindowType");
static_assert(offsetof(UConstantQSettings, SpectrumType) == 59, "Offset mismatch for UConstantQSettings::SpectrumType");
static_assert(offsetof(UConstantQSettings, BandWidthStretch) == 60, "Offset mismatch for UConstantQSettings::BandWidthStretch");
static_assert(offsetof(UConstantQSettings, CQTNormalization) == 64, "Offset mismatch for UConstantQSettings::CQTNormalization");
static_assert(offsetof(UConstantQSettings, NoiseFloorDb) == 68, "Offset mismatch for UConstantQSettings::NoiseFloorDb");

// /Script/AudioSynesthesia.LKFSAnalyzer
// Kind: Class; super: AudioAnalyzer
class ULKFSAnalyzer
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* Settings; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnOverallLKFSResults; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00B8
    FMulticastInlineDelegate OnPerChannelLKFSResults; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x00E0
    FMulticastInlineDelegate OnLatestOverallLKFSResults; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0108
    FMulticastInlineDelegate OnLatestPerChannelLKFSResults; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(ULKFSAnalyzer, Settings) == 160, "Offset mismatch for ULKFSAnalyzer::Settings");
static_assert(offsetof(ULKFSAnalyzer, OnOverallLKFSResults) == 168, "Offset mismatch for ULKFSAnalyzer::OnOverallLKFSResults");
static_assert(offsetof(ULKFSAnalyzer, OnPerChannelLKFSResults) == 208, "Offset mismatch for ULKFSAnalyzer::OnPerChannelLKFSResults");
static_assert(offsetof(ULKFSAnalyzer, OnLatestOverallLKFSResults) == 248, "Offset mismatch for ULKFSAnalyzer::OnLatestOverallLKFSResults");
static_assert(offsetof(ULKFSAnalyzer, OnLatestPerChannelLKFSResults) == 288, "Offset mismatch for ULKFSAnalyzer::OnLatestPerChannelLKFSResults");

// /Script/AudioSynesthesia.LKFSNRT
// Kind: Class; super: AudioSynesthesiaNRT
class ULKFSNRT
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Settings; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULKFSNRT, Settings) == 120, "Offset mismatch for ULKFSNRT::Settings");

// /Script/AudioSynesthesia.LKFSNRTSettings
// Kind: Class; super: AudioSynesthesiaNRTSettings
class ULKFSNRTSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float AnalysisPeriod; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float AnalysisWindowDuration; // 0x002C (Size: 0x4, Type: FloatProperty)
    float ShortTermLoudnessDuration; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULKFSNRTSettings, AnalysisPeriod) == 40, "Offset mismatch for ULKFSNRTSettings::AnalysisPeriod");
static_assert(offsetof(ULKFSNRTSettings, AnalysisWindowDuration) == 44, "Offset mismatch for ULKFSNRTSettings::AnalysisWindowDuration");
static_assert(offsetof(ULKFSNRTSettings, ShortTermLoudnessDuration) == 48, "Offset mismatch for ULKFSNRTSettings::ShortTermLoudnessDuration");

// /Script/AudioSynesthesia.LKFSSettings
// Kind: Class; super: AudioSynesthesiaSettings
class ULKFSSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float AnalysisPeriod; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float AnalysisWindowDuration; // 0x002C (Size: 0x4, Type: FloatProperty)
    float ShortTermLoudnessDuration; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float IntegratedLoudnessAnalysisPeriod; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float IntegratedLoudnessDuration; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCalculatePerChannelLoudnessRange; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCalculateOverallLoudnessRange; // 0x003D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULKFSSettings, AnalysisPeriod) == 40, "Offset mismatch for ULKFSSettings::AnalysisPeriod");
static_assert(offsetof(ULKFSSettings, AnalysisWindowDuration) == 44, "Offset mismatch for ULKFSSettings::AnalysisWindowDuration");
static_assert(offsetof(ULKFSSettings, ShortTermLoudnessDuration) == 48, "Offset mismatch for ULKFSSettings::ShortTermLoudnessDuration");
static_assert(offsetof(ULKFSSettings, IntegratedLoudnessAnalysisPeriod) == 52, "Offset mismatch for ULKFSSettings::IntegratedLoudnessAnalysisPeriod");
static_assert(offsetof(ULKFSSettings, IntegratedLoudnessDuration) == 56, "Offset mismatch for ULKFSSettings::IntegratedLoudnessDuration");
static_assert(offsetof(ULKFSSettings, bCalculatePerChannelLoudnessRange) == 60, "Offset mismatch for ULKFSSettings::bCalculatePerChannelLoudnessRange");
static_assert(offsetof(ULKFSSettings, bCalculateOverallLoudnessRange) == 61, "Offset mismatch for ULKFSSettings::bCalculateOverallLoudnessRange");

// /Script/AudioSynesthesia.LoudnessAnalyzer
// Kind: Class; super: AudioAnalyzer
class ULoudnessAnalyzer
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* Settings; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnOverallLoudnessResults; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPerChannelLoudnessResults; // 0x00B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLatestOverallLoudnessResults; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLatestPerChannelLoudnessResults; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(ULoudnessAnalyzer, Settings) == 160, "Offset mismatch for ULoudnessAnalyzer::Settings");
static_assert(offsetof(ULoudnessAnalyzer, OnOverallLoudnessResults) == 168, "Offset mismatch for ULoudnessAnalyzer::OnOverallLoudnessResults");
static_assert(offsetof(ULoudnessAnalyzer, OnPerChannelLoudnessResults) == 184, "Offset mismatch for ULoudnessAnalyzer::OnPerChannelLoudnessResults");
static_assert(offsetof(ULoudnessAnalyzer, OnLatestOverallLoudnessResults) == 200, "Offset mismatch for ULoudnessAnalyzer::OnLatestOverallLoudnessResults");
static_assert(offsetof(ULoudnessAnalyzer, OnLatestPerChannelLoudnessResults) == 216, "Offset mismatch for ULoudnessAnalyzer::OnLatestPerChannelLoudnessResults");

// /Script/AudioSynesthesia.LoudnessNRT
// Kind: Class; super: AudioSynesthesiaNRT
class ULoudnessNRT
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Settings; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULoudnessNRT, Settings) == 120, "Offset mismatch for ULoudnessNRT::Settings");

// /Script/AudioSynesthesia.LoudnessNRTSettings
// Kind: Class; super: AudioSynesthesiaNRTSettings
class ULoudnessNRTSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float AnalysisPeriod; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MinimumFrequency; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MaximumFrequency; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurveType; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    float NoiseFloorDb; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULoudnessNRTSettings, AnalysisPeriod) == 40, "Offset mismatch for ULoudnessNRTSettings::AnalysisPeriod");
static_assert(offsetof(ULoudnessNRTSettings, MinimumFrequency) == 44, "Offset mismatch for ULoudnessNRTSettings::MinimumFrequency");
static_assert(offsetof(ULoudnessNRTSettings, MaximumFrequency) == 48, "Offset mismatch for ULoudnessNRTSettings::MaximumFrequency");
static_assert(offsetof(ULoudnessNRTSettings, CurveType) == 52, "Offset mismatch for ULoudnessNRTSettings::CurveType");
static_assert(offsetof(ULoudnessNRTSettings, NoiseFloorDb) == 56, "Offset mismatch for ULoudnessNRTSettings::NoiseFloorDb");

// /Script/AudioSynesthesia.LoudnessSettings
// Kind: Class; super: AudioSynesthesiaSettings
class ULoudnessSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float AnalysisPeriod; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MinimumFrequency; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MaximumFrequency; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurveType; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    float NoiseFloorDb; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float ExpectedMaxLoudness; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULoudnessSettings, AnalysisPeriod) == 40, "Offset mismatch for ULoudnessSettings::AnalysisPeriod");
static_assert(offsetof(ULoudnessSettings, MinimumFrequency) == 44, "Offset mismatch for ULoudnessSettings::MinimumFrequency");
static_assert(offsetof(ULoudnessSettings, MaximumFrequency) == 48, "Offset mismatch for ULoudnessSettings::MaximumFrequency");
static_assert(offsetof(ULoudnessSettings, CurveType) == 52, "Offset mismatch for ULoudnessSettings::CurveType");
static_assert(offsetof(ULoudnessSettings, NoiseFloorDb) == 56, "Offset mismatch for ULoudnessSettings::NoiseFloorDb");
static_assert(offsetof(ULoudnessSettings, ExpectedMaxLoudness) == 60, "Offset mismatch for ULoudnessSettings::ExpectedMaxLoudness");

// /Script/AudioSynesthesia.MeterAnalyzer
// Kind: Class; super: AudioAnalyzer
class UMeterAnalyzer
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* Settings; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnOverallMeterResults; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00B8
    FMulticastInlineDelegate OnPerChannelMeterResults; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x00E0
    FMulticastInlineDelegate OnLatestOverallMeterResults; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0108
    FMulticastInlineDelegate OnLatestPerChannelMeterResults; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UMeterAnalyzer, Settings) == 160, "Offset mismatch for UMeterAnalyzer::Settings");
static_assert(offsetof(UMeterAnalyzer, OnOverallMeterResults) == 168, "Offset mismatch for UMeterAnalyzer::OnOverallMeterResults");
static_assert(offsetof(UMeterAnalyzer, OnPerChannelMeterResults) == 208, "Offset mismatch for UMeterAnalyzer::OnPerChannelMeterResults");
static_assert(offsetof(UMeterAnalyzer, OnLatestOverallMeterResults) == 248, "Offset mismatch for UMeterAnalyzer::OnLatestOverallMeterResults");
static_assert(offsetof(UMeterAnalyzer, OnLatestPerChannelMeterResults) == 288, "Offset mismatch for UMeterAnalyzer::OnLatestPerChannelMeterResults");

// /Script/AudioSynesthesia.MeterSettings
// Kind: Class; super: AudioSynesthesiaSettings
class UMeterSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float AnalysisPeriod; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PeakMode; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::int32_t MeterAttackTime; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t MeterReleaseTime; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t PeakHoldTime; // 0x0038 (Size: 0x4, Type: IntProperty)
    float ClippingThreshold; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAnalog; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeterSettings, AnalysisPeriod) == 40, "Offset mismatch for UMeterSettings::AnalysisPeriod");
static_assert(offsetof(UMeterSettings, PeakMode) == 44, "Offset mismatch for UMeterSettings::PeakMode");
static_assert(offsetof(UMeterSettings, MeterAttackTime) == 48, "Offset mismatch for UMeterSettings::MeterAttackTime");
static_assert(offsetof(UMeterSettings, MeterReleaseTime) == 52, "Offset mismatch for UMeterSettings::MeterReleaseTime");
static_assert(offsetof(UMeterSettings, PeakHoldTime) == 56, "Offset mismatch for UMeterSettings::PeakHoldTime");
static_assert(offsetof(UMeterSettings, ClippingThreshold) == 60, "Offset mismatch for UMeterSettings::ClippingThreshold");
static_assert(offsetof(UMeterSettings, bIsAnalog) == 64, "Offset mismatch for UMeterSettings::bIsAnalog");

// /Script/AudioSynesthesia.OnsetNRT
// Kind: Class; super: AudioSynesthesiaNRT
class UOnsetNRT
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Settings; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOnsetNRT, Settings) == 120, "Offset mismatch for UOnsetNRT::Settings");

// /Script/AudioSynesthesia.OnsetNRTSettings
// Kind: Class; super: AudioSynesthesiaNRTSettings
class UOnsetNRTSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bDownmixToMono; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float GranularityInSeconds; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Sensitivity; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MinimumFrequency; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MaximumFrequency; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UOnsetNRTSettings, bDownmixToMono) == 40, "Offset mismatch for UOnsetNRTSettings::bDownmixToMono");
static_assert(offsetof(UOnsetNRTSettings, GranularityInSeconds) == 44, "Offset mismatch for UOnsetNRTSettings::GranularityInSeconds");
static_assert(offsetof(UOnsetNRTSettings, Sensitivity) == 48, "Offset mismatch for UOnsetNRTSettings::Sensitivity");
static_assert(offsetof(UOnsetNRTSettings, MinimumFrequency) == 52, "Offset mismatch for UOnsetNRTSettings::MinimumFrequency");
static_assert(offsetof(UOnsetNRTSettings, MaximumFrequency) == 56, "Offset mismatch for UOnsetNRTSettings::MaximumFrequency");

// /Script/AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
// Kind: Class; super: AudioSynesthesiaSettings
class USynesthesiaSpectrumAnalysisSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float AnalysisPeriod; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FFTSize; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpectrumType; // 0x002D (Size: 0x1, Type: EnumProperty)
    std::uint8_t WindowType; // 0x002E (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDownmixToMono; // 0x002F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USynesthesiaSpectrumAnalysisSettings, AnalysisPeriod) == 40, "Offset mismatch for USynesthesiaSpectrumAnalysisSettings::AnalysisPeriod");
static_assert(offsetof(USynesthesiaSpectrumAnalysisSettings, FFTSize) == 44, "Offset mismatch for USynesthesiaSpectrumAnalysisSettings::FFTSize");
static_assert(offsetof(USynesthesiaSpectrumAnalysisSettings, SpectrumType) == 45, "Offset mismatch for USynesthesiaSpectrumAnalysisSettings::SpectrumType");
static_assert(offsetof(USynesthesiaSpectrumAnalysisSettings, WindowType) == 46, "Offset mismatch for USynesthesiaSpectrumAnalysisSettings::WindowType");
static_assert(offsetof(USynesthesiaSpectrumAnalysisSettings, bDownmixToMono) == 47, "Offset mismatch for USynesthesiaSpectrumAnalysisSettings::bDownmixToMono");

// /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer
// Kind: Class; super: AudioAnalyzer
class USynesthesiaSpectrumAnalyzer
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* Settings; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnSpectrumResults; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00B8
    FMulticastInlineDelegate OnLatestSpectrumResults; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USynesthesiaSpectrumAnalyzer, Settings) == 160, "Offset mismatch for USynesthesiaSpectrumAnalyzer::Settings");
static_assert(offsetof(USynesthesiaSpectrumAnalyzer, OnSpectrumResults) == 168, "Offset mismatch for USynesthesiaSpectrumAnalyzer::OnSpectrumResults");
static_assert(offsetof(USynesthesiaSpectrumAnalyzer, OnLatestSpectrumResults) == 208, "Offset mismatch for USynesthesiaSpectrumAnalyzer::OnLatestSpectrumResults");
