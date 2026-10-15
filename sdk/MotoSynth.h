/**
 * decamp dumper generated SDK
 * Package: /Script/MotoSynth
 */
#pragma once
#include "Basic.h"

// /Script/MotoSynth.GrainTableEntry
// Kind: ScriptStruct; super: none
struct FGrainTableEntry
{
public:
    std::int32_t SampleIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    float RPM; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGrainTableEntry, SampleIndex) == 0, "Offset mismatch for FGrainTableEntry::SampleIndex");
static_assert(offsetof(FGrainTableEntry, RPM) == 4, "Offset mismatch for FGrainTableEntry::RPM");

// /Script/MotoSynth.MotoSynthRuntimeSettings
// Kind: ScriptStruct; super: none
struct FMotoSynthRuntimeSettings
{
public:
    std::uint8_t bSynthToneEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t SynthToneVolumeRange[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t SynthToneFilterFrequencyRange[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t bSynthToneEnvelopeEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t SynthToneAttackTimeMsecRange[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t SynthToneAttackCurveRange[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t SynthToneDecayTimeMsecRange[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t SynthToneDecayCurveRange[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::int32_t SynthOctaveShift; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t bNoiseEnabled; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0075
    std::uint8_t NoiseVolumeRange[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t bNoiseEnvelopeEnabled; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0089
    std::uint8_t NoiseLPFRange[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t NoiseAttackTimeMsecRange[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NoiseAttackCurveRange[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NoiseDecayTimeMsecRange[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NoiseDecayCurveRange[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bGranularEngineEnabled; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00E1
    float GranularEngineVolume; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float GranularEnginePitchScale; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSamplesToCrossfadeBetweenGrains; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t NumGrainTableEntriesPerGrain; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t GrainTableRandomOffsetForConstantRPMs; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::int32_t GrainCrossfadeSamplesForConstantRPMs; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x00FC
    void* AccelerationSource; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* DecelerationSource; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bStereoWidenerEnabled; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0111
    float StereoDelayMsec; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float StereoFeedback; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float StereoWidenerWetlevel; // 0x011C (Size: 0x4, Type: FloatProperty)
    float StereoWidenerDryLevel; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float StereoWidenerDelayRatio; // 0x0124 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStereoWidenerFilterEnabled; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0129
    float StereoWidenerFilterFrequency; // 0x012C (Size: 0x4, Type: FloatProperty)
    float StereoWidenerFilterQ; // 0x0130 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMotoSynthRuntimeSettings, bSynthToneEnabled) == 0, "Offset mismatch for FMotoSynthRuntimeSettings::bSynthToneEnabled");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneVolumeRange) == 8, "Offset mismatch for FMotoSynthRuntimeSettings::SynthToneVolumeRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneFilterFrequencyRange) == 24, "Offset mismatch for FMotoSynthRuntimeSettings::SynthToneFilterFrequencyRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, bSynthToneEnvelopeEnabled) == 40, "Offset mismatch for FMotoSynthRuntimeSettings::bSynthToneEnvelopeEnabled");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneAttackTimeMsecRange) == 48, "Offset mismatch for FMotoSynthRuntimeSettings::SynthToneAttackTimeMsecRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneAttackCurveRange) == 64, "Offset mismatch for FMotoSynthRuntimeSettings::SynthToneAttackCurveRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneDecayTimeMsecRange) == 80, "Offset mismatch for FMotoSynthRuntimeSettings::SynthToneDecayTimeMsecRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneDecayCurveRange) == 96, "Offset mismatch for FMotoSynthRuntimeSettings::SynthToneDecayCurveRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthOctaveShift) == 112, "Offset mismatch for FMotoSynthRuntimeSettings::SynthOctaveShift");
static_assert(offsetof(FMotoSynthRuntimeSettings, bNoiseEnabled) == 116, "Offset mismatch for FMotoSynthRuntimeSettings::bNoiseEnabled");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseVolumeRange) == 120, "Offset mismatch for FMotoSynthRuntimeSettings::NoiseVolumeRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, bNoiseEnvelopeEnabled) == 136, "Offset mismatch for FMotoSynthRuntimeSettings::bNoiseEnvelopeEnabled");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseLPFRange) == 144, "Offset mismatch for FMotoSynthRuntimeSettings::NoiseLPFRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseAttackTimeMsecRange) == 160, "Offset mismatch for FMotoSynthRuntimeSettings::NoiseAttackTimeMsecRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseAttackCurveRange) == 176, "Offset mismatch for FMotoSynthRuntimeSettings::NoiseAttackCurveRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseDecayTimeMsecRange) == 192, "Offset mismatch for FMotoSynthRuntimeSettings::NoiseDecayTimeMsecRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseDecayCurveRange) == 208, "Offset mismatch for FMotoSynthRuntimeSettings::NoiseDecayCurveRange");
static_assert(offsetof(FMotoSynthRuntimeSettings, bGranularEngineEnabled) == 224, "Offset mismatch for FMotoSynthRuntimeSettings::bGranularEngineEnabled");
static_assert(offsetof(FMotoSynthRuntimeSettings, GranularEngineVolume) == 228, "Offset mismatch for FMotoSynthRuntimeSettings::GranularEngineVolume");
static_assert(offsetof(FMotoSynthRuntimeSettings, GranularEnginePitchScale) == 232, "Offset mismatch for FMotoSynthRuntimeSettings::GranularEnginePitchScale");
static_assert(offsetof(FMotoSynthRuntimeSettings, NumSamplesToCrossfadeBetweenGrains) == 236, "Offset mismatch for FMotoSynthRuntimeSettings::NumSamplesToCrossfadeBetweenGrains");
static_assert(offsetof(FMotoSynthRuntimeSettings, NumGrainTableEntriesPerGrain) == 240, "Offset mismatch for FMotoSynthRuntimeSettings::NumGrainTableEntriesPerGrain");
static_assert(offsetof(FMotoSynthRuntimeSettings, GrainTableRandomOffsetForConstantRPMs) == 244, "Offset mismatch for FMotoSynthRuntimeSettings::GrainTableRandomOffsetForConstantRPMs");
static_assert(offsetof(FMotoSynthRuntimeSettings, GrainCrossfadeSamplesForConstantRPMs) == 248, "Offset mismatch for FMotoSynthRuntimeSettings::GrainCrossfadeSamplesForConstantRPMs");
static_assert(offsetof(FMotoSynthRuntimeSettings, AccelerationSource) == 256, "Offset mismatch for FMotoSynthRuntimeSettings::AccelerationSource");
static_assert(offsetof(FMotoSynthRuntimeSettings, DecelerationSource) == 264, "Offset mismatch for FMotoSynthRuntimeSettings::DecelerationSource");
static_assert(offsetof(FMotoSynthRuntimeSettings, bStereoWidenerEnabled) == 272, "Offset mismatch for FMotoSynthRuntimeSettings::bStereoWidenerEnabled");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoDelayMsec) == 276, "Offset mismatch for FMotoSynthRuntimeSettings::StereoDelayMsec");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoFeedback) == 280, "Offset mismatch for FMotoSynthRuntimeSettings::StereoFeedback");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerWetlevel) == 284, "Offset mismatch for FMotoSynthRuntimeSettings::StereoWidenerWetlevel");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerDryLevel) == 288, "Offset mismatch for FMotoSynthRuntimeSettings::StereoWidenerDryLevel");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerDelayRatio) == 292, "Offset mismatch for FMotoSynthRuntimeSettings::StereoWidenerDelayRatio");
static_assert(offsetof(FMotoSynthRuntimeSettings, bStereoWidenerFilterEnabled) == 296, "Offset mismatch for FMotoSynthRuntimeSettings::bStereoWidenerFilterEnabled");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerFilterFrequency) == 300, "Offset mismatch for FMotoSynthRuntimeSettings::StereoWidenerFilterFrequency");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerFilterQ) == 304, "Offset mismatch for FMotoSynthRuntimeSettings::StereoWidenerFilterQ");

// /Script/MotoSynth.MotoSynthPreset
// Kind: Class; super: Object
class UMotoSynthPreset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMotoSynthPreset, Settings) == 40, "Offset mismatch for UMotoSynthPreset::Settings");

// /Script/MotoSynth.MotoSynthSource
// Kind: Class; super: Object
class UMotoSynthSource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bConvertTo8Bit; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float DownSampleFactor; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t RpmCurve[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    TArray<void*> SourceData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourceDataPCM; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SourceSampleRate; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x009C
    TArray<void*> GrainTable; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMotoSynthSource, bConvertTo8Bit) == 40, "Offset mismatch for UMotoSynthSource::bConvertTo8Bit");
static_assert(offsetof(UMotoSynthSource, DownSampleFactor) == 44, "Offset mismatch for UMotoSynthSource::DownSampleFactor");
static_assert(offsetof(UMotoSynthSource, RpmCurve) == 48, "Offset mismatch for UMotoSynthSource::RpmCurve");
static_assert(offsetof(UMotoSynthSource, SourceData) == 120, "Offset mismatch for UMotoSynthSource::SourceData");
static_assert(offsetof(UMotoSynthSource, SourceDataPCM) == 136, "Offset mismatch for UMotoSynthSource::SourceDataPCM");
static_assert(offsetof(UMotoSynthSource, SourceSampleRate) == 152, "Offset mismatch for UMotoSynthSource::SourceSampleRate");
static_assert(offsetof(UMotoSynthSource, GrainTable) == 160, "Offset mismatch for UMotoSynthSource::GrainTable");

// /Script/MotoSynth.SynthComponentMoto
// Kind: Class; super: SynthComponent
class USynthComponentMoto
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    void* MotoSynthPreset; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    float RPM; // 0x0628 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USynthComponentMoto, MotoSynthPreset) == 1568, "Offset mismatch for USynthComponentMoto::MotoSynthPreset");
static_assert(offsetof(USynthComponentMoto, RPM) == 1576, "Offset mismatch for USynthComponentMoto::RPM");
