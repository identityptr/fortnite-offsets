#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RubberBandPitchShifter
{
    struct RubberBandPitchShifterConfig
    {
        static constexpr std::string_view Name = "RubberBandPitchShifterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StretcherAndPitchShifterConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowPoolGrowthInEditor = 0x28;
            static constexpr std::uintptr_t DefaultStretcherCounts = 0x2C;
            static constexpr std::uintptr_t SwitchStretcherCounts = 0x44;
            static constexpr std::uintptr_t PS4StretcherCounts = 0x5C;
            static constexpr std::uintptr_t PS5StretcherCounts = 0x74;
            static constexpr std::uintptr_t XboxOneStretcherCounts = 0x8C;
            static constexpr std::uintptr_t XSXStretcherCounts = 0xA4;
            static constexpr std::uintptr_t AndroidStretcherCounts = 0xBC;
            static constexpr std::uintptr_t IOSStretcherCounts = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bAllowPoolGrowthInEditor", 0x28, "BoolProperty"},
            {"DefaultStretcherCounts", 0x2C, "StructProperty"},
            {"SwitchStretcherCounts", 0x44, "StructProperty"},
            {"PS4StretcherCounts", 0x5C, "StructProperty"},
            {"PS5StretcherCounts", 0x74, "StructProperty"},
            {"XboxOneStretcherCounts", 0x8C, "StructProperty"},
            {"XSXStretcherCounts", 0xA4, "StructProperty"},
            {"AndroidStretcherCounts", 0xBC, "StructProperty"},
            {"IOSStretcherCounts", 0xD4, "StructProperty"},
        }};
    };

}
