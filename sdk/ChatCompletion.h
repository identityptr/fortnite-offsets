/**
 * decamp dumper generated SDK
 * Package: /Script/ChatCompletion
 */
#pragma once
#include "Basic.h"

// /Script/ChatCompletion.ChatCompletionAttachment
// Kind: ScriptStruct; super: none
struct FChatCompletionAttachment
{
public:
    FString mimetype; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FChatCompletionAttachment, mimetype) == 0, "Offset mismatch for FChatCompletionAttachment::mimetype");

// /Script/ChatCompletion.ChatCompletionChat
// Kind: ScriptStruct; super: none
struct FChatCompletionChat
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString SystemMessage; // 0x0008 (Size: 0x10, Type: StrProperty)
    TArray<void*> Messages; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Functions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Asset[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    TWeakObjectPtr<void> Outer; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FChatCompletionChat, Name) == 0, "Offset mismatch for FChatCompletionChat::Name");
static_assert(offsetof(FChatCompletionChat, SystemMessage) == 8, "Offset mismatch for FChatCompletionChat::SystemMessage");
static_assert(offsetof(FChatCompletionChat, Messages) == 24, "Offset mismatch for FChatCompletionChat::Messages");
static_assert(offsetof(FChatCompletionChat, Functions) == 40, "Offset mismatch for FChatCompletionChat::Functions");
static_assert(offsetof(FChatCompletionChat, Asset) == 56, "Offset mismatch for FChatCompletionChat::Asset");
static_assert(offsetof(FChatCompletionChat, Outer) == 88, "Offset mismatch for FChatCompletionChat::Outer");

// /Script/ChatCompletion.ChatCompletionDebugText
// Kind: ScriptStruct; super: none
struct FChatCompletionDebugText
{
public:
    FString Text; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString mimetype; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FChatCompletionDebugText, Text) == 0, "Offset mismatch for FChatCompletionDebugText::Text");
static_assert(offsetof(FChatCompletionDebugText, mimetype) == 16, "Offset mismatch for FChatCompletionDebugText::mimetype");

// /Script/ChatCompletion.ChatCompletionFunction
// Kind: ScriptStruct; super: none
struct FChatCompletionFunction
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t ArgumentsSchema[0x70]; // 0x0020 (Size: 0x70, Type: StructProperty)
    std::uint8_t ResponseSchema[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatCompletionFunction, Name) == 0, "Offset mismatch for FChatCompletionFunction::Name");
static_assert(offsetof(FChatCompletionFunction, Description) == 16, "Offset mismatch for FChatCompletionFunction::Description");
static_assert(offsetof(FChatCompletionFunction, ArgumentsSchema) == 32, "Offset mismatch for FChatCompletionFunction::ArgumentsSchema");
static_assert(offsetof(FChatCompletionFunction, ResponseSchema) == 144, "Offset mismatch for FChatCompletionFunction::ResponseSchema");

// /Script/ChatCompletion.ChatCompletionFunctionCall
// Kind: ScriptStruct; super: none
struct FChatCompletionFunctionCall
{
public:
    FString ID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Function[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Arguments[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatCompletionFunctionCall, ID) == 0, "Offset mismatch for FChatCompletionFunctionCall::ID");
static_assert(offsetof(FChatCompletionFunctionCall, Function) == 16, "Offset mismatch for FChatCompletionFunctionCall::Function");
static_assert(offsetof(FChatCompletionFunctionCall, Arguments) == 32, "Offset mismatch for FChatCompletionFunctionCall::Arguments");

// /Script/ChatCompletion.ChatCompletionFunctionCallResult
// Kind: ScriptStruct; super: none
struct FChatCompletionFunctionCallResult
{
public:
    std::uint8_t Function[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString FunctionCallID; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Result[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatCompletionFunctionCallResult, Function) == 0, "Offset mismatch for FChatCompletionFunctionCallResult::Function");
static_assert(offsetof(FChatCompletionFunctionCallResult, FunctionCallID) == 16, "Offset mismatch for FChatCompletionFunctionCallResult::FunctionCallID");
static_assert(offsetof(FChatCompletionFunctionCallResult, Result) == 32, "Offset mismatch for FChatCompletionFunctionCallResult::Result");

// /Script/ChatCompletion.ChatCompletionFunctionResultsMessage
// Kind: ScriptStruct; super: ChatCompletionMessageBase
struct FChatCompletionFunctionResultsMessage
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> FunctionResults; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChatCompletionFunctionResultsMessage, FunctionResults) == 8, "Offset mismatch for FChatCompletionFunctionResultsMessage::FunctionResults");

// /Script/ChatCompletion.ChatCompletionGenerationSettings
// Kind: ScriptStruct; super: none
struct FChatCompletionGenerationSettings
{
public:
    std::uint8_t Temperature[0x8]; // 0x0000 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t FunctionCallingMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowParallelFunctionCalls; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoSubstituteUndefinedFunctionCallHistory; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t ResponseFormat; // 0x000B (Size: 0x1, Type: EnumProperty)
    std::uint8_t MaxOutputTokens[0x8]; // 0x000C (Size: 0x8, Type: OptionalProperty)
    std::uint8_t FrequencyPenalty[0x8]; // 0x0014 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t PresencePenalty[0x8]; // 0x001C (Size: 0x8, Type: OptionalProperty)
    std::uint8_t ThinkingBudget[0x8]; // 0x0024 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t ThinkingLevel[0x2]; // 0x002C (Size: 0x2, Type: OptionalProperty)
    std::uint8_t ThinkingMode[0x1]; // 0x002E (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FChatCompletionGenerationSettings, Temperature) == 0, "Offset mismatch for FChatCompletionGenerationSettings::Temperature");
static_assert(offsetof(FChatCompletionGenerationSettings, FunctionCallingMode) == 8, "Offset mismatch for FChatCompletionGenerationSettings::FunctionCallingMode");
static_assert(offsetof(FChatCompletionGenerationSettings, bAllowParallelFunctionCalls) == 9, "Offset mismatch for FChatCompletionGenerationSettings::bAllowParallelFunctionCalls");
static_assert(offsetof(FChatCompletionGenerationSettings, bAutoSubstituteUndefinedFunctionCallHistory) == 10, "Offset mismatch for FChatCompletionGenerationSettings::bAutoSubstituteUndefinedFunctionCallHistory");
static_assert(offsetof(FChatCompletionGenerationSettings, ResponseFormat) == 11, "Offset mismatch for FChatCompletionGenerationSettings::ResponseFormat");
static_assert(offsetof(FChatCompletionGenerationSettings, MaxOutputTokens) == 12, "Offset mismatch for FChatCompletionGenerationSettings::MaxOutputTokens");
static_assert(offsetof(FChatCompletionGenerationSettings, FrequencyPenalty) == 20, "Offset mismatch for FChatCompletionGenerationSettings::FrequencyPenalty");
static_assert(offsetof(FChatCompletionGenerationSettings, PresencePenalty) == 28, "Offset mismatch for FChatCompletionGenerationSettings::PresencePenalty");
static_assert(offsetof(FChatCompletionGenerationSettings, ThinkingBudget) == 36, "Offset mismatch for FChatCompletionGenerationSettings::ThinkingBudget");
static_assert(offsetof(FChatCompletionGenerationSettings, ThinkingLevel) == 44, "Offset mismatch for FChatCompletionGenerationSettings::ThinkingLevel");
static_assert(offsetof(FChatCompletionGenerationSettings, ThinkingMode) == 46, "Offset mismatch for FChatCompletionGenerationSettings::ThinkingMode");

// /Script/ChatCompletion.ChatCompletionMessageBase
// Kind: ScriptStruct; super: none
struct FChatCompletionMessageBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChatCompletion.ChatCompletionPropertyMetaData
// Kind: ScriptStruct; super: none
struct FChatCompletionPropertyMetaData
{
public:
    TMap<void*, void*> PropertyDescriptions; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PropertyClampMin; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PropertyClampMax; // 0x0020 (Size: 0x10, Type: MapProperty)
    TArray<void*> RequiredPropertyNames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> GameplayTagCategories; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FChatCompletionPropertyMetaData, PropertyDescriptions) == 0, "Offset mismatch for FChatCompletionPropertyMetaData::PropertyDescriptions");
static_assert(offsetof(FChatCompletionPropertyMetaData, PropertyClampMin) == 16, "Offset mismatch for FChatCompletionPropertyMetaData::PropertyClampMin");
static_assert(offsetof(FChatCompletionPropertyMetaData, PropertyClampMax) == 32, "Offset mismatch for FChatCompletionPropertyMetaData::PropertyClampMax");
static_assert(offsetof(FChatCompletionPropertyMetaData, RequiredPropertyNames) == 48, "Offset mismatch for FChatCompletionPropertyMetaData::RequiredPropertyNames");
static_assert(offsetof(FChatCompletionPropertyMetaData, GameplayTagCategories) == 64, "Offset mismatch for FChatCompletionPropertyMetaData::GameplayTagCategories");

// /Script/ChatCompletion.ChatCompletionRequestHandle
// Kind: ScriptStruct; super: none
struct FChatCompletionRequestHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChatCompletion.ChatCompletionRequest_StructuredResponseHandle
// Kind: ScriptStruct; super: ChatCompletionRequestHandle
struct FChatCompletionRequest_StructuredResponseHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChatCompletion.ChatCompletionRequest_UnstructuredResponseHandle
// Kind: ScriptStruct; super: ChatCompletionRequestHandle
struct FChatCompletionRequest_UnstructuredResponseHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChatCompletion.ChatCompletionResponseMessage
// Kind: ScriptStruct; super: ChatCompletionResponseMessageBase
struct FChatCompletionResponseMessage
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FString Content; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FChatCompletionResponseMessage, Content) == 24, "Offset mismatch for FChatCompletionResponseMessage::Content");

// /Script/ChatCompletion.ChatCompletionResponseMessageBase
// Kind: ScriptStruct; super: ChatCompletionMessageBase
struct FChatCompletionResponseMessageBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> FunctionCalls; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChatCompletionResponseMessageBase, FunctionCalls) == 8, "Offset mismatch for FChatCompletionResponseMessageBase::FunctionCalls");

// /Script/ChatCompletion.ChatCompletionRetryCounts
// Kind: ScriptStruct; super: none
struct FChatCompletionRetryCounts
{
public:
    std::int32_t AnyReasonRetryCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TMap<void*, void*> ErrorRetryCounts; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FChatCompletionRetryCounts, AnyReasonRetryCount) == 0, "Offset mismatch for FChatCompletionRetryCounts::AnyReasonRetryCount");
static_assert(offsetof(FChatCompletionRetryCounts, ErrorRetryCounts) == 8, "Offset mismatch for FChatCompletionRetryCounts::ErrorRetryCounts");

// /Script/ChatCompletion.ChatCompletionRetrySettings
// Kind: ScriptStruct; super: none
struct FChatCompletionRetrySettings
{
public:
    std::uint8_t RetryCounts[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAutoRespondToMalformedFunctionCalls; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChatCompletionRetrySettings, RetryCounts) == 0, "Offset mismatch for FChatCompletionRetrySettings::RetryCounts");
static_assert(offsetof(FChatCompletionRetrySettings, bAutoRespondToMalformedFunctionCalls) == 24, "Offset mismatch for FChatCompletionRetrySettings::bAutoRespondToMalformedFunctionCalls");

// /Script/ChatCompletion.ChatCompletionSafetySetting
// Kind: ScriptStruct; super: none
struct FChatCompletionSafetySetting
{
public:
    std::uint8_t BlockThreshold; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BlockMethod; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChatCompletionSafetySetting, BlockThreshold) == 0, "Offset mismatch for FChatCompletionSafetySetting::BlockThreshold");
static_assert(offsetof(FChatCompletionSafetySetting, BlockMethod) == 1, "Offset mismatch for FChatCompletionSafetySetting::BlockMethod");

// /Script/ChatCompletion.ChatCompletionSafetySettings
// Kind: ScriptStruct; super: none
struct FChatCompletionSafetySettings
{
public:
    TMap<void*, void*> HarmCategorySettings; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FChatCompletionSafetySettings, HarmCategorySettings) == 0, "Offset mismatch for FChatCompletionSafetySettings::HarmCategorySettings");

// /Script/ChatCompletion.ChatCompletionSettings
// Kind: ScriptStruct; super: none
struct FChatCompletionSettings
{
public:
    std::uint8_t GenerationSettings[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t SafetySettings[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t RetrySettings[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatCompletionSettings, GenerationSettings) == 0, "Offset mismatch for FChatCompletionSettings::GenerationSettings");
static_assert(offsetof(FChatCompletionSettings, SafetySettings) == 48, "Offset mismatch for FChatCompletionSettings::SafetySettings");
static_assert(offsetof(FChatCompletionSettings, RetrySettings) == 64, "Offset mismatch for FChatCompletionSettings::RetrySettings");

// /Script/ChatCompletion.ChatCompletionStructuredData
// Kind: ScriptStruct; super: JsonObjectWrapper
struct FChatCompletionStructuredData
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t TypedData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatCompletionStructuredData, TypedData) == 32, "Offset mismatch for FChatCompletionStructuredData::TypedData");

// /Script/ChatCompletion.ChatCompletionStructuredDataSchema
// Kind: ScriptStruct; super: none
struct FChatCompletionStructuredDataSchema
{
public:
    void* StructType; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int64_t RequiredPropertyFlags; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::int64_t SkipPropertyFlags; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::uint8_t bHasCustomPropertyMetaData; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    std::uint8_t PropertyMetaData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatCompletionStructuredDataSchema, StructType) == 0, "Offset mismatch for FChatCompletionStructuredDataSchema::StructType");
static_assert(offsetof(FChatCompletionStructuredDataSchema, RequiredPropertyFlags) == 8, "Offset mismatch for FChatCompletionStructuredDataSchema::RequiredPropertyFlags");
static_assert(offsetof(FChatCompletionStructuredDataSchema, SkipPropertyFlags) == 16, "Offset mismatch for FChatCompletionStructuredDataSchema::SkipPropertyFlags");
static_assert(offsetof(FChatCompletionStructuredDataSchema, bHasCustomPropertyMetaData) == 24, "Offset mismatch for FChatCompletionStructuredDataSchema::bHasCustomPropertyMetaData");
static_assert(offsetof(FChatCompletionStructuredDataSchema, PropertyMetaData) == 32, "Offset mismatch for FChatCompletionStructuredDataSchema::PropertyMetaData");

// /Script/ChatCompletion.ChatCompletionStructuredResponseDataSchema
// Kind: ScriptStruct; super: ChatCompletionStructuredDataSchema
struct FChatCompletionStructuredResponseDataSchema
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName Name; // 0x0070 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FChatCompletionStructuredResponseDataSchema, Name) == 112, "Offset mismatch for FChatCompletionStructuredResponseDataSchema::Name");

// /Script/ChatCompletion.ChatCompletionStructuredResponseMessage
// Kind: ScriptStruct; super: ChatCompletionResponseMessageBase
struct FChatCompletionStructuredResponseMessage
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t StructuredContent[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatCompletionStructuredResponseMessage, StructuredContent) == 24, "Offset mismatch for FChatCompletionStructuredResponseMessage::StructuredContent");

// /Script/ChatCompletion.ChatCompletionTesting_PlayerStats
// Kind: ScriptStruct; super: none
struct FChatCompletionTesting_PlayerStats
{
public:
    float Health; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t HitsTaken; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FChatCompletionTesting_PlayerStats, Health) == 0, "Offset mismatch for FChatCompletionTesting_PlayerStats::Health");
static_assert(offsetof(FChatCompletionTesting_PlayerStats, HitsTaken) == 4, "Offset mismatch for FChatCompletionTesting_PlayerStats::HitsTaken");

// /Script/ChatCompletion.ChatCompletionUsage
// Kind: ScriptStruct; super: none
struct FChatCompletionUsage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChatCompletion.ChatCompletionUserMessage
// Kind: ScriptStruct; super: ChatCompletionMessageBase
struct FChatCompletionUserMessage
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString Content; // 0x0008 (Size: 0x10, Type: StrProperty)
    TArray<void*> Attachments; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChatCompletionUserMessage, Content) == 8, "Offset mismatch for FChatCompletionUserMessage::Content");
static_assert(offsetof(FChatCompletionUserMessage, Attachments) == 24, "Offset mismatch for FChatCompletionUserMessage::Attachments");

// /Script/ChatCompletion.SharedChatCompletionFunctionHandle
// Kind: ScriptStruct; super: none
struct FSharedChatCompletionFunctionHandle
{
public:
    std::uint8_t FunctionStruct[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSharedChatCompletionFunctionHandle, FunctionStruct) == 0, "Offset mismatch for FSharedChatCompletionFunctionHandle::FunctionStruct");

// /Script/ChatCompletion.AsyncAction_ChatCompletionRequest
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_ChatCompletionRequest
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ChatCompleter; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAsyncAction_ChatCompletionRequest, OnSuccess) == 48, "Offset mismatch for UAsyncAction_ChatCompletionRequest::OnSuccess");
static_assert(offsetof(UAsyncAction_ChatCompletionRequest, OnFailure) == 64, "Offset mismatch for UAsyncAction_ChatCompletionRequest::OnFailure");
static_assert(offsetof(UAsyncAction_ChatCompletionRequest, ChatCompleter) == 80, "Offset mismatch for UAsyncAction_ChatCompletionRequest::ChatCompleter");

// /Script/ChatCompletion.AsyncAction_StructuredChatCompletionRequest
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_StructuredChatCompletionRequest
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ChatCompleter; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAsyncAction_StructuredChatCompletionRequest, OnSuccess) == 48, "Offset mismatch for UAsyncAction_StructuredChatCompletionRequest::OnSuccess");
static_assert(offsetof(UAsyncAction_StructuredChatCompletionRequest, OnFailure) == 64, "Offset mismatch for UAsyncAction_StructuredChatCompletionRequest::OnFailure");
static_assert(offsetof(UAsyncAction_StructuredChatCompletionRequest, ChatCompleter) == 80, "Offset mismatch for UAsyncAction_StructuredChatCompletionRequest::ChatCompleter");

// /Script/ChatCompletion.ChatCompleter
// Kind: Class; super: Object
class UChatCompleter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnGenerateResponse; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGenerateStructuredResponse; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnResponse; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStructuredResponse; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> Subsystem; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bStripFromClientBuilds; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UChatCompleter, OnGenerateResponse) == 40, "Offset mismatch for UChatCompleter::OnGenerateResponse");
static_assert(offsetof(UChatCompleter, OnGenerateStructuredResponse) == 56, "Offset mismatch for UChatCompleter::OnGenerateStructuredResponse");
static_assert(offsetof(UChatCompleter, OnResponse) == 72, "Offset mismatch for UChatCompleter::OnResponse");
static_assert(offsetof(UChatCompleter, OnStructuredResponse) == 88, "Offset mismatch for UChatCompleter::OnStructuredResponse");
static_assert(offsetof(UChatCompleter, OnFailure) == 104, "Offset mismatch for UChatCompleter::OnFailure");
static_assert(offsetof(UChatCompleter, Subsystem) == 120, "Offset mismatch for UChatCompleter::Subsystem");
static_assert(offsetof(UChatCompleter, bStripFromClientBuilds) == 128, "Offset mismatch for UChatCompleter::bStripFromClientBuilds");

// /Script/ChatCompletion.ChatCompleterBase
// Kind: Class; super: ChatCompleter
class UChatCompleterBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnGenerateResponse; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGenerateStructuredResponse; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnResponse; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStructuredResponse; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> Subsystem; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bStripFromClientBuilds; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UChatCompleterBase, OnGenerateResponse) == 40, "Offset mismatch for UChatCompleterBase::OnGenerateResponse");
static_assert(offsetof(UChatCompleterBase, OnGenerateStructuredResponse) == 56, "Offset mismatch for UChatCompleterBase::OnGenerateStructuredResponse");
static_assert(offsetof(UChatCompleterBase, OnResponse) == 72, "Offset mismatch for UChatCompleterBase::OnResponse");
static_assert(offsetof(UChatCompleterBase, OnStructuredResponse) == 88, "Offset mismatch for UChatCompleterBase::OnStructuredResponse");
static_assert(offsetof(UChatCompleterBase, OnFailure) == 104, "Offset mismatch for UChatCompleterBase::OnFailure");
static_assert(offsetof(UChatCompleterBase, Subsystem) == 120, "Offset mismatch for UChatCompleterBase::Subsystem");
static_assert(offsetof(UChatCompleterBase, bStripFromClientBuilds) == 128, "Offset mismatch for UChatCompleterBase::bStripFromClientBuilds");

// /Script/ChatCompletion.ChatCompleterMock
// Kind: Class; super: ChatCompleter
class UChatCompleterMock
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnGenerateResponse; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGenerateStructuredResponse; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnResponse; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStructuredResponse; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> Subsystem; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bStripFromClientBuilds; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UChatCompleterMock, OnGenerateResponse) == 40, "Offset mismatch for UChatCompleterMock::OnGenerateResponse");
static_assert(offsetof(UChatCompleterMock, OnGenerateStructuredResponse) == 56, "Offset mismatch for UChatCompleterMock::OnGenerateStructuredResponse");
static_assert(offsetof(UChatCompleterMock, OnResponse) == 72, "Offset mismatch for UChatCompleterMock::OnResponse");
static_assert(offsetof(UChatCompleterMock, OnStructuredResponse) == 88, "Offset mismatch for UChatCompleterMock::OnStructuredResponse");
static_assert(offsetof(UChatCompleterMock, OnFailure) == 104, "Offset mismatch for UChatCompleterMock::OnFailure");
static_assert(offsetof(UChatCompleterMock, Subsystem) == 120, "Offset mismatch for UChatCompleterMock::Subsystem");
static_assert(offsetof(UChatCompleterMock, bStripFromClientBuilds) == 128, "Offset mismatch for UChatCompleterMock::bStripFromClientBuilds");

// /Script/ChatCompletion.ChatCompletionCheatManager
// Kind: Class; super: CheatManagerExtension
class UChatCompletionCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChatCompletion.ChatCompletionFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UChatCompletionFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChatCompletion.ChatCompletionSubsystem
// Kind: Class; super: EngineSubsystem
class UChatCompletionSubsystem
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FString AnalyticsEventNamespace; // 0x0078 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UChatCompletionSubsystem, AnalyticsEventNamespace) == 120, "Offset mismatch for UChatCompletionSubsystem::AnalyticsEventNamespace");
