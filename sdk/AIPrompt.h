/**
 * decamp dumper generated SDK
 * Package: /Script/AIPrompt
 */
#pragma once
#include "Basic.h"

// /Script/AIPrompt.AIPromptErrorMessage
// Kind: ScriptStruct; super: TableRowBase
struct FAIPromptErrorMessage
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ErrorType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    FText ErrorMessage; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FAIPromptErrorMessage, ErrorType) == 8, "Offset mismatch for FAIPromptErrorMessage::ErrorType");
static_assert(offsetof(FAIPromptErrorMessage, ErrorMessage) == 16, "Offset mismatch for FAIPromptErrorMessage::ErrorMessage");

// /Script/AIPrompt.CharacterPersonaAssetBinding
// Kind: ScriptStruct; super: TableRowBase
struct FCharacterPersonaAssetBinding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CharacterPersonaAsset[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bOverrideAssetData; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFinalPersonaDataOverride; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    std::uint8_t VoiceModelOverride[0x20]; // 0x0030 (Size: 0x20, Type: SoftClassProperty)
    FText CharacterPromptOverride; // 0x0050 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FCharacterPersonaAssetBinding, CharacterPersonaAsset) == 8, "Offset mismatch for FCharacterPersonaAssetBinding::CharacterPersonaAsset");
static_assert(offsetof(FCharacterPersonaAssetBinding, bOverrideAssetData) == 40, "Offset mismatch for FCharacterPersonaAssetBinding::bOverrideAssetData");
static_assert(offsetof(FCharacterPersonaAssetBinding, bIsFinalPersonaDataOverride) == 41, "Offset mismatch for FCharacterPersonaAssetBinding::bIsFinalPersonaDataOverride");
static_assert(offsetof(FCharacterPersonaAssetBinding, VoiceModelOverride) == 48, "Offset mismatch for FCharacterPersonaAssetBinding::VoiceModelOverride");
static_assert(offsetof(FCharacterPersonaAssetBinding, CharacterPromptOverride) == 80, "Offset mismatch for FCharacterPersonaAssetBinding::CharacterPromptOverride");

// /Script/AIPrompt.LLMFactTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FLLMFactTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t FactKnowledge; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t FactProperty[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    FText FactDescription; // 0x0020 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FLLMFactTableRow, FactKnowledge) == 8, "Offset mismatch for FLLMFactTableRow::FactKnowledge");
static_assert(offsetof(FLLMFactTableRow, FactProperty) == 16, "Offset mismatch for FLLMFactTableRow::FactProperty");
static_assert(offsetof(FLLMFactTableRow, FactDescription) == 32, "Offset mismatch for FLLMFactTableRow::FactDescription");

// /Script/AIPrompt.LLMFacts
// Kind: ScriptStruct; super: none
struct FLLMFacts
{
public:
    std::uint8_t RegistryType[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t KnowledgeType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TMap<void*, void*> FactMap; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FLLMFacts, RegistryType) == 0, "Offset mismatch for FLLMFacts::RegistryType");
static_assert(offsetof(FLLMFacts, KnowledgeType) == 4, "Offset mismatch for FLLMFacts::KnowledgeType");
static_assert(offsetof(FLLMFacts, FactMap) == 8, "Offset mismatch for FLLMFacts::FactMap");

// /Script/AIPrompt.LLMPersona
// Kind: ScriptStruct; super: none
struct FLLMPersona
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bShowName; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreviewAudioRange; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0012
    std::uint8_t Icon[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Color[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    float HearingRange; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Volume; // 0x004C (Size: 0x4, Type: FloatProperty)
    void* Attenuation; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Voice[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t PersonaFacts[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLLMPersona, Name) == 0, "Offset mismatch for FLLMPersona::Name");
static_assert(offsetof(FLLMPersona, bShowName) == 16, "Offset mismatch for FLLMPersona::bShowName");
static_assert(offsetof(FLLMPersona, bPreviewAudioRange) == 17, "Offset mismatch for FLLMPersona::bPreviewAudioRange");
static_assert(offsetof(FLLMPersona, Icon) == 24, "Offset mismatch for FLLMPersona::Icon");
static_assert(offsetof(FLLMPersona, Color) == 56, "Offset mismatch for FLLMPersona::Color");
static_assert(offsetof(FLLMPersona, HearingRange) == 72, "Offset mismatch for FLLMPersona::HearingRange");
static_assert(offsetof(FLLMPersona, Volume) == 76, "Offset mismatch for FLLMPersona::Volume");
static_assert(offsetof(FLLMPersona, Attenuation) == 80, "Offset mismatch for FLLMPersona::Attenuation");
static_assert(offsetof(FLLMPersona, Voice) == 88, "Offset mismatch for FLLMPersona::Voice");
static_assert(offsetof(FLLMPersona, PersonaFacts) == 96, "Offset mismatch for FLLMPersona::PersonaFacts");

// /Script/AIPrompt.LLMVoicePreviewMapping
// Kind: ScriptStruct; super: TableRowBase
struct FLLMVoicePreviewMapping
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName VoiceID; // 0x0008 (Size: 0x8, Type: NameProperty)
    void* VoicePreviewSound; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLLMVoicePreviewMapping, VoiceID) == 8, "Offset mismatch for FLLMVoicePreviewMapping::VoiceID");
static_assert(offsetof(FLLMVoicePreviewMapping, VoicePreviewSound) == 16, "Offset mismatch for FLLMVoicePreviewMapping::VoicePreviewSound");

// /Script/AIPrompt.PersonaConversationUI
// Kind: ScriptStruct; super: none
struct FPersonaConversationUI
{
public:
    void* PersonaViewModel; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SubtitleViewModel; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowPersonaName; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHideStatusWhenOutOfRange; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInHearingRange; // 0x0012 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPersonaConversationUI, PersonaViewModel) == 0, "Offset mismatch for FPersonaConversationUI::PersonaViewModel");
static_assert(offsetof(FPersonaConversationUI, SubtitleViewModel) == 8, "Offset mismatch for FPersonaConversationUI::SubtitleViewModel");
static_assert(offsetof(FPersonaConversationUI, bShowPersonaName) == 16, "Offset mismatch for FPersonaConversationUI::bShowPersonaName");
static_assert(offsetof(FPersonaConversationUI, bHideStatusWhenOutOfRange) == 17, "Offset mismatch for FPersonaConversationUI::bHideStatusWhenOutOfRange");
static_assert(offsetof(FPersonaConversationUI, bInHearingRange) == 18, "Offset mismatch for FPersonaConversationUI::bInHearingRange");

// /Script/AIPrompt.PersonaEvent_UIAdded
// Kind: ScriptStruct; super: none
struct FPersonaEvent_UIAdded
{
public:
    std::uint8_t CustomUIWidget[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomSubtitleWidget[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    void* PersonaViewModel; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* SubtitleViewModel; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HorizontalAlignment; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0052
    float UIWidgetXOffset; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float UIWidgetYOffset; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UserWidgetLayoutType; // 0x005C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsExperimental; // 0x005D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPersonaEvent_UIAdded, CustomUIWidget) == 0, "Offset mismatch for FPersonaEvent_UIAdded::CustomUIWidget");
static_assert(offsetof(FPersonaEvent_UIAdded, CustomSubtitleWidget) == 32, "Offset mismatch for FPersonaEvent_UIAdded::CustomSubtitleWidget");
static_assert(offsetof(FPersonaEvent_UIAdded, PersonaViewModel) == 64, "Offset mismatch for FPersonaEvent_UIAdded::PersonaViewModel");
static_assert(offsetof(FPersonaEvent_UIAdded, SubtitleViewModel) == 72, "Offset mismatch for FPersonaEvent_UIAdded::SubtitleViewModel");
static_assert(offsetof(FPersonaEvent_UIAdded, HorizontalAlignment) == 80, "Offset mismatch for FPersonaEvent_UIAdded::HorizontalAlignment");
static_assert(offsetof(FPersonaEvent_UIAdded, VerticalAlignment) == 81, "Offset mismatch for FPersonaEvent_UIAdded::VerticalAlignment");
static_assert(offsetof(FPersonaEvent_UIAdded, UIWidgetXOffset) == 84, "Offset mismatch for FPersonaEvent_UIAdded::UIWidgetXOffset");
static_assert(offsetof(FPersonaEvent_UIAdded, UIWidgetYOffset) == 88, "Offset mismatch for FPersonaEvent_UIAdded::UIWidgetYOffset");
static_assert(offsetof(FPersonaEvent_UIAdded, UserWidgetLayoutType) == 92, "Offset mismatch for FPersonaEvent_UIAdded::UserWidgetLayoutType");
static_assert(offsetof(FPersonaEvent_UIAdded, bIsExperimental) == 93, "Offset mismatch for FPersonaEvent_UIAdded::bIsExperimental");

// /Script/AIPrompt.PersonaEvent_UIVisibility
// Kind: ScriptStruct; super: none
struct FPersonaEvent_UIVisibility
{
public:
    std::uint8_t bVisibility; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPersonaEvent_UIVisibility, bVisibility) == 0, "Offset mismatch for FPersonaEvent_UIVisibility::bVisibility");

// /Script/AIPrompt.PersonaLinkedActor
// Kind: ScriptStruct; super: none
struct FPersonaLinkedActor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIPrompt.PersonaOratorAudioParams
// Kind: ScriptStruct; super: none
struct FPersonaOratorAudioParams
{
public:
    std::uint8_t AttenuationPath[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t SoundClassPath[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPersonaOratorAudioParams, AttenuationPath) == 0, "Offset mismatch for FPersonaOratorAudioParams::AttenuationPath");
static_assert(offsetof(FPersonaOratorAudioParams, SoundClassPath) == 24, "Offset mismatch for FPersonaOratorAudioParams::SoundClassPath");

// /Script/AIPrompt.PersonaPendingWidgetEntry
// Kind: ScriptStruct; super: none
struct FPersonaPendingWidgetEntry
{
public:
    std::uint8_t ConversationId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ViewModels[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t Params[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPersonaPendingWidgetEntry, ConversationId) == 0, "Offset mismatch for FPersonaPendingWidgetEntry::ConversationId");
static_assert(offsetof(FPersonaPendingWidgetEntry, ViewModels) == 16, "Offset mismatch for FPersonaPendingWidgetEntry::ViewModels");
static_assert(offsetof(FPersonaPendingWidgetEntry, Params) == 40, "Offset mismatch for FPersonaPendingWidgetEntry::Params");

// /Script/AIPrompt.PersonaPlayerStatus
// Kind: ScriptStruct; super: none
struct FPersonaPlayerStatus
{
public:
    std::uint8_t bInputStateEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInHearingRange; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPersonaPlayerStatus, bInputStateEnabled) == 0, "Offset mismatch for FPersonaPlayerStatus::bInputStateEnabled");
static_assert(offsetof(FPersonaPlayerStatus, bInHearingRange) == 1, "Offset mismatch for FPersonaPlayerStatus::bInHearingRange");

// /Script/AIPrompt.PersonaResponseSchema
// Kind: ScriptStruct; super: none
struct FPersonaResponseSchema
{
public:
    TArray<void*> EventNumbersTriggered; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPersonaResponseSchema, EventNumbersTriggered) == 0, "Offset mismatch for FPersonaResponseSchema::EventNumbersTriggered");

// /Script/AIPrompt.PersonaUIParams
// Kind: ScriptStruct; super: none
struct FPersonaUIParams
{
public:
    FString PersonaName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bShowPersonaName; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t PersonaIcon[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PersonaColor[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t bShowTextOutput; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHideStatusWhenOutOfRange; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowPersonaList; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x004B
    std::uint8_t CustomUIWidget[0x20]; // 0x0050 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomSubtitleWidget[0x20]; // 0x0070 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t HorizontalAlignment; // 0x0090 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0091 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0092
    float UIWidgetXOffset; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float UIWidgetYOffset; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UserWidgetLayoutType; // 0x009C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsExperimental; // 0x009D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPersonaUIParams, PersonaName) == 0, "Offset mismatch for FPersonaUIParams::PersonaName");
static_assert(offsetof(FPersonaUIParams, bShowPersonaName) == 16, "Offset mismatch for FPersonaUIParams::bShowPersonaName");
static_assert(offsetof(FPersonaUIParams, PersonaIcon) == 24, "Offset mismatch for FPersonaUIParams::PersonaIcon");
static_assert(offsetof(FPersonaUIParams, PersonaColor) == 56, "Offset mismatch for FPersonaUIParams::PersonaColor");
static_assert(offsetof(FPersonaUIParams, bShowTextOutput) == 72, "Offset mismatch for FPersonaUIParams::bShowTextOutput");
static_assert(offsetof(FPersonaUIParams, bHideStatusWhenOutOfRange) == 73, "Offset mismatch for FPersonaUIParams::bHideStatusWhenOutOfRange");
static_assert(offsetof(FPersonaUIParams, bShowPersonaList) == 74, "Offset mismatch for FPersonaUIParams::bShowPersonaList");
static_assert(offsetof(FPersonaUIParams, CustomUIWidget) == 80, "Offset mismatch for FPersonaUIParams::CustomUIWidget");
static_assert(offsetof(FPersonaUIParams, CustomSubtitleWidget) == 112, "Offset mismatch for FPersonaUIParams::CustomSubtitleWidget");
static_assert(offsetof(FPersonaUIParams, HorizontalAlignment) == 144, "Offset mismatch for FPersonaUIParams::HorizontalAlignment");
static_assert(offsetof(FPersonaUIParams, VerticalAlignment) == 145, "Offset mismatch for FPersonaUIParams::VerticalAlignment");
static_assert(offsetof(FPersonaUIParams, UIWidgetXOffset) == 148, "Offset mismatch for FPersonaUIParams::UIWidgetXOffset");
static_assert(offsetof(FPersonaUIParams, UIWidgetYOffset) == 152, "Offset mismatch for FPersonaUIParams::UIWidgetYOffset");
static_assert(offsetof(FPersonaUIParams, UserWidgetLayoutType) == 156, "Offset mismatch for FPersonaUIParams::UserWidgetLayoutType");
static_assert(offsetof(FPersonaUIParams, bIsExperimental) == 157, "Offset mismatch for FPersonaUIParams::bIsExperimental");

// /Script/AIPrompt.PersonaUIWidgetLayoutDefinition
// Kind: ScriptStruct; super: none
struct FPersonaUIWidgetLayoutDefinition
{
public:
    void* PersonaViewModel; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SubtitleViewModel; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HorizontalAlignment; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0011 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0012
    float UIWidgetXOffset; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float UIWidgetYOffset; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsExperimental; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t UserWidgetLayoutType; // 0x001D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPersonaUIWidgetLayoutDefinition, PersonaViewModel) == 0, "Offset mismatch for FPersonaUIWidgetLayoutDefinition::PersonaViewModel");
static_assert(offsetof(FPersonaUIWidgetLayoutDefinition, SubtitleViewModel) == 8, "Offset mismatch for FPersonaUIWidgetLayoutDefinition::SubtitleViewModel");
static_assert(offsetof(FPersonaUIWidgetLayoutDefinition, HorizontalAlignment) == 16, "Offset mismatch for FPersonaUIWidgetLayoutDefinition::HorizontalAlignment");
static_assert(offsetof(FPersonaUIWidgetLayoutDefinition, VerticalAlignment) == 17, "Offset mismatch for FPersonaUIWidgetLayoutDefinition::VerticalAlignment");
static_assert(offsetof(FPersonaUIWidgetLayoutDefinition, UIWidgetXOffset) == 20, "Offset mismatch for FPersonaUIWidgetLayoutDefinition::UIWidgetXOffset");
static_assert(offsetof(FPersonaUIWidgetLayoutDefinition, UIWidgetYOffset) == 24, "Offset mismatch for FPersonaUIWidgetLayoutDefinition::UIWidgetYOffset");
static_assert(offsetof(FPersonaUIWidgetLayoutDefinition, bIsExperimental) == 28, "Offset mismatch for FPersonaUIWidgetLayoutDefinition::bIsExperimental");
static_assert(offsetof(FPersonaUIWidgetLayoutDefinition, UserWidgetLayoutType) == 29, "Offset mismatch for FPersonaUIWidgetLayoutDefinition::UserWidgetLayoutType");

// /Script/AIPrompt.Personas
// Kind: ScriptStruct; super: none
struct FPersonas
{
public:
    TArray<void*> Personas; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPersonas, Personas) == 0, "Offset mismatch for FPersonas::Personas");

// /Script/AIPrompt.PromptPropertyDefinition
// Kind: ScriptStruct; super: none
struct FPromptPropertyDefinition
{
public:
    std::uint8_t PropertyId[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t PropertyType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ContainerType; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    FString DisplayName; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPromptPropertyDefinition, PropertyId) == 0, "Offset mismatch for FPromptPropertyDefinition::PropertyId");
static_assert(offsetof(FPromptPropertyDefinition, PropertyType) == 4, "Offset mismatch for FPromptPropertyDefinition::PropertyType");
static_assert(offsetof(FPromptPropertyDefinition, ContainerType) == 5, "Offset mismatch for FPromptPropertyDefinition::ContainerType");
static_assert(offsetof(FPromptPropertyDefinition, DisplayName) == 8, "Offset mismatch for FPromptPropertyDefinition::DisplayName");
static_assert(offsetof(FPromptPropertyDefinition, Description) == 24, "Offset mismatch for FPromptPropertyDefinition::Description");

// /Script/AIPrompt.PromptResultDetails
// Kind: ScriptStruct; super: none
struct FPromptResultDetails
{
public:
    std::uint8_t PersonaName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t PromptTranscription[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t LLMResponse[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t StructName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t StructuredResponse[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t ErrorMessage[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t ErrorDetails[0x10]; // 0x0060 (Size: 0x10, Type: TextProperty)
    std::uint8_t bHasError; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasStructuredResponse; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPromptResultDetails, PersonaName) == 0, "Offset mismatch for FPromptResultDetails::PersonaName");
static_assert(offsetof(FPromptResultDetails, PromptTranscription) == 16, "Offset mismatch for FPromptResultDetails::PromptTranscription");
static_assert(offsetof(FPromptResultDetails, LLMResponse) == 32, "Offset mismatch for FPromptResultDetails::LLMResponse");
static_assert(offsetof(FPromptResultDetails, StructName) == 48, "Offset mismatch for FPromptResultDetails::StructName");
static_assert(offsetof(FPromptResultDetails, StructuredResponse) == 64, "Offset mismatch for FPromptResultDetails::StructuredResponse");
static_assert(offsetof(FPromptResultDetails, ErrorMessage) == 80, "Offset mismatch for FPromptResultDetails::ErrorMessage");
static_assert(offsetof(FPromptResultDetails, ErrorDetails) == 96, "Offset mismatch for FPromptResultDetails::ErrorDetails");
static_assert(offsetof(FPromptResultDetails, bHasError) == 112, "Offset mismatch for FPromptResultDetails::bHasError");
static_assert(offsetof(FPromptResultDetails, bHasStructuredResponse) == 113, "Offset mismatch for FPromptResultDetails::bHasStructuredResponse");

// /Script/AIPrompt.PromptStructDefinition
// Kind: ScriptStruct; super: none
struct FPromptStructDefinition
{
public:
    FString DisplayName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Properties; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    void* Struct; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPromptStructDefinition, DisplayName) == 0, "Offset mismatch for FPromptStructDefinition::DisplayName");
static_assert(offsetof(FPromptStructDefinition, Properties) == 16, "Offset mismatch for FPromptStructDefinition::Properties");
static_assert(offsetof(FPromptStructDefinition, Struct) == 32, "Offset mismatch for FPromptStructDefinition::Struct");

// /Script/AIPrompt.ResponseEventCriteria
// Kind: ScriptStruct; super: none
struct FResponseEventCriteria
{
public:
    FString Criteria; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t ResponseEventID; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FResponseEventCriteria, Criteria) == 0, "Offset mismatch for FResponseEventCriteria::Criteria");
static_assert(offsetof(FResponseEventCriteria, ResponseEventID) == 16, "Offset mismatch for FResponseEventCriteria::ResponseEventID");

// /Script/AIPrompt.UserOptionDefinitionLLMFactsMetaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionLLMFactsMetaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUserOptionDefinitionLLMFactsMetaData, DefaultValue) == 8, "Offset mismatch for FUserOptionDefinitionLLMFactsMetaData::DefaultValue");

// /Script/AIPrompt.UserOptionDefinitionPersonaMetaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionPersonaMetaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUserOptionDefinitionPersonaMetaData, DefaultValue) == 8, "Offset mismatch for FUserOptionDefinitionPersonaMetaData::DefaultValue");

// /Script/AIPrompt.UserOptionDefinitionPersonasMetaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionPersonasMetaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUserOptionDefinitionPersonasMetaData, DefaultValue) == 8, "Offset mismatch for FUserOptionDefinitionPersonasMetaData::DefaultValue");

// /Script/AIPrompt.UserOptionDefinitionResponseEventCriteriaData
// Kind: ScriptStruct; super: UserOptionDefinitionMetaData
struct FUserOptionDefinitionResponseEventCriteriaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUserOptionDefinitionResponseEventCriteriaData, DefaultValue) == 8, "Offset mismatch for FUserOptionDefinitionResponseEventCriteriaData::DefaultValue");

// /Script/AIPrompt.AIPromptOratorInputControllerComponent
// Kind: Class; super: PersonaOratorInputControllerComponent
class UAIPromptOratorInputControllerComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t ActiveConversationID[0x18]; // 0x0278 (Size: 0x18, Type: OptionalProperty)
    void* CachedPlayerController; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0298
    void* AIPromptInputMappingContext; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* PushToTalkAction; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAIPromptOratorInputControllerComponent, ActiveConversationID) == 632, "Offset mismatch for UAIPromptOratorInputControllerComponent::ActiveConversationID");
static_assert(offsetof(UAIPromptOratorInputControllerComponent, CachedPlayerController) == 656, "Offset mismatch for UAIPromptOratorInputControllerComponent::CachedPlayerController");
static_assert(offsetof(UAIPromptOratorInputControllerComponent, AIPromptInputMappingContext) == 672, "Offset mismatch for UAIPromptOratorInputControllerComponent::AIPromptInputMappingContext");
static_assert(offsetof(UAIPromptOratorInputControllerComponent, PushToTalkAction) == 680, "Offset mismatch for UAIPromptOratorInputControllerComponent::PushToTalkAction");

// /Script/AIPrompt.AIPromptSubtitleViewModel
// Kind: Class; super: MVVMViewModelBase
class UAIPromptSubtitleViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Text[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t Show; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AudioPlayback; // 0x0079 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAIPromptSubtitleViewModel, Text) == 104, "Offset mismatch for UAIPromptSubtitleViewModel::Text");
static_assert(offsetof(UAIPromptSubtitleViewModel, Show) == 120, "Offset mismatch for UAIPromptSubtitleViewModel::Show");
static_assert(offsetof(UAIPromptSubtitleViewModel, AudioPlayback) == 121, "Offset mismatch for UAIPromptSubtitleViewModel::AudioPlayback");

// /Script/AIPrompt.CharacterPersonaAsset
// Kind: Class; super: DataAsset
class UCharacterPersonaAsset
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* VoiceModel; // 0x0038 (Size: 0x8, Type: ClassProperty)
    void* CharacterPrompt; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsFinalPersonaData; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCharacterPersonaAsset, VoiceModel) == 56, "Offset mismatch for UCharacterPersonaAsset::VoiceModel");
static_assert(offsetof(UCharacterPersonaAsset, CharacterPrompt) == 64, "Offset mismatch for UCharacterPersonaAsset::CharacterPrompt");
static_assert(offsetof(UCharacterPersonaAsset, bIsFinalPersonaData) == 72, "Offset mismatch for UCharacterPersonaAsset::bIsFinalPersonaData");

// /Script/AIPrompt.CharacterPersonaAssetBindingDataTable
// Kind: Class; super: DataTable
class UCharacterPersonaAssetBindingDataTable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* RowStruct; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0030
    std::uint8_t bIgnoreExtraFields; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bIgnoreMissingFields (shared storage)
    // 0x0040 BoolProperty bPreserveExistingValues (shared storage)
    // 0x0040 BoolProperty bStripFromClientBuilds (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    FString ImportKeyField; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UCharacterPersonaAssetBindingDataTable, RowStruct) == 40, "Offset mismatch for UCharacterPersonaAssetBindingDataTable::RowStruct");
static_assert(offsetof(UCharacterPersonaAssetBindingDataTable, bIgnoreExtraFields) == 64, "Offset mismatch for UCharacterPersonaAssetBindingDataTable::bIgnoreExtraFields");
static_assert(offsetof(UCharacterPersonaAssetBindingDataTable, ImportKeyField) == 72, "Offset mismatch for UCharacterPersonaAssetBindingDataTable::ImportKeyField");

// /Script/AIPrompt.ConversationTargetWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UConversationTargetWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TArray<void*> Conversations; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UConversationTargetWorldSubsystem, Conversations) == 112, "Offset mismatch for UConversationTargetWorldSubsystem::Conversations");

// /Script/AIPrompt.FortAIPromptContainerBase
// Kind: Class; super: UserWidget
class UFortAIPromptContainerBase
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAIPromptContainerBase, ColorAndOpacity) == 416, "Offset mismatch for UFortAIPromptContainerBase::ColorAndOpacity");
static_assert(offsetof(UFortAIPromptContainerBase, ColorAndOpacityDelegate) == 432, "Offset mismatch for UFortAIPromptContainerBase::ColorAndOpacityDelegate");
static_assert(offsetof(UFortAIPromptContainerBase, ForegroundColor) == 444, "Offset mismatch for UFortAIPromptContainerBase::ForegroundColor");
static_assert(offsetof(UFortAIPromptContainerBase, ForegroundColorDelegate) == 464, "Offset mismatch for UFortAIPromptContainerBase::ForegroundColorDelegate");
static_assert(offsetof(UFortAIPromptContainerBase, OnVisibilityChanged) == 480, "Offset mismatch for UFortAIPromptContainerBase::OnVisibilityChanged");
static_assert(offsetof(UFortAIPromptContainerBase, Padding) == 544, "Offset mismatch for UFortAIPromptContainerBase::Padding");
static_assert(offsetof(UFortAIPromptContainerBase, Priority) == 560, "Offset mismatch for UFortAIPromptContainerBase::Priority");
static_assert(offsetof(UFortAIPromptContainerBase, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UFortAIPromptContainerBase::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UFortAIPromptContainerBase, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UFortAIPromptContainerBase::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UFortAIPromptContainerBase, ActiveSequencePlayers) == 584, "Offset mismatch for UFortAIPromptContainerBase::ActiveSequencePlayers");
static_assert(offsetof(UFortAIPromptContainerBase, AnimationTickManager) == 600, "Offset mismatch for UFortAIPromptContainerBase::AnimationTickManager");
static_assert(offsetof(UFortAIPromptContainerBase, StoppedSequencePlayers) == 608, "Offset mismatch for UFortAIPromptContainerBase::StoppedSequencePlayers");
static_assert(offsetof(UFortAIPromptContainerBase, NamedSlotBindings) == 648, "Offset mismatch for UFortAIPromptContainerBase::NamedSlotBindings");
static_assert(offsetof(UFortAIPromptContainerBase, Extensions) == 664, "Offset mismatch for UFortAIPromptContainerBase::Extensions");
static_assert(offsetof(UFortAIPromptContainerBase, WidgetTree) == 680, "Offset mismatch for UFortAIPromptContainerBase::WidgetTree");
static_assert(offsetof(UFortAIPromptContainerBase, bHasScriptImplementedPaint) == 688, "Offset mismatch for UFortAIPromptContainerBase::bHasScriptImplementedPaint");
static_assert(offsetof(UFortAIPromptContainerBase, TickFrequency) == 712, "Offset mismatch for UFortAIPromptContainerBase::TickFrequency");
static_assert(offsetof(UFortAIPromptContainerBase, DesiredFocusWidget) == 716, "Offset mismatch for UFortAIPromptContainerBase::DesiredFocusWidget");
static_assert(offsetof(UFortAIPromptContainerBase, InputComponent) == 728, "Offset mismatch for UFortAIPromptContainerBase::InputComponent");
static_assert(offsetof(UFortAIPromptContainerBase, AnimationCallbacks) == 736, "Offset mismatch for UFortAIPromptContainerBase::AnimationCallbacks");

// /Script/AIPrompt.FortPersonaListEntry
// Kind: Class; super: Object
class UFortPersonaListEntry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Icon; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Color[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPersonaListEntry, Icon) == 40, "Offset mismatch for UFortPersonaListEntry::Icon");
static_assert(offsetof(UFortPersonaListEntry, Color) == 48, "Offset mismatch for UFortPersonaListEntry::Color");

// /Script/AIPrompt.LLMConversation
// Kind: Class; super: LLMPersonaConversationComponent
class ULLMConversation
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    FMulticastInlineDelegate OnResponseSuccess; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPersonaUtteranceStarted; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPersonaUtteranceStopped; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPersonaUtteranceCancelled; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* MonologuePawnClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ChatCompletionSafetySettings[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    void* CharacterPersonaAssetBindings; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* PersonaVoiceSoundClass; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* PersonaUIComponentClass; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    void* CreativeRegisteredPlayersManagerComponent; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConversationId[0x28]; // 0x00B8 (Size: 0x28, Type: StructProperty)
    FMulticastInlineDelegate OnPersonaCriteriaEvaluatedTrue; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00F0
    TMap<void*, void*> CachedPlayerSessionMap; // 0x0100 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x90]; // 0x0110
    FString DefaultMonologuePawnClass; // 0x01A0 (Size: 0x10, Type: StrProperty)
    FString DefaultPersonaUIComponentClass; // 0x01B0 (Size: 0x10, Type: StrProperty)
    FString DefaultPersonaVoiceSoundClass; // 0x01C0 (Size: 0x10, Type: StrProperty)
    FString DefaultCharacterPersonaAssetBindings; // 0x01D0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(ULLMConversation, OnResponseSuccess) == 64, "Offset mismatch for ULLMConversation::OnResponseSuccess");
static_assert(offsetof(ULLMConversation, OnPersonaUtteranceStarted) == 80, "Offset mismatch for ULLMConversation::OnPersonaUtteranceStarted");
static_assert(offsetof(ULLMConversation, OnPersonaUtteranceStopped) == 96, "Offset mismatch for ULLMConversation::OnPersonaUtteranceStopped");
static_assert(offsetof(ULLMConversation, OnPersonaUtteranceCancelled) == 112, "Offset mismatch for ULLMConversation::OnPersonaUtteranceCancelled");
static_assert(offsetof(ULLMConversation, MonologuePawnClass) == 128, "Offset mismatch for ULLMConversation::MonologuePawnClass");
static_assert(offsetof(ULLMConversation, ChatCompletionSafetySettings) == 136, "Offset mismatch for ULLMConversation::ChatCompletionSafetySettings");
static_assert(offsetof(ULLMConversation, CharacterPersonaAssetBindings) == 152, "Offset mismatch for ULLMConversation::CharacterPersonaAssetBindings");
static_assert(offsetof(ULLMConversation, PersonaVoiceSoundClass) == 160, "Offset mismatch for ULLMConversation::PersonaVoiceSoundClass");
static_assert(offsetof(ULLMConversation, PersonaUIComponentClass) == 168, "Offset mismatch for ULLMConversation::PersonaUIComponentClass");
static_assert(offsetof(ULLMConversation, CreativeRegisteredPlayersManagerComponent) == 176, "Offset mismatch for ULLMConversation::CreativeRegisteredPlayersManagerComponent");
static_assert(offsetof(ULLMConversation, ConversationId) == 184, "Offset mismatch for ULLMConversation::ConversationId");
static_assert(offsetof(ULLMConversation, OnPersonaCriteriaEvaluatedTrue) == 224, "Offset mismatch for ULLMConversation::OnPersonaCriteriaEvaluatedTrue");
static_assert(offsetof(ULLMConversation, CachedPlayerSessionMap) == 256, "Offset mismatch for ULLMConversation::CachedPlayerSessionMap");
static_assert(offsetof(ULLMConversation, DefaultMonologuePawnClass) == 416, "Offset mismatch for ULLMConversation::DefaultMonologuePawnClass");
static_assert(offsetof(ULLMConversation, DefaultPersonaUIComponentClass) == 432, "Offset mismatch for ULLMConversation::DefaultPersonaUIComponentClass");
static_assert(offsetof(ULLMConversation, DefaultPersonaVoiceSoundClass) == 448, "Offset mismatch for ULLMConversation::DefaultPersonaVoiceSoundClass");
static_assert(offsetof(ULLMConversation, DefaultCharacterPersonaAssetBindings) == 464, "Offset mismatch for ULLMConversation::DefaultCharacterPersonaAssetBindings");

// /Script/AIPrompt.LLMFactDataAsset
// Kind: Class; super: DataAsset
class ULLMFactDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> FactRows; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULLMFactDataAsset, FactRows) == 40, "Offset mismatch for ULLMFactDataAsset::FactRows");

// /Script/AIPrompt.LLMPersonaActor
// Kind: Class; super: Actor
class ULLMPersonaActor
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

static_assert(offsetof(ULLMPersonaActor, PrimaryActorTick) == 40, "Offset mismatch for ULLMPersonaActor::PrimaryActorTick");
static_assert(offsetof(ULLMPersonaActor, bAlwaysRelevant) == 88, "Offset mismatch for ULLMPersonaActor::bAlwaysRelevant");
static_assert(offsetof(ULLMPersonaActor, bExchangedRoles) == 89, "Offset mismatch for ULLMPersonaActor::bExchangedRoles");
static_assert(offsetof(ULLMPersonaActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for ULLMPersonaActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(ULLMPersonaActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for ULLMPersonaActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(ULLMPersonaActor, bActorEnableCollision) == 93, "Offset mismatch for ULLMPersonaActor::bActorEnableCollision");
static_assert(offsetof(ULLMPersonaActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for ULLMPersonaActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(ULLMPersonaActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for ULLMPersonaActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(ULLMPersonaActor, RemoteRole) == 96, "Offset mismatch for ULLMPersonaActor::RemoteRole");
static_assert(offsetof(ULLMPersonaActor, InitialLifeSpan) == 100, "Offset mismatch for ULLMPersonaActor::InitialLifeSpan");
static_assert(offsetof(ULLMPersonaActor, CustomTimeDilation) == 104, "Offset mismatch for ULLMPersonaActor::CustomTimeDilation");
static_assert(offsetof(ULLMPersonaActor, RayTracingGroupId) == 108, "Offset mismatch for ULLMPersonaActor::RayTracingGroupId");
static_assert(offsetof(ULLMPersonaActor, AttachmentReplication) == 112, "Offset mismatch for ULLMPersonaActor::AttachmentReplication");
static_assert(offsetof(ULLMPersonaActor, ReplicatedMovement) == 208, "Offset mismatch for ULLMPersonaActor::ReplicatedMovement");
static_assert(offsetof(ULLMPersonaActor, Owner) == 344, "Offset mismatch for ULLMPersonaActor::Owner");
static_assert(offsetof(ULLMPersonaActor, NetDriverName) == 352, "Offset mismatch for ULLMPersonaActor::NetDriverName");
static_assert(offsetof(ULLMPersonaActor, Role) == 356, "Offset mismatch for ULLMPersonaActor::Role");
static_assert(offsetof(ULLMPersonaActor, NetDormancy) == 357, "Offset mismatch for ULLMPersonaActor::NetDormancy");
static_assert(offsetof(ULLMPersonaActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for ULLMPersonaActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(ULLMPersonaActor, AutoReceiveInput) == 359, "Offset mismatch for ULLMPersonaActor::AutoReceiveInput");
static_assert(offsetof(ULLMPersonaActor, InputPriority) == 360, "Offset mismatch for ULLMPersonaActor::InputPriority");
static_assert(offsetof(ULLMPersonaActor, InputComponent) == 368, "Offset mismatch for ULLMPersonaActor::InputComponent");
static_assert(offsetof(ULLMPersonaActor, NetTag) == 376, "Offset mismatch for ULLMPersonaActor::NetTag");
static_assert(offsetof(ULLMPersonaActor, NetCullDistanceSquared) == 380, "Offset mismatch for ULLMPersonaActor::NetCullDistanceSquared");
static_assert(offsetof(ULLMPersonaActor, NetUpdateFrequency) == 384, "Offset mismatch for ULLMPersonaActor::NetUpdateFrequency");
static_assert(offsetof(ULLMPersonaActor, MinNetUpdateFrequency) == 388, "Offset mismatch for ULLMPersonaActor::MinNetUpdateFrequency");
static_assert(offsetof(ULLMPersonaActor, NetPriority) == 392, "Offset mismatch for ULLMPersonaActor::NetPriority");
static_assert(offsetof(ULLMPersonaActor, PhysicsReplicationMode) == 396, "Offset mismatch for ULLMPersonaActor::PhysicsReplicationMode");
static_assert(offsetof(ULLMPersonaActor, Instigator) == 408, "Offset mismatch for ULLMPersonaActor::Instigator");
static_assert(offsetof(ULLMPersonaActor, Children) == 416, "Offset mismatch for ULLMPersonaActor::Children");
static_assert(offsetof(ULLMPersonaActor, RootComponent) == 432, "Offset mismatch for ULLMPersonaActor::RootComponent");
static_assert(offsetof(ULLMPersonaActor, HLODLayer) == 448, "Offset mismatch for ULLMPersonaActor::HLODLayer");
static_assert(offsetof(ULLMPersonaActor, Layers) == 456, "Offset mismatch for ULLMPersonaActor::Layers");
static_assert(offsetof(ULLMPersonaActor, ParentComponent) == 472, "Offset mismatch for ULLMPersonaActor::ParentComponent");
static_assert(offsetof(ULLMPersonaActor, Tags) == 496, "Offset mismatch for ULLMPersonaActor::Tags");
static_assert(offsetof(ULLMPersonaActor, OnTakeAnyDamage) == 512, "Offset mismatch for ULLMPersonaActor::OnTakeAnyDamage");
static_assert(offsetof(ULLMPersonaActor, OnTakePointDamage) == 513, "Offset mismatch for ULLMPersonaActor::OnTakePointDamage");
static_assert(offsetof(ULLMPersonaActor, OnTakeRadialDamage) == 514, "Offset mismatch for ULLMPersonaActor::OnTakeRadialDamage");
static_assert(offsetof(ULLMPersonaActor, OnActorBeginOverlap) == 515, "Offset mismatch for ULLMPersonaActor::OnActorBeginOverlap");
static_assert(offsetof(ULLMPersonaActor, OnActorEndOverlap) == 516, "Offset mismatch for ULLMPersonaActor::OnActorEndOverlap");
static_assert(offsetof(ULLMPersonaActor, OnBeginCursorOver) == 517, "Offset mismatch for ULLMPersonaActor::OnBeginCursorOver");
static_assert(offsetof(ULLMPersonaActor, OnEndCursorOver) == 518, "Offset mismatch for ULLMPersonaActor::OnEndCursorOver");
static_assert(offsetof(ULLMPersonaActor, OnClicked) == 519, "Offset mismatch for ULLMPersonaActor::OnClicked");
static_assert(offsetof(ULLMPersonaActor, OnReleased) == 520, "Offset mismatch for ULLMPersonaActor::OnReleased");
static_assert(offsetof(ULLMPersonaActor, OnInputTouchBegin) == 521, "Offset mismatch for ULLMPersonaActor::OnInputTouchBegin");
static_assert(offsetof(ULLMPersonaActor, OnInputTouchEnd) == 522, "Offset mismatch for ULLMPersonaActor::OnInputTouchEnd");
static_assert(offsetof(ULLMPersonaActor, OnInputTouchEnter) == 523, "Offset mismatch for ULLMPersonaActor::OnInputTouchEnter");
static_assert(offsetof(ULLMPersonaActor, OnInputTouchLeave) == 524, "Offset mismatch for ULLMPersonaActor::OnInputTouchLeave");
static_assert(offsetof(ULLMPersonaActor, OnActorHit) == 525, "Offset mismatch for ULLMPersonaActor::OnActorHit");
static_assert(offsetof(ULLMPersonaActor, OnDestroyed) == 526, "Offset mismatch for ULLMPersonaActor::OnDestroyed");
static_assert(offsetof(ULLMPersonaActor, OnEndPlay) == 527, "Offset mismatch for ULLMPersonaActor::OnEndPlay");
static_assert(offsetof(ULLMPersonaActor, InstanceComponents) == 592, "Offset mismatch for ULLMPersonaActor::InstanceComponents");
static_assert(offsetof(ULLMPersonaActor, BlueprintCreatedComponents) == 608, "Offset mismatch for ULLMPersonaActor::BlueprintCreatedComponents");

// /Script/AIPrompt.LLMPersonaConversationComponent
// Kind: Class; super: Object
class ULLMPersonaConversationComponent
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    FMulticastInlineDelegate OnResponseSuccess; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPersonaUtteranceStarted; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPersonaUtteranceStopped; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPersonaUtteranceCancelled; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* MonologuePawnClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ChatCompletionSafetySettings[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    void* CharacterPersonaAssetBindings; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* PersonaVoiceSoundClass; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* PersonaUIComponentClass; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    void* CreativeRegisteredPlayersManagerComponent; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConversationId[0x28]; // 0x00B8 (Size: 0x28, Type: StructProperty)
    FMulticastInlineDelegate OnPersonaCriteriaEvaluatedTrue; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00F0
    TMap<void*, void*> CachedPlayerSessionMap; // 0x0100 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x90]; // 0x0110
    FString DefaultMonologuePawnClass; // 0x01A0 (Size: 0x10, Type: StrProperty)
    FString DefaultPersonaUIComponentClass; // 0x01B0 (Size: 0x10, Type: StrProperty)
    FString DefaultPersonaVoiceSoundClass; // 0x01C0 (Size: 0x10, Type: StrProperty)
    FString DefaultCharacterPersonaAssetBindings; // 0x01D0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(ULLMPersonaConversationComponent, OnResponseSuccess) == 64, "Offset mismatch for ULLMPersonaConversationComponent::OnResponseSuccess");
static_assert(offsetof(ULLMPersonaConversationComponent, OnPersonaUtteranceStarted) == 80, "Offset mismatch for ULLMPersonaConversationComponent::OnPersonaUtteranceStarted");
static_assert(offsetof(ULLMPersonaConversationComponent, OnPersonaUtteranceStopped) == 96, "Offset mismatch for ULLMPersonaConversationComponent::OnPersonaUtteranceStopped");
static_assert(offsetof(ULLMPersonaConversationComponent, OnPersonaUtteranceCancelled) == 112, "Offset mismatch for ULLMPersonaConversationComponent::OnPersonaUtteranceCancelled");
static_assert(offsetof(ULLMPersonaConversationComponent, MonologuePawnClass) == 128, "Offset mismatch for ULLMPersonaConversationComponent::MonologuePawnClass");
static_assert(offsetof(ULLMPersonaConversationComponent, ChatCompletionSafetySettings) == 136, "Offset mismatch for ULLMPersonaConversationComponent::ChatCompletionSafetySettings");
static_assert(offsetof(ULLMPersonaConversationComponent, CharacterPersonaAssetBindings) == 152, "Offset mismatch for ULLMPersonaConversationComponent::CharacterPersonaAssetBindings");
static_assert(offsetof(ULLMPersonaConversationComponent, PersonaVoiceSoundClass) == 160, "Offset mismatch for ULLMPersonaConversationComponent::PersonaVoiceSoundClass");
static_assert(offsetof(ULLMPersonaConversationComponent, PersonaUIComponentClass) == 168, "Offset mismatch for ULLMPersonaConversationComponent::PersonaUIComponentClass");
static_assert(offsetof(ULLMPersonaConversationComponent, CreativeRegisteredPlayersManagerComponent) == 176, "Offset mismatch for ULLMPersonaConversationComponent::CreativeRegisteredPlayersManagerComponent");
static_assert(offsetof(ULLMPersonaConversationComponent, ConversationId) == 184, "Offset mismatch for ULLMPersonaConversationComponent::ConversationId");
static_assert(offsetof(ULLMPersonaConversationComponent, OnPersonaCriteriaEvaluatedTrue) == 224, "Offset mismatch for ULLMPersonaConversationComponent::OnPersonaCriteriaEvaluatedTrue");
static_assert(offsetof(ULLMPersonaConversationComponent, CachedPlayerSessionMap) == 256, "Offset mismatch for ULLMPersonaConversationComponent::CachedPlayerSessionMap");
static_assert(offsetof(ULLMPersonaConversationComponent, DefaultMonologuePawnClass) == 416, "Offset mismatch for ULLMPersonaConversationComponent::DefaultMonologuePawnClass");
static_assert(offsetof(ULLMPersonaConversationComponent, DefaultPersonaUIComponentClass) == 432, "Offset mismatch for ULLMPersonaConversationComponent::DefaultPersonaUIComponentClass");
static_assert(offsetof(ULLMPersonaConversationComponent, DefaultPersonaVoiceSoundClass) == 448, "Offset mismatch for ULLMPersonaConversationComponent::DefaultPersonaVoiceSoundClass");
static_assert(offsetof(ULLMPersonaConversationComponent, DefaultCharacterPersonaAssetBindings) == 464, "Offset mismatch for ULLMPersonaConversationComponent::DefaultCharacterPersonaAssetBindings");

// /Script/AIPrompt.LLMPersonaConversationComponentHolder
// Kind: Class; super: ActorComponent
class ULLMPersonaConversationComponentHolder
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* LLMPersonaConversationComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULLMPersonaConversationComponentHolder, LLMPersonaConversationComponent) == 192, "Offset mismatch for ULLMPersonaConversationComponentHolder::LLMPersonaConversationComponent");

// /Script/AIPrompt.LLMVoicePreviewMappingDataAsset
// Kind: Class; super: DataAsset
class ULLMVoicePreviewMappingDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> VoicePreviewSounds; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULLMVoicePreviewMappingDataAsset, VoicePreviewSounds) == 40, "Offset mismatch for ULLMVoicePreviewMappingDataAsset::VoicePreviewSounds");

// /Script/AIPrompt.NPCCharacterModifier_Persona
// Kind: Class; super: NPCCharacterModifier
class UNPCCharacterModifier_Persona
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bEnableFacialAnimations; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bOverrideBoundPersonaData (shared storage)
    // 0x0038 BoolProperty bOverrideCosmeticFacts (shared storage)
    // 0x0038 BoolProperty bPreviewAudioRange (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* VoiceModel; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t InterruptionRule; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0049
    float HearingRange; // 0x004C (Size: 0x4, Type: FloatProperty)
    float Volume; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0054
    void* Attenuation; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Color[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::uint8_t CharacterFacts[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    void* CharacterPrompt; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> CharacterPersonaAssetBindings; // 0x0088 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UNPCCharacterModifier_Persona, bEnableFacialAnimations) == 56, "Offset mismatch for UNPCCharacterModifier_Persona::bEnableFacialAnimations");
static_assert(offsetof(UNPCCharacterModifier_Persona, VoiceModel) == 64, "Offset mismatch for UNPCCharacterModifier_Persona::VoiceModel");
static_assert(offsetof(UNPCCharacterModifier_Persona, InterruptionRule) == 72, "Offset mismatch for UNPCCharacterModifier_Persona::InterruptionRule");
static_assert(offsetof(UNPCCharacterModifier_Persona, HearingRange) == 76, "Offset mismatch for UNPCCharacterModifier_Persona::HearingRange");
static_assert(offsetof(UNPCCharacterModifier_Persona, Volume) == 80, "Offset mismatch for UNPCCharacterModifier_Persona::Volume");
static_assert(offsetof(UNPCCharacterModifier_Persona, Attenuation) == 88, "Offset mismatch for UNPCCharacterModifier_Persona::Attenuation");
static_assert(offsetof(UNPCCharacterModifier_Persona, Color) == 96, "Offset mismatch for UNPCCharacterModifier_Persona::Color");
static_assert(offsetof(UNPCCharacterModifier_Persona, CharacterFacts) == 104, "Offset mismatch for UNPCCharacterModifier_Persona::CharacterFacts");
static_assert(offsetof(UNPCCharacterModifier_Persona, CharacterPrompt) == 128, "Offset mismatch for UNPCCharacterModifier_Persona::CharacterPrompt");
static_assert(offsetof(UNPCCharacterModifier_Persona, CharacterPersonaAssetBindings) == 136, "Offset mismatch for UNPCCharacterModifier_Persona::CharacterPersonaAssetBindings");

// /Script/AIPrompt.PersonaContextTagSettings
// Kind: Class; super: DeveloperSettings
class UPersonaContextTagSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t GrantedContextTagsDataTable[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BoundCharacterTag[0x4]; // 0x0050 (Size: 0x4, Type: StructProperty)
    std::uint8_t LockedCharacterTag[0x1]; // 0x0054 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPersonaContextTagSettings, GrantedContextTagsDataTable) == 48, "Offset mismatch for UPersonaContextTagSettings::GrantedContextTagsDataTable");
static_assert(offsetof(UPersonaContextTagSettings, BoundCharacterTag) == 80, "Offset mismatch for UPersonaContextTagSettings::BoundCharacterTag");
static_assert(offsetof(UPersonaContextTagSettings, LockedCharacterTag) == 84, "Offset mismatch for UPersonaContextTagSettings::LockedCharacterTag");

// /Script/AIPrompt.PersonaDelegateWrapper
// Kind: Class; super: Object
class UPersonaDelegateWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIPrompt.PersonaNameProvider
// Kind: Class; super: Interface
class UPersonaNameProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIPrompt.PersonaOratorComponent
// Kind: Class; super: FNRedwoodOratorComponent
class UPersonaOratorComponent
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    void* LinkedAnimationLayer; // 0x03B0 (Size: 0x8, Type: ClassProperty)
    void* CharacterPersonaAssetBindingDataTable; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* CharacterPersonaAsset; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x03C8
    std::uint8_t PersonaOratorAudioParams[0x30]; // 0x03D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t PersonaConversationGuid[0x10]; // 0x0408 (Size: 0x10, Type: StructProperty)
    std::uint8_t bHasLinkedAnimationLayer; // 0x0418 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0419
    void* FocusActor; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CachedUtteranceID[0x14]; // 0x0428 (Size: 0x14, Type: OptionalProperty)
    float StopFocusDelay; // 0x043C (Size: 0x4, Type: FloatProperty)
    FName LookAtKeyName; // 0x0440 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPersonaOratorComponent, LinkedAnimationLayer) == 944, "Offset mismatch for UPersonaOratorComponent::LinkedAnimationLayer");
static_assert(offsetof(UPersonaOratorComponent, CharacterPersonaAssetBindingDataTable) == 952, "Offset mismatch for UPersonaOratorComponent::CharacterPersonaAssetBindingDataTable");
static_assert(offsetof(UPersonaOratorComponent, CharacterPersonaAsset) == 960, "Offset mismatch for UPersonaOratorComponent::CharacterPersonaAsset");
static_assert(offsetof(UPersonaOratorComponent, PersonaOratorAudioParams) == 984, "Offset mismatch for UPersonaOratorComponent::PersonaOratorAudioParams");
static_assert(offsetof(UPersonaOratorComponent, PersonaConversationGuid) == 1032, "Offset mismatch for UPersonaOratorComponent::PersonaConversationGuid");
static_assert(offsetof(UPersonaOratorComponent, bHasLinkedAnimationLayer) == 1048, "Offset mismatch for UPersonaOratorComponent::bHasLinkedAnimationLayer");
static_assert(offsetof(UPersonaOratorComponent, FocusActor) == 1056, "Offset mismatch for UPersonaOratorComponent::FocusActor");
static_assert(offsetof(UPersonaOratorComponent, CachedUtteranceID) == 1064, "Offset mismatch for UPersonaOratorComponent::CachedUtteranceID");
static_assert(offsetof(UPersonaOratorComponent, StopFocusDelay) == 1084, "Offset mismatch for UPersonaOratorComponent::StopFocusDelay");
static_assert(offsetof(UPersonaOratorComponent, LookAtKeyName) == 1088, "Offset mismatch for UPersonaOratorComponent::LookAtKeyName");

// /Script/AIPrompt.PersonaOratorInputControllerComponent
// Kind: Class; super: FNRedwoodOratorInputControllerComponent
class UPersonaOratorInputControllerComponent
{
public:
    std::uint8_t Pad_0000[0x250]; // 0x0000
    FMulticastInlineDelegate OnControllerBlockListUpdated; // 0x0250 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMuteChanged; // 0x0260 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPersonaOratorInputControllerComponent, OnControllerBlockListUpdated) == 592, "Offset mismatch for UPersonaOratorInputControllerComponent::OnControllerBlockListUpdated");
static_assert(offsetof(UPersonaOratorInputControllerComponent, OnMuteChanged) == 608, "Offset mismatch for UPersonaOratorInputControllerComponent::OnMuteChanged");

// /Script/AIPrompt.PersonaPrompt
// Kind: Class; super: Object
class UPersonaPrompt
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PersonaFacts[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t SessionFacts[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    FMulticastInlineDelegate OnResponseReceived; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnResponseStructsUpdated; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0078
    FString Voice; // 0x0090 (Size: 0x10, Type: StrProperty)
    FString PromptInterruptionRule; // 0x00A0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPersonaPrompt, PersonaFacts) == 40, "Offset mismatch for UPersonaPrompt::PersonaFacts");
static_assert(offsetof(UPersonaPrompt, SessionFacts) == 64, "Offset mismatch for UPersonaPrompt::SessionFacts");
static_assert(offsetof(UPersonaPrompt, OnResponseReceived) == 88, "Offset mismatch for UPersonaPrompt::OnResponseReceived");
static_assert(offsetof(UPersonaPrompt, OnResponseStructsUpdated) == 104, "Offset mismatch for UPersonaPrompt::OnResponseStructsUpdated");
static_assert(offsetof(UPersonaPrompt, Voice) == 144, "Offset mismatch for UPersonaPrompt::Voice");
static_assert(offsetof(UPersonaPrompt, PromptInterruptionRule) == 160, "Offset mismatch for UPersonaPrompt::PromptInterruptionRule");

// /Script/AIPrompt.PersonaUIControllerComponent
// Kind: Class; super: ControllerComponent
class UPersonaUIControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* PersonaDynamicUIScene; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* PersonaErrorDataTable; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* PersonaViewModelClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PermissionWidgetClass[0x20]; // 0x00D8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PersonaStatusWidgetContainerClass[0x20]; // 0x00F8 (Size: 0x20, Type: SoftClassProperty)
    void* PersonaWidgetContainer; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PendingWidgets; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> StatusWidgetClasses; // 0x0130 (Size: 0x10, Type: MapProperty)
    void* CustomSubtitleWidgetClass; // 0x0140 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> PersonaNpcDataAssets; // 0x0148 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ConversationViewModels; // 0x0158 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHideStatusWhenOutOfRange; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0169
    TMap<void*, void*> PersonaUtteranceWrappers; // 0x0170 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPersonaUIControllerComponent, PersonaDynamicUIScene) == 192, "Offset mismatch for UPersonaUIControllerComponent::PersonaDynamicUIScene");
static_assert(offsetof(UPersonaUIControllerComponent, PersonaErrorDataTable) == 200, "Offset mismatch for UPersonaUIControllerComponent::PersonaErrorDataTable");
static_assert(offsetof(UPersonaUIControllerComponent, PersonaViewModelClass) == 208, "Offset mismatch for UPersonaUIControllerComponent::PersonaViewModelClass");
static_assert(offsetof(UPersonaUIControllerComponent, PermissionWidgetClass) == 216, "Offset mismatch for UPersonaUIControllerComponent::PermissionWidgetClass");
static_assert(offsetof(UPersonaUIControllerComponent, PersonaStatusWidgetContainerClass) == 248, "Offset mismatch for UPersonaUIControllerComponent::PersonaStatusWidgetContainerClass");
static_assert(offsetof(UPersonaUIControllerComponent, PersonaWidgetContainer) == 280, "Offset mismatch for UPersonaUIControllerComponent::PersonaWidgetContainer");
static_assert(offsetof(UPersonaUIControllerComponent, PendingWidgets) == 288, "Offset mismatch for UPersonaUIControllerComponent::PendingWidgets");
static_assert(offsetof(UPersonaUIControllerComponent, StatusWidgetClasses) == 304, "Offset mismatch for UPersonaUIControllerComponent::StatusWidgetClasses");
static_assert(offsetof(UPersonaUIControllerComponent, CustomSubtitleWidgetClass) == 320, "Offset mismatch for UPersonaUIControllerComponent::CustomSubtitleWidgetClass");
static_assert(offsetof(UPersonaUIControllerComponent, PersonaNpcDataAssets) == 328, "Offset mismatch for UPersonaUIControllerComponent::PersonaNpcDataAssets");
static_assert(offsetof(UPersonaUIControllerComponent, ConversationViewModels) == 344, "Offset mismatch for UPersonaUIControllerComponent::ConversationViewModels");
static_assert(offsetof(UPersonaUIControllerComponent, bHideStatusWhenOutOfRange) == 360, "Offset mismatch for UPersonaUIControllerComponent::bHideStatusWhenOutOfRange");
static_assert(offsetof(UPersonaUIControllerComponent, PersonaUtteranceWrappers) == 368, "Offset mismatch for UPersonaUIControllerComponent::PersonaUtteranceWrappers");

// /Script/AIPrompt.PersonaUtteranceWrapper
// Kind: Class; super: Object
class UPersonaUtteranceWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIPrompt.PersonaViewModel
// Kind: Class; super: MVVMViewModelBase
class UPersonaViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t IsVisible; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsSuppressed; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CanInteract; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsConnecting; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsProcessing; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasFailedToProcess; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasReceivedResponse; // 0x006E (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsRecording; // 0x006F (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPlayingAudio; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsMuted; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsAccountBlocked; // 0x0072 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RateLimitReach; // 0x0073 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0074
    void* VoiceInputAction; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    float TimeLeftForAudioRecording; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float TimeLeftForAudioRecordingNormalized; // 0x0084 (Size: 0x4, Type: FloatProperty)
    void* PersonaIcon; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShowPersonaIcon; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0091
    std::uint8_t PersonaName[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShowPersonaName; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00A9
    std::uint8_t PersonaColor[0x14]; // 0x00AC (Size: 0x14, Type: StructProperty)
    TArray<void*> PersonaList; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ShowPersonaList; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x00D1
    FText ErrorMessage; // 0x00D8 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UPersonaViewModel, IsVisible) == 104, "Offset mismatch for UPersonaViewModel::IsVisible");
static_assert(offsetof(UPersonaViewModel, IsSuppressed) == 105, "Offset mismatch for UPersonaViewModel::IsSuppressed");
static_assert(offsetof(UPersonaViewModel, CanInteract) == 106, "Offset mismatch for UPersonaViewModel::CanInteract");
static_assert(offsetof(UPersonaViewModel, IsConnecting) == 107, "Offset mismatch for UPersonaViewModel::IsConnecting");
static_assert(offsetof(UPersonaViewModel, IsProcessing) == 108, "Offset mismatch for UPersonaViewModel::IsProcessing");
static_assert(offsetof(UPersonaViewModel, HasFailedToProcess) == 109, "Offset mismatch for UPersonaViewModel::HasFailedToProcess");
static_assert(offsetof(UPersonaViewModel, HasReceivedResponse) == 110, "Offset mismatch for UPersonaViewModel::HasReceivedResponse");
static_assert(offsetof(UPersonaViewModel, IsRecording) == 111, "Offset mismatch for UPersonaViewModel::IsRecording");
static_assert(offsetof(UPersonaViewModel, IsPlayingAudio) == 112, "Offset mismatch for UPersonaViewModel::IsPlayingAudio");
static_assert(offsetof(UPersonaViewModel, IsMuted) == 113, "Offset mismatch for UPersonaViewModel::IsMuted");
static_assert(offsetof(UPersonaViewModel, IsAccountBlocked) == 114, "Offset mismatch for UPersonaViewModel::IsAccountBlocked");
static_assert(offsetof(UPersonaViewModel, RateLimitReach) == 115, "Offset mismatch for UPersonaViewModel::RateLimitReach");
static_assert(offsetof(UPersonaViewModel, VoiceInputAction) == 120, "Offset mismatch for UPersonaViewModel::VoiceInputAction");
static_assert(offsetof(UPersonaViewModel, TimeLeftForAudioRecording) == 128, "Offset mismatch for UPersonaViewModel::TimeLeftForAudioRecording");
static_assert(offsetof(UPersonaViewModel, TimeLeftForAudioRecordingNormalized) == 132, "Offset mismatch for UPersonaViewModel::TimeLeftForAudioRecordingNormalized");
static_assert(offsetof(UPersonaViewModel, PersonaIcon) == 136, "Offset mismatch for UPersonaViewModel::PersonaIcon");
static_assert(offsetof(UPersonaViewModel, ShowPersonaIcon) == 144, "Offset mismatch for UPersonaViewModel::ShowPersonaIcon");
static_assert(offsetof(UPersonaViewModel, PersonaName) == 152, "Offset mismatch for UPersonaViewModel::PersonaName");
static_assert(offsetof(UPersonaViewModel, ShowPersonaName) == 168, "Offset mismatch for UPersonaViewModel::ShowPersonaName");
static_assert(offsetof(UPersonaViewModel, PersonaColor) == 172, "Offset mismatch for UPersonaViewModel::PersonaColor");
static_assert(offsetof(UPersonaViewModel, PersonaList) == 192, "Offset mismatch for UPersonaViewModel::PersonaList");
static_assert(offsetof(UPersonaViewModel, ShowPersonaList) == 208, "Offset mismatch for UPersonaViewModel::ShowPersonaList");
static_assert(offsetof(UPersonaViewModel, ErrorMessage) == 216, "Offset mismatch for UPersonaViewModel::ErrorMessage");

// /Script/AIPrompt.PersonaVoiceDataProvider
// Kind: Class; super: Interface
class UPersonaVoiceDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIPrompt.PlaylistUserOptionLLMFacts
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionLLMFacts
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlaylistUserOptionLLMFacts, DefaultValue) == 432, "Offset mismatch for UPlaylistUserOptionLLMFacts::DefaultValue");

// /Script/AIPrompt.PlaylistUserOptionPersona
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionPersona
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlaylistUserOptionPersona, DefaultValue) == 432, "Offset mismatch for UPlaylistUserOptionPersona::DefaultValue");

// /Script/AIPrompt.PlaylistUserOptionPersonas
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionPersonas
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlaylistUserOptionPersonas, DefaultValue) == 432, "Offset mismatch for UPlaylistUserOptionPersonas::DefaultValue");

// /Script/AIPrompt.PlaylistUserOptionResponseEventCriteria
// Kind: Class; super: PlaylistUserOptionBase
class UPlaylistUserOptionResponseEventCriteria
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlaylistUserOptionResponseEventCriteria, DefaultValue) == 432, "Offset mismatch for UPlaylistUserOptionResponseEventCriteria::DefaultValue");

// /Script/AIPrompt.ResonanceTextToSpeechProvider
// Kind: Class; super: OratorTextToSpeechProvider
class UResonanceTextToSpeechProvider
{
public:
    std::uint8_t Opaque[1];
};
