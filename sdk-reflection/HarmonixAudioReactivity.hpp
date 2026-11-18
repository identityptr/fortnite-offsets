#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HarmonixAudioReactivity
{
    struct HarmonixAudioAnalysisTexture
    {
        static constexpr std::string_view Name = "HarmonixAudioAnalysisTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HarmonixHysteresisTextureBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicClock = 0x160;
            static constexpr std::uintptr_t Type = 0x168;
            static constexpr std::uintptr_t InstanceName = 0x16C;
            static constexpr std::uintptr_t ResetMonoPeakOnUpdate = 0x170;
            static constexpr std::uintptr_t WarnIfNotEnabled = 0x171;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MusicClock", 0x160, "WeakObjectProperty"},
            {"Type", 0x168, "EnumProperty"},
            {"InstanceName", 0x16C, "NameProperty"},
            {"ResetMonoPeakOnUpdate", 0x170, "BoolProperty"},
            {"WarnIfNotEnabled", 0x171, "BoolProperty"},
        }};
    };

    struct HarmonixAudioAnalyzerResultsDispatcher
    {
        static constexpr std::string_view Name = "HarmonixAudioAnalyzerResultsDispatcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HarmonixAudioAnalyzerResultsProvider
    {
        static constexpr std::string_view Name = "HarmonixAudioAnalyzerResultsProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HarmonixHysteresisTextureBase
    {
        static constexpr std::string_view Name = "HarmonixHysteresisTextureBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HarmonixTextureBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TicksPerShift = 0x138;
            static constexpr std::uintptr_t NumHysteresisSamples = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TicksPerShift", 0x138, "FloatProperty"},
            {"NumHysteresisSamples", 0x140, "IntProperty"},
        }};
    };

    struct HarmonixTextureBase
    {
        static constexpr std::string_view Name = "HarmonixTextureBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Texture";
        struct Offsets
        {
            static constexpr std::uintptr_t Width = 0x120;
            static constexpr std::uintptr_t TextureFilterMode = 0x128;
            static constexpr std::uintptr_t TextureTilingMode = 0x129;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Width", 0x120, "IntProperty"},
            {"TextureFilterMode", 0x128, "EnumProperty"},
            {"TextureTilingMode", 0x129, "ByteProperty"},
        }};
    };

}
