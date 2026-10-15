/**
 * decamp dumper generated SDK
 * Package: /Script/GrindRailRuntime
 */
#pragma once
#include "Basic.h"

// /Script/GrindRailRuntime.FortAnimInput_GrindRail
// Kind: ScriptStruct; super: none
struct FFortAnimInput_GrindRail
{
public:
    std::uint8_t bAimBWD; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bAimFWD (shared storage)
    // 0x0000 BoolProperty bAimLFT (shared storage)
    // 0x0000 BoolProperty bAimRGT (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float AimFWDDeltaAngleDegrees; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AimBWDDeltaAngleDegrees; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AimLFTDeltaAngleDegrees; // 0x000C (Size: 0x4, Type: FloatProperty)
    float AimRGTDeltaAngleDegrees; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float PawnToSplineDeltaYawAngleDegrees; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAnimInput_GrindRail, bAimBWD) == 0, "Offset mismatch for FFortAnimInput_GrindRail::bAimBWD");
static_assert(offsetof(FFortAnimInput_GrindRail, AimFWDDeltaAngleDegrees) == 4, "Offset mismatch for FFortAnimInput_GrindRail::AimFWDDeltaAngleDegrees");
static_assert(offsetof(FFortAnimInput_GrindRail, AimBWDDeltaAngleDegrees) == 8, "Offset mismatch for FFortAnimInput_GrindRail::AimBWDDeltaAngleDegrees");
static_assert(offsetof(FFortAnimInput_GrindRail, AimLFTDeltaAngleDegrees) == 12, "Offset mismatch for FFortAnimInput_GrindRail::AimLFTDeltaAngleDegrees");
static_assert(offsetof(FFortAnimInput_GrindRail, AimRGTDeltaAngleDegrees) == 16, "Offset mismatch for FFortAnimInput_GrindRail::AimRGTDeltaAngleDegrees");
static_assert(offsetof(FFortAnimInput_GrindRail, PawnToSplineDeltaYawAngleDegrees) == 20, "Offset mismatch for FFortAnimInput_GrindRail::PawnToSplineDeltaYawAngleDegrees");

// /Script/GrindRailRuntime.FortAnimNode_GrindRailSlopeWarping
// Kind: ScriptStruct; super: FortAnimNode_SlopeWarping
struct FFortAnimNode_GrindRailSlopeWarping
{
public:
    std::uint8_t Pad_0000[0x328]; // 0x0000
    float BaseSplineRadius; // 0x0328 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAbsentCurveMeansFootDown; // 0x032C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x032D
    std::uint8_t LFootOnGroundCurveName[0x4]; // 0x0330 (Size: 0x4, Type: NameProperty)
    std::uint8_t bLeftCurveHighMeansFootDown; // 0x0334 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0335
    std::uint8_t RFootOnGroundCurveName[0x4]; // 0x0338 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDisableInterpolationOnFootOffset; // 0x033C (Size: 0x1, Type: BoolProperty)
    // 0x033C BoolProperty bRightCurveHighMeansFootDown (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x033D
    std::uint8_t LeftFootFKBone[0x1]; // 0x0340 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, BaseSplineRadius) == 808, "Offset mismatch for FFortAnimNode_GrindRailSlopeWarping::BaseSplineRadius");
static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, bAbsentCurveMeansFootDown) == 812, "Offset mismatch for FFortAnimNode_GrindRailSlopeWarping::bAbsentCurveMeansFootDown");
static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, LFootOnGroundCurveName) == 816, "Offset mismatch for FFortAnimNode_GrindRailSlopeWarping::LFootOnGroundCurveName");
static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, bLeftCurveHighMeansFootDown) == 820, "Offset mismatch for FFortAnimNode_GrindRailSlopeWarping::bLeftCurveHighMeansFootDown");
static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, RFootOnGroundCurveName) == 824, "Offset mismatch for FFortAnimNode_GrindRailSlopeWarping::RFootOnGroundCurveName");
static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, bDisableInterpolationOnFootOffset) == 828, "Offset mismatch for FFortAnimNode_GrindRailSlopeWarping::bDisableInterpolationOnFootOffset");
static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, LeftFootFKBone) == 832, "Offset mismatch for FFortAnimNode_GrindRailSlopeWarping::LeftFootFKBone");

// /Script/GrindRailRuntime.FortMovementMode_GrindingCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_GrindingCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_GrindingCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_GrindingCreationData::LogicClass");

// /Script/GrindRailRuntime.FortMovementMode_GrindingRailJumpResult
// Kind: ScriptStruct; super: none
struct FFortMovementMode_GrindingRailJumpResult
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GrindRailRuntime.FortRailPointSnapData
// Kind: ScriptStruct; super: none
struct FFortRailPointSnapData
{
public:
    void* RailToSnapTo; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PointToSnapTo; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortRailPointSnapData, RailToSnapTo) == 0, "Offset mismatch for FFortRailPointSnapData::RailToSnapTo");
static_assert(offsetof(FFortRailPointSnapData, PointToSnapTo) == 8, "Offset mismatch for FFortRailPointSnapData::PointToSnapTo");

// /Script/GrindRailRuntime.GrindRailBoosterInfo
// Kind: ScriptStruct; super: none
struct FGrindRailBoosterInfo
{
public:
    float MinDistanceAlongSpline; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceAlongSpline; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PositiveMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t NegativeMode; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGrindRailBoosterInfo, MinDistanceAlongSpline) == 0, "Offset mismatch for FGrindRailBoosterInfo::MinDistanceAlongSpline");
static_assert(offsetof(FGrindRailBoosterInfo, MaxDistanceAlongSpline) == 4, "Offset mismatch for FGrindRailBoosterInfo::MaxDistanceAlongSpline");
static_assert(offsetof(FGrindRailBoosterInfo, PositiveMode) == 8, "Offset mismatch for FGrindRailBoosterInfo::PositiveMode");
static_assert(offsetof(FGrindRailBoosterInfo, NegativeMode) == 9, "Offset mismatch for FGrindRailBoosterInfo::NegativeMode");

// /Script/GrindRailRuntime.GrindRailSpeedSettings
// Kind: ScriptStruct; super: none
struct FGrindRailSpeedSettings
{
public:
    float SprintAcceleration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxLeanAcceleration; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinLeanAcceleration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ShootingSpeedMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float GravityForceWhenGoingUp; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float GravityForceWhenGoingDown; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGrindRailSpeedSettings, SprintAcceleration) == 0, "Offset mismatch for FGrindRailSpeedSettings::SprintAcceleration");
static_assert(offsetof(FGrindRailSpeedSettings, MaxLeanAcceleration) == 4, "Offset mismatch for FGrindRailSpeedSettings::MaxLeanAcceleration");
static_assert(offsetof(FGrindRailSpeedSettings, MinLeanAcceleration) == 8, "Offset mismatch for FGrindRailSpeedSettings::MinLeanAcceleration");
static_assert(offsetof(FGrindRailSpeedSettings, ShootingSpeedMultiplier) == 12, "Offset mismatch for FGrindRailSpeedSettings::ShootingSpeedMultiplier");
static_assert(offsetof(FGrindRailSpeedSettings, GravityForceWhenGoingUp) == 16, "Offset mismatch for FGrindRailSpeedSettings::GravityForceWhenGoingUp");
static_assert(offsetof(FGrindRailSpeedSettings, GravityForceWhenGoingDown) == 20, "Offset mismatch for FGrindRailSpeedSettings::GravityForceWhenGoingDown");

// /Script/GrindRailRuntime.GrindingRequestCalculationData
// Kind: ScriptStruct; super: none
struct FGrindingRequestCalculationData
{
public:
    std::uint8_t ResultActorLocation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t ResultActorDirection[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float ResultDistanceOnSpline; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float ResultSpeed; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGrindingRequestCalculationData, ResultActorLocation) == 0, "Offset mismatch for FGrindingRequestCalculationData::ResultActorLocation");
static_assert(offsetof(FGrindingRequestCalculationData, ResultActorDirection) == 24, "Offset mismatch for FGrindingRequestCalculationData::ResultActorDirection");
static_assert(offsetof(FGrindingRequestCalculationData, ResultDistanceOnSpline) == 48, "Offset mismatch for FGrindingRequestCalculationData::ResultDistanceOnSpline");
static_assert(offsetof(FGrindingRequestCalculationData, ResultSpeed) == 52, "Offset mismatch for FGrindingRequestCalculationData::ResultSpeed");

// /Script/GrindRailRuntime.FortAthenaAIBotEvaluator_GrindRail
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_GrindRail
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t GrindRailTag[0x8]; // 0x00A8 (Size: 0x8, Type: StructProperty)
    std::uint8_t GrindDuration[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t GrindDurationRandomDeviation[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_GrindRail, GrindRailTag) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_GrindRail::GrindRailTag");
static_assert(offsetof(UFortAthenaAIBotEvaluator_GrindRail, GrindDuration) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_GrindRail::GrindDuration");
static_assert(offsetof(UFortAthenaAIBotEvaluator_GrindRail, GrindDurationRandomDeviation) == 216, "Offset mismatch for UFortAthenaAIBotEvaluator_GrindRail::GrindDurationRandomDeviation");

// /Script/GrindRailRuntime.FortCameraModifier_Grinding
// Kind: Class; super: CameraModifier
class UFortCameraModifier_Grinding
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bUseNativeCalculation[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    void* BlendInCurve; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* BlendOutCurve; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SnapToGrindingLocation[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t ADSAlphaInterpSpeed[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurrentForwardInterpSpeed[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxRightSpeedOldRangeForForward[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxRightSpeedNewRangeForForward[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinForwardSpeedOldRangeForForward[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxForwardSpeedOldRangeForForward[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinForwardSpeedNewRangeForForward[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxForwardSpeedNewRangeForForward[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinUpSpeedOldRangeForForward[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxUpSpeedOldRangeForForward[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinUpSpeedNewRangeForForward[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxUpSpeedNewRangeForForward[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseForwardMultiplier[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedUpBoosterForwardMultiplier[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintingForwardMultiplier[0x28]; // 0x02D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RightSpeedOldRangeForRight[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    std::uint8_t RightSpeedNewRangeForRight[0x28]; // 0x0328 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxUpSpeedOldRangeForRight[0x28]; // 0x0350 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxUpSpeedNewRangeForRight[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinForwardSpeedOldRangeForRight[0x28]; // 0x03A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxForwardSpeedOldRangeForRight[0x28]; // 0x03C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinForwardSpeedNewRangeForRight[0x28]; // 0x03F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxForwardSpeedNewRangeForRight[0x28]; // 0x0418 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseRightMultiplier[0x28]; // 0x0440 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedUpBoostRightMultiplier[0x28]; // 0x0468 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintingRightMultiplier[0x28]; // 0x0490 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurrentRightInterpSpeed[0x28]; // 0x04B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpSpeedOldRangeForUp[0x28]; // 0x04E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpSpeedNewRangeForUp[0x28]; // 0x0508 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurrentUpInterpSpeed[0x28]; // 0x0530 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseUpMultiplier[0x28]; // 0x0558 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedUpBoostUpMultiplier[0x28]; // 0x0580 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintingUpMultiplier[0x28]; // 0x05A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinForwardSpeedOldRangeForLean[0x28]; // 0x05D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxForwardSpeedOldRangeForLean[0x28]; // 0x05F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinForwardSpeedNewRangeForLean[0x28]; // 0x0620 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxForwardSpeedNewRangeForLean[0x28]; // 0x0648 (Size: 0x28, Type: StructProperty)
    std::uint8_t MultiplierForMaxNewLeanRange[0x28]; // 0x0670 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurrentLeanInterpSpeed[0x28]; // 0x0698 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpeedOldRangeForFOV[0x28]; // 0x06C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpeedNewRangeForFOV[0x28]; // 0x06E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseFOV[0x28]; // 0x0710 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedUpBoosterFOV[0x28]; // 0x0738 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintingFOV[0x28]; // 0x0760 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurrentFOVInterpSpeed[0x28]; // 0x0788 (Size: 0x28, Type: StructProperty)
    std::uint8_t DeltaDecreaseInZForOffset[0x28]; // 0x07B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurrentOffsetInterpSpeed[0x28]; // 0x07D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t StraightnessMultiplierForOffset[0x28]; // 0x0800 (Size: 0x28, Type: StructProperty)
    std::uint8_t FinalOffsetForwardDelta[0x28]; // 0x0828 (Size: 0x28, Type: StructProperty)
    std::uint8_t FinalOffsetUpDelta[0x28]; // 0x0850 (Size: 0x28, Type: StructProperty)
    std::uint8_t FinalOffsetRightDelta[0x78]; // 0x0878 (Size: 0x78, Type: StructProperty)
    std::uint8_t bCachedUseNativeCalculation; // 0x08F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCameraModifier_Grinding, bUseNativeCalculation) == 72, "Offset mismatch for UFortCameraModifier_Grinding::bUseNativeCalculation");
static_assert(offsetof(UFortCameraModifier_Grinding, BlendInCurve) == 112, "Offset mismatch for UFortCameraModifier_Grinding::BlendInCurve");
static_assert(offsetof(UFortCameraModifier_Grinding, BlendOutCurve) == 120, "Offset mismatch for UFortCameraModifier_Grinding::BlendOutCurve");
static_assert(offsetof(UFortCameraModifier_Grinding, SnapToGrindingLocation) == 128, "Offset mismatch for UFortCameraModifier_Grinding::SnapToGrindingLocation");
static_assert(offsetof(UFortCameraModifier_Grinding, ADSAlphaInterpSpeed) == 168, "Offset mismatch for UFortCameraModifier_Grinding::ADSAlphaInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentForwardInterpSpeed) == 208, "Offset mismatch for UFortCameraModifier_Grinding::CurrentForwardInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxRightSpeedOldRangeForForward) == 248, "Offset mismatch for UFortCameraModifier_Grinding::MaxRightSpeedOldRangeForForward");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxRightSpeedNewRangeForForward) == 288, "Offset mismatch for UFortCameraModifier_Grinding::MaxRightSpeedNewRangeForForward");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedOldRangeForForward) == 328, "Offset mismatch for UFortCameraModifier_Grinding::MinForwardSpeedOldRangeForForward");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedOldRangeForForward) == 368, "Offset mismatch for UFortCameraModifier_Grinding::MaxForwardSpeedOldRangeForForward");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedNewRangeForForward) == 408, "Offset mismatch for UFortCameraModifier_Grinding::MinForwardSpeedNewRangeForForward");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedNewRangeForForward) == 448, "Offset mismatch for UFortCameraModifier_Grinding::MaxForwardSpeedNewRangeForForward");
static_assert(offsetof(UFortCameraModifier_Grinding, MinUpSpeedOldRangeForForward) == 488, "Offset mismatch for UFortCameraModifier_Grinding::MinUpSpeedOldRangeForForward");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxUpSpeedOldRangeForForward) == 528, "Offset mismatch for UFortCameraModifier_Grinding::MaxUpSpeedOldRangeForForward");
static_assert(offsetof(UFortCameraModifier_Grinding, MinUpSpeedNewRangeForForward) == 568, "Offset mismatch for UFortCameraModifier_Grinding::MinUpSpeedNewRangeForForward");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxUpSpeedNewRangeForForward) == 608, "Offset mismatch for UFortCameraModifier_Grinding::MaxUpSpeedNewRangeForForward");
static_assert(offsetof(UFortCameraModifier_Grinding, BaseForwardMultiplier) == 648, "Offset mismatch for UFortCameraModifier_Grinding::BaseForwardMultiplier");
static_assert(offsetof(UFortCameraModifier_Grinding, SpeedUpBoosterForwardMultiplier) == 688, "Offset mismatch for UFortCameraModifier_Grinding::SpeedUpBoosterForwardMultiplier");
static_assert(offsetof(UFortCameraModifier_Grinding, SprintingForwardMultiplier) == 728, "Offset mismatch for UFortCameraModifier_Grinding::SprintingForwardMultiplier");
static_assert(offsetof(UFortCameraModifier_Grinding, RightSpeedOldRangeForRight) == 768, "Offset mismatch for UFortCameraModifier_Grinding::RightSpeedOldRangeForRight");
static_assert(offsetof(UFortCameraModifier_Grinding, RightSpeedNewRangeForRight) == 808, "Offset mismatch for UFortCameraModifier_Grinding::RightSpeedNewRangeForRight");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxUpSpeedOldRangeForRight) == 848, "Offset mismatch for UFortCameraModifier_Grinding::MaxUpSpeedOldRangeForRight");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxUpSpeedNewRangeForRight) == 888, "Offset mismatch for UFortCameraModifier_Grinding::MaxUpSpeedNewRangeForRight");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedOldRangeForRight) == 928, "Offset mismatch for UFortCameraModifier_Grinding::MinForwardSpeedOldRangeForRight");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedOldRangeForRight) == 968, "Offset mismatch for UFortCameraModifier_Grinding::MaxForwardSpeedOldRangeForRight");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedNewRangeForRight) == 1008, "Offset mismatch for UFortCameraModifier_Grinding::MinForwardSpeedNewRangeForRight");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedNewRangeForRight) == 1048, "Offset mismatch for UFortCameraModifier_Grinding::MaxForwardSpeedNewRangeForRight");
static_assert(offsetof(UFortCameraModifier_Grinding, BaseRightMultiplier) == 1088, "Offset mismatch for UFortCameraModifier_Grinding::BaseRightMultiplier");
static_assert(offsetof(UFortCameraModifier_Grinding, SpeedUpBoostRightMultiplier) == 1128, "Offset mismatch for UFortCameraModifier_Grinding::SpeedUpBoostRightMultiplier");
static_assert(offsetof(UFortCameraModifier_Grinding, SprintingRightMultiplier) == 1168, "Offset mismatch for UFortCameraModifier_Grinding::SprintingRightMultiplier");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentRightInterpSpeed) == 1208, "Offset mismatch for UFortCameraModifier_Grinding::CurrentRightInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Grinding, UpSpeedOldRangeForUp) == 1248, "Offset mismatch for UFortCameraModifier_Grinding::UpSpeedOldRangeForUp");
static_assert(offsetof(UFortCameraModifier_Grinding, UpSpeedNewRangeForUp) == 1288, "Offset mismatch for UFortCameraModifier_Grinding::UpSpeedNewRangeForUp");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentUpInterpSpeed) == 1328, "Offset mismatch for UFortCameraModifier_Grinding::CurrentUpInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Grinding, BaseUpMultiplier) == 1368, "Offset mismatch for UFortCameraModifier_Grinding::BaseUpMultiplier");
static_assert(offsetof(UFortCameraModifier_Grinding, SpeedUpBoostUpMultiplier) == 1408, "Offset mismatch for UFortCameraModifier_Grinding::SpeedUpBoostUpMultiplier");
static_assert(offsetof(UFortCameraModifier_Grinding, SprintingUpMultiplier) == 1448, "Offset mismatch for UFortCameraModifier_Grinding::SprintingUpMultiplier");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedOldRangeForLean) == 1488, "Offset mismatch for UFortCameraModifier_Grinding::MinForwardSpeedOldRangeForLean");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedOldRangeForLean) == 1528, "Offset mismatch for UFortCameraModifier_Grinding::MaxForwardSpeedOldRangeForLean");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedNewRangeForLean) == 1568, "Offset mismatch for UFortCameraModifier_Grinding::MinForwardSpeedNewRangeForLean");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedNewRangeForLean) == 1608, "Offset mismatch for UFortCameraModifier_Grinding::MaxForwardSpeedNewRangeForLean");
static_assert(offsetof(UFortCameraModifier_Grinding, MultiplierForMaxNewLeanRange) == 1648, "Offset mismatch for UFortCameraModifier_Grinding::MultiplierForMaxNewLeanRange");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentLeanInterpSpeed) == 1688, "Offset mismatch for UFortCameraModifier_Grinding::CurrentLeanInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxSpeedOldRangeForFOV) == 1728, "Offset mismatch for UFortCameraModifier_Grinding::MaxSpeedOldRangeForFOV");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxSpeedNewRangeForFOV) == 1768, "Offset mismatch for UFortCameraModifier_Grinding::MaxSpeedNewRangeForFOV");
static_assert(offsetof(UFortCameraModifier_Grinding, BaseFOV) == 1808, "Offset mismatch for UFortCameraModifier_Grinding::BaseFOV");
static_assert(offsetof(UFortCameraModifier_Grinding, SpeedUpBoosterFOV) == 1848, "Offset mismatch for UFortCameraModifier_Grinding::SpeedUpBoosterFOV");
static_assert(offsetof(UFortCameraModifier_Grinding, SprintingFOV) == 1888, "Offset mismatch for UFortCameraModifier_Grinding::SprintingFOV");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentFOVInterpSpeed) == 1928, "Offset mismatch for UFortCameraModifier_Grinding::CurrentFOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Grinding, DeltaDecreaseInZForOffset) == 1968, "Offset mismatch for UFortCameraModifier_Grinding::DeltaDecreaseInZForOffset");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentOffsetInterpSpeed) == 2008, "Offset mismatch for UFortCameraModifier_Grinding::CurrentOffsetInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Grinding, StraightnessMultiplierForOffset) == 2048, "Offset mismatch for UFortCameraModifier_Grinding::StraightnessMultiplierForOffset");
static_assert(offsetof(UFortCameraModifier_Grinding, FinalOffsetForwardDelta) == 2088, "Offset mismatch for UFortCameraModifier_Grinding::FinalOffsetForwardDelta");
static_assert(offsetof(UFortCameraModifier_Grinding, FinalOffsetUpDelta) == 2128, "Offset mismatch for UFortCameraModifier_Grinding::FinalOffsetUpDelta");
static_assert(offsetof(UFortCameraModifier_Grinding, FinalOffsetRightDelta) == 2168, "Offset mismatch for UFortCameraModifier_Grinding::FinalOffsetRightDelta");
static_assert(offsetof(UFortCameraModifier_Grinding, bCachedUseNativeCalculation) == 2288, "Offset mismatch for UFortCameraModifier_Grinding::bCachedUseNativeCalculation");

// /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding
// Kind: Class; super: FortGameplayCueNotify_Loop
class UFortGameplayCueNotifyLoop_Grinding
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t bFeetHasLanded; // 0x0C48 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableNativeAudioUpdate; // 0x0C49 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0C4A
    float ForwardChangedValueThreshold; // 0x0C4C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Speed[0x38]; // 0x0C50 (Size: 0x38, Type: StructProperty)
    std::uint8_t Forward[0x38]; // 0x0C88 (Size: 0x38, Type: StructProperty)
    std::uint8_t Boost[0x38]; // 0x0CC0 (Size: 0x38, Type: StructProperty)
    std::uint8_t Curve[0x38]; // 0x0CF8 (Size: 0x38, Type: StructProperty)
    std::uint8_t IsGrinding[0x38]; // 0x0D30 (Size: 0x38, Type: StructProperty)
    std::uint8_t IsSlowDown[0x38]; // 0x0D68 (Size: 0x38, Type: StructProperty)
    std::uint8_t LeanForwardSpeedName[0x4]; // 0x0DA0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TurnOnSpeedFXName[0x4]; // 0x0DA4 (Size: 0x4, Type: NameProperty)
    std::uint8_t RailJumpingFXName[0x4]; // 0x0DA8 (Size: 0x4, Type: NameProperty)
    std::uint8_t SprintingFXName[0x4]; // 0x0DAC (Size: 0x4, Type: NameProperty)
    float TurnOnSpeedFXThreshold; // 0x0DB0 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> EffectsComponent; // 0x0DB4 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0DBC
    void* AudioComponent; // 0x0DC0 (Size: 0x8, Type: ObjectProperty)
    void* PlayerPawn; // 0x0DC8 (Size: 0x8, Type: ObjectProperty)
    void* GrindingProvider; // 0x0DD0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, bFeetHasLanded) == 3144, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::bFeetHasLanded");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, bEnableNativeAudioUpdate) == 3145, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::bEnableNativeAudioUpdate");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, ForwardChangedValueThreshold) == 3148, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::ForwardChangedValueThreshold");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, Speed) == 3152, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::Speed");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, Forward) == 3208, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::Forward");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, Boost) == 3264, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::Boost");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, Curve) == 3320, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::Curve");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, IsGrinding) == 3376, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::IsGrinding");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, IsSlowDown) == 3432, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::IsSlowDown");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, LeanForwardSpeedName) == 3488, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::LeanForwardSpeedName");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, TurnOnSpeedFXName) == 3492, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::TurnOnSpeedFXName");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, RailJumpingFXName) == 3496, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::RailJumpingFXName");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, SprintingFXName) == 3500, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::SprintingFXName");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, TurnOnSpeedFXThreshold) == 3504, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::TurnOnSpeedFXThreshold");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, EffectsComponent) == 3508, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::EffectsComponent");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, AudioComponent) == 3520, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::AudioComponent");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, PlayerPawn) == 3528, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::PlayerPawn");
static_assert(offsetof(UFortGameplayCueNotifyLoop_Grinding, GrindingProvider) == 3536, "Offset mismatch for UFortGameplayCueNotifyLoop_Grinding::GrindingProvider");

// /Script/GrindRailRuntime.FortGrindRail
// Kind: Class; super: BuildingGameplayActor
class UFortGrindRail
{
public:
    std::uint8_t Pad_0000[0x928]; // 0x0000
    std::uint8_t SpeedHardCap[0x28]; // 0x0928 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseMaxSpeed[0x28]; // 0x0950 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpeedIncreaseFromDownwardSlope[0x28]; // 0x0978 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxBaseAcceleration[0x28]; // 0x09A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinBaseAcceleration[0x28]; // 0x09C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxStartSpeed[0x28]; // 0x09F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinStartSpeed[0x28]; // 0x0A18 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintingAcceleration[0x28]; // 0x0A40 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintingMaxSpeed[0x28]; // 0x0A68 (Size: 0x28, Type: StructProperty)
    TArray<void*> GrindRailMeshes; // 0x0A90 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoosterInfos; // 0x0AA0 (Size: 0x10, Type: ArrayProperty)
    void* SplineComponent; // 0x0AB0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EnableBoosters[0x28]; // 0x0AB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableGrinding[0x28]; // 0x0AE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableProjectileCollision[0x28]; // 0x0B08 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableMeshCollision[0x28]; // 0x0B30 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableWeaponBulletCollision[0x28]; // 0x0B58 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartGrindingFromWalking[0x28]; // 0x0B80 (Size: 0x28, Type: StructProperty)
    std::uint8_t bSimulateSplineGravity; // 0x0BA8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0BA9
    float SimulatedSplineGravityAcceleration; // 0x0BAC (Size: 0x4, Type: FloatProperty)
    float TargetDistanceBetweenSplinePointsForGravitySimulation; // 0x0BB0 (Size: 0x4, Type: FloatProperty)
    std::int32_t SplineGravitySimulationIterationCount; // 0x0BB4 (Size: 0x4, Type: IntProperty)
    float SplineGravitySimulationTime; // 0x0BB8 (Size: 0x4, Type: FloatProperty)
    float IdealInteractStartDistance; // 0x0BBC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableBooster; // 0x0BC0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0BC1
    TArray<void*> ResolverScopes; // 0x0BC8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0BD8
    std::uint8_t HeadConnectedRail[0x20]; // 0x0BE8 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> TailConnectedRail; // 0x0C08 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortGrindRail, SpeedHardCap) == 2344, "Offset mismatch for UFortGrindRail::SpeedHardCap");
static_assert(offsetof(UFortGrindRail, BaseMaxSpeed) == 2384, "Offset mismatch for UFortGrindRail::BaseMaxSpeed");
static_assert(offsetof(UFortGrindRail, MaxSpeedIncreaseFromDownwardSlope) == 2424, "Offset mismatch for UFortGrindRail::MaxSpeedIncreaseFromDownwardSlope");
static_assert(offsetof(UFortGrindRail, MaxBaseAcceleration) == 2464, "Offset mismatch for UFortGrindRail::MaxBaseAcceleration");
static_assert(offsetof(UFortGrindRail, MinBaseAcceleration) == 2504, "Offset mismatch for UFortGrindRail::MinBaseAcceleration");
static_assert(offsetof(UFortGrindRail, MaxStartSpeed) == 2544, "Offset mismatch for UFortGrindRail::MaxStartSpeed");
static_assert(offsetof(UFortGrindRail, MinStartSpeed) == 2584, "Offset mismatch for UFortGrindRail::MinStartSpeed");
static_assert(offsetof(UFortGrindRail, SprintingAcceleration) == 2624, "Offset mismatch for UFortGrindRail::SprintingAcceleration");
static_assert(offsetof(UFortGrindRail, SprintingMaxSpeed) == 2664, "Offset mismatch for UFortGrindRail::SprintingMaxSpeed");
static_assert(offsetof(UFortGrindRail, GrindRailMeshes) == 2704, "Offset mismatch for UFortGrindRail::GrindRailMeshes");
static_assert(offsetof(UFortGrindRail, BoosterInfos) == 2720, "Offset mismatch for UFortGrindRail::BoosterInfos");
static_assert(offsetof(UFortGrindRail, SplineComponent) == 2736, "Offset mismatch for UFortGrindRail::SplineComponent");
static_assert(offsetof(UFortGrindRail, EnableBoosters) == 2744, "Offset mismatch for UFortGrindRail::EnableBoosters");
static_assert(offsetof(UFortGrindRail, EnableGrinding) == 2784, "Offset mismatch for UFortGrindRail::EnableGrinding");
static_assert(offsetof(UFortGrindRail, EnableProjectileCollision) == 2824, "Offset mismatch for UFortGrindRail::EnableProjectileCollision");
static_assert(offsetof(UFortGrindRail, EnableMeshCollision) == 2864, "Offset mismatch for UFortGrindRail::EnableMeshCollision");
static_assert(offsetof(UFortGrindRail, EnableWeaponBulletCollision) == 2904, "Offset mismatch for UFortGrindRail::EnableWeaponBulletCollision");
static_assert(offsetof(UFortGrindRail, StartGrindingFromWalking) == 2944, "Offset mismatch for UFortGrindRail::StartGrindingFromWalking");
static_assert(offsetof(UFortGrindRail, bSimulateSplineGravity) == 2984, "Offset mismatch for UFortGrindRail::bSimulateSplineGravity");
static_assert(offsetof(UFortGrindRail, SimulatedSplineGravityAcceleration) == 2988, "Offset mismatch for UFortGrindRail::SimulatedSplineGravityAcceleration");
static_assert(offsetof(UFortGrindRail, TargetDistanceBetweenSplinePointsForGravitySimulation) == 2992, "Offset mismatch for UFortGrindRail::TargetDistanceBetweenSplinePointsForGravitySimulation");
static_assert(offsetof(UFortGrindRail, SplineGravitySimulationIterationCount) == 2996, "Offset mismatch for UFortGrindRail::SplineGravitySimulationIterationCount");
static_assert(offsetof(UFortGrindRail, SplineGravitySimulationTime) == 3000, "Offset mismatch for UFortGrindRail::SplineGravitySimulationTime");
static_assert(offsetof(UFortGrindRail, IdealInteractStartDistance) == 3004, "Offset mismatch for UFortGrindRail::IdealInteractStartDistance");
static_assert(offsetof(UFortGrindRail, bDisableBooster) == 3008, "Offset mismatch for UFortGrindRail::bDisableBooster");
static_assert(offsetof(UFortGrindRail, ResolverScopes) == 3016, "Offset mismatch for UFortGrindRail::ResolverScopes");
static_assert(offsetof(UFortGrindRail, HeadConnectedRail) == 3048, "Offset mismatch for UFortGrindRail::HeadConnectedRail");
static_assert(offsetof(UFortGrindRail, TailConnectedRail) == 3080, "Offset mismatch for UFortGrindRail::TailConnectedRail");

// /Script/GrindRailRuntime.FortGrindRailConnector
// Kind: Class; super: BuildingGameplayActor
class UFortGrindRailConnector
{
public:
    std::uint8_t Pad_0000[0x6C8]; // 0x0000
    void* InherentAbilitySets; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x06D0
    std::uint8_t DamageStatHandle[0x10]; // 0x06F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAllowRidingOnActor; // 0x0700 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0701
    FMulticastInlineDelegate OnProximityPulseDelegate; // 0x0708 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProximityPrePulseDelegate; // 0x0718 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProximityEffectsAppliedDelegate; // 0x0728 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDeliverableAbilityInfoAppliedToTouchingActor; // 0x0738 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDeliverableAbilityInfoChangedForExitingTouchActor; // 0x0748 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDidDamage; // 0x0758 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIgnoreInstigatorCollision; // 0x0768 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddOwnerVelocity; // 0x0769 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x076A
    std::int32_t AbilitySourceLevel; // 0x076C (Size: 0x4, Type: IntProperty)
    std::uint8_t DeliverableAbilityInfo[0xA0]; // 0x0770 (Size: 0xA0, Type: StructProperty)
    std::uint8_t bApplyDefaultEnabledAbilityBucketsOnInit; // 0x0810 (Size: 0x1, Type: BoolProperty)
    // 0x0810 BoolProperty bBlockMarking (shared storage)
    // 0x0810 BoolProperty bCanBeMarked (shared storage)
    // 0x0810 BoolProperty bShowInteractKeybind (shared storage)
    // 0x0810 BoolProperty bUseSimpleActorTouchSetupForAbilityBuckets (shared storage)
    std::uint8_t Pad_0004[0x7]; // 0x0811
    std::uint8_t MarkerDisplay[0xB0]; // 0x0818 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarkerPositionOffset[0x18]; // 0x08C8 (Size: 0x18, Type: StructProperty)
    void* RegisteredTouchComponent; // 0x08E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x08E8
    std::uint8_t AnalyticsTags[0x20]; // 0x08F0 (Size: 0x20, Type: StructProperty)
    float PostProcessOverlapBlendWeight; // 0x0910 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0914
    void* CustomInteractionWidget; // 0x0918 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGrindRailConnector, InherentAbilitySets) == 1736, "Offset mismatch for UFortGrindRailConnector::InherentAbilitySets");
static_assert(offsetof(UFortGrindRailConnector, DamageStatHandle) == 1776, "Offset mismatch for UFortGrindRailConnector::DamageStatHandle");
static_assert(offsetof(UFortGrindRailConnector, bAllowRidingOnActor) == 1792, "Offset mismatch for UFortGrindRailConnector::bAllowRidingOnActor");
static_assert(offsetof(UFortGrindRailConnector, OnProximityPulseDelegate) == 1800, "Offset mismatch for UFortGrindRailConnector::OnProximityPulseDelegate");
static_assert(offsetof(UFortGrindRailConnector, OnProximityPrePulseDelegate) == 1816, "Offset mismatch for UFortGrindRailConnector::OnProximityPrePulseDelegate");
static_assert(offsetof(UFortGrindRailConnector, OnProximityEffectsAppliedDelegate) == 1832, "Offset mismatch for UFortGrindRailConnector::OnProximityEffectsAppliedDelegate");
static_assert(offsetof(UFortGrindRailConnector, OnDeliverableAbilityInfoAppliedToTouchingActor) == 1848, "Offset mismatch for UFortGrindRailConnector::OnDeliverableAbilityInfoAppliedToTouchingActor");
static_assert(offsetof(UFortGrindRailConnector, OnDeliverableAbilityInfoChangedForExitingTouchActor) == 1864, "Offset mismatch for UFortGrindRailConnector::OnDeliverableAbilityInfoChangedForExitingTouchActor");
static_assert(offsetof(UFortGrindRailConnector, OnDidDamage) == 1880, "Offset mismatch for UFortGrindRailConnector::OnDidDamage");
static_assert(offsetof(UFortGrindRailConnector, bIgnoreInstigatorCollision) == 1896, "Offset mismatch for UFortGrindRailConnector::bIgnoreInstigatorCollision");
static_assert(offsetof(UFortGrindRailConnector, bAddOwnerVelocity) == 1897, "Offset mismatch for UFortGrindRailConnector::bAddOwnerVelocity");
static_assert(offsetof(UFortGrindRailConnector, AbilitySourceLevel) == 1900, "Offset mismatch for UFortGrindRailConnector::AbilitySourceLevel");
static_assert(offsetof(UFortGrindRailConnector, DeliverableAbilityInfo) == 1904, "Offset mismatch for UFortGrindRailConnector::DeliverableAbilityInfo");
static_assert(offsetof(UFortGrindRailConnector, bApplyDefaultEnabledAbilityBucketsOnInit) == 2064, "Offset mismatch for UFortGrindRailConnector::bApplyDefaultEnabledAbilityBucketsOnInit");
static_assert(offsetof(UFortGrindRailConnector, MarkerDisplay) == 2072, "Offset mismatch for UFortGrindRailConnector::MarkerDisplay");
static_assert(offsetof(UFortGrindRailConnector, MarkerPositionOffset) == 2248, "Offset mismatch for UFortGrindRailConnector::MarkerPositionOffset");
static_assert(offsetof(UFortGrindRailConnector, RegisteredTouchComponent) == 2272, "Offset mismatch for UFortGrindRailConnector::RegisteredTouchComponent");
static_assert(offsetof(UFortGrindRailConnector, AnalyticsTags) == 2288, "Offset mismatch for UFortGrindRailConnector::AnalyticsTags");
static_assert(offsetof(UFortGrindRailConnector, PostProcessOverlapBlendWeight) == 2320, "Offset mismatch for UFortGrindRailConnector::PostProcessOverlapBlendWeight");
static_assert(offsetof(UFortGrindRailConnector, CustomInteractionWidget) == 2328, "Offset mismatch for UFortGrindRailConnector::CustomInteractionWidget");

// /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance
// Kind: Class; super: FortBaseLayerAnimInstance
class UFortGrindRailLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t LeanAlphaCurve[0x4]; // 0x0340 (Size: 0x4, Type: NameProperty)
    std::uint8_t MeleeTwistCurve[0x4]; // 0x0344 (Size: 0x4, Type: NameProperty)
    FName InterruptibleCurve; // 0x0348 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> SlopeWarpingCurveMap; // 0x0350 (Size: 0x10, Type: MapProperty)
    double LeanBwdVelocityThreshold; // 0x0360 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t BwdStartCachedData[0x18]; // 0x0368 (Size: 0x18, Type: StructProperty)
    double IsMovingThresholdSpeed; // 0x0380 (Size: 0x8, Type: DoubleProperty)
    double NoisePlayRateSprintSpeedThreshold; // 0x0388 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t NoisePlayRateNormalSpeedInputRange[0x10]; // 0x0390 (Size: 0x10, Type: StructProperty)
    std::uint8_t NoisePlayRateNormalSpeedOutputRange[0x10]; // 0x03A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NoisePlayRateHighSpeedInputRange[0x10]; // 0x03B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NoisePlayRateHighSpeedOutputRange[0x10]; // 0x03C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CombatNoisePlayRateSpeedInputRange[0x10]; // 0x03D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CombatNoisePlayRateSpeedOutputRange[0x10]; // 0x03E0 (Size: 0x10, Type: StructProperty)
    double CombatNoiseAlphaTargeting; // 0x03F0 (Size: 0x8, Type: DoubleProperty)
    double CombatNoiseAlphaNonTargeting; // 0x03F8 (Size: 0x8, Type: DoubleProperty)
    double RootLeanAlphaInterpSpeed; // 0x0400 (Size: 0x8, Type: DoubleProperty)
    double SlopeWarpAlphaInterpSpeed; // 0x0408 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bDisableSlopeWarpAlphaWhenGrindingEnabled; // 0x0410 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0411
    double SplineRelativeAimYawDeltaThreshold; // 0x0418 (Size: 0x8, Type: DoubleProperty)
    double AimYawSmoothInterpolationCoefficient; // 0x0420 (Size: 0x8, Type: DoubleProperty)
    double IsSmoothingYawThreshold; // 0x0428 (Size: 0x8, Type: DoubleProperty)
    double LeanBWDThreshold; // 0x0430 (Size: 0x8, Type: DoubleProperty)
    double MuteUpperBodyAlphaMeleeWeapon; // 0x0438 (Size: 0x8, Type: DoubleProperty)
    double MuteUpperBodyAlphaNonMeleeWeapon; // 0x0440 (Size: 0x8, Type: DoubleProperty)
    double MuteUpperBodyAlphaFruitcakePickaxe; // 0x0448 (Size: 0x8, Type: DoubleProperty)
    double MuteUpperBodyAlphaLanceSyctheOrDualWeild; // 0x0450 (Size: 0x8, Type: DoubleProperty)
    double BaseLeanDirection; // 0x0458 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsGrinding; // 0x0460 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0461
    double CurrentSpeed; // 0x0468 (Size: 0x8, Type: DoubleProperty)
    double LeanDirection; // 0x0470 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bSprinting; // 0x0478 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0479
    double LeanForward; // 0x0480 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsWeaponActive; // 0x0488 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0489
    std::uint8_t SplineRelativeAim[0x18]; // 0x0490 (Size: 0x18, Type: StructProperty)
    std::uint8_t GrindRailInput[0x18]; // 0x04A8 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> GrindingProvider; // 0x04C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MovementComponent; // 0x04C8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortPlayerPawn; // 0x04D0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsFalling; // 0x04D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x04D9
    double LeanAlpha; // 0x04E0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsMoving; // 0x04E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShould180Turn; // 0x04E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayEntry; // 0x04EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x5]; // 0x04EB
    double NoisePlayRate; // 0x04F0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsLeanBwd; // 0x04F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLeft180Turn; // 0x04F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShould180TurnAgain; // 0x04FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurning; // 0x04FB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldExitLocomotion; // 0x04FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting; // 0x04FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEarlyExitFromEntry; // 0x04FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimFWD; // 0x04FF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimBWD; // 0x0500 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimLFT; // 0x0501 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimRGT; // 0x0502 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x5]; // 0x0503
    double AimFWDDeltaAngleDegrees; // 0x0508 (Size: 0x8, Type: DoubleProperty)
    double AimBWDDeltaAngleDegrees; // 0x0510 (Size: 0x8, Type: DoubleProperty)
    double AimLFTDeltaAngleDegrees; // 0x0518 (Size: 0x8, Type: DoubleProperty)
    double AimRGTDeltaAngleDegrees; // 0x0520 (Size: 0x8, Type: DoubleProperty)
    double NegativeYaw; // 0x0528 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t MeleeTwistRot[0x18]; // 0x0530 (Size: 0x18, Type: StructProperty)
    double BwdStartCachedTime; // 0x0548 (Size: 0x8, Type: DoubleProperty)
    double Velocity; // 0x0550 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsEntryLeft; // 0x0558 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEntryFromAir; // 0x0559 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEntryRight; // 0x055A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnteredFromInteraction; // 0x055B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x4]; // 0x055C
    double SlopeWarpAlpha; // 0x0560 (Size: 0x8, Type: DoubleProperty)
    double SplineRelativeAimYaw; // 0x0568 (Size: 0x8, Type: DoubleProperty)
    double AimYawSmoothed; // 0x0570 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsSmoothingYaw; // 0x0578 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x7]; // 0x0579
    double LastSplineRelativeAimYaw; // 0x0580 (Size: 0x8, Type: DoubleProperty)
    double RootLeanAlpha; // 0x0588 (Size: 0x8, Type: DoubleProperty)
    double MuteUpperBodyAlpha; // 0x0590 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsLanceType; // 0x0598 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasSprinting; // 0x0599 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleToBoostLoop; // 0x059A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInAction; // 0x059B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x4]; // 0x059C
    double CombatNoisePlayRate; // 0x05A0 (Size: 0x8, Type: DoubleProperty)
    double CombatNoiseAlpha; // 0x05A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsTwoHandedMelee; // 0x05B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldCorrectUpperBody; // 0x05B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBothHandsDown; // 0x05B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x5]; // 0x05B3
    double TurnInPlaceAnimCurveValue; // 0x05B8 (Size: 0x8, Type: DoubleProperty)
    double TurnRotationAmountCurveValue; // 0x05C0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsFallingAndNotEnteredFromInteraction; // 0x05C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMovingOrIsTurning; // 0x05C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurningOrNotIsLeanBwd; // 0x05CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFallingAndNotIsWeaponActive; // 0x05CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotIsWeaponActiveAndNotIsFalling; // 0x05CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWeaponActiveOrIsBoosting; // 0x05CD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanAlphaCurve) == 832, "Offset mismatch for UFortGrindRailLayerAnimInstance::LeanAlphaCurve");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MeleeTwistCurve) == 836, "Offset mismatch for UFortGrindRailLayerAnimInstance::MeleeTwistCurve");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, InterruptibleCurve) == 840, "Offset mismatch for UFortGrindRailLayerAnimInstance::InterruptibleCurve");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SlopeWarpingCurveMap) == 848, "Offset mismatch for UFortGrindRailLayerAnimInstance::SlopeWarpingCurveMap");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanBwdVelocityThreshold) == 864, "Offset mismatch for UFortGrindRailLayerAnimInstance::LeanBwdVelocityThreshold");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, BwdStartCachedData) == 872, "Offset mismatch for UFortGrindRailLayerAnimInstance::BwdStartCachedData");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, IsMovingThresholdSpeed) == 896, "Offset mismatch for UFortGrindRailLayerAnimInstance::IsMovingThresholdSpeed");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRateSprintSpeedThreshold) == 904, "Offset mismatch for UFortGrindRailLayerAnimInstance::NoisePlayRateSprintSpeedThreshold");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRateNormalSpeedInputRange) == 912, "Offset mismatch for UFortGrindRailLayerAnimInstance::NoisePlayRateNormalSpeedInputRange");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRateNormalSpeedOutputRange) == 928, "Offset mismatch for UFortGrindRailLayerAnimInstance::NoisePlayRateNormalSpeedOutputRange");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRateHighSpeedInputRange) == 944, "Offset mismatch for UFortGrindRailLayerAnimInstance::NoisePlayRateHighSpeedInputRange");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRateHighSpeedOutputRange) == 960, "Offset mismatch for UFortGrindRailLayerAnimInstance::NoisePlayRateHighSpeedOutputRange");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoisePlayRateSpeedInputRange) == 976, "Offset mismatch for UFortGrindRailLayerAnimInstance::CombatNoisePlayRateSpeedInputRange");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoisePlayRateSpeedOutputRange) == 992, "Offset mismatch for UFortGrindRailLayerAnimInstance::CombatNoisePlayRateSpeedOutputRange");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoiseAlphaTargeting) == 1008, "Offset mismatch for UFortGrindRailLayerAnimInstance::CombatNoiseAlphaTargeting");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoiseAlphaNonTargeting) == 1016, "Offset mismatch for UFortGrindRailLayerAnimInstance::CombatNoiseAlphaNonTargeting");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, RootLeanAlphaInterpSpeed) == 1024, "Offset mismatch for UFortGrindRailLayerAnimInstance::RootLeanAlphaInterpSpeed");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SlopeWarpAlphaInterpSpeed) == 1032, "Offset mismatch for UFortGrindRailLayerAnimInstance::SlopeWarpAlphaInterpSpeed");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bDisableSlopeWarpAlphaWhenGrindingEnabled) == 1040, "Offset mismatch for UFortGrindRailLayerAnimInstance::bDisableSlopeWarpAlphaWhenGrindingEnabled");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SplineRelativeAimYawDeltaThreshold) == 1048, "Offset mismatch for UFortGrindRailLayerAnimInstance::SplineRelativeAimYawDeltaThreshold");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimYawSmoothInterpolationCoefficient) == 1056, "Offset mismatch for UFortGrindRailLayerAnimInstance::AimYawSmoothInterpolationCoefficient");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, IsSmoothingYawThreshold) == 1064, "Offset mismatch for UFortGrindRailLayerAnimInstance::IsSmoothingYawThreshold");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanBWDThreshold) == 1072, "Offset mismatch for UFortGrindRailLayerAnimInstance::LeanBWDThreshold");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MuteUpperBodyAlphaMeleeWeapon) == 1080, "Offset mismatch for UFortGrindRailLayerAnimInstance::MuteUpperBodyAlphaMeleeWeapon");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MuteUpperBodyAlphaNonMeleeWeapon) == 1088, "Offset mismatch for UFortGrindRailLayerAnimInstance::MuteUpperBodyAlphaNonMeleeWeapon");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MuteUpperBodyAlphaFruitcakePickaxe) == 1096, "Offset mismatch for UFortGrindRailLayerAnimInstance::MuteUpperBodyAlphaFruitcakePickaxe");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MuteUpperBodyAlphaLanceSyctheOrDualWeild) == 1104, "Offset mismatch for UFortGrindRailLayerAnimInstance::MuteUpperBodyAlphaLanceSyctheOrDualWeild");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, BaseLeanDirection) == 1112, "Offset mismatch for UFortGrindRailLayerAnimInstance::BaseLeanDirection");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsGrinding) == 1120, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsGrinding");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CurrentSpeed) == 1128, "Offset mismatch for UFortGrindRailLayerAnimInstance::CurrentSpeed");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanDirection) == 1136, "Offset mismatch for UFortGrindRailLayerAnimInstance::LeanDirection");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bSprinting) == 1144, "Offset mismatch for UFortGrindRailLayerAnimInstance::bSprinting");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanForward) == 1152, "Offset mismatch for UFortGrindRailLayerAnimInstance::LeanForward");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsWeaponActive) == 1160, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsWeaponActive");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SplineRelativeAim) == 1168, "Offset mismatch for UFortGrindRailLayerAnimInstance::SplineRelativeAim");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, GrindRailInput) == 1192, "Offset mismatch for UFortGrindRailLayerAnimInstance::GrindRailInput");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, GrindingProvider) == 1216, "Offset mismatch for UFortGrindRailLayerAnimInstance::GrindingProvider");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MovementComponent) == 1224, "Offset mismatch for UFortGrindRailLayerAnimInstance::MovementComponent");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, FortPlayerPawn) == 1232, "Offset mismatch for UFortGrindRailLayerAnimInstance::FortPlayerPawn");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsFalling) == 1240, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsFalling");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanAlpha) == 1248, "Offset mismatch for UFortGrindRailLayerAnimInstance::LeanAlpha");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsMoving) == 1256, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsMoving");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bShould180Turn) == 1257, "Offset mismatch for UFortGrindRailLayerAnimInstance::bShould180Turn");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bShouldPlayEntry) == 1258, "Offset mismatch for UFortGrindRailLayerAnimInstance::bShouldPlayEntry");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRate) == 1264, "Offset mismatch for UFortGrindRailLayerAnimInstance::NoisePlayRate");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsLeanBwd) == 1272, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsLeanBwd");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsLeft180Turn) == 1273, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsLeft180Turn");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bShould180TurnAgain) == 1274, "Offset mismatch for UFortGrindRailLayerAnimInstance::bShould180TurnAgain");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsTurning) == 1275, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsTurning");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bShouldExitLocomotion) == 1276, "Offset mismatch for UFortGrindRailLayerAnimInstance::bShouldExitLocomotion");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsBoosting) == 1277, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsBoosting");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bEarlyExitFromEntry) == 1278, "Offset mismatch for UFortGrindRailLayerAnimInstance::bEarlyExitFromEntry");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bAimFWD) == 1279, "Offset mismatch for UFortGrindRailLayerAnimInstance::bAimFWD");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bAimBWD) == 1280, "Offset mismatch for UFortGrindRailLayerAnimInstance::bAimBWD");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bAimLFT) == 1281, "Offset mismatch for UFortGrindRailLayerAnimInstance::bAimLFT");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bAimRGT) == 1282, "Offset mismatch for UFortGrindRailLayerAnimInstance::bAimRGT");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimFWDDeltaAngleDegrees) == 1288, "Offset mismatch for UFortGrindRailLayerAnimInstance::AimFWDDeltaAngleDegrees");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimBWDDeltaAngleDegrees) == 1296, "Offset mismatch for UFortGrindRailLayerAnimInstance::AimBWDDeltaAngleDegrees");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimLFTDeltaAngleDegrees) == 1304, "Offset mismatch for UFortGrindRailLayerAnimInstance::AimLFTDeltaAngleDegrees");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimRGTDeltaAngleDegrees) == 1312, "Offset mismatch for UFortGrindRailLayerAnimInstance::AimRGTDeltaAngleDegrees");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NegativeYaw) == 1320, "Offset mismatch for UFortGrindRailLayerAnimInstance::NegativeYaw");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MeleeTwistRot) == 1328, "Offset mismatch for UFortGrindRailLayerAnimInstance::MeleeTwistRot");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, BwdStartCachedTime) == 1352, "Offset mismatch for UFortGrindRailLayerAnimInstance::BwdStartCachedTime");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, Velocity) == 1360, "Offset mismatch for UFortGrindRailLayerAnimInstance::Velocity");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsEntryLeft) == 1368, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsEntryLeft");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsEntryFromAir) == 1369, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsEntryFromAir");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsEntryRight) == 1370, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsEntryRight");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bEnteredFromInteraction) == 1371, "Offset mismatch for UFortGrindRailLayerAnimInstance::bEnteredFromInteraction");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SlopeWarpAlpha) == 1376, "Offset mismatch for UFortGrindRailLayerAnimInstance::SlopeWarpAlpha");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SplineRelativeAimYaw) == 1384, "Offset mismatch for UFortGrindRailLayerAnimInstance::SplineRelativeAimYaw");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimYawSmoothed) == 1392, "Offset mismatch for UFortGrindRailLayerAnimInstance::AimYawSmoothed");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsSmoothingYaw) == 1400, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsSmoothingYaw");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LastSplineRelativeAimYaw) == 1408, "Offset mismatch for UFortGrindRailLayerAnimInstance::LastSplineRelativeAimYaw");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, RootLeanAlpha) == 1416, "Offset mismatch for UFortGrindRailLayerAnimInstance::RootLeanAlpha");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MuteUpperBodyAlpha) == 1424, "Offset mismatch for UFortGrindRailLayerAnimInstance::MuteUpperBodyAlpha");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsLanceType) == 1432, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsLanceType");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bWasSprinting) == 1433, "Offset mismatch for UFortGrindRailLayerAnimInstance::bWasSprinting");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bStateRuleToBoostLoop) == 1434, "Offset mismatch for UFortGrindRailLayerAnimInstance::bStateRuleToBoostLoop");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsInAction) == 1435, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsInAction");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoisePlayRate) == 1440, "Offset mismatch for UFortGrindRailLayerAnimInstance::CombatNoisePlayRate");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoiseAlpha) == 1448, "Offset mismatch for UFortGrindRailLayerAnimInstance::CombatNoiseAlpha");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsTwoHandedMelee) == 1456, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsTwoHandedMelee");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bShouldCorrectUpperBody) == 1457, "Offset mismatch for UFortGrindRailLayerAnimInstance::bShouldCorrectUpperBody");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bBothHandsDown) == 1458, "Offset mismatch for UFortGrindRailLayerAnimInstance::bBothHandsDown");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, TurnInPlaceAnimCurveValue) == 1464, "Offset mismatch for UFortGrindRailLayerAnimInstance::TurnInPlaceAnimCurveValue");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, TurnRotationAmountCurveValue) == 1472, "Offset mismatch for UFortGrindRailLayerAnimInstance::TurnRotationAmountCurveValue");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsFallingAndNotEnteredFromInteraction) == 1480, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsFallingAndNotEnteredFromInteraction");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsMovingOrIsTurning) == 1481, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsMovingOrIsTurning");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsTurningOrNotIsLeanBwd) == 1482, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsTurningOrNotIsLeanBwd");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsFallingAndNotIsWeaponActive) == 1483, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsFallingAndNotIsWeaponActive");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bNotIsWeaponActiveAndNotIsFalling) == 1484, "Offset mismatch for UFortGrindRailLayerAnimInstance::bNotIsWeaponActiveAndNotIsFalling");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsWeaponActiveOrIsBoosting) == 1485, "Offset mismatch for UFortGrindRailLayerAnimInstance::bIsWeaponActiveOrIsBoosting");

// /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicGrinding
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    TWeakObjectPtr<void> GrindingProvider; // 0x01C8 (Size: 0x8, Type: WeakObjectProperty)
    void* GrindCameraModifierClass; // 0x01D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t StartGrindingGameplayEvent[0x4]; // 0x01D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t StopGrindingGameplayEvent[0x4]; // 0x01DC (Size: 0x4, Type: StructProperty)
    std::uint8_t EnableVehicleLaunchImmunity[0x30]; // 0x01E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t VehicleLaunchImmuneTag[0x8]; // 0x0210 (Size: 0x8, Type: StructProperty)
    std::uint8_t ShouldDropHeldObject[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuildingTagImmuneToDamage[0x8]; // 0x0240 (Size: 0x8, Type: StructProperty)
    std::uint8_t BaseMaxLeanAngularSpeed[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseLeanInterpSpeed[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> TacticalSprintEnergyComponent; // 0x0298 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t TacticalSprintTooLowEnergyTag[0x20]; // 0x02A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t JumpDistanceMultiplier[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SameRailAnchoring_MaxForwardDistanceMultiplier[0x28]; // 0x02E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NoAnchorJumpDistanceMultiplier[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    std::uint8_t SameRailAnchoring_MaxAngle[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinJumpOffSpeed[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpHeight[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t InfluenceOfMomentumOnAnchorJump[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownwardModifierHeight[0x28]; // 0x03D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintUsePerSecond[0x28]; // 0x0400 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintUsePerSecond_Creative[0x28]; // 0x0428 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintUseEnergyTag[0x4]; // 0x0450 (Size: 0x4, Type: StructProperty)
    std::uint8_t SprintStartedGameplayEvent[0x4]; // 0x0454 (Size: 0x4, Type: StructProperty)
    std::uint8_t MaxAllowedInclineSplinePitch[0x28]; // 0x0458 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAllowedDeclineSplinePitch[0x28]; // 0x0480 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAllowedShootingSplinePitch[0x28]; // 0x04A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnAngleThreshold[0x28]; // 0x04D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AnimatedTurnDuration[0x28]; // 0x04F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseGrindRailYawRotationInterpSpeed[0x28]; // 0x0520 (Size: 0x28, Type: StructProperty)
    std::uint8_t InclineGrindRailPitchRotationInterpSpeed[0x28]; // 0x0548 (Size: 0x28, Type: StructProperty)
    std::uint8_t DeclineGrindRailPitchRotationInterpSpeed[0x28]; // 0x0570 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShootingGrindRailRotationInterpSpeed[0x28]; // 0x0598 (Size: 0x28, Type: StructProperty)
    std::uint8_t NextGrindRailDetectionOffset[0x28]; // 0x05C0 (Size: 0x28, Type: StructProperty)
    void* SprintGrindingGameplayEffectClass; // 0x05E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TagPreventHeldObjectDrop[0x4]; // 0x05F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t CancelGrindingTag[0x4]; // 0x05F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t MinTimeBeforeJumpSinceEntry[0x28]; // 0x05F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CancelSprintLeanBackThreshold[0x28]; // 0x0620 (Size: 0x28, Type: StructProperty)
    std::uint8_t WeaponHolsterCooldown[0x28]; // 0x0648 (Size: 0x28, Type: StructProperty)
    std::uint8_t WeaponIsShootingCooldown[0x28]; // 0x0670 (Size: 0x28, Type: StructProperty)
    std::uint8_t GravityForceWhenGoingDown[0x28]; // 0x0698 (Size: 0x28, Type: StructProperty)
    std::uint8_t GravityForceWhenGoingUp[0x28]; // 0x06C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoosterSprintingAccelerationOnSlowDownBooster[0x28]; // 0x06E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoosterAccelerationOnSpeedUpBooster[0x28]; // 0x0710 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoosterSlowDownBoosterDragMultiplier[0x28]; // 0x0738 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoosterSlowDownBoosterGoalSpeed[0x28]; // 0x0760 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoosterMaxSpeed[0x28]; // 0x0788 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShootingMaxSpeedMultiplier[0x28]; // 0x07B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AngleForMaxSpeedIncreaseFromDownwardSlope[0x28]; // 0x07D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpeedIncreaseFromDownwardSlope[0x28]; // 0x0800 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDragForSpeedSoftCap[0x28]; // 0x0828 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedHardCap[0x28]; // 0x0850 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintingAcceleration[0x28]; // 0x0878 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintingMaxSpeed[0x28]; // 0x08A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShouldEnforceMinSpeed[0x28]; // 0x08C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumSpeed[0x28]; // 0x08F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForcedDirection[0x28]; // 0x0918 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanTurnAround[0x28]; // 0x0940 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedThresholdForTurn[0x28]; // 0x0968 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeToTurnAround[0x28]; // 0x0990 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedForMaxLeanAcceleration[0x28]; // 0x09B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedForMinLeanAcceleration[0x28]; // 0x09E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxLeanAcceleration[0x28]; // 0x0A08 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinLeanAcceleration[0x28]; // 0x0A30 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanAccelerateByLeaningIntoTurns[0x28]; // 0x0A58 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurvatureForMaxLeanIntoTurnsAcceleration[0x28]; // 0x0A80 (Size: 0x28, Type: StructProperty)
    std::uint8_t LeanIntoTurnsMaxAcceleration[0x28]; // 0x0AA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t IncreasedMaxSpeedFromLeanIntoTurn[0x28]; // 0x0AD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SidewaysLeanBoostReductionRate[0x28]; // 0x0AF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedForMaxBaseAcceleration[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedForMinBaseAcceleration[0x28]; // 0x0B48 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxBaseAcceleration[0x28]; // 0x0B70 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinBaseAcceleration[0x28]; // 0x0B98 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseGoalSpeed[0x28]; // 0x0BC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseMaxSpeed[0x28]; // 0x0BE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableFriction[0x28]; // 0x0C10 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseGoalDecelerationSpeed[0x28]; // 0x0C38 (Size: 0x28, Type: StructProperty)
    std::uint8_t FrictionWhenNotLeaning[0x28]; // 0x0C60 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedMultiplierOnHitRailCap[0x28]; // 0x0C88 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeedAfterBouncedOffRailCap[0x28]; // 0x0CB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedMultiplierWhenImpactedPlayer[0x28]; // 0x0CD8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedMinBouncePlayer[0x1]; // 0x0D00 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, GrindingProvider) == 456, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::GrindingProvider");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, GrindCameraModifierClass) == 464, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::GrindCameraModifierClass");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, StartGrindingGameplayEvent) == 472, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::StartGrindingGameplayEvent");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, StopGrindingGameplayEvent) == 476, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::StopGrindingGameplayEvent");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, EnableVehicleLaunchImmunity) == 480, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::EnableVehicleLaunchImmunity");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, VehicleLaunchImmuneTag) == 528, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::VehicleLaunchImmuneTag");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, ShouldDropHeldObject) == 536, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::ShouldDropHeldObject");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BuildingTagImmuneToDamage) == 576, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BuildingTagImmuneToDamage");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BaseMaxLeanAngularSpeed) == 584, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BaseMaxLeanAngularSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BaseLeanInterpSpeed) == 624, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BaseLeanInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, TacticalSprintEnergyComponent) == 664, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::TacticalSprintEnergyComponent");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, TacticalSprintTooLowEnergyTag) == 672, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::TacticalSprintTooLowEnergyTag");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, JumpDistanceMultiplier) == 704, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::JumpDistanceMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SameRailAnchoring_MaxForwardDistanceMultiplier) == 744, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SameRailAnchoring_MaxForwardDistanceMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, NoAnchorJumpDistanceMultiplier) == 784, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::NoAnchorJumpDistanceMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SameRailAnchoring_MaxAngle) == 824, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SameRailAnchoring_MaxAngle");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MinJumpOffSpeed) == 864, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MinJumpOffSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, JumpHeight) == 904, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::JumpHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, InfluenceOfMomentumOnAnchorJump) == 944, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::InfluenceOfMomentumOnAnchorJump");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, DownwardModifierHeight) == 984, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::DownwardModifierHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SprintUsePerSecond) == 1024, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SprintUsePerSecond");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SprintUsePerSecond_Creative) == 1064, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SprintUsePerSecond_Creative");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SprintUseEnergyTag) == 1104, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SprintUseEnergyTag");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SprintStartedGameplayEvent) == 1108, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SprintStartedGameplayEvent");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MaxAllowedInclineSplinePitch) == 1112, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MaxAllowedInclineSplinePitch");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MaxAllowedDeclineSplinePitch) == 1152, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MaxAllowedDeclineSplinePitch");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MaxAllowedShootingSplinePitch) == 1192, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MaxAllowedShootingSplinePitch");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, TurnAngleThreshold) == 1232, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::TurnAngleThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, AnimatedTurnDuration) == 1272, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::AnimatedTurnDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BaseGrindRailYawRotationInterpSpeed) == 1312, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BaseGrindRailYawRotationInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, InclineGrindRailPitchRotationInterpSpeed) == 1352, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::InclineGrindRailPitchRotationInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, DeclineGrindRailPitchRotationInterpSpeed) == 1392, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::DeclineGrindRailPitchRotationInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, ShootingGrindRailRotationInterpSpeed) == 1432, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::ShootingGrindRailRotationInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, NextGrindRailDetectionOffset) == 1472, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::NextGrindRailDetectionOffset");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SprintGrindingGameplayEffectClass) == 1512, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SprintGrindingGameplayEffectClass");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, TagPreventHeldObjectDrop) == 1520, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::TagPreventHeldObjectDrop");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, CancelGrindingTag) == 1524, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::CancelGrindingTag");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MinTimeBeforeJumpSinceEntry) == 1528, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MinTimeBeforeJumpSinceEntry");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, CancelSprintLeanBackThreshold) == 1568, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::CancelSprintLeanBackThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, WeaponHolsterCooldown) == 1608, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::WeaponHolsterCooldown");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, WeaponIsShootingCooldown) == 1648, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::WeaponIsShootingCooldown");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, GravityForceWhenGoingDown) == 1688, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::GravityForceWhenGoingDown");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, GravityForceWhenGoingUp) == 1728, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::GravityForceWhenGoingUp");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BoosterSprintingAccelerationOnSlowDownBooster) == 1768, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BoosterSprintingAccelerationOnSlowDownBooster");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BoosterAccelerationOnSpeedUpBooster) == 1808, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BoosterAccelerationOnSpeedUpBooster");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BoosterSlowDownBoosterDragMultiplier) == 1848, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BoosterSlowDownBoosterDragMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BoosterSlowDownBoosterGoalSpeed) == 1888, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BoosterSlowDownBoosterGoalSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BoosterMaxSpeed) == 1928, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BoosterMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, ShootingMaxSpeedMultiplier) == 1968, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::ShootingMaxSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, AngleForMaxSpeedIncreaseFromDownwardSlope) == 2008, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::AngleForMaxSpeedIncreaseFromDownwardSlope");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MaxSpeedIncreaseFromDownwardSlope) == 2048, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MaxSpeedIncreaseFromDownwardSlope");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MaxDragForSpeedSoftCap) == 2088, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MaxDragForSpeedSoftCap");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SpeedHardCap) == 2128, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SpeedHardCap");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SprintingAcceleration) == 2168, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SprintingAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SprintingMaxSpeed) == 2208, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SprintingMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, ShouldEnforceMinSpeed) == 2248, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::ShouldEnforceMinSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MinimumSpeed) == 2288, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MinimumSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, ForcedDirection) == 2328, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::ForcedDirection");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, CanTurnAround) == 2368, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::CanTurnAround");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SpeedThresholdForTurn) == 2408, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SpeedThresholdForTurn");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, TimeToTurnAround) == 2448, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::TimeToTurnAround");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SpeedForMaxLeanAcceleration) == 2488, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SpeedForMaxLeanAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SpeedForMinLeanAcceleration) == 2528, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SpeedForMinLeanAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MaxLeanAcceleration) == 2568, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MaxLeanAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MinLeanAcceleration) == 2608, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MinLeanAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, CanAccelerateByLeaningIntoTurns) == 2648, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::CanAccelerateByLeaningIntoTurns");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, CurvatureForMaxLeanIntoTurnsAcceleration) == 2688, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::CurvatureForMaxLeanIntoTurnsAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, LeanIntoTurnsMaxAcceleration) == 2728, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::LeanIntoTurnsMaxAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, IncreasedMaxSpeedFromLeanIntoTurn) == 2768, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::IncreasedMaxSpeedFromLeanIntoTurn");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SidewaysLeanBoostReductionRate) == 2808, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SidewaysLeanBoostReductionRate");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SpeedForMaxBaseAcceleration) == 2848, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SpeedForMaxBaseAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SpeedForMinBaseAcceleration) == 2888, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SpeedForMinBaseAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MaxBaseAcceleration) == 2928, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MaxBaseAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MinBaseAcceleration) == 2968, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MinBaseAcceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BaseGoalSpeed) == 3008, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BaseGoalSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BaseMaxSpeed) == 3048, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BaseMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, EnableFriction) == 3088, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::EnableFriction");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, BaseGoalDecelerationSpeed) == 3128, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::BaseGoalDecelerationSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, FrictionWhenNotLeaning) == 3168, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::FrictionWhenNotLeaning");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SpeedMultiplierOnHitRailCap) == 3208, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SpeedMultiplierOnHitRailCap");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, MinSpeedAfterBouncedOffRailCap) == 3248, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::MinSpeedAfterBouncedOffRailCap");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SpeedMultiplierWhenImpactedPlayer) == 3288, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SpeedMultiplierWhenImpactedPlayer");
static_assert(offsetof(UFortMovementMode_ExtLogicGrinding, SpeedMinBouncePlayer) == 3328, "Offset mismatch for UFortMovementMode_ExtLogicGrinding::SpeedMinBouncePlayer");

// /Script/GrindRailRuntime.FortMovementMode_GrindingRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_GrindingRuntimeData
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

static_assert(offsetof(UFortMovementMode_GrindingRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_GrindingRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_GrindingRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_GrindingRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_GrindingRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_GrindingRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_GrindingRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_GrindingRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_GrindingRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_GrindingRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_GrindingRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_GrindingRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_GrindingRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_GrindingRuntimeData::EndReasonFlags");

// /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_GrindingProvider
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate GrindRailChangedDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate FeetLandedDelegate; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BegunGrindingDelegate; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate HitObstacleWhenGrindingDelegate; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BoosterModeChangedDelegate; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate SprintingStateChangedDelegate; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate EndedGrindingDelegate; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate ApplyDamageToDeviceDelegate; // 0x0140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate DismountPlayerDelegate; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t DisablePlayerFromGrinding[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceGrindingFromWalking[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateOppositeDirectionWhenReachEndOnStart[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateStartPositionUnblocked[0x28]; // 0x01D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t GrindFromLandSpeedBoost[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinStartSpeed[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxStartSpeed[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t CancelGrindingTag[0x8]; // 0x0278 (Size: 0x8, Type: StructProperty)
    std::uint8_t EnableSprinting[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t GrindInteractionReentryCooldownTime[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    void* GrindingAnimLayer; // 0x02D0 (Size: 0x8, Type: ClassProperty)
    void* GrindingExtLogicClass; // 0x02D8 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> OwnerPawn; // 0x02E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MovementComponent; // 0x02E8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t BuildingTagImmuneToDamage[0x1]; // 0x02F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPawnComponent_GrindingProvider, GrindRailChangedDelegate) == 208, "Offset mismatch for UFortPawnComponent_GrindingProvider::GrindRailChangedDelegate");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, FeetLandedDelegate) == 224, "Offset mismatch for UFortPawnComponent_GrindingProvider::FeetLandedDelegate");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, BegunGrindingDelegate) == 240, "Offset mismatch for UFortPawnComponent_GrindingProvider::BegunGrindingDelegate");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, HitObstacleWhenGrindingDelegate) == 256, "Offset mismatch for UFortPawnComponent_GrindingProvider::HitObstacleWhenGrindingDelegate");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, BoosterModeChangedDelegate) == 272, "Offset mismatch for UFortPawnComponent_GrindingProvider::BoosterModeChangedDelegate");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, SprintingStateChangedDelegate) == 288, "Offset mismatch for UFortPawnComponent_GrindingProvider::SprintingStateChangedDelegate");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, EndedGrindingDelegate) == 304, "Offset mismatch for UFortPawnComponent_GrindingProvider::EndedGrindingDelegate");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, ApplyDamageToDeviceDelegate) == 320, "Offset mismatch for UFortPawnComponent_GrindingProvider::ApplyDamageToDeviceDelegate");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, DismountPlayerDelegate) == 336, "Offset mismatch for UFortPawnComponent_GrindingProvider::DismountPlayerDelegate");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, DisablePlayerFromGrinding) == 352, "Offset mismatch for UFortPawnComponent_GrindingProvider::DisablePlayerFromGrinding");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, ForceGrindingFromWalking) == 392, "Offset mismatch for UFortPawnComponent_GrindingProvider::ForceGrindingFromWalking");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, CalculateOppositeDirectionWhenReachEndOnStart) == 432, "Offset mismatch for UFortPawnComponent_GrindingProvider::CalculateOppositeDirectionWhenReachEndOnStart");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, CalculateStartPositionUnblocked) == 472, "Offset mismatch for UFortPawnComponent_GrindingProvider::CalculateStartPositionUnblocked");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, GrindFromLandSpeedBoost) == 512, "Offset mismatch for UFortPawnComponent_GrindingProvider::GrindFromLandSpeedBoost");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, MinStartSpeed) == 552, "Offset mismatch for UFortPawnComponent_GrindingProvider::MinStartSpeed");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, MaxStartSpeed) == 592, "Offset mismatch for UFortPawnComponent_GrindingProvider::MaxStartSpeed");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, CancelGrindingTag) == 632, "Offset mismatch for UFortPawnComponent_GrindingProvider::CancelGrindingTag");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, EnableSprinting) == 640, "Offset mismatch for UFortPawnComponent_GrindingProvider::EnableSprinting");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, GrindInteractionReentryCooldownTime) == 680, "Offset mismatch for UFortPawnComponent_GrindingProvider::GrindInteractionReentryCooldownTime");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, GrindingAnimLayer) == 720, "Offset mismatch for UFortPawnComponent_GrindingProvider::GrindingAnimLayer");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, GrindingExtLogicClass) == 728, "Offset mismatch for UFortPawnComponent_GrindingProvider::GrindingExtLogicClass");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, OwnerPawn) == 736, "Offset mismatch for UFortPawnComponent_GrindingProvider::OwnerPawn");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, MovementComponent) == 744, "Offset mismatch for UFortPawnComponent_GrindingProvider::MovementComponent");
static_assert(offsetof(UFortPawnComponent_GrindingProvider, BuildingTagImmuneToDamage) == 752, "Offset mismatch for UFortPawnComponent_GrindingProvider::BuildingTagImmuneToDamage");

// /Script/GrindRailRuntime.GrindRailEditorComponent
// Kind: Class; super: ActorComponent
class UGrindRailEditorComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UGrindRailEditorComponent, PrimaryComponentTick) == 56, "Offset mismatch for UGrindRailEditorComponent::PrimaryComponentTick");
static_assert(offsetof(UGrindRailEditorComponent, ComponentTags) == 104, "Offset mismatch for UGrindRailEditorComponent::ComponentTags");
static_assert(offsetof(UGrindRailEditorComponent, AssetUserData) == 120, "Offset mismatch for UGrindRailEditorComponent::AssetUserData");
static_assert(offsetof(UGrindRailEditorComponent, UCSSerializationIndex) == 144, "Offset mismatch for UGrindRailEditorComponent::UCSSerializationIndex");
static_assert(offsetof(UGrindRailEditorComponent, bNetAddressable) == 152, "Offset mismatch for UGrindRailEditorComponent::bNetAddressable");
static_assert(offsetof(UGrindRailEditorComponent, bAutoActivate) == 154, "Offset mismatch for UGrindRailEditorComponent::bAutoActivate");
static_assert(offsetof(UGrindRailEditorComponent, bIsEditorOnly) == 155, "Offset mismatch for UGrindRailEditorComponent::bIsEditorOnly");
static_assert(offsetof(UGrindRailEditorComponent, CreationMethod) == 185, "Offset mismatch for UGrindRailEditorComponent::CreationMethod");
static_assert(offsetof(UGrindRailEditorComponent, OnComponentActivated) == 186, "Offset mismatch for UGrindRailEditorComponent::OnComponentActivated");
static_assert(offsetof(UGrindRailEditorComponent, OnComponentDeactivated) == 187, "Offset mismatch for UGrindRailEditorComponent::OnComponentDeactivated");

// /Script/GrindRailRuntime.StructurallySupportedSplineComponent
// Kind: Class; super: ActorComponent
class UStructurallySupportedSplineComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UStructurallySupportedSplineComponent, PrimaryComponentTick) == 56, "Offset mismatch for UStructurallySupportedSplineComponent::PrimaryComponentTick");
static_assert(offsetof(UStructurallySupportedSplineComponent, ComponentTags) == 104, "Offset mismatch for UStructurallySupportedSplineComponent::ComponentTags");
static_assert(offsetof(UStructurallySupportedSplineComponent, AssetUserData) == 120, "Offset mismatch for UStructurallySupportedSplineComponent::AssetUserData");
static_assert(offsetof(UStructurallySupportedSplineComponent, UCSSerializationIndex) == 144, "Offset mismatch for UStructurallySupportedSplineComponent::UCSSerializationIndex");
static_assert(offsetof(UStructurallySupportedSplineComponent, bNetAddressable) == 152, "Offset mismatch for UStructurallySupportedSplineComponent::bNetAddressable");
static_assert(offsetof(UStructurallySupportedSplineComponent, bAutoActivate) == 154, "Offset mismatch for UStructurallySupportedSplineComponent::bAutoActivate");
static_assert(offsetof(UStructurallySupportedSplineComponent, bIsEditorOnly) == 155, "Offset mismatch for UStructurallySupportedSplineComponent::bIsEditorOnly");
static_assert(offsetof(UStructurallySupportedSplineComponent, CreationMethod) == 185, "Offset mismatch for UStructurallySupportedSplineComponent::CreationMethod");
static_assert(offsetof(UStructurallySupportedSplineComponent, OnComponentActivated) == 186, "Offset mismatch for UStructurallySupportedSplineComponent::OnComponentActivated");
static_assert(offsetof(UStructurallySupportedSplineComponent, OnComponentDeactivated) == 187, "Offset mismatch for UStructurallySupportedSplineComponent::OnComponentDeactivated");
