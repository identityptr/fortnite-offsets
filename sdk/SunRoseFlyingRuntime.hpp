#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SunRoseFlyingRuntime
{
    struct AFortGameplayCueNotifyLoop_SunroseFlying
    {
        static constexpr std::string_view Name = "AFortGameplayCueNotifyLoop_SunroseFlying";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t IsAscendingParamName = 0xC58;
            static constexpr std::uintptr_t IsFlappingParamName = 0xC5C;
            static constexpr std::uintptr_t FlappingAlphaParamName = 0xC60;
            static constexpr std::uintptr_t IsRollingParamName = 0xC64;
            static constexpr std::uintptr_t IsBoostingParamName = 0xC68;
            static constexpr std::uintptr_t IsDivingParamName = 0xC6C;
            static constexpr std::uintptr_t PitchParamName = 0xC70;
            static constexpr std::uintptr_t RollParamName = 0xC74;
            static constexpr std::uintptr_t SpeedParamName = 0xC78;
            static constexpr std::uintptr_t IsSkimmingParamName = 0xC7C;
            static constexpr std::uintptr_t AltitudeInterpParamName = 0xC80;
            static constexpr std::uintptr_t HeightRange = 0xC84;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"IsAscendingParamName", 0xC58, "NameProperty"},
            {"IsFlappingParamName", 0xC5C, "NameProperty"},
            {"FlappingAlphaParamName", 0xC60, "NameProperty"},
            {"IsRollingParamName", 0xC64, "NameProperty"},
            {"IsBoostingParamName", 0xC68, "NameProperty"},
            {"IsDivingParamName", 0xC6C, "NameProperty"},
            {"PitchParamName", 0xC70, "NameProperty"},
            {"RollParamName", 0xC74, "NameProperty"},
            {"SpeedParamName", 0xC78, "NameProperty"},
            {"IsSkimmingParamName", 0xC7C, "NameProperty"},
            {"AltitudeInterpParamName", 0xC80, "NameProperty"},
            {"HeightRange", 0xC84, "StructProperty"},
        }};
    };

    struct FortCameraModifier_SunroseWingsFlying
    {
        static constexpr std::string_view Name = "FortCameraModifier_SunroseWingsFlying";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModifier_Custom";
        struct Offsets
        {
            static constexpr std::uintptr_t NativeFlyingPawnClass = 0x80;
            static constexpr std::uintptr_t NativeFlyingSpeedBase = 0x98;
            static constexpr std::uintptr_t NativeFlyingSpeedAddedAtMaxDistanceFromCeilingHeight = 0xC8;
            static constexpr std::uintptr_t NativeFlyingDownZSpeedAddedWhileFalling = 0xF8;
            static constexpr std::uintptr_t NativeFlyingHeightDecayMin = 0x128;
            static constexpr std::uintptr_t NativePreCrashWindupDuration = 0x158;
            static constexpr std::uintptr_t NativeFlyingInputWeightHorizontal = 0x188;
            static constexpr std::uintptr_t NativeFlyingInputWeightLookDirection = 0x1B8;
            static constexpr std::uintptr_t NativeDeltaFOVForwardOffsetExponent = 0x1E4;
            static constexpr std::uintptr_t NativeFOVModeSwapInterpRate = 0x1E8;
            static constexpr std::uintptr_t NativeMaxFOVOffset = 0x1EC;
            static constexpr std::uintptr_t NativeRotationRateForMaxRightOffset = 0x1F0;
            static constexpr std::uintptr_t NativeRightOffsetMaxCombinedStrafeTurn = 0x1F4;
            static constexpr std::uintptr_t NativeRightOffsetStrafe = 0x1F8;
            static constexpr std::uintptr_t NativeRightOffsetTurn = 0x1FC;
            static constexpr std::uintptr_t NativeRightOffsetDodge = 0x200;
            static constexpr std::uintptr_t NativeForwardOffsetDistanceCrashingFinal = 0x204;
            static constexpr std::uintptr_t NativeForwardOffsetDistanceForceCrashingPhase1 = 0x208;
            static constexpr std::uintptr_t NativeForwardOffsetDistanceCrashingPhase1 = 0x20C;
            static constexpr std::uintptr_t NativeForwardOffsetDistanceCrashingPhase2 = 0x210;
            static constexpr std::uintptr_t NativeForwardOffsetCrashingTimeAfterWindupToEnterFinalPhase = 0x214;
            static constexpr std::uintptr_t NativeForwardOffsetInterpSpeedCrashingPhase1 = 0x218;
            static constexpr std::uintptr_t NativeForwardOffsetInterpSpeedCrashingPhase2 = 0x21C;
            static constexpr std::uintptr_t NativeForwardOffsetInterpSpeedCrashingFinal = 0x220;
            static constexpr std::uintptr_t NativeTagForceCrash = 0x224;
            static constexpr std::uintptr_t NativeFOVInterpSpeed = 0x228;
            static constexpr std::uintptr_t NativeMinFOVOffsetFast = 0x22C;
            static constexpr std::uintptr_t NativeMinFOVOffsetSlow = 0x230;
            static constexpr std::uintptr_t NativeMaxFOVOffsetSlow = 0x234;
            static constexpr std::uintptr_t NativeLateBoostStartTime = 0x238;
            static constexpr std::uintptr_t NativeTimeSinceLastBoostLateMin = 0x23C;
            static constexpr std::uintptr_t NativeTimeSinceLastBoostLateMax = 0x240;
            static constexpr std::uintptr_t NativeFOVOffsetLateMin = 0x244;
            static constexpr std::uintptr_t NativeFOVOffsetLateMax = 0x248;
            static constexpr std::uintptr_t NativeTimeSinceEarlyBoostLateMin = 0x24C;
            static constexpr std::uintptr_t NativeTimeSinceLastBoostEarlyMax = 0x250;
            static constexpr std::uintptr_t NativeFOVOffsetEarlyMin = 0x254;
            static constexpr std::uintptr_t NativeFOVOffsetEarlyMax = 0x258;
            static constexpr std::uintptr_t NativeFOVOffsetModeMin = 0x25C;
            static constexpr std::uintptr_t NativeCrashingFOVInterpSpeed = 0x260;
            static constexpr std::uintptr_t NativeFOVOffsetWindup = 0x264;
            static constexpr std::uintptr_t NativePositiveFlyingMoveActionXFOVInterpSpeed = 0x268;
            static constexpr std::uintptr_t NativeNegativeFlyingMoveActionXFOVInterpSpeed = 0x26C;
            static constexpr std::uintptr_t NativeFlyingMoveActionPositiveMin = 0x270;
            static constexpr std::uintptr_t NativeFlyingMoveActionPositiveMax = 0x274;
            static constexpr std::uintptr_t NativeFlyingMoveActionPositiveFOVMin = 0x278;
            static constexpr std::uintptr_t NativeFlyingMoveActionPositiveFOVMax = 0x27C;
            static constexpr std::uintptr_t NativeFlyingMoveActionNegativeMin = 0x280;
            static constexpr std::uintptr_t NativeFlyingMoveActionNegativeMax = 0x284;
            static constexpr std::uintptr_t NativeFlyingMoveActionNegativeFOVMin = 0x288;
            static constexpr std::uintptr_t NativeFlyingMoveActionNegativeFOVMax = 0x28C;
            static constexpr std::uintptr_t NativeDefaultFOVInterpSpeed = 0x290;
            static constexpr std::uintptr_t NativePositiveFOVMax = 0x294;
            static constexpr std::uintptr_t NativeLocationOffsetForPositiveFOVMax = 0x298;
            static constexpr std::uintptr_t NativeNegativeFOVMax = 0x29C;
            static constexpr std::uintptr_t NativeLocationOffsetForNegativeFOVMax = 0x2A0;
            static constexpr std::uintptr_t NativeClampedDeltaFOVInterpSpeed = 0x2A4;
            static constexpr std::uintptr_t NativeShortTimeSinceLastBoostStart = 0x2A8;
            static constexpr std::uintptr_t NativeLongTimeSinceLastBoostStart = 0x2AC;
            static constexpr std::uintptr_t NativeLongOrShortBoostTimeInterpSpeed = 0x2B0;
            static constexpr std::uintptr_t NativeMediumBoostTimeInterpSpeed = 0x2B4;
            static constexpr std::uintptr_t NativeForwardLocationOffsetTargetMax = 0x2B8;
            static constexpr std::uintptr_t NativeForwardLocationOffsetFromDownZVelocityInterpSpeed = 0x2BC;
            static constexpr std::uintptr_t NativeDodgeStartDuration = 0x2C0;
            static constexpr std::uintptr_t NativeStrafeFOVOffsetMin = 0x2C4;
            static constexpr std::uintptr_t NativeStrafeFOVOffsetMax = 0x2C8;
            static constexpr std::uintptr_t NativeStrafeFOVMultiplierMin = 0x2CC;
            static constexpr std::uintptr_t NativeStrafeFOVMultiplierMax = 0x2D0;
            static constexpr std::uintptr_t NativeViewLocationOffsetRightInterpSpeedCrashing = 0x2D4;
            static constexpr std::uintptr_t NativeDodgeStartDurationForInterpSpeed = 0x2D8;
            static constexpr std::uintptr_t NativeViewLocationOffsetRightInterpSpeedStartingDodge = 0x2DC;
            static constexpr std::uintptr_t NativeViewLocationOffsetRightInterpSpeedMostlyStrafing = 0x2E0;
            static constexpr std::uintptr_t NativeViewLocationOffsetRightInterpSpeedMostlyTurning = 0x2E4;
            static constexpr std::uintptr_t bUseNativeCalculation = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 74> Properties{{
            {"NativeFlyingPawnClass", 0x80, "ClassProperty"},
            {"NativeFlyingSpeedBase", 0x98, "StructProperty"},
            {"NativeFlyingSpeedAddedAtMaxDistanceFromCeilingHeight", 0xC8, "StructProperty"},
            {"NativeFlyingDownZSpeedAddedWhileFalling", 0xF8, "StructProperty"},
            {"NativeFlyingHeightDecayMin", 0x128, "StructProperty"},
            {"NativePreCrashWindupDuration", 0x158, "StructProperty"},
            {"NativeFlyingInputWeightHorizontal", 0x188, "StructProperty"},
            {"NativeFlyingInputWeightLookDirection", 0x1B8, "StructProperty"},
            {"NativeDeltaFOVForwardOffsetExponent", 0x1E4, "FloatProperty"},
            {"NativeFOVModeSwapInterpRate", 0x1E8, "FloatProperty"},
            {"NativeMaxFOVOffset", 0x1EC, "FloatProperty"},
            {"NativeRotationRateForMaxRightOffset", 0x1F0, "FloatProperty"},
            {"NativeRightOffsetMaxCombinedStrafeTurn", 0x1F4, "FloatProperty"},
            {"NativeRightOffsetStrafe", 0x1F8, "FloatProperty"},
            {"NativeRightOffsetTurn", 0x1FC, "FloatProperty"},
            {"NativeRightOffsetDodge", 0x200, "FloatProperty"},
            {"NativeForwardOffsetDistanceCrashingFinal", 0x204, "FloatProperty"},
            {"NativeForwardOffsetDistanceForceCrashingPhase1", 0x208, "FloatProperty"},
            {"NativeForwardOffsetDistanceCrashingPhase1", 0x20C, "FloatProperty"},
            {"NativeForwardOffsetDistanceCrashingPhase2", 0x210, "FloatProperty"},
            {"NativeForwardOffsetCrashingTimeAfterWindupToEnterFinalPhase", 0x214, "FloatProperty"},
            {"NativeForwardOffsetInterpSpeedCrashingPhase1", 0x218, "FloatProperty"},
            {"NativeForwardOffsetInterpSpeedCrashingPhase2", 0x21C, "FloatProperty"},
            {"NativeForwardOffsetInterpSpeedCrashingFinal", 0x220, "FloatProperty"},
            {"NativeTagForceCrash", 0x224, "StructProperty"},
            {"NativeFOVInterpSpeed", 0x228, "FloatProperty"},
            {"NativeMinFOVOffsetFast", 0x22C, "FloatProperty"},
            {"NativeMinFOVOffsetSlow", 0x230, "FloatProperty"},
            {"NativeMaxFOVOffsetSlow", 0x234, "FloatProperty"},
            {"NativeLateBoostStartTime", 0x238, "FloatProperty"},
            {"NativeTimeSinceLastBoostLateMin", 0x23C, "FloatProperty"},
            {"NativeTimeSinceLastBoostLateMax", 0x240, "FloatProperty"},
            {"NativeFOVOffsetLateMin", 0x244, "FloatProperty"},
            {"NativeFOVOffsetLateMax", 0x248, "FloatProperty"},
            {"NativeTimeSinceEarlyBoostLateMin", 0x24C, "FloatProperty"},
            {"NativeTimeSinceLastBoostEarlyMax", 0x250, "FloatProperty"},
            {"NativeFOVOffsetEarlyMin", 0x254, "FloatProperty"},
            {"NativeFOVOffsetEarlyMax", 0x258, "FloatProperty"},
            {"NativeFOVOffsetModeMin", 0x25C, "FloatProperty"},
            {"NativeCrashingFOVInterpSpeed", 0x260, "FloatProperty"},
            {"NativeFOVOffsetWindup", 0x264, "FloatProperty"},
            {"NativePositiveFlyingMoveActionXFOVInterpSpeed", 0x268, "FloatProperty"},
            {"NativeNegativeFlyingMoveActionXFOVInterpSpeed", 0x26C, "FloatProperty"},
            {"NativeFlyingMoveActionPositiveMin", 0x270, "FloatProperty"},
            {"NativeFlyingMoveActionPositiveMax", 0x274, "FloatProperty"},
            {"NativeFlyingMoveActionPositiveFOVMin", 0x278, "FloatProperty"},
            {"NativeFlyingMoveActionPositiveFOVMax", 0x27C, "FloatProperty"},
            {"NativeFlyingMoveActionNegativeMin", 0x280, "FloatProperty"},
            {"NativeFlyingMoveActionNegativeMax", 0x284, "FloatProperty"},
            {"NativeFlyingMoveActionNegativeFOVMin", 0x288, "FloatProperty"},
            {"NativeFlyingMoveActionNegativeFOVMax", 0x28C, "FloatProperty"},
            {"NativeDefaultFOVInterpSpeed", 0x290, "FloatProperty"},
            {"NativePositiveFOVMax", 0x294, "FloatProperty"},
            {"NativeLocationOffsetForPositiveFOVMax", 0x298, "FloatProperty"},
            {"NativeNegativeFOVMax", 0x29C, "FloatProperty"},
            {"NativeLocationOffsetForNegativeFOVMax", 0x2A0, "FloatProperty"},
            {"NativeClampedDeltaFOVInterpSpeed", 0x2A4, "FloatProperty"},
            {"NativeShortTimeSinceLastBoostStart", 0x2A8, "FloatProperty"},
            {"NativeLongTimeSinceLastBoostStart", 0x2AC, "FloatProperty"},
            {"NativeLongOrShortBoostTimeInterpSpeed", 0x2B0, "FloatProperty"},
            {"NativeMediumBoostTimeInterpSpeed", 0x2B4, "FloatProperty"},
            {"NativeForwardLocationOffsetTargetMax", 0x2B8, "FloatProperty"},
            {"NativeForwardLocationOffsetFromDownZVelocityInterpSpeed", 0x2BC, "FloatProperty"},
            {"NativeDodgeStartDuration", 0x2C0, "FloatProperty"},
            {"NativeStrafeFOVOffsetMin", 0x2C4, "FloatProperty"},
            {"NativeStrafeFOVOffsetMax", 0x2C8, "FloatProperty"},
            {"NativeStrafeFOVMultiplierMin", 0x2CC, "FloatProperty"},
            {"NativeStrafeFOVMultiplierMax", 0x2D0, "FloatProperty"},
            {"NativeViewLocationOffsetRightInterpSpeedCrashing", 0x2D4, "FloatProperty"},
            {"NativeDodgeStartDurationForInterpSpeed", 0x2D8, "FloatProperty"},
            {"NativeViewLocationOffsetRightInterpSpeedStartingDodge", 0x2DC, "FloatProperty"},
            {"NativeViewLocationOffsetRightInterpSpeedMostlyStrafing", 0x2E0, "FloatProperty"},
            {"NativeViewLocationOffsetRightInterpSpeedMostlyTurning", 0x2E4, "FloatProperty"},
            {"bUseNativeCalculation", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortContextualTutorialDefinition_WingedFlying
    {
        static constexpr std::string_view Name = "FortContextualTutorialDefinition_WingedFlying";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UFortContextualTutorialDefinition_GameplayEvent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinTimeBeforeCompletion = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MinTimeBeforeCompletion", 0x198, "StructProperty"},
        }};
    };

    struct FortContextualTutorial_WingedFlying
    {
        static constexpr std::string_view Name = "FortContextualTutorial_WingedFlying";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortContextualTutorial_GameplayEvent";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakMarkerActor = 0xD8;
            static constexpr std::uintptr_t MarkerText = 0xE0;
            static constexpr std::uintptr_t MarkerHighlightComponent = 0xF0;
            static constexpr std::uintptr_t TutorialDefinition = 0xF8;
            static constexpr std::uintptr_t OwnerController = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WeakMarkerActor", 0xD8, "WeakObjectProperty"},
            {"MarkerText", 0xE0, "TextProperty"},
            {"MarkerHighlightComponent", 0xF0, "WeakObjectProperty"},
            {"TutorialDefinition", 0xF8, "ObjectProperty"},
            {"OwnerController", 0x108, "ObjectProperty"},
        }};
    };

    struct FortGameplayAbility_SunroseWingsCrashBase
    {
        static constexpr std::string_view Name = "FortGameplayAbility_SunroseWingsCrashBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t TelegraphUpdateIntervalSeconds = 0xB40;
            static constexpr std::uintptr_t TelegraphCollisionObjectTypes = 0xB48;
            static constexpr std::uintptr_t TelegraphInterpSpeed = 0xB58;
            static constexpr std::uintptr_t CrashWindupDuration = 0xB90;
            static constexpr std::uintptr_t CrashLookPitchMin = 0xB94;
            static constexpr std::uintptr_t CrashLookPitchMax = 0xB98;
            static constexpr std::uintptr_t TelegraphTraceStartDist = 0xB9C;
            static constexpr std::uintptr_t TelegraphTraceEndDist = 0xBA0;
            static constexpr std::uintptr_t TelegraphActorClass = 0xBA8;
            static constexpr std::uintptr_t TelegraphActor = 0xBB0;
            static constexpr std::uintptr_t TelegraphFXSystemAsset = 0xBB8;
            static constexpr std::uintptr_t TelegraphNS = 0xBC0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"TelegraphUpdateIntervalSeconds", 0xB40, "FloatProperty"},
            {"TelegraphCollisionObjectTypes", 0xB48, "ArrayProperty"},
            {"TelegraphInterpSpeed", 0xB58, "FloatProperty"},
            {"CrashWindupDuration", 0xB90, "FloatProperty"},
            {"CrashLookPitchMin", 0xB94, "FloatProperty"},
            {"CrashLookPitchMax", 0xB98, "FloatProperty"},
            {"TelegraphTraceStartDist", 0xB9C, "FloatProperty"},
            {"TelegraphTraceEndDist", 0xBA0, "FloatProperty"},
            {"TelegraphActorClass", 0xBA8, "ClassProperty"},
            {"TelegraphActor", 0xBB0, "ObjectProperty"},
            {"TelegraphFXSystemAsset", 0xBB8, "ObjectProperty"},
            {"TelegraphNS", 0xBC0, "ObjectProperty"},
        }};
    };

    struct FortGameplayCueNotifyLoop_WingsSkimming
    {
        static constexpr std::string_view Name = "FortGameplayCueNotifyLoop_WingsSkimming";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t WingsSkeletalMesh = 0xC58;
            static constexpr std::uintptr_t SkimFX = 0xC60;
            static constexpr std::uintptr_t SkimAudioComponent = 0xC68;
            static constexpr std::uintptr_t SkimLoopSound = 0xC70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WingsSkeletalMesh", 0xC58, "WeakObjectProperty"},
            {"SkimFX", 0xC60, "WeakObjectProperty"},
            {"SkimAudioComponent", 0xC68, "WeakObjectProperty"},
            {"SkimLoopSound", 0xC70, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicFlyingWinged
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicFlyingWinged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtLogicFlying";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQueryToFly = 0x1D0;
            static constexpr std::uintptr_t bUseNativeUpdateForMovement = 0x218;
            static constexpr std::uintptr_t FlyingStatusConfigs = 0x220;
            static constexpr std::uintptr_t FlyingThroughCeilingGE = 0x230;
            static constexpr std::uintptr_t FlyingThroughCeilingTag = 0x238;
            static constexpr std::uintptr_t EnergyDrainCueTag = 0x23C;
            static constexpr std::uintptr_t CrashEnabledCueTag = 0x240;
            static constexpr std::uintptr_t HitBonkCueTag = 0x244;
            static constexpr std::uintptr_t EventTagToTriggerWhenMiniBoosting = 0x248;
            static constexpr std::uintptr_t EventTagToTriggerCrashImpact = 0x24C;
            static constexpr std::uintptr_t TagsToPreventLowFrictionLanding = 0x250;
            static constexpr std::uintptr_t LowFrictionLandingGE = 0x270;
            static constexpr std::uintptr_t TagToSetByCallerDuration = 0x278;
            static constexpr std::uintptr_t BaseFlyingCost = 0x280;
            static constexpr std::uintptr_t FlyingStatusToStopBaseCost = 0x2A8;
            static constexpr std::uintptr_t ExtraLeapCrashCost = 0x2B0;
            static constexpr std::uintptr_t HeightIncreasePer1Cost = 0x2D8;
            static constexpr std::uintptr_t DodgeSpeedMin = 0x300;
            static constexpr std::uintptr_t DodgeSpeedMax = 0x328;
            static constexpr std::uintptr_t DodgeSpeedDecayInitialDelay = 0x350;
            static constexpr std::uintptr_t DodgeSpeedRampExponent = 0x378;
            static constexpr std::uintptr_t DodgeSpeedDecayExponent = 0x3A0;
            static constexpr std::uintptr_t DodgeDuration = 0x3C8;
            static constexpr std::uintptr_t StartedFlyingTransitionDuration = 0x3F0;
            static constexpr std::uintptr_t StartedFlyingSpeedBoundForInterpMin = 0x418;
            static constexpr std::uintptr_t StartedFlyingSpeedBoundForInterpMax = 0x440;
            static constexpr std::uintptr_t StartedFlyingVelocityInterpSpeedAtMinSpeed = 0x468;
            static constexpr std::uintptr_t StartedFlyingVelocityInterpSpeedAtMaxSpeed = 0x490;
            static constexpr std::uintptr_t FlyingLookPitchClampMin = 0x4B8;
            static constexpr std::uintptr_t FlyingLookPitchClampMax = 0x4E0;
            static constexpr std::uintptr_t DefaultLookPitchAngleOffset = 0x508;
            static constexpr std::uintptr_t CrashingLookPitchClampMin = 0x530;
            static constexpr std::uintptr_t CrashingLookPitchClampMax = 0x558;
            static constexpr std::uintptr_t CrashingInputWeightLookDirection = 0x580;
            static constexpr std::uintptr_t FlyingInputWeightLockDirection = 0x5A8;
            static constexpr std::uintptr_t FlyingInputWeightHorizontal = 0x5D0;
            static constexpr std::uintptr_t PitchInterpSpeedWhileCrashing = 0x5F8;
            static constexpr std::uintptr_t PitchInterpSpeedAtBaseSpeed = 0x620;
            static constexpr std::uintptr_t PitchInterpSpeedAtMaxLateralSpeed = 0x648;
            static constexpr std::uintptr_t PitchInterpSpeedAtMaxTotalSpeed = 0x670;
            static constexpr std::uintptr_t YawInterpSpeedWhileCrashing = 0x698;
            static constexpr std::uintptr_t YawInterpSpeedAtMinBrakeSpeed = 0x6C0;
            static constexpr std::uintptr_t YawInterpSpeedAtBaseSpeed = 0x6E8;
            static constexpr std::uintptr_t YawInterpSpeedAtMaxLateralSpeed = 0x710;
            static constexpr std::uintptr_t InputInterpSpeedHorizontal = 0x738;
            static constexpr std::uintptr_t CrashingMovementInterpSpeed = 0x760;
            static constexpr std::uintptr_t AscendingLookPitchClampMin = 0x788;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileAscendingMin = 0x7B0;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileAscendingMax = 0x7D8;
            static constexpr std::uintptr_t MaxCeilingHeightAddLimitFromAscend = 0x800;
            static constexpr std::uintptr_t AscendingSpeedZUpAddedMin = 0x828;
            static constexpr std::uintptr_t AscendingSpeedZUpAddedMax = 0x850;
            static constexpr std::uintptr_t MaxCeilingHeightAddLimitFromBoost = 0x878;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileBoostingMin = 0x8A0;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileBoostingMax = 0x8C8;
            static constexpr std::uintptr_t PercentMaxLookPitchForMaxBoostCeilingHeightIncrease = 0x8F0;
            static constexpr std::uintptr_t PreCrashWindUpDuration = 0x918;
            static constexpr std::uintptr_t CrashingSpeedBase = 0x940;
            static constexpr std::uintptr_t CrashingSpeedAddedAtMaxDistanceFromCeilingHeight = 0x968;
            static constexpr std::uintptr_t DistanceFromCeilingHeightForMaxCrashingSpeedAdded = 0x990;
            static constexpr std::uintptr_t CrashingLookPitchClampFinalMax = 0x9B8;
            static constexpr std::uintptr_t CrashingLookPitchClampDelayBeforeLerpToFinalMax = 0x9E0;
            static constexpr std::uintptr_t CrashingLookPitchClampDurationToLerpToFinalMax = 0xA08;
            static constexpr std::uintptr_t PreCrashingSpeedBase = 0xA30;
            static constexpr std::uintptr_t PreCrashingInterpToSpeedMod = 0xA58;
            static constexpr std::uintptr_t DistanceFromCeilingHeightForCrashMode = 0xA80;
            static constexpr std::uintptr_t MinAngleToPreventCrash = 0xAA8;
            static constexpr std::uintptr_t CrashImpactIgnoreWaterDuration = 0xAD0;
            static constexpr std::uintptr_t MaxAngleForLowFrictionLanding = 0xAF8;
            static constexpr std::uintptr_t LowFrictionDurationMin = 0xB20;
            static constexpr std::uintptr_t LowFrictionDurationMax = 0xB48;
            static constexpr std::uintptr_t LowFrictionDurationScalar = 0xB70;
            static constexpr std::uintptr_t SpeedForMinLowFrictionMult = 0xB98;
            static constexpr std::uintptr_t SpeedForMaxLowFrictionMult = 0xBC0;
            static constexpr std::uintptr_t LowFrictionMultFromSpeedMin = 0xBE8;
            static constexpr std::uintptr_t LowFrictionMultFromSpeedMax = 0xC10;
            static constexpr std::uintptr_t ImpactAngleForMaxLowFrictionDuration = 0xC38;
            static constexpr std::uintptr_t ImpactAngleForMinLowFrictionDuration = 0xC60;
            static constexpr std::uintptr_t LowFrictionMultFromImpactAngleMax = 0xC88;
            static constexpr std::uintptr_t LowFrictionMultFromImpactAngleMin = 0xCB0;
            static constexpr std::uintptr_t FlyingSpeedBase = 0xCD8;
            static constexpr std::uintptr_t FlyingSpeedAddedAtMaxDistanceFromCeilingHeight = 0xD00;
            static constexpr std::uintptr_t FlyingDownZSpeedAddedWhileFalling = 0xD28;
            static constexpr std::uintptr_t DistanceFromCeilingHeightForMaxFlyingSpeedAdded = 0xD50;
            static constexpr std::uintptr_t AirBrakingDefaultMultiMin = 0xD78;
            static constexpr std::uintptr_t AirBrakingDownSpeedMultiMin = 0xDA0;
            static constexpr std::uintptr_t ForwardInputThresholdToTriggerMiniBoost = 0xDC8;
            static constexpr std::uintptr_t PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput = 0xDF0;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileHoldingForwardMin = 0xE18;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileHoldingForwardMax = 0xE40;
            static constexpr std::uintptr_t CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight = 0xE68;
            static constexpr std::uintptr_t CeilingHeightMinDecreaseSpeedWhileFlying = 0xE90;
            static constexpr std::uintptr_t CeilingHeightMinDecreaseSpeedWhileBoosting = 0xEB8;
            static constexpr std::uintptr_t CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight = 0xEE0;
            static constexpr std::uintptr_t CeilingHeightMinDecreaseSpeedWhileAscending = 0xF08;
            static constexpr std::uintptr_t CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight = 0xF30;
            static constexpr std::uintptr_t HeightAboveWorldInterpSpeedIncreasing = 0xF58;
            static constexpr std::uintptr_t HeightAboveWorldInterpSpeedDecreasing = 0xF80;
            static constexpr std::uintptr_t HeightForMinAddedCeilingDecay = 0xFA8;
            static constexpr std::uintptr_t HeightForMaxAddedCeilingDecay = 0xFD0;
            static constexpr std::uintptr_t MaxAddedCeilingDecayFromHeight = 0xFF8;
            static constexpr std::uintptr_t EnergyThresholdForAddedCeilingDecay = 0x1020;
            static constexpr std::uintptr_t MaxAddedCeilingDecayFromEnergy = 0x1048;
            static constexpr std::uintptr_t GlobalCeilingHeightMax = 0x1070;
            static constexpr std::uintptr_t GlobalCeilingHeightDiminishingReturnsExponent = 0x1098;
            static constexpr std::uintptr_t GlobalCeilingHeightDiminishingReturnsRange = 0x10C0;
            static constexpr std::uintptr_t SkimmingMinRequiredAngleToSurface = 0x10E8;
            static constexpr std::uintptr_t SkimmingMinRequiredVelocityAlongSurface = 0x1110;
            static constexpr std::uintptr_t SkimmingMinRequiredHeightAboveWorld = 0x1138;
            static constexpr std::uintptr_t MaxAngleForGroundHit = 0x1160;
            static constexpr std::uintptr_t VelocityClampOnBonk = 0x1188;
        };

        inline static constexpr std::array<PropertyInfo, 111> Properties{{
            {"TagQueryToFly", 0x1D0, "StructProperty"},
            {"bUseNativeUpdateForMovement", 0x218, "BoolProperty"},
            {"FlyingStatusConfigs", 0x220, "ArrayProperty"},
            {"FlyingThroughCeilingGE", 0x230, "ClassProperty"},
            {"FlyingThroughCeilingTag", 0x238, "StructProperty"},
            {"EnergyDrainCueTag", 0x23C, "StructProperty"},
            {"CrashEnabledCueTag", 0x240, "StructProperty"},
            {"HitBonkCueTag", 0x244, "StructProperty"},
            {"EventTagToTriggerWhenMiniBoosting", 0x248, "StructProperty"},
            {"EventTagToTriggerCrashImpact", 0x24C, "StructProperty"},
            {"TagsToPreventLowFrictionLanding", 0x250, "StructProperty"},
            {"LowFrictionLandingGE", 0x270, "ClassProperty"},
            {"TagToSetByCallerDuration", 0x278, "StructProperty"},
            {"BaseFlyingCost", 0x280, "StructProperty"},
            {"FlyingStatusToStopBaseCost", 0x2A8, "IntProperty"},
            {"ExtraLeapCrashCost", 0x2B0, "StructProperty"},
            {"HeightIncreasePer1Cost", 0x2D8, "StructProperty"},
            {"DodgeSpeedMin", 0x300, "StructProperty"},
            {"DodgeSpeedMax", 0x328, "StructProperty"},
            {"DodgeSpeedDecayInitialDelay", 0x350, "StructProperty"},
            {"DodgeSpeedRampExponent", 0x378, "StructProperty"},
            {"DodgeSpeedDecayExponent", 0x3A0, "StructProperty"},
            {"DodgeDuration", 0x3C8, "StructProperty"},
            {"StartedFlyingTransitionDuration", 0x3F0, "StructProperty"},
            {"StartedFlyingSpeedBoundForInterpMin", 0x418, "StructProperty"},
            {"StartedFlyingSpeedBoundForInterpMax", 0x440, "StructProperty"},
            {"StartedFlyingVelocityInterpSpeedAtMinSpeed", 0x468, "StructProperty"},
            {"StartedFlyingVelocityInterpSpeedAtMaxSpeed", 0x490, "StructProperty"},
            {"FlyingLookPitchClampMin", 0x4B8, "StructProperty"},
            {"FlyingLookPitchClampMax", 0x4E0, "StructProperty"},
            {"DefaultLookPitchAngleOffset", 0x508, "StructProperty"},
            {"CrashingLookPitchClampMin", 0x530, "StructProperty"},
            {"CrashingLookPitchClampMax", 0x558, "StructProperty"},
            {"CrashingInputWeightLookDirection", 0x580, "StructProperty"},
            {"FlyingInputWeightLockDirection", 0x5A8, "StructProperty"},
            {"FlyingInputWeightHorizontal", 0x5D0, "StructProperty"},
            {"PitchInterpSpeedWhileCrashing", 0x5F8, "StructProperty"},
            {"PitchInterpSpeedAtBaseSpeed", 0x620, "StructProperty"},
            {"PitchInterpSpeedAtMaxLateralSpeed", 0x648, "StructProperty"},
            {"PitchInterpSpeedAtMaxTotalSpeed", 0x670, "StructProperty"},
            {"YawInterpSpeedWhileCrashing", 0x698, "StructProperty"},
            {"YawInterpSpeedAtMinBrakeSpeed", 0x6C0, "StructProperty"},
            {"YawInterpSpeedAtBaseSpeed", 0x6E8, "StructProperty"},
            {"YawInterpSpeedAtMaxLateralSpeed", 0x710, "StructProperty"},
            {"InputInterpSpeedHorizontal", 0x738, "StructProperty"},
            {"CrashingMovementInterpSpeed", 0x760, "StructProperty"},
            {"AscendingLookPitchClampMin", 0x788, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileAscendingMin", 0x7B0, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileAscendingMax", 0x7D8, "StructProperty"},
            {"MaxCeilingHeightAddLimitFromAscend", 0x800, "StructProperty"},
            {"AscendingSpeedZUpAddedMin", 0x828, "StructProperty"},
            {"AscendingSpeedZUpAddedMax", 0x850, "StructProperty"},
            {"MaxCeilingHeightAddLimitFromBoost", 0x878, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileBoostingMin", 0x8A0, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileBoostingMax", 0x8C8, "StructProperty"},
            {"PercentMaxLookPitchForMaxBoostCeilingHeightIncrease", 0x8F0, "StructProperty"},
            {"PreCrashWindUpDuration", 0x918, "StructProperty"},
            {"CrashingSpeedBase", 0x940, "StructProperty"},
            {"CrashingSpeedAddedAtMaxDistanceFromCeilingHeight", 0x968, "StructProperty"},
            {"DistanceFromCeilingHeightForMaxCrashingSpeedAdded", 0x990, "StructProperty"},
            {"CrashingLookPitchClampFinalMax", 0x9B8, "StructProperty"},
            {"CrashingLookPitchClampDelayBeforeLerpToFinalMax", 0x9E0, "StructProperty"},
            {"CrashingLookPitchClampDurationToLerpToFinalMax", 0xA08, "StructProperty"},
            {"PreCrashingSpeedBase", 0xA30, "StructProperty"},
            {"PreCrashingInterpToSpeedMod", 0xA58, "StructProperty"},
            {"DistanceFromCeilingHeightForCrashMode", 0xA80, "StructProperty"},
            {"MinAngleToPreventCrash", 0xAA8, "StructProperty"},
            {"CrashImpactIgnoreWaterDuration", 0xAD0, "StructProperty"},
            {"MaxAngleForLowFrictionLanding", 0xAF8, "StructProperty"},
            {"LowFrictionDurationMin", 0xB20, "StructProperty"},
            {"LowFrictionDurationMax", 0xB48, "StructProperty"},
            {"LowFrictionDurationScalar", 0xB70, "StructProperty"},
            {"SpeedForMinLowFrictionMult", 0xB98, "StructProperty"},
            {"SpeedForMaxLowFrictionMult", 0xBC0, "StructProperty"},
            {"LowFrictionMultFromSpeedMin", 0xBE8, "StructProperty"},
            {"LowFrictionMultFromSpeedMax", 0xC10, "StructProperty"},
            {"ImpactAngleForMaxLowFrictionDuration", 0xC38, "StructProperty"},
            {"ImpactAngleForMinLowFrictionDuration", 0xC60, "StructProperty"},
            {"LowFrictionMultFromImpactAngleMax", 0xC88, "StructProperty"},
            {"LowFrictionMultFromImpactAngleMin", 0xCB0, "StructProperty"},
            {"FlyingSpeedBase", 0xCD8, "StructProperty"},
            {"FlyingSpeedAddedAtMaxDistanceFromCeilingHeight", 0xD00, "StructProperty"},
            {"FlyingDownZSpeedAddedWhileFalling", 0xD28, "StructProperty"},
            {"DistanceFromCeilingHeightForMaxFlyingSpeedAdded", 0xD50, "StructProperty"},
            {"AirBrakingDefaultMultiMin", 0xD78, "StructProperty"},
            {"AirBrakingDownSpeedMultiMin", 0xDA0, "StructProperty"},
            {"ForwardInputThresholdToTriggerMiniBoost", 0xDC8, "StructProperty"},
            {"PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput", 0xDF0, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileHoldingForwardMin", 0xE18, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileHoldingForwardMax", 0xE40, "StructProperty"},
            {"CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight", 0xE68, "StructProperty"},
            {"CeilingHeightMinDecreaseSpeedWhileFlying", 0xE90, "StructProperty"},
            {"CeilingHeightMinDecreaseSpeedWhileBoosting", 0xEB8, "StructProperty"},
            {"CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight", 0xEE0, "StructProperty"},
            {"CeilingHeightMinDecreaseSpeedWhileAscending", 0xF08, "StructProperty"},
            {"CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight", 0xF30, "StructProperty"},
            {"HeightAboveWorldInterpSpeedIncreasing", 0xF58, "StructProperty"},
            {"HeightAboveWorldInterpSpeedDecreasing", 0xF80, "StructProperty"},
            {"HeightForMinAddedCeilingDecay", 0xFA8, "StructProperty"},
            {"HeightForMaxAddedCeilingDecay", 0xFD0, "StructProperty"},
            {"MaxAddedCeilingDecayFromHeight", 0xFF8, "StructProperty"},
            {"EnergyThresholdForAddedCeilingDecay", 0x1020, "StructProperty"},
            {"MaxAddedCeilingDecayFromEnergy", 0x1048, "StructProperty"},
            {"GlobalCeilingHeightMax", 0x1070, "StructProperty"},
            {"GlobalCeilingHeightDiminishingReturnsExponent", 0x1098, "StructProperty"},
            {"GlobalCeilingHeightDiminishingReturnsRange", 0x10C0, "StructProperty"},
            {"SkimmingMinRequiredAngleToSurface", 0x10E8, "StructProperty"},
            {"SkimmingMinRequiredVelocityAlongSurface", 0x1110, "StructProperty"},
            {"SkimmingMinRequiredHeightAboveWorld", 0x1138, "StructProperty"},
            {"MaxAngleForGroundHit", 0x1160, "StructProperty"},
            {"VelocityClampOnBonk", 0x1188, "StructProperty"},
        }};
    };

    struct FortMovementMode_SunRoseGuidedMotionLeap
    {
        static constexpr std::string_view Name = "FortMovementMode_SunRoseGuidedMotionLeap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtGuidedMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t GuideMode = 0x1B8;
            static constexpr std::uintptr_t Priority = 0x1BC;
            static constexpr std::uintptr_t bSetNewMovementMode = 0x1C0;
            static constexpr std::uintptr_t bSetFallingOnLift = 0x1C1;
            static constexpr std::uintptr_t MovementModeToSetOnStart = 0x1C2;
            static constexpr std::uintptr_t bRestoreOldMovementModeOnDeactivate = 0x1C3;
            static constexpr std::uintptr_t DurationType = 0x1C4;
            static constexpr std::uintptr_t MaxDuration = 0x1C8;
            static constexpr std::uintptr_t VerifyMaxDurationOverride = 0x1F4;
            static constexpr std::uintptr_t VerifyWorldCeilingHeightOverride = 0x1FC;
            static constexpr std::uintptr_t PathOffsetCurve = 0x208;
            static constexpr std::uintptr_t TimeMappingCurve = 0x210;
            static constexpr std::uintptr_t bIsAdditive = 0x218;
            static constexpr std::uintptr_t bSmoothOutTransitionToFinish = 0x219;
            static constexpr std::uintptr_t FinishVelocityMode = 0x21A;
            static constexpr std::uintptr_t FinishVelocityToSet = 0x220;
            static constexpr std::uintptr_t FinishVelocityToClamp = 0x238;
            static constexpr std::uintptr_t bEndOnLaunchCharacter = 0x264;
            static constexpr std::uintptr_t OptionalBoolConfiguration = 0x268;
            static constexpr std::uintptr_t OptionalFloatConfiguration = 0x278;
            static constexpr std::uintptr_t CalculateFinishVelocityConfig = 0x288;
            static constexpr std::uintptr_t MovementDelta = 0x378;
            static constexpr std::uintptr_t MaxSpeed = 0x390;
            static constexpr std::uintptr_t TargetLerpSpeedHorizontalCurve = 0x3C0;
            static constexpr std::uintptr_t TargetLerpSpeedVerticalCurve = 0x3C8;
            static constexpr std::uintptr_t TargetOffsetType = 0x3D0;
            static constexpr std::uintptr_t TargetOffsetX = 0x3D8;
            static constexpr std::uintptr_t TargetOffsetY = 0x408;
            static constexpr std::uintptr_t TargetOffsetZ = 0x438;
            static constexpr std::uintptr_t DefaultTargetLerpSpeedHorizontal = 0x464;
            static constexpr std::uintptr_t DefaultTargetLerpSpeedVerticle = 0x468;
            static constexpr std::uintptr_t bRestrictSpeedToExpected = 0x46C;
            static constexpr std::uintptr_t MoveToTargetErrorAllowance = 0x470;
            static constexpr std::uintptr_t MaxMoveToTargetDistance = 0x478;
            static constexpr std::uintptr_t MaxMoveToTargetDistanceTraveled = 0x4A8;
            static constexpr std::uintptr_t MaxMoveToInvalidTargetDistance = 0x4D8;
            static constexpr std::uintptr_t Strength = 0x508;
            static constexpr std::uintptr_t StrengthOverTime = 0x538;
            static constexpr std::uintptr_t bUseAveragesForStrengthOverTime = 0x540;
            static constexpr std::uintptr_t Direction = 0x548;
            static constexpr std::uintptr_t bEnableGravity = 0x560;
            static constexpr std::uintptr_t bEnforceHeightAboveGround = 0x561;
            static constexpr std::uintptr_t HeightAboveGround = 0x568;
            static constexpr std::uintptr_t MaxHeightCorrectionSpeedMultiplier = 0x594;
            static constexpr std::uintptr_t bUseNewBPAdjustRootMotionVelocity = 0x599;
        };

        inline static constexpr std::array<PropertyInfo, 45> Properties{{
            {"GuideMode", 0x1B8, "EnumProperty"},
            {"Priority", 0x1BC, "IntProperty"},
            {"bSetNewMovementMode", 0x1C0, "BoolProperty"},
            {"bSetFallingOnLift", 0x1C1, "BoolProperty"},
            {"MovementModeToSetOnStart", 0x1C2, "ByteProperty"},
            {"bRestoreOldMovementModeOnDeactivate", 0x1C3, "BoolProperty"},
            {"DurationType", 0x1C4, "EnumProperty"},
            {"MaxDuration", 0x1C8, "StructProperty"},
            {"VerifyMaxDurationOverride", 0x1F4, "OptionalProperty"},
            {"VerifyWorldCeilingHeightOverride", 0x1FC, "OptionalProperty"},
            {"PathOffsetCurve", 0x208, "ObjectProperty"},
            {"TimeMappingCurve", 0x210, "ObjectProperty"},
            {"bIsAdditive", 0x218, "BoolProperty"},
            {"bSmoothOutTransitionToFinish", 0x219, "BoolProperty"},
            {"FinishVelocityMode", 0x21A, "EnumProperty"},
            {"FinishVelocityToSet", 0x220, "StructProperty"},
            {"FinishVelocityToClamp", 0x238, "StructProperty"},
            {"bEndOnLaunchCharacter", 0x264, "BoolProperty"},
            {"OptionalBoolConfiguration", 0x268, "ArrayProperty"},
            {"OptionalFloatConfiguration", 0x278, "ArrayProperty"},
            {"CalculateFinishVelocityConfig", 0x288, "StructProperty"},
            {"MovementDelta", 0x378, "StructProperty"},
            {"MaxSpeed", 0x390, "StructProperty"},
            {"TargetLerpSpeedHorizontalCurve", 0x3C0, "ObjectProperty"},
            {"TargetLerpSpeedVerticalCurve", 0x3C8, "ObjectProperty"},
            {"TargetOffsetType", 0x3D0, "EnumProperty"},
            {"TargetOffsetX", 0x3D8, "StructProperty"},
            {"TargetOffsetY", 0x408, "StructProperty"},
            {"TargetOffsetZ", 0x438, "StructProperty"},
            {"DefaultTargetLerpSpeedHorizontal", 0x464, "FloatProperty"},
            {"DefaultTargetLerpSpeedVerticle", 0x468, "FloatProperty"},
            {"bRestrictSpeedToExpected", 0x46C, "BoolProperty"},
            {"MoveToTargetErrorAllowance", 0x470, "FloatProperty"},
            {"MaxMoveToTargetDistance", 0x478, "StructProperty"},
            {"MaxMoveToTargetDistanceTraveled", 0x4A8, "StructProperty"},
            {"MaxMoveToInvalidTargetDistance", 0x4D8, "StructProperty"},
            {"Strength", 0x508, "StructProperty"},
            {"StrengthOverTime", 0x538, "ObjectProperty"},
            {"bUseAveragesForStrengthOverTime", 0x540, "BoolProperty"},
            {"Direction", 0x548, "StructProperty"},
            {"bEnableGravity", 0x560, "BoolProperty"},
            {"bEnforceHeightAboveGround", 0x561, "BoolProperty"},
            {"HeightAboveGround", 0x568, "StructProperty"},
            {"MaxHeightCorrectionSpeedMultiplier", 0x594, "FloatProperty"},
            {"bUseNewBPAdjustRootMotionVelocity", 0x599, "BoolProperty"},
        }};
    };

    struct FortMovementMode_WingedFlyingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_WingedFlyingRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_FlyingRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t FlyingStatus = 0x72;
            static constexpr std::uintptr_t CurrentHeightAboveWorld = 0x74;
            static constexpr std::uintptr_t InterpolatedHeightAboveWorld = 0x78;
            static constexpr std::uintptr_t SpeedMultiplierFromForwardInput = 0x7C;
            static constexpr std::uintptr_t InterpolatedYInput = 0x80;
            static constexpr std::uintptr_t InterpolatedCrashInput = 0x88;
            static constexpr std::uintptr_t bIsStartingFlying = 0x99;
            static constexpr std::uintptr_t FlyingEnergy = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"FlyingStatus", 0x72, "EnumProperty"},
            {"CurrentHeightAboveWorld", 0x74, "FloatProperty"},
            {"InterpolatedHeightAboveWorld", 0x78, "FloatProperty"},
            {"SpeedMultiplierFromForwardInput", 0x7C, "FloatProperty"},
            {"InterpolatedYInput", 0x80, "FloatProperty"},
            {"InterpolatedCrashInput", 0x88, "StructProperty"},
            {"bIsStartingFlying", 0x99, "BoolProperty"},
            {"FlyingEnergy", 0x9C, "FloatProperty"},
        }};
    };

    struct FortPawnComponent_WingedFlying
    {
        static constexpr std::string_view Name = "FortPawnComponent_WingedFlying";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FlyingStatus = 0xC8;
            static constexpr std::uintptr_t ForwardSpeed = 0xCC;
            static constexpr std::uintptr_t AddedDownZVelocity = 0xD0;
            static constexpr std::uintptr_t NativeCurrentHeightAboveWorld = 0xD4;
            static constexpr std::uintptr_t CurrentFlyingEnergy = 0xD8;
            static constexpr std::uintptr_t bIntendsToBoost = 0xDC;
            static constexpr std::uintptr_t bIntendsToAscend = 0xDD;
            static constexpr std::uintptr_t bIntendsToCrash = 0xDE;
            static constexpr std::uintptr_t bIntendsToRollLeft = 0xDF;
            static constexpr std::uintptr_t bIntendsToRollRight = 0xE0;
            static constexpr std::uintptr_t FlyingMovementModeExtension = 0xE8;
            static constexpr std::uintptr_t TagsToEnableSkimmingCheck = 0xF0;
            static constexpr std::uintptr_t SkimCheckTraceChannel = 0x110;
            static constexpr std::uintptr_t SkimCheckLeftStartSocket = 0x114;
            static constexpr std::uintptr_t SkimCheckLeftEndSocket = 0x118;
            static constexpr std::uintptr_t SkimCheckRightStartSocket = 0x11C;
            static constexpr std::uintptr_t SkimCheckRightEndSocket = 0x120;
            static constexpr std::uintptr_t TagToEnableHeightCheck = 0x124;
            static constexpr std::uintptr_t HeightCheckInterval = 0x128;
            static constexpr std::uintptr_t HeightCheckTraceLength = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"FlyingStatus", 0xC8, "EnumProperty"},
            {"ForwardSpeed", 0xCC, "FloatProperty"},
            {"AddedDownZVelocity", 0xD0, "FloatProperty"},
            {"NativeCurrentHeightAboveWorld", 0xD4, "FloatProperty"},
            {"CurrentFlyingEnergy", 0xD8, "FloatProperty"},
            {"bIntendsToBoost", 0xDC, "BoolProperty"},
            {"bIntendsToAscend", 0xDD, "BoolProperty"},
            {"bIntendsToCrash", 0xDE, "BoolProperty"},
            {"bIntendsToRollLeft", 0xDF, "BoolProperty"},
            {"bIntendsToRollRight", 0xE0, "BoolProperty"},
            {"FlyingMovementModeExtension", 0xE8, "ClassProperty"},
            {"TagsToEnableSkimmingCheck", 0xF0, "StructProperty"},
            {"SkimCheckTraceChannel", 0x110, "ByteProperty"},
            {"SkimCheckLeftStartSocket", 0x114, "NameProperty"},
            {"SkimCheckLeftEndSocket", 0x118, "NameProperty"},
            {"SkimCheckRightStartSocket", 0x11C, "NameProperty"},
            {"SkimCheckRightEndSocket", 0x120, "NameProperty"},
            {"TagToEnableHeightCheck", 0x124, "StructProperty"},
            {"HeightCheckInterval", 0x128, "StructProperty"},
            {"HeightCheckTraceLength", 0x150, "StructProperty"},
        }};
    };

    struct FortWeaponWings
    {
        static constexpr std::string_view Name = "FortWeaponWings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeapon";
        struct Offsets
        {
            static constexpr std::uintptr_t WingsMaterialInstance = 0x1AA8;
            static constexpr std::uintptr_t IsFlyingGameplayTag = 0x1AB0;
            static constexpr std::uintptr_t IsFallingAudioParamName = 0x1AB4;
            static constexpr std::uintptr_t FeatherDissolveName = 0x1AB8;
            static constexpr std::uintptr_t ReplenishAnimationName = 0x1ABC;
            static constexpr std::uintptr_t OutOfEnergy2DSound = 0x1AC0;
            static constexpr std::uintptr_t OwnedGameplayTags = 0x1AC8;
            static constexpr std::uintptr_t AbilitySystemComponent = 0x1AE8;
            static constexpr std::uintptr_t HealthSet = 0x1AF0;
            static constexpr std::uintptr_t PrimarySurfaceType = 0x1AF8;
            static constexpr std::uintptr_t WeaponResponseType = 0x1AF9;
            static constexpr std::uintptr_t DamageGameplayEffectClass = 0x1B00;
            static constexpr std::uintptr_t SetByCallerDamageTag = 0x1B08;
            static constexpr std::uintptr_t TagsToPreventReload = 0x1B10;
            static constexpr std::uintptr_t ServerMeshRelativeRotationRoll = 0x1B30;
            static constexpr std::uintptr_t ServerMeshRelativeLocationY = 0x1B58;
            static constexpr std::uintptr_t ServerMeshRelativeLocationZ = 0x1B80;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"WingsMaterialInstance", 0x1AA8, "ObjectProperty"},
            {"IsFlyingGameplayTag", 0x1AB0, "StructProperty"},
            {"IsFallingAudioParamName", 0x1AB4, "NameProperty"},
            {"FeatherDissolveName", 0x1AB8, "NameProperty"},
            {"ReplenishAnimationName", 0x1ABC, "NameProperty"},
            {"OutOfEnergy2DSound", 0x1AC0, "ObjectProperty"},
            {"OwnedGameplayTags", 0x1AC8, "StructProperty"},
            {"AbilitySystemComponent", 0x1AE8, "ObjectProperty"},
            {"HealthSet", 0x1AF0, "ObjectProperty"},
            {"PrimarySurfaceType", 0x1AF8, "ByteProperty"},
            {"WeaponResponseType", 0x1AF9, "ByteProperty"},
            {"DamageGameplayEffectClass", 0x1B00, "ClassProperty"},
            {"SetByCallerDamageTag", 0x1B08, "StructProperty"},
            {"TagsToPreventReload", 0x1B10, "StructProperty"},
            {"ServerMeshRelativeRotationRoll", 0x1B30, "StructProperty"},
            {"ServerMeshRelativeLocationY", 0x1B58, "StructProperty"},
            {"ServerMeshRelativeLocationZ", 0x1B80, "StructProperty"},
        }};
    };

    struct FortWingedFlyingBlueprintLibrary
    {
        static constexpr std::string_view Name = "FortWingedFlyingBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SunRoseFlying_PlayerAnimInstance
    {
        static constexpr std::string_view Name = "SunRoseFlying_PlayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t AscenderTag = 0x1180;
            static constexpr std::uintptr_t GrindRailsTag = 0x1184;
            static constexpr std::uintptr_t WingedFlightTag = 0x1188;
            static constexpr std::uintptr_t WingsForceCrashTag = 0x118C;
            static constexpr std::uintptr_t WingsLeapingTag = 0x1190;
            static constexpr std::uintptr_t CurrentHeightAboveWorld = 0x1194;
            static constexpr std::uintptr_t Fuel = 0x1198;
            static constexpr std::uintptr_t GlidePitch = 0x119C;
            static constexpr std::uintptr_t GlidePitchAlpha = 0x11A0;
            static constexpr std::uintptr_t GlidePitchInterp = 0x11A4;
            static constexpr std::uintptr_t GlidePitchTarget = 0x11A8;
            static constexpr std::uintptr_t GlideRoll = 0x11AC;
            static constexpr std::uintptr_t GlideRollCombined = 0x11B0;
            static constexpr std::uintptr_t GlideRollCombinedTarget = 0x11B4;
            static constexpr std::uintptr_t GlideRollInterp = 0x11B8;
            static constexpr std::uintptr_t GroundBlendTime = 0x11BC;
            static constexpr std::uintptr_t pelvis = 0x11C0;
            static constexpr std::uintptr_t PitchAlpha = 0x11C4;
            static constexpr std::uintptr_t RollAlpha = 0x11C8;
            static constexpr std::uintptr_t SlowDownOrLandAlpha = 0x11CC;
            static constexpr std::uintptr_t SlowDownOrLandTarget = 0x11D0;
            static constexpr std::uintptr_t SlowSpeedAlpha = 0x11D4;
            static constexpr std::uintptr_t YawAlpha = 0x11D8;
            static constexpr std::uintptr_t YawBlend = 0x11DC;
            static constexpr std::uintptr_t RandomInteger = 0x11E0;
            static constexpr std::uintptr_t bIsAllowWingFlap = 0x11E4;
            static constexpr std::uintptr_t bIsAscending = 0x11E4;
            static constexpr std::uintptr_t bIsBoostStartEnd = 0x11E4;
            static constexpr std::uintptr_t bIsDodgeLeft = 0x11E4;
            static constexpr std::uintptr_t bIsDodgeRight = 0x11E4;
            static constexpr std::uintptr_t bIsExtBoostEarly = 0x11E4;
            static constexpr std::uintptr_t bIsFlyingStart = 0x11E4;
            static constexpr std::uintptr_t bIsForceDive = 0x11E4;
            static constexpr std::uintptr_t bIsHighWithNoFuel = 0x11E5;
            static constexpr std::uintptr_t bIsLeapInterruptible = 0x11E5;
            static constexpr std::uintptr_t bIsOnAscender = 0x11E5;
            static constexpr std::uintptr_t bIsOnGrindRail = 0x11E5;
            static constexpr std::uintptr_t bIsPlayDiveHitToIdle = 0x11E5;
            static constexpr std::uintptr_t bIsPlayLandAdditive = 0x11E5;
            static constexpr std::uintptr_t bIsWingLeaping = 0x11E5;
            static constexpr std::uintptr_t bIsWingReplenish = 0x11E5;
            static constexpr std::uintptr_t bIsDiveStart = 0x11E6;
            static constexpr std::uintptr_t bIsWingsBoosting = 0x11E6;
            static constexpr std::uintptr_t bIsWingsCrashing = 0x11E6;
            static constexpr std::uintptr_t bIsWingsFlying = 0x11E6;
            static constexpr std::uintptr_t bToBoosting = 0x11E6;
        };

        inline static constexpr std::array<PropertyInfo, 46> Properties{{
            {"AscenderTag", 0x1180, "StructProperty"},
            {"GrindRailsTag", 0x1184, "StructProperty"},
            {"WingedFlightTag", 0x1188, "StructProperty"},
            {"WingsForceCrashTag", 0x118C, "StructProperty"},
            {"WingsLeapingTag", 0x1190, "StructProperty"},
            {"CurrentHeightAboveWorld", 0x1194, "FloatProperty"},
            {"Fuel", 0x1198, "FloatProperty"},
            {"GlidePitch", 0x119C, "FloatProperty"},
            {"GlidePitchAlpha", 0x11A0, "FloatProperty"},
            {"GlidePitchInterp", 0x11A4, "FloatProperty"},
            {"GlidePitchTarget", 0x11A8, "FloatProperty"},
            {"GlideRoll", 0x11AC, "FloatProperty"},
            {"GlideRollCombined", 0x11B0, "FloatProperty"},
            {"GlideRollCombinedTarget", 0x11B4, "FloatProperty"},
            {"GlideRollInterp", 0x11B8, "FloatProperty"},
            {"GroundBlendTime", 0x11BC, "FloatProperty"},
            {"pelvis", 0x11C0, "FloatProperty"},
            {"PitchAlpha", 0x11C4, "FloatProperty"},
            {"RollAlpha", 0x11C8, "FloatProperty"},
            {"SlowDownOrLandAlpha", 0x11CC, "FloatProperty"},
            {"SlowDownOrLandTarget", 0x11D0, "FloatProperty"},
            {"SlowSpeedAlpha", 0x11D4, "FloatProperty"},
            {"YawAlpha", 0x11D8, "FloatProperty"},
            {"YawBlend", 0x11DC, "FloatProperty"},
            {"RandomInteger", 0x11E0, "IntProperty"},
            {"bIsAllowWingFlap", 0x11E4, "BoolProperty"},
            {"bIsAscending", 0x11E4, "BoolProperty"},
            {"bIsBoostStartEnd", 0x11E4, "BoolProperty"},
            {"bIsDodgeLeft", 0x11E4, "BoolProperty"},
            {"bIsDodgeRight", 0x11E4, "BoolProperty"},
            {"bIsExtBoostEarly", 0x11E4, "BoolProperty"},
            {"bIsFlyingStart", 0x11E4, "BoolProperty"},
            {"bIsForceDive", 0x11E4, "BoolProperty"},
            {"bIsHighWithNoFuel", 0x11E5, "BoolProperty"},
            {"bIsLeapInterruptible", 0x11E5, "BoolProperty"},
            {"bIsOnAscender", 0x11E5, "BoolProperty"},
            {"bIsOnGrindRail", 0x11E5, "BoolProperty"},
            {"bIsPlayDiveHitToIdle", 0x11E5, "BoolProperty"},
            {"bIsPlayLandAdditive", 0x11E5, "BoolProperty"},
            {"bIsWingLeaping", 0x11E5, "BoolProperty"},
            {"bIsWingReplenish", 0x11E5, "BoolProperty"},
            {"bIsDiveStart", 0x11E6, "BoolProperty"},
            {"bIsWingsBoosting", 0x11E6, "BoolProperty"},
            {"bIsWingsCrashing", 0x11E6, "BoolProperty"},
            {"bIsWingsFlying", 0x11E6, "BoolProperty"},
            {"bToBoosting", 0x11E6, "BoolProperty"},
        }};
    };

    struct SunRoseFlying_WingsAnimInstance
    {
        static constexpr std::string_view Name = "SunRoseFlying_WingsAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerPawnRotationRate = 0x5F0;
            static constexpr std::uintptr_t PlayerCurrentHeightAboveWorld = 0x608;
            static constexpr std::uintptr_t PlayerFuel = 0x60C;
            static constexpr std::uintptr_t PlayerGlidePitch = 0x610;
            static constexpr std::uintptr_t PlayerGlidePitchAlpha = 0x614;
            static constexpr std::uintptr_t PlayerGlideRoll = 0x618;
            static constexpr std::uintptr_t PlayerGroundBlendTime = 0x61C;
            static constexpr std::uintptr_t PlayerGlideRollCombined = 0x620;
            static constexpr std::uintptr_t PlayerRollAlpha = 0x624;
            static constexpr std::uintptr_t PlayerSlowDownOrLandAlpha = 0x628;
            static constexpr std::uintptr_t PlayerSpeed2D = 0x62C;
            static constexpr std::uintptr_t WingFlapAlpha = 0x630;
            static constexpr std::uintptr_t WingSlowDownOrLandAlpha = 0x634;
            static constexpr std::uintptr_t WingSlowDownOrLandAlphaTarget = 0x638;
            static constexpr std::uintptr_t PlayerRandomInteger = 0x63C;
            static constexpr std::uintptr_t bIsConduitToMoving = 0x640;
            static constexpr std::uintptr_t bIsCrouchIdleToCrouchMoving = 0x640;
            static constexpr std::uintptr_t bIsCrouchMovingToCrouchIdle = 0x640;
            static constexpr std::uintptr_t bIsFallLoopToJumpLand = 0x640;
            static constexpr std::uintptr_t bIsFlyingStart = 0x640;
            static constexpr std::uintptr_t bIsNotCrouchIdle = 0x640;
            static constexpr std::uintptr_t bIsNotCrouchMoving = 0x640;
            static constexpr std::uintptr_t bIsNotMoving = 0x640;
            static constexpr std::uintptr_t bIsNotOnZipline = 0x641;
            static constexpr std::uintptr_t bIsOnZipline = 0x641;
            static constexpr std::uintptr_t bIsOutOfGas = 0x641;
            static constexpr std::uintptr_t bIsProceduralDeactivated = 0x641;
            static constexpr std::uintptr_t bIsRandomFlap = 0x641;
            static constexpr std::uintptr_t bIsTacticalJumpLoopEnd = 0x641;
            static constexpr std::uintptr_t bIsToBoostEnd = 0x641;
            static constexpr std::uintptr_t bIsToBoostStart = 0x641;
            static constexpr std::uintptr_t bIsToSliding = 0x642;
            static constexpr std::uintptr_t bLOD2Fix = 0x642;
            static constexpr std::uintptr_t bPlayerIsAccelerating2D = 0x642;
            static constexpr std::uintptr_t bPlayerIsAllowWingFlap = 0x642;
            static constexpr std::uintptr_t bPlayerIsAscending = 0x642;
            static constexpr std::uintptr_t bPlayerIsBoostStartEnd = 0x642;
            static constexpr std::uintptr_t bPlayerIsCrouchMoving = 0x642;
            static constexpr std::uintptr_t bPlayerIsCrouching = 0x642;
            static constexpr std::uintptr_t bPlayerIsDodgeLeft = 0x643;
            static constexpr std::uintptr_t bPlayerIsDodgeRight = 0x643;
            static constexpr std::uintptr_t bPlayerIsFalling = 0x643;
            static constexpr std::uintptr_t bPlayerIsForceDive = 0x643;
            static constexpr std::uintptr_t bPlayerIsJumping = 0x643;
            static constexpr std::uintptr_t bPlayerIsLeapInterruptible = 0x643;
            static constexpr std::uintptr_t bPlayerIsOnAscender = 0x643;
            static constexpr std::uintptr_t bPlayerIsOnGrindRail = 0x643;
            static constexpr std::uintptr_t bPlayerIsPlayDiveHitToIdle = 0x644;
            static constexpr std::uintptr_t bPlayerIsPlayLandAdditive = 0x644;
            static constexpr std::uintptr_t bPlayerIsSliding = 0x644;
            static constexpr std::uintptr_t bPlayerIsSurfaceSwimming = 0x644;
            static constexpr std::uintptr_t bPlayerIsTacticalJump = 0x644;
            static constexpr std::uintptr_t bPlayerIsTacticalSprint = 0x644;
            static constexpr std::uintptr_t bPlayerIsWingLeaping = 0x644;
            static constexpr std::uintptr_t bPlayerIsWingReplenish = 0x644;
            static constexpr std::uintptr_t bPlayerIsWingsBoosting = 0x645;
            static constexpr std::uintptr_t bPlayerIsWingsCrashing = 0x645;
            static constexpr std::uintptr_t bPlayerIsWingsFlying = 0x645;
            static constexpr std::uintptr_t bPlayerIsZiplining = 0x645;
            static constexpr std::uintptr_t bTacticalJumpLoopToTacticalLand = 0x645;
            static constexpr std::uintptr_t bToJumpStart = 0x645;
        };

        inline static constexpr std::array<PropertyInfo, 61> Properties{{
            {"PlayerPawnRotationRate", 0x5F0, "StructProperty"},
            {"PlayerCurrentHeightAboveWorld", 0x608, "FloatProperty"},
            {"PlayerFuel", 0x60C, "FloatProperty"},
            {"PlayerGlidePitch", 0x610, "FloatProperty"},
            {"PlayerGlidePitchAlpha", 0x614, "FloatProperty"},
            {"PlayerGlideRoll", 0x618, "FloatProperty"},
            {"PlayerGroundBlendTime", 0x61C, "FloatProperty"},
            {"PlayerGlideRollCombined", 0x620, "FloatProperty"},
            {"PlayerRollAlpha", 0x624, "FloatProperty"},
            {"PlayerSlowDownOrLandAlpha", 0x628, "FloatProperty"},
            {"PlayerSpeed2D", 0x62C, "FloatProperty"},
            {"WingFlapAlpha", 0x630, "FloatProperty"},
            {"WingSlowDownOrLandAlpha", 0x634, "FloatProperty"},
            {"WingSlowDownOrLandAlphaTarget", 0x638, "FloatProperty"},
            {"PlayerRandomInteger", 0x63C, "IntProperty"},
            {"bIsConduitToMoving", 0x640, "BoolProperty"},
            {"bIsCrouchIdleToCrouchMoving", 0x640, "BoolProperty"},
            {"bIsCrouchMovingToCrouchIdle", 0x640, "BoolProperty"},
            {"bIsFallLoopToJumpLand", 0x640, "BoolProperty"},
            {"bIsFlyingStart", 0x640, "BoolProperty"},
            {"bIsNotCrouchIdle", 0x640, "BoolProperty"},
            {"bIsNotCrouchMoving", 0x640, "BoolProperty"},
            {"bIsNotMoving", 0x640, "BoolProperty"},
            {"bIsNotOnZipline", 0x641, "BoolProperty"},
            {"bIsOnZipline", 0x641, "BoolProperty"},
            {"bIsOutOfGas", 0x641, "BoolProperty"},
            {"bIsProceduralDeactivated", 0x641, "BoolProperty"},
            {"bIsRandomFlap", 0x641, "BoolProperty"},
            {"bIsTacticalJumpLoopEnd", 0x641, "BoolProperty"},
            {"bIsToBoostEnd", 0x641, "BoolProperty"},
            {"bIsToBoostStart", 0x641, "BoolProperty"},
            {"bIsToSliding", 0x642, "BoolProperty"},
            {"bLOD2Fix", 0x642, "BoolProperty"},
            {"bPlayerIsAccelerating2D", 0x642, "BoolProperty"},
            {"bPlayerIsAllowWingFlap", 0x642, "BoolProperty"},
            {"bPlayerIsAscending", 0x642, "BoolProperty"},
            {"bPlayerIsBoostStartEnd", 0x642, "BoolProperty"},
            {"bPlayerIsCrouchMoving", 0x642, "BoolProperty"},
            {"bPlayerIsCrouching", 0x642, "BoolProperty"},
            {"bPlayerIsDodgeLeft", 0x643, "BoolProperty"},
            {"bPlayerIsDodgeRight", 0x643, "BoolProperty"},
            {"bPlayerIsFalling", 0x643, "BoolProperty"},
            {"bPlayerIsForceDive", 0x643, "BoolProperty"},
            {"bPlayerIsJumping", 0x643, "BoolProperty"},
            {"bPlayerIsLeapInterruptible", 0x643, "BoolProperty"},
            {"bPlayerIsOnAscender", 0x643, "BoolProperty"},
            {"bPlayerIsOnGrindRail", 0x643, "BoolProperty"},
            {"bPlayerIsPlayDiveHitToIdle", 0x644, "BoolProperty"},
            {"bPlayerIsPlayLandAdditive", 0x644, "BoolProperty"},
            {"bPlayerIsSliding", 0x644, "BoolProperty"},
            {"bPlayerIsSurfaceSwimming", 0x644, "BoolProperty"},
            {"bPlayerIsTacticalJump", 0x644, "BoolProperty"},
            {"bPlayerIsTacticalSprint", 0x644, "BoolProperty"},
            {"bPlayerIsWingLeaping", 0x644, "BoolProperty"},
            {"bPlayerIsWingReplenish", 0x644, "BoolProperty"},
            {"bPlayerIsWingsBoosting", 0x645, "BoolProperty"},
            {"bPlayerIsWingsCrashing", 0x645, "BoolProperty"},
            {"bPlayerIsWingsFlying", 0x645, "BoolProperty"},
            {"bPlayerIsZiplining", 0x645, "BoolProperty"},
            {"bTacticalJumpLoopToTacticalLand", 0x645, "BoolProperty"},
            {"bToJumpStart", 0x645, "BoolProperty"},
        }};
    };

}
