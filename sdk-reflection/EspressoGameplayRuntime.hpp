#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EspressoGameplayRuntime
{
    struct DragoncartEspressoLayerAnimInstance
    {
        static constexpr std::string_view Name = "DragoncartEspressoLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialJumpAngle = 0x1180;
            static constexpr std::uintptr_t JumpForwardAngleDegrees = 0x1184;
            static constexpr std::uintptr_t JumpBackwardAngleDegrees = 0x1188;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InitialJumpAngle", 0x1180, "EnumProperty"},
            {"JumpForwardAngleDegrees", 0x1184, "FloatProperty"},
            {"JumpBackwardAngleDegrees", 0x1188, "FloatProperty"},
        }};
    };

    struct EspressoGameplayAttributeSet
    {
        static constexpr std::string_view Name = "EspressoGameplayAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentCharges = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentCharges", 0x48, "StructProperty"},
        }};
    };

}
