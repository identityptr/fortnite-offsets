/**
 * decamp dumper generated SDK
 * Package: /Script/GrappleParentRuntime
 */
#pragma once
#include "Basic.h"

// /Script/GrappleParentRuntime.SpeedScaledAxisOffsetData
// Kind: ScriptStruct; super: none
struct FSpeedScaledAxisOffsetData
{
public:
    std::uint8_t OffsetModifier[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    float BaseOffset; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float SpeedScaledOffset; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpeedBounds[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpeedMultiplierBounds[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpeedScaledAxisOffsetData, OffsetModifier) == 0, "Offset mismatch for FSpeedScaledAxisOffsetData::OffsetModifier");
static_assert(offsetof(FSpeedScaledAxisOffsetData, BaseOffset) == 40, "Offset mismatch for FSpeedScaledAxisOffsetData::BaseOffset");
static_assert(offsetof(FSpeedScaledAxisOffsetData, SpeedScaledOffset) == 44, "Offset mismatch for FSpeedScaledAxisOffsetData::SpeedScaledOffset");
static_assert(offsetof(FSpeedScaledAxisOffsetData, SpeedBounds) == 48, "Offset mismatch for FSpeedScaledAxisOffsetData::SpeedBounds");
static_assert(offsetof(FSpeedScaledAxisOffsetData, SpeedMultiplierBounds) == 64, "Offset mismatch for FSpeedScaledAxisOffsetData::SpeedMultiplierBounds");

// /Script/GrappleParentRuntime.FortCameraModifier_Swinging
// Kind: Class; super: CameraModifier
class UFortCameraModifier_Swinging
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float MaxVelocityDeltaPerSecond; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    void* BlendInCurve; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* BlendOutCurve; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ForwardOffsetData[0x60]; // 0x0060 (Size: 0x60, Type: StructProperty)
    std::uint8_t TotalForwardOffsetBounds[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RightOffsetData[0x60]; // 0x00D0 (Size: 0x60, Type: StructProperty)
    std::uint8_t RightForwardOffsetMultiplierBounds[0x10]; // 0x0130 (Size: 0x10, Type: StructProperty)
    std::uint8_t UpOffsetData[0x60]; // 0x0140 (Size: 0x60, Type: StructProperty)
    std::uint8_t UpPositiveForwardOffsetMultiplierBounds[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t UpNegativeForwardOffsetMultiplierBounds[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    float FOVInterpSpeed; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x01C4
    std::uint8_t FOVBounds[0x10]; // 0x01C8 (Size: 0x10, Type: StructProperty)
    void* BoostCurve; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoostModifier[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    float AttachBoostDuration; // 0x0208 (Size: 0x4, Type: FloatProperty)
    float AttachBoostMagnitude; // 0x020C (Size: 0x4, Type: FloatProperty)
    float DetachBoostDuration; // 0x0210 (Size: 0x4, Type: FloatProperty)
    float DetachBoostMagnitude; // 0x0214 (Size: 0x4, Type: FloatProperty)
    void* SlidingHeightCurve; // 0x0218 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SlidingGameplayTag[0x4]; // 0x0220 (Size: 0x4, Type: StructProperty)
    float SlideHeightTransitionDuration; // 0x0224 (Size: 0x4, Type: FloatProperty)
    float MaxSlidingSpeedMultiplierOffset; // 0x0228 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x022C
    void* CachedPlayer; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    void* CachedWeapon; // 0x0238 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCameraModifier_Swinging, MaxVelocityDeltaPerSecond) == 72, "Offset mismatch for UFortCameraModifier_Swinging::MaxVelocityDeltaPerSecond");
static_assert(offsetof(UFortCameraModifier_Swinging, BlendInCurve) == 80, "Offset mismatch for UFortCameraModifier_Swinging::BlendInCurve");
static_assert(offsetof(UFortCameraModifier_Swinging, BlendOutCurve) == 88, "Offset mismatch for UFortCameraModifier_Swinging::BlendOutCurve");
static_assert(offsetof(UFortCameraModifier_Swinging, ForwardOffsetData) == 96, "Offset mismatch for UFortCameraModifier_Swinging::ForwardOffsetData");
static_assert(offsetof(UFortCameraModifier_Swinging, TotalForwardOffsetBounds) == 192, "Offset mismatch for UFortCameraModifier_Swinging::TotalForwardOffsetBounds");
static_assert(offsetof(UFortCameraModifier_Swinging, RightOffsetData) == 208, "Offset mismatch for UFortCameraModifier_Swinging::RightOffsetData");
static_assert(offsetof(UFortCameraModifier_Swinging, RightForwardOffsetMultiplierBounds) == 304, "Offset mismatch for UFortCameraModifier_Swinging::RightForwardOffsetMultiplierBounds");
static_assert(offsetof(UFortCameraModifier_Swinging, UpOffsetData) == 320, "Offset mismatch for UFortCameraModifier_Swinging::UpOffsetData");
static_assert(offsetof(UFortCameraModifier_Swinging, UpPositiveForwardOffsetMultiplierBounds) == 416, "Offset mismatch for UFortCameraModifier_Swinging::UpPositiveForwardOffsetMultiplierBounds");
static_assert(offsetof(UFortCameraModifier_Swinging, UpNegativeForwardOffsetMultiplierBounds) == 432, "Offset mismatch for UFortCameraModifier_Swinging::UpNegativeForwardOffsetMultiplierBounds");
static_assert(offsetof(UFortCameraModifier_Swinging, FOVInterpSpeed) == 448, "Offset mismatch for UFortCameraModifier_Swinging::FOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Swinging, FOVBounds) == 456, "Offset mismatch for UFortCameraModifier_Swinging::FOVBounds");
static_assert(offsetof(UFortCameraModifier_Swinging, BoostCurve) == 472, "Offset mismatch for UFortCameraModifier_Swinging::BoostCurve");
static_assert(offsetof(UFortCameraModifier_Swinging, BoostModifier) == 480, "Offset mismatch for UFortCameraModifier_Swinging::BoostModifier");
static_assert(offsetof(UFortCameraModifier_Swinging, AttachBoostDuration) == 520, "Offset mismatch for UFortCameraModifier_Swinging::AttachBoostDuration");
static_assert(offsetof(UFortCameraModifier_Swinging, AttachBoostMagnitude) == 524, "Offset mismatch for UFortCameraModifier_Swinging::AttachBoostMagnitude");
static_assert(offsetof(UFortCameraModifier_Swinging, DetachBoostDuration) == 528, "Offset mismatch for UFortCameraModifier_Swinging::DetachBoostDuration");
static_assert(offsetof(UFortCameraModifier_Swinging, DetachBoostMagnitude) == 532, "Offset mismatch for UFortCameraModifier_Swinging::DetachBoostMagnitude");
static_assert(offsetof(UFortCameraModifier_Swinging, SlidingHeightCurve) == 536, "Offset mismatch for UFortCameraModifier_Swinging::SlidingHeightCurve");
static_assert(offsetof(UFortCameraModifier_Swinging, SlidingGameplayTag) == 544, "Offset mismatch for UFortCameraModifier_Swinging::SlidingGameplayTag");
static_assert(offsetof(UFortCameraModifier_Swinging, SlideHeightTransitionDuration) == 548, "Offset mismatch for UFortCameraModifier_Swinging::SlideHeightTransitionDuration");
static_assert(offsetof(UFortCameraModifier_Swinging, MaxSlidingSpeedMultiplierOffset) == 552, "Offset mismatch for UFortCameraModifier_Swinging::MaxSlidingSpeedMultiplierOffset");
static_assert(offsetof(UFortCameraModifier_Swinging, CachedPlayer) == 560, "Offset mismatch for UFortCameraModifier_Swinging::CachedPlayer");
static_assert(offsetof(UFortCameraModifier_Swinging, CachedWeapon) == 568, "Offset mismatch for UFortCameraModifier_Swinging::CachedWeapon");

// /Script/GrappleParentRuntime.FortSwingingLayerAnimInstance
// Kind: Class; super: FortBaseLayerAnimInstance
class UFortSwingingLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* MainAnimBP; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* player; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IsGroundSwing; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsFemale; // 0x0351 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0352
    float PlayerDistanceToGround; // 0x0354 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CalculateRotation; // 0x0358 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0359
    std::uint8_t ForwardInfluenceOnRotation[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeForMaxRotationSpeed[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxRotationSpeed[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RotationSpeedWhileNotAttached[0x28]; // 0x03D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RotationSpeedWhileNotRotated[0x28]; // 0x0400 (Size: 0x28, Type: StructProperty)
    void* GetAttachedActor; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t isFreeFalling; // 0x0430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsAttached; // 0x0431 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsNotAttachedToCliff; // 0x0432 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x5]; // 0x0433
    std::uint8_t Velocity[0x18]; // 0x0438 (Size: 0x18, Type: StructProperty)
    std::uint8_t XYVelocity[0x18]; // 0x0450 (Size: 0x18, Type: StructProperty)
    std::uint8_t VecFromPlayerToAttachPoint[0x18]; // 0x0468 (Size: 0x18, Type: StructProperty)
    float PitchAngleFromAttachPoint; // 0x0480 (Size: 0x4, Type: FloatProperty)
    float RollAngle; // 0x0484 (Size: 0x4, Type: FloatProperty)
    float YawAngleToAttachTarget; // 0x0488 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurveName_SwingPhase[0x4]; // 0x048C (Size: 0x4, Type: NameProperty)
    std::uint8_t CurveName_BlendOut[0x4]; // 0x0490 (Size: 0x4, Type: NameProperty)
    float SwingPhase; // 0x0494 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentRootRotation[0x18]; // 0x0498 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentRootTranslation[0x18]; // 0x04B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t IsSwingRelease1; // 0x04C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsSwingRelease2; // 0x04C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsSwingRelease3; // 0x04CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsSwingRelease4; // 0x04CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsSwingRelease5; // 0x04CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsSwingReleaseSkid; // 0x04CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsMovingAttachPoint; // 0x04CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsBlendOut; // 0x04CF (Size: 0x1, Type: BoolProperty)
    float WebCastAttachDirection; // 0x04D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsWebCastDown; // 0x04D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsSwingOneHand; // 0x04D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsRandomHandBool; // 0x04D6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsRandomSwingReleaseBool; // 0x04D7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsRandomeReleaseBool; // 0x04D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsWithin100UnitsOfGround; // 0x04D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsHanging; // 0x04DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsFallRelease; // 0x04DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsOnGroundWebCast; // 0x04DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsSwingNearGroundToSkid; // 0x04DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsHangToSwingInAir; // 0x04DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsHangToSwingNearGround; // 0x04DF (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortSwingingLayerAnimInstance, MainAnimBP) == 832, "Offset mismatch for UFortSwingingLayerAnimInstance::MainAnimBP");
static_assert(offsetof(UFortSwingingLayerAnimInstance, player) == 840, "Offset mismatch for UFortSwingingLayerAnimInstance::player");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsGroundSwing) == 848, "Offset mismatch for UFortSwingingLayerAnimInstance::IsGroundSwing");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsFemale) == 849, "Offset mismatch for UFortSwingingLayerAnimInstance::IsFemale");
static_assert(offsetof(UFortSwingingLayerAnimInstance, PlayerDistanceToGround) == 852, "Offset mismatch for UFortSwingingLayerAnimInstance::PlayerDistanceToGround");
static_assert(offsetof(UFortSwingingLayerAnimInstance, CalculateRotation) == 856, "Offset mismatch for UFortSwingingLayerAnimInstance::CalculateRotation");
static_assert(offsetof(UFortSwingingLayerAnimInstance, ForwardInfluenceOnRotation) == 864, "Offset mismatch for UFortSwingingLayerAnimInstance::ForwardInfluenceOnRotation");
static_assert(offsetof(UFortSwingingLayerAnimInstance, TimeForMaxRotationSpeed) == 904, "Offset mismatch for UFortSwingingLayerAnimInstance::TimeForMaxRotationSpeed");
static_assert(offsetof(UFortSwingingLayerAnimInstance, MaxRotationSpeed) == 944, "Offset mismatch for UFortSwingingLayerAnimInstance::MaxRotationSpeed");
static_assert(offsetof(UFortSwingingLayerAnimInstance, RotationSpeedWhileNotAttached) == 984, "Offset mismatch for UFortSwingingLayerAnimInstance::RotationSpeedWhileNotAttached");
static_assert(offsetof(UFortSwingingLayerAnimInstance, RotationSpeedWhileNotRotated) == 1024, "Offset mismatch for UFortSwingingLayerAnimInstance::RotationSpeedWhileNotRotated");
static_assert(offsetof(UFortSwingingLayerAnimInstance, GetAttachedActor) == 1064, "Offset mismatch for UFortSwingingLayerAnimInstance::GetAttachedActor");
static_assert(offsetof(UFortSwingingLayerAnimInstance, isFreeFalling) == 1072, "Offset mismatch for UFortSwingingLayerAnimInstance::isFreeFalling");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsAttached) == 1073, "Offset mismatch for UFortSwingingLayerAnimInstance::IsAttached");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsNotAttachedToCliff) == 1074, "Offset mismatch for UFortSwingingLayerAnimInstance::IsNotAttachedToCliff");
static_assert(offsetof(UFortSwingingLayerAnimInstance, Velocity) == 1080, "Offset mismatch for UFortSwingingLayerAnimInstance::Velocity");
static_assert(offsetof(UFortSwingingLayerAnimInstance, XYVelocity) == 1104, "Offset mismatch for UFortSwingingLayerAnimInstance::XYVelocity");
static_assert(offsetof(UFortSwingingLayerAnimInstance, VecFromPlayerToAttachPoint) == 1128, "Offset mismatch for UFortSwingingLayerAnimInstance::VecFromPlayerToAttachPoint");
static_assert(offsetof(UFortSwingingLayerAnimInstance, PitchAngleFromAttachPoint) == 1152, "Offset mismatch for UFortSwingingLayerAnimInstance::PitchAngleFromAttachPoint");
static_assert(offsetof(UFortSwingingLayerAnimInstance, RollAngle) == 1156, "Offset mismatch for UFortSwingingLayerAnimInstance::RollAngle");
static_assert(offsetof(UFortSwingingLayerAnimInstance, YawAngleToAttachTarget) == 1160, "Offset mismatch for UFortSwingingLayerAnimInstance::YawAngleToAttachTarget");
static_assert(offsetof(UFortSwingingLayerAnimInstance, CurveName_SwingPhase) == 1164, "Offset mismatch for UFortSwingingLayerAnimInstance::CurveName_SwingPhase");
static_assert(offsetof(UFortSwingingLayerAnimInstance, CurveName_BlendOut) == 1168, "Offset mismatch for UFortSwingingLayerAnimInstance::CurveName_BlendOut");
static_assert(offsetof(UFortSwingingLayerAnimInstance, SwingPhase) == 1172, "Offset mismatch for UFortSwingingLayerAnimInstance::SwingPhase");
static_assert(offsetof(UFortSwingingLayerAnimInstance, CurrentRootRotation) == 1176, "Offset mismatch for UFortSwingingLayerAnimInstance::CurrentRootRotation");
static_assert(offsetof(UFortSwingingLayerAnimInstance, CurrentRootTranslation) == 1200, "Offset mismatch for UFortSwingingLayerAnimInstance::CurrentRootTranslation");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingRelease1) == 1224, "Offset mismatch for UFortSwingingLayerAnimInstance::IsSwingRelease1");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingRelease2) == 1225, "Offset mismatch for UFortSwingingLayerAnimInstance::IsSwingRelease2");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingRelease3) == 1226, "Offset mismatch for UFortSwingingLayerAnimInstance::IsSwingRelease3");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingRelease4) == 1227, "Offset mismatch for UFortSwingingLayerAnimInstance::IsSwingRelease4");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingRelease5) == 1228, "Offset mismatch for UFortSwingingLayerAnimInstance::IsSwingRelease5");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingReleaseSkid) == 1229, "Offset mismatch for UFortSwingingLayerAnimInstance::IsSwingReleaseSkid");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsMovingAttachPoint) == 1230, "Offset mismatch for UFortSwingingLayerAnimInstance::IsMovingAttachPoint");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsBlendOut) == 1231, "Offset mismatch for UFortSwingingLayerAnimInstance::IsBlendOut");
static_assert(offsetof(UFortSwingingLayerAnimInstance, WebCastAttachDirection) == 1232, "Offset mismatch for UFortSwingingLayerAnimInstance::WebCastAttachDirection");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsWebCastDown) == 1236, "Offset mismatch for UFortSwingingLayerAnimInstance::IsWebCastDown");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingOneHand) == 1237, "Offset mismatch for UFortSwingingLayerAnimInstance::IsSwingOneHand");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsRandomHandBool) == 1238, "Offset mismatch for UFortSwingingLayerAnimInstance::IsRandomHandBool");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsRandomSwingReleaseBool) == 1239, "Offset mismatch for UFortSwingingLayerAnimInstance::IsRandomSwingReleaseBool");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsRandomeReleaseBool) == 1240, "Offset mismatch for UFortSwingingLayerAnimInstance::IsRandomeReleaseBool");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsWithin100UnitsOfGround) == 1241, "Offset mismatch for UFortSwingingLayerAnimInstance::IsWithin100UnitsOfGround");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsHanging) == 1242, "Offset mismatch for UFortSwingingLayerAnimInstance::IsHanging");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsFallRelease) == 1243, "Offset mismatch for UFortSwingingLayerAnimInstance::IsFallRelease");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsOnGroundWebCast) == 1244, "Offset mismatch for UFortSwingingLayerAnimInstance::IsOnGroundWebCast");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingNearGroundToSkid) == 1245, "Offset mismatch for UFortSwingingLayerAnimInstance::IsSwingNearGroundToSkid");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsHangToSwingInAir) == 1246, "Offset mismatch for UFortSwingingLayerAnimInstance::IsHangToSwingInAir");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsHangToSwingNearGround) == 1247, "Offset mismatch for UFortSwingingLayerAnimInstance::IsHangToSwingNearGround");
