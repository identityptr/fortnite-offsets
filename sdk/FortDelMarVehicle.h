/**
 * decamp dumper generated SDK
 * Package: /Script/FortDelMarVehicle
 */
#pragma once
#include "Basic.h"

// /Script/FortDelMarVehicle.FortDelMarCameraFloatBlendedProperty
// Kind: ScriptStruct; super: none
struct FFortDelMarCameraFloatBlendedProperty
{
public:
    std::uint8_t bEvaluateInputOnCurve; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t InputCurve[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    float ActiveValue; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRemapOutputValue; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0055
    std::uint8_t RemapCurve[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    float BlendInLambda; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float BlendOutLambda; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseBlendOutCurve; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00A9
    std::uint8_t BlendOutLambdaCurve[0x48]; // 0x00B0 (Size: 0x48, Type: StructProperty)
    float Tolerance; // 0x00F8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarCameraFloatBlendedProperty, bEvaluateInputOnCurve) == 0, "Offset mismatch for FFortDelMarCameraFloatBlendedProperty::bEvaluateInputOnCurve");
static_assert(offsetof(FFortDelMarCameraFloatBlendedProperty, InputCurve) == 8, "Offset mismatch for FFortDelMarCameraFloatBlendedProperty::InputCurve");
static_assert(offsetof(FFortDelMarCameraFloatBlendedProperty, ActiveValue) == 80, "Offset mismatch for FFortDelMarCameraFloatBlendedProperty::ActiveValue");
static_assert(offsetof(FFortDelMarCameraFloatBlendedProperty, bRemapOutputValue) == 84, "Offset mismatch for FFortDelMarCameraFloatBlendedProperty::bRemapOutputValue");
static_assert(offsetof(FFortDelMarCameraFloatBlendedProperty, RemapCurve) == 88, "Offset mismatch for FFortDelMarCameraFloatBlendedProperty::RemapCurve");
static_assert(offsetof(FFortDelMarCameraFloatBlendedProperty, BlendInLambda) == 160, "Offset mismatch for FFortDelMarCameraFloatBlendedProperty::BlendInLambda");
static_assert(offsetof(FFortDelMarCameraFloatBlendedProperty, BlendOutLambda) == 164, "Offset mismatch for FFortDelMarCameraFloatBlendedProperty::BlendOutLambda");
static_assert(offsetof(FFortDelMarCameraFloatBlendedProperty, bUseBlendOutCurve) == 168, "Offset mismatch for FFortDelMarCameraFloatBlendedProperty::bUseBlendOutCurve");
static_assert(offsetof(FFortDelMarCameraFloatBlendedProperty, BlendOutLambdaCurve) == 176, "Offset mismatch for FFortDelMarCameraFloatBlendedProperty::BlendOutLambdaCurve");
static_assert(offsetof(FFortDelMarCameraFloatBlendedProperty, Tolerance) == 248, "Offset mismatch for FFortDelMarCameraFloatBlendedProperty::Tolerance");

// /Script/FortDelMarVehicle.FortDelMarCameraFloatProperty
// Kind: ScriptStruct; super: none
struct FFortDelMarCameraFloatProperty
{
public:
    std::uint8_t bEvaluateInputOnCurve; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAccumulateInput; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t Curve[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    float InterpLambda; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float DecayLambda; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ClampedRange[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarCameraFloatProperty, bEvaluateInputOnCurve) == 0, "Offset mismatch for FFortDelMarCameraFloatProperty::bEvaluateInputOnCurve");
static_assert(offsetof(FFortDelMarCameraFloatProperty, bAccumulateInput) == 1, "Offset mismatch for FFortDelMarCameraFloatProperty::bAccumulateInput");
static_assert(offsetof(FFortDelMarCameraFloatProperty, Curve) == 8, "Offset mismatch for FFortDelMarCameraFloatProperty::Curve");
static_assert(offsetof(FFortDelMarCameraFloatProperty, InterpLambda) == 80, "Offset mismatch for FFortDelMarCameraFloatProperty::InterpLambda");
static_assert(offsetof(FFortDelMarCameraFloatProperty, DecayLambda) == 84, "Offset mismatch for FFortDelMarCameraFloatProperty::DecayLambda");
static_assert(offsetof(FFortDelMarCameraFloatProperty, ClampedRange) == 88, "Offset mismatch for FFortDelMarCameraFloatProperty::ClampedRange");

// /Script/FortDelMarVehicle.FortDelMarCosmeticSlotInfo
// Kind: ScriptStruct; super: none
struct FFortDelMarCosmeticSlotInfo
{
public:
    std::uint8_t SlotTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t SlotName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t bCanBeEmpty; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    TSoftObjectPtr<void> UnassignedPreviewImage; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FFortDelMarCosmeticSlotInfo, SlotTag) == 0, "Offset mismatch for FFortDelMarCosmeticSlotInfo::SlotTag");
static_assert(offsetof(FFortDelMarCosmeticSlotInfo, SlotName) == 8, "Offset mismatch for FFortDelMarCosmeticSlotInfo::SlotName");
static_assert(offsetof(FFortDelMarCosmeticSlotInfo, ShortDescription) == 24, "Offset mismatch for FFortDelMarCosmeticSlotInfo::ShortDescription");
static_assert(offsetof(FFortDelMarCosmeticSlotInfo, bCanBeEmpty) == 40, "Offset mismatch for FFortDelMarCosmeticSlotInfo::bCanBeEmpty");
static_assert(offsetof(FFortDelMarCosmeticSlotInfo, UnassignedPreviewImage) == 48, "Offset mismatch for FFortDelMarCosmeticSlotInfo::UnassignedPreviewImage");

// /Script/FortDelMarVehicle.FortDelMarDefaultCameraValues
// Kind: ScriptStruct; super: none
struct FFortDelMarDefaultCameraValues
{
public:
    float FOV; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Distance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AngleToOriginDegrees; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarDefaultCameraValues, FOV) == 0, "Offset mismatch for FFortDelMarDefaultCameraValues::FOV");
static_assert(offsetof(FFortDelMarDefaultCameraValues, Distance) == 4, "Offset mismatch for FFortDelMarDefaultCameraValues::Distance");
static_assert(offsetof(FFortDelMarDefaultCameraValues, Height) == 8, "Offset mismatch for FFortDelMarDefaultCameraValues::Height");
static_assert(offsetof(FFortDelMarDefaultCameraValues, AngleToOriginDegrees) == 12, "Offset mismatch for FFortDelMarDefaultCameraValues::AngleToOriginDegrees");

// /Script/FortDelMarVehicle.FortDelMarDynamicCameraShakeEffect
// Kind: ScriptStruct; super: none
struct FFortDelMarDynamicCameraShakeEffect
{
public:
    void* CameraShakeClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> CameraShakeInstance; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ShakeIntensityCurve[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    float CurrentShakeIntensity; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarDynamicCameraShakeEffect, CameraShakeClass) == 0, "Offset mismatch for FFortDelMarDynamicCameraShakeEffect::CameraShakeClass");
static_assert(offsetof(FFortDelMarDynamicCameraShakeEffect, CameraShakeInstance) == 8, "Offset mismatch for FFortDelMarDynamicCameraShakeEffect::CameraShakeInstance");
static_assert(offsetof(FFortDelMarDynamicCameraShakeEffect, ShakeIntensityCurve) == 16, "Offset mismatch for FFortDelMarDynamicCameraShakeEffect::ShakeIntensityCurve");
static_assert(offsetof(FFortDelMarDynamicCameraShakeEffect, CurrentShakeIntensity) == 88, "Offset mismatch for FFortDelMarDynamicCameraShakeEffect::CurrentShakeIntensity");

// /Script/FortDelMarVehicle.FortDelMarDynamicForceFeedbackEffect
// Kind: ScriptStruct; super: none
struct FFortDelMarDynamicForceFeedbackEffect
{
public:
    std::uint8_t Effect[0x50]; // 0x0000 (Size: 0x50, Type: StructProperty)
    std::uint8_t IntensityAmplifierCurve[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarDynamicForceFeedbackEffect, Effect) == 0, "Offset mismatch for FFortDelMarDynamicForceFeedbackEffect::Effect");
static_assert(offsetof(FFortDelMarDynamicForceFeedbackEffect, IntensityAmplifierCurve) == 80, "Offset mismatch for FFortDelMarDynamicForceFeedbackEffect::IntensityAmplifierCurve");

// /Script/FortDelMarVehicle.FortDelMarInputBufferData
// Kind: ScriptStruct; super: none
struct FFortDelMarInputBufferData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarVehicle.FortDelMarKickflipSimulationResult
// Kind: ScriptStruct; super: none
struct FFortDelMarKickflipSimulationResult
{
public:
    std::uint8_t Hit[0x100]; // 0x0000 (Size: 0x100, Type: StructProperty)
    std::uint8_t VehicleLandingRotation[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t bValidLandingRotation; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriveableSurfaceHit; // 0x0121 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0122
    float SuctionVelocityUsed; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float ElapsedTime; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float DistanceTravelled; // 0x012C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarKickflipSimulationResult, Hit) == 0, "Offset mismatch for FFortDelMarKickflipSimulationResult::Hit");
static_assert(offsetof(FFortDelMarKickflipSimulationResult, VehicleLandingRotation) == 256, "Offset mismatch for FFortDelMarKickflipSimulationResult::VehicleLandingRotation");
static_assert(offsetof(FFortDelMarKickflipSimulationResult, bValidLandingRotation) == 288, "Offset mismatch for FFortDelMarKickflipSimulationResult::bValidLandingRotation");
static_assert(offsetof(FFortDelMarKickflipSimulationResult, bDriveableSurfaceHit) == 289, "Offset mismatch for FFortDelMarKickflipSimulationResult::bDriveableSurfaceHit");
static_assert(offsetof(FFortDelMarKickflipSimulationResult, SuctionVelocityUsed) == 292, "Offset mismatch for FFortDelMarKickflipSimulationResult::SuctionVelocityUsed");
static_assert(offsetof(FFortDelMarKickflipSimulationResult, ElapsedTime) == 296, "Offset mismatch for FFortDelMarKickflipSimulationResult::ElapsedTime");
static_assert(offsetof(FFortDelMarKickflipSimulationResult, DistanceTravelled) == 300, "Offset mismatch for FFortDelMarKickflipSimulationResult::DistanceTravelled");

// /Script/FortDelMarVehicle.FortDelMarLoadout
// Kind: ScriptStruct; super: none
struct FFortDelMarLoadout
{
public:
    TMap<void*, void*> Items; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFortDelMarLoadout, Items) == 0, "Offset mismatch for FFortDelMarLoadout::Items");

// /Script/FortDelMarVehicle.FortDelMarNetworkInputPacket
// Kind: ScriptStruct; super: none
struct FFortDelMarNetworkInputPacket
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarVehicle.FortDelMarReplicatedLoadout
// Kind: ScriptStruct; super: none
struct FFortDelMarReplicatedLoadout
{
public:
    TArray<void*> Items; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarReplicatedLoadout, Items) == 0, "Offset mismatch for FFortDelMarReplicatedLoadout::Items");

// /Script/FortDelMarVehicle.FortDelMarRubberbandingConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarRubberbandingConfig
{
public:
    std::uint8_t bRubberbandingEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MinPackDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxPackDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float PackDistanceOffset; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MinDistanceFromPack; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceFromPack; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumPlayersForPackDistance; // 0x0018 (Size: 0x4, Type: IntProperty)
    float MaxPackDistanceGainedPerSecond; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxPackDistanceLostPerSecond; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxBonusSpeedScalar; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarRubberbandingConfig, bRubberbandingEnabled) == 0, "Offset mismatch for FFortDelMarRubberbandingConfig::bRubberbandingEnabled");
static_assert(offsetof(FFortDelMarRubberbandingConfig, MinPackDistance) == 4, "Offset mismatch for FFortDelMarRubberbandingConfig::MinPackDistance");
static_assert(offsetof(FFortDelMarRubberbandingConfig, MaxPackDistance) == 8, "Offset mismatch for FFortDelMarRubberbandingConfig::MaxPackDistance");
static_assert(offsetof(FFortDelMarRubberbandingConfig, PackDistanceOffset) == 12, "Offset mismatch for FFortDelMarRubberbandingConfig::PackDistanceOffset");
static_assert(offsetof(FFortDelMarRubberbandingConfig, MinDistanceFromPack) == 16, "Offset mismatch for FFortDelMarRubberbandingConfig::MinDistanceFromPack");
static_assert(offsetof(FFortDelMarRubberbandingConfig, MaxDistanceFromPack) == 20, "Offset mismatch for FFortDelMarRubberbandingConfig::MaxDistanceFromPack");
static_assert(offsetof(FFortDelMarRubberbandingConfig, NumPlayersForPackDistance) == 24, "Offset mismatch for FFortDelMarRubberbandingConfig::NumPlayersForPackDistance");
static_assert(offsetof(FFortDelMarRubberbandingConfig, MaxPackDistanceGainedPerSecond) == 28, "Offset mismatch for FFortDelMarRubberbandingConfig::MaxPackDistanceGainedPerSecond");
static_assert(offsetof(FFortDelMarRubberbandingConfig, MaxPackDistanceLostPerSecond) == 32, "Offset mismatch for FFortDelMarRubberbandingConfig::MaxPackDistanceLostPerSecond");
static_assert(offsetof(FFortDelMarRubberbandingConfig, MaxBonusSpeedScalar) == 36, "Offset mismatch for FFortDelMarRubberbandingConfig::MaxBonusSpeedScalar");

// /Script/FortDelMarVehicle.FortDelMarRubberbandingMMRConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarRubberbandingMMRConfig
{
public:
    float MinMMR; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxMMR; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RubberbandingConfig[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarRubberbandingMMRConfig, MinMMR) == 0, "Offset mismatch for FFortDelMarRubberbandingMMRConfig::MinMMR");
static_assert(offsetof(FFortDelMarRubberbandingMMRConfig, MaxMMR) == 4, "Offset mismatch for FFortDelMarRubberbandingMMRConfig::MaxMMR");
static_assert(offsetof(FFortDelMarRubberbandingMMRConfig, RubberbandingConfig) == 8, "Offset mismatch for FFortDelMarRubberbandingMMRConfig::RubberbandingConfig");

// /Script/FortDelMarVehicle.FortDelMarStartlineBoostData
// Kind: ScriptStruct; super: none
struct FFortDelMarStartlineBoostData
{
public:
    std::uint8_t bFailed; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ReactionSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float RunStartTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float IntervalSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float EarnedPotential; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarStartlineBoostData, bFailed) == 0, "Offset mismatch for FFortDelMarStartlineBoostData::bFailed");
static_assert(offsetof(FFortDelMarStartlineBoostData, ReactionSeconds) == 4, "Offset mismatch for FFortDelMarStartlineBoostData::ReactionSeconds");
static_assert(offsetof(FFortDelMarStartlineBoostData, RunStartTime) == 8, "Offset mismatch for FFortDelMarStartlineBoostData::RunStartTime");
static_assert(offsetof(FFortDelMarStartlineBoostData, IntervalSeconds) == 12, "Offset mismatch for FFortDelMarStartlineBoostData::IntervalSeconds");
static_assert(offsetof(FFortDelMarStartlineBoostData, EarnedPotential) == 16, "Offset mismatch for FFortDelMarStartlineBoostData::EarnedPotential");

// /Script/FortDelMarVehicle.FortDelMarThrottledValue
// Kind: ScriptStruct; super: none
struct FFortDelMarThrottledValue
{
public:
    float RiseRate; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FallRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarThrottledValue, RiseRate) == 0, "Offset mismatch for FFortDelMarThrottledValue::RiseRate");
static_assert(offsetof(FFortDelMarThrottledValue, FallRate) == 4, "Offset mismatch for FFortDelMarThrottledValue::FallRate");

// /Script/FortDelMarVehicle.FortDelMarTurboBonusZone
// Kind: ScriptStruct; super: none
struct FFortDelMarTurboBonusZone
{
public:
    float ZoneStartTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ZoneEndTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarTurboBonusZone, ZoneStartTime) == 0, "Offset mismatch for FFortDelMarTurboBonusZone::ZoneStartTime");
static_assert(offsetof(FFortDelMarTurboBonusZone, ZoneEndTime) == 4, "Offset mismatch for FFortDelMarTurboBonusZone::ZoneEndTime");

// /Script/FortDelMarVehicle.FortDelMarVehicleAbilityConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleAbilityConfig
{
public:
    std::uint8_t bAirControlEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAirFreestyleEnabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAirThrottleEnabled; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoAerialRotationEnabled; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoUprightEnabled; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDraftingEnabled; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriftEnabled; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriftBoostEnabled; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInfiniteUnderthrustEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpEnabled; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickflipEnabled; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOversteerEnabled; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReattachmentEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartlineBoostEnabled; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStrafeEnabled; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurboEnabled; // 0x000F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUnderthrustEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bAirControlEnabled) == 0, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bAirControlEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bAirFreestyleEnabled) == 1, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bAirFreestyleEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bAirThrottleEnabled) == 2, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bAirThrottleEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bAutoAerialRotationEnabled) == 3, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bAutoAerialRotationEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bAutoUprightEnabled) == 4, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bAutoUprightEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bDraftingEnabled) == 5, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bDraftingEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bDriftEnabled) == 6, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bDriftEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bDriftBoostEnabled) == 7, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bDriftBoostEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bInfiniteUnderthrustEnabled) == 8, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bInfiniteUnderthrustEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bJumpEnabled) == 9, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bJumpEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bKickflipEnabled) == 10, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bKickflipEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bOversteerEnabled) == 11, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bOversteerEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bReattachmentEnabled) == 12, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bReattachmentEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bStartlineBoostEnabled) == 13, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bStartlineBoostEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bStrafeEnabled) == 14, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bStrafeEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bTurboEnabled) == 15, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bTurboEnabled");
static_assert(offsetof(FFortDelMarVehicleAbilityConfig, bUnderthrustEnabled) == 16, "Offset mismatch for FFortDelMarVehicleAbilityConfig::bUnderthrustEnabled");

// /Script/FortDelMarVehicle.FortDelMarVehicleAxleConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleAxleConfig
{
public:
    float TranslateX; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TranslateY; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TranslateZ; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float WheelRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RestDistanceZ; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Suspension[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleAxleConfig, TranslateX) == 0, "Offset mismatch for FFortDelMarVehicleAxleConfig::TranslateX");
static_assert(offsetof(FFortDelMarVehicleAxleConfig, TranslateY) == 4, "Offset mismatch for FFortDelMarVehicleAxleConfig::TranslateY");
static_assert(offsetof(FFortDelMarVehicleAxleConfig, TranslateZ) == 8, "Offset mismatch for FFortDelMarVehicleAxleConfig::TranslateZ");
static_assert(offsetof(FFortDelMarVehicleAxleConfig, WheelRadius) == 12, "Offset mismatch for FFortDelMarVehicleAxleConfig::WheelRadius");
static_assert(offsetof(FFortDelMarVehicleAxleConfig, RestDistanceZ) == 16, "Offset mismatch for FFortDelMarVehicleAxleConfig::RestDistanceZ");
static_assert(offsetof(FFortDelMarVehicleAxleConfig, Suspension) == 20, "Offset mismatch for FFortDelMarVehicleAxleConfig::Suspension");

// /Script/FortDelMarVehicle.FortDelMarVehicleCachedContact
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleCachedContact
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Impulse[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t DeltaVelocity[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t bVehicleContact; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriveableContact; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0062
    TWeakObjectPtr<void> Component; // 0x0064 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortDelMarVehicleCachedContact, Location) == 0, "Offset mismatch for FFortDelMarVehicleCachedContact::Location");
static_assert(offsetof(FFortDelMarVehicleCachedContact, Normal) == 24, "Offset mismatch for FFortDelMarVehicleCachedContact::Normal");
static_assert(offsetof(FFortDelMarVehicleCachedContact, Impulse) == 48, "Offset mismatch for FFortDelMarVehicleCachedContact::Impulse");
static_assert(offsetof(FFortDelMarVehicleCachedContact, DeltaVelocity) == 72, "Offset mismatch for FFortDelMarVehicleCachedContact::DeltaVelocity");
static_assert(offsetof(FFortDelMarVehicleCachedContact, bVehicleContact) == 96, "Offset mismatch for FFortDelMarVehicleCachedContact::bVehicleContact");
static_assert(offsetof(FFortDelMarVehicleCachedContact, bDriveableContact) == 97, "Offset mismatch for FFortDelMarVehicleCachedContact::bDriveableContact");
static_assert(offsetof(FFortDelMarVehicleCachedContact, Component) == 100, "Offset mismatch for FFortDelMarVehicleCachedContact::Component");

// /Script/FortDelMarVehicle.FortDelMarVehicleCameraSettings
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleCameraSettings
{
public:
    float FOV; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Pitch; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Distance; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Stiffness; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SwivelSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float TransitionSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleCameraSettings, FOV) == 0, "Offset mismatch for FFortDelMarVehicleCameraSettings::FOV");
static_assert(offsetof(FFortDelMarVehicleCameraSettings, Height) == 4, "Offset mismatch for FFortDelMarVehicleCameraSettings::Height");
static_assert(offsetof(FFortDelMarVehicleCameraSettings, Pitch) == 8, "Offset mismatch for FFortDelMarVehicleCameraSettings::Pitch");
static_assert(offsetof(FFortDelMarVehicleCameraSettings, Distance) == 12, "Offset mismatch for FFortDelMarVehicleCameraSettings::Distance");
static_assert(offsetof(FFortDelMarVehicleCameraSettings, Stiffness) == 16, "Offset mismatch for FFortDelMarVehicleCameraSettings::Stiffness");
static_assert(offsetof(FFortDelMarVehicleCameraSettings, SwivelSpeed) == 20, "Offset mismatch for FFortDelMarVehicleCameraSettings::SwivelSpeed");
static_assert(offsetof(FFortDelMarVehicleCameraSettings, TransitionSpeed) == 24, "Offset mismatch for FFortDelMarVehicleCameraSettings::TransitionSpeed");

// /Script/FortDelMarVehicle.FortDelMarVehicleCollisionConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleCollisionConfig
{
public:
    float MinWallAngleDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinTimeBetweenSpeedLossHits; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForTargetSpeedReduction; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t SpeedReductionPercentageCurve[0x50]; // 0x0010 (Size: 0x50, Type: StructProperty)
    std::uint8_t AerialSpeedReductionPercentageCurve[0x50]; // 0x0060 (Size: 0x50, Type: StructProperty)
    std::uint8_t WallTargetRedirectAngleDegreesCurve[0x50]; // 0x00B0 (Size: 0x50, Type: StructProperty)
    float WallTargetRedirectPercent; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float WallTargetRedirectDriftPercent; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float WallDriftHeadOnThresholdDegrees; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float WallHeadOnDriftRedirectAngleDegrees; // 0x010C (Size: 0x4, Type: FloatProperty)
    float WallTargetRedirectHeadOnDriftPercent; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float MinGroundedDemolitionSpeed; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float MinAerialDemolitionSpeed; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float MaxGroundedDemolitionAngleDegrees; // 0x011C (Size: 0x4, Type: FloatProperty)
    float MaxAerialDemolitionAngleDegrees; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float ParallelCollisionThresholdDegrees; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float HeadOnCollisionThresholdDegrees; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float BumperToBumperThresholdDegrees; // 0x012C (Size: 0x4, Type: FloatProperty)
    float ContactNormalToVehicleRightThresholdDegrees; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TrackTraceChannel; // 0x0134 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortDelMarVehicleCollisionConfig, MinWallAngleDegrees) == 0, "Offset mismatch for FFortDelMarVehicleCollisionConfig::MinWallAngleDegrees");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, MinTimeBetweenSpeedLossHits) == 4, "Offset mismatch for FFortDelMarVehicleCollisionConfig::MinTimeBetweenSpeedLossHits");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, MinSpeedForTargetSpeedReduction) == 8, "Offset mismatch for FFortDelMarVehicleCollisionConfig::MinSpeedForTargetSpeedReduction");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, SpeedReductionPercentageCurve) == 16, "Offset mismatch for FFortDelMarVehicleCollisionConfig::SpeedReductionPercentageCurve");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, AerialSpeedReductionPercentageCurve) == 96, "Offset mismatch for FFortDelMarVehicleCollisionConfig::AerialSpeedReductionPercentageCurve");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, WallTargetRedirectAngleDegreesCurve) == 176, "Offset mismatch for FFortDelMarVehicleCollisionConfig::WallTargetRedirectAngleDegreesCurve");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, WallTargetRedirectPercent) == 256, "Offset mismatch for FFortDelMarVehicleCollisionConfig::WallTargetRedirectPercent");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, WallTargetRedirectDriftPercent) == 260, "Offset mismatch for FFortDelMarVehicleCollisionConfig::WallTargetRedirectDriftPercent");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, WallDriftHeadOnThresholdDegrees) == 264, "Offset mismatch for FFortDelMarVehicleCollisionConfig::WallDriftHeadOnThresholdDegrees");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, WallHeadOnDriftRedirectAngleDegrees) == 268, "Offset mismatch for FFortDelMarVehicleCollisionConfig::WallHeadOnDriftRedirectAngleDegrees");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, WallTargetRedirectHeadOnDriftPercent) == 272, "Offset mismatch for FFortDelMarVehicleCollisionConfig::WallTargetRedirectHeadOnDriftPercent");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, MinGroundedDemolitionSpeed) == 276, "Offset mismatch for FFortDelMarVehicleCollisionConfig::MinGroundedDemolitionSpeed");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, MinAerialDemolitionSpeed) == 280, "Offset mismatch for FFortDelMarVehicleCollisionConfig::MinAerialDemolitionSpeed");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, MaxGroundedDemolitionAngleDegrees) == 284, "Offset mismatch for FFortDelMarVehicleCollisionConfig::MaxGroundedDemolitionAngleDegrees");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, MaxAerialDemolitionAngleDegrees) == 288, "Offset mismatch for FFortDelMarVehicleCollisionConfig::MaxAerialDemolitionAngleDegrees");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, ParallelCollisionThresholdDegrees) == 292, "Offset mismatch for FFortDelMarVehicleCollisionConfig::ParallelCollisionThresholdDegrees");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, HeadOnCollisionThresholdDegrees) == 296, "Offset mismatch for FFortDelMarVehicleCollisionConfig::HeadOnCollisionThresholdDegrees");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, BumperToBumperThresholdDegrees) == 300, "Offset mismatch for FFortDelMarVehicleCollisionConfig::BumperToBumperThresholdDegrees");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, ContactNormalToVehicleRightThresholdDegrees) == 304, "Offset mismatch for FFortDelMarVehicleCollisionConfig::ContactNormalToVehicleRightThresholdDegrees");
static_assert(offsetof(FFortDelMarVehicleCollisionConfig, TrackTraceChannel) == 308, "Offset mismatch for FFortDelMarVehicleCollisionConfig::TrackTraceChannel");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_AutoUpright
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_AutoUpright
{
public:
    float MaxWorldContactDegreeThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_AutoUpright, MaxWorldContactDegreeThreshold) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_AutoUpright::MaxWorldContactDegreeThreshold");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_Collision
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_Collision
{
public:
    std::uint8_t bCollisionDemosEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWallRicochetEnabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNonTrackVelocityRedirectEnabled; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float DemoSpeedScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_Collision, bCollisionDemosEnabled) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_Collision::bCollisionDemosEnabled");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Collision, bWallRicochetEnabled) == 1, "Offset mismatch for FFortDelMarVehicleConfigOverride_Collision::bWallRicochetEnabled");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Collision, bNonTrackVelocityRedirectEnabled) == 2, "Offset mismatch for FFortDelMarVehicleConfigOverride_Collision::bNonTrackVelocityRedirectEnabled");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Collision, DemoSpeedScalar) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_Collision::DemoSpeedScalar");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_Drift
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_Drift
{
public:
    float SpeedCapScalar; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AccelerationRateScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DecelerationRateScalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_Drift, SpeedCapScalar) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_Drift::SpeedCapScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Drift, AccelerationRateScalar) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_Drift::AccelerationRateScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Drift, DecelerationRateScalar) == 8, "Offset mismatch for FFortDelMarVehicleConfigOverride_Drift::DecelerationRateScalar");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_DriftBoost
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_DriftBoost
{
public:
    float MaxBonusSpeedScalar; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DurationScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PotentialRateScalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_DriftBoost, MaxBonusSpeedScalar) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_DriftBoost::MaxBonusSpeedScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_DriftBoost, DurationScalar) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_DriftBoost::DurationScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_DriftBoost, PotentialRateScalar) == 8, "Offset mismatch for FFortDelMarVehicleConfigOverride_DriftBoost::PotentialRateScalar");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_Drive
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_Drive
{
public:
    float MaxBaseForwardSpeedScalar; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AccelerationScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DecelerationScalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BrakeScalar; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxAerialSpeedScalar; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_Drive, MaxBaseForwardSpeedScalar) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_Drive::MaxBaseForwardSpeedScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Drive, AccelerationScalar) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_Drive::AccelerationScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Drive, DecelerationScalar) == 8, "Offset mismatch for FFortDelMarVehicleConfigOverride_Drive::DecelerationScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Drive, BrakeScalar) == 12, "Offset mismatch for FFortDelMarVehicleConfigOverride_Drive::BrakeScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Drive, MaxAerialSpeedScalar) == 16, "Offset mismatch for FFortDelMarVehicleConfigOverride_Drive::MaxAerialSpeedScalar");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_Gravity
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_Gravity
{
public:
    float CounterGravityContactDegreeThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AerialGravityScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_Gravity, CounterGravityContactDegreeThreshold) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_Gravity::CounterGravityContactDegreeThreshold");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Gravity, AerialGravityScalar) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_Gravity::AerialGravityScalar");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_Jump
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_Jump
{
public:
    float JumpImpulseScalar; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_Jump, JumpImpulseScalar) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_Jump::JumpImpulseScalar");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_Kickflip
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_Kickflip
{
public:
    std::uint8_t bResetChargesOnLanding; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t NumActivationCharges; // 0x0004 (Size: 0x4, Type: IntProperty)
    float CooldownSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_Kickflip, bResetChargesOnLanding) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_Kickflip::bResetChargesOnLanding");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Kickflip, NumActivationCharges) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_Kickflip::NumActivationCharges");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Kickflip, CooldownSeconds) == 8, "Offset mismatch for FFortDelMarVehicleConfigOverride_Kickflip::CooldownSeconds");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_Oversteer
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_Oversteer
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float AccumulatedSteerThresholdScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_Oversteer, bEnabled) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_Oversteer::bEnabled");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Oversteer, AccumulatedSteerThresholdScalar) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_Oversteer::AccumulatedSteerThresholdScalar");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_SelfDemolish
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_SelfDemolish
{
public:
    std::uint8_t bSelfDemolishEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float RequiredDemolishActionDuration; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_SelfDemolish, bSelfDemolishEnabled) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_SelfDemolish::bSelfDemolishEnabled");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_SelfDemolish, RequiredDemolishActionDuration) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_SelfDemolish::RequiredDemolishActionDuration");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_Terrain
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_Terrain
{
public:
    std::uint8_t bDemolishInWater; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float WaterDestructionDelay; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_Terrain, bDemolishInWater) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_Terrain::bDemolishInWater");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Terrain, WaterDestructionDelay) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_Terrain::WaterDestructionDelay");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_Turbo
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_Turbo
{
public:
    float StartingVehicleCharges; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ChargeRegenRateScalar; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DriftBoostTurboGenerationScalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TurboSpeedScalar; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxActiveTimeSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SuccessfulBonusZoneHitSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_Turbo, StartingVehicleCharges) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_Turbo::StartingVehicleCharges");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Turbo, ChargeRegenRateScalar) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_Turbo::ChargeRegenRateScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Turbo, DriftBoostTurboGenerationScalar) == 8, "Offset mismatch for FFortDelMarVehicleConfigOverride_Turbo::DriftBoostTurboGenerationScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Turbo, TurboSpeedScalar) == 12, "Offset mismatch for FFortDelMarVehicleConfigOverride_Turbo::TurboSpeedScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Turbo, MaxActiveTimeSeconds) == 16, "Offset mismatch for FFortDelMarVehicleConfigOverride_Turbo::MaxActiveTimeSeconds");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Turbo, SuccessfulBonusZoneHitSeconds) == 20, "Offset mismatch for FFortDelMarVehicleConfigOverride_Turbo::SuccessfulBonusZoneHitSeconds");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverride_Underthrust
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverride_Underthrust
{
public:
    float StartingTankPercentage; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ConsumptionRateMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReplenishTankOnLanding; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplenishTankOverTime; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000A
    float TankReplenishDelaySeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TankReplenishRateMultiplier; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float AccelScalar; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxUpwardSpeedScalar; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverride_Underthrust, StartingTankPercentage) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverride_Underthrust::StartingTankPercentage");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Underthrust, ConsumptionRateMultiplier) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverride_Underthrust::ConsumptionRateMultiplier");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Underthrust, bReplenishTankOnLanding) == 8, "Offset mismatch for FFortDelMarVehicleConfigOverride_Underthrust::bReplenishTankOnLanding");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Underthrust, bReplenishTankOverTime) == 9, "Offset mismatch for FFortDelMarVehicleConfigOverride_Underthrust::bReplenishTankOverTime");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Underthrust, TankReplenishDelaySeconds) == 12, "Offset mismatch for FFortDelMarVehicleConfigOverride_Underthrust::TankReplenishDelaySeconds");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Underthrust, TankReplenishRateMultiplier) == 16, "Offset mismatch for FFortDelMarVehicleConfigOverride_Underthrust::TankReplenishRateMultiplier");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Underthrust, AccelScalar) == 20, "Offset mismatch for FFortDelMarVehicleConfigOverride_Underthrust::AccelScalar");
static_assert(offsetof(FFortDelMarVehicleConfigOverride_Underthrust, MaxUpwardSpeedScalar) == 24, "Offset mismatch for FFortDelMarVehicleConfigOverride_Underthrust::MaxUpwardSpeedScalar");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigOverrides
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfigOverrides
{
public:
    std::uint8_t bValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t AutoUpright[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t Collision[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Drift[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t DriftBoost[0xC]; // 0x001C (Size: 0xC, Type: StructProperty)
    std::uint8_t Drive[0x14]; // 0x0028 (Size: 0x14, Type: StructProperty)
    std::uint8_t Gravity[0x8]; // 0x003C (Size: 0x8, Type: StructProperty)
    std::uint8_t Jump[0x4]; // 0x0044 (Size: 0x4, Type: StructProperty)
    std::uint8_t Kickflip[0xC]; // 0x0048 (Size: 0xC, Type: StructProperty)
    std::uint8_t Oversteer[0x8]; // 0x0054 (Size: 0x8, Type: StructProperty)
    std::uint8_t Terrain[0x8]; // 0x005C (Size: 0x8, Type: StructProperty)
    std::uint8_t Turbo[0x18]; // 0x0064 (Size: 0x18, Type: StructProperty)
    std::uint8_t Underthrust[0x1C]; // 0x007C (Size: 0x1C, Type: StructProperty)
    std::uint8_t SelfDemolish[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfigOverrides, bValid) == 0, "Offset mismatch for FFortDelMarVehicleConfigOverrides::bValid");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, AutoUpright) == 4, "Offset mismatch for FFortDelMarVehicleConfigOverrides::AutoUpright");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, Collision) == 8, "Offset mismatch for FFortDelMarVehicleConfigOverrides::Collision");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, Drift) == 16, "Offset mismatch for FFortDelMarVehicleConfigOverrides::Drift");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, DriftBoost) == 28, "Offset mismatch for FFortDelMarVehicleConfigOverrides::DriftBoost");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, Drive) == 40, "Offset mismatch for FFortDelMarVehicleConfigOverrides::Drive");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, Gravity) == 60, "Offset mismatch for FFortDelMarVehicleConfigOverrides::Gravity");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, Jump) == 68, "Offset mismatch for FFortDelMarVehicleConfigOverrides::Jump");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, Kickflip) == 72, "Offset mismatch for FFortDelMarVehicleConfigOverrides::Kickflip");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, Oversteer) == 84, "Offset mismatch for FFortDelMarVehicleConfigOverrides::Oversteer");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, Terrain) == 92, "Offset mismatch for FFortDelMarVehicleConfigOverrides::Terrain");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, Turbo) == 100, "Offset mismatch for FFortDelMarVehicleConfigOverrides::Turbo");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, Underthrust) == 124, "Offset mismatch for FFortDelMarVehicleConfigOverrides::Underthrust");
static_assert(offsetof(FFortDelMarVehicleConfigOverrides, SelfDemolish) == 152, "Offset mismatch for FFortDelMarVehicleConfigOverrides::SelfDemolish");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_AirControl
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_AirControl
{
public:
    float MaxPitchAdjustmentForwardSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t LateralTurnRateCurve[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    float UnderthrustTurnRate; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowRedirectDuringKickflip; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowVerticalRedirectDuringVerticalKickflip; // 0x005D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x005E
    float LateralKickflipScalar; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float VerticalTurnRate; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float VerticalTurnRateAboveHorizon; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float MinSteerInput; // 0x006C (Size: 0x4, Type: FloatProperty)
    float MinPitchVerticalDegreesFromWorldDown; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float MaxPitchVerticalDegreesFromWorldDown; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAerialDivingBonusEnabled; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0079
    float MinPitchForAerialDivingBonus; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MaxAerialDivingBonusSpeed; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MinAerialDivingBonusSpeed; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float AerialDivingBonusSpeedChangeRate; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float AerialDivingBonusSpeedDecayRate; // 0x008C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, MaxPitchAdjustmentForwardSpeed) == 0, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::MaxPitchAdjustmentForwardSpeed");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, LateralTurnRateCurve) == 8, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::LateralTurnRateCurve");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, UnderthrustTurnRate) == 88, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::UnderthrustTurnRate");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, bAllowRedirectDuringKickflip) == 92, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::bAllowRedirectDuringKickflip");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, bAllowVerticalRedirectDuringVerticalKickflip) == 93, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::bAllowVerticalRedirectDuringVerticalKickflip");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, LateralKickflipScalar) == 96, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::LateralKickflipScalar");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, VerticalTurnRate) == 100, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::VerticalTurnRate");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, VerticalTurnRateAboveHorizon) == 104, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::VerticalTurnRateAboveHorizon");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, MinSteerInput) == 108, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::MinSteerInput");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, MinPitchVerticalDegreesFromWorldDown) == 112, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::MinPitchVerticalDegreesFromWorldDown");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, MaxPitchVerticalDegreesFromWorldDown) == 116, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::MaxPitchVerticalDegreesFromWorldDown");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, bAerialDivingBonusEnabled) == 120, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::bAerialDivingBonusEnabled");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, MinPitchForAerialDivingBonus) == 124, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::MinPitchForAerialDivingBonus");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, MaxAerialDivingBonusSpeed) == 128, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::MaxAerialDivingBonusSpeed");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, MinAerialDivingBonusSpeed) == 132, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::MinAerialDivingBonusSpeed");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, AerialDivingBonusSpeedChangeRate) == 136, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::AerialDivingBonusSpeedChangeRate");
static_assert(offsetof(FFortDelMarVehicleConfig_AirControl, AerialDivingBonusSpeedDecayRate) == 140, "Offset mismatch for FFortDelMarVehicleConfig_AirControl::AerialDivingBonusSpeedDecayRate");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_AirFreestyle
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_AirFreestyle
{
public:
    std::uint8_t TorqueAccel[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t TorqueDamping[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_AirFreestyle, TorqueAccel) == 0, "Offset mismatch for FFortDelMarVehicleConfig_AirFreestyle::TorqueAccel");
static_assert(offsetof(FFortDelMarVehicleConfig_AirFreestyle, TorqueDamping) == 24, "Offset mismatch for FFortDelMarVehicleConfig_AirFreestyle::TorqueDamping");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_AirThrottle
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_AirThrottle
{
public:
    std::uint8_t AccelerationScalarCurve[0x50]; // 0x0000 (Size: 0x50, Type: StructProperty)
    float AerialSpeedCap; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float OverCapSpeedLossPerSecond; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float AerialSlowdownImmunitySeconds; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyNoThrottleSlowdown; // 0x005C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_AirThrottle, AccelerationScalarCurve) == 0, "Offset mismatch for FFortDelMarVehicleConfig_AirThrottle::AccelerationScalarCurve");
static_assert(offsetof(FFortDelMarVehicleConfig_AirThrottle, AerialSpeedCap) == 80, "Offset mismatch for FFortDelMarVehicleConfig_AirThrottle::AerialSpeedCap");
static_assert(offsetof(FFortDelMarVehicleConfig_AirThrottle, OverCapSpeedLossPerSecond) == 84, "Offset mismatch for FFortDelMarVehicleConfig_AirThrottle::OverCapSpeedLossPerSecond");
static_assert(offsetof(FFortDelMarVehicleConfig_AirThrottle, AerialSlowdownImmunitySeconds) == 88, "Offset mismatch for FFortDelMarVehicleConfig_AirThrottle::AerialSlowdownImmunitySeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_AirThrottle, bApplyNoThrottleSlowdown) == 92, "Offset mismatch for FFortDelMarVehicleConfig_AirThrottle::bApplyNoThrottleSlowdown");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_AutoAerialRotation
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_AutoAerialRotation
{
public:
    std::uint8_t StabilizationDampingFactor[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t StabilizationFactor[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float MaxUpsideDownDegreesForForcedRoll; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float IdleRotationThreshold; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float UpsideDownRollTorque; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float UpsideDownRollDamping; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MinRollInput; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float SteerRollOffsetDegrees; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MinPitchInput; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float MaxUserPitchOffsetDegrees; // 0x004C (Size: 0x4, Type: FloatProperty)
    float LateralPitchOffsetDegrees; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float UnderthrustPitchDegrees; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float MinThrottleInput; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float MaxUserThrottleOffsetDegrees; // 0x005C (Size: 0x4, Type: FloatProperty)
    float YawTorque; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0064
    std::uint8_t MaxRotationSpeed[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    float MinApproachTargetScalar; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MinForwardSpeedForYawRotation; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float MinSteerInputForForwardStateTurning; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float ForwardStateTurnRate; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLandingAssistanceEnabled; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LandingCollisionChannel; // 0x0091 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0092
    float LandingDetectionSeconds; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float MinLandingDetectionDistance; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float LandingSurfaceNormalMaxDegrees; // 0x009C (Size: 0x4, Type: FloatProperty)
    float LandingRotationAmplifier; // 0x00A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, StabilizationDampingFactor) == 0, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::StabilizationDampingFactor");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, StabilizationFactor) == 24, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::StabilizationFactor");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MaxUpsideDownDegreesForForcedRoll) == 48, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MaxUpsideDownDegreesForForcedRoll");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, IdleRotationThreshold) == 52, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::IdleRotationThreshold");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, UpsideDownRollTorque) == 56, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::UpsideDownRollTorque");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, UpsideDownRollDamping) == 60, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::UpsideDownRollDamping");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MinRollInput) == 64, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MinRollInput");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, SteerRollOffsetDegrees) == 68, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::SteerRollOffsetDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MinPitchInput) == 72, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MinPitchInput");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MaxUserPitchOffsetDegrees) == 76, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MaxUserPitchOffsetDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, LateralPitchOffsetDegrees) == 80, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::LateralPitchOffsetDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, UnderthrustPitchDegrees) == 84, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::UnderthrustPitchDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MinThrottleInput) == 88, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MinThrottleInput");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MaxUserThrottleOffsetDegrees) == 92, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MaxUserThrottleOffsetDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, YawTorque) == 96, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::YawTorque");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MaxRotationSpeed) == 104, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MaxRotationSpeed");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MinApproachTargetScalar) == 128, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MinApproachTargetScalar");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MinForwardSpeedForYawRotation) == 132, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MinForwardSpeedForYawRotation");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MinSteerInputForForwardStateTurning) == 136, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MinSteerInputForForwardStateTurning");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, ForwardStateTurnRate) == 140, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::ForwardStateTurnRate");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, bLandingAssistanceEnabled) == 144, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::bLandingAssistanceEnabled");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, LandingCollisionChannel) == 145, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::LandingCollisionChannel");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, LandingDetectionSeconds) == 148, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::LandingDetectionSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, MinLandingDetectionDistance) == 152, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::MinLandingDetectionDistance");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, LandingSurfaceNormalMaxDegrees) == 156, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::LandingSurfaceNormalMaxDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoAerialRotation, LandingRotationAmplifier) == 160, "Offset mismatch for FFortDelMarVehicleConfig_AutoAerialRotation::LandingRotationAmplifier");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_AutoUpright
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_AutoUpright
{
public:
    float RotationTorque; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RotationDamping; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinActiveSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinActiveSecondsGrounded; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WheelsOnGroundChangedDelaySeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClearAngularVelocity; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    float MinDegreesFromVehicleUpThreshold; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MinThrottleForWheelRotation; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowActiveStateOnGround; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_AutoUpright, RotationTorque) == 0, "Offset mismatch for FFortDelMarVehicleConfig_AutoUpright::RotationTorque");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoUpright, RotationDamping) == 4, "Offset mismatch for FFortDelMarVehicleConfig_AutoUpright::RotationDamping");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoUpright, MinActiveSeconds) == 8, "Offset mismatch for FFortDelMarVehicleConfig_AutoUpright::MinActiveSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoUpright, MinActiveSecondsGrounded) == 12, "Offset mismatch for FFortDelMarVehicleConfig_AutoUpright::MinActiveSecondsGrounded");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoUpright, WheelsOnGroundChangedDelaySeconds) == 16, "Offset mismatch for FFortDelMarVehicleConfig_AutoUpright::WheelsOnGroundChangedDelaySeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoUpright, bClearAngularVelocity) == 20, "Offset mismatch for FFortDelMarVehicleConfig_AutoUpright::bClearAngularVelocity");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoUpright, MinDegreesFromVehicleUpThreshold) == 24, "Offset mismatch for FFortDelMarVehicleConfig_AutoUpright::MinDegreesFromVehicleUpThreshold");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoUpright, MinThrottleForWheelRotation) == 28, "Offset mismatch for FFortDelMarVehicleConfig_AutoUpright::MinThrottleForWheelRotation");
static_assert(offsetof(FFortDelMarVehicleConfig_AutoUpright, bAllowActiveStateOnGround) == 32, "Offset mismatch for FFortDelMarVehicleConfig_AutoUpright::bAllowActiveStateOnGround");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_Gravity
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_Gravity
{
public:
    float ForceScaleCeiling; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ForceScaleWall; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ForceScaleGround; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AerialGravityForceMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float CoyoteTimeDuration; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinWheelsForCounterGravityMeasures; // 0x0014 (Size: 0x4, Type: IntProperty)
    float MaxCounterGravitySpringVarianceDegrees; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCounterGravityInKickflipSuctionDirection; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_Gravity, ForceScaleCeiling) == 0, "Offset mismatch for FFortDelMarVehicleConfig_Gravity::ForceScaleCeiling");
static_assert(offsetof(FFortDelMarVehicleConfig_Gravity, ForceScaleWall) == 4, "Offset mismatch for FFortDelMarVehicleConfig_Gravity::ForceScaleWall");
static_assert(offsetof(FFortDelMarVehicleConfig_Gravity, ForceScaleGround) == 8, "Offset mismatch for FFortDelMarVehicleConfig_Gravity::ForceScaleGround");
static_assert(offsetof(FFortDelMarVehicleConfig_Gravity, AerialGravityForceMultiplier) == 12, "Offset mismatch for FFortDelMarVehicleConfig_Gravity::AerialGravityForceMultiplier");
static_assert(offsetof(FFortDelMarVehicleConfig_Gravity, CoyoteTimeDuration) == 16, "Offset mismatch for FFortDelMarVehicleConfig_Gravity::CoyoteTimeDuration");
static_assert(offsetof(FFortDelMarVehicleConfig_Gravity, MinWheelsForCounterGravityMeasures) == 20, "Offset mismatch for FFortDelMarVehicleConfig_Gravity::MinWheelsForCounterGravityMeasures");
static_assert(offsetof(FFortDelMarVehicleConfig_Gravity, MaxCounterGravitySpringVarianceDegrees) == 24, "Offset mismatch for FFortDelMarVehicleConfig_Gravity::MaxCounterGravitySpringVarianceDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_Gravity, bCounterGravityInKickflipSuctionDirection) == 28, "Offset mismatch for FFortDelMarVehicleConfig_Gravity::bCounterGravityInKickflipSuctionDirection");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_Jump
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_Jump
{
public:
    float MinJumpTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxJumpTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float JumpVelocity; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ForwardVelocity; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PitchTorque; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float EndThrustForce; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_Jump, MinJumpTime) == 0, "Offset mismatch for FFortDelMarVehicleConfig_Jump::MinJumpTime");
static_assert(offsetof(FFortDelMarVehicleConfig_Jump, MaxJumpTime) == 4, "Offset mismatch for FFortDelMarVehicleConfig_Jump::MaxJumpTime");
static_assert(offsetof(FFortDelMarVehicleConfig_Jump, JumpVelocity) == 8, "Offset mismatch for FFortDelMarVehicleConfig_Jump::JumpVelocity");
static_assert(offsetof(FFortDelMarVehicleConfig_Jump, ForwardVelocity) == 12, "Offset mismatch for FFortDelMarVehicleConfig_Jump::ForwardVelocity");
static_assert(offsetof(FFortDelMarVehicleConfig_Jump, PitchTorque) == 16, "Offset mismatch for FFortDelMarVehicleConfig_Jump::PitchTorque");
static_assert(offsetof(FFortDelMarVehicleConfig_Jump, EndThrustForce) == 20, "Offset mismatch for FFortDelMarVehicleConfig_Jump::EndThrustForce");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_Kickflip
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_Kickflip
{
public:
    float DirectionalSensitivity; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SecondaryDirectionalSensitivity; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowDiagonalKickDirection; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t NumWheelsForLanding; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t NumActivationCharges; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bResetChargesOnLanding; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    float MinActiveSecondsToReactivate; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MinActiveTime; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxActiveLateralTime; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxActiveUpwardTime; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MaxActiveDownwardTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float CooldownSeconds; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowGroundedKickflips; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0031
    float GroundedKickflipForce; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float LateralVelocity; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x003C
    std::uint8_t LateralVelocityScalarCurve[0x50]; // 0x0040 (Size: 0x50, Type: StructProperty)
    float MinForwardSpeedForLateralScalar; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float MaxLateralVelocityCancelled; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float UpwardVerticalVelocity; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float DownwardVerticalVelocity; // 0x009C (Size: 0x4, Type: FloatProperty)
    float LateralVerticalForce; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float RotationDamping; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float RotationTorque; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float RotationTorqueIncomingCollision; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float MinSpeedToRotateYaw; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalYawLandingDegrees; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float MaxLateralYawLandingDegrees; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalNormalLandingDegrees; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float MaxLateralNormalLandingDegrees; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MinLongRollTimeCheck; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MinLongRollTimeCheckDownwardKick; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float MaxLongRollDegrees; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float MinDegreesToCompleteRoll; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float FastTorqueDistanceCheck; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseStartingDirectionWhenLanding; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00D9
    std::int32_t PredictionTickInterval; // 0x00DC (Size: 0x4, Type: IntProperty)
    float MaxSimulationRedirectSeconds; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float MaxSimulationDistanceLateral; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float MaxSimulationDistanceUpward; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float MaxSimulationDistanceDownward; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplySuctionToSurfaces; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x00F1
    float SuctionVelocity; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float MaxSuctionPerSecond; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float SuctionDistanceCheck; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float MaxAdditionalVelocitySuctionDistance; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float SuctionRegulationVelocity; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float SuctionRegulationDistance; // 0x0108 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SuctionChannel; // 0x010C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0006[0x3]; // 0x010D
    float MaxForwardVelocityDegreeDifference; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForPrimaryForwardRotation; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float MaxGroundedDirectionDegrees; // 0x0118 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, DirectionalSensitivity) == 0, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::DirectionalSensitivity");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, SecondaryDirectionalSensitivity) == 4, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::SecondaryDirectionalSensitivity");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, bAllowDiagonalKickDirection) == 8, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::bAllowDiagonalKickDirection");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, NumWheelsForLanding) == 12, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::NumWheelsForLanding");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, NumActivationCharges) == 16, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::NumActivationCharges");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, bResetChargesOnLanding) == 20, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::bResetChargesOnLanding");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MinActiveSecondsToReactivate) == 24, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MinActiveSecondsToReactivate");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MinActiveTime) == 28, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MinActiveTime");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxActiveLateralTime) == 32, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxActiveLateralTime");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxActiveUpwardTime) == 36, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxActiveUpwardTime");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxActiveDownwardTime) == 40, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxActiveDownwardTime");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, CooldownSeconds) == 44, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::CooldownSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, bAllowGroundedKickflips) == 48, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::bAllowGroundedKickflips");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, GroundedKickflipForce) == 52, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::GroundedKickflipForce");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, LateralVelocity) == 56, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::LateralVelocity");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, LateralVelocityScalarCurve) == 64, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::LateralVelocityScalarCurve");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MinForwardSpeedForLateralScalar) == 144, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MinForwardSpeedForLateralScalar");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxLateralVelocityCancelled) == 148, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxLateralVelocityCancelled");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, UpwardVerticalVelocity) == 152, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::UpwardVerticalVelocity");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, DownwardVerticalVelocity) == 156, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::DownwardVerticalVelocity");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, LateralVerticalForce) == 160, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::LateralVerticalForce");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, RotationDamping) == 164, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::RotationDamping");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, RotationTorque) == 168, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::RotationTorque");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, RotationTorqueIncomingCollision) == 172, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::RotationTorqueIncomingCollision");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MinSpeedToRotateYaw) == 176, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MinSpeedToRotateYaw");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxVerticalYawLandingDegrees) == 180, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxVerticalYawLandingDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxLateralYawLandingDegrees) == 184, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxLateralYawLandingDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxVerticalNormalLandingDegrees) == 188, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxVerticalNormalLandingDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxLateralNormalLandingDegrees) == 192, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxLateralNormalLandingDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MinLongRollTimeCheck) == 196, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MinLongRollTimeCheck");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MinLongRollTimeCheckDownwardKick) == 200, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MinLongRollTimeCheckDownwardKick");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxLongRollDegrees) == 204, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxLongRollDegrees");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MinDegreesToCompleteRoll) == 208, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MinDegreesToCompleteRoll");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, FastTorqueDistanceCheck) == 212, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::FastTorqueDistanceCheck");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, bUseStartingDirectionWhenLanding) == 216, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::bUseStartingDirectionWhenLanding");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, PredictionTickInterval) == 220, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::PredictionTickInterval");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxSimulationRedirectSeconds) == 224, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxSimulationRedirectSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxSimulationDistanceLateral) == 228, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxSimulationDistanceLateral");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxSimulationDistanceUpward) == 232, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxSimulationDistanceUpward");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxSimulationDistanceDownward) == 236, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxSimulationDistanceDownward");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, bApplySuctionToSurfaces) == 240, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::bApplySuctionToSurfaces");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, SuctionVelocity) == 244, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::SuctionVelocity");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxSuctionPerSecond) == 248, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxSuctionPerSecond");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, SuctionDistanceCheck) == 252, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::SuctionDistanceCheck");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxAdditionalVelocitySuctionDistance) == 256, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxAdditionalVelocitySuctionDistance");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, SuctionRegulationVelocity) == 260, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::SuctionRegulationVelocity");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, SuctionRegulationDistance) == 264, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::SuctionRegulationDistance");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, SuctionChannel) == 268, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::SuctionChannel");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxForwardVelocityDegreeDifference) == 272, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxForwardVelocityDegreeDifference");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MinSpeedForPrimaryForwardRotation) == 276, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MinSpeedForPrimaryForwardRotation");
static_assert(offsetof(FFortDelMarVehicleConfig_Kickflip, MaxGroundedDirectionDegrees) == 280, "Offset mismatch for FFortDelMarVehicleConfig_Kickflip::MaxGroundedDirectionDegrees");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_Reattachment
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_Reattachment
{
public:
    float SurfaceTraceDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ReattachmentForceAmount; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ReattachmentForceScalarCurve[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t ReattachmentChannel; // 0x0058 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_Reattachment, SurfaceTraceDistance) == 0, "Offset mismatch for FFortDelMarVehicleConfig_Reattachment::SurfaceTraceDistance");
static_assert(offsetof(FFortDelMarVehicleConfig_Reattachment, ReattachmentForceAmount) == 4, "Offset mismatch for FFortDelMarVehicleConfig_Reattachment::ReattachmentForceAmount");
static_assert(offsetof(FFortDelMarVehicleConfig_Reattachment, ReattachmentForceScalarCurve) == 8, "Offset mismatch for FFortDelMarVehicleConfig_Reattachment::ReattachmentForceScalarCurve");
static_assert(offsetof(FFortDelMarVehicleConfig_Reattachment, ReattachmentChannel) == 88, "Offset mismatch for FFortDelMarVehicleConfig_Reattachment::ReattachmentChannel");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_Rubberbanding
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_Rubberbanding
{
public:
    float MinSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxBonusSpeedLostPerSecond; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxBonusSpeedGainedPerSecond[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t MaxBonusSpeed[0x50]; // 0x0058 (Size: 0x50, Type: StructProperty)
    std::uint8_t MaxSpeed[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_Rubberbanding, MinSpeed) == 0, "Offset mismatch for FFortDelMarVehicleConfig_Rubberbanding::MinSpeed");
static_assert(offsetof(FFortDelMarVehicleConfig_Rubberbanding, MaxBonusSpeedLostPerSecond) == 4, "Offset mismatch for FFortDelMarVehicleConfig_Rubberbanding::MaxBonusSpeedLostPerSecond");
static_assert(offsetof(FFortDelMarVehicleConfig_Rubberbanding, MaxBonusSpeedGainedPerSecond) == 8, "Offset mismatch for FFortDelMarVehicleConfig_Rubberbanding::MaxBonusSpeedGainedPerSecond");
static_assert(offsetof(FFortDelMarVehicleConfig_Rubberbanding, MaxBonusSpeed) == 88, "Offset mismatch for FFortDelMarVehicleConfig_Rubberbanding::MaxBonusSpeed");
static_assert(offsetof(FFortDelMarVehicleConfig_Rubberbanding, MaxSpeed) == 168, "Offset mismatch for FFortDelMarVehicleConfig_Rubberbanding::MaxSpeed");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_SelfDemolish
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_SelfDemolish
{
public:
    std::uint8_t bSelfDemolishEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float RequiredDemolishActionDuration; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_SelfDemolish, bSelfDemolishEnabled) == 0, "Offset mismatch for FFortDelMarVehicleConfig_SelfDemolish::bSelfDemolishEnabled");
static_assert(offsetof(FFortDelMarVehicleConfig_SelfDemolish, RequiredDemolishActionDuration) == 4, "Offset mismatch for FFortDelMarVehicleConfig_SelfDemolish::RequiredDemolishActionDuration");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_StartlineBoost
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_StartlineBoost
{
public:
    float MaxBonusSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t PercentageMaxBonusSpeedEarned[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    float BoostGainSeconds; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float BoostDurationSeconds; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnforceForwardThrottle; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_StartlineBoost, MaxBonusSpeed) == 0, "Offset mismatch for FFortDelMarVehicleConfig_StartlineBoost::MaxBonusSpeed");
static_assert(offsetof(FFortDelMarVehicleConfig_StartlineBoost, PercentageMaxBonusSpeedEarned) == 8, "Offset mismatch for FFortDelMarVehicleConfig_StartlineBoost::PercentageMaxBonusSpeedEarned");
static_assert(offsetof(FFortDelMarVehicleConfig_StartlineBoost, BoostGainSeconds) == 88, "Offset mismatch for FFortDelMarVehicleConfig_StartlineBoost::BoostGainSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_StartlineBoost, BoostDurationSeconds) == 92, "Offset mismatch for FFortDelMarVehicleConfig_StartlineBoost::BoostDurationSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_StartlineBoost, bEnforceForwardThrottle) == 96, "Offset mismatch for FFortDelMarVehicleConfig_StartlineBoost::bEnforceForwardThrottle");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_Strafe
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_Strafe
{
public:
    float InitialVelocityForce; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bVelocityRelative; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float MinSteerInput; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float KeybindPressLandedBufferSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxActiveSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float RaceStartCooldownSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float CooldownSeconds; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_Strafe, InitialVelocityForce) == 0, "Offset mismatch for FFortDelMarVehicleConfig_Strafe::InitialVelocityForce");
static_assert(offsetof(FFortDelMarVehicleConfig_Strafe, bVelocityRelative) == 4, "Offset mismatch for FFortDelMarVehicleConfig_Strafe::bVelocityRelative");
static_assert(offsetof(FFortDelMarVehicleConfig_Strafe, MinSteerInput) == 8, "Offset mismatch for FFortDelMarVehicleConfig_Strafe::MinSteerInput");
static_assert(offsetof(FFortDelMarVehicleConfig_Strafe, KeybindPressLandedBufferSeconds) == 12, "Offset mismatch for FFortDelMarVehicleConfig_Strafe::KeybindPressLandedBufferSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_Strafe, MaxActiveSeconds) == 16, "Offset mismatch for FFortDelMarVehicleConfig_Strafe::MaxActiveSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_Strafe, RaceStartCooldownSeconds) == 20, "Offset mismatch for FFortDelMarVehicleConfig_Strafe::RaceStartCooldownSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_Strafe, CooldownSeconds) == 24, "Offset mismatch for FFortDelMarVehicleConfig_Strafe::CooldownSeconds");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_Terrain
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_Terrain
{
public:
    float TargetSpeedPenaltyCooldownSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumWheelsTargetSpeedPenalty; // 0x0004 (Size: 0x4, Type: IntProperty)
    float NoGripBrakeFactorWithThrottle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinForwardSpeedPercentage; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDemolishInWater; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float MaxWaterDepth; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float WaterDestructionDelay; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    TArray<void*> NonDriveableActorClasses; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_Terrain, TargetSpeedPenaltyCooldownSeconds) == 0, "Offset mismatch for FFortDelMarVehicleConfig_Terrain::TargetSpeedPenaltyCooldownSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_Terrain, NumWheelsTargetSpeedPenalty) == 4, "Offset mismatch for FFortDelMarVehicleConfig_Terrain::NumWheelsTargetSpeedPenalty");
static_assert(offsetof(FFortDelMarVehicleConfig_Terrain, NoGripBrakeFactorWithThrottle) == 8, "Offset mismatch for FFortDelMarVehicleConfig_Terrain::NoGripBrakeFactorWithThrottle");
static_assert(offsetof(FFortDelMarVehicleConfig_Terrain, MinForwardSpeedPercentage) == 12, "Offset mismatch for FFortDelMarVehicleConfig_Terrain::MinForwardSpeedPercentage");
static_assert(offsetof(FFortDelMarVehicleConfig_Terrain, bDemolishInWater) == 16, "Offset mismatch for FFortDelMarVehicleConfig_Terrain::bDemolishInWater");
static_assert(offsetof(FFortDelMarVehicleConfig_Terrain, MaxWaterDepth) == 20, "Offset mismatch for FFortDelMarVehicleConfig_Terrain::MaxWaterDepth");
static_assert(offsetof(FFortDelMarVehicleConfig_Terrain, WaterDestructionDelay) == 24, "Offset mismatch for FFortDelMarVehicleConfig_Terrain::WaterDestructionDelay");
static_assert(offsetof(FFortDelMarVehicleConfig_Terrain, NonDriveableActorClasses) == 32, "Offset mismatch for FFortDelMarVehicleConfig_Terrain::NonDriveableActorClasses");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_Underthrust
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_Underthrust
{
public:
    float UpwardAccel; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ForwardAccel; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxUpwardSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxForwardSpeed; // 0x000C (Size: 0x4, Type: FloatProperty)
    float EndThrustForce; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float StartingTankPercentage; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxThrustSeconds; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ForwardSpeedCap; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxSpeedReduction; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SpeedCapSecondsBuffer; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MinJumpActiveSecondsBeforeActivating; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x002C
    std::uint8_t FallingUpsideDownThrustDampeningPercentage[0x50]; // 0x0030 (Size: 0x50, Type: StructProperty)
    std::uint8_t PitchRatioScalarCurve[0x50]; // 0x0080 (Size: 0x50, Type: StructProperty)
    std::uint8_t bVehicleRelativeWithFreestyle; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D1
    float MinUpwardAccel; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float LateralRelativeAccel; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReplenishTankOnLanding; // 0x00DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplenishTankOverTime; // 0x00DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00DE
    float TankReplenishDelaySeconds; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float TankReplenishRatePerSecond; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, UpwardAccel) == 0, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::UpwardAccel");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, ForwardAccel) == 4, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::ForwardAccel");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, MaxUpwardSpeed) == 8, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::MaxUpwardSpeed");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, MaxForwardSpeed) == 12, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::MaxForwardSpeed");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, EndThrustForce) == 16, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::EndThrustForce");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, StartingTankPercentage) == 20, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::StartingTankPercentage");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, MaxThrustSeconds) == 24, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::MaxThrustSeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, ForwardSpeedCap) == 28, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::ForwardSpeedCap");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, MaxSpeedReduction) == 32, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::MaxSpeedReduction");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, SpeedCapSecondsBuffer) == 36, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::SpeedCapSecondsBuffer");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, MinJumpActiveSecondsBeforeActivating) == 40, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::MinJumpActiveSecondsBeforeActivating");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, FallingUpsideDownThrustDampeningPercentage) == 48, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::FallingUpsideDownThrustDampeningPercentage");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, PitchRatioScalarCurve) == 128, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::PitchRatioScalarCurve");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, bVehicleRelativeWithFreestyle) == 208, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::bVehicleRelativeWithFreestyle");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, MinUpwardAccel) == 212, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::MinUpwardAccel");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, LateralRelativeAccel) == 216, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::LateralRelativeAccel");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, bReplenishTankOnLanding) == 220, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::bReplenishTankOnLanding");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, bReplenishTankOverTime) == 221, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::bReplenishTankOverTime");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, TankReplenishDelaySeconds) == 224, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::TankReplenishDelaySeconds");
static_assert(offsetof(FFortDelMarVehicleConfig_Underthrust, TankReplenishRatePerSecond) == 228, "Offset mismatch for FFortDelMarVehicleConfig_Underthrust::TankReplenishRatePerSecond");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfig_WorldBonusSpeed
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleConfig_WorldBonusSpeed
{
public:
    TArray<void*> BonusSpeedSourceCaps; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float MaxBonusSpeedPerStack; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxStackDuration; // 0x0014 (Size: 0x4, Type: FloatProperty)
    TArray<void*> WorldBonusSpeedActors; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarVehicleConfig_WorldBonusSpeed, BonusSpeedSourceCaps) == 0, "Offset mismatch for FFortDelMarVehicleConfig_WorldBonusSpeed::BonusSpeedSourceCaps");
static_assert(offsetof(FFortDelMarVehicleConfig_WorldBonusSpeed, MaxBonusSpeedPerStack) == 16, "Offset mismatch for FFortDelMarVehicleConfig_WorldBonusSpeed::MaxBonusSpeedPerStack");
static_assert(offsetof(FFortDelMarVehicleConfig_WorldBonusSpeed, MaxStackDuration) == 20, "Offset mismatch for FFortDelMarVehicleConfig_WorldBonusSpeed::MaxStackDuration");
static_assert(offsetof(FFortDelMarVehicleConfig_WorldBonusSpeed, WorldBonusSpeedActors) == 24, "Offset mismatch for FFortDelMarVehicleConfig_WorldBonusSpeed::WorldBonusSpeedActors");

// /Script/FortDelMarVehicle.FortDelMarVehicleDraftingConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleDraftingConfig
{
public:
    float TraceDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinEligibleDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxHorizontalDegreesToDraftTarget; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalDegreesToDraftTarget; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableDynamicAngle; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t MaxBonusSpeedPercentageCurve[0x50]; // 0x0018 (Size: 0x50, Type: StructProperty)
    std::uint8_t LineOfSightChannel; // 0x0068 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float MinSpeedToStartDrafting; // 0x006C (Size: 0x4, Type: FloatProperty)
    float NumSecondsToActivateDrafting; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float NumForgivenessSeconds; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float NumGracePeriodSeconds; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float NumSecondsToMaxBonusSpeed; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MaxBonusSpeed; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float NumSpeedRemovalSeconds; // 0x0084 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleDraftingConfig, TraceDistance) == 0, "Offset mismatch for FFortDelMarVehicleDraftingConfig::TraceDistance");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, MinEligibleDistance) == 4, "Offset mismatch for FFortDelMarVehicleDraftingConfig::MinEligibleDistance");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, MaxHorizontalDegreesToDraftTarget) == 8, "Offset mismatch for FFortDelMarVehicleDraftingConfig::MaxHorizontalDegreesToDraftTarget");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, MaxVerticalDegreesToDraftTarget) == 12, "Offset mismatch for FFortDelMarVehicleDraftingConfig::MaxVerticalDegreesToDraftTarget");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, bEnableDynamicAngle) == 16, "Offset mismatch for FFortDelMarVehicleDraftingConfig::bEnableDynamicAngle");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, MaxBonusSpeedPercentageCurve) == 24, "Offset mismatch for FFortDelMarVehicleDraftingConfig::MaxBonusSpeedPercentageCurve");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, LineOfSightChannel) == 104, "Offset mismatch for FFortDelMarVehicleDraftingConfig::LineOfSightChannel");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, MinSpeedToStartDrafting) == 108, "Offset mismatch for FFortDelMarVehicleDraftingConfig::MinSpeedToStartDrafting");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, NumSecondsToActivateDrafting) == 112, "Offset mismatch for FFortDelMarVehicleDraftingConfig::NumSecondsToActivateDrafting");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, NumForgivenessSeconds) == 116, "Offset mismatch for FFortDelMarVehicleDraftingConfig::NumForgivenessSeconds");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, NumGracePeriodSeconds) == 120, "Offset mismatch for FFortDelMarVehicleDraftingConfig::NumGracePeriodSeconds");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, NumSecondsToMaxBonusSpeed) == 124, "Offset mismatch for FFortDelMarVehicleDraftingConfig::NumSecondsToMaxBonusSpeed");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, MaxBonusSpeed) == 128, "Offset mismatch for FFortDelMarVehicleDraftingConfig::MaxBonusSpeed");
static_assert(offsetof(FFortDelMarVehicleDraftingConfig, NumSpeedRemovalSeconds) == 132, "Offset mismatch for FFortDelMarVehicleDraftingConfig::NumSpeedRemovalSeconds");

// /Script/FortDelMarVehicle.FortDelMarVehicleDriftBoostConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleDriftBoostConfig
{
public:
    float MaxDriftBoostRatio; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxBonusSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BonusSpeedPercentageCurve[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    float WaitingPeriodSeconds; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float MaxDriftBoostSeconds; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PotentialDriftBoostPercentageCurve[0x50]; // 0x0060 (Size: 0x50, Type: StructProperty)
    float MaxNumActiveBonusSpeedSeconds; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x00B4
    std::uint8_t DriftBoostDurationCurve[0x50]; // 0x00B8 (Size: 0x50, Type: StructProperty)
    float BonusSpeedDecaySeconds; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float PotentialRemovalRate; // 0x010C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnforceThrottleForDriftBoost; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0111
    float QueuedBoostImpulseScalar; // 0x0114 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, MaxDriftBoostRatio) == 0, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::MaxDriftBoostRatio");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, MaxBonusSpeed) == 4, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::MaxBonusSpeed");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, BonusSpeedPercentageCurve) == 8, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::BonusSpeedPercentageCurve");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, WaitingPeriodSeconds) == 88, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::WaitingPeriodSeconds");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, MaxDriftBoostSeconds) == 92, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::MaxDriftBoostSeconds");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, PotentialDriftBoostPercentageCurve) == 96, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::PotentialDriftBoostPercentageCurve");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, MaxNumActiveBonusSpeedSeconds) == 176, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::MaxNumActiveBonusSpeedSeconds");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, DriftBoostDurationCurve) == 184, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::DriftBoostDurationCurve");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, BonusSpeedDecaySeconds) == 264, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::BonusSpeedDecaySeconds");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, PotentialRemovalRate) == 268, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::PotentialRemovalRate");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, bEnforceThrottleForDriftBoost) == 272, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::bEnforceThrottleForDriftBoost");
static_assert(offsetof(FFortDelMarVehicleDriftBoostConfig, QueuedBoostImpulseScalar) == 276, "Offset mismatch for FFortDelMarVehicleDriftBoostConfig::QueuedBoostImpulseScalar");

// /Script/FortDelMarVehicle.FortDelMarVehicleDriftConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleDriftConfig
{
public:
    float MinSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinDirectedDriftTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinInAirTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AerialDriftNoKeybindGracePeriod; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxForcedDriftTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MinKickDriftActiveSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceSteerWhenKicking; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    float MinForcedSteerWhenKicking; // 0x001C (Size: 0x4, Type: FloatProperty)
    float KickCooldownSeconds; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bActivateDriftOnStrafeEnd; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateDriftOnLanding; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateDriftOnKickflipLanding; // 0x0026 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0027
    float ActivateExitDriftTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MinSteerInput; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MinFullThrottleInput; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MinFullDriftInput; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float ForcedDriftSteer; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float InitialTorqueImpulse; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MaxAllowedGroundedSpringVarianceDegrees; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelInDriftDir; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelNoSteer; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelNotInDriftDir; // 0x004C (Size: 0x4, Type: FloatProperty)
    float TorqueAccelChangeDir; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelDampening; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelWithKick; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float TorqueAccelWithKickV2; // 0x005C (Size: 0x4, Type: FloatProperty)
    float TorqueAccelForcedDrift; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float TorqueAgainstExit; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float MaxRotationSpeedWithThrottle; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float MaxRotationSpeedNoThrottle; // 0x006C (Size: 0x4, Type: FloatProperty)
    float MaxRotationSpeedWithKick; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float MaxRotationSpeedSwapDirections; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float MinDriftDegrees; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float MaxDriftDegrees; // 0x007C (Size: 0x4, Type: FloatProperty)
    float ExitDriftDegrees; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float ApproachDistance; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float PeakForwardSpeedDegrees; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float KickRedirectRate; // 0x008C (Size: 0x4, Type: FloatProperty)
    float KickRedirectRateV2; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float ForcedDriftRedirectRate; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float MinSteerRedirectInput; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x009C
    std::uint8_t NonKickRedirectRateCurve[0x50]; // 0x00A0 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAngleCurveControlled[0x50]; // 0x00F0 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAgainstAngleCurveControlled[0x50]; // 0x0140 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAngleCurveNoSteer[0x50]; // 0x0190 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAngleCurveUncontrolled[0x50]; // 0x01E0 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAngleCurveKickback[0x50]; // 0x0230 (Size: 0x50, Type: StructProperty)
    std::uint8_t VelocityRedirectAngleCurveKickbackV2[0x50]; // 0x0280 (Size: 0x50, Type: StructProperty)
    float PeakSpeedIncreaseDegrees; // 0x02D0 (Size: 0x4, Type: FloatProperty)
    float MaxAccelSpeed; // 0x02D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AccelerationScalarCurve[0x50]; // 0x02D8 (Size: 0x50, Type: StructProperty)
    std::uint8_t AdditionalSpeedLossNoThrottle[0x50]; // 0x0328 (Size: 0x50, Type: StructProperty)
    float MaxControlledDriftRatio; // 0x0378 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x037C
    std::uint8_t ControlledSpeedCapBySlipAngle[0x50]; // 0x0380 (Size: 0x50, Type: StructProperty)
    std::uint8_t ControlledSpeedCapDecelRate[0x50]; // 0x03D0 (Size: 0x50, Type: StructProperty)
    float UncontrolledSpeedCap; // 0x0420 (Size: 0x4, Type: FloatProperty)
    float UncontrolledSpeedLoss; // 0x0424 (Size: 0x4, Type: FloatProperty)
    float ExitVelocityMaxDegrees; // 0x0428 (Size: 0x4, Type: FloatProperty)
    float ExitKickEndMaxDegrees; // 0x042C (Size: 0x4, Type: FloatProperty)
    float ExitVelocityTorqueAccel; // 0x0430 (Size: 0x4, Type: FloatProperty)
    float ExitVelocityMaxRotationSpeed; // 0x0434 (Size: 0x4, Type: FloatProperty)
    float ExitForwardMaxDegrees; // 0x0438 (Size: 0x4, Type: FloatProperty)
    float ExitForwardTorqueSteer; // 0x043C (Size: 0x4, Type: FloatProperty)
    float ExitForwardMaxRotation; // 0x0440 (Size: 0x4, Type: FloatProperty)
    float ExitForwardTargetRedirectRate; // 0x0444 (Size: 0x4, Type: FloatProperty)
    float ExitForwardRedirectRate; // 0x0448 (Size: 0x4, Type: FloatProperty)
    float MaxExitForwardLandingSpeed; // 0x044C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnforceThrottleForControlledDrift; // 0x0450 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleDriftConfig, MinSpeed) == 0, "Offset mismatch for FFortDelMarVehicleDriftConfig::MinSpeed");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MinDirectedDriftTime) == 4, "Offset mismatch for FFortDelMarVehicleDriftConfig::MinDirectedDriftTime");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MinInAirTime) == 8, "Offset mismatch for FFortDelMarVehicleDriftConfig::MinInAirTime");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, AerialDriftNoKeybindGracePeriod) == 12, "Offset mismatch for FFortDelMarVehicleDriftConfig::AerialDriftNoKeybindGracePeriod");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MaxForcedDriftTime) == 16, "Offset mismatch for FFortDelMarVehicleDriftConfig::MaxForcedDriftTime");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MinKickDriftActiveSeconds) == 20, "Offset mismatch for FFortDelMarVehicleDriftConfig::MinKickDriftActiveSeconds");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, bForceSteerWhenKicking) == 24, "Offset mismatch for FFortDelMarVehicleDriftConfig::bForceSteerWhenKicking");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MinForcedSteerWhenKicking) == 28, "Offset mismatch for FFortDelMarVehicleDriftConfig::MinForcedSteerWhenKicking");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, KickCooldownSeconds) == 32, "Offset mismatch for FFortDelMarVehicleDriftConfig::KickCooldownSeconds");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, bActivateDriftOnStrafeEnd) == 36, "Offset mismatch for FFortDelMarVehicleDriftConfig::bActivateDriftOnStrafeEnd");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, bActivateDriftOnLanding) == 37, "Offset mismatch for FFortDelMarVehicleDriftConfig::bActivateDriftOnLanding");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, bActivateDriftOnKickflipLanding) == 38, "Offset mismatch for FFortDelMarVehicleDriftConfig::bActivateDriftOnKickflipLanding");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ActivateExitDriftTime) == 40, "Offset mismatch for FFortDelMarVehicleDriftConfig::ActivateExitDriftTime");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MinSteerInput) == 44, "Offset mismatch for FFortDelMarVehicleDriftConfig::MinSteerInput");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MinFullThrottleInput) == 48, "Offset mismatch for FFortDelMarVehicleDriftConfig::MinFullThrottleInput");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MinFullDriftInput) == 52, "Offset mismatch for FFortDelMarVehicleDriftConfig::MinFullDriftInput");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ForcedDriftSteer) == 56, "Offset mismatch for FFortDelMarVehicleDriftConfig::ForcedDriftSteer");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, InitialTorqueImpulse) == 60, "Offset mismatch for FFortDelMarVehicleDriftConfig::InitialTorqueImpulse");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MaxAllowedGroundedSpringVarianceDegrees) == 64, "Offset mismatch for FFortDelMarVehicleDriftConfig::MaxAllowedGroundedSpringVarianceDegrees");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, TorqueAccelInDriftDir) == 68, "Offset mismatch for FFortDelMarVehicleDriftConfig::TorqueAccelInDriftDir");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, TorqueAccelNoSteer) == 72, "Offset mismatch for FFortDelMarVehicleDriftConfig::TorqueAccelNoSteer");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, TorqueAccelNotInDriftDir) == 76, "Offset mismatch for FFortDelMarVehicleDriftConfig::TorqueAccelNotInDriftDir");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, TorqueAccelChangeDir) == 80, "Offset mismatch for FFortDelMarVehicleDriftConfig::TorqueAccelChangeDir");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, TorqueAccelDampening) == 84, "Offset mismatch for FFortDelMarVehicleDriftConfig::TorqueAccelDampening");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, TorqueAccelWithKick) == 88, "Offset mismatch for FFortDelMarVehicleDriftConfig::TorqueAccelWithKick");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, TorqueAccelWithKickV2) == 92, "Offset mismatch for FFortDelMarVehicleDriftConfig::TorqueAccelWithKickV2");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, TorqueAccelForcedDrift) == 96, "Offset mismatch for FFortDelMarVehicleDriftConfig::TorqueAccelForcedDrift");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, TorqueAgainstExit) == 100, "Offset mismatch for FFortDelMarVehicleDriftConfig::TorqueAgainstExit");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MaxRotationSpeedWithThrottle) == 104, "Offset mismatch for FFortDelMarVehicleDriftConfig::MaxRotationSpeedWithThrottle");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MaxRotationSpeedNoThrottle) == 108, "Offset mismatch for FFortDelMarVehicleDriftConfig::MaxRotationSpeedNoThrottle");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MaxRotationSpeedWithKick) == 112, "Offset mismatch for FFortDelMarVehicleDriftConfig::MaxRotationSpeedWithKick");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MaxRotationSpeedSwapDirections) == 116, "Offset mismatch for FFortDelMarVehicleDriftConfig::MaxRotationSpeedSwapDirections");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MinDriftDegrees) == 120, "Offset mismatch for FFortDelMarVehicleDriftConfig::MinDriftDegrees");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MaxDriftDegrees) == 124, "Offset mismatch for FFortDelMarVehicleDriftConfig::MaxDriftDegrees");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ExitDriftDegrees) == 128, "Offset mismatch for FFortDelMarVehicleDriftConfig::ExitDriftDegrees");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ApproachDistance) == 132, "Offset mismatch for FFortDelMarVehicleDriftConfig::ApproachDistance");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, PeakForwardSpeedDegrees) == 136, "Offset mismatch for FFortDelMarVehicleDriftConfig::PeakForwardSpeedDegrees");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, KickRedirectRate) == 140, "Offset mismatch for FFortDelMarVehicleDriftConfig::KickRedirectRate");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, KickRedirectRateV2) == 144, "Offset mismatch for FFortDelMarVehicleDriftConfig::KickRedirectRateV2");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ForcedDriftRedirectRate) == 148, "Offset mismatch for FFortDelMarVehicleDriftConfig::ForcedDriftRedirectRate");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MinSteerRedirectInput) == 152, "Offset mismatch for FFortDelMarVehicleDriftConfig::MinSteerRedirectInput");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, NonKickRedirectRateCurve) == 160, "Offset mismatch for FFortDelMarVehicleDriftConfig::NonKickRedirectRateCurve");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, VelocityRedirectAngleCurveControlled) == 240, "Offset mismatch for FFortDelMarVehicleDriftConfig::VelocityRedirectAngleCurveControlled");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, VelocityRedirectAgainstAngleCurveControlled) == 320, "Offset mismatch for FFortDelMarVehicleDriftConfig::VelocityRedirectAgainstAngleCurveControlled");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, VelocityRedirectAngleCurveNoSteer) == 400, "Offset mismatch for FFortDelMarVehicleDriftConfig::VelocityRedirectAngleCurveNoSteer");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, VelocityRedirectAngleCurveUncontrolled) == 480, "Offset mismatch for FFortDelMarVehicleDriftConfig::VelocityRedirectAngleCurveUncontrolled");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, VelocityRedirectAngleCurveKickback) == 560, "Offset mismatch for FFortDelMarVehicleDriftConfig::VelocityRedirectAngleCurveKickback");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, VelocityRedirectAngleCurveKickbackV2) == 640, "Offset mismatch for FFortDelMarVehicleDriftConfig::VelocityRedirectAngleCurveKickbackV2");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, PeakSpeedIncreaseDegrees) == 720, "Offset mismatch for FFortDelMarVehicleDriftConfig::PeakSpeedIncreaseDegrees");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MaxAccelSpeed) == 724, "Offset mismatch for FFortDelMarVehicleDriftConfig::MaxAccelSpeed");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, AccelerationScalarCurve) == 728, "Offset mismatch for FFortDelMarVehicleDriftConfig::AccelerationScalarCurve");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, AdditionalSpeedLossNoThrottle) == 808, "Offset mismatch for FFortDelMarVehicleDriftConfig::AdditionalSpeedLossNoThrottle");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MaxControlledDriftRatio) == 888, "Offset mismatch for FFortDelMarVehicleDriftConfig::MaxControlledDriftRatio");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ControlledSpeedCapBySlipAngle) == 896, "Offset mismatch for FFortDelMarVehicleDriftConfig::ControlledSpeedCapBySlipAngle");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ControlledSpeedCapDecelRate) == 976, "Offset mismatch for FFortDelMarVehicleDriftConfig::ControlledSpeedCapDecelRate");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, UncontrolledSpeedCap) == 1056, "Offset mismatch for FFortDelMarVehicleDriftConfig::UncontrolledSpeedCap");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, UncontrolledSpeedLoss) == 1060, "Offset mismatch for FFortDelMarVehicleDriftConfig::UncontrolledSpeedLoss");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ExitVelocityMaxDegrees) == 1064, "Offset mismatch for FFortDelMarVehicleDriftConfig::ExitVelocityMaxDegrees");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ExitKickEndMaxDegrees) == 1068, "Offset mismatch for FFortDelMarVehicleDriftConfig::ExitKickEndMaxDegrees");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ExitVelocityTorqueAccel) == 1072, "Offset mismatch for FFortDelMarVehicleDriftConfig::ExitVelocityTorqueAccel");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ExitVelocityMaxRotationSpeed) == 1076, "Offset mismatch for FFortDelMarVehicleDriftConfig::ExitVelocityMaxRotationSpeed");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ExitForwardMaxDegrees) == 1080, "Offset mismatch for FFortDelMarVehicleDriftConfig::ExitForwardMaxDegrees");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ExitForwardTorqueSteer) == 1084, "Offset mismatch for FFortDelMarVehicleDriftConfig::ExitForwardTorqueSteer");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ExitForwardMaxRotation) == 1088, "Offset mismatch for FFortDelMarVehicleDriftConfig::ExitForwardMaxRotation");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ExitForwardTargetRedirectRate) == 1092, "Offset mismatch for FFortDelMarVehicleDriftConfig::ExitForwardTargetRedirectRate");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, ExitForwardRedirectRate) == 1096, "Offset mismatch for FFortDelMarVehicleDriftConfig::ExitForwardRedirectRate");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, MaxExitForwardLandingSpeed) == 1100, "Offset mismatch for FFortDelMarVehicleDriftConfig::MaxExitForwardLandingSpeed");
static_assert(offsetof(FFortDelMarVehicleDriftConfig, bEnforceThrottleForControlledDrift) == 1104, "Offset mismatch for FFortDelMarVehicleDriftConfig::bEnforceThrottleForControlledDrift");

// /Script/FortDelMarVehicle.FortDelMarVehicleDriveSetup
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleDriveSetup
{
public:
    float MaxBaseForwardSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t DriveAccel[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t TargetSpeedMaxAccelCurve[0x50]; // 0x0058 (Size: 0x50, Type: StructProperty)
    float TargetSpeedAerialFriction; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForPersistentTargetSpeedModifier; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowBrakingInAir; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    float BrakeAccel; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float StopSpeed; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float IdleBrakeFactor; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float MaxSpeedToResetTargetSpeedDirection; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00C4
    std::uint8_t SteerAngleCurve[0x48]; // 0x00C8 (Size: 0x48, Type: StructProperty)
    TArray<void*> SteerAngleCurveOverrides; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LatFrictionCurve[0x50]; // 0x0120 (Size: 0x50, Type: StructProperty)
    std::uint8_t WheelsGroundedFrictionCurve[0x48]; // 0x0170 (Size: 0x48, Type: StructProperty)
    float MaxForwardSpeedToIgnoreLandingSpeed; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    float MaxKickflipLandingSeconds; // 0x01BC (Size: 0x4, Type: FloatProperty)
    float SkydiveVerticalVelocitySensitivity; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    float SkydiveVerticalPitchSensitivity; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    float MinInAirTimeStableLanding; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumWheelsForActivelyLanding; // 0x01CC (Size: 0x4, Type: IntProperty)
    float MinAerialSpeedForPrimaryDirection; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    float MaxGroundNormalDiffForPrimaryDirection; // 0x01D4 (Size: 0x4, Type: FloatProperty)
    float MinPrevVelocityDotProductForPrimaryDirection; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    float ForwardMaxSpeed; // 0x01DC (Size: 0x4, Type: FloatProperty)
    float UpwardMaxLandingSpeed; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    float UpwardMaxSpeed; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    float MaxLandingAngularVelocity; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    float MaxLinearSpeed; // 0x01EC (Size: 0x4, Type: FloatProperty)
    float MaxAngularSpeed; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float MinCeilingDegrees; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    float MaxCeilingDegrees; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    float AerialCeilingDegrees; // 0x01FC (Size: 0x4, Type: FloatProperty)
    float MaxInvertedControlSteering; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float MinCeilingSecondsToInvertControls; // 0x0204 (Size: 0x4, Type: FloatProperty)
    float WheelPushForce; // 0x0208 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForVelocityDirection; // 0x020C (Size: 0x4, Type: FloatProperty)
    float MinZSpeedForUpwardDirection; // 0x0210 (Size: 0x4, Type: FloatProperty)
    float VerticalOrientationSensitivity; // 0x0214 (Size: 0x4, Type: FloatProperty)
    float MaxInactiveLandedFlipTime; // 0x0218 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumWheelsForWheelsOnGround; // 0x021C (Size: 0x4, Type: IntProperty)
    float MaxLandingSpeedSpringVarianceDegrees; // 0x0220 (Size: 0x4, Type: FloatProperty)
    float MinDownDegreesForForwardDirection; // 0x0224 (Size: 0x4, Type: FloatProperty)
    float MaxNormalizedForwardSpeed; // 0x0228 (Size: 0x4, Type: FloatProperty)
    float MaxNormalizedBonusSpeed; // 0x022C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxBaseForwardSpeed) == 0, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxBaseForwardSpeed");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, DriveAccel) == 8, "Offset mismatch for FFortDelMarVehicleDriveSetup::DriveAccel");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, TargetSpeedMaxAccelCurve) == 88, "Offset mismatch for FFortDelMarVehicleDriveSetup::TargetSpeedMaxAccelCurve");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, TargetSpeedAerialFriction) == 168, "Offset mismatch for FFortDelMarVehicleDriveSetup::TargetSpeedAerialFriction");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MinSpeedForPersistentTargetSpeedModifier) == 172, "Offset mismatch for FFortDelMarVehicleDriveSetup::MinSpeedForPersistentTargetSpeedModifier");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, bAllowBrakingInAir) == 176, "Offset mismatch for FFortDelMarVehicleDriveSetup::bAllowBrakingInAir");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, BrakeAccel) == 180, "Offset mismatch for FFortDelMarVehicleDriveSetup::BrakeAccel");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, StopSpeed) == 184, "Offset mismatch for FFortDelMarVehicleDriveSetup::StopSpeed");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, IdleBrakeFactor) == 188, "Offset mismatch for FFortDelMarVehicleDriveSetup::IdleBrakeFactor");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxSpeedToResetTargetSpeedDirection) == 192, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxSpeedToResetTargetSpeedDirection");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, SteerAngleCurve) == 200, "Offset mismatch for FFortDelMarVehicleDriveSetup::SteerAngleCurve");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, SteerAngleCurveOverrides) == 272, "Offset mismatch for FFortDelMarVehicleDriveSetup::SteerAngleCurveOverrides");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, LatFrictionCurve) == 288, "Offset mismatch for FFortDelMarVehicleDriveSetup::LatFrictionCurve");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, WheelsGroundedFrictionCurve) == 368, "Offset mismatch for FFortDelMarVehicleDriveSetup::WheelsGroundedFrictionCurve");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxForwardSpeedToIgnoreLandingSpeed) == 440, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxForwardSpeedToIgnoreLandingSpeed");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxKickflipLandingSeconds) == 444, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxKickflipLandingSeconds");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, SkydiveVerticalVelocitySensitivity) == 448, "Offset mismatch for FFortDelMarVehicleDriveSetup::SkydiveVerticalVelocitySensitivity");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, SkydiveVerticalPitchSensitivity) == 452, "Offset mismatch for FFortDelMarVehicleDriveSetup::SkydiveVerticalPitchSensitivity");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MinInAirTimeStableLanding) == 456, "Offset mismatch for FFortDelMarVehicleDriveSetup::MinInAirTimeStableLanding");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, NumWheelsForActivelyLanding) == 460, "Offset mismatch for FFortDelMarVehicleDriveSetup::NumWheelsForActivelyLanding");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MinAerialSpeedForPrimaryDirection) == 464, "Offset mismatch for FFortDelMarVehicleDriveSetup::MinAerialSpeedForPrimaryDirection");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxGroundNormalDiffForPrimaryDirection) == 468, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxGroundNormalDiffForPrimaryDirection");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MinPrevVelocityDotProductForPrimaryDirection) == 472, "Offset mismatch for FFortDelMarVehicleDriveSetup::MinPrevVelocityDotProductForPrimaryDirection");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, ForwardMaxSpeed) == 476, "Offset mismatch for FFortDelMarVehicleDriveSetup::ForwardMaxSpeed");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, UpwardMaxLandingSpeed) == 480, "Offset mismatch for FFortDelMarVehicleDriveSetup::UpwardMaxLandingSpeed");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, UpwardMaxSpeed) == 484, "Offset mismatch for FFortDelMarVehicleDriveSetup::UpwardMaxSpeed");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxLandingAngularVelocity) == 488, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxLandingAngularVelocity");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxLinearSpeed) == 492, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxLinearSpeed");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxAngularSpeed) == 496, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxAngularSpeed");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MinCeilingDegrees) == 500, "Offset mismatch for FFortDelMarVehicleDriveSetup::MinCeilingDegrees");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxCeilingDegrees) == 504, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxCeilingDegrees");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, AerialCeilingDegrees) == 508, "Offset mismatch for FFortDelMarVehicleDriveSetup::AerialCeilingDegrees");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxInvertedControlSteering) == 512, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxInvertedControlSteering");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MinCeilingSecondsToInvertControls) == 516, "Offset mismatch for FFortDelMarVehicleDriveSetup::MinCeilingSecondsToInvertControls");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, WheelPushForce) == 520, "Offset mismatch for FFortDelMarVehicleDriveSetup::WheelPushForce");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MinSpeedForVelocityDirection) == 524, "Offset mismatch for FFortDelMarVehicleDriveSetup::MinSpeedForVelocityDirection");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MinZSpeedForUpwardDirection) == 528, "Offset mismatch for FFortDelMarVehicleDriveSetup::MinZSpeedForUpwardDirection");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, VerticalOrientationSensitivity) == 532, "Offset mismatch for FFortDelMarVehicleDriveSetup::VerticalOrientationSensitivity");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxInactiveLandedFlipTime) == 536, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxInactiveLandedFlipTime");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, NumWheelsForWheelsOnGround) == 540, "Offset mismatch for FFortDelMarVehicleDriveSetup::NumWheelsForWheelsOnGround");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxLandingSpeedSpringVarianceDegrees) == 544, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxLandingSpeedSpringVarianceDegrees");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MinDownDegreesForForwardDirection) == 548, "Offset mismatch for FFortDelMarVehicleDriveSetup::MinDownDegreesForForwardDirection");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxNormalizedForwardSpeed) == 552, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxNormalizedForwardSpeed");
static_assert(offsetof(FFortDelMarVehicleDriveSetup, MaxNormalizedBonusSpeed) == 556, "Offset mismatch for FFortDelMarVehicleDriveSetup::MaxNormalizedBonusSpeed");

// /Script/FortDelMarVehicle.FortDelMarVehicleInContinuous
// Kind: ScriptStruct; super: FortAthenaVehicleInputState
struct FFortDelMarVehicleInContinuous
{
public:
    float ForwardAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RightAlpha; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PitchAlpha; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LookUpDelta; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TurnDelta; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SteerAlpha; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float GravityOffset; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::uint8_t MovementDir[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIgnoreForwardInAir; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bIsBraking (shared storage)
    // 0x0038 BoolProperty bIsHonking (shared storage)
    // 0x0038 BoolProperty bIsJumping (shared storage)
    // 0x0038 BoolProperty bIsReversing (shared storage)
    // 0x0038 BoolProperty bIsSprinting (shared storage)
    // 0x0038 BoolProperty bMovementModifier0 (shared storage)
    // 0x0038 BoolProperty bMovementModifier1 (shared storage)
    std::uint8_t bMovementModifier2; // 0x0039 (Size: 0x1, Type: BoolProperty)
    // 0x0039 BoolProperty bUsingGamepad (shared storage)
    // 0x0039 BoolProperty bUsingTrigger (shared storage)
};

static_assert(offsetof(FFortDelMarVehicleInContinuous, ForwardAlpha) == 0, "Offset mismatch for FFortDelMarVehicleInContinuous::ForwardAlpha");
static_assert(offsetof(FFortDelMarVehicleInContinuous, RightAlpha) == 4, "Offset mismatch for FFortDelMarVehicleInContinuous::RightAlpha");
static_assert(offsetof(FFortDelMarVehicleInContinuous, PitchAlpha) == 8, "Offset mismatch for FFortDelMarVehicleInContinuous::PitchAlpha");
static_assert(offsetof(FFortDelMarVehicleInContinuous, LookUpDelta) == 12, "Offset mismatch for FFortDelMarVehicleInContinuous::LookUpDelta");
static_assert(offsetof(FFortDelMarVehicleInContinuous, TurnDelta) == 16, "Offset mismatch for FFortDelMarVehicleInContinuous::TurnDelta");
static_assert(offsetof(FFortDelMarVehicleInContinuous, SteerAlpha) == 20, "Offset mismatch for FFortDelMarVehicleInContinuous::SteerAlpha");
static_assert(offsetof(FFortDelMarVehicleInContinuous, GravityOffset) == 24, "Offset mismatch for FFortDelMarVehicleInContinuous::GravityOffset");
static_assert(offsetof(FFortDelMarVehicleInContinuous, MovementDir) == 32, "Offset mismatch for FFortDelMarVehicleInContinuous::MovementDir");
static_assert(offsetof(FFortDelMarVehicleInContinuous, bIgnoreForwardInAir) == 56, "Offset mismatch for FFortDelMarVehicleInContinuous::bIgnoreForwardInAir");
static_assert(offsetof(FFortDelMarVehicleInContinuous, bMovementModifier2) == 57, "Offset mismatch for FFortDelMarVehicleInContinuous::bMovementModifier2");

// /Script/FortDelMarVehicle.FortDelMarVehicleInPersistent
// Kind: ScriptStruct; super: FortVehicleInPersistent
struct FFortDelMarVehicleInPersistent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* FortPhysicsVehicleConfigs; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseForceHeading; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1F]; // 0x0011
    std::uint8_t bAttemptAsyncOrientationCorrection; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bHasDriver (shared storage)
    // 0x0030 BoolProperty bHasPassengers (shared storage)
    // 0x0030 BoolProperty bIsTouchingAnything (shared storage)
    // 0x0030 BoolProperty bUseGravity (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0031
    float WaterLevel; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LocalFrontFrictionPt[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalRearFrictionPt[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float FrontMassRatio; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float RearMassRatio; // 0x006C (Size: 0x4, Type: FloatProperty)
    float TopSpeedCurrentMultiplier; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VehicleAttributes[0x13C]; // 0x0074 (Size: 0x13C, Type: StructProperty)
    TArray<void*> TireStates; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarVehicleInPersistent, FortPhysicsVehicleConfigs) == 8, "Offset mismatch for FFortDelMarVehicleInPersistent::FortPhysicsVehicleConfigs");
static_assert(offsetof(FFortDelMarVehicleInPersistent, bUseForceHeading) == 16, "Offset mismatch for FFortDelMarVehicleInPersistent::bUseForceHeading");
static_assert(offsetof(FFortDelMarVehicleInPersistent, bAttemptAsyncOrientationCorrection) == 48, "Offset mismatch for FFortDelMarVehicleInPersistent::bAttemptAsyncOrientationCorrection");
static_assert(offsetof(FFortDelMarVehicleInPersistent, WaterLevel) == 52, "Offset mismatch for FFortDelMarVehicleInPersistent::WaterLevel");
static_assert(offsetof(FFortDelMarVehicleInPersistent, LocalFrontFrictionPt) == 56, "Offset mismatch for FFortDelMarVehicleInPersistent::LocalFrontFrictionPt");
static_assert(offsetof(FFortDelMarVehicleInPersistent, LocalRearFrictionPt) == 80, "Offset mismatch for FFortDelMarVehicleInPersistent::LocalRearFrictionPt");
static_assert(offsetof(FFortDelMarVehicleInPersistent, FrontMassRatio) == 104, "Offset mismatch for FFortDelMarVehicleInPersistent::FrontMassRatio");
static_assert(offsetof(FFortDelMarVehicleInPersistent, RearMassRatio) == 108, "Offset mismatch for FFortDelMarVehicleInPersistent::RearMassRatio");
static_assert(offsetof(FFortDelMarVehicleInPersistent, TopSpeedCurrentMultiplier) == 112, "Offset mismatch for FFortDelMarVehicleInPersistent::TopSpeedCurrentMultiplier");
static_assert(offsetof(FFortDelMarVehicleInPersistent, VehicleAttributes) == 116, "Offset mismatch for FFortDelMarVehicleInPersistent::VehicleAttributes");
static_assert(offsetof(FFortDelMarVehicleInPersistent, TireStates) == 432, "Offset mismatch for FFortDelMarVehicleInPersistent::TireStates");

// /Script/FortDelMarVehicle.FortDelMarVehicleInternalPersistent
// Kind: ScriptStruct; super: FortVehicleInternalPersistent
struct FFortDelMarVehicleInternalPersistent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarVehicle.FortDelMarVehicleLandingData
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleLandingData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarVehicle.FortDelMarVehicleLandingLevel
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleLandingLevel
{
public:
    float MinForce; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SpeedChange; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleLandingLevel, MinForce) == 0, "Offset mismatch for FFortDelMarVehicleLandingLevel::MinForce");
static_assert(offsetof(FFortDelMarVehicleLandingLevel, SpeedChange) == 4, "Offset mismatch for FFortDelMarVehicleLandingLevel::SpeedChange");

// /Script/FortDelMarVehicle.FortDelMarVehicleNetworkInput
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleNetworkInput
{
public:
    std::int32_t FrameNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Input[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleNetworkInput, FrameNum) == 0, "Offset mismatch for FFortDelMarVehicleNetworkInput::FrameNum");
static_assert(offsetof(FFortDelMarVehicleNetworkInput, Input) == 8, "Offset mismatch for FFortDelMarVehicleNetworkInput::Input");

// /Script/FortDelMarVehicle.FortDelMarVehicleOutContinuous
// Kind: ScriptStruct; super: FortVehicleOutContinuous
struct FFortDelMarVehicleOutContinuous
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float SteeringAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t AverageSpringNormal[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlatformVelocityDirection[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleOutContinuous, SteeringAngle) == 8, "Offset mismatch for FFortDelMarVehicleOutContinuous::SteeringAngle");
static_assert(offsetof(FFortDelMarVehicleOutContinuous, AverageSpringNormal) == 16, "Offset mismatch for FFortDelMarVehicleOutContinuous::AverageSpringNormal");
static_assert(offsetof(FFortDelMarVehicleOutContinuous, PlatformVelocityDirection) == 40, "Offset mismatch for FFortDelMarVehicleOutContinuous::PlatformVelocityDirection");

// /Script/FortDelMarVehicle.FortDelMarVehicleOutPersistent
// Kind: ScriptStruct; super: FortVehicleOutPersistent
struct FFortDelMarVehicleOutPersistent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bAnyWheelsOnGround; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bCanDriveOnIncline (shared storage)
    // 0x0008 BoolProperty bIsAsyncCorrectingOrientation (shared storage)
    // 0x0008 BoolProperty bIsTouchingDrivableGround (shared storage)
    // 0x0008 BoolProperty bIsTouchingGroundWithoutWheels (shared storage)
    // 0x0008 BoolProperty bOnRoad (shared storage)
    // 0x0008 BoolProperty bPossiblyTouchingTop (shared storage)
    // 0x0008 BoolProperty bWheelsOnGround (shared storage)
    std::uint8_t bBoosting; // 0x0009 (Size: 0x1, Type: BoolProperty)
    // 0x0009 BoolProperty bOnDirt (shared storage)
    // 0x0009 BoolProperty bOnGrass (shared storage)
    // 0x0009 BoolProperty bOnIce (shared storage)
    // 0x0009 BoolProperty bOnLandscape (shared storage)
    // 0x0009 BoolProperty bOnMud (shared storage)
    // 0x0009 BoolProperty bOnSnow (shared storage)
    // 0x0009 BoolProperty bOnVehicle (shared storage)
    std::uint8_t bStartedWithFullBoost; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x000B
    TArray<void*> TireSurfaces; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float TotalBrakingDelta; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentGearIdx; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortDelMarVehicleOutPersistent, bAnyWheelsOnGround) == 8, "Offset mismatch for FFortDelMarVehicleOutPersistent::bAnyWheelsOnGround");
static_assert(offsetof(FFortDelMarVehicleOutPersistent, bBoosting) == 9, "Offset mismatch for FFortDelMarVehicleOutPersistent::bBoosting");
static_assert(offsetof(FFortDelMarVehicleOutPersistent, bStartedWithFullBoost) == 10, "Offset mismatch for FFortDelMarVehicleOutPersistent::bStartedWithFullBoost");
static_assert(offsetof(FFortDelMarVehicleOutPersistent, TireSurfaces) == 16, "Offset mismatch for FFortDelMarVehicleOutPersistent::TireSurfaces");
static_assert(offsetof(FFortDelMarVehicleOutPersistent, TotalBrakingDelta) == 32, "Offset mismatch for FFortDelMarVehicleOutPersistent::TotalBrakingDelta");
static_assert(offsetof(FFortDelMarVehicleOutPersistent, CurrentGearIdx) == 36, "Offset mismatch for FFortDelMarVehicleOutPersistent::CurrentGearIdx");

// /Script/FortDelMarVehicle.FortDelMarVehicleOversteerConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleOversteerConfig
{
public:
    float MinInput; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxAccumulatedSteer; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CappedAccumulatedSteerCurve[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t AccumulatedSteerRateCurve[0x50]; // 0x0058 (Size: 0x50, Type: StructProperty)
    float AccumulatedSteerDecayRate; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float DriftImpulseForce; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDecayAccumulatedSteer; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearAccumulatedSteerOnDrift; // 0x00B5 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleOversteerConfig, MinInput) == 0, "Offset mismatch for FFortDelMarVehicleOversteerConfig::MinInput");
static_assert(offsetof(FFortDelMarVehicleOversteerConfig, MaxAccumulatedSteer) == 4, "Offset mismatch for FFortDelMarVehicleOversteerConfig::MaxAccumulatedSteer");
static_assert(offsetof(FFortDelMarVehicleOversteerConfig, CappedAccumulatedSteerCurve) == 8, "Offset mismatch for FFortDelMarVehicleOversteerConfig::CappedAccumulatedSteerCurve");
static_assert(offsetof(FFortDelMarVehicleOversteerConfig, AccumulatedSteerRateCurve) == 88, "Offset mismatch for FFortDelMarVehicleOversteerConfig::AccumulatedSteerRateCurve");
static_assert(offsetof(FFortDelMarVehicleOversteerConfig, AccumulatedSteerDecayRate) == 168, "Offset mismatch for FFortDelMarVehicleOversteerConfig::AccumulatedSteerDecayRate");
static_assert(offsetof(FFortDelMarVehicleOversteerConfig, DriftImpulseForce) == 172, "Offset mismatch for FFortDelMarVehicleOversteerConfig::DriftImpulseForce");
static_assert(offsetof(FFortDelMarVehicleOversteerConfig, MinSpeed) == 176, "Offset mismatch for FFortDelMarVehicleOversteerConfig::MinSpeed");
static_assert(offsetof(FFortDelMarVehicleOversteerConfig, bDecayAccumulatedSteer) == 180, "Offset mismatch for FFortDelMarVehicleOversteerConfig::bDecayAccumulatedSteer");
static_assert(offsetof(FFortDelMarVehicleOversteerConfig, bClearAccumulatedSteerOnDrift) == 181, "Offset mismatch for FFortDelMarVehicleOversteerConfig::bClearAccumulatedSteerOnDrift");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleReplicatedState
{
public:
    std::int32_t FrameNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Input[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t RBState[0x80]; // 0x0050 (Size: 0x80, Type: StructProperty)
    std::uint8_t AutoUpright[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Drafting[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Drift[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t DriftBoost[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t Drive[0x30]; // 0x0158 (Size: 0x30, Type: StructProperty)
    std::uint8_t Jump[0x8]; // 0x0188 (Size: 0x8, Type: StructProperty)
    std::uint8_t Kickflip[0x60]; // 0x0190 (Size: 0x60, Type: StructProperty)
    std::uint8_t Oversteer[0x8]; // 0x01F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Reattachment[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Rubberbanding[0x4]; // 0x0220 (Size: 0x4, Type: StructProperty)
    std::uint8_t StartlineBoost[0x14]; // 0x0224 (Size: 0x14, Type: StructProperty)
    std::uint8_t Strafe[0x10]; // 0x0238 (Size: 0x10, Type: StructProperty)
    std::uint8_t Turbo[0x18]; // 0x0248 (Size: 0x18, Type: StructProperty)
    std::uint8_t Underthrust[0xC]; // 0x0260 (Size: 0xC, Type: StructProperty)
    std::uint8_t AirControl[0xC]; // 0x026C (Size: 0xC, Type: StructProperty)
    std::uint8_t BufferData[0x1]; // 0x0278 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState, FrameNum) == 0, "Offset mismatch for FFortDelMarVehicleReplicatedState::FrameNum");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Input) == 8, "Offset mismatch for FFortDelMarVehicleReplicatedState::Input");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, RBState) == 80, "Offset mismatch for FFortDelMarVehicleReplicatedState::RBState");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, AutoUpright) == 208, "Offset mismatch for FFortDelMarVehicleReplicatedState::AutoUpright");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Drafting) == 240, "Offset mismatch for FFortDelMarVehicleReplicatedState::Drafting");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Drift) == 264, "Offset mismatch for FFortDelMarVehicleReplicatedState::Drift");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, DriftBoost) == 312, "Offset mismatch for FFortDelMarVehicleReplicatedState::DriftBoost");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Drive) == 344, "Offset mismatch for FFortDelMarVehicleReplicatedState::Drive");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Jump) == 392, "Offset mismatch for FFortDelMarVehicleReplicatedState::Jump");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Kickflip) == 400, "Offset mismatch for FFortDelMarVehicleReplicatedState::Kickflip");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Oversteer) == 496, "Offset mismatch for FFortDelMarVehicleReplicatedState::Oversteer");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Reattachment) == 504, "Offset mismatch for FFortDelMarVehicleReplicatedState::Reattachment");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Rubberbanding) == 544, "Offset mismatch for FFortDelMarVehicleReplicatedState::Rubberbanding");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, StartlineBoost) == 548, "Offset mismatch for FFortDelMarVehicleReplicatedState::StartlineBoost");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Strafe) == 568, "Offset mismatch for FFortDelMarVehicleReplicatedState::Strafe");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Turbo) == 584, "Offset mismatch for FFortDelMarVehicleReplicatedState::Turbo");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, Underthrust) == 608, "Offset mismatch for FFortDelMarVehicleReplicatedState::Underthrust");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, AirControl) == 620, "Offset mismatch for FFortDelMarVehicleReplicatedState::AirControl");
static_assert(offsetof(FFortDelMarVehicleReplicatedState, BufferData) == 632, "Offset mismatch for FFortDelMarVehicleReplicatedState::BufferData");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Ability
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleReplicatedState_Ability
{
public:
    std::uint8_t bActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float duration; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Ability, bActive) == 0, "Offset mismatch for FFortDelMarVehicleReplicatedState_Ability::bActive");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Ability, duration) == 4, "Offset mismatch for FFortDelMarVehicleReplicatedState_Ability::duration");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_AirControl
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_Ability
struct FFortDelMarVehicleReplicatedState_AirControl
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float AerialDivingBonusSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_AirControl, AerialDivingBonusSpeed) == 8, "Offset mismatch for FFortDelMarVehicleReplicatedState_AirControl::AerialDivingBonusSpeed");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_AutoUpright
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_Ability
struct FFortDelMarVehicleReplicatedState_AutoUpright
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TargetVehicleUp[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_AutoUpright, TargetVehicleUp) == 8, "Offset mismatch for FFortDelMarVehicleReplicatedState_AutoUpright::TargetVehicleUp");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_BonusSpeedAbility
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_Ability
struct FFortDelMarVehicleReplicatedState_BonusSpeedAbility
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float AppliedBonusSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_BonusSpeedAbility, AppliedBonusSpeed) == 8, "Offset mismatch for FFortDelMarVehicleReplicatedState_BonusSpeedAbility::AppliedBonusSpeed");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Drafting
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_BonusSpeedAbility
struct FFortDelMarVehicleReplicatedState_Drafting
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    float AccumulatedLosingSpeedSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float AccumulatedStartDraftingSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TotalEarnedBonusSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drafting, AccumulatedLosingSpeedSeconds) == 12, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drafting::AccumulatedLosingSpeedSeconds");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drafting, AccumulatedStartDraftingSeconds) == 16, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drafting::AccumulatedStartDraftingSeconds");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drafting, TotalEarnedBonusSpeed) == 20, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drafting::TotalEarnedBonusSpeed");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Drift
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_Ability
struct FFortDelMarVehicleReplicatedState_Drift
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float CurrentRotationAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriftState; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    float TargetDriftSide; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0014
    std::uint8_t InitialImpulseTorque[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drift, CurrentRotationAngle) == 8, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drift::CurrentRotationAngle");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drift, DriftState) == 12, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drift::DriftState");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drift, TargetDriftSide) == 16, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drift::TargetDriftSide");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drift, InitialImpulseTorque) == 24, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drift::InitialImpulseTorque");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_DriftBoost
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_BonusSpeedAbility
struct FFortDelMarVehicleReplicatedState_DriftBoost
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    float AccumulatedDriftBoostSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float AccumulatedWaitingPeriodSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TotalEarnedBonusSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float QueuedBonusSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float QueuedBoostExtraSeconds; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_DriftBoost, AccumulatedDriftBoostSeconds) == 12, "Offset mismatch for FFortDelMarVehicleReplicatedState_DriftBoost::AccumulatedDriftBoostSeconds");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_DriftBoost, AccumulatedWaitingPeriodSeconds) == 16, "Offset mismatch for FFortDelMarVehicleReplicatedState_DriftBoost::AccumulatedWaitingPeriodSeconds");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_DriftBoost, TotalEarnedBonusSpeed) == 20, "Offset mismatch for FFortDelMarVehicleReplicatedState_DriftBoost::TotalEarnedBonusSpeed");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_DriftBoost, QueuedBonusSpeed) == 24, "Offset mismatch for FFortDelMarVehicleReplicatedState_DriftBoost::QueuedBonusSpeed");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_DriftBoost, QueuedBoostExtraSeconds) == 28, "Offset mismatch for FFortDelMarVehicleReplicatedState_DriftBoost::QueuedBoostExtraSeconds");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Drive
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleReplicatedState_Drive
{
public:
    float BaseTargetSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInvertedSteeringActive; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t bDisableDriveForces; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t bDisableWheelFriction; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t LastAverageWheelWorldContactNormal[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float MinimumLandingSpeed; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drive, BaseTargetSpeed) == 0, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drive::BaseTargetSpeed");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drive, bInvertedSteeringActive) == 4, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drive::bInvertedSteeringActive");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drive, bDisableDriveForces) == 8, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drive::bDisableDriveForces");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drive, bDisableWheelFriction) == 12, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drive::bDisableWheelFriction");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drive, LastAverageWheelWorldContactNormal) == 16, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drive::LastAverageWheelWorldContactNormal");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Drive, MinimumLandingSpeed) == 40, "Offset mismatch for FFortDelMarVehicleReplicatedState_Drive::MinimumLandingSpeed");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Kickflip
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_Ability
struct FFortDelMarVehicleReplicatedState_Kickflip
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RelativeUpDirection[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t KickDirection[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t bLeftSide; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTakeLongestRoll; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRotateTowardsVelocity; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanStartLongRoll; // 0x003B (Size: 0x1, Type: BoolProperty)
    std::int32_t StartingRollSign; // 0x003C (Size: 0x4, Type: IntProperty)
    float KickflipKeybindPressTime; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::int32_t ActivationCharges; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t StartingPrimaryDirection[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Kickflip, RelativeUpDirection) == 8, "Offset mismatch for FFortDelMarVehicleReplicatedState_Kickflip::RelativeUpDirection");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Kickflip, KickDirection) == 32, "Offset mismatch for FFortDelMarVehicleReplicatedState_Kickflip::KickDirection");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Kickflip, bLeftSide) == 56, "Offset mismatch for FFortDelMarVehicleReplicatedState_Kickflip::bLeftSide");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Kickflip, bTakeLongestRoll) == 57, "Offset mismatch for FFortDelMarVehicleReplicatedState_Kickflip::bTakeLongestRoll");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Kickflip, bRotateTowardsVelocity) == 58, "Offset mismatch for FFortDelMarVehicleReplicatedState_Kickflip::bRotateTowardsVelocity");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Kickflip, bCanStartLongRoll) == 59, "Offset mismatch for FFortDelMarVehicleReplicatedState_Kickflip::bCanStartLongRoll");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Kickflip, StartingRollSign) == 60, "Offset mismatch for FFortDelMarVehicleReplicatedState_Kickflip::StartingRollSign");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Kickflip, KickflipKeybindPressTime) == 64, "Offset mismatch for FFortDelMarVehicleReplicatedState_Kickflip::KickflipKeybindPressTime");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Kickflip, ActivationCharges) == 68, "Offset mismatch for FFortDelMarVehicleReplicatedState_Kickflip::ActivationCharges");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Kickflip, StartingPrimaryDirection) == 72, "Offset mismatch for FFortDelMarVehicleReplicatedState_Kickflip::StartingPrimaryDirection");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Oversteer
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleReplicatedState_Oversteer
{
public:
    float AccumulatedSteer; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Oversteer, AccumulatedSteer) == 0, "Offset mismatch for FFortDelMarVehicleReplicatedState_Oversteer::AccumulatedSteer");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Reattachment
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_Ability
struct FFortDelMarVehicleReplicatedState_Reattachment
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t AttachmentDirection[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanActivate; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Reattachment, AttachmentDirection) == 8, "Offset mismatch for FFortDelMarVehicleReplicatedState_Reattachment::AttachmentDirection");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Reattachment, bCanActivate) == 32, "Offset mismatch for FFortDelMarVehicleReplicatedState_Reattachment::bCanActivate");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Rubberbanding
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleReplicatedState_Rubberbanding
{
public:
    float AppliedBonusSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Rubberbanding, AppliedBonusSpeed) == 0, "Offset mismatch for FFortDelMarVehicleReplicatedState_Rubberbanding::AppliedBonusSpeed");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_StartlineBoost
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_BonusSpeedAbility
struct FFortDelMarVehicleReplicatedState_StartlineBoost
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    float PercentageMaxBonusSpeedEarned; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFailedAttempt; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_StartlineBoost, PercentageMaxBonusSpeedEarned) == 12, "Offset mismatch for FFortDelMarVehicleReplicatedState_StartlineBoost::PercentageMaxBonusSpeedEarned");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_StartlineBoost, bFailedAttempt) == 16, "Offset mismatch for FFortDelMarVehicleReplicatedState_StartlineBoost::bFailedAttempt");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Strafe
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_Ability
struct FFortDelMarVehicleReplicatedState_Strafe
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bLeftSide; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float StrafeKeybindPressTime; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Strafe, bLeftSide) == 8, "Offset mismatch for FFortDelMarVehicleReplicatedState_Strafe::bLeftSide");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Strafe, StrafeKeybindPressTime) == 12, "Offset mismatch for FFortDelMarVehicleReplicatedState_Strafe::StrafeKeybindPressTime");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Turbo
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_BonusSpeedAbility
struct FFortDelMarVehicleReplicatedState_Turbo
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::int32_t LastBonusZoneInteractionIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bSuccessfulBonusZone; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float AdditionalActiveSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Turbo, LastBonusZoneInteractionIndex) == 12, "Offset mismatch for FFortDelMarVehicleReplicatedState_Turbo::LastBonusZoneInteractionIndex");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Turbo, bSuccessfulBonusZone) == 16, "Offset mismatch for FFortDelMarVehicleReplicatedState_Turbo::bSuccessfulBonusZone");
static_assert(offsetof(FFortDelMarVehicleReplicatedState_Turbo, AdditionalActiveSeconds) == 20, "Offset mismatch for FFortDelMarVehicleReplicatedState_Turbo::AdditionalActiveSeconds");

// /Script/FortDelMarVehicle.FortDelMarVehicleReplicatedState_Underthrust
// Kind: ScriptStruct; super: FortDelMarVehicleReplicatedState_Ability
struct FFortDelMarVehicleReplicatedState_Underthrust
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float RemainingThrustSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleReplicatedState_Underthrust, RemainingThrustSeconds) == 8, "Offset mismatch for FFortDelMarVehicleReplicatedState_Underthrust::RemainingThrustSeconds");

// /Script/FortDelMarVehicle.FortDelMarVehicleRigidBodyConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleRigidBodyConfig
{
public:
    std::uint8_t bApplyGlobalBodySettings; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float LinearDamping; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AngularDamping; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float VehicleMass; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNotifyRigidBodyCollisions; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSmoothEdgeCollisionsEnabled; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCCD; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0013
    std::uint8_t CenterOfMassOffset[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSuspensionIgnoresBodyCollision; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleRigidBodyConfig, bApplyGlobalBodySettings) == 0, "Offset mismatch for FFortDelMarVehicleRigidBodyConfig::bApplyGlobalBodySettings");
static_assert(offsetof(FFortDelMarVehicleRigidBodyConfig, LinearDamping) == 4, "Offset mismatch for FFortDelMarVehicleRigidBodyConfig::LinearDamping");
static_assert(offsetof(FFortDelMarVehicleRigidBodyConfig, AngularDamping) == 8, "Offset mismatch for FFortDelMarVehicleRigidBodyConfig::AngularDamping");
static_assert(offsetof(FFortDelMarVehicleRigidBodyConfig, VehicleMass) == 12, "Offset mismatch for FFortDelMarVehicleRigidBodyConfig::VehicleMass");
static_assert(offsetof(FFortDelMarVehicleRigidBodyConfig, bNotifyRigidBodyCollisions) == 16, "Offset mismatch for FFortDelMarVehicleRigidBodyConfig::bNotifyRigidBodyCollisions");
static_assert(offsetof(FFortDelMarVehicleRigidBodyConfig, bSmoothEdgeCollisionsEnabled) == 17, "Offset mismatch for FFortDelMarVehicleRigidBodyConfig::bSmoothEdgeCollisionsEnabled");
static_assert(offsetof(FFortDelMarVehicleRigidBodyConfig, bUseCCD) == 18, "Offset mismatch for FFortDelMarVehicleRigidBodyConfig::bUseCCD");
static_assert(offsetof(FFortDelMarVehicleRigidBodyConfig, CenterOfMassOffset) == 24, "Offset mismatch for FFortDelMarVehicleRigidBodyConfig::CenterOfMassOffset");
static_assert(offsetof(FFortDelMarVehicleRigidBodyConfig, bSuspensionIgnoresBodyCollision) == 48, "Offset mismatch for FFortDelMarVehicleRigidBodyConfig::bSuspensionIgnoresBodyCollision");

// /Script/FortDelMarVehicle.FortDelMarVehicleRuntimeConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleRuntimeConfig
{
public:
    std::uint8_t bCollisionDemosEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleDisablesVehicleCollision; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float SecondsToSetIdle; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VehicleCollisionsGlobalOverride; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyOverlapFilter; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleRuntimeConfig, bCollisionDemosEnabled) == 0, "Offset mismatch for FFortDelMarVehicleRuntimeConfig::bCollisionDemosEnabled");
static_assert(offsetof(FFortDelMarVehicleRuntimeConfig, bIdleDisablesVehicleCollision) == 1, "Offset mismatch for FFortDelMarVehicleRuntimeConfig::bIdleDisablesVehicleCollision");
static_assert(offsetof(FFortDelMarVehicleRuntimeConfig, SecondsToSetIdle) == 4, "Offset mismatch for FFortDelMarVehicleRuntimeConfig::SecondsToSetIdle");
static_assert(offsetof(FFortDelMarVehicleRuntimeConfig, VehicleCollisionsGlobalOverride) == 8, "Offset mismatch for FFortDelMarVehicleRuntimeConfig::VehicleCollisionsGlobalOverride");
static_assert(offsetof(FFortDelMarVehicleRuntimeConfig, bApplyOverlapFilter) == 9, "Offset mismatch for FFortDelMarVehicleRuntimeConfig::bApplyOverlapFilter");

// /Script/FortDelMarVehicle.FortDelMarVehicleSkydivingData
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleSkydivingData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarVehicle.FortDelMarVehicleSpawnInfo
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleSpawnInfo
{
public:
    std::uint8_t bFirstVehicleForPlayer; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreviousVehicleDemolished; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    double ServerSpawnTime; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFortDelMarVehicleSpawnInfo, bFirstVehicleForPlayer) == 0, "Offset mismatch for FFortDelMarVehicleSpawnInfo::bFirstVehicleForPlayer");
static_assert(offsetof(FFortDelMarVehicleSpawnInfo, bPreviousVehicleDemolished) == 1, "Offset mismatch for FFortDelMarVehicleSpawnInfo::bPreviousVehicleDemolished");
static_assert(offsetof(FFortDelMarVehicleSpawnInfo, ServerSpawnTime) == 8, "Offset mismatch for FFortDelMarVehicleSpawnInfo::ServerSpawnTime");

// /Script/FortDelMarVehicle.FortDelMarVehicleSuspensionConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleSuspensionConfig
{
public:
    float MaxRaise; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxDrop; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Stiffness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DampingCompression; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DampingRelaxation; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarVehicleSuspensionConfig, MaxRaise) == 0, "Offset mismatch for FFortDelMarVehicleSuspensionConfig::MaxRaise");
static_assert(offsetof(FFortDelMarVehicleSuspensionConfig, MaxDrop) == 4, "Offset mismatch for FFortDelMarVehicleSuspensionConfig::MaxDrop");
static_assert(offsetof(FFortDelMarVehicleSuspensionConfig, Stiffness) == 8, "Offset mismatch for FFortDelMarVehicleSuspensionConfig::Stiffness");
static_assert(offsetof(FFortDelMarVehicleSuspensionConfig, DampingCompression) == 12, "Offset mismatch for FFortDelMarVehicleSuspensionConfig::DampingCompression");
static_assert(offsetof(FFortDelMarVehicleSuspensionConfig, DampingRelaxation) == 16, "Offset mismatch for FFortDelMarVehicleSuspensionConfig::DampingRelaxation");

// /Script/FortDelMarVehicle.FortDelMarVehicleTurboConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarVehicleTurboConfig
{
public:
    float MaxActiveTimeSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CooldownSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float InitialImpulseForce; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinBaseTargetSpeed; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TargetSpeedModifier[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    TArray<void*> BonusZones; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float BonusZoneImpulseForce; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float BonusZoneSpeedDecaySeconds; // 0x003C (Size: 0x4, Type: FloatProperty)
    float SuccessfulBonusZoneHitSeconds; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float ApproachingBonusZoneSeconds; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MaxMissingZoneSeconds; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float MaxNumCharges; // 0x004C (Size: 0x4, Type: FloatProperty)
    float ChargeRegenRateSeconds; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float RaceStartCharges; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float LapCompleteCharges; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float TurboGainedForDriftBoostPotential; // 0x005C (Size: 0x4, Type: FloatProperty)
    float TurboGainedPerSecondAtMaxDriftPotential; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float MaxTurboChargesFromDrift; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTerrainInvulnerabilityDuringTurbo; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarVehicleTurboConfig, MaxActiveTimeSeconds) == 0, "Offset mismatch for FFortDelMarVehicleTurboConfig::MaxActiveTimeSeconds");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, CooldownSeconds) == 4, "Offset mismatch for FFortDelMarVehicleTurboConfig::CooldownSeconds");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, InitialImpulseForce) == 8, "Offset mismatch for FFortDelMarVehicleTurboConfig::InitialImpulseForce");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, MinBaseTargetSpeed) == 12, "Offset mismatch for FFortDelMarVehicleTurboConfig::MinBaseTargetSpeed");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, TargetSpeedModifier) == 16, "Offset mismatch for FFortDelMarVehicleTurboConfig::TargetSpeedModifier");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, BonusZones) == 40, "Offset mismatch for FFortDelMarVehicleTurboConfig::BonusZones");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, BonusZoneImpulseForce) == 56, "Offset mismatch for FFortDelMarVehicleTurboConfig::BonusZoneImpulseForce");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, BonusZoneSpeedDecaySeconds) == 60, "Offset mismatch for FFortDelMarVehicleTurboConfig::BonusZoneSpeedDecaySeconds");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, SuccessfulBonusZoneHitSeconds) == 64, "Offset mismatch for FFortDelMarVehicleTurboConfig::SuccessfulBonusZoneHitSeconds");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, ApproachingBonusZoneSeconds) == 68, "Offset mismatch for FFortDelMarVehicleTurboConfig::ApproachingBonusZoneSeconds");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, MaxMissingZoneSeconds) == 72, "Offset mismatch for FFortDelMarVehicleTurboConfig::MaxMissingZoneSeconds");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, MaxNumCharges) == 76, "Offset mismatch for FFortDelMarVehicleTurboConfig::MaxNumCharges");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, ChargeRegenRateSeconds) == 80, "Offset mismatch for FFortDelMarVehicleTurboConfig::ChargeRegenRateSeconds");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, RaceStartCharges) == 84, "Offset mismatch for FFortDelMarVehicleTurboConfig::RaceStartCharges");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, LapCompleteCharges) == 88, "Offset mismatch for FFortDelMarVehicleTurboConfig::LapCompleteCharges");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, TurboGainedForDriftBoostPotential) == 92, "Offset mismatch for FFortDelMarVehicleTurboConfig::TurboGainedForDriftBoostPotential");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, TurboGainedPerSecondAtMaxDriftPotential) == 96, "Offset mismatch for FFortDelMarVehicleTurboConfig::TurboGainedPerSecondAtMaxDriftPotential");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, MaxTurboChargesFromDrift) == 100, "Offset mismatch for FFortDelMarVehicleTurboConfig::MaxTurboChargesFromDrift");
static_assert(offsetof(FFortDelMarVehicleTurboConfig, bTerrainInvulnerabilityDuringTurbo) == 104, "Offset mismatch for FFortDelMarVehicleTurboConfig::bTerrainInvulnerabilityDuringTurbo");

// /Script/FortDelMarVehicle.FortDelMarWorldBonusSpeedGroup
// Kind: ScriptStruct; super: none
struct FFortDelMarWorldBonusSpeedGroup
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarVehicle.FortDelMarWorldBonusSpeedSourceCap
// Kind: ScriptStruct; super: none
struct FFortDelMarWorldBonusSpeedSourceCap
{
public:
    std::uint8_t Source[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t StackCap; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortDelMarWorldBonusSpeedSourceCap, Source) == 0, "Offset mismatch for FFortDelMarWorldBonusSpeedSourceCap::Source");
static_assert(offsetof(FFortDelMarWorldBonusSpeedSourceCap, StackCap) == 4, "Offset mismatch for FFortDelMarWorldBonusSpeedSourceCap::StackCap");

// /Script/FortDelMarVehicle.FortDelMarWorldBonusSpeedStack
// Kind: ScriptStruct; super: none
struct FFortDelMarWorldBonusSpeedStack
{
public:
    std::uint8_t Source[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float BonusSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyForce; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::int32_t GroupID; // 0x0010 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> ActorSource; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortDelMarWorldBonusSpeedStack, Source) == 0, "Offset mismatch for FFortDelMarWorldBonusSpeedStack::Source");
static_assert(offsetof(FFortDelMarWorldBonusSpeedStack, BonusSpeed) == 4, "Offset mismatch for FFortDelMarWorldBonusSpeedStack::BonusSpeed");
static_assert(offsetof(FFortDelMarWorldBonusSpeedStack, duration) == 8, "Offset mismatch for FFortDelMarWorldBonusSpeedStack::duration");
static_assert(offsetof(FFortDelMarWorldBonusSpeedStack, bApplyForce) == 12, "Offset mismatch for FFortDelMarWorldBonusSpeedStack::bApplyForce");
static_assert(offsetof(FFortDelMarWorldBonusSpeedStack, GroupID) == 16, "Offset mismatch for FFortDelMarWorldBonusSpeedStack::GroupID");
static_assert(offsetof(FFortDelMarWorldBonusSpeedStack, ActorSource) == 20, "Offset mismatch for FFortDelMarWorldBonusSpeedStack::ActorSource");

// /Script/FortDelMarVehicle.FortDelMarCameraModeOverrideComponent
// Kind: Class; super: FortCameraModeOverrideComponent
class UFortDelMarCameraModeOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CameraModeOverride; // 0x00C0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortDelMarCameraModeOverrideComponent, CameraModeOverride) == 192, "Offset mismatch for UFortDelMarCameraModeOverrideComponent::CameraModeOverride");

// /Script/FortDelMarVehicle.FortDelMarCameraShakeComponent
// Kind: Class; super: ControllerComponent
class UFortDelMarCameraShakeComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> ShakeIntensitySettingMap; // 0x00C0 (Size: 0x10, Type: MapProperty)
    void* JumpShakeEffect; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* HazardShakeEffect; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bUseVehicleLandedKickflipShake; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* VehicleLandedKickflipShake; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t VehicleLandedKickflipShakeIntensityCurve[0x50]; // 0x00F0 (Size: 0x50, Type: StructProperty)
    void* VehicleLandedCameraShakeEffect; // 0x0140 (Size: 0x8, Type: ClassProperty)
    std::uint8_t VehicleLandedShakeIntensityCurve[0x50]; // 0x0148 (Size: 0x50, Type: StructProperty)
    float MaxSecondsToDampenVehicleHit; // 0x0198 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x019C
    std::uint8_t VehicleHitShakeIntensityCurve[0x50]; // 0x01A0 (Size: 0x50, Type: StructProperty)
    std::uint8_t VehicleImpactShakeEffect[0x60]; // 0x01F0 (Size: 0x60, Type: StructProperty)
    std::uint8_t WallImpactShakeEffect[0x60]; // 0x0250 (Size: 0x60, Type: StructProperty)
    std::uint8_t WallNoRedirectImpactShakeEffect[0x60]; // 0x02B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t BaseAccelerationShakeEffect[0x60]; // 0x0310 (Size: 0x60, Type: StructProperty)
    TScriptInterface<void> Vehicle; // 0x0370 (Size: 0x10, Type: InterfaceProperty)
    TWeakObjectPtr<void> CachedPlayerController; // 0x0380 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarCameraShakeComponent, ShakeIntensitySettingMap) == 192, "Offset mismatch for UFortDelMarCameraShakeComponent::ShakeIntensitySettingMap");
static_assert(offsetof(UFortDelMarCameraShakeComponent, JumpShakeEffect) == 208, "Offset mismatch for UFortDelMarCameraShakeComponent::JumpShakeEffect");
static_assert(offsetof(UFortDelMarCameraShakeComponent, HazardShakeEffect) == 216, "Offset mismatch for UFortDelMarCameraShakeComponent::HazardShakeEffect");
static_assert(offsetof(UFortDelMarCameraShakeComponent, bUseVehicleLandedKickflipShake) == 224, "Offset mismatch for UFortDelMarCameraShakeComponent::bUseVehicleLandedKickflipShake");
static_assert(offsetof(UFortDelMarCameraShakeComponent, VehicleLandedKickflipShake) == 232, "Offset mismatch for UFortDelMarCameraShakeComponent::VehicleLandedKickflipShake");
static_assert(offsetof(UFortDelMarCameraShakeComponent, VehicleLandedKickflipShakeIntensityCurve) == 240, "Offset mismatch for UFortDelMarCameraShakeComponent::VehicleLandedKickflipShakeIntensityCurve");
static_assert(offsetof(UFortDelMarCameraShakeComponent, VehicleLandedCameraShakeEffect) == 320, "Offset mismatch for UFortDelMarCameraShakeComponent::VehicleLandedCameraShakeEffect");
static_assert(offsetof(UFortDelMarCameraShakeComponent, VehicleLandedShakeIntensityCurve) == 328, "Offset mismatch for UFortDelMarCameraShakeComponent::VehicleLandedShakeIntensityCurve");
static_assert(offsetof(UFortDelMarCameraShakeComponent, MaxSecondsToDampenVehicleHit) == 408, "Offset mismatch for UFortDelMarCameraShakeComponent::MaxSecondsToDampenVehicleHit");
static_assert(offsetof(UFortDelMarCameraShakeComponent, VehicleHitShakeIntensityCurve) == 416, "Offset mismatch for UFortDelMarCameraShakeComponent::VehicleHitShakeIntensityCurve");
static_assert(offsetof(UFortDelMarCameraShakeComponent, VehicleImpactShakeEffect) == 496, "Offset mismatch for UFortDelMarCameraShakeComponent::VehicleImpactShakeEffect");
static_assert(offsetof(UFortDelMarCameraShakeComponent, WallImpactShakeEffect) == 592, "Offset mismatch for UFortDelMarCameraShakeComponent::WallImpactShakeEffect");
static_assert(offsetof(UFortDelMarCameraShakeComponent, WallNoRedirectImpactShakeEffect) == 688, "Offset mismatch for UFortDelMarCameraShakeComponent::WallNoRedirectImpactShakeEffect");
static_assert(offsetof(UFortDelMarCameraShakeComponent, BaseAccelerationShakeEffect) == 784, "Offset mismatch for UFortDelMarCameraShakeComponent::BaseAccelerationShakeEffect");
static_assert(offsetof(UFortDelMarCameraShakeComponent, Vehicle) == 880, "Offset mismatch for UFortDelMarCameraShakeComponent::Vehicle");
static_assert(offsetof(UFortDelMarCameraShakeComponent, CachedPlayerController) == 896, "Offset mismatch for UFortDelMarCameraShakeComponent::CachedPlayerController");

// /Script/FortDelMarVehicle.FortDelMarCosmeticActor
// Kind: Class; super: Actor
class UFortDelMarCosmeticActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SpawnLogic; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CosmeticDependencies; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    TScriptInterface<void> Vehicle; // 0x0288 (Size: 0x10, Type: InterfaceProperty)
    void* VehicleConfig; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* VehicleCosmeticComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarCosmeticActor, SpawnLogic) == 624, "Offset mismatch for UFortDelMarCosmeticActor::SpawnLogic");
static_assert(offsetof(UFortDelMarCosmeticActor, CosmeticDependencies) == 632, "Offset mismatch for UFortDelMarCosmeticActor::CosmeticDependencies");
static_assert(offsetof(UFortDelMarCosmeticActor, Vehicle) == 648, "Offset mismatch for UFortDelMarCosmeticActor::Vehicle");
static_assert(offsetof(UFortDelMarCosmeticActor, VehicleConfig) == 664, "Offset mismatch for UFortDelMarCosmeticActor::VehicleConfig");
static_assert(offsetof(UFortDelMarCosmeticActor, VehicleCosmeticComponent) == 672, "Offset mismatch for UFortDelMarCosmeticActor::VehicleCosmeticComponent");

// /Script/FortDelMarVehicle.FortDelMarCosmeticActorSpawnLogic
// Kind: Class; super: Object
class UFortDelMarCosmeticActorSpawnLogic
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarVehicle.FortDelMarCosmeticActorSpawnLogic_AttachTo
// Kind: Class; super: FortDelMarCosmeticActorSpawnLogic
class UFortDelMarCosmeticActorSpawnLogic_AttachTo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName AttachSocket; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortDelMarCosmeticActorSpawnLogic_AttachTo, AttachSocket) == 40, "Offset mismatch for UFortDelMarCosmeticActorSpawnLogic_AttachTo::AttachSocket");

// /Script/FortDelMarVehicle.FortDelMarCosmeticActorSpawnLogic_AttachToEach
// Kind: Class; super: FortDelMarCosmeticActorSpawnLogic
class UFortDelMarCosmeticActorSpawnLogic_AttachToEach
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AttachSockets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarCosmeticActorSpawnLogic_AttachToEach, AttachSockets) == 40, "Offset mismatch for UFortDelMarCosmeticActorSpawnLogic_AttachToEach::AttachSockets");

// /Script/FortDelMarVehicle.FortDelMarCosmeticItemDefinition
// Kind: Class; super: FortAccountItemDefinition
class UFortDelMarCosmeticItemDefinition
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t Slot[0x8]; // 0x0128 (Size: 0x8, Type: StructProperty)
    TArray<void*> CosmeticActorClasses; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarCosmeticItemDefinition, Slot) == 296, "Offset mismatch for UFortDelMarCosmeticItemDefinition::Slot");
static_assert(offsetof(UFortDelMarCosmeticItemDefinition, CosmeticActorClasses) == 304, "Offset mismatch for UFortDelMarCosmeticItemDefinition::CosmeticActorClasses");

// /Script/FortDelMarVehicle.FortDelMarCosmeticsDatabase
// Kind: Class; super: PrimaryDataAsset
class UFortDelMarCosmeticsDatabase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Items; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SlotInfos; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarCosmeticsDatabase, Items) == 40, "Offset mismatch for UFortDelMarCosmeticsDatabase::Items");
static_assert(offsetof(UFortDelMarCosmeticsDatabase, SlotInfos) == 56, "Offset mismatch for UFortDelMarCosmeticsDatabase::SlotInfos");

// /Script/FortDelMarVehicle.FortDelMarLoadoutSave
// Kind: Class; super: SaveGame
class UFortDelMarLoadoutSave
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> EquippedLoadout; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortDelMarLoadoutSave, EquippedLoadout) == 40, "Offset mismatch for UFortDelMarLoadoutSave::EquippedLoadout");

// /Script/FortDelMarVehicle.FortDelMarNetworkInputComponent
// Kind: Class; super: ControllerComponent
class UFortDelMarNetworkInputComponent
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

static_assert(offsetof(UFortDelMarNetworkInputComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortDelMarNetworkInputComponent::PrimaryComponentTick");
static_assert(offsetof(UFortDelMarNetworkInputComponent, ComponentTags) == 104, "Offset mismatch for UFortDelMarNetworkInputComponent::ComponentTags");
static_assert(offsetof(UFortDelMarNetworkInputComponent, AssetUserData) == 120, "Offset mismatch for UFortDelMarNetworkInputComponent::AssetUserData");
static_assert(offsetof(UFortDelMarNetworkInputComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortDelMarNetworkInputComponent::UCSSerializationIndex");
static_assert(offsetof(UFortDelMarNetworkInputComponent, bNetAddressable) == 152, "Offset mismatch for UFortDelMarNetworkInputComponent::bNetAddressable");
static_assert(offsetof(UFortDelMarNetworkInputComponent, bAutoActivate) == 154, "Offset mismatch for UFortDelMarNetworkInputComponent::bAutoActivate");
static_assert(offsetof(UFortDelMarNetworkInputComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortDelMarNetworkInputComponent::bIsEditorOnly");
static_assert(offsetof(UFortDelMarNetworkInputComponent, CreationMethod) == 185, "Offset mismatch for UFortDelMarNetworkInputComponent::CreationMethod");
static_assert(offsetof(UFortDelMarNetworkInputComponent, OnComponentActivated) == 186, "Offset mismatch for UFortDelMarNetworkInputComponent::OnComponentActivated");
static_assert(offsetof(UFortDelMarNetworkInputComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortDelMarNetworkInputComponent::OnComponentDeactivated");

// /Script/FortDelMarVehicle.FortDelMarVehicle
// Kind: Class; super: FortAthenaSKVehicle
class UFortDelMarVehicle
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    void* DefaultCameraMode; // 0x2080 (Size: 0x8, Type: ClassProperty)
    TArray<void*> SeatIndexCameraModes; // 0x2088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bLocalDriverHasReplicatedVehicle; // 0x2098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x17]; // 0x2099
    std::uint8_t PendingDriverInputState[0x40]; // 0x20B0 (Size: 0x40, Type: StructProperty)
    std::uint8_t CurrentInputType; // 0x20F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x20F1
    float DistanceToPack; // 0x2110 (Size: 0x4, Type: FloatProperty)
    float DistanceFromTrackFinish; // 0x2114 (Size: 0x4, Type: FloatProperty)
    float RaceStatusSpeedModifier; // 0x2118 (Size: 0x4, Type: FloatProperty)
    float TurboBoostChanceCache; // 0x211C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ATTR_bVehicleThrottleDisabled; // 0x2120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x2121
    std::uint8_t ThrottleAction[0x10]; // 0x2128 (Size: 0x10, Type: StructProperty)
    std::uint8_t BrakeAction[0x10]; // 0x2138 (Size: 0x10, Type: StructProperty)
    std::uint8_t SteerAction[0x10]; // 0x2148 (Size: 0x10, Type: StructProperty)
    std::uint8_t SteerLeftAction[0x10]; // 0x2158 (Size: 0x10, Type: StructProperty)
    std::uint8_t SteerRightAction[0x10]; // 0x2168 (Size: 0x10, Type: StructProperty)
    std::uint8_t PitchAction[0x10]; // 0x2178 (Size: 0x10, Type: StructProperty)
    std::uint8_t PitchUpAction[0x10]; // 0x2188 (Size: 0x10, Type: StructProperty)
    std::uint8_t PitchDownAction[0x10]; // 0x2198 (Size: 0x10, Type: StructProperty)
    std::uint8_t RollAction[0x10]; // 0x21A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t YawAction[0x10]; // 0x21B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t DriftAction[0x10]; // 0x21C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t JumpAction[0x10]; // 0x21D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t KickFlipAction[0x10]; // 0x21E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnderthrustAction[0x10]; // 0x21F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TurboAction[0x10]; // 0x2208 (Size: 0x10, Type: StructProperty)
    std::uint8_t FortDelMarExitAction[0x10]; // 0x2218 (Size: 0x10, Type: StructProperty)
    std::uint8_t AirFreestyleAction[0x10]; // 0x2228 (Size: 0x10, Type: StructProperty)
    std::uint8_t StrafeAction[0x10]; // 0x2238 (Size: 0x10, Type: StructProperty)
    std::uint8_t AerialPitchAction[0x10]; // 0x2248 (Size: 0x10, Type: StructProperty)
    std::uint8_t DemolishAction[0x10]; // 0x2258 (Size: 0x10, Type: StructProperty)
    void* InputManagerClass; // 0x2268 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0004[0x18]; // 0x2270
    float IdleVelocityLengthThreshold; // 0x2288 (Size: 0x4, Type: FloatProperty)
    float IdleInputSecondsThreshold; // 0x228C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIdleFromNoInput; // 0x2290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x4F]; // 0x2291
    void* NetworkPhysicsComponent; // 0x22E0 (Size: 0x8, Type: ObjectProperty)
    void* CosmeticComponent; // 0x22E8 (Size: 0x8, Type: ObjectProperty)
    void* FortDelMarVehicleMovementSet; // 0x22F0 (Size: 0x8, Type: ObjectProperty)
    void* FortSettings; // 0x22F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x2300
    TArray<void*> WheelSkeletalMeshComps; // 0x2308 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PlayerInVehicleEvents; // 0x2318 (Size: 0x10, Type: MapProperty)
    std::int32_t NumAllowedVehicleCosmeticChanges; // 0x2328 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0007[0x4]; // 0x232C
    TArray<void*> CachedContacts; // 0x2330 (Size: 0x10, Type: ArrayProperty)
    float NearbyTrackDistanceThreshold; // 0x2340 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x14]; // 0x2344
    float MaxStableSpeedToUpdateWheels; // 0x2358 (Size: 0x4, Type: FloatProperty)
    float SecondsUntilVehicleHitVelocityClears; // 0x235C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideDamageFromInstigator; // 0x2360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x5F]; // 0x2361
    std::uint8_t ConfigOverrides[0xC70]; // 0x23C0 (Size: 0xC70, Type: StructProperty)
    float VisualSteerAngleInterpRate; // 0x3030 (Size: 0x4, Type: FloatProperty)
    float DriftVisualSteerAngleInterpRate; // 0x3034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideVisualSteeringAngle; // 0x3038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x3]; // 0x3039
    float DrivingVisualSteeringDegrees; // 0x303C (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriftSteeringDegreesCurve[0x50]; // 0x3040 (Size: 0x50, Type: StructProperty)
    std::uint8_t bShowVisualSteerAngleInAir; // 0x3090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x7]; // 0x3091
    void* BodySetup; // 0x3098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000C[0x18]; // 0x30A0
    std::uint8_t VehicleAbilityConfig[0x14]; // 0x30B8 (Size: 0x14, Type: StructProperty)
    std::uint8_t VehicleRuntimeConfig[0xC]; // 0x30CC (Size: 0xC, Type: StructProperty)
    TWeakObjectPtr<void> GlobalInputDisabler; // 0x30D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_000D[0x10]; // 0x30E0
    FMulticastInlineDelegate OnVehicleWheelsLeftGround; // 0x30F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSpeedometerSpeedChanged; // 0x3100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float MinNoThrottleSpeed; // 0x3110 (Size: 0x4, Type: FloatProperty)
    float SpeedSlowdownSpeedometerSeconds; // 0x3114 (Size: 0x4, Type: FloatProperty)
    TArray<void*> SpeedSlowdownTags; // 0x3118 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InvertSteerMethod; // 0x3128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPitchInverted; // 0x3129 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVerticalKickflipInverted; // 0x312A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAerialPitchActivationEnabled; // 0x312B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x34]; // 0x312C
    FMulticastInlineDelegate OnBonusSpeedActivated; // 0x3160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBonusSpeedDeactivated; // 0x3170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBonusSpeedChanged; // 0x3180 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAnyWheelsOnGroundChanged; // 0x3190 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWheelsOnGroundChanged; // 0x31A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleForwardStateChanged; // 0x31B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_000F[0xD8]; // 0x31C0
    FMulticastInlineDelegate OnFortDelMarVehicleHitWall; // 0x3298 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFortDelMarVehicleHitVehicle; // 0x32A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFortDelMarVehicleHitByVehicle; // 0x32B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleLanded; // 0x32C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0010[0x40]; // 0x32D8
    FMulticastInlineDelegate OnWorldBonusSpeedStackGained; // 0x3318 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorldBonusSpeedStackLost; // 0x3328 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0011[0x30]; // 0x3338
    FMulticastInlineDelegate OnVehicleStartedSkydiving; // 0x3368 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleStoppedSkydiving; // 0x3378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0012[0x10]; // 0x3388
    FMulticastInlineDelegate OnDriftActivated; // 0x3398 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftDeactivated; // 0x33A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftSlipAngleRatioChanged; // 0x33B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftKickActivated; // 0x33C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftKickDeactivated; // 0x33D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftControlChanged; // 0x33E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftDurationChanged; // 0x33F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0013[0x50]; // 0x3408
    FMulticastInlineDelegate OnEnteredDriftBoostRange; // 0x3458 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnExitedDriftBoostRange; // 0x3468 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartedLosingAppliedDriftBoost; // 0x3478 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftBoostActivated; // 0x3488 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftBoostDeactivated; // 0x3498 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMaxPotentialReached; // 0x34A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMaxPotentialLost; // 0x34B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllPotentialLost; // 0x34C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEarnedDriftBoost; // 0x34D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPotentialDriftBoostChanged; // 0x34E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0014[0x38]; // 0x34F8
    FMulticastInlineDelegate OnDraftActivated; // 0x3530 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDraftDeactivated; // 0x3540 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDraftStateChanged; // 0x3550 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReachedMaxBonusSpeed; // 0x3560 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0015[0x34]; // 0x3570
    std::uint8_t RubberbandingConfig[0x5C]; // 0x35A4 (Size: 0x5C, Type: StructProperty)
    FMulticastInlineDelegate OnStartlineBoostActivated; // 0x3600 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartlineBoostDeactivated; // 0x3610 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartlineBoostFailed; // 0x3620 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t StartlineBoostData[0x30]; // 0x3630 (Size: 0x30, Type: StructProperty)
    FMulticastInlineDelegate OnStrafeActivated; // 0x3660 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStrafeDeactivated; // 0x3670 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStrafeCooldownChanged; // 0x3680 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStrafeUsabilityChanged; // 0x3690 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStrafeDisabledChanged; // 0x36A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0016[0x20]; // 0x36B0
    FMulticastInlineDelegate OnTurboActivated; // 0x36D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTurboDeactivated; // 0x36E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTurboChargesUpdated; // 0x36F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTurboBonusZoneStateChanged; // 0x3700 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTurboChargeUsed; // 0x3710 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float TurboCharges; // 0x3720 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0017[0x3C]; // 0x3724
    FMulticastInlineDelegate OnKickflipActivated; // 0x3760 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipDeactivated; // 0x3770 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipSuctionActivated; // 0x3780 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipSuctionDeactivated; // 0x3790 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipDistanceToSuctionSurfaceChanged; // 0x37A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipDurationChanged; // 0x37B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKickflipActivationChargesChanged; // 0x37C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0018[0x88]; // 0x37D0
    FMulticastInlineDelegate OnReattachmentActivated; // 0x3858 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReattachmentDeactivated; // 0x3868 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ForcedReattachmentDirection[0x40]; // 0x3878 (Size: 0x40, Type: StructProperty)
    FMulticastInlineDelegate OnUnderthrustActivated; // 0x38B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUnderthrustDeactivated; // 0x38C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUnderthrustPercentChanged; // 0x38D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUnderthrustExhausted; // 0x38E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0019[0x18]; // 0x38F8
    FMulticastInlineDelegate OnJumpActivated; // 0x3910 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnJumpDeactivated; // 0x3920 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_001A[0x8]; // 0x3930
    float DemolitionRespawnSeconds; // 0x3938 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_001B[0x4]; // 0x393C
    FMulticastInlineDelegate OnVehicleDemolished; // 0x3940 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDemolishPressDurationUpdated; // 0x3950 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float HealthOverride; // 0x3960 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_001C[0x1C]; // 0x3964
    FMulticastInlineDelegate OnHazardHit; // 0x3980 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInvulnerabilityActivated; // 0x3990 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInvulnerabilityDeactivated; // 0x39A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_001D[0x4]; // 0x39B0
    float MaxSpawnBroadcastSeconds; // 0x39B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpawnInfo[0x10]; // 0x39B8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate OnFortDelMarVehicleSpawned; // 0x39C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bAllowExitingVehicle; // 0x39D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_001E[0x7]; // 0x39D9
    FMulticastInlineDelegate OnVehicleTeleportEntered; // 0x39E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleTeleportExit; // 0x39F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleAppliedTeleportRotation; // 0x3A00 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleAppliedTeleportLocation; // 0x3A10 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnvironmentEffectCueActivated; // 0x3A20 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnvironmentEffectCueRemoved; // 0x3A30 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAirFreestyleActivated; // 0x3A40 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAirFreestyleDeactivated; // 0x3A50 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_001F[0x8]; // 0x3A60
    void* CachedVehicleAudioController; // 0x3A68 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bVehicleCollisionsEnabled; // 0x3A70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPawnCollisionsEnabled; // 0x3A71 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0020[0xE]; // 0x3A72
    std::uint8_t bUsePredictiveInterpolation; // 0x3A80 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0021[0x7]; // 0x3A81
    void* PostProcessComp; // 0x3A88 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0022[0x8]; // 0x3A90
    FMulticastInlineDelegate OnVehicleCustomizationCompletedDelegate; // 0x3A98 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehiclePartParamsUpdatedDelegate; // 0x3AA8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0023[0x18]; // 0x3AB8
    FMulticastInlineDelegate OnEnterDelMarVehicle; // 0x3AD0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortDelMarVehicle, DefaultCameraMode) == 8320, "Offset mismatch for UFortDelMarVehicle::DefaultCameraMode");
static_assert(offsetof(UFortDelMarVehicle, SeatIndexCameraModes) == 8328, "Offset mismatch for UFortDelMarVehicle::SeatIndexCameraModes");
static_assert(offsetof(UFortDelMarVehicle, bLocalDriverHasReplicatedVehicle) == 8344, "Offset mismatch for UFortDelMarVehicle::bLocalDriverHasReplicatedVehicle");
static_assert(offsetof(UFortDelMarVehicle, PendingDriverInputState) == 8368, "Offset mismatch for UFortDelMarVehicle::PendingDriverInputState");
static_assert(offsetof(UFortDelMarVehicle, CurrentInputType) == 8432, "Offset mismatch for UFortDelMarVehicle::CurrentInputType");
static_assert(offsetof(UFortDelMarVehicle, DistanceToPack) == 8464, "Offset mismatch for UFortDelMarVehicle::DistanceToPack");
static_assert(offsetof(UFortDelMarVehicle, DistanceFromTrackFinish) == 8468, "Offset mismatch for UFortDelMarVehicle::DistanceFromTrackFinish");
static_assert(offsetof(UFortDelMarVehicle, RaceStatusSpeedModifier) == 8472, "Offset mismatch for UFortDelMarVehicle::RaceStatusSpeedModifier");
static_assert(offsetof(UFortDelMarVehicle, TurboBoostChanceCache) == 8476, "Offset mismatch for UFortDelMarVehicle::TurboBoostChanceCache");
static_assert(offsetof(UFortDelMarVehicle, ATTR_bVehicleThrottleDisabled) == 8480, "Offset mismatch for UFortDelMarVehicle::ATTR_bVehicleThrottleDisabled");
static_assert(offsetof(UFortDelMarVehicle, ThrottleAction) == 8488, "Offset mismatch for UFortDelMarVehicle::ThrottleAction");
static_assert(offsetof(UFortDelMarVehicle, BrakeAction) == 8504, "Offset mismatch for UFortDelMarVehicle::BrakeAction");
static_assert(offsetof(UFortDelMarVehicle, SteerAction) == 8520, "Offset mismatch for UFortDelMarVehicle::SteerAction");
static_assert(offsetof(UFortDelMarVehicle, SteerLeftAction) == 8536, "Offset mismatch for UFortDelMarVehicle::SteerLeftAction");
static_assert(offsetof(UFortDelMarVehicle, SteerRightAction) == 8552, "Offset mismatch for UFortDelMarVehicle::SteerRightAction");
static_assert(offsetof(UFortDelMarVehicle, PitchAction) == 8568, "Offset mismatch for UFortDelMarVehicle::PitchAction");
static_assert(offsetof(UFortDelMarVehicle, PitchUpAction) == 8584, "Offset mismatch for UFortDelMarVehicle::PitchUpAction");
static_assert(offsetof(UFortDelMarVehicle, PitchDownAction) == 8600, "Offset mismatch for UFortDelMarVehicle::PitchDownAction");
static_assert(offsetof(UFortDelMarVehicle, RollAction) == 8616, "Offset mismatch for UFortDelMarVehicle::RollAction");
static_assert(offsetof(UFortDelMarVehicle, YawAction) == 8632, "Offset mismatch for UFortDelMarVehicle::YawAction");
static_assert(offsetof(UFortDelMarVehicle, DriftAction) == 8648, "Offset mismatch for UFortDelMarVehicle::DriftAction");
static_assert(offsetof(UFortDelMarVehicle, JumpAction) == 8664, "Offset mismatch for UFortDelMarVehicle::JumpAction");
static_assert(offsetof(UFortDelMarVehicle, KickFlipAction) == 8680, "Offset mismatch for UFortDelMarVehicle::KickFlipAction");
static_assert(offsetof(UFortDelMarVehicle, UnderthrustAction) == 8696, "Offset mismatch for UFortDelMarVehicle::UnderthrustAction");
static_assert(offsetof(UFortDelMarVehicle, TurboAction) == 8712, "Offset mismatch for UFortDelMarVehicle::TurboAction");
static_assert(offsetof(UFortDelMarVehicle, FortDelMarExitAction) == 8728, "Offset mismatch for UFortDelMarVehicle::FortDelMarExitAction");
static_assert(offsetof(UFortDelMarVehicle, AirFreestyleAction) == 8744, "Offset mismatch for UFortDelMarVehicle::AirFreestyleAction");
static_assert(offsetof(UFortDelMarVehicle, StrafeAction) == 8760, "Offset mismatch for UFortDelMarVehicle::StrafeAction");
static_assert(offsetof(UFortDelMarVehicle, AerialPitchAction) == 8776, "Offset mismatch for UFortDelMarVehicle::AerialPitchAction");
static_assert(offsetof(UFortDelMarVehicle, DemolishAction) == 8792, "Offset mismatch for UFortDelMarVehicle::DemolishAction");
static_assert(offsetof(UFortDelMarVehicle, InputManagerClass) == 8808, "Offset mismatch for UFortDelMarVehicle::InputManagerClass");
static_assert(offsetof(UFortDelMarVehicle, IdleVelocityLengthThreshold) == 8840, "Offset mismatch for UFortDelMarVehicle::IdleVelocityLengthThreshold");
static_assert(offsetof(UFortDelMarVehicle, IdleInputSecondsThreshold) == 8844, "Offset mismatch for UFortDelMarVehicle::IdleInputSecondsThreshold");
static_assert(offsetof(UFortDelMarVehicle, bIdleFromNoInput) == 8848, "Offset mismatch for UFortDelMarVehicle::bIdleFromNoInput");
static_assert(offsetof(UFortDelMarVehicle, NetworkPhysicsComponent) == 8928, "Offset mismatch for UFortDelMarVehicle::NetworkPhysicsComponent");
static_assert(offsetof(UFortDelMarVehicle, CosmeticComponent) == 8936, "Offset mismatch for UFortDelMarVehicle::CosmeticComponent");
static_assert(offsetof(UFortDelMarVehicle, FortDelMarVehicleMovementSet) == 8944, "Offset mismatch for UFortDelMarVehicle::FortDelMarVehicleMovementSet");
static_assert(offsetof(UFortDelMarVehicle, FortSettings) == 8952, "Offset mismatch for UFortDelMarVehicle::FortSettings");
static_assert(offsetof(UFortDelMarVehicle, WheelSkeletalMeshComps) == 8968, "Offset mismatch for UFortDelMarVehicle::WheelSkeletalMeshComps");
static_assert(offsetof(UFortDelMarVehicle, PlayerInVehicleEvents) == 8984, "Offset mismatch for UFortDelMarVehicle::PlayerInVehicleEvents");
static_assert(offsetof(UFortDelMarVehicle, NumAllowedVehicleCosmeticChanges) == 9000, "Offset mismatch for UFortDelMarVehicle::NumAllowedVehicleCosmeticChanges");
static_assert(offsetof(UFortDelMarVehicle, CachedContacts) == 9008, "Offset mismatch for UFortDelMarVehicle::CachedContacts");
static_assert(offsetof(UFortDelMarVehicle, NearbyTrackDistanceThreshold) == 9024, "Offset mismatch for UFortDelMarVehicle::NearbyTrackDistanceThreshold");
static_assert(offsetof(UFortDelMarVehicle, MaxStableSpeedToUpdateWheels) == 9048, "Offset mismatch for UFortDelMarVehicle::MaxStableSpeedToUpdateWheels");
static_assert(offsetof(UFortDelMarVehicle, SecondsUntilVehicleHitVelocityClears) == 9052, "Offset mismatch for UFortDelMarVehicle::SecondsUntilVehicleHitVelocityClears");
static_assert(offsetof(UFortDelMarVehicle, bOverrideDamageFromInstigator) == 9056, "Offset mismatch for UFortDelMarVehicle::bOverrideDamageFromInstigator");
static_assert(offsetof(UFortDelMarVehicle, ConfigOverrides) == 9152, "Offset mismatch for UFortDelMarVehicle::ConfigOverrides");
static_assert(offsetof(UFortDelMarVehicle, VisualSteerAngleInterpRate) == 12336, "Offset mismatch for UFortDelMarVehicle::VisualSteerAngleInterpRate");
static_assert(offsetof(UFortDelMarVehicle, DriftVisualSteerAngleInterpRate) == 12340, "Offset mismatch for UFortDelMarVehicle::DriftVisualSteerAngleInterpRate");
static_assert(offsetof(UFortDelMarVehicle, bOverrideVisualSteeringAngle) == 12344, "Offset mismatch for UFortDelMarVehicle::bOverrideVisualSteeringAngle");
static_assert(offsetof(UFortDelMarVehicle, DrivingVisualSteeringDegrees) == 12348, "Offset mismatch for UFortDelMarVehicle::DrivingVisualSteeringDegrees");
static_assert(offsetof(UFortDelMarVehicle, DriftSteeringDegreesCurve) == 12352, "Offset mismatch for UFortDelMarVehicle::DriftSteeringDegreesCurve");
static_assert(offsetof(UFortDelMarVehicle, bShowVisualSteerAngleInAir) == 12432, "Offset mismatch for UFortDelMarVehicle::bShowVisualSteerAngleInAir");
static_assert(offsetof(UFortDelMarVehicle, BodySetup) == 12440, "Offset mismatch for UFortDelMarVehicle::BodySetup");
static_assert(offsetof(UFortDelMarVehicle, VehicleAbilityConfig) == 12472, "Offset mismatch for UFortDelMarVehicle::VehicleAbilityConfig");
static_assert(offsetof(UFortDelMarVehicle, VehicleRuntimeConfig) == 12492, "Offset mismatch for UFortDelMarVehicle::VehicleRuntimeConfig");
static_assert(offsetof(UFortDelMarVehicle, GlobalInputDisabler) == 12504, "Offset mismatch for UFortDelMarVehicle::GlobalInputDisabler");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleWheelsLeftGround) == 12528, "Offset mismatch for UFortDelMarVehicle::OnVehicleWheelsLeftGround");
static_assert(offsetof(UFortDelMarVehicle, OnSpeedometerSpeedChanged) == 12544, "Offset mismatch for UFortDelMarVehicle::OnSpeedometerSpeedChanged");
static_assert(offsetof(UFortDelMarVehicle, MinNoThrottleSpeed) == 12560, "Offset mismatch for UFortDelMarVehicle::MinNoThrottleSpeed");
static_assert(offsetof(UFortDelMarVehicle, SpeedSlowdownSpeedometerSeconds) == 12564, "Offset mismatch for UFortDelMarVehicle::SpeedSlowdownSpeedometerSeconds");
static_assert(offsetof(UFortDelMarVehicle, SpeedSlowdownTags) == 12568, "Offset mismatch for UFortDelMarVehicle::SpeedSlowdownTags");
static_assert(offsetof(UFortDelMarVehicle, InvertSteerMethod) == 12584, "Offset mismatch for UFortDelMarVehicle::InvertSteerMethod");
static_assert(offsetof(UFortDelMarVehicle, bPitchInverted) == 12585, "Offset mismatch for UFortDelMarVehicle::bPitchInverted");
static_assert(offsetof(UFortDelMarVehicle, bVerticalKickflipInverted) == 12586, "Offset mismatch for UFortDelMarVehicle::bVerticalKickflipInverted");
static_assert(offsetof(UFortDelMarVehicle, bAerialPitchActivationEnabled) == 12587, "Offset mismatch for UFortDelMarVehicle::bAerialPitchActivationEnabled");
static_assert(offsetof(UFortDelMarVehicle, OnBonusSpeedActivated) == 12640, "Offset mismatch for UFortDelMarVehicle::OnBonusSpeedActivated");
static_assert(offsetof(UFortDelMarVehicle, OnBonusSpeedDeactivated) == 12656, "Offset mismatch for UFortDelMarVehicle::OnBonusSpeedDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnBonusSpeedChanged) == 12672, "Offset mismatch for UFortDelMarVehicle::OnBonusSpeedChanged");
static_assert(offsetof(UFortDelMarVehicle, OnAnyWheelsOnGroundChanged) == 12688, "Offset mismatch for UFortDelMarVehicle::OnAnyWheelsOnGroundChanged");
static_assert(offsetof(UFortDelMarVehicle, OnWheelsOnGroundChanged) == 12704, "Offset mismatch for UFortDelMarVehicle::OnWheelsOnGroundChanged");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleForwardStateChanged) == 12720, "Offset mismatch for UFortDelMarVehicle::OnVehicleForwardStateChanged");
static_assert(offsetof(UFortDelMarVehicle, OnFortDelMarVehicleHitWall) == 12952, "Offset mismatch for UFortDelMarVehicle::OnFortDelMarVehicleHitWall");
static_assert(offsetof(UFortDelMarVehicle, OnFortDelMarVehicleHitVehicle) == 12968, "Offset mismatch for UFortDelMarVehicle::OnFortDelMarVehicleHitVehicle");
static_assert(offsetof(UFortDelMarVehicle, OnFortDelMarVehicleHitByVehicle) == 12984, "Offset mismatch for UFortDelMarVehicle::OnFortDelMarVehicleHitByVehicle");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleLanded) == 13000, "Offset mismatch for UFortDelMarVehicle::OnVehicleLanded");
static_assert(offsetof(UFortDelMarVehicle, OnWorldBonusSpeedStackGained) == 13080, "Offset mismatch for UFortDelMarVehicle::OnWorldBonusSpeedStackGained");
static_assert(offsetof(UFortDelMarVehicle, OnWorldBonusSpeedStackLost) == 13096, "Offset mismatch for UFortDelMarVehicle::OnWorldBonusSpeedStackLost");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleStartedSkydiving) == 13160, "Offset mismatch for UFortDelMarVehicle::OnVehicleStartedSkydiving");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleStoppedSkydiving) == 13176, "Offset mismatch for UFortDelMarVehicle::OnVehicleStoppedSkydiving");
static_assert(offsetof(UFortDelMarVehicle, OnDriftActivated) == 13208, "Offset mismatch for UFortDelMarVehicle::OnDriftActivated");
static_assert(offsetof(UFortDelMarVehicle, OnDriftDeactivated) == 13224, "Offset mismatch for UFortDelMarVehicle::OnDriftDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnDriftSlipAngleRatioChanged) == 13240, "Offset mismatch for UFortDelMarVehicle::OnDriftSlipAngleRatioChanged");
static_assert(offsetof(UFortDelMarVehicle, OnDriftKickActivated) == 13256, "Offset mismatch for UFortDelMarVehicle::OnDriftKickActivated");
static_assert(offsetof(UFortDelMarVehicle, OnDriftKickDeactivated) == 13272, "Offset mismatch for UFortDelMarVehicle::OnDriftKickDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnDriftControlChanged) == 13288, "Offset mismatch for UFortDelMarVehicle::OnDriftControlChanged");
static_assert(offsetof(UFortDelMarVehicle, OnDriftDurationChanged) == 13304, "Offset mismatch for UFortDelMarVehicle::OnDriftDurationChanged");
static_assert(offsetof(UFortDelMarVehicle, OnEnteredDriftBoostRange) == 13400, "Offset mismatch for UFortDelMarVehicle::OnEnteredDriftBoostRange");
static_assert(offsetof(UFortDelMarVehicle, OnExitedDriftBoostRange) == 13416, "Offset mismatch for UFortDelMarVehicle::OnExitedDriftBoostRange");
static_assert(offsetof(UFortDelMarVehicle, OnStartedLosingAppliedDriftBoost) == 13432, "Offset mismatch for UFortDelMarVehicle::OnStartedLosingAppliedDriftBoost");
static_assert(offsetof(UFortDelMarVehicle, OnDriftBoostActivated) == 13448, "Offset mismatch for UFortDelMarVehicle::OnDriftBoostActivated");
static_assert(offsetof(UFortDelMarVehicle, OnDriftBoostDeactivated) == 13464, "Offset mismatch for UFortDelMarVehicle::OnDriftBoostDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnMaxPotentialReached) == 13480, "Offset mismatch for UFortDelMarVehicle::OnMaxPotentialReached");
static_assert(offsetof(UFortDelMarVehicle, OnMaxPotentialLost) == 13496, "Offset mismatch for UFortDelMarVehicle::OnMaxPotentialLost");
static_assert(offsetof(UFortDelMarVehicle, OnAllPotentialLost) == 13512, "Offset mismatch for UFortDelMarVehicle::OnAllPotentialLost");
static_assert(offsetof(UFortDelMarVehicle, OnEarnedDriftBoost) == 13528, "Offset mismatch for UFortDelMarVehicle::OnEarnedDriftBoost");
static_assert(offsetof(UFortDelMarVehicle, OnPotentialDriftBoostChanged) == 13544, "Offset mismatch for UFortDelMarVehicle::OnPotentialDriftBoostChanged");
static_assert(offsetof(UFortDelMarVehicle, OnDraftActivated) == 13616, "Offset mismatch for UFortDelMarVehicle::OnDraftActivated");
static_assert(offsetof(UFortDelMarVehicle, OnDraftDeactivated) == 13632, "Offset mismatch for UFortDelMarVehicle::OnDraftDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnDraftStateChanged) == 13648, "Offset mismatch for UFortDelMarVehicle::OnDraftStateChanged");
static_assert(offsetof(UFortDelMarVehicle, OnReachedMaxBonusSpeed) == 13664, "Offset mismatch for UFortDelMarVehicle::OnReachedMaxBonusSpeed");
static_assert(offsetof(UFortDelMarVehicle, RubberbandingConfig) == 13732, "Offset mismatch for UFortDelMarVehicle::RubberbandingConfig");
static_assert(offsetof(UFortDelMarVehicle, OnStartlineBoostActivated) == 13824, "Offset mismatch for UFortDelMarVehicle::OnStartlineBoostActivated");
static_assert(offsetof(UFortDelMarVehicle, OnStartlineBoostDeactivated) == 13840, "Offset mismatch for UFortDelMarVehicle::OnStartlineBoostDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnStartlineBoostFailed) == 13856, "Offset mismatch for UFortDelMarVehicle::OnStartlineBoostFailed");
static_assert(offsetof(UFortDelMarVehicle, StartlineBoostData) == 13872, "Offset mismatch for UFortDelMarVehicle::StartlineBoostData");
static_assert(offsetof(UFortDelMarVehicle, OnStrafeActivated) == 13920, "Offset mismatch for UFortDelMarVehicle::OnStrafeActivated");
static_assert(offsetof(UFortDelMarVehicle, OnStrafeDeactivated) == 13936, "Offset mismatch for UFortDelMarVehicle::OnStrafeDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnStrafeCooldownChanged) == 13952, "Offset mismatch for UFortDelMarVehicle::OnStrafeCooldownChanged");
static_assert(offsetof(UFortDelMarVehicle, OnStrafeUsabilityChanged) == 13968, "Offset mismatch for UFortDelMarVehicle::OnStrafeUsabilityChanged");
static_assert(offsetof(UFortDelMarVehicle, OnStrafeDisabledChanged) == 13984, "Offset mismatch for UFortDelMarVehicle::OnStrafeDisabledChanged");
static_assert(offsetof(UFortDelMarVehicle, OnTurboActivated) == 14032, "Offset mismatch for UFortDelMarVehicle::OnTurboActivated");
static_assert(offsetof(UFortDelMarVehicle, OnTurboDeactivated) == 14048, "Offset mismatch for UFortDelMarVehicle::OnTurboDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnTurboChargesUpdated) == 14064, "Offset mismatch for UFortDelMarVehicle::OnTurboChargesUpdated");
static_assert(offsetof(UFortDelMarVehicle, OnTurboBonusZoneStateChanged) == 14080, "Offset mismatch for UFortDelMarVehicle::OnTurboBonusZoneStateChanged");
static_assert(offsetof(UFortDelMarVehicle, OnTurboChargeUsed) == 14096, "Offset mismatch for UFortDelMarVehicle::OnTurboChargeUsed");
static_assert(offsetof(UFortDelMarVehicle, TurboCharges) == 14112, "Offset mismatch for UFortDelMarVehicle::TurboCharges");
static_assert(offsetof(UFortDelMarVehicle, OnKickflipActivated) == 14176, "Offset mismatch for UFortDelMarVehicle::OnKickflipActivated");
static_assert(offsetof(UFortDelMarVehicle, OnKickflipDeactivated) == 14192, "Offset mismatch for UFortDelMarVehicle::OnKickflipDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnKickflipSuctionActivated) == 14208, "Offset mismatch for UFortDelMarVehicle::OnKickflipSuctionActivated");
static_assert(offsetof(UFortDelMarVehicle, OnKickflipSuctionDeactivated) == 14224, "Offset mismatch for UFortDelMarVehicle::OnKickflipSuctionDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnKickflipDistanceToSuctionSurfaceChanged) == 14240, "Offset mismatch for UFortDelMarVehicle::OnKickflipDistanceToSuctionSurfaceChanged");
static_assert(offsetof(UFortDelMarVehicle, OnKickflipDurationChanged) == 14256, "Offset mismatch for UFortDelMarVehicle::OnKickflipDurationChanged");
static_assert(offsetof(UFortDelMarVehicle, OnKickflipActivationChargesChanged) == 14272, "Offset mismatch for UFortDelMarVehicle::OnKickflipActivationChargesChanged");
static_assert(offsetof(UFortDelMarVehicle, OnReattachmentActivated) == 14424, "Offset mismatch for UFortDelMarVehicle::OnReattachmentActivated");
static_assert(offsetof(UFortDelMarVehicle, OnReattachmentDeactivated) == 14440, "Offset mismatch for UFortDelMarVehicle::OnReattachmentDeactivated");
static_assert(offsetof(UFortDelMarVehicle, ForcedReattachmentDirection) == 14456, "Offset mismatch for UFortDelMarVehicle::ForcedReattachmentDirection");
static_assert(offsetof(UFortDelMarVehicle, OnUnderthrustActivated) == 14520, "Offset mismatch for UFortDelMarVehicle::OnUnderthrustActivated");
static_assert(offsetof(UFortDelMarVehicle, OnUnderthrustDeactivated) == 14536, "Offset mismatch for UFortDelMarVehicle::OnUnderthrustDeactivated");
static_assert(offsetof(UFortDelMarVehicle, OnUnderthrustPercentChanged) == 14552, "Offset mismatch for UFortDelMarVehicle::OnUnderthrustPercentChanged");
static_assert(offsetof(UFortDelMarVehicle, OnUnderthrustExhausted) == 14568, "Offset mismatch for UFortDelMarVehicle::OnUnderthrustExhausted");
static_assert(offsetof(UFortDelMarVehicle, OnJumpActivated) == 14608, "Offset mismatch for UFortDelMarVehicle::OnJumpActivated");
static_assert(offsetof(UFortDelMarVehicle, OnJumpDeactivated) == 14624, "Offset mismatch for UFortDelMarVehicle::OnJumpDeactivated");
static_assert(offsetof(UFortDelMarVehicle, DemolitionRespawnSeconds) == 14648, "Offset mismatch for UFortDelMarVehicle::DemolitionRespawnSeconds");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleDemolished) == 14656, "Offset mismatch for UFortDelMarVehicle::OnVehicleDemolished");
static_assert(offsetof(UFortDelMarVehicle, OnDemolishPressDurationUpdated) == 14672, "Offset mismatch for UFortDelMarVehicle::OnDemolishPressDurationUpdated");
static_assert(offsetof(UFortDelMarVehicle, HealthOverride) == 14688, "Offset mismatch for UFortDelMarVehicle::HealthOverride");
static_assert(offsetof(UFortDelMarVehicle, OnHazardHit) == 14720, "Offset mismatch for UFortDelMarVehicle::OnHazardHit");
static_assert(offsetof(UFortDelMarVehicle, OnInvulnerabilityActivated) == 14736, "Offset mismatch for UFortDelMarVehicle::OnInvulnerabilityActivated");
static_assert(offsetof(UFortDelMarVehicle, OnInvulnerabilityDeactivated) == 14752, "Offset mismatch for UFortDelMarVehicle::OnInvulnerabilityDeactivated");
static_assert(offsetof(UFortDelMarVehicle, MaxSpawnBroadcastSeconds) == 14772, "Offset mismatch for UFortDelMarVehicle::MaxSpawnBroadcastSeconds");
static_assert(offsetof(UFortDelMarVehicle, SpawnInfo) == 14776, "Offset mismatch for UFortDelMarVehicle::SpawnInfo");
static_assert(offsetof(UFortDelMarVehicle, OnFortDelMarVehicleSpawned) == 14792, "Offset mismatch for UFortDelMarVehicle::OnFortDelMarVehicleSpawned");
static_assert(offsetof(UFortDelMarVehicle, bAllowExitingVehicle) == 14808, "Offset mismatch for UFortDelMarVehicle::bAllowExitingVehicle");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleTeleportEntered) == 14816, "Offset mismatch for UFortDelMarVehicle::OnVehicleTeleportEntered");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleTeleportExit) == 14832, "Offset mismatch for UFortDelMarVehicle::OnVehicleTeleportExit");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleAppliedTeleportRotation) == 14848, "Offset mismatch for UFortDelMarVehicle::OnVehicleAppliedTeleportRotation");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleAppliedTeleportLocation) == 14864, "Offset mismatch for UFortDelMarVehicle::OnVehicleAppliedTeleportLocation");
static_assert(offsetof(UFortDelMarVehicle, OnEnvironmentEffectCueActivated) == 14880, "Offset mismatch for UFortDelMarVehicle::OnEnvironmentEffectCueActivated");
static_assert(offsetof(UFortDelMarVehicle, OnEnvironmentEffectCueRemoved) == 14896, "Offset mismatch for UFortDelMarVehicle::OnEnvironmentEffectCueRemoved");
static_assert(offsetof(UFortDelMarVehicle, OnAirFreestyleActivated) == 14912, "Offset mismatch for UFortDelMarVehicle::OnAirFreestyleActivated");
static_assert(offsetof(UFortDelMarVehicle, OnAirFreestyleDeactivated) == 14928, "Offset mismatch for UFortDelMarVehicle::OnAirFreestyleDeactivated");
static_assert(offsetof(UFortDelMarVehicle, CachedVehicleAudioController) == 14952, "Offset mismatch for UFortDelMarVehicle::CachedVehicleAudioController");
static_assert(offsetof(UFortDelMarVehicle, bVehicleCollisionsEnabled) == 14960, "Offset mismatch for UFortDelMarVehicle::bVehicleCollisionsEnabled");
static_assert(offsetof(UFortDelMarVehicle, bPawnCollisionsEnabled) == 14961, "Offset mismatch for UFortDelMarVehicle::bPawnCollisionsEnabled");
static_assert(offsetof(UFortDelMarVehicle, bUsePredictiveInterpolation) == 14976, "Offset mismatch for UFortDelMarVehicle::bUsePredictiveInterpolation");
static_assert(offsetof(UFortDelMarVehicle, PostProcessComp) == 14984, "Offset mismatch for UFortDelMarVehicle::PostProcessComp");
static_assert(offsetof(UFortDelMarVehicle, OnVehicleCustomizationCompletedDelegate) == 15000, "Offset mismatch for UFortDelMarVehicle::OnVehicleCustomizationCompletedDelegate");
static_assert(offsetof(UFortDelMarVehicle, OnVehiclePartParamsUpdatedDelegate) == 15016, "Offset mismatch for UFortDelMarVehicle::OnVehiclePartParamsUpdatedDelegate");
static_assert(offsetof(UFortDelMarVehicle, OnEnterDelMarVehicle) == 15056, "Offset mismatch for UFortDelMarVehicle::OnEnterDelMarVehicle");

// /Script/FortDelMarVehicle.FortDelMarVehicleAction
// Kind: Class; super: Object
class UFortDelMarVehicleAction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortDelMarVehicleAction, OnActionPerformed) == 40, "Offset mismatch for UFortDelMarVehicleAction::OnActionPerformed");

// /Script/FortDelMarVehicle.FortDelMarVehicleAction_Drift
// Kind: Class; super: FortDelMarVehicleAction
class UFortDelMarVehicleAction_Drift
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortDelMarVehicleAction_Drift, OnActionPerformed) == 40, "Offset mismatch for UFortDelMarVehicleAction_Drift::OnActionPerformed");

// /Script/FortDelMarVehicle.FortDelMarVehicleAction_HazardHit
// Kind: Class; super: FortDelMarVehicleAction
class UFortDelMarVehicleAction_HazardHit
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortDelMarVehicleAction_HazardHit, OnActionPerformed) == 40, "Offset mismatch for UFortDelMarVehicleAction_HazardHit::OnActionPerformed");

// /Script/FortDelMarVehicle.FortDelMarVehicleAction_Jump
// Kind: Class; super: FortDelMarVehicleAction
class UFortDelMarVehicleAction_Jump
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortDelMarVehicleAction_Jump, OnActionPerformed) == 40, "Offset mismatch for UFortDelMarVehicleAction_Jump::OnActionPerformed");

// /Script/FortDelMarVehicle.FortDelMarVehicleAction_KickFlip
// Kind: Class; super: FortDelMarVehicleAction
class UFortDelMarVehicleAction_KickFlip
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortDelMarVehicleAction_KickFlip, OnActionPerformed) == 40, "Offset mismatch for UFortDelMarVehicleAction_KickFlip::OnActionPerformed");

// /Script/FortDelMarVehicle.FortDelMarVehicleAction_Turbo
// Kind: Class; super: FortDelMarVehicleAction
class UFortDelMarVehicleAction_Turbo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortDelMarVehicleAction_Turbo, OnActionPerformed) == 40, "Offset mismatch for UFortDelMarVehicleAction_Turbo::OnActionPerformed");

// /Script/FortDelMarVehicle.FortDelMarVehicleAction_Underthrust
// Kind: Class; super: FortDelMarVehicleAction
class UFortDelMarVehicleAction_Underthrust
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActionPerformed; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortDelMarVehicleAction_Underthrust, OnActionPerformed) == 40, "Offset mismatch for UFortDelMarVehicleAction_Underthrust::OnActionPerformed");

// /Script/FortDelMarVehicle.FortDelMarVehicleAutoInputComponent
// Kind: Class; super: ActorComponent
class UFortDelMarVehicleAutoInputComponent
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

static_assert(offsetof(UFortDelMarVehicleAutoInputComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortDelMarVehicleAutoInputComponent::PrimaryComponentTick");
static_assert(offsetof(UFortDelMarVehicleAutoInputComponent, ComponentTags) == 104, "Offset mismatch for UFortDelMarVehicleAutoInputComponent::ComponentTags");
static_assert(offsetof(UFortDelMarVehicleAutoInputComponent, AssetUserData) == 120, "Offset mismatch for UFortDelMarVehicleAutoInputComponent::AssetUserData");
static_assert(offsetof(UFortDelMarVehicleAutoInputComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortDelMarVehicleAutoInputComponent::UCSSerializationIndex");
static_assert(offsetof(UFortDelMarVehicleAutoInputComponent, bNetAddressable) == 152, "Offset mismatch for UFortDelMarVehicleAutoInputComponent::bNetAddressable");
static_assert(offsetof(UFortDelMarVehicleAutoInputComponent, bAutoActivate) == 154, "Offset mismatch for UFortDelMarVehicleAutoInputComponent::bAutoActivate");
static_assert(offsetof(UFortDelMarVehicleAutoInputComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortDelMarVehicleAutoInputComponent::bIsEditorOnly");
static_assert(offsetof(UFortDelMarVehicleAutoInputComponent, CreationMethod) == 185, "Offset mismatch for UFortDelMarVehicleAutoInputComponent::CreationMethod");
static_assert(offsetof(UFortDelMarVehicleAutoInputComponent, OnComponentActivated) == 186, "Offset mismatch for UFortDelMarVehicleAutoInputComponent::OnComponentActivated");
static_assert(offsetof(UFortDelMarVehicleAutoInputComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortDelMarVehicleAutoInputComponent::OnComponentDeactivated");

// /Script/FortDelMarVehicle.FortDelMarVehicleBodyItemDefinition
// Kind: Class; super: FortDelMarCosmeticItemDefinition
class UFortDelMarVehicleBodyItemDefinition
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t Slot[0x8]; // 0x0128 (Size: 0x8, Type: StructProperty)
    TArray<void*> CosmeticActorClasses; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarVehicleBodyItemDefinition, Slot) == 296, "Offset mismatch for UFortDelMarVehicleBodyItemDefinition::Slot");
static_assert(offsetof(UFortDelMarVehicleBodyItemDefinition, CosmeticActorClasses) == 304, "Offset mismatch for UFortDelMarVehicleBodyItemDefinition::CosmeticActorClasses");

// /Script/FortDelMarVehicle.FortDelMarVehicleBodySetup
// Kind: Class; super: DataAsset
class UFortDelMarVehicleBodySetup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t FrontAxle[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t BackAxle[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarVehicleBodySetup, FrontAxle) == 40, "Offset mismatch for UFortDelMarVehicleBodySetup::FrontAxle");
static_assert(offsetof(UFortDelMarVehicleBodySetup, BackAxle) == 80, "Offset mismatch for UFortDelMarVehicleBodySetup::BackAxle");

// /Script/FortDelMarVehicle.FortDelMarVehicleBodySetupMap
// Kind: Class; super: DataAsset
class UFortDelMarVehicleBodySetupMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> BodySetupNameMap; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> BodySetupArchetypeMap; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortDelMarVehicleBodySetupMap, BodySetupNameMap) == 40, "Offset mismatch for UFortDelMarVehicleBodySetupMap::BodySetupNameMap");
static_assert(offsetof(UFortDelMarVehicleBodySetupMap, BodySetupArchetypeMap) == 56, "Offset mismatch for UFortDelMarVehicleBodySetupMap::BodySetupArchetypeMap");

// /Script/FortDelMarVehicle.FortDelMarVehicleCameraMode
// Kind: Class; super: FortCameraMode_AthenaVehicle
class UFortDelMarVehicleCameraMode
{
public:
    std::uint8_t Pad_0000[0x20A0]; // 0x0000
    std::uint8_t CameraSettings[0x20]; // 0x20A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t VelocityViewDistance[0x48]; // 0x20C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t VelocityFOV[0x48]; // 0x2108 (Size: 0x48, Type: StructProperty)
    std::uint8_t AerialViewDistance[0x48]; // 0x2150 (Size: 0x48, Type: StructProperty)
    std::uint8_t AerialFocusOffset[0x48]; // 0x2198 (Size: 0x48, Type: StructProperty)
    std::uint8_t AerialPitch[0x48]; // 0x21E0 (Size: 0x48, Type: StructProperty)
    std::uint8_t AccelViewDistance[0x48]; // 0x2228 (Size: 0x48, Type: StructProperty)
    std::uint8_t AccelPitch[0x48]; // 0x2270 (Size: 0x48, Type: StructProperty)
    std::uint8_t AirRotationInterpRate[0x48]; // 0x22B8 (Size: 0x48, Type: StructProperty)
    float DriftSwivelSpeed; // 0x2300 (Size: 0x4, Type: FloatProperty)
    float ViewDistanceInterpSpeed; // 0x2304 (Size: 0x4, Type: FloatProperty)
    float FOVInterpSpeed; // 0x2308 (Size: 0x4, Type: FloatProperty)
    float AccelerationViewDistanceDecayRate; // 0x230C (Size: 0x4, Type: FloatProperty)
    float MaxAccumulatedAccelViewDistance; // 0x2310 (Size: 0x4, Type: FloatProperty)
    float MinAccumulatedAccelViewDistance; // 0x2314 (Size: 0x4, Type: FloatProperty)
    float AerialOffsetInterpSpeed; // 0x2318 (Size: 0x4, Type: FloatProperty)
    float MaximumDownwardAerialPitch; // 0x231C (Size: 0x4, Type: FloatProperty)
    float MaximumUpwardAerialPitch; // 0x2320 (Size: 0x4, Type: FloatProperty)
    float AccelerationPitchDecayRate; // 0x2324 (Size: 0x4, Type: FloatProperty)
    float MaxAccumulatedAccelPitch; // 0x2328 (Size: 0x4, Type: FloatProperty)
    float MinAccumulatedAccelPitch; // 0x232C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreventSpeedIncreaseInAir; // 0x2330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x2331
    float SpeedInputScalar; // 0x2334 (Size: 0x4, Type: FloatProperty)
    float SwivelPitchMax; // 0x2338 (Size: 0x4, Type: FloatProperty)
    float SwivelYawMax; // 0x233C (Size: 0x4, Type: FloatProperty)
    float GroundPitchInterpRate; // 0x2340 (Size: 0x4, Type: FloatProperty)
    float GroundMaxPitchForNormalBlend; // 0x2344 (Size: 0x4, Type: FloatProperty)
    float GroundNormalInterpRate; // 0x2348 (Size: 0x4, Type: FloatProperty)
    float GroundNormalAirInterpRate; // 0x234C (Size: 0x4, Type: FloatProperty)
    float GroundYawRateMin; // 0x2350 (Size: 0x4, Type: FloatProperty)
    float GroundYawRateMax; // 0x2354 (Size: 0x4, Type: FloatProperty)
    float WallYawRateMin; // 0x2358 (Size: 0x4, Type: FloatProperty)
    float WallYawRateMax; // 0x235C (Size: 0x4, Type: FloatProperty)
    float InterpToGroundTime; // 0x2360 (Size: 0x4, Type: FloatProperty)
    float InterpToAirTime; // 0x2364 (Size: 0x4, Type: FloatProperty)
    float AverageVelocityInterpRate; // 0x2368 (Size: 0x4, Type: FloatProperty)
    float FocusOffsetInterpRate; // 0x236C (Size: 0x4, Type: FloatProperty)
    float DistanceSpeedScale; // 0x2370 (Size: 0x4, Type: FloatProperty)
    float DistanceOffsetMin; // 0x2374 (Size: 0x4, Type: FloatProperty)
    float DistanceOffsetMax; // 0x2378 (Size: 0x4, Type: FloatProperty)
    float DistanceInterpRate; // 0x237C (Size: 0x4, Type: FloatProperty)
    float MaxSpeedFOVOffset; // 0x2380 (Size: 0x4, Type: FloatProperty)
    float SupersonicFOVOffset; // 0x2384 (Size: 0x4, Type: FloatProperty)
    float FOVInterpRate; // 0x2388 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x238C
    void* VehicleTarget; // 0x2390 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarVehicleCameraMode, CameraSettings) == 8352, "Offset mismatch for UFortDelMarVehicleCameraMode::CameraSettings");
static_assert(offsetof(UFortDelMarVehicleCameraMode, VelocityViewDistance) == 8384, "Offset mismatch for UFortDelMarVehicleCameraMode::VelocityViewDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode, VelocityFOV) == 8456, "Offset mismatch for UFortDelMarVehicleCameraMode::VelocityFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode, AerialViewDistance) == 8528, "Offset mismatch for UFortDelMarVehicleCameraMode::AerialViewDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode, AerialFocusOffset) == 8600, "Offset mismatch for UFortDelMarVehicleCameraMode::AerialFocusOffset");
static_assert(offsetof(UFortDelMarVehicleCameraMode, AerialPitch) == 8672, "Offset mismatch for UFortDelMarVehicleCameraMode::AerialPitch");
static_assert(offsetof(UFortDelMarVehicleCameraMode, AccelViewDistance) == 8744, "Offset mismatch for UFortDelMarVehicleCameraMode::AccelViewDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode, AccelPitch) == 8816, "Offset mismatch for UFortDelMarVehicleCameraMode::AccelPitch");
static_assert(offsetof(UFortDelMarVehicleCameraMode, AirRotationInterpRate) == 8888, "Offset mismatch for UFortDelMarVehicleCameraMode::AirRotationInterpRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode, DriftSwivelSpeed) == 8960, "Offset mismatch for UFortDelMarVehicleCameraMode::DriftSwivelSpeed");
static_assert(offsetof(UFortDelMarVehicleCameraMode, ViewDistanceInterpSpeed) == 8964, "Offset mismatch for UFortDelMarVehicleCameraMode::ViewDistanceInterpSpeed");
static_assert(offsetof(UFortDelMarVehicleCameraMode, FOVInterpSpeed) == 8968, "Offset mismatch for UFortDelMarVehicleCameraMode::FOVInterpSpeed");
static_assert(offsetof(UFortDelMarVehicleCameraMode, AccelerationViewDistanceDecayRate) == 8972, "Offset mismatch for UFortDelMarVehicleCameraMode::AccelerationViewDistanceDecayRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode, MaxAccumulatedAccelViewDistance) == 8976, "Offset mismatch for UFortDelMarVehicleCameraMode::MaxAccumulatedAccelViewDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode, MinAccumulatedAccelViewDistance) == 8980, "Offset mismatch for UFortDelMarVehicleCameraMode::MinAccumulatedAccelViewDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode, AerialOffsetInterpSpeed) == 8984, "Offset mismatch for UFortDelMarVehicleCameraMode::AerialOffsetInterpSpeed");
static_assert(offsetof(UFortDelMarVehicleCameraMode, MaximumDownwardAerialPitch) == 8988, "Offset mismatch for UFortDelMarVehicleCameraMode::MaximumDownwardAerialPitch");
static_assert(offsetof(UFortDelMarVehicleCameraMode, MaximumUpwardAerialPitch) == 8992, "Offset mismatch for UFortDelMarVehicleCameraMode::MaximumUpwardAerialPitch");
static_assert(offsetof(UFortDelMarVehicleCameraMode, AccelerationPitchDecayRate) == 8996, "Offset mismatch for UFortDelMarVehicleCameraMode::AccelerationPitchDecayRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode, MaxAccumulatedAccelPitch) == 9000, "Offset mismatch for UFortDelMarVehicleCameraMode::MaxAccumulatedAccelPitch");
static_assert(offsetof(UFortDelMarVehicleCameraMode, MinAccumulatedAccelPitch) == 9004, "Offset mismatch for UFortDelMarVehicleCameraMode::MinAccumulatedAccelPitch");
static_assert(offsetof(UFortDelMarVehicleCameraMode, bPreventSpeedIncreaseInAir) == 9008, "Offset mismatch for UFortDelMarVehicleCameraMode::bPreventSpeedIncreaseInAir");
static_assert(offsetof(UFortDelMarVehicleCameraMode, SpeedInputScalar) == 9012, "Offset mismatch for UFortDelMarVehicleCameraMode::SpeedInputScalar");
static_assert(offsetof(UFortDelMarVehicleCameraMode, SwivelPitchMax) == 9016, "Offset mismatch for UFortDelMarVehicleCameraMode::SwivelPitchMax");
static_assert(offsetof(UFortDelMarVehicleCameraMode, SwivelYawMax) == 9020, "Offset mismatch for UFortDelMarVehicleCameraMode::SwivelYawMax");
static_assert(offsetof(UFortDelMarVehicleCameraMode, GroundPitchInterpRate) == 9024, "Offset mismatch for UFortDelMarVehicleCameraMode::GroundPitchInterpRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode, GroundMaxPitchForNormalBlend) == 9028, "Offset mismatch for UFortDelMarVehicleCameraMode::GroundMaxPitchForNormalBlend");
static_assert(offsetof(UFortDelMarVehicleCameraMode, GroundNormalInterpRate) == 9032, "Offset mismatch for UFortDelMarVehicleCameraMode::GroundNormalInterpRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode, GroundNormalAirInterpRate) == 9036, "Offset mismatch for UFortDelMarVehicleCameraMode::GroundNormalAirInterpRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode, GroundYawRateMin) == 9040, "Offset mismatch for UFortDelMarVehicleCameraMode::GroundYawRateMin");
static_assert(offsetof(UFortDelMarVehicleCameraMode, GroundYawRateMax) == 9044, "Offset mismatch for UFortDelMarVehicleCameraMode::GroundYawRateMax");
static_assert(offsetof(UFortDelMarVehicleCameraMode, WallYawRateMin) == 9048, "Offset mismatch for UFortDelMarVehicleCameraMode::WallYawRateMin");
static_assert(offsetof(UFortDelMarVehicleCameraMode, WallYawRateMax) == 9052, "Offset mismatch for UFortDelMarVehicleCameraMode::WallYawRateMax");
static_assert(offsetof(UFortDelMarVehicleCameraMode, InterpToGroundTime) == 9056, "Offset mismatch for UFortDelMarVehicleCameraMode::InterpToGroundTime");
static_assert(offsetof(UFortDelMarVehicleCameraMode, InterpToAirTime) == 9060, "Offset mismatch for UFortDelMarVehicleCameraMode::InterpToAirTime");
static_assert(offsetof(UFortDelMarVehicleCameraMode, AverageVelocityInterpRate) == 9064, "Offset mismatch for UFortDelMarVehicleCameraMode::AverageVelocityInterpRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode, FocusOffsetInterpRate) == 9068, "Offset mismatch for UFortDelMarVehicleCameraMode::FocusOffsetInterpRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode, DistanceSpeedScale) == 9072, "Offset mismatch for UFortDelMarVehicleCameraMode::DistanceSpeedScale");
static_assert(offsetof(UFortDelMarVehicleCameraMode, DistanceOffsetMin) == 9076, "Offset mismatch for UFortDelMarVehicleCameraMode::DistanceOffsetMin");
static_assert(offsetof(UFortDelMarVehicleCameraMode, DistanceOffsetMax) == 9080, "Offset mismatch for UFortDelMarVehicleCameraMode::DistanceOffsetMax");
static_assert(offsetof(UFortDelMarVehicleCameraMode, DistanceInterpRate) == 9084, "Offset mismatch for UFortDelMarVehicleCameraMode::DistanceInterpRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode, MaxSpeedFOVOffset) == 9088, "Offset mismatch for UFortDelMarVehicleCameraMode::MaxSpeedFOVOffset");
static_assert(offsetof(UFortDelMarVehicleCameraMode, SupersonicFOVOffset) == 9092, "Offset mismatch for UFortDelMarVehicleCameraMode::SupersonicFOVOffset");
static_assert(offsetof(UFortDelMarVehicleCameraMode, FOVInterpRate) == 9096, "Offset mismatch for UFortDelMarVehicleCameraMode::FOVInterpRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode, VehicleTarget) == 9104, "Offset mismatch for UFortDelMarVehicleCameraMode::VehicleTarget");

// /Script/FortDelMarVehicle.FortDelMarVehicleCameraMode_V2
// Kind: Class; super: FortCameraMode
class UFortDelMarVehicleCameraMode_V2
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* CameraInputControllerComponentClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> VehicleArchetypeDefaults; // 0x0080 (Size: 0x10, Type: MapProperty)
    float DefaultInterpLambda; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float FOV; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float TotalFOVInterpLambda; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TotalFOVClamp[0x10]; // 0x009C (Size: 0x10, Type: StructProperty)
    float Distance; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float TotalDistanceInterpLambda; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TotalDistanceClamp[0x10]; // 0x00B4 (Size: 0x10, Type: StructProperty)
    float Height; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float TotalHeightInterpLambda; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float HeightOffsetInterpLambda; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t TotalHeightClamp[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    float AngleToOriginDegrees; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float AngleToOriginInterpLambda; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TotalAngleToOriginClamp[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    float SwivelInterpLambda; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float SwivelPitchMax; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float SwivelYawMax; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float GroundNormalInterpLambda; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float ForwardInterpLambda; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float CarPitchInterpLambda; // 0x010C (Size: 0x4, Type: FloatProperty)
    float AerialCarPitchInterpLambda; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float MaxAerialCarPitch; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float PitchRotationAxisInterpLambda; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float VerticalDriftDegreeThreshold; // 0x011C (Size: 0x4, Type: FloatProperty)
    float MinDegreesVehicleWorldUpThreshold; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0124
    std::uint8_t MaxUpRotationPerSecondCurve[0x50]; // 0x0128 (Size: 0x50, Type: StructProperty)
    float MaxUpRotationPerSecondStatic; // 0x0178 (Size: 0x4, Type: FloatProperty)
    float WorldUpInterpRate; // 0x017C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreventPenetration; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoPredictiveAvoidance; // 0x0181 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0182
    float CollisionPushOutDistance; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float PenetrationBlendOutTime; // 0x0188 (Size: 0x4, Type: FloatProperty)
    float PenetrationBlendInTime; // 0x018C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PenetrationTraceChannel; // 0x0190 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0191
    TArray<void*> PenetrationAvoidanceFeelers; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ForwardAirInterpLambdaCurve[0x50]; // 0x01A8 (Size: 0x50, Type: StructProperty)
    std::uint8_t ForwardAirBlendCurve[0x48]; // 0x01F8 (Size: 0x48, Type: StructProperty)
    float MinForwardSpeedForAerialBlend; // 0x0240 (Size: 0x4, Type: FloatProperty)
    float MinTimeInAirBeforeUsingVehicleUp; // 0x0244 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GroundNormalAirInterpLambdaCurve[0x50]; // 0x0248 (Size: 0x50, Type: StructProperty)
    float AirFreestyleDeactivationExtendedSeconds; // 0x0298 (Size: 0x4, Type: FloatProperty)
    float AirFreestyleDeactivationLambdaSeconds; // 0x029C (Size: 0x4, Type: FloatProperty)
    float AirFreestyleDeactivationForwardLambda; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    float AirFreestyleDeactivationNormalLambda; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriftForwardBlendCurve[0x48]; // 0x02A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t AerialDriftForwardBlendCurve[0x48]; // 0x02F0 (Size: 0x48, Type: StructProperty)
    std::uint8_t DriftForwardInterpLambdaCurve[0x48]; // 0x0338 (Size: 0x48, Type: StructProperty)
    std::uint8_t DriftOriginOffsetCurve[0x48]; // 0x0380 (Size: 0x48, Type: StructProperty)
    std::uint8_t DriftOriginOffsetInterpLambdaCurve[0x50]; // 0x03C8 (Size: 0x50, Type: StructProperty)
    float DriftOriginOffsetInactiveLambda; // 0x0418 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x041C
    std::uint8_t DriftKickOffsetDistance[0x110]; // 0x0420 (Size: 0x110, Type: StructProperty)
    float DriftKickOffsetLambda; // 0x0530 (Size: 0x4, Type: FloatProperty)
    float DriftKickOffsetInactiveLambda; // 0x0534 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDeactivateKickOffsetOnKickEnd; // 0x0538 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0539
    std::uint8_t DriftRollDegreesCurve[0x48]; // 0x0540 (Size: 0x48, Type: StructProperty)
    std::uint8_t DriftRollDegreesInterpLambdaCurve[0x50]; // 0x0588 (Size: 0x50, Type: StructProperty)
    std::uint8_t DriftScalarCurveCurve[0x50]; // 0x05D8 (Size: 0x50, Type: StructProperty)
    float GroundMaxPitchForNormalBlend; // 0x0628 (Size: 0x4, Type: FloatProperty)
    float GroundExtraPitchForNormalBlend; // 0x062C (Size: 0x4, Type: FloatProperty)
    std::uint8_t StableSpeedDistance[0x70]; // 0x0630 (Size: 0x70, Type: StructProperty)
    std::uint8_t StableSpeedFOV[0x70]; // 0x06A0 (Size: 0x70, Type: StructProperty)
    std::uint8_t StableSpeedHeight[0x70]; // 0x0710 (Size: 0x70, Type: StructProperty)
    std::uint8_t StableSpeedAngleToOrigin[0x70]; // 0x0780 (Size: 0x70, Type: StructProperty)
    std::uint8_t AccelerationDistance[0x70]; // 0x07F0 (Size: 0x70, Type: StructProperty)
    std::uint8_t AccelerationFOV[0x70]; // 0x0860 (Size: 0x70, Type: StructProperty)
    std::uint8_t AccelerationHeight[0x70]; // 0x08D0 (Size: 0x70, Type: StructProperty)
    std::uint8_t AccelerationAngleToOrigin[0x70]; // 0x0940 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseSpeedDistance[0x70]; // 0x09B0 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseSpeedFOV[0x70]; // 0x0A20 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseSpeedHeight[0x70]; // 0x0A90 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseSpeedAngleToOrigin[0x70]; // 0x0B00 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseAccelerationDistance[0x70]; // 0x0B70 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseAccelerationFOV[0x70]; // 0x0BE0 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseAccelerationHeight[0x70]; // 0x0C50 (Size: 0x70, Type: StructProperty)
    std::uint8_t BaseAccelerationAngleToOrigin[0x70]; // 0x0CC0 (Size: 0x70, Type: StructProperty)
    std::uint8_t TurboDistance[0x110]; // 0x0D30 (Size: 0x110, Type: StructProperty)
    std::uint8_t TurboFOV[0x110]; // 0x0E40 (Size: 0x110, Type: StructProperty)
    std::uint8_t TurboBonusZoneSuccessDistance[0x110]; // 0x0F50 (Size: 0x110, Type: StructProperty)
    std::uint8_t TurboBonusZoneSuccessFOV[0x110]; // 0x1060 (Size: 0x110, Type: StructProperty)
    std::uint8_t DriftBonusDistance[0x110]; // 0x1170 (Size: 0x110, Type: StructProperty)
    std::uint8_t DriftBonusFOV[0x110]; // 0x1280 (Size: 0x110, Type: StructProperty)
    std::uint8_t StartlineDistance[0x110]; // 0x1390 (Size: 0x110, Type: StructProperty)
    std::uint8_t StartlineFOV[0x110]; // 0x14A0 (Size: 0x110, Type: StructProperty)
    std::uint8_t DraftDistance[0x70]; // 0x15B0 (Size: 0x70, Type: StructProperty)
    std::uint8_t DraftFOV[0x70]; // 0x1620 (Size: 0x70, Type: StructProperty)
    std::uint8_t WorldBonusSpeedDistance[0x110]; // 0x1690 (Size: 0x110, Type: StructProperty)
    std::uint8_t WorldBonusSpeedFOV[0x110]; // 0x17A0 (Size: 0x110, Type: StructProperty)
    std::uint8_t AerialDivingBonusSpeedDistance[0x70]; // 0x18B0 (Size: 0x70, Type: StructProperty)
    float NonSkydivingDistanceScalar; // 0x1920 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x1924
    std::uint8_t AerialDivingBonusSpeedFOV[0x70]; // 0x1928 (Size: 0x70, Type: StructProperty)
    float NonSkydivingFOVScalar; // 0x1998 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> VehicleTarget; // 0x199C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CameraInputControllerComponent; // 0x19A4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, CameraInputControllerComponentClass) == 120, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::CameraInputControllerComponentClass");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, VehicleArchetypeDefaults) == 128, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::VehicleArchetypeDefaults");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DefaultInterpLambda) == 144, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DefaultInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, FOV) == 148, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::FOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TotalFOVInterpLambda) == 152, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TotalFOVInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TotalFOVClamp) == 156, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TotalFOVClamp");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, Distance) == 172, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::Distance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TotalDistanceInterpLambda) == 176, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TotalDistanceInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TotalDistanceClamp) == 180, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TotalDistanceClamp");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, Height) == 196, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::Height");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TotalHeightInterpLambda) == 200, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TotalHeightInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, HeightOffsetInterpLambda) == 204, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::HeightOffsetInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TotalHeightClamp) == 208, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TotalHeightClamp");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AngleToOriginDegrees) == 224, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AngleToOriginDegrees");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AngleToOriginInterpLambda) == 228, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AngleToOriginInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TotalAngleToOriginClamp) == 232, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TotalAngleToOriginClamp");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, SwivelInterpLambda) == 248, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::SwivelInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, SwivelPitchMax) == 252, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::SwivelPitchMax");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, SwivelYawMax) == 256, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::SwivelYawMax");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, GroundNormalInterpLambda) == 260, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::GroundNormalInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, ForwardInterpLambda) == 264, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::ForwardInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, CarPitchInterpLambda) == 268, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::CarPitchInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AerialCarPitchInterpLambda) == 272, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AerialCarPitchInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, MaxAerialCarPitch) == 276, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::MaxAerialCarPitch");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, PitchRotationAxisInterpLambda) == 280, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::PitchRotationAxisInterpLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, VerticalDriftDegreeThreshold) == 284, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::VerticalDriftDegreeThreshold");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, MinDegreesVehicleWorldUpThreshold) == 288, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::MinDegreesVehicleWorldUpThreshold");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, MaxUpRotationPerSecondCurve) == 296, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::MaxUpRotationPerSecondCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, MaxUpRotationPerSecondStatic) == 376, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::MaxUpRotationPerSecondStatic");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, WorldUpInterpRate) == 380, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::WorldUpInterpRate");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, bPreventPenetration) == 384, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::bPreventPenetration");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, bDoPredictiveAvoidance) == 385, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::bDoPredictiveAvoidance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, CollisionPushOutDistance) == 388, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::CollisionPushOutDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, PenetrationBlendOutTime) == 392, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::PenetrationBlendOutTime");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, PenetrationBlendInTime) == 396, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::PenetrationBlendInTime");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, PenetrationTraceChannel) == 400, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::PenetrationTraceChannel");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, PenetrationAvoidanceFeelers) == 408, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::PenetrationAvoidanceFeelers");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, ForwardAirInterpLambdaCurve) == 424, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::ForwardAirInterpLambdaCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, ForwardAirBlendCurve) == 504, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::ForwardAirBlendCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, MinForwardSpeedForAerialBlend) == 576, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::MinForwardSpeedForAerialBlend");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, MinTimeInAirBeforeUsingVehicleUp) == 580, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::MinTimeInAirBeforeUsingVehicleUp");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, GroundNormalAirInterpLambdaCurve) == 584, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::GroundNormalAirInterpLambdaCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AirFreestyleDeactivationExtendedSeconds) == 664, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AirFreestyleDeactivationExtendedSeconds");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AirFreestyleDeactivationLambdaSeconds) == 668, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AirFreestyleDeactivationLambdaSeconds");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AirFreestyleDeactivationForwardLambda) == 672, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AirFreestyleDeactivationForwardLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AirFreestyleDeactivationNormalLambda) == 676, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AirFreestyleDeactivationNormalLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftForwardBlendCurve) == 680, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftForwardBlendCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AerialDriftForwardBlendCurve) == 752, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AerialDriftForwardBlendCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftForwardInterpLambdaCurve) == 824, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftForwardInterpLambdaCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftOriginOffsetCurve) == 896, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftOriginOffsetCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftOriginOffsetInterpLambdaCurve) == 968, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftOriginOffsetInterpLambdaCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftOriginOffsetInactiveLambda) == 1048, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftOriginOffsetInactiveLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftKickOffsetDistance) == 1056, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftKickOffsetDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftKickOffsetLambda) == 1328, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftKickOffsetLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftKickOffsetInactiveLambda) == 1332, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftKickOffsetInactiveLambda");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, bDeactivateKickOffsetOnKickEnd) == 1336, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::bDeactivateKickOffsetOnKickEnd");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftRollDegreesCurve) == 1344, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftRollDegreesCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftRollDegreesInterpLambdaCurve) == 1416, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftRollDegreesInterpLambdaCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftScalarCurveCurve) == 1496, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftScalarCurveCurve");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, GroundMaxPitchForNormalBlend) == 1576, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::GroundMaxPitchForNormalBlend");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, GroundExtraPitchForNormalBlend) == 1580, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::GroundExtraPitchForNormalBlend");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, StableSpeedDistance) == 1584, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::StableSpeedDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, StableSpeedFOV) == 1696, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::StableSpeedFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, StableSpeedHeight) == 1808, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::StableSpeedHeight");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, StableSpeedAngleToOrigin) == 1920, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::StableSpeedAngleToOrigin");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AccelerationDistance) == 2032, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AccelerationDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AccelerationFOV) == 2144, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AccelerationFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AccelerationHeight) == 2256, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AccelerationHeight");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AccelerationAngleToOrigin) == 2368, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AccelerationAngleToOrigin");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, BaseSpeedDistance) == 2480, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::BaseSpeedDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, BaseSpeedFOV) == 2592, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::BaseSpeedFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, BaseSpeedHeight) == 2704, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::BaseSpeedHeight");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, BaseSpeedAngleToOrigin) == 2816, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::BaseSpeedAngleToOrigin");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, BaseAccelerationDistance) == 2928, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::BaseAccelerationDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, BaseAccelerationFOV) == 3040, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::BaseAccelerationFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, BaseAccelerationHeight) == 3152, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::BaseAccelerationHeight");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, BaseAccelerationAngleToOrigin) == 3264, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::BaseAccelerationAngleToOrigin");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TurboDistance) == 3376, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TurboDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TurboFOV) == 3648, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TurboFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TurboBonusZoneSuccessDistance) == 3920, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TurboBonusZoneSuccessDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, TurboBonusZoneSuccessFOV) == 4192, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::TurboBonusZoneSuccessFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftBonusDistance) == 4464, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftBonusDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DriftBonusFOV) == 4736, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DriftBonusFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, StartlineDistance) == 5008, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::StartlineDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, StartlineFOV) == 5280, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::StartlineFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DraftDistance) == 5552, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DraftDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, DraftFOV) == 5664, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::DraftFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, WorldBonusSpeedDistance) == 5776, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::WorldBonusSpeedDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, WorldBonusSpeedFOV) == 6048, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::WorldBonusSpeedFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AerialDivingBonusSpeedDistance) == 6320, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AerialDivingBonusSpeedDistance");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, NonSkydivingDistanceScalar) == 6432, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::NonSkydivingDistanceScalar");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, AerialDivingBonusSpeedFOV) == 6440, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::AerialDivingBonusSpeedFOV");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, NonSkydivingFOVScalar) == 6552, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::NonSkydivingFOVScalar");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, VehicleTarget) == 6556, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::VehicleTarget");
static_assert(offsetof(UFortDelMarVehicleCameraMode_V2, CameraInputControllerComponent) == 6564, "Offset mismatch for UFortDelMarVehicleCameraMode_V2::CameraInputControllerComponent");

// /Script/FortDelMarVehicle.FortDelMarVehicleConfigs
// Kind: Class; super: FortPhysicsVehicleConfigs
class UFortDelMarVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0x990]; // 0x0000
    std::uint8_t Collision[0x138]; // 0x0990 (Size: 0x138, Type: StructProperty)
    void* DefaultBodySetup; // 0x0AC8 (Size: 0x8, Type: ObjectProperty)
    void* BodySetupMap; // 0x0AD0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DriveSetup[0x230]; // 0x0AD8 (Size: 0x230, Type: StructProperty)
    void* PhysMatAttributeMap; // 0x0D08 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RigidBody[0x38]; // 0x0D10 (Size: 0x38, Type: StructProperty)
    std::uint8_t Terrain[0x30]; // 0x0D48 (Size: 0x30, Type: StructProperty)
    std::uint8_t WorldBonusSpeed[0x28]; // 0x0D78 (Size: 0x28, Type: StructProperty)
    std::uint8_t AerialRotation[0xA8]; // 0x0DA0 (Size: 0xA8, Type: StructProperty)
    std::uint8_t AirControl[0x90]; // 0x0E48 (Size: 0x90, Type: StructProperty)
    std::uint8_t AirFreestyle[0x30]; // 0x0ED8 (Size: 0x30, Type: StructProperty)
    std::uint8_t AirThrottle[0x60]; // 0x0F08 (Size: 0x60, Type: StructProperty)
    std::uint8_t AutoUpright[0x28]; // 0x0F68 (Size: 0x28, Type: StructProperty)
    std::uint8_t Drafting[0x88]; // 0x0F90 (Size: 0x88, Type: StructProperty)
    std::uint8_t Drift[0x458]; // 0x1018 (Size: 0x458, Type: StructProperty)
    std::uint8_t DriftBoost[0x118]; // 0x1470 (Size: 0x118, Type: StructProperty)
    std::uint8_t Gravity[0x20]; // 0x1588 (Size: 0x20, Type: StructProperty)
    std::uint8_t Jump[0x18]; // 0x15A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Kickflip[0x120]; // 0x15C0 (Size: 0x120, Type: StructProperty)
    std::uint8_t Oversteer[0xB8]; // 0x16E0 (Size: 0xB8, Type: StructProperty)
    std::uint8_t Reattachment[0x60]; // 0x1798 (Size: 0x60, Type: StructProperty)
    std::uint8_t Rubberbanding[0xF8]; // 0x17F8 (Size: 0xF8, Type: StructProperty)
    std::uint8_t StartlineBoost[0x68]; // 0x18F0 (Size: 0x68, Type: StructProperty)
    std::uint8_t Strafe[0x20]; // 0x1958 (Size: 0x20, Type: StructProperty)
    std::uint8_t Turbo[0x70]; // 0x1978 (Size: 0x70, Type: StructProperty)
    std::uint8_t Underthrust[0xE8]; // 0x19E8 (Size: 0xE8, Type: StructProperty)
    std::uint8_t SelfDemolish[0x1]; // 0x1AD0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarVehicleConfigs, Collision) == 2448, "Offset mismatch for UFortDelMarVehicleConfigs::Collision");
static_assert(offsetof(UFortDelMarVehicleConfigs, DefaultBodySetup) == 2760, "Offset mismatch for UFortDelMarVehicleConfigs::DefaultBodySetup");
static_assert(offsetof(UFortDelMarVehicleConfigs, BodySetupMap) == 2768, "Offset mismatch for UFortDelMarVehicleConfigs::BodySetupMap");
static_assert(offsetof(UFortDelMarVehicleConfigs, DriveSetup) == 2776, "Offset mismatch for UFortDelMarVehicleConfigs::DriveSetup");
static_assert(offsetof(UFortDelMarVehicleConfigs, PhysMatAttributeMap) == 3336, "Offset mismatch for UFortDelMarVehicleConfigs::PhysMatAttributeMap");
static_assert(offsetof(UFortDelMarVehicleConfigs, RigidBody) == 3344, "Offset mismatch for UFortDelMarVehicleConfigs::RigidBody");
static_assert(offsetof(UFortDelMarVehicleConfigs, Terrain) == 3400, "Offset mismatch for UFortDelMarVehicleConfigs::Terrain");
static_assert(offsetof(UFortDelMarVehicleConfigs, WorldBonusSpeed) == 3448, "Offset mismatch for UFortDelMarVehicleConfigs::WorldBonusSpeed");
static_assert(offsetof(UFortDelMarVehicleConfigs, AerialRotation) == 3488, "Offset mismatch for UFortDelMarVehicleConfigs::AerialRotation");
static_assert(offsetof(UFortDelMarVehicleConfigs, AirControl) == 3656, "Offset mismatch for UFortDelMarVehicleConfigs::AirControl");
static_assert(offsetof(UFortDelMarVehicleConfigs, AirFreestyle) == 3800, "Offset mismatch for UFortDelMarVehicleConfigs::AirFreestyle");
static_assert(offsetof(UFortDelMarVehicleConfigs, AirThrottle) == 3848, "Offset mismatch for UFortDelMarVehicleConfigs::AirThrottle");
static_assert(offsetof(UFortDelMarVehicleConfigs, AutoUpright) == 3944, "Offset mismatch for UFortDelMarVehicleConfigs::AutoUpright");
static_assert(offsetof(UFortDelMarVehicleConfigs, Drafting) == 3984, "Offset mismatch for UFortDelMarVehicleConfigs::Drafting");
static_assert(offsetof(UFortDelMarVehicleConfigs, Drift) == 4120, "Offset mismatch for UFortDelMarVehicleConfigs::Drift");
static_assert(offsetof(UFortDelMarVehicleConfigs, DriftBoost) == 5232, "Offset mismatch for UFortDelMarVehicleConfigs::DriftBoost");
static_assert(offsetof(UFortDelMarVehicleConfigs, Gravity) == 5512, "Offset mismatch for UFortDelMarVehicleConfigs::Gravity");
static_assert(offsetof(UFortDelMarVehicleConfigs, Jump) == 5544, "Offset mismatch for UFortDelMarVehicleConfigs::Jump");
static_assert(offsetof(UFortDelMarVehicleConfigs, Kickflip) == 5568, "Offset mismatch for UFortDelMarVehicleConfigs::Kickflip");
static_assert(offsetof(UFortDelMarVehicleConfigs, Oversteer) == 5856, "Offset mismatch for UFortDelMarVehicleConfigs::Oversteer");
static_assert(offsetof(UFortDelMarVehicleConfigs, Reattachment) == 6040, "Offset mismatch for UFortDelMarVehicleConfigs::Reattachment");
static_assert(offsetof(UFortDelMarVehicleConfigs, Rubberbanding) == 6136, "Offset mismatch for UFortDelMarVehicleConfigs::Rubberbanding");
static_assert(offsetof(UFortDelMarVehicleConfigs, StartlineBoost) == 6384, "Offset mismatch for UFortDelMarVehicleConfigs::StartlineBoost");
static_assert(offsetof(UFortDelMarVehicleConfigs, Strafe) == 6488, "Offset mismatch for UFortDelMarVehicleConfigs::Strafe");
static_assert(offsetof(UFortDelMarVehicleConfigs, Turbo) == 6520, "Offset mismatch for UFortDelMarVehicleConfigs::Turbo");
static_assert(offsetof(UFortDelMarVehicleConfigs, Underthrust) == 6632, "Offset mismatch for UFortDelMarVehicleConfigs::Underthrust");
static_assert(offsetof(UFortDelMarVehicleConfigs, SelfDemolish) == 6864, "Offset mismatch for UFortDelMarVehicleConfigs::SelfDemolish");

// /Script/FortDelMarVehicle.FortDelMarVehicleCosmeticComponent
// Kind: Class; super: ActorComponent
class UFortDelMarVehicleCosmeticComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnCosmeticActorSpawned; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllCosmeticActorsSpawned; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> StaticCosmeticActorClasses; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllowedServerCosmeticActorClasses; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnedCosmeticActors; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarVehicleCosmeticComponent, OnCosmeticActorSpawned) == 192, "Offset mismatch for UFortDelMarVehicleCosmeticComponent::OnCosmeticActorSpawned");
static_assert(offsetof(UFortDelMarVehicleCosmeticComponent, OnAllCosmeticActorsSpawned) == 208, "Offset mismatch for UFortDelMarVehicleCosmeticComponent::OnAllCosmeticActorsSpawned");
static_assert(offsetof(UFortDelMarVehicleCosmeticComponent, StaticCosmeticActorClasses) == 224, "Offset mismatch for UFortDelMarVehicleCosmeticComponent::StaticCosmeticActorClasses");
static_assert(offsetof(UFortDelMarVehicleCosmeticComponent, AllowedServerCosmeticActorClasses) == 240, "Offset mismatch for UFortDelMarVehicleCosmeticComponent::AllowedServerCosmeticActorClasses");
static_assert(offsetof(UFortDelMarVehicleCosmeticComponent, SpawnedCosmeticActors) == 256, "Offset mismatch for UFortDelMarVehicleCosmeticComponent::SpawnedCosmeticActors");

// /Script/FortDelMarVehicle.FortDelMarVehicleForceFeedbackComponent
// Kind: Class; super: ControllerComponent
class UFortDelMarVehicleForceFeedbackComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t DrivingForceFeedback[0xA8]; // 0x00C0 (Size: 0xA8, Type: StructProperty)
    void* JumpForceFeedbackEffect; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    void* OversteerLeftForceFeedbackEffect; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    void* OversteerRightForceFeedbackEffect; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LandingForceFeedbackEffects; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LandingForceLevelLookupCurve[0x48]; // 0x0190 (Size: 0x48, Type: StructProperty)
    void* TurboForceFeedbackEffect; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DriftForceFeedback[0xA8]; // 0x01E0 (Size: 0xA8, Type: StructProperty)
    void* DriftUncontrolledForceFeedbackEffect; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* DriftBoostForceFeedbackEffect; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* DriftTractionForceFeedback; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    float MaxTractionDriftShakeAngle; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x02A4
    void* HazardHitForceFeedback; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> Vehicle; // 0x02B0 (Size: 0x10, Type: InterfaceProperty)
    TWeakObjectPtr<void> CachedPlayerController; // 0x02C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CurrentOversteerForceFeedbackEffect; // 0x02C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, DrivingForceFeedback) == 192, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::DrivingForceFeedback");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, JumpForceFeedbackEffect) == 360, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::JumpForceFeedbackEffect");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, OversteerLeftForceFeedbackEffect) == 368, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::OversteerLeftForceFeedbackEffect");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, OversteerRightForceFeedbackEffect) == 376, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::OversteerRightForceFeedbackEffect");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, LandingForceFeedbackEffects) == 384, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::LandingForceFeedbackEffects");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, LandingForceLevelLookupCurve) == 400, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::LandingForceLevelLookupCurve");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, TurboForceFeedbackEffect) == 472, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::TurboForceFeedbackEffect");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, DriftForceFeedback) == 480, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::DriftForceFeedback");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, DriftUncontrolledForceFeedbackEffect) == 648, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::DriftUncontrolledForceFeedbackEffect");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, DriftBoostForceFeedbackEffect) == 656, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::DriftBoostForceFeedbackEffect");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, DriftTractionForceFeedback) == 664, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::DriftTractionForceFeedback");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, MaxTractionDriftShakeAngle) == 672, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::MaxTractionDriftShakeAngle");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, HazardHitForceFeedback) == 680, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::HazardHitForceFeedback");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, Vehicle) == 688, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::Vehicle");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, CachedPlayerController) == 704, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::CachedPlayerController");
static_assert(offsetof(UFortDelMarVehicleForceFeedbackComponent, CurrentOversteerForceFeedbackEffect) == 712, "Offset mismatch for UFortDelMarVehicleForceFeedbackComponent::CurrentOversteerForceFeedbackEffect");

// /Script/FortDelMarVehicle.FortDelMarVehicleInterface
// Kind: Class; super: VehicleCosmeticsInterface
class UFortDelMarVehicleInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarVehicle.FortDelMarVehicleLoadoutSetup
// Kind: Class; super: PrimaryDataAsset
class UFortDelMarVehicleLoadoutSetup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Loadout[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarVehicleLoadoutSetup, Loadout) == 40, "Offset mismatch for UFortDelMarVehicleLoadoutSetup::Loadout");

// /Script/FortDelMarVehicle.FortDelMarVehicleManager
// Kind: Class; super: WorldSubsystem
class UFortDelMarVehicleManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarVehicle.FortDelMarVehicleMovementSet
// Kind: Class; super: FortAttributeSet
class UFortDelMarVehicleMovementSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t AccelMultiplier[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t bVehicleThrottleDisabled[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t BonusSpeed[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarVehicleMovementSet, AccelMultiplier) == 72, "Offset mismatch for UFortDelMarVehicleMovementSet::AccelMultiplier");
static_assert(offsetof(UFortDelMarVehicleMovementSet, bVehicleThrottleDisabled) == 112, "Offset mismatch for UFortDelMarVehicleMovementSet::bVehicleThrottleDisabled");
static_assert(offsetof(UFortDelMarVehicleMovementSet, BonusSpeed) == 152, "Offset mismatch for UFortDelMarVehicleMovementSet::BonusSpeed");

// /Script/FortDelMarVehicle.FortDelMarVehicleNetworkPhysicsComponent
// Kind: Class; super: ActorComponent
class UFortDelMarVehicleNetworkPhysicsComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t ReplicatedState[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarVehicleNetworkPhysicsComponent, ReplicatedState) == 208, "Offset mismatch for UFortDelMarVehicleNetworkPhysicsComponent::ReplicatedState");

// /Script/FortDelMarVehicle.FortDelMarVehicleTurboManagerComponent
// Kind: Class; super: ActorComponent
class UFortDelMarVehicleTurboManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float TurboCharges; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float RechargeRateSeconds; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MaxCharges; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    void* OwnerVehicle; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarVehicleTurboManagerComponent, TurboCharges) == 192, "Offset mismatch for UFortDelMarVehicleTurboManagerComponent::TurboCharges");
static_assert(offsetof(UFortDelMarVehicleTurboManagerComponent, RechargeRateSeconds) == 196, "Offset mismatch for UFortDelMarVehicleTurboManagerComponent::RechargeRateSeconds");
static_assert(offsetof(UFortDelMarVehicleTurboManagerComponent, MaxCharges) == 200, "Offset mismatch for UFortDelMarVehicleTurboManagerComponent::MaxCharges");
static_assert(offsetof(UFortDelMarVehicleTurboManagerComponent, OwnerVehicle) == 208, "Offset mismatch for UFortDelMarVehicleTurboManagerComponent::OwnerVehicle");
