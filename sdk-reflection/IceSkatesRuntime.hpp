#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::IceSkatesRuntime
{
    struct IceSkatesMME_AttributesBase
    {
        static constexpr std::string_view Name = "IceSkatesMME_AttributesBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtMovementAttribute";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSpeedMultiplier_TacSprinting = 0x3D0;
            static constexpr std::uintptr_t MaxSpeedMultiplier_NotTacSprinting = 0x408;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxSpeedMultiplier_TacSprinting", 0x3D0, "OptionalProperty"},
            {"MaxSpeedMultiplier_NotTacSprinting", 0x408, "OptionalProperty"},
        }};
    };

}
