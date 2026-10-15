/**
 * decamp dumper generated SDK
 * Package: /Script/FNRedwoodRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FNRedwoodRuntime.FNRedwoodContextualEvents
// Kind: ScriptStruct; super: none
struct FFNRedwoodContextualEvents
{
public:
    TArray<void*> Events; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFNRedwoodContextualEvents, Events) == 0, "Offset mismatch for FFNRedwoodContextualEvents::Events");

// /Script/FNRedwoodRuntime.FNRedwoodConversationDynamicOptionsPromptResults
// Kind: ScriptStruct; super: none
struct FFNRedwoodConversationDynamicOptionsPromptResults
{
public:
    FString MainQuestion; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t AvailableOptions; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    FString OptionOne; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString OptionOne_NPCResponse; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString OptionTwo; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString OptionTwo_NPCResponse; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString OptionThree; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString OptionThree_NPCResponse; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString OptionFour; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString OptionFour_NPCResponse; // 0x0088 (Size: 0x10, Type: StrProperty)
    FString OptionFive; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString OptionFive_NPCResponse; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString OptionSix; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FString OptionSix_NPCResponse; // 0x00C8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, MainQuestion) == 0, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::MainQuestion");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, AvailableOptions) == 16, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::AvailableOptions");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionOne) == 24, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionOne");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionOne_NPCResponse) == 40, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionOne_NPCResponse");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionTwo) == 56, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionTwo");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionTwo_NPCResponse) == 72, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionTwo_NPCResponse");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionThree) == 88, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionThree");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionThree_NPCResponse) == 104, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionThree_NPCResponse");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionFour) == 120, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionFour");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionFour_NPCResponse) == 136, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionFour_NPCResponse");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionFive) == 152, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionFive");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionFive_NPCResponse) == 168, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionFive_NPCResponse");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionSix) == 184, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionSix");
static_assert(offsetof(FFNRedwoodConversationDynamicOptionsPromptResults, OptionSix_NPCResponse) == 200, "Offset mismatch for FFNRedwoodConversationDynamicOptionsPromptResults::OptionSix_NPCResponse");

// /Script/FNRedwoodRuntime.FNRedwoodConversationTaskNode_DynamicOptionsMemory
// Kind: ScriptStruct; super: none
struct FFNRedwoodConversationTaskNode_DynamicOptionsMemory
{
public:
    std::uint8_t RequestData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFNRedwoodConversationTaskNode_DynamicOptionsMemory, RequestData) == 0, "Offset mismatch for FFNRedwoodConversationTaskNode_DynamicOptionsMemory::RequestData");

// /Script/FNRedwoodRuntime.FNRedwoodConversationTaskNode_DynamicOptions_ParentMemory
// Kind: ScriptStruct; super: none
struct FFNRedwoodConversationTaskNode_DynamicOptions_ParentMemory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FNRedwoodRuntime.FNRedwoodConversationTaskNode_SaySomethingMemory
// Kind: ScriptStruct; super: none
struct FFNRedwoodConversationTaskNode_SaySomethingMemory
{
public:
    std::uint8_t RequestData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFNRedwoodConversationTaskNode_SaySomethingMemory, RequestData) == 0, "Offset mismatch for FFNRedwoodConversationTaskNode_SaySomethingMemory::RequestData");

// /Script/FNRedwoodRuntime.FNRedwoodDynamicOptionsPromptResults
// Kind: ScriptStruct; super: none
struct FFNRedwoodDynamicOptionsPromptResults
{
public:
    std::int32_t AvailableOptions; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString OptionOne_ShortText; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString OptionOne_FullText; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString OptionTwo_ShortText; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString OptionTwo_FullText; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString OptionThree_ShortText; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString OptionThree_FullText; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString OptionFour_ShortText; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString OptionFour_FullText; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString OptionFive_ShortText; // 0x0088 (Size: 0x10, Type: StrProperty)
    FString OptionFive_FullText; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString OptionSix_ShortText; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString OptionSix_FullText; // 0x00B8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, AvailableOptions) == 0, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::AvailableOptions");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionOne_ShortText) == 8, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionOne_ShortText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionOne_FullText) == 24, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionOne_FullText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionTwo_ShortText) == 40, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionTwo_ShortText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionTwo_FullText) == 56, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionTwo_FullText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionThree_ShortText) == 72, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionThree_ShortText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionThree_FullText) == 88, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionThree_FullText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionFour_ShortText) == 104, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionFour_ShortText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionFour_FullText) == 120, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionFour_FullText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionFive_ShortText) == 136, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionFive_ShortText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionFive_FullText) == 152, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionFive_FullText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionSix_ShortText) == 168, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionSix_ShortText");
static_assert(offsetof(FFNRedwoodDynamicOptionsPromptResults, OptionSix_FullText) == 184, "Offset mismatch for FFNRedwoodDynamicOptionsPromptResults::OptionSix_FullText");

// /Script/FNRedwoodRuntime.FNRedwoodDynamicOptionsSmartObjectUIStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTask::TransitionHandlingPriority");

// /Script/FNRedwoodRuntime.FNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData
{
public:
    void* SmartObjectActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Actor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Instigator; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UIOptions[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t BaseLLMOption[0x98]; // 0x0030 (Size: 0x98, Type: StructProperty)
    std::uint8_t BaseLLMPossibleResult[0x90]; // 0x00C8 (Size: 0x90, Type: StructProperty)
    std::uint8_t OnUpdateUIOptions[0x10]; // 0x0158 (Size: 0x10, Type: StructProperty)
    std::uint8_t PromptTypeIdentifier[0x8]; // 0x0168 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> ExtraLocalFacts; // 0x0170 (Size: 0x10, Type: MapProperty)
    std::uint8_t bOverridePropertyDescriptions; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0181
    TMap<void*, void*> OverriddenPropertyDescriptions; // 0x0188 (Size: 0x10, Type: MapProperty)
    std::int32_t MinOptions; // 0x0198 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxOptions; // 0x019C (Size: 0x4, Type: IntProperty)
    TArray<void*> UIResultTagPerOption; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasUsableLLMResults; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01B1
    std::uint8_t UIOptionsResult[0x18]; // 0x01B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedRequestData[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, SmartObjectActor) == 0, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::SmartObjectActor");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, Actor) == 8, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, Instigator) == 16, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::Instigator");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, UIOptions) == 24, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::UIOptions");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, BaseLLMOption) == 48, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::BaseLLMOption");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, BaseLLMPossibleResult) == 200, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::BaseLLMPossibleResult");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, OnUpdateUIOptions) == 344, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::OnUpdateUIOptions");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, PromptTypeIdentifier) == 360, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::PromptTypeIdentifier");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, ExtraLocalFacts) == 368, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::ExtraLocalFacts");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, bOverridePropertyDescriptions) == 384, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::bOverridePropertyDescriptions");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, OverriddenPropertyDescriptions) == 392, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::OverriddenPropertyDescriptions");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, MinOptions) == 408, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::MinOptions");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, MaxOptions) == 412, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::MaxOptions");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, UIResultTagPerOption) == 416, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::UIResultTagPerOption");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, bHasUsableLLMResults) == 432, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::bHasUsableLLMResults");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, UIOptionsResult) == 440, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::UIOptionsResult");
static_assert(offsetof(FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData, CachedRequestData) == 464, "Offset mismatch for FFNRedwoodDynamicOptionsSmartObjectUIStateTreeTaskInstanceData::CachedRequestData");

// /Script/FNRedwoodRuntime.FNRedwoodManagerConfigurationRow
// Kind: ScriptStruct; super: TableRowBase
struct FFNRedwoodManagerConfigurationRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float PlayerAudibleDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSendUtteranceWithNoTargetPlayers; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequireModerationSuccessToUseResults; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFNRedwoodManagerConfigurationRow, PlayerAudibleDistance) == 8, "Offset mismatch for FFNRedwoodManagerConfigurationRow::PlayerAudibleDistance");
static_assert(offsetof(FFNRedwoodManagerConfigurationRow, bSendUtteranceWithNoTargetPlayers) == 12, "Offset mismatch for FFNRedwoodManagerConfigurationRow::bSendUtteranceWithNoTargetPlayers");
static_assert(offsetof(FFNRedwoodManagerConfigurationRow, bRequireModerationSuccessToUseResults) == 13, "Offset mismatch for FFNRedwoodManagerConfigurationRow::bRequireModerationSuccessToUseResults");

// /Script/FNRedwoodRuntime.FNRedwoodManagerDirectUtteranceRequestData
// Kind: ScriptStruct; super: none
struct FFNRedwoodManagerDirectUtteranceRequestData
{
public:
    void* Owner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Instigator; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DialogueStruct[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    void* StructDescriptorClass; // 0x0020 (Size: 0x8, Type: ClassProperty)
    FString DialogueLine; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bRequiresPlayersInRange; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSendUtteranceOnlyToInstigator; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInterruptAllExistingUtterances; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x003B
    std::uint8_t AnalyticsEventGroupID[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestData, Owner) == 0, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestData::Owner");
static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestData, Instigator) == 8, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestData::Instigator");
static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestData, DialogueStruct) == 16, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestData::DialogueStruct");
static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestData, StructDescriptorClass) == 32, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestData::StructDescriptorClass");
static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestData, DialogueLine) == 40, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestData::DialogueLine");
static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestData, bRequiresPlayersInRange) == 56, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestData::bRequiresPlayersInRange");
static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestData, bSendUtteranceOnlyToInstigator) == 57, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestData::bSendUtteranceOnlyToInstigator");
static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestData, bInterruptAllExistingUtterances) == 58, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestData::bInterruptAllExistingUtterances");
static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestData, AnalyticsEventGroupID) == 60, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestData::AnalyticsEventGroupID");

// /Script/FNRedwoodRuntime.FNRedwoodManagerDirectUtteranceRequestDelegates
// Kind: ScriptStruct; super: none
struct FFNRedwoodManagerDirectUtteranceRequestDelegates
{
public:
    FScriptDelegate UtteranceStateChangeDelegate; // 0x0000 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestDelegates, UtteranceStateChangeDelegate) == 0, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestDelegates::UtteranceStateChangeDelegate");

// /Script/FNRedwoodRuntime.FNRedwoodManagerDirectUtteranceRequestHandle
// Kind: ScriptStruct; super: none
struct FFNRedwoodManagerDirectUtteranceRequestHandle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RequestData[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t Delegates[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestHandle, RequestData) == 8, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestHandle::RequestData");
static_assert(offsetof(FFNRedwoodManagerDirectUtteranceRequestHandle, Delegates) == 88, "Offset mismatch for FFNRedwoodManagerDirectUtteranceRequestHandle::Delegates");

// /Script/FNRedwoodRuntime.FNRedwoodManagerPromptRequestData
// Kind: ScriptStruct; super: none
struct FFNRedwoodManagerPromptRequestData
{
public:
    void* Owner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TypeIdentifier[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t OverridenStructuredResponseSchema[0x78]; // 0x0010 (Size: 0x78, Type: StructProperty)
    void* OverridenStructDescriptorClass; // 0x0088 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> ExtraLocalFacts; // 0x0090 (Size: 0x10, Type: MapProperty)
    TArray<void*> Attachments; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    void* Instigator; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x20]; // 0x00B8
    std::uint8_t AnalyticsEventGroupID[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t bRequiresPlayersInRange; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutomaticallyRequestUtterance; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSendUtteranceOnlyToInstigator; // 0x00EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInterruptAllExistingUtterances; // 0x00EB (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFNRedwoodManagerPromptRequestData, Owner) == 0, "Offset mismatch for FFNRedwoodManagerPromptRequestData::Owner");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, TypeIdentifier) == 8, "Offset mismatch for FFNRedwoodManagerPromptRequestData::TypeIdentifier");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, OverridenStructuredResponseSchema) == 16, "Offset mismatch for FFNRedwoodManagerPromptRequestData::OverridenStructuredResponseSchema");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, OverridenStructDescriptorClass) == 136, "Offset mismatch for FFNRedwoodManagerPromptRequestData::OverridenStructDescriptorClass");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, ExtraLocalFacts) == 144, "Offset mismatch for FFNRedwoodManagerPromptRequestData::ExtraLocalFacts");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, Attachments) == 160, "Offset mismatch for FFNRedwoodManagerPromptRequestData::Attachments");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, Instigator) == 176, "Offset mismatch for FFNRedwoodManagerPromptRequestData::Instigator");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, AnalyticsEventGroupID) == 216, "Offset mismatch for FFNRedwoodManagerPromptRequestData::AnalyticsEventGroupID");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, bRequiresPlayersInRange) == 232, "Offset mismatch for FFNRedwoodManagerPromptRequestData::bRequiresPlayersInRange");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, bAutomaticallyRequestUtterance) == 233, "Offset mismatch for FFNRedwoodManagerPromptRequestData::bAutomaticallyRequestUtterance");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, bSendUtteranceOnlyToInstigator) == 234, "Offset mismatch for FFNRedwoodManagerPromptRequestData::bSendUtteranceOnlyToInstigator");
static_assert(offsetof(FFNRedwoodManagerPromptRequestData, bInterruptAllExistingUtterances) == 235, "Offset mismatch for FFNRedwoodManagerPromptRequestData::bInterruptAllExistingUtterances");

// /Script/FNRedwoodRuntime.FNRedwoodManagerPromptRequestDelegates
// Kind: ScriptStruct; super: none
struct FFNRedwoodManagerPromptRequestDelegates
{
public:
    FScriptDelegate StateChangeDelegate; // 0x0000 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0010
    FScriptDelegate UtteranceStateChangeDelegate; // 0x0020 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FFNRedwoodManagerPromptRequestDelegates, StateChangeDelegate) == 0, "Offset mismatch for FFNRedwoodManagerPromptRequestDelegates::StateChangeDelegate");
static_assert(offsetof(FFNRedwoodManagerPromptRequestDelegates, UtteranceStateChangeDelegate) == 32, "Offset mismatch for FFNRedwoodManagerPromptRequestDelegates::UtteranceStateChangeDelegate");

// /Script/FNRedwoodRuntime.FNRedwoodManagerPromptTypeConfigurationRow
// Kind: ScriptStruct; super: TableRowBase
struct FFNRedwoodManagerPromptTypeConfigurationRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Identifier[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    void* Prompt; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Traits[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> BaseLocalFacts; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t BaseStructuredResponseSchema[0x78]; // 0x0048 (Size: 0x78, Type: StructProperty)
    void* BaseStructDescriptorClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* ChatCompleterClassOverride; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    float StaleTime; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00D4
    void* ModeratorClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFNRedwoodManagerPromptTypeConfigurationRow, Identifier) == 8, "Offset mismatch for FFNRedwoodManagerPromptTypeConfigurationRow::Identifier");
static_assert(offsetof(FFNRedwoodManagerPromptTypeConfigurationRow, Prompt) == 16, "Offset mismatch for FFNRedwoodManagerPromptTypeConfigurationRow::Prompt");
static_assert(offsetof(FFNRedwoodManagerPromptTypeConfigurationRow, Traits) == 24, "Offset mismatch for FFNRedwoodManagerPromptTypeConfigurationRow::Traits");
static_assert(offsetof(FFNRedwoodManagerPromptTypeConfigurationRow, BaseLocalFacts) == 56, "Offset mismatch for FFNRedwoodManagerPromptTypeConfigurationRow::BaseLocalFacts");
static_assert(offsetof(FFNRedwoodManagerPromptTypeConfigurationRow, BaseStructuredResponseSchema) == 72, "Offset mismatch for FFNRedwoodManagerPromptTypeConfigurationRow::BaseStructuredResponseSchema");
static_assert(offsetof(FFNRedwoodManagerPromptTypeConfigurationRow, BaseStructDescriptorClass) == 192, "Offset mismatch for FFNRedwoodManagerPromptTypeConfigurationRow::BaseStructDescriptorClass");
static_assert(offsetof(FFNRedwoodManagerPromptTypeConfigurationRow, ChatCompleterClassOverride) == 200, "Offset mismatch for FFNRedwoodManagerPromptTypeConfigurationRow::ChatCompleterClassOverride");
static_assert(offsetof(FFNRedwoodManagerPromptTypeConfigurationRow, StaleTime) == 208, "Offset mismatch for FFNRedwoodManagerPromptTypeConfigurationRow::StaleTime");
static_assert(offsetof(FFNRedwoodManagerPromptTypeConfigurationRow, ModeratorClass) == 216, "Offset mismatch for FFNRedwoodManagerPromptTypeConfigurationRow::ModeratorClass");

// /Script/FNRedwoodRuntime.FNRedwoodManagerRequestHandle
// Kind: ScriptStruct; super: none
struct FFNRedwoodManagerRequestHandle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RequestData[0xF0]; // 0x0008 (Size: 0xF0, Type: StructProperty)
    std::uint8_t RequestID[0x10]; // 0x00F8 (Size: 0x10, Type: StructProperty)
    float RequestedTime; // 0x0108 (Size: 0x4, Type: FloatProperty)
    std::uint8_t State; // 0x010C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x010D
    std::uint8_t Delegates[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t UsedSchema[0x78]; // 0x0150 (Size: 0x78, Type: StructProperty)
    void* UsedStructDescriptor; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ChatCompletionStructuredResponseMessage[0x58]; // 0x01D0 (Size: 0x58, Type: StructProperty)
    std::uint8_t ChatCompletionErrorFlags; // 0x0228 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x17]; // 0x0229
    FString RawUtteranceDialogueLine; // 0x0240 (Size: 0x10, Type: StrProperty)
    std::uint8_t UtteranceState; // 0x0250 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0251
    std::uint8_t RunningUtteranceID[0x1]; // 0x0254 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFNRedwoodManagerRequestHandle, RequestData) == 8, "Offset mismatch for FFNRedwoodManagerRequestHandle::RequestData");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, RequestID) == 248, "Offset mismatch for FFNRedwoodManagerRequestHandle::RequestID");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, RequestedTime) == 264, "Offset mismatch for FFNRedwoodManagerRequestHandle::RequestedTime");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, State) == 268, "Offset mismatch for FFNRedwoodManagerRequestHandle::State");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, Delegates) == 272, "Offset mismatch for FFNRedwoodManagerRequestHandle::Delegates");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, UsedSchema) == 336, "Offset mismatch for FFNRedwoodManagerRequestHandle::UsedSchema");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, UsedStructDescriptor) == 456, "Offset mismatch for FFNRedwoodManagerRequestHandle::UsedStructDescriptor");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, ChatCompletionStructuredResponseMessage) == 464, "Offset mismatch for FFNRedwoodManagerRequestHandle::ChatCompletionStructuredResponseMessage");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, ChatCompletionErrorFlags) == 552, "Offset mismatch for FFNRedwoodManagerRequestHandle::ChatCompletionErrorFlags");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, RawUtteranceDialogueLine) == 576, "Offset mismatch for FFNRedwoodManagerRequestHandle::RawUtteranceDialogueLine");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, UtteranceState) == 592, "Offset mismatch for FFNRedwoodManagerRequestHandle::UtteranceState");
static_assert(offsetof(FFNRedwoodManagerRequestHandle, RunningUtteranceID) == 596, "Offset mismatch for FFNRedwoodManagerRequestHandle::RunningUtteranceID");

// /Script/FNRedwoodRuntime.FNRedwoodManagerRequestResponseFailureData
// Kind: ScriptStruct; super: none
struct FFNRedwoodManagerRequestResponseFailureData
{
public:
    std::uint8_t ChatCompletionErrorFlags; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFNRedwoodManagerRequestResponseFailureData, ChatCompletionErrorFlags) == 0, "Offset mismatch for FFNRedwoodManagerRequestResponseFailureData::ChatCompletionErrorFlags");

// /Script/FNRedwoodRuntime.FNRedwoodModerationRequest
// Kind: ScriptStruct; super: none
struct FFNRedwoodModerationRequest
{
public:
    void* Instigator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* MonologueComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ModeratorClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ChatCompletionRequestToModerate[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    TArray<void*> EventsToForgetIfFailed; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ModerationPromptLocalFacts; // 0x0038 (Size: 0x10, Type: MapProperty)
    TArray<void*> ModerationPromptAttachments; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OratorUtteranceGuid[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t AnalyticsEventGroupID[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::int32_t RetriesOnServerFailure; // 0x0078 (Size: 0x4, Type: IntProperty)
    float DelayBetweenRetries; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ModerationChatCompletionRequest[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFNRedwoodModerationRequest, Instigator) == 0, "Offset mismatch for FFNRedwoodModerationRequest::Instigator");
static_assert(offsetof(FFNRedwoodModerationRequest, MonologueComponent) == 8, "Offset mismatch for FFNRedwoodModerationRequest::MonologueComponent");
static_assert(offsetof(FFNRedwoodModerationRequest, ModeratorClass) == 16, "Offset mismatch for FFNRedwoodModerationRequest::ModeratorClass");
static_assert(offsetof(FFNRedwoodModerationRequest, ChatCompletionRequestToModerate) == 24, "Offset mismatch for FFNRedwoodModerationRequest::ChatCompletionRequestToModerate");
static_assert(offsetof(FFNRedwoodModerationRequest, EventsToForgetIfFailed) == 40, "Offset mismatch for FFNRedwoodModerationRequest::EventsToForgetIfFailed");
static_assert(offsetof(FFNRedwoodModerationRequest, ModerationPromptLocalFacts) == 56, "Offset mismatch for FFNRedwoodModerationRequest::ModerationPromptLocalFacts");
static_assert(offsetof(FFNRedwoodModerationRequest, ModerationPromptAttachments) == 72, "Offset mismatch for FFNRedwoodModerationRequest::ModerationPromptAttachments");
static_assert(offsetof(FFNRedwoodModerationRequest, OratorUtteranceGuid) == 88, "Offset mismatch for FFNRedwoodModerationRequest::OratorUtteranceGuid");
static_assert(offsetof(FFNRedwoodModerationRequest, AnalyticsEventGroupID) == 104, "Offset mismatch for FFNRedwoodModerationRequest::AnalyticsEventGroupID");
static_assert(offsetof(FFNRedwoodModerationRequest, RetriesOnServerFailure) == 120, "Offset mismatch for FFNRedwoodModerationRequest::RetriesOnServerFailure");
static_assert(offsetof(FFNRedwoodModerationRequest, DelayBetweenRetries) == 124, "Offset mismatch for FFNRedwoodModerationRequest::DelayBetweenRetries");
static_assert(offsetof(FFNRedwoodModerationRequest, ModerationChatCompletionRequest) == 128, "Offset mismatch for FFNRedwoodModerationRequest::ModerationChatCompletionRequest");

// /Script/FNRedwoodRuntime.FNRedwoodOratorDialogueEvent
// Kind: ScriptStruct; super: none
struct FFNRedwoodOratorDialogueEvent
{
public:
    void* Speaker; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DialogueStruct[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    void* StructDescriptor; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UtteranceGuid[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t ModerationStatus; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInterrupted; // 0x0031 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFNRedwoodOratorDialogueEvent, Speaker) == 0, "Offset mismatch for FFNRedwoodOratorDialogueEvent::Speaker");
static_assert(offsetof(FFNRedwoodOratorDialogueEvent, DialogueStruct) == 8, "Offset mismatch for FFNRedwoodOratorDialogueEvent::DialogueStruct");
static_assert(offsetof(FFNRedwoodOratorDialogueEvent, StructDescriptor) == 24, "Offset mismatch for FFNRedwoodOratorDialogueEvent::StructDescriptor");
static_assert(offsetof(FFNRedwoodOratorDialogueEvent, UtteranceGuid) == 32, "Offset mismatch for FFNRedwoodOratorDialogueEvent::UtteranceGuid");
static_assert(offsetof(FFNRedwoodOratorDialogueEvent, ModerationStatus) == 48, "Offset mismatch for FFNRedwoodOratorDialogueEvent::ModerationStatus");
static_assert(offsetof(FFNRedwoodOratorDialogueEvent, bInterrupted) == 49, "Offset mismatch for FFNRedwoodOratorDialogueEvent::bInterrupted");

// /Script/FNRedwoodRuntime.FNRedwoodOratorDialogueLine
// Kind: ScriptStruct; super: none
struct FFNRedwoodOratorDialogueLine
{
public:
    FString Dialogue; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0010
    std::uint8_t FeelingChange; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0021
    std::int32_t FeelingChangeValue; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFNRedwoodOratorDialogueLine, Dialogue) == 0, "Offset mismatch for FFNRedwoodOratorDialogueLine::Dialogue");
static_assert(offsetof(FFNRedwoodOratorDialogueLine, FeelingChange) == 32, "Offset mismatch for FFNRedwoodOratorDialogueLine::FeelingChange");
static_assert(offsetof(FFNRedwoodOratorDialogueLine, FeelingChangeValue) == 36, "Offset mismatch for FFNRedwoodOratorDialogueLine::FeelingChangeValue");

// /Script/FNRedwoodRuntime.FNRedwoodPerceivedPlayerDialogueEventPayload
// Kind: ScriptStruct; super: none
struct FFNRedwoodPerceivedPlayerDialogueEventPayload
{
public:
    std::uint8_t PerceivedPlayerDialogueEvent[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t PlayerDialogueEvent[0x48]; // 0x0038 (Size: 0x48, Type: StructProperty)
    TArray<void*> PlayerDialogueAudioAsAttachments; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFNRedwoodPerceivedPlayerDialogueEventPayload, PerceivedPlayerDialogueEvent) == 0, "Offset mismatch for FFNRedwoodPerceivedPlayerDialogueEventPayload::PerceivedPlayerDialogueEvent");
static_assert(offsetof(FFNRedwoodPerceivedPlayerDialogueEventPayload, PlayerDialogueEvent) == 56, "Offset mismatch for FFNRedwoodPerceivedPlayerDialogueEventPayload::PlayerDialogueEvent");
static_assert(offsetof(FFNRedwoodPerceivedPlayerDialogueEventPayload, PlayerDialogueAudioAsAttachments) == 128, "Offset mismatch for FFNRedwoodPerceivedPlayerDialogueEventPayload::PlayerDialogueAudioAsAttachments");

// /Script/FNRedwoodRuntime.FNRedwoodPerceivedTopicalEventPayload
// Kind: ScriptStruct; super: none
struct FFNRedwoodPerceivedTopicalEventPayload
{
public:
    std::uint8_t PerceivedTopicalEvent[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t TopicalEvent[0x48]; // 0x0038 (Size: 0x48, Type: StructProperty)
    std::uint8_t TopicalEventConversationCueFact[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFNRedwoodPerceivedTopicalEventPayload, PerceivedTopicalEvent) == 0, "Offset mismatch for FFNRedwoodPerceivedTopicalEventPayload::PerceivedTopicalEvent");
static_assert(offsetof(FFNRedwoodPerceivedTopicalEventPayload, TopicalEvent) == 56, "Offset mismatch for FFNRedwoodPerceivedTopicalEventPayload::TopicalEvent");
static_assert(offsetof(FFNRedwoodPerceivedTopicalEventPayload, TopicalEventConversationCueFact) == 128, "Offset mismatch for FFNRedwoodPerceivedTopicalEventPayload::TopicalEventConversationCueFact");

// /Script/FNRedwoodRuntime.FNRedwoodQueuedRequest
// Kind: ScriptStruct; super: none
struct FFNRedwoodQueuedRequest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FNRedwoodRuntime.FNRedwoodReaction_MonologueFactualizedEvent
// Kind: ScriptStruct; super: EventReactionBase
struct FFNRedwoodReaction_MonologueFactualizedEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EventDescriptionTemplate[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ConversationCueTemplate[0x18]; // 0x0018 (Size: 0x18, Type: OptionalProperty)
    TMap<void*, void*> AdditionalEventDescriptionFacts; // 0x0030 (Size: 0x10, Type: MapProperty)
    float Significance; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::int32_t RollChance; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::int32_t RollChanceConversationCue; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFNRedwoodReaction_MonologueFactualizedEvent, EventDescriptionTemplate) == 8, "Offset mismatch for FFNRedwoodReaction_MonologueFactualizedEvent::EventDescriptionTemplate");
static_assert(offsetof(FFNRedwoodReaction_MonologueFactualizedEvent, ConversationCueTemplate) == 24, "Offset mismatch for FFNRedwoodReaction_MonologueFactualizedEvent::ConversationCueTemplate");
static_assert(offsetof(FFNRedwoodReaction_MonologueFactualizedEvent, AdditionalEventDescriptionFacts) == 48, "Offset mismatch for FFNRedwoodReaction_MonologueFactualizedEvent::AdditionalEventDescriptionFacts");
static_assert(offsetof(FFNRedwoodReaction_MonologueFactualizedEvent, Significance) == 64, "Offset mismatch for FFNRedwoodReaction_MonologueFactualizedEvent::Significance");
static_assert(offsetof(FFNRedwoodReaction_MonologueFactualizedEvent, RollChance) == 68, "Offset mismatch for FFNRedwoodReaction_MonologueFactualizedEvent::RollChance");
static_assert(offsetof(FFNRedwoodReaction_MonologueFactualizedEvent, RollChanceConversationCue) == 72, "Offset mismatch for FFNRedwoodReaction_MonologueFactualizedEvent::RollChanceConversationCue");

// /Script/FNRedwoodRuntime.FNRedwoodReaction_MonologueTopicalEvent
// Kind: ScriptStruct; super: EventReactionBase
struct FFNRedwoodReaction_MonologueTopicalEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EventDescription[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConversationCue[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    float Significance; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::int32_t RollChance; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFNRedwoodReaction_MonologueTopicalEvent, EventDescription) == 8, "Offset mismatch for FFNRedwoodReaction_MonologueTopicalEvent::EventDescription");
static_assert(offsetof(FFNRedwoodReaction_MonologueTopicalEvent, ConversationCue) == 24, "Offset mismatch for FFNRedwoodReaction_MonologueTopicalEvent::ConversationCue");
static_assert(offsetof(FFNRedwoodReaction_MonologueTopicalEvent, Significance) == 40, "Offset mismatch for FFNRedwoodReaction_MonologueTopicalEvent::Significance");
static_assert(offsetof(FFNRedwoodReaction_MonologueTopicalEvent, RollChance) == 44, "Offset mismatch for FFNRedwoodReaction_MonologueTopicalEvent::RollChance");

// /Script/FNRedwoodRuntime.FNRedwoodReaction_MonologueVerbatimEvent
// Kind: ScriptStruct; super: EventReactionBase
struct FFNRedwoodReaction_MonologueVerbatimEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Monologue[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    float Significance; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::int32_t RollChance; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFNRedwoodReaction_MonologueVerbatimEvent, Monologue) == 8, "Offset mismatch for FFNRedwoodReaction_MonologueVerbatimEvent::Monologue");
static_assert(offsetof(FFNRedwoodReaction_MonologueVerbatimEvent, Significance) == 24, "Offset mismatch for FFNRedwoodReaction_MonologueVerbatimEvent::Significance");
static_assert(offsetof(FFNRedwoodReaction_MonologueVerbatimEvent, RollChance) == 28, "Offset mismatch for FFNRedwoodReaction_MonologueVerbatimEvent::RollChance");

// /Script/FNRedwoodRuntime.FNRedwoodRestriction
// Kind: ScriptStruct; super: TableRowBase
struct FFNRedwoodRestriction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Index; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t Restriction[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    TArray<void*> CannedResponsesToViolation; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFNRedwoodRestriction, Index) == 8, "Offset mismatch for FFNRedwoodRestriction::Index");
static_assert(offsetof(FFNRedwoodRestriction, Restriction) == 16, "Offset mismatch for FFNRedwoodRestriction::Restriction");
static_assert(offsetof(FFNRedwoodRestriction, CannedResponsesToViolation) == 32, "Offset mismatch for FFNRedwoodRestriction::CannedResponsesToViolation");

// /Script/FNRedwoodRuntime.FNRedwoodRestrictionViolation
// Kind: ScriptStruct; super: none
struct FFNRedwoodRestrictionViolation
{
public:
    std::int32_t ViolationIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFNRedwoodRestrictionViolation, ViolationIndex) == 0, "Offset mismatch for FFNRedwoodRestrictionViolation::ViolationIndex");

// /Script/FNRedwoodRuntime.FNRedwoodSayPayloadSmartObjectUIStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFNRedwoodSayPayloadSmartObjectUIStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTask::TransitionHandlingPriority");

// /Script/FNRedwoodRuntime.FNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData
{
public:
    void* SmartObjectActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Actor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Instigator; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UIOptions[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    TArray<void*> ReceivedPayloads; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSayDescription; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0041
    void* StructDescriptorClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
    std::uint8_t UtteranceState; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    FString RawDialogueLine; // 0x0058 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData, SmartObjectActor) == 0, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData::SmartObjectActor");
static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData, Actor) == 8, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData, Instigator) == 16, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData::Instigator");
static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData, UIOptions) == 24, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData::UIOptions");
static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData, ReceivedPayloads) == 48, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData::ReceivedPayloads");
static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData, bSayDescription) == 64, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData::bSayDescription");
static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData, StructDescriptorClass) == 72, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData::StructDescriptorClass");
static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData, UtteranceState) == 80, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData::UtteranceState");
static_assert(offsetof(FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData, RawDialogueLine) == 88, "Offset mismatch for FFNRedwoodSayPayloadSmartObjectUIStateTreeTaskInstanceData::RawDialogueLine");

// /Script/FNRedwoodRuntime.RedwoodSpatialFactsProvider_TrackedActorData
// Kind: ScriptStruct; super: none
struct FRedwoodSpatialFactsProvider_TrackedActorData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FNRedwoodRuntime.AsyncAction_FNRedwoodManagerRequestResponse
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_FNRedwoodManagerRequestResponse
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnStateChanged; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUtteranceStateChanged; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancelling; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bCancellingCalled; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuccess; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanUseResults; // 0x0062 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0063
    std::uint8_t RequestID[0x1]; // 0x0064 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAsyncAction_FNRedwoodManagerRequestResponse, OnStateChanged) == 48, "Offset mismatch for UAsyncAction_FNRedwoodManagerRequestResponse::OnStateChanged");
static_assert(offsetof(UAsyncAction_FNRedwoodManagerRequestResponse, OnUtteranceStateChanged) == 64, "Offset mismatch for UAsyncAction_FNRedwoodManagerRequestResponse::OnUtteranceStateChanged");
static_assert(offsetof(UAsyncAction_FNRedwoodManagerRequestResponse, OnCancelling) == 80, "Offset mismatch for UAsyncAction_FNRedwoodManagerRequestResponse::OnCancelling");
static_assert(offsetof(UAsyncAction_FNRedwoodManagerRequestResponse, bCancellingCalled) == 96, "Offset mismatch for UAsyncAction_FNRedwoodManagerRequestResponse::bCancellingCalled");
static_assert(offsetof(UAsyncAction_FNRedwoodManagerRequestResponse, bSuccess) == 97, "Offset mismatch for UAsyncAction_FNRedwoodManagerRequestResponse::bSuccess");
static_assert(offsetof(UAsyncAction_FNRedwoodManagerRequestResponse, bCanUseResults) == 98, "Offset mismatch for UAsyncAction_FNRedwoodManagerRequestResponse::bCanUseResults");
static_assert(offsetof(UAsyncAction_FNRedwoodManagerRequestResponse, RequestID) == 100, "Offset mismatch for UAsyncAction_FNRedwoodManagerRequestResponse::RequestID");

// /Script/FNRedwoodRuntime.AsyncAction_FNRedwoodOratorSaySomething
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_FNRedwoodOratorSaySomething
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnGenerating; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGenerated; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPerformed; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCleared; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* MonologueComponent; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* SpeechComponent; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t QueueingMethod; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DialogueEventAudience; // 0x0091 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0092
    double StartTime; // 0x0098 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t UtteranceGuid[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    void* Instigator; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TargetPlayers; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GeneratedDialogueLine[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t GeneratedDialogueStruct[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequestHandle[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, OnGenerating) == 48, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::OnGenerating");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, OnGenerated) == 64, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::OnGenerated");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, OnPerformed) == 80, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::OnPerformed");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, OnCleared) == 96, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::OnCleared");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, OnFailure) == 112, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::OnFailure");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, MonologueComponent) == 128, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::MonologueComponent");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, SpeechComponent) == 136, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::SpeechComponent");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, QueueingMethod) == 144, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::QueueingMethod");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, DialogueEventAudience) == 145, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::DialogueEventAudience");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, StartTime) == 152, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::StartTime");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, UtteranceGuid) == 160, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::UtteranceGuid");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, Instigator) == 176, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::Instigator");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, TargetPlayers) == 184, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::TargetPlayers");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, GeneratedDialogueLine) == 200, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::GeneratedDialogueLine");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, GeneratedDialogueStruct) == 224, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::GeneratedDialogueStruct");
static_assert(offsetof(UAsyncAction_FNRedwoodOratorSaySomething, RequestHandle) == 240, "Offset mismatch for UAsyncAction_FNRedwoodOratorSaySomething::RequestHandle");

// /Script/FNRedwoodRuntime.FNOratorDynamicOptionsStructDescriptor
// Kind: Class; super: OratorDialogueStructDescriptor
class UFNOratorDynamicOptionsStructDescriptor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DialogueStructType; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DialogueStructSchema[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFNOratorDynamicOptionsStructDescriptor, DialogueStructType) == 40, "Offset mismatch for UFNOratorDynamicOptionsStructDescriptor::DialogueStructType");
static_assert(offsetof(UFNOratorDynamicOptionsStructDescriptor, DialogueStructSchema) == 48, "Offset mismatch for UFNOratorDynamicOptionsStructDescriptor::DialogueStructSchema");

// /Script/FNRedwoodRuntime.FNRedwoodCheatManager
// Kind: Class; super: CheatManagerExtension
class UFNRedwoodCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FNRedwoodRuntime.FNRedwoodConversationTaskNode_DynamicOptions
// Kind: Class; super: FortConversationTaskNode
class UFNRedwoodConversationTaskNode_DynamicOptions
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t PromptTypeIdentifier[0x8]; // 0x0170 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> ExtraLocalFacts; // 0x0178 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> OverriddenPropertyDescriptions; // 0x0188 (Size: 0x10, Type: MapProperty)
    std::int32_t MinOptions; // 0x0198 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxOptions; // 0x019C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFNRedwoodConversationTaskNode_DynamicOptions, PromptTypeIdentifier) == 368, "Offset mismatch for UFNRedwoodConversationTaskNode_DynamicOptions::PromptTypeIdentifier");
static_assert(offsetof(UFNRedwoodConversationTaskNode_DynamicOptions, ExtraLocalFacts) == 376, "Offset mismatch for UFNRedwoodConversationTaskNode_DynamicOptions::ExtraLocalFacts");
static_assert(offsetof(UFNRedwoodConversationTaskNode_DynamicOptions, OverriddenPropertyDescriptions) == 392, "Offset mismatch for UFNRedwoodConversationTaskNode_DynamicOptions::OverriddenPropertyDescriptions");
static_assert(offsetof(UFNRedwoodConversationTaskNode_DynamicOptions, MinOptions) == 408, "Offset mismatch for UFNRedwoodConversationTaskNode_DynamicOptions::MinOptions");
static_assert(offsetof(UFNRedwoodConversationTaskNode_DynamicOptions, MaxOptions) == 412, "Offset mismatch for UFNRedwoodConversationTaskNode_DynamicOptions::MaxOptions");

// /Script/FNRedwoodRuntime.FNRedwoodConversationTaskNode_DynamicOptions_Parent
// Kind: Class; super: FortConversationTaskNode
class UFNRedwoodConversationTaskNode_DynamicOptions_Parent
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t PromptTypeIdentifier[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFNRedwoodConversationTaskNode_DynamicOptions_Parent, PromptTypeIdentifier) == 368, "Offset mismatch for UFNRedwoodConversationTaskNode_DynamicOptions_Parent::PromptTypeIdentifier");

// /Script/FNRedwoodRuntime.FNRedwoodConversationTaskNode_SaySomething
// Kind: Class; super: FortConversationTaskNode
class UFNRedwoodConversationTaskNode_SaySomething
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t PromptTypeIdentifier[0x8]; // 0x0170 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> ExtraLocalFacts; // 0x0178 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFNRedwoodConversationTaskNode_SaySomething, PromptTypeIdentifier) == 368, "Offset mismatch for UFNRedwoodConversationTaskNode_SaySomething::PromptTypeIdentifier");
static_assert(offsetof(UFNRedwoodConversationTaskNode_SaySomething, ExtraLocalFacts) == 376, "Offset mismatch for UFNRedwoodConversationTaskNode_SaySomething::ExtraLocalFacts");

// /Script/FNRedwoodRuntime.FNRedwoodManagerComponent
// Kind: Class; super: ActorComponent
class UFNRedwoodManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t Configurations[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ManagerConfiguration[0x38]; // 0x00F0 (Size: 0x38, Type: StructProperty)
    TArray<void*> RunningRequests; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RunningDirectUtterances; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DigestedConfigurations; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DigestedManagerConfiguration[0x18]; // 0x0158 (Size: 0x18, Type: OptionalProperty)
    FMulticastInlineDelegate OnRequestedOratorDialogueDelegate; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TraitRequiredQueryForFeelingsChange[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFNRedwoodManagerComponent, Configurations) == 192, "Offset mismatch for UFNRedwoodManagerComponent::Configurations");
static_assert(offsetof(UFNRedwoodManagerComponent, ManagerConfiguration) == 240, "Offset mismatch for UFNRedwoodManagerComponent::ManagerConfiguration");
static_assert(offsetof(UFNRedwoodManagerComponent, RunningRequests) == 296, "Offset mismatch for UFNRedwoodManagerComponent::RunningRequests");
static_assert(offsetof(UFNRedwoodManagerComponent, RunningDirectUtterances) == 312, "Offset mismatch for UFNRedwoodManagerComponent::RunningDirectUtterances");
static_assert(offsetof(UFNRedwoodManagerComponent, DigestedConfigurations) == 328, "Offset mismatch for UFNRedwoodManagerComponent::DigestedConfigurations");
static_assert(offsetof(UFNRedwoodManagerComponent, DigestedManagerConfiguration) == 344, "Offset mismatch for UFNRedwoodManagerComponent::DigestedManagerConfiguration");
static_assert(offsetof(UFNRedwoodManagerComponent, OnRequestedOratorDialogueDelegate) == 368, "Offset mismatch for UFNRedwoodManagerComponent::OnRequestedOratorDialogueDelegate");
static_assert(offsetof(UFNRedwoodManagerComponent, TraitRequiredQueryForFeelingsChange) == 384, "Offset mismatch for UFNRedwoodManagerComponent::TraitRequiredQueryForFeelingsChange");

// /Script/FNRedwoodRuntime.FNRedwoodModerationComponent
// Kind: Class; super: ActorComponent
class UFNRedwoodModerationComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnFailedModeration; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPassedModeration; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnModerationRequestFailed; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* RestrictionsDataTable; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RestrictionLineFormat[0x10]; // 0x00F8 (Size: 0x10, Type: TextProperty)
    TArray<void*> InProgressModerationRequests; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumModerationFailures; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    void* CachedMonologueComponent; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* CachedOratorComponent; // 0x0128 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFNRedwoodModerationComponent, OnFailedModeration) == 192, "Offset mismatch for UFNRedwoodModerationComponent::OnFailedModeration");
static_assert(offsetof(UFNRedwoodModerationComponent, OnPassedModeration) == 208, "Offset mismatch for UFNRedwoodModerationComponent::OnPassedModeration");
static_assert(offsetof(UFNRedwoodModerationComponent, OnModerationRequestFailed) == 224, "Offset mismatch for UFNRedwoodModerationComponent::OnModerationRequestFailed");
static_assert(offsetof(UFNRedwoodModerationComponent, RestrictionsDataTable) == 240, "Offset mismatch for UFNRedwoodModerationComponent::RestrictionsDataTable");
static_assert(offsetof(UFNRedwoodModerationComponent, RestrictionLineFormat) == 248, "Offset mismatch for UFNRedwoodModerationComponent::RestrictionLineFormat");
static_assert(offsetof(UFNRedwoodModerationComponent, InProgressModerationRequests) == 264, "Offset mismatch for UFNRedwoodModerationComponent::InProgressModerationRequests");
static_assert(offsetof(UFNRedwoodModerationComponent, NumModerationFailures) == 280, "Offset mismatch for UFNRedwoodModerationComponent::NumModerationFailures");
static_assert(offsetof(UFNRedwoodModerationComponent, CachedMonologueComponent) == 288, "Offset mismatch for UFNRedwoodModerationComponent::CachedMonologueComponent");
static_assert(offsetof(UFNRedwoodModerationComponent, CachedOratorComponent) == 296, "Offset mismatch for UFNRedwoodModerationComponent::CachedOratorComponent");

// /Script/FNRedwoodRuntime.FNRedwoodModerator
// Kind: Class; super: Object
class UFNRedwoodModerator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ModerationPrompt; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ModerationResponseSchema[0x78]; // 0x0030 (Size: 0x78, Type: StructProperty)
    std::uint8_t bRequiresDynamicResponseSchema; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFNRedwoodModerator, ModerationPrompt) == 40, "Offset mismatch for UFNRedwoodModerator::ModerationPrompt");
static_assert(offsetof(UFNRedwoodModerator, ModerationResponseSchema) == 48, "Offset mismatch for UFNRedwoodModerator::ModerationResponseSchema");
static_assert(offsetof(UFNRedwoodModerator, bRequiresDynamicResponseSchema) == 168, "Offset mismatch for UFNRedwoodModerator::bRequiresDynamicResponseSchema");

// /Script/FNRedwoodRuntime.FNRedwoodModerator_RestrictionViolation
// Kind: Class; super: FNRedwoodModerator
class UFNRedwoodModerator_RestrictionViolation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ModerationPrompt; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ModerationResponseSchema[0x78]; // 0x0030 (Size: 0x78, Type: StructProperty)
    std::uint8_t bRequiresDynamicResponseSchema; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFNRedwoodModerator_RestrictionViolation, ModerationPrompt) == 40, "Offset mismatch for UFNRedwoodModerator_RestrictionViolation::ModerationPrompt");
static_assert(offsetof(UFNRedwoodModerator_RestrictionViolation, ModerationResponseSchema) == 48, "Offset mismatch for UFNRedwoodModerator_RestrictionViolation::ModerationResponseSchema");
static_assert(offsetof(UFNRedwoodModerator_RestrictionViolation, bRequiresDynamicResponseSchema) == 168, "Offset mismatch for UFNRedwoodModerator_RestrictionViolation::bRequiresDynamicResponseSchema");

// /Script/FNRedwoodRuntime.FNRedwoodMonologueComponent
// Kind: Class; super: MonologueComponent
class UFNRedwoodMonologueComponent
{
public:
    std::uint8_t Pad_0000[0x198]; // 0x0000
    TMap<void*, void*> PerceivedContextualEvents; // 0x0198 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFNRedwoodMonologueComponent, PerceivedContextualEvents) == 408, "Offset mismatch for UFNRedwoodMonologueComponent::PerceivedContextualEvents");

// /Script/FNRedwoodRuntime.FNRedwoodMonologueTranscriptionProvider
// Kind: Class; super: OratorTranscriptionProvider
class UFNRedwoodMonologueTranscriptionProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TranscriptionPrompt; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFNRedwoodMonologueTranscriptionProvider, TranscriptionPrompt) == 40, "Offset mismatch for UFNRedwoodMonologueTranscriptionProvider::TranscriptionPrompt");

// /Script/FNRedwoodRuntime.FNRedwoodOratorComponent
// Kind: Class; super: OratorComponent
class UFNRedwoodOratorComponent
{
public:
    std::uint8_t Pad_0000[0x2B8]; // 0x0000
    void* DialogueEventType; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFNRedwoodOratorComponent, DialogueEventType) == 696, "Offset mismatch for UFNRedwoodOratorComponent::DialogueEventType");

// /Script/FNRedwoodRuntime.FNRedwoodOratorControllerComponent
// Kind: Class; super: OratorControllerComponent
class UFNRedwoodOratorControllerComponent
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

static_assert(offsetof(UFNRedwoodOratorControllerComponent, bPlayerIsAway) == 192, "Offset mismatch for UFNRedwoodOratorControllerComponent::bPlayerIsAway");
static_assert(offsetof(UFNRedwoodOratorControllerComponent, bPlayerAllowedToHearOrator) == 193, "Offset mismatch for UFNRedwoodOratorControllerComponent::bPlayerAllowedToHearOrator");
static_assert(offsetof(UFNRedwoodOratorControllerComponent, bPlayerAllowedToHearOratorIsReplicated) == 194, "Offset mismatch for UFNRedwoodOratorControllerComponent::bPlayerAllowedToHearOratorIsReplicated");
static_assert(offsetof(UFNRedwoodOratorControllerComponent, OnPlayerAllowedToHearOratorChanged) == 200, "Offset mismatch for UFNRedwoodOratorControllerComponent::OnPlayerAllowedToHearOratorChanged");
static_assert(offsetof(UFNRedwoodOratorControllerComponent, OratorChannel) == 216, "Offset mismatch for UFNRedwoodOratorControllerComponent::OratorChannel");
static_assert(offsetof(UFNRedwoodOratorControllerComponent, bReadyForChannel) == 224, "Offset mismatch for UFNRedwoodOratorControllerComponent::bReadyForChannel");

// /Script/FNRedwoodRuntime.FNRedwoodOratorDialogueEventDescriber
// Kind: Class; super: MonologueEventDescriber
class UFNRedwoodOratorDialogueEventDescriber
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    float ObservedDialogEventSignificance; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float DefaultHearingRange; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FirstPersonEventDescriptionTemplate[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t SecondPersonEventDescriptionTemplate[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t ThirdPersonEventDescriptionTemplate[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFNRedwoodOratorDialogueEventDescriber, ObservedDialogEventSignificance) == 88, "Offset mismatch for UFNRedwoodOratorDialogueEventDescriber::ObservedDialogEventSignificance");
static_assert(offsetof(UFNRedwoodOratorDialogueEventDescriber, DefaultHearingRange) == 92, "Offset mismatch for UFNRedwoodOratorDialogueEventDescriber::DefaultHearingRange");
static_assert(offsetof(UFNRedwoodOratorDialogueEventDescriber, FirstPersonEventDescriptionTemplate) == 96, "Offset mismatch for UFNRedwoodOratorDialogueEventDescriber::FirstPersonEventDescriptionTemplate");
static_assert(offsetof(UFNRedwoodOratorDialogueEventDescriber, SecondPersonEventDescriptionTemplate) == 112, "Offset mismatch for UFNRedwoodOratorDialogueEventDescriber::SecondPersonEventDescriptionTemplate");
static_assert(offsetof(UFNRedwoodOratorDialogueEventDescriber, ThirdPersonEventDescriptionTemplate) == 128, "Offset mismatch for UFNRedwoodOratorDialogueEventDescriber::ThirdPersonEventDescriptionTemplate");

// /Script/FNRedwoodRuntime.FNRedwoodOratorDialogueStructDescriptor
// Kind: Class; super: OratorDialogueStructDescriptor
class UFNRedwoodOratorDialogueStructDescriptor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DialogueStructType; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DialogueStructSchema[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFNRedwoodOratorDialogueStructDescriptor, DialogueStructType) == 40, "Offset mismatch for UFNRedwoodOratorDialogueStructDescriptor::DialogueStructType");
static_assert(offsetof(UFNRedwoodOratorDialogueStructDescriptor, DialogueStructSchema) == 48, "Offset mismatch for UFNRedwoodOratorDialogueStructDescriptor::DialogueStructSchema");

// /Script/FNRedwoodRuntime.FNRedwoodOratorDynamicOptionsStructDescriptor
// Kind: Class; super: OratorDialogueStructDescriptor
class UFNRedwoodOratorDynamicOptionsStructDescriptor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DialogueStructType; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DialogueStructSchema[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFNRedwoodOratorDynamicOptionsStructDescriptor, DialogueStructType) == 40, "Offset mismatch for UFNRedwoodOratorDynamicOptionsStructDescriptor::DialogueStructType");
static_assert(offsetof(UFNRedwoodOratorDynamicOptionsStructDescriptor, DialogueStructSchema) == 48, "Offset mismatch for UFNRedwoodOratorDynamicOptionsStructDescriptor::DialogueStructSchema");

// /Script/FNRedwoodRuntime.FNRedwoodOratorFactsLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFNRedwoodOratorFactsLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FNRedwoodRuntime.FNRedwoodOratorInputControllerComponent
// Kind: Class; super: OratorInputControllerComponent
class UFNRedwoodOratorInputControllerComponent
{
public:
    std::uint8_t Pad_0000[0x248]; // 0x0000
    void* DialogueEventType; // 0x0248 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFNRedwoodOratorInputControllerComponent, DialogueEventType) == 584, "Offset mismatch for UFNRedwoodOratorInputControllerComponent::DialogueEventType");

// /Script/FNRedwoodRuntime.FNRedwoodSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UFNRedwoodSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FNRedwoodRuntime.FortAthenaMutator_OratorVoiceChat
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_OratorVoiceChat
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_OratorVoiceChat, bMutatesGameMode) == 688, "Offset mismatch for UFortAthenaMutator_OratorVoiceChat::bMutatesGameMode");
static_assert(offsetof(UFortAthenaMutator_OratorVoiceChat, CachedGameMode) == 696, "Offset mismatch for UFortAthenaMutator_OratorVoiceChat::CachedGameMode");
static_assert(offsetof(UFortAthenaMutator_OratorVoiceChat, CachedGameState) == 704, "Offset mismatch for UFortAthenaMutator_OratorVoiceChat::CachedGameState");
static_assert(offsetof(UFortAthenaMutator_OratorVoiceChat, InitializedPlayerControllers) == 712, "Offset mismatch for UFortAthenaMutator_OratorVoiceChat::InitializedPlayerControllers");
static_assert(offsetof(UFortAthenaMutator_OratorVoiceChat, OverridePriority) == 732, "Offset mismatch for UFortAthenaMutator_OratorVoiceChat::OverridePriority");
static_assert(offsetof(UFortAthenaMutator_OratorVoiceChat, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortAthenaMutator_OratorVoiceChat::bOnlyRunOnGameThread");

// /Script/FNRedwoodRuntime.FortGameFeatureAction_AddMonologueFacts
// Kind: Class; super: GameFeatureAction_AddMonologueFacts
class UFortGameFeatureAction_AddMonologueFacts
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DelegateEngineFactsToAdd[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    TMap<void*, void*> EngineFactsToAdd; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t bAddFactsInEditor; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddFactsOnClient; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddFactsOnServer; // 0x005A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddMonologueFacts, DelegateEngineFactsToAdd) == 40, "Offset mismatch for UFortGameFeatureAction_AddMonologueFacts::DelegateEngineFactsToAdd");
static_assert(offsetof(UFortGameFeatureAction_AddMonologueFacts, EngineFactsToAdd) == 72, "Offset mismatch for UFortGameFeatureAction_AddMonologueFacts::EngineFactsToAdd");
static_assert(offsetof(UFortGameFeatureAction_AddMonologueFacts, bAddFactsInEditor) == 88, "Offset mismatch for UFortGameFeatureAction_AddMonologueFacts::bAddFactsInEditor");
static_assert(offsetof(UFortGameFeatureAction_AddMonologueFacts, bAddFactsOnClient) == 89, "Offset mismatch for UFortGameFeatureAction_AddMonologueFacts::bAddFactsOnClient");
static_assert(offsetof(UFortGameFeatureAction_AddMonologueFacts, bAddFactsOnServer) == 90, "Offset mismatch for UFortGameFeatureAction_AddMonologueFacts::bAddFactsOnServer");

// /Script/FNRedwoodRuntime.FortPawnComponent_RedwoodSpatialFactsProvider
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_RedwoodSpatialFactsProvider
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

static_assert(offsetof(UFortPawnComponent_RedwoodSpatialFactsProvider, PrimaryComponentTick) == 56, "Offset mismatch for UFortPawnComponent_RedwoodSpatialFactsProvider::PrimaryComponentTick");
static_assert(offsetof(UFortPawnComponent_RedwoodSpatialFactsProvider, ComponentTags) == 104, "Offset mismatch for UFortPawnComponent_RedwoodSpatialFactsProvider::ComponentTags");
static_assert(offsetof(UFortPawnComponent_RedwoodSpatialFactsProvider, AssetUserData) == 120, "Offset mismatch for UFortPawnComponent_RedwoodSpatialFactsProvider::AssetUserData");
static_assert(offsetof(UFortPawnComponent_RedwoodSpatialFactsProvider, UCSSerializationIndex) == 144, "Offset mismatch for UFortPawnComponent_RedwoodSpatialFactsProvider::UCSSerializationIndex");
static_assert(offsetof(UFortPawnComponent_RedwoodSpatialFactsProvider, bNetAddressable) == 152, "Offset mismatch for UFortPawnComponent_RedwoodSpatialFactsProvider::bNetAddressable");
static_assert(offsetof(UFortPawnComponent_RedwoodSpatialFactsProvider, bAutoActivate) == 154, "Offset mismatch for UFortPawnComponent_RedwoodSpatialFactsProvider::bAutoActivate");
static_assert(offsetof(UFortPawnComponent_RedwoodSpatialFactsProvider, bIsEditorOnly) == 155, "Offset mismatch for UFortPawnComponent_RedwoodSpatialFactsProvider::bIsEditorOnly");
static_assert(offsetof(UFortPawnComponent_RedwoodSpatialFactsProvider, CreationMethod) == 185, "Offset mismatch for UFortPawnComponent_RedwoodSpatialFactsProvider::CreationMethod");
static_assert(offsetof(UFortPawnComponent_RedwoodSpatialFactsProvider, OnComponentActivated) == 186, "Offset mismatch for UFortPawnComponent_RedwoodSpatialFactsProvider::OnComponentActivated");
static_assert(offsetof(UFortPawnComponent_RedwoodSpatialFactsProvider, OnComponentDeactivated) == 187, "Offset mismatch for UFortPawnComponent_RedwoodSpatialFactsProvider::OnComponentDeactivated");

// /Script/FNRedwoodRuntime.GameFeatureAction_SetupFNRedwoodAnalytics
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_SetupFNRedwoodAnalytics
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString AnalyticsAppId; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString AnalyticsEventNamespace; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UGameFeatureAction_SetupFNRedwoodAnalytics, AnalyticsAppId) == 40, "Offset mismatch for UGameFeatureAction_SetupFNRedwoodAnalytics::AnalyticsAppId");
static_assert(offsetof(UGameFeatureAction_SetupFNRedwoodAnalytics, AnalyticsEventNamespace) == 56, "Offset mismatch for UGameFeatureAction_SetupFNRedwoodAnalytics::AnalyticsEventNamespace");

// /Script/FNRedwoodRuntime.OratorVoiceChatInput
// Kind: Class; super: OratorAudioInputProvider
class UOratorVoiceChatInput
{
public:
    std::uint8_t Opaque[1];
};
