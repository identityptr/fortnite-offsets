#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TankUI
{
    struct FortGameSettingRegistryExtension_Tank
    {
        static constexpr std::string_view Name = "FortGameSettingRegistryExtension_Tank";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameSettingRegistryExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkupBase = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MarkupBase", 0x28, "ObjectProperty"},
        }};
    };

    struct TankVehicleReticle
    {
        static constexpr std::string_view Name = "TankVehicleReticle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleDashboardWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningTankVehicle = 0x480;
            static constexpr std::uintptr_t MinTurretPitch = 0x488;
            static constexpr std::uintptr_t MaxTurretPitch = 0x48C;
            static constexpr std::uintptr_t bDistanceMeterEnabled = 0x490;
            static constexpr std::uintptr_t bTankOrientationEventsEnabled = 0x491;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OwningTankVehicle", 0x480, "ObjectProperty"},
            {"MinTurretPitch", 0x488, "FloatProperty"},
            {"MaxTurretPitch", 0x48C, "FloatProperty"},
            {"bDistanceMeterEnabled", 0x490, "BoolProperty"},
            {"bTankOrientationEventsEnabled", 0x491, "BoolProperty"},
        }};
    };

}
