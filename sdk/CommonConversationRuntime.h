/**
 * decamp dumper generated SDK
 * Package: /Script/CommonConversationRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CommonConversationRuntime.AdvanceConversationRequest
// Kind: ScriptStruct; super: none
struct FAdvanceConversationRequest
{
public:
    std::uint8_t Choice[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TArray<void*> UserParameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAdvanceConversationRequest, Choice) == 0, "Offset mismatch for FAdvanceConversationRequest::Choice");
static_assert(offsetof(FAdvanceConversationRequest, UserParameters) == 32, "Offset mismatch for FAdvanceConversationRequest::UserParameters");

// /Script/CommonConversationRuntime.ClientConversationMessage
// Kind: ScriptStruct; super: none
struct FClientConversationMessage
{
public:
    std::uint8_t SpeakerID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t ParticipantDisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t Text[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    TArray<void*> MetadataParameters; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FClientConversationMessage, SpeakerID) == 0, "Offset mismatch for FClientConversationMessage::SpeakerID");
static_assert(offsetof(FClientConversationMessage, ParticipantDisplayName) == 8, "Offset mismatch for FClientConversationMessage::ParticipantDisplayName");
static_assert(offsetof(FClientConversationMessage, Text) == 24, "Offset mismatch for FClientConversationMessage::Text");
static_assert(offsetof(FClientConversationMessage, MetadataParameters) == 40, "Offset mismatch for FClientConversationMessage::MetadataParameters");

// /Script/CommonConversationRuntime.ClientConversationMessagePayload
// Kind: ScriptStruct; super: none
struct FClientConversationMessagePayload
{
public:
    std::uint8_t Message[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t Participants[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t CurrentNode[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    TArray<void*> Options; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FClientConversationMessagePayload, Message) == 0, "Offset mismatch for FClientConversationMessagePayload::Message");
static_assert(offsetof(FClientConversationMessagePayload, Participants) == 56, "Offset mismatch for FClientConversationMessagePayload::Participants");
static_assert(offsetof(FClientConversationMessagePayload, CurrentNode) == 72, "Offset mismatch for FClientConversationMessagePayload::CurrentNode");
static_assert(offsetof(FClientConversationMessagePayload, Options) == 88, "Offset mismatch for FClientConversationMessagePayload::Options");

// /Script/CommonConversationRuntime.ClientConversationOptionEntry
// Kind: ScriptStruct; super: none
struct FClientConversationOptionEntry
{
public:
    std::uint8_t ChoiceText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t ChoiceTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t ChoiceType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0031
    std::uint8_t ChoiceReference[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    TArray<void*> ExtraData; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FClientConversationOptionEntry, ChoiceText) == 0, "Offset mismatch for FClientConversationOptionEntry::ChoiceText");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceTags) == 16, "Offset mismatch for FClientConversationOptionEntry::ChoiceTags");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceType) == 48, "Offset mismatch for FClientConversationOptionEntry::ChoiceType");
static_assert(offsetof(FClientConversationOptionEntry, ChoiceReference) == 56, "Offset mismatch for FClientConversationOptionEntry::ChoiceReference");
static_assert(offsetof(FClientConversationOptionEntry, ExtraData) == 88, "Offset mismatch for FClientConversationOptionEntry::ExtraData");

// /Script/CommonConversationRuntime.CommonDialogueBankParticipant
// Kind: ScriptStruct; super: none
struct FCommonDialogueBankParticipant
{
public:
    std::uint8_t FallbackName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t ParticipantName[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t NodeTint[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCommonDialogueBankParticipant, FallbackName) == 0, "Offset mismatch for FCommonDialogueBankParticipant::FallbackName");
static_assert(offsetof(FCommonDialogueBankParticipant, ParticipantName) == 16, "Offset mismatch for FCommonDialogueBankParticipant::ParticipantName");
static_assert(offsetof(FCommonDialogueBankParticipant, NodeTint) == 20, "Offset mismatch for FCommonDialogueBankParticipant::NodeTint");

// /Script/CommonConversationRuntime.ConversationBranchPoint
// Kind: ScriptStruct; super: none
struct FConversationBranchPoint
{
public:
    TArray<void*> ReturnScopeStack; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ClientChoice[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConversationBranchPoint, ReturnScopeStack) == 0, "Offset mismatch for FConversationBranchPoint::ReturnScopeStack");
static_assert(offsetof(FConversationBranchPoint, ClientChoice) == 16, "Offset mismatch for FConversationBranchPoint::ClientChoice");

// /Script/CommonConversationRuntime.ConversationChoiceData
// Kind: ScriptStruct; super: none
struct FConversationChoiceData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonConversationRuntime.ConversationChoiceDataHandle
// Kind: ScriptStruct; super: none
struct FConversationChoiceDataHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonConversationRuntime.ConversationChoiceReference
// Kind: ScriptStruct; super: none
struct FConversationChoiceReference
{
public:
    std::uint8_t NodeReference[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> NodeParameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConversationChoiceReference, NodeReference) == 0, "Offset mismatch for FConversationChoiceReference::NodeReference");
static_assert(offsetof(FConversationChoiceReference, NodeParameters) == 16, "Offset mismatch for FConversationChoiceReference::NodeParameters");

// /Script/CommonConversationRuntime.ConversationContext
// Kind: ScriptStruct; super: none
struct FConversationContext
{
public:
    void* ConversationRegistry; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ActiveConversation; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ClientParticipant; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* TaskBeingConsidered; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ReturnScopeStack; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bServer_PRIVATE; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClient_PRIVATE; // 0x0031 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FConversationContext, ConversationRegistry) == 0, "Offset mismatch for FConversationContext::ConversationRegistry");
static_assert(offsetof(FConversationContext, ActiveConversation) == 8, "Offset mismatch for FConversationContext::ActiveConversation");
static_assert(offsetof(FConversationContext, ClientParticipant) == 16, "Offset mismatch for FConversationContext::ClientParticipant");
static_assert(offsetof(FConversationContext, TaskBeingConsidered) == 24, "Offset mismatch for FConversationContext::TaskBeingConsidered");
static_assert(offsetof(FConversationContext, ReturnScopeStack) == 32, "Offset mismatch for FConversationContext::ReturnScopeStack");
static_assert(offsetof(FConversationContext, bServer_PRIVATE) == 48, "Offset mismatch for FConversationContext::bServer_PRIVATE");
static_assert(offsetof(FConversationContext, bClient_PRIVATE) == 49, "Offset mismatch for FConversationContext::bClient_PRIVATE");

// /Script/CommonConversationRuntime.ConversationEntryList
// Kind: ScriptStruct; super: none
struct FConversationEntryList
{
public:
    std::uint8_t EntryTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> DestinationList; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    FString EntryIdentifier; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FConversationEntryList, EntryTag) == 0, "Offset mismatch for FConversationEntryList::EntryTag");
static_assert(offsetof(FConversationEntryList, DestinationList) == 8, "Offset mismatch for FConversationEntryList::DestinationList");
static_assert(offsetof(FConversationEntryList, EntryIdentifier) == 24, "Offset mismatch for FConversationEntryList::EntryIdentifier");

// /Script/CommonConversationRuntime.ConversationNodeHandle
// Kind: ScriptStruct; super: none
struct FConversationNodeHandle
{
public:
    std::uint8_t NodeGUID[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConversationNodeHandle, NodeGUID) == 0, "Offset mismatch for FConversationNodeHandle::NodeGUID");

// /Script/CommonConversationRuntime.ConversationNodeParameterPair
// Kind: ScriptStruct; super: none
struct FConversationNodeParameterPair
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FConversationNodeParameterPair, Name) == 0, "Offset mismatch for FConversationNodeParameterPair::Name");
static_assert(offsetof(FConversationNodeParameterPair, Value) == 16, "Offset mismatch for FConversationNodeParameterPair::Value");

// /Script/CommonConversationRuntime.ConversationParticipantEntry
// Kind: ScriptStruct; super: none
struct FConversationParticipantEntry
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ParticipantID[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConversationParticipantEntry, Actor) == 0, "Offset mismatch for FConversationParticipantEntry::Actor");
static_assert(offsetof(FConversationParticipantEntry, ParticipantID) == 8, "Offset mismatch for FConversationParticipantEntry::ParticipantID");

// /Script/CommonConversationRuntime.ConversationParticipants
// Kind: ScriptStruct; super: none
struct FConversationParticipants
{
public:
    TArray<void*> List; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConversationParticipants, List) == 0, "Offset mismatch for FConversationParticipants::List");

// /Script/CommonConversationRuntime.ConversationTaskResult
// Kind: ScriptStruct; super: none
struct FConversationTaskResult
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t AdvanceToChoice[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t Message[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConversationTaskResult, Type) == 0, "Offset mismatch for FConversationTaskResult::Type");
static_assert(offsetof(FConversationTaskResult, AdvanceToChoice) == 8, "Offset mismatch for FConversationTaskResult::AdvanceToChoice");
static_assert(offsetof(FConversationTaskResult, Message) == 56, "Offset mismatch for FConversationTaskResult::Message");

// /Script/CommonConversationRuntime.NetSerializeScriptStructCache_ConvVersion
// Kind: ScriptStruct; super: none
struct FNetSerializeScriptStructCache_ConvVersion
{
public:
    TMap<void*, void*> ScriptStructsToIndex; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> IndexToScriptStructs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNetSerializeScriptStructCache_ConvVersion, ScriptStructsToIndex) == 0, "Offset mismatch for FNetSerializeScriptStructCache_ConvVersion::ScriptStructsToIndex");
static_assert(offsetof(FNetSerializeScriptStructCache_ConvVersion, IndexToScriptStructs) == 16, "Offset mismatch for FNetSerializeScriptStructCache_ConvVersion::IndexToScriptStructs");

// /Script/CommonConversationRuntime.ConversationChoiceNode
// Kind: Class; super: ConversationSubNode
class UConversationChoiceNode
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t DefaultChoiceDisplayText[0x10]; // 0x0058 (Size: 0x10, Type: TextProperty)
    std::uint8_t ChoiceTags[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UConversationChoiceNode, DefaultChoiceDisplayText) == 88, "Offset mismatch for UConversationChoiceNode::DefaultChoiceDisplayText");
static_assert(offsetof(UConversationChoiceNode, ChoiceTags) == 104, "Offset mismatch for UConversationChoiceNode::ChoiceTags");

// /Script/CommonConversationRuntime.ConversationContextHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UConversationContextHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonConversationRuntime.ConversationDatabase
// Kind: Class; super: PrimaryDataAsset
class UConversationDatabase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t CompilerVersion; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TMap<void*, void*> ReachableNodeMap; // 0x0030 (Size: 0x10, Type: MapProperty)
    TArray<void*> EntryTags; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExitTags[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    TArray<void*> InternalNodeIds; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LinkedToNodeIds; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Speakers; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UConversationDatabase, CompilerVersion) == 40, "Offset mismatch for UConversationDatabase::CompilerVersion");
static_assert(offsetof(UConversationDatabase, ReachableNodeMap) == 48, "Offset mismatch for UConversationDatabase::ReachableNodeMap");
static_assert(offsetof(UConversationDatabase, EntryTags) == 64, "Offset mismatch for UConversationDatabase::EntryTags");
static_assert(offsetof(UConversationDatabase, ExitTags) == 80, "Offset mismatch for UConversationDatabase::ExitTags");
static_assert(offsetof(UConversationDatabase, InternalNodeIds) == 112, "Offset mismatch for UConversationDatabase::InternalNodeIds");
static_assert(offsetof(UConversationDatabase, LinkedToNodeIds) == 128, "Offset mismatch for UConversationDatabase::LinkedToNodeIds");
static_assert(offsetof(UConversationDatabase, Speakers) == 144, "Offset mismatch for UConversationDatabase::Speakers");

// /Script/CommonConversationRuntime.ConversationEntryPointNode
// Kind: Class; super: ConversationNodeWithLinks
class UConversationEntryPointNode
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t EntryTag[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UConversationEntryPointNode, EntryTag) == 104, "Offset mismatch for UConversationEntryPointNode::EntryTag");

// /Script/CommonConversationRuntime.ConversationInstance
// Kind: Class; super: Object
class UConversationInstance
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t Participants[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    void* ActiveConversationGraph; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConversationInstance, Participants) == 80, "Offset mismatch for UConversationInstance::Participants");
static_assert(offsetof(UConversationInstance, ActiveConversationGraph) == 96, "Offset mismatch for UConversationInstance::ActiveConversationGraph");

// /Script/CommonConversationRuntime.ConversationLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UConversationLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonConversationRuntime.ConversationLinkNode
// Kind: Class; super: ConversationTaskNode
class UConversationLinkNode
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t RemoteEntryTag[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UConversationLinkNode, RemoteEntryTag) == 128, "Offset mismatch for UConversationLinkNode::RemoteEntryTag");

// /Script/CommonConversationRuntime.ConversationNode
// Kind: Class; super: Object
class UConversationNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* EvalWorldContextObj; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FString NodeName; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t Compiled_NodeGUID[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    void* ParentNode; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConversationNode, EvalWorldContextObj) == 40, "Offset mismatch for UConversationNode::EvalWorldContextObj");
static_assert(offsetof(UConversationNode, NodeName) == 48, "Offset mismatch for UConversationNode::NodeName");
static_assert(offsetof(UConversationNode, Compiled_NodeGUID) == 64, "Offset mismatch for UConversationNode::Compiled_NodeGUID");
static_assert(offsetof(UConversationNode, ParentNode) == 80, "Offset mismatch for UConversationNode::ParentNode");

// /Script/CommonConversationRuntime.ConversationNodeWithLinks
// Kind: Class; super: ConversationNode
class UConversationNodeWithLinks
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> OutputConnections; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UConversationNodeWithLinks, OutputConnections) == 88, "Offset mismatch for UConversationNodeWithLinks::OutputConnections");

// /Script/CommonConversationRuntime.ConversationParticipantComponent
// Kind: Class; super: ActorComponent
class UConversationParticipantComponent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::int32_t ConversationsActive; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0124
    void* Auth_CurrentConversation; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Auth_Conversations; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LastMessage[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UConversationParticipantComponent, ConversationsActive) == 288, "Offset mismatch for UConversationParticipantComponent::ConversationsActive");
static_assert(offsetof(UConversationParticipantComponent, Auth_CurrentConversation) == 296, "Offset mismatch for UConversationParticipantComponent::Auth_CurrentConversation");
static_assert(offsetof(UConversationParticipantComponent, Auth_Conversations) == 304, "Offset mismatch for UConversationParticipantComponent::Auth_Conversations");
static_assert(offsetof(UConversationParticipantComponent, LastMessage) == 320, "Offset mismatch for UConversationParticipantComponent::LastMessage");

// /Script/CommonConversationRuntime.ConversationRegistry
// Kind: Class; super: WorldSubsystem
class UConversationRegistry
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t ConversationChoiceDataStructCache[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UConversationRegistry, ConversationChoiceDataStructCache) == 64, "Offset mismatch for UConversationRegistry::ConversationChoiceDataStructCache");

// /Script/CommonConversationRuntime.ConversationRequirementNode
// Kind: Class; super: ConversationSubNode
class UConversationRequirementNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* EvalWorldContextObj; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FString NodeName; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t Compiled_NodeGUID[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    void* ParentNode; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConversationRequirementNode, EvalWorldContextObj) == 40, "Offset mismatch for UConversationRequirementNode::EvalWorldContextObj");
static_assert(offsetof(UConversationRequirementNode, NodeName) == 48, "Offset mismatch for UConversationRequirementNode::NodeName");
static_assert(offsetof(UConversationRequirementNode, Compiled_NodeGUID) == 64, "Offset mismatch for UConversationRequirementNode::Compiled_NodeGUID");
static_assert(offsetof(UConversationRequirementNode, ParentNode) == 80, "Offset mismatch for UConversationRequirementNode::ParentNode");

// /Script/CommonConversationRuntime.ConversationSettings
// Kind: Class; super: DeveloperSettings
class UConversationSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TSoftClassPtr<void> ConversationInstanceClass; // 0x0030 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UConversationSettings, ConversationInstanceClass) == 48, "Offset mismatch for UConversationSettings::ConversationInstanceClass");

// /Script/CommonConversationRuntime.ConversationSideEffectNode
// Kind: Class; super: ConversationSubNode
class UConversationSideEffectNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* EvalWorldContextObj; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FString NodeName; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t Compiled_NodeGUID[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    void* ParentNode; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConversationSideEffectNode, EvalWorldContextObj) == 40, "Offset mismatch for UConversationSideEffectNode::EvalWorldContextObj");
static_assert(offsetof(UConversationSideEffectNode, NodeName) == 48, "Offset mismatch for UConversationSideEffectNode::NodeName");
static_assert(offsetof(UConversationSideEffectNode, Compiled_NodeGUID) == 64, "Offset mismatch for UConversationSideEffectNode::Compiled_NodeGUID");
static_assert(offsetof(UConversationSideEffectNode, ParentNode) == 80, "Offset mismatch for UConversationSideEffectNode::ParentNode");

// /Script/CommonConversationRuntime.ConversationSubNode
// Kind: Class; super: ConversationNode
class UConversationSubNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* EvalWorldContextObj; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FString NodeName; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t Compiled_NodeGUID[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    void* ParentNode; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConversationSubNode, EvalWorldContextObj) == 40, "Offset mismatch for UConversationSubNode::EvalWorldContextObj");
static_assert(offsetof(UConversationSubNode, NodeName) == 48, "Offset mismatch for UConversationSubNode::NodeName");
static_assert(offsetof(UConversationSubNode, Compiled_NodeGUID) == 64, "Offset mismatch for UConversationSubNode::Compiled_NodeGUID");
static_assert(offsetof(UConversationSubNode, ParentNode) == 80, "Offset mismatch for UConversationSubNode::ParentNode");

// /Script/CommonConversationRuntime.ConversationTaskNode
// Kind: Class; super: ConversationNodeWithLinks
class UConversationTaskNode
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> SubNodes; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreRequirementsWhileAdvancingConversations; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BranchOrder; // 0x0079 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UConversationTaskNode, SubNodes) == 104, "Offset mismatch for UConversationTaskNode::SubNodes");
static_assert(offsetof(UConversationTaskNode, bIgnoreRequirementsWhileAdvancingConversations) == 120, "Offset mismatch for UConversationTaskNode::bIgnoreRequirementsWhileAdvancingConversations");
static_assert(offsetof(UConversationTaskNode, BranchOrder) == 121, "Offset mismatch for UConversationTaskNode::BranchOrder");
