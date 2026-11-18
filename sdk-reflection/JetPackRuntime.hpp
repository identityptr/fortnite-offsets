#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JetPackRuntime
{
    struct AFortGameplayCueNotifyLoop_Jetpack
    {
        static constexpr std::string_view Name = "AFortGameplayCueNotifyLoop_Jetpack";
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
            static constexpr std::uintptr_t AltitudeInterpParamName = 0xC7C;
            static constexpr std::uintptr_t HeightRange = 0xC80;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"IsAscendingParamName", 0xC58, "NameProperty"},
            {"IsFlappingParamName", 0xC5C, "NameProperty"},
            {"FlappingAlphaParamName", 0xC60, "NameProperty"},
            {"IsRollingParamName", 0xC64, "NameProperty"},
            {"IsBoostingParamName", 0xC68, "NameProperty"},
            {"IsDivingParamName", 0xC6C, "NameProperty"},
            {"PitchParamName", 0xC70, "NameProperty"},
            {"RollParamName", 0xC74, "NameProperty"},
            {"SpeedParamName", 0xC78, "NameProperty"},
            {"AltitudeInterpParamName", 0xC7C, "NameProperty"},
            {"HeightRange", 0xC80, "StructProperty"},
        }};
    };

    struct FortCameraModifier_Jetpack
    {
        static constexpr std::string_view Name = "FortCameraModifier_Jetpack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModifier_Custom";
        struct Offsets
        {
            static constexpr std::uintptr_t NativeWindingUpThrustEventTag = 0x80;
            static constexpr std::uintptr_t NativeStartedThrustingEventTag = 0x84;
            static constexpr std::uintptr_t NativeQuickThrustEventTag = 0x88;
            static constexpr std::uintptr_t NativeHoveringTag = 0x8C;
            static constexpr std::uintptr_t NativeRepulsorCannonTag = 0x90;
            static constexpr std::uintptr_t NativeBoostingTag = 0x94;
            static constexpr std::uintptr_t NativeQuickThrustAnchorPercentCurve = 0x98;
            static constexpr std::uintptr_t NativeThrustingAnchorPercentCurve = 0xA0;
            static constexpr std::uintptr_t NativeLeadInForwardPercentCurve = 0xA8;
            static constexpr std::uintptr_t NativeLeadInPercentCurveStraightUp = 0xB0;
            static constexpr std::uintptr_t NativeLeadInUpPercentCurve = 0xB8;
            static constexpr std::uintptr_t NativeThrustingLateralAmountCurve = 0xC0;
            static constexpr std::uintptr_t NativeThurstingForwardAmountCurve = 0xC8;
            static constexpr std::uintptr_t NativeScreenShakeOffsetVelocityOldRange = 0xD0;
            static constexpr std::uintptr_t NativeScreenShakeOffsetAccelerationOldRange = 0xE0;
            static constexpr std::uintptr_t NativeCurrentForwardVelocityLengthXYOldRange = 0xF0;
            static constexpr std::uintptr_t NativeCurrentForwardVelocityLengthXYNewRange = 0x100;
            static constexpr std::uintptr_t NativeCurrentForwardUpSpeedABSOldRange = 0x110;
            static constexpr std::uintptr_t NativeCurrentForwardUpSpeedABSNewRange = 0x120;
            static constexpr std::uintptr_t NativeCurrentRightSpeedOldRange = 0x130;
            static constexpr std::uintptr_t NativeCurrentRightSpeedNewRange = 0x140;
            static constexpr std::uintptr_t NativeCurrentRightForwardABSOldRange = 0x150;
            static constexpr std::uintptr_t NativeCurrentRightForwardABSNewRange = 0x160;
            static constexpr std::uintptr_t NativeCurrentUpSpeedOldRange = 0x170;
            static constexpr std::uintptr_t NativeCurrentUpSpeedNewRange = 0x180;
            static constexpr std::uintptr_t NativeCurrentUpForwardABSOldRange = 0x190;
            static constexpr std::uintptr_t NativeCurrentUpForwardABSNewRange = 0x1A0;
            static constexpr std::uintptr_t NativeCurrentOffsetSpeedOldRange = 0x1B0;
            static constexpr std::uintptr_t NativeCurrentOffsetSpeedNewRange = 0x1C0;
            static constexpr std::uintptr_t NativeCurrentOffsetThrustPercentOldRange = 0x1D0;
            static constexpr std::uintptr_t NativeCurrentOffsetThrustPercentNewRange = 0x1E0;
            static constexpr std::uintptr_t NativeLeadInTime = 0x1F0;
            static constexpr std::uintptr_t NativeQuickThrustPullBackTime = 0x1F8;
            static constexpr std::uintptr_t NativeDivePercentMax = 0x200;
            static constexpr std::uintptr_t NativeWindUpHoverTime = 0x208;
            static constexpr std::uintptr_t NativeInitialHoverXInputThreshold = 0x210;
            static constexpr std::uintptr_t NativeScreenShakeOffsetTimeMultiplier = 0x218;
            static constexpr std::uintptr_t NativeScreenShakeOffsetThrustingSinMultiplier = 0x220;
            static constexpr std::uintptr_t NativeScreenShakeOffsetNonThrustingSinMultiplier = 0x228;
            static constexpr std::uintptr_t NativeCurrentForwardIsHovering = 0x230;
            static constexpr std::uintptr_t NativeCurrentForwardIsNotHovering = 0x238;
            static constexpr std::uintptr_t NativeCurrentForwardIsBoosting = 0x240;
            static constexpr std::uintptr_t NativeCurrentRightIsHovering = 0x248;
            static constexpr std::uintptr_t NativeCurrentRightIsNotHovering = 0x250;
            static constexpr std::uintptr_t NativeCurrentRightIsBoosting = 0x258;
            static constexpr std::uintptr_t NativeCurrentRightSavedSignIsHovering = 0x260;
            static constexpr std::uintptr_t NativeCurrentRightSavedSignIsNotHovering = 0x268;
            static constexpr std::uintptr_t NativeCurrentUpIsInLeadIn = 0x270;
            static constexpr std::uintptr_t NativeCurrentUpIsNotInLeadIn = 0x278;
            static constexpr std::uintptr_t NativeCurrentUpLowUpSpeed = 0x280;
            static constexpr std::uintptr_t NativeCurrentUpIsHovering = 0x288;
            static constexpr std::uintptr_t NativeCurrentUpIsNotHovering = 0x290;
            static constexpr std::uintptr_t NativeCurrentUpIsBoosting = 0x298;
            static constexpr std::uintptr_t NativeCurrentUpIsNotBoosting = 0x2A0;
            static constexpr std::uintptr_t NativeCalculatedOffsetInterpSpeedRepulsorCannon = 0x2A8;
            static constexpr std::uintptr_t NativeCalculatedOffsetInterpSpeedIsHovering = 0x2B0;
            static constexpr std::uintptr_t NativeCalculatedOffsetInterpSpeedIsNotHovering = 0x2B8;
            static constexpr std::uintptr_t NativeFOVTargetInInitialHover = 0x2C0;
            static constexpr std::uintptr_t NativeFOVInterpSpeedInInitialHover = 0x2C8;
            static constexpr std::uintptr_t NativeFOVTargetNotInInitialHover = 0x2D0;
            static constexpr std::uintptr_t NativeFOVInterpSpeedNotInInitialHover = 0x2D8;
            static constexpr std::uintptr_t NativeFOVTargetRepulsorCannon = 0x2E0;
            static constexpr std::uintptr_t NativeFOVInterpSpeedRepulsorCannon = 0x2E8;
            static constexpr std::uintptr_t NativeFOVTargetThrustWindingUp = 0x2F0;
            static constexpr std::uintptr_t NativeFOVInterpSpeedThrustWindingUp = 0x2F8;
            static constexpr std::uintptr_t NativeFOVTargetThrustNotWindingUp = 0x300;
            static constexpr std::uintptr_t NativeFOVInterpSpeedThrustNotWindingUp = 0x308;
            static constexpr std::uintptr_t NativeFOVTargetIsHovering = 0x310;
            static constexpr std::uintptr_t NativeFOVInterpSpeedIsHovering = 0x318;
            static constexpr std::uintptr_t NativeFOVTargetIsNotHovering = 0x320;
            static constexpr std::uintptr_t NativeFOVInterpSpeedIsNotHovering = 0x328;
            static constexpr std::uintptr_t NativeCurrentOffsetInterpSpeed = 0x330;
            static constexpr std::uintptr_t NativeCurrentOffsetUpSubtrahend = 0x338;
            static constexpr std::uintptr_t NativeCurrentOffsetForwardVectorMultiplier = 0x340;
            static constexpr std::uintptr_t NativeCurrentOffsetRightVectorMultiplier = 0x348;
            static constexpr std::uintptr_t NativeCurrentOffsetUpVectorMultiplier = 0x350;
            static constexpr std::uintptr_t NativeCurrentOffsetThrustWindingUpInterpRate = 0x358;
            static constexpr std::uintptr_t NativeCurrentOffsetNotThrustingInterpRate = 0x360;
            static constexpr std::uintptr_t NativeNewViewLocationForwardVectorMultiplier = 0x368;
            static constexpr std::uintptr_t NativeNewViewLocationUpVectorMultiplier = 0x370;
            static constexpr std::uintptr_t NativePreThrustWindupDuration = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 81> Properties{{
            {"NativeWindingUpThrustEventTag", 0x80, "StructProperty"},
            {"NativeStartedThrustingEventTag", 0x84, "StructProperty"},
            {"NativeQuickThrustEventTag", 0x88, "StructProperty"},
            {"NativeHoveringTag", 0x8C, "StructProperty"},
            {"NativeRepulsorCannonTag", 0x90, "StructProperty"},
            {"NativeBoostingTag", 0x94, "StructProperty"},
            {"NativeQuickThrustAnchorPercentCurve", 0x98, "ObjectProperty"},
            {"NativeThrustingAnchorPercentCurve", 0xA0, "ObjectProperty"},
            {"NativeLeadInForwardPercentCurve", 0xA8, "ObjectProperty"},
            {"NativeLeadInPercentCurveStraightUp", 0xB0, "ObjectProperty"},
            {"NativeLeadInUpPercentCurve", 0xB8, "ObjectProperty"},
            {"NativeThrustingLateralAmountCurve", 0xC0, "ObjectProperty"},
            {"NativeThurstingForwardAmountCurve", 0xC8, "ObjectProperty"},
            {"NativeScreenShakeOffsetVelocityOldRange", 0xD0, "StructProperty"},
            {"NativeScreenShakeOffsetAccelerationOldRange", 0xE0, "StructProperty"},
            {"NativeCurrentForwardVelocityLengthXYOldRange", 0xF0, "StructProperty"},
            {"NativeCurrentForwardVelocityLengthXYNewRange", 0x100, "StructProperty"},
            {"NativeCurrentForwardUpSpeedABSOldRange", 0x110, "StructProperty"},
            {"NativeCurrentForwardUpSpeedABSNewRange", 0x120, "StructProperty"},
            {"NativeCurrentRightSpeedOldRange", 0x130, "StructProperty"},
            {"NativeCurrentRightSpeedNewRange", 0x140, "StructProperty"},
            {"NativeCurrentRightForwardABSOldRange", 0x150, "StructProperty"},
            {"NativeCurrentRightForwardABSNewRange", 0x160, "StructProperty"},
            {"NativeCurrentUpSpeedOldRange", 0x170, "StructProperty"},
            {"NativeCurrentUpSpeedNewRange", 0x180, "StructProperty"},
            {"NativeCurrentUpForwardABSOldRange", 0x190, "StructProperty"},
            {"NativeCurrentUpForwardABSNewRange", 0x1A0, "StructProperty"},
            {"NativeCurrentOffsetSpeedOldRange", 0x1B0, "StructProperty"},
            {"NativeCurrentOffsetSpeedNewRange", 0x1C0, "StructProperty"},
            {"NativeCurrentOffsetThrustPercentOldRange", 0x1D0, "StructProperty"},
            {"NativeCurrentOffsetThrustPercentNewRange", 0x1E0, "StructProperty"},
            {"NativeLeadInTime", 0x1F0, "DoubleProperty"},
            {"NativeQuickThrustPullBackTime", 0x1F8, "DoubleProperty"},
            {"NativeDivePercentMax", 0x200, "DoubleProperty"},
            {"NativeWindUpHoverTime", 0x208, "DoubleProperty"},
            {"NativeInitialHoverXInputThreshold", 0x210, "DoubleProperty"},
            {"NativeScreenShakeOffsetTimeMultiplier", 0x218, "DoubleProperty"},
            {"NativeScreenShakeOffsetThrustingSinMultiplier", 0x220, "DoubleProperty"},
            {"NativeScreenShakeOffsetNonThrustingSinMultiplier", 0x228, "DoubleProperty"},
            {"NativeCurrentForwardIsHovering", 0x230, "DoubleProperty"},
            {"NativeCurrentForwardIsNotHovering", 0x238, "DoubleProperty"},
            {"NativeCurrentForwardIsBoosting", 0x240, "DoubleProperty"},
            {"NativeCurrentRightIsHovering", 0x248, "DoubleProperty"},
            {"NativeCurrentRightIsNotHovering", 0x250, "DoubleProperty"},
            {"NativeCurrentRightIsBoosting", 0x258, "DoubleProperty"},
            {"NativeCurrentRightSavedSignIsHovering", 0x260, "DoubleProperty"},
            {"NativeCurrentRightSavedSignIsNotHovering", 0x268, "DoubleProperty"},
            {"NativeCurrentUpIsInLeadIn", 0x270, "DoubleProperty"},
            {"NativeCurrentUpIsNotInLeadIn", 0x278, "DoubleProperty"},
            {"NativeCurrentUpLowUpSpeed", 0x280, "DoubleProperty"},
            {"NativeCurrentUpIsHovering", 0x288, "DoubleProperty"},
            {"NativeCurrentUpIsNotHovering", 0x290, "DoubleProperty"},
            {"NativeCurrentUpIsBoosting", 0x298, "DoubleProperty"},
            {"NativeCurrentUpIsNotBoosting", 0x2A0, "DoubleProperty"},
            {"NativeCalculatedOffsetInterpSpeedRepulsorCannon", 0x2A8, "DoubleProperty"},
            {"NativeCalculatedOffsetInterpSpeedIsHovering", 0x2B0, "DoubleProperty"},
            {"NativeCalculatedOffsetInterpSpeedIsNotHovering", 0x2B8, "DoubleProperty"},
            {"NativeFOVTargetInInitialHover", 0x2C0, "DoubleProperty"},
            {"NativeFOVInterpSpeedInInitialHover", 0x2C8, "DoubleProperty"},
            {"NativeFOVTargetNotInInitialHover", 0x2D0, "DoubleProperty"},
            {"NativeFOVInterpSpeedNotInInitialHover", 0x2D8, "DoubleProperty"},
            {"NativeFOVTargetRepulsorCannon", 0x2E0, "DoubleProperty"},
            {"NativeFOVInterpSpeedRepulsorCannon", 0x2E8, "DoubleProperty"},
            {"NativeFOVTargetThrustWindingUp", 0x2F0, "DoubleProperty"},
            {"NativeFOVInterpSpeedThrustWindingUp", 0x2F8, "DoubleProperty"},
            {"NativeFOVTargetThrustNotWindingUp", 0x300, "DoubleProperty"},
            {"NativeFOVInterpSpeedThrustNotWindingUp", 0x308, "DoubleProperty"},
            {"NativeFOVTargetIsHovering", 0x310, "DoubleProperty"},
            {"NativeFOVInterpSpeedIsHovering", 0x318, "DoubleProperty"},
            {"NativeFOVTargetIsNotHovering", 0x320, "DoubleProperty"},
            {"NativeFOVInterpSpeedIsNotHovering", 0x328, "DoubleProperty"},
            {"NativeCurrentOffsetInterpSpeed", 0x330, "DoubleProperty"},
            {"NativeCurrentOffsetUpSubtrahend", 0x338, "DoubleProperty"},
            {"NativeCurrentOffsetForwardVectorMultiplier", 0x340, "DoubleProperty"},
            {"NativeCurrentOffsetRightVectorMultiplier", 0x348, "DoubleProperty"},
            {"NativeCurrentOffsetUpVectorMultiplier", 0x350, "DoubleProperty"},
            {"NativeCurrentOffsetThrustWindingUpInterpRate", 0x358, "DoubleProperty"},
            {"NativeCurrentOffsetNotThrustingInterpRate", 0x360, "DoubleProperty"},
            {"NativeNewViewLocationForwardVectorMultiplier", 0x368, "DoubleProperty"},
            {"NativeNewViewLocationUpVectorMultiplier", 0x370, "DoubleProperty"},
            {"NativePreThrustWindupDuration", 0x378, "DoubleProperty"},
        }};
    };

    struct FortGameplayAbility_LaunchJetpack
    {
        static constexpr std::string_view Name = "FortGameplayAbility_LaunchJetpack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t TraceConfig = 0xB40;
            static constexpr std::uintptr_t SmashThroughSmallPropsWhileThrusting = 0xC98;
            static constexpr std::uintptr_t DestructionTraceDistanceMultiplier = 0xCC0;
            static constexpr std::uintptr_t MinTimeBetweenHitThingsGCPlay = 0xCE8;
            static constexpr std::uintptr_t HitThingsGCTag = 0xCF0;
            static constexpr std::uintptr_t DelayFuelUIEventTag = 0xCF4;
            static constexpr std::uintptr_t ResetDestructionFuelCostTime = 0xCF8;
            static constexpr std::uintptr_t UseFuelOnHitThingsGEClass = 0xD00;
            static constexpr std::uintptr_t ThrustTelegraphClass = 0xD08;
            static constexpr std::uintptr_t ThrustTelegraphWaterFX = 0xD10;
            static constexpr std::uintptr_t TraceObjectTypes = 0xD18;
            static constexpr std::uintptr_t SpeedThresholdForSlowThrusting = 0xD28;
            static constexpr std::uintptr_t TracingStartDeltaDistance = 0xD30;
            static constexpr std::uintptr_t TracingEndDeltaDistance = 0xD38;
            static constexpr std::uintptr_t TelegraphWaterNS = 0xDA8;
            static constexpr std::uintptr_t TelegraphActor = 0xDB0;
            static constexpr std::uintptr_t NativeDestructionTraceIgnoredActors = 0xDB8;
            static constexpr std::uintptr_t NativeDestructionTraceCameraIgnoredActors = 0xDC8;
            static constexpr std::uintptr_t NativeCurrentLaunchState = 0xDD8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TraceConfig", 0xB40, "StructProperty"},
            {"SmashThroughSmallPropsWhileThrusting", 0xC98, "StructProperty"},
            {"DestructionTraceDistanceMultiplier", 0xCC0, "StructProperty"},
            {"MinTimeBetweenHitThingsGCPlay", 0xCE8, "DoubleProperty"},
            {"HitThingsGCTag", 0xCF0, "StructProperty"},
            {"DelayFuelUIEventTag", 0xCF4, "StructProperty"},
            {"ResetDestructionFuelCostTime", 0xCF8, "FloatProperty"},
            {"UseFuelOnHitThingsGEClass", 0xD00, "ClassProperty"},
            {"ThrustTelegraphClass", 0xD08, "ClassProperty"},
            {"ThrustTelegraphWaterFX", 0xD10, "ObjectProperty"},
            {"TraceObjectTypes", 0xD18, "ArrayProperty"},
            {"SpeedThresholdForSlowThrusting", 0xD28, "DoubleProperty"},
            {"TracingStartDeltaDistance", 0xD30, "DoubleProperty"},
            {"TracingEndDeltaDistance", 0xD38, "DoubleProperty"},
            {"TelegraphWaterNS", 0xDA8, "ObjectProperty"},
            {"TelegraphActor", 0xDB0, "ObjectProperty"},
            {"NativeDestructionTraceIgnoredActors", 0xDB8, "ArrayProperty"},
            {"NativeDestructionTraceCameraIgnoredActors", 0xDC8, "ArrayProperty"},
            {"NativeCurrentLaunchState", 0xDD8, "EnumProperty"},
        }};
    };

    struct FortJetpackFlyingBlueprintLibrary
    {
        static constexpr std::string_view Name = "FortJetpackFlyingBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortMovementMode_ExtLogicFlyingJetpack
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicFlyingJetpack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtLogicFlying";
        struct Offsets
        {
            static constexpr std::uintptr_t bIntendsToDescend = 0x1D8;
            static constexpr std::uintptr_t bIntendsToFly = 0x1D9;
            static constexpr std::uintptr_t bIntendsToAscend = 0x1DA;
            static constexpr std::uintptr_t bIntendsToHover = 0x1DB;
            static constexpr std::uintptr_t bIntendsToWindUp = 0x1DC;
            static constexpr std::uintptr_t bIntendsToThrust = 0x1DD;
            static constexpr std::uintptr_t bIntendsToRollLeft = 0x1DE;
            static constexpr std::uintptr_t bIntendsToRollRight = 0x1DF;
            static constexpr std::uintptr_t TagQueryToFly = 0x1E0;
            static constexpr std::uintptr_t FlyingStatusConfigs = 0x228;
            static constexpr std::uintptr_t FlyingThroughCeilingGE = 0x238;
            static constexpr std::uintptr_t LowFrictionLandingGE = 0x240;
            static constexpr std::uintptr_t FuelUsageRateGE = 0x248;
            static constexpr std::uintptr_t SmashingGE = 0x250;
            static constexpr std::uintptr_t FlyingThroughCeilingTag = 0x258;
            static constexpr std::uintptr_t EnergyDrainCueTag = 0x25C;
            static constexpr std::uintptr_t HitBonkCueTag = 0x260;
            static constexpr std::uintptr_t EventTagToTriggerCrashImpact = 0x264;
            static constexpr std::uintptr_t ForceCrashDamagedTags = 0x268;
            static constexpr std::uintptr_t TagsToPreventLowFrictionLanding = 0x288;
            static constexpr std::uintptr_t SmashingThingsTags = 0x2A8;
            static constexpr std::uintptr_t HitResponseCrashImpactTags = 0x2C8;
            static constexpr std::uintptr_t TagToSetByCallerDuration = 0x2E8;
            static constexpr std::uintptr_t TagUsageRateSetByCallerMagnitude = 0x2EC;
            static constexpr std::uintptr_t IsInChargingStateRepulsorCannonTag = 0x2F0;
            static constexpr std::uintptr_t RepulsorCannonTag = 0x2F4;
            static constexpr std::uintptr_t JetpackInteriorTag = 0x2F8;
            static constexpr std::uintptr_t InstantThrustEventTag = 0x2FC;
            static constexpr std::uintptr_t NativeDodgeSpeedCurve = 0x300;
            static constexpr std::uintptr_t NativeDodgeSpeedHoveringCurve = 0x308;
            static constexpr std::uintptr_t DodgeSpeedMin = 0x310;
            static constexpr std::uintptr_t DodgeSpeedMax = 0x338;
            static constexpr std::uintptr_t DodgeSpeedDecayInitialDelay = 0x360;
            static constexpr std::uintptr_t DodgeSpeedRampExponent = 0x388;
            static constexpr std::uintptr_t DodgeSpeedDecayExponent = 0x3B0;
            static constexpr std::uintptr_t DodgeDuration = 0x3D8;
            static constexpr std::uintptr_t StartedFlyingTransitionDuration = 0x400;
            static constexpr std::uintptr_t StartedFlyingSpeedBoundForInterpMin = 0x428;
            static constexpr std::uintptr_t StartedFlyingSpeedBoundForInterpMax = 0x450;
            static constexpr std::uintptr_t StartedFlyingVelocityInterpSpeedAtMinSpeed = 0x478;
            static constexpr std::uintptr_t StartedFlyingVelocityInterpSpeedAtMaxSpeed = 0x4A0;
            static constexpr std::uintptr_t FlyingLookPitchClampMin = 0x4C8;
            static constexpr std::uintptr_t FlyingLookPitchClampMax = 0x4F0;
            static constexpr std::uintptr_t DefaultLookPitchAngleOffset = 0x518;
            static constexpr std::uintptr_t CrashingLookPitchClampMin = 0x540;
            static constexpr std::uintptr_t CrashingLookPitchClampMax = 0x568;
            static constexpr std::uintptr_t CrashingInputWeightLookDirection = 0x590;
            static constexpr std::uintptr_t FlyingInputWeightLockDirection = 0x5B8;
            static constexpr std::uintptr_t FlyingInputWeightHorizontal = 0x5E0;
            static constexpr std::uintptr_t PitchInterpSpeedWhileThrusting = 0x608;
            static constexpr std::uintptr_t PitchInterpSpeedAtBaseSpeed = 0x630;
            static constexpr std::uintptr_t PitchInterpSpeedAtMaxLateralSpeed = 0x658;
            static constexpr std::uintptr_t PitchInterpSpeedAtMaxTotalSpeed = 0x680;
            static constexpr std::uintptr_t YawInterpSpeedWhileThrusting = 0x6A8;
            static constexpr std::uintptr_t YawInterpSpeedWhileBoosting = 0x6D0;
            static constexpr std::uintptr_t YawInterpSpeedAtMinBrakeSpeed = 0x6F8;
            static constexpr std::uintptr_t YawInterpSpeedAtBaseSpeed = 0x720;
            static constexpr std::uintptr_t YawInterpSpeedAtMaxLateralSpeed = 0x748;
            static constexpr std::uintptr_t InputInterpSpeedHorizontal = 0x770;
            static constexpr std::uintptr_t CrashingMovementInterpSpeed = 0x798;
            static constexpr std::uintptr_t MoveInputActiveThreshold = 0x7C0;
            static constexpr std::uintptr_t AscendingLookPitchClampMin = 0x7E8;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileAscendingMin = 0x810;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileAscendingMax = 0x838;
            static constexpr std::uintptr_t MaxCeilingHeightAddLimitFromAscend = 0x860;
            static constexpr std::uintptr_t AscendingSpeedZUpAddedMin = 0x888;
            static constexpr std::uintptr_t AscendingSpeedZUpAddedMax = 0x8B0;
            static constexpr std::uintptr_t MaxCeilingHeightAddLimitFromBoost = 0x8D8;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileBoostingMin = 0x900;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileBoostingMax = 0x928;
            static constexpr std::uintptr_t PercentMaxLookPitchForMaxBoostCeilingHeightIncrease = 0x950;
            static constexpr std::uintptr_t PreThrustWindUpDuration = 0x978;
            static constexpr std::uintptr_t CrashingSpeedBase = 0x9A0;
            static constexpr std::uintptr_t CrashingSpeedAddedAtMaxDistanceFromCeilingHeight = 0x9C8;
            static constexpr std::uintptr_t DistanceFromCeilingHeightForMaxCrashingSpeedAdded = 0x9F0;
            static constexpr std::uintptr_t CrashingLookPitchClampFinalMax = 0xA18;
            static constexpr std::uintptr_t CrashingLookPitchClampDelayBeforeLerpToFinalMax = 0xA40;
            static constexpr std::uintptr_t CrashingLookPitchClampDurationToLerpToFinalMax = 0xA68;
            static constexpr std::uintptr_t PreCrashingSpeedBase = 0xA90;
            static constexpr std::uintptr_t PreCrashingInterpToSpeedMod = 0xAB8;
            static constexpr std::uintptr_t MinAngleToPreventCrash = 0xAE0;
            static constexpr std::uintptr_t CrashImpactIgnoreWaterDuration = 0xB08;
            static constexpr std::uintptr_t MaxAngleForLowFrictionLanding = 0xB30;
            static constexpr std::uintptr_t LowFrictionDurationMin = 0xB58;
            static constexpr std::uintptr_t LowFrictionDurationMax = 0xB80;
            static constexpr std::uintptr_t LowFrictionDurationScalar = 0xBA8;
            static constexpr std::uintptr_t SpeedForMinLowFrictionMult = 0xBD0;
            static constexpr std::uintptr_t SpeedForMaxLowFrictionMult = 0xBF8;
            static constexpr std::uintptr_t LowFrictionMultFromSpeedMin = 0xC20;
            static constexpr std::uintptr_t LowFrictionMultFromSpeedMax = 0xC48;
            static constexpr std::uintptr_t ImpactAngleForMaxLowFrictionDuration = 0xC70;
            static constexpr std::uintptr_t ImpactAngleForMinLowFrictionDuration = 0xC98;
            static constexpr std::uintptr_t LowFrictionMultFromImpactAngleMax = 0xCC0;
            static constexpr std::uintptr_t LowFrictionMultFromImpactAngleMin = 0xCE8;
            static constexpr std::uintptr_t FlyingSpeedBase = 0xD10;
            static constexpr std::uintptr_t FlyingSpeedAddedAtMaxDistanceFromCeilingHeight = 0xD38;
            static constexpr std::uintptr_t FlyingDownZSpeedAddedWhileFalling = 0xD60;
            static constexpr std::uintptr_t DistanceFromCeilingHeightForMaxFlyingSpeedAdded = 0xD88;
            static constexpr std::uintptr_t AirBrakingDefaultMultiMin = 0xDB0;
            static constexpr std::uintptr_t AirBrakingDownSpeedMultiMin = 0xDD8;
            static constexpr std::uintptr_t PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput = 0xE00;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileHoldingForwardMin = 0xE28;
            static constexpr std::uintptr_t CeilingHeightIncreaseSpeedWhileHoldingForwardMax = 0xE50;
            static constexpr std::uintptr_t CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight = 0xE78;
            static constexpr std::uintptr_t CeilingHeightMinDecreaseSpeedWhileFlying = 0xEA0;
            static constexpr std::uintptr_t CeilingHeightMinDecreaseSpeedWhileBoosting = 0xEC8;
            static constexpr std::uintptr_t CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight = 0xEF0;
            static constexpr std::uintptr_t CeilingHeightMinDecreaseSpeedWhileAscending = 0xF18;
            static constexpr std::uintptr_t CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight = 0xF40;
            static constexpr std::uintptr_t HeightAboveWorldInterpSpeedIncreasing = 0xF68;
            static constexpr std::uintptr_t HeightAboveWorldInterpSpeedDecreasing = 0xF90;
            static constexpr std::uintptr_t HeightForMinAddedCeilingDecay = 0xFB8;
            static constexpr std::uintptr_t HeightForMaxAddedCeilingDecay = 0xFE0;
            static constexpr std::uintptr_t MaxAddedCeilingDecayFromHeight = 0x1008;
            static constexpr std::uintptr_t GlobalCeilingHeightMax = 0x1030;
            static constexpr std::uintptr_t GlobalCeilingHeightDiminishingReturnsExponent = 0x1058;
            static constexpr std::uintptr_t GlobalCeilingHeightDiminishingReturnsRange = 0x1080;
            static constexpr std::uintptr_t SkimmingMinRequiredAngleToSurface = 0x10A8;
            static constexpr std::uintptr_t SkimmingMinRequiredVelocityAlongSurface = 0x10D0;
            static constexpr std::uintptr_t SkimmingMinRequiredHeightAboveWorld = 0x10F8;
            static constexpr std::uintptr_t MaxAngleForGroundHit = 0x1120;
            static constexpr std::uintptr_t VelocityClampOnBonk = 0x1148;
            static constexpr std::uintptr_t InputMultiplierOnRotationMovementInputMax = 0x1170;
            static constexpr std::uintptr_t InputMultiplierOnRotationNotHoveringFactor = 0x1198;
            static constexpr std::uintptr_t InputMultiplierOnRotationChargingStateMultiplier = 0x11C0;
            static constexpr std::uintptr_t NativeInitialHoverTime = 0x11E8;
            static constexpr std::uintptr_t PitchTurnSpeedMultiplier = 0x1210;
            static constexpr std::uintptr_t NewOrientationYawInterpSpeedMultiplier = 0x1238;
            static constexpr std::uintptr_t NativeLoweredAccelerationFromHitSomethingMaxTime = 0x1260;
            static constexpr std::uintptr_t UpdateMovementVectorAscendOffsetInterpSpeed = 0x1288;
            static constexpr std::uintptr_t UpdateMovementVectorLengthOldRangeX = 0x12B0;
            static constexpr std::uintptr_t UpdateMovementVectorLengthOldRangeY = 0x12D8;
            static constexpr std::uintptr_t UpdateMovementVectorLengthNewRangeX = 0x1300;
            static constexpr std::uintptr_t UpdateMovementVectorLengthNewRangeY = 0x1328;
            static constexpr std::uintptr_t UpdateMovementVectorInputBackwardsThreshold = 0x1350;
            static constexpr std::uintptr_t UpdateMovementVectorClampedMin = 0x1378;
            static constexpr std::uintptr_t UpdateMovementVectorClampedMaxHovering = 0x13A0;
            static constexpr std::uintptr_t UpdateMovementVectorClampedMaxNotHovering = 0x13C8;
            static constexpr std::uintptr_t UpdateMovementVectorLastLengthWithInputDeltaTimeMultiplier = 0x13F0;
            static constexpr std::uintptr_t UpdateMovementVectorLastLengthWithInputClampMin = 0x1418;
            static constexpr std::uintptr_t UpdateMovementVectorLastLengthWithInputClampMax = 0x1440;
            static constexpr std::uintptr_t UpdateMovementVectorHoveringTimeThreshold = 0x1468;
            static constexpr std::uintptr_t UpdateMovementVectorLastLengthHoveringMultiplier = 0x1490;
            static constexpr std::uintptr_t NoiseOffsetInterpSpeed = 0x14B8;
            static constexpr std::uintptr_t RotateMeshInitialHoverBuffer = 0x14E0;
            static constexpr std::uintptr_t ExtraSpeedFromFlightAngleTargetMultiplerUp = 0x1508;
            static constexpr std::uintptr_t ExtraSpeedFromFlightAngleTargetMultiplerDown = 0x1530;
            static constexpr std::uintptr_t ExtraSpeedFromFlightAngleInterpSpeedOldRangeX = 0x1558;
            static constexpr std::uintptr_t ExtraSpeedFromFlightAngleInterpSpeedOldRangeY = 0x1580;
            static constexpr std::uintptr_t ExtraSpeedFromFlightAngleInterpSpeedNewRangeX = 0x15A8;
            static constexpr std::uintptr_t ExtraSpeedFromFlightAngleInterpSpeedNewRangeY = 0x15D0;
            static constexpr std::uintptr_t BreakingVelocityInterpSpeed = 0x15F8;
            static constexpr std::uintptr_t BoostReductionLastFinialVelocityLengthThreshold = 0x1620;
            static constexpr std::uintptr_t BoostReductionValue = 0x1648;
            static constexpr std::uintptr_t RepulsorCannonBoost = 0x1670;
            static constexpr std::uintptr_t NativeBoostDepletionRate = 0x1698;
            static constexpr std::uintptr_t BonusBoostDepletionRate = 0x16C0;
            static constexpr std::uintptr_t BonusBoostUnNormalizedMax = 0x16E8;
            static constexpr std::uintptr_t NativeBoostMaxSpeedIncrease = 0x1710;
            static constexpr std::uintptr_t ExitHoverBoost = 0x1738;
            static constexpr std::uintptr_t LowerAccelerationFromHitPostProcessMovementVectorWeight = 0x1760;
            static constexpr std::uintptr_t LaunchingMovementBelowHoveringFlyingDurationNewRangeX = 0x1788;
            static constexpr std::uintptr_t LaunchingMovementBelowHoveringFlyingDurationNewRangeY = 0x17B0;
            static constexpr std::uintptr_t LaunchingMovementBelowHoveringNewVelocityInterpTargetMaxSize = 0x17D8;
            static constexpr std::uintptr_t LaunchingMovementBelowHoveringNewVelocityInterpSpeed = 0x1800;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringTransitionDurationModifier = 0x1828;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringFlyingDurationUpNewRangeX = 0x1850;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringFlyingDurationUpNewRangeY = 0x1878;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringFlyingDurationThreshold = 0x18A0;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringLowDurationInterpSpeedOldRangeX = 0x18C8;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringLowDurationInterpSpeedOldRangeY = 0x18F0;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringLowDurationInterpSpeedNewRangeX = 0x1918;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringLowDurationInterpSpeedNewRangeY = 0x1940;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringHighDurationInterpSpeedOldRangeX = 0x1968;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringHighDurationInterpSpeedOldRangeY = 0x1990;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringHighDurationInterpSpeedNewRangeX = 0x19B8;
            static constexpr std::uintptr_t LaunchingMovementAboveHoveringHighDurationInterpSpeedNewRangeY = 0x19E0;
            static constexpr std::uintptr_t LaunchingMovementInitialHoverTimeMinModifier = 0x1A08;
            static constexpr std::uintptr_t LaunchingMovementInitialHoverTimeMaxModifier = 0x1A30;
            static constexpr std::uintptr_t LaunchingMovementBoost = 0x1A58;
            static constexpr std::uintptr_t LaunchingMovementInitialHoverTimeMultipler = 0x1A80;
            static constexpr std::uintptr_t LaunchingMovementStartedFlyingTransitionDurationSubtrahend = 0x1AA8;
            static constexpr std::uintptr_t LaunchingMovementVelocityMultiplierFlyingDurationNewRangeX = 0x1AD0;
            static constexpr std::uintptr_t LaunchingMovementVelocityMultiplierFlyingDurationNewRangeY = 0x1AF8;
            static constexpr std::uintptr_t NewCrashingModeThrustingDurationThreshold = 0x1B20;
            static constexpr std::uintptr_t NewCrashingModePreCrashWindUpDurationModifier = 0x1B48;
            static constexpr std::uintptr_t NewCrashingModeBoost = 0x1B70;
            static constexpr std::uintptr_t NewCrashingModeRemapTimeCrashingOldRangeX = 0x1B98;
            static constexpr std::uintptr_t NewCrashingModeRemapTimeCrashingOldRangeY = 0x1BC0;
            static constexpr std::uintptr_t NewCrashingModeTimeCrashingDownVectorZ = 0x1BE8;
            static constexpr std::uintptr_t CalculateGoalYawMovementInputThreshold = 0x1C10;
            static constexpr std::uintptr_t EnterHoverMovementVectorThreshold = 0x1C38;
            static constexpr std::uintptr_t EnterHoverMovementInputXThreshold = 0x1C60;
            static constexpr std::uintptr_t EnterHoverMovementInputXBackwardThreshold = 0x1C88;
            static constexpr std::uintptr_t EnterHoverCameraRelativeMovementVectorXThreshold = 0x1CB0;
            static constexpr std::uintptr_t EnterHoverMovementInputLengthThreshold = 0x1CD8;
            static constexpr std::uintptr_t EnterHoverInputAgreementWithMovementThreshold = 0x1D00;
            static constexpr std::uintptr_t EnterHoverLoweredAccelerationFromHitSomethingCurrentTimeThreshold = 0x1D28;
            static constexpr std::uintptr_t ExitHoverMovementInputXBackwardThreshold = 0x1D50;
            static constexpr std::uintptr_t ExitHoverABSMovementInputYThreshold = 0x1D78;
            static constexpr std::uintptr_t ExitHoverMovementVectorLengthThreshold = 0x1DA0;
            static constexpr std::uintptr_t ExitHoverMovementInputXThreshold = 0x1DC8;
            static constexpr std::uintptr_t ExitHoverCameraRelativeMovementVectorXThreshold = 0x1DF0;
            static constexpr std::uintptr_t ExitHoverInputAgreementWithMovementThreshold = 0x1E18;
            static constexpr std::uintptr_t CalculatePitchNoiseFlyingTimeMultiplierOldRangeX = 0x1E40;
            static constexpr std::uintptr_t CalculatePitchNoiseFlyingTimeMultiplierOldRangeY = 0x1E68;
            static constexpr std::uintptr_t CalculatePitchNoiseFlyingTimeMultiplierNewRangeX = 0x1E90;
            static constexpr std::uintptr_t CalculatePitchNoiseFlyingTimeMultiplierNewRangeY = 0x1EB8;
            static constexpr std::uintptr_t CalculatePitchNoiseDotResultMultiplerOldRangeX = 0x1EE0;
            static constexpr std::uintptr_t CalculatePitchNoiseDotResultMultiplerOldRangeY = 0x1F08;
            static constexpr std::uintptr_t CalculatePitchNoiseDotResultMultiplerNewRangeX = 0x1F30;
            static constexpr std::uintptr_t CalculatePitchNoiseDotResultMultiplerNewRangeY = 0x1F58;
            static constexpr std::uintptr_t CalculatePitchNoiseMovementVectorLengthMultiplierOldRangeX = 0x1F80;
            static constexpr std::uintptr_t CalculatePitchNoiseMovementVectorLengthMultiplierOldRangeY = 0x1FA8;
            static constexpr std::uintptr_t CalculatePitchNoiseMovementVectorLengthMultiplierNewRangeX = 0x1FD0;
            static constexpr std::uintptr_t CalculatePitchNoiseMovementVectorLengthMultiplierNewRangeY = 0x1FF8;
            static constexpr std::uintptr_t CalculateYawNoiseMoveOrientationYawOldRangeX = 0x2020;
            static constexpr std::uintptr_t CalculateYawNoiseMoveOrientationYawOldRangeY = 0x2048;
            static constexpr std::uintptr_t CalculateYawNoiseMoveOrientationYawNewRangeX = 0x2070;
            static constexpr std::uintptr_t CalculateYawNoiseMoveOrientationYawNewRangeY = 0x2098;
            static constexpr std::uintptr_t CalculateYawNoiseMovementVectorLengthOldRangeX = 0x20C0;
            static constexpr std::uintptr_t CalculateYawNoiseMovementVectorLengthOldRangeY = 0x20E8;
            static constexpr std::uintptr_t CalculateYawNoiseMovementVectorLengthNewRangeX = 0x2110;
            static constexpr std::uintptr_t CalculateYawNoiseMovementVectorLengthNewRangeY = 0x2138;
            static constexpr std::uintptr_t CalculateYawNoiseFlyingTimeMultiplier = 0x2160;
            static constexpr std::uintptr_t CalculateAccelerationReturnValueWhenThrusting = 0x2188;
            static constexpr std::uintptr_t CalculateAccelerationReturnValueWhenHovering = 0x21B0;
            static constexpr std::uintptr_t CalculateAccelerationMovementVectorLengthOldRangeX = 0x21D8;
            static constexpr std::uintptr_t CalculateAccelerationMovementVectorLengthOldRangeY = 0x2200;
            static constexpr std::uintptr_t CalculateAccelerationMovementVectorLengthNewRangeX = 0x2228;
            static constexpr std::uintptr_t CalculateAccelerationMovementVectorLengthNewRangeY = 0x2250;
            static constexpr std::uintptr_t CalculateAccelerationHitSomethingTimeOldRangeX = 0x2278;
            static constexpr std::uintptr_t CalculateAccelerationHitSomethingTimeNewRangeX = 0x22A0;
            static constexpr std::uintptr_t CalculateAccelerationHitSomethingTimeNewRangeY = 0x22C8;
            static constexpr std::uintptr_t ClampToMaxHeightCeilingHeightMaxModifier = 0x22F0;
            static constexpr std::uintptr_t ClampToMaxHeightPawnLocationZNewRangeX = 0x2318;
            static constexpr std::uintptr_t ClampToMaxHeightPawnLocationZNewRangeY = 0x2340;
            static constexpr std::uintptr_t ClampToMaxHeightAboveWorldNewRangeX = 0x2368;
            static constexpr std::uintptr_t ClampToMaxHeightAboveWorldNewRangeY = 0x2390;
            static constexpr std::uintptr_t PostProcessMovementVectorStartedFlyingTimeModifier = 0x23B8;
            static constexpr std::uintptr_t PostProcessMovementVectorTotalFlyingTimeNewRangeX = 0x23E0;
            static constexpr std::uintptr_t PostProcessMovementVectorTotalFlyingTimeNewRangeY = 0x2408;
            static constexpr std::uintptr_t PostProcessMovementVectorCurrentNoiseOffsetMultiplier = 0x2430;
            static constexpr std::uintptr_t PostProcessMovementVectorClampedLengthNewRangeX = 0x2458;
            static constexpr std::uintptr_t PostProcessMovementVectorClampedLengthNewRangeY = 0x2480;
            static constexpr std::uintptr_t HitResponseIsInInitialHoverBufferTime = 0x24A8;
            static constexpr std::uintptr_t HitResponseMovementVectorMultiplier = 0x24D0;
            static constexpr std::uintptr_t LoweredAccelerationFromHitSomethingMaxTime = 0x24F8;
            static constexpr std::uintptr_t FuelUsageRateUpdateInterval = 0x2520;
            static constexpr std::uintptr_t FuelUsageRateMagnitudeOldRangeX = 0x2548;
            static constexpr std::uintptr_t FuelUsageRateMagnitudeOldRangeY = 0x2570;
            static constexpr std::uintptr_t FuelUsageRateMagnitudeNewRangeX = 0x2598;
            static constexpr std::uintptr_t FuelUsageRateMagnitudeNewRangeY = 0x25C0;
            static constexpr std::uintptr_t PlayHitFXMovementVectorLengthThreshold = 0x25E8;
            static constexpr std::uintptr_t InitialHoverTargetTimeMultipler = 0x2610;
            static constexpr std::uintptr_t InitialHoverTargetXYCalculationNewRangeY = 0x2638;
            static constexpr std::uintptr_t InstantThrustBoost = 0x2660;
            static constexpr std::uintptr_t InstantThrustBonusBoost = 0x2688;
            static constexpr std::uintptr_t OutOfFuelCrashImpactMinSpeed = 0x26B0;
        };

        inline static constexpr std::array<PropertyInfo, 259> Properties{{
            {"bIntendsToDescend", 0x1D8, "BoolProperty"},
            {"bIntendsToFly", 0x1D9, "BoolProperty"},
            {"bIntendsToAscend", 0x1DA, "BoolProperty"},
            {"bIntendsToHover", 0x1DB, "BoolProperty"},
            {"bIntendsToWindUp", 0x1DC, "BoolProperty"},
            {"bIntendsToThrust", 0x1DD, "BoolProperty"},
            {"bIntendsToRollLeft", 0x1DE, "BoolProperty"},
            {"bIntendsToRollRight", 0x1DF, "BoolProperty"},
            {"TagQueryToFly", 0x1E0, "StructProperty"},
            {"FlyingStatusConfigs", 0x228, "ArrayProperty"},
            {"FlyingThroughCeilingGE", 0x238, "ClassProperty"},
            {"LowFrictionLandingGE", 0x240, "ClassProperty"},
            {"FuelUsageRateGE", 0x248, "ClassProperty"},
            {"SmashingGE", 0x250, "ClassProperty"},
            {"FlyingThroughCeilingTag", 0x258, "StructProperty"},
            {"EnergyDrainCueTag", 0x25C, "StructProperty"},
            {"HitBonkCueTag", 0x260, "StructProperty"},
            {"EventTagToTriggerCrashImpact", 0x264, "StructProperty"},
            {"ForceCrashDamagedTags", 0x268, "StructProperty"},
            {"TagsToPreventLowFrictionLanding", 0x288, "StructProperty"},
            {"SmashingThingsTags", 0x2A8, "StructProperty"},
            {"HitResponseCrashImpactTags", 0x2C8, "StructProperty"},
            {"TagToSetByCallerDuration", 0x2E8, "StructProperty"},
            {"TagUsageRateSetByCallerMagnitude", 0x2EC, "StructProperty"},
            {"IsInChargingStateRepulsorCannonTag", 0x2F0, "StructProperty"},
            {"RepulsorCannonTag", 0x2F4, "StructProperty"},
            {"JetpackInteriorTag", 0x2F8, "StructProperty"},
            {"InstantThrustEventTag", 0x2FC, "StructProperty"},
            {"NativeDodgeSpeedCurve", 0x300, "ObjectProperty"},
            {"NativeDodgeSpeedHoveringCurve", 0x308, "ObjectProperty"},
            {"DodgeSpeedMin", 0x310, "StructProperty"},
            {"DodgeSpeedMax", 0x338, "StructProperty"},
            {"DodgeSpeedDecayInitialDelay", 0x360, "StructProperty"},
            {"DodgeSpeedRampExponent", 0x388, "StructProperty"},
            {"DodgeSpeedDecayExponent", 0x3B0, "StructProperty"},
            {"DodgeDuration", 0x3D8, "StructProperty"},
            {"StartedFlyingTransitionDuration", 0x400, "StructProperty"},
            {"StartedFlyingSpeedBoundForInterpMin", 0x428, "StructProperty"},
            {"StartedFlyingSpeedBoundForInterpMax", 0x450, "StructProperty"},
            {"StartedFlyingVelocityInterpSpeedAtMinSpeed", 0x478, "StructProperty"},
            {"StartedFlyingVelocityInterpSpeedAtMaxSpeed", 0x4A0, "StructProperty"},
            {"FlyingLookPitchClampMin", 0x4C8, "StructProperty"},
            {"FlyingLookPitchClampMax", 0x4F0, "StructProperty"},
            {"DefaultLookPitchAngleOffset", 0x518, "StructProperty"},
            {"CrashingLookPitchClampMin", 0x540, "StructProperty"},
            {"CrashingLookPitchClampMax", 0x568, "StructProperty"},
            {"CrashingInputWeightLookDirection", 0x590, "StructProperty"},
            {"FlyingInputWeightLockDirection", 0x5B8, "StructProperty"},
            {"FlyingInputWeightHorizontal", 0x5E0, "StructProperty"},
            {"PitchInterpSpeedWhileThrusting", 0x608, "StructProperty"},
            {"PitchInterpSpeedAtBaseSpeed", 0x630, "StructProperty"},
            {"PitchInterpSpeedAtMaxLateralSpeed", 0x658, "StructProperty"},
            {"PitchInterpSpeedAtMaxTotalSpeed", 0x680, "StructProperty"},
            {"YawInterpSpeedWhileThrusting", 0x6A8, "StructProperty"},
            {"YawInterpSpeedWhileBoosting", 0x6D0, "StructProperty"},
            {"YawInterpSpeedAtMinBrakeSpeed", 0x6F8, "StructProperty"},
            {"YawInterpSpeedAtBaseSpeed", 0x720, "StructProperty"},
            {"YawInterpSpeedAtMaxLateralSpeed", 0x748, "StructProperty"},
            {"InputInterpSpeedHorizontal", 0x770, "StructProperty"},
            {"CrashingMovementInterpSpeed", 0x798, "StructProperty"},
            {"MoveInputActiveThreshold", 0x7C0, "StructProperty"},
            {"AscendingLookPitchClampMin", 0x7E8, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileAscendingMin", 0x810, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileAscendingMax", 0x838, "StructProperty"},
            {"MaxCeilingHeightAddLimitFromAscend", 0x860, "StructProperty"},
            {"AscendingSpeedZUpAddedMin", 0x888, "StructProperty"},
            {"AscendingSpeedZUpAddedMax", 0x8B0, "StructProperty"},
            {"MaxCeilingHeightAddLimitFromBoost", 0x8D8, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileBoostingMin", 0x900, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileBoostingMax", 0x928, "StructProperty"},
            {"PercentMaxLookPitchForMaxBoostCeilingHeightIncrease", 0x950, "StructProperty"},
            {"PreThrustWindUpDuration", 0x978, "StructProperty"},
            {"CrashingSpeedBase", 0x9A0, "StructProperty"},
            {"CrashingSpeedAddedAtMaxDistanceFromCeilingHeight", 0x9C8, "StructProperty"},
            {"DistanceFromCeilingHeightForMaxCrashingSpeedAdded", 0x9F0, "StructProperty"},
            {"CrashingLookPitchClampFinalMax", 0xA18, "StructProperty"},
            {"CrashingLookPitchClampDelayBeforeLerpToFinalMax", 0xA40, "StructProperty"},
            {"CrashingLookPitchClampDurationToLerpToFinalMax", 0xA68, "StructProperty"},
            {"PreCrashingSpeedBase", 0xA90, "StructProperty"},
            {"PreCrashingInterpToSpeedMod", 0xAB8, "StructProperty"},
            {"MinAngleToPreventCrash", 0xAE0, "StructProperty"},
            {"CrashImpactIgnoreWaterDuration", 0xB08, "StructProperty"},
            {"MaxAngleForLowFrictionLanding", 0xB30, "StructProperty"},
            {"LowFrictionDurationMin", 0xB58, "StructProperty"},
            {"LowFrictionDurationMax", 0xB80, "StructProperty"},
            {"LowFrictionDurationScalar", 0xBA8, "StructProperty"},
            {"SpeedForMinLowFrictionMult", 0xBD0, "StructProperty"},
            {"SpeedForMaxLowFrictionMult", 0xBF8, "StructProperty"},
            {"LowFrictionMultFromSpeedMin", 0xC20, "StructProperty"},
            {"LowFrictionMultFromSpeedMax", 0xC48, "StructProperty"},
            {"ImpactAngleForMaxLowFrictionDuration", 0xC70, "StructProperty"},
            {"ImpactAngleForMinLowFrictionDuration", 0xC98, "StructProperty"},
            {"LowFrictionMultFromImpactAngleMax", 0xCC0, "StructProperty"},
            {"LowFrictionMultFromImpactAngleMin", 0xCE8, "StructProperty"},
            {"FlyingSpeedBase", 0xD10, "StructProperty"},
            {"FlyingSpeedAddedAtMaxDistanceFromCeilingHeight", 0xD38, "StructProperty"},
            {"FlyingDownZSpeedAddedWhileFalling", 0xD60, "StructProperty"},
            {"DistanceFromCeilingHeightForMaxFlyingSpeedAdded", 0xD88, "StructProperty"},
            {"AirBrakingDefaultMultiMin", 0xDB0, "StructProperty"},
            {"AirBrakingDownSpeedMultiMin", 0xDD8, "StructProperty"},
            {"PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput", 0xE00, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileHoldingForwardMin", 0xE28, "StructProperty"},
            {"CeilingHeightIncreaseSpeedWhileHoldingForwardMax", 0xE50, "StructProperty"},
            {"CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight", 0xE78, "StructProperty"},
            {"CeilingHeightMinDecreaseSpeedWhileFlying", 0xEA0, "StructProperty"},
            {"CeilingHeightMinDecreaseSpeedWhileBoosting", 0xEC8, "StructProperty"},
            {"CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight", 0xEF0, "StructProperty"},
            {"CeilingHeightMinDecreaseSpeedWhileAscending", 0xF18, "StructProperty"},
            {"CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight", 0xF40, "StructProperty"},
            {"HeightAboveWorldInterpSpeedIncreasing", 0xF68, "StructProperty"},
            {"HeightAboveWorldInterpSpeedDecreasing", 0xF90, "StructProperty"},
            {"HeightForMinAddedCeilingDecay", 0xFB8, "StructProperty"},
            {"HeightForMaxAddedCeilingDecay", 0xFE0, "StructProperty"},
            {"MaxAddedCeilingDecayFromHeight", 0x1008, "StructProperty"},
            {"GlobalCeilingHeightMax", 0x1030, "StructProperty"},
            {"GlobalCeilingHeightDiminishingReturnsExponent", 0x1058, "StructProperty"},
            {"GlobalCeilingHeightDiminishingReturnsRange", 0x1080, "StructProperty"},
            {"SkimmingMinRequiredAngleToSurface", 0x10A8, "StructProperty"},
            {"SkimmingMinRequiredVelocityAlongSurface", 0x10D0, "StructProperty"},
            {"SkimmingMinRequiredHeightAboveWorld", 0x10F8, "StructProperty"},
            {"MaxAngleForGroundHit", 0x1120, "StructProperty"},
            {"VelocityClampOnBonk", 0x1148, "StructProperty"},
            {"InputMultiplierOnRotationMovementInputMax", 0x1170, "StructProperty"},
            {"InputMultiplierOnRotationNotHoveringFactor", 0x1198, "StructProperty"},
            {"InputMultiplierOnRotationChargingStateMultiplier", 0x11C0, "StructProperty"},
            {"NativeInitialHoverTime", 0x11E8, "StructProperty"},
            {"PitchTurnSpeedMultiplier", 0x1210, "StructProperty"},
            {"NewOrientationYawInterpSpeedMultiplier", 0x1238, "StructProperty"},
            {"NativeLoweredAccelerationFromHitSomethingMaxTime", 0x1260, "StructProperty"},
            {"UpdateMovementVectorAscendOffsetInterpSpeed", 0x1288, "StructProperty"},
            {"UpdateMovementVectorLengthOldRangeX", 0x12B0, "StructProperty"},
            {"UpdateMovementVectorLengthOldRangeY", 0x12D8, "StructProperty"},
            {"UpdateMovementVectorLengthNewRangeX", 0x1300, "StructProperty"},
            {"UpdateMovementVectorLengthNewRangeY", 0x1328, "StructProperty"},
            {"UpdateMovementVectorInputBackwardsThreshold", 0x1350, "StructProperty"},
            {"UpdateMovementVectorClampedMin", 0x1378, "StructProperty"},
            {"UpdateMovementVectorClampedMaxHovering", 0x13A0, "StructProperty"},
            {"UpdateMovementVectorClampedMaxNotHovering", 0x13C8, "StructProperty"},
            {"UpdateMovementVectorLastLengthWithInputDeltaTimeMultiplier", 0x13F0, "StructProperty"},
            {"UpdateMovementVectorLastLengthWithInputClampMin", 0x1418, "StructProperty"},
            {"UpdateMovementVectorLastLengthWithInputClampMax", 0x1440, "StructProperty"},
            {"UpdateMovementVectorHoveringTimeThreshold", 0x1468, "StructProperty"},
            {"UpdateMovementVectorLastLengthHoveringMultiplier", 0x1490, "StructProperty"},
            {"NoiseOffsetInterpSpeed", 0x14B8, "StructProperty"},
            {"RotateMeshInitialHoverBuffer", 0x14E0, "StructProperty"},
            {"ExtraSpeedFromFlightAngleTargetMultiplerUp", 0x1508, "StructProperty"},
            {"ExtraSpeedFromFlightAngleTargetMultiplerDown", 0x1530, "StructProperty"},
            {"ExtraSpeedFromFlightAngleInterpSpeedOldRangeX", 0x1558, "StructProperty"},
            {"ExtraSpeedFromFlightAngleInterpSpeedOldRangeY", 0x1580, "StructProperty"},
            {"ExtraSpeedFromFlightAngleInterpSpeedNewRangeX", 0x15A8, "StructProperty"},
            {"ExtraSpeedFromFlightAngleInterpSpeedNewRangeY", 0x15D0, "StructProperty"},
            {"BreakingVelocityInterpSpeed", 0x15F8, "StructProperty"},
            {"BoostReductionLastFinialVelocityLengthThreshold", 0x1620, "StructProperty"},
            {"BoostReductionValue", 0x1648, "StructProperty"},
            {"RepulsorCannonBoost", 0x1670, "StructProperty"},
            {"NativeBoostDepletionRate", 0x1698, "StructProperty"},
            {"BonusBoostDepletionRate", 0x16C0, "StructProperty"},
            {"BonusBoostUnNormalizedMax", 0x16E8, "StructProperty"},
            {"NativeBoostMaxSpeedIncrease", 0x1710, "StructProperty"},
            {"ExitHoverBoost", 0x1738, "StructProperty"},
            {"LowerAccelerationFromHitPostProcessMovementVectorWeight", 0x1760, "StructProperty"},
            {"LaunchingMovementBelowHoveringFlyingDurationNewRangeX", 0x1788, "StructProperty"},
            {"LaunchingMovementBelowHoveringFlyingDurationNewRangeY", 0x17B0, "StructProperty"},
            {"LaunchingMovementBelowHoveringNewVelocityInterpTargetMaxSize", 0x17D8, "StructProperty"},
            {"LaunchingMovementBelowHoveringNewVelocityInterpSpeed", 0x1800, "StructProperty"},
            {"LaunchingMovementAboveHoveringTransitionDurationModifier", 0x1828, "StructProperty"},
            {"LaunchingMovementAboveHoveringFlyingDurationUpNewRangeX", 0x1850, "StructProperty"},
            {"LaunchingMovementAboveHoveringFlyingDurationUpNewRangeY", 0x1878, "StructProperty"},
            {"LaunchingMovementAboveHoveringFlyingDurationThreshold", 0x18A0, "StructProperty"},
            {"LaunchingMovementAboveHoveringLowDurationInterpSpeedOldRangeX", 0x18C8, "StructProperty"},
            {"LaunchingMovementAboveHoveringLowDurationInterpSpeedOldRangeY", 0x18F0, "StructProperty"},
            {"LaunchingMovementAboveHoveringLowDurationInterpSpeedNewRangeX", 0x1918, "StructProperty"},
            {"LaunchingMovementAboveHoveringLowDurationInterpSpeedNewRangeY", 0x1940, "StructProperty"},
            {"LaunchingMovementAboveHoveringHighDurationInterpSpeedOldRangeX", 0x1968, "StructProperty"},
            {"LaunchingMovementAboveHoveringHighDurationInterpSpeedOldRangeY", 0x1990, "StructProperty"},
            {"LaunchingMovementAboveHoveringHighDurationInterpSpeedNewRangeX", 0x19B8, "StructProperty"},
            {"LaunchingMovementAboveHoveringHighDurationInterpSpeedNewRangeY", 0x19E0, "StructProperty"},
            {"LaunchingMovementInitialHoverTimeMinModifier", 0x1A08, "StructProperty"},
            {"LaunchingMovementInitialHoverTimeMaxModifier", 0x1A30, "StructProperty"},
            {"LaunchingMovementBoost", 0x1A58, "StructProperty"},
            {"LaunchingMovementInitialHoverTimeMultipler", 0x1A80, "StructProperty"},
            {"LaunchingMovementStartedFlyingTransitionDurationSubtrahend", 0x1AA8, "StructProperty"},
            {"LaunchingMovementVelocityMultiplierFlyingDurationNewRangeX", 0x1AD0, "StructProperty"},
            {"LaunchingMovementVelocityMultiplierFlyingDurationNewRangeY", 0x1AF8, "StructProperty"},
            {"NewCrashingModeThrustingDurationThreshold", 0x1B20, "StructProperty"},
            {"NewCrashingModePreCrashWindUpDurationModifier", 0x1B48, "StructProperty"},
            {"NewCrashingModeBoost", 0x1B70, "StructProperty"},
            {"NewCrashingModeRemapTimeCrashingOldRangeX", 0x1B98, "StructProperty"},
            {"NewCrashingModeRemapTimeCrashingOldRangeY", 0x1BC0, "StructProperty"},
            {"NewCrashingModeTimeCrashingDownVectorZ", 0x1BE8, "StructProperty"},
            {"CalculateGoalYawMovementInputThreshold", 0x1C10, "StructProperty"},
            {"EnterHoverMovementVectorThreshold", 0x1C38, "StructProperty"},
            {"EnterHoverMovementInputXThreshold", 0x1C60, "StructProperty"},
            {"EnterHoverMovementInputXBackwardThreshold", 0x1C88, "StructProperty"},
            {"EnterHoverCameraRelativeMovementVectorXThreshold", 0x1CB0, "StructProperty"},
            {"EnterHoverMovementInputLengthThreshold", 0x1CD8, "StructProperty"},
            {"EnterHoverInputAgreementWithMovementThreshold", 0x1D00, "StructProperty"},
            {"EnterHoverLoweredAccelerationFromHitSomethingCurrentTimeThreshold", 0x1D28, "StructProperty"},
            {"ExitHoverMovementInputXBackwardThreshold", 0x1D50, "StructProperty"},
            {"ExitHoverABSMovementInputYThreshold", 0x1D78, "StructProperty"},
            {"ExitHoverMovementVectorLengthThreshold", 0x1DA0, "StructProperty"},
            {"ExitHoverMovementInputXThreshold", 0x1DC8, "StructProperty"},
            {"ExitHoverCameraRelativeMovementVectorXThreshold", 0x1DF0, "StructProperty"},
            {"ExitHoverInputAgreementWithMovementThreshold", 0x1E18, "StructProperty"},
            {"CalculatePitchNoiseFlyingTimeMultiplierOldRangeX", 0x1E40, "StructProperty"},
            {"CalculatePitchNoiseFlyingTimeMultiplierOldRangeY", 0x1E68, "StructProperty"},
            {"CalculatePitchNoiseFlyingTimeMultiplierNewRangeX", 0x1E90, "StructProperty"},
            {"CalculatePitchNoiseFlyingTimeMultiplierNewRangeY", 0x1EB8, "StructProperty"},
            {"CalculatePitchNoiseDotResultMultiplerOldRangeX", 0x1EE0, "StructProperty"},
            {"CalculatePitchNoiseDotResultMultiplerOldRangeY", 0x1F08, "StructProperty"},
            {"CalculatePitchNoiseDotResultMultiplerNewRangeX", 0x1F30, "StructProperty"},
            {"CalculatePitchNoiseDotResultMultiplerNewRangeY", 0x1F58, "StructProperty"},
            {"CalculatePitchNoiseMovementVectorLengthMultiplierOldRangeX", 0x1F80, "StructProperty"},
            {"CalculatePitchNoiseMovementVectorLengthMultiplierOldRangeY", 0x1FA8, "StructProperty"},
            {"CalculatePitchNoiseMovementVectorLengthMultiplierNewRangeX", 0x1FD0, "StructProperty"},
            {"CalculatePitchNoiseMovementVectorLengthMultiplierNewRangeY", 0x1FF8, "StructProperty"},
            {"CalculateYawNoiseMoveOrientationYawOldRangeX", 0x2020, "StructProperty"},
            {"CalculateYawNoiseMoveOrientationYawOldRangeY", 0x2048, "StructProperty"},
            {"CalculateYawNoiseMoveOrientationYawNewRangeX", 0x2070, "StructProperty"},
            {"CalculateYawNoiseMoveOrientationYawNewRangeY", 0x2098, "StructProperty"},
            {"CalculateYawNoiseMovementVectorLengthOldRangeX", 0x20C0, "StructProperty"},
            {"CalculateYawNoiseMovementVectorLengthOldRangeY", 0x20E8, "StructProperty"},
            {"CalculateYawNoiseMovementVectorLengthNewRangeX", 0x2110, "StructProperty"},
            {"CalculateYawNoiseMovementVectorLengthNewRangeY", 0x2138, "StructProperty"},
            {"CalculateYawNoiseFlyingTimeMultiplier", 0x2160, "StructProperty"},
            {"CalculateAccelerationReturnValueWhenThrusting", 0x2188, "StructProperty"},
            {"CalculateAccelerationReturnValueWhenHovering", 0x21B0, "StructProperty"},
            {"CalculateAccelerationMovementVectorLengthOldRangeX", 0x21D8, "StructProperty"},
            {"CalculateAccelerationMovementVectorLengthOldRangeY", 0x2200, "StructProperty"},
            {"CalculateAccelerationMovementVectorLengthNewRangeX", 0x2228, "StructProperty"},
            {"CalculateAccelerationMovementVectorLengthNewRangeY", 0x2250, "StructProperty"},
            {"CalculateAccelerationHitSomethingTimeOldRangeX", 0x2278, "StructProperty"},
            {"CalculateAccelerationHitSomethingTimeNewRangeX", 0x22A0, "StructProperty"},
            {"CalculateAccelerationHitSomethingTimeNewRangeY", 0x22C8, "StructProperty"},
            {"ClampToMaxHeightCeilingHeightMaxModifier", 0x22F0, "StructProperty"},
            {"ClampToMaxHeightPawnLocationZNewRangeX", 0x2318, "StructProperty"},
            {"ClampToMaxHeightPawnLocationZNewRangeY", 0x2340, "StructProperty"},
            {"ClampToMaxHeightAboveWorldNewRangeX", 0x2368, "StructProperty"},
            {"ClampToMaxHeightAboveWorldNewRangeY", 0x2390, "StructProperty"},
            {"PostProcessMovementVectorStartedFlyingTimeModifier", 0x23B8, "StructProperty"},
            {"PostProcessMovementVectorTotalFlyingTimeNewRangeX", 0x23E0, "StructProperty"},
            {"PostProcessMovementVectorTotalFlyingTimeNewRangeY", 0x2408, "StructProperty"},
            {"PostProcessMovementVectorCurrentNoiseOffsetMultiplier", 0x2430, "StructProperty"},
            {"PostProcessMovementVectorClampedLengthNewRangeX", 0x2458, "StructProperty"},
            {"PostProcessMovementVectorClampedLengthNewRangeY", 0x2480, "StructProperty"},
            {"HitResponseIsInInitialHoverBufferTime", 0x24A8, "StructProperty"},
            {"HitResponseMovementVectorMultiplier", 0x24D0, "StructProperty"},
            {"LoweredAccelerationFromHitSomethingMaxTime", 0x24F8, "StructProperty"},
            {"FuelUsageRateUpdateInterval", 0x2520, "StructProperty"},
            {"FuelUsageRateMagnitudeOldRangeX", 0x2548, "StructProperty"},
            {"FuelUsageRateMagnitudeOldRangeY", 0x2570, "StructProperty"},
            {"FuelUsageRateMagnitudeNewRangeX", 0x2598, "StructProperty"},
            {"FuelUsageRateMagnitudeNewRangeY", 0x25C0, "StructProperty"},
            {"PlayHitFXMovementVectorLengthThreshold", 0x25E8, "StructProperty"},
            {"InitialHoverTargetTimeMultipler", 0x2610, "StructProperty"},
            {"InitialHoverTargetXYCalculationNewRangeY", 0x2638, "StructProperty"},
            {"InstantThrustBoost", 0x2660, "StructProperty"},
            {"InstantThrustBonusBoost", 0x2688, "StructProperty"},
            {"OutOfFuelCrashImpactMinSpeed", 0x26B0, "StructProperty"},
        }};
    };

    struct FortMovementMode_JetpackFlyingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_JetpackFlyingRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_FlyingRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t FlyingStatus = 0x70;
            static constexpr std::uintptr_t CurrentHeightAboveWorld = 0x74;
            static constexpr std::uintptr_t InterpolatedHeightAboveWorld = 0x78;
            static constexpr std::uintptr_t SpeedMultiplierFromForwardInput = 0x7C;
            static constexpr std::uintptr_t AscendMoveOffset = 0x80;
            static constexpr std::uintptr_t LoweredAccelerationFromHitSomethingCurrentTime = 0x84;
            static constexpr std::uintptr_t LastMoveVecLengthWithInput = 0x88;
            static constexpr std::uintptr_t InterpolatedExtraSpeedFromFlightAngle = 0x8C;
            static constexpr std::uintptr_t Boost = 0x90;
            static constexpr std::uintptr_t BonusBoost = 0x94;
            static constexpr std::uintptr_t MovementInputWhenLastValid = 0x98;
            static constexpr std::uintptr_t MovementVector = 0xA8;
            static constexpr std::uintptr_t InterpolatedCurrentNoiseOffset = 0xC0;
            static constexpr std::uintptr_t bHasStartedMME = 0xD9;
            static constexpr std::uintptr_t bIsStartingFlying = 0xDA;
            static constexpr std::uintptr_t bBoostWasSetThisFrame = 0xDB;
            static constexpr std::uintptr_t bIsBoosting = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"FlyingStatus", 0x70, "EnumProperty"},
            {"CurrentHeightAboveWorld", 0x74, "FloatProperty"},
            {"InterpolatedHeightAboveWorld", 0x78, "FloatProperty"},
            {"SpeedMultiplierFromForwardInput", 0x7C, "FloatProperty"},
            {"AscendMoveOffset", 0x80, "FloatProperty"},
            {"LoweredAccelerationFromHitSomethingCurrentTime", 0x84, "FloatProperty"},
            {"LastMoveVecLengthWithInput", 0x88, "FloatProperty"},
            {"InterpolatedExtraSpeedFromFlightAngle", 0x8C, "FloatProperty"},
            {"Boost", 0x90, "FloatProperty"},
            {"BonusBoost", 0x94, "FloatProperty"},
            {"MovementInputWhenLastValid", 0x98, "StructProperty"},
            {"MovementVector", 0xA8, "StructProperty"},
            {"InterpolatedCurrentNoiseOffset", 0xC0, "StructProperty"},
            {"bHasStartedMME", 0xD9, "BoolProperty"},
            {"bIsStartingFlying", 0xDA, "BoolProperty"},
            {"bBoostWasSetThisFrame", 0xDB, "BoolProperty"},
            {"bIsBoosting", 0xDC, "BoolProperty"},
        }};
    };

    struct FortWeaponJetpack
    {
        static constexpr std::string_view Name = "FortWeaponJetpack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeapon";
        struct Offsets
        {
            static constexpr std::uintptr_t FlyingStatus = 0x1A70;
            static constexpr std::uintptr_t NativeCurrentHeightAboveWorld = 0x1A74;
            static constexpr std::uintptr_t ForwardSpeed = 0x1A78;
            static constexpr std::uintptr_t ForAnimTimeLeftInInitialHover = 0x1A7C;
            static constexpr std::uintptr_t ForAnimCurrentNoiseOffset = 0x1A80;
            static constexpr std::uintptr_t ForAnimMovementGoalDirection = 0x1A98;
            static constexpr std::uintptr_t ForAnimDodgeVelocity = 0x1AB0;
            static constexpr std::uintptr_t ForAnimMovementInput = 0x1AC8;
            static constexpr std::uintptr_t ForAnimGoalMoveOrientation = 0x1AD8;
            static constexpr std::uintptr_t bForAnimIsStartingFlying = 0x1AF0;
            static constexpr std::uintptr_t bForAnimIsInInitialHover = 0x1AF1;
            static constexpr std::uintptr_t bForAnimIsInInitialHoverWithBuffer = 0x1AF2;
            static constexpr std::uintptr_t FlyingMovementModeExtension = 0x1B60;
            static constexpr std::uintptr_t TagToEnableHeightCheck = 0x1B68;
            static constexpr std::uintptr_t HeightCheckInterval = 0x1B70;
            static constexpr std::uintptr_t HeightCheckTraceLength = 0x1B98;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"FlyingStatus", 0x1A70, "EnumProperty"},
            {"NativeCurrentHeightAboveWorld", 0x1A74, "FloatProperty"},
            {"ForwardSpeed", 0x1A78, "FloatProperty"},
            {"ForAnimTimeLeftInInitialHover", 0x1A7C, "FloatProperty"},
            {"ForAnimCurrentNoiseOffset", 0x1A80, "StructProperty"},
            {"ForAnimMovementGoalDirection", 0x1A98, "StructProperty"},
            {"ForAnimDodgeVelocity", 0x1AB0, "StructProperty"},
            {"ForAnimMovementInput", 0x1AC8, "StructProperty"},
            {"ForAnimGoalMoveOrientation", 0x1AD8, "StructProperty"},
            {"bForAnimIsStartingFlying", 0x1AF0, "BoolProperty"},
            {"bForAnimIsInInitialHover", 0x1AF1, "BoolProperty"},
            {"bForAnimIsInInitialHoverWithBuffer", 0x1AF2, "BoolProperty"},
            {"FlyingMovementModeExtension", 0x1B60, "ClassProperty"},
            {"TagToEnableHeightCheck", 0x1B68, "StructProperty"},
            {"HeightCheckInterval", 0x1B70, "StructProperty"},
            {"HeightCheckTraceLength", 0x1B98, "StructProperty"},
        }};
    };

    struct JetpackLayerAnimInstance
    {
        static constexpr std::string_view Name = "JetpackLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsFlying = 0x1180;
            static constexpr std::uintptr_t FlyingPitch = 0x1188;
            static constexpr std::uintptr_t FlyingRoll = 0x1190;
            static constexpr std::uintptr_t bNoFuel = 0x1198;
            static constexpr std::uintptr_t bIsHovering = 0x1199;
            static constexpr std::uintptr_t YawOffset = 0x119C;
            static constexpr std::uintptr_t AimingPitch = 0x11A0;
            static constexpr std::uintptr_t LateralSpeedInterp = 0x11A8;
            static constexpr std::uintptr_t ForwardSpeedInterp = 0x11B0;
            static constexpr std::uintptr_t LateralSpeedDif = 0x11B8;
            static constexpr std::uintptr_t bDodgeRight = 0x11C0;
            static constexpr std::uintptr_t bDodgeLeft = 0x11C1;
            static constexpr std::uintptr_t ForwardSpeedDif = 0x11C8;
            static constexpr std::uintptr_t bWindingUpThrust = 0x11D0;
            static constexpr std::uintptr_t bThrusting = 0x11D1;
            static constexpr std::uintptr_t bLowFrictionLand = 0x11D2;
            static constexpr std::uintptr_t RotationState = 0x11D4;
            static constexpr std::uintptr_t bIsAccelerating = 0x11D8;
            static constexpr std::uintptr_t ForAnimMovementInputX = 0x11E0;
            static constexpr std::uintptr_t ForAnimMovementInputY = 0x11E8;
            static constexpr std::uintptr_t bInForceFall = 0x11F0;
            static constexpr std::uintptr_t LastFrameVelocity = 0x11F8;
            static constexpr std::uintptr_t bForAnimIsInInitialHover = 0x1210;
            static constexpr std::uintptr_t bDodgeLeftInto1 = 0x1211;
            static constexpr std::uintptr_t bDodgeLeftInto2 = 0x1212;
            static constexpr std::uintptr_t bDodgeRightInto1 = 0x1213;
            static constexpr std::uintptr_t bDodgeRightInto2 = 0x1214;
            static constexpr std::uintptr_t bCanEnterSlam = 0x1215;
            static constexpr std::uintptr_t bExitSoftLand = 0x1216;
            static constexpr std::uintptr_t FalseBlendTime = 0x1218;
            static constexpr std::uintptr_t LaterSpeedDiffMulti = 0x1220;
            static constexpr std::uintptr_t Cur_BlendIn = 0x1228;
            static constexpr std::uintptr_t Cur_foot_r = 0x122C;
            static constexpr std::uintptr_t Cur_foot_l = 0x1230;
            static constexpr std::uintptr_t Cur_BlendOut = 0x1234;
            static constexpr std::uintptr_t ExitBoostLeftRight = 0x1238;
            static constexpr std::uintptr_t bFP_IntoFlightToIntoFlightLoop = 0x1240;
            static constexpr std::uintptr_t bFP_IntoFlightToIntoFlightToHover = 0x1241;
            static constexpr std::uintptr_t bFP_ConduitToFlightLoop = 0x1242;
            static constexpr std::uintptr_t bFP_ExitFlight = 0x1243;
            static constexpr std::uintptr_t bFP_NotHovering = 0x1244;
            static constexpr std::uintptr_t bFP_DodgeReturnToConduit = 0x1245;
            static constexpr std::uintptr_t bFP_EnterFlightLoopToConduit = 0x1246;
            static constexpr std::uintptr_t bFP_ExitFlightToConduit = 0x1247;
            static constexpr std::uintptr_t bFP_ExitFlightToConduit2 = 0x1248;
            static constexpr std::uintptr_t bFP_ExitFlightToEnterFlightLoop = 0x1249;
            static constexpr std::uintptr_t bFP_SlamIntroToConduit = 0x124A;
            static constexpr std::uintptr_t FP_StrafeLR_Hover_SpeedBS = 0x1250;
            static constexpr std::uintptr_t FP_Speed_Hover_SpeedBS = 0x1258;
            static constexpr std::uintptr_t FP_StrafeLR_Hover_Pitch_Roll_BS = 0x1260;
            static constexpr std::uintptr_t FP_Speed_Hover_Pitch_Roll_BS = 0x1268;
            static constexpr std::uintptr_t ZSpeedDiff = 0x1270;
            static constexpr std::uintptr_t FPZSpeed = 0x1278;
            static constexpr std::uintptr_t GlideRollCombined = 0x1280;
            static constexpr std::uintptr_t GlidePitchAlpha = 0x1284;
            static constexpr std::uintptr_t RollAlpha = 0x1288;
            static constexpr std::uintptr_t bIsAscending = 0x128C;
            static constexpr std::uintptr_t bIsCrashing = 0x128D;
            static constexpr std::uintptr_t FlyingTagName = 0x1290;
            static constexpr std::uintptr_t OutOfFuelTagName = 0x1294;
            static constexpr std::uintptr_t LowFrictionLandingTagName = 0x1298;
            static constexpr std::uintptr_t DamageTagName = 0x129C;
            static constexpr std::uintptr_t SmashingThingsTagName = 0x12A0;
        };

        inline static constexpr std::array<PropertyInfo, 63> Properties{{
            {"bIsFlying", 0x1180, "BoolProperty"},
            {"FlyingPitch", 0x1188, "DoubleProperty"},
            {"FlyingRoll", 0x1190, "DoubleProperty"},
            {"bNoFuel", 0x1198, "BoolProperty"},
            {"bIsHovering", 0x1199, "BoolProperty"},
            {"YawOffset", 0x119C, "FloatProperty"},
            {"AimingPitch", 0x11A0, "FloatProperty"},
            {"LateralSpeedInterp", 0x11A8, "DoubleProperty"},
            {"ForwardSpeedInterp", 0x11B0, "DoubleProperty"},
            {"LateralSpeedDif", 0x11B8, "DoubleProperty"},
            {"bDodgeRight", 0x11C0, "BoolProperty"},
            {"bDodgeLeft", 0x11C1, "BoolProperty"},
            {"ForwardSpeedDif", 0x11C8, "DoubleProperty"},
            {"bWindingUpThrust", 0x11D0, "BoolProperty"},
            {"bThrusting", 0x11D1, "BoolProperty"},
            {"bLowFrictionLand", 0x11D2, "BoolProperty"},
            {"RotationState", 0x11D4, "FloatProperty"},
            {"bIsAccelerating", 0x11D8, "BoolProperty"},
            {"ForAnimMovementInputX", 0x11E0, "DoubleProperty"},
            {"ForAnimMovementInputY", 0x11E8, "DoubleProperty"},
            {"bInForceFall", 0x11F0, "BoolProperty"},
            {"LastFrameVelocity", 0x11F8, "StructProperty"},
            {"bForAnimIsInInitialHover", 0x1210, "BoolProperty"},
            {"bDodgeLeftInto1", 0x1211, "BoolProperty"},
            {"bDodgeLeftInto2", 0x1212, "BoolProperty"},
            {"bDodgeRightInto1", 0x1213, "BoolProperty"},
            {"bDodgeRightInto2", 0x1214, "BoolProperty"},
            {"bCanEnterSlam", 0x1215, "BoolProperty"},
            {"bExitSoftLand", 0x1216, "BoolProperty"},
            {"FalseBlendTime", 0x1218, "FloatProperty"},
            {"LaterSpeedDiffMulti", 0x1220, "DoubleProperty"},
            {"Cur_BlendIn", 0x1228, "FloatProperty"},
            {"Cur_foot_r", 0x122C, "FloatProperty"},
            {"Cur_foot_l", 0x1230, "FloatProperty"},
            {"Cur_BlendOut", 0x1234, "FloatProperty"},
            {"ExitBoostLeftRight", 0x1238, "DoubleProperty"},
            {"bFP_IntoFlightToIntoFlightLoop", 0x1240, "BoolProperty"},
            {"bFP_IntoFlightToIntoFlightToHover", 0x1241, "BoolProperty"},
            {"bFP_ConduitToFlightLoop", 0x1242, "BoolProperty"},
            {"bFP_ExitFlight", 0x1243, "BoolProperty"},
            {"bFP_NotHovering", 0x1244, "BoolProperty"},
            {"bFP_DodgeReturnToConduit", 0x1245, "BoolProperty"},
            {"bFP_EnterFlightLoopToConduit", 0x1246, "BoolProperty"},
            {"bFP_ExitFlightToConduit", 0x1247, "BoolProperty"},
            {"bFP_ExitFlightToConduit2", 0x1248, "BoolProperty"},
            {"bFP_ExitFlightToEnterFlightLoop", 0x1249, "BoolProperty"},
            {"bFP_SlamIntroToConduit", 0x124A, "BoolProperty"},
            {"FP_StrafeLR_Hover_SpeedBS", 0x1250, "DoubleProperty"},
            {"FP_Speed_Hover_SpeedBS", 0x1258, "DoubleProperty"},
            {"FP_StrafeLR_Hover_Pitch_Roll_BS", 0x1260, "DoubleProperty"},
            {"FP_Speed_Hover_Pitch_Roll_BS", 0x1268, "DoubleProperty"},
            {"ZSpeedDiff", 0x1270, "DoubleProperty"},
            {"FPZSpeed", 0x1278, "DoubleProperty"},
            {"GlideRollCombined", 0x1280, "FloatProperty"},
            {"GlidePitchAlpha", 0x1284, "FloatProperty"},
            {"RollAlpha", 0x1288, "FloatProperty"},
            {"bIsAscending", 0x128C, "BoolProperty"},
            {"bIsCrashing", 0x128D, "BoolProperty"},
            {"FlyingTagName", 0x1290, "StructProperty"},
            {"OutOfFuelTagName", 0x1294, "StructProperty"},
            {"LowFrictionLandingTagName", 0x1298, "StructProperty"},
            {"DamageTagName", 0x129C, "StructProperty"},
            {"SmashingThingsTagName", 0x12A0, "StructProperty"},
        }};
    };

    struct JetpackWeaponInterface
    {
        static constexpr std::string_view Name = "JetpackWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
