#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SidewaysCodeUI
{
    struct SidewaysWidgetBase
    {
        static constexpr std::string_view Name = "SidewaysWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedState = 0x370;
            static constexpr std::uintptr_t CurrentSidewaysState = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReplicatedState", 0x370, "ObjectProperty"},
            {"CurrentSidewaysState", 0x378, "EnumProperty"},
        }};
    };

}
