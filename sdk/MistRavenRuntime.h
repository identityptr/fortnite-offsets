/**
 * decamp dumper generated SDK
 * Package: /Script/MistRavenRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MistRavenRuntime.FortMovementMode_MistRavenWraithFormCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_MistRavenWraithFormCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_MistRavenWraithFormCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_MistRavenWraithFormCreationData::LogicClass");

// /Script/MistRavenRuntime.MistRavenPendingTargetValidation
// Kind: ScriptStruct; super: none
struct FMistRavenPendingTargetValidation
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    TWeakObjectPtr<void> TargetHitActor; // 0x000C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t HitResultCopy[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMistRavenPendingTargetValidation, TargetHitActor) == 12, "Offset mismatch for FMistRavenPendingTargetValidation::TargetHitActor");
static_assert(offsetof(FMistRavenPendingTargetValidation, HitResultCopy) == 24, "Offset mismatch for FMistRavenPendingTargetValidation::HitResultCopy");

// /Script/MistRavenRuntime.FortCameraModifier_MistRavenWraithForm
// Kind: Class; super: FortCameraModifier_Custom
class UFortCameraModifier_MistRavenWraithForm
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* NativeForwardPercentCurve; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NativeSprintingUpOffsetMultiplier[0x30]; // 0x0088 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeBaseUpOffsetMultiplier[0x2C]; // 0x00B8 (Size: 0x2C, Type: StructProperty)
    float NativeLeadInTime; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float NativeLeanRight; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float NativeUnNormalizedForwardPercentCurveValueStart; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float NativeUnNormalizedForwardPercentCurveValueEnd; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedVelocityLengthXYOldRangeX; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedVelocityLengthXYOldRangeY; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedVelocityLengthXYNewRangeX; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float NativeRemappedVelocityLengthXYNewRangeY; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedVelocityLengthXYMultiplier; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedUpSpeedABSOldRangeX; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedUpSpeedABSOldRangeY; // 0x010C (Size: 0x4, Type: FloatProperty)
    float NativeRemappedUpSpeedABSNewRangeX; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedUpSpeedABSNewRangeY; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentForwardTacticalSprintingAdditive; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentForwardInterpToSpeed; // 0x011C (Size: 0x4, Type: FloatProperty)
    float NativeRemappedRightSpeedOldRangeX; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedRightSpeedOldRangeY; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedRightSpeedNewRangeX; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedRightSpeedNewRangeY; // 0x012C (Size: 0x4, Type: FloatProperty)
    float NativeRemappedRightSpeedMultiplierA; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedRightSpeedMultiplierB; // 0x0134 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentRightRemappedCurrentForwardABSOldRangeX; // 0x0138 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentRightRemappedCurrentForwardABSOldRangeY; // 0x013C (Size: 0x4, Type: FloatProperty)
    float NativeCurrentRightRemappedCurrentForwardABSNewRangeX; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentRightRemappedCurrentForwardABSNewRangeY; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentRightInterpToSpeed; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedUpSpeedOldRangeX; // 0x014C (Size: 0x4, Type: FloatProperty)
    float NativeRemappedUpSpeedOldRangeY; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedUpSpeedNewRangeX; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedUpSpeedNewRangeY; // 0x0158 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentUpRemappedCurrentForwardABSOldRangeX; // 0x015C (Size: 0x4, Type: FloatProperty)
    float NativeCurrentUpRemappedCurrentForwardABSOldRangeY; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentUpRemappedCurrentForwardABSNewRangeX; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentUpRemappedCurrentForwardABSNewRangeY; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedUpSpeedMultiplierA; // 0x016C (Size: 0x4, Type: FloatProperty)
    float NativeRemappedUpSpeedMultiplierB; // 0x0170 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentUpTacticalSprintingAdditiveA; // 0x0174 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentUpTacticalSprintingAdditiveB; // 0x0178 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentUpInterpToSpeed; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NativeRemappedForwardSpeedABSOldRangeX; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedForwardSpeedABSOldRangeY; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedForwardSpeedABSNewRangeX; // 0x0188 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedForwardSpeedABSNewRangeY; // 0x018C (Size: 0x4, Type: FloatProperty)
    float NativeRemappedForwardSpeedABSMultiplier; // 0x0190 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentLeanInterpToTargetOldRangeX; // 0x0194 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentLeanInterpToTargetOldRangeY; // 0x0198 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentLeanInterpToSpeed; // 0x019C (Size: 0x4, Type: FloatProperty)
    float NativeCurrentFOVInterpToTargetA; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentFOVInterpToTargetB; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentFOVInterpToSpeed; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedSpeedOldRangeX; // 0x01AC (Size: 0x4, Type: FloatProperty)
    float NativeRemappedSpeedOldRangeY; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedSpeedNewRangeX; // 0x01B4 (Size: 0x4, Type: FloatProperty)
    float NativeRemappedSpeedNewRangeY; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentOffsetInterpToSpeed; // 0x01BC (Size: 0x4, Type: FloatProperty)
    float NativeCurrentStraightnessMultiplier; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentUpSubtrahend; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentOffsetVectorInterpToSpeed; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    float NativeNewViewForwardVectorMultiplier; // 0x01CC (Size: 0x4, Type: FloatProperty)
    float NativeNewViewUpVectorMultiplier; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    float NativeNewViewRightVectorMultiplier; // 0x01D4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeForwardPercentCurve) == 128, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeForwardPercentCurve");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeSprintingUpOffsetMultiplier) == 136, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeSprintingUpOffsetMultiplier");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeBaseUpOffsetMultiplier) == 184, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeBaseUpOffsetMultiplier");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeLeadInTime) == 228, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeLeadInTime");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeLeanRight) == 232, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeLeanRight");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeUnNormalizedForwardPercentCurveValueStart) == 236, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeUnNormalizedForwardPercentCurveValueStart");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeUnNormalizedForwardPercentCurveValueEnd) == 240, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeUnNormalizedForwardPercentCurveValueEnd");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedVelocityLengthXYOldRangeX) == 244, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedVelocityLengthXYOldRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedVelocityLengthXYOldRangeY) == 248, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedVelocityLengthXYOldRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedVelocityLengthXYNewRangeX) == 252, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedVelocityLengthXYNewRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedVelocityLengthXYNewRangeY) == 256, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedVelocityLengthXYNewRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedVelocityLengthXYMultiplier) == 260, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedVelocityLengthXYMultiplier");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedUpSpeedABSOldRangeX) == 264, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedUpSpeedABSOldRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedUpSpeedABSOldRangeY) == 268, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedUpSpeedABSOldRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedUpSpeedABSNewRangeX) == 272, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedUpSpeedABSNewRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedUpSpeedABSNewRangeY) == 276, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedUpSpeedABSNewRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentForwardTacticalSprintingAdditive) == 280, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentForwardTacticalSprintingAdditive");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentForwardInterpToSpeed) == 284, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentForwardInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedRightSpeedOldRangeX) == 288, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedRightSpeedOldRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedRightSpeedOldRangeY) == 292, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedRightSpeedOldRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedRightSpeedNewRangeX) == 296, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedRightSpeedNewRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedRightSpeedNewRangeY) == 300, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedRightSpeedNewRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedRightSpeedMultiplierA) == 304, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedRightSpeedMultiplierA");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedRightSpeedMultiplierB) == 308, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedRightSpeedMultiplierB");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentRightRemappedCurrentForwardABSOldRangeX) == 312, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentRightRemappedCurrentForwardABSOldRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentRightRemappedCurrentForwardABSOldRangeY) == 316, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentRightRemappedCurrentForwardABSOldRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentRightRemappedCurrentForwardABSNewRangeX) == 320, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentRightRemappedCurrentForwardABSNewRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentRightRemappedCurrentForwardABSNewRangeY) == 324, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentRightRemappedCurrentForwardABSNewRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentRightInterpToSpeed) == 328, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentRightInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedUpSpeedOldRangeX) == 332, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedUpSpeedOldRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedUpSpeedOldRangeY) == 336, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedUpSpeedOldRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedUpSpeedNewRangeX) == 340, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedUpSpeedNewRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedUpSpeedNewRangeY) == 344, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedUpSpeedNewRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentUpRemappedCurrentForwardABSOldRangeX) == 348, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentUpRemappedCurrentForwardABSOldRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentUpRemappedCurrentForwardABSOldRangeY) == 352, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentUpRemappedCurrentForwardABSOldRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentUpRemappedCurrentForwardABSNewRangeX) == 356, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentUpRemappedCurrentForwardABSNewRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentUpRemappedCurrentForwardABSNewRangeY) == 360, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentUpRemappedCurrentForwardABSNewRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedUpSpeedMultiplierA) == 364, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedUpSpeedMultiplierA");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedUpSpeedMultiplierB) == 368, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedUpSpeedMultiplierB");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentUpTacticalSprintingAdditiveA) == 372, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentUpTacticalSprintingAdditiveA");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentUpTacticalSprintingAdditiveB) == 376, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentUpTacticalSprintingAdditiveB");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentUpInterpToSpeed) == 380, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentUpInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedForwardSpeedABSOldRangeX) == 384, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedForwardSpeedABSOldRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedForwardSpeedABSOldRangeY) == 388, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedForwardSpeedABSOldRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedForwardSpeedABSNewRangeX) == 392, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedForwardSpeedABSNewRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedForwardSpeedABSNewRangeY) == 396, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedForwardSpeedABSNewRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedForwardSpeedABSMultiplier) == 400, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedForwardSpeedABSMultiplier");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentLeanInterpToTargetOldRangeX) == 404, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentLeanInterpToTargetOldRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentLeanInterpToTargetOldRangeY) == 408, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentLeanInterpToTargetOldRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentLeanInterpToSpeed) == 412, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentLeanInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentFOVInterpToTargetA) == 416, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentFOVInterpToTargetA");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentFOVInterpToTargetB) == 420, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentFOVInterpToTargetB");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentFOVInterpToSpeed) == 424, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentFOVInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedSpeedOldRangeX) == 428, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedSpeedOldRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedSpeedOldRangeY) == 432, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedSpeedOldRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedSpeedNewRangeX) == 436, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedSpeedNewRangeX");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeRemappedSpeedNewRangeY) == 440, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeRemappedSpeedNewRangeY");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentOffsetInterpToSpeed) == 444, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentOffsetInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentStraightnessMultiplier) == 448, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentStraightnessMultiplier");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentUpSubtrahend) == 452, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentUpSubtrahend");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeCurrentOffsetVectorInterpToSpeed) == 456, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeCurrentOffsetVectorInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeNewViewForwardVectorMultiplier) == 460, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeNewViewForwardVectorMultiplier");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeNewViewUpVectorMultiplier) == 464, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeNewViewUpVectorMultiplier");
static_assert(offsetof(UFortCameraModifier_MistRavenWraithForm, NativeNewViewRightVectorMultiplier) == 468, "Offset mismatch for UFortCameraModifier_MistRavenWraithForm::NativeNewViewRightVectorMultiplier");

// /Script/MistRavenRuntime.FortMovementMode_MistRavenWraithForm
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_MistRavenWraithForm
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t bDeactivateMMEOnLaunch; // 0x01B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01B9
    std::uint8_t AccelerationRate[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DecelerationRate[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CombinedFastSpeed[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t CombinedSlowSpeed[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t RegularFastSpeed[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t RegularSlowSpeed[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostFallOffDuration[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    void* BoostSpeedFallOffCurve; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UpDownSensitivityMultiplier[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseConstantUpDownSensitivity; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0309
    void* UpDownSensitivityCurve; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UpDownSensitivityDampeningFalloffDuration[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t bSeparateUpDownVelocityComponent; // 0x0340 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0341
    std::uint8_t VelocityDragRate[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableVelocityDrag[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t ZSpeedClampEnabled[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t ZClampNormal[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ZClampCombined[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnableGroundHoverLogic[0x28]; // 0x0410 (Size: 0x28, Type: StructProperty)
    std::uint8_t GroundHoverDistance[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    std::uint8_t HoverSpeed[0x28]; // 0x0460 (Size: 0x28, Type: StructProperty)
    float InitialActivationWindowDelayTime; // 0x0488 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x048C
    TArray<void*> IndestructibleIgnoreActorsCache; // 0x0490 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, bDeactivateMMEOnLaunch) == 440, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::bDeactivateMMEOnLaunch");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, AccelerationRate) == 448, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::AccelerationRate");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, DecelerationRate) == 488, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::DecelerationRate");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, CombinedFastSpeed) == 528, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::CombinedFastSpeed");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, CombinedSlowSpeed) == 568, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::CombinedSlowSpeed");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, RegularFastSpeed) == 608, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::RegularFastSpeed");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, RegularSlowSpeed) == 648, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::RegularSlowSpeed");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, BoostFallOffDuration) == 688, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::BoostFallOffDuration");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, BoostSpeedFallOffCurve) == 728, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::BoostSpeedFallOffCurve");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, UpDownSensitivityMultiplier) == 736, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::UpDownSensitivityMultiplier");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, bUseConstantUpDownSensitivity) == 776, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::bUseConstantUpDownSensitivity");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, UpDownSensitivityCurve) == 784, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::UpDownSensitivityCurve");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, UpDownSensitivityDampeningFalloffDuration) == 792, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::UpDownSensitivityDampeningFalloffDuration");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, bSeparateUpDownVelocityComponent) == 832, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::bSeparateUpDownVelocityComponent");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, VelocityDragRate) == 840, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::VelocityDragRate");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, EnableVelocityDrag) == 880, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::EnableVelocityDrag");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, ZSpeedClampEnabled) == 920, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::ZSpeedClampEnabled");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, ZClampNormal) == 960, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::ZClampNormal");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, ZClampCombined) == 1000, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::ZClampCombined");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, bEnableGroundHoverLogic) == 1040, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::bEnableGroundHoverLogic");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, GroundHoverDistance) == 1080, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::GroundHoverDistance");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, HoverSpeed) == 1120, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::HoverSpeed");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, InitialActivationWindowDelayTime) == 1160, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::InitialActivationWindowDelayTime");
static_assert(offsetof(UFortMovementMode_MistRavenWraithForm, IndestructibleIgnoreActorsCache) == 1168, "Offset mismatch for UFortMovementMode_MistRavenWraithForm::IndestructibleIgnoreActorsCache");

// /Script/MistRavenRuntime.FortMovementMode_MistRavenWraithFormRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_MistRavenWraithFormRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bUpInput; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDownInput; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x003A
    std::uint8_t InputVector[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t ControlRotation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float TotalTimeUpdated; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x006C
    std::uint8_t RequestedVelocity[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_MistRavenWraithFormRuntimeData, bUpInput) == 56, "Offset mismatch for UFortMovementMode_MistRavenWraithFormRuntimeData::bUpInput");
static_assert(offsetof(UFortMovementMode_MistRavenWraithFormRuntimeData, bDownInput) == 57, "Offset mismatch for UFortMovementMode_MistRavenWraithFormRuntimeData::bDownInput");
static_assert(offsetof(UFortMovementMode_MistRavenWraithFormRuntimeData, InputVector) == 64, "Offset mismatch for UFortMovementMode_MistRavenWraithFormRuntimeData::InputVector");
static_assert(offsetof(UFortMovementMode_MistRavenWraithFormRuntimeData, ControlRotation) == 80, "Offset mismatch for UFortMovementMode_MistRavenWraithFormRuntimeData::ControlRotation");
static_assert(offsetof(UFortMovementMode_MistRavenWraithFormRuntimeData, TotalTimeUpdated) == 104, "Offset mismatch for UFortMovementMode_MistRavenWraithFormRuntimeData::TotalTimeUpdated");
static_assert(offsetof(UFortMovementMode_MistRavenWraithFormRuntimeData, RequestedVelocity) == 112, "Offset mismatch for UFortMovementMode_MistRavenWraithFormRuntimeData::RequestedVelocity");

// /Script/MistRavenRuntime.MistRavenLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UMistRavenLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float DrainAOAlpha; // 0x1170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsReloadOutroNormal; // 0x1174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReloadOutroCrouchMove; // 0x1175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReloadOutroSprint; // 0x1176 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTendrilDrain; // 0x1177 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsTendrilDrainActiveTagName[0x1]; // 0x1178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMistRavenLayerAnimInstance, DrainAOAlpha) == 4464, "Offset mismatch for UMistRavenLayerAnimInstance::DrainAOAlpha");
static_assert(offsetof(UMistRavenLayerAnimInstance, bIsReloadOutroNormal) == 4468, "Offset mismatch for UMistRavenLayerAnimInstance::bIsReloadOutroNormal");
static_assert(offsetof(UMistRavenLayerAnimInstance, bIsReloadOutroCrouchMove) == 4469, "Offset mismatch for UMistRavenLayerAnimInstance::bIsReloadOutroCrouchMove");
static_assert(offsetof(UMistRavenLayerAnimInstance, bIsReloadOutroSprint) == 4470, "Offset mismatch for UMistRavenLayerAnimInstance::bIsReloadOutroSprint");
static_assert(offsetof(UMistRavenLayerAnimInstance, bIsTendrilDrain) == 4471, "Offset mismatch for UMistRavenLayerAnimInstance::bIsTendrilDrain");
static_assert(offsetof(UMistRavenLayerAnimInstance, IsTendrilDrainActiveTagName) == 4472, "Offset mismatch for UMistRavenLayerAnimInstance::IsTendrilDrainActiveTagName");

// /Script/MistRavenRuntime.MistRavenPlayerComponent
// Kind: Class; super: FortPawnComponent
class UMistRavenPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t StartGrimStrutLocation[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRepWFActive; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMistRavenPlayerComponent, StartGrimStrutLocation) == 200, "Offset mismatch for UMistRavenPlayerComponent::StartGrimStrutLocation");
static_assert(offsetof(UMistRavenPlayerComponent, bRepWFActive) == 224, "Offset mismatch for UMistRavenPlayerComponent::bRepWFActive");

// /Script/MistRavenRuntime.MistRavenProjectileOptimizationComponent
// Kind: Class; super: ActorComponent
class UMistRavenProjectileOptimizationComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t EnableNativeOptimizations[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableSimProxyTraces[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RadiusIncreasePerSec[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartingRadius[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableDebugRow[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    float TimerFrequency; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CombinedItemTag[0x4]; // 0x018C (Size: 0x4, Type: StructProperty)
    std::uint8_t HitGCTag[0x4]; // 0x0190 (Size: 0x4, Type: StructProperty)
    std::uint8_t HitSoftGCTag[0x4]; // 0x0194 (Size: 0x4, Type: StructProperty)
    std::uint8_t HitGCCombinedTag[0x4]; // 0x0198 (Size: 0x4, Type: StructProperty)
    std::uint8_t HitSoftGCCombinedTag[0x4]; // 0x019C (Size: 0x4, Type: StructProperty)
    std::uint8_t RecentlyHitTag[0x4]; // 0x01A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t SphereOverlapTraceChannel; // 0x01A4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LOSPawnTraceChannel; // 0x01A5 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LOSCameraTraceChannel; // 0x01A6 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRequirePawnLOSCheckHitActor; // 0x01A7 (Size: 0x1, Type: BoolProperty)
    void* GECombinedItemVictim; // 0x01A8 (Size: 0x8, Type: ClassProperty)
    void* GESingleItemVictim; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> DelayEffectsToApply; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x98]; // 0x01C8
    TArray<void*> CachedIgnoreActors; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PendingTargetValidations; // 0x0270 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMistRavenProjectileOptimizationComponent, EnableNativeOptimizations) == 192, "Offset mismatch for UMistRavenProjectileOptimizationComponent::EnableNativeOptimizations");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, EnableSimProxyTraces) == 232, "Offset mismatch for UMistRavenProjectileOptimizationComponent::EnableSimProxyTraces");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, RadiusIncreasePerSec) == 272, "Offset mismatch for UMistRavenProjectileOptimizationComponent::RadiusIncreasePerSec");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, StartingRadius) == 312, "Offset mismatch for UMistRavenProjectileOptimizationComponent::StartingRadius");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, EnableDebugRow) == 352, "Offset mismatch for UMistRavenProjectileOptimizationComponent::EnableDebugRow");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, TimerFrequency) == 392, "Offset mismatch for UMistRavenProjectileOptimizationComponent::TimerFrequency");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, CombinedItemTag) == 396, "Offset mismatch for UMistRavenProjectileOptimizationComponent::CombinedItemTag");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, HitGCTag) == 400, "Offset mismatch for UMistRavenProjectileOptimizationComponent::HitGCTag");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, HitSoftGCTag) == 404, "Offset mismatch for UMistRavenProjectileOptimizationComponent::HitSoftGCTag");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, HitGCCombinedTag) == 408, "Offset mismatch for UMistRavenProjectileOptimizationComponent::HitGCCombinedTag");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, HitSoftGCCombinedTag) == 412, "Offset mismatch for UMistRavenProjectileOptimizationComponent::HitSoftGCCombinedTag");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, RecentlyHitTag) == 416, "Offset mismatch for UMistRavenProjectileOptimizationComponent::RecentlyHitTag");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, SphereOverlapTraceChannel) == 420, "Offset mismatch for UMistRavenProjectileOptimizationComponent::SphereOverlapTraceChannel");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, LOSPawnTraceChannel) == 421, "Offset mismatch for UMistRavenProjectileOptimizationComponent::LOSPawnTraceChannel");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, LOSCameraTraceChannel) == 422, "Offset mismatch for UMistRavenProjectileOptimizationComponent::LOSCameraTraceChannel");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, bRequirePawnLOSCheckHitActor) == 423, "Offset mismatch for UMistRavenProjectileOptimizationComponent::bRequirePawnLOSCheckHitActor");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, GECombinedItemVictim) == 424, "Offset mismatch for UMistRavenProjectileOptimizationComponent::GECombinedItemVictim");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, GESingleItemVictim) == 432, "Offset mismatch for UMistRavenProjectileOptimizationComponent::GESingleItemVictim");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, DelayEffectsToApply) == 440, "Offset mismatch for UMistRavenProjectileOptimizationComponent::DelayEffectsToApply");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, CachedIgnoreActors) == 608, "Offset mismatch for UMistRavenProjectileOptimizationComponent::CachedIgnoreActors");
static_assert(offsetof(UMistRavenProjectileOptimizationComponent, PendingTargetValidations) == 624, "Offset mismatch for UMistRavenProjectileOptimizationComponent::PendingTargetValidations");

// /Script/MistRavenRuntime.WraithFormMistRavenCCPAnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class UWraithFormMistRavenCCPAnimInstance
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t SimSpaceSettings[0x68]; // 0x0630 (Size: 0x68, Type: StructProperty)
    std::uint8_t Cape_LookAt_Target[0x18]; // 0x0698 (Size: 0x18, Type: StructProperty)
    std::uint8_t GravityOverride[0x18]; // 0x06B0 (Size: 0x18, Type: StructProperty)
    void* ChaosClothingInteractor; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    double BwdMovement; // 0x06D0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bRbanOrCloth; // 0x06D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x06D9
    void* PhysicsAsset; // 0x06E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SkydivingAlpha[0x18]; // 0x06E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t WindGustLocalSettings[0x18]; // 0x0700 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClothCoreSettings[0x80]; // 0x0718 (Size: 0x80, Type: StructProperty)
    std::uint8_t SimSpaceSettings_Base[0x68]; // 0x0798 (Size: 0x68, Type: StructProperty)
    std::uint8_t SimSpaceSettings_GrindingWeaponActive[0x68]; // 0x0800 (Size: 0x68, Type: StructProperty)
    std::uint8_t SimSpaceSettings_GrindTarget[0x68]; // 0x0868 (Size: 0x68, Type: StructProperty)
    void* WraithFormCharacterDynamicsParameters; // 0x08D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, SimSpaceSettings) == 1584, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::SimSpaceSettings");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, Cape_LookAt_Target) == 1688, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::Cape_LookAt_Target");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, GravityOverride) == 1712, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::GravityOverride");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, ChaosClothingInteractor) == 1736, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::ChaosClothingInteractor");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, BwdMovement) == 1744, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::BwdMovement");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, bRbanOrCloth) == 1752, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::bRbanOrCloth");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, PhysicsAsset) == 1760, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::PhysicsAsset");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, SkydivingAlpha) == 1768, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::SkydivingAlpha");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, WindGustLocalSettings) == 1792, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::WindGustLocalSettings");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, ClothCoreSettings) == 1816, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::ClothCoreSettings");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, SimSpaceSettings_Base) == 1944, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::SimSpaceSettings_Base");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, SimSpaceSettings_GrindingWeaponActive) == 2048, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::SimSpaceSettings_GrindingWeaponActive");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, SimSpaceSettings_GrindTarget) == 2152, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::SimSpaceSettings_GrindTarget");
static_assert(offsetof(UWraithFormMistRavenCCPAnimInstance, WraithFormCharacterDynamicsParameters) == 2256, "Offset mismatch for UWraithFormMistRavenCCPAnimInstance::WraithFormCharacterDynamicsParameters");
