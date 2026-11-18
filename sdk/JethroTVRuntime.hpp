#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JethroTVRuntime
{
    struct FortVehicleLayerAnimInstance_JethroTVPassenger
    {
        static constexpr std::string_view Name = "FortVehicleLayerAnimInstance_JethroTVPassenger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleLayerAnimInstance_FerretPassenger";
        struct Offsets
        {
            static constexpr std::uintptr_t ReturnValueYPitch = 0x410;
            static constexpr std::uintptr_t ReturnValueXRoll = 0x414;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReturnValueYPitch", 0x410, "FloatProperty"},
            {"ReturnValueXRoll", 0x414, "FloatProperty"},
        }};
    };

    struct JethroTVVehicleLayerAnimInstance
    {
        static constexpr std::string_view Name = "JethroTVVehicleLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BS_Add_Alpha = 0x480;
            static constexpr std::uintptr_t Speed = 0x488;
            static constexpr std::uintptr_t InFlightTagNames = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BS_Add_Alpha", 0x480, "DoubleProperty"},
            {"Speed", 0x488, "DoubleProperty"},
            {"InFlightTagNames", 0x490, "StructProperty"},
        }};
    };

}
