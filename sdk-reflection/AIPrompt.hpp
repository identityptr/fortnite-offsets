#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AIPrompt
{
    struct AIPromptOratorInputControllerComponent
    {
        static constexpr std::string_view Name = "AIPromptOratorInputControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersonaOratorInputControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveConversationID = 0x2C0;
            static constexpr std::uintptr_t CachedPlayerController = 0x2D8;
            static constexpr std::uintptr_t AIPromptInputMappingContext = 0x2F0;
            static constexpr std::uintptr_t PushToTalkAction = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActiveConversationID", 0x2C0, "OptionalProperty"},
            {"CachedPlayerController", 0x2D8, "ObjectProperty"},
            {"AIPromptInputMappingContext", 0x2F0, "ObjectProperty"},
            {"PushToTalkAction", 0x2F8, "ObjectProperty"},
        }};
    };

    struct AIPromptSubtitleViewModel
    {
        static constexpr std::string_view Name = "AIPromptSubtitleViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x68;
            static constexpr std::uintptr_t Show = 0x78;
            static constexpr std::uintptr_t AudioPlayback = 0x79;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Text", 0x68, "TextProperty"},
            {"Show", 0x78, "BoolProperty"},
            {"AudioPlayback", 0x79, "BoolProperty"},
        }};
    };

    struct CharacterPersonaAsset
    {
        static constexpr std::string_view Name = "CharacterPersonaAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t VoiceModel = 0x38;
            static constexpr std::uintptr_t CharacterPrompt = 0x40;
            static constexpr std::uintptr_t bIsFinalPersonaData = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VoiceModel", 0x38, "ClassProperty"},
            {"CharacterPrompt", 0x40, "ObjectProperty"},
            {"bIsFinalPersonaData", 0x48, "BoolProperty"},
        }};
    };

    struct CharacterPersonaAssetBindingDataTable
    {
        static constexpr std::string_view Name = "CharacterPersonaAssetBindingDataTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataTable";
        struct Offsets
        {
            static constexpr std::uintptr_t RowStruct = 0x28;
            static constexpr std::uintptr_t bIgnoreExtraFields = 0x40;
            static constexpr std::uintptr_t bIgnoreMissingFields = 0x40;
            static constexpr std::uintptr_t bPreserveExistingValues = 0x40;
            static constexpr std::uintptr_t bStripFromClientBuilds = 0x40;
            static constexpr std::uintptr_t ImportKeyField = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RowStruct", 0x28, "ObjectProperty"},
            {"bIgnoreExtraFields", 0x40, "BoolProperty"},
            {"bIgnoreMissingFields", 0x40, "BoolProperty"},
            {"bPreserveExistingValues", 0x40, "BoolProperty"},
            {"bStripFromClientBuilds", 0x40, "BoolProperty"},
            {"ImportKeyField", 0x48, "StrProperty"},
        }};
    };

    struct ConversationTargetWorldSubsystem
    {
        static constexpr std::string_view Name = "ConversationTargetWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Conversations = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Conversations", 0x60, "ArrayProperty"},
        }};
    };

    struct FortAIPromptContainerBase
    {
        static constexpr std::string_view Name = "FortAIPromptContainerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1B0;
            static constexpr std::uintptr_t ForegroundColor = 0x1BC;
            static constexpr std::uintptr_t ForegroundColorDelegate = 0x1D0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x1E0;
            static constexpr std::uintptr_t Padding = 0x220;
            static constexpr std::uintptr_t Priority = 0x230;
            static constexpr std::uintptr_t bAutomaticallyRegisterInputOnConstruction = 0x234;
            static constexpr std::uintptr_t bIsFocusable = 0x234;
            static constexpr std::uintptr_t bStopAction = 0x234;
            static constexpr std::uintptr_t QueuedWidgetAnimationTransitions = 0x238;
            static constexpr std::uintptr_t ActiveSequencePlayers = 0x248;
            static constexpr std::uintptr_t AnimationTickManager = 0x258;
            static constexpr std::uintptr_t StoppedSequencePlayers = 0x260;
            static constexpr std::uintptr_t NamedSlotBindings = 0x288;
            static constexpr std::uintptr_t Extensions = 0x298;
            static constexpr std::uintptr_t WidgetTree = 0x2A8;
            static constexpr std::uintptr_t bHasScriptImplementedPaint = 0x2B0;
            static constexpr std::uintptr_t bHasScriptImplementedTick = 0x2B0;
            static constexpr std::uintptr_t TickFrequency = 0x2C8;
            static constexpr std::uintptr_t DesiredFocusWidget = 0x2CC;
            static constexpr std::uintptr_t InputComponent = 0x2D8;
            static constexpr std::uintptr_t AnimationCallbacks = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ColorAndOpacity", 0x1A0, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1B0, "DelegateProperty"},
            {"ForegroundColor", 0x1BC, "StructProperty"},
            {"ForegroundColorDelegate", 0x1D0, "DelegateProperty"},
            {"OnVisibilityChanged", 0x1E0, "MulticastInlineDelegateProperty"},
            {"Padding", 0x220, "StructProperty"},
            {"Priority", 0x230, "IntProperty"},
            {"bAutomaticallyRegisterInputOnConstruction", 0x234, "BoolProperty"},
            {"bIsFocusable", 0x234, "BoolProperty"},
            {"bStopAction", 0x234, "BoolProperty"},
            {"QueuedWidgetAnimationTransitions", 0x238, "ArrayProperty"},
            {"ActiveSequencePlayers", 0x248, "ArrayProperty"},
            {"AnimationTickManager", 0x258, "ObjectProperty"},
            {"StoppedSequencePlayers", 0x260, "ArrayProperty"},
            {"NamedSlotBindings", 0x288, "ArrayProperty"},
            {"Extensions", 0x298, "ArrayProperty"},
            {"WidgetTree", 0x2A8, "ObjectProperty"},
            {"bHasScriptImplementedPaint", 0x2B0, "BoolProperty"},
            {"bHasScriptImplementedTick", 0x2B0, "BoolProperty"},
            {"TickFrequency", 0x2C8, "EnumProperty"},
            {"DesiredFocusWidget", 0x2CC, "StructProperty"},
            {"InputComponent", 0x2D8, "ObjectProperty"},
            {"AnimationCallbacks", 0x2E0, "ArrayProperty"},
        }};
    };

    struct FortPersonaListEntry
    {
        static constexpr std::string_view Name = "FortPersonaListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Icon = 0x28;
            static constexpr std::uintptr_t Color = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Icon", 0x28, "ObjectProperty"},
            {"Color", 0x30, "StructProperty"},
        }};
    };

    struct LLMConversation
    {
        static constexpr std::string_view Name = "LLMConversation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LLMPersonaConversationComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MonologuePawnClass = 0x40;
            static constexpr std::uintptr_t PersonaUIComponentClass = 0x48;
            static constexpr std::uintptr_t CreativeRegisteredPlayersManagerComponent = 0x50;
            static constexpr std::uintptr_t ConversationId = 0x58;
            static constexpr std::uintptr_t CachedPlayerSessionMap = 0x90;
            static constexpr std::uintptr_t DefaultMonologuePawnClass = 0x118;
            static constexpr std::uintptr_t DefaultPersonaUIComponentClass = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MonologuePawnClass", 0x40, "ClassProperty"},
            {"PersonaUIComponentClass", 0x48, "ClassProperty"},
            {"CreativeRegisteredPlayersManagerComponent", 0x50, "ObjectProperty"},
            {"ConversationId", 0x58, "StructProperty"},
            {"CachedPlayerSessionMap", 0x90, "MapProperty"},
            {"DefaultMonologuePawnClass", 0x118, "StrProperty"},
            {"DefaultPersonaUIComponentClass", 0x128, "StrProperty"},
        }};
    };

    struct LLMPersonaActor
    {
        static constexpr std::string_view Name = "LLMPersonaActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct LLMPersonaConversationComponent
    {
        static constexpr std::string_view Name = "LLMPersonaConversationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MonologuePawnClass = 0x40;
            static constexpr std::uintptr_t PersonaUIComponentClass = 0x48;
            static constexpr std::uintptr_t CreativeRegisteredPlayersManagerComponent = 0x50;
            static constexpr std::uintptr_t ConversationId = 0x58;
            static constexpr std::uintptr_t CachedPlayerSessionMap = 0x90;
            static constexpr std::uintptr_t DefaultMonologuePawnClass = 0x118;
            static constexpr std::uintptr_t DefaultPersonaUIComponentClass = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MonologuePawnClass", 0x40, "ClassProperty"},
            {"PersonaUIComponentClass", 0x48, "ClassProperty"},
            {"CreativeRegisteredPlayersManagerComponent", 0x50, "ObjectProperty"},
            {"ConversationId", 0x58, "StructProperty"},
            {"CachedPlayerSessionMap", 0x90, "MapProperty"},
            {"DefaultMonologuePawnClass", 0x118, "StrProperty"},
            {"DefaultPersonaUIComponentClass", 0x128, "StrProperty"},
        }};
    };

    struct LLMResponse
    {
        static constexpr std::string_view Name = "LLMResponse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LLMResult
    {
        static constexpr std::string_view Name = "LLMResult";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NPCCharacterModifier_Persona
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Persona";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableFacialAnimations = 0x38;
            static constexpr std::uintptr_t bOverrideBoundPersonaData = 0x38;
            static constexpr std::uintptr_t bOverrideCosmeticFacts = 0x38;
            static constexpr std::uintptr_t bPreviewAudioRange = 0x38;
            static constexpr std::uintptr_t VoiceModel = 0x40;
            static constexpr std::uintptr_t InterruptionRule = 0x48;
            static constexpr std::uintptr_t HearingRange = 0x4C;
            static constexpr std::uintptr_t Volume = 0x50;
            static constexpr std::uintptr_t Attenuation = 0x58;
            static constexpr std::uintptr_t Color = 0x60;
            static constexpr std::uintptr_t CharacterFacts = 0x68;
            static constexpr std::uintptr_t CharacterPrompt = 0x80;
            static constexpr std::uintptr_t CharacterPersonaAssetBindings = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"bEnableFacialAnimations", 0x38, "BoolProperty"},
            {"bOverrideBoundPersonaData", 0x38, "BoolProperty"},
            {"bOverrideCosmeticFacts", 0x38, "BoolProperty"},
            {"bPreviewAudioRange", 0x38, "BoolProperty"},
            {"VoiceModel", 0x40, "ClassProperty"},
            {"InterruptionRule", 0x48, "EnumProperty"},
            {"HearingRange", 0x4C, "FloatProperty"},
            {"Volume", 0x50, "FloatProperty"},
            {"Attenuation", 0x58, "ObjectProperty"},
            {"Color", 0x60, "StructProperty"},
            {"CharacterFacts", 0x68, "StructProperty"},
            {"CharacterPrompt", 0x80, "ObjectProperty"},
            {"CharacterPersonaAssetBindings", 0x88, "SoftObjectProperty"},
        }};
    };

    struct PersonaContextTagSettings
    {
        static constexpr std::string_view Name = "PersonaContextTagSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t GrantedContextTagsDataTable = 0x30;
            static constexpr std::uintptr_t BoundCharacterTag = 0x50;
            static constexpr std::uintptr_t LockedCharacterTag = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GrantedContextTagsDataTable", 0x30, "SoftObjectProperty"},
            {"BoundCharacterTag", 0x50, "StructProperty"},
            {"LockedCharacterTag", 0x54, "StructProperty"},
        }};
    };

    struct PersonaDelegateWrapper
    {
        static constexpr std::string_view Name = "PersonaDelegateWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PersonaNameProvider
    {
        static constexpr std::string_view Name = "PersonaNameProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PersonaOratorComponent
    {
        static constexpr std::string_view Name = "PersonaOratorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNRedwoodOratorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkedAnimationLayer = 0x3E8;
            static constexpr std::uintptr_t CharacterPersonaAssetBindingDataTable = 0x3F0;
            static constexpr std::uintptr_t CharacterPersonaAsset = 0x3F8;
            static constexpr std::uintptr_t PersonaOratorAudioParams = 0x410;
            static constexpr std::uintptr_t PersonaConversationGuid = 0x440;
            static constexpr std::uintptr_t ResonanceConfigurationId = 0x450;
            static constexpr std::uintptr_t bHasLinkedAnimationLayer = 0x460;
            static constexpr std::uintptr_t FocusActor = 0x468;
            static constexpr std::uintptr_t CachedUtteranceID = 0x470;
            static constexpr std::uintptr_t StopFocusDelay = 0x484;
            static constexpr std::uintptr_t LookAtKeyName = 0x488;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"LinkedAnimationLayer", 0x3E8, "ClassProperty"},
            {"CharacterPersonaAssetBindingDataTable", 0x3F0, "ObjectProperty"},
            {"CharacterPersonaAsset", 0x3F8, "ObjectProperty"},
            {"PersonaOratorAudioParams", 0x410, "StructProperty"},
            {"PersonaConversationGuid", 0x440, "StructProperty"},
            {"ResonanceConfigurationId", 0x450, "StrProperty"},
            {"bHasLinkedAnimationLayer", 0x460, "BoolProperty"},
            {"FocusActor", 0x468, "ObjectProperty"},
            {"CachedUtteranceID", 0x470, "OptionalProperty"},
            {"StopFocusDelay", 0x484, "FloatProperty"},
            {"LookAtKeyName", 0x488, "NameProperty"},
        }};
    };

    struct PersonaOratorInputControllerComponent
    {
        static constexpr std::string_view Name = "PersonaOratorInputControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNRedwoodOratorInputControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnControllerBlockListUpdated = 0x290;
            static constexpr std::uintptr_t OnMuteChanged = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnControllerBlockListUpdated", 0x290, "MulticastInlineDelegateProperty"},
            {"OnMuteChanged", 0x2A0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PersonaPrompt
    {
        static constexpr std::string_view Name = "PersonaPrompt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PersonaFacts = 0x28;
            static constexpr std::uintptr_t SessionFacts = 0x40;
            static constexpr std::uintptr_t ConfigurationModel = 0x58;
            static constexpr std::uintptr_t OnResponseReceived = 0x60;
            static constexpr std::uintptr_t OnResponseStructsUpdated = 0x70;
            static constexpr std::uintptr_t Voice = 0x98;
            static constexpr std::uintptr_t PromptInterruptionRule = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PersonaFacts", 0x28, "StructProperty"},
            {"SessionFacts", 0x40, "StructProperty"},
            {"ConfigurationModel", 0x58, "NameProperty"},
            {"OnResponseReceived", 0x60, "MulticastInlineDelegateProperty"},
            {"OnResponseStructsUpdated", 0x70, "MulticastInlineDelegateProperty"},
            {"Voice", 0x98, "StrProperty"},
            {"PromptInterruptionRule", 0xA8, "StrProperty"},
        }};
    };

    struct PersonaResonanceChatCompleter
    {
        static constexpr std::string_view Name = "PersonaResonanceChatCompleter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ResonanceChatCompleter";
        struct Offsets
        {
            static constexpr std::uintptr_t MonologuePawn = 0x1D4;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MonologuePawn", 0x1D4, "WeakObjectProperty"},
        }};
    };

    struct PersonaResonanceSettings
    {
        static constexpr std::string_view Name = "PersonaResonanceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ResonanceConfigurationTable = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ResonanceConfigurationTable", 0x30, "SoftObjectProperty"},
        }};
    };

    struct PersonaUIControllerComponent
    {
        static constexpr std::string_view Name = "PersonaUIControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PersonaDynamicUIScene = 0xC0;
            static constexpr std::uintptr_t PersonaErrorDataTable = 0xC8;
            static constexpr std::uintptr_t PersonaViewModelClass = 0xD0;
            static constexpr std::uintptr_t PermissionWidgetClass = 0xD8;
            static constexpr std::uintptr_t PersonaStatusWidgetContainerClass = 0xF8;
            static constexpr std::uintptr_t PersonaWidgetContainer = 0x118;
            static constexpr std::uintptr_t PendingWidgets = 0x120;
            static constexpr std::uintptr_t StatusWidgetClasses = 0x130;
            static constexpr std::uintptr_t CustomSubtitleWidgetClass = 0x140;
            static constexpr std::uintptr_t PersonaNpcDataAssets = 0x148;
            static constexpr std::uintptr_t ConversationViewModels = 0x158;
            static constexpr std::uintptr_t bHideStatusWhenOutOfRange = 0x168;
            static constexpr std::uintptr_t PersonaUtteranceWrappers = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"PersonaDynamicUIScene", 0xC0, "ObjectProperty"},
            {"PersonaErrorDataTable", 0xC8, "ObjectProperty"},
            {"PersonaViewModelClass", 0xD0, "ClassProperty"},
            {"PermissionWidgetClass", 0xD8, "SoftClassProperty"},
            {"PersonaStatusWidgetContainerClass", 0xF8, "SoftClassProperty"},
            {"PersonaWidgetContainer", 0x118, "ObjectProperty"},
            {"PendingWidgets", 0x120, "ArrayProperty"},
            {"StatusWidgetClasses", 0x130, "MapProperty"},
            {"CustomSubtitleWidgetClass", 0x140, "ClassProperty"},
            {"PersonaNpcDataAssets", 0x148, "MapProperty"},
            {"ConversationViewModels", 0x158, "MapProperty"},
            {"bHideStatusWhenOutOfRange", 0x168, "BoolProperty"},
            {"PersonaUtteranceWrappers", 0x170, "MapProperty"},
        }};
    };

    struct PersonaUtteranceWrapper
    {
        static constexpr std::string_view Name = "PersonaUtteranceWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PersonaViewModel
    {
        static constexpr std::string_view Name = "PersonaViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IsVisible = 0x68;
            static constexpr std::uintptr_t IsSuppressed = 0x69;
            static constexpr std::uintptr_t CanInteract = 0x6A;
            static constexpr std::uintptr_t IsConnecting = 0x6B;
            static constexpr std::uintptr_t IsProcessing = 0x6C;
            static constexpr std::uintptr_t HasFailedToProcess = 0x6D;
            static constexpr std::uintptr_t HasReceivedResponse = 0x6E;
            static constexpr std::uintptr_t IsRecording = 0x6F;
            static constexpr std::uintptr_t IsPlayingAudio = 0x70;
            static constexpr std::uintptr_t IsMuted = 0x71;
            static constexpr std::uintptr_t IsAccountBlocked = 0x72;
            static constexpr std::uintptr_t RateLimitReach = 0x73;
            static constexpr std::uintptr_t VoiceInputAction = 0x78;
            static constexpr std::uintptr_t TimeLeftForAudioRecording = 0x80;
            static constexpr std::uintptr_t TimeLeftForAudioRecordingNormalized = 0x84;
            static constexpr std::uintptr_t PersonaIcon = 0x88;
            static constexpr std::uintptr_t ShowPersonaIcon = 0x90;
            static constexpr std::uintptr_t PersonaName = 0x98;
            static constexpr std::uintptr_t ShowPersonaName = 0xA8;
            static constexpr std::uintptr_t PersonaColor = 0xAC;
            static constexpr std::uintptr_t PersonaList = 0xC0;
            static constexpr std::uintptr_t ShowPersonaList = 0xD0;
            static constexpr std::uintptr_t ErrorMessage = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"IsVisible", 0x68, "BoolProperty"},
            {"IsSuppressed", 0x69, "BoolProperty"},
            {"CanInteract", 0x6A, "BoolProperty"},
            {"IsConnecting", 0x6B, "BoolProperty"},
            {"IsProcessing", 0x6C, "BoolProperty"},
            {"HasFailedToProcess", 0x6D, "BoolProperty"},
            {"HasReceivedResponse", 0x6E, "BoolProperty"},
            {"IsRecording", 0x6F, "BoolProperty"},
            {"IsPlayingAudio", 0x70, "BoolProperty"},
            {"IsMuted", 0x71, "BoolProperty"},
            {"IsAccountBlocked", 0x72, "BoolProperty"},
            {"RateLimitReach", 0x73, "BoolProperty"},
            {"VoiceInputAction", 0x78, "ObjectProperty"},
            {"TimeLeftForAudioRecording", 0x80, "FloatProperty"},
            {"TimeLeftForAudioRecordingNormalized", 0x84, "FloatProperty"},
            {"PersonaIcon", 0x88, "ObjectProperty"},
            {"ShowPersonaIcon", 0x90, "BoolProperty"},
            {"PersonaName", 0x98, "TextProperty"},
            {"ShowPersonaName", 0xA8, "BoolProperty"},
            {"PersonaColor", 0xAC, "StructProperty"},
            {"PersonaList", 0xC0, "ArrayProperty"},
            {"ShowPersonaList", 0xD0, "BoolProperty"},
            {"ErrorMessage", 0xD8, "TextProperty"},
        }};
    };

    struct PersonaVoiceDataProvider
    {
        static constexpr std::string_view Name = "PersonaVoiceDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlaylistUserOptionLLMFacts
    {
        static constexpr std::string_view Name = "PlaylistUserOptionLLMFacts";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlaylistUserOptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x1B0, "StructProperty"},
        }};
    };

    struct ResonanceTextToSpeechProvider
    {
        static constexpr std::string_view Name = "ResonanceTextToSpeechProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorTextToSpeechProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
