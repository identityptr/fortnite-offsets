/**
 * decamp dumper generated SDK
 * Package: /Script/CorruptionGameplayCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CorruptionGameplayCodeRuntime.CorruptionCalendarEventData
// Kind: ScriptStruct; super: none
struct FCorruptionCalendarEventData
{
public:
    FString EventName; // 0x0000 (Size: 0x10, Type: StrProperty)
    float StartPercent; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCorruptionCalendarEventData, EventName) == 0, "Offset mismatch for FCorruptionCalendarEventData::EventName");
static_assert(offsetof(FCorruptionCalendarEventData, StartPercent) == 16, "Offset mismatch for FCorruptionCalendarEventData::StartPercent");

// /Script/CorruptionGameplayCodeRuntime.CorruptionPauseEvent
// Kind: ScriptStruct; super: none
struct FCorruptionPauseEvent
{
public:
    FString EventName; // 0x0000 (Size: 0x10, Type: StrProperty)
    float PercentDurationToPause; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCorruptionPauseEvent, EventName) == 0, "Offset mismatch for FCorruptionPauseEvent::EventName");
static_assert(offsetof(FCorruptionPauseEvent, PercentDurationToPause) == 16, "Offset mismatch for FCorruptionPauseEvent::PercentDurationToPause");

// /Script/CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationData
// Kind: ScriptStruct; super: none
struct FCubeMovement_CorruptionGenerationData
{
public:
    TArray<void*> TravelerData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCubeMovement_CorruptionGenerationData, TravelerData) == 0, "Offset mismatch for FCubeMovement_CorruptionGenerationData::TravelerData");

// /Script/CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationSplinePointData
// Kind: ScriptStruct; super: none
struct FCubeMovement_CorruptionGenerationSplinePointData
{
public:
    std::uint8_t SplinePointTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    float SplinePercentComplete; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCubeMovement_CorruptionGenerationSplinePointData, SplinePointTransform) == 0, "Offset mismatch for FCubeMovement_CorruptionGenerationSplinePointData::SplinePointTransform");
static_assert(offsetof(FCubeMovement_CorruptionGenerationSplinePointData, SplinePercentComplete) == 96, "Offset mismatch for FCubeMovement_CorruptionGenerationSplinePointData::SplinePercentComplete");

// /Script/CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationTravelerData
// Kind: ScriptStruct; super: none
struct FCubeMovement_CorruptionGenerationTravelerData
{
public:
    TArray<void*> SplinePointData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* PathTraveler; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCubeMovement_CorruptionGenerationTravelerData, SplinePointData) == 0, "Offset mismatch for FCubeMovement_CorruptionGenerationTravelerData::SplinePointData");
static_assert(offsetof(FCubeMovement_CorruptionGenerationTravelerData, PathTraveler) == 16, "Offset mismatch for FCubeMovement_CorruptionGenerationTravelerData::PathTraveler");

// /Script/CorruptionGameplayCodeRuntime.TravelerStepCorruptionOverrideData
// Kind: ScriptStruct; super: none
struct FTravelerStepCorruptionOverrideData
{
public:
    TMap<void*, void*> PointGroupStepPercentOverrides; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FTravelerStepCorruptionOverrideData, PointGroupStepPercentOverrides) == 0, "Offset mismatch for FTravelerStepCorruptionOverrideData::PointGroupStepPercentOverrides");

// /Script/CorruptionGameplayCodeRuntime.WarEffortFundingChoiceData
// Kind: ScriptStruct; super: none
struct FWarEffortFundingChoiceData
{
public:
    std::uint8_t Option1[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Option2[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int64_t TargetFundingAmount; // 0x0020 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FWarEffortFundingChoiceData, Option1) == 0, "Offset mismatch for FWarEffortFundingChoiceData::Option1");
static_assert(offsetof(FWarEffortFundingChoiceData, Option2) == 16, "Offset mismatch for FWarEffortFundingChoiceData::Option2");
static_assert(offsetof(FWarEffortFundingChoiceData, TargetFundingAmount) == 32, "Offset mismatch for FWarEffortFundingChoiceData::TargetFundingAmount");

// /Script/CorruptionGameplayCodeRuntime.WarEffortFundingData
// Kind: ScriptStruct; super: none
struct FWarEffortFundingData
{
public:
    std::uint8_t FundingTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float FundedPercent; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWarEffortFundingData, FundingTag) == 0, "Offset mismatch for FWarEffortFundingData::FundingTag");
static_assert(offsetof(FWarEffortFundingData, FundedPercent) == 4, "Offset mismatch for FWarEffortFundingData::FundedPercent");

// /Script/CorruptionGameplayCodeRuntime.WarEffortFundingMetadata
// Kind: ScriptStruct; super: MeshMetaDataStruct
struct FWarEffortFundingMetadata
{
public:
    std::uint8_t IndexedFundingData[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TArray<void*> FundingChoices; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWarEffortFundingMetadata, IndexedFundingData) == 0, "Offset mismatch for FWarEffortFundingMetadata::IndexedFundingData");
static_assert(offsetof(FWarEffortFundingMetadata, FundingChoices) == 32, "Offset mismatch for FWarEffortFundingMetadata::FundingChoices");

// /Script/CorruptionGameplayCodeRuntime.WarEffortFundingOptionData
// Kind: ScriptStruct; super: none
struct FWarEffortFundingOptionData
{
public:
    std::uint8_t OptionTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::int64_t CurrentFundingAmount; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FWarEffortFundingOptionData, OptionTag) == 0, "Offset mismatch for FWarEffortFundingOptionData::OptionTag");
static_assert(offsetof(FWarEffortFundingOptionData, CurrentFundingAmount) == 8, "Offset mismatch for FWarEffortFundingOptionData::CurrentFundingAmount");

// /Script/CorruptionGameplayCodeRuntime.WarEffortIndexedFundingData
// Kind: ScriptStruct; super: none
struct FWarEffortIndexedFundingData
{
public:
    TArray<void*> CurrentFundingArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int64_t FinalFundingAmount; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::int64_t TowerFundingAmount; // 0x0018 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FWarEffortIndexedFundingData, CurrentFundingArray) == 0, "Offset mismatch for FWarEffortIndexedFundingData::CurrentFundingArray");
static_assert(offsetof(FWarEffortIndexedFundingData, FinalFundingAmount) == 16, "Offset mismatch for FWarEffortIndexedFundingData::FinalFundingAmount");
static_assert(offsetof(FWarEffortIndexedFundingData, TowerFundingAmount) == 24, "Offset mismatch for FWarEffortIndexedFundingData::TowerFundingAmount");

// /Script/CorruptionGameplayCodeRuntime.WarEffortMutatorChoiceData
// Kind: ScriptStruct; super: none
struct FWarEffortMutatorChoiceData
{
public:
    std::uint8_t FundingTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> SoftRefsToLoad; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> LootTableMods; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FWarEffortMutatorChoiceData, FundingTag) == 0, "Offset mismatch for FWarEffortMutatorChoiceData::FundingTag");
static_assert(offsetof(FWarEffortMutatorChoiceData, SoftRefsToLoad) == 8, "Offset mismatch for FWarEffortMutatorChoiceData::SoftRefsToLoad");
static_assert(offsetof(FWarEffortMutatorChoiceData, LootTableMods) == 24, "Offset mismatch for FWarEffortMutatorChoiceData::LootTableMods");

// /Script/CorruptionGameplayCodeRuntime.WarEffortMutatorMetadata
// Kind: ScriptStruct; super: MeshMetaDataStruct
struct FWarEffortMutatorMetadata
{
public:
    TArray<void*> ActiveFundedItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveTryBeforeYouBuyItems; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWarEffortMutatorMetadata, ActiveFundedItems) == 0, "Offset mismatch for FWarEffortMutatorMetadata::ActiveFundedItems");
static_assert(offsetof(FWarEffortMutatorMetadata, ActiveTryBeforeYouBuyItems) == 16, "Offset mismatch for FWarEffortMutatorMetadata::ActiveTryBeforeYouBuyItems");

// /Script/CorruptionGameplayCodeRuntime.CorruptionCoverageMap
// Kind: Class; super: Object
class UCorruptionCoverageMap
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath
// Kind: Class; super: ScriptedObjectMovement_StaticPath
class UCubeMovementStaticPath
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    float GenerationZTraceHeight; // 0x0400 (Size: 0x4, Type: FloatProperty)
    float CubeSpacingFactor; // 0x0404 (Size: 0x4, Type: FloatProperty)
    float CubeAngleLimitDegrees; // 0x0408 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x040C
    void* CorruptionSequence; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0418
    TArray<void*> TravelerCorruptionStepPercentOverrides; // 0x0420 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCubeMovementStaticPath, GenerationZTraceHeight) == 1024, "Offset mismatch for UCubeMovementStaticPath::GenerationZTraceHeight");
static_assert(offsetof(UCubeMovementStaticPath, CubeSpacingFactor) == 1028, "Offset mismatch for UCubeMovementStaticPath::CubeSpacingFactor");
static_assert(offsetof(UCubeMovementStaticPath, CubeAngleLimitDegrees) == 1032, "Offset mismatch for UCubeMovementStaticPath::CubeAngleLimitDegrees");
static_assert(offsetof(UCubeMovementStaticPath, CorruptionSequence) == 1040, "Offset mismatch for UCubeMovementStaticPath::CorruptionSequence");
static_assert(offsetof(UCubeMovementStaticPath, TravelerCorruptionStepPercentOverrides) == 1056, "Offset mismatch for UCubeMovementStaticPath::TravelerCorruptionStepPercentOverrides");

// /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_WarEffort
{
public:
    std::uint8_t Pad_0000[0x408]; // 0x0000
    std::uint8_t MeshNetworkMetadata[0x20]; // 0x0408 (Size: 0x20, Type: StructProperty)
    TArray<void*> WeaponChoices; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreloadedItemList; // 0x0438 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanPreloadItems; // 0x0448 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_WarEffort, MeshNetworkMetadata) == 1032, "Offset mismatch for UFortAthenaMutator_WarEffort::MeshNetworkMetadata");
static_assert(offsetof(UFortAthenaMutator_WarEffort, WeaponChoices) == 1064, "Offset mismatch for UFortAthenaMutator_WarEffort::WeaponChoices");
static_assert(offsetof(UFortAthenaMutator_WarEffort, PreloadedItemList) == 1080, "Offset mismatch for UFortAthenaMutator_WarEffort::PreloadedItemList");
static_assert(offsetof(UFortAthenaMutator_WarEffort, bCanPreloadItems) == 1096, "Offset mismatch for UFortAthenaMutator_WarEffort::bCanPreloadItems");

// /Script/CorruptionGameplayCodeRuntime.FortCorruptionSequenceData
// Kind: Class; super: PrimaryDataAsset
class UFortCorruptionSequenceData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CorruptionStartEvents; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CorruptionPauseEvents; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCorruptionSequenceData, CorruptionStartEvents) == 40, "Offset mismatch for UFortCorruptionSequenceData::CorruptionStartEvents");
static_assert(offsetof(UFortCorruptionSequenceData, CorruptionPauseEvents) == 56, "Offset mismatch for UFortCorruptionSequenceData::CorruptionPauseEvents");

// /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UWarEffortFundingLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor
// Kind: Class; super: Info
class UWarEffortMeshActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* MeshNetworkComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActiveFundedItems; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveTryBeforeYouBuyItems; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurrentFundingData; // 0x0298 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWarEffortMeshActor, MeshNetworkComponent) == 624, "Offset mismatch for UWarEffortMeshActor::MeshNetworkComponent");
static_assert(offsetof(UWarEffortMeshActor, ActiveFundedItems) == 632, "Offset mismatch for UWarEffortMeshActor::ActiveFundedItems");
static_assert(offsetof(UWarEffortMeshActor, ActiveTryBeforeYouBuyItems) == 648, "Offset mismatch for UWarEffortMeshActor::ActiveTryBeforeYouBuyItems");
static_assert(offsetof(UWarEffortMeshActor, CurrentFundingData) == 664, "Offset mismatch for UWarEffortMeshActor::CurrentFundingData");
