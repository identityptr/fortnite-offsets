#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Harmonix
{
    struct HarmonixBlueprintUtil
    {
        static constexpr std::string_view Name = "HarmonixBlueprintUtil";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs",
            "GetMeasuredVideoToAudioRenderOffsetMs",
            "SetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs",
            "SetMeasuredVideoToAudioRenderOffsetMs",
        }};
    };

    struct HarmonixDeveloperSettings
    {
        static constexpr std::string_view Name = "HarmonixDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HarmonixPluginSettings
    {
        static constexpr std::string_view Name = "HarmonixPluginSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
