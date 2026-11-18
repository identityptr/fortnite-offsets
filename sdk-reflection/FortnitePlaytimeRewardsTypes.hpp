#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortnitePlaytimeRewardsTypes
{
    struct PlaytimeRewardsTableRow
    {
        static constexpr std::string_view Name = "PlaytimeRewardsTableRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductTag = 0x8;
            static constexpr std::uintptr_t XpPayout = 0xC;
            static constexpr std::uintptr_t RestedXpUsage = 0x10;
            static constexpr std::uintptr_t CompletionTimeMinutes = 0x18;
            static constexpr std::uintptr_t DisplayTimeIntervalMinutes = 0x1C;
            static constexpr std::uintptr_t bDisableIfDynamicDistributorsAreActive = 0x20;
            static constexpr std::uintptr_t bUseDynamicXpCircuitBreaker = 0x21;
            static constexpr std::uintptr_t WeeklyXpThreshold = 0x24;
            static constexpr std::uintptr_t DiminishedXpPayout = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ProductTag", 0x8, "StructProperty"},
            {"XpPayout", 0xC, "IntProperty"},
            {"RestedXpUsage", 0x10, "StructProperty"},
            {"CompletionTimeMinutes", 0x18, "FloatProperty"},
            {"DisplayTimeIntervalMinutes", 0x1C, "FloatProperty"},
            {"bDisableIfDynamicDistributorsAreActive", 0x20, "BoolProperty"},
            {"bUseDynamicXpCircuitBreaker", 0x21, "BoolProperty"},
            {"WeeklyXpThreshold", 0x24, "IntProperty"},
            {"DiminishedXpPayout", 0x28, "IntProperty"},
        }};
    };

    struct PlaytimeXpProfileStat
    {
        static constexpr std::string_view Name = "PlaytimeXpProfileStat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentWeekXp = 0x0;
            static constexpr std::uintptr_t CurrentWeek = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentWeekXp", 0x0, "IntProperty"},
            {"CurrentWeek", 0x4, "IntProperty"},
        }};
    };

}
