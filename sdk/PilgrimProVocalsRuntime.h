/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimProVocalsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimProVocalsRuntime.PilgrimEvent_PilgrimGame_ProVocals_ActivateOverdriveDenied
// Kind: ScriptStruct; super: PilgrimEvent_PilgrimGame_ProVocals_Base
struct FPilgrimEvent_PilgrimGame_ProVocals_ActivateOverdriveDenied
{
public:
    void* ProVocalEvaluator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayerState; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_ActivateOverdriveDenied, ProVocalEvaluator) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_ActivateOverdriveDenied::ProVocalEvaluator");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_ActivateOverdriveDenied, OwningPlayerState) == 8, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_ActivateOverdriveDenied::OwningPlayerState");

// /Script/PilgrimProVocalsRuntime.PilgrimEvent_PilgrimGame_ProVocals_Base
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_ProVocals_Base
{
public:
    void* ProVocalEvaluator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayerState; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_Base, ProVocalEvaluator) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_Base::ProVocalEvaluator");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_Base, OwningPlayerState) == 8, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_Base::OwningPlayerState");

// /Script/PilgrimProVocalsRuntime.PilgrimEvent_PilgrimGame_ProVocals_PlayingSong
// Kind: ScriptStruct; super: PilgrimEvent_PilgrimGame_ProVocals_Base
struct FPilgrimEvent_PilgrimGame_ProVocals_PlayingSong
{
public:
    void* ProVocalEvaluator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayerState; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_PlayingSong, ProVocalEvaluator) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_PlayingSong::ProVocalEvaluator");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_PlayingSong, OwningPlayerState) == 8, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_PlayingSong::OwningPlayerState");

// /Script/PilgrimProVocalsRuntime.PilgrimEvent_PilgrimGame_ProVocals_SongPosUpdated
// Kind: ScriptStruct; super: PilgrimEvent_PilgrimGame_ProVocals_Base
struct FPilgrimEvent_PilgrimGame_ProVocals_SongPosUpdated
{
public:
    void* ProVocalEvaluator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayerState; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_SongPosUpdated, ProVocalEvaluator) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_SongPosUpdated::ProVocalEvaluator");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_SongPosUpdated, OwningPlayerState) == 8, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_SongPosUpdated::OwningPlayerState");

// /Script/PilgrimProVocalsRuntime.PilgrimEvent_PilgrimGame_ProVocals_SongStopped
// Kind: ScriptStruct; super: PilgrimEvent_PilgrimGame_ProVocals_Base
struct FPilgrimEvent_PilgrimGame_ProVocals_SongStopped
{
public:
    void* ProVocalEvaluator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayerState; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_SongStopped, ProVocalEvaluator) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_SongStopped::ProVocalEvaluator");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_SongStopped, OwningPlayerState) == 8, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_SongStopped::OwningPlayerState");

// /Script/PilgrimProVocalsRuntime.PilgrimEvent_PilgrimGame_ProVocals_TickSongTime
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_ProVocals_TickSongTime
{
public:
    std::uint8_t SongTime[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float DeltaTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_TickSongTime, SongTime) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_TickSongTime::SongTime");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_ProVocals_TickSongTime, DeltaTime) == 24, "Offset mismatch for FPilgrimEvent_PilgrimGame_ProVocals_TickSongTime::DeltaTime");

// /Script/PilgrimProVocalsRuntime.PilgrimEvent_Scoring_ProVocalSectionComplete
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_ProVocalSectionComplete
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SectionScore[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    std::int32_t CurrentMultiplier; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentNoteStreak; // 0x0044 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_ProVocalSectionComplete, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_Scoring_ProVocalSectionComplete::PlayerState");
static_assert(offsetof(FPilgrimEvent_Scoring_ProVocalSectionComplete, SectionScore) == 8, "Offset mismatch for FPilgrimEvent_Scoring_ProVocalSectionComplete::SectionScore");
static_assert(offsetof(FPilgrimEvent_Scoring_ProVocalSectionComplete, CurrentMultiplier) == 64, "Offset mismatch for FPilgrimEvent_Scoring_ProVocalSectionComplete::CurrentMultiplier");
static_assert(offsetof(FPilgrimEvent_Scoring_ProVocalSectionComplete, CurrentNoteStreak) == 68, "Offset mismatch for FPilgrimEvent_Scoring_ProVocalSectionComplete::CurrentNoteStreak");

// /Script/PilgrimProVocalsRuntime.PilgrimEvent_Scoring_ProVocalSectionCompletionChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_ProVocalSectionCompletionChanged
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float CompletionPercentage; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t SectionIndex; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_ProVocalSectionCompletionChanged, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_Scoring_ProVocalSectionCompletionChanged::PlayerState");
static_assert(offsetof(FPilgrimEvent_Scoring_ProVocalSectionCompletionChanged, CompletionPercentage) == 8, "Offset mismatch for FPilgrimEvent_Scoring_ProVocalSectionCompletionChanged::CompletionPercentage");
static_assert(offsetof(FPilgrimEvent_Scoring_ProVocalSectionCompletionChanged, SectionIndex) == 12, "Offset mismatch for FPilgrimEvent_Scoring_ProVocalSectionCompletionChanged::SectionIndex");

// /Script/PilgrimProVocalsRuntime.PilgrimProVocalSectionChunk
// Kind: ScriptStruct; super: none
struct FPilgrimProVocalSectionChunk
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimProVocalsRuntime.PilgrimProVocalSectionPerformance
// Kind: ScriptStruct; super: none
struct FPilgrimProVocalSectionPerformance
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimProVocalsRuntime.PilgrimProVocalSectionScore
// Kind: ScriptStruct; super: none
struct FPilgrimProVocalSectionScore
{
public:
    std::int32_t SectionIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    float SectionScore; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SectionPercentage; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AppliedMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PercentOverdrive; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t RatingTier; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t Rating[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimProVocalSectionScore, SectionIndex) == 0, "Offset mismatch for FPilgrimProVocalSectionScore::SectionIndex");
static_assert(offsetof(FPilgrimProVocalSectionScore, SectionScore) == 4, "Offset mismatch for FPilgrimProVocalSectionScore::SectionScore");
static_assert(offsetof(FPilgrimProVocalSectionScore, SectionPercentage) == 8, "Offset mismatch for FPilgrimProVocalSectionScore::SectionPercentage");
static_assert(offsetof(FPilgrimProVocalSectionScore, AppliedMultiplier) == 12, "Offset mismatch for FPilgrimProVocalSectionScore::AppliedMultiplier");
static_assert(offsetof(FPilgrimProVocalSectionScore, PercentOverdrive) == 16, "Offset mismatch for FPilgrimProVocalSectionScore::PercentOverdrive");
static_assert(offsetof(FPilgrimProVocalSectionScore, RatingTier) == 20, "Offset mismatch for FPilgrimProVocalSectionScore::RatingTier");
static_assert(offsetof(FPilgrimProVocalSectionScore, Rating) == 24, "Offset mismatch for FPilgrimProVocalSectionScore::Rating");

// /Script/PilgrimProVocalsRuntime.PilgrimProVocal_PitchPerformance
// Kind: ScriptStruct; super: none
struct FPilgrimProVocal_PitchPerformance
{
public:
    float UserOriginalMidiNote; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float UserAdjustedMidiNote; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SharpOrFlat; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsScored; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    float UserSongPosMs; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SlopAdjustedSongPosMs; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasTargetMidiNote; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTalkie; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInOverdrivePhrase; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x001B
    float TargetMidiNote; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MidiNoteDelta; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimProVocal_PitchPerformance, UserOriginalMidiNote) == 0, "Offset mismatch for FPilgrimProVocal_PitchPerformance::UserOriginalMidiNote");
static_assert(offsetof(FPilgrimProVocal_PitchPerformance, UserAdjustedMidiNote) == 4, "Offset mismatch for FPilgrimProVocal_PitchPerformance::UserAdjustedMidiNote");
static_assert(offsetof(FPilgrimProVocal_PitchPerformance, SharpOrFlat) == 8, "Offset mismatch for FPilgrimProVocal_PitchPerformance::SharpOrFlat");
static_assert(offsetof(FPilgrimProVocal_PitchPerformance, bIsScored) == 12, "Offset mismatch for FPilgrimProVocal_PitchPerformance::bIsScored");
static_assert(offsetof(FPilgrimProVocal_PitchPerformance, UserSongPosMs) == 16, "Offset mismatch for FPilgrimProVocal_PitchPerformance::UserSongPosMs");
static_assert(offsetof(FPilgrimProVocal_PitchPerformance, SlopAdjustedSongPosMs) == 20, "Offset mismatch for FPilgrimProVocal_PitchPerformance::SlopAdjustedSongPosMs");
static_assert(offsetof(FPilgrimProVocal_PitchPerformance, bHasTargetMidiNote) == 24, "Offset mismatch for FPilgrimProVocal_PitchPerformance::bHasTargetMidiNote");
static_assert(offsetof(FPilgrimProVocal_PitchPerformance, bIsTalkie) == 25, "Offset mismatch for FPilgrimProVocal_PitchPerformance::bIsTalkie");
static_assert(offsetof(FPilgrimProVocal_PitchPerformance, bIsInOverdrivePhrase) == 26, "Offset mismatch for FPilgrimProVocal_PitchPerformance::bIsInOverdrivePhrase");
static_assert(offsetof(FPilgrimProVocal_PitchPerformance, TargetMidiNote) == 28, "Offset mismatch for FPilgrimProVocal_PitchPerformance::TargetMidiNote");
static_assert(offsetof(FPilgrimProVocal_PitchPerformance, MidiNoteDelta) == 32, "Offset mismatch for FPilgrimProVocal_PitchPerformance::MidiNoteDelta");

// /Script/PilgrimProVocalsRuntime.PilgrimAudioCaptureComponent
// Kind: Class; super: SparksAudioCaptureComponent
class UPilgrimAudioCaptureComponent
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    void* WaitForEventRouterAction; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimAudioCaptureComponent, WaitForEventRouterAction) == 480, "Offset mismatch for UPilgrimAudioCaptureComponent::WaitForEventRouterAction");

// /Script/PilgrimProVocalsRuntime.PilgrimProVocalEvaluator
// Kind: Class; super: Object
class UPilgrimProVocalEvaluator
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> SectionPerformances; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x48]; // 0x0068
    void* ScoringModel; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* SongMetadata; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* SongData; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayerState; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* GameConfig; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* WeightCurve; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x34]; // 0x00E0
    std::int32_t ScoringWindowMilliseconds; // 0x0114 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimProVocalEvaluator, SectionPerformances) == 88, "Offset mismatch for UPilgrimProVocalEvaluator::SectionPerformances");
static_assert(offsetof(UPilgrimProVocalEvaluator, ScoringModel) == 176, "Offset mismatch for UPilgrimProVocalEvaluator::ScoringModel");
static_assert(offsetof(UPilgrimProVocalEvaluator, SongMetadata) == 184, "Offset mismatch for UPilgrimProVocalEvaluator::SongMetadata");
static_assert(offsetof(UPilgrimProVocalEvaluator, SongData) == 192, "Offset mismatch for UPilgrimProVocalEvaluator::SongData");
static_assert(offsetof(UPilgrimProVocalEvaluator, OwningPlayerState) == 200, "Offset mismatch for UPilgrimProVocalEvaluator::OwningPlayerState");
static_assert(offsetof(UPilgrimProVocalEvaluator, GameConfig) == 208, "Offset mismatch for UPilgrimProVocalEvaluator::GameConfig");
static_assert(offsetof(UPilgrimProVocalEvaluator, WeightCurve) == 216, "Offset mismatch for UPilgrimProVocalEvaluator::WeightCurve");
static_assert(offsetof(UPilgrimProVocalEvaluator, ScoringWindowMilliseconds) == 276, "Offset mismatch for UPilgrimProVocalEvaluator::ScoringWindowMilliseconds");

// /Script/PilgrimProVocalsRuntime.PilgrimProVocalScoringModel
// Kind: Class; super: Object
class UPilgrimProVocalScoringModel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameProgress[0xA0]; // 0x0028 (Size: 0xA0, Type: StructProperty)
    std::uint8_t ClientGameProgress[0xA0]; // 0x00C8 (Size: 0xA0, Type: StructProperty)
    void* OwningPlayerState; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0170
    void* SongData; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimGameConfig; // 0x0188 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimProVocalScoringModel, GameProgress) == 40, "Offset mismatch for UPilgrimProVocalScoringModel::GameProgress");
static_assert(offsetof(UPilgrimProVocalScoringModel, ClientGameProgress) == 200, "Offset mismatch for UPilgrimProVocalScoringModel::ClientGameProgress");
static_assert(offsetof(UPilgrimProVocalScoringModel, OwningPlayerState) == 360, "Offset mismatch for UPilgrimProVocalScoringModel::OwningPlayerState");
static_assert(offsetof(UPilgrimProVocalScoringModel, SongData) == 384, "Offset mismatch for UPilgrimProVocalScoringModel::SongData");
static_assert(offsetof(UPilgrimProVocalScoringModel, PilgrimGameConfig) == 392, "Offset mismatch for UPilgrimProVocalScoringModel::PilgrimGameConfig");

// /Script/PilgrimProVocalsRuntime.PilgrimProVocalsBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPilgrimProVocalsBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimProVocalsRuntime.PilgrimProVocalsInputConfig
// Kind: Class; super: FortGameFeatureActionSingletonAsset
class UPilgrimProVocalsInputConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* GameplayIMC; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* IA_DeployOverdrive; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputPriority; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimProVocalsInputConfig, GameplayIMC) == 40, "Offset mismatch for UPilgrimProVocalsInputConfig::GameplayIMC");
static_assert(offsetof(UPilgrimProVocalsInputConfig, IA_DeployOverdrive) == 48, "Offset mismatch for UPilgrimProVocalsInputConfig::IA_DeployOverdrive");
static_assert(offsetof(UPilgrimProVocalsInputConfig, InputPriority) == 56, "Offset mismatch for UPilgrimProVocalsInputConfig::InputPriority");

// /Script/PilgrimProVocalsRuntime.PilgrimProVocalsMBIComponent
// Kind: Class; super: ActorComponent
class UPilgrimProVocalsMBIComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* PilgrimSongPlayerComponent; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PlayerToEvaluatorMap; // 0x00D0 (Size: 0x10, Type: MapProperty)
    void* EventRouter; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* WaitForEventRouterAction; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimProVocalsMBIComponent, PilgrimSongPlayerComponent) == 200, "Offset mismatch for UPilgrimProVocalsMBIComponent::PilgrimSongPlayerComponent");
static_assert(offsetof(UPilgrimProVocalsMBIComponent, PlayerToEvaluatorMap) == 208, "Offset mismatch for UPilgrimProVocalsMBIComponent::PlayerToEvaluatorMap");
static_assert(offsetof(UPilgrimProVocalsMBIComponent, EventRouter) == 224, "Offset mismatch for UPilgrimProVocalsMBIComponent::EventRouter");
static_assert(offsetof(UPilgrimProVocalsMBIComponent, WaitForEventRouterAction) == 232, "Offset mismatch for UPilgrimProVocalsMBIComponent::WaitForEventRouterAction");

// /Script/PilgrimProVocalsRuntime.PilgrimProVocalsPlayerControllerComponent
// Kind: Class; super: FortControllerComponent
class UPilgrimProVocalsPlayerControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnPitchesReceived; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPitchesReceivedClient; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHeartbeatReceived; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOverdriveDeployReceived; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClientOverdriveInput; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* AudioCaptureComponent; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0120
    float ClientTimerIntervalSeconds; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxPitchArraySize; // 0x012C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimProVocalsPlayerControllerComponent, OnPitchesReceived) == 200, "Offset mismatch for UPilgrimProVocalsPlayerControllerComponent::OnPitchesReceived");
static_assert(offsetof(UPilgrimProVocalsPlayerControllerComponent, OnPitchesReceivedClient) == 216, "Offset mismatch for UPilgrimProVocalsPlayerControllerComponent::OnPitchesReceivedClient");
static_assert(offsetof(UPilgrimProVocalsPlayerControllerComponent, OnHeartbeatReceived) == 232, "Offset mismatch for UPilgrimProVocalsPlayerControllerComponent::OnHeartbeatReceived");
static_assert(offsetof(UPilgrimProVocalsPlayerControllerComponent, OnOverdriveDeployReceived) == 248, "Offset mismatch for UPilgrimProVocalsPlayerControllerComponent::OnOverdriveDeployReceived");
static_assert(offsetof(UPilgrimProVocalsPlayerControllerComponent, OnClientOverdriveInput) == 264, "Offset mismatch for UPilgrimProVocalsPlayerControllerComponent::OnClientOverdriveInput");
static_assert(offsetof(UPilgrimProVocalsPlayerControllerComponent, AudioCaptureComponent) == 280, "Offset mismatch for UPilgrimProVocalsPlayerControllerComponent::AudioCaptureComponent");
static_assert(offsetof(UPilgrimProVocalsPlayerControllerComponent, ClientTimerIntervalSeconds) == 296, "Offset mismatch for UPilgrimProVocalsPlayerControllerComponent::ClientTimerIntervalSeconds");
static_assert(offsetof(UPilgrimProVocalsPlayerControllerComponent, MaxPitchArraySize) == 300, "Offset mismatch for UPilgrimProVocalsPlayerControllerComponent::MaxPitchArraySize");
