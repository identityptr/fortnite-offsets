#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WheelGrenadeRuntime
{
    struct WheelGrenadeWheel
    {
        static constexpr std::string_view Name = "WheelGrenadeWheel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AttachableWheel";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxHealth = 0x320;
            static constexpr std::uintptr_t AbilitySystemComponent = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxHealth", 0x320, "FloatProperty"},
            {"AbilitySystemComponent", 0x328, "ObjectProperty"},
        }};
    };

}
