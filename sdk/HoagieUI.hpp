#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HoagieUI
{
    struct FortHoagieVehicleReticle
    {
        static constexpr std::string_view Name = "FortHoagieVehicleReticle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleDashboardWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningHoagieVehicle = 0x480;
            static constexpr std::uintptr_t AltitudeMeterMID = 0x488;
            static constexpr std::uintptr_t MaxAltitudeWithoutFallDamage = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwningHoagieVehicle", 0x480, "ObjectProperty"},
            {"AltitudeMeterMID", 0x488, "ObjectProperty"},
            {"MaxAltitudeWithoutFallDamage", 0x490, "FloatProperty"},
        }};
    };

}
