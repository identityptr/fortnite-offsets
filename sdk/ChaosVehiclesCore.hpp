#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosVehiclesCore
{
    struct DefaultModularVehicleInputModifier
    {
        static constexpr std::string_view Name = "DefaultModularVehicleInputModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RiseRate = 0x28;
            static constexpr std::uintptr_t FallRate = 0x2C;
            static constexpr std::uintptr_t InputCurveFunction = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RiseRate", 0x28, "FloatProperty"},
            {"FallRate", 0x2C, "FloatProperty"},
            {"InputCurveFunction", 0x30, "EnumProperty"},
        }};
    };

    struct VehicleInputProducerBase
    {
        static constexpr std::string_view Name = "VehicleInputProducerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
