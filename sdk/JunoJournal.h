/**
 * decamp dumper generated SDK
 * Package: /Script/JunoJournal
 */
#pragma once
#include "Basic.h"

// /Script/JunoJournal.JunoAllJournalTasksViewedMessage
// Kind: ScriptStruct; super: none
struct FJunoAllJournalTasksViewedMessage
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoAllJournalTasksViewedMessage, PlayerState) == 0, "Offset mismatch for FJunoAllJournalTasksViewedMessage::PlayerState");

// /Script/JunoJournal.JunoEventReaction_RevealPlayerJournalTask
// Kind: ScriptStruct; super: JunoEventReaction_RevealTaskBase
struct FJunoEventReaction_RevealPlayerJournalTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> TaskRowNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoEventReaction_RevealPlayerJournalTask, TaskRowNames) == 8, "Offset mismatch for FJunoEventReaction_RevealPlayerJournalTask::TaskRowNames");

// /Script/JunoJournal.JunoEventReaction_RevealTaskBase
// Kind: ScriptStruct; super: EventReactionBase
struct FJunoEventReaction_RevealTaskBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> TaskRowNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoEventReaction_RevealTaskBase, TaskRowNames) == 8, "Offset mismatch for FJunoEventReaction_RevealTaskBase::TaskRowNames");

// /Script/JunoJournal.JunoEventReaction_RevealWorldJournalTask
// Kind: ScriptStruct; super: JunoEventReaction_RevealTaskBase
struct FJunoEventReaction_RevealWorldJournalTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> TaskRowNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoEventReaction_RevealWorldJournalTask, TaskRowNames) == 8, "Offset mismatch for FJunoEventReaction_RevealWorldJournalTask::TaskRowNames");

// /Script/JunoJournal.JunoEvent_JournalTrackedTaskChanged
// Kind: ScriptStruct; super: none
struct FJunoEvent_JournalTrackedTaskChanged
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* JournalUserData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FName TrackedTaskName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoEvent_JournalTrackedTaskChanged, PlayerState) == 0, "Offset mismatch for FJunoEvent_JournalTrackedTaskChanged::PlayerState");
static_assert(offsetof(FJunoEvent_JournalTrackedTaskChanged, JournalUserData) == 8, "Offset mismatch for FJunoEvent_JournalTrackedTaskChanged::JournalUserData");
static_assert(offsetof(FJunoEvent_JournalTrackedTaskChanged, TrackedTaskName) == 16, "Offset mismatch for FJunoEvent_JournalTrackedTaskChanged::TrackedTaskName");

// /Script/JunoJournal.JunoJournalAccountRewardReconciler
// Kind: ScriptStruct; super: none
struct FJunoJournalAccountRewardReconciler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoJournal.JunoJournalActiveTaskContainer
// Kind: ScriptStruct; super: none
struct FJunoJournalActiveTaskContainer
{
public:
    TMap<void*, void*> ServerActiveTasks; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoJournalActiveTaskContainer, ServerActiveTasks) == 0, "Offset mismatch for FJunoJournalActiveTaskContainer::ServerActiveTasks");

// /Script/JunoJournal.JunoJournalCategoryFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FJunoJournalCategoryFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComp; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoJournalCategoryFastArray, Entries) == 72, "Offset mismatch for FJunoJournalCategoryFastArray::Entries");
static_assert(offsetof(FJunoJournalCategoryFastArray, ParentComp) == 88, "Offset mismatch for FJunoJournalCategoryFastArray::ParentComp");

// /Script/JunoJournal.JunoJournalCategoryFastEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FJunoJournalCategoryFastEntry
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t CategoryTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsCollapsed; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoJournalCategoryFastEntry, CategoryTag) == 12, "Offset mismatch for FJunoJournalCategoryFastEntry::CategoryTag");
static_assert(offsetof(FJunoJournalCategoryFastEntry, bIsCollapsed) == 16, "Offset mismatch for FJunoJournalCategoryFastEntry::bIsCollapsed");

// /Script/JunoJournal.JunoJournalCategoryTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoJournalCategoryTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CategoryTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Title[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t FoundInBiome[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargeImage[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t SortOrder; // 0x0080 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoJournalCategoryTableRow, CategoryTag) == 8, "Offset mismatch for FJunoJournalCategoryTableRow::CategoryTag");
static_assert(offsetof(FJunoJournalCategoryTableRow, Title) == 16, "Offset mismatch for FJunoJournalCategoryTableRow::Title");
static_assert(offsetof(FJunoJournalCategoryTableRow, FoundInBiome) == 32, "Offset mismatch for FJunoJournalCategoryTableRow::FoundInBiome");
static_assert(offsetof(FJunoJournalCategoryTableRow, Description) == 48, "Offset mismatch for FJunoJournalCategoryTableRow::Description");
static_assert(offsetof(FJunoJournalCategoryTableRow, Icon) == 64, "Offset mismatch for FJunoJournalCategoryTableRow::Icon");
static_assert(offsetof(FJunoJournalCategoryTableRow, LargeImage) == 96, "Offset mismatch for FJunoJournalCategoryTableRow::LargeImage");
static_assert(offsetof(FJunoJournalCategoryTableRow, SortOrder) == 128, "Offset mismatch for FJunoJournalCategoryTableRow::SortOrder");

// /Script/JunoJournal.JunoJournalEntryFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FJunoJournalEntryFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComp; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoJournalEntryFastArray, Entries) == 72, "Offset mismatch for FJunoJournalEntryFastArray::Entries");
static_assert(offsetof(FJunoJournalEntryFastArray, ParentComp) == 88, "Offset mismatch for FJunoJournalEntryFastArray::ParentComp");

// /Script/JunoJournal.JunoJournalSaveRecord
// Kind: ScriptStruct; super: none
struct FJunoJournalSaveRecord
{
public:
    TMap<void*, void*> TaskStates; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoJournalSaveRecord, TaskStates) == 0, "Offset mismatch for FJunoJournalSaveRecord::TaskStates");

// /Script/JunoJournal.JunoJournalTaskPrereq
// Kind: ScriptStruct; super: none
struct FJunoJournalTaskPrereq
{
public:
    std::uint8_t bIsCompleted; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoJournalTaskPrereq, bIsCompleted) == 0, "Offset mismatch for FJunoJournalTaskPrereq::bIsCompleted");

// /Script/JunoJournal.JunoJournalTaskPrereqSaveEntry
// Kind: ScriptStruct; super: none
struct FJunoJournalTaskPrereqSaveEntry
{
public:
    std::uint8_t bIsCompleted; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t QuestProgress[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoJournalTaskPrereqSaveEntry, bIsCompleted) == 0, "Offset mismatch for FJunoJournalTaskPrereqSaveEntry::bIsCompleted");
static_assert(offsetof(FJunoJournalTaskPrereqSaveEntry, QuestProgress) == 8, "Offset mismatch for FJunoJournalTaskPrereqSaveEntry::QuestProgress");

// /Script/JunoJournal.JunoJournalTaskSaveEntry
// Kind: ScriptStruct; super: none
struct FJunoJournalTaskSaveEntry
{
public:
    std::uint8_t TaskState; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> Prereqs; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t TimesCompleted; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t StateWhenAutoHidden; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    std::uint8_t RevealedTime[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t RuntimeTaskTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoJournalTaskSaveEntry, TaskState) == 0, "Offset mismatch for FJunoJournalTaskSaveEntry::TaskState");
static_assert(offsetof(FJunoJournalTaskSaveEntry, Prereqs) == 8, "Offset mismatch for FJunoJournalTaskSaveEntry::Prereqs");
static_assert(offsetof(FJunoJournalTaskSaveEntry, TimesCompleted) == 24, "Offset mismatch for FJunoJournalTaskSaveEntry::TimesCompleted");
static_assert(offsetof(FJunoJournalTaskSaveEntry, StateWhenAutoHidden) == 28, "Offset mismatch for FJunoJournalTaskSaveEntry::StateWhenAutoHidden");
static_assert(offsetof(FJunoJournalTaskSaveEntry, RevealedTime) == 32, "Offset mismatch for FJunoJournalTaskSaveEntry::RevealedTime");
static_assert(offsetof(FJunoJournalTaskSaveEntry, RuntimeTaskTags) == 40, "Offset mismatch for FJunoJournalTaskSaveEntry::RuntimeTaskTags");

// /Script/JunoJournal.JunoJournalTaskServerState
// Kind: ScriptStruct; super: none
struct FJunoJournalTaskServerState
{
public:
    TArray<void*> Prereqs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoJournalTaskServerState, Prereqs) == 0, "Offset mismatch for FJunoJournalTaskServerState::Prereqs");

// /Script/JunoJournal.JunoJournalTaskStateFastEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FJunoJournalTaskStateFastEntry
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t TaskRowName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t State; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t RevealedTime[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t RuntimeTaskTags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t bShowTaskCompletedToastWhenHidden; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoJournalTaskStateFastEntry, TaskRowName) == 12, "Offset mismatch for FJunoJournalTaskStateFastEntry::TaskRowName");
static_assert(offsetof(FJunoJournalTaskStateFastEntry, State) == 16, "Offset mismatch for FJunoJournalTaskStateFastEntry::State");
static_assert(offsetof(FJunoJournalTaskStateFastEntry, RevealedTime) == 24, "Offset mismatch for FJunoJournalTaskStateFastEntry::RevealedTime");
static_assert(offsetof(FJunoJournalTaskStateFastEntry, RuntimeTaskTags) == 32, "Offset mismatch for FJunoJournalTaskStateFastEntry::RuntimeTaskTags");
static_assert(offsetof(FJunoJournalTaskStateFastEntry, bShowTaskCompletedToastWhenHidden) == 64, "Offset mismatch for FJunoJournalTaskStateFastEntry::bShowTaskCompletedToastWhenHidden");

// /Script/JunoJournal.JunoJournalTaskTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoJournalTaskTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t SunriseVersion[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t SunsetVersion[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t CategoryTag[0x4]; // 0x0014 (Size: 0x4, Type: StructProperty)
    std::uint8_t Title[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t LargeImage[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CustomIcon[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bHidePrereqs; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0089
    std::uint8_t JournalSourceTag[0x4]; // 0x008C (Size: 0x4, Type: StructProperty)
    std::uint8_t AdditionalImage[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t UIJournalTypeTag[0x4]; // 0x00B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bHasHUDPromt; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00B5
    std::uint8_t PromptPrimaryText[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t PromptSecondaryText[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t WorldActorTagsToHighlight[0x20]; // 0x00D8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsRepeatable; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanAbandon; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceTrackOnReveal; // 0x00FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x00FB
    std::int32_t AutoTrackingPriority; // 0x00FC (Size: 0x4, Type: IntProperty)
    TArray<void*> Prerequistites; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHideWhenComplete; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRevealNextTaskOnComplete; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0112
    std::uint8_t NextTaskRowName[0x4]; // 0x0114 (Size: 0x4, Type: NameProperty)
    std::uint8_t SourceActorGameplayTag[0x4]; // 0x0118 (Size: 0x4, Type: StructProperty)
    std::uint8_t ReactionGrantType; // 0x011C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x011D
    TArray<void*> CompletionReactions; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConditionsForAutoRevealOrHide[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t bForceAutoComplete; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHideToasts; // 0x0159 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x6]; // 0x015A
    std::uint8_t ConditionsForAutoCompleteOnReveal[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShowTaskCompletedToastWhenAutoHidden; // 0x0188 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoJournalTaskTableRow, bEnabled) == 8, "Offset mismatch for FJunoJournalTaskTableRow::bEnabled");
static_assert(offsetof(FJunoJournalTaskTableRow, SunriseVersion) == 12, "Offset mismatch for FJunoJournalTaskTableRow::SunriseVersion");
static_assert(offsetof(FJunoJournalTaskTableRow, SunsetVersion) == 16, "Offset mismatch for FJunoJournalTaskTableRow::SunsetVersion");
static_assert(offsetof(FJunoJournalTaskTableRow, CategoryTag) == 20, "Offset mismatch for FJunoJournalTaskTableRow::CategoryTag");
static_assert(offsetof(FJunoJournalTaskTableRow, Title) == 24, "Offset mismatch for FJunoJournalTaskTableRow::Title");
static_assert(offsetof(FJunoJournalTaskTableRow, ShortDescription) == 40, "Offset mismatch for FJunoJournalTaskTableRow::ShortDescription");
static_assert(offsetof(FJunoJournalTaskTableRow, Description) == 56, "Offset mismatch for FJunoJournalTaskTableRow::Description");
static_assert(offsetof(FJunoJournalTaskTableRow, LargeImage) == 72, "Offset mismatch for FJunoJournalTaskTableRow::LargeImage");
static_assert(offsetof(FJunoJournalTaskTableRow, CustomIcon) == 104, "Offset mismatch for FJunoJournalTaskTableRow::CustomIcon");
static_assert(offsetof(FJunoJournalTaskTableRow, bHidePrereqs) == 136, "Offset mismatch for FJunoJournalTaskTableRow::bHidePrereqs");
static_assert(offsetof(FJunoJournalTaskTableRow, JournalSourceTag) == 140, "Offset mismatch for FJunoJournalTaskTableRow::JournalSourceTag");
static_assert(offsetof(FJunoJournalTaskTableRow, AdditionalImage) == 144, "Offset mismatch for FJunoJournalTaskTableRow::AdditionalImage");
static_assert(offsetof(FJunoJournalTaskTableRow, UIJournalTypeTag) == 176, "Offset mismatch for FJunoJournalTaskTableRow::UIJournalTypeTag");
static_assert(offsetof(FJunoJournalTaskTableRow, bHasHUDPromt) == 180, "Offset mismatch for FJunoJournalTaskTableRow::bHasHUDPromt");
static_assert(offsetof(FJunoJournalTaskTableRow, PromptPrimaryText) == 184, "Offset mismatch for FJunoJournalTaskTableRow::PromptPrimaryText");
static_assert(offsetof(FJunoJournalTaskTableRow, PromptSecondaryText) == 200, "Offset mismatch for FJunoJournalTaskTableRow::PromptSecondaryText");
static_assert(offsetof(FJunoJournalTaskTableRow, WorldActorTagsToHighlight) == 216, "Offset mismatch for FJunoJournalTaskTableRow::WorldActorTagsToHighlight");
static_assert(offsetof(FJunoJournalTaskTableRow, bIsRepeatable) == 248, "Offset mismatch for FJunoJournalTaskTableRow::bIsRepeatable");
static_assert(offsetof(FJunoJournalTaskTableRow, bCanAbandon) == 249, "Offset mismatch for FJunoJournalTaskTableRow::bCanAbandon");
static_assert(offsetof(FJunoJournalTaskTableRow, bForceTrackOnReveal) == 250, "Offset mismatch for FJunoJournalTaskTableRow::bForceTrackOnReveal");
static_assert(offsetof(FJunoJournalTaskTableRow, AutoTrackingPriority) == 252, "Offset mismatch for FJunoJournalTaskTableRow::AutoTrackingPriority");
static_assert(offsetof(FJunoJournalTaskTableRow, Prerequistites) == 256, "Offset mismatch for FJunoJournalTaskTableRow::Prerequistites");
static_assert(offsetof(FJunoJournalTaskTableRow, bHideWhenComplete) == 272, "Offset mismatch for FJunoJournalTaskTableRow::bHideWhenComplete");
static_assert(offsetof(FJunoJournalTaskTableRow, bRevealNextTaskOnComplete) == 273, "Offset mismatch for FJunoJournalTaskTableRow::bRevealNextTaskOnComplete");
static_assert(offsetof(FJunoJournalTaskTableRow, NextTaskRowName) == 276, "Offset mismatch for FJunoJournalTaskTableRow::NextTaskRowName");
static_assert(offsetof(FJunoJournalTaskTableRow, SourceActorGameplayTag) == 280, "Offset mismatch for FJunoJournalTaskTableRow::SourceActorGameplayTag");
static_assert(offsetof(FJunoJournalTaskTableRow, ReactionGrantType) == 284, "Offset mismatch for FJunoJournalTaskTableRow::ReactionGrantType");
static_assert(offsetof(FJunoJournalTaskTableRow, CompletionReactions) == 288, "Offset mismatch for FJunoJournalTaskTableRow::CompletionReactions");
static_assert(offsetof(FJunoJournalTaskTableRow, ConditionsForAutoRevealOrHide) == 304, "Offset mismatch for FJunoJournalTaskTableRow::ConditionsForAutoRevealOrHide");
static_assert(offsetof(FJunoJournalTaskTableRow, bForceAutoComplete) == 344, "Offset mismatch for FJunoJournalTaskTableRow::bForceAutoComplete");
static_assert(offsetof(FJunoJournalTaskTableRow, bHideToasts) == 345, "Offset mismatch for FJunoJournalTaskTableRow::bHideToasts");
static_assert(offsetof(FJunoJournalTaskTableRow, ConditionsForAutoCompleteOnReveal) == 352, "Offset mismatch for FJunoJournalTaskTableRow::ConditionsForAutoCompleteOnReveal");
static_assert(offsetof(FJunoJournalTaskTableRow, bShowTaskCompletedToastWhenAutoHidden) == 392, "Offset mismatch for FJunoJournalTaskTableRow::bShowTaskCompletedToastWhenAutoHidden");

// /Script/JunoJournal.JunoJournalTaskUpdateData
// Kind: ScriptStruct; super: none
struct FJunoJournalTaskUpdateData
{
public:
    std::uint8_t TaskRowName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t TaskState; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoJournalTaskUpdateData, TaskRowName) == 0, "Offset mismatch for FJunoJournalTaskUpdateData::TaskRowName");
static_assert(offsetof(FJunoJournalTaskUpdateData, TaskState) == 4, "Offset mismatch for FJunoJournalTaskUpdateData::TaskState");

// /Script/JunoJournal.JunoJournalTaskUpdatedMessage
// Kind: ScriptStruct; super: none
struct FJunoJournalTaskUpdatedMessage
{
public:
    TArray<void*> UpdatedTasks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> JournalComponent; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoJournalTaskUpdatedMessage, UpdatedTasks) == 0, "Offset mismatch for FJunoJournalTaskUpdatedMessage::UpdatedTasks");
static_assert(offsetof(FJunoJournalTaskUpdatedMessage, JournalComponent) == 16, "Offset mismatch for FJunoJournalTaskUpdatedMessage::JournalComponent");

// /Script/JunoJournal.JunoJournalTaskViewedMessage
// Kind: ScriptStruct; super: none
struct FJunoJournalTaskViewedMessage
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TaskName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsViewed; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoJournalTaskViewedMessage, PlayerState) == 0, "Offset mismatch for FJunoJournalTaskViewedMessage::PlayerState");
static_assert(offsetof(FJunoJournalTaskViewedMessage, TaskName) == 8, "Offset mismatch for FJunoJournalTaskViewedMessage::TaskName");
static_assert(offsetof(FJunoJournalTaskViewedMessage, bIsViewed) == 12, "Offset mismatch for FJunoJournalTaskViewedMessage::bIsViewed");

// /Script/JunoJournal.JunoJournalViewedTaskFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FJunoJournalViewedTaskFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComp; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoJournalViewedTaskFastArray, Entries) == 72, "Offset mismatch for FJunoJournalViewedTaskFastArray::Entries");
static_assert(offsetof(FJunoJournalViewedTaskFastArray, ParentComp) == 88, "Offset mismatch for FJunoJournalViewedTaskFastArray::ParentComp");

// /Script/JunoJournal.JunoJournalViewedTaskFastEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FJunoJournalViewedTaskFastEntry
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    FName ViewedTaskName; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoJournalViewedTaskFastEntry, ViewedTaskName) == 12, "Offset mismatch for FJunoJournalViewedTaskFastEntry::ViewedTaskName");

// /Script/JunoJournal.JunoOpenContractsMenuMessage
// Kind: ScriptStruct; super: none
struct FJunoOpenContractsMenuMessage
{
public:
    TWeakObjectPtr<void> JournalSource; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoOpenContractsMenuMessage, JournalSource) == 0, "Offset mismatch for FJunoOpenContractsMenuMessage::JournalSource");

// /Script/JunoJournal.JunoPlayerJournalSaveData
// Kind: ScriptStruct; super: none
struct FJunoPlayerJournalSaveData
{
public:
    TArray<void*> ViewedTasks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    FName TrackedTaskName; // 0x0010 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> CollapsedCategories; // 0x0018 (Size: 0x10, Type: MapProperty)
    std::uint8_t PlayerJournalRecord[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPlayerJournalSaveData, ViewedTasks) == 0, "Offset mismatch for FJunoPlayerJournalSaveData::ViewedTasks");
static_assert(offsetof(FJunoPlayerJournalSaveData, TrackedTaskName) == 16, "Offset mismatch for FJunoPlayerJournalSaveData::TrackedTaskName");
static_assert(offsetof(FJunoPlayerJournalSaveData, CollapsedCategories) == 24, "Offset mismatch for FJunoPlayerJournalSaveData::CollapsedCategories");
static_assert(offsetof(FJunoPlayerJournalSaveData, PlayerJournalRecord) == 40, "Offset mismatch for FJunoPlayerJournalSaveData::PlayerJournalRecord");

// /Script/JunoJournal.JunoTaskPrereqBase
// Kind: ScriptStruct; super: none
struct FJunoTaskPrereqBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoJournal.JunoTaskPrereqQuest
// Kind: ScriptStruct; super: JunoTaskPrereqBase
struct FJunoTaskPrereqQuest
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> QuestDef; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoTaskPrereqQuest, QuestDef) == 8, "Offset mismatch for FJunoTaskPrereqQuest::QuestDef");

// /Script/JunoJournal.JunoTaskPrereqTownbuilder
// Kind: ScriptStruct; super: JunoTaskPrereqBase
struct FJunoTaskPrereqTownbuilder
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TitleOverride[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t Type; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    std::uint8_t CampTagConfigKey[0x4]; // 0x001C (Size: 0x4, Type: StructProperty)
    std::uint8_t AwesomeLevelIndex; // 0x0020 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0021
    std::uint8_t UpgradeStepIdentifer[0x1]; // 0x0024 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoTaskPrereqTownbuilder, TitleOverride) == 8, "Offset mismatch for FJunoTaskPrereqTownbuilder::TitleOverride");
static_assert(offsetof(FJunoTaskPrereqTownbuilder, Type) == 24, "Offset mismatch for FJunoTaskPrereqTownbuilder::Type");
static_assert(offsetof(FJunoTaskPrereqTownbuilder, CampTagConfigKey) == 28, "Offset mismatch for FJunoTaskPrereqTownbuilder::CampTagConfigKey");
static_assert(offsetof(FJunoTaskPrereqTownbuilder, AwesomeLevelIndex) == 32, "Offset mismatch for FJunoTaskPrereqTownbuilder::AwesomeLevelIndex");
static_assert(offsetof(FJunoTaskPrereqTownbuilder, UpgradeStepIdentifer) == 36, "Offset mismatch for FJunoTaskPrereqTownbuilder::UpgradeStepIdentifer");

// /Script/JunoJournal.JunoVerbFilter_JournalTaskUpdate
// Kind: ScriptStruct; super: ObjectiveFilter
struct FJunoVerbFilter_JournalTaskUpdate
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t SourceActorGameplayTag[0x4]; // 0x00A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t TaskState; // 0x00A4 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoVerbFilter_JournalTaskUpdate, SourceActorGameplayTag) == 160, "Offset mismatch for FJunoVerbFilter_JournalTaskUpdate::SourceActorGameplayTag");
static_assert(offsetof(FJunoVerbFilter_JournalTaskUpdate, TaskState) == 164, "Offset mismatch for FJunoVerbFilter_JournalTaskUpdate::TaskState");

// /Script/JunoJournal.JunoVerbMessage_JournalTaskUpdate
// Kind: ScriptStruct; super: VerbMessage
struct FJunoVerbMessage_JournalTaskUpdate
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t SourceActorGameplayTag[0x4]; // 0x0078 (Size: 0x4, Type: StructProperty)
    std::uint8_t TaskState; // 0x007C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoVerbMessage_JournalTaskUpdate, SourceActorGameplayTag) == 120, "Offset mismatch for FJunoVerbMessage_JournalTaskUpdate::SourceActorGameplayTag");
static_assert(offsetof(FJunoVerbMessage_JournalTaskUpdate, TaskState) == 124, "Offset mismatch for FJunoVerbMessage_JournalTaskUpdate::TaskState");

// /Script/JunoJournal.JunoWorldConditionJournalTaskState
// Kind: ScriptStruct; super: WorldConditionCommonBase
struct FJunoWorldConditionJournalTaskState
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PlayerControllerRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t JournalTaskName[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t RequiredState; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t JournalType; // 0x001D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoWorldConditionJournalTaskState, PlayerControllerRef) == 16, "Offset mismatch for FJunoWorldConditionJournalTaskState::PlayerControllerRef");
static_assert(offsetof(FJunoWorldConditionJournalTaskState, JournalTaskName) == 24, "Offset mismatch for FJunoWorldConditionJournalTaskState::JournalTaskName");
static_assert(offsetof(FJunoWorldConditionJournalTaskState, RequiredState) == 28, "Offset mismatch for FJunoWorldConditionJournalTaskState::RequiredState");
static_assert(offsetof(FJunoWorldConditionJournalTaskState, JournalType) == 29, "Offset mismatch for FJunoWorldConditionJournalTaskState::JournalType");

// /Script/JunoJournal.JunoWorldJournalPersistenceFeatureData_InGameClass_PersistentInfo
// Kind: ScriptStruct; super: none
struct FJunoWorldJournalPersistenceFeatureData_InGameClass_PersistentInfo
{
public:
    std::uint8_t JournalSaveData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldJournalPersistenceFeatureData_InGameClass_PersistentInfo, JournalSaveData) == 0, "Offset mismatch for FJunoWorldJournalPersistenceFeatureData_InGameClass_PersistentInfo::JournalSaveData");

// /Script/JunoJournal.JunoWorldJournalSaveData
// Kind: ScriptStruct; super: none
struct FJunoWorldJournalSaveData
{
public:
    std::uint8_t WorldJournalRecord[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWorldJournalSaveData, WorldJournalRecord) == 0, "Offset mismatch for FJunoWorldJournalSaveData::WorldJournalRecord");

// /Script/JunoJournal.JunoGameFrameworkComponent_Journal
// Kind: Class; super: GameFrameworkComponent
class UJunoGameFrameworkComponent_Journal
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> AutoCompleteTaskNames; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ReplicatedTaskState[0x90]; // 0x00D0 (Size: 0x90, Type: StructProperty)
    std::uint8_t ServerActiveTasksContainer[0x40]; // 0x0160 (Size: 0x40, Type: StructProperty)
    std::uint8_t AccountRewardReconciler[0x29]; // 0x01A0 (Size: 0x29, Type: StructProperty)
    std::uint8_t bPersistenceEnabled; // 0x01C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1A]; // 0x01CA
    std::uint8_t JournalTaskRegistry[0x4]; // 0x01E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t AbandonAllowedTime[0x1]; // 0x01E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoGameFrameworkComponent_Journal, AutoCompleteTaskNames) == 192, "Offset mismatch for UJunoGameFrameworkComponent_Journal::AutoCompleteTaskNames");
static_assert(offsetof(UJunoGameFrameworkComponent_Journal, ReplicatedTaskState) == 208, "Offset mismatch for UJunoGameFrameworkComponent_Journal::ReplicatedTaskState");
static_assert(offsetof(UJunoGameFrameworkComponent_Journal, ServerActiveTasksContainer) == 352, "Offset mismatch for UJunoGameFrameworkComponent_Journal::ServerActiveTasksContainer");
static_assert(offsetof(UJunoGameFrameworkComponent_Journal, AccountRewardReconciler) == 416, "Offset mismatch for UJunoGameFrameworkComponent_Journal::AccountRewardReconciler");
static_assert(offsetof(UJunoGameFrameworkComponent_Journal, bPersistenceEnabled) == 457, "Offset mismatch for UJunoGameFrameworkComponent_Journal::bPersistenceEnabled");
static_assert(offsetof(UJunoGameFrameworkComponent_Journal, JournalTaskRegistry) == 484, "Offset mismatch for UJunoGameFrameworkComponent_Journal::JournalTaskRegistry");
static_assert(offsetof(UJunoGameFrameworkComponent_Journal, AbandonAllowedTime) == 488, "Offset mismatch for UJunoGameFrameworkComponent_Journal::AbandonAllowedTime");

// /Script/JunoJournal.JunoGameStateComponent_Journal
// Kind: Class; super: JunoGameFrameworkComponent_Journal
class UJunoGameStateComponent_Journal
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> AutoCompleteTaskNames; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ReplicatedTaskState[0x90]; // 0x00D0 (Size: 0x90, Type: StructProperty)
    std::uint8_t ServerActiveTasksContainer[0x40]; // 0x0160 (Size: 0x40, Type: StructProperty)
    std::uint8_t AccountRewardReconciler[0x29]; // 0x01A0 (Size: 0x29, Type: StructProperty)
    std::uint8_t bPersistenceEnabled; // 0x01C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1A]; // 0x01CA
    std::uint8_t JournalTaskRegistry[0x4]; // 0x01E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t AbandonAllowedTime[0x1]; // 0x01E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoGameStateComponent_Journal, AutoCompleteTaskNames) == 192, "Offset mismatch for UJunoGameStateComponent_Journal::AutoCompleteTaskNames");
static_assert(offsetof(UJunoGameStateComponent_Journal, ReplicatedTaskState) == 208, "Offset mismatch for UJunoGameStateComponent_Journal::ReplicatedTaskState");
static_assert(offsetof(UJunoGameStateComponent_Journal, ServerActiveTasksContainer) == 352, "Offset mismatch for UJunoGameStateComponent_Journal::ServerActiveTasksContainer");
static_assert(offsetof(UJunoGameStateComponent_Journal, AccountRewardReconciler) == 416, "Offset mismatch for UJunoGameStateComponent_Journal::AccountRewardReconciler");
static_assert(offsetof(UJunoGameStateComponent_Journal, bPersistenceEnabled) == 457, "Offset mismatch for UJunoGameStateComponent_Journal::bPersistenceEnabled");
static_assert(offsetof(UJunoGameStateComponent_Journal, JournalTaskRegistry) == 484, "Offset mismatch for UJunoGameStateComponent_Journal::JournalTaskRegistry");
static_assert(offsetof(UJunoGameStateComponent_Journal, AbandonAllowedTime) == 488, "Offset mismatch for UJunoGameStateComponent_Journal::AbandonAllowedTime");

// /Script/JunoJournal.JunoJournalAnalytics
// Kind: Class; super: Object
class UJunoJournalAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoJournal.JunoJournalCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoJournalCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoJournal.JunoJournalSourceComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoJournalSourceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t JournalSourceActorTag[0x4]; // 0x00C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t JournalTaskRegistry[0x4]; // 0x00C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t MaxGrantCount[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoJournalSourceComponent, JournalSourceActorTag) == 192, "Offset mismatch for UJunoJournalSourceComponent::JournalSourceActorTag");
static_assert(offsetof(UJunoJournalSourceComponent, JournalTaskRegistry) == 196, "Offset mismatch for UJunoJournalSourceComponent::JournalTaskRegistry");
static_assert(offsetof(UJunoJournalSourceComponent, MaxGrantCount) == 200, "Offset mismatch for UJunoJournalSourceComponent::MaxGrantCount");

// /Script/JunoJournal.JunoJournalWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class UJunoJournalWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoJournalWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UJunoJournalWorldConditionSchema::ContextDataDescs");

// /Script/JunoJournal.JunoPlayerJournalPersistenceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoPlayerJournalPersistenceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPlayerJournalPersistenceComponent, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UJunoPlayerJournalPersistenceComponent::OnMeshNetworkReady_BP");
static_assert(offsetof(UJunoPlayerJournalPersistenceComponent, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UJunoPlayerJournalPersistenceComponent::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UJunoPlayerJournalPersistenceComponent, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UJunoPlayerJournalPersistenceComponent::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UJunoPlayerJournalPersistenceComponent, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UJunoPlayerJournalPersistenceComponent::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UJunoPlayerJournalPersistenceComponent, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UJunoPlayerJournalPersistenceComponent::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UJunoPlayerJournalPersistenceComponent, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UJunoPlayerJournalPersistenceComponent::bSubscribeToMeshNetwork");

// /Script/JunoJournal.JunoPlayerJournalPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoPlayerJournalPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoPlayerJournalPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoPlayerJournalPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoPlayerJournalPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoPlayerJournalPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoPlayerJournalPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoPlayerJournalPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoPlayerJournalPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoPlayerJournalPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoPlayerJournalPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoPlayerJournalPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPlayerJournalPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoPlayerJournalPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPlayerJournalPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoPlayerJournalPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoPlayerJournalPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoPlayerJournalPersistenceFeatureModule::Description");

// /Script/JunoJournal.JunoPlayerStateComponent_Journal
// Kind: Class; super: JunoGameFrameworkComponent_Journal
class UJunoPlayerStateComponent_Journal
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> AutoCompleteTaskNames; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ReplicatedTaskState[0x90]; // 0x00D0 (Size: 0x90, Type: StructProperty)
    std::uint8_t ServerActiveTasksContainer[0x40]; // 0x0160 (Size: 0x40, Type: StructProperty)
    std::uint8_t AccountRewardReconciler[0x29]; // 0x01A0 (Size: 0x29, Type: StructProperty)
    std::uint8_t bPersistenceEnabled; // 0x01C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1A]; // 0x01CA
    std::uint8_t JournalTaskRegistry[0x4]; // 0x01E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t AbandonAllowedTime[0x1]; // 0x01E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPlayerStateComponent_Journal, AutoCompleteTaskNames) == 192, "Offset mismatch for UJunoPlayerStateComponent_Journal::AutoCompleteTaskNames");
static_assert(offsetof(UJunoPlayerStateComponent_Journal, ReplicatedTaskState) == 208, "Offset mismatch for UJunoPlayerStateComponent_Journal::ReplicatedTaskState");
static_assert(offsetof(UJunoPlayerStateComponent_Journal, ServerActiveTasksContainer) == 352, "Offset mismatch for UJunoPlayerStateComponent_Journal::ServerActiveTasksContainer");
static_assert(offsetof(UJunoPlayerStateComponent_Journal, AccountRewardReconciler) == 416, "Offset mismatch for UJunoPlayerStateComponent_Journal::AccountRewardReconciler");
static_assert(offsetof(UJunoPlayerStateComponent_Journal, bPersistenceEnabled) == 457, "Offset mismatch for UJunoPlayerStateComponent_Journal::bPersistenceEnabled");
static_assert(offsetof(UJunoPlayerStateComponent_Journal, JournalTaskRegistry) == 484, "Offset mismatch for UJunoPlayerStateComponent_Journal::JournalTaskRegistry");
static_assert(offsetof(UJunoPlayerStateComponent_Journal, AbandonAllowedTime) == 488, "Offset mismatch for UJunoPlayerStateComponent_Journal::AbandonAllowedTime");

// /Script/JunoJournal.JunoPlayerStateComponent_JournalUserData
// Kind: Class; super: PlayerStateComponent
class UJunoPlayerStateComponent_JournalUserData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t ReplicatedViewedTasks[0x60]; // 0x00E0 (Size: 0x60, Type: StructProperty)
    FName TrackedTaskName; // 0x0140 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0148
    std::uint8_t ReplicatedCategories[0x68]; // 0x0158 (Size: 0x68, Type: StructProperty)
    std::uint8_t bIsInitialized; // 0x01C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPlayerStateComponent_JournalUserData, ReplicatedViewedTasks) == 224, "Offset mismatch for UJunoPlayerStateComponent_JournalUserData::ReplicatedViewedTasks");
static_assert(offsetof(UJunoPlayerStateComponent_JournalUserData, TrackedTaskName) == 320, "Offset mismatch for UJunoPlayerStateComponent_JournalUserData::TrackedTaskName");
static_assert(offsetof(UJunoPlayerStateComponent_JournalUserData, ReplicatedCategories) == 344, "Offset mismatch for UJunoPlayerStateComponent_JournalUserData::ReplicatedCategories");
static_assert(offsetof(UJunoPlayerStateComponent_JournalUserData, bIsInitialized) == 448, "Offset mismatch for UJunoPlayerStateComponent_JournalUserData::bIsInitialized");

// /Script/JunoJournal.JunoVerbProcessor_JournalTaskUpdate
// Kind: Class; super: FortObjectiveProcessor
class UJunoVerbProcessor_JournalTaskUpdate
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVerbProcessor_JournalTaskUpdate, OwningProcessorSubsystem) == 56, "Offset mismatch for UJunoVerbProcessor_JournalTaskUpdate::OwningProcessorSubsystem");

// /Script/JunoJournal.JunoWorldJournalPersistenceFeatureData
// Kind: Class; super: JunoBasePFWPersistenceFeatureData
class UJunoWorldJournalPersistenceFeatureData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t JournalSaveData[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData, JournalSaveData) == 88, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData::JournalSaveData");

// /Script/JunoJournal.JunoWorldJournalPersistenceFeatureData_Container
// Kind: Class; super: JunoBasePFWPersistenceFeatureDataContainer
class UJunoWorldJournalPersistenceFeatureData_Container
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, GameplayTagContainer) == 40, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::GameplayTagContainer");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, RestoreVersionInfo) == 72, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::RestoreVersionInfo");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, SupportedVersionsTable) == 88, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::SupportedVersionsTable");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, RestoreAttemptCount) == 120, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::RestoreAttemptCount");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, SaveAttemptCount) == 128, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::SaveAttemptCount");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, DeleteAttemptCount) == 136, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::DeleteAttemptCount");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, ServiceData) == 144, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::ServiceData");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, BackendRequestsQueue) == 152, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::BackendRequestsQueue");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, PersistentClassName) == 160, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::PersistentClassName");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, PersistentName) == 168, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::PersistentName");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, Description) == 216, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::Description");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureData_Container, DeinitProcess) == 248, "Offset mismatch for UJunoWorldJournalPersistenceFeatureData_Container::DeinitProcess");

// /Script/JunoJournal.JunoWorldJournalPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoWorldJournalPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoWorldJournalPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoWorldJournalPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoWorldJournalPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoWorldJournalPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoWorldJournalPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoWorldJournalPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoWorldJournalPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoWorldJournalPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoWorldJournalPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoWorldJournalPersistenceFeatureModule::Description");
