/**
 * decamp dumper generated SDK
 * Package: /Script/UIStateTree
 */
#pragma once
#include "Basic.h"

// /Script/UIStateTree.UIStateTreeAnimationHintRecord
// Kind: ScriptStruct; super: none
struct FUIStateTreeAnimationHintRecord
{
public:
    std::uint8_t AnimationHints[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t IncompatibleAnimationHints[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint64_t ProcessedFrame; // 0x0040 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FUIStateTreeAnimationHintRecord, AnimationHints) == 0, "Offset mismatch for FUIStateTreeAnimationHintRecord::AnimationHints");
static_assert(offsetof(FUIStateTreeAnimationHintRecord, IncompatibleAnimationHints) == 32, "Offset mismatch for FUIStateTreeAnimationHintRecord::IncompatibleAnimationHints");
static_assert(offsetof(FUIStateTreeAnimationHintRecord, ProcessedFrame) == 64, "Offset mismatch for FUIStateTreeAnimationHintRecord::ProcessedFrame");

// /Script/UIStateTree.UIStateTreeBacktrackTask
// Kind: ScriptStruct; super: UIStateTreeTaskBase
struct FUIStateTreeBacktrackTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIStateTreeBacktrackTask, bTaskEnabled) == 32, "Offset mismatch for FUIStateTreeBacktrackTask::bTaskEnabled");
static_assert(offsetof(FUIStateTreeBacktrackTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FUIStateTreeBacktrackTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FUIStateTreeBacktrackTask, TransitionHandlingPriority) == 34, "Offset mismatch for FUIStateTreeBacktrackTask::TransitionHandlingPriority");

// /Script/UIStateTree.UIStateTreeBacktrackTaskInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreeBacktrackTaskInstanceData
{
public:
    std::uint8_t BacktrackTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsBacktrackRegistered; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUIStateTreeBacktrackTaskInstanceData, BacktrackTag) == 0, "Offset mismatch for FUIStateTreeBacktrackTaskInstanceData::BacktrackTag");
static_assert(offsetof(FUIStateTreeBacktrackTaskInstanceData, bIsBacktrackRegistered) == 4, "Offset mismatch for FUIStateTreeBacktrackTaskInstanceData::bIsBacktrackRegistered");

// /Script/UIStateTree.UIStateTreeBlueprintTaskWrapper
// Kind: ScriptStruct; super: StateTreeBlueprintTaskWrapper
struct FUIStateTreeBlueprintTaskWrapper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TaskClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TaskFlags; // 0x0030 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUIStateTreeBlueprintTaskWrapper, TaskClass) == 40, "Offset mismatch for FUIStateTreeBlueprintTaskWrapper::TaskClass");
static_assert(offsetof(FUIStateTreeBlueprintTaskWrapper, TaskFlags) == 48, "Offset mismatch for FUIStateTreeBlueprintTaskWrapper::TaskFlags");

// /Script/UIStateTree.UIStateTreeHandle
// Kind: ScriptStruct; super: none
struct FUIStateTreeHandle
{
public:
    std::uint32_t HandleValue; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FUIStateTreeHandle, HandleValue) == 0, "Offset mismatch for FUIStateTreeHandle::HandleValue");

// /Script/UIStateTree.UIStateTreeParameterModifierChangeInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreeParameterModifierChangeInstanceData
{
public:
    std::uint8_t ParametersToSet[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> ParametersToClear; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUIStateTreeParameterModifierChangeInstanceData, ParametersToSet) == 0, "Offset mismatch for FUIStateTreeParameterModifierChangeInstanceData::ParametersToSet");
static_assert(offsetof(FUIStateTreeParameterModifierChangeInstanceData, ParametersToClear) == 16, "Offset mismatch for FUIStateTreeParameterModifierChangeInstanceData::ParametersToClear");

// /Script/UIStateTree.UIStateTreeParameterModifierTask
// Kind: ScriptStruct; super: UIStateTreeTaskBase
struct FUIStateTreeParameterModifierTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIStateTreeParameterModifierTask, bTaskEnabled) == 32, "Offset mismatch for FUIStateTreeParameterModifierTask::bTaskEnabled");
static_assert(offsetof(FUIStateTreeParameterModifierTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FUIStateTreeParameterModifierTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FUIStateTreeParameterModifierTask, TransitionHandlingPriority) == 34, "Offset mismatch for FUIStateTreeParameterModifierTask::TransitionHandlingPriority");

// /Script/UIStateTree.UIStateTreeParameterModifierTaskInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreeParameterModifierTaskInstanceData
{
public:
    std::uint8_t StateEnterChanges[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t StateExitChanges[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUIStateTreeParameterModifierTaskInstanceData, StateEnterChanges) == 0, "Offset mismatch for FUIStateTreeParameterModifierTaskInstanceData::StateEnterChanges");
static_assert(offsetof(FUIStateTreeParameterModifierTaskInstanceData, StateExitChanges) == 32, "Offset mismatch for FUIStateTreeParameterModifierTaskInstanceData::StateExitChanges");

// /Script/UIStateTree.UIStateTreePluginChangeInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreePluginChangeInstanceData
{
public:
    FString PluginName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t PluginState; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIStateTreePluginChangeInstanceData, PluginName) == 0, "Offset mismatch for FUIStateTreePluginChangeInstanceData::PluginName");
static_assert(offsetof(FUIStateTreePluginChangeInstanceData, PluginState) == 16, "Offset mismatch for FUIStateTreePluginChangeInstanceData::PluginState");

// /Script/UIStateTree.UIStateTreePluginTask
// Kind: ScriptStruct; super: UIStateTreeTaskBase
struct FUIStateTreePluginTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIStateTreePluginTask, bTaskEnabled) == 32, "Offset mismatch for FUIStateTreePluginTask::bTaskEnabled");
static_assert(offsetof(FUIStateTreePluginTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FUIStateTreePluginTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FUIStateTreePluginTask, TransitionHandlingPriority) == 34, "Offset mismatch for FUIStateTreePluginTask::TransitionHandlingPriority");

// /Script/UIStateTree.UIStateTreePluginTaskInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreePluginTaskInstanceData
{
public:
    TArray<void*> StateEnterChanges; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StateExitChanges; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUIStateTreePluginTaskInstanceData, StateEnterChanges) == 0, "Offset mismatch for FUIStateTreePluginTaskInstanceData::StateEnterChanges");
static_assert(offsetof(FUIStateTreePluginTaskInstanceData, StateExitChanges) == 16, "Offset mismatch for FUIStateTreePluginTaskInstanceData::StateExitChanges");

// /Script/UIStateTree.UIStateTreePreloadTask
// Kind: ScriptStruct; super: UIStateTreeTaskBase
struct FUIStateTreePreloadTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIStateTreePreloadTask, bTaskEnabled) == 32, "Offset mismatch for FUIStateTreePreloadTask::bTaskEnabled");
static_assert(offsetof(FUIStateTreePreloadTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FUIStateTreePreloadTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FUIStateTreePreloadTask, TransitionHandlingPriority) == 34, "Offset mismatch for FUIStateTreePreloadTask::TransitionHandlingPriority");

// /Script/UIStateTree.UIStateTreePreloadTaskInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreePreloadTaskInstanceData
{
public:
    TArray<void*> PreloadAssets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUIStateTreePreloadTaskInstanceData, PreloadAssets) == 0, "Offset mismatch for FUIStateTreePreloadTaskInstanceData::PreloadAssets");

// /Script/UIStateTree.UIStateTreeQueuedTransitionEvent
// Kind: ScriptStruct; super: none
struct FUIStateTreeQueuedTransitionEvent
{
public:
    std::uint8_t AnimationHints[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t IncompatibleAnimationHints[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t TransitionTag[0x4]; // 0x0040 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsBacktrack; // 0x0044 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUIStateTreeQueuedTransitionEvent, AnimationHints) == 0, "Offset mismatch for FUIStateTreeQueuedTransitionEvent::AnimationHints");
static_assert(offsetof(FUIStateTreeQueuedTransitionEvent, IncompatibleAnimationHints) == 32, "Offset mismatch for FUIStateTreeQueuedTransitionEvent::IncompatibleAnimationHints");
static_assert(offsetof(FUIStateTreeQueuedTransitionEvent, TransitionTag) == 64, "Offset mismatch for FUIStateTreeQueuedTransitionEvent::TransitionTag");
static_assert(offsetof(FUIStateTreeQueuedTransitionEvent, bIsBacktrack) == 68, "Offset mismatch for FUIStateTreeQueuedTransitionEvent::bIsBacktrack");

// /Script/UIStateTree.UIStateTreeTaskBase
// Kind: ScriptStruct; super: StateTreeTaskBase
struct FUIStateTreeTaskBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIStateTreeTaskBase, bTaskEnabled) == 32, "Offset mismatch for FUIStateTreeTaskBase::bTaskEnabled");
static_assert(offsetof(FUIStateTreeTaskBase, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FUIStateTreeTaskBase::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FUIStateTreeTaskBase, TransitionHandlingPriority) == 34, "Offset mismatch for FUIStateTreeTaskBase::TransitionHandlingPriority");

// /Script/UIStateTree.UIStateTreeWidgetCacheEntry
// Kind: ScriptStruct; super: none
struct FUIStateTreeWidgetCacheEntry
{
public:
    std::uint8_t WidgetClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> WidgetInstances; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::int32_t InitialInstanceCount; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t DependentTaskCount; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bInitialInstancesArePendingLoad; // 0x0035 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUIStateTreeWidgetCacheEntry, WidgetClass) == 0, "Offset mismatch for FUIStateTreeWidgetCacheEntry::WidgetClass");
static_assert(offsetof(FUIStateTreeWidgetCacheEntry, WidgetInstances) == 32, "Offset mismatch for FUIStateTreeWidgetCacheEntry::WidgetInstances");
static_assert(offsetof(FUIStateTreeWidgetCacheEntry, InitialInstanceCount) == 48, "Offset mismatch for FUIStateTreeWidgetCacheEntry::InitialInstanceCount");
static_assert(offsetof(FUIStateTreeWidgetCacheEntry, DependentTaskCount) == 52, "Offset mismatch for FUIStateTreeWidgetCacheEntry::DependentTaskCount");
static_assert(offsetof(FUIStateTreeWidgetCacheEntry, bInitialInstancesArePendingLoad) == 53, "Offset mismatch for FUIStateTreeWidgetCacheEntry::bInitialInstancesArePendingLoad");

// /Script/UIStateTree.UIStateTreeWidgetCachingEntryInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreeWidgetCachingEntryInstanceData
{
public:
    FName CacheEntryName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t WidgetClass[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    std::int32_t InitialInstanceCount; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUIStateTreeWidgetCachingEntryInstanceData, CacheEntryName) == 0, "Offset mismatch for FUIStateTreeWidgetCachingEntryInstanceData::CacheEntryName");
static_assert(offsetof(FUIStateTreeWidgetCachingEntryInstanceData, WidgetClass) == 8, "Offset mismatch for FUIStateTreeWidgetCachingEntryInstanceData::WidgetClass");
static_assert(offsetof(FUIStateTreeWidgetCachingEntryInstanceData, InitialInstanceCount) == 40, "Offset mismatch for FUIStateTreeWidgetCachingEntryInstanceData::InitialInstanceCount");

// /Script/UIStateTree.UIStateTreeWidgetCachingTask
// Kind: ScriptStruct; super: UIStateTreeTaskBase
struct FUIStateTreeWidgetCachingTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIStateTreeWidgetCachingTask, bTaskEnabled) == 32, "Offset mismatch for FUIStateTreeWidgetCachingTask::bTaskEnabled");
static_assert(offsetof(FUIStateTreeWidgetCachingTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FUIStateTreeWidgetCachingTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FUIStateTreeWidgetCachingTask, TransitionHandlingPriority) == 34, "Offset mismatch for FUIStateTreeWidgetCachingTask::TransitionHandlingPriority");

// /Script/UIStateTree.UIStateTreeWidgetCachingTaskInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreeWidgetCachingTaskInstanceData
{
public:
    TArray<void*> CacheEntries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUIStateTreeWidgetCachingTaskInstanceData, CacheEntries) == 0, "Offset mismatch for FUIStateTreeWidgetCachingTaskInstanceData::CacheEntries");

// /Script/UIStateTree.UIStateTreeWidgetEntryInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreeWidgetEntryInstanceData
{
public:
    std::uint8_t Widget[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::int32_t ZOrder; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsPlayerSpecific; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCacheInstance; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0026
    std::uint8_t CacheEntryName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t bKeepConstructed; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoActivateWidget; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWidgetEnabled; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWidgetAdded; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasWidgetCreatedByTask; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    void* WidgetInstance; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, Widget) == 0, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::Widget");
static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, ZOrder) == 32, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::ZOrder");
static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, bIsPlayerSpecific) == 36, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::bIsPlayerSpecific");
static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, bCacheInstance) == 37, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::bCacheInstance");
static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, CacheEntryName) == 40, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::CacheEntryName");
static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, bKeepConstructed) == 44, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::bKeepConstructed");
static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, bAutoActivateWidget) == 45, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::bAutoActivateWidget");
static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, bIsWidgetEnabled) == 46, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::bIsWidgetEnabled");
static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, bIsWidgetAdded) == 47, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::bIsWidgetAdded");
static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, bWasWidgetCreatedByTask) == 48, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::bWasWidgetCreatedByTask");
static_assert(offsetof(FUIStateTreeWidgetEntryInstanceData, WidgetInstance) == 56, "Offset mismatch for FUIStateTreeWidgetEntryInstanceData::WidgetInstance");

// /Script/UIStateTree.UIStateTreeWidgetSlottingEntryInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreeWidgetSlottingEntryInstanceData
{
public:
    std::uint8_t HostTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Widget[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t Padding[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t bFill; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayerSpecific; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCacheInstance; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x003B
    std::uint8_t CacheEntryName[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    std::uint8_t bKeepConstructed; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoActivateWidget; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWidgetEnabled; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWidgetAdded; // 0x0043 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasWidgetCreatedByTask; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    void* WidgetInstance; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, HostTag) == 0, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::HostTag");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, Widget) == 8, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::Widget");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, Padding) == 40, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::Padding");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, bFill) == 56, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::bFill");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, bIsPlayerSpecific) == 57, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::bIsPlayerSpecific");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, bCacheInstance) == 58, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::bCacheInstance");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, CacheEntryName) == 60, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::CacheEntryName");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, bKeepConstructed) == 64, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::bKeepConstructed");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, bAutoActivateWidget) == 65, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::bAutoActivateWidget");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, bIsWidgetEnabled) == 66, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::bIsWidgetEnabled");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, bIsWidgetAdded) == 67, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::bIsWidgetAdded");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, bWasWidgetCreatedByTask) == 68, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::bWasWidgetCreatedByTask");
static_assert(offsetof(FUIStateTreeWidgetSlottingEntryInstanceData, WidgetInstance) == 72, "Offset mismatch for FUIStateTreeWidgetSlottingEntryInstanceData::WidgetInstance");

// /Script/UIStateTree.UIStateTreeWidgetSlottingTask
// Kind: ScriptStruct; super: UIStateTreeTaskBase
struct FUIStateTreeWidgetSlottingTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIStateTreeWidgetSlottingTask, bTaskEnabled) == 32, "Offset mismatch for FUIStateTreeWidgetSlottingTask::bTaskEnabled");
static_assert(offsetof(FUIStateTreeWidgetSlottingTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FUIStateTreeWidgetSlottingTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FUIStateTreeWidgetSlottingTask, TransitionHandlingPriority) == 34, "Offset mismatch for FUIStateTreeWidgetSlottingTask::TransitionHandlingPriority");

// /Script/UIStateTree.UIStateTreeWidgetSlottingTaskInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreeWidgetSlottingTaskInstanceData
{
public:
    TArray<void*> Widgets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsTaskActive; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUIStateTreeWidgetSlottingTaskInstanceData, Widgets) == 0, "Offset mismatch for FUIStateTreeWidgetSlottingTaskInstanceData::Widgets");
static_assert(offsetof(FUIStateTreeWidgetSlottingTaskInstanceData, bIsTaskActive) == 16, "Offset mismatch for FUIStateTreeWidgetSlottingTaskInstanceData::bIsTaskActive");

// /Script/UIStateTree.UIStateTreeWidgetTask
// Kind: ScriptStruct; super: UIStateTreeTaskBase
struct FUIStateTreeWidgetTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIStateTreeWidgetTask, bTaskEnabled) == 32, "Offset mismatch for FUIStateTreeWidgetTask::bTaskEnabled");
static_assert(offsetof(FUIStateTreeWidgetTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FUIStateTreeWidgetTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FUIStateTreeWidgetTask, TransitionHandlingPriority) == 34, "Offset mismatch for FUIStateTreeWidgetTask::TransitionHandlingPriority");

// /Script/UIStateTree.UIStateTreeWidgetTaskInstanceData
// Kind: ScriptStruct; super: none
struct FUIStateTreeWidgetTaskInstanceData
{
public:
    TArray<void*> Widgets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsTaskActive; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUIStateTreeWidgetTaskInstanceData, Widgets) == 0, "Offset mismatch for FUIStateTreeWidgetTaskInstanceData::Widgets");
static_assert(offsetof(FUIStateTreeWidgetTaskInstanceData, bIsTaskActive) == 16, "Offset mismatch for FUIStateTreeWidgetTaskInstanceData::bIsTaskActive");

// /Script/UIStateTree.UIStateTreeAsyncLoader
// Kind: Class; super: Object
class UUIStateTreeAsyncLoader
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PathsToLoad; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0038
    std::uint8_t bHasNewlyCompletedRequests; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUIStateTreeAsyncLoader, PathsToLoad) == 40, "Offset mismatch for UUIStateTreeAsyncLoader::PathsToLoad");
static_assert(offsetof(UUIStateTreeAsyncLoader, bHasNewlyCompletedRequests) == 72, "Offset mismatch for UUIStateTreeAsyncLoader::bHasNewlyCompletedRequests");

// /Script/UIStateTree.UIStateTreeBacktrackRegistry
// Kind: Class; super: Object
class UUIStateTreeBacktrackRegistry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> BacktrackPaths; // 0x0028 (Size: 0x10, Type: MapProperty)
    std::uint8_t CachedSourceState[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    void* Manager; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIStateTreeBacktrackRegistry, BacktrackPaths) == 40, "Offset mismatch for UUIStateTreeBacktrackRegistry::BacktrackPaths");
static_assert(offsetof(UUIStateTreeBacktrackRegistry, CachedSourceState) == 56, "Offset mismatch for UUIStateTreeBacktrackRegistry::CachedSourceState");
static_assert(offsetof(UUIStateTreeBacktrackRegistry, Manager) == 64, "Offset mismatch for UUIStateTreeBacktrackRegistry::Manager");

// /Script/UIStateTree.UIStateTreeBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UUIStateTreeBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UIStateTree.UIStateTreeCheatManager
// Kind: Class; super: CheatManagerExtension
class UUIStateTreeCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UIStateTree.UIStateTreeContext
// Kind: Class; super: Object
class UUIStateTreeContext
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* UIStateTreeManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* WidgetCache; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* AsyncLoader; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIStateTreeContext, UIStateTreeManager) == 56, "Offset mismatch for UUIStateTreeContext::UIStateTreeManager");
static_assert(offsetof(UUIStateTreeContext, WidgetCache) == 64, "Offset mismatch for UUIStateTreeContext::WidgetCache");
static_assert(offsetof(UUIStateTreeContext, AsyncLoader) == 72, "Offset mismatch for UUIStateTreeContext::AsyncLoader");

// /Script/UIStateTree.UIStateTreeExternalDataContext
// Kind: Class; super: Interface
class UUIStateTreeExternalDataContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UIStateTree.UIStateTreeManager
// Kind: Class; super: GameInstanceSubsystem
class UUIStateTreeManager
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate ParametersChangedDynamic; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0048
    void* AsyncLoader; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CommonParameters[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t EmptyParameters[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUIStateTreeManager, ParametersChangedDynamic) == 56, "Offset mismatch for UUIStateTreeManager::ParametersChangedDynamic");
static_assert(offsetof(UUIStateTreeManager, AsyncLoader) == 88, "Offset mismatch for UUIStateTreeManager::AsyncLoader");
static_assert(offsetof(UUIStateTreeManager, CommonParameters) == 96, "Offset mismatch for UUIStateTreeManager::CommonParameters");
static_assert(offsetof(UUIStateTreeManager, EmptyParameters) == 112, "Offset mismatch for UUIStateTreeManager::EmptyParameters");

// /Script/UIStateTree.UIStateTreeManagerEntry
// Kind: Class; super: Object
class UUIStateTreeManagerEntry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* StateTreeAsset; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* BacktrackRegistry; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StateTreeInstanceData[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t StateTreeParameters[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    void* StateTreeManagerPlayer; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> ExternalDataContext; // 0x0060 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UUIStateTreeManagerEntry, StateTreeAsset) == 40, "Offset mismatch for UUIStateTreeManagerEntry::StateTreeAsset");
static_assert(offsetof(UUIStateTreeManagerEntry, BacktrackRegistry) == 48, "Offset mismatch for UUIStateTreeManagerEntry::BacktrackRegistry");
static_assert(offsetof(UUIStateTreeManagerEntry, StateTreeInstanceData) == 56, "Offset mismatch for UUIStateTreeManagerEntry::StateTreeInstanceData");
static_assert(offsetof(UUIStateTreeManagerEntry, StateTreeParameters) == 72, "Offset mismatch for UUIStateTreeManagerEntry::StateTreeParameters");
static_assert(offsetof(UUIStateTreeManagerEntry, StateTreeManagerPlayer) == 88, "Offset mismatch for UUIStateTreeManagerEntry::StateTreeManagerPlayer");
static_assert(offsetof(UUIStateTreeManagerEntry, ExternalDataContext) == 96, "Offset mismatch for UUIStateTreeManagerEntry::ExternalDataContext");

// /Script/UIStateTree.UIStateTreeManagerPlayer
// Kind: Class; super: Object
class UUIStateTreeManagerPlayer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ActiveTreeEntries; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InactiveTreeEntries; // 0x0038 (Size: 0x10, Type: MapProperty)
    TArray<void*> TransitionEventQueue; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RecentAnimationHintRecords; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    void* StateTreeContext; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayerSpecificParameters[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t CombinedPlayerParameters[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlayerCombinedAnimationHints[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    std::uint8_t bArePlayerCombinedAnimationHintsValid; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    void* StateTreeManager; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bNeedsUpdate; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasUpdatedParameters; // 0x00C1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUIStateTreeManagerPlayer, ActiveTreeEntries) == 40, "Offset mismatch for UUIStateTreeManagerPlayer::ActiveTreeEntries");
static_assert(offsetof(UUIStateTreeManagerPlayer, InactiveTreeEntries) == 56, "Offset mismatch for UUIStateTreeManagerPlayer::InactiveTreeEntries");
static_assert(offsetof(UUIStateTreeManagerPlayer, TransitionEventQueue) == 72, "Offset mismatch for UUIStateTreeManagerPlayer::TransitionEventQueue");
static_assert(offsetof(UUIStateTreeManagerPlayer, RecentAnimationHintRecords) == 88, "Offset mismatch for UUIStateTreeManagerPlayer::RecentAnimationHintRecords");
static_assert(offsetof(UUIStateTreeManagerPlayer, StateTreeContext) == 104, "Offset mismatch for UUIStateTreeManagerPlayer::StateTreeContext");
static_assert(offsetof(UUIStateTreeManagerPlayer, PlayerSpecificParameters) == 112, "Offset mismatch for UUIStateTreeManagerPlayer::PlayerSpecificParameters");
static_assert(offsetof(UUIStateTreeManagerPlayer, CombinedPlayerParameters) == 128, "Offset mismatch for UUIStateTreeManagerPlayer::CombinedPlayerParameters");
static_assert(offsetof(UUIStateTreeManagerPlayer, PlayerCombinedAnimationHints) == 144, "Offset mismatch for UUIStateTreeManagerPlayer::PlayerCombinedAnimationHints");
static_assert(offsetof(UUIStateTreeManagerPlayer, bArePlayerCombinedAnimationHintsValid) == 176, "Offset mismatch for UUIStateTreeManagerPlayer::bArePlayerCombinedAnimationHintsValid");
static_assert(offsetof(UUIStateTreeManagerPlayer, StateTreeManager) == 184, "Offset mismatch for UUIStateTreeManagerPlayer::StateTreeManager");
static_assert(offsetof(UUIStateTreeManagerPlayer, bNeedsUpdate) == 192, "Offset mismatch for UUIStateTreeManagerPlayer::bNeedsUpdate");
static_assert(offsetof(UUIStateTreeManagerPlayer, bHasUpdatedParameters) == 193, "Offset mismatch for UUIStateTreeManagerPlayer::bHasUpdatedParameters");

// /Script/UIStateTree.UIStateTreeSchema
// Kind: Class; super: StateTreeSchema
class UUIStateTreeSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUIStateTreeSchema, ContextDataDescs) == 40, "Offset mismatch for UUIStateTreeSchema::ContextDataDescs");

// /Script/UIStateTree.UIStateTreeWidgetCache
// Kind: Class; super: Object
class UUIStateTreeWidgetCache
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> CacheEntries; // 0x0028 (Size: 0x10, Type: MapProperty)
    void* Context; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIStateTreeWidgetCache, CacheEntries) == 40, "Offset mismatch for UUIStateTreeWidgetCache::CacheEntries");
static_assert(offsetof(UUIStateTreeWidgetCache, Context) == 56, "Offset mismatch for UUIStateTreeWidgetCache::Context");
