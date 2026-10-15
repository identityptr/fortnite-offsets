/**
 * decamp dumper generated SDK
 * Package: /Script/ElevenLabs
 */
#pragma once
#include "Basic.h"

// /Script/ElevenLabs.ElevenLabsAlignment
// Kind: ScriptStruct; super: none
struct FElevenLabsAlignment
{
public:
    TArray<void*> Characters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CharacterStartTimesSeconds; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CharacterEndTimesSeconds; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FElevenLabsAlignment, Characters) == 0, "Offset mismatch for FElevenLabsAlignment::Characters");
static_assert(offsetof(FElevenLabsAlignment, CharacterStartTimesSeconds) == 16, "Offset mismatch for FElevenLabsAlignment::CharacterStartTimesSeconds");
static_assert(offsetof(FElevenLabsAlignment, CharacterEndTimesSeconds) == 32, "Offset mismatch for FElevenLabsAlignment::CharacterEndTimesSeconds");

// /Script/ElevenLabs.ElevenLabsAudioProgress
// Kind: ScriptStruct; super: none
struct FElevenLabsAudioProgress
{
public:
    std::uint8_t RequestID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> AudioData; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FElevenLabsAudioProgress, RequestID) == 0, "Offset mismatch for FElevenLabsAudioProgress::RequestID");
static_assert(offsetof(FElevenLabsAudioProgress, AudioData) == 16, "Offset mismatch for FElevenLabsAudioProgress::AudioData");

// /Script/ElevenLabs.ElevenLabsAudioResult
// Kind: ScriptStruct; super: none
struct FElevenLabsAudioResult
{
public:
    std::uint8_t Result; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t RequestID[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    TArray<void*> AudioData; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FElevenLabsAudioResult, Result) == 0, "Offset mismatch for FElevenLabsAudioResult::Result");
static_assert(offsetof(FElevenLabsAudioResult, RequestID) == 4, "Offset mismatch for FElevenLabsAudioResult::RequestID");
static_assert(offsetof(FElevenLabsAudioResult, AudioData) == 24, "Offset mismatch for FElevenLabsAudioResult::AudioData");

// /Script/ElevenLabs.ElevenLabsDialogueLine
// Kind: ScriptStruct; super: none
struct FElevenLabsDialogueLine
{
public:
    std::uint8_t Voice[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    FString DialogueText; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FElevenLabsDialogueLine, Voice) == 0, "Offset mismatch for FElevenLabsDialogueLine::Voice");
static_assert(offsetof(FElevenLabsDialogueLine, DialogueText) == 56, "Offset mismatch for FElevenLabsDialogueLine::DialogueText");

// /Script/ElevenLabs.ElevenLabsDialogueRequestParams
// Kind: ScriptStruct; super: none
struct FElevenLabsDialogueRequestParams
{
public:
    std::uint8_t RequestID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Model; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OutputFormat; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0012
    TArray<void*> Dialogue; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AnalyticsEventGroupID[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FElevenLabsDialogueRequestParams, RequestID) == 0, "Offset mismatch for FElevenLabsDialogueRequestParams::RequestID");
static_assert(offsetof(FElevenLabsDialogueRequestParams, Model) == 16, "Offset mismatch for FElevenLabsDialogueRequestParams::Model");
static_assert(offsetof(FElevenLabsDialogueRequestParams, OutputFormat) == 17, "Offset mismatch for FElevenLabsDialogueRequestParams::OutputFormat");
static_assert(offsetof(FElevenLabsDialogueRequestParams, Dialogue) == 24, "Offset mismatch for FElevenLabsDialogueRequestParams::Dialogue");
static_assert(offsetof(FElevenLabsDialogueRequestParams, AnalyticsEventGroupID) == 40, "Offset mismatch for FElevenLabsDialogueRequestParams::AnalyticsEventGroupID");

// /Script/ElevenLabs.ElevenLabsDialogueVoiceSegment
// Kind: ScriptStruct; super: none
struct FElevenLabsDialogueVoiceSegment
{
public:
    std::uint8_t Voice[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    double StartTime; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double EndTime; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    std::int32_t DialogueInputIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FElevenLabsDialogueVoiceSegment, Voice) == 0, "Offset mismatch for FElevenLabsDialogueVoiceSegment::Voice");
static_assert(offsetof(FElevenLabsDialogueVoiceSegment, StartTime) == 56, "Offset mismatch for FElevenLabsDialogueVoiceSegment::StartTime");
static_assert(offsetof(FElevenLabsDialogueVoiceSegment, EndTime) == 64, "Offset mismatch for FElevenLabsDialogueVoiceSegment::EndTime");
static_assert(offsetof(FElevenLabsDialogueVoiceSegment, DialogueInputIndex) == 72, "Offset mismatch for FElevenLabsDialogueVoiceSegment::DialogueInputIndex");

// /Script/ElevenLabs.ElevenLabsMusicCompositionPlan
// Kind: ScriptStruct; super: none
struct FElevenLabsMusicCompositionPlan
{
public:
    TArray<void*> PositiveStyles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NegativeStyles; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Sections; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FElevenLabsMusicCompositionPlan, PositiveStyles) == 0, "Offset mismatch for FElevenLabsMusicCompositionPlan::PositiveStyles");
static_assert(offsetof(FElevenLabsMusicCompositionPlan, NegativeStyles) == 16, "Offset mismatch for FElevenLabsMusicCompositionPlan::NegativeStyles");
static_assert(offsetof(FElevenLabsMusicCompositionPlan, Sections) == 32, "Offset mismatch for FElevenLabsMusicCompositionPlan::Sections");

// /Script/ElevenLabs.ElevenLabsMusicCompositionSection
// Kind: ScriptStruct; super: none
struct FElevenLabsMusicCompositionSection
{
public:
    FString SectionName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> PositiveStyles; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NegativeStyles; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::int32_t LengthInSeconds; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0034
    TArray<void*> Lyrics; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FElevenLabsMusicCompositionSection, SectionName) == 0, "Offset mismatch for FElevenLabsMusicCompositionSection::SectionName");
static_assert(offsetof(FElevenLabsMusicCompositionSection, PositiveStyles) == 16, "Offset mismatch for FElevenLabsMusicCompositionSection::PositiveStyles");
static_assert(offsetof(FElevenLabsMusicCompositionSection, NegativeStyles) == 32, "Offset mismatch for FElevenLabsMusicCompositionSection::NegativeStyles");
static_assert(offsetof(FElevenLabsMusicCompositionSection, LengthInSeconds) == 48, "Offset mismatch for FElevenLabsMusicCompositionSection::LengthInSeconds");
static_assert(offsetof(FElevenLabsMusicCompositionSection, Lyrics) == 56, "Offset mismatch for FElevenLabsMusicCompositionSection::Lyrics");

// /Script/ElevenLabs.ElevenLabsMusicRequestParams
// Kind: ScriptStruct; super: none
struct FElevenLabsMusicRequestParams
{
public:
    std::uint8_t RequestID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Model; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OutputFormat; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0012
    FString Prompt; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t CompositionPlan[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::int32_t LengthInSeconds; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceInstrumental; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x005D
    std::uint8_t AnalyticsEventGroupID[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FElevenLabsMusicRequestParams, RequestID) == 0, "Offset mismatch for FElevenLabsMusicRequestParams::RequestID");
static_assert(offsetof(FElevenLabsMusicRequestParams, Model) == 16, "Offset mismatch for FElevenLabsMusicRequestParams::Model");
static_assert(offsetof(FElevenLabsMusicRequestParams, OutputFormat) == 17, "Offset mismatch for FElevenLabsMusicRequestParams::OutputFormat");
static_assert(offsetof(FElevenLabsMusicRequestParams, Prompt) == 24, "Offset mismatch for FElevenLabsMusicRequestParams::Prompt");
static_assert(offsetof(FElevenLabsMusicRequestParams, CompositionPlan) == 40, "Offset mismatch for FElevenLabsMusicRequestParams::CompositionPlan");
static_assert(offsetof(FElevenLabsMusicRequestParams, LengthInSeconds) == 88, "Offset mismatch for FElevenLabsMusicRequestParams::LengthInSeconds");
static_assert(offsetof(FElevenLabsMusicRequestParams, bForceInstrumental) == 92, "Offset mismatch for FElevenLabsMusicRequestParams::bForceInstrumental");
static_assert(offsetof(FElevenLabsMusicRequestParams, AnalyticsEventGroupID) == 96, "Offset mismatch for FElevenLabsMusicRequestParams::AnalyticsEventGroupID");

// /Script/ElevenLabs.ElevenLabsRequestHandle
// Kind: ScriptStruct; super: none
struct FElevenLabsRequestHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ElevenLabs.ElevenLabsSoundEffectRequestParams
// Kind: ScriptStruct; super: none
struct FElevenLabsSoundEffectRequestParams
{
public:
    std::uint8_t RequestID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutputFormat; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Model; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0012
    FString Prompt; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bLooping; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    double LengthInSeconds; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double PromptInfluence; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t AnalyticsEventGroupID[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FElevenLabsSoundEffectRequestParams, RequestID) == 0, "Offset mismatch for FElevenLabsSoundEffectRequestParams::RequestID");
static_assert(offsetof(FElevenLabsSoundEffectRequestParams, OutputFormat) == 16, "Offset mismatch for FElevenLabsSoundEffectRequestParams::OutputFormat");
static_assert(offsetof(FElevenLabsSoundEffectRequestParams, Model) == 17, "Offset mismatch for FElevenLabsSoundEffectRequestParams::Model");
static_assert(offsetof(FElevenLabsSoundEffectRequestParams, Prompt) == 24, "Offset mismatch for FElevenLabsSoundEffectRequestParams::Prompt");
static_assert(offsetof(FElevenLabsSoundEffectRequestParams, bLooping) == 40, "Offset mismatch for FElevenLabsSoundEffectRequestParams::bLooping");
static_assert(offsetof(FElevenLabsSoundEffectRequestParams, LengthInSeconds) == 48, "Offset mismatch for FElevenLabsSoundEffectRequestParams::LengthInSeconds");
static_assert(offsetof(FElevenLabsSoundEffectRequestParams, PromptInfluence) == 56, "Offset mismatch for FElevenLabsSoundEffectRequestParams::PromptInfluence");
static_assert(offsetof(FElevenLabsSoundEffectRequestParams, AnalyticsEventGroupID) == 64, "Offset mismatch for FElevenLabsSoundEffectRequestParams::AnalyticsEventGroupID");

// /Script/ElevenLabs.ElevenLabsSpeechToTextRequestParams
// Kind: ScriptStruct; super: none
struct FElevenLabsSpeechToTextRequestParams
{
public:
    std::uint8_t RequestID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Model; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FElevenLabsSpeechToTextRequestParams, RequestID) == 0, "Offset mismatch for FElevenLabsSpeechToTextRequestParams::RequestID");
static_assert(offsetof(FElevenLabsSpeechToTextRequestParams, Model) == 16, "Offset mismatch for FElevenLabsSpeechToTextRequestParams::Model");

// /Script/ElevenLabs.ElevenLabsStreamGenerationConfig
// Kind: ScriptStruct; super: none
struct FElevenLabsStreamGenerationConfig
{
public:
    std::uint8_t bAutoMode; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> ChunkLengthSchedule; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FElevenLabsStreamGenerationConfig, bAutoMode) == 0, "Offset mismatch for FElevenLabsStreamGenerationConfig::bAutoMode");
static_assert(offsetof(FElevenLabsStreamGenerationConfig, ChunkLengthSchedule) == 8, "Offset mismatch for FElevenLabsStreamGenerationConfig::ChunkLengthSchedule");

// /Script/ElevenLabs.ElevenLabsTextToDialogueStreamHandle
// Kind: ScriptStruct; super: none
struct FElevenLabsTextToDialogueStreamHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ElevenLabs.ElevenLabsTextToDialogueStreamParams
// Kind: ScriptStruct; super: none
struct FElevenLabsTextToDialogueStreamParams
{
public:
    std::uint8_t RequestID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Model; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OutputFormat; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0012
    TArray<void*> Voices; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    FString LanguageCode; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bApplyTextNormalization; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSyncAlignment; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003A
    std::int32_t Seed; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t AnalyticsEventGroupID[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FElevenLabsTextToDialogueStreamParams, RequestID) == 0, "Offset mismatch for FElevenLabsTextToDialogueStreamParams::RequestID");
static_assert(offsetof(FElevenLabsTextToDialogueStreamParams, Model) == 16, "Offset mismatch for FElevenLabsTextToDialogueStreamParams::Model");
static_assert(offsetof(FElevenLabsTextToDialogueStreamParams, OutputFormat) == 17, "Offset mismatch for FElevenLabsTextToDialogueStreamParams::OutputFormat");
static_assert(offsetof(FElevenLabsTextToDialogueStreamParams, Voices) == 24, "Offset mismatch for FElevenLabsTextToDialogueStreamParams::Voices");
static_assert(offsetof(FElevenLabsTextToDialogueStreamParams, LanguageCode) == 40, "Offset mismatch for FElevenLabsTextToDialogueStreamParams::LanguageCode");
static_assert(offsetof(FElevenLabsTextToDialogueStreamParams, bApplyTextNormalization) == 56, "Offset mismatch for FElevenLabsTextToDialogueStreamParams::bApplyTextNormalization");
static_assert(offsetof(FElevenLabsTextToDialogueStreamParams, bSyncAlignment) == 57, "Offset mismatch for FElevenLabsTextToDialogueStreamParams::bSyncAlignment");
static_assert(offsetof(FElevenLabsTextToDialogueStreamParams, Seed) == 60, "Offset mismatch for FElevenLabsTextToDialogueStreamParams::Seed");
static_assert(offsetof(FElevenLabsTextToDialogueStreamParams, AnalyticsEventGroupID) == 64, "Offset mismatch for FElevenLabsTextToDialogueStreamParams::AnalyticsEventGroupID");

// /Script/ElevenLabs.ElevenLabsTextToSpeechRequestParams
// Kind: ScriptStruct; super: none
struct FElevenLabsTextToSpeechRequestParams
{
public:
    std::uint8_t RequestID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Model; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OutputFormat; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0012
    std::uint8_t Voice[0x38]; // 0x0018 (Size: 0x38, Type: StructProperty)
    std::uint8_t AnalyticsEventGroupID[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FElevenLabsTextToSpeechRequestParams, RequestID) == 0, "Offset mismatch for FElevenLabsTextToSpeechRequestParams::RequestID");
static_assert(offsetof(FElevenLabsTextToSpeechRequestParams, Model) == 16, "Offset mismatch for FElevenLabsTextToSpeechRequestParams::Model");
static_assert(offsetof(FElevenLabsTextToSpeechRequestParams, OutputFormat) == 17, "Offset mismatch for FElevenLabsTextToSpeechRequestParams::OutputFormat");
static_assert(offsetof(FElevenLabsTextToSpeechRequestParams, Voice) == 24, "Offset mismatch for FElevenLabsTextToSpeechRequestParams::Voice");
static_assert(offsetof(FElevenLabsTextToSpeechRequestParams, AnalyticsEventGroupID) == 80, "Offset mismatch for FElevenLabsTextToSpeechRequestParams::AnalyticsEventGroupID");

// /Script/ElevenLabs.ElevenLabsTextToSpeechStreamHandle
// Kind: ScriptStruct; super: none
struct FElevenLabsTextToSpeechStreamHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ElevenLabs.ElevenLabsTextToSpeechStreamParams
// Kind: ScriptStruct; super: ElevenLabsTextToSpeechRequestParams
struct FElevenLabsTextToSpeechStreamParams
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t GenerationConfig[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FElevenLabsTextToSpeechStreamParams, GenerationConfig) == 96, "Offset mismatch for FElevenLabsTextToSpeechStreamParams::GenerationConfig");

// /Script/ElevenLabs.ElevenLabsTimestampedAudioProgress
// Kind: ScriptStruct; super: none
struct FElevenLabsTimestampedAudioProgress
{
public:
    std::uint8_t RequestID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> AudioData; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Alignment[0x30]; // 0x0020 (Size: 0x30, Type: StructProperty)
    std::uint8_t NormalizedAlignment[0x30]; // 0x0050 (Size: 0x30, Type: StructProperty)
    TArray<void*> VoiceSegments; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FElevenLabsTimestampedAudioProgress, RequestID) == 0, "Offset mismatch for FElevenLabsTimestampedAudioProgress::RequestID");
static_assert(offsetof(FElevenLabsTimestampedAudioProgress, AudioData) == 16, "Offset mismatch for FElevenLabsTimestampedAudioProgress::AudioData");
static_assert(offsetof(FElevenLabsTimestampedAudioProgress, Alignment) == 32, "Offset mismatch for FElevenLabsTimestampedAudioProgress::Alignment");
static_assert(offsetof(FElevenLabsTimestampedAudioProgress, NormalizedAlignment) == 80, "Offset mismatch for FElevenLabsTimestampedAudioProgress::NormalizedAlignment");
static_assert(offsetof(FElevenLabsTimestampedAudioProgress, VoiceSegments) == 128, "Offset mismatch for FElevenLabsTimestampedAudioProgress::VoiceSegments");

// /Script/ElevenLabs.ElevenLabsTranscriptResult
// Kind: ScriptStruct; super: none
struct FElevenLabsTranscriptResult
{
public:
    std::uint8_t Result; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t RequestID[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    FString LanguageCode; // 0x0018 (Size: 0x10, Type: StrProperty)
    double LanguageProbability; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    FString Text; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FElevenLabsTranscriptResult, Result) == 0, "Offset mismatch for FElevenLabsTranscriptResult::Result");
static_assert(offsetof(FElevenLabsTranscriptResult, RequestID) == 4, "Offset mismatch for FElevenLabsTranscriptResult::RequestID");
static_assert(offsetof(FElevenLabsTranscriptResult, LanguageCode) == 24, "Offset mismatch for FElevenLabsTranscriptResult::LanguageCode");
static_assert(offsetof(FElevenLabsTranscriptResult, LanguageProbability) == 40, "Offset mismatch for FElevenLabsTranscriptResult::LanguageProbability");
static_assert(offsetof(FElevenLabsTranscriptResult, Text) == 48, "Offset mismatch for FElevenLabsTranscriptResult::Text");

// /Script/ElevenLabs.ElevenLabsVoice
// Kind: ScriptStruct; super: TableRowBase
struct FElevenLabsVoice
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString VoiceID; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t VoiceSettings[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float PlaybackVolumeMultiplier; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float PlaybackPitch; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FElevenLabsVoice, VoiceID) == 8, "Offset mismatch for FElevenLabsVoice::VoiceID");
static_assert(offsetof(FElevenLabsVoice, VoiceSettings) == 24, "Offset mismatch for FElevenLabsVoice::VoiceSettings");
static_assert(offsetof(FElevenLabsVoice, PlaybackVolumeMultiplier) == 48, "Offset mismatch for FElevenLabsVoice::PlaybackVolumeMultiplier");
static_assert(offsetof(FElevenLabsVoice, PlaybackPitch) == 52, "Offset mismatch for FElevenLabsVoice::PlaybackPitch");

// /Script/ElevenLabs.ElevenLabsVoiceSettings
// Kind: ScriptStruct; super: none
struct FElevenLabsVoiceSettings
{
public:
    float Stability; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t V3Stability; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float SimilarityBoost; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Style; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Speed; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSpearkerBoost; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FElevenLabsVoiceSettings, Stability) == 0, "Offset mismatch for FElevenLabsVoiceSettings::Stability");
static_assert(offsetof(FElevenLabsVoiceSettings, V3Stability) == 4, "Offset mismatch for FElevenLabsVoiceSettings::V3Stability");
static_assert(offsetof(FElevenLabsVoiceSettings, SimilarityBoost) == 8, "Offset mismatch for FElevenLabsVoiceSettings::SimilarityBoost");
static_assert(offsetof(FElevenLabsVoiceSettings, Style) == 12, "Offset mismatch for FElevenLabsVoiceSettings::Style");
static_assert(offsetof(FElevenLabsVoiceSettings, Speed) == 16, "Offset mismatch for FElevenLabsVoiceSettings::Speed");
static_assert(offsetof(FElevenLabsVoiceSettings, bUseSpearkerBoost) == 20, "Offset mismatch for FElevenLabsVoiceSettings::bUseSpearkerBoost");

// /Script/ElevenLabs.ElevenLabsFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UElevenLabsFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ElevenLabs.ElevenLabsSettings
// Kind: Class; super: Object
class UElevenLabsSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t VoiceRegistryType[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    FString TextToSpeechEndpoint; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString MusicEndpoint; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString DialogueEndpoint; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString SoundEffectEndpoint; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString SpeechToTextEndpoint; // 0x0070 (Size: 0x10, Type: StrProperty)
    FString Location; // 0x0080 (Size: 0x10, Type: StrProperty)
    float MusicRequestTimeoutSeconds; // 0x0090 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UElevenLabsSettings, VoiceRegistryType) == 40, "Offset mismatch for UElevenLabsSettings::VoiceRegistryType");
static_assert(offsetof(UElevenLabsSettings, TextToSpeechEndpoint) == 48, "Offset mismatch for UElevenLabsSettings::TextToSpeechEndpoint");
static_assert(offsetof(UElevenLabsSettings, MusicEndpoint) == 64, "Offset mismatch for UElevenLabsSettings::MusicEndpoint");
static_assert(offsetof(UElevenLabsSettings, DialogueEndpoint) == 80, "Offset mismatch for UElevenLabsSettings::DialogueEndpoint");
static_assert(offsetof(UElevenLabsSettings, SoundEffectEndpoint) == 96, "Offset mismatch for UElevenLabsSettings::SoundEffectEndpoint");
static_assert(offsetof(UElevenLabsSettings, SpeechToTextEndpoint) == 112, "Offset mismatch for UElevenLabsSettings::SpeechToTextEndpoint");
static_assert(offsetof(UElevenLabsSettings, Location) == 128, "Offset mismatch for UElevenLabsSettings::Location");
static_assert(offsetof(UElevenLabsSettings, MusicRequestTimeoutSeconds) == 144, "Offset mismatch for UElevenLabsSettings::MusicRequestTimeoutSeconds");

// /Script/ElevenLabs.ElevenLabsSubsystem
// Kind: Class; super: EngineSubsystem
class UElevenLabsSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString AnalyticsEventNamespace; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UElevenLabsSubsystem, AnalyticsEventNamespace) == 56, "Offset mismatch for UElevenLabsSubsystem::AnalyticsEventNamespace");
