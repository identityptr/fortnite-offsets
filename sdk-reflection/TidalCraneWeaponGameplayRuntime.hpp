#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TidalCraneWeaponGameplayRuntime
{
    struct RevolverTidalCraneWeaponAnimInstance
    {
        static constexpr std::string_view Name = "RevolverTidalCraneWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationXRoll = 0x370;
            static constexpr std::uintptr_t InterpSpeed = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RotationXRoll", 0x370, "FloatProperty"},
            {"InterpSpeed", 0x378, "DoubleProperty"},
        }};
    };

}
