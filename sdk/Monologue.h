/**
 * decamp dumper generated SDK
 * Package: /Script/Monologue
 */
#pragma once
#include "Basic.h"

// /Script/Monologue.MonologueAnalyzeOverrides
// Kind: ScriptStruct; super: none
struct FMonologueAnalyzeOverrides
{
public:
    std::uint8_t bIgnoreMinPendingEvents; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreNumMostRecentEventsToIgnore; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreAwaitFinalizedEvents; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMonologueAnalyzeOverrides, bIgnoreMinPendingEvents) == 0, "Offset mismatch for FMonologueAnalyzeOverrides::bIgnoreMinPendingEvents");
static_assert(offsetof(FMonologueAnalyzeOverrides, bIgnoreNumMostRecentEventsToIgnore) == 1, "Offset mismatch for FMonologueAnalyzeOverrides::bIgnoreNumMostRecentEventsToIgnore");
static_assert(offsetof(FMonologueAnalyzeOverrides, bIgnoreAwaitFinalizedEvents) == 2, "Offset mismatch for FMonologueAnalyzeOverrides::bIgnoreAwaitFinalizedEvents");

// /Script/Monologue.MonologueContext
// Kind: ScriptStruct; super: none
struct FMonologueContext
{
public:
    std::uint8_t Description[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t CharacterTagQuery[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMonologueContext, Description) == 0, "Offset mismatch for FMonologueContext::Description");
static_assert(offsetof(FMonologueContext, CharacterTagQuery) == 16, "Offset mismatch for FMonologueContext::CharacterTagQuery");

// /Script/Monologue.MonologueEvent
// Kind: ScriptStruct; super: none
struct FMonologueEvent
{
public:
    std::uint8_t Data[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMonologueEvent, Data) == 0, "Offset mismatch for FMonologueEvent::Data");

// /Script/Monologue.MonologueEventDescriptionFormat
// Kind: ScriptStruct; super: none
struct FMonologueEventDescriptionFormat
{
public:
    std::uint8_t EventDelimiter[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t NarrationPointOfView; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPrefixWithTimestamps; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TimestampDateStyle; // 0x0012 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TimestampTimeStyle; // 0x0013 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    FText TimestampedEventFormat; // 0x0018 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FMonologueEventDescriptionFormat, EventDelimiter) == 0, "Offset mismatch for FMonologueEventDescriptionFormat::EventDelimiter");
static_assert(offsetof(FMonologueEventDescriptionFormat, NarrationPointOfView) == 16, "Offset mismatch for FMonologueEventDescriptionFormat::NarrationPointOfView");
static_assert(offsetof(FMonologueEventDescriptionFormat, bPrefixWithTimestamps) == 17, "Offset mismatch for FMonologueEventDescriptionFormat::bPrefixWithTimestamps");
static_assert(offsetof(FMonologueEventDescriptionFormat, TimestampDateStyle) == 18, "Offset mismatch for FMonologueEventDescriptionFormat::TimestampDateStyle");
static_assert(offsetof(FMonologueEventDescriptionFormat, TimestampTimeStyle) == 19, "Offset mismatch for FMonologueEventDescriptionFormat::TimestampTimeStyle");
static_assert(offsetof(FMonologueEventDescriptionFormat, TimestampedEventFormat) == 24, "Offset mismatch for FMonologueEventDescriptionFormat::TimestampedEventFormat");

// /Script/Monologue.MonologueEventSummary
// Kind: ScriptStruct; super: none
struct FMonologueEventSummary
{
public:
    FText Summary; // 0x0000 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FMonologueEventSummary, Summary) == 0, "Offset mismatch for FMonologueEventSummary::Summary");

// /Script/Monologue.MonologueFact
// Kind: ScriptStruct; super: none
struct FMonologueFact
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Type; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    FString ValueString; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMonologueFact, Type) == 48, "Offset mismatch for FMonologueFact::Type");
static_assert(offsetof(FMonologueFact, ValueString) == 56, "Offset mismatch for FMonologueFact::ValueString");

// /Script/Monologue.MonologueFactList
// Kind: ScriptStruct; super: none
struct FMonologueFactList
{
public:
    TArray<void*> Facts; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMonologueFactList, Facts) == 0, "Offset mismatch for FMonologueFactList::Facts");

// /Script/Monologue.MonologueFactTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FMonologueFactTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Fact[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMonologueFactTableRow, Fact) == 8, "Offset mismatch for FMonologueFactTableRow::Fact");

// /Script/Monologue.MonologueFactualizedEvent
// Kind: ScriptStruct; super: none
struct FMonologueFactualizedEvent
{
public:
    std::uint8_t DescriptionTemplate[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> Facts; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::uint8_t ConversationCueTemplate[0x18]; // 0x0020 (Size: 0x18, Type: OptionalProperty)
    float Significance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x003C
    std::uint8_t Location[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMonologueFactualizedEvent, DescriptionTemplate) == 0, "Offset mismatch for FMonologueFactualizedEvent::DescriptionTemplate");
static_assert(offsetof(FMonologueFactualizedEvent, Facts) == 16, "Offset mismatch for FMonologueFactualizedEvent::Facts");
static_assert(offsetof(FMonologueFactualizedEvent, ConversationCueTemplate) == 32, "Offset mismatch for FMonologueFactualizedEvent::ConversationCueTemplate");
static_assert(offsetof(FMonologueFactualizedEvent, Significance) == 56, "Offset mismatch for FMonologueFactualizedEvent::Significance");
static_assert(offsetof(FMonologueFactualizedEvent, Location) == 64, "Offset mismatch for FMonologueFactualizedEvent::Location");
static_assert(offsetof(FMonologueFactualizedEvent, Radius) == 88, "Offset mismatch for FMonologueFactualizedEvent::Radius");

// /Script/Monologue.MonologueFactualizedTextTemplate
// Kind: ScriptStruct; super: none
struct FMonologueFactualizedTextTemplate
{
public:
    FText Template; // 0x0000 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FMonologueFactualizedTextTemplate, Template) == 0, "Offset mismatch for FMonologueFactualizedTextTemplate::Template");

// /Script/Monologue.MonologueInterest
// Kind: ScriptStruct; super: none
struct FMonologueInterest
{
public:
    std::uint8_t TagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    float SignificanceMultiplier; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMonologueInterest, TagQuery) == 0, "Offset mismatch for FMonologueInterest::TagQuery");
static_assert(offsetof(FMonologueInterest, SignificanceMultiplier) == 72, "Offset mismatch for FMonologueInterest::SignificanceMultiplier");

// /Script/Monologue.MonologueInterests
// Kind: ScriptStruct; super: none
struct FMonologueInterests
{
public:
    TArray<void*> Interests; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMonologueInterests, Interests) == 0, "Offset mismatch for FMonologueInterests::Interests");

// /Script/Monologue.MonologueNamedFact
// Kind: ScriptStruct; super: none
struct FMonologueNamedFact
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Fact[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMonologueNamedFact, Name) == 0, "Offset mismatch for FMonologueNamedFact::Name");
static_assert(offsetof(FMonologueNamedFact, Fact) == 8, "Offset mismatch for FMonologueNamedFact::Fact");

// /Script/Monologue.MonologuePOVFact
// Kind: ScriptStruct; super: none
struct FMonologuePOVFact
{
public:
    std::uint8_t FirstPerson[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t SecondPerson[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    std::uint8_t ThirdPerson[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMonologuePOVFact, FirstPerson) == 0, "Offset mismatch for FMonologuePOVFact::FirstPerson");
static_assert(offsetof(FMonologuePOVFact, SecondPerson) == 72, "Offset mismatch for FMonologuePOVFact::SecondPerson");
static_assert(offsetof(FMonologuePOVFact, ThirdPerson) == 144, "Offset mismatch for FMonologuePOVFact::ThirdPerson");

// /Script/Monologue.MonologuePerceivedEvent
// Kind: ScriptStruct; super: none
struct FMonologuePerceivedEvent
{
public:
    std::uint8_t Event[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Timestamp[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    double WorldTimeSeconds; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t duration[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    float Significance; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x002C
    void* Describer; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMonologuePerceivedEvent, Event) == 0, "Offset mismatch for FMonologuePerceivedEvent::Event");
static_assert(offsetof(FMonologuePerceivedEvent, Timestamp) == 16, "Offset mismatch for FMonologuePerceivedEvent::Timestamp");
static_assert(offsetof(FMonologuePerceivedEvent, WorldTimeSeconds) == 24, "Offset mismatch for FMonologuePerceivedEvent::WorldTimeSeconds");
static_assert(offsetof(FMonologuePerceivedEvent, duration) == 32, "Offset mismatch for FMonologuePerceivedEvent::duration");
static_assert(offsetof(FMonologuePerceivedEvent, Significance) == 40, "Offset mismatch for FMonologuePerceivedEvent::Significance");
static_assert(offsetof(FMonologuePerceivedEvent, Describer) == 48, "Offset mismatch for FMonologuePerceivedEvent::Describer");

// /Script/Monologue.MonologuePerceivedEventAnalysis
// Kind: ScriptStruct; super: none
struct FMonologuePerceivedEventAnalysis
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t MinPendingEvents; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t NumMostRecentEventsToIgnore; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bAwaitFinalizedEvents; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x13]; // 0x0011
    std::uint8_t bEnabled; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t State; // 0x0025 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0026
    std::uint8_t LastAnalyzedEvent[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    void* AnalysisStructType; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMonologuePerceivedEventAnalysis, MinPendingEvents) == 8, "Offset mismatch for FMonologuePerceivedEventAnalysis::MinPendingEvents");
static_assert(offsetof(FMonologuePerceivedEventAnalysis, NumMostRecentEventsToIgnore) == 12, "Offset mismatch for FMonologuePerceivedEventAnalysis::NumMostRecentEventsToIgnore");
static_assert(offsetof(FMonologuePerceivedEventAnalysis, bAwaitFinalizedEvents) == 16, "Offset mismatch for FMonologuePerceivedEventAnalysis::bAwaitFinalizedEvents");
static_assert(offsetof(FMonologuePerceivedEventAnalysis, bEnabled) == 36, "Offset mismatch for FMonologuePerceivedEventAnalysis::bEnabled");
static_assert(offsetof(FMonologuePerceivedEventAnalysis, State) == 37, "Offset mismatch for FMonologuePerceivedEventAnalysis::State");
static_assert(offsetof(FMonologuePerceivedEventAnalysis, LastAnalyzedEvent) == 40, "Offset mismatch for FMonologuePerceivedEventAnalysis::LastAnalyzedEvent");
static_assert(offsetof(FMonologuePerceivedEventAnalysis, AnalysisStructType) == 88, "Offset mismatch for FMonologuePerceivedEventAnalysis::AnalysisStructType");

// /Script/Monologue.MonologuePerceivedEventSummarization
// Kind: ScriptStruct; super: MonologuePerceivedEventAnalysis
struct FMonologuePerceivedEventSummarization
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t EventsToSummarizeFormat[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    void* Prompt; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMonologuePerceivedEventSummarization, EventsToSummarizeFormat) == 96, "Offset mismatch for FMonologuePerceivedEventSummarization::EventsToSummarizeFormat");
static_assert(offsetof(FMonologuePerceivedEventSummarization, Prompt) == 136, "Offset mismatch for FMonologuePerceivedEventSummarization::Prompt");

// /Script/Monologue.MonologuePlaceholderEvent
// Kind: ScriptStruct; super: none
struct FMonologuePlaceholderEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Monologue.MonologuePlayerDialogueEvent
// Kind: ScriptStruct; super: none
struct FMonologuePlayerDialogueEvent
{
public:
    std::uint8_t bOmniPresent; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* player; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> PlayerSubject; // 0x0010 (Size: 0x10, Type: InterfaceProperty)
    FText Dialogue; // 0x0020 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    float AudioDuration; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMonologuePlayerDialogueEvent, bOmniPresent) == 0, "Offset mismatch for FMonologuePlayerDialogueEvent::bOmniPresent");
static_assert(offsetof(FMonologuePlayerDialogueEvent, player) == 8, "Offset mismatch for FMonologuePlayerDialogueEvent::player");
static_assert(offsetof(FMonologuePlayerDialogueEvent, PlayerSubject) == 16, "Offset mismatch for FMonologuePlayerDialogueEvent::PlayerSubject");
static_assert(offsetof(FMonologuePlayerDialogueEvent, Dialogue) == 32, "Offset mismatch for FMonologuePlayerDialogueEvent::Dialogue");
static_assert(offsetof(FMonologuePlayerDialogueEvent, AudioDuration) == 64, "Offset mismatch for FMonologuePlayerDialogueEvent::AudioDuration");

// /Script/Monologue.MonologuePrompt
// Kind: ScriptStruct; super: none
struct FMonologuePrompt
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t SystemMessageTemplate[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t UserMessageTemplate[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t ChatCompletionSettings[0x60]; // 0x0028 (Size: 0x60, Type: StructProperty)
    void* ChatCompleterClassOverride; // 0x0088 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> Asset; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMonologuePrompt, Name) == 0, "Offset mismatch for FMonologuePrompt::Name");
static_assert(offsetof(FMonologuePrompt, SystemMessageTemplate) == 8, "Offset mismatch for FMonologuePrompt::SystemMessageTemplate");
static_assert(offsetof(FMonologuePrompt, UserMessageTemplate) == 24, "Offset mismatch for FMonologuePrompt::UserMessageTemplate");
static_assert(offsetof(FMonologuePrompt, ChatCompletionSettings) == 40, "Offset mismatch for FMonologuePrompt::ChatCompletionSettings");
static_assert(offsetof(FMonologuePrompt, ChatCompleterClassOverride) == 136, "Offset mismatch for FMonologuePrompt::ChatCompleterClassOverride");
static_assert(offsetof(FMonologuePrompt, Asset) == 144, "Offset mismatch for FMonologuePrompt::Asset");

// /Script/Monologue.MonologuePromptPreviewSettings
// Kind: ScriptStruct; super: none
struct FMonologuePromptPreviewSettings
{
public:
    std::uint8_t bWrapSystemMessage; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWrapUserMessage; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    TMap<void*, void*> EngineFacts; // 0x0008 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> WorldFacts; // 0x0018 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LocalFacts; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AutomaticLocalFacts; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bAddMonologueTestPawnSubjectFacts; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryUseAnyCharacterAsSelf; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t StructuredResponseSchema[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMonologuePromptPreviewSettings, bWrapSystemMessage) == 0, "Offset mismatch for FMonologuePromptPreviewSettings::bWrapSystemMessage");
static_assert(offsetof(FMonologuePromptPreviewSettings, bWrapUserMessage) == 1, "Offset mismatch for FMonologuePromptPreviewSettings::bWrapUserMessage");
static_assert(offsetof(FMonologuePromptPreviewSettings, EngineFacts) == 8, "Offset mismatch for FMonologuePromptPreviewSettings::EngineFacts");
static_assert(offsetof(FMonologuePromptPreviewSettings, WorldFacts) == 24, "Offset mismatch for FMonologuePromptPreviewSettings::WorldFacts");
static_assert(offsetof(FMonologuePromptPreviewSettings, LocalFacts) == 40, "Offset mismatch for FMonologuePromptPreviewSettings::LocalFacts");
static_assert(offsetof(FMonologuePromptPreviewSettings, AutomaticLocalFacts) == 56, "Offset mismatch for FMonologuePromptPreviewSettings::AutomaticLocalFacts");
static_assert(offsetof(FMonologuePromptPreviewSettings, bAddMonologueTestPawnSubjectFacts) == 72, "Offset mismatch for FMonologuePromptPreviewSettings::bAddMonologueTestPawnSubjectFacts");
static_assert(offsetof(FMonologuePromptPreviewSettings, bTryUseAnyCharacterAsSelf) == 73, "Offset mismatch for FMonologuePromptPreviewSettings::bTryUseAnyCharacterAsSelf");
static_assert(offsetof(FMonologuePromptPreviewSettings, StructuredResponseSchema) == 80, "Offset mismatch for FMonologuePromptPreviewSettings::StructuredResponseSchema");

// /Script/Monologue.MonologueTemplateSyntaxColors
// Kind: ScriptStruct; super: none
struct FMonologueTemplateSyntaxColors
{
public:
    std::uint8_t FactExpression[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Comment[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Conditional[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t Loop[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t Error[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMonologueTemplateSyntaxColors, FactExpression) == 0, "Offset mismatch for FMonologueTemplateSyntaxColors::FactExpression");
static_assert(offsetof(FMonologueTemplateSyntaxColors, Comment) == 16, "Offset mismatch for FMonologueTemplateSyntaxColors::Comment");
static_assert(offsetof(FMonologueTemplateSyntaxColors, Conditional) == 32, "Offset mismatch for FMonologueTemplateSyntaxColors::Conditional");
static_assert(offsetof(FMonologueTemplateSyntaxColors, Loop) == 48, "Offset mismatch for FMonologueTemplateSyntaxColors::Loop");
static_assert(offsetof(FMonologueTemplateSyntaxColors, Error) == 64, "Offset mismatch for FMonologueTemplateSyntaxColors::Error");

// /Script/Monologue.MonologueTopicalEvent
// Kind: ScriptStruct; super: none
struct FMonologueTopicalEvent
{
public:
    std::uint8_t Event[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConversationCue[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    float Significance; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t Tags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMonologueTopicalEvent, Event) == 0, "Offset mismatch for FMonologueTopicalEvent::Event");
static_assert(offsetof(FMonologueTopicalEvent, ConversationCue) == 16, "Offset mismatch for FMonologueTopicalEvent::ConversationCue");
static_assert(offsetof(FMonologueTopicalEvent, Significance) == 32, "Offset mismatch for FMonologueTopicalEvent::Significance");
static_assert(offsetof(FMonologueTopicalEvent, Tags) == 40, "Offset mismatch for FMonologueTopicalEvent::Tags");

// /Script/Monologue.MonologueVerbatimEvent
// Kind: ScriptStruct; super: none
struct FMonologueVerbatimEvent
{
public:
    std::uint8_t Event[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    float Significance; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMonologueVerbatimEvent, Event) == 0, "Offset mismatch for FMonologueVerbatimEvent::Event");
static_assert(offsetof(FMonologueVerbatimEvent, Significance) == 16, "Offset mismatch for FMonologueVerbatimEvent::Significance");

// /Script/Monologue.AsyncAction_MonologueGenerateResponse
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_MonologueGenerateResponse
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_MonologueGenerateResponse, OnSuccess) == 48, "Offset mismatch for UAsyncAction_MonologueGenerateResponse::OnSuccess");
static_assert(offsetof(UAsyncAction_MonologueGenerateResponse, OnFailure) == 64, "Offset mismatch for UAsyncAction_MonologueGenerateResponse::OnFailure");

// /Script/Monologue.AsyncAction_MonologueGenerateStructuredResponse
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_MonologueGenerateStructuredResponse
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_MonologueGenerateStructuredResponse, OnSuccess) == 48, "Offset mismatch for UAsyncAction_MonologueGenerateStructuredResponse::OnSuccess");
static_assert(offsetof(UAsyncAction_MonologueGenerateStructuredResponse, OnFailure) == 64, "Offset mismatch for UAsyncAction_MonologueGenerateStructuredResponse::OnFailure");

// /Script/Monologue.GameFeatureAction_AddMonologueFacts
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddMonologueFacts
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DelegateEngineFactsToAdd[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    TMap<void*, void*> EngineFactsToAdd; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t bAddFactsInEditor; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddFactsOnClient; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddFactsOnServer; // 0x005A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameFeatureAction_AddMonologueFacts, DelegateEngineFactsToAdd) == 40, "Offset mismatch for UGameFeatureAction_AddMonologueFacts::DelegateEngineFactsToAdd");
static_assert(offsetof(UGameFeatureAction_AddMonologueFacts, EngineFactsToAdd) == 72, "Offset mismatch for UGameFeatureAction_AddMonologueFacts::EngineFactsToAdd");
static_assert(offsetof(UGameFeatureAction_AddMonologueFacts, bAddFactsInEditor) == 88, "Offset mismatch for UGameFeatureAction_AddMonologueFacts::bAddFactsInEditor");
static_assert(offsetof(UGameFeatureAction_AddMonologueFacts, bAddFactsOnClient) == 89, "Offset mismatch for UGameFeatureAction_AddMonologueFacts::bAddFactsOnClient");
static_assert(offsetof(UGameFeatureAction_AddMonologueFacts, bAddFactsOnServer) == 90, "Offset mismatch for UGameFeatureAction_AddMonologueFacts::bAddFactsOnServer");

// /Script/Monologue.GameFeatureAction_SetMonologueDefaultChatCompleter
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_SetMonologueDefaultChatCompleter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DefaultChatCompleterClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bSetChatCompleterOnClient; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetChatCompleterOnServer; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    void* GFASetChatCompleter; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameFeatureAction_SetMonologueDefaultChatCompleter, DefaultChatCompleterClass) == 40, "Offset mismatch for UGameFeatureAction_SetMonologueDefaultChatCompleter::DefaultChatCompleterClass");
static_assert(offsetof(UGameFeatureAction_SetMonologueDefaultChatCompleter, bSetChatCompleterOnClient) == 72, "Offset mismatch for UGameFeatureAction_SetMonologueDefaultChatCompleter::bSetChatCompleterOnClient");
static_assert(offsetof(UGameFeatureAction_SetMonologueDefaultChatCompleter, bSetChatCompleterOnServer) == 73, "Offset mismatch for UGameFeatureAction_SetMonologueDefaultChatCompleter::bSetChatCompleterOnServer");
static_assert(offsetof(UGameFeatureAction_SetMonologueDefaultChatCompleter, GFASetChatCompleter) == 80, "Offset mismatch for UGameFeatureAction_SetMonologueDefaultChatCompleter::GFASetChatCompleter");

// /Script/Monologue.MonologueCharacterDefinition
// Kind: Class; super: DataAsset
class UMonologueCharacterDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Name[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t Backstory[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t GameplayTags[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologueCharacterDefinition, Name) == 40, "Offset mismatch for UMonologueCharacterDefinition::Name");
static_assert(offsetof(UMonologueCharacterDefinition, Backstory) == 56, "Offset mismatch for UMonologueCharacterDefinition::Backstory");
static_assert(offsetof(UMonologueCharacterDefinition, GameplayTags) == 72, "Offset mismatch for UMonologueCharacterDefinition::GameplayTags");

// /Script/Monologue.MonologueCheatManager
// Kind: Class; super: CheatManagerExtension
class UMonologueCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Monologue.MonologueComponent
// Kind: Class; super: ActorComponent
class UMonologueComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnEventPerceived; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPastEventPerceived; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventForgotten; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventRevised; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bPerceiveEvents; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    std::uint8_t EventInterests[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    float MinPerceivableEventSignificance; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float MinMemorableEventSignificance; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float EventSignificanceDecayRateScale; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x012C
    std::uint8_t SmartObjectSearchExtent[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    FMulticastInlineDelegate OnAnalysisCompleted; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FName SubjectName; // 0x0158 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0160
    TArray<void*> PerceivedEvents; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EventAnalyses; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMonologueComponent, OnEventPerceived) == 200, "Offset mismatch for UMonologueComponent::OnEventPerceived");
static_assert(offsetof(UMonologueComponent, OnPastEventPerceived) == 216, "Offset mismatch for UMonologueComponent::OnPastEventPerceived");
static_assert(offsetof(UMonologueComponent, OnEventForgotten) == 232, "Offset mismatch for UMonologueComponent::OnEventForgotten");
static_assert(offsetof(UMonologueComponent, OnEventRevised) == 248, "Offset mismatch for UMonologueComponent::OnEventRevised");
static_assert(offsetof(UMonologueComponent, bPerceiveEvents) == 264, "Offset mismatch for UMonologueComponent::bPerceiveEvents");
static_assert(offsetof(UMonologueComponent, EventInterests) == 272, "Offset mismatch for UMonologueComponent::EventInterests");
static_assert(offsetof(UMonologueComponent, MinPerceivableEventSignificance) == 288, "Offset mismatch for UMonologueComponent::MinPerceivableEventSignificance");
static_assert(offsetof(UMonologueComponent, MinMemorableEventSignificance) == 292, "Offset mismatch for UMonologueComponent::MinMemorableEventSignificance");
static_assert(offsetof(UMonologueComponent, EventSignificanceDecayRateScale) == 296, "Offset mismatch for UMonologueComponent::EventSignificanceDecayRateScale");
static_assert(offsetof(UMonologueComponent, SmartObjectSearchExtent) == 304, "Offset mismatch for UMonologueComponent::SmartObjectSearchExtent");
static_assert(offsetof(UMonologueComponent, OnAnalysisCompleted) == 328, "Offset mismatch for UMonologueComponent::OnAnalysisCompleted");
static_assert(offsetof(UMonologueComponent, SubjectName) == 344, "Offset mismatch for UMonologueComponent::SubjectName");
static_assert(offsetof(UMonologueComponent, PerceivedEvents) == 368, "Offset mismatch for UMonologueComponent::PerceivedEvents");
static_assert(offsetof(UMonologueComponent, EventAnalyses) == 384, "Offset mismatch for UMonologueComponent::EventAnalyses");

// /Script/Monologue.MonologueContextVolume
// Kind: Class; super: Volume
class UMonologueContextVolume
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    TArray<void*> Contexts; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMonologueContextVolume, Contexts) == 680, "Offset mismatch for UMonologueContextVolume::Contexts");

// /Script/Monologue.MonologueConversation
// Kind: Class; super: Object
class UMonologueConversation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Monologue.MonologueDeveloperSettings
// Kind: Class; super: DeveloperSettings
class UMonologueDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ChatCompletionClassOverride[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologueDeveloperSettings, ChatCompletionClassOverride) == 48, "Offset mismatch for UMonologueDeveloperSettings::ChatCompletionClassOverride");

// /Script/Monologue.MonologueEngineSubsystem
// Kind: Class; super: EngineSubsystem
class UMonologueEngineSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* DefaultChatCompleter; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ChatCompleters; // 0x0050 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> EngineFacts; // 0x0060 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> FactsRegistryOverrides; // 0x0070 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMonologueEngineSubsystem, DefaultChatCompleter) == 72, "Offset mismatch for UMonologueEngineSubsystem::DefaultChatCompleter");
static_assert(offsetof(UMonologueEngineSubsystem, ChatCompleters) == 80, "Offset mismatch for UMonologueEngineSubsystem::ChatCompleters");
static_assert(offsetof(UMonologueEngineSubsystem, EngineFacts) == 96, "Offset mismatch for UMonologueEngineSubsystem::EngineFacts");
static_assert(offsetof(UMonologueEngineSubsystem, FactsRegistryOverrides) == 112, "Offset mismatch for UMonologueEngineSubsystem::FactsRegistryOverrides");

// /Script/Monologue.MonologueEventDescriber
// Kind: Class; super: PrimaryDataAsset
class UMonologueEventDescriber
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAutoRegister; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* DescribedEventType; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DescribedEventTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologueEventDescriber, bAutoRegister) == 40, "Offset mismatch for UMonologueEventDescriber::bAutoRegister");
static_assert(offsetof(UMonologueEventDescriber, DescribedEventType) == 48, "Offset mismatch for UMonologueEventDescriber::DescribedEventType");
static_assert(offsetof(UMonologueEventDescriber, DescribedEventTags) == 56, "Offset mismatch for UMonologueEventDescriber::DescribedEventTags");

// /Script/Monologue.MonologueEventSummaryDescriber
// Kind: Class; super: MonologueEventDescriber
class UMonologueEventSummaryDescriber
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAutoRegister; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* DescribedEventType; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DescribedEventTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologueEventSummaryDescriber, bAutoRegister) == 40, "Offset mismatch for UMonologueEventSummaryDescriber::bAutoRegister");
static_assert(offsetof(UMonologueEventSummaryDescriber, DescribedEventType) == 48, "Offset mismatch for UMonologueEventSummaryDescriber::DescribedEventType");
static_assert(offsetof(UMonologueEventSummaryDescriber, DescribedEventTags) == 56, "Offset mismatch for UMonologueEventSummaryDescriber::DescribedEventTags");

// /Script/Monologue.MonologueFactualizedEventDescriber
// Kind: Class; super: MonologueEventDescriber
class UMonologueFactualizedEventDescriber
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAutoRegister; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* DescribedEventType; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DescribedEventTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologueFactualizedEventDescriber, bAutoRegister) == 40, "Offset mismatch for UMonologueFactualizedEventDescriber::bAutoRegister");
static_assert(offsetof(UMonologueFactualizedEventDescriber, DescribedEventType) == 48, "Offset mismatch for UMonologueFactualizedEventDescriber::DescribedEventType");
static_assert(offsetof(UMonologueFactualizedEventDescriber, DescribedEventTags) == 56, "Offset mismatch for UMonologueFactualizedEventDescriber::DescribedEventTags");

// /Script/Monologue.MonologueFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMonologueFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Monologue.MonologuePlaceholderEventDescriber
// Kind: Class; super: MonologueEventDescriber
class UMonologuePlaceholderEventDescriber
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAutoRegister; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* DescribedEventType; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DescribedEventTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologuePlaceholderEventDescriber, bAutoRegister) == 40, "Offset mismatch for UMonologuePlaceholderEventDescriber::bAutoRegister");
static_assert(offsetof(UMonologuePlaceholderEventDescriber, DescribedEventType) == 48, "Offset mismatch for UMonologuePlaceholderEventDescriber::DescribedEventType");
static_assert(offsetof(UMonologuePlaceholderEventDescriber, DescribedEventTags) == 56, "Offset mismatch for UMonologuePlaceholderEventDescriber::DescribedEventTags");

// /Script/Monologue.MonologuePlayerDialogueEventDescriber
// Kind: Class; super: MonologueEventDescriber
class UMonologuePlayerDialogueEventDescriber
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    float ObservedDialogueEventSignificance; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float DefaultHearingRange; // 0x005C (Size: 0x4, Type: FloatProperty)
    FText EventDescriptionTemplate; // 0x0060 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UMonologuePlayerDialogueEventDescriber, ObservedDialogueEventSignificance) == 88, "Offset mismatch for UMonologuePlayerDialogueEventDescriber::ObservedDialogueEventSignificance");
static_assert(offsetof(UMonologuePlayerDialogueEventDescriber, DefaultHearingRange) == 92, "Offset mismatch for UMonologuePlayerDialogueEventDescriber::DefaultHearingRange");
static_assert(offsetof(UMonologuePlayerDialogueEventDescriber, EventDescriptionTemplate) == 96, "Offset mismatch for UMonologuePlayerDialogueEventDescriber::EventDescriptionTemplate");

// /Script/Monologue.MonologuePreferredNameInterface
// Kind: Class; super: Interface
class UMonologuePreferredNameInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Monologue.MonologuePromptDataAsset
// Kind: Class; super: PrimaryDataAsset
class UMonologuePromptDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Prompt[0x98]; // 0x0028 (Size: 0x98, Type: StructProperty)
    std::uint8_t bStripFromClientBuilds; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMonologuePromptDataAsset, Prompt) == 40, "Offset mismatch for UMonologuePromptDataAsset::Prompt");
static_assert(offsetof(UMonologuePromptDataAsset, bStripFromClientBuilds) == 192, "Offset mismatch for UMonologuePromptDataAsset::bStripFromClientBuilds");

// /Script/Monologue.MonologueSettings
// Kind: Class; super: DeveloperSettings
class UMonologueSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultChatCompletionClass[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultFactsDataRegistryType[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologueSettings, DefaultChatCompletionClass) == 48, "Offset mismatch for UMonologueSettings::DefaultChatCompletionClass");
static_assert(offsetof(UMonologueSettings, DefaultFactsDataRegistryType) == 72, "Offset mismatch for UMonologueSettings::DefaultFactsDataRegistryType");

// /Script/Monologue.MonologueSubjectInterface
// Kind: Class; super: Interface
class UMonologueSubjectInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Monologue.MonologueTestPawn
// Kind: Class; super: Character
class UMonologueTestPawn
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t FactName[0x4]; // 0x0630 (Size: 0x4, Type: NameProperty)
    std::uint8_t SubjectName[0x4]; // 0x0634 (Size: 0x4, Type: NameProperty)
    void* MonologueComponent; // 0x0638 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMonologueTestPawn, FactName) == 1584, "Offset mismatch for UMonologueTestPawn::FactName");
static_assert(offsetof(UMonologueTestPawn, SubjectName) == 1588, "Offset mismatch for UMonologueTestPawn::SubjectName");
static_assert(offsetof(UMonologueTestPawn, MonologueComponent) == 1592, "Offset mismatch for UMonologueTestPawn::MonologueComponent");

// /Script/Monologue.MonologueTopicalEventDescriber
// Kind: Class; super: MonologueEventDescriber
class UMonologueTopicalEventDescriber
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAutoRegister; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* DescribedEventType; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DescribedEventTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologueTopicalEventDescriber, bAutoRegister) == 40, "Offset mismatch for UMonologueTopicalEventDescriber::bAutoRegister");
static_assert(offsetof(UMonologueTopicalEventDescriber, DescribedEventType) == 48, "Offset mismatch for UMonologueTopicalEventDescriber::DescribedEventType");
static_assert(offsetof(UMonologueTopicalEventDescriber, DescribedEventTags) == 56, "Offset mismatch for UMonologueTopicalEventDescriber::DescribedEventTags");

// /Script/Monologue.MonologueVerbatimEventDescriber
// Kind: Class; super: MonologueEventDescriber
class UMonologueVerbatimEventDescriber
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAutoRegister; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* DescribedEventType; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DescribedEventTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologueVerbatimEventDescriber, bAutoRegister) == 40, "Offset mismatch for UMonologueVerbatimEventDescriber::bAutoRegister");
static_assert(offsetof(UMonologueVerbatimEventDescriber, DescribedEventType) == 48, "Offset mismatch for UMonologueVerbatimEventDescriber::DescribedEventType");
static_assert(offsetof(UMonologueVerbatimEventDescriber, DescribedEventTags) == 56, "Offset mismatch for UMonologueVerbatimEventDescriber::DescribedEventTags");

// /Script/Monologue.MonologueWorldDefinition
// Kind: Class; super: DataAsset
class UMonologueWorldDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Description[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t GameplayTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMonologueWorldDefinition, Description) == 40, "Offset mismatch for UMonologueWorldDefinition::Description");
static_assert(offsetof(UMonologueWorldDefinition, GameplayTags) == 56, "Offset mismatch for UMonologueWorldDefinition::GameplayTags");

// /Script/Monologue.MonologueWorldFactsSubsystemBase
// Kind: Class; super: WorldSubsystem
class UMonologueWorldFactsSubsystemBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Monologue.MonologueWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UMonologueWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TMap<void*, void*> WorldFacts; // 0x0080 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ActiveConversationsByCharacter; // 0x0090 (Size: 0x10, Type: MapProperty)
    TArray<void*> ActiveConversations; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExpiredConversations; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> EventDescribers; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TArray<void*> MonologueComponents; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMonologueWorldSubsystem, WorldFacts) == 128, "Offset mismatch for UMonologueWorldSubsystem::WorldFacts");
static_assert(offsetof(UMonologueWorldSubsystem, ActiveConversationsByCharacter) == 144, "Offset mismatch for UMonologueWorldSubsystem::ActiveConversationsByCharacter");
static_assert(offsetof(UMonologueWorldSubsystem, ActiveConversations) == 160, "Offset mismatch for UMonologueWorldSubsystem::ActiveConversations");
static_assert(offsetof(UMonologueWorldSubsystem, ExpiredConversations) == 176, "Offset mismatch for UMonologueWorldSubsystem::ExpiredConversations");
static_assert(offsetof(UMonologueWorldSubsystem, EventDescribers) == 192, "Offset mismatch for UMonologueWorldSubsystem::EventDescribers");
static_assert(offsetof(UMonologueWorldSubsystem, MonologueComponents) == 208, "Offset mismatch for UMonologueWorldSubsystem::MonologueComponents");
