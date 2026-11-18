#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WingSuitRuntime
{
    struct FortCameraMode_WingSuit
    {
        static constexpr std::string_view Name = "FortCameraMode_WingSuit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_ThirdPerson";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxYawChangePerSecond = 0x2080;
            static constexpr std::uintptr_t MaxPitchChangePerSecond = 0x20A8;
            static constexpr std::uintptr_t YawRotationSensitivity = 0x20D0;
            static constexpr std::uintptr_t PitchRotationSensitivity = 0x20F8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaxYawChangePerSecond", 0x2080, "StructProperty"},
            {"MaxPitchChangePerSecond", 0x20A8, "StructProperty"},
            {"YawRotationSensitivity", 0x20D0, "StructProperty"},
            {"PitchRotationSensitivity", 0x20F8, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicWingSuit
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicWingSuit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ItemActivated";
        struct Offsets
        {
            static constexpr std::uintptr_t bDrawDebug = 0x284;
            static constexpr std::uintptr_t MaxSpeed = 0x288;
            static constexpr std::uintptr_t MinSpeed = 0x2B0;
            static constexpr std::uintptr_t TurnSpeed = 0x2D8;
            static constexpr std::uintptr_t ForwardThrustMultiplier = 0x300;
            static constexpr std::uintptr_t SpeedDragCurve = 0x328;
            static constexpr std::uintptr_t NeutralPitchMax = 0x330;
            static constexpr std::uintptr_t NeutralPitchMin = 0x358;
            static constexpr std::uintptr_t NeutralPitchEnterTime = 0x380;
            static constexpr std::uintptr_t NeutralSpeedDragCurve = 0x3A8;
            static constexpr std::uintptr_t AccelerationCurve = 0x3B0;
            static constexpr std::uintptr_t ForwardSpeedToVerticalDragCurve = 0x3B8;
            static constexpr std::uintptr_t HorizontalDragCoef = 0x3C0;
            static constexpr std::uintptr_t FallingGravity = 0x3E8;
            static constexpr std::uintptr_t FallingMaxSpeed = 0x410;
            static constexpr std::uintptr_t PitchToMin2DSpeedCurve = 0x438;
            static constexpr std::uintptr_t ModeTimeLimit = 0x440;
            static constexpr std::uintptr_t TimeLimitVerticalDrag = 0x468;
            static constexpr std::uintptr_t TimeLimitGravity = 0x490;
            static constexpr std::uintptr_t EntranceBoostActiveDuration = 0x4B8;
            static constexpr std::uintptr_t MinLaunchPitch = 0x4E0;
            static constexpr std::uintptr_t MaxLaunchPitch = 0x508;
            static constexpr std::uintptr_t LaunchSpeed = 0x530;
            static constexpr std::uintptr_t LaunchControlCurve = 0x558;
            static constexpr std::uintptr_t PointLandingMaxPitch = 0x560;
            static constexpr std::uintptr_t PointLandingMinSpeed = 0x588;
            static constexpr std::uintptr_t LandingAngle = 0x5B0;
            static constexpr std::uintptr_t CrashLandingAngle = 0x5D8;
            static constexpr std::uintptr_t LandingPredictionLookAheadTime = 0x600;
            static constexpr std::uintptr_t LandingPredictionPawnOffset = 0x628;
            static constexpr std::uintptr_t HorizontalSpeedPreserveMult = 0x640;
            static constexpr std::uintptr_t VerticalSpeedPreserveMult = 0x668;
            static constexpr std::uintptr_t StrafingEnabled = 0x690;
            static constexpr std::uintptr_t ForwardSpeedToStrafeForceCurve = 0x6B8;
            static constexpr std::uintptr_t StrafeDragCoef = 0x6C0;
            static constexpr std::uintptr_t FlippingEnabled = 0x6E8;
            static constexpr std::uintptr_t FlippingTag = 0x710;
            static constexpr std::uintptr_t FlippingMinPitchTrigger = 0x718;
            static constexpr std::uintptr_t FlippingMaxSpeedTrigger = 0x740;
            static constexpr std::uintptr_t FlippingMinAltitudeTrigger = 0x768;
            static constexpr std::uintptr_t FlippingTimeTrigger = 0x790;
            static constexpr std::uintptr_t FlippingTargetPitch = 0x7B8;
            static constexpr std::uintptr_t FlippingTargetPitchHoldTime = 0x7E0;
            static constexpr std::uintptr_t FlippingPitchRate = 0x808;
            static constexpr std::uintptr_t FlippingCameraAdjustmentRate = 0x830;
            static constexpr std::uintptr_t GamepadZeroedOutTimeThreshold = 0x858;
            static constexpr std::uintptr_t GamepadSteeringControls = 0x880;
            static constexpr std::uintptr_t GamepadFacingControls = 0xA20;
            static constexpr std::uintptr_t KeyboardFacingControls = 0xB90;
            static constexpr std::uintptr_t VisualFastSpeed = 0xD00;
            static constexpr std::uintptr_t VisualFastTag = 0xD28;
            static constexpr std::uintptr_t SpeedLimitHeight = 0xD30;
            static constexpr std::uintptr_t SpeedLimitSpeed = 0xD58;
        };

        inline static constexpr std::array<PropertyInfo, 53> Properties{{
            {"bDrawDebug", 0x284, "BoolProperty"},
            {"MaxSpeed", 0x288, "StructProperty"},
            {"MinSpeed", 0x2B0, "StructProperty"},
            {"TurnSpeed", 0x2D8, "StructProperty"},
            {"ForwardThrustMultiplier", 0x300, "StructProperty"},
            {"SpeedDragCurve", 0x328, "ObjectProperty"},
            {"NeutralPitchMax", 0x330, "StructProperty"},
            {"NeutralPitchMin", 0x358, "StructProperty"},
            {"NeutralPitchEnterTime", 0x380, "StructProperty"},
            {"NeutralSpeedDragCurve", 0x3A8, "ObjectProperty"},
            {"AccelerationCurve", 0x3B0, "ObjectProperty"},
            {"ForwardSpeedToVerticalDragCurve", 0x3B8, "ObjectProperty"},
            {"HorizontalDragCoef", 0x3C0, "StructProperty"},
            {"FallingGravity", 0x3E8, "StructProperty"},
            {"FallingMaxSpeed", 0x410, "StructProperty"},
            {"PitchToMin2DSpeedCurve", 0x438, "ObjectProperty"},
            {"ModeTimeLimit", 0x440, "StructProperty"},
            {"TimeLimitVerticalDrag", 0x468, "StructProperty"},
            {"TimeLimitGravity", 0x490, "StructProperty"},
            {"EntranceBoostActiveDuration", 0x4B8, "StructProperty"},
            {"MinLaunchPitch", 0x4E0, "StructProperty"},
            {"MaxLaunchPitch", 0x508, "StructProperty"},
            {"LaunchSpeed", 0x530, "StructProperty"},
            {"LaunchControlCurve", 0x558, "ObjectProperty"},
            {"PointLandingMaxPitch", 0x560, "StructProperty"},
            {"PointLandingMinSpeed", 0x588, "StructProperty"},
            {"LandingAngle", 0x5B0, "StructProperty"},
            {"CrashLandingAngle", 0x5D8, "StructProperty"},
            {"LandingPredictionLookAheadTime", 0x600, "StructProperty"},
            {"LandingPredictionPawnOffset", 0x628, "StructProperty"},
            {"HorizontalSpeedPreserveMult", 0x640, "StructProperty"},
            {"VerticalSpeedPreserveMult", 0x668, "StructProperty"},
            {"StrafingEnabled", 0x690, "StructProperty"},
            {"ForwardSpeedToStrafeForceCurve", 0x6B8, "ObjectProperty"},
            {"StrafeDragCoef", 0x6C0, "StructProperty"},
            {"FlippingEnabled", 0x6E8, "StructProperty"},
            {"FlippingTag", 0x710, "StructProperty"},
            {"FlippingMinPitchTrigger", 0x718, "StructProperty"},
            {"FlippingMaxSpeedTrigger", 0x740, "StructProperty"},
            {"FlippingMinAltitudeTrigger", 0x768, "StructProperty"},
            {"FlippingTimeTrigger", 0x790, "StructProperty"},
            {"FlippingTargetPitch", 0x7B8, "StructProperty"},
            {"FlippingTargetPitchHoldTime", 0x7E0, "StructProperty"},
            {"FlippingPitchRate", 0x808, "StructProperty"},
            {"FlippingCameraAdjustmentRate", 0x830, "StructProperty"},
            {"GamepadZeroedOutTimeThreshold", 0x858, "StructProperty"},
            {"GamepadSteeringControls", 0x880, "StructProperty"},
            {"GamepadFacingControls", 0xA20, "StructProperty"},
            {"KeyboardFacingControls", 0xB90, "StructProperty"},
            {"VisualFastSpeed", 0xD00, "StructProperty"},
            {"VisualFastTag", 0xD28, "StructProperty"},
            {"SpeedLimitHeight", 0xD30, "StructProperty"},
            {"SpeedLimitSpeed", 0xD58, "StructProperty"},
        }};
    };

    struct FortMovementMode_WingSuitRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_WingSuitRuntimeData";
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

    struct GameplayAbility_WingsuitActive
    {
        static constexpr std::string_view Name = "GameplayAbility_WingsuitActive";
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

    struct JetPackGadgetAnimInstance
    {
        static constexpr std::string_view Name = "JetPackGadgetAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsCooldown = 0x340;
            static constexpr std::uintptr_t CooldownTagName = 0x344;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsCooldown", 0x340, "BoolProperty"},
            {"CooldownTagName", 0x344, "StructProperty"},
        }};
    };

    struct WingsuitGadgetCCPAnimInstance
    {
        static constexpr std::string_view Name = "WingsuitGadgetCCPAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalVelocity = 0x640;
            static constexpr std::uintptr_t TiltAlpha = 0x658;
            static constexpr std::uintptr_t PitchAngleBetween = 0x660;
            static constexpr std::uintptr_t Roll = 0x668;
            static constexpr std::uintptr_t PoseAlpha = 0x670;
            static constexpr std::uintptr_t Pitch = 0x678;
            static constexpr std::uintptr_t PitchAngleBetweenDelta = 0x680;
            static constexpr std::uintptr_t FortPlayerPawn = 0x688;
            static constexpr std::uintptr_t bFlipping = 0x690;
            static constexpr std::uintptr_t bIsFlying = 0x691;
            static constexpr std::uintptr_t bIsYawTransition = 0x692;
            static constexpr std::uintptr_t bIsLeftDirection = 0x693;
            static constexpr std::uintptr_t bPredictiveLandingStart = 0x694;
            static constexpr std::uintptr_t bRandomYaw = 0x695;
            static constexpr std::uintptr_t bPredictiveLanding = 0x696;
            static constexpr std::uintptr_t bIsSlowDecent = 0x697;
            static constexpr std::uintptr_t bIsPitchTransition = 0x698;
            static constexpr std::uintptr_t bIsExageratedPitch = 0x699;
            static constexpr std::uintptr_t bPredictiveLandingEnd = 0x69A;
            static constexpr std::uintptr_t bIsYawTransitionFinished = 0x69B;
            static constexpr std::uintptr_t bIsUpDirection = 0x69C;
            static constexpr std::uintptr_t FlippingTagName = 0x6A0;
            static constexpr std::uintptr_t WingSuitTagName = 0x6A4;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"LocalVelocity", 0x640, "StructProperty"},
            {"TiltAlpha", 0x658, "DoubleProperty"},
            {"PitchAngleBetween", 0x660, "DoubleProperty"},
            {"Roll", 0x668, "DoubleProperty"},
            {"PoseAlpha", 0x670, "DoubleProperty"},
            {"Pitch", 0x678, "DoubleProperty"},
            {"PitchAngleBetweenDelta", 0x680, "DoubleProperty"},
            {"FortPlayerPawn", 0x688, "ObjectProperty"},
            {"bFlipping", 0x690, "BoolProperty"},
            {"bIsFlying", 0x691, "BoolProperty"},
            {"bIsYawTransition", 0x692, "BoolProperty"},
            {"bIsLeftDirection", 0x693, "BoolProperty"},
            {"bPredictiveLandingStart", 0x694, "BoolProperty"},
            {"bRandomYaw", 0x695, "BoolProperty"},
            {"bPredictiveLanding", 0x696, "BoolProperty"},
            {"bIsSlowDecent", 0x697, "BoolProperty"},
            {"bIsPitchTransition", 0x698, "BoolProperty"},
            {"bIsExageratedPitch", 0x699, "BoolProperty"},
            {"bPredictiveLandingEnd", 0x69A, "BoolProperty"},
            {"bIsYawTransitionFinished", 0x69B, "BoolProperty"},
            {"bIsUpDirection", 0x69C, "BoolProperty"},
            {"FlippingTagName", 0x6A0, "StructProperty"},
            {"WingSuitTagName", 0x6A4, "StructProperty"},
        }};
    };

    struct WingsuitPhysicsFlyingLayerAnimInstance
    {
        static constexpr std::string_view Name = "WingsuitPhysicsFlyingLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMesh = 0x1180;
            static constexpr std::uintptr_t bWingsuitOn = 0x1188;
            static constexpr std::uintptr_t WingSuitMeshIsOnTagName = 0x118C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SkeletalMesh", 0x1180, "ObjectProperty"},
            {"bWingsuitOn", 0x1188, "BoolProperty"},
            {"WingSuitMeshIsOnTagName", 0x118C, "StructProperty"},
        }};
    };

    struct WingsuitPhysicsFlyingWeaponInterface
    {
        static constexpr std::string_view Name = "WingsuitPhysicsFlyingWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
