/**
 * decamp dumper generated SDK
 * Package: /Script/LocomotionInitiativeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LocomotionInitiativeRuntime.FortHipRotationCorrectionRange
// Kind: ScriptStruct; super: none
struct FFortHipRotationCorrectionRange
{
public:
    float Amount; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float From; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float To; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BlendRange; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortHipRotationCorrectionRange, Amount) == 0, "Offset mismatch for FFortHipRotationCorrectionRange::Amount");
static_assert(offsetof(FFortHipRotationCorrectionRange, From) == 4, "Offset mismatch for FFortHipRotationCorrectionRange::From");
static_assert(offsetof(FFortHipRotationCorrectionRange, To) == 8, "Offset mismatch for FFortHipRotationCorrectionRange::To");
static_assert(offsetof(FFortHipRotationCorrectionRange, BlendRange) == 12, "Offset mismatch for FFortHipRotationCorrectionRange::BlendRange");

// /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataSet
// Kind: ScriptStruct; super: none
struct FFortLocomotionLayerMaskDataSet
{
public:
    float MaskingHeadTorsoAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaskingLeftArmAlpha; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaskingRightArmAlpha; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaskingWeaponAlpha; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MutingHeadTorsoAlpha; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MutingLeftArmAlpha; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MutingRightArmAlpha; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MutingWeaponAlpha; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortLocomotionLayerMaskDataSet, MaskingHeadTorsoAlpha) == 0, "Offset mismatch for FFortLocomotionLayerMaskDataSet::MaskingHeadTorsoAlpha");
static_assert(offsetof(FFortLocomotionLayerMaskDataSet, MaskingLeftArmAlpha) == 4, "Offset mismatch for FFortLocomotionLayerMaskDataSet::MaskingLeftArmAlpha");
static_assert(offsetof(FFortLocomotionLayerMaskDataSet, MaskingRightArmAlpha) == 8, "Offset mismatch for FFortLocomotionLayerMaskDataSet::MaskingRightArmAlpha");
static_assert(offsetof(FFortLocomotionLayerMaskDataSet, MaskingWeaponAlpha) == 12, "Offset mismatch for FFortLocomotionLayerMaskDataSet::MaskingWeaponAlpha");
static_assert(offsetof(FFortLocomotionLayerMaskDataSet, MutingHeadTorsoAlpha) == 16, "Offset mismatch for FFortLocomotionLayerMaskDataSet::MutingHeadTorsoAlpha");
static_assert(offsetof(FFortLocomotionLayerMaskDataSet, MutingLeftArmAlpha) == 20, "Offset mismatch for FFortLocomotionLayerMaskDataSet::MutingLeftArmAlpha");
static_assert(offsetof(FFortLocomotionLayerMaskDataSet, MutingRightArmAlpha) == 24, "Offset mismatch for FFortLocomotionLayerMaskDataSet::MutingRightArmAlpha");
static_assert(offsetof(FFortLocomotionLayerMaskDataSet, MutingWeaponAlpha) == 28, "Offset mismatch for FFortLocomotionLayerMaskDataSet::MutingWeaponAlpha");

// /Script/LocomotionInitiativeRuntime.FortMotionMatchingAngleSpamTracker
// Kind: ScriptStruct; super: none
struct FFortMotionMatchingAngleSpamTracker
{
public:
    float DirectionChangeAngleThresholdDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint32_t SpamAngleChangeCounterThreshold; // 0x0004 (Size: 0x4, Type: UInt32Property)
    float SpamDetectionWindowLengthSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SpamDetectionMaxConeAngleDegrees; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint32_t MaxSamplesPerSecond; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FFortMotionMatchingAngleSpamTracker, DirectionChangeAngleThresholdDegrees) == 0, "Offset mismatch for FFortMotionMatchingAngleSpamTracker::DirectionChangeAngleThresholdDegrees");
static_assert(offsetof(FFortMotionMatchingAngleSpamTracker, SpamAngleChangeCounterThreshold) == 4, "Offset mismatch for FFortMotionMatchingAngleSpamTracker::SpamAngleChangeCounterThreshold");
static_assert(offsetof(FFortMotionMatchingAngleSpamTracker, SpamDetectionWindowLengthSeconds) == 8, "Offset mismatch for FFortMotionMatchingAngleSpamTracker::SpamDetectionWindowLengthSeconds");
static_assert(offsetof(FFortMotionMatchingAngleSpamTracker, SpamDetectionMaxConeAngleDegrees) == 12, "Offset mismatch for FFortMotionMatchingAngleSpamTracker::SpamDetectionMaxConeAngleDegrees");
static_assert(offsetof(FFortMotionMatchingAngleSpamTracker, MaxSamplesPerSecond) == 16, "Offset mismatch for FFortMotionMatchingAngleSpamTracker::MaxSamplesPerSecond");

// /Script/LocomotionInitiativeRuntime.FortMotionMatchingSearchContext
// Kind: ScriptStruct; super: none
struct FFortMotionMatchingSearchContext
{
public:
    TArray<void*> PoseSearchDatabases; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* MotionMatchingAsset; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* PoseDatabase; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortMotionMatchingSearchContext, PoseSearchDatabases) == 0, "Offset mismatch for FFortMotionMatchingSearchContext::PoseSearchDatabases");
static_assert(offsetof(FFortMotionMatchingSearchContext, MotionMatchingAsset) == 16, "Offset mismatch for FFortMotionMatchingSearchContext::MotionMatchingAsset");
static_assert(offsetof(FFortMotionMatchingSearchContext, PoseDatabase) == 24, "Offset mismatch for FFortMotionMatchingSearchContext::PoseDatabase");

// /Script/LocomotionInitiativeRuntime.LocomotionInitiativeRecordedInputEntry
// Kind: ScriptStruct; super: none
struct FLocomotionInitiativeRecordedInputEntry
{
public:
    std::uint8_t InputVector[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t ControlRotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float Timestamp; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLocomotionInitiativeRecordedInputEntry, InputVector) == 0, "Offset mismatch for FLocomotionInitiativeRecordedInputEntry::InputVector");
static_assert(offsetof(FLocomotionInitiativeRecordedInputEntry, ControlRotation) == 24, "Offset mismatch for FLocomotionInitiativeRecordedInputEntry::ControlRotation");
static_assert(offsetof(FLocomotionInitiativeRecordedInputEntry, Timestamp) == 48, "Offset mismatch for FLocomotionInitiativeRecordedInputEntry::Timestamp");

// /Script/LocomotionInitiativeRuntime.LocomotionInitiativeScriptedPlayerInputEntry
// Kind: ScriptStruct; super: none
struct FLocomotionInitiativeScriptedPlayerInputEntry
{
public:
    std::uint8_t bWait; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReachMoveInputOvertime; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReachMoveInputUsingShortestPath; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSeparateAxisInput; // 0x0003 (Size: 0x1, Type: BoolProperty)
    float MoveDirection; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MoveScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ForwardInput; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RightInput; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReachCameraRotationOvertime; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    float CameraYawRotationInput; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float DurationInSeconds; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, bWait) == 0, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::bWait");
static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, bReachMoveInputOvertime) == 1, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::bReachMoveInputOvertime");
static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, bReachMoveInputUsingShortestPath) == 2, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::bReachMoveInputUsingShortestPath");
static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, bUseSeparateAxisInput) == 3, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::bUseSeparateAxisInput");
static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, MoveDirection) == 4, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::MoveDirection");
static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, MoveScale) == 8, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::MoveScale");
static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, ForwardInput) == 12, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::ForwardInput");
static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, RightInput) == 16, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::RightInput");
static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, bReachCameraRotationOvertime) == 20, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::bReachCameraRotationOvertime");
static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, CameraYawRotationInput) == 24, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::CameraYawRotationInput");
static_assert(offsetof(FLocomotionInitiativeScriptedPlayerInputEntry, DurationInSeconds) == 28, "Offset mismatch for FLocomotionInitiativeScriptedPlayerInputEntry::DurationInSeconds");

// /Script/LocomotionInitiativeRuntime.MotionMatchingBlendInfo
// Kind: ScriptStruct; super: none
struct FMotionMatchingBlendInfo
{
public:
    float BlendTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    FName BlendProfile; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMotionMatchingBlendInfo, BlendTime) == 0, "Offset mismatch for FMotionMatchingBlendInfo::BlendTime");
static_assert(offsetof(FMotionMatchingBlendInfo, BlendProfile) == 4, "Offset mismatch for FMotionMatchingBlendInfo::BlendProfile");

// /Script/LocomotionInitiativeRuntime.MotionMatchingLODConfig
// Kind: ScriptStruct; super: none
struct FMotionMatchingLODConfig
{
public:
    void* MotionDatabaseProxyTable; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* StandIdleLoop; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* CrouchIdleLoop; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StandIdleBreak; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CrouchIdleBreak; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float PivotAngleThresholdWalk; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float PivotAngleThresholdJog; // 0x003C (Size: 0x4, Type: FloatProperty)
    float PivotAngleThresholdRun; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float PivotAngleThresholdSprint; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMotionMatchingLODConfig, MotionDatabaseProxyTable) == 0, "Offset mismatch for FMotionMatchingLODConfig::MotionDatabaseProxyTable");
static_assert(offsetof(FMotionMatchingLODConfig, StandIdleLoop) == 8, "Offset mismatch for FMotionMatchingLODConfig::StandIdleLoop");
static_assert(offsetof(FMotionMatchingLODConfig, CrouchIdleLoop) == 16, "Offset mismatch for FMotionMatchingLODConfig::CrouchIdleLoop");
static_assert(offsetof(FMotionMatchingLODConfig, StandIdleBreak) == 24, "Offset mismatch for FMotionMatchingLODConfig::StandIdleBreak");
static_assert(offsetof(FMotionMatchingLODConfig, CrouchIdleBreak) == 40, "Offset mismatch for FMotionMatchingLODConfig::CrouchIdleBreak");
static_assert(offsetof(FMotionMatchingLODConfig, PivotAngleThresholdWalk) == 56, "Offset mismatch for FMotionMatchingLODConfig::PivotAngleThresholdWalk");
static_assert(offsetof(FMotionMatchingLODConfig, PivotAngleThresholdJog) == 60, "Offset mismatch for FMotionMatchingLODConfig::PivotAngleThresholdJog");
static_assert(offsetof(FMotionMatchingLODConfig, PivotAngleThresholdRun) == 64, "Offset mismatch for FMotionMatchingLODConfig::PivotAngleThresholdRun");
static_assert(offsetof(FMotionMatchingLODConfig, PivotAngleThresholdSprint) == 68, "Offset mismatch for FMotionMatchingLODConfig::PivotAngleThresholdSprint");

// /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataAsset
// Kind: Class; super: DataAsset
class UFortLocomotionLayerMaskDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float MaskingHeadTorsoAlpha; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MaskingLeftArmAlpha; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MaskingRightArmAlpha; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MaskingWeaponAlpha; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MutingHeadTorsoAlpha; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float MutingLeftArmAlpha; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MutingRightArmAlpha; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float MutingWeaponAlpha; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortLocomotionLayerMaskDataAsset, MaskingHeadTorsoAlpha) == 40, "Offset mismatch for UFortLocomotionLayerMaskDataAsset::MaskingHeadTorsoAlpha");
static_assert(offsetof(UFortLocomotionLayerMaskDataAsset, MaskingLeftArmAlpha) == 44, "Offset mismatch for UFortLocomotionLayerMaskDataAsset::MaskingLeftArmAlpha");
static_assert(offsetof(UFortLocomotionLayerMaskDataAsset, MaskingRightArmAlpha) == 48, "Offset mismatch for UFortLocomotionLayerMaskDataAsset::MaskingRightArmAlpha");
static_assert(offsetof(UFortLocomotionLayerMaskDataAsset, MaskingWeaponAlpha) == 52, "Offset mismatch for UFortLocomotionLayerMaskDataAsset::MaskingWeaponAlpha");
static_assert(offsetof(UFortLocomotionLayerMaskDataAsset, MutingHeadTorsoAlpha) == 56, "Offset mismatch for UFortLocomotionLayerMaskDataAsset::MutingHeadTorsoAlpha");
static_assert(offsetof(UFortLocomotionLayerMaskDataAsset, MutingLeftArmAlpha) == 60, "Offset mismatch for UFortLocomotionLayerMaskDataAsset::MutingLeftArmAlpha");
static_assert(offsetof(UFortLocomotionLayerMaskDataAsset, MutingRightArmAlpha) == 64, "Offset mismatch for UFortLocomotionLayerMaskDataAsset::MutingRightArmAlpha");
static_assert(offsetof(UFortLocomotionLayerMaskDataAsset, MutingWeaponAlpha) == 68, "Offset mismatch for UFortLocomotionLayerMaskDataAsset::MutingWeaponAlpha");

// /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFortPlayerMotionMatchingLocomotionAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t MotionMatchingSearchContext[0x70]; // 0x1170 (Size: 0x70, Type: StructProperty)
    TArray<void*> HipCorrections; // 0x11E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FutureRootMotionVelocity[0x18]; // 0x11F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TestConfig[0x48]; // 0x1208 (Size: 0x48, Type: StructProperty)
    std::uint8_t LowEndTestConfig[0x48]; // 0x1250 (Size: 0x48, Type: StructProperty)
    std::uint8_t HighEndConfig[0x48]; // 0x1298 (Size: 0x48, Type: StructProperty)
    std::uint8_t LowEndConfig[0x48]; // 0x12E0 (Size: 0x48, Type: StructProperty)
    std::uint8_t CurrentLODConfig[0x48]; // 0x1328 (Size: 0x48, Type: StructProperty)
    void* CustomMotionMatchingDataProxyTable; // 0x1370 (Size: 0x8, Type: ObjectProperty)
    void* CustomMotionMatchingPoseSearchProxyAsset; // 0x1378 (Size: 0x8, Type: ObjectProperty)
    void* CustomMotionMatchingConfigProxyAsset; // 0x1380 (Size: 0x8, Type: ObjectProperty)
    void* CustomMotionMatchingConfig; // 0x1388 (Size: 0x8, Type: ObjectProperty)
    void* StandIdleOverride; // 0x1390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasStandIdleOverride; // 0x1398 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x1399
    void* SelectedIdleBreak; // 0x13A0 (Size: 0x8, Type: ObjectProperty)
    void* MotionMatchingLODProxyAsset; // 0x13A8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MotionMatchingLOD; // 0x13B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t MotionMatchingBlendInfo[0xC]; // 0x13B4 (Size: 0xC, Type: StructProperty)
    void* StopBranchOutWindowNotifyClass; // 0x13C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t LocomotionState; // 0x13C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x13C9
    float StartToLoopSearchDelaySeconds; // 0x13CC (Size: 0x4, Type: FloatProperty)
    float PivotToLoopSearchDelaySeconds; // 0x13D0 (Size: 0x4, Type: FloatProperty)
    float PivotSpeedThreshold; // 0x13D4 (Size: 0x4, Type: FloatProperty)
    float LargePivotAngleThreshold; // 0x13D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsLargePivot; // 0x13DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x13DD
    float MinSpeedToSkipStartOnForwardConeLanding; // 0x13E0 (Size: 0x4, Type: FloatProperty)
    float PivotDotProductThresholdWalk; // 0x13E4 (Size: 0x4, Type: FloatProperty)
    float PivotDotProductThresholdJog; // 0x13E8 (Size: 0x4, Type: FloatProperty)
    float PivotDotProductThresholdRun; // 0x13EC (Size: 0x4, Type: FloatProperty)
    float PivotDotProductThresholdSprint; // 0x13F0 (Size: 0x4, Type: FloatProperty)
    float DiagonalDetectionThreshold; // 0x13F4 (Size: 0x4, Type: FloatProperty)
    float LocomotionStateTime; // 0x13F8 (Size: 0x4, Type: FloatProperty)
    float VelocityDirection; // 0x13FC (Size: 0x4, Type: FloatProperty)
    float MotionMatchingWeight; // 0x1400 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DatabaseSearchInterruptMode; // 0x1404 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x1405
    std::uint8_t PelvisRotationAdjustment[0x18]; // 0x1408 (Size: 0x18, Type: StructProperty)
    float CurrentHipFireHipCorrection; // 0x1420 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseOrientationWarping; // 0x1424 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x1425
    float OrientationWarpingAlpha; // 0x1428 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseFutureForOrientationWarping; // 0x142C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLowEnd; // 0x142D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasLowEnd; // 0x142E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLocomotionBlendspace; // 0x142F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayIdle; // 0x1430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayIdleBreak; // 0x1431 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldExitIdleBreak; // 0x1432 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldExitIdleBreakSlow; // 0x1433 (Size: 0x1, Type: BoolProperty)
    float IdleTransitionTimer; // 0x1434 (Size: 0x4, Type: FloatProperty)
    float IdleBreakTimer; // 0x1438 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBothHandsIKInHandSpace; // 0x143C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCrouchedTransition; // 0x143D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasCrouching; // 0x143E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayStandToCrouchTransition; // 0x143F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayCrouchToStandTransition; // 0x1440 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldExitCrouchTransition; // 0x1441 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocallyControlled; // 0x1442 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableHipCorrection; // 0x1443 (Size: 0x1, Type: BoolProperty)
    float HipFiringStanceTimeStamp; // 0x1444 (Size: 0x4, Type: FloatProperty)
    float CameraSpamYawThreshold; // 0x1448 (Size: 0x4, Type: FloatProperty)
    float CameraSpamCoolDownSeconds; // 0x144C (Size: 0x4, Type: FloatProperty)
    float CameraSpamSearchThrottleTime; // 0x1450 (Size: 0x4, Type: FloatProperty)
    float DefaultSearchThrottleTime; // 0x1454 (Size: 0x4, Type: FloatProperty)
    float PlayRateMultiplier; // 0x1458 (Size: 0x4, Type: FloatProperty)
    float SearchThrottleTime; // 0x145C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldExecuteMotionMatchingSearch; // 0x1460 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x1461
    float MaximumLeanAngle; // 0x1464 (Size: 0x4, Type: FloatProperty)
    float AdditiveLeanAlpha; // 0x1468 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableArcs; // 0x146C (Size: 0x1, Type: BoolProperty)
    // 0x146C BoolProperty bDisableDiamonds (shared storage)
    // 0x146C BoolProperty bEnableAdditiveLeans (shared storage)
    // 0x146C BoolProperty bEnableAdditiveRunLeans (shared storage)
    // 0x146C BoolProperty bIdleToMotionMatchingCrouchTransition (shared storage)
    // 0x146C BoolProperty bIdleToMotionMatchingNoInertialization (shared storage)
    // 0x146C BoolProperty bIsMelee (shared storage)
    // 0x146C BoolProperty bRelaxedStateChanged (shared storage)
    std::uint8_t bIsJogging; // 0x146D (Size: 0x1, Type: BoolProperty)
    // 0x146D BoolProperty bIsJoggingInForwardCone (shared storage)
    // 0x146D BoolProperty bIsRunning (shared storage)
    // 0x146D BoolProperty bIsWalking (shared storage)
    // 0x146D BoolProperty bPlayJogToRunTransition (shared storage)
    // 0x146D BoolProperty bPlayRunToJogTransition (shared storage)
    // 0x146D BoolProperty bPlayRunToSprintTransition (shared storage)
    // 0x146D BoolProperty bUseRelaxedMotionMatchingData (shared storage)
    std::uint8_t bUseLowLODLocomotion; // 0x146E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x1]; // 0x146F
    float PreviousLocalVelocityYawAngle; // 0x1470 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x4]; // 0x1474
    std::uint8_t Trajectory[0x10]; // 0x1478 (Size: 0x10, Type: StructProperty)
    std::uint8_t TrajectorySamplingData[0x28]; // 0x1488 (Size: 0x28, Type: StructProperty)
    std::uint8_t CharacterTrajectoryData[0x190]; // 0x14B0 (Size: 0x190, Type: StructProperty)
    float TrajectorySpeedMultiplier; // 0x1640 (Size: 0x4, Type: FloatProperty)
    float LowFrictionCustomMaxSpeed; // 0x1644 (Size: 0x4, Type: FloatProperty)
    float LowFrictionMeleeTwistCustomMaxSpeed; // 0x1648 (Size: 0x4, Type: FloatProperty)
    float LowFrictionCrouchMeleeTwistCustomMaxSpeed; // 0x164C (Size: 0x4, Type: FloatProperty)
    float MeleeTwistBlendSpacePawnSpeed; // 0x1650 (Size: 0x4, Type: FloatProperty)
    float LowFrictionCustomBrakingDeceleration; // 0x1654 (Size: 0x4, Type: FloatProperty)
    float LowFrictionCustomFriction; // 0x1658 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0009[0x4]; // 0x165C
    std::uint8_t AccelerationSpamTracker[0x58]; // 0x1660 (Size: 0x58, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x16B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PrevVelocity[0x18]; // 0x16D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Acceleration[0x18]; // 0x16E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SmoothedAcceleration[0x18]; // 0x1700 (Size: 0x18, Type: StructProperty)
    std::uint8_t PawnFacing[0x28]; // 0x1718 (Size: 0x28, Type: StructProperty)
    std::uint8_t FortMovementStyle; // 0x1740 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_000A[0x2]; // 0x1741
    std::uint8_t bIsPlayingIdleBreak; // 0x1743 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0xC]; // 0x1744
    std::int32_t LastUpdateFrame; // 0x1750 (Size: 0x4, Type: IntProperty)
    std::int32_t LastMotionMatchingUpdateFrame; // 0x1754 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsPlayingInterruptibleStop; // 0x1758 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayingIdleDatabase; // 0x1759 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayingStopDatabase; // 0x175A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasReachedIdle; // 0x175B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasInAir; // 0x175C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x3]; // 0x175D
    float DefaultBendVelocityTowardsAcceleration; // 0x1760 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bActiveLastFrame; // 0x1764 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, MotionMatchingSearchContext) == 4464, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::MotionMatchingSearchContext");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, HipCorrections) == 4576, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::HipCorrections");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, FutureRootMotionVelocity) == 4592, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::FutureRootMotionVelocity");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, TestConfig) == 4616, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::TestConfig");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LowEndTestConfig) == 4688, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LowEndTestConfig");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, HighEndConfig) == 4760, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::HighEndConfig");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LowEndConfig) == 4832, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LowEndConfig");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, CurrentLODConfig) == 4904, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::CurrentLODConfig");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, CustomMotionMatchingDataProxyTable) == 4976, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::CustomMotionMatchingDataProxyTable");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, CustomMotionMatchingPoseSearchProxyAsset) == 4984, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::CustomMotionMatchingPoseSearchProxyAsset");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, CustomMotionMatchingConfigProxyAsset) == 4992, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::CustomMotionMatchingConfigProxyAsset");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, CustomMotionMatchingConfig) == 5000, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::CustomMotionMatchingConfig");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, StandIdleOverride) == 5008, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::StandIdleOverride");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bHasStandIdleOverride) == 5016, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bHasStandIdleOverride");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, SelectedIdleBreak) == 5024, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::SelectedIdleBreak");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, MotionMatchingLODProxyAsset) == 5032, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::MotionMatchingLODProxyAsset");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, MotionMatchingLOD) == 5040, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::MotionMatchingLOD");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, MotionMatchingBlendInfo) == 5044, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::MotionMatchingBlendInfo");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, StopBranchOutWindowNotifyClass) == 5056, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::StopBranchOutWindowNotifyClass");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LocomotionState) == 5064, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LocomotionState");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, StartToLoopSearchDelaySeconds) == 5068, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::StartToLoopSearchDelaySeconds");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PivotToLoopSearchDelaySeconds) == 5072, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PivotToLoopSearchDelaySeconds");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PivotSpeedThreshold) == 5076, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PivotSpeedThreshold");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LargePivotAngleThreshold) == 5080, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LargePivotAngleThreshold");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bIsLargePivot) == 5084, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bIsLargePivot");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, MinSpeedToSkipStartOnForwardConeLanding) == 5088, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::MinSpeedToSkipStartOnForwardConeLanding");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PivotDotProductThresholdWalk) == 5092, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PivotDotProductThresholdWalk");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PivotDotProductThresholdJog) == 5096, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PivotDotProductThresholdJog");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PivotDotProductThresholdRun) == 5100, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PivotDotProductThresholdRun");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PivotDotProductThresholdSprint) == 5104, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PivotDotProductThresholdSprint");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, DiagonalDetectionThreshold) == 5108, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::DiagonalDetectionThreshold");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LocomotionStateTime) == 5112, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LocomotionStateTime");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, VelocityDirection) == 5116, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::VelocityDirection");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, MotionMatchingWeight) == 5120, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::MotionMatchingWeight");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, DatabaseSearchInterruptMode) == 5124, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::DatabaseSearchInterruptMode");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PelvisRotationAdjustment) == 5128, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PelvisRotationAdjustment");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, CurrentHipFireHipCorrection) == 5152, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::CurrentHipFireHipCorrection");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bUseOrientationWarping) == 5156, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bUseOrientationWarping");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, OrientationWarpingAlpha) == 5160, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::OrientationWarpingAlpha");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bUseFutureForOrientationWarping) == 5164, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bUseFutureForOrientationWarping");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bIsLowEnd) == 5165, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bIsLowEnd");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bWasLowEnd) == 5166, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bWasLowEnd");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bUseLocomotionBlendspace) == 5167, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bUseLocomotionBlendspace");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bShouldPlayIdle) == 5168, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bShouldPlayIdle");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bShouldPlayIdleBreak) == 5169, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bShouldPlayIdleBreak");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bShouldExitIdleBreak) == 5170, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bShouldExitIdleBreak");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bShouldExitIdleBreakSlow) == 5171, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bShouldExitIdleBreakSlow");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, IdleTransitionTimer) == 5172, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::IdleTransitionTimer");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, IdleBreakTimer) == 5176, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::IdleBreakTimer");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bBothHandsIKInHandSpace) == 5180, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bBothHandsIKInHandSpace");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bIsCrouchedTransition) == 5181, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bIsCrouchedTransition");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bWasCrouching) == 5182, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bWasCrouching");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bShouldPlayStandToCrouchTransition) == 5183, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bShouldPlayStandToCrouchTransition");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bShouldPlayCrouchToStandTransition) == 5184, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bShouldPlayCrouchToStandTransition");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bShouldExitCrouchTransition) == 5185, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bShouldExitCrouchTransition");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bIsLocallyControlled) == 5186, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bIsLocallyControlled");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bEnableHipCorrection) == 5187, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bEnableHipCorrection");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, HipFiringStanceTimeStamp) == 5188, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::HipFiringStanceTimeStamp");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, CameraSpamYawThreshold) == 5192, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::CameraSpamYawThreshold");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, CameraSpamCoolDownSeconds) == 5196, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::CameraSpamCoolDownSeconds");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, CameraSpamSearchThrottleTime) == 5200, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::CameraSpamSearchThrottleTime");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, DefaultSearchThrottleTime) == 5204, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::DefaultSearchThrottleTime");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PlayRateMultiplier) == 5208, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PlayRateMultiplier");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, SearchThrottleTime) == 5212, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::SearchThrottleTime");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bShouldExecuteMotionMatchingSearch) == 5216, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bShouldExecuteMotionMatchingSearch");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, MaximumLeanAngle) == 5220, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::MaximumLeanAngle");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, AdditiveLeanAlpha) == 5224, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::AdditiveLeanAlpha");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bDisableArcs) == 5228, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bDisableArcs");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bIsJogging) == 5229, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bIsJogging");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bUseLowLODLocomotion) == 5230, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bUseLowLODLocomotion");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PreviousLocalVelocityYawAngle) == 5232, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PreviousLocalVelocityYawAngle");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, Trajectory) == 5240, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::Trajectory");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, TrajectorySamplingData) == 5256, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::TrajectorySamplingData");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, CharacterTrajectoryData) == 5296, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::CharacterTrajectoryData");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, TrajectorySpeedMultiplier) == 5696, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::TrajectorySpeedMultiplier");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LowFrictionCustomMaxSpeed) == 5700, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LowFrictionCustomMaxSpeed");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LowFrictionMeleeTwistCustomMaxSpeed) == 5704, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LowFrictionMeleeTwistCustomMaxSpeed");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LowFrictionCrouchMeleeTwistCustomMaxSpeed) == 5708, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LowFrictionCrouchMeleeTwistCustomMaxSpeed");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, MeleeTwistBlendSpacePawnSpeed) == 5712, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::MeleeTwistBlendSpacePawnSpeed");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LowFrictionCustomBrakingDeceleration) == 5716, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LowFrictionCustomBrakingDeceleration");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LowFrictionCustomFriction) == 5720, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LowFrictionCustomFriction");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, AccelerationSpamTracker) == 5728, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::AccelerationSpamTracker");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, Velocity) == 5816, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::Velocity");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PrevVelocity) == 5840, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PrevVelocity");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, Acceleration) == 5864, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::Acceleration");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, SmoothedAcceleration) == 5888, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::SmoothedAcceleration");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, PawnFacing) == 5912, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::PawnFacing");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, FortMovementStyle) == 5952, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::FortMovementStyle");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bIsPlayingIdleBreak) == 5955, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bIsPlayingIdleBreak");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LastUpdateFrame) == 5968, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LastUpdateFrame");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, LastMotionMatchingUpdateFrame) == 5972, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::LastMotionMatchingUpdateFrame");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bIsPlayingInterruptibleStop) == 5976, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bIsPlayingInterruptibleStop");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bIsPlayingIdleDatabase) == 5977, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bIsPlayingIdleDatabase");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bIsPlayingStopDatabase) == 5978, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bIsPlayingStopDatabase");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bHasReachedIdle) == 5979, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bHasReachedIdle");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bWasInAir) == 5980, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bWasInAir");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, DefaultBendVelocityTowardsAcceleration) == 5984, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::DefaultBendVelocityTowardsAcceleration");
static_assert(offsetof(UFortPlayerMotionMatchingLocomotionAnimInstance, bActiveLastFrame) == 5988, "Offset mismatch for UFortPlayerMotionMatchingLocomotionAnimInstance::bActiveLastFrame");

// /Script/LocomotionInitiativeRuntime.LocomotionInitiativeComponent
// Kind: Class; super: ActorComponent
class ULocomotionInitiativeComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* MotionMatchingLocomotionAnimBlueprintClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* RigidBodyPBA_AnimBlueprintClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t IsLocomotionInitiativeEnabled[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    void* CrouchShuffleInPlaceAnim; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULocomotionInitiativeComponent, MotionMatchingLocomotionAnimBlueprintClass) == 200, "Offset mismatch for ULocomotionInitiativeComponent::MotionMatchingLocomotionAnimBlueprintClass");
static_assert(offsetof(ULocomotionInitiativeComponent, RigidBodyPBA_AnimBlueprintClass) == 208, "Offset mismatch for ULocomotionInitiativeComponent::RigidBodyPBA_AnimBlueprintClass");
static_assert(offsetof(ULocomotionInitiativeComponent, IsLocomotionInitiativeEnabled) == 216, "Offset mismatch for ULocomotionInitiativeComponent::IsLocomotionInitiativeEnabled");
static_assert(offsetof(ULocomotionInitiativeComponent, CrouchShuffleInPlaceAnim) == 256, "Offset mismatch for ULocomotionInitiativeComponent::CrouchShuffleInPlaceAnim");

// /Script/LocomotionInitiativeRuntime.LocomotionInitiativeGameFeatureData
// Kind: Class; super: FortGameFeatureData
class ULocomotionInitiativeGameFeatureData
{
public:
    std::uint8_t Pad_0000[0x448]; // 0x0000
    std::uint8_t EnableRequestedFullBodyPBAByDefault[0x18]; // 0x0448 (Size: 0x18, Type: StructProperty)
    std::uint8_t EnableSkydivingFullBodyPBAByDefault[0x18]; // 0x0460 (Size: 0x18, Type: StructProperty)
    std::uint8_t EnableDBNOCarriedFullBodyPBAByDefault[0x18]; // 0x0478 (Size: 0x18, Type: StructProperty)
    std::uint8_t SkydivingEnablePhysicsBasedAnimationByDefault[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULocomotionInitiativeGameFeatureData, EnableRequestedFullBodyPBAByDefault) == 1096, "Offset mismatch for ULocomotionInitiativeGameFeatureData::EnableRequestedFullBodyPBAByDefault");
static_assert(offsetof(ULocomotionInitiativeGameFeatureData, EnableSkydivingFullBodyPBAByDefault) == 1120, "Offset mismatch for ULocomotionInitiativeGameFeatureData::EnableSkydivingFullBodyPBAByDefault");
static_assert(offsetof(ULocomotionInitiativeGameFeatureData, EnableDBNOCarriedFullBodyPBAByDefault) == 1144, "Offset mismatch for ULocomotionInitiativeGameFeatureData::EnableDBNOCarriedFullBodyPBAByDefault");
static_assert(offsetof(ULocomotionInitiativeGameFeatureData, SkydivingEnablePhysicsBasedAnimationByDefault) == 1168, "Offset mismatch for ULocomotionInitiativeGameFeatureData::SkydivingEnablePhysicsBasedAnimationByDefault");
