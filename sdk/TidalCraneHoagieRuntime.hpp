#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TidalCraneHoagieRuntime
{
    struct TidalCraneHoagieVehicleAnimInstance
    {
        static constexpr std::string_view Name = "TidalCraneHoagieVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHoagieVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t RotDelta = 0x700;
            static constexpr std::uintptr_t YawLeftAlpha = 0x718;
            static constexpr std::uintptr_t YawRightAlpha = 0x720;
            static constexpr std::uintptr_t ThrustNoiseAlpha = 0x728;
            static constexpr std::uintptr_t AdjustNoiseAlpha = 0x730;
            static constexpr std::uintptr_t SpeedTotal = 0x738;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RotDelta", 0x700, "StructProperty"},
            {"YawLeftAlpha", 0x718, "DoubleProperty"},
            {"YawRightAlpha", 0x720, "DoubleProperty"},
            {"ThrustNoiseAlpha", 0x728, "DoubleProperty"},
            {"AdjustNoiseAlpha", 0x730, "DoubleProperty"},
            {"SpeedTotal", 0x738, "DoubleProperty"},
        }};
    };

}
