#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimCoreUI
{
    struct PilgrimActiveSongChallengeVM
    {
        static constexpr std::string_view Name = "PilgrimActiveSongChallengeVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongChallengeBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LookupState = 0x78;
            static constexpr std::uintptr_t ProgressionState = 0x79;
            static constexpr std::uintptr_t FoundChallengeType = 0x7A;
            static constexpr std::uintptr_t ChallengeData = 0x80;
            static constexpr std::uintptr_t SongShortName = 0x88;
            static constexpr std::uintptr_t Instrument = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LookupState", 0x78, "EnumProperty"},
            {"ProgressionState", 0x79, "EnumProperty"},
            {"FoundChallengeType", 0x7A, "EnumProperty"},
            {"ChallengeData", 0x80, "ObjectProperty"},
            {"SongShortName", 0x88, "NameProperty"},
            {"Instrument", 0x8C, "EnumProperty"},
        }};
    };

    struct PilgrimBandScoreVM
    {
        static constexpr std::string_view Name = "PilgrimBandScoreVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t BandScore = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BandScore", 0x78, "FloatProperty"},
        }};
    };

    struct PilgrimCoreCVarsVM
    {
        static constexpr std::string_view Name = "PilgrimCoreCVarsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bHideHUDForScreenCapture = 0x78;
            static constexpr std::uintptr_t bAreSongChallengesEnabled = 0x79;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bHideHUDForScreenCapture", 0x78, "BoolProperty"},
            {"bAreSongChallengesEnabled", 0x79, "BoolProperty"},
        }};
    };

    struct PilgrimCoreUIGlobals
    {
        static constexpr std::string_view Name = "PilgrimCoreUIGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimCurrentlyPlayingSongVM
    {
        static constexpr std::string_view Name = "PilgrimCurrentlyPlayingSongVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SongMetadata = 0x90;
            static constexpr std::uintptr_t SongTimeSeconds = 0x98;
            static constexpr std::uintptr_t SongTimeMs = 0x9C;
            static constexpr std::uintptr_t SongUnitProgress = 0xA0;
            static constexpr std::uintptr_t SectionStartMs = 0xA4;
            static constexpr std::uintptr_t SectionLengthMs = 0xA8;
            static constexpr std::uintptr_t CurrentBeatNumber = 0xAC;
            static constexpr std::uintptr_t CurrentBeatInBar = 0xB0;
            static constexpr std::uintptr_t SongPlaying = 0xB4;
            static constexpr std::uintptr_t MusicBattleInstance = 0xB8;
            static constexpr std::uintptr_t MusicClockComponent = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SongMetadata", 0x90, "ObjectProperty"},
            {"SongTimeSeconds", 0x98, "IntProperty"},
            {"SongTimeMs", 0x9C, "FloatProperty"},
            {"SongUnitProgress", 0xA0, "FloatProperty"},
            {"SectionStartMs", 0xA4, "FloatProperty"},
            {"SectionLengthMs", 0xA8, "FloatProperty"},
            {"CurrentBeatNumber", 0xAC, "IntProperty"},
            {"CurrentBeatInBar", 0xB0, "IntProperty"},
            {"SongPlaying", 0xB4, "BoolProperty"},
            {"MusicBattleInstance", 0xB8, "ObjectProperty"},
            {"MusicClockComponent", 0xC0, "ObjectProperty"},
        }};
    };

    struct PilgrimDifficultyVM
    {
        static constexpr std::string_view Name = "PilgrimDifficultyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t NewSongDifficulty = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NewSongDifficulty", 0x90, "EnumProperty"},
        }};
    };

    struct PilgrimEventDrivenVM
    {
        static constexpr std::string_view Name = "PilgrimEventDrivenVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t WaitForEventRouterAction = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WaitForEventRouterAction", 0x88, "ObjectProperty"},
        }};
    };

    struct PilgrimFTUEControllerComponent
    {
        static constexpr std::string_view Name = "PilgrimFTUEControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PilgrimUserSettings = 0xC0;
            static constexpr std::uintptr_t WaitForGlobalEventRouter = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PilgrimUserSettings", 0xC0, "ObjectProperty"},
            {"WaitForGlobalEventRouter", 0xD0, "ObjectProperty"},
        }};
    };

    struct PilgrimFTUEWidgetBase
    {
        static constexpr std::string_view Name = "PilgrimFTUEWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ApprovedPlaylistTags = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ApprovedPlaylistTags", 0x4A0, "StructProperty"},
        }};
    };

    struct PilgrimFixedOwnerWidget
    {
        static constexpr std::string_view Name = "PilgrimFixedOwnerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t FixedOwner = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FixedOwner", 0x308, "ObjectProperty"},
        }};
    };

    struct PilgrimGameFeatureAction_SplitscreenConfig
    {
        static constexpr std::string_view Name = "PilgrimGameFeatureAction_SplitscreenConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PreferredLetoDisplayMode = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreferredLetoDisplayMode", 0x28, "OptionalProperty"},
        }};
    };

    struct PilgrimGameWidgetBase
    {
        static constexpr std::string_view Name = "PilgrimGameWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bReceiveScoreEventsWhenHidden = 0x308;
            static constexpr std::uintptr_t GameplayEventHandles = 0x310;
            static constexpr std::uintptr_t MusicBattleInstance = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bReceiveScoreEventsWhenHidden", 0x308, "BoolProperty"},
            {"GameplayEventHandles", 0x310, "ArrayProperty"},
            {"MusicBattleInstance", 0x320, "ObjectProperty"},
        }};
    };

    struct PilgrimGemBreakVM
    {
        static constexpr std::string_view Name = "PilgrimGemBreakVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInGemBreak = 0x90;
            static constexpr std::uintptr_t bIsInStartingGemBreak = 0x91;
            static constexpr std::uintptr_t bIsInEndingGemBreak = 0x92;
            static constexpr std::uintptr_t bIsGemBreakPending = 0x93;
            static constexpr std::uintptr_t bIsGemBreakEndPending = 0x94;
            static constexpr std::uintptr_t bIsCountingDown = 0x95;
            static constexpr std::uintptr_t BarsRemaining = 0x98;
            static constexpr std::uintptr_t Tempo = 0x9C;
            static constexpr std::uintptr_t FadeOutSpeed = 0xA0;
            static constexpr std::uintptr_t CurrentBreakEndingBar = 0xA4;
            static constexpr std::uintptr_t BarsToEndEarly = 0xA8;
            static constexpr std::uintptr_t MusicClock = 0xB0;
            static constexpr std::uintptr_t MusicBattleInstance = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"bIsInGemBreak", 0x90, "BoolProperty"},
            {"bIsInStartingGemBreak", 0x91, "BoolProperty"},
            {"bIsInEndingGemBreak", 0x92, "BoolProperty"},
            {"bIsGemBreakPending", 0x93, "BoolProperty"},
            {"bIsGemBreakEndPending", 0x94, "BoolProperty"},
            {"bIsCountingDown", 0x95, "BoolProperty"},
            {"BarsRemaining", 0x98, "IntProperty"},
            {"Tempo", 0x9C, "FloatProperty"},
            {"FadeOutSpeed", 0xA0, "FloatProperty"},
            {"CurrentBreakEndingBar", 0xA4, "IntProperty"},
            {"BarsToEndEarly", 0xA8, "IntProperty"},
            {"MusicClock", 0xB0, "WeakObjectProperty"},
            {"MusicBattleInstance", 0xB8, "WeakObjectProperty"},
        }};
    };

    struct PilgrimHamSandwichVM
    {
        static constexpr std::string_view Name = "PilgrimHamSandwichVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t IsHamSandwichView = 0x90;
            static constexpr std::uintptr_t bIsPlayingSolo = 0x91;
            static constexpr std::uintptr_t LocalPlayers = 0x98;
            static constexpr std::uintptr_t RemotePlayers = 0xA8;
            static constexpr std::uintptr_t AllPlayers = 0xB8;
            static constexpr std::uintptr_t MultiplayerState = 0xC8;
            static constexpr std::uintptr_t RootPilgrimPlayerManager = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"IsHamSandwichView", 0x90, "BoolProperty"},
            {"bIsPlayingSolo", 0x91, "BoolProperty"},
            {"LocalPlayers", 0x98, "ArrayProperty"},
            {"RemotePlayers", 0xA8, "ArrayProperty"},
            {"AllPlayers", 0xB8, "ArrayProperty"},
            {"MultiplayerState", 0xC8, "EnumProperty"},
            {"RootPilgrimPlayerManager", 0xD0, "ObjectProperty"},
        }};
    };

    struct PilgrimInstrumentVM
    {
        static constexpr std::string_view Name = "PilgrimInstrumentVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentForNextSong = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstrumentForNextSong", 0x90, "EnumProperty"},
        }};
    };

    struct PilgrimLocalSocialUserVM
    {
        static constexpr std::string_view Name = "PilgrimLocalSocialUserVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBandLeader = 0x78;
            static constexpr std::uintptr_t AvatarInfo = 0x80;
            static constexpr std::uintptr_t BannerInfo = 0x88;
            static constexpr std::uintptr_t NameInfo = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsBandLeader", 0x78, "BoolProperty"},
            {"AvatarInfo", 0x80, "ObjectProperty"},
            {"BannerInfo", 0x88, "ObjectProperty"},
            {"NameInfo", 0x90, "ObjectProperty"},
        }};
    };

    struct PilgrimPerUserForBlueprintVM
    {
        static constexpr std::string_view Name = "PilgrimPerUserForBlueprintVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimPlayerIdentityAvatarIcon
    {
        static constexpr std::string_view Name = "PilgrimPlayerIdentityAvatarIcon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSocialAvatarIcon";
        struct Offsets
        {
            static constexpr std::uintptr_t AvatarMaterial = 0x4C0;
            static constexpr std::uintptr_t InitialIconBrushResource = 0x4C8;
            static constexpr std::uintptr_t SocialUser = 0x4D0;
            static constexpr std::uintptr_t AvatarTexture = 0x4D8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AvatarMaterial", 0x4C0, "ObjectProperty"},
            {"InitialIconBrushResource", 0x4C8, "ObjectProperty"},
            {"SocialUser", 0x4D0, "WeakObjectProperty"},
            {"AvatarTexture", 0x4D8, "ObjectProperty"},
        }};
    };

    struct PilgrimPlayerInfoVM
    {
        static constexpr std::string_view Name = "PilgrimPlayerInfoVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerInfo = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerInfo", 0x68, "StructProperty"},
        }};
    };

    struct PilgrimPlayerInfoWidgetBase
    {
        static constexpr std::string_view Name = "PilgrimPlayerInfoWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimFixedOwnerWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t FixedOwner = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FixedOwner", 0x308, "ObjectProperty"},
        }};
    };

    struct PilgrimPlayerInputDeviceVM
    {
        static constexpr std::string_view Name = "PilgrimPlayerInputDeviceVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasConnectedInputDevice = 0x88;
            static constexpr std::uintptr_t bIsPeripheralDeviceConnected_AnyUser = 0x89;
            static constexpr std::uintptr_t bIsPeripheralDeviceConnected_OwningUser = 0x8A;
            static constexpr std::uintptr_t bIsCurrentDevicePeripheral_OwningUser = 0x8B;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bHasConnectedInputDevice", 0x88, "BoolProperty"},
            {"bIsPeripheralDeviceConnected_AnyUser", 0x89, "BoolProperty"},
            {"bIsPeripheralDeviceConnected_OwningUser", 0x8A, "BoolProperty"},
            {"bIsCurrentDevicePeripheral_OwningUser", 0x8B, "BoolProperty"},
        }};
    };

    struct PilgrimPlayerScoreVM
    {
        static constexpr std::string_view Name = "PilgrimPlayerScoreVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerScore = 0x78;
            static constexpr std::uintptr_t StreakScoreMultiplier = 0x7C;
            static constexpr std::uintptr_t StreakScoreMaxMultiplier = 0x80;
            static constexpr std::uintptr_t StreakMeterFillProgress = 0x84;
            static constexpr std::uintptr_t CurrentOverdrive = 0x88;
            static constexpr std::uintptr_t bOverdriveActive = 0x8C;
            static constexpr std::uintptr_t TrackType = 0x8D;
            static constexpr std::uintptr_t bHasFullCombo = 0x8E;
            static constexpr std::uintptr_t bHasPerfectCombo = 0x8F;
            static constexpr std::uintptr_t NotesPastLastMultiplier = 0x90;
            static constexpr std::uintptr_t NotesToNextMultiplier = 0x94;
            static constexpr std::uintptr_t bIsAtMaxStreak = 0x98;
            static constexpr std::uintptr_t CurrentStar = 0x9C;
            static constexpr std::uintptr_t NoteStreak = 0xA0;
            static constexpr std::uintptr_t CurrentSectionCompletionPercentage = 0xA4;
            static constexpr std::uintptr_t MusicBattleInstance = 0xC0;
            static constexpr std::uintptr_t OwningPlayerState = 0x120;
            static constexpr std::uintptr_t PilgrimGame = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"PlayerScore", 0x78, "FloatProperty"},
            {"StreakScoreMultiplier", 0x7C, "IntProperty"},
            {"StreakScoreMaxMultiplier", 0x80, "IntProperty"},
            {"StreakMeterFillProgress", 0x84, "FloatProperty"},
            {"CurrentOverdrive", 0x88, "FloatProperty"},
            {"bOverdriveActive", 0x8C, "BoolProperty"},
            {"TrackType", 0x8D, "EnumProperty"},
            {"bHasFullCombo", 0x8E, "BoolProperty"},
            {"bHasPerfectCombo", 0x8F, "BoolProperty"},
            {"NotesPastLastMultiplier", 0x90, "IntProperty"},
            {"NotesToNextMultiplier", 0x94, "IntProperty"},
            {"bIsAtMaxStreak", 0x98, "BoolProperty"},
            {"CurrentStar", 0x9C, "IntProperty"},
            {"NoteStreak", 0xA0, "IntProperty"},
            {"CurrentSectionCompletionPercentage", 0xA4, "FloatProperty"},
            {"MusicBattleInstance", 0xC0, "ObjectProperty"},
            {"OwningPlayerState", 0x120, "ObjectProperty"},
            {"PilgrimGame", 0x128, "WeakObjectProperty"},
        }};
    };

    struct PilgrimPlayerXpTrackerVM
    {
        static constexpr std::string_view Name = "PilgrimPlayerXpTrackerVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentLevel = 0x78;
            static constexpr std::uintptr_t CurrentXP = 0x7C;
            static constexpr std::uintptr_t MaxXpForLevel = 0x80;
            static constexpr std::uintptr_t XpToNextLevel = 0x84;
            static constexpr std::uintptr_t TotalXpEarned = 0x88;
            static constexpr std::uintptr_t AnimCurrentXpBarProgress = 0x8C;
            static constexpr std::uintptr_t AnimXpBarPercent = 0x90;
            static constexpr std::uintptr_t AnimCurrentXpEarnedProgress = 0x94;
            static constexpr std::uintptr_t AnimCurrentLvl = 0x98;
            static constexpr std::uintptr_t bIsAnimPaused = 0x9C;
            static constexpr std::uintptr_t bIsAnimFinished = 0x9D;
            static constexpr std::uintptr_t MaxXpAnimTime = 0xAC;
            static constexpr std::uintptr_t XpAnimLvlUpPauseTime = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"CurrentLevel", 0x78, "IntProperty"},
            {"CurrentXP", 0x7C, "IntProperty"},
            {"MaxXpForLevel", 0x80, "IntProperty"},
            {"XpToNextLevel", 0x84, "IntProperty"},
            {"TotalXpEarned", 0x88, "IntProperty"},
            {"AnimCurrentXpBarProgress", 0x8C, "IntProperty"},
            {"AnimXpBarPercent", 0x90, "FloatProperty"},
            {"AnimCurrentXpEarnedProgress", 0x94, "IntProperty"},
            {"AnimCurrentLvl", 0x98, "IntProperty"},
            {"bIsAnimPaused", 0x9C, "BoolProperty"},
            {"bIsAnimFinished", 0x9D, "BoolProperty"},
            {"MaxXpAnimTime", 0xAC, "FloatProperty"},
            {"XpAnimLvlUpPauseTime", 0xB0, "FloatProperty"},
        }};
    };

    struct PilgrimPostGameProgressWidget
    {
        static constexpr std::string_view Name = "PilgrimPostGameProgressWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSeasonDataWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentProgress = 0x4A0;
            static constexpr std::uintptr_t CurrentXP = 0x4A4;
            static constexpr std::uintptr_t XpToNextLevel = 0x4A8;
            static constexpr std::uintptr_t CurrentLevel = 0x4AC;
            static constexpr std::uintptr_t LevelRewards = 0x4B0;
            static constexpr std::uintptr_t SocialAvatarIcon = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CurrentProgress", 0x4A0, "FloatProperty"},
            {"CurrentXP", 0x4A4, "IntProperty"},
            {"XpToNextLevel", 0x4A8, "IntProperty"},
            {"CurrentLevel", 0x4AC, "IntProperty"},
            {"LevelRewards", 0x4B0, "ObjectProperty"},
            {"SocialAvatarIcon", 0x4B8, "ObjectProperty"},
        }};
    };

    struct PilgrimPreviewingSongChallengeVM
    {
        static constexpr std::string_view Name = "PilgrimPreviewingSongChallengeVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongChallengeBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t WaitForEventRouterAction = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WaitForEventRouterAction", 0xB8, "ObjectProperty"},
        }};
    };

    struct PilgrimRankedVM
    {
        static constexpr std::string_view Name = "PilgrimRankedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsPlayerRanked = 0x68;
            static constexpr std::uintptr_t CurrentRank = 0x6C;
            static constexpr std::uintptr_t CurrentProgress = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsPlayerRanked", 0x68, "BoolProperty"},
            {"CurrentRank", 0x6C, "IntProperty"},
            {"CurrentProgress", 0x70, "FloatProperty"},
        }};
    };

    struct PilgrimSongCatalogItemArtistSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemArtistSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DEBUG_ItemSortName = 0x80;
            static constexpr std::uintptr_t bSortForwards = 0x90;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DEBUG_ItemSortName", 0x80, "StrProperty"},
            {"bSortForwards", 0x90, "BoolProperty"},
            {"CategoryGroupCollections", 0x98, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemChainedSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemChainedSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bSetChainedCalled = 0x110;
            static constexpr std::uintptr_t FirstSort = 0x118;
            static constexpr std::uintptr_t SecondSort = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bSetChainedCalled", 0x110, "BoolProperty"},
            {"FirstSort", 0x118, "ObjectProperty"},
            {"SecondSort", 0x120, "ObjectProperty"},
        }};
    };

    struct PilgrimSongCatalogItemDetailsVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemDetailsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongItemDetailsVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsAddedToSetlist = 0x250;
            static constexpr std::uintptr_t bIsSongAvailable = 0x250;
            static constexpr std::uintptr_t SanitizedTitle = 0x258;
            static constexpr std::uintptr_t SanitizedArtist = 0x268;
            static constexpr std::uintptr_t SongLengthInSec = 0x278;
            static constexpr std::uintptr_t SongDuration = 0x280;
            static constexpr std::uintptr_t SongIntensity = 0x288;
            static constexpr std::uintptr_t SongShortName = 0x28C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsAddedToSetlist", 0x250, "BoolProperty"},
            {"bIsSongAvailable", 0x250, "BoolProperty"},
            {"SanitizedTitle", 0x258, "StrProperty"},
            {"SanitizedArtist", 0x268, "StrProperty"},
            {"SongLengthInSec", 0x278, "IntProperty"},
            {"SongDuration", 0x280, "StructProperty"},
            {"SongIntensity", 0x288, "IntProperty"},
            {"SongShortName", 0x28C, "NameProperty"},
        }};
    };

    struct PilgrimSongCatalogItemFeaturedSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemFeaturedSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DEBUG_ItemSortName = 0x80;
            static constexpr std::uintptr_t bSortForwards = 0x90;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DEBUG_ItemSortName", 0x80, "StrProperty"},
            {"bSortForwards", 0x90, "BoolProperty"},
            {"CategoryGroupCollections", 0x98, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemFilterAvailableOnlyVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemFilterAvailableOnlyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemFilterVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemFilterVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortFilterItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemNewSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemNewSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DEBUG_ItemSortName = 0x80;
            static constexpr std::uintptr_t bSortForwards = 0x90;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DEBUG_ItemSortName", 0x80, "StrProperty"},
            {"bSortForwards", 0x90, "BoolProperty"},
            {"CategoryGroupCollections", 0x98, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemOwnedSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemOwnedSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DEBUG_ItemSortName = 0x80;
            static constexpr std::uintptr_t bSortForwards = 0x90;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DEBUG_ItemSortName", 0x80, "StrProperty"},
            {"bSortForwards", 0x90, "BoolProperty"},
            {"CategoryGroupCollections", 0x98, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemReverseAlternateSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemReverseAlternateSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bSetReverseAlternateCalled = 0x110;
            static constexpr std::uintptr_t FirstSort = 0x118;
            static constexpr std::uintptr_t SecondSort = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bSetReverseAlternateCalled", 0x110, "BoolProperty"},
            {"FirstSort", 0x118, "ObjectProperty"},
            {"SecondSort", 0x120, "ObjectProperty"},
        }};
    };

    struct PilgrimSongCatalogItemRotationSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemRotationSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DEBUG_ItemSortName = 0x80;
            static constexpr std::uintptr_t bSortForwards = 0x90;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DEBUG_ItemSortName", 0x80, "StrProperty"},
            {"bSortForwards", 0x90, "BoolProperty"},
            {"CategoryGroupCollections", 0x98, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSearchTextVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSearchTextVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSortFilterSearchTextVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchText = 0x68;
            static constexpr std::uintptr_t StringSuggestions = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SearchText", 0x68, "TextProperty"},
            {"StringSuggestions", 0x78, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterAllAvailableVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterAllAvailableVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterAvailableOnlyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterFavoriteOnlyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterFeaturedOnlyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterNewOnlyVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterNewOnlyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterOwnedOnlyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterSharedOnlyVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterSharedOnlyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterShowScoreByItemVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterShowScoreByItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t IsAllTimeHighscore = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IsAllTimeHighscore", 0xC0, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterSortOrderItemVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterSortOrderItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t IsDefaultSortOrder = 0xC0;
            static constexpr std::uintptr_t SortOrderTextByFilterMap = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IsDefaultSortOrder", 0xC0, "BoolProperty"},
            {"SortOrderTextByFilterMap", 0xC8, "MapProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterSpotlightOnlyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterUnarchivedOnlyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSecondaryFilterVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSecondaryFilterVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongFilterOptionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSelectionVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSelectionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingCategoryPreviewDelay = 0x78;
            static constexpr std::uintptr_t PendingItemPreviewDelay = 0x7C;
            static constexpr std::uintptr_t SelectedCategoryGroup = 0x80;
            static constexpr std::uintptr_t HoveredCategory = 0x88;
            static constexpr std::uintptr_t HoveredItem = 0x90;
            static constexpr std::uintptr_t SelectedCategory = 0x98;
            static constexpr std::uintptr_t SelectedItem = 0xA0;
            static constexpr std::uintptr_t bPreviewCategoryOnHover = 0xA8;
            static constexpr std::uintptr_t bPreviewItemOnHover = 0xA9;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PendingCategoryPreviewDelay", 0x78, "FloatProperty"},
            {"PendingItemPreviewDelay", 0x7C, "FloatProperty"},
            {"SelectedCategoryGroup", 0x80, "ObjectProperty"},
            {"HoveredCategory", 0x88, "ObjectProperty"},
            {"HoveredItem", 0x90, "ObjectProperty"},
            {"SelectedCategory", 0x98, "ObjectProperty"},
            {"SelectedItem", 0xA0, "ObjectProperty"},
            {"bPreviewCategoryOnHover", 0xA8, "BoolProperty"},
            {"bPreviewItemOnHover", 0xA9, "BoolProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSongIntensitySortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSongIntensitySortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DEBUG_ItemSortName = 0x80;
            static constexpr std::uintptr_t bSortForwards = 0x90;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DEBUG_ItemSortName", 0x80, "StrProperty"},
            {"bSortForwards", 0x90, "BoolProperty"},
            {"CategoryGroupCollections", 0x98, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSongLengthSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSongLengthSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DEBUG_ItemSortName = 0x80;
            static constexpr std::uintptr_t bSortForwards = 0x90;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DEBUG_ItemSortName", 0x80, "StrProperty"},
            {"bSortForwards", 0x90, "BoolProperty"},
            {"CategoryGroupCollections", 0x98, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSortItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DEBUG_ItemSortName = 0x80;
            static constexpr std::uintptr_t bSortForwards = 0x90;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DEBUG_ItemSortName", 0x80, "StrProperty"},
            {"bSortForwards", 0x90, "BoolProperty"},
            {"CategoryGroupCollections", 0x98, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemSpotlightSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemSpotlightSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DEBUG_ItemSortName = 0x80;
            static constexpr std::uintptr_t bSortForwards = 0x90;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DEBUG_ItemSortName", 0x80, "StrProperty"},
            {"bSortForwards", 0x90, "BoolProperty"},
            {"CategoryGroupCollections", 0x98, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemTitleSortVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemTitleSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogItemSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DEBUG_ItemSortName = 0x80;
            static constexpr std::uintptr_t bSortForwards = 0x90;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DEBUG_ItemSortName", 0x80, "StrProperty"},
            {"bSortForwards", 0x90, "BoolProperty"},
            {"CategoryGroupCollections", 0x98, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCatalogItemVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDetailsAsPilgrimSongCatalogItemDetailsVM = 0xF0;
            static constexpr std::uintptr_t CategoryGroupVM = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemDetailsAsPilgrimSongCatalogItemDetailsVM", 0xF0, "ObjectProperty"},
            {"CategoryGroupVM", 0xF8, "ObjectProperty"},
        }};
    };

    struct PilgrimSongCatalogSecondaryFilterAdditiveSelection
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogSecondaryFilterAdditiveSelection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogSecondaryFilterSelection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimSongCatalogSecondaryFilterSelection
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogSecondaryFilterSelection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimSongCatalogSecondaryFilterSingleSelection
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogSecondaryFilterSingleSelection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCatalogSecondaryFilterSelection";
        struct Offsets
        {
            static constexpr std::uintptr_t AllAvailableFilter = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllAvailableFilter", 0x28, "ObjectProperty"},
        }};
    };

    struct PilgrimSongCatalogVM
    {
        static constexpr std::string_view Name = "PilgrimSongCatalogVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SortFilter = 0x78;
            static constexpr std::uintptr_t SecondaryFilters = 0x80;
            static constexpr std::uintptr_t SecondaryFilterSelection = 0x90;
            static constexpr std::uintptr_t FilteredItems = 0xA0;
            static constexpr std::uintptr_t FilteredCategoryItems = 0xB0;
            static constexpr std::uintptr_t HighlightedItems = 0xC0;
            static constexpr std::uintptr_t PooledItems = 0xD0;
            static constexpr std::uintptr_t PooledItemsByShortName = 0xE0;
            static constexpr std::uintptr_t SetupSorts = 0xF8;
            static constexpr std::uintptr_t SetupCollections = 0x108;
            static constexpr std::uintptr_t CategoryGroupCollections = 0x118;
            static constexpr std::uintptr_t ShowScoreByItems = 0x128;
            static constexpr std::uintptr_t ActiveShowScoreByItem = 0x138;
            static constexpr std::uintptr_t SortOrderItems = 0x140;
            static constexpr std::uintptr_t ActiveSortOrderItem = 0x150;
            static constexpr std::uintptr_t HighlightedItemSort = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"SortFilter", 0x78, "ObjectProperty"},
            {"SecondaryFilters", 0x80, "ArrayProperty"},
            {"SecondaryFilterSelection", 0x90, "ObjectProperty"},
            {"FilteredItems", 0xA0, "ArrayProperty"},
            {"FilteredCategoryItems", 0xB0, "ArrayProperty"},
            {"HighlightedItems", 0xC0, "ArrayProperty"},
            {"PooledItems", 0xD0, "ArrayProperty"},
            {"PooledItemsByShortName", 0xE0, "MapProperty"},
            {"SetupSorts", 0xF8, "ArrayProperty"},
            {"SetupCollections", 0x108, "ArrayProperty"},
            {"CategoryGroupCollections", 0x118, "ArrayProperty"},
            {"ShowScoreByItems", 0x128, "ArrayProperty"},
            {"ActiveShowScoreByItem", 0x138, "ObjectProperty"},
            {"SortOrderItems", 0x140, "ArrayProperty"},
            {"ActiveSortOrderItem", 0x150, "ObjectProperty"},
            {"HighlightedItemSort", 0x158, "ObjectProperty"},
        }};
    };

    struct PilgrimSongCategoryGroupCollectionVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroupCollectionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongLockerCategoryGroupCollectionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xB0;
            static constexpr std::uintptr_t CollectionText = 0xB8;
            static constexpr std::uintptr_t bIsRefreshing = 0xC8;
            static constexpr std::uintptr_t bIsReverse = 0xC8;
            static constexpr std::uintptr_t ReverseCategoryGroups = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsTitle", 0xB0, "BoolProperty"},
            {"CollectionText", 0xB8, "TextProperty"},
            {"bIsRefreshing", 0xC8, "BoolProperty"},
            {"bIsReverse", 0xC8, "BoolProperty"},
            {"ReverseCategoryGroups", 0xD0, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCategoryGroupCollection_FeaturedVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroupCollection_FeaturedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupCollectionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xB0;
            static constexpr std::uintptr_t CollectionText = 0xB8;
            static constexpr std::uintptr_t bIsRefreshing = 0xC8;
            static constexpr std::uintptr_t bIsReverse = 0xC8;
            static constexpr std::uintptr_t ReverseCategoryGroups = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsTitle", 0xB0, "BoolProperty"},
            {"CollectionText", 0xB8, "TextProperty"},
            {"bIsRefreshing", 0xC8, "BoolProperty"},
            {"bIsReverse", 0xC8, "BoolProperty"},
            {"ReverseCategoryGroups", 0xD0, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCategoryGroupCollection_HighlightedVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroupCollection_HighlightedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupCollectionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xB0;
            static constexpr std::uintptr_t CollectionText = 0xB8;
            static constexpr std::uintptr_t bIsRefreshing = 0xC8;
            static constexpr std::uintptr_t bIsReverse = 0xC8;
            static constexpr std::uintptr_t ReverseCategoryGroups = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsTitle", 0xB0, "BoolProperty"},
            {"CollectionText", 0xB8, "TextProperty"},
            {"bIsRefreshing", 0xC8, "BoolProperty"},
            {"bIsReverse", 0xC8, "BoolProperty"},
            {"ReverseCategoryGroups", 0xD0, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCategoryGroupCollection_LettersVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroupCollection_LettersVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupCollectionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xB0;
            static constexpr std::uintptr_t CollectionText = 0xB8;
            static constexpr std::uintptr_t bIsRefreshing = 0xC8;
            static constexpr std::uintptr_t bIsReverse = 0xC8;
            static constexpr std::uintptr_t ReverseCategoryGroups = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsTitle", 0xB0, "BoolProperty"},
            {"CollectionText", 0xB8, "TextProperty"},
            {"bIsRefreshing", 0xC8, "BoolProperty"},
            {"bIsReverse", 0xC8, "BoolProperty"},
            {"ReverseCategoryGroups", 0xD0, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCategoryGroupCollection_NewVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroupCollection_NewVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupCollectionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xB0;
            static constexpr std::uintptr_t CollectionText = 0xB8;
            static constexpr std::uintptr_t bIsRefreshing = 0xC8;
            static constexpr std::uintptr_t bIsReverse = 0xC8;
            static constexpr std::uintptr_t ReverseCategoryGroups = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsTitle", 0xB0, "BoolProperty"},
            {"CollectionText", 0xB8, "TextProperty"},
            {"bIsRefreshing", 0xC8, "BoolProperty"},
            {"bIsReverse", 0xC8, "BoolProperty"},
            {"ReverseCategoryGroups", 0xD0, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCategoryGroupCollection_OwnedVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroupCollection_OwnedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupCollection_LettersVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xB0;
            static constexpr std::uintptr_t CollectionText = 0xB8;
            static constexpr std::uintptr_t bIsRefreshing = 0xC8;
            static constexpr std::uintptr_t bIsReverse = 0xC8;
            static constexpr std::uintptr_t ReverseCategoryGroups = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsTitle", 0xB0, "BoolProperty"},
            {"CollectionText", 0xB8, "TextProperty"},
            {"bIsRefreshing", 0xC8, "BoolProperty"},
            {"bIsReverse", 0xC8, "BoolProperty"},
            {"ReverseCategoryGroups", 0xD0, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCategoryGroupCollection_SongIntensityVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroupCollection_SongIntensityVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupCollectionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xB0;
            static constexpr std::uintptr_t CollectionText = 0xB8;
            static constexpr std::uintptr_t bIsRefreshing = 0xC8;
            static constexpr std::uintptr_t bIsReverse = 0xC8;
            static constexpr std::uintptr_t ReverseCategoryGroups = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsTitle", 0xB0, "BoolProperty"},
            {"CollectionText", 0xB8, "TextProperty"},
            {"bIsRefreshing", 0xC8, "BoolProperty"},
            {"bIsReverse", 0xC8, "BoolProperty"},
            {"ReverseCategoryGroups", 0xD0, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCategoryGroupCollection_SongLengthVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroupCollection_SongLengthVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupCollectionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xB0;
            static constexpr std::uintptr_t CollectionText = 0xB8;
            static constexpr std::uintptr_t bIsRefreshing = 0xC8;
            static constexpr std::uintptr_t bIsReverse = 0xC8;
            static constexpr std::uintptr_t ReverseCategoryGroups = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsTitle", 0xB0, "BoolProperty"},
            {"CollectionText", 0xB8, "TextProperty"},
            {"bIsRefreshing", 0xC8, "BoolProperty"},
            {"bIsReverse", 0xC8, "BoolProperty"},
            {"ReverseCategoryGroups", 0xD0, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCategoryGroupCollection_SpotlightVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroupCollection_SpotlightVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupCollectionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xB0;
            static constexpr std::uintptr_t CollectionText = 0xB8;
            static constexpr std::uintptr_t bIsRefreshing = 0xC8;
            static constexpr std::uintptr_t bIsReverse = 0xC8;
            static constexpr std::uintptr_t ReverseCategoryGroups = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsTitle", 0xB0, "BoolProperty"},
            {"CollectionText", 0xB8, "TextProperty"},
            {"bIsRefreshing", 0xC8, "BoolProperty"},
            {"bIsReverse", 0xC8, "BoolProperty"},
            {"ReverseCategoryGroups", 0xD0, "ArrayProperty"},
        }};
    };

    struct PilgrimSongCategoryGroupVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroupVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLockerCategoryGroupVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xE8;
            static constexpr std::uintptr_t CategoryText = 0xF0;
            static constexpr std::uintptr_t bIsRefreshing = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsTitle", 0xE8, "BoolProperty"},
            {"CategoryText", 0xF0, "TextProperty"},
            {"bIsRefreshing", 0x100, "BoolProperty"},
        }};
    };

    struct PilgrimSongCategoryGroup_FeaturedVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroup_FeaturedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xE8;
            static constexpr std::uintptr_t CategoryText = 0xF0;
            static constexpr std::uintptr_t bIsRefreshing = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsTitle", 0xE8, "BoolProperty"},
            {"CategoryText", 0xF0, "TextProperty"},
            {"bIsRefreshing", 0x100, "BoolProperty"},
        }};
    };

    struct PilgrimSongCategoryGroup_HighlightedVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroup_HighlightedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xE8;
            static constexpr std::uintptr_t CategoryText = 0xF0;
            static constexpr std::uintptr_t bIsRefreshing = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsTitle", 0xE8, "BoolProperty"},
            {"CategoryText", 0xF0, "TextProperty"},
            {"bIsRefreshing", 0x100, "BoolProperty"},
        }};
    };

    struct PilgrimSongCategoryGroup_LettersVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroup_LettersVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupVM";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryLetters = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CategoryLetters", 0x108, "StrProperty"},
        }};
    };

    struct PilgrimSongCategoryGroup_NewVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroup_NewVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xE8;
            static constexpr std::uintptr_t CategoryText = 0xF0;
            static constexpr std::uintptr_t bIsRefreshing = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsTitle", 0xE8, "BoolProperty"},
            {"CategoryText", 0xF0, "TextProperty"},
            {"bIsRefreshing", 0x100, "BoolProperty"},
        }};
    };

    struct PilgrimSongCategoryGroup_OwnedVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroup_OwnedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroup_LettersVM";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryLetters = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CategoryLetters", 0x108, "StrProperty"},
        }};
    };

    struct PilgrimSongCategoryGroup_SongIntensityVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroup_SongIntensityVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupVM";
        struct Offsets
        {
            static constexpr std::uintptr_t BarIntensity = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BarIntensity", 0x108, "IntProperty"},
        }};
    };

    struct PilgrimSongCategoryGroup_SongLengthVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroup_SongLengthVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupVM";
        struct Offsets
        {
            static constexpr std::uintptr_t MinMaxLengthInSec = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MinMaxLengthInSec", 0x108, "StructProperty"},
        }};
    };

    struct PilgrimSongCategoryGroup_SpotlightVM
    {
        static constexpr std::string_view Name = "PilgrimSongCategoryGroup_SpotlightVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongCategoryGroupVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitle = 0xE8;
            static constexpr std::uintptr_t CategoryText = 0xF0;
            static constexpr std::uintptr_t bIsRefreshing = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsTitle", 0xE8, "BoolProperty"},
            {"CategoryText", 0xF0, "TextProperty"},
            {"bIsRefreshing", 0x100, "BoolProperty"},
        }};
    };

    struct PilgrimSongChallengeBaseVM
    {
        static constexpr std::string_view Name = "PilgrimSongChallengeBaseVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t LookupState = 0x78;
            static constexpr std::uintptr_t ProgressionState = 0x79;
            static constexpr std::uintptr_t FoundChallengeType = 0x7A;
            static constexpr std::uintptr_t ChallengeData = 0x80;
            static constexpr std::uintptr_t SongShortName = 0x88;
            static constexpr std::uintptr_t Instrument = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LookupState", 0x78, "EnumProperty"},
            {"ProgressionState", 0x79, "EnumProperty"},
            {"FoundChallengeType", 0x7A, "EnumProperty"},
            {"ChallengeData", 0x80, "ObjectProperty"},
            {"SongShortName", 0x88, "NameProperty"},
            {"Instrument", 0x8C, "EnumProperty"},
        }};
    };

    struct PilgrimSongChallengeDataBaseVM
    {
        static constexpr std::string_view Name = "PilgrimSongChallengeDataBaseVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimSongChallengeHighScoreDataVM
    {
        static constexpr std::string_view Name = "PilgrimSongChallengeHighScoreDataVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongChallengeDataBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerHighScore = 0x78;
            static constexpr std::uintptr_t PlayerRank = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerHighScore", 0x78, "IntProperty"},
            {"PlayerRank", 0x7C, "IntProperty"},
        }};
    };

    struct PilgrimSongChallengeQuestDataVM
    {
        static constexpr std::string_view Name = "PilgrimSongChallengeQuestDataVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongChallengeDataBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestVM = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestVM", 0x78, "ObjectProperty"},
        }};
    };

    struct PilgrimSongChallengeRivalDataVM
    {
        static constexpr std::string_view Name = "PilgrimSongChallengeRivalDataVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimSongChallengeDataBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t RivalDisplayName = 0x78;
            static constexpr std::uintptr_t RivalScore = 0x88;
            static constexpr std::uintptr_t RivalRank = 0x8C;
            static constexpr std::uintptr_t RivalFriendRank = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RivalDisplayName", 0x78, "StrProperty"},
            {"RivalScore", 0x88, "IntProperty"},
            {"RivalRank", 0x8C, "IntProperty"},
            {"RivalFriendRank", 0x90, "IntProperty"},
        }};
    };

    struct PilgrimSuggestedSongVM
    {
        static constexpr std::string_view Name = "PilgrimSuggestedSongVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t AllSongs = 0x78;
            static constexpr std::uintptr_t NewSongSelectionVM = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllSongs", 0x78, "ArrayProperty"},
            {"NewSongSelectionVM", 0x88, "ObjectProperty"},
        }};
    };

    struct PilgrimTrackUI
    {
        static constexpr std::string_view Name = "PilgrimTrackUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Overlay";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetClassesToTransform = 0x1A8;
            static constexpr std::uintptr_t InheritedWidgetClassesToTransform = 0x1B8;
            static constexpr std::uintptr_t PilgrimTrackCapture = 0x1F0;
            static constexpr std::uintptr_t TrackAndGameManager = 0x1F8;
            static constexpr std::uintptr_t TrackIndex = 0x200;
            static constexpr std::uintptr_t TrackPlaneOffset = 0x204;
            static constexpr std::uintptr_t SlateTransformMode = 0x20C;
            static constexpr std::uintptr_t bInheritWidgetClassesToTransform = 0x20E;
            static constexpr std::uintptr_t bInheritTrackPlaneOffset = 0x20F;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"WidgetClassesToTransform", 0x1A8, "ArrayProperty"},
            {"InheritedWidgetClassesToTransform", 0x1B8, "ArrayProperty"},
            {"PilgrimTrackCapture", 0x1F0, "ObjectProperty"},
            {"TrackAndGameManager", 0x1F8, "ObjectProperty"},
            {"TrackIndex", 0x200, "IntProperty"},
            {"TrackPlaneOffset", 0x204, "FloatProperty"},
            {"SlateTransformMode", 0x20C, "EnumProperty"},
            {"bInheritWidgetClassesToTransform", 0x20E, "BoolProperty"},
            {"bInheritTrackPlaneOffset", 0x20F, "BoolProperty"},
        }};
    };

    struct PilgrimTrackWidgetBase
    {
        static constexpr std::string_view Name = "PilgrimTrackWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimGameWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bReceiveScoreEventsWhenHidden = 0x308;
            static constexpr std::uintptr_t GameplayEventHandles = 0x310;
            static constexpr std::uintptr_t MusicBattleInstance = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bReceiveScoreEventsWhenHidden", 0x308, "BoolProperty"},
            {"GameplayEventHandles", 0x310, "ArrayProperty"},
            {"MusicBattleInstance", 0x320, "ObjectProperty"},
        }};
    };

}
