#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PlaytimeRewardsRuntime
{
    struct FortGameStateComponent_PlaytimeRewards
    {
        static constexpr std::string_view Name = "FortGameStateComponent_PlaytimeRewards";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaytimeRewardsTable = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlaytimeRewardsTable", 0xD8, "ObjectProperty"},
        }};
    };

    struct FortPlayerStateComponent_PlaytimeRewards
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_PlaytimeRewards";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayIntervalInSeconds = 0xC0;
            static constexpr std::uintptr_t AccumulatedXpRewardedThisSession = 0xC4;
            static constexpr std::uintptr_t XpItemDefinition = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayIntervalInSeconds", 0xC0, "FloatProperty"},
            {"AccumulatedXpRewardedThisSession", 0xC4, "IntProperty"},
            {"XpItemDefinition", 0x140, "ObjectProperty"},
        }};
    };

    struct PlaytimeRewardsCheatManager
    {
        static constexpr std::string_view Name = "PlaytimeRewardsCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
