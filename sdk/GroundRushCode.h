/**
 * decamp dumper generated SDK
 * Package: /Script/GroundRushCode
 */
#pragma once
#include "Basic.h"

// /Script/GroundRushCode.FortControllerComponent_GroundRush
// Kind: Class; super: FortControllerComponent_DamageLanding
class UFortControllerComponent_GroundRush
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    std::uint8_t GroundRushEnabled[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    void* GroundRushLogicClass; // 0x01F0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t UseLateralVelocityAsRagdollInitialSpeed[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnabledInGliderRedeploy[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlockActivationUntilLanded[0x4]; // 0x0248 (Size: 0x4, Type: StructProperty)
    std::uint8_t EventPushGroundRushTag[0x1]; // 0x024C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_GroundRush, GroundRushEnabled) == 456, "Offset mismatch for UFortControllerComponent_GroundRush::GroundRushEnabled");
static_assert(offsetof(UFortControllerComponent_GroundRush, GroundRushLogicClass) == 496, "Offset mismatch for UFortControllerComponent_GroundRush::GroundRushLogicClass");
static_assert(offsetof(UFortControllerComponent_GroundRush, UseLateralVelocityAsRagdollInitialSpeed) == 504, "Offset mismatch for UFortControllerComponent_GroundRush::UseLateralVelocityAsRagdollInitialSpeed");
static_assert(offsetof(UFortControllerComponent_GroundRush, EnabledInGliderRedeploy) == 544, "Offset mismatch for UFortControllerComponent_GroundRush::EnabledInGliderRedeploy");
static_assert(offsetof(UFortControllerComponent_GroundRush, BlockActivationUntilLanded) == 584, "Offset mismatch for UFortControllerComponent_GroundRush::BlockActivationUntilLanded");
static_assert(offsetof(UFortControllerComponent_GroundRush, EventPushGroundRushTag) == 588, "Offset mismatch for UFortControllerComponent_GroundRush::EventPushGroundRushTag");

// /Script/GroundRushCode.FortMovementMode_ExtGroundRushLanding
// Kind: Class; super: FortMovementMode_ExtDamageLanding
class UFortMovementMode_ExtGroundRushLanding
{
public:
    std::uint8_t Pad_0000[0x498]; // 0x0000
    std::uint8_t OverrideFallingDamageCurve[0x28]; // 0x0498 (Size: 0x28, Type: StructProperty)
    std::uint8_t GliderVelocityDamageCurve[0x28]; // 0x04C0 (Size: 0x28, Type: StructProperty)
    TArray<void*> GEGliderVelocityDamageList; // 0x04E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GEGliderVelocityDamageIndex[0x28]; // 0x04F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t GEGliderVelocityDamageTag[0x8]; // 0x0520 (Size: 0x8, Type: StructProperty)
    std::uint8_t UseSplatRagdollOnAnyGliderDamage[0x28]; // 0x0528 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableRollingPostLanding[0x28]; // 0x0550 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> RollingMontageMap; // 0x0578 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CardinalToDotMap; // 0x0588 (Size: 0x10, Type: MapProperty)
    std::uint8_t MaxAccelerationForRolling[0x28]; // 0x0598 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpeedForRolling[0x28]; // 0x05C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinLateralSpeedToEnterRolling[0x28]; // 0x05E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinInputToEnterRolling[0x28]; // 0x0610 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinLateralSpeedToRagdollGlider[0x28]; // 0x0638 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinLateralSpeedToRagdollFalling[0x28]; // 0x0660 (Size: 0x28, Type: StructProperty)
    std::uint8_t GCUIFeedback[0x8]; // 0x0688 (Size: 0x8, Type: StructProperty)
    std::uint8_t TagsAddedOnExtensionPush[0x20]; // 0x0690 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagsToPushOnStaticMovement[0x20]; // 0x06B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockAbilitiesOnStaticMovement[0x20]; // 0x06D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockGroundRushUntilLandedTag[0x4]; // 0x06F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t EventFallDamageLandingTag[0x1]; // 0x06F4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, OverrideFallingDamageCurve) == 1176, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::OverrideFallingDamageCurve");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, GliderVelocityDamageCurve) == 1216, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::GliderVelocityDamageCurve");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, GEGliderVelocityDamageList) == 1256, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::GEGliderVelocityDamageList");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, GEGliderVelocityDamageIndex) == 1272, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::GEGliderVelocityDamageIndex");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, GEGliderVelocityDamageTag) == 1312, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::GEGliderVelocityDamageTag");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, UseSplatRagdollOnAnyGliderDamage) == 1320, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::UseSplatRagdollOnAnyGliderDamage");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, EnableRollingPostLanding) == 1360, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::EnableRollingPostLanding");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, RollingMontageMap) == 1400, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::RollingMontageMap");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, CardinalToDotMap) == 1416, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::CardinalToDotMap");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, MaxAccelerationForRolling) == 1432, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::MaxAccelerationForRolling");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, MaxSpeedForRolling) == 1472, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::MaxSpeedForRolling");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, MinLateralSpeedToEnterRolling) == 1512, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::MinLateralSpeedToEnterRolling");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, MinInputToEnterRolling) == 1552, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::MinInputToEnterRolling");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, MinLateralSpeedToRagdollGlider) == 1592, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::MinLateralSpeedToRagdollGlider");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, MinLateralSpeedToRagdollFalling) == 1632, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::MinLateralSpeedToRagdollFalling");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, GCUIFeedback) == 1672, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::GCUIFeedback");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, TagsAddedOnExtensionPush) == 1680, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::TagsAddedOnExtensionPush");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, TagsToPushOnStaticMovement) == 1712, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::TagsToPushOnStaticMovement");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, BlockAbilitiesOnStaticMovement) == 1744, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::BlockAbilitiesOnStaticMovement");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, BlockGroundRushUntilLandedTag) == 1776, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::BlockGroundRushUntilLandedTag");
static_assert(offsetof(UFortMovementMode_ExtGroundRushLanding, EventFallDamageLandingTag) == 1780, "Offset mismatch for UFortMovementMode_ExtGroundRushLanding::EventFallDamageLandingTag");

// /Script/GroundRushCode.FortMovementMode_ExtLogicGroundRush
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicGroundRush
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t GroundSearch_DistanceToGround[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t GroundSearch_ForwardSearchTime[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t GroundSearch_OverrideParachuteDeployTraceDistance[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t GroundSearch_ParachuteDeployTraceDistance[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t Parachute_ReleaseCheckDistanceAdded[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlockGroundRushUntilLandedTag[0x8]; // 0x0280 (Size: 0x8, Type: StructProperty)
    std::uint8_t EventsToSendOnLaunchEnding[0x1]; // 0x0288 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicGroundRush, GroundSearch_DistanceToGround) == 440, "Offset mismatch for UFortMovementMode_ExtLogicGroundRush::GroundSearch_DistanceToGround");
static_assert(offsetof(UFortMovementMode_ExtLogicGroundRush, GroundSearch_ForwardSearchTime) == 480, "Offset mismatch for UFortMovementMode_ExtLogicGroundRush::GroundSearch_ForwardSearchTime");
static_assert(offsetof(UFortMovementMode_ExtLogicGroundRush, GroundSearch_OverrideParachuteDeployTraceDistance) == 520, "Offset mismatch for UFortMovementMode_ExtLogicGroundRush::GroundSearch_OverrideParachuteDeployTraceDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicGroundRush, GroundSearch_ParachuteDeployTraceDistance) == 560, "Offset mismatch for UFortMovementMode_ExtLogicGroundRush::GroundSearch_ParachuteDeployTraceDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicGroundRush, Parachute_ReleaseCheckDistanceAdded) == 600, "Offset mismatch for UFortMovementMode_ExtLogicGroundRush::Parachute_ReleaseCheckDistanceAdded");
static_assert(offsetof(UFortMovementMode_ExtLogicGroundRush, BlockGroundRushUntilLandedTag) == 640, "Offset mismatch for UFortMovementMode_ExtLogicGroundRush::BlockGroundRushUntilLandedTag");
static_assert(offsetof(UFortMovementMode_ExtLogicGroundRush, EventsToSendOnLaunchEnding) == 648, "Offset mismatch for UFortMovementMode_ExtLogicGroundRush::EventsToSendOnLaunchEnding");

// /Script/GroundRushCode.FortMovementMode_GroundRushLandingRuntimeData
// Kind: Class; super: FortMovementMode_DamageLandingRuntimeData
class UFortMovementMode_GroundRushLandingRuntimeData
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* NetAnimationMontage; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMovementMode_GroundRushLandingRuntimeData, NetAnimationMontage) == 128, "Offset mismatch for UFortMovementMode_GroundRushLandingRuntimeData::NetAnimationMontage");

// /Script/GroundRushCode.FortMovementMode_GroundRushRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_GroundRushRuntimeData
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

static_assert(offsetof(UFortMovementMode_GroundRushRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_GroundRushRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_GroundRushRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_GroundRushRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_GroundRushRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_GroundRushRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_GroundRushRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_GroundRushRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_GroundRushRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_GroundRushRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_GroundRushRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_GroundRushRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_GroundRushRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_GroundRushRuntimeData::EndReasonFlags");
