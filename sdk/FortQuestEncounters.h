/**
 * decamp dumper generated SDK
 * Package: /Script/FortQuestEncounters
 */
#pragma once
#include "Basic.h"

// /Script/FortQuestEncounters.QuestEncounterTriggerType
// Kind: ScriptStruct; super: none
struct FQuestEncounterTriggerType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortQuestEncounters.QuestEncounterTriggerType_AlwaysActive
// Kind: ScriptStruct; super: QuestEncounterTriggerType
struct FQuestEncounterTriggerType_AlwaysActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortQuestEncounters.QuestEncounterTriggerType_EventTrigger
// Kind: ScriptStruct; super: QuestEncounterTriggerType
struct FQuestEncounterTriggerType_EventTrigger
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> EventVerbs; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t DesiredCount; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FQuestEncounterTriggerType_EventTrigger, EventVerbs) == 8, "Offset mismatch for FQuestEncounterTriggerType_EventTrigger::EventVerbs");
static_assert(offsetof(FQuestEncounterTriggerType_EventTrigger, DesiredCount) == 24, "Offset mismatch for FQuestEncounterTriggerType_EventTrigger::DesiredCount");

// /Script/FortQuestEncounters.QuestEncounterTriggerType_QuestAndEventTrigger
// Kind: ScriptStruct; super: QuestEncounterTriggerType_EventTrigger
struct FQuestEncounterTriggerType_QuestAndEventTrigger
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* RequiredQuest; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FQuestEncounterTriggerType_QuestAndEventTrigger, RequiredQuest) == 32, "Offset mismatch for FQuestEncounterTriggerType_QuestAndEventTrigger::RequiredQuest");

// /Script/FortQuestEncounters.QuestEncounterTriggerType_RequiredQuest
// Kind: ScriptStruct; super: QuestEncounterTriggerType
struct FQuestEncounterTriggerType_RequiredQuest
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* RequiredQuest; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FQuestEncounterTriggerType_RequiredQuest, RequiredQuest) == 8, "Offset mismatch for FQuestEncounterTriggerType_RequiredQuest::RequiredQuest");

// /Script/FortQuestEncounters.QuestEncounterTriggerType_VolumeEntered
// Kind: ScriptStruct; super: QuestEncounterTriggerType
struct FQuestEncounterTriggerType_VolumeEntered
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortQuestEncounters.FortQuestEncounterGameplayVolume
// Kind: Class; super: EncounterGameplayVolume
class UFortQuestEncounterGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    std::uint8_t bShouldOverridePlayspaceParticipation; // 0x0500 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldOverrideQuestSpatialRelevancy; // 0x0501 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0502
    std::uint8_t IncludedOverlapTagQuery[0x1]; // 0x0508 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQuestEncounterGameplayVolume, bShouldOverridePlayspaceParticipation) == 1280, "Offset mismatch for UFortQuestEncounterGameplayVolume::bShouldOverridePlayspaceParticipation");
static_assert(offsetof(UFortQuestEncounterGameplayVolume, bShouldOverrideQuestSpatialRelevancy) == 1281, "Offset mismatch for UFortQuestEncounterGameplayVolume::bShouldOverrideQuestSpatialRelevancy");
static_assert(offsetof(UFortQuestEncounterGameplayVolume, IncludedOverlapTagQuery) == 1288, "Offset mismatch for UFortQuestEncounterGameplayVolume::IncludedOverlapTagQuery");

// /Script/FortQuestEncounters.FortQuestEncounterHotfixData
// Kind: Class; super: Object
class UFortQuestEncounterHotfixData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DisabledScenarios; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DisabledSpawners; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQuestEncounterHotfixData, DisabledScenarios) == 40, "Offset mismatch for UFortQuestEncounterHotfixData::DisabledScenarios");
static_assert(offsetof(UFortQuestEncounterHotfixData, DisabledSpawners) == 56, "Offset mismatch for UFortQuestEncounterHotfixData::DisabledSpawners");

// /Script/FortQuestEncounters.FortQuestEncounterSpawnerVolume
// Kind: Class; super: FortOverlapTrackingVolume
class UFortQuestEncounterSpawnerVolume
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* ComponentAnchor; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsEncounterSpawningEnabled; // 0x0318 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0319
    void* EncounterSpawnPoint; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EncounterTrigger[0x10]; // 0x0328 (Size: 0x10, Type: StructProperty)
    TArray<void*> EncounterEntries; // 0x0338 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SpawnerVolumeName[0x4]; // 0x0348 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAllowInclusionInExternalOverlaps; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLinkSpawnerVolumeToGameplayVolume; // 0x034D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x034E
    void* LivingWorldPrefab; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x28]; // 0x0358
    TArray<void*> VerbHandles; // 0x0380 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQuestEncounterSpawnerVolume, ComponentAnchor) == 784, "Offset mismatch for UFortQuestEncounterSpawnerVolume::ComponentAnchor");
static_assert(offsetof(UFortQuestEncounterSpawnerVolume, bIsEncounterSpawningEnabled) == 792, "Offset mismatch for UFortQuestEncounterSpawnerVolume::bIsEncounterSpawningEnabled");
static_assert(offsetof(UFortQuestEncounterSpawnerVolume, EncounterSpawnPoint) == 800, "Offset mismatch for UFortQuestEncounterSpawnerVolume::EncounterSpawnPoint");
static_assert(offsetof(UFortQuestEncounterSpawnerVolume, EncounterTrigger) == 808, "Offset mismatch for UFortQuestEncounterSpawnerVolume::EncounterTrigger");
static_assert(offsetof(UFortQuestEncounterSpawnerVolume, EncounterEntries) == 824, "Offset mismatch for UFortQuestEncounterSpawnerVolume::EncounterEntries");
static_assert(offsetof(UFortQuestEncounterSpawnerVolume, SpawnerVolumeName) == 840, "Offset mismatch for UFortQuestEncounterSpawnerVolume::SpawnerVolumeName");
static_assert(offsetof(UFortQuestEncounterSpawnerVolume, bAllowInclusionInExternalOverlaps) == 844, "Offset mismatch for UFortQuestEncounterSpawnerVolume::bAllowInclusionInExternalOverlaps");
static_assert(offsetof(UFortQuestEncounterSpawnerVolume, bLinkSpawnerVolumeToGameplayVolume) == 845, "Offset mismatch for UFortQuestEncounterSpawnerVolume::bLinkSpawnerVolumeToGameplayVolume");
static_assert(offsetof(UFortQuestEncounterSpawnerVolume, LivingWorldPrefab) == 848, "Offset mismatch for UFortQuestEncounterSpawnerVolume::LivingWorldPrefab");
static_assert(offsetof(UFortQuestEncounterSpawnerVolume, VerbHandles) == 896, "Offset mismatch for UFortQuestEncounterSpawnerVolume::VerbHandles");

// /Script/FortQuestEncounters.LivingWorldEncounterPrefab_QuestEncounters
// Kind: Class; super: LivingWorldEncounterPrefab
class ULivingWorldEncounterPrefab_QuestEncounters
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

static_assert(offsetof(ULivingWorldEncounterPrefab_QuestEncounters, EncounterEntries) == 2568, "Offset mismatch for ULivingWorldEncounterPrefab_QuestEncounters::EncounterEntries");
static_assert(offsetof(ULivingWorldEncounterPrefab_QuestEncounters, EncounterDefinition) == 2584, "Offset mismatch for ULivingWorldEncounterPrefab_QuestEncounters::EncounterDefinition");
static_assert(offsetof(ULivingWorldEncounterPrefab_QuestEncounters, ReservoirActorOverride) == 2624, "Offset mismatch for ULivingWorldEncounterPrefab_QuestEncounters::ReservoirActorOverride");
static_assert(offsetof(ULivingWorldEncounterPrefab_QuestEncounters, ParentScenarioPrefab) == 2632, "Offset mismatch for ULivingWorldEncounterPrefab_QuestEncounters::ParentScenarioPrefab");
static_assert(offsetof(ULivingWorldEncounterPrefab_QuestEncounters, EncounterManager) == 2640, "Offset mismatch for ULivingWorldEncounterPrefab_QuestEncounters::EncounterManager");
static_assert(offsetof(ULivingWorldEncounterPrefab_QuestEncounters, SpawnedScenarioVolume) == 2648, "Offset mismatch for ULivingWorldEncounterPrefab_QuestEncounters::SpawnedScenarioVolume");
