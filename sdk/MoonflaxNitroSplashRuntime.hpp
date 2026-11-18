#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MoonflaxNitroSplashRuntime
{
    struct NitroSplashLayerAnimInstance
    {
        static constexpr std::string_view Name = "NitroSplashLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTacSprintNitroSplash = 0x1180;
            static constexpr std::uintptr_t PlayerConsumingTag = 0x1184;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsTacSprintNitroSplash", 0x1180, "BoolProperty"},
            {"PlayerConsumingTag", 0x1184, "StructProperty"},
        }};
    };

}
