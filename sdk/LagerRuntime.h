/**
 * decamp dumper generated SDK
 * Package: /Script/LagerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LagerRuntime.FortAthenaActorDensityDebugInfo
// Kind: ScriptStruct; super: none
struct FFortAthenaActorDensityDebugInfo
{
public:
    FString ActorName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ActorPosition[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinCellIndex[0xC]; // 0x0028 (Size: 0xC, Type: StructProperty)
    std::uint8_t MaxCellIndex[0xC]; // 0x0034 (Size: 0xC, Type: StructProperty)
    float DensityValue; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAthenaActorDensityDebugInfo, ActorName) == 0, "Offset mismatch for FFortAthenaActorDensityDebugInfo::ActorName");
static_assert(offsetof(FFortAthenaActorDensityDebugInfo, ActorPosition) == 16, "Offset mismatch for FFortAthenaActorDensityDebugInfo::ActorPosition");
static_assert(offsetof(FFortAthenaActorDensityDebugInfo, MinCellIndex) == 40, "Offset mismatch for FFortAthenaActorDensityDebugInfo::MinCellIndex");
static_assert(offsetof(FFortAthenaActorDensityDebugInfo, MaxCellIndex) == 52, "Offset mismatch for FFortAthenaActorDensityDebugInfo::MaxCellIndex");
static_assert(offsetof(FFortAthenaActorDensityDebugInfo, DensityValue) == 64, "Offset mismatch for FFortAthenaActorDensityDebugInfo::DensityValue");

// /Script/LagerRuntime.FortAthenaLinearEncounterPlayerParticipationData
// Kind: ScriptStruct; super: none
struct FFortAthenaLinearEncounterPlayerParticipationData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldActorLoadDescription
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldActorLoadDescription
{
public:
    std::uint8_t ActorClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SpawnerData[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SpawnerDataTagQuery[0x48]; // 0x0040 (Size: 0x48, Type: StructProperty)
    std::uint8_t SpawnerDataProxyTable[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t bPreloadOnClient; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldActorLoadDescription, ActorClass) == 0, "Offset mismatch for FFortAthenaLivingWorldActorLoadDescription::ActorClass");
static_assert(offsetof(FFortAthenaLivingWorldActorLoadDescription, SpawnerData) == 32, "Offset mismatch for FFortAthenaLivingWorldActorLoadDescription::SpawnerData");
static_assert(offsetof(FFortAthenaLivingWorldActorLoadDescription, SpawnerDataTagQuery) == 64, "Offset mismatch for FFortAthenaLivingWorldActorLoadDescription::SpawnerDataTagQuery");
static_assert(offsetof(FFortAthenaLivingWorldActorLoadDescription, SpawnerDataProxyTable) == 136, "Offset mismatch for FFortAthenaLivingWorldActorLoadDescription::SpawnerDataProxyTable");
static_assert(offsetof(FFortAthenaLivingWorldActorLoadDescription, bPreloadOnClient) == 152, "Offset mismatch for FFortAthenaLivingWorldActorLoadDescription::bPreloadOnClient");

// /Script/LagerRuntime.FortAthenaLivingWorldActorLoadProxyTable
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldActorLoadProxyTable
{
public:
    void* ProxyTable; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ProxyAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldActorLoadProxyTable, ProxyTable) == 0, "Offset mismatch for FFortAthenaLivingWorldActorLoadProxyTable::ProxyTable");
static_assert(offsetof(FFortAthenaLivingWorldActorLoadProxyTable, ProxyAsset) == 8, "Offset mismatch for FFortAthenaLivingWorldActorLoadProxyTable::ProxyAsset");

// /Script/LagerRuntime.FortAthenaLivingWorldActorSpawnDescription
// Kind: ScriptStruct; super: FortAthenaLivingWorldActorLoadDescription
struct FFortAthenaLivingWorldActorSpawnDescription
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t ActorDensityValueOverride[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DensityComputationRangeOverride[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    TArray<void*> TagDensityRegistrations; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PostDestructionTagDensityPersistenceDuration; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, ActorDensityValueOverride) == 160, "Offset mismatch for FFortAthenaLivingWorldActorSpawnDescription::ActorDensityValueOverride");
static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, DensityComputationRangeOverride) == 200, "Offset mismatch for FFortAthenaLivingWorldActorSpawnDescription::DensityComputationRangeOverride");
static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, TagDensityRegistrations) == 240, "Offset mismatch for FFortAthenaLivingWorldActorSpawnDescription::TagDensityRegistrations");
static_assert(offsetof(FFortAthenaLivingWorldActorSpawnDescription, PostDestructionTagDensityPersistenceDuration) == 256, "Offset mismatch for FFortAthenaLivingWorldActorSpawnDescription::PostDestructionTagDensityPersistenceDuration");

// /Script/LagerRuntime.FortAthenaLivingWorldActorUpdateHandler
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldActorUpdateHandler
{
public:
    void* LivingWorldManager; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldActorUpdateHandler, LivingWorldManager) == 0, "Offset mismatch for FFortAthenaLivingWorldActorUpdateHandler::LivingWorldManager");

// /Script/LagerRuntime.FortAthenaLivingWorldCategory
// Kind: ScriptStruct; super: TableRowBase
struct FFortAthenaLivingWorldCategory
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EventTable[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    TArray<void*> EventTableVariations; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxCount; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSpawnedCount; // 0x004C (Size: 0x4, Type: IntProperty)
    std::int32_t EventInstanceMaxCount; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t EventInstanceMaxSpawnedCount; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::uint8_t CanSpawnCondition[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    float Priority; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bExcludeFromGlobalAIBudget; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0085
    std::uint8_t RequirePlaylistTagQuery[0x48]; // 0x0088 (Size: 0x48, Type: StructProperty)
    TArray<void*> Encounters; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorsToPreload; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IsEnabled[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldCategory, EventTable) == 8, "Offset mismatch for FFortAthenaLivingWorldCategory::EventTable");
static_assert(offsetof(FFortAthenaLivingWorldCategory, EventTableVariations) == 56, "Offset mismatch for FFortAthenaLivingWorldCategory::EventTableVariations");
static_assert(offsetof(FFortAthenaLivingWorldCategory, MaxCount) == 72, "Offset mismatch for FFortAthenaLivingWorldCategory::MaxCount");
static_assert(offsetof(FFortAthenaLivingWorldCategory, MaxSpawnedCount) == 76, "Offset mismatch for FFortAthenaLivingWorldCategory::MaxSpawnedCount");
static_assert(offsetof(FFortAthenaLivingWorldCategory, EventInstanceMaxCount) == 80, "Offset mismatch for FFortAthenaLivingWorldCategory::EventInstanceMaxCount");
static_assert(offsetof(FFortAthenaLivingWorldCategory, EventInstanceMaxSpawnedCount) == 84, "Offset mismatch for FFortAthenaLivingWorldCategory::EventInstanceMaxSpawnedCount");
static_assert(offsetof(FFortAthenaLivingWorldCategory, CanSpawnCondition) == 88, "Offset mismatch for FFortAthenaLivingWorldCategory::CanSpawnCondition");
static_assert(offsetof(FFortAthenaLivingWorldCategory, Priority) == 128, "Offset mismatch for FFortAthenaLivingWorldCategory::Priority");
static_assert(offsetof(FFortAthenaLivingWorldCategory, bExcludeFromGlobalAIBudget) == 132, "Offset mismatch for FFortAthenaLivingWorldCategory::bExcludeFromGlobalAIBudget");
static_assert(offsetof(FFortAthenaLivingWorldCategory, RequirePlaylistTagQuery) == 136, "Offset mismatch for FFortAthenaLivingWorldCategory::RequirePlaylistTagQuery");
static_assert(offsetof(FFortAthenaLivingWorldCategory, Encounters) == 208, "Offset mismatch for FFortAthenaLivingWorldCategory::Encounters");
static_assert(offsetof(FFortAthenaLivingWorldCategory, ActorsToPreload) == 224, "Offset mismatch for FFortAthenaLivingWorldCategory::ActorsToPreload");
static_assert(offsetof(FFortAthenaLivingWorldCategory, IsEnabled) == 240, "Offset mismatch for FFortAthenaLivingWorldCategory::IsEnabled");

// /Script/LagerRuntime.FortAthenaLivingWorldCategoryRuntime
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldCategoryRuntime
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* CurrentEventTable; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0020
    TArray<void*> EncounterDefinitions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EncounterDataTables; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldCategoryRuntime, CurrentEventTable) == 24, "Offset mismatch for FFortAthenaLivingWorldCategoryRuntime::CurrentEventTable");
static_assert(offsetof(FFortAthenaLivingWorldCategoryRuntime, EncounterDefinitions) == 40, "Offset mismatch for FFortAthenaLivingWorldCategoryRuntime::EncounterDefinitions");
static_assert(offsetof(FFortAthenaLivingWorldCategoryRuntime, EncounterDataTables) == 56, "Offset mismatch for FFortAthenaLivingWorldCategoryRuntime::EncounterDataTables");

// /Script/LagerRuntime.FortAthenaLivingWorldCategoryTableData
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldCategoryTableData
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t CategoryTable[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t IsEnabled[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldCategoryTableData, Name) == 0, "Offset mismatch for FFortAthenaLivingWorldCategoryTableData::Name");
static_assert(offsetof(FFortAthenaLivingWorldCategoryTableData, CategoryTable) == 8, "Offset mismatch for FFortAthenaLivingWorldCategoryTableData::CategoryTable");
static_assert(offsetof(FFortAthenaLivingWorldCategoryTableData, IsEnabled) == 40, "Offset mismatch for FFortAthenaLivingWorldCategoryTableData::IsEnabled");

// /Script/LagerRuntime.FortAthenaLivingWorldCategoryTableDataList
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldCategoryTableDataList
{
public:
    TArray<void*> CategoryTableDatas; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldCategoryTableDataList, CategoryTableDatas) == 0, "Offset mismatch for FFortAthenaLivingWorldCategoryTableDataList::CategoryTableDatas");

// /Script/LagerRuntime.FortAthenaLivingWorldCategoryWrapper
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldCategoryWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldConditionContainer
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldConditionContainer
{
public:
    void* Owner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldConditionContainer, Owner) == 0, "Offset mismatch for FFortAthenaLivingWorldConditionContainer::Owner");

// /Script/LagerRuntime.FortAthenaLivingWorldCondition_CheckEncounterInstances
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FFortAthenaLivingWorldCondition_CheckEncounterInstances
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ActorRef[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldCondition_CheckEncounterInstances, ActorRef) == 16, "Offset mismatch for FFortAthenaLivingWorldCondition_CheckEncounterInstances::ActorRef");

// /Script/LagerRuntime.FortAthenaLivingWorldCondition_CheckPrefabTags
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FFortAthenaLivingWorldCondition_CheckPrefabTags
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t TagQuery[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldCondition_CheckPrefabTags, ActorRef) == 16, "Offset mismatch for FFortAthenaLivingWorldCondition_CheckPrefabTags::ActorRef");
static_assert(offsetof(FFortAthenaLivingWorldCondition_CheckPrefabTags, TagQuery) == 24, "Offset mismatch for FFortAthenaLivingWorldCondition_CheckPrefabTags::TagQuery");

// /Script/LagerRuntime.FortAthenaLivingWorldCondition_TrackedPlayerPresence
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FFortAthenaLivingWorldCondition_TrackedPlayerPresence
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t MinDistanceToPlayer[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDistanceToPlayer[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldCondition_TrackedPlayerPresence, ActorRef) == 16, "Offset mismatch for FFortAthenaLivingWorldCondition_TrackedPlayerPresence::ActorRef");
static_assert(offsetof(FFortAthenaLivingWorldCondition_TrackedPlayerPresence, MinDistanceToPlayer) == 24, "Offset mismatch for FFortAthenaLivingWorldCondition_TrackedPlayerPresence::MinDistanceToPlayer");
static_assert(offsetof(FFortAthenaLivingWorldCondition_TrackedPlayerPresence, MaxDistanceToPlayer) == 64, "Offset mismatch for FFortAthenaLivingWorldCondition_TrackedPlayerPresence::MaxDistanceToPlayer");

// /Script/LagerRuntime.FortAthenaLivingWorldCondition_TrackedPlayerPresenceTimed
// Kind: ScriptStruct; super: FortAthenaLivingWorldCondition_TrackedPlayerPresence
struct FFortAthenaLivingWorldCondition_TrackedPlayerPresenceTimed
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t RequiredDuration[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldCondition_TrackedPlayerPresenceTimed, RequiredDuration) == 104, "Offset mismatch for FFortAthenaLivingWorldCondition_TrackedPlayerPresenceTimed::RequiredDuration");

// /Script/LagerRuntime.FortAthenaLivingWorldCondition_TrackedPlayerPresenceTimed_State
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldCondition_TrackedPlayerPresenceTimed_State
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldDebugContainersHandler
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldDebugContainersHandler
{
public:
    void* LivingWorldManager; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Containers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldDebugContainersHandler, LivingWorldManager) == 0, "Offset mismatch for FFortAthenaLivingWorldDebugContainersHandler::LivingWorldManager");
static_assert(offsetof(FFortAthenaLivingWorldDebugContainersHandler, Containers) == 8, "Offset mismatch for FFortAthenaLivingWorldDebugContainersHandler::Containers");

// /Script/LagerRuntime.FortAthenaLivingWorldDensityCondition
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FFortAthenaLivingWorldDensityCondition
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Tag[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t Distance[0x28]; // 0x0020 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDensity[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDensity[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldDensityCondition, ActorRef) == 16, "Offset mismatch for FFortAthenaLivingWorldDensityCondition::ActorRef");
static_assert(offsetof(FFortAthenaLivingWorldDensityCondition, Tag) == 24, "Offset mismatch for FFortAthenaLivingWorldDensityCondition::Tag");
static_assert(offsetof(FFortAthenaLivingWorldDensityCondition, Distance) == 32, "Offset mismatch for FFortAthenaLivingWorldDensityCondition::Distance");
static_assert(offsetof(FFortAthenaLivingWorldDensityCondition, MaxDensity) == 72, "Offset mismatch for FFortAthenaLivingWorldDensityCondition::MaxDensity");
static_assert(offsetof(FFortAthenaLivingWorldDensityCondition, MinDensity) == 112, "Offset mismatch for FFortAthenaLivingWorldDensityCondition::MinDensity");

// /Script/LagerRuntime.FortAthenaLivingWorldDensityGrid
// Kind: ScriptStruct; super: FortSpatialGrid
struct FFortAthenaLivingWorldDensityGrid
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldDespawnCondition
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldDespawnCondition
{
public:
    std::uint8_t DespawnWorldCondition[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    float TimeAsCandidateBeforeDespawn; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float TimeAsCandidateBeforeDespawnDeviation; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseCustomDeathTag; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0031
    std::uint8_t DeathTagContainer[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldDespawnCondition, DespawnWorldCondition) == 0, "Offset mismatch for FFortAthenaLivingWorldDespawnCondition::DespawnWorldCondition");
static_assert(offsetof(FFortAthenaLivingWorldDespawnCondition, TimeAsCandidateBeforeDespawn) == 40, "Offset mismatch for FFortAthenaLivingWorldDespawnCondition::TimeAsCandidateBeforeDespawn");
static_assert(offsetof(FFortAthenaLivingWorldDespawnCondition, TimeAsCandidateBeforeDespawnDeviation) == 44, "Offset mismatch for FFortAthenaLivingWorldDespawnCondition::TimeAsCandidateBeforeDespawnDeviation");
static_assert(offsetof(FFortAthenaLivingWorldDespawnCondition, bUseCustomDeathTag) == 48, "Offset mismatch for FFortAthenaLivingWorldDespawnCondition::bUseCustomDeathTag");
static_assert(offsetof(FFortAthenaLivingWorldDespawnCondition, DeathTagContainer) == 56, "Offset mismatch for FFortAthenaLivingWorldDespawnCondition::DeathTagContainer");

// /Script/LagerRuntime.FortAthenaLivingWorldEncounterDefinition
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEncounterDefinition
{
public:
    std::uint8_t IntervalBetweenEventGeneration[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t bCanUseGlobalBudgetAfterDensityReservoir[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    TArray<void*> Stages; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEncounterDefinition, IntervalBetweenEventGeneration) == 0, "Offset mismatch for FFortAthenaLivingWorldEncounterDefinition::IntervalBetweenEventGeneration");
static_assert(offsetof(FFortAthenaLivingWorldEncounterDefinition, bCanUseGlobalBudgetAfterDensityReservoir) == 40, "Offset mismatch for FFortAthenaLivingWorldEncounterDefinition::bCanUseGlobalBudgetAfterDensityReservoir");
static_assert(offsetof(FFortAthenaLivingWorldEncounterDefinition, Stages) == 80, "Offset mismatch for FFortAthenaLivingWorldEncounterDefinition::Stages");

// /Script/LagerRuntime.FortAthenaLivingWorldEncounterStage
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEncounterStage
{
public:
    std::uint8_t EventTable[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaximumConcurrentNumberOfAI[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaximumConcurrentNumberOfAI_LowValue[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaximumSpawnedNumberOfAI[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaximumSpawnedNumberOfAI_LowValue[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpawnCountPerEventGeneration[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DelayBetweenEvents[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DelayBetweenEvents_LowValue[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAllowRandomMaximumActorCount; // 0x0148 (Size: 0x1, Type: BoolProperty)
    // 0x0148 BoolProperty bAllowRandomMaximumActorSpawnedCount (shared storage)
    // 0x0148 BoolProperty bUseRandomDelayBetweenEvents (shared storage)
};

static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, EventTable) == 0, "Offset mismatch for FFortAthenaLivingWorldEncounterStage::EventTable");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, MaximumConcurrentNumberOfAI) == 48, "Offset mismatch for FFortAthenaLivingWorldEncounterStage::MaximumConcurrentNumberOfAI");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, MaximumConcurrentNumberOfAI_LowValue) == 88, "Offset mismatch for FFortAthenaLivingWorldEncounterStage::MaximumConcurrentNumberOfAI_LowValue");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, MaximumSpawnedNumberOfAI) == 128, "Offset mismatch for FFortAthenaLivingWorldEncounterStage::MaximumSpawnedNumberOfAI");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, MaximumSpawnedNumberOfAI_LowValue) == 168, "Offset mismatch for FFortAthenaLivingWorldEncounterStage::MaximumSpawnedNumberOfAI_LowValue");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, MaxSpawnCountPerEventGeneration) == 208, "Offset mismatch for FFortAthenaLivingWorldEncounterStage::MaxSpawnCountPerEventGeneration");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, DelayBetweenEvents) == 248, "Offset mismatch for FFortAthenaLivingWorldEncounterStage::DelayBetweenEvents");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, DelayBetweenEvents_LowValue) == 288, "Offset mismatch for FFortAthenaLivingWorldEncounterStage::DelayBetweenEvents_LowValue");
static_assert(offsetof(FFortAthenaLivingWorldEncounterStage, bAllowRandomMaximumActorCount) == 328, "Offset mismatch for FFortAthenaLivingWorldEncounterStage::bAllowRandomMaximumActorCount");

// /Script/LagerRuntime.FortAthenaLivingWorldEvent
// Kind: ScriptStruct; super: TableRowBase
struct FFortAthenaLivingWorldEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> EventDatas; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IsEnabled[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldProcessEventRequestImmediately; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> MaxCount; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaxSpawnedCount; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EventInstanceMaxCount; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EventInstanceMaxSpawnedCount; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCheckForActorDensity; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x008D
    float MaxActorDensityOverride; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0094
    TArray<void*> MinRespawnTime; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaxRespawnTime; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstantDeathMinRespawnTime; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstantDeathMaxRespawnTime; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOnlyInSafeZone; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyInNextSafeZone; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyInNextSafeZoneIfStormShrinking; // 0x00DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x5]; // 0x00DB
    std::uint8_t CanSpawnCondition[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActivationGamePhaseStep; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0109
    std::int32_t ActivationSafeZoneIndex; // 0x010C (Size: 0x4, Type: IntProperty)
    float ActivationMinDelay; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float ActivationMaxDelay; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float DeactivationMinDelay; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float DeactivationMaxDelay; // 0x011C (Size: 0x4, Type: FloatProperty)
    TArray<void*> TagDensityConditions; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanSpawnWithoutMatchingPlayerDistance; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0131
    float MinDistanceToPlayer; // 0x0134 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceToPlayer; // 0x0138 (Size: 0x4, Type: FloatProperty)
    float RandomActivationChance; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::uint8_t DespawnCondition[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    TArray<void*> DespawnConditions; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PlaylistTagQuery[0x48]; // 0x0170 (Size: 0x48, Type: StructProperty)
    std::uint8_t CalendarEventConditions[0x1]; // 0x01B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEvent, EventDatas) == 8, "Offset mismatch for FFortAthenaLivingWorldEvent::EventDatas");
static_assert(offsetof(FFortAthenaLivingWorldEvent, IsEnabled) == 24, "Offset mismatch for FFortAthenaLivingWorldEvent::IsEnabled");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bShouldProcessEventRequestImmediately) == 64, "Offset mismatch for FFortAthenaLivingWorldEvent::bShouldProcessEventRequestImmediately");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MaxCount) == 72, "Offset mismatch for FFortAthenaLivingWorldEvent::MaxCount");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MaxSpawnedCount) == 88, "Offset mismatch for FFortAthenaLivingWorldEvent::MaxSpawnedCount");
static_assert(offsetof(FFortAthenaLivingWorldEvent, EventInstanceMaxCount) == 104, "Offset mismatch for FFortAthenaLivingWorldEvent::EventInstanceMaxCount");
static_assert(offsetof(FFortAthenaLivingWorldEvent, EventInstanceMaxSpawnedCount) == 120, "Offset mismatch for FFortAthenaLivingWorldEvent::EventInstanceMaxSpawnedCount");
static_assert(offsetof(FFortAthenaLivingWorldEvent, Weight) == 136, "Offset mismatch for FFortAthenaLivingWorldEvent::Weight");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bCheckForActorDensity) == 140, "Offset mismatch for FFortAthenaLivingWorldEvent::bCheckForActorDensity");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MaxActorDensityOverride) == 144, "Offset mismatch for FFortAthenaLivingWorldEvent::MaxActorDensityOverride");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MinRespawnTime) == 152, "Offset mismatch for FFortAthenaLivingWorldEvent::MinRespawnTime");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MaxRespawnTime) == 168, "Offset mismatch for FFortAthenaLivingWorldEvent::MaxRespawnTime");
static_assert(offsetof(FFortAthenaLivingWorldEvent, InstantDeathMinRespawnTime) == 184, "Offset mismatch for FFortAthenaLivingWorldEvent::InstantDeathMinRespawnTime");
static_assert(offsetof(FFortAthenaLivingWorldEvent, InstantDeathMaxRespawnTime) == 200, "Offset mismatch for FFortAthenaLivingWorldEvent::InstantDeathMaxRespawnTime");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bOnlyInSafeZone) == 216, "Offset mismatch for FFortAthenaLivingWorldEvent::bOnlyInSafeZone");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bOnlyInNextSafeZone) == 217, "Offset mismatch for FFortAthenaLivingWorldEvent::bOnlyInNextSafeZone");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bOnlyInNextSafeZoneIfStormShrinking) == 218, "Offset mismatch for FFortAthenaLivingWorldEvent::bOnlyInNextSafeZoneIfStormShrinking");
static_assert(offsetof(FFortAthenaLivingWorldEvent, CanSpawnCondition) == 224, "Offset mismatch for FFortAthenaLivingWorldEvent::CanSpawnCondition");
static_assert(offsetof(FFortAthenaLivingWorldEvent, ActivationGamePhaseStep) == 264, "Offset mismatch for FFortAthenaLivingWorldEvent::ActivationGamePhaseStep");
static_assert(offsetof(FFortAthenaLivingWorldEvent, ActivationSafeZoneIndex) == 268, "Offset mismatch for FFortAthenaLivingWorldEvent::ActivationSafeZoneIndex");
static_assert(offsetof(FFortAthenaLivingWorldEvent, ActivationMinDelay) == 272, "Offset mismatch for FFortAthenaLivingWorldEvent::ActivationMinDelay");
static_assert(offsetof(FFortAthenaLivingWorldEvent, ActivationMaxDelay) == 276, "Offset mismatch for FFortAthenaLivingWorldEvent::ActivationMaxDelay");
static_assert(offsetof(FFortAthenaLivingWorldEvent, DeactivationMinDelay) == 280, "Offset mismatch for FFortAthenaLivingWorldEvent::DeactivationMinDelay");
static_assert(offsetof(FFortAthenaLivingWorldEvent, DeactivationMaxDelay) == 284, "Offset mismatch for FFortAthenaLivingWorldEvent::DeactivationMaxDelay");
static_assert(offsetof(FFortAthenaLivingWorldEvent, TagDensityConditions) == 288, "Offset mismatch for FFortAthenaLivingWorldEvent::TagDensityConditions");
static_assert(offsetof(FFortAthenaLivingWorldEvent, bCanSpawnWithoutMatchingPlayerDistance) == 304, "Offset mismatch for FFortAthenaLivingWorldEvent::bCanSpawnWithoutMatchingPlayerDistance");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MinDistanceToPlayer) == 308, "Offset mismatch for FFortAthenaLivingWorldEvent::MinDistanceToPlayer");
static_assert(offsetof(FFortAthenaLivingWorldEvent, MaxDistanceToPlayer) == 312, "Offset mismatch for FFortAthenaLivingWorldEvent::MaxDistanceToPlayer");
static_assert(offsetof(FFortAthenaLivingWorldEvent, RandomActivationChance) == 316, "Offset mismatch for FFortAthenaLivingWorldEvent::RandomActivationChance");
static_assert(offsetof(FFortAthenaLivingWorldEvent, DespawnCondition) == 320, "Offset mismatch for FFortAthenaLivingWorldEvent::DespawnCondition");
static_assert(offsetof(FFortAthenaLivingWorldEvent, DespawnConditions) == 352, "Offset mismatch for FFortAthenaLivingWorldEvent::DespawnConditions");
static_assert(offsetof(FFortAthenaLivingWorldEvent, PlaylistTagQuery) == 368, "Offset mismatch for FFortAthenaLivingWorldEvent::PlaylistTagQuery");
static_assert(offsetof(FFortAthenaLivingWorldEvent, CalendarEventConditions) == 440, "Offset mismatch for FFortAthenaLivingWorldEvent::CalendarEventConditions");

// /Script/LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
// Kind: ScriptStruct; super: FortAthenaLivingWorldActorSpawnDescription
struct FFortAthenaLivingWorldEventDataActorSpawnDescription
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    std::uint8_t bSpawnAroundDefaultPoint; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateDefaultPosition; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSharePreviousActorEQSResult; // 0x0112 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0113
    void* SpawnAroundEnvironmentQuery; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpawnAroundEnvironmentQueryRunMode; // 0x0120 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0121
    std::uint8_t SpawnAroundNavigationSourceOverride[0x1]; // 0x0128 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEventDataActorSpawnDescription, bSpawnAroundDefaultPoint) == 272, "Offset mismatch for FFortAthenaLivingWorldEventDataActorSpawnDescription::bSpawnAroundDefaultPoint");
static_assert(offsetof(FFortAthenaLivingWorldEventDataActorSpawnDescription, bUpdateDefaultPosition) == 273, "Offset mismatch for FFortAthenaLivingWorldEventDataActorSpawnDescription::bUpdateDefaultPosition");
static_assert(offsetof(FFortAthenaLivingWorldEventDataActorSpawnDescription, bSharePreviousActorEQSResult) == 274, "Offset mismatch for FFortAthenaLivingWorldEventDataActorSpawnDescription::bSharePreviousActorEQSResult");
static_assert(offsetof(FFortAthenaLivingWorldEventDataActorSpawnDescription, SpawnAroundEnvironmentQuery) == 280, "Offset mismatch for FFortAthenaLivingWorldEventDataActorSpawnDescription::SpawnAroundEnvironmentQuery");
static_assert(offsetof(FFortAthenaLivingWorldEventDataActorSpawnDescription, SpawnAroundEnvironmentQueryRunMode) == 288, "Offset mismatch for FFortAthenaLivingWorldEventDataActorSpawnDescription::SpawnAroundEnvironmentQueryRunMode");
static_assert(offsetof(FFortAthenaLivingWorldEventDataActorSpawnDescription, SpawnAroundNavigationSourceOverride) == 296, "Offset mismatch for FFortAthenaLivingWorldEventDataActorSpawnDescription::SpawnAroundNavigationSourceOverride");

// /Script/LagerRuntime.FortAthenaLivingWorldEventDataContent
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventDataContent
{
public:
    std::uint8_t SpawnerDataSelector[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> SpawnActions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MinActorCountToSpawn[0x28]; // 0x0020 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxActorCountToSpawn[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    TArray<void*> ActorDescriptions; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEventDataContent, SpawnerDataSelector) == 0, "Offset mismatch for FFortAthenaLivingWorldEventDataContent::SpawnerDataSelector");
static_assert(offsetof(FFortAthenaLivingWorldEventDataContent, SpawnActions) == 16, "Offset mismatch for FFortAthenaLivingWorldEventDataContent::SpawnActions");
static_assert(offsetof(FFortAthenaLivingWorldEventDataContent, MinActorCountToSpawn) == 32, "Offset mismatch for FFortAthenaLivingWorldEventDataContent::MinActorCountToSpawn");
static_assert(offsetof(FFortAthenaLivingWorldEventDataContent, MaxActorCountToSpawn) == 72, "Offset mismatch for FFortAthenaLivingWorldEventDataContent::MaxActorCountToSpawn");
static_assert(offsetof(FFortAthenaLivingWorldEventDataContent, ActorDescriptions) == 112, "Offset mismatch for FFortAthenaLivingWorldEventDataContent::ActorDescriptions");

// /Script/LagerRuntime.FortAthenaLivingWorldEventDataEntry
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventDataEntry
{
public:
    std::uint8_t bUseEventDataAsset; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t EventData[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Location[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t Content[0x80]; // 0x0038 (Size: 0x80, Type: StructProperty)
    std::uint8_t Weight[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEventDataEntry, bUseEventDataAsset) == 0, "Offset mismatch for FFortAthenaLivingWorldEventDataEntry::bUseEventDataAsset");
static_assert(offsetof(FFortAthenaLivingWorldEventDataEntry, EventData) == 8, "Offset mismatch for FFortAthenaLivingWorldEventDataEntry::EventData");
static_assert(offsetof(FFortAthenaLivingWorldEventDataEntry, Location) == 40, "Offset mismatch for FFortAthenaLivingWorldEventDataEntry::Location");
static_assert(offsetof(FFortAthenaLivingWorldEventDataEntry, Content) == 56, "Offset mismatch for FFortAthenaLivingWorldEventDataEntry::Content");
static_assert(offsetof(FFortAthenaLivingWorldEventDataEntry, Weight) == 184, "Offset mismatch for FFortAthenaLivingWorldEventDataEntry::Weight");

// /Script/LagerRuntime.FortAthenaLivingWorldEventDataLocation
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventDataLocation
{
public:
    std::uint8_t PointProviderSelector[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEventDataLocation, PointProviderSelector) == 0, "Offset mismatch for FFortAthenaLivingWorldEventDataLocation::PointProviderSelector");

// /Script/LagerRuntime.FortAthenaLivingWorldEventDataRuntime
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventDataRuntime
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> MatchingPointProviders; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x48]; // 0x0020
    void* EventData; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PointProviderSelector[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpawnerDataSelector[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEventDataRuntime, MatchingPointProviders) == 16, "Offset mismatch for FFortAthenaLivingWorldEventDataRuntime::MatchingPointProviders");
static_assert(offsetof(FFortAthenaLivingWorldEventDataRuntime, EventData) == 104, "Offset mismatch for FFortAthenaLivingWorldEventDataRuntime::EventData");
static_assert(offsetof(FFortAthenaLivingWorldEventDataRuntime, PointProviderSelector) == 112, "Offset mismatch for FFortAthenaLivingWorldEventDataRuntime::PointProviderSelector");
static_assert(offsetof(FFortAthenaLivingWorldEventDataRuntime, SpawnerDataSelector) == 128, "Offset mismatch for FFortAthenaLivingWorldEventDataRuntime::SpawnerDataSelector");

// /Script/LagerRuntime.FortAthenaLivingWorldEventDespawnCondition
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventDespawnCondition
{
public:
    std::uint8_t bCanBeDespawned; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MinDistanceToPlayer; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TimeAsCandidateBeforeDespawn; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CanStartDespawningPhaseStep; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::int32_t CanStartDespawningSafeZonePhase; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCanDespawnWhenInCombatWithPlayer; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0015
    float MaxStimulusAgeToBeConsideredInCombat; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanDespawnInTheStorm; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, bCanBeDespawned) == 0, "Offset mismatch for FFortAthenaLivingWorldEventDespawnCondition::bCanBeDespawned");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, MinDistanceToPlayer) == 4, "Offset mismatch for FFortAthenaLivingWorldEventDespawnCondition::MinDistanceToPlayer");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, TimeAsCandidateBeforeDespawn) == 8, "Offset mismatch for FFortAthenaLivingWorldEventDespawnCondition::TimeAsCandidateBeforeDespawn");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, CanStartDespawningPhaseStep) == 12, "Offset mismatch for FFortAthenaLivingWorldEventDespawnCondition::CanStartDespawningPhaseStep");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, CanStartDespawningSafeZonePhase) == 16, "Offset mismatch for FFortAthenaLivingWorldEventDespawnCondition::CanStartDespawningSafeZonePhase");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, bCanDespawnWhenInCombatWithPlayer) == 20, "Offset mismatch for FFortAthenaLivingWorldEventDespawnCondition::bCanDespawnWhenInCombatWithPlayer");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, MaxStimulusAgeToBeConsideredInCombat) == 24, "Offset mismatch for FFortAthenaLivingWorldEventDespawnCondition::MaxStimulusAgeToBeConsideredInCombat");
static_assert(offsetof(FFortAthenaLivingWorldEventDespawnCondition, bCanDespawnInTheStorm) == 28, "Offset mismatch for FFortAthenaLivingWorldEventDespawnCondition::bCanDespawnInTheStorm");

// /Script/LagerRuntime.FortAthenaLivingWorldEventEvaluationContext
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventEvaluationContext
{
public:
    std::uint8_t OutputTagQuery[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEventEvaluationContext, OutputTagQuery) == 0, "Offset mismatch for FFortAthenaLivingWorldEventEvaluationContext::OutputTagQuery");

// /Script/LagerRuntime.FortAthenaLivingWorldEventRuntime
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventRuntime
{
public:
    TArray<void*> EventDataRuntimes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RuntimeSpawnDatas; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEventRuntime, EventDataRuntimes) == 0, "Offset mismatch for FFortAthenaLivingWorldEventRuntime::EventDataRuntimes");
static_assert(offsetof(FFortAthenaLivingWorldEventRuntime, RuntimeSpawnDatas) == 16, "Offset mismatch for FFortAthenaLivingWorldEventRuntime::RuntimeSpawnDatas");

// /Script/LagerRuntime.FortAthenaLivingWorldEventRuntimeSpawnData
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventRuntimeSpawnData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldEventTagDensityCondition
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventTagDensityCondition
{
public:
    std::uint8_t Tag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float Distance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxDensity; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityCondition, Tag) == 0, "Offset mismatch for FFortAthenaLivingWorldEventTagDensityCondition::Tag");
static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityCondition, Distance) == 4, "Offset mismatch for FFortAthenaLivingWorldEventTagDensityCondition::Distance");
static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityCondition, MaxDensity) == 8, "Offset mismatch for FFortAthenaLivingWorldEventTagDensityCondition::MaxDensity");

// /Script/LagerRuntime.FortAthenaLivingWorldEventTagDensityRegistration
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventTagDensityRegistration
{
public:
    std::uint8_t Tag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Range[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t DensityValue[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityRegistration, Tag) == 0, "Offset mismatch for FFortAthenaLivingWorldEventTagDensityRegistration::Tag");
static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityRegistration, Range) == 8, "Offset mismatch for FFortAthenaLivingWorldEventTagDensityRegistration::Range");
static_assert(offsetof(FFortAthenaLivingWorldEventTagDensityRegistration, DensityValue) == 48, "Offset mismatch for FFortAthenaLivingWorldEventTagDensityRegistration::DensityValue");

// /Script/LagerRuntime.FortAthenaLivingWorldEventWrapper
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldEventWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldGridHLODData
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldGridHLODData
{
public:
    std::uint8_t WorldAsset[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    FName TargetGridName; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldGridHLODData, WorldAsset) == 0, "Offset mismatch for FFortAthenaLivingWorldGridHLODData::WorldAsset");
static_assert(offsetof(FFortAthenaLivingWorldGridHLODData, TargetGridName) == 32, "Offset mismatch for FFortAthenaLivingWorldGridHLODData::TargetGridName");

// /Script/LagerRuntime.FortAthenaLivingWorldGridInjectionData
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldGridInjectionData
{
public:
    FName TargetGridName; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString LevelNameSuffix; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t StreamingPriority; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    TArray<void*> HLODData; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldGridInjectionData, TargetGridName) == 0, "Offset mismatch for FFortAthenaLivingWorldGridInjectionData::TargetGridName");
static_assert(offsetof(FFortAthenaLivingWorldGridInjectionData, LevelNameSuffix) == 8, "Offset mismatch for FFortAthenaLivingWorldGridInjectionData::LevelNameSuffix");
static_assert(offsetof(FFortAthenaLivingWorldGridInjectionData, StreamingPriority) == 24, "Offset mismatch for FFortAthenaLivingWorldGridInjectionData::StreamingPriority");
static_assert(offsetof(FFortAthenaLivingWorldGridInjectionData, HLODData) == 32, "Offset mismatch for FFortAthenaLivingWorldGridInjectionData::HLODData");

// /Script/LagerRuntime.FortAthenaLivingWorldGridInjectionManager
// Kind: ScriptStruct; super: FastArraySerializer
struct FFortAthenaLivingWorldGridInjectionManager
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* LivingWorldManager; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Items; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldGridInjectionManager, LivingWorldManager) == 72, "Offset mismatch for FFortAthenaLivingWorldGridInjectionManager::LivingWorldManager");
static_assert(offsetof(FFortAthenaLivingWorldGridInjectionManager, Items) == 80, "Offset mismatch for FFortAthenaLivingWorldGridInjectionManager::Items");

// /Script/LagerRuntime.FortAthenaLivingWorldGridInjectionRuntimeData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FFortAthenaLivingWorldGridInjectionRuntimeData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InjectionTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t LevelBound[0x38]; // 0x0070 (Size: 0x38, Type: StructProperty)
    std::uint8_t WorldAsset[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    TWeakObjectPtr<void> Prefab; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PrefabGuid[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RuntimeCellGuid[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t InjectionData[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldGridInjectionRuntimeData, InjectionTransform) == 16, "Offset mismatch for FFortAthenaLivingWorldGridInjectionRuntimeData::InjectionTransform");
static_assert(offsetof(FFortAthenaLivingWorldGridInjectionRuntimeData, LevelBound) == 112, "Offset mismatch for FFortAthenaLivingWorldGridInjectionRuntimeData::LevelBound");
static_assert(offsetof(FFortAthenaLivingWorldGridInjectionRuntimeData, WorldAsset) == 168, "Offset mismatch for FFortAthenaLivingWorldGridInjectionRuntimeData::WorldAsset");
static_assert(offsetof(FFortAthenaLivingWorldGridInjectionRuntimeData, Prefab) == 200, "Offset mismatch for FFortAthenaLivingWorldGridInjectionRuntimeData::Prefab");
static_assert(offsetof(FFortAthenaLivingWorldGridInjectionRuntimeData, PrefabGuid) == 208, "Offset mismatch for FFortAthenaLivingWorldGridInjectionRuntimeData::PrefabGuid");
static_assert(offsetof(FFortAthenaLivingWorldGridInjectionRuntimeData, RuntimeCellGuid) == 224, "Offset mismatch for FFortAthenaLivingWorldGridInjectionRuntimeData::RuntimeCellGuid");
static_assert(offsetof(FFortAthenaLivingWorldGridInjectionRuntimeData, InjectionData) == 240, "Offset mismatch for FFortAthenaLivingWorldGridInjectionRuntimeData::InjectionData");

// /Script/LagerRuntime.FortAthenaLivingWorldGridReadinessGate
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldGridReadinessGate
{
public:
    void* LivingWorldManager; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PendingGridCells; // 0x0008 (Size: 0x10, Type: MapProperty)
    TArray<void*> TickCellKeysBuffer; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0028
    TArray<void*> CachedCheckClasses; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldGridReadinessGate, LivingWorldManager) == 0, "Offset mismatch for FFortAthenaLivingWorldGridReadinessGate::LivingWorldManager");
static_assert(offsetof(FFortAthenaLivingWorldGridReadinessGate, PendingGridCells) == 8, "Offset mismatch for FFortAthenaLivingWorldGridReadinessGate::PendingGridCells");
static_assert(offsetof(FFortAthenaLivingWorldGridReadinessGate, TickCellKeysBuffer) == 24, "Offset mismatch for FFortAthenaLivingWorldGridReadinessGate::TickCellKeysBuffer");
static_assert(offsetof(FFortAthenaLivingWorldGridReadinessGate, CachedCheckClasses) == 48, "Offset mismatch for FFortAthenaLivingWorldGridReadinessGate::CachedCheckClasses");

// /Script/LagerRuntime.FortAthenaLivingWorldLayeredOverrideRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortAthenaLivingWorldLayeredOverrideRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DescriptorTagsQuery[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t LooseTagsQuery[0x48]; // 0x0050 (Size: 0x48, Type: StructProperty)
    std::int32_t Priority; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x009C
    TArray<void*> ComponentOverrides; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LooseTagsToAdd[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ReplicatedLooseTagsToAdd[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    TArray<void*> AbilitySetsToAdd; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldLayeredOverrideRow, DescriptorTagsQuery) == 8, "Offset mismatch for FFortAthenaLivingWorldLayeredOverrideRow::DescriptorTagsQuery");
static_assert(offsetof(FFortAthenaLivingWorldLayeredOverrideRow, LooseTagsQuery) == 80, "Offset mismatch for FFortAthenaLivingWorldLayeredOverrideRow::LooseTagsQuery");
static_assert(offsetof(FFortAthenaLivingWorldLayeredOverrideRow, Priority) == 152, "Offset mismatch for FFortAthenaLivingWorldLayeredOverrideRow::Priority");
static_assert(offsetof(FFortAthenaLivingWorldLayeredOverrideRow, ComponentOverrides) == 160, "Offset mismatch for FFortAthenaLivingWorldLayeredOverrideRow::ComponentOverrides");
static_assert(offsetof(FFortAthenaLivingWorldLayeredOverrideRow, LooseTagsToAdd) == 176, "Offset mismatch for FFortAthenaLivingWorldLayeredOverrideRow::LooseTagsToAdd");
static_assert(offsetof(FFortAthenaLivingWorldLayeredOverrideRow, ReplicatedLooseTagsToAdd) == 208, "Offset mismatch for FFortAthenaLivingWorldLayeredOverrideRow::ReplicatedLooseTagsToAdd");
static_assert(offsetof(FFortAthenaLivingWorldLayeredOverrideRow, AbilitySetsToAdd) == 240, "Offset mismatch for FFortAthenaLivingWorldLayeredOverrideRow::AbilitySetsToAdd");

// /Script/LagerRuntime.FortAthenaLivingWorldLiveCapture
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldLiveCapture
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldPlayerTracker
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldPlayerTracker
{
public:
    std::uint8_t TrackedBotControllers[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    TArray<void*> TrackedPawns; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TrackedPlayerControllers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Listeners; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldPlayerTracker, TrackedBotControllers) == 0, "Offset mismatch for FFortAthenaLivingWorldPlayerTracker::TrackedBotControllers");
static_assert(offsetof(FFortAthenaLivingWorldPlayerTracker, TrackedPawns) == 16, "Offset mismatch for FFortAthenaLivingWorldPlayerTracker::TrackedPawns");
static_assert(offsetof(FFortAthenaLivingWorldPlayerTracker, TrackedPlayerControllers) == 32, "Offset mismatch for FFortAthenaLivingWorldPlayerTracker::TrackedPlayerControllers");
static_assert(offsetof(FFortAthenaLivingWorldPlayerTracker, Listeners) == 48, "Offset mismatch for FFortAthenaLivingWorldPlayerTracker::Listeners");

// /Script/LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldPointProviderFilterRules
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSelector
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldPointProviderSelector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSelector_ConditionalWeightedTagFilters
// Kind: ScriptStruct; super: FortAthenaLivingWorldPointProviderSelector
struct FFortAthenaLivingWorldPointProviderSelector_ConditionalWeightedTagFilters
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Filters; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldPointProviderSelector_ConditionalWeightedTagFilters, Filters) == 8, "Offset mismatch for FFortAthenaLivingWorldPointProviderSelector_ConditionalWeightedTagFilters::Filters");

// /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSelector_TagFilter
// Kind: ScriptStruct; super: FortAthenaLivingWorldPointProviderSelector
struct FFortAthenaLivingWorldPointProviderSelector_TagFilter
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Filter[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldPointProviderSelector_TagFilter, Filter) == 8, "Offset mismatch for FFortAthenaLivingWorldPointProviderSelector_TagFilter::Filter");

// /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSelector_TagQueryList
// Kind: ScriptStruct; super: FortAthenaLivingWorldPointProviderSelector
struct FFortAthenaLivingWorldPointProviderSelector_TagQueryList
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> TagQueryList; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldPointProviderSelector_TagQueryList, TagQueryList) == 8, "Offset mismatch for FFortAthenaLivingWorldPointProviderSelector_TagQueryList::TagQueryList");

// /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldPointProviderSpawnLimiter
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Behavior; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t MaxNumberOfSpawn[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxNumberOfEventInstance[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t bResetLimitWhenEnabling; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldPointProviderSpawnLimiter, Behavior) == 8, "Offset mismatch for FFortAthenaLivingWorldPointProviderSpawnLimiter::Behavior");
static_assert(offsetof(FFortAthenaLivingWorldPointProviderSpawnLimiter, MaxNumberOfSpawn) == 16, "Offset mismatch for FFortAthenaLivingWorldPointProviderSpawnLimiter::MaxNumberOfSpawn");
static_assert(offsetof(FFortAthenaLivingWorldPointProviderSpawnLimiter, MaxNumberOfEventInstance) == 56, "Offset mismatch for FFortAthenaLivingWorldPointProviderSpawnLimiter::MaxNumberOfEventInstance");
static_assert(offsetof(FFortAthenaLivingWorldPointProviderSpawnLimiter, bResetLimitWhenEnabling) == 96, "Offset mismatch for FFortAthenaLivingWorldPointProviderSpawnLimiter::bResetLimitWhenEnabling");

// /Script/LagerRuntime.FortAthenaLivingWorldPointProviderUpdateHandler
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldPointProviderUpdateHandler
{
public:
    void* LivingWorldManager; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldPointProviderUpdateHandler, LivingWorldManager) == 0, "Offset mismatch for FFortAthenaLivingWorldPointProviderUpdateHandler::LivingWorldManager");

// /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawnerData
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldPrefabActorSpawnerData
{
public:
    std::uint8_t ActorSpawnerGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ActorDescription[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldPrefabActorSpawnerData, ActorSpawnerGuid) == 0, "Offset mismatch for FFortAthenaLivingWorldPrefabActorSpawnerData::ActorSpawnerGuid");
static_assert(offsetof(FFortAthenaLivingWorldPrefabActorSpawnerData, ActorDescription) == 16, "Offset mismatch for FFortAthenaLivingWorldPrefabActorSpawnerData::ActorDescription");

// /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawnerDataOverride
// Kind: ScriptStruct; super: FortAthenaLivingWorldPrefabActorSpawnerData
struct FFortAthenaLivingWorldPrefabActorSpawnerDataOverride
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t bRemove; // 0x0120 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldPrefabActorSpawnerDataOverride, bRemove) == 288, "Offset mismatch for FFortAthenaLivingWorldPrefabActorSpawnerDataOverride::bRemove");

// /Script/LagerRuntime.FortAthenaLivingWorldPreloader
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldPreloader
{
public:
    void* LivingWorldManager; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LoadedSpawnerDataClass; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedActorClasses; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedEventData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldPreloader, LivingWorldManager) == 0, "Offset mismatch for FFortAthenaLivingWorldPreloader::LivingWorldManager");
static_assert(offsetof(FFortAthenaLivingWorldPreloader, LoadedSpawnerDataClass) == 8, "Offset mismatch for FFortAthenaLivingWorldPreloader::LoadedSpawnerDataClass");
static_assert(offsetof(FFortAthenaLivingWorldPreloader, LoadedActorClasses) == 24, "Offset mismatch for FFortAthenaLivingWorldPreloader::LoadedActorClasses");
static_assert(offsetof(FFortAthenaLivingWorldPreloader, LoadedEventData) == 40, "Offset mismatch for FFortAthenaLivingWorldPreloader::LoadedEventData");

// /Script/LagerRuntime.FortAthenaLivingWorldRuntimePointProviderHandler
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldRuntimePointProviderHandler
{
public:
    void* LivingWorldManager; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> RuntimePointProviderMap; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldRuntimePointProviderHandler, LivingWorldManager) == 0, "Offset mismatch for FFortAthenaLivingWorldRuntimePointProviderHandler::LivingWorldManager");
static_assert(offsetof(FFortAthenaLivingWorldRuntimePointProviderHandler, RuntimePointProviderMap) == 8, "Offset mismatch for FFortAthenaLivingWorldRuntimePointProviderHandler::RuntimePointProviderMap");

// /Script/LagerRuntime.FortAthenaLivingWorldSoftTaggedSpawnActionClass
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldSoftTaggedSpawnActionClass
{
public:
    std::uint8_t SpawnActionTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TSoftClassPtr<void> SpawnActionClass; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldSoftTaggedSpawnActionClass, SpawnActionTag) == 0, "Offset mismatch for FFortAthenaLivingWorldSoftTaggedSpawnActionClass::SpawnActionTag");
static_assert(offsetof(FFortAthenaLivingWorldSoftTaggedSpawnActionClass, SpawnActionClass) == 8, "Offset mismatch for FFortAthenaLivingWorldSoftTaggedSpawnActionClass::SpawnActionClass");

// /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionParameters
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldSpawnActionParameters
{
public:
    void* Class; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Parameters[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldSpawnActionParameters, Class) == 0, "Offset mismatch for FFortAthenaLivingWorldSpawnActionParameters::Class");
static_assert(offsetof(FFortAthenaLivingWorldSpawnActionParameters, Parameters) == 8, "Offset mismatch for FFortAthenaLivingWorldSpawnActionParameters::Parameters");

// /Script/LagerRuntime.FortAthenaLivingWorldSpawnerDataLimiter
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldSpawnerDataLimiter
{
public:
    TArray<void*> SpawnedSingleUseSpawnerData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SingleUseSpawnerDataQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    TArray<void*> SpawnedConcurrentSingleUseSpawnerData; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConcurrentSingleUseSpawnerDataQuery[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldSpawnerDataLimiter, SpawnedSingleUseSpawnerData) == 0, "Offset mismatch for FFortAthenaLivingWorldSpawnerDataLimiter::SpawnedSingleUseSpawnerData");
static_assert(offsetof(FFortAthenaLivingWorldSpawnerDataLimiter, SingleUseSpawnerDataQuery) == 16, "Offset mismatch for FFortAthenaLivingWorldSpawnerDataLimiter::SingleUseSpawnerDataQuery");
static_assert(offsetof(FFortAthenaLivingWorldSpawnerDataLimiter, SpawnedConcurrentSingleUseSpawnerData) == 88, "Offset mismatch for FFortAthenaLivingWorldSpawnerDataLimiter::SpawnedConcurrentSingleUseSpawnerData");
static_assert(offsetof(FFortAthenaLivingWorldSpawnerDataLimiter, ConcurrentSingleUseSpawnerDataQuery) == 104, "Offset mismatch for FFortAthenaLivingWorldSpawnerDataLimiter::ConcurrentSingleUseSpawnerDataQuery");

// /Script/LagerRuntime.FortAthenaLivingWorldSpawnerDataSelector
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldSpawnerDataSelector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldTagDensityGridData
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldTagDensityGridData
{
public:
    std::uint8_t Tag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t GridCellSize[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t SparseToDenseRatio[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldTagDensityGridData, Tag) == 0, "Offset mismatch for FFortAthenaLivingWorldTagDensityGridData::Tag");
static_assert(offsetof(FFortAthenaLivingWorldTagDensityGridData, GridCellSize) == 8, "Offset mismatch for FFortAthenaLivingWorldTagDensityGridData::GridCellSize");
static_assert(offsetof(FFortAthenaLivingWorldTagDensityGridData, SparseToDenseRatio) == 48, "Offset mismatch for FFortAthenaLivingWorldTagDensityGridData::SparseToDenseRatio");

// /Script/LagerRuntime.FortAthenaLivingWorldTagQueryToSeatMapping
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldTagQueryToSeatMapping
{
public:
    std::uint8_t TagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::int32_t SeatIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldTagQueryToSeatMapping, TagQuery) == 0, "Offset mismatch for FFortAthenaLivingWorldTagQueryToSeatMapping::TagQuery");
static_assert(offsetof(FFortAthenaLivingWorldTagQueryToSeatMapping, SeatIndex) == 72, "Offset mismatch for FFortAthenaLivingWorldTagQueryToSeatMapping::SeatIndex");

// /Script/LagerRuntime.FortAthenaLivingWorldTagTimer
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldTagTimer
{
public:
    std::uint8_t Tag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t duration[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldTagTimer, Tag) == 0, "Offset mismatch for FFortAthenaLivingWorldTagTimer::Tag");
static_assert(offsetof(FFortAthenaLivingWorldTagTimer, duration) == 8, "Offset mismatch for FFortAthenaLivingWorldTagTimer::duration");

// /Script/LagerRuntime.FortAthenaLivingWorldTaggedSpawnActionClass
// Kind: ScriptStruct; super: none
struct FFortAthenaLivingWorldTaggedSpawnActionClass
{
public:
    std::uint8_t SpawnActionTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* SpawnActionClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* SpawnActionObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAthenaLivingWorldTaggedSpawnActionClass, SpawnActionTag) == 0, "Offset mismatch for FFortAthenaLivingWorldTaggedSpawnActionClass::SpawnActionTag");
static_assert(offsetof(FFortAthenaLivingWorldTaggedSpawnActionClass, SpawnActionClass) == 8, "Offset mismatch for FFortAthenaLivingWorldTaggedSpawnActionClass::SpawnActionClass");
static_assert(offsetof(FFortAthenaLivingWorldTaggedSpawnActionClass, SpawnActionObject) == 16, "Offset mismatch for FFortAthenaLivingWorldTaggedSpawnActionClass::SpawnActionObject");

// /Script/LagerRuntime.FortItemComponentData_LivingWorld
// Kind: ScriptStruct; super: FortItemComponentData
struct FFortItemComponentData_LivingWorld
{
public:
    TArray<void*> TagRegistrations; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortItemComponentData_LivingWorld, TagRegistrations) == 0, "Offset mismatch for FFortItemComponentData_LivingWorld::TagRegistrations");

// /Script/LagerRuntime.FortLWPointProviderSelector_EQS
// Kind: ScriptStruct; super: FortAthenaLivingWorldPointProviderSelector
struct FFortLWPointProviderSelector_EQS
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* QueryToRun; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QueryParams; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ResultsSelectionMode; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    void* SelectorHelperObject; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortLWPointProviderSelector_EQS, QueryToRun) == 8, "Offset mismatch for FFortLWPointProviderSelector_EQS::QueryToRun");
static_assert(offsetof(FFortLWPointProviderSelector_EQS, QueryParams) == 16, "Offset mismatch for FFortLWPointProviderSelector_EQS::QueryParams");
static_assert(offsetof(FFortLWPointProviderSelector_EQS, ResultsSelectionMode) == 32, "Offset mismatch for FFortLWPointProviderSelector_EQS::ResultsSelectionMode");
static_assert(offsetof(FFortLWPointProviderSelector_EQS, SelectorHelperObject) == 40, "Offset mismatch for FFortLWPointProviderSelector_EQS::SelectorHelperObject");

// /Script/LagerRuntime.FortLivingWorldConfigOverride
// Kind: ScriptStruct; super: none
struct FFortLivingWorldConfigOverride
{
public:
    std::uint8_t SourceWorld[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PlaylistTagQuery[0x48]; // 0x0020 (Size: 0x48, Type: StructProperty)
    std::uint8_t LagerConfig[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t StartVersion[0x4]; // 0x0088 (Size: 0x4, Type: StructProperty)
    std::uint8_t EndVersion[0x1]; // 0x008C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortLivingWorldConfigOverride, SourceWorld) == 0, "Offset mismatch for FFortLivingWorldConfigOverride::SourceWorld");
static_assert(offsetof(FFortLivingWorldConfigOverride, PlaylistTagQuery) == 32, "Offset mismatch for FFortLivingWorldConfigOverride::PlaylistTagQuery");
static_assert(offsetof(FFortLivingWorldConfigOverride, LagerConfig) == 104, "Offset mismatch for FFortLivingWorldConfigOverride::LagerConfig");
static_assert(offsetof(FFortLivingWorldConfigOverride, StartVersion) == 136, "Offset mismatch for FFortLivingWorldConfigOverride::StartVersion");
static_assert(offsetof(FFortLivingWorldConfigOverride, EndVersion) == 140, "Offset mismatch for FFortLivingWorldConfigOverride::EndVersion");

// /Script/LagerRuntime.FortLivingWorldEventTableVariation
// Kind: ScriptStruct; super: none
struct FFortLivingWorldEventTableVariation
{
public:
    std::uint8_t EventTableVariation[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t VariationWeight[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortLivingWorldEventTableVariation, EventTableVariation) == 0, "Offset mismatch for FFortLivingWorldEventTableVariation::EventTableVariation");
static_assert(offsetof(FFortLivingWorldEventTableVariation, VariationWeight) == 48, "Offset mismatch for FFortLivingWorldEventTableVariation::VariationWeight");

// /Script/LagerRuntime.LivingWorldCalendarEventCondition
// Kind: ScriptStruct; super: none
struct FLivingWorldCalendarEventCondition
{
public:
    FString CalendarEventName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Behavior; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShouldEventBeActive; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RatioBehavior; // 0x0012 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0013
    float RatioValue; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float RatioMaxValue; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLivingWorldCalendarEventCondition, CalendarEventName) == 0, "Offset mismatch for FLivingWorldCalendarEventCondition::CalendarEventName");
static_assert(offsetof(FLivingWorldCalendarEventCondition, Behavior) == 16, "Offset mismatch for FLivingWorldCalendarEventCondition::Behavior");
static_assert(offsetof(FLivingWorldCalendarEventCondition, ShouldEventBeActive) == 17, "Offset mismatch for FLivingWorldCalendarEventCondition::ShouldEventBeActive");
static_assert(offsetof(FLivingWorldCalendarEventCondition, RatioBehavior) == 18, "Offset mismatch for FLivingWorldCalendarEventCondition::RatioBehavior");
static_assert(offsetof(FLivingWorldCalendarEventCondition, RatioValue) == 20, "Offset mismatch for FLivingWorldCalendarEventCondition::RatioValue");
static_assert(offsetof(FLivingWorldCalendarEventCondition, RatioMaxValue) == 24, "Offset mismatch for FLivingWorldCalendarEventCondition::RatioMaxValue");

// /Script/LagerRuntime.LivingWorldCalendarEventConditions
// Kind: ScriptStruct; super: none
struct FLivingWorldCalendarEventConditions
{
public:
    TArray<void*> Conditions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IsActiveWithoutSeasonalManager; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLivingWorldCalendarEventConditions, Conditions) == 0, "Offset mismatch for FLivingWorldCalendarEventConditions::Conditions");
static_assert(offsetof(FLivingWorldCalendarEventConditions, IsActiveWithoutSeasonalManager) == 16, "Offset mismatch for FLivingWorldCalendarEventConditions::IsActiveWithoutSeasonalManager");

// /Script/LagerRuntime.LivingWorldGridCellReadinessState
// Kind: ScriptStruct; super: none
struct FLivingWorldGridCellReadinessState
{
public:
    TArray<void*> ActiveChecks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x28]; // 0x0010
    TArray<void*> PendingPointProviders; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLivingWorldGridCellReadinessState, ActiveChecks) == 0, "Offset mismatch for FLivingWorldGridCellReadinessState::ActiveChecks");
static_assert(offsetof(FLivingWorldGridCellReadinessState, PendingPointProviders) == 56, "Offset mismatch for FLivingWorldGridCellReadinessState::PendingPointProviders");

// /Script/LagerRuntime.LivingWorldSpawnAroundPlayerConfiguration
// Kind: ScriptStruct; super: none
struct FLivingWorldSpawnAroundPlayerConfiguration
{
public:
    std::uint8_t Encounter[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> PointProviderClasses; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRegisterReservoir; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLivingWorldSpawnAroundPlayerConfiguration, Encounter) == 0, "Offset mismatch for FLivingWorldSpawnAroundPlayerConfiguration::Encounter");
static_assert(offsetof(FLivingWorldSpawnAroundPlayerConfiguration, PointProviderClasses) == 32, "Offset mismatch for FLivingWorldSpawnAroundPlayerConfiguration::PointProviderClasses");
static_assert(offsetof(FLivingWorldSpawnAroundPlayerConfiguration, bRegisterReservoir) == 48, "Offset mismatch for FLivingWorldSpawnAroundPlayerConfiguration::bRegisterReservoir");

// /Script/LagerRuntime.LivingWorldSpawnAroundPlayerRuntimeData
// Kind: ScriptStruct; super: none
struct FLivingWorldSpawnAroundPlayerRuntimeData
{
public:
    TArray<void*> PointAroundPlayerProviders; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* Encounter; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLivingWorldSpawnAroundPlayerRuntimeData, PointAroundPlayerProviders) == 0, "Offset mismatch for FLivingWorldSpawnAroundPlayerRuntimeData::PointAroundPlayerProviders");
static_assert(offsetof(FLivingWorldSpawnAroundPlayerRuntimeData, Encounter) == 16, "Offset mismatch for FLivingWorldSpawnAroundPlayerRuntimeData::Encounter");

// /Script/LagerRuntime.PointProviderDebugInfo
// Kind: ScriptStruct; super: none
struct FPointProviderDebugInfo
{
public:
    TArray<void*> DebugColors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPointProviderDebugInfo, DebugColors) == 0, "Offset mismatch for FPointProviderDebugInfo::DebugColors");

// /Script/LagerRuntime.PointProviderFilterEntry
// Kind: ScriptStruct; super: none
struct FPointProviderFilterEntry
{
public:
    std::uint8_t ProviderFiltersTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t CalendarEventConditions[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t Weight[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPointProviderFilterEntry, ProviderFiltersTagQuery) == 0, "Offset mismatch for FPointProviderFilterEntry::ProviderFiltersTagQuery");
static_assert(offsetof(FPointProviderFilterEntry, CalendarEventConditions) == 72, "Offset mismatch for FPointProviderFilterEntry::CalendarEventConditions");
static_assert(offsetof(FPointProviderFilterEntry, Weight) == 96, "Offset mismatch for FPointProviderFilterEntry::Weight");

// /Script/LagerRuntime.PointProviderTagDebugColor
// Kind: ScriptStruct; super: none
struct FPointProviderTagDebugColor
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Color[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPointProviderTagDebugColor, Tags) == 0, "Offset mismatch for FPointProviderTagDebugColor::Tags");
static_assert(offsetof(FPointProviderTagDebugColor, Color) == 32, "Offset mismatch for FPointProviderTagDebugColor::Color");

// /Script/LagerRuntime.VarRow_ActorDescription
// Kind: ScriptStruct; super: VarRow
struct FVarRow_ActorDescription
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Value; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVarRow_ActorDescription, Value) == 8, "Offset mismatch for FVarRow_ActorDescription::Value");

// /Script/LagerRuntime.VarRow_LWMEncounter
// Kind: ScriptStruct; super: VarRow
struct FVarRow_LWMEncounter
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> Value; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FVarRow_LWMEncounter, Value) == 8, "Offset mismatch for FVarRow_LWMEncounter::Value");

// /Script/LagerRuntime.VariableSelectionsRow_ActorDescription
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_ActorDescription
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_ActorDescription, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_ActorDescription::RowValue");

// /Script/LagerRuntime.VariableSelectionsRow_LWMEncounter
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_LWMEncounter
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_LWMEncounter, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_LWMEncounter::RowValue");

// /Script/LagerRuntime.VariableSelections_ActorDescription
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_ActorDescription
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_ActorDescription, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_ActorDescription::ValueChoiceTable");

// /Script/LagerRuntime.VariableSelections_LWMEncounter
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_LWMEncounter
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_LWMEncounter, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_LWMEncounter::ValueChoiceTable");

// /Script/LagerRuntime.Variable_ActorDescription
// Kind: ScriptStruct; super: Variable
struct FVariable_ActorDescription
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_ActorDescription, RowValue) == 16, "Offset mismatch for FVariable_ActorDescription::RowValue");

// /Script/LagerRuntime.Variable_LWMEncounter
// Kind: ScriptStruct; super: Variable
struct FVariable_LWMEncounter
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_LWMEncounter, RowValue) == 16, "Offset mismatch for FVariable_LWMEncounter::RowValue");

// /Script/LagerRuntime.ortAthenaLivingWorldNavigationInvokerSettingsOverride
// Kind: ScriptStruct; super: none
struct FortAthenaLivingWorldNavigationInvokerSettingsOverride
{
public:
    std::uint8_t OverrideTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t RegistrationDistanceToPlayer[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FortAthenaLivingWorldNavigationInvokerSettingsOverride, OverrideTagQuery) == 0, "Offset mismatch for FortAthenaLivingWorldNavigationInvokerSettingsOverride::OverrideTagQuery");
static_assert(offsetof(FortAthenaLivingWorldNavigationInvokerSettingsOverride, RegistrationDistanceToPlayer) == 72, "Offset mismatch for FortAthenaLivingWorldNavigationInvokerSettingsOverride::RegistrationDistanceToPlayer");

// /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent
// Kind: Class; super: ActorComponent
class UFortAthenaLinearEncounterAnalyticComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UFortAthenaLinearEncounterAnalyticComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortAthenaLinearEncounterAnalyticComponent::PrimaryComponentTick");
static_assert(offsetof(UFortAthenaLinearEncounterAnalyticComponent, ComponentTags) == 104, "Offset mismatch for UFortAthenaLinearEncounterAnalyticComponent::ComponentTags");
static_assert(offsetof(UFortAthenaLinearEncounterAnalyticComponent, AssetUserData) == 120, "Offset mismatch for UFortAthenaLinearEncounterAnalyticComponent::AssetUserData");
static_assert(offsetof(UFortAthenaLinearEncounterAnalyticComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortAthenaLinearEncounterAnalyticComponent::UCSSerializationIndex");
static_assert(offsetof(UFortAthenaLinearEncounterAnalyticComponent, bNetAddressable) == 152, "Offset mismatch for UFortAthenaLinearEncounterAnalyticComponent::bNetAddressable");
static_assert(offsetof(UFortAthenaLinearEncounterAnalyticComponent, bAutoActivate) == 154, "Offset mismatch for UFortAthenaLinearEncounterAnalyticComponent::bAutoActivate");
static_assert(offsetof(UFortAthenaLinearEncounterAnalyticComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortAthenaLinearEncounterAnalyticComponent::bIsEditorOnly");
static_assert(offsetof(UFortAthenaLinearEncounterAnalyticComponent, CreationMethod) == 185, "Offset mismatch for UFortAthenaLinearEncounterAnalyticComponent::CreationMethod");
static_assert(offsetof(UFortAthenaLinearEncounterAnalyticComponent, OnComponentActivated) == 186, "Offset mismatch for UFortAthenaLinearEncounterAnalyticComponent::OnComponentActivated");
static_assert(offsetof(UFortAthenaLinearEncounterAnalyticComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortAthenaLinearEncounterAnalyticComponent::OnComponentDeactivated");

// /Script/LagerRuntime.FortAthenaLivingWorldBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortAthenaLivingWorldBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class UFortAthenaLivingWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UFortAthenaLivingWorldConditionSchema::ContextDataDescs");

// /Script/LagerRuntime.FortAthenaLivingWorldConfigData
// Kind: Class; super: DataAsset
class UFortAthenaLivingWorldConfigData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CategoryTableDatas; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaxActorCount[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxEventSpawnPerTick[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxActorDespawnPerTick[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumEventGenerationInterval[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxActorDensity[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxActorUpdatesPerTick[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPointProviderUpdatesPerTick[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActorDensityGridCellSize[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActorDensitySparseToDenseRatio[0x28]; // 0x0178 (Size: 0x28, Type: StructProperty)
    std::uint8_t PointClusterSize[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinNumberOfPlayerForAggressiveSpawning[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    TArray<void*> TagDensityGridData; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SingleUseSpawnerDataQuery[0x48]; // 0x0200 (Size: 0x48, Type: StructProperty)
    std::uint8_t ConcurrentSingleUseSpawnerDataQuery[0x48]; // 0x0248 (Size: 0x48, Type: StructProperty)
    void* EQSActorHelperClass; // 0x0290 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DelayEventGeneration[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    std::uint8_t RestrictDensityReservationForReservoirs[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TrackDeadPlayers[0x28]; // 0x02E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaitForAreaReadinessBeforeEnablingPointProviders[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    TArray<void*> GridReadinessCheckClasses; // 0x0338 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IgnoredPointProviderClasses; // 0x0348 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GridReadinessIgnoreTagQuery[0x48]; // 0x0358 (Size: 0x48, Type: StructProperty)
    void* DensityGridIDSelector; // 0x03A0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldConfigData, CategoryTableDatas) == 40, "Offset mismatch for UFortAthenaLivingWorldConfigData::CategoryTableDatas");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxActorCount) == 56, "Offset mismatch for UFortAthenaLivingWorldConfigData::MaxActorCount");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxEventSpawnPerTick) == 96, "Offset mismatch for UFortAthenaLivingWorldConfigData::MaxEventSpawnPerTick");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxActorDespawnPerTick) == 136, "Offset mismatch for UFortAthenaLivingWorldConfigData::MaxActorDespawnPerTick");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MinimumEventGenerationInterval) == 176, "Offset mismatch for UFortAthenaLivingWorldConfigData::MinimumEventGenerationInterval");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxActorDensity) == 216, "Offset mismatch for UFortAthenaLivingWorldConfigData::MaxActorDensity");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxActorUpdatesPerTick) == 256, "Offset mismatch for UFortAthenaLivingWorldConfigData::MaxActorUpdatesPerTick");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MaxPointProviderUpdatesPerTick) == 296, "Offset mismatch for UFortAthenaLivingWorldConfigData::MaxPointProviderUpdatesPerTick");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, ActorDensityGridCellSize) == 336, "Offset mismatch for UFortAthenaLivingWorldConfigData::ActorDensityGridCellSize");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, ActorDensitySparseToDenseRatio) == 376, "Offset mismatch for UFortAthenaLivingWorldConfigData::ActorDensitySparseToDenseRatio");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, PointClusterSize) == 416, "Offset mismatch for UFortAthenaLivingWorldConfigData::PointClusterSize");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, MinNumberOfPlayerForAggressiveSpawning) == 456, "Offset mismatch for UFortAthenaLivingWorldConfigData::MinNumberOfPlayerForAggressiveSpawning");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, TagDensityGridData) == 496, "Offset mismatch for UFortAthenaLivingWorldConfigData::TagDensityGridData");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, SingleUseSpawnerDataQuery) == 512, "Offset mismatch for UFortAthenaLivingWorldConfigData::SingleUseSpawnerDataQuery");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, ConcurrentSingleUseSpawnerDataQuery) == 584, "Offset mismatch for UFortAthenaLivingWorldConfigData::ConcurrentSingleUseSpawnerDataQuery");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, EQSActorHelperClass) == 656, "Offset mismatch for UFortAthenaLivingWorldConfigData::EQSActorHelperClass");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, DelayEventGeneration) == 664, "Offset mismatch for UFortAthenaLivingWorldConfigData::DelayEventGeneration");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, RestrictDensityReservationForReservoirs) == 704, "Offset mismatch for UFortAthenaLivingWorldConfigData::RestrictDensityReservationForReservoirs");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, TrackDeadPlayers) == 744, "Offset mismatch for UFortAthenaLivingWorldConfigData::TrackDeadPlayers");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, WaitForAreaReadinessBeforeEnablingPointProviders) == 784, "Offset mismatch for UFortAthenaLivingWorldConfigData::WaitForAreaReadinessBeforeEnablingPointProviders");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, GridReadinessCheckClasses) == 824, "Offset mismatch for UFortAthenaLivingWorldConfigData::GridReadinessCheckClasses");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, IgnoredPointProviderClasses) == 840, "Offset mismatch for UFortAthenaLivingWorldConfigData::IgnoredPointProviderClasses");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, GridReadinessIgnoreTagQuery) == 856, "Offset mismatch for UFortAthenaLivingWorldConfigData::GridReadinessIgnoreTagQuery");
static_assert(offsetof(UFortAthenaLivingWorldConfigData, DensityGridIDSelector) == 928, "Offset mismatch for UFortAthenaLivingWorldConfigData::DensityGridIDSelector");

// /Script/LagerRuntime.FortAthenaLivingWorldControllerComponent
// Kind: Class; super: FortControllerComponent
class UFortAthenaLivingWorldControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float ActorDensityWeight; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OverrideRegistrationDistance[0xC]; // 0x00CC (Size: 0xC, Type: OptionalProperty)
    TArray<void*> TagRegistrations; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldControllerComponent, ActorDensityWeight) == 200, "Offset mismatch for UFortAthenaLivingWorldControllerComponent::ActorDensityWeight");
static_assert(offsetof(UFortAthenaLivingWorldControllerComponent, OverrideRegistrationDistance) == 204, "Offset mismatch for UFortAthenaLivingWorldControllerComponent::OverrideRegistrationDistance");
static_assert(offsetof(UFortAthenaLivingWorldControllerComponent, TagRegistrations) == 216, "Offset mismatch for UFortAthenaLivingWorldControllerComponent::TagRegistrations");

// /Script/LagerRuntime.FortAthenaLivingWorldDebugContainer
// Kind: Class; super: Object
class UFortAthenaLivingWorldDebugContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldDebugContainer_DensityGrid
// Kind: Class; super: FortAthenaLivingWorldDebugContainer
class UFortAthenaLivingWorldDebugContainer_DensityGrid
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DensityGridValues; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float DensityGridMaxValue; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    std::uint8_t DensityGridValuesMinLocation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t DensityGridValuesSize[0xC]; // 0x0058 (Size: 0xC, Type: StructProperty)
    float CellSize; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float BudgetMaxDensity; // 0x0068 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldDebugContainer_DensityGrid, DensityGridValues) == 40, "Offset mismatch for UFortAthenaLivingWorldDebugContainer_DensityGrid::DensityGridValues");
static_assert(offsetof(UFortAthenaLivingWorldDebugContainer_DensityGrid, DensityGridMaxValue) == 56, "Offset mismatch for UFortAthenaLivingWorldDebugContainer_DensityGrid::DensityGridMaxValue");
static_assert(offsetof(UFortAthenaLivingWorldDebugContainer_DensityGrid, DensityGridValuesMinLocation) == 64, "Offset mismatch for UFortAthenaLivingWorldDebugContainer_DensityGrid::DensityGridValuesMinLocation");
static_assert(offsetof(UFortAthenaLivingWorldDebugContainer_DensityGrid, DensityGridValuesSize) == 88, "Offset mismatch for UFortAthenaLivingWorldDebugContainer_DensityGrid::DensityGridValuesSize");
static_assert(offsetof(UFortAthenaLivingWorldDebugContainer_DensityGrid, CellSize) == 100, "Offset mismatch for UFortAthenaLivingWorldDebugContainer_DensityGrid::CellSize");
static_assert(offsetof(UFortAthenaLivingWorldDebugContainer_DensityGrid, BudgetMaxDensity) == 104, "Offset mismatch for UFortAthenaLivingWorldDebugContainer_DensityGrid::BudgetMaxDensity");

// /Script/LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
// Kind: Class; super: FortMiniMapIndicator
class UFortAthenaLivingWorldDebugDensityMiniMapIndicator
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    TArray<void*> ActorDebugInfos; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DensityGridValues; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DensityGridValuesMinLocation[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t DensityGridValuesSize[0xC]; // 0x01A8 (Size: 0xC, Type: StructProperty)
    float CellSize; // 0x01B4 (Size: 0x4, Type: FloatProperty)
    float MaxDensity; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01BC
    FString DisplayName; // 0x01C0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, ActorDebugInfos) == 368, "Offset mismatch for UFortAthenaLivingWorldDebugDensityMiniMapIndicator::ActorDebugInfos");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, DensityGridValues) == 384, "Offset mismatch for UFortAthenaLivingWorldDebugDensityMiniMapIndicator::DensityGridValues");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, DensityGridValuesMinLocation) == 400, "Offset mismatch for UFortAthenaLivingWorldDebugDensityMiniMapIndicator::DensityGridValuesMinLocation");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, DensityGridValuesSize) == 424, "Offset mismatch for UFortAthenaLivingWorldDebugDensityMiniMapIndicator::DensityGridValuesSize");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, CellSize) == 436, "Offset mismatch for UFortAthenaLivingWorldDebugDensityMiniMapIndicator::CellSize");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, MaxDensity) == 440, "Offset mismatch for UFortAthenaLivingWorldDebugDensityMiniMapIndicator::MaxDensity");
static_assert(offsetof(UFortAthenaLivingWorldDebugDensityMiniMapIndicator, DisplayName) == 448, "Offset mismatch for UFortAthenaLivingWorldDebugDensityMiniMapIndicator::DisplayName");

// /Script/LagerRuntime.FortAthenaLivingWorldDensityGridIDSelector
// Kind: Class; super: Object
class UFortAthenaLivingWorldDensityGridIDSelector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldDensityGridIDSelector_VerticalCutHeights
// Kind: Class; super: FortAthenaLivingWorldDensityGridIDSelector
class UFortAthenaLivingWorldDensityGridIDSelector_VerticalCutHeights
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> VerticalCutHeights; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldDensityGridIDSelector_VerticalCutHeights, VerticalCutHeights) == 40, "Offset mismatch for UFortAthenaLivingWorldDensityGridIDSelector_VerticalCutHeights::VerticalCutHeights");

// /Script/LagerRuntime.FortAthenaLivingWorldDespawnConditionSchema
// Kind: Class; super: FortAthenaLivingWorldConditionSchema
class UFortAthenaLivingWorldDespawnConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldDespawnConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UFortAthenaLivingWorldDespawnConditionSchema::ContextDataDescs");

// /Script/LagerRuntime.FortAthenaLivingWorldEQSHelper
// Kind: Class; super: Actor
class UFortAthenaLivingWorldEQSHelper
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t NavAgentProperties[0x1]; // 0x02B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldEQSHelper, NavAgentProperties) == 688, "Offset mismatch for UFortAthenaLivingWorldEQSHelper::NavAgentProperties");

// /Script/LagerRuntime.FortAthenaLivingWorldEncounter
// Kind: Class; super: DataAsset
class UFortAthenaLivingWorldEncounter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Definition[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldEncounter, Definition) == 40, "Offset mismatch for UFortAthenaLivingWorldEncounter::Definition");

// /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance
// Kind: Class; super: Object
class UFortAthenaLivingWorldEncounterInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnActorSpawned; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFirstActorSpawned; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnActorDestroyed; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLastActorDestroyed; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnActorDied; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLastActorDied; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventSpawned; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventFinished; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TMap<void*, void*> EventRuntimeMap; // 0x00A8 (Size: 0x10, Type: MapProperty)
    std::uint8_t ConditionContainer[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    TArray<void*> AllowedPointProviders; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RegisteredPointProviders; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RuntimeCreatedEventDatas; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0100
    std::uint8_t EncounterDefinition[0x68]; // 0x0120 (Size: 0x68, Type: StructProperty)
    void* ActorDensityReservoir; // 0x0188 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SpawnedActors; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> Owner; // 0x01A0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Instigator; // 0x01A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x01B0
    std::int32_t CurrentStageIndex; // 0x01B8 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentStageActorMaxCount; // 0x01BC (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x18]; // 0x01C0
    std::uint8_t bIsPaused; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPendingRelease; // 0x01D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, OnActorSpawned) == 40, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::OnActorSpawned");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, OnFirstActorSpawned) == 56, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::OnFirstActorSpawned");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, OnActorDestroyed) == 72, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::OnActorDestroyed");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, OnLastActorDestroyed) == 88, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::OnLastActorDestroyed");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, OnActorDied) == 104, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::OnActorDied");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, OnLastActorDied) == 120, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::OnLastActorDied");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, OnEventSpawned) == 136, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::OnEventSpawned");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, OnEventFinished) == 152, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::OnEventFinished");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, EventRuntimeMap) == 168, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::EventRuntimeMap");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, ConditionContainer) == 184, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::ConditionContainer");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, AllowedPointProviders) == 208, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::AllowedPointProviders");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, RegisteredPointProviders) == 224, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::RegisteredPointProviders");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, RuntimeCreatedEventDatas) == 240, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::RuntimeCreatedEventDatas");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, EncounterDefinition) == 288, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::EncounterDefinition");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, ActorDensityReservoir) == 392, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::ActorDensityReservoir");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, SpawnedActors) == 400, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::SpawnedActors");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, Owner) == 416, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::Owner");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, Instigator) == 424, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::Instigator");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, CurrentStageIndex) == 440, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::CurrentStageIndex");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, CurrentStageActorMaxCount) == 444, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::CurrentStageActorMaxCount");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, bIsPaused) == 472, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::bIsPaused");
static_assert(offsetof(UFortAthenaLivingWorldEncounterInstance, bIsPendingRelease) == 473, "Offset mismatch for UFortAthenaLivingWorldEncounterInstance::bIsPendingRelease");

// /Script/LagerRuntime.FortAthenaLivingWorldEventData
// Kind: Class; super: DataAsset
class UFortAthenaLivingWorldEventData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t TimeOfDayFilters; // 0x0028 (Size: 0x4, Type: IntProperty)
    float WaterLevelIndexMin; // 0x002C (Size: 0x4, Type: FloatProperty)
    float WaterLevelIndexMax; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t CanSpawnCondition[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    TArray<void*> DespawnConditions; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequirePointProviders; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0071
    std::uint8_t ProviderFiltersTagQuery[0x48]; // 0x0078 (Size: 0x48, Type: StructProperty)
    TArray<void*> ProviderFiltersEntries; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PointProviderSelector[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpawnerDataSelector[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    TArray<void*> SpawnActions; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MinActorCountToSpawn[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxActorCountToSpawn[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    TArray<void*> ActorDescriptions; // 0x0150 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldEventData, TimeOfDayFilters) == 40, "Offset mismatch for UFortAthenaLivingWorldEventData::TimeOfDayFilters");
static_assert(offsetof(UFortAthenaLivingWorldEventData, WaterLevelIndexMin) == 44, "Offset mismatch for UFortAthenaLivingWorldEventData::WaterLevelIndexMin");
static_assert(offsetof(UFortAthenaLivingWorldEventData, WaterLevelIndexMax) == 48, "Offset mismatch for UFortAthenaLivingWorldEventData::WaterLevelIndexMax");
static_assert(offsetof(UFortAthenaLivingWorldEventData, CanSpawnCondition) == 56, "Offset mismatch for UFortAthenaLivingWorldEventData::CanSpawnCondition");
static_assert(offsetof(UFortAthenaLivingWorldEventData, DespawnConditions) == 96, "Offset mismatch for UFortAthenaLivingWorldEventData::DespawnConditions");
static_assert(offsetof(UFortAthenaLivingWorldEventData, bRequirePointProviders) == 112, "Offset mismatch for UFortAthenaLivingWorldEventData::bRequirePointProviders");
static_assert(offsetof(UFortAthenaLivingWorldEventData, ProviderFiltersTagQuery) == 120, "Offset mismatch for UFortAthenaLivingWorldEventData::ProviderFiltersTagQuery");
static_assert(offsetof(UFortAthenaLivingWorldEventData, ProviderFiltersEntries) == 192, "Offset mismatch for UFortAthenaLivingWorldEventData::ProviderFiltersEntries");
static_assert(offsetof(UFortAthenaLivingWorldEventData, PointProviderSelector) == 208, "Offset mismatch for UFortAthenaLivingWorldEventData::PointProviderSelector");
static_assert(offsetof(UFortAthenaLivingWorldEventData, SpawnerDataSelector) == 224, "Offset mismatch for UFortAthenaLivingWorldEventData::SpawnerDataSelector");
static_assert(offsetof(UFortAthenaLivingWorldEventData, SpawnActions) == 240, "Offset mismatch for UFortAthenaLivingWorldEventData::SpawnActions");
static_assert(offsetof(UFortAthenaLivingWorldEventData, MinActorCountToSpawn) == 256, "Offset mismatch for UFortAthenaLivingWorldEventData::MinActorCountToSpawn");
static_assert(offsetof(UFortAthenaLivingWorldEventData, MaxActorCountToSpawn) == 296, "Offset mismatch for UFortAthenaLivingWorldEventData::MaxActorCountToSpawn");
static_assert(offsetof(UFortAthenaLivingWorldEventData, ActorDescriptions) == 336, "Offset mismatch for UFortAthenaLivingWorldEventData::ActorDescriptions");

// /Script/LagerRuntime.FortAthenaLivingWorldEventDataConditionSchema
// Kind: Class; super: FortAthenaLivingWorldConditionSchema
class UFortAthenaLivingWorldEventDataConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldEventDataConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UFortAthenaLivingWorldEventDataConditionSchema::ContextDataDescs");

// /Script/LagerRuntime.FortAthenaLivingWorldGridReadinessCheck
// Kind: Class; super: Object
class UFortAthenaLivingWorldGridReadinessCheck
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldGridReadinessCheck_Navmesh
// Kind: Class; super: FortAthenaLivingWorldGridReadinessCheck
class UFortAthenaLivingWorldGridReadinessCheck_Navmesh
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t InitialDelayInSeconds[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxWaitInSeconds[0x28]; // 0x00B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FrequencyInSeconds[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldGridReadinessCheck_Navmesh, InitialDelayInSeconds) == 144, "Offset mismatch for UFortAthenaLivingWorldGridReadinessCheck_Navmesh::InitialDelayInSeconds");
static_assert(offsetof(UFortAthenaLivingWorldGridReadinessCheck_Navmesh, MaxWaitInSeconds) == 184, "Offset mismatch for UFortAthenaLivingWorldGridReadinessCheck_Navmesh::MaxWaitInSeconds");
static_assert(offsetof(UFortAthenaLivingWorldGridReadinessCheck_Navmesh, FrequencyInSeconds) == 224, "Offset mismatch for UFortAthenaLivingWorldGridReadinessCheck_Navmesh::FrequencyInSeconds");

// /Script/LagerRuntime.FortAthenaLivingWorldGridReadinessCheck_PlayerDistance
// Kind: Class; super: FortAthenaLivingWorldGridReadinessCheck
class UFortAthenaLivingWorldGridReadinessCheck_PlayerDistance
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t MaxDistanceToPlayer[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxWaitInSeconds[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    std::uint8_t FrequencyInSeconds[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldGridReadinessCheck_PlayerDistance, MaxDistanceToPlayer) == 104, "Offset mismatch for UFortAthenaLivingWorldGridReadinessCheck_PlayerDistance::MaxDistanceToPlayer");
static_assert(offsetof(UFortAthenaLivingWorldGridReadinessCheck_PlayerDistance, MaxWaitInSeconds) == 144, "Offset mismatch for UFortAthenaLivingWorldGridReadinessCheck_PlayerDistance::MaxWaitInSeconds");
static_assert(offsetof(UFortAthenaLivingWorldGridReadinessCheck_PlayerDistance, FrequencyInSeconds) == 184, "Offset mismatch for UFortAthenaLivingWorldGridReadinessCheck_PlayerDistance::FrequencyInSeconds");

// /Script/LagerRuntime.FortAthenaLivingWorldGridReadinessCheck_Streaming
// Kind: Class; super: FortAthenaLivingWorldGridReadinessCheck
class UFortAthenaLivingWorldGridReadinessCheck_Streaming
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t InitialDelayInSeconds[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxWaitInSeconds[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t FrequencyInSeconds[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldGridReadinessCheck_Streaming, InitialDelayInSeconds) == 112, "Offset mismatch for UFortAthenaLivingWorldGridReadinessCheck_Streaming::InitialDelayInSeconds");
static_assert(offsetof(UFortAthenaLivingWorldGridReadinessCheck_Streaming, MaxWaitInSeconds) == 152, "Offset mismatch for UFortAthenaLivingWorldGridReadinessCheck_Streaming::MaxWaitInSeconds");
static_assert(offsetof(UFortAthenaLivingWorldGridReadinessCheck_Streaming, FrequencyInSeconds) == 192, "Offset mismatch for UFortAthenaLivingWorldGridReadinessCheck_Streaming::FrequencyInSeconds");

// /Script/LagerRuntime.FortAthenaLivingWorldLevelPointProvider
// Kind: Class; super: BuildingLevelInstance
class UFortAthenaLivingWorldLevelPointProvider
{
public:
    std::uint8_t Pad_0000[0x740]; // 0x0000
    std::uint8_t SpawnLimiter[0x68]; // 0x0740 (Size: 0x68, Type: StructProperty)
    std::uint8_t FiltersTags[0x20]; // 0x07A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t DebugInfo[0x10]; // 0x07C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t bStartEnabled; // 0x07D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x07D9
    FMulticastInlineDelegate OnActorSpawned; // 0x07E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CachedGameState; // 0x07F0 (Size: 0x8, Type: ObjectProperty)
    void* CachedLivingWorldManager; // 0x07F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldLevelPointProvider, SpawnLimiter) == 1856, "Offset mismatch for UFortAthenaLivingWorldLevelPointProvider::SpawnLimiter");
static_assert(offsetof(UFortAthenaLivingWorldLevelPointProvider, FiltersTags) == 1960, "Offset mismatch for UFortAthenaLivingWorldLevelPointProvider::FiltersTags");
static_assert(offsetof(UFortAthenaLivingWorldLevelPointProvider, DebugInfo) == 1992, "Offset mismatch for UFortAthenaLivingWorldLevelPointProvider::DebugInfo");
static_assert(offsetof(UFortAthenaLivingWorldLevelPointProvider, bStartEnabled) == 2008, "Offset mismatch for UFortAthenaLivingWorldLevelPointProvider::bStartEnabled");
static_assert(offsetof(UFortAthenaLivingWorldLevelPointProvider, OnActorSpawned) == 2016, "Offset mismatch for UFortAthenaLivingWorldLevelPointProvider::OnActorSpawned");
static_assert(offsetof(UFortAthenaLivingWorldLevelPointProvider, CachedGameState) == 2032, "Offset mismatch for UFortAthenaLivingWorldLevelPointProvider::CachedGameState");
static_assert(offsetof(UFortAthenaLivingWorldLevelPointProvider, CachedLivingWorldManager) == 2040, "Offset mismatch for UFortAthenaLivingWorldLevelPointProvider::CachedLivingWorldManager");

// /Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider
// Kind: Class; super: Object
class UFortAthenaLivingWorldLightStaticPointProvider
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate OnActorSpawned; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventRequested_BP; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventSpawned_BP; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t SpawnLimiter[0x68]; // 0x0068 (Size: 0x68, Type: StructProperty)
    std::uint8_t FiltersTags[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bRandomizePointRotation; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    std::uint8_t DebugInfo[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnPoint[0x60]; // 0x0110 (Size: 0x60, Type: StructProperty)
    std::uint8_t DensityGridID[0x8]; // 0x0170 (Size: 0x8, Type: OptionalProperty)
    void* CachedGameState; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* CachedLivingWorldManager; // 0x0180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, OnActorSpawned) == 56, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::OnActorSpawned");
static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, OnEventRequested_BP) == 72, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::OnEventRequested_BP");
static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, OnEventSpawned_BP) == 88, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::OnEventSpawned_BP");
static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, SpawnLimiter) == 104, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::SpawnLimiter");
static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, FiltersTags) == 208, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::FiltersTags");
static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, bRandomizePointRotation) == 240, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::bRandomizePointRotation");
static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, DebugInfo) == 248, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::DebugInfo");
static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, SpawnPoint) == 272, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::SpawnPoint");
static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, DensityGridID) == 368, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::DensityGridID");
static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, CachedGameState) == 376, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::CachedGameState");
static_assert(offsetof(UFortAthenaLivingWorldLightStaticPointProvider, CachedLivingWorldManager) == 384, "Offset mismatch for UFortAthenaLivingWorldLightStaticPointProvider::CachedLivingWorldManager");

// /Script/LagerRuntime.FortAthenaLivingWorldManager
// Kind: Class; super: GameStateComponent
class UFortAthenaLivingWorldManager
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t DefaultLagerConfig[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> LagerConfigOverrides; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LagerEnabled[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> TaggedSpawnActionClassMap; // 0x0120 (Size: 0x10, Type: MapProperty)
    std::uint8_t GridReadinessGate[0x40]; // 0x0130 (Size: 0x40, Type: StructProperty)
    TArray<void*> PointProviders; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    std::int32_t RegisteredPointProvidersCount; // 0x0180 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0184
    std::uint8_t SpecialActorMinimapIconBrush[0xB0]; // 0x0190 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SpecialActorMinimapIconScale[0x10]; // 0x0240 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpecialActorCompassIconBrush[0xB0]; // 0x0250 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SpecialActorCompassIconScale[0x10]; // 0x0300 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate OnActorSpawnedDelegate; // 0x0310 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t SpawnerDataLimiter[0xB0]; // 0x0320 (Size: 0xB0, Type: StructProperty)
    void* CachedWorld; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* CachedConfig; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RunningEncounterInstances; // 0x03E0 (Size: 0x10, Type: ArrayProperty)
    void* CachedSeasonalEventManager; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActorClassToPreloadOnClient; // 0x03F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActorUpdateHandler[0x70]; // 0x0408 (Size: 0x70, Type: StructProperty)
    std::uint8_t PointProviderUpdateHandler[0x58]; // 0x0478 (Size: 0x58, Type: StructProperty)
    std::uint8_t RuntimePointProviderHandler[0x20]; // 0x04D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t PlayerTracker[0x80]; // 0x04F0 (Size: 0x80, Type: StructProperty)
    std::uint8_t Preloader[0xB0]; // 0x0570 (Size: 0xB0, Type: StructProperty)
    std::uint8_t GlobalConditionContainer[0x18]; // 0x0620 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldGridInjectionManager[0x1A8]; // 0x0638 (Size: 0x1A8, Type: StructProperty)
    TMap<void*, void*> EventRuntimeMap; // 0x07E0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CategoryRuntimeMap; // 0x07F0 (Size: 0x10, Type: MapProperty)
    TArray<void*> CategoryRuntimeDataTables; // 0x0800 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CheatLoadedObjects; // 0x0810 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x208]; // 0x0820
    void* DensityGridIDSelector; // 0x0A28 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x40]; // 0x0A30
    TMap<void*, void*> SpawnActionCache; // 0x0A70 (Size: 0x10, Type: MapProperty)
    void* EQSHelper; // 0x0A80 (Size: 0x8, Type: ObjectProperty)
    void* DebugDensityMinimapIndicator; // 0x0A88 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DebugContainers[0x1]; // 0x0A90 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldManager, DefaultLagerConfig) == 200, "Offset mismatch for UFortAthenaLivingWorldManager::DefaultLagerConfig");
static_assert(offsetof(UFortAthenaLivingWorldManager, LagerConfigOverrides) == 232, "Offset mismatch for UFortAthenaLivingWorldManager::LagerConfigOverrides");
static_assert(offsetof(UFortAthenaLivingWorldManager, LagerEnabled) == 248, "Offset mismatch for UFortAthenaLivingWorldManager::LagerEnabled");
static_assert(offsetof(UFortAthenaLivingWorldManager, TaggedSpawnActionClassMap) == 288, "Offset mismatch for UFortAthenaLivingWorldManager::TaggedSpawnActionClassMap");
static_assert(offsetof(UFortAthenaLivingWorldManager, GridReadinessGate) == 304, "Offset mismatch for UFortAthenaLivingWorldManager::GridReadinessGate");
static_assert(offsetof(UFortAthenaLivingWorldManager, PointProviders) == 368, "Offset mismatch for UFortAthenaLivingWorldManager::PointProviders");
static_assert(offsetof(UFortAthenaLivingWorldManager, RegisteredPointProvidersCount) == 384, "Offset mismatch for UFortAthenaLivingWorldManager::RegisteredPointProvidersCount");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpecialActorMinimapIconBrush) == 400, "Offset mismatch for UFortAthenaLivingWorldManager::SpecialActorMinimapIconBrush");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpecialActorMinimapIconScale) == 576, "Offset mismatch for UFortAthenaLivingWorldManager::SpecialActorMinimapIconScale");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpecialActorCompassIconBrush) == 592, "Offset mismatch for UFortAthenaLivingWorldManager::SpecialActorCompassIconBrush");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpecialActorCompassIconScale) == 768, "Offset mismatch for UFortAthenaLivingWorldManager::SpecialActorCompassIconScale");
static_assert(offsetof(UFortAthenaLivingWorldManager, OnActorSpawnedDelegate) == 784, "Offset mismatch for UFortAthenaLivingWorldManager::OnActorSpawnedDelegate");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpawnerDataLimiter) == 800, "Offset mismatch for UFortAthenaLivingWorldManager::SpawnerDataLimiter");
static_assert(offsetof(UFortAthenaLivingWorldManager, CachedWorld) == 976, "Offset mismatch for UFortAthenaLivingWorldManager::CachedWorld");
static_assert(offsetof(UFortAthenaLivingWorldManager, CachedConfig) == 984, "Offset mismatch for UFortAthenaLivingWorldManager::CachedConfig");
static_assert(offsetof(UFortAthenaLivingWorldManager, RunningEncounterInstances) == 992, "Offset mismatch for UFortAthenaLivingWorldManager::RunningEncounterInstances");
static_assert(offsetof(UFortAthenaLivingWorldManager, CachedSeasonalEventManager) == 1008, "Offset mismatch for UFortAthenaLivingWorldManager::CachedSeasonalEventManager");
static_assert(offsetof(UFortAthenaLivingWorldManager, ActorClassToPreloadOnClient) == 1016, "Offset mismatch for UFortAthenaLivingWorldManager::ActorClassToPreloadOnClient");
static_assert(offsetof(UFortAthenaLivingWorldManager, ActorUpdateHandler) == 1032, "Offset mismatch for UFortAthenaLivingWorldManager::ActorUpdateHandler");
static_assert(offsetof(UFortAthenaLivingWorldManager, PointProviderUpdateHandler) == 1144, "Offset mismatch for UFortAthenaLivingWorldManager::PointProviderUpdateHandler");
static_assert(offsetof(UFortAthenaLivingWorldManager, RuntimePointProviderHandler) == 1232, "Offset mismatch for UFortAthenaLivingWorldManager::RuntimePointProviderHandler");
static_assert(offsetof(UFortAthenaLivingWorldManager, PlayerTracker) == 1264, "Offset mismatch for UFortAthenaLivingWorldManager::PlayerTracker");
static_assert(offsetof(UFortAthenaLivingWorldManager, Preloader) == 1392, "Offset mismatch for UFortAthenaLivingWorldManager::Preloader");
static_assert(offsetof(UFortAthenaLivingWorldManager, GlobalConditionContainer) == 1568, "Offset mismatch for UFortAthenaLivingWorldManager::GlobalConditionContainer");
static_assert(offsetof(UFortAthenaLivingWorldManager, WorldGridInjectionManager) == 1592, "Offset mismatch for UFortAthenaLivingWorldManager::WorldGridInjectionManager");
static_assert(offsetof(UFortAthenaLivingWorldManager, EventRuntimeMap) == 2016, "Offset mismatch for UFortAthenaLivingWorldManager::EventRuntimeMap");
static_assert(offsetof(UFortAthenaLivingWorldManager, CategoryRuntimeMap) == 2032, "Offset mismatch for UFortAthenaLivingWorldManager::CategoryRuntimeMap");
static_assert(offsetof(UFortAthenaLivingWorldManager, CategoryRuntimeDataTables) == 2048, "Offset mismatch for UFortAthenaLivingWorldManager::CategoryRuntimeDataTables");
static_assert(offsetof(UFortAthenaLivingWorldManager, CheatLoadedObjects) == 2064, "Offset mismatch for UFortAthenaLivingWorldManager::CheatLoadedObjects");
static_assert(offsetof(UFortAthenaLivingWorldManager, DensityGridIDSelector) == 2600, "Offset mismatch for UFortAthenaLivingWorldManager::DensityGridIDSelector");
static_assert(offsetof(UFortAthenaLivingWorldManager, SpawnActionCache) == 2672, "Offset mismatch for UFortAthenaLivingWorldManager::SpawnActionCache");
static_assert(offsetof(UFortAthenaLivingWorldManager, EQSHelper) == 2688, "Offset mismatch for UFortAthenaLivingWorldManager::EQSHelper");
static_assert(offsetof(UFortAthenaLivingWorldManager, DebugDensityMinimapIndicator) == 2696, "Offset mismatch for UFortAthenaLivingWorldManager::DebugDensityMinimapIndicator");
static_assert(offsetof(UFortAthenaLivingWorldManager, DebugContainers) == 2704, "Offset mismatch for UFortAthenaLivingWorldManager::DebugContainers");

// /Script/LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent
// Kind: Class; super: ActorComponent
class UFortAthenaLivingWorldNavigationInvokerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t GenerationRadius[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SupportedAgents[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t DistanceToPlayer[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceToPlayerHysteresis[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t RegistrationDistanceToPlayer[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t RegistrationDistanceToPlayerHysteresis[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    TArray<void*> SettingsOverride; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> LivingWorldManager; // 0x01A0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldNavigationInvokerComponent, GenerationRadius) == 192, "Offset mismatch for UFortAthenaLivingWorldNavigationInvokerComponent::GenerationRadius");
static_assert(offsetof(UFortAthenaLivingWorldNavigationInvokerComponent, SupportedAgents) == 232, "Offset mismatch for UFortAthenaLivingWorldNavigationInvokerComponent::SupportedAgents");
static_assert(offsetof(UFortAthenaLivingWorldNavigationInvokerComponent, DistanceToPlayer) == 240, "Offset mismatch for UFortAthenaLivingWorldNavigationInvokerComponent::DistanceToPlayer");
static_assert(offsetof(UFortAthenaLivingWorldNavigationInvokerComponent, DistanceToPlayerHysteresis) == 280, "Offset mismatch for UFortAthenaLivingWorldNavigationInvokerComponent::DistanceToPlayerHysteresis");
static_assert(offsetof(UFortAthenaLivingWorldNavigationInvokerComponent, RegistrationDistanceToPlayer) == 320, "Offset mismatch for UFortAthenaLivingWorldNavigationInvokerComponent::RegistrationDistanceToPlayer");
static_assert(offsetof(UFortAthenaLivingWorldNavigationInvokerComponent, RegistrationDistanceToPlayerHysteresis) == 360, "Offset mismatch for UFortAthenaLivingWorldNavigationInvokerComponent::RegistrationDistanceToPlayerHysteresis");
static_assert(offsetof(UFortAthenaLivingWorldNavigationInvokerComponent, SettingsOverride) == 400, "Offset mismatch for UFortAthenaLivingWorldNavigationInvokerComponent::SettingsOverride");
static_assert(offsetof(UFortAthenaLivingWorldNavigationInvokerComponent, LivingWorldManager) == 416, "Offset mismatch for UFortAthenaLivingWorldNavigationInvokerComponent::LivingWorldManager");

// /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface
// Kind: Class; super: GameplayTagAssetInterface
class UFortAthenaLivingWorldPointProviderInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
// Kind: Class; super: Actor
class UFortAthenaLivingWorldPointProvidersEnabler
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> EnabledLinkedPointProviders; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AvailableLinkedPointProviders; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EnablerTags[0x20]; // 0x0290 (Size: 0x20, Type: StructProperty)
    TArray<void*> LinkedPointProviders; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PointProvidersToEnable[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EvaluateAutomatically[0x30]; // 0x02E8 (Size: 0x30, Type: StructProperty)
    FMulticastInlineDelegate OnCompletedEvaluationDelegate; // 0x0318 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler, EnabledLinkedPointProviders) == 624, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler::EnabledLinkedPointProviders");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler, AvailableLinkedPointProviders) == 640, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler::AvailableLinkedPointProviders");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler, EnablerTags) == 656, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler::EnablerTags");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler, LinkedPointProviders) == 688, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler::LinkedPointProviders");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler, PointProvidersToEnable) == 704, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler::PointProvidersToEnable");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler, EvaluateAutomatically) == 744, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler::EvaluateAutomatically");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler, OnCompletedEvaluationDelegate) == 792, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler::OnCompletedEvaluationDelegate");

// /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
// Kind: Class; super: FortAthenaLivingWorldPointProvidersEnabler
class UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> EnabledLinkedPointProviders; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AvailableLinkedPointProviders; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EnablerTags[0x20]; // 0x0290 (Size: 0x20, Type: StructProperty)
    TArray<void*> LinkedPointProviders; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PointProvidersToEnable[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EvaluateAutomatically[0x30]; // 0x02E8 (Size: 0x30, Type: StructProperty)
    FMulticastInlineDelegate OnCompletedEvaluationDelegate; // 0x0318 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride, EnabledLinkedPointProviders) == 624, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::EnabledLinkedPointProviders");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride, AvailableLinkedPointProviders) == 640, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::AvailableLinkedPointProviders");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride, EnablerTags) == 656, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::EnablerTags");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride, LinkedPointProviders) == 688, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::LinkedPointProviders");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride, PointProvidersToEnable) == 704, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::PointProvidersToEnable");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride, EvaluateAutomatically) == 744, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::EvaluateAutomatically");
static_assert(offsetof(UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride, OnCompletedEvaluationDelegate) == 792, "Offset mismatch for UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::OnCompletedEvaluationDelegate");

// /Script/LagerRuntime.FortAthenaLivingWorldPrefab
// Kind: Class; super: FortLevelInstancePrefab
class UFortAthenaLivingWorldPrefab
{
public:
    std::uint8_t Pad_0000[0x778]; // 0x0000
    TArray<void*> ActorSpawnerDatas; // 0x0778 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LocalLevelBounds[0x38]; // 0x0788 (Size: 0x38, Type: StructProperty)
    std::uint8_t LocalGrassRemovalBox[0x38]; // 0x07C0 (Size: 0x38, Type: StructProperty)
    FMulticastInlineDelegate OnAllActorSpawnedDelegate; // 0x07F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0808
    TArray<void*> BuildingsToKill; // 0x0820 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnedActors; // 0x0830 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FinishedDestroyingBuildingCallback[0xC]; // 0x0840 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t bHasFinishedSpawn; // 0x084C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasRemovedFoliage; // 0x084D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x084E
    std::uint8_t bIsEnabled[0x28]; // 0x0850 (Size: 0x28, Type: StructProperty)
    std::uint8_t Weight[0x28]; // 0x0878 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActorDensityValueOverride[0x28]; // 0x08A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActorDensityRangeOverride[0x28]; // 0x08C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldLevelBeVisible; // 0x08F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSpawnerBeAllowedToSpawn; // 0x08F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldAlwaysSnapAboveLandscape; // 0x08F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseWorldPartitionGridInjection; // 0x08F3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x4]; // 0x08F4
    std::uint8_t WorldGridInjectionData[0x30]; // 0x08F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t CanSpawnCondition[0x28]; // 0x0928 (Size: 0x28, Type: StructProperty)
    TArray<void*> ActorSpawnerDataOverrides; // 0x0950 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0960
    std::uint8_t PrefabTags[0x1]; // 0x0968 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldPrefab, ActorSpawnerDatas) == 1912, "Offset mismatch for UFortAthenaLivingWorldPrefab::ActorSpawnerDatas");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, LocalLevelBounds) == 1928, "Offset mismatch for UFortAthenaLivingWorldPrefab::LocalLevelBounds");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, LocalGrassRemovalBox) == 1984, "Offset mismatch for UFortAthenaLivingWorldPrefab::LocalGrassRemovalBox");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, OnAllActorSpawnedDelegate) == 2040, "Offset mismatch for UFortAthenaLivingWorldPrefab::OnAllActorSpawnedDelegate");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, BuildingsToKill) == 2080, "Offset mismatch for UFortAthenaLivingWorldPrefab::BuildingsToKill");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, SpawnedActors) == 2096, "Offset mismatch for UFortAthenaLivingWorldPrefab::SpawnedActors");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, FinishedDestroyingBuildingCallback) == 2112, "Offset mismatch for UFortAthenaLivingWorldPrefab::FinishedDestroyingBuildingCallback");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, bHasFinishedSpawn) == 2124, "Offset mismatch for UFortAthenaLivingWorldPrefab::bHasFinishedSpawn");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, bHasRemovedFoliage) == 2125, "Offset mismatch for UFortAthenaLivingWorldPrefab::bHasRemovedFoliage");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, bIsEnabled) == 2128, "Offset mismatch for UFortAthenaLivingWorldPrefab::bIsEnabled");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, Weight) == 2168, "Offset mismatch for UFortAthenaLivingWorldPrefab::Weight");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, ActorDensityValueOverride) == 2208, "Offset mismatch for UFortAthenaLivingWorldPrefab::ActorDensityValueOverride");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, ActorDensityRangeOverride) == 2248, "Offset mismatch for UFortAthenaLivingWorldPrefab::ActorDensityRangeOverride");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, bShouldLevelBeVisible) == 2288, "Offset mismatch for UFortAthenaLivingWorldPrefab::bShouldLevelBeVisible");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, bShouldSpawnerBeAllowedToSpawn) == 2289, "Offset mismatch for UFortAthenaLivingWorldPrefab::bShouldSpawnerBeAllowedToSpawn");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, bShouldAlwaysSnapAboveLandscape) == 2290, "Offset mismatch for UFortAthenaLivingWorldPrefab::bShouldAlwaysSnapAboveLandscape");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, bUseWorldPartitionGridInjection) == 2291, "Offset mismatch for UFortAthenaLivingWorldPrefab::bUseWorldPartitionGridInjection");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, WorldGridInjectionData) == 2296, "Offset mismatch for UFortAthenaLivingWorldPrefab::WorldGridInjectionData");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, CanSpawnCondition) == 2344, "Offset mismatch for UFortAthenaLivingWorldPrefab::CanSpawnCondition");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, ActorSpawnerDataOverrides) == 2384, "Offset mismatch for UFortAthenaLivingWorldPrefab::ActorSpawnerDataOverrides");
static_assert(offsetof(UFortAthenaLivingWorldPrefab, PrefabTags) == 2408, "Offset mismatch for UFortAthenaLivingWorldPrefab::PrefabTags");

// /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
// Kind: Class; super: Actor
class UFortAthenaLivingWorldPrefabActorSpawner
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t ActorDescription[0x110]; // 0x0270 (Size: 0x110, Type: StructProperty)
    FMulticastInlineDelegate OnActorSpawnedDelegate; // 0x0380 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* PatrolPath; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Guid[0x10]; // 0x0398 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> SpawnedActor; // 0x03A8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldPrefabActorSpawner, ActorDescription) == 624, "Offset mismatch for UFortAthenaLivingWorldPrefabActorSpawner::ActorDescription");
static_assert(offsetof(UFortAthenaLivingWorldPrefabActorSpawner, OnActorSpawnedDelegate) == 896, "Offset mismatch for UFortAthenaLivingWorldPrefabActorSpawner::OnActorSpawnedDelegate");
static_assert(offsetof(UFortAthenaLivingWorldPrefabActorSpawner, PatrolPath) == 912, "Offset mismatch for UFortAthenaLivingWorldPrefabActorSpawner::PatrolPath");
static_assert(offsetof(UFortAthenaLivingWorldPrefabActorSpawner, Guid) == 920, "Offset mismatch for UFortAthenaLivingWorldPrefabActorSpawner::Guid");
static_assert(offsetof(UFortAthenaLivingWorldPrefabActorSpawner, SpawnedActor) == 936, "Offset mismatch for UFortAthenaLivingWorldPrefabActorSpawner::SpawnedActor");

// /Script/LagerRuntime.FortAthenaLivingWorldPrefabLevelStreaming
// Kind: Class; super: LevelStreamingLevelInstance
class UFortAthenaLivingWorldPrefabLevelStreaming
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t bInitiallyLoaded; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    // 0x01C0 BoolProperty bInitiallyVisible (shared storage)
};

static_assert(offsetof(UFortAthenaLivingWorldPrefabLevelStreaming, bInitiallyLoaded) == 448, "Offset mismatch for UFortAthenaLivingWorldPrefabLevelStreaming::bInitiallyLoaded");

// /Script/LagerRuntime.FortAthenaLivingWorldRuntimePatrolPathPointProviderComponent
// Kind: Class; super: FortAthenaLivingWorldRuntimePointProviderComponent
class UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* SourcePointProviderClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TagSource; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    std::uint8_t Tags[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpawnLimitSource; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0101
    std::uint8_t SpawnLimiter[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent, SourcePointProviderClass) == 208, "Offset mismatch for UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent::SourcePointProviderClass");
static_assert(offsetof(UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent, TagSource) == 216, "Offset mismatch for UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent::TagSource");
static_assert(offsetof(UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent, Tags) == 224, "Offset mismatch for UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent::Tags");
static_assert(offsetof(UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent, SpawnLimitSource) == 256, "Offset mismatch for UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent::SpawnLimitSource");
static_assert(offsetof(UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent, SpawnLimiter) == 264, "Offset mismatch for UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent::SpawnLimiter");

// /Script/LagerRuntime.FortAthenaLivingWorldRuntimePointProviderComponent
// Kind: Class; super: ActorComponent
class UFortAthenaLivingWorldRuntimePointProviderComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPointProviderCreated; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldRuntimePointProviderComponent, OnPointProviderCreated) == 192, "Offset mismatch for UFortAthenaLivingWorldRuntimePointProviderComponent::OnPointProviderCreated");

// /Script/LagerRuntime.FortAthenaLivingWorldRuntimeStaticPointProviderComponent
// Kind: Class; super: FortAthenaLivingWorldRuntimePointProviderComponent
class UFortAthenaLivingWorldRuntimeStaticPointProviderComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* SourcePointProviderClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D8
    std::uint8_t SpawnTransform[0x60]; // 0x00E0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bStartEnabled; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0141
    std::uint8_t PointProviderTagsToAdd[0x20]; // 0x0148 (Size: 0x20, Type: StructProperty)
    std::uint8_t bOverrideSpawnLimiter; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0169
    std::uint8_t SpawnLimiter[0x68]; // 0x0170 (Size: 0x68, Type: StructProperty)
    TWeakObjectPtr<void> PointProvider; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldRuntimeStaticPointProviderComponent, SourcePointProviderClass) == 208, "Offset mismatch for UFortAthenaLivingWorldRuntimeStaticPointProviderComponent::SourcePointProviderClass");
static_assert(offsetof(UFortAthenaLivingWorldRuntimeStaticPointProviderComponent, SpawnTransform) == 224, "Offset mismatch for UFortAthenaLivingWorldRuntimeStaticPointProviderComponent::SpawnTransform");
static_assert(offsetof(UFortAthenaLivingWorldRuntimeStaticPointProviderComponent, bStartEnabled) == 320, "Offset mismatch for UFortAthenaLivingWorldRuntimeStaticPointProviderComponent::bStartEnabled");
static_assert(offsetof(UFortAthenaLivingWorldRuntimeStaticPointProviderComponent, PointProviderTagsToAdd) == 328, "Offset mismatch for UFortAthenaLivingWorldRuntimeStaticPointProviderComponent::PointProviderTagsToAdd");
static_assert(offsetof(UFortAthenaLivingWorldRuntimeStaticPointProviderComponent, bOverrideSpawnLimiter) == 360, "Offset mismatch for UFortAthenaLivingWorldRuntimeStaticPointProviderComponent::bOverrideSpawnLimiter");
static_assert(offsetof(UFortAthenaLivingWorldRuntimeStaticPointProviderComponent, SpawnLimiter) == 368, "Offset mismatch for UFortAthenaLivingWorldRuntimeStaticPointProviderComponent::SpawnLimiter");
static_assert(offsetof(UFortAthenaLivingWorldRuntimeStaticPointProviderComponent, PointProvider) == 472, "Offset mismatch for UFortAthenaLivingWorldRuntimeStaticPointProviderComponent::PointProvider");

// /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction
// Kind: Class; super: Object
class UFortAthenaLivingWorldSpawnAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
// Kind: Class; super: FortAthenaLivingWorldSpawnAction
class UFortAthenaLivingWorldSpawnActionBlueprint
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToConvoy
// Kind: Class; super: FortAthenaLivingWorldSpawnAction
class UFortAthenaLivingWorldSpawnAction_AddAIToConvoy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Tags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldSpawnAction_AddAIToConvoy, Tags) == 40, "Offset mismatch for UFortAthenaLivingWorldSpawnAction_AddAIToConvoy::Tags");

// /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup
// Kind: Class; super: FortAthenaLivingWorldSpawnAction
class UFortAthenaLivingWorldSpawnAction_AddAIToGroup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GroupTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldSpawnAction_AddAIToGroup, GroupTags) == 40, "Offset mismatch for UFortAthenaLivingWorldSpawnAction_AddAIToGroup::GroupTags");

// /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_LayeredOverrides
// Kind: Class; super: FortAthenaLivingWorldSpawnAction
class UFortAthenaLivingWorldSpawnAction_LayeredOverrides
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* OverrideTable; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldSpawnAction_LayeredOverrides, OverrideTable) == 40, "Offset mismatch for UFortAthenaLivingWorldSpawnAction_LayeredOverrides::OverrideTable");

// /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
// Kind: Class; super: FortAthenaLivingWorldSpawnAction
class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SeatMappings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle, SeatMappings) == 40, "Offset mismatch for UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle::SeatMappings");

// /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_SpawnInAir
// Kind: Class; super: FortAthenaLivingWorldSpawnAction
class UFortAthenaLivingWorldSpawnAction_SpawnInAir
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SpawnHeight[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnAreaExtentX[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnAreaExtentY[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    FName LandingLocationKeyName; // 0x00A0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldSpawnAction_SpawnInAir, SpawnHeight) == 40, "Offset mismatch for UFortAthenaLivingWorldSpawnAction_SpawnInAir::SpawnHeight");
static_assert(offsetof(UFortAthenaLivingWorldSpawnAction_SpawnInAir, SpawnAreaExtentX) == 80, "Offset mismatch for UFortAthenaLivingWorldSpawnAction_SpawnInAir::SpawnAreaExtentX");
static_assert(offsetof(UFortAthenaLivingWorldSpawnAction_SpawnInAir, SpawnAreaExtentY) == 120, "Offset mismatch for UFortAthenaLivingWorldSpawnAction_SpawnInAir::SpawnAreaExtentY");
static_assert(offsetof(UFortAthenaLivingWorldSpawnAction_SpawnInAir, LandingLocationKeyName) == 160, "Offset mismatch for UFortAthenaLivingWorldSpawnAction_SpawnInAir::LandingLocationKeyName");

// /Script/LagerRuntime.FortAthenaLivingWorldSpawnerDataDensityInterface
// Kind: Class; super: Interface
class UFortAthenaLivingWorldSpawnerDataDensityInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldSpawnerDataPreloadInterface
// Kind: Class; super: Interface
class UFortAthenaLivingWorldSpawnerDataPreloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider
// Kind: Class; super: Actor
class UFortAthenaLivingWorldStaticPointProvider
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    FMulticastInlineDelegate OnActorSpawned; // 0x0278 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventRequested_BP; // 0x0288 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventSpawned_BP; // 0x0298 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventFinished_BP; // 0x02A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t SpawnLimiter[0x68]; // 0x02B8 (Size: 0x68, Type: StructProperty)
    std::uint8_t FiltersTags[0x20]; // 0x0320 (Size: 0x20, Type: StructProperty)
    TArray<void*> SpawnPoints; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bStartEnabled; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRandomizeStartPoint; // 0x0351 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRandomizePointRotation; // 0x0352 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0353
    std::uint8_t DebugInfo[0x10]; // 0x0358 (Size: 0x10, Type: StructProperty)
    void* CachedGameState; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* CachedLivingWorldManager; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, OnActorSpawned) == 632, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::OnActorSpawned");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, OnEventRequested_BP) == 648, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::OnEventRequested_BP");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, OnEventSpawned_BP) == 664, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::OnEventSpawned_BP");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, OnEventFinished_BP) == 680, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::OnEventFinished_BP");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, SpawnLimiter) == 696, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::SpawnLimiter");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, FiltersTags) == 800, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::FiltersTags");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, SpawnPoints) == 832, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::SpawnPoints");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, bStartEnabled) == 848, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::bStartEnabled");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, bRandomizeStartPoint) == 849, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::bRandomizeStartPoint");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, bRandomizePointRotation) == 850, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::bRandomizePointRotation");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, DebugInfo) == 856, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::DebugInfo");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, CachedGameState) == 872, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::CachedGameState");
static_assert(offsetof(UFortAthenaLivingWorldStaticPointProvider, CachedLivingWorldManager) == 880, "Offset mismatch for UFortAthenaLivingWorldStaticPointProvider::CachedLivingWorldManager");

// /Script/LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
// Kind: Class; super: FortAthenaLivingWorldStaticPointProvider
class UFortAthenaLivingWorldVehiclePointProvider
{
public:
    std::uint8_t Pad_0000[0x3A0]; // 0x0000
    std::uint8_t InitialOverlapBehavior; // 0x03A0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03A1
    std::uint8_t ForceModsAllowed[0x28]; // 0x03A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceMods[0x20]; // 0x03D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ForceCosmeticsAllowed[0x28]; // 0x03F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceCosmetics[0x1]; // 0x0418 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldVehiclePointProvider, InitialOverlapBehavior) == 928, "Offset mismatch for UFortAthenaLivingWorldVehiclePointProvider::InitialOverlapBehavior");
static_assert(offsetof(UFortAthenaLivingWorldVehiclePointProvider, ForceModsAllowed) == 936, "Offset mismatch for UFortAthenaLivingWorldVehiclePointProvider::ForceModsAllowed");
static_assert(offsetof(UFortAthenaLivingWorldVehiclePointProvider, ForceMods) == 976, "Offset mismatch for UFortAthenaLivingWorldVehiclePointProvider::ForceMods");
static_assert(offsetof(UFortAthenaLivingWorldVehiclePointProvider, ForceCosmeticsAllowed) == 1008, "Offset mismatch for UFortAthenaLivingWorldVehiclePointProvider::ForceCosmeticsAllowed");
static_assert(offsetof(UFortAthenaLivingWorldVehiclePointProvider, ForceCosmetics) == 1048, "Offset mismatch for UFortAthenaLivingWorldVehiclePointProvider::ForceCosmetics");

// /Script/LagerRuntime.FortAthenaLivingWorldVolume
// Kind: Class; super: Volume
class UFortAthenaLivingWorldVolume
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bStartEnabled; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWaitForNavigation; // 0x02B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x02B2
    std::uint8_t FiltersTags[0x20]; // 0x02B8 (Size: 0x20, Type: StructProperty)
    void* EnvironmentQuery; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QueryConfig; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRemoveUsedPoint; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveUsedPointPermenantly; // 0x02F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x02F2
    std::uint8_t SpawnLimiter[0x68]; // 0x02F8 (Size: 0x68, Type: StructProperty)
    std::uint8_t EQSRefreshInterval[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaterLevelIndexMin[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaterLevelIndexMax[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    void* CachedGameState; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnActorSpawnedResult; // 0x03E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPointProviderRegistered; // 0x03F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CachedLivingWorldManager; // 0x0400 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldVolume, bStartEnabled) == 688, "Offset mismatch for UFortAthenaLivingWorldVolume::bStartEnabled");
static_assert(offsetof(UFortAthenaLivingWorldVolume, bWaitForNavigation) == 689, "Offset mismatch for UFortAthenaLivingWorldVolume::bWaitForNavigation");
static_assert(offsetof(UFortAthenaLivingWorldVolume, FiltersTags) == 696, "Offset mismatch for UFortAthenaLivingWorldVolume::FiltersTags");
static_assert(offsetof(UFortAthenaLivingWorldVolume, EnvironmentQuery) == 728, "Offset mismatch for UFortAthenaLivingWorldVolume::EnvironmentQuery");
static_assert(offsetof(UFortAthenaLivingWorldVolume, QueryConfig) == 736, "Offset mismatch for UFortAthenaLivingWorldVolume::QueryConfig");
static_assert(offsetof(UFortAthenaLivingWorldVolume, bRemoveUsedPoint) == 752, "Offset mismatch for UFortAthenaLivingWorldVolume::bRemoveUsedPoint");
static_assert(offsetof(UFortAthenaLivingWorldVolume, bRemoveUsedPointPermenantly) == 753, "Offset mismatch for UFortAthenaLivingWorldVolume::bRemoveUsedPointPermenantly");
static_assert(offsetof(UFortAthenaLivingWorldVolume, SpawnLimiter) == 760, "Offset mismatch for UFortAthenaLivingWorldVolume::SpawnLimiter");
static_assert(offsetof(UFortAthenaLivingWorldVolume, EQSRefreshInterval) == 864, "Offset mismatch for UFortAthenaLivingWorldVolume::EQSRefreshInterval");
static_assert(offsetof(UFortAthenaLivingWorldVolume, WaterLevelIndexMin) == 904, "Offset mismatch for UFortAthenaLivingWorldVolume::WaterLevelIndexMin");
static_assert(offsetof(UFortAthenaLivingWorldVolume, WaterLevelIndexMax) == 944, "Offset mismatch for UFortAthenaLivingWorldVolume::WaterLevelIndexMax");
static_assert(offsetof(UFortAthenaLivingWorldVolume, CachedGameState) == 984, "Offset mismatch for UFortAthenaLivingWorldVolume::CachedGameState");
static_assert(offsetof(UFortAthenaLivingWorldVolume, OnActorSpawnedResult) == 992, "Offset mismatch for UFortAthenaLivingWorldVolume::OnActorSpawnedResult");
static_assert(offsetof(UFortAthenaLivingWorldVolume, OnPointProviderRegistered) == 1008, "Offset mismatch for UFortAthenaLivingWorldVolume::OnPointProviderRegistered");
static_assert(offsetof(UFortAthenaLivingWorldVolume, CachedLivingWorldManager) == 1024, "Offset mismatch for UFortAthenaLivingWorldVolume::CachedLivingWorldManager");

// /Script/LagerRuntime.FortAthenaLivingWorldWardComponent
// Kind: Class; super: ActorComponent
class UFortAthenaLivingWorldWardComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float DefaultRadius; // 0x00C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaLivingWorldWardComponent, DefaultRadius) == 192, "Offset mismatch for UFortAthenaLivingWorldWardComponent::DefaultRadius");

// /Script/LagerRuntime.FortAthenaPatrolPathPointProvider
// Kind: Class; super: Actor
class UFortAthenaPatrolPathPointProvider
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t FiltersTags[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    void* AssociatedPatrolPath; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAlignOrientationToPath; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    // 0x02A0 BoolProperty bSpawnOnPatrolPath (shared storage)
    // 0x02A0 BoolProperty bStartEnabled (shared storage)
    // 0x02A0 BoolProperty bSyncStatusWithPatrolPath (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02A1
    std::uint8_t SpawnLimiter[0x68]; // 0x02A8 (Size: 0x68, Type: StructProperty)
    FMulticastInlineDelegate OnActorSpawnedResult; // 0x0310 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> RuntimePatrolPathWeakPtr; // 0x0320 (Size: 0x8, Type: WeakObjectProperty)
    void* CachedGameState; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* CachedLivingWorldManager; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaPatrolPathPointProvider, FiltersTags) == 632, "Offset mismatch for UFortAthenaPatrolPathPointProvider::FiltersTags");
static_assert(offsetof(UFortAthenaPatrolPathPointProvider, AssociatedPatrolPath) == 664, "Offset mismatch for UFortAthenaPatrolPathPointProvider::AssociatedPatrolPath");
static_assert(offsetof(UFortAthenaPatrolPathPointProvider, bAlignOrientationToPath) == 672, "Offset mismatch for UFortAthenaPatrolPathPointProvider::bAlignOrientationToPath");
static_assert(offsetof(UFortAthenaPatrolPathPointProvider, SpawnLimiter) == 680, "Offset mismatch for UFortAthenaPatrolPathPointProvider::SpawnLimiter");
static_assert(offsetof(UFortAthenaPatrolPathPointProvider, OnActorSpawnedResult) == 784, "Offset mismatch for UFortAthenaPatrolPathPointProvider::OnActorSpawnedResult");
static_assert(offsetof(UFortAthenaPatrolPathPointProvider, RuntimePatrolPathWeakPtr) == 800, "Offset mismatch for UFortAthenaPatrolPathPointProvider::RuntimePatrolPathWeakPtr");
static_assert(offsetof(UFortAthenaPatrolPathPointProvider, CachedGameState) == 808, "Offset mismatch for UFortAthenaPatrolPathPointProvider::CachedGameState");
static_assert(offsetof(UFortAthenaPatrolPathPointProvider, CachedLivingWorldManager) == 816, "Offset mismatch for UFortAthenaPatrolPathPointProvider::CachedLivingWorldManager");

// /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider
// Kind: Class; super: Actor
class UFortAthenaPointAroundPlayerProvider
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t FiltersTags[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    void* QueryTemplate; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RunMode; // 0x02A0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bGenerateAroundPlayerBots; // 0x02A1 (Size: 0x1, Type: BoolProperty)
    // 0x02A1 BoolProperty bStartEnabled (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x02A2
    std::uint8_t IgnorePlayerWithTag[0x4]; // 0x02A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t SpawnLimiter[0x68]; // 0x02A8 (Size: 0x68, Type: StructProperty)
    FMulticastInlineDelegate OnActorSpawnedResult; // 0x0310 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CachedGameState; // 0x0320 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaPointAroundPlayerProvider, FiltersTags) == 632, "Offset mismatch for UFortAthenaPointAroundPlayerProvider::FiltersTags");
static_assert(offsetof(UFortAthenaPointAroundPlayerProvider, QueryTemplate) == 664, "Offset mismatch for UFortAthenaPointAroundPlayerProvider::QueryTemplate");
static_assert(offsetof(UFortAthenaPointAroundPlayerProvider, RunMode) == 672, "Offset mismatch for UFortAthenaPointAroundPlayerProvider::RunMode");
static_assert(offsetof(UFortAthenaPointAroundPlayerProvider, bGenerateAroundPlayerBots) == 673, "Offset mismatch for UFortAthenaPointAroundPlayerProvider::bGenerateAroundPlayerBots");
static_assert(offsetof(UFortAthenaPointAroundPlayerProvider, IgnorePlayerWithTag) == 676, "Offset mismatch for UFortAthenaPointAroundPlayerProvider::IgnorePlayerWithTag");
static_assert(offsetof(UFortAthenaPointAroundPlayerProvider, SpawnLimiter) == 680, "Offset mismatch for UFortAthenaPointAroundPlayerProvider::SpawnLimiter");
static_assert(offsetof(UFortAthenaPointAroundPlayerProvider, OnActorSpawnedResult) == 784, "Offset mismatch for UFortAthenaPointAroundPlayerProvider::OnActorSpawnedResult");
static_assert(offsetof(UFortAthenaPointAroundPlayerProvider, CachedGameState) == 800, "Offset mismatch for UFortAthenaPointAroundPlayerProvider::CachedGameState");

// /Script/LagerRuntime.FortAthenaRuntimeWaterBodyPointProviderComponent
// Kind: Class; super: FortAthenaLivingWorldRuntimePointProviderComponent
class UFortAthenaRuntimeWaterBodyPointProviderComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* PointProviderClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortAthenaRuntimeWaterBodyPointProviderComponent, PointProviderClass) == 208, "Offset mismatch for UFortAthenaRuntimeWaterBodyPointProviderComponent::PointProviderClass");

// /Script/LagerRuntime.FortAthenaWaterBodyPointProvider
// Kind: Class; super: Object
class UFortAthenaWaterBodyPointProvider
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* CachedGameState; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* CachedLivingWorldManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PointProviderFiltersTags[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    void* EnvironmentQuery; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QueryConfig; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaxLocationsCountByWaterArea[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxLocationsCountBySplineLength[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bRemoveUsedLocations; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    std::uint8_t ActivationDistance[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ValidationSweepRadius[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ValidationSweepUp[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t ValidationSweepDown[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t ValidationGroundTraceCollisionProfile[0x20]; // 0x0170 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpawnLimiter[0x68]; // 0x0190 (Size: 0x68, Type: StructProperty)
    TWeakObjectPtr<void> AssociatedWaterBody; // 0x01F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAthenaWaterBodyPointProvider, CachedGameState) == 48, "Offset mismatch for UFortAthenaWaterBodyPointProvider::CachedGameState");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, CachedLivingWorldManager) == 56, "Offset mismatch for UFortAthenaWaterBodyPointProvider::CachedLivingWorldManager");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, PointProviderFiltersTags) == 64, "Offset mismatch for UFortAthenaWaterBodyPointProvider::PointProviderFiltersTags");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, EnvironmentQuery) == 96, "Offset mismatch for UFortAthenaWaterBodyPointProvider::EnvironmentQuery");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, QueryConfig) == 104, "Offset mismatch for UFortAthenaWaterBodyPointProvider::QueryConfig");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, MaxLocationsCountByWaterArea) == 120, "Offset mismatch for UFortAthenaWaterBodyPointProvider::MaxLocationsCountByWaterArea");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, MaxLocationsCountBySplineLength) == 160, "Offset mismatch for UFortAthenaWaterBodyPointProvider::MaxLocationsCountBySplineLength");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, bRemoveUsedLocations) == 200, "Offset mismatch for UFortAthenaWaterBodyPointProvider::bRemoveUsedLocations");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, ActivationDistance) == 208, "Offset mismatch for UFortAthenaWaterBodyPointProvider::ActivationDistance");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, ValidationSweepRadius) == 248, "Offset mismatch for UFortAthenaWaterBodyPointProvider::ValidationSweepRadius");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, ValidationSweepUp) == 288, "Offset mismatch for UFortAthenaWaterBodyPointProvider::ValidationSweepUp");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, ValidationSweepDown) == 328, "Offset mismatch for UFortAthenaWaterBodyPointProvider::ValidationSweepDown");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, ValidationGroundTraceCollisionProfile) == 368, "Offset mismatch for UFortAthenaWaterBodyPointProvider::ValidationGroundTraceCollisionProfile");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, SpawnLimiter) == 400, "Offset mismatch for UFortAthenaWaterBodyPointProvider::SpawnLimiter");
static_assert(offsetof(UFortAthenaWaterBodyPointProvider, AssociatedWaterBody) == 504, "Offset mismatch for UFortAthenaWaterBodyPointProvider::AssociatedWaterBody");

// /Script/LagerRuntime.FortCheatManager_LivingWorldManager
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_LivingWorldManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t CheatTeleportToCount; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    FString CheatTeleportLastEventDataName; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::int32_t CheatSpawnEventCount; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0044
    FString CheatSpawnEventName; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::int32_t CheatTriggerEventCount; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x005C
    FString CheatTriggerEventName; // 0x0060 (Size: 0x10, Type: StrProperty)
    TArray<void*> InputBindings; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    void* InputComponent; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatTeleportToCount) == 40, "Offset mismatch for UFortCheatManager_LivingWorldManager::CheatTeleportToCount");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatTeleportLastEventDataName) == 48, "Offset mismatch for UFortCheatManager_LivingWorldManager::CheatTeleportLastEventDataName");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatSpawnEventCount) == 64, "Offset mismatch for UFortCheatManager_LivingWorldManager::CheatSpawnEventCount");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatSpawnEventName) == 72, "Offset mismatch for UFortCheatManager_LivingWorldManager::CheatSpawnEventName");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatTriggerEventCount) == 88, "Offset mismatch for UFortCheatManager_LivingWorldManager::CheatTriggerEventCount");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, CheatTriggerEventName) == 96, "Offset mismatch for UFortCheatManager_LivingWorldManager::CheatTriggerEventName");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, InputBindings) == 112, "Offset mismatch for UFortCheatManager_LivingWorldManager::InputBindings");
static_assert(offsetof(UFortCheatManager_LivingWorldManager, InputComponent) == 128, "Offset mismatch for UFortCheatManager_LivingWorldManager::InputComponent");

// /Script/LagerRuntime.FortCheatManager_LivingWorldManager_EnhancedInputBindingInfo
// Kind: Class; super: Object
class UFortCheatManager_LivingWorldManager_EnhancedInputBindingInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_AddCategoryTableToConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ConfigToCategoryTableDatas; // 0x0028 (Size: 0x10, Type: MapProperty)
    std::uint8_t StartVersion[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t EndVersion[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddCategoryTableToConfig, ConfigToCategoryTableDatas) == 40, "Offset mismatch for UFortGameFeatureAction_AddCategoryTableToConfig::ConfigToCategoryTableDatas");
static_assert(offsetof(UFortGameFeatureAction_AddCategoryTableToConfig, StartVersion) == 56, "Offset mismatch for UFortGameFeatureAction_AddCategoryTableToConfig::StartVersion");
static_assert(offsetof(UFortGameFeatureAction_AddCategoryTableToConfig, EndVersion) == 60, "Offset mismatch for UFortGameFeatureAction_AddCategoryTableToConfig::EndVersion");

// /Script/LagerRuntime.FortGameFeatureAction_AddLagerConfig
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_AddLagerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> LagerConfigOverrides; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddLagerConfig, LagerConfigOverrides) == 40, "Offset mismatch for UFortGameFeatureAction_AddLagerConfig::LagerConfigOverrides");

// /Script/LagerRuntime.FortGameFeatureAction_AddTaggedSpawnActions
// Kind: Class; super: FortGameInstanceGameFeatureAction
class UFortGameFeatureAction_AddTaggedSpawnActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> SoftTaggedSpawnActions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddTaggedSpawnActions, SoftTaggedSpawnActions) == 56, "Offset mismatch for UFortGameFeatureAction_AddTaggedSpawnActions::SoftTaggedSpawnActions");

// /Script/LagerRuntime.FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
// Kind: Class; super: FortGameFeatureAction_MapMarkerTagsProvider
class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortLWPointProviderSelectorHelper_EQS
// Kind: Class; super: Object
class UFortLWPointProviderSelectorHelper_EQS
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LagerRuntime.FortPawnComponent_LivingWorldSpawnAroundPlayer
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_LivingWorldSpawnAroundPlayer
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> RuntimeData; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerPlayerConfigurations; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPawnComponent_LivingWorldSpawnAroundPlayer, RuntimeData) == 200, "Offset mismatch for UFortPawnComponent_LivingWorldSpawnAroundPlayer::RuntimeData");
static_assert(offsetof(UFortPawnComponent_LivingWorldSpawnAroundPlayer, PerPlayerConfigurations) == 216, "Offset mismatch for UFortPawnComponent_LivingWorldSpawnAroundPlayer::PerPlayerConfigurations");

// /Script/LagerRuntime.FortQueryGenerator_LWMPointProviderSelector_EQS
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_LWMPointProviderSelector_EQS
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString OptionName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* ItemType; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoSortTests; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bCanRunAsync (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t EnvQueryResultNormalizationOption; // 0x004C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryGenerator_LWMPointProviderSelector_EQS, OptionName) == 48, "Offset mismatch for UFortQueryGenerator_LWMPointProviderSelector_EQS::OptionName");
static_assert(offsetof(UFortQueryGenerator_LWMPointProviderSelector_EQS, ItemType) == 64, "Offset mismatch for UFortQueryGenerator_LWMPointProviderSelector_EQS::ItemType");
static_assert(offsetof(UFortQueryGenerator_LWMPointProviderSelector_EQS, bAutoSortTests) == 72, "Offset mismatch for UFortQueryGenerator_LWMPointProviderSelector_EQS::bAutoSortTests");
static_assert(offsetof(UFortQueryGenerator_LWMPointProviderSelector_EQS, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UFortQueryGenerator_LWMPointProviderSelector_EQS::EnvQueryResultNormalizationOption");

// /Script/LagerRuntime.FortQueryTest_IsCloseToLivingWorldWard
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_IsCloseToLivingWorldWard
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t TestOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t TestPurpose; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    FString TestComment; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MultipleContextFilterOp; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MultipleContextScoreOp; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FilterType; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x004B
    std::uint8_t BoolValue[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMin[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMax[0x39]; // 0x00C0 (Size: 0x39, Type: StructProperty)
    std::uint8_t ScoringEquation; // 0x00F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMinType; // 0x00FA (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMaxType; // 0x00FB (Size: 0x1, Type: ByteProperty)
    std::uint8_t NormalizationType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00FD
    std::uint8_t ScoreClampMin[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreClampMax[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoringFactor[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReferenceValue[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineReferenceValue; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x01E1
    std::uint8_t bWorkOnFloatValues; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, TestOrder) == 48, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::TestOrder");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, TestPurpose) == 52, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::TestPurpose");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, TestComment) == 56, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::TestComment");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, MultipleContextFilterOp) == 72, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::MultipleContextFilterOp");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, MultipleContextScoreOp) == 73, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::MultipleContextScoreOp");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, FilterType) == 74, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::FilterType");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, BoolValue) == 80, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::BoolValue");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, FloatValueMin) == 136, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::FloatValueMin");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, FloatValueMax) == 192, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::FloatValueMax");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, ScoringEquation) == 249, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::ScoringEquation");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, ClampMinType) == 250, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::ClampMinType");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, ClampMaxType) == 251, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::ClampMaxType");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, NormalizationType) == 252, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::NormalizationType");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, ScoreClampMin) == 256, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::ScoreClampMin");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, ScoreClampMax) == 312, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::ScoreClampMax");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, ScoringFactor) == 368, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::ScoringFactor");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, ReferenceValue) == 424, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::ReferenceValue");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, bDefineReferenceValue) == 480, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::bDefineReferenceValue");
static_assert(offsetof(UFortQueryTest_IsCloseToLivingWorldWard, bWorkOnFloatValues) == 496, "Offset mismatch for UFortQueryTest_IsCloseToLivingWorldWard::bWorkOnFloatValues");
