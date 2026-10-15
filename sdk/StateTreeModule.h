/**
 * decamp dumper generated SDK
 * Package: /Script/StateTreeModule
 */
#pragma once
#include "Basic.h"

// /Script/StateTreeModule.CompactEventDesc
// Kind: ScriptStruct; super: none
struct FCompactEventDesc
{
public:
    void* PayloadStruct; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Tag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompactEventDesc, PayloadStruct) == 0, "Offset mismatch for FCompactEventDesc::PayloadStruct");
static_assert(offsetof(FCompactEventDesc, Tag) == 8, "Offset mismatch for FCompactEventDesc::Tag");

// /Script/StateTreeModule.CompactStateTransition
// Kind: ScriptStruct; super: none
struct FCompactStateTransition
{
public:
    std::uint8_t RequiredEvent[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredDelegateDispatcher[0x1C]; // 0x0010 (Size: 0x1C, Type: StructProperty)
    std::uint16_t ConditionsBegin; // 0x002C (Size: 0x2, Type: UInt16Property)
    std::uint8_t State[0x2]; // 0x002E (Size: 0x2, Type: StructProperty)
    std::uint8_t Delay[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    std::uint8_t Trigger; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Priority; // 0x0035 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Fallback; // 0x0036 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ConditionsNum; // 0x0037 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ChangeTypeTargetStateRule; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bConsumeEventOnSelect; // 0x0039 (Size: 0x1, Type: BoolProperty)
    // 0x0039 BoolProperty bTransitionEnabled (shared storage)
};

static_assert(offsetof(FCompactStateTransition, RequiredEvent) == 0, "Offset mismatch for FCompactStateTransition::RequiredEvent");
static_assert(offsetof(FCompactStateTransition, RequiredDelegateDispatcher) == 16, "Offset mismatch for FCompactStateTransition::RequiredDelegateDispatcher");
static_assert(offsetof(FCompactStateTransition, ConditionsBegin) == 44, "Offset mismatch for FCompactStateTransition::ConditionsBegin");
static_assert(offsetof(FCompactStateTransition, State) == 46, "Offset mismatch for FCompactStateTransition::State");
static_assert(offsetof(FCompactStateTransition, Delay) == 48, "Offset mismatch for FCompactStateTransition::Delay");
static_assert(offsetof(FCompactStateTransition, Trigger) == 52, "Offset mismatch for FCompactStateTransition::Trigger");
static_assert(offsetof(FCompactStateTransition, Priority) == 53, "Offset mismatch for FCompactStateTransition::Priority");
static_assert(offsetof(FCompactStateTransition, Fallback) == 54, "Offset mismatch for FCompactStateTransition::Fallback");
static_assert(offsetof(FCompactStateTransition, ConditionsNum) == 55, "Offset mismatch for FCompactStateTransition::ConditionsNum");
static_assert(offsetof(FCompactStateTransition, ChangeTypeTargetStateRule) == 56, "Offset mismatch for FCompactStateTransition::ChangeTypeTargetStateRule");
static_assert(offsetof(FCompactStateTransition, bConsumeEventOnSelect) == 57, "Offset mismatch for FCompactStateTransition::bConsumeEventOnSelect");

// /Script/StateTreeModule.CompactStateTreeFrame
// Kind: ScriptStruct; super: none
struct FCompactStateTreeFrame
{
public:
    std::uint8_t RootState[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint8_t NumberOfTasksStatusMasks; // 0x0002 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FCompactStateTreeFrame, RootState) == 0, "Offset mismatch for FCompactStateTreeFrame::RootState");
static_assert(offsetof(FCompactStateTreeFrame, NumberOfTasksStatusMasks) == 2, "Offset mismatch for FCompactStateTreeFrame::NumberOfTasksStatusMasks");

// /Script/StateTreeModule.CompactStateTreeParameters
// Kind: ScriptStruct; super: none
struct FCompactStateTreeParameters
{
public:
    std::uint8_t Parameters[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstancedParameters[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompactStateTreeParameters, Parameters) == 0, "Offset mismatch for FCompactStateTreeParameters::Parameters");
static_assert(offsetof(FCompactStateTreeParameters, InstancedParameters) == 16, "Offset mismatch for FCompactStateTreeParameters::InstancedParameters");

// /Script/StateTreeModule.CompactStateTreeState
// Kind: ScriptStruct; super: none
struct FCompactStateTreeState
{
public:
    std::uint8_t RequiredEventToEnter[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t Tag[0x1C]; // 0x0014 (Size: 0x1C, Type: StructProperty)
    void* LinkedAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LinkedState[0x2]; // 0x0038 (Size: 0x2, Type: StructProperty)
    std::uint8_t Parent[0x2]; // 0x003A (Size: 0x2, Type: StructProperty)
    std::uint16_t ChildrenBegin; // 0x003C (Size: 0x2, Type: UInt16Property)
    std::uint16_t ChildrenEnd; // 0x003E (Size: 0x2, Type: UInt16Property)
    std::uint16_t EnterConditionsBegin; // 0x0040 (Size: 0x2, Type: UInt16Property)
    std::uint16_t UtilityConsiderationsBegin; // 0x0042 (Size: 0x2, Type: UInt16Property)
    std::uint16_t TransitionsBegin; // 0x0044 (Size: 0x2, Type: UInt16Property)
    std::uint16_t TasksBegin; // 0x0046 (Size: 0x2, Type: UInt16Property)
    std::uint8_t ParameterTemplateIndex[0x2]; // 0x0048 (Size: 0x2, Type: StructProperty)
    std::uint8_t ParameterDataHandle[0x6]; // 0x004A (Size: 0x6, Type: StructProperty)
    std::uint8_t ParameterBindingsBatch[0x2]; // 0x0050 (Size: 0x2, Type: StructProperty)
    std::uint8_t EventDataIndex[0x2]; // 0x0052 (Size: 0x2, Type: StructProperty)
    float Weight; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float CustomTickRate; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint32_t CompletionTasksMask; // 0x005C (Size: 0x4, Type: UInt32Property)
    std::uint8_t CompletionTasksMaskBufferIndex; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CompletionTasksMaskBitsOffset; // 0x0061 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CompletionTasksNumberOfBits; // 0x0062 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CompletionTasksControl; // 0x0063 (Size: 0x1, Type: EnumProperty)
    std::uint8_t EnterConditionsNum; // 0x0064 (Size: 0x1, Type: ByteProperty)
    std::uint8_t UtilityConsiderationsNum; // 0x0065 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TransitionsNum; // 0x0066 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TasksNum; // 0x0067 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EnabledTasksNum; // 0x0068 (Size: 0x1, Type: ByteProperty)
    std::uint8_t InstanceDataNum; // 0x0069 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Depth; // 0x006A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Type; // 0x006B (Size: 0x1, Type: EnumProperty)
    std::uint8_t SelectionBehavior; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCanOverrideLinkedAssetAtRuntime; // 0x006D (Size: 0x1, Type: BoolProperty)
    // 0x006D BoolProperty bHasStateChangeConditions (shared storage)
    // 0x006D BoolProperty bHasTickTriggerTransitions (shared storage)
    // 0x006D BoolProperty bHasTransitionTasks (shared storage)
    std::uint8_t bCheckPrerequisitesWhenActivatingChildDirectly; // 0x006E (Size: 0x1, Type: BoolProperty)
    // 0x006E BoolProperty bConsumeEventOnSelect (shared storage)
    // 0x006E BoolProperty bEnabled (shared storage)
    // 0x006E BoolProperty bHasCompletedTriggerTransitions (shared storage)
    // 0x006E BoolProperty bHasDelegateTriggerTransitions (shared storage)
    // 0x006E BoolProperty bHasEventTriggerTransitions (shared storage)
    // 0x006E BoolProperty bHasFailedTriggerTransitions (shared storage)
    // 0x006E BoolProperty bHasSucceededTriggerTransitions (shared storage)
    std::uint8_t bCopyParameterBindingsOnTick; // 0x006F (Size: 0x1, Type: BoolProperty)
    // 0x006F BoolProperty bHasCustomTickRate (shared storage)
};

static_assert(offsetof(FCompactStateTreeState, RequiredEventToEnter) == 0, "Offset mismatch for FCompactStateTreeState::RequiredEventToEnter");
static_assert(offsetof(FCompactStateTreeState, Name) == 16, "Offset mismatch for FCompactStateTreeState::Name");
static_assert(offsetof(FCompactStateTreeState, Tag) == 20, "Offset mismatch for FCompactStateTreeState::Tag");
static_assert(offsetof(FCompactStateTreeState, LinkedAsset) == 48, "Offset mismatch for FCompactStateTreeState::LinkedAsset");
static_assert(offsetof(FCompactStateTreeState, LinkedState) == 56, "Offset mismatch for FCompactStateTreeState::LinkedState");
static_assert(offsetof(FCompactStateTreeState, Parent) == 58, "Offset mismatch for FCompactStateTreeState::Parent");
static_assert(offsetof(FCompactStateTreeState, ChildrenBegin) == 60, "Offset mismatch for FCompactStateTreeState::ChildrenBegin");
static_assert(offsetof(FCompactStateTreeState, ChildrenEnd) == 62, "Offset mismatch for FCompactStateTreeState::ChildrenEnd");
static_assert(offsetof(FCompactStateTreeState, EnterConditionsBegin) == 64, "Offset mismatch for FCompactStateTreeState::EnterConditionsBegin");
static_assert(offsetof(FCompactStateTreeState, UtilityConsiderationsBegin) == 66, "Offset mismatch for FCompactStateTreeState::UtilityConsiderationsBegin");
static_assert(offsetof(FCompactStateTreeState, TransitionsBegin) == 68, "Offset mismatch for FCompactStateTreeState::TransitionsBegin");
static_assert(offsetof(FCompactStateTreeState, TasksBegin) == 70, "Offset mismatch for FCompactStateTreeState::TasksBegin");
static_assert(offsetof(FCompactStateTreeState, ParameterTemplateIndex) == 72, "Offset mismatch for FCompactStateTreeState::ParameterTemplateIndex");
static_assert(offsetof(FCompactStateTreeState, ParameterDataHandle) == 74, "Offset mismatch for FCompactStateTreeState::ParameterDataHandle");
static_assert(offsetof(FCompactStateTreeState, ParameterBindingsBatch) == 80, "Offset mismatch for FCompactStateTreeState::ParameterBindingsBatch");
static_assert(offsetof(FCompactStateTreeState, EventDataIndex) == 82, "Offset mismatch for FCompactStateTreeState::EventDataIndex");
static_assert(offsetof(FCompactStateTreeState, Weight) == 84, "Offset mismatch for FCompactStateTreeState::Weight");
static_assert(offsetof(FCompactStateTreeState, CustomTickRate) == 88, "Offset mismatch for FCompactStateTreeState::CustomTickRate");
static_assert(offsetof(FCompactStateTreeState, CompletionTasksMask) == 92, "Offset mismatch for FCompactStateTreeState::CompletionTasksMask");
static_assert(offsetof(FCompactStateTreeState, CompletionTasksMaskBufferIndex) == 96, "Offset mismatch for FCompactStateTreeState::CompletionTasksMaskBufferIndex");
static_assert(offsetof(FCompactStateTreeState, CompletionTasksMaskBitsOffset) == 97, "Offset mismatch for FCompactStateTreeState::CompletionTasksMaskBitsOffset");
static_assert(offsetof(FCompactStateTreeState, CompletionTasksNumberOfBits) == 98, "Offset mismatch for FCompactStateTreeState::CompletionTasksNumberOfBits");
static_assert(offsetof(FCompactStateTreeState, CompletionTasksControl) == 99, "Offset mismatch for FCompactStateTreeState::CompletionTasksControl");
static_assert(offsetof(FCompactStateTreeState, EnterConditionsNum) == 100, "Offset mismatch for FCompactStateTreeState::EnterConditionsNum");
static_assert(offsetof(FCompactStateTreeState, UtilityConsiderationsNum) == 101, "Offset mismatch for FCompactStateTreeState::UtilityConsiderationsNum");
static_assert(offsetof(FCompactStateTreeState, TransitionsNum) == 102, "Offset mismatch for FCompactStateTreeState::TransitionsNum");
static_assert(offsetof(FCompactStateTreeState, TasksNum) == 103, "Offset mismatch for FCompactStateTreeState::TasksNum");
static_assert(offsetof(FCompactStateTreeState, EnabledTasksNum) == 104, "Offset mismatch for FCompactStateTreeState::EnabledTasksNum");
static_assert(offsetof(FCompactStateTreeState, InstanceDataNum) == 105, "Offset mismatch for FCompactStateTreeState::InstanceDataNum");
static_assert(offsetof(FCompactStateTreeState, Depth) == 106, "Offset mismatch for FCompactStateTreeState::Depth");
static_assert(offsetof(FCompactStateTreeState, Type) == 107, "Offset mismatch for FCompactStateTreeState::Type");
static_assert(offsetof(FCompactStateTreeState, SelectionBehavior) == 108, "Offset mismatch for FCompactStateTreeState::SelectionBehavior");
static_assert(offsetof(FCompactStateTreeState, bCanOverrideLinkedAssetAtRuntime) == 109, "Offset mismatch for FCompactStateTreeState::bCanOverrideLinkedAssetAtRuntime");
static_assert(offsetof(FCompactStateTreeState, bCheckPrerequisitesWhenActivatingChildDirectly) == 110, "Offset mismatch for FCompactStateTreeState::bCheckPrerequisitesWhenActivatingChildDirectly");
static_assert(offsetof(FCompactStateTreeState, bCopyParameterBindingsOnTick) == 111, "Offset mismatch for FCompactStateTreeState::bCopyParameterBindingsOnTick");

// /Script/StateTreeModule.ExecutionFrameHandle
// Kind: ScriptStruct; super: none
struct FExecutionFrameHandle
{
public:
    void* StateTree; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RootState[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FExecutionFrameHandle, StateTree) == 0, "Offset mismatch for FExecutionFrameHandle::StateTree");
static_assert(offsetof(FExecutionFrameHandle, RootState) == 8, "Offset mismatch for FExecutionFrameHandle::RootState");

// /Script/StateTreeModule.ExecutionRuntimeData
// Kind: ScriptStruct; super: none
struct FExecutionRuntimeData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Instances[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FExecutionRuntimeData, Instances) == 8, "Offset mismatch for FExecutionRuntimeData::Instances");

// /Script/StateTreeModule.GameplayTagContainerMatchCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FGameplayTagContainerMatchCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MatchType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bExactMatch; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInvert; // 0x002A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayTagContainerMatchCondition, MatchType) == 40, "Offset mismatch for FGameplayTagContainerMatchCondition::MatchType");
static_assert(offsetof(FGameplayTagContainerMatchCondition, bExactMatch) == 41, "Offset mismatch for FGameplayTagContainerMatchCondition::bExactMatch");
static_assert(offsetof(FGameplayTagContainerMatchCondition, bInvert) == 42, "Offset mismatch for FGameplayTagContainerMatchCondition::bInvert");

// /Script/StateTreeModule.GameplayTagContainerMatchConditionInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayTagContainerMatchConditionInstanceData
{
public:
    std::uint8_t TagContainer[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t OtherContainer[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagContainerMatchConditionInstanceData, TagContainer) == 0, "Offset mismatch for FGameplayTagContainerMatchConditionInstanceData::TagContainer");
static_assert(offsetof(FGameplayTagContainerMatchConditionInstanceData, OtherContainer) == 32, "Offset mismatch for FGameplayTagContainerMatchConditionInstanceData::OtherContainer");

// /Script/StateTreeModule.GameplayTagMatchCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FGameplayTagMatchCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bExactMatch; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInvert; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayTagMatchCondition, bExactMatch) == 40, "Offset mismatch for FGameplayTagMatchCondition::bExactMatch");
static_assert(offsetof(FGameplayTagMatchCondition, bInvert) == 41, "Offset mismatch for FGameplayTagMatchCondition::bInvert");

// /Script/StateTreeModule.GameplayTagMatchConditionInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayTagMatchConditionInstanceData
{
public:
    std::uint8_t TagContainer[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Tag[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagMatchConditionInstanceData, TagContainer) == 0, "Offset mismatch for FGameplayTagMatchConditionInstanceData::TagContainer");
static_assert(offsetof(FGameplayTagMatchConditionInstanceData, Tag) == 32, "Offset mismatch for FGameplayTagMatchConditionInstanceData::Tag");

// /Script/StateTreeModule.GameplayTagQueryCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FGameplayTagQueryCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TagQuery[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    std::uint8_t bInvert; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayTagQueryCondition, TagQuery) == 40, "Offset mismatch for FGameplayTagQueryCondition::TagQuery");
static_assert(offsetof(FGameplayTagQueryCondition, bInvert) == 112, "Offset mismatch for FGameplayTagQueryCondition::bInvert");

// /Script/StateTreeModule.GameplayTagQueryConditionInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayTagQueryConditionInstanceData
{
public:
    std::uint8_t TagContainer[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagQueryConditionInstanceData, TagContainer) == 0, "Offset mismatch for FGameplayTagQueryConditionInstanceData::TagContainer");

// /Script/StateTreeModule.GameplayTagSingleMatchCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FGameplayTagSingleMatchCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bExactMatch; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInvert; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayTagSingleMatchCondition, bExactMatch) == 40, "Offset mismatch for FGameplayTagSingleMatchCondition::bExactMatch");
static_assert(offsetof(FGameplayTagSingleMatchCondition, bInvert) == 41, "Offset mismatch for FGameplayTagSingleMatchCondition::bInvert");

// /Script/StateTreeModule.GameplayTagSingleMatchConditionInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayTagSingleMatchConditionInstanceData
{
public:
    std::uint8_t Left[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Right[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagSingleMatchConditionInstanceData, Left) == 0, "Offset mismatch for FGameplayTagSingleMatchConditionInstanceData::Left");
static_assert(offsetof(FGameplayTagSingleMatchConditionInstanceData, Right) == 4, "Offset mismatch for FGameplayTagSingleMatchConditionInstanceData::Right");

// /Script/StateTreeModule.InstanceContainer
// Kind: ScriptStruct; super: none
struct FInstanceContainer
{
public:
    std::uint8_t InstanceStructs[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInstanceContainer, InstanceStructs) == 0, "Offset mismatch for FInstanceContainer::InstanceStructs");

// /Script/StateTreeModule.RecordedActiveState
// Kind: ScriptStruct; super: none
struct FRecordedActiveState
{
public:
    void* StateTree; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t State[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t EventIndex; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRecordedActiveState, StateTree) == 0, "Offset mismatch for FRecordedActiveState::StateTree");
static_assert(offsetof(FRecordedActiveState, State) == 8, "Offset mismatch for FRecordedActiveState::State");
static_assert(offsetof(FRecordedActiveState, EventIndex) == 12, "Offset mismatch for FRecordedActiveState::EventIndex");

// /Script/StateTreeModule.RecordedStateTreeExecutionFrame
// Kind: ScriptStruct; super: none
struct FRecordedStateTreeExecutionFrame
{
public:
    void* StateTree; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RootState[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActiveStates[0x34]; // 0x000C (Size: 0x34, Type: StructProperty)
    std::uint8_t bIsGlobalFrame; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRecordedStateTreeExecutionFrame, StateTree) == 0, "Offset mismatch for FRecordedStateTreeExecutionFrame::StateTree");
static_assert(offsetof(FRecordedStateTreeExecutionFrame, RootState) == 8, "Offset mismatch for FRecordedStateTreeExecutionFrame::RootState");
static_assert(offsetof(FRecordedStateTreeExecutionFrame, ActiveStates) == 12, "Offset mismatch for FRecordedStateTreeExecutionFrame::ActiveStates");
static_assert(offsetof(FRecordedStateTreeExecutionFrame, bIsGlobalFrame) == 64, "Offset mismatch for FRecordedStateTreeExecutionFrame::bIsGlobalFrame");

// /Script/StateTreeModule.RecordedStateTreeTransitionResult
// Kind: ScriptStruct; super: none
struct FRecordedStateTreeTransitionResult
{
public:
    TArray<void*> States; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Events; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Priority; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRecordedStateTreeTransitionResult, States) == 0, "Offset mismatch for FRecordedStateTreeTransitionResult::States");
static_assert(offsetof(FRecordedStateTreeTransitionResult, Events) == 16, "Offset mismatch for FRecordedStateTreeTransitionResult::Events");
static_assert(offsetof(FRecordedStateTreeTransitionResult, Priority) == 32, "Offset mismatch for FRecordedStateTreeTransitionResult::Priority");

// /Script/StateTreeModule.StateTreeAbsoluteFloatPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeAbsoluteFloatPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeAbsoluteFloatPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeAbsoluteFloatPropertyFunction::Name");
static_assert(offsetof(FStateTreeAbsoluteFloatPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeAbsoluteFloatPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeAbsoluteFloatPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeAbsoluteFloatPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeAbsoluteFloatPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeAbsoluteFloatPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeAbsoluteFloatPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeAbsoluteFloatPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeAbsoluteFloatPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeAbsoluteFloatPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeAbsoluteIntPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeAbsoluteIntPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeAbsoluteIntPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeAbsoluteIntPropertyFunction::Name");
static_assert(offsetof(FStateTreeAbsoluteIntPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeAbsoluteIntPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeAbsoluteIntPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeAbsoluteIntPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeAbsoluteIntPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeAbsoluteIntPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeAbsoluteIntPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeAbsoluteIntPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeAbsoluteIntPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeAbsoluteIntPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeActiveStates
// Kind: ScriptStruct; super: none
struct FStateTreeActiveStates
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t States[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t NumStates; // 0x0030 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FStateTreeActiveStates, States) == 32, "Offset mismatch for FStateTreeActiveStates::States");
static_assert(offsetof(FStateTreeActiveStates, NumStates) == 48, "Offset mismatch for FStateTreeActiveStates::NumStates");

// /Script/StateTreeModule.StateTreeAddFloatPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeAddFloatPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeAddFloatPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeAddFloatPropertyFunction::Name");
static_assert(offsetof(FStateTreeAddFloatPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeAddFloatPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeAddFloatPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeAddFloatPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeAddFloatPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeAddFloatPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeAddFloatPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeAddFloatPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeAddFloatPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeAddFloatPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeAddIntPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeAddIntPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeAddIntPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeAddIntPropertyFunction::Name");
static_assert(offsetof(FStateTreeAddIntPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeAddIntPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeAddIntPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeAddIntPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeAddIntPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeAddIntPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeAddIntPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeAddIntPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeAddIntPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeAddIntPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeAnyEnum
// Kind: ScriptStruct; super: none
struct FStateTreeAnyEnum
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* Enum; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateTreeAnyEnum, Value) == 0, "Offset mismatch for FStateTreeAnyEnum::Value");
static_assert(offsetof(FStateTreeAnyEnum, Enum) == 8, "Offset mismatch for FStateTreeAnyEnum::Enum");

// /Script/StateTreeModule.StateTreeBindableStructDesc
// Kind: ScriptStruct; super: PropertyBindingBindableStructDescriptor
struct FStateTreeBindableStructDesc
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t DataHandle[0x6]; // 0x0018 (Size: 0x6, Type: StructProperty)
    std::uint8_t DataSource; // 0x001E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeBindableStructDesc, DataHandle) == 24, "Offset mismatch for FStateTreeBindableStructDesc::DataHandle");
static_assert(offsetof(FStateTreeBindableStructDesc, DataSource) == 30, "Offset mismatch for FStateTreeBindableStructDesc::DataSource");

// /Script/StateTreeModule.StateTreeBlueprintConditionWrapper
// Kind: ScriptStruct; super: StateTreeConditionBase
struct FStateTreeBlueprintConditionWrapper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ConditionClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FStateTreeBlueprintConditionWrapper, ConditionClass) == 40, "Offset mismatch for FStateTreeBlueprintConditionWrapper::ConditionClass");

// /Script/StateTreeModule.StateTreeBlueprintConsiderationWrapper
// Kind: ScriptStruct; super: StateTreeConsiderationBase
struct FStateTreeBlueprintConsiderationWrapper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ConsiderationClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FStateTreeBlueprintConsiderationWrapper, ConsiderationClass) == 40, "Offset mismatch for FStateTreeBlueprintConsiderationWrapper::ConsiderationClass");

// /Script/StateTreeModule.StateTreeBlueprintEvaluatorWrapper
// Kind: ScriptStruct; super: StateTreeEvaluatorBase
struct FStateTreeBlueprintEvaluatorWrapper
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* EvaluatorClass; // 0x0020 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FStateTreeBlueprintEvaluatorWrapper, EvaluatorClass) == 32, "Offset mismatch for FStateTreeBlueprintEvaluatorWrapper::EvaluatorClass");

// /Script/StateTreeModule.StateTreeBlueprintPropertyRef
// Kind: ScriptStruct; super: StateTreePropertyRef
struct FStateTreeBlueprintPropertyRef
{
public:
    std::uint8_t Pad_0000[0x2]; // 0x0000
    std::uint8_t RefType; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsOptional; // 0x0003 (Size: 0x1, Type: BoolProperty)
    // 0x0003 BoolProperty bIsRefToArray (shared storage)
    std::uint8_t Pad_0001[0x4]; // 0x0004
    void* TypeObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateTreeBlueprintPropertyRef, RefType) == 2, "Offset mismatch for FStateTreeBlueprintPropertyRef::RefType");
static_assert(offsetof(FStateTreeBlueprintPropertyRef, bIsOptional) == 3, "Offset mismatch for FStateTreeBlueprintPropertyRef::bIsOptional");
static_assert(offsetof(FStateTreeBlueprintPropertyRef, TypeObject) == 8, "Offset mismatch for FStateTreeBlueprintPropertyRef::TypeObject");

// /Script/StateTreeModule.StateTreeBlueprintTaskWrapper
// Kind: ScriptStruct; super: StateTreeTaskBase
struct FStateTreeBlueprintTaskWrapper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TaskClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TaskFlags; // 0x0030 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FStateTreeBlueprintTaskWrapper, TaskClass) == 40, "Offset mismatch for FStateTreeBlueprintTaskWrapper::TaskClass");
static_assert(offsetof(FStateTreeBlueprintTaskWrapper, TaskFlags) == 48, "Offset mismatch for FStateTreeBlueprintTaskWrapper::TaskFlags");

// /Script/StateTreeModule.StateTreeBooleanAndPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeBooleanAndPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeBooleanAndPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeBooleanAndPropertyFunction::Name");
static_assert(offsetof(FStateTreeBooleanAndPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeBooleanAndPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeBooleanAndPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeBooleanAndPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeBooleanAndPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeBooleanAndPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeBooleanAndPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeBooleanAndPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeBooleanAndPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeBooleanAndPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeBooleanNotOperationPropertyFunctionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeBooleanNotOperationPropertyFunctionInstanceData
{
public:
    std::uint8_t bInput; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResult; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeBooleanNotOperationPropertyFunctionInstanceData, bInput) == 0, "Offset mismatch for FStateTreeBooleanNotOperationPropertyFunctionInstanceData::bInput");
static_assert(offsetof(FStateTreeBooleanNotOperationPropertyFunctionInstanceData, bResult) == 1, "Offset mismatch for FStateTreeBooleanNotOperationPropertyFunctionInstanceData::bResult");

// /Script/StateTreeModule.StateTreeBooleanNotPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeBooleanNotPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeBooleanNotPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeBooleanNotPropertyFunction::Name");
static_assert(offsetof(FStateTreeBooleanNotPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeBooleanNotPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeBooleanNotPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeBooleanNotPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeBooleanNotPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeBooleanNotPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeBooleanNotPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeBooleanNotPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeBooleanNotPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeBooleanNotPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeBooleanOperationPropertyFunctionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeBooleanOperationPropertyFunctionInstanceData
{
public:
    std::uint8_t bLeft; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRight; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResult; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeBooleanOperationPropertyFunctionInstanceData, bLeft) == 0, "Offset mismatch for FStateTreeBooleanOperationPropertyFunctionInstanceData::bLeft");
static_assert(offsetof(FStateTreeBooleanOperationPropertyFunctionInstanceData, bRight) == 1, "Offset mismatch for FStateTreeBooleanOperationPropertyFunctionInstanceData::bRight");
static_assert(offsetof(FStateTreeBooleanOperationPropertyFunctionInstanceData, bResult) == 2, "Offset mismatch for FStateTreeBooleanOperationPropertyFunctionInstanceData::bResult");

// /Script/StateTreeModule.StateTreeBooleanOrPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeBooleanOrPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeBooleanOrPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeBooleanOrPropertyFunction::Name");
static_assert(offsetof(FStateTreeBooleanOrPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeBooleanOrPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeBooleanOrPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeBooleanOrPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeBooleanOrPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeBooleanOrPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeBooleanOrPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeBooleanOrPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeBooleanOrPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeBooleanOrPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeBooleanXOrPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeBooleanXOrPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeBooleanXOrPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeBooleanXOrPropertyFunction::Name");
static_assert(offsetof(FStateTreeBooleanXOrPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeBooleanXOrPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeBooleanXOrPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeBooleanXOrPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeBooleanXOrPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeBooleanXOrPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeBooleanXOrPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeBooleanXOrPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeBooleanXOrPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeBooleanXOrPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeBreakTransformPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeBreakTransformPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeBreakTransformPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeBreakTransformPropertyFunction::Name");
static_assert(offsetof(FStateTreeBreakTransformPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeBreakTransformPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeBreakTransformPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeBreakTransformPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeBreakTransformPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeBreakTransformPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeBreakTransformPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeBreakTransformPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeBreakTransformPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeBreakTransformPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeBreakTransformPropertyFunctionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeBreakTransformPropertyFunctionInstanceData
{
public:
    std::uint8_t InTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t OutTranslation[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t OutRotation[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeBreakTransformPropertyFunctionInstanceData, InTransform) == 0, "Offset mismatch for FStateTreeBreakTransformPropertyFunctionInstanceData::InTransform");
static_assert(offsetof(FStateTreeBreakTransformPropertyFunctionInstanceData, OutTranslation) == 96, "Offset mismatch for FStateTreeBreakTransformPropertyFunctionInstanceData::OutTranslation");
static_assert(offsetof(FStateTreeBreakTransformPropertyFunctionInstanceData, OutRotation) == 128, "Offset mismatch for FStateTreeBreakTransformPropertyFunctionInstanceData::OutRotation");

// /Script/StateTreeModule.StateTreeCompareBoolCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FStateTreeCompareBoolCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeCompareBoolCondition, bInvert) == 40, "Offset mismatch for FStateTreeCompareBoolCondition::bInvert");

// /Script/StateTreeModule.StateTreeCompareBoolConditionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeCompareBoolConditionInstanceData
{
public:
    std::uint8_t bLeft; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRight; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeCompareBoolConditionInstanceData, bLeft) == 0, "Offset mismatch for FStateTreeCompareBoolConditionInstanceData::bLeft");
static_assert(offsetof(FStateTreeCompareBoolConditionInstanceData, bRight) == 1, "Offset mismatch for FStateTreeCompareBoolConditionInstanceData::bRight");

// /Script/StateTreeModule.StateTreeCompareDistanceCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FStateTreeCompareDistanceCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operator; // 0x0029 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeCompareDistanceCondition, bInvert) == 40, "Offset mismatch for FStateTreeCompareDistanceCondition::bInvert");
static_assert(offsetof(FStateTreeCompareDistanceCondition, Operator) == 41, "Offset mismatch for FStateTreeCompareDistanceCondition::Operator");

// /Script/StateTreeModule.StateTreeCompareDistanceConditionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeCompareDistanceConditionInstanceData
{
public:
    std::uint8_t Source[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Target[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    double Distance; // 0x0030 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FStateTreeCompareDistanceConditionInstanceData, Source) == 0, "Offset mismatch for FStateTreeCompareDistanceConditionInstanceData::Source");
static_assert(offsetof(FStateTreeCompareDistanceConditionInstanceData, Target) == 24, "Offset mismatch for FStateTreeCompareDistanceConditionInstanceData::Target");
static_assert(offsetof(FStateTreeCompareDistanceConditionInstanceData, Distance) == 48, "Offset mismatch for FStateTreeCompareDistanceConditionInstanceData::Distance");

// /Script/StateTreeModule.StateTreeCompareEnumCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FStateTreeCompareEnumCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeCompareEnumCondition, bInvert) == 40, "Offset mismatch for FStateTreeCompareEnumCondition::bInvert");

// /Script/StateTreeModule.StateTreeCompareEnumConditionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeCompareEnumConditionInstanceData
{
public:
    std::uint8_t Left[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Right[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeCompareEnumConditionInstanceData, Left) == 0, "Offset mismatch for FStateTreeCompareEnumConditionInstanceData::Left");
static_assert(offsetof(FStateTreeCompareEnumConditionInstanceData, Right) == 16, "Offset mismatch for FStateTreeCompareEnumConditionInstanceData::Right");

// /Script/StateTreeModule.StateTreeCompareFloatCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FStateTreeCompareFloatCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operator; // 0x0029 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeCompareFloatCondition, bInvert) == 40, "Offset mismatch for FStateTreeCompareFloatCondition::bInvert");
static_assert(offsetof(FStateTreeCompareFloatCondition, Operator) == 41, "Offset mismatch for FStateTreeCompareFloatCondition::Operator");

// /Script/StateTreeModule.StateTreeCompareFloatConditionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeCompareFloatConditionInstanceData
{
public:
    double Left; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Right; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FStateTreeCompareFloatConditionInstanceData, Left) == 0, "Offset mismatch for FStateTreeCompareFloatConditionInstanceData::Left");
static_assert(offsetof(FStateTreeCompareFloatConditionInstanceData, Right) == 8, "Offset mismatch for FStateTreeCompareFloatConditionInstanceData::Right");

// /Script/StateTreeModule.StateTreeCompareIntCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FStateTreeCompareIntCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operator; // 0x0029 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeCompareIntCondition, bInvert) == 40, "Offset mismatch for FStateTreeCompareIntCondition::bInvert");
static_assert(offsetof(FStateTreeCompareIntCondition, Operator) == 41, "Offset mismatch for FStateTreeCompareIntCondition::Operator");

// /Script/StateTreeModule.StateTreeCompareIntConditionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeCompareIntConditionInstanceData
{
public:
    std::int32_t Left; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Right; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStateTreeCompareIntConditionInstanceData, Left) == 0, "Offset mismatch for FStateTreeCompareIntConditionInstanceData::Left");
static_assert(offsetof(FStateTreeCompareIntConditionInstanceData, Right) == 4, "Offset mismatch for FStateTreeCompareIntConditionInstanceData::Right");

// /Script/StateTreeModule.StateTreeCompareNameCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FStateTreeCompareNameCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeCompareNameCondition, bInvert) == 40, "Offset mismatch for FStateTreeCompareNameCondition::bInvert");

// /Script/StateTreeModule.StateTreeCompareNameConditionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeCompareNameConditionInstanceData
{
public:
    std::uint8_t Left[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName Right; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FStateTreeCompareNameConditionInstanceData, Left) == 0, "Offset mismatch for FStateTreeCompareNameConditionInstanceData::Left");
static_assert(offsetof(FStateTreeCompareNameConditionInstanceData, Right) == 4, "Offset mismatch for FStateTreeCompareNameConditionInstanceData::Right");

// /Script/StateTreeModule.StateTreeConditionBase
// Kind: ScriptStruct; super: StateTreeNodeBase
struct FStateTreeConditionBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
    std::uint8_t EvaluationMode; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeConditionBase, Operand) == 32, "Offset mismatch for FStateTreeConditionBase::Operand");
static_assert(offsetof(FStateTreeConditionBase, DeltaIndent) == 33, "Offset mismatch for FStateTreeConditionBase::DeltaIndent");
static_assert(offsetof(FStateTreeConditionBase, EvaluationMode) == 34, "Offset mismatch for FStateTreeConditionBase::EvaluationMode");

// /Script/StateTreeModule.StateTreeConditionCommonBase
// Kind: ScriptStruct; super: StateTreeConditionBase
struct FStateTreeConditionCommonBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
    std::uint8_t EvaluationMode; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeConditionCommonBase, Operand) == 32, "Offset mismatch for FStateTreeConditionCommonBase::Operand");
static_assert(offsetof(FStateTreeConditionCommonBase, DeltaIndent) == 33, "Offset mismatch for FStateTreeConditionCommonBase::DeltaIndent");
static_assert(offsetof(FStateTreeConditionCommonBase, EvaluationMode) == 34, "Offset mismatch for FStateTreeConditionCommonBase::EvaluationMode");

// /Script/StateTreeModule.StateTreeConsiderationBase
// Kind: ScriptStruct; super: StateTreeNodeBase
struct FStateTreeConsiderationBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
};

static_assert(offsetof(FStateTreeConsiderationBase, Operand) == 32, "Offset mismatch for FStateTreeConsiderationBase::Operand");
static_assert(offsetof(FStateTreeConsiderationBase, DeltaIndent) == 33, "Offset mismatch for FStateTreeConsiderationBase::DeltaIndent");

// /Script/StateTreeModule.StateTreeConsiderationCommonBase
// Kind: ScriptStruct; super: StateTreeConsiderationBase
struct FStateTreeConsiderationCommonBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
};

static_assert(offsetof(FStateTreeConsiderationCommonBase, Operand) == 32, "Offset mismatch for FStateTreeConsiderationCommonBase::Operand");
static_assert(offsetof(FStateTreeConsiderationCommonBase, DeltaIndent) == 33, "Offset mismatch for FStateTreeConsiderationCommonBase::DeltaIndent");

// /Script/StateTreeModule.StateTreeConsiderationResponseCurve
// Kind: ScriptStruct; super: none
struct FStateTreeConsiderationResponseCurve
{
public:
    std::uint8_t CurveInfo[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeConsiderationResponseCurve, CurveInfo) == 0, "Offset mismatch for FStateTreeConsiderationResponseCurve::CurveInfo");

// /Script/StateTreeModule.StateTreeConstantConsideration
// Kind: ScriptStruct; super: StateTreeConsiderationCommonBase
struct FStateTreeConstantConsideration
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
};

static_assert(offsetof(FStateTreeConstantConsideration, Operand) == 32, "Offset mismatch for FStateTreeConstantConsideration::Operand");
static_assert(offsetof(FStateTreeConstantConsideration, DeltaIndent) == 33, "Offset mismatch for FStateTreeConstantConsideration::DeltaIndent");

// /Script/StateTreeModule.StateTreeConstantConsiderationInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeConstantConsiderationInstanceData
{
public:
    float Constant; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateTreeConstantConsiderationInstanceData, Constant) == 0, "Offset mismatch for FStateTreeConstantConsiderationInstanceData::Constant");

// /Script/StateTreeModule.StateTreeDataHandle
// Kind: ScriptStruct; super: none
struct FStateTreeDataHandle
{
public:
    std::uint8_t Source; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0001
    std::uint16_t Index; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint8_t StateHandle[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeDataHandle, Source) == 0, "Offset mismatch for FStateTreeDataHandle::Source");
static_assert(offsetof(FStateTreeDataHandle, Index) == 2, "Offset mismatch for FStateTreeDataHandle::Index");
static_assert(offsetof(FStateTreeDataHandle, StateHandle) == 4, "Offset mismatch for FStateTreeDataHandle::StateHandle");

// /Script/StateTreeModule.StateTreeDebugTextTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FStateTreeDebugTextTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Text; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t TextColor[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    float FontScale; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Offset[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeDebugTextTask, Text) == 40, "Offset mismatch for FStateTreeDebugTextTask::Text");
static_assert(offsetof(FStateTreeDebugTextTask, TextColor) == 56, "Offset mismatch for FStateTreeDebugTextTask::TextColor");
static_assert(offsetof(FStateTreeDebugTextTask, FontScale) == 60, "Offset mismatch for FStateTreeDebugTextTask::FontScale");
static_assert(offsetof(FStateTreeDebugTextTask, Offset) == 64, "Offset mismatch for FStateTreeDebugTextTask::Offset");

// /Script/StateTreeModule.StateTreeDebugTextTaskInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeDebugTextTaskInstanceData
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ReferenceActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FString BindableText; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FStateTreeDebugTextTaskInstanceData, bEnabled) == 0, "Offset mismatch for FStateTreeDebugTextTaskInstanceData::bEnabled");
static_assert(offsetof(FStateTreeDebugTextTaskInstanceData, ReferenceActor) == 8, "Offset mismatch for FStateTreeDebugTextTaskInstanceData::ReferenceActor");
static_assert(offsetof(FStateTreeDebugTextTaskInstanceData, BindableText) == 16, "Offset mismatch for FStateTreeDebugTextTaskInstanceData::BindableText");

// /Script/StateTreeModule.StateTreeDelayTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FStateTreeDelayTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeDelayTask, bTaskEnabled) == 32, "Offset mismatch for FStateTreeDelayTask::bTaskEnabled");
static_assert(offsetof(FStateTreeDelayTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStateTreeDelayTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStateTreeDelayTask, TransitionHandlingPriority) == 34, "Offset mismatch for FStateTreeDelayTask::TransitionHandlingPriority");

// /Script/StateTreeModule.StateTreeDelayTaskInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeDelayTaskInstanceData
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RandomDeviation; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRunForever; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeDelayTaskInstanceData, duration) == 0, "Offset mismatch for FStateTreeDelayTaskInstanceData::duration");
static_assert(offsetof(FStateTreeDelayTaskInstanceData, RandomDeviation) == 4, "Offset mismatch for FStateTreeDelayTaskInstanceData::RandomDeviation");
static_assert(offsetof(FStateTreeDelayTaskInstanceData, bRunForever) == 8, "Offset mismatch for FStateTreeDelayTaskInstanceData::bRunForever");

// /Script/StateTreeModule.StateTreeDelegateDispatcher
// Kind: ScriptStruct; super: none
struct FStateTreeDelegateDispatcher
{
public:
    std::uint8_t ID[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeDelegateDispatcher, ID) == 0, "Offset mismatch for FStateTreeDelegateDispatcher::ID");

// /Script/StateTreeModule.StateTreeDelegateListener
// Kind: ScriptStruct; super: none
struct FStateTreeDelegateListener
{
public:
    std::uint8_t Dispatcher[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t ID; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStateTreeDelegateListener, Dispatcher) == 0, "Offset mismatch for FStateTreeDelegateListener::Dispatcher");
static_assert(offsetof(FStateTreeDelegateListener, ID) == 16, "Offset mismatch for FStateTreeDelegateListener::ID");

// /Script/StateTreeModule.StateTreeDivideFloatPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeDivideFloatPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeDivideFloatPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeDivideFloatPropertyFunction::Name");
static_assert(offsetof(FStateTreeDivideFloatPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeDivideFloatPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeDivideFloatPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeDivideFloatPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeDivideFloatPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeDivideFloatPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeDivideFloatPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeDivideFloatPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeDivideFloatPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeDivideFloatPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeDivideIntPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeDivideIntPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeDivideIntPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeDivideIntPropertyFunction::Name");
static_assert(offsetof(FStateTreeDivideIntPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeDivideIntPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeDivideIntPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeDivideIntPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeDivideIntPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeDivideIntPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeDivideIntPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeDivideIntPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeDivideIntPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeDivideIntPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeEditorPropertyPath
// Kind: ScriptStruct; super: none
struct FStateTreeEditorPropertyPath
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeEnumInputConsideration
// Kind: ScriptStruct; super: StateTreeConsiderationCommonBase
struct FStateTreeEnumInputConsideration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EnumValueScorePairs[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeEnumInputConsideration, EnumValueScorePairs) == 40, "Offset mismatch for FStateTreeEnumInputConsideration::EnumValueScorePairs");

// /Script/StateTreeModule.StateTreeEnumInputConsiderationInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeEnumInputConsiderationInstanceData
{
public:
    std::uint8_t Input[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeEnumInputConsiderationInstanceData, Input) == 0, "Offset mismatch for FStateTreeEnumInputConsiderationInstanceData::Input");

// /Script/StateTreeModule.StateTreeEnumValueScorePair
// Kind: ScriptStruct; super: none
struct FStateTreeEnumValueScorePair
{
public:
    std::int64_t EnumValue; // 0x0000 (Size: 0x8, Type: Int64Property)
    float Score; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateTreeEnumValueScorePair, EnumValue) == 0, "Offset mismatch for FStateTreeEnumValueScorePair::EnumValue");
static_assert(offsetof(FStateTreeEnumValueScorePair, Score) == 8, "Offset mismatch for FStateTreeEnumValueScorePair::Score");

// /Script/StateTreeModule.StateTreeEnumValueScorePairs
// Kind: ScriptStruct; super: none
struct FStateTreeEnumValueScorePairs
{
public:
    TArray<void*> Data; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStateTreeEnumValueScorePairs, Data) == 0, "Offset mismatch for FStateTreeEnumValueScorePairs::Data");

// /Script/StateTreeModule.StateTreeEvaluatorBase
// Kind: ScriptStruct; super: StateTreeNodeBase
struct FStateTreeEvaluatorBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeEvaluatorBase, Name) == 8, "Offset mismatch for FStateTreeEvaluatorBase::Name");
static_assert(offsetof(FStateTreeEvaluatorBase, BindingsBatch) == 12, "Offset mismatch for FStateTreeEvaluatorBase::BindingsBatch");
static_assert(offsetof(FStateTreeEvaluatorBase, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeEvaluatorBase::OutputBindingsBatch");
static_assert(offsetof(FStateTreeEvaluatorBase, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeEvaluatorBase::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeEvaluatorBase, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeEvaluatorBase::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeEvaluatorBase, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeEvaluatorBase::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeEvaluatorCommonBase
// Kind: ScriptStruct; super: StateTreeEvaluatorBase
struct FStateTreeEvaluatorCommonBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeEvaluatorCommonBase, Name) == 8, "Offset mismatch for FStateTreeEvaluatorCommonBase::Name");
static_assert(offsetof(FStateTreeEvaluatorCommonBase, BindingsBatch) == 12, "Offset mismatch for FStateTreeEvaluatorCommonBase::BindingsBatch");
static_assert(offsetof(FStateTreeEvaluatorCommonBase, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeEvaluatorCommonBase::OutputBindingsBatch");
static_assert(offsetof(FStateTreeEvaluatorCommonBase, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeEvaluatorCommonBase::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeEvaluatorCommonBase, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeEvaluatorCommonBase::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeEvaluatorCommonBase, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeEvaluatorCommonBase::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeEvent
// Kind: ScriptStruct; super: none
struct FStateTreeEvent
{
public:
    std::uint8_t Tag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Payload[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    FName origin; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FStateTreeEvent, Tag) == 0, "Offset mismatch for FStateTreeEvent::Tag");
static_assert(offsetof(FStateTreeEvent, Payload) == 8, "Offset mismatch for FStateTreeEvent::Payload");
static_assert(offsetof(FStateTreeEvent, origin) == 24, "Offset mismatch for FStateTreeEvent::origin");

// /Script/StateTreeModule.StateTreeEventQueue
// Kind: ScriptStruct; super: none
struct FStateTreeEventQueue
{
public:
    TArray<void*> SharedEvents; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStateTreeEventQueue, SharedEvents) == 0, "Offset mismatch for FStateTreeEventQueue::SharedEvents");

// /Script/StateTreeModule.StateTreeExecutionExtension
// Kind: ScriptStruct; super: none
struct FStateTreeExecutionExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeExecutionFrame
// Kind: ScriptStruct; super: none
struct FStateTreeExecutionFrame
{
public:
    void* StateTree; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActiveTasksStatus[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ActiveStates[0x34]; // 0x0018 (Size: 0x34, Type: StructProperty)
    std::uint8_t StateParameterDataHandle[0x6]; // 0x004C (Size: 0x6, Type: StructProperty)
    std::uint8_t GlobalParameterDataHandle[0x16]; // 0x0052 (Size: 0x16, Type: StructProperty)
    std::uint8_t RootState[0x4]; // 0x0068 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExternalDataBaseIndex[0x2]; // 0x006C (Size: 0x2, Type: StructProperty)
    std::uint8_t GlobalInstanceIndexBase[0x2]; // 0x006E (Size: 0x2, Type: StructProperty)
    std::uint8_t GlobalParameterIndexBase[0x2]; // 0x0070 (Size: 0x2, Type: StructProperty)
    std::uint8_t StateParameterIndexBase[0x2]; // 0x0072 (Size: 0x2, Type: StructProperty)
    std::uint8_t ActiveInstanceIndexBase[0x2]; // 0x0074 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeIndexBase[0x2]; // 0x0076 (Size: 0x2, Type: StructProperty)
    std::uint8_t bHaveEntered; // 0x0078 (Size: 0x1, Type: BoolProperty)
    // 0x0078 BoolProperty bIsGlobalFrame (shared storage)
};

static_assert(offsetof(FStateTreeExecutionFrame, StateTree) == 0, "Offset mismatch for FStateTreeExecutionFrame::StateTree");
static_assert(offsetof(FStateTreeExecutionFrame, ActiveTasksStatus) == 8, "Offset mismatch for FStateTreeExecutionFrame::ActiveTasksStatus");
static_assert(offsetof(FStateTreeExecutionFrame, ActiveStates) == 24, "Offset mismatch for FStateTreeExecutionFrame::ActiveStates");
static_assert(offsetof(FStateTreeExecutionFrame, StateParameterDataHandle) == 76, "Offset mismatch for FStateTreeExecutionFrame::StateParameterDataHandle");
static_assert(offsetof(FStateTreeExecutionFrame, GlobalParameterDataHandle) == 82, "Offset mismatch for FStateTreeExecutionFrame::GlobalParameterDataHandle");
static_assert(offsetof(FStateTreeExecutionFrame, RootState) == 104, "Offset mismatch for FStateTreeExecutionFrame::RootState");
static_assert(offsetof(FStateTreeExecutionFrame, ExternalDataBaseIndex) == 108, "Offset mismatch for FStateTreeExecutionFrame::ExternalDataBaseIndex");
static_assert(offsetof(FStateTreeExecutionFrame, GlobalInstanceIndexBase) == 110, "Offset mismatch for FStateTreeExecutionFrame::GlobalInstanceIndexBase");
static_assert(offsetof(FStateTreeExecutionFrame, GlobalParameterIndexBase) == 112, "Offset mismatch for FStateTreeExecutionFrame::GlobalParameterIndexBase");
static_assert(offsetof(FStateTreeExecutionFrame, StateParameterIndexBase) == 114, "Offset mismatch for FStateTreeExecutionFrame::StateParameterIndexBase");
static_assert(offsetof(FStateTreeExecutionFrame, ActiveInstanceIndexBase) == 116, "Offset mismatch for FStateTreeExecutionFrame::ActiveInstanceIndexBase");
static_assert(offsetof(FStateTreeExecutionFrame, ExecutionRuntimeIndexBase) == 118, "Offset mismatch for FStateTreeExecutionFrame::ExecutionRuntimeIndexBase");
static_assert(offsetof(FStateTreeExecutionFrame, bHaveEntered) == 120, "Offset mismatch for FStateTreeExecutionFrame::bHaveEntered");

// /Script/StateTreeModule.StateTreeExecutionState
// Kind: ScriptStruct; super: none
struct FStateTreeExecutionState
{
public:
    TArray<void*> ActiveFrames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DelayedTransitions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RandomStream[0x38]; // 0x0020 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExecutionExtension[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastTickStatus; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TreeRunStatus; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RequestedStop; // 0x006A (Size: 0x1, Type: EnumProperty)
    std::uint8_t CurrentPhase; // 0x006B (Size: 0x1, Type: EnumProperty)
    std::uint16_t StateChangeCount; // 0x006C (Size: 0x2, Type: UInt16Property)
    std::uint8_t bHasPendingCompletedState; // 0x006E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeExecutionState, ActiveFrames) == 0, "Offset mismatch for FStateTreeExecutionState::ActiveFrames");
static_assert(offsetof(FStateTreeExecutionState, DelayedTransitions) == 16, "Offset mismatch for FStateTreeExecutionState::DelayedTransitions");
static_assert(offsetof(FStateTreeExecutionState, RandomStream) == 32, "Offset mismatch for FStateTreeExecutionState::RandomStream");
static_assert(offsetof(FStateTreeExecutionState, ExecutionExtension) == 88, "Offset mismatch for FStateTreeExecutionState::ExecutionExtension");
static_assert(offsetof(FStateTreeExecutionState, LastTickStatus) == 104, "Offset mismatch for FStateTreeExecutionState::LastTickStatus");
static_assert(offsetof(FStateTreeExecutionState, TreeRunStatus) == 105, "Offset mismatch for FStateTreeExecutionState::TreeRunStatus");
static_assert(offsetof(FStateTreeExecutionState, RequestedStop) == 106, "Offset mismatch for FStateTreeExecutionState::RequestedStop");
static_assert(offsetof(FStateTreeExecutionState, CurrentPhase) == 107, "Offset mismatch for FStateTreeExecutionState::CurrentPhase");
static_assert(offsetof(FStateTreeExecutionState, StateChangeCount) == 108, "Offset mismatch for FStateTreeExecutionState::StateChangeCount");
static_assert(offsetof(FStateTreeExecutionState, bHasPendingCompletedState) == 110, "Offset mismatch for FStateTreeExecutionState::bHasPendingCompletedState");

// /Script/StateTreeModule.StateTreeExternalDataDesc
// Kind: ScriptStruct; super: none
struct FStateTreeExternalDataDesc
{
public:
    void* Struct; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Handle[0x6]; // 0x000C (Size: 0x6, Type: StructProperty)
    std::uint8_t Requirement; // 0x0012 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeExternalDataDesc, Struct) == 0, "Offset mismatch for FStateTreeExternalDataDesc::Struct");
static_assert(offsetof(FStateTreeExternalDataDesc, Name) == 8, "Offset mismatch for FStateTreeExternalDataDesc::Name");
static_assert(offsetof(FStateTreeExternalDataDesc, Handle) == 12, "Offset mismatch for FStateTreeExternalDataDesc::Handle");
static_assert(offsetof(FStateTreeExternalDataDesc, Requirement) == 18, "Offset mismatch for FStateTreeExternalDataDesc::Requirement");

// /Script/StateTreeModule.StateTreeExternalDataHandle
// Kind: ScriptStruct; super: none
struct FStateTreeExternalDataHandle
{
public:
    std::uint8_t DataHandle[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeExternalDataHandle, DataHandle) == 0, "Offset mismatch for FStateTreeExternalDataHandle::DataHandle");

// /Script/StateTreeModule.StateTreeFloatCombinaisonPropertyFunctionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeFloatCombinaisonPropertyFunctionInstanceData
{
public:
    float Left; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Right; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Result; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateTreeFloatCombinaisonPropertyFunctionInstanceData, Left) == 0, "Offset mismatch for FStateTreeFloatCombinaisonPropertyFunctionInstanceData::Left");
static_assert(offsetof(FStateTreeFloatCombinaisonPropertyFunctionInstanceData, Right) == 4, "Offset mismatch for FStateTreeFloatCombinaisonPropertyFunctionInstanceData::Right");
static_assert(offsetof(FStateTreeFloatCombinaisonPropertyFunctionInstanceData, Result) == 8, "Offset mismatch for FStateTreeFloatCombinaisonPropertyFunctionInstanceData::Result");

// /Script/StateTreeModule.StateTreeFloatInputConsideration
// Kind: ScriptStruct; super: StateTreeConsiderationCommonBase
struct FStateTreeFloatInputConsideration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ResponseCurve[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeFloatInputConsideration, ResponseCurve) == 40, "Offset mismatch for FStateTreeFloatInputConsideration::ResponseCurve");

// /Script/StateTreeModule.StateTreeFloatInputConsiderationInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeFloatInputConsiderationInstanceData
{
public:
    float Input; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Interval[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeFloatInputConsiderationInstanceData, Input) == 0, "Offset mismatch for FStateTreeFloatInputConsiderationInstanceData::Input");
static_assert(offsetof(FStateTreeFloatInputConsiderationInstanceData, Interval) == 4, "Offset mismatch for FStateTreeFloatInputConsiderationInstanceData::Interval");

// /Script/StateTreeModule.StateTreeIndex16
// Kind: ScriptStruct; super: none
struct FStateTreeIndex16
{
public:
    std::uint16_t Value; // 0x0000 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FStateTreeIndex16, Value) == 0, "Offset mismatch for FStateTreeIndex16::Value");

// /Script/StateTreeModule.StateTreeIndex8
// Kind: ScriptStruct; super: none
struct FStateTreeIndex8
{
public:
    std::uint8_t Value; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FStateTreeIndex8, Value) == 0, "Offset mismatch for FStateTreeIndex8::Value");

// /Script/StateTreeModule.StateTreeInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeInstanceData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeInstanceObjectWrapper
// Kind: ScriptStruct; super: none
struct FStateTreeInstanceObjectWrapper
{
public:
    void* InstanceObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateTreeInstanceObjectWrapper, InstanceObject) == 0, "Offset mismatch for FStateTreeInstanceObjectWrapper::InstanceObject");

// /Script/StateTreeModule.StateTreeInstanceStorage
// Kind: ScriptStruct; super: none
struct FStateTreeInstanceStorage
{
public:
    std::uint8_t InstanceStructs[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExecutionState[0x70]; // 0x0010 (Size: 0x70, Type: StructProperty)
    std::uint8_t ExecutionRuntimeData[0x30]; // 0x0080 (Size: 0x30, Type: StructProperty)
    TArray<void*> TemporaryInstances; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x20]; // 0x00C0
    TArray<void*> TransitionRequests; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GlobalParameters[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint32_t UniqueIdGenerator; // 0x0100 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FStateTreeInstanceStorage, InstanceStructs) == 0, "Offset mismatch for FStateTreeInstanceStorage::InstanceStructs");
static_assert(offsetof(FStateTreeInstanceStorage, ExecutionState) == 16, "Offset mismatch for FStateTreeInstanceStorage::ExecutionState");
static_assert(offsetof(FStateTreeInstanceStorage, ExecutionRuntimeData) == 128, "Offset mismatch for FStateTreeInstanceStorage::ExecutionRuntimeData");
static_assert(offsetof(FStateTreeInstanceStorage, TemporaryInstances) == 176, "Offset mismatch for FStateTreeInstanceStorage::TemporaryInstances");
static_assert(offsetof(FStateTreeInstanceStorage, TransitionRequests) == 224, "Offset mismatch for FStateTreeInstanceStorage::TransitionRequests");
static_assert(offsetof(FStateTreeInstanceStorage, GlobalParameters) == 240, "Offset mismatch for FStateTreeInstanceStorage::GlobalParameters");
static_assert(offsetof(FStateTreeInstanceStorage, UniqueIdGenerator) == 256, "Offset mismatch for FStateTreeInstanceStorage::UniqueIdGenerator");

// /Script/StateTreeModule.StateTreeIntCombinaisonPropertyFunctionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeIntCombinaisonPropertyFunctionInstanceData
{
public:
    std::int32_t Left; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Right; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Result; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStateTreeIntCombinaisonPropertyFunctionInstanceData, Left) == 0, "Offset mismatch for FStateTreeIntCombinaisonPropertyFunctionInstanceData::Left");
static_assert(offsetof(FStateTreeIntCombinaisonPropertyFunctionInstanceData, Right) == 4, "Offset mismatch for FStateTreeIntCombinaisonPropertyFunctionInstanceData::Right");
static_assert(offsetof(FStateTreeIntCombinaisonPropertyFunctionInstanceData, Result) == 8, "Offset mismatch for FStateTreeIntCombinaisonPropertyFunctionInstanceData::Result");

// /Script/StateTreeModule.StateTreeInvertFloatPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeInvertFloatPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeInvertFloatPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeInvertFloatPropertyFunction::Name");
static_assert(offsetof(FStateTreeInvertFloatPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeInvertFloatPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeInvertFloatPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeInvertFloatPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeInvertFloatPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeInvertFloatPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeInvertFloatPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeInvertFloatPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeInvertFloatPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeInvertFloatPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeInvertIntPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeInvertIntPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeInvertIntPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeInvertIntPropertyFunction::Name");
static_assert(offsetof(FStateTreeInvertIntPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeInvertIntPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeInvertIntPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeInvertIntPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeInvertIntPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeInvertIntPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeInvertIntPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeInvertIntPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeInvertIntPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeInvertIntPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeMakeIntervalPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeMakeIntervalPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeMakeIntervalPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeMakeIntervalPropertyFunction::Name");
static_assert(offsetof(FStateTreeMakeIntervalPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeMakeIntervalPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeMakeIntervalPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeMakeIntervalPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeMakeIntervalPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeMakeIntervalPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeMakeIntervalPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeMakeIntervalPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeMakeIntervalPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeMakeIntervalPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeMakeIntervalPropertyFunctionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeMakeIntervalPropertyFunctionInstanceData
{
public:
    float min; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float max; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Result[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeMakeIntervalPropertyFunctionInstanceData, min) == 0, "Offset mismatch for FStateTreeMakeIntervalPropertyFunctionInstanceData::min");
static_assert(offsetof(FStateTreeMakeIntervalPropertyFunctionInstanceData, max) == 4, "Offset mismatch for FStateTreeMakeIntervalPropertyFunctionInstanceData::max");
static_assert(offsetof(FStateTreeMakeIntervalPropertyFunctionInstanceData, Result) == 8, "Offset mismatch for FStateTreeMakeIntervalPropertyFunctionInstanceData::Result");

// /Script/StateTreeModule.StateTreeMakeTransformPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeMakeTransformPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeMakeTransformPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeMakeTransformPropertyFunction::Name");
static_assert(offsetof(FStateTreeMakeTransformPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeMakeTransformPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeMakeTransformPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeMakeTransformPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeMakeTransformPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeMakeTransformPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeMakeTransformPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeMakeTransformPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeMakeTransformPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeMakeTransformPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeMakeTransformPropertyFunctionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeMakeTransformPropertyFunctionInstanceData
{
public:
    std::uint8_t InTranslation[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t InRotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t OutTransform[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeMakeTransformPropertyFunctionInstanceData, InTranslation) == 0, "Offset mismatch for FStateTreeMakeTransformPropertyFunctionInstanceData::InTranslation");
static_assert(offsetof(FStateTreeMakeTransformPropertyFunctionInstanceData, InRotation) == 32, "Offset mismatch for FStateTreeMakeTransformPropertyFunctionInstanceData::InRotation");
static_assert(offsetof(FStateTreeMakeTransformPropertyFunctionInstanceData, OutTransform) == 64, "Offset mismatch for FStateTreeMakeTransformPropertyFunctionInstanceData::OutTransform");

// /Script/StateTreeModule.StateTreeMultiplyFloatPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeMultiplyFloatPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeMultiplyFloatPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeMultiplyFloatPropertyFunction::Name");
static_assert(offsetof(FStateTreeMultiplyFloatPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeMultiplyFloatPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeMultiplyFloatPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeMultiplyFloatPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeMultiplyFloatPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeMultiplyFloatPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeMultiplyFloatPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeMultiplyFloatPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeMultiplyFloatPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeMultiplyFloatPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeMultiplyIntPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeMultiplyIntPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeMultiplyIntPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeMultiplyIntPropertyFunction::Name");
static_assert(offsetof(FStateTreeMultiplyIntPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeMultiplyIntPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeMultiplyIntPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeMultiplyIntPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeMultiplyIntPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeMultiplyIntPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeMultiplyIntPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeMultiplyIntPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeMultiplyIntPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeMultiplyIntPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeNodeBase
// Kind: ScriptStruct; super: none
struct FStateTreeNodeBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeNodeBase, Name) == 8, "Offset mismatch for FStateTreeNodeBase::Name");
static_assert(offsetof(FStateTreeNodeBase, BindingsBatch) == 12, "Offset mismatch for FStateTreeNodeBase::BindingsBatch");
static_assert(offsetof(FStateTreeNodeBase, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeNodeBase::OutputBindingsBatch");
static_assert(offsetof(FStateTreeNodeBase, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeNodeBase::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeNodeBase, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeNodeBase::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeNodeBase, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeNodeBase::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeNodeIdToIndex
// Kind: ScriptStruct; super: none
struct FStateTreeNodeIdToIndex
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Index[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeNodeIdToIndex, ID) == 0, "Offset mismatch for FStateTreeNodeIdToIndex::ID");
static_assert(offsetof(FStateTreeNodeIdToIndex, Index) == 16, "Offset mismatch for FStateTreeNodeIdToIndex::Index");

// /Script/StateTreeModule.StateTreeObjectEqualsCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FStateTreeObjectEqualsCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeObjectEqualsCondition, bInvert) == 40, "Offset mismatch for FStateTreeObjectEqualsCondition::bInvert");

// /Script/StateTreeModule.StateTreeObjectEqualsConditionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeObjectEqualsConditionInstanceData
{
public:
    void* Left; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Right; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateTreeObjectEqualsConditionInstanceData, Left) == 0, "Offset mismatch for FStateTreeObjectEqualsConditionInstanceData::Left");
static_assert(offsetof(FStateTreeObjectEqualsConditionInstanceData, Right) == 8, "Offset mismatch for FStateTreeObjectEqualsConditionInstanceData::Right");

// /Script/StateTreeModule.StateTreeObjectIsChildOfClassCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FStateTreeObjectIsChildOfClassCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeObjectIsChildOfClassCondition, bInvert) == 40, "Offset mismatch for FStateTreeObjectIsChildOfClassCondition::bInvert");

// /Script/StateTreeModule.StateTreeObjectIsChildOfClassConditionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeObjectIsChildOfClassConditionInstanceData
{
public:
    void* Object; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Class; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FStateTreeObjectIsChildOfClassConditionInstanceData, Object) == 0, "Offset mismatch for FStateTreeObjectIsChildOfClassConditionInstanceData::Object");
static_assert(offsetof(FStateTreeObjectIsChildOfClassConditionInstanceData, Class) == 8, "Offset mismatch for FStateTreeObjectIsChildOfClassConditionInstanceData::Class");

// /Script/StateTreeModule.StateTreeObjectIsValidCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FStateTreeObjectIsValidCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeObjectIsValidCondition, bInvert) == 40, "Offset mismatch for FStateTreeObjectIsValidCondition::bInvert");

// /Script/StateTreeModule.StateTreeObjectIsValidConditionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeObjectIsValidConditionInstanceData
{
public:
    void* Object; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateTreeObjectIsValidConditionInstanceData, Object) == 0, "Offset mismatch for FStateTreeObjectIsValidConditionInstanceData::Object");

// /Script/StateTreeModule.StateTreePropertyAccess
// Kind: ScriptStruct; super: none
struct FStateTreePropertyAccess
{
public:
    std::uint8_t SourceIndirection[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    void* SourceStructType; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SourceDataHandle[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreePropertyAccess, SourceIndirection) == 0, "Offset mismatch for FStateTreePropertyAccess::SourceIndirection");
static_assert(offsetof(FStateTreePropertyAccess, SourceStructType) == 32, "Offset mismatch for FStateTreePropertyAccess::SourceStructType");
static_assert(offsetof(FStateTreePropertyAccess, SourceDataHandle) == 40, "Offset mismatch for FStateTreePropertyAccess::SourceDataHandle");

// /Script/StateTreeModule.StateTreePropertyBindings
// Kind: ScriptStruct; super: PropertyBindingBindingCollection
struct FStateTreePropertyBindings
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> SourceStructs; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyPathBindings; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyReferencePaths; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyAccesses; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStateTreePropertyBindings, SourceStructs) == 192, "Offset mismatch for FStateTreePropertyBindings::SourceStructs");
static_assert(offsetof(FStateTreePropertyBindings, PropertyPathBindings) == 208, "Offset mismatch for FStateTreePropertyBindings::PropertyPathBindings");
static_assert(offsetof(FStateTreePropertyBindings, PropertyReferencePaths) == 224, "Offset mismatch for FStateTreePropertyBindings::PropertyReferencePaths");
static_assert(offsetof(FStateTreePropertyBindings, PropertyAccesses) == 240, "Offset mismatch for FStateTreePropertyBindings::PropertyAccesses");

// /Script/StateTreeModule.StateTreePropertyFunctionBase
// Kind: ScriptStruct; super: StateTreeNodeBase
struct FStateTreePropertyFunctionBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreePropertyFunctionBase, Name) == 8, "Offset mismatch for FStateTreePropertyFunctionBase::Name");
static_assert(offsetof(FStateTreePropertyFunctionBase, BindingsBatch) == 12, "Offset mismatch for FStateTreePropertyFunctionBase::BindingsBatch");
static_assert(offsetof(FStateTreePropertyFunctionBase, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreePropertyFunctionBase::OutputBindingsBatch");
static_assert(offsetof(FStateTreePropertyFunctionBase, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreePropertyFunctionBase::InstanceTemplateIndex");
static_assert(offsetof(FStateTreePropertyFunctionBase, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreePropertyFunctionBase::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreePropertyFunctionBase, InstanceDataHandle) == 20, "Offset mismatch for FStateTreePropertyFunctionBase::InstanceDataHandle");

// /Script/StateTreeModule.StateTreePropertyFunctionCommonBase
// Kind: ScriptStruct; super: StateTreePropertyFunctionBase
struct FStateTreePropertyFunctionCommonBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreePropertyFunctionCommonBase, Name) == 8, "Offset mismatch for FStateTreePropertyFunctionCommonBase::Name");
static_assert(offsetof(FStateTreePropertyFunctionCommonBase, BindingsBatch) == 12, "Offset mismatch for FStateTreePropertyFunctionCommonBase::BindingsBatch");
static_assert(offsetof(FStateTreePropertyFunctionCommonBase, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreePropertyFunctionCommonBase::OutputBindingsBatch");
static_assert(offsetof(FStateTreePropertyFunctionCommonBase, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreePropertyFunctionCommonBase::InstanceTemplateIndex");
static_assert(offsetof(FStateTreePropertyFunctionCommonBase, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreePropertyFunctionCommonBase::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreePropertyFunctionCommonBase, InstanceDataHandle) == 20, "Offset mismatch for FStateTreePropertyFunctionCommonBase::InstanceDataHandle");

// /Script/StateTreeModule.StateTreePropertyPathBinding
// Kind: ScriptStruct; super: PropertyBindingBinding
struct FStateTreePropertyPathBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SourceDataHandle[0x6]; // 0x0028 (Size: 0x6, Type: StructProperty)
    std::uint8_t bIsOutputBinding; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t TaskCompletionCondition[0x1]; // 0x002F (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FStateTreePropertyPathBinding, SourceDataHandle) == 40, "Offset mismatch for FStateTreePropertyPathBinding::SourceDataHandle");
static_assert(offsetof(FStateTreePropertyPathBinding, bIsOutputBinding) == 46, "Offset mismatch for FStateTreePropertyPathBinding::bIsOutputBinding");
static_assert(offsetof(FStateTreePropertyPathBinding, TaskCompletionCondition) == 47, "Offset mismatch for FStateTreePropertyPathBinding::TaskCompletionCondition");

// /Script/StateTreeModule.StateTreePropertyRef
// Kind: ScriptStruct; super: none
struct FStateTreePropertyRef
{
public:
    std::uint8_t RefAccessIndex[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreePropertyRef, RefAccessIndex) == 0, "Offset mismatch for FStateTreePropertyRef::RefAccessIndex");

// /Script/StateTreeModule.StateTreePropertyRefPath
// Kind: ScriptStruct; super: none
struct FStateTreePropertyRefPath
{
public:
    std::uint8_t SourcePropertyPath[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SourceDataHandle[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreePropertyRefPath, SourcePropertyPath) == 0, "Offset mismatch for FStateTreePropertyRefPath::SourcePropertyPath");
static_assert(offsetof(FStateTreePropertyRefPath, SourceDataHandle) == 16, "Offset mismatch for FStateTreePropertyRefPath::SourceDataHandle");

// /Script/StateTreeModule.StateTreeRandomCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FStateTreeRandomCondition
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
    std::uint8_t EvaluationMode; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeRandomCondition, Operand) == 32, "Offset mismatch for FStateTreeRandomCondition::Operand");
static_assert(offsetof(FStateTreeRandomCondition, DeltaIndent) == 33, "Offset mismatch for FStateTreeRandomCondition::DeltaIndent");
static_assert(offsetof(FStateTreeRandomCondition, EvaluationMode) == 34, "Offset mismatch for FStateTreeRandomCondition::EvaluationMode");

// /Script/StateTreeModule.StateTreeRandomConditionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeRandomConditionInstanceData
{
public:
    float Threshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateTreeRandomConditionInstanceData, Threshold) == 0, "Offset mismatch for FStateTreeRandomConditionInstanceData::Threshold");

// /Script/StateTreeModule.StateTreeRandomTimeDuration
// Kind: ScriptStruct; super: none
struct FStateTreeRandomTimeDuration
{
public:
    std::uint16_t duration; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t RandomVariance; // 0x0002 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FStateTreeRandomTimeDuration, duration) == 0, "Offset mismatch for FStateTreeRandomTimeDuration::duration");
static_assert(offsetof(FStateTreeRandomTimeDuration, RandomVariance) == 2, "Offset mismatch for FStateTreeRandomTimeDuration::RandomVariance");

// /Script/StateTreeModule.StateTreeReference
// Kind: ScriptStruct; super: none
struct FStateTreeReference
{
public:
    void* StateTree; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Parameters[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> PropertyOverrides; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStateTreeReference, StateTree) == 0, "Offset mismatch for FStateTreeReference::StateTree");
static_assert(offsetof(FStateTreeReference, Parameters) == 8, "Offset mismatch for FStateTreeReference::Parameters");
static_assert(offsetof(FStateTreeReference, PropertyOverrides) == 24, "Offset mismatch for FStateTreeReference::PropertyOverrides");

// /Script/StateTreeModule.StateTreeReferenceOverrideItem
// Kind: ScriptStruct; super: none
struct FStateTreeReferenceOverrideItem
{
public:
    std::uint8_t StateTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t StateTreeReference[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeReferenceOverrideItem, StateTag) == 0, "Offset mismatch for FStateTreeReferenceOverrideItem::StateTag");
static_assert(offsetof(FStateTreeReferenceOverrideItem, StateTreeReference) == 8, "Offset mismatch for FStateTreeReferenceOverrideItem::StateTreeReference");

// /Script/StateTreeModule.StateTreeReferenceOverrides
// Kind: ScriptStruct; super: none
struct FStateTreeReferenceOverrides
{
public:
    TArray<void*> OverrideItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStateTreeReferenceOverrides, OverrideItems) == 0, "Offset mismatch for FStateTreeReferenceOverrides::OverrideItems");

// /Script/StateTreeModule.StateTreeRunParallelStateTreeExecutionExtension
// Kind: ScriptStruct; super: StateTreeExecutionExtension
struct FStateTreeRunParallelStateTreeExecutionExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeRunParallelStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FStateTreeRunParallelStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTreeOverrideTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t bShouldCopyParametersOnTick; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldCopyParametersOnExitState; // 0x002D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeRunParallelStateTreeTask, StateTreeOverrideTag) == 40, "Offset mismatch for FStateTreeRunParallelStateTreeTask::StateTreeOverrideTag");
static_assert(offsetof(FStateTreeRunParallelStateTreeTask, bShouldCopyParametersOnTick) == 44, "Offset mismatch for FStateTreeRunParallelStateTreeTask::bShouldCopyParametersOnTick");
static_assert(offsetof(FStateTreeRunParallelStateTreeTask, bShouldCopyParametersOnExitState) == 45, "Offset mismatch for FStateTreeRunParallelStateTreeTask::bShouldCopyParametersOnExitState");

// /Script/StateTreeModule.StateTreeRunParallelStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeRunParallelStateTreeTaskInstanceData
{
public:
    std::uint8_t StateTree[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t TreeInstanceData[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* RunningStateTree; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateTreeRunParallelStateTreeTaskInstanceData, StateTree) == 0, "Offset mismatch for FStateTreeRunParallelStateTreeTaskInstanceData::StateTree");
static_assert(offsetof(FStateTreeRunParallelStateTreeTaskInstanceData, TreeInstanceData) == 40, "Offset mismatch for FStateTreeRunParallelStateTreeTaskInstanceData::TreeInstanceData");
static_assert(offsetof(FStateTreeRunParallelStateTreeTaskInstanceData, RunningStateTree) == 56, "Offset mismatch for FStateTreeRunParallelStateTreeTaskInstanceData::RunningStateTree");

// /Script/StateTreeModule.StateTreeScheduledTick
// Kind: ScriptStruct; super: none
struct FStateTreeScheduledTick
{
public:
    float NextDeltaTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateTreeScheduledTick, NextDeltaTime) == 0, "Offset mismatch for FStateTreeScheduledTick::NextDeltaTime");

// /Script/StateTreeModule.StateTreeSharedEvent
// Kind: ScriptStruct; super: none
struct FStateTreeSharedEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeSingleFloatPropertyFunctionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeSingleFloatPropertyFunctionInstanceData
{
public:
    float Input; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Result; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateTreeSingleFloatPropertyFunctionInstanceData, Input) == 0, "Offset mismatch for FStateTreeSingleFloatPropertyFunctionInstanceData::Input");
static_assert(offsetof(FStateTreeSingleFloatPropertyFunctionInstanceData, Result) == 4, "Offset mismatch for FStateTreeSingleFloatPropertyFunctionInstanceData::Result");

// /Script/StateTreeModule.StateTreeSingleIntPropertyFunctionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeSingleIntPropertyFunctionInstanceData
{
public:
    std::int32_t Input; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Result; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStateTreeSingleIntPropertyFunctionInstanceData, Input) == 0, "Offset mismatch for FStateTreeSingleIntPropertyFunctionInstanceData::Input");
static_assert(offsetof(FStateTreeSingleIntPropertyFunctionInstanceData, Result) == 4, "Offset mismatch for FStateTreeSingleIntPropertyFunctionInstanceData::Result");

// /Script/StateTreeModule.StateTreeStateHandle
// Kind: ScriptStruct; super: none
struct FStateTreeStateHandle
{
public:
    std::uint16_t Index; // 0x0000 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FStateTreeStateHandle, Index) == 0, "Offset mismatch for FStateTreeStateHandle::Index");

// /Script/StateTreeModule.StateTreeStateIdToHandle
// Kind: ScriptStruct; super: none
struct FStateTreeStateIdToHandle
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Handle[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeStateIdToHandle, ID) == 0, "Offset mismatch for FStateTreeStateIdToHandle::ID");
static_assert(offsetof(FStateTreeStateIdToHandle, Handle) == 16, "Offset mismatch for FStateTreeStateIdToHandle::Handle");

// /Script/StateTreeModule.StateTreeStateLink
// Kind: ScriptStruct; super: none
struct FStateTreeStateLink
{
public:
    std::uint8_t StateHandle[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint8_t Fallback; // 0x0002 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeStateLink, StateHandle) == 0, "Offset mismatch for FStateTreeStateLink::StateHandle");
static_assert(offsetof(FStateTreeStateLink, Fallback) == 2, "Offset mismatch for FStateTreeStateLink::Fallback");

// /Script/StateTreeModule.StateTreeStructRef
// Kind: ScriptStruct; super: none
struct FStateTreeStructRef
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeSubtractFloatPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeSubtractFloatPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeSubtractFloatPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeSubtractFloatPropertyFunction::Name");
static_assert(offsetof(FStateTreeSubtractFloatPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeSubtractFloatPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeSubtractFloatPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeSubtractFloatPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeSubtractFloatPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeSubtractFloatPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeSubtractFloatPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeSubtractFloatPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeSubtractFloatPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeSubtractFloatPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeSubtractIntPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeSubtractIntPropertyFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeSubtractIntPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeSubtractIntPropertyFunction::Name");
static_assert(offsetof(FStateTreeSubtractIntPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeSubtractIntPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeSubtractIntPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeSubtractIntPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeSubtractIntPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeSubtractIntPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeSubtractIntPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeSubtractIntPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeSubtractIntPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeSubtractIntPropertyFunction::InstanceDataHandle");

// /Script/StateTreeModule.StateTreeTaskBase
// Kind: ScriptStruct; super: StateTreeNodeBase
struct FStateTreeTaskBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeTaskBase, bTaskEnabled) == 32, "Offset mismatch for FStateTreeTaskBase::bTaskEnabled");
static_assert(offsetof(FStateTreeTaskBase, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStateTreeTaskBase::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStateTreeTaskBase, TransitionHandlingPriority) == 34, "Offset mismatch for FStateTreeTaskBase::TransitionHandlingPriority");

// /Script/StateTreeModule.StateTreeTaskCommonBase
// Kind: ScriptStruct; super: StateTreeTaskBase
struct FStateTreeTaskCommonBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeTaskCommonBase, bTaskEnabled) == 32, "Offset mismatch for FStateTreeTaskCommonBase::bTaskEnabled");
static_assert(offsetof(FStateTreeTaskCommonBase, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStateTreeTaskCommonBase::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStateTreeTaskCommonBase, TransitionHandlingPriority) == 34, "Offset mismatch for FStateTreeTaskCommonBase::TransitionHandlingPriority");

// /Script/StateTreeModule.StateTreeTasksCompletionStatus
// Kind: ScriptStruct; super: none
struct FStateTreeTasksCompletionStatus
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeTemporaryInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeTemporaryInstanceData
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    std::uint8_t DataHandle[0x6]; // 0x0004 (Size: 0x6, Type: StructProperty)
    std::uint8_t OwnerNodeIndex[0x6]; // 0x000A (Size: 0x6, Type: StructProperty)
    std::uint8_t Instance[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeTemporaryInstanceData, DataHandle) == 4, "Offset mismatch for FStateTreeTemporaryInstanceData::DataHandle");
static_assert(offsetof(FStateTreeTemporaryInstanceData, OwnerNodeIndex) == 10, "Offset mismatch for FStateTreeTemporaryInstanceData::OwnerNodeIndex");
static_assert(offsetof(FStateTreeTemporaryInstanceData, Instance) == 16, "Offset mismatch for FStateTreeTemporaryInstanceData::Instance");

// /Script/StateTreeModule.StateTreeTransitionDelayedState
// Kind: ScriptStruct; super: none
struct FStateTreeTransitionDelayedState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* StateTree; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CapturedEvent[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float TimeLeft; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint32_t CapturedEventHash; // 0x0024 (Size: 0x4, Type: UInt32Property)
    std::uint8_t StateHandle[0x2]; // 0x0028 (Size: 0x2, Type: StructProperty)
    std::uint8_t TransitionIndex[0x1]; // 0x002A (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeTransitionDelayedState, StateTree) == 8, "Offset mismatch for FStateTreeTransitionDelayedState::StateTree");
static_assert(offsetof(FStateTreeTransitionDelayedState, CapturedEvent) == 16, "Offset mismatch for FStateTreeTransitionDelayedState::CapturedEvent");
static_assert(offsetof(FStateTreeTransitionDelayedState, TimeLeft) == 32, "Offset mismatch for FStateTreeTransitionDelayedState::TimeLeft");
static_assert(offsetof(FStateTreeTransitionDelayedState, CapturedEventHash) == 36, "Offset mismatch for FStateTreeTransitionDelayedState::CapturedEventHash");
static_assert(offsetof(FStateTreeTransitionDelayedState, StateHandle) == 40, "Offset mismatch for FStateTreeTransitionDelayedState::StateHandle");
static_assert(offsetof(FStateTreeTransitionDelayedState, TransitionIndex) == 42, "Offset mismatch for FStateTreeTransitionDelayedState::TransitionIndex");

// /Script/StateTreeModule.StateTreeTransitionIdToIndex
// Kind: ScriptStruct; super: none
struct FStateTreeTransitionIdToIndex
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Index[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeTransitionIdToIndex, ID) == 0, "Offset mismatch for FStateTreeTransitionIdToIndex::ID");
static_assert(offsetof(FStateTreeTransitionIdToIndex, Index) == 16, "Offset mismatch for FStateTreeTransitionIdToIndex::Index");

// /Script/StateTreeModule.StateTreeTransitionRequest
// Kind: ScriptStruct; super: none
struct FStateTreeTransitionRequest
{
public:
    std::uint8_t TargetState[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint8_t Priority; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Fallback; // 0x0003 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeTransitionRequest, TargetState) == 0, "Offset mismatch for FStateTreeTransitionRequest::TargetState");
static_assert(offsetof(FStateTreeTransitionRequest, Priority) == 2, "Offset mismatch for FStateTreeTransitionRequest::Priority");
static_assert(offsetof(FStateTreeTransitionRequest, Fallback) == 3, "Offset mismatch for FStateTreeTransitionRequest::Fallback");

// /Script/StateTreeModule.StateTreeTransitionResult
// Kind: ScriptStruct; super: none
struct FStateTreeTransitionResult
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TargetState[0x2]; // 0x0008 (Size: 0x2, Type: StructProperty)
    std::uint8_t CurrentState[0x2]; // 0x000A (Size: 0x2, Type: StructProperty)
    std::uint8_t CurrentRunStatus; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t ChangeType; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Priority; // 0x000E (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x000F
    TArray<void*> NextActiveFrames; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0020
    void* SourceStateTree; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SourceRootState[0x2]; // 0x0038 (Size: 0x2, Type: StructProperty)
    std::uint8_t SourceState[0x1]; // 0x003A (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeTransitionResult, TargetState) == 8, "Offset mismatch for FStateTreeTransitionResult::TargetState");
static_assert(offsetof(FStateTreeTransitionResult, CurrentState) == 10, "Offset mismatch for FStateTreeTransitionResult::CurrentState");
static_assert(offsetof(FStateTreeTransitionResult, CurrentRunStatus) == 12, "Offset mismatch for FStateTreeTransitionResult::CurrentRunStatus");
static_assert(offsetof(FStateTreeTransitionResult, ChangeType) == 13, "Offset mismatch for FStateTreeTransitionResult::ChangeType");
static_assert(offsetof(FStateTreeTransitionResult, Priority) == 14, "Offset mismatch for FStateTreeTransitionResult::Priority");
static_assert(offsetof(FStateTreeTransitionResult, NextActiveFrames) == 16, "Offset mismatch for FStateTreeTransitionResult::NextActiveFrames");
static_assert(offsetof(FStateTreeTransitionResult, SourceStateTree) == 48, "Offset mismatch for FStateTreeTransitionResult::SourceStateTree");
static_assert(offsetof(FStateTreeTransitionResult, SourceRootState) == 56, "Offset mismatch for FStateTreeTransitionResult::SourceRootState");
static_assert(offsetof(FStateTreeTransitionResult, SourceState) == 58, "Offset mismatch for FStateTreeTransitionResult::SourceState");

// /Script/StateTreeModule.StateTreeTransitionSource
// Kind: ScriptStruct; super: none
struct FStateTreeTransitionSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.TaskCompletionDispatcher
// Kind: ScriptStruct; super: none
struct FTaskCompletionDispatcher
{
public:
    std::uint8_t Dispatcher[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t TaskNodeIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t Condition; // 0x0012 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTaskCompletionDispatcher, Dispatcher) == 0, "Offset mismatch for FTaskCompletionDispatcher::Dispatcher");
static_assert(offsetof(FTaskCompletionDispatcher, TaskNodeIndex) == 16, "Offset mismatch for FTaskCompletionDispatcher::TaskNodeIndex");
static_assert(offsetof(FTaskCompletionDispatcher, Condition) == 18, "Offset mismatch for FTaskCompletionDispatcher::Condition");

// /Script/StateTreeModule.StateTree
// Kind: Class; super: DataAsset
class UStateTree
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t LastCompiledEditorDataHash; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    void* Schema; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Frames; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> States; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transitions; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Nodes[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultInstanceData[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultEvaluationScopeInstanceData[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultExecutionRuntimeData[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t SharedInstanceData[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    TArray<void*> ContextDataDescs; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropertyBindings[0x110]; // 0x00E0 (Size: 0x110, Type: StructProperty)
    TArray<void*> TaskCompletionDispatchers; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IDToStateMappings; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IDToNodeMappings; // 0x0220 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IDToTransitionMappings; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Parameters[0x10]; // 0x0240 (Size: 0x10, Type: StructProperty)
    TArray<void*> ExternalDataDescs; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t CompletionGlobalTasksMask; // 0x0260 (Size: 0x4, Type: UInt32Property)
    std::uint16_t NumContextData; // 0x0264 (Size: 0x2, Type: UInt16Property)
    std::uint16_t NumGlobalInstanceData; // 0x0266 (Size: 0x2, Type: UInt16Property)
    std::uint16_t EvaluatorsBegin; // 0x0268 (Size: 0x2, Type: UInt16Property)
    std::uint16_t EvaluatorsNum; // 0x026A (Size: 0x2, Type: UInt16Property)
    std::uint16_t GlobalTasksBegin; // 0x026C (Size: 0x2, Type: UInt16Property)
    std::uint16_t GlobalTasksNum; // 0x026E (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0002[0x4]; // 0x0270
    std::uint8_t CompletionGlobalTasksControl; // 0x0274 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ParameterDataType; // 0x0275 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0276
    std::uint8_t bHasGlobalTransitionTasks; // 0x0277 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStateTree, LastCompiledEditorDataHash) == 40, "Offset mismatch for UStateTree::LastCompiledEditorDataHash");
static_assert(offsetof(UStateTree, Schema) == 48, "Offset mismatch for UStateTree::Schema");
static_assert(offsetof(UStateTree, Frames) == 56, "Offset mismatch for UStateTree::Frames");
static_assert(offsetof(UStateTree, States) == 72, "Offset mismatch for UStateTree::States");
static_assert(offsetof(UStateTree, Transitions) == 88, "Offset mismatch for UStateTree::Transitions");
static_assert(offsetof(UStateTree, Nodes) == 104, "Offset mismatch for UStateTree::Nodes");
static_assert(offsetof(UStateTree, DefaultInstanceData) == 120, "Offset mismatch for UStateTree::DefaultInstanceData");
static_assert(offsetof(UStateTree, DefaultEvaluationScopeInstanceData) == 136, "Offset mismatch for UStateTree::DefaultEvaluationScopeInstanceData");
static_assert(offsetof(UStateTree, DefaultExecutionRuntimeData) == 152, "Offset mismatch for UStateTree::DefaultExecutionRuntimeData");
static_assert(offsetof(UStateTree, SharedInstanceData) == 168, "Offset mismatch for UStateTree::SharedInstanceData");
static_assert(offsetof(UStateTree, ContextDataDescs) == 208, "Offset mismatch for UStateTree::ContextDataDescs");
static_assert(offsetof(UStateTree, PropertyBindings) == 224, "Offset mismatch for UStateTree::PropertyBindings");
static_assert(offsetof(UStateTree, TaskCompletionDispatchers) == 496, "Offset mismatch for UStateTree::TaskCompletionDispatchers");
static_assert(offsetof(UStateTree, Extensions) == 512, "Offset mismatch for UStateTree::Extensions");
static_assert(offsetof(UStateTree, IDToStateMappings) == 528, "Offset mismatch for UStateTree::IDToStateMappings");
static_assert(offsetof(UStateTree, IDToNodeMappings) == 544, "Offset mismatch for UStateTree::IDToNodeMappings");
static_assert(offsetof(UStateTree, IDToTransitionMappings) == 560, "Offset mismatch for UStateTree::IDToTransitionMappings");
static_assert(offsetof(UStateTree, Parameters) == 576, "Offset mismatch for UStateTree::Parameters");
static_assert(offsetof(UStateTree, ExternalDataDescs) == 592, "Offset mismatch for UStateTree::ExternalDataDescs");
static_assert(offsetof(UStateTree, CompletionGlobalTasksMask) == 608, "Offset mismatch for UStateTree::CompletionGlobalTasksMask");
static_assert(offsetof(UStateTree, NumContextData) == 612, "Offset mismatch for UStateTree::NumContextData");
static_assert(offsetof(UStateTree, NumGlobalInstanceData) == 614, "Offset mismatch for UStateTree::NumGlobalInstanceData");
static_assert(offsetof(UStateTree, EvaluatorsBegin) == 616, "Offset mismatch for UStateTree::EvaluatorsBegin");
static_assert(offsetof(UStateTree, EvaluatorsNum) == 618, "Offset mismatch for UStateTree::EvaluatorsNum");
static_assert(offsetof(UStateTree, GlobalTasksBegin) == 620, "Offset mismatch for UStateTree::GlobalTasksBegin");
static_assert(offsetof(UStateTree, GlobalTasksNum) == 622, "Offset mismatch for UStateTree::GlobalTasksNum");
static_assert(offsetof(UStateTree, CompletionGlobalTasksControl) == 628, "Offset mismatch for UStateTree::CompletionGlobalTasksControl");
static_assert(offsetof(UStateTree, ParameterDataType) == 629, "Offset mismatch for UStateTree::ParameterDataType");
static_assert(offsetof(UStateTree, bHasGlobalTransitionTasks) == 631, "Offset mismatch for UStateTree::bHasGlobalTransitionTasks");

// /Script/StateTreeModule.StateTreeConditionBlueprintBase
// Kind: Class; super: StateTreeNodeBlueprintBase
class UStateTreeConditionBlueprintBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeConsiderationBlueprintBase
// Kind: Class; super: StateTreeNodeBlueprintBase
class UStateTreeConsiderationBlueprintBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeEvaluatorBlueprintBase
// Kind: Class; super: StateTreeNodeBlueprintBase
class UStateTreeEvaluatorBlueprintBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeExtension
// Kind: Class; super: Object
class UStateTreeExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UStateTreeFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeNodeBlueprintBase
// Kind: Class; super: Object
class UStateTreeNodeBlueprintBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeSchema
// Kind: Class; super: Object
class UStateTreeSchema
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeSchemaProvider
// Kind: Class; super: Interface
class UStateTreeSchemaProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateTreeModule.StateTreeSettings
// Kind: Class; super: DeveloperSettings
class UStateTreeSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bAutoStartDebuggerTracesOnNonEditorTargets; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStateTreeSettings, bAutoStartDebuggerTracesOnNonEditorTargets) == 48, "Offset mismatch for UStateTreeSettings::bAutoStartDebuggerTracesOnNonEditorTargets");

// /Script/StateTreeModule.StateTreeTaskBlueprintBase
// Kind: Class; super: StateTreeNodeBlueprintBase
class UStateTreeTaskBlueprintBase
{
public:
    std::uint8_t Pad_0000[0x69]; // 0x0000
    std::uint8_t bShouldCallTickOnlyOnEvents; // 0x0069 (Size: 0x1, Type: BoolProperty)
    // 0x0069 BoolProperty bShouldCopyBoundPropertiesOnExitState (shared storage)
    // 0x0069 BoolProperty bShouldCopyBoundPropertiesOnTick (shared storage)
    // 0x0069 BoolProperty bShouldStateChangeOnReselect (shared storage)
};

static_assert(offsetof(UStateTreeTaskBlueprintBase, bShouldCallTickOnlyOnEvents) == 105, "Offset mismatch for UStateTreeTaskBlueprintBase::bShouldCallTickOnlyOnEvents");
