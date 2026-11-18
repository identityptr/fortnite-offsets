#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OnlineFrameworkParentalControls
{
    struct ParentalControlsGameInstanceSubsystem
    {
        static constexpr std::string_view Name = "ParentalControlsGameInstanceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
