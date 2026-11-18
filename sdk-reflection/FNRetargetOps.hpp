#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FNRetargetOps
{
    struct IKRetargetWeaponGripOpController
    {
        static constexpr std::string_view Name = "IKRetargetWeaponGripOpController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
