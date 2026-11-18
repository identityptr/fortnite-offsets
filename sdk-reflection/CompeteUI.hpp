#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CompeteUI
{
    struct FortCompeteBlueprintLibrary
    {
        static constexpr std::string_view Name = "FortCompeteBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCompeteBookmarksSubsystem
    {
        static constexpr std::string_view Name = "FortCompeteBookmarksSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t BookmarksVM = 0x30;
            static constexpr std::uintptr_t CompeteGameUserSettings = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BookmarksVM", 0x30, "ObjectProperty"},
            {"CompeteGameUserSettings", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCompeteDisplaySubsystem
    {
        static constexpr std::string_view Name = "FortCompeteDisplaySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t HabaneroModeAnimatedMessage = 0x3BC;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HabaneroModeAnimatedMessage", 0x3BC, "WeakObjectProperty"},
        }};
    };

    struct FortCompeteEligibilitySubsystem
    {
        static constexpr std::string_view Name = "FortCompeteEligibilitySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCompeteGameUserSettings
    {
        static constexpr std::string_view Name = "FortCompeteGameUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SerializedEventBookmarks = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SerializedEventBookmarks", 0x70, "ArrayProperty"},
        }};
    };

    struct FortCompeteLandingPageData
    {
        static constexpr std::string_view Name = "FortCompeteLandingPageData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t FirstPriorityFilter = 0x28;
            static constexpr std::uintptr_t SecondPriorityFilter = 0x30;
            static constexpr std::uintptr_t ThirdPriorityFilter = 0x38;
            static constexpr std::uintptr_t Tile2GameModeName = 0x40;
            static constexpr std::uintptr_t Tile3GameModeName = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FirstPriorityFilter", 0x28, "ObjectProperty"},
            {"SecondPriorityFilter", 0x30, "ObjectProperty"},
            {"ThirdPriorityFilter", 0x38, "ObjectProperty"},
            {"Tile2GameModeName", 0x40, "NameProperty"},
            {"Tile3GameModeName", 0x44, "NameProperty"},
        }};
    };

    struct FortCompeteLeaderboardSubsystem
    {
        static constexpr std::string_view Name = "FortCompeteLeaderboardSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t LeaderboardEntries = 0x30;
            static constexpr std::uintptr_t LeaderboardLocalPlayerEntry = 0x40;
            static constexpr std::uintptr_t LeaderboardScreenSelectedEntry = 0x48;
            static constexpr std::uintptr_t LeaderboardClass = 0x50;
            static constexpr std::uintptr_t PlayersProfiles = 0x70;
            static constexpr std::uintptr_t OnSetTournamentLeaderboardScreenSelectedEntry = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LeaderboardEntries", 0x30, "ArrayProperty"},
            {"LeaderboardLocalPlayerEntry", 0x40, "ObjectProperty"},
            {"LeaderboardScreenSelectedEntry", 0x48, "ObjectProperty"},
            {"LeaderboardClass", 0x50, "SoftClassProperty"},
            {"PlayersProfiles", 0x70, "MapProperty"},
            {"OnSetTournamentLeaderboardScreenSelectedEntry", 0x120, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortCompeteRegionSubsystem
    {
        static constexpr std::string_view Name = "FortCompeteRegionSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCompeteScoreSubsystem
    {
        static constexpr std::string_view Name = "FortCompeteScoreSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCompeteTournamentDataSubsystem
    {
        static constexpr std::string_view Name = "FortCompeteTournamentDataSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCompeteTournamentsFilter
    {
        static constexpr std::string_view Name = "FortCompeteTournamentsFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ExperienceTypeTitle = 0x28;
            static constexpr std::uintptr_t ExperienceTypeParams = 0x38;
            static constexpr std::uintptr_t TeamSizeTitle = 0x48;
            static constexpr std::uintptr_t TeamSizeParams = 0x58;
            static constexpr std::uintptr_t RegionTitle = 0x68;
            static constexpr std::uintptr_t RegionParams = 0x78;
            static constexpr std::uintptr_t TournamentTypeTitle = 0x88;
            static constexpr std::uintptr_t TournamentTypeParams = 0x98;
            static constexpr std::uintptr_t TournamentStatusTitle = 0xA8;
            static constexpr std::uintptr_t TournamentStatusParams = 0xB8;
            static constexpr std::uintptr_t EligibilityTitle = 0xC8;
            static constexpr std::uintptr_t EligibilityParams = 0xD8;
            static constexpr std::uintptr_t BookmarksTitle = 0xE8;
            static constexpr std::uintptr_t BookmarksParams = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ExperienceTypeTitle", 0x28, "TextProperty"},
            {"ExperienceTypeParams", 0x38, "MapProperty"},
            {"TeamSizeTitle", 0x48, "TextProperty"},
            {"TeamSizeParams", 0x58, "MapProperty"},
            {"RegionTitle", 0x68, "TextProperty"},
            {"RegionParams", 0x78, "MapProperty"},
            {"TournamentTypeTitle", 0x88, "TextProperty"},
            {"TournamentTypeParams", 0x98, "MapProperty"},
            {"TournamentStatusTitle", 0xA8, "TextProperty"},
            {"TournamentStatusParams", 0xB8, "MapProperty"},
            {"EligibilityTitle", 0xC8, "TextProperty"},
            {"EligibilityParams", 0xD8, "MapProperty"},
            {"BookmarksTitle", 0xE8, "TextProperty"},
            {"BookmarksParams", 0xF8, "MapProperty"},
        }};
    };

    struct FortCompeteUIManager
    {
        static constexpr std::string_view Name = "FortCompeteUIManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t FrontendNotificationDataMap = 0x50;
            static constexpr std::uintptr_t CalendarVM = 0xA8;
            static constexpr std::uintptr_t CalendarFilterVM = 0xB0;
            static constexpr std::uintptr_t bShowDebugInfo = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FrontendNotificationDataMap", 0x50, "MapProperty"},
            {"CalendarVM", 0xA8, "ObjectProperty"},
            {"CalendarFilterVM", 0xB0, "ObjectProperty"},
            {"bShowDebugInfo", 0xD8, "BoolProperty"},
        }};
    };

    struct FortCompeteUIVM
    {
        static constexpr std::string_view Name = "FortCompeteUIVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t FakeData = 0x78;
            static constexpr std::uintptr_t TournamentSeriesContainer = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FakeData", 0x78, "OptionalProperty"},
            {"TournamentSeriesContainer", 0x88, "ObjectProperty"},
        }};
    };

    struct FortCompeteWatchSubsystem
    {
        static constexpr std::string_view Name = "FortCompeteWatchSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t LiveGames = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LiveGames", 0x38, "ArrayProperty"},
        }};
    };

    struct FortPoblanoTournamentsCalendarDayTileVM
    {
        static constexpr std::string_view Name = "FortPoblanoTournamentsCalendarDayTileVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CashCups = 0x68;
            static constexpr std::uintptr_t ShopCups = 0x69;
            static constexpr std::uintptr_t FNCS = 0x6A;
            static constexpr std::uintptr_t VictoryCups = 0x6B;
            static constexpr std::uintptr_t RankedCups = 0x6C;
            static constexpr std::uintptr_t OtherCups = 0x6D;
            static constexpr std::uintptr_t BookmarkedTournaments = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CashCups", 0x68, "EnumProperty"},
            {"ShopCups", 0x69, "EnumProperty"},
            {"FNCS", 0x6A, "EnumProperty"},
            {"VictoryCups", 0x6B, "EnumProperty"},
            {"RankedCups", 0x6C, "EnumProperty"},
            {"OtherCups", 0x6D, "EnumProperty"},
            {"BookmarkedTournaments", 0x88, "ArrayProperty"},
        }};
    };

    struct FortPoblanoTournamentsCalendarFilterVM
    {
        static constexpr std::string_view Name = "FortPoblanoTournamentsCalendarFilterVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionExperienceFilter = 0x68;
            static constexpr std::uintptr_t SectionTeamSizeFilter = 0xA0;
            static constexpr std::uintptr_t SectionRegionFilter = 0xD8;
            static constexpr std::uintptr_t SectionTournamentTypeFilter = 0x110;
            static constexpr std::uintptr_t SectionTournamentStatusFilter = 0x148;
            static constexpr std::uintptr_t SectionElegibilityFilter = 0x180;
            static constexpr std::uintptr_t SectionBookmarksFilter = 0x1B8;
            static constexpr std::uintptr_t CompeteUIManager = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SectionExperienceFilter", 0x68, "StructProperty"},
            {"SectionTeamSizeFilter", 0xA0, "StructProperty"},
            {"SectionRegionFilter", 0xD8, "StructProperty"},
            {"SectionTournamentTypeFilter", 0x110, "StructProperty"},
            {"SectionTournamentStatusFilter", 0x148, "StructProperty"},
            {"SectionElegibilityFilter", 0x180, "StructProperty"},
            {"SectionBookmarksFilter", 0x1B8, "StructProperty"},
            {"CompeteUIManager", 0x1F8, "ObjectProperty"},
        }};
    };

    struct FortPoblanoTournamentsCalendarTournamentTileVM
    {
        static constexpr std::string_view Name = "FortPoblanoTournamentsCalendarTournamentTileVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EligibilityRequirementsModalVM = 0x68;
            static constexpr std::uintptr_t Date = 0x70;
            static constexpr std::uintptr_t TextDate = 0x78;
            static constexpr std::uintptr_t Region = 0x88;
            static constexpr std::uintptr_t RankRequirementCheckResult = 0x89;
            static constexpr std::uintptr_t TournamentEligibility = 0x8A;
            static constexpr std::uintptr_t bMeetsTournamentSystemRequirements = 0x8B;
            static constexpr std::uintptr_t bMeetsRequiresQualifyingRound = 0x8C;
            static constexpr std::uintptr_t bMeetsTimeAliveRequirement = 0x8D;
            static constexpr std::uintptr_t TimeAliveSeconds = 0x90;
            static constexpr std::uintptr_t bMeetsCheckTournamentLocksRequirement = 0x94;
            static constexpr std::uintptr_t bMeetsEventsNumberHistoryRequirement = 0x95;
            static constexpr std::uintptr_t bMeetsAgeRequirement = 0x96;
            static constexpr std::uintptr_t bMeetsAccountLevelRequirement = 0x97;
            static constexpr std::uintptr_t bMeetsPermanentTournamentBanRequirement = 0x98;
            static constexpr std::uintptr_t bMeetsInputTypeRequirement = 0x99;
            static constexpr std::uintptr_t TournamentState = 0x9A;
            static constexpr std::uintptr_t TournamentTag = 0x9B;
            static constexpr std::uintptr_t ExperienceType = 0x9C;
            static constexpr std::uintptr_t TeamSize = 0x9D;
            static constexpr std::uintptr_t TournamentTitle = 0xA0;
            static constexpr std::uintptr_t bIsLive = 0xB0;
            static constexpr std::uintptr_t bIsBookmarked = 0xB1;
            static constexpr std::uintptr_t PosterTexture = 0xB8;
            static constexpr std::uintptr_t RoundDateTime = 0xC0;
            static constexpr std::uintptr_t BookmarksAmount = 0xD0;
            static constexpr std::uintptr_t BackgroundCalendarColors = 0xE0;
            static constexpr std::uintptr_t TournamentID = 0x100;
            static constexpr std::uintptr_t TournamentWindowId = 0x110;
            static constexpr std::uintptr_t GameType = 0x120;
            static constexpr std::uintptr_t AllTournamentLocks = 0x128;
            static constexpr std::uintptr_t EligibilityRequirementCount = 0x148;
            static constexpr std::uintptr_t EligibilityRequirementScore = 0x14C;
            static constexpr std::uintptr_t Poster = 0x150;
            static constexpr std::uintptr_t CompeteUIManager = 0x158;
            static constexpr std::uintptr_t RankInfo = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"EligibilityRequirementsModalVM", 0x68, "ObjectProperty"},
            {"Date", 0x70, "StructProperty"},
            {"TextDate", 0x78, "TextProperty"},
            {"Region", 0x88, "EnumProperty"},
            {"RankRequirementCheckResult", 0x89, "EnumProperty"},
            {"TournamentEligibility", 0x8A, "EnumProperty"},
            {"bMeetsTournamentSystemRequirements", 0x8B, "BoolProperty"},
            {"bMeetsRequiresQualifyingRound", 0x8C, "BoolProperty"},
            {"bMeetsTimeAliveRequirement", 0x8D, "BoolProperty"},
            {"TimeAliveSeconds", 0x90, "IntProperty"},
            {"bMeetsCheckTournamentLocksRequirement", 0x94, "BoolProperty"},
            {"bMeetsEventsNumberHistoryRequirement", 0x95, "BoolProperty"},
            {"bMeetsAgeRequirement", 0x96, "BoolProperty"},
            {"bMeetsAccountLevelRequirement", 0x97, "BoolProperty"},
            {"bMeetsPermanentTournamentBanRequirement", 0x98, "BoolProperty"},
            {"bMeetsInputTypeRequirement", 0x99, "BoolProperty"},
            {"TournamentState", 0x9A, "EnumProperty"},
            {"TournamentTag", 0x9B, "EnumProperty"},
            {"ExperienceType", 0x9C, "EnumProperty"},
            {"TeamSize", 0x9D, "EnumProperty"},
            {"TournamentTitle", 0xA0, "TextProperty"},
            {"bIsLive", 0xB0, "BoolProperty"},
            {"bIsBookmarked", 0xB1, "BoolProperty"},
            {"PosterTexture", 0xB8, "ObjectProperty"},
            {"RoundDateTime", 0xC0, "TextProperty"},
            {"BookmarksAmount", 0xD0, "TextProperty"},
            {"BackgroundCalendarColors", 0xE0, "StructProperty"},
            {"TournamentID", 0x100, "StrProperty"},
            {"TournamentWindowId", 0x110, "StrProperty"},
            {"GameType", 0x120, "EnumProperty"},
            {"AllTournamentLocks", 0x128, "StructProperty"},
            {"EligibilityRequirementCount", 0x148, "IntProperty"},
            {"EligibilityRequirementScore", 0x14C, "IntProperty"},
            {"Poster", 0x150, "ObjectProperty"},
            {"CompeteUIManager", 0x158, "ObjectProperty"},
            {"RankInfo", 0x180, "StructProperty"},
        }};
    };

    struct FortPoblanoTournamentsCalendarVM
    {
        static constexpr std::string_view Name = "FortPoblanoTournamentsCalendarVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TournamentsTilesData = 0x68;
            static constexpr std::uintptr_t CalendarTilesData = 0x90;
            static constexpr std::uintptr_t CurrentTime = 0xA8;
            static constexpr std::uintptr_t DisplayMonthDate = 0xB0;
            static constexpr std::uintptr_t MonthTournamentsIDs = 0xB8;
            static constexpr std::uintptr_t CompeteUIManager = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TournamentsTilesData", 0x68, "StructProperty"},
            {"CalendarTilesData", 0x90, "StructProperty"},
            {"CurrentTime", 0xA8, "StructProperty"},
            {"DisplayMonthDate", 0xB0, "StructProperty"},
            {"MonthTournamentsIDs", 0xB8, "ArrayProperty"},
            {"CompeteUIManager", 0xC8, "ObjectProperty"},
        }};
    };

    struct FortPoblanoTournamentsCarouselVM
    {
        static constexpr std::string_view Name = "FortPoblanoTournamentsCarouselVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TournamentDetailsScreenParams = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TournamentDetailsScreenParams", 0x68, "StructProperty"},
        }};
    };

    struct FortTournamentBackgroundVM
    {
        static constexpr std::string_view Name = "FortTournamentBackgroundVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TournamentTexture = 0x68;
            static constexpr std::uintptr_t BackgroundLeftColor = 0x70;
            static constexpr std::uintptr_t BackgroundRightColor = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TournamentTexture", 0x68, "ObjectProperty"},
            {"BackgroundLeftColor", 0x70, "StructProperty"},
            {"BackgroundRightColor", 0x80, "StructProperty"},
        }};
    };

    struct FortTournamentBaseEntryVM
    {
        static constexpr std::string_view Name = "FortTournamentBaseEntryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t LiveSessionId = 0x78;
            static constexpr std::uintptr_t TeammatesAccountIds = 0x88;
            static constexpr std::uintptr_t PlayersProfiles = 0x98;
            static constexpr std::uintptr_t AdjustedRank = 0xA8;
            static constexpr std::uintptr_t MatchesPlayed = 0xAC;
            static constexpr std::uintptr_t TotalPoints = 0xB0;
            static constexpr std::uintptr_t Percentile = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LiveSessionId", 0x78, "StrProperty"},
            {"TeammatesAccountIds", 0x88, "ArrayProperty"},
            {"PlayersProfiles", 0x98, "MapProperty"},
            {"AdjustedRank", 0xA8, "IntProperty"},
            {"MatchesPlayed", 0xAC, "IntProperty"},
            {"TotalPoints", 0xB0, "IntProperty"},
            {"Percentile", 0xB8, "DoubleProperty"},
        }};
    };

    struct FortTournamentBookmarksVM
    {
        static constexpr std::string_view Name = "FortTournamentBookmarksVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t UpcomingTournaments = 0x68;
            static constexpr std::uintptr_t bIsTournamentLobby = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UpcomingTournaments", 0x68, "ArrayProperty"},
            {"bIsTournamentLobby", 0x78, "BoolProperty"},
        }};
    };

    struct FortTournamentHeaderVM
    {
        static constexpr std::string_view Name = "FortTournamentHeaderVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TournamentName = 0x70;
            static constexpr std::uintptr_t WindowRoundText = 0x80;
            static constexpr std::uintptr_t WindowTimeText = 0x90;
            static constexpr std::uintptr_t ExperienceType = 0xA0;
            static constexpr std::uintptr_t MatchType = 0xA1;
            static constexpr std::uintptr_t TournamentType = 0xA2;
            static constexpr std::uintptr_t bIsWindowLive = 0xA3;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TournamentName", 0x70, "TextProperty"},
            {"WindowRoundText", 0x80, "TextProperty"},
            {"WindowTimeText", 0x90, "TextProperty"},
            {"ExperienceType", 0xA0, "EnumProperty"},
            {"MatchType", 0xA1, "EnumProperty"},
            {"TournamentType", 0xA2, "EnumProperty"},
            {"bIsWindowLive", 0xA3, "BoolProperty"},
        }};
    };

    struct FortTournamentLeaderboardEntryData
    {
        static constexpr std::string_view Name = "FortTournamentLeaderboardEntryData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTournamentBaseEntryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayIndex = 0xC0;
            static constexpr std::uintptr_t EntryIndex = 0xC4;
            static constexpr std::uintptr_t TrackedStatsTimesAchieved = 0xC8;
            static constexpr std::uintptr_t TrackedStatsPoints = 0xD8;
            static constexpr std::uintptr_t TotalVictoryRoyales = 0xE8;
            static constexpr std::uintptr_t TotalPlacements_Top5 = 0xEC;
            static constexpr std::uintptr_t TotalPlacements_Top10 = 0xF0;
            static constexpr std::uintptr_t TotalEliminations = 0xF4;
            static constexpr std::uintptr_t AveragePlacement = 0xF8;
            static constexpr std::uintptr_t bUseQualifiedIcons = 0xFC;
            static constexpr std::uintptr_t bIsTeamQualified = 0xFD;
            static constexpr std::uintptr_t bIsMatchPointWinner = 0xFE;
            static constexpr std::uintptr_t bIsSeriesPointLeaderboards = 0xFF;
            static constexpr std::uintptr_t SessionsTeamEntries = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"DisplayIndex", 0xC0, "IntProperty"},
            {"EntryIndex", 0xC4, "IntProperty"},
            {"TrackedStatsTimesAchieved", 0xC8, "MapProperty"},
            {"TrackedStatsPoints", 0xD8, "MapProperty"},
            {"TotalVictoryRoyales", 0xE8, "IntProperty"},
            {"TotalPlacements_Top5", 0xEC, "IntProperty"},
            {"TotalPlacements_Top10", 0xF0, "IntProperty"},
            {"TotalEliminations", 0xF4, "IntProperty"},
            {"AveragePlacement", 0xF8, "FloatProperty"},
            {"bUseQualifiedIcons", 0xFC, "BoolProperty"},
            {"bIsTeamQualified", 0xFD, "BoolProperty"},
            {"bIsMatchPointWinner", 0xFE, "BoolProperty"},
            {"bIsSeriesPointLeaderboards", 0xFF, "BoolProperty"},
            {"SessionsTeamEntries", 0x100, "ArrayProperty"},
        }};
    };

    struct FortTournamentLeaderboardSessionTeamEntryVM
    {
        static constexpr std::string_view Name = "FortTournamentLeaderboardSessionTeamEntryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionID = 0x68;
            static constexpr std::uintptr_t SessionNumber = 0x78;
            static constexpr std::uintptr_t TrackedStatsTimesAchieved = 0x80;
            static constexpr std::uintptr_t CreativeScore = 0x90;
            static constexpr std::uintptr_t bShowCreativeScore = 0x94;
            static constexpr std::uintptr_t bShowEliminations = 0x95;
            static constexpr std::uintptr_t bIsScoreContributor = 0x96;
            static constexpr std::uintptr_t bAvailable = 0x97;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SessionID", 0x68, "StrProperty"},
            {"SessionNumber", 0x78, "IntProperty"},
            {"TrackedStatsTimesAchieved", 0x80, "MapProperty"},
            {"CreativeScore", 0x90, "IntProperty"},
            {"bShowCreativeScore", 0x94, "BoolProperty"},
            {"bShowEliminations", 0x95, "BoolProperty"},
            {"bIsScoreContributor", 0x96, "BoolProperty"},
            {"bAvailable", 0x97, "BoolProperty"},
        }};
    };

    struct FortTournamentLeaderboardVM
    {
        static constexpr std::string_view Name = "FortTournamentLeaderboardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewStates = 0x68;
            static constexpr std::uintptr_t CompeteUIManager = 0x98;
            static constexpr std::uintptr_t LeaderboardCategories = 0xA0;
            static constexpr std::uintptr_t CurrentLeaderboardCategoryIndex = 0xB0;
            static constexpr std::uintptr_t bShowFriendsOnly = 0xB4;
            static constexpr std::uintptr_t TournamentName = 0xB8;
            static constexpr std::uintptr_t RegionName = 0xC8;
            static constexpr std::uintptr_t EventWindowsList = 0xD8;
            static constexpr std::uintptr_t bIsModelInitialized = 0xE8;
            static constexpr std::uintptr_t QualifierScore = 0xEC;
            static constexpr std::uintptr_t TokenData = 0xF0;
            static constexpr std::uintptr_t LeaderboardUpdateTime = 0x170;
            static constexpr std::uintptr_t MatchHistoryDialogVM = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ViewStates", 0x68, "MapProperty"},
            {"CompeteUIManager", 0x98, "ObjectProperty"},
            {"LeaderboardCategories", 0xA0, "ArrayProperty"},
            {"CurrentLeaderboardCategoryIndex", 0xB0, "IntProperty"},
            {"bShowFriendsOnly", 0xB4, "BoolProperty"},
            {"TournamentName", 0xB8, "TextProperty"},
            {"RegionName", 0xC8, "TextProperty"},
            {"EventWindowsList", 0xD8, "ArrayProperty"},
            {"bIsModelInitialized", 0xE8, "BoolProperty"},
            {"QualifierScore", 0xEC, "IntProperty"},
            {"TokenData", 0xF0, "StructProperty"},
            {"LeaderboardUpdateTime", 0x170, "StructProperty"},
            {"MatchHistoryDialogVM", 0x178, "ObjectProperty"},
        }};
    };

    struct FortTournamentLoadingStatsVM
    {
        static constexpr std::string_view Name = "FortTournamentLoadingStatsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TotalScore = 0x70;
            static constexpr std::uintptr_t MatchesPlayed = 0x74;
            static constexpr std::uintptr_t NumVictoryRoyales = 0x78;
            static constexpr std::uintptr_t PlacementPoints = 0x7C;
            static constexpr std::uintptr_t EliminationPoints = 0x80;
            static constexpr std::uintptr_t bIsValidSummary = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TotalScore", 0x70, "IntProperty"},
            {"MatchesPlayed", 0x74, "IntProperty"},
            {"NumVictoryRoyales", 0x78, "IntProperty"},
            {"PlacementPoints", 0x7C, "IntProperty"},
            {"EliminationPoints", 0x80, "IntProperty"},
            {"bIsValidSummary", 0x84, "BoolProperty"},
        }};
    };

    struct FortTournamentPlayerProfileVM
    {
        static constexpr std::string_view Name = "FortTournamentPlayerProfileVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AccountID = 0x68;
            static constexpr std::uintptr_t DisplayName = 0x78;
            static constexpr std::uintptr_t FlagName = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AccountID", 0x68, "StrProperty"},
            {"DisplayName", 0x78, "StrProperty"},
            {"FlagName", 0x88, "StrProperty"},
        }};
    };

    struct FortTournamentRequirementsModalVM
    {
        static constexpr std::string_view Name = "FortTournamentRequirementsModalVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RequirementsList = 0x80;
            static constexpr std::uintptr_t bAllChecksPassed = 0x90;
            static constexpr std::uintptr_t CompeteUIManager = 0x98;
            static constexpr std::uintptr_t RankInfo = 0xC0;
            static constexpr std::uintptr_t LastCheckRankResult = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RequirementsList", 0x80, "ArrayProperty"},
            {"bAllChecksPassed", 0x90, "BoolProperty"},
            {"CompeteUIManager", 0x98, "ObjectProperty"},
            {"RankInfo", 0xC0, "StructProperty"},
            {"LastCheckRankResult", 0xD0, "EnumProperty"},
        }};
    };

    struct FortTournamentRequirementsPrerequisiteDataHandler
    {
        static constexpr std::string_view Name = "FortTournamentRequirementsPrerequisiteDataHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Tournament = 0x60;
            static constexpr std::uintptr_t CompeteUIManager = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tournament", 0x60, "ObjectProperty"},
            {"CompeteUIManager", 0x68, "ObjectProperty"},
        }};
    };

    struct FortTournamentRequirementsVM
    {
        static constexpr std::string_view Name = "FortTournamentRequirementsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RequirementsList = 0x80;
            static constexpr std::uintptr_t bAllChecksPassed = 0x90;
            static constexpr std::uintptr_t PrerequisiteDataHandler = 0xA0;
            static constexpr std::uintptr_t TournamentSeries = 0xA8;
            static constexpr std::uintptr_t Tournament = 0xB0;
            static constexpr std::uintptr_t CompeteUIManager = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RequirementsList", 0x80, "ArrayProperty"},
            {"bAllChecksPassed", 0x90, "BoolProperty"},
            {"PrerequisiteDataHandler", 0xA0, "ObjectProperty"},
            {"TournamentSeries", 0xA8, "ObjectProperty"},
            {"Tournament", 0xB0, "ObjectProperty"},
            {"CompeteUIManager", 0xB8, "ObjectProperty"},
        }};
    };

    struct FortTournamentRewardItemVM
    {
        static constexpr std::string_view Name = "FortTournamentRewardItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemVM = 0x68;
            static constexpr std::uintptr_t bIsGreyedOut = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemVM", 0x68, "ObjectProperty"},
            {"bIsGreyedOut", 0x70, "BoolProperty"},
        }};
    };

    struct FortTournamentSeriesContainerVM
    {
        static constexpr std::string_view Name = "FortTournamentSeriesContainerVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTournamentBookmarksUpdate = 0x68;
            static constexpr std::uintptr_t TournamentSeriesCache = 0x78;
            static constexpr std::uintptr_t FakeData = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnTournamentBookmarksUpdate", 0x68, "MulticastInlineDelegateProperty"},
            {"TournamentSeriesCache", 0x78, "ArrayProperty"},
            {"FakeData", 0x88, "OptionalProperty"},
        }};
    };

    struct FortTournamentSeriesPointLeaderboardVM
    {
        static constexpr std::string_view Name = "FortTournamentSeriesPointLeaderboardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTournamentLeaderboardVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewStates = 0x68;
            static constexpr std::uintptr_t CompeteUIManager = 0x98;
            static constexpr std::uintptr_t LeaderboardCategories = 0xA0;
            static constexpr std::uintptr_t CurrentLeaderboardCategoryIndex = 0xB0;
            static constexpr std::uintptr_t bShowFriendsOnly = 0xB4;
            static constexpr std::uintptr_t TournamentName = 0xB8;
            static constexpr std::uintptr_t RegionName = 0xC8;
            static constexpr std::uintptr_t EventWindowsList = 0xD8;
            static constexpr std::uintptr_t bIsModelInitialized = 0xE8;
            static constexpr std::uintptr_t QualifierScore = 0xEC;
            static constexpr std::uintptr_t TokenData = 0xF0;
            static constexpr std::uintptr_t LeaderboardUpdateTime = 0x170;
            static constexpr std::uintptr_t MatchHistoryDialogVM = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ViewStates", 0x68, "MapProperty"},
            {"CompeteUIManager", 0x98, "ObjectProperty"},
            {"LeaderboardCategories", 0xA0, "ArrayProperty"},
            {"CurrentLeaderboardCategoryIndex", 0xB0, "IntProperty"},
            {"bShowFriendsOnly", 0xB4, "BoolProperty"},
            {"TournamentName", 0xB8, "TextProperty"},
            {"RegionName", 0xC8, "TextProperty"},
            {"EventWindowsList", 0xD8, "ArrayProperty"},
            {"bIsModelInitialized", 0xE8, "BoolProperty"},
            {"QualifierScore", 0xEC, "IntProperty"},
            {"TokenData", 0xF0, "StructProperty"},
            {"LeaderboardUpdateTime", 0x170, "StructProperty"},
            {"MatchHistoryDialogVM", 0x178, "ObjectProperty"},
        }};
    };

    struct FortTournamentSeriesVM
    {
        static constexpr std::string_view Name = "FortTournamentSeriesVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedTournaments = 0x68;
            static constexpr std::uintptr_t FakeData = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedTournaments", 0x68, "ArrayProperty"},
            {"FakeData", 0x88, "OptionalProperty"},
        }};
    };

    struct FortTournamentSessionLeaderboardVM
    {
        static constexpr std::string_view Name = "FortTournamentSessionLeaderboardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTournamentLeaderboardVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewStates = 0x68;
            static constexpr std::uintptr_t CompeteUIManager = 0x98;
            static constexpr std::uintptr_t LeaderboardCategories = 0xA0;
            static constexpr std::uintptr_t CurrentLeaderboardCategoryIndex = 0xB0;
            static constexpr std::uintptr_t bShowFriendsOnly = 0xB4;
            static constexpr std::uintptr_t TournamentName = 0xB8;
            static constexpr std::uintptr_t RegionName = 0xC8;
            static constexpr std::uintptr_t EventWindowsList = 0xD8;
            static constexpr std::uintptr_t bIsModelInitialized = 0xE8;
            static constexpr std::uintptr_t QualifierScore = 0xEC;
            static constexpr std::uintptr_t TokenData = 0xF0;
            static constexpr std::uintptr_t LeaderboardUpdateTime = 0x170;
            static constexpr std::uintptr_t MatchHistoryDialogVM = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ViewStates", 0x68, "MapProperty"},
            {"CompeteUIManager", 0x98, "ObjectProperty"},
            {"LeaderboardCategories", 0xA0, "ArrayProperty"},
            {"CurrentLeaderboardCategoryIndex", 0xB0, "IntProperty"},
            {"bShowFriendsOnly", 0xB4, "BoolProperty"},
            {"TournamentName", 0xB8, "TextProperty"},
            {"RegionName", 0xC8, "TextProperty"},
            {"EventWindowsList", 0xD8, "ArrayProperty"},
            {"bIsModelInitialized", 0xE8, "BoolProperty"},
            {"QualifierScore", 0xEC, "IntProperty"},
            {"TokenData", 0xF0, "StructProperty"},
            {"LeaderboardUpdateTime", 0x170, "StructProperty"},
            {"MatchHistoryDialogVM", 0x178, "ObjectProperty"},
        }};
    };

    struct FortTournamentVM
    {
        static constexpr std::string_view Name = "FortTournamentVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TournamentSeries = 0x68;
            static constexpr std::uintptr_t Requirements = 0x70;
            static constexpr std::uintptr_t PosterTexture = 0x88;
            static constexpr std::uintptr_t Poster = 0x90;
            static constexpr std::uintptr_t CompeteLandingPagePosterTexture = 0x98;
            static constexpr std::uintptr_t CompeteLandingPagePoster = 0xA0;
            static constexpr std::uintptr_t CompeteUIManager = 0xA8;
            static constexpr std::uintptr_t FakeData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TournamentSeries", 0x68, "ObjectProperty"},
            {"Requirements", 0x70, "ObjectProperty"},
            {"PosterTexture", 0x88, "ObjectProperty"},
            {"Poster", 0x90, "ObjectProperty"},
            {"CompeteLandingPagePosterTexture", 0x98, "ObjectProperty"},
            {"CompeteLandingPagePoster", 0xA0, "ObjectProperty"},
            {"CompeteUIManager", 0xA8, "ObjectProperty"},
            {"FakeData", 0xB0, "OptionalProperty"},
        }};
    };

    struct FortTournamentViewVM
    {
        static constexpr std::string_view Name = "FortTournamentViewVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EligibilityRequirementsModalVM = 0x68;
            static constexpr std::uintptr_t WatchLiveVM = 0x70;
            static constexpr std::uintptr_t TournamentHeaderVM = 0x78;
            static constexpr std::uintptr_t TournamentDescription = 0x90;
            static constexpr std::uintptr_t SeriesPointLeaderboardName = 0xA0;
            static constexpr std::uintptr_t RegionName = 0xB0;
            static constexpr std::uintptr_t ScoringRules = 0xC0;
            static constexpr std::uintptr_t EventWindowsList = 0xD0;
            static constexpr std::uintptr_t Payouts = 0xE0;
            static constexpr std::uintptr_t HeaderPayoutThresholdData = 0xF0;
            static constexpr std::uintptr_t HeaderPayoutItemData = 0x170;
            static constexpr std::uintptr_t bIsPlayerEligibleForWindow = 0x1A0;
            static constexpr std::uintptr_t bPlayerMeetsRankRequirement = 0x1A1;
            static constexpr std::uintptr_t bIsWindowLive = 0x1A2;
            static constexpr std::uintptr_t bIsLeaderboardAvailable = 0x1A3;
            static constexpr std::uintptr_t bIsCurrentWindowBookmarked = 0x1A4;
            static constexpr std::uintptr_t bAreAllWindowsBookmarked = 0x1A5;
            static constexpr std::uintptr_t bAnyBookmarkableWindows = 0x1A6;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"EligibilityRequirementsModalVM", 0x68, "ObjectProperty"},
            {"WatchLiveVM", 0x70, "ObjectProperty"},
            {"TournamentHeaderVM", 0x78, "ObjectProperty"},
            {"TournamentDescription", 0x90, "TextProperty"},
            {"SeriesPointLeaderboardName", 0xA0, "TextProperty"},
            {"RegionName", 0xB0, "TextProperty"},
            {"ScoringRules", 0xC0, "ArrayProperty"},
            {"EventWindowsList", 0xD0, "ArrayProperty"},
            {"Payouts", 0xE0, "ArrayProperty"},
            {"HeaderPayoutThresholdData", 0xF0, "StructProperty"},
            {"HeaderPayoutItemData", 0x170, "StructProperty"},
            {"bIsPlayerEligibleForWindow", 0x1A0, "BoolProperty"},
            {"bPlayerMeetsRankRequirement", 0x1A1, "BoolProperty"},
            {"bIsWindowLive", 0x1A2, "BoolProperty"},
            {"bIsLeaderboardAvailable", 0x1A3, "BoolProperty"},
            {"bIsCurrentWindowBookmarked", 0x1A4, "BoolProperty"},
            {"bAreAllWindowsBookmarked", 0x1A5, "BoolProperty"},
            {"bAnyBookmarkableWindows", 0x1A6, "BoolProperty"},
        }};
    };

    struct FortTournamentWatchLiveEntryVM
    {
        static constexpr std::string_view Name = "FortTournamentWatchLiveEntryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTournamentBaseEntryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeSinceGameStart = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeSinceGameStart", 0xC0, "TextProperty"},
        }};
    };

    struct FortTournamentWatchLiveVM
    {
        static constexpr std::string_view Name = "FortTournamentWatchLiveVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsModelInitialized = 0x68;
            static constexpr std::uintptr_t CompeteUIManager = 0x78;
            static constexpr std::uintptr_t TournamentName = 0x80;
            static constexpr std::uintptr_t LiveGames = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsModelInitialized", 0x68, "BoolProperty"},
            {"CompeteUIManager", 0x78, "ObjectProperty"},
            {"TournamentName", 0x80, "TextProperty"},
            {"LiveGames", 0x90, "ArrayProperty"},
        }};
    };

    struct FortTournmentLoadingVM
    {
        static constexpr std::string_view Name = "FortTournmentLoadingVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t TournamentHeaderVM = 0x78;
            static constexpr std::uintptr_t TournamentBackgroundVM = 0x80;
            static constexpr std::uintptr_t LoadingStatsVM = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TournamentHeaderVM", 0x78, "ObjectProperty"},
            {"TournamentBackgroundVM", 0x80, "ObjectProperty"},
            {"LoadingStatsVM", 0x88, "ObjectProperty"},
        }};
    };

    struct FortUIGameFeatureAction_CompeteUI
    {
        static constexpr std::string_view Name = "FortUIGameFeatureAction_CompeteUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t TournamentDetailsScreenClass = 0x28;
            static constexpr std::uintptr_t TournamentLeaderboardScreenClass = 0x48;
            static constexpr std::uintptr_t RankedSplashModalClass = 0x68;
            static constexpr std::uintptr_t TournamentLoadingScreenWidget = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TournamentDetailsScreenClass", 0x28, "SoftClassProperty"},
            {"TournamentLeaderboardScreenClass", 0x48, "SoftClassProperty"},
            {"RankedSplashModalClass", 0x68, "SoftClassProperty"},
            {"TournamentLoadingScreenWidget", 0x88, "SoftClassProperty"},
        }};
    };

}
