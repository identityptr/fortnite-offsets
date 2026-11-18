#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GrindRailRuntime
{
    struct FortAthenaAIBotEvaluator_GrindRail
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_GrindRail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t GrindRailTag = 0xA8;
            static constexpr std::uintptr_t GrindDuration = 0xB0;
            static constexpr std::uintptr_t GrindDurationRandomDeviation = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GrindRailTag", 0xA8, "StructProperty"},
            {"GrindDuration", 0xB0, "StructProperty"},
            {"GrindDurationRandomDeviation", 0xD8, "StructProperty"},
        }};
    };

    struct FortGameplayCueNotifyLoop_Grinding
    {
        static constexpr std::string_view Name = "FortGameplayCueNotifyLoop_Grinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t bFeetHasLanded = 0xC58;
            static constexpr std::uintptr_t bEnableNativeAudioUpdate = 0xC59;
            static constexpr std::uintptr_t ForwardChangedValueThreshold = 0xC5C;
            static constexpr std::uintptr_t Speed = 0xC60;
            static constexpr std::uintptr_t Forward = 0xC98;
            static constexpr std::uintptr_t Boost = 0xCD0;
            static constexpr std::uintptr_t Curve = 0xD08;
            static constexpr std::uintptr_t IsGrinding = 0xD40;
            static constexpr std::uintptr_t IsSlowDown = 0xD78;
            static constexpr std::uintptr_t LeanForwardSpeedName = 0xDB0;
            static constexpr std::uintptr_t TurnOnSpeedFXName = 0xDB4;
            static constexpr std::uintptr_t RailJumpingFXName = 0xDB8;
            static constexpr std::uintptr_t SprintingFXName = 0xDBC;
            static constexpr std::uintptr_t TurnOnSpeedFXThreshold = 0xDC0;
            static constexpr std::uintptr_t EffectsComponent = 0xDC4;
            static constexpr std::uintptr_t AudioComponent = 0xDD0;
            static constexpr std::uintptr_t PlayerPawn = 0xDD8;
            static constexpr std::uintptr_t GrindingProvider = 0xDE0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"bFeetHasLanded", 0xC58, "BoolProperty"},
            {"bEnableNativeAudioUpdate", 0xC59, "BoolProperty"},
            {"ForwardChangedValueThreshold", 0xC5C, "FloatProperty"},
            {"Speed", 0xC60, "StructProperty"},
            {"Forward", 0xC98, "StructProperty"},
            {"Boost", 0xCD0, "StructProperty"},
            {"Curve", 0xD08, "StructProperty"},
            {"IsGrinding", 0xD40, "StructProperty"},
            {"IsSlowDown", 0xD78, "StructProperty"},
            {"LeanForwardSpeedName", 0xDB0, "NameProperty"},
            {"TurnOnSpeedFXName", 0xDB4, "NameProperty"},
            {"RailJumpingFXName", 0xDB8, "NameProperty"},
            {"SprintingFXName", 0xDBC, "NameProperty"},
            {"TurnOnSpeedFXThreshold", 0xDC0, "FloatProperty"},
            {"EffectsComponent", 0xDC4, "WeakObjectProperty"},
            {"AudioComponent", 0xDD0, "ObjectProperty"},
            {"PlayerPawn", 0xDD8, "ObjectProperty"},
            {"GrindingProvider", 0xDE0, "ObjectProperty"},
        }};
    };

    struct FortGrindRailConnector
    {
        static constexpr std::string_view Name = "FortGrindRailConnector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t InherentAbilitySets = 0x6D8;
            static constexpr std::uintptr_t DamageStatHandle = 0x700;
            static constexpr std::uintptr_t bAllowRidingOnActor = 0x710;
            static constexpr std::uintptr_t OnProximityPulseDelegate = 0x718;
            static constexpr std::uintptr_t OnProximityPrePulseDelegate = 0x728;
            static constexpr std::uintptr_t OnProximityEffectsAppliedDelegate = 0x738;
            static constexpr std::uintptr_t OnDeliverableAbilityInfoAppliedToTouchingActor = 0x748;
            static constexpr std::uintptr_t OnDeliverableAbilityInfoChangedForExitingTouchActor = 0x758;
            static constexpr std::uintptr_t OnDidDamage = 0x768;
            static constexpr std::uintptr_t bIgnoreInstigatorCollision = 0x778;
            static constexpr std::uintptr_t bAddOwnerVelocity = 0x779;
            static constexpr std::uintptr_t AbilitySourceLevel = 0x77C;
            static constexpr std::uintptr_t DeliverableAbilityInfo = 0x780;
            static constexpr std::uintptr_t bApplyDefaultEnabledAbilityBucketsOnInit = 0x830;
            static constexpr std::uintptr_t bBlockMarking = 0x830;
            static constexpr std::uintptr_t bCanBeMarked = 0x830;
            static constexpr std::uintptr_t bShowInteractKeybind = 0x830;
            static constexpr std::uintptr_t bUseSimpleActorTouchSetupForAbilityBuckets = 0x830;
            static constexpr std::uintptr_t MarkerDisplay = 0x838;
            static constexpr std::uintptr_t MarkerPositionOffset = 0x8E8;
            static constexpr std::uintptr_t RegisteredTouchComponent = 0x900;
            static constexpr std::uintptr_t AnalyticsTags = 0x910;
            static constexpr std::uintptr_t PostProcessOverlapBlendWeight = 0x930;
            static constexpr std::uintptr_t CustomInteractionWidget = 0x938;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"InherentAbilitySets", 0x6D8, "ObjectProperty"},
            {"DamageStatHandle", 0x700, "StructProperty"},
            {"bAllowRidingOnActor", 0x710, "BoolProperty"},
            {"OnProximityPulseDelegate", 0x718, "MulticastInlineDelegateProperty"},
            {"OnProximityPrePulseDelegate", 0x728, "MulticastInlineDelegateProperty"},
            {"OnProximityEffectsAppliedDelegate", 0x738, "MulticastInlineDelegateProperty"},
            {"OnDeliverableAbilityInfoAppliedToTouchingActor", 0x748, "MulticastInlineDelegateProperty"},
            {"OnDeliverableAbilityInfoChangedForExitingTouchActor", 0x758, "MulticastInlineDelegateProperty"},
            {"OnDidDamage", 0x768, "MulticastInlineDelegateProperty"},
            {"bIgnoreInstigatorCollision", 0x778, "BoolProperty"},
            {"bAddOwnerVelocity", 0x779, "BoolProperty"},
            {"AbilitySourceLevel", 0x77C, "IntProperty"},
            {"DeliverableAbilityInfo", 0x780, "StructProperty"},
            {"bApplyDefaultEnabledAbilityBucketsOnInit", 0x830, "BoolProperty"},
            {"bBlockMarking", 0x830, "BoolProperty"},
            {"bCanBeMarked", 0x830, "BoolProperty"},
            {"bShowInteractKeybind", 0x830, "BoolProperty"},
            {"bUseSimpleActorTouchSetupForAbilityBuckets", 0x830, "BoolProperty"},
            {"MarkerDisplay", 0x838, "StructProperty"},
            {"MarkerPositionOffset", 0x8E8, "StructProperty"},
            {"RegisteredTouchComponent", 0x900, "ObjectProperty"},
            {"AnalyticsTags", 0x910, "StructProperty"},
            {"PostProcessOverlapBlendWeight", 0x930, "FloatProperty"},
            {"CustomInteractionWidget", 0x938, "ObjectProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicGrinding
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicGrinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t GrindingProvider = 0x1C8;
            static constexpr std::uintptr_t GrindCameraModifierClass = 0x1D0;
            static constexpr std::uintptr_t StartGrindingGameplayEvent = 0x1D8;
            static constexpr std::uintptr_t StopGrindingGameplayEvent = 0x1DC;
            static constexpr std::uintptr_t EnableVehicleLaunchImmunity = 0x1E0;
            static constexpr std::uintptr_t VehicleLaunchImmuneTag = 0x210;
            static constexpr std::uintptr_t ShouldDropHeldObject = 0x218;
            static constexpr std::uintptr_t BuildingTagImmuneToDamage = 0x240;
            static constexpr std::uintptr_t BaseMaxLeanAngularSpeed = 0x248;
            static constexpr std::uintptr_t BaseLeanInterpSpeed = 0x270;
            static constexpr std::uintptr_t TacticalSprintEnergyComponent = 0x298;
            static constexpr std::uintptr_t TacticalSprintTooLowEnergyTag = 0x2A0;
            static constexpr std::uintptr_t JumpDistanceMultiplier = 0x2C0;
            static constexpr std::uintptr_t SameRailAnchoring_MaxForwardDistanceMultiplier = 0x2E8;
            static constexpr std::uintptr_t NoAnchorJumpDistanceMultiplier = 0x310;
            static constexpr std::uintptr_t SameRailAnchoring_MaxAngle = 0x338;
            static constexpr std::uintptr_t MinJumpOffSpeed = 0x360;
            static constexpr std::uintptr_t JumpHeight = 0x388;
            static constexpr std::uintptr_t InfluenceOfMomentumOnAnchorJump = 0x3B0;
            static constexpr std::uintptr_t DownwardModifierHeight = 0x3D8;
            static constexpr std::uintptr_t SprintUsePerSecond = 0x400;
            static constexpr std::uintptr_t SprintUsePerSecond_Creative = 0x428;
            static constexpr std::uintptr_t SprintUseEnergyTag = 0x450;
            static constexpr std::uintptr_t SprintStartedGameplayEvent = 0x454;
            static constexpr std::uintptr_t MaxAllowedInclineSplinePitch = 0x458;
            static constexpr std::uintptr_t MaxAllowedDeclineSplinePitch = 0x480;
            static constexpr std::uintptr_t MaxAllowedShootingSplinePitch = 0x4A8;
            static constexpr std::uintptr_t TurnAngleThreshold = 0x4D0;
            static constexpr std::uintptr_t AnimatedTurnDuration = 0x4F8;
            static constexpr std::uintptr_t BaseGrindRailYawRotationInterpSpeed = 0x520;
            static constexpr std::uintptr_t InclineGrindRailPitchRotationInterpSpeed = 0x548;
            static constexpr std::uintptr_t DeclineGrindRailPitchRotationInterpSpeed = 0x570;
            static constexpr std::uintptr_t ShootingGrindRailRotationInterpSpeed = 0x598;
            static constexpr std::uintptr_t NextGrindRailDetectionOffset = 0x5C0;
            static constexpr std::uintptr_t SprintGrindingGameplayEffectClass = 0x5E8;
            static constexpr std::uintptr_t TagPreventHeldObjectDrop = 0x5F0;
            static constexpr std::uintptr_t CancelGrindingTag = 0x5F4;
            static constexpr std::uintptr_t MinTimeBeforeJumpSinceEntry = 0x5F8;
            static constexpr std::uintptr_t CancelSprintLeanBackThreshold = 0x620;
            static constexpr std::uintptr_t WeaponHolsterCooldown = 0x648;
            static constexpr std::uintptr_t WeaponIsShootingCooldown = 0x670;
            static constexpr std::uintptr_t GravityForceWhenGoingDown = 0x698;
            static constexpr std::uintptr_t GravityForceWhenGoingUp = 0x6C0;
            static constexpr std::uintptr_t BoosterSprintingAccelerationOnSlowDownBooster = 0x6E8;
            static constexpr std::uintptr_t BoosterAccelerationOnSpeedUpBooster = 0x710;
            static constexpr std::uintptr_t BoosterSlowDownBoosterDragMultiplier = 0x738;
            static constexpr std::uintptr_t BoosterSlowDownBoosterGoalSpeed = 0x760;
            static constexpr std::uintptr_t BoosterMaxSpeed = 0x788;
            static constexpr std::uintptr_t ShootingMaxSpeedMultiplier = 0x7B0;
            static constexpr std::uintptr_t AngleForMaxSpeedIncreaseFromDownwardSlope = 0x7D8;
            static constexpr std::uintptr_t MaxSpeedIncreaseFromDownwardSlope = 0x800;
            static constexpr std::uintptr_t MaxDragForSpeedSoftCap = 0x828;
            static constexpr std::uintptr_t SpeedHardCap = 0x850;
            static constexpr std::uintptr_t SprintingAcceleration = 0x878;
            static constexpr std::uintptr_t SprintingMaxSpeed = 0x8A0;
            static constexpr std::uintptr_t ShouldEnforceMinSpeed = 0x8C8;
            static constexpr std::uintptr_t MinimumSpeed = 0x8F0;
            static constexpr std::uintptr_t ForcedDirection = 0x918;
            static constexpr std::uintptr_t CanTurnAround = 0x940;
            static constexpr std::uintptr_t SpeedThresholdForTurn = 0x968;
            static constexpr std::uintptr_t TimeToTurnAround = 0x990;
            static constexpr std::uintptr_t SpeedForMaxLeanAcceleration = 0x9B8;
            static constexpr std::uintptr_t SpeedForMinLeanAcceleration = 0x9E0;
            static constexpr std::uintptr_t MaxLeanAcceleration = 0xA08;
            static constexpr std::uintptr_t MinLeanAcceleration = 0xA30;
            static constexpr std::uintptr_t CanAccelerateByLeaningIntoTurns = 0xA58;
            static constexpr std::uintptr_t CurvatureForMaxLeanIntoTurnsAcceleration = 0xA80;
            static constexpr std::uintptr_t LeanIntoTurnsMaxAcceleration = 0xAA8;
            static constexpr std::uintptr_t IncreasedMaxSpeedFromLeanIntoTurn = 0xAD0;
            static constexpr std::uintptr_t SidewaysLeanBoostReductionRate = 0xAF8;
            static constexpr std::uintptr_t SpeedForMaxBaseAcceleration = 0xB20;
            static constexpr std::uintptr_t SpeedForMinBaseAcceleration = 0xB48;
            static constexpr std::uintptr_t MaxBaseAcceleration = 0xB70;
            static constexpr std::uintptr_t MinBaseAcceleration = 0xB98;
            static constexpr std::uintptr_t BaseGoalSpeed = 0xBC0;
            static constexpr std::uintptr_t BaseMaxSpeed = 0xBE8;
            static constexpr std::uintptr_t EnableFriction = 0xC10;
            static constexpr std::uintptr_t BaseGoalDecelerationSpeed = 0xC38;
            static constexpr std::uintptr_t FrictionWhenNotLeaning = 0xC60;
            static constexpr std::uintptr_t SpeedMultiplierOnHitRailCap = 0xC88;
            static constexpr std::uintptr_t MinSpeedAfterBouncedOffRailCap = 0xCB0;
            static constexpr std::uintptr_t SpeedMultiplierWhenImpactedPlayer = 0xCD8;
            static constexpr std::uintptr_t SpeedMinBouncePlayer = 0xD00;
        };

        inline static constexpr std::array<PropertyInfo, 83> Properties{{
            {"GrindingProvider", 0x1C8, "WeakObjectProperty"},
            {"GrindCameraModifierClass", 0x1D0, "ClassProperty"},
            {"StartGrindingGameplayEvent", 0x1D8, "StructProperty"},
            {"StopGrindingGameplayEvent", 0x1DC, "StructProperty"},
            {"EnableVehicleLaunchImmunity", 0x1E0, "StructProperty"},
            {"VehicleLaunchImmuneTag", 0x210, "StructProperty"},
            {"ShouldDropHeldObject", 0x218, "StructProperty"},
            {"BuildingTagImmuneToDamage", 0x240, "StructProperty"},
            {"BaseMaxLeanAngularSpeed", 0x248, "StructProperty"},
            {"BaseLeanInterpSpeed", 0x270, "StructProperty"},
            {"TacticalSprintEnergyComponent", 0x298, "WeakObjectProperty"},
            {"TacticalSprintTooLowEnergyTag", 0x2A0, "StructProperty"},
            {"JumpDistanceMultiplier", 0x2C0, "StructProperty"},
            {"SameRailAnchoring_MaxForwardDistanceMultiplier", 0x2E8, "StructProperty"},
            {"NoAnchorJumpDistanceMultiplier", 0x310, "StructProperty"},
            {"SameRailAnchoring_MaxAngle", 0x338, "StructProperty"},
            {"MinJumpOffSpeed", 0x360, "StructProperty"},
            {"JumpHeight", 0x388, "StructProperty"},
            {"InfluenceOfMomentumOnAnchorJump", 0x3B0, "StructProperty"},
            {"DownwardModifierHeight", 0x3D8, "StructProperty"},
            {"SprintUsePerSecond", 0x400, "StructProperty"},
            {"SprintUsePerSecond_Creative", 0x428, "StructProperty"},
            {"SprintUseEnergyTag", 0x450, "StructProperty"},
            {"SprintStartedGameplayEvent", 0x454, "StructProperty"},
            {"MaxAllowedInclineSplinePitch", 0x458, "StructProperty"},
            {"MaxAllowedDeclineSplinePitch", 0x480, "StructProperty"},
            {"MaxAllowedShootingSplinePitch", 0x4A8, "StructProperty"},
            {"TurnAngleThreshold", 0x4D0, "StructProperty"},
            {"AnimatedTurnDuration", 0x4F8, "StructProperty"},
            {"BaseGrindRailYawRotationInterpSpeed", 0x520, "StructProperty"},
            {"InclineGrindRailPitchRotationInterpSpeed", 0x548, "StructProperty"},
            {"DeclineGrindRailPitchRotationInterpSpeed", 0x570, "StructProperty"},
            {"ShootingGrindRailRotationInterpSpeed", 0x598, "StructProperty"},
            {"NextGrindRailDetectionOffset", 0x5C0, "StructProperty"},
            {"SprintGrindingGameplayEffectClass", 0x5E8, "ClassProperty"},
            {"TagPreventHeldObjectDrop", 0x5F0, "StructProperty"},
            {"CancelGrindingTag", 0x5F4, "StructProperty"},
            {"MinTimeBeforeJumpSinceEntry", 0x5F8, "StructProperty"},
            {"CancelSprintLeanBackThreshold", 0x620, "StructProperty"},
            {"WeaponHolsterCooldown", 0x648, "StructProperty"},
            {"WeaponIsShootingCooldown", 0x670, "StructProperty"},
            {"GravityForceWhenGoingDown", 0x698, "StructProperty"},
            {"GravityForceWhenGoingUp", 0x6C0, "StructProperty"},
            {"BoosterSprintingAccelerationOnSlowDownBooster", 0x6E8, "StructProperty"},
            {"BoosterAccelerationOnSpeedUpBooster", 0x710, "StructProperty"},
            {"BoosterSlowDownBoosterDragMultiplier", 0x738, "StructProperty"},
            {"BoosterSlowDownBoosterGoalSpeed", 0x760, "StructProperty"},
            {"BoosterMaxSpeed", 0x788, "StructProperty"},
            {"ShootingMaxSpeedMultiplier", 0x7B0, "StructProperty"},
            {"AngleForMaxSpeedIncreaseFromDownwardSlope", 0x7D8, "StructProperty"},
            {"MaxSpeedIncreaseFromDownwardSlope", 0x800, "StructProperty"},
            {"MaxDragForSpeedSoftCap", 0x828, "StructProperty"},
            {"SpeedHardCap", 0x850, "StructProperty"},
            {"SprintingAcceleration", 0x878, "StructProperty"},
            {"SprintingMaxSpeed", 0x8A0, "StructProperty"},
            {"ShouldEnforceMinSpeed", 0x8C8, "StructProperty"},
            {"MinimumSpeed", 0x8F0, "StructProperty"},
            {"ForcedDirection", 0x918, "StructProperty"},
            {"CanTurnAround", 0x940, "StructProperty"},
            {"SpeedThresholdForTurn", 0x968, "StructProperty"},
            {"TimeToTurnAround", 0x990, "StructProperty"},
            {"SpeedForMaxLeanAcceleration", 0x9B8, "StructProperty"},
            {"SpeedForMinLeanAcceleration", 0x9E0, "StructProperty"},
            {"MaxLeanAcceleration", 0xA08, "StructProperty"},
            {"MinLeanAcceleration", 0xA30, "StructProperty"},
            {"CanAccelerateByLeaningIntoTurns", 0xA58, "StructProperty"},
            {"CurvatureForMaxLeanIntoTurnsAcceleration", 0xA80, "StructProperty"},
            {"LeanIntoTurnsMaxAcceleration", 0xAA8, "StructProperty"},
            {"IncreasedMaxSpeedFromLeanIntoTurn", 0xAD0, "StructProperty"},
            {"SidewaysLeanBoostReductionRate", 0xAF8, "StructProperty"},
            {"SpeedForMaxBaseAcceleration", 0xB20, "StructProperty"},
            {"SpeedForMinBaseAcceleration", 0xB48, "StructProperty"},
            {"MaxBaseAcceleration", 0xB70, "StructProperty"},
            {"MinBaseAcceleration", 0xB98, "StructProperty"},
            {"BaseGoalSpeed", 0xBC0, "StructProperty"},
            {"BaseMaxSpeed", 0xBE8, "StructProperty"},
            {"EnableFriction", 0xC10, "StructProperty"},
            {"BaseGoalDecelerationSpeed", 0xC38, "StructProperty"},
            {"FrictionWhenNotLeaning", 0xC60, "StructProperty"},
            {"SpeedMultiplierOnHitRailCap", 0xC88, "StructProperty"},
            {"MinSpeedAfterBouncedOffRailCap", 0xCB0, "StructProperty"},
            {"SpeedMultiplierWhenImpactedPlayer", 0xCD8, "StructProperty"},
            {"SpeedMinBouncePlayer", 0xD00, "StructProperty"},
        }};
    };

    struct FortMovementMode_GrindingRuntimeData_Old
    {
        static constexpr std::string_view Name = "FortMovementMode_GrindingRuntimeData_Old";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseGrindingRuntimeData";
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

}
