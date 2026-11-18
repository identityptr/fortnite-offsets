#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AircraftADSUI
{
    struct AircraftADSPOIVM
    {
        static constexpr std::string_view Name = "AircraftADSPOIVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlayerControllerComponent_AircraftADSUI
    {
        static constexpr std::string_view Name = "FortPlayerControllerComponent_AircraftADSUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t POIWidgetAliasTag = 0xC0;
            static constexpr std::uintptr_t POIHighlightMaxAngle = 0xC8;
            static constexpr std::uintptr_t POIVolumeWorldCenters = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"POIWidgetAliasTag", 0xC0, "StructProperty"},
            {"POIHighlightMaxAngle", 0xC8, "StructProperty"},
            {"POIVolumeWorldCenters", 0x100, "MapProperty"},
        }};
    };

}
