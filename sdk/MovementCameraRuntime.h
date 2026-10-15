/**
 * decamp dumper generated SDK
 * Package: /Script/MovementCameraRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MovementCameraRuntime.FortCameraMode_Movement
// Kind: Class; super: FortCameraMode_ThirdPerson
class UFortCameraMode_Movement
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    void* InitialOffsetCurve; // 0x2080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInitialOffsetIsAdditive; // 0x2088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x2089
    std::uint8_t AccelerationOffsetDeadzone[0x28]; // 0x2090 (Size: 0x28, Type: StructProperty)
    std::uint8_t AccelerationMaxOffset[0x28]; // 0x20B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseViewRotationForYawDelta; // 0x20E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x20E1
    void* RightAccelerationOffsetCurve; // 0x20E8 (Size: 0x8, Type: ObjectProperty)
    void* UpAccelerationOffsetCurve; // 0x20F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AccelerationOffsetInterpSpeed[0x18]; // 0x20F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxCameraYawSpeedForAdjustment[0x28]; // 0x2110 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxVelocityForAdjustment[0x28]; // 0x2138 (Size: 0x28, Type: StructProperty)
    std::uint8_t bClampYawRelativeToVelocity; // 0x2160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x2161
    std::uint8_t YawMinRelativeToVelocity[0x28]; // 0x2168 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawMaxRelativeToVelocity[0x28]; // 0x2190 (Size: 0x28, Type: StructProperty)
    std::uint8_t bClampPitchRelativeToVelocity; // 0x21B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x21B9
    std::uint8_t PitchMinRelativeToVelocity[0x28]; // 0x21C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchMaxRelativeToVelocity[0x28]; // 0x21E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialHoldInterpSpeed[0x18]; // 0x2210 (Size: 0x18, Type: StructProperty)
    void* InitialHoldInterpSpeedCurve; // 0x2228 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitialHoldInterpSpeedTime[0x28]; // 0x2230 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialInterpSpeedBlendOutTime[0x28]; // 0x2258 (Size: 0x28, Type: StructProperty)
    std::uint8_t bInitialHoldDuringSlowdown; // 0x2280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x2281
    void* InitialInterpSpeedBlendCurve; // 0x2288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaxFOV[0x1]; // 0x2290 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCameraMode_Movement, InitialOffsetCurve) == 8320, "Offset mismatch for UFortCameraMode_Movement::InitialOffsetCurve");
static_assert(offsetof(UFortCameraMode_Movement, bInitialOffsetIsAdditive) == 8328, "Offset mismatch for UFortCameraMode_Movement::bInitialOffsetIsAdditive");
static_assert(offsetof(UFortCameraMode_Movement, AccelerationOffsetDeadzone) == 8336, "Offset mismatch for UFortCameraMode_Movement::AccelerationOffsetDeadzone");
static_assert(offsetof(UFortCameraMode_Movement, AccelerationMaxOffset) == 8376, "Offset mismatch for UFortCameraMode_Movement::AccelerationMaxOffset");
static_assert(offsetof(UFortCameraMode_Movement, bUseViewRotationForYawDelta) == 8416, "Offset mismatch for UFortCameraMode_Movement::bUseViewRotationForYawDelta");
static_assert(offsetof(UFortCameraMode_Movement, RightAccelerationOffsetCurve) == 8424, "Offset mismatch for UFortCameraMode_Movement::RightAccelerationOffsetCurve");
static_assert(offsetof(UFortCameraMode_Movement, UpAccelerationOffsetCurve) == 8432, "Offset mismatch for UFortCameraMode_Movement::UpAccelerationOffsetCurve");
static_assert(offsetof(UFortCameraMode_Movement, AccelerationOffsetInterpSpeed) == 8440, "Offset mismatch for UFortCameraMode_Movement::AccelerationOffsetInterpSpeed");
static_assert(offsetof(UFortCameraMode_Movement, MaxCameraYawSpeedForAdjustment) == 8464, "Offset mismatch for UFortCameraMode_Movement::MaxCameraYawSpeedForAdjustment");
static_assert(offsetof(UFortCameraMode_Movement, MaxVelocityForAdjustment) == 8504, "Offset mismatch for UFortCameraMode_Movement::MaxVelocityForAdjustment");
static_assert(offsetof(UFortCameraMode_Movement, bClampYawRelativeToVelocity) == 8544, "Offset mismatch for UFortCameraMode_Movement::bClampYawRelativeToVelocity");
static_assert(offsetof(UFortCameraMode_Movement, YawMinRelativeToVelocity) == 8552, "Offset mismatch for UFortCameraMode_Movement::YawMinRelativeToVelocity");
static_assert(offsetof(UFortCameraMode_Movement, YawMaxRelativeToVelocity) == 8592, "Offset mismatch for UFortCameraMode_Movement::YawMaxRelativeToVelocity");
static_assert(offsetof(UFortCameraMode_Movement, bClampPitchRelativeToVelocity) == 8632, "Offset mismatch for UFortCameraMode_Movement::bClampPitchRelativeToVelocity");
static_assert(offsetof(UFortCameraMode_Movement, PitchMinRelativeToVelocity) == 8640, "Offset mismatch for UFortCameraMode_Movement::PitchMinRelativeToVelocity");
static_assert(offsetof(UFortCameraMode_Movement, PitchMaxRelativeToVelocity) == 8680, "Offset mismatch for UFortCameraMode_Movement::PitchMaxRelativeToVelocity");
static_assert(offsetof(UFortCameraMode_Movement, InitialHoldInterpSpeed) == 8720, "Offset mismatch for UFortCameraMode_Movement::InitialHoldInterpSpeed");
static_assert(offsetof(UFortCameraMode_Movement, InitialHoldInterpSpeedCurve) == 8744, "Offset mismatch for UFortCameraMode_Movement::InitialHoldInterpSpeedCurve");
static_assert(offsetof(UFortCameraMode_Movement, InitialHoldInterpSpeedTime) == 8752, "Offset mismatch for UFortCameraMode_Movement::InitialHoldInterpSpeedTime");
static_assert(offsetof(UFortCameraMode_Movement, InitialInterpSpeedBlendOutTime) == 8792, "Offset mismatch for UFortCameraMode_Movement::InitialInterpSpeedBlendOutTime");
static_assert(offsetof(UFortCameraMode_Movement, bInitialHoldDuringSlowdown) == 8832, "Offset mismatch for UFortCameraMode_Movement::bInitialHoldDuringSlowdown");
static_assert(offsetof(UFortCameraMode_Movement, InitialInterpSpeedBlendCurve) == 8840, "Offset mismatch for UFortCameraMode_Movement::InitialInterpSpeedBlendCurve");
static_assert(offsetof(UFortCameraMode_Movement, MaxFOV) == 8848, "Offset mismatch for UFortCameraMode_Movement::MaxFOV");

// /Script/MovementCameraRuntime.FortCameraModifier_Movement
// Kind: Class; super: FortCameraModifier_Custom
class UFortCameraModifier_Movement
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t bUseNativeCalculation; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0081
    void* LeadInForwardCurve; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LeadInCurveMax[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t LeadInTime[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ForwardOffsetPlayerSpeedOldRange[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ForwardOffsetPlayerSpeedNewRange[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    std::uint8_t ForwardOffsetUpSpeedOldRange[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    std::uint8_t ForwardOffsetUpSpeedNewRange[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t ForwardOffsetSprintingAdditive[0x30]; // 0x0130 (Size: 0x30, Type: StructProperty)
    std::uint8_t ForwardOffsetBaseAdditive[0x30]; // 0x0160 (Size: 0x30, Type: StructProperty)
    std::uint8_t ForwardOffsetInterpSpeed[0x30]; // 0x0190 (Size: 0x30, Type: StructProperty)
    std::uint8_t RightOffsetRightSpeedOldRange[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RightOffsetRightSpeedNewRange[0x10]; // 0x01D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RightOffsetForwardOffsetOldRange[0x10]; // 0x01E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RightOffsetForwardOffsetNewRange[0x10]; // 0x01F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RightOffsetPositiveRightSpeedMultiplier[0x30]; // 0x0200 (Size: 0x30, Type: StructProperty)
    std::uint8_t RightOffsetNegativeRightSpeedMultiplier[0x30]; // 0x0230 (Size: 0x30, Type: StructProperty)
    std::uint8_t RightOffsetInterpSpeed[0x30]; // 0x0260 (Size: 0x30, Type: StructProperty)
    std::uint8_t UpOffsetUpSpeedOldRange[0x10]; // 0x0290 (Size: 0x10, Type: StructProperty)
    std::uint8_t UpOffsetUpSpeedNewRange[0x10]; // 0x02A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t UpOffsetForwardOffsetOldRange[0x10]; // 0x02B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t UpOffsetForwardOffsetNewRange[0x10]; // 0x02C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t UpOffsetPositiveUpSpeedMultiplier[0x30]; // 0x02D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t UpOffsetNegativeUpSpeedMultiplier[0x30]; // 0x0300 (Size: 0x30, Type: StructProperty)
    std::uint8_t UpOffsetSprintingAdditive[0x30]; // 0x0330 (Size: 0x30, Type: StructProperty)
    std::uint8_t UpOffsetBaseAdditive[0x30]; // 0x0360 (Size: 0x30, Type: StructProperty)
    std::uint8_t UpOffsetInterpSpeed[0x30]; // 0x0390 (Size: 0x30, Type: StructProperty)
    std::uint8_t FOVOffsetSprintingInterpTarget[0x30]; // 0x03C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FOVOffsetBaseInterpTarget[0x30]; // 0x03F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FOVOffsetInterpSpeed[0x30]; // 0x0420 (Size: 0x30, Type: StructProperty)
    std::uint8_t FinalizeOffsetCurrentStraightnessMultiplier[0x30]; // 0x0450 (Size: 0x30, Type: StructProperty)
    std::uint8_t FinalizeOffsetUpOffsetAdditive[0x30]; // 0x0480 (Size: 0x30, Type: StructProperty)
    std::uint8_t FinalizeOffsetLeanOffsetMultiplier[0x30]; // 0x04B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FinalizeOffsetViewRotationForwardMultipler[0x30]; // 0x04E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FinalizeOffsetViewRotationUpMultipler[0x30]; // 0x0510 (Size: 0x30, Type: StructProperty)
    std::uint8_t FinalizeOffsetViewRotationRightMultipler[0x30]; // 0x0540 (Size: 0x30, Type: StructProperty)
    std::uint8_t FinalizeOffsetInterpSpeed[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCameraModifier_Movement, bUseNativeCalculation) == 128, "Offset mismatch for UFortCameraModifier_Movement::bUseNativeCalculation");
static_assert(offsetof(UFortCameraModifier_Movement, LeadInForwardCurve) == 136, "Offset mismatch for UFortCameraModifier_Movement::LeadInForwardCurve");
static_assert(offsetof(UFortCameraModifier_Movement, LeadInCurveMax) == 144, "Offset mismatch for UFortCameraModifier_Movement::LeadInCurveMax");
static_assert(offsetof(UFortCameraModifier_Movement, LeadInTime) == 192, "Offset mismatch for UFortCameraModifier_Movement::LeadInTime");
static_assert(offsetof(UFortCameraModifier_Movement, ForwardOffsetPlayerSpeedOldRange) == 240, "Offset mismatch for UFortCameraModifier_Movement::ForwardOffsetPlayerSpeedOldRange");
static_assert(offsetof(UFortCameraModifier_Movement, ForwardOffsetPlayerSpeedNewRange) == 256, "Offset mismatch for UFortCameraModifier_Movement::ForwardOffsetPlayerSpeedNewRange");
static_assert(offsetof(UFortCameraModifier_Movement, ForwardOffsetUpSpeedOldRange) == 272, "Offset mismatch for UFortCameraModifier_Movement::ForwardOffsetUpSpeedOldRange");
static_assert(offsetof(UFortCameraModifier_Movement, ForwardOffsetUpSpeedNewRange) == 288, "Offset mismatch for UFortCameraModifier_Movement::ForwardOffsetUpSpeedNewRange");
static_assert(offsetof(UFortCameraModifier_Movement, ForwardOffsetSprintingAdditive) == 304, "Offset mismatch for UFortCameraModifier_Movement::ForwardOffsetSprintingAdditive");
static_assert(offsetof(UFortCameraModifier_Movement, ForwardOffsetBaseAdditive) == 352, "Offset mismatch for UFortCameraModifier_Movement::ForwardOffsetBaseAdditive");
static_assert(offsetof(UFortCameraModifier_Movement, ForwardOffsetInterpSpeed) == 400, "Offset mismatch for UFortCameraModifier_Movement::ForwardOffsetInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Movement, RightOffsetRightSpeedOldRange) == 448, "Offset mismatch for UFortCameraModifier_Movement::RightOffsetRightSpeedOldRange");
static_assert(offsetof(UFortCameraModifier_Movement, RightOffsetRightSpeedNewRange) == 464, "Offset mismatch for UFortCameraModifier_Movement::RightOffsetRightSpeedNewRange");
static_assert(offsetof(UFortCameraModifier_Movement, RightOffsetForwardOffsetOldRange) == 480, "Offset mismatch for UFortCameraModifier_Movement::RightOffsetForwardOffsetOldRange");
static_assert(offsetof(UFortCameraModifier_Movement, RightOffsetForwardOffsetNewRange) == 496, "Offset mismatch for UFortCameraModifier_Movement::RightOffsetForwardOffsetNewRange");
static_assert(offsetof(UFortCameraModifier_Movement, RightOffsetPositiveRightSpeedMultiplier) == 512, "Offset mismatch for UFortCameraModifier_Movement::RightOffsetPositiveRightSpeedMultiplier");
static_assert(offsetof(UFortCameraModifier_Movement, RightOffsetNegativeRightSpeedMultiplier) == 560, "Offset mismatch for UFortCameraModifier_Movement::RightOffsetNegativeRightSpeedMultiplier");
static_assert(offsetof(UFortCameraModifier_Movement, RightOffsetInterpSpeed) == 608, "Offset mismatch for UFortCameraModifier_Movement::RightOffsetInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Movement, UpOffsetUpSpeedOldRange) == 656, "Offset mismatch for UFortCameraModifier_Movement::UpOffsetUpSpeedOldRange");
static_assert(offsetof(UFortCameraModifier_Movement, UpOffsetUpSpeedNewRange) == 672, "Offset mismatch for UFortCameraModifier_Movement::UpOffsetUpSpeedNewRange");
static_assert(offsetof(UFortCameraModifier_Movement, UpOffsetForwardOffsetOldRange) == 688, "Offset mismatch for UFortCameraModifier_Movement::UpOffsetForwardOffsetOldRange");
static_assert(offsetof(UFortCameraModifier_Movement, UpOffsetForwardOffsetNewRange) == 704, "Offset mismatch for UFortCameraModifier_Movement::UpOffsetForwardOffsetNewRange");
static_assert(offsetof(UFortCameraModifier_Movement, UpOffsetPositiveUpSpeedMultiplier) == 720, "Offset mismatch for UFortCameraModifier_Movement::UpOffsetPositiveUpSpeedMultiplier");
static_assert(offsetof(UFortCameraModifier_Movement, UpOffsetNegativeUpSpeedMultiplier) == 768, "Offset mismatch for UFortCameraModifier_Movement::UpOffsetNegativeUpSpeedMultiplier");
static_assert(offsetof(UFortCameraModifier_Movement, UpOffsetSprintingAdditive) == 816, "Offset mismatch for UFortCameraModifier_Movement::UpOffsetSprintingAdditive");
static_assert(offsetof(UFortCameraModifier_Movement, UpOffsetBaseAdditive) == 864, "Offset mismatch for UFortCameraModifier_Movement::UpOffsetBaseAdditive");
static_assert(offsetof(UFortCameraModifier_Movement, UpOffsetInterpSpeed) == 912, "Offset mismatch for UFortCameraModifier_Movement::UpOffsetInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Movement, FOVOffsetSprintingInterpTarget) == 960, "Offset mismatch for UFortCameraModifier_Movement::FOVOffsetSprintingInterpTarget");
static_assert(offsetof(UFortCameraModifier_Movement, FOVOffsetBaseInterpTarget) == 1008, "Offset mismatch for UFortCameraModifier_Movement::FOVOffsetBaseInterpTarget");
static_assert(offsetof(UFortCameraModifier_Movement, FOVOffsetInterpSpeed) == 1056, "Offset mismatch for UFortCameraModifier_Movement::FOVOffsetInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Movement, FinalizeOffsetCurrentStraightnessMultiplier) == 1104, "Offset mismatch for UFortCameraModifier_Movement::FinalizeOffsetCurrentStraightnessMultiplier");
static_assert(offsetof(UFortCameraModifier_Movement, FinalizeOffsetUpOffsetAdditive) == 1152, "Offset mismatch for UFortCameraModifier_Movement::FinalizeOffsetUpOffsetAdditive");
static_assert(offsetof(UFortCameraModifier_Movement, FinalizeOffsetLeanOffsetMultiplier) == 1200, "Offset mismatch for UFortCameraModifier_Movement::FinalizeOffsetLeanOffsetMultiplier");
static_assert(offsetof(UFortCameraModifier_Movement, FinalizeOffsetViewRotationForwardMultipler) == 1248, "Offset mismatch for UFortCameraModifier_Movement::FinalizeOffsetViewRotationForwardMultipler");
static_assert(offsetof(UFortCameraModifier_Movement, FinalizeOffsetViewRotationUpMultipler) == 1296, "Offset mismatch for UFortCameraModifier_Movement::FinalizeOffsetViewRotationUpMultipler");
static_assert(offsetof(UFortCameraModifier_Movement, FinalizeOffsetViewRotationRightMultipler) == 1344, "Offset mismatch for UFortCameraModifier_Movement::FinalizeOffsetViewRotationRightMultipler");
static_assert(offsetof(UFortCameraModifier_Movement, FinalizeOffsetInterpSpeed) == 1392, "Offset mismatch for UFortCameraModifier_Movement::FinalizeOffsetInterpSpeed");
