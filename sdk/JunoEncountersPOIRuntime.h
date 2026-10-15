/**
 * decamp dumper generated SDK
 * Package: /Script/JunoEncountersPOIRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoEncountersPOIRuntime.FindPrefabSpawnedActorStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FFindPrefabSpawnedActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFindPrefabSpawnedActorStateTreeTask, TransitionTo) == 40, "Offset mismatch for FFindPrefabSpawnedActorStateTreeTask::TransitionTo");

// /Script/JunoEncountersPOIRuntime.FindPrefabSpawnedActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFindPrefabSpawnedActorStateTreeTaskInstanceData
{
public:
    void* MustBeOfClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> Actor; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFindPrefabSpawnedActorStateTreeTaskInstanceData, MustBeOfClass) == 0, "Offset mismatch for FFindPrefabSpawnedActorStateTreeTaskInstanceData::MustBeOfClass");
static_assert(offsetof(FFindPrefabSpawnedActorStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FFindPrefabSpawnedActorStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FFindPrefabSpawnedActorStateTreeTaskInstanceData, Actor) == 16, "Offset mismatch for FFindPrefabSpawnedActorStateTreeTaskInstanceData::Actor");

// /Script/JunoEncountersPOIRuntime.FortInitialProgress_EncounterLoaded
// Kind: ScriptStruct; super: FortInitialProgressBase
struct FFortInitialProgress_EncounterLoaded
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EncounterItemDef[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t VolumeContext[0x48]; // 0x0050 (Size: 0x48, Type: StructProperty)
    std::uint8_t VisitState; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CompletionState; // 0x0099 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortInitialProgress_EncounterLoaded, EncounterItemDef) == 8, "Offset mismatch for FFortInitialProgress_EncounterLoaded::EncounterItemDef");
static_assert(offsetof(FFortInitialProgress_EncounterLoaded, VolumeContext) == 80, "Offset mismatch for FFortInitialProgress_EncounterLoaded::VolumeContext");
static_assert(offsetof(FFortInitialProgress_EncounterLoaded, VisitState) == 152, "Offset mismatch for FFortInitialProgress_EncounterLoaded::VisitState");
static_assert(offsetof(FFortInitialProgress_EncounterLoaded, CompletionState) == 153, "Offset mismatch for FFortInitialProgress_EncounterLoaded::CompletionState");

// /Script/JunoEncountersPOIRuntime.JunoActorIsValidTransitionStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FJunoActorIsValidTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ActorValidTransitionTo[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t bTransitionWhenActorIsValid; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002D
    std::uint8_t ActorNotValidTransitionTo[0x4]; // 0x002E (Size: 0x4, Type: StructProperty)
    std::uint8_t bTransitionWhenActorIsNotValid; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionWhenActorValidityChanges; // 0x0033 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoActorIsValidTransitionStateTreeTask, ActorValidTransitionTo) == 40, "Offset mismatch for FJunoActorIsValidTransitionStateTreeTask::ActorValidTransitionTo");
static_assert(offsetof(FJunoActorIsValidTransitionStateTreeTask, bTransitionWhenActorIsValid) == 44, "Offset mismatch for FJunoActorIsValidTransitionStateTreeTask::bTransitionWhenActorIsValid");
static_assert(offsetof(FJunoActorIsValidTransitionStateTreeTask, ActorNotValidTransitionTo) == 46, "Offset mismatch for FJunoActorIsValidTransitionStateTreeTask::ActorNotValidTransitionTo");
static_assert(offsetof(FJunoActorIsValidTransitionStateTreeTask, bTransitionWhenActorIsNotValid) == 50, "Offset mismatch for FJunoActorIsValidTransitionStateTreeTask::bTransitionWhenActorIsNotValid");
static_assert(offsetof(FJunoActorIsValidTransitionStateTreeTask, bTransitionWhenActorValidityChanges) == 51, "Offset mismatch for FJunoActorIsValidTransitionStateTreeTask::bTransitionWhenActorValidityChanges");

// /Script/JunoEncountersPOIRuntime.JunoActorIsValidTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoActorIsValidTransitionStateTreeTaskInstanceData
{
public:
    TWeakObjectPtr<void> ActorToValidate; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bActorWasValidOnEnterState; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoActorIsValidTransitionStateTreeTaskInstanceData, ActorToValidate) == 0, "Offset mismatch for FJunoActorIsValidTransitionStateTreeTaskInstanceData::ActorToValidate");
static_assert(offsetof(FJunoActorIsValidTransitionStateTreeTaskInstanceData, bActorWasValidOnEnterState) == 8, "Offset mismatch for FJunoActorIsValidTransitionStateTreeTaskInstanceData::bActorWasValidOnEnterState");

// /Script/JunoEncountersPOIRuntime.JunoCampApplyPersistentTagsStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FJunoCampApplyPersistentTagsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoCampApplyPersistentTagsStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoCampApplyPersistentTagsStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoCampApplyPersistentTagsStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoCampApplyPersistentTagsStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoCampApplyPersistentTagsStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoCampApplyPersistentTagsStateTreeTask::TransitionHandlingPriority");

// /Script/JunoEncountersPOIRuntime.JunoCampApplyPersistentTagsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoCampApplyPersistentTagsStateTreeTaskInstanceData
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    void* UserActor; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoCampApplyPersistentTagsStateTreeTaskInstanceData, Tags) == 0, "Offset mismatch for FJunoCampApplyPersistentTagsStateTreeTaskInstanceData::Tags");
static_assert(offsetof(FJunoCampApplyPersistentTagsStateTreeTaskInstanceData, UserActor) == 32, "Offset mismatch for FJunoCampApplyPersistentTagsStateTreeTaskInstanceData::UserActor");

// /Script/JunoEncountersPOIRuntime.JunoCampGetPersistentTagsStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FJunoCampGetPersistentTagsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoCampGetPersistentTagsStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoCampGetPersistentTagsStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoCampGetPersistentTagsStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoCampGetPersistentTagsStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoCampGetPersistentTagsStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoCampGetPersistentTagsStateTreeTask::TransitionHandlingPriority");

// /Script/JunoEncountersPOIRuntime.JunoCampGetPersistentTagsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoCampGetPersistentTagsStateTreeTaskInstanceData
{
public:
    std::uint8_t Value[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    void* UserActor; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoCampGetPersistentTagsStateTreeTaskInstanceData, Value) == 0, "Offset mismatch for FJunoCampGetPersistentTagsStateTreeTaskInstanceData::Value");
static_assert(offsetof(FJunoCampGetPersistentTagsStateTreeTaskInstanceData, UserActor) == 32, "Offset mismatch for FJunoCampGetPersistentTagsStateTreeTaskInstanceData::UserActor");

// /Script/JunoEncountersPOIRuntime.JunoEnableCaveExitGateStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FJunoEnableCaveExitGateStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoEnableCaveExitGateStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoEnableCaveExitGateStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoEnableCaveExitGateStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoEnableCaveExitGateStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoEnableCaveExitGateStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoEnableCaveExitGateStateTreeTask::TransitionHandlingPriority");

// /Script/JunoEncountersPOIRuntime.JunoEnableCaveExitGateStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoEnableCaveExitGateStateTreeTaskInstanceData
{
public:
    void* UserActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GateActors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoEnableCaveExitGateStateTreeTaskInstanceData, UserActor) == 0, "Offset mismatch for FJunoEnableCaveExitGateStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FJunoEnableCaveExitGateStateTreeTaskInstanceData, GateActors) == 8, "Offset mismatch for FJunoEnableCaveExitGateStateTreeTaskInstanceData::GateActors");

// /Script/JunoEncountersPOIRuntime.JunoEnableVillagerProviderStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FJunoEnableVillagerProviderStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoEnableVillagerProviderStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoEnableVillagerProviderStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoEnableVillagerProviderStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoEnableVillagerProviderStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoEnableVillagerProviderStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoEnableVillagerProviderStateTreeTask::TransitionHandlingPriority");

// /Script/JunoEncountersPOIRuntime.JunoEnableVillagerProviderStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoEnableVillagerProviderStateTreeTaskInstanceData
{
public:
    TWeakObjectPtr<void> VillagerProvider; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LWMPointProvider; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnableProvider; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t AssignUniqueAIIdentifier[0x4]; // 0x0014 (Size: 0x4, Type: StructProperty)
    void* UserActor; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoEnableVillagerProviderStateTreeTaskInstanceData, VillagerProvider) == 0, "Offset mismatch for FJunoEnableVillagerProviderStateTreeTaskInstanceData::VillagerProvider");
static_assert(offsetof(FJunoEnableVillagerProviderStateTreeTaskInstanceData, LWMPointProvider) == 8, "Offset mismatch for FJunoEnableVillagerProviderStateTreeTaskInstanceData::LWMPointProvider");
static_assert(offsetof(FJunoEnableVillagerProviderStateTreeTaskInstanceData, bEnableProvider) == 16, "Offset mismatch for FJunoEnableVillagerProviderStateTreeTaskInstanceData::bEnableProvider");
static_assert(offsetof(FJunoEnableVillagerProviderStateTreeTaskInstanceData, AssignUniqueAIIdentifier) == 20, "Offset mismatch for FJunoEnableVillagerProviderStateTreeTaskInstanceData::AssignUniqueAIIdentifier");
static_assert(offsetof(FJunoEnableVillagerProviderStateTreeTaskInstanceData, UserActor) == 24, "Offset mismatch for FJunoEnableVillagerProviderStateTreeTaskInstanceData::UserActor");

// /Script/JunoEncountersPOIRuntime.JunoEncounterConditionalTags
// Kind: ScriptStruct; super: none
struct FJunoEncounterConditionalTags
{
public:
    std::uint8_t Biome; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t TagsToApply[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoEncounterConditionalTags, Biome) == 0, "Offset mismatch for FJunoEncounterConditionalTags::Biome");
static_assert(offsetof(FJunoEncounterConditionalTags, TagsToApply) == 8, "Offset mismatch for FJunoEncounterConditionalTags::TagsToApply");

// /Script/JunoEncountersPOIRuntime.JunoGetCampLevelStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FJunoGetCampLevelStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoGetCampLevelStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoGetCampLevelStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoGetCampLevelStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoGetCampLevelStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoGetCampLevelStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoGetCampLevelStateTreeTask::TransitionHandlingPriority");

// /Script/JunoEncountersPOIRuntime.JunoGetCampLevelStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoGetCampLevelStateTreeTaskInstanceData
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoGetCampLevelStateTreeTaskInstanceData, Value) == 0, "Offset mismatch for FJunoGetCampLevelStateTreeTaskInstanceData::Value");
static_assert(offsetof(FJunoGetCampLevelStateTreeTaskInstanceData, UserActor) == 8, "Offset mismatch for FJunoGetCampLevelStateTreeTaskInstanceData::UserActor");

// /Script/JunoEncountersPOIRuntime.JunoGetVillagerProviderStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FJunoGetVillagerProviderStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoGetVillagerProviderStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoGetVillagerProviderStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoGetVillagerProviderStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoGetVillagerProviderStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoGetVillagerProviderStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoGetVillagerProviderStateTreeTask::TransitionHandlingPriority");

// /Script/JunoEncountersPOIRuntime.JunoGetVillagerProviderStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoGetVillagerProviderStateTreeTaskInstanceData
{
public:
    std::uint8_t ProviderTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* UserActor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> VillagerProvider; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LWMPointProvider; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoGetVillagerProviderStateTreeTaskInstanceData, ProviderTagQuery) == 0, "Offset mismatch for FJunoGetVillagerProviderStateTreeTaskInstanceData::ProviderTagQuery");
static_assert(offsetof(FJunoGetVillagerProviderStateTreeTaskInstanceData, UserActor) == 72, "Offset mismatch for FJunoGetVillagerProviderStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FJunoGetVillagerProviderStateTreeTaskInstanceData, VillagerProvider) == 80, "Offset mismatch for FJunoGetVillagerProviderStateTreeTaskInstanceData::VillagerProvider");
static_assert(offsetof(FJunoGetVillagerProviderStateTreeTaskInstanceData, LWMPointProvider) == 88, "Offset mismatch for FJunoGetVillagerProviderStateTreeTaskInstanceData::LWMPointProvider");

// /Script/JunoEncountersPOIRuntime.JunoPOIDestroyActorInfo
// Kind: ScriptStruct; super: none
struct FJunoPOIDestroyActorInfo
{
public:
    std::uint8_t DestroyActorQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TArray<void*> RetainmentEntries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPOIDestroyActorInfo, DestroyActorQuery) == 0, "Offset mismatch for FJunoPOIDestroyActorInfo::DestroyActorQuery");
static_assert(offsetof(FJunoPOIDestroyActorInfo, RetainmentEntries) == 72, "Offset mismatch for FJunoPOIDestroyActorInfo::RetainmentEntries");

// /Script/JunoEncountersPOIRuntime.JunoPOIDestroyActorRetainmentEntry
// Kind: ScriptStruct; super: none
struct FJunoPOIDestroyActorRetainmentEntry
{
public:
    std::int32_t Count; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Weight; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoPOIDestroyActorRetainmentEntry, Count) == 0, "Offset mismatch for FJunoPOIDestroyActorRetainmentEntry::Count");
static_assert(offsetof(FJunoPOIDestroyActorRetainmentEntry, Weight) == 4, "Offset mismatch for FJunoPOIDestroyActorRetainmentEntry::Weight");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterCategoryRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoPOIEncounterCategoryRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t POIEncounterRegistry[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t RequiredCapabilities[0x48]; // 0x0038 (Size: 0x48, Type: StructProperty)
    std::uint8_t WorldConditionDefinition[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t RepeatWeightMitigationIdentityQuery[0x48]; // 0x00A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t RepeatWeightMitigationFactor[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::int32_t Priority; // 0x0118 (Size: 0x4, Type: IntProperty)
    float Weight; // 0x011C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoPOIEncounterCategoryRow, POIEncounterRegistry) == 8, "Offset mismatch for FJunoPOIEncounterCategoryRow::POIEncounterRegistry");
static_assert(offsetof(FJunoPOIEncounterCategoryRow, RequiredCapabilities) == 56, "Offset mismatch for FJunoPOIEncounterCategoryRow::RequiredCapabilities");
static_assert(offsetof(FJunoPOIEncounterCategoryRow, WorldConditionDefinition) == 128, "Offset mismatch for FJunoPOIEncounterCategoryRow::WorldConditionDefinition");
static_assert(offsetof(FJunoPOIEncounterCategoryRow, RepeatWeightMitigationIdentityQuery) == 168, "Offset mismatch for FJunoPOIEncounterCategoryRow::RepeatWeightMitigationIdentityQuery");
static_assert(offsetof(FJunoPOIEncounterCategoryRow, RepeatWeightMitigationFactor) == 240, "Offset mismatch for FJunoPOIEncounterCategoryRow::RepeatWeightMitigationFactor");
static_assert(offsetof(FJunoPOIEncounterCategoryRow, Priority) == 280, "Offset mismatch for FJunoPOIEncounterCategoryRow::Priority");
static_assert(offsetof(FJunoPOIEncounterCategoryRow, Weight) == 284, "Offset mismatch for FJunoPOIEncounterCategoryRow::Weight");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterFollowupEntry
// Kind: ScriptStruct; super: none
struct FJunoPOIEncounterFollowupEntry
{
public:
    std::uint8_t FollowupChain[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredCapabilities[0x48]; // 0x0020 (Size: 0x48, Type: StructProperty)
    std::uint8_t WorldConditionDefinition[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    float Weight; // 0x0090 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoPOIEncounterFollowupEntry, FollowupChain) == 0, "Offset mismatch for FJunoPOIEncounterFollowupEntry::FollowupChain");
static_assert(offsetof(FJunoPOIEncounterFollowupEntry, RequiredCapabilities) == 32, "Offset mismatch for FJunoPOIEncounterFollowupEntry::RequiredCapabilities");
static_assert(offsetof(FJunoPOIEncounterFollowupEntry, WorldConditionDefinition) == 104, "Offset mismatch for FJunoPOIEncounterFollowupEntry::WorldConditionDefinition");
static_assert(offsetof(FJunoPOIEncounterFollowupEntry, Weight) == 144, "Offset mismatch for FJunoPOIEncounterFollowupEntry::Weight");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo
// Kind: ScriptStruct; super: none
struct FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo
{
public:
    std::uint8_t SavedEncounterState[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo, SavedEncounterState) == 0, "Offset mismatch for FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo::SavedEncounterState");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v0
// Kind: ScriptStruct; super: none
struct FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v0
{
public:
    std::uint8_t SavedEncounterState[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v0, SavedEncounterState) == 0, "Offset mismatch for FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v0::SavedEncounterState");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v1
// Kind: ScriptStruct; super: none
struct FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v1
{
public:
    std::uint8_t SavedEncounterState[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v1, SavedEncounterState) == 0, "Offset mismatch for FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v1::SavedEncounterState");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoPOIEncounterRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* EncounterDefinition; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FactionRegistry[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t FactionRequirements[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    std::uint8_t IdentityTags[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredCapabilities[0x48]; // 0x0080 (Size: 0x48, Type: StructProperty)
    std::uint8_t WorldConditionDefinition[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    TArray<void*> HLODActorsEntries; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DestroyActorsEntries; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> POIFixedVariables; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> POIVariables; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> POIVariableCollectionSelections; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RepeatWeightMitigationIdentityQuery[0x48]; // 0x0140 (Size: 0x48, Type: StructProperty)
    std::uint8_t RepeatWeightMitigationFactor[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    TArray<void*> SuccessFollowupEncounters; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FailureFollowupEncounters; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AddToPOITags[0x20]; // 0x01D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t RemoveFromPOITags[0x20]; // 0x01F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bWaitForVolumeOccupied; // 0x0210 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableUGCCheckAtPOIVolume; // 0x0211 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableUGCCheckAtPointProviders; // 0x0212 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreventRerollOnCampPlacement; // 0x0213 (Size: 0x1, Type: BoolProperty)
    std::int32_t Priority; // 0x0214 (Size: 0x4, Type: IntProperty)
    float Weight; // 0x0218 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UnloadCondition[0x1]; // 0x021C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIEncounterRow, EncounterDefinition) == 8, "Offset mismatch for FJunoPOIEncounterRow::EncounterDefinition");
static_assert(offsetof(FJunoPOIEncounterRow, FactionRegistry) == 16, "Offset mismatch for FJunoPOIEncounterRow::FactionRegistry");
static_assert(offsetof(FJunoPOIEncounterRow, FactionRequirements) == 24, "Offset mismatch for FJunoPOIEncounterRow::FactionRequirements");
static_assert(offsetof(FJunoPOIEncounterRow, IdentityTags) == 96, "Offset mismatch for FJunoPOIEncounterRow::IdentityTags");
static_assert(offsetof(FJunoPOIEncounterRow, RequiredCapabilities) == 128, "Offset mismatch for FJunoPOIEncounterRow::RequiredCapabilities");
static_assert(offsetof(FJunoPOIEncounterRow, WorldConditionDefinition) == 200, "Offset mismatch for FJunoPOIEncounterRow::WorldConditionDefinition");
static_assert(offsetof(FJunoPOIEncounterRow, HLODActorsEntries) == 240, "Offset mismatch for FJunoPOIEncounterRow::HLODActorsEntries");
static_assert(offsetof(FJunoPOIEncounterRow, DestroyActorsEntries) == 256, "Offset mismatch for FJunoPOIEncounterRow::DestroyActorsEntries");
static_assert(offsetof(FJunoPOIEncounterRow, POIFixedVariables) == 272, "Offset mismatch for FJunoPOIEncounterRow::POIFixedVariables");
static_assert(offsetof(FJunoPOIEncounterRow, POIVariables) == 288, "Offset mismatch for FJunoPOIEncounterRow::POIVariables");
static_assert(offsetof(FJunoPOIEncounterRow, POIVariableCollectionSelections) == 304, "Offset mismatch for FJunoPOIEncounterRow::POIVariableCollectionSelections");
static_assert(offsetof(FJunoPOIEncounterRow, RepeatWeightMitigationIdentityQuery) == 320, "Offset mismatch for FJunoPOIEncounterRow::RepeatWeightMitigationIdentityQuery");
static_assert(offsetof(FJunoPOIEncounterRow, RepeatWeightMitigationFactor) == 392, "Offset mismatch for FJunoPOIEncounterRow::RepeatWeightMitigationFactor");
static_assert(offsetof(FJunoPOIEncounterRow, SuccessFollowupEncounters) == 432, "Offset mismatch for FJunoPOIEncounterRow::SuccessFollowupEncounters");
static_assert(offsetof(FJunoPOIEncounterRow, FailureFollowupEncounters) == 448, "Offset mismatch for FJunoPOIEncounterRow::FailureFollowupEncounters");
static_assert(offsetof(FJunoPOIEncounterRow, AddToPOITags) == 464, "Offset mismatch for FJunoPOIEncounterRow::AddToPOITags");
static_assert(offsetof(FJunoPOIEncounterRow, RemoveFromPOITags) == 496, "Offset mismatch for FJunoPOIEncounterRow::RemoveFromPOITags");
static_assert(offsetof(FJunoPOIEncounterRow, bWaitForVolumeOccupied) == 528, "Offset mismatch for FJunoPOIEncounterRow::bWaitForVolumeOccupied");
static_assert(offsetof(FJunoPOIEncounterRow, bEnableUGCCheckAtPOIVolume) == 529, "Offset mismatch for FJunoPOIEncounterRow::bEnableUGCCheckAtPOIVolume");
static_assert(offsetof(FJunoPOIEncounterRow, bEnableUGCCheckAtPointProviders) == 530, "Offset mismatch for FJunoPOIEncounterRow::bEnableUGCCheckAtPointProviders");
static_assert(offsetof(FJunoPOIEncounterRow, bPreventRerollOnCampPlacement) == 531, "Offset mismatch for FJunoPOIEncounterRow::bPreventRerollOnCampPlacement");
static_assert(offsetof(FJunoPOIEncounterRow, Priority) == 532, "Offset mismatch for FJunoPOIEncounterRow::Priority");
static_assert(offsetof(FJunoPOIEncounterRow, Weight) == 536, "Offset mismatch for FJunoPOIEncounterRow::Weight");
static_assert(offsetof(FJunoPOIEncounterRow, UnloadCondition) == 540, "Offset mismatch for FJunoPOIEncounterRow::UnloadCondition");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSaveData
// Kind: ScriptStruct; super: none
struct FJunoPOIEncounterSaveData
{
public:
    std::uint8_t bEncounterChosen; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ChosenEncounterDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ChosenFaction[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t ChosenVariant; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t SelectedEncounterRow[0x30]; // 0x0050 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> Variables; // 0x0080 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PersistentValues; // 0x0090 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPOISetup; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEncounterVisited; // 0x00A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEncounterFinished; // 0x00A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x00A3
    double LastFinishTime; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bFactionChosen; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEncounterSuccess; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x00B2
    std::int32_t EncounterCount; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::uint8_t DynamicPOICapabitities[0x20]; // 0x00B8 (Size: 0x20, Type: StructProperty)
    TArray<void*> PersistentSpawnedActors; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPOIEncounterSaveData, bEncounterChosen) == 0, "Offset mismatch for FJunoPOIEncounterSaveData::bEncounterChosen");
static_assert(offsetof(FJunoPOIEncounterSaveData, ChosenEncounterDefinition) == 8, "Offset mismatch for FJunoPOIEncounterSaveData::ChosenEncounterDefinition");
static_assert(offsetof(FJunoPOIEncounterSaveData, ChosenFaction) == 40, "Offset mismatch for FJunoPOIEncounterSaveData::ChosenFaction");
static_assert(offsetof(FJunoPOIEncounterSaveData, ChosenVariant) == 72, "Offset mismatch for FJunoPOIEncounterSaveData::ChosenVariant");
static_assert(offsetof(FJunoPOIEncounterSaveData, SelectedEncounterRow) == 80, "Offset mismatch for FJunoPOIEncounterSaveData::SelectedEncounterRow");
static_assert(offsetof(FJunoPOIEncounterSaveData, Variables) == 128, "Offset mismatch for FJunoPOIEncounterSaveData::Variables");
static_assert(offsetof(FJunoPOIEncounterSaveData, PersistentValues) == 144, "Offset mismatch for FJunoPOIEncounterSaveData::PersistentValues");
static_assert(offsetof(FJunoPOIEncounterSaveData, bIsPOISetup) == 160, "Offset mismatch for FJunoPOIEncounterSaveData::bIsPOISetup");
static_assert(offsetof(FJunoPOIEncounterSaveData, bEncounterVisited) == 161, "Offset mismatch for FJunoPOIEncounterSaveData::bEncounterVisited");
static_assert(offsetof(FJunoPOIEncounterSaveData, bEncounterFinished) == 162, "Offset mismatch for FJunoPOIEncounterSaveData::bEncounterFinished");
static_assert(offsetof(FJunoPOIEncounterSaveData, LastFinishTime) == 168, "Offset mismatch for FJunoPOIEncounterSaveData::LastFinishTime");
static_assert(offsetof(FJunoPOIEncounterSaveData, bFactionChosen) == 176, "Offset mismatch for FJunoPOIEncounterSaveData::bFactionChosen");
static_assert(offsetof(FJunoPOIEncounterSaveData, bEncounterSuccess) == 177, "Offset mismatch for FJunoPOIEncounterSaveData::bEncounterSuccess");
static_assert(offsetof(FJunoPOIEncounterSaveData, EncounterCount) == 180, "Offset mismatch for FJunoPOIEncounterSaveData::EncounterCount");
static_assert(offsetof(FJunoPOIEncounterSaveData, DynamicPOICapabitities) == 184, "Offset mismatch for FJunoPOIEncounterSaveData::DynamicPOICapabitities");
static_assert(offsetof(FJunoPOIEncounterSaveData, PersistentSpawnedActors) == 216, "Offset mismatch for FJunoPOIEncounterSaveData::PersistentSpawnedActors");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSaveData_v0
// Kind: ScriptStruct; super: none
struct FJunoPOIEncounterSaveData_v0
{
public:
    std::uint8_t bEncounterChosen; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ChosenEncounterDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ChosenFaction[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t ChosenVariant; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncounterRow[0xC]; // 0x004C (Size: 0xC, Type: StructProperty)
    TMap<void*, void*> Variables; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PersistentValues; // 0x0068 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPOISetup; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEncounterFinished; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFactionChosen; // 0x007A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoPOIEncounterSaveData_v0, bEncounterChosen) == 0, "Offset mismatch for FJunoPOIEncounterSaveData_v0::bEncounterChosen");
static_assert(offsetof(FJunoPOIEncounterSaveData_v0, ChosenEncounterDefinition) == 8, "Offset mismatch for FJunoPOIEncounterSaveData_v0::ChosenEncounterDefinition");
static_assert(offsetof(FJunoPOIEncounterSaveData_v0, ChosenFaction) == 40, "Offset mismatch for FJunoPOIEncounterSaveData_v0::ChosenFaction");
static_assert(offsetof(FJunoPOIEncounterSaveData_v0, ChosenVariant) == 72, "Offset mismatch for FJunoPOIEncounterSaveData_v0::ChosenVariant");
static_assert(offsetof(FJunoPOIEncounterSaveData_v0, EncounterRow) == 76, "Offset mismatch for FJunoPOIEncounterSaveData_v0::EncounterRow");
static_assert(offsetof(FJunoPOIEncounterSaveData_v0, Variables) == 88, "Offset mismatch for FJunoPOIEncounterSaveData_v0::Variables");
static_assert(offsetof(FJunoPOIEncounterSaveData_v0, PersistentValues) == 104, "Offset mismatch for FJunoPOIEncounterSaveData_v0::PersistentValues");
static_assert(offsetof(FJunoPOIEncounterSaveData_v0, bIsPOISetup) == 120, "Offset mismatch for FJunoPOIEncounterSaveData_v0::bIsPOISetup");
static_assert(offsetof(FJunoPOIEncounterSaveData_v0, bEncounterFinished) == 121, "Offset mismatch for FJunoPOIEncounterSaveData_v0::bEncounterFinished");
static_assert(offsetof(FJunoPOIEncounterSaveData_v0, bFactionChosen) == 122, "Offset mismatch for FJunoPOIEncounterSaveData_v0::bFactionChosen");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSaveData_v1
// Kind: ScriptStruct; super: none
struct FJunoPOIEncounterSaveData_v1
{
public:
    std::uint8_t bEncounterChosen; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ChosenEncounterDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ChosenFaction[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t ChosenVariant; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t SelectedEncounterRow[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Variables; // 0x0070 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PersistentValues; // 0x0080 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPOISetup; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEncounterFinished; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0092
    std::int64_t LastFinishTime; // 0x0098 (Size: 0x8, Type: Int64Property)
    std::uint8_t bFactionChosen; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEncounterSuccess; // 0x00A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x00A2
    std::int32_t EncounterCount; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t DynamicPOICapabitities[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIEncounterSaveData_v1, bEncounterChosen) == 0, "Offset mismatch for FJunoPOIEncounterSaveData_v1::bEncounterChosen");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, ChosenEncounterDefinition) == 8, "Offset mismatch for FJunoPOIEncounterSaveData_v1::ChosenEncounterDefinition");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, ChosenFaction) == 40, "Offset mismatch for FJunoPOIEncounterSaveData_v1::ChosenFaction");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, ChosenVariant) == 72, "Offset mismatch for FJunoPOIEncounterSaveData_v1::ChosenVariant");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, SelectedEncounterRow) == 80, "Offset mismatch for FJunoPOIEncounterSaveData_v1::SelectedEncounterRow");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, Variables) == 112, "Offset mismatch for FJunoPOIEncounterSaveData_v1::Variables");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, PersistentValues) == 128, "Offset mismatch for FJunoPOIEncounterSaveData_v1::PersistentValues");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, bIsPOISetup) == 144, "Offset mismatch for FJunoPOIEncounterSaveData_v1::bIsPOISetup");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, bEncounterFinished) == 145, "Offset mismatch for FJunoPOIEncounterSaveData_v1::bEncounterFinished");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, LastFinishTime) == 152, "Offset mismatch for FJunoPOIEncounterSaveData_v1::LastFinishTime");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, bFactionChosen) == 160, "Offset mismatch for FJunoPOIEncounterSaveData_v1::bFactionChosen");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, bEncounterSuccess) == 161, "Offset mismatch for FJunoPOIEncounterSaveData_v1::bEncounterSuccess");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, EncounterCount) == 164, "Offset mismatch for FJunoPOIEncounterSaveData_v1::EncounterCount");
static_assert(offsetof(FJunoPOIEncounterSaveData_v1, DynamicPOICapabitities) == 168, "Offset mismatch for FJunoPOIEncounterSaveData_v1::DynamicPOICapabitities");

// /Script/JunoEncountersPOIRuntime.JunoPOIHLODActorInfo
// Kind: ScriptStruct; super: none
struct FJunoPOIHLODActorInfo
{
public:
    std::uint8_t ActorInfoType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t HLODActorClass[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t HLODActorTable[0x90]; // 0x0028 (Size: 0x90, Type: StructProperty)
    std::uint8_t HLODActorAnchorQuery[0x48]; // 0x00B8 (Size: 0x48, Type: StructProperty)
    std::uint8_t DestructionScope; // 0x0100 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoPOIHLODActorInfo, ActorInfoType) == 0, "Offset mismatch for FJunoPOIHLODActorInfo::ActorInfoType");
static_assert(offsetof(FJunoPOIHLODActorInfo, HLODActorClass) == 8, "Offset mismatch for FJunoPOIHLODActorInfo::HLODActorClass");
static_assert(offsetof(FJunoPOIHLODActorInfo, HLODActorTable) == 40, "Offset mismatch for FJunoPOIHLODActorInfo::HLODActorTable");
static_assert(offsetof(FJunoPOIHLODActorInfo, HLODActorAnchorQuery) == 184, "Offset mismatch for FJunoPOIHLODActorInfo::HLODActorAnchorQuery");
static_assert(offsetof(FJunoPOIHLODActorInfo, DestructionScope) == 256, "Offset mismatch for FJunoPOIHLODActorInfo::DestructionScope");

// /Script/JunoEncountersPOIRuntime.JunoPOIScenarioAssignment
// Kind: ScriptStruct; super: none
struct FJunoPOIScenarioAssignment
{
public:
    std::uint8_t SourceId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t ScenarioRow[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPOIScenarioAssignment, SourceId) == 0, "Offset mismatch for FJunoPOIScenarioAssignment::SourceId");
static_assert(offsetof(FJunoPOIScenarioAssignment, ScenarioRow) == 8, "Offset mismatch for FJunoPOIScenarioAssignment::ScenarioRow");

// /Script/JunoEncountersPOIRuntime.JunoPOIUnloadCondition
// Kind: ScriptStruct; super: none
struct FJunoPOIUnloadCondition
{
public:
    std::uint8_t bWaitForStateTreeFinished; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWaitForEncounterActorUnspawned; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoPOIUnloadCondition, bWaitForStateTreeFinished) == 0, "Offset mismatch for FJunoPOIUnloadCondition::bWaitForStateTreeFinished");
static_assert(offsetof(FJunoPOIUnloadCondition, bWaitForEncounterActorUnspawned) == 1, "Offset mismatch for FJunoPOIUnloadCondition::bWaitForEncounterActorUnspawned");

// /Script/JunoEncountersPOIRuntime.JunoSpawnActorStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FJunoSpawnActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoSpawnActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoSpawnActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoSpawnActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoSpawnActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoSpawnActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoSpawnActorStateTreeTask::TransitionHandlingPriority");

// /Script/JunoEncountersPOIRuntime.JunoSpawnActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoSpawnActorStateTreeTaskInstanceData
{
public:
    std::uint8_t OnActorSpawned[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ActorClass[0x20]; // 0x0010 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bUseActorLocation; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    TWeakObjectPtr<void> TargetActor; // 0x0034 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    std::uint8_t AnchorQuery[0x48]; // 0x0040 (Size: 0x48, Type: StructProperty)
    std::uint8_t AnchorOffset[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnablePhysics; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAttachEncounterVolume; // 0x00A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00A2
    std::uint8_t ActorTags[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActorIdentifierTags[0x20]; // 0x00C8 (Size: 0x20, Type: StructProperty)
    std::uint8_t PersistenceBehavior; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00E9
    std::uint8_t PersistenceId[0x4]; // 0x00EC (Size: 0x4, Type: StructProperty)
    std::uint8_t ExistingActorQuery[0x48]; // 0x00F0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bWaitForSpawnedActor; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0139
    TWeakObjectPtr<void> SpawnedActor; // 0x013C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0144
    void* UserActor; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    void* JunoSpawnActorHelper; // 0x0150 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, OnActorSpawned) == 0, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::OnActorSpawned");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, ActorClass) == 16, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::ActorClass");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, bUseActorLocation) == 48, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::bUseActorLocation");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, TargetActor) == 52, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, AnchorQuery) == 64, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::AnchorQuery");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, AnchorOffset) == 136, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::AnchorOffset");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, bEnablePhysics) == 160, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::bEnablePhysics");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, bAttachEncounterVolume) == 161, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::bAttachEncounterVolume");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, ActorTags) == 168, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::ActorTags");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, ActorIdentifierTags) == 200, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::ActorIdentifierTags");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, PersistenceBehavior) == 232, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::PersistenceBehavior");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, PersistenceId) == 236, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::PersistenceId");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, ExistingActorQuery) == 240, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::ExistingActorQuery");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, bWaitForSpawnedActor) == 312, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::bWaitForSpawnedActor");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, SpawnedActor) == 316, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::SpawnedActor");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, UserActor) == 328, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FJunoSpawnActorStateTreeTaskInstanceData, JunoSpawnActorHelper) == 336, "Offset mismatch for FJunoSpawnActorStateTreeTaskInstanceData::JunoSpawnActorHelper");

// /Script/JunoEncountersPOIRuntime.JunoSpawnedActorMakePersistentStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FJunoSpawnedActorMakePersistentStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoSpawnedActorMakePersistentStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoSpawnedActorMakePersistentStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoSpawnedActorMakePersistentStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoSpawnedActorMakePersistentStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoSpawnedActorMakePersistentStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoSpawnedActorMakePersistentStateTreeTask::TransitionHandlingPriority");

// /Script/JunoEncountersPOIRuntime.JunoSpawnedActorMakePersistentStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoSpawnedActorMakePersistentStateTreeTaskInstanceData
{
public:
    std::uint8_t ActorQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t bMakeTransient; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0049
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoSpawnedActorMakePersistentStateTreeTaskInstanceData, ActorQuery) == 0, "Offset mismatch for FJunoSpawnedActorMakePersistentStateTreeTaskInstanceData::ActorQuery");
static_assert(offsetof(FJunoSpawnedActorMakePersistentStateTreeTaskInstanceData, bMakeTransient) == 72, "Offset mismatch for FJunoSpawnedActorMakePersistentStateTreeTaskInstanceData::bMakeTransient");
static_assert(offsetof(FJunoSpawnedActorMakePersistentStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FJunoSpawnedActorMakePersistentStateTreeTaskInstanceData::UserActor");

// /Script/JunoEncountersPOIRuntime.JunoVillagerProviderSpawnTransitionStateTreeTask
// Kind: ScriptStruct; super: FortStateTreeEncounterTaskBase
struct FJunoVillagerProviderSpawnTransitionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTo[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t TimeoutTransitionTo[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoVillagerProviderSpawnTransitionStateTreeTask, TransitionTo) == 40, "Offset mismatch for FJunoVillagerProviderSpawnTransitionStateTreeTask::TransitionTo");
static_assert(offsetof(FJunoVillagerProviderSpawnTransitionStateTreeTask, TimeoutTransitionTo) == 44, "Offset mismatch for FJunoVillagerProviderSpawnTransitionStateTreeTask::TimeoutTransitionTo");

// /Script/JunoEncountersPOIRuntime.JunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData
{
public:
    TWeakObjectPtr<void> VillagerProvider; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SpawnTimeout[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    void* UserActor; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> Villager; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData, VillagerProvider) == 0, "Offset mismatch for FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData::VillagerProvider");
static_assert(offsetof(FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData, SpawnTimeout) == 8, "Offset mismatch for FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData::SpawnTimeout");
static_assert(offsetof(FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData, UserActor) == 48, "Offset mismatch for FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData, Villager) == 56, "Offset mismatch for FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData::Villager");

// /Script/JunoEncountersPOIRuntime.JunoWaitForCampActorStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FJunoWaitForCampActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoWaitForCampActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FJunoWaitForCampActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FJunoWaitForCampActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FJunoWaitForCampActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FJunoWaitForCampActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FJunoWaitForCampActorStateTreeTask::TransitionHandlingPriority");

// /Script/JunoEncountersPOIRuntime.JunoWaitForCampActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FJunoWaitForCampActorStateTreeTaskInstanceData
{
public:
    std::uint8_t CampTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TWeakObjectPtr<void> CampActor; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    void* UserActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* JunoWaitForCampActorHelper; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoWaitForCampActorStateTreeTaskInstanceData, CampTagQuery) == 0, "Offset mismatch for FJunoWaitForCampActorStateTreeTaskInstanceData::CampTagQuery");
static_assert(offsetof(FJunoWaitForCampActorStateTreeTaskInstanceData, CampActor) == 72, "Offset mismatch for FJunoWaitForCampActorStateTreeTaskInstanceData::CampActor");
static_assert(offsetof(FJunoWaitForCampActorStateTreeTaskInstanceData, UserActor) == 80, "Offset mismatch for FJunoWaitForCampActorStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FJunoWaitForCampActorStateTreeTaskInstanceData, JunoWaitForCampActorHelper) == 88, "Offset mismatch for FJunoWaitForCampActorStateTreeTaskInstanceData::JunoWaitForCampActorHelper");

// /Script/JunoEncountersPOIRuntime.OnJunoPOIEncounterFinished
// Kind: ScriptStruct; super: none
struct FOnJunoPOIEncounterFinished
{
public:
    std::uint8_t POIGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> POIPlayspaceVolume; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t POICapabilities[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    std::uint8_t EncounterRow[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t bSuccess; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FOnJunoPOIEncounterFinished, POIGuid) == 0, "Offset mismatch for FOnJunoPOIEncounterFinished::POIGuid");
static_assert(offsetof(FOnJunoPOIEncounterFinished, POIPlayspaceVolume) == 16, "Offset mismatch for FOnJunoPOIEncounterFinished::POIPlayspaceVolume");
static_assert(offsetof(FOnJunoPOIEncounterFinished, POICapabilities) == 24, "Offset mismatch for FOnJunoPOIEncounterFinished::POICapabilities");
static_assert(offsetof(FOnJunoPOIEncounterFinished, EncounterRow) == 56, "Offset mismatch for FOnJunoPOIEncounterFinished::EncounterRow");
static_assert(offsetof(FOnJunoPOIEncounterFinished, bSuccess) == 88, "Offset mismatch for FOnJunoPOIEncounterFinished::bSuccess");

// /Script/JunoEncountersPOIRuntime.POIPersistenceValueEntry
// Kind: ScriptStruct; super: none
struct FPOIPersistenceValueEntry
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Scope; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPOIPersistenceValueEntry, Value) == 0, "Offset mismatch for FPOIPersistenceValueEntry::Value");
static_assert(offsetof(FPOIPersistenceValueEntry, Scope) == 4, "Offset mismatch for FPOIPersistenceValueEntry::Scope");

// /Script/JunoEncountersPOIRuntime.POIPersistentActorEntry
// Kind: ScriptStruct; super: none
struct FPOIPersistentActorEntry
{
public:
    std::uint8_t SpawnedActor[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t IdentifierTags[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPOIPersistentActorEntry, SpawnedActor) == 0, "Offset mismatch for FPOIPersistentActorEntry::SpawnedActor");
static_assert(offsetof(FPOIPersistentActorEntry, IdentifierTags) == 32, "Offset mismatch for FPOIPersistentActorEntry::IdentifierTags");

// /Script/JunoEncountersPOIRuntime.EncounterCaveGameplayVolume
// Kind: Class; super: EncounterGameplayVolume
class UEncounterCaveGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    std::uint8_t bUseAllLinkedShellVolumes; // 0x0500 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEncounterCaveGameplayVolume, bUseAllLinkedShellVolumes) == 1280, "Offset mismatch for UEncounterCaveGameplayVolume::bUseAllLinkedShellVolumes");

// /Script/JunoEncountersPOIRuntime.EncounterPOIGameplayVolume
// Kind: Class; super: EncounterGameplayVolume
class UEncounterPOIGameplayVolume
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

static_assert(offsetof(UEncounterPOIGameplayVolume, EncounterStateTreeComponent) == 1120, "Offset mismatch for UEncounterPOIGameplayVolume::EncounterStateTreeComponent");
static_assert(offsetof(UEncounterPOIGameplayVolume, TrackedEncounterPointProviders) == 1136, "Offset mismatch for UEncounterPOIGameplayVolume::TrackedEncounterPointProviders");
static_assert(offsetof(UEncounterPOIGameplayVolume, TrackedEncounterAnchors) == 1152, "Offset mismatch for UEncounterPOIGameplayVolume::TrackedEncounterAnchors");
static_assert(offsetof(UEncounterPOIGameplayVolume, TrackedActors) == 1168, "Offset mismatch for UEncounterPOIGameplayVolume::TrackedActors");
static_assert(offsetof(UEncounterPOIGameplayVolume, AllVisitedPlayersMap) == 1184, "Offset mismatch for UEncounterPOIGameplayVolume::AllVisitedPlayersMap");
static_assert(offsetof(UEncounterPOIGameplayVolume, OwningPrefab) == 1272, "Offset mismatch for UEncounterPOIGameplayVolume::OwningPrefab");

// /Script/JunoEncountersPOIRuntime.JunoEncounterAnchorComponent_CampAnchor
// Kind: Class; super: GameFrameworkComponent
class UJunoEncounterAnchorComponent_CampAnchor
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SupportedCampTags[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoEncounterAnchorComponent_CampAnchor, SupportedCampTags) == 192, "Offset mismatch for UJunoEncounterAnchorComponent_CampAnchor::SupportedCampTags");

// /Script/JunoEncountersPOIRuntime.JunoEncounterStaticPointProvider
// Kind: Class; super: EncounterStaticPointProvider
class UJunoEncounterStaticPointProvider
{
public:
    std::uint8_t Pad_0000[0x3F0]; // 0x0000
    std::uint8_t EventLimiter[0x20]; // 0x03F0 (Size: 0x20, Type: StructProperty)
    TArray<void*> ConditionalTags; // 0x0410 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RegistryType[0x4]; // 0x0420 (Size: 0x4, Type: StructProperty)
    std::uint8_t SavedActorGuid[0x1]; // 0x0424 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoEncounterStaticPointProvider, EventLimiter) == 1008, "Offset mismatch for UJunoEncounterStaticPointProvider::EventLimiter");
static_assert(offsetof(UJunoEncounterStaticPointProvider, ConditionalTags) == 1040, "Offset mismatch for UJunoEncounterStaticPointProvider::ConditionalTags");
static_assert(offsetof(UJunoEncounterStaticPointProvider, RegistryType) == 1056, "Offset mismatch for UJunoEncounterStaticPointProvider::RegistryType");
static_assert(offsetof(UJunoEncounterStaticPointProvider, SavedActorGuid) == 1060, "Offset mismatch for UJunoEncounterStaticPointProvider::SavedActorGuid");

// /Script/JunoEncountersPOIRuntime.JunoEncountersPOIRemovalComponent
// Kind: Class; super: ActorComponent
class UJunoEncountersPOIRemovalComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t POITagsQuery[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoEncountersPOIRemovalComponent, POITagsQuery) == 192, "Offset mismatch for UJunoEncountersPOIRemovalComponent::POITagsQuery");

// /Script/JunoEncountersPOIRuntime.JunoEncountersPOISubsystem
// Kind: Class; super: WorldSubsystem
class UJunoEncountersPOISubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData
// Kind: Class; super: JunoBasePFWPersistenceFeatureData
class UJunoPOIEncounterPersistenceFeatureData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> LoadedObjects; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SavedEncounterState[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData, LoadedObjects) == 88, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData::LoadedObjects");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData, SavedEncounterState) == 104, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData::SavedEncounterState");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_Container
// Kind: Class; super: JunoBasePFWPersistenceFeatureDataContainer
class UJunoPOIEncounterPersistenceFeatureData_Container
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

static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, GameplayTagContainer) == 40, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::GameplayTagContainer");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, RestoreVersionInfo) == 72, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::RestoreVersionInfo");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, SupportedVersionsTable) == 88, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::SupportedVersionsTable");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, RestoreAttemptCount) == 120, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::RestoreAttemptCount");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, SaveAttemptCount) == 128, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::SaveAttemptCount");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, DeleteAttemptCount) == 136, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::DeleteAttemptCount");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, ServiceData) == 144, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::ServiceData");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, BackendRequestsQueue) == 152, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::BackendRequestsQueue");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, PersistentClassName) == 160, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::PersistentClassName");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, PersistentName) == 168, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::PersistentName");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, Description) == 216, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::Description");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureData_Container, DeinitProcess) == 248, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureData_Container::DeinitProcess");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoPOIEncounterPersistenceFeatureModule
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

static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoPOIEncounterPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoPOIEncounterPersistenceFeatureModule::Description");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPlayspaceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoPOIEncounterPlayspaceComponent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t EncounterPrefabClass[0x20]; // 0x0120 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> VariantQueries; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RerollCooldownTime[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> POIPlayspaceVolume; // 0x0178 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> EncounterPrefab; // 0x0180 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0188
    std::uint8_t EncounterConfigData[0xF0]; // 0x01A0 (Size: 0xF0, Type: StructProperty)
    TSoftObjectPtr<void> EncounterCategoryTable; // 0x0290 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0002[0x60]; // 0x02B8
    TArray<void*> LoadedObjects; // 0x0318 (Size: 0x10, Type: ArrayProperty)
    void* TilePersistenceFeatureData; // 0x0328 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPOIEncounterPlayspaceComponent, EncounterPrefabClass) == 288, "Offset mismatch for UJunoPOIEncounterPlayspaceComponent::EncounterPrefabClass");
static_assert(offsetof(UJunoPOIEncounterPlayspaceComponent, VariantQueries) == 320, "Offset mismatch for UJunoPOIEncounterPlayspaceComponent::VariantQueries");
static_assert(offsetof(UJunoPOIEncounterPlayspaceComponent, RerollCooldownTime) == 336, "Offset mismatch for UJunoPOIEncounterPlayspaceComponent::RerollCooldownTime");
static_assert(offsetof(UJunoPOIEncounterPlayspaceComponent, POIPlayspaceVolume) == 376, "Offset mismatch for UJunoPOIEncounterPlayspaceComponent::POIPlayspaceVolume");
static_assert(offsetof(UJunoPOIEncounterPlayspaceComponent, EncounterPrefab) == 384, "Offset mismatch for UJunoPOIEncounterPlayspaceComponent::EncounterPrefab");
static_assert(offsetof(UJunoPOIEncounterPlayspaceComponent, EncounterConfigData) == 416, "Offset mismatch for UJunoPOIEncounterPlayspaceComponent::EncounterConfigData");
static_assert(offsetof(UJunoPOIEncounterPlayspaceComponent, EncounterCategoryTable) == 656, "Offset mismatch for UJunoPOIEncounterPlayspaceComponent::EncounterCategoryTable");
static_assert(offsetof(UJunoPOIEncounterPlayspaceComponent, LoadedObjects) == 792, "Offset mismatch for UJunoPOIEncounterPlayspaceComponent::LoadedObjects");
static_assert(offsetof(UJunoPOIEncounterPlayspaceComponent, TilePersistenceFeatureData) == 808, "Offset mismatch for UJunoPOIEncounterPlayspaceComponent::TilePersistenceFeatureData");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterPrefab
// Kind: Class; super: LivingWorldEncounterPrefab
class UJunoPOIEncounterPrefab
{
public:
    std::uint8_t Pad_0000[0xA68]; // 0x0000
    std::uint8_t bEncounterShouldBeLoaded; // 0x0A68 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEncounterIsInitialized; // 0x0A69 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0A6A
    TWeakObjectPtr<void> POIPlayspaceComponent; // 0x0A6C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t UnloadCondition[0x1]; // 0x0A74 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPOIEncounterPrefab, bEncounterShouldBeLoaded) == 2664, "Offset mismatch for UJunoPOIEncounterPrefab::bEncounterShouldBeLoaded");
static_assert(offsetof(UJunoPOIEncounterPrefab, bEncounterIsInitialized) == 2665, "Offset mismatch for UJunoPOIEncounterPrefab::bEncounterIsInitialized");
static_assert(offsetof(UJunoPOIEncounterPrefab, POIPlayspaceComponent) == 2668, "Offset mismatch for UJunoPOIEncounterPrefab::POIPlayspaceComponent");
static_assert(offsetof(UJunoPOIEncounterPrefab, UnloadCondition) == 2676, "Offset mismatch for UJunoPOIEncounterPrefab::UnloadCondition");

// /Script/JunoEncountersPOIRuntime.JunoPOIEncounterSpawner
// Kind: Class; super: Actor
class UJunoPOIEncounterSpawner
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    TWeakObjectPtr<void> POIEncountersPlayspace; // 0x0278 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoPOIEncounterSpawner, POIEncountersPlayspace) == 632, "Offset mismatch for UJunoPOIEncounterSpawner::POIEncountersPlayspace");

// /Script/JunoEncountersPOIRuntime.JunoPOIScenarioAssignmentComponent
// Kind: Class; super: FortGameStateComponent
class UJunoPOIScenarioAssignmentComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> PendingScenarioAssignments; // 0x00C0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoPOIScenarioAssignmentComponent, PendingScenarioAssignments) == 192, "Offset mismatch for UJunoPOIScenarioAssignmentComponent::PendingScenarioAssignments");

// /Script/JunoEncountersPOIRuntime.JunoSpawnActorTaskHelper
// Kind: Class; super: SpawnActorTaskHelper
class UJunoSpawnActorTaskHelper
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PersistenceId[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoSpawnActorTaskHelper, PersistenceId) == 56, "Offset mismatch for UJunoSpawnActorTaskHelper::PersistenceId");

// /Script/JunoEncountersPOIRuntime.JunoWaitForCampActorTaskHelper
// Kind: Class; super: Object
class UJunoWaitForCampActorTaskHelper
{
public:
    std::uint8_t Opaque[1];
};
