/**
 * decamp dumper generated SDK
 * Package: /Script/LACombatInferenceRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LACombatInferenceRuntime.LAActionStickiness
// Kind: ScriptStruct; super: none
struct FLAActionStickiness
{
public:
    std::uint8_t bEnableActionStickiness; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSprintStickiness; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableXYStickiness; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t SprintStickinessSeconds[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementStickinessSeconds[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementStickinessIdleSeconds[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnableYawSmoothing; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0081
    std::uint8_t YawSmoothingAlpha[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnableYawSmoothingV2; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00B1
    std::uint8_t YawSmoothingAlphaV2[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLAActionStickiness, bEnableActionStickiness) == 0, "Offset mismatch for FLAActionStickiness::bEnableActionStickiness");
static_assert(offsetof(FLAActionStickiness, bEnableSprintStickiness) == 1, "Offset mismatch for FLAActionStickiness::bEnableSprintStickiness");
static_assert(offsetof(FLAActionStickiness, bEnableXYStickiness) == 2, "Offset mismatch for FLAActionStickiness::bEnableXYStickiness");
static_assert(offsetof(FLAActionStickiness, SprintStickinessSeconds) == 8, "Offset mismatch for FLAActionStickiness::SprintStickinessSeconds");
static_assert(offsetof(FLAActionStickiness, MovementStickinessSeconds) == 48, "Offset mismatch for FLAActionStickiness::MovementStickinessSeconds");
static_assert(offsetof(FLAActionStickiness, MovementStickinessIdleSeconds) == 88, "Offset mismatch for FLAActionStickiness::MovementStickinessIdleSeconds");
static_assert(offsetof(FLAActionStickiness, bEnableYawSmoothing) == 128, "Offset mismatch for FLAActionStickiness::bEnableYawSmoothing");
static_assert(offsetof(FLAActionStickiness, YawSmoothingAlpha) == 136, "Offset mismatch for FLAActionStickiness::YawSmoothingAlpha");
static_assert(offsetof(FLAActionStickiness, bEnableYawSmoothingV2) == 176, "Offset mismatch for FLAActionStickiness::bEnableYawSmoothingV2");
static_assert(offsetof(FLAActionStickiness, YawSmoothingAlphaV2) == 184, "Offset mismatch for FLAActionStickiness::YawSmoothingAlphaV2");

// /Script/LACombatInferenceRuntime.LACombatADSActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatADSActionOptions
{
public:
    std::uint8_t bAddAimDownSightAction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddADSDiscreteAction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedADSDiscreteAction; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t EncodingSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatADSActionOptions, bAddAimDownSightAction) == 0, "Offset mismatch for FLACombatADSActionOptions::bAddAimDownSightAction");
static_assert(offsetof(FLACombatADSActionOptions, bAddADSDiscreteAction) == 1, "Offset mismatch for FLACombatADSActionOptions::bAddADSDiscreteAction");
static_assert(offsetof(FLACombatADSActionOptions, bAddEncodedADSDiscreteAction) == 2, "Offset mismatch for FLACombatADSActionOptions::bAddEncodedADSDiscreteAction");
static_assert(offsetof(FLACombatADSActionOptions, EncodingSize) == 4, "Offset mismatch for FLACombatADSActionOptions::EncodingSize");
static_assert(offsetof(FLACombatADSActionOptions, EncodingDepth) == 8, "Offset mismatch for FLACombatADSActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatADSActionOptions, EncodingActivation) == 12, "Offset mismatch for FLACombatADSActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LACombatADSScales
// Kind: ScriptStruct; super: none
struct FLACombatADSScales
{
public:
    float ADSActionScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ADSActionBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatADSScales, ADSActionScale) == 0, "Offset mismatch for FLACombatADSScales::ADSActionScale");
static_assert(offsetof(FLACombatADSScales, ADSActionBias) == 4, "Offset mismatch for FLACombatADSScales::ADSActionBias");

// /Script/LACombatInferenceRuntime.LACombatActionChunkEntry
// Kind: ScriptStruct; super: none
struct FLACombatActionChunkEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LACombatInferenceRuntime.LACombatActionGuards
// Kind: ScriptStruct; super: none
struct FLACombatActionGuards
{
public:
    std::uint8_t bEnableActionGuards; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyRulesBasedShooting; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t RulesBasedShootingPitch[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t RulesBasedShootingYaw[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t bApplySoftAimMagnetToTarget; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplySoftAimMagnetWhileReloading; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x005A
    std::uint8_t SoftAimMagnetForce[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetAxisScales[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t bSoftAimMagnetOverrideYawPolicy; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSoftAimMagnetOverridePitchPolicy; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x009A
    std::uint8_t SoftAimMagnetMaxPitchCorrection[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetMaxYawCorrection[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetStrengthCurve[0x20]; // 0x00F0 (Size: 0x20, Type: SoftObjectProperty)
    void* SoftAimMagnetStrengthCurveObj; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bApplyAimMagnetDuringRunaway; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimMagnetDuringRunawayOverridePolicy; // 0x0119 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDelayRunawayTrigger; // 0x011A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x5]; // 0x011B
    std::uint8_t RunawayGuardDelay[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t bTriggerRunawayIfNoShootOrReload; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0149
    std::uint8_t AcceptedNoShootOrReloadTimeSeconds[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    std::uint8_t PolicyRunawayTriggerAnglePitch[0x28]; // 0x0178 (Size: 0x28, Type: StructProperty)
    std::uint8_t PolicyRunawayStopAnglePitch[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PolicyRunawayTriggerAngleYaw[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PolicyRunawayStopAngleYaw[0x28]; // 0x01F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bTriggerRunawayPolicyIfReloading; // 0x0218 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0219
    std::uint8_t RunawayAimMagnetStrengthCurve[0x20]; // 0x0220 (Size: 0x20, Type: SoftObjectProperty)
    void* RunawayMagnetStrengthCurveObj; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bFireOnlyAtTarget; // 0x0248 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0249
    std::uint8_t MinAngleToTargetToFire[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t bOverridePitch; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0279
    std::uint8_t PitchOverrideSmoothingSpeed[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t bOverrideCrouch; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x02A9
    std::uint8_t TargetOffsetFromActorLocation[0x1]; // 0x02B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatActionGuards, bEnableActionGuards) == 0, "Offset mismatch for FLACombatActionGuards::bEnableActionGuards");
static_assert(offsetof(FLACombatActionGuards, bApplyRulesBasedShooting) == 1, "Offset mismatch for FLACombatActionGuards::bApplyRulesBasedShooting");
static_assert(offsetof(FLACombatActionGuards, RulesBasedShootingPitch) == 8, "Offset mismatch for FLACombatActionGuards::RulesBasedShootingPitch");
static_assert(offsetof(FLACombatActionGuards, RulesBasedShootingYaw) == 48, "Offset mismatch for FLACombatActionGuards::RulesBasedShootingYaw");
static_assert(offsetof(FLACombatActionGuards, bApplySoftAimMagnetToTarget) == 88, "Offset mismatch for FLACombatActionGuards::bApplySoftAimMagnetToTarget");
static_assert(offsetof(FLACombatActionGuards, bApplySoftAimMagnetWhileReloading) == 89, "Offset mismatch for FLACombatActionGuards::bApplySoftAimMagnetWhileReloading");
static_assert(offsetof(FLACombatActionGuards, SoftAimMagnetForce) == 96, "Offset mismatch for FLACombatActionGuards::SoftAimMagnetForce");
static_assert(offsetof(FLACombatActionGuards, SoftAimMagnetAxisScales) == 136, "Offset mismatch for FLACombatActionGuards::SoftAimMagnetAxisScales");
static_assert(offsetof(FLACombatActionGuards, bSoftAimMagnetOverrideYawPolicy) == 152, "Offset mismatch for FLACombatActionGuards::bSoftAimMagnetOverrideYawPolicy");
static_assert(offsetof(FLACombatActionGuards, bSoftAimMagnetOverridePitchPolicy) == 153, "Offset mismatch for FLACombatActionGuards::bSoftAimMagnetOverridePitchPolicy");
static_assert(offsetof(FLACombatActionGuards, SoftAimMagnetMaxPitchCorrection) == 160, "Offset mismatch for FLACombatActionGuards::SoftAimMagnetMaxPitchCorrection");
static_assert(offsetof(FLACombatActionGuards, SoftAimMagnetMaxYawCorrection) == 200, "Offset mismatch for FLACombatActionGuards::SoftAimMagnetMaxYawCorrection");
static_assert(offsetof(FLACombatActionGuards, SoftAimMagnetStrengthCurve) == 240, "Offset mismatch for FLACombatActionGuards::SoftAimMagnetStrengthCurve");
static_assert(offsetof(FLACombatActionGuards, SoftAimMagnetStrengthCurveObj) == 272, "Offset mismatch for FLACombatActionGuards::SoftAimMagnetStrengthCurveObj");
static_assert(offsetof(FLACombatActionGuards, bApplyAimMagnetDuringRunaway) == 280, "Offset mismatch for FLACombatActionGuards::bApplyAimMagnetDuringRunaway");
static_assert(offsetof(FLACombatActionGuards, bAimMagnetDuringRunawayOverridePolicy) == 281, "Offset mismatch for FLACombatActionGuards::bAimMagnetDuringRunawayOverridePolicy");
static_assert(offsetof(FLACombatActionGuards, bDelayRunawayTrigger) == 282, "Offset mismatch for FLACombatActionGuards::bDelayRunawayTrigger");
static_assert(offsetof(FLACombatActionGuards, RunawayGuardDelay) == 288, "Offset mismatch for FLACombatActionGuards::RunawayGuardDelay");
static_assert(offsetof(FLACombatActionGuards, bTriggerRunawayIfNoShootOrReload) == 328, "Offset mismatch for FLACombatActionGuards::bTriggerRunawayIfNoShootOrReload");
static_assert(offsetof(FLACombatActionGuards, AcceptedNoShootOrReloadTimeSeconds) == 336, "Offset mismatch for FLACombatActionGuards::AcceptedNoShootOrReloadTimeSeconds");
static_assert(offsetof(FLACombatActionGuards, PolicyRunawayTriggerAnglePitch) == 376, "Offset mismatch for FLACombatActionGuards::PolicyRunawayTriggerAnglePitch");
static_assert(offsetof(FLACombatActionGuards, PolicyRunawayStopAnglePitch) == 416, "Offset mismatch for FLACombatActionGuards::PolicyRunawayStopAnglePitch");
static_assert(offsetof(FLACombatActionGuards, PolicyRunawayTriggerAngleYaw) == 456, "Offset mismatch for FLACombatActionGuards::PolicyRunawayTriggerAngleYaw");
static_assert(offsetof(FLACombatActionGuards, PolicyRunawayStopAngleYaw) == 496, "Offset mismatch for FLACombatActionGuards::PolicyRunawayStopAngleYaw");
static_assert(offsetof(FLACombatActionGuards, bTriggerRunawayPolicyIfReloading) == 536, "Offset mismatch for FLACombatActionGuards::bTriggerRunawayPolicyIfReloading");
static_assert(offsetof(FLACombatActionGuards, RunawayAimMagnetStrengthCurve) == 544, "Offset mismatch for FLACombatActionGuards::RunawayAimMagnetStrengthCurve");
static_assert(offsetof(FLACombatActionGuards, RunawayMagnetStrengthCurveObj) == 576, "Offset mismatch for FLACombatActionGuards::RunawayMagnetStrengthCurveObj");
static_assert(offsetof(FLACombatActionGuards, bFireOnlyAtTarget) == 584, "Offset mismatch for FLACombatActionGuards::bFireOnlyAtTarget");
static_assert(offsetof(FLACombatActionGuards, MinAngleToTargetToFire) == 592, "Offset mismatch for FLACombatActionGuards::MinAngleToTargetToFire");
static_assert(offsetof(FLACombatActionGuards, bOverridePitch) == 632, "Offset mismatch for FLACombatActionGuards::bOverridePitch");
static_assert(offsetof(FLACombatActionGuards, PitchOverrideSmoothingSpeed) == 640, "Offset mismatch for FLACombatActionGuards::PitchOverrideSmoothingSpeed");
static_assert(offsetof(FLACombatActionGuards, bOverrideCrouch) == 680, "Offset mismatch for FLACombatActionGuards::bOverrideCrouch");
static_assert(offsetof(FLACombatActionGuards, TargetOffsetFromActorLocation) == 688, "Offset mismatch for FLACombatActionGuards::TargetOffsetFromActorLocation");

// /Script/LACombatInferenceRuntime.LACombatActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatActionOptions
{
public:
    std::uint8_t PitchYaw[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Fire[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t XY[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t Jump[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t Sprint[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t Crouch[0x14]; // 0x0070 (Size: 0x14, Type: StructProperty)
    std::uint8_t Slide[0x10]; // 0x0084 (Size: 0x10, Type: StructProperty)
    std::uint8_t ADS[0x10]; // 0x0094 (Size: 0x10, Type: StructProperty)
    std::uint8_t Reload[0x10]; // 0x00A4 (Size: 0x10, Type: StructProperty)
    std::uint8_t DiscreteInclusive[0x14]; // 0x00B4 (Size: 0x14, Type: StructProperty)
    std::uint8_t DiscreteInclusiveLimited[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAddSpeedAction; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLACombatActionOptions, PitchYaw) == 0, "Offset mismatch for FLACombatActionOptions::PitchYaw");
static_assert(offsetof(FLACombatActionOptions, Fire) == 24, "Offset mismatch for FLACombatActionOptions::Fire");
static_assert(offsetof(FLACombatActionOptions, XY) == 40, "Offset mismatch for FLACombatActionOptions::XY");
static_assert(offsetof(FLACombatActionOptions, Jump) == 80, "Offset mismatch for FLACombatActionOptions::Jump");
static_assert(offsetof(FLACombatActionOptions, Sprint) == 96, "Offset mismatch for FLACombatActionOptions::Sprint");
static_assert(offsetof(FLACombatActionOptions, Crouch) == 112, "Offset mismatch for FLACombatActionOptions::Crouch");
static_assert(offsetof(FLACombatActionOptions, Slide) == 132, "Offset mismatch for FLACombatActionOptions::Slide");
static_assert(offsetof(FLACombatActionOptions, ADS) == 148, "Offset mismatch for FLACombatActionOptions::ADS");
static_assert(offsetof(FLACombatActionOptions, Reload) == 164, "Offset mismatch for FLACombatActionOptions::Reload");
static_assert(offsetof(FLACombatActionOptions, DiscreteInclusive) == 180, "Offset mismatch for FLACombatActionOptions::DiscreteInclusive");
static_assert(offsetof(FLACombatActionOptions, DiscreteInclusiveLimited) == 200, "Offset mismatch for FLACombatActionOptions::DiscreteInclusiveLimited");
static_assert(offsetof(FLACombatActionOptions, bAddSpeedAction) == 216, "Offset mismatch for FLACombatActionOptions::bAddSpeedAction");

// /Script/LACombatInferenceRuntime.LACombatActionScales
// Kind: ScriptStruct; super: none
struct FLACombatActionScales
{
public:
    std::uint8_t Movement[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Rotation[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Fire[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t Jump[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Crouch[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t Sprint[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    std::uint8_t Slide[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t ADS[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t Reload[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t Speed[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatActionScales, Movement) == 0, "Offset mismatch for FLACombatActionScales::Movement");
static_assert(offsetof(FLACombatActionScales, Rotation) == 16, "Offset mismatch for FLACombatActionScales::Rotation");
static_assert(offsetof(FLACombatActionScales, Fire) == 32, "Offset mismatch for FLACombatActionScales::Fire");
static_assert(offsetof(FLACombatActionScales, Jump) == 40, "Offset mismatch for FLACombatActionScales::Jump");
static_assert(offsetof(FLACombatActionScales, Crouch) == 48, "Offset mismatch for FLACombatActionScales::Crouch");
static_assert(offsetof(FLACombatActionScales, Sprint) == 64, "Offset mismatch for FLACombatActionScales::Sprint");
static_assert(offsetof(FLACombatActionScales, Slide) == 72, "Offset mismatch for FLACombatActionScales::Slide");
static_assert(offsetof(FLACombatActionScales, ADS) == 80, "Offset mismatch for FLACombatActionScales::ADS");
static_assert(offsetof(FLACombatActionScales, Reload) == 88, "Offset mismatch for FLACombatActionScales::Reload");
static_assert(offsetof(FLACombatActionScales, Speed) == 96, "Offset mismatch for FLACombatActionScales::Speed");

// /Script/LACombatInferenceRuntime.LACombatAndData
// Kind: ScriptStruct; super: LACombatElementDataBase
struct FLACombatAndData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TMap<void*, void*> SubElements; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FLACombatAndData, SubElements) == 8, "Offset mismatch for FLACombatAndData::SubElements");

// /Script/LACombatInferenceRuntime.LACombatArrayData
// Kind: ScriptStruct; super: LACombatElementDataBase
struct FLACombatArrayData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SubElement[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatArrayData, SubElement) == 8, "Offset mismatch for FLACombatArrayData::SubElement");

// /Script/LACombatInferenceRuntime.LACombatContinuousData
// Kind: ScriptStruct; super: LACombatNormalizationData
struct FLACombatContinuousData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t ActionSize; // 0x0028 (Size: 0x4, Type: IntProperty)
    float SigmoidThreshold; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatContinuousData, ActionSize) == 40, "Offset mismatch for FLACombatContinuousData::ActionSize");
static_assert(offsetof(FLACombatContinuousData, SigmoidThreshold) == 44, "Offset mismatch for FLACombatContinuousData::SigmoidThreshold");

// /Script/LACombatInferenceRuntime.LACombatCrouchActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatCrouchActionOptions
{
public:
    std::uint8_t bAddCrouchAction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddCrouchDiscreteAction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddStatefulCrouchAction; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddStatefulCrouchDiscreteAction; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedStatefulCrouchDiscreteAction; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t EncodingSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatCrouchActionOptions, bAddCrouchAction) == 0, "Offset mismatch for FLACombatCrouchActionOptions::bAddCrouchAction");
static_assert(offsetof(FLACombatCrouchActionOptions, bAddCrouchDiscreteAction) == 1, "Offset mismatch for FLACombatCrouchActionOptions::bAddCrouchDiscreteAction");
static_assert(offsetof(FLACombatCrouchActionOptions, bAddStatefulCrouchAction) == 2, "Offset mismatch for FLACombatCrouchActionOptions::bAddStatefulCrouchAction");
static_assert(offsetof(FLACombatCrouchActionOptions, bAddStatefulCrouchDiscreteAction) == 3, "Offset mismatch for FLACombatCrouchActionOptions::bAddStatefulCrouchDiscreteAction");
static_assert(offsetof(FLACombatCrouchActionOptions, bAddEncodedStatefulCrouchDiscreteAction) == 4, "Offset mismatch for FLACombatCrouchActionOptions::bAddEncodedStatefulCrouchDiscreteAction");
static_assert(offsetof(FLACombatCrouchActionOptions, EncodingSize) == 8, "Offset mismatch for FLACombatCrouchActionOptions::EncodingSize");
static_assert(offsetof(FLACombatCrouchActionOptions, EncodingDepth) == 12, "Offset mismatch for FLACombatCrouchActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatCrouchActionOptions, EncodingActivation) == 16, "Offset mismatch for FLACombatCrouchActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LACombatCrouchScales
// Kind: ScriptStruct; super: none
struct FLACombatCrouchScales
{
public:
    float CrouchActionScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CrouchActionBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float StatefulCrouchActionScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float StatefulCrouchActionBias; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatCrouchScales, CrouchActionScale) == 0, "Offset mismatch for FLACombatCrouchScales::CrouchActionScale");
static_assert(offsetof(FLACombatCrouchScales, CrouchActionBias) == 4, "Offset mismatch for FLACombatCrouchScales::CrouchActionBias");
static_assert(offsetof(FLACombatCrouchScales, StatefulCrouchActionScale) == 8, "Offset mismatch for FLACombatCrouchScales::StatefulCrouchActionScale");
static_assert(offsetof(FLACombatCrouchScales, StatefulCrouchActionBias) == 12, "Offset mismatch for FLACombatCrouchScales::StatefulCrouchActionBias");

// /Script/LACombatInferenceRuntime.LACombatDiscreteExclusiveData
// Kind: ScriptStruct; super: LACombatElementDataBase
struct FLACombatDiscreteExclusiveData
{
public:
    std::uint8_t bActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLACombatDiscreteExclusiveData, bActive) == 0, "Offset mismatch for FLACombatDiscreteExclusiveData::bActive");

// /Script/LACombatInferenceRuntime.LACombatDiscreteInclusiveActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatDiscreteInclusiveActionOptions
{
public:
    std::uint8_t Pad_0000[0x6]; // 0x0000
    std::uint8_t bAddDiscreteInclusiveAction; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedDiscreteInclusiveAction; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::int32_t EncodingSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatDiscreteInclusiveActionOptions, bAddDiscreteInclusiveAction) == 6, "Offset mismatch for FLACombatDiscreteInclusiveActionOptions::bAddDiscreteInclusiveAction");
static_assert(offsetof(FLACombatDiscreteInclusiveActionOptions, bAddEncodedDiscreteInclusiveAction) == 7, "Offset mismatch for FLACombatDiscreteInclusiveActionOptions::bAddEncodedDiscreteInclusiveAction");
static_assert(offsetof(FLACombatDiscreteInclusiveActionOptions, EncodingSize) == 8, "Offset mismatch for FLACombatDiscreteInclusiveActionOptions::EncodingSize");
static_assert(offsetof(FLACombatDiscreteInclusiveActionOptions, EncodingDepth) == 12, "Offset mismatch for FLACombatDiscreteInclusiveActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatDiscreteInclusiveActionOptions, EncodingActivation) == 16, "Offset mismatch for FLACombatDiscreteInclusiveActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LACombatDiscreteInclusiveData
// Kind: ScriptStruct; super: LACombatElementDataBase
struct FLACombatDiscreteInclusiveData
{
public:
    std::uint8_t bActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLACombatDiscreteInclusiveData, bActive) == 0, "Offset mismatch for FLACombatDiscreteInclusiveData::bActive");

// /Script/LACombatInferenceRuntime.LACombatDiscreteInclusiveLimitedActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatDiscreteInclusiveLimitedActionOptions
{
public:
    std::uint8_t bAddDiscreteInclusiveAction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedDiscreteInclusiveAction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t EncodingSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatDiscreteInclusiveLimitedActionOptions, bAddDiscreteInclusiveAction) == 0, "Offset mismatch for FLACombatDiscreteInclusiveLimitedActionOptions::bAddDiscreteInclusiveAction");
static_assert(offsetof(FLACombatDiscreteInclusiveLimitedActionOptions, bAddEncodedDiscreteInclusiveAction) == 1, "Offset mismatch for FLACombatDiscreteInclusiveLimitedActionOptions::bAddEncodedDiscreteInclusiveAction");
static_assert(offsetof(FLACombatDiscreteInclusiveLimitedActionOptions, EncodingSize) == 4, "Offset mismatch for FLACombatDiscreteInclusiveLimitedActionOptions::EncodingSize");
static_assert(offsetof(FLACombatDiscreteInclusiveLimitedActionOptions, EncodingDepth) == 8, "Offset mismatch for FLACombatDiscreteInclusiveLimitedActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatDiscreteInclusiveLimitedActionOptions, EncodingActivation) == 12, "Offset mismatch for FLACombatDiscreteInclusiveLimitedActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LACombatElementDataBase
// Kind: ScriptStruct; super: none
struct FLACombatElementDataBase
{
public:
    std::uint8_t bActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLACombatElementDataBase, bActive) == 0, "Offset mismatch for FLACombatElementDataBase::bActive");

// /Script/LACombatInferenceRuntime.LACombatEncodingData
// Kind: ScriptStruct; super: LACombatElementDataBase
struct FLACombatEncodingData
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    std::int32_t EncodingSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t SubElement[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatEncodingData, EncodingSize) == 4, "Offset mismatch for FLACombatEncodingData::EncodingSize");
static_assert(offsetof(FLACombatEncodingData, EncodingDepth) == 8, "Offset mismatch for FLACombatEncodingData::EncodingDepth");
static_assert(offsetof(FLACombatEncodingData, EncodingActivation) == 12, "Offset mismatch for FLACombatEncodingData::EncodingActivation");
static_assert(offsetof(FLACombatEncodingData, SubElement) == 16, "Offset mismatch for FLACombatEncodingData::SubElement");

// /Script/LACombatInferenceRuntime.LACombatFireActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatFireActionOptions
{
public:
    std::uint8_t bAddFireAction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddFireDiscreteAction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedFireAction; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t EncodingSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatFireActionOptions, bAddFireAction) == 0, "Offset mismatch for FLACombatFireActionOptions::bAddFireAction");
static_assert(offsetof(FLACombatFireActionOptions, bAddFireDiscreteAction) == 1, "Offset mismatch for FLACombatFireActionOptions::bAddFireDiscreteAction");
static_assert(offsetof(FLACombatFireActionOptions, bAddEncodedFireAction) == 2, "Offset mismatch for FLACombatFireActionOptions::bAddEncodedFireAction");
static_assert(offsetof(FLACombatFireActionOptions, EncodingSize) == 4, "Offset mismatch for FLACombatFireActionOptions::EncodingSize");
static_assert(offsetof(FLACombatFireActionOptions, EncodingDepth) == 8, "Offset mismatch for FLACombatFireActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatFireActionOptions, EncodingActivation) == 12, "Offset mismatch for FLACombatFireActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LACombatFireScales
// Kind: ScriptStruct; super: none
struct FLACombatFireScales
{
public:
    float FireActionScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FireActionBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatFireScales, FireActionScale) == 0, "Offset mismatch for FLACombatFireScales::FireActionScale");
static_assert(offsetof(FLACombatFireScales, FireActionBias) == 4, "Offset mismatch for FLACombatFireScales::FireActionBias");

// /Script/LACombatInferenceRuntime.LACombatGuards
// Kind: ScriptStruct; super: none
struct FLACombatGuards
{
public:
    std::uint8_t EnableActionGuards[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplyRulesBasedShooting[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t RulesBasedShootingPitch[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t RulesBasedShootingYaw[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplySoftAimMagnetToTarget[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplySoftAimMagnetWhileReloading[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetForce[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimStrengthMultiplier[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetAxisScales[0x10]; // 0x0140 (Size: 0x10, Type: StructProperty)
    std::uint8_t SoftAimMagnetOverrideYawPolicy[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetOverridePitchPolicy[0x28]; // 0x0178 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetMaxPitchCorrection[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetMaxYawCorrection[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetStrengthCurve[0x20]; // 0x01F0 (Size: 0x20, Type: SoftObjectProperty)
    void* SoftAimMagnetStrengthCurveObj; // 0x0210 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ApplyAimMagnetDuringRunaway[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    std::uint8_t AimMagnetDuringRunawayOverridePolicy[0x28]; // 0x0240 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableRunawayGuardDelay[0x28]; // 0x0268 (Size: 0x28, Type: StructProperty)
    std::uint8_t RunawayGuardDelay[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t TriggerRunawayIfNoShootOrReload[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AcceptedNoShootOrReloadTimeSeconds[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PolicyRunawayTriggerAnglePitch[0x28]; // 0x0308 (Size: 0x28, Type: StructProperty)
    std::uint8_t PolicyRunawayStopAnglePitch[0x28]; // 0x0330 (Size: 0x28, Type: StructProperty)
    std::uint8_t PolicyRunawayTriggerAngleYaw[0x28]; // 0x0358 (Size: 0x28, Type: StructProperty)
    std::uint8_t PolicyRunawayStopAngleYaw[0x28]; // 0x0380 (Size: 0x28, Type: StructProperty)
    std::uint8_t TriggerRunawayPolicyIfReloading[0x28]; // 0x03A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SuppressRunawayDuringSlide[0x28]; // 0x03D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RunawayAimMagnetStrengthCurve[0x20]; // 0x03F8 (Size: 0x20, Type: SoftObjectProperty)
    void* RunawayMagnetStrengthCurveObj; // 0x0418 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDisableADSOnEmptyAmmo; // 0x0420 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0421
    std::uint8_t FireOnlyAtTarget[0x28]; // 0x0428 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinAngleToTargetToFire[0x28]; // 0x0450 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverridePitch[0x28]; // 0x0478 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchOverrideSmoothingSpeed[0x28]; // 0x04A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetOffsetFromActorLocation[0x18]; // 0x04C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t EnableNoSprintCloseRange[0x28]; // 0x04E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t NoSprintCloseRangeCm[0x28]; // 0x0508 (Size: 0x28, Type: StructProperty)
    std::uint8_t NoSprintCloseRangeHoldSeconds[0x1]; // 0x0530 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatGuards, EnableActionGuards) == 0, "Offset mismatch for FLACombatGuards::EnableActionGuards");
static_assert(offsetof(FLACombatGuards, ApplyRulesBasedShooting) == 40, "Offset mismatch for FLACombatGuards::ApplyRulesBasedShooting");
static_assert(offsetof(FLACombatGuards, RulesBasedShootingPitch) == 80, "Offset mismatch for FLACombatGuards::RulesBasedShootingPitch");
static_assert(offsetof(FLACombatGuards, RulesBasedShootingYaw) == 120, "Offset mismatch for FLACombatGuards::RulesBasedShootingYaw");
static_assert(offsetof(FLACombatGuards, ApplySoftAimMagnetToTarget) == 160, "Offset mismatch for FLACombatGuards::ApplySoftAimMagnetToTarget");
static_assert(offsetof(FLACombatGuards, ApplySoftAimMagnetWhileReloading) == 200, "Offset mismatch for FLACombatGuards::ApplySoftAimMagnetWhileReloading");
static_assert(offsetof(FLACombatGuards, SoftAimMagnetForce) == 240, "Offset mismatch for FLACombatGuards::SoftAimMagnetForce");
static_assert(offsetof(FLACombatGuards, SoftAimStrengthMultiplier) == 280, "Offset mismatch for FLACombatGuards::SoftAimStrengthMultiplier");
static_assert(offsetof(FLACombatGuards, SoftAimMagnetAxisScales) == 320, "Offset mismatch for FLACombatGuards::SoftAimMagnetAxisScales");
static_assert(offsetof(FLACombatGuards, SoftAimMagnetOverrideYawPolicy) == 336, "Offset mismatch for FLACombatGuards::SoftAimMagnetOverrideYawPolicy");
static_assert(offsetof(FLACombatGuards, SoftAimMagnetOverridePitchPolicy) == 376, "Offset mismatch for FLACombatGuards::SoftAimMagnetOverridePitchPolicy");
static_assert(offsetof(FLACombatGuards, SoftAimMagnetMaxPitchCorrection) == 416, "Offset mismatch for FLACombatGuards::SoftAimMagnetMaxPitchCorrection");
static_assert(offsetof(FLACombatGuards, SoftAimMagnetMaxYawCorrection) == 456, "Offset mismatch for FLACombatGuards::SoftAimMagnetMaxYawCorrection");
static_assert(offsetof(FLACombatGuards, SoftAimMagnetStrengthCurve) == 496, "Offset mismatch for FLACombatGuards::SoftAimMagnetStrengthCurve");
static_assert(offsetof(FLACombatGuards, SoftAimMagnetStrengthCurveObj) == 528, "Offset mismatch for FLACombatGuards::SoftAimMagnetStrengthCurveObj");
static_assert(offsetof(FLACombatGuards, ApplyAimMagnetDuringRunaway) == 536, "Offset mismatch for FLACombatGuards::ApplyAimMagnetDuringRunaway");
static_assert(offsetof(FLACombatGuards, AimMagnetDuringRunawayOverridePolicy) == 576, "Offset mismatch for FLACombatGuards::AimMagnetDuringRunawayOverridePolicy");
static_assert(offsetof(FLACombatGuards, EnableRunawayGuardDelay) == 616, "Offset mismatch for FLACombatGuards::EnableRunawayGuardDelay");
static_assert(offsetof(FLACombatGuards, RunawayGuardDelay) == 656, "Offset mismatch for FLACombatGuards::RunawayGuardDelay");
static_assert(offsetof(FLACombatGuards, TriggerRunawayIfNoShootOrReload) == 696, "Offset mismatch for FLACombatGuards::TriggerRunawayIfNoShootOrReload");
static_assert(offsetof(FLACombatGuards, AcceptedNoShootOrReloadTimeSeconds) == 736, "Offset mismatch for FLACombatGuards::AcceptedNoShootOrReloadTimeSeconds");
static_assert(offsetof(FLACombatGuards, PolicyRunawayTriggerAnglePitch) == 776, "Offset mismatch for FLACombatGuards::PolicyRunawayTriggerAnglePitch");
static_assert(offsetof(FLACombatGuards, PolicyRunawayStopAnglePitch) == 816, "Offset mismatch for FLACombatGuards::PolicyRunawayStopAnglePitch");
static_assert(offsetof(FLACombatGuards, PolicyRunawayTriggerAngleYaw) == 856, "Offset mismatch for FLACombatGuards::PolicyRunawayTriggerAngleYaw");
static_assert(offsetof(FLACombatGuards, PolicyRunawayStopAngleYaw) == 896, "Offset mismatch for FLACombatGuards::PolicyRunawayStopAngleYaw");
static_assert(offsetof(FLACombatGuards, TriggerRunawayPolicyIfReloading) == 936, "Offset mismatch for FLACombatGuards::TriggerRunawayPolicyIfReloading");
static_assert(offsetof(FLACombatGuards, SuppressRunawayDuringSlide) == 976, "Offset mismatch for FLACombatGuards::SuppressRunawayDuringSlide");
static_assert(offsetof(FLACombatGuards, RunawayAimMagnetStrengthCurve) == 1016, "Offset mismatch for FLACombatGuards::RunawayAimMagnetStrengthCurve");
static_assert(offsetof(FLACombatGuards, RunawayMagnetStrengthCurveObj) == 1048, "Offset mismatch for FLACombatGuards::RunawayMagnetStrengthCurveObj");
static_assert(offsetof(FLACombatGuards, bDisableADSOnEmptyAmmo) == 1056, "Offset mismatch for FLACombatGuards::bDisableADSOnEmptyAmmo");
static_assert(offsetof(FLACombatGuards, FireOnlyAtTarget) == 1064, "Offset mismatch for FLACombatGuards::FireOnlyAtTarget");
static_assert(offsetof(FLACombatGuards, MinAngleToTargetToFire) == 1104, "Offset mismatch for FLACombatGuards::MinAngleToTargetToFire");
static_assert(offsetof(FLACombatGuards, OverridePitch) == 1144, "Offset mismatch for FLACombatGuards::OverridePitch");
static_assert(offsetof(FLACombatGuards, PitchOverrideSmoothingSpeed) == 1184, "Offset mismatch for FLACombatGuards::PitchOverrideSmoothingSpeed");
static_assert(offsetof(FLACombatGuards, TargetOffsetFromActorLocation) == 1224, "Offset mismatch for FLACombatGuards::TargetOffsetFromActorLocation");
static_assert(offsetof(FLACombatGuards, EnableNoSprintCloseRange) == 1248, "Offset mismatch for FLACombatGuards::EnableNoSprintCloseRange");
static_assert(offsetof(FLACombatGuards, NoSprintCloseRangeCm) == 1288, "Offset mismatch for FLACombatGuards::NoSprintCloseRangeCm");
static_assert(offsetof(FLACombatGuards, NoSprintCloseRangeHoldSeconds) == 1328, "Offset mismatch for FLACombatGuards::NoSprintCloseRangeHoldSeconds");

// /Script/LACombatInferenceRuntime.LACombatHitGate
// Kind: ScriptStruct; super: none
struct FLACombatHitGate
{
public:
    std::uint8_t EnableHitGate[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t HitCooldownSeconds[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t HitCooldownJitterSeconds[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t MissDeflectionMagnitudeCm[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableWeaponSpreadDeflection[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t WeaponSpreadDeflectionMultiplier[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MissTransitionSmoothingSec[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t VelocityDeadbandCmPerSec[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableContinuousReevaluation[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlipHysteresisSeconds[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostHitFireSuppressSeconds[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatHitGate, EnableHitGate) == 0, "Offset mismatch for FLACombatHitGate::EnableHitGate");
static_assert(offsetof(FLACombatHitGate, HitCooldownSeconds) == 40, "Offset mismatch for FLACombatHitGate::HitCooldownSeconds");
static_assert(offsetof(FLACombatHitGate, HitCooldownJitterSeconds) == 80, "Offset mismatch for FLACombatHitGate::HitCooldownJitterSeconds");
static_assert(offsetof(FLACombatHitGate, MissDeflectionMagnitudeCm) == 120, "Offset mismatch for FLACombatHitGate::MissDeflectionMagnitudeCm");
static_assert(offsetof(FLACombatHitGate, EnableWeaponSpreadDeflection) == 160, "Offset mismatch for FLACombatHitGate::EnableWeaponSpreadDeflection");
static_assert(offsetof(FLACombatHitGate, WeaponSpreadDeflectionMultiplier) == 200, "Offset mismatch for FLACombatHitGate::WeaponSpreadDeflectionMultiplier");
static_assert(offsetof(FLACombatHitGate, MissTransitionSmoothingSec) == 240, "Offset mismatch for FLACombatHitGate::MissTransitionSmoothingSec");
static_assert(offsetof(FLACombatHitGate, VelocityDeadbandCmPerSec) == 280, "Offset mismatch for FLACombatHitGate::VelocityDeadbandCmPerSec");
static_assert(offsetof(FLACombatHitGate, EnableContinuousReevaluation) == 320, "Offset mismatch for FLACombatHitGate::EnableContinuousReevaluation");
static_assert(offsetof(FLACombatHitGate, FlipHysteresisSeconds) == 360, "Offset mismatch for FLACombatHitGate::FlipHysteresisSeconds");
static_assert(offsetof(FLACombatHitGate, PostHitFireSuppressSeconds) == 400, "Offset mismatch for FLACombatHitGate::PostHitFireSuppressSeconds");

// /Script/LACombatInferenceRuntime.LACombatJumpActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatJumpActionOptions
{
public:
    std::uint8_t bAddJumpAction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddJumpDiscreteAction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedJumpAction; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t EncodingSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatJumpActionOptions, bAddJumpAction) == 0, "Offset mismatch for FLACombatJumpActionOptions::bAddJumpAction");
static_assert(offsetof(FLACombatJumpActionOptions, bAddJumpDiscreteAction) == 1, "Offset mismatch for FLACombatJumpActionOptions::bAddJumpDiscreteAction");
static_assert(offsetof(FLACombatJumpActionOptions, bAddEncodedJumpAction) == 2, "Offset mismatch for FLACombatJumpActionOptions::bAddEncodedJumpAction");
static_assert(offsetof(FLACombatJumpActionOptions, EncodingSize) == 4, "Offset mismatch for FLACombatJumpActionOptions::EncodingSize");
static_assert(offsetof(FLACombatJumpActionOptions, EncodingDepth) == 8, "Offset mismatch for FLACombatJumpActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatJumpActionOptions, EncodingActivation) == 12, "Offset mismatch for FLACombatJumpActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LACombatJumpScales
// Kind: ScriptStruct; super: none
struct FLACombatJumpScales
{
public:
    float JumpActionScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float JumpActionBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatJumpScales, JumpActionScale) == 0, "Offset mismatch for FLACombatJumpScales::JumpActionScale");
static_assert(offsetof(FLACombatJumpScales, JumpActionBias) == 4, "Offset mismatch for FLACombatJumpScales::JumpActionBias");

// /Script/LACombatInferenceRuntime.LACombatLethalityProfile
// Kind: ScriptStruct; super: none
struct FLACombatLethalityProfile
{
public:
    std::uint8_t HitGate[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatLethalityProfile, HitGate) == 0, "Offset mismatch for FLACombatLethalityProfile::HitGate");

// /Script/LACombatInferenceRuntime.LACombatLethalityWeaponCategory
// Kind: ScriptStruct; super: none
struct FLACombatLethalityWeaponCategory
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Defaults[0x220]; // 0x0020 (Size: 0x220, Type: StructProperty)
    TArray<void*> Specializations; // 0x0240 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLACombatLethalityWeaponCategory, Tags) == 0, "Offset mismatch for FLACombatLethalityWeaponCategory::Tags");
static_assert(offsetof(FLACombatLethalityWeaponCategory, Defaults) == 32, "Offset mismatch for FLACombatLethalityWeaponCategory::Defaults");
static_assert(offsetof(FLACombatLethalityWeaponCategory, Specializations) == 576, "Offset mismatch for FLACombatLethalityWeaponCategory::Specializations");

// /Script/LACombatInferenceRuntime.LACombatLethalityWeaponSpecialization
// Kind: ScriptStruct; super: none
struct FLACombatLethalityWeaponSpecialization
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Override[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatLethalityWeaponSpecialization, Tags) == 0, "Offset mismatch for FLACombatLethalityWeaponSpecialization::Tags");
static_assert(offsetof(FLACombatLethalityWeaponSpecialization, Override) == 32, "Offset mismatch for FLACombatLethalityWeaponSpecialization::Override");

// /Script/LACombatInferenceRuntime.LACombatMovementScales
// Kind: ScriptStruct; super: none
struct FLACombatMovementScales
{
public:
    float MovementXActionScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MovementXActionBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MovementYActionScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MovementYActionBias; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatMovementScales, MovementXActionScale) == 0, "Offset mismatch for FLACombatMovementScales::MovementXActionScale");
static_assert(offsetof(FLACombatMovementScales, MovementXActionBias) == 4, "Offset mismatch for FLACombatMovementScales::MovementXActionBias");
static_assert(offsetof(FLACombatMovementScales, MovementYActionScale) == 8, "Offset mismatch for FLACombatMovementScales::MovementYActionScale");
static_assert(offsetof(FLACombatMovementScales, MovementYActionBias) == 12, "Offset mismatch for FLACombatMovementScales::MovementYActionBias");

// /Script/LACombatInferenceRuntime.LACombatNamedDiscreteExclusiveData
// Kind: ScriptStruct; super: LACombatElementDataBase
struct FLACombatNamedDiscreteExclusiveData
{
public:
    std::uint8_t bActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLACombatNamedDiscreteExclusiveData, bActive) == 0, "Offset mismatch for FLACombatNamedDiscreteExclusiveData::bActive");

// /Script/LACombatInferenceRuntime.LACombatNamedDiscreteInclusiveData
// Kind: ScriptStruct; super: LACombatElementDataBase
struct FLACombatNamedDiscreteInclusiveData
{
public:
    std::uint8_t bActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLACombatNamedDiscreteInclusiveData, bActive) == 0, "Offset mismatch for FLACombatNamedDiscreteInclusiveData::bActive");

// /Script/LACombatInferenceRuntime.LACombatNormalizationData
// Kind: ScriptStruct; super: LACombatElementDataBase
struct FLACombatNormalizationData
{
public:
    std::uint8_t Pad_0000[0x1]; // 0x0000
    std::uint8_t Normalization; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0002
    TArray<void*> Scales; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Offsets; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLACombatNormalizationData, Normalization) == 1, "Offset mismatch for FLACombatNormalizationData::Normalization");
static_assert(offsetof(FLACombatNormalizationData, Scales) == 8, "Offset mismatch for FLACombatNormalizationData::Scales");
static_assert(offsetof(FLACombatNormalizationData, Offsets) == 24, "Offset mismatch for FLACombatNormalizationData::Offsets");

// /Script/LACombatInferenceRuntime.LACombatObservationOptions
// Kind: ScriptStruct; super: none
struct FLACombatObservationOptions
{
public:
    std::uint8_t Self[0x78]; // 0x0000 (Size: 0x78, Type: StructProperty)
    std::uint8_t Weapon[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    std::uint8_t Target[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatObservationOptions, Self) == 0, "Offset mismatch for FLACombatObservationOptions::Self");
static_assert(offsetof(FLACombatObservationOptions, Weapon) == 120, "Offset mismatch for FLACombatObservationOptions::Weapon");
static_assert(offsetof(FLACombatObservationOptions, Target) == 128, "Offset mismatch for FLACombatObservationOptions::Target");

// /Script/LACombatInferenceRuntime.LACombatObservationScales
// Kind: ScriptStruct; super: none
struct FLACombatObservationScales
{
public:
    std::uint8_t TargetLocation[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t TargetVelocity[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    std::uint8_t TargetDistance[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetYaw[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetPitch[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelfPitch[0x8]; // 0x00B8 (Size: 0x8, Type: StructProperty)
    std::uint8_t WeaponAmmo[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatObservationScales, TargetLocation) == 0, "Offset mismatch for FLACombatObservationScales::TargetLocation");
static_assert(offsetof(FLACombatObservationScales, TargetVelocity) == 56, "Offset mismatch for FLACombatObservationScales::TargetVelocity");
static_assert(offsetof(FLACombatObservationScales, TargetDistance) == 112, "Offset mismatch for FLACombatObservationScales::TargetDistance");
static_assert(offsetof(FLACombatObservationScales, TargetYaw) == 128, "Offset mismatch for FLACombatObservationScales::TargetYaw");
static_assert(offsetof(FLACombatObservationScales, TargetPitch) == 160, "Offset mismatch for FLACombatObservationScales::TargetPitch");
static_assert(offsetof(FLACombatObservationScales, SelfPitch) == 184, "Offset mismatch for FLACombatObservationScales::SelfPitch");
static_assert(offsetof(FLACombatObservationScales, WeaponAmmo) == 192, "Offset mismatch for FLACombatObservationScales::WeaponAmmo");

// /Script/LACombatInferenceRuntime.LACombatObservationsSettings
// Kind: ScriptStruct; super: none
struct FLACombatObservationsSettings
{
public:
    std::int32_t SelfPersonalityNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SelfStyleNum; // 0x0004 (Size: 0x4, Type: IntProperty)
    TArray<void*> XYDiscreteActionsBins; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SelfSemanticMapSize[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t SelfSemanticMapCellSize[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelfSemanticMapOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::int32_t SelfRaycastsNum; // 0x0058 (Size: 0x4, Type: IntProperty)
    float SelfRaycastsDistance; // 0x005C (Size: 0x4, Type: FloatProperty)
    float SelfRaycastHalfFOV; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SelfRaycastCollisionChannel; // 0x0064 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0065
    float LOSFOVHalf; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LOSCollisionChannel; // 0x006C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    std::uint8_t BotCameraOffset[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatObservationsSettings, SelfPersonalityNum) == 0, "Offset mismatch for FLACombatObservationsSettings::SelfPersonalityNum");
static_assert(offsetof(FLACombatObservationsSettings, SelfStyleNum) == 4, "Offset mismatch for FLACombatObservationsSettings::SelfStyleNum");
static_assert(offsetof(FLACombatObservationsSettings, XYDiscreteActionsBins) == 8, "Offset mismatch for FLACombatObservationsSettings::XYDiscreteActionsBins");
static_assert(offsetof(FLACombatObservationsSettings, SelfSemanticMapSize) == 24, "Offset mismatch for FLACombatObservationsSettings::SelfSemanticMapSize");
static_assert(offsetof(FLACombatObservationsSettings, SelfSemanticMapCellSize) == 40, "Offset mismatch for FLACombatObservationsSettings::SelfSemanticMapCellSize");
static_assert(offsetof(FLACombatObservationsSettings, SelfSemanticMapOffset) == 64, "Offset mismatch for FLACombatObservationsSettings::SelfSemanticMapOffset");
static_assert(offsetof(FLACombatObservationsSettings, SelfRaycastsNum) == 88, "Offset mismatch for FLACombatObservationsSettings::SelfRaycastsNum");
static_assert(offsetof(FLACombatObservationsSettings, SelfRaycastsDistance) == 92, "Offset mismatch for FLACombatObservationsSettings::SelfRaycastsDistance");
static_assert(offsetof(FLACombatObservationsSettings, SelfRaycastHalfFOV) == 96, "Offset mismatch for FLACombatObservationsSettings::SelfRaycastHalfFOV");
static_assert(offsetof(FLACombatObservationsSettings, SelfRaycastCollisionChannel) == 100, "Offset mismatch for FLACombatObservationsSettings::SelfRaycastCollisionChannel");
static_assert(offsetof(FLACombatObservationsSettings, LOSFOVHalf) == 104, "Offset mismatch for FLACombatObservationsSettings::LOSFOVHalf");
static_assert(offsetof(FLACombatObservationsSettings, LOSCollisionChannel) == 108, "Offset mismatch for FLACombatObservationsSettings::LOSCollisionChannel");
static_assert(offsetof(FLACombatObservationsSettings, BotCameraOffset) == 112, "Offset mismatch for FLACombatObservationsSettings::BotCameraOffset");

// /Script/LACombatInferenceRuntime.LACombatPitchYawActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatPitchYawActionOptions
{
public:
    std::uint8_t bAddPitchAction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddYawAction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedPitchYawActions; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddCumulativePitchAction; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddCumulativeYawAction; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedCumulativePitchYawActions; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddRelativeDeltaPitchAction; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddRelativeDeltaYawAction; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedRelativeDeltaPitchYawActions; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddPitchAngularVelocityAction; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddYawAngularVelocityAction; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedAngularVelocityActions; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::int32_t EncodingSize; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatPitchYawActionOptions, bAddPitchAction) == 0, "Offset mismatch for FLACombatPitchYawActionOptions::bAddPitchAction");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddYawAction) == 1, "Offset mismatch for FLACombatPitchYawActionOptions::bAddYawAction");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddEncodedPitchYawActions) == 2, "Offset mismatch for FLACombatPitchYawActionOptions::bAddEncodedPitchYawActions");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddCumulativePitchAction) == 3, "Offset mismatch for FLACombatPitchYawActionOptions::bAddCumulativePitchAction");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddCumulativeYawAction) == 4, "Offset mismatch for FLACombatPitchYawActionOptions::bAddCumulativeYawAction");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddEncodedCumulativePitchYawActions) == 5, "Offset mismatch for FLACombatPitchYawActionOptions::bAddEncodedCumulativePitchYawActions");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddRelativeDeltaPitchAction) == 6, "Offset mismatch for FLACombatPitchYawActionOptions::bAddRelativeDeltaPitchAction");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddRelativeDeltaYawAction) == 7, "Offset mismatch for FLACombatPitchYawActionOptions::bAddRelativeDeltaYawAction");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddEncodedRelativeDeltaPitchYawActions) == 8, "Offset mismatch for FLACombatPitchYawActionOptions::bAddEncodedRelativeDeltaPitchYawActions");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddPitchAngularVelocityAction) == 9, "Offset mismatch for FLACombatPitchYawActionOptions::bAddPitchAngularVelocityAction");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddYawAngularVelocityAction) == 10, "Offset mismatch for FLACombatPitchYawActionOptions::bAddYawAngularVelocityAction");
static_assert(offsetof(FLACombatPitchYawActionOptions, bAddEncodedAngularVelocityActions) == 11, "Offset mismatch for FLACombatPitchYawActionOptions::bAddEncodedAngularVelocityActions");
static_assert(offsetof(FLACombatPitchYawActionOptions, EncodingSize) == 12, "Offset mismatch for FLACombatPitchYawActionOptions::EncodingSize");
static_assert(offsetof(FLACombatPitchYawActionOptions, EncodingDepth) == 16, "Offset mismatch for FLACombatPitchYawActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatPitchYawActionOptions, EncodingActivation) == 20, "Offset mismatch for FLACombatPitchYawActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LACombatRawActionStep
// Kind: ScriptStruct; super: none
struct FLACombatRawActionStep
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LACombatInferenceRuntime.LACombatReloadActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatReloadActionOptions
{
public:
    std::uint8_t bAddReloadAction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddReloadDiscreteAction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedReloadDiscreteAction; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t EncodingSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatReloadActionOptions, bAddReloadAction) == 0, "Offset mismatch for FLACombatReloadActionOptions::bAddReloadAction");
static_assert(offsetof(FLACombatReloadActionOptions, bAddReloadDiscreteAction) == 1, "Offset mismatch for FLACombatReloadActionOptions::bAddReloadDiscreteAction");
static_assert(offsetof(FLACombatReloadActionOptions, bAddEncodedReloadDiscreteAction) == 2, "Offset mismatch for FLACombatReloadActionOptions::bAddEncodedReloadDiscreteAction");
static_assert(offsetof(FLACombatReloadActionOptions, EncodingSize) == 4, "Offset mismatch for FLACombatReloadActionOptions::EncodingSize");
static_assert(offsetof(FLACombatReloadActionOptions, EncodingDepth) == 8, "Offset mismatch for FLACombatReloadActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatReloadActionOptions, EncodingActivation) == 12, "Offset mismatch for FLACombatReloadActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LACombatReloadScales
// Kind: ScriptStruct; super: none
struct FLACombatReloadScales
{
public:
    float ReloadActionScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ReloadActionBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatReloadScales, ReloadActionScale) == 0, "Offset mismatch for FLACombatReloadScales::ReloadActionScale");
static_assert(offsetof(FLACombatReloadScales, ReloadActionBias) == 4, "Offset mismatch for FLACombatReloadScales::ReloadActionBias");

// /Script/LACombatInferenceRuntime.LACombatRotationScales
// Kind: ScriptStruct; super: none
struct FLACombatRotationScales
{
public:
    float PitchActionScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float PitchActionBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float YawActionScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float YawActionBias; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatRotationScales, PitchActionScale) == 0, "Offset mismatch for FLACombatRotationScales::PitchActionScale");
static_assert(offsetof(FLACombatRotationScales, PitchActionBias) == 4, "Offset mismatch for FLACombatRotationScales::PitchActionBias");
static_assert(offsetof(FLACombatRotationScales, YawActionScale) == 8, "Offset mismatch for FLACombatRotationScales::YawActionScale");
static_assert(offsetof(FLACombatRotationScales, YawActionBias) == 12, "Offset mismatch for FLACombatRotationScales::YawActionBias");

// /Script/LACombatInferenceRuntime.LACombatSelfAbsolutePitchScales
// Kind: ScriptStruct; super: none
struct FLACombatSelfAbsolutePitchScales
{
public:
    float SelfAbsolutePitchScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SelfAbsolutePitchBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatSelfAbsolutePitchScales, SelfAbsolutePitchScale) == 0, "Offset mismatch for FLACombatSelfAbsolutePitchScales::SelfAbsolutePitchScale");
static_assert(offsetof(FLACombatSelfAbsolutePitchScales, SelfAbsolutePitchBias) == 4, "Offset mismatch for FLACombatSelfAbsolutePitchScales::SelfAbsolutePitchBias");

// /Script/LACombatInferenceRuntime.LACombatSelfObservationOptions
// Kind: ScriptStruct; super: none
struct FLACombatSelfObservationOptions
{
public:
    std::uint8_t bAddSelfStyleObservation; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t SelfStyleNum; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAddSelfCrouchObservation; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddSelfSprintObservation; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddSelfJumpObservation; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddSelfSlideObservation; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddSelfAbsolutePitchObservation; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddSelfSemanticMap; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000E
    std::uint8_t SemanticMapSize[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t SemanticMapCellSize[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t SemanticMapOffset[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAddSelfHealthObservation; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddSelfRaycastsObservation; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0052
    std::int32_t RaycastsNum; // 0x0054 (Size: 0x4, Type: IntProperty)
    float RaycastsDistance; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float RaycastHalfFOV; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t RaycastCollisionChannel; // 0x0060 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLACombatSelfObservationOptions, bAddSelfStyleObservation) == 0, "Offset mismatch for FLACombatSelfObservationOptions::bAddSelfStyleObservation");
static_assert(offsetof(FLACombatSelfObservationOptions, SelfStyleNum) == 4, "Offset mismatch for FLACombatSelfObservationOptions::SelfStyleNum");
static_assert(offsetof(FLACombatSelfObservationOptions, bAddSelfCrouchObservation) == 8, "Offset mismatch for FLACombatSelfObservationOptions::bAddSelfCrouchObservation");
static_assert(offsetof(FLACombatSelfObservationOptions, bAddSelfSprintObservation) == 9, "Offset mismatch for FLACombatSelfObservationOptions::bAddSelfSprintObservation");
static_assert(offsetof(FLACombatSelfObservationOptions, bAddSelfJumpObservation) == 10, "Offset mismatch for FLACombatSelfObservationOptions::bAddSelfJumpObservation");
static_assert(offsetof(FLACombatSelfObservationOptions, bAddSelfSlideObservation) == 11, "Offset mismatch for FLACombatSelfObservationOptions::bAddSelfSlideObservation");
static_assert(offsetof(FLACombatSelfObservationOptions, bAddSelfAbsolutePitchObservation) == 12, "Offset mismatch for FLACombatSelfObservationOptions::bAddSelfAbsolutePitchObservation");
static_assert(offsetof(FLACombatSelfObservationOptions, bAddSelfSemanticMap) == 13, "Offset mismatch for FLACombatSelfObservationOptions::bAddSelfSemanticMap");
static_assert(offsetof(FLACombatSelfObservationOptions, SemanticMapSize) == 16, "Offset mismatch for FLACombatSelfObservationOptions::SemanticMapSize");
static_assert(offsetof(FLACombatSelfObservationOptions, SemanticMapCellSize) == 32, "Offset mismatch for FLACombatSelfObservationOptions::SemanticMapCellSize");
static_assert(offsetof(FLACombatSelfObservationOptions, SemanticMapOffset) == 56, "Offset mismatch for FLACombatSelfObservationOptions::SemanticMapOffset");
static_assert(offsetof(FLACombatSelfObservationOptions, bAddSelfHealthObservation) == 80, "Offset mismatch for FLACombatSelfObservationOptions::bAddSelfHealthObservation");
static_assert(offsetof(FLACombatSelfObservationOptions, bAddSelfRaycastsObservation) == 81, "Offset mismatch for FLACombatSelfObservationOptions::bAddSelfRaycastsObservation");
static_assert(offsetof(FLACombatSelfObservationOptions, RaycastsNum) == 84, "Offset mismatch for FLACombatSelfObservationOptions::RaycastsNum");
static_assert(offsetof(FLACombatSelfObservationOptions, RaycastsDistance) == 88, "Offset mismatch for FLACombatSelfObservationOptions::RaycastsDistance");
static_assert(offsetof(FLACombatSelfObservationOptions, RaycastHalfFOV) == 92, "Offset mismatch for FLACombatSelfObservationOptions::RaycastHalfFOV");
static_assert(offsetof(FLACombatSelfObservationOptions, RaycastCollisionChannel) == 96, "Offset mismatch for FLACombatSelfObservationOptions::RaycastCollisionChannel");

// /Script/LACombatInferenceRuntime.LACombatSigmoidThresholds
// Kind: ScriptStruct; super: none
struct FLACombatSigmoidThresholds
{
public:
    float JumpSigmoidThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FireSigmoidThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FireSecondarySigmoidThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CrouchSigmoidThreshold; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TacticalSprintSigmoidThreshold; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SlideSigmoidThreshold; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float AimDownSightSigmoidThreshold; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ReloadSigmoidThreshold; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatSigmoidThresholds, JumpSigmoidThreshold) == 0, "Offset mismatch for FLACombatSigmoidThresholds::JumpSigmoidThreshold");
static_assert(offsetof(FLACombatSigmoidThresholds, FireSigmoidThreshold) == 4, "Offset mismatch for FLACombatSigmoidThresholds::FireSigmoidThreshold");
static_assert(offsetof(FLACombatSigmoidThresholds, FireSecondarySigmoidThreshold) == 8, "Offset mismatch for FLACombatSigmoidThresholds::FireSecondarySigmoidThreshold");
static_assert(offsetof(FLACombatSigmoidThresholds, CrouchSigmoidThreshold) == 12, "Offset mismatch for FLACombatSigmoidThresholds::CrouchSigmoidThreshold");
static_assert(offsetof(FLACombatSigmoidThresholds, TacticalSprintSigmoidThreshold) == 16, "Offset mismatch for FLACombatSigmoidThresholds::TacticalSprintSigmoidThreshold");
static_assert(offsetof(FLACombatSigmoidThresholds, SlideSigmoidThreshold) == 20, "Offset mismatch for FLACombatSigmoidThresholds::SlideSigmoidThreshold");
static_assert(offsetof(FLACombatSigmoidThresholds, AimDownSightSigmoidThreshold) == 24, "Offset mismatch for FLACombatSigmoidThresholds::AimDownSightSigmoidThreshold");
static_assert(offsetof(FLACombatSigmoidThresholds, ReloadSigmoidThreshold) == 28, "Offset mismatch for FLACombatSigmoidThresholds::ReloadSigmoidThreshold");

// /Script/LACombatInferenceRuntime.LACombatSlideActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatSlideActionOptions
{
public:
    std::uint8_t bAddSlideAction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddSlideDiscreteAction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedSlideDiscreteAction; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t EncodingSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatSlideActionOptions, bAddSlideAction) == 0, "Offset mismatch for FLACombatSlideActionOptions::bAddSlideAction");
static_assert(offsetof(FLACombatSlideActionOptions, bAddSlideDiscreteAction) == 1, "Offset mismatch for FLACombatSlideActionOptions::bAddSlideDiscreteAction");
static_assert(offsetof(FLACombatSlideActionOptions, bAddEncodedSlideDiscreteAction) == 2, "Offset mismatch for FLACombatSlideActionOptions::bAddEncodedSlideDiscreteAction");
static_assert(offsetof(FLACombatSlideActionOptions, EncodingSize) == 4, "Offset mismatch for FLACombatSlideActionOptions::EncodingSize");
static_assert(offsetof(FLACombatSlideActionOptions, EncodingDepth) == 8, "Offset mismatch for FLACombatSlideActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatSlideActionOptions, EncodingActivation) == 12, "Offset mismatch for FLACombatSlideActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LACombatSlideScales
// Kind: ScriptStruct; super: none
struct FLACombatSlideScales
{
public:
    float SlideActionScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SlideActionBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatSlideScales, SlideActionScale) == 0, "Offset mismatch for FLACombatSlideScales::SlideActionScale");
static_assert(offsetof(FLACombatSlideScales, SlideActionBias) == 4, "Offset mismatch for FLACombatSlideScales::SlideActionBias");

// /Script/LACombatInferenceRuntime.LACombatSmootherConfig
// Kind: ScriptStruct; super: none
struct FLACombatSmootherConfig
{
public:
    std::uint8_t EnableSprintStickiness[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableSprintExitRamp[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableSprintOffCooldown[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableCrouchStickiness[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableCrouchCooldown[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableSlideStickiness[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableSlideCooldown[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableMovementStickiness[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableMovementSmoothing[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableYawSmoothing[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintStickinessSeconds[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintStickinessSecondsDeviation[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintExitRampSeconds[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintOffCooldownSeconds[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrouchStickinessSeconds[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrouchStickinessSecondsDeviation[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrouchCooldownSeconds[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlideStickinessSeconds[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlideStickinessSecondsDeviation[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlideCooldownSeconds[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementStickinessSeconds[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementStickinessSecondsDeviation[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementIdleStickinessSeconds[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementIdleStickinessSecondsDeviation[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementSmoothingSpeed[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawSmoothingSpeed[0x1]; // 0x03E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatSmootherConfig, EnableSprintStickiness) == 0, "Offset mismatch for FLACombatSmootherConfig::EnableSprintStickiness");
static_assert(offsetof(FLACombatSmootherConfig, EnableSprintExitRamp) == 40, "Offset mismatch for FLACombatSmootherConfig::EnableSprintExitRamp");
static_assert(offsetof(FLACombatSmootherConfig, EnableSprintOffCooldown) == 80, "Offset mismatch for FLACombatSmootherConfig::EnableSprintOffCooldown");
static_assert(offsetof(FLACombatSmootherConfig, EnableCrouchStickiness) == 120, "Offset mismatch for FLACombatSmootherConfig::EnableCrouchStickiness");
static_assert(offsetof(FLACombatSmootherConfig, EnableCrouchCooldown) == 160, "Offset mismatch for FLACombatSmootherConfig::EnableCrouchCooldown");
static_assert(offsetof(FLACombatSmootherConfig, EnableSlideStickiness) == 200, "Offset mismatch for FLACombatSmootherConfig::EnableSlideStickiness");
static_assert(offsetof(FLACombatSmootherConfig, EnableSlideCooldown) == 240, "Offset mismatch for FLACombatSmootherConfig::EnableSlideCooldown");
static_assert(offsetof(FLACombatSmootherConfig, EnableMovementStickiness) == 280, "Offset mismatch for FLACombatSmootherConfig::EnableMovementStickiness");
static_assert(offsetof(FLACombatSmootherConfig, EnableMovementSmoothing) == 320, "Offset mismatch for FLACombatSmootherConfig::EnableMovementSmoothing");
static_assert(offsetof(FLACombatSmootherConfig, EnableYawSmoothing) == 360, "Offset mismatch for FLACombatSmootherConfig::EnableYawSmoothing");
static_assert(offsetof(FLACombatSmootherConfig, SprintStickinessSeconds) == 400, "Offset mismatch for FLACombatSmootherConfig::SprintStickinessSeconds");
static_assert(offsetof(FLACombatSmootherConfig, SprintStickinessSecondsDeviation) == 440, "Offset mismatch for FLACombatSmootherConfig::SprintStickinessSecondsDeviation");
static_assert(offsetof(FLACombatSmootherConfig, SprintExitRampSeconds) == 480, "Offset mismatch for FLACombatSmootherConfig::SprintExitRampSeconds");
static_assert(offsetof(FLACombatSmootherConfig, SprintOffCooldownSeconds) == 520, "Offset mismatch for FLACombatSmootherConfig::SprintOffCooldownSeconds");
static_assert(offsetof(FLACombatSmootherConfig, CrouchStickinessSeconds) == 560, "Offset mismatch for FLACombatSmootherConfig::CrouchStickinessSeconds");
static_assert(offsetof(FLACombatSmootherConfig, CrouchStickinessSecondsDeviation) == 600, "Offset mismatch for FLACombatSmootherConfig::CrouchStickinessSecondsDeviation");
static_assert(offsetof(FLACombatSmootherConfig, CrouchCooldownSeconds) == 640, "Offset mismatch for FLACombatSmootherConfig::CrouchCooldownSeconds");
static_assert(offsetof(FLACombatSmootherConfig, SlideStickinessSeconds) == 680, "Offset mismatch for FLACombatSmootherConfig::SlideStickinessSeconds");
static_assert(offsetof(FLACombatSmootherConfig, SlideStickinessSecondsDeviation) == 720, "Offset mismatch for FLACombatSmootherConfig::SlideStickinessSecondsDeviation");
static_assert(offsetof(FLACombatSmootherConfig, SlideCooldownSeconds) == 760, "Offset mismatch for FLACombatSmootherConfig::SlideCooldownSeconds");
static_assert(offsetof(FLACombatSmootherConfig, MovementStickinessSeconds) == 800, "Offset mismatch for FLACombatSmootherConfig::MovementStickinessSeconds");
static_assert(offsetof(FLACombatSmootherConfig, MovementStickinessSecondsDeviation) == 840, "Offset mismatch for FLACombatSmootherConfig::MovementStickinessSecondsDeviation");
static_assert(offsetof(FLACombatSmootherConfig, MovementIdleStickinessSeconds) == 880, "Offset mismatch for FLACombatSmootherConfig::MovementIdleStickinessSeconds");
static_assert(offsetof(FLACombatSmootherConfig, MovementIdleStickinessSecondsDeviation) == 920, "Offset mismatch for FLACombatSmootherConfig::MovementIdleStickinessSecondsDeviation");
static_assert(offsetof(FLACombatSmootherConfig, MovementSmoothingSpeed) == 960, "Offset mismatch for FLACombatSmootherConfig::MovementSmoothingSpeed");
static_assert(offsetof(FLACombatSmootherConfig, YawSmoothingSpeed) == 1000, "Offset mismatch for FLACombatSmootherConfig::YawSmoothingSpeed");

// /Script/LACombatInferenceRuntime.LACombatSpeedScales
// Kind: ScriptStruct; super: none
struct FLACombatSpeedScales
{
public:
    float SpeedActionScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SpeedActionBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatSpeedScales, SpeedActionScale) == 0, "Offset mismatch for FLACombatSpeedScales::SpeedActionScale");
static_assert(offsetof(FLACombatSpeedScales, SpeedActionBias) == 4, "Offset mismatch for FLACombatSpeedScales::SpeedActionBias");

// /Script/LACombatInferenceRuntime.LACombatSprintActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatSprintActionOptions
{
public:
    std::uint8_t bAddTacticalSprintAction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTacticalSprintDiscreteAction; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedTacticalSprintAction; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t EncodingSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatSprintActionOptions, bAddTacticalSprintAction) == 0, "Offset mismatch for FLACombatSprintActionOptions::bAddTacticalSprintAction");
static_assert(offsetof(FLACombatSprintActionOptions, bAddTacticalSprintDiscreteAction) == 1, "Offset mismatch for FLACombatSprintActionOptions::bAddTacticalSprintDiscreteAction");
static_assert(offsetof(FLACombatSprintActionOptions, bAddEncodedTacticalSprintAction) == 2, "Offset mismatch for FLACombatSprintActionOptions::bAddEncodedTacticalSprintAction");
static_assert(offsetof(FLACombatSprintActionOptions, EncodingSize) == 4, "Offset mismatch for FLACombatSprintActionOptions::EncodingSize");
static_assert(offsetof(FLACombatSprintActionOptions, EncodingDepth) == 8, "Offset mismatch for FLACombatSprintActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatSprintActionOptions, EncodingActivation) == 12, "Offset mismatch for FLACombatSprintActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LACombatSprintScales
// Kind: ScriptStruct; super: none
struct FLACombatSprintScales
{
public:
    float TacticalSprintActionScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TacticalSprintActionBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatSprintScales, TacticalSprintActionScale) == 0, "Offset mismatch for FLACombatSprintScales::TacticalSprintActionScale");
static_assert(offsetof(FLACombatSprintScales, TacticalSprintActionBias) == 4, "Offset mismatch for FLACombatSprintScales::TacticalSprintActionBias");

// /Script/LACombatInferenceRuntime.LACombatTargetDistanceScales
// Kind: ScriptStruct; super: none
struct FLACombatTargetDistanceScales
{
public:
    float TargetDistanceScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TargetDistanceBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TargetDistanceFromPawnScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TargetDistanceFromPawnBias; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatTargetDistanceScales, TargetDistanceScale) == 0, "Offset mismatch for FLACombatTargetDistanceScales::TargetDistanceScale");
static_assert(offsetof(FLACombatTargetDistanceScales, TargetDistanceBias) == 4, "Offset mismatch for FLACombatTargetDistanceScales::TargetDistanceBias");
static_assert(offsetof(FLACombatTargetDistanceScales, TargetDistanceFromPawnScale) == 8, "Offset mismatch for FLACombatTargetDistanceScales::TargetDistanceFromPawnScale");
static_assert(offsetof(FLACombatTargetDistanceScales, TargetDistanceFromPawnBias) == 12, "Offset mismatch for FLACombatTargetDistanceScales::TargetDistanceFromPawnBias");

// /Script/LACombatInferenceRuntime.LACombatTargetLocationScales
// Kind: ScriptStruct; super: none
struct FLACombatTargetLocationScales
{
public:
    float TargetLocationScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t TargetLocationScales[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetLocationBias[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatTargetLocationScales, TargetLocationScale) == 0, "Offset mismatch for FLACombatTargetLocationScales::TargetLocationScale");
static_assert(offsetof(FLACombatTargetLocationScales, TargetLocationScales) == 8, "Offset mismatch for FLACombatTargetLocationScales::TargetLocationScales");
static_assert(offsetof(FLACombatTargetLocationScales, TargetLocationBias) == 32, "Offset mismatch for FLACombatTargetLocationScales::TargetLocationBias");

// /Script/LACombatInferenceRuntime.LACombatTargetObservationOptions
// Kind: ScriptStruct; super: none
struct FLACombatTargetObservationOptions
{
public:
    std::uint8_t bAddTargetLocationObservation; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetDistanceObservation; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetDistanceFromPawnObservation; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetAbsolutePitchObservation; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetAimOffsetObservation; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetAimOffsetFromPawnObservation; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetAimVectorsFromPawnObservation; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetCrouchObservation; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetSprintObservation; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetJumpObservation; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetSlideObservation; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetVelocityObservation; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddTargetForwardVectorObservation; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddBasicTargetLOS; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000E
    float LOSFOVHalf; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LOSCollisionChannel; // 0x0014 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetLocationObservation) == 0, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetLocationObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetDistanceObservation) == 1, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetDistanceObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetDistanceFromPawnObservation) == 2, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetDistanceFromPawnObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetAbsolutePitchObservation) == 3, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetAbsolutePitchObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetAimOffsetObservation) == 4, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetAimOffsetObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetAimOffsetFromPawnObservation) == 5, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetAimOffsetFromPawnObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetAimVectorsFromPawnObservation) == 6, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetAimVectorsFromPawnObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetCrouchObservation) == 7, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetCrouchObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetSprintObservation) == 8, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetSprintObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetJumpObservation) == 9, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetJumpObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetSlideObservation) == 10, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetSlideObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetVelocityObservation) == 11, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetVelocityObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddTargetForwardVectorObservation) == 12, "Offset mismatch for FLACombatTargetObservationOptions::bAddTargetForwardVectorObservation");
static_assert(offsetof(FLACombatTargetObservationOptions, bAddBasicTargetLOS) == 13, "Offset mismatch for FLACombatTargetObservationOptions::bAddBasicTargetLOS");
static_assert(offsetof(FLACombatTargetObservationOptions, LOSFOVHalf) == 16, "Offset mismatch for FLACombatTargetObservationOptions::LOSFOVHalf");
static_assert(offsetof(FLACombatTargetObservationOptions, LOSCollisionChannel) == 20, "Offset mismatch for FLACombatTargetObservationOptions::LOSCollisionChannel");

// /Script/LACombatInferenceRuntime.LACombatTargetPitchScales
// Kind: ScriptStruct; super: none
struct FLACombatTargetPitchScales
{
public:
    float TargetPitchAimOffsetScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TargetPitchAimOffsetBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TargetPitchAimOffsetFromPawnScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TargetPitchAimOffsetFromPawnBias; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TargetAbsolutePitchScale; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TargetAbsolutePitchBias; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatTargetPitchScales, TargetPitchAimOffsetScale) == 0, "Offset mismatch for FLACombatTargetPitchScales::TargetPitchAimOffsetScale");
static_assert(offsetof(FLACombatTargetPitchScales, TargetPitchAimOffsetBias) == 4, "Offset mismatch for FLACombatTargetPitchScales::TargetPitchAimOffsetBias");
static_assert(offsetof(FLACombatTargetPitchScales, TargetPitchAimOffsetFromPawnScale) == 8, "Offset mismatch for FLACombatTargetPitchScales::TargetPitchAimOffsetFromPawnScale");
static_assert(offsetof(FLACombatTargetPitchScales, TargetPitchAimOffsetFromPawnBias) == 12, "Offset mismatch for FLACombatTargetPitchScales::TargetPitchAimOffsetFromPawnBias");
static_assert(offsetof(FLACombatTargetPitchScales, TargetAbsolutePitchScale) == 16, "Offset mismatch for FLACombatTargetPitchScales::TargetAbsolutePitchScale");
static_assert(offsetof(FLACombatTargetPitchScales, TargetAbsolutePitchBias) == 20, "Offset mismatch for FLACombatTargetPitchScales::TargetAbsolutePitchBias");

// /Script/LACombatInferenceRuntime.LACombatTargetVelocityScales
// Kind: ScriptStruct; super: none
struct FLACombatTargetVelocityScales
{
public:
    float TargetVelocityScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t TargetVelocityScales[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetVelocityBias[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLACombatTargetVelocityScales, TargetVelocityScale) == 0, "Offset mismatch for FLACombatTargetVelocityScales::TargetVelocityScale");
static_assert(offsetof(FLACombatTargetVelocityScales, TargetVelocityScales) == 8, "Offset mismatch for FLACombatTargetVelocityScales::TargetVelocityScales");
static_assert(offsetof(FLACombatTargetVelocityScales, TargetVelocityBias) == 32, "Offset mismatch for FLACombatTargetVelocityScales::TargetVelocityBias");

// /Script/LACombatInferenceRuntime.LACombatTargetYawOffsetScales
// Kind: ScriptStruct; super: none
struct FLACombatTargetYawOffsetScales
{
public:
    float TargetYawSinOffsetScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TargetYawSinOffsetBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TargetYawCosOffsetScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TargetYawCosOffsetBias; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TargetYawSinOffsetFromPawnScale; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TargetYawSinOffsetFromPawnBias; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float TargetYawCosOffsetFromPawnScale; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float TargetYawCosOffsetFromPawnBias; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatTargetYawOffsetScales, TargetYawSinOffsetScale) == 0, "Offset mismatch for FLACombatTargetYawOffsetScales::TargetYawSinOffsetScale");
static_assert(offsetof(FLACombatTargetYawOffsetScales, TargetYawSinOffsetBias) == 4, "Offset mismatch for FLACombatTargetYawOffsetScales::TargetYawSinOffsetBias");
static_assert(offsetof(FLACombatTargetYawOffsetScales, TargetYawCosOffsetScale) == 8, "Offset mismatch for FLACombatTargetYawOffsetScales::TargetYawCosOffsetScale");
static_assert(offsetof(FLACombatTargetYawOffsetScales, TargetYawCosOffsetBias) == 12, "Offset mismatch for FLACombatTargetYawOffsetScales::TargetYawCosOffsetBias");
static_assert(offsetof(FLACombatTargetYawOffsetScales, TargetYawSinOffsetFromPawnScale) == 16, "Offset mismatch for FLACombatTargetYawOffsetScales::TargetYawSinOffsetFromPawnScale");
static_assert(offsetof(FLACombatTargetYawOffsetScales, TargetYawSinOffsetFromPawnBias) == 20, "Offset mismatch for FLACombatTargetYawOffsetScales::TargetYawSinOffsetFromPawnBias");
static_assert(offsetof(FLACombatTargetYawOffsetScales, TargetYawCosOffsetFromPawnScale) == 24, "Offset mismatch for FLACombatTargetYawOffsetScales::TargetYawCosOffsetFromPawnScale");
static_assert(offsetof(FLACombatTargetYawOffsetScales, TargetYawCosOffsetFromPawnBias) == 28, "Offset mismatch for FLACombatTargetYawOffsetScales::TargetYawCosOffsetFromPawnBias");

// /Script/LACombatInferenceRuntime.LACombatWeaponAmmoScales
// Kind: ScriptStruct; super: none
struct FLACombatWeaponAmmoScales
{
public:
    float WeaponAmmoScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float WeaponAmmoBias; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLACombatWeaponAmmoScales, WeaponAmmoScale) == 0, "Offset mismatch for FLACombatWeaponAmmoScales::WeaponAmmoScale");
static_assert(offsetof(FLACombatWeaponAmmoScales, WeaponAmmoBias) == 4, "Offset mismatch for FLACombatWeaponAmmoScales::WeaponAmmoBias");

// /Script/LACombatInferenceRuntime.LACombatWeaponObservationOptions
// Kind: ScriptStruct; super: none
struct FLACombatWeaponObservationOptions
{
public:
    std::uint8_t bAddWeaponFiringObservation; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddWeaponTargetObservation; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddWeaponReloadObservation; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddWeaponAmmoObservation; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddWeaponTypeObservation; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLACombatWeaponObservationOptions, bAddWeaponFiringObservation) == 0, "Offset mismatch for FLACombatWeaponObservationOptions::bAddWeaponFiringObservation");
static_assert(offsetof(FLACombatWeaponObservationOptions, bAddWeaponTargetObservation) == 1, "Offset mismatch for FLACombatWeaponObservationOptions::bAddWeaponTargetObservation");
static_assert(offsetof(FLACombatWeaponObservationOptions, bAddWeaponReloadObservation) == 2, "Offset mismatch for FLACombatWeaponObservationOptions::bAddWeaponReloadObservation");
static_assert(offsetof(FLACombatWeaponObservationOptions, bAddWeaponAmmoObservation) == 3, "Offset mismatch for FLACombatWeaponObservationOptions::bAddWeaponAmmoObservation");
static_assert(offsetof(FLACombatWeaponObservationOptions, bAddWeaponTypeObservation) == 4, "Offset mismatch for FLACombatWeaponObservationOptions::bAddWeaponTypeObservation");

// /Script/LACombatInferenceRuntime.LACombatWeaponState
// Kind: ScriptStruct; super: none
struct FLACombatWeaponState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LACombatInferenceRuntime.LACombatXYActionOptions
// Kind: ScriptStruct; super: none
struct FLACombatXYActionOptions
{
public:
    std::uint8_t bAddXYContinuousActions; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddXYDiscreteActions; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    TArray<void*> XYDiscreteActionsBins; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAddEncodedXAction; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedYAction; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEncodedXYActions; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x001B
    std::int32_t EncodingSize; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t EncodingDepth; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncodingActivation; // 0x0024 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLACombatXYActionOptions, bAddXYContinuousActions) == 0, "Offset mismatch for FLACombatXYActionOptions::bAddXYContinuousActions");
static_assert(offsetof(FLACombatXYActionOptions, bAddXYDiscreteActions) == 1, "Offset mismatch for FLACombatXYActionOptions::bAddXYDiscreteActions");
static_assert(offsetof(FLACombatXYActionOptions, XYDiscreteActionsBins) == 8, "Offset mismatch for FLACombatXYActionOptions::XYDiscreteActionsBins");
static_assert(offsetof(FLACombatXYActionOptions, bAddEncodedXAction) == 24, "Offset mismatch for FLACombatXYActionOptions::bAddEncodedXAction");
static_assert(offsetof(FLACombatXYActionOptions, bAddEncodedYAction) == 25, "Offset mismatch for FLACombatXYActionOptions::bAddEncodedYAction");
static_assert(offsetof(FLACombatXYActionOptions, bAddEncodedXYActions) == 26, "Offset mismatch for FLACombatXYActionOptions::bAddEncodedXYActions");
static_assert(offsetof(FLACombatXYActionOptions, EncodingSize) == 28, "Offset mismatch for FLACombatXYActionOptions::EncodingSize");
static_assert(offsetof(FLACombatXYActionOptions, EncodingDepth) == 32, "Offset mismatch for FLACombatXYActionOptions::EncodingDepth");
static_assert(offsetof(FLACombatXYActionOptions, EncodingActivation) == 36, "Offset mismatch for FLACombatXYActionOptions::EncodingActivation");

// /Script/LACombatInferenceRuntime.LADataTableBoolOverrides
// Kind: ScriptStruct; super: none
struct FLADataTableBoolOverrides
{
public:
    std::uint8_t EnableActionGuards[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableLethalityReducer[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableSprintStickiness[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableMovementStickiness[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableYawSmoothing[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableYawSmoothingV2[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplyRulesBasedShooting[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplySoftAimMagnetToTarget[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplySoftAimMagnetWhileReloading[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetOverrideYawPolicy[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftAimMagnetOverridePitchPolicy[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplyAimMagnetDuringRunaway[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AimMagnetDuringRunawayOverridePolicy[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TriggerRunawayPolicyIfReloading[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableRunawayGuardDelay[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t FireOnlyAtTarget[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverridePitch[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t TriggerRunawayIfNoShootOrReload[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplyLethalityReducerInActionGuards[0x1]; // 0x02D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLADataTableBoolOverrides, EnableActionGuards) == 0, "Offset mismatch for FLADataTableBoolOverrides::EnableActionGuards");
static_assert(offsetof(FLADataTableBoolOverrides, EnableLethalityReducer) == 40, "Offset mismatch for FLADataTableBoolOverrides::EnableLethalityReducer");
static_assert(offsetof(FLADataTableBoolOverrides, EnableSprintStickiness) == 80, "Offset mismatch for FLADataTableBoolOverrides::EnableSprintStickiness");
static_assert(offsetof(FLADataTableBoolOverrides, EnableMovementStickiness) == 120, "Offset mismatch for FLADataTableBoolOverrides::EnableMovementStickiness");
static_assert(offsetof(FLADataTableBoolOverrides, EnableYawSmoothing) == 160, "Offset mismatch for FLADataTableBoolOverrides::EnableYawSmoothing");
static_assert(offsetof(FLADataTableBoolOverrides, EnableYawSmoothingV2) == 200, "Offset mismatch for FLADataTableBoolOverrides::EnableYawSmoothingV2");
static_assert(offsetof(FLADataTableBoolOverrides, ApplyRulesBasedShooting) == 240, "Offset mismatch for FLADataTableBoolOverrides::ApplyRulesBasedShooting");
static_assert(offsetof(FLADataTableBoolOverrides, ApplySoftAimMagnetToTarget) == 280, "Offset mismatch for FLADataTableBoolOverrides::ApplySoftAimMagnetToTarget");
static_assert(offsetof(FLADataTableBoolOverrides, ApplySoftAimMagnetWhileReloading) == 320, "Offset mismatch for FLADataTableBoolOverrides::ApplySoftAimMagnetWhileReloading");
static_assert(offsetof(FLADataTableBoolOverrides, SoftAimMagnetOverrideYawPolicy) == 360, "Offset mismatch for FLADataTableBoolOverrides::SoftAimMagnetOverrideYawPolicy");
static_assert(offsetof(FLADataTableBoolOverrides, SoftAimMagnetOverridePitchPolicy) == 400, "Offset mismatch for FLADataTableBoolOverrides::SoftAimMagnetOverridePitchPolicy");
static_assert(offsetof(FLADataTableBoolOverrides, ApplyAimMagnetDuringRunaway) == 440, "Offset mismatch for FLADataTableBoolOverrides::ApplyAimMagnetDuringRunaway");
static_assert(offsetof(FLADataTableBoolOverrides, AimMagnetDuringRunawayOverridePolicy) == 480, "Offset mismatch for FLADataTableBoolOverrides::AimMagnetDuringRunawayOverridePolicy");
static_assert(offsetof(FLADataTableBoolOverrides, TriggerRunawayPolicyIfReloading) == 520, "Offset mismatch for FLADataTableBoolOverrides::TriggerRunawayPolicyIfReloading");
static_assert(offsetof(FLADataTableBoolOverrides, EnableRunawayGuardDelay) == 560, "Offset mismatch for FLADataTableBoolOverrides::EnableRunawayGuardDelay");
static_assert(offsetof(FLADataTableBoolOverrides, FireOnlyAtTarget) == 600, "Offset mismatch for FLADataTableBoolOverrides::FireOnlyAtTarget");
static_assert(offsetof(FLADataTableBoolOverrides, OverridePitch) == 640, "Offset mismatch for FLADataTableBoolOverrides::OverridePitch");
static_assert(offsetof(FLADataTableBoolOverrides, TriggerRunawayIfNoShootOrReload) == 680, "Offset mismatch for FLADataTableBoolOverrides::TriggerRunawayIfNoShootOrReload");
static_assert(offsetof(FLADataTableBoolOverrides, ApplyLethalityReducerInActionGuards) == 720, "Offset mismatch for FLADataTableBoolOverrides::ApplyLethalityReducerInActionGuards");

// /Script/LACombatInferenceRuntime.LALethalityReducer
// Kind: ScriptStruct; super: none
struct FLALethalityReducer
{
public:
    std::uint8_t bEnableLethalityReducer; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Speed[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpOnHitAmount[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDistance[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDistance[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t DecayAmount[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bDebugDraw; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLALethalityReducer, bEnableLethalityReducer) == 0, "Offset mismatch for FLALethalityReducer::bEnableLethalityReducer");
static_assert(offsetof(FLALethalityReducer, Speed) == 8, "Offset mismatch for FLALethalityReducer::Speed");
static_assert(offsetof(FLALethalityReducer, JumpOnHitAmount) == 48, "Offset mismatch for FLALethalityReducer::JumpOnHitAmount");
static_assert(offsetof(FLALethalityReducer, MinDistance) == 88, "Offset mismatch for FLALethalityReducer::MinDistance");
static_assert(offsetof(FLALethalityReducer, MaxDistance) == 128, "Offset mismatch for FLALethalityReducer::MaxDistance");
static_assert(offsetof(FLALethalityReducer, DecayAmount) == 168, "Offset mismatch for FLALethalityReducer::DecayAmount");
static_assert(offsetof(FLALethalityReducer, bDebugDraw) == 208, "Offset mismatch for FLALethalityReducer::bDebugDraw");

// /Script/LACombatInferenceRuntime.LearningAgentCombatActions
// Kind: ScriptStruct; super: none
struct FLearningAgentCombatActions
{
public:
    float MovementX; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MovementY; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Rotation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bJump; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCrouch; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUncrouch; // 0x0022 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTacticalSprint; // 0x0023 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFirePrimary; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFireSecondary; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSlide; // 0x0026 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimDownSight; // 0x0027 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLearningAgentCombatActions, MovementX) == 0, "Offset mismatch for FLearningAgentCombatActions::MovementX");
static_assert(offsetof(FLearningAgentCombatActions, MovementY) == 4, "Offset mismatch for FLearningAgentCombatActions::MovementY");
static_assert(offsetof(FLearningAgentCombatActions, Rotation) == 8, "Offset mismatch for FLearningAgentCombatActions::Rotation");
static_assert(offsetof(FLearningAgentCombatActions, bJump) == 32, "Offset mismatch for FLearningAgentCombatActions::bJump");
static_assert(offsetof(FLearningAgentCombatActions, bCrouch) == 33, "Offset mismatch for FLearningAgentCombatActions::bCrouch");
static_assert(offsetof(FLearningAgentCombatActions, bUncrouch) == 34, "Offset mismatch for FLearningAgentCombatActions::bUncrouch");
static_assert(offsetof(FLearningAgentCombatActions, bTacticalSprint) == 35, "Offset mismatch for FLearningAgentCombatActions::bTacticalSprint");
static_assert(offsetof(FLearningAgentCombatActions, bFirePrimary) == 36, "Offset mismatch for FLearningAgentCombatActions::bFirePrimary");
static_assert(offsetof(FLearningAgentCombatActions, bFireSecondary) == 37, "Offset mismatch for FLearningAgentCombatActions::bFireSecondary");
static_assert(offsetof(FLearningAgentCombatActions, bSlide) == 38, "Offset mismatch for FLearningAgentCombatActions::bSlide");
static_assert(offsetof(FLearningAgentCombatActions, bAimDownSight) == 39, "Offset mismatch for FLearningAgentCombatActions::bAimDownSight");

// /Script/LACombatInferenceRuntime.FortAthenaAIEvaluator_LearningAgentCombat
// Kind: Class; super: FortAthenaAIEvaluator_BlueprintBase
class UFortAthenaAIEvaluator_LearningAgentCombat
{
public:
    std::uint8_t Pad_0000[0x618]; // 0x0000
    void* CombatLearningAgentManagerClass; // 0x0618 (Size: 0x8, Type: ClassProperty)
    FName CombatTargetKeyName; // 0x0620 (Size: 0x8, Type: NameProperty)
    std::uint8_t CombatTargetMinDistance[0x28]; // 0x0628 (Size: 0x28, Type: StructProperty)
    std::uint8_t CombatTargetDistanceCheckGracePeriod[0x28]; // 0x0650 (Size: 0x28, Type: StructProperty)
    std::uint8_t CombatTargetMinHealth[0x28]; // 0x0678 (Size: 0x28, Type: StructProperty)
    std::uint8_t CombatTargetIdleDetectionTime[0x28]; // 0x06A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CombatTargetIdleDetectionVelocityThreshold[0x28]; // 0x06C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SelfIdleDetectionTime[0x28]; // 0x06F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SelfIdleDetectionVelocityThreshold[0x1]; // 0x0718 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_LearningAgentCombat, CombatLearningAgentManagerClass) == 1560, "Offset mismatch for UFortAthenaAIEvaluator_LearningAgentCombat::CombatLearningAgentManagerClass");
static_assert(offsetof(UFortAthenaAIEvaluator_LearningAgentCombat, CombatTargetKeyName) == 1568, "Offset mismatch for UFortAthenaAIEvaluator_LearningAgentCombat::CombatTargetKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_LearningAgentCombat, CombatTargetMinDistance) == 1576, "Offset mismatch for UFortAthenaAIEvaluator_LearningAgentCombat::CombatTargetMinDistance");
static_assert(offsetof(UFortAthenaAIEvaluator_LearningAgentCombat, CombatTargetDistanceCheckGracePeriod) == 1616, "Offset mismatch for UFortAthenaAIEvaluator_LearningAgentCombat::CombatTargetDistanceCheckGracePeriod");
static_assert(offsetof(UFortAthenaAIEvaluator_LearningAgentCombat, CombatTargetMinHealth) == 1656, "Offset mismatch for UFortAthenaAIEvaluator_LearningAgentCombat::CombatTargetMinHealth");
static_assert(offsetof(UFortAthenaAIEvaluator_LearningAgentCombat, CombatTargetIdleDetectionTime) == 1696, "Offset mismatch for UFortAthenaAIEvaluator_LearningAgentCombat::CombatTargetIdleDetectionTime");
static_assert(offsetof(UFortAthenaAIEvaluator_LearningAgentCombat, CombatTargetIdleDetectionVelocityThreshold) == 1736, "Offset mismatch for UFortAthenaAIEvaluator_LearningAgentCombat::CombatTargetIdleDetectionVelocityThreshold");
static_assert(offsetof(UFortAthenaAIEvaluator_LearningAgentCombat, SelfIdleDetectionTime) == 1776, "Offset mismatch for UFortAthenaAIEvaluator_LearningAgentCombat::SelfIdleDetectionTime");
static_assert(offsetof(UFortAthenaAIEvaluator_LearningAgentCombat, SelfIdleDetectionVelocityThreshold) == 1816, "Offset mismatch for UFortAthenaAIEvaluator_LearningAgentCombat::SelfIdleDetectionVelocityThreshold");

// /Script/LACombatInferenceRuntime.LACInteractorContinuousThin
// Kind: Class; super: LearningAgentsInteractor
class ULACInteractorContinuousThin
{
public:
    std::uint8_t Pad_0000[0x458]; // 0x0000
    std::uint8_t TargetLocationNorm[0x38]; // 0x0458 (Size: 0x38, Type: StructProperty)
    std::uint8_t TargetVelocityNorm[0x38]; // 0x0490 (Size: 0x38, Type: StructProperty)
    std::uint8_t TargetDistanceFromPawnNorm[0xC]; // 0x04C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetPitchAimOffsetFromPawnNorm[0xC]; // 0x04D4 (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetYawSinOffsetFromPawnNorm[0xC]; // 0x04E0 (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetYawCosOffsetFromPawnNorm[0xC]; // 0x04EC (Size: 0xC, Type: StructProperty)
    std::uint8_t bAddSelfPersonalityObservation; // 0x04F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x04F9
    std::int32_t SelfPersonalityNum; // 0x04FC (Size: 0x4, Type: IntProperty)
    TArray<void*> PersonalityWeightingsDataTable; // 0x0500 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseActionQueue; // 0x0510 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0511
    void* ActionQueueClass; // 0x0518 (Size: 0x8, Type: ClassProperty)
    std::int32_t ActionChunkSize; // 0x0520 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0524
    std::uint8_t PitchAngularVelocityActNorm[0x28]; // 0x0528 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawAngularVelocityActNorm[0x28]; // 0x0550 (Size: 0x28, Type: StructProperty)
    std::uint8_t FireSigmoidThreshold[0x28]; // 0x0578 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpSigmoidThreshold[0x28]; // 0x05A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrouchSigmoidThreshold[0x28]; // 0x05C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TacticalSprintSigmoidThreshold[0x28]; // 0x05F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlideSigmoidThreshold[0x28]; // 0x0618 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlideFromCrouchSigmoidThreshold[0x28]; // 0x0640 (Size: 0x28, Type: StructProperty)
    std::uint8_t AimDownSightSigmoidThreshold[0x28]; // 0x0668 (Size: 0x28, Type: StructProperty)
    FString ModelName; // 0x0690 (Size: 0x10, Type: StrProperty)
    std::int32_t MajorVersion; // 0x06A0 (Size: 0x4, Type: IntProperty)
    std::int32_t MinorVersion; // 0x06A4 (Size: 0x4, Type: IntProperty)
    void* ModifierClass; // 0x06A8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bUseRayCastLOS; // 0x06B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x06B1
    float LOSFOVHalf; // 0x06B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LOSCollisionChannel; // 0x06B8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x3]; // 0x06B9
    float MovementDeadzone; // 0x06BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x8]; // 0x06C0
    TMap<void*, void*> AgentContexts; // 0x06C8 (Size: 0x10, Type: MapProperty)
    TArray<void*> PersonalityBuckets; // 0x06D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULACInteractorContinuousThin, TargetLocationNorm) == 1112, "Offset mismatch for ULACInteractorContinuousThin::TargetLocationNorm");
static_assert(offsetof(ULACInteractorContinuousThin, TargetVelocityNorm) == 1168, "Offset mismatch for ULACInteractorContinuousThin::TargetVelocityNorm");
static_assert(offsetof(ULACInteractorContinuousThin, TargetDistanceFromPawnNorm) == 1224, "Offset mismatch for ULACInteractorContinuousThin::TargetDistanceFromPawnNorm");
static_assert(offsetof(ULACInteractorContinuousThin, TargetPitchAimOffsetFromPawnNorm) == 1236, "Offset mismatch for ULACInteractorContinuousThin::TargetPitchAimOffsetFromPawnNorm");
static_assert(offsetof(ULACInteractorContinuousThin, TargetYawSinOffsetFromPawnNorm) == 1248, "Offset mismatch for ULACInteractorContinuousThin::TargetYawSinOffsetFromPawnNorm");
static_assert(offsetof(ULACInteractorContinuousThin, TargetYawCosOffsetFromPawnNorm) == 1260, "Offset mismatch for ULACInteractorContinuousThin::TargetYawCosOffsetFromPawnNorm");
static_assert(offsetof(ULACInteractorContinuousThin, bAddSelfPersonalityObservation) == 1272, "Offset mismatch for ULACInteractorContinuousThin::bAddSelfPersonalityObservation");
static_assert(offsetof(ULACInteractorContinuousThin, SelfPersonalityNum) == 1276, "Offset mismatch for ULACInteractorContinuousThin::SelfPersonalityNum");
static_assert(offsetof(ULACInteractorContinuousThin, PersonalityWeightingsDataTable) == 1280, "Offset mismatch for ULACInteractorContinuousThin::PersonalityWeightingsDataTable");
static_assert(offsetof(ULACInteractorContinuousThin, bUseActionQueue) == 1296, "Offset mismatch for ULACInteractorContinuousThin::bUseActionQueue");
static_assert(offsetof(ULACInteractorContinuousThin, ActionQueueClass) == 1304, "Offset mismatch for ULACInteractorContinuousThin::ActionQueueClass");
static_assert(offsetof(ULACInteractorContinuousThin, ActionChunkSize) == 1312, "Offset mismatch for ULACInteractorContinuousThin::ActionChunkSize");
static_assert(offsetof(ULACInteractorContinuousThin, PitchAngularVelocityActNorm) == 1320, "Offset mismatch for ULACInteractorContinuousThin::PitchAngularVelocityActNorm");
static_assert(offsetof(ULACInteractorContinuousThin, YawAngularVelocityActNorm) == 1360, "Offset mismatch for ULACInteractorContinuousThin::YawAngularVelocityActNorm");
static_assert(offsetof(ULACInteractorContinuousThin, FireSigmoidThreshold) == 1400, "Offset mismatch for ULACInteractorContinuousThin::FireSigmoidThreshold");
static_assert(offsetof(ULACInteractorContinuousThin, JumpSigmoidThreshold) == 1440, "Offset mismatch for ULACInteractorContinuousThin::JumpSigmoidThreshold");
static_assert(offsetof(ULACInteractorContinuousThin, CrouchSigmoidThreshold) == 1480, "Offset mismatch for ULACInteractorContinuousThin::CrouchSigmoidThreshold");
static_assert(offsetof(ULACInteractorContinuousThin, TacticalSprintSigmoidThreshold) == 1520, "Offset mismatch for ULACInteractorContinuousThin::TacticalSprintSigmoidThreshold");
static_assert(offsetof(ULACInteractorContinuousThin, SlideSigmoidThreshold) == 1560, "Offset mismatch for ULACInteractorContinuousThin::SlideSigmoidThreshold");
static_assert(offsetof(ULACInteractorContinuousThin, SlideFromCrouchSigmoidThreshold) == 1600, "Offset mismatch for ULACInteractorContinuousThin::SlideFromCrouchSigmoidThreshold");
static_assert(offsetof(ULACInteractorContinuousThin, AimDownSightSigmoidThreshold) == 1640, "Offset mismatch for ULACInteractorContinuousThin::AimDownSightSigmoidThreshold");
static_assert(offsetof(ULACInteractorContinuousThin, ModelName) == 1680, "Offset mismatch for ULACInteractorContinuousThin::ModelName");
static_assert(offsetof(ULACInteractorContinuousThin, MajorVersion) == 1696, "Offset mismatch for ULACInteractorContinuousThin::MajorVersion");
static_assert(offsetof(ULACInteractorContinuousThin, MinorVersion) == 1700, "Offset mismatch for ULACInteractorContinuousThin::MinorVersion");
static_assert(offsetof(ULACInteractorContinuousThin, ModifierClass) == 1704, "Offset mismatch for ULACInteractorContinuousThin::ModifierClass");
static_assert(offsetof(ULACInteractorContinuousThin, bUseRayCastLOS) == 1712, "Offset mismatch for ULACInteractorContinuousThin::bUseRayCastLOS");
static_assert(offsetof(ULACInteractorContinuousThin, LOSFOVHalf) == 1716, "Offset mismatch for ULACInteractorContinuousThin::LOSFOVHalf");
static_assert(offsetof(ULACInteractorContinuousThin, LOSCollisionChannel) == 1720, "Offset mismatch for ULACInteractorContinuousThin::LOSCollisionChannel");
static_assert(offsetof(ULACInteractorContinuousThin, MovementDeadzone) == 1724, "Offset mismatch for ULACInteractorContinuousThin::MovementDeadzone");
static_assert(offsetof(ULACInteractorContinuousThin, AgentContexts) == 1736, "Offset mismatch for ULACInteractorContinuousThin::AgentContexts");
static_assert(offsetof(ULACInteractorContinuousThin, PersonalityBuckets) == 1752, "Offset mismatch for ULACInteractorContinuousThin::PersonalityBuckets");

// /Script/LACombatInferenceRuntime.LACThinAgentContext
// Kind: Class; super: Object
class ULACThinAgentContext
{
public:
    std::uint8_t Pad_0000[0x2C]; // 0x0000
    TWeakObjectPtr<void> Controller; // 0x002C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    void* InteractorModifier; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* MoveData; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* RotationData; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* JumpData; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* TacticalSprintData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* AimDownSightData; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* FirePrimaryData; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* CrouchData; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* UncrouchData; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SlideData; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0088
    TWeakObjectPtr<void> ActionQueueComponent; // 0x008C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(ULACThinAgentContext, Controller) == 44, "Offset mismatch for ULACThinAgentContext::Controller");
static_assert(offsetof(ULACThinAgentContext, InteractorModifier) == 56, "Offset mismatch for ULACThinAgentContext::InteractorModifier");
static_assert(offsetof(ULACThinAgentContext, MoveData) == 64, "Offset mismatch for ULACThinAgentContext::MoveData");
static_assert(offsetof(ULACThinAgentContext, RotationData) == 72, "Offset mismatch for ULACThinAgentContext::RotationData");
static_assert(offsetof(ULACThinAgentContext, JumpData) == 80, "Offset mismatch for ULACThinAgentContext::JumpData");
static_assert(offsetof(ULACThinAgentContext, TacticalSprintData) == 88, "Offset mismatch for ULACThinAgentContext::TacticalSprintData");
static_assert(offsetof(ULACThinAgentContext, AimDownSightData) == 96, "Offset mismatch for ULACThinAgentContext::AimDownSightData");
static_assert(offsetof(ULACThinAgentContext, FirePrimaryData) == 104, "Offset mismatch for ULACThinAgentContext::FirePrimaryData");
static_assert(offsetof(ULACThinAgentContext, CrouchData) == 112, "Offset mismatch for ULACThinAgentContext::CrouchData");
static_assert(offsetof(ULACThinAgentContext, UncrouchData) == 120, "Offset mismatch for ULACThinAgentContext::UncrouchData");
static_assert(offsetof(ULACThinAgentContext, SlideData) == 128, "Offset mismatch for ULACThinAgentContext::SlideData");
static_assert(offsetof(ULACThinAgentContext, ActionQueueComponent) == 140, "Offset mismatch for ULACThinAgentContext::ActionQueueComponent");

// /Script/LACombatInferenceRuntime.LACombatActionGuardComponent
// Kind: Class; super: ActorComponent
class ULACombatActionGuardComponent
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

static_assert(offsetof(ULACombatActionGuardComponent, PrimaryComponentTick) == 56, "Offset mismatch for ULACombatActionGuardComponent::PrimaryComponentTick");
static_assert(offsetof(ULACombatActionGuardComponent, ComponentTags) == 104, "Offset mismatch for ULACombatActionGuardComponent::ComponentTags");
static_assert(offsetof(ULACombatActionGuardComponent, AssetUserData) == 120, "Offset mismatch for ULACombatActionGuardComponent::AssetUserData");
static_assert(offsetof(ULACombatActionGuardComponent, UCSSerializationIndex) == 144, "Offset mismatch for ULACombatActionGuardComponent::UCSSerializationIndex");
static_assert(offsetof(ULACombatActionGuardComponent, bNetAddressable) == 152, "Offset mismatch for ULACombatActionGuardComponent::bNetAddressable");
static_assert(offsetof(ULACombatActionGuardComponent, bAutoActivate) == 154, "Offset mismatch for ULACombatActionGuardComponent::bAutoActivate");
static_assert(offsetof(ULACombatActionGuardComponent, bIsEditorOnly) == 155, "Offset mismatch for ULACombatActionGuardComponent::bIsEditorOnly");
static_assert(offsetof(ULACombatActionGuardComponent, CreationMethod) == 185, "Offset mismatch for ULACombatActionGuardComponent::CreationMethod");
static_assert(offsetof(ULACombatActionGuardComponent, OnComponentActivated) == 186, "Offset mismatch for ULACombatActionGuardComponent::OnComponentActivated");
static_assert(offsetof(ULACombatActionGuardComponent, OnComponentDeactivated) == 187, "Offset mismatch for ULACombatActionGuardComponent::OnComponentDeactivated");

// /Script/LACombatInferenceRuntime.LACombatActionQueueComponent
// Kind: Class; super: ActorComponent
class ULACombatActionQueueComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t FireSigmoidThreshold[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpSigmoidThreshold[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrouchSigmoidThreshold[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t TacticalSprintSigmoidThreshold[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlideSigmoidThreshold[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlideFromCrouchSigmoidThreshold[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t AimDownSightSigmoidThreshold[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    float MovementDeadzone; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    std::int32_t AgentId; // 0x01DC (Size: 0x4, Type: IntProperty)
    FString ModelName; // 0x01E0 (Size: 0x10, Type: StrProperty)
    float ActionTickInterval; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EnsemblingMode; // 0x01F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnsembleBinaryActions; // 0x01F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnsembleRotation; // 0x01F6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x01F7
    std::int32_t MaxOverlappingChunks; // 0x01F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t ExhaustionPolicy; // 0x01FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x4B]; // 0x01FD
    void* MoveData; // 0x0248 (Size: 0x8, Type: ObjectProperty)
    void* RotationData; // 0x0250 (Size: 0x8, Type: ObjectProperty)
    void* JumpData; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    void* TacticalSprintData; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    void* AimDownSightData; // 0x0268 (Size: 0x8, Type: ObjectProperty)
    void* FirePrimaryData; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* CrouchData; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* UncrouchData; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* SlideData; // 0x0288 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULACombatActionQueueComponent, FireSigmoidThreshold) == 192, "Offset mismatch for ULACombatActionQueueComponent::FireSigmoidThreshold");
static_assert(offsetof(ULACombatActionQueueComponent, JumpSigmoidThreshold) == 232, "Offset mismatch for ULACombatActionQueueComponent::JumpSigmoidThreshold");
static_assert(offsetof(ULACombatActionQueueComponent, CrouchSigmoidThreshold) == 272, "Offset mismatch for ULACombatActionQueueComponent::CrouchSigmoidThreshold");
static_assert(offsetof(ULACombatActionQueueComponent, TacticalSprintSigmoidThreshold) == 312, "Offset mismatch for ULACombatActionQueueComponent::TacticalSprintSigmoidThreshold");
static_assert(offsetof(ULACombatActionQueueComponent, SlideSigmoidThreshold) == 352, "Offset mismatch for ULACombatActionQueueComponent::SlideSigmoidThreshold");
static_assert(offsetof(ULACombatActionQueueComponent, SlideFromCrouchSigmoidThreshold) == 392, "Offset mismatch for ULACombatActionQueueComponent::SlideFromCrouchSigmoidThreshold");
static_assert(offsetof(ULACombatActionQueueComponent, AimDownSightSigmoidThreshold) == 432, "Offset mismatch for ULACombatActionQueueComponent::AimDownSightSigmoidThreshold");
static_assert(offsetof(ULACombatActionQueueComponent, MovementDeadzone) == 472, "Offset mismatch for ULACombatActionQueueComponent::MovementDeadzone");
static_assert(offsetof(ULACombatActionQueueComponent, AgentId) == 476, "Offset mismatch for ULACombatActionQueueComponent::AgentId");
static_assert(offsetof(ULACombatActionQueueComponent, ModelName) == 480, "Offset mismatch for ULACombatActionQueueComponent::ModelName");
static_assert(offsetof(ULACombatActionQueueComponent, ActionTickInterval) == 496, "Offset mismatch for ULACombatActionQueueComponent::ActionTickInterval");
static_assert(offsetof(ULACombatActionQueueComponent, EnsemblingMode) == 500, "Offset mismatch for ULACombatActionQueueComponent::EnsemblingMode");
static_assert(offsetof(ULACombatActionQueueComponent, bEnsembleBinaryActions) == 501, "Offset mismatch for ULACombatActionQueueComponent::bEnsembleBinaryActions");
static_assert(offsetof(ULACombatActionQueueComponent, bEnsembleRotation) == 502, "Offset mismatch for ULACombatActionQueueComponent::bEnsembleRotation");
static_assert(offsetof(ULACombatActionQueueComponent, MaxOverlappingChunks) == 504, "Offset mismatch for ULACombatActionQueueComponent::MaxOverlappingChunks");
static_assert(offsetof(ULACombatActionQueueComponent, ExhaustionPolicy) == 508, "Offset mismatch for ULACombatActionQueueComponent::ExhaustionPolicy");
static_assert(offsetof(ULACombatActionQueueComponent, MoveData) == 584, "Offset mismatch for ULACombatActionQueueComponent::MoveData");
static_assert(offsetof(ULACombatActionQueueComponent, RotationData) == 592, "Offset mismatch for ULACombatActionQueueComponent::RotationData");
static_assert(offsetof(ULACombatActionQueueComponent, JumpData) == 600, "Offset mismatch for ULACombatActionQueueComponent::JumpData");
static_assert(offsetof(ULACombatActionQueueComponent, TacticalSprintData) == 608, "Offset mismatch for ULACombatActionQueueComponent::TacticalSprintData");
static_assert(offsetof(ULACombatActionQueueComponent, AimDownSightData) == 616, "Offset mismatch for ULACombatActionQueueComponent::AimDownSightData");
static_assert(offsetof(ULACombatActionQueueComponent, FirePrimaryData) == 624, "Offset mismatch for ULACombatActionQueueComponent::FirePrimaryData");
static_assert(offsetof(ULACombatActionQueueComponent, CrouchData) == 632, "Offset mismatch for ULACombatActionQueueComponent::CrouchData");
static_assert(offsetof(ULACombatActionQueueComponent, UncrouchData) == 640, "Offset mismatch for ULACombatActionQueueComponent::UncrouchData");
static_assert(offsetof(ULACombatActionQueueComponent, SlideData) == 648, "Offset mismatch for ULACombatActionQueueComponent::SlideData");

// /Script/LACombatInferenceRuntime.LACombatAgentContext
// Kind: Class; super: Object
class ULACombatAgentContext
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Controller; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* InteractorModifier; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* MoveData; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* RotationData; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* JumpData; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* SlideData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* CrouchData; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* TacticalSprintData; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* AimDownSightData; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* FirePrimaryData; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CachedTargets; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULACombatAgentContext, Controller) == 48, "Offset mismatch for ULACombatAgentContext::Controller");
static_assert(offsetof(ULACombatAgentContext, InteractorModifier) == 56, "Offset mismatch for ULACombatAgentContext::InteractorModifier");
static_assert(offsetof(ULACombatAgentContext, MoveData) == 64, "Offset mismatch for ULACombatAgentContext::MoveData");
static_assert(offsetof(ULACombatAgentContext, RotationData) == 72, "Offset mismatch for ULACombatAgentContext::RotationData");
static_assert(offsetof(ULACombatAgentContext, JumpData) == 80, "Offset mismatch for ULACombatAgentContext::JumpData");
static_assert(offsetof(ULACombatAgentContext, SlideData) == 88, "Offset mismatch for ULACombatAgentContext::SlideData");
static_assert(offsetof(ULACombatAgentContext, CrouchData) == 96, "Offset mismatch for ULACombatAgentContext::CrouchData");
static_assert(offsetof(ULACombatAgentContext, TacticalSprintData) == 104, "Offset mismatch for ULACombatAgentContext::TacticalSprintData");
static_assert(offsetof(ULACombatAgentContext, AimDownSightData) == 112, "Offset mismatch for ULACombatAgentContext::AimDownSightData");
static_assert(offsetof(ULACombatAgentContext, FirePrimaryData) == 120, "Offset mismatch for ULACombatAgentContext::FirePrimaryData");
static_assert(offsetof(ULACombatAgentContext, CachedTargets) == 128, "Offset mismatch for ULACombatAgentContext::CachedTargets");

// /Script/LACombatInferenceRuntime.LACombatElementDataHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class ULACombatElementDataHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LACombatInferenceRuntime.LACombatInferenceInteractor
// Kind: Class; super: LearningAgentsInteractor
class ULACombatInferenceInteractor
{
public:
    std::uint8_t Pad_0000[0x480]; // 0x0000
    FString ModelName; // 0x0480 (Size: 0x10, Type: StrProperty)
    std::int32_t MajorVersion; // 0x0490 (Size: 0x4, Type: IntProperty)
    std::int32_t MinorVersion; // 0x0494 (Size: 0x4, Type: IntProperty)
    std::uint8_t ActionOptions[0xE0]; // 0x0498 (Size: 0xE0, Type: StructProperty)
    std::uint8_t ObservationOptions[0xA8]; // 0x0578 (Size: 0xA8, Type: StructProperty)
    TArray<void*> PersonalityWeightingsDataTable; // 0x0620 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ObservationScales[0xC8]; // 0x0630 (Size: 0xC8, Type: StructProperty)
    std::uint8_t ActionScales[0x68]; // 0x06F8 (Size: 0x68, Type: StructProperty)
    std::uint8_t SigmoidThresholds[0x20]; // 0x0760 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionGuards[0x2C8]; // 0x0780 (Size: 0x2C8, Type: StructProperty)
    float SpeedMultiplierInference; // 0x0A48 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0A4C
    std::uint8_t LethalityReducer[0xD8]; // 0x0A50 (Size: 0xD8, Type: StructProperty)
    std::uint8_t ActionStickiness[0xE0]; // 0x0B28 (Size: 0xE0, Type: StructProperty)
    std::uint8_t TargetCachingSeconds[0x28]; // 0x0C08 (Size: 0x28, Type: StructProperty)
    std::uint8_t BotCameraOffset[0x18]; // 0x0C30 (Size: 0x18, Type: StructProperty)
    std::uint8_t DataTableBoolOverrides[0x308]; // 0x0C48 (Size: 0x308, Type: StructProperty)
    TMap<void*, void*> AgentContexts; // 0x0F50 (Size: 0x10, Type: MapProperty)
    TArray<void*> PersonalityBuckets; // 0x0F60 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULACombatInferenceInteractor, ModelName) == 1152, "Offset mismatch for ULACombatInferenceInteractor::ModelName");
static_assert(offsetof(ULACombatInferenceInteractor, MajorVersion) == 1168, "Offset mismatch for ULACombatInferenceInteractor::MajorVersion");
static_assert(offsetof(ULACombatInferenceInteractor, MinorVersion) == 1172, "Offset mismatch for ULACombatInferenceInteractor::MinorVersion");
static_assert(offsetof(ULACombatInferenceInteractor, ActionOptions) == 1176, "Offset mismatch for ULACombatInferenceInteractor::ActionOptions");
static_assert(offsetof(ULACombatInferenceInteractor, ObservationOptions) == 1400, "Offset mismatch for ULACombatInferenceInteractor::ObservationOptions");
static_assert(offsetof(ULACombatInferenceInteractor, PersonalityWeightingsDataTable) == 1568, "Offset mismatch for ULACombatInferenceInteractor::PersonalityWeightingsDataTable");
static_assert(offsetof(ULACombatInferenceInteractor, ObservationScales) == 1584, "Offset mismatch for ULACombatInferenceInteractor::ObservationScales");
static_assert(offsetof(ULACombatInferenceInteractor, ActionScales) == 1784, "Offset mismatch for ULACombatInferenceInteractor::ActionScales");
static_assert(offsetof(ULACombatInferenceInteractor, SigmoidThresholds) == 1888, "Offset mismatch for ULACombatInferenceInteractor::SigmoidThresholds");
static_assert(offsetof(ULACombatInferenceInteractor, ActionGuards) == 1920, "Offset mismatch for ULACombatInferenceInteractor::ActionGuards");
static_assert(offsetof(ULACombatInferenceInteractor, SpeedMultiplierInference) == 2632, "Offset mismatch for ULACombatInferenceInteractor::SpeedMultiplierInference");
static_assert(offsetof(ULACombatInferenceInteractor, LethalityReducer) == 2640, "Offset mismatch for ULACombatInferenceInteractor::LethalityReducer");
static_assert(offsetof(ULACombatInferenceInteractor, ActionStickiness) == 2856, "Offset mismatch for ULACombatInferenceInteractor::ActionStickiness");
static_assert(offsetof(ULACombatInferenceInteractor, TargetCachingSeconds) == 3080, "Offset mismatch for ULACombatInferenceInteractor::TargetCachingSeconds");
static_assert(offsetof(ULACombatInferenceInteractor, BotCameraOffset) == 3120, "Offset mismatch for ULACombatInferenceInteractor::BotCameraOffset");
static_assert(offsetof(ULACombatInferenceInteractor, DataTableBoolOverrides) == 3144, "Offset mismatch for ULACombatInferenceInteractor::DataTableBoolOverrides");
static_assert(offsetof(ULACombatInferenceInteractor, AgentContexts) == 3920, "Offset mismatch for ULACombatInferenceInteractor::AgentContexts");
static_assert(offsetof(ULACombatInferenceInteractor, PersonalityBuckets) == 3936, "Offset mismatch for ULACombatInferenceInteractor::PersonalityBuckets");

// /Script/LACombatInferenceRuntime.LACombatInferenceInteractorAgentContext
// Kind: Class; super: Object
class ULACombatInferenceInteractorAgentContext
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Controller; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* PlayerPawn; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* MoveData; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* RotationData; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* JumpData; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* TacticalSprintData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* AimDownSightData; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* FirePrimaryData; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0070
    TArray<void*> CachedTargets; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULACombatInferenceInteractorAgentContext, Controller) == 48, "Offset mismatch for ULACombatInferenceInteractorAgentContext::Controller");
static_assert(offsetof(ULACombatInferenceInteractorAgentContext, PlayerPawn) == 56, "Offset mismatch for ULACombatInferenceInteractorAgentContext::PlayerPawn");
static_assert(offsetof(ULACombatInferenceInteractorAgentContext, MoveData) == 64, "Offset mismatch for ULACombatInferenceInteractorAgentContext::MoveData");
static_assert(offsetof(ULACombatInferenceInteractorAgentContext, RotationData) == 72, "Offset mismatch for ULACombatInferenceInteractorAgentContext::RotationData");
static_assert(offsetof(ULACombatInferenceInteractorAgentContext, JumpData) == 80, "Offset mismatch for ULACombatInferenceInteractorAgentContext::JumpData");
static_assert(offsetof(ULACombatInferenceInteractorAgentContext, TacticalSprintData) == 88, "Offset mismatch for ULACombatInferenceInteractorAgentContext::TacticalSprintData");
static_assert(offsetof(ULACombatInferenceInteractorAgentContext, AimDownSightData) == 96, "Offset mismatch for ULACombatInferenceInteractorAgentContext::AimDownSightData");
static_assert(offsetof(ULACombatInferenceInteractorAgentContext, FirePrimaryData) == 104, "Offset mismatch for ULACombatInferenceInteractorAgentContext::FirePrimaryData");
static_assert(offsetof(ULACombatInferenceInteractorAgentContext, CachedTargets) == 144, "Offset mismatch for ULACombatInferenceInteractorAgentContext::CachedTargets");

// /Script/LACombatInferenceRuntime.LACombatInteractor
// Kind: Class; super: LearningAgentsInteractor
class ULACombatInteractor
{
public:
    std::uint8_t Pad_0000[0x458]; // 0x0000
    std::uint8_t ObservationsDataElement[0x10]; // 0x0458 (Size: 0x10, Type: StructProperty)
    std::uint8_t ActionsDataElement[0x10]; // 0x0468 (Size: 0x10, Type: StructProperty)
    std::uint8_t bRecording; // 0x0478 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0479
    void* ModifierClass; // 0x0480 (Size: 0x8, Type: ClassProperty)
    FString ModelName; // 0x0488 (Size: 0x10, Type: StrProperty)
    std::int32_t MajorVersion; // 0x0498 (Size: 0x4, Type: IntProperty)
    std::int32_t MinorVersion; // 0x049C (Size: 0x4, Type: IntProperty)
    std::uint8_t ObservationsSettings[0x88]; // 0x04A0 (Size: 0x88, Type: StructProperty)
    TArray<void*> PersonalityWeightingsDataTable; // 0x0528 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StyleWeightingsDataTable; // 0x0538 (Size: 0x10, Type: ArrayProperty)
    float SpeedMultiplierInference; // 0x0548 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x054C
    std::uint8_t TargetCachingSeconds[0x30]; // 0x0550 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> AgentContexts; // 0x0580 (Size: 0x10, Type: MapProperty)
    TArray<void*> PersonalityBuckets; // 0x0590 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StyleBuckets; // 0x05A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULACombatInteractor, ObservationsDataElement) == 1112, "Offset mismatch for ULACombatInteractor::ObservationsDataElement");
static_assert(offsetof(ULACombatInteractor, ActionsDataElement) == 1128, "Offset mismatch for ULACombatInteractor::ActionsDataElement");
static_assert(offsetof(ULACombatInteractor, bRecording) == 1144, "Offset mismatch for ULACombatInteractor::bRecording");
static_assert(offsetof(ULACombatInteractor, ModifierClass) == 1152, "Offset mismatch for ULACombatInteractor::ModifierClass");
static_assert(offsetof(ULACombatInteractor, ModelName) == 1160, "Offset mismatch for ULACombatInteractor::ModelName");
static_assert(offsetof(ULACombatInteractor, MajorVersion) == 1176, "Offset mismatch for ULACombatInteractor::MajorVersion");
static_assert(offsetof(ULACombatInteractor, MinorVersion) == 1180, "Offset mismatch for ULACombatInteractor::MinorVersion");
static_assert(offsetof(ULACombatInteractor, ObservationsSettings) == 1184, "Offset mismatch for ULACombatInteractor::ObservationsSettings");
static_assert(offsetof(ULACombatInteractor, PersonalityWeightingsDataTable) == 1320, "Offset mismatch for ULACombatInteractor::PersonalityWeightingsDataTable");
static_assert(offsetof(ULACombatInteractor, StyleWeightingsDataTable) == 1336, "Offset mismatch for ULACombatInteractor::StyleWeightingsDataTable");
static_assert(offsetof(ULACombatInteractor, SpeedMultiplierInference) == 1352, "Offset mismatch for ULACombatInteractor::SpeedMultiplierInference");
static_assert(offsetof(ULACombatInteractor, TargetCachingSeconds) == 1360, "Offset mismatch for ULACombatInteractor::TargetCachingSeconds");
static_assert(offsetof(ULACombatInteractor, AgentContexts) == 1408, "Offset mismatch for ULACombatInteractor::AgentContexts");
static_assert(offsetof(ULACombatInteractor, PersonalityBuckets) == 1424, "Offset mismatch for ULACombatInteractor::PersonalityBuckets");
static_assert(offsetof(ULACombatInteractor, StyleBuckets) == 1440, "Offset mismatch for ULACombatInteractor::StyleBuckets");

// /Script/LACombatInferenceRuntime.LACombatInteractorModifier
// Kind: Class; super: ActorComponent
class ULACombatInteractorModifier
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ActionGuards[0x560]; // 0x00C0 (Size: 0x560, Type: StructProperty)
    std::uint8_t DefaultLethalityProfile[0x220]; // 0x0620 (Size: 0x220, Type: StructProperty)
    TArray<void*> WeaponCategories; // 0x0840 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SmootherConfig[0x1]; // 0x0850 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULACombatInteractorModifier, ActionGuards) == 192, "Offset mismatch for ULACombatInteractorModifier::ActionGuards");
static_assert(offsetof(ULACombatInteractorModifier, DefaultLethalityProfile) == 1568, "Offset mismatch for ULACombatInteractorModifier::DefaultLethalityProfile");
static_assert(offsetof(ULACombatInteractorModifier, WeaponCategories) == 2112, "Offset mismatch for ULACombatInteractorModifier::WeaponCategories");
static_assert(offsetof(ULACombatInteractorModifier, SmootherConfig) == 2128, "Offset mismatch for ULACombatInteractorModifier::SmootherConfig");

// /Script/LACombatInferenceRuntime.LACombatInteractorModifierV2
// Kind: Class; super: LACombatInteractorModifier
class ULACombatInteractorModifierV2
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ActionGuards[0x560]; // 0x00C0 (Size: 0x560, Type: StructProperty)
    std::uint8_t DefaultLethalityProfile[0x220]; // 0x0620 (Size: 0x220, Type: StructProperty)
    TArray<void*> WeaponCategories; // 0x0840 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SmootherConfig[0x1]; // 0x0850 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULACombatInteractorModifierV2, ActionGuards) == 192, "Offset mismatch for ULACombatInteractorModifierV2::ActionGuards");
static_assert(offsetof(ULACombatInteractorModifierV2, DefaultLethalityProfile) == 1568, "Offset mismatch for ULACombatInteractorModifierV2::DefaultLethalityProfile");
static_assert(offsetof(ULACombatInteractorModifierV2, WeaponCategories) == 2112, "Offset mismatch for ULACombatInteractorModifierV2::WeaponCategories");
static_assert(offsetof(ULACombatInteractorModifierV2, SmootherConfig) == 2128, "Offset mismatch for ULACombatInteractorModifierV2::SmootherConfig");

// /Script/LACombatInferenceRuntime.LACombatSemanticMap3D
// Kind: Class; super: ActorComponent
class ULACombatSemanticMap3D
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t CellSize[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t GridOffset[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MapSize[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULACombatSemanticMap3D, CellSize) == 208, "Offset mismatch for ULACombatSemanticMap3D::CellSize");
static_assert(offsetof(ULACombatSemanticMap3D, GridOffset) == 232, "Offset mismatch for ULACombatSemanticMap3D::GridOffset");
static_assert(offsetof(ULACombatSemanticMap3D, MapSize) == 256, "Offset mismatch for ULACombatSemanticMap3D::MapSize");
