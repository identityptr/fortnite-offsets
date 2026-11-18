#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Monologue
{
    struct AsyncAction_MonologueGenerateResponse
    {
        static constexpr std::string_view Name = "AsyncAction_MonologueGenerateResponse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AsyncAction_MonologueGenerateStructuredResponse
    {
        static constexpr std::string_view Name = "AsyncAction_MonologueGenerateStructuredResponse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};
    };

    struct GameFeatureAction_AddMonologueFacts
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddMonologueFacts";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t DelegateEngineFactsToAdd = 0x28;
            static constexpr std::uintptr_t EngineFactsToAdd = 0x48;
            static constexpr std::uintptr_t bAddFactsInEditor = 0x58;
            static constexpr std::uintptr_t bAddFactsOnClient = 0x59;
            static constexpr std::uintptr_t bAddFactsOnServer = 0x5A;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DelegateEngineFactsToAdd", 0x28, "SoftClassProperty"},
            {"EngineFactsToAdd", 0x48, "MapProperty"},
            {"bAddFactsInEditor", 0x58, "BoolProperty"},
            {"bAddFactsOnClient", 0x59, "BoolProperty"},
            {"bAddFactsOnServer", 0x5A, "BoolProperty"},
        }};
    };

    struct GameFeatureAction_SetMonologueDefaultChatCompleter
    {
        static constexpr std::string_view Name = "GameFeatureAction_SetMonologueDefaultChatCompleter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultChatCompleterClass = 0x28;
            static constexpr std::uintptr_t bSetChatCompleterOnClient = 0x48;
            static constexpr std::uintptr_t bSetChatCompleterOnServer = 0x49;
            static constexpr std::uintptr_t GFASetChatCompleter = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultChatCompleterClass", 0x28, "SoftClassProperty"},
            {"bSetChatCompleterOnClient", 0x48, "BoolProperty"},
            {"bSetChatCompleterOnServer", 0x49, "BoolProperty"},
            {"GFASetChatCompleter", 0x50, "ObjectProperty"},
        }};
    };

    struct MonologueCharacterDefinition
    {
        static constexpr std::string_view Name = "MonologueCharacterDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x28;
            static constexpr std::uintptr_t Backstory = 0x38;
            static constexpr std::uintptr_t GameplayTags = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x28, "TextProperty"},
            {"Backstory", 0x38, "TextProperty"},
            {"GameplayTags", 0x48, "StructProperty"},
        }};
    };

    struct MonologueCheatManager
    {
        static constexpr std::string_view Name = "MonologueCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MonologueComponent
    {
        static constexpr std::string_view Name = "MonologueComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEventPerceived = 0xC8;
            static constexpr std::uintptr_t OnPastEventPerceived = 0xD8;
            static constexpr std::uintptr_t OnEventForgotten = 0xE8;
            static constexpr std::uintptr_t OnEventRevised = 0xF8;
            static constexpr std::uintptr_t bPerceiveEvents = 0x108;
            static constexpr std::uintptr_t EventInterests = 0x110;
            static constexpr std::uintptr_t MinPerceivableEventSignificance = 0x120;
            static constexpr std::uintptr_t MinMemorableEventSignificance = 0x124;
            static constexpr std::uintptr_t EventSignificanceDecayRateScale = 0x128;
            static constexpr std::uintptr_t SmartObjectSearchExtent = 0x130;
            static constexpr std::uintptr_t OnAnalysisCompleted = 0x148;
            static constexpr std::uintptr_t SubjectName = 0x158;
            static constexpr std::uintptr_t PerceivedEvents = 0x170;
            static constexpr std::uintptr_t EventAnalyses = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OnEventPerceived", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnPastEventPerceived", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnEventForgotten", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnEventRevised", 0xF8, "MulticastInlineDelegateProperty"},
            {"bPerceiveEvents", 0x108, "BoolProperty"},
            {"EventInterests", 0x110, "StructProperty"},
            {"MinPerceivableEventSignificance", 0x120, "FloatProperty"},
            {"MinMemorableEventSignificance", 0x124, "FloatProperty"},
            {"EventSignificanceDecayRateScale", 0x128, "FloatProperty"},
            {"SmartObjectSearchExtent", 0x130, "StructProperty"},
            {"OnAnalysisCompleted", 0x148, "MulticastInlineDelegateProperty"},
            {"SubjectName", 0x158, "NameProperty"},
            {"PerceivedEvents", 0x170, "ArrayProperty"},
            {"EventAnalyses", 0x180, "ArrayProperty"},
        }};
    };

    struct MonologueContextVolume
    {
        static constexpr std::string_view Name = "MonologueContextVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t Contexts = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Contexts", 0x2B0, "ArrayProperty"},
        }};
    };

    struct MonologueConversation
    {
        static constexpr std::string_view Name = "MonologueConversation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MonologueDeveloperSettings
    {
        static constexpr std::string_view Name = "MonologueDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ChatCompletionClassOverride = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChatCompletionClassOverride", 0x30, "StructProperty"},
        }};
    };

    struct MonologueEngineSubsystem
    {
        static constexpr std::string_view Name = "MonologueEngineSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultChatCompleter = 0x48;
            static constexpr std::uintptr_t ChatCompleters = 0x50;
            static constexpr std::uintptr_t EngineFacts = 0x60;
            static constexpr std::uintptr_t FactsRegistryOverrides = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultChatCompleter", 0x48, "ObjectProperty"},
            {"ChatCompleters", 0x50, "MapProperty"},
            {"EngineFacts", 0x60, "MapProperty"},
            {"FactsRegistryOverrides", 0x70, "MapProperty"},
        }};
    };

    struct MonologueEventDescriber
    {
        static constexpr std::string_view Name = "MonologueEventDescriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoRegister = 0x28;
            static constexpr std::uintptr_t DescribedEventType = 0x30;
            static constexpr std::uintptr_t DescribedEventTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAutoRegister", 0x28, "BoolProperty"},
            {"DescribedEventType", 0x30, "ObjectProperty"},
            {"DescribedEventTags", 0x38, "StructProperty"},
        }};
    };

    struct MonologueEventSummaryDescriber
    {
        static constexpr std::string_view Name = "MonologueEventSummaryDescriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueEventDescriber";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoRegister = 0x28;
            static constexpr std::uintptr_t DescribedEventType = 0x30;
            static constexpr std::uintptr_t DescribedEventTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAutoRegister", 0x28, "BoolProperty"},
            {"DescribedEventType", 0x30, "ObjectProperty"},
            {"DescribedEventTags", 0x38, "StructProperty"},
        }};
    };

    struct MonologueFactualizedEventDescriber
    {
        static constexpr std::string_view Name = "MonologueFactualizedEventDescriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueEventDescriber";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoRegister = 0x28;
            static constexpr std::uintptr_t DescribedEventType = 0x30;
            static constexpr std::uintptr_t DescribedEventTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAutoRegister", 0x28, "BoolProperty"},
            {"DescribedEventType", 0x30, "ObjectProperty"},
            {"DescribedEventTags", 0x38, "StructProperty"},
        }};
    };

    struct MonologueFunctionLibrary
    {
        static constexpr std::string_view Name = "MonologueFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MonologuePlaceholderEventDescriber
    {
        static constexpr std::string_view Name = "MonologuePlaceholderEventDescriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueEventDescriber";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoRegister = 0x28;
            static constexpr std::uintptr_t DescribedEventType = 0x30;
            static constexpr std::uintptr_t DescribedEventTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAutoRegister", 0x28, "BoolProperty"},
            {"DescribedEventType", 0x30, "ObjectProperty"},
            {"DescribedEventTags", 0x38, "StructProperty"},
        }};
    };

    struct MonologuePlayerDialogueEventDescriber
    {
        static constexpr std::string_view Name = "MonologuePlayerDialogueEventDescriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueEventDescriber";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedDialogueEventSignificance = 0x58;
            static constexpr std::uintptr_t DefaultHearingRange = 0x5C;
            static constexpr std::uintptr_t EventDescriptionTemplate = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedDialogueEventSignificance", 0x58, "FloatProperty"},
            {"DefaultHearingRange", 0x5C, "FloatProperty"},
            {"EventDescriptionTemplate", 0x60, "TextProperty"},
        }};
    };

    struct MonologuePreferredNameInterface
    {
        static constexpr std::string_view Name = "MonologuePreferredNameInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MonologuePromptDataAsset
    {
        static constexpr std::string_view Name = "MonologuePromptDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Prompt = 0x28;
            static constexpr std::uintptr_t bStripFromClientBuilds = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Prompt", 0x28, "StructProperty"},
            {"bStripFromClientBuilds", 0xC8, "BoolProperty"},
        }};
    };

    struct MonologueSettings
    {
        static constexpr std::string_view Name = "MonologueSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultChatCompletionClass = 0x30;
            static constexpr std::uintptr_t DefaultFactsDataRegistryType = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultChatCompletionClass", 0x30, "StructProperty"},
            {"DefaultFactsDataRegistryType", 0x48, "StructProperty"},
        }};
    };

    struct MonologueSubjectInterface
    {
        static constexpr std::string_view Name = "MonologueSubjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MonologueTestPawn
    {
        static constexpr std::string_view Name = "MonologueTestPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Character";
        struct Offsets
        {
            static constexpr std::uintptr_t FactName = 0x640;
            static constexpr std::uintptr_t SubjectName = 0x644;
            static constexpr std::uintptr_t MonologueComponent = 0x648;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FactName", 0x640, "NameProperty"},
            {"SubjectName", 0x644, "NameProperty"},
            {"MonologueComponent", 0x648, "ObjectProperty"},
        }};
    };

    struct MonologueTopicalEventDescriber
    {
        static constexpr std::string_view Name = "MonologueTopicalEventDescriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueEventDescriber";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoRegister = 0x28;
            static constexpr std::uintptr_t DescribedEventType = 0x30;
            static constexpr std::uintptr_t DescribedEventTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAutoRegister", 0x28, "BoolProperty"},
            {"DescribedEventType", 0x30, "ObjectProperty"},
            {"DescribedEventTags", 0x38, "StructProperty"},
        }};
    };

    struct MonologueVerbatimEventDescriber
    {
        static constexpr std::string_view Name = "MonologueVerbatimEventDescriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueEventDescriber";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoRegister = 0x28;
            static constexpr std::uintptr_t DescribedEventType = 0x30;
            static constexpr std::uintptr_t DescribedEventTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAutoRegister", 0x28, "BoolProperty"},
            {"DescribedEventType", 0x30, "ObjectProperty"},
            {"DescribedEventTags", 0x38, "StructProperty"},
        }};
    };

    struct MonologueWorldDefinition
    {
        static constexpr std::string_view Name = "MonologueWorldDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
            static constexpr std::uintptr_t GameplayTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Description", 0x28, "TextProperty"},
            {"GameplayTags", 0x38, "StructProperty"},
        }};
    };

    struct MonologueWorldFactsSubsystemBase
    {
        static constexpr std::string_view Name = "MonologueWorldFactsSubsystemBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MonologueWorldSubsystem
    {
        static constexpr std::string_view Name = "MonologueWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldFacts = 0x80;
            static constexpr std::uintptr_t ActiveConversationsByCharacter = 0x90;
            static constexpr std::uintptr_t ActiveConversations = 0xA0;
            static constexpr std::uintptr_t ExpiredConversations = 0xB0;
            static constexpr std::uintptr_t EventDescribers = 0xC0;
            static constexpr std::uintptr_t MonologueComponents = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WorldFacts", 0x80, "MapProperty"},
            {"ActiveConversationsByCharacter", 0x90, "MapProperty"},
            {"ActiveConversations", 0xA0, "ArrayProperty"},
            {"ExpiredConversations", 0xB0, "ArrayProperty"},
            {"EventDescribers", 0xC0, "MapProperty"},
            {"MonologueComponents", 0xD0, "ArrayProperty"},
        }};
    };

}
