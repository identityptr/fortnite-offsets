#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BladeHazardRuntime
{
    struct FortBladeHazard
    {
        static constexpr std::string_view Name = "FortBladeHazard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t SpinningDirection = 0x940;
            static constexpr std::uintptr_t CustomForceDirections = 0x948;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpinningDirection", 0x940, "EnumProperty"},
            {"CustomForceDirections", 0x948, "ArrayProperty"},
        }};
    };

}
