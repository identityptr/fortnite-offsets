/**
 * decamp dumper generated SDK
 * Package: /Script/CherrySmokeDualRevolversGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CherrySmokeDualRevolversGameplayRuntime.CherrySmokeDualRevolverLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UCherrySmokeDualRevolverLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    double AdditiveLoopPlayRate; // 0x1170 (Size: 0x8, Type: DoubleProperty)
    double DodgeAngleRadians; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsHangtimeActive; // 0x1180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDidRebound; // 0x1181 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncompatibleMovement; // 0x1182 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReloading; // 0x1183 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAirDodgeActive; // 0x1184 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoubleJumpActive; // 0x1185 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLeftDodgeSpace; // 0x1186 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterDodgeStart; // 0x1187 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLastHandFireLeft; // 0x1188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanFall; // 0x1189 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterDoubleJump; // 0x118A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x118B
    std::uint8_t CurrentWorldSpaceDodgeDirection[0x18]; // 0x1190 (Size: 0x18, Type: StructProperty)
    std::uint8_t InitialDodgeDirection[0x18]; // 0x11A8 (Size: 0x18, Type: StructProperty)
    float LastDodgeDirection; // 0x11C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x11C4
    double InAirTime; // 0x11C8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t IncompatibleMovementTags[0x20]; // 0x11D0 (Size: 0x20, Type: StructProperty)
    double HangtimeAnimationRate; // 0x11F0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, AdditiveLoopPlayRate) == 4464, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::AdditiveLoopPlayRate");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, DodgeAngleRadians) == 4472, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::DodgeAngleRadians");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bIsHangtimeActive) == 4480, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bIsHangtimeActive");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bDidRebound) == 4481, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bDidRebound");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bIncompatibleMovement) == 4482, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bIncompatibleMovement");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bReloading) == 4483, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bReloading");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bAirDodgeActive) == 4484, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bAirDodgeActive");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bDoubleJumpActive) == 4485, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bDoubleJumpActive");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bIsLeftDodgeSpace) == 4486, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bIsLeftDodgeSpace");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bCanEnterDodgeStart) == 4487, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bCanEnterDodgeStart");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bIsLastHandFireLeft) == 4488, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bIsLastHandFireLeft");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bCanFall) == 4489, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bCanFall");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, bCanEnterDoubleJump) == 4490, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::bCanEnterDoubleJump");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, CurrentWorldSpaceDodgeDirection) == 4496, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::CurrentWorldSpaceDodgeDirection");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, InitialDodgeDirection) == 4520, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::InitialDodgeDirection");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, LastDodgeDirection) == 4544, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::LastDodgeDirection");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, InAirTime) == 4552, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::InAirTime");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, IncompatibleMovementTags) == 4560, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::IncompatibleMovementTags");
static_assert(offsetof(UCherrySmokeDualRevolverLayerAnimInstance, HangtimeAnimationRate) == 4592, "Offset mismatch for UCherrySmokeDualRevolverLayerAnimInstance::HangtimeAnimationRate");

// /Script/CherrySmokeDualRevolversGameplayRuntime.CherrySmokeDualRevolverPawnComponentAnimInterface
// Kind: Class; super: Interface
class UCherrySmokeDualRevolverPawnComponentAnimInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CherrySmokeDualRevolversGameplayRuntime.CherrySmokeDualRevolverWeaponAnimInterface
// Kind: Class; super: Interface
class UCherrySmokeDualRevolverWeaponAnimInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CherrySmokeDualRevolversGameplayRuntime.FortMovementMode_HangTime
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_HangTime
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t TimeDilationScale[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaximumDurationSeconds[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExtraVelocityUpwards[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlendInSeconds[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    void* BlendInCurve; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlendOutNonDilatedTimeToGroundSeconds[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    void* BlendOutCurve; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConstantVelocityOffset[0x18]; // 0x0290 (Size: 0x18, Type: StructProperty)
    float CachedMaximumDurationSeconds; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float CachedTimeDilationScale; // 0x02AC (Size: 0x4, Type: FloatProperty)
    float CachedBlendInSeconds; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float CachedBlendOutNonDilatedTimeToGroundSeconds; // 0x02B4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_HangTime, TimeDilationScale) == 440, "Offset mismatch for UFortMovementMode_HangTime::TimeDilationScale");
static_assert(offsetof(UFortMovementMode_HangTime, MaximumDurationSeconds) == 480, "Offset mismatch for UFortMovementMode_HangTime::MaximumDurationSeconds");
static_assert(offsetof(UFortMovementMode_HangTime, ExtraVelocityUpwards) == 520, "Offset mismatch for UFortMovementMode_HangTime::ExtraVelocityUpwards");
static_assert(offsetof(UFortMovementMode_HangTime, BlendInSeconds) == 560, "Offset mismatch for UFortMovementMode_HangTime::BlendInSeconds");
static_assert(offsetof(UFortMovementMode_HangTime, BlendInCurve) == 600, "Offset mismatch for UFortMovementMode_HangTime::BlendInCurve");
static_assert(offsetof(UFortMovementMode_HangTime, BlendOutNonDilatedTimeToGroundSeconds) == 608, "Offset mismatch for UFortMovementMode_HangTime::BlendOutNonDilatedTimeToGroundSeconds");
static_assert(offsetof(UFortMovementMode_HangTime, BlendOutCurve) == 648, "Offset mismatch for UFortMovementMode_HangTime::BlendOutCurve");
static_assert(offsetof(UFortMovementMode_HangTime, ConstantVelocityOffset) == 656, "Offset mismatch for UFortMovementMode_HangTime::ConstantVelocityOffset");
static_assert(offsetof(UFortMovementMode_HangTime, CachedMaximumDurationSeconds) == 680, "Offset mismatch for UFortMovementMode_HangTime::CachedMaximumDurationSeconds");
static_assert(offsetof(UFortMovementMode_HangTime, CachedTimeDilationScale) == 684, "Offset mismatch for UFortMovementMode_HangTime::CachedTimeDilationScale");
static_assert(offsetof(UFortMovementMode_HangTime, CachedBlendInSeconds) == 688, "Offset mismatch for UFortMovementMode_HangTime::CachedBlendInSeconds");
static_assert(offsetof(UFortMovementMode_HangTime, CachedBlendOutNonDilatedTimeToGroundSeconds) == 692, "Offset mismatch for UFortMovementMode_HangTime::CachedBlendOutNonDilatedTimeToGroundSeconds");

// /Script/CherrySmokeDualRevolversGameplayRuntime.FortMovementMode_HangTimeDilatedMotion
// Kind: Class; super: FortMovementMode_ExtGuidedMotion
class UFortMovementMode_HangTimeDilatedMotion
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t GuideMode; // 0x01B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01B9
    std::int32_t Priority; // 0x01BC (Size: 0x4, Type: IntProperty)
    std::uint8_t bSetNewMovementMode; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetFallingOnLift; // 0x01C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MovementModeToSetOnStart; // 0x01C2 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRestoreOldMovementModeOnDeactivate; // 0x01C3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DurationType; // 0x01C4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01C5
    std::uint8_t MaxDuration[0x2C]; // 0x01C8 (Size: 0x2C, Type: StructProperty)
    std::uint8_t VerifyMaxDurationOverride[0x8]; // 0x01F4 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t VerifyWorldCeilingHeightOverride[0xC]; // 0x01FC (Size: 0xC, Type: OptionalProperty)
    void* PathOffsetCurve; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    void* TimeMappingCurve; // 0x0210 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsAdditive; // 0x0218 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSmoothOutTransitionToFinish; // 0x0219 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FinishVelocityMode; // 0x021A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x5]; // 0x021B
    std::uint8_t FinishVelocityToSet[0x18]; // 0x0220 (Size: 0x18, Type: StructProperty)
    std::uint8_t FinishVelocityToClamp[0x2C]; // 0x0238 (Size: 0x2C, Type: StructProperty)
    std::uint8_t bEndOnLaunchCharacter; // 0x0264 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0265
    TArray<void*> OptionalBoolConfiguration; // 0x0268 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OptionalFloatConfiguration; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CalculateFinishVelocityConfig[0xF0]; // 0x0288 (Size: 0xF0, Type: StructProperty)
    std::uint8_t MovementDelta[0x18]; // 0x0378 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxSpeed[0x30]; // 0x0390 (Size: 0x30, Type: StructProperty)
    void* TargetLerpSpeedHorizontalCurve; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* TargetLerpSpeedVerticalCurve; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetOffsetType; // 0x03D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x7]; // 0x03D1
    std::uint8_t TargetOffsetX[0x30]; // 0x03D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetOffsetY[0x30]; // 0x0408 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetOffsetZ[0x2C]; // 0x0438 (Size: 0x2C, Type: StructProperty)
    float DefaultTargetLerpSpeedHorizontal; // 0x0464 (Size: 0x4, Type: FloatProperty)
    float DefaultTargetLerpSpeedVerticle; // 0x0468 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRestrictSpeedToExpected; // 0x046C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x046D
    float MoveToTargetErrorAllowance; // 0x0470 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x4]; // 0x0474
    std::uint8_t MaxMoveToTargetDistance[0x30]; // 0x0478 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxMoveToTargetDistanceTraveled[0x30]; // 0x04A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxMoveToInvalidTargetDistance[0x30]; // 0x04D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Strength[0x30]; // 0x0508 (Size: 0x30, Type: StructProperty)
    void* StrengthOverTime; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseAveragesForStrengthOverTime; // 0x0540 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0541
    std::uint8_t Direction[0x18]; // 0x0548 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnableGravity; // 0x0560 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnforceHeightAboveGround; // 0x0561 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x6]; // 0x0562
    std::uint8_t HeightAboveGround[0x2C]; // 0x0568 (Size: 0x2C, Type: StructProperty)
    float MaxHeightCorrectionSpeedMultiplier; // 0x0594 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000A[0x1]; // 0x0598
    std::uint8_t bUseNewBPAdjustRootMotionVelocity; // 0x0599 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, GuideMode) == 440, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::GuideMode");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, Priority) == 444, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::Priority");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bSetNewMovementMode) == 448, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bSetNewMovementMode");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bSetFallingOnLift) == 449, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bSetFallingOnLift");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, MovementModeToSetOnStart) == 450, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::MovementModeToSetOnStart");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bRestoreOldMovementModeOnDeactivate) == 451, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bRestoreOldMovementModeOnDeactivate");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, DurationType) == 452, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::DurationType");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, MaxDuration) == 456, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::MaxDuration");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, VerifyMaxDurationOverride) == 500, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::VerifyMaxDurationOverride");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, VerifyWorldCeilingHeightOverride) == 508, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::VerifyWorldCeilingHeightOverride");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, PathOffsetCurve) == 520, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::PathOffsetCurve");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, TimeMappingCurve) == 528, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::TimeMappingCurve");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bIsAdditive) == 536, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bIsAdditive");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bSmoothOutTransitionToFinish) == 537, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bSmoothOutTransitionToFinish");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, FinishVelocityMode) == 538, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::FinishVelocityMode");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, FinishVelocityToSet) == 544, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::FinishVelocityToSet");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, FinishVelocityToClamp) == 568, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::FinishVelocityToClamp");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bEndOnLaunchCharacter) == 612, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bEndOnLaunchCharacter");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, OptionalBoolConfiguration) == 616, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::OptionalBoolConfiguration");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, OptionalFloatConfiguration) == 632, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::OptionalFloatConfiguration");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, CalculateFinishVelocityConfig) == 648, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::CalculateFinishVelocityConfig");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, MovementDelta) == 888, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::MovementDelta");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, MaxSpeed) == 912, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::MaxSpeed");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, TargetLerpSpeedHorizontalCurve) == 960, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::TargetLerpSpeedHorizontalCurve");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, TargetLerpSpeedVerticalCurve) == 968, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::TargetLerpSpeedVerticalCurve");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, TargetOffsetType) == 976, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::TargetOffsetType");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, TargetOffsetX) == 984, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::TargetOffsetX");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, TargetOffsetY) == 1032, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::TargetOffsetY");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, TargetOffsetZ) == 1080, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::TargetOffsetZ");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, DefaultTargetLerpSpeedHorizontal) == 1124, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::DefaultTargetLerpSpeedHorizontal");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, DefaultTargetLerpSpeedVerticle) == 1128, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::DefaultTargetLerpSpeedVerticle");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bRestrictSpeedToExpected) == 1132, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bRestrictSpeedToExpected");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, MoveToTargetErrorAllowance) == 1136, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::MoveToTargetErrorAllowance");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, MaxMoveToTargetDistance) == 1144, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::MaxMoveToTargetDistance");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, MaxMoveToTargetDistanceTraveled) == 1192, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::MaxMoveToTargetDistanceTraveled");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, MaxMoveToInvalidTargetDistance) == 1240, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::MaxMoveToInvalidTargetDistance");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, Strength) == 1288, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::Strength");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, StrengthOverTime) == 1336, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::StrengthOverTime");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bUseAveragesForStrengthOverTime) == 1344, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bUseAveragesForStrengthOverTime");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, Direction) == 1352, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::Direction");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bEnableGravity) == 1376, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bEnableGravity");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bEnforceHeightAboveGround) == 1377, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bEnforceHeightAboveGround");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, HeightAboveGround) == 1384, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::HeightAboveGround");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, MaxHeightCorrectionSpeedMultiplier) == 1428, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::MaxHeightCorrectionSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_HangTimeDilatedMotion, bUseNewBPAdjustRootMotionVelocity) == 1433, "Offset mismatch for UFortMovementMode_HangTimeDilatedMotion::bUseNewBPAdjustRootMotionVelocity");

// /Script/CherrySmokeDualRevolversGameplayRuntime.FortMovementMode_HangTimeRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_HangTimeRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortMovementMode_HangTimeRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_HangTimeRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_HangTimeRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_HangTimeRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_HangTimeRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_HangTimeRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_HangTimeRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_HangTimeRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_HangTimeRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_HangTimeRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_HangTimeRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_HangTimeRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_HangTimeRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_HangTimeRuntimeData::EndReasonFlags");

// /Script/CherrySmokeDualRevolversGameplayRuntime.FortWeaponCherrySmokeDualRevolvers
// Kind: Class; super: FortWeaponRanged_DualWieldable
class UFortWeaponCherrySmokeDualRevolvers
{
public:
    std::uint8_t Pad_0000[0x29B8]; // 0x0000
    FMulticastInlineDelegate OnFireFailed; // 0x29B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x11]; // 0x29C8
    std::uint8_t bGateFireCall; // 0x29D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x29DA
    std::uint8_t IsFiringGameplayTag[0x4]; // 0x29DC (Size: 0x4, Type: StructProperty)
    std::uint8_t MuzzleLocationOffset[0x18]; // 0x29E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReloadingTag[0x4]; // 0x29F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t ReloadAbilityEventTag[0x4]; // 0x29FC (Size: 0x4, Type: StructProperty)
    std::uint8_t FireAbilityEventTag[0x1]; // 0x2A00 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortWeaponCherrySmokeDualRevolvers, OnFireFailed) == 10680, "Offset mismatch for UFortWeaponCherrySmokeDualRevolvers::OnFireFailed");
static_assert(offsetof(UFortWeaponCherrySmokeDualRevolvers, bGateFireCall) == 10713, "Offset mismatch for UFortWeaponCherrySmokeDualRevolvers::bGateFireCall");
static_assert(offsetof(UFortWeaponCherrySmokeDualRevolvers, IsFiringGameplayTag) == 10716, "Offset mismatch for UFortWeaponCherrySmokeDualRevolvers::IsFiringGameplayTag");
static_assert(offsetof(UFortWeaponCherrySmokeDualRevolvers, MuzzleLocationOffset) == 10720, "Offset mismatch for UFortWeaponCherrySmokeDualRevolvers::MuzzleLocationOffset");
static_assert(offsetof(UFortWeaponCherrySmokeDualRevolvers, ReloadingTag) == 10744, "Offset mismatch for UFortWeaponCherrySmokeDualRevolvers::ReloadingTag");
static_assert(offsetof(UFortWeaponCherrySmokeDualRevolvers, ReloadAbilityEventTag) == 10748, "Offset mismatch for UFortWeaponCherrySmokeDualRevolvers::ReloadAbilityEventTag");
static_assert(offsetof(UFortWeaponCherrySmokeDualRevolvers, FireAbilityEventTag) == 10752, "Offset mismatch for UFortWeaponCherrySmokeDualRevolvers::FireAbilityEventTag");
