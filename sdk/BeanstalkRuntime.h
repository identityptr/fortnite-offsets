/**
 * decamp dumper generated SDK
 * Package: /Script/BeanstalkRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BeanstalkRuntime.BeanAudioKey
// Kind: ScriptStruct; super: none
struct FBeanAudioKey
{
public:
    std::uint8_t AudioEventType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t AudioCategory; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FBeanAudioKey, AudioEventType) == 0, "Offset mismatch for FBeanAudioKey::AudioEventType");
static_assert(offsetof(FBeanAudioKey, AudioCategory) == 4, "Offset mismatch for FBeanAudioKey::AudioCategory");

// /Script/BeanstalkRuntime.BeanAudioSet
// Kind: ScriptStruct; super: none
struct FBeanAudioSet
{
public:
    TArray<void*> SoundClips2D; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SoundClips3D; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBeanAudioSet, SoundClips2D) == 0, "Offset mismatch for FBeanAudioSet::SoundClips2D");
static_assert(offsetof(FBeanAudioSet, SoundClips3D) == 16, "Offset mismatch for FBeanAudioSet::SoundClips3D");

// /Script/BeanstalkRuntime.BeanCharCameraConfig
// Kind: ScriptStruct; super: none
struct FBeanCharCameraConfig
{
public:
    void* CameraMode; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* OverrideVehicleCameraMode; // 0x0008 (Size: 0x8, Type: ClassProperty)
    float EnableDragAfterTeleportTimeout; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanCharCameraConfig, CameraMode) == 0, "Offset mismatch for FBeanCharCameraConfig::CameraMode");
static_assert(offsetof(FBeanCharCameraConfig, OverrideVehicleCameraMode) == 8, "Offset mismatch for FBeanCharCameraConfig::OverrideVehicleCameraMode");
static_assert(offsetof(FBeanCharCameraConfig, EnableDragAfterTeleportTimeout) == 16, "Offset mismatch for FBeanCharCameraConfig::EnableDragAfterTeleportTimeout");

// /Script/BeanstalkRuntime.BeanCharCollisionResponseData
// Kind: ScriptStruct; super: none
struct FBeanCharCollisionResponseData
{
public:
    float ImpactThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bActivateKnockback; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateRagdoll; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ImpactAnimType; // 0x0006 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPlayImpactVFX; // 0x0007 (Size: 0x1, Type: BoolProperty)
    void* ForceFeedbackEffect; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bPlayFeedbackOnLand; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayFeedbackOnLaunch; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBeanCharCollisionResponseData, ImpactThreshold) == 0, "Offset mismatch for FBeanCharCollisionResponseData::ImpactThreshold");
static_assert(offsetof(FBeanCharCollisionResponseData, bActivateKnockback) == 4, "Offset mismatch for FBeanCharCollisionResponseData::bActivateKnockback");
static_assert(offsetof(FBeanCharCollisionResponseData, bActivateRagdoll) == 5, "Offset mismatch for FBeanCharCollisionResponseData::bActivateRagdoll");
static_assert(offsetof(FBeanCharCollisionResponseData, ImpactAnimType) == 6, "Offset mismatch for FBeanCharCollisionResponseData::ImpactAnimType");
static_assert(offsetof(FBeanCharCollisionResponseData, bPlayImpactVFX) == 7, "Offset mismatch for FBeanCharCollisionResponseData::bPlayImpactVFX");
static_assert(offsetof(FBeanCharCollisionResponseData, ForceFeedbackEffect) == 8, "Offset mismatch for FBeanCharCollisionResponseData::ForceFeedbackEffect");
static_assert(offsetof(FBeanCharCollisionResponseData, bPlayFeedbackOnLand) == 16, "Offset mismatch for FBeanCharCollisionResponseData::bPlayFeedbackOnLand");
static_assert(offsetof(FBeanCharCollisionResponseData, bPlayFeedbackOnLaunch) == 17, "Offset mismatch for FBeanCharCollisionResponseData::bPlayFeedbackOnLaunch");

// /Script/BeanstalkRuntime.BeanCharCosmeticConfig
// Kind: ScriptStruct; super: none
struct FBeanCharCosmeticConfig
{
public:
    TArray<void*> DefaultEmotes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBeanCharCosmeticConfig, DefaultEmotes) == 0, "Offset mismatch for FBeanCharCosmeticConfig::DefaultEmotes");

// /Script/BeanstalkRuntime.BeanCharDiveConfig
// Kind: ScriptStruct; super: none
struct FBeanCharDiveConfig
{
public:
    float GroundDiveVelocity; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float GroundDiveAngle; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AirDiveVelocity; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AirDiveAngle; // 0x000C (Size: 0x4, Type: FloatProperty)
    double HorizontalVelocityConservePercentageNormalized; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    float TurnSpeedDiving; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float GroundTimeBeforeGetup; // 0x001C (Size: 0x4, Type: FloatProperty)
    float LandingVelocityReductionPercentageNormalized; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    void* DiveRotationCurve; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ParticleEmitterScale[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    double ParticleSpawnZOffset; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bLaunchZOverrideResetsDive; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLaunchXYOverrideResetsDive; // 0x0051 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBeanCharDiveConfig, GroundDiveVelocity) == 0, "Offset mismatch for FBeanCharDiveConfig::GroundDiveVelocity");
static_assert(offsetof(FBeanCharDiveConfig, GroundDiveAngle) == 4, "Offset mismatch for FBeanCharDiveConfig::GroundDiveAngle");
static_assert(offsetof(FBeanCharDiveConfig, AirDiveVelocity) == 8, "Offset mismatch for FBeanCharDiveConfig::AirDiveVelocity");
static_assert(offsetof(FBeanCharDiveConfig, AirDiveAngle) == 12, "Offset mismatch for FBeanCharDiveConfig::AirDiveAngle");
static_assert(offsetof(FBeanCharDiveConfig, HorizontalVelocityConservePercentageNormalized) == 16, "Offset mismatch for FBeanCharDiveConfig::HorizontalVelocityConservePercentageNormalized");
static_assert(offsetof(FBeanCharDiveConfig, TurnSpeedDiving) == 24, "Offset mismatch for FBeanCharDiveConfig::TurnSpeedDiving");
static_assert(offsetof(FBeanCharDiveConfig, GroundTimeBeforeGetup) == 28, "Offset mismatch for FBeanCharDiveConfig::GroundTimeBeforeGetup");
static_assert(offsetof(FBeanCharDiveConfig, LandingVelocityReductionPercentageNormalized) == 32, "Offset mismatch for FBeanCharDiveConfig::LandingVelocityReductionPercentageNormalized");
static_assert(offsetof(FBeanCharDiveConfig, DiveRotationCurve) == 40, "Offset mismatch for FBeanCharDiveConfig::DiveRotationCurve");
static_assert(offsetof(FBeanCharDiveConfig, ParticleEmitterScale) == 48, "Offset mismatch for FBeanCharDiveConfig::ParticleEmitterScale");
static_assert(offsetof(FBeanCharDiveConfig, ParticleSpawnZOffset) == 72, "Offset mismatch for FBeanCharDiveConfig::ParticleSpawnZOffset");
static_assert(offsetof(FBeanCharDiveConfig, bLaunchZOverrideResetsDive) == 80, "Offset mismatch for FBeanCharDiveConfig::bLaunchZOverrideResetsDive");
static_assert(offsetof(FBeanCharDiveConfig, bLaunchXYOverrideResetsDive) == 81, "Offset mismatch for FBeanCharDiveConfig::bLaunchXYOverrideResetsDive");

// /Script/BeanstalkRuntime.BeanCharGetupConfig
// Kind: ScriptStruct; super: none
struct FBeanCharGetupConfig
{
public:
    float AnimationRate; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* MotionTimeCurve; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float RunSpeedMultiplier; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TurnSpeedOverride; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float RestoreMovementAfterDurationNormalized; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float EarlyExitStateDurationNormalized; // 0x001C (Size: 0x4, Type: FloatProperty)
    float GetupAnimationThresholdPitch; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SkipAnimationRotationDuration; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanCharGetupConfig, AnimationRate) == 0, "Offset mismatch for FBeanCharGetupConfig::AnimationRate");
static_assert(offsetof(FBeanCharGetupConfig, MotionTimeCurve) == 8, "Offset mismatch for FBeanCharGetupConfig::MotionTimeCurve");
static_assert(offsetof(FBeanCharGetupConfig, RunSpeedMultiplier) == 16, "Offset mismatch for FBeanCharGetupConfig::RunSpeedMultiplier");
static_assert(offsetof(FBeanCharGetupConfig, TurnSpeedOverride) == 20, "Offset mismatch for FBeanCharGetupConfig::TurnSpeedOverride");
static_assert(offsetof(FBeanCharGetupConfig, RestoreMovementAfterDurationNormalized) == 24, "Offset mismatch for FBeanCharGetupConfig::RestoreMovementAfterDurationNormalized");
static_assert(offsetof(FBeanCharGetupConfig, EarlyExitStateDurationNormalized) == 28, "Offset mismatch for FBeanCharGetupConfig::EarlyExitStateDurationNormalized");
static_assert(offsetof(FBeanCharGetupConfig, GetupAnimationThresholdPitch) == 32, "Offset mismatch for FBeanCharGetupConfig::GetupAnimationThresholdPitch");
static_assert(offsetof(FBeanCharGetupConfig, SkipAnimationRotationDuration) == 36, "Offset mismatch for FBeanCharGetupConfig::SkipAnimationRotationDuration");

// /Script/BeanstalkRuntime.BeanCharGetupRollConfig
// Kind: ScriptStruct; super: none
struct FBeanCharGetupRollConfig
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* MotionTimeCurve; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBeanCharGetupRollConfig, duration) == 0, "Offset mismatch for FBeanCharGetupRollConfig::duration");
static_assert(offsetof(FBeanCharGetupRollConfig, MotionTimeCurve) == 8, "Offset mismatch for FBeanCharGetupRollConfig::MotionTimeCurve");

// /Script/BeanstalkRuntime.BeanCharGrabConfig
// Kind: ScriptStruct; super: none
struct FBeanCharGrabConfig
{
public:
    float GrabbedJumpForceMultiplier; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float GrabRadius; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float GrabTargetCheckHeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float UngrabDistanceAny; // 0x000C (Size: 0x4, Type: FloatProperty)
    float UngrabDistanceVertical; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float GrabbingRunSpeedMultiplier; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float HoldingRunSpeedMultiplier; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float HoldingMaxTurnSpeed; // 0x001C (Size: 0x4, Type: FloatProperty)
    float BeingGrabbedRunSpeedMultiplier; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float BeingGrabbedMaxTurnSpeed; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float HoldPositionForwardOffset; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float RotateToFaceTargetSpeed; // 0x002C (Size: 0x4, Type: FloatProperty)
    float DragPositionTolerance; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float DragSpeed; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float GrabberVelocityFactor; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float MaxForceOnGrabber; // 0x003C (Size: 0x4, Type: FloatProperty)
    float GrabbeeVelocityFactor; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float MaxForceOnGrabbee; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float GrabBreakTime; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float GrabbeeCooldownAfterGrabBreak; // 0x004C (Size: 0x4, Type: FloatProperty)
    float GrabbeeJumpBreakTimeReduction; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float GrabBreakApartForce; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float GrabStumbleDuration; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x005C
    std::uint8_t PlayerGrabOffsetIK[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftHandRotationAdjustment[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightHandRotationAdjustment[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    float ServerNetLocationToleranceGrabber; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float ServerNetLocationToleranceGrabbee; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t ParticleEmitterScale[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    float HoldingRunSpeedAnimationMultiplier; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanCharGrabConfig, GrabbedJumpForceMultiplier) == 0, "Offset mismatch for FBeanCharGrabConfig::GrabbedJumpForceMultiplier");
static_assert(offsetof(FBeanCharGrabConfig, GrabRadius) == 4, "Offset mismatch for FBeanCharGrabConfig::GrabRadius");
static_assert(offsetof(FBeanCharGrabConfig, GrabTargetCheckHeight) == 8, "Offset mismatch for FBeanCharGrabConfig::GrabTargetCheckHeight");
static_assert(offsetof(FBeanCharGrabConfig, UngrabDistanceAny) == 12, "Offset mismatch for FBeanCharGrabConfig::UngrabDistanceAny");
static_assert(offsetof(FBeanCharGrabConfig, UngrabDistanceVertical) == 16, "Offset mismatch for FBeanCharGrabConfig::UngrabDistanceVertical");
static_assert(offsetof(FBeanCharGrabConfig, GrabbingRunSpeedMultiplier) == 20, "Offset mismatch for FBeanCharGrabConfig::GrabbingRunSpeedMultiplier");
static_assert(offsetof(FBeanCharGrabConfig, HoldingRunSpeedMultiplier) == 24, "Offset mismatch for FBeanCharGrabConfig::HoldingRunSpeedMultiplier");
static_assert(offsetof(FBeanCharGrabConfig, HoldingMaxTurnSpeed) == 28, "Offset mismatch for FBeanCharGrabConfig::HoldingMaxTurnSpeed");
static_assert(offsetof(FBeanCharGrabConfig, BeingGrabbedRunSpeedMultiplier) == 32, "Offset mismatch for FBeanCharGrabConfig::BeingGrabbedRunSpeedMultiplier");
static_assert(offsetof(FBeanCharGrabConfig, BeingGrabbedMaxTurnSpeed) == 36, "Offset mismatch for FBeanCharGrabConfig::BeingGrabbedMaxTurnSpeed");
static_assert(offsetof(FBeanCharGrabConfig, HoldPositionForwardOffset) == 40, "Offset mismatch for FBeanCharGrabConfig::HoldPositionForwardOffset");
static_assert(offsetof(FBeanCharGrabConfig, RotateToFaceTargetSpeed) == 44, "Offset mismatch for FBeanCharGrabConfig::RotateToFaceTargetSpeed");
static_assert(offsetof(FBeanCharGrabConfig, DragPositionTolerance) == 48, "Offset mismatch for FBeanCharGrabConfig::DragPositionTolerance");
static_assert(offsetof(FBeanCharGrabConfig, DragSpeed) == 52, "Offset mismatch for FBeanCharGrabConfig::DragSpeed");
static_assert(offsetof(FBeanCharGrabConfig, GrabberVelocityFactor) == 56, "Offset mismatch for FBeanCharGrabConfig::GrabberVelocityFactor");
static_assert(offsetof(FBeanCharGrabConfig, MaxForceOnGrabber) == 60, "Offset mismatch for FBeanCharGrabConfig::MaxForceOnGrabber");
static_assert(offsetof(FBeanCharGrabConfig, GrabbeeVelocityFactor) == 64, "Offset mismatch for FBeanCharGrabConfig::GrabbeeVelocityFactor");
static_assert(offsetof(FBeanCharGrabConfig, MaxForceOnGrabbee) == 68, "Offset mismatch for FBeanCharGrabConfig::MaxForceOnGrabbee");
static_assert(offsetof(FBeanCharGrabConfig, GrabBreakTime) == 72, "Offset mismatch for FBeanCharGrabConfig::GrabBreakTime");
static_assert(offsetof(FBeanCharGrabConfig, GrabbeeCooldownAfterGrabBreak) == 76, "Offset mismatch for FBeanCharGrabConfig::GrabbeeCooldownAfterGrabBreak");
static_assert(offsetof(FBeanCharGrabConfig, GrabbeeJumpBreakTimeReduction) == 80, "Offset mismatch for FBeanCharGrabConfig::GrabbeeJumpBreakTimeReduction");
static_assert(offsetof(FBeanCharGrabConfig, GrabBreakApartForce) == 84, "Offset mismatch for FBeanCharGrabConfig::GrabBreakApartForce");
static_assert(offsetof(FBeanCharGrabConfig, GrabStumbleDuration) == 88, "Offset mismatch for FBeanCharGrabConfig::GrabStumbleDuration");
static_assert(offsetof(FBeanCharGrabConfig, PlayerGrabOffsetIK) == 96, "Offset mismatch for FBeanCharGrabConfig::PlayerGrabOffsetIK");
static_assert(offsetof(FBeanCharGrabConfig, LeftHandRotationAdjustment) == 120, "Offset mismatch for FBeanCharGrabConfig::LeftHandRotationAdjustment");
static_assert(offsetof(FBeanCharGrabConfig, RightHandRotationAdjustment) == 144, "Offset mismatch for FBeanCharGrabConfig::RightHandRotationAdjustment");
static_assert(offsetof(FBeanCharGrabConfig, ServerNetLocationToleranceGrabber) == 168, "Offset mismatch for FBeanCharGrabConfig::ServerNetLocationToleranceGrabber");
static_assert(offsetof(FBeanCharGrabConfig, ServerNetLocationToleranceGrabbee) == 172, "Offset mismatch for FBeanCharGrabConfig::ServerNetLocationToleranceGrabbee");
static_assert(offsetof(FBeanCharGrabConfig, ParticleEmitterScale) == 176, "Offset mismatch for FBeanCharGrabConfig::ParticleEmitterScale");
static_assert(offsetof(FBeanCharGrabConfig, HoldingRunSpeedAnimationMultiplier) == 200, "Offset mismatch for FBeanCharGrabConfig::HoldingRunSpeedAnimationMultiplier");

// /Script/BeanstalkRuntime.BeanCharGrabPrediction
// Kind: ScriptStruct; super: none
struct FBeanCharGrabPrediction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanCharHUDConfig
// Kind: ScriptStruct; super: none
struct FBeanCharHUDConfig
{
public:
    std::uint8_t HiddenHUDElements[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBeanCharHUDConfig, HiddenHUDElements) == 0, "Offset mismatch for FBeanCharHUDConfig::HiddenHUDElements");

// /Script/BeanstalkRuntime.BeanCharIdleBreakDef
// Kind: ScriptStruct; super: none
struct FBeanCharIdleBreakDef
{
public:
    std::uint8_t IdleAnim[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    float Weighting; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanCharIdleBreakDef, IdleAnim) == 0, "Offset mismatch for FBeanCharIdleBreakDef::IdleAnim");
static_assert(offsetof(FBeanCharIdleBreakDef, Weighting) == 32, "Offset mismatch for FBeanCharIdleBreakDef::Weighting");

// /Script/BeanstalkRuntime.BeanCharImpactConfig
// Kind: ScriptStruct; super: none
struct FBeanCharImpactConfig
{
public:
    TArray<void*> CollisionResponseData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    double DiveHeadOnCollisionReactionMultiplier; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double GroundLandingCollisionReactionMultiplier; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double LedgeUpwardDotTolerance; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LedgeKnockbackMultiplier[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    double InAirKnockbackDampening; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double MinKnockbackForce; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double MaxKnockbackForce; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    float ImpactVFXCooldown; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float ImpactOffsetAmount; // 0x005C (Size: 0x4, Type: FloatProperty)
    float ImpactThresholdLarge; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float ImpactThresholdMedium; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float ImpactThresholdSmall; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x006C
    double MinimumImpactGameplayCueStrength; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double ImpactGameplayCueCooldown; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t IgnoreImpactStates[0x10]; // 0x0080 (Size: 0x10, Type: SetProperty)
    std::uint8_t RootUnpinnedBone[0x4]; // 0x0090 (Size: 0x4, Type: NameProperty)
    float BasePinStrength; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PinningResetCurve[0x48]; // 0x0098 (Size: 0x48, Type: StructProperty)
    TArray<void*> PinningCollisionChannels; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PinningPhysicalAnimationData[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBeanCharImpactConfig, CollisionResponseData) == 0, "Offset mismatch for FBeanCharImpactConfig::CollisionResponseData");
static_assert(offsetof(FBeanCharImpactConfig, DiveHeadOnCollisionReactionMultiplier) == 16, "Offset mismatch for FBeanCharImpactConfig::DiveHeadOnCollisionReactionMultiplier");
static_assert(offsetof(FBeanCharImpactConfig, GroundLandingCollisionReactionMultiplier) == 24, "Offset mismatch for FBeanCharImpactConfig::GroundLandingCollisionReactionMultiplier");
static_assert(offsetof(FBeanCharImpactConfig, LedgeUpwardDotTolerance) == 32, "Offset mismatch for FBeanCharImpactConfig::LedgeUpwardDotTolerance");
static_assert(offsetof(FBeanCharImpactConfig, LedgeKnockbackMultiplier) == 40, "Offset mismatch for FBeanCharImpactConfig::LedgeKnockbackMultiplier");
static_assert(offsetof(FBeanCharImpactConfig, InAirKnockbackDampening) == 64, "Offset mismatch for FBeanCharImpactConfig::InAirKnockbackDampening");
static_assert(offsetof(FBeanCharImpactConfig, MinKnockbackForce) == 72, "Offset mismatch for FBeanCharImpactConfig::MinKnockbackForce");
static_assert(offsetof(FBeanCharImpactConfig, MaxKnockbackForce) == 80, "Offset mismatch for FBeanCharImpactConfig::MaxKnockbackForce");
static_assert(offsetof(FBeanCharImpactConfig, ImpactVFXCooldown) == 88, "Offset mismatch for FBeanCharImpactConfig::ImpactVFXCooldown");
static_assert(offsetof(FBeanCharImpactConfig, ImpactOffsetAmount) == 92, "Offset mismatch for FBeanCharImpactConfig::ImpactOffsetAmount");
static_assert(offsetof(FBeanCharImpactConfig, ImpactThresholdLarge) == 96, "Offset mismatch for FBeanCharImpactConfig::ImpactThresholdLarge");
static_assert(offsetof(FBeanCharImpactConfig, ImpactThresholdMedium) == 100, "Offset mismatch for FBeanCharImpactConfig::ImpactThresholdMedium");
static_assert(offsetof(FBeanCharImpactConfig, ImpactThresholdSmall) == 104, "Offset mismatch for FBeanCharImpactConfig::ImpactThresholdSmall");
static_assert(offsetof(FBeanCharImpactConfig, MinimumImpactGameplayCueStrength) == 112, "Offset mismatch for FBeanCharImpactConfig::MinimumImpactGameplayCueStrength");
static_assert(offsetof(FBeanCharImpactConfig, ImpactGameplayCueCooldown) == 120, "Offset mismatch for FBeanCharImpactConfig::ImpactGameplayCueCooldown");
static_assert(offsetof(FBeanCharImpactConfig, IgnoreImpactStates) == 128, "Offset mismatch for FBeanCharImpactConfig::IgnoreImpactStates");
static_assert(offsetof(FBeanCharImpactConfig, RootUnpinnedBone) == 144, "Offset mismatch for FBeanCharImpactConfig::RootUnpinnedBone");
static_assert(offsetof(FBeanCharImpactConfig, BasePinStrength) == 148, "Offset mismatch for FBeanCharImpactConfig::BasePinStrength");
static_assert(offsetof(FBeanCharImpactConfig, PinningResetCurve) == 152, "Offset mismatch for FBeanCharImpactConfig::PinningResetCurve");
static_assert(offsetof(FBeanCharImpactConfig, PinningCollisionChannels) == 224, "Offset mismatch for FBeanCharImpactConfig::PinningCollisionChannels");
static_assert(offsetof(FBeanCharImpactConfig, PinningPhysicalAnimationData) == 240, "Offset mismatch for FBeanCharImpactConfig::PinningPhysicalAnimationData");

// /Script/BeanstalkRuntime.BeanCharInteractionsConfig
// Kind: ScriptStruct; super: none
struct FBeanCharInteractionsConfig
{
public:
    std::uint8_t PersistentTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t DisallowedPlayerActions[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedGameplayAbilityTags[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t AllowedItems[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedInteractableTags[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t InteractablesRequiringReticle[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedInteractableContextText[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t BlockedInteractableContextTextColour[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bBlockedInteractableContextTextOnly; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00E1
    std::uint8_t InteractSelectionData[0x1]; // 0x00E4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBeanCharInteractionsConfig, PersistentTags) == 0, "Offset mismatch for FBeanCharInteractionsConfig::PersistentTags");
static_assert(offsetof(FBeanCharInteractionsConfig, DisallowedPlayerActions) == 32, "Offset mismatch for FBeanCharInteractionsConfig::DisallowedPlayerActions");
static_assert(offsetof(FBeanCharInteractionsConfig, BlockedGameplayAbilityTags) == 64, "Offset mismatch for FBeanCharInteractionsConfig::BlockedGameplayAbilityTags");
static_assert(offsetof(FBeanCharInteractionsConfig, AllowedItems) == 96, "Offset mismatch for FBeanCharInteractionsConfig::AllowedItems");
static_assert(offsetof(FBeanCharInteractionsConfig, BlockedInteractableTags) == 128, "Offset mismatch for FBeanCharInteractionsConfig::BlockedInteractableTags");
static_assert(offsetof(FBeanCharInteractionsConfig, InteractablesRequiringReticle) == 160, "Offset mismatch for FBeanCharInteractionsConfig::InteractablesRequiringReticle");
static_assert(offsetof(FBeanCharInteractionsConfig, BlockedInteractableContextText) == 192, "Offset mismatch for FBeanCharInteractionsConfig::BlockedInteractableContextText");
static_assert(offsetof(FBeanCharInteractionsConfig, BlockedInteractableContextTextColour) == 208, "Offset mismatch for FBeanCharInteractionsConfig::BlockedInteractableContextTextColour");
static_assert(offsetof(FBeanCharInteractionsConfig, bBlockedInteractableContextTextOnly) == 224, "Offset mismatch for FBeanCharInteractionsConfig::bBlockedInteractableContextTextOnly");
static_assert(offsetof(FBeanCharInteractionsConfig, InteractSelectionData) == 228, "Offset mismatch for FBeanCharInteractionsConfig::InteractSelectionData");

// /Script/BeanstalkRuntime.BeanCharInventoryModeConfig
// Kind: ScriptStruct; super: none
struct FBeanCharInventoryModeConfig
{
public:
    std::uint8_t ActionsToAllow[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayAbilityTagsToUnblock[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t HUDElementsToUnhide[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t ItemsToAllow[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBeanCharInventoryModeConfig, ActionsToAllow) == 0, "Offset mismatch for FBeanCharInventoryModeConfig::ActionsToAllow");
static_assert(offsetof(FBeanCharInventoryModeConfig, GameplayAbilityTagsToUnblock) == 32, "Offset mismatch for FBeanCharInventoryModeConfig::GameplayAbilityTagsToUnblock");
static_assert(offsetof(FBeanCharInventoryModeConfig, HUDElementsToUnhide) == 64, "Offset mismatch for FBeanCharInventoryModeConfig::HUDElementsToUnhide");
static_assert(offsetof(FBeanCharInventoryModeConfig, ItemsToAllow) == 96, "Offset mismatch for FBeanCharInventoryModeConfig::ItemsToAllow");

// /Script/BeanstalkRuntime.BeanCharJiggleConfig
// Kind: ScriptStruct; super: none
struct FBeanCharJiggleConfig
{
public:
    TArray<void*> BoneWeights; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    double BeingGrabbedWeightMultiplier; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> StateWeightOverrides; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    float StateWeightBlendDuration; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x002C
    double PlatformVelocityMultiplier; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double AccelerationNoiseCutoff; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double Mass; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double SpringConst; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double SpringPivotOffset; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    double SpringDamping; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double SpringInterpSpeed; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    double ClampOffsetFactor; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double MaxInputForce; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t AccelerationAxisWeights[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBeanCharJiggleConfig, BoneWeights) == 0, "Offset mismatch for FBeanCharJiggleConfig::BoneWeights");
static_assert(offsetof(FBeanCharJiggleConfig, BeingGrabbedWeightMultiplier) == 16, "Offset mismatch for FBeanCharJiggleConfig::BeingGrabbedWeightMultiplier");
static_assert(offsetof(FBeanCharJiggleConfig, StateWeightOverrides) == 24, "Offset mismatch for FBeanCharJiggleConfig::StateWeightOverrides");
static_assert(offsetof(FBeanCharJiggleConfig, StateWeightBlendDuration) == 40, "Offset mismatch for FBeanCharJiggleConfig::StateWeightBlendDuration");
static_assert(offsetof(FBeanCharJiggleConfig, PlatformVelocityMultiplier) == 48, "Offset mismatch for FBeanCharJiggleConfig::PlatformVelocityMultiplier");
static_assert(offsetof(FBeanCharJiggleConfig, AccelerationNoiseCutoff) == 56, "Offset mismatch for FBeanCharJiggleConfig::AccelerationNoiseCutoff");
static_assert(offsetof(FBeanCharJiggleConfig, Mass) == 64, "Offset mismatch for FBeanCharJiggleConfig::Mass");
static_assert(offsetof(FBeanCharJiggleConfig, SpringConst) == 72, "Offset mismatch for FBeanCharJiggleConfig::SpringConst");
static_assert(offsetof(FBeanCharJiggleConfig, SpringPivotOffset) == 80, "Offset mismatch for FBeanCharJiggleConfig::SpringPivotOffset");
static_assert(offsetof(FBeanCharJiggleConfig, SpringDamping) == 88, "Offset mismatch for FBeanCharJiggleConfig::SpringDamping");
static_assert(offsetof(FBeanCharJiggleConfig, SpringInterpSpeed) == 96, "Offset mismatch for FBeanCharJiggleConfig::SpringInterpSpeed");
static_assert(offsetof(FBeanCharJiggleConfig, ClampOffsetFactor) == 104, "Offset mismatch for FBeanCharJiggleConfig::ClampOffsetFactor");
static_assert(offsetof(FBeanCharJiggleConfig, MaxInputForce) == 112, "Offset mismatch for FBeanCharJiggleConfig::MaxInputForce");
static_assert(offsetof(FBeanCharJiggleConfig, AccelerationAxisWeights) == 120, "Offset mismatch for FBeanCharJiggleConfig::AccelerationAxisWeights");

// /Script/BeanstalkRuntime.BeanCharJostleConfig
// Kind: ScriptStruct; super: none
struct FBeanCharJostleConfig
{
public:
    float JostleTriggerRadius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float JostleOuterRadius; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float JostleInnerRadius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float JostleMandatoryRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    double JostleForceMultiplier; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    float JostlerMinSpeedToApplyForce; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float JostleeMaxSpeedToTrigger; // 0x001C (Size: 0x4, Type: FloatProperty)
    float JostleeMaxSpeedToApplyForce; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float JostleRefreshInterval; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float PositionToleranceDuringJostle; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanCharJostleConfig, JostleTriggerRadius) == 0, "Offset mismatch for FBeanCharJostleConfig::JostleTriggerRadius");
static_assert(offsetof(FBeanCharJostleConfig, JostleOuterRadius) == 4, "Offset mismatch for FBeanCharJostleConfig::JostleOuterRadius");
static_assert(offsetof(FBeanCharJostleConfig, JostleInnerRadius) == 8, "Offset mismatch for FBeanCharJostleConfig::JostleInnerRadius");
static_assert(offsetof(FBeanCharJostleConfig, JostleMandatoryRadius) == 12, "Offset mismatch for FBeanCharJostleConfig::JostleMandatoryRadius");
static_assert(offsetof(FBeanCharJostleConfig, JostleForceMultiplier) == 16, "Offset mismatch for FBeanCharJostleConfig::JostleForceMultiplier");
static_assert(offsetof(FBeanCharJostleConfig, JostlerMinSpeedToApplyForce) == 24, "Offset mismatch for FBeanCharJostleConfig::JostlerMinSpeedToApplyForce");
static_assert(offsetof(FBeanCharJostleConfig, JostleeMaxSpeedToTrigger) == 28, "Offset mismatch for FBeanCharJostleConfig::JostleeMaxSpeedToTrigger");
static_assert(offsetof(FBeanCharJostleConfig, JostleeMaxSpeedToApplyForce) == 32, "Offset mismatch for FBeanCharJostleConfig::JostleeMaxSpeedToApplyForce");
static_assert(offsetof(FBeanCharJostleConfig, JostleRefreshInterval) == 36, "Offset mismatch for FBeanCharJostleConfig::JostleRefreshInterval");
static_assert(offsetof(FBeanCharJostleConfig, PositionToleranceDuringJostle) == 40, "Offset mismatch for FBeanCharJostleConfig::PositionToleranceDuringJostle");

// /Script/BeanstalkRuntime.BeanCharJumpConfig
// Kind: ScriptStruct; super: none
struct FBeanCharJumpConfig
{
public:
    float JumpZVelocity; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LandingVelocityConserve; // 0x0004 (Size: 0x4, Type: FloatProperty)
    double TransitionToFallingZThreshold; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    float JumpCoyoteTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float JumpReverseCoyoteTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ParticleEmitterScale[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    double ParticleSpawnZOffset; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double AnticipateLandingInitialTraceLength; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double AnticipateLandingZVelocityMultiplier; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FBeanCharJumpConfig, JumpZVelocity) == 0, "Offset mismatch for FBeanCharJumpConfig::JumpZVelocity");
static_assert(offsetof(FBeanCharJumpConfig, LandingVelocityConserve) == 4, "Offset mismatch for FBeanCharJumpConfig::LandingVelocityConserve");
static_assert(offsetof(FBeanCharJumpConfig, TransitionToFallingZThreshold) == 8, "Offset mismatch for FBeanCharJumpConfig::TransitionToFallingZThreshold");
static_assert(offsetof(FBeanCharJumpConfig, JumpCoyoteTime) == 16, "Offset mismatch for FBeanCharJumpConfig::JumpCoyoteTime");
static_assert(offsetof(FBeanCharJumpConfig, JumpReverseCoyoteTime) == 20, "Offset mismatch for FBeanCharJumpConfig::JumpReverseCoyoteTime");
static_assert(offsetof(FBeanCharJumpConfig, ParticleEmitterScale) == 24, "Offset mismatch for FBeanCharJumpConfig::ParticleEmitterScale");
static_assert(offsetof(FBeanCharJumpConfig, ParticleSpawnZOffset) == 48, "Offset mismatch for FBeanCharJumpConfig::ParticleSpawnZOffset");
static_assert(offsetof(FBeanCharJumpConfig, AnticipateLandingInitialTraceLength) == 56, "Offset mismatch for FBeanCharJumpConfig::AnticipateLandingInitialTraceLength");
static_assert(offsetof(FBeanCharJumpConfig, AnticipateLandingZVelocityMultiplier) == 64, "Offset mismatch for FBeanCharJumpConfig::AnticipateLandingZVelocityMultiplier");

// /Script/BeanstalkRuntime.BeanCharMantleCheckDebug
// Kind: ScriptStruct; super: none
struct FBeanCharMantleCheckDebug
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanCharMantleCheckDebug_StepFour
// Kind: ScriptStruct; super: BeanCharMantleCheckDebug
struct FBeanCharMantleCheckDebug_StepFour
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanCharMantleCheckDebug_StepOne
// Kind: ScriptStruct; super: BeanCharMantleCheckDebug
struct FBeanCharMantleCheckDebug_StepOne
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanCharMantleCheckDebug_StepThree
// Kind: ScriptStruct; super: BeanCharMantleCheckDebug
struct FBeanCharMantleCheckDebug_StepThree
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanCharMantleCheckDebug_StepTwo
// Kind: ScriptStruct; super: BeanCharMantleCheckDebug
struct FBeanCharMantleCheckDebug_StepTwo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanCharMantleConfig
// Kind: ScriptStruct; super: none
struct FBeanCharMantleConfig
{
public:
    TArray<void*> AcceptedCollisionChannels; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t HighestAcceptedComponentMobility; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowMantleOnAllSceneGraphEntities; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0012
    double WallCheckDownOffset; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double WallCheckDownOffsetDiving; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double WallCheckRadius; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double WallCheckHeight; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double WallCheckLength; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double WallCheckMaxAngle; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double WallCheckMinFacingAlignment; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double WallTopCheckMinimumLength; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    double WallTopCheckRadius; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double WallTopMinUpwardAlignment; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    double LedgeCheckLength; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double LedgeCheckRadius; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double HangingSpotHorizontalOffset; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    double HangingSpotVerticalOffset; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    double HangingSpotMinimumHeight; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    double HangingSpotMaxInclineDot; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    float AnimationRate; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float RestoreMovementAfterDurationNormalized; // 0x009C (Size: 0x4, Type: FloatProperty)
    float RestoreMovementVelocityMultiplier; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float CancelBuffer; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float CancelInputDuration; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float CooldownTime; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float TimeToValidate; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HangingSpotMotionWarp[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    float ClamberEnabledCacheTime; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float VelocityProjectionSeconds; // 0x00BC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanCharMantleConfig, AcceptedCollisionChannels) == 0, "Offset mismatch for FBeanCharMantleConfig::AcceptedCollisionChannels");
static_assert(offsetof(FBeanCharMantleConfig, HighestAcceptedComponentMobility) == 16, "Offset mismatch for FBeanCharMantleConfig::HighestAcceptedComponentMobility");
static_assert(offsetof(FBeanCharMantleConfig, bAllowMantleOnAllSceneGraphEntities) == 17, "Offset mismatch for FBeanCharMantleConfig::bAllowMantleOnAllSceneGraphEntities");
static_assert(offsetof(FBeanCharMantleConfig, WallCheckDownOffset) == 24, "Offset mismatch for FBeanCharMantleConfig::WallCheckDownOffset");
static_assert(offsetof(FBeanCharMantleConfig, WallCheckDownOffsetDiving) == 32, "Offset mismatch for FBeanCharMantleConfig::WallCheckDownOffsetDiving");
static_assert(offsetof(FBeanCharMantleConfig, WallCheckRadius) == 40, "Offset mismatch for FBeanCharMantleConfig::WallCheckRadius");
static_assert(offsetof(FBeanCharMantleConfig, WallCheckHeight) == 48, "Offset mismatch for FBeanCharMantleConfig::WallCheckHeight");
static_assert(offsetof(FBeanCharMantleConfig, WallCheckLength) == 56, "Offset mismatch for FBeanCharMantleConfig::WallCheckLength");
static_assert(offsetof(FBeanCharMantleConfig, WallCheckMaxAngle) == 64, "Offset mismatch for FBeanCharMantleConfig::WallCheckMaxAngle");
static_assert(offsetof(FBeanCharMantleConfig, WallCheckMinFacingAlignment) == 72, "Offset mismatch for FBeanCharMantleConfig::WallCheckMinFacingAlignment");
static_assert(offsetof(FBeanCharMantleConfig, WallTopCheckMinimumLength) == 80, "Offset mismatch for FBeanCharMantleConfig::WallTopCheckMinimumLength");
static_assert(offsetof(FBeanCharMantleConfig, WallTopCheckRadius) == 88, "Offset mismatch for FBeanCharMantleConfig::WallTopCheckRadius");
static_assert(offsetof(FBeanCharMantleConfig, WallTopMinUpwardAlignment) == 96, "Offset mismatch for FBeanCharMantleConfig::WallTopMinUpwardAlignment");
static_assert(offsetof(FBeanCharMantleConfig, LedgeCheckLength) == 104, "Offset mismatch for FBeanCharMantleConfig::LedgeCheckLength");
static_assert(offsetof(FBeanCharMantleConfig, LedgeCheckRadius) == 112, "Offset mismatch for FBeanCharMantleConfig::LedgeCheckRadius");
static_assert(offsetof(FBeanCharMantleConfig, HangingSpotHorizontalOffset) == 120, "Offset mismatch for FBeanCharMantleConfig::HangingSpotHorizontalOffset");
static_assert(offsetof(FBeanCharMantleConfig, HangingSpotVerticalOffset) == 128, "Offset mismatch for FBeanCharMantleConfig::HangingSpotVerticalOffset");
static_assert(offsetof(FBeanCharMantleConfig, HangingSpotMinimumHeight) == 136, "Offset mismatch for FBeanCharMantleConfig::HangingSpotMinimumHeight");
static_assert(offsetof(FBeanCharMantleConfig, HangingSpotMaxInclineDot) == 144, "Offset mismatch for FBeanCharMantleConfig::HangingSpotMaxInclineDot");
static_assert(offsetof(FBeanCharMantleConfig, AnimationRate) == 152, "Offset mismatch for FBeanCharMantleConfig::AnimationRate");
static_assert(offsetof(FBeanCharMantleConfig, RestoreMovementAfterDurationNormalized) == 156, "Offset mismatch for FBeanCharMantleConfig::RestoreMovementAfterDurationNormalized");
static_assert(offsetof(FBeanCharMantleConfig, RestoreMovementVelocityMultiplier) == 160, "Offset mismatch for FBeanCharMantleConfig::RestoreMovementVelocityMultiplier");
static_assert(offsetof(FBeanCharMantleConfig, CancelBuffer) == 164, "Offset mismatch for FBeanCharMantleConfig::CancelBuffer");
static_assert(offsetof(FBeanCharMantleConfig, CancelInputDuration) == 168, "Offset mismatch for FBeanCharMantleConfig::CancelInputDuration");
static_assert(offsetof(FBeanCharMantleConfig, CooldownTime) == 172, "Offset mismatch for FBeanCharMantleConfig::CooldownTime");
static_assert(offsetof(FBeanCharMantleConfig, TimeToValidate) == 176, "Offset mismatch for FBeanCharMantleConfig::TimeToValidate");
static_assert(offsetof(FBeanCharMantleConfig, HangingSpotMotionWarp) == 180, "Offset mismatch for FBeanCharMantleConfig::HangingSpotMotionWarp");
static_assert(offsetof(FBeanCharMantleConfig, ClamberEnabledCacheTime) == 184, "Offset mismatch for FBeanCharMantleConfig::ClamberEnabledCacheTime");
static_assert(offsetof(FBeanCharMantleConfig, VelocityProjectionSeconds) == 188, "Offset mismatch for FBeanCharMantleConfig::VelocityProjectionSeconds");

// /Script/BeanstalkRuntime.BeanCharMantleTargetData
// Kind: ScriptStruct; super: none
struct FBeanCharMantleTargetData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanCharMantleTargetDebug
// Kind: ScriptStruct; super: none
struct FBeanCharMantleTargetDebug
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanCharMovementConfig
// Kind: ScriptStruct; super: none
struct FBeanCharMovementConfig
{
public:
    float Mass; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float GravityScale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NormalMaxAccelerationCurve[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t NormalMaxDecelerationCurve[0x48]; // 0x0050 (Size: 0x48, Type: StructProperty)
    float LeanAnimTurnThreshold; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float LeanAnimTurnMaxAngleRadians; // 0x009C (Size: 0x4, Type: FloatProperty)
    float LeanAnimBlendSpeed; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float TurnSpeedGrounded; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TurnYawMultiplierGrounded[0x48]; // 0x00A8 (Size: 0x48, Type: StructProperty)
    float TurnSpeedAerial; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float TurnSpeedFlying; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsTurn180Enabled; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00F9
    float Turn180MinSpeedPercentage; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float Turn180DotProductTolerance; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float Turn180Duration; // 0x0104 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Turn180YawMultiplier[0x48]; // 0x0108 (Size: 0x48, Type: StructProperty)
    float Turn180CancelDotProductTolerance; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UseMeshPositionLerp; // 0x0154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UseCameraPositionLerp; // 0x0155 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0156
    float PositionLerpSpeed; // 0x0158 (Size: 0x4, Type: FloatProperty)
    float PositionLerpAccelerationFactor; // 0x015C (Size: 0x4, Type: FloatProperty)
    float MaxCorrectionDistanceToTriggerMeshLerp; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float MaxCorrectionDistanceToTriggerCameraLerp; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float MaxFallDuration; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x016C
    double FallToRagdollZVelocityThreshold; // 0x0170 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FBeanCharMovementConfig, Mass) == 0, "Offset mismatch for FBeanCharMovementConfig::Mass");
static_assert(offsetof(FBeanCharMovementConfig, GravityScale) == 4, "Offset mismatch for FBeanCharMovementConfig::GravityScale");
static_assert(offsetof(FBeanCharMovementConfig, NormalMaxAccelerationCurve) == 8, "Offset mismatch for FBeanCharMovementConfig::NormalMaxAccelerationCurve");
static_assert(offsetof(FBeanCharMovementConfig, NormalMaxDecelerationCurve) == 80, "Offset mismatch for FBeanCharMovementConfig::NormalMaxDecelerationCurve");
static_assert(offsetof(FBeanCharMovementConfig, LeanAnimTurnThreshold) == 152, "Offset mismatch for FBeanCharMovementConfig::LeanAnimTurnThreshold");
static_assert(offsetof(FBeanCharMovementConfig, LeanAnimTurnMaxAngleRadians) == 156, "Offset mismatch for FBeanCharMovementConfig::LeanAnimTurnMaxAngleRadians");
static_assert(offsetof(FBeanCharMovementConfig, LeanAnimBlendSpeed) == 160, "Offset mismatch for FBeanCharMovementConfig::LeanAnimBlendSpeed");
static_assert(offsetof(FBeanCharMovementConfig, TurnSpeedGrounded) == 164, "Offset mismatch for FBeanCharMovementConfig::TurnSpeedGrounded");
static_assert(offsetof(FBeanCharMovementConfig, TurnYawMultiplierGrounded) == 168, "Offset mismatch for FBeanCharMovementConfig::TurnYawMultiplierGrounded");
static_assert(offsetof(FBeanCharMovementConfig, TurnSpeedAerial) == 240, "Offset mismatch for FBeanCharMovementConfig::TurnSpeedAerial");
static_assert(offsetof(FBeanCharMovementConfig, TurnSpeedFlying) == 244, "Offset mismatch for FBeanCharMovementConfig::TurnSpeedFlying");
static_assert(offsetof(FBeanCharMovementConfig, bIsTurn180Enabled) == 248, "Offset mismatch for FBeanCharMovementConfig::bIsTurn180Enabled");
static_assert(offsetof(FBeanCharMovementConfig, Turn180MinSpeedPercentage) == 252, "Offset mismatch for FBeanCharMovementConfig::Turn180MinSpeedPercentage");
static_assert(offsetof(FBeanCharMovementConfig, Turn180DotProductTolerance) == 256, "Offset mismatch for FBeanCharMovementConfig::Turn180DotProductTolerance");
static_assert(offsetof(FBeanCharMovementConfig, Turn180Duration) == 260, "Offset mismatch for FBeanCharMovementConfig::Turn180Duration");
static_assert(offsetof(FBeanCharMovementConfig, Turn180YawMultiplier) == 264, "Offset mismatch for FBeanCharMovementConfig::Turn180YawMultiplier");
static_assert(offsetof(FBeanCharMovementConfig, Turn180CancelDotProductTolerance) == 336, "Offset mismatch for FBeanCharMovementConfig::Turn180CancelDotProductTolerance");
static_assert(offsetof(FBeanCharMovementConfig, UseMeshPositionLerp) == 340, "Offset mismatch for FBeanCharMovementConfig::UseMeshPositionLerp");
static_assert(offsetof(FBeanCharMovementConfig, UseCameraPositionLerp) == 341, "Offset mismatch for FBeanCharMovementConfig::UseCameraPositionLerp");
static_assert(offsetof(FBeanCharMovementConfig, PositionLerpSpeed) == 344, "Offset mismatch for FBeanCharMovementConfig::PositionLerpSpeed");
static_assert(offsetof(FBeanCharMovementConfig, PositionLerpAccelerationFactor) == 348, "Offset mismatch for FBeanCharMovementConfig::PositionLerpAccelerationFactor");
static_assert(offsetof(FBeanCharMovementConfig, MaxCorrectionDistanceToTriggerMeshLerp) == 352, "Offset mismatch for FBeanCharMovementConfig::MaxCorrectionDistanceToTriggerMeshLerp");
static_assert(offsetof(FBeanCharMovementConfig, MaxCorrectionDistanceToTriggerCameraLerp) == 356, "Offset mismatch for FBeanCharMovementConfig::MaxCorrectionDistanceToTriggerCameraLerp");
static_assert(offsetof(FBeanCharMovementConfig, MaxFallDuration) == 360, "Offset mismatch for FBeanCharMovementConfig::MaxFallDuration");
static_assert(offsetof(FBeanCharMovementConfig, FallToRagdollZVelocityThreshold) == 368, "Offset mismatch for FBeanCharMovementConfig::FallToRagdollZVelocityThreshold");

// /Script/BeanstalkRuntime.BeanCharRagdollConfig
// Kind: ScriptStruct; super: none
struct FBeanCharRagdollConfig
{
public:
    double ImpactForceMultiplier; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUseLaunchForceMultiplier; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    std::uint8_t LaunchForceMultiplier[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    double GroundedRagdollControlForce; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double InAirRagdollControlForce; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    float RagdollControlVelocityThreshold; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float ExitLinearVelocity; // 0x006C (Size: 0x4, Type: FloatProperty)
    float ExitAngularVelocity; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float GetupVerticalityDotProductTolerance; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float GetupVerticalityDotProductDeadZoneMin; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float GetupVerticalityDotProductDeadZoneMax; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MinimumActiveSeconds; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MaxActiveSeconds; // 0x0084 (Size: 0x4, Type: FloatProperty)
    double AngularVelocityMagnitude; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    float HighImpactMaxAnimThreshold; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SkeletalMeshAnchorBone[0x4]; // 0x0094 (Size: 0x4, Type: NameProperty)
    float PhysicsBlendWeight; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x009C
    std::uint8_t MeshCapsuleRotationalOffset[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t MeshCapsulePositionalOffset[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    double DebugTriggerRagdollForce; // 0x00D0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEnableRollExit; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00D9
    double SpeedForRollGetup; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    float GroundedCheckHalfHeightScale; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00EC
    double GroundedCheckRadius; // 0x00F0 (Size: 0x8, Type: DoubleProperty)
    float MinimumTimeOnGround; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00FC
    TArray<void*> MeshCollisionChannels; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeshBonesWithCCD; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxRemoteRagdollCharacters; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0124
    double MaxRemoteRagdollDistance; // 0x0128 (Size: 0x8, Type: DoubleProperty)
    double RemoteRagdollMinimumDeactiveTime; // 0x0130 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bCullRemoteRagdollsBehindCamera; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0139
    double ReplicationHardsnapDistanceOverride; // 0x0140 (Size: 0x8, Type: DoubleProperty)
    double MaxSecondsStuck; // 0x0148 (Size: 0x8, Type: DoubleProperty)
    double SameLocationDistanceTolerance; // 0x0150 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FBeanCharRagdollConfig, ImpactForceMultiplier) == 0, "Offset mismatch for FBeanCharRagdollConfig::ImpactForceMultiplier");
static_assert(offsetof(FBeanCharRagdollConfig, bUseLaunchForceMultiplier) == 8, "Offset mismatch for FBeanCharRagdollConfig::bUseLaunchForceMultiplier");
static_assert(offsetof(FBeanCharRagdollConfig, LaunchForceMultiplier) == 16, "Offset mismatch for FBeanCharRagdollConfig::LaunchForceMultiplier");
static_assert(offsetof(FBeanCharRagdollConfig, GroundedRagdollControlForce) == 88, "Offset mismatch for FBeanCharRagdollConfig::GroundedRagdollControlForce");
static_assert(offsetof(FBeanCharRagdollConfig, InAirRagdollControlForce) == 96, "Offset mismatch for FBeanCharRagdollConfig::InAirRagdollControlForce");
static_assert(offsetof(FBeanCharRagdollConfig, RagdollControlVelocityThreshold) == 104, "Offset mismatch for FBeanCharRagdollConfig::RagdollControlVelocityThreshold");
static_assert(offsetof(FBeanCharRagdollConfig, ExitLinearVelocity) == 108, "Offset mismatch for FBeanCharRagdollConfig::ExitLinearVelocity");
static_assert(offsetof(FBeanCharRagdollConfig, ExitAngularVelocity) == 112, "Offset mismatch for FBeanCharRagdollConfig::ExitAngularVelocity");
static_assert(offsetof(FBeanCharRagdollConfig, GetupVerticalityDotProductTolerance) == 116, "Offset mismatch for FBeanCharRagdollConfig::GetupVerticalityDotProductTolerance");
static_assert(offsetof(FBeanCharRagdollConfig, GetupVerticalityDotProductDeadZoneMin) == 120, "Offset mismatch for FBeanCharRagdollConfig::GetupVerticalityDotProductDeadZoneMin");
static_assert(offsetof(FBeanCharRagdollConfig, GetupVerticalityDotProductDeadZoneMax) == 124, "Offset mismatch for FBeanCharRagdollConfig::GetupVerticalityDotProductDeadZoneMax");
static_assert(offsetof(FBeanCharRagdollConfig, MinimumActiveSeconds) == 128, "Offset mismatch for FBeanCharRagdollConfig::MinimumActiveSeconds");
static_assert(offsetof(FBeanCharRagdollConfig, MaxActiveSeconds) == 132, "Offset mismatch for FBeanCharRagdollConfig::MaxActiveSeconds");
static_assert(offsetof(FBeanCharRagdollConfig, AngularVelocityMagnitude) == 136, "Offset mismatch for FBeanCharRagdollConfig::AngularVelocityMagnitude");
static_assert(offsetof(FBeanCharRagdollConfig, HighImpactMaxAnimThreshold) == 144, "Offset mismatch for FBeanCharRagdollConfig::HighImpactMaxAnimThreshold");
static_assert(offsetof(FBeanCharRagdollConfig, SkeletalMeshAnchorBone) == 148, "Offset mismatch for FBeanCharRagdollConfig::SkeletalMeshAnchorBone");
static_assert(offsetof(FBeanCharRagdollConfig, PhysicsBlendWeight) == 152, "Offset mismatch for FBeanCharRagdollConfig::PhysicsBlendWeight");
static_assert(offsetof(FBeanCharRagdollConfig, MeshCapsuleRotationalOffset) == 160, "Offset mismatch for FBeanCharRagdollConfig::MeshCapsuleRotationalOffset");
static_assert(offsetof(FBeanCharRagdollConfig, MeshCapsulePositionalOffset) == 184, "Offset mismatch for FBeanCharRagdollConfig::MeshCapsulePositionalOffset");
static_assert(offsetof(FBeanCharRagdollConfig, DebugTriggerRagdollForce) == 208, "Offset mismatch for FBeanCharRagdollConfig::DebugTriggerRagdollForce");
static_assert(offsetof(FBeanCharRagdollConfig, bEnableRollExit) == 216, "Offset mismatch for FBeanCharRagdollConfig::bEnableRollExit");
static_assert(offsetof(FBeanCharRagdollConfig, SpeedForRollGetup) == 224, "Offset mismatch for FBeanCharRagdollConfig::SpeedForRollGetup");
static_assert(offsetof(FBeanCharRagdollConfig, GroundedCheckHalfHeightScale) == 232, "Offset mismatch for FBeanCharRagdollConfig::GroundedCheckHalfHeightScale");
static_assert(offsetof(FBeanCharRagdollConfig, GroundedCheckRadius) == 240, "Offset mismatch for FBeanCharRagdollConfig::GroundedCheckRadius");
static_assert(offsetof(FBeanCharRagdollConfig, MinimumTimeOnGround) == 248, "Offset mismatch for FBeanCharRagdollConfig::MinimumTimeOnGround");
static_assert(offsetof(FBeanCharRagdollConfig, MeshCollisionChannels) == 256, "Offset mismatch for FBeanCharRagdollConfig::MeshCollisionChannels");
static_assert(offsetof(FBeanCharRagdollConfig, MeshBonesWithCCD) == 272, "Offset mismatch for FBeanCharRagdollConfig::MeshBonesWithCCD");
static_assert(offsetof(FBeanCharRagdollConfig, MaxRemoteRagdollCharacters) == 288, "Offset mismatch for FBeanCharRagdollConfig::MaxRemoteRagdollCharacters");
static_assert(offsetof(FBeanCharRagdollConfig, MaxRemoteRagdollDistance) == 296, "Offset mismatch for FBeanCharRagdollConfig::MaxRemoteRagdollDistance");
static_assert(offsetof(FBeanCharRagdollConfig, RemoteRagdollMinimumDeactiveTime) == 304, "Offset mismatch for FBeanCharRagdollConfig::RemoteRagdollMinimumDeactiveTime");
static_assert(offsetof(FBeanCharRagdollConfig, bCullRemoteRagdollsBehindCamera) == 312, "Offset mismatch for FBeanCharRagdollConfig::bCullRemoteRagdollsBehindCamera");
static_assert(offsetof(FBeanCharRagdollConfig, ReplicationHardsnapDistanceOverride) == 320, "Offset mismatch for FBeanCharRagdollConfig::ReplicationHardsnapDistanceOverride");
static_assert(offsetof(FBeanCharRagdollConfig, MaxSecondsStuck) == 328, "Offset mismatch for FBeanCharRagdollConfig::MaxSecondsStuck");
static_assert(offsetof(FBeanCharRagdollConfig, SameLocationDistanceTolerance) == 336, "Offset mismatch for FBeanCharRagdollConfig::SameLocationDistanceTolerance");

// /Script/BeanstalkRuntime.BeanCharRagdollImpactData
// Kind: ScriptStruct; super: none
struct FBeanCharRagdollImpactData
{
public:
    double Strength; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t bFromLaunch; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBeanCharRagdollImpactData, Strength) == 0, "Offset mismatch for FBeanCharRagdollImpactData::Strength");
static_assert(offsetof(FBeanCharRagdollImpactData, Location) == 8, "Offset mismatch for FBeanCharRagdollImpactData::Location");
static_assert(offsetof(FBeanCharRagdollImpactData, Normal) == 32, "Offset mismatch for FBeanCharRagdollImpactData::Normal");
static_assert(offsetof(FBeanCharRagdollImpactData, bFromLaunch) == 56, "Offset mismatch for FBeanCharRagdollImpactData::bFromLaunch");

// /Script/BeanstalkRuntime.BeanCharRollConfig
// Kind: ScriptStruct; super: none
struct FBeanCharRollConfig
{
public:
    double ScaleSpeed; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    float MinimumDuration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaximumDurationBeforeForcedExit; // 0x000C (Size: 0x4, Type: FloatProperty)
    double ExitSpeed; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double GetupDirectionTolerance; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double ForwardRollBlendSpeed; // 0x0020 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FBeanCharRollConfig, ScaleSpeed) == 0, "Offset mismatch for FBeanCharRollConfig::ScaleSpeed");
static_assert(offsetof(FBeanCharRollConfig, MinimumDuration) == 8, "Offset mismatch for FBeanCharRollConfig::MinimumDuration");
static_assert(offsetof(FBeanCharRollConfig, MaximumDurationBeforeForcedExit) == 12, "Offset mismatch for FBeanCharRollConfig::MaximumDurationBeforeForcedExit");
static_assert(offsetof(FBeanCharRollConfig, ExitSpeed) == 16, "Offset mismatch for FBeanCharRollConfig::ExitSpeed");
static_assert(offsetof(FBeanCharRollConfig, GetupDirectionTolerance) == 24, "Offset mismatch for FBeanCharRollConfig::GetupDirectionTolerance");
static_assert(offsetof(FBeanCharRollConfig, ForwardRollBlendSpeed) == 32, "Offset mismatch for FBeanCharRollConfig::ForwardRollBlendSpeed");

// /Script/BeanstalkRuntime.BeanCharStaggerConfig
// Kind: ScriptStruct; super: none
struct FBeanCharStaggerConfig
{
public:
    float LandStaggerZVelocityThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LandStaggerStunDurationSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float VelocityMultiplierOnStagger; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanCharStaggerConfig, LandStaggerZVelocityThreshold) == 0, "Offset mismatch for FBeanCharStaggerConfig::LandStaggerZVelocityThreshold");
static_assert(offsetof(FBeanCharStaggerConfig, LandStaggerStunDurationSeconds) == 4, "Offset mismatch for FBeanCharStaggerConfig::LandStaggerStunDurationSeconds");
static_assert(offsetof(FBeanCharStaggerConfig, VelocityMultiplierOnStagger) == 8, "Offset mismatch for FBeanCharStaggerConfig::VelocityMultiplierOnStagger");

// /Script/BeanstalkRuntime.BeanCharStateMachineContext
// Kind: ScriptStruct; super: none
struct FBeanCharStateMachineContext
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* CurrentState; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0010
    void* NewState; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBeanCharStateMachineContext, CurrentState) == 8, "Offset mismatch for FBeanCharStateMachineContext::CurrentState");
static_assert(offsetof(FBeanCharStateMachineContext, NewState) == 32, "Offset mismatch for FBeanCharStateMachineContext::NewState");

// /Script/BeanstalkRuntime.BeanCharSwimmingConfig
// Kind: ScriptStruct; super: none
struct FBeanCharSwimmingConfig
{
public:
    float HeadingAdjustmentStrength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinImmersionDepth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxImmersionDepth; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TargetImmersionDepth; // 0x000C (Size: 0x4, Type: FloatProperty)
    float JumpMinVelocityZ; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float JumpMaxVelocityZ; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float JumpForceZ; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float JumpForceDuration; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanCharSwimmingConfig, HeadingAdjustmentStrength) == 0, "Offset mismatch for FBeanCharSwimmingConfig::HeadingAdjustmentStrength");
static_assert(offsetof(FBeanCharSwimmingConfig, MinImmersionDepth) == 4, "Offset mismatch for FBeanCharSwimmingConfig::MinImmersionDepth");
static_assert(offsetof(FBeanCharSwimmingConfig, MaxImmersionDepth) == 8, "Offset mismatch for FBeanCharSwimmingConfig::MaxImmersionDepth");
static_assert(offsetof(FBeanCharSwimmingConfig, TargetImmersionDepth) == 12, "Offset mismatch for FBeanCharSwimmingConfig::TargetImmersionDepth");
static_assert(offsetof(FBeanCharSwimmingConfig, JumpMinVelocityZ) == 16, "Offset mismatch for FBeanCharSwimmingConfig::JumpMinVelocityZ");
static_assert(offsetof(FBeanCharSwimmingConfig, JumpMaxVelocityZ) == 20, "Offset mismatch for FBeanCharSwimmingConfig::JumpMaxVelocityZ");
static_assert(offsetof(FBeanCharSwimmingConfig, JumpForceZ) == 24, "Offset mismatch for FBeanCharSwimmingConfig::JumpForceZ");
static_assert(offsetof(FBeanCharSwimmingConfig, JumpForceDuration) == 28, "Offset mismatch for FBeanCharSwimmingConfig::JumpForceDuration");

// /Script/BeanstalkRuntime.BeanCharTouchControlsConfig
// Kind: ScriptStruct; super: none
struct FBeanCharTouchControlsConfig
{
public:
    std::int32_t NumLandingPredictionTraceSubdivisions; // 0x0000 (Size: 0x4, Type: IntProperty)
    float JumpDiveButtonAdditionalCoyoteTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float JumpDiveButtonAdditionalReverseCoyoteTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanCharTouchControlsConfig, NumLandingPredictionTraceSubdivisions) == 0, "Offset mismatch for FBeanCharTouchControlsConfig::NumLandingPredictionTraceSubdivisions");
static_assert(offsetof(FBeanCharTouchControlsConfig, JumpDiveButtonAdditionalCoyoteTime) == 4, "Offset mismatch for FBeanCharTouchControlsConfig::JumpDiveButtonAdditionalCoyoteTime");
static_assert(offsetof(FBeanCharTouchControlsConfig, JumpDiveButtonAdditionalReverseCoyoteTime) == 8, "Offset mismatch for FBeanCharTouchControlsConfig::JumpDiveButtonAdditionalReverseCoyoteTime");

// /Script/BeanstalkRuntime.BeanCharZiplineConfig
// Kind: ScriptStruct; super: none
struct FBeanCharZiplineConfig
{
public:
    float ZiplineTurnSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanCharZiplineConfig, ZiplineTurnSpeed) == 0, "Offset mismatch for FBeanCharZiplineConfig::ZiplineTurnSpeed");

// /Script/BeanstalkRuntime.BeanJiggleStateWeightOverride
// Kind: ScriptStruct; super: none
struct FBeanJiggleStateWeightOverride
{
public:
    std::uint8_t StateId; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Weighting; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanJiggleStateWeightOverride, StateId) == 0, "Offset mismatch for FBeanJiggleStateWeightOverride::StateId");
static_assert(offsetof(FBeanJiggleStateWeightOverride, Weighting) == 4, "Offset mismatch for FBeanJiggleStateWeightOverride::Weighting");

// /Script/BeanstalkRuntime.BeanPhysicsDOFConstraint
// Kind: ScriptStruct; super: none
struct FBeanPhysicsDOFConstraint
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanPredictedLaunch
// Kind: ScriptStruct; super: none
struct FBeanPredictedLaunch
{
public:
    TWeakObjectPtr<void> Character; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t LaunchVector[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t CharacterLocationBeforeLaunch[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t CharacterVelocityBeforeLaunch[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> OptionalSourceSubobject; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FBeanPredictedLaunch, Character) == 0, "Offset mismatch for FBeanPredictedLaunch::Character");
static_assert(offsetof(FBeanPredictedLaunch, LaunchVector) == 8, "Offset mismatch for FBeanPredictedLaunch::LaunchVector");
static_assert(offsetof(FBeanPredictedLaunch, CharacterLocationBeforeLaunch) == 32, "Offset mismatch for FBeanPredictedLaunch::CharacterLocationBeforeLaunch");
static_assert(offsetof(FBeanPredictedLaunch, CharacterVelocityBeforeLaunch) == 56, "Offset mismatch for FBeanPredictedLaunch::CharacterVelocityBeforeLaunch");
static_assert(offsetof(FBeanPredictedLaunch, OptionalSourceSubobject) == 80, "Offset mismatch for FBeanPredictedLaunch::OptionalSourceSubobject");

// /Script/BeanstalkRuntime.BeanRagdollDebugComponentHistory
// Kind: ScriptStruct; super: none
struct FBeanRagdollDebugComponentHistory
{
public:
    TArray<void*> CapsuleHistory; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeshHistory; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBeanRagdollDebugComponentHistory, CapsuleHistory) == 0, "Offset mismatch for FBeanRagdollDebugComponentHistory::CapsuleHistory");
static_assert(offsetof(FBeanRagdollDebugComponentHistory, MeshHistory) == 16, "Offset mismatch for FBeanRagdollDebugComponentHistory::MeshHistory");

// /Script/BeanstalkRuntime.BeanRagdollDebugComponentSnapshot
// Kind: ScriptStruct; super: none
struct FBeanRagdollDebugComponentSnapshot
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBeanRagdollDebugComponentSnapshot, Location) == 0, "Offset mismatch for FBeanRagdollDebugComponentSnapshot::Location");
static_assert(offsetof(FBeanRagdollDebugComponentSnapshot, Velocity) == 24, "Offset mismatch for FBeanRagdollDebugComponentSnapshot::Velocity");

// /Script/BeanstalkRuntime.BeanRootMotionSource_MoveToWithTimeMappingForce
// Kind: ScriptStruct; super: RootMotionSource
struct FBeanRootMotionSource_MoveToWithTimeMappingForce
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t StartLocation[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetLocation[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    void* TimeMappingCurve; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    float PreviousPreCurvedTargetRotationTimeFraction; // 0x00F8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanRootMotionSource_MoveToWithTimeMappingForce, StartLocation) == 192, "Offset mismatch for FBeanRootMotionSource_MoveToWithTimeMappingForce::StartLocation");
static_assert(offsetof(FBeanRootMotionSource_MoveToWithTimeMappingForce, TargetLocation) == 216, "Offset mismatch for FBeanRootMotionSource_MoveToWithTimeMappingForce::TargetLocation");
static_assert(offsetof(FBeanRootMotionSource_MoveToWithTimeMappingForce, TimeMappingCurve) == 240, "Offset mismatch for FBeanRootMotionSource_MoveToWithTimeMappingForce::TimeMappingCurve");
static_assert(offsetof(FBeanRootMotionSource_MoveToWithTimeMappingForce, PreviousPreCurvedTargetRotationTimeFraction) == 248, "Offset mismatch for FBeanRootMotionSource_MoveToWithTimeMappingForce::PreviousPreCurvedTargetRotationTimeFraction");

// /Script/BeanstalkRuntime.BeanRootMotionSource_RotationCurveForce
// Kind: ScriptStruct; super: RootMotionSource
struct FBeanRootMotionSource_RotationCurveForce
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bUseNormalizedTime; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    void* RotationCurve; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    float SimulatedTargetTimeFraction; // 0x00D0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanRootMotionSource_RotationCurveForce, bUseNormalizedTime) == 192, "Offset mismatch for FBeanRootMotionSource_RotationCurveForce::bUseNormalizedTime");
static_assert(offsetof(FBeanRootMotionSource_RotationCurveForce, RotationCurve) == 200, "Offset mismatch for FBeanRootMotionSource_RotationCurveForce::RotationCurve");
static_assert(offsetof(FBeanRootMotionSource_RotationCurveForce, SimulatedTargetTimeFraction) == 208, "Offset mismatch for FBeanRootMotionSource_RotationCurveForce::SimulatedTargetTimeFraction");

// /Script/BeanstalkRuntime.BeanRootMotionSource_RotationDeltaForce
// Kind: ScriptStruct; super: RootMotionSource
struct FBeanRootMotionSource_RotationDeltaForce
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t DeltaRotation[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    void* TimeMappingCurve; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    float PreviousPreCurvedTargetRotationTimeFraction; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanRootMotionSource_RotationDeltaForce, DeltaRotation) == 192, "Offset mismatch for FBeanRootMotionSource_RotationDeltaForce::DeltaRotation");
static_assert(offsetof(FBeanRootMotionSource_RotationDeltaForce, TimeMappingCurve) == 224, "Offset mismatch for FBeanRootMotionSource_RotationDeltaForce::TimeMappingCurve");
static_assert(offsetof(FBeanRootMotionSource_RotationDeltaForce, PreviousPreCurvedTargetRotationTimeFraction) == 232, "Offset mismatch for FBeanRootMotionSource_RotationDeltaForce::PreviousPreCurvedTargetRotationTimeFraction");

// /Script/BeanstalkRuntime.BeanStateGameplayTagsDefinition
// Kind: ScriptStruct; super: none
struct FBeanStateGameplayTagsDefinition
{
public:
    std::uint8_t StateId; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t GrantedTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBeanStateGameplayTagsDefinition, StateId) == 0, "Offset mismatch for FBeanStateGameplayTagsDefinition::StateId");
static_assert(offsetof(FBeanStateGameplayTagsDefinition, GrantedTags) == 8, "Offset mismatch for FBeanStateGameplayTagsDefinition::GrantedTags");
static_assert(offsetof(FBeanStateGameplayTagsDefinition, BlockedTags) == 40, "Offset mismatch for FBeanStateGameplayTagsDefinition::BlockedTags");
static_assert(offsetof(FBeanStateGameplayTagsDefinition, BlockedAbilityTags) == 72, "Offset mismatch for FBeanStateGameplayTagsDefinition::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanStateHistoryItem
// Kind: ScriptStruct; super: none
struct FBeanStateHistoryItem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanStateHistoryRecord
// Kind: ScriptStruct; super: none
struct FBeanStateHistoryRecord
{
public:
    std::uint8_t StateId; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerID; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsReplaying; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBeanStateHistoryRecord, StateId) == 0, "Offset mismatch for FBeanStateHistoryRecord::StateId");
static_assert(offsetof(FBeanStateHistoryRecord, LayerID) == 1, "Offset mismatch for FBeanStateHistoryRecord::LayerID");
static_assert(offsetof(FBeanStateHistoryRecord, bIsReplaying) == 2, "Offset mismatch for FBeanStateHistoryRecord::bIsReplaying");

// /Script/BeanstalkRuntime.InteractSelectionData_BeanPawn
// Kind: ScriptStruct; super: InteractSelectionData_Base
struct FInteractSelectionData_BeanPawn
{
public:
    float InteractRadius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float InteractHalfAngle; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInteractSelectionData_BeanPawn, InteractRadius) == 0, "Offset mismatch for FInteractSelectionData_BeanPawn::InteractRadius");
static_assert(offsetof(FInteractSelectionData_BeanPawn, InteractHalfAngle) == 4, "Offset mismatch for FInteractSelectionData_BeanPawn::InteractHalfAngle");

// /Script/BeanstalkRuntime.BeanAudioDataAsset
// Kind: Class; super: DataAsset
class UBeanAudioDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> SoundListsByCategory; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UBeanAudioDataAsset, SoundListsByCategory) == 40, "Offset mismatch for UBeanAudioDataAsset::SoundListsByCategory");

// /Script/BeanstalkRuntime.BeanCameraModeOverrideComponent
// Kind: Class; super: FortCameraModeOverrideComponent
class UBeanCameraModeOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* BeanCurrentCameraMode; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> CharacterConfig; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanCameraModeOverrideComponent, BeanCurrentCameraMode) == 200, "Offset mismatch for UBeanCameraModeOverrideComponent::BeanCurrentCameraMode");
static_assert(offsetof(UBeanCameraModeOverrideComponent, CharacterConfig) == 208, "Offset mismatch for UBeanCameraModeOverrideComponent::CharacterConfig");

// /Script/BeanstalkRuntime.BeanCameraMode_ThirdPerson
// Kind: Class; super: FortCameraMode_ThirdPerson
class UBeanCameraMode_ThirdPerson
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    std::uint8_t bEnableDraggedBehaviour; // 0x2080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x2081
    double ControllerYawToleranceForDragEnable; // 0x2088 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DisableDraggedCameraTags[0x20]; // 0x2090 (Size: 0x20, Type: StructProperty)
    double ResetCameraPitch; // 0x20B0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UBeanCameraMode_ThirdPerson, bEnableDraggedBehaviour) == 8320, "Offset mismatch for UBeanCameraMode_ThirdPerson::bEnableDraggedBehaviour");
static_assert(offsetof(UBeanCameraMode_ThirdPerson, ControllerYawToleranceForDragEnable) == 8328, "Offset mismatch for UBeanCameraMode_ThirdPerson::ControllerYawToleranceForDragEnable");
static_assert(offsetof(UBeanCameraMode_ThirdPerson, DisableDraggedCameraTags) == 8336, "Offset mismatch for UBeanCameraMode_ThirdPerson::DisableDraggedCameraTags");
static_assert(offsetof(UBeanCameraMode_ThirdPerson, ResetCameraPitch) == 8368, "Offset mismatch for UBeanCameraMode_ThirdPerson::ResetCameraPitch");

// /Script/BeanstalkRuntime.BeanCharAnimInstance
// Kind: Class; super: FortAnimInstance
class UBeanCharAnimInstance
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    std::uint8_t bIsSimulatedProxy; // 0x0450 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UpperStateID; // 0x0451 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LowerStateID; // 0x0452 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrevLowerStateID; // 0x0453 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x0454 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsMoving; // 0x0455 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGrounded; // 0x0456 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0457
    float TurningPercentage; // 0x0458 (Size: 0x4, Type: FloatProperty)
    float SpeedPercentage; // 0x045C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentVelocity[0x18]; // 0x0460 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsAnticipatingJumpLanding; // 0x0478 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0479
    std::uint8_t LastRagdollImpactForce[0x18]; // 0x0480 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastImpactForce[0x18]; // 0x0498 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastImpactRelativeDirection[0x18]; // 0x04B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TurnState; // 0x04C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsGrabbing; // 0x04C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasGrabTarget; // 0x04CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x04CB
    float GrabStumbleDuration; // 0x04CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t LeftHandIKPosition[0x18]; // 0x04D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightHandIKPosition[0x18]; // 0x04E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftHandIKRotation[0x18]; // 0x0500 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightHandIKRotation[0x18]; // 0x0518 (Size: 0x18, Type: StructProperty)
    float IkAlpha; // 0x0530 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseImpactAnims; // 0x0534 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImpactTriggered; // 0x0535 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ImpactAnimType; // 0x0536 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x1]; // 0x0537
    float LowImpactUpperThresholdReciprocal; // 0x0538 (Size: 0x4, Type: FloatProperty)
    float MediumImpactUpperThresholdReciprocal; // 0x053C (Size: 0x4, Type: FloatProperty)
    float HighImpactUpperThresholdReciprocal; // 0x0540 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0544
    std::uint8_t JiggleRotator0[0x18]; // 0x0548 (Size: 0x18, Type: StructProperty)
    std::uint8_t JiggleRotator1[0x18]; // 0x0560 (Size: 0x18, Type: StructProperty)
    std::uint8_t JiggleRotator2[0x18]; // 0x0578 (Size: 0x18, Type: StructProperty)
    std::uint8_t bLowerStateUsesLocomotionAnim; // 0x0590 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WeaponCoreAnim; // 0x0591 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0006[0x2]; // 0x0592
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x0594 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanCharAnimInstance, bIsSimulatedProxy) == 1104, "Offset mismatch for UBeanCharAnimInstance::bIsSimulatedProxy");
static_assert(offsetof(UBeanCharAnimInstance, UpperStateID) == 1105, "Offset mismatch for UBeanCharAnimInstance::UpperStateID");
static_assert(offsetof(UBeanCharAnimInstance, LowerStateID) == 1106, "Offset mismatch for UBeanCharAnimInstance::LowerStateID");
static_assert(offsetof(UBeanCharAnimInstance, PrevLowerStateID) == 1107, "Offset mismatch for UBeanCharAnimInstance::PrevLowerStateID");
static_assert(offsetof(UBeanCharAnimInstance, MovementMode) == 1108, "Offset mismatch for UBeanCharAnimInstance::MovementMode");
static_assert(offsetof(UBeanCharAnimInstance, bIsMoving) == 1109, "Offset mismatch for UBeanCharAnimInstance::bIsMoving");
static_assert(offsetof(UBeanCharAnimInstance, bIsGrounded) == 1110, "Offset mismatch for UBeanCharAnimInstance::bIsGrounded");
static_assert(offsetof(UBeanCharAnimInstance, TurningPercentage) == 1112, "Offset mismatch for UBeanCharAnimInstance::TurningPercentage");
static_assert(offsetof(UBeanCharAnimInstance, SpeedPercentage) == 1116, "Offset mismatch for UBeanCharAnimInstance::SpeedPercentage");
static_assert(offsetof(UBeanCharAnimInstance, CurrentVelocity) == 1120, "Offset mismatch for UBeanCharAnimInstance::CurrentVelocity");
static_assert(offsetof(UBeanCharAnimInstance, bIsAnticipatingJumpLanding) == 1144, "Offset mismatch for UBeanCharAnimInstance::bIsAnticipatingJumpLanding");
static_assert(offsetof(UBeanCharAnimInstance, LastRagdollImpactForce) == 1152, "Offset mismatch for UBeanCharAnimInstance::LastRagdollImpactForce");
static_assert(offsetof(UBeanCharAnimInstance, LastImpactForce) == 1176, "Offset mismatch for UBeanCharAnimInstance::LastImpactForce");
static_assert(offsetof(UBeanCharAnimInstance, LastImpactRelativeDirection) == 1200, "Offset mismatch for UBeanCharAnimInstance::LastImpactRelativeDirection");
static_assert(offsetof(UBeanCharAnimInstance, TurnState) == 1224, "Offset mismatch for UBeanCharAnimInstance::TurnState");
static_assert(offsetof(UBeanCharAnimInstance, bIsGrabbing) == 1225, "Offset mismatch for UBeanCharAnimInstance::bIsGrabbing");
static_assert(offsetof(UBeanCharAnimInstance, bHasGrabTarget) == 1226, "Offset mismatch for UBeanCharAnimInstance::bHasGrabTarget");
static_assert(offsetof(UBeanCharAnimInstance, GrabStumbleDuration) == 1228, "Offset mismatch for UBeanCharAnimInstance::GrabStumbleDuration");
static_assert(offsetof(UBeanCharAnimInstance, LeftHandIKPosition) == 1232, "Offset mismatch for UBeanCharAnimInstance::LeftHandIKPosition");
static_assert(offsetof(UBeanCharAnimInstance, RightHandIKPosition) == 1256, "Offset mismatch for UBeanCharAnimInstance::RightHandIKPosition");
static_assert(offsetof(UBeanCharAnimInstance, LeftHandIKRotation) == 1280, "Offset mismatch for UBeanCharAnimInstance::LeftHandIKRotation");
static_assert(offsetof(UBeanCharAnimInstance, RightHandIKRotation) == 1304, "Offset mismatch for UBeanCharAnimInstance::RightHandIKRotation");
static_assert(offsetof(UBeanCharAnimInstance, IkAlpha) == 1328, "Offset mismatch for UBeanCharAnimInstance::IkAlpha");
static_assert(offsetof(UBeanCharAnimInstance, bUseImpactAnims) == 1332, "Offset mismatch for UBeanCharAnimInstance::bUseImpactAnims");
static_assert(offsetof(UBeanCharAnimInstance, bImpactTriggered) == 1333, "Offset mismatch for UBeanCharAnimInstance::bImpactTriggered");
static_assert(offsetof(UBeanCharAnimInstance, ImpactAnimType) == 1334, "Offset mismatch for UBeanCharAnimInstance::ImpactAnimType");
static_assert(offsetof(UBeanCharAnimInstance, LowImpactUpperThresholdReciprocal) == 1336, "Offset mismatch for UBeanCharAnimInstance::LowImpactUpperThresholdReciprocal");
static_assert(offsetof(UBeanCharAnimInstance, MediumImpactUpperThresholdReciprocal) == 1340, "Offset mismatch for UBeanCharAnimInstance::MediumImpactUpperThresholdReciprocal");
static_assert(offsetof(UBeanCharAnimInstance, HighImpactUpperThresholdReciprocal) == 1344, "Offset mismatch for UBeanCharAnimInstance::HighImpactUpperThresholdReciprocal");
static_assert(offsetof(UBeanCharAnimInstance, JiggleRotator0) == 1352, "Offset mismatch for UBeanCharAnimInstance::JiggleRotator0");
static_assert(offsetof(UBeanCharAnimInstance, JiggleRotator1) == 1376, "Offset mismatch for UBeanCharAnimInstance::JiggleRotator1");
static_assert(offsetof(UBeanCharAnimInstance, JiggleRotator2) == 1400, "Offset mismatch for UBeanCharAnimInstance::JiggleRotator2");
static_assert(offsetof(UBeanCharAnimInstance, bLowerStateUsesLocomotionAnim) == 1424, "Offset mismatch for UBeanCharAnimInstance::bLowerStateUsesLocomotionAnim");
static_assert(offsetof(UBeanCharAnimInstance, WeaponCoreAnim) == 1425, "Offset mismatch for UBeanCharAnimInstance::WeaponCoreAnim");
static_assert(offsetof(UBeanCharAnimInstance, BeanCharacterConfig) == 1428, "Offset mismatch for UBeanCharAnimInstance::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanCharBeingGrabbedComponent
// Kind: Class; super: ActorComponent
class UBeanCharBeingGrabbedComponent
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

static_assert(offsetof(UBeanCharBeingGrabbedComponent, PrimaryComponentTick) == 56, "Offset mismatch for UBeanCharBeingGrabbedComponent::PrimaryComponentTick");
static_assert(offsetof(UBeanCharBeingGrabbedComponent, ComponentTags) == 104, "Offset mismatch for UBeanCharBeingGrabbedComponent::ComponentTags");
static_assert(offsetof(UBeanCharBeingGrabbedComponent, AssetUserData) == 120, "Offset mismatch for UBeanCharBeingGrabbedComponent::AssetUserData");
static_assert(offsetof(UBeanCharBeingGrabbedComponent, UCSSerializationIndex) == 144, "Offset mismatch for UBeanCharBeingGrabbedComponent::UCSSerializationIndex");
static_assert(offsetof(UBeanCharBeingGrabbedComponent, bNetAddressable) == 152, "Offset mismatch for UBeanCharBeingGrabbedComponent::bNetAddressable");
static_assert(offsetof(UBeanCharBeingGrabbedComponent, bAutoActivate) == 154, "Offset mismatch for UBeanCharBeingGrabbedComponent::bAutoActivate");
static_assert(offsetof(UBeanCharBeingGrabbedComponent, bIsEditorOnly) == 155, "Offset mismatch for UBeanCharBeingGrabbedComponent::bIsEditorOnly");
static_assert(offsetof(UBeanCharBeingGrabbedComponent, CreationMethod) == 185, "Offset mismatch for UBeanCharBeingGrabbedComponent::CreationMethod");
static_assert(offsetof(UBeanCharBeingGrabbedComponent, OnComponentActivated) == 186, "Offset mismatch for UBeanCharBeingGrabbedComponent::OnComponentActivated");
static_assert(offsetof(UBeanCharBeingGrabbedComponent, OnComponentDeactivated) == 187, "Offset mismatch for UBeanCharBeingGrabbedComponent::OnComponentDeactivated");

// /Script/BeanstalkRuntime.BeanCharCollisionManagerComponent
// Kind: Class; super: ActorComponent
class UBeanCharCollisionManagerComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    double MaxConfigImpactThreshold; // 0x0118 (Size: 0x8, Type: DoubleProperty)
    double NextImpactCueExecution; // 0x0120 (Size: 0x8, Type: DoubleProperty)
    float RagdollThresholdMultiplier; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBeanCharCollisionManagerComponent, MaxConfigImpactThreshold) == 280, "Offset mismatch for UBeanCharCollisionManagerComponent::MaxConfigImpactThreshold");
static_assert(offsetof(UBeanCharCollisionManagerComponent, NextImpactCueExecution) == 288, "Offset mismatch for UBeanCharCollisionManagerComponent::NextImpactCueExecution");
static_assert(offsetof(UBeanCharCollisionManagerComponent, RagdollThresholdMultiplier) == 296, "Offset mismatch for UBeanCharCollisionManagerComponent::RagdollThresholdMultiplier");

// /Script/BeanstalkRuntime.BeanCharConfigObject
// Kind: Class; super: Object
class UBeanCharConfigObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Interaction[0xF0]; // 0x0028 (Size: 0xF0, Type: StructProperty)
    std::uint8_t InventoryMode[0x80]; // 0x0118 (Size: 0x80, Type: StructProperty)
    std::uint8_t Movement[0x178]; // 0x0198 (Size: 0x178, Type: StructProperty)
    std::uint8_t Jump[0x48]; // 0x0310 (Size: 0x48, Type: StructProperty)
    std::uint8_t Dive[0x58]; // 0x0358 (Size: 0x58, Type: StructProperty)
    std::uint8_t Impact[0x110]; // 0x03B0 (Size: 0x110, Type: StructProperty)
    std::uint8_t Stagger[0x10]; // 0x04C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Ragdoll[0x158]; // 0x04D0 (Size: 0x158, Type: StructProperty)
    std::uint8_t Roll[0x28]; // 0x0628 (Size: 0x28, Type: StructProperty)
    std::uint8_t Grab[0xD0]; // 0x0650 (Size: 0xD0, Type: StructProperty)
    std::uint8_t Getup[0x28]; // 0x0720 (Size: 0x28, Type: StructProperty)
    std::uint8_t GetupRoll[0x10]; // 0x0748 (Size: 0x10, Type: StructProperty)
    std::uint8_t Mantle[0xC0]; // 0x0758 (Size: 0xC0, Type: StructProperty)
    std::uint8_t Jostle[0x30]; // 0x0818 (Size: 0x30, Type: StructProperty)
    std::uint8_t Camera[0x18]; // 0x0848 (Size: 0x18, Type: StructProperty)
    std::uint8_t Cosmetics[0x10]; // 0x0860 (Size: 0x10, Type: StructProperty)
    std::uint8_t Swimming[0x20]; // 0x0870 (Size: 0x20, Type: StructProperty)
    std::uint8_t Zipline[0x8]; // 0x0890 (Size: 0x8, Type: StructProperty)
    std::uint8_t Jiggle[0x90]; // 0x0898 (Size: 0x90, Type: StructProperty)
    std::uint8_t HUD[0x20]; // 0x0928 (Size: 0x20, Type: StructProperty)
    std::uint8_t TouchControls[0x1]; // 0x0948 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharConfigObject, Interaction) == 40, "Offset mismatch for UBeanCharConfigObject::Interaction");
static_assert(offsetof(UBeanCharConfigObject, InventoryMode) == 280, "Offset mismatch for UBeanCharConfigObject::InventoryMode");
static_assert(offsetof(UBeanCharConfigObject, Movement) == 408, "Offset mismatch for UBeanCharConfigObject::Movement");
static_assert(offsetof(UBeanCharConfigObject, Jump) == 784, "Offset mismatch for UBeanCharConfigObject::Jump");
static_assert(offsetof(UBeanCharConfigObject, Dive) == 856, "Offset mismatch for UBeanCharConfigObject::Dive");
static_assert(offsetof(UBeanCharConfigObject, Impact) == 944, "Offset mismatch for UBeanCharConfigObject::Impact");
static_assert(offsetof(UBeanCharConfigObject, Stagger) == 1216, "Offset mismatch for UBeanCharConfigObject::Stagger");
static_assert(offsetof(UBeanCharConfigObject, Ragdoll) == 1232, "Offset mismatch for UBeanCharConfigObject::Ragdoll");
static_assert(offsetof(UBeanCharConfigObject, Roll) == 1576, "Offset mismatch for UBeanCharConfigObject::Roll");
static_assert(offsetof(UBeanCharConfigObject, Grab) == 1616, "Offset mismatch for UBeanCharConfigObject::Grab");
static_assert(offsetof(UBeanCharConfigObject, Getup) == 1824, "Offset mismatch for UBeanCharConfigObject::Getup");
static_assert(offsetof(UBeanCharConfigObject, GetupRoll) == 1864, "Offset mismatch for UBeanCharConfigObject::GetupRoll");
static_assert(offsetof(UBeanCharConfigObject, Mantle) == 1880, "Offset mismatch for UBeanCharConfigObject::Mantle");
static_assert(offsetof(UBeanCharConfigObject, Jostle) == 2072, "Offset mismatch for UBeanCharConfigObject::Jostle");
static_assert(offsetof(UBeanCharConfigObject, Camera) == 2120, "Offset mismatch for UBeanCharConfigObject::Camera");
static_assert(offsetof(UBeanCharConfigObject, Cosmetics) == 2144, "Offset mismatch for UBeanCharConfigObject::Cosmetics");
static_assert(offsetof(UBeanCharConfigObject, Swimming) == 2160, "Offset mismatch for UBeanCharConfigObject::Swimming");
static_assert(offsetof(UBeanCharConfigObject, Zipline) == 2192, "Offset mismatch for UBeanCharConfigObject::Zipline");
static_assert(offsetof(UBeanCharConfigObject, Jiggle) == 2200, "Offset mismatch for UBeanCharConfigObject::Jiggle");
static_assert(offsetof(UBeanCharConfigObject, HUD) == 2344, "Offset mismatch for UBeanCharConfigObject::HUD");
static_assert(offsetof(UBeanCharConfigObject, TouchControls) == 2376, "Offset mismatch for UBeanCharConfigObject::TouchControls");

// /Script/BeanstalkRuntime.BeanCharGrabComponent
// Kind: Class; super: ActorComponent
class UBeanCharGrabComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ArmsOutMontage; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LeftHandIKPosition[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightHandIKPosition[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftHandIKRotation[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightHandIKRotation[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    float IkAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasIKTarget; // 0x012C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGrabStumbling; // 0x012D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x22]; // 0x012E
    TWeakObjectPtr<void> GrabTarget; // 0x0150 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0158
    float ServerLatestHoldStartTime; // 0x0168 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBeanCharGrabComponent, ArmsOutMontage) == 192, "Offset mismatch for UBeanCharGrabComponent::ArmsOutMontage");
static_assert(offsetof(UBeanCharGrabComponent, LeftHandIKPosition) == 200, "Offset mismatch for UBeanCharGrabComponent::LeftHandIKPosition");
static_assert(offsetof(UBeanCharGrabComponent, RightHandIKPosition) == 224, "Offset mismatch for UBeanCharGrabComponent::RightHandIKPosition");
static_assert(offsetof(UBeanCharGrabComponent, LeftHandIKRotation) == 248, "Offset mismatch for UBeanCharGrabComponent::LeftHandIKRotation");
static_assert(offsetof(UBeanCharGrabComponent, RightHandIKRotation) == 272, "Offset mismatch for UBeanCharGrabComponent::RightHandIKRotation");
static_assert(offsetof(UBeanCharGrabComponent, IkAlpha) == 296, "Offset mismatch for UBeanCharGrabComponent::IkAlpha");
static_assert(offsetof(UBeanCharGrabComponent, bHasIKTarget) == 300, "Offset mismatch for UBeanCharGrabComponent::bHasIKTarget");
static_assert(offsetof(UBeanCharGrabComponent, bIsGrabStumbling) == 301, "Offset mismatch for UBeanCharGrabComponent::bIsGrabStumbling");
static_assert(offsetof(UBeanCharGrabComponent, GrabTarget) == 336, "Offset mismatch for UBeanCharGrabComponent::GrabTarget");
static_assert(offsetof(UBeanCharGrabComponent, ServerLatestHoldStartTime) == 360, "Offset mismatch for UBeanCharGrabComponent::ServerLatestHoldStartTime");

// /Script/BeanstalkRuntime.BeanCharMantleComponent
// Kind: Class; super: ActorComponent
class UBeanCharMantleComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ClamberingEnabled[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> BeanCharacter; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    float CachedClamberingEnabledValue; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00F4
    double LastClamberingEnabledCacheTime; // 0x00F8 (Size: 0x8, Type: DoubleProperty)
    double ClamberingEnableCacheInterval; // 0x0100 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UBeanCharMantleComponent, ClamberingEnabled) == 192, "Offset mismatch for UBeanCharMantleComponent::ClamberingEnabled");
static_assert(offsetof(UBeanCharMantleComponent, BeanCharacter) == 232, "Offset mismatch for UBeanCharMantleComponent::BeanCharacter");
static_assert(offsetof(UBeanCharMantleComponent, CachedClamberingEnabledValue) == 240, "Offset mismatch for UBeanCharMantleComponent::CachedClamberingEnabledValue");
static_assert(offsetof(UBeanCharMantleComponent, LastClamberingEnabledCacheTime) == 248, "Offset mismatch for UBeanCharMantleComponent::LastClamberingEnabledCacheTime");
static_assert(offsetof(UBeanCharMantleComponent, ClamberingEnableCacheInterval) == 256, "Offset mismatch for UBeanCharMantleComponent::ClamberingEnableCacheInterval");

// /Script/BeanstalkRuntime.BeanCharMovementComponent
// Kind: Class; super: FortMovementComp_CharacterAthena
class UBeanCharMovementComponent
{
public:
    std::uint8_t Pad_0000[0x6784]; // 0x0000
    float MovementBaseVelocitySamplingPeriod; // 0x6784 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentSampledMovementBaseData[0x119]; // 0x6788 (Size: 0x119, Type: StructProperty)
    std::uint8_t bAllowFloorHeightAdjustments; // 0x68A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TurnState; // 0x68A2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xD]; // 0x68A3
    TWeakObjectPtr<void> CharConfig; // 0x68B0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanCharMovementComponent, MovementBaseVelocitySamplingPeriod) == 26500, "Offset mismatch for UBeanCharMovementComponent::MovementBaseVelocitySamplingPeriod");
static_assert(offsetof(UBeanCharMovementComponent, CurrentSampledMovementBaseData) == 26504, "Offset mismatch for UBeanCharMovementComponent::CurrentSampledMovementBaseData");
static_assert(offsetof(UBeanCharMovementComponent, bAllowFloorHeightAdjustments) == 26785, "Offset mismatch for UBeanCharMovementComponent::bAllowFloorHeightAdjustments");
static_assert(offsetof(UBeanCharMovementComponent, TurnState) == 26786, "Offset mismatch for UBeanCharMovementComponent::TurnState");
static_assert(offsetof(UBeanCharMovementComponent, CharConfig) == 26800, "Offset mismatch for UBeanCharMovementComponent::CharConfig");

// /Script/BeanstalkRuntime.BeanCharRagdollComponent
// Kind: Class; super: ActorComponent
class UBeanCharRagdollComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PhysicsConstraintComponentReference[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RootPrimitiveReference[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkeletalMeshReference[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnableInputControlCurve; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0139
    std::uint8_t RagdollInputControlWithTimeCurve[0x49]; // 0x0140 (Size: 0x49, Type: StructProperty)
    std::uint8_t bIsConfiguredCorrectly; // 0x0189 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasRequestedRagdollExit; // 0x018A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x018B
    std::uint8_t StartingMeshTransform[0x60]; // 0x0190 (Size: 0x60, Type: StructProperty)
    std::uint8_t OriginalActorRootCollisionResponse[0x88]; // 0x01F0 (Size: 0x88, Type: StructProperty)
    std::uint8_t RagdollControlInputVector[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsRagdollGrounded; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0291
    float TimeOnGround; // 0x0294 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0298
    std::uint8_t LatestRagdollFloorOffset[0x18]; // 0x02A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LatestRagdollFloorNormal[0x18]; // 0x02C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentImpactData[0x40]; // 0x02D8 (Size: 0x40, Type: StructProperty)
    float CurrentGravityZOverride; // 0x0318 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x031C
    std::uint8_t CurrentAdditionalGravity[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    TArray<void*> CachedMeshBodyIndexesForCCD; // 0x0348 (Size: 0x10, Type: ArrayProperty)
    double LowerLinearDistanceTarget; // 0x0358 (Size: 0x8, Type: DoubleProperty)
    double UpperLinearDistanceTarget; // 0x0360 (Size: 0x8, Type: DoubleProperty)
    float DefaultHardSnapLinearDistance; // 0x0368 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x036C
    double MaxHardsnapLinearDistance; // 0x0370 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bHasAddedIgnoredObjects; // 0x0378 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0xAF]; // 0x0379
    std::uint8_t RagdollComponentHistory[0x1]; // 0x0428 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharRagdollComponent, PhysicsConstraintComponentReference) == 192, "Offset mismatch for UBeanCharRagdollComponent::PhysicsConstraintComponentReference");
static_assert(offsetof(UBeanCharRagdollComponent, RootPrimitiveReference) == 232, "Offset mismatch for UBeanCharRagdollComponent::RootPrimitiveReference");
static_assert(offsetof(UBeanCharRagdollComponent, SkeletalMeshReference) == 272, "Offset mismatch for UBeanCharRagdollComponent::SkeletalMeshReference");
static_assert(offsetof(UBeanCharRagdollComponent, bEnableInputControlCurve) == 312, "Offset mismatch for UBeanCharRagdollComponent::bEnableInputControlCurve");
static_assert(offsetof(UBeanCharRagdollComponent, RagdollInputControlWithTimeCurve) == 320, "Offset mismatch for UBeanCharRagdollComponent::RagdollInputControlWithTimeCurve");
static_assert(offsetof(UBeanCharRagdollComponent, bIsConfiguredCorrectly) == 393, "Offset mismatch for UBeanCharRagdollComponent::bIsConfiguredCorrectly");
static_assert(offsetof(UBeanCharRagdollComponent, bHasRequestedRagdollExit) == 394, "Offset mismatch for UBeanCharRagdollComponent::bHasRequestedRagdollExit");
static_assert(offsetof(UBeanCharRagdollComponent, StartingMeshTransform) == 400, "Offset mismatch for UBeanCharRagdollComponent::StartingMeshTransform");
static_assert(offsetof(UBeanCharRagdollComponent, OriginalActorRootCollisionResponse) == 496, "Offset mismatch for UBeanCharRagdollComponent::OriginalActorRootCollisionResponse");
static_assert(offsetof(UBeanCharRagdollComponent, RagdollControlInputVector) == 632, "Offset mismatch for UBeanCharRagdollComponent::RagdollControlInputVector");
static_assert(offsetof(UBeanCharRagdollComponent, bIsRagdollGrounded) == 656, "Offset mismatch for UBeanCharRagdollComponent::bIsRagdollGrounded");
static_assert(offsetof(UBeanCharRagdollComponent, TimeOnGround) == 660, "Offset mismatch for UBeanCharRagdollComponent::TimeOnGround");
static_assert(offsetof(UBeanCharRagdollComponent, LatestRagdollFloorOffset) == 680, "Offset mismatch for UBeanCharRagdollComponent::LatestRagdollFloorOffset");
static_assert(offsetof(UBeanCharRagdollComponent, LatestRagdollFloorNormal) == 704, "Offset mismatch for UBeanCharRagdollComponent::LatestRagdollFloorNormal");
static_assert(offsetof(UBeanCharRagdollComponent, CurrentImpactData) == 728, "Offset mismatch for UBeanCharRagdollComponent::CurrentImpactData");
static_assert(offsetof(UBeanCharRagdollComponent, CurrentGravityZOverride) == 792, "Offset mismatch for UBeanCharRagdollComponent::CurrentGravityZOverride");
static_assert(offsetof(UBeanCharRagdollComponent, CurrentAdditionalGravity) == 800, "Offset mismatch for UBeanCharRagdollComponent::CurrentAdditionalGravity");
static_assert(offsetof(UBeanCharRagdollComponent, CachedMeshBodyIndexesForCCD) == 840, "Offset mismatch for UBeanCharRagdollComponent::CachedMeshBodyIndexesForCCD");
static_assert(offsetof(UBeanCharRagdollComponent, LowerLinearDistanceTarget) == 856, "Offset mismatch for UBeanCharRagdollComponent::LowerLinearDistanceTarget");
static_assert(offsetof(UBeanCharRagdollComponent, UpperLinearDistanceTarget) == 864, "Offset mismatch for UBeanCharRagdollComponent::UpperLinearDistanceTarget");
static_assert(offsetof(UBeanCharRagdollComponent, DefaultHardSnapLinearDistance) == 872, "Offset mismatch for UBeanCharRagdollComponent::DefaultHardSnapLinearDistance");
static_assert(offsetof(UBeanCharRagdollComponent, MaxHardsnapLinearDistance) == 880, "Offset mismatch for UBeanCharRagdollComponent::MaxHardsnapLinearDistance");
static_assert(offsetof(UBeanCharRagdollComponent, bHasAddedIgnoredObjects) == 888, "Offset mismatch for UBeanCharRagdollComponent::bHasAddedIgnoredObjects");
static_assert(offsetof(UBeanCharRagdollComponent, RagdollComponentHistory) == 1064, "Offset mismatch for UBeanCharRagdollComponent::RagdollComponentHistory");

// /Script/BeanstalkRuntime.BeanCharStateBase
// Kind: Class; super: Object
class UBeanCharStateBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharStateBase, StateId) == 40, "Offset mismatch for UBeanCharStateBase::StateId");
static_assert(offsetof(UBeanCharStateBase, LayerMask) == 41, "Offset mismatch for UBeanCharStateBase::LayerMask");
static_assert(offsetof(UBeanCharStateBase, MovementMode) == 42, "Offset mismatch for UBeanCharStateBase::MovementMode");
static_assert(offsetof(UBeanCharStateBase, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharStateBase::FortCustomMovementMode");
static_assert(offsetof(UBeanCharStateBase, GameplayTag) == 44, "Offset mismatch for UBeanCharStateBase::GameplayTag");
static_assert(offsetof(UBeanCharStateBase, GameplayCue) == 48, "Offset mismatch for UBeanCharStateBase::GameplayCue");
static_assert(offsetof(UBeanCharStateBase, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharStateBase::GameplayCueParameters");
static_assert(offsetof(UBeanCharStateBase, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharStateBase::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharStateBase, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharStateBase::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharStateBase, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharStateBase::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharStateBase, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharStateBase::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharStateBase, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharStateBase::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharStateBase, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharStateBase::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharStateBase, Priority) == 272, "Offset mismatch for UBeanCharStateBase::Priority");
static_assert(offsetof(UBeanCharStateBase, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharStateBase::bShouldRemainVertical");
static_assert(offsetof(UBeanCharStateBase, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharStateBase::bCanPerformMantle");
static_assert(offsetof(UBeanCharStateBase, DecelerationOverride) == 280, "Offset mismatch for UBeanCharStateBase::DecelerationOverride");
static_assert(offsetof(UBeanCharStateBase, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharStateBase::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharStateBase, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharStateBase::OwnerStateMachine");
static_assert(offsetof(UBeanCharStateBase, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharStateBase::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharStateBase, GrantedTags) == 312, "Offset mismatch for UBeanCharStateBase::GrantedTags");
static_assert(offsetof(UBeanCharStateBase, BlockedTags) == 344, "Offset mismatch for UBeanCharStateBase::BlockedTags");
static_assert(offsetof(UBeanCharStateBase, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharStateBase::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharStateMachine
// Kind: Class; super: ActorComponent
class UBeanCharStateMachine
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bIsInitialized; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    std::uint8_t Layers[0xA8]; // 0x00C8 (Size: 0xA8, Type: StructProperty)
    TArray<void*> TempTickStateList; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> States; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0190
    std::uint8_t bFlushMoveToServerAtEndOfFrame; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesAtEndOfFrame; // 0x01A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReplaying; // 0x01A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ServerForceSetUpperState; // 0x01A3 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ServerForceSetLowerState; // 0x01A4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x1]; // 0x01A5
    std::uint16_t SimulatedProxyStateData; // 0x01A6 (Size: 0x2, Type: UInt16Property)
    std::uint32_t AutonomousProxyServerStateData; // 0x01A8 (Size: 0x4, Type: UInt32Property)
    std::uint8_t StateSyncID; // 0x01AC (Size: 0x1, Type: ByteProperty)
    std::uint8_t ServerStateSyncID; // 0x01AD (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x2]; // 0x01AE
    TArray<void*> AutonomousProxyStateHistory; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    float AutonomousProxyServerStateCheckTimer; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    float RequestClientStateChangeTimeout; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RequestClientStateChangePendingStateID; // 0x01C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x7]; // 0x01C9
    TArray<void*> StateTagsDefinitions; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    void* AnimLayer_Swimming; // 0x01E0 (Size: 0x8, Type: ClassProperty)
    void* AnimLayer_Ragdoll; // 0x01E8 (Size: 0x8, Type: ClassProperty)
    void* AnimLayer_Zipline; // 0x01F0 (Size: 0x8, Type: ClassProperty)
    void* AnimLayer_Flying; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    void* AnimLayer_Grab; // 0x0200 (Size: 0x8, Type: ClassProperty)
    void* AnimLayer_EditMode; // 0x0208 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UBeanCharStateMachine, bIsInitialized) == 192, "Offset mismatch for UBeanCharStateMachine::bIsInitialized");
static_assert(offsetof(UBeanCharStateMachine, Layers) == 200, "Offset mismatch for UBeanCharStateMachine::Layers");
static_assert(offsetof(UBeanCharStateMachine, TempTickStateList) == 368, "Offset mismatch for UBeanCharStateMachine::TempTickStateList");
static_assert(offsetof(UBeanCharStateMachine, States) == 384, "Offset mismatch for UBeanCharStateMachine::States");
static_assert(offsetof(UBeanCharStateMachine, bFlushMoveToServerAtEndOfFrame) == 416, "Offset mismatch for UBeanCharStateMachine::bFlushMoveToServerAtEndOfFrame");
static_assert(offsetof(UBeanCharStateMachine, bFlushPendingStateChangesAtEndOfFrame) == 417, "Offset mismatch for UBeanCharStateMachine::bFlushPendingStateChangesAtEndOfFrame");
static_assert(offsetof(UBeanCharStateMachine, bIsReplaying) == 418, "Offset mismatch for UBeanCharStateMachine::bIsReplaying");
static_assert(offsetof(UBeanCharStateMachine, ServerForceSetUpperState) == 419, "Offset mismatch for UBeanCharStateMachine::ServerForceSetUpperState");
static_assert(offsetof(UBeanCharStateMachine, ServerForceSetLowerState) == 420, "Offset mismatch for UBeanCharStateMachine::ServerForceSetLowerState");
static_assert(offsetof(UBeanCharStateMachine, SimulatedProxyStateData) == 422, "Offset mismatch for UBeanCharStateMachine::SimulatedProxyStateData");
static_assert(offsetof(UBeanCharStateMachine, AutonomousProxyServerStateData) == 424, "Offset mismatch for UBeanCharStateMachine::AutonomousProxyServerStateData");
static_assert(offsetof(UBeanCharStateMachine, StateSyncID) == 428, "Offset mismatch for UBeanCharStateMachine::StateSyncID");
static_assert(offsetof(UBeanCharStateMachine, ServerStateSyncID) == 429, "Offset mismatch for UBeanCharStateMachine::ServerStateSyncID");
static_assert(offsetof(UBeanCharStateMachine, AutonomousProxyStateHistory) == 432, "Offset mismatch for UBeanCharStateMachine::AutonomousProxyStateHistory");
static_assert(offsetof(UBeanCharStateMachine, AutonomousProxyServerStateCheckTimer) == 448, "Offset mismatch for UBeanCharStateMachine::AutonomousProxyServerStateCheckTimer");
static_assert(offsetof(UBeanCharStateMachine, RequestClientStateChangeTimeout) == 452, "Offset mismatch for UBeanCharStateMachine::RequestClientStateChangeTimeout");
static_assert(offsetof(UBeanCharStateMachine, RequestClientStateChangePendingStateID) == 456, "Offset mismatch for UBeanCharStateMachine::RequestClientStateChangePendingStateID");
static_assert(offsetof(UBeanCharStateMachine, StateTagsDefinitions) == 464, "Offset mismatch for UBeanCharStateMachine::StateTagsDefinitions");
static_assert(offsetof(UBeanCharStateMachine, AnimLayer_Swimming) == 480, "Offset mismatch for UBeanCharStateMachine::AnimLayer_Swimming");
static_assert(offsetof(UBeanCharStateMachine, AnimLayer_Ragdoll) == 488, "Offset mismatch for UBeanCharStateMachine::AnimLayer_Ragdoll");
static_assert(offsetof(UBeanCharStateMachine, AnimLayer_Zipline) == 496, "Offset mismatch for UBeanCharStateMachine::AnimLayer_Zipline");
static_assert(offsetof(UBeanCharStateMachine, AnimLayer_Flying) == 504, "Offset mismatch for UBeanCharStateMachine::AnimLayer_Flying");
static_assert(offsetof(UBeanCharStateMachine, AnimLayer_Grab) == 512, "Offset mismatch for UBeanCharStateMachine::AnimLayer_Grab");
static_assert(offsetof(UBeanCharStateMachine, AnimLayer_EditMode) == 520, "Offset mismatch for UBeanCharStateMachine::AnimLayer_EditMode");

// /Script/BeanstalkRuntime.BeanCharState_Dive
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Dive
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Dive, StateId) == 40, "Offset mismatch for UBeanCharState_Dive::StateId");
static_assert(offsetof(UBeanCharState_Dive, LayerMask) == 41, "Offset mismatch for UBeanCharState_Dive::LayerMask");
static_assert(offsetof(UBeanCharState_Dive, MovementMode) == 42, "Offset mismatch for UBeanCharState_Dive::MovementMode");
static_assert(offsetof(UBeanCharState_Dive, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Dive::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Dive, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Dive::GameplayTag");
static_assert(offsetof(UBeanCharState_Dive, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Dive::GameplayCue");
static_assert(offsetof(UBeanCharState_Dive, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Dive::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Dive, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Dive::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Dive, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Dive::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Dive, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Dive::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Dive, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Dive::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Dive, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Dive::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Dive, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Dive::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Dive, Priority) == 272, "Offset mismatch for UBeanCharState_Dive::Priority");
static_assert(offsetof(UBeanCharState_Dive, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Dive::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Dive, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Dive::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Dive, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Dive::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Dive, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Dive::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Dive, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Dive::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Dive, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Dive::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Dive, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Dive::GrantedTags");
static_assert(offsetof(UBeanCharState_Dive, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Dive::BlockedTags");
static_assert(offsetof(UBeanCharState_Dive, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Dive::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Emote
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Emote
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Emote, StateId) == 40, "Offset mismatch for UBeanCharState_Emote::StateId");
static_assert(offsetof(UBeanCharState_Emote, LayerMask) == 41, "Offset mismatch for UBeanCharState_Emote::LayerMask");
static_assert(offsetof(UBeanCharState_Emote, MovementMode) == 42, "Offset mismatch for UBeanCharState_Emote::MovementMode");
static_assert(offsetof(UBeanCharState_Emote, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Emote::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Emote, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Emote::GameplayTag");
static_assert(offsetof(UBeanCharState_Emote, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Emote::GameplayCue");
static_assert(offsetof(UBeanCharState_Emote, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Emote::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Emote, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Emote::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Emote, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Emote::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Emote, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Emote::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Emote, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Emote::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Emote, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Emote::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Emote, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Emote::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Emote, Priority) == 272, "Offset mismatch for UBeanCharState_Emote::Priority");
static_assert(offsetof(UBeanCharState_Emote, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Emote::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Emote, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Emote::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Emote, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Emote::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Emote, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Emote::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Emote, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Emote::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Emote, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Emote::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Emote, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Emote::GrantedTags");
static_assert(offsetof(UBeanCharState_Emote, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Emote::BlockedTags");
static_assert(offsetof(UBeanCharState_Emote, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Emote::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Falling
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Falling
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Falling, StateId) == 40, "Offset mismatch for UBeanCharState_Falling::StateId");
static_assert(offsetof(UBeanCharState_Falling, LayerMask) == 41, "Offset mismatch for UBeanCharState_Falling::LayerMask");
static_assert(offsetof(UBeanCharState_Falling, MovementMode) == 42, "Offset mismatch for UBeanCharState_Falling::MovementMode");
static_assert(offsetof(UBeanCharState_Falling, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Falling::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Falling, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Falling::GameplayTag");
static_assert(offsetof(UBeanCharState_Falling, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Falling::GameplayCue");
static_assert(offsetof(UBeanCharState_Falling, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Falling::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Falling, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Falling::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Falling, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Falling::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Falling, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Falling::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Falling, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Falling::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Falling, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Falling::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Falling, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Falling::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Falling, Priority) == 272, "Offset mismatch for UBeanCharState_Falling::Priority");
static_assert(offsetof(UBeanCharState_Falling, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Falling::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Falling, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Falling::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Falling, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Falling::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Falling, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Falling::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Falling, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Falling::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Falling, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Falling::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Falling, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Falling::GrantedTags");
static_assert(offsetof(UBeanCharState_Falling, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Falling::BlockedTags");
static_assert(offsetof(UBeanCharState_Falling, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Falling::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Flying
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Flying
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Flying, StateId) == 40, "Offset mismatch for UBeanCharState_Flying::StateId");
static_assert(offsetof(UBeanCharState_Flying, LayerMask) == 41, "Offset mismatch for UBeanCharState_Flying::LayerMask");
static_assert(offsetof(UBeanCharState_Flying, MovementMode) == 42, "Offset mismatch for UBeanCharState_Flying::MovementMode");
static_assert(offsetof(UBeanCharState_Flying, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Flying::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Flying, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Flying::GameplayTag");
static_assert(offsetof(UBeanCharState_Flying, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Flying::GameplayCue");
static_assert(offsetof(UBeanCharState_Flying, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Flying::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Flying, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Flying::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Flying, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Flying::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Flying, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Flying::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Flying, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Flying::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Flying, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Flying::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Flying, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Flying::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Flying, Priority) == 272, "Offset mismatch for UBeanCharState_Flying::Priority");
static_assert(offsetof(UBeanCharState_Flying, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Flying::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Flying, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Flying::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Flying, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Flying::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Flying, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Flying::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Flying, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Flying::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Flying, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Flying::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Flying, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Flying::GrantedTags");
static_assert(offsetof(UBeanCharState_Flying, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Flying::BlockedTags");
static_assert(offsetof(UBeanCharState_Flying, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Flying::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Getup
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Getup
{
public:
    std::uint8_t Pad_0000[0x1E8]; // 0x0000
    void* ActiveAnim; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBeanCharState_Getup, ActiveAnim) == 488, "Offset mismatch for UBeanCharState_Getup::ActiveAnim");

// /Script/BeanstalkRuntime.BeanCharState_GetupRoll
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_GetupRoll
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_GetupRoll, StateId) == 40, "Offset mismatch for UBeanCharState_GetupRoll::StateId");
static_assert(offsetof(UBeanCharState_GetupRoll, LayerMask) == 41, "Offset mismatch for UBeanCharState_GetupRoll::LayerMask");
static_assert(offsetof(UBeanCharState_GetupRoll, MovementMode) == 42, "Offset mismatch for UBeanCharState_GetupRoll::MovementMode");
static_assert(offsetof(UBeanCharState_GetupRoll, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_GetupRoll::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_GetupRoll, GameplayTag) == 44, "Offset mismatch for UBeanCharState_GetupRoll::GameplayTag");
static_assert(offsetof(UBeanCharState_GetupRoll, GameplayCue) == 48, "Offset mismatch for UBeanCharState_GetupRoll::GameplayCue");
static_assert(offsetof(UBeanCharState_GetupRoll, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_GetupRoll::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_GetupRoll, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_GetupRoll::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_GetupRoll, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_GetupRoll::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_GetupRoll, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_GetupRoll::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_GetupRoll, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_GetupRoll::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_GetupRoll, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_GetupRoll::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_GetupRoll, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_GetupRoll::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_GetupRoll, Priority) == 272, "Offset mismatch for UBeanCharState_GetupRoll::Priority");
static_assert(offsetof(UBeanCharState_GetupRoll, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_GetupRoll::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_GetupRoll, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_GetupRoll::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_GetupRoll, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_GetupRoll::DecelerationOverride");
static_assert(offsetof(UBeanCharState_GetupRoll, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_GetupRoll::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_GetupRoll, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_GetupRoll::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_GetupRoll, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_GetupRoll::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_GetupRoll, GrantedTags) == 312, "Offset mismatch for UBeanCharState_GetupRoll::GrantedTags");
static_assert(offsetof(UBeanCharState_GetupRoll, BlockedTags) == 344, "Offset mismatch for UBeanCharState_GetupRoll::BlockedTags");
static_assert(offsetof(UBeanCharState_GetupRoll, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_GetupRoll::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Grab
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Grab
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Grab, StateId) == 40, "Offset mismatch for UBeanCharState_Grab::StateId");
static_assert(offsetof(UBeanCharState_Grab, LayerMask) == 41, "Offset mismatch for UBeanCharState_Grab::LayerMask");
static_assert(offsetof(UBeanCharState_Grab, MovementMode) == 42, "Offset mismatch for UBeanCharState_Grab::MovementMode");
static_assert(offsetof(UBeanCharState_Grab, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Grab::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Grab, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Grab::GameplayTag");
static_assert(offsetof(UBeanCharState_Grab, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Grab::GameplayCue");
static_assert(offsetof(UBeanCharState_Grab, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Grab::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Grab, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Grab::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Grab, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Grab::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Grab, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Grab::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Grab, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Grab::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Grab, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Grab::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Grab, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Grab::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Grab, Priority) == 272, "Offset mismatch for UBeanCharState_Grab::Priority");
static_assert(offsetof(UBeanCharState_Grab, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Grab::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Grab, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Grab::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Grab, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Grab::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Grab, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Grab::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Grab, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Grab::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Grab, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Grab::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Grab, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Grab::GrantedTags");
static_assert(offsetof(UBeanCharState_Grab, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Grab::BlockedTags");
static_assert(offsetof(UBeanCharState_Grab, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Grab::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_GrabStumble
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_GrabStumble
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_GrabStumble, StateId) == 40, "Offset mismatch for UBeanCharState_GrabStumble::StateId");
static_assert(offsetof(UBeanCharState_GrabStumble, LayerMask) == 41, "Offset mismatch for UBeanCharState_GrabStumble::LayerMask");
static_assert(offsetof(UBeanCharState_GrabStumble, MovementMode) == 42, "Offset mismatch for UBeanCharState_GrabStumble::MovementMode");
static_assert(offsetof(UBeanCharState_GrabStumble, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_GrabStumble::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_GrabStumble, GameplayTag) == 44, "Offset mismatch for UBeanCharState_GrabStumble::GameplayTag");
static_assert(offsetof(UBeanCharState_GrabStumble, GameplayCue) == 48, "Offset mismatch for UBeanCharState_GrabStumble::GameplayCue");
static_assert(offsetof(UBeanCharState_GrabStumble, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_GrabStumble::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_GrabStumble, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_GrabStumble::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_GrabStumble, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_GrabStumble::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_GrabStumble, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_GrabStumble::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_GrabStumble, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_GrabStumble::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_GrabStumble, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_GrabStumble::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_GrabStumble, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_GrabStumble::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_GrabStumble, Priority) == 272, "Offset mismatch for UBeanCharState_GrabStumble::Priority");
static_assert(offsetof(UBeanCharState_GrabStumble, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_GrabStumble::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_GrabStumble, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_GrabStumble::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_GrabStumble, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_GrabStumble::DecelerationOverride");
static_assert(offsetof(UBeanCharState_GrabStumble, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_GrabStumble::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_GrabStumble, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_GrabStumble::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_GrabStumble, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_GrabStumble::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_GrabStumble, GrantedTags) == 312, "Offset mismatch for UBeanCharState_GrabStumble::GrantedTags");
static_assert(offsetof(UBeanCharState_GrabStumble, BlockedTags) == 344, "Offset mismatch for UBeanCharState_GrabStumble::BlockedTags");
static_assert(offsetof(UBeanCharState_GrabStumble, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_GrabStumble::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Grounded
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Grounded
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Grounded, StateId) == 40, "Offset mismatch for UBeanCharState_Grounded::StateId");
static_assert(offsetof(UBeanCharState_Grounded, LayerMask) == 41, "Offset mismatch for UBeanCharState_Grounded::LayerMask");
static_assert(offsetof(UBeanCharState_Grounded, MovementMode) == 42, "Offset mismatch for UBeanCharState_Grounded::MovementMode");
static_assert(offsetof(UBeanCharState_Grounded, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Grounded::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Grounded, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Grounded::GameplayTag");
static_assert(offsetof(UBeanCharState_Grounded, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Grounded::GameplayCue");
static_assert(offsetof(UBeanCharState_Grounded, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Grounded::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Grounded, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Grounded::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Grounded, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Grounded::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Grounded, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Grounded::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Grounded, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Grounded::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Grounded, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Grounded::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Grounded, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Grounded::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Grounded, Priority) == 272, "Offset mismatch for UBeanCharState_Grounded::Priority");
static_assert(offsetof(UBeanCharState_Grounded, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Grounded::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Grounded, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Grounded::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Grounded, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Grounded::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Grounded, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Grounded::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Grounded, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Grounded::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Grounded, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Grounded::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Grounded, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Grounded::GrantedTags");
static_assert(offsetof(UBeanCharState_Grounded, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Grounded::BlockedTags");
static_assert(offsetof(UBeanCharState_Grounded, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Grounded::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Jostle
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Jostle
{
public:
    std::uint8_t Pad_0000[0x198]; // 0x0000
    std::uint8_t SeparationForce[0x1]; // 0x0198 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Jostle, SeparationForce) == 408, "Offset mismatch for UBeanCharState_Jostle::SeparationForce");

// /Script/BeanstalkRuntime.BeanCharState_Jump
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Jump
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Jump, StateId) == 40, "Offset mismatch for UBeanCharState_Jump::StateId");
static_assert(offsetof(UBeanCharState_Jump, LayerMask) == 41, "Offset mismatch for UBeanCharState_Jump::LayerMask");
static_assert(offsetof(UBeanCharState_Jump, MovementMode) == 42, "Offset mismatch for UBeanCharState_Jump::MovementMode");
static_assert(offsetof(UBeanCharState_Jump, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Jump::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Jump, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Jump::GameplayTag");
static_assert(offsetof(UBeanCharState_Jump, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Jump::GameplayCue");
static_assert(offsetof(UBeanCharState_Jump, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Jump::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Jump, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Jump::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Jump, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Jump::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Jump, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Jump::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Jump, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Jump::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Jump, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Jump::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Jump, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Jump::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Jump, Priority) == 272, "Offset mismatch for UBeanCharState_Jump::Priority");
static_assert(offsetof(UBeanCharState_Jump, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Jump::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Jump, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Jump::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Jump, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Jump::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Jump, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Jump::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Jump, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Jump::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Jump, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Jump::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Jump, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Jump::GrantedTags");
static_assert(offsetof(UBeanCharState_Jump, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Jump::BlockedTags");
static_assert(offsetof(UBeanCharState_Jump, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Jump::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Mantle
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Mantle
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Mantle, StateId) == 40, "Offset mismatch for UBeanCharState_Mantle::StateId");
static_assert(offsetof(UBeanCharState_Mantle, LayerMask) == 41, "Offset mismatch for UBeanCharState_Mantle::LayerMask");
static_assert(offsetof(UBeanCharState_Mantle, MovementMode) == 42, "Offset mismatch for UBeanCharState_Mantle::MovementMode");
static_assert(offsetof(UBeanCharState_Mantle, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Mantle::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Mantle, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Mantle::GameplayTag");
static_assert(offsetof(UBeanCharState_Mantle, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Mantle::GameplayCue");
static_assert(offsetof(UBeanCharState_Mantle, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Mantle::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Mantle, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Mantle::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Mantle, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Mantle::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Mantle, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Mantle::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Mantle, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Mantle::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Mantle, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Mantle::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Mantle, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Mantle::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Mantle, Priority) == 272, "Offset mismatch for UBeanCharState_Mantle::Priority");
static_assert(offsetof(UBeanCharState_Mantle, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Mantle::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Mantle, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Mantle::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Mantle, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Mantle::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Mantle, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Mantle::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Mantle, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Mantle::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Mantle, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Mantle::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Mantle, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Mantle::GrantedTags");
static_assert(offsetof(UBeanCharState_Mantle, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Mantle::BlockedTags");
static_assert(offsetof(UBeanCharState_Mantle, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Mantle::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Ragdoll
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Ragdoll
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Ragdoll, StateId) == 40, "Offset mismatch for UBeanCharState_Ragdoll::StateId");
static_assert(offsetof(UBeanCharState_Ragdoll, LayerMask) == 41, "Offset mismatch for UBeanCharState_Ragdoll::LayerMask");
static_assert(offsetof(UBeanCharState_Ragdoll, MovementMode) == 42, "Offset mismatch for UBeanCharState_Ragdoll::MovementMode");
static_assert(offsetof(UBeanCharState_Ragdoll, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Ragdoll::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Ragdoll, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Ragdoll::GameplayTag");
static_assert(offsetof(UBeanCharState_Ragdoll, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Ragdoll::GameplayCue");
static_assert(offsetof(UBeanCharState_Ragdoll, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Ragdoll::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Ragdoll, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Ragdoll::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Ragdoll, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Ragdoll::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Ragdoll, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Ragdoll::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Ragdoll, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Ragdoll::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Ragdoll, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Ragdoll::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Ragdoll, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Ragdoll::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Ragdoll, Priority) == 272, "Offset mismatch for UBeanCharState_Ragdoll::Priority");
static_assert(offsetof(UBeanCharState_Ragdoll, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Ragdoll::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Ragdoll, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Ragdoll::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Ragdoll, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Ragdoll::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Ragdoll, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Ragdoll::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Ragdoll, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Ragdoll::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Ragdoll, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Ragdoll::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Ragdoll, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Ragdoll::GrantedTags");
static_assert(offsetof(UBeanCharState_Ragdoll, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Ragdoll::BlockedTags");
static_assert(offsetof(UBeanCharState_Ragdoll, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Ragdoll::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Roll
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Roll
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Roll, StateId) == 40, "Offset mismatch for UBeanCharState_Roll::StateId");
static_assert(offsetof(UBeanCharState_Roll, LayerMask) == 41, "Offset mismatch for UBeanCharState_Roll::LayerMask");
static_assert(offsetof(UBeanCharState_Roll, MovementMode) == 42, "Offset mismatch for UBeanCharState_Roll::MovementMode");
static_assert(offsetof(UBeanCharState_Roll, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Roll::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Roll, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Roll::GameplayTag");
static_assert(offsetof(UBeanCharState_Roll, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Roll::GameplayCue");
static_assert(offsetof(UBeanCharState_Roll, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Roll::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Roll, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Roll::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Roll, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Roll::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Roll, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Roll::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Roll, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Roll::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Roll, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Roll::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Roll, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Roll::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Roll, Priority) == 272, "Offset mismatch for UBeanCharState_Roll::Priority");
static_assert(offsetof(UBeanCharState_Roll, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Roll::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Roll, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Roll::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Roll, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Roll::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Roll, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Roll::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Roll, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Roll::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Roll, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Roll::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Roll, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Roll::GrantedTags");
static_assert(offsetof(UBeanCharState_Roll, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Roll::BlockedTags");
static_assert(offsetof(UBeanCharState_Roll, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Roll::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Staggered
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Staggered
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    void* CurrentMontage; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBeanCharState_Staggered, CurrentMontage) == 416, "Offset mismatch for UBeanCharState_Staggered::CurrentMontage");

// /Script/BeanstalkRuntime.BeanCharState_SurfaceSwimming
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_SurfaceSwimming
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_SurfaceSwimming, StateId) == 40, "Offset mismatch for UBeanCharState_SurfaceSwimming::StateId");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, LayerMask) == 41, "Offset mismatch for UBeanCharState_SurfaceSwimming::LayerMask");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, MovementMode) == 42, "Offset mismatch for UBeanCharState_SurfaceSwimming::MovementMode");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_SurfaceSwimming::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, GameplayTag) == 44, "Offset mismatch for UBeanCharState_SurfaceSwimming::GameplayTag");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, GameplayCue) == 48, "Offset mismatch for UBeanCharState_SurfaceSwimming::GameplayCue");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_SurfaceSwimming::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_SurfaceSwimming::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_SurfaceSwimming::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_SurfaceSwimming::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_SurfaceSwimming::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_SurfaceSwimming::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_SurfaceSwimming::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, Priority) == 272, "Offset mismatch for UBeanCharState_SurfaceSwimming::Priority");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_SurfaceSwimming::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_SurfaceSwimming::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_SurfaceSwimming::DecelerationOverride");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_SurfaceSwimming::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_SurfaceSwimming::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_SurfaceSwimming::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, GrantedTags) == 312, "Offset mismatch for UBeanCharState_SurfaceSwimming::GrantedTags");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, BlockedTags) == 344, "Offset mismatch for UBeanCharState_SurfaceSwimming::BlockedTags");
static_assert(offsetof(UBeanCharState_SurfaceSwimming, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_SurfaceSwimming::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_WaterJump
// Kind: Class; super: BeanCharState_Jump
class UBeanCharState_WaterJump
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_WaterJump, StateId) == 40, "Offset mismatch for UBeanCharState_WaterJump::StateId");
static_assert(offsetof(UBeanCharState_WaterJump, LayerMask) == 41, "Offset mismatch for UBeanCharState_WaterJump::LayerMask");
static_assert(offsetof(UBeanCharState_WaterJump, MovementMode) == 42, "Offset mismatch for UBeanCharState_WaterJump::MovementMode");
static_assert(offsetof(UBeanCharState_WaterJump, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_WaterJump::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_WaterJump, GameplayTag) == 44, "Offset mismatch for UBeanCharState_WaterJump::GameplayTag");
static_assert(offsetof(UBeanCharState_WaterJump, GameplayCue) == 48, "Offset mismatch for UBeanCharState_WaterJump::GameplayCue");
static_assert(offsetof(UBeanCharState_WaterJump, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_WaterJump::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_WaterJump, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_WaterJump::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_WaterJump, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_WaterJump::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_WaterJump, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_WaterJump::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_WaterJump, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_WaterJump::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_WaterJump, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_WaterJump::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_WaterJump, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_WaterJump::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_WaterJump, Priority) == 272, "Offset mismatch for UBeanCharState_WaterJump::Priority");
static_assert(offsetof(UBeanCharState_WaterJump, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_WaterJump::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_WaterJump, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_WaterJump::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_WaterJump, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_WaterJump::DecelerationOverride");
static_assert(offsetof(UBeanCharState_WaterJump, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_WaterJump::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_WaterJump, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_WaterJump::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_WaterJump, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_WaterJump::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_WaterJump, GrantedTags) == 312, "Offset mismatch for UBeanCharState_WaterJump::GrantedTags");
static_assert(offsetof(UBeanCharState_WaterJump, BlockedTags) == 344, "Offset mismatch for UBeanCharState_WaterJump::BlockedTags");
static_assert(offsetof(UBeanCharState_WaterJump, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_WaterJump::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanCharState_Zipline
// Kind: Class; super: BeanCharStateBase
class UBeanCharState_Zipline
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LayerMask; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MovementMode; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t FortCustomMovementMode; // 0x002B (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameplayTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCue[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueParameters[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bShouldSetMovementMode; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateToSimulatedProxies; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteCodeOnSimulatedProxies; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryActivateFailsIfAlreadyActive; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerMustFlushStateManually; // 0x010C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPendingStateChangesOnStateExit; // 0x010D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x010E
    float Priority; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldRemainVertical; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPerformMantle; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0116
    float DecelerationOverride; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPauseJiggleCalculations; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    void* OwnerStateMachine; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootMotionSourceIDs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantedTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockedAbilityTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBeanCharState_Zipline, StateId) == 40, "Offset mismatch for UBeanCharState_Zipline::StateId");
static_assert(offsetof(UBeanCharState_Zipline, LayerMask) == 41, "Offset mismatch for UBeanCharState_Zipline::LayerMask");
static_assert(offsetof(UBeanCharState_Zipline, MovementMode) == 42, "Offset mismatch for UBeanCharState_Zipline::MovementMode");
static_assert(offsetof(UBeanCharState_Zipline, FortCustomMovementMode) == 43, "Offset mismatch for UBeanCharState_Zipline::FortCustomMovementMode");
static_assert(offsetof(UBeanCharState_Zipline, GameplayTag) == 44, "Offset mismatch for UBeanCharState_Zipline::GameplayTag");
static_assert(offsetof(UBeanCharState_Zipline, GameplayCue) == 48, "Offset mismatch for UBeanCharState_Zipline::GameplayCue");
static_assert(offsetof(UBeanCharState_Zipline, GameplayCueParameters) == 56, "Offset mismatch for UBeanCharState_Zipline::GameplayCueParameters");
static_assert(offsetof(UBeanCharState_Zipline, bShouldSetMovementMode) == 264, "Offset mismatch for UBeanCharState_Zipline::bShouldSetMovementMode");
static_assert(offsetof(UBeanCharState_Zipline, bReplicateToSimulatedProxies) == 265, "Offset mismatch for UBeanCharState_Zipline::bReplicateToSimulatedProxies");
static_assert(offsetof(UBeanCharState_Zipline, bExecuteCodeOnSimulatedProxies) == 266, "Offset mismatch for UBeanCharState_Zipline::bExecuteCodeOnSimulatedProxies");
static_assert(offsetof(UBeanCharState_Zipline, bTryActivateFailsIfAlreadyActive) == 267, "Offset mismatch for UBeanCharState_Zipline::bTryActivateFailsIfAlreadyActive");
static_assert(offsetof(UBeanCharState_Zipline, bServerMustFlushStateManually) == 268, "Offset mismatch for UBeanCharState_Zipline::bServerMustFlushStateManually");
static_assert(offsetof(UBeanCharState_Zipline, bFlushPendingStateChangesOnStateExit) == 269, "Offset mismatch for UBeanCharState_Zipline::bFlushPendingStateChangesOnStateExit");
static_assert(offsetof(UBeanCharState_Zipline, Priority) == 272, "Offset mismatch for UBeanCharState_Zipline::Priority");
static_assert(offsetof(UBeanCharState_Zipline, bShouldRemainVertical) == 276, "Offset mismatch for UBeanCharState_Zipline::bShouldRemainVertical");
static_assert(offsetof(UBeanCharState_Zipline, bCanPerformMantle) == 277, "Offset mismatch for UBeanCharState_Zipline::bCanPerformMantle");
static_assert(offsetof(UBeanCharState_Zipline, DecelerationOverride) == 280, "Offset mismatch for UBeanCharState_Zipline::DecelerationOverride");
static_assert(offsetof(UBeanCharState_Zipline, bPauseJiggleCalculations) == 284, "Offset mismatch for UBeanCharState_Zipline::bPauseJiggleCalculations");
static_assert(offsetof(UBeanCharState_Zipline, OwnerStateMachine) == 288, "Offset mismatch for UBeanCharState_Zipline::OwnerStateMachine");
static_assert(offsetof(UBeanCharState_Zipline, RootMotionSourceIDs) == 296, "Offset mismatch for UBeanCharState_Zipline::RootMotionSourceIDs");
static_assert(offsetof(UBeanCharState_Zipline, GrantedTags) == 312, "Offset mismatch for UBeanCharState_Zipline::GrantedTags");
static_assert(offsetof(UBeanCharState_Zipline, BlockedTags) == 344, "Offset mismatch for UBeanCharState_Zipline::BlockedTags");
static_assert(offsetof(UBeanCharState_Zipline, BlockedAbilityTags) == 376, "Offset mismatch for UBeanCharState_Zipline::BlockedAbilityTags");

// /Script/BeanstalkRuntime.BeanChar_EditMode_AnimLayer
// Kind: Class; super: AnimInstance
class UBeanChar_EditMode_AnimLayer
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t WeaponCoreAnim; // 0x0260 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsMoving; // 0x0261 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0262
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x0264 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanChar_EditMode_AnimLayer, WeaponCoreAnim) == 608, "Offset mismatch for UBeanChar_EditMode_AnimLayer::WeaponCoreAnim");
static_assert(offsetof(UBeanChar_EditMode_AnimLayer, bIsMoving) == 609, "Offset mismatch for UBeanChar_EditMode_AnimLayer::bIsMoving");
static_assert(offsetof(UBeanChar_EditMode_AnimLayer, BeanCharacterConfig) == 612, "Offset mismatch for UBeanChar_EditMode_AnimLayer::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanChar_Flying_AnimLayer
// Kind: Class; super: AnimInstance
class UBeanChar_Flying_AnimLayer
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x0260 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanChar_Flying_AnimLayer, BeanCharacterConfig) == 608, "Offset mismatch for UBeanChar_Flying_AnimLayer::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanChar_Grab_AnimLayer
// Kind: Class; super: AnimInstance
class UBeanChar_Grab_AnimLayer
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bHasGrabTarget; // 0x0260 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0261
    float GrabStumbleDuration; // 0x0264 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LeftHandIKPosition[0x18]; // 0x0268 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightHandIKPosition[0x18]; // 0x0280 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftHandIKRotation[0x18]; // 0x0298 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightHandIKRotation[0x18]; // 0x02B0 (Size: 0x18, Type: StructProperty)
    float IkAlpha; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x02CC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanChar_Grab_AnimLayer, bHasGrabTarget) == 608, "Offset mismatch for UBeanChar_Grab_AnimLayer::bHasGrabTarget");
static_assert(offsetof(UBeanChar_Grab_AnimLayer, GrabStumbleDuration) == 612, "Offset mismatch for UBeanChar_Grab_AnimLayer::GrabStumbleDuration");
static_assert(offsetof(UBeanChar_Grab_AnimLayer, LeftHandIKPosition) == 616, "Offset mismatch for UBeanChar_Grab_AnimLayer::LeftHandIKPosition");
static_assert(offsetof(UBeanChar_Grab_AnimLayer, RightHandIKPosition) == 640, "Offset mismatch for UBeanChar_Grab_AnimLayer::RightHandIKPosition");
static_assert(offsetof(UBeanChar_Grab_AnimLayer, LeftHandIKRotation) == 664, "Offset mismatch for UBeanChar_Grab_AnimLayer::LeftHandIKRotation");
static_assert(offsetof(UBeanChar_Grab_AnimLayer, RightHandIKRotation) == 688, "Offset mismatch for UBeanChar_Grab_AnimLayer::RightHandIKRotation");
static_assert(offsetof(UBeanChar_Grab_AnimLayer, IkAlpha) == 712, "Offset mismatch for UBeanChar_Grab_AnimLayer::IkAlpha");
static_assert(offsetof(UBeanChar_Grab_AnimLayer, BeanCharacterConfig) == 716, "Offset mismatch for UBeanChar_Grab_AnimLayer::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanChar_GroundLoc_AnimInstance
// Kind: Class; super: AnimInstance
class UBeanChar_GroundLoc_AnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    float TurningPercentage; // 0x0260 (Size: 0x4, Type: FloatProperty)
    float SpeedPercentage; // 0x0264 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TurnState; // 0x0268 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0269
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x026C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanChar_GroundLoc_AnimInstance, TurningPercentage) == 608, "Offset mismatch for UBeanChar_GroundLoc_AnimInstance::TurningPercentage");
static_assert(offsetof(UBeanChar_GroundLoc_AnimInstance, SpeedPercentage) == 612, "Offset mismatch for UBeanChar_GroundLoc_AnimInstance::SpeedPercentage");
static_assert(offsetof(UBeanChar_GroundLoc_AnimInstance, TurnState) == 616, "Offset mismatch for UBeanChar_GroundLoc_AnimInstance::TurnState");
static_assert(offsetof(UBeanChar_GroundLoc_AnimInstance, BeanCharacterConfig) == 620, "Offset mismatch for UBeanChar_GroundLoc_AnimInstance::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanChar_Idle_AnimInstance
// Kind: Class; super: AnimInstance
class UBeanChar_Idle_AnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    void* CurrentIdleBreakAnimation; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsPlayingIdleBreak; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0269
    float CurrentIdleBreakTime; // 0x026C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0270
    TArray<void*> IdleBreaks; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    float IdleBreakMinTime; // 0x0288 (Size: 0x4, Type: FloatProperty)
    float IdleBreakMaxTime; // 0x028C (Size: 0x4, Type: FloatProperty)
    float StopIdleBreakTrimTime; // 0x0290 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x0294 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanChar_Idle_AnimInstance, CurrentIdleBreakAnimation) == 608, "Offset mismatch for UBeanChar_Idle_AnimInstance::CurrentIdleBreakAnimation");
static_assert(offsetof(UBeanChar_Idle_AnimInstance, bIsPlayingIdleBreak) == 616, "Offset mismatch for UBeanChar_Idle_AnimInstance::bIsPlayingIdleBreak");
static_assert(offsetof(UBeanChar_Idle_AnimInstance, CurrentIdleBreakTime) == 620, "Offset mismatch for UBeanChar_Idle_AnimInstance::CurrentIdleBreakTime");
static_assert(offsetof(UBeanChar_Idle_AnimInstance, IdleBreaks) == 632, "Offset mismatch for UBeanChar_Idle_AnimInstance::IdleBreaks");
static_assert(offsetof(UBeanChar_Idle_AnimInstance, IdleBreakMinTime) == 648, "Offset mismatch for UBeanChar_Idle_AnimInstance::IdleBreakMinTime");
static_assert(offsetof(UBeanChar_Idle_AnimInstance, IdleBreakMaxTime) == 652, "Offset mismatch for UBeanChar_Idle_AnimInstance::IdleBreakMaxTime");
static_assert(offsetof(UBeanChar_Idle_AnimInstance, StopIdleBreakTrimTime) == 656, "Offset mismatch for UBeanChar_Idle_AnimInstance::StopIdleBreakTrimTime");
static_assert(offsetof(UBeanChar_Idle_AnimInstance, BeanCharacterConfig) == 660, "Offset mismatch for UBeanChar_Idle_AnimInstance::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanChar_InAirLoc_AnimInstance
// Kind: Class; super: AnimInstance
class UBeanChar_InAirLoc_AnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bIsJumping; // 0x0260 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFalling; // 0x0261 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAnticipatingJumpLanding; // 0x0262 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDiving; // 0x0263 (Size: 0x1, Type: BoolProperty)
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x0264 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bWasJumping; // 0x026C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x026D
    float JumpStartZ; // 0x0270 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBeanChar_InAirLoc_AnimInstance, bIsJumping) == 608, "Offset mismatch for UBeanChar_InAirLoc_AnimInstance::bIsJumping");
static_assert(offsetof(UBeanChar_InAirLoc_AnimInstance, bIsFalling) == 609, "Offset mismatch for UBeanChar_InAirLoc_AnimInstance::bIsFalling");
static_assert(offsetof(UBeanChar_InAirLoc_AnimInstance, bIsAnticipatingJumpLanding) == 610, "Offset mismatch for UBeanChar_InAirLoc_AnimInstance::bIsAnticipatingJumpLanding");
static_assert(offsetof(UBeanChar_InAirLoc_AnimInstance, bIsDiving) == 611, "Offset mismatch for UBeanChar_InAirLoc_AnimInstance::bIsDiving");
static_assert(offsetof(UBeanChar_InAirLoc_AnimInstance, BeanCharacterConfig) == 612, "Offset mismatch for UBeanChar_InAirLoc_AnimInstance::BeanCharacterConfig");
static_assert(offsetof(UBeanChar_InAirLoc_AnimInstance, bWasJumping) == 620, "Offset mismatch for UBeanChar_InAirLoc_AnimInstance::bWasJumping");
static_assert(offsetof(UBeanChar_InAirLoc_AnimInstance, JumpStartZ) == 624, "Offset mismatch for UBeanChar_InAirLoc_AnimInstance::JumpStartZ");

// /Script/BeanstalkRuntime.BeanChar_Jiggle_AnimInstance
// Kind: Class; super: AnimInstance
class UBeanChar_Jiggle_AnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t LastImpactForce[0x18]; // 0x0260 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastImpactRelativeDirection[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    std::uint8_t bJustLandedFromJump; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving; // 0x0291 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseImpactAnims; // 0x0292 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImpactTriggered; // 0x0293 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ImpactAnimType; // 0x0294 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0295
    float LowImpactUpperThresholdReciprocal; // 0x0298 (Size: 0x4, Type: FloatProperty)
    float MediumImpactUpperThresholdReciprocal; // 0x029C (Size: 0x4, Type: FloatProperty)
    float HighImpactUpperThresholdReciprocal; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x02A4
    std::uint8_t JiggleRotator0[0x18]; // 0x02A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t JiggleRotator1[0x18]; // 0x02C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t JiggleRotator2[0x18]; // 0x02D8 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x02F0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, LastImpactForce) == 608, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::LastImpactForce");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, LastImpactRelativeDirection) == 632, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::LastImpactRelativeDirection");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, bJustLandedFromJump) == 656, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::bJustLandedFromJump");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, bIsMoving) == 657, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::bIsMoving");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, bUseImpactAnims) == 658, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::bUseImpactAnims");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, bImpactTriggered) == 659, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::bImpactTriggered");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, ImpactAnimType) == 660, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::ImpactAnimType");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, LowImpactUpperThresholdReciprocal) == 664, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::LowImpactUpperThresholdReciprocal");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, MediumImpactUpperThresholdReciprocal) == 668, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::MediumImpactUpperThresholdReciprocal");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, HighImpactUpperThresholdReciprocal) == 672, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::HighImpactUpperThresholdReciprocal");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, JiggleRotator0) == 680, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::JiggleRotator0");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, JiggleRotator1) == 704, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::JiggleRotator1");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, JiggleRotator2) == 728, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::JiggleRotator2");
static_assert(offsetof(UBeanChar_Jiggle_AnimInstance, BeanCharacterConfig) == 752, "Offset mismatch for UBeanChar_Jiggle_AnimInstance::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanChar_Main_AnimInstance
// Kind: Class; super: FortAnimInstance
class UBeanChar_Main_AnimInstance
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    std::uint8_t bIsSimulatedProxy; // 0x0450 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MovementMode; // 0x0451 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsMoving; // 0x0452 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGrounded; // 0x0453 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0454
    std::uint8_t CurrentVelocity[0x18]; // 0x0458 (Size: 0x18, Type: StructProperty)
    std::uint8_t JiggleRotator0[0x18]; // 0x0470 (Size: 0x18, Type: StructProperty)
    std::uint8_t JiggleRotator1[0x18]; // 0x0488 (Size: 0x18, Type: StructProperty)
    std::uint8_t JiggleRotator2[0x18]; // 0x04A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bLowerStateUsesLocomotionAnim; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x04B9
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x04BC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanChar_Main_AnimInstance, bIsSimulatedProxy) == 1104, "Offset mismatch for UBeanChar_Main_AnimInstance::bIsSimulatedProxy");
static_assert(offsetof(UBeanChar_Main_AnimInstance, MovementMode) == 1105, "Offset mismatch for UBeanChar_Main_AnimInstance::MovementMode");
static_assert(offsetof(UBeanChar_Main_AnimInstance, bIsMoving) == 1106, "Offset mismatch for UBeanChar_Main_AnimInstance::bIsMoving");
static_assert(offsetof(UBeanChar_Main_AnimInstance, bIsGrounded) == 1107, "Offset mismatch for UBeanChar_Main_AnimInstance::bIsGrounded");
static_assert(offsetof(UBeanChar_Main_AnimInstance, CurrentVelocity) == 1112, "Offset mismatch for UBeanChar_Main_AnimInstance::CurrentVelocity");
static_assert(offsetof(UBeanChar_Main_AnimInstance, JiggleRotator0) == 1136, "Offset mismatch for UBeanChar_Main_AnimInstance::JiggleRotator0");
static_assert(offsetof(UBeanChar_Main_AnimInstance, JiggleRotator1) == 1160, "Offset mismatch for UBeanChar_Main_AnimInstance::JiggleRotator1");
static_assert(offsetof(UBeanChar_Main_AnimInstance, JiggleRotator2) == 1184, "Offset mismatch for UBeanChar_Main_AnimInstance::JiggleRotator2");
static_assert(offsetof(UBeanChar_Main_AnimInstance, bLowerStateUsesLocomotionAnim) == 1208, "Offset mismatch for UBeanChar_Main_AnimInstance::bLowerStateUsesLocomotionAnim");
static_assert(offsetof(UBeanChar_Main_AnimInstance, BeanCharacterConfig) == 1212, "Offset mismatch for UBeanChar_Main_AnimInstance::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanChar_Ragdoll_AnimLayer
// Kind: Class; super: AnimInstance
class UBeanChar_Ragdoll_AnimLayer
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    float HighImpactUpperThresholdReciprocal; // 0x0260 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0264
    std::uint8_t LastRagdollImpactForce[0x18]; // 0x0268 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastImpactRelativeDirection[0x18]; // 0x0280 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x0298 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanChar_Ragdoll_AnimLayer, HighImpactUpperThresholdReciprocal) == 608, "Offset mismatch for UBeanChar_Ragdoll_AnimLayer::HighImpactUpperThresholdReciprocal");
static_assert(offsetof(UBeanChar_Ragdoll_AnimLayer, LastRagdollImpactForce) == 616, "Offset mismatch for UBeanChar_Ragdoll_AnimLayer::LastRagdollImpactForce");
static_assert(offsetof(UBeanChar_Ragdoll_AnimLayer, LastImpactRelativeDirection) == 640, "Offset mismatch for UBeanChar_Ragdoll_AnimLayer::LastImpactRelativeDirection");
static_assert(offsetof(UBeanChar_Ragdoll_AnimLayer, BeanCharacterConfig) == 664, "Offset mismatch for UBeanChar_Ragdoll_AnimLayer::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanChar_Swimming_AnimLayer
// Kind: Class; super: AnimInstance
class UBeanChar_Swimming_AnimLayer
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    float SpeedPercentage; // 0x0260 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsJumping; // 0x0264 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0265
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x0268 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanChar_Swimming_AnimLayer, SpeedPercentage) == 608, "Offset mismatch for UBeanChar_Swimming_AnimLayer::SpeedPercentage");
static_assert(offsetof(UBeanChar_Swimming_AnimLayer, bIsJumping) == 612, "Offset mismatch for UBeanChar_Swimming_AnimLayer::bIsJumping");
static_assert(offsetof(UBeanChar_Swimming_AnimLayer, BeanCharacterConfig) == 616, "Offset mismatch for UBeanChar_Swimming_AnimLayer::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanChar_Zipline_AnimLayer
// Kind: Class; super: AnimInstance
class UBeanChar_Zipline_AnimLayer
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    TWeakObjectPtr<void> BeanCharacterConfig; // 0x0260 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBeanChar_Zipline_AnimLayer, BeanCharacterConfig) == 608, "Offset mismatch for UBeanChar_Zipline_AnimLayer::BeanCharacterConfig");

// /Script/BeanstalkRuntime.BeanCharacter
// Kind: Class; super: FortStandInPlayerPawn
class UBeanCharacter
{
public:
    std::uint8_t Pad_0000[0x5EE8]; // 0x0000
    void* AbilitySet; // 0x5EE8 (Size: 0x8, Type: ObjectProperty)
    void* AnimInstance; // 0x5EF0 (Size: 0x8, Type: ObjectProperty)
    void* MotionWarpingComponent; // 0x5EF8 (Size: 0x8, Type: ObjectProperty)
    void* ConfigurationClass; // 0x5F00 (Size: 0x8, Type: ClassProperty)
    void* DefaultMappingContext; // 0x5F08 (Size: 0x8, Type: ObjectProperty)
    void* DiveAction; // 0x5F10 (Size: 0x8, Type: ObjectProperty)
    void* GrabAction; // 0x5F18 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t JumpButtonDiveIconOverrideTag[0x30]; // 0x5F20 (Size: 0x30, Type: StructProperty)
    void* MovementComponent; // 0x5F50 (Size: 0x8, Type: ObjectProperty)
    void* JiggleComponent; // 0x5F58 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x5F60
    void* StateMachine; // 0x5F78 (Size: 0x8, Type: ObjectProperty)
    void* BeanStreamManager; // 0x5F80 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bPressedDive; // 0x5F88 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2F]; // 0x5F89
    void* BeanCameraModeOverrideComponent; // 0x5FB8 (Size: 0x8, Type: ObjectProperty)
    void* ParticleSystemsComponent; // 0x5FC0 (Size: 0x8, Type: ObjectProperty)
    void* GrabComponent; // 0x5FC8 (Size: 0x8, Type: ObjectProperty)
    void* BeingGrabbedComponent; // 0x5FD0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GrabFeatureEnabledTag[0x4]; // 0x5FD8 (Size: 0x4, Type: StructProperty)
    std::uint8_t bPressingGrab; // 0x5FDC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x5FDD
    void* MantleComponent; // 0x5FE0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bWantsToMantle; // 0x5FE8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x5FE9
    void* RagdollComponent; // 0x5FF8 (Size: 0x8, Type: ObjectProperty)
    void* RagdollPhysicsConstraint; // 0x6000 (Size: 0x8, Type: ObjectProperty)
    void* RagdollRootCapsule; // 0x6008 (Size: 0x8, Type: ObjectProperty)
    float CapsuleUnscaledHalfHeight; // 0x6010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x6014
    void* CollisionManagerComponent; // 0x6018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x6020
    void* PushedInteractionSelection; // 0x6030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x30]; // 0x6038
    std::uint8_t MantleAnimationMontage[0x20]; // 0x6068 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GetupAnimationMontage_Front[0x20]; // 0x6088 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GetupAnimationMontage_Left[0x20]; // 0x60A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GetupAnimationMontage_Right[0x20]; // 0x60C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GetupAnimationMontage_Back[0x20]; // 0x60E8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LandStaggerAnimationMontage[0x20]; // 0x6108 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LandStaggerAnimationMontageAlt[0x20]; // 0x6128 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BackpackAllowList[0x20]; // 0x6148 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bCharacterCosmeticsVisibility; // 0x6168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBackpackCosmeticsVisibility; // 0x6169 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x6]; // 0x616A
    std::uint8_t IdleBreakBlockingTags[0x20]; // 0x6170 (Size: 0x20, Type: StructProperty)
    std::uint8_t bEnableInventoryMode; // 0x6190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x7]; // 0x6191
    void* RetargetSourceMesh; // 0x6198 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBeanCharacter, AbilitySet) == 24296, "Offset mismatch for UBeanCharacter::AbilitySet");
static_assert(offsetof(UBeanCharacter, AnimInstance) == 24304, "Offset mismatch for UBeanCharacter::AnimInstance");
static_assert(offsetof(UBeanCharacter, MotionWarpingComponent) == 24312, "Offset mismatch for UBeanCharacter::MotionWarpingComponent");
static_assert(offsetof(UBeanCharacter, ConfigurationClass) == 24320, "Offset mismatch for UBeanCharacter::ConfigurationClass");
static_assert(offsetof(UBeanCharacter, DefaultMappingContext) == 24328, "Offset mismatch for UBeanCharacter::DefaultMappingContext");
static_assert(offsetof(UBeanCharacter, DiveAction) == 24336, "Offset mismatch for UBeanCharacter::DiveAction");
static_assert(offsetof(UBeanCharacter, GrabAction) == 24344, "Offset mismatch for UBeanCharacter::GrabAction");
static_assert(offsetof(UBeanCharacter, JumpButtonDiveIconOverrideTag) == 24352, "Offset mismatch for UBeanCharacter::JumpButtonDiveIconOverrideTag");
static_assert(offsetof(UBeanCharacter, MovementComponent) == 24400, "Offset mismatch for UBeanCharacter::MovementComponent");
static_assert(offsetof(UBeanCharacter, JiggleComponent) == 24408, "Offset mismatch for UBeanCharacter::JiggleComponent");
static_assert(offsetof(UBeanCharacter, StateMachine) == 24440, "Offset mismatch for UBeanCharacter::StateMachine");
static_assert(offsetof(UBeanCharacter, BeanStreamManager) == 24448, "Offset mismatch for UBeanCharacter::BeanStreamManager");
static_assert(offsetof(UBeanCharacter, bPressedDive) == 24456, "Offset mismatch for UBeanCharacter::bPressedDive");
static_assert(offsetof(UBeanCharacter, BeanCameraModeOverrideComponent) == 24504, "Offset mismatch for UBeanCharacter::BeanCameraModeOverrideComponent");
static_assert(offsetof(UBeanCharacter, ParticleSystemsComponent) == 24512, "Offset mismatch for UBeanCharacter::ParticleSystemsComponent");
static_assert(offsetof(UBeanCharacter, GrabComponent) == 24520, "Offset mismatch for UBeanCharacter::GrabComponent");
static_assert(offsetof(UBeanCharacter, BeingGrabbedComponent) == 24528, "Offset mismatch for UBeanCharacter::BeingGrabbedComponent");
static_assert(offsetof(UBeanCharacter, GrabFeatureEnabledTag) == 24536, "Offset mismatch for UBeanCharacter::GrabFeatureEnabledTag");
static_assert(offsetof(UBeanCharacter, bPressingGrab) == 24540, "Offset mismatch for UBeanCharacter::bPressingGrab");
static_assert(offsetof(UBeanCharacter, MantleComponent) == 24544, "Offset mismatch for UBeanCharacter::MantleComponent");
static_assert(offsetof(UBeanCharacter, bWantsToMantle) == 24552, "Offset mismatch for UBeanCharacter::bWantsToMantle");
static_assert(offsetof(UBeanCharacter, RagdollComponent) == 24568, "Offset mismatch for UBeanCharacter::RagdollComponent");
static_assert(offsetof(UBeanCharacter, RagdollPhysicsConstraint) == 24576, "Offset mismatch for UBeanCharacter::RagdollPhysicsConstraint");
static_assert(offsetof(UBeanCharacter, RagdollRootCapsule) == 24584, "Offset mismatch for UBeanCharacter::RagdollRootCapsule");
static_assert(offsetof(UBeanCharacter, CapsuleUnscaledHalfHeight) == 24592, "Offset mismatch for UBeanCharacter::CapsuleUnscaledHalfHeight");
static_assert(offsetof(UBeanCharacter, CollisionManagerComponent) == 24600, "Offset mismatch for UBeanCharacter::CollisionManagerComponent");
static_assert(offsetof(UBeanCharacter, PushedInteractionSelection) == 24624, "Offset mismatch for UBeanCharacter::PushedInteractionSelection");
static_assert(offsetof(UBeanCharacter, MantleAnimationMontage) == 24680, "Offset mismatch for UBeanCharacter::MantleAnimationMontage");
static_assert(offsetof(UBeanCharacter, GetupAnimationMontage_Front) == 24712, "Offset mismatch for UBeanCharacter::GetupAnimationMontage_Front");
static_assert(offsetof(UBeanCharacter, GetupAnimationMontage_Left) == 24744, "Offset mismatch for UBeanCharacter::GetupAnimationMontage_Left");
static_assert(offsetof(UBeanCharacter, GetupAnimationMontage_Right) == 24776, "Offset mismatch for UBeanCharacter::GetupAnimationMontage_Right");
static_assert(offsetof(UBeanCharacter, GetupAnimationMontage_Back) == 24808, "Offset mismatch for UBeanCharacter::GetupAnimationMontage_Back");
static_assert(offsetof(UBeanCharacter, LandStaggerAnimationMontage) == 24840, "Offset mismatch for UBeanCharacter::LandStaggerAnimationMontage");
static_assert(offsetof(UBeanCharacter, LandStaggerAnimationMontageAlt) == 24872, "Offset mismatch for UBeanCharacter::LandStaggerAnimationMontageAlt");
static_assert(offsetof(UBeanCharacter, BackpackAllowList) == 24904, "Offset mismatch for UBeanCharacter::BackpackAllowList");
static_assert(offsetof(UBeanCharacter, bCharacterCosmeticsVisibility) == 24936, "Offset mismatch for UBeanCharacter::bCharacterCosmeticsVisibility");
static_assert(offsetof(UBeanCharacter, bBackpackCosmeticsVisibility) == 24937, "Offset mismatch for UBeanCharacter::bBackpackCosmeticsVisibility");
static_assert(offsetof(UBeanCharacter, IdleBreakBlockingTags) == 24944, "Offset mismatch for UBeanCharacter::IdleBreakBlockingTags");
static_assert(offsetof(UBeanCharacter, bEnableInventoryMode) == 24976, "Offset mismatch for UBeanCharacter::bEnableInventoryMode");
static_assert(offsetof(UBeanCharacter, RetargetSourceMesh) == 24984, "Offset mismatch for UBeanCharacter::RetargetSourceMesh");

// /Script/BeanstalkRuntime.BeanCheatManager
// Kind: Class; super: ChildCheatManager
class UBeanCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanCosmeticBackpackAllowList
// Kind: Class; super: DataAsset
class UBeanCosmeticBackpackAllowList
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSet<void*> AllowedBackpacks; // 0x0028 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UBeanCosmeticBackpackAllowList, AllowedBackpacks) == 40, "Offset mismatch for UBeanCosmeticBackpackAllowList::AllowedBackpacks");

// /Script/BeanstalkRuntime.BeanGrabbable
// Kind: Class; super: Interface
class UBeanGrabbable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanJiggleMotionComponent
// Kind: Class; super: ActorComponent
class UBeanJiggleMotionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t VelocityCurve[0x78]; // 0x00C0 (Size: 0x78, Type: StructProperty)
    TArray<void*> CurrentBoneRotations; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TargetBoneRotations; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurrentInterpolatedBoneRotations; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBeanJiggleMotionComponent, VelocityCurve) == 192, "Offset mismatch for UBeanJiggleMotionComponent::VelocityCurve");
static_assert(offsetof(UBeanJiggleMotionComponent, CurrentBoneRotations) == 312, "Offset mismatch for UBeanJiggleMotionComponent::CurrentBoneRotations");
static_assert(offsetof(UBeanJiggleMotionComponent, TargetBoneRotations) == 328, "Offset mismatch for UBeanJiggleMotionComponent::TargetBoneRotations");
static_assert(offsetof(UBeanJiggleMotionComponent, CurrentInterpolatedBoneRotations) == 344, "Offset mismatch for UBeanJiggleMotionComponent::CurrentInterpolatedBoneRotations");

// /Script/BeanstalkRuntime.BeanLaunchPredictorInterface
// Kind: Class; super: Interface
class UBeanLaunchPredictorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.BeanParticleSystemsComponent
// Kind: Class; super: ActorComponent
class UBeanParticleSystemsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> VfxParticleSystemsMap; // 0x00C0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UBeanParticleSystemsComponent, VfxParticleSystemsMap) == 192, "Offset mismatch for UBeanParticleSystemsComponent::VfxParticleSystemsMap");

// /Script/BeanstalkRuntime.BeanPhysicsDOFConstraintSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UBeanPhysicsDOFConstraintSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> PreviousConstraints; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UBeanPhysicsDOFConstraintSubsystem, PreviousConstraints) == 48, "Offset mismatch for UBeanPhysicsDOFConstraintSubsystem::PreviousConstraints");

// /Script/BeanstalkRuntime.BeanStreamingManager
// Kind: Class; super: Object
class UBeanStreamingManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSet<void*> LoadedAssets; // 0x0028 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UBeanStreamingManager, LoadedAssets) == 40, "Offset mismatch for UBeanStreamingManager::LoadedAssets");

// /Script/BeanstalkRuntime.BeanstalkFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBeanstalkFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.FortAthenaMutator_BeanGameStateCore
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_BeanGameStateCore
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_BeanGameStateCore, bMutatesGameMode) == 688, "Offset mismatch for UFortAthenaMutator_BeanGameStateCore::bMutatesGameMode");
static_assert(offsetof(UFortAthenaMutator_BeanGameStateCore, CachedGameMode) == 696, "Offset mismatch for UFortAthenaMutator_BeanGameStateCore::CachedGameMode");
static_assert(offsetof(UFortAthenaMutator_BeanGameStateCore, CachedGameState) == 704, "Offset mismatch for UFortAthenaMutator_BeanGameStateCore::CachedGameState");
static_assert(offsetof(UFortAthenaMutator_BeanGameStateCore, InitializedPlayerControllers) == 712, "Offset mismatch for UFortAthenaMutator_BeanGameStateCore::InitializedPlayerControllers");
static_assert(offsetof(UFortAthenaMutator_BeanGameStateCore, OverridePriority) == 732, "Offset mismatch for UFortAthenaMutator_BeanGameStateCore::OverridePriority");
static_assert(offsetof(UFortAthenaMutator_BeanGameStateCore, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortAthenaMutator_BeanGameStateCore::bOnlyRunOnGameThread");

// /Script/BeanstalkRuntime.FortAthenaMutator_BeanPlayerPawn
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_BeanPlayerPawn
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    TSoftClassPtr<void> OverridePawnClass; // 0x02E0 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortAthenaMutator_BeanPlayerPawn, OverridePawnClass) == 736, "Offset mismatch for UFortAthenaMutator_BeanPlayerPawn::OverridePawnClass");

// /Script/BeanstalkRuntime.FortAutomationRpcManager_Beanstalk
// Kind: Class; super: FortAutomationRpcManager
class UFortAutomationRpcManager_Beanstalk
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkRuntime.FortPickupInteractOverrideComponent_Beanstalk
// Kind: Class; super: FortPickupInteractOverrideComponent
class UFortPickupInteractOverrideComponent_Beanstalk
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t Priority; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    void* ContextOverrideWidget; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* SecondContextOverrideWidget; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bContextOverrideWidgetApplied; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveContextOverrideWidgetsImmediately; // 0x00D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPickupInteractOverrideComponent_Beanstalk, Priority) == 192, "Offset mismatch for UFortPickupInteractOverrideComponent_Beanstalk::Priority");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Beanstalk, ContextOverrideWidget) == 200, "Offset mismatch for UFortPickupInteractOverrideComponent_Beanstalk::ContextOverrideWidget");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Beanstalk, SecondContextOverrideWidget) == 208, "Offset mismatch for UFortPickupInteractOverrideComponent_Beanstalk::SecondContextOverrideWidget");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Beanstalk, bContextOverrideWidgetApplied) == 216, "Offset mismatch for UFortPickupInteractOverrideComponent_Beanstalk::bContextOverrideWidgetApplied");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Beanstalk, bRemoveContextOverrideWidgetsImmediately) == 217, "Offset mismatch for UFortPickupInteractOverrideComponent_Beanstalk::bRemoveContextOverrideWidgetsImmediately");

// /Script/BeanstalkRuntime.InteractSelection_BeanPawn
// Kind: Class; super: InteractSelection_Base
class UInteractSelection_BeanPawn
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> InteractableActorsCache; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInteractSelection_BeanPawn, InteractableActorsCache) == 56, "Offset mismatch for UInteractSelection_BeanPawn::InteractableActorsCache");
