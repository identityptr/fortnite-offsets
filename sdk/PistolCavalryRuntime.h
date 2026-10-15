/**
 * decamp dumper generated SDK
 * Package: /Script/PistolCavalryRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PistolCavalryRuntime.FortMovementMode_CreationData_ShotHop
// Kind: ScriptStruct; super: FortMovementMode_GuidedMotionCreationData
struct FFortMovementMode_CreationData_ShotHop
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t HopVelocity[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortMovementMode_CreationData_ShotHop, HopVelocity) == 160, "Offset mismatch for FFortMovementMode_CreationData_ShotHop::HopVelocity");

// /Script/PistolCavalryRuntime.FortMovementMode_ExtLogic_ShotHop
// Kind: Class; super: FortMovementMode_ExtGuidedMotion
class UFortMovementMode_ExtLogic_ShotHop
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

static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, GuideMode) == 440, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::GuideMode");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, Priority) == 444, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::Priority");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bSetNewMovementMode) == 448, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bSetNewMovementMode");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bSetFallingOnLift) == 449, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bSetFallingOnLift");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, MovementModeToSetOnStart) == 450, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::MovementModeToSetOnStart");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bRestoreOldMovementModeOnDeactivate) == 451, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bRestoreOldMovementModeOnDeactivate");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, DurationType) == 452, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::DurationType");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, MaxDuration) == 456, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::MaxDuration");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, VerifyMaxDurationOverride) == 500, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::VerifyMaxDurationOverride");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, VerifyWorldCeilingHeightOverride) == 508, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::VerifyWorldCeilingHeightOverride");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, PathOffsetCurve) == 520, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::PathOffsetCurve");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, TimeMappingCurve) == 528, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::TimeMappingCurve");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bIsAdditive) == 536, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bIsAdditive");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bSmoothOutTransitionToFinish) == 537, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bSmoothOutTransitionToFinish");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, FinishVelocityMode) == 538, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::FinishVelocityMode");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, FinishVelocityToSet) == 544, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::FinishVelocityToSet");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, FinishVelocityToClamp) == 568, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::FinishVelocityToClamp");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bEndOnLaunchCharacter) == 612, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bEndOnLaunchCharacter");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, OptionalBoolConfiguration) == 616, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::OptionalBoolConfiguration");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, OptionalFloatConfiguration) == 632, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::OptionalFloatConfiguration");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, CalculateFinishVelocityConfig) == 648, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::CalculateFinishVelocityConfig");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, MovementDelta) == 888, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::MovementDelta");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, MaxSpeed) == 912, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::MaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, TargetLerpSpeedHorizontalCurve) == 960, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::TargetLerpSpeedHorizontalCurve");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, TargetLerpSpeedVerticalCurve) == 968, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::TargetLerpSpeedVerticalCurve");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, TargetOffsetType) == 976, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::TargetOffsetType");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, TargetOffsetX) == 984, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::TargetOffsetX");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, TargetOffsetY) == 1032, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::TargetOffsetY");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, TargetOffsetZ) == 1080, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::TargetOffsetZ");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, DefaultTargetLerpSpeedHorizontal) == 1124, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::DefaultTargetLerpSpeedHorizontal");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, DefaultTargetLerpSpeedVerticle) == 1128, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::DefaultTargetLerpSpeedVerticle");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bRestrictSpeedToExpected) == 1132, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bRestrictSpeedToExpected");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, MoveToTargetErrorAllowance) == 1136, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::MoveToTargetErrorAllowance");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, MaxMoveToTargetDistance) == 1144, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::MaxMoveToTargetDistance");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, MaxMoveToTargetDistanceTraveled) == 1192, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::MaxMoveToTargetDistanceTraveled");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, MaxMoveToInvalidTargetDistance) == 1240, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::MaxMoveToInvalidTargetDistance");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, Strength) == 1288, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::Strength");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, StrengthOverTime) == 1336, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::StrengthOverTime");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bUseAveragesForStrengthOverTime) == 1344, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bUseAveragesForStrengthOverTime");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, Direction) == 1352, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::Direction");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bEnableGravity) == 1376, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bEnableGravity");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bEnforceHeightAboveGround) == 1377, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bEnforceHeightAboveGround");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, HeightAboveGround) == 1384, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::HeightAboveGround");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, MaxHeightCorrectionSpeedMultiplier) == 1428, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::MaxHeightCorrectionSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogic_ShotHop, bUseNewBPAdjustRootMotionVelocity) == 1433, "Offset mismatch for UFortMovementMode_ExtLogic_ShotHop::bUseNewBPAdjustRootMotionVelocity");

// /Script/PistolCavalryRuntime.FortMovementMode_RuntimeData_ShotHop
// Kind: Class; super: FortMovementMode_GuidedMotionRuntimeData
class UFortMovementMode_RuntimeData_ShotHop
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t HopVelocity[0x1]; // 0x0240 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_RuntimeData_ShotHop, HopVelocity) == 576, "Offset mismatch for UFortMovementMode_RuntimeData_ShotHop::HopVelocity");
