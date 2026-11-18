#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PlayAsVillain
{
    struct FortPawnComponent_PlayAsVillain
    {
        static constexpr std::string_view Name = "FortPawnComponent_PlayAsVillain";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShowStatusWidgetMinSquaredRadius = 0xC8;
            static constexpr std::uintptr_t ShowStatusWidgetMaxSquaredRadius = 0xCC;
            static constexpr std::uintptr_t bShouldCheckLineOfSight = 0xD0;
            static constexpr std::uintptr_t StatusWidgetComponent = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ShowStatusWidgetMinSquaredRadius", 0xC8, "FloatProperty"},
            {"ShowStatusWidgetMaxSquaredRadius", 0xCC, "FloatProperty"},
            {"bShouldCheckLineOfSight", 0xD0, "BoolProperty"},
            {"StatusWidgetComponent", 0xD8, "ObjectProperty"},
        }};
    };

}
