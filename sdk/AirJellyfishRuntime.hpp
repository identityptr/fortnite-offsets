#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AirJellyfishRuntime
{
    struct FortAirJellyfishAnimInstance
    {
        static constexpr std::string_view Name = "FortAirJellyfishAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t RotatorLerpRate = 0x460;
            static constexpr std::uintptr_t VelocityDirectionScalar = 0x464;
            static constexpr std::uintptr_t RootRotation = 0x468;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RotatorLerpRate", 0x460, "FloatProperty"},
            {"VelocityDirectionScalar", 0x464, "FloatProperty"},
            {"RootRotation", 0x468, "StructProperty"},
        }};
    };

}
