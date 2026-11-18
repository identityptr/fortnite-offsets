#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortGameplayToolset
{
    struct FortPlayerToolset
    {
        static constexpr std::string_view Name = "FortPlayerToolset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ToolsetDefinition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
