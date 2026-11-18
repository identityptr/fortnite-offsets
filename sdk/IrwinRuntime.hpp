#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::IrwinRuntime
{
    struct FortAIFaunaAnimInstance
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AverageSpeed = 0x4A8;
            static constexpr std::uintptr_t AverageSpeedTimeFrame = 0x4AC;
            static constexpr std::uintptr_t bHasValidAimTarget = 0x4B0;
            static constexpr std::uintptr_t AimTime = 0x4B4;
            static constexpr std::uintptr_t AimTargetLocation = 0x4B8;
            static constexpr std::uintptr_t bIsSurfaceSwimming = 0x4D0;
            static constexpr std::uintptr_t bIsMovingOnGround = 0x4D1;
            static constexpr std::uintptr_t bIsInTornado = 0x4D2;
            static constexpr std::uintptr_t LookAtAlpha = 0x4D4;
            static constexpr std::uintptr_t MaxDistanceToPlayerForLookAt = 0x4D8;
            static constexpr std::uintptr_t LookAtTooFarFromPlayerTimeOut = 0x4DC;
            static constexpr std::uintptr_t bDisableLookAtDuringMontage = 0x4E0;
            static constexpr std::uintptr_t DisableHeadTrackingCurveName = 0x4E4;
            static constexpr std::uintptr_t RidingAnimationData = 0x4E8;
            static constexpr std::uintptr_t bIsSlopeSliding = 0x4FC;
            static constexpr std::uintptr_t SlopeSlidingPitch = 0x500;
            static constexpr std::uintptr_t SlopeSlidingRoll = 0x504;
            static constexpr std::uintptr_t RidingMovePlayRate = 0x508;
            static constexpr std::uintptr_t bJustGotPlayer = 0x50C;
            static constexpr std::uintptr_t bIsBoosting = 0x50D;
            static constexpr std::uintptr_t bIsTurningInPlace = 0x50E;
            static constexpr std::uintptr_t TurnInPlaceRotationSpeed = 0x510;
            static constexpr std::uintptr_t TurnInPlaceAngleDelta = 0x514;
            static constexpr std::uintptr_t bIsMovingBackwards = 0x518;
            static constexpr std::uintptr_t RiderReferentialYaw = 0x51C;
            static constexpr std::uintptr_t BoostPlayRate = 0x520;
            static constexpr std::uintptr_t bIsTurnInPlaceAngleDeltaPositive = 0x524;
            static constexpr std::uintptr_t bPlayLandAdditive = 0x525;
            static constexpr std::uintptr_t BackwardVelocity = 0x528;
            static constexpr std::uintptr_t bShouldPlayStopBackwards = 0x52C;
            static constexpr std::uintptr_t SwimmingYaw = 0x530;
            static constexpr std::uintptr_t BackwardsPlayRate = 0x534;
            static constexpr std::uintptr_t BodyRoll = 0x538;
            static constexpr std::uintptr_t TurnAngleStored = 0x53C;
            static constexpr std::uintptr_t bWasTurningRight = 0x540;
            static constexpr std::uintptr_t footphase = 0x541;
            static constexpr std::uintptr_t bIsFootPhase_FeetInAir = 0x542;
            static constexpr std::uintptr_t bIsFootPhase_FrontFeetPlanted = 0x543;
            static constexpr std::uintptr_t bIsFootPhase_BackFeetPlanted = 0x544;
            static constexpr std::uintptr_t bIsFootPhase_LeftBackFeetForward = 0x545;
            static constexpr std::uintptr_t bIsFootPhase_RightBackFeetForward = 0x546;
            static constexpr std::uintptr_t bIsFootPhase_LeftPlantedRightPass = 0x547;
            static constexpr std::uintptr_t bIsFootPhase_RightPlantedLeftPass = 0x548;
            static constexpr std::uintptr_t SlipstreamTags = 0x550;
            static constexpr std::uintptr_t bIsInSlipstream = 0x570;
            static constexpr std::uintptr_t SkydivingTags = 0x578;
            static constexpr std::uintptr_t bMovementMode_Skydiving = 0x598;
            static constexpr std::uintptr_t SkytubingTags = 0x5A0;
            static constexpr std::uintptr_t bGameplay_Status_Skytubing = 0x5C0;
            static constexpr std::uintptr_t bIsAbducted = 0x5C1;
            static constexpr std::uintptr_t TractorBeamTags = 0x5C8;
            static constexpr std::uintptr_t bIsInTractorBeam = 0x5E8;
            static constexpr std::uintptr_t bIsFloating = 0x5E9;
            static constexpr std::uintptr_t JustGotPlayerInitialDelaySec = 0x5EC;
            static constexpr std::uintptr_t FallAsleepAnimDuration = 0x614;
            static constexpr std::uintptr_t WakeUpAnimDuration = 0x618;
            static constexpr std::uintptr_t FallAsleepToSleepingCrossfade = 0x61C;
            static constexpr std::uintptr_t WakeUpToIdleCrossfade = 0x620;
            static constexpr std::uintptr_t StateTransition_FallAsleepToSleeping = 0x624;
            static constexpr std::uintptr_t StateTransition_IdleToFallAsleep = 0x624;
            static constexpr std::uintptr_t StateTransition_SleepingToWakeUp = 0x624;
            static constexpr std::uintptr_t StateTransition_WakeUpToIdle = 0x624;
        };

        inline static constexpr std::array<PropertyInfo, 62> Properties{{
            {"AverageSpeed", 0x4A8, "FloatProperty"},
            {"AverageSpeedTimeFrame", 0x4AC, "FloatProperty"},
            {"bHasValidAimTarget", 0x4B0, "BoolProperty"},
            {"AimTime", 0x4B4, "FloatProperty"},
            {"AimTargetLocation", 0x4B8, "StructProperty"},
            {"bIsSurfaceSwimming", 0x4D0, "BoolProperty"},
            {"bIsMovingOnGround", 0x4D1, "BoolProperty"},
            {"bIsInTornado", 0x4D2, "BoolProperty"},
            {"LookAtAlpha", 0x4D4, "FloatProperty"},
            {"MaxDistanceToPlayerForLookAt", 0x4D8, "FloatProperty"},
            {"LookAtTooFarFromPlayerTimeOut", 0x4DC, "FloatProperty"},
            {"bDisableLookAtDuringMontage", 0x4E0, "BoolProperty"},
            {"DisableHeadTrackingCurveName", 0x4E4, "NameProperty"},
            {"RidingAnimationData", 0x4E8, "StructProperty"},
            {"bIsSlopeSliding", 0x4FC, "BoolProperty"},
            {"SlopeSlidingPitch", 0x500, "FloatProperty"},
            {"SlopeSlidingRoll", 0x504, "FloatProperty"},
            {"RidingMovePlayRate", 0x508, "FloatProperty"},
            {"bJustGotPlayer", 0x50C, "BoolProperty"},
            {"bIsBoosting", 0x50D, "BoolProperty"},
            {"bIsTurningInPlace", 0x50E, "BoolProperty"},
            {"TurnInPlaceRotationSpeed", 0x510, "FloatProperty"},
            {"TurnInPlaceAngleDelta", 0x514, "FloatProperty"},
            {"bIsMovingBackwards", 0x518, "BoolProperty"},
            {"RiderReferentialYaw", 0x51C, "FloatProperty"},
            {"BoostPlayRate", 0x520, "FloatProperty"},
            {"bIsTurnInPlaceAngleDeltaPositive", 0x524, "BoolProperty"},
            {"bPlayLandAdditive", 0x525, "BoolProperty"},
            {"BackwardVelocity", 0x528, "FloatProperty"},
            {"bShouldPlayStopBackwards", 0x52C, "BoolProperty"},
            {"SwimmingYaw", 0x530, "FloatProperty"},
            {"BackwardsPlayRate", 0x534, "FloatProperty"},
            {"BodyRoll", 0x538, "FloatProperty"},
            {"TurnAngleStored", 0x53C, "FloatProperty"},
            {"bWasTurningRight", 0x540, "BoolProperty"},
            {"footphase", 0x541, "EnumProperty"},
            {"bIsFootPhase_FeetInAir", 0x542, "BoolProperty"},
            {"bIsFootPhase_FrontFeetPlanted", 0x543, "BoolProperty"},
            {"bIsFootPhase_BackFeetPlanted", 0x544, "BoolProperty"},
            {"bIsFootPhase_LeftBackFeetForward", 0x545, "BoolProperty"},
            {"bIsFootPhase_RightBackFeetForward", 0x546, "BoolProperty"},
            {"bIsFootPhase_LeftPlantedRightPass", 0x547, "BoolProperty"},
            {"bIsFootPhase_RightPlantedLeftPass", 0x548, "BoolProperty"},
            {"SlipstreamTags", 0x550, "StructProperty"},
            {"bIsInSlipstream", 0x570, "BoolProperty"},
            {"SkydivingTags", 0x578, "StructProperty"},
            {"bMovementMode_Skydiving", 0x598, "BoolProperty"},
            {"SkytubingTags", 0x5A0, "StructProperty"},
            {"bGameplay_Status_Skytubing", 0x5C0, "BoolProperty"},
            {"bIsAbducted", 0x5C1, "BoolProperty"},
            {"TractorBeamTags", 0x5C8, "StructProperty"},
            {"bIsInTractorBeam", 0x5E8, "BoolProperty"},
            {"bIsFloating", 0x5E9, "BoolProperty"},
            {"JustGotPlayerInitialDelaySec", 0x5EC, "FloatProperty"},
            {"FallAsleepAnimDuration", 0x614, "FloatProperty"},
            {"WakeUpAnimDuration", 0x618, "FloatProperty"},
            {"FallAsleepToSleepingCrossfade", 0x61C, "FloatProperty"},
            {"WakeUpToIdleCrossfade", 0x620, "FloatProperty"},
            {"StateTransition_FallAsleepToSleeping", 0x624, "BoolProperty"},
            {"StateTransition_IdleToFallAsleep", 0x624, "BoolProperty"},
            {"StateTransition_SleepingToWakeUp", 0x624, "BoolProperty"},
            {"StateTransition_WakeUpToIdle", 0x624, "BoolProperty"},
        }};
    };

    struct FortAIFaunaAnimInstance_Burt
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance_Burt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIFaunaAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MovingPlayRate = 0x630;
            static constexpr std::uintptr_t LocomotionPoseAdditiveAlpha = 0x634;
            static constexpr std::uintptr_t bEnableHeadTiltUpAdditive = 0x638;
            static constexpr std::uintptr_t bTurnAngleIsNegative = 0x639;
            static constexpr std::uintptr_t DisableLocomotionAdditiveCurveName = 0x63C;
            static constexpr std::uintptr_t InterruptibleCurveName = 0x640;
            static constexpr std::uintptr_t bIsIdleShuffleTurn = 0x644;
            static constexpr std::uintptr_t IdleShuffleBodyBend = 0x648;
            static constexpr std::uintptr_t IdleShufflePlayRate = 0x64C;
            static constexpr std::uintptr_t bIdleShuffleTurnDirection = 0x650;
            static constexpr std::uintptr_t bIsMoving = 0x651;
            static constexpr std::uintptr_t bCanTransitionIdleToApex = 0x652;
            static constexpr std::uintptr_t bCanTransitionIdleToMoving = 0x653;
            static constexpr std::uintptr_t bCanTransitionMovingToIdle = 0x654;
            static constexpr std::uintptr_t bCanTransitionLandToIdle = 0x655;
            static constexpr std::uintptr_t bCanTransitionLandToJumpStart = 0x656;
            static constexpr std::uintptr_t bCanTransitionJumpStartToApex = 0x657;
            static constexpr std::uintptr_t bCanTransitionApexToFall = 0x658;
            static constexpr std::uintptr_t bCanTransitionFallToLand = 0x659;
            static constexpr std::uintptr_t bCanTransitionIdleTurnToIdle = 0x65A;
            static constexpr std::uintptr_t bCanTransitionLocomotionTurnToIdle = 0x65B;
            static constexpr std::uintptr_t bCanTransitionLocomotionTurnToMoving = 0x65C;
            static constexpr std::uintptr_t bCanTransitionIdleTurnToMoving = 0x65D;
            static constexpr std::uintptr_t bCanTransitionFallToMoving = 0x65E;
            static constexpr std::uintptr_t bCanTransitionFallToIdle = 0x65F;
            static constexpr std::uintptr_t MovingPlayRate_SpeedThreshold = 0x660;
            static constexpr std::uintptr_t MovingPlayRate_SlowSpeedDivisor = 0x664;
            static constexpr std::uintptr_t MovingPlayRate_FastSpeedDivisor = 0x668;
            static constexpr std::uintptr_t MovingPlayRate_MinClamp = 0x66C;
            static constexpr std::uintptr_t MovingPlayRate_MaxClamp = 0x670;
            static constexpr std::uintptr_t MovingPlayRate_InterpSpeed = 0x674;
            static constexpr std::uintptr_t LocomotionPoseAdditiveAlpha_InterpSpeed = 0x678;
            static constexpr std::uintptr_t EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier = 0x67C;
            static constexpr std::uintptr_t EnableHeadTiltUpAdditive_ModOperand = 0x680;
            static constexpr std::uintptr_t InterruptibleCurveValue_LargeThreshold = 0x684;
            static constexpr std::uintptr_t InterruptibleCurveValue_TurnAngleThreshold = 0x688;
            static constexpr std::uintptr_t Speed_MovingThreshold = 0x68C;
            static constexpr std::uintptr_t Speed_IdleThreshold = 0x690;
            static constexpr std::uintptr_t TurnAngle_LargeThreshold = 0x694;
            static constexpr std::uintptr_t Speed_RidingMovingThreshold = 0x698;
            static constexpr std::uintptr_t Speed_RidingIdleThreshold = 0x69C;
            static constexpr std::uintptr_t IdleShuffleBodyBendMultiplier = 0x6A0;
            static constexpr std::uintptr_t IdleShuffleTurnThreshold = 0x6A4;
            static constexpr std::uintptr_t IdleShuffleTurnDirectionThreshold = 0x6A8;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeA = 0x6AC;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeB = 0x6B0;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeA = 0x6B4;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeB = 0x6B8;
            static constexpr std::uintptr_t MinSpeedSlowRidingMovePlayRate = 0x6BC;
            static constexpr std::uintptr_t SpeedSlowDivisorRidingMovePlayRate = 0x6C0;
            static constexpr std::uintptr_t RidingMovePlayRate_Ranges = 0x6C4;
        };

        inline static constexpr std::array<PropertyInfo, 51> Properties{{
            {"MovingPlayRate", 0x630, "FloatProperty"},
            {"LocomotionPoseAdditiveAlpha", 0x634, "FloatProperty"},
            {"bEnableHeadTiltUpAdditive", 0x638, "BoolProperty"},
            {"bTurnAngleIsNegative", 0x639, "BoolProperty"},
            {"DisableLocomotionAdditiveCurveName", 0x63C, "NameProperty"},
            {"InterruptibleCurveName", 0x640, "NameProperty"},
            {"bIsIdleShuffleTurn", 0x644, "BoolProperty"},
            {"IdleShuffleBodyBend", 0x648, "FloatProperty"},
            {"IdleShufflePlayRate", 0x64C, "FloatProperty"},
            {"bIdleShuffleTurnDirection", 0x650, "BoolProperty"},
            {"bIsMoving", 0x651, "BoolProperty"},
            {"bCanTransitionIdleToApex", 0x652, "BoolProperty"},
            {"bCanTransitionIdleToMoving", 0x653, "BoolProperty"},
            {"bCanTransitionMovingToIdle", 0x654, "BoolProperty"},
            {"bCanTransitionLandToIdle", 0x655, "BoolProperty"},
            {"bCanTransitionLandToJumpStart", 0x656, "BoolProperty"},
            {"bCanTransitionJumpStartToApex", 0x657, "BoolProperty"},
            {"bCanTransitionApexToFall", 0x658, "BoolProperty"},
            {"bCanTransitionFallToLand", 0x659, "BoolProperty"},
            {"bCanTransitionIdleTurnToIdle", 0x65A, "BoolProperty"},
            {"bCanTransitionLocomotionTurnToIdle", 0x65B, "BoolProperty"},
            {"bCanTransitionLocomotionTurnToMoving", 0x65C, "BoolProperty"},
            {"bCanTransitionIdleTurnToMoving", 0x65D, "BoolProperty"},
            {"bCanTransitionFallToMoving", 0x65E, "BoolProperty"},
            {"bCanTransitionFallToIdle", 0x65F, "BoolProperty"},
            {"MovingPlayRate_SpeedThreshold", 0x660, "FloatProperty"},
            {"MovingPlayRate_SlowSpeedDivisor", 0x664, "FloatProperty"},
            {"MovingPlayRate_FastSpeedDivisor", 0x668, "FloatProperty"},
            {"MovingPlayRate_MinClamp", 0x66C, "FloatProperty"},
            {"MovingPlayRate_MaxClamp", 0x670, "FloatProperty"},
            {"MovingPlayRate_InterpSpeed", 0x674, "FloatProperty"},
            {"LocomotionPoseAdditiveAlpha_InterpSpeed", 0x678, "FloatProperty"},
            {"EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier", 0x67C, "FloatProperty"},
            {"EnableHeadTiltUpAdditive_ModOperand", 0x680, "FloatProperty"},
            {"InterruptibleCurveValue_LargeThreshold", 0x684, "FloatProperty"},
            {"InterruptibleCurveValue_TurnAngleThreshold", 0x688, "FloatProperty"},
            {"Speed_MovingThreshold", 0x68C, "FloatProperty"},
            {"Speed_IdleThreshold", 0x690, "FloatProperty"},
            {"TurnAngle_LargeThreshold", 0x694, "FloatProperty"},
            {"Speed_RidingMovingThreshold", 0x698, "FloatProperty"},
            {"Speed_RidingIdleThreshold", 0x69C, "FloatProperty"},
            {"IdleShuffleBodyBendMultiplier", 0x6A0, "FloatProperty"},
            {"IdleShuffleTurnThreshold", 0x6A4, "FloatProperty"},
            {"IdleShuffleTurnDirectionThreshold", 0x6A8, "FloatProperty"},
            {"IdleShufflePlayRateInRangeA", 0x6AC, "FloatProperty"},
            {"IdleShufflePlayRateInRangeB", 0x6B0, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeA", 0x6B4, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeB", 0x6B8, "FloatProperty"},
            {"MinSpeedSlowRidingMovePlayRate", 0x6BC, "FloatProperty"},
            {"SpeedSlowDivisorRidingMovePlayRate", 0x6C0, "FloatProperty"},
            {"RidingMovePlayRate_Ranges", 0x6C4, "StructProperty"},
        }};
    };

    struct FortAIFaunaAnimInstance_Burt_Hitchhiker
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance_Burt_Hitchhiker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIFaunaAnimInstance_Burt";
        struct Offsets
        {
            static constexpr std::uintptr_t IsFloating = 0x6E0;
            static constexpr std::uintptr_t IsInTractorBeam = 0x6E1;
            static constexpr std::uintptr_t IsHitchhiked = 0x6E2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IsFloating", 0x6E0, "BoolProperty"},
            {"IsInTractorBeam", 0x6E1, "BoolProperty"},
            {"IsHitchhiked", 0x6E2, "BoolProperty"},
        }};
    };

    struct FortAIFaunaAnimInstance_Crow
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance_Crow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIFaunaAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t WingFlapPlayRate = 0x630;
            static constexpr std::uintptr_t bIsDescending = 0x634;
            static constexpr std::uintptr_t bIsGliding = 0x635;
            static constexpr std::uintptr_t bIsFlying = 0x636;
            static constexpr std::uintptr_t bIsFlyingSlow = 0x637;
            static constexpr std::uintptr_t bIsLanding = 0x638;
            static constexpr std::uintptr_t WingFlapPlayRateInRangeA = 0x63C;
            static constexpr std::uintptr_t WingFlapPlayRateInRangeB = 0x640;
            static constexpr std::uintptr_t WingFlapPlayRateOutRangeA = 0x644;
            static constexpr std::uintptr_t WingFlapPlayRateOutRangeB = 0x648;
            static constexpr std::uintptr_t ZVelocityDescendingThreshold = 0x64C;
            static constexpr std::uintptr_t GlidingSpeedThreshold = 0x650;
            static constexpr std::uintptr_t FlyingSpeedThreshold = 0x654;
            static constexpr std::uintptr_t FlyingSlowSpeedThreshold = 0x658;
            static constexpr std::uintptr_t LandingSpeedThreshold = 0x65C;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"WingFlapPlayRate", 0x630, "FloatProperty"},
            {"bIsDescending", 0x634, "BoolProperty"},
            {"bIsGliding", 0x635, "BoolProperty"},
            {"bIsFlying", 0x636, "BoolProperty"},
            {"bIsFlyingSlow", 0x637, "BoolProperty"},
            {"bIsLanding", 0x638, "BoolProperty"},
            {"WingFlapPlayRateInRangeA", 0x63C, "FloatProperty"},
            {"WingFlapPlayRateInRangeB", 0x640, "FloatProperty"},
            {"WingFlapPlayRateOutRangeA", 0x644, "FloatProperty"},
            {"WingFlapPlayRateOutRangeB", 0x648, "FloatProperty"},
            {"ZVelocityDescendingThreshold", 0x64C, "FloatProperty"},
            {"GlidingSpeedThreshold", 0x650, "FloatProperty"},
            {"FlyingSpeedThreshold", 0x654, "FloatProperty"},
            {"FlyingSlowSpeedThreshold", 0x658, "FloatProperty"},
            {"LandingSpeedThreshold", 0x65C, "FloatProperty"},
        }};
    };

    struct FortAIFaunaAnimInstance_Grandma
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance_Grandma";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIFaunaAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AIPawn = 0x630;
            static constexpr std::uintptr_t MeshScale = 0x638;
            static constexpr std::uintptr_t bShouldPlayFullBodyInPlace = 0x63C;
            static constexpr std::uintptr_t BlinkAlpha = 0x640;
            static constexpr std::uintptr_t WalkRunPlayRate = 0x644;
            static constexpr std::uintptr_t LocomotionPoseAdditiveAlpha = 0x648;
            static constexpr std::uintptr_t bEnableSniffAdditive = 0x64C;
            static constexpr std::uintptr_t bEnableAlertAdditive = 0x64D;
            static constexpr std::uintptr_t bIdleStartTurn = 0x64E;
            static constexpr std::uintptr_t bLookAtAdditiveTurnAlpha = 0x64F;
            static constexpr std::uintptr_t bIsIdleShuffleTurn = 0x650;
            static constexpr std::uintptr_t IdleShuffleBodyBend = 0x654;
            static constexpr std::uintptr_t IdleShufflePlayRate = 0x658;
            static constexpr std::uintptr_t bIdleShuffleTurnDirection = 0x65C;
            static constexpr std::uintptr_t TurnInPlaceModulatedSpeed = 0x660;
            static constexpr std::uintptr_t MaxSpeedFullBodyInPlace = 0x664;
            static constexpr std::uintptr_t MinCurveValueFullBodyInPlace = 0x668;
            static constexpr std::uintptr_t LocomotionPoseAdditiveAlphaInterpRate = 0x66C;
            static constexpr std::uintptr_t SniffAdditiveFrequenceySeconds = 0x670;
            static constexpr std::uintptr_t AlertAdditiveFrequenceySeconds = 0x674;
            static constexpr std::uintptr_t PawnIDScale = 0x678;
            static constexpr std::uintptr_t ShouldPlayFullBodyInPlaceCurveName = 0x67C;
            static constexpr std::uintptr_t BlinkAlphaCurveName = 0x680;
            static constexpr std::uintptr_t IdleStartTurnInterruptibleThreshold = 0x684;
            static constexpr std::uintptr_t IdleShuffleBodyBendMultiplier = 0x688;
            static constexpr std::uintptr_t IdleShuffleTurnThreshold = 0x68C;
            static constexpr std::uintptr_t IdleShuffleTurnDirectionThreshold = 0x690;
            static constexpr std::uintptr_t LookAtAdditiveTurnAlphaThreshold = 0x694;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeA = 0x698;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeB = 0x69C;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeA = 0x6A0;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeB = 0x6A4;
            static constexpr std::uintptr_t TurnInPlaceModulatedSpeedFactor = 0x6A8;
            static constexpr std::uintptr_t bIsMovingOnGroundORIsSurfaceSwimming = 0x6AC;
            static constexpr std::uintptr_t bStateRule_DefaultJump_ToJumpApex = 0x6AD;
            static constexpr std::uintptr_t bStateRule_TurnIdle_Idle = 0x6AE;
            static constexpr std::uintptr_t bStateRule_TurnIdle_Moving = 0x6AF;
            static constexpr std::uintptr_t bStateRule_Moving_TurnIdle = 0x6B0;
            static constexpr std::uintptr_t bStateRule_TurnMoving_Moving = 0x6B1;
            static constexpr std::uintptr_t bStateRule_Moving_TurnMoving = 0x6B2;
            static constexpr std::uintptr_t bStateRule_Idle_Moving = 0x6B3;
            static constexpr std::uintptr_t bStateRule_Moving_Idle = 0x6B4;
            static constexpr std::uintptr_t bStateRule_JumpLand_Idle = 0x6B5;
            static constexpr std::uintptr_t bStateRule_JumpLand_Moving = 0x6B6;
            static constexpr std::uintptr_t bStateRule_JumpStart_JumpApex = 0x6B7;
            static constexpr std::uintptr_t bStateRule_Fall_Moving = 0x6B8;
            static constexpr std::uintptr_t bStateRule_Fall_Idle = 0x6B9;
            static constexpr std::uintptr_t bStateRule_SwimIdle_SwimLoco = 0x6BA;
            static constexpr std::uintptr_t bStateRule_SwimLoco_SwimIdle = 0x6BB;
            static constexpr std::uintptr_t bStateRule_SwimTurn_SwimIdle = 0x6BC;
            static constexpr std::uintptr_t bStateRule_SwimTurn_SwimLoco = 0x6BD;
            static constexpr std::uintptr_t bAnimRule_NegativeTurnAngle = 0x6BE;
            static constexpr std::uintptr_t InterruptibleMaxCheck = 0x6C0;
            static constexpr std::uintptr_t SpeedStopTransition = 0x6C4;
            static constexpr std::uintptr_t SpeedIdleMoveTransition = 0x6C8;
            static constexpr std::uintptr_t SpeedMovingTurnIdleTransition = 0x6CC;
            static constexpr std::uintptr_t SpeedToMoveMin = 0x6D0;
            static constexpr std::uintptr_t SpeedToMoveMinWhileRiding = 0x6D4;
            static constexpr std::uintptr_t SpeedToMoveMinWhileAcceleratingAndRiding = 0x6D8;
            static constexpr std::uintptr_t StateTimeFromEndThreshold = 0x6DC;
            static constexpr std::uintptr_t SpeedIdleStartTurnThreshold = 0x6E0;
            static constexpr std::uintptr_t SpeedFallMovingThreshold = 0x6E4;
        };

        inline static constexpr std::array<PropertyInfo, 62> Properties{{
            {"AIPawn", 0x630, "ObjectProperty"},
            {"MeshScale", 0x638, "FloatProperty"},
            {"bShouldPlayFullBodyInPlace", 0x63C, "BoolProperty"},
            {"BlinkAlpha", 0x640, "FloatProperty"},
            {"WalkRunPlayRate", 0x644, "FloatProperty"},
            {"LocomotionPoseAdditiveAlpha", 0x648, "FloatProperty"},
            {"bEnableSniffAdditive", 0x64C, "BoolProperty"},
            {"bEnableAlertAdditive", 0x64D, "BoolProperty"},
            {"bIdleStartTurn", 0x64E, "BoolProperty"},
            {"bLookAtAdditiveTurnAlpha", 0x64F, "BoolProperty"},
            {"bIsIdleShuffleTurn", 0x650, "BoolProperty"},
            {"IdleShuffleBodyBend", 0x654, "FloatProperty"},
            {"IdleShufflePlayRate", 0x658, "FloatProperty"},
            {"bIdleShuffleTurnDirection", 0x65C, "BoolProperty"},
            {"TurnInPlaceModulatedSpeed", 0x660, "FloatProperty"},
            {"MaxSpeedFullBodyInPlace", 0x664, "FloatProperty"},
            {"MinCurveValueFullBodyInPlace", 0x668, "FloatProperty"},
            {"LocomotionPoseAdditiveAlphaInterpRate", 0x66C, "FloatProperty"},
            {"SniffAdditiveFrequenceySeconds", 0x670, "IntProperty"},
            {"AlertAdditiveFrequenceySeconds", 0x674, "IntProperty"},
            {"PawnIDScale", 0x678, "IntProperty"},
            {"ShouldPlayFullBodyInPlaceCurveName", 0x67C, "NameProperty"},
            {"BlinkAlphaCurveName", 0x680, "NameProperty"},
            {"IdleStartTurnInterruptibleThreshold", 0x684, "FloatProperty"},
            {"IdleShuffleBodyBendMultiplier", 0x688, "FloatProperty"},
            {"IdleShuffleTurnThreshold", 0x68C, "FloatProperty"},
            {"IdleShuffleTurnDirectionThreshold", 0x690, "FloatProperty"},
            {"LookAtAdditiveTurnAlphaThreshold", 0x694, "FloatProperty"},
            {"IdleShufflePlayRateInRangeA", 0x698, "FloatProperty"},
            {"IdleShufflePlayRateInRangeB", 0x69C, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeA", 0x6A0, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeB", 0x6A4, "FloatProperty"},
            {"TurnInPlaceModulatedSpeedFactor", 0x6A8, "FloatProperty"},
            {"bIsMovingOnGroundORIsSurfaceSwimming", 0x6AC, "BoolProperty"},
            {"bStateRule_DefaultJump_ToJumpApex", 0x6AD, "BoolProperty"},
            {"bStateRule_TurnIdle_Idle", 0x6AE, "BoolProperty"},
            {"bStateRule_TurnIdle_Moving", 0x6AF, "BoolProperty"},
            {"bStateRule_Moving_TurnIdle", 0x6B0, "BoolProperty"},
            {"bStateRule_TurnMoving_Moving", 0x6B1, "BoolProperty"},
            {"bStateRule_Moving_TurnMoving", 0x6B2, "BoolProperty"},
            {"bStateRule_Idle_Moving", 0x6B3, "BoolProperty"},
            {"bStateRule_Moving_Idle", 0x6B4, "BoolProperty"},
            {"bStateRule_JumpLand_Idle", 0x6B5, "BoolProperty"},
            {"bStateRule_JumpLand_Moving", 0x6B6, "BoolProperty"},
            {"bStateRule_JumpStart_JumpApex", 0x6B7, "BoolProperty"},
            {"bStateRule_Fall_Moving", 0x6B8, "BoolProperty"},
            {"bStateRule_Fall_Idle", 0x6B9, "BoolProperty"},
            {"bStateRule_SwimIdle_SwimLoco", 0x6BA, "BoolProperty"},
            {"bStateRule_SwimLoco_SwimIdle", 0x6BB, "BoolProperty"},
            {"bStateRule_SwimTurn_SwimIdle", 0x6BC, "BoolProperty"},
            {"bStateRule_SwimTurn_SwimLoco", 0x6BD, "BoolProperty"},
            {"bAnimRule_NegativeTurnAngle", 0x6BE, "BoolProperty"},
            {"InterruptibleMaxCheck", 0x6C0, "FloatProperty"},
            {"SpeedStopTransition", 0x6C4, "FloatProperty"},
            {"SpeedIdleMoveTransition", 0x6C8, "FloatProperty"},
            {"SpeedMovingTurnIdleTransition", 0x6CC, "FloatProperty"},
            {"SpeedToMoveMin", 0x6D0, "FloatProperty"},
            {"SpeedToMoveMinWhileRiding", 0x6D4, "FloatProperty"},
            {"SpeedToMoveMinWhileAcceleratingAndRiding", 0x6D8, "FloatProperty"},
            {"StateTimeFromEndThreshold", 0x6DC, "FloatProperty"},
            {"SpeedIdleStartTurnThreshold", 0x6E0, "FloatProperty"},
            {"SpeedFallMovingThreshold", 0x6E4, "FloatProperty"},
        }};
    };

    struct FortAIFaunaAnimInstance_Grandma_Hitchhiker
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance_Grandma_Hitchhiker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIFaunaAnimInstance_Grandma";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsHitchhiked = 0x6F0;
            static constexpr std::uintptr_t bIsGrandmaSprinting = 0x6F1;
            static constexpr std::uintptr_t SprintCheckSpeed = 0x6F4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsHitchhiked", 0x6F0, "BoolProperty"},
            {"bIsGrandmaSprinting", 0x6F1, "BoolProperty"},
            {"SprintCheckSpeed", 0x6F4, "FloatProperty"},
        }};
    };

    struct FortAIFaunaAnimInstance_Nug
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance_Nug";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIFaunaAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBeingHeld = 0x630;
            static constexpr std::uintptr_t bIsBeingThrown = 0x631;
            static constexpr std::uintptr_t LowerBodyMaskAlpha = 0x634;
            static constexpr std::uintptr_t bShouldExitJump = 0x638;
            static constexpr std::uintptr_t MovingPlayRate = 0x63C;
            static constexpr std::uintptr_t bShouldLean = 0x640;
            static constexpr std::uintptr_t LeanDirection = 0x644;
            static constexpr std::uintptr_t bTurnAngleIsNegative = 0x648;
            static constexpr std::uintptr_t InterruptibleCurveName = 0x64C;
            static constexpr std::uintptr_t bIsIdleShuffleTurn = 0x650;
            static constexpr std::uintptr_t IdleShuffleBodyBend = 0x654;
            static constexpr std::uintptr_t IdleShufflePlayRate = 0x658;
            static constexpr std::uintptr_t bIdleShuffleTurnDirection = 0x65C;
            static constexpr std::uintptr_t bCanTransitionIdleToIdleTurn = 0x65D;
            static constexpr std::uintptr_t bCanTransitionIdleToLocomotionTurn = 0x65E;
            static constexpr std::uintptr_t bCanTransitionIdleToMoving = 0x65F;
            static constexpr std::uintptr_t bCanTransitionIdleToJumpApex = 0x660;
            static constexpr std::uintptr_t bCanTransitionMovingToIdle = 0x661;
            static constexpr std::uintptr_t bCanTransitionJumpStartToJumpApex = 0x662;
            static constexpr std::uintptr_t bCanTransitionJumpApexToJumpLoop = 0x663;
            static constexpr std::uintptr_t bCanTransitionLocomotionTurnToIdle = 0x664;
            static constexpr std::uintptr_t bCanTransitionLocomotionTurnToMoving = 0x665;
            static constexpr std::uintptr_t bCanTransitionIdleTurnToMoving = 0x666;
            static constexpr std::uintptr_t bCanTransitionIdleTurnToIdle = 0x667;
            static constexpr std::uintptr_t bCanTransitionJumpLoopToJumpLand = 0x668;
            static constexpr std::uintptr_t bCanTransitionIsBeingHeldToChickenChuck = 0x669;
            static constexpr std::uintptr_t ShouldExitJump_SpeedThreshold = 0x66C;
            static constexpr std::uintptr_t MovingPlayRate_SpeedThreshold = 0x670;
            static constexpr std::uintptr_t MovingPlayRate_SlowSpeedDivisor = 0x674;
            static constexpr std::uintptr_t MovingPlayRate_FastSpeedDivisor = 0x678;
            static constexpr std::uintptr_t MovingPlayRate_InterpSpeed = 0x67C;
            static constexpr std::uintptr_t MovingPlayRate_MinClamp = 0x680;
            static constexpr std::uintptr_t MovingPlayRate_MaxClamp = 0x684;
            static constexpr std::uintptr_t LeanDirection_SpeedThreshold = 0x688;
            static constexpr std::uintptr_t ShouldLean_SpeedThreshold = 0x68C;
            static constexpr std::uintptr_t InterruptibleCurveValue_LargeThreshold = 0x690;
            static constexpr std::uintptr_t Speed_MovingThreshold = 0x694;
            static constexpr std::uintptr_t Speed_IdleThreshold = 0x698;
            static constexpr std::uintptr_t IdleTurnTransition_SpeedThreshold = 0x69C;
            static constexpr std::uintptr_t LocomotionTurnTransition_SpeedThreshold = 0x6A0;
            static constexpr std::uintptr_t IdleShuffleBodyBendMultiplier = 0x6A4;
            static constexpr std::uintptr_t IdleShuffleTurnThreshold = 0x6A8;
            static constexpr std::uintptr_t IdleShuffleTurnDirectionThreshold = 0x6AC;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeA = 0x6B0;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeB = 0x6B4;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeA = 0x6B8;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeB = 0x6BC;
        };

        inline static constexpr std::array<PropertyInfo, 47> Properties{{
            {"bIsBeingHeld", 0x630, "BoolProperty"},
            {"bIsBeingThrown", 0x631, "BoolProperty"},
            {"LowerBodyMaskAlpha", 0x634, "FloatProperty"},
            {"bShouldExitJump", 0x638, "BoolProperty"},
            {"MovingPlayRate", 0x63C, "FloatProperty"},
            {"bShouldLean", 0x640, "BoolProperty"},
            {"LeanDirection", 0x644, "FloatProperty"},
            {"bTurnAngleIsNegative", 0x648, "BoolProperty"},
            {"InterruptibleCurveName", 0x64C, "NameProperty"},
            {"bIsIdleShuffleTurn", 0x650, "BoolProperty"},
            {"IdleShuffleBodyBend", 0x654, "FloatProperty"},
            {"IdleShufflePlayRate", 0x658, "FloatProperty"},
            {"bIdleShuffleTurnDirection", 0x65C, "BoolProperty"},
            {"bCanTransitionIdleToIdleTurn", 0x65D, "BoolProperty"},
            {"bCanTransitionIdleToLocomotionTurn", 0x65E, "BoolProperty"},
            {"bCanTransitionIdleToMoving", 0x65F, "BoolProperty"},
            {"bCanTransitionIdleToJumpApex", 0x660, "BoolProperty"},
            {"bCanTransitionMovingToIdle", 0x661, "BoolProperty"},
            {"bCanTransitionJumpStartToJumpApex", 0x662, "BoolProperty"},
            {"bCanTransitionJumpApexToJumpLoop", 0x663, "BoolProperty"},
            {"bCanTransitionLocomotionTurnToIdle", 0x664, "BoolProperty"},
            {"bCanTransitionLocomotionTurnToMoving", 0x665, "BoolProperty"},
            {"bCanTransitionIdleTurnToMoving", 0x666, "BoolProperty"},
            {"bCanTransitionIdleTurnToIdle", 0x667, "BoolProperty"},
            {"bCanTransitionJumpLoopToJumpLand", 0x668, "BoolProperty"},
            {"bCanTransitionIsBeingHeldToChickenChuck", 0x669, "BoolProperty"},
            {"ShouldExitJump_SpeedThreshold", 0x66C, "FloatProperty"},
            {"MovingPlayRate_SpeedThreshold", 0x670, "FloatProperty"},
            {"MovingPlayRate_SlowSpeedDivisor", 0x674, "FloatProperty"},
            {"MovingPlayRate_FastSpeedDivisor", 0x678, "FloatProperty"},
            {"MovingPlayRate_InterpSpeed", 0x67C, "FloatProperty"},
            {"MovingPlayRate_MinClamp", 0x680, "FloatProperty"},
            {"MovingPlayRate_MaxClamp", 0x684, "FloatProperty"},
            {"LeanDirection_SpeedThreshold", 0x688, "FloatProperty"},
            {"ShouldLean_SpeedThreshold", 0x68C, "FloatProperty"},
            {"InterruptibleCurveValue_LargeThreshold", 0x690, "FloatProperty"},
            {"Speed_MovingThreshold", 0x694, "FloatProperty"},
            {"Speed_IdleThreshold", 0x698, "FloatProperty"},
            {"IdleTurnTransition_SpeedThreshold", 0x69C, "FloatProperty"},
            {"LocomotionTurnTransition_SpeedThreshold", 0x6A0, "FloatProperty"},
            {"IdleShuffleBodyBendMultiplier", 0x6A4, "FloatProperty"},
            {"IdleShuffleTurnThreshold", 0x6A8, "FloatProperty"},
            {"IdleShuffleTurnDirectionThreshold", 0x6AC, "FloatProperty"},
            {"IdleShufflePlayRateInRangeA", 0x6B0, "FloatProperty"},
            {"IdleShufflePlayRateInRangeB", 0x6B4, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeA", 0x6B8, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeB", 0x6BC, "FloatProperty"},
        }};
    };

    struct FortAIFaunaAnimInstance_Nug_Hitchhiker
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance_Nug_Hitchhiker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIFaunaAnimInstance_Nug";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSwimming = 0x6C0;
            static constexpr std::uintptr_t bIsHitchhiked = 0x6C1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsSwimming", 0x6C0, "BoolProperty"},
            {"bIsHitchhiked", 0x6C1, "BoolProperty"},
        }};
    };

    struct FortAIFaunaAnimInstance_Robert
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance_Robert";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIFaunaAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AIPawn = 0x638;
            static constexpr std::uintptr_t bIdleStartTurn = 0x640;
            static constexpr std::uintptr_t bEnableHeadTiltDownAdditive = 0x641;
            static constexpr std::uintptr_t bIsFullBodyInPlace = 0x642;
            static constexpr std::uintptr_t LocomotionPoseAdditiveAlpha = 0x644;
            static constexpr std::uintptr_t bIsIdleShuffleTurn = 0x648;
            static constexpr std::uintptr_t IdleShuffleBodyBend = 0x64C;
            static constexpr std::uintptr_t IdleShufflePlayRate = 0x650;
            static constexpr std::uintptr_t bIdleShuffleTurnDirection = 0x654;
            static constexpr std::uintptr_t bLookAtAdditiveTurnAlpha = 0x655;
            static constexpr std::uintptr_t bTurnDirection = 0x656;
            static constexpr std::uintptr_t PawnIDScale = 0x658;
            static constexpr std::uintptr_t HeadTiltDownAdditiveFrequenceySeconds = 0x65C;
            static constexpr std::uintptr_t ForceFullBodyTransition = 0x660;
            static constexpr std::uintptr_t LocomotionPoseAdditiveAlphaInterpRate = 0x664;
            static constexpr std::uintptr_t IdleStartTurnInterruptibleThreshold = 0x668;
            static constexpr std::uintptr_t LookAtAlphaThreshold = 0x66C;
            static constexpr std::uintptr_t SpeedMovingThreshold = 0x670;
            static constexpr std::uintptr_t TurnDirectionThreshold = 0x674;
            static constexpr std::uintptr_t SprintStopThreshold = 0x678;
            static constexpr std::uintptr_t WalkStopThreshold = 0x67C;
            static constexpr std::uintptr_t BackwardStopThreshold = 0x680;
            static constexpr std::uintptr_t AdditiveInterruptibleThreshold = 0x684;
            static constexpr std::uintptr_t InterruptibleThreshold = 0x688;
            static constexpr std::uintptr_t TurningRightThreshold = 0x68C;
            static constexpr std::uintptr_t LeftFootStopThreshold = 0x690;
            static constexpr std::uintptr_t HipInterpSpeed_Fast = 0x694;
            static constexpr std::uintptr_t HipInterpSpeed_Slow = 0x698;
            static constexpr std::uintptr_t AdditiveHipAlphaTargeting_Constant = 0x69C;
            static constexpr std::uintptr_t BackwardLocomotionThreshold = 0x6A0;
            static constexpr std::uintptr_t LocomotionThreshold = 0x6A4;
            static constexpr std::uintptr_t PawnSpeedThreshold = 0x6A8;
            static constexpr std::uintptr_t LocomotionPlayRate_Fixed = 0x6AC;
            static constexpr std::uintptr_t BoostJumpingThreshold = 0x6B0;
            static constexpr std::uintptr_t BoostStartPosition_Jumping = 0x6B4;
            static constexpr std::uintptr_t BoostStartPosition_NotJumping = 0x6B8;
            static constexpr std::uintptr_t AdditiveBodyTurnSwimInRangeA = 0x6BC;
            static constexpr std::uintptr_t AdditiveBodyTurnSwimInRangeB = 0x6C0;
            static constexpr std::uintptr_t AdditiveBodyTurnSwimOutRangeA = 0x6C4;
            static constexpr std::uintptr_t AdditiveBodyTurnSwimOutRangeB = 0x6C8;
            static constexpr std::uintptr_t AdditiveBodyTurnNotSwimInRangeA = 0x6CC;
            static constexpr std::uintptr_t AdditiveBodyTurnNotSwimInRangeB = 0x6D0;
            static constexpr std::uintptr_t AdditiveBodyTurnNotSwimOutRangeA = 0x6D4;
            static constexpr std::uintptr_t AdditiveBodyTurnNotSwimOutRangeB = 0x6D8;
            static constexpr std::uintptr_t BodyTurnInterpSpeed_Accel = 0x6DC;
            static constexpr std::uintptr_t BodyTurnInterpSpeed_NotAccel = 0x6E0;
            static constexpr std::uintptr_t IdleAdditiveBodyTurnTarget_NotAccel = 0x6E4;
            static constexpr std::uintptr_t AdditiveLeanAlphaTargeting_Targeting = 0x6E8;
            static constexpr std::uintptr_t AdditiveLeanAlphaTargeting_NonTargeting = 0x6EC;
            static constexpr std::uintptr_t AdditiveLeanAlphaInterpSpeed = 0x6F0;
            static constexpr std::uintptr_t AdditiveHipStopAlphaTargeting_PlayerTargeting = 0x6F4;
            static constexpr std::uintptr_t HipInterpSpeed_PlayerTargeting = 0x6F8;
            static constexpr std::uintptr_t AdditiveHipStopAlphaTargeting_NotPlayerTargeting = 0x6FC;
            static constexpr std::uintptr_t HipInterpSpeed_NotPlayerTargeting = 0x700;
            static constexpr std::uintptr_t LocomotionSecondaryInRangeA = 0x704;
            static constexpr std::uintptr_t LocomotionSecondaryInRangeB = 0x708;
            static constexpr std::uintptr_t LocomotionSecondaryOutRangeA = 0x70C;
            static constexpr std::uintptr_t LocomotionSecondaryOutRangeB = 0x710;
            static constexpr std::uintptr_t SwimCameraRotationSecondaryInRangeA = 0x714;
            static constexpr std::uintptr_t SwimCameraRotationSecondaryInRangeB = 0x718;
            static constexpr std::uintptr_t SwimCameraRotationSecondaryOutRangeA = 0x71C;
            static constexpr std::uintptr_t SwimCameraRotationSecondaryOutRangeB = 0x720;
            static constexpr std::uintptr_t SwimRaptorRotationSecondaryInRangeA = 0x724;
            static constexpr std::uintptr_t SwimRaptorRotationSecondaryInRangeB = 0x728;
            static constexpr std::uintptr_t SwimRaptorRotationSecondaryOutRangeA = 0x72C;
            static constexpr std::uintptr_t SwimRaptorRotationSecondaryOutRangeB = 0x730;
            static constexpr std::uintptr_t IdleShuffleBodyBendMultiplier = 0x734;
            static constexpr std::uintptr_t IdleShuffleTurnThreshold = 0x738;
            static constexpr std::uintptr_t IdleShuffleTurnDirectionThreshold = 0x73C;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeA = 0x740;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeB = 0x744;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeA = 0x748;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeB = 0x74C;
            static constexpr std::uintptr_t bStateRule_Idle_Moving = 0x750;
            static constexpr std::uintptr_t bStateRule_Moving_Idle = 0x751;
            static constexpr std::uintptr_t bStateRule_Swimming_Fall = 0x752;
            static constexpr std::uintptr_t bStateRule_Land_Idle = 0x753;
            static constexpr std::uintptr_t bStateRule_Fall_Idle = 0x754;
            static constexpr std::uintptr_t bStateRule_Fall_Moving = 0x755;
            static constexpr std::uintptr_t bStateRule_SwimIdle_SwimLoco = 0x756;
            static constexpr std::uintptr_t bStateRule_IsTurnInPlace = 0x757;
            static constexpr std::uintptr_t bStateRule_IsSprintStop = 0x758;
            static constexpr std::uintptr_t bStateRule_IsStopBackwards = 0x759;
            static constexpr std::uintptr_t bStateRule_IsLocomotion = 0x75A;
            static constexpr std::uintptr_t bStateRule_IsFinishedTurnInPlace = 0x75B;
            static constexpr std::uintptr_t bStateRule_IsInterruptible = 0x75C;
            static constexpr std::uintptr_t bStateRule_IsIdleTurnRight = 0x75D;
            static constexpr std::uintptr_t bStateRule_IsLeftFootStop = 0x75E;
            static constexpr std::uintptr_t bStateRule_IsTurningRight = 0x75F;
            static constexpr std::uintptr_t bStateRule_IsAdditiveInterruptible = 0x760;
            static constexpr std::uintptr_t bStateRule_IsBackwardLocomotion = 0x761;
            static constexpr std::uintptr_t bStateRule_IsJumpIdleLand = 0x762;
            static constexpr std::uintptr_t bStateRule_IsIdleTurnToIdleTurn = 0x763;
            static constexpr std::uintptr_t bStateRule_BoostJumpToBoostLand = 0x764;
            static constexpr std::uintptr_t bStateRule_IsJumpToBoostJump = 0x765;
            static constexpr std::uintptr_t bStateRule_IsJumpToJumpLand = 0x766;
            static constexpr std::uintptr_t bStateRule_BoostFallLoopToBoostLand = 0x767;
            static constexpr std::uintptr_t bStateRule_IsLocomotionToIdle = 0x768;
            static constexpr std::uintptr_t bStateRule_IsExitLocomotionToIdle = 0x769;
            static constexpr std::uintptr_t bStateRule_IsLocomotionHoldToSecondary = 0x76A;
            static constexpr std::uintptr_t bStateRule_IsLocomotionSecondaryToHold = 0x76B;
            static constexpr std::uintptr_t bStateRule_IsJumpAdditive = 0x76C;
            static constexpr std::uintptr_t bStateRule_IsLandAdditiveToJump = 0x76D;
            static constexpr std::uintptr_t bStateRule_IsAllowSlopeSlide = 0x76E;
            static constexpr std::uintptr_t bStateRule_IsToJumpState = 0x76F;
            static constexpr std::uintptr_t bIsRidden = 0x770;
            static constexpr std::uintptr_t bIsStop = 0x771;
            static constexpr std::uintptr_t bIsWalkStop = 0x772;
            static constexpr std::uintptr_t AdditiveHipAlpha = 0x774;
            static constexpr std::uintptr_t AdditiveBodyAlpha = 0x778;
            static constexpr std::uintptr_t RiderAimYaw = 0x77C;
            static constexpr std::uintptr_t PlayerSlopePitch = 0x780;
            static constexpr std::uintptr_t bIsPlayerTargeting = 0x784;
            static constexpr std::uintptr_t AdditiveHipAlphaTargeting = 0x788;
            static constexpr std::uintptr_t HipInterpSpeed = 0x78C;
            static constexpr std::uintptr_t IdleAdditiveBodyTurnTarget = 0x790;
            static constexpr std::uintptr_t BodyTurnAlpha = 0x794;
            static constexpr std::uintptr_t BodyTurnInterpSpeed = 0x798;
            static constexpr std::uintptr_t LocomotionPlayRate = 0x79C;
            static constexpr std::uintptr_t AdditiveLeanAlpha = 0x7A0;
            static constexpr std::uintptr_t AdditiveLeanAlphaTargeting = 0x7A4;
            static constexpr std::uintptr_t BoostStartPosition = 0x7A8;
            static constexpr std::uintptr_t AdditiveHipStopAlpha = 0x7AC;
            static constexpr std::uintptr_t AdditiveHipStopAlphaTargeting = 0x7B0;
            static constexpr std::uintptr_t bIsAllowBoost = 0x7B4;
            static constexpr std::uintptr_t bIsSlopeWarpHack = 0x7B5;
            static constexpr std::uintptr_t LocomotionHeadSecondary = 0x7B8;
            static constexpr std::uintptr_t LocomotionTailSecondary = 0x7BC;
            static constexpr std::uintptr_t SwimCameraRotationSecondary = 0x7C0;
            static constexpr std::uintptr_t SwimRaptorRotationSecondary = 0x7C4;
            static constexpr std::uintptr_t SwimTurnYaw = 0x7C8;
            static constexpr std::uintptr_t SwimHeadYaw = 0x7CC;
            static constexpr std::uintptr_t bAnimRule_NegativeTurnAngle = 0x7D0;
            static constexpr std::uintptr_t bIsAccelerating2D = 0x7D1;
            static constexpr std::uintptr_t InterruptibleMaxCheck = 0x7D4;
            static constexpr std::uintptr_t SpeedStopTransition = 0x7D8;
            static constexpr std::uintptr_t SpeedIdleMoveTransition = 0x7DC;
            static constexpr std::uintptr_t SpeedToMoveMin = 0x7E0;
            static constexpr std::uintptr_t StateTimeFromEndThreshold = 0x7E4;
        };

        inline static constexpr std::array<PropertyInfo, 139> Properties{{
            {"AIPawn", 0x638, "ObjectProperty"},
            {"bIdleStartTurn", 0x640, "BoolProperty"},
            {"bEnableHeadTiltDownAdditive", 0x641, "BoolProperty"},
            {"bIsFullBodyInPlace", 0x642, "BoolProperty"},
            {"LocomotionPoseAdditiveAlpha", 0x644, "FloatProperty"},
            {"bIsIdleShuffleTurn", 0x648, "BoolProperty"},
            {"IdleShuffleBodyBend", 0x64C, "FloatProperty"},
            {"IdleShufflePlayRate", 0x650, "FloatProperty"},
            {"bIdleShuffleTurnDirection", 0x654, "BoolProperty"},
            {"bLookAtAdditiveTurnAlpha", 0x655, "BoolProperty"},
            {"bTurnDirection", 0x656, "BoolProperty"},
            {"PawnIDScale", 0x658, "IntProperty"},
            {"HeadTiltDownAdditiveFrequenceySeconds", 0x65C, "IntProperty"},
            {"ForceFullBodyTransition", 0x660, "FloatProperty"},
            {"LocomotionPoseAdditiveAlphaInterpRate", 0x664, "FloatProperty"},
            {"IdleStartTurnInterruptibleThreshold", 0x668, "FloatProperty"},
            {"LookAtAlphaThreshold", 0x66C, "FloatProperty"},
            {"SpeedMovingThreshold", 0x670, "FloatProperty"},
            {"TurnDirectionThreshold", 0x674, "FloatProperty"},
            {"SprintStopThreshold", 0x678, "FloatProperty"},
            {"WalkStopThreshold", 0x67C, "FloatProperty"},
            {"BackwardStopThreshold", 0x680, "FloatProperty"},
            {"AdditiveInterruptibleThreshold", 0x684, "FloatProperty"},
            {"InterruptibleThreshold", 0x688, "FloatProperty"},
            {"TurningRightThreshold", 0x68C, "FloatProperty"},
            {"LeftFootStopThreshold", 0x690, "FloatProperty"},
            {"HipInterpSpeed_Fast", 0x694, "FloatProperty"},
            {"HipInterpSpeed_Slow", 0x698, "FloatProperty"},
            {"AdditiveHipAlphaTargeting_Constant", 0x69C, "FloatProperty"},
            {"BackwardLocomotionThreshold", 0x6A0, "FloatProperty"},
            {"LocomotionThreshold", 0x6A4, "FloatProperty"},
            {"PawnSpeedThreshold", 0x6A8, "FloatProperty"},
            {"LocomotionPlayRate_Fixed", 0x6AC, "FloatProperty"},
            {"BoostJumpingThreshold", 0x6B0, "FloatProperty"},
            {"BoostStartPosition_Jumping", 0x6B4, "FloatProperty"},
            {"BoostStartPosition_NotJumping", 0x6B8, "FloatProperty"},
            {"AdditiveBodyTurnSwimInRangeA", 0x6BC, "FloatProperty"},
            {"AdditiveBodyTurnSwimInRangeB", 0x6C0, "FloatProperty"},
            {"AdditiveBodyTurnSwimOutRangeA", 0x6C4, "FloatProperty"},
            {"AdditiveBodyTurnSwimOutRangeB", 0x6C8, "FloatProperty"},
            {"AdditiveBodyTurnNotSwimInRangeA", 0x6CC, "FloatProperty"},
            {"AdditiveBodyTurnNotSwimInRangeB", 0x6D0, "FloatProperty"},
            {"AdditiveBodyTurnNotSwimOutRangeA", 0x6D4, "FloatProperty"},
            {"AdditiveBodyTurnNotSwimOutRangeB", 0x6D8, "FloatProperty"},
            {"BodyTurnInterpSpeed_Accel", 0x6DC, "FloatProperty"},
            {"BodyTurnInterpSpeed_NotAccel", 0x6E0, "FloatProperty"},
            {"IdleAdditiveBodyTurnTarget_NotAccel", 0x6E4, "FloatProperty"},
            {"AdditiveLeanAlphaTargeting_Targeting", 0x6E8, "FloatProperty"},
            {"AdditiveLeanAlphaTargeting_NonTargeting", 0x6EC, "FloatProperty"},
            {"AdditiveLeanAlphaInterpSpeed", 0x6F0, "FloatProperty"},
            {"AdditiveHipStopAlphaTargeting_PlayerTargeting", 0x6F4, "FloatProperty"},
            {"HipInterpSpeed_PlayerTargeting", 0x6F8, "FloatProperty"},
            {"AdditiveHipStopAlphaTargeting_NotPlayerTargeting", 0x6FC, "FloatProperty"},
            {"HipInterpSpeed_NotPlayerTargeting", 0x700, "FloatProperty"},
            {"LocomotionSecondaryInRangeA", 0x704, "FloatProperty"},
            {"LocomotionSecondaryInRangeB", 0x708, "FloatProperty"},
            {"LocomotionSecondaryOutRangeA", 0x70C, "FloatProperty"},
            {"LocomotionSecondaryOutRangeB", 0x710, "FloatProperty"},
            {"SwimCameraRotationSecondaryInRangeA", 0x714, "FloatProperty"},
            {"SwimCameraRotationSecondaryInRangeB", 0x718, "FloatProperty"},
            {"SwimCameraRotationSecondaryOutRangeA", 0x71C, "FloatProperty"},
            {"SwimCameraRotationSecondaryOutRangeB", 0x720, "FloatProperty"},
            {"SwimRaptorRotationSecondaryInRangeA", 0x724, "FloatProperty"},
            {"SwimRaptorRotationSecondaryInRangeB", 0x728, "FloatProperty"},
            {"SwimRaptorRotationSecondaryOutRangeA", 0x72C, "FloatProperty"},
            {"SwimRaptorRotationSecondaryOutRangeB", 0x730, "FloatProperty"},
            {"IdleShuffleBodyBendMultiplier", 0x734, "FloatProperty"},
            {"IdleShuffleTurnThreshold", 0x738, "FloatProperty"},
            {"IdleShuffleTurnDirectionThreshold", 0x73C, "FloatProperty"},
            {"IdleShufflePlayRateInRangeA", 0x740, "FloatProperty"},
            {"IdleShufflePlayRateInRangeB", 0x744, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeA", 0x748, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeB", 0x74C, "FloatProperty"},
            {"bStateRule_Idle_Moving", 0x750, "BoolProperty"},
            {"bStateRule_Moving_Idle", 0x751, "BoolProperty"},
            {"bStateRule_Swimming_Fall", 0x752, "BoolProperty"},
            {"bStateRule_Land_Idle", 0x753, "BoolProperty"},
            {"bStateRule_Fall_Idle", 0x754, "BoolProperty"},
            {"bStateRule_Fall_Moving", 0x755, "BoolProperty"},
            {"bStateRule_SwimIdle_SwimLoco", 0x756, "BoolProperty"},
            {"bStateRule_IsTurnInPlace", 0x757, "BoolProperty"},
            {"bStateRule_IsSprintStop", 0x758, "BoolProperty"},
            {"bStateRule_IsStopBackwards", 0x759, "BoolProperty"},
            {"bStateRule_IsLocomotion", 0x75A, "BoolProperty"},
            {"bStateRule_IsFinishedTurnInPlace", 0x75B, "BoolProperty"},
            {"bStateRule_IsInterruptible", 0x75C, "BoolProperty"},
            {"bStateRule_IsIdleTurnRight", 0x75D, "BoolProperty"},
            {"bStateRule_IsLeftFootStop", 0x75E, "BoolProperty"},
            {"bStateRule_IsTurningRight", 0x75F, "BoolProperty"},
            {"bStateRule_IsAdditiveInterruptible", 0x760, "BoolProperty"},
            {"bStateRule_IsBackwardLocomotion", 0x761, "BoolProperty"},
            {"bStateRule_IsJumpIdleLand", 0x762, "BoolProperty"},
            {"bStateRule_IsIdleTurnToIdleTurn", 0x763, "BoolProperty"},
            {"bStateRule_BoostJumpToBoostLand", 0x764, "BoolProperty"},
            {"bStateRule_IsJumpToBoostJump", 0x765, "BoolProperty"},
            {"bStateRule_IsJumpToJumpLand", 0x766, "BoolProperty"},
            {"bStateRule_BoostFallLoopToBoostLand", 0x767, "BoolProperty"},
            {"bStateRule_IsLocomotionToIdle", 0x768, "BoolProperty"},
            {"bStateRule_IsExitLocomotionToIdle", 0x769, "BoolProperty"},
            {"bStateRule_IsLocomotionHoldToSecondary", 0x76A, "BoolProperty"},
            {"bStateRule_IsLocomotionSecondaryToHold", 0x76B, "BoolProperty"},
            {"bStateRule_IsJumpAdditive", 0x76C, "BoolProperty"},
            {"bStateRule_IsLandAdditiveToJump", 0x76D, "BoolProperty"},
            {"bStateRule_IsAllowSlopeSlide", 0x76E, "BoolProperty"},
            {"bStateRule_IsToJumpState", 0x76F, "BoolProperty"},
            {"bIsRidden", 0x770, "BoolProperty"},
            {"bIsStop", 0x771, "BoolProperty"},
            {"bIsWalkStop", 0x772, "BoolProperty"},
            {"AdditiveHipAlpha", 0x774, "FloatProperty"},
            {"AdditiveBodyAlpha", 0x778, "FloatProperty"},
            {"RiderAimYaw", 0x77C, "FloatProperty"},
            {"PlayerSlopePitch", 0x780, "FloatProperty"},
            {"bIsPlayerTargeting", 0x784, "BoolProperty"},
            {"AdditiveHipAlphaTargeting", 0x788, "FloatProperty"},
            {"HipInterpSpeed", 0x78C, "FloatProperty"},
            {"IdleAdditiveBodyTurnTarget", 0x790, "FloatProperty"},
            {"BodyTurnAlpha", 0x794, "FloatProperty"},
            {"BodyTurnInterpSpeed", 0x798, "FloatProperty"},
            {"LocomotionPlayRate", 0x79C, "FloatProperty"},
            {"AdditiveLeanAlpha", 0x7A0, "FloatProperty"},
            {"AdditiveLeanAlphaTargeting", 0x7A4, "FloatProperty"},
            {"BoostStartPosition", 0x7A8, "FloatProperty"},
            {"AdditiveHipStopAlpha", 0x7AC, "FloatProperty"},
            {"AdditiveHipStopAlphaTargeting", 0x7B0, "FloatProperty"},
            {"bIsAllowBoost", 0x7B4, "BoolProperty"},
            {"bIsSlopeWarpHack", 0x7B5, "BoolProperty"},
            {"LocomotionHeadSecondary", 0x7B8, "FloatProperty"},
            {"LocomotionTailSecondary", 0x7BC, "FloatProperty"},
            {"SwimCameraRotationSecondary", 0x7C0, "FloatProperty"},
            {"SwimRaptorRotationSecondary", 0x7C4, "FloatProperty"},
            {"SwimTurnYaw", 0x7C8, "FloatProperty"},
            {"SwimHeadYaw", 0x7CC, "FloatProperty"},
            {"bAnimRule_NegativeTurnAngle", 0x7D0, "BoolProperty"},
            {"bIsAccelerating2D", 0x7D1, "BoolProperty"},
            {"InterruptibleMaxCheck", 0x7D4, "FloatProperty"},
            {"SpeedStopTransition", 0x7D8, "FloatProperty"},
            {"SpeedIdleMoveTransition", 0x7DC, "FloatProperty"},
            {"SpeedToMoveMin", 0x7E0, "FloatProperty"},
            {"StateTimeFromEndThreshold", 0x7E4, "FloatProperty"},
        }};
    };

    struct FortAIFaunaAnimInstance_Smackie
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance_Smackie";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIFaunaAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsIdleShuffleTurn = 0x630;
            static constexpr std::uintptr_t IdleShuffleBodyBend = 0x634;
            static constexpr std::uintptr_t IdleShufflePlayRate = 0x638;
            static constexpr std::uintptr_t bIdleShuffleTurnDirection = 0x63C;
            static constexpr std::uintptr_t bCanTransitionIdleToHop = 0x63D;
            static constexpr std::uintptr_t bCanTransitionHopToIdle = 0x63E;
            static constexpr std::uintptr_t bCanTransitionFallToIdle = 0x63F;
            static constexpr std::uintptr_t bCanTransitionFallToHop = 0x640;
            static constexpr std::uintptr_t SpeedThreshold = 0x644;
            static constexpr std::uintptr_t IdleShuffleBodyBendMultiplier = 0x648;
            static constexpr std::uintptr_t IdleShuffleTurnThreshold = 0x64C;
            static constexpr std::uintptr_t IdleShuffleTurnDirectionThreshold = 0x650;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeA = 0x654;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeB = 0x658;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeA = 0x65C;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeB = 0x660;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bIsIdleShuffleTurn", 0x630, "BoolProperty"},
            {"IdleShuffleBodyBend", 0x634, "FloatProperty"},
            {"IdleShufflePlayRate", 0x638, "FloatProperty"},
            {"bIdleShuffleTurnDirection", 0x63C, "BoolProperty"},
            {"bCanTransitionIdleToHop", 0x63D, "BoolProperty"},
            {"bCanTransitionHopToIdle", 0x63E, "BoolProperty"},
            {"bCanTransitionFallToIdle", 0x63F, "BoolProperty"},
            {"bCanTransitionFallToHop", 0x640, "BoolProperty"},
            {"SpeedThreshold", 0x644, "FloatProperty"},
            {"IdleShuffleBodyBendMultiplier", 0x648, "FloatProperty"},
            {"IdleShuffleTurnThreshold", 0x64C, "FloatProperty"},
            {"IdleShuffleTurnDirectionThreshold", 0x650, "FloatProperty"},
            {"IdleShufflePlayRateInRangeA", 0x654, "FloatProperty"},
            {"IdleShufflePlayRateInRangeB", 0x658, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeA", 0x65C, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeB", 0x660, "FloatProperty"},
        }};
    };

    struct FortAIFaunaLayerAnimInstance
    {
        static constexpr std::string_view Name = "FortAIFaunaLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MainAnimBP = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MainAnimBP", 0x350, "ObjectProperty"},
        }};
    };

}
