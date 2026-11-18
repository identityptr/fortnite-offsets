#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ShielderGameplayRuntime
{
    struct ShielderCollisionHelperComponent
    {
        static constexpr std::string_view Name = "ShielderCollisionHelperComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShielderBGA = 0xC0;
            static constexpr std::uintptr_t StaticOffset = 0xC8;
            static constexpr std::uintptr_t AimOffset = 0xE0;
            static constexpr std::uintptr_t AimOffset2D = 0xF8;
            static constexpr std::uintptr_t PitchMultiplier = 0x110;
            static constexpr std::uintptr_t PitchMin = 0x114;
            static constexpr std::uintptr_t PitchMax = 0x118;
            static constexpr std::uintptr_t ShouldUpdateShielderSkelMesh = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ShielderBGA", 0xC0, "ObjectProperty"},
            {"StaticOffset", 0xC8, "StructProperty"},
            {"AimOffset", 0xE0, "StructProperty"},
            {"AimOffset2D", 0xF8, "StructProperty"},
            {"PitchMultiplier", 0x110, "FloatProperty"},
            {"PitchMin", 0x114, "FloatProperty"},
            {"PitchMax", 0x118, "FloatProperty"},
            {"ShouldUpdateShielderSkelMesh", 0x120, "StructProperty"},
        }};
    };

}
