#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Synthesis
{
    struct AudioImpulseResponse
    {
        static constexpr std::string_view Name = "AudioImpulseResponse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ImpulseResponse = 0x28;
            static constexpr std::uintptr_t NumChannels = 0x38;
            static constexpr std::uintptr_t SampleRate = 0x3C;
            static constexpr std::uintptr_t NormalizationVolumeDb = 0x40;
            static constexpr std::uintptr_t bTrueStereo = 0x44;
            static constexpr std::uintptr_t IRData = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ImpulseResponse", 0x28, "ArrayProperty"},
            {"NumChannels", 0x38, "IntProperty"},
            {"SampleRate", 0x3C, "IntProperty"},
            {"NormalizationVolumeDb", 0x40, "FloatProperty"},
            {"bTrueStereo", 0x44, "BoolProperty"},
            {"IRData", 0x48, "ArrayProperty"},
        }};
    };

    struct DynamicsBandSettings
    {
        static constexpr std::string_view Name = "DynamicsBandSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CrossoverTopFrequency = 0x0;
            static constexpr std::uintptr_t AttackTimeMsec = 0x4;
            static constexpr std::uintptr_t ReleaseTimeMsec = 0x8;
            static constexpr std::uintptr_t ThresholdDb = 0xC;
            static constexpr std::uintptr_t Ratio = 0x10;
            static constexpr std::uintptr_t KneeBandwidthDb = 0x14;
            static constexpr std::uintptr_t InputGainDb = 0x18;
            static constexpr std::uintptr_t OutputGainDb = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CrossoverTopFrequency", 0x0, "FloatProperty"},
            {"AttackTimeMsec", 0x4, "FloatProperty"},
            {"ReleaseTimeMsec", 0x8, "FloatProperty"},
            {"ThresholdDb", 0xC, "FloatProperty"},
            {"Ratio", 0x10, "FloatProperty"},
            {"KneeBandwidthDb", 0x14, "FloatProperty"},
            {"InputGainDb", 0x18, "FloatProperty"},
            {"OutputGainDb", 0x1C, "FloatProperty"},
        }};
    };

    struct EnvelopeFollowerListener
    {
        static constexpr std::string_view Name = "EnvelopeFollowerListener";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEnvelopeFollowerUpdate = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnEnvelopeFollowerUpdate", 0xC0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct EpicSynth1Patch
    {
        static constexpr std::string_view Name = "EpicSynth1Patch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PatchSource = 0x0;
            static constexpr std::uintptr_t PatchCables = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PatchSource", 0x0, "EnumProperty"},
            {"PatchCables", 0x8, "ArrayProperty"},
        }};
    };

    struct GranularSynth
    {
        static constexpr std::string_view Name = "GranularSynth";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GranulatedSoundWave = 0x620;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GranulatedSoundWave", 0x620, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "GetCurrentPlayheadTime",
            "GetSampleDuration",
            "IsLoaded",
            "NoteOff",
            "NoteOn",
            "SetAttackTime",
            "SetDecayTime",
            "SetGrainDuration",
            "SetGrainEnvelopeType",
            "SetGrainPan",
            "SetGrainPitch",
            "SetGrainProbability",
            "SetGrainVolume",
            "SetGrainsPerSecond",
            "SetPlaybackSpeed",
            "SetPlayheadTime",
            "SetReleaseTimeMsec",
            "SetScrubMode",
            "SetSoundWave",
            "SetSustainGain",
        }};
    };

    struct ModularSynthComponent
    {
        static constexpr std::string_view Name = "ModularSynthComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VoiceCount = 0x620;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VoiceCount", 0x620, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 59> FunctionNames{{
            "CreatePatch",
            "NoteOff",
            "NoteOn",
            "SetAttackTime",
            "SetChorusDepth",
            "SetChorusEnabled",
            "SetChorusFeedback",
            "SetChorusFrequency",
            "SetDecayTime",
            "SetEnableLegato",
            "SetEnablePatch",
            "SetEnablePolyphony",
            "SetEnableRetrigger",
            "SetEnableUnison",
            "SetFilterAlgorithm",
            "SetFilterFrequency",
            "SetFilterFrequencyMod",
            "SetFilterQ",
            "SetFilterQMod",
            "SetFilterType",
            "SetGainDb",
            "SetLFOFrequency",
            "SetLFOFrequencyMod",
            "SetLFOGain",
            "SetLFOGainMod",
            "SetLFOMode",
            "SetLFOPatch",
            "SetLFOType",
            "SetModEnvAttackTime",
            "SetModEnvBiasInvert",
            "SetModEnvBiasPatch",
            "SetModEnvDecayTime",
            "SetModEnvDepth",
            "SetModEnvInvert",
            "SetModEnvPatch",
            "SetModEnvReleaseTime",
            "SetModEnvSustainGain",
            "SetOscCents",
            "SetOscFrequencyMod",
            "SetOscGain",
            "SetOscGainMod",
            "SetOscOctave",
            "SetOscPulsewidth",
            "SetOscSemitones",
            "SetOscSync",
            "SetOscType",
            "SetPan",
            "SetPitchBend",
            "SetPortamento",
            "SetReleaseTime",
            "SetSpread",
            "SetStereoDelayFeedback",
            "SetStereoDelayIsEnabled",
            "SetStereoDelayMode",
            "SetStereoDelayRatio",
            "SetStereoDelayTime",
            "SetStereoDelayWetlevel",
            "SetSustainGain",
            "SetSynthPreset",
        }};
    };

    struct ModularSynthLibrary
    {
        static constexpr std::string_view Name = "ModularSynthLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "AddModularSynthPresetToBankAsset",
        }};
    };

    struct ModularSynthPreset
    {
        static constexpr std::string_view Name = "ModularSynthPreset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnablePolyphony = 0x8;
            static constexpr std::uintptr_t Osc1Type = 0xC;
            static constexpr std::uintptr_t Osc1Gain = 0x10;
            static constexpr std::uintptr_t Osc1Octave = 0x14;
            static constexpr std::uintptr_t Osc1Semitones = 0x18;
            static constexpr std::uintptr_t Osc1Cents = 0x1C;
            static constexpr std::uintptr_t Osc1PulseWidth = 0x20;
            static constexpr std::uintptr_t Osc2Type = 0x24;
            static constexpr std::uintptr_t Osc2Gain = 0x28;
            static constexpr std::uintptr_t Osc2Octave = 0x2C;
            static constexpr std::uintptr_t Osc2Semitones = 0x30;
            static constexpr std::uintptr_t Osc2Cents = 0x34;
            static constexpr std::uintptr_t Osc2PulseWidth = 0x38;
            static constexpr std::uintptr_t Portamento = 0x3C;
            static constexpr std::uintptr_t bEnableOscillatorSync = 0x40;
            static constexpr std::uintptr_t bEnableUnison = 0x40;
            static constexpr std::uintptr_t Spread = 0x44;
            static constexpr std::uintptr_t Pan = 0x48;
            static constexpr std::uintptr_t LFO1Frequency = 0x4C;
            static constexpr std::uintptr_t LFO1Gain = 0x50;
            static constexpr std::uintptr_t LFO1Type = 0x54;
            static constexpr std::uintptr_t LFO1Mode = 0x55;
            static constexpr std::uintptr_t LFO1PatchType = 0x56;
            static constexpr std::uintptr_t LFO2Frequency = 0x58;
            static constexpr std::uintptr_t LFO2Gain = 0x5C;
            static constexpr std::uintptr_t LFO2Type = 0x60;
            static constexpr std::uintptr_t LFO2Mode = 0x61;
            static constexpr std::uintptr_t LFO2PatchType = 0x62;
            static constexpr std::uintptr_t GainDb = 0x64;
            static constexpr std::uintptr_t AttackTime = 0x68;
            static constexpr std::uintptr_t DecayTime = 0x6C;
            static constexpr std::uintptr_t SustainGain = 0x70;
            static constexpr std::uintptr_t ReleaseTime = 0x74;
            static constexpr std::uintptr_t ModEnvPatchType = 0x78;
            static constexpr std::uintptr_t ModEnvBiasPatchType = 0x79;
            static constexpr std::uintptr_t bInvertModulationEnvelope = 0x7C;
            static constexpr std::uintptr_t bInvertModulationEnvelopeBias = 0x7C;
            static constexpr std::uintptr_t ModulationEnvelopeDepth = 0x80;
            static constexpr std::uintptr_t ModulationEnvelopeAttackTime = 0x84;
            static constexpr std::uintptr_t ModulationEnvelopeDecayTime = 0x88;
            static constexpr std::uintptr_t ModulationEnvelopeSustainGain = 0x8C;
            static constexpr std::uintptr_t ModulationEnvelopeReleaseTime = 0x90;
            static constexpr std::uintptr_t bLegato = 0x94;
            static constexpr std::uintptr_t bRetrigger = 0x94;
            static constexpr std::uintptr_t FilterFrequency = 0x98;
            static constexpr std::uintptr_t FilterQ = 0x9C;
            static constexpr std::uintptr_t FilterType = 0xA0;
            static constexpr std::uintptr_t FilterAlgorithm = 0xA1;
            static constexpr std::uintptr_t bStereoDelayEnabled = 0xA4;
            static constexpr std::uintptr_t StereoDelayMode = 0xA8;
            static constexpr std::uintptr_t StereoDelayTime = 0xAC;
            static constexpr std::uintptr_t StereoDelayFeedback = 0xB0;
            static constexpr std::uintptr_t StereoDelayWetlevel = 0xB4;
            static constexpr std::uintptr_t StereoDelayRatio = 0xB8;
            static constexpr std::uintptr_t bChorusEnabled = 0xBC;
            static constexpr std::uintptr_t ChorusDepth = 0xC0;
            static constexpr std::uintptr_t ChorusFeedback = 0xC4;
            static constexpr std::uintptr_t ChorusFrequency = 0xC8;
            static constexpr std::uintptr_t Patches = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 59> Properties{{
            {"bEnablePolyphony", 0x8, "BoolProperty"},
            {"Osc1Type", 0xC, "EnumProperty"},
            {"Osc1Gain", 0x10, "FloatProperty"},
            {"Osc1Octave", 0x14, "FloatProperty"},
            {"Osc1Semitones", 0x18, "FloatProperty"},
            {"Osc1Cents", 0x1C, "FloatProperty"},
            {"Osc1PulseWidth", 0x20, "FloatProperty"},
            {"Osc2Type", 0x24, "EnumProperty"},
            {"Osc2Gain", 0x28, "FloatProperty"},
            {"Osc2Octave", 0x2C, "FloatProperty"},
            {"Osc2Semitones", 0x30, "FloatProperty"},
            {"Osc2Cents", 0x34, "FloatProperty"},
            {"Osc2PulseWidth", 0x38, "FloatProperty"},
            {"Portamento", 0x3C, "FloatProperty"},
            {"bEnableOscillatorSync", 0x40, "BoolProperty"},
            {"bEnableUnison", 0x40, "BoolProperty"},
            {"Spread", 0x44, "FloatProperty"},
            {"Pan", 0x48, "FloatProperty"},
            {"LFO1Frequency", 0x4C, "FloatProperty"},
            {"LFO1Gain", 0x50, "FloatProperty"},
            {"LFO1Type", 0x54, "EnumProperty"},
            {"LFO1Mode", 0x55, "EnumProperty"},
            {"LFO1PatchType", 0x56, "EnumProperty"},
            {"LFO2Frequency", 0x58, "FloatProperty"},
            {"LFO2Gain", 0x5C, "FloatProperty"},
            {"LFO2Type", 0x60, "EnumProperty"},
            {"LFO2Mode", 0x61, "EnumProperty"},
            {"LFO2PatchType", 0x62, "EnumProperty"},
            {"GainDb", 0x64, "FloatProperty"},
            {"AttackTime", 0x68, "FloatProperty"},
            {"DecayTime", 0x6C, "FloatProperty"},
            {"SustainGain", 0x70, "FloatProperty"},
            {"ReleaseTime", 0x74, "FloatProperty"},
            {"ModEnvPatchType", 0x78, "EnumProperty"},
            {"ModEnvBiasPatchType", 0x79, "EnumProperty"},
            {"bInvertModulationEnvelope", 0x7C, "BoolProperty"},
            {"bInvertModulationEnvelopeBias", 0x7C, "BoolProperty"},
            {"ModulationEnvelopeDepth", 0x80, "FloatProperty"},
            {"ModulationEnvelopeAttackTime", 0x84, "FloatProperty"},
            {"ModulationEnvelopeDecayTime", 0x88, "FloatProperty"},
            {"ModulationEnvelopeSustainGain", 0x8C, "FloatProperty"},
            {"ModulationEnvelopeReleaseTime", 0x90, "FloatProperty"},
            {"bLegato", 0x94, "BoolProperty"},
            {"bRetrigger", 0x94, "BoolProperty"},
            {"FilterFrequency", 0x98, "FloatProperty"},
            {"FilterQ", 0x9C, "FloatProperty"},
            {"FilterType", 0xA0, "EnumProperty"},
            {"FilterAlgorithm", 0xA1, "EnumProperty"},
            {"bStereoDelayEnabled", 0xA4, "BoolProperty"},
            {"StereoDelayMode", 0xA8, "EnumProperty"},
            {"StereoDelayTime", 0xAC, "FloatProperty"},
            {"StereoDelayFeedback", 0xB0, "FloatProperty"},
            {"StereoDelayWetlevel", 0xB4, "FloatProperty"},
            {"StereoDelayRatio", 0xB8, "FloatProperty"},
            {"bChorusEnabled", 0xBC, "BoolProperty"},
            {"ChorusDepth", 0xC0, "FloatProperty"},
            {"ChorusFeedback", 0xC4, "FloatProperty"},
            {"ChorusFrequency", 0xC8, "FloatProperty"},
            {"Patches", 0xD0, "ArrayProperty"},
        }};
    };

    struct ModularSynthPresetBank
    {
        static constexpr std::string_view Name = "ModularSynthPresetBank";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Presets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Presets", 0x28, "ArrayProperty"},
        }};
    };

    struct ModularSynthPresetBankEntry
    {
        static constexpr std::string_view Name = "ModularSynthPresetBankEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PresetName = 0x0;
            static constexpr std::uintptr_t Preset = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PresetName", 0x0, "StrProperty"},
            {"Preset", 0x10, "StructProperty"},
        }};
    };

    struct MonoWaveTableSynthPreset
    {
        static constexpr std::string_view Name = "MonoWaveTableSynthPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PresetName = 0x28;
            static constexpr std::uintptr_t bLockKeyframesToGridBool = 0x38;
            static constexpr std::uintptr_t LockKeyframesToGrid = 0x3C;
            static constexpr std::uintptr_t WaveTableResolution = 0x40;
            static constexpr std::uintptr_t WaveTable = 0x48;
            static constexpr std::uintptr_t bNormalizeWaveTables = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PresetName", 0x28, "StrProperty"},
            {"bLockKeyframesToGridBool", 0x38, "BoolProperty"},
            {"LockKeyframesToGrid", 0x3C, "IntProperty"},
            {"WaveTableResolution", 0x40, "IntProperty"},
            {"WaveTable", 0x48, "ArrayProperty"},
            {"bNormalizeWaveTables", 0x58, "BoolProperty"},
        }};
    };

    struct PatchId
    {
        static constexpr std::string_view Name = "PatchId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ID", 0x0, "IntProperty"},
        }};
    };

    struct SourceEffectBitCrusherBaseSettings
    {
        static constexpr std::string_view Name = "SourceEffectBitCrusherBaseSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SampleRate = 0x0;
            static constexpr std::uintptr_t BitDepth = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SampleRate", 0x0, "FloatProperty"},
            {"BitDepth", 0x4, "FloatProperty"},
        }};
    };

    struct SourceEffectBitCrusherPreset
    {
        static constexpr std::string_view Name = "SourceEffectBitCrusherPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xC0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "SetBitModulator",
            "SetBitModulators",
            "SetBits",
            "SetModulationSettings",
            "SetSampleRate",
            "SetSampleRateModulator",
            "SetSampleRateModulators",
            "SetSettings",
        }};
    };

    struct SourceEffectBitCrusherSettings
    {
        static constexpr std::string_view Name = "SourceEffectBitCrusherSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SampleRateModulation = 0x0;
            static constexpr std::uintptr_t BitModulation = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SampleRateModulation", 0x0, "StructProperty"},
            {"BitModulation", 0x18, "StructProperty"},
        }};
    };

    struct SourceEffectChorusBaseSettings
    {
        static constexpr std::string_view Name = "SourceEffectChorusBaseSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Depth = 0x0;
            static constexpr std::uintptr_t Frequency = 0x4;
            static constexpr std::uintptr_t Feedback = 0x8;
            static constexpr std::uintptr_t WetLevel = 0xC;
            static constexpr std::uintptr_t DryLevel = 0x10;
            static constexpr std::uintptr_t Spread = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Depth", 0x0, "FloatProperty"},
            {"Frequency", 0x4, "FloatProperty"},
            {"Feedback", 0x8, "FloatProperty"},
            {"WetLevel", 0xC, "FloatProperty"},
            {"DryLevel", 0x10, "FloatProperty"},
            {"Spread", 0x14, "FloatProperty"},
        }};
    };

    struct SourceEffectChorusPreset
    {
        static constexpr std::string_view Name = "SourceEffectChorusPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x138, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "SetDepth",
            "SetDepthModulator",
            "SetDepthModulators",
            "SetDry",
            "SetDryModulator",
            "SetDryModulators",
            "SetFeedback",
            "SetFeedbackModulator",
            "SetFeedbackModulators",
            "SetFrequency",
            "SetFrequencyModulator",
            "SetFrequencyModulators",
            "SetModulationSettings",
            "SetSettings",
            "SetSpread",
            "SetSpreadModulator",
            "SetSpreadModulators",
            "SetWet",
            "SetWetModulator",
            "SetWetModulators",
        }};
    };

    struct SourceEffectChorusSettings
    {
        static constexpr std::string_view Name = "SourceEffectChorusSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Depth = 0x0;
            static constexpr std::uintptr_t Frequency = 0x4;
            static constexpr std::uintptr_t Feedback = 0x8;
            static constexpr std::uintptr_t WetLevel = 0xC;
            static constexpr std::uintptr_t DryLevel = 0x10;
            static constexpr std::uintptr_t Spread = 0x14;
            static constexpr std::uintptr_t DepthModulation = 0x18;
            static constexpr std::uintptr_t FrequencyModulation = 0x30;
            static constexpr std::uintptr_t FeedbackModulation = 0x48;
            static constexpr std::uintptr_t WetModulation = 0x60;
            static constexpr std::uintptr_t DryModulation = 0x78;
            static constexpr std::uintptr_t SpreadModulation = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Depth", 0x0, "FloatProperty"},
            {"Frequency", 0x4, "FloatProperty"},
            {"Feedback", 0x8, "FloatProperty"},
            {"WetLevel", 0xC, "FloatProperty"},
            {"DryLevel", 0x10, "FloatProperty"},
            {"Spread", 0x14, "FloatProperty"},
            {"DepthModulation", 0x18, "StructProperty"},
            {"FrequencyModulation", 0x30, "StructProperty"},
            {"FeedbackModulation", 0x48, "StructProperty"},
            {"WetModulation", 0x60, "StructProperty"},
            {"DryModulation", 0x78, "StructProperty"},
            {"SpreadModulation", 0x90, "StructProperty"},
        }};
    };

    struct SourceEffectConvolutionReverbPreset
    {
        static constexpr std::string_view Name = "SourceEffectConvolutionReverbPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t ImpulseResponse = 0x68;
            static constexpr std::uintptr_t Settings = 0x70;
            static constexpr std::uintptr_t BlockSize = 0x80;
            static constexpr std::uintptr_t bEnableHardwareAcceleration = 0x81;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ImpulseResponse", 0x68, "ObjectProperty"},
            {"Settings", 0x70, "StructProperty"},
            {"BlockSize", 0x80, "EnumProperty"},
            {"bEnableHardwareAcceleration", 0x81, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetImpulseResponse",
            "SetSettings",
        }};
    };

    struct SourceEffectConvolutionReverbSettings
    {
        static constexpr std::string_view Name = "SourceEffectConvolutionReverbSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NormalizationVolumeDb = 0x0;
            static constexpr std::uintptr_t WetVolumeDb = 0x4;
            static constexpr std::uintptr_t DryVolumeDb = 0x8;
            static constexpr std::uintptr_t bBypass = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NormalizationVolumeDb", 0x0, "FloatProperty"},
            {"WetVolumeDb", 0x4, "FloatProperty"},
            {"DryVolumeDb", 0x8, "FloatProperty"},
            {"bBypass", 0xC, "BoolProperty"},
        }};
    };

    struct SourceEffectDynamicsProcessorPreset
    {
        static constexpr std::string_view Name = "SourceEffectDynamicsProcessorPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xBC, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectDynamicsProcessorSettings
    {
        static constexpr std::string_view Name = "SourceEffectDynamicsProcessorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicsProcessorType = 0x0;
            static constexpr std::uintptr_t PeakMode = 0x1;
            static constexpr std::uintptr_t LookAheadMsec = 0x4;
            static constexpr std::uintptr_t AttackTimeMsec = 0x8;
            static constexpr std::uintptr_t ReleaseTimeMsec = 0xC;
            static constexpr std::uintptr_t ThresholdDb = 0x10;
            static constexpr std::uintptr_t Ratio = 0x14;
            static constexpr std::uintptr_t KneeBandwidthDb = 0x18;
            static constexpr std::uintptr_t InputGainDb = 0x1C;
            static constexpr std::uintptr_t OutputGainDb = 0x20;
            static constexpr std::uintptr_t bAnalogMode = 0x24;
            static constexpr std::uintptr_t bStereoLinked = 0x24;
            static constexpr std::uintptr_t bBypass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"DynamicsProcessorType", 0x0, "EnumProperty"},
            {"PeakMode", 0x1, "EnumProperty"},
            {"LookAheadMsec", 0x4, "FloatProperty"},
            {"AttackTimeMsec", 0x8, "FloatProperty"},
            {"ReleaseTimeMsec", 0xC, "FloatProperty"},
            {"ThresholdDb", 0x10, "FloatProperty"},
            {"Ratio", 0x14, "FloatProperty"},
            {"KneeBandwidthDb", 0x18, "FloatProperty"},
            {"InputGainDb", 0x1C, "FloatProperty"},
            {"OutputGainDb", 0x20, "FloatProperty"},
            {"bAnalogMode", 0x24, "BoolProperty"},
            {"bStereoLinked", 0x24, "BoolProperty"},
            {"bBypass", 0x28, "BoolProperty"},
        }};
    };

    struct SourceEffectEQBand
    {
        static constexpr std::string_view Name = "SourceEffectEQBand";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrequencyModulation = 0x0;
            static constexpr std::uintptr_t BandwidthModulation = 0x18;
            static constexpr std::uintptr_t GainDbModulation = 0x30;
            static constexpr std::uintptr_t bEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FrequencyModulation", 0x0, "StructProperty"},
            {"BandwidthModulation", 0x18, "StructProperty"},
            {"GainDbModulation", 0x30, "StructProperty"},
            {"bEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct SourceEffectEQPreset
    {
        static constexpr std::string_view Name = "SourceEffectEQPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xA0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "SetBandBandwidth",
            "SetBandBandwidthModulator",
            "SetBandBandwidthModulators",
            "SetBandFrequency",
            "SetBandFrequencyModulator",
            "SetBandFrequencyModulators",
            "SetBandGain",
            "SetBandGainModulator",
            "SetBandGainModulators",
            "SetSettings",
        }};
    };

    struct SourceEffectEQSettings
    {
        static constexpr std::string_view Name = "SourceEffectEQSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EqBands = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EqBands", 0x0, "ArrayProperty"},
        }};
    };

    struct SourceEffectEnvelopeFollowerPreset
    {
        static constexpr std::string_view Name = "SourceEffectEnvelopeFollowerPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x9C, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "RegisterEnvelopeFollowerListener",
            "SetSettings",
            "UnregisterEnvelopeFollowerListener",
        }};
    };

    struct SourceEffectEnvelopeFollowerSettings
    {
        static constexpr std::string_view Name = "SourceEffectEnvelopeFollowerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttackTime = 0x0;
            static constexpr std::uintptr_t ReleaseTime = 0x4;
            static constexpr std::uintptr_t PeakMode = 0x8;
            static constexpr std::uintptr_t bIsAnalogMode = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AttackTime", 0x0, "FloatProperty"},
            {"ReleaseTime", 0x4, "FloatProperty"},
            {"PeakMode", 0x8, "EnumProperty"},
            {"bIsAnalogMode", 0x9, "BoolProperty"},
        }};
    };

    struct SourceEffectFilterAudioBusModulationSettings
    {
        static constexpr std::string_view Name = "SourceEffectFilterAudioBusModulationSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioBus = 0x0;
            static constexpr std::uintptr_t EnvelopeFollowerAttackTimeMsec = 0x8;
            static constexpr std::uintptr_t EnvelopeFollowerReleaseTimeMsec = 0xC;
            static constexpr std::uintptr_t EnvelopeGainMultiplier = 0x10;
            static constexpr std::uintptr_t FilterParam = 0x14;
            static constexpr std::uintptr_t MinFrequencyModulation = 0x18;
            static constexpr std::uintptr_t MaxFrequencyModulation = 0x1C;
            static constexpr std::uintptr_t MinResonanceModulation = 0x20;
            static constexpr std::uintptr_t MaxResonanceModulation = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AudioBus", 0x0, "ObjectProperty"},
            {"EnvelopeFollowerAttackTimeMsec", 0x8, "IntProperty"},
            {"EnvelopeFollowerReleaseTimeMsec", 0xC, "IntProperty"},
            {"EnvelopeGainMultiplier", 0x10, "FloatProperty"},
            {"FilterParam", 0x14, "EnumProperty"},
            {"MinFrequencyModulation", 0x18, "FloatProperty"},
            {"MaxFrequencyModulation", 0x1C, "FloatProperty"},
            {"MinResonanceModulation", 0x20, "FloatProperty"},
            {"MaxResonanceModulation", 0x24, "FloatProperty"},
        }};
    };

    struct SourceEffectFilterPreset
    {
        static constexpr std::string_view Name = "SourceEffectFilterPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xB0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectFilterSettings
    {
        static constexpr std::string_view Name = "SourceEffectFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterCircuit = 0x0;
            static constexpr std::uintptr_t FilterType = 0x1;
            static constexpr std::uintptr_t CutoffFrequency = 0x4;
            static constexpr std::uintptr_t FilterQ = 0x8;
            static constexpr std::uintptr_t AudioBusModulation = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FilterCircuit", 0x0, "EnumProperty"},
            {"FilterType", 0x1, "EnumProperty"},
            {"CutoffFrequency", 0x4, "FloatProperty"},
            {"FilterQ", 0x8, "FloatProperty"},
            {"AudioBusModulation", 0x10, "ArrayProperty"},
        }};
    };

    struct SourceEffectFoldbackDistortionPreset
    {
        static constexpr std::string_view Name = "SourceEffectFoldbackDistortionPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x9C, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectFoldbackDistortionSettings
    {
        static constexpr std::string_view Name = "SourceEffectFoldbackDistortionSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputGainDb = 0x0;
            static constexpr std::uintptr_t ThresholdDb = 0x4;
            static constexpr std::uintptr_t OutputGainDb = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputGainDb", 0x0, "FloatProperty"},
            {"ThresholdDb", 0x4, "FloatProperty"},
            {"OutputGainDb", 0x8, "FloatProperty"},
        }};
    };

    struct SourceEffectIndividualFilterSettings
    {
        static constexpr std::string_view Name = "SourceEffectIndividualFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterCircuit = 0x0;
            static constexpr std::uintptr_t FilterType = 0x1;
            static constexpr std::uintptr_t CutoffFrequency = 0x4;
            static constexpr std::uintptr_t FilterQ = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FilterCircuit", 0x0, "EnumProperty"},
            {"FilterType", 0x1, "EnumProperty"},
            {"CutoffFrequency", 0x4, "FloatProperty"},
            {"FilterQ", 0x8, "FloatProperty"},
        }};
    };

    struct SourceEffectMidSideSpreaderPreset
    {
        static constexpr std::string_view Name = "SourceEffectMidSideSpreaderPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x98, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectMidSideSpreaderSettings
    {
        static constexpr std::string_view Name = "SourceEffectMidSideSpreaderSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpreadAmount = 0x0;
            static constexpr std::uintptr_t InputMode = 0x4;
            static constexpr std::uintptr_t OutputMode = 0x5;
            static constexpr std::uintptr_t bEqualPower = 0x6;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SpreadAmount", 0x0, "FloatProperty"},
            {"InputMode", 0x4, "EnumProperty"},
            {"OutputMode", 0x5, "EnumProperty"},
            {"bEqualPower", 0x6, "BoolProperty"},
        }};
    };

    struct SourceEffectMotionFilterModulationSettings
    {
        static constexpr std::string_view Name = "SourceEffectMotionFilterModulationSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModulationSource = 0x0;
            static constexpr std::uintptr_t ModulationInputRange = 0x8;
            static constexpr std::uintptr_t ModulationOutputMinimumRange = 0x18;
            static constexpr std::uintptr_t ModulationOutputMaximumRange = 0x28;
            static constexpr std::uintptr_t UpdateEaseMS = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ModulationSource", 0x0, "EnumProperty"},
            {"ModulationInputRange", 0x8, "StructProperty"},
            {"ModulationOutputMinimumRange", 0x18, "StructProperty"},
            {"ModulationOutputMaximumRange", 0x28, "StructProperty"},
            {"UpdateEaseMS", 0x38, "FloatProperty"},
        }};
    };

    struct SourceEffectMotionFilterPreset
    {
        static constexpr std::string_view Name = "SourceEffectMotionFilterPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xC8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectMotionFilterSettings
    {
        static constexpr std::string_view Name = "SourceEffectMotionFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MotionFilterTopology = 0x0;
            static constexpr std::uintptr_t MotionFilterMix = 0x4;
            static constexpr std::uintptr_t FilterASettings = 0x8;
            static constexpr std::uintptr_t FilterBSettings = 0x14;
            static constexpr std::uintptr_t ModulationMappings = 0x20;
            static constexpr std::uintptr_t DryVolumeDb = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MotionFilterTopology", 0x0, "EnumProperty"},
            {"MotionFilterMix", 0x4, "FloatProperty"},
            {"FilterASettings", 0x8, "StructProperty"},
            {"FilterBSettings", 0x14, "StructProperty"},
            {"ModulationMappings", 0x20, "MapProperty"},
            {"DryVolumeDb", 0x30, "FloatProperty"},
        }};
    };

    struct SourceEffectPannerPreset
    {
        static constexpr std::string_view Name = "SourceEffectPannerPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x98, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectPannerSettings
    {
        static constexpr std::string_view Name = "SourceEffectPannerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Spread = 0x0;
            static constexpr std::uintptr_t Pan = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Spread", 0x0, "FloatProperty"},
            {"Pan", 0x4, "FloatProperty"},
        }};
    };

    struct SourceEffectPhaserPreset
    {
        static constexpr std::string_view Name = "SourceEffectPhaserPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xA0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectPhaserSettings
    {
        static constexpr std::string_view Name = "SourceEffectPhaserSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WetLevel = 0x0;
            static constexpr std::uintptr_t Frequency = 0x4;
            static constexpr std::uintptr_t Feedback = 0x8;
            static constexpr std::uintptr_t LFOType = 0xC;
            static constexpr std::uintptr_t UseQuadraturePhase = 0xD;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WetLevel", 0x0, "FloatProperty"},
            {"Frequency", 0x4, "FloatProperty"},
            {"Feedback", 0x8, "FloatProperty"},
            {"LFOType", 0xC, "EnumProperty"},
            {"UseQuadraturePhase", 0xD, "BoolProperty"},
        }};
    };

    struct SourceEffectRingModulationPreset
    {
        static constexpr std::string_view Name = "SourceEffectRingModulationPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xB0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectRingModulationSettings
    {
        static constexpr std::string_view Name = "SourceEffectRingModulationSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModulatorType = 0x0;
            static constexpr std::uintptr_t Frequency = 0x4;
            static constexpr std::uintptr_t Depth = 0x8;
            static constexpr std::uintptr_t DryLevel = 0xC;
            static constexpr std::uintptr_t WetLevel = 0x10;
            static constexpr std::uintptr_t AudioBusModulator = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ModulatorType", 0x0, "EnumProperty"},
            {"Frequency", 0x4, "FloatProperty"},
            {"Depth", 0x8, "FloatProperty"},
            {"DryLevel", 0xC, "FloatProperty"},
            {"WetLevel", 0x10, "FloatProperty"},
            {"AudioBusModulator", 0x18, "ObjectProperty"},
        }};
    };

    struct SourceEffectSimpleDelayPreset
    {
        static constexpr std::string_view Name = "SourceEffectSimpleDelayPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xA8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectSimpleDelaySettings
    {
        static constexpr std::string_view Name = "SourceEffectSimpleDelaySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedOfSound = 0x0;
            static constexpr std::uintptr_t DelayAmount = 0x4;
            static constexpr std::uintptr_t DryAmount = 0x8;
            static constexpr std::uintptr_t WetAmount = 0xC;
            static constexpr std::uintptr_t Feedback = 0x10;
            static constexpr std::uintptr_t bDelayBasedOnDistance = 0x14;
            static constexpr std::uintptr_t bUseDistanceOverride = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SpeedOfSound", 0x0, "FloatProperty"},
            {"DelayAmount", 0x4, "FloatProperty"},
            {"DryAmount", 0x8, "FloatProperty"},
            {"WetAmount", 0xC, "FloatProperty"},
            {"Feedback", 0x10, "FloatProperty"},
            {"bDelayBasedOnDistance", 0x14, "BoolProperty"},
            {"bUseDistanceOverride", 0x14, "BoolProperty"},
        }};
    };

    struct SourceEffectStereoDelayPreset
    {
        static constexpr std::string_view Name = "SourceEffectStereoDelayPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xB4, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectStereoDelaySettings
    {
        static constexpr std::string_view Name = "SourceEffectStereoDelaySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayMode = 0x0;
            static constexpr std::uintptr_t DelayTimeMsec = 0x4;
            static constexpr std::uintptr_t Feedback = 0x8;
            static constexpr std::uintptr_t DelayRatio = 0xC;
            static constexpr std::uintptr_t WetLevel = 0x10;
            static constexpr std::uintptr_t DryLevel = 0x14;
            static constexpr std::uintptr_t bFilterEnabled = 0x18;
            static constexpr std::uintptr_t FilterType = 0x19;
            static constexpr std::uintptr_t FilterFrequency = 0x1C;
            static constexpr std::uintptr_t FilterQ = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"DelayMode", 0x0, "EnumProperty"},
            {"DelayTimeMsec", 0x4, "FloatProperty"},
            {"Feedback", 0x8, "FloatProperty"},
            {"DelayRatio", 0xC, "FloatProperty"},
            {"WetLevel", 0x10, "FloatProperty"},
            {"DryLevel", 0x14, "FloatProperty"},
            {"bFilterEnabled", 0x18, "BoolProperty"},
            {"FilterType", 0x19, "EnumProperty"},
            {"FilterFrequency", 0x1C, "FloatProperty"},
            {"FilterQ", 0x20, "FloatProperty"},
        }};
    };

    struct SourceEffectWaveShaperPreset
    {
        static constexpr std::string_view Name = "SourceEffectWaveShaperPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSourcePreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x98, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SourceEffectWaveShaperSettings
    {
        static constexpr std::string_view Name = "SourceEffectWaveShaperSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Amount = 0x0;
            static constexpr std::uintptr_t OutputGainDb = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Amount", 0x0, "FloatProperty"},
            {"OutputGainDb", 0x4, "FloatProperty"},
        }};
    };

    struct SubmixEffectConvolutionReverbPreset
    {
        static constexpr std::string_view Name = "SubmixEffectConvolutionReverbPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t ImpulseResponse = 0x68;
            static constexpr std::uintptr_t Settings = 0x70;
            static constexpr std::uintptr_t BlockSize = 0xA0;
            static constexpr std::uintptr_t bEnableHardwareAcceleration = 0xA1;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ImpulseResponse", 0x68, "ObjectProperty"},
            {"Settings", 0x70, "StructProperty"},
            {"BlockSize", 0xA0, "EnumProperty"},
            {"bEnableHardwareAcceleration", 0xA1, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetImpulseResponse",
            "SetSettings",
        }};
    };

    struct SubmixEffectConvolutionReverbSettings
    {
        static constexpr std::string_view Name = "SubmixEffectConvolutionReverbSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NormalizationVolumeDb = 0x0;
            static constexpr std::uintptr_t WetVolumeDb = 0x4;
            static constexpr std::uintptr_t DryVolumeDb = 0x8;
            static constexpr std::uintptr_t bBypass = 0xC;
            static constexpr std::uintptr_t bMixInputChannelFormatToImpulseResponseFormat = 0xD;
            static constexpr std::uintptr_t bMixReverbOutputToOutputChannelFormat = 0xE;
            static constexpr std::uintptr_t SurroundRearChannelBleedDb = 0x10;
            static constexpr std::uintptr_t bInvertRearChannelBleedPhase = 0x14;
            static constexpr std::uintptr_t bSurroundRearChannelFlip = 0x15;
            static constexpr std::uintptr_t SurroundRearChannelBleedAmount = 0x18;
            static constexpr std::uintptr_t ImpulseResponse = 0x20;
            static constexpr std::uintptr_t AllowHardwareAcceleration = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"NormalizationVolumeDb", 0x0, "FloatProperty"},
            {"WetVolumeDb", 0x4, "FloatProperty"},
            {"DryVolumeDb", 0x8, "FloatProperty"},
            {"bBypass", 0xC, "BoolProperty"},
            {"bMixInputChannelFormatToImpulseResponseFormat", 0xD, "BoolProperty"},
            {"bMixReverbOutputToOutputChannelFormat", 0xE, "BoolProperty"},
            {"SurroundRearChannelBleedDb", 0x10, "FloatProperty"},
            {"bInvertRearChannelBleedPhase", 0x14, "BoolProperty"},
            {"bSurroundRearChannelFlip", 0x15, "BoolProperty"},
            {"SurroundRearChannelBleedAmount", 0x18, "FloatProperty"},
            {"ImpulseResponse", 0x20, "ObjectProperty"},
            {"AllowHardwareAcceleration", 0x28, "BoolProperty"},
        }};
    };

    struct SubmixEffectDelayPreset
    {
        static constexpr std::string_view Name = "SubmixEffectDelayPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x9C;
            static constexpr std::uintptr_t DynamicSettings = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x9C, "StructProperty"},
            {"DynamicSettings", 0xA8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetMaxDelayInMilliseconds",
            "SetDefaultSettings",
            "SetDelay",
            "SetInterpolationTime",
            "SetSettings",
        }};
    };

    struct SubmixEffectDelaySettings
    {
        static constexpr std::string_view Name = "SubmixEffectDelaySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaximumDelayLength = 0x0;
            static constexpr std::uintptr_t InterpolationTime = 0x4;
            static constexpr std::uintptr_t DelayLength = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaximumDelayLength", 0x0, "FloatProperty"},
            {"InterpolationTime", 0x4, "FloatProperty"},
            {"DelayLength", 0x8, "FloatProperty"},
        }};
    };

    struct SubmixEffectDelayStatics
    {
        static constexpr std::string_view Name = "SubmixEffectDelayStatics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetDelayLength",
            "SetInterpolationTime",
            "SetMaximumDelayLength",
        }};
    };

    struct SubmixEffectFilterPreset
    {
        static constexpr std::string_view Name = "SubmixEffectFilterPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x9C, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "SetFilterAlgorithm",
            "SetFilterCutoffFrequency",
            "SetFilterCutoffFrequencyMod",
            "SetFilterQ",
            "SetFilterQMod",
            "SetFilterType",
            "SetSettings",
        }};
    };

    struct SubmixEffectFilterSettings
    {
        static constexpr std::string_view Name = "SubmixEffectFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterType = 0x0;
            static constexpr std::uintptr_t FilterAlgorithm = 0x1;
            static constexpr std::uintptr_t FilterFrequency = 0x4;
            static constexpr std::uintptr_t FilterQ = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FilterType", 0x0, "EnumProperty"},
            {"FilterAlgorithm", 0x1, "EnumProperty"},
            {"FilterFrequency", 0x4, "FloatProperty"},
            {"FilterQ", 0x8, "FloatProperty"},
        }};
    };

    struct SubmixEffectFlexiverbPreset
    {
        static constexpr std::string_view Name = "SubmixEffectFlexiverbPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xA0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SubmixEffectFlexiverbSettings
    {
        static constexpr std::string_view Name = "SubmixEffectFlexiverbSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PreDelay = 0x0;
            static constexpr std::uintptr_t DecayTime = 0x4;
            static constexpr std::uintptr_t RoomDampening = 0x8;
            static constexpr std::uintptr_t Complexity = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PreDelay", 0x0, "FloatProperty"},
            {"DecayTime", 0x4, "FloatProperty"},
            {"RoomDampening", 0x8, "FloatProperty"},
            {"Complexity", 0xC, "IntProperty"},
        }};
    };

    struct SubmixEffectMultibandCompressorPreset
    {
        static constexpr std::string_view Name = "SubmixEffectMultibandCompressorPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xC8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ResetKey",
            "SetAudioBus",
            "SetExternalSubmix",
            "SetSettings",
        }};
    };

    struct SubmixEffectMultibandCompressorSettings
    {
        static constexpr std::string_view Name = "SubmixEffectMultibandCompressorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicsProcessorType = 0x0;
            static constexpr std::uintptr_t PeakMode = 0x1;
            static constexpr std::uintptr_t LinkMode = 0x2;
            static constexpr std::uintptr_t LookAheadMsec = 0x4;
            static constexpr std::uintptr_t bAnalogMode = 0x8;
            static constexpr std::uintptr_t bFourPole = 0x9;
            static constexpr std::uintptr_t bBypass = 0xA;
            static constexpr std::uintptr_t KeySource = 0xB;
            static constexpr std::uintptr_t ExternalAudioBus = 0x10;
            static constexpr std::uintptr_t ExternalSubmix = 0x18;
            static constexpr std::uintptr_t KeyGainDb = 0x20;
            static constexpr std::uintptr_t bKeyAudition = 0x24;
            static constexpr std::uintptr_t Bands = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"DynamicsProcessorType", 0x0, "EnumProperty"},
            {"PeakMode", 0x1, "EnumProperty"},
            {"LinkMode", 0x2, "EnumProperty"},
            {"LookAheadMsec", 0x4, "FloatProperty"},
            {"bAnalogMode", 0x8, "BoolProperty"},
            {"bFourPole", 0x9, "BoolProperty"},
            {"bBypass", 0xA, "BoolProperty"},
            {"KeySource", 0xB, "EnumProperty"},
            {"ExternalAudioBus", 0x10, "ObjectProperty"},
            {"ExternalSubmix", 0x18, "ObjectProperty"},
            {"KeyGainDb", 0x20, "FloatProperty"},
            {"bKeyAudition", 0x24, "BoolProperty"},
            {"Bands", 0x28, "ArrayProperty"},
        }};
    };

    struct SubmixEffectStereoDelayPreset
    {
        static constexpr std::string_view Name = "SubmixEffectStereoDelayPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xB4, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SubmixEffectStereoDelaySettings
    {
        static constexpr std::string_view Name = "SubmixEffectStereoDelaySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayMode = 0x0;
            static constexpr std::uintptr_t DelayTimeMsec = 0x4;
            static constexpr std::uintptr_t Feedback = 0x8;
            static constexpr std::uintptr_t DelayRatio = 0xC;
            static constexpr std::uintptr_t WetLevel = 0x10;
            static constexpr std::uintptr_t DryLevel = 0x14;
            static constexpr std::uintptr_t bFilterEnabled = 0x18;
            static constexpr std::uintptr_t FilterType = 0x19;
            static constexpr std::uintptr_t FilterFrequency = 0x1C;
            static constexpr std::uintptr_t FilterQ = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"DelayMode", 0x0, "EnumProperty"},
            {"DelayTimeMsec", 0x4, "FloatProperty"},
            {"Feedback", 0x8, "FloatProperty"},
            {"DelayRatio", 0xC, "FloatProperty"},
            {"WetLevel", 0x10, "FloatProperty"},
            {"DryLevel", 0x14, "FloatProperty"},
            {"bFilterEnabled", 0x18, "BoolProperty"},
            {"FilterType", 0x19, "EnumProperty"},
            {"FilterFrequency", 0x1C, "FloatProperty"},
            {"FilterQ", 0x20, "FloatProperty"},
        }};
    };

    struct SubmixEffectStereoToQuadPreset
    {
        static constexpr std::string_view Name = "SubmixEffectStereoToQuadPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x98, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SubmixEffectStereoToQuadSettings
    {
        static constexpr std::string_view Name = "SubmixEffectStereoToQuadSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bFlipChannels = 0x0;
            static constexpr std::uintptr_t RearChannelGain = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bFlipChannels", 0x0, "BoolProperty"},
            {"RearChannelGain", 0x4, "FloatProperty"},
        }};
    };

    struct SubmixEffectTapDelayPreset
    {
        static constexpr std::string_view Name = "SubmixEffectTapDelayPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xA8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "AddTap",
            "GetMaxDelayInMilliseconds",
            "GetTap",
            "GetTapIds",
            "RemoveTap",
            "SetInterpolationTime",
            "SetSettings",
            "SetTap",
        }};
    };

    struct SubmixEffectTapDelaySettings
    {
        static constexpr std::string_view Name = "SubmixEffectTapDelaySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaximumDelayLength = 0x0;
            static constexpr std::uintptr_t InterpolationTime = 0x4;
            static constexpr std::uintptr_t Taps = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaximumDelayLength", 0x0, "FloatProperty"},
            {"InterpolationTime", 0x4, "FloatProperty"},
            {"Taps", 0x8, "ArrayProperty"},
        }};
    };

    struct Synth1PatchCable
    {
        static constexpr std::string_view Name = "Synth1PatchCable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Depth = 0x0;
            static constexpr std::uintptr_t Destination = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Depth", 0x0, "FloatProperty"},
            {"Destination", 0x4, "EnumProperty"},
        }};
    };

    struct Synth2DSlider
    {
        static constexpr std::string_view Name = "Synth2DSlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueX = 0x168;
            static constexpr std::uintptr_t ValueY = 0x16C;
            static constexpr std::uintptr_t ValueXDelegate = 0x170;
            static constexpr std::uintptr_t ValueYDelegate = 0x17C;
            static constexpr std::uintptr_t WidgetStyle = 0x190;
            static constexpr std::uintptr_t SliderHandleColor = 0x520;
            static constexpr std::uintptr_t IndentHandle = 0x530;
            static constexpr std::uintptr_t Locked = 0x531;
            static constexpr std::uintptr_t StepSize = 0x534;
            static constexpr std::uintptr_t IsFocusable = 0x538;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x540;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x550;
            static constexpr std::uintptr_t OnControllerCaptureBegin = 0x560;
            static constexpr std::uintptr_t OnControllerCaptureEnd = 0x570;
            static constexpr std::uintptr_t OnValueChangedX = 0x580;
            static constexpr std::uintptr_t OnValueChangedY = 0x590;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ValueX", 0x168, "FloatProperty"},
            {"ValueY", 0x16C, "FloatProperty"},
            {"ValueXDelegate", 0x170, "DelegateProperty"},
            {"ValueYDelegate", 0x17C, "DelegateProperty"},
            {"WidgetStyle", 0x190, "StructProperty"},
            {"SliderHandleColor", 0x520, "StructProperty"},
            {"IndentHandle", 0x530, "BoolProperty"},
            {"Locked", 0x531, "BoolProperty"},
            {"StepSize", 0x534, "FloatProperty"},
            {"IsFocusable", 0x538, "BoolProperty"},
            {"OnMouseCaptureBegin", 0x540, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x550, "MulticastInlineDelegateProperty"},
            {"OnControllerCaptureBegin", 0x560, "MulticastInlineDelegateProperty"},
            {"OnControllerCaptureEnd", 0x570, "MulticastInlineDelegateProperty"},
            {"OnValueChangedX", 0x580, "MulticastInlineDelegateProperty"},
            {"OnValueChangedY", 0x590, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetValue",
            "SetIndentHandle",
            "SetLocked",
            "SetSliderHandleColor",
            "SetStepSize",
            "SetValue",
        }};
    };

    struct Synth2DSliderStyle
    {
        static constexpr std::string_view Name = "Synth2DSliderStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t NormalThumbImage = 0x10;
            static constexpr std::uintptr_t DisabledThumbImage = 0xC0;
            static constexpr std::uintptr_t NormalBarImage = 0x170;
            static constexpr std::uintptr_t DisabledBarImage = 0x220;
            static constexpr std::uintptr_t BackgroundImage = 0x2D0;
            static constexpr std::uintptr_t BarThickness = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NormalThumbImage", 0x10, "StructProperty"},
            {"DisabledThumbImage", 0xC0, "StructProperty"},
            {"NormalBarImage", 0x170, "StructProperty"},
            {"DisabledBarImage", 0x220, "StructProperty"},
            {"BackgroundImage", 0x2D0, "StructProperty"},
            {"BarThickness", 0x380, "FloatProperty"},
        }};
    };

    struct SynthComponentMonoWaveTable
    {
        static constexpr std::string_view Name = "SynthComponentMonoWaveTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTableAltered = 0x620;
            static constexpr std::uintptr_t OnNumTablesChanged = 0x630;
            static constexpr std::uintptr_t CurrentPreset = 0x640;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnTableAltered", 0x620, "MulticastInlineDelegateProperty"},
            {"OnNumTablesChanged", 0x630, "MulticastInlineDelegateProperty"},
            {"CurrentPreset", 0x640, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 44> FunctionNames{{
            "GetCurveTangent",
            "GetKeyFrameValuesForTable",
            "GetMaxTableIndex",
            "GetNumTableEntries",
            "NoteOff",
            "NoteOn",
            "RefreshAllWaveTables",
            "RefreshWaveTable",
            "SetAmpEnvelopeAttackTime",
            "SetAmpEnvelopeBiasDepth",
            "SetAmpEnvelopeBiasInvert",
            "SetAmpEnvelopeDecayTime",
            "SetAmpEnvelopeDepth",
            "SetAmpEnvelopeInvert",
            "SetAmpEnvelopeReleaseTime",
            "SetAmpEnvelopeSustainGain",
            "SetCurveInterpolationType",
            "SetCurveTangent",
            "SetCurveValue",
            "SetFilterEnvelopeAttackTime",
            "SetFilterEnvelopeBiasDepth",
            "SetFilterEnvelopeBiasInvert",
            "SetFilterEnvelopeDepth",
            "SetFilterEnvelopeInvert",
            "SetFilterEnvelopeReleaseTime",
            "SetFilterEnvelopeSustainGain",
            "SetFilterEnvelopenDecayTime",
            "SetFrequency",
            "SetFrequencyPitchBend",
            "SetFrequencyWithMidiNote",
            "SetLowPassFilterResonance",
            "SetPosLfoDepth",
            "SetPosLfoFrequency",
            "SetPosLfoType",
            "SetPositionEnvelopeAttackTime",
            "SetPositionEnvelopeBiasDepth",
            "SetPositionEnvelopeBiasInvert",
            "SetPositionEnvelopeDecayTime",
            "SetPositionEnvelopeDepth",
            "SetPositionEnvelopeInvert",
            "SetPositionEnvelopeReleaseTime",
            "SetPositionEnvelopeSustainGain",
            "SetSustainPedalState",
            "SetWaveTablePosition",
        }};
    };

    struct SynthComponentToneGenerator
    {
        static constexpr std::string_view Name = "SynthComponentToneGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Frequency = 0x620;
            static constexpr std::uintptr_t Volume = 0x624;
            static constexpr std::uintptr_t DistanceAttenuationCurve = 0x628;
            static constexpr std::uintptr_t DistanceRange = 0x670;
            static constexpr std::uintptr_t AttenuationDbAtMaxRange = 0x680;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Frequency", 0x620, "FloatProperty"},
            {"Volume", 0x624, "FloatProperty"},
            {"DistanceAttenuationCurve", 0x628, "StructProperty"},
            {"DistanceRange", 0x670, "StructProperty"},
            {"AttenuationDbAtMaxRange", 0x680, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetFrequency",
            "SetVolume",
        }};
    };

    struct SynthKnob
    {
        static constexpr std::string_view Name = "SynthKnob";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x168;
            static constexpr std::uintptr_t StepSize = 0x16C;
            static constexpr std::uintptr_t MouseSpeed = 0x170;
            static constexpr std::uintptr_t MouseFineTuneSpeed = 0x174;
            static constexpr std::uintptr_t ShowTooltipInfo = 0x178;
            static constexpr std::uintptr_t ParameterName = 0x180;
            static constexpr std::uintptr_t ParameterUnits = 0x190;
            static constexpr std::uintptr_t ValueDelegate = 0x1A0;
            static constexpr std::uintptr_t WidgetStyle = 0x1B0;
            static constexpr std::uintptr_t Locked = 0x490;
            static constexpr std::uintptr_t IsFocusable = 0x491;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x498;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x4A8;
            static constexpr std::uintptr_t OnControllerCaptureBegin = 0x4B8;
            static constexpr std::uintptr_t OnControllerCaptureEnd = 0x4C8;
            static constexpr std::uintptr_t OnValueChanged = 0x4D8;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Value", 0x168, "FloatProperty"},
            {"StepSize", 0x16C, "FloatProperty"},
            {"MouseSpeed", 0x170, "FloatProperty"},
            {"MouseFineTuneSpeed", 0x174, "FloatProperty"},
            {"ShowTooltipInfo", 0x178, "BoolProperty"},
            {"ParameterName", 0x180, "TextProperty"},
            {"ParameterUnits", 0x190, "TextProperty"},
            {"ValueDelegate", 0x1A0, "DelegateProperty"},
            {"WidgetStyle", 0x1B0, "StructProperty"},
            {"Locked", 0x490, "BoolProperty"},
            {"IsFocusable", 0x491, "BoolProperty"},
            {"OnMouseCaptureBegin", 0x498, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x4A8, "MulticastInlineDelegateProperty"},
            {"OnControllerCaptureBegin", 0x4B8, "MulticastInlineDelegateProperty"},
            {"OnControllerCaptureEnd", 0x4C8, "MulticastInlineDelegateProperty"},
            {"OnValueChanged", 0x4D8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetValue",
            "SetLocked",
            "SetStepSize",
            "SetValue",
        }};
    };

    struct SynthKnobStyle
    {
        static constexpr std::string_view Name = "SynthKnobStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t LargeKnob = 0x10;
            static constexpr std::uintptr_t LargeKnobOverlay = 0xC0;
            static constexpr std::uintptr_t MediumKnob = 0x170;
            static constexpr std::uintptr_t MediumKnobOverlay = 0x220;
            static constexpr std::uintptr_t MinValueAngle = 0x2D0;
            static constexpr std::uintptr_t MaxValueAngle = 0x2D4;
            static constexpr std::uintptr_t KnobSize = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LargeKnob", 0x10, "StructProperty"},
            {"LargeKnobOverlay", 0xC0, "StructProperty"},
            {"MediumKnob", 0x170, "StructProperty"},
            {"MediumKnobOverlay", 0x220, "StructProperty"},
            {"MinValueAngle", 0x2D0, "FloatProperty"},
            {"MaxValueAngle", 0x2D4, "FloatProperty"},
            {"KnobSize", 0x2D8, "EnumProperty"},
        }};
    };

    struct SynthSamplePlayer
    {
        static constexpr std::string_view Name = "SynthSamplePlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundWave = 0x620;
            static constexpr std::uintptr_t OnSampleLoaded = 0x628;
            static constexpr std::uintptr_t OnSamplePlaybackProgress = 0x638;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SoundWave", 0x620, "ObjectProperty"},
            {"OnSampleLoaded", 0x628, "MulticastInlineDelegateProperty"},
            {"OnSamplePlaybackProgress", 0x638, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "GetCurrentPlaybackProgressPercent",
            "GetCurrentPlaybackProgressTime",
            "GetSampleDuration",
            "IsLoaded",
            "SeekToTime",
            "SetPitch",
            "SetScrubMode",
            "SetScrubTimeWidth",
            "SetSoundWave",
        }};
    };

    struct SynthSlateStyle
    {
        static constexpr std::string_view Name = "SynthSlateStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t SizeType = 0x8;
            static constexpr std::uintptr_t ColorStyle = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SizeType", 0x8, "EnumProperty"},
            {"ColorStyle", 0x9, "EnumProperty"},
        }};
    };

    struct SynthesisUtilitiesBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "SynthesisUtilitiesBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetLinearFrequency",
            "GetLogFrequency",
        }};
    };

    struct TapDelayInfo
    {
        static constexpr std::string_view Name = "TapDelayInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TapLineMode = 0x0;
            static constexpr std::uintptr_t DelayLength = 0x4;
            static constexpr std::uintptr_t Gain = 0x8;
            static constexpr std::uintptr_t OutputChannel = 0xC;
            static constexpr std::uintptr_t PanInDegrees = 0x10;
            static constexpr std::uintptr_t TapId = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TapLineMode", 0x0, "EnumProperty"},
            {"DelayLength", 0x4, "FloatProperty"},
            {"Gain", 0x8, "FloatProperty"},
            {"OutputChannel", 0xC, "IntProperty"},
            {"PanInDegrees", 0x10, "FloatProperty"},
            {"TapId", 0x14, "IntProperty"},
        }};
    };

}
