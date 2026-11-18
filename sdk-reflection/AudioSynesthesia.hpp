#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioSynesthesia
{
    struct AudioSynesthesiaNRT
    {
        static constexpr std::string_view Name = "AudioSynesthesiaNRT";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzerNRT";
        struct Offsets
        {
            static constexpr std::uintptr_t Sound = 0x28;
            static constexpr std::uintptr_t DurationInSeconds = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sound", 0x28, "ObjectProperty"},
            {"DurationInSeconds", 0x30, "FloatProperty"},
        }};
    };

    struct AudioSynesthesiaNRTSettings
    {
        static constexpr std::string_view Name = "AudioSynesthesiaNRTSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzerNRTSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioSynesthesiaSettings
    {
        static constexpr std::string_view Name = "AudioSynesthesiaSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzerSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ConstantQAnalyzer
    {
        static constexpr std::string_view Name = "ConstantQAnalyzer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzer";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA0;
            static constexpr std::uintptr_t OnConstantQResults = 0xA8;
            static constexpr std::uintptr_t OnLatestConstantQResults = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Settings", 0xA0, "ObjectProperty"},
            {"OnConstantQResults", 0xA8, "MulticastInlineDelegateProperty"},
            {"OnLatestConstantQResults", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct ConstantQNRT
    {
        static constexpr std::string_view Name = "ConstantQNRT";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaNRT";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x78, "ObjectProperty"},
        }};
    };

    struct ConstantQNRTSettings
    {
        static constexpr std::string_view Name = "ConstantQNRTSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaNRTSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t StartingFrequency = 0x28;
            static constexpr std::uintptr_t NumBands = 0x2C;
            static constexpr std::uintptr_t NumBandsPerOctave = 0x30;
            static constexpr std::uintptr_t AnalysisPeriod = 0x34;
            static constexpr std::uintptr_t bDownmixToMono = 0x38;
            static constexpr std::uintptr_t FFTSize = 0x39;
            static constexpr std::uintptr_t WindowType = 0x3A;
            static constexpr std::uintptr_t SpectrumType = 0x3B;
            static constexpr std::uintptr_t BandWidthStretch = 0x3C;
            static constexpr std::uintptr_t CQTNormalization = 0x40;
            static constexpr std::uintptr_t NoiseFloorDb = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"StartingFrequency", 0x28, "FloatProperty"},
            {"NumBands", 0x2C, "IntProperty"},
            {"NumBandsPerOctave", 0x30, "FloatProperty"},
            {"AnalysisPeriod", 0x34, "FloatProperty"},
            {"bDownmixToMono", 0x38, "BoolProperty"},
            {"FFTSize", 0x39, "EnumProperty"},
            {"WindowType", 0x3A, "EnumProperty"},
            {"SpectrumType", 0x3B, "EnumProperty"},
            {"BandWidthStretch", 0x3C, "FloatProperty"},
            {"CQTNormalization", 0x40, "EnumProperty"},
            {"NoiseFloorDb", 0x44, "FloatProperty"},
        }};
    };

    struct ConstantQSettings
    {
        static constexpr std::string_view Name = "ConstantQSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t StartingFrequencyHz = 0x28;
            static constexpr std::uintptr_t NumBands = 0x2C;
            static constexpr std::uintptr_t NumBandsPerOctave = 0x30;
            static constexpr std::uintptr_t AnalysisPeriodInSeconds = 0x34;
            static constexpr std::uintptr_t bDownmixToMono = 0x38;
            static constexpr std::uintptr_t FFTSize = 0x39;
            static constexpr std::uintptr_t WindowType = 0x3A;
            static constexpr std::uintptr_t SpectrumType = 0x3B;
            static constexpr std::uintptr_t BandWidthStretch = 0x3C;
            static constexpr std::uintptr_t CQTNormalization = 0x40;
            static constexpr std::uintptr_t NoiseFloorDb = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"StartingFrequencyHz", 0x28, "FloatProperty"},
            {"NumBands", 0x2C, "IntProperty"},
            {"NumBandsPerOctave", 0x30, "FloatProperty"},
            {"AnalysisPeriodInSeconds", 0x34, "FloatProperty"},
            {"bDownmixToMono", 0x38, "BoolProperty"},
            {"FFTSize", 0x39, "EnumProperty"},
            {"WindowType", 0x3A, "EnumProperty"},
            {"SpectrumType", 0x3B, "EnumProperty"},
            {"BandWidthStretch", 0x3C, "FloatProperty"},
            {"CQTNormalization", 0x40, "EnumProperty"},
            {"NoiseFloorDb", 0x44, "FloatProperty"},
        }};
    };

    struct LKFSAnalyzer
    {
        static constexpr std::string_view Name = "LKFSAnalyzer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzer";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA0;
            static constexpr std::uintptr_t OnOverallLKFSResults = 0xA8;
            static constexpr std::uintptr_t OnPerChannelLKFSResults = 0xD0;
            static constexpr std::uintptr_t OnLatestOverallLKFSResults = 0xF8;
            static constexpr std::uintptr_t OnLatestPerChannelLKFSResults = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Settings", 0xA0, "ObjectProperty"},
            {"OnOverallLKFSResults", 0xA8, "MulticastInlineDelegateProperty"},
            {"OnPerChannelLKFSResults", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnLatestOverallLKFSResults", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnLatestPerChannelLKFSResults", 0x120, "MulticastInlineDelegateProperty"},
        }};
    };

    struct LKFSNRT
    {
        static constexpr std::string_view Name = "LKFSNRT";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaNRT";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x78, "ObjectProperty"},
        }};
    };

    struct LKFSNRTSettings
    {
        static constexpr std::string_view Name = "LKFSNRTSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaNRTSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalysisPeriod = 0x28;
            static constexpr std::uintptr_t AnalysisWindowDuration = 0x2C;
            static constexpr std::uintptr_t ShortTermLoudnessDuration = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AnalysisPeriod", 0x28, "FloatProperty"},
            {"AnalysisWindowDuration", 0x2C, "FloatProperty"},
            {"ShortTermLoudnessDuration", 0x30, "FloatProperty"},
        }};
    };

    struct LKFSSettings
    {
        static constexpr std::string_view Name = "LKFSSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalysisPeriod = 0x28;
            static constexpr std::uintptr_t AnalysisWindowDuration = 0x2C;
            static constexpr std::uintptr_t ShortTermLoudnessDuration = 0x30;
            static constexpr std::uintptr_t IntegratedLoudnessAnalysisPeriod = 0x34;
            static constexpr std::uintptr_t IntegratedLoudnessDuration = 0x38;
            static constexpr std::uintptr_t bCalculatePerChannelLoudnessRange = 0x3C;
            static constexpr std::uintptr_t bCalculateOverallLoudnessRange = 0x3D;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AnalysisPeriod", 0x28, "FloatProperty"},
            {"AnalysisWindowDuration", 0x2C, "FloatProperty"},
            {"ShortTermLoudnessDuration", 0x30, "FloatProperty"},
            {"IntegratedLoudnessAnalysisPeriod", 0x34, "FloatProperty"},
            {"IntegratedLoudnessDuration", 0x38, "FloatProperty"},
            {"bCalculatePerChannelLoudnessRange", 0x3C, "BoolProperty"},
            {"bCalculateOverallLoudnessRange", 0x3D, "BoolProperty"},
        }};
    };

    struct LoudnessAnalyzer
    {
        static constexpr std::string_view Name = "LoudnessAnalyzer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzer";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA0;
            static constexpr std::uintptr_t OnOverallLoudnessResults = 0xA8;
            static constexpr std::uintptr_t OnPerChannelLoudnessResults = 0xB8;
            static constexpr std::uintptr_t OnLatestOverallLoudnessResults = 0xC8;
            static constexpr std::uintptr_t OnLatestPerChannelLoudnessResults = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Settings", 0xA0, "ObjectProperty"},
            {"OnOverallLoudnessResults", 0xA8, "MulticastInlineDelegateProperty"},
            {"OnPerChannelLoudnessResults", 0xB8, "MulticastInlineDelegateProperty"},
            {"OnLatestOverallLoudnessResults", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnLatestPerChannelLoudnessResults", 0xD8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct LoudnessNRT
    {
        static constexpr std::string_view Name = "LoudnessNRT";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaNRT";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x78, "ObjectProperty"},
        }};
    };

    struct LoudnessNRTSettings
    {
        static constexpr std::string_view Name = "LoudnessNRTSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaNRTSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalysisPeriod = 0x28;
            static constexpr std::uintptr_t MinimumFrequency = 0x2C;
            static constexpr std::uintptr_t MaximumFrequency = 0x30;
            static constexpr std::uintptr_t CurveType = 0x34;
            static constexpr std::uintptr_t NoiseFloorDb = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AnalysisPeriod", 0x28, "FloatProperty"},
            {"MinimumFrequency", 0x2C, "FloatProperty"},
            {"MaximumFrequency", 0x30, "FloatProperty"},
            {"CurveType", 0x34, "EnumProperty"},
            {"NoiseFloorDb", 0x38, "FloatProperty"},
        }};
    };

    struct LoudnessSettings
    {
        static constexpr std::string_view Name = "LoudnessSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalysisPeriod = 0x28;
            static constexpr std::uintptr_t MinimumFrequency = 0x2C;
            static constexpr std::uintptr_t MaximumFrequency = 0x30;
            static constexpr std::uintptr_t CurveType = 0x34;
            static constexpr std::uintptr_t NoiseFloorDb = 0x38;
            static constexpr std::uintptr_t ExpectedMaxLoudness = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AnalysisPeriod", 0x28, "FloatProperty"},
            {"MinimumFrequency", 0x2C, "FloatProperty"},
            {"MaximumFrequency", 0x30, "FloatProperty"},
            {"CurveType", 0x34, "EnumProperty"},
            {"NoiseFloorDb", 0x38, "FloatProperty"},
            {"ExpectedMaxLoudness", 0x3C, "FloatProperty"},
        }};
    };

    struct MeterAnalyzer
    {
        static constexpr std::string_view Name = "MeterAnalyzer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzer";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA0;
            static constexpr std::uintptr_t OnOverallMeterResults = 0xA8;
            static constexpr std::uintptr_t OnPerChannelMeterResults = 0xD0;
            static constexpr std::uintptr_t OnLatestOverallMeterResults = 0xF8;
            static constexpr std::uintptr_t OnLatestPerChannelMeterResults = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Settings", 0xA0, "ObjectProperty"},
            {"OnOverallMeterResults", 0xA8, "MulticastInlineDelegateProperty"},
            {"OnPerChannelMeterResults", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnLatestOverallMeterResults", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnLatestPerChannelMeterResults", 0x120, "MulticastInlineDelegateProperty"},
        }};
    };

    struct MeterSettings
    {
        static constexpr std::string_view Name = "MeterSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalysisPeriod = 0x28;
            static constexpr std::uintptr_t PeakMode = 0x2C;
            static constexpr std::uintptr_t MeterAttackTime = 0x30;
            static constexpr std::uintptr_t MeterReleaseTime = 0x34;
            static constexpr std::uintptr_t PeakHoldTime = 0x38;
            static constexpr std::uintptr_t ClippingThreshold = 0x3C;
            static constexpr std::uintptr_t bIsAnalog = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AnalysisPeriod", 0x28, "FloatProperty"},
            {"PeakMode", 0x2C, "EnumProperty"},
            {"MeterAttackTime", 0x30, "IntProperty"},
            {"MeterReleaseTime", 0x34, "IntProperty"},
            {"PeakHoldTime", 0x38, "IntProperty"},
            {"ClippingThreshold", 0x3C, "FloatProperty"},
            {"bIsAnalog", 0x40, "BoolProperty"},
        }};
    };

    struct OnsetNRT
    {
        static constexpr std::string_view Name = "OnsetNRT";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaNRT";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x78, "ObjectProperty"},
        }};
    };

    struct OnsetNRTSettings
    {
        static constexpr std::string_view Name = "OnsetNRTSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaNRTSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bDownmixToMono = 0x28;
            static constexpr std::uintptr_t GranularityInSeconds = 0x2C;
            static constexpr std::uintptr_t Sensitivity = 0x30;
            static constexpr std::uintptr_t MinimumFrequency = 0x34;
            static constexpr std::uintptr_t MaximumFrequency = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bDownmixToMono", 0x28, "BoolProperty"},
            {"GranularityInSeconds", 0x2C, "FloatProperty"},
            {"Sensitivity", 0x30, "FloatProperty"},
            {"MinimumFrequency", 0x34, "FloatProperty"},
            {"MaximumFrequency", 0x38, "FloatProperty"},
        }};
    };

    struct SynesthesiaSpectrumAnalysisSettings
    {
        static constexpr std::string_view Name = "SynesthesiaSpectrumAnalysisSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSynesthesiaSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalysisPeriod = 0x28;
            static constexpr std::uintptr_t FFTSize = 0x2C;
            static constexpr std::uintptr_t SpectrumType = 0x2D;
            static constexpr std::uintptr_t WindowType = 0x2E;
            static constexpr std::uintptr_t bDownmixToMono = 0x2F;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AnalysisPeriod", 0x28, "FloatProperty"},
            {"FFTSize", 0x2C, "EnumProperty"},
            {"SpectrumType", 0x2D, "EnumProperty"},
            {"WindowType", 0x2E, "EnumProperty"},
            {"bDownmixToMono", 0x2F, "BoolProperty"},
        }};
    };

    struct SynesthesiaSpectrumAnalyzer
    {
        static constexpr std::string_view Name = "SynesthesiaSpectrumAnalyzer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzer";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA0;
            static constexpr std::uintptr_t OnSpectrumResults = 0xA8;
            static constexpr std::uintptr_t OnLatestSpectrumResults = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Settings", 0xA0, "ObjectProperty"},
            {"OnSpectrumResults", 0xA8, "MulticastInlineDelegateProperty"},
            {"OnLatestSpectrumResults", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

}
