#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HazelnutSpread_RivalsCoreUI
{
    struct ClashMeshDataVM
    {
        static constexpr std::string_view Name = "ClashMeshDataVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentValue = 0x68;
            static constexpr std::uintptr_t RequiredValue = 0x70;
            static constexpr std::uintptr_t FactionName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentValue", 0x68, "Int64Property"},
            {"RequiredValue", 0x70, "Int64Property"},
            {"FactionName", 0x78, "NameProperty"},
        }};
    };

    struct ClashPlayerDataVM
    {
        static constexpr std::string_view Name = "ClashPlayerDataVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGameStateComponent_HazelnutSpreadLeaderboardData
    {
        static constexpr std::string_view Name = "FortGameStateComponent_HazelnutSpreadLeaderboardData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerRankTitleDataTable = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerRankTitleDataTable", 0xC8, "ObjectProperty"},
        }};
    };

    struct HazelnutSpreadBaseLeaderboardVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadBaseLeaderboardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalPlayerLeaderboardInfo = 0x80;
            static constexpr std::uintptr_t OrderedPlayerLeaderboardInfo = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocalPlayerLeaderboardInfo", 0x80, "ObjectProperty"},
            {"OrderedPlayerLeaderboardInfo", 0x88, "ArrayProperty"},
        }};
    };

    struct HazelnutSpreadFrontendLeaderboardVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadFrontendLeaderboardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HazelnutSpreadBaseLeaderboardVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalPlayerLeaderboardInfo = 0x80;
            static constexpr std::uintptr_t OrderedPlayerLeaderboardInfo = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocalPlayerLeaderboardInfo", 0x80, "ObjectProperty"},
            {"OrderedPlayerLeaderboardInfo", 0x88, "ArrayProperty"},
        }};
    };

    struct HazelnutSpreadInGameLeaderboardVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadInGameLeaderboardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HazelnutSpreadBaseLeaderboardVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalPlayerLeaderboardInfo = 0x80;
            static constexpr std::uintptr_t OrderedPlayerLeaderboardInfo = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocalPlayerLeaderboardInfo", 0x80, "ObjectProperty"},
            {"OrderedPlayerLeaderboardInfo", 0x88, "ArrayProperty"},
        }};
    };

    struct HazelnutSpreadInMatchTabScreen
    {
        static constexpr std::string_view Name = "HazelnutSpreadInMatchTabScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MapTabInfo = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MapTabInfo", 0x4C8, "StructProperty"},
        }};
    };

    struct HazelnutSpreadPlayerLeaderboardInfoBaseVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadPlayerLeaderboardInfoBaseVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HazelnutSpreadPlayerLeaderboardInfoFrontendVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadPlayerLeaderboardInfoFrontendVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HazelnutSpreadPlayerLeaderboardInfoBaseVM";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HazelnutSpreadPlayerLeaderboardInfoInGameVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadPlayerLeaderboardInfoInGameVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HazelnutSpreadPlayerLeaderboardInfoBaseVM";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
