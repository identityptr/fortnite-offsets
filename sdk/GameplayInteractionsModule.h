/**
 * decamp dumper generated SDK
 * Package: /script/GameplayInteractionsModule
 */
#pragma once
#include "Basic.h"

// /script/GameplayInteractionsModule.GameplayInteractionAbortContext
// Kind: ScriptStruct; super: none
struct FGameplayInteractionAbortContext
{
public:
    std::uint8_t Reason; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayInteractionAbortContext, Reason) == 0, "Offset mismatch for FGameplayInteractionAbortContext::Reason");

// /script/GameplayInteractionsModule.GameplayInteractionContext
// Kind: ScriptStruct; super: none
struct FGameplayInteractionContext
{
public:
    std::uint8_t StateTreeInstanceData[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClaimedHandle[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlotEntranceHandle[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t AbortContext[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    void* ContextActor; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* SmartObjectActor; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* Definition; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayInteractionContext, StateTreeInstanceData) == 0, "Offset mismatch for FGameplayInteractionContext::StateTreeInstanceData");
static_assert(offsetof(FGameplayInteractionContext, ClaimedHandle) == 16, "Offset mismatch for FGameplayInteractionContext::ClaimedHandle");
static_assert(offsetof(FGameplayInteractionContext, SlotEntranceHandle) == 56, "Offset mismatch for FGameplayInteractionContext::SlotEntranceHandle");
static_assert(offsetof(FGameplayInteractionContext, AbortContext) == 80, "Offset mismatch for FGameplayInteractionContext::AbortContext");
static_assert(offsetof(FGameplayInteractionContext, ContextActor) == 88, "Offset mismatch for FGameplayInteractionContext::ContextActor");
static_assert(offsetof(FGameplayInteractionContext, SmartObjectActor) == 96, "Offset mismatch for FGameplayInteractionContext::SmartObjectActor");
static_assert(offsetof(FGameplayInteractionContext, Definition) == 104, "Offset mismatch for FGameplayInteractionContext::Definition");

// /script/GameplayInteractionsModule.GameplayInteractionFindSlotTask
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FGameplayInteractionFindSlotTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ReferenceType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t FindByTag[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionFindSlotTask, ReferenceType) == 40, "Offset mismatch for FGameplayInteractionFindSlotTask::ReferenceType");
static_assert(offsetof(FGameplayInteractionFindSlotTask, FindByTag) == 44, "Offset mismatch for FGameplayInteractionFindSlotTask::FindByTag");

// /script/GameplayInteractionsModule.GameplayInteractionFindSlotTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionFindSlotTaskInstanceData
{
public:
    std::uint8_t ReferenceSlot[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    std::uint8_t ResultSlot[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionFindSlotTaskInstanceData, ReferenceSlot) == 0, "Offset mismatch for FGameplayInteractionFindSlotTaskInstanceData::ReferenceSlot");
static_assert(offsetof(FGameplayInteractionFindSlotTaskInstanceData, ResultSlot) == 20, "Offset mismatch for FGameplayInteractionFindSlotTaskInstanceData::ResultSlot");

// /script/GameplayInteractionsModule.GameplayInteractionGetSlotActorTask
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FGameplayInteractionGetSlotActorTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bFailIfNotFound; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayInteractionGetSlotActorTask, bFailIfNotFound) == 40, "Offset mismatch for FGameplayInteractionGetSlotActorTask::bFailIfNotFound");

// /script/GameplayInteractionsModule.GameplayInteractionGetSlotActorTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionGetSlotActorTaskInstanceData
{
public:
    std::uint8_t TargetSlot[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* ResultActor; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayInteractionGetSlotActorTaskInstanceData, TargetSlot) == 0, "Offset mismatch for FGameplayInteractionGetSlotActorTaskInstanceData::TargetSlot");
static_assert(offsetof(FGameplayInteractionGetSlotActorTaskInstanceData, ResultActor) == 24, "Offset mismatch for FGameplayInteractionGetSlotActorTaskInstanceData::ResultActor");

// /script/GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidCondition
// Kind: ScriptStruct; super: GameplayInteractionStateTreeCondition
struct FGameplayInteractionIsSlotHandleValidCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayInteractionIsSlotHandleValidCondition, bInvert) == 40, "Offset mismatch for FGameplayInteractionIsSlotHandleValidCondition::bInvert");

// /script/GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidConditionInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionIsSlotHandleValidConditionInstanceData
{
public:
    std::uint8_t Slot[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionIsSlotHandleValidConditionInstanceData, Slot) == 0, "Offset mismatch for FGameplayInteractionIsSlotHandleValidConditionInstanceData::Slot");

// /script/GameplayInteractionsModule.GameplayInteractionListenSlotEventsTask
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FGameplayInteractionListenSlotEventsTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayInteractionListenSlotEventsTask, bTaskEnabled) == 32, "Offset mismatch for FGameplayInteractionListenSlotEventsTask::bTaskEnabled");
static_assert(offsetof(FGameplayInteractionListenSlotEventsTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGameplayInteractionListenSlotEventsTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGameplayInteractionListenSlotEventsTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGameplayInteractionListenSlotEventsTask::TransitionHandlingPriority");

// /script/GameplayInteractionsModule.GameplayInteractionListenSlotEventsTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionListenSlotEventsTaskInstanceData
{
public:
    std::uint8_t TargetSlot[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionListenSlotEventsTaskInstanceData, TargetSlot) == 0, "Offset mismatch for FGameplayInteractionListenSlotEventsTaskInstanceData::TargetSlot");

// /script/GameplayInteractionsModule.GameplayInteractionMatchSlotTagsConditionInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionMatchSlotTagsConditionInstanceData
{
public:
    std::uint8_t Slot[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t TagsToMatch[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionMatchSlotTagsConditionInstanceData, Slot) == 0, "Offset mismatch for FGameplayInteractionMatchSlotTagsConditionInstanceData::Slot");
static_assert(offsetof(FGameplayInteractionMatchSlotTagsConditionInstanceData, TagsToMatch) == 24, "Offset mismatch for FGameplayInteractionMatchSlotTagsConditionInstanceData::TagsToMatch");

// /script/GameplayInteractionsModule.GameplayInteractionModifySlotTagTask
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FGameplayInteractionModifySlotTagTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Modify; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHandleExternalStopAsFailure; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operation; // 0x002A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002B
    std::uint8_t Tag[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionModifySlotTagTask, Modify) == 40, "Offset mismatch for FGameplayInteractionModifySlotTagTask::Modify");
static_assert(offsetof(FGameplayInteractionModifySlotTagTask, bHandleExternalStopAsFailure) == 41, "Offset mismatch for FGameplayInteractionModifySlotTagTask::bHandleExternalStopAsFailure");
static_assert(offsetof(FGameplayInteractionModifySlotTagTask, Operation) == 42, "Offset mismatch for FGameplayInteractionModifySlotTagTask::Operation");
static_assert(offsetof(FGameplayInteractionModifySlotTagTask, Tag) == 44, "Offset mismatch for FGameplayInteractionModifySlotTagTask::Tag");

// /script/GameplayInteractionsModule.GameplayInteractionModifySlotTagTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionModifySlotTagTaskInstanceData
{
public:
    std::uint8_t TargetSlot[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    std::uint8_t bTagRemoved; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayInteractionModifySlotTagTaskInstanceData, TargetSlot) == 0, "Offset mismatch for FGameplayInteractionModifySlotTagTaskInstanceData::TargetSlot");
static_assert(offsetof(FGameplayInteractionModifySlotTagTaskInstanceData, bTagRemoved) == 20, "Offset mismatch for FGameplayInteractionModifySlotTagTaskInstanceData::bTagRemoved");

// /script/GameplayInteractionsModule.GameplayInteractionQuerySlotTagCondition
// Kind: ScriptStruct; super: GameplayInteractionStateTreeCondition
struct FGameplayInteractionQuerySlotTagCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Source; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t TagQuery[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    std::uint8_t bInvert; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayInteractionQuerySlotTagCondition, Source) == 40, "Offset mismatch for FGameplayInteractionQuerySlotTagCondition::Source");
static_assert(offsetof(FGameplayInteractionQuerySlotTagCondition, TagQuery) == 48, "Offset mismatch for FGameplayInteractionQuerySlotTagCondition::TagQuery");
static_assert(offsetof(FGameplayInteractionQuerySlotTagCondition, bInvert) == 120, "Offset mismatch for FGameplayInteractionQuerySlotTagCondition::bInvert");

// /script/GameplayInteractionsModule.GameplayInteractionQuerySlotTagsConditionInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionQuerySlotTagsConditionInstanceData
{
public:
    std::uint8_t Slot[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionQuerySlotTagsConditionInstanceData, Slot) == 0, "Offset mismatch for FGameplayInteractionQuerySlotTagsConditionInstanceData::Slot");

// /script/GameplayInteractionsModule.GameplayInteractionSendSlotEventTask
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FGameplayInteractionSendSlotEventTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EventTag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Payload[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t Trigger; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHandleExternalStopAsFailure; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldTriggerOnReselect; // 0x0042 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayInteractionSendSlotEventTask, EventTag) == 40, "Offset mismatch for FGameplayInteractionSendSlotEventTask::EventTag");
static_assert(offsetof(FGameplayInteractionSendSlotEventTask, Payload) == 48, "Offset mismatch for FGameplayInteractionSendSlotEventTask::Payload");
static_assert(offsetof(FGameplayInteractionSendSlotEventTask, Trigger) == 64, "Offset mismatch for FGameplayInteractionSendSlotEventTask::Trigger");
static_assert(offsetof(FGameplayInteractionSendSlotEventTask, bHandleExternalStopAsFailure) == 65, "Offset mismatch for FGameplayInteractionSendSlotEventTask::bHandleExternalStopAsFailure");
static_assert(offsetof(FGameplayInteractionSendSlotEventTask, bShouldTriggerOnReselect) == 66, "Offset mismatch for FGameplayInteractionSendSlotEventTask::bShouldTriggerOnReselect");

// /script/GameplayInteractionsModule.GameplayInteractionSendSlotEventTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionSendSlotEventTaskInstanceData
{
public:
    std::uint8_t TargetSlot[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionSendSlotEventTaskInstanceData, TargetSlot) == 0, "Offset mismatch for FGameplayInteractionSendSlotEventTaskInstanceData::TargetSlot");

// /script/GameplayInteractionsModule.GameplayInteractionSetSlotEnabledInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionSetSlotEnabledInstanceData
{
public:
    std::uint8_t TargetSlot[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    std::uint8_t bInitialState; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayInteractionSetSlotEnabledInstanceData, TargetSlot) == 0, "Offset mismatch for FGameplayInteractionSetSlotEnabledInstanceData::TargetSlot");
static_assert(offsetof(FGameplayInteractionSetSlotEnabledInstanceData, bInitialState) == 20, "Offset mismatch for FGameplayInteractionSetSlotEnabledInstanceData::bInitialState");

// /script/GameplayInteractionsModule.GameplayInteractionSetSlotEnabledTask
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FGameplayInteractionSetSlotEnabledTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Modify; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHandleExternalStopAsFailure; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSlot; // 0x002A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayInteractionSetSlotEnabledTask, Modify) == 40, "Offset mismatch for FGameplayInteractionSetSlotEnabledTask::Modify");
static_assert(offsetof(FGameplayInteractionSetSlotEnabledTask, bHandleExternalStopAsFailure) == 41, "Offset mismatch for FGameplayInteractionSetSlotEnabledTask::bHandleExternalStopAsFailure");
static_assert(offsetof(FGameplayInteractionSetSlotEnabledTask, bEnableSlot) == 42, "Offset mismatch for FGameplayInteractionSetSlotEnabledTask::bEnableSlot");

// /script/GameplayInteractionsModule.GameplayInteractionSlotTagsMatchCondition
// Kind: ScriptStruct; super: GameplayInteractionStateTreeCondition
struct FGameplayInteractionSlotTagsMatchCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Source; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MatchType; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bExactMatch; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInvert; // 0x002B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayInteractionSlotTagsMatchCondition, Source) == 40, "Offset mismatch for FGameplayInteractionSlotTagsMatchCondition::Source");
static_assert(offsetof(FGameplayInteractionSlotTagsMatchCondition, MatchType) == 41, "Offset mismatch for FGameplayInteractionSlotTagsMatchCondition::MatchType");
static_assert(offsetof(FGameplayInteractionSlotTagsMatchCondition, bExactMatch) == 42, "Offset mismatch for FGameplayInteractionSlotTagsMatchCondition::bExactMatch");
static_assert(offsetof(FGameplayInteractionSlotTagsMatchCondition, bInvert) == 43, "Offset mismatch for FGameplayInteractionSlotTagsMatchCondition::bInvert");

// /script/GameplayInteractionsModule.GameplayInteractionSlotUserData
// Kind: ScriptStruct; super: SmartObjectSlotStateData
struct FGameplayInteractionSlotUserData
{
public:
    std::uint8_t Opaque[1];
};


// /script/GameplayInteractionsModule.GameplayInteractionStateTreeCondition
// Kind: ScriptStruct; super: StateTreeConditionBase
struct FGameplayInteractionStateTreeCondition
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
    std::uint8_t EvaluationMode; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayInteractionStateTreeCondition, Operand) == 32, "Offset mismatch for FGameplayInteractionStateTreeCondition::Operand");
static_assert(offsetof(FGameplayInteractionStateTreeCondition, DeltaIndent) == 33, "Offset mismatch for FGameplayInteractionStateTreeCondition::DeltaIndent");
static_assert(offsetof(FGameplayInteractionStateTreeCondition, EvaluationMode) == 34, "Offset mismatch for FGameplayInteractionStateTreeCondition::EvaluationMode");

// /script/GameplayInteractionsModule.GameplayInteractionStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskBase
struct FGameplayInteractionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayInteractionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGameplayInteractionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGameplayInteractionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGameplayInteractionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGameplayInteractionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGameplayInteractionStateTreeTask::TransitionHandlingPriority");

// /script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionSyncSlotTagStateInstanceData
{
public:
    std::uint8_t TargetSlot[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionSyncSlotTagStateInstanceData, TargetSlot) == 0, "Offset mismatch for FGameplayInteractionSyncSlotTagStateInstanceData::TargetSlot");

// /script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateTask
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FGameplayInteractionSyncSlotTagStateTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TagToMonitor[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t BreakEventTag[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionSyncSlotTagStateTask, TagToMonitor) == 40, "Offset mismatch for FGameplayInteractionSyncSlotTagStateTask::TagToMonitor");
static_assert(offsetof(FGameplayInteractionSyncSlotTagStateTask, BreakEventTag) == 44, "Offset mismatch for FGameplayInteractionSyncSlotTagStateTask::BreakEventTag");

// /script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayInteractionSyncSlotTagTransitionInstanceData
{
public:
    std::uint8_t TargetSlot[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionSyncSlotTagTransitionInstanceData, TargetSlot) == 0, "Offset mismatch for FGameplayInteractionSyncSlotTagTransitionInstanceData::TargetSlot");

// /script/GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionTask
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FGameplayInteractionSyncSlotTagTransitionTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionFromTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t TransitionToTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t TransitionEventTag[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayInteractionSyncSlotTagTransitionTask, TransitionFromTag) == 40, "Offset mismatch for FGameplayInteractionSyncSlotTagTransitionTask::TransitionFromTag");
static_assert(offsetof(FGameplayInteractionSyncSlotTagTransitionTask, TransitionToTag) == 44, "Offset mismatch for FGameplayInteractionSyncSlotTagTransitionTask::TransitionToTag");
static_assert(offsetof(FGameplayInteractionSyncSlotTagTransitionTask, TransitionEventTag) == 48, "Offset mismatch for FGameplayInteractionSyncSlotTagTransitionTask::TransitionEventTag");

// /script/GameplayInteractionsModule.PlayMontageStateTreeTask
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FPlayMontageStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Montage; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPlayMontageStateTreeTask, Montage) == 40, "Offset mismatch for FPlayMontageStateTreeTask::Montage");

// /script/GameplayInteractionsModule.PlayMontageStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FPlayMontageStateTreeTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float ComputedDuration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float time; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPlayMontageStateTreeTaskInstanceData, Actor) == 0, "Offset mismatch for FPlayMontageStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FPlayMontageStateTreeTaskInstanceData, ComputedDuration) == 8, "Offset mismatch for FPlayMontageStateTreeTaskInstanceData::ComputedDuration");
static_assert(offsetof(FPlayMontageStateTreeTaskInstanceData, time) == 12, "Offset mismatch for FPlayMontageStateTreeTaskInstanceData::time");

// /script/GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FStateTreeTask_FindSlotEntranceLocation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SelectMethod; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bProjectNavigationLocation; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTraceGroundLocation; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckTransitionTrajectory; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckEntranceLocationOverlap; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckSlotLocationOverlap; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseUpAxisLockedRotation; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSlotLocationAsFallbackCandidate; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t LocationType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    void* ValidationFilter; // 0x0038 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation, SelectMethod) == 40, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation::SelectMethod");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation, bProjectNavigationLocation) == 41, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation::bProjectNavigationLocation");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation, bTraceGroundLocation) == 42, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation::bTraceGroundLocation");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation, bCheckTransitionTrajectory) == 43, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation::bCheckTransitionTrajectory");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation, bCheckEntranceLocationOverlap) == 44, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation::bCheckEntranceLocationOverlap");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation, bCheckSlotLocationOverlap) == 45, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation::bCheckSlotLocationOverlap");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation, bUseUpAxisLockedRotation) == 46, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation::bUseUpAxisLockedRotation");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation, bUseSlotLocationAsFallbackCandidate) == 47, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation::bUseSlotLocationAsFallbackCandidate");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation, LocationType) == 48, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation::LocationType");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation, ValidationFilter) == 56, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation::ValidationFilter");

// /script/GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation_InstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeTask_FindSlotEntranceLocation_InstanceData
{
public:
    void* UserActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReferenceSlot[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t EntryTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t EntranceTags[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation_InstanceData, UserActor) == 0, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation_InstanceData::UserActor");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation_InstanceData, ReferenceSlot) == 8, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation_InstanceData::ReferenceSlot");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation_InstanceData, EntryTransform) == 32, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation_InstanceData::EntryTransform");
static_assert(offsetof(FStateTreeTask_FindSlotEntranceLocation_InstanceData, EntranceTags) == 128, "Offset mismatch for FStateTreeTask_FindSlotEntranceLocation_InstanceData::EntranceTags");

// /script/GameplayInteractionsModule.StateTreeTask_GetSlotEntranceTags
// Kind: ScriptStruct; super: GameplayInteractionStateTreeTask
struct FStateTreeTask_GetSlotEntranceTags
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeTask_GetSlotEntranceTags, bTaskEnabled) == 32, "Offset mismatch for FStateTreeTask_GetSlotEntranceTags::bTaskEnabled");
static_assert(offsetof(FStateTreeTask_GetSlotEntranceTags, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStateTreeTask_GetSlotEntranceTags::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStateTreeTask_GetSlotEntranceTags, TransitionHandlingPriority) == 34, "Offset mismatch for FStateTreeTask_GetSlotEntranceTags::TransitionHandlingPriority");

// /script/GameplayInteractionsModule.StateTreeTask_GetSlotEntranceTags_InstanceData
// Kind: ScriptStruct; super: none
struct FStateTreeTask_GetSlotEntranceTags_InstanceData
{
public:
    std::uint8_t SlotEntranceHandle[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t EntranceTags[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateTreeTask_GetSlotEntranceTags_InstanceData, SlotEntranceHandle) == 0, "Offset mismatch for FStateTreeTask_GetSlotEntranceTags_InstanceData::SlotEntranceHandle");
static_assert(offsetof(FStateTreeTask_GetSlotEntranceTags_InstanceData, EntranceTags) == 24, "Offset mismatch for FStateTreeTask_GetSlotEntranceTags_InstanceData::EntranceTags");

// /script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FStateTreeTask_PlayContextualAnim
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateTreeTask_PlayContextualAnim, bTaskEnabled) == 32, "Offset mismatch for FStateTreeTask_PlayContextualAnim::bTaskEnabled");
static_assert(offsetof(FStateTreeTask_PlayContextualAnim, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStateTreeTask_PlayContextualAnim::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStateTreeTask_PlayContextualAnim, TransitionHandlingPriority) == 34, "Offset mismatch for FStateTreeTask_PlayContextualAnim::TransitionHandlingPriority");

// /script/GameplayInteractionsModule.AITask_UseGameplayInteraction
// Kind: Class; super: AITask
class UAITask_UseGameplayInteraction
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FMulticastInlineDelegate OnFinished; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSucceeded; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailed; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMoveToFailed; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t GameplayInteractionContext[0x80]; // 0x00A8 (Size: 0x80, Type: StructProperty)
    void* MoveToTask; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ClaimedHandle[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t AbortContext[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAITask_UseGameplayInteraction, OnFinished) == 104, "Offset mismatch for UAITask_UseGameplayInteraction::OnFinished");
static_assert(offsetof(UAITask_UseGameplayInteraction, OnSucceeded) == 120, "Offset mismatch for UAITask_UseGameplayInteraction::OnSucceeded");
static_assert(offsetof(UAITask_UseGameplayInteraction, OnFailed) == 136, "Offset mismatch for UAITask_UseGameplayInteraction::OnFailed");
static_assert(offsetof(UAITask_UseGameplayInteraction, OnMoveToFailed) == 152, "Offset mismatch for UAITask_UseGameplayInteraction::OnMoveToFailed");
static_assert(offsetof(UAITask_UseGameplayInteraction, GameplayInteractionContext) == 168, "Offset mismatch for UAITask_UseGameplayInteraction::GameplayInteractionContext");
static_assert(offsetof(UAITask_UseGameplayInteraction, MoveToTask) == 296, "Offset mismatch for UAITask_UseGameplayInteraction::MoveToTask");
static_assert(offsetof(UAITask_UseGameplayInteraction, ClaimedHandle) == 304, "Offset mismatch for UAITask_UseGameplayInteraction::ClaimedHandle");
static_assert(offsetof(UAITask_UseGameplayInteraction, AbortContext) == 344, "Offset mismatch for UAITask_UseGameplayInteraction::AbortContext");

// /script/GameplayInteractionsModule.GameplayInteractionSmartObjectBehaviorDefinition
// Kind: Class; super: SmartObjectBehaviorDefinition
class UGameplayInteractionSmartObjectBehaviorDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTreeReference[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayInteractionSmartObjectBehaviorDefinition, StateTreeReference) == 40, "Offset mismatch for UGameplayInteractionSmartObjectBehaviorDefinition::StateTreeReference");

// /script/GameplayInteractionsModule.GameplayInteractionStateTreeSchema
// Kind: Class; super: StateTreeSchema
class UGameplayInteractionStateTreeSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ContextActorClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* SmartObjectActorClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ContextDataDescs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayInteractionStateTreeSchema, ContextActorClass) == 40, "Offset mismatch for UGameplayInteractionStateTreeSchema::ContextActorClass");
static_assert(offsetof(UGameplayInteractionStateTreeSchema, SmartObjectActorClass) == 48, "Offset mismatch for UGameplayInteractionStateTreeSchema::SmartObjectActorClass");
static_assert(offsetof(UGameplayInteractionStateTreeSchema, ContextDataDescs) == 56, "Offset mismatch for UGameplayInteractionStateTreeSchema::ContextDataDescs");

// /script/GameplayInteractionsModule.StateTreeTask_PlayContextualAnim_InstanceData
// Kind: Class; super: Object
class UStateTreeTask_PlayContextualAnim_InstanceData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PrimaryActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryActor; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FName SecondaryRole; // 0x0038 (Size: 0x8, Type: NameProperty)
    void* TertiaryActor; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    FName TertiaryRole; // 0x0048 (Size: 0x8, Type: NameProperty)
    void* SceneAsset; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SectionName[0x4]; // 0x0058 (Size: 0x4, Type: NameProperty)
    std::uint8_t ExecutionMethod; // 0x005C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWaitForNotifyEventToEnd; // 0x005D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x005E
    std::uint8_t NotifyEventNameToEnd[0x4]; // 0x0060 (Size: 0x4, Type: NameProperty)
    std::int32_t LoopsToRun; // 0x0064 (Size: 0x4, Type: IntProperty)
    std::uint8_t bLoopForever; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0069
    float DelayBetweenLoops; // 0x006C (Size: 0x4, Type: FloatProperty)
    float RandomDeviationBetweenLoops; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0074
    TArray<void*> WarpTargets; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, PrimaryActor) == 40, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::PrimaryActor");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, SecondaryActor) == 48, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::SecondaryActor");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, SecondaryRole) == 56, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::SecondaryRole");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, TertiaryActor) == 64, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::TertiaryActor");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, TertiaryRole) == 72, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::TertiaryRole");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, SceneAsset) == 80, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::SceneAsset");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, SectionName) == 88, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::SectionName");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, ExecutionMethod) == 92, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::ExecutionMethod");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, bWaitForNotifyEventToEnd) == 93, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::bWaitForNotifyEventToEnd");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, NotifyEventNameToEnd) == 96, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::NotifyEventNameToEnd");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, LoopsToRun) == 100, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::LoopsToRun");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, bLoopForever) == 104, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::bLoopForever");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, DelayBetweenLoops) == 108, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::DelayBetweenLoops");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, RandomDeviationBetweenLoops) == 112, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::RandomDeviationBetweenLoops");
static_assert(offsetof(UStateTreeTask_PlayContextualAnim_InstanceData, WarpTargets) == 120, "Offset mismatch for UStateTreeTask_PlayContextualAnim_InstanceData::WarpTargets");
