/**
 * decamp dumper generated SDK
 * Package: /Script/StateDrivenActorRuntime
 */
#pragma once
#include "Basic.h"

// /Script/StateDrivenActorRuntime.InstancedStateTreeId
// Kind: ScriptStruct; super: none
struct FInstancedStateTreeId
{
public:
    std::uint32_t ID; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FInstancedStateTreeId, ID) == 0, "Offset mismatch for FInstancedStateTreeId::ID");

// /Script/StateDrivenActorRuntime.LatestObjectRecordedStateTreeTransitionResult
// Kind: ScriptStruct; super: none
struct FLatestObjectRecordedStateTreeTransitionResult
{
public:
    TWeakObjectPtr<void> Instigator; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> RecordedTransitions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ObjectInstancedComponent; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ObjectInstancedComponentId[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLatestObjectRecordedStateTreeTransitionResult, Instigator) == 0, "Offset mismatch for FLatestObjectRecordedStateTreeTransitionResult::Instigator");
static_assert(offsetof(FLatestObjectRecordedStateTreeTransitionResult, RecordedTransitions) == 8, "Offset mismatch for FLatestObjectRecordedStateTreeTransitionResult::RecordedTransitions");
static_assert(offsetof(FLatestObjectRecordedStateTreeTransitionResult, ObjectInstancedComponent) == 24, "Offset mismatch for FLatestObjectRecordedStateTreeTransitionResult::ObjectInstancedComponent");
static_assert(offsetof(FLatestObjectRecordedStateTreeTransitionResult, ObjectInstancedComponentId) == 32, "Offset mismatch for FLatestObjectRecordedStateTreeTransitionResult::ObjectInstancedComponentId");

// /Script/StateDrivenActorRuntime.LatestWorldRecordedStateTreeTransitionResult
// Kind: ScriptStruct; super: none
struct FLatestWorldRecordedStateTreeTransitionResult
{
public:
    TWeakObjectPtr<void> Instigator; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> RecordedTransitions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> WorldInstancedComponent; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t WorldInstancedComponentId[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLatestWorldRecordedStateTreeTransitionResult, Instigator) == 0, "Offset mismatch for FLatestWorldRecordedStateTreeTransitionResult::Instigator");
static_assert(offsetof(FLatestWorldRecordedStateTreeTransitionResult, RecordedTransitions) == 8, "Offset mismatch for FLatestWorldRecordedStateTreeTransitionResult::RecordedTransitions");
static_assert(offsetof(FLatestWorldRecordedStateTreeTransitionResult, WorldInstancedComponent) == 24, "Offset mismatch for FLatestWorldRecordedStateTreeTransitionResult::WorldInstancedComponent");
static_assert(offsetof(FLatestWorldRecordedStateTreeTransitionResult, WorldInstancedComponentId) == 32, "Offset mismatch for FLatestWorldRecordedStateTreeTransitionResult::WorldInstancedComponentId");

// /Script/StateDrivenActorRuntime.StateDrivenEvent
// Kind: ScriptStruct; super: none
struct FStateDrivenEvent
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    TWeakObjectPtr<void> StateDrivenOwner; // 0x000C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FStateDrivenEvent, StateDrivenOwner) == 12, "Offset mismatch for FStateDrivenEvent::StateDrivenOwner");

// /Script/StateDrivenActorRuntime.StateDrivenEventTransitionStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FStateDrivenEventTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStateDrivenEventTransitionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FStateDrivenEventTransitionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FStateDrivenEventTransitionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStateDrivenEventTransitionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStateDrivenEventTransitionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FStateDrivenEventTransitionStateTreeTask::TransitionHandlingPriority");

// /Script/StateDrivenActorRuntime.StateDrivenEventTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FStateDrivenEventTransitionStateTreeTaskInstanceData
{
public:
    std::uint8_t StateData[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    TWeakObjectPtr<void> UserActor; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> InstigatorActor; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FStateDrivenEventTransitionStateTreeTaskInstanceData, StateData) == 0, "Offset mismatch for FStateDrivenEventTransitionStateTreeTaskInstanceData::StateData");
static_assert(offsetof(FStateDrivenEventTransitionStateTreeTaskInstanceData, UserActor) == 64, "Offset mismatch for FStateDrivenEventTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FStateDrivenEventTransitionStateTreeTaskInstanceData, InstigatorActor) == 72, "Offset mismatch for FStateDrivenEventTransitionStateTreeTaskInstanceData::InstigatorActor");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_BeginOverlap
// Kind: ScriptStruct; super: StateDrivenEvent
struct FStateDrivenEvent_BeginOverlap
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t OverlappingActorTagQuery[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float OverlapRadius; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateDrivenEvent_BeginOverlap, OverlappingActorTagQuery) == 24, "Offset mismatch for FStateDrivenEvent_BeginOverlap::OverlappingActorTagQuery");
static_assert(offsetof(FStateDrivenEvent_BeginOverlap, OverlapRadius) == 48, "Offset mismatch for FStateDrivenEvent_BeginOverlap::OverlapRadius");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_Conversation
// Kind: ScriptStruct; super: StateDrivenEvent_InteractionBase
struct FStateDrivenEvent_Conversation
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t ConversationEntryTag[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    std::uint8_t bUseConversationChoiceMadeToTransition; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    TArray<void*> ConversationFilters; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ValueThreshold; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0064
    void* StateDrivenEventVerbHelper; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> ConversationComponentPtr; // 0x0070 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FStateDrivenEvent_Conversation, ConversationEntryTag) == 72, "Offset mismatch for FStateDrivenEvent_Conversation::ConversationEntryTag");
static_assert(offsetof(FStateDrivenEvent_Conversation, bUseConversationChoiceMadeToTransition) == 76, "Offset mismatch for FStateDrivenEvent_Conversation::bUseConversationChoiceMadeToTransition");
static_assert(offsetof(FStateDrivenEvent_Conversation, ConversationFilters) == 80, "Offset mismatch for FStateDrivenEvent_Conversation::ConversationFilters");
static_assert(offsetof(FStateDrivenEvent_Conversation, ValueThreshold) == 96, "Offset mismatch for FStateDrivenEvent_Conversation::ValueThreshold");
static_assert(offsetof(FStateDrivenEvent_Conversation, StateDrivenEventVerbHelper) == 104, "Offset mismatch for FStateDrivenEvent_Conversation::StateDrivenEventVerbHelper");
static_assert(offsetof(FStateDrivenEvent_Conversation, ConversationComponentPtr) == 112, "Offset mismatch for FStateDrivenEvent_Conversation::ConversationComponentPtr");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_DamageInstance
// Kind: ScriptStruct; super: StateDrivenEvent
struct FStateDrivenEvent_DamageInstance
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t InstigatorTagQuery[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t DamageInstanceTagQuery[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float MinimumInstanceDamage; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateDrivenEvent_DamageInstance, InstigatorTagQuery) == 24, "Offset mismatch for FStateDrivenEvent_DamageInstance::InstigatorTagQuery");
static_assert(offsetof(FStateDrivenEvent_DamageInstance, DamageInstanceTagQuery) == 48, "Offset mismatch for FStateDrivenEvent_DamageInstance::DamageInstanceTagQuery");
static_assert(offsetof(FStateDrivenEvent_DamageInstance, MinimumInstanceDamage) == 72, "Offset mismatch for FStateDrivenEvent_DamageInstance::MinimumInstanceDamage");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_DepositResource
// Kind: ScriptStruct; super: StateDrivenEvent_InteractionBase
struct FStateDrivenEvent_DepositResource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t DepositItem[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t DepositAmount; // 0x0068 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStateDrivenEvent_DepositResource, DepositItem) == 72, "Offset mismatch for FStateDrivenEvent_DepositResource::DepositItem");
static_assert(offsetof(FStateDrivenEvent_DepositResource, DepositAmount) == 104, "Offset mismatch for FStateDrivenEvent_DepositResource::DepositAmount");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_Destroy
// Kind: ScriptStruct; super: StateDrivenEvent
struct FStateDrivenEvent_Destroy
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t InstigatorTagQuery[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t DamageInstanceTagQuery[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateDrivenEvent_Destroy, InstigatorTagQuery) == 24, "Offset mismatch for FStateDrivenEvent_Destroy::InstigatorTagQuery");
static_assert(offsetof(FStateDrivenEvent_Destroy, DamageInstanceTagQuery) == 48, "Offset mismatch for FStateDrivenEvent_Destroy::DamageInstanceTagQuery");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_EndOverlap
// Kind: ScriptStruct; super: StateDrivenEvent
struct FStateDrivenEvent_EndOverlap
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t OverlappingActorTagQuery[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float OverlapRadius; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateDrivenEvent_EndOverlap, OverlappingActorTagQuery) == 24, "Offset mismatch for FStateDrivenEvent_EndOverlap::OverlappingActorTagQuery");
static_assert(offsetof(FStateDrivenEvent_EndOverlap, OverlapRadius) == 48, "Offset mismatch for FStateDrivenEvent_EndOverlap::OverlapRadius");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_InsertItem
// Kind: ScriptStruct; super: StateDrivenEvent_InteractionBase
struct FStateDrivenEvent_InsertItem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t EquippedItemTagQuery[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateDrivenEvent_InsertItem, EquippedItemTagQuery) == 72, "Offset mismatch for FStateDrivenEvent_InsertItem::EquippedItemTagQuery");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_Interaction
// Kind: ScriptStruct; super: StateDrivenEvent_InteractionBase
struct FStateDrivenEvent_Interaction
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t PlayerTagQuery[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionStringOverride[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    float InteractionTimeOverride; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateDrivenEvent_Interaction, PlayerTagQuery) == 24, "Offset mismatch for FStateDrivenEvent_Interaction::PlayerTagQuery");
static_assert(offsetof(FStateDrivenEvent_Interaction, InteractionStringOverride) == 48, "Offset mismatch for FStateDrivenEvent_Interaction::InteractionStringOverride");
static_assert(offsetof(FStateDrivenEvent_Interaction, InteractionTimeOverride) == 64, "Offset mismatch for FStateDrivenEvent_Interaction::InteractionTimeOverride");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_InteractionBase
// Kind: ScriptStruct; super: StateDrivenEvent
struct FStateDrivenEvent_InteractionBase
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t PlayerTagQuery[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionStringOverride[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    float InteractionTimeOverride; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateDrivenEvent_InteractionBase, PlayerTagQuery) == 24, "Offset mismatch for FStateDrivenEvent_InteractionBase::PlayerTagQuery");
static_assert(offsetof(FStateDrivenEvent_InteractionBase, InteractionStringOverride) == 48, "Offset mismatch for FStateDrivenEvent_InteractionBase::InteractionStringOverride");
static_assert(offsetof(FStateDrivenEvent_InteractionBase, InteractionTimeOverride) == 64, "Offset mismatch for FStateDrivenEvent_InteractionBase::InteractionTimeOverride");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_PickupItem
// Kind: ScriptStruct; super: StateDrivenEvent_BeginOverlap
struct FStateDrivenEvent_PickupItem
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t OverlappingActorTagQuery[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float OverlapRadius; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateDrivenEvent_PickupItem, OverlappingActorTagQuery) == 24, "Offset mismatch for FStateDrivenEvent_PickupItem::OverlappingActorTagQuery");
static_assert(offsetof(FStateDrivenEvent_PickupItem, OverlapRadius) == 48, "Offset mismatch for FStateDrivenEvent_PickupItem::OverlapRadius");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_QuestObjectiveActive
// Kind: ScriptStruct; super: StateDrivenEvent
struct FStateDrivenEvent_QuestObjectiveActive
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* QuestItemDefinition; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    FName ObjectiveBackendName; // 0x0020 (Size: 0x8, Type: NameProperty)
    void* StateDrivenEventQuestObjectiveActiveHelper; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateDrivenEvent_QuestObjectiveActive, QuestItemDefinition) == 24, "Offset mismatch for FStateDrivenEvent_QuestObjectiveActive::QuestItemDefinition");
static_assert(offsetof(FStateDrivenEvent_QuestObjectiveActive, ObjectiveBackendName) == 32, "Offset mismatch for FStateDrivenEvent_QuestObjectiveActive::ObjectiveBackendName");
static_assert(offsetof(FStateDrivenEvent_QuestObjectiveActive, StateDrivenEventQuestObjectiveActiveHelper) == 40, "Offset mismatch for FStateDrivenEvent_QuestObjectiveActive::StateDrivenEventQuestObjectiveActiveHelper");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_QuestObjectiveCompleted
// Kind: ScriptStruct; super: StateDrivenEvent
struct FStateDrivenEvent_QuestObjectiveCompleted
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* QuestItemDefinition; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    FName ObjectiveBackendName; // 0x0020 (Size: 0x8, Type: NameProperty)
    void* StateDrivenEventQuestObjectiveCompletedHelper; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateDrivenEvent_QuestObjectiveCompleted, QuestItemDefinition) == 24, "Offset mismatch for FStateDrivenEvent_QuestObjectiveCompleted::QuestItemDefinition");
static_assert(offsetof(FStateDrivenEvent_QuestObjectiveCompleted, ObjectiveBackendName) == 32, "Offset mismatch for FStateDrivenEvent_QuestObjectiveCompleted::ObjectiveBackendName");
static_assert(offsetof(FStateDrivenEvent_QuestObjectiveCompleted, StateDrivenEventQuestObjectiveCompletedHelper) == 40, "Offset mismatch for FStateDrivenEvent_QuestObjectiveCompleted::StateDrivenEventQuestObjectiveCompletedHelper");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_Timer
// Kind: ScriptStruct; super: StateDrivenEvent
struct FStateDrivenEvent_Timer
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t duration[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    void* StateDrivenEventTimerHelper; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateDrivenEvent_Timer, duration) == 24, "Offset mismatch for FStateDrivenEvent_Timer::duration");
static_assert(offsetof(FStateDrivenEvent_Timer, StateDrivenEventTimerHelper) == 48, "Offset mismatch for FStateDrivenEvent_Timer::StateDrivenEventTimerHelper");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_Verb
// Kind: ScriptStruct; super: StateDrivenEvent
struct FStateDrivenEvent_Verb
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Verbs; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ValueThreshold; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    void* StateDrivenEventVerbHelper; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateDrivenEvent_Verb, Verbs) == 24, "Offset mismatch for FStateDrivenEvent_Verb::Verbs");
static_assert(offsetof(FStateDrivenEvent_Verb, ValueThreshold) == 40, "Offset mismatch for FStateDrivenEvent_Verb::ValueThreshold");
static_assert(offsetof(FStateDrivenEvent_Verb, StateDrivenEventVerbHelper) == 48, "Offset mismatch for FStateDrivenEvent_Verb::StateDrivenEventVerbHelper");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_WithdrawItem
// Kind: ScriptStruct; super: StateDrivenEvent_InteractionBase
struct FStateDrivenEvent_WithdrawItem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t SlottedItemPopOffset[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateDrivenEvent_WithdrawItem, SlottedItemPopOffset) == 72, "Offset mismatch for FStateDrivenEvent_WithdrawItem::SlottedItemPopOffset");

// /Script/StateDrivenActorRuntime.StateDrivenEvent_WorldStateChanged
// Kind: ScriptStruct; super: StateDrivenEvent
struct FStateDrivenEvent_WorldStateChanged
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t WorldStateQuery[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    void* WorldStateChangeHelper; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStateDrivenEvent_WorldStateChanged, WorldStateQuery) == 24, "Offset mismatch for FStateDrivenEvent_WorldStateChanged::WorldStateQuery");
static_assert(offsetof(FStateDrivenEvent_WorldStateChanged, WorldStateChangeHelper) == 48, "Offset mismatch for FStateDrivenEvent_WorldStateChanged::WorldStateChangeHelper");

// /Script/StateDrivenActorRuntime.StateDrivenFloat
// Kind: ScriptStruct; super: none
struct FStateDrivenFloat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InstancedFloat[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateDrivenFloat, InstancedFloat) == 8, "Offset mismatch for FStateDrivenFloat::InstancedFloat");

// /Script/StateDrivenActorRuntime.StateDrivenFloat_Base
// Kind: ScriptStruct; super: none
struct FStateDrivenFloat_Base
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateDrivenActorRuntime.StateDrivenFloat_Simple
// Kind: ScriptStruct; super: StateDrivenFloat_Base
struct FStateDrivenFloat_Simple
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStateDrivenFloat_Simple, Value) == 8, "Offset mismatch for FStateDrivenFloat_Simple::Value");

// /Script/StateDrivenActorRuntime.StateDrivenFloat_Variable
// Kind: ScriptStruct; super: StateDrivenFloat_Base
struct FStateDrivenFloat_Variable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t VariableIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStateDrivenFloat_Variable, VariableIndex) == 8, "Offset mismatch for FStateDrivenFloat_Variable::VariableIndex");

// /Script/StateDrivenActorRuntime.StateDrivenState
// Kind: ScriptStruct; super: none
struct FStateDrivenState
{
public:
    FString DevNotes; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> SourceEnterStateReactions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstigatorEnterStateReactions; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transitions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStateDrivenState, DevNotes) == 0, "Offset mismatch for FStateDrivenState::DevNotes");
static_assert(offsetof(FStateDrivenState, SourceEnterStateReactions) == 16, "Offset mismatch for FStateDrivenState::SourceEnterStateReactions");
static_assert(offsetof(FStateDrivenState, InstigatorEnterStateReactions) == 32, "Offset mismatch for FStateDrivenState::InstigatorEnterStateReactions");
static_assert(offsetof(FStateDrivenState, Transitions) == 48, "Offset mismatch for FStateDrivenState::Transitions");

// /Script/StateDrivenActorRuntime.StateDrivenStateTransitions
// Kind: ScriptStruct; super: none
struct FStateDrivenStateTransitions
{
public:
    std::uint8_t TransitionTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> TransitionEvents; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStateDrivenStateTransitions, TransitionTag) == 0, "Offset mismatch for FStateDrivenStateTransitions::TransitionTag");
static_assert(offsetof(FStateDrivenStateTransitions, TransitionEvents) == 8, "Offset mismatch for FStateDrivenStateTransitions::TransitionEvents");

// /Script/StateDrivenActorRuntime.StateDrivenTagQuery
// Kind: ScriptStruct; super: none
struct FStateDrivenTagQuery
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InstancedTagQuery[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateDrivenTagQuery, InstancedTagQuery) == 8, "Offset mismatch for FStateDrivenTagQuery::InstancedTagQuery");

// /Script/StateDrivenActorRuntime.StateDrivenTagQuery_Base
// Kind: ScriptStruct; super: none
struct FStateDrivenTagQuery_Base
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateDrivenActorRuntime.StateDrivenTagQuery_Simple
// Kind: ScriptStruct; super: StateDrivenTagQuery_Base
struct FStateDrivenTagQuery_Simple
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Query[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStateDrivenTagQuery_Simple, Query) == 8, "Offset mismatch for FStateDrivenTagQuery_Simple::Query");

// /Script/StateDrivenActorRuntime.StateDrivenTagQuery_Variable
// Kind: ScriptStruct; super: StateDrivenTagQuery_Base
struct FStateDrivenTagQuery_Variable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t VariableIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStateDrivenTagQuery_Variable, VariableIndex) == 8, "Offset mismatch for FStateDrivenTagQuery_Variable::VariableIndex");

// /Script/StateDrivenActorRuntime.ControllerComponent_StateDrivenReplication
// Kind: Class; super: ControllerComponent
class UControllerComponent_StateDrivenReplication
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> LatestRecordedStateTreeTransitionResults; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UControllerComponent_StateDrivenReplication, LatestRecordedStateTreeTransitionResults) == 192, "Offset mismatch for UControllerComponent_StateDrivenReplication::LatestRecordedStateTreeTransitionResults");

// /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven
// Kind: Class; super: FortActorComponent_FortInteractExtension
class UFortActorComponent_StateDriven
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t SlottedItemEntry[0x98]; // 0x00D8 (Size: 0x98, Type: StructProperty)
    TArray<void*> VariableTagQueries; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariableFloats; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedObjects; // 0x0190 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortActorComponent_StateDriven, SlottedItemEntry) == 216, "Offset mismatch for UFortActorComponent_StateDriven::SlottedItemEntry");
static_assert(offsetof(UFortActorComponent_StateDriven, VariableTagQueries) == 368, "Offset mismatch for UFortActorComponent_StateDriven::VariableTagQueries");
static_assert(offsetof(UFortActorComponent_StateDriven, VariableFloats) == 384, "Offset mismatch for UFortActorComponent_StateDriven::VariableFloats");
static_assert(offsetof(UFortActorComponent_StateDriven, LoadedObjects) == 400, "Offset mismatch for UFortActorComponent_StateDriven::LoadedObjects");

// /Script/StateDrivenActorRuntime.FortGameStateComponent_StateDrivenReplication
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_StateDrivenReplication
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> InstanceToActiveState; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TArray<void*> LatestRecordedStateTreeTransitionResults; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameStateComponent_StateDrivenReplication, InstanceToActiveState) == 192, "Offset mismatch for UFortGameStateComponent_StateDrivenReplication::InstanceToActiveState");
static_assert(offsetof(UFortGameStateComponent_StateDrivenReplication, LatestRecordedStateTreeTransitionResults) == 208, "Offset mismatch for UFortGameStateComponent_StateDrivenReplication::LatestRecordedStateTreeTransitionResults");

// /Script/StateDrivenActorRuntime.FortPlayerInstancedStateTreeComponent
// Kind: Class; super: ObjectInstancedStateTreeComponent
class UFortPlayerInstancedStateTreeComponent
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0138
    std::uint8_t StateTreeRef[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t LinkedStateTreeOverrides[0x10]; // 0x0170 (Size: 0x10, Type: StructProperty)
    std::uint8_t bStartLogicAutomatically; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x23]; // 0x0181
    std::uint8_t InstancedStateTreeId[0x1]; // 0x01A4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerInstancedStateTreeComponent, OnStateTreeRunStatusChanged) == 296, "Offset mismatch for UFortPlayerInstancedStateTreeComponent::OnStateTreeRunStatusChanged");
static_assert(offsetof(UFortPlayerInstancedStateTreeComponent, StateTreeRef) == 328, "Offset mismatch for UFortPlayerInstancedStateTreeComponent::StateTreeRef");
static_assert(offsetof(UFortPlayerInstancedStateTreeComponent, LinkedStateTreeOverrides) == 368, "Offset mismatch for UFortPlayerInstancedStateTreeComponent::LinkedStateTreeOverrides");
static_assert(offsetof(UFortPlayerInstancedStateTreeComponent, bStartLogicAutomatically) == 384, "Offset mismatch for UFortPlayerInstancedStateTreeComponent::bStartLogicAutomatically");
static_assert(offsetof(UFortPlayerInstancedStateTreeComponent, InstancedStateTreeId) == 420, "Offset mismatch for UFortPlayerInstancedStateTreeComponent::InstancedStateTreeId");

// /Script/StateDrivenActorRuntime.FortWorldStateChangedHelper
// Kind: Class; super: Object
class UFortWorldStateChangedHelper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t WorldStateQuery[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> StateDrivenOwner; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t TransitionTag[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> CachedWorldReactionManager; // 0x004C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortWorldStateChangedHelper, WorldStateQuery) == 40, "Offset mismatch for UFortWorldStateChangedHelper::WorldStateQuery");
static_assert(offsetof(UFortWorldStateChangedHelper, StateDrivenOwner) == 64, "Offset mismatch for UFortWorldStateChangedHelper::StateDrivenOwner");
static_assert(offsetof(UFortWorldStateChangedHelper, TransitionTag) == 72, "Offset mismatch for UFortWorldStateChangedHelper::TransitionTag");
static_assert(offsetof(UFortWorldStateChangedHelper, CachedWorldReactionManager) == 76, "Offset mismatch for UFortWorldStateChangedHelper::CachedWorldReactionManager");

// /Script/StateDrivenActorRuntime.ObjectInstancedStateTreeComponent
// Kind: Class; super: BrainComponent
class UObjectInstancedStateTreeComponent
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0138
    std::uint8_t StateTreeRef[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t LinkedStateTreeOverrides[0x10]; // 0x0170 (Size: 0x10, Type: StructProperty)
    std::uint8_t bStartLogicAutomatically; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x23]; // 0x0181
    std::uint8_t InstancedStateTreeId[0x1]; // 0x01A4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UObjectInstancedStateTreeComponent, OnStateTreeRunStatusChanged) == 296, "Offset mismatch for UObjectInstancedStateTreeComponent::OnStateTreeRunStatusChanged");
static_assert(offsetof(UObjectInstancedStateTreeComponent, StateTreeRef) == 328, "Offset mismatch for UObjectInstancedStateTreeComponent::StateTreeRef");
static_assert(offsetof(UObjectInstancedStateTreeComponent, LinkedStateTreeOverrides) == 368, "Offset mismatch for UObjectInstancedStateTreeComponent::LinkedStateTreeOverrides");
static_assert(offsetof(UObjectInstancedStateTreeComponent, bStartLogicAutomatically) == 384, "Offset mismatch for UObjectInstancedStateTreeComponent::bStartLogicAutomatically");
static_assert(offsetof(UObjectInstancedStateTreeComponent, InstancedStateTreeId) == 420, "Offset mismatch for UObjectInstancedStateTreeComponent::InstancedStateTreeId");

// /Script/StateDrivenActorRuntime.ObjectInstancedStateTreeSchema
// Kind: Class; super: StateTreeSchema
class UObjectInstancedStateTreeSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ContextActorClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* InstigatorActorClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ContextDataDescs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UObjectInstancedStateTreeSchema, ContextActorClass) == 40, "Offset mismatch for UObjectInstancedStateTreeSchema::ContextActorClass");
static_assert(offsetof(UObjectInstancedStateTreeSchema, InstigatorActorClass) == 48, "Offset mismatch for UObjectInstancedStateTreeSchema::InstigatorActorClass");
static_assert(offsetof(UObjectInstancedStateTreeSchema, ContextDataDescs) == 56, "Offset mismatch for UObjectInstancedStateTreeSchema::ContextDataDescs");

// /Script/StateDrivenActorRuntime.StateDrivenEventQuestObjectiveActiveHelper
// Kind: Class; super: Object
class UStateDrivenEventQuestObjectiveActiveHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateDrivenActorRuntime.StateDrivenEventQuestObjectiveCompletedHelper
// Kind: Class; super: Object
class UStateDrivenEventQuestObjectiveCompletedHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateDrivenActorRuntime.StateDrivenEventTimerHelper
// Kind: Class; super: Object
class UStateDrivenEventTimerHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateDrivenActorRuntime.StateDrivenEventVerbHelper
// Kind: Class; super: Object
class UStateDrivenEventVerbHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateDrivenActorRuntime.WorldInstancedStateTreeComponent
// Kind: Class; super: BrainComponent
class UWorldInstancedStateTreeComponent
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t StateTreeRef[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t LinkedStateTreeOverrides[0x10]; // 0x0160 (Size: 0x10, Type: StructProperty)
    std::uint8_t bStartLogicAutomatically; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockNativeReplication; // 0x0171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xA]; // 0x0172
    std::uint8_t InstancedStateTreeId[0x4]; // 0x017C (Size: 0x4, Type: StructProperty)
    std::uint8_t InstanceData[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWorldInstancedStateTreeComponent, OnStateTreeRunStatusChanged) == 296, "Offset mismatch for UWorldInstancedStateTreeComponent::OnStateTreeRunStatusChanged");
static_assert(offsetof(UWorldInstancedStateTreeComponent, StateTreeRef) == 312, "Offset mismatch for UWorldInstancedStateTreeComponent::StateTreeRef");
static_assert(offsetof(UWorldInstancedStateTreeComponent, LinkedStateTreeOverrides) == 352, "Offset mismatch for UWorldInstancedStateTreeComponent::LinkedStateTreeOverrides");
static_assert(offsetof(UWorldInstancedStateTreeComponent, bStartLogicAutomatically) == 368, "Offset mismatch for UWorldInstancedStateTreeComponent::bStartLogicAutomatically");
static_assert(offsetof(UWorldInstancedStateTreeComponent, bBlockNativeReplication) == 369, "Offset mismatch for UWorldInstancedStateTreeComponent::bBlockNativeReplication");
static_assert(offsetof(UWorldInstancedStateTreeComponent, InstancedStateTreeId) == 380, "Offset mismatch for UWorldInstancedStateTreeComponent::InstancedStateTreeId");
static_assert(offsetof(UWorldInstancedStateTreeComponent, InstanceData) == 384, "Offset mismatch for UWorldInstancedStateTreeComponent::InstanceData");
