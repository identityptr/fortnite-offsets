/**
 * decamp dumper generated SDK
 * Package: /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Mantis
 */
#pragma once
#include "Basic.h"

// /Game/Blueprints/Camera/Athena/Athena_PlayerCameraMode_Mantis.Athena_PlayerCameraMode_Mantis_C
// Kind: BlueprintGeneratedClass; super: none
class UAthena_PlayerCameraMode_Mantis_C
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float FOV; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float CameraSpaceForwardDistance; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampCameraPitch; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampCameraYaw; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReorientYawClampToPawnFacing; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReorientPitchClampToPawnFacing; // 0x0083 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateCameraYawClampOnActivate; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateCameraPitchClampOnActivate; // 0x0085 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0086
    float CameraPitchMin; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float CameraPitchMax; // 0x008C (Size: 0x4, Type: FloatProperty)
    float CameraYawMin; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float CameraYawMax; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CameraOrigin; // 0x0098 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    std::uint8_t CameraOriginSocketName[0x4]; // 0x009C (Size: 0x4, Type: NameProperty)
    std::uint8_t CameraOriginInterpSpeed[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    float StepUpCameraOriginInterpVerticalSpeed; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float GravityChangeAngleThresholdDegrees; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t CameraLocationErrorConstraintBox[0x38]; // 0x00C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t ViewTargetSpaceViewOffset[0x38]; // 0x00F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ViewTargetSpaceViewOffset_Crouch[0x38]; // 0x0130 (Size: 0x38, Type: StructProperty)
    std::uint8_t ViewTargetSpaceViewOffsetInterpSpeed[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t ViewTargetSpaceViewOffsetInterpSpeed_Crouch[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t CameraSpaceViewOffset[0x38]; // 0x0198 (Size: 0x38, Type: StructProperty)
    float ViewTargetAlignmentFlipInterpDuration; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bScaleViewOffsetByViewTargetScale; // 0x01D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLocationAsReferenceFrameTransform; // 0x01D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsShoulderSwap; // 0x01D6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x01D7
    std::uint8_t bControlsWeaponTransform; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x01D9
    std::uint8_t AimedObjectConfig[0x58]; // 0x01E0 (Size: 0x58, Type: StructProperty)
    std::uint8_t bShouldHideWeaponReticle; // 0x0238 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldHideOpticsReticle; // 0x0239 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x6]; // 0x023A
    void* FirstPersonState; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCompensateForMovingPlatformOnCameraOriginInterpolation; // 0x0248 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipUpdateIfPawnNull; // 0x0249 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x6E]; // 0x024A
    TArray<void*> FirstPersonUpdateFunctions; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LastCameraOrigin[0x18]; // 0x02C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastCameraOriginUnaltered[0x18]; // 0x02E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CameraOriginLocalOffset[0x18]; // 0x02F8 (Size: 0x18, Type: StructProperty)
    float PenetrationBlendInTime; // 0x0310 (Size: 0x4, Type: FloatProperty)
    float PenetrationBlendOutTime; // 0x0314 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreventPenetration; // 0x0318 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoPredictiveAvoidance; // 0x0319 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x031A
    float CollisionPushOutDistance; // 0x031C (Size: 0x4, Type: FloatProperty)
    float HidePawnPenetrationPercent; // 0x0320 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHidePawnWhileNotFullyWeighted; // 0x0324 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreFrontFacingPenetration; // 0x0325 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x6A]; // 0x0326
    FName LastAttachSocketName; // 0x0390 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0009[0x8]; // 0x0398
    std::uint8_t LastBasePOV[0x910]; // 0x03A0 (Size: 0x910, Type: StructProperty)
    std::uint8_t DeltaBasePOV[0x910]; // 0x0CB0 (Size: 0x910, Type: StructProperty)
    float BlendAlpha; // 0x15C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000A[0x1C]; // 0x15C4
    TArray<void*> PenetrationAvoidanceFeelers; // 0x15E0 (Size: 0x10, Type: ArrayProperty)
    float SafeLocToAimLineBlockedPct; // 0x15F0 (Size: 0x4, Type: FloatProperty)
    float AimLineToDesiredPosBlockedPct; // 0x15F4 (Size: 0x4, Type: FloatProperty)
    float LastDrawDebugTime; // 0x15F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000B[0x4]; // 0x15FC
    std::uint8_t LastViewTargetSpaceViewOffset[0x18]; // 0x1600 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastViewTargetAlignmentUp[0x18]; // 0x1618 (Size: 0x18, Type: StructProperty)
    float ViewTargetAlignmentFlipInterpTime; // 0x1630 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000C[0x4]; // 0x1634
    std::uint8_t LastCameraPivot[0x18]; // 0x1638 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedLookAtLocation[0x20]; // 0x1650 (Size: 0x20, Type: OptionalProperty)
    float CachedPitchLimitMin; // 0x1670 (Size: 0x4, Type: FloatProperty)
    float CachedPitchLimitMax; // 0x1674 (Size: 0x4, Type: FloatProperty)
    float CachedYawLimitMin; // 0x1678 (Size: 0x4, Type: FloatProperty)
    float CachedYawLimitMax; // 0x167C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLastViewTargetValidGroupEmoteLookTarget; // 0x1680 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x7]; // 0x1681
    void* IgnoreActorForCameraPenetration; // 0x1688 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DebugActorsHitDuringCameraPenetration; // 0x1690 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bWasInVehicle; // 0x16A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x7]; // 0x16A1
    void* PreviousIgnoreActorForCameraPenetration; // 0x16A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreviousVT[0x9B0]; // 0x16B0 (Size: 0x9B0, Type: StructProperty)
    std::uint8_t bIsActive; // 0x2060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLockCameraWhileInactive; // 0x2061 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, FOV) == 120, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::FOV");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraSpaceForwardDistance) == 124, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraSpaceForwardDistance");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bClampCameraPitch) == 128, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bClampCameraPitch");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bClampCameraYaw) == 129, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bClampCameraYaw");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bReorientYawClampToPawnFacing) == 130, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bReorientYawClampToPawnFacing");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bReorientPitchClampToPawnFacing) == 131, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bReorientPitchClampToPawnFacing");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bUpdateCameraYawClampOnActivate) == 132, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bUpdateCameraYawClampOnActivate");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bUpdateCameraPitchClampOnActivate) == 133, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bUpdateCameraPitchClampOnActivate");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraPitchMin) == 136, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraPitchMin");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraPitchMax) == 140, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraPitchMax");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraYawMin) == 144, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraYawMin");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraYawMax) == 148, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraYawMax");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraOrigin) == 152, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraOrigin");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraOriginSocketName) == 156, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraOriginSocketName");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraOriginInterpSpeed) == 160, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraOriginInterpSpeed");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, StepUpCameraOriginInterpVerticalSpeed) == 184, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::StepUpCameraOriginInterpVerticalSpeed");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, GravityChangeAngleThresholdDegrees) == 188, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::GravityChangeAngleThresholdDegrees");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraLocationErrorConstraintBox) == 192, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraLocationErrorConstraintBox");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, ViewTargetSpaceViewOffset) == 248, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::ViewTargetSpaceViewOffset");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, ViewTargetSpaceViewOffset_Crouch) == 304, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::ViewTargetSpaceViewOffset_Crouch");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, ViewTargetSpaceViewOffsetInterpSpeed) == 360, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::ViewTargetSpaceViewOffsetInterpSpeed");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, ViewTargetSpaceViewOffsetInterpSpeed_Crouch) == 384, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::ViewTargetSpaceViewOffsetInterpSpeed_Crouch");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraSpaceViewOffset) == 408, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraSpaceViewOffset");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, ViewTargetAlignmentFlipInterpDuration) == 464, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::ViewTargetAlignmentFlipInterpDuration");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bScaleViewOffsetByViewTargetScale) == 468, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bScaleViewOffsetByViewTargetScale");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bUseLocationAsReferenceFrameTransform) == 469, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bUseLocationAsReferenceFrameTransform");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bSupportsShoulderSwap) == 470, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bSupportsShoulderSwap");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bControlsWeaponTransform) == 472, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bControlsWeaponTransform");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, AimedObjectConfig) == 480, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::AimedObjectConfig");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bShouldHideWeaponReticle) == 568, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bShouldHideWeaponReticle");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bShouldHideOpticsReticle) == 569, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bShouldHideOpticsReticle");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, FirstPersonState) == 576, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::FirstPersonState");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bCompensateForMovingPlatformOnCameraOriginInterpolation) == 584, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bCompensateForMovingPlatformOnCameraOriginInterpolation");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bSkipUpdateIfPawnNull) == 585, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bSkipUpdateIfPawnNull");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, FirstPersonUpdateFunctions) == 696, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::FirstPersonUpdateFunctions");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, LastCameraOrigin) == 712, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::LastCameraOrigin");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, LastCameraOriginUnaltered) == 736, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::LastCameraOriginUnaltered");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CameraOriginLocalOffset) == 760, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CameraOriginLocalOffset");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, PenetrationBlendInTime) == 784, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::PenetrationBlendInTime");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, PenetrationBlendOutTime) == 788, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::PenetrationBlendOutTime");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bPreventPenetration) == 792, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bPreventPenetration");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bDoPredictiveAvoidance) == 793, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bDoPredictiveAvoidance");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CollisionPushOutDistance) == 796, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CollisionPushOutDistance");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, HidePawnPenetrationPercent) == 800, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::HidePawnPenetrationPercent");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bHidePawnWhileNotFullyWeighted) == 804, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bHidePawnWhileNotFullyWeighted");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bIgnoreFrontFacingPenetration) == 805, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bIgnoreFrontFacingPenetration");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, LastAttachSocketName) == 912, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::LastAttachSocketName");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, LastBasePOV) == 928, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::LastBasePOV");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, DeltaBasePOV) == 3248, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::DeltaBasePOV");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, BlendAlpha) == 5568, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::BlendAlpha");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, PenetrationAvoidanceFeelers) == 5600, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::PenetrationAvoidanceFeelers");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, SafeLocToAimLineBlockedPct) == 5616, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::SafeLocToAimLineBlockedPct");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, AimLineToDesiredPosBlockedPct) == 5620, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::AimLineToDesiredPosBlockedPct");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, LastDrawDebugTime) == 5624, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::LastDrawDebugTime");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, LastViewTargetSpaceViewOffset) == 5632, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::LastViewTargetSpaceViewOffset");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, LastViewTargetAlignmentUp) == 5656, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::LastViewTargetAlignmentUp");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, ViewTargetAlignmentFlipInterpTime) == 5680, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::ViewTargetAlignmentFlipInterpTime");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, LastCameraPivot) == 5688, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::LastCameraPivot");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CachedLookAtLocation) == 5712, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CachedLookAtLocation");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CachedPitchLimitMin) == 5744, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CachedPitchLimitMin");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CachedPitchLimitMax) == 5748, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CachedPitchLimitMax");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CachedYawLimitMin) == 5752, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CachedYawLimitMin");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, CachedYawLimitMax) == 5756, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::CachedYawLimitMax");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bLastViewTargetValidGroupEmoteLookTarget) == 5760, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bLastViewTargetValidGroupEmoteLookTarget");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, IgnoreActorForCameraPenetration) == 5768, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::IgnoreActorForCameraPenetration");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, DebugActorsHitDuringCameraPenetration) == 5776, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::DebugActorsHitDuringCameraPenetration");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bWasInVehicle) == 5792, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bWasInVehicle");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, PreviousIgnoreActorForCameraPenetration) == 5800, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::PreviousIgnoreActorForCameraPenetration");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, PreviousVT) == 5808, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::PreviousVT");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bIsActive) == 8288, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bIsActive");
static_assert(offsetof(UAthena_PlayerCameraMode_Mantis_C, bLockCameraWhileInactive) == 8289, "Offset mismatch for UAthena_PlayerCameraMode_Mantis_C::bLockCameraWhileInactive");
