#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpeedOverTimeRuntime
{
    struct HacksSprintBoostOvertimeLayerAnimInstance
    {
        static constexpr std::string_view Name = "HacksSprintBoostOvertimeLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t PitchTransformAlpha = 0x1180;
            static constexpr std::uintptr_t VelocityPitch = 0x1188;
            static constexpr std::uintptr_t TopSpeedOvertimeTacSprint = 0x1190;
            static constexpr std::uintptr_t SpeedOvertimeTacSprint = 0x11A0;
            static constexpr std::uintptr_t MaxSpeedTag = 0x11B0;
            static constexpr std::uintptr_t CurrentUpVec = 0x11B8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PitchTransformAlpha", 0x1180, "FloatProperty"},
            {"VelocityPitch", 0x1188, "DoubleProperty"},
            {"TopSpeedOvertimeTacSprint", 0x1190, "StructProperty"},
            {"SpeedOvertimeTacSprint", 0x11A0, "StructProperty"},
            {"MaxSpeedTag", 0x11B0, "StructProperty"},
            {"CurrentUpVec", 0x11B8, "StructProperty"},
        }};
    };

}
