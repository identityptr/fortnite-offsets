/**
 * decamp dumper generated SDK
 * Package: /Script/EncountersRuntime
 */
#pragma once
#include "Basic.h"

// /Script/EncountersRuntime.ActorAddLooseTagsStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FActorAddLooseTagsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FActorAddLooseTagsStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FActorAddLooseTagsStateTreeTask::bTaskEnabled");
static_assert(offsetof(FActorAddLooseTagsStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FActorAddLooseTagsStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FActorAddLooseTagsStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FActorAddLooseTagsStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.ActorAddLooseTagsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FActorAddLooseTagsStateTreeTaskInstanceData
{
public:
    TWeakObjectPtr<void> InActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ActorTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAddTags; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    void* UserActor; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FActorAddLooseTagsStateTreeTaskInstanceData, InActor) == 0, "Offset mismatch for FActorAddLooseTagsStateTreeTaskInstanceData::InActor");
static_assert(offsetof(FActorAddLooseTagsStateTreeTaskInstanceData, ActorTags) == 8, "Offset mismatch for FActorAddLooseTagsStateTreeTaskInstanceData::ActorTags");
static_assert(offsetof(FActorAddLooseTagsStateTreeTaskInstanceData, bAddTags) == 40, "Offset mismatch for FActorAddLooseTagsStateTreeTaskInstanceData::bAddTags");
static_assert(offsetof(FActorAddLooseTagsStateTreeTaskInstanceData, UserActor) == 48, "Offset mismatch for FActorAddLooseTagsStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.ActorIdentifierEntry
// Kind: ScriptStruct; super: none
struct FActorIdentifierEntry
{
public:
    std::uint8_t IdentifierTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> TargetActor; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FActorIdentifierEntry, IdentifierTags) == 0, "Offset mismatch for FActorIdentifierEntry::IdentifierTags");
static_assert(offsetof(FActorIdentifierEntry, TargetActor) == 32, "Offset mismatch for FActorIdentifierEntry::TargetActor");

// /Script/EncountersRuntime.ActorPhysicsStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FActorPhysicsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FActorPhysicsStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FActorPhysicsStateTreeTask::bTaskEnabled");
static_assert(offsetof(FActorPhysicsStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FActorPhysicsStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FActorPhysicsStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FActorPhysicsStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.ActorPhysicsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FActorPhysicsStateTreeTaskInstanceData
{
public:
    std::uint8_t ActorQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t bShouldWakeup; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0049
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FActorPhysicsStateTreeTaskInstanceData, ActorQuery) == 0, "Offset mismatch for FActorPhysicsStateTreeTaskInstanceData::ActorQuery");
static_assert(offsetof(FActorPhysicsStateTreeTaskInstanceData, bShouldWakeup) == 72, "Offset mismatch for FActorPhysicsStateTreeTaskInstanceData::bShouldWakeup");
static_assert(offsetof(FActorPhysicsStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FActorPhysicsStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.ActorRemainingCountTransitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FActorRemainingCountTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FActorRemainingCountTransitionStateTreeTask, TransitionTo) == 40, "Offset mismatch for FActorRemainingCountTransitionStateTreeTask::TransitionTo");

// /Script/EncountersRuntime.ActorRemainingCountTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FActorRemainingCountTransitionStateTreeTaskInstanceData
{
public:
    std::uint8_t OnTriggered[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ActorIdentifierQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::uint32_t Value; // 0x0058 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x005C
    void* UserActor; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOnlyTriggerOnce; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t CustomVerb[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldTransition; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    std::int32_t RemainingCount; // 0x009C (Size: 0x4, Type: IntProperty)
    std::uint8_t bTriggered; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FActorRemainingCountTransitionStateTreeTaskInstanceData, OnTriggered) == 0, "Offset mismatch for FActorRemainingCountTransitionStateTreeTaskInstanceData::OnTriggered");
static_assert(offsetof(FActorRemainingCountTransitionStateTreeTaskInstanceData, ActorIdentifierQuery) == 16, "Offset mismatch for FActorRemainingCountTransitionStateTreeTaskInstanceData::ActorIdentifierQuery");
static_assert(offsetof(FActorRemainingCountTransitionStateTreeTaskInstanceData, Value) == 88, "Offset mismatch for FActorRemainingCountTransitionStateTreeTaskInstanceData::Value");
static_assert(offsetof(FActorRemainingCountTransitionStateTreeTaskInstanceData, UserActor) == 96, "Offset mismatch for FActorRemainingCountTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FActorRemainingCountTransitionStateTreeTaskInstanceData, bOnlyTriggerOnce) == 104, "Offset mismatch for FActorRemainingCountTransitionStateTreeTaskInstanceData::bOnlyTriggerOnce");
static_assert(offsetof(FActorRemainingCountTransitionStateTreeTaskInstanceData, CustomVerb) == 112, "Offset mismatch for FActorRemainingCountTransitionStateTreeTaskInstanceData::CustomVerb");
static_assert(offsetof(FActorRemainingCountTransitionStateTreeTaskInstanceData, bShouldTransition) == 152, "Offset mismatch for FActorRemainingCountTransitionStateTreeTaskInstanceData::bShouldTransition");
static_assert(offsetof(FActorRemainingCountTransitionStateTreeTaskInstanceData, RemainingCount) == 156, "Offset mismatch for FActorRemainingCountTransitionStateTreeTaskInstanceData::RemainingCount");
static_assert(offsetof(FActorRemainingCountTransitionStateTreeTaskInstanceData, bTriggered) == 160, "Offset mismatch for FActorRemainingCountTransitionStateTreeTaskInstanceData::bTriggered");

// /Script/EncountersRuntime.AddEncounterPrefabTagStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FAddEncounterPrefabTagStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAddEncounterPrefabTagStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FAddEncounterPrefabTagStateTreeTask::bTaskEnabled");
static_assert(offsetof(FAddEncounterPrefabTagStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FAddEncounterPrefabTagStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FAddEncounterPrefabTagStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FAddEncounterPrefabTagStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.AddEncounterPrefabTagStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FAddEncounterPrefabTagStateTreeTaskInstanceData
{
public:
    std::uint8_t PrefabTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bRemoveOnExit; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAddEncounterPrefabTagStateTreeTaskInstanceData, PrefabTag) == 0, "Offset mismatch for FAddEncounterPrefabTagStateTreeTaskInstanceData::PrefabTag");
static_assert(offsetof(FAddEncounterPrefabTagStateTreeTaskInstanceData, bRemoveOnExit) == 4, "Offset mismatch for FAddEncounterPrefabTagStateTreeTaskInstanceData::bRemoveOnExit");
static_assert(offsetof(FAddEncounterPrefabTagStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FAddEncounterPrefabTagStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.AddGameplayCueStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FAddGameplayCueStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAddGameplayCueStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FAddGameplayCueStateTreeTask::bTaskEnabled");
static_assert(offsetof(FAddGameplayCueStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FAddGameplayCueStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FAddGameplayCueStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FAddGameplayCueStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.AddGameplayCueStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FAddGameplayCueStateTreeTaskInstanceData
{
public:
    std::uint8_t GameplayCue[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bApplyToActor; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TWeakObjectPtr<void> TargetActor; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bApplyToLWMEncounters; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t EncounterQuery[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    std::uint8_t bApplyToParticipatingPlayers; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLooping; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0062
    void* UserActor; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAddGameplayCueStateTreeTaskInstanceData, GameplayCue) == 0, "Offset mismatch for FAddGameplayCueStateTreeTaskInstanceData::GameplayCue");
static_assert(offsetof(FAddGameplayCueStateTreeTaskInstanceData, bApplyToActor) == 4, "Offset mismatch for FAddGameplayCueStateTreeTaskInstanceData::bApplyToActor");
static_assert(offsetof(FAddGameplayCueStateTreeTaskInstanceData, TargetActor) == 8, "Offset mismatch for FAddGameplayCueStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FAddGameplayCueStateTreeTaskInstanceData, bApplyToLWMEncounters) == 16, "Offset mismatch for FAddGameplayCueStateTreeTaskInstanceData::bApplyToLWMEncounters");
static_assert(offsetof(FAddGameplayCueStateTreeTaskInstanceData, EncounterQuery) == 24, "Offset mismatch for FAddGameplayCueStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FAddGameplayCueStateTreeTaskInstanceData, bApplyToParticipatingPlayers) == 96, "Offset mismatch for FAddGameplayCueStateTreeTaskInstanceData::bApplyToParticipatingPlayers");
static_assert(offsetof(FAddGameplayCueStateTreeTaskInstanceData, bIsLooping) == 97, "Offset mismatch for FAddGameplayCueStateTreeTaskInstanceData::bIsLooping");
static_assert(offsetof(FAddGameplayCueStateTreeTaskInstanceData, UserActor) == 104, "Offset mismatch for FAddGameplayCueStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.DestroyActorsStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FDestroyActorsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDestroyActorsStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FDestroyActorsStateTreeTask::bTaskEnabled");
static_assert(offsetof(FDestroyActorsStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FDestroyActorsStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FDestroyActorsStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FDestroyActorsStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.DestroyActorsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FDestroyActorsStateTreeTaskInstanceData
{
public:
    std::uint8_t ActorQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDestroyActorsStateTreeTaskInstanceData, ActorQuery) == 0, "Offset mismatch for FDestroyActorsStateTreeTaskInstanceData::ActorQuery");
static_assert(offsetof(FDestroyActorsStateTreeTaskInstanceData, UserActor) == 72, "Offset mismatch for FDestroyActorsStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.DynamicEncounterEntry
// Kind: ScriptStruct; super: none
struct FDynamicEncounterEntry
{
public:
    FString DebugName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bUseEventTemplate; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::int32_t SpawnCount; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxConcurrentSpawns; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t EventTemplate[0x1D0]; // 0x0020 (Size: 0x1D0, Type: StructProperty)
    std::uint8_t bOverrideActorCount; // 0x01F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01F1
    std::int32_t ActorCountOverrideMax; // 0x01F4 (Size: 0x4, Type: IntProperty)
    std::int32_t ActorCountOverrideMin; // 0x01F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x01FC
    std::uint8_t PointProviderTagQueryOverride[0x48]; // 0x0200 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUseEncounterTagQuery; // 0x0248 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0249
    std::uint8_t EncounterTagQuery[0x48]; // 0x0250 (Size: 0x48, Type: StructProperty)
    std::uint8_t bCreateRandomSingleActorEvents; // 0x0298 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0299
    std::int32_t NoActorLimitEventCount; // 0x029C (Size: 0x4, Type: IntProperty)
    TArray<void*> ActorDescriptions; // 0x02A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDynamicEncounterEntry, DebugName) == 0, "Offset mismatch for FDynamicEncounterEntry::DebugName");
static_assert(offsetof(FDynamicEncounterEntry, bUseEventTemplate) == 16, "Offset mismatch for FDynamicEncounterEntry::bUseEventTemplate");
static_assert(offsetof(FDynamicEncounterEntry, SpawnCount) == 20, "Offset mismatch for FDynamicEncounterEntry::SpawnCount");
static_assert(offsetof(FDynamicEncounterEntry, MaxConcurrentSpawns) == 24, "Offset mismatch for FDynamicEncounterEntry::MaxConcurrentSpawns");
static_assert(offsetof(FDynamicEncounterEntry, EventTemplate) == 32, "Offset mismatch for FDynamicEncounterEntry::EventTemplate");
static_assert(offsetof(FDynamicEncounterEntry, bOverrideActorCount) == 496, "Offset mismatch for FDynamicEncounterEntry::bOverrideActorCount");
static_assert(offsetof(FDynamicEncounterEntry, ActorCountOverrideMax) == 500, "Offset mismatch for FDynamicEncounterEntry::ActorCountOverrideMax");
static_assert(offsetof(FDynamicEncounterEntry, ActorCountOverrideMin) == 504, "Offset mismatch for FDynamicEncounterEntry::ActorCountOverrideMin");
static_assert(offsetof(FDynamicEncounterEntry, PointProviderTagQueryOverride) == 512, "Offset mismatch for FDynamicEncounterEntry::PointProviderTagQueryOverride");
static_assert(offsetof(FDynamicEncounterEntry, bUseEncounterTagQuery) == 584, "Offset mismatch for FDynamicEncounterEntry::bUseEncounterTagQuery");
static_assert(offsetof(FDynamicEncounterEntry, EncounterTagQuery) == 592, "Offset mismatch for FDynamicEncounterEntry::EncounterTagQuery");
static_assert(offsetof(FDynamicEncounterEntry, bCreateRandomSingleActorEvents) == 664, "Offset mismatch for FDynamicEncounterEntry::bCreateRandomSingleActorEvents");
static_assert(offsetof(FDynamicEncounterEntry, NoActorLimitEventCount) == 668, "Offset mismatch for FDynamicEncounterEntry::NoActorLimitEventCount");
static_assert(offsetof(FDynamicEncounterEntry, ActorDescriptions) == 672, "Offset mismatch for FDynamicEncounterEntry::ActorDescriptions");

// /Script/EncountersRuntime.EnableEncounterPointProvidersStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEnableEncounterPointProvidersStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEnableEncounterPointProvidersStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEnableEncounterPointProvidersStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEnableEncounterPointProvidersStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEnableEncounterPointProvidersStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEnableEncounterPointProvidersStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEnableEncounterPointProvidersStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EnableEncounterPointProvidersStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEnableEncounterPointProvidersStateTreeTaskInstanceData
{
public:
    std::uint8_t ProviderTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t bEnableProvider; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0049
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEnableEncounterPointProvidersStateTreeTaskInstanceData, ProviderTagQuery) == 0, "Offset mismatch for FEnableEncounterPointProvidersStateTreeTaskInstanceData::ProviderTagQuery");
static_assert(offsetof(FEnableEncounterPointProvidersStateTreeTaskInstanceData, bEnableProvider) == 72, "Offset mismatch for FEnableEncounterPointProvidersStateTreeTaskInstanceData::bEnableProvider");
static_assert(offsetof(FEnableEncounterPointProvidersStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FEnableEncounterPointProvidersStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EnableSmartObjectsStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEnableSmartObjectsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEnableSmartObjectsStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEnableSmartObjectsStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEnableSmartObjectsStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEnableSmartObjectsStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEnableSmartObjectsStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEnableSmartObjectsStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EnableSmartObjectsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEnableSmartObjectsStateTreeTaskInstanceData
{
public:
    std::uint8_t bUseTagQuery; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ActorQuery[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    void* TargetActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnable; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    void* UserActor; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AIActors; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AICommandSOUsageData[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEnableSmartObjectsStateTreeTaskInstanceData, bUseTagQuery) == 0, "Offset mismatch for FEnableSmartObjectsStateTreeTaskInstanceData::bUseTagQuery");
static_assert(offsetof(FEnableSmartObjectsStateTreeTaskInstanceData, ActorQuery) == 8, "Offset mismatch for FEnableSmartObjectsStateTreeTaskInstanceData::ActorQuery");
static_assert(offsetof(FEnableSmartObjectsStateTreeTaskInstanceData, TargetActor) == 80, "Offset mismatch for FEnableSmartObjectsStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FEnableSmartObjectsStateTreeTaskInstanceData, bEnable) == 88, "Offset mismatch for FEnableSmartObjectsStateTreeTaskInstanceData::bEnable");
static_assert(offsetof(FEnableSmartObjectsStateTreeTaskInstanceData, UserActor) == 96, "Offset mismatch for FEnableSmartObjectsStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FEnableSmartObjectsStateTreeTaskInstanceData, AIActors) == 104, "Offset mismatch for FEnableSmartObjectsStateTreeTaskInstanceData::AIActors");
static_assert(offsetof(FEnableSmartObjectsStateTreeTaskInstanceData, AICommandSOUsageData) == 120, "Offset mismatch for FEnableSmartObjectsStateTreeTaskInstanceData::AICommandSOUsageData");

// /Script/EncountersRuntime.EncounterCustomVerbData
// Kind: ScriptStruct; super: none
struct FEncounterCustomVerbData
{
public:
    std::uint8_t CustomVerbTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint32_t Amount; // 0x0004 (Size: 0x4, Type: UInt32Property)
    TArray<void*> Subjects; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Values; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEncounterCustomVerbData, CustomVerbTag) == 0, "Offset mismatch for FEncounterCustomVerbData::CustomVerbTag");
static_assert(offsetof(FEncounterCustomVerbData, Amount) == 4, "Offset mismatch for FEncounterCustomVerbData::Amount");
static_assert(offsetof(FEncounterCustomVerbData, Subjects) == 8, "Offset mismatch for FEncounterCustomVerbData::Subjects");
static_assert(offsetof(FEncounterCustomVerbData, Values) == 24, "Offset mismatch for FEncounterCustomVerbData::Values");

// /Script/EncountersRuntime.EncounterDebugInfo
// Kind: ScriptStruct; super: none
struct FEncounterDebugInfo
{
public:
    std::uint8_t EncounterGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* EncounterDefinition; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* EncounterTable; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EncounterVariantQuery[0x48]; // 0x0020 (Size: 0x48, Type: StructProperty)
    TArray<void*> DynamicVariables; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EncounterOrigin[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    TArray<void*> VolumeEntries; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEncounterDebugInfo, EncounterGuid) == 0, "Offset mismatch for FEncounterDebugInfo::EncounterGuid");
static_assert(offsetof(FEncounterDebugInfo, EncounterDefinition) == 16, "Offset mismatch for FEncounterDebugInfo::EncounterDefinition");
static_assert(offsetof(FEncounterDebugInfo, EncounterTable) == 24, "Offset mismatch for FEncounterDebugInfo::EncounterTable");
static_assert(offsetof(FEncounterDebugInfo, EncounterVariantQuery) == 32, "Offset mismatch for FEncounterDebugInfo::EncounterVariantQuery");
static_assert(offsetof(FEncounterDebugInfo, DynamicVariables) == 104, "Offset mismatch for FEncounterDebugInfo::DynamicVariables");
static_assert(offsetof(FEncounterDebugInfo, EncounterOrigin) == 120, "Offset mismatch for FEncounterDebugInfo::EncounterOrigin");
static_assert(offsetof(FEncounterDebugInfo, VolumeEntries) == 144, "Offset mismatch for FEncounterDebugInfo::VolumeEntries");

// /Script/EncountersRuntime.EncounterDebugVolumeInfo
// Kind: ScriptStruct; super: none
struct FEncounterDebugVolumeInfo
{
public:
    std::uint8_t VolumeOrigin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t VolumeExtents[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterDebugVolumeInfo, VolumeOrigin) == 0, "Offset mismatch for FEncounterDebugVolumeInfo::VolumeOrigin");
static_assert(offsetof(FEncounterDebugVolumeInfo, VolumeExtents) == 24, "Offset mismatch for FEncounterDebugVolumeInfo::VolumeExtents");

// /Script/EncountersRuntime.EncounterFactionEnemy
// Kind: ScriptStruct; super: none
struct FEncounterFactionEnemy
{
public:
    void* FactionData; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float Weight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEncounterFactionEnemy, FactionData) == 0, "Offset mismatch for FEncounterFactionEnemy::FactionData");
static_assert(offsetof(FEncounterFactionEnemy, Weight) == 8, "Offset mismatch for FEncounterFactionEnemy::Weight");

// /Script/EncountersRuntime.EncounterFactionRow
// Kind: ScriptStruct; super: TableRowBase
struct FEncounterFactionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* FactionData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Weight[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterFactionRow, FactionData) == 8, "Offset mismatch for FEncounterFactionRow::FactionData");
static_assert(offsetof(FEncounterFactionRow, Weight) == 16, "Offset mismatch for FEncounterFactionRow::Weight");

// /Script/EncountersRuntime.EncounterFreeLWMReservoirStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterFreeLWMReservoirStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterFreeLWMReservoirStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterFreeLWMReservoirStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterFreeLWMReservoirStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterFreeLWMReservoirStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterFreeLWMReservoirStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterFreeLWMReservoirStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterFreeLWMReservoirStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterFreeLWMReservoirStateTreeTaskInstanceData
{
public:
    void* UserActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterFreeLWMReservoirStateTreeTaskInstanceData, UserActor) == 0, "Offset mismatch for FEncounterFreeLWMReservoirStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetEnemyFactionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetEnemyFactionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetEnemyFactionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetEnemyFactionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetEnemyFactionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetEnemyFactionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetEnemyFactionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetEnemyFactionStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetEnemyFactionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetEnemyFactionStateTreeTaskInstanceData
{
public:
    std::uint8_t bSpecifyFaction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Faction; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EnemyTagQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* EnemyFaction; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetEnemyFactionStateTreeTaskInstanceData, bSpecifyFaction) == 0, "Offset mismatch for FEncounterGetEnemyFactionStateTreeTaskInstanceData::bSpecifyFaction");
static_assert(offsetof(FEncounterGetEnemyFactionStateTreeTaskInstanceData, Faction) == 8, "Offset mismatch for FEncounterGetEnemyFactionStateTreeTaskInstanceData::Faction");
static_assert(offsetof(FEncounterGetEnemyFactionStateTreeTaskInstanceData, EnemyTagQuery) == 16, "Offset mismatch for FEncounterGetEnemyFactionStateTreeTaskInstanceData::EnemyTagQuery");
static_assert(offsetof(FEncounterGetEnemyFactionStateTreeTaskInstanceData, UserActor) == 88, "Offset mismatch for FEncounterGetEnemyFactionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FEncounterGetEnemyFactionStateTreeTaskInstanceData, EnemyFaction) == 96, "Offset mismatch for FEncounterGetEnemyFactionStateTreeTaskInstanceData::EnemyFaction");

// /Script/EncountersRuntime.EncounterGetKillCountStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetKillCountStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetKillCountStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetKillCountStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetKillCountStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetKillCountStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetKillCountStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetKillCountStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetKillCountStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetKillCountStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::int32_t Value; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x004C
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetKillCountStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FEncounterGetKillCountStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FEncounterGetKillCountStateTreeTaskInstanceData, Value) == 72, "Offset mismatch for FEncounterGetKillCountStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetKillCountStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FEncounterGetKillCountStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetPersistentValueStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetPersistentValueStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetPersistentValueStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetPersistentValueStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetPersistentValueStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetPersistentValueStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetPersistentValueStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetPersistentValueStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetPersistentValueStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetPersistentValueStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t Value; // 0x0004 (Size: 0x4, Type: IntProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetPersistentValueStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetPersistentValueStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetPersistentValueStateTreeTaskInstanceData, Value) == 4, "Offset mismatch for FEncounterGetPersistentValueStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetPersistentValueStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FEncounterGetPersistentValueStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetPlayerCountStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetPlayerCountStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetPlayerCountStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetPlayerCountStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetPlayerCountStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetPlayerCountStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetPlayerCountStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetPlayerCountStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetPlayerCountStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetPlayerCountStateTreeTaskInstanceData
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetPlayerCountStateTreeTaskInstanceData, Value) == 0, "Offset mismatch for FEncounterGetPlayerCountStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetPlayerCountStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FEncounterGetPlayerCountStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetRemainingCountStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetRemainingCountStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetRemainingCountStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetRemainingCountStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetRemainingCountStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetRemainingCountStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetRemainingCountStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetRemainingCountStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetRemainingCountStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetRemainingCountStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::int32_t Value; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x004C
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetRemainingCountStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FEncounterGetRemainingCountStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FEncounterGetRemainingCountStateTreeTaskInstanceData, Value) == 72, "Offset mismatch for FEncounterGetRemainingCountStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetRemainingCountStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FEncounterGetRemainingCountStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableActorClassStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableActorClassStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableActorClassStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableActorClassStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableActorClassStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableActorClassStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableActorClassStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableActorClassStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableActorClassStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableActorClassStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Value[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    void* UserActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableActorClassStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableActorClassStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableActorClassStateTreeTaskInstanceData, Value) == 8, "Offset mismatch for FEncounterGetVariableActorClassStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableActorClassStateTreeTaskInstanceData, UserActor) == 40, "Offset mismatch for FEncounterGetVariableActorClassStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableActorDescriptionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableActorDescriptionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableActorDescriptionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableActorDescriptionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableActorDescriptionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableActorDescriptionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableActorDescriptionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableActorDescriptionStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableActorDescriptionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableActorDescriptionStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Value; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* UserActor; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableActorDescriptionStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableActorDescriptionStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableActorDescriptionStateTreeTaskInstanceData, Value) == 8, "Offset mismatch for FEncounterGetVariableActorDescriptionStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableActorDescriptionStateTreeTaskInstanceData, UserActor) == 24, "Offset mismatch for FEncounterGetVariableActorDescriptionStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableBoolStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableBoolStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableBoolStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableBoolStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableBoolStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableBoolStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableBoolStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableBoolStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableBoolStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableBoolStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bValue; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableBoolStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableBoolStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableBoolStateTreeTaskInstanceData, bValue) == 4, "Offset mismatch for FEncounterGetVariableBoolStateTreeTaskInstanceData::bValue");
static_assert(offsetof(FEncounterGetVariableBoolStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FEncounterGetVariableBoolStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableDynamicEncounterConfigStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableDynamicEncounterConfigStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableDynamicEncounterConfigStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableDynamicEncounterConfigStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableDynamicEncounterConfigStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableDynamicEncounterConfigStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableDynamicEncounterConfigStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableDynamicEncounterConfigStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableDynamicEncounterConfigStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableDynamicEncounterConfigStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Value; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* UserActor; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableDynamicEncounterConfigStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableDynamicEncounterConfigStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableDynamicEncounterConfigStateTreeTaskInstanceData, Value) == 8, "Offset mismatch for FEncounterGetVariableDynamicEncounterConfigStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableDynamicEncounterConfigStateTreeTaskInstanceData, UserActor) == 24, "Offset mismatch for FEncounterGetVariableDynamicEncounterConfigStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableFactionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableFactionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableFactionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableFactionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableFactionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableFactionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableFactionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableFactionStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableFactionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableFactionStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Value[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    void* UserActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableFactionStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableFactionStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableFactionStateTreeTaskInstanceData, Value) == 8, "Offset mismatch for FEncounterGetVariableFactionStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableFactionStateTreeTaskInstanceData, UserActor) == 40, "Offset mismatch for FEncounterGetVariableFactionStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableFloatStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableFloatStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableFloatStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableFloatStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableFloatStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableFloatStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableFloatStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableFloatStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableFloatStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableFloatStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableFloatStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableFloatStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableFloatStateTreeTaskInstanceData, Value) == 4, "Offset mismatch for FEncounterGetVariableFloatStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableFloatStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FEncounterGetVariableFloatStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableGameplayTagContainerStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableGameplayTagContainerStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableGameplayTagContainerStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableGameplayTagContainerStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableGameplayTagContainerStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableGameplayTagContainerStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableGameplayTagContainerStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableGameplayTagContainerStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Value[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    void* UserActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData, Value) == 8, "Offset mismatch for FEncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData, UserActor) == 40, "Offset mismatch for FEncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableGameplayTagStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableGameplayTagStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableGameplayTagStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableGameplayTagStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableGameplayTagStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableGameplayTagStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableGameplayTagStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableGameplayTagStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Value[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableGameplayTagStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableGameplayTagStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableGameplayTagStateTreeTaskInstanceData, Value) == 4, "Offset mismatch for FEncounterGetVariableGameplayTagStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableGameplayTagStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FEncounterGetVariableGameplayTagStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableIntStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableIntStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableIntStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableIntStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableIntStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableIntStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableIntStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableIntStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableIntStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableIntStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t Value; // 0x0004 (Size: 0x4, Type: IntProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableIntStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableIntStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableIntStateTreeTaskInstanceData, Value) == 4, "Offset mismatch for FEncounterGetVariableIntStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableIntStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FEncounterGetVariableIntStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableItemDefinitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableItemDefinitionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableItemDefinitionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableItemDefinitionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableItemDefinitionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableItemDefinitionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableItemDefinitionStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Value[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    void* UserActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData, Value) == 8, "Offset mismatch for FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData, UserActor) == 40, "Offset mismatch for FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableLWMEncounterStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableLWMEncounterStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableLWMEncounterStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableLWMEncounterStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableLWMEncounterStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableLWMEncounterStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableLWMEncounterStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Value[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    void* UserActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData, Value) == 8, "Offset mismatch for FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData, UserActor) == 40, "Offset mismatch for FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableQuestDefinitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableQuestDefinitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableQuestDefinitionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableQuestDefinitionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableQuestDefinitionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableQuestDefinitionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableQuestDefinitionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableQuestDefinitionStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableQuestDefinitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableQuestDefinitionStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Value[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    void* UserActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableQuestDefinitionStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableQuestDefinitionStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableQuestDefinitionStateTreeTaskInstanceData, Value) == 8, "Offset mismatch for FEncounterGetVariableQuestDefinitionStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableQuestDefinitionStateTreeTaskInstanceData, UserActor) == 40, "Offset mismatch for FEncounterGetVariableQuestDefinitionStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableScenarioDefinitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableScenarioDefinitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableScenarioDefinitionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableScenarioDefinitionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableScenarioDefinitionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableScenarioDefinitionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableScenarioDefinitionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableScenarioDefinitionStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableScenarioDefinitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableScenarioDefinitionStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Value[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    void* UserActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableScenarioDefinitionStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableScenarioDefinitionStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableScenarioDefinitionStateTreeTaskInstanceData, Value) == 8, "Offset mismatch for FEncounterGetVariableScenarioDefinitionStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableScenarioDefinitionStateTreeTaskInstanceData, UserActor) == 40, "Offset mismatch for FEncounterGetVariableScenarioDefinitionStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableStringStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableStringStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableStringStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableStringStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableStringStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableStringStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableStringStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableStringStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableStringStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableStringStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Value[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableStringStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableStringStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableStringStateTreeTaskInstanceData, Value) == 4, "Offset mismatch for FEncounterGetVariableStringStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableStringStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FEncounterGetVariableStringStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariableTagQueryStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariableTagQueryStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariableTagQueryStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariableTagQueryStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariableTagQueryStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariableTagQueryStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariableTagQueryStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariableTagQueryStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariableTagQueryStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariableTagQueryStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Value[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariableTagQueryStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterGetVariableTagQueryStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterGetVariableTagQueryStateTreeTaskInstanceData, Value) == 8, "Offset mismatch for FEncounterGetVariableTagQueryStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariableTagQueryStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FEncounterGetVariableTagQueryStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGetVariantTagQueryStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterGetVariantTagQueryStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterGetVariantTagQueryStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterGetVariantTagQueryStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterGetVariantTagQueryStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterGetVariantTagQueryStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterGetVariantTagQueryStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterGetVariantTagQueryStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterGetVariantTagQueryStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterGetVariantTagQueryStateTreeTaskInstanceData
{
public:
    std::uint8_t BaseTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t Value[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterGetVariantTagQueryStateTreeTaskInstanceData, BaseTagQuery) == 0, "Offset mismatch for FEncounterGetVariantTagQueryStateTreeTaskInstanceData::BaseTagQuery");
static_assert(offsetof(FEncounterGetVariantTagQueryStateTreeTaskInstanceData, Value) == 72, "Offset mismatch for FEncounterGetVariantTagQueryStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterGetVariantTagQueryStateTreeTaskInstanceData, UserActor) == 144, "Offset mismatch for FEncounterGetVariantTagQueryStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterGroupEffectInfo
// Kind: ScriptStruct; super: none
struct FEncounterGroupEffectInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EncountersRuntime.EncounterLootEntry
// Kind: ScriptStruct; super: none
struct FEncounterLootEntry
{
public:
    std::uint8_t bUseLootSelectionTable; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t LootTierName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t LootTierSelection[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterLootEntry, bUseLootSelectionTable) == 0, "Offset mismatch for FEncounterLootEntry::bUseLootSelectionTable");
static_assert(offsetof(FEncounterLootEntry, LootTierName) == 4, "Offset mismatch for FEncounterLootEntry::LootTierName");
static_assert(offsetof(FEncounterLootEntry, LootTierSelection) == 8, "Offset mismatch for FEncounterLootEntry::LootTierSelection");

// /Script/EncountersRuntime.EncounterMobInstance
// Kind: ScriptStruct; super: none
struct FEncounterMobInstance
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* VolumePointProvider; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0020
    TArray<void*> CurrentPointProviders; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEncounterMobInstance, VolumePointProvider) == 24, "Offset mismatch for FEncounterMobInstance::VolumePointProvider");
static_assert(offsetof(FEncounterMobInstance, CurrentPointProviders) == 48, "Offset mismatch for FEncounterMobInstance::CurrentPointProviders");

// /Script/EncountersRuntime.EncounterMobSpawnData
// Kind: ScriptStruct; super: none
struct FEncounterMobSpawnData
{
public:
    FString DevNotes; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t MobIdentifier[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t bActiveOnStart; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    std::uint8_t MobEncounterData[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bOverrideDefaultSpawnInfo; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t MobSpawnInfo[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterMobSpawnData, DevNotes) == 0, "Offset mismatch for FEncounterMobSpawnData::DevNotes");
static_assert(offsetof(FEncounterMobSpawnData, MobIdentifier) == 16, "Offset mismatch for FEncounterMobSpawnData::MobIdentifier");
static_assert(offsetof(FEncounterMobSpawnData, bActiveOnStart) == 20, "Offset mismatch for FEncounterMobSpawnData::bActiveOnStart");
static_assert(offsetof(FEncounterMobSpawnData, MobEncounterData) == 24, "Offset mismatch for FEncounterMobSpawnData::MobEncounterData");
static_assert(offsetof(FEncounterMobSpawnData, bOverrideDefaultSpawnInfo) == 56, "Offset mismatch for FEncounterMobSpawnData::bOverrideDefaultSpawnInfo");
static_assert(offsetof(FEncounterMobSpawnData, MobSpawnInfo) == 64, "Offset mismatch for FEncounterMobSpawnData::MobSpawnInfo");

// /Script/EncountersRuntime.EncounterMobSpawnInfo
// Kind: ScriptStruct; super: none
struct FEncounterMobSpawnInfo
{
public:
    std::uint8_t LeashRadiusInner[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t LeashRadiusOuter[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> EncounterAnchorPoint; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MobSpawnType; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0059
    std::uint8_t PointProviderFilterTags[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    TArray<void*> StaticPointProviders; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* PointProviderEQS; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* PointProviderVolumeClass; // 0x0098 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FEncounterMobSpawnInfo, LeashRadiusInner) == 0, "Offset mismatch for FEncounterMobSpawnInfo::LeashRadiusInner");
static_assert(offsetof(FEncounterMobSpawnInfo, LeashRadiusOuter) == 40, "Offset mismatch for FEncounterMobSpawnInfo::LeashRadiusOuter");
static_assert(offsetof(FEncounterMobSpawnInfo, EncounterAnchorPoint) == 80, "Offset mismatch for FEncounterMobSpawnInfo::EncounterAnchorPoint");
static_assert(offsetof(FEncounterMobSpawnInfo, MobSpawnType) == 88, "Offset mismatch for FEncounterMobSpawnInfo::MobSpawnType");
static_assert(offsetof(FEncounterMobSpawnInfo, PointProviderFilterTags) == 96, "Offset mismatch for FEncounterMobSpawnInfo::PointProviderFilterTags");
static_assert(offsetof(FEncounterMobSpawnInfo, StaticPointProviders) == 128, "Offset mismatch for FEncounterMobSpawnInfo::StaticPointProviders");
static_assert(offsetof(FEncounterMobSpawnInfo, PointProviderEQS) == 144, "Offset mismatch for FEncounterMobSpawnInfo::PointProviderEQS");
static_assert(offsetof(FEncounterMobSpawnInfo, PointProviderVolumeClass) == 152, "Offset mismatch for FEncounterMobSpawnInfo::PointProviderVolumeClass");

// /Script/EncountersRuntime.EncounterPlayerCountTransitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterPlayerCountTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterPlayerCountTransitionStateTreeTask, TransitionTo) == 40, "Offset mismatch for FEncounterPlayerCountTransitionStateTreeTask::TransitionTo");

// /Script/EncountersRuntime.EncounterPlayerCountTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterPlayerCountTransitionStateTreeTaskInstanceData
{
public:
    std::uint8_t OnTriggered[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ComparisonOperator; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::int32_t Value; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomVerb[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldTransition; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyTriggerOnce; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0042
    void* UserActor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0050
    std::uint8_t bTriggered; // 0x0051 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FEncounterPlayerCountTransitionStateTreeTaskInstanceData, OnTriggered) == 0, "Offset mismatch for FEncounterPlayerCountTransitionStateTreeTaskInstanceData::OnTriggered");
static_assert(offsetof(FEncounterPlayerCountTransitionStateTreeTaskInstanceData, ComparisonOperator) == 16, "Offset mismatch for FEncounterPlayerCountTransitionStateTreeTaskInstanceData::ComparisonOperator");
static_assert(offsetof(FEncounterPlayerCountTransitionStateTreeTaskInstanceData, Value) == 20, "Offset mismatch for FEncounterPlayerCountTransitionStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterPlayerCountTransitionStateTreeTaskInstanceData, CustomVerb) == 24, "Offset mismatch for FEncounterPlayerCountTransitionStateTreeTaskInstanceData::CustomVerb");
static_assert(offsetof(FEncounterPlayerCountTransitionStateTreeTaskInstanceData, bShouldTransition) == 64, "Offset mismatch for FEncounterPlayerCountTransitionStateTreeTaskInstanceData::bShouldTransition");
static_assert(offsetof(FEncounterPlayerCountTransitionStateTreeTaskInstanceData, bOnlyTriggerOnce) == 65, "Offset mismatch for FEncounterPlayerCountTransitionStateTreeTaskInstanceData::bOnlyTriggerOnce");
static_assert(offsetof(FEncounterPlayerCountTransitionStateTreeTaskInstanceData, UserActor) == 72, "Offset mismatch for FEncounterPlayerCountTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FEncounterPlayerCountTransitionStateTreeTaskInstanceData, bTriggered) == 81, "Offset mismatch for FEncounterPlayerCountTransitionStateTreeTaskInstanceData::bTriggered");

// /Script/EncountersRuntime.EncounterPrefabEntry
// Kind: ScriptStruct; super: none
struct FEncounterPrefabEntry
{
public:
    void* EncounterDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EncounterIdentifierTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Weight[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanSpawnCondition[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterPrefabEntry, EncounterDefinition) == 0, "Offset mismatch for FEncounterPrefabEntry::EncounterDefinition");
static_assert(offsetof(FEncounterPrefabEntry, EncounterIdentifierTag) == 8, "Offset mismatch for FEncounterPrefabEntry::EncounterIdentifierTag");
static_assert(offsetof(FEncounterPrefabEntry, Weight) == 16, "Offset mismatch for FEncounterPrefabEntry::Weight");
static_assert(offsetof(FEncounterPrefabEntry, CanSpawnCondition) == 56, "Offset mismatch for FEncounterPrefabEntry::CanSpawnCondition");

// /Script/EncountersRuntime.EncounterPrefabInfo
// Kind: ScriptStruct; super: none
struct FEncounterPrefabInfo
{
public:
    void* EncounterDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EncounterIdentifierTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Weight[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterPrefabInfo, EncounterDefinition) == 0, "Offset mismatch for FEncounterPrefabInfo::EncounterDefinition");
static_assert(offsetof(FEncounterPrefabInfo, EncounterIdentifierTag) == 8, "Offset mismatch for FEncounterPrefabInfo::EncounterIdentifierTag");
static_assert(offsetof(FEncounterPrefabInfo, Weight) == 16, "Offset mismatch for FEncounterPrefabInfo::Weight");

// /Script/EncountersRuntime.EncounterRewardBehavior
// Kind: ScriptStruct; super: none
struct FEncounterRewardBehavior
{
public:
    std::uint8_t RewardOffset[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t RewardDirection[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t RewardConeAngle[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t RewardFlingMagnitude[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterRewardBehavior, RewardOffset) == 0, "Offset mismatch for FEncounterRewardBehavior::RewardOffset");
static_assert(offsetof(FEncounterRewardBehavior, RewardDirection) == 24, "Offset mismatch for FEncounterRewardBehavior::RewardDirection");
static_assert(offsetof(FEncounterRewardBehavior, RewardConeAngle) == 48, "Offset mismatch for FEncounterRewardBehavior::RewardConeAngle");
static_assert(offsetof(FEncounterRewardBehavior, RewardFlingMagnitude) == 88, "Offset mismatch for FEncounterRewardBehavior::RewardFlingMagnitude");

// /Script/EncountersRuntime.EncounterSelectFactionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterSelectFactionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterSelectFactionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterSelectFactionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterSelectFactionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterSelectFactionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterSelectFactionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterSelectFactionStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterSelectFactionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterSelectFactionStateTreeTaskInstanceData
{
public:
    void* FactionRegistry; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FactionRequirements[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t bSaveToEncounterManager; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0051
    void* UserActor; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* Faction; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterSelectFactionStateTreeTaskInstanceData, FactionRegistry) == 0, "Offset mismatch for FEncounterSelectFactionStateTreeTaskInstanceData::FactionRegistry");
static_assert(offsetof(FEncounterSelectFactionStateTreeTaskInstanceData, FactionRequirements) == 8, "Offset mismatch for FEncounterSelectFactionStateTreeTaskInstanceData::FactionRequirements");
static_assert(offsetof(FEncounterSelectFactionStateTreeTaskInstanceData, bSaveToEncounterManager) == 80, "Offset mismatch for FEncounterSelectFactionStateTreeTaskInstanceData::bSaveToEncounterManager");
static_assert(offsetof(FEncounterSelectFactionStateTreeTaskInstanceData, UserActor) == 88, "Offset mismatch for FEncounterSelectFactionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FEncounterSelectFactionStateTreeTaskInstanceData, Faction) == 96, "Offset mismatch for FEncounterSelectFactionStateTreeTaskInstanceData::Faction");

// /Script/EncountersRuntime.EncounterSendCustomVerbStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterSendCustomVerbStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterSendCustomVerbStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterSendCustomVerbStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterSendCustomVerbStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterSendCustomVerbStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterSendCustomVerbStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterSendCustomVerbStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterSendCustomVerbStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterSendCustomVerbStateTreeTaskInstanceData
{
public:
    std::uint8_t CustomVerb[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t bSendVerbForEachPlayerAuthor; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    void* UserActor; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterSendCustomVerbStateTreeTaskInstanceData, CustomVerb) == 0, "Offset mismatch for FEncounterSendCustomVerbStateTreeTaskInstanceData::CustomVerb");
static_assert(offsetof(FEncounterSendCustomVerbStateTreeTaskInstanceData, bSendVerbForEachPlayerAuthor) == 40, "Offset mismatch for FEncounterSendCustomVerbStateTreeTaskInstanceData::bSendVerbForEachPlayerAuthor");
static_assert(offsetof(FEncounterSendCustomVerbStateTreeTaskInstanceData, UserActor) == 48, "Offset mismatch for FEncounterSendCustomVerbStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterSetCenterActorStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterSetCenterActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterSetCenterActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterSetCenterActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterSetCenterActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterSetCenterActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterSetCenterActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterSetCenterActorStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterSetCenterActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterSetCenterActorStateTreeTaskInstanceData
{
public:
    TWeakObjectPtr<void> CenterActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterSetCenterActorStateTreeTaskInstanceData, CenterActor) == 0, "Offset mismatch for FEncounterSetCenterActorStateTreeTaskInstanceData::CenterActor");
static_assert(offsetof(FEncounterSetCenterActorStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FEncounterSetCenterActorStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterSetPersistentValueStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterSetPersistentValueStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterSetPersistentValueStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEncounterSetPersistentValueStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEncounterSetPersistentValueStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEncounterSetPersistentValueStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEncounterSetPersistentValueStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEncounterSetPersistentValueStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EncounterSetPersistentValueStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterSetPersistentValueStateTreeTaskInstanceData
{
public:
    std::uint8_t VariableIdentifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t Value; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t Scope; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    void* UserActor; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEncounterSetPersistentValueStateTreeTaskInstanceData, VariableIdentifier) == 0, "Offset mismatch for FEncounterSetPersistentValueStateTreeTaskInstanceData::VariableIdentifier");
static_assert(offsetof(FEncounterSetPersistentValueStateTreeTaskInstanceData, Value) == 4, "Offset mismatch for FEncounterSetPersistentValueStateTreeTaskInstanceData::Value");
static_assert(offsetof(FEncounterSetPersistentValueStateTreeTaskInstanceData, Scope) == 8, "Offset mismatch for FEncounterSetPersistentValueStateTreeTaskInstanceData::Scope");
static_assert(offsetof(FEncounterSetPersistentValueStateTreeTaskInstanceData, UserActor) == 16, "Offset mismatch for FEncounterSetPersistentValueStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.EncounterValueConditionEntry
// Kind: ScriptStruct; super: none
struct FEncounterValueConditionEntry
{
public:
    std::int32_t LeftValue; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t RightValue; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t ComparisonOperator; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEncounterValueConditionEntry, LeftValue) == 0, "Offset mismatch for FEncounterValueConditionEntry::LeftValue");
static_assert(offsetof(FEncounterValueConditionEntry, RightValue) == 4, "Offset mismatch for FEncounterValueConditionEntry::RightValue");
static_assert(offsetof(FEncounterValueConditionEntry, ComparisonOperator) == 8, "Offset mismatch for FEncounterValueConditionEntry::ComparisonOperator");

// /Script/EncountersRuntime.EncounterValueConditionTransitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterValueConditionTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterValueConditionTransitionStateTreeTask, TransitionTo) == 40, "Offset mismatch for FEncounterValueConditionTransitionStateTreeTask::TransitionTo");

// /Script/EncountersRuntime.EncounterValueConditionTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterValueConditionTransitionStateTreeTaskInstanceData
{
public:
    std::uint8_t OnTriggered[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> ValueConditions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CustomVerb[0x28]; // 0x0020 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldTransition; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyTriggerOnce; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x004A
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0058
    std::uint8_t bTriggered; // 0x0059 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FEncounterValueConditionTransitionStateTreeTaskInstanceData, OnTriggered) == 0, "Offset mismatch for FEncounterValueConditionTransitionStateTreeTaskInstanceData::OnTriggered");
static_assert(offsetof(FEncounterValueConditionTransitionStateTreeTaskInstanceData, ValueConditions) == 16, "Offset mismatch for FEncounterValueConditionTransitionStateTreeTaskInstanceData::ValueConditions");
static_assert(offsetof(FEncounterValueConditionTransitionStateTreeTaskInstanceData, CustomVerb) == 32, "Offset mismatch for FEncounterValueConditionTransitionStateTreeTaskInstanceData::CustomVerb");
static_assert(offsetof(FEncounterValueConditionTransitionStateTreeTaskInstanceData, bShouldTransition) == 72, "Offset mismatch for FEncounterValueConditionTransitionStateTreeTaskInstanceData::bShouldTransition");
static_assert(offsetof(FEncounterValueConditionTransitionStateTreeTaskInstanceData, bOnlyTriggerOnce) == 73, "Offset mismatch for FEncounterValueConditionTransitionStateTreeTaskInstanceData::bOnlyTriggerOnce");
static_assert(offsetof(FEncounterValueConditionTransitionStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FEncounterValueConditionTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FEncounterValueConditionTransitionStateTreeTaskInstanceData, bTriggered) == 89, "Offset mismatch for FEncounterValueConditionTransitionStateTreeTaskInstanceData::bTriggered");

// /Script/EncountersRuntime.EncounterVariableDebugInfo
// Kind: ScriptStruct; super: none
struct FEncounterVariableDebugInfo
{
public:
    std::uint8_t VariableTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t VariableValue[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterVariableDebugInfo, VariableTag) == 0, "Offset mismatch for FEncounterVariableDebugInfo::VariableTag");
static_assert(offsetof(FEncounterVariableDebugInfo, VariableValue) == 8, "Offset mismatch for FEncounterVariableDebugInfo::VariableValue");

// /Script/EncountersRuntime.EncounterVerbTransitionConditionEntry
// Kind: ScriptStruct; super: none
struct FEncounterVerbTransitionConditionEntry
{
public:
    TArray<void*> ObjectiveVerbs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ObjectiveValueThreshold; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FEncounterVerbTransitionConditionEntry, ObjectiveVerbs) == 0, "Offset mismatch for FEncounterVerbTransitionConditionEntry::ObjectiveVerbs");
static_assert(offsetof(FEncounterVerbTransitionConditionEntry, ObjectiveValueThreshold) == 16, "Offset mismatch for FEncounterVerbTransitionConditionEntry::ObjectiveValueThreshold");

// /Script/EncountersRuntime.EncounterVerbTransitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEncounterVerbTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEncounterVerbTransitionStateTreeTask, TransitionTo) == 40, "Offset mismatch for FEncounterVerbTransitionStateTreeTask::TransitionTo");

// /Script/EncountersRuntime.EncounterVerbTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEncounterVerbTransitionStateTreeTaskInstanceData
{
public:
    std::uint8_t OnTriggered[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseAdvancedObjectives; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    TArray<void*> ObjectiveVerbs; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ObjectiveValueThreshold; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> Objectives; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    void* UserActor; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsTriggered; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FEncounterVerbTransitionStateTreeTaskInstanceData, OnTriggered) == 0, "Offset mismatch for FEncounterVerbTransitionStateTreeTaskInstanceData::OnTriggered");
static_assert(offsetof(FEncounterVerbTransitionStateTreeTaskInstanceData, bUseAdvancedObjectives) == 16, "Offset mismatch for FEncounterVerbTransitionStateTreeTaskInstanceData::bUseAdvancedObjectives");
static_assert(offsetof(FEncounterVerbTransitionStateTreeTaskInstanceData, ObjectiveVerbs) == 24, "Offset mismatch for FEncounterVerbTransitionStateTreeTaskInstanceData::ObjectiveVerbs");
static_assert(offsetof(FEncounterVerbTransitionStateTreeTaskInstanceData, ObjectiveValueThreshold) == 40, "Offset mismatch for FEncounterVerbTransitionStateTreeTaskInstanceData::ObjectiveValueThreshold");
static_assert(offsetof(FEncounterVerbTransitionStateTreeTaskInstanceData, Objectives) == 48, "Offset mismatch for FEncounterVerbTransitionStateTreeTaskInstanceData::Objectives");
static_assert(offsetof(FEncounterVerbTransitionStateTreeTaskInstanceData, UserActor) == 64, "Offset mismatch for FEncounterVerbTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FEncounterVerbTransitionStateTreeTaskInstanceData, bIsTriggered) == 72, "Offset mismatch for FEncounterVerbTransitionStateTreeTaskInstanceData::bIsTriggered");

// /Script/EncountersRuntime.EndAllMobEncountersStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FEndAllMobEncountersStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEndAllMobEncountersStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FEndAllMobEncountersStateTreeTask::bTaskEnabled");
static_assert(offsetof(FEndAllMobEncountersStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FEndAllMobEncountersStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FEndAllMobEncountersStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FEndAllMobEncountersStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.EndAllMobEncountersStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FEndAllMobEncountersStateTreeTaskInstanceData
{
public:
    void* UserActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEndAllMobEncountersStateTreeTaskInstanceData, UserActor) == 0, "Offset mismatch for FEndAllMobEncountersStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.FEncounterCustomVerbSubject
// Kind: ScriptStruct; super: none
struct FFEncounterCustomVerbSubject
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Actor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AdditionalTags[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFEncounterCustomVerbSubject, Name) == 0, "Offset mismatch for FFEncounterCustomVerbSubject::Name");
static_assert(offsetof(FFEncounterCustomVerbSubject, Actor) == 8, "Offset mismatch for FFEncounterCustomVerbSubject::Actor");
static_assert(offsetof(FFEncounterCustomVerbSubject, AdditionalTags) == 16, "Offset mismatch for FFEncounterCustomVerbSubject::AdditionalTags");

// /Script/EncountersRuntime.FEncounterCustomVerbValue
// Kind: ScriptStruct; super: none
struct FFEncounterCustomVerbValue
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    double Value; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFEncounterCustomVerbValue, Name) == 0, "Offset mismatch for FFEncounterCustomVerbValue::Name");
static_assert(offsetof(FFEncounterCustomVerbValue, Value) == 8, "Offset mismatch for FFEncounterCustomVerbValue::Value");

// /Script/EncountersRuntime.FortVerbFilter_EncounterCompleted
// Kind: ScriptStruct; super: ObjectiveFilter
struct FFortVerbFilter_EncounterCompleted
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t EncounterItemDef[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t SuccessState; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t Participants[0x50]; // 0x00F0 (Size: 0x50, Type: StructProperty)
    std::uint8_t Faction[0x48]; // 0x0140 (Size: 0x48, Type: StructProperty)
    std::uint8_t EncounterVolumeTags[0x1]; // 0x0188 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortVerbFilter_EncounterCompleted, EncounterItemDef) == 160, "Offset mismatch for FFortVerbFilter_EncounterCompleted::EncounterItemDef");
static_assert(offsetof(FFortVerbFilter_EncounterCompleted, SuccessState) == 232, "Offset mismatch for FFortVerbFilter_EncounterCompleted::SuccessState");
static_assert(offsetof(FFortVerbFilter_EncounterCompleted, Participants) == 240, "Offset mismatch for FFortVerbFilter_EncounterCompleted::Participants");
static_assert(offsetof(FFortVerbFilter_EncounterCompleted, Faction) == 320, "Offset mismatch for FFortVerbFilter_EncounterCompleted::Faction");
static_assert(offsetof(FFortVerbFilter_EncounterCompleted, EncounterVolumeTags) == 392, "Offset mismatch for FFortVerbFilter_EncounterCompleted::EncounterVolumeTags");

// /Script/EncountersRuntime.FortVerbFilter_EncounterLoading
// Kind: ScriptStruct; super: ObjectiveFilter
struct FFortVerbFilter_EncounterLoading
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t Participants[0x50]; // 0x00A0 (Size: 0x50, Type: StructProperty)
    std::uint8_t EncounterItemDef[0x48]; // 0x00F0 (Size: 0x48, Type: StructProperty)
    std::uint8_t VisitState; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CompletionState; // 0x0139 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortVerbFilter_EncounterLoading, Participants) == 160, "Offset mismatch for FFortVerbFilter_EncounterLoading::Participants");
static_assert(offsetof(FFortVerbFilter_EncounterLoading, EncounterItemDef) == 240, "Offset mismatch for FFortVerbFilter_EncounterLoading::EncounterItemDef");
static_assert(offsetof(FFortVerbFilter_EncounterLoading, VisitState) == 312, "Offset mismatch for FFortVerbFilter_EncounterLoading::VisitState");
static_assert(offsetof(FFortVerbFilter_EncounterLoading, CompletionState) == 313, "Offset mismatch for FFortVerbFilter_EncounterLoading::CompletionState");

// /Script/EncountersRuntime.FortVerbMessage_EncounterCompleted
// Kind: ScriptStruct; super: VerbMessage
struct FFortVerbMessage_EncounterCompleted
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t EncounterItemDef[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t bSuccess; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    TArray<void*> EncounterPlayers; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Faction[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t EncounterVolumeTags[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortVerbMessage_EncounterCompleted, EncounterItemDef) == 120, "Offset mismatch for FFortVerbMessage_EncounterCompleted::EncounterItemDef");
static_assert(offsetof(FFortVerbMessage_EncounterCompleted, bSuccess) == 176, "Offset mismatch for FFortVerbMessage_EncounterCompleted::bSuccess");
static_assert(offsetof(FFortVerbMessage_EncounterCompleted, EncounterPlayers) == 184, "Offset mismatch for FFortVerbMessage_EncounterCompleted::EncounterPlayers");
static_assert(offsetof(FFortVerbMessage_EncounterCompleted, Faction) == 200, "Offset mismatch for FFortVerbMessage_EncounterCompleted::Faction");
static_assert(offsetof(FFortVerbMessage_EncounterCompleted, EncounterVolumeTags) == 256, "Offset mismatch for FFortVerbMessage_EncounterCompleted::EncounterVolumeTags");

// /Script/EncountersRuntime.FortVerbMessage_EncounterLoading
// Kind: ScriptStruct; super: VerbMessage
struct FFortVerbMessage_EncounterLoading
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t EncounterItemDef[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    TArray<void*> EncounterPlayers; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEncounterVisited; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEncounterFinished; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEncounterSuccess; // 0x00C2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortVerbMessage_EncounterLoading, EncounterItemDef) == 120, "Offset mismatch for FFortVerbMessage_EncounterLoading::EncounterItemDef");
static_assert(offsetof(FFortVerbMessage_EncounterLoading, EncounterPlayers) == 176, "Offset mismatch for FFortVerbMessage_EncounterLoading::EncounterPlayers");
static_assert(offsetof(FFortVerbMessage_EncounterLoading, bEncounterVisited) == 192, "Offset mismatch for FFortVerbMessage_EncounterLoading::bEncounterVisited");
static_assert(offsetof(FFortVerbMessage_EncounterLoading, bEncounterFinished) == 193, "Offset mismatch for FFortVerbMessage_EncounterLoading::bEncounterFinished");
static_assert(offsetof(FFortVerbMessage_EncounterLoading, bEncounterSuccess) == 194, "Offset mismatch for FFortVerbMessage_EncounterLoading::bEncounterSuccess");

// /Script/EncountersRuntime.GameplayEffectIdentifierInfo
// Kind: ScriptStruct; super: none
struct FGameplayEffectIdentifierInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EncountersRuntime.GetAnchorStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FGetAnchorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGetAnchorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGetAnchorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGetAnchorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGetAnchorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGetAnchorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGetAnchorStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.GetAnchorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGetAnchorStateTreeTaskInstanceData
{
public:
    std::uint8_t AnchorQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TWeakObjectPtr<void> AnchorActor; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetAnchorStateTreeTaskInstanceData, AnchorQuery) == 0, "Offset mismatch for FGetAnchorStateTreeTaskInstanceData::AnchorQuery");
static_assert(offsetof(FGetAnchorStateTreeTaskInstanceData, AnchorActor) == 72, "Offset mismatch for FGetAnchorStateTreeTaskInstanceData::AnchorActor");
static_assert(offsetof(FGetAnchorStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FGetAnchorStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.GetEncounterActorStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FGetEncounterActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGetEncounterActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGetEncounterActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGetEncounterActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGetEncounterActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGetEncounterActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGetEncounterActorStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.GetEncounterActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGetEncounterActorStateTreeTaskInstanceData
{
public:
    std::uint8_t ActorQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t bQueryAgainstTrackedActorIdentifiers; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0049
    TWeakObjectPtr<void> ChosenActor; // 0x004C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0054
    void* UserActor; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetEncounterActorStateTreeTaskInstanceData, ActorQuery) == 0, "Offset mismatch for FGetEncounterActorStateTreeTaskInstanceData::ActorQuery");
static_assert(offsetof(FGetEncounterActorStateTreeTaskInstanceData, bQueryAgainstTrackedActorIdentifiers) == 72, "Offset mismatch for FGetEncounterActorStateTreeTaskInstanceData::bQueryAgainstTrackedActorIdentifiers");
static_assert(offsetof(FGetEncounterActorStateTreeTaskInstanceData, ChosenActor) == 76, "Offset mismatch for FGetEncounterActorStateTreeTaskInstanceData::ChosenActor");
static_assert(offsetof(FGetEncounterActorStateTreeTaskInstanceData, UserActor) == 88, "Offset mismatch for FGetEncounterActorStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.GetFactionEntryStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FGetFactionEntryStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGetFactionEntryStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGetFactionEntryStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGetFactionEntryStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGetFactionEntryStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGetFactionEntryStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGetFactionEntryStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.GetFactionEntryStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGetFactionEntryStateTreeTaskInstanceData
{
public:
    std::uint8_t bSpecifyFaction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Faction; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* FactionRegistry; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FactionRequirements[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    std::uint8_t LWMEncounterTagQuery[0x48]; // 0x0060 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActorDescriptions; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnActions; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGetFactionEntryStateTreeTaskInstanceData, bSpecifyFaction) == 0, "Offset mismatch for FGetFactionEntryStateTreeTaskInstanceData::bSpecifyFaction");
static_assert(offsetof(FGetFactionEntryStateTreeTaskInstanceData, Faction) == 8, "Offset mismatch for FGetFactionEntryStateTreeTaskInstanceData::Faction");
static_assert(offsetof(FGetFactionEntryStateTreeTaskInstanceData, FactionRegistry) == 16, "Offset mismatch for FGetFactionEntryStateTreeTaskInstanceData::FactionRegistry");
static_assert(offsetof(FGetFactionEntryStateTreeTaskInstanceData, FactionRequirements) == 24, "Offset mismatch for FGetFactionEntryStateTreeTaskInstanceData::FactionRequirements");
static_assert(offsetof(FGetFactionEntryStateTreeTaskInstanceData, LWMEncounterTagQuery) == 96, "Offset mismatch for FGetFactionEntryStateTreeTaskInstanceData::LWMEncounterTagQuery");
static_assert(offsetof(FGetFactionEntryStateTreeTaskInstanceData, UserActor) == 168, "Offset mismatch for FGetFactionEntryStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FGetFactionEntryStateTreeTaskInstanceData, ActorDescriptions) == 176, "Offset mismatch for FGetFactionEntryStateTreeTaskInstanceData::ActorDescriptions");
static_assert(offsetof(FGetFactionEntryStateTreeTaskInstanceData, SpawnActions) == 192, "Offset mismatch for FGetFactionEntryStateTreeTaskInstanceData::SpawnActions");

// /Script/EncountersRuntime.GetLWMEncounterActorStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FGetLWMEncounterActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGetLWMEncounterActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGetLWMEncounterActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGetLWMEncounterActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGetLWMEncounterActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGetLWMEncounterActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGetLWMEncounterActorStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.GetLWMEncounterActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGetLWMEncounterActorStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TWeakObjectPtr<void> ChosenActor; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetLWMEncounterActorStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FGetLWMEncounterActorStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FGetLWMEncounterActorStateTreeTaskInstanceData, ChosenActor) == 72, "Offset mismatch for FGetLWMEncounterActorStateTreeTaskInstanceData::ChosenActor");
static_assert(offsetof(FGetLWMEncounterActorStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FGetLWMEncounterActorStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.GetLWMEncounterActorsStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FGetLWMEncounterActorsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGetLWMEncounterActorsStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGetLWMEncounterActorsStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGetLWMEncounterActorsStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGetLWMEncounterActorsStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGetLWMEncounterActorsStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGetLWMEncounterActorsStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.GetLWMEncounterActorsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGetLWMEncounterActorsStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TArray<void*> FoundActors; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* UserActor; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetLWMEncounterActorsStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FGetLWMEncounterActorsStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FGetLWMEncounterActorsStateTreeTaskInstanceData, FoundActors) == 72, "Offset mismatch for FGetLWMEncounterActorsStateTreeTaskInstanceData::FoundActors");
static_assert(offsetof(FGetLWMEncounterActorsStateTreeTaskInstanceData, UserActor) == 88, "Offset mismatch for FGetLWMEncounterActorsStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.GetLWMEncounterPawnStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FGetLWMEncounterPawnStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGetLWMEncounterPawnStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGetLWMEncounterPawnStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGetLWMEncounterPawnStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGetLWMEncounterPawnStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGetLWMEncounterPawnStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGetLWMEncounterPawnStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.GetLWMEncounterPawnStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGetLWMEncounterPawnStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TWeakObjectPtr<void> ChosenPawn; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetLWMEncounterPawnStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FGetLWMEncounterPawnStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FGetLWMEncounterPawnStateTreeTaskInstanceData, ChosenPawn) == 72, "Offset mismatch for FGetLWMEncounterPawnStateTreeTaskInstanceData::ChosenPawn");
static_assert(offsetof(FGetLWMEncounterPawnStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FGetLWMEncounterPawnStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.GetLWMEncounterPawnsStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FGetLWMEncounterPawnsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGetLWMEncounterPawnsStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGetLWMEncounterPawnsStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGetLWMEncounterPawnsStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGetLWMEncounterPawnsStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGetLWMEncounterPawnsStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGetLWMEncounterPawnsStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.GetLWMEncounterPawnsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGetLWMEncounterPawnsStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TArray<void*> FoundPawns; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* UserActor; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGetLWMEncounterPawnsStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FGetLWMEncounterPawnsStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FGetLWMEncounterPawnsStateTreeTaskInstanceData, FoundPawns) == 72, "Offset mismatch for FGetLWMEncounterPawnsStateTreeTaskInstanceData::FoundPawns");
static_assert(offsetof(FGetLWMEncounterPawnsStateTreeTaskInstanceData, UserActor) == 88, "Offset mismatch for FGetLWMEncounterPawnsStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.GrantQuestStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FGrantQuestStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGrantQuestStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGrantQuestStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGrantQuestStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGrantQuestStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGrantQuestStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGrantQuestStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.GrantQuestStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FGrantQuestStateTreeTaskInstanceData
{
public:
    std::uint8_t QuestToGrant[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GrantType; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    void* TargetActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* UserActor; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGrantQuestStateTreeTaskInstanceData, QuestToGrant) == 0, "Offset mismatch for FGrantQuestStateTreeTaskInstanceData::QuestToGrant");
static_assert(offsetof(FGrantQuestStateTreeTaskInstanceData, GrantType) == 32, "Offset mismatch for FGrantQuestStateTreeTaskInstanceData::GrantType");
static_assert(offsetof(FGrantQuestStateTreeTaskInstanceData, TargetActor) == 40, "Offset mismatch for FGrantQuestStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FGrantQuestStateTreeTaskInstanceData, UserActor) == 48, "Offset mismatch for FGrantQuestStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.GrantReactionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FGrantReactionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGrantReactionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FGrantReactionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FGrantReactionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FGrantReactionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FGrantReactionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FGrantReactionStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.GrantReactionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: FortStateTreeEncounterInstanceDataBase
struct FGrantReactionStateTreeTaskInstanceData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> ReactionEntries; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Reactions; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GrantType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    TWeakObjectPtr<void> TargetActor; // 0x002C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0034
    void* UserActor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGrantReactionStateTreeTaskInstanceData, ReactionEntries) == 8, "Offset mismatch for FGrantReactionStateTreeTaskInstanceData::ReactionEntries");
static_assert(offsetof(FGrantReactionStateTreeTaskInstanceData, Reactions) == 24, "Offset mismatch for FGrantReactionStateTreeTaskInstanceData::Reactions");
static_assert(offsetof(FGrantReactionStateTreeTaskInstanceData, GrantType) == 40, "Offset mismatch for FGrantReactionStateTreeTaskInstanceData::GrantType");
static_assert(offsetof(FGrantReactionStateTreeTaskInstanceData, TargetActor) == 44, "Offset mismatch for FGrantReactionStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FGrantReactionStateTreeTaskInstanceData, UserActor) == 56, "Offset mismatch for FGrantReactionStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterAddGameplayEffectStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterAddGameplayEffectStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterAddGameplayEffectStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterAddGameplayEffectStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterAddGameplayEffectStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterAddGameplayEffectStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterAddGameplayEffectStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterAddGameplayEffectStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterAddGameplayEffectStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* GameplayEffect; // 0x0048 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bRemoveEffectOnExit; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0051
    std::uint8_t IdentifierTags[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    void* UserActor; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData, GameplayEffect) == 72, "Offset mismatch for FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData::GameplayEffect");
static_assert(offsetof(FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData, bRemoveEffectOnExit) == 80, "Offset mismatch for FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData::bRemoveEffectOnExit");
static_assert(offsetof(FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData, IdentifierTags) == 88, "Offset mismatch for FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData::IdentifierTags");
static_assert(offsetof(FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData, UserActor) == 120, "Offset mismatch for FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterAdvanceStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterAdvanceStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterAdvanceStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterAdvanceStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterAdvanceStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterAdvanceStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterAdvanceStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterAdvanceStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterAdvanceStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterAdvanceStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterAdvanceStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FLWMEncounterAdvanceStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterAdvanceStateTreeTaskInstanceData, UserActor) == 72, "Offset mismatch for FLWMEncounterAdvanceStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterAlertLevelTargetInfo
// Kind: ScriptStruct; super: none
struct FLWMEncounterAlertLevelTargetInfo
{
public:
    float AwareForgetTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLWMEncounterAlertLevelTargetInfo, AwareForgetTime) == 0, "Offset mismatch for FLWMEncounterAlertLevelTargetInfo::AwareForgetTime");

// /Script/EncountersRuntime.LWMEncounterAlertLevelTransitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterAlertLevelTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLWMEncounterAlertLevelTransitionStateTreeTask, TransitionTo) == 40, "Offset mismatch for FLWMEncounterAlertLevelTransitionStateTreeTask::TransitionTo");

// /Script/EncountersRuntime.LWMEncounterAlertLevelTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData
{
public:
    std::uint8_t OnTriggered[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t EncounterQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    TArray<void*> AlertLevels; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ComparisonOperator; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0069
    std::int32_t Value; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomVerb[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldTransition; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0099
    void* UserActor; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bTriggered; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData, OnTriggered) == 0, "Offset mismatch for FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData::OnTriggered");
static_assert(offsetof(FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData, EncounterQuery) == 16, "Offset mismatch for FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData, AlertLevels) == 88, "Offset mismatch for FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData::AlertLevels");
static_assert(offsetof(FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData, ComparisonOperator) == 104, "Offset mismatch for FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData::ComparisonOperator");
static_assert(offsetof(FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData, Value) == 108, "Offset mismatch for FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData::Value");
static_assert(offsetof(FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData, CustomVerb) == 112, "Offset mismatch for FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData::CustomVerb");
static_assert(offsetof(FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData, bShouldTransition) == 152, "Offset mismatch for FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData::bShouldTransition");
static_assert(offsetof(FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData, UserActor) == 160, "Offset mismatch for FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData, bTriggered) == 168, "Offset mismatch for FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData::bTriggered");

// /Script/EncountersRuntime.LWMEncounterAssignPointProvidersStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterAssignPointProvidersStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterAssignPointProvidersStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterAssignPointProvidersStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterAssignPointProvidersStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterAssignPointProvidersStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterAssignPointProvidersStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterAssignPointProvidersStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterAssignPointProvidersStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t PatrolPathTagQuery[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUseClosestProvider; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0091
    void* UserActor; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData, PatrolPathTagQuery) == 72, "Offset mismatch for FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData::PatrolPathTagQuery");
static_assert(offsetof(FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData, bUseClosestProvider) == 144, "Offset mismatch for FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData::bUseClosestProvider");
static_assert(offsetof(FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData, UserActor) == 152, "Offset mismatch for FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterDynamicStartStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterDynamicStartStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterDynamicStartStateTreeTaskInstanceData
// Kind: ScriptStruct; super: LWMEncounterStartSharedStateTreeTaskInstanceData
struct FLWMEncounterDynamicStartStateTreeTaskInstanceData
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t bSpecifyFaction; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0171
    void* Faction; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DynamicEncounterEntries; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DynamicEmptyEncounter[0x20]; // 0x0190 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> SpawnActions; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideEnvQuery; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01C1
    void* SpawnAroundEnvironmentQuery; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpawnAroundEnvironmentQueryRunMode; // 0x01D0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x7]; // 0x01D1
    std::uint8_t SpawnAroundNavigationSourceOverride[0x18]; // 0x01D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bWaitForEncounterDoneSpawning; // 0x01F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideDelayBetweenEvents; // 0x01F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x01F2
    float DelayBetweenEventsMin; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    float DelayBetweenEventsMax; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideStageActorMaxCount; // 0x01FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x01FD
    std::int32_t StageActorMaxCount; // 0x0200 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOverrideStageActorMaxSpawnedCount; // 0x0204 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0205
    std::int32_t StageActorMaxSpawnedCount; // 0x0208 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> EncounterInstance; // 0x020C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, bSpecifyFaction) == 368, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::bSpecifyFaction");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, Faction) == 376, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::Faction");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, DynamicEncounterEntries) == 384, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::DynamicEncounterEntries");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, DynamicEmptyEncounter) == 400, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::DynamicEmptyEncounter");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, SpawnActions) == 432, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::SpawnActions");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, bOverrideEnvQuery) == 448, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::bOverrideEnvQuery");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, SpawnAroundEnvironmentQuery) == 456, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::SpawnAroundEnvironmentQuery");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, SpawnAroundEnvironmentQueryRunMode) == 464, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::SpawnAroundEnvironmentQueryRunMode");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, SpawnAroundNavigationSourceOverride) == 472, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::SpawnAroundNavigationSourceOverride");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, bWaitForEncounterDoneSpawning) == 496, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::bWaitForEncounterDoneSpawning");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, bOverrideDelayBetweenEvents) == 497, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::bOverrideDelayBetweenEvents");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, DelayBetweenEventsMin) == 500, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::DelayBetweenEventsMin");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, DelayBetweenEventsMax) == 504, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::DelayBetweenEventsMax");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, bOverrideStageActorMaxCount) == 508, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::bOverrideStageActorMaxCount");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, StageActorMaxCount) == 512, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::StageActorMaxCount");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, bOverrideStageActorMaxSpawnedCount) == 516, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::bOverrideStageActorMaxSpawnedCount");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, StageActorMaxSpawnedCount) == 520, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::StageActorMaxSpawnedCount");
static_assert(offsetof(FLWMEncounterDynamicStartStateTreeTaskInstanceData, EncounterInstance) == 524, "Offset mismatch for FLWMEncounterDynamicStartStateTreeTaskInstanceData::EncounterInstance");

// /Script/EncountersRuntime.LWMEncounterInfo
// Kind: ScriptStruct; super: none
struct FLWMEncounterInfo
{
public:
    void* LWMEncounter; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterInfo, LWMEncounter) == 0, "Offset mismatch for FLWMEncounterInfo::LWMEncounter");

// /Script/EncountersRuntime.LWMEncounterInstanceEffectInfo
// Kind: ScriptStruct; super: none
struct FLWMEncounterInstanceEffectInfo
{
public:
    void* GameplayEffect; // 0x0000 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FLWMEncounterInstanceEffectInfo, GameplayEffect) == 0, "Offset mismatch for FLWMEncounterInstanceEffectInfo::GameplayEffect");

// /Script/EncountersRuntime.LWMEncounterInstanceSavedFactionMods
// Kind: ScriptStruct; super: none
struct FLWMEncounterInstanceSavedFactionMods
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EncountersRuntime.LWMEncounterInstanceSavedTargetInfo
// Kind: ScriptStruct; super: none
struct FLWMEncounterInstanceSavedTargetInfo
{
public:
    TWeakObjectPtr<void> Target; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FLWMEncounterInstanceSavedTargetInfo, Target) == 0, "Offset mismatch for FLWMEncounterInstanceSavedTargetInfo::Target");

// /Script/EncountersRuntime.LWMEncounterKillCountTransitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterKillCountTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLWMEncounterKillCountTransitionStateTreeTask, TransitionTo) == 40, "Offset mismatch for FLWMEncounterKillCountTransitionStateTreeTask::TransitionTo");

// /Script/EncountersRuntime.LWMEncounterKillCountTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterKillCountTransitionStateTreeTaskInstanceData
{
public:
    std::uint8_t OnTriggered[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t EncounterQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::uint32_t Value; // 0x0058 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x005C
    std::uint8_t CustomVerb[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldTransition; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0089
    void* UserActor; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bTriggered; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLWMEncounterKillCountTransitionStateTreeTaskInstanceData, OnTriggered) == 0, "Offset mismatch for FLWMEncounterKillCountTransitionStateTreeTaskInstanceData::OnTriggered");
static_assert(offsetof(FLWMEncounterKillCountTransitionStateTreeTaskInstanceData, EncounterQuery) == 16, "Offset mismatch for FLWMEncounterKillCountTransitionStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterKillCountTransitionStateTreeTaskInstanceData, Value) == 88, "Offset mismatch for FLWMEncounterKillCountTransitionStateTreeTaskInstanceData::Value");
static_assert(offsetof(FLWMEncounterKillCountTransitionStateTreeTaskInstanceData, CustomVerb) == 96, "Offset mismatch for FLWMEncounterKillCountTransitionStateTreeTaskInstanceData::CustomVerb");
static_assert(offsetof(FLWMEncounterKillCountTransitionStateTreeTaskInstanceData, bShouldTransition) == 136, "Offset mismatch for FLWMEncounterKillCountTransitionStateTreeTaskInstanceData::bShouldTransition");
static_assert(offsetof(FLWMEncounterKillCountTransitionStateTreeTaskInstanceData, UserActor) == 144, "Offset mismatch for FLWMEncounterKillCountTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FLWMEncounterKillCountTransitionStateTreeTaskInstanceData, bTriggered) == 152, "Offset mismatch for FLWMEncounterKillCountTransitionStateTreeTaskInstanceData::bTriggered");

// /Script/EncountersRuntime.LWMEncounterModifyActorFactionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterModifyActorFactionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterModifyActorFactionStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterModifyActorFactionStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterModifyActorFactionStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterModifyActorFactionStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterModifyActorFactionStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterModifyActorFactionStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterModifyActorFactionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterModifyActorFactionStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t FactionTag[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    std::uint8_t ModificationAction; // 0x004C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x004D
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterModifyActorFactionStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FLWMEncounterModifyActorFactionStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterModifyActorFactionStateTreeTaskInstanceData, FactionTag) == 72, "Offset mismatch for FLWMEncounterModifyActorFactionStateTreeTaskInstanceData::FactionTag");
static_assert(offsetof(FLWMEncounterModifyActorFactionStateTreeTaskInstanceData, ModificationAction) == 76, "Offset mismatch for FLWMEncounterModifyActorFactionStateTreeTaskInstanceData::ModificationAction");
static_assert(offsetof(FLWMEncounterModifyActorFactionStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FLWMEncounterModifyActorFactionStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterPauseStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterPauseStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterPauseStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterPauseStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterPauseStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterPauseStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterPauseStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterPauseStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterPauseStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterPauseStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterPauseStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FLWMEncounterPauseStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterPauseStateTreeTaskInstanceData, UserActor) == 72, "Offset mismatch for FLWMEncounterPauseStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterRemainingCountTransitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterRemainingCountTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLWMEncounterRemainingCountTransitionStateTreeTask, TransitionTo) == 40, "Offset mismatch for FLWMEncounterRemainingCountTransitionStateTreeTask::TransitionTo");

// /Script/EncountersRuntime.LWMEncounterRemainingCountTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData
{
public:
    std::uint8_t OnTriggered[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t EncounterQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::int32_t Value; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x005C
    void* UserActor; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOnlyTriggerOnce; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t CustomVerb[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldTransition; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggered; // 0x0099 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData, OnTriggered) == 0, "Offset mismatch for FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData::OnTriggered");
static_assert(offsetof(FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData, EncounterQuery) == 16, "Offset mismatch for FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData, Value) == 88, "Offset mismatch for FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData::Value");
static_assert(offsetof(FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData, UserActor) == 96, "Offset mismatch for FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData, bOnlyTriggerOnce) == 104, "Offset mismatch for FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData::bOnlyTriggerOnce");
static_assert(offsetof(FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData, CustomVerb) == 112, "Offset mismatch for FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData::CustomVerb");
static_assert(offsetof(FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData, bShouldTransition) == 152, "Offset mismatch for FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData::bShouldTransition");
static_assert(offsetof(FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData, bTriggered) == 153, "Offset mismatch for FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData::bTriggered");

// /Script/EncountersRuntime.LWMEncounterRemoveGameplayEffectStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterRemoveGameplayEffectStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterRemoveGameplayEffectStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterRemoveGameplayEffectStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterRemoveGameplayEffectStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterRemoveGameplayEffectStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterRemoveGameplayEffectStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterRemoveGameplayEffectStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData
{
public:
    std::uint8_t GameplayEffectQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData, GameplayEffectQuery) == 0, "Offset mismatch for FLWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData::GameplayEffectQuery");
static_assert(offsetof(FLWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData, UserActor) == 72, "Offset mismatch for FLWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterResumeStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterResumeStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterResumeStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterResumeStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterResumeStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterResumeStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterResumeStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterResumeStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterResumeStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterResumeStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterResumeStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FLWMEncounterResumeStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterResumeStateTreeTaskInstanceData, UserActor) == 72, "Offset mismatch for FLWMEncounterResumeStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterRow
// Kind: ScriptStruct; super: TableRowBase
struct FLWMEncounterRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> DynamicActorDescriptions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DynamicSpawnActions; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Tags[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    float Weight; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLWMEncounterRow, DynamicActorDescriptions) == 8, "Offset mismatch for FLWMEncounterRow::DynamicActorDescriptions");
static_assert(offsetof(FLWMEncounterRow, DynamicSpawnActions) == 24, "Offset mismatch for FLWMEncounterRow::DynamicSpawnActions");
static_assert(offsetof(FLWMEncounterRow, Tags) == 40, "Offset mismatch for FLWMEncounterRow::Tags");
static_assert(offsetof(FLWMEncounterRow, Weight) == 72, "Offset mismatch for FLWMEncounterRow::Weight");

// /Script/EncountersRuntime.LWMEncounterSetAlertLevelStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterSetAlertLevelStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterSetAlertLevelStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterSetAlertLevelStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterSetAlertLevelStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterSetAlertLevelStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterSetAlertLevelStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterSetAlertLevelStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterSetAlertLevelStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterSetAlertLevelStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t TargetInfo[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> TargetActor; // 0x004C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0054
    std::uint8_t TargetEncounterQuery[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    std::uint8_t TargetBehavior; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A1
    void* UserActor; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterSetAlertLevelStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FLWMEncounterSetAlertLevelStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterSetAlertLevelStateTreeTaskInstanceData, TargetInfo) == 72, "Offset mismatch for FLWMEncounterSetAlertLevelStateTreeTaskInstanceData::TargetInfo");
static_assert(offsetof(FLWMEncounterSetAlertLevelStateTreeTaskInstanceData, TargetActor) == 76, "Offset mismatch for FLWMEncounterSetAlertLevelStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FLWMEncounterSetAlertLevelStateTreeTaskInstanceData, TargetEncounterQuery) == 88, "Offset mismatch for FLWMEncounterSetAlertLevelStateTreeTaskInstanceData::TargetEncounterQuery");
static_assert(offsetof(FLWMEncounterSetAlertLevelStateTreeTaskInstanceData, TargetBehavior) == 160, "Offset mismatch for FLWMEncounterSetAlertLevelStateTreeTaskInstanceData::TargetBehavior");
static_assert(offsetof(FLWMEncounterSetAlertLevelStateTreeTaskInstanceData, UserActor) == 168, "Offset mismatch for FLWMEncounterSetAlertLevelStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterSetStageStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterSetStageStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterSetStageStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterSetStageStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterSetStageStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterSetStageStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterSetStageStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterSetStageStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterSetStageStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterSetStageStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::int32_t StageIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x004C
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterSetStageStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FLWMEncounterSetStageStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterSetStageStateTreeTaskInstanceData, StageIndex) == 72, "Offset mismatch for FLWMEncounterSetStageStateTreeTaskInstanceData::StageIndex");
static_assert(offsetof(FLWMEncounterSetStageStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FLWMEncounterSetStageStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterSpawnCompleteTransitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterSpawnCompleteTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLWMEncounterSpawnCompleteTransitionStateTreeTask, TransitionTo) == 40, "Offset mismatch for FLWMEncounterSpawnCompleteTransitionStateTreeTask::TransitionTo");

// /Script/EncountersRuntime.LWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData
{
public:
    std::uint8_t OnSpawnComplete[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t EncounterQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOnlyTriggerOnce; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0061
    std::uint8_t CustomVerb[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldTransition; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggered; // 0x0091 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData, OnSpawnComplete) == 0, "Offset mismatch for FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData::OnSpawnComplete");
static_assert(offsetof(FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData, EncounterQuery) == 16, "Offset mismatch for FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData, UserActor) == 88, "Offset mismatch for FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData, bOnlyTriggerOnce) == 96, "Offset mismatch for FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData::bOnlyTriggerOnce");
static_assert(offsetof(FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData, CustomVerb) == 104, "Offset mismatch for FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData::CustomVerb");
static_assert(offsetof(FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData, bShouldTransition) == 144, "Offset mismatch for FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData::bShouldTransition");
static_assert(offsetof(FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData, bTriggered) == 145, "Offset mismatch for FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData::bTriggered");

// /Script/EncountersRuntime.LWMEncounterStartSharedStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterStartSharedStateTreeTaskInstanceData
{
public:
    std::uint8_t PointProviderTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t bAttachVolumeToSpawn; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideAnchorPosition; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseVolumeAsAnchor; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x004B
    std::uint8_t AnchorPointTagQuery[0x48]; // 0x0050 (Size: 0x48, Type: StructProperty)
    std::uint8_t LeashRadiusInner[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t LeashRadiusOuter[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EncounterIdentifierTags[0x20]; // 0x00E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActorTags[0x20]; // 0x0108 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpawnTimeout[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t bPauseOnExit; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0151
    TWeakObjectPtr<void> OwningActor; // 0x0154 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Instigator; // 0x015C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0164
    void* UserActor; // 0x0168 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, PointProviderTagQuery) == 0, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::PointProviderTagQuery");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, bAttachVolumeToSpawn) == 72, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::bAttachVolumeToSpawn");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, bOverrideAnchorPosition) == 73, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::bOverrideAnchorPosition");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, bUseVolumeAsAnchor) == 74, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::bUseVolumeAsAnchor");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, AnchorPointTagQuery) == 80, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::AnchorPointTagQuery");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, LeashRadiusInner) == 152, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::LeashRadiusInner");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, LeashRadiusOuter) == 192, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::LeashRadiusOuter");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, EncounterIdentifierTags) == 232, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::EncounterIdentifierTags");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, ActorTags) == 264, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::ActorTags");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, SpawnTimeout) == 296, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::SpawnTimeout");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, bPauseOnExit) == 336, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::bPauseOnExit");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, OwningActor) == 340, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::OwningActor");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, Instigator) == 348, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::Instigator");
static_assert(offsetof(FLWMEncounterStartSharedStateTreeTaskInstanceData, UserActor) == 360, "Offset mismatch for FLWMEncounterStartSharedStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterStartStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterStartStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterStartStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterStartStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterStartStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterStartStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterStartStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterStartStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterStartStateTreeTaskInstanceData
// Kind: ScriptStruct; super: LWMEncounterStartSharedStateTreeTaskInstanceData
struct FLWMEncounterStartStateTreeTaskInstanceData
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t LWMEncounter[0x20]; // 0x0170 (Size: 0x20, Type: SoftObjectProperty)
    TWeakObjectPtr<void> EncounterInstance; // 0x0190 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FLWMEncounterStartStateTreeTaskInstanceData, LWMEncounter) == 368, "Offset mismatch for FLWMEncounterStartStateTreeTaskInstanceData::LWMEncounter");
static_assert(offsetof(FLWMEncounterStartStateTreeTaskInstanceData, EncounterInstance) == 400, "Offset mismatch for FLWMEncounterStartStateTreeTaskInstanceData::EncounterInstance");

// /Script/EncountersRuntime.LWMEncounterStopStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterStopStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterStopStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterStopStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterStopStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterStopStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterStopStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterStopStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterStopStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterStopStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterStopStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FLWMEncounterStopStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterStopStateTreeTaskInstanceData, UserActor) == 72, "Offset mismatch for FLWMEncounterStopStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMEncounterUpdateLeashStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMEncounterUpdateLeashStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTask::bTaskEnabled");
static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.LWMEncounterUpdateLeashStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMEncounterUpdateLeashStateTreeTaskInstanceData
{
public:
    std::uint8_t EncounterQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* TargetActor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOverrideAnchorPosition; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseVolumeAsAnchor; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0052
    std::uint8_t AnchorPointTagQuery[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    std::uint8_t LeashRadiusInner[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LeashRadiusOuter[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    TArray<void*> AlertLevelOverrides; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    void* UserActor; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTaskInstanceData, EncounterQuery) == 0, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTaskInstanceData::EncounterQuery");
static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTaskInstanceData, TargetActor) == 72, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTaskInstanceData, bOverrideAnchorPosition) == 80, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTaskInstanceData::bOverrideAnchorPosition");
static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTaskInstanceData, bUseVolumeAsAnchor) == 81, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTaskInstanceData::bUseVolumeAsAnchor");
static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTaskInstanceData, AnchorPointTagQuery) == 88, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTaskInstanceData::AnchorPointTagQuery");
static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTaskInstanceData, LeashRadiusInner) == 160, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTaskInstanceData::LeashRadiusInner");
static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTaskInstanceData, LeashRadiusOuter) == 200, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTaskInstanceData::LeashRadiusOuter");
static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTaskInstanceData, AlertLevelOverrides) == 240, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTaskInstanceData::AlertLevelOverrides");
static_assert(offsetof(FLWMEncounterUpdateLeashStateTreeTaskInstanceData, UserActor) == 256, "Offset mismatch for FLWMEncounterUpdateLeashStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.LWMWaitForNavMeshTransitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FLWMWaitForNavMeshTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLWMWaitForNavMeshTransitionStateTreeTask, TransitionTo) == 40, "Offset mismatch for FLWMWaitForNavMeshTransitionStateTreeTask::TransitionTo");

// /Script/EncountersRuntime.LWMWaitForNavMeshTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData
{
public:
    std::uint8_t OnNavMeshReady[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* UserActor; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> TargetActor; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Radius[0x28]; // 0x0020 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavAgentProperties[0x30]; // 0x0048 (Size: 0x30, Type: StructProperty)
    std::uint8_t bOnlyTriggerOnce; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggered; // 0x0079 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData, OnNavMeshReady) == 0, "Offset mismatch for FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData::OnNavMeshReady");
static_assert(offsetof(FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData, UserActor) == 16, "Offset mismatch for FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData, TargetActor) == 24, "Offset mismatch for FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData, Radius) == 32, "Offset mismatch for FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData::Radius");
static_assert(offsetof(FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData, NavAgentProperties) == 72, "Offset mismatch for FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData::NavAgentProperties");
static_assert(offsetof(FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData, bOnlyTriggerOnce) == 120, "Offset mismatch for FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData::bOnlyTriggerOnce");
static_assert(offsetof(FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData, bTriggered) == 121, "Offset mismatch for FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData::bTriggered");

// /Script/EncountersRuntime.ModifyAIRuntimeParametersStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FModifyAIRuntimeParametersStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FModifyAIRuntimeParametersStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FModifyAIRuntimeParametersStateTreeTask::bTaskEnabled");
static_assert(offsetof(FModifyAIRuntimeParametersStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FModifyAIRuntimeParametersStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FModifyAIRuntimeParametersStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FModifyAIRuntimeParametersStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.ModifyAIRuntimeParametersStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FModifyAIRuntimeParametersStateTreeTaskInstanceData
{
public:
    TWeakObjectPtr<void> TargetActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnterBTTaskConversationIfPlayerAround[0x4]; // 0x0008 (Size: 0x4, Type: OptionalProperty)
    std::uint8_t EnterBTTaskConversationIfPlayerAroundDist[0x8]; // 0x000C (Size: 0x8, Type: OptionalProperty)
    std::uint8_t bCanConverseWhenConverted[0x2]; // 0x0014 (Size: 0x2, Type: OptionalProperty)
    std::uint8_t bFocusOnConversationParticipant[0x2]; // 0x0016 (Size: 0x2, Type: OptionalProperty)
    void* UserActor; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FModifyAIRuntimeParametersStateTreeTaskInstanceData, TargetActor) == 0, "Offset mismatch for FModifyAIRuntimeParametersStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FModifyAIRuntimeParametersStateTreeTaskInstanceData, bEnterBTTaskConversationIfPlayerAround) == 8, "Offset mismatch for FModifyAIRuntimeParametersStateTreeTaskInstanceData::bEnterBTTaskConversationIfPlayerAround");
static_assert(offsetof(FModifyAIRuntimeParametersStateTreeTaskInstanceData, EnterBTTaskConversationIfPlayerAroundDist) == 12, "Offset mismatch for FModifyAIRuntimeParametersStateTreeTaskInstanceData::EnterBTTaskConversationIfPlayerAroundDist");
static_assert(offsetof(FModifyAIRuntimeParametersStateTreeTaskInstanceData, bCanConverseWhenConverted) == 20, "Offset mismatch for FModifyAIRuntimeParametersStateTreeTaskInstanceData::bCanConverseWhenConverted");
static_assert(offsetof(FModifyAIRuntimeParametersStateTreeTaskInstanceData, bFocusOnConversationParticipant) == 22, "Offset mismatch for FModifyAIRuntimeParametersStateTreeTaskInstanceData::bFocusOnConversationParticipant");
static_assert(offsetof(FModifyAIRuntimeParametersStateTreeTaskInstanceData, UserActor) == 24, "Offset mismatch for FModifyAIRuntimeParametersStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.OverrideAIBehaviorStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FOverrideAIBehaviorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FOverrideAIBehaviorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FOverrideAIBehaviorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FOverrideAIBehaviorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FOverrideAIBehaviorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FOverrideAIBehaviorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FOverrideAIBehaviorStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.OverrideAIBehaviorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FOverrideAIBehaviorStateTreeTaskInstanceData
{
public:
    TWeakObjectPtr<void> TargetActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t BehaviorControl; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* UserActor; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FOverrideAIBehaviorStateTreeTaskInstanceData, TargetActor) == 0, "Offset mismatch for FOverrideAIBehaviorStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FOverrideAIBehaviorStateTreeTaskInstanceData, BehaviorControl) == 8, "Offset mismatch for FOverrideAIBehaviorStateTreeTaskInstanceData::BehaviorControl");
static_assert(offsetof(FOverrideAIBehaviorStateTreeTaskInstanceData, UserActor) == 16, "Offset mismatch for FOverrideAIBehaviorStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.PauseMobEncounterStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FPauseMobEncounterStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPauseMobEncounterStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FPauseMobEncounterStateTreeTask::bTaskEnabled");
static_assert(offsetof(FPauseMobEncounterStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FPauseMobEncounterStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FPauseMobEncounterStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FPauseMobEncounterStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.PauseMobEncounterStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FPauseMobEncounterStateTreeTaskInstanceData
{
public:
    std::uint8_t MobIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPauseMobEncounterStateTreeTaskInstanceData, MobIdentifier) == 0, "Offset mismatch for FPauseMobEncounterStateTreeTaskInstanceData::MobIdentifier");
static_assert(offsetof(FPauseMobEncounterStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FPauseMobEncounterStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.RemoveEncounterPrefabTagStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FRemoveEncounterPrefabTagStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRemoveEncounterPrefabTagStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FRemoveEncounterPrefabTagStateTreeTask::bTaskEnabled");
static_assert(offsetof(FRemoveEncounterPrefabTagStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FRemoveEncounterPrefabTagStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FRemoveEncounterPrefabTagStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FRemoveEncounterPrefabTagStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.RemoveEncounterPrefabTagStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FRemoveEncounterPrefabTagStateTreeTaskInstanceData
{
public:
    std::uint8_t PrefabTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRemoveEncounterPrefabTagStateTreeTaskInstanceData, PrefabTag) == 0, "Offset mismatch for FRemoveEncounterPrefabTagStateTreeTaskInstanceData::PrefabTag");
static_assert(offsetof(FRemoveEncounterPrefabTagStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FRemoveEncounterPrefabTagStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.ResumeMobEncounterStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FResumeMobEncounterStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FResumeMobEncounterStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FResumeMobEncounterStateTreeTask::bTaskEnabled");
static_assert(offsetof(FResumeMobEncounterStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FResumeMobEncounterStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FResumeMobEncounterStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FResumeMobEncounterStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.ResumeMobEncounterStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FResumeMobEncounterStateTreeTaskInstanceData
{
public:
    std::uint8_t MobIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FResumeMobEncounterStateTreeTaskInstanceData, MobIdentifier) == 0, "Offset mismatch for FResumeMobEncounterStateTreeTaskInstanceData::MobIdentifier");
static_assert(offsetof(FResumeMobEncounterStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FResumeMobEncounterStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.ScenarioReactionEntry
// Kind: ScriptStruct; super: none
struct FScenarioReactionEntry
{
public:
    std::uint8_t RowValue[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScenarioReactionEntry, RowValue) == 0, "Offset mismatch for FScenarioReactionEntry::RowValue");

// /Script/EncountersRuntime.SpawnActorStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FSpawnActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSpawnActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FSpawnActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FSpawnActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FSpawnActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FSpawnActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FSpawnActorStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.SpawnActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FSpawnActorStateTreeTaskInstanceData
{
public:
    std::uint8_t ActorClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bUseActorLocation; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    TWeakObjectPtr<void> TargetActor; // 0x0024 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t AnchorQuery[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    std::uint8_t AnchorOffset[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnablePhysics; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAttachEncounterVolume; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0092
    std::uint8_t ActorTags[0x20]; // 0x0098 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActorIdentifierTags[0x20]; // 0x00B8 (Size: 0x20, Type: StructProperty)
    std::uint8_t PersistenceBehavior; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00D9
    std::uint8_t ExistingActorQuery[0x48]; // 0x00E0 (Size: 0x48, Type: StructProperty)
    TWeakObjectPtr<void> OwningActor; // 0x0128 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bWaitForSpawnedActor; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0131
    TWeakObjectPtr<void> SpawnedActor; // 0x0134 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0005[0x4]; // 0x013C
    void* UserActor; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    void* SpawnActorHelper; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, ActorClass) == 0, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::ActorClass");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, bUseActorLocation) == 32, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::bUseActorLocation");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, TargetActor) == 36, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, AnchorQuery) == 48, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::AnchorQuery");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, AnchorOffset) == 120, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::AnchorOffset");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, bEnablePhysics) == 144, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::bEnablePhysics");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, bAttachEncounterVolume) == 145, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::bAttachEncounterVolume");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, ActorTags) == 152, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::ActorTags");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, ActorIdentifierTags) == 184, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::ActorIdentifierTags");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, PersistenceBehavior) == 216, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::PersistenceBehavior");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, ExistingActorQuery) == 224, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::ExistingActorQuery");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, OwningActor) == 296, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::OwningActor");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, bWaitForSpawnedActor) == 304, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::bWaitForSpawnedActor");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, SpawnedActor) == 308, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::SpawnedActor");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, UserActor) == 320, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FSpawnActorStateTreeTaskInstanceData, SpawnActorHelper) == 328, "Offset mismatch for FSpawnActorStateTreeTaskInstanceData::SpawnActorHelper");

// /Script/EncountersRuntime.SpawnSquadStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FSpawnSquadStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSpawnSquadStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FSpawnSquadStateTreeTask::bTaskEnabled");
static_assert(offsetof(FSpawnSquadStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FSpawnSquadStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FSpawnSquadStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FSpawnSquadStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.SpawnSquadStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FSpawnSquadStateTreeTaskInstanceData
{
public:
    std::uint8_t Squad[0x68]; // 0x0000 (Size: 0x68, Type: StructProperty)
    std::uint8_t EncounterIdentifierTags[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    std::uint8_t DynamicEmptyEncounter[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> SpawnActions; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    void* UserActor; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> EncounterInstance; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSpawnSquadStateTreeTaskInstanceData, Squad) == 0, "Offset mismatch for FSpawnSquadStateTreeTaskInstanceData::Squad");
static_assert(offsetof(FSpawnSquadStateTreeTaskInstanceData, EncounterIdentifierTags) == 104, "Offset mismatch for FSpawnSquadStateTreeTaskInstanceData::EncounterIdentifierTags");
static_assert(offsetof(FSpawnSquadStateTreeTaskInstanceData, DynamicEmptyEncounter) == 136, "Offset mismatch for FSpawnSquadStateTreeTaskInstanceData::DynamicEmptyEncounter");
static_assert(offsetof(FSpawnSquadStateTreeTaskInstanceData, SpawnActions) == 168, "Offset mismatch for FSpawnSquadStateTreeTaskInstanceData::SpawnActions");
static_assert(offsetof(FSpawnSquadStateTreeTaskInstanceData, UserActor) == 184, "Offset mismatch for FSpawnSquadStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FSpawnSquadStateTreeTaskInstanceData, EncounterInstance) == 192, "Offset mismatch for FSpawnSquadStateTreeTaskInstanceData::EncounterInstance");

// /Script/EncountersRuntime.SpawnSquadWaveStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FSpawnSquadWaveStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSpawnSquadWaveStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FSpawnSquadWaveStateTreeTask::bTaskEnabled");
static_assert(offsetof(FSpawnSquadWaveStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FSpawnSquadWaveStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FSpawnSquadWaveStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FSpawnSquadWaveStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.SpawnSquadWaveStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FSpawnSquadWaveStateTreeTaskInstanceData
{
public:
    std::uint8_t WaveNum; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t AdditionalEncounterIdentifierTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t DynamicEmptyEncounter[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> SpawnActions; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* UserActor; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> EncounterInstance; // 0x0060 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSpawnSquadWaveStateTreeTaskInstanceData, WaveNum) == 0, "Offset mismatch for FSpawnSquadWaveStateTreeTaskInstanceData::WaveNum");
static_assert(offsetof(FSpawnSquadWaveStateTreeTaskInstanceData, AdditionalEncounterIdentifierTags) == 8, "Offset mismatch for FSpawnSquadWaveStateTreeTaskInstanceData::AdditionalEncounterIdentifierTags");
static_assert(offsetof(FSpawnSquadWaveStateTreeTaskInstanceData, DynamicEmptyEncounter) == 40, "Offset mismatch for FSpawnSquadWaveStateTreeTaskInstanceData::DynamicEmptyEncounter");
static_assert(offsetof(FSpawnSquadWaveStateTreeTaskInstanceData, SpawnActions) == 72, "Offset mismatch for FSpawnSquadWaveStateTreeTaskInstanceData::SpawnActions");
static_assert(offsetof(FSpawnSquadWaveStateTreeTaskInstanceData, UserActor) == 88, "Offset mismatch for FSpawnSquadWaveStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FSpawnSquadWaveStateTreeTaskInstanceData, EncounterInstance) == 96, "Offset mismatch for FSpawnSquadWaveStateTreeTaskInstanceData::EncounterInstance");

// /Script/EncountersRuntime.SquadDefinition
// Kind: ScriptStruct; super: none
struct FSquadDefinition
{
public:
    FString SquadName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> SquadMembers; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PointProviderTagQuery[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSquadDefinition, SquadName) == 0, "Offset mismatch for FSquadDefinition::SquadName");
static_assert(offsetof(FSquadDefinition, SquadMembers) == 16, "Offset mismatch for FSquadDefinition::SquadMembers");
static_assert(offsetof(FSquadDefinition, PointProviderTagQuery) == 32, "Offset mismatch for FSquadDefinition::PointProviderTagQuery");

// /Script/EncountersRuntime.SquadMemberEntry
// Kind: ScriptStruct; super: none
struct FSquadMemberEntry
{
public:
    std::uint8_t SquadRow[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::int32_t Count; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    FString EntryTitle; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSquadMemberEntry, SquadRow) == 0, "Offset mismatch for FSquadMemberEntry::SquadRow");
static_assert(offsetof(FSquadMemberEntry, Count) == 32, "Offset mismatch for FSquadMemberEntry::Count");
static_assert(offsetof(FSquadMemberEntry, EntryTitle) == 40, "Offset mismatch for FSquadMemberEntry::EntryTitle");

// /Script/EncountersRuntime.SquadWave
// Kind: ScriptStruct; super: none
struct FSquadWave
{
public:
    TArray<void*> Squads; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSquadWave, Squads) == 0, "Offset mismatch for FSquadWave::Squads");

// /Script/EncountersRuntime.StartMobEncounterStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FStartMobEncounterStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bStopEncounterOnExit; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStartMobEncounterStateTreeTask, bStopEncounterOnExit) == 40, "Offset mismatch for FStartMobEncounterStateTreeTask::bStopEncounterOnExit");

// /Script/EncountersRuntime.StartMobEncounterStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FStartMobEncounterStateTreeTaskInstanceData
{
public:
    std::uint8_t MobIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStartMobEncounterStateTreeTaskInstanceData, MobIdentifier) == 0, "Offset mismatch for FStartMobEncounterStateTreeTaskInstanceData::MobIdentifier");
static_assert(offsetof(FStartMobEncounterStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FStartMobEncounterStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.StartScenarioStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FStartScenarioStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStartScenarioStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FStartScenarioStateTreeTask::bTaskEnabled");
static_assert(offsetof(FStartScenarioStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStartScenarioStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStartScenarioStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FStartScenarioStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.StartScenarioStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FStartScenarioStateTreeTaskInstanceData
{
public:
    void* UserActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* PrefabClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ScenarioDefinition[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ScenarioIdentifierTags[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t AdditionalScenarioCompletionVerbTags[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocationQuery[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStartScenarioStateTreeTaskInstanceData, UserActor) == 0, "Offset mismatch for FStartScenarioStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FStartScenarioStateTreeTaskInstanceData, PrefabClass) == 8, "Offset mismatch for FStartScenarioStateTreeTaskInstanceData::PrefabClass");
static_assert(offsetof(FStartScenarioStateTreeTaskInstanceData, ScenarioDefinition) == 16, "Offset mismatch for FStartScenarioStateTreeTaskInstanceData::ScenarioDefinition");
static_assert(offsetof(FStartScenarioStateTreeTaskInstanceData, ScenarioIdentifierTags) == 48, "Offset mismatch for FStartScenarioStateTreeTaskInstanceData::ScenarioIdentifierTags");
static_assert(offsetof(FStartScenarioStateTreeTaskInstanceData, AdditionalScenarioCompletionVerbTags) == 80, "Offset mismatch for FStartScenarioStateTreeTaskInstanceData::AdditionalScenarioCompletionVerbTags");
static_assert(offsetof(FStartScenarioStateTreeTaskInstanceData, LocationQuery) == 112, "Offset mismatch for FStartScenarioStateTreeTaskInstanceData::LocationQuery");

// /Script/EncountersRuntime.StopMobEncounterStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FStopMobEncounterStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStopMobEncounterStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FStopMobEncounterStateTreeTask::bTaskEnabled");
static_assert(offsetof(FStopMobEncounterStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FStopMobEncounterStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FStopMobEncounterStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FStopMobEncounterStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.StopMobEncounterStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FStopMobEncounterStateTreeTaskInstanceData
{
public:
    std::uint8_t MobIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStopMobEncounterStateTreeTaskInstanceData, MobIdentifier) == 0, "Offset mismatch for FStopMobEncounterStateTreeTaskInstanceData::MobIdentifier");
static_assert(offsetof(FStopMobEncounterStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FStopMobEncounterStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.ToggleStateActorStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FToggleStateActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FToggleStateActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FToggleStateActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FToggleStateActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FToggleStateActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FToggleStateActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FToggleStateActorStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.ToggleStateActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FToggleStateActorStateTreeTaskInstanceData
{
public:
    void* TargetActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bToggleOn; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    void* UserActor; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FToggleStateActorStateTreeTaskInstanceData, TargetActor) == 0, "Offset mismatch for FToggleStateActorStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FToggleStateActorStateTreeTaskInstanceData, bToggleOn) == 8, "Offset mismatch for FToggleStateActorStateTreeTaskInstanceData::bToggleOn");
static_assert(offsetof(FToggleStateActorStateTreeTaskInstanceData, UserActor) == 16, "Offset mismatch for FToggleStateActorStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.TrackScenarioActorsStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FTrackScenarioActorsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTrackScenarioActorsStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FTrackScenarioActorsStateTreeTask::bTaskEnabled");
static_assert(offsetof(FTrackScenarioActorsStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FTrackScenarioActorsStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FTrackScenarioActorsStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FTrackScenarioActorsStateTreeTask::TransitionHandlingPriority");

// /Script/EncountersRuntime.TrackScenarioActorsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FTrackScenarioActorsStateTreeTaskInstanceData
{
public:
    TArray<void*> TargetActors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActorIdentifierTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t bDestroyOnScenarioComplete; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0031
    void* UserActor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTrackScenarioActorsStateTreeTaskInstanceData, TargetActors) == 0, "Offset mismatch for FTrackScenarioActorsStateTreeTaskInstanceData::TargetActors");
static_assert(offsetof(FTrackScenarioActorsStateTreeTaskInstanceData, ActorIdentifierTags) == 16, "Offset mismatch for FTrackScenarioActorsStateTreeTaskInstanceData::ActorIdentifierTags");
static_assert(offsetof(FTrackScenarioActorsStateTreeTaskInstanceData, bDestroyOnScenarioComplete) == 48, "Offset mismatch for FTrackScenarioActorsStateTreeTaskInstanceData::bDestroyOnScenarioComplete");
static_assert(offsetof(FTrackScenarioActorsStateTreeTaskInstanceData, UserActor) == 56, "Offset mismatch for FTrackScenarioActorsStateTreeTaskInstanceData::UserActor");

// /Script/EncountersRuntime.TrackedActorInfo
// Kind: ScriptStruct; super: none
struct FTrackedActorInfo
{
public:
    TWeakObjectPtr<void> TrackedActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FTrackedActorInfo, TrackedActor) == 0, "Offset mismatch for FTrackedActorInfo::TrackedActor");

// /Script/EncountersRuntime.UpdateLeashAlertLevelOverrideEntry
// Kind: ScriptStruct; super: none
struct FUpdateLeashAlertLevelOverrideEntry
{
public:
    std::uint8_t AlertLevel; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t LeashRadiusInner[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t LeashRadiusOuter[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUpdateLeashAlertLevelOverrideEntry, AlertLevel) == 0, "Offset mismatch for FUpdateLeashAlertLevelOverrideEntry::AlertLevel");
static_assert(offsetof(FUpdateLeashAlertLevelOverrideEntry, LeashRadiusInner) == 8, "Offset mismatch for FUpdateLeashAlertLevelOverrideEntry::LeashRadiusInner");
static_assert(offsetof(FUpdateLeashAlertLevelOverrideEntry, LeashRadiusOuter) == 48, "Offset mismatch for FUpdateLeashAlertLevelOverrideEntry::LeashRadiusOuter");

// /Script/EncountersRuntime.VarRow_DynamicEncounterConfig
// Kind: ScriptStruct; super: VarRow
struct FVarRow_DynamicEncounterConfig
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Value; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVarRow_DynamicEncounterConfig, Value) == 8, "Offset mismatch for FVarRow_DynamicEncounterConfig::Value");

// /Script/EncountersRuntime.VarRow_Faction
// Kind: ScriptStruct; super: VarRow
struct FVarRow_Faction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVarRow_Faction, Value) == 8, "Offset mismatch for FVarRow_Faction::Value");

// /Script/EncountersRuntime.VarRow_QuestDefinition
// Kind: ScriptStruct; super: VarRow
struct FVarRow_QuestDefinition
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> Value; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FVarRow_QuestDefinition, Value) == 8, "Offset mismatch for FVarRow_QuestDefinition::Value");

// /Script/EncountersRuntime.VarRow_ScenarioDefinition
// Kind: ScriptStruct; super: VarRow
struct FVarRow_ScenarioDefinition
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> Value; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FVarRow_ScenarioDefinition, Value) == 8, "Offset mismatch for FVarRow_ScenarioDefinition::Value");

// /Script/EncountersRuntime.VariableSelectionsRow_DynamicEncounterConfig
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_DynamicEncounterConfig
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_DynamicEncounterConfig, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_DynamicEncounterConfig::RowValue");

// /Script/EncountersRuntime.VariableSelectionsRow_Faction
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_Faction
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_Faction, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_Faction::RowValue");

// /Script/EncountersRuntime.VariableSelectionsRow_QuestDefinition
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_QuestDefinition
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_QuestDefinition, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_QuestDefinition::RowValue");

// /Script/EncountersRuntime.VariableSelectionsRow_ScenarioDefinition
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_ScenarioDefinition
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_ScenarioDefinition, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_ScenarioDefinition::RowValue");

// /Script/EncountersRuntime.VariableSelections_DynamicEncounterConfig
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_DynamicEncounterConfig
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_DynamicEncounterConfig, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_DynamicEncounterConfig::ValueChoiceTable");

// /Script/EncountersRuntime.VariableSelections_Faction
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_Faction
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_Faction, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_Faction::ValueChoiceTable");

// /Script/EncountersRuntime.VariableSelections_QuestDefinition
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_QuestDefinition
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_QuestDefinition, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_QuestDefinition::ValueChoiceTable");

// /Script/EncountersRuntime.VariableSelections_ScenarioDefinition
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_ScenarioDefinition
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_ScenarioDefinition, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_ScenarioDefinition::ValueChoiceTable");

// /Script/EncountersRuntime.Variable_DynamicEncounterConfig
// Kind: ScriptStruct; super: Variable
struct FVariable_DynamicEncounterConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_DynamicEncounterConfig, RowValue) == 16, "Offset mismatch for FVariable_DynamicEncounterConfig::RowValue");

// /Script/EncountersRuntime.Variable_Faction
// Kind: ScriptStruct; super: Variable
struct FVariable_Faction
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_Faction, RowValue) == 16, "Offset mismatch for FVariable_Faction::RowValue");

// /Script/EncountersRuntime.Variable_QuestDefinition
// Kind: ScriptStruct; super: Variable
struct FVariable_QuestDefinition
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_QuestDefinition, RowValue) == 16, "Offset mismatch for FVariable_QuestDefinition::RowValue");

// /Script/EncountersRuntime.Variable_ScenarioDefinition
// Kind: ScriptStruct; super: Variable
struct FVariable_ScenarioDefinition
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_ScenarioDefinition, RowValue) == 16, "Offset mismatch for FVariable_ScenarioDefinition::RowValue");

// /Script/EncountersRuntime.EncounterActorSpawnerData
// Kind: Class; super: FortAthenaActorSpawnerData
class UEncounterActorSpawnerData
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t EncounterEntry[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEncounterActorSpawnerData, EncounterEntry) == 120, "Offset mismatch for UEncounterActorSpawnerData::EncounterEntry");

// /Script/EncountersRuntime.EncounterBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UEncounterBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EncountersRuntime.EncounterCompositeVolume
// Kind: Class; super: EncounterGameplayVolume
class UEncounterCompositeVolume
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    std::uint8_t VolumeTagQuery[0x48]; // 0x0500 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUseOverlappingVolumesOnly; // 0x0548 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEncounterCompositeVolume, VolumeTagQuery) == 1280, "Offset mismatch for UEncounterCompositeVolume::VolumeTagQuery");
static_assert(offsetof(UEncounterCompositeVolume, bUseOverlappingVolumesOnly) == 1352, "Offset mismatch for UEncounterCompositeVolume::bUseOverlappingVolumesOnly");

// /Script/EncountersRuntime.EncounterFactionData
// Kind: Class; super: PrimaryDataAsset
class UEncounterFactionData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t FactionCapabilities[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t WorldConditionDefinition[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    void* LWMEncounterTable; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EnemiesSelection[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEncounterFactionData, FactionCapabilities) == 40, "Offset mismatch for UEncounterFactionData::FactionCapabilities");
static_assert(offsetof(UEncounterFactionData, WorldConditionDefinition) == 72, "Offset mismatch for UEncounterFactionData::WorldConditionDefinition");
static_assert(offsetof(UEncounterFactionData, LWMEncounterTable) == 112, "Offset mismatch for UEncounterFactionData::LWMEncounterTable");
static_assert(offsetof(UEncounterFactionData, EnemiesSelection) == 120, "Offset mismatch for UEncounterFactionData::EnemiesSelection");

// /Script/EncountersRuntime.EncounterGameplayCueActor
// Kind: Class; super: Actor
class UEncounterGameplayCueActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEncounterGameplayCueActor, PrimaryActorTick) == 40, "Offset mismatch for UEncounterGameplayCueActor::PrimaryActorTick");
static_assert(offsetof(UEncounterGameplayCueActor, bAlwaysRelevant) == 88, "Offset mismatch for UEncounterGameplayCueActor::bAlwaysRelevant");
static_assert(offsetof(UEncounterGameplayCueActor, bExchangedRoles) == 89, "Offset mismatch for UEncounterGameplayCueActor::bExchangedRoles");
static_assert(offsetof(UEncounterGameplayCueActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UEncounterGameplayCueActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UEncounterGameplayCueActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UEncounterGameplayCueActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UEncounterGameplayCueActor, bActorEnableCollision) == 93, "Offset mismatch for UEncounterGameplayCueActor::bActorEnableCollision");
static_assert(offsetof(UEncounterGameplayCueActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UEncounterGameplayCueActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UEncounterGameplayCueActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UEncounterGameplayCueActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UEncounterGameplayCueActor, RemoteRole) == 96, "Offset mismatch for UEncounterGameplayCueActor::RemoteRole");
static_assert(offsetof(UEncounterGameplayCueActor, InitialLifeSpan) == 100, "Offset mismatch for UEncounterGameplayCueActor::InitialLifeSpan");
static_assert(offsetof(UEncounterGameplayCueActor, CustomTimeDilation) == 104, "Offset mismatch for UEncounterGameplayCueActor::CustomTimeDilation");
static_assert(offsetof(UEncounterGameplayCueActor, RayTracingGroupId) == 108, "Offset mismatch for UEncounterGameplayCueActor::RayTracingGroupId");
static_assert(offsetof(UEncounterGameplayCueActor, AttachmentReplication) == 112, "Offset mismatch for UEncounterGameplayCueActor::AttachmentReplication");
static_assert(offsetof(UEncounterGameplayCueActor, ReplicatedMovement) == 208, "Offset mismatch for UEncounterGameplayCueActor::ReplicatedMovement");
static_assert(offsetof(UEncounterGameplayCueActor, Owner) == 344, "Offset mismatch for UEncounterGameplayCueActor::Owner");
static_assert(offsetof(UEncounterGameplayCueActor, NetDriverName) == 352, "Offset mismatch for UEncounterGameplayCueActor::NetDriverName");
static_assert(offsetof(UEncounterGameplayCueActor, Role) == 356, "Offset mismatch for UEncounterGameplayCueActor::Role");
static_assert(offsetof(UEncounterGameplayCueActor, NetDormancy) == 357, "Offset mismatch for UEncounterGameplayCueActor::NetDormancy");
static_assert(offsetof(UEncounterGameplayCueActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UEncounterGameplayCueActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UEncounterGameplayCueActor, AutoReceiveInput) == 359, "Offset mismatch for UEncounterGameplayCueActor::AutoReceiveInput");
static_assert(offsetof(UEncounterGameplayCueActor, InputPriority) == 360, "Offset mismatch for UEncounterGameplayCueActor::InputPriority");
static_assert(offsetof(UEncounterGameplayCueActor, InputComponent) == 368, "Offset mismatch for UEncounterGameplayCueActor::InputComponent");
static_assert(offsetof(UEncounterGameplayCueActor, NetTag) == 376, "Offset mismatch for UEncounterGameplayCueActor::NetTag");
static_assert(offsetof(UEncounterGameplayCueActor, NetCullDistanceSquared) == 380, "Offset mismatch for UEncounterGameplayCueActor::NetCullDistanceSquared");
static_assert(offsetof(UEncounterGameplayCueActor, NetUpdateFrequency) == 384, "Offset mismatch for UEncounterGameplayCueActor::NetUpdateFrequency");
static_assert(offsetof(UEncounterGameplayCueActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UEncounterGameplayCueActor::MinNetUpdateFrequency");
static_assert(offsetof(UEncounterGameplayCueActor, NetPriority) == 392, "Offset mismatch for UEncounterGameplayCueActor::NetPriority");
static_assert(offsetof(UEncounterGameplayCueActor, PhysicsReplicationMode) == 396, "Offset mismatch for UEncounterGameplayCueActor::PhysicsReplicationMode");
static_assert(offsetof(UEncounterGameplayCueActor, Instigator) == 408, "Offset mismatch for UEncounterGameplayCueActor::Instigator");
static_assert(offsetof(UEncounterGameplayCueActor, Children) == 416, "Offset mismatch for UEncounterGameplayCueActor::Children");
static_assert(offsetof(UEncounterGameplayCueActor, RootComponent) == 432, "Offset mismatch for UEncounterGameplayCueActor::RootComponent");
static_assert(offsetof(UEncounterGameplayCueActor, HLODLayer) == 448, "Offset mismatch for UEncounterGameplayCueActor::HLODLayer");
static_assert(offsetof(UEncounterGameplayCueActor, Layers) == 456, "Offset mismatch for UEncounterGameplayCueActor::Layers");
static_assert(offsetof(UEncounterGameplayCueActor, ParentComponent) == 472, "Offset mismatch for UEncounterGameplayCueActor::ParentComponent");
static_assert(offsetof(UEncounterGameplayCueActor, Tags) == 496, "Offset mismatch for UEncounterGameplayCueActor::Tags");
static_assert(offsetof(UEncounterGameplayCueActor, OnTakeAnyDamage) == 512, "Offset mismatch for UEncounterGameplayCueActor::OnTakeAnyDamage");
static_assert(offsetof(UEncounterGameplayCueActor, OnTakePointDamage) == 513, "Offset mismatch for UEncounterGameplayCueActor::OnTakePointDamage");
static_assert(offsetof(UEncounterGameplayCueActor, OnTakeRadialDamage) == 514, "Offset mismatch for UEncounterGameplayCueActor::OnTakeRadialDamage");
static_assert(offsetof(UEncounterGameplayCueActor, OnActorBeginOverlap) == 515, "Offset mismatch for UEncounterGameplayCueActor::OnActorBeginOverlap");
static_assert(offsetof(UEncounterGameplayCueActor, OnActorEndOverlap) == 516, "Offset mismatch for UEncounterGameplayCueActor::OnActorEndOverlap");
static_assert(offsetof(UEncounterGameplayCueActor, OnBeginCursorOver) == 517, "Offset mismatch for UEncounterGameplayCueActor::OnBeginCursorOver");
static_assert(offsetof(UEncounterGameplayCueActor, OnEndCursorOver) == 518, "Offset mismatch for UEncounterGameplayCueActor::OnEndCursorOver");
static_assert(offsetof(UEncounterGameplayCueActor, OnClicked) == 519, "Offset mismatch for UEncounterGameplayCueActor::OnClicked");
static_assert(offsetof(UEncounterGameplayCueActor, OnReleased) == 520, "Offset mismatch for UEncounterGameplayCueActor::OnReleased");
static_assert(offsetof(UEncounterGameplayCueActor, OnInputTouchBegin) == 521, "Offset mismatch for UEncounterGameplayCueActor::OnInputTouchBegin");
static_assert(offsetof(UEncounterGameplayCueActor, OnInputTouchEnd) == 522, "Offset mismatch for UEncounterGameplayCueActor::OnInputTouchEnd");
static_assert(offsetof(UEncounterGameplayCueActor, OnInputTouchEnter) == 523, "Offset mismatch for UEncounterGameplayCueActor::OnInputTouchEnter");
static_assert(offsetof(UEncounterGameplayCueActor, OnInputTouchLeave) == 524, "Offset mismatch for UEncounterGameplayCueActor::OnInputTouchLeave");
static_assert(offsetof(UEncounterGameplayCueActor, OnActorHit) == 525, "Offset mismatch for UEncounterGameplayCueActor::OnActorHit");
static_assert(offsetof(UEncounterGameplayCueActor, OnDestroyed) == 526, "Offset mismatch for UEncounterGameplayCueActor::OnDestroyed");
static_assert(offsetof(UEncounterGameplayCueActor, OnEndPlay) == 527, "Offset mismatch for UEncounterGameplayCueActor::OnEndPlay");
static_assert(offsetof(UEncounterGameplayCueActor, InstanceComponents) == 592, "Offset mismatch for UEncounterGameplayCueActor::InstanceComponents");
static_assert(offsetof(UEncounterGameplayCueActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UEncounterGameplayCueActor::BlueprintCreatedComponents");

// /Script/EncountersRuntime.EncounterGameplayVolume
// Kind: Class; super: FortQuestManagerVolume
class UEncounterGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x460]; // 0x0000
    void* EncounterStateTreeComponent; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0468
    TArray<void*> TrackedEncounterPointProviders; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TrackedEncounterAnchors; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TrackedActors; // 0x0490 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> AllVisitedPlayersMap; // 0x04A0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x48]; // 0x04B0
    TWeakObjectPtr<void> OwningPrefab; // 0x04F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UEncounterGameplayVolume, EncounterStateTreeComponent) == 1120, "Offset mismatch for UEncounterGameplayVolume::EncounterStateTreeComponent");
static_assert(offsetof(UEncounterGameplayVolume, TrackedEncounterPointProviders) == 1136, "Offset mismatch for UEncounterGameplayVolume::TrackedEncounterPointProviders");
static_assert(offsetof(UEncounterGameplayVolume, TrackedEncounterAnchors) == 1152, "Offset mismatch for UEncounterGameplayVolume::TrackedEncounterAnchors");
static_assert(offsetof(UEncounterGameplayVolume, TrackedActors) == 1168, "Offset mismatch for UEncounterGameplayVolume::TrackedActors");
static_assert(offsetof(UEncounterGameplayVolume, AllVisitedPlayersMap) == 1184, "Offset mismatch for UEncounterGameplayVolume::AllVisitedPlayersMap");
static_assert(offsetof(UEncounterGameplayVolume, OwningPrefab) == 1272, "Offset mismatch for UEncounterGameplayVolume::OwningPrefab");

// /Script/EncountersRuntime.EncounterItemDefinition
// Kind: Class; super: FortItemDefinition
class UEncounterItemDefinition
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t bAutoHandleSuccessFailure; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLevel; // 0x00A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00A2
    std::uint8_t Level[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ScenarioVolumeClass[0x20]; // 0x00C8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t StateTreeOverride[0x20]; // 0x00E8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ProximityGameplayCueTag[0x4]; // 0x0108 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActorCleanupGameplayCueTag[0x4]; // 0x010C (Size: 0x4, Type: StructProperty)
    std::uint8_t bUseOverlapTestForActorCollection; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0111
    TArray<void*> SuccessRewards; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReactionsToGrantOnSuccess; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SuccessRewardBehavior[0x80]; // 0x0138 (Size: 0x80, Type: StructProperty)
    std::uint8_t ActorSuccessGameplayCueTag[0x4]; // 0x01B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t PlayerSuccessGameplayCueTag[0x4]; // 0x01BC (Size: 0x4, Type: StructProperty)
    TArray<void*> FailureRewards; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReactionsToGrantOnFailure; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FailureRewardBehavior[0x80]; // 0x01E0 (Size: 0x80, Type: StructProperty)
    std::uint8_t ActorFailureGameplayCueTag[0x4]; // 0x0260 (Size: 0x4, Type: StructProperty)
    std::uint8_t PlayerFailureGameplayCueTag[0x4]; // 0x0264 (Size: 0x4, Type: StructProperty)
    std::uint8_t LWMDensityWeight[0x28]; // 0x0268 (Size: 0x28, Type: StructProperty)
    std::uint8_t LWMDensityRange[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseGlobalLWMBudget; // 0x02B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x02B9
    TArray<void*> Vars; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariableSelections; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariableCollectionSelections; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CanSpawnWorldConditionDefinition[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaveTable[0x20]; // 0x0318 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ActorSpawnerDatas; // 0x0338 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEncounterItemDefinition, bAutoHandleSuccessFailure) == 160, "Offset mismatch for UEncounterItemDefinition::bAutoHandleSuccessFailure");
static_assert(offsetof(UEncounterItemDefinition, bUseLevel) == 161, "Offset mismatch for UEncounterItemDefinition::bUseLevel");
static_assert(offsetof(UEncounterItemDefinition, Level) == 168, "Offset mismatch for UEncounterItemDefinition::Level");
static_assert(offsetof(UEncounterItemDefinition, ScenarioVolumeClass) == 200, "Offset mismatch for UEncounterItemDefinition::ScenarioVolumeClass");
static_assert(offsetof(UEncounterItemDefinition, StateTreeOverride) == 232, "Offset mismatch for UEncounterItemDefinition::StateTreeOverride");
static_assert(offsetof(UEncounterItemDefinition, ProximityGameplayCueTag) == 264, "Offset mismatch for UEncounterItemDefinition::ProximityGameplayCueTag");
static_assert(offsetof(UEncounterItemDefinition, ActorCleanupGameplayCueTag) == 268, "Offset mismatch for UEncounterItemDefinition::ActorCleanupGameplayCueTag");
static_assert(offsetof(UEncounterItemDefinition, bUseOverlapTestForActorCollection) == 272, "Offset mismatch for UEncounterItemDefinition::bUseOverlapTestForActorCollection");
static_assert(offsetof(UEncounterItemDefinition, SuccessRewards) == 280, "Offset mismatch for UEncounterItemDefinition::SuccessRewards");
static_assert(offsetof(UEncounterItemDefinition, ReactionsToGrantOnSuccess) == 296, "Offset mismatch for UEncounterItemDefinition::ReactionsToGrantOnSuccess");
static_assert(offsetof(UEncounterItemDefinition, SuccessRewardBehavior) == 312, "Offset mismatch for UEncounterItemDefinition::SuccessRewardBehavior");
static_assert(offsetof(UEncounterItemDefinition, ActorSuccessGameplayCueTag) == 440, "Offset mismatch for UEncounterItemDefinition::ActorSuccessGameplayCueTag");
static_assert(offsetof(UEncounterItemDefinition, PlayerSuccessGameplayCueTag) == 444, "Offset mismatch for UEncounterItemDefinition::PlayerSuccessGameplayCueTag");
static_assert(offsetof(UEncounterItemDefinition, FailureRewards) == 448, "Offset mismatch for UEncounterItemDefinition::FailureRewards");
static_assert(offsetof(UEncounterItemDefinition, ReactionsToGrantOnFailure) == 464, "Offset mismatch for UEncounterItemDefinition::ReactionsToGrantOnFailure");
static_assert(offsetof(UEncounterItemDefinition, FailureRewardBehavior) == 480, "Offset mismatch for UEncounterItemDefinition::FailureRewardBehavior");
static_assert(offsetof(UEncounterItemDefinition, ActorFailureGameplayCueTag) == 608, "Offset mismatch for UEncounterItemDefinition::ActorFailureGameplayCueTag");
static_assert(offsetof(UEncounterItemDefinition, PlayerFailureGameplayCueTag) == 612, "Offset mismatch for UEncounterItemDefinition::PlayerFailureGameplayCueTag");
static_assert(offsetof(UEncounterItemDefinition, LWMDensityWeight) == 616, "Offset mismatch for UEncounterItemDefinition::LWMDensityWeight");
static_assert(offsetof(UEncounterItemDefinition, LWMDensityRange) == 656, "Offset mismatch for UEncounterItemDefinition::LWMDensityRange");
static_assert(offsetof(UEncounterItemDefinition, bUseGlobalLWMBudget) == 696, "Offset mismatch for UEncounterItemDefinition::bUseGlobalLWMBudget");
static_assert(offsetof(UEncounterItemDefinition, Vars) == 704, "Offset mismatch for UEncounterItemDefinition::Vars");
static_assert(offsetof(UEncounterItemDefinition, VariableSelections) == 720, "Offset mismatch for UEncounterItemDefinition::VariableSelections");
static_assert(offsetof(UEncounterItemDefinition, VariableCollectionSelections) == 736, "Offset mismatch for UEncounterItemDefinition::VariableCollectionSelections");
static_assert(offsetof(UEncounterItemDefinition, CanSpawnWorldConditionDefinition) == 752, "Offset mismatch for UEncounterItemDefinition::CanSpawnWorldConditionDefinition");
static_assert(offsetof(UEncounterItemDefinition, WaveTable) == 792, "Offset mismatch for UEncounterItemDefinition::WaveTable");
static_assert(offsetof(UEncounterItemDefinition, ActorSpawnerDatas) == 824, "Offset mismatch for UEncounterItemDefinition::ActorSpawnerDatas");

// /Script/EncountersRuntime.EncounterManagerComponent
// Kind: Class; super: GameFrameworkComponent
class UEncounterManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> EncounterVolume; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* EncounterDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CenterActorOverride; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PostEncounterLWMEvent[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t PostEncounterLWMCategory[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t PostEncounterTagQuery[0x48]; // 0x00F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t ExplicitContributors[0x10]; // 0x0140 (Size: 0x10, Type: SetProperty)
    TArray<void*> ActorIdentifiers; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasHandledSuccessFailure; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0161
    TArray<void*> EncounterInfos; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GameplayEffectInfos; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> EncounterPrefab; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
    void* SelectedFaction; // 0x0190 (Size: 0x8, Type: ObjectProperty)
    void* LWMEncounterTable; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x80]; // 0x01A0
    TWeakObjectPtr<void> LastThreat; // 0x0220 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ReservoirActor; // 0x0228 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> TrackedActorInfos; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x30]; // 0x0240
    TArray<void*> LoadedObjects; // 0x0270 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEncounterManagerComponent, EncounterVolume) == 192, "Offset mismatch for UEncounterManagerComponent::EncounterVolume");
static_assert(offsetof(UEncounterManagerComponent, EncounterDefinition) == 200, "Offset mismatch for UEncounterManagerComponent::EncounterDefinition");
static_assert(offsetof(UEncounterManagerComponent, CenterActorOverride) == 208, "Offset mismatch for UEncounterManagerComponent::CenterActorOverride");
static_assert(offsetof(UEncounterManagerComponent, PostEncounterLWMEvent) == 216, "Offset mismatch for UEncounterManagerComponent::PostEncounterLWMEvent");
static_assert(offsetof(UEncounterManagerComponent, PostEncounterLWMCategory) == 232, "Offset mismatch for UEncounterManagerComponent::PostEncounterLWMCategory");
static_assert(offsetof(UEncounterManagerComponent, PostEncounterTagQuery) == 248, "Offset mismatch for UEncounterManagerComponent::PostEncounterTagQuery");
static_assert(offsetof(UEncounterManagerComponent, ExplicitContributors) == 320, "Offset mismatch for UEncounterManagerComponent::ExplicitContributors");
static_assert(offsetof(UEncounterManagerComponent, ActorIdentifiers) == 336, "Offset mismatch for UEncounterManagerComponent::ActorIdentifiers");
static_assert(offsetof(UEncounterManagerComponent, bHasHandledSuccessFailure) == 352, "Offset mismatch for UEncounterManagerComponent::bHasHandledSuccessFailure");
static_assert(offsetof(UEncounterManagerComponent, EncounterInfos) == 360, "Offset mismatch for UEncounterManagerComponent::EncounterInfos");
static_assert(offsetof(UEncounterManagerComponent, GameplayEffectInfos) == 376, "Offset mismatch for UEncounterManagerComponent::GameplayEffectInfos");
static_assert(offsetof(UEncounterManagerComponent, EncounterPrefab) == 392, "Offset mismatch for UEncounterManagerComponent::EncounterPrefab");
static_assert(offsetof(UEncounterManagerComponent, SelectedFaction) == 400, "Offset mismatch for UEncounterManagerComponent::SelectedFaction");
static_assert(offsetof(UEncounterManagerComponent, LWMEncounterTable) == 408, "Offset mismatch for UEncounterManagerComponent::LWMEncounterTable");
static_assert(offsetof(UEncounterManagerComponent, LastThreat) == 544, "Offset mismatch for UEncounterManagerComponent::LastThreat");
static_assert(offsetof(UEncounterManagerComponent, ReservoirActor) == 552, "Offset mismatch for UEncounterManagerComponent::ReservoirActor");
static_assert(offsetof(UEncounterManagerComponent, TrackedActorInfos) == 560, "Offset mismatch for UEncounterManagerComponent::TrackedActorInfos");
static_assert(offsetof(UEncounterManagerComponent, LoadedObjects) == 624, "Offset mismatch for UEncounterManagerComponent::LoadedObjects");

// /Script/EncountersRuntime.EncounterMarkupInterface
// Kind: Class; super: Interface
class UEncounterMarkupInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EncountersRuntime.EncounterMobAnchor
// Kind: Class; super: Actor
class UEncounterMobAnchor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t MarkupRadius[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    void* DefaultSceneRoot; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* SphereCollision; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FilterTags[0x1]; // 0x02B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEncounterMobAnchor, MarkupRadius) == 632, "Offset mismatch for UEncounterMobAnchor::MarkupRadius");
static_assert(offsetof(UEncounterMobAnchor, DefaultSceneRoot) == 672, "Offset mismatch for UEncounterMobAnchor::DefaultSceneRoot");
static_assert(offsetof(UEncounterMobAnchor, SphereCollision) == 680, "Offset mismatch for UEncounterMobAnchor::SphereCollision");
static_assert(offsetof(UEncounterMobAnchor, FilterTags) == 688, "Offset mismatch for UEncounterMobAnchor::FilterTags");

// /Script/EncountersRuntime.EncounterMobManagerComponent
// Kind: Class; super: GameFrameworkComponent
class UEncounterMobManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> SpawnedMobs; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MobEncounterSpawnData; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultMobSpawnInfo[0xA0]; // 0x00E0 (Size: 0xA0, Type: StructProperty)
    std::uint8_t LWMDensityWeight[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t LWMDensityRange[0x28]; // 0x01A8 (Size: 0x28, Type: StructProperty)
    FMulticastInlineDelegate OnEncounterStarted; // 0x01D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterPaused; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterResumed; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterActorSpawned; // 0x0200 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterActorDead; // 0x0210 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterEnded; // 0x0220 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> EncounterPrefab; // 0x0230 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UEncounterMobManagerComponent, SpawnedMobs) == 192, "Offset mismatch for UEncounterMobManagerComponent::SpawnedMobs");
static_assert(offsetof(UEncounterMobManagerComponent, MobEncounterSpawnData) == 208, "Offset mismatch for UEncounterMobManagerComponent::MobEncounterSpawnData");
static_assert(offsetof(UEncounterMobManagerComponent, DefaultMobSpawnInfo) == 224, "Offset mismatch for UEncounterMobManagerComponent::DefaultMobSpawnInfo");
static_assert(offsetof(UEncounterMobManagerComponent, LWMDensityWeight) == 384, "Offset mismatch for UEncounterMobManagerComponent::LWMDensityWeight");
static_assert(offsetof(UEncounterMobManagerComponent, LWMDensityRange) == 424, "Offset mismatch for UEncounterMobManagerComponent::LWMDensityRange");
static_assert(offsetof(UEncounterMobManagerComponent, OnEncounterStarted) == 464, "Offset mismatch for UEncounterMobManagerComponent::OnEncounterStarted");
static_assert(offsetof(UEncounterMobManagerComponent, OnEncounterPaused) == 480, "Offset mismatch for UEncounterMobManagerComponent::OnEncounterPaused");
static_assert(offsetof(UEncounterMobManagerComponent, OnEncounterResumed) == 496, "Offset mismatch for UEncounterMobManagerComponent::OnEncounterResumed");
static_assert(offsetof(UEncounterMobManagerComponent, OnEncounterActorSpawned) == 512, "Offset mismatch for UEncounterMobManagerComponent::OnEncounterActorSpawned");
static_assert(offsetof(UEncounterMobManagerComponent, OnEncounterActorDead) == 528, "Offset mismatch for UEncounterMobManagerComponent::OnEncounterActorDead");
static_assert(offsetof(UEncounterMobManagerComponent, OnEncounterEnded) == 544, "Offset mismatch for UEncounterMobManagerComponent::OnEncounterEnded");
static_assert(offsetof(UEncounterMobManagerComponent, EncounterPrefab) == 560, "Offset mismatch for UEncounterMobManagerComponent::EncounterPrefab");

// /Script/EncountersRuntime.EncounterPatrolPathPointProvider
// Kind: Class; super: FortAthenaPatrolPathPointProvider
class UEncounterPatrolPathPointProvider
{
public:
    std::uint8_t Pad_0000[0x388]; // 0x0000
    std::uint8_t MarkupRadius[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    void* SphereCollision; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEncounterPatrolPathPointProvider, MarkupRadius) == 904, "Offset mismatch for UEncounterPatrolPathPointProvider::MarkupRadius");
static_assert(offsetof(UEncounterPatrolPathPointProvider, SphereCollision) == 944, "Offset mismatch for UEncounterPatrolPathPointProvider::SphereCollision");

// /Script/EncountersRuntime.EncounterPointProviderInterface
// Kind: Class; super: Interface
class UEncounterPointProviderInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EncountersRuntime.EncounterStateTreeComponent
// Kind: Class; super: StateTreeComponent
class UEncounterStateTreeComponent
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t StateTreeRef[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t LinkedStateTreeOverrides[0x10]; // 0x0160 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceData[0x10]; // 0x0170 (Size: 0x10, Type: StructProperty)
    std::uint8_t bStartLogicAutomatically; // 0x0180 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEncounterStateTreeComponent, OnStateTreeRunStatusChanged) == 296, "Offset mismatch for UEncounterStateTreeComponent::OnStateTreeRunStatusChanged");
static_assert(offsetof(UEncounterStateTreeComponent, StateTreeRef) == 312, "Offset mismatch for UEncounterStateTreeComponent::StateTreeRef");
static_assert(offsetof(UEncounterStateTreeComponent, LinkedStateTreeOverrides) == 352, "Offset mismatch for UEncounterStateTreeComponent::LinkedStateTreeOverrides");
static_assert(offsetof(UEncounterStateTreeComponent, InstanceData) == 368, "Offset mismatch for UEncounterStateTreeComponent::InstanceData");
static_assert(offsetof(UEncounterStateTreeComponent, bStartLogicAutomatically) == 384, "Offset mismatch for UEncounterStateTreeComponent::bStartLogicAutomatically");

// /Script/EncountersRuntime.EncounterStaticPointProvider
// Kind: Class; super: FortAthenaLivingWorldStaticPointProvider
class UEncounterStaticPointProvider
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    std::uint8_t MarkupRadius[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    void* SphereCollision; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEncounterStaticPointProvider, MarkupRadius) == 944, "Offset mismatch for UEncounterStaticPointProvider::MarkupRadius");
static_assert(offsetof(UEncounterStaticPointProvider, SphereCollision) == 984, "Offset mismatch for UEncounterStaticPointProvider::SphereCollision");

// /Script/EncountersRuntime.EncounterVolumePointProvider
// Kind: Class; super: FortAthenaLivingWorldVolume
class UEncounterVolumePointProvider
{
public:
    std::uint8_t Pad_0000[0x550]; // 0x0000
    std::uint8_t MarkupRadius[0x28]; // 0x0550 (Size: 0x28, Type: StructProperty)
    void* SphereCollision; // 0x0578 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEncounterVolumePointProvider, MarkupRadius) == 1360, "Offset mismatch for UEncounterVolumePointProvider::MarkupRadius");
static_assert(offsetof(UEncounterVolumePointProvider, SphereCollision) == 1400, "Offset mismatch for UEncounterVolumePointProvider::SphereCollision");

// /Script/EncountersRuntime.EncounterWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class UEncounterWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEncounterWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UEncounterWorldConditionSchema::ContextDataDescs");

// /Script/EncountersRuntime.FortCheatManager_Encounters
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_Encounters
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EncountersRuntime.FortVerbProcessor_EncounterCompleted
// Kind: Class; super: FortObjectiveProcessor
class UFortVerbProcessor_EncounterCompleted
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortVerbProcessor_EncounterCompleted, OwningProcessorSubsystem) == 56, "Offset mismatch for UFortVerbProcessor_EncounterCompleted::OwningProcessorSubsystem");

// /Script/EncountersRuntime.FortVerbProcessor_EncounterLoading
// Kind: Class; super: FortObjectiveProcessor
class UFortVerbProcessor_EncounterLoading
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortVerbProcessor_EncounterLoading, OwningProcessorSubsystem) == 56, "Offset mismatch for UFortVerbProcessor_EncounterLoading::OwningProcessorSubsystem");

// /Script/EncountersRuntime.LWMEncounterInstance
// Kind: Class; super: Object
class ULWMEncounterInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> LWMInstance; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> SpawnedMobPawns; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnedActors; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SavedTargetActors; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SavedFactionMods; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0070
    TWeakObjectPtr<void> EncounterAnchorPoint; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwningVolume; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ActivePointProviderInterfaces; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULWMEncounterInstance, LWMInstance) == 40, "Offset mismatch for ULWMEncounterInstance::LWMInstance");
static_assert(offsetof(ULWMEncounterInstance, SpawnedMobPawns) == 48, "Offset mismatch for ULWMEncounterInstance::SpawnedMobPawns");
static_assert(offsetof(ULWMEncounterInstance, SpawnedActors) == 64, "Offset mismatch for ULWMEncounterInstance::SpawnedActors");
static_assert(offsetof(ULWMEncounterInstance, SavedTargetActors) == 80, "Offset mismatch for ULWMEncounterInstance::SavedTargetActors");
static_assert(offsetof(ULWMEncounterInstance, SavedFactionMods) == 96, "Offset mismatch for ULWMEncounterInstance::SavedFactionMods");
static_assert(offsetof(ULWMEncounterInstance, EncounterAnchorPoint) == 136, "Offset mismatch for ULWMEncounterInstance::EncounterAnchorPoint");
static_assert(offsetof(ULWMEncounterInstance, OwningVolume) == 144, "Offset mismatch for ULWMEncounterInstance::OwningVolume");
static_assert(offsetof(ULWMEncounterInstance, ActivePointProviderInterfaces) == 152, "Offset mismatch for ULWMEncounterInstance::ActivePointProviderInterfaces");

// /Script/EncountersRuntime.LivingWorldEncounterPrefab
// Kind: Class; super: FortAthenaLivingWorldPrefab
class ULivingWorldEncounterPrefab
{
public:
    std::uint8_t Pad_0000[0xA08]; // 0x0000
    TArray<void*> EncounterEntries; // 0x0A08 (Size: 0x10, Type: ArrayProperty)
    void* EncounterDefinition; // 0x0A18 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0A20
    TWeakObjectPtr<void> ReservoirActorOverride; // 0x0A40 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ParentScenarioPrefab; // 0x0A48 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> EncounterManager; // 0x0A50 (Size: 0x8, Type: WeakObjectProperty)
    void* SpawnedScenarioVolume; // 0x0A58 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULivingWorldEncounterPrefab, EncounterEntries) == 2568, "Offset mismatch for ULivingWorldEncounterPrefab::EncounterEntries");
static_assert(offsetof(ULivingWorldEncounterPrefab, EncounterDefinition) == 2584, "Offset mismatch for ULivingWorldEncounterPrefab::EncounterDefinition");
static_assert(offsetof(ULivingWorldEncounterPrefab, ReservoirActorOverride) == 2624, "Offset mismatch for ULivingWorldEncounterPrefab::ReservoirActorOverride");
static_assert(offsetof(ULivingWorldEncounterPrefab, ParentScenarioPrefab) == 2632, "Offset mismatch for ULivingWorldEncounterPrefab::ParentScenarioPrefab");
static_assert(offsetof(ULivingWorldEncounterPrefab, EncounterManager) == 2640, "Offset mismatch for ULivingWorldEncounterPrefab::EncounterManager");
static_assert(offsetof(ULivingWorldEncounterPrefab, SpawnedScenarioVolume) == 2648, "Offset mismatch for ULivingWorldEncounterPrefab::SpawnedScenarioVolume");

// /Script/EncountersRuntime.SpawnActorTaskHelper
// Kind: Class; super: Object
class USpawnActorTaskHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EncountersRuntime.SquadWaveTable
// Kind: Class; super: PrimaryDataAsset
class USquadWaveTable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Waves; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USquadWaveTable, Waves) == 40, "Offset mismatch for USquadWaveTable::Waves");
