#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AutoAimWeaponUI
{
    struct FortAutoAimTargetImage
    {
        static constexpr std::string_view Name = "FortAutoAimTargetImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Image";
        struct Offsets
        {
            static constexpr std::uintptr_t AutoAimReticleSize = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AutoAimReticleSize", 0x290, "StructProperty"},
        }};
    };

}
