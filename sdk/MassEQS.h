/**
 * decamp dumper generated SDK
 * Package: /Script/MassEQS
 */
#pragma once
#include "Basic.h"

// /Script/MassEQS.MassEQSRequestHandle
// Kind: ScriptStruct; super: IndexedHandleBase
struct FMassEQSRequestHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEQS.MassEnvQueryEntityInfo
// Kind: ScriptStruct; super: none
struct FMassEnvQueryEntityInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEQS.MassEnvQueryEntityInfoBlueprintWrapper
// Kind: ScriptStruct; super: none
struct FMassEnvQueryEntityInfoBlueprintWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEQS.EnvQueryItemType_MassEntityHandle
// Kind: Class; super: EnvQueryItemType_VectorBase
class UEnvQueryItemType_MassEntityHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEQS.MassEQSBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMassEQSBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEQS.MassEQSRequestInterface
// Kind: Class; super: Interface
class UMassEQSRequestInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEQS.MassEQSSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassEQSSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEQS.MassEnvQueryGenerator
// Kind: Class; super: EnvQueryGenerator
class UMassEnvQueryGenerator
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

static_assert(offsetof(UMassEnvQueryGenerator, OptionName) == 48, "Offset mismatch for UMassEnvQueryGenerator::OptionName");
static_assert(offsetof(UMassEnvQueryGenerator, ItemType) == 64, "Offset mismatch for UMassEnvQueryGenerator::ItemType");
static_assert(offsetof(UMassEnvQueryGenerator, bAutoSortTests) == 72, "Offset mismatch for UMassEnvQueryGenerator::bAutoSortTests");
static_assert(offsetof(UMassEnvQueryGenerator, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UMassEnvQueryGenerator::EnvQueryResultNormalizationOption");

// /Script/MassEQS.MassEnvQueryGeneratorProcessor_MassEntityHandles
// Kind: Class; super: MassEnvQueryProcessorBase
class UMassEnvQueryGeneratorProcessor_MassEntityHandles
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

static_assert(offsetof(UMassEnvQueryGeneratorProcessor_MassEntityHandles, ExecutionOrder) == 40, "Offset mismatch for UMassEnvQueryGeneratorProcessor_MassEntityHandles::ExecutionOrder");
static_assert(offsetof(UMassEnvQueryGeneratorProcessor_MassEntityHandles, ProcessingPhase) == 80, "Offset mismatch for UMassEnvQueryGeneratorProcessor_MassEntityHandles::ProcessingPhase");
static_assert(offsetof(UMassEnvQueryGeneratorProcessor_MassEntityHandles, ExecutionFlags) == 81, "Offset mismatch for UMassEnvQueryGeneratorProcessor_MassEntityHandles::ExecutionFlags");
static_assert(offsetof(UMassEnvQueryGeneratorProcessor_MassEntityHandles, bAggregateRequirements) == 82, "Offset mismatch for UMassEnvQueryGeneratorProcessor_MassEntityHandles::bAggregateRequirements");
static_assert(offsetof(UMassEnvQueryGeneratorProcessor_MassEntityHandles, ActivationState) == 83, "Offset mismatch for UMassEnvQueryGeneratorProcessor_MassEntityHandles::ActivationState");
static_assert(offsetof(UMassEnvQueryGeneratorProcessor_MassEntityHandles, ExecutionPriority) == 84, "Offset mismatch for UMassEnvQueryGeneratorProcessor_MassEntityHandles::ExecutionPriority");

// /Script/MassEQS.MassEnvQueryGenerator_MassEntityHandles
// Kind: Class; super: MassEnvQueryGenerator
class UMassEnvQueryGenerator_MassEntityHandles
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t SearchRadius[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    void* SearchCenter; // 0x00B0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMassEnvQueryGenerator_MassEntityHandles, SearchRadius) == 120, "Offset mismatch for UMassEnvQueryGenerator_MassEntityHandles::SearchRadius");
static_assert(offsetof(UMassEnvQueryGenerator_MassEntityHandles, SearchCenter) == 176, "Offset mismatch for UMassEnvQueryGenerator_MassEntityHandles::SearchCenter");

// /Script/MassEQS.MassEnvQueryProcessorBase
// Kind: Class; super: MassProcessor
class UMassEnvQueryProcessorBase
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

static_assert(offsetof(UMassEnvQueryProcessorBase, ExecutionOrder) == 40, "Offset mismatch for UMassEnvQueryProcessorBase::ExecutionOrder");
static_assert(offsetof(UMassEnvQueryProcessorBase, ProcessingPhase) == 80, "Offset mismatch for UMassEnvQueryProcessorBase::ProcessingPhase");
static_assert(offsetof(UMassEnvQueryProcessorBase, ExecutionFlags) == 81, "Offset mismatch for UMassEnvQueryProcessorBase::ExecutionFlags");
static_assert(offsetof(UMassEnvQueryProcessorBase, bAggregateRequirements) == 82, "Offset mismatch for UMassEnvQueryProcessorBase::bAggregateRequirements");
static_assert(offsetof(UMassEnvQueryProcessorBase, ActivationState) == 83, "Offset mismatch for UMassEnvQueryProcessorBase::ActivationState");
static_assert(offsetof(UMassEnvQueryProcessorBase, ExecutionPriority) == 84, "Offset mismatch for UMassEnvQueryProcessorBase::ExecutionPriority");

// /Script/MassEQS.MassEnvQueryTest
// Kind: Class; super: EnvQueryTest
class UMassEnvQueryTest
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

static_assert(offsetof(UMassEnvQueryTest, TestOrder) == 48, "Offset mismatch for UMassEnvQueryTest::TestOrder");
static_assert(offsetof(UMassEnvQueryTest, TestPurpose) == 52, "Offset mismatch for UMassEnvQueryTest::TestPurpose");
static_assert(offsetof(UMassEnvQueryTest, TestComment) == 56, "Offset mismatch for UMassEnvQueryTest::TestComment");
static_assert(offsetof(UMassEnvQueryTest, MultipleContextFilterOp) == 72, "Offset mismatch for UMassEnvQueryTest::MultipleContextFilterOp");
static_assert(offsetof(UMassEnvQueryTest, MultipleContextScoreOp) == 73, "Offset mismatch for UMassEnvQueryTest::MultipleContextScoreOp");
static_assert(offsetof(UMassEnvQueryTest, FilterType) == 74, "Offset mismatch for UMassEnvQueryTest::FilterType");
static_assert(offsetof(UMassEnvQueryTest, BoolValue) == 80, "Offset mismatch for UMassEnvQueryTest::BoolValue");
static_assert(offsetof(UMassEnvQueryTest, FloatValueMin) == 136, "Offset mismatch for UMassEnvQueryTest::FloatValueMin");
static_assert(offsetof(UMassEnvQueryTest, FloatValueMax) == 192, "Offset mismatch for UMassEnvQueryTest::FloatValueMax");
static_assert(offsetof(UMassEnvQueryTest, ScoringEquation) == 249, "Offset mismatch for UMassEnvQueryTest::ScoringEquation");
static_assert(offsetof(UMassEnvQueryTest, ClampMinType) == 250, "Offset mismatch for UMassEnvQueryTest::ClampMinType");
static_assert(offsetof(UMassEnvQueryTest, ClampMaxType) == 251, "Offset mismatch for UMassEnvQueryTest::ClampMaxType");
static_assert(offsetof(UMassEnvQueryTest, NormalizationType) == 252, "Offset mismatch for UMassEnvQueryTest::NormalizationType");
static_assert(offsetof(UMassEnvQueryTest, ScoreClampMin) == 256, "Offset mismatch for UMassEnvQueryTest::ScoreClampMin");
static_assert(offsetof(UMassEnvQueryTest, ScoreClampMax) == 312, "Offset mismatch for UMassEnvQueryTest::ScoreClampMax");
static_assert(offsetof(UMassEnvQueryTest, ScoringFactor) == 368, "Offset mismatch for UMassEnvQueryTest::ScoringFactor");
static_assert(offsetof(UMassEnvQueryTest, ReferenceValue) == 424, "Offset mismatch for UMassEnvQueryTest::ReferenceValue");
static_assert(offsetof(UMassEnvQueryTest, bDefineReferenceValue) == 480, "Offset mismatch for UMassEnvQueryTest::bDefineReferenceValue");
static_assert(offsetof(UMassEnvQueryTest, bWorkOnFloatValues) == 496, "Offset mismatch for UMassEnvQueryTest::bWorkOnFloatValues");

// /Script/MassEQS.MassEnvQueryTestProcessor_MassEntityTags
// Kind: Class; super: MassEnvQueryProcessorBase
class UMassEnvQueryTestProcessor_MassEntityTags
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

static_assert(offsetof(UMassEnvQueryTestProcessor_MassEntityTags, ExecutionOrder) == 40, "Offset mismatch for UMassEnvQueryTestProcessor_MassEntityTags::ExecutionOrder");
static_assert(offsetof(UMassEnvQueryTestProcessor_MassEntityTags, ProcessingPhase) == 80, "Offset mismatch for UMassEnvQueryTestProcessor_MassEntityTags::ProcessingPhase");
static_assert(offsetof(UMassEnvQueryTestProcessor_MassEntityTags, ExecutionFlags) == 81, "Offset mismatch for UMassEnvQueryTestProcessor_MassEntityTags::ExecutionFlags");
static_assert(offsetof(UMassEnvQueryTestProcessor_MassEntityTags, bAggregateRequirements) == 82, "Offset mismatch for UMassEnvQueryTestProcessor_MassEntityTags::bAggregateRequirements");
static_assert(offsetof(UMassEnvQueryTestProcessor_MassEntityTags, ActivationState) == 83, "Offset mismatch for UMassEnvQueryTestProcessor_MassEntityTags::ActivationState");
static_assert(offsetof(UMassEnvQueryTestProcessor_MassEntityTags, ExecutionPriority) == 84, "Offset mismatch for UMassEnvQueryTestProcessor_MassEntityTags::ExecutionPriority");

// /Script/MassEQS.MassEnvQueryTest_MassEntityTags
// Kind: Class; super: MassEnvQueryTest
class UMassEnvQueryTest_MassEntityTags
{
public:
    std::uint8_t Pad_0000[0x220]; // 0x0000
    std::uint8_t TagTestMode; // 0x0220 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0221
    TArray<void*> Tags; // 0x0228 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassEnvQueryTest_MassEntityTags, TagTestMode) == 544, "Offset mismatch for UMassEnvQueryTest_MassEntityTags::TagTestMode");
static_assert(offsetof(UMassEnvQueryTest_MassEntityTags, Tags) == 552, "Offset mismatch for UMassEnvQueryTest_MassEntityTags::Tags");
