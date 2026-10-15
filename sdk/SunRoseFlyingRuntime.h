/**
 * decamp dumper generated SDK
 * Package: /Script/SunRoseFlyingRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SunRoseFlyingRuntime.FlyingStatusConfig
// Kind: ScriptStruct; super: none
struct FFlyingStatusConfig
{
public:
    std::uint8_t Status; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t InitialEnergyCost[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t CooldownTag[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t CooldownDuration[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t OnGoingEnergyCost[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndOnEmptyEnergy[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFlyingStatusConfig, Status) == 0, "Offset mismatch for FFlyingStatusConfig::Status");
static_assert(offsetof(FFlyingStatusConfig, InitialEnergyCost) == 8, "Offset mismatch for FFlyingStatusConfig::InitialEnergyCost");
static_assert(offsetof(FFlyingStatusConfig, CooldownTag) == 48, "Offset mismatch for FFlyingStatusConfig::CooldownTag");
static_assert(offsetof(FFlyingStatusConfig, CooldownDuration) == 56, "Offset mismatch for FFlyingStatusConfig::CooldownDuration");
static_assert(offsetof(FFlyingStatusConfig, OnGoingEnergyCost) == 96, "Offset mismatch for FFlyingStatusConfig::OnGoingEnergyCost");
static_assert(offsetof(FFlyingStatusConfig, EndOnEmptyEnergy) == 136, "Offset mismatch for FFlyingStatusConfig::EndOnEmptyEnergy");

// /Script/SunRoseFlyingRuntime.FortMovementMode_WingedFlyingCreationData
// Kind: ScriptStruct; super: FortMovementMode_FlyingCreationData
struct FFortMovementMode_WingedFlyingCreationData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float FlyingEnergy; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bConsumeExtraLeapEnergy; // 0x0034 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortMovementMode_WingedFlyingCreationData, FlyingEnergy) == 48, "Offset mismatch for FFortMovementMode_WingedFlyingCreationData::FlyingEnergy");
static_assert(offsetof(FFortMovementMode_WingedFlyingCreationData, bConsumeExtraLeapEnergy) == 52, "Offset mismatch for FFortMovementMode_WingedFlyingCreationData::bConsumeExtraLeapEnergy");

// /Script/SunRoseFlyingRuntime.AFortGameplayCueNotifyLoop_SunroseFlying
// Kind: Class; super: FortGameplayCueNotify_Loop
class UAFortGameplayCueNotifyLoop_SunroseFlying
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t IsAscendingParamName[0x4]; // 0x0C48 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsFlappingParamName[0x4]; // 0x0C4C (Size: 0x4, Type: NameProperty)
    std::uint8_t FlappingAlphaParamName[0x4]; // 0x0C50 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsRollingParamName[0x4]; // 0x0C54 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsBoostingParamName[0x4]; // 0x0C58 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsDivingParamName[0x4]; // 0x0C5C (Size: 0x4, Type: NameProperty)
    std::uint8_t PitchParamName[0x4]; // 0x0C60 (Size: 0x4, Type: NameProperty)
    std::uint8_t RollParamName[0x4]; // 0x0C64 (Size: 0x4, Type: NameProperty)
    std::uint8_t SpeedParamName[0x4]; // 0x0C68 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsSkimmingParamName[0x4]; // 0x0C6C (Size: 0x4, Type: NameProperty)
    std::uint8_t AltitudeInterpParamName[0x4]; // 0x0C70 (Size: 0x4, Type: NameProperty)
    std::uint8_t HeightRange[0x1]; // 0x0C74 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, IsAscendingParamName) == 3144, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::IsAscendingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, IsFlappingParamName) == 3148, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::IsFlappingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, FlappingAlphaParamName) == 3152, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::FlappingAlphaParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, IsRollingParamName) == 3156, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::IsRollingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, IsBoostingParamName) == 3160, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::IsBoostingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, IsDivingParamName) == 3164, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::IsDivingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, PitchParamName) == 3168, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::PitchParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, RollParamName) == 3172, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::RollParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, SpeedParamName) == 3176, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::SpeedParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, IsSkimmingParamName) == 3180, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::IsSkimmingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, AltitudeInterpParamName) == 3184, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::AltitudeInterpParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_SunroseFlying, HeightRange) == 3188, "Offset mismatch for UAFortGameplayCueNotifyLoop_SunroseFlying::HeightRange");

// /Script/SunRoseFlyingRuntime.FortCameraModifier_SunroseWingsFlying
// Kind: Class; super: FortCameraModifier_Custom
class UFortCameraModifier_SunroseWingsFlying
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* NativeFlyingPawnClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0088
    std::uint8_t NativeFlyingSpeedBase[0x30]; // 0x0098 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeFlyingSpeedAddedAtMaxDistanceFromCeilingHeight[0x30]; // 0x00C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeFlyingDownZSpeedAddedWhileFalling[0x30]; // 0x00F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeFlyingHeightDecayMin[0x30]; // 0x0128 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativePreCrashWindupDuration[0x30]; // 0x0158 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeFlyingInputWeightHorizontal[0x30]; // 0x0188 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeFlyingInputWeightLookDirection[0x2C]; // 0x01B8 (Size: 0x2C, Type: StructProperty)
    float NativeDeltaFOVForwardOffsetExponent; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    float NativeFOVModeSwapInterpRate; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    float NativeMaxFOVOffset; // 0x01EC (Size: 0x4, Type: FloatProperty)
    float NativeRotationRateForMaxRightOffset; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float NativeRightOffsetMaxCombinedStrafeTurn; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    float NativeRightOffsetStrafe; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    float NativeRightOffsetTurn; // 0x01FC (Size: 0x4, Type: FloatProperty)
    float NativeRightOffsetDodge; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float NativeForwardOffsetDistanceCrashingFinal; // 0x0204 (Size: 0x4, Type: FloatProperty)
    float NativeForwardOffsetDistanceForceCrashingPhase1; // 0x0208 (Size: 0x4, Type: FloatProperty)
    float NativeForwardOffsetDistanceCrashingPhase1; // 0x020C (Size: 0x4, Type: FloatProperty)
    float NativeForwardOffsetDistanceCrashingPhase2; // 0x0210 (Size: 0x4, Type: FloatProperty)
    float NativeForwardOffsetCrashingTimeAfterWindupToEnterFinalPhase; // 0x0214 (Size: 0x4, Type: FloatProperty)
    float NativeForwardOffsetInterpSpeedCrashingPhase1; // 0x0218 (Size: 0x4, Type: FloatProperty)
    float NativeForwardOffsetInterpSpeedCrashingPhase2; // 0x021C (Size: 0x4, Type: FloatProperty)
    float NativeForwardOffsetInterpSpeedCrashingFinal; // 0x0220 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NativeTagForceCrash[0x4]; // 0x0224 (Size: 0x4, Type: StructProperty)
    float NativeFOVInterpSpeed; // 0x0228 (Size: 0x4, Type: FloatProperty)
    float NativeMinFOVOffsetFast; // 0x022C (Size: 0x4, Type: FloatProperty)
    float NativeMinFOVOffsetSlow; // 0x0230 (Size: 0x4, Type: FloatProperty)
    float NativeMaxFOVOffsetSlow; // 0x0234 (Size: 0x4, Type: FloatProperty)
    float NativeLateBoostStartTime; // 0x0238 (Size: 0x4, Type: FloatProperty)
    float NativeTimeSinceLastBoostLateMin; // 0x023C (Size: 0x4, Type: FloatProperty)
    float NativeTimeSinceLastBoostLateMax; // 0x0240 (Size: 0x4, Type: FloatProperty)
    float NativeFOVOffsetLateMin; // 0x0244 (Size: 0x4, Type: FloatProperty)
    float NativeFOVOffsetLateMax; // 0x0248 (Size: 0x4, Type: FloatProperty)
    float NativeTimeSinceEarlyBoostLateMin; // 0x024C (Size: 0x4, Type: FloatProperty)
    float NativeTimeSinceLastBoostEarlyMax; // 0x0250 (Size: 0x4, Type: FloatProperty)
    float NativeFOVOffsetEarlyMin; // 0x0254 (Size: 0x4, Type: FloatProperty)
    float NativeFOVOffsetEarlyMax; // 0x0258 (Size: 0x4, Type: FloatProperty)
    float NativeFOVOffsetModeMin; // 0x025C (Size: 0x4, Type: FloatProperty)
    float NativeCrashingFOVInterpSpeed; // 0x0260 (Size: 0x4, Type: FloatProperty)
    float NativeFOVOffsetWindup; // 0x0264 (Size: 0x4, Type: FloatProperty)
    float NativePositiveFlyingMoveActionXFOVInterpSpeed; // 0x0268 (Size: 0x4, Type: FloatProperty)
    float NativeNegativeFlyingMoveActionXFOVInterpSpeed; // 0x026C (Size: 0x4, Type: FloatProperty)
    float NativeFlyingMoveActionPositiveMin; // 0x0270 (Size: 0x4, Type: FloatProperty)
    float NativeFlyingMoveActionPositiveMax; // 0x0274 (Size: 0x4, Type: FloatProperty)
    float NativeFlyingMoveActionPositiveFOVMin; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float NativeFlyingMoveActionPositiveFOVMax; // 0x027C (Size: 0x4, Type: FloatProperty)
    float NativeFlyingMoveActionNegativeMin; // 0x0280 (Size: 0x4, Type: FloatProperty)
    float NativeFlyingMoveActionNegativeMax; // 0x0284 (Size: 0x4, Type: FloatProperty)
    float NativeFlyingMoveActionNegativeFOVMin; // 0x0288 (Size: 0x4, Type: FloatProperty)
    float NativeFlyingMoveActionNegativeFOVMax; // 0x028C (Size: 0x4, Type: FloatProperty)
    float NativeDefaultFOVInterpSpeed; // 0x0290 (Size: 0x4, Type: FloatProperty)
    float NativePositiveFOVMax; // 0x0294 (Size: 0x4, Type: FloatProperty)
    float NativeLocationOffsetForPositiveFOVMax; // 0x0298 (Size: 0x4, Type: FloatProperty)
    float NativeNegativeFOVMax; // 0x029C (Size: 0x4, Type: FloatProperty)
    float NativeLocationOffsetForNegativeFOVMax; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    float NativeClampedDeltaFOVInterpSpeed; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    float NativeShortTimeSinceLastBoostStart; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float NativeLongTimeSinceLastBoostStart; // 0x02AC (Size: 0x4, Type: FloatProperty)
    float NativeLongOrShortBoostTimeInterpSpeed; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float NativeMediumBoostTimeInterpSpeed; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    float NativeForwardLocationOffsetTargetMax; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    float NativeForwardLocationOffsetFromDownZVelocityInterpSpeed; // 0x02BC (Size: 0x4, Type: FloatProperty)
    float NativeDodgeStartDuration; // 0x02C0 (Size: 0x4, Type: FloatProperty)
    float NativeStrafeFOVOffsetMin; // 0x02C4 (Size: 0x4, Type: FloatProperty)
    float NativeStrafeFOVOffsetMax; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    float NativeStrafeFOVMultiplierMin; // 0x02CC (Size: 0x4, Type: FloatProperty)
    float NativeStrafeFOVMultiplierMax; // 0x02D0 (Size: 0x4, Type: FloatProperty)
    float NativeViewLocationOffsetRightInterpSpeedCrashing; // 0x02D4 (Size: 0x4, Type: FloatProperty)
    float NativeDodgeStartDurationForInterpSpeed; // 0x02D8 (Size: 0x4, Type: FloatProperty)
    float NativeViewLocationOffsetRightInterpSpeedStartingDodge; // 0x02DC (Size: 0x4, Type: FloatProperty)
    float NativeViewLocationOffsetRightInterpSpeedMostlyStrafing; // 0x02E0 (Size: 0x4, Type: FloatProperty)
    float NativeViewLocationOffsetRightInterpSpeedMostlyTurning; // 0x02E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseNativeCalculation; // 0x02E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingPawnClass) == 128, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingPawnClass");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingSpeedBase) == 152, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingSpeedBase");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingSpeedAddedAtMaxDistanceFromCeilingHeight) == 200, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingSpeedAddedAtMaxDistanceFromCeilingHeight");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingDownZSpeedAddedWhileFalling) == 248, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingDownZSpeedAddedWhileFalling");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingHeightDecayMin) == 296, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingHeightDecayMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativePreCrashWindupDuration) == 344, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativePreCrashWindupDuration");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingInputWeightHorizontal) == 392, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingInputWeightHorizontal");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingInputWeightLookDirection) == 440, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingInputWeightLookDirection");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeDeltaFOVForwardOffsetExponent) == 484, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeDeltaFOVForwardOffsetExponent");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFOVModeSwapInterpRate) == 488, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFOVModeSwapInterpRate");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeMaxFOVOffset) == 492, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeMaxFOVOffset");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeRotationRateForMaxRightOffset) == 496, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeRotationRateForMaxRightOffset");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeRightOffsetMaxCombinedStrafeTurn) == 500, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeRightOffsetMaxCombinedStrafeTurn");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeRightOffsetStrafe) == 504, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeRightOffsetStrafe");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeRightOffsetTurn) == 508, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeRightOffsetTurn");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeRightOffsetDodge) == 512, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeRightOffsetDodge");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeForwardOffsetDistanceCrashingFinal) == 516, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeForwardOffsetDistanceCrashingFinal");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeForwardOffsetDistanceForceCrashingPhase1) == 520, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeForwardOffsetDistanceForceCrashingPhase1");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeForwardOffsetDistanceCrashingPhase1) == 524, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeForwardOffsetDistanceCrashingPhase1");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeForwardOffsetDistanceCrashingPhase2) == 528, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeForwardOffsetDistanceCrashingPhase2");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeForwardOffsetCrashingTimeAfterWindupToEnterFinalPhase) == 532, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeForwardOffsetCrashingTimeAfterWindupToEnterFinalPhase");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeForwardOffsetInterpSpeedCrashingPhase1) == 536, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeForwardOffsetInterpSpeedCrashingPhase1");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeForwardOffsetInterpSpeedCrashingPhase2) == 540, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeForwardOffsetInterpSpeedCrashingPhase2");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeForwardOffsetInterpSpeedCrashingFinal) == 544, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeForwardOffsetInterpSpeedCrashingFinal");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeTagForceCrash) == 548, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeTagForceCrash");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFOVInterpSpeed) == 552, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeMinFOVOffsetFast) == 556, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeMinFOVOffsetFast");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeMinFOVOffsetSlow) == 560, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeMinFOVOffsetSlow");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeMaxFOVOffsetSlow) == 564, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeMaxFOVOffsetSlow");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeLateBoostStartTime) == 568, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeLateBoostStartTime");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeTimeSinceLastBoostLateMin) == 572, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeTimeSinceLastBoostLateMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeTimeSinceLastBoostLateMax) == 576, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeTimeSinceLastBoostLateMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFOVOffsetLateMin) == 580, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFOVOffsetLateMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFOVOffsetLateMax) == 584, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFOVOffsetLateMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeTimeSinceEarlyBoostLateMin) == 588, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeTimeSinceEarlyBoostLateMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeTimeSinceLastBoostEarlyMax) == 592, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeTimeSinceLastBoostEarlyMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFOVOffsetEarlyMin) == 596, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFOVOffsetEarlyMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFOVOffsetEarlyMax) == 600, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFOVOffsetEarlyMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFOVOffsetModeMin) == 604, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFOVOffsetModeMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeCrashingFOVInterpSpeed) == 608, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeCrashingFOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFOVOffsetWindup) == 612, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFOVOffsetWindup");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativePositiveFlyingMoveActionXFOVInterpSpeed) == 616, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativePositiveFlyingMoveActionXFOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeNegativeFlyingMoveActionXFOVInterpSpeed) == 620, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeNegativeFlyingMoveActionXFOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingMoveActionPositiveMin) == 624, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingMoveActionPositiveMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingMoveActionPositiveMax) == 628, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingMoveActionPositiveMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingMoveActionPositiveFOVMin) == 632, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingMoveActionPositiveFOVMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingMoveActionPositiveFOVMax) == 636, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingMoveActionPositiveFOVMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingMoveActionNegativeMin) == 640, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingMoveActionNegativeMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingMoveActionNegativeMax) == 644, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingMoveActionNegativeMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingMoveActionNegativeFOVMin) == 648, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingMoveActionNegativeFOVMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeFlyingMoveActionNegativeFOVMax) == 652, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeFlyingMoveActionNegativeFOVMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeDefaultFOVInterpSpeed) == 656, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeDefaultFOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativePositiveFOVMax) == 660, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativePositiveFOVMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeLocationOffsetForPositiveFOVMax) == 664, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeLocationOffsetForPositiveFOVMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeNegativeFOVMax) == 668, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeNegativeFOVMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeLocationOffsetForNegativeFOVMax) == 672, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeLocationOffsetForNegativeFOVMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeClampedDeltaFOVInterpSpeed) == 676, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeClampedDeltaFOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeShortTimeSinceLastBoostStart) == 680, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeShortTimeSinceLastBoostStart");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeLongTimeSinceLastBoostStart) == 684, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeLongTimeSinceLastBoostStart");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeLongOrShortBoostTimeInterpSpeed) == 688, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeLongOrShortBoostTimeInterpSpeed");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeMediumBoostTimeInterpSpeed) == 692, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeMediumBoostTimeInterpSpeed");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeForwardLocationOffsetTargetMax) == 696, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeForwardLocationOffsetTargetMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeForwardLocationOffsetFromDownZVelocityInterpSpeed) == 700, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeForwardLocationOffsetFromDownZVelocityInterpSpeed");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeDodgeStartDuration) == 704, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeDodgeStartDuration");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeStrafeFOVOffsetMin) == 708, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeStrafeFOVOffsetMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeStrafeFOVOffsetMax) == 712, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeStrafeFOVOffsetMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeStrafeFOVMultiplierMin) == 716, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeStrafeFOVMultiplierMin");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeStrafeFOVMultiplierMax) == 720, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeStrafeFOVMultiplierMax");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeViewLocationOffsetRightInterpSpeedCrashing) == 724, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeViewLocationOffsetRightInterpSpeedCrashing");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeDodgeStartDurationForInterpSpeed) == 728, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeDodgeStartDurationForInterpSpeed");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeViewLocationOffsetRightInterpSpeedStartingDodge) == 732, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeViewLocationOffsetRightInterpSpeedStartingDodge");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeViewLocationOffsetRightInterpSpeedMostlyStrafing) == 736, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeViewLocationOffsetRightInterpSpeedMostlyStrafing");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, NativeViewLocationOffsetRightInterpSpeedMostlyTurning) == 740, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::NativeViewLocationOffsetRightInterpSpeedMostlyTurning");
static_assert(offsetof(UFortCameraModifier_SunroseWingsFlying, bUseNativeCalculation) == 744, "Offset mismatch for UFortCameraModifier_SunroseWingsFlying::bUseNativeCalculation");

// /Script/SunRoseFlyingRuntime.FortContextualTutorialDefinition_WingedFlying
// Kind: Class; super: UFortContextualTutorialDefinition_GameplayEvent
class UFortContextualTutorialDefinition_WingedFlying
{
public:
    std::uint8_t Pad_0000[0x198]; // 0x0000
    std::uint8_t MinTimeBeforeCompletion[0x1]; // 0x0198 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortContextualTutorialDefinition_WingedFlying, MinTimeBeforeCompletion) == 408, "Offset mismatch for UFortContextualTutorialDefinition_WingedFlying::MinTimeBeforeCompletion");

// /Script/SunRoseFlyingRuntime.FortContextualTutorial_WingedFlying
// Kind: Class; super: FortContextualTutorial_GameplayEvent
class UFortContextualTutorial_WingedFlying
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> WeakMarkerActor; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MarkerText[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    TWeakObjectPtr<void> MarkerHighlightComponent; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* TutorialDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    void* OwnerController; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContextualTutorial_WingedFlying, WeakMarkerActor) == 168, "Offset mismatch for UFortContextualTutorial_WingedFlying::WeakMarkerActor");
static_assert(offsetof(UFortContextualTutorial_WingedFlying, MarkerText) == 176, "Offset mismatch for UFortContextualTutorial_WingedFlying::MarkerText");
static_assert(offsetof(UFortContextualTutorial_WingedFlying, MarkerHighlightComponent) == 192, "Offset mismatch for UFortContextualTutorial_WingedFlying::MarkerHighlightComponent");
static_assert(offsetof(UFortContextualTutorial_WingedFlying, TutorialDefinition) == 200, "Offset mismatch for UFortContextualTutorial_WingedFlying::TutorialDefinition");
static_assert(offsetof(UFortContextualTutorial_WingedFlying, OwnerController) == 216, "Offset mismatch for UFortContextualTutorial_WingedFlying::OwnerController");

// /Script/SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_SunroseWingsCrashBase
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    float TelegraphUpdateIntervalSeconds; // 0x0B20 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0B24
    TArray<void*> TelegraphCollisionObjectTypes; // 0x0B28 (Size: 0x10, Type: ArrayProperty)
    float TelegraphInterpSpeed; // 0x0B38 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x2C]; // 0x0B3C
    float CrashWindupDuration; // 0x0B68 (Size: 0x4, Type: FloatProperty)
    float CrashLookPitchMin; // 0x0B6C (Size: 0x4, Type: FloatProperty)
    float CrashLookPitchMax; // 0x0B70 (Size: 0x4, Type: FloatProperty)
    float TelegraphTraceStartDist; // 0x0B74 (Size: 0x4, Type: FloatProperty)
    float TelegraphTraceEndDist; // 0x0B78 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0B7C
    void* TelegraphActorClass; // 0x0B80 (Size: 0x8, Type: ClassProperty)
    void* TelegraphActor; // 0x0B88 (Size: 0x8, Type: ObjectProperty)
    void* TelegraphFXSystemAsset; // 0x0B90 (Size: 0x8, Type: ObjectProperty)
    void* TelegraphNS; // 0x0B98 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, TelegraphUpdateIntervalSeconds) == 2848, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::TelegraphUpdateIntervalSeconds");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, TelegraphCollisionObjectTypes) == 2856, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::TelegraphCollisionObjectTypes");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, TelegraphInterpSpeed) == 2872, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::TelegraphInterpSpeed");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, CrashWindupDuration) == 2920, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::CrashWindupDuration");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, CrashLookPitchMin) == 2924, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::CrashLookPitchMin");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, CrashLookPitchMax) == 2928, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::CrashLookPitchMax");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, TelegraphTraceStartDist) == 2932, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::TelegraphTraceStartDist");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, TelegraphTraceEndDist) == 2936, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::TelegraphTraceEndDist");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, TelegraphActorClass) == 2944, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::TelegraphActorClass");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, TelegraphActor) == 2952, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::TelegraphActor");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, TelegraphFXSystemAsset) == 2960, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::TelegraphFXSystemAsset");
static_assert(offsetof(UFortGameplayAbility_SunroseWingsCrashBase, TelegraphNS) == 2968, "Offset mismatch for UFortGameplayAbility_SunroseWingsCrashBase::TelegraphNS");

// /Script/SunRoseFlyingRuntime.FortGameplayCueNotifyLoop_WingsSkimming
// Kind: Class; super: FortGameplayCueNotify_Loop
class UFortGameplayCueNotifyLoop_WingsSkimming
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    TWeakObjectPtr<void> WingsSkeletalMesh; // 0x0C48 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SkimFX; // 0x0C50 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SkimAudioComponent; // 0x0C58 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SkimLoopSound; // 0x0C60 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortGameplayCueNotifyLoop_WingsSkimming, WingsSkeletalMesh) == 3144, "Offset mismatch for UFortGameplayCueNotifyLoop_WingsSkimming::WingsSkeletalMesh");
static_assert(offsetof(UFortGameplayCueNotifyLoop_WingsSkimming, SkimFX) == 3152, "Offset mismatch for UFortGameplayCueNotifyLoop_WingsSkimming::SkimFX");
static_assert(offsetof(UFortGameplayCueNotifyLoop_WingsSkimming, SkimAudioComponent) == 3160, "Offset mismatch for UFortGameplayCueNotifyLoop_WingsSkimming::SkimAudioComponent");
static_assert(offsetof(UFortGameplayCueNotifyLoop_WingsSkimming, SkimLoopSound) == 3168, "Offset mismatch for UFortGameplayCueNotifyLoop_WingsSkimming::SkimLoopSound");

// /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged
// Kind: Class; super: FortMovementMode_ExtLogicFlying
class UFortMovementMode_ExtLogicFlyingWinged
{
public:
    std::uint8_t Pad_0000[0x1D0]; // 0x0000
    std::uint8_t TagQueryToFly[0x48]; // 0x01D0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUseNativeUpdateForMovement; // 0x0218 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0219
    TArray<void*> FlyingStatusConfigs; // 0x0220 (Size: 0x10, Type: ArrayProperty)
    void* FlyingThroughCeilingGE; // 0x0230 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FlyingThroughCeilingTag[0x4]; // 0x0238 (Size: 0x4, Type: StructProperty)
    std::uint8_t EnergyDrainCueTag[0x4]; // 0x023C (Size: 0x4, Type: StructProperty)
    std::uint8_t CrashEnabledCueTag[0x4]; // 0x0240 (Size: 0x4, Type: StructProperty)
    std::uint8_t HitBonkCueTag[0x4]; // 0x0244 (Size: 0x4, Type: StructProperty)
    std::uint8_t EventTagToTriggerWhenMiniBoosting[0x4]; // 0x0248 (Size: 0x4, Type: StructProperty)
    std::uint8_t EventTagToTriggerCrashImpact[0x4]; // 0x024C (Size: 0x4, Type: StructProperty)
    std::uint8_t TagsToPreventLowFrictionLanding[0x20]; // 0x0250 (Size: 0x20, Type: StructProperty)
    void* LowFrictionLandingGE; // 0x0270 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TagToSetByCallerDuration[0x8]; // 0x0278 (Size: 0x8, Type: StructProperty)
    std::uint8_t BaseFlyingCost[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::int32_t FlyingStatusToStopBaseCost; // 0x02A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x02AC
    std::uint8_t ExtraLeapCrashCost[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightIncreasePer1Cost[0x28]; // 0x02D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeSpeedMin[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeSpeedMax[0x28]; // 0x0328 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeSpeedDecayInitialDelay[0x28]; // 0x0350 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeSpeedRampExponent[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeSpeedDecayExponent[0x28]; // 0x03A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeDuration[0x28]; // 0x03C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartedFlyingTransitionDuration[0x28]; // 0x03F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartedFlyingSpeedBoundForInterpMin[0x28]; // 0x0418 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartedFlyingSpeedBoundForInterpMax[0x28]; // 0x0440 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartedFlyingVelocityInterpSpeedAtMinSpeed[0x28]; // 0x0468 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartedFlyingVelocityInterpSpeedAtMaxSpeed[0x28]; // 0x0490 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingLookPitchClampMin[0x28]; // 0x04B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingLookPitchClampMax[0x28]; // 0x04E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultLookPitchAngleOffset[0x28]; // 0x0508 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingLookPitchClampMin[0x28]; // 0x0530 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingLookPitchClampMax[0x28]; // 0x0558 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingInputWeightLookDirection[0x28]; // 0x0580 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingInputWeightLockDirection[0x28]; // 0x05A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingInputWeightHorizontal[0x28]; // 0x05D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchInterpSpeedWhileCrashing[0x28]; // 0x05F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchInterpSpeedAtBaseSpeed[0x28]; // 0x0620 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchInterpSpeedAtMaxLateralSpeed[0x28]; // 0x0648 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchInterpSpeedAtMaxTotalSpeed[0x28]; // 0x0670 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawInterpSpeedWhileCrashing[0x28]; // 0x0698 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawInterpSpeedAtMinBrakeSpeed[0x28]; // 0x06C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawInterpSpeedAtBaseSpeed[0x28]; // 0x06E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawInterpSpeedAtMaxLateralSpeed[0x28]; // 0x0710 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputInterpSpeedHorizontal[0x28]; // 0x0738 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingMovementInterpSpeed[0x28]; // 0x0760 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendingLookPitchClampMin[0x28]; // 0x0788 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileAscendingMin[0x28]; // 0x07B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileAscendingMax[0x28]; // 0x07D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxCeilingHeightAddLimitFromAscend[0x28]; // 0x0800 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendingSpeedZUpAddedMin[0x28]; // 0x0828 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendingSpeedZUpAddedMax[0x28]; // 0x0850 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxCeilingHeightAddLimitFromBoost[0x28]; // 0x0878 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileBoostingMin[0x28]; // 0x08A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileBoostingMax[0x28]; // 0x08C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PercentMaxLookPitchForMaxBoostCeilingHeightIncrease[0x28]; // 0x08F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PreCrashWindUpDuration[0x28]; // 0x0918 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingSpeedBase[0x28]; // 0x0940 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingSpeedAddedAtMaxDistanceFromCeilingHeight[0x28]; // 0x0968 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceFromCeilingHeightForMaxCrashingSpeedAdded[0x28]; // 0x0990 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingLookPitchClampFinalMax[0x28]; // 0x09B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingLookPitchClampDelayBeforeLerpToFinalMax[0x28]; // 0x09E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingLookPitchClampDurationToLerpToFinalMax[0x28]; // 0x0A08 (Size: 0x28, Type: StructProperty)
    std::uint8_t PreCrashingSpeedBase[0x28]; // 0x0A30 (Size: 0x28, Type: StructProperty)
    std::uint8_t PreCrashingInterpToSpeedMod[0x28]; // 0x0A58 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceFromCeilingHeightForCrashMode[0x28]; // 0x0A80 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinAngleToPreventCrash[0x28]; // 0x0AA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashImpactIgnoreWaterDuration[0x28]; // 0x0AD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAngleForLowFrictionLanding[0x28]; // 0x0AF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionDurationMin[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionDurationMax[0x28]; // 0x0B48 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionDurationScalar[0x28]; // 0x0B70 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedForMinLowFrictionMult[0x28]; // 0x0B98 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedForMaxLowFrictionMult[0x28]; // 0x0BC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionMultFromSpeedMin[0x28]; // 0x0BE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionMultFromSpeedMax[0x28]; // 0x0C10 (Size: 0x28, Type: StructProperty)
    std::uint8_t ImpactAngleForMaxLowFrictionDuration[0x28]; // 0x0C38 (Size: 0x28, Type: StructProperty)
    std::uint8_t ImpactAngleForMinLowFrictionDuration[0x28]; // 0x0C60 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionMultFromImpactAngleMax[0x28]; // 0x0C88 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionMultFromImpactAngleMin[0x28]; // 0x0CB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingSpeedBase[0x28]; // 0x0CD8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingSpeedAddedAtMaxDistanceFromCeilingHeight[0x28]; // 0x0D00 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingDownZSpeedAddedWhileFalling[0x28]; // 0x0D28 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceFromCeilingHeightForMaxFlyingSpeedAdded[0x28]; // 0x0D50 (Size: 0x28, Type: StructProperty)
    std::uint8_t AirBrakingDefaultMultiMin[0x28]; // 0x0D78 (Size: 0x28, Type: StructProperty)
    std::uint8_t AirBrakingDownSpeedMultiMin[0x28]; // 0x0DA0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardInputThresholdToTriggerMiniBoost[0x28]; // 0x0DC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput[0x28]; // 0x0DF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileHoldingForwardMin[0x28]; // 0x0E18 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileHoldingForwardMax[0x28]; // 0x0E40 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight[0x28]; // 0x0E68 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightMinDecreaseSpeedWhileFlying[0x28]; // 0x0E90 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightMinDecreaseSpeedWhileBoosting[0x28]; // 0x0EB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight[0x28]; // 0x0EE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightMinDecreaseSpeedWhileAscending[0x28]; // 0x0F08 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight[0x28]; // 0x0F30 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightAboveWorldInterpSpeedIncreasing[0x28]; // 0x0F58 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightAboveWorldInterpSpeedDecreasing[0x28]; // 0x0F80 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightForMinAddedCeilingDecay[0x28]; // 0x0FA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightForMaxAddedCeilingDecay[0x28]; // 0x0FD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAddedCeilingDecayFromHeight[0x28]; // 0x0FF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnergyThresholdForAddedCeilingDecay[0x28]; // 0x1020 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAddedCeilingDecayFromEnergy[0x28]; // 0x1048 (Size: 0x28, Type: StructProperty)
    std::uint8_t GlobalCeilingHeightMax[0x28]; // 0x1070 (Size: 0x28, Type: StructProperty)
    std::uint8_t GlobalCeilingHeightDiminishingReturnsExponent[0x28]; // 0x1098 (Size: 0x28, Type: StructProperty)
    std::uint8_t GlobalCeilingHeightDiminishingReturnsRange[0x28]; // 0x10C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkimmingMinRequiredAngleToSurface[0x28]; // 0x10E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkimmingMinRequiredVelocityAlongSurface[0x28]; // 0x1110 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkimmingMinRequiredHeightAboveWorld[0x28]; // 0x1138 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAngleForGroundHit[0x28]; // 0x1160 (Size: 0x28, Type: StructProperty)
    std::uint8_t VelocityClampOnBonk[0x1]; // 0x1188 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, TagQueryToFly) == 464, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::TagQueryToFly");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, bUseNativeUpdateForMovement) == 536, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::bUseNativeUpdateForMovement");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingStatusConfigs) == 544, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingStatusConfigs");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingThroughCeilingGE) == 560, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingThroughCeilingGE");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingThroughCeilingTag) == 568, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingThroughCeilingTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, EnergyDrainCueTag) == 572, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::EnergyDrainCueTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashEnabledCueTag) == 576, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashEnabledCueTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, HitBonkCueTag) == 580, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::HitBonkCueTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, EventTagToTriggerWhenMiniBoosting) == 584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::EventTagToTriggerWhenMiniBoosting");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, EventTagToTriggerCrashImpact) == 588, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::EventTagToTriggerCrashImpact");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, TagsToPreventLowFrictionLanding) == 592, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::TagsToPreventLowFrictionLanding");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, LowFrictionLandingGE) == 624, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::LowFrictionLandingGE");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, TagToSetByCallerDuration) == 632, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::TagToSetByCallerDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, BaseFlyingCost) == 640, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::BaseFlyingCost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingStatusToStopBaseCost) == 680, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingStatusToStopBaseCost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, ExtraLeapCrashCost) == 688, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::ExtraLeapCrashCost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, HeightIncreasePer1Cost) == 728, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::HeightIncreasePer1Cost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, DodgeSpeedMin) == 768, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::DodgeSpeedMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, DodgeSpeedMax) == 808, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::DodgeSpeedMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, DodgeSpeedDecayInitialDelay) == 848, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::DodgeSpeedDecayInitialDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, DodgeSpeedRampExponent) == 888, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::DodgeSpeedRampExponent");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, DodgeSpeedDecayExponent) == 928, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::DodgeSpeedDecayExponent");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, DodgeDuration) == 968, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::DodgeDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, StartedFlyingTransitionDuration) == 1008, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::StartedFlyingTransitionDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, StartedFlyingSpeedBoundForInterpMin) == 1048, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::StartedFlyingSpeedBoundForInterpMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, StartedFlyingSpeedBoundForInterpMax) == 1088, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::StartedFlyingSpeedBoundForInterpMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, StartedFlyingVelocityInterpSpeedAtMinSpeed) == 1128, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::StartedFlyingVelocityInterpSpeedAtMinSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, StartedFlyingVelocityInterpSpeedAtMaxSpeed) == 1168, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::StartedFlyingVelocityInterpSpeedAtMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingLookPitchClampMin) == 1208, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingLookPitchClampMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingLookPitchClampMax) == 1248, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingLookPitchClampMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, DefaultLookPitchAngleOffset) == 1288, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::DefaultLookPitchAngleOffset");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashingLookPitchClampMin) == 1328, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashingLookPitchClampMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashingLookPitchClampMax) == 1368, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashingLookPitchClampMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashingInputWeightLookDirection) == 1408, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashingInputWeightLookDirection");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingInputWeightLockDirection) == 1448, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingInputWeightLockDirection");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingInputWeightHorizontal) == 1488, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingInputWeightHorizontal");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, PitchInterpSpeedWhileCrashing) == 1528, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::PitchInterpSpeedWhileCrashing");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, PitchInterpSpeedAtBaseSpeed) == 1568, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::PitchInterpSpeedAtBaseSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, PitchInterpSpeedAtMaxLateralSpeed) == 1608, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::PitchInterpSpeedAtMaxLateralSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, PitchInterpSpeedAtMaxTotalSpeed) == 1648, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::PitchInterpSpeedAtMaxTotalSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, YawInterpSpeedWhileCrashing) == 1688, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::YawInterpSpeedWhileCrashing");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, YawInterpSpeedAtMinBrakeSpeed) == 1728, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::YawInterpSpeedAtMinBrakeSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, YawInterpSpeedAtBaseSpeed) == 1768, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::YawInterpSpeedAtBaseSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, YawInterpSpeedAtMaxLateralSpeed) == 1808, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::YawInterpSpeedAtMaxLateralSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, InputInterpSpeedHorizontal) == 1848, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::InputInterpSpeedHorizontal");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashingMovementInterpSpeed) == 1888, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashingMovementInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, AscendingLookPitchClampMin) == 1928, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::AscendingLookPitchClampMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightIncreaseSpeedWhileAscendingMin) == 1968, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightIncreaseSpeedWhileAscendingMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightIncreaseSpeedWhileAscendingMax) == 2008, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightIncreaseSpeedWhileAscendingMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, MaxCeilingHeightAddLimitFromAscend) == 2048, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::MaxCeilingHeightAddLimitFromAscend");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, AscendingSpeedZUpAddedMin) == 2088, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::AscendingSpeedZUpAddedMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, AscendingSpeedZUpAddedMax) == 2128, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::AscendingSpeedZUpAddedMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, MaxCeilingHeightAddLimitFromBoost) == 2168, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::MaxCeilingHeightAddLimitFromBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightIncreaseSpeedWhileBoostingMin) == 2208, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightIncreaseSpeedWhileBoostingMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightIncreaseSpeedWhileBoostingMax) == 2248, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightIncreaseSpeedWhileBoostingMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, PercentMaxLookPitchForMaxBoostCeilingHeightIncrease) == 2288, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::PercentMaxLookPitchForMaxBoostCeilingHeightIncrease");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, PreCrashWindUpDuration) == 2328, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::PreCrashWindUpDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashingSpeedBase) == 2368, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashingSpeedBase");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashingSpeedAddedAtMaxDistanceFromCeilingHeight) == 2408, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashingSpeedAddedAtMaxDistanceFromCeilingHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, DistanceFromCeilingHeightForMaxCrashingSpeedAdded) == 2448, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::DistanceFromCeilingHeightForMaxCrashingSpeedAdded");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashingLookPitchClampFinalMax) == 2488, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashingLookPitchClampFinalMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashingLookPitchClampDelayBeforeLerpToFinalMax) == 2528, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashingLookPitchClampDelayBeforeLerpToFinalMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashingLookPitchClampDurationToLerpToFinalMax) == 2568, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashingLookPitchClampDurationToLerpToFinalMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, PreCrashingSpeedBase) == 2608, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::PreCrashingSpeedBase");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, PreCrashingInterpToSpeedMod) == 2648, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::PreCrashingInterpToSpeedMod");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, DistanceFromCeilingHeightForCrashMode) == 2688, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::DistanceFromCeilingHeightForCrashMode");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, MinAngleToPreventCrash) == 2728, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::MinAngleToPreventCrash");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CrashImpactIgnoreWaterDuration) == 2768, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CrashImpactIgnoreWaterDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, MaxAngleForLowFrictionLanding) == 2808, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::MaxAngleForLowFrictionLanding");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, LowFrictionDurationMin) == 2848, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::LowFrictionDurationMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, LowFrictionDurationMax) == 2888, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::LowFrictionDurationMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, LowFrictionDurationScalar) == 2928, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::LowFrictionDurationScalar");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, SpeedForMinLowFrictionMult) == 2968, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::SpeedForMinLowFrictionMult");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, SpeedForMaxLowFrictionMult) == 3008, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::SpeedForMaxLowFrictionMult");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, LowFrictionMultFromSpeedMin) == 3048, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::LowFrictionMultFromSpeedMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, LowFrictionMultFromSpeedMax) == 3088, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::LowFrictionMultFromSpeedMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, ImpactAngleForMaxLowFrictionDuration) == 3128, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::ImpactAngleForMaxLowFrictionDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, ImpactAngleForMinLowFrictionDuration) == 3168, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::ImpactAngleForMinLowFrictionDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, LowFrictionMultFromImpactAngleMax) == 3208, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::LowFrictionMultFromImpactAngleMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, LowFrictionMultFromImpactAngleMin) == 3248, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::LowFrictionMultFromImpactAngleMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingSpeedBase) == 3288, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingSpeedBase");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingSpeedAddedAtMaxDistanceFromCeilingHeight) == 3328, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingSpeedAddedAtMaxDistanceFromCeilingHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, FlyingDownZSpeedAddedWhileFalling) == 3368, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::FlyingDownZSpeedAddedWhileFalling");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, DistanceFromCeilingHeightForMaxFlyingSpeedAdded) == 3408, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::DistanceFromCeilingHeightForMaxFlyingSpeedAdded");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, AirBrakingDefaultMultiMin) == 3448, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::AirBrakingDefaultMultiMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, AirBrakingDownSpeedMultiMin) == 3488, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::AirBrakingDownSpeedMultiMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, ForwardInputThresholdToTriggerMiniBoost) == 3528, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::ForwardInputThresholdToTriggerMiniBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput) == 3568, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightIncreaseSpeedWhileHoldingForwardMin) == 3608, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightIncreaseSpeedWhileHoldingForwardMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightIncreaseSpeedWhileHoldingForwardMax) == 3648, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightIncreaseSpeedWhileHoldingForwardMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight) == 3688, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightMinDecreaseSpeedWhileFlying) == 3728, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightMinDecreaseSpeedWhileFlying");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightMinDecreaseSpeedWhileBoosting) == 3768, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightMinDecreaseSpeedWhileBoosting");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight) == 3808, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightMinDecreaseSpeedWhileAscending) == 3848, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightMinDecreaseSpeedWhileAscending");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight) == 3888, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, HeightAboveWorldInterpSpeedIncreasing) == 3928, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::HeightAboveWorldInterpSpeedIncreasing");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, HeightAboveWorldInterpSpeedDecreasing) == 3968, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::HeightAboveWorldInterpSpeedDecreasing");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, HeightForMinAddedCeilingDecay) == 4008, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::HeightForMinAddedCeilingDecay");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, HeightForMaxAddedCeilingDecay) == 4048, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::HeightForMaxAddedCeilingDecay");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, MaxAddedCeilingDecayFromHeight) == 4088, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::MaxAddedCeilingDecayFromHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, EnergyThresholdForAddedCeilingDecay) == 4128, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::EnergyThresholdForAddedCeilingDecay");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, MaxAddedCeilingDecayFromEnergy) == 4168, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::MaxAddedCeilingDecayFromEnergy");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, GlobalCeilingHeightMax) == 4208, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::GlobalCeilingHeightMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, GlobalCeilingHeightDiminishingReturnsExponent) == 4248, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::GlobalCeilingHeightDiminishingReturnsExponent");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, GlobalCeilingHeightDiminishingReturnsRange) == 4288, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::GlobalCeilingHeightDiminishingReturnsRange");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, SkimmingMinRequiredAngleToSurface) == 4328, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::SkimmingMinRequiredAngleToSurface");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, SkimmingMinRequiredVelocityAlongSurface) == 4368, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::SkimmingMinRequiredVelocityAlongSurface");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, SkimmingMinRequiredHeightAboveWorld) == 4408, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::SkimmingMinRequiredHeightAboveWorld");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, MaxAngleForGroundHit) == 4448, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::MaxAngleForGroundHit");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingWinged, VelocityClampOnBonk) == 4488, "Offset mismatch for UFortMovementMode_ExtLogicFlyingWinged::VelocityClampOnBonk");

// /Script/SunRoseFlyingRuntime.FortMovementMode_SunRoseGuidedMotionLeap
// Kind: Class; super: FortMovementMode_ExtGuidedMotion
class UFortMovementMode_SunRoseGuidedMotionLeap
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

static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, GuideMode) == 440, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::GuideMode");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, Priority) == 444, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::Priority");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bSetNewMovementMode) == 448, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bSetNewMovementMode");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bSetFallingOnLift) == 449, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bSetFallingOnLift");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, MovementModeToSetOnStart) == 450, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::MovementModeToSetOnStart");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bRestoreOldMovementModeOnDeactivate) == 451, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bRestoreOldMovementModeOnDeactivate");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, DurationType) == 452, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::DurationType");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, MaxDuration) == 456, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::MaxDuration");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, VerifyMaxDurationOverride) == 500, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::VerifyMaxDurationOverride");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, VerifyWorldCeilingHeightOverride) == 508, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::VerifyWorldCeilingHeightOverride");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, PathOffsetCurve) == 520, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::PathOffsetCurve");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, TimeMappingCurve) == 528, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::TimeMappingCurve");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bIsAdditive) == 536, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bIsAdditive");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bSmoothOutTransitionToFinish) == 537, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bSmoothOutTransitionToFinish");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, FinishVelocityMode) == 538, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::FinishVelocityMode");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, FinishVelocityToSet) == 544, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::FinishVelocityToSet");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, FinishVelocityToClamp) == 568, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::FinishVelocityToClamp");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bEndOnLaunchCharacter) == 612, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bEndOnLaunchCharacter");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, OptionalBoolConfiguration) == 616, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::OptionalBoolConfiguration");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, OptionalFloatConfiguration) == 632, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::OptionalFloatConfiguration");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, CalculateFinishVelocityConfig) == 648, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::CalculateFinishVelocityConfig");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, MovementDelta) == 888, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::MovementDelta");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, MaxSpeed) == 912, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::MaxSpeed");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, TargetLerpSpeedHorizontalCurve) == 960, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::TargetLerpSpeedHorizontalCurve");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, TargetLerpSpeedVerticalCurve) == 968, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::TargetLerpSpeedVerticalCurve");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, TargetOffsetType) == 976, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::TargetOffsetType");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, TargetOffsetX) == 984, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::TargetOffsetX");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, TargetOffsetY) == 1032, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::TargetOffsetY");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, TargetOffsetZ) == 1080, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::TargetOffsetZ");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, DefaultTargetLerpSpeedHorizontal) == 1124, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::DefaultTargetLerpSpeedHorizontal");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, DefaultTargetLerpSpeedVerticle) == 1128, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::DefaultTargetLerpSpeedVerticle");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bRestrictSpeedToExpected) == 1132, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bRestrictSpeedToExpected");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, MoveToTargetErrorAllowance) == 1136, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::MoveToTargetErrorAllowance");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, MaxMoveToTargetDistance) == 1144, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::MaxMoveToTargetDistance");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, MaxMoveToTargetDistanceTraveled) == 1192, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::MaxMoveToTargetDistanceTraveled");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, MaxMoveToInvalidTargetDistance) == 1240, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::MaxMoveToInvalidTargetDistance");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, Strength) == 1288, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::Strength");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, StrengthOverTime) == 1336, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::StrengthOverTime");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bUseAveragesForStrengthOverTime) == 1344, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bUseAveragesForStrengthOverTime");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, Direction) == 1352, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::Direction");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bEnableGravity) == 1376, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bEnableGravity");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bEnforceHeightAboveGround) == 1377, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bEnforceHeightAboveGround");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, HeightAboveGround) == 1384, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::HeightAboveGround");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, MaxHeightCorrectionSpeedMultiplier) == 1428, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::MaxHeightCorrectionSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_SunRoseGuidedMotionLeap, bUseNewBPAdjustRootMotionVelocity) == 1433, "Offset mismatch for UFortMovementMode_SunRoseGuidedMotionLeap::bUseNewBPAdjustRootMotionVelocity");

// /Script/SunRoseFlyingRuntime.FortMovementMode_WingedFlyingRuntimeData
// Kind: Class; super: FortMovementMode_FlyingRuntimeData
class UFortMovementMode_WingedFlyingRuntimeData
{
public:
    std::uint8_t Pad_0000[0x72]; // 0x0000
    std::uint8_t FlyingStatus; // 0x0072 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0073
    float CurrentHeightAboveWorld; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float InterpolatedHeightAboveWorld; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float SpeedMultiplierFromForwardInput; // 0x007C (Size: 0x4, Type: FloatProperty)
    float InterpolatedYInput; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0084
    std::uint8_t InterpolatedCrashInput[0x11]; // 0x0088 (Size: 0x11, Type: StructProperty)
    std::uint8_t bIsStartingFlying; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x009A
    float FlyingEnergy; // 0x009C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_WingedFlyingRuntimeData, FlyingStatus) == 114, "Offset mismatch for UFortMovementMode_WingedFlyingRuntimeData::FlyingStatus");
static_assert(offsetof(UFortMovementMode_WingedFlyingRuntimeData, CurrentHeightAboveWorld) == 116, "Offset mismatch for UFortMovementMode_WingedFlyingRuntimeData::CurrentHeightAboveWorld");
static_assert(offsetof(UFortMovementMode_WingedFlyingRuntimeData, InterpolatedHeightAboveWorld) == 120, "Offset mismatch for UFortMovementMode_WingedFlyingRuntimeData::InterpolatedHeightAboveWorld");
static_assert(offsetof(UFortMovementMode_WingedFlyingRuntimeData, SpeedMultiplierFromForwardInput) == 124, "Offset mismatch for UFortMovementMode_WingedFlyingRuntimeData::SpeedMultiplierFromForwardInput");
static_assert(offsetof(UFortMovementMode_WingedFlyingRuntimeData, InterpolatedYInput) == 128, "Offset mismatch for UFortMovementMode_WingedFlyingRuntimeData::InterpolatedYInput");
static_assert(offsetof(UFortMovementMode_WingedFlyingRuntimeData, InterpolatedCrashInput) == 136, "Offset mismatch for UFortMovementMode_WingedFlyingRuntimeData::InterpolatedCrashInput");
static_assert(offsetof(UFortMovementMode_WingedFlyingRuntimeData, bIsStartingFlying) == 153, "Offset mismatch for UFortMovementMode_WingedFlyingRuntimeData::bIsStartingFlying");
static_assert(offsetof(UFortMovementMode_WingedFlyingRuntimeData, FlyingEnergy) == 156, "Offset mismatch for UFortMovementMode_WingedFlyingRuntimeData::FlyingEnergy");

// /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_WingedFlying
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t FlyingStatus; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C9
    float ForwardSpeed; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float AddedDownZVelocity; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentHeightAboveWorld; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float CurrentFlyingEnergy; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIntendsToBoost; // 0x00DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToAscend; // 0x00DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToCrash; // 0x00DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToRollLeft; // 0x00DF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToRollRight; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    void* FlyingMovementModeExtension; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TagsToEnableSkimmingCheck[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SkimCheckTraceChannel; // 0x0110 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0111
    std::uint8_t SkimCheckLeftStartSocket[0x4]; // 0x0114 (Size: 0x4, Type: NameProperty)
    std::uint8_t SkimCheckLeftEndSocket[0x4]; // 0x0118 (Size: 0x4, Type: NameProperty)
    std::uint8_t SkimCheckRightStartSocket[0x4]; // 0x011C (Size: 0x4, Type: NameProperty)
    std::uint8_t SkimCheckRightEndSocket[0x4]; // 0x0120 (Size: 0x4, Type: NameProperty)
    std::uint8_t TagToEnableHeightCheck[0x4]; // 0x0124 (Size: 0x4, Type: StructProperty)
    std::uint8_t HeightCheckInterval[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightCheckTraceLength[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPawnComponent_WingedFlying, FlyingStatus) == 200, "Offset mismatch for UFortPawnComponent_WingedFlying::FlyingStatus");
static_assert(offsetof(UFortPawnComponent_WingedFlying, ForwardSpeed) == 204, "Offset mismatch for UFortPawnComponent_WingedFlying::ForwardSpeed");
static_assert(offsetof(UFortPawnComponent_WingedFlying, AddedDownZVelocity) == 208, "Offset mismatch for UFortPawnComponent_WingedFlying::AddedDownZVelocity");
static_assert(offsetof(UFortPawnComponent_WingedFlying, NativeCurrentHeightAboveWorld) == 212, "Offset mismatch for UFortPawnComponent_WingedFlying::NativeCurrentHeightAboveWorld");
static_assert(offsetof(UFortPawnComponent_WingedFlying, CurrentFlyingEnergy) == 216, "Offset mismatch for UFortPawnComponent_WingedFlying::CurrentFlyingEnergy");
static_assert(offsetof(UFortPawnComponent_WingedFlying, bIntendsToBoost) == 220, "Offset mismatch for UFortPawnComponent_WingedFlying::bIntendsToBoost");
static_assert(offsetof(UFortPawnComponent_WingedFlying, bIntendsToAscend) == 221, "Offset mismatch for UFortPawnComponent_WingedFlying::bIntendsToAscend");
static_assert(offsetof(UFortPawnComponent_WingedFlying, bIntendsToCrash) == 222, "Offset mismatch for UFortPawnComponent_WingedFlying::bIntendsToCrash");
static_assert(offsetof(UFortPawnComponent_WingedFlying, bIntendsToRollLeft) == 223, "Offset mismatch for UFortPawnComponent_WingedFlying::bIntendsToRollLeft");
static_assert(offsetof(UFortPawnComponent_WingedFlying, bIntendsToRollRight) == 224, "Offset mismatch for UFortPawnComponent_WingedFlying::bIntendsToRollRight");
static_assert(offsetof(UFortPawnComponent_WingedFlying, FlyingMovementModeExtension) == 232, "Offset mismatch for UFortPawnComponent_WingedFlying::FlyingMovementModeExtension");
static_assert(offsetof(UFortPawnComponent_WingedFlying, TagsToEnableSkimmingCheck) == 240, "Offset mismatch for UFortPawnComponent_WingedFlying::TagsToEnableSkimmingCheck");
static_assert(offsetof(UFortPawnComponent_WingedFlying, SkimCheckTraceChannel) == 272, "Offset mismatch for UFortPawnComponent_WingedFlying::SkimCheckTraceChannel");
static_assert(offsetof(UFortPawnComponent_WingedFlying, SkimCheckLeftStartSocket) == 276, "Offset mismatch for UFortPawnComponent_WingedFlying::SkimCheckLeftStartSocket");
static_assert(offsetof(UFortPawnComponent_WingedFlying, SkimCheckLeftEndSocket) == 280, "Offset mismatch for UFortPawnComponent_WingedFlying::SkimCheckLeftEndSocket");
static_assert(offsetof(UFortPawnComponent_WingedFlying, SkimCheckRightStartSocket) == 284, "Offset mismatch for UFortPawnComponent_WingedFlying::SkimCheckRightStartSocket");
static_assert(offsetof(UFortPawnComponent_WingedFlying, SkimCheckRightEndSocket) == 288, "Offset mismatch for UFortPawnComponent_WingedFlying::SkimCheckRightEndSocket");
static_assert(offsetof(UFortPawnComponent_WingedFlying, TagToEnableHeightCheck) == 292, "Offset mismatch for UFortPawnComponent_WingedFlying::TagToEnableHeightCheck");
static_assert(offsetof(UFortPawnComponent_WingedFlying, HeightCheckInterval) == 296, "Offset mismatch for UFortPawnComponent_WingedFlying::HeightCheckInterval");
static_assert(offsetof(UFortPawnComponent_WingedFlying, HeightCheckTraceLength) == 336, "Offset mismatch for UFortPawnComponent_WingedFlying::HeightCheckTraceLength");

// /Script/SunRoseFlyingRuntime.FortWeaponWings
// Kind: Class; super: FortWeapon
class UFortWeaponWings
{
public:
    std::uint8_t Pad_0000[0x1A28]; // 0x0000
    void* WingsMaterialInstance; // 0x1A28 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IsFlyingGameplayTag[0x4]; // 0x1A30 (Size: 0x4, Type: StructProperty)
    std::uint8_t IsFallingAudioParamName[0x4]; // 0x1A34 (Size: 0x4, Type: NameProperty)
    std::uint8_t FeatherDissolveName[0x4]; // 0x1A38 (Size: 0x4, Type: NameProperty)
    std::uint8_t ReplenishAnimationName[0x4]; // 0x1A3C (Size: 0x4, Type: NameProperty)
    void* OutOfEnergy2DSound; // 0x1A40 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OwnedGameplayTags[0x20]; // 0x1A48 (Size: 0x20, Type: StructProperty)
    void* AbilitySystemComponent; // 0x1A68 (Size: 0x8, Type: ObjectProperty)
    void* HealthSet; // 0x1A70 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PrimarySurfaceType; // 0x1A78 (Size: 0x1, Type: ByteProperty)
    std::uint8_t WeaponResponseType; // 0x1A79 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x1A7A
    void* DamageGameplayEffectClass; // 0x1A80 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SetByCallerDamageTag[0x8]; // 0x1A88 (Size: 0x8, Type: StructProperty)
    std::uint8_t TagsToPreventReload[0x20]; // 0x1A90 (Size: 0x20, Type: StructProperty)
    std::uint8_t ServerMeshRelativeRotationRoll[0x28]; // 0x1AB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ServerMeshRelativeLocationY[0x28]; // 0x1AD8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ServerMeshRelativeLocationZ[0x1]; // 0x1B00 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortWeaponWings, WingsMaterialInstance) == 6696, "Offset mismatch for UFortWeaponWings::WingsMaterialInstance");
static_assert(offsetof(UFortWeaponWings, IsFlyingGameplayTag) == 6704, "Offset mismatch for UFortWeaponWings::IsFlyingGameplayTag");
static_assert(offsetof(UFortWeaponWings, IsFallingAudioParamName) == 6708, "Offset mismatch for UFortWeaponWings::IsFallingAudioParamName");
static_assert(offsetof(UFortWeaponWings, FeatherDissolveName) == 6712, "Offset mismatch for UFortWeaponWings::FeatherDissolveName");
static_assert(offsetof(UFortWeaponWings, ReplenishAnimationName) == 6716, "Offset mismatch for UFortWeaponWings::ReplenishAnimationName");
static_assert(offsetof(UFortWeaponWings, OutOfEnergy2DSound) == 6720, "Offset mismatch for UFortWeaponWings::OutOfEnergy2DSound");
static_assert(offsetof(UFortWeaponWings, OwnedGameplayTags) == 6728, "Offset mismatch for UFortWeaponWings::OwnedGameplayTags");
static_assert(offsetof(UFortWeaponWings, AbilitySystemComponent) == 6760, "Offset mismatch for UFortWeaponWings::AbilitySystemComponent");
static_assert(offsetof(UFortWeaponWings, HealthSet) == 6768, "Offset mismatch for UFortWeaponWings::HealthSet");
static_assert(offsetof(UFortWeaponWings, PrimarySurfaceType) == 6776, "Offset mismatch for UFortWeaponWings::PrimarySurfaceType");
static_assert(offsetof(UFortWeaponWings, WeaponResponseType) == 6777, "Offset mismatch for UFortWeaponWings::WeaponResponseType");
static_assert(offsetof(UFortWeaponWings, DamageGameplayEffectClass) == 6784, "Offset mismatch for UFortWeaponWings::DamageGameplayEffectClass");
static_assert(offsetof(UFortWeaponWings, SetByCallerDamageTag) == 6792, "Offset mismatch for UFortWeaponWings::SetByCallerDamageTag");
static_assert(offsetof(UFortWeaponWings, TagsToPreventReload) == 6800, "Offset mismatch for UFortWeaponWings::TagsToPreventReload");
static_assert(offsetof(UFortWeaponWings, ServerMeshRelativeRotationRoll) == 6832, "Offset mismatch for UFortWeaponWings::ServerMeshRelativeRotationRoll");
static_assert(offsetof(UFortWeaponWings, ServerMeshRelativeLocationY) == 6872, "Offset mismatch for UFortWeaponWings::ServerMeshRelativeLocationY");
static_assert(offsetof(UFortWeaponWings, ServerMeshRelativeLocationZ) == 6912, "Offset mismatch for UFortWeaponWings::ServerMeshRelativeLocationZ");

// /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortWingedFlyingBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SunRoseFlyingRuntime.SunRoseFlying_PlayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class USunRoseFlying_PlayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t AscenderTag[0x4]; // 0x1170 (Size: 0x4, Type: StructProperty)
    std::uint8_t GrindRailsTag[0x4]; // 0x1174 (Size: 0x4, Type: StructProperty)
    std::uint8_t WingedFlightTag[0x4]; // 0x1178 (Size: 0x4, Type: StructProperty)
    std::uint8_t WingsForceCrashTag[0x4]; // 0x117C (Size: 0x4, Type: StructProperty)
    std::uint8_t WingsLeapingTag[0x4]; // 0x1180 (Size: 0x4, Type: StructProperty)
    float CurrentHeightAboveWorld; // 0x1184 (Size: 0x4, Type: FloatProperty)
    float Fuel; // 0x1188 (Size: 0x4, Type: FloatProperty)
    float GlidePitch; // 0x118C (Size: 0x4, Type: FloatProperty)
    float GlidePitchAlpha; // 0x1190 (Size: 0x4, Type: FloatProperty)
    float GlidePitchInterp; // 0x1194 (Size: 0x4, Type: FloatProperty)
    float GlidePitchTarget; // 0x1198 (Size: 0x4, Type: FloatProperty)
    float GlideRoll; // 0x119C (Size: 0x4, Type: FloatProperty)
    float GlideRollCombined; // 0x11A0 (Size: 0x4, Type: FloatProperty)
    float GlideRollCombinedTarget; // 0x11A4 (Size: 0x4, Type: FloatProperty)
    float GlideRollInterp; // 0x11A8 (Size: 0x4, Type: FloatProperty)
    float GroundBlendTime; // 0x11AC (Size: 0x4, Type: FloatProperty)
    float pelvis; // 0x11B0 (Size: 0x4, Type: FloatProperty)
    float PitchAlpha; // 0x11B4 (Size: 0x4, Type: FloatProperty)
    float RollAlpha; // 0x11B8 (Size: 0x4, Type: FloatProperty)
    float SlowDownOrLandAlpha; // 0x11BC (Size: 0x4, Type: FloatProperty)
    float SlowDownOrLandTarget; // 0x11C0 (Size: 0x4, Type: FloatProperty)
    float SlowSpeedAlpha; // 0x11C4 (Size: 0x4, Type: FloatProperty)
    float YawAlpha; // 0x11C8 (Size: 0x4, Type: FloatProperty)
    float YawBlend; // 0x11CC (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomInteger; // 0x11D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsAllowWingFlap; // 0x11D4 (Size: 0x1, Type: BoolProperty)
    // 0x11D4 BoolProperty bIsAscending (shared storage)
    // 0x11D4 BoolProperty bIsBoostStartEnd (shared storage)
    // 0x11D4 BoolProperty bIsDodgeLeft (shared storage)
    // 0x11D4 BoolProperty bIsDodgeRight (shared storage)
    // 0x11D4 BoolProperty bIsExtBoostEarly (shared storage)
    // 0x11D4 BoolProperty bIsFlyingStart (shared storage)
    // 0x11D4 BoolProperty bIsForceDive (shared storage)
    std::uint8_t bIsHighWithNoFuel; // 0x11D5 (Size: 0x1, Type: BoolProperty)
    // 0x11D5 BoolProperty bIsLeapInterruptible (shared storage)
    // 0x11D5 BoolProperty bIsOnAscender (shared storage)
    // 0x11D5 BoolProperty bIsOnGrindRail (shared storage)
    // 0x11D5 BoolProperty bIsPlayDiveHitToIdle (shared storage)
    // 0x11D5 BoolProperty bIsPlayLandAdditive (shared storage)
    // 0x11D5 BoolProperty bIsWingLeaping (shared storage)
    // 0x11D5 BoolProperty bIsWingReplenish (shared storage)
    std::uint8_t bIsDiveStart; // 0x11D6 (Size: 0x1, Type: BoolProperty)
    // 0x11D6 BoolProperty bIsWingsBoosting (shared storage)
    // 0x11D6 BoolProperty bIsWingsCrashing (shared storage)
    // 0x11D6 BoolProperty bIsWingsFlying (shared storage)
    // 0x11D6 BoolProperty bToBoosting (shared storage)
};

static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, AscenderTag) == 4464, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::AscenderTag");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, GrindRailsTag) == 4468, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::GrindRailsTag");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, WingedFlightTag) == 4472, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::WingedFlightTag");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, WingsForceCrashTag) == 4476, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::WingsForceCrashTag");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, WingsLeapingTag) == 4480, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::WingsLeapingTag");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, CurrentHeightAboveWorld) == 4484, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::CurrentHeightAboveWorld");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, Fuel) == 4488, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::Fuel");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, GlidePitch) == 4492, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::GlidePitch");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, GlidePitchAlpha) == 4496, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::GlidePitchAlpha");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, GlidePitchInterp) == 4500, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::GlidePitchInterp");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, GlidePitchTarget) == 4504, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::GlidePitchTarget");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, GlideRoll) == 4508, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::GlideRoll");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, GlideRollCombined) == 4512, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::GlideRollCombined");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, GlideRollCombinedTarget) == 4516, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::GlideRollCombinedTarget");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, GlideRollInterp) == 4520, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::GlideRollInterp");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, GroundBlendTime) == 4524, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::GroundBlendTime");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, pelvis) == 4528, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::pelvis");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, PitchAlpha) == 4532, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::PitchAlpha");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, RollAlpha) == 4536, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::RollAlpha");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, SlowDownOrLandAlpha) == 4540, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::SlowDownOrLandAlpha");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, SlowDownOrLandTarget) == 4544, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::SlowDownOrLandTarget");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, SlowSpeedAlpha) == 4548, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::SlowSpeedAlpha");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, YawAlpha) == 4552, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::YawAlpha");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, YawBlend) == 4556, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::YawBlend");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, RandomInteger) == 4560, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::RandomInteger");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, bIsAllowWingFlap) == 4564, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::bIsAllowWingFlap");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, bIsHighWithNoFuel) == 4565, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::bIsHighWithNoFuel");
static_assert(offsetof(USunRoseFlying_PlayerAnimInstance, bIsDiveStart) == 4566, "Offset mismatch for USunRoseFlying_PlayerAnimInstance::bIsDiveStart");

// /Script/SunRoseFlyingRuntime.SunRoseFlying_WingsAnimInstance
// Kind: Class; super: FortItemLayerAnimInstance
class USunRoseFlying_WingsAnimInstance
{
public:
    std::uint8_t Pad_0000[0x5E0]; // 0x0000
    std::uint8_t PlayerPawnRotationRate[0x18]; // 0x05E0 (Size: 0x18, Type: StructProperty)
    float PlayerCurrentHeightAboveWorld; // 0x05F8 (Size: 0x4, Type: FloatProperty)
    float PlayerFuel; // 0x05FC (Size: 0x4, Type: FloatProperty)
    float PlayerGlidePitch; // 0x0600 (Size: 0x4, Type: FloatProperty)
    float PlayerGlidePitchAlpha; // 0x0604 (Size: 0x4, Type: FloatProperty)
    float PlayerGlideRoll; // 0x0608 (Size: 0x4, Type: FloatProperty)
    float PlayerGroundBlendTime; // 0x060C (Size: 0x4, Type: FloatProperty)
    float PlayerGlideRollCombined; // 0x0610 (Size: 0x4, Type: FloatProperty)
    float PlayerRollAlpha; // 0x0614 (Size: 0x4, Type: FloatProperty)
    float PlayerSlowDownOrLandAlpha; // 0x0618 (Size: 0x4, Type: FloatProperty)
    float PlayerSpeed2D; // 0x061C (Size: 0x4, Type: FloatProperty)
    float WingFlapAlpha; // 0x0620 (Size: 0x4, Type: FloatProperty)
    float WingSlowDownOrLandAlpha; // 0x0624 (Size: 0x4, Type: FloatProperty)
    float WingSlowDownOrLandAlphaTarget; // 0x0628 (Size: 0x4, Type: FloatProperty)
    std::int32_t PlayerRandomInteger; // 0x062C (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsConduitToMoving; // 0x0630 (Size: 0x1, Type: BoolProperty)
    // 0x0630 BoolProperty bIsCrouchIdleToCrouchMoving (shared storage)
    // 0x0630 BoolProperty bIsCrouchMovingToCrouchIdle (shared storage)
    // 0x0630 BoolProperty bIsFallLoopToJumpLand (shared storage)
    // 0x0630 BoolProperty bIsFlyingStart (shared storage)
    // 0x0630 BoolProperty bIsNotCrouchIdle (shared storage)
    // 0x0630 BoolProperty bIsNotCrouchMoving (shared storage)
    // 0x0630 BoolProperty bIsNotMoving (shared storage)
    std::uint8_t bIsNotOnZipline; // 0x0631 (Size: 0x1, Type: BoolProperty)
    // 0x0631 BoolProperty bIsOnZipline (shared storage)
    // 0x0631 BoolProperty bIsOutOfGas (shared storage)
    // 0x0631 BoolProperty bIsProceduralDeactivated (shared storage)
    // 0x0631 BoolProperty bIsRandomFlap (shared storage)
    // 0x0631 BoolProperty bIsTacticalJumpLoopEnd (shared storage)
    // 0x0631 BoolProperty bIsToBoostEnd (shared storage)
    // 0x0631 BoolProperty bIsToBoostStart (shared storage)
    std::uint8_t bIsToSliding; // 0x0632 (Size: 0x1, Type: BoolProperty)
    // 0x0632 BoolProperty bLOD2Fix (shared storage)
    // 0x0632 BoolProperty bPlayerIsAccelerating2D (shared storage)
    // 0x0632 BoolProperty bPlayerIsAllowWingFlap (shared storage)
    // 0x0632 BoolProperty bPlayerIsAscending (shared storage)
    // 0x0632 BoolProperty bPlayerIsBoostStartEnd (shared storage)
    // 0x0632 BoolProperty bPlayerIsCrouchMoving (shared storage)
    // 0x0632 BoolProperty bPlayerIsCrouching (shared storage)
    std::uint8_t bPlayerIsDodgeLeft; // 0x0633 (Size: 0x1, Type: BoolProperty)
    // 0x0633 BoolProperty bPlayerIsDodgeRight (shared storage)
    // 0x0633 BoolProperty bPlayerIsFalling (shared storage)
    // 0x0633 BoolProperty bPlayerIsForceDive (shared storage)
    // 0x0633 BoolProperty bPlayerIsJumping (shared storage)
    // 0x0633 BoolProperty bPlayerIsLeapInterruptible (shared storage)
    // 0x0633 BoolProperty bPlayerIsOnAscender (shared storage)
    // 0x0633 BoolProperty bPlayerIsOnGrindRail (shared storage)
    std::uint8_t bPlayerIsPlayDiveHitToIdle; // 0x0634 (Size: 0x1, Type: BoolProperty)
    // 0x0634 BoolProperty bPlayerIsPlayLandAdditive (shared storage)
    // 0x0634 BoolProperty bPlayerIsSliding (shared storage)
    // 0x0634 BoolProperty bPlayerIsSurfaceSwimming (shared storage)
    // 0x0634 BoolProperty bPlayerIsTacticalJump (shared storage)
    // 0x0634 BoolProperty bPlayerIsTacticalSprint (shared storage)
    // 0x0634 BoolProperty bPlayerIsWingLeaping (shared storage)
    // 0x0634 BoolProperty bPlayerIsWingReplenish (shared storage)
    std::uint8_t bPlayerIsWingsBoosting; // 0x0635 (Size: 0x1, Type: BoolProperty)
    // 0x0635 BoolProperty bPlayerIsWingsCrashing (shared storage)
    // 0x0635 BoolProperty bPlayerIsWingsFlying (shared storage)
    // 0x0635 BoolProperty bPlayerIsZiplining (shared storage)
    // 0x0635 BoolProperty bTacticalJumpLoopToTacticalLand (shared storage)
    // 0x0635 BoolProperty bToJumpStart (shared storage)
};

static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerPawnRotationRate) == 1504, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerPawnRotationRate");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerCurrentHeightAboveWorld) == 1528, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerCurrentHeightAboveWorld");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerFuel) == 1532, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerFuel");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerGlidePitch) == 1536, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerGlidePitch");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerGlidePitchAlpha) == 1540, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerGlidePitchAlpha");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerGlideRoll) == 1544, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerGlideRoll");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerGroundBlendTime) == 1548, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerGroundBlendTime");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerGlideRollCombined) == 1552, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerGlideRollCombined");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerRollAlpha) == 1556, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerRollAlpha");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerSlowDownOrLandAlpha) == 1560, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerSlowDownOrLandAlpha");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerSpeed2D) == 1564, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerSpeed2D");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, WingFlapAlpha) == 1568, "Offset mismatch for USunRoseFlying_WingsAnimInstance::WingFlapAlpha");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, WingSlowDownOrLandAlpha) == 1572, "Offset mismatch for USunRoseFlying_WingsAnimInstance::WingSlowDownOrLandAlpha");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, WingSlowDownOrLandAlphaTarget) == 1576, "Offset mismatch for USunRoseFlying_WingsAnimInstance::WingSlowDownOrLandAlphaTarget");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, PlayerRandomInteger) == 1580, "Offset mismatch for USunRoseFlying_WingsAnimInstance::PlayerRandomInteger");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, bIsConduitToMoving) == 1584, "Offset mismatch for USunRoseFlying_WingsAnimInstance::bIsConduitToMoving");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, bIsNotOnZipline) == 1585, "Offset mismatch for USunRoseFlying_WingsAnimInstance::bIsNotOnZipline");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, bIsToSliding) == 1586, "Offset mismatch for USunRoseFlying_WingsAnimInstance::bIsToSliding");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, bPlayerIsDodgeLeft) == 1587, "Offset mismatch for USunRoseFlying_WingsAnimInstance::bPlayerIsDodgeLeft");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, bPlayerIsPlayDiveHitToIdle) == 1588, "Offset mismatch for USunRoseFlying_WingsAnimInstance::bPlayerIsPlayDiveHitToIdle");
static_assert(offsetof(USunRoseFlying_WingsAnimInstance, bPlayerIsWingsBoosting) == 1589, "Offset mismatch for USunRoseFlying_WingsAnimInstance::bPlayerIsWingsBoosting");
