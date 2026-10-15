/**
 * decamp dumper generated SDK
 * Package: /Script/MassSpawner
 */
#pragma once
#include "Basic.h"

// /Script/MassSpawner.MassCreatedBySpawner
// Kind: ScriptStruct; super: MassFragment
struct FMassCreatedBySpawner
{
public:
    void* Spawner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassCreatedBySpawner, Spawner) == 0, "Offset mismatch for FMassCreatedBySpawner::Spawner");

// /Script/MassSpawner.MassDuplicateElementsMessage
// Kind: ScriptStruct; super: none
struct FMassDuplicateElementsMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassSpawner.MassEntityConfig
// Kind: ScriptStruct; super: none
struct FMassEntityConfig
{
public:
    void* Parent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Traits; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* ConfigOwner; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConfigGuid[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassEntityConfig, Parent) == 0, "Offset mismatch for FMassEntityConfig::Parent");
static_assert(offsetof(FMassEntityConfig, Traits) == 8, "Offset mismatch for FMassEntityConfig::Traits");
static_assert(offsetof(FMassEntityConfig, ConfigOwner) == 24, "Offset mismatch for FMassEntityConfig::ConfigOwner");
static_assert(offsetof(FMassEntityConfig, ConfigGuid) == 32, "Offset mismatch for FMassEntityConfig::ConfigGuid");

// /Script/MassSpawner.MassEntitySpawnDataGeneratorResult
// Kind: ScriptStruct; super: none
struct FMassEntitySpawnDataGeneratorResult
{
public:
    std::uint8_t SpawnData[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* SpawnDataProcessor; // 0x0010 (Size: 0x8, Type: ClassProperty)
    TArray<void*> PostSpawnProcessors; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::int32_t EntityConfigIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t NumEntities; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMassEntitySpawnDataGeneratorResult, SpawnData) == 0, "Offset mismatch for FMassEntitySpawnDataGeneratorResult::SpawnData");
static_assert(offsetof(FMassEntitySpawnDataGeneratorResult, SpawnDataProcessor) == 16, "Offset mismatch for FMassEntitySpawnDataGeneratorResult::SpawnDataProcessor");
static_assert(offsetof(FMassEntitySpawnDataGeneratorResult, PostSpawnProcessors) == 24, "Offset mismatch for FMassEntitySpawnDataGeneratorResult::PostSpawnProcessors");
static_assert(offsetof(FMassEntitySpawnDataGeneratorResult, EntityConfigIndex) == 40, "Offset mismatch for FMassEntitySpawnDataGeneratorResult::EntityConfigIndex");
static_assert(offsetof(FMassEntitySpawnDataGeneratorResult, NumEntities) == 44, "Offset mismatch for FMassEntitySpawnDataGeneratorResult::NumEntities");

// /Script/MassSpawner.MassEntityTemplateData
// Kind: ScriptStruct; super: none
struct FMassEntityTemplateData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassSpawner.MassEntityTemplateID
// Kind: ScriptStruct; super: none
struct FMassEntityTemplateID
{
public:
    std::uint8_t ConfigGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint32_t FlavorHash; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint64_t TotalHash; // 0x0018 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FMassEntityTemplateID, ConfigGuid) == 0, "Offset mismatch for FMassEntityTemplateID::ConfigGuid");
static_assert(offsetof(FMassEntityTemplateID, FlavorHash) == 16, "Offset mismatch for FMassEntityTemplateID::FlavorHash");
static_assert(offsetof(FMassEntityTemplateID, TotalHash) == 24, "Offset mismatch for FMassEntityTemplateID::TotalHash");

// /Script/MassSpawner.MassMissingTraitMessage
// Kind: ScriptStruct; super: none
struct FMassMissingTraitMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassSpawner.MassSpawnDataGenerator
// Kind: ScriptStruct; super: none
struct FMassSpawnDataGenerator
{
public:
    void* GeneratorClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* GeneratorInstance; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float Proportion; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassSpawnDataGenerator, GeneratorClass) == 0, "Offset mismatch for FMassSpawnDataGenerator::GeneratorClass");
static_assert(offsetof(FMassSpawnDataGenerator, GeneratorInstance) == 8, "Offset mismatch for FMassSpawnDataGenerator::GeneratorInstance");
static_assert(offsetof(FMassSpawnDataGenerator, Proportion) == 16, "Offset mismatch for FMassSpawnDataGenerator::Proportion");

// /Script/MassSpawner.MassSpawnedEntityType
// Kind: ScriptStruct; super: none
struct FMassSpawnedEntityType
{
public:
    std::uint8_t EntityConfig[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    float Proportion; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    void* EntityConfigPtr; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassSpawnedEntityType, EntityConfig) == 0, "Offset mismatch for FMassSpawnedEntityType::EntityConfig");
static_assert(offsetof(FMassSpawnedEntityType, Proportion) == 32, "Offset mismatch for FMassSpawnedEntityType::Proportion");
static_assert(offsetof(FMassSpawnedEntityType, EntityConfigPtr) == 40, "Offset mismatch for FMassSpawnedEntityType::EntityConfigPtr");

// /Script/MassSpawner.MassTransformsSpawnData
// Kind: ScriptStruct; super: none
struct FMassTransformsSpawnData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassSpawner.ReplicationTemplateIDFragment
// Kind: ScriptStruct; super: MassFragment
struct FReplicationTemplateIDFragment
{
public:
    std::uint8_t ID[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReplicationTemplateIDFragment, ID) == 0, "Offset mismatch for FReplicationTemplateIDFragment::ID");

// /Script/MassSpawner.MassAssortedFragmentsTrait
// Kind: Class; super: MassEntityTraitBase
class UMassAssortedFragmentsTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Fragments; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Tags; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassAssortedFragmentsTrait, Fragments) == 48, "Offset mismatch for UMassAssortedFragmentsTrait::Fragments");
static_assert(offsetof(UMassAssortedFragmentsTrait, Tags) == 64, "Offset mismatch for UMassAssortedFragmentsTrait::Tags");

// /Script/MassSpawner.MassCreatedBySpawnerTrait
// Kind: Class; super: MassEntityTraitBase
class UMassCreatedBySpawnerTrait
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValidTargetConfig; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassCreatedBySpawnerTrait, ValidTargetConfig) == 40, "Offset mismatch for UMassCreatedBySpawnerTrait::ValidTargetConfig");

// /Script/MassSpawner.MassEntityConfigAsset
// Kind: Class; super: DataAsset
class UMassEntityConfigAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Config[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassEntityConfigAsset, Config) == 40, "Offset mismatch for UMassEntityConfigAsset::Config");

// /Script/MassSpawner.MassEntityEQSSpawnPointsGenerator
// Kind: Class; super: MassEntitySpawnDataGeneratorBase
class UMassEntityEQSSpawnPointsGenerator
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t EQSRequest[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassEntityEQSSpawnPointsGenerator, EQSRequest) == 48, "Offset mismatch for UMassEntityEQSSpawnPointsGenerator::EQSRequest");

// /Script/MassSpawner.MassEntitySpawnDataGeneratorBase
// Kind: Class; super: Object
class UMassEntitySpawnDataGeneratorBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t RandomSelectionSeed; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseCustomSeed; // 0x002C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassEntitySpawnDataGeneratorBase, RandomSelectionSeed) == 40, "Offset mismatch for UMassEntitySpawnDataGeneratorBase::RandomSelectionSeed");
static_assert(offsetof(UMassEntitySpawnDataGeneratorBase, bUseCustomSeed) == 44, "Offset mismatch for UMassEntitySpawnDataGeneratorBase::bUseCustomSeed");

// /Script/MassSpawner.MassEntityTraitBase
// Kind: Class; super: Object
class UMassEntityTraitBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValidTargetConfig; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassEntityTraitBase, ValidTargetConfig) == 40, "Offset mismatch for UMassEntityTraitBase::ValidTargetConfig");

// /Script/MassSpawner.MassEntityZoneGraphSpawnPointsGenerator
// Kind: Class; super: MassEntitySpawnDataGeneratorBase
class UMassEntityZoneGraphSpawnPointsGenerator
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t TagFilter[0xC]; // 0x0030 (Size: 0xC, Type: StructProperty)
    float MinGap; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MaxGap; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMassEntityZoneGraphSpawnPointsGenerator, TagFilter) == 48, "Offset mismatch for UMassEntityZoneGraphSpawnPointsGenerator::TagFilter");
static_assert(offsetof(UMassEntityZoneGraphSpawnPointsGenerator, MinGap) == 60, "Offset mismatch for UMassEntityZoneGraphSpawnPointsGenerator::MinGap");
static_assert(offsetof(UMassEntityZoneGraphSpawnPointsGenerator, MaxGap) == 64, "Offset mismatch for UMassEntityZoneGraphSpawnPointsGenerator::MaxGap");

// /Script/MassSpawner.MassSpawnLocationProcessor
// Kind: Class; super: MassProcessor
class UMassSpawnLocationProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassSpawnLocationProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassSpawnLocationProcessor::ExecutionOrder");
static_assert(offsetof(UMassSpawnLocationProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassSpawnLocationProcessor::ProcessingPhase");
static_assert(offsetof(UMassSpawnLocationProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassSpawnLocationProcessor::ExecutionFlags");
static_assert(offsetof(UMassSpawnLocationProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassSpawnLocationProcessor::bAggregateRequirements");
static_assert(offsetof(UMassSpawnLocationProcessor, ActivationState) == 83, "Offset mismatch for UMassSpawnLocationProcessor::ActivationState");
static_assert(offsetof(UMassSpawnLocationProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassSpawnLocationProcessor::ExecutionPriority");

// /Script/MassSpawner.MassSpawner
// Kind: Class; super: Actor
class UMassSpawner
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnSpawningFinishedEvent; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDespawningFinishedEvent; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t Count; // 0x0290 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0294
    TArray<void*> EntityTypes; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnDataGenerators; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoSpawnOnBeginPlay; // 0x02B8 (Size: 0x1, Type: BoolProperty)
    // 0x02B8 BoolProperty bOverrideSchematics (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x02B9
    TArray<void*> PostSpawnProcessors; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    float SpawningCountScale; // 0x02D0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMassSpawner, OnSpawningFinishedEvent) == 624, "Offset mismatch for UMassSpawner::OnSpawningFinishedEvent");
static_assert(offsetof(UMassSpawner, OnDespawningFinishedEvent) == 640, "Offset mismatch for UMassSpawner::OnDespawningFinishedEvent");
static_assert(offsetof(UMassSpawner, Count) == 656, "Offset mismatch for UMassSpawner::Count");
static_assert(offsetof(UMassSpawner, EntityTypes) == 664, "Offset mismatch for UMassSpawner::EntityTypes");
static_assert(offsetof(UMassSpawner, SpawnDataGenerators) == 680, "Offset mismatch for UMassSpawner::SpawnDataGenerators");
static_assert(offsetof(UMassSpawner, bAutoSpawnOnBeginPlay) == 696, "Offset mismatch for UMassSpawner::bAutoSpawnOnBeginPlay");
static_assert(offsetof(UMassSpawner, PostSpawnProcessors) == 704, "Offset mismatch for UMassSpawner::PostSpawnProcessors");
static_assert(offsetof(UMassSpawner, SpawningCountScale) == 720, "Offset mismatch for UMassSpawner::SpawningCountScale");

// /Script/MassSpawner.MassSpawnerSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassSpawnerSubsystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> SpawnDataInitializers; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassSpawnerSubsystem, SpawnDataInitializers) == 64, "Offset mismatch for UMassSpawnerSubsystem::SpawnDataInitializers");

// /Script/MassSpawner.MassTranslator
// Kind: Class; super: MassProcessor
class UMassTranslator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassTranslator, ExecutionOrder) == 40, "Offset mismatch for UMassTranslator::ExecutionOrder");
static_assert(offsetof(UMassTranslator, ProcessingPhase) == 80, "Offset mismatch for UMassTranslator::ProcessingPhase");
static_assert(offsetof(UMassTranslator, ExecutionFlags) == 81, "Offset mismatch for UMassTranslator::ExecutionFlags");
static_assert(offsetof(UMassTranslator, bAggregateRequirements) == 82, "Offset mismatch for UMassTranslator::bAggregateRequirements");
static_assert(offsetof(UMassTranslator, ActivationState) == 83, "Offset mismatch for UMassTranslator::ActivationState");
static_assert(offsetof(UMassTranslator, ExecutionPriority) == 84, "Offset mismatch for UMassTranslator::ExecutionPriority");
