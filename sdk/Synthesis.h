/**
 * decamp dumper generated SDK
 * Package: /Script/Synthesis
 */
#pragma once
#include "Basic.h"

// /Script/Synthesis.DynamicsBandSettings
// Kind: ScriptStruct; super: none
struct FDynamicsBandSettings
{
public:
    float CrossoverTopFrequency; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AttackTimeMsec; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ReleaseTimeMsec; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ThresholdDb; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Ratio; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float KneeBandwidthDb; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float InputGainDb; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float OutputGainDb; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDynamicsBandSettings, CrossoverTopFrequency) == 0, "Offset mismatch for FDynamicsBandSettings::CrossoverTopFrequency");
static_assert(offsetof(FDynamicsBandSettings, AttackTimeMsec) == 4, "Offset mismatch for FDynamicsBandSettings::AttackTimeMsec");
static_assert(offsetof(FDynamicsBandSettings, ReleaseTimeMsec) == 8, "Offset mismatch for FDynamicsBandSettings::ReleaseTimeMsec");
static_assert(offsetof(FDynamicsBandSettings, ThresholdDb) == 12, "Offset mismatch for FDynamicsBandSettings::ThresholdDb");
static_assert(offsetof(FDynamicsBandSettings, Ratio) == 16, "Offset mismatch for FDynamicsBandSettings::Ratio");
static_assert(offsetof(FDynamicsBandSettings, KneeBandwidthDb) == 20, "Offset mismatch for FDynamicsBandSettings::KneeBandwidthDb");
static_assert(offsetof(FDynamicsBandSettings, InputGainDb) == 24, "Offset mismatch for FDynamicsBandSettings::InputGainDb");
static_assert(offsetof(FDynamicsBandSettings, OutputGainDb) == 28, "Offset mismatch for FDynamicsBandSettings::OutputGainDb");

// /Script/Synthesis.EpicSynth1Patch
// Kind: ScriptStruct; super: none
struct FEpicSynth1Patch
{
public:
    std::uint8_t PatchSource; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> PatchCables; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEpicSynth1Patch, PatchSource) == 0, "Offset mismatch for FEpicSynth1Patch::PatchSource");
static_assert(offsetof(FEpicSynth1Patch, PatchCables) == 8, "Offset mismatch for FEpicSynth1Patch::PatchCables");

// /Script/Synthesis.ModularSynthPreset
// Kind: ScriptStruct; super: TableRowBase
struct FModularSynthPreset
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnablePolyphony; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t Osc1Type; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x000D
    float Osc1Gain; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Osc1Octave; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Osc1Semitones; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Osc1Cents; // 0x001C (Size: 0x4, Type: FloatProperty)
    float Osc1PulseWidth; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Osc2Type; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0025
    float Osc2Gain; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float Osc2Octave; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Osc2Semitones; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float Osc2Cents; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float Osc2PulseWidth; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float Portamento; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableOscillatorSync; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bEnableUnison (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x0041
    float Spread; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float Pan; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float LFO1Frequency; // 0x004C (Size: 0x4, Type: FloatProperty)
    float LFO1Gain; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LFO1Type; // 0x0054 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LFO1Mode; // 0x0055 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LFO1PatchType; // 0x0056 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x1]; // 0x0057
    float LFO2Frequency; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float LFO2Gain; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t LFO2Type; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LFO2Mode; // 0x0061 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LFO2PatchType; // 0x0062 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x1]; // 0x0063
    float GainDb; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float AttackTime; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float DecayTime; // 0x006C (Size: 0x4, Type: FloatProperty)
    float SustainGain; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float ReleaseTime; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ModEnvPatchType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ModEnvBiasPatchType; // 0x0079 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x2]; // 0x007A
    std::uint8_t bInvertModulationEnvelope; // 0x007C (Size: 0x1, Type: BoolProperty)
    // 0x007C BoolProperty bInvertModulationEnvelopeBias (shared storage)
    std::uint8_t Pad_0008[0x3]; // 0x007D
    float ModulationEnvelopeDepth; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float ModulationEnvelopeAttackTime; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float ModulationEnvelopeDecayTime; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float ModulationEnvelopeSustainGain; // 0x008C (Size: 0x4, Type: FloatProperty)
    float ModulationEnvelopeReleaseTime; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLegato; // 0x0094 (Size: 0x1, Type: BoolProperty)
    // 0x0094 BoolProperty bRetrigger (shared storage)
    std::uint8_t Pad_0009[0x3]; // 0x0095
    float FilterFrequency; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float FilterQ; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FilterType; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FilterAlgorithm; // 0x00A1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x2]; // 0x00A2
    std::uint8_t bStereoDelayEnabled; // 0x00A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x3]; // 0x00A5
    std::uint8_t StereoDelayMode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000C[0x3]; // 0x00A9
    float StereoDelayTime; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float StereoDelayFeedback; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float StereoDelayWetlevel; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float StereoDelayRatio; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bChorusEnabled; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x3]; // 0x00BD
    float ChorusDepth; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float ChorusFeedback; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float ChorusFrequency; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000E[0x4]; // 0x00CC
    TArray<void*> Patches; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FModularSynthPreset, bEnablePolyphony) == 8, "Offset mismatch for FModularSynthPreset::bEnablePolyphony");
static_assert(offsetof(FModularSynthPreset, Osc1Type) == 12, "Offset mismatch for FModularSynthPreset::Osc1Type");
static_assert(offsetof(FModularSynthPreset, Osc1Gain) == 16, "Offset mismatch for FModularSynthPreset::Osc1Gain");
static_assert(offsetof(FModularSynthPreset, Osc1Octave) == 20, "Offset mismatch for FModularSynthPreset::Osc1Octave");
static_assert(offsetof(FModularSynthPreset, Osc1Semitones) == 24, "Offset mismatch for FModularSynthPreset::Osc1Semitones");
static_assert(offsetof(FModularSynthPreset, Osc1Cents) == 28, "Offset mismatch for FModularSynthPreset::Osc1Cents");
static_assert(offsetof(FModularSynthPreset, Osc1PulseWidth) == 32, "Offset mismatch for FModularSynthPreset::Osc1PulseWidth");
static_assert(offsetof(FModularSynthPreset, Osc2Type) == 36, "Offset mismatch for FModularSynthPreset::Osc2Type");
static_assert(offsetof(FModularSynthPreset, Osc2Gain) == 40, "Offset mismatch for FModularSynthPreset::Osc2Gain");
static_assert(offsetof(FModularSynthPreset, Osc2Octave) == 44, "Offset mismatch for FModularSynthPreset::Osc2Octave");
static_assert(offsetof(FModularSynthPreset, Osc2Semitones) == 48, "Offset mismatch for FModularSynthPreset::Osc2Semitones");
static_assert(offsetof(FModularSynthPreset, Osc2Cents) == 52, "Offset mismatch for FModularSynthPreset::Osc2Cents");
static_assert(offsetof(FModularSynthPreset, Osc2PulseWidth) == 56, "Offset mismatch for FModularSynthPreset::Osc2PulseWidth");
static_assert(offsetof(FModularSynthPreset, Portamento) == 60, "Offset mismatch for FModularSynthPreset::Portamento");
static_assert(offsetof(FModularSynthPreset, bEnableOscillatorSync) == 64, "Offset mismatch for FModularSynthPreset::bEnableOscillatorSync");
static_assert(offsetof(FModularSynthPreset, Spread) == 68, "Offset mismatch for FModularSynthPreset::Spread");
static_assert(offsetof(FModularSynthPreset, Pan) == 72, "Offset mismatch for FModularSynthPreset::Pan");
static_assert(offsetof(FModularSynthPreset, LFO1Frequency) == 76, "Offset mismatch for FModularSynthPreset::LFO1Frequency");
static_assert(offsetof(FModularSynthPreset, LFO1Gain) == 80, "Offset mismatch for FModularSynthPreset::LFO1Gain");
static_assert(offsetof(FModularSynthPreset, LFO1Type) == 84, "Offset mismatch for FModularSynthPreset::LFO1Type");
static_assert(offsetof(FModularSynthPreset, LFO1Mode) == 85, "Offset mismatch for FModularSynthPreset::LFO1Mode");
static_assert(offsetof(FModularSynthPreset, LFO1PatchType) == 86, "Offset mismatch for FModularSynthPreset::LFO1PatchType");
static_assert(offsetof(FModularSynthPreset, LFO2Frequency) == 88, "Offset mismatch for FModularSynthPreset::LFO2Frequency");
static_assert(offsetof(FModularSynthPreset, LFO2Gain) == 92, "Offset mismatch for FModularSynthPreset::LFO2Gain");
static_assert(offsetof(FModularSynthPreset, LFO2Type) == 96, "Offset mismatch for FModularSynthPreset::LFO2Type");
static_assert(offsetof(FModularSynthPreset, LFO2Mode) == 97, "Offset mismatch for FModularSynthPreset::LFO2Mode");
static_assert(offsetof(FModularSynthPreset, LFO2PatchType) == 98, "Offset mismatch for FModularSynthPreset::LFO2PatchType");
static_assert(offsetof(FModularSynthPreset, GainDb) == 100, "Offset mismatch for FModularSynthPreset::GainDb");
static_assert(offsetof(FModularSynthPreset, AttackTime) == 104, "Offset mismatch for FModularSynthPreset::AttackTime");
static_assert(offsetof(FModularSynthPreset, DecayTime) == 108, "Offset mismatch for FModularSynthPreset::DecayTime");
static_assert(offsetof(FModularSynthPreset, SustainGain) == 112, "Offset mismatch for FModularSynthPreset::SustainGain");
static_assert(offsetof(FModularSynthPreset, ReleaseTime) == 116, "Offset mismatch for FModularSynthPreset::ReleaseTime");
static_assert(offsetof(FModularSynthPreset, ModEnvPatchType) == 120, "Offset mismatch for FModularSynthPreset::ModEnvPatchType");
static_assert(offsetof(FModularSynthPreset, ModEnvBiasPatchType) == 121, "Offset mismatch for FModularSynthPreset::ModEnvBiasPatchType");
static_assert(offsetof(FModularSynthPreset, bInvertModulationEnvelope) == 124, "Offset mismatch for FModularSynthPreset::bInvertModulationEnvelope");
static_assert(offsetof(FModularSynthPreset, ModulationEnvelopeDepth) == 128, "Offset mismatch for FModularSynthPreset::ModulationEnvelopeDepth");
static_assert(offsetof(FModularSynthPreset, ModulationEnvelopeAttackTime) == 132, "Offset mismatch for FModularSynthPreset::ModulationEnvelopeAttackTime");
static_assert(offsetof(FModularSynthPreset, ModulationEnvelopeDecayTime) == 136, "Offset mismatch for FModularSynthPreset::ModulationEnvelopeDecayTime");
static_assert(offsetof(FModularSynthPreset, ModulationEnvelopeSustainGain) == 140, "Offset mismatch for FModularSynthPreset::ModulationEnvelopeSustainGain");
static_assert(offsetof(FModularSynthPreset, ModulationEnvelopeReleaseTime) == 144, "Offset mismatch for FModularSynthPreset::ModulationEnvelopeReleaseTime");
static_assert(offsetof(FModularSynthPreset, bLegato) == 148, "Offset mismatch for FModularSynthPreset::bLegato");
static_assert(offsetof(FModularSynthPreset, FilterFrequency) == 152, "Offset mismatch for FModularSynthPreset::FilterFrequency");
static_assert(offsetof(FModularSynthPreset, FilterQ) == 156, "Offset mismatch for FModularSynthPreset::FilterQ");
static_assert(offsetof(FModularSynthPreset, FilterType) == 160, "Offset mismatch for FModularSynthPreset::FilterType");
static_assert(offsetof(FModularSynthPreset, FilterAlgorithm) == 161, "Offset mismatch for FModularSynthPreset::FilterAlgorithm");
static_assert(offsetof(FModularSynthPreset, bStereoDelayEnabled) == 164, "Offset mismatch for FModularSynthPreset::bStereoDelayEnabled");
static_assert(offsetof(FModularSynthPreset, StereoDelayMode) == 168, "Offset mismatch for FModularSynthPreset::StereoDelayMode");
static_assert(offsetof(FModularSynthPreset, StereoDelayTime) == 172, "Offset mismatch for FModularSynthPreset::StereoDelayTime");
static_assert(offsetof(FModularSynthPreset, StereoDelayFeedback) == 176, "Offset mismatch for FModularSynthPreset::StereoDelayFeedback");
static_assert(offsetof(FModularSynthPreset, StereoDelayWetlevel) == 180, "Offset mismatch for FModularSynthPreset::StereoDelayWetlevel");
static_assert(offsetof(FModularSynthPreset, StereoDelayRatio) == 184, "Offset mismatch for FModularSynthPreset::StereoDelayRatio");
static_assert(offsetof(FModularSynthPreset, bChorusEnabled) == 188, "Offset mismatch for FModularSynthPreset::bChorusEnabled");
static_assert(offsetof(FModularSynthPreset, ChorusDepth) == 192, "Offset mismatch for FModularSynthPreset::ChorusDepth");
static_assert(offsetof(FModularSynthPreset, ChorusFeedback) == 196, "Offset mismatch for FModularSynthPreset::ChorusFeedback");
static_assert(offsetof(FModularSynthPreset, ChorusFrequency) == 200, "Offset mismatch for FModularSynthPreset::ChorusFrequency");
static_assert(offsetof(FModularSynthPreset, Patches) == 208, "Offset mismatch for FModularSynthPreset::Patches");

// /Script/Synthesis.ModularSynthPresetBankEntry
// Kind: ScriptStruct; super: none
struct FModularSynthPresetBankEntry
{
public:
    FString PresetName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Preset[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FModularSynthPresetBankEntry, PresetName) == 0, "Offset mismatch for FModularSynthPresetBankEntry::PresetName");
static_assert(offsetof(FModularSynthPresetBankEntry, Preset) == 16, "Offset mismatch for FModularSynthPresetBankEntry::Preset");

// /Script/Synthesis.PatchId
// Kind: ScriptStruct; super: none
struct FPatchId
{
public:
    std::int32_t ID; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPatchId, ID) == 0, "Offset mismatch for FPatchId::ID");

// /Script/Synthesis.SourceEffectBitCrusherBaseSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectBitCrusherBaseSettings
{
public:
    float SampleRate; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float BitDepth; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSourceEffectBitCrusherBaseSettings, SampleRate) == 0, "Offset mismatch for FSourceEffectBitCrusherBaseSettings::SampleRate");
static_assert(offsetof(FSourceEffectBitCrusherBaseSettings, BitDepth) == 4, "Offset mismatch for FSourceEffectBitCrusherBaseSettings::BitDepth");

// /Script/Synthesis.SourceEffectBitCrusherSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectBitCrusherSettings
{
public:
    std::uint8_t SampleRateModulation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t BitModulation[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSourceEffectBitCrusherSettings, SampleRateModulation) == 0, "Offset mismatch for FSourceEffectBitCrusherSettings::SampleRateModulation");
static_assert(offsetof(FSourceEffectBitCrusherSettings, BitModulation) == 24, "Offset mismatch for FSourceEffectBitCrusherSettings::BitModulation");

// /Script/Synthesis.SourceEffectChorusBaseSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectChorusBaseSettings
{
public:
    float Depth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Feedback; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float WetLevel; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DryLevel; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Spread; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSourceEffectChorusBaseSettings, Depth) == 0, "Offset mismatch for FSourceEffectChorusBaseSettings::Depth");
static_assert(offsetof(FSourceEffectChorusBaseSettings, Frequency) == 4, "Offset mismatch for FSourceEffectChorusBaseSettings::Frequency");
static_assert(offsetof(FSourceEffectChorusBaseSettings, Feedback) == 8, "Offset mismatch for FSourceEffectChorusBaseSettings::Feedback");
static_assert(offsetof(FSourceEffectChorusBaseSettings, WetLevel) == 12, "Offset mismatch for FSourceEffectChorusBaseSettings::WetLevel");
static_assert(offsetof(FSourceEffectChorusBaseSettings, DryLevel) == 16, "Offset mismatch for FSourceEffectChorusBaseSettings::DryLevel");
static_assert(offsetof(FSourceEffectChorusBaseSettings, Spread) == 20, "Offset mismatch for FSourceEffectChorusBaseSettings::Spread");

// /Script/Synthesis.SourceEffectChorusSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectChorusSettings
{
public:
    float Depth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Feedback; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float WetLevel; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DryLevel; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Spread; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthModulation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t FrequencyModulation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t FeedbackModulation[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t WetModulation[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t DryModulation[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpreadModulation[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSourceEffectChorusSettings, Depth) == 0, "Offset mismatch for FSourceEffectChorusSettings::Depth");
static_assert(offsetof(FSourceEffectChorusSettings, Frequency) == 4, "Offset mismatch for FSourceEffectChorusSettings::Frequency");
static_assert(offsetof(FSourceEffectChorusSettings, Feedback) == 8, "Offset mismatch for FSourceEffectChorusSettings::Feedback");
static_assert(offsetof(FSourceEffectChorusSettings, WetLevel) == 12, "Offset mismatch for FSourceEffectChorusSettings::WetLevel");
static_assert(offsetof(FSourceEffectChorusSettings, DryLevel) == 16, "Offset mismatch for FSourceEffectChorusSettings::DryLevel");
static_assert(offsetof(FSourceEffectChorusSettings, Spread) == 20, "Offset mismatch for FSourceEffectChorusSettings::Spread");
static_assert(offsetof(FSourceEffectChorusSettings, DepthModulation) == 24, "Offset mismatch for FSourceEffectChorusSettings::DepthModulation");
static_assert(offsetof(FSourceEffectChorusSettings, FrequencyModulation) == 48, "Offset mismatch for FSourceEffectChorusSettings::FrequencyModulation");
static_assert(offsetof(FSourceEffectChorusSettings, FeedbackModulation) == 72, "Offset mismatch for FSourceEffectChorusSettings::FeedbackModulation");
static_assert(offsetof(FSourceEffectChorusSettings, WetModulation) == 96, "Offset mismatch for FSourceEffectChorusSettings::WetModulation");
static_assert(offsetof(FSourceEffectChorusSettings, DryModulation) == 120, "Offset mismatch for FSourceEffectChorusSettings::DryModulation");
static_assert(offsetof(FSourceEffectChorusSettings, SpreadModulation) == 144, "Offset mismatch for FSourceEffectChorusSettings::SpreadModulation");

// /Script/Synthesis.SourceEffectConvolutionReverbSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectConvolutionReverbSettings
{
public:
    float NormalizationVolumeDb; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float WetVolumeDb; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DryVolumeDb; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBypass; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSourceEffectConvolutionReverbSettings, NormalizationVolumeDb) == 0, "Offset mismatch for FSourceEffectConvolutionReverbSettings::NormalizationVolumeDb");
static_assert(offsetof(FSourceEffectConvolutionReverbSettings, WetVolumeDb) == 4, "Offset mismatch for FSourceEffectConvolutionReverbSettings::WetVolumeDb");
static_assert(offsetof(FSourceEffectConvolutionReverbSettings, DryVolumeDb) == 8, "Offset mismatch for FSourceEffectConvolutionReverbSettings::DryVolumeDb");
static_assert(offsetof(FSourceEffectConvolutionReverbSettings, bBypass) == 12, "Offset mismatch for FSourceEffectConvolutionReverbSettings::bBypass");

// /Script/Synthesis.SourceEffectDynamicsProcessorSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectDynamicsProcessorSettings
{
public:
    std::uint8_t DynamicsProcessorType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PeakMode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float LookAheadMsec; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AttackTimeMsec; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ReleaseTimeMsec; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ThresholdDb; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Ratio; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float KneeBandwidthDb; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float InputGainDb; // 0x001C (Size: 0x4, Type: FloatProperty)
    float OutputGainDb; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAnalogMode; // 0x0024 (Size: 0x1, Type: BoolProperty)
    // 0x0024 BoolProperty bStereoLinked (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    std::uint8_t bBypass; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, DynamicsProcessorType) == 0, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::DynamicsProcessorType");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, PeakMode) == 1, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::PeakMode");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, LookAheadMsec) == 4, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::LookAheadMsec");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, AttackTimeMsec) == 8, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::AttackTimeMsec");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, ReleaseTimeMsec) == 12, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::ReleaseTimeMsec");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, ThresholdDb) == 16, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::ThresholdDb");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, Ratio) == 20, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::Ratio");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, KneeBandwidthDb) == 24, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::KneeBandwidthDb");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, InputGainDb) == 28, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::InputGainDb");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, OutputGainDb) == 32, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::OutputGainDb");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, bAnalogMode) == 36, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::bAnalogMode");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, bBypass) == 40, "Offset mismatch for FSourceEffectDynamicsProcessorSettings::bBypass");

// /Script/Synthesis.SourceEffectEQBand
// Kind: ScriptStruct; super: none
struct FSourceEffectEQBand
{
public:
    float Frequency; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Bandwidth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float GainDb; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSourceEffectEQBand, Frequency) == 0, "Offset mismatch for FSourceEffectEQBand::Frequency");
static_assert(offsetof(FSourceEffectEQBand, Bandwidth) == 4, "Offset mismatch for FSourceEffectEQBand::Bandwidth");
static_assert(offsetof(FSourceEffectEQBand, GainDb) == 8, "Offset mismatch for FSourceEffectEQBand::GainDb");
static_assert(offsetof(FSourceEffectEQBand, bEnabled) == 12, "Offset mismatch for FSourceEffectEQBand::bEnabled");

// /Script/Synthesis.SourceEffectEQSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectEQSettings
{
public:
    TArray<void*> EqBands; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSourceEffectEQSettings, EqBands) == 0, "Offset mismatch for FSourceEffectEQSettings::EqBands");

// /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectEnvelopeFollowerSettings
{
public:
    float AttackTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ReleaseTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PeakMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsAnalogMode; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, AttackTime) == 0, "Offset mismatch for FSourceEffectEnvelopeFollowerSettings::AttackTime");
static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, ReleaseTime) == 4, "Offset mismatch for FSourceEffectEnvelopeFollowerSettings::ReleaseTime");
static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, PeakMode) == 8, "Offset mismatch for FSourceEffectEnvelopeFollowerSettings::PeakMode");
static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, bIsAnalogMode) == 9, "Offset mismatch for FSourceEffectEnvelopeFollowerSettings::bIsAnalogMode");

// /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectFilterAudioBusModulationSettings
{
public:
    void* AudioBus; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t EnvelopeFollowerAttackTimeMsec; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t EnvelopeFollowerReleaseTimeMsec; // 0x000C (Size: 0x4, Type: IntProperty)
    float EnvelopeGainMultiplier; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FilterParam; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    float MinFrequencyModulation; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaxFrequencyModulation; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MinResonanceModulation; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxResonanceModulation; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, AudioBus) == 0, "Offset mismatch for FSourceEffectFilterAudioBusModulationSettings::AudioBus");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, EnvelopeFollowerAttackTimeMsec) == 8, "Offset mismatch for FSourceEffectFilterAudioBusModulationSettings::EnvelopeFollowerAttackTimeMsec");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, EnvelopeFollowerReleaseTimeMsec) == 12, "Offset mismatch for FSourceEffectFilterAudioBusModulationSettings::EnvelopeFollowerReleaseTimeMsec");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, EnvelopeGainMultiplier) == 16, "Offset mismatch for FSourceEffectFilterAudioBusModulationSettings::EnvelopeGainMultiplier");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, FilterParam) == 20, "Offset mismatch for FSourceEffectFilterAudioBusModulationSettings::FilterParam");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, MinFrequencyModulation) == 24, "Offset mismatch for FSourceEffectFilterAudioBusModulationSettings::MinFrequencyModulation");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, MaxFrequencyModulation) == 28, "Offset mismatch for FSourceEffectFilterAudioBusModulationSettings::MaxFrequencyModulation");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, MinResonanceModulation) == 32, "Offset mismatch for FSourceEffectFilterAudioBusModulationSettings::MinResonanceModulation");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, MaxResonanceModulation) == 36, "Offset mismatch for FSourceEffectFilterAudioBusModulationSettings::MaxResonanceModulation");

// /Script/Synthesis.SourceEffectFilterSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectFilterSettings
{
public:
    std::uint8_t FilterCircuit; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FilterType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float CutoffFrequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FilterQ; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    TArray<void*> AudioBusModulation; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSourceEffectFilterSettings, FilterCircuit) == 0, "Offset mismatch for FSourceEffectFilterSettings::FilterCircuit");
static_assert(offsetof(FSourceEffectFilterSettings, FilterType) == 1, "Offset mismatch for FSourceEffectFilterSettings::FilterType");
static_assert(offsetof(FSourceEffectFilterSettings, CutoffFrequency) == 4, "Offset mismatch for FSourceEffectFilterSettings::CutoffFrequency");
static_assert(offsetof(FSourceEffectFilterSettings, FilterQ) == 8, "Offset mismatch for FSourceEffectFilterSettings::FilterQ");
static_assert(offsetof(FSourceEffectFilterSettings, AudioBusModulation) == 16, "Offset mismatch for FSourceEffectFilterSettings::AudioBusModulation");

// /Script/Synthesis.SourceEffectFoldbackDistortionSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectFoldbackDistortionSettings
{
public:
    float InputGainDb; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ThresholdDb; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float OutputGainDb; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSourceEffectFoldbackDistortionSettings, InputGainDb) == 0, "Offset mismatch for FSourceEffectFoldbackDistortionSettings::InputGainDb");
static_assert(offsetof(FSourceEffectFoldbackDistortionSettings, ThresholdDb) == 4, "Offset mismatch for FSourceEffectFoldbackDistortionSettings::ThresholdDb");
static_assert(offsetof(FSourceEffectFoldbackDistortionSettings, OutputGainDb) == 8, "Offset mismatch for FSourceEffectFoldbackDistortionSettings::OutputGainDb");

// /Script/Synthesis.SourceEffectIndividualFilterSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectIndividualFilterSettings
{
public:
    std::uint8_t FilterCircuit; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FilterType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float CutoffFrequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FilterQ; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSourceEffectIndividualFilterSettings, FilterCircuit) == 0, "Offset mismatch for FSourceEffectIndividualFilterSettings::FilterCircuit");
static_assert(offsetof(FSourceEffectIndividualFilterSettings, FilterType) == 1, "Offset mismatch for FSourceEffectIndividualFilterSettings::FilterType");
static_assert(offsetof(FSourceEffectIndividualFilterSettings, CutoffFrequency) == 4, "Offset mismatch for FSourceEffectIndividualFilterSettings::CutoffFrequency");
static_assert(offsetof(FSourceEffectIndividualFilterSettings, FilterQ) == 8, "Offset mismatch for FSourceEffectIndividualFilterSettings::FilterQ");

// /Script/Synthesis.SourceEffectMidSideSpreaderSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectMidSideSpreaderSettings
{
public:
    float SpreadAmount; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InputMode; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OutputMode; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEqualPower; // 0x0006 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, SpreadAmount) == 0, "Offset mismatch for FSourceEffectMidSideSpreaderSettings::SpreadAmount");
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, InputMode) == 4, "Offset mismatch for FSourceEffectMidSideSpreaderSettings::InputMode");
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, OutputMode) == 5, "Offset mismatch for FSourceEffectMidSideSpreaderSettings::OutputMode");
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, bEqualPower) == 6, "Offset mismatch for FSourceEffectMidSideSpreaderSettings::bEqualPower");

// /Script/Synthesis.SourceEffectMotionFilterModulationSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectMotionFilterModulationSettings
{
public:
    std::uint8_t ModulationSource; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ModulationInputRange[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ModulationOutputMinimumRange[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t ModulationOutputMaximumRange[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    float UpdateEaseMS; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSourceEffectMotionFilterModulationSettings, ModulationSource) == 0, "Offset mismatch for FSourceEffectMotionFilterModulationSettings::ModulationSource");
static_assert(offsetof(FSourceEffectMotionFilterModulationSettings, ModulationInputRange) == 8, "Offset mismatch for FSourceEffectMotionFilterModulationSettings::ModulationInputRange");
static_assert(offsetof(FSourceEffectMotionFilterModulationSettings, ModulationOutputMinimumRange) == 24, "Offset mismatch for FSourceEffectMotionFilterModulationSettings::ModulationOutputMinimumRange");
static_assert(offsetof(FSourceEffectMotionFilterModulationSettings, ModulationOutputMaximumRange) == 40, "Offset mismatch for FSourceEffectMotionFilterModulationSettings::ModulationOutputMaximumRange");
static_assert(offsetof(FSourceEffectMotionFilterModulationSettings, UpdateEaseMS) == 56, "Offset mismatch for FSourceEffectMotionFilterModulationSettings::UpdateEaseMS");

// /Script/Synthesis.SourceEffectMotionFilterSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectMotionFilterSettings
{
public:
    std::uint8_t MotionFilterTopology; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MotionFilterMix; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FilterASettings[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t FilterBSettings[0xC]; // 0x0014 (Size: 0xC, Type: StructProperty)
    TMap<void*, void*> ModulationMappings; // 0x0020 (Size: 0x10, Type: MapProperty)
    float DryVolumeDb; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSourceEffectMotionFilterSettings, MotionFilterTopology) == 0, "Offset mismatch for FSourceEffectMotionFilterSettings::MotionFilterTopology");
static_assert(offsetof(FSourceEffectMotionFilterSettings, MotionFilterMix) == 4, "Offset mismatch for FSourceEffectMotionFilterSettings::MotionFilterMix");
static_assert(offsetof(FSourceEffectMotionFilterSettings, FilterASettings) == 8, "Offset mismatch for FSourceEffectMotionFilterSettings::FilterASettings");
static_assert(offsetof(FSourceEffectMotionFilterSettings, FilterBSettings) == 20, "Offset mismatch for FSourceEffectMotionFilterSettings::FilterBSettings");
static_assert(offsetof(FSourceEffectMotionFilterSettings, ModulationMappings) == 32, "Offset mismatch for FSourceEffectMotionFilterSettings::ModulationMappings");
static_assert(offsetof(FSourceEffectMotionFilterSettings, DryVolumeDb) == 48, "Offset mismatch for FSourceEffectMotionFilterSettings::DryVolumeDb");

// /Script/Synthesis.SourceEffectPannerSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectPannerSettings
{
public:
    float Spread; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Pan; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSourceEffectPannerSettings, Spread) == 0, "Offset mismatch for FSourceEffectPannerSettings::Spread");
static_assert(offsetof(FSourceEffectPannerSettings, Pan) == 4, "Offset mismatch for FSourceEffectPannerSettings::Pan");

// /Script/Synthesis.SourceEffectPhaserSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectPhaserSettings
{
public:
    float WetLevel; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Feedback; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LFOType; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t UseQuadraturePhase; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSourceEffectPhaserSettings, WetLevel) == 0, "Offset mismatch for FSourceEffectPhaserSettings::WetLevel");
static_assert(offsetof(FSourceEffectPhaserSettings, Frequency) == 4, "Offset mismatch for FSourceEffectPhaserSettings::Frequency");
static_assert(offsetof(FSourceEffectPhaserSettings, Feedback) == 8, "Offset mismatch for FSourceEffectPhaserSettings::Feedback");
static_assert(offsetof(FSourceEffectPhaserSettings, LFOType) == 12, "Offset mismatch for FSourceEffectPhaserSettings::LFOType");
static_assert(offsetof(FSourceEffectPhaserSettings, UseQuadraturePhase) == 13, "Offset mismatch for FSourceEffectPhaserSettings::UseQuadraturePhase");

// /Script/Synthesis.SourceEffectRingModulationSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectRingModulationSettings
{
public:
    std::uint8_t ModulatorType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Frequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Depth; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DryLevel; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WetLevel; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    void* AudioBusModulator; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSourceEffectRingModulationSettings, ModulatorType) == 0, "Offset mismatch for FSourceEffectRingModulationSettings::ModulatorType");
static_assert(offsetof(FSourceEffectRingModulationSettings, Frequency) == 4, "Offset mismatch for FSourceEffectRingModulationSettings::Frequency");
static_assert(offsetof(FSourceEffectRingModulationSettings, Depth) == 8, "Offset mismatch for FSourceEffectRingModulationSettings::Depth");
static_assert(offsetof(FSourceEffectRingModulationSettings, DryLevel) == 12, "Offset mismatch for FSourceEffectRingModulationSettings::DryLevel");
static_assert(offsetof(FSourceEffectRingModulationSettings, WetLevel) == 16, "Offset mismatch for FSourceEffectRingModulationSettings::WetLevel");
static_assert(offsetof(FSourceEffectRingModulationSettings, AudioBusModulator) == 24, "Offset mismatch for FSourceEffectRingModulationSettings::AudioBusModulator");

// /Script/Synthesis.SourceEffectSimpleDelaySettings
// Kind: ScriptStruct; super: none
struct FSourceEffectSimpleDelaySettings
{
public:
    float SpeedOfSound; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DelayAmount; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DryAmount; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float WetAmount; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Feedback; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDelayBasedOnDistance; // 0x0014 (Size: 0x1, Type: BoolProperty)
    // 0x0014 BoolProperty bUseDistanceOverride (shared storage)
};

static_assert(offsetof(FSourceEffectSimpleDelaySettings, SpeedOfSound) == 0, "Offset mismatch for FSourceEffectSimpleDelaySettings::SpeedOfSound");
static_assert(offsetof(FSourceEffectSimpleDelaySettings, DelayAmount) == 4, "Offset mismatch for FSourceEffectSimpleDelaySettings::DelayAmount");
static_assert(offsetof(FSourceEffectSimpleDelaySettings, DryAmount) == 8, "Offset mismatch for FSourceEffectSimpleDelaySettings::DryAmount");
static_assert(offsetof(FSourceEffectSimpleDelaySettings, WetAmount) == 12, "Offset mismatch for FSourceEffectSimpleDelaySettings::WetAmount");
static_assert(offsetof(FSourceEffectSimpleDelaySettings, Feedback) == 16, "Offset mismatch for FSourceEffectSimpleDelaySettings::Feedback");
static_assert(offsetof(FSourceEffectSimpleDelaySettings, bDelayBasedOnDistance) == 20, "Offset mismatch for FSourceEffectSimpleDelaySettings::bDelayBasedOnDistance");

// /Script/Synthesis.SourceEffectStereoDelaySettings
// Kind: ScriptStruct; super: none
struct FSourceEffectStereoDelaySettings
{
public:
    std::uint8_t DelayMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float DelayTimeMsec; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Feedback; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DelayRatio; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WetLevel; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float DryLevel; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFilterEnabled; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FilterType; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001A
    float FilterFrequency; // 0x001C (Size: 0x4, Type: FloatProperty)
    float FilterQ; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSourceEffectStereoDelaySettings, DelayMode) == 0, "Offset mismatch for FSourceEffectStereoDelaySettings::DelayMode");
static_assert(offsetof(FSourceEffectStereoDelaySettings, DelayTimeMsec) == 4, "Offset mismatch for FSourceEffectStereoDelaySettings::DelayTimeMsec");
static_assert(offsetof(FSourceEffectStereoDelaySettings, Feedback) == 8, "Offset mismatch for FSourceEffectStereoDelaySettings::Feedback");
static_assert(offsetof(FSourceEffectStereoDelaySettings, DelayRatio) == 12, "Offset mismatch for FSourceEffectStereoDelaySettings::DelayRatio");
static_assert(offsetof(FSourceEffectStereoDelaySettings, WetLevel) == 16, "Offset mismatch for FSourceEffectStereoDelaySettings::WetLevel");
static_assert(offsetof(FSourceEffectStereoDelaySettings, DryLevel) == 20, "Offset mismatch for FSourceEffectStereoDelaySettings::DryLevel");
static_assert(offsetof(FSourceEffectStereoDelaySettings, bFilterEnabled) == 24, "Offset mismatch for FSourceEffectStereoDelaySettings::bFilterEnabled");
static_assert(offsetof(FSourceEffectStereoDelaySettings, FilterType) == 25, "Offset mismatch for FSourceEffectStereoDelaySettings::FilterType");
static_assert(offsetof(FSourceEffectStereoDelaySettings, FilterFrequency) == 28, "Offset mismatch for FSourceEffectStereoDelaySettings::FilterFrequency");
static_assert(offsetof(FSourceEffectStereoDelaySettings, FilterQ) == 32, "Offset mismatch for FSourceEffectStereoDelaySettings::FilterQ");

// /Script/Synthesis.SourceEffectWaveShaperSettings
// Kind: ScriptStruct; super: none
struct FSourceEffectWaveShaperSettings
{
public:
    float Amount; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float OutputGainDb; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSourceEffectWaveShaperSettings, Amount) == 0, "Offset mismatch for FSourceEffectWaveShaperSettings::Amount");
static_assert(offsetof(FSourceEffectWaveShaperSettings, OutputGainDb) == 4, "Offset mismatch for FSourceEffectWaveShaperSettings::OutputGainDb");

// /Script/Synthesis.SubmixEffectConvolutionReverbSettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectConvolutionReverbSettings
{
public:
    float NormalizationVolumeDb; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float WetVolumeDb; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DryVolumeDb; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBypass; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMixInputChannelFormatToImpulseResponseFormat; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMixReverbOutputToOutputChannelFormat; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x000F
    float SurroundRearChannelBleedDb; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInvertRearChannelBleedPhase; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSurroundRearChannelFlip; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    float SurroundRearChannelBleedAmount; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x001C
    void* ImpulseResponse; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AllowHardwareAcceleration; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, NormalizationVolumeDb) == 0, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::NormalizationVolumeDb");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, WetVolumeDb) == 4, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::WetVolumeDb");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, DryVolumeDb) == 8, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::DryVolumeDb");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, bBypass) == 12, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::bBypass");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, bMixInputChannelFormatToImpulseResponseFormat) == 13, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::bMixInputChannelFormatToImpulseResponseFormat");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, bMixReverbOutputToOutputChannelFormat) == 14, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::bMixReverbOutputToOutputChannelFormat");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, SurroundRearChannelBleedDb) == 16, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::SurroundRearChannelBleedDb");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, bInvertRearChannelBleedPhase) == 20, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::bInvertRearChannelBleedPhase");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, bSurroundRearChannelFlip) == 21, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::bSurroundRearChannelFlip");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, SurroundRearChannelBleedAmount) == 24, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::SurroundRearChannelBleedAmount");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, ImpulseResponse) == 32, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::ImpulseResponse");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, AllowHardwareAcceleration) == 40, "Offset mismatch for FSubmixEffectConvolutionReverbSettings::AllowHardwareAcceleration");

// /Script/Synthesis.SubmixEffectDelaySettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectDelaySettings
{
public:
    float MaximumDelayLength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float InterpolationTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DelayLength; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSubmixEffectDelaySettings, MaximumDelayLength) == 0, "Offset mismatch for FSubmixEffectDelaySettings::MaximumDelayLength");
static_assert(offsetof(FSubmixEffectDelaySettings, InterpolationTime) == 4, "Offset mismatch for FSubmixEffectDelaySettings::InterpolationTime");
static_assert(offsetof(FSubmixEffectDelaySettings, DelayLength) == 8, "Offset mismatch for FSubmixEffectDelaySettings::DelayLength");

// /Script/Synthesis.SubmixEffectFilterSettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectFilterSettings
{
public:
    std::uint8_t FilterType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FilterAlgorithm; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float FilterFrequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FilterQ; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSubmixEffectFilterSettings, FilterType) == 0, "Offset mismatch for FSubmixEffectFilterSettings::FilterType");
static_assert(offsetof(FSubmixEffectFilterSettings, FilterAlgorithm) == 1, "Offset mismatch for FSubmixEffectFilterSettings::FilterAlgorithm");
static_assert(offsetof(FSubmixEffectFilterSettings, FilterFrequency) == 4, "Offset mismatch for FSubmixEffectFilterSettings::FilterFrequency");
static_assert(offsetof(FSubmixEffectFilterSettings, FilterQ) == 8, "Offset mismatch for FSubmixEffectFilterSettings::FilterQ");

// /Script/Synthesis.SubmixEffectFlexiverbSettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectFlexiverbSettings
{
public:
    float PreDelay; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DecayTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float RoomDampening; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t Complexity; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSubmixEffectFlexiverbSettings, PreDelay) == 0, "Offset mismatch for FSubmixEffectFlexiverbSettings::PreDelay");
static_assert(offsetof(FSubmixEffectFlexiverbSettings, DecayTime) == 4, "Offset mismatch for FSubmixEffectFlexiverbSettings::DecayTime");
static_assert(offsetof(FSubmixEffectFlexiverbSettings, RoomDampening) == 8, "Offset mismatch for FSubmixEffectFlexiverbSettings::RoomDampening");
static_assert(offsetof(FSubmixEffectFlexiverbSettings, Complexity) == 12, "Offset mismatch for FSubmixEffectFlexiverbSettings::Complexity");

// /Script/Synthesis.SubmixEffectMultibandCompressorSettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectMultibandCompressorSettings
{
public:
    std::uint8_t DynamicsProcessorType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PeakMode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LinkMode; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float LookAheadMsec; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAnalogMode; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFourPole; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBypass; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t KeySource; // 0x000B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    void* ExternalAudioBus; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* ExternalSubmix; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    float KeyGainDb; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bKeyAudition; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0025
    TArray<void*> Bands; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, DynamicsProcessorType) == 0, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::DynamicsProcessorType");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, PeakMode) == 1, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::PeakMode");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, LinkMode) == 2, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::LinkMode");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, LookAheadMsec) == 4, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::LookAheadMsec");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, bAnalogMode) == 8, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::bAnalogMode");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, bFourPole) == 9, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::bFourPole");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, bBypass) == 10, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::bBypass");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, KeySource) == 11, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::KeySource");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, ExternalAudioBus) == 16, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::ExternalAudioBus");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, ExternalSubmix) == 24, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::ExternalSubmix");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, KeyGainDb) == 32, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::KeyGainDb");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, bKeyAudition) == 36, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::bKeyAudition");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, Bands) == 40, "Offset mismatch for FSubmixEffectMultibandCompressorSettings::Bands");

// /Script/Synthesis.SubmixEffectStereoDelaySettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectStereoDelaySettings
{
public:
    std::uint8_t DelayMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float DelayTimeMsec; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Feedback; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DelayRatio; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WetLevel; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float DryLevel; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFilterEnabled; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FilterType; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001A
    float FilterFrequency; // 0x001C (Size: 0x4, Type: FloatProperty)
    float FilterQ; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSubmixEffectStereoDelaySettings, DelayMode) == 0, "Offset mismatch for FSubmixEffectStereoDelaySettings::DelayMode");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, DelayTimeMsec) == 4, "Offset mismatch for FSubmixEffectStereoDelaySettings::DelayTimeMsec");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, Feedback) == 8, "Offset mismatch for FSubmixEffectStereoDelaySettings::Feedback");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, DelayRatio) == 12, "Offset mismatch for FSubmixEffectStereoDelaySettings::DelayRatio");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, WetLevel) == 16, "Offset mismatch for FSubmixEffectStereoDelaySettings::WetLevel");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, DryLevel) == 20, "Offset mismatch for FSubmixEffectStereoDelaySettings::DryLevel");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, bFilterEnabled) == 24, "Offset mismatch for FSubmixEffectStereoDelaySettings::bFilterEnabled");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, FilterType) == 25, "Offset mismatch for FSubmixEffectStereoDelaySettings::FilterType");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, FilterFrequency) == 28, "Offset mismatch for FSubmixEffectStereoDelaySettings::FilterFrequency");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, FilterQ) == 32, "Offset mismatch for FSubmixEffectStereoDelaySettings::FilterQ");

// /Script/Synthesis.SubmixEffectStereoToQuadSettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectStereoToQuadSettings
{
public:
    std::uint8_t bFlipChannels; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float RearChannelGain; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSubmixEffectStereoToQuadSettings, bFlipChannels) == 0, "Offset mismatch for FSubmixEffectStereoToQuadSettings::bFlipChannels");
static_assert(offsetof(FSubmixEffectStereoToQuadSettings, RearChannelGain) == 4, "Offset mismatch for FSubmixEffectStereoToQuadSettings::RearChannelGain");

// /Script/Synthesis.SubmixEffectTapDelaySettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectTapDelaySettings
{
public:
    float MaximumDelayLength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float InterpolationTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    TArray<void*> Taps; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSubmixEffectTapDelaySettings, MaximumDelayLength) == 0, "Offset mismatch for FSubmixEffectTapDelaySettings::MaximumDelayLength");
static_assert(offsetof(FSubmixEffectTapDelaySettings, InterpolationTime) == 4, "Offset mismatch for FSubmixEffectTapDelaySettings::InterpolationTime");
static_assert(offsetof(FSubmixEffectTapDelaySettings, Taps) == 8, "Offset mismatch for FSubmixEffectTapDelaySettings::Taps");

// /Script/Synthesis.Synth1PatchCable
// Kind: ScriptStruct; super: none
struct FSynth1PatchCable
{
public:
    float Depth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Destination; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSynth1PatchCable, Depth) == 0, "Offset mismatch for FSynth1PatchCable::Depth");
static_assert(offsetof(FSynth1PatchCable, Destination) == 4, "Offset mismatch for FSynth1PatchCable::Destination");

// /Script/Synthesis.Synth2DSliderStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSynth2DSliderStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t NormalThumbImage[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t DisabledThumbImage[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalBarImage[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t DisabledBarImage[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundImage[0xB0]; // 0x02D0 (Size: 0xB0, Type: StructProperty)
    float BarThickness; // 0x0380 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSynth2DSliderStyle, NormalThumbImage) == 16, "Offset mismatch for FSynth2DSliderStyle::NormalThumbImage");
static_assert(offsetof(FSynth2DSliderStyle, DisabledThumbImage) == 192, "Offset mismatch for FSynth2DSliderStyle::DisabledThumbImage");
static_assert(offsetof(FSynth2DSliderStyle, NormalBarImage) == 368, "Offset mismatch for FSynth2DSliderStyle::NormalBarImage");
static_assert(offsetof(FSynth2DSliderStyle, DisabledBarImage) == 544, "Offset mismatch for FSynth2DSliderStyle::DisabledBarImage");
static_assert(offsetof(FSynth2DSliderStyle, BackgroundImage) == 720, "Offset mismatch for FSynth2DSliderStyle::BackgroundImage");
static_assert(offsetof(FSynth2DSliderStyle, BarThickness) == 896, "Offset mismatch for FSynth2DSliderStyle::BarThickness");

// /Script/Synthesis.SynthKnobStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSynthKnobStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t LargeKnob[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LargeKnobOverlay[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MediumKnob[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MediumKnobOverlay[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    float MinValueAngle; // 0x02D0 (Size: 0x4, Type: FloatProperty)
    float MaxValueAngle; // 0x02D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t KnobSize; // 0x02D8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSynthKnobStyle, LargeKnob) == 16, "Offset mismatch for FSynthKnobStyle::LargeKnob");
static_assert(offsetof(FSynthKnobStyle, LargeKnobOverlay) == 192, "Offset mismatch for FSynthKnobStyle::LargeKnobOverlay");
static_assert(offsetof(FSynthKnobStyle, MediumKnob) == 368, "Offset mismatch for FSynthKnobStyle::MediumKnob");
static_assert(offsetof(FSynthKnobStyle, MediumKnobOverlay) == 544, "Offset mismatch for FSynthKnobStyle::MediumKnobOverlay");
static_assert(offsetof(FSynthKnobStyle, MinValueAngle) == 720, "Offset mismatch for FSynthKnobStyle::MinValueAngle");
static_assert(offsetof(FSynthKnobStyle, MaxValueAngle) == 724, "Offset mismatch for FSynthKnobStyle::MaxValueAngle");
static_assert(offsetof(FSynthKnobStyle, KnobSize) == 728, "Offset mismatch for FSynthKnobStyle::KnobSize");

// /Script/Synthesis.SynthSlateStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSynthSlateStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SizeType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ColorStyle; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSynthSlateStyle, SizeType) == 8, "Offset mismatch for FSynthSlateStyle::SizeType");
static_assert(offsetof(FSynthSlateStyle, ColorStyle) == 9, "Offset mismatch for FSynthSlateStyle::ColorStyle");

// /Script/Synthesis.TapDelayInfo
// Kind: ScriptStruct; super: none
struct FTapDelayInfo
{
public:
    std::uint8_t TapLineMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float DelayLength; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Gain; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t OutputChannel; // 0x000C (Size: 0x4, Type: IntProperty)
    float PanInDegrees; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t TapId; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTapDelayInfo, TapLineMode) == 0, "Offset mismatch for FTapDelayInfo::TapLineMode");
static_assert(offsetof(FTapDelayInfo, DelayLength) == 4, "Offset mismatch for FTapDelayInfo::DelayLength");
static_assert(offsetof(FTapDelayInfo, Gain) == 8, "Offset mismatch for FTapDelayInfo::Gain");
static_assert(offsetof(FTapDelayInfo, OutputChannel) == 12, "Offset mismatch for FTapDelayInfo::OutputChannel");
static_assert(offsetof(FTapDelayInfo, PanInDegrees) == 16, "Offset mismatch for FTapDelayInfo::PanInDegrees");
static_assert(offsetof(FTapDelayInfo, TapId) == 20, "Offset mismatch for FTapDelayInfo::TapId");

// /Script/Synthesis.AudioImpulseResponse
// Kind: Class; super: Object
class UAudioImpulseResponse
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ImpulseResponse; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumChannels; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t SampleRate; // 0x003C (Size: 0x4, Type: IntProperty)
    float NormalizationVolumeDb; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTrueStereo; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    TArray<void*> IRData; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioImpulseResponse, ImpulseResponse) == 40, "Offset mismatch for UAudioImpulseResponse::ImpulseResponse");
static_assert(offsetof(UAudioImpulseResponse, NumChannels) == 56, "Offset mismatch for UAudioImpulseResponse::NumChannels");
static_assert(offsetof(UAudioImpulseResponse, SampleRate) == 60, "Offset mismatch for UAudioImpulseResponse::SampleRate");
static_assert(offsetof(UAudioImpulseResponse, NormalizationVolumeDb) == 64, "Offset mismatch for UAudioImpulseResponse::NormalizationVolumeDb");
static_assert(offsetof(UAudioImpulseResponse, bTrueStereo) == 68, "Offset mismatch for UAudioImpulseResponse::bTrueStereo");
static_assert(offsetof(UAudioImpulseResponse, IRData) == 72, "Offset mismatch for UAudioImpulseResponse::IRData");

// /Script/Synthesis.EnvelopeFollowerListener
// Kind: Class; super: ActorComponent
class UEnvelopeFollowerListener
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UEnvelopeFollowerListener, OnEnvelopeFollowerUpdate) == 192, "Offset mismatch for UEnvelopeFollowerListener::OnEnvelopeFollowerUpdate");

// /Script/Synthesis.GranularSynth
// Kind: Class; super: SynthComponent
class UGranularSynth
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    void* GranulatedSoundWave; // 0x0620 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGranularSynth, GranulatedSoundWave) == 1568, "Offset mismatch for UGranularSynth::GranulatedSoundWave");

// /Script/Synthesis.ModularSynthComponent
// Kind: Class; super: SynthComponent
class UModularSynthComponent
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    std::int32_t VoiceCount; // 0x0620 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UModularSynthComponent, VoiceCount) == 1568, "Offset mismatch for UModularSynthComponent::VoiceCount");

// /Script/Synthesis.ModularSynthLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UModularSynthLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Synthesis.ModularSynthPresetBank
// Kind: Class; super: Object
class UModularSynthPresetBank
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Presets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UModularSynthPresetBank, Presets) == 40, "Offset mismatch for UModularSynthPresetBank::Presets");

// /Script/Synthesis.MonoWaveTableSynthPreset
// Kind: Class; super: Object
class UMonoWaveTableSynthPreset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString PresetName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bLockKeyframesToGridBool; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t LockKeyframesToGrid; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t WaveTableResolution; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0044
    TArray<void*> WaveTable; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bNormalizeWaveTables; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMonoWaveTableSynthPreset, PresetName) == 40, "Offset mismatch for UMonoWaveTableSynthPreset::PresetName");
static_assert(offsetof(UMonoWaveTableSynthPreset, bLockKeyframesToGridBool) == 56, "Offset mismatch for UMonoWaveTableSynthPreset::bLockKeyframesToGridBool");
static_assert(offsetof(UMonoWaveTableSynthPreset, LockKeyframesToGrid) == 60, "Offset mismatch for UMonoWaveTableSynthPreset::LockKeyframesToGrid");
static_assert(offsetof(UMonoWaveTableSynthPreset, WaveTableResolution) == 64, "Offset mismatch for UMonoWaveTableSynthPreset::WaveTableResolution");
static_assert(offsetof(UMonoWaveTableSynthPreset, WaveTable) == 72, "Offset mismatch for UMonoWaveTableSynthPreset::WaveTable");
static_assert(offsetof(UMonoWaveTableSynthPreset, bNormalizeWaveTables) == 88, "Offset mismatch for UMonoWaveTableSynthPreset::bNormalizeWaveTables");

// /Script/Synthesis.SourceEffectBitCrusherPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectBitCrusherPreset
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectBitCrusherPreset, Settings) == 192, "Offset mismatch for USourceEffectBitCrusherPreset::Settings");

// /Script/Synthesis.SourceEffectChorusPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectChorusPreset
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectChorusPreset, Settings) == 312, "Offset mismatch for USourceEffectChorusPreset::Settings");

// /Script/Synthesis.SourceEffectConvolutionReverbPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectConvolutionReverbPreset
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ImpulseResponse; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Settings[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlockSize; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableHardwareAcceleration; // 0x0081 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USourceEffectConvolutionReverbPreset, ImpulseResponse) == 104, "Offset mismatch for USourceEffectConvolutionReverbPreset::ImpulseResponse");
static_assert(offsetof(USourceEffectConvolutionReverbPreset, Settings) == 112, "Offset mismatch for USourceEffectConvolutionReverbPreset::Settings");
static_assert(offsetof(USourceEffectConvolutionReverbPreset, BlockSize) == 128, "Offset mismatch for USourceEffectConvolutionReverbPreset::BlockSize");
static_assert(offsetof(USourceEffectConvolutionReverbPreset, bEnableHardwareAcceleration) == 129, "Offset mismatch for USourceEffectConvolutionReverbPreset::bEnableHardwareAcceleration");

// /Script/Synthesis.SourceEffectDynamicsProcessorPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectDynamicsProcessorPreset
{
public:
    std::uint8_t Pad_0000[0xBC]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00BC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectDynamicsProcessorPreset, Settings) == 188, "Offset mismatch for USourceEffectDynamicsProcessorPreset::Settings");

// /Script/Synthesis.SourceEffectEQPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectEQPreset
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectEQPreset, Settings) == 160, "Offset mismatch for USourceEffectEQPreset::Settings");

// /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectEnvelopeFollowerPreset
{
public:
    std::uint8_t Pad_0000[0x9C]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x009C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectEnvelopeFollowerPreset, Settings) == 156, "Offset mismatch for USourceEffectEnvelopeFollowerPreset::Settings");

// /Script/Synthesis.SourceEffectFilterPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectFilterPreset
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectFilterPreset, Settings) == 176, "Offset mismatch for USourceEffectFilterPreset::Settings");

// /Script/Synthesis.SourceEffectFoldbackDistortionPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectFoldbackDistortionPreset
{
public:
    std::uint8_t Pad_0000[0x9C]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x009C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectFoldbackDistortionPreset, Settings) == 156, "Offset mismatch for USourceEffectFoldbackDistortionPreset::Settings");

// /Script/Synthesis.SourceEffectMidSideSpreaderPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectMidSideSpreaderPreset
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectMidSideSpreaderPreset, Settings) == 152, "Offset mismatch for USourceEffectMidSideSpreaderPreset::Settings");

// /Script/Synthesis.SourceEffectMotionFilterPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectMotionFilterPreset
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectMotionFilterPreset, Settings) == 200, "Offset mismatch for USourceEffectMotionFilterPreset::Settings");

// /Script/Synthesis.SourceEffectPannerPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectPannerPreset
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectPannerPreset, Settings) == 152, "Offset mismatch for USourceEffectPannerPreset::Settings");

// /Script/Synthesis.SourceEffectPhaserPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectPhaserPreset
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectPhaserPreset, Settings) == 160, "Offset mismatch for USourceEffectPhaserPreset::Settings");

// /Script/Synthesis.SourceEffectRingModulationPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectRingModulationPreset
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectRingModulationPreset, Settings) == 176, "Offset mismatch for USourceEffectRingModulationPreset::Settings");

// /Script/Synthesis.SourceEffectSimpleDelayPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectSimpleDelayPreset
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectSimpleDelayPreset, Settings) == 168, "Offset mismatch for USourceEffectSimpleDelayPreset::Settings");

// /Script/Synthesis.SourceEffectStereoDelayPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectStereoDelayPreset
{
public:
    std::uint8_t Pad_0000[0xB4]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00B4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectStereoDelayPreset, Settings) == 180, "Offset mismatch for USourceEffectStereoDelayPreset::Settings");

// /Script/Synthesis.SourceEffectWaveShaperPreset
// Kind: Class; super: SoundEffectSourcePreset
class USourceEffectWaveShaperPreset
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USourceEffectWaveShaperPreset, Settings) == 152, "Offset mismatch for USourceEffectWaveShaperPreset::Settings");

// /Script/Synthesis.SubmixEffectConvolutionReverbPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectConvolutionReverbPreset
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ImpulseResponse; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Settings[0x30]; // 0x0070 (Size: 0x30, Type: StructProperty)
    std::uint8_t BlockSize; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableHardwareAcceleration; // 0x00A1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USubmixEffectConvolutionReverbPreset, ImpulseResponse) == 104, "Offset mismatch for USubmixEffectConvolutionReverbPreset::ImpulseResponse");
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, Settings) == 112, "Offset mismatch for USubmixEffectConvolutionReverbPreset::Settings");
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, BlockSize) == 160, "Offset mismatch for USubmixEffectConvolutionReverbPreset::BlockSize");
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, bEnableHardwareAcceleration) == 161, "Offset mismatch for USubmixEffectConvolutionReverbPreset::bEnableHardwareAcceleration");

// /Script/Synthesis.SubmixEffectDelayPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectDelayPreset
{
public:
    std::uint8_t Pad_0000[0x9C]; // 0x0000
    std::uint8_t Settings[0xC]; // 0x009C (Size: 0xC, Type: StructProperty)
    std::uint8_t DynamicSettings[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubmixEffectDelayPreset, Settings) == 156, "Offset mismatch for USubmixEffectDelayPreset::Settings");
static_assert(offsetof(USubmixEffectDelayPreset, DynamicSettings) == 168, "Offset mismatch for USubmixEffectDelayPreset::DynamicSettings");

// /Script/Synthesis.SubmixEffectDelayStatics
// Kind: Class; super: BlueprintFunctionLibrary
class USubmixEffectDelayStatics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Synthesis.SubmixEffectFilterPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectFilterPreset
{
public:
    std::uint8_t Pad_0000[0x9C]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x009C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubmixEffectFilterPreset, Settings) == 156, "Offset mismatch for USubmixEffectFilterPreset::Settings");

// /Script/Synthesis.SubmixEffectFlexiverbPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectFlexiverbPreset
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubmixEffectFlexiverbPreset, Settings) == 160, "Offset mismatch for USubmixEffectFlexiverbPreset::Settings");

// /Script/Synthesis.SubmixEffectMultibandCompressorPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectMultibandCompressorPreset
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubmixEffectMultibandCompressorPreset, Settings) == 200, "Offset mismatch for USubmixEffectMultibandCompressorPreset::Settings");

// /Script/Synthesis.SubmixEffectStereoDelayPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectStereoDelayPreset
{
public:
    std::uint8_t Pad_0000[0xB4]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00B4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubmixEffectStereoDelayPreset, Settings) == 180, "Offset mismatch for USubmixEffectStereoDelayPreset::Settings");

// /Script/Synthesis.SubmixEffectStereoToQuadPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectStereoToQuadPreset
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubmixEffectStereoToQuadPreset, Settings) == 152, "Offset mismatch for USubmixEffectStereoToQuadPreset::Settings");

// /Script/Synthesis.SubmixEffectTapDelayPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectTapDelayPreset
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubmixEffectTapDelayPreset, Settings) == 168, "Offset mismatch for USubmixEffectTapDelayPreset::Settings");

// /Script/Synthesis.Synth2DSlider
// Kind: Class; super: Widget
class USynth2DSlider
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    float ValueX; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float ValueY; // 0x016C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ValueXDelegate[0xC]; // 0x0170 (Size: 0xC, Type: DelegateProperty)
    FScriptDelegate ValueYDelegate; // 0x017C (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0001[0x4]; // 0x018C
    std::uint8_t WidgetStyle[0x390]; // 0x0190 (Size: 0x390, Type: StructProperty)
    std::uint8_t SliderHandleColor[0x10]; // 0x0520 (Size: 0x10, Type: StructProperty)
    std::uint8_t IndentHandle; // 0x0530 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Locked; // 0x0531 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0532
    float StepSize; // 0x0534 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsFocusable; // 0x0538 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0539
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x0540 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x0550 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnControllerCaptureBegin; // 0x0560 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnControllerCaptureEnd; // 0x0570 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnValueChangedX; // 0x0580 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnValueChangedY; // 0x0590 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USynth2DSlider, ValueX) == 360, "Offset mismatch for USynth2DSlider::ValueX");
static_assert(offsetof(USynth2DSlider, ValueY) == 364, "Offset mismatch for USynth2DSlider::ValueY");
static_assert(offsetof(USynth2DSlider, ValueXDelegate) == 368, "Offset mismatch for USynth2DSlider::ValueXDelegate");
static_assert(offsetof(USynth2DSlider, ValueYDelegate) == 380, "Offset mismatch for USynth2DSlider::ValueYDelegate");
static_assert(offsetof(USynth2DSlider, WidgetStyle) == 400, "Offset mismatch for USynth2DSlider::WidgetStyle");
static_assert(offsetof(USynth2DSlider, SliderHandleColor) == 1312, "Offset mismatch for USynth2DSlider::SliderHandleColor");
static_assert(offsetof(USynth2DSlider, IndentHandle) == 1328, "Offset mismatch for USynth2DSlider::IndentHandle");
static_assert(offsetof(USynth2DSlider, Locked) == 1329, "Offset mismatch for USynth2DSlider::Locked");
static_assert(offsetof(USynth2DSlider, StepSize) == 1332, "Offset mismatch for USynth2DSlider::StepSize");
static_assert(offsetof(USynth2DSlider, IsFocusable) == 1336, "Offset mismatch for USynth2DSlider::IsFocusable");
static_assert(offsetof(USynth2DSlider, OnMouseCaptureBegin) == 1344, "Offset mismatch for USynth2DSlider::OnMouseCaptureBegin");
static_assert(offsetof(USynth2DSlider, OnMouseCaptureEnd) == 1360, "Offset mismatch for USynth2DSlider::OnMouseCaptureEnd");
static_assert(offsetof(USynth2DSlider, OnControllerCaptureBegin) == 1376, "Offset mismatch for USynth2DSlider::OnControllerCaptureBegin");
static_assert(offsetof(USynth2DSlider, OnControllerCaptureEnd) == 1392, "Offset mismatch for USynth2DSlider::OnControllerCaptureEnd");
static_assert(offsetof(USynth2DSlider, OnValueChangedX) == 1408, "Offset mismatch for USynth2DSlider::OnValueChangedX");
static_assert(offsetof(USynth2DSlider, OnValueChangedY) == 1424, "Offset mismatch for USynth2DSlider::OnValueChangedY");

// /Script/Synthesis.SynthComponentMonoWaveTable
// Kind: Class; super: SynthComponent
class USynthComponentMonoWaveTable
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    FMulticastInlineDelegate OnTableAltered; // 0x0620 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNumTablesChanged; // 0x0630 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CurrentPreset; // 0x0640 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USynthComponentMonoWaveTable, OnTableAltered) == 1568, "Offset mismatch for USynthComponentMonoWaveTable::OnTableAltered");
static_assert(offsetof(USynthComponentMonoWaveTable, OnNumTablesChanged) == 1584, "Offset mismatch for USynthComponentMonoWaveTable::OnNumTablesChanged");
static_assert(offsetof(USynthComponentMonoWaveTable, CurrentPreset) == 1600, "Offset mismatch for USynthComponentMonoWaveTable::CurrentPreset");

// /Script/Synthesis.SynthComponentToneGenerator
// Kind: Class; super: SynthComponent
class USynthComponentToneGenerator
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    float Frequency; // 0x0620 (Size: 0x4, Type: FloatProperty)
    float Volume; // 0x0624 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DistanceAttenuationCurve[0x48]; // 0x0628 (Size: 0x48, Type: StructProperty)
    std::uint8_t DistanceRange[0x10]; // 0x0670 (Size: 0x10, Type: StructProperty)
    float AttenuationDbAtMaxRange; // 0x0680 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USynthComponentToneGenerator, Frequency) == 1568, "Offset mismatch for USynthComponentToneGenerator::Frequency");
static_assert(offsetof(USynthComponentToneGenerator, Volume) == 1572, "Offset mismatch for USynthComponentToneGenerator::Volume");
static_assert(offsetof(USynthComponentToneGenerator, DistanceAttenuationCurve) == 1576, "Offset mismatch for USynthComponentToneGenerator::DistanceAttenuationCurve");
static_assert(offsetof(USynthComponentToneGenerator, DistanceRange) == 1648, "Offset mismatch for USynthComponentToneGenerator::DistanceRange");
static_assert(offsetof(USynthComponentToneGenerator, AttenuationDbAtMaxRange) == 1664, "Offset mismatch for USynthComponentToneGenerator::AttenuationDbAtMaxRange");

// /Script/Synthesis.SynthKnob
// Kind: Class; super: Widget
class USynthKnob
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    float Value; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float StepSize; // 0x016C (Size: 0x4, Type: FloatProperty)
    float MouseSpeed; // 0x0170 (Size: 0x4, Type: FloatProperty)
    float MouseFineTuneSpeed; // 0x0174 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ShowTooltipInfo; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    std::uint8_t ParameterName[0x10]; // 0x0180 (Size: 0x10, Type: TextProperty)
    std::uint8_t ParameterUnits[0x10]; // 0x0190 (Size: 0x10, Type: TextProperty)
    FScriptDelegate ValueDelegate; // 0x01A0 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t WidgetStyle[0x2E0]; // 0x01B0 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t Locked; // 0x0490 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsFocusable; // 0x0491 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0492
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x0498 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x04A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnControllerCaptureBegin; // 0x04B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnControllerCaptureEnd; // 0x04C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnValueChanged; // 0x04D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USynthKnob, Value) == 360, "Offset mismatch for USynthKnob::Value");
static_assert(offsetof(USynthKnob, StepSize) == 364, "Offset mismatch for USynthKnob::StepSize");
static_assert(offsetof(USynthKnob, MouseSpeed) == 368, "Offset mismatch for USynthKnob::MouseSpeed");
static_assert(offsetof(USynthKnob, MouseFineTuneSpeed) == 372, "Offset mismatch for USynthKnob::MouseFineTuneSpeed");
static_assert(offsetof(USynthKnob, ShowTooltipInfo) == 376, "Offset mismatch for USynthKnob::ShowTooltipInfo");
static_assert(offsetof(USynthKnob, ParameterName) == 384, "Offset mismatch for USynthKnob::ParameterName");
static_assert(offsetof(USynthKnob, ParameterUnits) == 400, "Offset mismatch for USynthKnob::ParameterUnits");
static_assert(offsetof(USynthKnob, ValueDelegate) == 416, "Offset mismatch for USynthKnob::ValueDelegate");
static_assert(offsetof(USynthKnob, WidgetStyle) == 432, "Offset mismatch for USynthKnob::WidgetStyle");
static_assert(offsetof(USynthKnob, Locked) == 1168, "Offset mismatch for USynthKnob::Locked");
static_assert(offsetof(USynthKnob, IsFocusable) == 1169, "Offset mismatch for USynthKnob::IsFocusable");
static_assert(offsetof(USynthKnob, OnMouseCaptureBegin) == 1176, "Offset mismatch for USynthKnob::OnMouseCaptureBegin");
static_assert(offsetof(USynthKnob, OnMouseCaptureEnd) == 1192, "Offset mismatch for USynthKnob::OnMouseCaptureEnd");
static_assert(offsetof(USynthKnob, OnControllerCaptureBegin) == 1208, "Offset mismatch for USynthKnob::OnControllerCaptureBegin");
static_assert(offsetof(USynthKnob, OnControllerCaptureEnd) == 1224, "Offset mismatch for USynthKnob::OnControllerCaptureEnd");
static_assert(offsetof(USynthKnob, OnValueChanged) == 1240, "Offset mismatch for USynthKnob::OnValueChanged");

// /Script/Synthesis.SynthSamplePlayer
// Kind: Class; super: SynthComponent
class USynthSamplePlayer
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    void* SoundWave; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnSampleLoaded; // 0x0628 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x0638 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USynthSamplePlayer, SoundWave) == 1568, "Offset mismatch for USynthSamplePlayer::SoundWave");
static_assert(offsetof(USynthSamplePlayer, OnSampleLoaded) == 1576, "Offset mismatch for USynthSamplePlayer::OnSampleLoaded");
static_assert(offsetof(USynthSamplePlayer, OnSamplePlaybackProgress) == 1592, "Offset mismatch for USynthSamplePlayer::OnSamplePlaybackProgress");

// /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USynthesisUtilitiesBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
