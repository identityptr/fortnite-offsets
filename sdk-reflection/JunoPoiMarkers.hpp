#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoPoiMarkers
{
    struct JunoPoiMarkerManagerComponent
    {
        static constexpr std::string_view Name = "JunoPoiMarkerManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PoiMarkerRegistry = 0xC0;
            static constexpr std::uintptr_t WaitForPlayspaceAction = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PoiMarkerRegistry", 0xC0, "StructProperty"},
            {"WaitForPlayspaceAction", 0xD8, "ObjectProperty"},
        }};
    };

}
