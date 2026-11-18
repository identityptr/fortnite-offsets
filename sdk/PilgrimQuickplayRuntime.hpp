#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimQuickplayRuntime
{
    struct BandReplicationGraphNode
    {
        static constexpr std::string_view Name = "BandReplicationGraphNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortReplicationGraphNode_Custom";
        struct Offsets
        {
            static constexpr std::uintptr_t AllChildNodes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllChildNodes", 0x28, "ArrayProperty"},
        }};
    };

    struct PilgrimConversationRequirement_NotUsingTouch
    {
        static constexpr std::string_view Name = "PilgrimConversationRequirement_NotUsingTouch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationRequirementNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalWorldContextObj = 0x28;
            static constexpr std::uintptr_t NodeName = 0x30;
            static constexpr std::uintptr_t Compiled_NodeGUID = 0x40;
            static constexpr std::uintptr_t ParentNode = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EvalWorldContextObj", 0x28, "ObjectProperty"},
            {"NodeName", 0x30, "StrProperty"},
            {"Compiled_NodeGUID", 0x40, "StructProperty"},
            {"ParentNode", 0x50, "ObjectProperty"},
        }};
    };

    struct PilgrimCuratedSetlistContextCollector
    {
        static constexpr std::string_view Name = "PilgrimCuratedSetlistContextCollector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FilteredEventContextCollectorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimDynamicSceneInjectorInterface
    {
        static constexpr std::string_view Name = "PilgrimDynamicSceneInjectorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimGameplayAbility_DisableMovementReplication
    {
        static constexpr std::string_view Name = "PilgrimGameplayAbility_DisableMovementReplication";
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

    struct PilgrimGreenRoomLayoutSwitcher
    {
        static constexpr std::string_view Name = "PilgrimGreenRoomLayoutSwitcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentLayout = 0xC0;
            static constexpr std::uintptr_t LayoutEnumType = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentLayout", 0xC0, "IntProperty"},
            {"LayoutEnumType", 0xC8, "ObjectProperty"},
        }};
    };

    struct PilgrimIrisDistanceOverrideFilter
    {
        static constexpr std::string_view Name = "PilgrimIrisDistanceOverrideFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Config", 0x70, "ObjectProperty"},
        }};
    };

    struct PilgrimIrisDistanceOverrideFilterConfig
    {
        static constexpr std::string_view Name = "PilgrimIrisDistanceOverrideFilterConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectGridFilterConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewPosRelevancyFrameCount = 0x28;
            static constexpr std::uintptr_t DefaultFrameCountBeforeCulling = 0x2C;
            static constexpr std::uintptr_t CellSizeX = 0x30;
            static constexpr std::uintptr_t CellSizeY = 0x34;
            static constexpr std::uintptr_t DefaultCullDistance = 0x38;
            static constexpr std::uintptr_t bUseExactCullDistance = 0x3C;
            static constexpr std::uintptr_t bDefaultUse2DCullDistance = 0x3D;
            static constexpr std::uintptr_t FilterProfiles = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ViewPosRelevancyFrameCount", 0x28, "UInt32Property"},
            {"DefaultFrameCountBeforeCulling", 0x2C, "UInt16Property"},
            {"CellSizeX", 0x30, "FloatProperty"},
            {"CellSizeY", 0x34, "FloatProperty"},
            {"DefaultCullDistance", 0x38, "FloatProperty"},
            {"bUseExactCullDistance", 0x3C, "BoolProperty"},
            {"bDefaultUse2DCullDistance", 0x3D, "BoolProperty"},
            {"FilterProfiles", 0x40, "ArrayProperty"},
        }};
    };

    struct PilgrimLeaderboardScoreReporter
    {
        static constexpr std::string_view Name = "PilgrimLeaderboardScoreReporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct PilgrimPawnComponent
    {
        static constexpr std::string_view Name = "PilgrimPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bInteractionEffectsEnabled = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInteractionEffectsEnabled", 0xC8, "BoolProperty"},
        }};
    };

    struct PilgrimPlayspaceComponent_IntroDirector
    {
        static constexpr std::string_view Name = "PilgrimPlayspaceComponent_IntroDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableIntroDirector = 0x118;
            static constexpr std::uintptr_t GuitarSpotlights = 0x120;
            static constexpr std::uintptr_t DrumSpotlights = 0x130;
            static constexpr std::uintptr_t BassSpotlights = 0x140;
            static constexpr std::uintptr_t MicSpotlights = 0x150;
            static constexpr std::uintptr_t KeytarSpotlights = 0x160;
            static constexpr std::uintptr_t AllowEmotingEffect = 0x170;
            static constexpr std::uintptr_t ChosenStandinEmotes = 0x198;
            static constexpr std::uintptr_t StageTransitionUIScene = 0x2F8;
            static constexpr std::uintptr_t SpotlightIndexLock = 0x3F8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bEnableIntroDirector", 0x118, "BoolProperty"},
            {"GuitarSpotlights", 0x120, "ArrayProperty"},
            {"DrumSpotlights", 0x130, "ArrayProperty"},
            {"BassSpotlights", 0x140, "ArrayProperty"},
            {"MicSpotlights", 0x150, "ArrayProperty"},
            {"KeytarSpotlights", 0x160, "ArrayProperty"},
            {"AllowEmotingEffect", 0x170, "ClassProperty"},
            {"ChosenStandinEmotes", 0x198, "ArrayProperty"},
            {"StageTransitionUIScene", 0x2F8, "ObjectProperty"},
            {"SpotlightIndexLock", 0x3F8, "IntProperty"},
        }};
    };

    struct PilgrimPlayspaceComponent_ServerExpiration
    {
        static constexpr std::string_view Name = "PilgrimPlayspaceComponent_ServerExpiration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_ServerExpiration";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedShutdownTimeInSeconds = 0x158;
            static constexpr std::uintptr_t StartShutdownTimerOnGracefulShutdownRequest = 0x15C;
            static constexpr std::uintptr_t bDisableBackfillBeforeExpiration = 0x15D;
            static constexpr std::uintptr_t bDisableBackfillOnGracefulShutdown = 0x15E;
            static constexpr std::uintptr_t AlertDataList = 0x160;
            static constexpr std::uintptr_t ServerShutdownTimeInSeconds = 0x170;
            static constexpr std::uintptr_t DisableBackfillBeforeExpireTimeInSeconds = 0x174;
            static constexpr std::uintptr_t PostShutdownForceRestartTimeInSeconds = 0x178;
            static constexpr std::uintptr_t UINotificationIcon = 0x180;
            static constexpr std::uintptr_t GracefulShutdownInitiatedEventHandle = 0x1F0;
            static constexpr std::uintptr_t ShutdownTimeOverrides = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ReplicatedShutdownTimeInSeconds", 0x158, "IntProperty"},
            {"StartShutdownTimerOnGracefulShutdownRequest", 0x15C, "BoolProperty"},
            {"bDisableBackfillBeforeExpiration", 0x15D, "BoolProperty"},
            {"bDisableBackfillOnGracefulShutdown", 0x15E, "BoolProperty"},
            {"AlertDataList", 0x160, "ArrayProperty"},
            {"ServerShutdownTimeInSeconds", 0x170, "IntProperty"},
            {"DisableBackfillBeforeExpireTimeInSeconds", 0x174, "IntProperty"},
            {"PostShutdownForceRestartTimeInSeconds", 0x178, "IntProperty"},
            {"UINotificationIcon", 0x180, "SoftObjectProperty"},
            {"GracefulShutdownInitiatedEventHandle", 0x1F0, "StructProperty"},
            {"ShutdownTimeOverrides", 0x210, "ArrayProperty"},
        }};
    };

    struct PilgrimPlayspacePawnProviderInterface
    {
        static constexpr std::string_view Name = "PilgrimPlayspacePawnProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimQuickplayBPFL
    {
        static constexpr std::string_view Name = "PilgrimQuickplayBPFL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimQuickplayBandStateComponent
    {
        static constexpr std::string_view Name = "PilgrimQuickplayBandStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimCoreBandStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSongReplayingChanged = 0xD0;
            static constexpr std::uintptr_t SetlistVoteWinner = 0xE0;
            static constexpr std::uintptr_t CurrentSetlistIndex = 0xE8;
            static constexpr std::uintptr_t bIsReplayingPreviousSong = 0xEC;
            static constexpr std::uintptr_t SetlistResultMap = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnSongReplayingChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"SetlistVoteWinner", 0xE0, "ObjectProperty"},
            {"CurrentSetlistIndex", 0xE8, "IntProperty"},
            {"bIsReplayingPreviousSong", 0xEC, "BoolProperty"},
            {"SetlistResultMap", 0xF0, "MapProperty"},
        }};
    };

    struct PilgrimQuickplayCameraDataSource
    {
        static constexpr std::string_view Name = "PilgrimQuickplayCameraDataSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksCameraPluginDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t bCutOnMeasuresInsteadOfBeats = 0x228;
            static constexpr std::uintptr_t PilgrimMBI = 0x22C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bCutOnMeasuresInsteadOfBeats", 0x228, "BoolProperty"},
            {"PilgrimMBI", 0x22C, "WeakObjectProperty"},
        }};
    };

    struct PilgrimQuickplayDeveloperSettings
    {
        static constexpr std::string_view Name = "PilgrimQuickplayDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideGamestateSettings = 0x30;
            static constexpr std::uintptr_t SongGameplay_SkipToGreenRoom = 0x31;
            static constexpr std::uintptr_t SongResults_TransitionTimeInSeconds = 0x34;
            static constexpr std::uintptr_t SongResults_OverrideSongData = 0x38;
            static constexpr std::uintptr_t SongResults_SongData = 0x40;
            static constexpr std::uintptr_t SongResults_OverrideSetlistResultData = 0xA8;
            static constexpr std::uintptr_t SongResults_SetlistResultsData = 0xB0;
            static constexpr std::uintptr_t Gameplay_ShowSongStats = 0xC0;
            static constexpr std::uintptr_t SongResults_SetlistChallengeOverrideConsole = 0xC1;
            static constexpr std::uintptr_t SongResults_SetlistChallengeDebug = 0xC2;
            static constexpr std::uintptr_t SongResults_SetlistChallengeFilenameAbsolute = 0xC3;
            static constexpr std::uintptr_t SongResults_SetlistChallengeJSONDumpFilename = 0xC8;
            static constexpr std::uintptr_t SongResults_SetlistChallengeIncludeHistogramData = 0xD8;
            static constexpr std::uintptr_t FastStartSettings = 0xE0;
            static constexpr std::uintptr_t ForcedGameMode = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"OverrideGamestateSettings", 0x30, "BoolProperty"},
            {"SongGameplay_SkipToGreenRoom", 0x31, "BoolProperty"},
            {"SongResults_TransitionTimeInSeconds", 0x34, "FloatProperty"},
            {"SongResults_OverrideSongData", 0x38, "BoolProperty"},
            {"SongResults_SongData", 0x40, "StructProperty"},
            {"SongResults_OverrideSetlistResultData", 0xA8, "BoolProperty"},
            {"SongResults_SetlistResultsData", 0xB0, "ArrayProperty"},
            {"Gameplay_ShowSongStats", 0xC0, "BoolProperty"},
            {"SongResults_SetlistChallengeOverrideConsole", 0xC1, "BoolProperty"},
            {"SongResults_SetlistChallengeDebug", 0xC2, "BoolProperty"},
            {"SongResults_SetlistChallengeFilenameAbsolute", 0xC3, "BoolProperty"},
            {"SongResults_SetlistChallengeJSONDumpFilename", 0xC8, "StrProperty"},
            {"SongResults_SetlistChallengeIncludeHistogramData", 0xD8, "BoolProperty"},
            {"FastStartSettings", 0xE0, "StructProperty"},
            {"ForcedGameMode", 0x100, "OptionalProperty"},
        }};
    };

    struct PilgrimQuickplayEmoteBPFL
    {
        static constexpr std::string_view Name = "PilgrimQuickplayEmoteBPFL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimQuickplayInputBasedAFKComponent
    {
        static constexpr std::string_view Name = "PilgrimQuickplayInputBasedAFKComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInputBasedAFKComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AFKTableRowEntry = 0x1D8;
            static constexpr std::uintptr_t CachedAFKDetectionParameters = 0x1E8;
            static constexpr std::uintptr_t WaitForEventRouterAction = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AFKTableRowEntry", 0x1D8, "StructProperty"},
            {"CachedAFKDetectionParameters", 0x1E8, "StructProperty"},
            {"WaitForEventRouterAction", 0x268, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayPlayerControllerComponent
    {
        static constexpr std::string_view Name = "PilgrimQuickplayPlayerControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct PilgrimQuickplayPlayerSpawningComponent
    {
        static constexpr std::string_view Name = "PilgrimQuickplayPlayerSpawningComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_PlayerSpawning";
        struct Offsets
        {
            static constexpr std::uintptr_t PregameSpawnTags = 0xD0;
            static constexpr std::uintptr_t NonPrimaryPlayerPregameSpawnTags = 0xF0;
            static constexpr std::uintptr_t OverrideTagsByConsoleVariable = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PregameSpawnTags", 0xD0, "StructProperty"},
            {"NonPrimaryPlayerPregameSpawnTags", 0xF0, "StructProperty"},
            {"OverrideTagsByConsoleVariable", 0x110, "ArrayProperty"},
        }};
    };

    struct PilgrimQuickplayPlayerStart
    {
        static constexpr std::string_view Name = "PilgrimQuickplayPlayerStart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStart";
        struct Offsets
        {
            static constexpr std::uintptr_t Team = 0x2F8;
            static constexpr std::uintptr_t PlayerStartIndex = 0x2F9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Team", 0x2F8, "ByteProperty"},
            {"PlayerStartIndex", 0x2F9, "ByteProperty"},
        }};
    };

    struct PilgrimQuickplayPlayerStateComponent
    {
        static constexpr std::string_view Name = "PilgrimQuickplayPlayerStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimCorePlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SongVote = 0xF8;
            static constexpr std::uintptr_t SetlistVote = 0x100;
            static constexpr std::uintptr_t bHasSongSelectMenuOpen = 0x108;
            static constexpr std::uintptr_t SetlistHighscoreMap = 0x110;
            static constexpr std::uintptr_t SetlistResultMap = 0x120;
            static constexpr std::uintptr_t CloseupCameraTime = 0x130;
            static constexpr std::uintptr_t GrantedQuests = 0x138;
            static constexpr std::uintptr_t bInitialSpawningDone = 0x178;
            static constexpr std::uintptr_t BackstageLocationIndex = 0x17C;
            static constexpr std::uintptr_t AutoEmoteSetting = 0x180;
            static constexpr std::uintptr_t QuickIntroEmote = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SongVote", 0xF8, "ObjectProperty"},
            {"SetlistVote", 0x100, "ObjectProperty"},
            {"bHasSongSelectMenuOpen", 0x108, "BoolProperty"},
            {"SetlistHighscoreMap", 0x110, "MapProperty"},
            {"SetlistResultMap", 0x120, "MapProperty"},
            {"CloseupCameraTime", 0x130, "FloatProperty"},
            {"GrantedQuests", 0x138, "ArrayProperty"},
            {"bInitialSpawningDone", 0x178, "BoolProperty"},
            {"BackstageLocationIndex", 0x17C, "IntProperty"},
            {"AutoEmoteSetting", 0x180, "EnumProperty"},
            {"QuickIntroEmote", 0x188, "StructProperty"},
        }};
    };

    struct PilgrimQuickplayPlayspace
    {
        static constexpr std::string_view Name = "PilgrimQuickplayPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t StandinDirector = 0x738;
            static constexpr std::uintptr_t PilgrimQuickplayStateMachineClass = 0x740;
            static constexpr std::uintptr_t StateMachineManager = 0x748;
            static constexpr std::uintptr_t MainStateMachine = 0x750;
            static constexpr std::uintptr_t BandState = 0x758;
            static constexpr std::uintptr_t SparksCameraPluginDataProviderClass = 0x760;
            static constexpr std::uintptr_t CameraDataSource = 0x768;
            static constexpr std::uintptr_t AuraManager = 0x770;
            static constexpr std::uintptr_t DefaultSongResultsDynamicUIScene = 0x778;
            static constexpr std::uintptr_t DefaultLayoutDefinitions = 0x780;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"StandinDirector", 0x738, "ObjectProperty"},
            {"PilgrimQuickplayStateMachineClass", 0x740, "ClassProperty"},
            {"StateMachineManager", 0x748, "ObjectProperty"},
            {"MainStateMachine", 0x750, "ObjectProperty"},
            {"BandState", 0x758, "ObjectProperty"},
            {"SparksCameraPluginDataProviderClass", 0x760, "ClassProperty"},
            {"CameraDataSource", 0x768, "ObjectProperty"},
            {"AuraManager", 0x770, "ObjectProperty"},
            {"DefaultSongResultsDynamicUIScene", 0x778, "ObjectProperty"},
            {"DefaultLayoutDefinitions", 0x780, "ObjectProperty"},
        }};
    };

    struct PilgrimQuickplayPlayspaceComponent_AuraManager
    {
        static constexpr std::string_view Name = "PilgrimQuickplayPlayspaceComponent_AuraManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetworkReady_BP = 0xC0;
            static constexpr std::uintptr_t OnMeshNetworkEventBurst_BP = 0xD0;
            static constexpr std::uintptr_t OnMeshNetworkEventStart_BP = 0xE0;
            static constexpr std::uintptr_t OnMeshNetworkEventChange_BP = 0xF0;
            static constexpr std::uintptr_t OnMeshNetworkEventEnd_BP = 0x100;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMeshNetworkReady_BP", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventBurst_BP", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventStart_BP", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventChange_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventEnd_BP", 0x100, "MulticastInlineDelegateProperty"},
            {"bSubscribeToMeshNetwork", 0x110, "BoolProperty"},
        }};
    };

    struct PilgrimQuickplayPlayspaceComponent_LoadingScreen
    {
        static constexpr std::string_view Name = "PilgrimQuickplayPlayspaceComponent_LoadingScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_LoadingScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowHoldingLoadingScreen = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAllowHoldingLoadingScreen", 0xC0, "BoolProperty"},
        }};
    };

    struct PilgrimQuickplayPlayspaceComponent_PlayerManager
    {
        static constexpr std::string_view Name = "PilgrimQuickplayPlayspaceComponent_PlayerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalPlayerOverride = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LocalPlayerOverride", 0x118, "WeakObjectProperty"},
        }};
    };

    struct PilgrimQuickplaySetlistResultProxyInstance
    {
        static constexpr std::string_view Name = "PilgrimQuickplaySetlistResultProxyInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ResultData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ResultData", 0x28, "StructProperty"},
        }};
    };

    struct PilgrimQuickplayStandinDirector
    {
        static constexpr std::string_view Name = "PilgrimQuickplayStandinDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimStandinDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentToWeaponMap = 0x138;
            static constexpr std::uintptr_t PlayspaceUsers = 0x148;
            static constexpr std::uintptr_t ActiveStandinCount = 0x158;
            static constexpr std::uintptr_t CosmeticCategories = 0x170;
            static constexpr std::uintptr_t AISpawnerData = 0x180;
            static constexpr std::uintptr_t Emotes = 0x188;
            static constexpr std::uintptr_t AbilitySet = 0x198;
            static constexpr std::uintptr_t PlayerToCosmeticDataMap = 0x1A0;
            static constexpr std::uintptr_t AssignedStandinCosmetics = 0x1B0;
            static constexpr std::uintptr_t SpawnRequestToStandinLoadoutMap = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"InstrumentToWeaponMap", 0x138, "MapProperty"},
            {"PlayspaceUsers", 0x148, "ArrayProperty"},
            {"ActiveStandinCount", 0x158, "IntProperty"},
            {"CosmeticCategories", 0x170, "SetProperty"},
            {"AISpawnerData", 0x180, "ClassProperty"},
            {"Emotes", 0x188, "ArrayProperty"},
            {"AbilitySet", 0x198, "ObjectProperty"},
            {"PlayerToCosmeticDataMap", 0x1A0, "MapProperty"},
            {"AssignedStandinCosmetics", 0x1B0, "MapProperty"},
            {"SpawnRequestToStandinLoadoutMap", 0x1C0, "MapProperty"},
        }};
    };

    struct PilgrimQuickplayStateBPFL
    {
        static constexpr std::string_view Name = "PilgrimQuickplayStateBPFL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimQuickplayStateBase
    {
        static constexpr std::string_view Name = "PilgrimQuickplayStateBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilitySetForState = 0x78;
            static constexpr std::uintptr_t GrantedAbilitySets = 0x80;
            static constexpr std::uintptr_t GrantedAdditionalAbilitySets = 0x90;
            static constexpr std::uintptr_t InputMappingContext = 0xA0;
            static constexpr std::uintptr_t AddSongAndPlayCooldownSeconds = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AbilitySetForState", 0x78, "ObjectProperty"},
            {"GrantedAbilitySets", 0x80, "MapProperty"},
            {"GrantedAdditionalAbilitySets", 0x90, "MapProperty"},
            {"InputMappingContext", 0xA0, "ObjectProperty"},
            {"AddSongAndPlayCooldownSeconds", 0xA8, "FloatProperty"},
        }};
    };

    struct PilgrimQuickplayStateMachine
    {
        static constexpr std::string_view Name = "PilgrimQuickplayStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayStateMachine";
        struct Offsets
        {
            static constexpr std::uintptr_t GrantedQuests = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GrantedQuests", 0xC8, "ArrayProperty"},
        }};
    };

    struct PilgrimQuickplayState_Intro
    {
        static constexpr std::string_view Name = "PilgrimQuickplayState_Intro";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EmoteAbilitySet = 0xC0;
            static constexpr std::uintptr_t TeleportTagRequirements = 0xC8;
            static constexpr std::uintptr_t CameraWaitTime = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EmoteAbilitySet", 0xC0, "ObjectProperty"},
            {"TeleportTagRequirements", 0xC8, "StructProperty"},
            {"CameraWaitTime", 0xE8, "FloatProperty"},
        }};
    };

    struct PilgrimQuickplayState_Loading
    {
        static constexpr std::string_view Name = "PilgrimQuickplayState_Loading";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilitySetForState = 0x78;
            static constexpr std::uintptr_t GrantedAbilitySets = 0x80;
            static constexpr std::uintptr_t GrantedAdditionalAbilitySets = 0x90;
            static constexpr std::uintptr_t InputMappingContext = 0xA0;
            static constexpr std::uintptr_t AddSongAndPlayCooldownSeconds = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AbilitySetForState", 0x78, "ObjectProperty"},
            {"GrantedAbilitySets", 0x80, "MapProperty"},
            {"GrantedAdditionalAbilitySets", 0x90, "MapProperty"},
            {"InputMappingContext", 0xA0, "ObjectProperty"},
            {"AddSongAndPlayCooldownSeconds", 0xA8, "FloatProperty"},
        }};
    };

    struct PilgrimQuickplayState_Outro
    {
        static constexpr std::string_view Name = "PilgrimQuickplayState_Outro";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTTL = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTTL", 0xC0, "FloatProperty"},
        }};
    };

    struct PilgrimQuickplayState_PreIntro
    {
        static constexpr std::string_view Name = "PilgrimQuickplayState_PreIntro";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTTLSeconds = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTTLSeconds", 0xC0, "FloatProperty"},
        }};
    };

    struct PilgrimQuickplayState_Pregame
    {
        static constexpr std::string_view Name = "PilgrimQuickplayState_Pregame";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EffectsToApplyOnTransition = 0xC0;
            static constexpr std::uintptr_t TeleportTagRequirements = 0xE0;
            static constexpr std::uintptr_t NoRoamTeleportTag = 0x100;
            static constexpr std::uintptr_t TeleportGameplayCue = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EffectsToApplyOnTransition", 0xC0, "ArrayProperty"},
            {"TeleportTagRequirements", 0xE0, "StructProperty"},
            {"NoRoamTeleportTag", 0x100, "StructProperty"},
            {"TeleportGameplayCue", 0x120, "StructProperty"},
        }};
    };

    struct PilgrimQuickplayState_SongGameplay
    {
        static constexpr std::string_view Name = "PilgrimQuickplayState_SongGameplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StageTeleportTagRequirements = 0xC0;
            static constexpr std::uintptr_t PilgrimMusicBattleInstanceClass = 0xE0;
            static constexpr std::uintptr_t bHaveTriggeredMBIFinished = 0xE8;
            static constexpr std::uintptr_t bCreateSpectatorMBI = 0x124;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StageTeleportTagRequirements", 0xC0, "StructProperty"},
            {"PilgrimMusicBattleInstanceClass", 0xE0, "ClassProperty"},
            {"bHaveTriggeredMBIFinished", 0xE8, "BoolProperty"},
            {"bCreateSpectatorMBI", 0x124, "BoolProperty"},
        }};
    };

    struct PilgrimQuickplayState_SongResults
    {
        static constexpr std::string_view Name = "PilgrimQuickplayState_SongResults";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimQuickplayStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ServerEndTime = 0xC0;
            static constexpr std::uintptr_t WaitTimeWithMoreSongs = 0xC8;
            static constexpr std::uintptr_t WaitTimeWithNoMoreSongs = 0xF0;
            static constexpr std::uintptr_t WaitTimeAllPlayersReady = 0x118;
            static constexpr std::uintptr_t WaitTimerHandle = 0x140;
            static constexpr std::uintptr_t PlayerList = 0x150;
            static constexpr std::uintptr_t ReadyPlayers = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ServerEndTime", 0xC0, "DoubleProperty"},
            {"WaitTimeWithMoreSongs", 0xC8, "StructProperty"},
            {"WaitTimeWithNoMoreSongs", 0xF0, "StructProperty"},
            {"WaitTimeAllPlayersReady", 0x118, "StructProperty"},
            {"WaitTimerHandle", 0x140, "StructProperty"},
            {"PlayerList", 0x150, "SetProperty"},
            {"ReadyPlayers", 0x160, "SetProperty"},
        }};
    };

    struct PilgrimQuickplayStreamingAnalytics
    {
        static constexpr std::string_view Name = "PilgrimQuickplayStreamingAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct PilgrimQuickplaySuspendHandleComponent
    {
        static constexpr std::string_view Name = "PilgrimQuickplaySuspendHandleComponent";
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

    struct PilgrimSessionPlayerCountComponent
    {
        static constexpr std::string_view Name = "PilgrimSessionPlayerCountComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSoloUserSession = 0x148;
            static constexpr std::uintptr_t bIsSoloUserSessionDetermined = 0x149;
            static constexpr std::uintptr_t ExpectedPlayerCount = 0x14C;
            static constexpr std::uintptr_t CurrentPlayerCount = 0x150;
            static constexpr std::uintptr_t BackstageOrderedPlayerStates = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsSoloUserSession", 0x148, "BoolProperty"},
            {"bIsSoloUserSessionDetermined", 0x149, "BoolProperty"},
            {"ExpectedPlayerCount", 0x14C, "IntProperty"},
            {"CurrentPlayerCount", 0x150, "IntProperty"},
            {"BackstageOrderedPlayerStates", 0x158, "ArrayProperty"},
        }};
    };

    struct PilgrimSetlistComponent
    {
        static constexpr std::string_view Name = "PilgrimSetlistComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimGameModeComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveSetlistData = 0xE8;
            static constexpr std::uintptr_t bCustomSetlistsEnabled = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveSetlistData", 0xE8, "StructProperty"},
            {"bCustomSetlistsEnabled", 0x170, "BoolProperty"},
        }};
    };

    struct PilgrimStandinPawnComponent
    {
        static constexpr std::string_view Name = "PilgrimStandinPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawninEffect = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawninEffect", 0xD0, "StructProperty"},
        }};
    };

}
