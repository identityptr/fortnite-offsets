/**
 * decamp dumper generated SDK
 * Package: /Script/FNFeelingsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FNFeelingsRuntime.FNEventReaction_Feelings
// Kind: ScriptStruct; super: EventReactionBase
struct FFNEventReaction_Feelings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> FeelingsToPush; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t RollChance; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFNEventReaction_Feelings, FeelingsToPush) == 8, "Offset mismatch for FFNEventReaction_Feelings::FeelingsToPush");
static_assert(offsetof(FFNEventReaction_Feelings, RollChance) == 24, "Offset mismatch for FFNEventReaction_Feelings::RollChance");

// /Script/FNFeelingsRuntime.FNFeelingsConfiguration
// Kind: ScriptStruct; super: none
struct FFNFeelingsConfiguration
{
public:
    TArray<void*> ValidFeelings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RequiredTagQueryOnReasonTag[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::uint8_t ValueCap[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t FeelingSwitchBaseThreshold[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t FeelingSwitchDeltaThreshold[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FeelingRemovalThreshold[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DecayDelay[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DecayPerSecond[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFNFeelingsConfiguration, ValidFeelings) == 0, "Offset mismatch for FFNFeelingsConfiguration::ValidFeelings");
static_assert(offsetof(FFNFeelingsConfiguration, RequiredTagQueryOnReasonTag) == 16, "Offset mismatch for FFNFeelingsConfiguration::RequiredTagQueryOnReasonTag");
static_assert(offsetof(FFNFeelingsConfiguration, ValueCap) == 88, "Offset mismatch for FFNFeelingsConfiguration::ValueCap");
static_assert(offsetof(FFNFeelingsConfiguration, FeelingSwitchBaseThreshold) == 128, "Offset mismatch for FFNFeelingsConfiguration::FeelingSwitchBaseThreshold");
static_assert(offsetof(FFNFeelingsConfiguration, FeelingSwitchDeltaThreshold) == 168, "Offset mismatch for FFNFeelingsConfiguration::FeelingSwitchDeltaThreshold");
static_assert(offsetof(FFNFeelingsConfiguration, FeelingRemovalThreshold) == 208, "Offset mismatch for FFNFeelingsConfiguration::FeelingRemovalThreshold");
static_assert(offsetof(FFNFeelingsConfiguration, DecayDelay) == 248, "Offset mismatch for FFNFeelingsConfiguration::DecayDelay");
static_assert(offsetof(FFNFeelingsConfiguration, DecayPerSecond) == 288, "Offset mismatch for FFNFeelingsConfiguration::DecayPerSecond");

// /Script/FNFeelingsRuntime.FNFeelingsPushData
// Kind: ScriptStruct; super: none
struct FFNFeelingsPushData
{
public:
    std::uint8_t FeelingTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ReasonTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> Instigator; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFNFeelingsPushData, FeelingTag) == 0, "Offset mismatch for FFNFeelingsPushData::FeelingTag");
static_assert(offsetof(FFNFeelingsPushData, Value) == 4, "Offset mismatch for FFNFeelingsPushData::Value");
static_assert(offsetof(FFNFeelingsPushData, ReasonTags) == 8, "Offset mismatch for FFNFeelingsPushData::ReasonTags");
static_assert(offsetof(FFNFeelingsPushData, Instigator) == 40, "Offset mismatch for FFNFeelingsPushData::Instigator");

// /Script/FNFeelingsRuntime.FNFeelingsPushEditorData
// Kind: ScriptStruct; super: none
struct FFNFeelingsPushEditorData
{
public:
    std::uint8_t FeelingTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float MinValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t ReasonTags[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFNFeelingsPushEditorData, FeelingTag) == 0, "Offset mismatch for FFNFeelingsPushEditorData::FeelingTag");
static_assert(offsetof(FFNFeelingsPushEditorData, MinValue) == 4, "Offset mismatch for FFNFeelingsPushEditorData::MinValue");
static_assert(offsetof(FFNFeelingsPushEditorData, MaxValue) == 8, "Offset mismatch for FFNFeelingsPushEditorData::MaxValue");
static_assert(offsetof(FFNFeelingsPushEditorData, ReasonTags) == 16, "Offset mismatch for FFNFeelingsPushEditorData::ReasonTags");

// /Script/FNFeelingsRuntime.FNFeelingsStateRuntime
// Kind: ScriptStruct; super: none
struct FFNFeelingsStateRuntime
{
public:
    TArray<void*> AllFeelingsStates; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MainFeelingTag[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t LastSwitchPushData[0x30]; // 0x0018 (Size: 0x30, Type: StructProperty)
    float LastSwitchTime; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFNFeelingsStateRuntime, AllFeelingsStates) == 0, "Offset mismatch for FFNFeelingsStateRuntime::AllFeelingsStates");
static_assert(offsetof(FFNFeelingsStateRuntime, MainFeelingTag) == 16, "Offset mismatch for FFNFeelingsStateRuntime::MainFeelingTag");
static_assert(offsetof(FFNFeelingsStateRuntime, LastSwitchPushData) == 24, "Offset mismatch for FFNFeelingsStateRuntime::LastSwitchPushData");
static_assert(offsetof(FFNFeelingsStateRuntime, LastSwitchTime) == 72, "Offset mismatch for FFNFeelingsStateRuntime::LastSwitchTime");

// /Script/FNFeelingsRuntime.FNSingleFeelingStateRuntime
// Kind: ScriptStruct; super: none
struct FFNSingleFeelingStateRuntime
{
public:
    std::uint8_t FeelingTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastReceivedPushData[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    float LastIncreaseTime; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float LastDecreaseTime; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFNSingleFeelingStateRuntime, FeelingTag) == 0, "Offset mismatch for FFNSingleFeelingStateRuntime::FeelingTag");
static_assert(offsetof(FFNSingleFeelingStateRuntime, Value) == 4, "Offset mismatch for FFNSingleFeelingStateRuntime::Value");
static_assert(offsetof(FFNSingleFeelingStateRuntime, LastReceivedPushData) == 8, "Offset mismatch for FFNSingleFeelingStateRuntime::LastReceivedPushData");
static_assert(offsetof(FFNSingleFeelingStateRuntime, LastIncreaseTime) == 56, "Offset mismatch for FFNSingleFeelingStateRuntime::LastIncreaseTime");
static_assert(offsetof(FFNSingleFeelingStateRuntime, LastDecreaseTime) == 60, "Offset mismatch for FFNSingleFeelingStateRuntime::LastDecreaseTime");

// /Script/FNFeelingsRuntime.FNFeelingsComponent
// Kind: Class; super: FortPawnComponent
class UFNFeelingsComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t Configuration[0x148]; // 0x00C8 (Size: 0x148, Type: StructProperty)
    FMulticastInlineDelegate OnFNFeelingsMainFeelingChangedDelegate; // 0x0210 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0220
    std::uint8_t RuntimeData[0x1]; // 0x0238 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFNFeelingsComponent, Configuration) == 200, "Offset mismatch for UFNFeelingsComponent::Configuration");
static_assert(offsetof(UFNFeelingsComponent, OnFNFeelingsMainFeelingChangedDelegate) == 528, "Offset mismatch for UFNFeelingsComponent::OnFNFeelingsMainFeelingChangedDelegate");
static_assert(offsetof(UFNFeelingsComponent, RuntimeData) == 568, "Offset mismatch for UFNFeelingsComponent::RuntimeData");
