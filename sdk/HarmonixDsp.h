/**
 * decamp dumper generated SDK
 * Package: /Script/HarmonixDsp
 */
#pragma once
#include "Basic.h"

// /Script/HarmonixDsp.AdsrSettings
// Kind: ScriptStruct; super: none
struct FAdsrSettings
{
public:
    std::uint8_t Target; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t IsEnabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float AttackTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DecayTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SustainLevel; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ReleaseTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Depth; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float AttackCurve; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float DecayCurve; // 0x001C (Size: 0x4, Type: FloatProperty)
    float ReleaseCurve; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAdsrSettings, Target) == 0, "Offset mismatch for FAdsrSettings::Target");
static_assert(offsetof(FAdsrSettings, IsEnabled) == 1, "Offset mismatch for FAdsrSettings::IsEnabled");
static_assert(offsetof(FAdsrSettings, AttackTime) == 4, "Offset mismatch for FAdsrSettings::AttackTime");
static_assert(offsetof(FAdsrSettings, DecayTime) == 8, "Offset mismatch for FAdsrSettings::DecayTime");
static_assert(offsetof(FAdsrSettings, SustainLevel) == 12, "Offset mismatch for FAdsrSettings::SustainLevel");
static_assert(offsetof(FAdsrSettings, ReleaseTime) == 16, "Offset mismatch for FAdsrSettings::ReleaseTime");
static_assert(offsetof(FAdsrSettings, Depth) == 20, "Offset mismatch for FAdsrSettings::Depth");
static_assert(offsetof(FAdsrSettings, AttackCurve) == 24, "Offset mismatch for FAdsrSettings::AttackCurve");
static_assert(offsetof(FAdsrSettings, DecayCurve) == 28, "Offset mismatch for FAdsrSettings::DecayCurve");
static_assert(offsetof(FAdsrSettings, ReleaseCurve) == 32, "Offset mismatch for FAdsrSettings::ReleaseCurve");

// /Script/HarmonixDsp.AdsrSettingsArray
// Kind: ScriptStruct; super: none
struct FAdsrSettingsArray
{
public:
    std::uint8_t Array[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAdsrSettingsArray, Array) == 0, "Offset mismatch for FAdsrSettingsArray::Array");

// /Script/HarmonixDsp.BiquadFilterSettings
// Kind: ScriptStruct; super: none
struct FBiquadFilterSettings
{
public:
    std::uint8_t IsEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Type; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0005
    float Freq; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Q; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float DesignedDBGain; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBiquadFilterSettings, IsEnabled) == 0, "Offset mismatch for FBiquadFilterSettings::IsEnabled");
static_assert(offsetof(FBiquadFilterSettings, Type) == 4, "Offset mismatch for FBiquadFilterSettings::Type");
static_assert(offsetof(FBiquadFilterSettings, Freq) == 12, "Offset mismatch for FBiquadFilterSettings::Freq");
static_assert(offsetof(FBiquadFilterSettings, Q) == 16, "Offset mismatch for FBiquadFilterSettings::Q");
static_assert(offsetof(FBiquadFilterSettings, DesignedDBGain) == 20, "Offset mismatch for FBiquadFilterSettings::DesignedDBGain");

// /Script/HarmonixDsp.BitCrusherSettings
// Kind: ScriptStruct; super: none
struct FBitCrusherSettings
{
public:
    std::uint8_t IsEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float InputGain; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float OutputGain; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float WetGain; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint16_t Crush; // 0x0010 (Size: 0x2, Type: UInt16Property)
    std::uint16_t SampleHoldFactor; // 0x0012 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FBitCrusherSettings, IsEnabled) == 0, "Offset mismatch for FBitCrusherSettings::IsEnabled");
static_assert(offsetof(FBitCrusherSettings, InputGain) == 4, "Offset mismatch for FBitCrusherSettings::InputGain");
static_assert(offsetof(FBitCrusherSettings, OutputGain) == 8, "Offset mismatch for FBitCrusherSettings::OutputGain");
static_assert(offsetof(FBitCrusherSettings, WetGain) == 12, "Offset mismatch for FBitCrusherSettings::WetGain");
static_assert(offsetof(FBitCrusherSettings, Crush) == 16, "Offset mismatch for FBitCrusherSettings::Crush");
static_assert(offsetof(FBitCrusherSettings, SampleHoldFactor) == 18, "Offset mismatch for FBitCrusherSettings::SampleHoldFactor");

// /Script/HarmonixDsp.DelaySettings
// Kind: ScriptStruct; super: none
struct FDelaySettings
{
public:
    std::uint8_t IsEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TimeSyncOption; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float TimeSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Tempo; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DryGain; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WetGain; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float FeedbackGain; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EQEnabled; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EQType; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001A
    float EQFreq; // 0x001C (Size: 0x4, Type: FloatProperty)
    float EQQ; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LfoEnabled; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LfoTimeSyncOption; // 0x0025 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0026
    float LfoRate; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float LfoDepth; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t StereoType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0031
    float PanLeft; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float PanRight; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDelaySettings, IsEnabled) == 0, "Offset mismatch for FDelaySettings::IsEnabled");
static_assert(offsetof(FDelaySettings, TimeSyncOption) == 1, "Offset mismatch for FDelaySettings::TimeSyncOption");
static_assert(offsetof(FDelaySettings, TimeSeconds) == 4, "Offset mismatch for FDelaySettings::TimeSeconds");
static_assert(offsetof(FDelaySettings, Tempo) == 8, "Offset mismatch for FDelaySettings::Tempo");
static_assert(offsetof(FDelaySettings, DryGain) == 12, "Offset mismatch for FDelaySettings::DryGain");
static_assert(offsetof(FDelaySettings, WetGain) == 16, "Offset mismatch for FDelaySettings::WetGain");
static_assert(offsetof(FDelaySettings, FeedbackGain) == 20, "Offset mismatch for FDelaySettings::FeedbackGain");
static_assert(offsetof(FDelaySettings, EQEnabled) == 24, "Offset mismatch for FDelaySettings::EQEnabled");
static_assert(offsetof(FDelaySettings, EQType) == 25, "Offset mismatch for FDelaySettings::EQType");
static_assert(offsetof(FDelaySettings, EQFreq) == 28, "Offset mismatch for FDelaySettings::EQFreq");
static_assert(offsetof(FDelaySettings, EQQ) == 32, "Offset mismatch for FDelaySettings::EQQ");
static_assert(offsetof(FDelaySettings, LfoEnabled) == 36, "Offset mismatch for FDelaySettings::LfoEnabled");
static_assert(offsetof(FDelaySettings, LfoTimeSyncOption) == 37, "Offset mismatch for FDelaySettings::LfoTimeSyncOption");
static_assert(offsetof(FDelaySettings, LfoRate) == 40, "Offset mismatch for FDelaySettings::LfoRate");
static_assert(offsetof(FDelaySettings, LfoDepth) == 44, "Offset mismatch for FDelaySettings::LfoDepth");
static_assert(offsetof(FDelaySettings, StereoType) == 48, "Offset mismatch for FDelaySettings::StereoType");
static_assert(offsetof(FDelaySettings, PanLeft) == 52, "Offset mismatch for FDelaySettings::PanLeft");
static_assert(offsetof(FDelaySettings, PanRight) == 56, "Offset mismatch for FDelaySettings::PanRight");

// /Script/HarmonixDsp.DistortionFilterSettings
// Kind: ScriptStruct; super: none
struct FDistortionFilterSettings
{
public:
    std::uint8_t FilterPreClip; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Filter[0x18]; // 0x0004 (Size: 0x18, Type: StructProperty)
    std::int32_t NumPasses; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDistortionFilterSettings, FilterPreClip) == 0, "Offset mismatch for FDistortionFilterSettings::FilterPreClip");
static_assert(offsetof(FDistortionFilterSettings, Filter) == 4, "Offset mismatch for FDistortionFilterSettings::Filter");
static_assert(offsetof(FDistortionFilterSettings, NumPasses) == 28, "Offset mismatch for FDistortionFilterSettings::NumPasses");

// /Script/HarmonixDsp.DistortionSettingsV1
// Kind: ScriptStruct; super: none
struct FDistortionSettingsV1
{
public:
    std::uint8_t IsEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float InputGainDb; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float OutputGainDb; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DCAdjust; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t Oversample; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0015
    std::uint8_t Filters[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDistortionSettingsV1, IsEnabled) == 0, "Offset mismatch for FDistortionSettingsV1::IsEnabled");
static_assert(offsetof(FDistortionSettingsV1, InputGainDb) == 4, "Offset mismatch for FDistortionSettingsV1::InputGainDb");
static_assert(offsetof(FDistortionSettingsV1, OutputGainDb) == 8, "Offset mismatch for FDistortionSettingsV1::OutputGainDb");
static_assert(offsetof(FDistortionSettingsV1, DCAdjust) == 12, "Offset mismatch for FDistortionSettingsV1::DCAdjust");
static_assert(offsetof(FDistortionSettingsV1, Type) == 16, "Offset mismatch for FDistortionSettingsV1::Type");
static_assert(offsetof(FDistortionSettingsV1, Oversample) == 20, "Offset mismatch for FDistortionSettingsV1::Oversample");
static_assert(offsetof(FDistortionSettingsV1, Filters) == 24, "Offset mismatch for FDistortionSettingsV1::Filters");

// /Script/HarmonixDsp.DistortionSettingsV2
// Kind: ScriptStruct; super: none
struct FDistortionSettingsV2
{
public:
    std::uint8_t IsEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float InputGainDb; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float OutputGainDb; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DryGain; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WetGain; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float DCAdjust; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Type; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    std::uint8_t Oversample; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x001D
    std::uint8_t Filters[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDistortionSettingsV2, IsEnabled) == 0, "Offset mismatch for FDistortionSettingsV2::IsEnabled");
static_assert(offsetof(FDistortionSettingsV2, InputGainDb) == 4, "Offset mismatch for FDistortionSettingsV2::InputGainDb");
static_assert(offsetof(FDistortionSettingsV2, OutputGainDb) == 8, "Offset mismatch for FDistortionSettingsV2::OutputGainDb");
static_assert(offsetof(FDistortionSettingsV2, DryGain) == 12, "Offset mismatch for FDistortionSettingsV2::DryGain");
static_assert(offsetof(FDistortionSettingsV2, WetGain) == 16, "Offset mismatch for FDistortionSettingsV2::WetGain");
static_assert(offsetof(FDistortionSettingsV2, DCAdjust) == 20, "Offset mismatch for FDistortionSettingsV2::DCAdjust");
static_assert(offsetof(FDistortionSettingsV2, Type) == 24, "Offset mismatch for FDistortionSettingsV2::Type");
static_assert(offsetof(FDistortionSettingsV2, Oversample) == 28, "Offset mismatch for FDistortionSettingsV2::Oversample");
static_assert(offsetof(FDistortionSettingsV2, Filters) == 32, "Offset mismatch for FDistortionSettingsV2::Filters");

// /Script/HarmonixDsp.FusionPatchData
// Kind: ScriptStruct; super: none
struct FFusionPatchData
{
public:
    TArray<void*> Keyzones; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Settings[0x588]; // 0x0010 (Size: 0x588, Type: StructProperty)
    TArray<void*> Presets; // 0x0598 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFusionPatchData, Keyzones) == 0, "Offset mismatch for FFusionPatchData::Keyzones");
static_assert(offsetof(FFusionPatchData, Settings) == 16, "Offset mismatch for FFusionPatchData::Settings");
static_assert(offsetof(FFusionPatchData, Presets) == 1432, "Offset mismatch for FFusionPatchData::Presets");

// /Script/HarmonixDsp.FusionPatchSettings
// Kind: ScriptStruct; super: none
struct FFusionPatchSettings
{
public:
    float VolumeDb; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PannerDetails[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    float DownPitchBendCents; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float UpPitchBendCents; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float FineTuneCents; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float StartPointOffsetMs; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxVoices; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t KeyzoneSelectMode; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    std::uint8_t Portamento[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Filter[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Adsr[0x240]; // 0x0048 (Size: 0x240, Type: StructProperty)
    std::uint8_t LFO[0x30]; // 0x0288 (Size: 0x30, Type: StructProperty)
    std::uint8_t Randomizer[0x18]; // 0x02B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t VelocityModulator[0x18]; // 0x02D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Adsrs[0x240]; // 0x02E8 (Size: 0x240, Type: StructProperty)
    std::uint8_t Lfos[0x30]; // 0x0528 (Size: 0x30, Type: StructProperty)
    std::uint8_t Randomizers[0x18]; // 0x0558 (Size: 0x18, Type: StructProperty)
    std::uint8_t VelocityModulators[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFusionPatchSettings, VolumeDb) == 0, "Offset mismatch for FFusionPatchSettings::VolumeDb");
static_assert(offsetof(FFusionPatchSettings, PannerDetails) == 4, "Offset mismatch for FFusionPatchSettings::PannerDetails");
static_assert(offsetof(FFusionPatchSettings, DownPitchBendCents) == 16, "Offset mismatch for FFusionPatchSettings::DownPitchBendCents");
static_assert(offsetof(FFusionPatchSettings, UpPitchBendCents) == 20, "Offset mismatch for FFusionPatchSettings::UpPitchBendCents");
static_assert(offsetof(FFusionPatchSettings, FineTuneCents) == 24, "Offset mismatch for FFusionPatchSettings::FineTuneCents");
static_assert(offsetof(FFusionPatchSettings, StartPointOffsetMs) == 28, "Offset mismatch for FFusionPatchSettings::StartPointOffsetMs");
static_assert(offsetof(FFusionPatchSettings, MaxVoices) == 32, "Offset mismatch for FFusionPatchSettings::MaxVoices");
static_assert(offsetof(FFusionPatchSettings, KeyzoneSelectMode) == 36, "Offset mismatch for FFusionPatchSettings::KeyzoneSelectMode");
static_assert(offsetof(FFusionPatchSettings, Portamento) == 40, "Offset mismatch for FFusionPatchSettings::Portamento");
static_assert(offsetof(FFusionPatchSettings, Filter) == 48, "Offset mismatch for FFusionPatchSettings::Filter");
static_assert(offsetof(FFusionPatchSettings, Adsr) == 72, "Offset mismatch for FFusionPatchSettings::Adsr");
static_assert(offsetof(FFusionPatchSettings, LFO) == 648, "Offset mismatch for FFusionPatchSettings::LFO");
static_assert(offsetof(FFusionPatchSettings, Randomizer) == 696, "Offset mismatch for FFusionPatchSettings::Randomizer");
static_assert(offsetof(FFusionPatchSettings, VelocityModulator) == 720, "Offset mismatch for FFusionPatchSettings::VelocityModulator");
static_assert(offsetof(FFusionPatchSettings, Adsrs) == 744, "Offset mismatch for FFusionPatchSettings::Adsrs");
static_assert(offsetof(FFusionPatchSettings, Lfos) == 1320, "Offset mismatch for FFusionPatchSettings::Lfos");
static_assert(offsetof(FFusionPatchSettings, Randomizers) == 1368, "Offset mismatch for FFusionPatchSettings::Randomizers");
static_assert(offsetof(FFusionPatchSettings, VelocityModulators) == 1392, "Offset mismatch for FFusionPatchSettings::VelocityModulators");

// /Script/HarmonixDsp.FusionVoiceConfig
// Kind: ScriptStruct; super: none
struct FFusionVoiceConfig
{
public:
    std::uint32_t NumTotalVoices; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t SoftVoiceLimit; // 0x0004 (Size: 0x4, Type: UInt32Property)
    float FormantDbCorrectionPerHalfStepUp; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float FormantDbCorrectionPerHalfStepDown; // 0x000C (Size: 0x4, Type: FloatProperty)
    float FormantDbCorrectionMaxUp; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float FormantDbCorrectionMaxDown; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFusionVoiceConfig, NumTotalVoices) == 0, "Offset mismatch for FFusionVoiceConfig::NumTotalVoices");
static_assert(offsetof(FFusionVoiceConfig, SoftVoiceLimit) == 4, "Offset mismatch for FFusionVoiceConfig::SoftVoiceLimit");
static_assert(offsetof(FFusionVoiceConfig, FormantDbCorrectionPerHalfStepUp) == 8, "Offset mismatch for FFusionVoiceConfig::FormantDbCorrectionPerHalfStepUp");
static_assert(offsetof(FFusionVoiceConfig, FormantDbCorrectionPerHalfStepDown) == 12, "Offset mismatch for FFusionVoiceConfig::FormantDbCorrectionPerHalfStepDown");
static_assert(offsetof(FFusionVoiceConfig, FormantDbCorrectionMaxUp) == 16, "Offset mismatch for FFusionVoiceConfig::FormantDbCorrectionMaxUp");
static_assert(offsetof(FFusionVoiceConfig, FormantDbCorrectionMaxDown) == 20, "Offset mismatch for FFusionVoiceConfig::FormantDbCorrectionMaxDown");

// /Script/HarmonixDsp.HarmonixAudioAnalyzerOutputSettings
// Kind: ScriptStruct; super: none
struct FHarmonixAudioAnalyzerOutputSettings
{
public:
    float RiseMs; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FallMs; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxDecibels; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float RangeDecibels; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHarmonixAudioAnalyzerOutputSettings, RiseMs) == 0, "Offset mismatch for FHarmonixAudioAnalyzerOutputSettings::RiseMs");
static_assert(offsetof(FHarmonixAudioAnalyzerOutputSettings, FallMs) == 4, "Offset mismatch for FHarmonixAudioAnalyzerOutputSettings::FallMs");
static_assert(offsetof(FHarmonixAudioAnalyzerOutputSettings, MaxDecibels) == 8, "Offset mismatch for FHarmonixAudioAnalyzerOutputSettings::MaxDecibels");
static_assert(offsetof(FHarmonixAudioAnalyzerOutputSettings, RangeDecibels) == 12, "Offset mismatch for FHarmonixAudioAnalyzerOutputSettings::RangeDecibels");

// /Script/HarmonixDsp.HarmonixFFTAnalyzerResults
// Kind: ScriptStruct; super: none
struct FHarmonixFFTAnalyzerResults
{
public:
    TArray<void*> Spectrum; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FHarmonixFFTAnalyzerResults, Spectrum) == 0, "Offset mismatch for FHarmonixFFTAnalyzerResults::Spectrum");

// /Script/HarmonixDsp.HarmonixFFTAnalyzerSettings
// Kind: ScriptStruct; super: none
struct FHarmonixFFTAnalyzerSettings
{
public:
    std::int32_t FFTSize; // 0x0000 (Size: 0x4, Type: IntProperty)
    float MinFrequencyHz; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxFrequencyHz; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MelScaleBinning; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::int32_t NumResultBins; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputSettings[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHarmonixFFTAnalyzerSettings, FFTSize) == 0, "Offset mismatch for FHarmonixFFTAnalyzerSettings::FFTSize");
static_assert(offsetof(FHarmonixFFTAnalyzerSettings, MinFrequencyHz) == 4, "Offset mismatch for FHarmonixFFTAnalyzerSettings::MinFrequencyHz");
static_assert(offsetof(FHarmonixFFTAnalyzerSettings, MaxFrequencyHz) == 8, "Offset mismatch for FHarmonixFFTAnalyzerSettings::MaxFrequencyHz");
static_assert(offsetof(FHarmonixFFTAnalyzerSettings, MelScaleBinning) == 12, "Offset mismatch for FHarmonixFFTAnalyzerSettings::MelScaleBinning");
static_assert(offsetof(FHarmonixFFTAnalyzerSettings, NumResultBins) == 16, "Offset mismatch for FHarmonixFFTAnalyzerSettings::NumResultBins");
static_assert(offsetof(FHarmonixFFTAnalyzerSettings, OutputSettings) == 20, "Offset mismatch for FHarmonixFFTAnalyzerSettings::OutputSettings");

// /Script/HarmonixDsp.KeyzoneSettings
// Kind: ScriptStruct; super: none
struct FKeyzoneSettings
{
public:
    void* SoundWave; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0008
    std::int8_t RootNote; // 0x0018 (Size: 0x1, Type: Int8Property)
    std::int8_t MinNote; // 0x0019 (Size: 0x1, Type: Int8Property)
    std::int8_t MaxNote; // 0x001A (Size: 0x1, Type: Int8Property)
    std::int8_t MinVelocity; // 0x001B (Size: 0x1, Type: Int8Property)
    std::int8_t MaxVelocity; // 0x001C (Size: 0x1, Type: Int8Property)
    std::uint8_t SampleIndex; // 0x001D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Priority; // 0x001E (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x001F
    std::uint8_t Pan[0xC]; // 0x0020 (Size: 0xC, Type: StructProperty)
    std::uint8_t bOverrideAdsr; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x002D
    std::uint8_t Adsr[0x120]; // 0x0030 (Size: 0x120, Type: StructProperty)
    float FineTuneCents; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float Gain; // 0x0154 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUnpitched; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVelocityToGain; // 0x0159 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x015A
    std::uint8_t TimeStretchConfig[0x20]; // 0x0160 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsNoteOffZone; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0181
    float RandomWeight; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::int32_t SampleStartOffset; // 0x0188 (Size: 0x4, Type: IntProperty)
    std::int32_t SampleEndOffset; // 0x018C (Size: 0x4, Type: IntProperty)
    TArray<void*> TrackMap; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UseSingletonVoicePool; // 0x01A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FKeyzoneSettings, SoundWave) == 0, "Offset mismatch for FKeyzoneSettings::SoundWave");
static_assert(offsetof(FKeyzoneSettings, RootNote) == 24, "Offset mismatch for FKeyzoneSettings::RootNote");
static_assert(offsetof(FKeyzoneSettings, MinNote) == 25, "Offset mismatch for FKeyzoneSettings::MinNote");
static_assert(offsetof(FKeyzoneSettings, MaxNote) == 26, "Offset mismatch for FKeyzoneSettings::MaxNote");
static_assert(offsetof(FKeyzoneSettings, MinVelocity) == 27, "Offset mismatch for FKeyzoneSettings::MinVelocity");
static_assert(offsetof(FKeyzoneSettings, MaxVelocity) == 28, "Offset mismatch for FKeyzoneSettings::MaxVelocity");
static_assert(offsetof(FKeyzoneSettings, SampleIndex) == 29, "Offset mismatch for FKeyzoneSettings::SampleIndex");
static_assert(offsetof(FKeyzoneSettings, Priority) == 30, "Offset mismatch for FKeyzoneSettings::Priority");
static_assert(offsetof(FKeyzoneSettings, Pan) == 32, "Offset mismatch for FKeyzoneSettings::Pan");
static_assert(offsetof(FKeyzoneSettings, bOverrideAdsr) == 44, "Offset mismatch for FKeyzoneSettings::bOverrideAdsr");
static_assert(offsetof(FKeyzoneSettings, Adsr) == 48, "Offset mismatch for FKeyzoneSettings::Adsr");
static_assert(offsetof(FKeyzoneSettings, FineTuneCents) == 336, "Offset mismatch for FKeyzoneSettings::FineTuneCents");
static_assert(offsetof(FKeyzoneSettings, Gain) == 340, "Offset mismatch for FKeyzoneSettings::Gain");
static_assert(offsetof(FKeyzoneSettings, bUnpitched) == 344, "Offset mismatch for FKeyzoneSettings::bUnpitched");
static_assert(offsetof(FKeyzoneSettings, bVelocityToGain) == 345, "Offset mismatch for FKeyzoneSettings::bVelocityToGain");
static_assert(offsetof(FKeyzoneSettings, TimeStretchConfig) == 352, "Offset mismatch for FKeyzoneSettings::TimeStretchConfig");
static_assert(offsetof(FKeyzoneSettings, bIsNoteOffZone) == 384, "Offset mismatch for FKeyzoneSettings::bIsNoteOffZone");
static_assert(offsetof(FKeyzoneSettings, RandomWeight) == 388, "Offset mismatch for FKeyzoneSettings::RandomWeight");
static_assert(offsetof(FKeyzoneSettings, SampleStartOffset) == 392, "Offset mismatch for FKeyzoneSettings::SampleStartOffset");
static_assert(offsetof(FKeyzoneSettings, SampleEndOffset) == 396, "Offset mismatch for FKeyzoneSettings::SampleEndOffset");
static_assert(offsetof(FKeyzoneSettings, TrackMap) == 400, "Offset mismatch for FKeyzoneSettings::TrackMap");
static_assert(offsetof(FKeyzoneSettings, UseSingletonVoicePool) == 416, "Offset mismatch for FKeyzoneSettings::UseSingletonVoicePool");

// /Script/HarmonixDsp.LfoSettings
// Kind: ScriptStruct; super: none
struct FLfoSettings
{
public:
    std::uint8_t Target; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t IsEnabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Shape; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShouldRetrigger; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BeatSync; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float Freq; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Depth; // 0x000C (Size: 0x4, Type: FloatProperty)
    float InitialPhase; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TempoBPM; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLfoSettings, Target) == 0, "Offset mismatch for FLfoSettings::Target");
static_assert(offsetof(FLfoSettings, IsEnabled) == 1, "Offset mismatch for FLfoSettings::IsEnabled");
static_assert(offsetof(FLfoSettings, Shape) == 2, "Offset mismatch for FLfoSettings::Shape");
static_assert(offsetof(FLfoSettings, ShouldRetrigger) == 3, "Offset mismatch for FLfoSettings::ShouldRetrigger");
static_assert(offsetof(FLfoSettings, BeatSync) == 4, "Offset mismatch for FLfoSettings::BeatSync");
static_assert(offsetof(FLfoSettings, Freq) == 8, "Offset mismatch for FLfoSettings::Freq");
static_assert(offsetof(FLfoSettings, Depth) == 12, "Offset mismatch for FLfoSettings::Depth");
static_assert(offsetof(FLfoSettings, InitialPhase) == 16, "Offset mismatch for FLfoSettings::InitialPhase");
static_assert(offsetof(FLfoSettings, TempoBPM) == 20, "Offset mismatch for FLfoSettings::TempoBPM");

// /Script/HarmonixDsp.LfoSettingsArray
// Kind: ScriptStruct; super: none
struct FLfoSettingsArray
{
public:
    std::uint8_t Array[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLfoSettingsArray, Array) == 0, "Offset mismatch for FLfoSettingsArray::Array");

// /Script/HarmonixDsp.ModulatorSettings
// Kind: ScriptStruct; super: none
struct FModulatorSettings
{
public:
    std::uint8_t Target; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Range; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Depth; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FModulatorSettings, Target) == 0, "Offset mismatch for FModulatorSettings::Target");
static_assert(offsetof(FModulatorSettings, Range) == 4, "Offset mismatch for FModulatorSettings::Range");
static_assert(offsetof(FModulatorSettings, Depth) == 8, "Offset mismatch for FModulatorSettings::Depth");

// /Script/HarmonixDsp.ModulatorSettingsArray
// Kind: ScriptStruct; super: none
struct FModulatorSettingsArray
{
public:
    std::uint8_t Array[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FModulatorSettingsArray, Array) == 0, "Offset mismatch for FModulatorSettingsArray::Array");

// /Script/HarmonixDsp.PannerDetails
// Kind: ScriptStruct; super: none
struct FPannerDetails
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixDsp.PitchShifterName
// Kind: ScriptStruct; super: none
struct FPitchShifterName
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPitchShifterName, Name) == 0, "Offset mismatch for FPitchShifterName::Name");

// /Script/HarmonixDsp.PitchShifterNameRedirect
// Kind: ScriptStruct; super: none
struct FPitchShifterNameRedirect
{
public:
    std::uint8_t OldName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName NewName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPitchShifterNameRedirect, OldName) == 0, "Offset mismatch for FPitchShifterNameRedirect::OldName");
static_assert(offsetof(FPitchShifterNameRedirect, NewName) == 4, "Offset mismatch for FPitchShifterNameRedirect::NewName");

// /Script/HarmonixDsp.PortamentoSettings
// Kind: ScriptStruct; super: none
struct FPortamentoSettings
{
public:
    std::uint8_t IsEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Mode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float Seconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPortamentoSettings, IsEnabled) == 0, "Offset mismatch for FPortamentoSettings::IsEnabled");
static_assert(offsetof(FPortamentoSettings, Mode) == 1, "Offset mismatch for FPortamentoSettings::Mode");
static_assert(offsetof(FPortamentoSettings, Seconds) == 4, "Offset mismatch for FPortamentoSettings::Seconds");

// /Script/HarmonixDsp.StreamingChannelParams
// Kind: ScriptStruct; super: none
struct FStreamingChannelParams
{
public:
    std::int32_t StreamIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Gain; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pan[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStreamingChannelParams, StreamIndex) == 0, "Offset mismatch for FStreamingChannelParams::StreamIndex");
static_assert(offsetof(FStreamingChannelParams, Gain) == 4, "Offset mismatch for FStreamingChannelParams::Gain");
static_assert(offsetof(FStreamingChannelParams, Pan) == 8, "Offset mismatch for FStreamingChannelParams::Pan");

// /Script/HarmonixDsp.StreamingChannelParamsArray
// Kind: ScriptStruct; super: none
struct FStreamingChannelParamsArray
{
public:
    TArray<void*> ChannelParams; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStreamingChannelParamsArray, ChannelParams) == 0, "Offset mismatch for FStreamingChannelParamsArray::ChannelParams");

// /Script/HarmonixDsp.StreamingTrackParams
// Kind: ScriptStruct; super: none
struct FStreamingTrackParams
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixDsp.TimeStretchConfig
// Kind: ScriptStruct; super: none
struct FTimeStretchConfig
{
public:
    std::uint8_t bMaintainTime; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t PitchShifter[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    TMap<void*, void*> PitchShifterOptions; // 0x0008 (Size: 0x10, Type: MapProperty)
    std::uint8_t bSyncTempo; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    float OriginalTempo; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTimeStretchConfig, bMaintainTime) == 0, "Offset mismatch for FTimeStretchConfig::bMaintainTime");
static_assert(offsetof(FTimeStretchConfig, PitchShifter) == 4, "Offset mismatch for FTimeStretchConfig::PitchShifter");
static_assert(offsetof(FTimeStretchConfig, PitchShifterOptions) == 8, "Offset mismatch for FTimeStretchConfig::PitchShifterOptions");
static_assert(offsetof(FTimeStretchConfig, bSyncTempo) == 24, "Offset mismatch for FTimeStretchConfig::bSyncTempo");
static_assert(offsetof(FTimeStretchConfig, OriginalTempo) == 28, "Offset mismatch for FTimeStretchConfig::OriginalTempo");

// /Script/HarmonixDsp.TrackChannelInfo
// Kind: ScriptStruct; super: none
struct FTrackChannelInfo
{
public:
    std::int32_t RealTrackIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName Routing; // 0x0008 (Size: 0x8, Type: NameProperty)
    TArray<void*> Channels; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PresetChannels; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FTrackChannelInfo, RealTrackIndex) == 0, "Offset mismatch for FTrackChannelInfo::RealTrackIndex");
static_assert(offsetof(FTrackChannelInfo, Name) == 4, "Offset mismatch for FTrackChannelInfo::Name");
static_assert(offsetof(FTrackChannelInfo, Routing) == 8, "Offset mismatch for FTrackChannelInfo::Routing");
static_assert(offsetof(FTrackChannelInfo, Channels) == 16, "Offset mismatch for FTrackChannelInfo::Channels");
static_assert(offsetof(FTrackChannelInfo, PresetChannels) == 32, "Offset mismatch for FTrackChannelInfo::PresetChannels");

// /Script/HarmonixDsp.TypedParameter
// Kind: ScriptStruct; super: none
struct FTypedParameter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixDsp.VocoderBand
// Kind: ScriptStruct; super: none
struct FVocoderBand
{
public:
    float Gain; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Solo; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVocoderBand, Gain) == 0, "Offset mismatch for FVocoderBand::Gain");
static_assert(offsetof(FVocoderBand, Solo) == 4, "Offset mismatch for FVocoderBand::Solo");

// /Script/HarmonixDsp.VocoderBandConfig
// Kind: ScriptStruct; super: none
struct FVocoderBandConfig
{
public:
    std::int32_t BandCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    float FrequencyRatio; // 0x0004 (Size: 0x4, Type: FloatProperty)
    FName Name; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FVocoderBandConfig, BandCount) == 0, "Offset mismatch for FVocoderBandConfig::BandCount");
static_assert(offsetof(FVocoderBandConfig, FrequencyRatio) == 4, "Offset mismatch for FVocoderBandConfig::FrequencyRatio");
static_assert(offsetof(FVocoderBandConfig, Name) == 8, "Offset mismatch for FVocoderBandConfig::Name");

// /Script/HarmonixDsp.VocoderSettings
// Kind: ScriptStruct; super: none
struct FVocoderSettings
{
public:
    std::uint8_t IsEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t ModulatorIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ChannelCount; // 0x0008 (Size: 0x4, Type: IntProperty)
    float SampleRate; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BandConfig; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Soloing; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0012
    std::int32_t FrameCount; // 0x0014 (Size: 0x4, Type: IntProperty)
    float CarrierGain; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ModulatorGain; // 0x001C (Size: 0x4, Type: FloatProperty)
    float CarrierThin; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ModulatorThin; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float Attack; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float Release; // 0x002C (Size: 0x4, Type: FloatProperty)
    float HighEmphasis; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float Wet; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float OutputGain; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x003C
    TArray<void*> Bands; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVocoderSettings, IsEnabled) == 0, "Offset mismatch for FVocoderSettings::IsEnabled");
static_assert(offsetof(FVocoderSettings, ModulatorIndex) == 4, "Offset mismatch for FVocoderSettings::ModulatorIndex");
static_assert(offsetof(FVocoderSettings, ChannelCount) == 8, "Offset mismatch for FVocoderSettings::ChannelCount");
static_assert(offsetof(FVocoderSettings, SampleRate) == 12, "Offset mismatch for FVocoderSettings::SampleRate");
static_assert(offsetof(FVocoderSettings, BandConfig) == 16, "Offset mismatch for FVocoderSettings::BandConfig");
static_assert(offsetof(FVocoderSettings, Soloing) == 17, "Offset mismatch for FVocoderSettings::Soloing");
static_assert(offsetof(FVocoderSettings, FrameCount) == 20, "Offset mismatch for FVocoderSettings::FrameCount");
static_assert(offsetof(FVocoderSettings, CarrierGain) == 24, "Offset mismatch for FVocoderSettings::CarrierGain");
static_assert(offsetof(FVocoderSettings, ModulatorGain) == 28, "Offset mismatch for FVocoderSettings::ModulatorGain");
static_assert(offsetof(FVocoderSettings, CarrierThin) == 32, "Offset mismatch for FVocoderSettings::CarrierThin");
static_assert(offsetof(FVocoderSettings, ModulatorThin) == 36, "Offset mismatch for FVocoderSettings::ModulatorThin");
static_assert(offsetof(FVocoderSettings, Attack) == 40, "Offset mismatch for FVocoderSettings::Attack");
static_assert(offsetof(FVocoderSettings, Release) == 44, "Offset mismatch for FVocoderSettings::Release");
static_assert(offsetof(FVocoderSettings, HighEmphasis) == 48, "Offset mismatch for FVocoderSettings::HighEmphasis");
static_assert(offsetof(FVocoderSettings, Wet) == 52, "Offset mismatch for FVocoderSettings::Wet");
static_assert(offsetof(FVocoderSettings, OutputGain) == 56, "Offset mismatch for FVocoderSettings::OutputGain");
static_assert(offsetof(FVocoderSettings, Bands) == 64, "Offset mismatch for FVocoderSettings::Bands");

// /Script/HarmonixDsp.FusionPatch
// Kind: Class; super: Object
class UFusionPatch
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t FusionPatchData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFusionPatch, FusionPatchData) == 48, "Offset mismatch for UFusionPatch::FusionPatchData");

// /Script/HarmonixDsp.FusionSamplerConfig
// Kind: Class; super: HarmonixDeveloperSettings
class UFusionSamplerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DefaultVoicePoolConfig[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> VoicePoolConfigs; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFusionSamplerConfig, DefaultVoicePoolConfig) == 40, "Offset mismatch for UFusionSamplerConfig::DefaultVoicePoolConfig");
static_assert(offsetof(UFusionSamplerConfig, VoicePoolConfigs) == 64, "Offset mismatch for UFusionSamplerConfig::VoicePoolConfigs");

// /Script/HarmonixDsp.SmbPitchShifterConfig
// Kind: Class; super: StretcherAndPitchShifterConfig
class USmbPitchShifterConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAllowPoolGrowthInEditor; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint32_t DefaultAllocatedStretchers; // 0x002C (Size: 0x4, Type: UInt32Property)
    std::uint32_t SwitchAllocatedStretchers; // 0x0030 (Size: 0x4, Type: UInt32Property)
    std::uint32_t PS4AllocatedStretchers; // 0x0034 (Size: 0x4, Type: UInt32Property)
    std::uint32_t PS5AllocatedStretchers; // 0x0038 (Size: 0x4, Type: UInt32Property)
    std::uint32_t XboxOneAllocatedStretchers; // 0x003C (Size: 0x4, Type: UInt32Property)
    std::uint32_t XSXAllocatedStretchers; // 0x0040 (Size: 0x4, Type: UInt32Property)
    std::uint32_t AndroidAllocatedStretchers; // 0x0044 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(USmbPitchShifterConfig, bAllowPoolGrowthInEditor) == 40, "Offset mismatch for USmbPitchShifterConfig::bAllowPoolGrowthInEditor");
static_assert(offsetof(USmbPitchShifterConfig, DefaultAllocatedStretchers) == 44, "Offset mismatch for USmbPitchShifterConfig::DefaultAllocatedStretchers");
static_assert(offsetof(USmbPitchShifterConfig, SwitchAllocatedStretchers) == 48, "Offset mismatch for USmbPitchShifterConfig::SwitchAllocatedStretchers");
static_assert(offsetof(USmbPitchShifterConfig, PS4AllocatedStretchers) == 52, "Offset mismatch for USmbPitchShifterConfig::PS4AllocatedStretchers");
static_assert(offsetof(USmbPitchShifterConfig, PS5AllocatedStretchers) == 56, "Offset mismatch for USmbPitchShifterConfig::PS5AllocatedStretchers");
static_assert(offsetof(USmbPitchShifterConfig, XboxOneAllocatedStretchers) == 60, "Offset mismatch for USmbPitchShifterConfig::XboxOneAllocatedStretchers");
static_assert(offsetof(USmbPitchShifterConfig, XSXAllocatedStretchers) == 64, "Offset mismatch for USmbPitchShifterConfig::XSXAllocatedStretchers");
static_assert(offsetof(USmbPitchShifterConfig, AndroidAllocatedStretchers) == 68, "Offset mismatch for USmbPitchShifterConfig::AndroidAllocatedStretchers");

// /Script/HarmonixDsp.StretcherAndPitchShifterConfig
// Kind: Class; super: Object
class UStretcherAndPitchShifterConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixDsp.StretcherAndPitchShifterFactoryConfig
// Kind: Class; super: HarmonixDeveloperSettings
class UStretcherAndPitchShifterFactoryConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> FactoryPriority; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultFactory[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    TArray<void*> FactoryNameRedirects; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStretcherAndPitchShifterFactoryConfig, FactoryPriority) == 40, "Offset mismatch for UStretcherAndPitchShifterFactoryConfig::FactoryPriority");
static_assert(offsetof(UStretcherAndPitchShifterFactoryConfig, DefaultFactory) == 56, "Offset mismatch for UStretcherAndPitchShifterFactoryConfig::DefaultFactory");
static_assert(offsetof(UStretcherAndPitchShifterFactoryConfig, FactoryNameRedirects) == 64, "Offset mismatch for UStretcherAndPitchShifterFactoryConfig::FactoryNameRedirects");
