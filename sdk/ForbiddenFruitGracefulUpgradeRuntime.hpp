#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ForbiddenFruitGracefulUpgradeRuntime
{
    struct ForbiddenFruitGracefulUpgradeOverride
    {
        static constexpr std::string_view Name = "ForbiddenFruitGracefulUpgradeOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GracefulUpgradeOverrider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
