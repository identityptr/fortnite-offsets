/**
 * decamp dumper generated SDK
 * Package: /Script/RollLandingCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/RollLandingCodeRuntime.FortMovementMode_RollLandingCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_RollLandingCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_RollLandingCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_RollLandingCreationData::LogicClass");

// /Script/RollLandingCodeRuntime.FortAthenaAIBotEvaluator_RollLanding
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_RollLanding
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName JumpExecutionStatusName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t EvaluatorTickInterval[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RollInputTime[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_RollLanding, JumpExecutionStatusName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_RollLanding::JumpExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RollLanding, EvaluatorTickInterval) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_RollLanding::EvaluatorTickInterval");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RollLanding, RollInputTime) == 216, "Offset mismatch for UFortAthenaAIBotEvaluator_RollLanding::RollInputTime");

// /Script/RollLandingCodeRuntime.FortControllerComponent_RollLanding
// Kind: Class; super: ControllerComponent
class UFortControllerComponent_RollLanding
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t RollLandingEnabled[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    void* RollLandingLogicClass; // 0x0100 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MinInitialFallHeight[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableHoldJumpInput[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowHoldJumpInputPreFallHeightOrSpeed[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t RollLandingMovementModeTag[0x8]; // 0x0180 (Size: 0x8, Type: StructProperty)
    std::uint8_t MinSpeedRequirementToSkipFallCheck[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t IgnoreFallHeightTag[0x4]; // 0x01B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t DisableSpeedTriggerTag[0x4]; // 0x01B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t CanBeTriggeredTag[0x4]; // 0x01B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t BlockedTag[0x4]; // 0x01BC (Size: 0x4, Type: StructProperty)
    float RollLandingAvailableMonitorRate; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    float RollLandingHoldMonitorRate; // 0x01C4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortControllerComponent_RollLanding, RollLandingEnabled) == 216, "Offset mismatch for UFortControllerComponent_RollLanding::RollLandingEnabled");
static_assert(offsetof(UFortControllerComponent_RollLanding, RollLandingLogicClass) == 256, "Offset mismatch for UFortControllerComponent_RollLanding::RollLandingLogicClass");
static_assert(offsetof(UFortControllerComponent_RollLanding, MinInitialFallHeight) == 264, "Offset mismatch for UFortControllerComponent_RollLanding::MinInitialFallHeight");
static_assert(offsetof(UFortControllerComponent_RollLanding, EnableHoldJumpInput) == 304, "Offset mismatch for UFortControllerComponent_RollLanding::EnableHoldJumpInput");
static_assert(offsetof(UFortControllerComponent_RollLanding, AllowHoldJumpInputPreFallHeightOrSpeed) == 344, "Offset mismatch for UFortControllerComponent_RollLanding::AllowHoldJumpInputPreFallHeightOrSpeed");
static_assert(offsetof(UFortControllerComponent_RollLanding, RollLandingMovementModeTag) == 384, "Offset mismatch for UFortControllerComponent_RollLanding::RollLandingMovementModeTag");
static_assert(offsetof(UFortControllerComponent_RollLanding, MinSpeedRequirementToSkipFallCheck) == 392, "Offset mismatch for UFortControllerComponent_RollLanding::MinSpeedRequirementToSkipFallCheck");
static_assert(offsetof(UFortControllerComponent_RollLanding, IgnoreFallHeightTag) == 432, "Offset mismatch for UFortControllerComponent_RollLanding::IgnoreFallHeightTag");
static_assert(offsetof(UFortControllerComponent_RollLanding, DisableSpeedTriggerTag) == 436, "Offset mismatch for UFortControllerComponent_RollLanding::DisableSpeedTriggerTag");
static_assert(offsetof(UFortControllerComponent_RollLanding, CanBeTriggeredTag) == 440, "Offset mismatch for UFortControllerComponent_RollLanding::CanBeTriggeredTag");
static_assert(offsetof(UFortControllerComponent_RollLanding, BlockedTag) == 444, "Offset mismatch for UFortControllerComponent_RollLanding::BlockedTag");
static_assert(offsetof(UFortControllerComponent_RollLanding, RollLandingAvailableMonitorRate) == 448, "Offset mismatch for UFortControllerComponent_RollLanding::RollLandingAvailableMonitorRate");
static_assert(offsetof(UFortControllerComponent_RollLanding, RollLandingHoldMonitorRate) == 452, "Offset mismatch for UFortControllerComponent_RollLanding::RollLandingHoldMonitorRate");

// /Script/RollLandingCodeRuntime.FortMovementMode_ExtRollLanding
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtRollLanding
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t MaxSpeed[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputBufferTime[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAcceleration[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlockJumpWindow[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlockSlidingWindow[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t RollLandingGameplayCueTag[0x4]; // 0x0288 (Size: 0x4, Type: StructProperty)
    std::uint8_t GCRollLandingPushedTag[0x4]; // 0x028C (Size: 0x4, Type: StructProperty)
    TArray<void*> GERollLandingFallDamageList; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GERollLandingFallDamageIndex[0x28]; // 0x02A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RollLandingDamageReduction[0x28]; // 0x02C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FallDamageOverrideEnabled[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t OnPushedBlockAbilityTags[0x20]; // 0x0318 (Size: 0x20, Type: StructProperty)
    std::uint8_t OnPushedOwnedTags[0x20]; // 0x0338 (Size: 0x20, Type: StructProperty)
    std::uint8_t PreventHolsterTag[0x4]; // 0x0358 (Size: 0x4, Type: StructProperty)
    std::uint8_t DamageReductionExecutionModifierTag[0x4]; // 0x035C (Size: 0x4, Type: StructProperty)
    std::uint8_t DamageManagerEffectTags[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> RollLandingStateToTagMap; // 0x0380 (Size: 0x10, Type: MapProperty)
    std::uint8_t BlockAbilitiesDuringRollingState[0x20]; // 0x0390 (Size: 0x20, Type: StructProperty)
    std::uint8_t FallDamageOverrideEnabledTag[0x8]; // 0x03B0 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimationDelayTime[0x28]; // 0x03B8 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> RollMontageMap; // 0x03E0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CardinalToDotMap; // 0x03F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortMovementMode_ExtRollLanding, MaxSpeed) == 448, "Offset mismatch for UFortMovementMode_ExtRollLanding::MaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, InputBufferTime) == 488, "Offset mismatch for UFortMovementMode_ExtRollLanding::InputBufferTime");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, MaxAcceleration) == 528, "Offset mismatch for UFortMovementMode_ExtRollLanding::MaxAcceleration");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, BlockJumpWindow) == 568, "Offset mismatch for UFortMovementMode_ExtRollLanding::BlockJumpWindow");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, BlockSlidingWindow) == 608, "Offset mismatch for UFortMovementMode_ExtRollLanding::BlockSlidingWindow");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, RollLandingGameplayCueTag) == 648, "Offset mismatch for UFortMovementMode_ExtRollLanding::RollLandingGameplayCueTag");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, GCRollLandingPushedTag) == 652, "Offset mismatch for UFortMovementMode_ExtRollLanding::GCRollLandingPushedTag");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, GERollLandingFallDamageList) == 656, "Offset mismatch for UFortMovementMode_ExtRollLanding::GERollLandingFallDamageList");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, GERollLandingFallDamageIndex) == 672, "Offset mismatch for UFortMovementMode_ExtRollLanding::GERollLandingFallDamageIndex");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, RollLandingDamageReduction) == 712, "Offset mismatch for UFortMovementMode_ExtRollLanding::RollLandingDamageReduction");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, FallDamageOverrideEnabled) == 752, "Offset mismatch for UFortMovementMode_ExtRollLanding::FallDamageOverrideEnabled");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, OnPushedBlockAbilityTags) == 792, "Offset mismatch for UFortMovementMode_ExtRollLanding::OnPushedBlockAbilityTags");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, OnPushedOwnedTags) == 824, "Offset mismatch for UFortMovementMode_ExtRollLanding::OnPushedOwnedTags");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, PreventHolsterTag) == 856, "Offset mismatch for UFortMovementMode_ExtRollLanding::PreventHolsterTag");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, DamageReductionExecutionModifierTag) == 860, "Offset mismatch for UFortMovementMode_ExtRollLanding::DamageReductionExecutionModifierTag");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, DamageManagerEffectTags) == 864, "Offset mismatch for UFortMovementMode_ExtRollLanding::DamageManagerEffectTags");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, RollLandingStateToTagMap) == 896, "Offset mismatch for UFortMovementMode_ExtRollLanding::RollLandingStateToTagMap");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, BlockAbilitiesDuringRollingState) == 912, "Offset mismatch for UFortMovementMode_ExtRollLanding::BlockAbilitiesDuringRollingState");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, FallDamageOverrideEnabledTag) == 944, "Offset mismatch for UFortMovementMode_ExtRollLanding::FallDamageOverrideEnabledTag");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, AnimationDelayTime) == 952, "Offset mismatch for UFortMovementMode_ExtRollLanding::AnimationDelayTime");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, RollMontageMap) == 992, "Offset mismatch for UFortMovementMode_ExtRollLanding::RollMontageMap");
static_assert(offsetof(UFortMovementMode_ExtRollLanding, CardinalToDotMap) == 1008, "Offset mismatch for UFortMovementMode_ExtRollLanding::CardinalToDotMap");

// /Script/RollLandingCodeRuntime.FortMovementMode_RollLandingRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_RollLandingRuntimeData
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

static_assert(offsetof(UFortMovementMode_RollLandingRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_RollLandingRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_RollLandingRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_RollLandingRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_RollLandingRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_RollLandingRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_RollLandingRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_RollLandingRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_RollLandingRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_RollLandingRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_RollLandingRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_RollLandingRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_RollLandingRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_RollLandingRuntimeData::EndReasonFlags");
