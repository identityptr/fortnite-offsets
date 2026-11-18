#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::YokeHopPlatterUI
{
    struct FortControllerComponent_YokeHopPlatter
    {
        static constexpr std::string_view Name = "FortControllerComponent_YokeHopPlatter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PhasesToShowSpawnLocationOnMap = 0xC8;
            static constexpr std::uintptr_t PhaseToResetMapFocusToCenter = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PhasesToShowSpawnLocationOnMap", 0xC8, "ArrayProperty"},
            {"PhaseToResetMapFocusToCenter", 0xD8, "EnumProperty"},
        }};
    };

    struct YokeHopPlatter_StormInfillVM
    {
        static constexpr std::string_view Name = "YokeHopPlatter_StormInfillVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
