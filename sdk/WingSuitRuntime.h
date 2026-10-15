/**
 * decamp dumper generated SDK
 * Package: /Script/WingSuitRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WingSuitRuntime.FortMovementMode_WingSuitCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_WingSuitCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bApplyInitialBoost; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortMovementMode_WingSuitCreationData, bApplyInitialBoost) == 16, "Offset mismatch for FFortMovementMode_WingSuitCreationData::bApplyInitialBoost");

// /Script/WingSuitRuntime.WingSuitFacingControls
// Kind: ScriptStruct; super: none
struct FWingSuitFacingControls
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CameraPitchModCurve; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaxYawRate[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPitchUpRate[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPitchDownRate[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPitchAngle[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinPitchAngle[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FallingAngle[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpAngle[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrouchAngle[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWingSuitFacingControls, CameraPitchModCurve) == 40, "Offset mismatch for FWingSuitFacingControls::CameraPitchModCurve");
static_assert(offsetof(FWingSuitFacingControls, MaxYawRate) == 48, "Offset mismatch for FWingSuitFacingControls::MaxYawRate");
static_assert(offsetof(FWingSuitFacingControls, MaxPitchUpRate) == 88, "Offset mismatch for FWingSuitFacingControls::MaxPitchUpRate");
static_assert(offsetof(FWingSuitFacingControls, MaxPitchDownRate) == 128, "Offset mismatch for FWingSuitFacingControls::MaxPitchDownRate");
static_assert(offsetof(FWingSuitFacingControls, MaxPitchAngle) == 168, "Offset mismatch for FWingSuitFacingControls::MaxPitchAngle");
static_assert(offsetof(FWingSuitFacingControls, MinPitchAngle) == 208, "Offset mismatch for FWingSuitFacingControls::MinPitchAngle");
static_assert(offsetof(FWingSuitFacingControls, FallingAngle) == 248, "Offset mismatch for FWingSuitFacingControls::FallingAngle");
static_assert(offsetof(FWingSuitFacingControls, JumpAngle) == 288, "Offset mismatch for FWingSuitFacingControls::JumpAngle");
static_assert(offsetof(FWingSuitFacingControls, CrouchAngle) == 328, "Offset mismatch for FWingSuitFacingControls::CrouchAngle");

// /Script/WingSuitRuntime.WingSuitSteeringControls
// Kind: ScriptStruct; super: none
struct FWingSuitSteeringControls
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CameraPitchModCurve; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* CameraAdjustmentAngleMultiplier; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaxYawRate[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPitchUpRate[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPitchDownRate[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPitch[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinPitch[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RestingPitch[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawDeadZone[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchDeadZone[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    std::uint8_t CameraAdjustmentRate[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWingSuitSteeringControls, CameraPitchModCurve) == 40, "Offset mismatch for FWingSuitSteeringControls::CameraPitchModCurve");
static_assert(offsetof(FWingSuitSteeringControls, CameraAdjustmentAngleMultiplier) == 48, "Offset mismatch for FWingSuitSteeringControls::CameraAdjustmentAngleMultiplier");
static_assert(offsetof(FWingSuitSteeringControls, MaxYawRate) == 56, "Offset mismatch for FWingSuitSteeringControls::MaxYawRate");
static_assert(offsetof(FWingSuitSteeringControls, MaxPitchUpRate) == 96, "Offset mismatch for FWingSuitSteeringControls::MaxPitchUpRate");
static_assert(offsetof(FWingSuitSteeringControls, MaxPitchDownRate) == 136, "Offset mismatch for FWingSuitSteeringControls::MaxPitchDownRate");
static_assert(offsetof(FWingSuitSteeringControls, MaxPitch) == 176, "Offset mismatch for FWingSuitSteeringControls::MaxPitch");
static_assert(offsetof(FWingSuitSteeringControls, MinPitch) == 216, "Offset mismatch for FWingSuitSteeringControls::MinPitch");
static_assert(offsetof(FWingSuitSteeringControls, RestingPitch) == 256, "Offset mismatch for FWingSuitSteeringControls::RestingPitch");
static_assert(offsetof(FWingSuitSteeringControls, YawDeadZone) == 296, "Offset mismatch for FWingSuitSteeringControls::YawDeadZone");
static_assert(offsetof(FWingSuitSteeringControls, PitchDeadZone) == 336, "Offset mismatch for FWingSuitSteeringControls::PitchDeadZone");
static_assert(offsetof(FWingSuitSteeringControls, CameraAdjustmentRate) == 376, "Offset mismatch for FWingSuitSteeringControls::CameraAdjustmentRate");

// /Script/WingSuitRuntime.FortCameraMode_WingSuit
// Kind: Class; super: FortCameraMode_ThirdPerson
class UFortCameraMode_WingSuit
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    std::uint8_t MaxYawChangePerSecond[0x28]; // 0x2080 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPitchChangePerSecond[0x28]; // 0x20A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawRotationSensitivity[0x28]; // 0x20D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchRotationSensitivity[0x1]; // 0x20F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCameraMode_WingSuit, MaxYawChangePerSecond) == 8320, "Offset mismatch for UFortCameraMode_WingSuit::MaxYawChangePerSecond");
static_assert(offsetof(UFortCameraMode_WingSuit, MaxPitchChangePerSecond) == 8360, "Offset mismatch for UFortCameraMode_WingSuit::MaxPitchChangePerSecond");
static_assert(offsetof(UFortCameraMode_WingSuit, YawRotationSensitivity) == 8400, "Offset mismatch for UFortCameraMode_WingSuit::YawRotationSensitivity");
static_assert(offsetof(UFortCameraMode_WingSuit, PitchRotationSensitivity) == 8440, "Offset mismatch for UFortCameraMode_WingSuit::PitchRotationSensitivity");

// /Script/WingSuitRuntime.FortMovementMode_ExtLogicWingSuit
// Kind: Class; super: FortMovementMode_ItemActivated
class UFortMovementMode_ExtLogicWingSuit
{
public:
    std::uint8_t Pad_0000[0x284]; // 0x0000
    std::uint8_t bDrawDebug; // 0x0284 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0285
    std::uint8_t MaxSpeed[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeed[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnSpeed[0x28]; // 0x02D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardThrustMultiplier[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    void* SpeedDragCurve; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NeutralPitchMax[0x28]; // 0x0330 (Size: 0x28, Type: StructProperty)
    std::uint8_t NeutralPitchMin[0x28]; // 0x0358 (Size: 0x28, Type: StructProperty)
    std::uint8_t NeutralPitchEnterTime[0x28]; // 0x0380 (Size: 0x28, Type: StructProperty)
    void* NeutralSpeedDragCurve; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* AccelerationCurve; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* ForwardSpeedToVerticalDragCurve; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HorizontalDragCoef[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FallingGravity[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FallingMaxSpeed[0x28]; // 0x0410 (Size: 0x28, Type: StructProperty)
    void* PitchToMin2DSpeedCurve; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ModeTimeLimit[0x28]; // 0x0440 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeLimitVerticalDrag[0x28]; // 0x0468 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeLimitGravity[0x28]; // 0x0490 (Size: 0x28, Type: StructProperty)
    std::uint8_t EntranceBoostActiveDuration[0x28]; // 0x04B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinLaunchPitch[0x28]; // 0x04E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxLaunchPitch[0x28]; // 0x0508 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchSpeed[0x28]; // 0x0530 (Size: 0x28, Type: StructProperty)
    void* LaunchControlCurve; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PointLandingMaxPitch[0x28]; // 0x0560 (Size: 0x28, Type: StructProperty)
    std::uint8_t PointLandingMinSpeed[0x28]; // 0x0588 (Size: 0x28, Type: StructProperty)
    std::uint8_t LandingAngle[0x28]; // 0x05B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashLandingAngle[0x28]; // 0x05D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LandingPredictionLookAheadTime[0x28]; // 0x0600 (Size: 0x28, Type: StructProperty)
    std::uint8_t LandingPredictionPawnOffset[0x18]; // 0x0628 (Size: 0x18, Type: StructProperty)
    std::uint8_t HorizontalSpeedPreserveMult[0x28]; // 0x0640 (Size: 0x28, Type: StructProperty)
    std::uint8_t VerticalSpeedPreserveMult[0x28]; // 0x0668 (Size: 0x28, Type: StructProperty)
    std::uint8_t StrafingEnabled[0x28]; // 0x0690 (Size: 0x28, Type: StructProperty)
    void* ForwardSpeedToStrafeForceCurve; // 0x06B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StrafeDragCoef[0x28]; // 0x06C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlippingEnabled[0x28]; // 0x06E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlippingTag[0x8]; // 0x0710 (Size: 0x8, Type: StructProperty)
    std::uint8_t FlippingMinPitchTrigger[0x28]; // 0x0718 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlippingMaxSpeedTrigger[0x28]; // 0x0740 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlippingMinAltitudeTrigger[0x28]; // 0x0768 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlippingTimeTrigger[0x28]; // 0x0790 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlippingTargetPitch[0x28]; // 0x07B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlippingTargetPitchHoldTime[0x28]; // 0x07E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlippingPitchRate[0x28]; // 0x0808 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlippingCameraAdjustmentRate[0x28]; // 0x0830 (Size: 0x28, Type: StructProperty)
    std::uint8_t GamepadZeroedOutTimeThreshold[0x28]; // 0x0858 (Size: 0x28, Type: StructProperty)
    std::uint8_t GamepadSteeringControls[0x1A0]; // 0x0880 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t GamepadFacingControls[0x170]; // 0x0A20 (Size: 0x170, Type: StructProperty)
    std::uint8_t KeyboardFacingControls[0x170]; // 0x0B90 (Size: 0x170, Type: StructProperty)
    std::uint8_t VisualFastSpeed[0x28]; // 0x0D00 (Size: 0x28, Type: StructProperty)
    std::uint8_t VisualFastTag[0x8]; // 0x0D28 (Size: 0x8, Type: StructProperty)
    std::uint8_t SpeedLimitHeight[0x28]; // 0x0D30 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedLimitSpeed[0x1]; // 0x0D58 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, bDrawDebug) == 644, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::bDrawDebug");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, MaxSpeed) == 648, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::MaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, MinSpeed) == 688, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::MinSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, TurnSpeed) == 728, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::TurnSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, ForwardThrustMultiplier) == 768, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::ForwardThrustMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, SpeedDragCurve) == 808, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::SpeedDragCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, NeutralPitchMax) == 816, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::NeutralPitchMax");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, NeutralPitchMin) == 856, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::NeutralPitchMin");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, NeutralPitchEnterTime) == 896, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::NeutralPitchEnterTime");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, NeutralSpeedDragCurve) == 936, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::NeutralSpeedDragCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, AccelerationCurve) == 944, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::AccelerationCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, ForwardSpeedToVerticalDragCurve) == 952, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::ForwardSpeedToVerticalDragCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, HorizontalDragCoef) == 960, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::HorizontalDragCoef");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FallingGravity) == 1000, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FallingGravity");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FallingMaxSpeed) == 1040, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FallingMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, PitchToMin2DSpeedCurve) == 1080, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::PitchToMin2DSpeedCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, ModeTimeLimit) == 1088, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::ModeTimeLimit");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, TimeLimitVerticalDrag) == 1128, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::TimeLimitVerticalDrag");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, TimeLimitGravity) == 1168, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::TimeLimitGravity");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, EntranceBoostActiveDuration) == 1208, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::EntranceBoostActiveDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, MinLaunchPitch) == 1248, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::MinLaunchPitch");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, MaxLaunchPitch) == 1288, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::MaxLaunchPitch");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, LaunchSpeed) == 1328, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::LaunchSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, LaunchControlCurve) == 1368, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::LaunchControlCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, PointLandingMaxPitch) == 1376, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::PointLandingMaxPitch");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, PointLandingMinSpeed) == 1416, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::PointLandingMinSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, LandingAngle) == 1456, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::LandingAngle");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, CrashLandingAngle) == 1496, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::CrashLandingAngle");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, LandingPredictionLookAheadTime) == 1536, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::LandingPredictionLookAheadTime");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, LandingPredictionPawnOffset) == 1576, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::LandingPredictionPawnOffset");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, HorizontalSpeedPreserveMult) == 1600, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::HorizontalSpeedPreserveMult");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, VerticalSpeedPreserveMult) == 1640, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::VerticalSpeedPreserveMult");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, StrafingEnabled) == 1680, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::StrafingEnabled");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, ForwardSpeedToStrafeForceCurve) == 1720, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::ForwardSpeedToStrafeForceCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, StrafeDragCoef) == 1728, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::StrafeDragCoef");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FlippingEnabled) == 1768, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FlippingEnabled");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FlippingTag) == 1808, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FlippingTag");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FlippingMinPitchTrigger) == 1816, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FlippingMinPitchTrigger");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FlippingMaxSpeedTrigger) == 1856, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FlippingMaxSpeedTrigger");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FlippingMinAltitudeTrigger) == 1896, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FlippingMinAltitudeTrigger");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FlippingTimeTrigger) == 1936, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FlippingTimeTrigger");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FlippingTargetPitch) == 1976, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FlippingTargetPitch");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FlippingTargetPitchHoldTime) == 2016, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FlippingTargetPitchHoldTime");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FlippingPitchRate) == 2056, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FlippingPitchRate");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, FlippingCameraAdjustmentRate) == 2096, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::FlippingCameraAdjustmentRate");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, GamepadZeroedOutTimeThreshold) == 2136, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::GamepadZeroedOutTimeThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, GamepadSteeringControls) == 2176, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::GamepadSteeringControls");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, GamepadFacingControls) == 2592, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::GamepadFacingControls");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, KeyboardFacingControls) == 2960, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::KeyboardFacingControls");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, VisualFastSpeed) == 3328, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::VisualFastSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, VisualFastTag) == 3368, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::VisualFastTag");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, SpeedLimitHeight) == 3376, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::SpeedLimitHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicWingSuit, SpeedLimitSpeed) == 3416, "Offset mismatch for UFortMovementMode_ExtLogicWingSuit::SpeedLimitSpeed");

// /Script/WingSuitRuntime.FortMovementMode_WingSuitRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_WingSuitRuntimeData
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

static_assert(offsetof(UFortMovementMode_WingSuitRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_WingSuitRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_WingSuitRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_WingSuitRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_WingSuitRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_WingSuitRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_WingSuitRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_WingSuitRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_WingSuitRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_WingSuitRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_WingSuitRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_WingSuitRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_WingSuitRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_WingSuitRuntimeData::EndReasonFlags");

// /Script/WingSuitRuntime.GameplayAbility_WingsuitActive
// Kind: Class; super: FortGameplayAbility
class UGameplayAbility_WingsuitActive
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    std::uint8_t ActivationType; // 0x03A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03A9
    std::uint8_t EffectContainers[0x398]; // 0x03B0 (Size: 0x398, Type: StructProperty)
    TArray<void*> GameplayEffectContainers; // 0x0748 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DynamicGameplayEffectContainers; // 0x0758 (Size: 0x10, Type: MapProperty)
    std::uint8_t OwnerPreviewImageOverrideTags[0x20]; // 0x0768 (Size: 0x20, Type: StructProperty)
    void* ProjectileClass; // 0x0788 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowBlueprintReplicatedVariables; // 0x0790 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0791
    std::uint8_t DamageStatHandle[0x10]; // 0x0798 (Size: 0x10, Type: StructProperty)
    TArray<void*> AbilityCosts; // 0x07A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Costs; // 0x07B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bApplyingCostsEnabled; // 0x07C8 (Size: 0x1, Type: BoolProperty)
    // 0x07C8 BoolProperty bShowWidgetForCosts (shared storage)
    std::uint8_t Pad_0003[0x7]; // 0x07C9
    std::uint8_t MovementCancellationLeashLength[0x28]; // 0x07D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExplicitCooldownDuration[0x28]; // 0x07F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExplicitCooldownTags[0x20]; // 0x0820 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExplicitCooldownAssetTags[0x20]; // 0x0840 (Size: 0x20, Type: StructProperty)
    std::uint8_t CustomFiringSequenceLength; // 0x0860 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0861
    std::uint8_t bDisableMoveCombining; // 0x0864 (Size: 0x1, Type: BoolProperty)
    // 0x0864 BoolProperty bIgnoreClientActivationAttempts (shared storage)
    // 0x0864 BoolProperty bPersistOnDeath (shared storage)
    // 0x0864 BoolProperty bRequireServerTimeValidationPass (shared storage)
    // 0x0864 BoolProperty bRequireServerValidationPass (shared storage)
    // 0x0864 BoolProperty bStartWithCooldown (shared storage)
    // 0x0864 BoolProperty bStopsAIBehaviorLogic (shared storage)
    // 0x0864 BoolProperty bStopsAIMovement (shared storage)
    std::uint8_t bForceNormalAILOD; // 0x0865 (Size: 0x1, Type: BoolProperty)
    // 0x0865 BoolProperty bStopsRVOAvoidance (shared storage)
    std::uint8_t Pad_0005[0x2]; // 0x0866
    std::uint8_t MinimumRequiredAILODLevel; // 0x0868 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0869
    std::uint8_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests; // 0x086C (Size: 0x1, Type: BoolProperty)
    // 0x086C BoolProperty bAcceptTargetActorVehicleForCanHitTests (shared storage)
    // 0x086C BoolProperty bRelevantForAIDespawning (shared storage)
    // 0x086C BoolProperty bUseOwnerInstigatorAsInstigator (shared storage)
    // 0x086C BoolProperty bUseTetheredPawnAsInstigator (shared storage)
    std::uint8_t bUseAIFireLocationAndRotation; // 0x086D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x086E
    std::uint8_t AIWeaponUsage; // 0x0870 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0871
    std::uint8_t WeaponTestApplicationTag[0x4]; // 0x0874 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling; // 0x0878 (Size: 0x1, Type: BoolProperty)
    // 0x0878 BoolProperty bVerifyFireOffsetIsNotObstructedByWorldGeometry (shared storage)
    std::uint8_t Pad_0009[0x7]; // 0x0879
    std::uint8_t FireOffset[0x18]; // 0x0880 (Size: 0x18, Type: StructProperty)
    float ActivationNoiseRange; // 0x0898 (Size: 0x4, Type: FloatProperty)
    float ImpactNoiseRange; // 0x089C (Size: 0x4, Type: FloatProperty)
    float ActivationNoiseLoudness; // 0x08A0 (Size: 0x4, Type: FloatProperty)
    float ImpactNoiseLoudness; // 0x08A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProhibitedTargetTags[0x21]; // 0x08A8 (Size: 0x21, Type: StructProperty)
    std::uint8_t bLeadPawnTargets; // 0x08C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x2]; // 0x08CA
    float DesiredThrowAngle; // 0x08CC (Size: 0x4, Type: FloatProperty)
    float MaxYawAngleToFire; // 0x08D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampMaxYawAngleToFire; // 0x08D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseTargetActorLocation; // 0x08D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x2]; // 0x08D6
    float InitialAccuracyMax; // 0x08D8 (Size: 0x4, Type: FloatProperty)
    float InitialAccuracyMin; // 0x08DC (Size: 0x4, Type: FloatProperty)
    float TargetAccuracyMax; // 0x08E0 (Size: 0x4, Type: FloatProperty)
    float TargetAccuracyMin; // 0x08E4 (Size: 0x4, Type: FloatProperty)
    float MinAccuracyDistance; // 0x08E8 (Size: 0x4, Type: FloatProperty)
    float MaxAccuracyDistance; // 0x08EC (Size: 0x4, Type: FloatProperty)
    float AccuracyDistanceMultiplier; // 0x08F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumUsesToReachTargetAccuracy; // 0x08F4 (Size: 0x4, Type: IntProperty)
    std::int32_t UseCount; // 0x08F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsMobileToggle; // 0x08FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateIfTagsAlreadyPresent; // 0x08FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0xA]; // 0x08FE
    TArray<void*> GameplayAbilityBehaviorDistanceData; // 0x0908 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000D[0x60]; // 0x0918
    std::uint8_t MontageInfo[0x58]; // 0x0978 (Size: 0x58, Type: StructProperty)
    std::uint8_t PreviousMontageInfo[0x58]; // 0x09D0 (Size: 0x58, Type: StructProperty)
    TArray<void*> ModList; // 0x0A28 (Size: 0x10, Type: ArrayProperty)
    void* AbilityWeapon; // 0x0A38 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisplayName[0x10]; // 0x0A40 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0A50 (Size: 0x18, Type: TextProperty)
    void* SmallPreviewImageOverride; // 0x0A68 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000E[0x10]; // 0x0A70
    float ChargeStartTime; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000F[0x4]; // 0x0A84
    std::uint8_t ChargeState; // 0x0A88 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0010[0x27]; // 0x0A89
    void* ToolTip; // 0x0AB0 (Size: 0x8, Type: ClassProperty)
    void* StatList; // 0x0AB8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0011[0x8]; // 0x0AC0
    std::uint8_t ActorTrackingSettings[0x28]; // 0x0AC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AnalyticsTags[0x20]; // 0x0AF0 (Size: 0x20, Type: StructProperty)
    TArray<void*> TagChangedActions; // 0x0B10 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayAbility_WingsuitActive, ActivationType) == 936, "Offset mismatch for UGameplayAbility_WingsuitActive::ActivationType");
static_assert(offsetof(UGameplayAbility_WingsuitActive, EffectContainers) == 944, "Offset mismatch for UGameplayAbility_WingsuitActive::EffectContainers");
static_assert(offsetof(UGameplayAbility_WingsuitActive, GameplayEffectContainers) == 1864, "Offset mismatch for UGameplayAbility_WingsuitActive::GameplayEffectContainers");
static_assert(offsetof(UGameplayAbility_WingsuitActive, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for UGameplayAbility_WingsuitActive::DynamicGameplayEffectContainers");
static_assert(offsetof(UGameplayAbility_WingsuitActive, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for UGameplayAbility_WingsuitActive::OwnerPreviewImageOverrideTags");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ProjectileClass) == 1928, "Offset mismatch for UGameplayAbility_WingsuitActive::ProjectileClass");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for UGameplayAbility_WingsuitActive::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(UGameplayAbility_WingsuitActive, DamageStatHandle) == 1944, "Offset mismatch for UGameplayAbility_WingsuitActive::DamageStatHandle");
static_assert(offsetof(UGameplayAbility_WingsuitActive, AbilityCosts) == 1960, "Offset mismatch for UGameplayAbility_WingsuitActive::AbilityCosts");
static_assert(offsetof(UGameplayAbility_WingsuitActive, Costs) == 1976, "Offset mismatch for UGameplayAbility_WingsuitActive::Costs");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bApplyingCostsEnabled) == 1992, "Offset mismatch for UGameplayAbility_WingsuitActive::bApplyingCostsEnabled");
static_assert(offsetof(UGameplayAbility_WingsuitActive, MovementCancellationLeashLength) == 2000, "Offset mismatch for UGameplayAbility_WingsuitActive::MovementCancellationLeashLength");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ExplicitCooldownDuration) == 2040, "Offset mismatch for UGameplayAbility_WingsuitActive::ExplicitCooldownDuration");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ExplicitCooldownTags) == 2080, "Offset mismatch for UGameplayAbility_WingsuitActive::ExplicitCooldownTags");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for UGameplayAbility_WingsuitActive::ExplicitCooldownAssetTags");
static_assert(offsetof(UGameplayAbility_WingsuitActive, CustomFiringSequenceLength) == 2144, "Offset mismatch for UGameplayAbility_WingsuitActive::CustomFiringSequenceLength");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bDisableMoveCombining) == 2148, "Offset mismatch for UGameplayAbility_WingsuitActive::bDisableMoveCombining");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bForceNormalAILOD) == 2149, "Offset mismatch for UGameplayAbility_WingsuitActive::bForceNormalAILOD");
static_assert(offsetof(UGameplayAbility_WingsuitActive, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for UGameplayAbility_WingsuitActive::MinimumRequiredAILODLevel");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for UGameplayAbility_WingsuitActive::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for UGameplayAbility_WingsuitActive::bUseAIFireLocationAndRotation");
static_assert(offsetof(UGameplayAbility_WingsuitActive, AIWeaponUsage) == 2160, "Offset mismatch for UGameplayAbility_WingsuitActive::AIWeaponUsage");
static_assert(offsetof(UGameplayAbility_WingsuitActive, WeaponTestApplicationTag) == 2164, "Offset mismatch for UGameplayAbility_WingsuitActive::WeaponTestApplicationTag");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for UGameplayAbility_WingsuitActive::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(UGameplayAbility_WingsuitActive, FireOffset) == 2176, "Offset mismatch for UGameplayAbility_WingsuitActive::FireOffset");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ActivationNoiseRange) == 2200, "Offset mismatch for UGameplayAbility_WingsuitActive::ActivationNoiseRange");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ImpactNoiseRange) == 2204, "Offset mismatch for UGameplayAbility_WingsuitActive::ImpactNoiseRange");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ActivationNoiseLoudness) == 2208, "Offset mismatch for UGameplayAbility_WingsuitActive::ActivationNoiseLoudness");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ImpactNoiseLoudness) == 2212, "Offset mismatch for UGameplayAbility_WingsuitActive::ImpactNoiseLoudness");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ProhibitedTargetTags) == 2216, "Offset mismatch for UGameplayAbility_WingsuitActive::ProhibitedTargetTags");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bLeadPawnTargets) == 2249, "Offset mismatch for UGameplayAbility_WingsuitActive::bLeadPawnTargets");
static_assert(offsetof(UGameplayAbility_WingsuitActive, DesiredThrowAngle) == 2252, "Offset mismatch for UGameplayAbility_WingsuitActive::DesiredThrowAngle");
static_assert(offsetof(UGameplayAbility_WingsuitActive, MaxYawAngleToFire) == 2256, "Offset mismatch for UGameplayAbility_WingsuitActive::MaxYawAngleToFire");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for UGameplayAbility_WingsuitActive::bClampMaxYawAngleToFire");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bUseTargetActorLocation) == 2261, "Offset mismatch for UGameplayAbility_WingsuitActive::bUseTargetActorLocation");
static_assert(offsetof(UGameplayAbility_WingsuitActive, InitialAccuracyMax) == 2264, "Offset mismatch for UGameplayAbility_WingsuitActive::InitialAccuracyMax");
static_assert(offsetof(UGameplayAbility_WingsuitActive, InitialAccuracyMin) == 2268, "Offset mismatch for UGameplayAbility_WingsuitActive::InitialAccuracyMin");
static_assert(offsetof(UGameplayAbility_WingsuitActive, TargetAccuracyMax) == 2272, "Offset mismatch for UGameplayAbility_WingsuitActive::TargetAccuracyMax");
static_assert(offsetof(UGameplayAbility_WingsuitActive, TargetAccuracyMin) == 2276, "Offset mismatch for UGameplayAbility_WingsuitActive::TargetAccuracyMin");
static_assert(offsetof(UGameplayAbility_WingsuitActive, MinAccuracyDistance) == 2280, "Offset mismatch for UGameplayAbility_WingsuitActive::MinAccuracyDistance");
static_assert(offsetof(UGameplayAbility_WingsuitActive, MaxAccuracyDistance) == 2284, "Offset mismatch for UGameplayAbility_WingsuitActive::MaxAccuracyDistance");
static_assert(offsetof(UGameplayAbility_WingsuitActive, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for UGameplayAbility_WingsuitActive::AccuracyDistanceMultiplier");
static_assert(offsetof(UGameplayAbility_WingsuitActive, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for UGameplayAbility_WingsuitActive::NumUsesToReachTargetAccuracy");
static_assert(offsetof(UGameplayAbility_WingsuitActive, UseCount) == 2296, "Offset mismatch for UGameplayAbility_WingsuitActive::UseCount");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bIsMobileToggle) == 2300, "Offset mismatch for UGameplayAbility_WingsuitActive::bIsMobileToggle");
static_assert(offsetof(UGameplayAbility_WingsuitActive, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for UGameplayAbility_WingsuitActive::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(UGameplayAbility_WingsuitActive, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for UGameplayAbility_WingsuitActive::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UGameplayAbility_WingsuitActive, MontageInfo) == 2424, "Offset mismatch for UGameplayAbility_WingsuitActive::MontageInfo");
static_assert(offsetof(UGameplayAbility_WingsuitActive, PreviousMontageInfo) == 2512, "Offset mismatch for UGameplayAbility_WingsuitActive::PreviousMontageInfo");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ModList) == 2600, "Offset mismatch for UGameplayAbility_WingsuitActive::ModList");
static_assert(offsetof(UGameplayAbility_WingsuitActive, AbilityWeapon) == 2616, "Offset mismatch for UGameplayAbility_WingsuitActive::AbilityWeapon");
static_assert(offsetof(UGameplayAbility_WingsuitActive, DisplayName) == 2624, "Offset mismatch for UGameplayAbility_WingsuitActive::DisplayName");
static_assert(offsetof(UGameplayAbility_WingsuitActive, Description) == 2640, "Offset mismatch for UGameplayAbility_WingsuitActive::Description");
static_assert(offsetof(UGameplayAbility_WingsuitActive, SmallPreviewImageOverride) == 2664, "Offset mismatch for UGameplayAbility_WingsuitActive::SmallPreviewImageOverride");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ChargeStartTime) == 2688, "Offset mismatch for UGameplayAbility_WingsuitActive::ChargeStartTime");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ChargeState) == 2696, "Offset mismatch for UGameplayAbility_WingsuitActive::ChargeState");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ToolTip) == 2736, "Offset mismatch for UGameplayAbility_WingsuitActive::ToolTip");
static_assert(offsetof(UGameplayAbility_WingsuitActive, StatList) == 2744, "Offset mismatch for UGameplayAbility_WingsuitActive::StatList");
static_assert(offsetof(UGameplayAbility_WingsuitActive, ActorTrackingSettings) == 2760, "Offset mismatch for UGameplayAbility_WingsuitActive::ActorTrackingSettings");
static_assert(offsetof(UGameplayAbility_WingsuitActive, AnalyticsTags) == 2800, "Offset mismatch for UGameplayAbility_WingsuitActive::AnalyticsTags");
static_assert(offsetof(UGameplayAbility_WingsuitActive, TagChangedActions) == 2832, "Offset mismatch for UGameplayAbility_WingsuitActive::TagChangedActions");

// /Script/WingSuitRuntime.JetPackGadgetAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UJetPackGadgetAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsCooldown; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0331
    std::uint8_t CooldownTagName[0x1]; // 0x0334 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJetPackGadgetAnimInstance, bIsCooldown) == 816, "Offset mismatch for UJetPackGadgetAnimInstance::bIsCooldown");
static_assert(offsetof(UJetPackGadgetAnimInstance, CooldownTagName) == 820, "Offset mismatch for UJetPackGadgetAnimInstance::CooldownTagName");

// /Script/WingSuitRuntime.WingsuitGadgetCCPAnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class UWingsuitGadgetCCPAnimInstance
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t LocalVelocity[0x18]; // 0x0630 (Size: 0x18, Type: StructProperty)
    double TiltAlpha; // 0x0648 (Size: 0x8, Type: DoubleProperty)
    double PitchAngleBetween; // 0x0650 (Size: 0x8, Type: DoubleProperty)
    double Roll; // 0x0658 (Size: 0x8, Type: DoubleProperty)
    double PoseAlpha; // 0x0660 (Size: 0x8, Type: DoubleProperty)
    double Pitch; // 0x0668 (Size: 0x8, Type: DoubleProperty)
    double PitchAngleBetweenDelta; // 0x0670 (Size: 0x8, Type: DoubleProperty)
    void* FortPlayerPawn; // 0x0678 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bFlipping; // 0x0680 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFlying; // 0x0681 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsYawTransition; // 0x0682 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLeftDirection; // 0x0683 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPredictiveLandingStart; // 0x0684 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRandomYaw; // 0x0685 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPredictiveLanding; // 0x0686 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSlowDecent; // 0x0687 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPitchTransition; // 0x0688 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsExageratedPitch; // 0x0689 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPredictiveLandingEnd; // 0x068A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsYawTransitionFinished; // 0x068B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUpDirection; // 0x068C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x068D
    std::uint8_t FlippingTagName[0x4]; // 0x0690 (Size: 0x4, Type: StructProperty)
    std::uint8_t WingSuitTagName[0x1]; // 0x0694 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, LocalVelocity) == 1584, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::LocalVelocity");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, TiltAlpha) == 1608, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::TiltAlpha");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, PitchAngleBetween) == 1616, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::PitchAngleBetween");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, Roll) == 1624, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::Roll");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, PoseAlpha) == 1632, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::PoseAlpha");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, Pitch) == 1640, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::Pitch");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, PitchAngleBetweenDelta) == 1648, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::PitchAngleBetweenDelta");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, FortPlayerPawn) == 1656, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::FortPlayerPawn");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bFlipping) == 1664, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bFlipping");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bIsFlying) == 1665, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bIsFlying");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bIsYawTransition) == 1666, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bIsYawTransition");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bIsLeftDirection) == 1667, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bIsLeftDirection");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bPredictiveLandingStart) == 1668, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bPredictiveLandingStart");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bRandomYaw) == 1669, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bRandomYaw");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bPredictiveLanding) == 1670, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bPredictiveLanding");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bIsSlowDecent) == 1671, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bIsSlowDecent");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bIsPitchTransition) == 1672, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bIsPitchTransition");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bIsExageratedPitch) == 1673, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bIsExageratedPitch");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bPredictiveLandingEnd) == 1674, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bPredictiveLandingEnd");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bIsYawTransitionFinished) == 1675, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bIsYawTransitionFinished");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, bIsUpDirection) == 1676, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::bIsUpDirection");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, FlippingTagName) == 1680, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::FlippingTagName");
static_assert(offsetof(UWingsuitGadgetCCPAnimInstance, WingSuitTagName) == 1684, "Offset mismatch for UWingsuitGadgetCCPAnimInstance::WingSuitTagName");

// /Script/WingSuitRuntime.WingsuitPhysicsFlyingLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UWingsuitPhysicsFlyingLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    void* SkeletalMesh; // 0x1170 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bWingsuitOn; // 0x1178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1179
    std::uint8_t WingSuitMeshIsOnTagName[0x1]; // 0x117C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWingsuitPhysicsFlyingLayerAnimInstance, SkeletalMesh) == 4464, "Offset mismatch for UWingsuitPhysicsFlyingLayerAnimInstance::SkeletalMesh");
static_assert(offsetof(UWingsuitPhysicsFlyingLayerAnimInstance, bWingsuitOn) == 4472, "Offset mismatch for UWingsuitPhysicsFlyingLayerAnimInstance::bWingsuitOn");
static_assert(offsetof(UWingsuitPhysicsFlyingLayerAnimInstance, WingSuitMeshIsOnTagName) == 4476, "Offset mismatch for UWingsuitPhysicsFlyingLayerAnimInstance::WingSuitMeshIsOnTagName");

// /Script/WingSuitRuntime.WingsuitPhysicsFlyingWeaponInterface
// Kind: Class; super: Interface
class UWingsuitPhysicsFlyingWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};
