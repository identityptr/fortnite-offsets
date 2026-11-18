#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseFortniteAbilities
{
    struct FortAbilityTask_PlayTimelineAnimation
    {
        static constexpr std::string_view Name = "FortAbilityTask_PlayTimelineAnimation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCompleted = 0x78;
            static constexpr std::uintptr_t OnBlendOut = 0x88;
            static constexpr std::uintptr_t OnInterrupted = 0x98;
            static constexpr std::uintptr_t OnCancelled = 0xA8;
            static constexpr std::uintptr_t AnimSequenceToPlay = 0xB8;
            static constexpr std::uintptr_t DynamicMontage = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnCompleted", 0x78, "MulticastInlineDelegateProperty"},
            {"OnBlendOut", 0x88, "MulticastInlineDelegateProperty"},
            {"OnInterrupted", 0x98, "MulticastInlineDelegateProperty"},
            {"OnCancelled", 0xA8, "MulticastInlineDelegateProperty"},
            {"AnimSequenceToPlay", 0xB8, "ObjectProperty"},
            {"DynamicMontage", 0xC0, "ObjectProperty"},
        }};
    };

    struct FortAbilityTask_TimelineExecutor
    {
        static constexpr std::string_view Name = "FortAbilityTask_TimelineExecutor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTimelineCompleted = 0x78;
            static constexpr std::uintptr_t OnTimelineCancelled = 0x88;
            static constexpr std::uintptr_t VerseKeepAlive = 0xC0;
            static constexpr std::uintptr_t ActiveSpans = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnTimelineCompleted", 0x78, "MulticastInlineDelegateProperty"},
            {"OnTimelineCancelled", 0x88, "MulticastInlineDelegateProperty"},
            {"VerseKeepAlive", 0xC0, "ArrayProperty"},
            {"ActiveSpans", 0xD8, "ArrayProperty"},
        }};
    };

    struct FortAbilityTimelineProjectile
    {
        static constexpr std::string_view Name = "FortAbilityTimelineProjectile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerticleFireOffset = 0x6B8;
            static constexpr std::uintptr_t InitialSpeed = 0x6C8;
            static constexpr std::uintptr_t ChargeUpInitialSpeed = 0x6D8;
            static constexpr std::uintptr_t MaxSpeed = 0x6E8;
            static constexpr std::uintptr_t InitialGravityScaleOverride = 0x6F8;
            static constexpr std::uintptr_t ReplicatedMaxSpeed = 0x708;
            static constexpr std::uintptr_t GravityScale = 0x70C;
            static constexpr std::uintptr_t OriginalTarget = 0x710;
            static constexpr std::uintptr_t ChargePercent = 0x718;
            static constexpr std::uintptr_t MomentumTransfer = 0x71C;
            static constexpr std::uintptr_t bAddOwnerVelocity = 0x720;
            static constexpr std::uintptr_t MaxInitialSpeedForOwnerVelocity = 0x728;
            static constexpr std::uintptr_t MaxDeltaVelocityAngleToOwnerVelocity = 0x750;
            static constexpr std::uintptr_t bSpawnPointCanBeUsedByOtherPlayers = 0x778;
            static constexpr std::uintptr_t PlayerSpawnOffset = 0x77C;
            static constexpr std::uintptr_t bRegisterInPerceptionSystem = 0x780;
            static constexpr std::uintptr_t StaticMeshPropToRemoveOnPawn = 0x788;
            static constexpr std::uintptr_t bCanBePickedUpWhenStopped = 0x790;
            static constexpr std::uintptr_t CapsuleComponent = 0x798;
            static constexpr std::uintptr_t ProjectileMovementComponent = 0x7A0;
            static constexpr std::uintptr_t WaterInteractionComponent = 0x7A8;
            static constexpr std::uintptr_t BulletWhipTrackerComponent = 0x7B0;
            static constexpr std::uintptr_t bDummyProjectile = 0x7B8;
            static constexpr std::uintptr_t bStopSimulatingOnHit = 0x7B9;
            static constexpr std::uintptr_t TouchWaterBehavior = 0x7BA;
            static constexpr std::uintptr_t bPassThroughFriendlyPawns = 0x7BB;
            static constexpr std::uintptr_t bApplyNewtonCharacterImpulse = 0x7BC;
            static constexpr std::uintptr_t bDisableCollisionOnStop = 0x7BD;
            static constexpr std::uintptr_t bStoppedSimulatingDueToHit = 0x7BE;
            static constexpr std::uintptr_t bReplicateStopSimulationLocation = 0x7BF;
            static constexpr std::uintptr_t bReplicateStopSimulationLocationOptimized = 0x7C0;
            static constexpr std::uintptr_t bClientInterpMovement = 0x7C1;
            static constexpr std::uintptr_t bClientInterpRotation = 0x7C2;
            static constexpr std::uintptr_t bUseClientsidePrediction = 0x7C3;
            static constexpr std::uintptr_t bIsPredictedProjectile = 0x7C4;
            static constexpr std::uintptr_t bHasLocalPredictedCounterpart = 0x7C5;
            static constexpr std::uintptr_t PredictionKey = 0x7C8;
            static constexpr std::uintptr_t bAutoSelectAttachedForInterp = 0x7D0;
            static constexpr std::uintptr_t bFiredWhileTargeting = 0x7D8;
            static constexpr std::uintptr_t ResumeSimulationCount = 0x7DC;
            static constexpr std::uintptr_t SyncID = 0x7E4;
            static constexpr std::uintptr_t SimulationStoppingHit = 0x7E8;
            static constexpr std::uintptr_t WeaponResponseType = 0x8F0;
            static constexpr std::uintptr_t DefaultTags = 0x928;
            static constexpr std::uintptr_t ProjectileGameplayCues = 0x948;
            static constexpr std::uintptr_t CachedPassByPawn = 0x988;
            static constexpr std::uintptr_t SkyTubeForceMultiplier = 0x9A8;
            static constexpr std::uintptr_t CurrentSkyTube = 0x9B0;
            static constexpr std::uintptr_t CachedImpactResult = 0x9B8;
            static constexpr std::uintptr_t BulletWhipTrackerComponentClass = 0xAB0;
            static constexpr std::uintptr_t bResetOverlapRestrictionsOnBounce = 0xAB9;
            static constexpr std::uintptr_t MaxLifespanOnStop = 0xABC;
            static constexpr std::uintptr_t LifespanOnHitDoNotExplode = 0xAC0;
            static constexpr std::uintptr_t bAutoKillWhenExceedingMaxSimulationDistance = 0xAC4;
            static constexpr std::uintptr_t bClampLocationAtMaxSimulationDistance = 0xAC4;
            static constexpr std::uintptr_t bStopSimulationAtDistanceFromInitialLocation = 0xAC4;
            static constexpr std::uintptr_t MaxSimulationDistanceSquaredOverride = 0xAC8;
            static constexpr std::uintptr_t ProjectileThrownStatCategoryNames = 0xAE8;
        };

        inline static constexpr std::array<PropertyInfo, 58> Properties{{
            {"VerticleFireOffset", 0x6B8, "StructProperty"},
            {"InitialSpeed", 0x6C8, "StructProperty"},
            {"ChargeUpInitialSpeed", 0x6D8, "StructProperty"},
            {"MaxSpeed", 0x6E8, "StructProperty"},
            {"InitialGravityScaleOverride", 0x6F8, "StructProperty"},
            {"ReplicatedMaxSpeed", 0x708, "FloatProperty"},
            {"GravityScale", 0x70C, "FloatProperty"},
            {"OriginalTarget", 0x710, "WeakObjectProperty"},
            {"ChargePercent", 0x718, "FloatProperty"},
            {"MomentumTransfer", 0x71C, "FloatProperty"},
            {"bAddOwnerVelocity", 0x720, "BoolProperty"},
            {"MaxInitialSpeedForOwnerVelocity", 0x728, "StructProperty"},
            {"MaxDeltaVelocityAngleToOwnerVelocity", 0x750, "StructProperty"},
            {"bSpawnPointCanBeUsedByOtherPlayers", 0x778, "BoolProperty"},
            {"PlayerSpawnOffset", 0x77C, "FloatProperty"},
            {"bRegisterInPerceptionSystem", 0x780, "BoolProperty"},
            {"StaticMeshPropToRemoveOnPawn", 0x788, "ObjectProperty"},
            {"bCanBePickedUpWhenStopped", 0x790, "BoolProperty"},
            {"CapsuleComponent", 0x798, "ObjectProperty"},
            {"ProjectileMovementComponent", 0x7A0, "ObjectProperty"},
            {"WaterInteractionComponent", 0x7A8, "ObjectProperty"},
            {"BulletWhipTrackerComponent", 0x7B0, "ObjectProperty"},
            {"bDummyProjectile", 0x7B8, "BoolProperty"},
            {"bStopSimulatingOnHit", 0x7B9, "BoolProperty"},
            {"TouchWaterBehavior", 0x7BA, "EnumProperty"},
            {"bPassThroughFriendlyPawns", 0x7BB, "BoolProperty"},
            {"bApplyNewtonCharacterImpulse", 0x7BC, "BoolProperty"},
            {"bDisableCollisionOnStop", 0x7BD, "BoolProperty"},
            {"bStoppedSimulatingDueToHit", 0x7BE, "BoolProperty"},
            {"bReplicateStopSimulationLocation", 0x7BF, "BoolProperty"},
            {"bReplicateStopSimulationLocationOptimized", 0x7C0, "BoolProperty"},
            {"bClientInterpMovement", 0x7C1, "BoolProperty"},
            {"bClientInterpRotation", 0x7C2, "BoolProperty"},
            {"bUseClientsidePrediction", 0x7C3, "BoolProperty"},
            {"bIsPredictedProjectile", 0x7C4, "BoolProperty"},
            {"bHasLocalPredictedCounterpart", 0x7C5, "BoolProperty"},
            {"PredictionKey", 0x7C8, "StructProperty"},
            {"bAutoSelectAttachedForInterp", 0x7D0, "BoolProperty"},
            {"bFiredWhileTargeting", 0x7D8, "BoolProperty"},
            {"ResumeSimulationCount", 0x7DC, "IntProperty"},
            {"SyncID", 0x7E4, "UInt16Property"},
            {"SimulationStoppingHit", 0x7E8, "StructProperty"},
            {"WeaponResponseType", 0x8F0, "ByteProperty"},
            {"DefaultTags", 0x928, "StructProperty"},
            {"ProjectileGameplayCues", 0x948, "StructProperty"},
            {"CachedPassByPawn", 0x988, "ObjectProperty"},
            {"SkyTubeForceMultiplier", 0x9A8, "FloatProperty"},
            {"CurrentSkyTube", 0x9B0, "ObjectProperty"},
            {"CachedImpactResult", 0x9B8, "StructProperty"},
            {"BulletWhipTrackerComponentClass", 0xAB0, "ClassProperty"},
            {"bResetOverlapRestrictionsOnBounce", 0xAB9, "BoolProperty"},
            {"MaxLifespanOnStop", 0xABC, "FloatProperty"},
            {"LifespanOnHitDoNotExplode", 0xAC0, "FloatProperty"},
            {"bAutoKillWhenExceedingMaxSimulationDistance", 0xAC4, "BoolProperty"},
            {"bClampLocationAtMaxSimulationDistance", 0xAC4, "BoolProperty"},
            {"bStopSimulationAtDistanceFromInitialLocation", 0xAC4, "BoolProperty"},
            {"MaxSimulationDistanceSquaredOverride", 0xAC8, "FloatProperty"},
            {"ProjectileThrownStatCategoryNames", 0xAE8, "ArrayProperty"},
        }};
    };

    struct FortTempTimelineAbility
    {
        static constexpr std::string_view Name = "FortTempTimelineAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t TimelineExecutorTask = 0xB50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimelineExecutorTask", 0xB50, "ObjectProperty"},
        }};
    };

    struct FortTempTimelineAbility_ServerUse
    {
        static constexpr std::string_view Name = "FortTempTimelineAbility_ServerUse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTempTimelineAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t TimelineExecutorTask = 0xB50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimelineExecutorTask", 0xB50, "ObjectProperty"},
        }};
    };

    struct GCNotify_TimelineBurstParticle
    {
        static constexpr std::string_view Name = "GCNotify_TimelineBurstParticle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueNotify_Static";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCueTag = 0x28;
            static constexpr std::uintptr_t GameplayCueName = 0x2C;
            static constexpr std::uintptr_t IsOverride = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GameplayCueTag", 0x28, "StructProperty"},
            {"GameplayCueName", 0x2C, "NameProperty"},
            {"IsOverride", 0x30, "BoolProperty"},
        }};
    };

    struct GCNotify_TimelineBurstSound
    {
        static constexpr std::string_view Name = "GCNotify_TimelineBurstSound";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueNotify_Static";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCueTag = 0x28;
            static constexpr std::uintptr_t GameplayCueName = 0x2C;
            static constexpr std::uintptr_t IsOverride = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GameplayCueTag", 0x28, "StructProperty"},
            {"GameplayCueName", 0x2C, "NameProperty"},
            {"IsOverride", 0x30, "BoolProperty"},
        }};
    };

    struct GCNotify_TimelineLoopParticle
    {
        static constexpr std::string_view Name = "GCNotify_TimelineLoopParticle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueNotify_Looping";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnedInstances = 0xE60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnedInstances", 0xE60, "MapProperty"},
        }};
    };

    struct GCNotify_TimelineLoopSound
    {
        static constexpr std::string_view Name = "GCNotify_TimelineLoopSound";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueNotify_Looping";
        struct Offsets
        {
            static constexpr std::uintptr_t FadeOutDuration = 0xE60;
            static constexpr std::uintptr_t SpawnedInstances = 0xE68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FadeOutDuration", 0xE60, "FloatProperty"},
            {"SpawnedInstances", 0xE68, "MapProperty"},
        }};
    };

    struct GameplayCueLoop_TimelineSpanFX
    {
        static constexpr std::string_view Name = "GameplayCueLoop_TimelineSpanFX";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextType = 0x388;
            static constexpr std::uintptr_t EffectChooser = 0x390;
            static constexpr std::uintptr_t ApplicationBurst = 0x660;
            static constexpr std::uintptr_t ApplicationResult = 0x7A8;
            static constexpr std::uintptr_t DefaultLoopingAttachment = 0x7F0;
            static constexpr std::uintptr_t LoopingParticles = 0x848;
            static constexpr std::uintptr_t LoopingSounds = 0x858;
            static constexpr std::uintptr_t LoopingForceFeedbackEffect = 0x868;
            static constexpr std::uintptr_t LoopingCameraLensEffect = 0x890;
            static constexpr std::uintptr_t LoopingCameraShake = 0x8A8;
            static constexpr std::uintptr_t LoopingResult = 0x8E0;
            static constexpr std::uintptr_t RecurringBurst = 0x928;
            static constexpr std::uintptr_t RecurringResult = 0xA70;
            static constexpr std::uintptr_t RemovalBurst = 0xAB8;
            static constexpr std::uintptr_t RemovalResult = 0xC00;
            static constexpr std::uintptr_t bTickEnabled = 0xC48;
            static constexpr std::uintptr_t TickInterval = 0xC4C;
            static constexpr std::uintptr_t TickGroup = 0xC50;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"ContextType", 0x388, "EnumProperty"},
            {"EffectChooser", 0x390, "ObjectProperty"},
            {"ApplicationBurst", 0x660, "StructProperty"},
            {"ApplicationResult", 0x7A8, "StructProperty"},
            {"DefaultLoopingAttachment", 0x7F0, "StructProperty"},
            {"LoopingParticles", 0x848, "ArrayProperty"},
            {"LoopingSounds", 0x858, "ArrayProperty"},
            {"LoopingForceFeedbackEffect", 0x868, "StructProperty"},
            {"LoopingCameraLensEffect", 0x890, "StructProperty"},
            {"LoopingCameraShake", 0x8A8, "StructProperty"},
            {"LoopingResult", 0x8E0, "StructProperty"},
            {"RecurringBurst", 0x928, "StructProperty"},
            {"RecurringResult", 0xA70, "StructProperty"},
            {"RemovalBurst", 0xAB8, "StructProperty"},
            {"RemovalResult", 0xC00, "StructProperty"},
            {"bTickEnabled", 0xC48, "BoolProperty"},
            {"TickInterval", 0xC4C, "FloatProperty"},
            {"TickGroup", 0xC50, "ByteProperty"},
        }};
    };

    struct GameplayCueNotify_TimelinePointFX
    {
        static constexpr std::string_view Name = "GameplayCueNotify_TimelinePointFX";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Burst";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCondition = 0x38;
            static constexpr std::uintptr_t DefaultAttachment = 0x70;
            static constexpr std::uintptr_t BurstEffectData = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultCondition", 0x38, "StructProperty"},
            {"DefaultAttachment", 0x70, "StructProperty"},
            {"BurstEffectData", 0xC8, "StructProperty"},
        }};
    };

    struct TimelineSpanParticleCue
    {
        static constexpr std::string_view Name = "TimelineSpanParticleCue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t DurationPolicy = 0x30;
            static constexpr std::uintptr_t DurationMagnitude = 0x38;
            static constexpr std::uintptr_t MaxDurationMagnitude = 0x210;
            static constexpr std::uintptr_t Period = 0x3E8;
            static constexpr std::uintptr_t bExecutePeriodicEffectOnApplication = 0x410;
            static constexpr std::uintptr_t PeriodicInhibitionPolicy = 0x411;
            static constexpr std::uintptr_t Modifiers = 0x418;
            static constexpr std::uintptr_t Executions = 0x428;
            static constexpr std::uintptr_t ChanceToApplyToTarget = 0x438;
            static constexpr std::uintptr_t ApplicationRequirements = 0x460;
            static constexpr std::uintptr_t ConditionalGameplayEffects = 0x470;
            static constexpr std::uintptr_t OverflowEffects = 0x480;
            static constexpr std::uintptr_t bDenyOverflowApplication = 0x490;
            static constexpr std::uintptr_t bClearStackOnOverflow = 0x491;
            static constexpr std::uintptr_t PrematureExpirationEffectClasses = 0x498;
            static constexpr std::uintptr_t RoutineExpirationEffectClasses = 0x4A8;
            static constexpr std::uintptr_t bRequireModifierSuccessToTriggerCues = 0x4B8;
            static constexpr std::uintptr_t bSuppressStackingCues = 0x4B9;
            static constexpr std::uintptr_t GameplayCues = 0x4C0;
            static constexpr std::uintptr_t UIData = 0x4D0;
            static constexpr std::uintptr_t InheritableGameplayEffectTags = 0x4D8;
            static constexpr std::uintptr_t InheritableOwnedTagsContainer = 0x538;
            static constexpr std::uintptr_t InheritableBlockedAbilityTagsContainer = 0x598;
            static constexpr std::uintptr_t OngoingTagRequirements = 0x5F8;
            static constexpr std::uintptr_t ApplicationTagRequirements = 0x680;
            static constexpr std::uintptr_t RemovalTagRequirements = 0x708;
            static constexpr std::uintptr_t RemoveGameplayEffectsWithTags = 0x790;
            static constexpr std::uintptr_t GrantedApplicationImmunityTags = 0x7F0;
            static constexpr std::uintptr_t GrantedApplicationImmunityQuery = 0x878;
            static constexpr std::uintptr_t RemoveGameplayEffectQuery = 0xA18;
            static constexpr std::uintptr_t StackingType = 0xBB1;
            static constexpr std::uintptr_t StackLimitCount = 0xBB4;
            static constexpr std::uintptr_t StackDurationRefreshPolicy = 0xBB8;
            static constexpr std::uintptr_t StackPeriodResetPolicy = 0xBB9;
            static constexpr std::uintptr_t StackExpirationPolicy = 0xBBA;
            static constexpr std::uintptr_t bFactorInStackCount = 0xBBB;
            static constexpr std::uintptr_t GrantedAbilities = 0xBC0;
            static constexpr std::uintptr_t GEComponents = 0xC30;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"DurationPolicy", 0x30, "EnumProperty"},
            {"DurationMagnitude", 0x38, "StructProperty"},
            {"MaxDurationMagnitude", 0x210, "StructProperty"},
            {"Period", 0x3E8, "StructProperty"},
            {"bExecutePeriodicEffectOnApplication", 0x410, "BoolProperty"},
            {"PeriodicInhibitionPolicy", 0x411, "EnumProperty"},
            {"Modifiers", 0x418, "ArrayProperty"},
            {"Executions", 0x428, "ArrayProperty"},
            {"ChanceToApplyToTarget", 0x438, "StructProperty"},
            {"ApplicationRequirements", 0x460, "ArrayProperty"},
            {"ConditionalGameplayEffects", 0x470, "ArrayProperty"},
            {"OverflowEffects", 0x480, "ArrayProperty"},
            {"bDenyOverflowApplication", 0x490, "BoolProperty"},
            {"bClearStackOnOverflow", 0x491, "BoolProperty"},
            {"PrematureExpirationEffectClasses", 0x498, "ArrayProperty"},
            {"RoutineExpirationEffectClasses", 0x4A8, "ArrayProperty"},
            {"bRequireModifierSuccessToTriggerCues", 0x4B8, "BoolProperty"},
            {"bSuppressStackingCues", 0x4B9, "BoolProperty"},
            {"GameplayCues", 0x4C0, "ArrayProperty"},
            {"UIData", 0x4D0, "ObjectProperty"},
            {"InheritableGameplayEffectTags", 0x4D8, "StructProperty"},
            {"InheritableOwnedTagsContainer", 0x538, "StructProperty"},
            {"InheritableBlockedAbilityTagsContainer", 0x598, "StructProperty"},
            {"OngoingTagRequirements", 0x5F8, "StructProperty"},
            {"ApplicationTagRequirements", 0x680, "StructProperty"},
            {"RemovalTagRequirements", 0x708, "StructProperty"},
            {"RemoveGameplayEffectsWithTags", 0x790, "StructProperty"},
            {"GrantedApplicationImmunityTags", 0x7F0, "StructProperty"},
            {"GrantedApplicationImmunityQuery", 0x878, "StructProperty"},
            {"RemoveGameplayEffectQuery", 0xA18, "StructProperty"},
            {"StackingType", 0xBB1, "EnumProperty"},
            {"StackLimitCount", 0xBB4, "IntProperty"},
            {"StackDurationRefreshPolicy", 0xBB8, "EnumProperty"},
            {"StackPeriodResetPolicy", 0xBB9, "EnumProperty"},
            {"StackExpirationPolicy", 0xBBA, "EnumProperty"},
            {"bFactorInStackCount", 0xBBB, "BoolProperty"},
            {"GrantedAbilities", 0xBC0, "ArrayProperty"},
            {"GEComponents", 0xC30, "ArrayProperty"},
        }};
    };

    struct TimelineSpanParticleCueRemoval
    {
        static constexpr std::string_view Name = "TimelineSpanParticleCueRemoval";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t DurationPolicy = 0x30;
            static constexpr std::uintptr_t DurationMagnitude = 0x38;
            static constexpr std::uintptr_t MaxDurationMagnitude = 0x210;
            static constexpr std::uintptr_t Period = 0x3E8;
            static constexpr std::uintptr_t bExecutePeriodicEffectOnApplication = 0x410;
            static constexpr std::uintptr_t PeriodicInhibitionPolicy = 0x411;
            static constexpr std::uintptr_t Modifiers = 0x418;
            static constexpr std::uintptr_t Executions = 0x428;
            static constexpr std::uintptr_t ChanceToApplyToTarget = 0x438;
            static constexpr std::uintptr_t ApplicationRequirements = 0x460;
            static constexpr std::uintptr_t ConditionalGameplayEffects = 0x470;
            static constexpr std::uintptr_t OverflowEffects = 0x480;
            static constexpr std::uintptr_t bDenyOverflowApplication = 0x490;
            static constexpr std::uintptr_t bClearStackOnOverflow = 0x491;
            static constexpr std::uintptr_t PrematureExpirationEffectClasses = 0x498;
            static constexpr std::uintptr_t RoutineExpirationEffectClasses = 0x4A8;
            static constexpr std::uintptr_t bRequireModifierSuccessToTriggerCues = 0x4B8;
            static constexpr std::uintptr_t bSuppressStackingCues = 0x4B9;
            static constexpr std::uintptr_t GameplayCues = 0x4C0;
            static constexpr std::uintptr_t UIData = 0x4D0;
            static constexpr std::uintptr_t InheritableGameplayEffectTags = 0x4D8;
            static constexpr std::uintptr_t InheritableOwnedTagsContainer = 0x538;
            static constexpr std::uintptr_t InheritableBlockedAbilityTagsContainer = 0x598;
            static constexpr std::uintptr_t OngoingTagRequirements = 0x5F8;
            static constexpr std::uintptr_t ApplicationTagRequirements = 0x680;
            static constexpr std::uintptr_t RemovalTagRequirements = 0x708;
            static constexpr std::uintptr_t RemoveGameplayEffectsWithTags = 0x790;
            static constexpr std::uintptr_t GrantedApplicationImmunityTags = 0x7F0;
            static constexpr std::uintptr_t GrantedApplicationImmunityQuery = 0x878;
            static constexpr std::uintptr_t RemoveGameplayEffectQuery = 0xA18;
            static constexpr std::uintptr_t StackingType = 0xBB1;
            static constexpr std::uintptr_t StackLimitCount = 0xBB4;
            static constexpr std::uintptr_t StackDurationRefreshPolicy = 0xBB8;
            static constexpr std::uintptr_t StackPeriodResetPolicy = 0xBB9;
            static constexpr std::uintptr_t StackExpirationPolicy = 0xBBA;
            static constexpr std::uintptr_t bFactorInStackCount = 0xBBB;
            static constexpr std::uintptr_t GrantedAbilities = 0xBC0;
            static constexpr std::uintptr_t GEComponents = 0xC30;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"DurationPolicy", 0x30, "EnumProperty"},
            {"DurationMagnitude", 0x38, "StructProperty"},
            {"MaxDurationMagnitude", 0x210, "StructProperty"},
            {"Period", 0x3E8, "StructProperty"},
            {"bExecutePeriodicEffectOnApplication", 0x410, "BoolProperty"},
            {"PeriodicInhibitionPolicy", 0x411, "EnumProperty"},
            {"Modifiers", 0x418, "ArrayProperty"},
            {"Executions", 0x428, "ArrayProperty"},
            {"ChanceToApplyToTarget", 0x438, "StructProperty"},
            {"ApplicationRequirements", 0x460, "ArrayProperty"},
            {"ConditionalGameplayEffects", 0x470, "ArrayProperty"},
            {"OverflowEffects", 0x480, "ArrayProperty"},
            {"bDenyOverflowApplication", 0x490, "BoolProperty"},
            {"bClearStackOnOverflow", 0x491, "BoolProperty"},
            {"PrematureExpirationEffectClasses", 0x498, "ArrayProperty"},
            {"RoutineExpirationEffectClasses", 0x4A8, "ArrayProperty"},
            {"bRequireModifierSuccessToTriggerCues", 0x4B8, "BoolProperty"},
            {"bSuppressStackingCues", 0x4B9, "BoolProperty"},
            {"GameplayCues", 0x4C0, "ArrayProperty"},
            {"UIData", 0x4D0, "ObjectProperty"},
            {"InheritableGameplayEffectTags", 0x4D8, "StructProperty"},
            {"InheritableOwnedTagsContainer", 0x538, "StructProperty"},
            {"InheritableBlockedAbilityTagsContainer", 0x598, "StructProperty"},
            {"OngoingTagRequirements", 0x5F8, "StructProperty"},
            {"ApplicationTagRequirements", 0x680, "StructProperty"},
            {"RemovalTagRequirements", 0x708, "StructProperty"},
            {"RemoveGameplayEffectsWithTags", 0x790, "StructProperty"},
            {"GrantedApplicationImmunityTags", 0x7F0, "StructProperty"},
            {"GrantedApplicationImmunityQuery", 0x878, "StructProperty"},
            {"RemoveGameplayEffectQuery", 0xA18, "StructProperty"},
            {"StackingType", 0xBB1, "EnumProperty"},
            {"StackLimitCount", 0xBB4, "IntProperty"},
            {"StackDurationRefreshPolicy", 0xBB8, "EnumProperty"},
            {"StackPeriodResetPolicy", 0xBB9, "EnumProperty"},
            {"StackExpirationPolicy", 0xBBA, "EnumProperty"},
            {"bFactorInStackCount", 0xBBB, "BoolProperty"},
            {"GrantedAbilities", 0xBC0, "ArrayProperty"},
            {"GEComponents", 0xC30, "ArrayProperty"},
        }};
    };

    struct TimelineSpanSoundCue
    {
        static constexpr std::string_view Name = "TimelineSpanSoundCue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t DurationPolicy = 0x30;
            static constexpr std::uintptr_t DurationMagnitude = 0x38;
            static constexpr std::uintptr_t MaxDurationMagnitude = 0x210;
            static constexpr std::uintptr_t Period = 0x3E8;
            static constexpr std::uintptr_t bExecutePeriodicEffectOnApplication = 0x410;
            static constexpr std::uintptr_t PeriodicInhibitionPolicy = 0x411;
            static constexpr std::uintptr_t Modifiers = 0x418;
            static constexpr std::uintptr_t Executions = 0x428;
            static constexpr std::uintptr_t ChanceToApplyToTarget = 0x438;
            static constexpr std::uintptr_t ApplicationRequirements = 0x460;
            static constexpr std::uintptr_t ConditionalGameplayEffects = 0x470;
            static constexpr std::uintptr_t OverflowEffects = 0x480;
            static constexpr std::uintptr_t bDenyOverflowApplication = 0x490;
            static constexpr std::uintptr_t bClearStackOnOverflow = 0x491;
            static constexpr std::uintptr_t PrematureExpirationEffectClasses = 0x498;
            static constexpr std::uintptr_t RoutineExpirationEffectClasses = 0x4A8;
            static constexpr std::uintptr_t bRequireModifierSuccessToTriggerCues = 0x4B8;
            static constexpr std::uintptr_t bSuppressStackingCues = 0x4B9;
            static constexpr std::uintptr_t GameplayCues = 0x4C0;
            static constexpr std::uintptr_t UIData = 0x4D0;
            static constexpr std::uintptr_t InheritableGameplayEffectTags = 0x4D8;
            static constexpr std::uintptr_t InheritableOwnedTagsContainer = 0x538;
            static constexpr std::uintptr_t InheritableBlockedAbilityTagsContainer = 0x598;
            static constexpr std::uintptr_t OngoingTagRequirements = 0x5F8;
            static constexpr std::uintptr_t ApplicationTagRequirements = 0x680;
            static constexpr std::uintptr_t RemovalTagRequirements = 0x708;
            static constexpr std::uintptr_t RemoveGameplayEffectsWithTags = 0x790;
            static constexpr std::uintptr_t GrantedApplicationImmunityTags = 0x7F0;
            static constexpr std::uintptr_t GrantedApplicationImmunityQuery = 0x878;
            static constexpr std::uintptr_t RemoveGameplayEffectQuery = 0xA18;
            static constexpr std::uintptr_t StackingType = 0xBB1;
            static constexpr std::uintptr_t StackLimitCount = 0xBB4;
            static constexpr std::uintptr_t StackDurationRefreshPolicy = 0xBB8;
            static constexpr std::uintptr_t StackPeriodResetPolicy = 0xBB9;
            static constexpr std::uintptr_t StackExpirationPolicy = 0xBBA;
            static constexpr std::uintptr_t bFactorInStackCount = 0xBBB;
            static constexpr std::uintptr_t GrantedAbilities = 0xBC0;
            static constexpr std::uintptr_t GEComponents = 0xC30;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"DurationPolicy", 0x30, "EnumProperty"},
            {"DurationMagnitude", 0x38, "StructProperty"},
            {"MaxDurationMagnitude", 0x210, "StructProperty"},
            {"Period", 0x3E8, "StructProperty"},
            {"bExecutePeriodicEffectOnApplication", 0x410, "BoolProperty"},
            {"PeriodicInhibitionPolicy", 0x411, "EnumProperty"},
            {"Modifiers", 0x418, "ArrayProperty"},
            {"Executions", 0x428, "ArrayProperty"},
            {"ChanceToApplyToTarget", 0x438, "StructProperty"},
            {"ApplicationRequirements", 0x460, "ArrayProperty"},
            {"ConditionalGameplayEffects", 0x470, "ArrayProperty"},
            {"OverflowEffects", 0x480, "ArrayProperty"},
            {"bDenyOverflowApplication", 0x490, "BoolProperty"},
            {"bClearStackOnOverflow", 0x491, "BoolProperty"},
            {"PrematureExpirationEffectClasses", 0x498, "ArrayProperty"},
            {"RoutineExpirationEffectClasses", 0x4A8, "ArrayProperty"},
            {"bRequireModifierSuccessToTriggerCues", 0x4B8, "BoolProperty"},
            {"bSuppressStackingCues", 0x4B9, "BoolProperty"},
            {"GameplayCues", 0x4C0, "ArrayProperty"},
            {"UIData", 0x4D0, "ObjectProperty"},
            {"InheritableGameplayEffectTags", 0x4D8, "StructProperty"},
            {"InheritableOwnedTagsContainer", 0x538, "StructProperty"},
            {"InheritableBlockedAbilityTagsContainer", 0x598, "StructProperty"},
            {"OngoingTagRequirements", 0x5F8, "StructProperty"},
            {"ApplicationTagRequirements", 0x680, "StructProperty"},
            {"RemovalTagRequirements", 0x708, "StructProperty"},
            {"RemoveGameplayEffectsWithTags", 0x790, "StructProperty"},
            {"GrantedApplicationImmunityTags", 0x7F0, "StructProperty"},
            {"GrantedApplicationImmunityQuery", 0x878, "StructProperty"},
            {"RemoveGameplayEffectQuery", 0xA18, "StructProperty"},
            {"StackingType", 0xBB1, "EnumProperty"},
            {"StackLimitCount", 0xBB4, "IntProperty"},
            {"StackDurationRefreshPolicy", 0xBB8, "EnumProperty"},
            {"StackPeriodResetPolicy", 0xBB9, "EnumProperty"},
            {"StackExpirationPolicy", 0xBBA, "EnumProperty"},
            {"bFactorInStackCount", 0xBBB, "BoolProperty"},
            {"GrantedAbilities", 0xBC0, "ArrayProperty"},
            {"GEComponents", 0xC30, "ArrayProperty"},
        }};
    };

    struct TimelineSpanSoundCueRemoval
    {
        static constexpr std::string_view Name = "TimelineSpanSoundCueRemoval";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t DurationPolicy = 0x30;
            static constexpr std::uintptr_t DurationMagnitude = 0x38;
            static constexpr std::uintptr_t MaxDurationMagnitude = 0x210;
            static constexpr std::uintptr_t Period = 0x3E8;
            static constexpr std::uintptr_t bExecutePeriodicEffectOnApplication = 0x410;
            static constexpr std::uintptr_t PeriodicInhibitionPolicy = 0x411;
            static constexpr std::uintptr_t Modifiers = 0x418;
            static constexpr std::uintptr_t Executions = 0x428;
            static constexpr std::uintptr_t ChanceToApplyToTarget = 0x438;
            static constexpr std::uintptr_t ApplicationRequirements = 0x460;
            static constexpr std::uintptr_t ConditionalGameplayEffects = 0x470;
            static constexpr std::uintptr_t OverflowEffects = 0x480;
            static constexpr std::uintptr_t bDenyOverflowApplication = 0x490;
            static constexpr std::uintptr_t bClearStackOnOverflow = 0x491;
            static constexpr std::uintptr_t PrematureExpirationEffectClasses = 0x498;
            static constexpr std::uintptr_t RoutineExpirationEffectClasses = 0x4A8;
            static constexpr std::uintptr_t bRequireModifierSuccessToTriggerCues = 0x4B8;
            static constexpr std::uintptr_t bSuppressStackingCues = 0x4B9;
            static constexpr std::uintptr_t GameplayCues = 0x4C0;
            static constexpr std::uintptr_t UIData = 0x4D0;
            static constexpr std::uintptr_t InheritableGameplayEffectTags = 0x4D8;
            static constexpr std::uintptr_t InheritableOwnedTagsContainer = 0x538;
            static constexpr std::uintptr_t InheritableBlockedAbilityTagsContainer = 0x598;
            static constexpr std::uintptr_t OngoingTagRequirements = 0x5F8;
            static constexpr std::uintptr_t ApplicationTagRequirements = 0x680;
            static constexpr std::uintptr_t RemovalTagRequirements = 0x708;
            static constexpr std::uintptr_t RemoveGameplayEffectsWithTags = 0x790;
            static constexpr std::uintptr_t GrantedApplicationImmunityTags = 0x7F0;
            static constexpr std::uintptr_t GrantedApplicationImmunityQuery = 0x878;
            static constexpr std::uintptr_t RemoveGameplayEffectQuery = 0xA18;
            static constexpr std::uintptr_t StackingType = 0xBB1;
            static constexpr std::uintptr_t StackLimitCount = 0xBB4;
            static constexpr std::uintptr_t StackDurationRefreshPolicy = 0xBB8;
            static constexpr std::uintptr_t StackPeriodResetPolicy = 0xBB9;
            static constexpr std::uintptr_t StackExpirationPolicy = 0xBBA;
            static constexpr std::uintptr_t bFactorInStackCount = 0xBBB;
            static constexpr std::uintptr_t GrantedAbilities = 0xBC0;
            static constexpr std::uintptr_t GEComponents = 0xC30;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"DurationPolicy", 0x30, "EnumProperty"},
            {"DurationMagnitude", 0x38, "StructProperty"},
            {"MaxDurationMagnitude", 0x210, "StructProperty"},
            {"Period", 0x3E8, "StructProperty"},
            {"bExecutePeriodicEffectOnApplication", 0x410, "BoolProperty"},
            {"PeriodicInhibitionPolicy", 0x411, "EnumProperty"},
            {"Modifiers", 0x418, "ArrayProperty"},
            {"Executions", 0x428, "ArrayProperty"},
            {"ChanceToApplyToTarget", 0x438, "StructProperty"},
            {"ApplicationRequirements", 0x460, "ArrayProperty"},
            {"ConditionalGameplayEffects", 0x470, "ArrayProperty"},
            {"OverflowEffects", 0x480, "ArrayProperty"},
            {"bDenyOverflowApplication", 0x490, "BoolProperty"},
            {"bClearStackOnOverflow", 0x491, "BoolProperty"},
            {"PrematureExpirationEffectClasses", 0x498, "ArrayProperty"},
            {"RoutineExpirationEffectClasses", 0x4A8, "ArrayProperty"},
            {"bRequireModifierSuccessToTriggerCues", 0x4B8, "BoolProperty"},
            {"bSuppressStackingCues", 0x4B9, "BoolProperty"},
            {"GameplayCues", 0x4C0, "ArrayProperty"},
            {"UIData", 0x4D0, "ObjectProperty"},
            {"InheritableGameplayEffectTags", 0x4D8, "StructProperty"},
            {"InheritableOwnedTagsContainer", 0x538, "StructProperty"},
            {"InheritableBlockedAbilityTagsContainer", 0x598, "StructProperty"},
            {"OngoingTagRequirements", 0x5F8, "StructProperty"},
            {"ApplicationTagRequirements", 0x680, "StructProperty"},
            {"RemovalTagRequirements", 0x708, "StructProperty"},
            {"RemoveGameplayEffectsWithTags", 0x790, "StructProperty"},
            {"GrantedApplicationImmunityTags", 0x7F0, "StructProperty"},
            {"GrantedApplicationImmunityQuery", 0x878, "StructProperty"},
            {"RemoveGameplayEffectQuery", 0xA18, "StructProperty"},
            {"StackingType", 0xBB1, "EnumProperty"},
            {"StackLimitCount", 0xBB4, "IntProperty"},
            {"StackDurationRefreshPolicy", 0xBB8, "EnumProperty"},
            {"StackPeriodResetPolicy", 0xBB9, "EnumProperty"},
            {"StackExpirationPolicy", 0xBBA, "EnumProperty"},
            {"bFactorInStackCount", 0xBBB, "BoolProperty"},
            {"GrantedAbilities", 0xBC0, "ArrayProperty"},
            {"GEComponents", 0xC30, "ArrayProperty"},
        }};
    };

    struct VerseReticleTraceSelectionTask
    {
        static constexpr std::string_view Name = "VerseReticleTraceSelectionTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingSelectionTask_Trace_FromCamera";
        struct Offsets
        {
            static constexpr std::uintptr_t TraceRange = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TraceRange", 0x178, "FloatProperty"},
        }};
    };

    struct VerseTargetingFilterTask_Affiliation
    {
        static constexpr std::string_view Name = "VerseTargetingFilterTask_Affiliation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingFilterTask_BasicFilterTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t Affiliations = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Affiliations", 0x28, "ArrayProperty"},
        }};
    };

    struct VerseTargetingFilterTask_Wedge
    {
        static constexpr std::string_view Name = "VerseTargetingFilterTask_Wedge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingFilterTask_BasicFilterTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t AngleRadians = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AngleRadians", 0x28, "FloatProperty"},
        }};
    };

    struct VerseWedgeAOESelectionTask
    {
        static constexpr std::string_view Name = "VerseWedgeAOESelectionTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingSelectionTask_AOE";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeType = 0x28;
            static constexpr std::uintptr_t CollisionChannel = 0x29;
            static constexpr std::uintptr_t CollisionProfileName = 0x2C;
            static constexpr std::uintptr_t CollisionObjectTypes = 0x30;
            static constexpr std::uintptr_t DefaultSourceOffset = 0x40;
            static constexpr std::uintptr_t DefaultSourceRotationOffset = 0x58;
            static constexpr std::uintptr_t bIgnoreInstigatorActor = 0x70;
            static constexpr std::uintptr_t bIgnoreSourceActor = 0x70;
            static constexpr std::uintptr_t bTraceComplex = 0x70;
            static constexpr std::uintptr_t bUseRelativeOffset = 0x70;
            static constexpr std::uintptr_t HalfExtentX = 0x78;
            static constexpr std::uintptr_t HalfExtentY = 0xA0;
            static constexpr std::uintptr_t HalfExtentZ = 0xC8;
            static constexpr std::uintptr_t Radius = 0xF0;
            static constexpr std::uintptr_t HalfHeight = 0x118;
            static constexpr std::uintptr_t ComponentTag = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ShapeType", 0x28, "EnumProperty"},
            {"CollisionChannel", 0x29, "ByteProperty"},
            {"CollisionProfileName", 0x2C, "StructProperty"},
            {"CollisionObjectTypes", 0x30, "ArrayProperty"},
            {"DefaultSourceOffset", 0x40, "StructProperty"},
            {"DefaultSourceRotationOffset", 0x58, "StructProperty"},
            {"bIgnoreInstigatorActor", 0x70, "BoolProperty"},
            {"bIgnoreSourceActor", 0x70, "BoolProperty"},
            {"bTraceComplex", 0x70, "BoolProperty"},
            {"bUseRelativeOffset", 0x70, "BoolProperty"},
            {"HalfExtentX", 0x78, "StructProperty"},
            {"HalfExtentY", 0xA0, "StructProperty"},
            {"HalfExtentZ", 0xC8, "StructProperty"},
            {"Radius", 0xF0, "StructProperty"},
            {"HalfHeight", 0x118, "StructProperty"},
            {"ComponentTag", 0x140, "NameProperty"},
        }};
    };

}
