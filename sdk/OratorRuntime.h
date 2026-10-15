/**
 * decamp dumper generated SDK
 * Package: /Script/OratorRuntime
 */
#pragma once
#include "Basic.h"

// /Script/OratorRuntime.OratorAudioTranscription
// Kind: ScriptStruct; super: none
struct FOratorAudioTranscription
{
public:
    FString TranscribedDialogue; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOratorAudioTranscription, TranscribedDialogue) == 0, "Offset mismatch for FOratorAudioTranscription::TranscribedDialogue");

// /Script/OratorRuntime.OratorDialogCorrectionSettings
// Kind: ScriptStruct; super: none
struct FOratorDialogCorrectionSettings
{
public:
    void* EnforcedWordReplacements; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x30]; // 0x0008
    TMap<void*, void*> PronunciationCorrections; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bCorrectPunctuation; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplaceElipsesWithComma; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    FString PunctuationCleanupString; // 0x0050 (Size: 0x10, Type: StrProperty)
    std::uint8_t bRemoveNonStandardCharacters; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0061
    FString NonStandardCharactersAllowList; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString StandardCharactersDenyList; // 0x0078 (Size: 0x10, Type: StrProperty)
    std::uint8_t StandardCharactersAsciiRangeStart; // 0x0088 (Size: 0x1, Type: ByteProperty)
    std::uint8_t StandardCharactersAsciiRangeEnd; // 0x0089 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FOratorDialogCorrectionSettings, EnforcedWordReplacements) == 0, "Offset mismatch for FOratorDialogCorrectionSettings::EnforcedWordReplacements");
static_assert(offsetof(FOratorDialogCorrectionSettings, PronunciationCorrections) == 56, "Offset mismatch for FOratorDialogCorrectionSettings::PronunciationCorrections");
static_assert(offsetof(FOratorDialogCorrectionSettings, bCorrectPunctuation) == 72, "Offset mismatch for FOratorDialogCorrectionSettings::bCorrectPunctuation");
static_assert(offsetof(FOratorDialogCorrectionSettings, bReplaceElipsesWithComma) == 73, "Offset mismatch for FOratorDialogCorrectionSettings::bReplaceElipsesWithComma");
static_assert(offsetof(FOratorDialogCorrectionSettings, PunctuationCleanupString) == 80, "Offset mismatch for FOratorDialogCorrectionSettings::PunctuationCleanupString");
static_assert(offsetof(FOratorDialogCorrectionSettings, bRemoveNonStandardCharacters) == 96, "Offset mismatch for FOratorDialogCorrectionSettings::bRemoveNonStandardCharacters");
static_assert(offsetof(FOratorDialogCorrectionSettings, NonStandardCharactersAllowList) == 104, "Offset mismatch for FOratorDialogCorrectionSettings::NonStandardCharactersAllowList");
static_assert(offsetof(FOratorDialogCorrectionSettings, StandardCharactersDenyList) == 120, "Offset mismatch for FOratorDialogCorrectionSettings::StandardCharactersDenyList");
static_assert(offsetof(FOratorDialogCorrectionSettings, StandardCharactersAsciiRangeStart) == 136, "Offset mismatch for FOratorDialogCorrectionSettings::StandardCharactersAsciiRangeStart");
static_assert(offsetof(FOratorDialogCorrectionSettings, StandardCharactersAsciiRangeEnd) == 137, "Offset mismatch for FOratorDialogCorrectionSettings::StandardCharactersAsciiRangeEnd");

// /Script/OratorRuntime.OratorDialogueEntry
// Kind: ScriptStruct; super: none
struct FOratorDialogueEntry
{
public:
    FName Participant; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString DialogueLine; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOratorDialogueEntry, Participant) == 0, "Offset mismatch for FOratorDialogueEntry::Participant");
static_assert(offsetof(FOratorDialogueEntry, DialogueLine) == 8, "Offset mismatch for FOratorDialogueEntry::DialogueLine");

// /Script/OratorRuntime.OratorDialogueLine
// Kind: ScriptStruct; super: none
struct FOratorDialogueLine
{
public:
    FString Dialogue; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Emotion; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Gesture; // 0x0011 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FOratorDialogueLine, Dialogue) == 0, "Offset mismatch for FOratorDialogueLine::Dialogue");
static_assert(offsetof(FOratorDialogueLine, Emotion) == 16, "Offset mismatch for FOratorDialogueLine::Emotion");
static_assert(offsetof(FOratorDialogueLine, Gesture) == 17, "Offset mismatch for FOratorDialogueLine::Gesture");

// /Script/OratorRuntime.OratorReplayAudioSink
// Kind: ScriptStruct; super: none
struct FOratorReplayAudioSink
{
public:
    void* AudioComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SoundStream; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FOratorReplayAudioSink, AudioComponent) == 0, "Offset mismatch for FOratorReplayAudioSink::AudioComponent");
static_assert(offsetof(FOratorReplayAudioSink, SoundStream) == 8, "Offset mismatch for FOratorReplayAudioSink::SoundStream");

// /Script/OratorRuntime.OratorWordReplacement
// Kind: ScriptStruct; super: TableRowBase
struct FOratorWordReplacement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bCaseSensitive; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    FString WordToReplace; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Replacement; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOratorWordReplacement, bCaseSensitive) == 8, "Offset mismatch for FOratorWordReplacement::bCaseSensitive");
static_assert(offsetof(FOratorWordReplacement, WordToReplace) == 16, "Offset mismatch for FOratorWordReplacement::WordToReplace");
static_assert(offsetof(FOratorWordReplacement, Replacement) == 32, "Offset mismatch for FOratorWordReplacement::Replacement");

// /Script/OratorRuntime.AsyncAction_OratorSayThis
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_OratorSayThis
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnGenerated; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPerformed; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCleared; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* SpeechComponent; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    double StartTime; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t UtteranceGuid[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    TArray<void*> TargetPlayers; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAsyncAction_OratorSayThis, OnGenerated) == 48, "Offset mismatch for UAsyncAction_OratorSayThis::OnGenerated");
static_assert(offsetof(UAsyncAction_OratorSayThis, OnPerformed) == 64, "Offset mismatch for UAsyncAction_OratorSayThis::OnPerformed");
static_assert(offsetof(UAsyncAction_OratorSayThis, OnCleared) == 80, "Offset mismatch for UAsyncAction_OratorSayThis::OnCleared");
static_assert(offsetof(UAsyncAction_OratorSayThis, OnFailure) == 96, "Offset mismatch for UAsyncAction_OratorSayThis::OnFailure");
static_assert(offsetof(UAsyncAction_OratorSayThis, SpeechComponent) == 112, "Offset mismatch for UAsyncAction_OratorSayThis::SpeechComponent");
static_assert(offsetof(UAsyncAction_OratorSayThis, StartTime) == 120, "Offset mismatch for UAsyncAction_OratorSayThis::StartTime");
static_assert(offsetof(UAsyncAction_OratorSayThis, UtteranceGuid) == 128, "Offset mismatch for UAsyncAction_OratorSayThis::UtteranceGuid");
static_assert(offsetof(UAsyncAction_OratorSayThis, TargetPlayers) == 144, "Offset mismatch for UAsyncAction_OratorSayThis::TargetPlayers");

// /Script/OratorRuntime.OpusSoundStream
// Kind: Class; super: SoundWave
class UOpusSoundStream
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::int32_t CompressionQuality; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::int32_t StreamingPriority; // 0x013C (Size: 0x4, Type: IntProperty)
    std::uint8_t SampleRateQuality; // 0x0140 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0141
    std::uint8_t SoundGroup; // 0x0142 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bLooping; // 0x0143 (Size: 0x1, Type: BoolProperty)
    // 0x0143 BoolProperty bSeekableStreaming (shared storage)
    // 0x0143 BoolProperty bStreaming (shared storage)
    // 0x0143 BoolProperty bUseBinkAudio (shared storage)
    std::uint8_t SoundAssetCompressionType; // 0x0144 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x13]; // 0x0145
    std::uint8_t ModulationSettings[0x68]; // 0x0158 (Size: 0x68, Type: StructProperty)
    TArray<void*> FrequenciesToAnalyze; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CookedSpectralTimeData; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CookedEnvelopeTimeData; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x1C]; // 0x01F0
    std::uint8_t bManualWordWrap; // 0x020C (Size: 0x1, Type: BoolProperty)
    // 0x020C BoolProperty bMature (shared storage)
    // 0x020C BoolProperty bSingleLine (shared storage)
    std::uint8_t bIsAmbisonics; // 0x020D (Size: 0x1, Type: BoolProperty)
    std::uint8_t LoadingBehavior; // 0x020E (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x1]; // 0x020F
    FString SpokenText; // 0x0210 (Size: 0x10, Type: StrProperty)
    float SubtitlePriority; // 0x0220 (Size: 0x4, Type: FloatProperty)
    float Volume; // 0x0224 (Size: 0x4, Type: FloatProperty)
    float Pitch; // 0x0228 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumChannels; // 0x022C (Size: 0x4, Type: IntProperty)
    std::int32_t SampleRate; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0xC]; // 0x0234
    TArray<void*> Subtitles; // 0x0240 (Size: 0x10, Type: ArrayProperty)
    void* Curves; // 0x0250 (Size: 0x8, Type: ObjectProperty)
    void* InternalCurves; // 0x0258 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOpusSoundStream, CompressionQuality) == 312, "Offset mismatch for UOpusSoundStream::CompressionQuality");
static_assert(offsetof(UOpusSoundStream, StreamingPriority) == 316, "Offset mismatch for UOpusSoundStream::StreamingPriority");
static_assert(offsetof(UOpusSoundStream, SampleRateQuality) == 320, "Offset mismatch for UOpusSoundStream::SampleRateQuality");
static_assert(offsetof(UOpusSoundStream, SoundGroup) == 322, "Offset mismatch for UOpusSoundStream::SoundGroup");
static_assert(offsetof(UOpusSoundStream, bLooping) == 323, "Offset mismatch for UOpusSoundStream::bLooping");
static_assert(offsetof(UOpusSoundStream, SoundAssetCompressionType) == 324, "Offset mismatch for UOpusSoundStream::SoundAssetCompressionType");
static_assert(offsetof(UOpusSoundStream, ModulationSettings) == 344, "Offset mismatch for UOpusSoundStream::ModulationSettings");
static_assert(offsetof(UOpusSoundStream, FrequenciesToAnalyze) == 448, "Offset mismatch for UOpusSoundStream::FrequenciesToAnalyze");
static_assert(offsetof(UOpusSoundStream, CookedSpectralTimeData) == 464, "Offset mismatch for UOpusSoundStream::CookedSpectralTimeData");
static_assert(offsetof(UOpusSoundStream, CookedEnvelopeTimeData) == 480, "Offset mismatch for UOpusSoundStream::CookedEnvelopeTimeData");
static_assert(offsetof(UOpusSoundStream, bManualWordWrap) == 524, "Offset mismatch for UOpusSoundStream::bManualWordWrap");
static_assert(offsetof(UOpusSoundStream, bIsAmbisonics) == 525, "Offset mismatch for UOpusSoundStream::bIsAmbisonics");
static_assert(offsetof(UOpusSoundStream, LoadingBehavior) == 526, "Offset mismatch for UOpusSoundStream::LoadingBehavior");
static_assert(offsetof(UOpusSoundStream, SpokenText) == 528, "Offset mismatch for UOpusSoundStream::SpokenText");
static_assert(offsetof(UOpusSoundStream, SubtitlePriority) == 544, "Offset mismatch for UOpusSoundStream::SubtitlePriority");
static_assert(offsetof(UOpusSoundStream, Volume) == 548, "Offset mismatch for UOpusSoundStream::Volume");
static_assert(offsetof(UOpusSoundStream, Pitch) == 552, "Offset mismatch for UOpusSoundStream::Pitch");
static_assert(offsetof(UOpusSoundStream, NumChannels) == 556, "Offset mismatch for UOpusSoundStream::NumChannels");
static_assert(offsetof(UOpusSoundStream, SampleRate) == 560, "Offset mismatch for UOpusSoundStream::SampleRate");
static_assert(offsetof(UOpusSoundStream, Subtitles) == 576, "Offset mismatch for UOpusSoundStream::Subtitles");
static_assert(offsetof(UOpusSoundStream, Curves) == 592, "Offset mismatch for UOpusSoundStream::Curves");
static_assert(offsetof(UOpusSoundStream, InternalCurves) == 600, "Offset mismatch for UOpusSoundStream::InternalCurves");

// /Script/OratorRuntime.OratorAudioCaptureInput
// Kind: Class; super: OratorAudioInputProvider
class UOratorAudioCaptureInput
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OratorRuntime.OratorAudioInputProvider
// Kind: Class; super: Object
class UOratorAudioInputProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OratorRuntime.OratorBaseAudioProvider
// Kind: Class; super: Object
class UOratorBaseAudioProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OratorRuntime.OratorBaseComponent
// Kind: Class; super: ActorComponent
class UOratorBaseComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnSourceRegistered; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAudioStreamFailure; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t AudioComponentTag[0x4]; // 0x00E0 (Size: 0x4, Type: NameProperty)
    std::uint8_t CatchUpPolicy; // 0x00E4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHonorControllerFiltering; // 0x00E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00E6
    void* SoundStream; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* AudioComponent; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OratorSourceId[0x68]; // 0x00F8 (Size: 0x68, Type: StructProperty)
    std::uint8_t bHasActivePerformance; // 0x0160 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOratorBaseComponent, OnSourceRegistered) == 192, "Offset mismatch for UOratorBaseComponent::OnSourceRegistered");
static_assert(offsetof(UOratorBaseComponent, OnAudioStreamFailure) == 208, "Offset mismatch for UOratorBaseComponent::OnAudioStreamFailure");
static_assert(offsetof(UOratorBaseComponent, AudioComponentTag) == 224, "Offset mismatch for UOratorBaseComponent::AudioComponentTag");
static_assert(offsetof(UOratorBaseComponent, CatchUpPolicy) == 228, "Offset mismatch for UOratorBaseComponent::CatchUpPolicy");
static_assert(offsetof(UOratorBaseComponent, bHonorControllerFiltering) == 229, "Offset mismatch for UOratorBaseComponent::bHonorControllerFiltering");
static_assert(offsetof(UOratorBaseComponent, SoundStream) == 232, "Offset mismatch for UOratorBaseComponent::SoundStream");
static_assert(offsetof(UOratorBaseComponent, AudioComponent) == 240, "Offset mismatch for UOratorBaseComponent::AudioComponent");
static_assert(offsetof(UOratorBaseComponent, OratorSourceId) == 248, "Offset mismatch for UOratorBaseComponent::OratorSourceId");
static_assert(offsetof(UOratorBaseComponent, bHasActivePerformance) == 352, "Offset mismatch for UOratorBaseComponent::bHasActivePerformance");

// /Script/OratorRuntime.OratorChannel
// Kind: Class; super: Channel
class UOratorChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Connection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOratorChannel, Connection) == 40, "Offset mismatch for UOratorChannel::Connection");

// /Script/OratorRuntime.OratorCheatManager
// Kind: Class; super: CheatManagerExtension
class UOratorCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OratorRuntime.OratorComponent
// Kind: Class; super: OratorBaseComponent
class UOratorComponent
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    std::uint8_t DialogCorrectionSettings[0x90]; // 0x0178 (Size: 0x90, Type: StructProperty)
    FMulticastInlineDelegate OnGeneratedUtterance; // 0x0208 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartedToPerformUtterance; // 0x0218 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPerformedUtterance; // 0x0228 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClearedUtterance; // 0x0238 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancelledUtterance; // 0x0248 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnServerDialogueReady; // 0x0258 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnServerModerationResolved; // 0x0268 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CurveSourceBindingName[0x4]; // 0x0278 (Size: 0x4, Type: NameProperty)
    float CurveSyncOffset; // 0x027C (Size: 0x4, Type: FloatProperty)
    void* DialogueStructDescriptor; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableAnimGeneration; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0289
    TArray<void*> AnimCurveNames; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    FName SubjectName; // 0x02A0 (Size: 0x8, Type: NameProperty)
    void* TextToSpeechProvider; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* SpeechAnimationProvider; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOratorComponent, DialogCorrectionSettings) == 376, "Offset mismatch for UOratorComponent::DialogCorrectionSettings");
static_assert(offsetof(UOratorComponent, OnGeneratedUtterance) == 520, "Offset mismatch for UOratorComponent::OnGeneratedUtterance");
static_assert(offsetof(UOratorComponent, OnStartedToPerformUtterance) == 536, "Offset mismatch for UOratorComponent::OnStartedToPerformUtterance");
static_assert(offsetof(UOratorComponent, OnPerformedUtterance) == 552, "Offset mismatch for UOratorComponent::OnPerformedUtterance");
static_assert(offsetof(UOratorComponent, OnClearedUtterance) == 568, "Offset mismatch for UOratorComponent::OnClearedUtterance");
static_assert(offsetof(UOratorComponent, OnCancelledUtterance) == 584, "Offset mismatch for UOratorComponent::OnCancelledUtterance");
static_assert(offsetof(UOratorComponent, OnServerDialogueReady) == 600, "Offset mismatch for UOratorComponent::OnServerDialogueReady");
static_assert(offsetof(UOratorComponent, OnServerModerationResolved) == 616, "Offset mismatch for UOratorComponent::OnServerModerationResolved");
static_assert(offsetof(UOratorComponent, CurveSourceBindingName) == 632, "Offset mismatch for UOratorComponent::CurveSourceBindingName");
static_assert(offsetof(UOratorComponent, CurveSyncOffset) == 636, "Offset mismatch for UOratorComponent::CurveSyncOffset");
static_assert(offsetof(UOratorComponent, DialogueStructDescriptor) == 640, "Offset mismatch for UOratorComponent::DialogueStructDescriptor");
static_assert(offsetof(UOratorComponent, bEnableAnimGeneration) == 648, "Offset mismatch for UOratorComponent::bEnableAnimGeneration");
static_assert(offsetof(UOratorComponent, AnimCurveNames) == 656, "Offset mismatch for UOratorComponent::AnimCurveNames");
static_assert(offsetof(UOratorComponent, SubjectName) == 672, "Offset mismatch for UOratorComponent::SubjectName");
static_assert(offsetof(UOratorComponent, TextToSpeechProvider) == 680, "Offset mismatch for UOratorComponent::TextToSpeechProvider");
static_assert(offsetof(UOratorComponent, SpeechAnimationProvider) == 688, "Offset mismatch for UOratorComponent::SpeechAnimationProvider");

// /Script/OratorRuntime.OratorControllerComponent
// Kind: Class; super: ControllerComponent
class UOratorControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bPlayerIsAway; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayerAllowedToHearOrator; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayerAllowedToHearOratorIsReplicated; // 0x00C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00C3
    FMulticastInlineDelegate OnPlayerAllowedToHearOratorChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* OratorChannel; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bReadyForChannel; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOratorControllerComponent, bPlayerIsAway) == 192, "Offset mismatch for UOratorControllerComponent::bPlayerIsAway");
static_assert(offsetof(UOratorControllerComponent, bPlayerAllowedToHearOrator) == 193, "Offset mismatch for UOratorControllerComponent::bPlayerAllowedToHearOrator");
static_assert(offsetof(UOratorControllerComponent, bPlayerAllowedToHearOratorIsReplicated) == 194, "Offset mismatch for UOratorControllerComponent::bPlayerAllowedToHearOratorIsReplicated");
static_assert(offsetof(UOratorControllerComponent, OnPlayerAllowedToHearOratorChanged) == 200, "Offset mismatch for UOratorControllerComponent::OnPlayerAllowedToHearOratorChanged");
static_assert(offsetof(UOratorControllerComponent, OratorChannel) == 216, "Offset mismatch for UOratorControllerComponent::OratorChannel");
static_assert(offsetof(UOratorControllerComponent, bReadyForChannel) == 224, "Offset mismatch for UOratorControllerComponent::bReadyForChannel");

// /Script/OratorRuntime.OratorDialogueComponent
// Kind: Class; super: OratorBaseComponent
class UOratorDialogueComponent
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t DialogCorrectionSettings[0x90]; // 0x0170 (Size: 0x90, Type: StructProperty)
    FMulticastInlineDelegate OnGeneratedDialogue; // 0x0200 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartedToPerformDialogue; // 0x0210 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPerformedDialogue; // 0x0220 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClearedDialogue; // 0x0230 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancelledDialogue; // 0x0240 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* DialogueProvider; // 0x0250 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOratorDialogueComponent, DialogCorrectionSettings) == 368, "Offset mismatch for UOratorDialogueComponent::DialogCorrectionSettings");
static_assert(offsetof(UOratorDialogueComponent, OnGeneratedDialogue) == 512, "Offset mismatch for UOratorDialogueComponent::OnGeneratedDialogue");
static_assert(offsetof(UOratorDialogueComponent, OnStartedToPerformDialogue) == 528, "Offset mismatch for UOratorDialogueComponent::OnStartedToPerformDialogue");
static_assert(offsetof(UOratorDialogueComponent, OnPerformedDialogue) == 544, "Offset mismatch for UOratorDialogueComponent::OnPerformedDialogue");
static_assert(offsetof(UOratorDialogueComponent, OnClearedDialogue) == 560, "Offset mismatch for UOratorDialogueComponent::OnClearedDialogue");
static_assert(offsetof(UOratorDialogueComponent, OnCancelledDialogue) == 576, "Offset mismatch for UOratorDialogueComponent::OnCancelledDialogue");
static_assert(offsetof(UOratorDialogueComponent, DialogueProvider) == 592, "Offset mismatch for UOratorDialogueComponent::DialogueProvider");

// /Script/OratorRuntime.OratorDialogueProvider
// Kind: Class; super: OratorBaseAudioProvider
class UOratorDialogueProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OratorRuntime.OratorDialogueStructDescriptor
// Kind: Class; super: Object
class UOratorDialogueStructDescriptor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DialogueStructType; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DialogueStructSchema[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOratorDialogueStructDescriptor, DialogueStructType) == 40, "Offset mismatch for UOratorDialogueStructDescriptor::DialogueStructType");
static_assert(offsetof(UOratorDialogueStructDescriptor, DialogueStructSchema) == 48, "Offset mismatch for UOratorDialogueStructDescriptor::DialogueStructSchema");

// /Script/OratorRuntime.OratorInputControllerComponent
// Kind: Class; super: ControllerComponent
class UOratorInputControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnStartVoiceCapture; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStopVoiceCapture; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancelVoiceCapture; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClientLanguageChanged; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerSaid; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCaptureCooldownStarted; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCaptureCooldownEnded; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVoiceCaptureEnabledChanged; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCanVoiceCaptureChanged; // 0x0140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVoiceCaptureDecibelThreshold; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTranscriptionComplete; // 0x0160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTranscriptionFailed; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0180
    std::uint8_t ClientLanguage[0x10]; // 0x0198 (Size: 0x10, Type: TextProperty)
    void* AudioInputProvider; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    void* TranscriptionProvider; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    void* VADModelData; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    void* TranscriptionPrompt; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x01C8
    std::uint8_t OratorSourceId[0x10]; // 0x01D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bVoiceCaptureEnabled; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x37]; // 0x01E1
    double CooldownEndTime; // 0x0218 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UOratorInputControllerComponent, OnStartVoiceCapture) == 192, "Offset mismatch for UOratorInputControllerComponent::OnStartVoiceCapture");
static_assert(offsetof(UOratorInputControllerComponent, OnStopVoiceCapture) == 208, "Offset mismatch for UOratorInputControllerComponent::OnStopVoiceCapture");
static_assert(offsetof(UOratorInputControllerComponent, OnCancelVoiceCapture) == 224, "Offset mismatch for UOratorInputControllerComponent::OnCancelVoiceCapture");
static_assert(offsetof(UOratorInputControllerComponent, OnClientLanguageChanged) == 240, "Offset mismatch for UOratorInputControllerComponent::OnClientLanguageChanged");
static_assert(offsetof(UOratorInputControllerComponent, OnPlayerSaid) == 256, "Offset mismatch for UOratorInputControllerComponent::OnPlayerSaid");
static_assert(offsetof(UOratorInputControllerComponent, OnCaptureCooldownStarted) == 272, "Offset mismatch for UOratorInputControllerComponent::OnCaptureCooldownStarted");
static_assert(offsetof(UOratorInputControllerComponent, OnCaptureCooldownEnded) == 288, "Offset mismatch for UOratorInputControllerComponent::OnCaptureCooldownEnded");
static_assert(offsetof(UOratorInputControllerComponent, OnVoiceCaptureEnabledChanged) == 304, "Offset mismatch for UOratorInputControllerComponent::OnVoiceCaptureEnabledChanged");
static_assert(offsetof(UOratorInputControllerComponent, OnCanVoiceCaptureChanged) == 320, "Offset mismatch for UOratorInputControllerComponent::OnCanVoiceCaptureChanged");
static_assert(offsetof(UOratorInputControllerComponent, OnVoiceCaptureDecibelThreshold) == 336, "Offset mismatch for UOratorInputControllerComponent::OnVoiceCaptureDecibelThreshold");
static_assert(offsetof(UOratorInputControllerComponent, OnTranscriptionComplete) == 352, "Offset mismatch for UOratorInputControllerComponent::OnTranscriptionComplete");
static_assert(offsetof(UOratorInputControllerComponent, OnTranscriptionFailed) == 368, "Offset mismatch for UOratorInputControllerComponent::OnTranscriptionFailed");
static_assert(offsetof(UOratorInputControllerComponent, ClientLanguage) == 408, "Offset mismatch for UOratorInputControllerComponent::ClientLanguage");
static_assert(offsetof(UOratorInputControllerComponent, AudioInputProvider) == 424, "Offset mismatch for UOratorInputControllerComponent::AudioInputProvider");
static_assert(offsetof(UOratorInputControllerComponent, TranscriptionProvider) == 432, "Offset mismatch for UOratorInputControllerComponent::TranscriptionProvider");
static_assert(offsetof(UOratorInputControllerComponent, VADModelData) == 440, "Offset mismatch for UOratorInputControllerComponent::VADModelData");
static_assert(offsetof(UOratorInputControllerComponent, TranscriptionPrompt) == 448, "Offset mismatch for UOratorInputControllerComponent::TranscriptionPrompt");
static_assert(offsetof(UOratorInputControllerComponent, OratorSourceId) == 464, "Offset mismatch for UOratorInputControllerComponent::OratorSourceId");
static_assert(offsetof(UOratorInputControllerComponent, bVoiceCaptureEnabled) == 480, "Offset mismatch for UOratorInputControllerComponent::bVoiceCaptureEnabled");
static_assert(offsetof(UOratorInputControllerComponent, CooldownEndTime) == 536, "Offset mismatch for UOratorInputControllerComponent::CooldownEndTime");

// /Script/OratorRuntime.OratorMusicComponent
// Kind: Class; super: OratorBaseComponent
class UOratorMusicComponent
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    FMulticastInlineDelegate OnGeneratedMusic; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartedToPerformMusic; // 0x0180 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPerformedMusic; // 0x0190 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClearedMusic; // 0x01A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancelledMusic; // 0x01B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* MusicProvider; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOratorMusicComponent, OnGeneratedMusic) == 368, "Offset mismatch for UOratorMusicComponent::OnGeneratedMusic");
static_assert(offsetof(UOratorMusicComponent, OnStartedToPerformMusic) == 384, "Offset mismatch for UOratorMusicComponent::OnStartedToPerformMusic");
static_assert(offsetof(UOratorMusicComponent, OnPerformedMusic) == 400, "Offset mismatch for UOratorMusicComponent::OnPerformedMusic");
static_assert(offsetof(UOratorMusicComponent, OnClearedMusic) == 416, "Offset mismatch for UOratorMusicComponent::OnClearedMusic");
static_assert(offsetof(UOratorMusicComponent, OnCancelledMusic) == 432, "Offset mismatch for UOratorMusicComponent::OnCancelledMusic");
static_assert(offsetof(UOratorMusicComponent, MusicProvider) == 448, "Offset mismatch for UOratorMusicComponent::MusicProvider");

// /Script/OratorRuntime.OratorMusicProvider
// Kind: Class; super: OratorBaseAudioProvider
class UOratorMusicProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OratorRuntime.OratorReplayAnchor
// Kind: Class; super: Actor
class UOratorReplayAnchor
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

static_assert(offsetof(UOratorReplayAnchor, PrimaryActorTick) == 40, "Offset mismatch for UOratorReplayAnchor::PrimaryActorTick");
static_assert(offsetof(UOratorReplayAnchor, bAlwaysRelevant) == 88, "Offset mismatch for UOratorReplayAnchor::bAlwaysRelevant");
static_assert(offsetof(UOratorReplayAnchor, bExchangedRoles) == 89, "Offset mismatch for UOratorReplayAnchor::bExchangedRoles");
static_assert(offsetof(UOratorReplayAnchor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UOratorReplayAnchor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UOratorReplayAnchor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UOratorReplayAnchor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UOratorReplayAnchor, bActorEnableCollision) == 93, "Offset mismatch for UOratorReplayAnchor::bActorEnableCollision");
static_assert(offsetof(UOratorReplayAnchor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UOratorReplayAnchor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UOratorReplayAnchor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UOratorReplayAnchor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UOratorReplayAnchor, RemoteRole) == 96, "Offset mismatch for UOratorReplayAnchor::RemoteRole");
static_assert(offsetof(UOratorReplayAnchor, InitialLifeSpan) == 100, "Offset mismatch for UOratorReplayAnchor::InitialLifeSpan");
static_assert(offsetof(UOratorReplayAnchor, CustomTimeDilation) == 104, "Offset mismatch for UOratorReplayAnchor::CustomTimeDilation");
static_assert(offsetof(UOratorReplayAnchor, RayTracingGroupId) == 108, "Offset mismatch for UOratorReplayAnchor::RayTracingGroupId");
static_assert(offsetof(UOratorReplayAnchor, AttachmentReplication) == 112, "Offset mismatch for UOratorReplayAnchor::AttachmentReplication");
static_assert(offsetof(UOratorReplayAnchor, ReplicatedMovement) == 208, "Offset mismatch for UOratorReplayAnchor::ReplicatedMovement");
static_assert(offsetof(UOratorReplayAnchor, Owner) == 344, "Offset mismatch for UOratorReplayAnchor::Owner");
static_assert(offsetof(UOratorReplayAnchor, NetDriverName) == 352, "Offset mismatch for UOratorReplayAnchor::NetDriverName");
static_assert(offsetof(UOratorReplayAnchor, Role) == 356, "Offset mismatch for UOratorReplayAnchor::Role");
static_assert(offsetof(UOratorReplayAnchor, NetDormancy) == 357, "Offset mismatch for UOratorReplayAnchor::NetDormancy");
static_assert(offsetof(UOratorReplayAnchor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UOratorReplayAnchor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UOratorReplayAnchor, AutoReceiveInput) == 359, "Offset mismatch for UOratorReplayAnchor::AutoReceiveInput");
static_assert(offsetof(UOratorReplayAnchor, InputPriority) == 360, "Offset mismatch for UOratorReplayAnchor::InputPriority");
static_assert(offsetof(UOratorReplayAnchor, InputComponent) == 368, "Offset mismatch for UOratorReplayAnchor::InputComponent");
static_assert(offsetof(UOratorReplayAnchor, NetTag) == 376, "Offset mismatch for UOratorReplayAnchor::NetTag");
static_assert(offsetof(UOratorReplayAnchor, NetCullDistanceSquared) == 380, "Offset mismatch for UOratorReplayAnchor::NetCullDistanceSquared");
static_assert(offsetof(UOratorReplayAnchor, NetUpdateFrequency) == 384, "Offset mismatch for UOratorReplayAnchor::NetUpdateFrequency");
static_assert(offsetof(UOratorReplayAnchor, MinNetUpdateFrequency) == 388, "Offset mismatch for UOratorReplayAnchor::MinNetUpdateFrequency");
static_assert(offsetof(UOratorReplayAnchor, NetPriority) == 392, "Offset mismatch for UOratorReplayAnchor::NetPriority");
static_assert(offsetof(UOratorReplayAnchor, PhysicsReplicationMode) == 396, "Offset mismatch for UOratorReplayAnchor::PhysicsReplicationMode");
static_assert(offsetof(UOratorReplayAnchor, Instigator) == 408, "Offset mismatch for UOratorReplayAnchor::Instigator");
static_assert(offsetof(UOratorReplayAnchor, Children) == 416, "Offset mismatch for UOratorReplayAnchor::Children");
static_assert(offsetof(UOratorReplayAnchor, RootComponent) == 432, "Offset mismatch for UOratorReplayAnchor::RootComponent");
static_assert(offsetof(UOratorReplayAnchor, HLODLayer) == 448, "Offset mismatch for UOratorReplayAnchor::HLODLayer");
static_assert(offsetof(UOratorReplayAnchor, Layers) == 456, "Offset mismatch for UOratorReplayAnchor::Layers");
static_assert(offsetof(UOratorReplayAnchor, ParentComponent) == 472, "Offset mismatch for UOratorReplayAnchor::ParentComponent");
static_assert(offsetof(UOratorReplayAnchor, Tags) == 496, "Offset mismatch for UOratorReplayAnchor::Tags");
static_assert(offsetof(UOratorReplayAnchor, OnTakeAnyDamage) == 512, "Offset mismatch for UOratorReplayAnchor::OnTakeAnyDamage");
static_assert(offsetof(UOratorReplayAnchor, OnTakePointDamage) == 513, "Offset mismatch for UOratorReplayAnchor::OnTakePointDamage");
static_assert(offsetof(UOratorReplayAnchor, OnTakeRadialDamage) == 514, "Offset mismatch for UOratorReplayAnchor::OnTakeRadialDamage");
static_assert(offsetof(UOratorReplayAnchor, OnActorBeginOverlap) == 515, "Offset mismatch for UOratorReplayAnchor::OnActorBeginOverlap");
static_assert(offsetof(UOratorReplayAnchor, OnActorEndOverlap) == 516, "Offset mismatch for UOratorReplayAnchor::OnActorEndOverlap");
static_assert(offsetof(UOratorReplayAnchor, OnBeginCursorOver) == 517, "Offset mismatch for UOratorReplayAnchor::OnBeginCursorOver");
static_assert(offsetof(UOratorReplayAnchor, OnEndCursorOver) == 518, "Offset mismatch for UOratorReplayAnchor::OnEndCursorOver");
static_assert(offsetof(UOratorReplayAnchor, OnClicked) == 519, "Offset mismatch for UOratorReplayAnchor::OnClicked");
static_assert(offsetof(UOratorReplayAnchor, OnReleased) == 520, "Offset mismatch for UOratorReplayAnchor::OnReleased");
static_assert(offsetof(UOratorReplayAnchor, OnInputTouchBegin) == 521, "Offset mismatch for UOratorReplayAnchor::OnInputTouchBegin");
static_assert(offsetof(UOratorReplayAnchor, OnInputTouchEnd) == 522, "Offset mismatch for UOratorReplayAnchor::OnInputTouchEnd");
static_assert(offsetof(UOratorReplayAnchor, OnInputTouchEnter) == 523, "Offset mismatch for UOratorReplayAnchor::OnInputTouchEnter");
static_assert(offsetof(UOratorReplayAnchor, OnInputTouchLeave) == 524, "Offset mismatch for UOratorReplayAnchor::OnInputTouchLeave");
static_assert(offsetof(UOratorReplayAnchor, OnActorHit) == 525, "Offset mismatch for UOratorReplayAnchor::OnActorHit");
static_assert(offsetof(UOratorReplayAnchor, OnDestroyed) == 526, "Offset mismatch for UOratorReplayAnchor::OnDestroyed");
static_assert(offsetof(UOratorReplayAnchor, OnEndPlay) == 527, "Offset mismatch for UOratorReplayAnchor::OnEndPlay");
static_assert(offsetof(UOratorReplayAnchor, InstanceComponents) == 592, "Offset mismatch for UOratorReplayAnchor::InstanceComponents");
static_assert(offsetof(UOratorReplayAnchor, BlueprintCreatedComponents) == 608, "Offset mismatch for UOratorReplayAnchor::BlueprintCreatedComponents");

// /Script/OratorRuntime.OratorSpeechAnimationProvider
// Kind: Class; super: Object
class UOratorSpeechAnimationProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> MutedCurveNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOratorSpeechAnimationProvider, MutedCurveNames) == 40, "Offset mismatch for UOratorSpeechAnimationProvider::MutedCurveNames");

// /Script/OratorRuntime.OratorSubsystem
// Kind: Class; super: WorldSubsystem
class UOratorSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate OnSourceRegistrationChanged; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0xB0]; // 0x0048
    TMap<void*, void*> ReplayAudioSinks; // 0x00F8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x128]; // 0x0108
    FString AnalyticsEventNamespace; // 0x0230 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UOratorSubsystem, OnSourceRegistrationChanged) == 56, "Offset mismatch for UOratorSubsystem::OnSourceRegistrationChanged");
static_assert(offsetof(UOratorSubsystem, ReplayAudioSinks) == 248, "Offset mismatch for UOratorSubsystem::ReplayAudioSinks");
static_assert(offsetof(UOratorSubsystem, AnalyticsEventNamespace) == 560, "Offset mismatch for UOratorSubsystem::AnalyticsEventNamespace");

// /Script/OratorRuntime.OratorTextToSpeechProvider
// Kind: Class; super: OratorBaseAudioProvider
class UOratorTextToSpeechProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OratorRuntime.OratorTranscriptionProvider
// Kind: Class; super: Object
class UOratorTranscriptionProvider
{
public:
    std::uint8_t Opaque[1];
};
