#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoFinchUI
{
    struct JunoTouchTargetLockWidget
    {
        static constexpr std::string_view Name = "JunoTouchTargetLockWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileHUDElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Stick_Overlay = 0x3E8;
            static constexpr std::uintptr_t ChangeTargetInputAction = 0x3F0;
            static constexpr std::uintptr_t ToggleTargetLockInputAction = 0x400;
            static constexpr std::uintptr_t TapMovementThreshold = 0x410;
            static constexpr std::uintptr_t DistanceToChangeTarget = 0x414;
            static constexpr std::uintptr_t MaxStickDistance = 0x418;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Stick_Overlay", 0x3E8, "ObjectProperty"},
            {"ChangeTargetInputAction", 0x3F0, "ArrayProperty"},
            {"ToggleTargetLockInputAction", 0x400, "ArrayProperty"},
            {"TapMovementThreshold", 0x410, "FloatProperty"},
            {"DistanceToChangeTarget", 0x414, "FloatProperty"},
            {"MaxStickDistance", 0x418, "FloatProperty"},
        }};
    };

}
