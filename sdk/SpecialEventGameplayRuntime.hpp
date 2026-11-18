#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpecialEventGameplayRuntime
{
    struct DamageRecordEntry
    {
        static constexpr std::string_view Name = "DamageRecordEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DamageTotal = 0xC0;
            static constexpr std::uintptr_t EndReplicationTime = 0xC4;
            static constexpr std::uintptr_t DamageTags = 0xC8;
            static constexpr std::uintptr_t EffectContext = 0xE8;
            static constexpr std::uintptr_t GameplayCueParams = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DamageTotal", 0xC0, "FloatProperty"},
            {"EndReplicationTime", 0xC4, "FloatProperty"},
            {"DamageTags", 0xC8, "StructProperty"},
            {"EffectContext", 0xE8, "StructProperty"},
            {"GameplayCueParams", 0x100, "StructProperty"},
        }};
    };

    struct DowntimeSettings
    {
        static constexpr std::string_view Name = "DowntimeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bActivateNightNight = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bActivateNightNight", 0x30, "BoolProperty"},
        }};
    };

    struct FortAsyncAction_GameplayCinematicComponentReady
    {
        static constexpr std::string_view Name = "FortAsyncAction_GameplayCinematicComponentReady";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnReady = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnReady", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAsyncAction_SpecialEventGameUserSettingsReady
    {
        static constexpr std::string_view Name = "FortAsyncAction_SpecialEventGameUserSettingsReady";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnReady = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnReady", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAthenaMutator_BackFillControl
    {
        static constexpr std::string_view Name = "FortAthenaMutator_BackFillControl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FinalPhase = 0x2F8;
            static constexpr std::uintptr_t MinPlayerPercent = 0x2FC;
            static constexpr std::uintptr_t MaxPlayerPercent = 0x300;
            static constexpr std::uintptr_t UpdateTimeInterval = 0x304;
            static constexpr std::uintptr_t bAllowDisableBackfillAndDestroyMutator = 0x308;
            static constexpr std::uintptr_t DisableBackfillStaggerTime = 0x30C;
            static constexpr std::uintptr_t ControlFlowIndex = 0x310;
            static constexpr std::uintptr_t MinPlayersForBackfill = 0x314;
            static constexpr std::uintptr_t MaxPlayersForBackfill = 0x318;
            static constexpr std::uintptr_t bIsGameSessionInBackfillMode = 0x31C;
            static constexpr std::uintptr_t NumPlayers = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FinalPhase", 0x2F8, "EnumProperty"},
            {"MinPlayerPercent", 0x2FC, "FloatProperty"},
            {"MaxPlayerPercent", 0x300, "FloatProperty"},
            {"UpdateTimeInterval", 0x304, "FloatProperty"},
            {"bAllowDisableBackfillAndDestroyMutator", 0x308, "BoolProperty"},
            {"DisableBackfillStaggerTime", 0x30C, "FloatProperty"},
            {"ControlFlowIndex", 0x310, "ByteProperty"},
            {"MinPlayersForBackfill", 0x314, "IntProperty"},
            {"MaxPlayersForBackfill", 0x318, "IntProperty"},
            {"bIsGameSessionInBackfillMode", 0x31C, "BoolProperty"},
            {"NumPlayers", 0x320, "IntProperty"},
        }};
    };

    struct FortAthenaMutator_DestroyActorsAndComponents
    {
        static constexpr std::string_view Name = "FortAthenaMutator_DestroyActorsAndComponents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorDefinitions = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActorDefinitions", 0x2E8, "ArrayProperty"},
        }};
    };

    struct FortAthenaMutator_FakeKillRelevancy
    {
        static constexpr std::string_view Name = "FortAthenaMutator_FakeKillRelevancy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialRelevancy";
        struct Offsets
        {
            static constexpr std::uintptr_t FakeKillControllerComponentClass = 0x490;
            static constexpr std::uintptr_t RelevancyPhaseDataArray = 0x498;
            static constexpr std::uintptr_t PhaseNum = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FakeKillControllerComponentClass", 0x490, "ClassProperty"},
            {"RelevancyPhaseDataArray", 0x498, "ArrayProperty"},
            {"PhaseNum", 0x4A8, "IntProperty"},
        }};
    };

    struct FortAthenaMutator_LoadGameFeature
    {
        static constexpr std::string_view Name = "FortAthenaMutator_LoadGameFeature";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t GameFeatureToLoad = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameFeatureToLoad", 0x2E8, "StrProperty"},
        }};
    };

    struct FortAthenaMutator_RemoveGameFeatures
    {
        static constexpr std::string_view Name = "FortAthenaMutator_RemoveGameFeatures";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedGameFeatures = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllowedGameFeatures", 0x2E8, "ArrayProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BindEmotes
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BindEmotes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EmoteDataArray = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EmoteDataArray", 0x2F8, "ArrayProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockDamageToPlayer
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockDamageToPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockEndGamePhase
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockEndGamePhase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockFullScreenMap
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockFullScreenMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockGlider
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockGlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bStartWithGliderDisabled = 0x300;
            static constexpr std::uintptr_t bCancelRedeploy = 0x301;
            static constexpr std::uintptr_t bDisableGlider = 0x302;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bStartWithGliderDisabled", 0x300, "BoolProperty"},
            {"bCancelRedeploy", 0x301, "BoolProperty"},
            {"bDisableGlider", 0x302, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockHUD
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockHUD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HideUITags = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HideUITags", 0x2F8, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockInventory
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockInventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockNativeActions
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockNativeActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockedNativeActions = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlockedNativeActions", 0x2F8, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockReplayRecording
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockReplayRecording";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockScoring
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockScoring";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockSupplyDrop
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockSupplyDrop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_BlockTeamIndicators
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_BlockTeamIndicators";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_HoldWinConditionForEvent
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_HoldWinConditionForEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MinRealPlayersAliveToHoldWin = 0x2F8;
            static constexpr std::uintptr_t bPauseSafeZoneWhileHoldingWin = 0x2FC;
            static constexpr std::uintptr_t bAlsoPauseStormDamageWhileHoldingWin = 0x2FD;
            static constexpr std::uintptr_t bRestartStormOnEventEnd = 0x2FE;
            static constexpr std::uintptr_t bDisableKillFeed = 0x2FF;
            static constexpr std::uintptr_t bDisableQuestMessaging = 0x300;
            static constexpr std::uintptr_t bDisableXPMessaging = 0x301;
            static constexpr std::uintptr_t bDisableAccolades = 0x302;
            static constexpr std::uintptr_t ExtraHideUITags = 0x308;
            static constexpr std::uintptr_t bSuppressNotificationsWhileActive = 0x328;
            static constexpr std::uintptr_t bSuppressEventFeedsWhileActive = 0x329;
            static constexpr std::uintptr_t bSuppressRiftAnomaliesWhileActive = 0x32A;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"MinRealPlayersAliveToHoldWin", 0x2F8, "IntProperty"},
            {"bPauseSafeZoneWhileHoldingWin", 0x2FC, "BoolProperty"},
            {"bAlsoPauseStormDamageWhileHoldingWin", 0x2FD, "BoolProperty"},
            {"bRestartStormOnEventEnd", 0x2FE, "BoolProperty"},
            {"bDisableKillFeed", 0x2FF, "BoolProperty"},
            {"bDisableQuestMessaging", 0x300, "BoolProperty"},
            {"bDisableXPMessaging", 0x301, "BoolProperty"},
            {"bDisableAccolades", 0x302, "BoolProperty"},
            {"ExtraHideUITags", 0x308, "StructProperty"},
            {"bSuppressNotificationsWhileActive", 0x328, "BoolProperty"},
            {"bSuppressEventFeedsWhileActive", 0x329, "BoolProperty"},
            {"bSuppressRiftAnomaliesWhileActive", 0x32A, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_LockingOnFocalPoint
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_LockingOnFocalPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_OverrideCharacterScale
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_OverrideCharacterScale";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCharacterScaleOverrideData = 0x2E8;
            static constexpr std::uintptr_t CharacterScaleOverrideDataPerCID = 0x2F8;
            static constexpr std::uintptr_t ExcludedCosmeticItemDefinitionsByHotfix = 0x308;
            static constexpr std::uintptr_t bStartEnabled = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultCharacterScaleOverrideData", 0x2E8, "StructProperty"},
            {"CharacterScaleOverrideDataPerCID", 0x2F8, "ArrayProperty"},
            {"ExcludedCosmeticItemDefinitionsByHotfix", 0x308, "SetProperty"},
            {"bStartEnabled", 0x318, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SE_OverrideTimeDilationData
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_OverrideTimeDilationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeDilationCurve = 0x2E8;
            static constexpr std::uintptr_t TimeDilationDuration = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TimeDilationCurve", 0x2E8, "ObjectProperty"},
            {"TimeDilationDuration", 0x2F0, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_SE_Respawn
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_Respawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bRespawnAllPlayers = 0x2F8;
            static constexpr std::uintptr_t bShouldCalculateRespawnData = 0x2F9;
            static constexpr std::uintptr_t RespawnLogicData = 0x300;
            static constexpr std::uintptr_t AllowedPlayers = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bRespawnAllPlayers", 0x2F8, "BoolProperty"},
            {"bShouldCalculateRespawnData", 0x2F9, "BoolProperty"},
            {"RespawnLogicData", 0x300, "StructProperty"},
            {"AllowedPlayers", 0x470, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_SE_SafeZone
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_SafeZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bSetFinalLocationOnFirstActive = 0x2F9;
            static constexpr std::uintptr_t FinalLocation = 0x300;
            static constexpr std::uintptr_t DefaultAircraftOffsetFromMidLine = 0x310;
            static constexpr std::uintptr_t MinDefaultMidlineAngle = 0x314;
            static constexpr std::uintptr_t MaxDefaultMidlineAngle = 0x318;
            static constexpr std::uintptr_t PauseSafeZoneIndex = 0x31C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bSetFinalLocationOnFirstActive", 0x2F9, "BoolProperty"},
            {"FinalLocation", 0x300, "StructProperty"},
            {"DefaultAircraftOffsetFromMidLine", 0x310, "FloatProperty"},
            {"MinDefaultMidlineAngle", 0x314, "FloatProperty"},
            {"MaxDefaultMidlineAngle", 0x318, "FloatProperty"},
            {"PauseSafeZoneIndex", 0x31C, "IntProperty"},
        }};
    };

    struct FortAthenaMutator_SE_SkipAircraft
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SE_SkipAircraft";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_SpecialEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SpecialEvent
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SpecialEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t TeleportAllPlayersFinished = 0x2F8;
            static constexpr std::uintptr_t OnPawnLoaded = 0x308;
            static constexpr std::uintptr_t OnInitController = 0x318;
            static constexpr std::uintptr_t OnResumeGame = 0x328;
            static constexpr std::uintptr_t OnSpecialClientEvent = 0x338;
            static constexpr std::uintptr_t OnHandleLogout = 0x348;
            static constexpr std::uintptr_t OnClientInitialLoadingFinished = 0x358;
            static constexpr std::uintptr_t bPlayersAreInvincible = 0x3D0;
            static constexpr std::uintptr_t MinimumScoreBumpForAutomadeGoal = 0x3F8;
            static constexpr std::uintptr_t ScoreBrackets = 0x400;
            static constexpr std::uintptr_t bEnforceInfiniteSafeZonePhase = 0x410;
            static constexpr std::uintptr_t WarmupIslandPlayerStartTag = 0x414;
            static constexpr std::uintptr_t SpawnPointRules = 0x418;
            static constexpr std::uintptr_t bAllowInventoryOpen = 0x428;
            static constexpr std::uintptr_t bAllowFullScreenMap = 0x430;
            static constexpr std::uintptr_t bShouldClearFrontEndMapMarkers = 0x458;
            static constexpr std::uintptr_t bBlockTeamIndicators = 0x459;
            static constexpr std::uintptr_t ForceDisplaySquadInfoDuringGamePhases = 0x45C;
            static constexpr std::uintptr_t bAllowSquadListLocalPlayerInSplitscreen = 0x460;
            static constexpr std::uintptr_t bShouldHideHUDOnInit = 0x461;
            static constexpr std::uintptr_t UIToHideDuringSpecialEvent = 0x468;
            static constexpr std::uintptr_t UIToHideWhenInInfiniteWarmup = 0x488;
            static constexpr std::uintptr_t ClientEventsThatUnhideHiddenWhileLoadingHUDElements = 0x4A8;
            static constexpr std::uintptr_t bSkipPostGameScreens = 0x4C8;
            static constexpr std::uintptr_t bForceGarbageCollectionAfterUnloadOnServer = 0x4C9;
            static constexpr std::uintptr_t bForceGarbageCollectionAfterUnloadOnClient = 0x4CA;
            static constexpr std::uintptr_t bFullPurgeGC = 0x4CB;
            static constexpr std::uintptr_t EventAircraft = 0x4D0;
            static constexpr std::uintptr_t EventAircraftInfo = 0x4D8;
            static constexpr std::uintptr_t EventAircraftClass = 0x520;
            static constexpr std::uintptr_t bDisableHUD = 0x528;
            static constexpr std::uintptr_t GameResumed = 0x529;
            static constexpr std::uintptr_t AdditionalViewpoint = 0x530;
            static constexpr std::uintptr_t bParachutesDisabled = 0x548;
            static constexpr std::uintptr_t LastCSVEventName = 0x550;
            static constexpr std::uintptr_t bCanStreamBuildingFoundationsIn = 0x560;
            static constexpr std::uintptr_t AllPlayerTeleportedCount = 0x564;
            static constexpr std::uintptr_t DelayPlayersFromReturningToLobbyData = 0x568;
            static constexpr std::uintptr_t NamedWeightForContainerLootRoll = 0x578;
            static constexpr std::uintptr_t WeightForContainerLootRoll = 0x57C;
            static constexpr std::uintptr_t SpecialEventEmoteData = 0x5B0;
            static constexpr std::uintptr_t BlockedNativeActions = 0x5C0;
            static constexpr std::uintptr_t DesiredQuickbarItemTypeAfterRemove = 0x5E0;
            static constexpr std::uintptr_t SpecialEventsInputComponent = 0x5E8;
            static constexpr std::uintptr_t bLockingOnFocalPoint = 0x5F0;
            static constexpr std::uintptr_t SpecialEventOverrideParts = 0x5F8;
            static constexpr std::uintptr_t GameplayEffectToApplyOnSwapToDefault = 0x608;
            static constexpr std::uintptr_t OverridePartsArrayIndexMap = 0x618;
            static constexpr std::uintptr_t GameplayEffectsToApplyOnLogin = 0x628;
            static constexpr std::uintptr_t ControllerComponentClassOverride = 0x638;
            static constexpr std::uintptr_t bForceRespawningEnabled = 0x640;
            static constexpr std::uintptr_t TerrainMapsToUnload = 0x648;
            static constexpr std::uintptr_t UnhandledPlayerControllers = 0x6B0;
            static constexpr std::uintptr_t HLODActorsToHideNames = 0x6C0;
            static constexpr std::uintptr_t bAllowInventoryServiceComponent = 0x6D0;
            static constexpr std::uintptr_t bCanToggleCursorModeInStasis = 0x6D1;
            static constexpr std::uintptr_t bAllowSpawnSafeZoneIndicator = 0x6D2;
            static constexpr std::uintptr_t MannequinRecentlyRenderedCheckToleranceValue = 0x6D8;
            static constexpr std::uintptr_t SpecialEventMannequins = 0x700;
            static constexpr std::uintptr_t ActorSpawnDelegateClasses = 0x710;
        };

        inline static constexpr std::array<PropertyInfo, 60> Properties{{
            {"TeleportAllPlayersFinished", 0x2F8, "MulticastInlineDelegateProperty"},
            {"OnPawnLoaded", 0x308, "MulticastInlineDelegateProperty"},
            {"OnInitController", 0x318, "MulticastInlineDelegateProperty"},
            {"OnResumeGame", 0x328, "MulticastInlineDelegateProperty"},
            {"OnSpecialClientEvent", 0x338, "MulticastInlineDelegateProperty"},
            {"OnHandleLogout", 0x348, "MulticastInlineDelegateProperty"},
            {"OnClientInitialLoadingFinished", 0x358, "MulticastInlineDelegateProperty"},
            {"bPlayersAreInvincible", 0x3D0, "BoolProperty"},
            {"MinimumScoreBumpForAutomadeGoal", 0x3F8, "IntProperty"},
            {"ScoreBrackets", 0x400, "ArrayProperty"},
            {"bEnforceInfiniteSafeZonePhase", 0x410, "BoolProperty"},
            {"WarmupIslandPlayerStartTag", 0x414, "NameProperty"},
            {"SpawnPointRules", 0x418, "ArrayProperty"},
            {"bAllowInventoryOpen", 0x428, "BoolProperty"},
            {"bAllowFullScreenMap", 0x430, "StructProperty"},
            {"bShouldClearFrontEndMapMarkers", 0x458, "BoolProperty"},
            {"bBlockTeamIndicators", 0x459, "BoolProperty"},
            {"ForceDisplaySquadInfoDuringGamePhases", 0x45C, "IntProperty"},
            {"bAllowSquadListLocalPlayerInSplitscreen", 0x460, "BoolProperty"},
            {"bShouldHideHUDOnInit", 0x461, "BoolProperty"},
            {"UIToHideDuringSpecialEvent", 0x468, "StructProperty"},
            {"UIToHideWhenInInfiniteWarmup", 0x488, "StructProperty"},
            {"ClientEventsThatUnhideHiddenWhileLoadingHUDElements", 0x4A8, "StructProperty"},
            {"bSkipPostGameScreens", 0x4C8, "BoolProperty"},
            {"bForceGarbageCollectionAfterUnloadOnServer", 0x4C9, "BoolProperty"},
            {"bForceGarbageCollectionAfterUnloadOnClient", 0x4CA, "BoolProperty"},
            {"bFullPurgeGC", 0x4CB, "BoolProperty"},
            {"EventAircraft", 0x4D0, "ObjectProperty"},
            {"EventAircraftInfo", 0x4D8, "StructProperty"},
            {"EventAircraftClass", 0x520, "ClassProperty"},
            {"bDisableHUD", 0x528, "BoolProperty"},
            {"GameResumed", 0x529, "ByteProperty"},
            {"AdditionalViewpoint", 0x530, "StructProperty"},
            {"bParachutesDisabled", 0x548, "BoolProperty"},
            {"LastCSVEventName", 0x550, "StrProperty"},
            {"bCanStreamBuildingFoundationsIn", 0x560, "BoolProperty"},
            {"AllPlayerTeleportedCount", 0x564, "IntProperty"},
            {"DelayPlayersFromReturningToLobbyData", 0x568, "StructProperty"},
            {"NamedWeightForContainerLootRoll", 0x578, "NameProperty"},
            {"WeightForContainerLootRoll", 0x57C, "FloatProperty"},
            {"SpecialEventEmoteData", 0x5B0, "ArrayProperty"},
            {"BlockedNativeActions", 0x5C0, "StructProperty"},
            {"DesiredQuickbarItemTypeAfterRemove", 0x5E0, "EnumProperty"},
            {"SpecialEventsInputComponent", 0x5E8, "ObjectProperty"},
            {"bLockingOnFocalPoint", 0x5F0, "BoolProperty"},
            {"SpecialEventOverrideParts", 0x5F8, "ArrayProperty"},
            {"GameplayEffectToApplyOnSwapToDefault", 0x608, "StructProperty"},
            {"OverridePartsArrayIndexMap", 0x618, "MapProperty"},
            {"GameplayEffectsToApplyOnLogin", 0x628, "ArrayProperty"},
            {"ControllerComponentClassOverride", 0x638, "ClassProperty"},
            {"bForceRespawningEnabled", 0x640, "BoolProperty"},
            {"TerrainMapsToUnload", 0x648, "ArrayProperty"},
            {"UnhandledPlayerControllers", 0x6B0, "ArrayProperty"},
            {"HLODActorsToHideNames", 0x6C0, "ArrayProperty"},
            {"bAllowInventoryServiceComponent", 0x6D0, "BoolProperty"},
            {"bCanToggleCursorModeInStasis", 0x6D1, "BoolProperty"},
            {"bAllowSpawnSafeZoneIndicator", 0x6D2, "BoolProperty"},
            {"MannequinRecentlyRenderedCheckToleranceValue", 0x6D8, "StructProperty"},
            {"SpecialEventMannequins", 0x700, "ArrayProperty"},
            {"ActorSpawnDelegateClasses", 0x710, "ArrayProperty"},
        }};
    };

    struct FortAthenaMutator_SpecialEventBase
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SpecialEventBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyInBeginPlay = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDestroyInBeginPlay", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_SpecialEventTODM
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SpecialEventTODM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t PhaseDataArray = 0x2E8;
            static constexpr std::uintptr_t SpecialEventScript = 0x2F8;
            static constexpr std::uintptr_t PhaseIndexInProgress = 0x300;
            static constexpr std::uintptr_t SubphaseIndexInProgress = 0x304;
            static constexpr std::uintptr_t SpawnedTODM = 0x318;
            static constexpr std::uintptr_t bDebug = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PhaseDataArray", 0x2E8, "ArrayProperty"},
            {"SpecialEventScript", 0x2F8, "ObjectProperty"},
            {"PhaseIndexInProgress", 0x300, "IntProperty"},
            {"SubphaseIndexInProgress", 0x304, "IntProperty"},
            {"SpawnedTODM", 0x318, "InterfaceProperty"},
            {"bDebug", 0x328, "BoolProperty"},
        }};
    };

    struct FortCameraMode_SpecialEventFocalPoint
    {
        static constexpr std::string_view Name = "FortCameraMode_SpecialEventFocalPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_FocalPoint";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideTransitionTime = 0x2090;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverrideTransitionTime", 0x2090, "FloatProperty"},
        }};
    };

    struct FortCharacterMovementMutator
    {
        static constexpr std::string_view Name = "FortCharacterMovementMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementMutatorComponentClass = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MovementMutatorComponentClass", 0x2F0, "ClassProperty"},
        }};
    };

    struct FortCharacterMovementMutatorComponent
    {
        static constexpr std::string_view Name = "FortCharacterMovementMutatorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterOwner = 0xC8;
            static constexpr std::uintptr_t MovementComponent = 0xD0;
            static constexpr std::uintptr_t CDOMovementComponent = 0xD8;
            static constexpr std::uintptr_t BuffetBubblesMoveToBoxSpeed = 0xF0;
            static constexpr std::uintptr_t BuffetBubblesRelativeVelocityInterpSpeed = 0x118;
            static constexpr std::uintptr_t BuffetBubblesLocationInterpSpeed = 0x140;
            static constexpr std::uintptr_t BuffetBubblesRotationInterpSpeed = 0x168;
            static constexpr std::uintptr_t BuffetBubblesMinRelativeX = 0x190;
            static constexpr std::uintptr_t BuffetBubblesMaxRelativeX = 0x1B8;
            static constexpr std::uintptr_t BuffetBubblesMinRelativeY = 0x1E0;
            static constexpr std::uintptr_t BuffetBubblesMaxRelativeY = 0x208;
            static constexpr std::uintptr_t BuffetBubblesMinRelativeZ = 0x230;
            static constexpr std::uintptr_t BuffetBubblesMaxRelativeZ = 0x258;
            static constexpr std::uintptr_t BuffetBubblesRotationRate = 0x280;
            static constexpr std::uintptr_t BuffetBubblesMaxAcceleration = 0x298;
            static constexpr std::uintptr_t BuffetBubblesMaxRelativeSpeed = 0x2C0;
            static constexpr std::uintptr_t BuffetBubblesRelativeDeceleration = 0x2E8;
            static constexpr std::uintptr_t BuffetBubblesSphereRadius = 0x310;
            static constexpr std::uintptr_t BuffetBubblesFollowActor = 0x338;
            static constexpr std::uintptr_t BuffetBubblesInitialFollowBoxOffsetPercent = 0x340;
            static constexpr std::uintptr_t BuffetBubblesReplicatedData = 0x440;
            static constexpr std::uintptr_t BuffetBubblesIntroSpeed = 0x740;
            static constexpr std::uintptr_t BuffetBubblesIntroTargetTransform = 0x770;
            static constexpr std::uintptr_t BuffetFlyingMaxPitchDegrees = 0x7D0;
            static constexpr std::uintptr_t BuffetFlyingMaxSpeed = 0x7F8;
            static constexpr std::uintptr_t BuffetFlyingVelocityDirectionInterpSpeed = 0x820;
            static constexpr std::uintptr_t BuffetFlyingRotationRate = 0x848;
            static constexpr std::uintptr_t BuffetFlyingMaxSpeedOverride = 0x860;
            static constexpr std::uintptr_t BuffetFlyingMaxSpeedInterpSpeed = 0x864;
            static constexpr std::uintptr_t BuffetFlyingVelocityDirectionInterpSpeedOverride = 0x86C;
            static constexpr std::uintptr_t BuffetFlyingRicochetSphereSize = 0x870;
            static constexpr std::uintptr_t BuffetFlyingRicochetRotationDuration = 0x898;
            static constexpr std::uintptr_t BuffetFlyingRicochetControlRotationInterpSpeed = 0x8C0;
            static constexpr std::uintptr_t BuffetFlyingRicochetReplicatedData = 0x930;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"CharacterOwner", 0xC8, "ObjectProperty"},
            {"MovementComponent", 0xD0, "ObjectProperty"},
            {"CDOMovementComponent", 0xD8, "ObjectProperty"},
            {"BuffetBubblesMoveToBoxSpeed", 0xF0, "StructProperty"},
            {"BuffetBubblesRelativeVelocityInterpSpeed", 0x118, "StructProperty"},
            {"BuffetBubblesLocationInterpSpeed", 0x140, "StructProperty"},
            {"BuffetBubblesRotationInterpSpeed", 0x168, "StructProperty"},
            {"BuffetBubblesMinRelativeX", 0x190, "StructProperty"},
            {"BuffetBubblesMaxRelativeX", 0x1B8, "StructProperty"},
            {"BuffetBubblesMinRelativeY", 0x1E0, "StructProperty"},
            {"BuffetBubblesMaxRelativeY", 0x208, "StructProperty"},
            {"BuffetBubblesMinRelativeZ", 0x230, "StructProperty"},
            {"BuffetBubblesMaxRelativeZ", 0x258, "StructProperty"},
            {"BuffetBubblesRotationRate", 0x280, "StructProperty"},
            {"BuffetBubblesMaxAcceleration", 0x298, "StructProperty"},
            {"BuffetBubblesMaxRelativeSpeed", 0x2C0, "StructProperty"},
            {"BuffetBubblesRelativeDeceleration", 0x2E8, "StructProperty"},
            {"BuffetBubblesSphereRadius", 0x310, "StructProperty"},
            {"BuffetBubblesFollowActor", 0x338, "ObjectProperty"},
            {"BuffetBubblesInitialFollowBoxOffsetPercent", 0x340, "StructProperty"},
            {"BuffetBubblesReplicatedData", 0x440, "StructProperty"},
            {"BuffetBubblesIntroSpeed", 0x740, "StructProperty"},
            {"BuffetBubblesIntroTargetTransform", 0x770, "StructProperty"},
            {"BuffetFlyingMaxPitchDegrees", 0x7D0, "StructProperty"},
            {"BuffetFlyingMaxSpeed", 0x7F8, "StructProperty"},
            {"BuffetFlyingVelocityDirectionInterpSpeed", 0x820, "StructProperty"},
            {"BuffetFlyingRotationRate", 0x848, "StructProperty"},
            {"BuffetFlyingMaxSpeedOverride", 0x860, "FloatProperty"},
            {"BuffetFlyingMaxSpeedInterpSpeed", 0x864, "FloatProperty"},
            {"BuffetFlyingVelocityDirectionInterpSpeedOverride", 0x86C, "FloatProperty"},
            {"BuffetFlyingRicochetSphereSize", 0x870, "StructProperty"},
            {"BuffetFlyingRicochetRotationDuration", 0x898, "StructProperty"},
            {"BuffetFlyingRicochetControlRotationInterpSpeed", 0x8C0, "StructProperty"},
            {"BuffetFlyingRicochetReplicatedData", 0x930, "StructProperty"},
        }};
    };

    struct FortCheatManager_DestroyActorsAndComponents
    {
        static constexpr std::string_view Name = "FortCheatManager_DestroyActorsAndComponents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCheatManager_Coupled";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetedObject = 0x28;
            static constexpr std::uintptr_t OwningController = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetedObject", 0x28, "ObjectProperty"},
            {"OwningController", 0x30, "ObjectProperty"},
        }};
    };

    struct FortCheatManager_FakeKillRelevancy
    {
        static constexpr std::string_view Name = "FortCheatManager_FakeKillRelevancy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCheatManager_Coupled";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetedObject = 0x28;
            static constexpr std::uintptr_t OwningController = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetedObject", 0x28, "ObjectProperty"},
            {"OwningController", 0x30, "ObjectProperty"},
        }};
    };

    struct FortCheatManager_SpecialEvent
    {
        static constexpr std::string_view Name = "FortCheatManager_SpecialEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCheatManager_Coupled";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetedObject = 0x28;
            static constexpr std::uintptr_t OwningController = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetedObject", 0x28, "ObjectProperty"},
            {"OwningController", 0x30, "ObjectProperty"},
        }};
    };

    struct FortCheatManager_SpecialEventTODM
    {
        static constexpr std::string_view Name = "FortCheatManager_SpecialEventTODM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCheatManager_Coupled";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetedObject = 0x28;
            static constexpr std::uintptr_t OwningController = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetedObject", 0x28, "ObjectProperty"},
            {"OwningController", 0x30, "ObjectProperty"},
        }};
    };

    struct FortControllerComponent_DelayReturnToMainMenu
    {
        static constexpr std::string_view Name = "FortControllerComponent_DelayReturnToMainMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoDelayReturnToMainMenu = 0xC8;
            static constexpr std::uintptr_t bAllowMultipleReturnToMainMenuDelays = 0xC9;
            static constexpr std::uintptr_t MinDelay = 0xCC;
            static constexpr std::uintptr_t MaxDelay = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bAutoDelayReturnToMainMenu", 0xC8, "BoolProperty"},
            {"bAllowMultipleReturnToMainMenuDelays", 0xC9, "BoolProperty"},
            {"MinDelay", 0xCC, "FloatProperty"},
            {"MaxDelay", 0xD0, "FloatProperty"},
        }};
    };

    struct FortControllerComponent_FakeKillRelevancy
    {
        static constexpr std::string_view Name = "FortControllerComponent_FakeKillRelevancy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerDataArray = 0xC8;
            static constexpr std::uintptr_t ClientPlayerStateKillStepMap = 0x128;
            static constexpr std::uintptr_t ResetCounter = 0x138;
            static constexpr std::uintptr_t DebugSupergroupPlayerStates = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerDataArray", 0xC8, "StructProperty"},
            {"ClientPlayerStateKillStepMap", 0x128, "MapProperty"},
            {"ResetCounter", 0x138, "ByteProperty"},
            {"DebugSupergroupPlayerStates", 0x140, "ArrayProperty"},
        }};
    };

    struct FortControllerComponent_GameplayCinematic
    {
        static constexpr std::string_view Name = "FortControllerComponent_GameplayCinematic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BP_OnStartGameplayOutro = 0xF8;
            static constexpr std::uintptr_t BP_OnGameplayIntroFinished = 0x108;
            static constexpr std::uintptr_t bIsReadyForGameplay = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BP_OnStartGameplayOutro", 0xF8, "MulticastInlineDelegateProperty"},
            {"BP_OnGameplayIntroFinished", 0x108, "MulticastInlineDelegateProperty"},
            {"bIsReadyForGameplay", 0x118, "BoolProperty"},
        }};
    };

    struct FortControllerComponent_SpecialEvent
    {
        static constexpr std::string_view Name = "FortControllerComponent_SpecialEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bForceBuildModeInputComponentToNotConsumeInputs = 0xC8;
            static constexpr std::uintptr_t SpecialEventMutator = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bForceBuildModeInputComponentToNotConsumeInputs", 0xC8, "BoolProperty"},
            {"SpecialEventMutator", 0xCC, "WeakObjectProperty"},
        }};
    };

    struct FortCustomTickComponent
    {
        static constexpr std::string_view Name = "FortCustomTickComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Condition = 0xC0;
            static constexpr std::uintptr_t AuthorityQualitySettingsTag = 0xC4;
            static constexpr std::uintptr_t DefaultClientQualitySettingsTag = 0xC8;
            static constexpr std::uintptr_t ClientPlatformQualitySettingsTagMap = 0xD0;
            static constexpr std::uintptr_t QualitySettingsMap = 0xE0;
            static constexpr std::uintptr_t WasRecentlyRenderedTolerance = 0xF0;
            static constexpr std::uintptr_t OnCustomTick = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Condition", 0xC0, "EnumProperty"},
            {"AuthorityQualitySettingsTag", 0xC4, "StructProperty"},
            {"DefaultClientQualitySettingsTag", 0xC8, "StructProperty"},
            {"ClientPlatformQualitySettingsTagMap", 0xD0, "MapProperty"},
            {"QualitySettingsMap", 0xE0, "MapProperty"},
            {"WasRecentlyRenderedTolerance", 0xF0, "FloatProperty"},
            {"OnCustomTick", 0xF8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortGameplayAbility_VortexOverride
    {
        static constexpr std::string_view Name = "FortGameplayAbility_VortexOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideParachuteParams = 0xB40;
            static constexpr std::uintptr_t VortexParachuteControlParamsOverride = 0xB48;
            static constexpr std::uintptr_t bOverridePassiveSkyDivingParams = 0xC88;
            static constexpr std::uintptr_t VortexSkydivingControlParamsPassive = 0xC90;
            static constexpr std::uintptr_t bOverrideActiveSkyDivingParams = 0xDD0;
            static constexpr std::uintptr_t VortexSkydivingControlParamsActive = 0xDD8;
            static constexpr std::uintptr_t bOverrideActiveSkyDivingUpwardParams = 0xF18;
            static constexpr std::uintptr_t VortexSkydivingControlParamsActiveUpward = 0xF20;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bOverrideParachuteParams", 0xB40, "BoolProperty"},
            {"VortexParachuteControlParamsOverride", 0xB48, "StructProperty"},
            {"bOverridePassiveSkyDivingParams", 0xC88, "BoolProperty"},
            {"VortexSkydivingControlParamsPassive", 0xC90, "StructProperty"},
            {"bOverrideActiveSkyDivingParams", 0xDD0, "BoolProperty"},
            {"VortexSkydivingControlParamsActive", 0xDD8, "StructProperty"},
            {"bOverrideActiveSkyDivingUpwardParams", 0xF18, "BoolProperty"},
            {"VortexSkydivingControlParamsActiveUpward", 0xF20, "StructProperty"},
        }};
    };

    struct FortSpecialRelevancyActorSpawner
    {
        static constexpr std::string_view Name = "FortSpecialRelevancyActorSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorSpawner";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClassToSpawn = 0x278;
            static constexpr std::uintptr_t SpawnerAuthority = 0x298;
            static constexpr std::uintptr_t bDestroyAfterSpawn = 0x299;
            static constexpr std::uintptr_t bSpawnOnBeginPlay = 0x299;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActorClassToSpawn", 0x278, "SoftClassProperty"},
            {"SpawnerAuthority", 0x298, "EnumProperty"},
            {"bDestroyAfterSpawn", 0x299, "BoolProperty"},
            {"bSpawnOnBeginPlay", 0x299, "BoolProperty"},
        }};
    };

    struct FortSpecialRelevancyAttachComponent
    {
        static constexpr std::string_view Name = "FortSpecialRelevancyAttachComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAttached = 0xC0;
            static constexpr std::uintptr_t OnDetached = 0xD0;
            static constexpr std::uintptr_t AttachComponentTag = 0xE0;
            static constexpr std::uintptr_t SocketNames = 0xE8;
            static constexpr std::uintptr_t AttachComponent = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnAttached", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnDetached", 0xD0, "MulticastInlineDelegateProperty"},
            {"AttachComponentTag", 0xE0, "NameProperty"},
            {"SocketNames", 0xE8, "ArrayProperty"},
            {"AttachComponent", 0xF8, "ObjectProperty"},
        }};
    };

    struct FortSpecialRelevancyPawnAttachComponent
    {
        static constexpr std::string_view Name = "FortSpecialRelevancyPawnAttachComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSpecialRelevancyAttachComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAttached = 0xC0;
            static constexpr std::uintptr_t OnDetached = 0xD0;
            static constexpr std::uintptr_t AttachComponentTag = 0xE0;
            static constexpr std::uintptr_t SocketNames = 0xE8;
            static constexpr std::uintptr_t AttachComponent = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnAttached", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnDetached", 0xD0, "MulticastInlineDelegateProperty"},
            {"AttachComponentTag", 0xE0, "NameProperty"},
            {"SocketNames", 0xE8, "ArrayProperty"},
            {"AttachComponent", 0xF8, "ObjectProperty"},
        }};
    };

    struct PreEventManager
    {
        static constexpr std::string_view Name = "PreEventManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PreEventScope = 0x278;
            static constexpr std::uintptr_t Phases = 0x2F0;
            static constexpr std::uintptr_t ShowBurnInCurve = 0x300;
            static constexpr std::uintptr_t InitialPhaseTag = 0x328;
            static constexpr std::uintptr_t InitialPhaseTagOverride = 0x32C;
            static constexpr std::uintptr_t CurrentPhaseIndex = 0x338;
            static constexpr std::uintptr_t bWaitForInitialStateFromMesh = 0x33C;
            static constexpr std::uintptr_t bWaitForFirstPlayerJoinToPlay = 0x33D;
            static constexpr std::uintptr_t bSkipPreEventScopeSequencePastInitialPhase = 0x33E;
            static constexpr std::uintptr_t bSkipPreEventScopeSequenceAfterEventStarted = 0x33F;
            static constexpr std::uintptr_t SkipPreEventScopeSequenceForPhaseTags = 0x340;
            static constexpr std::uintptr_t SpecialEventScript = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"PreEventScope", 0x278, "StructProperty"},
            {"Phases", 0x2F0, "ArrayProperty"},
            {"ShowBurnInCurve", 0x300, "StructProperty"},
            {"InitialPhaseTag", 0x328, "StructProperty"},
            {"InitialPhaseTagOverride", 0x32C, "StructProperty"},
            {"CurrentPhaseIndex", 0x338, "IntProperty"},
            {"bWaitForInitialStateFromMesh", 0x33C, "BoolProperty"},
            {"bWaitForFirstPlayerJoinToPlay", 0x33D, "BoolProperty"},
            {"bSkipPreEventScopeSequencePastInitialPhase", 0x33E, "BoolProperty"},
            {"bSkipPreEventScopeSequenceAfterEventStarted", 0x33F, "BoolProperty"},
            {"SkipPreEventScopeSequenceForPhaseTags", 0x340, "StructProperty"},
            {"SpecialEventScript", 0x3F0, "ObjectProperty"},
        }};
    };

    struct SpecialEventAnimInstance_BGAEnemyGuard
    {
        static constexpr std::string_view Name = "SpecialEventAnimInstance_BGAEnemyGuard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bAttack = 0x260;
            static constexpr std::uintptr_t bCrouch = 0x260;
            static constexpr std::uintptr_t bIsMoving = 0x260;
            static constexpr std::uintptr_t bJogging = 0x260;
            static constexpr std::uintptr_t bRunNativeUpdateAnimation = 0x260;
            static constexpr std::uintptr_t bShouldWalkRightFootForward = 0x260;
            static constexpr std::uintptr_t bTurnLeft = 0x260;
            static constexpr std::uintptr_t bWantsToTurn = 0x260;
            static constexpr std::uintptr_t DeltaTimeValue = 0x264;
            static constexpr std::uintptr_t PreviousUpdateLocation = 0x268;
            static constexpr std::uintptr_t Velocity = 0x280;
            static constexpr std::uintptr_t MinimumSpeedForMovingSquared = 0x298;
            static constexpr std::uintptr_t TargetTurnRootYaw = 0x29C;
            static constexpr std::uintptr_t TurnInPlaceAngleErrorTolerance = 0x2A0;
            static constexpr std::uintptr_t TurnInPlaceRotationSpeed = 0x2A4;
            static constexpr std::uintptr_t TurnInPlaceEnableAimYawThreshold = 0x2A8;
            static constexpr std::uintptr_t WantsToTurnAimYawInterpSpeed = 0x2AC;
            static constexpr std::uintptr_t MinAimYawInterpSpeed = 0x2B0;
            static constexpr std::uintptr_t MaxAimYawInterpSpeed = 0x2B4;
            static constexpr std::uintptr_t MinAimPitchInterpSpeed = 0x2B8;
            static constexpr std::uintptr_t MaxAimPitchInterpSpeed = 0x2BC;
            static constexpr std::uintptr_t MinRootYawInterpSpeed = 0x2C0;
            static constexpr std::uintptr_t MaxRootYawInterpSpeed = 0x2C4;
            static constexpr std::uintptr_t WalkRightFootForwardDirectionBwdMin = 0x2C8;
            static constexpr std::uintptr_t WalkRightFootForwardDirectionBwdMax = 0x2CC;
            static constexpr std::uintptr_t WalkRightFootForwardDirectionFwdMin = 0x2D0;
            static constexpr std::uintptr_t WalkRightFootForwardDirectionFwdMax = 0x2D4;
            static constexpr std::uintptr_t AnimInfo = 0x2D8;
            static constexpr std::uintptr_t ZeroOutPitchWeightCurveName = 0x2F0;
            static constexpr std::uintptr_t MannequinAimStartLocationOffset = 0x2F8;
            static constexpr std::uintptr_t MannequinRotationOffset = 0x310;
            static constexpr std::uintptr_t RootSocketName = 0x328;
            static constexpr std::uintptr_t TurnInPlaceYawMagnitude = 0x32C;
            static constexpr std::uintptr_t AuthoredWalkSpeed = 0x330;
            static constexpr std::uintptr_t AuthoredJogSpeed = 0x334;
            static constexpr std::uintptr_t MovementDirection = 0x338;
            static constexpr std::uintptr_t SpeedAdjustedPlayRate = 0x33C;
            static constexpr std::uintptr_t Speed2D = 0x340;
            static constexpr std::uintptr_t SpeedAdjustedPlayRateInterpSpeed = 0x344;
            static constexpr std::uintptr_t CrouchStateActorTag = 0x348;
            static constexpr std::uintptr_t AttackStateActorTag = 0x34C;
        };

        inline static constexpr std::array<PropertyInfo, 41> Properties{{
            {"bAttack", 0x260, "BoolProperty"},
            {"bCrouch", 0x260, "BoolProperty"},
            {"bIsMoving", 0x260, "BoolProperty"},
            {"bJogging", 0x260, "BoolProperty"},
            {"bRunNativeUpdateAnimation", 0x260, "BoolProperty"},
            {"bShouldWalkRightFootForward", 0x260, "BoolProperty"},
            {"bTurnLeft", 0x260, "BoolProperty"},
            {"bWantsToTurn", 0x260, "BoolProperty"},
            {"DeltaTimeValue", 0x264, "FloatProperty"},
            {"PreviousUpdateLocation", 0x268, "StructProperty"},
            {"Velocity", 0x280, "StructProperty"},
            {"MinimumSpeedForMovingSquared", 0x298, "FloatProperty"},
            {"TargetTurnRootYaw", 0x29C, "FloatProperty"},
            {"TurnInPlaceAngleErrorTolerance", 0x2A0, "FloatProperty"},
            {"TurnInPlaceRotationSpeed", 0x2A4, "FloatProperty"},
            {"TurnInPlaceEnableAimYawThreshold", 0x2A8, "FloatProperty"},
            {"WantsToTurnAimYawInterpSpeed", 0x2AC, "FloatProperty"},
            {"MinAimYawInterpSpeed", 0x2B0, "FloatProperty"},
            {"MaxAimYawInterpSpeed", 0x2B4, "FloatProperty"},
            {"MinAimPitchInterpSpeed", 0x2B8, "FloatProperty"},
            {"MaxAimPitchInterpSpeed", 0x2BC, "FloatProperty"},
            {"MinRootYawInterpSpeed", 0x2C0, "FloatProperty"},
            {"MaxRootYawInterpSpeed", 0x2C4, "FloatProperty"},
            {"WalkRightFootForwardDirectionBwdMin", 0x2C8, "FloatProperty"},
            {"WalkRightFootForwardDirectionBwdMax", 0x2CC, "FloatProperty"},
            {"WalkRightFootForwardDirectionFwdMin", 0x2D0, "FloatProperty"},
            {"WalkRightFootForwardDirectionFwdMax", 0x2D4, "FloatProperty"},
            {"AnimInfo", 0x2D8, "StructProperty"},
            {"ZeroOutPitchWeightCurveName", 0x2F0, "NameProperty"},
            {"MannequinAimStartLocationOffset", 0x2F8, "StructProperty"},
            {"MannequinRotationOffset", 0x310, "StructProperty"},
            {"RootSocketName", 0x328, "NameProperty"},
            {"TurnInPlaceYawMagnitude", 0x32C, "FloatProperty"},
            {"AuthoredWalkSpeed", 0x330, "FloatProperty"},
            {"AuthoredJogSpeed", 0x334, "FloatProperty"},
            {"MovementDirection", 0x338, "FloatProperty"},
            {"SpeedAdjustedPlayRate", 0x33C, "FloatProperty"},
            {"Speed2D", 0x340, "FloatProperty"},
            {"SpeedAdjustedPlayRateInterpSpeed", 0x344, "FloatProperty"},
            {"CrouchStateActorTag", 0x348, "NameProperty"},
            {"AttackStateActorTag", 0x34C, "NameProperty"},
        }};
    };

    struct SpecialEventAnimInstance_PlayerMannequin
    {
        static constexpr std::string_view Name = "SpecialEventAnimInstance_PlayerMannequin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimInputEventList = 0x270;
            static constexpr std::uintptr_t BoneSets = 0x280;
            static constexpr std::uintptr_t AnimPropertyGameplayTagBindings = 0x290;
            static constexpr std::uintptr_t AnimPropertyCurveFloatBindings = 0x2A0;
            static constexpr std::uintptr_t AnimPropertyCurveCompareBindings = 0x2B0;
            static constexpr std::uintptr_t OnGameplayTagNotifyBegin = 0x2C0;
            static constexpr std::uintptr_t OnGameplayTagNotifyEnd = 0x2D0;
            static constexpr std::uintptr_t WakeUpThresholdSeconds = 0x2F0;
            static constexpr std::uintptr_t LastUpdateTimestamp = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AnimInputEventList", 0x270, "ArrayProperty"},
            {"BoneSets", 0x280, "MapProperty"},
            {"AnimPropertyGameplayTagBindings", 0x290, "ArrayProperty"},
            {"AnimPropertyCurveFloatBindings", 0x2A0, "ArrayProperty"},
            {"AnimPropertyCurveCompareBindings", 0x2B0, "ArrayProperty"},
            {"OnGameplayTagNotifyBegin", 0x2C0, "MulticastInlineDelegateProperty"},
            {"OnGameplayTagNotifyEnd", 0x2D0, "MulticastInlineDelegateProperty"},
            {"WakeUpThresholdSeconds", 0x2F0, "FloatProperty"},
            {"LastUpdateTimestamp", 0x320, "FloatProperty"},
        }};
    };

    struct SpecialEventAudioAnalysisBaseComponent
    {
        static constexpr std::string_view Name = "SpecialEventAudioAnalysisBaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentTime = 0xC0;
            static constexpr std::uintptr_t LoudnessNRT = 0xC8;
            static constexpr std::uintptr_t OnsetNRT = 0xD0;
            static constexpr std::uintptr_t ConstantQNRT = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CurrentTime", 0xC0, "FloatProperty"},
            {"LoudnessNRT", 0xC8, "ObjectProperty"},
            {"OnsetNRT", 0xD0, "ObjectProperty"},
            {"ConstantQNRT", 0xD8, "ObjectProperty"},
        }};
    };

    struct SpecialEventAudioHapticsComponent
    {
        static constexpr std::string_view Name = "SpecialEventAudioHapticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpecialEventAudioAnalysisBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HapticsActions = 0xE0;
            static constexpr std::uintptr_t bStartHapticsOnBeginPlay = 0xF0;
            static constexpr std::uintptr_t IntensityMultiplier = 0xF4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HapticsActions", 0xE0, "ArrayProperty"},
            {"bStartHapticsOnBeginPlay", 0xF0, "BoolProperty"},
            {"IntensityMultiplier", 0xF4, "FloatProperty"},
        }};
    };

    struct SpecialEventBackfillComponent
    {
        static constexpr std::string_view Name = "SpecialEventBackfillComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BackfillState = 0xE8;
            static constexpr std::uintptr_t MinPlayerPercent = 0xEC;
            static constexpr std::uintptr_t MaxPlayerPercent = 0xF0;
            static constexpr std::uintptr_t UpdateTimeInterval = 0xF4;
            static constexpr std::uintptr_t GlobalStaggerTime = 0xF8;
            static constexpr std::uintptr_t bAllowImmediateDisable = 0xFC;
            static constexpr std::uintptr_t bDisableServerInit = 0xFD;
            static constexpr std::uintptr_t bContinueFlowOnGamePhaseNone = 0xFE;
            static constexpr std::uintptr_t bDisableBackfillAfterInitIfDisabled = 0xFF;
            static constexpr std::uintptr_t MeshNetworkComponent = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BackfillState", 0xE8, "EnumProperty"},
            {"MinPlayerPercent", 0xEC, "FloatProperty"},
            {"MaxPlayerPercent", 0xF0, "FloatProperty"},
            {"UpdateTimeInterval", 0xF4, "FloatProperty"},
            {"GlobalStaggerTime", 0xF8, "FloatProperty"},
            {"bAllowImmediateDisable", 0xFC, "BoolProperty"},
            {"bDisableServerInit", 0xFD, "BoolProperty"},
            {"bContinueFlowOnGamePhaseNone", 0xFE, "BoolProperty"},
            {"bDisableBackfillAfterInitIfDisabled", 0xFF, "BoolProperty"},
            {"MeshNetworkComponent", 0x148, "ObjectProperty"},
        }};
    };

    struct SpecialEventBackfillManager
    {
        static constexpr std::string_view Name = "SpecialEventBackfillManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshNetworkComponent = 0x278;
            static constexpr std::uintptr_t BackfillComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MeshNetworkComponent", 0x278, "ObjectProperty"},
            {"BackfillComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct SpecialEventCatchupCheckpoint
    {
        static constexpr std::string_view Name = "SpecialEventCatchupCheckpoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TeleportPoints = 0x278;
            static constexpr std::uintptr_t CheckpointPathName = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TeleportPoints", 0x278, "ArrayProperty"},
            {"CheckpointPathName", 0x288, "StructProperty"},
        }};
    };

    struct SpecialEventCatchupManager
    {
        static constexpr std::string_view Name = "SpecialEventCatchupManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerTeleported = 0xC0;
            static constexpr std::uintptr_t PlayersCatchupStates = 0xD8;
            static constexpr std::uintptr_t Checkpoints = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnPlayerTeleported", 0xC0, "MulticastInlineDelegateProperty"},
            {"PlayersCatchupStates", 0xD8, "ArrayProperty"},
            {"Checkpoints", 0xE8, "ArrayProperty"},
        }};
    };

    struct SpecialEventCinematicCameraMode
    {
        static constexpr std::string_view Name = "SpecialEventCinematicCameraMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCinematicCamera";
        struct Offsets
        {
            static constexpr std::uintptr_t SpectatorPC = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpectatorPC", 0x80, "ObjectProperty"},
        }};
    };

    struct SpecialEventCursorInstigatorInterface
    {
        static constexpr std::string_view Name = "SpecialEventCursorInstigatorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpecialEventCursorPawnComponent
    {
        static constexpr std::string_view Name = "SpecialEventCursorPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDesiredVisibilityChanged = 0xC8;
            static constexpr std::uintptr_t bAllowOnNonOwningClients = 0xD8;
            static constexpr std::uintptr_t OwningPawn = 0xE0;
            static constexpr std::uintptr_t OwningController = 0xE8;
            static constexpr std::uintptr_t OnCursorModeChanged = 0x100;
            static constexpr std::uintptr_t DefaultCursorModeTag = 0x110;
            static constexpr std::uintptr_t bDefaultCursorModeAutoActivate = 0x114;
            static constexpr std::uintptr_t CursorModes = 0x118;
            static constexpr std::uintptr_t CursorStack = 0x128;
            static constexpr std::uintptr_t ReplicatedCursorStackEntry = 0x138;
            static constexpr std::uintptr_t InputHelperClass = 0x148;
            static constexpr std::uintptr_t bUseGamepadLookInput = 0x150;
            static constexpr std::uintptr_t bUseGamepadMoveInput = 0x151;
            static constexpr std::uintptr_t bUseGyroInput = 0x152;
            static constexpr std::uintptr_t bObeyInvertedPitchUserSetting = 0x153;
            static constexpr std::uintptr_t CommonInputSubsystem = 0x158;
            static constexpr std::uintptr_t InputHelperComponent = 0x160;
            static constexpr std::uintptr_t OnViewportLocationChanged = 0x1A8;
            static constexpr std::uintptr_t NonOwningInterpSpeed = 0x1B8;
            static constexpr std::uintptr_t MinDeltaToSendWorldLocationToServer = 0x1E0;
            static constexpr std::uintptr_t ReplicatedWorldLocation = 0x210;
            static constexpr std::uintptr_t Widgets = 0x288;
            static constexpr std::uintptr_t bAdditiveRotationAllowedByDefault = 0x399;
            static constexpr std::uintptr_t bZoomAllowedByDefault = 0x39B;
            static constexpr std::uintptr_t ZoomActionName = 0x39C;
            static constexpr std::uintptr_t AdditiveOffsetCameraComponent = 0x3A8;
            static constexpr std::uintptr_t DebugEllipseBoundsNumSides = 0x3B8;
            static constexpr std::uintptr_t DebugBoundsLineThickness = 0x3BC;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"OnDesiredVisibilityChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"bAllowOnNonOwningClients", 0xD8, "BoolProperty"},
            {"OwningPawn", 0xE0, "ObjectProperty"},
            {"OwningController", 0xE8, "ObjectProperty"},
            {"OnCursorModeChanged", 0x100, "MulticastInlineDelegateProperty"},
            {"DefaultCursorModeTag", 0x110, "StructProperty"},
            {"bDefaultCursorModeAutoActivate", 0x114, "BoolProperty"},
            {"CursorModes", 0x118, "MapProperty"},
            {"CursorStack", 0x128, "ArrayProperty"},
            {"ReplicatedCursorStackEntry", 0x138, "StructProperty"},
            {"InputHelperClass", 0x148, "ClassProperty"},
            {"bUseGamepadLookInput", 0x150, "BoolProperty"},
            {"bUseGamepadMoveInput", 0x151, "BoolProperty"},
            {"bUseGyroInput", 0x152, "BoolProperty"},
            {"bObeyInvertedPitchUserSetting", 0x153, "BoolProperty"},
            {"CommonInputSubsystem", 0x158, "ObjectProperty"},
            {"InputHelperComponent", 0x160, "ObjectProperty"},
            {"OnViewportLocationChanged", 0x1A8, "MulticastInlineDelegateProperty"},
            {"NonOwningInterpSpeed", 0x1B8, "StructProperty"},
            {"MinDeltaToSendWorldLocationToServer", 0x1E0, "StructProperty"},
            {"ReplicatedWorldLocation", 0x210, "StructProperty"},
            {"Widgets", 0x288, "ArrayProperty"},
            {"bAdditiveRotationAllowedByDefault", 0x399, "BoolProperty"},
            {"bZoomAllowedByDefault", 0x39B, "BoolProperty"},
            {"ZoomActionName", 0x39C, "NameProperty"},
            {"AdditiveOffsetCameraComponent", 0x3A8, "ObjectProperty"},
            {"DebugEllipseBoundsNumSides", 0x3B8, "IntProperty"},
            {"DebugBoundsLineThickness", 0x3BC, "FloatProperty"},
        }};
    };

    struct SpecialEventCursorWeaponComponent
    {
        static constexpr std::string_view Name = "SpecialEventCursorWeaponComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCursorPawnComponentSet = 0xC8;
            static constexpr std::uintptr_t CursorPawnComponentClass = 0xD8;
            static constexpr std::uintptr_t CursorModeTag = 0xE0;
            static constexpr std::uintptr_t bAlignFXToCursor = 0xE4;
            static constexpr std::uintptr_t CursorPawnComponent = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnCursorPawnComponentSet", 0xC8, "MulticastInlineDelegateProperty"},
            {"CursorPawnComponentClass", 0xD8, "ClassProperty"},
            {"CursorModeTag", 0xE0, "StructProperty"},
            {"bAlignFXToCursor", 0xE4, "BoolProperty"},
            {"CursorPawnComponent", 0xF0, "WeakObjectProperty"},
        }};
    };

    struct SpecialEventDataLayerConfig
    {
        static constexpr std::string_view Name = "SpecialEventDataLayerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t LayersToLoad = 0x28;
            static constexpr std::uintptr_t LayersToUnload = 0x38;
            static constexpr std::uintptr_t DisplayName = 0x48;
            static constexpr std::uintptr_t PhaseColor = 0x58;
            static constexpr std::uintptr_t BuildupPIEConsoleCommand = 0x68;
            static constexpr std::uintptr_t PIEConsoleCommand = 0x78;
            static constexpr std::uintptr_t PreviewSequence = 0x88;
            static constexpr std::uintptr_t bOpenSequenceByDefault = 0xA0;
            static constexpr std::uintptr_t bOpenMainEventSequence = 0xA1;
            static constexpr std::uintptr_t MainEventSequenceStartSeconds = 0xA4;
            static constexpr std::uintptr_t bSequenceStronglyRecommended = 0xA8;
            static constexpr std::uintptr_t bSkipPreviewPause = 0xA9;
            static constexpr std::uintptr_t PreviewPlaylist = 0xB0;
            static constexpr std::uintptr_t PreviewCameraId = 0xC8;
            static constexpr std::uintptr_t PluginsToActivateInPreview = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"LayersToLoad", 0x28, "ArrayProperty"},
            {"LayersToUnload", 0x38, "ArrayProperty"},
            {"DisplayName", 0x48, "TextProperty"},
            {"PhaseColor", 0x58, "StructProperty"},
            {"BuildupPIEConsoleCommand", 0x68, "StrProperty"},
            {"PIEConsoleCommand", 0x78, "StrProperty"},
            {"PreviewSequence", 0x88, "StructProperty"},
            {"bOpenSequenceByDefault", 0xA0, "BoolProperty"},
            {"bOpenMainEventSequence", 0xA1, "BoolProperty"},
            {"MainEventSequenceStartSeconds", 0xA4, "FloatProperty"},
            {"bSequenceStronglyRecommended", 0xA8, "BoolProperty"},
            {"bSkipPreviewPause", 0xA9, "BoolProperty"},
            {"PreviewPlaylist", 0xB0, "StructProperty"},
            {"PreviewCameraId", 0xC8, "NameProperty"},
            {"PluginsToActivateInPreview", 0xD0, "ArrayProperty"},
        }};
    };

    struct SpecialEventGameUserSettingsControllerComponent
    {
        static constexpr std::string_view Name = "SpecialEventGameUserSettingsControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLoaded = 0xC0;
            static constexpr std::uintptr_t Version = 0xD0;
            static constexpr std::uintptr_t MinTimeBetweenSaves = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnLoaded", 0xC0, "MulticastInlineDelegateProperty"},
            {"Version", 0xD0, "StrProperty"},
            {"MinTimeBetweenSaves", 0xE0, "FloatProperty"},
        }};
    };

    struct SpecialEventGameplayGlobals
    {
        static constexpr std::string_view Name = "SpecialEventGameplayGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpecialEventGameplayLibrary
    {
        static constexpr std::string_view Name = "SpecialEventGameplayLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpecialEventMeshLeaderboardManager
    {
        static constexpr std::string_view Name = "SpecialEventMeshLeaderboardManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGlobalLeaderboardUpdated = 0x288;
            static constexpr std::uintptr_t OnGlobalLeaderboardRemoved = 0x298;
            static constexpr std::uintptr_t OnLocalLeaderboardUpdated = 0x2A8;
            static constexpr std::uintptr_t OnLocalLeaderboardRemoved = 0x2B8;
            static constexpr std::uintptr_t LeaderboardConfig = 0x308;
            static constexpr std::uintptr_t GlobalLeaderboardPlayerDatas = 0x320;
            static constexpr std::uintptr_t LocalLeaderboardPlayerDatas = 0x398;
            static constexpr std::uintptr_t ScoreToEnterGlobalLeaderboard = 0x420;
            static constexpr std::uintptr_t MeshNetworkComponent = 0x458;
            static constexpr std::uintptr_t bIsZoneLeaderboard = 0x460;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnGlobalLeaderboardUpdated", 0x288, "MulticastInlineDelegateProperty"},
            {"OnGlobalLeaderboardRemoved", 0x298, "MulticastInlineDelegateProperty"},
            {"OnLocalLeaderboardUpdated", 0x2A8, "MulticastInlineDelegateProperty"},
            {"OnLocalLeaderboardRemoved", 0x2B8, "MulticastInlineDelegateProperty"},
            {"LeaderboardConfig", 0x308, "StructProperty"},
            {"GlobalLeaderboardPlayerDatas", 0x320, "StructProperty"},
            {"LocalLeaderboardPlayerDatas", 0x398, "StructProperty"},
            {"ScoreToEnterGlobalLeaderboard", 0x420, "FloatProperty"},
            {"MeshNetworkComponent", 0x458, "ObjectProperty"},
            {"bIsZoneLeaderboard", 0x460, "BoolProperty"},
        }};
    };

    struct SpecialEventMeshLeaderboardNetworkComponent
    {
        static constexpr std::string_view Name = "SpecialEventMeshLeaderboardNetworkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshNetworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RequestRate = 0x10C;
            static constexpr std::uintptr_t LocalLeaderboardRequests = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RequestRate", 0x10C, "FloatProperty"},
            {"LocalLeaderboardRequests", 0x110, "ArrayProperty"},
        }};
    };

    struct SpecialEventMeshMetadataExampleActor
    {
        static constexpr std::string_view Name = "SpecialEventMeshMetadataExampleActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MetadataExampleStruct = 0x278;
            static constexpr std::uintptr_t MeshNetworkComponent = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MetadataExampleStruct", 0x278, "StructProperty"},
            {"MeshNetworkComponent", 0x290, "ObjectProperty"},
        }};
    };

    struct SpecialEventMusicClockManager
    {
        static constexpr std::string_view Name = "SpecialEventMusicClockManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicClock = 0x278;
            static constexpr std::uintptr_t AudioComponent = 0x280;
            static constexpr std::uintptr_t bRegisterWithMusicEventSubsystem = 0x288;
            static constexpr std::uintptr_t MusicEventSubsystemEventTag = 0x28C;
            static constexpr std::uintptr_t MusicEventSubsystemBehaviorTags = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MusicClock", 0x278, "ObjectProperty"},
            {"AudioComponent", 0x280, "WeakObjectProperty"},
            {"bRegisterWithMusicEventSubsystem", 0x288, "BoolProperty"},
            {"MusicEventSubsystemEventTag", 0x28C, "StructProperty"},
            {"MusicEventSubsystemBehaviorTags", 0x290, "StructProperty"},
        }};
    };

    struct SpecialEventMusicClockManagerComponent
    {
        static constexpr std::string_view Name = "SpecialEventMusicClockManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicClockManager = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MusicClockManager", 0x240, "ObjectProperty"},
        }};
    };

    struct SpecialEventPawnComponent_InvertedMovementInputOverride
    {
        static constexpr std::string_view Name = "SpecialEventPawnComponent_InvertedMovementInputOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct SpecialEventPhase
    {
        static constexpr std::string_view Name = "SpecialEventPhase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PhaseTag = 0x290;
            static constexpr std::uintptr_t LevelSequenceTime = 0x294;
            static constexpr std::uintptr_t bApplyGameplayEffects = 0x298;
            static constexpr std::uintptr_t GameplayEffectsToApply = 0x2A0;
            static constexpr std::uintptr_t ControllerComponentsToApplyInfoList = 0x2B0;
            static constexpr std::uintptr_t PawnComponentsToApplyInfoList = 0x2C0;
            static constexpr std::uintptr_t CameraModifierToApply = 0x2D0;
            static constexpr std::uintptr_t bRemoveModifierOnPhaseDeactivation = 0x2D8;
            static constexpr std::uintptr_t bRemoveGameplayEffects = 0x2D9;
            static constexpr std::uintptr_t GameplayEffectsToRemove = 0x2E0;
            static constexpr std::uintptr_t ControllerComponentsToRemoveInfoList = 0x2F0;
            static constexpr std::uintptr_t PawnComponentsToRemoveInfoList = 0x300;
            static constexpr std::uintptr_t AppliedCameraModifier = 0x310;
            static constexpr std::uintptr_t SpecialEventScript = 0x318;
            static constexpr std::uintptr_t PhaseState = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PhaseTag", 0x290, "StructProperty"},
            {"LevelSequenceTime", 0x294, "FloatProperty"},
            {"bApplyGameplayEffects", 0x298, "BoolProperty"},
            {"GameplayEffectsToApply", 0x2A0, "ArrayProperty"},
            {"ControllerComponentsToApplyInfoList", 0x2B0, "ArrayProperty"},
            {"PawnComponentsToApplyInfoList", 0x2C0, "ArrayProperty"},
            {"CameraModifierToApply", 0x2D0, "ClassProperty"},
            {"bRemoveModifierOnPhaseDeactivation", 0x2D8, "BoolProperty"},
            {"bRemoveGameplayEffects", 0x2D9, "BoolProperty"},
            {"GameplayEffectsToRemove", 0x2E0, "ArrayProperty"},
            {"ControllerComponentsToRemoveInfoList", 0x2F0, "ArrayProperty"},
            {"PawnComponentsToRemoveInfoList", 0x300, "ArrayProperty"},
            {"AppliedCameraModifier", 0x310, "ObjectProperty"},
            {"SpecialEventScript", 0x318, "WeakObjectProperty"},
            {"PhaseState", 0x320, "EnumProperty"},
        }};
    };

    struct SpecialEventPlayerMannequin
    {
        static constexpr std::string_view Name = "SpecialEventPlayerMannequin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerMannequin";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization = 0x908;
            static constexpr std::uintptr_t bDisableCollisionOnBeginPlay = 0x908;
            static constexpr std::uintptr_t bDisableComponentsTickOnServer = 0x908;
            static constexpr std::uintptr_t bRegisterWithSpecialEventMutatorOnClient = 0x908;
            static constexpr std::uintptr_t PlayerIndex = 0x90C;
            static constexpr std::uintptr_t bUpdateLoadoutByPlayerIndexAtStartup = 0x910;
            static constexpr std::uintptr_t bHideUntilPlayerIndexLoadoutApplied = 0x938;
            static constexpr std::uintptr_t DefaultCosmeticLoadouts = 0x960;
            static constexpr std::uintptr_t OverrideCosmeticLoadouts = 0x970;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization", 0x908, "BoolProperty"},
            {"bDisableCollisionOnBeginPlay", 0x908, "BoolProperty"},
            {"bDisableComponentsTickOnServer", 0x908, "BoolProperty"},
            {"bRegisterWithSpecialEventMutatorOnClient", 0x908, "BoolProperty"},
            {"PlayerIndex", 0x90C, "IntProperty"},
            {"bUpdateLoadoutByPlayerIndexAtStartup", 0x910, "StructProperty"},
            {"bHideUntilPlayerIndexLoadoutApplied", 0x938, "StructProperty"},
            {"DefaultCosmeticLoadouts", 0x960, "ArrayProperty"},
            {"OverrideCosmeticLoadouts", 0x970, "ArrayProperty"},
        }};
    };

    struct SpecialEventPlayerSpawnLocationComponent
    {
        static constexpr std::string_view Name = "SpecialEventPlayerSpawnLocationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Priority = 0x240;
            static constexpr std::uintptr_t PlayersReservations = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Priority", 0x240, "IntProperty"},
            {"PlayersReservations", 0x248, "ArrayProperty"},
        }};
    };

    struct SpecialEventPreviewCamera
    {
        static constexpr std::string_view Name = "SpecialEventPreviewCamera";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraActor";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraId = 0xA50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraId", 0xA50, "NameProperty"},
        }};
    };

    struct SpecialEventPreviewPlaybackSubsystem
    {
        static constexpr std::string_view Name = "SpecialEventPreviewPlaybackSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpecialEventPreviewUnpauseVolume
    {
        static constexpr std::string_view Name = "SpecialEventPreviewUnpauseVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TriggerVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t ClapperBillboard = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClapperBillboard", 0x2B0, "ObjectProperty"},
        }};
    };

    struct SpecialEventRewindComponent
    {
        static constexpr std::string_view Name = "SpecialEventRewindComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxRecordingDuration = 0xC0;
            static constexpr std::uintptr_t LocalRecordingFPS = 0xC4;
            static constexpr std::uintptr_t ReplicatedRecordingFPS = 0xC8;
            static constexpr std::uintptr_t bAutoStartRecording = 0xCC;
            static constexpr std::uintptr_t RewindLerpTime = 0xD0;
            static constexpr std::uintptr_t DefaultRewindDuration = 0xD4;
            static constexpr std::uintptr_t DefaultRewindPlaybackSpeed = 0xD8;
            static constexpr std::uintptr_t StateData = 0xDC;
            static constexpr std::uintptr_t ReplicatedRewindDuration = 0xE4;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MaxRecordingDuration", 0xC0, "FloatProperty"},
            {"LocalRecordingFPS", 0xC4, "FloatProperty"},
            {"ReplicatedRecordingFPS", 0xC8, "FloatProperty"},
            {"bAutoStartRecording", 0xCC, "BoolProperty"},
            {"RewindLerpTime", 0xD0, "FloatProperty"},
            {"DefaultRewindDuration", 0xD4, "FloatProperty"},
            {"DefaultRewindPlaybackSpeed", 0xD8, "FloatProperty"},
            {"StateData", 0xDC, "StructProperty"},
            {"ReplicatedRewindDuration", 0xE4, "FloatProperty"},
        }};
    };

    struct SpecialEventRewindComponent_PlayerPawn
    {
        static constexpr std::string_view Name = "SpecialEventRewindComponent_PlayerPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpecialEventRewindComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bStartServerRecordingOnLastGroundFrame = 0xE8;
            static constexpr std::uintptr_t MinGroundedTimeForAnchor = 0xEC;
            static constexpr std::uintptr_t AnchorLagTime = 0xF0;
            static constexpr std::uintptr_t RewindRotationBlendTime = 0xF4;
            static constexpr std::uintptr_t RewindAnimLayerClass = 0xF8;
            static constexpr std::uintptr_t AnimReplayPoseSampleRateHz = 0x100;
            static constexpr std::uintptr_t AnimReplaySimulatedPoseSampleRateHz = 0x104;
            static constexpr std::uintptr_t AnimReplayGroundedPoseSampleRateHz = 0x108;
            static constexpr std::uintptr_t AnimReplayPoseWindowSeconds = 0x10C;
            static constexpr std::uintptr_t AnimReplayBlendOutTime = 0x110;
            static constexpr std::uintptr_t AnimReplayBlendOutLeadTime = 0x114;
            static constexpr std::uintptr_t bEndRewindWithLanding = 0x118;
            static constexpr std::uintptr_t ReplicatedRecording = 0x140;
            static constexpr std::uintptr_t ReplicatedRecordingFastArray = 0x1B8;
            static constexpr std::uintptr_t CurrentlyLinkedAnimLayer = 0x448;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bStartServerRecordingOnLastGroundFrame", 0xE8, "BoolProperty"},
            {"MinGroundedTimeForAnchor", 0xEC, "FloatProperty"},
            {"AnchorLagTime", 0xF0, "FloatProperty"},
            {"RewindRotationBlendTime", 0xF4, "FloatProperty"},
            {"RewindAnimLayerClass", 0xF8, "ClassProperty"},
            {"AnimReplayPoseSampleRateHz", 0x100, "FloatProperty"},
            {"AnimReplaySimulatedPoseSampleRateHz", 0x104, "FloatProperty"},
            {"AnimReplayGroundedPoseSampleRateHz", 0x108, "FloatProperty"},
            {"AnimReplayPoseWindowSeconds", 0x10C, "FloatProperty"},
            {"AnimReplayBlendOutTime", 0x110, "FloatProperty"},
            {"AnimReplayBlendOutLeadTime", 0x114, "FloatProperty"},
            {"bEndRewindWithLanding", 0x118, "BoolProperty"},
            {"ReplicatedRecording", 0x140, "StructProperty"},
            {"ReplicatedRecordingFastArray", 0x1B8, "StructProperty"},
            {"CurrentlyLinkedAnimLayer", 0x448, "ClassProperty"},
        }};
    };

    struct SpecialEventScript
    {
        static constexpr std::string_view Name = "SpecialEventScript";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSpecialEventPhaseActivated = 0x278;
            static constexpr std::uintptr_t OnSpecialEventPhaseDeactivated = 0x288;
            static constexpr std::uintptr_t PreEventManager = 0x2C8;
            static constexpr std::uintptr_t PhaseInfoArray = 0x2D0;
            static constexpr std::uintptr_t MainEventGameplayModifier = 0x2E0;
            static constexpr std::uintptr_t DropDeadWindowSizeInSeconds = 0x2E8;
            static constexpr std::uintptr_t DelayAfterConentLoad = 0x310;
            static constexpr std::uintptr_t bWaitForSEMutator = 0x338;
            static constexpr std::uintptr_t FinalPreEventPhase = 0x33C;
            static constexpr std::uintptr_t bWaitForEventLoadToEndPreEvent = 0x340;
            static constexpr std::uintptr_t bWaitForWarmupToEnd = 0x348;
            static constexpr std::uintptr_t DelayAfterWarmup = 0x370;
            static constexpr std::uintptr_t ForceReturnToMainMenuTime = 0x398;
            static constexpr std::uintptr_t ForceReturnToMainMenuTimeRandomness = 0x3C0;
            static constexpr std::uintptr_t MinDelayReturnToMainMenu = 0x3E8;
            static constexpr std::uintptr_t MaxDelayReturnToMainMenu = 0x410;
            static constexpr std::uintptr_t bPreloadAllLevelsOnServer = 0x438;
            static constexpr std::uintptr_t bAllowGarbageCollectionAfterUnload = 0x460;
            static constexpr std::uintptr_t bFullPurgeGC = 0x488;
            static constexpr std::uintptr_t bEnableEndOfEventTimer = 0x4B0;
            static constexpr std::uintptr_t ReplicatedActivePhaseIndex = 0x4D8;
            static constexpr std::uintptr_t MeshNetworkComponent = 0x500;
            static constexpr std::uintptr_t bShouldActivateNightNight = 0x520;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"OnSpecialEventPhaseActivated", 0x278, "MulticastInlineDelegateProperty"},
            {"OnSpecialEventPhaseDeactivated", 0x288, "MulticastInlineDelegateProperty"},
            {"PreEventManager", 0x2C8, "ObjectProperty"},
            {"PhaseInfoArray", 0x2D0, "ArrayProperty"},
            {"MainEventGameplayModifier", 0x2E0, "ObjectProperty"},
            {"DropDeadWindowSizeInSeconds", 0x2E8, "StructProperty"},
            {"DelayAfterConentLoad", 0x310, "StructProperty"},
            {"bWaitForSEMutator", 0x338, "BoolProperty"},
            {"FinalPreEventPhase", 0x33C, "StructProperty"},
            {"bWaitForEventLoadToEndPreEvent", 0x340, "BoolProperty"},
            {"bWaitForWarmupToEnd", 0x348, "StructProperty"},
            {"DelayAfterWarmup", 0x370, "StructProperty"},
            {"ForceReturnToMainMenuTime", 0x398, "StructProperty"},
            {"ForceReturnToMainMenuTimeRandomness", 0x3C0, "StructProperty"},
            {"MinDelayReturnToMainMenu", 0x3E8, "StructProperty"},
            {"MaxDelayReturnToMainMenu", 0x410, "StructProperty"},
            {"bPreloadAllLevelsOnServer", 0x438, "StructProperty"},
            {"bAllowGarbageCollectionAfterUnload", 0x460, "StructProperty"},
            {"bFullPurgeGC", 0x488, "StructProperty"},
            {"bEnableEndOfEventTimer", 0x4B0, "StructProperty"},
            {"ReplicatedActivePhaseIndex", 0x4D8, "IntProperty"},
            {"MeshNetworkComponent", 0x500, "ObjectProperty"},
            {"bShouldActivateNightNight", 0x520, "BoolProperty"},
        }};
    };

    struct SpecialEventScriptMeshActor
    {
        static constexpr std::string_view Name = "SpecialEventScriptMeshActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t RootStartTime = 0x2A0;
            static constexpr std::uintptr_t bIsNightNightEnabled = 0x2A8;
            static constexpr std::uintptr_t MaxEventPlaybackCount = 0x2AC;
            static constexpr std::uintptr_t bCameraShiftEnabled = 0x2B0;
            static constexpr std::uintptr_t bExitScreenDisabled = 0x2B1;
            static constexpr std::uintptr_t bExitButtonDisabled = 0x2B2;
            static constexpr std::uintptr_t bPlaybackButtonDisabled = 0x2B3;
            static constexpr std::uintptr_t PlaybackVuid = 0x2B8;
            static constexpr std::uintptr_t bDisableBackfill = 0x2C8;
            static constexpr std::uintptr_t bActivateSafeZoneMutator = 0x2C9;
            static constexpr std::uintptr_t bPauseSafeZonesAtIndex = 0x2CA;
            static constexpr std::uintptr_t bPawnsCanBeDamaged = 0x2CB;
            static constexpr std::uintptr_t InitialPreEventPhase = 0x2CC;
            static constexpr std::uintptr_t TeleportPlayersToSafeZoneRequestId = 0x2D0;
            static constexpr std::uintptr_t ForceEmoteTemplateId = 0x2D8;
            static constexpr std::uintptr_t ForceEmoteRequestId = 0x2E8;
            static constexpr std::uintptr_t CalendarEventName = 0x2F0;
            static constexpr std::uintptr_t CalenderEventOffsetInSeconds = 0x300;
            static constexpr std::uintptr_t EncryptionKeyDeliveryTimeOffset = 0x304;
            static constexpr std::uintptr_t bRestoreFromMeshMetaData = 0x308;
            static constexpr std::uintptr_t bShouldSpawnSafeZoneMutator = 0x309;
            static constexpr std::uintptr_t SafeZoneFinalLocationXCoord = 0x30C;
            static constexpr std::uintptr_t SafeZoneFinalLocationYCoord = 0x310;
            static constexpr std::uintptr_t bSafeZoneFinalLocationSet = 0x314;
            static constexpr std::uintptr_t SafeZonePhaseToForcePause = 0x318;
            static constexpr std::uintptr_t bExcludeBotsFromInvulnerability = 0x31C;
            static constexpr std::uintptr_t InvulnerabilityGameplayCue = 0x320;
            static constexpr std::uintptr_t bForceAllSafeZonesToFinalLocation = 0x324;
            static constexpr std::uintptr_t TeleportRingRadius = 0x328;
            static constexpr std::uintptr_t bTeleportExcludePlayersAlreadyInRadius = 0x32C;
            static constexpr std::uintptr_t bUseRingRadiusForExclusion = 0x32D;
            static constexpr std::uintptr_t TeleportSpawnAltitude = 0x330;
            static constexpr std::uintptr_t TeleportMinPlayerSpacing = 0x334;
            static constexpr std::uintptr_t TeleportShapeInwardScaleFactor = 0x338;
            static constexpr std::uintptr_t TeleportBatchSize = 0x33C;
            static constexpr std::uintptr_t TeleportBatchDelaySeconds = 0x340;
            static constexpr std::uintptr_t StasisReleaseBatchSize = 0x344;
            static constexpr std::uintptr_t StasisReleaseBatchDelaySeconds = 0x348;
            static constexpr std::uintptr_t MeshNetworkComponent = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 39> Properties{{
            {"RootStartTime", 0x2A0, "StructProperty"},
            {"bIsNightNightEnabled", 0x2A8, "BoolProperty"},
            {"MaxEventPlaybackCount", 0x2AC, "IntProperty"},
            {"bCameraShiftEnabled", 0x2B0, "BoolProperty"},
            {"bExitScreenDisabled", 0x2B1, "BoolProperty"},
            {"bExitButtonDisabled", 0x2B2, "BoolProperty"},
            {"bPlaybackButtonDisabled", 0x2B3, "BoolProperty"},
            {"PlaybackVuid", 0x2B8, "StrProperty"},
            {"bDisableBackfill", 0x2C8, "BoolProperty"},
            {"bActivateSafeZoneMutator", 0x2C9, "BoolProperty"},
            {"bPauseSafeZonesAtIndex", 0x2CA, "BoolProperty"},
            {"bPawnsCanBeDamaged", 0x2CB, "BoolProperty"},
            {"InitialPreEventPhase", 0x2CC, "StructProperty"},
            {"TeleportPlayersToSafeZoneRequestId", 0x2D0, "IntProperty"},
            {"ForceEmoteTemplateId", 0x2D8, "StrProperty"},
            {"ForceEmoteRequestId", 0x2E8, "IntProperty"},
            {"CalendarEventName", 0x2F0, "StrProperty"},
            {"CalenderEventOffsetInSeconds", 0x300, "FloatProperty"},
            {"EncryptionKeyDeliveryTimeOffset", 0x304, "FloatProperty"},
            {"bRestoreFromMeshMetaData", 0x308, "BoolProperty"},
            {"bShouldSpawnSafeZoneMutator", 0x309, "BoolProperty"},
            {"SafeZoneFinalLocationXCoord", 0x30C, "FloatProperty"},
            {"SafeZoneFinalLocationYCoord", 0x310, "FloatProperty"},
            {"bSafeZoneFinalLocationSet", 0x314, "BoolProperty"},
            {"SafeZonePhaseToForcePause", 0x318, "IntProperty"},
            {"bExcludeBotsFromInvulnerability", 0x31C, "BoolProperty"},
            {"InvulnerabilityGameplayCue", 0x320, "StructProperty"},
            {"bForceAllSafeZonesToFinalLocation", 0x324, "BoolProperty"},
            {"TeleportRingRadius", 0x328, "FloatProperty"},
            {"bTeleportExcludePlayersAlreadyInRadius", 0x32C, "BoolProperty"},
            {"bUseRingRadiusForExclusion", 0x32D, "BoolProperty"},
            {"TeleportSpawnAltitude", 0x330, "FloatProperty"},
            {"TeleportMinPlayerSpacing", 0x334, "FloatProperty"},
            {"TeleportShapeInwardScaleFactor", 0x338, "FloatProperty"},
            {"TeleportBatchSize", 0x33C, "IntProperty"},
            {"TeleportBatchDelaySeconds", 0x340, "FloatProperty"},
            {"StasisReleaseBatchSize", 0x344, "IntProperty"},
            {"StasisReleaseBatchDelaySeconds", 0x348, "FloatProperty"},
            {"MeshNetworkComponent", 0x360, "ObjectProperty"},
        }};
    };

    struct SpecialEventScriptMeshActor_RelevantToServers
    {
        static constexpr std::string_view Name = "SpecialEventScriptMeshActor_RelevantToServers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpecialEventScriptMeshActor";
        struct Offsets
        {
            static constexpr std::uintptr_t RootStartTime = 0x2A0;
            static constexpr std::uintptr_t bIsNightNightEnabled = 0x2A8;
            static constexpr std::uintptr_t MaxEventPlaybackCount = 0x2AC;
            static constexpr std::uintptr_t bCameraShiftEnabled = 0x2B0;
            static constexpr std::uintptr_t bExitScreenDisabled = 0x2B1;
            static constexpr std::uintptr_t bExitButtonDisabled = 0x2B2;
            static constexpr std::uintptr_t bPlaybackButtonDisabled = 0x2B3;
            static constexpr std::uintptr_t PlaybackVuid = 0x2B8;
            static constexpr std::uintptr_t bDisableBackfill = 0x2C8;
            static constexpr std::uintptr_t bActivateSafeZoneMutator = 0x2C9;
            static constexpr std::uintptr_t bPauseSafeZonesAtIndex = 0x2CA;
            static constexpr std::uintptr_t bPawnsCanBeDamaged = 0x2CB;
            static constexpr std::uintptr_t InitialPreEventPhase = 0x2CC;
            static constexpr std::uintptr_t TeleportPlayersToSafeZoneRequestId = 0x2D0;
            static constexpr std::uintptr_t ForceEmoteTemplateId = 0x2D8;
            static constexpr std::uintptr_t ForceEmoteRequestId = 0x2E8;
            static constexpr std::uintptr_t CalendarEventName = 0x2F0;
            static constexpr std::uintptr_t CalenderEventOffsetInSeconds = 0x300;
            static constexpr std::uintptr_t EncryptionKeyDeliveryTimeOffset = 0x304;
            static constexpr std::uintptr_t bRestoreFromMeshMetaData = 0x308;
            static constexpr std::uintptr_t bShouldSpawnSafeZoneMutator = 0x309;
            static constexpr std::uintptr_t SafeZoneFinalLocationXCoord = 0x30C;
            static constexpr std::uintptr_t SafeZoneFinalLocationYCoord = 0x310;
            static constexpr std::uintptr_t bSafeZoneFinalLocationSet = 0x314;
            static constexpr std::uintptr_t SafeZonePhaseToForcePause = 0x318;
            static constexpr std::uintptr_t bExcludeBotsFromInvulnerability = 0x31C;
            static constexpr std::uintptr_t InvulnerabilityGameplayCue = 0x320;
            static constexpr std::uintptr_t bForceAllSafeZonesToFinalLocation = 0x324;
            static constexpr std::uintptr_t TeleportRingRadius = 0x328;
            static constexpr std::uintptr_t bTeleportExcludePlayersAlreadyInRadius = 0x32C;
            static constexpr std::uintptr_t bUseRingRadiusForExclusion = 0x32D;
            static constexpr std::uintptr_t TeleportSpawnAltitude = 0x330;
            static constexpr std::uintptr_t TeleportMinPlayerSpacing = 0x334;
            static constexpr std::uintptr_t TeleportShapeInwardScaleFactor = 0x338;
            static constexpr std::uintptr_t TeleportBatchSize = 0x33C;
            static constexpr std::uintptr_t TeleportBatchDelaySeconds = 0x340;
            static constexpr std::uintptr_t StasisReleaseBatchSize = 0x344;
            static constexpr std::uintptr_t StasisReleaseBatchDelaySeconds = 0x348;
            static constexpr std::uintptr_t MeshNetworkComponent = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 39> Properties{{
            {"RootStartTime", 0x2A0, "StructProperty"},
            {"bIsNightNightEnabled", 0x2A8, "BoolProperty"},
            {"MaxEventPlaybackCount", 0x2AC, "IntProperty"},
            {"bCameraShiftEnabled", 0x2B0, "BoolProperty"},
            {"bExitScreenDisabled", 0x2B1, "BoolProperty"},
            {"bExitButtonDisabled", 0x2B2, "BoolProperty"},
            {"bPlaybackButtonDisabled", 0x2B3, "BoolProperty"},
            {"PlaybackVuid", 0x2B8, "StrProperty"},
            {"bDisableBackfill", 0x2C8, "BoolProperty"},
            {"bActivateSafeZoneMutator", 0x2C9, "BoolProperty"},
            {"bPauseSafeZonesAtIndex", 0x2CA, "BoolProperty"},
            {"bPawnsCanBeDamaged", 0x2CB, "BoolProperty"},
            {"InitialPreEventPhase", 0x2CC, "StructProperty"},
            {"TeleportPlayersToSafeZoneRequestId", 0x2D0, "IntProperty"},
            {"ForceEmoteTemplateId", 0x2D8, "StrProperty"},
            {"ForceEmoteRequestId", 0x2E8, "IntProperty"},
            {"CalendarEventName", 0x2F0, "StrProperty"},
            {"CalenderEventOffsetInSeconds", 0x300, "FloatProperty"},
            {"EncryptionKeyDeliveryTimeOffset", 0x304, "FloatProperty"},
            {"bRestoreFromMeshMetaData", 0x308, "BoolProperty"},
            {"bShouldSpawnSafeZoneMutator", 0x309, "BoolProperty"},
            {"SafeZoneFinalLocationXCoord", 0x30C, "FloatProperty"},
            {"SafeZoneFinalLocationYCoord", 0x310, "FloatProperty"},
            {"bSafeZoneFinalLocationSet", 0x314, "BoolProperty"},
            {"SafeZonePhaseToForcePause", 0x318, "IntProperty"},
            {"bExcludeBotsFromInvulnerability", 0x31C, "BoolProperty"},
            {"InvulnerabilityGameplayCue", 0x320, "StructProperty"},
            {"bForceAllSafeZonesToFinalLocation", 0x324, "BoolProperty"},
            {"TeleportRingRadius", 0x328, "FloatProperty"},
            {"bTeleportExcludePlayersAlreadyInRadius", 0x32C, "BoolProperty"},
            {"bUseRingRadiusForExclusion", 0x32D, "BoolProperty"},
            {"TeleportSpawnAltitude", 0x330, "FloatProperty"},
            {"TeleportMinPlayerSpacing", 0x334, "FloatProperty"},
            {"TeleportShapeInwardScaleFactor", 0x338, "FloatProperty"},
            {"TeleportBatchSize", 0x33C, "IntProperty"},
            {"TeleportBatchDelaySeconds", 0x340, "FloatProperty"},
            {"StasisReleaseBatchSize", 0x344, "IntProperty"},
            {"StasisReleaseBatchDelaySeconds", 0x348, "FloatProperty"},
            {"MeshNetworkComponent", 0x360, "ObjectProperty"},
        }};
    };

    struct SpecialEventSpawnPointComponent
    {
        static constexpr std::string_view Name = "SpecialEventSpawnPointComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnPointTags = 0x560;
            static constexpr std::uintptr_t bEnabled = 0x580;
            static constexpr std::uintptr_t Capacity = 0x584;
            static constexpr std::uintptr_t bMoveable = 0x588;
            static constexpr std::uintptr_t bAttachPawnToOwner = 0x589;
            static constexpr std::uintptr_t AttachTargetOverride = 0x590;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SpawnPointTags", 0x560, "StructProperty"},
            {"bEnabled", 0x580, "BoolProperty"},
            {"Capacity", 0x584, "IntProperty"},
            {"bMoveable", 0x588, "BoolProperty"},
            {"bAttachPawnToOwner", 0x589, "BoolProperty"},
            {"AttachTargetOverride", 0x590, "ObjectProperty"},
        }};
    };

    struct SpecialEventStatComponent
    {
        static constexpr std::string_view Name = "SpecialEventStatComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnValueChangedDelegate = 0xC0;
            static constexpr std::uintptr_t StatDefinitions = 0xD0;
            static constexpr std::uintptr_t StatFastArray = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnValueChangedDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"StatDefinitions", 0xD0, "ArrayProperty"},
            {"StatFastArray", 0xE0, "StructProperty"},
        }};
    };

    struct SpecialRelevancyHealthComponent
    {
        static constexpr std::string_view Name = "SpecialRelevancyHealthComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpecialRelevancyComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RelevancyDeathTimeLength = 0xD0;
            static constexpr std::uintptr_t bSetLifespanOnLastRelevancyDeath = 0xF8;
            static constexpr std::uintptr_t OwnerMaxHealthCached = 0xFC;
            static constexpr std::uintptr_t ReplicatedDamageRecords = 0x100;
            static constexpr std::uintptr_t OnSpecialRelevancyDeath = 0x110;
            static constexpr std::uintptr_t OnSpecialRelevancyDamage = 0x120;
            static constexpr std::uintptr_t CachedMutator = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RelevancyDeathTimeLength", 0xD0, "StructProperty"},
            {"bSetLifespanOnLastRelevancyDeath", 0xF8, "BoolProperty"},
            {"OwnerMaxHealthCached", 0xFC, "FloatProperty"},
            {"ReplicatedDamageRecords", 0x100, "ArrayProperty"},
            {"OnSpecialRelevancyDeath", 0x110, "MulticastInlineDelegateProperty"},
            {"OnSpecialRelevancyDamage", 0x120, "MulticastInlineDelegateProperty"},
            {"CachedMutator", 0x130, "ObjectProperty"},
        }};
    };

}
