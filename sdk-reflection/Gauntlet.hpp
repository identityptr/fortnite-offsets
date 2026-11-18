#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Gauntlet
{
    struct GauntletTestController
    {
        static constexpr std::string_view Name = "GauntletTestController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GauntletTestControllerBootTest
    {
        static constexpr std::string_view Name = "GauntletTestControllerBootTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GauntletTestController";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GauntletTestControllerErrorTest
    {
        static constexpr std::string_view Name = "GauntletTestControllerErrorTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GauntletTestController";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
