#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HazelnutSpreadRuntime
{
    struct FortAIQuestsModifier_HazelnutSpread
    {
        static constexpr std::string_view Name = "FortAIQuestsModifier_HazelnutSpread";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIQuestsModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AverageDuelWinsMultiplierForDuelsWon = 0x40;
            static constexpr std::uintptr_t CanFallbackToRandomAmountsForWins = 0x68;
            static constexpr std::uintptr_t MaxFallbackRandomWins = 0x90;
            static constexpr std::uintptr_t CanUpdateWinsAfterFirstPlayerLogin = 0xB8;
            static constexpr std::uintptr_t NumAdditionalWinsPostLogin = 0xE0;
            static constexpr std::uintptr_t BountyManagerComp = 0x108;
            static constexpr std::uintptr_t PersistenceComp = 0x110;
            static constexpr std::uintptr_t FirstLoginPlayerPersistenceComp = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AverageDuelWinsMultiplierForDuelsWon", 0x40, "StructProperty"},
            {"CanFallbackToRandomAmountsForWins", 0x68, "StructProperty"},
            {"MaxFallbackRandomWins", 0x90, "StructProperty"},
            {"CanUpdateWinsAfterFirstPlayerLogin", 0xB8, "StructProperty"},
            {"NumAdditionalWinsPostLogin", 0xE0, "StructProperty"},
            {"BountyManagerComp", 0x108, "ObjectProperty"},
            {"PersistenceComp", 0x110, "ObjectProperty"},
            {"FirstLoginPlayerPersistenceComp", 0x118, "WeakObjectProperty"},
        }};
    };

    struct FortCheatManager_HazelnutSpread
    {
        static constexpr std::string_view Name = "FortCheatManager_HazelnutSpread";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortHazelnutSpread_DuelAbility
    {
        static constexpr std::string_view Name = "FortHazelnutSpread_DuelAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationType = 0x3A8;
            static constexpr std::uintptr_t EffectContainers = 0x3B0;
            static constexpr std::uintptr_t GameplayEffectContainers = 0x748;
            static constexpr std::uintptr_t DynamicGameplayEffectContainers = 0x758;
            static constexpr std::uintptr_t OwnerPreviewImageOverrideTags = 0x768;
            static constexpr std::uintptr_t ProjectileClass = 0x788;
            static constexpr std::uintptr_t bAllowBlueprintReplicatedVariables = 0x790;
            static constexpr std::uintptr_t DamageStatHandle = 0x798;
            static constexpr std::uintptr_t AbilityCosts = 0x7A8;
            static constexpr std::uintptr_t Costs = 0x7B8;
            static constexpr std::uintptr_t bApplyingCostsEnabled = 0x7C8;
            static constexpr std::uintptr_t bShowWidgetForCosts = 0x7C8;
            static constexpr std::uintptr_t MovementCancellationLeashLength = 0x7D0;
            static constexpr std::uintptr_t ExplicitCooldownDuration = 0x7F8;
            static constexpr std::uintptr_t ExplicitCooldownTags = 0x820;
            static constexpr std::uintptr_t ExplicitCooldownAssetTags = 0x840;
            static constexpr std::uintptr_t CustomFiringSequenceLength = 0x860;
            static constexpr std::uintptr_t bDisableMoveCombining = 0x864;
            static constexpr std::uintptr_t bIgnoreClientActivationAttempts = 0x864;
            static constexpr std::uintptr_t bPersistOnDeath = 0x864;
            static constexpr std::uintptr_t bRequireServerTimeValidationPass = 0x864;
            static constexpr std::uintptr_t bRequireServerValidationPass = 0x864;
            static constexpr std::uintptr_t bStartWithCooldown = 0x864;
            static constexpr std::uintptr_t bStopsAIBehaviorLogic = 0x864;
            static constexpr std::uintptr_t bStopsAIMovement = 0x864;
            static constexpr std::uintptr_t bForceNormalAILOD = 0x865;
            static constexpr std::uintptr_t bStopsRVOAvoidance = 0x865;
            static constexpr std::uintptr_t MinimumRequiredAILODLevel = 0x868;
            static constexpr std::uintptr_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bAcceptTargetActorVehicleForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bRelevantForAIDespawning = 0x86C;
            static constexpr std::uintptr_t bUseOwnerInstigatorAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseTetheredPawnAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseAIFireLocationAndRotation = 0x86D;
            static constexpr std::uintptr_t AIWeaponUsage = 0x870;
            static constexpr std::uintptr_t WeaponTestApplicationTag = 0x874;
            static constexpr std::uintptr_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling = 0x878;
            static constexpr std::uintptr_t bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast = 0x878;
            static constexpr std::uintptr_t bVerifyFireOffsetIsNotObstructedByWorldGeometry = 0x878;
            static constexpr std::uintptr_t FireOffset = 0x880;
            static constexpr std::uintptr_t ActivationNoiseRange = 0x898;
            static constexpr std::uintptr_t ImpactNoiseRange = 0x89C;
            static constexpr std::uintptr_t ActivationNoiseLoudness = 0x8A0;
            static constexpr std::uintptr_t ImpactNoiseLoudness = 0x8A4;
            static constexpr std::uintptr_t ProhibitedTargetTags = 0x8A8;
            static constexpr std::uintptr_t bLeadPawnTargets = 0x8C9;
            static constexpr std::uintptr_t DesiredThrowAngle = 0x8CC;
            static constexpr std::uintptr_t MaxYawAngleToFire = 0x8D0;
            static constexpr std::uintptr_t bClampMaxYawAngleToFire = 0x8D4;
            static constexpr std::uintptr_t bUseTargetActorLocation = 0x8D5;
            static constexpr std::uintptr_t InitialAccuracyMax = 0x8D8;
            static constexpr std::uintptr_t InitialAccuracyMin = 0x8DC;
            static constexpr std::uintptr_t TargetAccuracyMax = 0x8E0;
            static constexpr std::uintptr_t TargetAccuracyMin = 0x8E4;
            static constexpr std::uintptr_t MinAccuracyDistance = 0x8E8;
            static constexpr std::uintptr_t MaxAccuracyDistance = 0x8EC;
            static constexpr std::uintptr_t AccuracyDistanceMultiplier = 0x8F0;
            static constexpr std::uintptr_t NumUsesToReachTargetAccuracy = 0x8F4;
            static constexpr std::uintptr_t UseCount = 0x8F8;
            static constexpr std::uintptr_t bIsMobileToggle = 0x8FC;
            static constexpr std::uintptr_t bActivateIfTagsAlreadyPresent = 0x8FD;
            static constexpr std::uintptr_t GameplayAbilityBehaviorDistanceData = 0x908;
            static constexpr std::uintptr_t MontageInfo = 0x978;
            static constexpr std::uintptr_t PreviousMontageInfo = 0x9D0;
            static constexpr std::uintptr_t ModList = 0xA28;
            static constexpr std::uintptr_t AbilityWeapon = 0xA38;
            static constexpr std::uintptr_t DisplayName = 0xA40;
            static constexpr std::uintptr_t Description = 0xA50;
            static constexpr std::uintptr_t SmallPreviewImageOverride = 0xA68;
            static constexpr std::uintptr_t ChargeStartTime = 0xA80;
            static constexpr std::uintptr_t ChargeState = 0xA88;
            static constexpr std::uintptr_t ToolTip = 0xAD0;
            static constexpr std::uintptr_t StatList = 0xAD8;
            static constexpr std::uintptr_t ActorTrackingSettings = 0xAE8;
            static constexpr std::uintptr_t AnalyticsTags = 0xB10;
            static constexpr std::uintptr_t TagChangedActions = 0xB30;
        };

        inline static constexpr std::array<PropertyInfo, 76> Properties{{
            {"ActivationType", 0x3A8, "EnumProperty"},
            {"EffectContainers", 0x3B0, "StructProperty"},
            {"GameplayEffectContainers", 0x748, "ArrayProperty"},
            {"DynamicGameplayEffectContainers", 0x758, "MapProperty"},
            {"OwnerPreviewImageOverrideTags", 0x768, "StructProperty"},
            {"ProjectileClass", 0x788, "ClassProperty"},
            {"bAllowBlueprintReplicatedVariables", 0x790, "BoolProperty"},
            {"DamageStatHandle", 0x798, "StructProperty"},
            {"AbilityCosts", 0x7A8, "ArrayProperty"},
            {"Costs", 0x7B8, "ArrayProperty"},
            {"bApplyingCostsEnabled", 0x7C8, "BoolProperty"},
            {"bShowWidgetForCosts", 0x7C8, "BoolProperty"},
            {"MovementCancellationLeashLength", 0x7D0, "StructProperty"},
            {"ExplicitCooldownDuration", 0x7F8, "StructProperty"},
            {"ExplicitCooldownTags", 0x820, "StructProperty"},
            {"ExplicitCooldownAssetTags", 0x840, "StructProperty"},
            {"CustomFiringSequenceLength", 0x860, "ByteProperty"},
            {"bDisableMoveCombining", 0x864, "BoolProperty"},
            {"bIgnoreClientActivationAttempts", 0x864, "BoolProperty"},
            {"bPersistOnDeath", 0x864, "BoolProperty"},
            {"bRequireServerTimeValidationPass", 0x864, "BoolProperty"},
            {"bRequireServerValidationPass", 0x864, "BoolProperty"},
            {"bStartWithCooldown", 0x864, "BoolProperty"},
            {"bStopsAIBehaviorLogic", 0x864, "BoolProperty"},
            {"bStopsAIMovement", 0x864, "BoolProperty"},
            {"bForceNormalAILOD", 0x865, "BoolProperty"},
            {"bStopsRVOAvoidance", 0x865, "BoolProperty"},
            {"MinimumRequiredAILODLevel", 0x868, "EnumProperty"},
            {"bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests", 0x86C, "BoolProperty"},
            {"bAcceptTargetActorVehicleForCanHitTests", 0x86C, "BoolProperty"},
            {"bRelevantForAIDespawning", 0x86C, "BoolProperty"},
            {"bUseOwnerInstigatorAsInstigator", 0x86C, "BoolProperty"},
            {"bUseTetheredPawnAsInstigator", 0x86C, "BoolProperty"},
            {"bUseAIFireLocationAndRotation", 0x86D, "BoolProperty"},
            {"AIWeaponUsage", 0x870, "EnumProperty"},
            {"WeaponTestApplicationTag", 0x874, "StructProperty"},
            {"bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling", 0x878, "BoolProperty"},
            {"bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast", 0x878, "BoolProperty"},
            {"bVerifyFireOffsetIsNotObstructedByWorldGeometry", 0x878, "BoolProperty"},
            {"FireOffset", 0x880, "StructProperty"},
            {"ActivationNoiseRange", 0x898, "FloatProperty"},
            {"ImpactNoiseRange", 0x89C, "FloatProperty"},
            {"ActivationNoiseLoudness", 0x8A0, "FloatProperty"},
            {"ImpactNoiseLoudness", 0x8A4, "FloatProperty"},
            {"ProhibitedTargetTags", 0x8A8, "StructProperty"},
            {"bLeadPawnTargets", 0x8C9, "BoolProperty"},
            {"DesiredThrowAngle", 0x8CC, "FloatProperty"},
            {"MaxYawAngleToFire", 0x8D0, "FloatProperty"},
            {"bClampMaxYawAngleToFire", 0x8D4, "BoolProperty"},
            {"bUseTargetActorLocation", 0x8D5, "BoolProperty"},
            {"InitialAccuracyMax", 0x8D8, "FloatProperty"},
            {"InitialAccuracyMin", 0x8DC, "FloatProperty"},
            {"TargetAccuracyMax", 0x8E0, "FloatProperty"},
            {"TargetAccuracyMin", 0x8E4, "FloatProperty"},
            {"MinAccuracyDistance", 0x8E8, "FloatProperty"},
            {"MaxAccuracyDistance", 0x8EC, "FloatProperty"},
            {"AccuracyDistanceMultiplier", 0x8F0, "FloatProperty"},
            {"NumUsesToReachTargetAccuracy", 0x8F4, "IntProperty"},
            {"UseCount", 0x8F8, "IntProperty"},
            {"bIsMobileToggle", 0x8FC, "BoolProperty"},
            {"bActivateIfTagsAlreadyPresent", 0x8FD, "BoolProperty"},
            {"GameplayAbilityBehaviorDistanceData", 0x908, "ArrayProperty"},
            {"MontageInfo", 0x978, "StructProperty"},
            {"PreviousMontageInfo", 0x9D0, "StructProperty"},
            {"ModList", 0xA28, "ArrayProperty"},
            {"AbilityWeapon", 0xA38, "ObjectProperty"},
            {"DisplayName", 0xA40, "TextProperty"},
            {"Description", 0xA50, "TextProperty"},
            {"SmallPreviewImageOverride", 0xA68, "ObjectProperty"},
            {"ChargeStartTime", 0xA80, "FloatProperty"},
            {"ChargeState", 0xA88, "EnumProperty"},
            {"ToolTip", 0xAD0, "ClassProperty"},
            {"StatList", 0xAD8, "ObjectProperty"},
            {"ActorTrackingSettings", 0xAE8, "StructProperty"},
            {"AnalyticsTags", 0xB10, "StructProperty"},
            {"TagChangedActions", 0xB30, "ArrayProperty"},
        }};
    };

    struct FortPlayerStateComponent_HazelnutSpreadBountyManager
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_HazelnutSpreadBountyManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDuelContractDropped = 0xC0;
            static constexpr std::uintptr_t OnDuelContractCollected = 0xD0;
            static constexpr std::uintptr_t OnDuelContractFailed = 0xE0;
            static constexpr std::uintptr_t OnClientDuelDataUpdated = 0xF0;
            static constexpr std::uintptr_t OnForceEndDuel = 0x100;
            static constexpr std::uintptr_t TargetFilter = 0x110;
            static constexpr std::uintptr_t NumberOfPlayersToSelectFrom = 0x158;
            static constexpr std::uintptr_t MediumThreatRange = 0x180;
            static constexpr std::uintptr_t HighThreatRange = 0x1A8;
            static constexpr std::uintptr_t ThreatRefreshRate = 0x1D0;
            static constexpr std::uintptr_t AllowPoaching = 0x1F8;
            static constexpr std::uintptr_t DuelInitiatorAbility = 0x220;
            static constexpr std::uintptr_t DuelTargetAbility = 0x228;
            static constexpr std::uintptr_t DuelProtectorAbility = 0x230;
            static constexpr std::uintptr_t DuelBotAbility = 0x238;
            static constexpr std::uintptr_t DuelTimeDurationSeconds = 0x240;
            static constexpr std::uintptr_t QuestToGrant = 0x268;
            static constexpr std::uintptr_t ProtectorQuestToGrantPtr = 0x288;
            static constexpr std::uintptr_t TargetQuestToGrant = 0x2A8;
            static constexpr std::uintptr_t GrantReciprocalQuestToTarget = 0x2C8;
            static constexpr std::uintptr_t BountyData = 0x2F0;
            static constexpr std::uintptr_t PlayerTitleIndex = 0x300;
            static constexpr std::uintptr_t CachedCharacterItemDefinition = 0x308;
            static constexpr std::uintptr_t BountyState = 0x310;
            static constexpr std::uintptr_t RivalWeightMap = 0x318;
            static constexpr std::uintptr_t PrimaryRival = 0x328;
            static constexpr std::uintptr_t GetPrimaryRivalDataDelegate = 0x368;
            static constexpr std::uintptr_t QuestsTagsContainer = 0x378;
            static constexpr std::uintptr_t BountyStartSuccessTag = 0x398;
            static constexpr std::uintptr_t BountyStartFailedTag = 0x39C;
            static constexpr std::uintptr_t CurrentDuelData = 0x3A0;
            static constexpr std::uintptr_t TitlesDataTable = 0x450;
            static constexpr std::uintptr_t BundleTemplateId = 0x458;
            static constexpr std::uintptr_t TotalBountyTime = 0x468;
            static constexpr std::uintptr_t bDisableDuels = 0x470;
            static constexpr std::uintptr_t bPreferRivalsForBountyTarget = 0x498;
            static constexpr std::uintptr_t PreferedRivalMaxDistance = 0x4C8;
            static constexpr std::uintptr_t bAllowBotBountyTargets = 0x4F8;
            static constexpr std::uintptr_t bAllowNonBotBountyTargets = 0x528;
            static constexpr std::uintptr_t TargetSelection_BotBaseScoreMod = 0x558;
            static constexpr std::uintptr_t TargetSelection_IdealDistanceMin = 0x580;
            static constexpr std::uintptr_t TargetSelection_IdealDistanceMax = 0x5A8;
            static constexpr std::uintptr_t TargetSelection_IdealDistanceTolerance = 0x5D0;
            static constexpr std::uintptr_t TargetSelection_IdealDistanceScoreMod = 0x5F8;
            static constexpr std::uintptr_t TargetSelection_ExcludeTargetDistance_BoardDuel = 0x620;
            static constexpr std::uintptr_t TargetSelection_ExcludeTargetDistance_RADuel = 0x648;
            static constexpr std::uintptr_t TargetSelection_Cooldown = 0x670;
            static constexpr std::uintptr_t TargetSelection_CooldownScoreMod = 0x698;
            static constexpr std::uintptr_t TargetSelection_CooldownOnSquadmates = 0x6C0;
            static constexpr std::uintptr_t TargetSelection_ApplyCooldownOnRADuels = 0x6F0;
            static constexpr std::uintptr_t TargetSelection_WinLossScoreMod = 0x720;
            static constexpr std::uintptr_t TargetSelection_WinLossTolerance = 0x750;
            static constexpr std::uintptr_t TargetSelection_BotScoreAtNegativeWinLossValue = 0x780;
            static constexpr std::uintptr_t TargetSelection_UseTicketMMR = 0x7A8;
            static constexpr std::uintptr_t TargetSelection_MMRScoreMod = 0x7D8;
            static constexpr std::uintptr_t TargetSelection_MaxMMRDifference = 0x808;
            static constexpr std::uintptr_t TargetSelection_MMRTolerance = 0x838;
            static constexpr std::uintptr_t TargetSelection_BotMMR = 0x868;
            static constexpr std::uintptr_t TargetSelection_ExcludeAfterNumMatchesSinceInitDuel = 0x898;
            static constexpr std::uintptr_t TargetSelection_ScoreAtNumMatchesSinceInitDuel = 0x8C8;
            static constexpr std::uintptr_t TargetSelection_UseSquadmateDuelInits = 0x8F0;
            static constexpr std::uintptr_t TargetSelection_TrackRivalDuelsAsDuelInits = 0x920;
        };

        inline static constexpr std::array<PropertyInfo, 62> Properties{{
            {"OnDuelContractDropped", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnDuelContractCollected", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnDuelContractFailed", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnClientDuelDataUpdated", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnForceEndDuel", 0x100, "MulticastInlineDelegateProperty"},
            {"TargetFilter", 0x110, "StructProperty"},
            {"NumberOfPlayersToSelectFrom", 0x158, "StructProperty"},
            {"MediumThreatRange", 0x180, "StructProperty"},
            {"HighThreatRange", 0x1A8, "StructProperty"},
            {"ThreatRefreshRate", 0x1D0, "StructProperty"},
            {"AllowPoaching", 0x1F8, "StructProperty"},
            {"DuelInitiatorAbility", 0x220, "ClassProperty"},
            {"DuelTargetAbility", 0x228, "ClassProperty"},
            {"DuelProtectorAbility", 0x230, "ClassProperty"},
            {"DuelBotAbility", 0x238, "ClassProperty"},
            {"DuelTimeDurationSeconds", 0x240, "StructProperty"},
            {"QuestToGrant", 0x268, "SoftObjectProperty"},
            {"ProtectorQuestToGrantPtr", 0x288, "SoftObjectProperty"},
            {"TargetQuestToGrant", 0x2A8, "SoftObjectProperty"},
            {"GrantReciprocalQuestToTarget", 0x2C8, "StructProperty"},
            {"BountyData", 0x2F0, "StructProperty"},
            {"PlayerTitleIndex", 0x300, "IntProperty"},
            {"CachedCharacterItemDefinition", 0x308, "ObjectProperty"},
            {"BountyState", 0x310, "EnumProperty"},
            {"RivalWeightMap", 0x318, "MapProperty"},
            {"PrimaryRival", 0x328, "StructProperty"},
            {"GetPrimaryRivalDataDelegate", 0x368, "DelegateProperty"},
            {"QuestsTagsContainer", 0x378, "StructProperty"},
            {"BountyStartSuccessTag", 0x398, "StructProperty"},
            {"BountyStartFailedTag", 0x39C, "StructProperty"},
            {"CurrentDuelData", 0x3A0, "StructProperty"},
            {"TitlesDataTable", 0x450, "ObjectProperty"},
            {"BundleTemplateId", 0x458, "StrProperty"},
            {"TotalBountyTime", 0x468, "FloatProperty"},
            {"bDisableDuels", 0x470, "StructProperty"},
            {"bPreferRivalsForBountyTarget", 0x498, "StructProperty"},
            {"PreferedRivalMaxDistance", 0x4C8, "StructProperty"},
            {"bAllowBotBountyTargets", 0x4F8, "StructProperty"},
            {"bAllowNonBotBountyTargets", 0x528, "StructProperty"},
            {"TargetSelection_BotBaseScoreMod", 0x558, "StructProperty"},
            {"TargetSelection_IdealDistanceMin", 0x580, "StructProperty"},
            {"TargetSelection_IdealDistanceMax", 0x5A8, "StructProperty"},
            {"TargetSelection_IdealDistanceTolerance", 0x5D0, "StructProperty"},
            {"TargetSelection_IdealDistanceScoreMod", 0x5F8, "StructProperty"},
            {"TargetSelection_ExcludeTargetDistance_BoardDuel", 0x620, "StructProperty"},
            {"TargetSelection_ExcludeTargetDistance_RADuel", 0x648, "StructProperty"},
            {"TargetSelection_Cooldown", 0x670, "StructProperty"},
            {"TargetSelection_CooldownScoreMod", 0x698, "StructProperty"},
            {"TargetSelection_CooldownOnSquadmates", 0x6C0, "StructProperty"},
            {"TargetSelection_ApplyCooldownOnRADuels", 0x6F0, "StructProperty"},
            {"TargetSelection_WinLossScoreMod", 0x720, "StructProperty"},
            {"TargetSelection_WinLossTolerance", 0x750, "StructProperty"},
            {"TargetSelection_BotScoreAtNegativeWinLossValue", 0x780, "StructProperty"},
            {"TargetSelection_UseTicketMMR", 0x7A8, "StructProperty"},
            {"TargetSelection_MMRScoreMod", 0x7D8, "StructProperty"},
            {"TargetSelection_MaxMMRDifference", 0x808, "StructProperty"},
            {"TargetSelection_MMRTolerance", 0x838, "StructProperty"},
            {"TargetSelection_BotMMR", 0x868, "StructProperty"},
            {"TargetSelection_ExcludeAfterNumMatchesSinceInitDuel", 0x898, "StructProperty"},
            {"TargetSelection_ScoreAtNumMatchesSinceInitDuel", 0x8C8, "StructProperty"},
            {"TargetSelection_UseSquadmateDuelInits", 0x8F0, "StructProperty"},
            {"TargetSelection_TrackRivalDuelsAsDuelInits", 0x920, "StructProperty"},
        }};
    };

    struct HazelnutSpreadControllerComponent_Currency
    {
        static constexpr std::string_view Name = "HazelnutSpreadControllerComponent_Currency";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BountyCurrencyItemDefinition = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BountyCurrencyItemDefinition", 0xC8, "ObjectProperty"},
        }};
    };

    struct HazelnutSpread_DuelContractBGA
    {
        static constexpr std::string_view Name = "HazelnutSpread_DuelContractBGA";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementComponent = 0x940;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MovementComponent", 0x940, "ObjectProperty"},
        }};
    };

    struct HazelnutSpread_DuelTargetMarker
    {
        static constexpr std::string_view Name = "HazelnutSpread_DuelTargetMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t InstigatorPlayerState = 0x280;
            static constexpr std::uintptr_t SpecialActorComponent = 0x288;
            static constexpr std::uintptr_t MarkDelaySeconds = 0x290;
            static constexpr std::uintptr_t MarkDurationSeconds = 0x2B8;
            static constexpr std::uintptr_t IsSpecialActorMarkingEnabled = 0x2E0;
            static constexpr std::uintptr_t AppliedGECooldown = 0x308;
            static constexpr std::uintptr_t bBlockMarking = 0x310;
            static constexpr std::uintptr_t bCanBeMarked = 0x310;
            static constexpr std::uintptr_t MarkerDisplay = 0x318;
            static constexpr std::uintptr_t MarkerPositionOffset = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"InstigatorPlayerState", 0x280, "WeakObjectProperty"},
            {"SpecialActorComponent", 0x288, "ObjectProperty"},
            {"MarkDelaySeconds", 0x290, "StructProperty"},
            {"MarkDurationSeconds", 0x2B8, "StructProperty"},
            {"IsSpecialActorMarkingEnabled", 0x2E0, "StructProperty"},
            {"AppliedGECooldown", 0x308, "ClassProperty"},
            {"bBlockMarking", 0x310, "BoolProperty"},
            {"bCanBeMarked", 0x310, "BoolProperty"},
            {"MarkerDisplay", 0x318, "StructProperty"},
            {"MarkerPositionOffset", 0x3C8, "StructProperty"},
        }};
    };

}
