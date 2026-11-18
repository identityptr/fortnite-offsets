#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TacticalSprintUI
{
    struct FortTouchRippleComponent_TacticalSprint
    {
        static constexpr std::string_view Name = "FortTouchRippleComponent_TacticalSprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTouchRippleComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EnergyComponent = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnergyComponent", 0x50, "WeakObjectProperty"},
        }};
    };

}
