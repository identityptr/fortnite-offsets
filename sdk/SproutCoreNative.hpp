#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutCoreNative
{
    struct SproutAbility_SlowFall
    {
        static constexpr std::string_view Name = "SproutAbility_SlowFall";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t SlowFallMMEClass = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlowFallMMEClass", 0xB40, "ClassProperty"},
        }};
    };

    struct SproutAmbientLifeActor
    {
        static constexpr std::string_view Name = "SproutAmbientLifeActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultTags = 0x280;
            static constexpr std::uintptr_t UroShiftBucket = 0x2A0;
            static constexpr std::uintptr_t MaxEvalRateForInterpolation = 0x2A4;
            static constexpr std::uintptr_t LODToFrameSkipMap = 0x2A8;
            static constexpr std::uintptr_t SkelMeshComp = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DefaultTags", 0x280, "StructProperty"},
            {"UroShiftBucket", 0x2A0, "EnumProperty"},
            {"MaxEvalRateForInterpolation", 0x2A4, "IntProperty"},
            {"LODToFrameSkipMap", 0x2A8, "MapProperty"},
            {"SkelMeshComp", 0x2B8, "ObjectProperty"},
        }};
    };

    struct SproutControllerComponent_StreamingSources
    {
        static constexpr std::string_view Name = "SproutControllerComponent_StreamingSources";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNDynamicStreamingSourceComponent";
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

    struct SproutGameplayAbility
    {
        static constexpr std::string_view Name = "SproutGameplayAbility";
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

    struct SproutGameplayActor
    {
        static constexpr std::string_view Name = "SproutGameplayActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultTags = 0x2C8;
            static constexpr std::uintptr_t SnapGridSize = 0x2E8;
            static constexpr std::uintptr_t VertSnapGridSize = 0x2EC;
            static constexpr std::uintptr_t SnapOffset = 0x2F0;
            static constexpr std::uintptr_t CentroidOffset = 0x2FC;
            static constexpr std::uintptr_t BaseLocToPivotOffset = 0x308;
            static constexpr std::uintptr_t bDynamicallyAdjustCullDistance = 0x314;
            static constexpr std::uintptr_t bEnableRotationSnap = 0x314;
            static constexpr std::uintptr_t AbilitySystemComponentCreationPolicy = 0x315;
            static constexpr std::uintptr_t bAutoAssignNavProperties = 0x318;
            static constexpr std::uintptr_t bBeingDragged = 0x31C;
            static constexpr std::uintptr_t bBeingRotated = 0x31C;
            static constexpr std::uintptr_t bBeingTranslated = 0x31C;
            static constexpr std::uintptr_t bCanInteract = 0x31C;
            static constexpr std::uintptr_t AbilitySystemComponent = 0x320;
            static constexpr std::uintptr_t ReplicatedAbilitySystemComponent = 0x328;
            static constexpr std::uintptr_t SavedActorGuid = 0x348;
            static constexpr std::uintptr_t AssociatedItem = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"DefaultTags", 0x2C8, "StructProperty"},
            {"SnapGridSize", 0x2E8, "FloatProperty"},
            {"VertSnapGridSize", 0x2EC, "FloatProperty"},
            {"SnapOffset", 0x2F0, "StructProperty"},
            {"CentroidOffset", 0x2FC, "StructProperty"},
            {"BaseLocToPivotOffset", 0x308, "StructProperty"},
            {"bDynamicallyAdjustCullDistance", 0x314, "BoolProperty"},
            {"bEnableRotationSnap", 0x314, "BoolProperty"},
            {"AbilitySystemComponentCreationPolicy", 0x315, "EnumProperty"},
            {"bAutoAssignNavProperties", 0x318, "BoolProperty"},
            {"bBeingDragged", 0x31C, "BoolProperty"},
            {"bBeingRotated", 0x31C, "BoolProperty"},
            {"bBeingTranslated", 0x31C, "BoolProperty"},
            {"bCanInteract", 0x31C, "BoolProperty"},
            {"AbilitySystemComponent", 0x320, "ObjectProperty"},
            {"ReplicatedAbilitySystemComponent", 0x328, "ObjectProperty"},
            {"SavedActorGuid", 0x348, "StructProperty"},
            {"AssociatedItem", 0x358, "ObjectProperty"},
        }};
    };

    struct SproutMovementMode_SlowFall
    {
        static constexpr std::string_view Name = "SproutMovementMode_SlowFall";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t DescendingGravityScale = 0x1B8;
            static constexpr std::uintptr_t JumpHorizontalVelocityScalar = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DescendingGravityScale", 0x1B8, "StructProperty"},
            {"JumpHorizontalVelocityScalar", 0x1E0, "StructProperty"},
        }};
    };

    struct SproutMovementMode_SlowFallRuntimeData
    {
        static constexpr std::string_view Name = "SproutMovementMode_SlowFallRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct SproutRootPlayspace
    {
        static constexpr std::string_view Name = "SproutRootPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoRootPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultInventoryItemTag = 0x810;
            static constexpr std::uintptr_t JunoServerExpiration = 0x818;
            static constexpr std::uintptr_t ProcessPlayerProgressionTime = 0x820;
            static constexpr std::uintptr_t WorldDataAvailable = 0x838;
            static constexpr std::uintptr_t MapManager = 0x850;
            static constexpr std::uintptr_t MapManagerClassKey = 0x858;
            static constexpr std::uintptr_t MapManagerClassMap = 0x860;
            static constexpr std::uintptr_t MarkerManager = 0x870;
            static constexpr std::uintptr_t MarkerManagerClass = 0x878;
            static constexpr std::uintptr_t bCheckForPlayspaceOwner = 0x880;
            static constexpr std::uintptr_t bFiredFirstMatchStartedVerb = 0x881;
            static constexpr std::uintptr_t OwningController = 0x884;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"DefaultInventoryItemTag", 0x810, "StructProperty"},
            {"JunoServerExpiration", 0x818, "ObjectProperty"},
            {"ProcessPlayerProgressionTime", 0x820, "FloatProperty"},
            {"WorldDataAvailable", 0x838, "EnumProperty"},
            {"MapManager", 0x850, "ObjectProperty"},
            {"MapManagerClassKey", 0x858, "StructProperty"},
            {"MapManagerClassMap", 0x860, "MapProperty"},
            {"MarkerManager", 0x870, "ObjectProperty"},
            {"MarkerManagerClass", 0x878, "ClassProperty"},
            {"bCheckForPlayspaceOwner", 0x880, "BoolProperty"},
            {"bFiredFirstMatchStartedVerb", 0x881, "BoolProperty"},
            {"OwningController", 0x884, "WeakObjectProperty"},
        }};
    };

    struct SproutSOGameplayActor
    {
        static constexpr std::string_view Name = "SproutSOGameplayActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableAnimationTickOnDemand = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnableAnimationTickOnDemand", 0x360, "BoolProperty"},
        }};
    };

    struct SproutState_Setup
    {
        static constexpr std::string_view Name = "SproutState_Setup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoState_SetupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t StateRuntimeTags = 0x30;
            static constexpr std::uintptr_t bEvaluateTransition = 0x50;
            static constexpr std::uintptr_t bReplicates = 0x51;
            static constexpr std::uintptr_t bStateBegun = 0x52;
            static constexpr std::uintptr_t bStateEnded = 0x53;
            static constexpr std::uintptr_t InitializationServerTime = 0x54;
            static constexpr std::uintptr_t BeginStateDelay = 0x58;
            static constexpr std::uintptr_t CachedGameplayStateMachine = 0x60;
            static constexpr std::uintptr_t CachedStateMachineManager = 0x68;
            static constexpr std::uintptr_t Hack_StateToDelayProcess = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"StateId", 0x28, "StructProperty"},
            {"StateRuntimeTags", 0x30, "StructProperty"},
            {"bEvaluateTransition", 0x50, "BoolProperty"},
            {"bReplicates", 0x51, "BoolProperty"},
            {"bStateBegun", 0x52, "BoolProperty"},
            {"bStateEnded", 0x53, "BoolProperty"},
            {"InitializationServerTime", 0x54, "FloatProperty"},
            {"BeginStateDelay", 0x58, "FloatProperty"},
            {"CachedGameplayStateMachine", 0x60, "ObjectProperty"},
            {"CachedStateMachineManager", 0x68, "ObjectProperty"},
            {"Hack_StateToDelayProcess", 0x70, "ObjectProperty"},
        }};
    };

}
