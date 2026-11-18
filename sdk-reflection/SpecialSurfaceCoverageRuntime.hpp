#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpecialSurfaceCoverageRuntime
{
    struct FortGameStateComponent_SurfaceCoverageMap
    {
        static constexpr std::string_view Name = "FortGameStateComponent_SurfaceCoverageMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_SurfaceOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t SpecialSurfaceType = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpecialSurfaceType", 0xC0, "ByteProperty"},
        }};
    };

}
