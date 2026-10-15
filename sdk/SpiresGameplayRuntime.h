/**
 * decamp dumper generated SDK
 * Package: /Script/SpiresGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpiresGameplayRuntime.FortLWPredictionInitData
// Kind: ScriptStruct; super: none
struct FFortLWPredictionInitData
{
public:
    std::uint8_t PredictionTriggeringCondition[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t DelayBeforePrediction[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t PredictionDuration[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortLWPredictionInitData, PredictionTriggeringCondition) == 0, "Offset mismatch for FFortLWPredictionInitData::PredictionTriggeringCondition");
static_assert(offsetof(FFortLWPredictionInitData, DelayBeforePrediction) == 40, "Offset mismatch for FFortLWPredictionInitData::DelayBeforePrediction");
static_assert(offsetof(FFortLWPredictionInitData, PredictionDuration) == 80, "Offset mismatch for FFortLWPredictionInitData::PredictionDuration");

// /Script/SpiresGameplayRuntime.FortLWPPredictionComponent
// Kind: Class; super: ActorComponent
class UFortLWPPredictionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ConditionCheckTickRate[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitData[0x78]; // 0x00E8 (Size: 0x78, Type: StructProperty)
    std::uint8_t PredictionConditionQueryState[0x30]; // 0x0160 (Size: 0x30, Type: StructProperty)
    std::uint8_t CurrentState; // 0x0190 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortLWPPredictionComponent, ConditionCheckTickRate) == 192, "Offset mismatch for UFortLWPPredictionComponent::ConditionCheckTickRate");
static_assert(offsetof(UFortLWPPredictionComponent, InitData) == 232, "Offset mismatch for UFortLWPPredictionComponent::InitData");
static_assert(offsetof(UFortLWPPredictionComponent, PredictionConditionQueryState) == 352, "Offset mismatch for UFortLWPPredictionComponent::PredictionConditionQueryState");
static_assert(offsetof(UFortLWPPredictionComponent, CurrentState) == 400, "Offset mismatch for UFortLWPPredictionComponent::CurrentState");

// /Script/SpiresGameplayRuntime.FortLivingWorldSpawnAction_TriggerPrediction
// Kind: Class; super: FortAthenaLivingWorldSpawnAction
class UFortLivingWorldSpawnAction_TriggerPrediction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InitData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortLivingWorldSpawnAction_TriggerPrediction, InitData) == 40, "Offset mismatch for UFortLivingWorldSpawnAction_TriggerPrediction::InitData");

// /Script/SpiresGameplayRuntime.SpireEventPlayerComponent
// Kind: Class; super: FortPlayerStateComponent
class USpireEventPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnStartedParticipatingInSpireEvent; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStoppedParticipatingInSpireEvent; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USpireEventPlayerComponent, OnStartedParticipatingInSpireEvent) == 192, "Offset mismatch for USpireEventPlayerComponent::OnStartedParticipatingInSpireEvent");
static_assert(offsetof(USpireEventPlayerComponent, OnStoppedParticipatingInSpireEvent) == 208, "Offset mismatch for USpireEventPlayerComponent::OnStoppedParticipatingInSpireEvent");

// /Script/SpiresGameplayRuntime.SpirePlayspace
// Kind: Class; super: FortPlayspace
class USpirePlayspace
{
public:
    std::uint8_t Pad_0000[0x658]; // 0x0000
    void* SpireBGA; // 0x0658 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpirePlayspace, SpireBGA) == 1624, "Offset mismatch for USpirePlayspace::SpireBGA");
