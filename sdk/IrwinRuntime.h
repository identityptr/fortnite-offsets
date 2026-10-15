/**
 * decamp dumper generated SDK
 * Package: /Script/IrwinRuntime
 */
#pragma once
#include "Basic.h"

// /Script/IrwinRuntime.RidingAnimationData
// Kind: ScriptStruct; super: none
struct FRidingAnimationData
{
public:
    std::uint8_t bIsRidden; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurningInPlace; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSprinting; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBeingPetted; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMovingBackwards; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float TurnInPlaceRotationSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TurnInPlaceAngleDelta; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RiderReferentialYaw; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRidingAnimationData, bIsRidden) == 0, "Offset mismatch for FRidingAnimationData::bIsRidden");
static_assert(offsetof(FRidingAnimationData, bIsTurningInPlace) == 1, "Offset mismatch for FRidingAnimationData::bIsTurningInPlace");
static_assert(offsetof(FRidingAnimationData, bIsSprinting) == 2, "Offset mismatch for FRidingAnimationData::bIsSprinting");
static_assert(offsetof(FRidingAnimationData, bIsBeingPetted) == 3, "Offset mismatch for FRidingAnimationData::bIsBeingPetted");
static_assert(offsetof(FRidingAnimationData, bIsMovingBackwards) == 4, "Offset mismatch for FRidingAnimationData::bIsMovingBackwards");
static_assert(offsetof(FRidingAnimationData, TurnInPlaceRotationSpeed) == 8, "Offset mismatch for FRidingAnimationData::TurnInPlaceRotationSpeed");
static_assert(offsetof(FRidingAnimationData, TurnInPlaceAngleDelta) == 12, "Offset mismatch for FRidingAnimationData::TurnInPlaceAngleDelta");
static_assert(offsetof(FRidingAnimationData, RiderReferentialYaw) == 16, "Offset mismatch for FRidingAnimationData::RiderReferentialYaw");

// /Script/IrwinRuntime.FortAIFaunaAnimInstance
// Kind: Class; super: FortAIAnimInstance
class UFortAIFaunaAnimInstance
{
public:
    std::uint8_t Pad_0000[0x498]; // 0x0000
    float AverageSpeed; // 0x0498 (Size: 0x4, Type: FloatProperty)
    float AverageSpeedTimeFrame; // 0x049C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasValidAimTarget; // 0x04A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x04A1
    float AimTime; // 0x04A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AimTargetLocation[0x18]; // 0x04A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsSurfaceSwimming; // 0x04C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMovingOnGround; // 0x04C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInTornado; // 0x04C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x04C3
    float LookAtAlpha; // 0x04C4 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceToPlayerForLookAt; // 0x04C8 (Size: 0x4, Type: FloatProperty)
    float LookAtTooFarFromPlayerTimeOut; // 0x04CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableLookAtDuringMontage; // 0x04D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x04D1
    std::uint8_t DisableHeadTrackingCurveName[0x4]; // 0x04D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t RidingAnimationData[0x14]; // 0x04D8 (Size: 0x14, Type: StructProperty)
    std::uint8_t bIsSlopeSliding; // 0x04EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x04ED
    float SlopeSlidingPitch; // 0x04F0 (Size: 0x4, Type: FloatProperty)
    float SlopeSlidingRoll; // 0x04F4 (Size: 0x4, Type: FloatProperty)
    float RidingMovePlayRate; // 0x04F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bJustGotPlayer; // 0x04FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting; // 0x04FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurningInPlace; // 0x04FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x1]; // 0x04FF
    float TurnInPlaceRotationSpeed; // 0x0500 (Size: 0x4, Type: FloatProperty)
    float TurnInPlaceAngleDelta; // 0x0504 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsMovingBackwards; // 0x0508 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0509
    float RiderReferentialYaw; // 0x050C (Size: 0x4, Type: FloatProperty)
    float BoostPlayRate; // 0x0510 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsTurnInPlaceAngleDeltaPositive; // 0x0514 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayLandAdditive; // 0x0515 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x0516
    float BackwardVelocity; // 0x0518 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldPlayStopBackwards; // 0x051C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x051D
    float SwimmingYaw; // 0x0520 (Size: 0x4, Type: FloatProperty)
    float BackwardsPlayRate; // 0x0524 (Size: 0x4, Type: FloatProperty)
    float BodyRoll; // 0x0528 (Size: 0x4, Type: FloatProperty)
    float TurnAngleStored; // 0x052C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWasTurningRight; // 0x0530 (Size: 0x1, Type: BoolProperty)
    std::uint8_t footphase; // 0x0531 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsFootPhase_FeetInAir; // 0x0532 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_FrontFeetPlanted; // 0x0533 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_BackFeetPlanted; // 0x0534 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_LeftBackFeetForward; // 0x0535 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_RightBackFeetForward; // 0x0536 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_LeftPlantedRightPass; // 0x0537 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_RightPlantedLeftPass; // 0x0538 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x7]; // 0x0539
    std::uint8_t SlipstreamTags[0x20]; // 0x0540 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsInSlipstream; // 0x0560 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x7]; // 0x0561
    std::uint8_t SkydivingTags[0x20]; // 0x0568 (Size: 0x20, Type: StructProperty)
    std::uint8_t bMovementMode_Skydiving; // 0x0588 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x7]; // 0x0589
    std::uint8_t SkytubingTags[0x20]; // 0x0590 (Size: 0x20, Type: StructProperty)
    std::uint8_t bGameplay_Status_Skytubing; // 0x05B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAbducted; // 0x05B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x6]; // 0x05B2
    std::uint8_t TractorBeamTags[0x20]; // 0x05B8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsInTractorBeam; // 0x05D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFloating; // 0x05D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x2]; // 0x05DA
    float JustGotPlayerInitialDelaySec; // 0x05DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000E[0x1C]; // 0x05E0
    float FallAsleepAnimDuration; // 0x05FC (Size: 0x4, Type: FloatProperty)
    float WakeUpAnimDuration; // 0x0600 (Size: 0x4, Type: FloatProperty)
    float FallAsleepToSleepingCrossfade; // 0x0604 (Size: 0x4, Type: FloatProperty)
    float WakeUpToIdleCrossfade; // 0x0608 (Size: 0x4, Type: FloatProperty)
    std::uint8_t StateTransition_FallAsleepToSleeping; // 0x060C (Size: 0x1, Type: BoolProperty)
    // 0x060C BoolProperty StateTransition_IdleToFallAsleep (shared storage)
    // 0x060C BoolProperty StateTransition_SleepingToWakeUp (shared storage)
    // 0x060C BoolProperty StateTransition_WakeUpToIdle (shared storage)
};

static_assert(offsetof(UFortAIFaunaAnimInstance, AverageSpeed) == 1176, "Offset mismatch for UFortAIFaunaAnimInstance::AverageSpeed");
static_assert(offsetof(UFortAIFaunaAnimInstance, AverageSpeedTimeFrame) == 1180, "Offset mismatch for UFortAIFaunaAnimInstance::AverageSpeedTimeFrame");
static_assert(offsetof(UFortAIFaunaAnimInstance, bHasValidAimTarget) == 1184, "Offset mismatch for UFortAIFaunaAnimInstance::bHasValidAimTarget");
static_assert(offsetof(UFortAIFaunaAnimInstance, AimTime) == 1188, "Offset mismatch for UFortAIFaunaAnimInstance::AimTime");
static_assert(offsetof(UFortAIFaunaAnimInstance, AimTargetLocation) == 1192, "Offset mismatch for UFortAIFaunaAnimInstance::AimTargetLocation");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsSurfaceSwimming) == 1216, "Offset mismatch for UFortAIFaunaAnimInstance::bIsSurfaceSwimming");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsMovingOnGround) == 1217, "Offset mismatch for UFortAIFaunaAnimInstance::bIsMovingOnGround");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsInTornado) == 1218, "Offset mismatch for UFortAIFaunaAnimInstance::bIsInTornado");
static_assert(offsetof(UFortAIFaunaAnimInstance, LookAtAlpha) == 1220, "Offset mismatch for UFortAIFaunaAnimInstance::LookAtAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance, MaxDistanceToPlayerForLookAt) == 1224, "Offset mismatch for UFortAIFaunaAnimInstance::MaxDistanceToPlayerForLookAt");
static_assert(offsetof(UFortAIFaunaAnimInstance, LookAtTooFarFromPlayerTimeOut) == 1228, "Offset mismatch for UFortAIFaunaAnimInstance::LookAtTooFarFromPlayerTimeOut");
static_assert(offsetof(UFortAIFaunaAnimInstance, bDisableLookAtDuringMontage) == 1232, "Offset mismatch for UFortAIFaunaAnimInstance::bDisableLookAtDuringMontage");
static_assert(offsetof(UFortAIFaunaAnimInstance, DisableHeadTrackingCurveName) == 1236, "Offset mismatch for UFortAIFaunaAnimInstance::DisableHeadTrackingCurveName");
static_assert(offsetof(UFortAIFaunaAnimInstance, RidingAnimationData) == 1240, "Offset mismatch for UFortAIFaunaAnimInstance::RidingAnimationData");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsSlopeSliding) == 1260, "Offset mismatch for UFortAIFaunaAnimInstance::bIsSlopeSliding");
static_assert(offsetof(UFortAIFaunaAnimInstance, SlopeSlidingPitch) == 1264, "Offset mismatch for UFortAIFaunaAnimInstance::SlopeSlidingPitch");
static_assert(offsetof(UFortAIFaunaAnimInstance, SlopeSlidingRoll) == 1268, "Offset mismatch for UFortAIFaunaAnimInstance::SlopeSlidingRoll");
static_assert(offsetof(UFortAIFaunaAnimInstance, RidingMovePlayRate) == 1272, "Offset mismatch for UFortAIFaunaAnimInstance::RidingMovePlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance, bJustGotPlayer) == 1276, "Offset mismatch for UFortAIFaunaAnimInstance::bJustGotPlayer");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsBoosting) == 1277, "Offset mismatch for UFortAIFaunaAnimInstance::bIsBoosting");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsTurningInPlace) == 1278, "Offset mismatch for UFortAIFaunaAnimInstance::bIsTurningInPlace");
static_assert(offsetof(UFortAIFaunaAnimInstance, TurnInPlaceRotationSpeed) == 1280, "Offset mismatch for UFortAIFaunaAnimInstance::TurnInPlaceRotationSpeed");
static_assert(offsetof(UFortAIFaunaAnimInstance, TurnInPlaceAngleDelta) == 1284, "Offset mismatch for UFortAIFaunaAnimInstance::TurnInPlaceAngleDelta");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsMovingBackwards) == 1288, "Offset mismatch for UFortAIFaunaAnimInstance::bIsMovingBackwards");
static_assert(offsetof(UFortAIFaunaAnimInstance, RiderReferentialYaw) == 1292, "Offset mismatch for UFortAIFaunaAnimInstance::RiderReferentialYaw");
static_assert(offsetof(UFortAIFaunaAnimInstance, BoostPlayRate) == 1296, "Offset mismatch for UFortAIFaunaAnimInstance::BoostPlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsTurnInPlaceAngleDeltaPositive) == 1300, "Offset mismatch for UFortAIFaunaAnimInstance::bIsTurnInPlaceAngleDeltaPositive");
static_assert(offsetof(UFortAIFaunaAnimInstance, bPlayLandAdditive) == 1301, "Offset mismatch for UFortAIFaunaAnimInstance::bPlayLandAdditive");
static_assert(offsetof(UFortAIFaunaAnimInstance, BackwardVelocity) == 1304, "Offset mismatch for UFortAIFaunaAnimInstance::BackwardVelocity");
static_assert(offsetof(UFortAIFaunaAnimInstance, bShouldPlayStopBackwards) == 1308, "Offset mismatch for UFortAIFaunaAnimInstance::bShouldPlayStopBackwards");
static_assert(offsetof(UFortAIFaunaAnimInstance, SwimmingYaw) == 1312, "Offset mismatch for UFortAIFaunaAnimInstance::SwimmingYaw");
static_assert(offsetof(UFortAIFaunaAnimInstance, BackwardsPlayRate) == 1316, "Offset mismatch for UFortAIFaunaAnimInstance::BackwardsPlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance, BodyRoll) == 1320, "Offset mismatch for UFortAIFaunaAnimInstance::BodyRoll");
static_assert(offsetof(UFortAIFaunaAnimInstance, TurnAngleStored) == 1324, "Offset mismatch for UFortAIFaunaAnimInstance::TurnAngleStored");
static_assert(offsetof(UFortAIFaunaAnimInstance, bWasTurningRight) == 1328, "Offset mismatch for UFortAIFaunaAnimInstance::bWasTurningRight");
static_assert(offsetof(UFortAIFaunaAnimInstance, footphase) == 1329, "Offset mismatch for UFortAIFaunaAnimInstance::footphase");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_FeetInAir) == 1330, "Offset mismatch for UFortAIFaunaAnimInstance::bIsFootPhase_FeetInAir");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_FrontFeetPlanted) == 1331, "Offset mismatch for UFortAIFaunaAnimInstance::bIsFootPhase_FrontFeetPlanted");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_BackFeetPlanted) == 1332, "Offset mismatch for UFortAIFaunaAnimInstance::bIsFootPhase_BackFeetPlanted");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_LeftBackFeetForward) == 1333, "Offset mismatch for UFortAIFaunaAnimInstance::bIsFootPhase_LeftBackFeetForward");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_RightBackFeetForward) == 1334, "Offset mismatch for UFortAIFaunaAnimInstance::bIsFootPhase_RightBackFeetForward");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_LeftPlantedRightPass) == 1335, "Offset mismatch for UFortAIFaunaAnimInstance::bIsFootPhase_LeftPlantedRightPass");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFootPhase_RightPlantedLeftPass) == 1336, "Offset mismatch for UFortAIFaunaAnimInstance::bIsFootPhase_RightPlantedLeftPass");
static_assert(offsetof(UFortAIFaunaAnimInstance, SlipstreamTags) == 1344, "Offset mismatch for UFortAIFaunaAnimInstance::SlipstreamTags");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsInSlipstream) == 1376, "Offset mismatch for UFortAIFaunaAnimInstance::bIsInSlipstream");
static_assert(offsetof(UFortAIFaunaAnimInstance, SkydivingTags) == 1384, "Offset mismatch for UFortAIFaunaAnimInstance::SkydivingTags");
static_assert(offsetof(UFortAIFaunaAnimInstance, bMovementMode_Skydiving) == 1416, "Offset mismatch for UFortAIFaunaAnimInstance::bMovementMode_Skydiving");
static_assert(offsetof(UFortAIFaunaAnimInstance, SkytubingTags) == 1424, "Offset mismatch for UFortAIFaunaAnimInstance::SkytubingTags");
static_assert(offsetof(UFortAIFaunaAnimInstance, bGameplay_Status_Skytubing) == 1456, "Offset mismatch for UFortAIFaunaAnimInstance::bGameplay_Status_Skytubing");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsAbducted) == 1457, "Offset mismatch for UFortAIFaunaAnimInstance::bIsAbducted");
static_assert(offsetof(UFortAIFaunaAnimInstance, TractorBeamTags) == 1464, "Offset mismatch for UFortAIFaunaAnimInstance::TractorBeamTags");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsInTractorBeam) == 1496, "Offset mismatch for UFortAIFaunaAnimInstance::bIsInTractorBeam");
static_assert(offsetof(UFortAIFaunaAnimInstance, bIsFloating) == 1497, "Offset mismatch for UFortAIFaunaAnimInstance::bIsFloating");
static_assert(offsetof(UFortAIFaunaAnimInstance, JustGotPlayerInitialDelaySec) == 1500, "Offset mismatch for UFortAIFaunaAnimInstance::JustGotPlayerInitialDelaySec");
static_assert(offsetof(UFortAIFaunaAnimInstance, FallAsleepAnimDuration) == 1532, "Offset mismatch for UFortAIFaunaAnimInstance::FallAsleepAnimDuration");
static_assert(offsetof(UFortAIFaunaAnimInstance, WakeUpAnimDuration) == 1536, "Offset mismatch for UFortAIFaunaAnimInstance::WakeUpAnimDuration");
static_assert(offsetof(UFortAIFaunaAnimInstance, FallAsleepToSleepingCrossfade) == 1540, "Offset mismatch for UFortAIFaunaAnimInstance::FallAsleepToSleepingCrossfade");
static_assert(offsetof(UFortAIFaunaAnimInstance, WakeUpToIdleCrossfade) == 1544, "Offset mismatch for UFortAIFaunaAnimInstance::WakeUpToIdleCrossfade");
static_assert(offsetof(UFortAIFaunaAnimInstance, StateTransition_FallAsleepToSleeping) == 1548, "Offset mismatch for UFortAIFaunaAnimInstance::StateTransition_FallAsleepToSleeping");

// /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt
// Kind: Class; super: FortAIFaunaAnimInstance
class UFortAIFaunaAnimInstance_Burt
{
public:
    std::uint8_t Pad_0000[0x610]; // 0x0000
    float MovingPlayRate; // 0x0610 (Size: 0x4, Type: FloatProperty)
    float LocomotionPoseAdditiveAlpha; // 0x0614 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableHeadTiltUpAdditive; // 0x0618 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurnAngleIsNegative; // 0x0619 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x061A
    std::uint8_t DisableLocomotionAdditiveCurveName[0x4]; // 0x061C (Size: 0x4, Type: NameProperty)
    std::uint8_t InterruptibleCurveName[0x4]; // 0x0620 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsIdleShuffleTurn; // 0x0624 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0625
    float IdleShuffleBodyBend; // 0x0628 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRate; // 0x062C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIdleShuffleTurnDirection; // 0x0630 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving; // 0x0631 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleToApex; // 0x0632 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleToMoving; // 0x0633 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionMovingToIdle; // 0x0634 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionLandToIdle; // 0x0635 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionLandToJumpStart; // 0x0636 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionJumpStartToApex; // 0x0637 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionApexToFall; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionFallToLand; // 0x0639 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleTurnToIdle; // 0x063A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionLocomotionTurnToIdle; // 0x063B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionLocomotionTurnToMoving; // 0x063C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleTurnToMoving; // 0x063D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionFallToMoving; // 0x063E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionFallToIdle; // 0x063F (Size: 0x1, Type: BoolProperty)
    float MovingPlayRate_SpeedThreshold; // 0x0640 (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_SlowSpeedDivisor; // 0x0644 (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_FastSpeedDivisor; // 0x0648 (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_MinClamp; // 0x064C (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_MaxClamp; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_InterpSpeed; // 0x0654 (Size: 0x4, Type: FloatProperty)
    float LocomotionPoseAdditiveAlpha_InterpSpeed; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier; // 0x065C (Size: 0x4, Type: FloatProperty)
    float EnableHeadTiltUpAdditive_ModOperand; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float InterruptibleCurveValue_LargeThreshold; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float InterruptibleCurveValue_TurnAngleThreshold; // 0x0668 (Size: 0x4, Type: FloatProperty)
    float Speed_MovingThreshold; // 0x066C (Size: 0x4, Type: FloatProperty)
    float Speed_IdleThreshold; // 0x0670 (Size: 0x4, Type: FloatProperty)
    float TurnAngle_LargeThreshold; // 0x0674 (Size: 0x4, Type: FloatProperty)
    float Speed_RidingMovingThreshold; // 0x0678 (Size: 0x4, Type: FloatProperty)
    float Speed_RidingIdleThreshold; // 0x067C (Size: 0x4, Type: FloatProperty)
    float IdleShuffleBodyBendMultiplier; // 0x0680 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleTurnThreshold; // 0x0684 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleTurnDirectionThreshold; // 0x0688 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateInRangeA; // 0x068C (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateInRangeB; // 0x0690 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateOutRangeA; // 0x0694 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateOutRangeB; // 0x0698 (Size: 0x4, Type: FloatProperty)
    float MinSpeedSlowRidingMovePlayRate; // 0x069C (Size: 0x4, Type: FloatProperty)
    float SpeedSlowDivisorRidingMovePlayRate; // 0x06A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RidingMovePlayRate_Ranges[0x1]; // 0x06A4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate) == 1552, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::MovingPlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, LocomotionPoseAdditiveAlpha) == 1556, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::LocomotionPoseAdditiveAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bEnableHeadTiltUpAdditive) == 1560, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bEnableHeadTiltUpAdditive");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bTurnAngleIsNegative) == 1561, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bTurnAngleIsNegative");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, DisableLocomotionAdditiveCurveName) == 1564, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::DisableLocomotionAdditiveCurveName");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, InterruptibleCurveName) == 1568, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::InterruptibleCurveName");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bIsIdleShuffleTurn) == 1572, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bIsIdleShuffleTurn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShuffleBodyBend) == 1576, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::IdleShuffleBodyBend");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShufflePlayRate) == 1580, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::IdleShufflePlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bIdleShuffleTurnDirection) == 1584, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bIdleShuffleTurnDirection");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bIsMoving) == 1585, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bIsMoving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionIdleToApex) == 1586, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionIdleToApex");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionIdleToMoving) == 1587, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionIdleToMoving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionMovingToIdle) == 1588, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionMovingToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionLandToIdle) == 1589, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionLandToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionLandToJumpStart) == 1590, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionLandToJumpStart");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionJumpStartToApex) == 1591, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionJumpStartToApex");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionApexToFall) == 1592, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionApexToFall");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionFallToLand) == 1593, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionFallToLand");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionIdleTurnToIdle) == 1594, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionIdleTurnToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionLocomotionTurnToIdle) == 1595, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionLocomotionTurnToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionLocomotionTurnToMoving) == 1596, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionLocomotionTurnToMoving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionIdleTurnToMoving) == 1597, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionIdleTurnToMoving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionFallToMoving) == 1598, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionFallToMoving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, bCanTransitionFallToIdle) == 1599, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::bCanTransitionFallToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_SpeedThreshold) == 1600, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::MovingPlayRate_SpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_SlowSpeedDivisor) == 1604, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::MovingPlayRate_SlowSpeedDivisor");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_FastSpeedDivisor) == 1608, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::MovingPlayRate_FastSpeedDivisor");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_MinClamp) == 1612, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::MovingPlayRate_MinClamp");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_MaxClamp) == 1616, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::MovingPlayRate_MaxClamp");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MovingPlayRate_InterpSpeed) == 1620, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::MovingPlayRate_InterpSpeed");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, LocomotionPoseAdditiveAlpha_InterpSpeed) == 1624, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::LocomotionPoseAdditiveAlpha_InterpSpeed");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier) == 1628, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, EnableHeadTiltUpAdditive_ModOperand) == 1632, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::EnableHeadTiltUpAdditive_ModOperand");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, InterruptibleCurveValue_LargeThreshold) == 1636, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::InterruptibleCurveValue_LargeThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, InterruptibleCurveValue_TurnAngleThreshold) == 1640, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::InterruptibleCurveValue_TurnAngleThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, Speed_MovingThreshold) == 1644, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::Speed_MovingThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, Speed_IdleThreshold) == 1648, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::Speed_IdleThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, TurnAngle_LargeThreshold) == 1652, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::TurnAngle_LargeThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, Speed_RidingMovingThreshold) == 1656, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::Speed_RidingMovingThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, Speed_RidingIdleThreshold) == 1660, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::Speed_RidingIdleThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShuffleBodyBendMultiplier) == 1664, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::IdleShuffleBodyBendMultiplier");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShuffleTurnThreshold) == 1668, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::IdleShuffleTurnThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShuffleTurnDirectionThreshold) == 1672, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::IdleShuffleTurnDirectionThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShufflePlayRateInRangeA) == 1676, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::IdleShufflePlayRateInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShufflePlayRateInRangeB) == 1680, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::IdleShufflePlayRateInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShufflePlayRateOutRangeA) == 1684, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::IdleShufflePlayRateOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, IdleShufflePlayRateOutRangeB) == 1688, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::IdleShufflePlayRateOutRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, MinSpeedSlowRidingMovePlayRate) == 1692, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::MinSpeedSlowRidingMovePlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, SpeedSlowDivisorRidingMovePlayRate) == 1696, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::SpeedSlowDivisorRidingMovePlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt, RidingMovePlayRate_Ranges) == 1700, "Offset mismatch for UFortAIFaunaAnimInstance_Burt::RidingMovePlayRate_Ranges");

// /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt_Hitchhiker
// Kind: Class; super: FortAIFaunaAnimInstance_Burt
class UFortAIFaunaAnimInstance_Burt_Hitchhiker
{
public:
    std::uint8_t Pad_0000[0x6C0]; // 0x0000
    std::uint8_t IsFloating; // 0x06C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsInTractorBeam; // 0x06C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsHitchhiked; // 0x06C2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAIFaunaAnimInstance_Burt_Hitchhiker, IsFloating) == 1728, "Offset mismatch for UFortAIFaunaAnimInstance_Burt_Hitchhiker::IsFloating");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt_Hitchhiker, IsInTractorBeam) == 1729, "Offset mismatch for UFortAIFaunaAnimInstance_Burt_Hitchhiker::IsInTractorBeam");
static_assert(offsetof(UFortAIFaunaAnimInstance_Burt_Hitchhiker, IsHitchhiked) == 1730, "Offset mismatch for UFortAIFaunaAnimInstance_Burt_Hitchhiker::IsHitchhiked");

// /Script/IrwinRuntime.FortAIFaunaAnimInstance_Crow
// Kind: Class; super: FortAIFaunaAnimInstance
class UFortAIFaunaAnimInstance_Crow
{
public:
    std::uint8_t Pad_0000[0x610]; // 0x0000
    float WingFlapPlayRate; // 0x0610 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsDescending; // 0x0614 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGliding; // 0x0615 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFlying; // 0x0616 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFlyingSlow; // 0x0617 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLanding; // 0x0618 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0619
    float WingFlapPlayRateInRangeA; // 0x061C (Size: 0x4, Type: FloatProperty)
    float WingFlapPlayRateInRangeB; // 0x0620 (Size: 0x4, Type: FloatProperty)
    float WingFlapPlayRateOutRangeA; // 0x0624 (Size: 0x4, Type: FloatProperty)
    float WingFlapPlayRateOutRangeB; // 0x0628 (Size: 0x4, Type: FloatProperty)
    float ZVelocityDescendingThreshold; // 0x062C (Size: 0x4, Type: FloatProperty)
    float GlidingSpeedThreshold; // 0x0630 (Size: 0x4, Type: FloatProperty)
    float FlyingSpeedThreshold; // 0x0634 (Size: 0x4, Type: FloatProperty)
    float FlyingSlowSpeedThreshold; // 0x0638 (Size: 0x4, Type: FloatProperty)
    float LandingSpeedThreshold; // 0x063C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, WingFlapPlayRate) == 1552, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::WingFlapPlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, bIsDescending) == 1556, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::bIsDescending");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, bIsGliding) == 1557, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::bIsGliding");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, bIsFlying) == 1558, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::bIsFlying");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, bIsFlyingSlow) == 1559, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::bIsFlyingSlow");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, bIsLanding) == 1560, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::bIsLanding");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, WingFlapPlayRateInRangeA) == 1564, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::WingFlapPlayRateInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, WingFlapPlayRateInRangeB) == 1568, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::WingFlapPlayRateInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, WingFlapPlayRateOutRangeA) == 1572, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::WingFlapPlayRateOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, WingFlapPlayRateOutRangeB) == 1576, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::WingFlapPlayRateOutRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, ZVelocityDescendingThreshold) == 1580, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::ZVelocityDescendingThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, GlidingSpeedThreshold) == 1584, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::GlidingSpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, FlyingSpeedThreshold) == 1588, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::FlyingSpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, FlyingSlowSpeedThreshold) == 1592, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::FlyingSlowSpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Crow, LandingSpeedThreshold) == 1596, "Offset mismatch for UFortAIFaunaAnimInstance_Crow::LandingSpeedThreshold");

// /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma
// Kind: Class; super: FortAIFaunaAnimInstance
class UFortAIFaunaAnimInstance_Grandma
{
public:
    std::uint8_t Pad_0000[0x610]; // 0x0000
    void* AIPawn; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    float MeshScale; // 0x0618 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldPlayFullBodyInPlace; // 0x061C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x061D
    float BlinkAlpha; // 0x0620 (Size: 0x4, Type: FloatProperty)
    float WalkRunPlayRate; // 0x0624 (Size: 0x4, Type: FloatProperty)
    float LocomotionPoseAdditiveAlpha; // 0x0628 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableSniffAdditive; // 0x062C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAlertAdditive; // 0x062D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleStartTurn; // 0x062E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLookAtAdditiveTurnAlpha; // 0x062F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIdleShuffleTurn; // 0x0630 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0631
    float IdleShuffleBodyBend; // 0x0634 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRate; // 0x0638 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIdleShuffleTurnDirection; // 0x063C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x063D
    float TurnInPlaceModulatedSpeed; // 0x0640 (Size: 0x4, Type: FloatProperty)
    float MaxSpeedFullBodyInPlace; // 0x0644 (Size: 0x4, Type: FloatProperty)
    float MinCurveValueFullBodyInPlace; // 0x0648 (Size: 0x4, Type: FloatProperty)
    float LocomotionPoseAdditiveAlphaInterpRate; // 0x064C (Size: 0x4, Type: FloatProperty)
    std::int32_t SniffAdditiveFrequenceySeconds; // 0x0650 (Size: 0x4, Type: IntProperty)
    std::int32_t AlertAdditiveFrequenceySeconds; // 0x0654 (Size: 0x4, Type: IntProperty)
    std::int32_t PawnIDScale; // 0x0658 (Size: 0x4, Type: IntProperty)
    std::uint8_t ShouldPlayFullBodyInPlaceCurveName[0x4]; // 0x065C (Size: 0x4, Type: NameProperty)
    std::uint8_t BlinkAlphaCurveName[0x4]; // 0x0660 (Size: 0x4, Type: NameProperty)
    float IdleStartTurnInterruptibleThreshold; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleBodyBendMultiplier; // 0x0668 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleTurnThreshold; // 0x066C (Size: 0x4, Type: FloatProperty)
    float IdleShuffleTurnDirectionThreshold; // 0x0670 (Size: 0x4, Type: FloatProperty)
    float LookAtAdditiveTurnAlphaThreshold; // 0x0674 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateInRangeA; // 0x0678 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateInRangeB; // 0x067C (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateOutRangeA; // 0x0680 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateOutRangeB; // 0x0684 (Size: 0x4, Type: FloatProperty)
    float TurnInPlaceModulatedSpeedFactor; // 0x0688 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsMovingOnGroundORIsSurfaceSwimming; // 0x068C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_DefaultJump_ToJumpApex; // 0x068D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_TurnIdle_Idle; // 0x068E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_TurnIdle_Moving; // 0x068F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Moving_TurnIdle; // 0x0690 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_TurnMoving_Moving; // 0x0691 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Moving_TurnMoving; // 0x0692 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Idle_Moving; // 0x0693 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Moving_Idle; // 0x0694 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_JumpLand_Idle; // 0x0695 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_JumpLand_Moving; // 0x0696 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_JumpStart_JumpApex; // 0x0697 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Fall_Moving; // 0x0698 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Fall_Idle; // 0x0699 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_SwimIdle_SwimLoco; // 0x069A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_SwimLoco_SwimIdle; // 0x069B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_SwimTurn_SwimIdle; // 0x069C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_SwimTurn_SwimLoco; // 0x069D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnimRule_NegativeTurnAngle; // 0x069E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x069F
    float InterruptibleMaxCheck; // 0x06A0 (Size: 0x4, Type: FloatProperty)
    float SpeedStopTransition; // 0x06A4 (Size: 0x4, Type: FloatProperty)
    float SpeedIdleMoveTransition; // 0x06A8 (Size: 0x4, Type: FloatProperty)
    float SpeedMovingTurnIdleTransition; // 0x06AC (Size: 0x4, Type: FloatProperty)
    float SpeedToMoveMin; // 0x06B0 (Size: 0x4, Type: FloatProperty)
    float SpeedToMoveMinWhileRiding; // 0x06B4 (Size: 0x4, Type: FloatProperty)
    float SpeedToMoveMinWhileAcceleratingAndRiding; // 0x06B8 (Size: 0x4, Type: FloatProperty)
    float StateTimeFromEndThreshold; // 0x06BC (Size: 0x4, Type: FloatProperty)
    float SpeedIdleStartTurnThreshold; // 0x06C0 (Size: 0x4, Type: FloatProperty)
    float SpeedFallMovingThreshold; // 0x06C4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, AIPawn) == 1552, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::AIPawn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, MeshScale) == 1560, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::MeshScale");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bShouldPlayFullBodyInPlace) == 1564, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bShouldPlayFullBodyInPlace");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, BlinkAlpha) == 1568, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::BlinkAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, WalkRunPlayRate) == 1572, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::WalkRunPlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, LocomotionPoseAdditiveAlpha) == 1576, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::LocomotionPoseAdditiveAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bEnableSniffAdditive) == 1580, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bEnableSniffAdditive");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bEnableAlertAdditive) == 1581, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bEnableAlertAdditive");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bIdleStartTurn) == 1582, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bIdleStartTurn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bLookAtAdditiveTurnAlpha) == 1583, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bLookAtAdditiveTurnAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bIsIdleShuffleTurn) == 1584, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bIsIdleShuffleTurn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShuffleBodyBend) == 1588, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::IdleShuffleBodyBend");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShufflePlayRate) == 1592, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::IdleShufflePlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bIdleShuffleTurnDirection) == 1596, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bIdleShuffleTurnDirection");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, TurnInPlaceModulatedSpeed) == 1600, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::TurnInPlaceModulatedSpeed");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, MaxSpeedFullBodyInPlace) == 1604, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::MaxSpeedFullBodyInPlace");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, MinCurveValueFullBodyInPlace) == 1608, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::MinCurveValueFullBodyInPlace");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, LocomotionPoseAdditiveAlphaInterpRate) == 1612, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::LocomotionPoseAdditiveAlphaInterpRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SniffAdditiveFrequenceySeconds) == 1616, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::SniffAdditiveFrequenceySeconds");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, AlertAdditiveFrequenceySeconds) == 1620, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::AlertAdditiveFrequenceySeconds");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, PawnIDScale) == 1624, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::PawnIDScale");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, ShouldPlayFullBodyInPlaceCurveName) == 1628, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::ShouldPlayFullBodyInPlaceCurveName");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, BlinkAlphaCurveName) == 1632, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::BlinkAlphaCurveName");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleStartTurnInterruptibleThreshold) == 1636, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::IdleStartTurnInterruptibleThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShuffleBodyBendMultiplier) == 1640, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::IdleShuffleBodyBendMultiplier");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShuffleTurnThreshold) == 1644, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::IdleShuffleTurnThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShuffleTurnDirectionThreshold) == 1648, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::IdleShuffleTurnDirectionThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, LookAtAdditiveTurnAlphaThreshold) == 1652, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::LookAtAdditiveTurnAlphaThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShufflePlayRateInRangeA) == 1656, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::IdleShufflePlayRateInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShufflePlayRateInRangeB) == 1660, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::IdleShufflePlayRateInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShufflePlayRateOutRangeA) == 1664, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::IdleShufflePlayRateOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, IdleShufflePlayRateOutRangeB) == 1668, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::IdleShufflePlayRateOutRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, TurnInPlaceModulatedSpeedFactor) == 1672, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::TurnInPlaceModulatedSpeedFactor");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bIsMovingOnGroundORIsSurfaceSwimming) == 1676, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bIsMovingOnGroundORIsSurfaceSwimming");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_DefaultJump_ToJumpApex) == 1677, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_DefaultJump_ToJumpApex");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_TurnIdle_Idle) == 1678, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_TurnIdle_Idle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_TurnIdle_Moving) == 1679, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_TurnIdle_Moving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Moving_TurnIdle) == 1680, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_Moving_TurnIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_TurnMoving_Moving) == 1681, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_TurnMoving_Moving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Moving_TurnMoving) == 1682, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_Moving_TurnMoving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Idle_Moving) == 1683, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_Idle_Moving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Moving_Idle) == 1684, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_Moving_Idle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_JumpLand_Idle) == 1685, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_JumpLand_Idle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_JumpLand_Moving) == 1686, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_JumpLand_Moving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_JumpStart_JumpApex) == 1687, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_JumpStart_JumpApex");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Fall_Moving) == 1688, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_Fall_Moving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_Fall_Idle) == 1689, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_Fall_Idle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_SwimIdle_SwimLoco) == 1690, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_SwimIdle_SwimLoco");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_SwimLoco_SwimIdle) == 1691, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_SwimLoco_SwimIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_SwimTurn_SwimIdle) == 1692, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_SwimTurn_SwimIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bStateRule_SwimTurn_SwimLoco) == 1693, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bStateRule_SwimTurn_SwimLoco");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, bAnimRule_NegativeTurnAngle) == 1694, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::bAnimRule_NegativeTurnAngle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, InterruptibleMaxCheck) == 1696, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::InterruptibleMaxCheck");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedStopTransition) == 1700, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::SpeedStopTransition");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedIdleMoveTransition) == 1704, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::SpeedIdleMoveTransition");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedMovingTurnIdleTransition) == 1708, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::SpeedMovingTurnIdleTransition");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedToMoveMin) == 1712, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::SpeedToMoveMin");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedToMoveMinWhileRiding) == 1716, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::SpeedToMoveMinWhileRiding");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedToMoveMinWhileAcceleratingAndRiding) == 1720, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::SpeedToMoveMinWhileAcceleratingAndRiding");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, StateTimeFromEndThreshold) == 1724, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::StateTimeFromEndThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedIdleStartTurnThreshold) == 1728, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::SpeedIdleStartTurnThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma, SpeedFallMovingThreshold) == 1732, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma::SpeedFallMovingThreshold");

// /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma_Hitchhiker
// Kind: Class; super: FortAIFaunaAnimInstance_Grandma
class UFortAIFaunaAnimInstance_Grandma_Hitchhiker
{
public:
    std::uint8_t Pad_0000[0x6D0]; // 0x0000
    std::uint8_t bIsHitchhiked; // 0x06D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGrandmaSprinting; // 0x06D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x06D2
    float SprintCheckSpeed; // 0x06D4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma_Hitchhiker, bIsHitchhiked) == 1744, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma_Hitchhiker::bIsHitchhiked");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma_Hitchhiker, bIsGrandmaSprinting) == 1745, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma_Hitchhiker::bIsGrandmaSprinting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Grandma_Hitchhiker, SprintCheckSpeed) == 1748, "Offset mismatch for UFortAIFaunaAnimInstance_Grandma_Hitchhiker::SprintCheckSpeed");

// /Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug
// Kind: Class; super: FortAIFaunaAnimInstance
class UFortAIFaunaAnimInstance_Nug
{
public:
    std::uint8_t Pad_0000[0x610]; // 0x0000
    std::uint8_t bIsBeingHeld; // 0x0610 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBeingThrown; // 0x0611 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0612
    float LowerBodyMaskAlpha; // 0x0614 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldExitJump; // 0x0618 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0619
    float MovingPlayRate; // 0x061C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldLean; // 0x0620 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0621
    float LeanDirection; // 0x0624 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTurnAngleIsNegative; // 0x0628 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0629
    std::uint8_t InterruptibleCurveName[0x4]; // 0x062C (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsIdleShuffleTurn; // 0x0630 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0631
    float IdleShuffleBodyBend; // 0x0634 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRate; // 0x0638 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIdleShuffleTurnDirection; // 0x063C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleToIdleTurn; // 0x063D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleToLocomotionTurn; // 0x063E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleToMoving; // 0x063F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleToJumpApex; // 0x0640 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionMovingToIdle; // 0x0641 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionJumpStartToJumpApex; // 0x0642 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionJumpApexToJumpLoop; // 0x0643 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionLocomotionTurnToIdle; // 0x0644 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionLocomotionTurnToMoving; // 0x0645 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleTurnToMoving; // 0x0646 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleTurnToIdle; // 0x0647 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionJumpLoopToJumpLand; // 0x0648 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIsBeingHeldToChickenChuck; // 0x0649 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x2]; // 0x064A
    float ShouldExitJump_SpeedThreshold; // 0x064C (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_SpeedThreshold; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_SlowSpeedDivisor; // 0x0654 (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_FastSpeedDivisor; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_InterpSpeed; // 0x065C (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_MinClamp; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float MovingPlayRate_MaxClamp; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float LeanDirection_SpeedThreshold; // 0x0668 (Size: 0x4, Type: FloatProperty)
    float ShouldLean_SpeedThreshold; // 0x066C (Size: 0x4, Type: FloatProperty)
    float InterruptibleCurveValue_LargeThreshold; // 0x0670 (Size: 0x4, Type: FloatProperty)
    float Speed_MovingThreshold; // 0x0674 (Size: 0x4, Type: FloatProperty)
    float Speed_IdleThreshold; // 0x0678 (Size: 0x4, Type: FloatProperty)
    float IdleTurnTransition_SpeedThreshold; // 0x067C (Size: 0x4, Type: FloatProperty)
    float LocomotionTurnTransition_SpeedThreshold; // 0x0680 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleBodyBendMultiplier; // 0x0684 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleTurnThreshold; // 0x0688 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleTurnDirectionThreshold; // 0x068C (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateInRangeA; // 0x0690 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateInRangeB; // 0x0694 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateOutRangeA; // 0x0698 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateOutRangeB; // 0x069C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bIsBeingHeld) == 1552, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bIsBeingHeld");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bIsBeingThrown) == 1553, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bIsBeingThrown");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, LowerBodyMaskAlpha) == 1556, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::LowerBodyMaskAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bShouldExitJump) == 1560, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bShouldExitJump");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate) == 1564, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::MovingPlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bShouldLean) == 1568, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bShouldLean");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, LeanDirection) == 1572, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::LeanDirection");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bTurnAngleIsNegative) == 1576, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bTurnAngleIsNegative");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, InterruptibleCurveName) == 1580, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::InterruptibleCurveName");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bIsIdleShuffleTurn) == 1584, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bIsIdleShuffleTurn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShuffleBodyBend) == 1588, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::IdleShuffleBodyBend");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShufflePlayRate) == 1592, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::IdleShufflePlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bIdleShuffleTurnDirection) == 1596, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bIdleShuffleTurnDirection");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleToIdleTurn) == 1597, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleToIdleTurn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleToLocomotionTurn) == 1598, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleToLocomotionTurn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleToMoving) == 1599, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleToMoving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleToJumpApex) == 1600, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleToJumpApex");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionMovingToIdle) == 1601, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionMovingToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionJumpStartToJumpApex) == 1602, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionJumpStartToJumpApex");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionJumpApexToJumpLoop) == 1603, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionJumpApexToJumpLoop");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionLocomotionTurnToIdle) == 1604, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionLocomotionTurnToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionLocomotionTurnToMoving) == 1605, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionLocomotionTurnToMoving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleTurnToMoving) == 1606, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleTurnToMoving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIdleTurnToIdle) == 1607, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionIdleTurnToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionJumpLoopToJumpLand) == 1608, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionJumpLoopToJumpLand");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, bCanTransitionIsBeingHeldToChickenChuck) == 1609, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::bCanTransitionIsBeingHeldToChickenChuck");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, ShouldExitJump_SpeedThreshold) == 1612, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::ShouldExitJump_SpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_SpeedThreshold) == 1616, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::MovingPlayRate_SpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_SlowSpeedDivisor) == 1620, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::MovingPlayRate_SlowSpeedDivisor");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_FastSpeedDivisor) == 1624, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::MovingPlayRate_FastSpeedDivisor");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_InterpSpeed) == 1628, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::MovingPlayRate_InterpSpeed");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_MinClamp) == 1632, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::MovingPlayRate_MinClamp");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, MovingPlayRate_MaxClamp) == 1636, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::MovingPlayRate_MaxClamp");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, LeanDirection_SpeedThreshold) == 1640, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::LeanDirection_SpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, ShouldLean_SpeedThreshold) == 1644, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::ShouldLean_SpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, InterruptibleCurveValue_LargeThreshold) == 1648, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::InterruptibleCurveValue_LargeThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, Speed_MovingThreshold) == 1652, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::Speed_MovingThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, Speed_IdleThreshold) == 1656, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::Speed_IdleThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleTurnTransition_SpeedThreshold) == 1660, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::IdleTurnTransition_SpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, LocomotionTurnTransition_SpeedThreshold) == 1664, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::LocomotionTurnTransition_SpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShuffleBodyBendMultiplier) == 1668, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::IdleShuffleBodyBendMultiplier");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShuffleTurnThreshold) == 1672, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::IdleShuffleTurnThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShuffleTurnDirectionThreshold) == 1676, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::IdleShuffleTurnDirectionThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShufflePlayRateInRangeA) == 1680, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::IdleShufflePlayRateInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShufflePlayRateInRangeB) == 1684, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::IdleShufflePlayRateInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShufflePlayRateOutRangeA) == 1688, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::IdleShufflePlayRateOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug, IdleShufflePlayRateOutRangeB) == 1692, "Offset mismatch for UFortAIFaunaAnimInstance_Nug::IdleShufflePlayRateOutRangeB");

// /Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug_Hitchhiker
// Kind: Class; super: FortAIFaunaAnimInstance_Nug
class UFortAIFaunaAnimInstance_Nug_Hitchhiker
{
public:
    std::uint8_t Pad_0000[0x6A0]; // 0x0000
    std::uint8_t bIsSwimming; // 0x06A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHitchhiked; // 0x06A1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAIFaunaAnimInstance_Nug_Hitchhiker, bIsSwimming) == 1696, "Offset mismatch for UFortAIFaunaAnimInstance_Nug_Hitchhiker::bIsSwimming");
static_assert(offsetof(UFortAIFaunaAnimInstance_Nug_Hitchhiker, bIsHitchhiked) == 1697, "Offset mismatch for UFortAIFaunaAnimInstance_Nug_Hitchhiker::bIsHitchhiked");

// /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert
// Kind: Class; super: FortAIFaunaAnimInstance
class UFortAIFaunaAnimInstance_Robert
{
public:
    std::uint8_t Pad_0000[0x618]; // 0x0000
    void* AIPawn; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIdleStartTurn; // 0x0620 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableHeadTiltDownAdditive; // 0x0621 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFullBodyInPlace; // 0x0622 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0623
    float LocomotionPoseAdditiveAlpha; // 0x0624 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsIdleShuffleTurn; // 0x0628 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0629
    float IdleShuffleBodyBend; // 0x062C (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRate; // 0x0630 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIdleShuffleTurnDirection; // 0x0634 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLookAtAdditiveTurnAlpha; // 0x0635 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurnDirection; // 0x0636 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0637
    std::int32_t PawnIDScale; // 0x0638 (Size: 0x4, Type: IntProperty)
    std::int32_t HeadTiltDownAdditiveFrequenceySeconds; // 0x063C (Size: 0x4, Type: IntProperty)
    float ForceFullBodyTransition; // 0x0640 (Size: 0x4, Type: FloatProperty)
    float LocomotionPoseAdditiveAlphaInterpRate; // 0x0644 (Size: 0x4, Type: FloatProperty)
    float IdleStartTurnInterruptibleThreshold; // 0x0648 (Size: 0x4, Type: FloatProperty)
    float LookAtAlphaThreshold; // 0x064C (Size: 0x4, Type: FloatProperty)
    float SpeedMovingThreshold; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float TurnDirectionThreshold; // 0x0654 (Size: 0x4, Type: FloatProperty)
    float SprintStopThreshold; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float WalkStopThreshold; // 0x065C (Size: 0x4, Type: FloatProperty)
    float BackwardStopThreshold; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float AdditiveInterruptibleThreshold; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float InterruptibleThreshold; // 0x0668 (Size: 0x4, Type: FloatProperty)
    float TurningRightThreshold; // 0x066C (Size: 0x4, Type: FloatProperty)
    float LeftFootStopThreshold; // 0x0670 (Size: 0x4, Type: FloatProperty)
    float HipInterpSpeed_Fast; // 0x0674 (Size: 0x4, Type: FloatProperty)
    float HipInterpSpeed_Slow; // 0x0678 (Size: 0x4, Type: FloatProperty)
    float AdditiveHipAlphaTargeting_Constant; // 0x067C (Size: 0x4, Type: FloatProperty)
    float BackwardLocomotionThreshold; // 0x0680 (Size: 0x4, Type: FloatProperty)
    float LocomotionThreshold; // 0x0684 (Size: 0x4, Type: FloatProperty)
    float PawnSpeedThreshold; // 0x0688 (Size: 0x4, Type: FloatProperty)
    float LocomotionPlayRate_Fixed; // 0x068C (Size: 0x4, Type: FloatProperty)
    float BoostJumpingThreshold; // 0x0690 (Size: 0x4, Type: FloatProperty)
    float BoostStartPosition_Jumping; // 0x0694 (Size: 0x4, Type: FloatProperty)
    float BoostStartPosition_NotJumping; // 0x0698 (Size: 0x4, Type: FloatProperty)
    float AdditiveBodyTurnSwimInRangeA; // 0x069C (Size: 0x4, Type: FloatProperty)
    float AdditiveBodyTurnSwimInRangeB; // 0x06A0 (Size: 0x4, Type: FloatProperty)
    float AdditiveBodyTurnSwimOutRangeA; // 0x06A4 (Size: 0x4, Type: FloatProperty)
    float AdditiveBodyTurnSwimOutRangeB; // 0x06A8 (Size: 0x4, Type: FloatProperty)
    float AdditiveBodyTurnNotSwimInRangeA; // 0x06AC (Size: 0x4, Type: FloatProperty)
    float AdditiveBodyTurnNotSwimInRangeB; // 0x06B0 (Size: 0x4, Type: FloatProperty)
    float AdditiveBodyTurnNotSwimOutRangeA; // 0x06B4 (Size: 0x4, Type: FloatProperty)
    float AdditiveBodyTurnNotSwimOutRangeB; // 0x06B8 (Size: 0x4, Type: FloatProperty)
    float BodyTurnInterpSpeed_Accel; // 0x06BC (Size: 0x4, Type: FloatProperty)
    float BodyTurnInterpSpeed_NotAccel; // 0x06C0 (Size: 0x4, Type: FloatProperty)
    float IdleAdditiveBodyTurnTarget_NotAccel; // 0x06C4 (Size: 0x4, Type: FloatProperty)
    float AdditiveLeanAlphaTargeting_Targeting; // 0x06C8 (Size: 0x4, Type: FloatProperty)
    float AdditiveLeanAlphaTargeting_NonTargeting; // 0x06CC (Size: 0x4, Type: FloatProperty)
    float AdditiveLeanAlphaInterpSpeed; // 0x06D0 (Size: 0x4, Type: FloatProperty)
    float AdditiveHipStopAlphaTargeting_PlayerTargeting; // 0x06D4 (Size: 0x4, Type: FloatProperty)
    float HipInterpSpeed_PlayerTargeting; // 0x06D8 (Size: 0x4, Type: FloatProperty)
    float AdditiveHipStopAlphaTargeting_NotPlayerTargeting; // 0x06DC (Size: 0x4, Type: FloatProperty)
    float HipInterpSpeed_NotPlayerTargeting; // 0x06E0 (Size: 0x4, Type: FloatProperty)
    float LocomotionSecondaryInRangeA; // 0x06E4 (Size: 0x4, Type: FloatProperty)
    float LocomotionSecondaryInRangeB; // 0x06E8 (Size: 0x4, Type: FloatProperty)
    float LocomotionSecondaryOutRangeA; // 0x06EC (Size: 0x4, Type: FloatProperty)
    float LocomotionSecondaryOutRangeB; // 0x06F0 (Size: 0x4, Type: FloatProperty)
    float SwimCameraRotationSecondaryInRangeA; // 0x06F4 (Size: 0x4, Type: FloatProperty)
    float SwimCameraRotationSecondaryInRangeB; // 0x06F8 (Size: 0x4, Type: FloatProperty)
    float SwimCameraRotationSecondaryOutRangeA; // 0x06FC (Size: 0x4, Type: FloatProperty)
    float SwimCameraRotationSecondaryOutRangeB; // 0x0700 (Size: 0x4, Type: FloatProperty)
    float SwimRaptorRotationSecondaryInRangeA; // 0x0704 (Size: 0x4, Type: FloatProperty)
    float SwimRaptorRotationSecondaryInRangeB; // 0x0708 (Size: 0x4, Type: FloatProperty)
    float SwimRaptorRotationSecondaryOutRangeA; // 0x070C (Size: 0x4, Type: FloatProperty)
    float SwimRaptorRotationSecondaryOutRangeB; // 0x0710 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleBodyBendMultiplier; // 0x0714 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleTurnThreshold; // 0x0718 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleTurnDirectionThreshold; // 0x071C (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateInRangeA; // 0x0720 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateInRangeB; // 0x0724 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateOutRangeA; // 0x0728 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateOutRangeB; // 0x072C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStateRule_Idle_Moving; // 0x0730 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Moving_Idle; // 0x0731 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Swimming_Fall; // 0x0732 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Land_Idle; // 0x0733 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Fall_Idle; // 0x0734 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_Fall_Moving; // 0x0735 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_SwimIdle_SwimLoco; // 0x0736 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsTurnInPlace; // 0x0737 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsSprintStop; // 0x0738 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsStopBackwards; // 0x0739 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsLocomotion; // 0x073A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsFinishedTurnInPlace; // 0x073B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsInterruptible; // 0x073C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsIdleTurnRight; // 0x073D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsLeftFootStop; // 0x073E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsTurningRight; // 0x073F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsAdditiveInterruptible; // 0x0740 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsBackwardLocomotion; // 0x0741 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsJumpIdleLand; // 0x0742 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsIdleTurnToIdleTurn; // 0x0743 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_BoostJumpToBoostLand; // 0x0744 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsJumpToBoostJump; // 0x0745 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsJumpToJumpLand; // 0x0746 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_BoostFallLoopToBoostLand; // 0x0747 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsLocomotionToIdle; // 0x0748 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsExitLocomotionToIdle; // 0x0749 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsLocomotionHoldToSecondary; // 0x074A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsLocomotionSecondaryToHold; // 0x074B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsJumpAdditive; // 0x074C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsLandAdditiveToJump; // 0x074D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsAllowSlopeSlide; // 0x074E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRule_IsToJumpState; // 0x074F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRidden; // 0x0750 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStop; // 0x0751 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWalkStop; // 0x0752 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x0753
    float AdditiveHipAlpha; // 0x0754 (Size: 0x4, Type: FloatProperty)
    float AdditiveBodyAlpha; // 0x0758 (Size: 0x4, Type: FloatProperty)
    float RiderAimYaw; // 0x075C (Size: 0x4, Type: FloatProperty)
    float PlayerSlopePitch; // 0x0760 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPlayerTargeting; // 0x0764 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0765
    float AdditiveHipAlphaTargeting; // 0x0768 (Size: 0x4, Type: FloatProperty)
    float HipInterpSpeed; // 0x076C (Size: 0x4, Type: FloatProperty)
    float IdleAdditiveBodyTurnTarget; // 0x0770 (Size: 0x4, Type: FloatProperty)
    float BodyTurnAlpha; // 0x0774 (Size: 0x4, Type: FloatProperty)
    float BodyTurnInterpSpeed; // 0x0778 (Size: 0x4, Type: FloatProperty)
    float LocomotionPlayRate; // 0x077C (Size: 0x4, Type: FloatProperty)
    float AdditiveLeanAlpha; // 0x0780 (Size: 0x4, Type: FloatProperty)
    float AdditiveLeanAlphaTargeting; // 0x0784 (Size: 0x4, Type: FloatProperty)
    float BoostStartPosition; // 0x0788 (Size: 0x4, Type: FloatProperty)
    float AdditiveHipStopAlpha; // 0x078C (Size: 0x4, Type: FloatProperty)
    float AdditiveHipStopAlphaTargeting; // 0x0790 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAllowBoost; // 0x0794 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSlopeWarpHack; // 0x0795 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x2]; // 0x0796
    float LocomotionHeadSecondary; // 0x0798 (Size: 0x4, Type: FloatProperty)
    float LocomotionTailSecondary; // 0x079C (Size: 0x4, Type: FloatProperty)
    float SwimCameraRotationSecondary; // 0x07A0 (Size: 0x4, Type: FloatProperty)
    float SwimRaptorRotationSecondary; // 0x07A4 (Size: 0x4, Type: FloatProperty)
    float SwimTurnYaw; // 0x07A8 (Size: 0x4, Type: FloatProperty)
    float SwimHeadYaw; // 0x07AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAnimRule_NegativeTurnAngle; // 0x07B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAccelerating2D; // 0x07B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x07B2
    float InterruptibleMaxCheck; // 0x07B4 (Size: 0x4, Type: FloatProperty)
    float SpeedStopTransition; // 0x07B8 (Size: 0x4, Type: FloatProperty)
    float SpeedIdleMoveTransition; // 0x07BC (Size: 0x4, Type: FloatProperty)
    float SpeedToMoveMin; // 0x07C0 (Size: 0x4, Type: FloatProperty)
    float StateTimeFromEndThreshold; // 0x07C4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AIPawn) == 1560, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AIPawn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIdleStartTurn) == 1568, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIdleStartTurn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bEnableHeadTiltDownAdditive) == 1569, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bEnableHeadTiltDownAdditive");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsFullBodyInPlace) == 1570, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIsFullBodyInPlace");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionPoseAdditiveAlpha) == 1572, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionPoseAdditiveAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsIdleShuffleTurn) == 1576, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIsIdleShuffleTurn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShuffleBodyBend) == 1580, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleShuffleBodyBend");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShufflePlayRate) == 1584, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleShufflePlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIdleShuffleTurnDirection) == 1588, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIdleShuffleTurnDirection");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bLookAtAdditiveTurnAlpha) == 1589, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bLookAtAdditiveTurnAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bTurnDirection) == 1590, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bTurnDirection");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, PawnIDScale) == 1592, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::PawnIDScale");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, HeadTiltDownAdditiveFrequenceySeconds) == 1596, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::HeadTiltDownAdditiveFrequenceySeconds");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, ForceFullBodyTransition) == 1600, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::ForceFullBodyTransition");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionPoseAdditiveAlphaInterpRate) == 1604, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionPoseAdditiveAlphaInterpRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleStartTurnInterruptibleThreshold) == 1608, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleStartTurnInterruptibleThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LookAtAlphaThreshold) == 1612, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LookAtAlphaThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SpeedMovingThreshold) == 1616, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SpeedMovingThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, TurnDirectionThreshold) == 1620, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::TurnDirectionThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SprintStopThreshold) == 1624, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SprintStopThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, WalkStopThreshold) == 1628, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::WalkStopThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, BackwardStopThreshold) == 1632, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::BackwardStopThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveInterruptibleThreshold) == 1636, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveInterruptibleThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, InterruptibleThreshold) == 1640, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::InterruptibleThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, TurningRightThreshold) == 1644, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::TurningRightThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LeftFootStopThreshold) == 1648, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LeftFootStopThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, HipInterpSpeed_Fast) == 1652, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::HipInterpSpeed_Fast");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, HipInterpSpeed_Slow) == 1656, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::HipInterpSpeed_Slow");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveHipAlphaTargeting_Constant) == 1660, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveHipAlphaTargeting_Constant");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, BackwardLocomotionThreshold) == 1664, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::BackwardLocomotionThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionThreshold) == 1668, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, PawnSpeedThreshold) == 1672, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::PawnSpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionPlayRate_Fixed) == 1676, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionPlayRate_Fixed");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, BoostJumpingThreshold) == 1680, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::BoostJumpingThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, BoostStartPosition_Jumping) == 1684, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::BoostStartPosition_Jumping");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, BoostStartPosition_NotJumping) == 1688, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::BoostStartPosition_NotJumping");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveBodyTurnSwimInRangeA) == 1692, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveBodyTurnSwimInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveBodyTurnSwimInRangeB) == 1696, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveBodyTurnSwimInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveBodyTurnSwimOutRangeA) == 1700, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveBodyTurnSwimOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveBodyTurnSwimOutRangeB) == 1704, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveBodyTurnSwimOutRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveBodyTurnNotSwimInRangeA) == 1708, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveBodyTurnNotSwimInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveBodyTurnNotSwimInRangeB) == 1712, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveBodyTurnNotSwimInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveBodyTurnNotSwimOutRangeA) == 1716, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveBodyTurnNotSwimOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveBodyTurnNotSwimOutRangeB) == 1720, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveBodyTurnNotSwimOutRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, BodyTurnInterpSpeed_Accel) == 1724, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::BodyTurnInterpSpeed_Accel");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, BodyTurnInterpSpeed_NotAccel) == 1728, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::BodyTurnInterpSpeed_NotAccel");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleAdditiveBodyTurnTarget_NotAccel) == 1732, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleAdditiveBodyTurnTarget_NotAccel");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveLeanAlphaTargeting_Targeting) == 1736, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveLeanAlphaTargeting_Targeting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveLeanAlphaTargeting_NonTargeting) == 1740, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveLeanAlphaTargeting_NonTargeting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveLeanAlphaInterpSpeed) == 1744, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveLeanAlphaInterpSpeed");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveHipStopAlphaTargeting_PlayerTargeting) == 1748, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveHipStopAlphaTargeting_PlayerTargeting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, HipInterpSpeed_PlayerTargeting) == 1752, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::HipInterpSpeed_PlayerTargeting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveHipStopAlphaTargeting_NotPlayerTargeting) == 1756, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveHipStopAlphaTargeting_NotPlayerTargeting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, HipInterpSpeed_NotPlayerTargeting) == 1760, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::HipInterpSpeed_NotPlayerTargeting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionSecondaryInRangeA) == 1764, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionSecondaryInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionSecondaryInRangeB) == 1768, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionSecondaryInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionSecondaryOutRangeA) == 1772, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionSecondaryOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionSecondaryOutRangeB) == 1776, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionSecondaryOutRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimCameraRotationSecondaryInRangeA) == 1780, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimCameraRotationSecondaryInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimCameraRotationSecondaryInRangeB) == 1784, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimCameraRotationSecondaryInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimCameraRotationSecondaryOutRangeA) == 1788, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimCameraRotationSecondaryOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimCameraRotationSecondaryOutRangeB) == 1792, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimCameraRotationSecondaryOutRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimRaptorRotationSecondaryInRangeA) == 1796, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimRaptorRotationSecondaryInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimRaptorRotationSecondaryInRangeB) == 1800, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimRaptorRotationSecondaryInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimRaptorRotationSecondaryOutRangeA) == 1804, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimRaptorRotationSecondaryOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimRaptorRotationSecondaryOutRangeB) == 1808, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimRaptorRotationSecondaryOutRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShuffleBodyBendMultiplier) == 1812, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleShuffleBodyBendMultiplier");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShuffleTurnThreshold) == 1816, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleShuffleTurnThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShuffleTurnDirectionThreshold) == 1820, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleShuffleTurnDirectionThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShufflePlayRateInRangeA) == 1824, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleShufflePlayRateInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShufflePlayRateInRangeB) == 1828, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleShufflePlayRateInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShufflePlayRateOutRangeA) == 1832, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleShufflePlayRateOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleShufflePlayRateOutRangeB) == 1836, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleShufflePlayRateOutRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Idle_Moving) == 1840, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_Idle_Moving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Moving_Idle) == 1841, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_Moving_Idle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Swimming_Fall) == 1842, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_Swimming_Fall");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Land_Idle) == 1843, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_Land_Idle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Fall_Idle) == 1844, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_Fall_Idle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_Fall_Moving) == 1845, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_Fall_Moving");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_SwimIdle_SwimLoco) == 1846, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_SwimIdle_SwimLoco");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsTurnInPlace) == 1847, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsTurnInPlace");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsSprintStop) == 1848, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsSprintStop");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsStopBackwards) == 1849, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsStopBackwards");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsLocomotion) == 1850, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsLocomotion");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsFinishedTurnInPlace) == 1851, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsFinishedTurnInPlace");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsInterruptible) == 1852, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsInterruptible");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsIdleTurnRight) == 1853, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsIdleTurnRight");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsLeftFootStop) == 1854, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsLeftFootStop");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsTurningRight) == 1855, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsTurningRight");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsAdditiveInterruptible) == 1856, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsAdditiveInterruptible");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsBackwardLocomotion) == 1857, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsBackwardLocomotion");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsJumpIdleLand) == 1858, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsJumpIdleLand");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsIdleTurnToIdleTurn) == 1859, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsIdleTurnToIdleTurn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_BoostJumpToBoostLand) == 1860, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_BoostJumpToBoostLand");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsJumpToBoostJump) == 1861, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsJumpToBoostJump");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsJumpToJumpLand) == 1862, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsJumpToJumpLand");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_BoostFallLoopToBoostLand) == 1863, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_BoostFallLoopToBoostLand");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsLocomotionToIdle) == 1864, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsLocomotionToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsExitLocomotionToIdle) == 1865, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsExitLocomotionToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsLocomotionHoldToSecondary) == 1866, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsLocomotionHoldToSecondary");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsLocomotionSecondaryToHold) == 1867, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsLocomotionSecondaryToHold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsJumpAdditive) == 1868, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsJumpAdditive");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsLandAdditiveToJump) == 1869, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsLandAdditiveToJump");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsAllowSlopeSlide) == 1870, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsAllowSlopeSlide");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bStateRule_IsToJumpState) == 1871, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bStateRule_IsToJumpState");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsRidden) == 1872, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIsRidden");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsStop) == 1873, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIsStop");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsWalkStop) == 1874, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIsWalkStop");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveHipAlpha) == 1876, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveHipAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveBodyAlpha) == 1880, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveBodyAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, RiderAimYaw) == 1884, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::RiderAimYaw");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, PlayerSlopePitch) == 1888, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::PlayerSlopePitch");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsPlayerTargeting) == 1892, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIsPlayerTargeting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveHipAlphaTargeting) == 1896, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveHipAlphaTargeting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, HipInterpSpeed) == 1900, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::HipInterpSpeed");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, IdleAdditiveBodyTurnTarget) == 1904, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::IdleAdditiveBodyTurnTarget");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, BodyTurnAlpha) == 1908, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::BodyTurnAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, BodyTurnInterpSpeed) == 1912, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::BodyTurnInterpSpeed");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionPlayRate) == 1916, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionPlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveLeanAlpha) == 1920, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveLeanAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveLeanAlphaTargeting) == 1924, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveLeanAlphaTargeting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, BoostStartPosition) == 1928, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::BoostStartPosition");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveHipStopAlpha) == 1932, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveHipStopAlpha");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, AdditiveHipStopAlphaTargeting) == 1936, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::AdditiveHipStopAlphaTargeting");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsAllowBoost) == 1940, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIsAllowBoost");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsSlopeWarpHack) == 1941, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIsSlopeWarpHack");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionHeadSecondary) == 1944, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionHeadSecondary");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, LocomotionTailSecondary) == 1948, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::LocomotionTailSecondary");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimCameraRotationSecondary) == 1952, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimCameraRotationSecondary");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimRaptorRotationSecondary) == 1956, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimRaptorRotationSecondary");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimTurnYaw) == 1960, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimTurnYaw");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SwimHeadYaw) == 1964, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SwimHeadYaw");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bAnimRule_NegativeTurnAngle) == 1968, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bAnimRule_NegativeTurnAngle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, bIsAccelerating2D) == 1969, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::bIsAccelerating2D");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, InterruptibleMaxCheck) == 1972, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::InterruptibleMaxCheck");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SpeedStopTransition) == 1976, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SpeedStopTransition");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SpeedIdleMoveTransition) == 1980, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SpeedIdleMoveTransition");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, SpeedToMoveMin) == 1984, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::SpeedToMoveMin");
static_assert(offsetof(UFortAIFaunaAnimInstance_Robert, StateTimeFromEndThreshold) == 1988, "Offset mismatch for UFortAIFaunaAnimInstance_Robert::StateTimeFromEndThreshold");

// /Script/IrwinRuntime.FortAIFaunaAnimInstance_Smackie
// Kind: Class; super: FortAIFaunaAnimInstance
class UFortAIFaunaAnimInstance_Smackie
{
public:
    std::uint8_t Pad_0000[0x610]; // 0x0000
    std::uint8_t bIsIdleShuffleTurn; // 0x0610 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0611
    float IdleShuffleBodyBend; // 0x0614 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRate; // 0x0618 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIdleShuffleTurnDirection; // 0x061C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionIdleToHop; // 0x061D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionHopToIdle; // 0x061E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionFallToIdle; // 0x061F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTransitionFallToHop; // 0x0620 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0621
    float SpeedThreshold; // 0x0624 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleBodyBendMultiplier; // 0x0628 (Size: 0x4, Type: FloatProperty)
    float IdleShuffleTurnThreshold; // 0x062C (Size: 0x4, Type: FloatProperty)
    float IdleShuffleTurnDirectionThreshold; // 0x0630 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateInRangeA; // 0x0634 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateInRangeB; // 0x0638 (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateOutRangeA; // 0x063C (Size: 0x4, Type: FloatProperty)
    float IdleShufflePlayRateOutRangeB; // 0x0640 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bIsIdleShuffleTurn) == 1552, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::bIsIdleShuffleTurn");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShuffleBodyBend) == 1556, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::IdleShuffleBodyBend");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShufflePlayRate) == 1560, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::IdleShufflePlayRate");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bIdleShuffleTurnDirection) == 1564, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::bIdleShuffleTurnDirection");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bCanTransitionIdleToHop) == 1565, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::bCanTransitionIdleToHop");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bCanTransitionHopToIdle) == 1566, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::bCanTransitionHopToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bCanTransitionFallToIdle) == 1567, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::bCanTransitionFallToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, bCanTransitionFallToHop) == 1568, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::bCanTransitionFallToHop");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, SpeedThreshold) == 1572, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::SpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShuffleBodyBendMultiplier) == 1576, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::IdleShuffleBodyBendMultiplier");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShuffleTurnThreshold) == 1580, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::IdleShuffleTurnThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShuffleTurnDirectionThreshold) == 1584, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::IdleShuffleTurnDirectionThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShufflePlayRateInRangeA) == 1588, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::IdleShufflePlayRateInRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShufflePlayRateInRangeB) == 1592, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::IdleShufflePlayRateInRangeB");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShufflePlayRateOutRangeA) == 1596, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::IdleShufflePlayRateOutRangeA");
static_assert(offsetof(UFortAIFaunaAnimInstance_Smackie, IdleShufflePlayRateOutRangeB) == 1600, "Offset mismatch for UFortAIFaunaAnimInstance_Smackie::IdleShufflePlayRateOutRangeB");

// /Script/IrwinRuntime.FortAIFaunaLayerAnimInstance
// Kind: Class; super: FortBaseLayerAnimInstance
class UFortAIFaunaLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* MainAnimBP; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAIFaunaLayerAnimInstance, MainAnimBP) == 832, "Offset mismatch for UFortAIFaunaLayerAnimInstance::MainAnimBP");
