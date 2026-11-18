#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FNRedwoodRuntime
{
    struct AsyncAction_FNRedwoodManagerRequestResponse
    {
        static constexpr std::string_view Name = "AsyncAction_FNRedwoodManagerRequestResponse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateChanged = 0x30;
            static constexpr std::uintptr_t OnUtteranceStateChanged = 0x40;
            static constexpr std::uintptr_t OnCancelling = 0x50;
            static constexpr std::uintptr_t bCancellingCalled = 0x60;
            static constexpr std::uintptr_t bSuccess = 0x61;
            static constexpr std::uintptr_t bCanUseResults = 0x62;
            static constexpr std::uintptr_t RequestID = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnStateChanged", 0x30, "MulticastInlineDelegateProperty"},
            {"OnUtteranceStateChanged", 0x40, "MulticastInlineDelegateProperty"},
            {"OnCancelling", 0x50, "MulticastInlineDelegateProperty"},
            {"bCancellingCalled", 0x60, "BoolProperty"},
            {"bSuccess", 0x61, "BoolProperty"},
            {"bCanUseResults", 0x62, "BoolProperty"},
            {"RequestID", 0x64, "StructProperty"},
        }};
    };

    struct AsyncAction_FNRedwoodOratorSaySomething
    {
        static constexpr std::string_view Name = "AsyncAction_FNRedwoodOratorSaySomething";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGenerating = 0x30;
            static constexpr std::uintptr_t OnGenerated = 0x40;
            static constexpr std::uintptr_t OnPerformed = 0x50;
            static constexpr std::uintptr_t OnCleared = 0x60;
            static constexpr std::uintptr_t OnFailure = 0x70;
            static constexpr std::uintptr_t MonologueComponent = 0x80;
            static constexpr std::uintptr_t SpeechComponent = 0x88;
            static constexpr std::uintptr_t QueueingMethod = 0x90;
            static constexpr std::uintptr_t DialogueEventAudience = 0x91;
            static constexpr std::uintptr_t StartTime = 0x98;
            static constexpr std::uintptr_t UtteranceGuid = 0xA0;
            static constexpr std::uintptr_t Instigator = 0xB0;
            static constexpr std::uintptr_t TargetPlayers = 0xB8;
            static constexpr std::uintptr_t GeneratedDialogueLine = 0xC8;
            static constexpr std::uintptr_t GeneratedDialogueStruct = 0xE0;
            static constexpr std::uintptr_t RequestHandle = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"OnGenerating", 0x30, "MulticastInlineDelegateProperty"},
            {"OnGenerated", 0x40, "MulticastInlineDelegateProperty"},
            {"OnPerformed", 0x50, "MulticastInlineDelegateProperty"},
            {"OnCleared", 0x60, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x70, "MulticastInlineDelegateProperty"},
            {"MonologueComponent", 0x80, "ObjectProperty"},
            {"SpeechComponent", 0x88, "ObjectProperty"},
            {"QueueingMethod", 0x90, "EnumProperty"},
            {"DialogueEventAudience", 0x91, "EnumProperty"},
            {"StartTime", 0x98, "DoubleProperty"},
            {"UtteranceGuid", 0xA0, "StructProperty"},
            {"Instigator", 0xB0, "ObjectProperty"},
            {"TargetPlayers", 0xB8, "ArrayProperty"},
            {"GeneratedDialogueLine", 0xC8, "StructProperty"},
            {"GeneratedDialogueStruct", 0xE0, "StructProperty"},
            {"RequestHandle", 0xF0, "StructProperty"},
        }};
    };

    struct FNOratorDynamicOptionsStructDescriptor
    {
        static constexpr std::string_view Name = "FNOratorDynamicOptionsStructDescriptor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorDialogueStructDescriptor";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogueStructType = 0x28;
            static constexpr std::uintptr_t DialogueStructSchema = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DialogueStructType", 0x28, "ObjectProperty"},
            {"DialogueStructSchema", 0x30, "StructProperty"},
        }};
    };

    struct FNRedwoodCheatManager
    {
        static constexpr std::string_view Name = "FNRedwoodCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FNRedwoodConversationTaskNode_DynamicOptions
    {
        static constexpr std::string_view Name = "FNRedwoodConversationTaskNode_DynamicOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t PromptTypeIdentifier = 0x170;
            static constexpr std::uintptr_t ExtraLocalFacts = 0x178;
            static constexpr std::uintptr_t OverriddenPropertyDescriptions = 0x188;
            static constexpr std::uintptr_t MinOptions = 0x198;
            static constexpr std::uintptr_t MaxOptions = 0x19C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PromptTypeIdentifier", 0x170, "StructProperty"},
            {"ExtraLocalFacts", 0x178, "MapProperty"},
            {"OverriddenPropertyDescriptions", 0x188, "MapProperty"},
            {"MinOptions", 0x198, "IntProperty"},
            {"MaxOptions", 0x19C, "IntProperty"},
        }};
    };

    struct FNRedwoodConversationTaskNode_DynamicOptions_Parent
    {
        static constexpr std::string_view Name = "FNRedwoodConversationTaskNode_DynamicOptions_Parent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t PromptTypeIdentifier = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PromptTypeIdentifier", 0x170, "StructProperty"},
        }};
    };

    struct FNRedwoodConversationTaskNode_SaySomething
    {
        static constexpr std::string_view Name = "FNRedwoodConversationTaskNode_SaySomething";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t PromptTypeIdentifier = 0x170;
            static constexpr std::uintptr_t ExtraLocalFacts = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PromptTypeIdentifier", 0x170, "StructProperty"},
            {"ExtraLocalFacts", 0x178, "MapProperty"},
        }};
    };

    struct FNRedwoodManagerComponent
    {
        static constexpr std::string_view Name = "FNRedwoodManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configurations = 0xC0;
            static constexpr std::uintptr_t ManagerConfiguration = 0xF0;
            static constexpr std::uintptr_t RunningRequests = 0x128;
            static constexpr std::uintptr_t RunningDirectUtterances = 0x138;
            static constexpr std::uintptr_t DigestedConfigurations = 0x148;
            static constexpr std::uintptr_t DigestedManagerConfiguration = 0x158;
            static constexpr std::uintptr_t OnRequestedOratorDialogueDelegate = 0x170;
            static constexpr std::uintptr_t TraitRequiredQueryForFeelingsChange = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Configurations", 0xC0, "StructProperty"},
            {"ManagerConfiguration", 0xF0, "StructProperty"},
            {"RunningRequests", 0x128, "ArrayProperty"},
            {"RunningDirectUtterances", 0x138, "ArrayProperty"},
            {"DigestedConfigurations", 0x148, "ArrayProperty"},
            {"DigestedManagerConfiguration", 0x158, "OptionalProperty"},
            {"OnRequestedOratorDialogueDelegate", 0x170, "MulticastInlineDelegateProperty"},
            {"TraitRequiredQueryForFeelingsChange", 0x180, "StructProperty"},
        }};
    };

    struct FNRedwoodModerationComponent
    {
        static constexpr std::string_view Name = "FNRedwoodModerationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFailedModeration = 0xC0;
            static constexpr std::uintptr_t OnPassedModeration = 0xD0;
            static constexpr std::uintptr_t OnModerationRequestFailed = 0xE0;
            static constexpr std::uintptr_t RestrictionsDataTable = 0xF0;
            static constexpr std::uintptr_t RestrictionLineFormat = 0xF8;
            static constexpr std::uintptr_t InProgressModerationRequests = 0x108;
            static constexpr std::uintptr_t NumModerationFailures = 0x118;
            static constexpr std::uintptr_t CachedMonologueComponent = 0x120;
            static constexpr std::uintptr_t CachedOratorComponent = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnFailedModeration", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnPassedModeration", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnModerationRequestFailed", 0xE0, "MulticastInlineDelegateProperty"},
            {"RestrictionsDataTable", 0xF0, "ObjectProperty"},
            {"RestrictionLineFormat", 0xF8, "TextProperty"},
            {"InProgressModerationRequests", 0x108, "ArrayProperty"},
            {"NumModerationFailures", 0x118, "IntProperty"},
            {"CachedMonologueComponent", 0x120, "ObjectProperty"},
            {"CachedOratorComponent", 0x128, "ObjectProperty"},
        }};
    };

    struct FNRedwoodModerator
    {
        static constexpr std::string_view Name = "FNRedwoodModerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ModerationPrompt = 0x28;
            static constexpr std::uintptr_t ModerationResponseSchema = 0x30;
            static constexpr std::uintptr_t bRequiresDynamicResponseSchema = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ModerationPrompt", 0x28, "ObjectProperty"},
            {"ModerationResponseSchema", 0x30, "StructProperty"},
            {"bRequiresDynamicResponseSchema", 0xB8, "BoolProperty"},
        }};
    };

    struct FNRedwoodModerator_RestrictionViolation
    {
        static constexpr std::string_view Name = "FNRedwoodModerator_RestrictionViolation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNRedwoodModerator";
        struct Offsets
        {
            static constexpr std::uintptr_t ModerationPrompt = 0x28;
            static constexpr std::uintptr_t ModerationResponseSchema = 0x30;
            static constexpr std::uintptr_t bRequiresDynamicResponseSchema = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ModerationPrompt", 0x28, "ObjectProperty"},
            {"ModerationResponseSchema", 0x30, "StructProperty"},
            {"bRequiresDynamicResponseSchema", 0xB8, "BoolProperty"},
        }};
    };

    struct FNRedwoodMonologueComponent
    {
        static constexpr std::string_view Name = "FNRedwoodMonologueComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PerceivedContextualEvents = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PerceivedContextualEvents", 0x198, "MapProperty"},
        }};
    };

    struct FNRedwoodMonologueTranscriptionProvider
    {
        static constexpr std::string_view Name = "FNRedwoodMonologueTranscriptionProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorTranscriptionProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t TranscriptionPrompt = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TranscriptionPrompt", 0x28, "ObjectProperty"},
        }};
    };

    struct FNRedwoodOratorComponent
    {
        static constexpr std::string_view Name = "FNRedwoodOratorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogueEventType = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DialogueEventType", 0x300, "ObjectProperty"},
        }};
    };

    struct FNRedwoodOratorControllerComponent
    {
        static constexpr std::string_view Name = "FNRedwoodOratorControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bPlayerIsAway = 0xC0;
            static constexpr std::uintptr_t bPlayerAllowedToHearOrator = 0xC1;
            static constexpr std::uintptr_t bPlayerAllowedToHearOratorIsReplicated = 0xC2;
            static constexpr std::uintptr_t OnPlayerAllowedToHearOratorChanged = 0xC8;
            static constexpr std::uintptr_t OratorChannel = 0xD8;
            static constexpr std::uintptr_t bReadyForChannel = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bPlayerIsAway", 0xC0, "BoolProperty"},
            {"bPlayerAllowedToHearOrator", 0xC1, "BoolProperty"},
            {"bPlayerAllowedToHearOratorIsReplicated", 0xC2, "BoolProperty"},
            {"OnPlayerAllowedToHearOratorChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"OratorChannel", 0xD8, "ObjectProperty"},
            {"bReadyForChannel", 0xE0, "BoolProperty"},
        }};
    };

    struct FNRedwoodOratorDialogueEventDescriber
    {
        static constexpr std::string_view Name = "FNRedwoodOratorDialogueEventDescriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MonologueEventDescriber";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedDialogEventSignificance = 0x58;
            static constexpr std::uintptr_t DefaultHearingRange = 0x5C;
            static constexpr std::uintptr_t FirstPersonEventDescriptionTemplate = 0x60;
            static constexpr std::uintptr_t SecondPersonEventDescriptionTemplate = 0x70;
            static constexpr std::uintptr_t ThirdPersonEventDescriptionTemplate = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ObservedDialogEventSignificance", 0x58, "FloatProperty"},
            {"DefaultHearingRange", 0x5C, "FloatProperty"},
            {"FirstPersonEventDescriptionTemplate", 0x60, "StructProperty"},
            {"SecondPersonEventDescriptionTemplate", 0x70, "StructProperty"},
            {"ThirdPersonEventDescriptionTemplate", 0x80, "StructProperty"},
        }};
    };

    struct FNRedwoodOratorDialogueStructDescriptor
    {
        static constexpr std::string_view Name = "FNRedwoodOratorDialogueStructDescriptor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorDialogueStructDescriptor";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogueStructType = 0x28;
            static constexpr std::uintptr_t DialogueStructSchema = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DialogueStructType", 0x28, "ObjectProperty"},
            {"DialogueStructSchema", 0x30, "StructProperty"},
        }};
    };

    struct FNRedwoodOratorDynamicOptionsStructDescriptor
    {
        static constexpr std::string_view Name = "FNRedwoodOratorDynamicOptionsStructDescriptor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorDialogueStructDescriptor";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogueStructType = 0x28;
            static constexpr std::uintptr_t DialogueStructSchema = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DialogueStructType", 0x28, "ObjectProperty"},
            {"DialogueStructSchema", 0x30, "StructProperty"},
        }};
    };

    struct FNRedwoodOratorFactsLibrary
    {
        static constexpr std::string_view Name = "FNRedwoodOratorFactsLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FNRedwoodOratorInputControllerComponent
    {
        static constexpr std::string_view Name = "FNRedwoodOratorInputControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorInputControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogueEventType = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DialogueEventType", 0x280, "ObjectProperty"},
        }};
    };

    struct FNRedwoodSubsystem
    {
        static constexpr std::string_view Name = "FNRedwoodSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaMutator_OratorVoiceChat
    {
        static constexpr std::string_view Name = "FortAthenaMutator_OratorVoiceChat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

    struct FortGameFeatureAction_AddMonologueFacts
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddMonologueFacts";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction_AddMonologueFacts";
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

    struct FortPawnComponent_RedwoodSpatialFactsProvider
    {
        static constexpr std::string_view Name = "FortPawnComponent_RedwoodSpatialFactsProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct GameFeatureAction_SetupFNRedwoodAnalytics
    {
        static constexpr std::string_view Name = "GameFeatureAction_SetupFNRedwoodAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalyticsAppId = 0x28;
            static constexpr std::uintptr_t AnalyticsEventNamespace = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AnalyticsAppId", 0x28, "StrProperty"},
            {"AnalyticsEventNamespace", 0x38, "StrProperty"},
        }};
    };

    struct OratorVoiceChatInput
    {
        static constexpr std::string_view Name = "OratorVoiceChatInput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorAudioInputProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
