#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MoonFlaxWarBusRuntime
{
    struct MoonFlaxWarBusTurretAudioManager
    {
        static constexpr std::string_view Name = "MoonFlaxWarBusTurretAudioManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleOwner = 0x28;
            static constexpr std::uintptr_t WeaponsMovementMinThreshold = 0x30;
            static constexpr std::uintptr_t WeaponsMovementMaxThreshold = 0x34;
            static constexpr std::uintptr_t FrontTurretState = 0x38;
            static constexpr std::uintptr_t BackTurretState = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"VehicleOwner", 0x28, "ObjectProperty"},
            {"WeaponsMovementMinThreshold", 0x30, "FloatProperty"},
            {"WeaponsMovementMaxThreshold", 0x34, "FloatProperty"},
            {"FrontTurretState", 0x38, "StructProperty"},
            {"BackTurretState", 0x80, "StructProperty"},
        }};
    };

}
