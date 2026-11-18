#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CareerV3UI
{
    struct FortCareerChangeFlagModalItemVM
    {
        static constexpr std::string_view Name = "FortCareerChangeFlagModalItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RegionId = 0x68;
            static constexpr std::uintptr_t RegionDisplayName = 0x78;
            static constexpr std::uintptr_t RegionFlagAsset = 0x88;
            static constexpr std::uintptr_t bIsCurrent = 0xA8;
            static constexpr std::uintptr_t CareerUIManager = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RegionId", 0x68, "StrProperty"},
            {"RegionDisplayName", 0x78, "TextProperty"},
            {"RegionFlagAsset", 0x88, "SoftObjectProperty"},
            {"bIsCurrent", 0xA8, "BoolProperty"},
            {"CareerUIManager", 0xB0, "ObjectProperty"},
        }};
    };

    struct FortCareerChangeFlagModalVM
    {
        static constexpr std::string_view Name = "FortCareerChangeFlagModalVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCareerStatsScreenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFlagChanged = 0xB0;
            static constexpr std::uintptr_t RegionLockDaysRemaining = 0xC0;
            static constexpr std::uintptr_t bAllowedToChangeFlag = 0xC4;
            static constexpr std::uintptr_t AvailableRegions = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnFlagChanged", 0xB0, "MulticastInlineDelegateProperty"},
            {"RegionLockDaysRemaining", 0xC0, "IntProperty"},
            {"bAllowedToChangeFlag", 0xC4, "BoolProperty"},
            {"AvailableRegions", 0xC8, "ArrayProperty"},
        }};
    };

    struct FortCareerGameModeTabVM
    {
        static constexpr std::string_view Name = "FortCareerGameModeTabVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t GameModePosterTexture = 0x78;
            static constexpr std::uintptr_t GameModePosterTextTexture = 0x80;
            static constexpr std::uintptr_t TabSelectedIndex = 0x88;
            static constexpr std::uintptr_t GameModeRankedDataAsset = 0x90;
            static constexpr std::uintptr_t CurrentGameModeRankedData = 0x98;
            static constexpr std::uintptr_t CurrentGameModeDataTable = 0x108;
            static constexpr std::uintptr_t RowNames = 0x110;
            static constexpr std::uintptr_t LGTMNames = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameModePosterTexture", 0x78, "ObjectProperty"},
            {"GameModePosterTextTexture", 0x80, "ObjectProperty"},
            {"TabSelectedIndex", 0x88, "IntProperty"},
            {"GameModeRankedDataAsset", 0x90, "ObjectProperty"},
            {"CurrentGameModeRankedData", 0x98, "StructProperty"},
            {"CurrentGameModeDataTable", 0x108, "ObjectProperty"},
            {"RowNames", 0x110, "ArrayProperty"},
            {"LGTMNames", 0x120, "ArrayProperty"},
        }};
    };

    struct FortCareerSocialLeaderboardVM
    {
        static constexpr std::string_view Name = "FortCareerSocialLeaderboardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsModelInitialized = 0x78;
            static constexpr std::uintptr_t CurrentGameMode = 0x7C;
            static constexpr std::uintptr_t CurrentSeasonIndex = 0x80;
            static constexpr std::uintptr_t CurrentSeasonNumber = 0x84;
            static constexpr std::uintptr_t LobbyGameMode = 0x88;
            static constexpr std::uintptr_t GameModeNames = 0x90;
            static constexpr std::uintptr_t TabVisibility = 0xA0;
            static constexpr std::uintptr_t CurrentGameModeRankedAsset = 0xB0;
            static constexpr std::uintptr_t ViewStates = 0xC8;
            static constexpr std::uintptr_t SelectedEntry = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bIsModelInitialized", 0x78, "BoolProperty"},
            {"CurrentGameMode", 0x7C, "NameProperty"},
            {"CurrentSeasonIndex", 0x80, "IntProperty"},
            {"CurrentSeasonNumber", 0x84, "NameProperty"},
            {"LobbyGameMode", 0x88, "NameProperty"},
            {"GameModeNames", 0x90, "ArrayProperty"},
            {"TabVisibility", 0xA0, "ArrayProperty"},
            {"CurrentGameModeRankedAsset", 0xB0, "ObjectProperty"},
            {"ViewStates", 0xC8, "MapProperty"},
            {"SelectedEntry", 0xD8, "ObjectProperty"},
        }};
    };

    struct FortCareerStatsScreenVM
    {
        static constexpr std::string_view Name = "FortCareerStatsScreenVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RegionId = 0x68;
            static constexpr std::uintptr_t RegionDisplayName = 0x78;
            static constexpr std::uintptr_t RegionFlagAsset = 0x88;
            static constexpr std::uintptr_t CareerUIManager = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RegionId", 0x68, "StrProperty"},
            {"RegionDisplayName", 0x78, "TextProperty"},
            {"RegionFlagAsset", 0x88, "SoftObjectProperty"},
            {"CareerUIManager", 0xA8, "ObjectProperty"},
        }};
    };

    struct FortCareerUIManager
    {
        static constexpr std::string_view Name = "FortCareerUIManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ChangeFlagModalVM = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChangeFlagModalVM", 0x80, "ObjectProperty"},
        }};
    };

    struct FortCareerV3UIManager
    {
        static constexpr std::string_view Name = "FortCareerV3UIManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSettingsOpened = 0x30;
            static constexpr std::uintptr_t CachedFriendsAvatars = 0x58;
            static constexpr std::uintptr_t CareerScreenClass = 0x148;
            static constexpr std::uintptr_t LeaderboardEntries = 0x168;
            static constexpr std::uintptr_t LeaderboardLocalPlayerEntry = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnSettingsOpened", 0x30, "MulticastInlineDelegateProperty"},
            {"CachedFriendsAvatars", 0x58, "MapProperty"},
            {"CareerScreenClass", 0x148, "SoftClassProperty"},
            {"LeaderboardEntries", 0x168, "ArrayProperty"},
            {"LeaderboardLocalPlayerEntry", 0x178, "ObjectProperty"},
        }};
    };

    struct FortSocialLeaderboardBannerVM
    {
        static constexpr std::string_view Name = "FortSocialLeaderboardBannerVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SocialLeaderboardEntryData = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SocialLeaderboardEntryData", 0x78, "ObjectProperty"},
        }};
    };

    struct FortSocialLeaderboardEntryData
    {
        static constexpr std::string_view Name = "FortSocialLeaderboardEntryData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTournamentLeaderboardEntryData";
        struct Offsets
        {
            static constexpr std::uintptr_t Rank = 0x110;
            static constexpr std::uintptr_t MatchmakingRating = 0x114;
            static constexpr std::uintptr_t CurrentPlayerPosition = 0x118;
            static constexpr std::uintptr_t LastTimeHabaneroProgressUpdated = 0x120;
            static constexpr std::uintptr_t ProgressToNextRank = 0x128;
            static constexpr std::uintptr_t GameMode = 0x12C;
            static constexpr std::uintptr_t SeasonId = 0x130;
            static constexpr std::uintptr_t FlagName = 0x140;
            static constexpr std::uintptr_t IsFriend = 0x150;
            static constexpr std::uintptr_t bShowFlareEffect = 0x151;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Rank", 0x110, "IntProperty"},
            {"MatchmakingRating", 0x114, "IntProperty"},
            {"CurrentPlayerPosition", 0x118, "IntProperty"},
            {"LastTimeHabaneroProgressUpdated", 0x120, "StructProperty"},
            {"ProgressToNextRank", 0x128, "FloatProperty"},
            {"GameMode", 0x12C, "NameProperty"},
            {"SeasonId", 0x130, "StrProperty"},
            {"FlagName", 0x140, "StrProperty"},
            {"IsFriend", 0x150, "BoolProperty"},
            {"bShowFlareEffect", 0x151, "BoolProperty"},
        }};
    };

    struct FortUIGameFeatureAction_CareerV3
    {
        static constexpr std::string_view Name = "FortUIGameFeatureAction_CareerV3";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t CareerScreenClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CareerScreenClass", 0x28, "SoftClassProperty"},
        }};
    };

    struct FortUIGameFeatureAction_CompeteTab
    {
        static constexpr std::string_view Name = "FortUIGameFeatureAction_CompeteTab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t CareerStatsScreenClass = 0x28;
            static constexpr std::uintptr_t CareerShowCaseStatsScreenClass = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CareerStatsScreenClass", 0x28, "SoftClassProperty"},
            {"CareerShowCaseStatsScreenClass", 0x48, "SoftClassProperty"},
        }};
    };

}
