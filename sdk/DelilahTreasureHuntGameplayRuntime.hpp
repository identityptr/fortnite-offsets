#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelilahTreasureHuntGameplayRuntime
{
    struct DelilahTreasureHuntAnimatedChest
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntAnimatedChest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceContainer = 0x958;
            static constexpr std::uintptr_t OpeningPawn = 0x960;
            static constexpr std::uintptr_t PrizeRollResult = 0x968;
            static constexpr std::uintptr_t bFromDestruction = 0x9A8;
            static constexpr std::uintptr_t TierInfo = 0x9B0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceContainer", 0x958, "ObjectProperty"},
            {"OpeningPawn", 0x960, "ObjectProperty"},
            {"PrizeRollResult", 0x968, "StructProperty"},
            {"bFromDestruction", 0x9A8, "BoolProperty"},
            {"TierInfo", 0x9B0, "StructProperty"},
        }};
    };

    struct DelilahTreasureHuntChestRoll
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntChestRoll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetController = 0x28;
            static constexpr std::uintptr_t OriginalInstigator = 0x30;
            static constexpr std::uintptr_t ContainerOverride = 0x38;
            static constexpr std::uintptr_t SpawnParams = 0x40;
            static constexpr std::uintptr_t ForcedRewardId = 0xE0;
            static constexpr std::uintptr_t bSpawnChest = 0xE4;
            static constexpr std::uintptr_t ContainerTypeId = 0xE8;
            static constexpr std::uintptr_t RollResult = 0xF8;
            static constexpr std::uintptr_t SpawnedChest = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TargetController", 0x28, "WeakObjectProperty"},
            {"OriginalInstigator", 0x30, "WeakObjectProperty"},
            {"ContainerOverride", 0x38, "WeakObjectProperty"},
            {"SpawnParams", 0x40, "StructProperty"},
            {"ForcedRewardId", 0xE0, "NameProperty"},
            {"bSpawnChest", 0xE4, "BoolProperty"},
            {"ContainerTypeId", 0xE8, "StrProperty"},
            {"RollResult", 0xF8, "StructProperty"},
            {"SpawnedChest", 0x138, "WeakObjectProperty"},
        }};
    };

    struct DelilahTreasureHuntCloverController_Server
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntCloverController_Server";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelilahTreasureHunt_Server";
        struct Offsets
        {
            static constexpr std::uintptr_t PrizeLootTierGroup = 0x150;
            static constexpr std::uintptr_t IneligibleDamageSourceTags = 0x158;
            static constexpr std::uintptr_t CurrentMatchRolledAmounts = 0x168;
            static constexpr std::uintptr_t PendingPrizeRequests = 0x178;
            static constexpr std::uintptr_t ActiveChestRolls = 0x188;
            static constexpr std::uintptr_t RolledPrizeDefinitions = 0x198;
            static constexpr std::uintptr_t ForcedPrizeIds = 0x1A8;
            static constexpr std::uintptr_t bIsAcceptingPrizeRequests = 0x1B8;
            static constexpr std::uintptr_t bAreRewardsEnabled = 0x1B9;
            static constexpr std::uintptr_t bHasFinishedRewardDispatch = 0x1BA;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PrizeLootTierGroup", 0x150, "NameProperty"},
            {"IneligibleDamageSourceTags", 0x158, "ArrayProperty"},
            {"CurrentMatchRolledAmounts", 0x168, "MapProperty"},
            {"PendingPrizeRequests", 0x178, "ArrayProperty"},
            {"ActiveChestRolls", 0x188, "ArrayProperty"},
            {"RolledPrizeDefinitions", 0x198, "MapProperty"},
            {"ForcedPrizeIds", 0x1A8, "MapProperty"},
            {"bIsAcceptingPrizeRequests", 0x1B8, "BoolProperty"},
            {"bAreRewardsEnabled", 0x1B9, "BoolProperty"},
            {"bHasFinishedRewardDispatch", 0x1BA, "BoolProperty"},
        }};
    };

    struct DelilahTreasureHuntContainerOverrideComponent
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntContainerOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisableInteractOverrides = 0xC8;
            static constexpr std::uintptr_t ForcedRewardId = 0xCC;
            static constexpr std::uintptr_t AllowedOwnerTable = 0xD0;
            static constexpr std::uintptr_t ChestRollClass = 0xD8;
            static constexpr std::uintptr_t GeneratedMeshTiers = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bDisableInteractOverrides", 0xC8, "BoolProperty"},
            {"ForcedRewardId", 0xCC, "NameProperty"},
            {"AllowedOwnerTable", 0xD0, "ObjectProperty"},
            {"ChestRollClass", 0xD8, "ClassProperty"},
            {"GeneratedMeshTiers", 0xE0, "ArrayProperty"},
        }};
    };

    struct DelilahTreasureHuntContainerTierData
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntContainerTierData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TierMeshOverrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TierMeshOverrides", 0x28, "ArrayProperty"},
        }};
    };

    struct DelilahTreasureHuntMagpieComponent
    {
        static constexpr std::string_view Name = "DelilahTreasureHuntMagpieComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPrizeMetadataUpdated = 0xC0;
            static constexpr std::uintptr_t TreasureHuntController = 0xD0;
            static constexpr std::uintptr_t PrizeMetadata = 0xD8;
            static constexpr std::uintptr_t EarnedRewardIds = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnPrizeMetadataUpdated", 0xC0, "MulticastInlineDelegateProperty"},
            {"TreasureHuntController", 0xD0, "WeakObjectProperty"},
            {"PrizeMetadata", 0xD8, "MapProperty"},
            {"EarnedRewardIds", 0xF8, "SetProperty"},
        }};
    };

    struct DelilahTreasureHunt_Server
    {
        static constexpr std::string_view Name = "DelilahTreasureHunt_Server";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelilahTreasureHuntControllerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrizeLootTierGroup = 0x150;
            static constexpr std::uintptr_t IneligibleDamageSourceTags = 0x158;
            static constexpr std::uintptr_t CurrentMatchRolledAmounts = 0x168;
            static constexpr std::uintptr_t PendingPrizeRequests = 0x178;
            static constexpr std::uintptr_t ActiveChestRolls = 0x188;
            static constexpr std::uintptr_t RolledPrizeDefinitions = 0x198;
            static constexpr std::uintptr_t ForcedPrizeIds = 0x1A8;
            static constexpr std::uintptr_t bIsAcceptingPrizeRequests = 0x1B8;
            static constexpr std::uintptr_t bAreRewardsEnabled = 0x1B9;
            static constexpr std::uintptr_t bHasFinishedRewardDispatch = 0x1BA;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PrizeLootTierGroup", 0x150, "NameProperty"},
            {"IneligibleDamageSourceTags", 0x158, "ArrayProperty"},
            {"CurrentMatchRolledAmounts", 0x168, "MapProperty"},
            {"PendingPrizeRequests", 0x178, "ArrayProperty"},
            {"ActiveChestRolls", 0x188, "ArrayProperty"},
            {"RolledPrizeDefinitions", 0x198, "MapProperty"},
            {"ForcedPrizeIds", 0x1A8, "MapProperty"},
            {"bIsAcceptingPrizeRequests", 0x1B8, "BoolProperty"},
            {"bAreRewardsEnabled", 0x1B9, "BoolProperty"},
            {"bHasFinishedRewardDispatch", 0x1BA, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_DelilahTreasureHunt
    {
        static constexpr std::string_view Name = "FortAthenaMutator_DelilahTreasureHunt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

    struct FortGameplayAbility_DelilahTreasureHunt_PrizesEventListener
    {
        static constexpr std::string_view Name = "FortGameplayAbility_DelilahTreasureHunt_PrizesEventListener";
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

}
