#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioPlatformConfiguration
{
    struct PlatformRuntimeAudioCompressionOverrides
    {
        static constexpr std::string_view Name = "PlatformRuntimeAudioCompressionOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideCompressionTimes = 0x0;
            static constexpr std::uintptr_t DurationThreshold = 0x4;
            static constexpr std::uintptr_t MaxNumRandomBranches = 0x8;
            static constexpr std::uintptr_t SoundCueQualityIndex = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bOverrideCompressionTimes", 0x0, "BoolProperty"},
            {"DurationThreshold", 0x4, "FloatProperty"},
            {"MaxNumRandomBranches", 0x8, "IntProperty"},
            {"SoundCueQualityIndex", 0xC, "IntProperty"},
        }};
    };

}
