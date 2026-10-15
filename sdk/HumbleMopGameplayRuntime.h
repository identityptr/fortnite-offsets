/**
 * decamp dumper generated SDK
 * Package: /Script/HumbleMopGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HumbleMopGameplayRuntime.FortCameraModifier_HumbleMop
// Kind: Class; super: FortCameraModifier_Custom
class UFortCameraModifier_HumbleMop
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

static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeForwardPercentCurve) == 128, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeForwardPercentCurve");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeSprintingUpOffsetMultiplier) == 136, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeSprintingUpOffsetMultiplier");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeBaseUpOffsetMultiplier) == 184, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeBaseUpOffsetMultiplier");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeLeadInTime) == 228, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeLeadInTime");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeLeanRight) == 232, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeLeanRight");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeUnNormalizedForwardPercentCurveValueStart) == 236, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeUnNormalizedForwardPercentCurveValueStart");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeUnNormalizedForwardPercentCurveValueEnd) == 240, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeUnNormalizedForwardPercentCurveValueEnd");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedVelocityLengthXYOldRangeX) == 244, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedVelocityLengthXYOldRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedVelocityLengthXYOldRangeY) == 248, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedVelocityLengthXYOldRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedVelocityLengthXYNewRangeX) == 252, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedVelocityLengthXYNewRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedVelocityLengthXYNewRangeY) == 256, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedVelocityLengthXYNewRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedVelocityLengthXYMultiplier) == 260, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedVelocityLengthXYMultiplier");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedUpSpeedABSOldRangeX) == 264, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedUpSpeedABSOldRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedUpSpeedABSOldRangeY) == 268, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedUpSpeedABSOldRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedUpSpeedABSNewRangeX) == 272, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedUpSpeedABSNewRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedUpSpeedABSNewRangeY) == 276, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedUpSpeedABSNewRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentForwardTacticalSprintingAdditive) == 280, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentForwardTacticalSprintingAdditive");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentForwardInterpToSpeed) == 284, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentForwardInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedRightSpeedOldRangeX) == 288, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedRightSpeedOldRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedRightSpeedOldRangeY) == 292, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedRightSpeedOldRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedRightSpeedNewRangeX) == 296, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedRightSpeedNewRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedRightSpeedNewRangeY) == 300, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedRightSpeedNewRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedRightSpeedMultiplierA) == 304, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedRightSpeedMultiplierA");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedRightSpeedMultiplierB) == 308, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedRightSpeedMultiplierB");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentRightRemappedCurrentForwardABSOldRangeX) == 312, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentRightRemappedCurrentForwardABSOldRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentRightRemappedCurrentForwardABSOldRangeY) == 316, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentRightRemappedCurrentForwardABSOldRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentRightRemappedCurrentForwardABSNewRangeX) == 320, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentRightRemappedCurrentForwardABSNewRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentRightRemappedCurrentForwardABSNewRangeY) == 324, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentRightRemappedCurrentForwardABSNewRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentRightInterpToSpeed) == 328, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentRightInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedUpSpeedOldRangeX) == 332, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedUpSpeedOldRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedUpSpeedOldRangeY) == 336, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedUpSpeedOldRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedUpSpeedNewRangeX) == 340, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedUpSpeedNewRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedUpSpeedNewRangeY) == 344, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedUpSpeedNewRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentUpRemappedCurrentForwardABSOldRangeX) == 348, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentUpRemappedCurrentForwardABSOldRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentUpRemappedCurrentForwardABSOldRangeY) == 352, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentUpRemappedCurrentForwardABSOldRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentUpRemappedCurrentForwardABSNewRangeX) == 356, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentUpRemappedCurrentForwardABSNewRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentUpRemappedCurrentForwardABSNewRangeY) == 360, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentUpRemappedCurrentForwardABSNewRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedUpSpeedMultiplierA) == 364, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedUpSpeedMultiplierA");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedUpSpeedMultiplierB) == 368, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedUpSpeedMultiplierB");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentUpTacticalSprintingAdditiveA) == 372, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentUpTacticalSprintingAdditiveA");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentUpTacticalSprintingAdditiveB) == 376, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentUpTacticalSprintingAdditiveB");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentUpInterpToSpeed) == 380, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentUpInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedForwardSpeedABSOldRangeX) == 384, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedForwardSpeedABSOldRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedForwardSpeedABSOldRangeY) == 388, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedForwardSpeedABSOldRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedForwardSpeedABSNewRangeX) == 392, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedForwardSpeedABSNewRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedForwardSpeedABSNewRangeY) == 396, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedForwardSpeedABSNewRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedForwardSpeedABSMultiplier) == 400, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedForwardSpeedABSMultiplier");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentLeanInterpToTargetOldRangeX) == 404, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentLeanInterpToTargetOldRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentLeanInterpToTargetOldRangeY) == 408, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentLeanInterpToTargetOldRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentLeanInterpToSpeed) == 412, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentLeanInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentFOVInterpToTargetA) == 416, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentFOVInterpToTargetA");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentFOVInterpToTargetB) == 420, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentFOVInterpToTargetB");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentFOVInterpToSpeed) == 424, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentFOVInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedSpeedOldRangeX) == 428, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedSpeedOldRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedSpeedOldRangeY) == 432, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedSpeedOldRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedSpeedNewRangeX) == 436, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedSpeedNewRangeX");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeRemappedSpeedNewRangeY) == 440, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeRemappedSpeedNewRangeY");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentOffsetInterpToSpeed) == 444, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentOffsetInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentStraightnessMultiplier) == 448, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentStraightnessMultiplier");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentUpSubtrahend) == 452, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentUpSubtrahend");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeCurrentOffsetVectorInterpToSpeed) == 456, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeCurrentOffsetVectorInterpToSpeed");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeNewViewForwardVectorMultiplier) == 460, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeNewViewForwardVectorMultiplier");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeNewViewUpVectorMultiplier) == 464, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeNewViewUpVectorMultiplier");
static_assert(offsetof(UFortCameraModifier_HumbleMop, NativeNewViewRightVectorMultiplier) == 468, "Offset mismatch for UFortCameraModifier_HumbleMop::NativeNewViewRightVectorMultiplier");

// /Script/HumbleMopGameplayRuntime.HumbleMopPlayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UHumbleMopPlayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t CurveName_UserCurve01[0x4]; // 0x1170 (Size: 0x4, Type: NameProperty)
    std::uint8_t CurveName_UserCurve02[0x4]; // 0x1174 (Size: 0x4, Type: NameProperty)
    FName BoneName_Root; // 0x1178 (Size: 0x8, Type: NameProperty)
    FString MontageString_HumbleMop_SpawnWheel_M; // 0x1180 (Size: 0x10, Type: StrProperty)
    std::uint8_t HumbleMopWheelRollingTag[0x4]; // 0x1190 (Size: 0x4, Type: StructProperty)
    std::uint8_t HumbleMopWheelWindingUpTag[0x4]; // 0x1194 (Size: 0x4, Type: StructProperty)
    std::uint8_t HumbleMopWheelWindingDownTag[0x4]; // 0x1198 (Size: 0x4, Type: StructProperty)
    std::uint8_t HumbleMopSuperJumpActiveTag[0x4]; // 0x119C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayActionPlayerSprintTag[0x4]; // 0x11A0 (Size: 0x4, Type: StructProperty)
    float InterpSpeed; // 0x11A4 (Size: 0x4, Type: FloatProperty)
    float ExitNoiseInterpSpeed; // 0x11A8 (Size: 0x4, Type: FloatProperty)
    float ForwardSpeedRemapOldMin; // 0x11AC (Size: 0x4, Type: FloatProperty)
    float ForwardSpeedRemapOldMax; // 0x11B0 (Size: 0x4, Type: FloatProperty)
    float ForwardSpeedRemapNewMin; // 0x11B4 (Size: 0x4, Type: FloatProperty)
    float ForwardSpeedRemapNewMax; // 0x11B8 (Size: 0x4, Type: FloatProperty)
    float LateralSpeedRemapOldMin; // 0x11BC (Size: 0x4, Type: FloatProperty)
    float LateralSpeedRemapOldMax; // 0x11C0 (Size: 0x4, Type: FloatProperty)
    float LateralSpeedRemapNewMin; // 0x11C4 (Size: 0x4, Type: FloatProperty)
    float LateralSpeedRemapNewMax; // 0x11C8 (Size: 0x4, Type: FloatProperty)
    float NoiseAlphaRemapOldMin; // 0x11CC (Size: 0x4, Type: FloatProperty)
    float NoiseAlphaRemapOldMax; // 0x11D0 (Size: 0x4, Type: FloatProperty)
    float NoiseAlphaRemapNewMin; // 0x11D4 (Size: 0x4, Type: FloatProperty)
    float NoiseAlphaRemapNewMax; // 0x11D8 (Size: 0x4, Type: FloatProperty)
    float ForwardSpeedInterpSpeed; // 0x11DC (Size: 0x4, Type: FloatProperty)
    float LateralSpeedInterpSpeed; // 0x11E0 (Size: 0x4, Type: FloatProperty)
    float ExitNoiseAlpha; // 0x11E4 (Size: 0x4, Type: FloatProperty)
    float InputLeftRight; // 0x11E8 (Size: 0x4, Type: FloatProperty)
    float InputFrontBack; // 0x11EC (Size: 0x4, Type: FloatProperty)
    float ForwardSpeedInterp; // 0x11F0 (Size: 0x4, Type: FloatProperty)
    float LateralSpeedInterp; // 0x11F4 (Size: 0x4, Type: FloatProperty)
    float WheelNoiseAlpha; // 0x11F8 (Size: 0x4, Type: FloatProperty)
    float WindUpPlayRate; // 0x11FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsWheelActive; // 0x1200 (Size: 0x1, Type: BoolProperty)
    // 0x1200 BoolProperty bIsWheelJumpLand (shared storage)
    // 0x1200 BoolProperty bIsWheelJumping (shared storage)
    // 0x1200 BoolProperty bIsWheelTacSprint (shared storage)
    // 0x1200 BoolProperty bIsWindingDown (shared storage)
    // 0x1200 BoolProperty bIsWindingDownOver (shared storage)
    // 0x1200 BoolProperty bIsWindingUp (shared storage)
    // 0x1200 BoolProperty bIsWindingUpOver (shared storage)
    std::uint8_t bIsDolphinWindJump; // 0x1201 (Size: 0x1, Type: BoolProperty)
    // 0x1201 BoolProperty bIsWindJump (shared storage)
    std::uint8_t Pad_0001[0x6]; // 0x1202
    std::uint8_t PlayerCurrentRotation[0x18]; // 0x1208 (Size: 0x18, Type: StructProperty)
    std::uint8_t GoalUpVec[0x18]; // 0x1220 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightVec[0x18]; // 0x1238 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerGoalRotation[0x18]; // 0x1250 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentUpVec[0x1]; // 0x1268 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UHumbleMopPlayerAnimInstance, CurveName_UserCurve01) == 4464, "Offset mismatch for UHumbleMopPlayerAnimInstance::CurveName_UserCurve01");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, CurveName_UserCurve02) == 4468, "Offset mismatch for UHumbleMopPlayerAnimInstance::CurveName_UserCurve02");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, BoneName_Root) == 4472, "Offset mismatch for UHumbleMopPlayerAnimInstance::BoneName_Root");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, MontageString_HumbleMop_SpawnWheel_M) == 4480, "Offset mismatch for UHumbleMopPlayerAnimInstance::MontageString_HumbleMop_SpawnWheel_M");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, HumbleMopWheelRollingTag) == 4496, "Offset mismatch for UHumbleMopPlayerAnimInstance::HumbleMopWheelRollingTag");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, HumbleMopWheelWindingUpTag) == 4500, "Offset mismatch for UHumbleMopPlayerAnimInstance::HumbleMopWheelWindingUpTag");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, HumbleMopWheelWindingDownTag) == 4504, "Offset mismatch for UHumbleMopPlayerAnimInstance::HumbleMopWheelWindingDownTag");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, HumbleMopSuperJumpActiveTag) == 4508, "Offset mismatch for UHumbleMopPlayerAnimInstance::HumbleMopSuperJumpActiveTag");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, GameplayActionPlayerSprintTag) == 4512, "Offset mismatch for UHumbleMopPlayerAnimInstance::GameplayActionPlayerSprintTag");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, InterpSpeed) == 4516, "Offset mismatch for UHumbleMopPlayerAnimInstance::InterpSpeed");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, ExitNoiseInterpSpeed) == 4520, "Offset mismatch for UHumbleMopPlayerAnimInstance::ExitNoiseInterpSpeed");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, ForwardSpeedRemapOldMin) == 4524, "Offset mismatch for UHumbleMopPlayerAnimInstance::ForwardSpeedRemapOldMin");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, ForwardSpeedRemapOldMax) == 4528, "Offset mismatch for UHumbleMopPlayerAnimInstance::ForwardSpeedRemapOldMax");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, ForwardSpeedRemapNewMin) == 4532, "Offset mismatch for UHumbleMopPlayerAnimInstance::ForwardSpeedRemapNewMin");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, ForwardSpeedRemapNewMax) == 4536, "Offset mismatch for UHumbleMopPlayerAnimInstance::ForwardSpeedRemapNewMax");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, LateralSpeedRemapOldMin) == 4540, "Offset mismatch for UHumbleMopPlayerAnimInstance::LateralSpeedRemapOldMin");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, LateralSpeedRemapOldMax) == 4544, "Offset mismatch for UHumbleMopPlayerAnimInstance::LateralSpeedRemapOldMax");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, LateralSpeedRemapNewMin) == 4548, "Offset mismatch for UHumbleMopPlayerAnimInstance::LateralSpeedRemapNewMin");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, LateralSpeedRemapNewMax) == 4552, "Offset mismatch for UHumbleMopPlayerAnimInstance::LateralSpeedRemapNewMax");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, NoiseAlphaRemapOldMin) == 4556, "Offset mismatch for UHumbleMopPlayerAnimInstance::NoiseAlphaRemapOldMin");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, NoiseAlphaRemapOldMax) == 4560, "Offset mismatch for UHumbleMopPlayerAnimInstance::NoiseAlphaRemapOldMax");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, NoiseAlphaRemapNewMin) == 4564, "Offset mismatch for UHumbleMopPlayerAnimInstance::NoiseAlphaRemapNewMin");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, NoiseAlphaRemapNewMax) == 4568, "Offset mismatch for UHumbleMopPlayerAnimInstance::NoiseAlphaRemapNewMax");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, ForwardSpeedInterpSpeed) == 4572, "Offset mismatch for UHumbleMopPlayerAnimInstance::ForwardSpeedInterpSpeed");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, LateralSpeedInterpSpeed) == 4576, "Offset mismatch for UHumbleMopPlayerAnimInstance::LateralSpeedInterpSpeed");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, ExitNoiseAlpha) == 4580, "Offset mismatch for UHumbleMopPlayerAnimInstance::ExitNoiseAlpha");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, InputLeftRight) == 4584, "Offset mismatch for UHumbleMopPlayerAnimInstance::InputLeftRight");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, InputFrontBack) == 4588, "Offset mismatch for UHumbleMopPlayerAnimInstance::InputFrontBack");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, ForwardSpeedInterp) == 4592, "Offset mismatch for UHumbleMopPlayerAnimInstance::ForwardSpeedInterp");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, LateralSpeedInterp) == 4596, "Offset mismatch for UHumbleMopPlayerAnimInstance::LateralSpeedInterp");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, WheelNoiseAlpha) == 4600, "Offset mismatch for UHumbleMopPlayerAnimInstance::WheelNoiseAlpha");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, WindUpPlayRate) == 4604, "Offset mismatch for UHumbleMopPlayerAnimInstance::WindUpPlayRate");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, bIsWheelActive) == 4608, "Offset mismatch for UHumbleMopPlayerAnimInstance::bIsWheelActive");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, bIsDolphinWindJump) == 4609, "Offset mismatch for UHumbleMopPlayerAnimInstance::bIsDolphinWindJump");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, PlayerCurrentRotation) == 4616, "Offset mismatch for UHumbleMopPlayerAnimInstance::PlayerCurrentRotation");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, GoalUpVec) == 4640, "Offset mismatch for UHumbleMopPlayerAnimInstance::GoalUpVec");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, RightVec) == 4664, "Offset mismatch for UHumbleMopPlayerAnimInstance::RightVec");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, PlayerGoalRotation) == 4688, "Offset mismatch for UHumbleMopPlayerAnimInstance::PlayerGoalRotation");
static_assert(offsetof(UHumbleMopPlayerAnimInstance, CurrentUpVec) == 4712, "Offset mismatch for UHumbleMopPlayerAnimInstance::CurrentUpVec");
