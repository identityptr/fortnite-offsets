#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TofuGardenGameUI
{
    struct TofuGardenGameViewModel
    {
        static constexpr std::string_view Name = "TofuGardenGameViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x78;
            static constexpr std::uintptr_t PointsForNextRank = 0x7C;
            static constexpr std::uintptr_t bIsMaxRank = 0x80;
            static constexpr std::uintptr_t PreviousRank = 0x88;
            static constexpr std::uintptr_t CurrentRank = 0xF0;
            static constexpr std::uintptr_t DeltaPoints = 0x158;
            static constexpr std::uintptr_t bDidLevelUp = 0x15C;
            static constexpr std::uintptr_t RankDataTable = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Points", 0x78, "IntProperty"},
            {"PointsForNextRank", 0x7C, "IntProperty"},
            {"bIsMaxRank", 0x80, "BoolProperty"},
            {"PreviousRank", 0x88, "StructProperty"},
            {"CurrentRank", 0xF0, "StructProperty"},
            {"DeltaPoints", 0x158, "IntProperty"},
            {"bDidLevelUp", 0x15C, "BoolProperty"},
            {"RankDataTable", 0x160, "ObjectProperty"},
        }};
    };

}
