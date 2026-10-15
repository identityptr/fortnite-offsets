/**
 * decamp dumper generated SDK
 * Package: /Script/WallJumpCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WallJumpCodeRuntime.FortMovementMode_WallJumpCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_WallJumpCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t WallNormal[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t WallLocation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t JumpDirection[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t Initiator; // 0x0058 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortMovementMode_WallJumpCreationData, WallNormal) == 16, "Offset mismatch for FFortMovementMode_WallJumpCreationData::WallNormal");
static_assert(offsetof(FFortMovementMode_WallJumpCreationData, WallLocation) == 40, "Offset mismatch for FFortMovementMode_WallJumpCreationData::WallLocation");
static_assert(offsetof(FFortMovementMode_WallJumpCreationData, JumpDirection) == 64, "Offset mismatch for FFortMovementMode_WallJumpCreationData::JumpDirection");
static_assert(offsetof(FFortMovementMode_WallJumpCreationData, Initiator) == 88, "Offset mismatch for FFortMovementMode_WallJumpCreationData::Initiator");

// /Script/WallJumpCodeRuntime.FortWallJumpAnimationConfiguration
// Kind: ScriptStruct; super: none
struct FFortWallJumpAnimationConfiguration
{
public:
    TMap<void*, void*> DirectionToAnimationMap; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFortWallJumpAnimationConfiguration, DirectionToAnimationMap) == 0, "Offset mismatch for FFortWallJumpAnimationConfiguration::DirectionToAnimationMap");

// /Script/WallJumpCodeRuntime.FortWallJumpConfiguration
// Kind: ScriptStruct; super: none
struct FFortWallJumpConfiguration
{
public:
    std::uint8_t JumpZVelocity[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpAddedVelocityMultiplier[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    FName HolsterId; // 0x0050 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortWallJumpConfiguration, JumpZVelocity) == 0, "Offset mismatch for FFortWallJumpConfiguration::JumpZVelocity");
static_assert(offsetof(FFortWallJumpConfiguration, JumpAddedVelocityMultiplier) == 40, "Offset mismatch for FFortWallJumpConfiguration::JumpAddedVelocityMultiplier");
static_assert(offsetof(FFortWallJumpConfiguration, HolsterId) == 80, "Offset mismatch for FFortWallJumpConfiguration::HolsterId");

// /Script/WallJumpCodeRuntime.FortWallJumpConfigurationCached
// Kind: ScriptStruct; super: none
struct FFortWallJumpConfigurationCached
{
public:
    float JumpZVelocity; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float JumpAddedVelocityMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortWallJumpConfigurationCached, JumpZVelocity) == 0, "Offset mismatch for FFortWallJumpConfigurationCached::JumpZVelocity");
static_assert(offsetof(FFortWallJumpConfigurationCached, JumpAddedVelocityMultiplier) == 4, "Offset mismatch for FFortWallJumpConfigurationCached::JumpAddedVelocityMultiplier");

// /Script/WallJumpCodeRuntime.WallJumpTargetingData
// Kind: ScriptStruct; super: ContextualTraversalTargetingData
struct FWallJumpTargetingData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bIsValid; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    std::uint8_t SuccessfulDirection[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> TargetActor; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetActorComponent; // 0x0070 (Size: 0x8, Type: WeakObjectProperty)
    FName TargetActorBoneName; // 0x0078 (Size: 0x8, Type: NameProperty)
    std::uint8_t RunningDirection[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionNormal[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWallJumpTargetingData, bIsValid) == 72, "Offset mismatch for FWallJumpTargetingData::bIsValid");
static_assert(offsetof(FWallJumpTargetingData, SuccessfulDirection) == 80, "Offset mismatch for FWallJumpTargetingData::SuccessfulDirection");
static_assert(offsetof(FWallJumpTargetingData, TargetActor) == 104, "Offset mismatch for FWallJumpTargetingData::TargetActor");
static_assert(offsetof(FWallJumpTargetingData, TargetActorComponent) == 112, "Offset mismatch for FWallJumpTargetingData::TargetActorComponent");
static_assert(offsetof(FWallJumpTargetingData, TargetActorBoneName) == 120, "Offset mismatch for FWallJumpTargetingData::TargetActorBoneName");
static_assert(offsetof(FWallJumpTargetingData, RunningDirection) == 128, "Offset mismatch for FWallJumpTargetingData::RunningDirection");
static_assert(offsetof(FWallJumpTargetingData, InteractionNormal) == 152, "Offset mismatch for FWallJumpTargetingData::InteractionNormal");

// /Script/WallJumpCodeRuntime.FortControllerComponent_WallJump
// Kind: Class; super: ControllerComponent
class UFortControllerComponent_WallJump
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> CurrentBoundPlayerPawn; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t WallJumpEnabled[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WallJumpBackEnabled[0x40]; // 0x00F0 (Size: 0x40, Type: StructProperty)
    void* WallJumpLogicClass; // 0x0130 (Size: 0x8, Type: ClassProperty)
    std::uint8_t WallJumpTargetingRange[0x30]; // 0x0138 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpScoringModifier[0x30]; // 0x0168 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpBackScoringModifier[0x30]; // 0x0198 (Size: 0x30, Type: StructProperty)
    std::uint8_t JumpDirectionFallbackSideInfluence[0x30]; // 0x01C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t JumpDirectionMaxAngleDiff[0x30]; // 0x01F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SecondJumpWallMaxAngle[0x30]; // 0x0228 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpSphereCastSize[0x30]; // 0x0258 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpMinEnergyToActivate[0x30]; // 0x0288 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpEnergyCostOnActivate[0x30]; // 0x02B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpSpeedToActivate[0x30]; // 0x02E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpMaxFallHeight[0x30]; // 0x0318 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpFailLowEnergy[0x20]; // 0x0348 (Size: 0x20, Type: StructProperty)
    std::uint8_t WallJumpBlockingTag[0x20]; // 0x0368 (Size: 0x20, Type: StructProperty)
    std::uint8_t WallJumpBackMaxAngle[0x2C]; // 0x0388 (Size: 0x2C, Type: StructProperty)
    std::uint8_t InTargetingRangeTag[0x2C]; // 0x03B4 (Size: 0x2C, Type: StructProperty)
    void* JumpMultiplerCurve; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WallJumpFatigueJumpCount[0x30]; // 0x03E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpShouldUseCachedValues[0x30]; // 0x0418 (Size: 0x30, Type: StructProperty)
    void* WallDetectionSpeedRatio; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0450
    std::uint8_t WallJumpGroundCheckDistance[0x30]; // 0x0460 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpFatigueResetTime[0x30]; // 0x0490 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallJumpFatigueLandingReduction[0x1]; // 0x04C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_WallJump, CurrentBoundPlayerPawn) == 192, "Offset mismatch for UFortControllerComponent_WallJump::CurrentBoundPlayerPawn");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpEnabled) == 200, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpEnabled");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpBackEnabled) == 240, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpBackEnabled");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpLogicClass) == 304, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpLogicClass");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpTargetingRange) == 312, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpTargetingRange");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpScoringModifier) == 360, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpScoringModifier");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpBackScoringModifier) == 408, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpBackScoringModifier");
static_assert(offsetof(UFortControllerComponent_WallJump, JumpDirectionFallbackSideInfluence) == 456, "Offset mismatch for UFortControllerComponent_WallJump::JumpDirectionFallbackSideInfluence");
static_assert(offsetof(UFortControllerComponent_WallJump, JumpDirectionMaxAngleDiff) == 504, "Offset mismatch for UFortControllerComponent_WallJump::JumpDirectionMaxAngleDiff");
static_assert(offsetof(UFortControllerComponent_WallJump, SecondJumpWallMaxAngle) == 552, "Offset mismatch for UFortControllerComponent_WallJump::SecondJumpWallMaxAngle");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpSphereCastSize) == 600, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpSphereCastSize");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpMinEnergyToActivate) == 648, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpMinEnergyToActivate");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpEnergyCostOnActivate) == 696, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpEnergyCostOnActivate");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpSpeedToActivate) == 744, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpSpeedToActivate");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpMaxFallHeight) == 792, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpMaxFallHeight");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpFailLowEnergy) == 840, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpFailLowEnergy");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpBlockingTag) == 872, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpBlockingTag");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpBackMaxAngle) == 904, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpBackMaxAngle");
static_assert(offsetof(UFortControllerComponent_WallJump, InTargetingRangeTag) == 948, "Offset mismatch for UFortControllerComponent_WallJump::InTargetingRangeTag");
static_assert(offsetof(UFortControllerComponent_WallJump, JumpMultiplerCurve) == 992, "Offset mismatch for UFortControllerComponent_WallJump::JumpMultiplerCurve");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpFatigueJumpCount) == 1000, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpFatigueJumpCount");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpShouldUseCachedValues) == 1048, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpShouldUseCachedValues");
static_assert(offsetof(UFortControllerComponent_WallJump, WallDetectionSpeedRatio) == 1096, "Offset mismatch for UFortControllerComponent_WallJump::WallDetectionSpeedRatio");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpGroundCheckDistance) == 1120, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpGroundCheckDistance");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpFatigueResetTime) == 1168, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpFatigueResetTime");
static_assert(offsetof(UFortControllerComponent_WallJump, WallJumpFatigueLandingReduction) == 1216, "Offset mismatch for UFortControllerComponent_WallJump::WallJumpFatigueLandingReduction");

// /Script/WallJumpCodeRuntime.FortMovementMode_ExtWallJump
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtWallJump
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t WallJumpEnabled[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t WallJumpTag[0x8]; // 0x01E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t WallMovementModeTags[0x20]; // 0x01F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t WallJumpGameplayCueTag[0x8]; // 0x0210 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> WallJumpConfigToInitiator; // 0x0218 (Size: 0x10, Type: MapProperty)
    void* AnimationLayer; // 0x0228 (Size: 0x8, Type: ClassProperty)
    void* ZAttenuationCurve; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    void* JumpRotationCurve; // 0x0238 (Size: 0x8, Type: ObjectProperty)
    void* JumpForceMultiplierCurve; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CardinalToDirectionMap; // 0x0248 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> WallJumpAnimationToInitiator; // 0x0258 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Cached_WallJumpConfigToInitiator; // 0x0268 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0278
    float WallJumpSurfaceTestZOffset; // 0x027C (Size: 0x4, Type: FloatProperty)
    float WallJumpSurfaceTestDistMultiplier; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0284
    std::uint8_t WallJumpFromWallStickEnabled[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t WallJumpShouldUseCachedValues[0x1]; // 0x02B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtWallJump, WallJumpEnabled) == 448, "Offset mismatch for UFortMovementMode_ExtWallJump::WallJumpEnabled");
static_assert(offsetof(UFortMovementMode_ExtWallJump, WallJumpTag) == 488, "Offset mismatch for UFortMovementMode_ExtWallJump::WallJumpTag");
static_assert(offsetof(UFortMovementMode_ExtWallJump, WallMovementModeTags) == 496, "Offset mismatch for UFortMovementMode_ExtWallJump::WallMovementModeTags");
static_assert(offsetof(UFortMovementMode_ExtWallJump, WallJumpGameplayCueTag) == 528, "Offset mismatch for UFortMovementMode_ExtWallJump::WallJumpGameplayCueTag");
static_assert(offsetof(UFortMovementMode_ExtWallJump, WallJumpConfigToInitiator) == 536, "Offset mismatch for UFortMovementMode_ExtWallJump::WallJumpConfigToInitiator");
static_assert(offsetof(UFortMovementMode_ExtWallJump, AnimationLayer) == 552, "Offset mismatch for UFortMovementMode_ExtWallJump::AnimationLayer");
static_assert(offsetof(UFortMovementMode_ExtWallJump, ZAttenuationCurve) == 560, "Offset mismatch for UFortMovementMode_ExtWallJump::ZAttenuationCurve");
static_assert(offsetof(UFortMovementMode_ExtWallJump, JumpRotationCurve) == 568, "Offset mismatch for UFortMovementMode_ExtWallJump::JumpRotationCurve");
static_assert(offsetof(UFortMovementMode_ExtWallJump, JumpForceMultiplierCurve) == 576, "Offset mismatch for UFortMovementMode_ExtWallJump::JumpForceMultiplierCurve");
static_assert(offsetof(UFortMovementMode_ExtWallJump, CardinalToDirectionMap) == 584, "Offset mismatch for UFortMovementMode_ExtWallJump::CardinalToDirectionMap");
static_assert(offsetof(UFortMovementMode_ExtWallJump, WallJumpAnimationToInitiator) == 600, "Offset mismatch for UFortMovementMode_ExtWallJump::WallJumpAnimationToInitiator");
static_assert(offsetof(UFortMovementMode_ExtWallJump, Cached_WallJumpConfigToInitiator) == 616, "Offset mismatch for UFortMovementMode_ExtWallJump::Cached_WallJumpConfigToInitiator");
static_assert(offsetof(UFortMovementMode_ExtWallJump, WallJumpSurfaceTestZOffset) == 636, "Offset mismatch for UFortMovementMode_ExtWallJump::WallJumpSurfaceTestZOffset");
static_assert(offsetof(UFortMovementMode_ExtWallJump, WallJumpSurfaceTestDistMultiplier) == 640, "Offset mismatch for UFortMovementMode_ExtWallJump::WallJumpSurfaceTestDistMultiplier");
static_assert(offsetof(UFortMovementMode_ExtWallJump, WallJumpFromWallStickEnabled) == 648, "Offset mismatch for UFortMovementMode_ExtWallJump::WallJumpFromWallStickEnabled");
static_assert(offsetof(UFortMovementMode_ExtWallJump, WallJumpShouldUseCachedValues) == 688, "Offset mismatch for UFortMovementMode_ExtWallJump::WallJumpShouldUseCachedValues");

// /Script/WallJumpCodeRuntime.FortMovementMode_WallJumpRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_WallJumpRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t NetJumpDirection[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t NetInitiator; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0051
    std::uint8_t WallLocation[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t WallHitResult[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_WallJumpRuntimeData, NetJumpDirection) == 56, "Offset mismatch for UFortMovementMode_WallJumpRuntimeData::NetJumpDirection");
static_assert(offsetof(UFortMovementMode_WallJumpRuntimeData, NetInitiator) == 80, "Offset mismatch for UFortMovementMode_WallJumpRuntimeData::NetInitiator");
static_assert(offsetof(UFortMovementMode_WallJumpRuntimeData, WallLocation) == 96, "Offset mismatch for UFortMovementMode_WallJumpRuntimeData::WallLocation");
static_assert(offsetof(UFortMovementMode_WallJumpRuntimeData, WallHitResult) == 136, "Offset mismatch for UFortMovementMode_WallJumpRuntimeData::WallHitResult");
