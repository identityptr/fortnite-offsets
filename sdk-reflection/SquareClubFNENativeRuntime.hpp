#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SquareClubFNENativeRuntime
{
    struct AbilityPayload_Targets
    {
        static constexpr std::string_view Name = "AbilityPayload_Targets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Targets", 0x28, "ArrayProperty"},
        }};
    };

}
