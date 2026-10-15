/**
 * decamp dumper generated SDK
 * Package: /Script/SlipperyMovementCode
 */
#pragma once
#include "Basic.h"

// /Script/SlipperyMovementCode.SlipperySlopeParamsCache
// Kind: ScriptStruct; super: none
struct FSlipperySlopeParamsCache
{
public:
    float SlopeForceAcceleration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxLateralSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxLateralSpeedMultiplierInWater; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BrakingDecelerationInWater; // 0x000C (Size: 0x4, Type: FloatProperty)
    float BrakingDecelerationFactorOnSlope; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxInhibitingSlopeAngle; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxInhibitingSlopeSpeedFactor; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalLaunchSpeed; // 0x001C (Size: 0x4, Type: FloatProperty)
    float SlopeLandingForceScalar; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SlopeLandingMaxHorizontalForce; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float SlopeLaunchMinRequiredSpeed; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float SlopeLaunchMinRequiredAngleChange; // 0x002C (Size: 0x4, Type: FloatProperty)
    float SlopeLaunchVerticalVelocityBoost; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float SlopeLaunchVerticalVelocityBoostMultiplierJumping; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MaxLateralSpeedOverride; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalLaunchSpeedOverride; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSlipperySlopeParamsCache, SlopeForceAcceleration) == 0, "Offset mismatch for FSlipperySlopeParamsCache::SlopeForceAcceleration");
static_assert(offsetof(FSlipperySlopeParamsCache, MaxLateralSpeed) == 4, "Offset mismatch for FSlipperySlopeParamsCache::MaxLateralSpeed");
static_assert(offsetof(FSlipperySlopeParamsCache, MaxLateralSpeedMultiplierInWater) == 8, "Offset mismatch for FSlipperySlopeParamsCache::MaxLateralSpeedMultiplierInWater");
static_assert(offsetof(FSlipperySlopeParamsCache, BrakingDecelerationInWater) == 12, "Offset mismatch for FSlipperySlopeParamsCache::BrakingDecelerationInWater");
static_assert(offsetof(FSlipperySlopeParamsCache, BrakingDecelerationFactorOnSlope) == 16, "Offset mismatch for FSlipperySlopeParamsCache::BrakingDecelerationFactorOnSlope");
static_assert(offsetof(FSlipperySlopeParamsCache, MaxInhibitingSlopeAngle) == 20, "Offset mismatch for FSlipperySlopeParamsCache::MaxInhibitingSlopeAngle");
static_assert(offsetof(FSlipperySlopeParamsCache, MaxInhibitingSlopeSpeedFactor) == 24, "Offset mismatch for FSlipperySlopeParamsCache::MaxInhibitingSlopeSpeedFactor");
static_assert(offsetof(FSlipperySlopeParamsCache, MaxVerticalLaunchSpeed) == 28, "Offset mismatch for FSlipperySlopeParamsCache::MaxVerticalLaunchSpeed");
static_assert(offsetof(FSlipperySlopeParamsCache, SlopeLandingForceScalar) == 32, "Offset mismatch for FSlipperySlopeParamsCache::SlopeLandingForceScalar");
static_assert(offsetof(FSlipperySlopeParamsCache, SlopeLandingMaxHorizontalForce) == 36, "Offset mismatch for FSlipperySlopeParamsCache::SlopeLandingMaxHorizontalForce");
static_assert(offsetof(FSlipperySlopeParamsCache, SlopeLaunchMinRequiredSpeed) == 40, "Offset mismatch for FSlipperySlopeParamsCache::SlopeLaunchMinRequiredSpeed");
static_assert(offsetof(FSlipperySlopeParamsCache, SlopeLaunchMinRequiredAngleChange) == 44, "Offset mismatch for FSlipperySlopeParamsCache::SlopeLaunchMinRequiredAngleChange");
static_assert(offsetof(FSlipperySlopeParamsCache, SlopeLaunchVerticalVelocityBoost) == 48, "Offset mismatch for FSlipperySlopeParamsCache::SlopeLaunchVerticalVelocityBoost");
static_assert(offsetof(FSlipperySlopeParamsCache, SlopeLaunchVerticalVelocityBoostMultiplierJumping) == 52, "Offset mismatch for FSlipperySlopeParamsCache::SlopeLaunchVerticalVelocityBoostMultiplierJumping");
static_assert(offsetof(FSlipperySlopeParamsCache, MaxLateralSpeedOverride) == 56, "Offset mismatch for FSlipperySlopeParamsCache::MaxLateralSpeedOverride");
static_assert(offsetof(FSlipperySlopeParamsCache, MaxVerticalLaunchSpeedOverride) == 60, "Offset mismatch for FSlipperySlopeParamsCache::MaxVerticalLaunchSpeedOverride");

// /Script/SlipperyMovementCode.FortMovementMode_ExtLogicSlipperyMovement
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicSlipperyMovement
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t SlipperyItemsTags[0x2F0]; // 0x01B8 (Size: 0x2F0, Type: StructProperty)
    std::uint8_t DBNOAllowedInSlipperyMovement[0x2C]; // 0x04A8 (Size: 0x2C, Type: StructProperty)
    std::uint8_t AllowDBNOTag[0x1]; // 0x04D4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicSlipperyMovement, SlipperyItemsTags) == 440, "Offset mismatch for UFortMovementMode_ExtLogicSlipperyMovement::SlipperyItemsTags");
static_assert(offsetof(UFortMovementMode_ExtLogicSlipperyMovement, DBNOAllowedInSlipperyMovement) == 1192, "Offset mismatch for UFortMovementMode_ExtLogicSlipperyMovement::DBNOAllowedInSlipperyMovement");
static_assert(offsetof(UFortMovementMode_ExtLogicSlipperyMovement, AllowDBNOTag) == 1236, "Offset mismatch for UFortMovementMode_ExtLogicSlipperyMovement::AllowDBNOTag");

// /Script/SlipperyMovementCode.FortMovementMode_SlipperyMovementRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_SlipperyMovementRuntimeData
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

static_assert(offsetof(UFortMovementMode_SlipperyMovementRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_SlipperyMovementRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_SlipperyMovementRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_SlipperyMovementRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_SlipperyMovementRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_SlipperyMovementRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_SlipperyMovementRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_SlipperyMovementRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_SlipperyMovementRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_SlipperyMovementRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_SlipperyMovementRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_SlipperyMovementRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_SlipperyMovementRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_SlipperyMovementRuntimeData::EndReasonFlags");

// /Script/SlipperyMovementCode.FortPawnComponent_SlipperyMovement
// Kind: Class; super: PawnComponent
class UFortPawnComponent_SlipperyMovement
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t SlipperySlopeParams[0x280]; // 0x00C8 (Size: 0x280, Type: StructProperty)
    std::uint8_t SlipperyItemsTags[0x20]; // 0x0348 (Size: 0x20, Type: StructProperty)
    void* MovementModeExtension; // 0x0368 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortPawnComponent_SlipperyMovement, SlipperySlopeParams) == 200, "Offset mismatch for UFortPawnComponent_SlipperyMovement::SlipperySlopeParams");
static_assert(offsetof(UFortPawnComponent_SlipperyMovement, SlipperyItemsTags) == 840, "Offset mismatch for UFortPawnComponent_SlipperyMovement::SlipperyItemsTags");
static_assert(offsetof(UFortPawnComponent_SlipperyMovement, MovementModeExtension) == 872, "Offset mismatch for UFortPawnComponent_SlipperyMovement::MovementModeExtension");
