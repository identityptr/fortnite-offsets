#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioAnalyzer
{
    struct AudioAnalyzer
    {
        static constexpr std::string_view Name = "AudioAnalyzer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioBus = 0x28;
            static constexpr std::uintptr_t AudioAnalyzerSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AudioBus", 0x28, "ObjectProperty"},
            {"AudioAnalyzerSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct AudioAnalyzerAssetBase
    {
        static constexpr std::string_view Name = "AudioAnalyzerAssetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioAnalyzerNRT
    {
        static constexpr std::string_view Name = "AudioAnalyzerNRT";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzerAssetBase";
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

    struct AudioAnalyzerNRTSettings
    {
        static constexpr std::string_view Name = "AudioAnalyzerNRTSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzerAssetBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioAnalyzerSettings
    {
        static constexpr std::string_view Name = "AudioAnalyzerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioAnalyzerAssetBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioAnalyzerSubsystem
    {
        static constexpr std::string_view Name = "AudioAnalyzerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioAnalyzers = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AudioAnalyzers", 0x30, "ArrayProperty"},
        }};
    };

}
