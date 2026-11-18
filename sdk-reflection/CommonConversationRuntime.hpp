#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CommonConversationRuntime
{
    struct AdvanceConversationRequest
    {
        static constexpr std::string_view Name = "AdvanceConversationRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Choice = 0x0;
            static constexpr std::uintptr_t UserParameters = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Choice", 0x0, "StructProperty"},
            {"UserParameters", 0x20, "ArrayProperty"},
        }};
    };

    struct ClientConversationMessage
    {
        static constexpr std::string_view Name = "ClientConversationMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeakerID = 0x0;
            static constexpr std::uintptr_t ParticipantDisplayName = 0x8;
            static constexpr std::uintptr_t Text = 0x18;
            static constexpr std::uintptr_t MetadataParameters = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SpeakerID", 0x0, "StructProperty"},
            {"ParticipantDisplayName", 0x8, "TextProperty"},
            {"Text", 0x18, "TextProperty"},
            {"MetadataParameters", 0x28, "ArrayProperty"},
        }};
    };

    struct ClientConversationMessagePayload
    {
        static constexpr std::string_view Name = "ClientConversationMessagePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Message = 0x0;
            static constexpr std::uintptr_t Participants = 0x38;
            static constexpr std::uintptr_t CurrentNode = 0x48;
            static constexpr std::uintptr_t Options = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Message", 0x0, "StructProperty"},
            {"Participants", 0x38, "StructProperty"},
            {"CurrentNode", 0x48, "StructProperty"},
            {"Options", 0x58, "ArrayProperty"},
        }};
    };

    struct ClientConversationOptionEntry
    {
        static constexpr std::string_view Name = "ClientConversationOptionEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChoiceText = 0x0;
            static constexpr std::uintptr_t ChoiceTags = 0x10;
            static constexpr std::uintptr_t ChoiceType = 0x30;
            static constexpr std::uintptr_t ChoiceReference = 0x38;
            static constexpr std::uintptr_t ExtraData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ChoiceText", 0x0, "TextProperty"},
            {"ChoiceTags", 0x10, "StructProperty"},
            {"ChoiceType", 0x30, "EnumProperty"},
            {"ChoiceReference", 0x38, "StructProperty"},
            {"ExtraData", 0x58, "ArrayProperty"},
        }};
    };

    struct CommonDialogueBankParticipant
    {
        static constexpr std::string_view Name = "CommonDialogueBankParticipant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FallbackName = 0x0;
            static constexpr std::uintptr_t ParticipantName = 0x10;
            static constexpr std::uintptr_t NodeTint = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FallbackName", 0x0, "TextProperty"},
            {"ParticipantName", 0x10, "StructProperty"},
            {"NodeTint", 0x14, "StructProperty"},
        }};
    };

    struct ConversationBranchPoint
    {
        static constexpr std::string_view Name = "ConversationBranchPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ReturnScopeStack = 0x0;
            static constexpr std::uintptr_t ClientChoice = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReturnScopeStack", 0x0, "ArrayProperty"},
            {"ClientChoice", 0x10, "StructProperty"},
        }};
    };

    struct ConversationChoiceData
    {
        static constexpr std::string_view Name = "ConversationChoiceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ConversationChoiceDataHandle
    {
        static constexpr std::string_view Name = "ConversationChoiceDataHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ConversationChoiceNode
    {
        static constexpr std::string_view Name = "ConversationChoiceNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationSubNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultChoiceDisplayText = 0x58;
            static constexpr std::uintptr_t ChoiceTags = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultChoiceDisplayText", 0x58, "TextProperty"},
            {"ChoiceTags", 0x68, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "FillChoice",
        }};
    };

    struct ConversationChoiceReference
    {
        static constexpr std::string_view Name = "ConversationChoiceReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeReference = 0x0;
            static constexpr std::uintptr_t NodeParameters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeReference", 0x0, "StructProperty"},
            {"NodeParameters", 0x10, "ArrayProperty"},
        }};
    };

    struct ConversationContext
    {
        static constexpr std::string_view Name = "ConversationContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationRegistry = 0x0;
            static constexpr std::uintptr_t ActiveConversation = 0x8;
            static constexpr std::uintptr_t ClientParticipant = 0x10;
            static constexpr std::uintptr_t TaskBeingConsidered = 0x18;
            static constexpr std::uintptr_t ReturnScopeStack = 0x20;
            static constexpr std::uintptr_t bServer_PRIVATE = 0x30;
            static constexpr std::uintptr_t bClient_PRIVATE = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ConversationRegistry", 0x0, "ObjectProperty"},
            {"ActiveConversation", 0x8, "ObjectProperty"},
            {"ClientParticipant", 0x10, "ObjectProperty"},
            {"TaskBeingConsidered", 0x18, "ObjectProperty"},
            {"ReturnScopeStack", 0x20, "ArrayProperty"},
            {"bServer_PRIVATE", 0x30, "BoolProperty"},
            {"bClient_PRIVATE", 0x31, "BoolProperty"},
        }};
    };

    struct ConversationContextHelpers
    {
        static constexpr std::string_view Name = "ConversationContextHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "AbortConversation",
            "AdvanceConversation",
            "AdvanceConversationWithChoice",
            "CanConversationContinue",
            "FindConversationComponent",
            "GetConversationInstance",
            "GetConversationParticipant",
            "GetConversationParticipantActor",
            "GetCurrentConversationNodeHandle",
            "MakeConversationParticipant",
            "PauseConversationAndSendClientChoices",
            "ReturnToConversationStart",
            "ReturnToCurrentClientChoice",
            "ReturnToLastClientChoice",
        }};
    };

    struct ConversationDatabase
    {
        static constexpr std::string_view Name = "ConversationDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CompilerVersion = 0x28;
            static constexpr std::uintptr_t ReachableNodeMap = 0x30;
            static constexpr std::uintptr_t EntryTags = 0x40;
            static constexpr std::uintptr_t ExitTags = 0x50;
            static constexpr std::uintptr_t InternalNodeIds = 0x70;
            static constexpr std::uintptr_t LinkedToNodeIds = 0x80;
            static constexpr std::uintptr_t Speakers = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CompilerVersion", 0x28, "IntProperty"},
            {"ReachableNodeMap", 0x30, "MapProperty"},
            {"EntryTags", 0x40, "ArrayProperty"},
            {"ExitTags", 0x50, "StructProperty"},
            {"InternalNodeIds", 0x70, "ArrayProperty"},
            {"LinkedToNodeIds", 0x80, "ArrayProperty"},
            {"Speakers", 0x90, "ArrayProperty"},
        }};
    };

    struct ConversationEntryList
    {
        static constexpr std::string_view Name = "ConversationEntryList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryTag = 0x0;
            static constexpr std::uintptr_t DestinationList = 0x8;
            static constexpr std::uintptr_t EntryIdentifier = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EntryTag", 0x0, "StructProperty"},
            {"DestinationList", 0x8, "ArrayProperty"},
            {"EntryIdentifier", 0x18, "StrProperty"},
        }};
    };

    struct ConversationEntryPointNode
    {
        static constexpr std::string_view Name = "ConversationEntryPointNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationNodeWithLinks";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryTag = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntryTag", 0x68, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetIdentifier",
        }};
    };

    struct ConversationInstance
    {
        static constexpr std::string_view Name = "ConversationInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x50;
            static constexpr std::uintptr_t ActiveConversationGraph = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Participants", 0x50, "StructProperty"},
            {"ActiveConversationGraph", 0x60, "ObjectProperty"},
        }};
    };

    struct ConversationLibrary
    {
        static constexpr std::string_view Name = "ConversationLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "StartConversation",
            "StartConversationFromGraph",
        }};
    };

    struct ConversationLinkNode
    {
        static constexpr std::string_view Name = "ConversationLinkNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t RemoteEntryTag = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RemoteEntryTag", 0x80, "StructProperty"},
        }};
    };

    struct ConversationNode
    {
        static constexpr std::string_view Name = "ConversationNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalWorldContextObj = 0x28;
            static constexpr std::uintptr_t NodeName = 0x30;
            static constexpr std::uintptr_t Compiled_NodeGUID = 0x40;
            static constexpr std::uintptr_t ParentNode = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EvalWorldContextObj", 0x28, "ObjectProperty"},
            {"NodeName", 0x30, "StrProperty"},
            {"Compiled_NodeGUID", 0x40, "StructProperty"},
            {"ParentNode", 0x50, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetDebugParticipantColor",
        }};
    };

    struct ConversationNodeHandle
    {
        static constexpr std::string_view Name = "ConversationNodeHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeGUID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NodeGUID", 0x0, "StructProperty"},
        }};
    };

    struct ConversationNodeParameterPair
    {
        static constexpr std::string_view Name = "ConversationNodeParameterPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Value", 0x10, "StrProperty"},
        }};
    };

    struct ConversationNodeWithLinks
    {
        static constexpr std::string_view Name = "ConversationNodeWithLinks";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationNode";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputConnections = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutputConnections", 0x58, "ArrayProperty"},
        }};
    };

    struct ConversationParticipantComponent
    {
        static constexpr std::string_view Name = "ConversationParticipantComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationsActive = 0x120;
            static constexpr std::uintptr_t Auth_CurrentConversation = 0x128;
            static constexpr std::uintptr_t Auth_Conversations = 0x130;
            static constexpr std::uintptr_t LastMessage = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ConversationsActive", 0x120, "IntProperty"},
            {"Auth_CurrentConversation", 0x128, "ObjectProperty"},
            {"Auth_Conversations", 0x130, "ArrayProperty"},
            {"LastMessage", 0x140, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "ClientExecuteTaskAndSideEffects",
            "ClientExitConversation",
            "ClientStartConversation",
            "ClientUpdateConversation",
            "ClientUpdateConversationTaskChoiceData",
            "ClientUpdateConversations",
            "ClientUpdateParticipants",
            "GetOtherParticipantActors",
            "GetParticipantActor",
            "GetParticipantDisplayName",
            "IsInActiveConversation",
            "OnRep_ConversationsActive",
            "RequestServerAdvanceConversation",
            "ServerAdvanceConversation",
        }};
    };

    struct ConversationParticipantEntry
    {
        static constexpr std::string_view Name = "ConversationParticipantEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x0;
            static constexpr std::uintptr_t ParticipantID = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Actor", 0x0, "ObjectProperty"},
            {"ParticipantID", 0x8, "StructProperty"},
        }};
    };

    struct ConversationParticipants
    {
        static constexpr std::string_view Name = "ConversationParticipants";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t List = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"List", 0x0, "ArrayProperty"},
        }};
    };

    struct ConversationRegistry
    {
        static constexpr std::string_view Name = "ConversationRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationChoiceDataStructCache = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConversationChoiceDataStructCache", 0x40, "StructProperty"},
        }};
    };

    struct ConversationRequirementNode
    {
        static constexpr std::string_view Name = "ConversationRequirementNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationSubNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalWorldContextObj = 0x28;
            static constexpr std::uintptr_t NodeName = 0x30;
            static constexpr std::uintptr_t Compiled_NodeGUID = 0x40;
            static constexpr std::uintptr_t ParentNode = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EvalWorldContextObj", 0x28, "ObjectProperty"},
            {"NodeName", 0x30, "StrProperty"},
            {"Compiled_NodeGUID", 0x40, "StructProperty"},
            {"ParentNode", 0x50, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "IsRequirementSatisfied",
        }};
    };

    struct ConversationSettings
    {
        static constexpr std::string_view Name = "ConversationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationInstanceClass = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConversationInstanceClass", 0x30, "SoftClassProperty"},
        }};
    };

    struct ConversationSideEffectNode
    {
        static constexpr std::string_view Name = "ConversationSideEffectNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationSubNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalWorldContextObj = 0x28;
            static constexpr std::uintptr_t NodeName = 0x30;
            static constexpr std::uintptr_t Compiled_NodeGUID = 0x40;
            static constexpr std::uintptr_t ParentNode = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EvalWorldContextObj", 0x28, "ObjectProperty"},
            {"NodeName", 0x30, "StrProperty"},
            {"Compiled_NodeGUID", 0x40, "StructProperty"},
            {"ParentNode", 0x50, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ClientCauseSideEffect",
            "ServerCauseSideEffect",
        }};
    };

    struct ConversationSubNode
    {
        static constexpr std::string_view Name = "ConversationSubNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalWorldContextObj = 0x28;
            static constexpr std::uintptr_t NodeName = 0x30;
            static constexpr std::uintptr_t Compiled_NodeGUID = 0x40;
            static constexpr std::uintptr_t ParentNode = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EvalWorldContextObj", 0x28, "ObjectProperty"},
            {"NodeName", 0x30, "StrProperty"},
            {"Compiled_NodeGUID", 0x40, "StructProperty"},
            {"ParentNode", 0x50, "ObjectProperty"},
        }};
    };

    struct ConversationTaskNode
    {
        static constexpr std::string_view Name = "ConversationTaskNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationNodeWithLinks";
        struct Offsets
        {
            static constexpr std::uintptr_t SubNodes = 0x68;
            static constexpr std::uintptr_t bIgnoreRequirementsWhileAdvancingConversations = 0x78;
            static constexpr std::uintptr_t BranchOrder = 0x79;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SubNodes", 0x68, "ArrayProperty"},
            {"bIgnoreRequirementsWhileAdvancingConversations", 0x78, "BoolProperty"},
            {"BranchOrder", 0x79, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "ExecuteClientEffects",
            "ExecuteTaskNode",
            "GatherStaticExtraData",
            "GetNodeBodyColor",
            "IsRequirementSatisfied",
        }};
    };

    struct ConversationTaskResult
    {
        static constexpr std::string_view Name = "ConversationTaskResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t AdvanceToChoice = 0x8;
            static constexpr std::uintptr_t Message = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"AdvanceToChoice", 0x8, "StructProperty"},
            {"Message", 0x38, "StructProperty"},
        }};
    };

    struct NetSerializeScriptStructCache_ConvVersion
    {
        static constexpr std::string_view Name = "NetSerializeScriptStructCache_ConvVersion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ScriptStructsToIndex = 0x0;
            static constexpr std::uintptr_t IndexToScriptStructs = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScriptStructsToIndex", 0x0, "MapProperty"},
            {"IndexToScriptStructs", 0x10, "ArrayProperty"},
        }};
    };

}
