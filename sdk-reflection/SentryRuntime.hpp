#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SentryRuntime
{
    struct CreativeSentryAnimInstance
    {
        static constexpr std::string_view Name = "CreativeSentryAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDefenderAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t RotateAimAnimationPitch = 0x4C0;
            static constexpr std::uintptr_t CounterRotateAimAnimationPitch = 0x4C4;
            static constexpr std::uintptr_t bIsRelaxedLevel1OrNotTargeting = 0x4C8;
            static constexpr std::uintptr_t RightHandIKAlpha = 0x4CC;
            static constexpr std::uintptr_t OneMinusLeftHandFK = 0x4D0;
            static constexpr std::uintptr_t LeftHandIKAlpha = 0x4D4;
            static constexpr std::uintptr_t RetargetHandIKBonesToFKPositionWeight = 0x4D8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RotateAimAnimationPitch", 0x4C0, "FloatProperty"},
            {"CounterRotateAimAnimationPitch", 0x4C4, "FloatProperty"},
            {"bIsRelaxedLevel1OrNotTargeting", 0x4C8, "BoolProperty"},
            {"RightHandIKAlpha", 0x4CC, "FloatProperty"},
            {"OneMinusLeftHandFK", 0x4D0, "FloatProperty"},
            {"LeftHandIKAlpha", 0x4D4, "FloatProperty"},
            {"RetargetHandIKBonesToFKPositionWeight", 0x4D8, "FloatProperty"},
        }};
    };

}
