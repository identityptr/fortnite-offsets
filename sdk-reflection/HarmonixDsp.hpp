#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HarmonixDsp
{
    struct AdsrSettings
    {
        static constexpr std::string_view Name = "AdsrSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t IsEnabled = 0x1;
            static constexpr std::uintptr_t AttackTime = 0x4;
            static constexpr std::uintptr_t DecayTime = 0x8;
            static constexpr std::uintptr_t SustainLevel = 0xC;
            static constexpr std::uintptr_t ReleaseTime = 0x10;
            static constexpr std::uintptr_t Depth = 0x14;
            static constexpr std::uintptr_t AttackCurve = 0x18;
            static constexpr std::uintptr_t DecayCurve = 0x1C;
            static constexpr std::uintptr_t ReleaseCurve = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Target", 0x0, "EnumProperty"},
            {"IsEnabled", 0x1, "BoolProperty"},
            {"AttackTime", 0x4, "FloatProperty"},
            {"DecayTime", 0x8, "FloatProperty"},
            {"SustainLevel", 0xC, "FloatProperty"},
            {"ReleaseTime", 0x10, "FloatProperty"},
            {"Depth", 0x14, "FloatProperty"},
            {"AttackCurve", 0x18, "FloatProperty"},
            {"DecayCurve", 0x1C, "FloatProperty"},
            {"ReleaseCurve", 0x20, "FloatProperty"},
        }};
    };

    struct AdsrSettingsArray
    {
        static constexpr std::string_view Name = "AdsrSettingsArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Array", 0x0, "StructProperty"},
        }};
    };

    struct BiquadFilterSettings
    {
        static constexpr std::string_view Name = "BiquadFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x0;
            static constexpr std::uintptr_t Type = 0x4;
            static constexpr std::uintptr_t Freq = 0xC;
            static constexpr std::uintptr_t Q = 0x10;
            static constexpr std::uintptr_t DesignedDBGain = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"IsEnabled", 0x0, "BoolProperty"},
            {"Type", 0x4, "EnumProperty"},
            {"Freq", 0xC, "FloatProperty"},
            {"Q", 0x10, "FloatProperty"},
            {"DesignedDBGain", 0x14, "FloatProperty"},
        }};
    };

    struct BitCrusherSettings
    {
        static constexpr std::string_view Name = "BitCrusherSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x0;
            static constexpr std::uintptr_t InputGain = 0x4;
            static constexpr std::uintptr_t OutputGain = 0x8;
            static constexpr std::uintptr_t WetGain = 0xC;
            static constexpr std::uintptr_t Crush = 0x10;
            static constexpr std::uintptr_t SampleHoldFactor = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"IsEnabled", 0x0, "BoolProperty"},
            {"InputGain", 0x4, "FloatProperty"},
            {"OutputGain", 0x8, "FloatProperty"},
            {"WetGain", 0xC, "FloatProperty"},
            {"Crush", 0x10, "UInt16Property"},
            {"SampleHoldFactor", 0x12, "UInt16Property"},
        }};
    };

    struct DelaySettings
    {
        static constexpr std::string_view Name = "DelaySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x0;
            static constexpr std::uintptr_t TimeSyncOption = 0x1;
            static constexpr std::uintptr_t TimeSeconds = 0x4;
            static constexpr std::uintptr_t Tempo = 0x8;
            static constexpr std::uintptr_t DryGain = 0xC;
            static constexpr std::uintptr_t WetGain = 0x10;
            static constexpr std::uintptr_t FeedbackGain = 0x14;
            static constexpr std::uintptr_t EQEnabled = 0x18;
            static constexpr std::uintptr_t EQType = 0x19;
            static constexpr std::uintptr_t EQFreq = 0x1C;
            static constexpr std::uintptr_t EQQ = 0x20;
            static constexpr std::uintptr_t LfoEnabled = 0x24;
            static constexpr std::uintptr_t LfoTimeSyncOption = 0x25;
            static constexpr std::uintptr_t LfoRate = 0x28;
            static constexpr std::uintptr_t LfoDepth = 0x2C;
            static constexpr std::uintptr_t StereoType = 0x30;
            static constexpr std::uintptr_t PanLeft = 0x34;
            static constexpr std::uintptr_t PanRight = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"IsEnabled", 0x0, "BoolProperty"},
            {"TimeSyncOption", 0x1, "EnumProperty"},
            {"TimeSeconds", 0x4, "FloatProperty"},
            {"Tempo", 0x8, "FloatProperty"},
            {"DryGain", 0xC, "FloatProperty"},
            {"WetGain", 0x10, "FloatProperty"},
            {"FeedbackGain", 0x14, "FloatProperty"},
            {"EQEnabled", 0x18, "BoolProperty"},
            {"EQType", 0x19, "EnumProperty"},
            {"EQFreq", 0x1C, "FloatProperty"},
            {"EQQ", 0x20, "FloatProperty"},
            {"LfoEnabled", 0x24, "BoolProperty"},
            {"LfoTimeSyncOption", 0x25, "EnumProperty"},
            {"LfoRate", 0x28, "FloatProperty"},
            {"LfoDepth", 0x2C, "FloatProperty"},
            {"StereoType", 0x30, "EnumProperty"},
            {"PanLeft", 0x34, "FloatProperty"},
            {"PanRight", 0x38, "FloatProperty"},
        }};
    };

    struct DistortionFilterSettings
    {
        static constexpr std::string_view Name = "DistortionFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterPreClip = 0x0;
            static constexpr std::uintptr_t Filter = 0x4;
            static constexpr std::uintptr_t NumPasses = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FilterPreClip", 0x0, "BoolProperty"},
            {"Filter", 0x4, "StructProperty"},
            {"NumPasses", 0x1C, "IntProperty"},
        }};
    };

    struct DistortionSettingsV1
    {
        static constexpr std::string_view Name = "DistortionSettingsV1";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x0;
            static constexpr std::uintptr_t InputGainDb = 0x4;
            static constexpr std::uintptr_t OutputGainDb = 0x8;
            static constexpr std::uintptr_t DCAdjust = 0xC;
            static constexpr std::uintptr_t Type = 0x10;
            static constexpr std::uintptr_t Oversample = 0x14;
            static constexpr std::uintptr_t Filters = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"IsEnabled", 0x0, "BoolProperty"},
            {"InputGainDb", 0x4, "FloatProperty"},
            {"OutputGainDb", 0x8, "FloatProperty"},
            {"DCAdjust", 0xC, "FloatProperty"},
            {"Type", 0x10, "EnumProperty"},
            {"Oversample", 0x14, "BoolProperty"},
            {"Filters", 0x18, "StructProperty"},
        }};
    };

    struct DistortionSettingsV2
    {
        static constexpr std::string_view Name = "DistortionSettingsV2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x0;
            static constexpr std::uintptr_t InputGainDb = 0x4;
            static constexpr std::uintptr_t OutputGainDb = 0x8;
            static constexpr std::uintptr_t DryGain = 0xC;
            static constexpr std::uintptr_t WetGain = 0x10;
            static constexpr std::uintptr_t DCAdjust = 0x14;
            static constexpr std::uintptr_t Type = 0x18;
            static constexpr std::uintptr_t Oversample = 0x1C;
            static constexpr std::uintptr_t Filters = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"IsEnabled", 0x0, "BoolProperty"},
            {"InputGainDb", 0x4, "FloatProperty"},
            {"OutputGainDb", 0x8, "FloatProperty"},
            {"DryGain", 0xC, "FloatProperty"},
            {"WetGain", 0x10, "FloatProperty"},
            {"DCAdjust", 0x14, "FloatProperty"},
            {"Type", 0x18, "EnumProperty"},
            {"Oversample", 0x1C, "BoolProperty"},
            {"Filters", 0x20, "StructProperty"},
        }};
    };

    struct FusionFormantVolumeCorrection
    {
        static constexpr std::string_view Name = "FusionFormantVolumeCorrection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DbCorrectionConstant = 0x0;
            static constexpr std::uintptr_t DbCorrectionPerHalfStepUp = 0x4;
            static constexpr std::uintptr_t DbCorrectionPerHalfStepDown = 0x8;
            static constexpr std::uintptr_t DbCorrectionMaxUp = 0xC;
            static constexpr std::uintptr_t DbCorrectionMaxDown = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DbCorrectionConstant", 0x0, "FloatProperty"},
            {"DbCorrectionPerHalfStepUp", 0x4, "FloatProperty"},
            {"DbCorrectionPerHalfStepDown", 0x8, "FloatProperty"},
            {"DbCorrectionMaxUp", 0xC, "FloatProperty"},
            {"DbCorrectionMaxDown", 0x10, "FloatProperty"},
        }};
    };

    struct FusionPatch
    {
        static constexpr std::string_view Name = "FusionPatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FusionPatchData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FusionPatchData", 0x30, "StructProperty"},
        }};
    };

    struct FusionPatchData
    {
        static constexpr std::string_view Name = "FusionPatchData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Keyzones = 0x0;
            static constexpr std::uintptr_t Settings = 0x10;
            static constexpr std::uintptr_t Presets = 0x598;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Keyzones", 0x0, "ArrayProperty"},
            {"Settings", 0x10, "StructProperty"},
            {"Presets", 0x598, "ArrayProperty"},
        }};
    };

    struct FusionPatchSettings
    {
        static constexpr std::string_view Name = "FusionPatchSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VolumeDb = 0x0;
            static constexpr std::uintptr_t PannerDetails = 0x4;
            static constexpr std::uintptr_t DownPitchBendCents = 0x10;
            static constexpr std::uintptr_t UpPitchBendCents = 0x14;
            static constexpr std::uintptr_t FineTuneCents = 0x18;
            static constexpr std::uintptr_t StartPointOffsetMs = 0x1C;
            static constexpr std::uintptr_t MaxVoices = 0x20;
            static constexpr std::uintptr_t KeyzoneSelectMode = 0x24;
            static constexpr std::uintptr_t Portamento = 0x28;
            static constexpr std::uintptr_t Filter = 0x30;
            static constexpr std::uintptr_t Adsr = 0x48;
            static constexpr std::uintptr_t LFO = 0x288;
            static constexpr std::uintptr_t Randomizer = 0x2B8;
            static constexpr std::uintptr_t VelocityModulator = 0x2D0;
            static constexpr std::uintptr_t Adsrs = 0x2E8;
            static constexpr std::uintptr_t Lfos = 0x528;
            static constexpr std::uintptr_t Randomizers = 0x558;
            static constexpr std::uintptr_t VelocityModulators = 0x570;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"VolumeDb", 0x0, "FloatProperty"},
            {"PannerDetails", 0x4, "StructProperty"},
            {"DownPitchBendCents", 0x10, "FloatProperty"},
            {"UpPitchBendCents", 0x14, "FloatProperty"},
            {"FineTuneCents", 0x18, "FloatProperty"},
            {"StartPointOffsetMs", 0x1C, "FloatProperty"},
            {"MaxVoices", 0x20, "IntProperty"},
            {"KeyzoneSelectMode", 0x24, "EnumProperty"},
            {"Portamento", 0x28, "StructProperty"},
            {"Filter", 0x30, "StructProperty"},
            {"Adsr", 0x48, "StructProperty"},
            {"LFO", 0x288, "StructProperty"},
            {"Randomizer", 0x2B8, "StructProperty"},
            {"VelocityModulator", 0x2D0, "StructProperty"},
            {"Adsrs", 0x2E8, "StructProperty"},
            {"Lfos", 0x528, "StructProperty"},
            {"Randomizers", 0x558, "StructProperty"},
            {"VelocityModulators", 0x570, "StructProperty"},
        }};
    };

    struct FusionSamplerConfig
    {
        static constexpr std::string_view Name = "FusionSamplerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HarmonixDeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultVoicePoolConfig = 0x28;
            static constexpr std::uintptr_t VoicePoolConfigs = 0x30;
            static constexpr std::uintptr_t FormantVolumeCorrection = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultVoicePoolConfig", 0x28, "StructProperty"},
            {"VoicePoolConfigs", 0x30, "MapProperty"},
            {"FormantVolumeCorrection", 0x40, "StructProperty"},
        }};
    };

    struct FusionVoiceConfig
    {
        static constexpr std::string_view Name = "FusionVoiceConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumTotalVoices = 0x0;
            static constexpr std::uintptr_t SoftVoiceLimit = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumTotalVoices", 0x0, "UInt32Property"},
            {"SoftVoiceLimit", 0x4, "UInt32Property"},
        }};
    };

    struct HarmonixAudioAnalyzerOutputSettings
    {
        static constexpr std::string_view Name = "HarmonixAudioAnalyzerOutputSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RiseMs = 0x0;
            static constexpr std::uintptr_t FallMs = 0x4;
            static constexpr std::uintptr_t MaxDecibels = 0x8;
            static constexpr std::uintptr_t RangeDecibels = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RiseMs", 0x0, "FloatProperty"},
            {"FallMs", 0x4, "FloatProperty"},
            {"MaxDecibels", 0x8, "FloatProperty"},
            {"RangeDecibels", 0xC, "FloatProperty"},
        }};
    };

    struct HarmonixFFTAnalyzerResults
    {
        static constexpr std::string_view Name = "HarmonixFFTAnalyzerResults";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Spectrum = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Spectrum", 0x0, "ArrayProperty"},
        }};
    };

    struct HarmonixFFTAnalyzerSettings
    {
        static constexpr std::string_view Name = "HarmonixFFTAnalyzerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FFTSize = 0x0;
            static constexpr std::uintptr_t MinFrequencyHz = 0x4;
            static constexpr std::uintptr_t MaxFrequencyHz = 0x8;
            static constexpr std::uintptr_t MelScaleBinning = 0xC;
            static constexpr std::uintptr_t NumResultBins = 0x10;
            static constexpr std::uintptr_t OutputSettings = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"FFTSize", 0x0, "IntProperty"},
            {"MinFrequencyHz", 0x4, "FloatProperty"},
            {"MaxFrequencyHz", 0x8, "FloatProperty"},
            {"MelScaleBinning", 0xC, "BoolProperty"},
            {"NumResultBins", 0x10, "IntProperty"},
            {"OutputSettings", 0x14, "StructProperty"},
        }};
    };

    struct KeyzoneSettings
    {
        static constexpr std::string_view Name = "KeyzoneSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundWave = 0x0;
            static constexpr std::uintptr_t RootNote = 0x18;
            static constexpr std::uintptr_t MinNote = 0x19;
            static constexpr std::uintptr_t MaxNote = 0x1A;
            static constexpr std::uintptr_t MinVelocity = 0x1B;
            static constexpr std::uintptr_t MaxVelocity = 0x1C;
            static constexpr std::uintptr_t SampleIndex = 0x1D;
            static constexpr std::uintptr_t Priority = 0x1E;
            static constexpr std::uintptr_t Pan = 0x20;
            static constexpr std::uintptr_t bOverrideAdsr = 0x2C;
            static constexpr std::uintptr_t Adsr = 0x30;
            static constexpr std::uintptr_t FineTuneCents = 0x150;
            static constexpr std::uintptr_t Gain = 0x154;
            static constexpr std::uintptr_t bUnpitched = 0x158;
            static constexpr std::uintptr_t bVelocityToGain = 0x159;
            static constexpr std::uintptr_t TimeStretchConfig = 0x160;
            static constexpr std::uintptr_t bIsNoteOffZone = 0x180;
            static constexpr std::uintptr_t RandomWeight = 0x184;
            static constexpr std::uintptr_t SampleStartOffset = 0x188;
            static constexpr std::uintptr_t SampleEndOffset = 0x18C;
            static constexpr std::uintptr_t TrackMap = 0x190;
            static constexpr std::uintptr_t UseSingletonVoicePool = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"SoundWave", 0x0, "ObjectProperty"},
            {"RootNote", 0x18, "Int8Property"},
            {"MinNote", 0x19, "Int8Property"},
            {"MaxNote", 0x1A, "Int8Property"},
            {"MinVelocity", 0x1B, "Int8Property"},
            {"MaxVelocity", 0x1C, "Int8Property"},
            {"SampleIndex", 0x1D, "ByteProperty"},
            {"Priority", 0x1E, "ByteProperty"},
            {"Pan", 0x20, "StructProperty"},
            {"bOverrideAdsr", 0x2C, "BoolProperty"},
            {"Adsr", 0x30, "StructProperty"},
            {"FineTuneCents", 0x150, "FloatProperty"},
            {"Gain", 0x154, "FloatProperty"},
            {"bUnpitched", 0x158, "BoolProperty"},
            {"bVelocityToGain", 0x159, "BoolProperty"},
            {"TimeStretchConfig", 0x160, "StructProperty"},
            {"bIsNoteOffZone", 0x180, "BoolProperty"},
            {"RandomWeight", 0x184, "FloatProperty"},
            {"SampleStartOffset", 0x188, "IntProperty"},
            {"SampleEndOffset", 0x18C, "IntProperty"},
            {"TrackMap", 0x190, "ArrayProperty"},
            {"UseSingletonVoicePool", 0x1A0, "BoolProperty"},
        }};
    };

    struct LfoSettings
    {
        static constexpr std::string_view Name = "LfoSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t IsEnabled = 0x1;
            static constexpr std::uintptr_t Shape = 0x2;
            static constexpr std::uintptr_t ShouldRetrigger = 0x3;
            static constexpr std::uintptr_t BeatSync = 0x4;
            static constexpr std::uintptr_t Freq = 0x8;
            static constexpr std::uintptr_t Depth = 0xC;
            static constexpr std::uintptr_t InitialPhase = 0x10;
            static constexpr std::uintptr_t TempoBPM = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Target", 0x0, "EnumProperty"},
            {"IsEnabled", 0x1, "BoolProperty"},
            {"Shape", 0x2, "EnumProperty"},
            {"ShouldRetrigger", 0x3, "BoolProperty"},
            {"BeatSync", 0x4, "BoolProperty"},
            {"Freq", 0x8, "FloatProperty"},
            {"Depth", 0xC, "FloatProperty"},
            {"InitialPhase", 0x10, "FloatProperty"},
            {"TempoBPM", 0x14, "FloatProperty"},
        }};
    };

    struct LfoSettingsArray
    {
        static constexpr std::string_view Name = "LfoSettingsArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Array", 0x0, "StructProperty"},
        }};
    };

    struct ModulatorSettings
    {
        static constexpr std::string_view Name = "ModulatorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Range = 0x4;
            static constexpr std::uintptr_t Depth = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Target", 0x0, "EnumProperty"},
            {"Range", 0x4, "FloatProperty"},
            {"Depth", 0x8, "FloatProperty"},
        }};
    };

    struct ModulatorSettingsArray
    {
        static constexpr std::string_view Name = "ModulatorSettingsArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Array", 0x0, "StructProperty"},
        }};
    };

    struct PannerDetails
    {
        static constexpr std::string_view Name = "PannerDetails";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PitchShifterName
    {
        static constexpr std::string_view Name = "PitchShifterName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct PitchShifterNameRedirect
    {
        static constexpr std::string_view Name = "PitchShifterNameRedirect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OldName = 0x0;
            static constexpr std::uintptr_t NewName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OldName", 0x0, "NameProperty"},
            {"NewName", 0x4, "NameProperty"},
        }};
    };

    struct PortamentoSettings
    {
        static constexpr std::string_view Name = "PortamentoSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x0;
            static constexpr std::uintptr_t Mode = 0x1;
            static constexpr std::uintptr_t Seconds = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IsEnabled", 0x0, "BoolProperty"},
            {"Mode", 0x1, "EnumProperty"},
            {"Seconds", 0x4, "FloatProperty"},
        }};
    };

    struct SmbPitchShifterConfig
    {
        static constexpr std::string_view Name = "SmbPitchShifterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StretcherAndPitchShifterConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowPoolGrowthInEditor = 0x28;
            static constexpr std::uintptr_t DefaultAllocatedStretchers = 0x2C;
            static constexpr std::uintptr_t SwitchAllocatedStretchers = 0x30;
            static constexpr std::uintptr_t PS4AllocatedStretchers = 0x34;
            static constexpr std::uintptr_t PS5AllocatedStretchers = 0x38;
            static constexpr std::uintptr_t XboxOneAllocatedStretchers = 0x3C;
            static constexpr std::uintptr_t XSXAllocatedStretchers = 0x40;
            static constexpr std::uintptr_t AndroidAllocatedStretchers = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bAllowPoolGrowthInEditor", 0x28, "BoolProperty"},
            {"DefaultAllocatedStretchers", 0x2C, "UInt32Property"},
            {"SwitchAllocatedStretchers", 0x30, "UInt32Property"},
            {"PS4AllocatedStretchers", 0x34, "UInt32Property"},
            {"PS5AllocatedStretchers", 0x38, "UInt32Property"},
            {"XboxOneAllocatedStretchers", 0x3C, "UInt32Property"},
            {"XSXAllocatedStretchers", 0x40, "UInt32Property"},
            {"AndroidAllocatedStretchers", 0x44, "UInt32Property"},
        }};
    };

    struct StreamingChannelParams
    {
        static constexpr std::string_view Name = "StreamingChannelParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamIndex = 0x0;
            static constexpr std::uintptr_t Gain = 0x4;
            static constexpr std::uintptr_t Pan = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StreamIndex", 0x0, "IntProperty"},
            {"Gain", 0x4, "FloatProperty"},
            {"Pan", 0x8, "StructProperty"},
        }};
    };

    struct StreamingChannelParamsArray
    {
        static constexpr std::string_view Name = "StreamingChannelParamsArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelParams = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelParams", 0x0, "ArrayProperty"},
        }};
    };

    struct StreamingTrackParams
    {
        static constexpr std::string_view Name = "StreamingTrackParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StretcherAndPitchShifterConfig
    {
        static constexpr std::string_view Name = "StretcherAndPitchShifterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StretcherAndPitchShifterFactoryConfig
    {
        static constexpr std::string_view Name = "StretcherAndPitchShifterFactoryConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HarmonixDeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t FactoryPriority = 0x28;
            static constexpr std::uintptr_t DefaultFactory = 0x38;
            static constexpr std::uintptr_t FactoryNameRedirects = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FactoryPriority", 0x28, "ArrayProperty"},
            {"DefaultFactory", 0x38, "StructProperty"},
            {"FactoryNameRedirects", 0x40, "ArrayProperty"},
        }};
    };

    struct TimeStretchConfig
    {
        static constexpr std::string_view Name = "TimeStretchConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bMaintainTime = 0x0;
            static constexpr std::uintptr_t PitchShifter = 0x4;
            static constexpr std::uintptr_t PitchShifterOptions = 0x8;
            static constexpr std::uintptr_t bSyncTempo = 0x18;
            static constexpr std::uintptr_t OriginalTempo = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bMaintainTime", 0x0, "BoolProperty"},
            {"PitchShifter", 0x4, "StructProperty"},
            {"PitchShifterOptions", 0x8, "MapProperty"},
            {"bSyncTempo", 0x18, "BoolProperty"},
            {"OriginalTempo", 0x1C, "FloatProperty"},
        }};
    };

    struct TrackChannelInfo
    {
        static constexpr std::string_view Name = "TrackChannelInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RealTrackIndex = 0x0;
            static constexpr std::uintptr_t Name = 0x4;
            static constexpr std::uintptr_t Routing = 0x8;
            static constexpr std::uintptr_t Channels = 0x10;
            static constexpr std::uintptr_t PresetChannels = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RealTrackIndex", 0x0, "IntProperty"},
            {"Name", 0x4, "NameProperty"},
            {"Routing", 0x8, "NameProperty"},
            {"Channels", 0x10, "ArrayProperty"},
            {"PresetChannels", 0x20, "MapProperty"},
        }};
    };

    struct TypedParameter
    {
        static constexpr std::string_view Name = "TypedParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VocoderBand
    {
        static constexpr std::string_view Name = "VocoderBand";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Gain = 0x0;
            static constexpr std::uintptr_t Solo = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Gain", 0x0, "FloatProperty"},
            {"Solo", 0x4, "BoolProperty"},
        }};
    };

    struct VocoderBandConfig
    {
        static constexpr std::string_view Name = "VocoderBandConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BandCount = 0x0;
            static constexpr std::uintptr_t FrequencyRatio = 0x4;
            static constexpr std::uintptr_t Name = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BandCount", 0x0, "IntProperty"},
            {"FrequencyRatio", 0x4, "FloatProperty"},
            {"Name", 0x8, "NameProperty"},
        }};
    };

    struct VocoderSettings
    {
        static constexpr std::string_view Name = "VocoderSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x0;
            static constexpr std::uintptr_t ModulatorIndex = 0x4;
            static constexpr std::uintptr_t ChannelCount = 0x8;
            static constexpr std::uintptr_t SampleRate = 0xC;
            static constexpr std::uintptr_t BandConfig = 0x10;
            static constexpr std::uintptr_t Soloing = 0x11;
            static constexpr std::uintptr_t FrameCount = 0x14;
            static constexpr std::uintptr_t CarrierGain = 0x18;
            static constexpr std::uintptr_t ModulatorGain = 0x1C;
            static constexpr std::uintptr_t CarrierThin = 0x20;
            static constexpr std::uintptr_t ModulatorThin = 0x24;
            static constexpr std::uintptr_t Attack = 0x28;
            static constexpr std::uintptr_t Release = 0x2C;
            static constexpr std::uintptr_t HighEmphasis = 0x30;
            static constexpr std::uintptr_t Wet = 0x34;
            static constexpr std::uintptr_t OutputGain = 0x38;
            static constexpr std::uintptr_t Bands = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"IsEnabled", 0x0, "BoolProperty"},
            {"ModulatorIndex", 0x4, "IntProperty"},
            {"ChannelCount", 0x8, "IntProperty"},
            {"SampleRate", 0xC, "FloatProperty"},
            {"BandConfig", 0x10, "EnumProperty"},
            {"Soloing", 0x11, "BoolProperty"},
            {"FrameCount", 0x14, "IntProperty"},
            {"CarrierGain", 0x18, "FloatProperty"},
            {"ModulatorGain", 0x1C, "FloatProperty"},
            {"CarrierThin", 0x20, "FloatProperty"},
            {"ModulatorThin", 0x24, "FloatProperty"},
            {"Attack", 0x28, "FloatProperty"},
            {"Release", 0x2C, "FloatProperty"},
            {"HighEmphasis", 0x30, "FloatProperty"},
            {"Wet", 0x34, "FloatProperty"},
            {"OutputGain", 0x38, "FloatProperty"},
            {"Bands", 0x40, "ArrayProperty"},
        }};
    };

}
