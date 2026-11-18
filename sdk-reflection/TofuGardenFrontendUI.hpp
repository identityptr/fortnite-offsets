#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TofuGardenFrontendUI
{
    struct TofuGardenLobbyDetailsUIDirector
    {
        static constexpr std::string_view Name = "TofuGardenLobbyDetailsUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidProductIslands = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValidProductIslands", 0x2A8, "StructProperty"},
        }};
    };

    struct TofuGardenViewModel
    {
        static constexpr std::string_view Name = "TofuGardenViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x78;
            static constexpr std::uintptr_t PointsForNextRank = 0x7C;
            static constexpr std::uintptr_t bIsFirstDailyWin = 0x80;
            static constexpr std::uintptr_t bIsMaxRank = 0x81;
            static constexpr std::uintptr_t CurrentRank = 0x88;
            static constexpr std::uintptr_t RankDataTable = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Points", 0x78, "IntProperty"},
            {"PointsForNextRank", 0x7C, "IntProperty"},
            {"bIsFirstDailyWin", 0x80, "BoolProperty"},
            {"bIsMaxRank", 0x81, "BoolProperty"},
            {"CurrentRank", 0x88, "StructProperty"},
            {"RankDataTable", 0xF0, "ObjectProperty"},
        }};
    };

}
