/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteConversationRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortniteConversationRuntime.ConversationSettingDialogMarkerData
// Kind: ScriptStruct; super: none
struct FConversationSettingDialogMarkerData
{
public:
    TSoftClassPtr<void> DialogMarkerSoftClass; // 0x0000 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FConversationSettingDialogMarkerData, DialogMarkerSoftClass) == 0, "Offset mismatch for FConversationSettingDialogMarkerData::DialogMarkerSoftClass");

// /Script/FortniteConversationRuntime.FortConversationConditionalMessage
// Kind: ScriptStruct; super: none
struct FFortConversationConditionalMessage
{
public:
    void* Condition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FText Message; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FFortConversationConditionalMessage, Condition) == 0, "Offset mismatch for FFortConversationConditionalMessage::Condition");
static_assert(offsetof(FFortConversationConditionalMessage, Message) == 8, "Offset mismatch for FFortConversationConditionalMessage::Message");

// /Script/FortniteConversationRuntime.FortConversationEnterEvent
// Kind: ScriptStruct; super: none
struct FFortConversationEnterEvent
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortConversationEnterEvent, PlayerController) == 0, "Offset mismatch for FFortConversationEnterEvent::PlayerController");

// /Script/FortniteConversationRuntime.FortConversationLeaveEvent
// Kind: ScriptStruct; super: none
struct FFortConversationLeaveEvent
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortConversationLeaveEvent, PlayerController) == 0, "Offset mismatch for FFortConversationLeaveEvent::PlayerController");

// /Script/FortniteConversationRuntime.FortConversationNodeConditionalMessages
// Kind: ScriptStruct; super: none
struct FFortConversationNodeConditionalMessages
{
public:
    TArray<void*> Messages; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortConversationNodeConditionalMessages, Messages) == 0, "Offset mismatch for FFortConversationNodeConditionalMessages::Messages");

// /Script/FortniteConversationRuntime.FortConversation_NPC_AddIndicator
// Kind: ScriptStruct; super: NPCConversationIndicatorMessage
struct FFortConversation_NPC_AddIndicator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.FortConversation_NPC_RemoveIndicator
// Kind: ScriptStruct; super: NPCConversationIndicatorMessage
struct FFortConversation_NPC_RemoveIndicator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.FortConversation_SetDialogMarkerClassEvent
// Kind: ScriptStruct; super: none
struct FFortConversation_SetDialogMarkerClassEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.FortConversation_Spectator_EnterConversation
// Kind: ScriptStruct; super: none
struct FFortConversation_Spectator_EnterConversation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.FortConversation_Spectator_LeaveConversation
// Kind: ScriptStruct; super: none
struct FFortConversation_Spectator_LeaveConversation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.NPCConversationIndicatorMessage
// Kind: ScriptStruct; super: none
struct FNPCConversationIndicatorMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.FortConversationContextCondition
// Kind: Class; super: Object
class UFortConversationContextCondition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.FortConversationContextConditionHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UFortConversationContextConditionHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
// Kind: Class; super: FortConversationContextCondition
class UFortConversationContextCondition_ParticipantControllerMeetsRequirement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ParticipantID[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    void* Requirement; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortConversationContextCondition_ParticipantControllerMeetsRequirement, ParticipantID) == 40, "Offset mismatch for UFortConversationContextCondition_ParticipantControllerMeetsRequirement::ParticipantID");
static_assert(offsetof(UFortConversationContextCondition_ParticipantControllerMeetsRequirement, Requirement) == 48, "Offset mismatch for UFortConversationContextCondition_ParticipantControllerMeetsRequirement::Requirement");

// /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
// Kind: Class; super: FortConversationContextCondition
class UFortConversationContextCondition_ParticipantHasCID
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ParticipantID[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    TArray<void*> AllowedCIDs; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortConversationContextCondition_ParticipantHasCID, ParticipantID) == 40, "Offset mismatch for UFortConversationContextCondition_ParticipantHasCID::ParticipantID");
static_assert(offsetof(UFortConversationContextCondition_ParticipantHasCID, AllowedCIDs) == 48, "Offset mismatch for UFortConversationContextCondition_ParticipantHasCID::AllowedCIDs");

// /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
// Kind: Class; super: FortConversationContextCondition
class UFortConversationContextCondition_ParticipantHasMetaTag
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ParticipantID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t MetaTag[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortConversationContextCondition_ParticipantHasMetaTag, ParticipantID) == 40, "Offset mismatch for UFortConversationContextCondition_ParticipantHasMetaTag::ParticipantID");
static_assert(offsetof(UFortConversationContextCondition_ParticipantHasMetaTag, MetaTag) == 44, "Offset mismatch for UFortConversationContextCondition_ParticipantHasMetaTag::MetaTag");

// /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
// Kind: Class; super: FortConversationContextCondition
class UFortConversationContextCondition_ParticipantHasOwnedTag
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ParticipantID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t OwnedTag[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortConversationContextCondition_ParticipantHasOwnedTag, ParticipantID) == 40, "Offset mismatch for UFortConversationContextCondition_ParticipantHasOwnedTag::ParticipantID");
static_assert(offsetof(UFortConversationContextCondition_ParticipantHasOwnedTag, OwnedTag) == 44, "Offset mismatch for UFortConversationContextCondition_ParticipantHasOwnedTag::OwnedTag");

// /Script/FortniteConversationRuntime.FortConversationGetGraphInterface
// Kind: Class; super: Interface
class UFortConversationGetGraphInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.FortConversationMarkerInterface
// Kind: Class; super: Interface
class UFortConversationMarkerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.FortConversationParamLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortConversationParamLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteConversationRuntime.FortConversationParticipantComponent
// Kind: Class; super: ConversationParticipantComponent
class UFortConversationParticipantComponent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::int32_t ConversationsActive; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0124
    void* Auth_CurrentConversation; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Auth_Conversations; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LastMessage[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortConversationParticipantComponent, ConversationsActive) == 288, "Offset mismatch for UFortConversationParticipantComponent::ConversationsActive");
static_assert(offsetof(UFortConversationParticipantComponent, Auth_CurrentConversation) == 296, "Offset mismatch for UFortConversationParticipantComponent::Auth_CurrentConversation");
static_assert(offsetof(UFortConversationParticipantComponent, Auth_Conversations) == 304, "Offset mismatch for UFortConversationParticipantComponent::Auth_Conversations");
static_assert(offsetof(UFortConversationParticipantComponent, LastMessage) == 320, "Offset mismatch for UFortConversationParticipantComponent::LastMessage");

// /Script/FortniteConversationRuntime.FortPlayerConversationComponent
// Kind: Class; super: FortConversationParticipantComponent
class UFortPlayerConversationComponent
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    TArray<void*> ConversationParticipantsInRange; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    float GreetSphereRadius; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    float IconVisibilityRadius; // 0x01CC (Size: 0x4, Type: FloatProperty)
    float AbortConversationRange; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RidingOnActorTag[0x4]; // 0x01D4 (Size: 0x4, Type: StructProperty)
    float RidingOnActorRangeMultiplierSquared; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x3C]; // 0x01DC
    std::uint8_t IndicatedNPCConversationComponents[0x18]; // 0x0218 (Size: 0x18, Type: SetProperty)
    std::uint8_t bMoveShouldAbortConversation; // 0x0230 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCachedDefaultMoveShouldAbortConverationValue; // 0x0231 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x136]; // 0x0232
    std::uint8_t LastSanitizationMessage[0x1]; // 0x0368 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerConversationComponent, ConversationParticipantsInRange) == 440, "Offset mismatch for UFortPlayerConversationComponent::ConversationParticipantsInRange");
static_assert(offsetof(UFortPlayerConversationComponent, GreetSphereRadius) == 456, "Offset mismatch for UFortPlayerConversationComponent::GreetSphereRadius");
static_assert(offsetof(UFortPlayerConversationComponent, IconVisibilityRadius) == 460, "Offset mismatch for UFortPlayerConversationComponent::IconVisibilityRadius");
static_assert(offsetof(UFortPlayerConversationComponent, AbortConversationRange) == 464, "Offset mismatch for UFortPlayerConversationComponent::AbortConversationRange");
static_assert(offsetof(UFortPlayerConversationComponent, RidingOnActorTag) == 468, "Offset mismatch for UFortPlayerConversationComponent::RidingOnActorTag");
static_assert(offsetof(UFortPlayerConversationComponent, RidingOnActorRangeMultiplierSquared) == 472, "Offset mismatch for UFortPlayerConversationComponent::RidingOnActorRangeMultiplierSquared");
static_assert(offsetof(UFortPlayerConversationComponent, IndicatedNPCConversationComponents) == 536, "Offset mismatch for UFortPlayerConversationComponent::IndicatedNPCConversationComponents");
static_assert(offsetof(UFortPlayerConversationComponent, bMoveShouldAbortConversation) == 560, "Offset mismatch for UFortPlayerConversationComponent::bMoveShouldAbortConversation");
static_assert(offsetof(UFortPlayerConversationComponent, bCachedDefaultMoveShouldAbortConverationValue) == 561, "Offset mismatch for UFortPlayerConversationComponent::bCachedDefaultMoveShouldAbortConverationValue");
static_assert(offsetof(UFortPlayerConversationComponent, LastSanitizationMessage) == 872, "Offset mismatch for UFortPlayerConversationComponent::LastSanitizationMessage");

// /Script/FortniteConversationRuntime.FortniteConversationGlobals
// Kind: Class; super: Object
class UFortniteConversationGlobals
{
public:
    std::uint8_t Opaque[1];
};
