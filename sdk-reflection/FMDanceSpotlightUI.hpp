#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMDanceSpotlightUI
{
    struct SpotlightQuickMix
    {
        static constexpr std::string_view Name = "SpotlightQuickMix";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DanceSlots = 0x370;
            static constexpr std::uintptr_t CurrentDanceIndex = 0x380;
            static constexpr std::uintptr_t FortPC = 0x388;
            static constexpr std::uintptr_t CurrentPawn = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DanceSlots", 0x370, "ArrayProperty"},
            {"CurrentDanceIndex", 0x380, "IntProperty"},
            {"FortPC", 0x388, "ObjectProperty"},
            {"CurrentPawn", 0x390, "ObjectProperty"},
        }};
    };

}
