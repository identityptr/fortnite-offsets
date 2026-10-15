/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayStateTreeModule
 */
#pragma once
#include "Basic.h"

// /Script/GameplayStateTreeModule.StateTreeAIActionTaskBase
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FStateTreeAIActionTaskBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeAIActionTaskBase, bTaskEnabled) == 32, "Offset mismatch for FStateTreeAIActionTaskBase::bTaskEnabled");
static_assert(offsetof(FStateTreeAIActionTaskBase, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStateTreeAIActionTaskBase::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStateTreeAIActionTaskBase, TransitionHandlingPriority) == 34, "Offset mismatch for FStateTreeAIActionTaskBase::TransitionHandlingPriority");

// /Script/GameplayStateTreeModule.StateTreeAIConditionBase
// Kind: ScriptStruct; super: StateTreeConditionBase
struct FStateTreeAIConditionBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
    std::uint8_t EvaluationMode; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeAIConditionBase, Operand) == 32, "Offset mismatch for FStateTreeAIConditionBase::Operand");
static_assert(offsetof(FStateTreeAIConditionBase, DeltaIndent) == 33, "Offset mismatch for FStateTreeAIConditionBase::DeltaIndent");
static_assert(offsetof(FStateTreeAIConditionBase, EvaluationMode) == 34, "Offset mismatch for FStateTreeAIConditionBase::EvaluationMode");

// /Script/GameplayStateTreeModule.StateTreeAITaskBase
// Kind: ScriptStruct; super: StateTreeTaskBase
struct FStateTreeAITaskBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeAITaskBase, bTaskEnabled) == 32, "Offset mismatch for FStateTreeAITaskBase::bTaskEnabled");
static_assert(offsetof(FStateTreeAITaskBase, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStateTreeAITaskBase::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStateTreeAITaskBase, TransitionHandlingPriority) == 34, "Offset mismatch for FStateTreeAITaskBase::TransitionHandlingPriority");

// /Script/GameplayStateTreeModule.StateTreeComponentExecutionExtension
// Kind: ScriptStruct; super: StateTreeExecutionExtension
struct FStateTreeComponentExecutionExtension
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Component; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateTreeComponentExecutionExtension, Component) == 8, "Offset mismatch for FStateTreeComponentExecutionExtension::Component");

// /Script/GameplayStateTreeModule.StateTreeGetActorLocationPropertyFunction
// Kind: ScriptStruct; super: StateTreePropertyFunctionCommonBase
struct FStateTreeGetActorLocationPropertyFunction
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

static_assert(offsetof(FStateTreeGetActorLocationPropertyFunction, Name) == 8, "Offset mismatch for FStateTreeGetActorLocationPropertyFunction::Name");
static_assert(offsetof(FStateTreeGetActorLocationPropertyFunction, BindingsBatch) == 12, "Offset mismatch for FStateTreeGetActorLocationPropertyFunction::BindingsBatch");
static_assert(offsetof(FStateTreeGetActorLocationPropertyFunction, OutputBindingsBatch) == 14, "Offset mismatch for FStateTreeGetActorLocationPropertyFunction::OutputBindingsBatch");
static_assert(offsetof(FStateTreeGetActorLocationPropertyFunction, InstanceTemplateIndex) == 16, "Offset mismatch for FStateTreeGetActorLocationPropertyFunction::InstanceTemplateIndex");
static_assert(offsetof(FStateTreeGetActorLocationPropertyFunction, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FStateTreeGetActorLocationPropertyFunction::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FStateTreeGetActorLocationPropertyFunction, InstanceDataHandle) == 20, "Offset mismatch for FStateTreeGetActorLocationPropertyFunction::InstanceDataHandle");

// /Script/GameplayStateTreeModule.StateTreeGetActorLocationPropertyFunctionInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeGetActorLocationPropertyFunctionInstanceData
{
public:
    void* Input; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Output[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeGetActorLocationPropertyFunctionInstanceData, Input) == 0, "Offset mismatch for FStateTreeGetActorLocationPropertyFunctionInstanceData::Input");
static_assert(offsetof(FStateTreeGetActorLocationPropertyFunctionInstanceData, Output) == 8, "Offset mismatch for FStateTreeGetActorLocationPropertyFunctionInstanceData::Output");

// /Script/GameplayStateTreeModule.StateTreeMoveToTask
// Kind: ScriptStruct; super: StateTreeAIActionTaskBase
struct FStateTreeMoveToTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSavedShouldCallTick; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStateTreeMoveToTask, bSavedShouldCallTick) == 40, "Offset mismatch for FStateTreeMoveToTask::bSavedShouldCallTick");

// /Script/GameplayStateTreeModule.StateTreeMoveToTaskInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeMoveToTaskInstanceData
{
public:
    void* AIController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Destination[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    void* TargetActor; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    float AcceptableRadius; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float DestinationMoveTolerance; // 0x002C (Size: 0x4, Type: FloatProperty)
    void* FilterClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowStrafe; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPartialPath; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTrackMovingGoal; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequireNavigableEndLocation; // 0x003B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProjectGoalLocation; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReachTestIncludesAgentRadius; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReachTestIncludesGoalRadius; // 0x003E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x003F
    void* MoveToTask; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> TaskOwner; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FStateTreeMoveToTaskInstanceData, AIController) == 0, "Offset mismatch for FStateTreeMoveToTaskInstanceData::AIController");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, Destination) == 8, "Offset mismatch for FStateTreeMoveToTaskInstanceData::Destination");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, TargetActor) == 32, "Offset mismatch for FStateTreeMoveToTaskInstanceData::TargetActor");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, AcceptableRadius) == 40, "Offset mismatch for FStateTreeMoveToTaskInstanceData::AcceptableRadius");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, DestinationMoveTolerance) == 44, "Offset mismatch for FStateTreeMoveToTaskInstanceData::DestinationMoveTolerance");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, FilterClass) == 48, "Offset mismatch for FStateTreeMoveToTaskInstanceData::FilterClass");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, bAllowStrafe) == 56, "Offset mismatch for FStateTreeMoveToTaskInstanceData::bAllowStrafe");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, bAllowPartialPath) == 57, "Offset mismatch for FStateTreeMoveToTaskInstanceData::bAllowPartialPath");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, bTrackMovingGoal) == 58, "Offset mismatch for FStateTreeMoveToTaskInstanceData::bTrackMovingGoal");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, bRequireNavigableEndLocation) == 59, "Offset mismatch for FStateTreeMoveToTaskInstanceData::bRequireNavigableEndLocation");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, bProjectGoalLocation) == 60, "Offset mismatch for FStateTreeMoveToTaskInstanceData::bProjectGoalLocation");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, bReachTestIncludesAgentRadius) == 61, "Offset mismatch for FStateTreeMoveToTaskInstanceData::bReachTestIncludesAgentRadius");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, bReachTestIncludesGoalRadius) == 62, "Offset mismatch for FStateTreeMoveToTaskInstanceData::bReachTestIncludesGoalRadius");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, MoveToTask) == 64, "Offset mismatch for FStateTreeMoveToTaskInstanceData::MoveToTask");
static_assert(offsetof(FStateTreeMoveToTaskInstanceData, TaskOwner) == 72, "Offset mismatch for FStateTreeMoveToTaskInstanceData::TaskOwner");

// /Script/GameplayStateTreeModule.StateTreeRunEnvQueryInstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeRunEnvQueryInstanceData
{
public:
    std::uint8_t Result[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* QueryOwner; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* QueryTemplate; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QueryConfig; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RunMode; // 0x0028 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FStateTreeRunEnvQueryInstanceData, Result) == 0, "Offset mismatch for FStateTreeRunEnvQueryInstanceData::Result");
static_assert(offsetof(FStateTreeRunEnvQueryInstanceData, QueryOwner) == 8, "Offset mismatch for FStateTreeRunEnvQueryInstanceData::QueryOwner");
static_assert(offsetof(FStateTreeRunEnvQueryInstanceData, QueryTemplate) == 16, "Offset mismatch for FStateTreeRunEnvQueryInstanceData::QueryTemplate");
static_assert(offsetof(FStateTreeRunEnvQueryInstanceData, QueryConfig) == 24, "Offset mismatch for FStateTreeRunEnvQueryInstanceData::QueryConfig");
static_assert(offsetof(FStateTreeRunEnvQueryInstanceData, RunMode) == 40, "Offset mismatch for FStateTreeRunEnvQueryInstanceData::RunMode");

// /Script/GameplayStateTreeModule.StateTreeRunEnvQueryTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FStateTreeRunEnvQueryTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeRunEnvQueryTask, bTaskEnabled) == 32, "Offset mismatch for FStateTreeRunEnvQueryTask::bTaskEnabled");
static_assert(offsetof(FStateTreeRunEnvQueryTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStateTreeRunEnvQueryTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStateTreeRunEnvQueryTask, TransitionHandlingPriority) == 34, "Offset mismatch for FStateTreeRunEnvQueryTask::TransitionHandlingPriority");

// /Script/GameplayStateTreeModule.BTTask_RunDynamicStateTree
// Kind: Class; super: BTTaskNode
class UBTTask_RunDynamicStateTree
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t StateTreeRef[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t InstanceData[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t InjectionTag[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_RunDynamicStateTree, StateTreeRef) == 112, "Offset mismatch for UBTTask_RunDynamicStateTree::StateTreeRef");
static_assert(offsetof(UBTTask_RunDynamicStateTree, InstanceData) == 152, "Offset mismatch for UBTTask_RunDynamicStateTree::InstanceData");
static_assert(offsetof(UBTTask_RunDynamicStateTree, InjectionTag) == 168, "Offset mismatch for UBTTask_RunDynamicStateTree::InjectionTag");

// /Script/GameplayStateTreeModule.BTTask_RunStateTree
// Kind: Class; super: BTTaskNode
class UBTTask_RunStateTree
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t StateTreeRef[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t InstanceData[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    float Interval; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float RandomDeviation; // 0x00B4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBTTask_RunStateTree, StateTreeRef) == 120, "Offset mismatch for UBTTask_RunStateTree::StateTreeRef");
static_assert(offsetof(UBTTask_RunStateTree, InstanceData) == 160, "Offset mismatch for UBTTask_RunStateTree::InstanceData");
static_assert(offsetof(UBTTask_RunStateTree, Interval) == 176, "Offset mismatch for UBTTask_RunStateTree::Interval");
static_assert(offsetof(UBTTask_RunStateTree, RandomDeviation) == 180, "Offset mismatch for UBTTask_RunStateTree::RandomDeviation");

// /Script/GameplayStateTreeModule.GameplayStateTreeBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UGameplayStateTreeBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayStateTreeModule.StateTreeAIComponent
// Kind: Class; super: StateTreeComponent
class UStateTreeAIComponent
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t StateTreeRef[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t LinkedStateTreeOverrides[0x10]; // 0x0160 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceData[0x10]; // 0x0170 (Size: 0x10, Type: StructProperty)
    std::uint8_t bStartLogicAutomatically; // 0x0180 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStateTreeAIComponent, OnStateTreeRunStatusChanged) == 296, "Offset mismatch for UStateTreeAIComponent::OnStateTreeRunStatusChanged");
static_assert(offsetof(UStateTreeAIComponent, StateTreeRef) == 312, "Offset mismatch for UStateTreeAIComponent::StateTreeRef");
static_assert(offsetof(UStateTreeAIComponent, LinkedStateTreeOverrides) == 352, "Offset mismatch for UStateTreeAIComponent::LinkedStateTreeOverrides");
static_assert(offsetof(UStateTreeAIComponent, InstanceData) == 368, "Offset mismatch for UStateTreeAIComponent::InstanceData");
static_assert(offsetof(UStateTreeAIComponent, bStartLogicAutomatically) == 384, "Offset mismatch for UStateTreeAIComponent::bStartLogicAutomatically");

// /Script/GameplayStateTreeModule.StateTreeAIComponentSchema
// Kind: Class; super: StateTreeComponentSchema
class UStateTreeAIComponentSchema
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* AIControllerClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UStateTreeAIComponentSchema, AIControllerClass) == 72, "Offset mismatch for UStateTreeAIComponentSchema::AIControllerClass");

// /Script/GameplayStateTreeModule.StateTreeComponent
// Kind: Class; super: BrainComponent
class UStateTreeComponent
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t StateTreeRef[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t LinkedStateTreeOverrides[0x10]; // 0x0160 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceData[0x10]; // 0x0170 (Size: 0x10, Type: StructProperty)
    std::uint8_t bStartLogicAutomatically; // 0x0180 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStateTreeComponent, OnStateTreeRunStatusChanged) == 296, "Offset mismatch for UStateTreeComponent::OnStateTreeRunStatusChanged");
static_assert(offsetof(UStateTreeComponent, StateTreeRef) == 312, "Offset mismatch for UStateTreeComponent::StateTreeRef");
static_assert(offsetof(UStateTreeComponent, LinkedStateTreeOverrides) == 352, "Offset mismatch for UStateTreeComponent::LinkedStateTreeOverrides");
static_assert(offsetof(UStateTreeComponent, InstanceData) == 368, "Offset mismatch for UStateTreeComponent::InstanceData");
static_assert(offsetof(UStateTreeComponent, bStartLogicAutomatically) == 384, "Offset mismatch for UStateTreeComponent::bStartLogicAutomatically");

// /Script/GameplayStateTreeModule.StateTreeComponentSchema
// Kind: Class; super: StateTreeSchema
class UStateTreeComponentSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ContextActorClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ScheduledTickPolicy; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    TArray<void*> ContextDataDescs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStateTreeComponentSchema, ContextActorClass) == 40, "Offset mismatch for UStateTreeComponentSchema::ContextActorClass");
static_assert(offsetof(UStateTreeComponentSchema, ScheduledTickPolicy) == 48, "Offset mismatch for UStateTreeComponentSchema::ScheduledTickPolicy");
static_assert(offsetof(UStateTreeComponentSchema, ContextDataDescs) == 56, "Offset mismatch for UStateTreeComponentSchema::ContextDataDescs");
