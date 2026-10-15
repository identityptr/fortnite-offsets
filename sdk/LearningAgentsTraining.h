/**
 * decamp dumper generated SDK
 * Package: /Script/LearningAgentsTraining
 */
#pragma once
#include "Basic.h"

// /Script/LearningAgentsTraining.LearningAgentsCommunicator
// Kind: ScriptStruct; super: none
struct FLearningAgentsCommunicator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgentsTraining.LearningAgentsEntityInfo
// Kind: ScriptStruct; super: none
struct FLearningAgentsEntityInfo
{
public:
    void* EntityClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    float EntitySpawnZOffset; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t EpisodeEntitySpawnCountMin; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t EpisodeEntitySpawnCountMax; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLearningAgentsEntityInfo, EntityClass) == 0, "Offset mismatch for FLearningAgentsEntityInfo::EntityClass");
static_assert(offsetof(FLearningAgentsEntityInfo, EntitySpawnZOffset) == 8, "Offset mismatch for FLearningAgentsEntityInfo::EntitySpawnZOffset");
static_assert(offsetof(FLearningAgentsEntityInfo, EpisodeEntitySpawnCountMin) == 12, "Offset mismatch for FLearningAgentsEntityInfo::EpisodeEntitySpawnCountMin");
static_assert(offsetof(FLearningAgentsEntityInfo, EpisodeEntitySpawnCountMax) == 16, "Offset mismatch for FLearningAgentsEntityInfo::EpisodeEntitySpawnCountMax");

// /Script/LearningAgentsTraining.LearningAgentsFlowMatchingHyperparameters
// Kind: ScriptStruct; super: none
struct FLearningAgentsFlowMatchingHyperparameters
{
public:
    std::int32_t NumberOfIterations; // 0x0000 (Size: 0x4, Type: IntProperty)
    float LearningRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float WeightDecay; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint32_t BatchSize; // 0x000C (Size: 0x4, Type: UInt32Property)
    float ObservationNoiseScale; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNormalizeLatents; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    std::int32_t RandomSeed; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLearningAgentsFlowMatchingHyperparameters, NumberOfIterations) == 0, "Offset mismatch for FLearningAgentsFlowMatchingHyperparameters::NumberOfIterations");
static_assert(offsetof(FLearningAgentsFlowMatchingHyperparameters, LearningRate) == 4, "Offset mismatch for FLearningAgentsFlowMatchingHyperparameters::LearningRate");
static_assert(offsetof(FLearningAgentsFlowMatchingHyperparameters, WeightDecay) == 8, "Offset mismatch for FLearningAgentsFlowMatchingHyperparameters::WeightDecay");
static_assert(offsetof(FLearningAgentsFlowMatchingHyperparameters, BatchSize) == 12, "Offset mismatch for FLearningAgentsFlowMatchingHyperparameters::BatchSize");
static_assert(offsetof(FLearningAgentsFlowMatchingHyperparameters, ObservationNoiseScale) == 16, "Offset mismatch for FLearningAgentsFlowMatchingHyperparameters::ObservationNoiseScale");
static_assert(offsetof(FLearningAgentsFlowMatchingHyperparameters, bNormalizeLatents) == 20, "Offset mismatch for FLearningAgentsFlowMatchingHyperparameters::bNormalizeLatents");
static_assert(offsetof(FLearningAgentsFlowMatchingHyperparameters, RandomSeed) == 24, "Offset mismatch for FLearningAgentsFlowMatchingHyperparameters::RandomSeed");

// /Script/LearningAgentsTraining.LearningAgentsFlowMatchingLoggingSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsFlowMatchingLoggingSettings
{
public:
    std::uint8_t bUseTensorboard; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSaveSnapshots; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t IterationsPerSnapshot; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseMLflow; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    FString MLflowTrackingUri; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLearningAgentsFlowMatchingLoggingSettings, bUseTensorboard) == 0, "Offset mismatch for FLearningAgentsFlowMatchingLoggingSettings::bUseTensorboard");
static_assert(offsetof(FLearningAgentsFlowMatchingLoggingSettings, bSaveSnapshots) == 1, "Offset mismatch for FLearningAgentsFlowMatchingLoggingSettings::bSaveSnapshots");
static_assert(offsetof(FLearningAgentsFlowMatchingLoggingSettings, IterationsPerSnapshot) == 4, "Offset mismatch for FLearningAgentsFlowMatchingLoggingSettings::IterationsPerSnapshot");
static_assert(offsetof(FLearningAgentsFlowMatchingLoggingSettings, bUseMLflow) == 8, "Offset mismatch for FLearningAgentsFlowMatchingLoggingSettings::bUseMLflow");
static_assert(offsetof(FLearningAgentsFlowMatchingLoggingSettings, MLflowTrackingUri) == 16, "Offset mismatch for FLearningAgentsFlowMatchingLoggingSettings::MLflowTrackingUri");

// /Script/LearningAgentsTraining.LearningAgentsFlowMatchingTrainerSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsFlowMatchingTrainerSettings
{
public:
    float TrainerCommunicationTimeout; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RecordingFilterTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLearningAgentsFlowMatchingTrainerSettings, TrainerCommunicationTimeout) == 0, "Offset mismatch for FLearningAgentsFlowMatchingTrainerSettings::TrainerCommunicationTimeout");
static_assert(offsetof(FLearningAgentsFlowMatchingTrainerSettings, RecordingFilterTag) == 4, "Offset mismatch for FLearningAgentsFlowMatchingTrainerSettings::RecordingFilterTag");

// /Script/LearningAgentsTraining.LearningAgentsFlowMatchingTrainerTrainingSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsFlowMatchingTrainerTrainingSettings
{
public:
    std::uint8_t Hyperparameters[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t LoggingSettings[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t ValidationSettings[0x2]; // 0x0040 (Size: 0x2, Type: StructProperty)
    std::uint8_t Device; // 0x0042 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEmbedNormalizationsInWeights; // 0x0043 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLearningAgentsFlowMatchingTrainerTrainingSettings, Hyperparameters) == 0, "Offset mismatch for FLearningAgentsFlowMatchingTrainerTrainingSettings::Hyperparameters");
static_assert(offsetof(FLearningAgentsFlowMatchingTrainerTrainingSettings, LoggingSettings) == 32, "Offset mismatch for FLearningAgentsFlowMatchingTrainerTrainingSettings::LoggingSettings");
static_assert(offsetof(FLearningAgentsFlowMatchingTrainerTrainingSettings, ValidationSettings) == 64, "Offset mismatch for FLearningAgentsFlowMatchingTrainerTrainingSettings::ValidationSettings");
static_assert(offsetof(FLearningAgentsFlowMatchingTrainerTrainingSettings, Device) == 66, "Offset mismatch for FLearningAgentsFlowMatchingTrainerTrainingSettings::Device");
static_assert(offsetof(FLearningAgentsFlowMatchingTrainerTrainingSettings, bEmbedNormalizationsInWeights) == 67, "Offset mismatch for FLearningAgentsFlowMatchingTrainerTrainingSettings::bEmbedNormalizationsInWeights");

// /Script/LearningAgentsTraining.LearningAgentsFlowMatchingValidationSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsFlowMatchingValidationSettings
{
public:
    std::uint8_t bCheckObservationSchemaCompatibility; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckActionSchemaCompatibility; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLearningAgentsFlowMatchingValidationSettings, bCheckObservationSchemaCompatibility) == 0, "Offset mismatch for FLearningAgentsFlowMatchingValidationSettings::bCheckObservationSchemaCompatibility");
static_assert(offsetof(FLearningAgentsFlowMatchingValidationSettings, bCheckActionSchemaCompatibility) == 1, "Offset mismatch for FLearningAgentsFlowMatchingValidationSettings::bCheckActionSchemaCompatibility");

// /Script/LearningAgentsTraining.LearningAgentsImitationLearningLoggingSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsImitationLearningLoggingSettings
{
public:
    std::uint8_t bUseTensorboard; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSaveSnapshots; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t IterationsPerSnapshot; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseMLflow; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    FString MLflowTrackingUri; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLearningAgentsImitationLearningLoggingSettings, bUseTensorboard) == 0, "Offset mismatch for FLearningAgentsImitationLearningLoggingSettings::bUseTensorboard");
static_assert(offsetof(FLearningAgentsImitationLearningLoggingSettings, bSaveSnapshots) == 1, "Offset mismatch for FLearningAgentsImitationLearningLoggingSettings::bSaveSnapshots");
static_assert(offsetof(FLearningAgentsImitationLearningLoggingSettings, IterationsPerSnapshot) == 4, "Offset mismatch for FLearningAgentsImitationLearningLoggingSettings::IterationsPerSnapshot");
static_assert(offsetof(FLearningAgentsImitationLearningLoggingSettings, bUseMLflow) == 8, "Offset mismatch for FLearningAgentsImitationLearningLoggingSettings::bUseMLflow");
static_assert(offsetof(FLearningAgentsImitationLearningLoggingSettings, MLflowTrackingUri) == 16, "Offset mismatch for FLearningAgentsImitationLearningLoggingSettings::MLflowTrackingUri");

// /Script/LearningAgentsTraining.LearningAgentsImitationLearningValidationSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsImitationLearningValidationSettings
{
public:
    std::uint8_t bCheckObservationSchemaCompatibility; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckActionSchemaCompatibility; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLearningAgentsImitationLearningValidationSettings, bCheckObservationSchemaCompatibility) == 0, "Offset mismatch for FLearningAgentsImitationLearningValidationSettings::bCheckObservationSchemaCompatibility");
static_assert(offsetof(FLearningAgentsImitationLearningValidationSettings, bCheckActionSchemaCompatibility) == 1, "Offset mismatch for FLearningAgentsImitationLearningValidationSettings::bCheckActionSchemaCompatibility");

// /Script/LearningAgentsTraining.LearningAgentsImitationTrainerHyperparameters
// Kind: ScriptStruct; super: none
struct FLearningAgentsImitationTrainerHyperparameters
{
public:
    std::int32_t NumberOfIterations; // 0x0000 (Size: 0x4, Type: IntProperty)
    float LearningRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float LearningRateDecay; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t LearningRateDecayStepSize; // 0x000C (Size: 0x4, Type: IntProperty)
    float WeightDecay; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint32_t BatchSize; // 0x0014 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Window; // 0x0018 (Size: 0x4, Type: UInt32Property)
    float ActionRegularizationWeight; // 0x001C (Size: 0x4, Type: FloatProperty)
    float ActionEntropyWeight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ObservationNoiseScale; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, NumberOfIterations) == 0, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::NumberOfIterations");
static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, LearningRate) == 4, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::LearningRate");
static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, LearningRateDecay) == 8, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::LearningRateDecay");
static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, LearningRateDecayStepSize) == 12, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::LearningRateDecayStepSize");
static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, WeightDecay) == 16, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::WeightDecay");
static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, BatchSize) == 20, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::BatchSize");
static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, Window) == 24, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::Window");
static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, ActionRegularizationWeight) == 28, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::ActionRegularizationWeight");
static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, ActionEntropyWeight) == 32, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::ActionEntropyWeight");
static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, ObservationNoiseScale) == 36, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::ObservationNoiseScale");
static_assert(offsetof(FLearningAgentsImitationTrainerHyperparameters, RandomSeed) == 40, "Offset mismatch for FLearningAgentsImitationTrainerHyperparameters::RandomSeed");

// /Script/LearningAgentsTraining.LearningAgentsImitationTrainerSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsImitationTrainerSettings
{
public:
    float TrainerCommunicationTimeout; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RecordingFilterTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLearningAgentsImitationTrainerSettings, TrainerCommunicationTimeout) == 0, "Offset mismatch for FLearningAgentsImitationTrainerSettings::TrainerCommunicationTimeout");
static_assert(offsetof(FLearningAgentsImitationTrainerSettings, RecordingFilterTag) == 4, "Offset mismatch for FLearningAgentsImitationTrainerSettings::RecordingFilterTag");

// /Script/LearningAgentsTraining.LearningAgentsImitationTrainerTrainingSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsImitationTrainerTrainingSettings
{
public:
    std::uint8_t Hyperparameters[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t LoggingSettings[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t ValidationSettings[0x2]; // 0x0050 (Size: 0x2, Type: StructProperty)
    std::uint8_t Device; // 0x0052 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEmbedNormalizationsInWeights; // 0x0053 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRunEvaluation; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0055
    float TrainEvalDatasetSplit; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::int32_t EvaluationFrequency; // 0x005C (Size: 0x4, Type: IntProperty)
    std::int32_t BatchCountPerEvaluation; // 0x0060 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLearningAgentsImitationTrainerTrainingSettings, Hyperparameters) == 0, "Offset mismatch for FLearningAgentsImitationTrainerTrainingSettings::Hyperparameters");
static_assert(offsetof(FLearningAgentsImitationTrainerTrainingSettings, LoggingSettings) == 48, "Offset mismatch for FLearningAgentsImitationTrainerTrainingSettings::LoggingSettings");
static_assert(offsetof(FLearningAgentsImitationTrainerTrainingSettings, ValidationSettings) == 80, "Offset mismatch for FLearningAgentsImitationTrainerTrainingSettings::ValidationSettings");
static_assert(offsetof(FLearningAgentsImitationTrainerTrainingSettings, Device) == 82, "Offset mismatch for FLearningAgentsImitationTrainerTrainingSettings::Device");
static_assert(offsetof(FLearningAgentsImitationTrainerTrainingSettings, bEmbedNormalizationsInWeights) == 83, "Offset mismatch for FLearningAgentsImitationTrainerTrainingSettings::bEmbedNormalizationsInWeights");
static_assert(offsetof(FLearningAgentsImitationTrainerTrainingSettings, bRunEvaluation) == 84, "Offset mismatch for FLearningAgentsImitationTrainerTrainingSettings::bRunEvaluation");
static_assert(offsetof(FLearningAgentsImitationTrainerTrainingSettings, TrainEvalDatasetSplit) == 88, "Offset mismatch for FLearningAgentsImitationTrainerTrainingSettings::TrainEvalDatasetSplit");
static_assert(offsetof(FLearningAgentsImitationTrainerTrainingSettings, EvaluationFrequency) == 92, "Offset mismatch for FLearningAgentsImitationTrainerTrainingSettings::EvaluationFrequency");
static_assert(offsetof(FLearningAgentsImitationTrainerTrainingSettings, BatchCountPerEvaluation) == 96, "Offset mismatch for FLearningAgentsImitationTrainerTrainingSettings::BatchCountPerEvaluation");

// /Script/LearningAgentsTraining.LearningAgentsPPOTrainerSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsPPOTrainerSettings
{
public:
    std::int32_t MaxEpisodeStepNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MaximumRecordedEpisodesPerIteration; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MaximumRecordedStepsPerIteration; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLearningAgentsPPOTrainerSettings, MaxEpisodeStepNum) == 0, "Offset mismatch for FLearningAgentsPPOTrainerSettings::MaxEpisodeStepNum");
static_assert(offsetof(FLearningAgentsPPOTrainerSettings, MaximumRecordedEpisodesPerIteration) == 4, "Offset mismatch for FLearningAgentsPPOTrainerSettings::MaximumRecordedEpisodesPerIteration");
static_assert(offsetof(FLearningAgentsPPOTrainerSettings, MaximumRecordedStepsPerIteration) == 8, "Offset mismatch for FLearningAgentsPPOTrainerSettings::MaximumRecordedStepsPerIteration");

// /Script/LearningAgentsTraining.LearningAgentsPPOTrainingSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsPPOTrainingSettings
{
public:
    std::int32_t NumberOfIterations; // 0x0000 (Size: 0x4, Type: IntProperty)
    float LearningRatePolicy; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float LearningRateCritic; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LearningRateDecay; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WeightDecay; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t PolicyBatchSize; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t CriticBatchSize; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t PolicyWindowSize; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t IterationsPerGather; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t CriticWarmupIterations; // 0x0024 (Size: 0x4, Type: IntProperty)
    float EpsilonClip; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float ReturnRegularizationWeight; // 0x002C (Size: 0x4, Type: FloatProperty)
    float ActionSurrogateWeight; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float ActionRegularizationWeight; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float ActionEntropyWeight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float GaeLambda; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAdvantageNormalization; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0041
    float MinimumAdvantage; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MaximumAdvantage; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseGradNormMaxClipping; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    float GradNormMax; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumberOfStepsToTrimAtStartOfEpisode; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfStepsToTrimAtEndOfEpisode; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t RandomSeed; // 0x005C (Size: 0x4, Type: IntProperty)
    float DiscountFactor; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Device; // 0x0064 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseTensorboard; // 0x0065 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSaveSnapshots; // 0x0066 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0067
    std::int32_t IterationsPerSnapshot; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseMLflow; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x006D
    FString MLflowTrackingUri; // 0x0070 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLearningAgentsPPOTrainingSettings, NumberOfIterations) == 0, "Offset mismatch for FLearningAgentsPPOTrainingSettings::NumberOfIterations");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, LearningRatePolicy) == 4, "Offset mismatch for FLearningAgentsPPOTrainingSettings::LearningRatePolicy");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, LearningRateCritic) == 8, "Offset mismatch for FLearningAgentsPPOTrainingSettings::LearningRateCritic");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, LearningRateDecay) == 12, "Offset mismatch for FLearningAgentsPPOTrainingSettings::LearningRateDecay");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, WeightDecay) == 16, "Offset mismatch for FLearningAgentsPPOTrainingSettings::WeightDecay");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, PolicyBatchSize) == 20, "Offset mismatch for FLearningAgentsPPOTrainingSettings::PolicyBatchSize");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, CriticBatchSize) == 24, "Offset mismatch for FLearningAgentsPPOTrainingSettings::CriticBatchSize");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, PolicyWindowSize) == 28, "Offset mismatch for FLearningAgentsPPOTrainingSettings::PolicyWindowSize");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, IterationsPerGather) == 32, "Offset mismatch for FLearningAgentsPPOTrainingSettings::IterationsPerGather");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, CriticWarmupIterations) == 36, "Offset mismatch for FLearningAgentsPPOTrainingSettings::CriticWarmupIterations");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, EpsilonClip) == 40, "Offset mismatch for FLearningAgentsPPOTrainingSettings::EpsilonClip");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, ReturnRegularizationWeight) == 44, "Offset mismatch for FLearningAgentsPPOTrainingSettings::ReturnRegularizationWeight");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, ActionSurrogateWeight) == 48, "Offset mismatch for FLearningAgentsPPOTrainingSettings::ActionSurrogateWeight");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, ActionRegularizationWeight) == 52, "Offset mismatch for FLearningAgentsPPOTrainingSettings::ActionRegularizationWeight");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, ActionEntropyWeight) == 56, "Offset mismatch for FLearningAgentsPPOTrainingSettings::ActionEntropyWeight");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, GaeLambda) == 60, "Offset mismatch for FLearningAgentsPPOTrainingSettings::GaeLambda");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, bAdvantageNormalization) == 64, "Offset mismatch for FLearningAgentsPPOTrainingSettings::bAdvantageNormalization");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, MinimumAdvantage) == 68, "Offset mismatch for FLearningAgentsPPOTrainingSettings::MinimumAdvantage");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, MaximumAdvantage) == 72, "Offset mismatch for FLearningAgentsPPOTrainingSettings::MaximumAdvantage");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, bUseGradNormMaxClipping) == 76, "Offset mismatch for FLearningAgentsPPOTrainingSettings::bUseGradNormMaxClipping");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, GradNormMax) == 80, "Offset mismatch for FLearningAgentsPPOTrainingSettings::GradNormMax");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, NumberOfStepsToTrimAtStartOfEpisode) == 84, "Offset mismatch for FLearningAgentsPPOTrainingSettings::NumberOfStepsToTrimAtStartOfEpisode");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, NumberOfStepsToTrimAtEndOfEpisode) == 88, "Offset mismatch for FLearningAgentsPPOTrainingSettings::NumberOfStepsToTrimAtEndOfEpisode");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, RandomSeed) == 92, "Offset mismatch for FLearningAgentsPPOTrainingSettings::RandomSeed");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, DiscountFactor) == 96, "Offset mismatch for FLearningAgentsPPOTrainingSettings::DiscountFactor");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, Device) == 100, "Offset mismatch for FLearningAgentsPPOTrainingSettings::Device");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, bUseTensorboard) == 101, "Offset mismatch for FLearningAgentsPPOTrainingSettings::bUseTensorboard");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, bSaveSnapshots) == 102, "Offset mismatch for FLearningAgentsPPOTrainingSettings::bSaveSnapshots");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, IterationsPerSnapshot) == 104, "Offset mismatch for FLearningAgentsPPOTrainingSettings::IterationsPerSnapshot");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, bUseMLflow) == 108, "Offset mismatch for FLearningAgentsPPOTrainingSettings::bUseMLflow");
static_assert(offsetof(FLearningAgentsPPOTrainingSettings, MLflowTrackingUri) == 112, "Offset mismatch for FLearningAgentsPPOTrainingSettings::MLflowTrackingUri");

// /Script/LearningAgentsTraining.LearningAgentsRecord
// Kind: ScriptStruct; super: none
struct FLearningAgentsRecord
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t SchemaName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::int32_t StepNum; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t ObservationDimNum; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t ActionDimNum; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t ObservationCompatibilityHash; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t ActionCompatibilityHash; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t Tags[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    void* Blob; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLearningAgentsRecord, Name) == 0, "Offset mismatch for FLearningAgentsRecord::Name");
static_assert(offsetof(FLearningAgentsRecord, SchemaName) == 16, "Offset mismatch for FLearningAgentsRecord::SchemaName");
static_assert(offsetof(FLearningAgentsRecord, StepNum) == 20, "Offset mismatch for FLearningAgentsRecord::StepNum");
static_assert(offsetof(FLearningAgentsRecord, ObservationDimNum) == 24, "Offset mismatch for FLearningAgentsRecord::ObservationDimNum");
static_assert(offsetof(FLearningAgentsRecord, ActionDimNum) == 28, "Offset mismatch for FLearningAgentsRecord::ActionDimNum");
static_assert(offsetof(FLearningAgentsRecord, ObservationCompatibilityHash) == 32, "Offset mismatch for FLearningAgentsRecord::ObservationCompatibilityHash");
static_assert(offsetof(FLearningAgentsRecord, ActionCompatibilityHash) == 36, "Offset mismatch for FLearningAgentsRecord::ActionCompatibilityHash");
static_assert(offsetof(FLearningAgentsRecord, Tags) == 40, "Offset mismatch for FLearningAgentsRecord::Tags");
static_assert(offsetof(FLearningAgentsRecord, Blob) == 72, "Offset mismatch for FLearningAgentsRecord::Blob");

// /Script/LearningAgentsTraining.LearningAgentsRecorderPathSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsRecorderPathSettings
{
public:
    std::uint8_t IntermediateRelativePath[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString RecordingsSubdirectory; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLearningAgentsRecorderPathSettings, IntermediateRelativePath) == 0, "Offset mismatch for FLearningAgentsRecorderPathSettings::IntermediateRelativePath");
static_assert(offsetof(FLearningAgentsRecorderPathSettings, RecordingsSubdirectory) == 16, "Offset mismatch for FLearningAgentsRecorderPathSettings::RecordingsSubdirectory");

// /Script/LearningAgentsTraining.LearningAgentsSchema
// Kind: ScriptStruct; super: none
struct FLearningAgentsSchema
{
public:
    FString ObservationSchemaJson; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ActionSchemaJson; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLearningAgentsSchema, ObservationSchemaJson) == 0, "Offset mismatch for FLearningAgentsSchema::ObservationSchemaJson");
static_assert(offsetof(FLearningAgentsSchema, ActionSchemaJson) == 16, "Offset mismatch for FLearningAgentsSchema::ActionSchemaJson");

// /Script/LearningAgentsTraining.LearningAgentsSharedMemoryCommunicatorSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsSharedMemoryCommunicatorSettings
{
public:
    float Timeout; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseExternalTrainingProcess; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t ControlsGuid[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ConfigPath[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLearningAgentsSharedMemoryCommunicatorSettings, Timeout) == 0, "Offset mismatch for FLearningAgentsSharedMemoryCommunicatorSettings::Timeout");
static_assert(offsetof(FLearningAgentsSharedMemoryCommunicatorSettings, bUseExternalTrainingProcess) == 4, "Offset mismatch for FLearningAgentsSharedMemoryCommunicatorSettings::bUseExternalTrainingProcess");
static_assert(offsetof(FLearningAgentsSharedMemoryCommunicatorSettings, ControlsGuid) == 8, "Offset mismatch for FLearningAgentsSharedMemoryCommunicatorSettings::ControlsGuid");
static_assert(offsetof(FLearningAgentsSharedMemoryCommunicatorSettings, ConfigPath) == 24, "Offset mismatch for FLearningAgentsSharedMemoryCommunicatorSettings::ConfigPath");

// /Script/LearningAgentsTraining.LearningAgentsSharedMemoryTrainerProcess
// Kind: ScriptStruct; super: none
struct FLearningAgentsSharedMemoryTrainerProcess
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgentsTraining.LearningAgentsSocketCommunicatorSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsSocketCommunicatorSettings
{
public:
    FString IpAddress; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint32_t Port; // 0x0010 (Size: 0x4, Type: UInt32Property)
    float Timeout; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseExternalTrainingProcess; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLearningAgentsSocketCommunicatorSettings, IpAddress) == 0, "Offset mismatch for FLearningAgentsSocketCommunicatorSettings::IpAddress");
static_assert(offsetof(FLearningAgentsSocketCommunicatorSettings, Port) == 16, "Offset mismatch for FLearningAgentsSocketCommunicatorSettings::Port");
static_assert(offsetof(FLearningAgentsSocketCommunicatorSettings, Timeout) == 20, "Offset mismatch for FLearningAgentsSocketCommunicatorSettings::Timeout");
static_assert(offsetof(FLearningAgentsSocketCommunicatorSettings, bUseExternalTrainingProcess) == 24, "Offset mismatch for FLearningAgentsSocketCommunicatorSettings::bUseExternalTrainingProcess");

// /Script/LearningAgentsTraining.LearningAgentsSocketTrainerProcess
// Kind: ScriptStruct; super: none
struct FLearningAgentsSocketTrainerProcess
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgentsTraining.LearningAgentsTrainerProcessSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsTrainerProcessSettings
{
public:
    FString TaskName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t EditorEngineRelativePath[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FString NonEditorEngineRelativePath; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t EditorIntermediateRelativePath[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    FString NonEditorIntermediateRelativePath; // 0x0040 (Size: 0x10, Type: StrProperty)
    std::uint8_t CustomTrainerModulePath[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    FString NonEditorCustomTrainerModulePath; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString TrainerFileName; // 0x0070 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLearningAgentsTrainerProcessSettings, TaskName) == 0, "Offset mismatch for FLearningAgentsTrainerProcessSettings::TaskName");
static_assert(offsetof(FLearningAgentsTrainerProcessSettings, EditorEngineRelativePath) == 16, "Offset mismatch for FLearningAgentsTrainerProcessSettings::EditorEngineRelativePath");
static_assert(offsetof(FLearningAgentsTrainerProcessSettings, NonEditorEngineRelativePath) == 32, "Offset mismatch for FLearningAgentsTrainerProcessSettings::NonEditorEngineRelativePath");
static_assert(offsetof(FLearningAgentsTrainerProcessSettings, EditorIntermediateRelativePath) == 48, "Offset mismatch for FLearningAgentsTrainerProcessSettings::EditorIntermediateRelativePath");
static_assert(offsetof(FLearningAgentsTrainerProcessSettings, NonEditorIntermediateRelativePath) == 64, "Offset mismatch for FLearningAgentsTrainerProcessSettings::NonEditorIntermediateRelativePath");
static_assert(offsetof(FLearningAgentsTrainerProcessSettings, CustomTrainerModulePath) == 80, "Offset mismatch for FLearningAgentsTrainerProcessSettings::CustomTrainerModulePath");
static_assert(offsetof(FLearningAgentsTrainerProcessSettings, NonEditorCustomTrainerModulePath) == 96, "Offset mismatch for FLearningAgentsTrainerProcessSettings::NonEditorCustomTrainerModulePath");
static_assert(offsetof(FLearningAgentsTrainerProcessSettings, TrainerFileName) == 112, "Offset mismatch for FLearningAgentsTrainerProcessSettings::TrainerFileName");

// /Script/LearningAgentsTraining.LearningAgentsTrainingGameSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsTrainingGameSettings
{
public:
    std::uint8_t bUseFixedTimeStep; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float FixedTimeStepFrequency; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSetMaxPhysicsStepToFixedTimeStep; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableMaxFPS; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableVSync; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseUnlitViewportRendering; // 0x000B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLearningAgentsTrainingGameSettings, bUseFixedTimeStep) == 0, "Offset mismatch for FLearningAgentsTrainingGameSettings::bUseFixedTimeStep");
static_assert(offsetof(FLearningAgentsTrainingGameSettings, FixedTimeStepFrequency) == 4, "Offset mismatch for FLearningAgentsTrainingGameSettings::FixedTimeStepFrequency");
static_assert(offsetof(FLearningAgentsTrainingGameSettings, bSetMaxPhysicsStepToFixedTimeStep) == 8, "Offset mismatch for FLearningAgentsTrainingGameSettings::bSetMaxPhysicsStepToFixedTimeStep");
static_assert(offsetof(FLearningAgentsTrainingGameSettings, bDisableMaxFPS) == 9, "Offset mismatch for FLearningAgentsTrainingGameSettings::bDisableMaxFPS");
static_assert(offsetof(FLearningAgentsTrainingGameSettings, bDisableVSync) == 10, "Offset mismatch for FLearningAgentsTrainingGameSettings::bDisableVSync");
static_assert(offsetof(FLearningAgentsTrainingGameSettings, bUseUnlitViewportRendering) == 11, "Offset mismatch for FLearningAgentsTrainingGameSettings::bUseUnlitViewportRendering");

// /Script/LearningAgentsTraining.SpawnGymInfo
// Kind: ScriptStruct; super: none
struct FSpawnGymInfo
{
public:
    void* GymClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::int32_t SpawnCount; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpawnGymInfo, GymClass) == 0, "Offset mismatch for FSpawnGymInfo::GymClass");
static_assert(offsetof(FSpawnGymInfo, SpawnCount) == 8, "Offset mismatch for FSpawnGymInfo::SpawnCount");

// /Script/LearningAgentsTraining.SpawnedEntitiesInfo
// Kind: ScriptStruct; super: none
struct FSpawnedEntitiesInfo
{
public:
    std::uint8_t EntityInfo[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TArray<void*> SpawnedEntities; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpawnedEntitiesInfo, EntityInfo) == 0, "Offset mismatch for FSpawnedEntitiesInfo::EntityInfo");
static_assert(offsetof(FSpawnedEntitiesInfo, SpawnedEntities) == 24, "Offset mismatch for FSpawnedEntitiesInfo::SpawnedEntities");

// /Script/LearningAgentsTraining.LearningAgentsCommunicatorLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULearningAgentsCommunicatorLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgentsTraining.LearningAgentsCompletions
// Kind: Class; super: BlueprintFunctionLibrary
class ULearningAgentsCompletions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgentsTraining.LearningAgentsEntitiesManagerComponent
// Kind: Class; super: ActorComponent
class ULearningAgentsEntitiesManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> Entities; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> EntitiesPool; // 0x00D8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(ULearningAgentsEntitiesManagerComponent, Entities) == 200, "Offset mismatch for ULearningAgentsEntitiesManagerComponent::Entities");
static_assert(offsetof(ULearningAgentsEntitiesManagerComponent, EntitiesPool) == 216, "Offset mismatch for ULearningAgentsEntitiesManagerComponent::EntitiesPool");

// /Script/LearningAgentsTraining.LearningAgentsEntityInterface
// Kind: Class; super: LearningAgentsEntityTrainingInterface
class ULearningAgentsEntityInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgentsTraining.LearningAgentsEntityTrainingInterface
// Kind: Class; super: Interface
class ULearningAgentsEntityTrainingInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgentsTraining.LearningAgentsFlowMatchingTrainer
// Kind: Class; super: LearningAgentsManagerListener
class ULearningAgentsFlowMatchingTrainer
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Interactor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* Model; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsTraining; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTrainingFailed; // 0x0059 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULearningAgentsFlowMatchingTrainer, Interactor) == 72, "Offset mismatch for ULearningAgentsFlowMatchingTrainer::Interactor");
static_assert(offsetof(ULearningAgentsFlowMatchingTrainer, Model) == 80, "Offset mismatch for ULearningAgentsFlowMatchingTrainer::Model");
static_assert(offsetof(ULearningAgentsFlowMatchingTrainer, bIsTraining) == 88, "Offset mismatch for ULearningAgentsFlowMatchingTrainer::bIsTraining");
static_assert(offsetof(ULearningAgentsFlowMatchingTrainer, bHasTrainingFailed) == 89, "Offset mismatch for ULearningAgentsFlowMatchingTrainer::bHasTrainingFailed");

// /Script/LearningAgentsTraining.LearningAgentsGymBase
// Kind: Class; super: Actor
class ULearningAgentsGymBase
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnGymInitialized; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBeginGymReset; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostGymReset; // 0x0290 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t RandomSeed; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x14]; // 0x02A4
    TArray<void*> LearningComponents; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULearningAgentsGymBase, OnGymInitialized) == 624, "Offset mismatch for ULearningAgentsGymBase::OnGymInitialized");
static_assert(offsetof(ULearningAgentsGymBase, OnBeginGymReset) == 640, "Offset mismatch for ULearningAgentsGymBase::OnBeginGymReset");
static_assert(offsetof(ULearningAgentsGymBase, OnPostGymReset) == 656, "Offset mismatch for ULearningAgentsGymBase::OnPostGymReset");
static_assert(offsetof(ULearningAgentsGymBase, RandomSeed) == 672, "Offset mismatch for ULearningAgentsGymBase::RandomSeed");
static_assert(offsetof(ULearningAgentsGymBase, LearningComponents) == 696, "Offset mismatch for ULearningAgentsGymBase::LearningComponents");

// /Script/LearningAgentsTraining.LearningAgentsGymSimple
// Kind: Class; super: LearningAgentsGymBase
class ULearningAgentsGymSimple
{
public:
    std::uint8_t Pad_0000[0x2C8]; // 0x0000
    void* SimpleGymFloor; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULearningAgentsGymSimple, SimpleGymFloor) == 712, "Offset mismatch for ULearningAgentsGymSimple::SimpleGymFloor");

// /Script/LearningAgentsTraining.LearningAgentsGymsManager
// Kind: Class; super: Actor
class ULearningAgentsGymsManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::int32_t RandomSeed; // 0x0270 (Size: 0x4, Type: IntProperty)
    float GymsSpacing; // 0x0274 (Size: 0x4, Type: FloatProperty)
    TArray<void*> GymTemplates; // 0x0278 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULearningAgentsGymsManager, RandomSeed) == 624, "Offset mismatch for ULearningAgentsGymsManager::RandomSeed");
static_assert(offsetof(ULearningAgentsGymsManager, GymsSpacing) == 628, "Offset mismatch for ULearningAgentsGymsManager::GymsSpacing");
static_assert(offsetof(ULearningAgentsGymsManager, GymTemplates) == 632, "Offset mismatch for ULearningAgentsGymsManager::GymTemplates");

// /Script/LearningAgentsTraining.LearningAgentsImitationTrainer
// Kind: Class; super: LearningAgentsManagerListener
class ULearningAgentsImitationTrainer
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Interactor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* Policy; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsTraining; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTrainingFailed; // 0x0059 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULearningAgentsImitationTrainer, Interactor) == 72, "Offset mismatch for ULearningAgentsImitationTrainer::Interactor");
static_assert(offsetof(ULearningAgentsImitationTrainer, Policy) == 80, "Offset mismatch for ULearningAgentsImitationTrainer::Policy");
static_assert(offsetof(ULearningAgentsImitationTrainer, bIsTraining) == 88, "Offset mismatch for ULearningAgentsImitationTrainer::bIsTraining");
static_assert(offsetof(ULearningAgentsImitationTrainer, bHasTrainingFailed) == 89, "Offset mismatch for ULearningAgentsImitationTrainer::bHasTrainingFailed");

// /Script/LearningAgentsTraining.LearningAgentsLearningComponentInterface
// Kind: Class; super: Interface
class ULearningAgentsLearningComponentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgentsTraining.LearningAgentsPPOTrainer
// Kind: Class; super: LearningAgentsManagerListener
class ULearningAgentsPPOTrainer
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Interactor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* TrainingEnvironment; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Policy; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* Critic; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsTraining; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTrainingFailed; // 0x0069 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULearningAgentsPPOTrainer, Interactor) == 72, "Offset mismatch for ULearningAgentsPPOTrainer::Interactor");
static_assert(offsetof(ULearningAgentsPPOTrainer, TrainingEnvironment) == 80, "Offset mismatch for ULearningAgentsPPOTrainer::TrainingEnvironment");
static_assert(offsetof(ULearningAgentsPPOTrainer, Policy) == 88, "Offset mismatch for ULearningAgentsPPOTrainer::Policy");
static_assert(offsetof(ULearningAgentsPPOTrainer, Critic) == 96, "Offset mismatch for ULearningAgentsPPOTrainer::Critic");
static_assert(offsetof(ULearningAgentsPPOTrainer, bIsTraining) == 104, "Offset mismatch for ULearningAgentsPPOTrainer::bIsTraining");
static_assert(offsetof(ULearningAgentsPPOTrainer, bHasTrainingFailed) == 105, "Offset mismatch for ULearningAgentsPPOTrainer::bHasTrainingFailed");

// /Script/LearningAgentsTraining.LearningAgentsRecordBlob
// Kind: Class; super: Object
class ULearningAgentsRecordBlob
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ObservationData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActionData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULearningAgentsRecordBlob, ObservationData) == 40, "Offset mismatch for ULearningAgentsRecordBlob::ObservationData");
static_assert(offsetof(ULearningAgentsRecordBlob, ActionData) == 56, "Offset mismatch for ULearningAgentsRecordBlob::ActionData");

// /Script/LearningAgentsTraining.LearningAgentsRecorder
// Kind: Class; super: LearningAgentsManagerListener
class ULearningAgentsRecorder
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    FMulticastInlineDelegate OnRecordingBegin; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRecordingEnd; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* Interactor; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* Recording; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsRecording; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULearningAgentsRecorder, OnRecordingBegin) == 72, "Offset mismatch for ULearningAgentsRecorder::OnRecordingBegin");
static_assert(offsetof(ULearningAgentsRecorder, OnRecordingEnd) == 88, "Offset mismatch for ULearningAgentsRecorder::OnRecordingEnd");
static_assert(offsetof(ULearningAgentsRecorder, Interactor) == 104, "Offset mismatch for ULearningAgentsRecorder::Interactor");
static_assert(offsetof(ULearningAgentsRecorder, Recording) == 112, "Offset mismatch for ULearningAgentsRecorder::Recording");
static_assert(offsetof(ULearningAgentsRecorder, bIsRecording) == 120, "Offset mismatch for ULearningAgentsRecorder::bIsRecording");

// /Script/LearningAgentsTraining.LearningAgentsRecording
// Kind: Class; super: DataAsset
class ULearningAgentsRecording
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RecordingFile[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t RecordingFolder[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t NewTag[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewSchemaName[0x4]; // 0x004C (Size: 0x4, Type: NameProperty)
    std::uint8_t SchemaFile[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> Schemas; // 0x0060 (Size: 0x10, Type: MapProperty)
    TArray<void*> Records; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULearningAgentsRecording, RecordingFile) == 40, "Offset mismatch for ULearningAgentsRecording::RecordingFile");
static_assert(offsetof(ULearningAgentsRecording, RecordingFolder) == 56, "Offset mismatch for ULearningAgentsRecording::RecordingFolder");
static_assert(offsetof(ULearningAgentsRecording, NewTag) == 72, "Offset mismatch for ULearningAgentsRecording::NewTag");
static_assert(offsetof(ULearningAgentsRecording, NewSchemaName) == 76, "Offset mismatch for ULearningAgentsRecording::NewSchemaName");
static_assert(offsetof(ULearningAgentsRecording, SchemaFile) == 80, "Offset mismatch for ULearningAgentsRecording::SchemaFile");
static_assert(offsetof(ULearningAgentsRecording, Schemas) == 96, "Offset mismatch for ULearningAgentsRecording::Schemas");
static_assert(offsetof(ULearningAgentsRecording, Records) == 112, "Offset mismatch for ULearningAgentsRecording::Records");

// /Script/LearningAgentsTraining.LearningAgentsRewards
// Kind: Class; super: BlueprintFunctionLibrary
class ULearningAgentsRewards
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgentsTraining.LearningAgentsTrainingEnvironment
// Kind: Class; super: LearningAgentsManagerListener
class ULearningAgentsTrainingEnvironment
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsSetup; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* Manager; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> VisualLoggerObjects; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(ULearningAgentsTrainingEnvironment, bIsSetup) == 40, "Offset mismatch for ULearningAgentsTrainingEnvironment::bIsSetup");
static_assert(offsetof(ULearningAgentsTrainingEnvironment, Manager) == 48, "Offset mismatch for ULearningAgentsTrainingEnvironment::Manager");
static_assert(offsetof(ULearningAgentsTrainingEnvironment, VisualLoggerObjects) == 56, "Offset mismatch for ULearningAgentsTrainingEnvironment::VisualLoggerObjects");
