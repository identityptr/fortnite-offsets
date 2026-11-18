#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelMarCore_Test
{
    struct DelMarTestControllerTrackScrubber
    {
        static constexpr std::string_view Name = "DelMarTestControllerTrackScrubber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTestControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
