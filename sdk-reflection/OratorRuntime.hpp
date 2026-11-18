#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OratorRuntime
{
    struct AsyncAction_OratorSayThis
    {
        static constexpr std::string_view Name = "AsyncAction_OratorSayThis";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGenerated = 0x30;
            static constexpr std::uintptr_t OnPerformed = 0x40;
            static constexpr std::uintptr_t OnCleared = 0x50;
            static constexpr std::uintptr_t OnFailure = 0x60;
            static constexpr std::uintptr_t SpeechComponent = 0x70;
            static constexpr std::uintptr_t StartTime = 0x78;
            static constexpr std::uintptr_t UtteranceGuid = 0x80;
            static constexpr std::uintptr_t TargetPlayers = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnGenerated", 0x30, "MulticastInlineDelegateProperty"},
            {"OnPerformed", 0x40, "MulticastInlineDelegateProperty"},
            {"OnCleared", 0x50, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x60, "MulticastInlineDelegateProperty"},
            {"SpeechComponent", 0x70, "ObjectProperty"},
            {"StartTime", 0x78, "DoubleProperty"},
            {"UtteranceGuid", 0x80, "StructProperty"},
            {"TargetPlayers", 0x90, "ArrayProperty"},
        }};
    };

    struct OpusSoundStream
    {
        static constexpr std::string_view Name = "OpusSoundStream";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundWave";
        struct Offsets
        {
            static constexpr std::uintptr_t CompressionQuality = 0x138;
            static constexpr std::uintptr_t StreamingPriority = 0x13C;
            static constexpr std::uintptr_t SampleRateQuality = 0x140;
            static constexpr std::uintptr_t SoundGroup = 0x142;
            static constexpr std::uintptr_t bLooping = 0x143;
            static constexpr std::uintptr_t bSeekableStreaming = 0x143;
            static constexpr std::uintptr_t bStreaming = 0x143;
            static constexpr std::uintptr_t bUseBinkAudio = 0x143;
            static constexpr std::uintptr_t SoundAssetCompressionType = 0x144;
            static constexpr std::uintptr_t ModulationSettings = 0x158;
            static constexpr std::uintptr_t FrequenciesToAnalyze = 0x1C0;
            static constexpr std::uintptr_t CookedSpectralTimeData = 0x1D0;
            static constexpr std::uintptr_t CookedEnvelopeTimeData = 0x1E0;
            static constexpr std::uintptr_t bManualWordWrap = 0x20C;
            static constexpr std::uintptr_t bMature = 0x20C;
            static constexpr std::uintptr_t bSingleLine = 0x20C;
            static constexpr std::uintptr_t bIsAmbisonics = 0x20D;
            static constexpr std::uintptr_t LoadingBehavior = 0x20E;
            static constexpr std::uintptr_t SpokenText = 0x210;
            static constexpr std::uintptr_t SubtitlePriority = 0x220;
            static constexpr std::uintptr_t Volume = 0x224;
            static constexpr std::uintptr_t Pitch = 0x228;
            static constexpr std::uintptr_t NumChannels = 0x22C;
            static constexpr std::uintptr_t SampleRate = 0x230;
            static constexpr std::uintptr_t Subtitles = 0x240;
            static constexpr std::uintptr_t Curves = 0x250;
            static constexpr std::uintptr_t InternalCurves = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"CompressionQuality", 0x138, "IntProperty"},
            {"StreamingPriority", 0x13C, "IntProperty"},
            {"SampleRateQuality", 0x140, "EnumProperty"},
            {"SoundGroup", 0x142, "ByteProperty"},
            {"bLooping", 0x143, "BoolProperty"},
            {"bSeekableStreaming", 0x143, "BoolProperty"},
            {"bStreaming", 0x143, "BoolProperty"},
            {"bUseBinkAudio", 0x143, "BoolProperty"},
            {"SoundAssetCompressionType", 0x144, "EnumProperty"},
            {"ModulationSettings", 0x158, "StructProperty"},
            {"FrequenciesToAnalyze", 0x1C0, "ArrayProperty"},
            {"CookedSpectralTimeData", 0x1D0, "ArrayProperty"},
            {"CookedEnvelopeTimeData", 0x1E0, "ArrayProperty"},
            {"bManualWordWrap", 0x20C, "BoolProperty"},
            {"bMature", 0x20C, "BoolProperty"},
            {"bSingleLine", 0x20C, "BoolProperty"},
            {"bIsAmbisonics", 0x20D, "BoolProperty"},
            {"LoadingBehavior", 0x20E, "EnumProperty"},
            {"SpokenText", 0x210, "StrProperty"},
            {"SubtitlePriority", 0x220, "FloatProperty"},
            {"Volume", 0x224, "FloatProperty"},
            {"Pitch", 0x228, "FloatProperty"},
            {"NumChannels", 0x22C, "IntProperty"},
            {"SampleRate", 0x230, "IntProperty"},
            {"Subtitles", 0x240, "ArrayProperty"},
            {"Curves", 0x250, "ObjectProperty"},
            {"InternalCurves", 0x258, "ObjectProperty"},
        }};
    };

    struct OratorAudioCaptureInput
    {
        static constexpr std::string_view Name = "OratorAudioCaptureInput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorAudioInputProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OratorAudioInputProvider
    {
        static constexpr std::string_view Name = "OratorAudioInputProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OratorAudioPresentationComponent
    {
        static constexpr std::string_view Name = "OratorAudioPresentationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
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

    struct OratorBaseAudioProvider
    {
        static constexpr std::string_view Name = "OratorBaseAudioProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OratorBaseComponent
    {
        static constexpr std::string_view Name = "OratorBaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSourceRegistered = 0xC0;
            static constexpr std::uintptr_t OnAudioStreamFailure = 0xD0;
            static constexpr std::uintptr_t AudioComponentTag = 0xE0;
            static constexpr std::uintptr_t CatchUpPolicy = 0xE4;
            static constexpr std::uintptr_t bHonorControllerFiltering = 0xE5;
            static constexpr std::uintptr_t SoundStream = 0xE8;
            static constexpr std::uintptr_t AudioComponent = 0xF0;
            static constexpr std::uintptr_t PresentationAudioBus = 0xF8;
            static constexpr std::uintptr_t PresentationAudioComponent = 0x100;
            static constexpr std::uintptr_t AudioPresentationComponent = 0x108;
            static constexpr std::uintptr_t OratorSourceId = 0x114;
            static constexpr std::uintptr_t bHasActivePerformance = 0x194;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnSourceRegistered", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnAudioStreamFailure", 0xD0, "MulticastInlineDelegateProperty"},
            {"AudioComponentTag", 0xE0, "NameProperty"},
            {"CatchUpPolicy", 0xE4, "EnumProperty"},
            {"bHonorControllerFiltering", 0xE5, "BoolProperty"},
            {"SoundStream", 0xE8, "ObjectProperty"},
            {"AudioComponent", 0xF0, "ObjectProperty"},
            {"PresentationAudioBus", 0xF8, "ObjectProperty"},
            {"PresentationAudioComponent", 0x100, "ObjectProperty"},
            {"AudioPresentationComponent", 0x108, "ObjectProperty"},
            {"OratorSourceId", 0x114, "StructProperty"},
            {"bHasActivePerformance", 0x194, "BoolProperty"},
        }};
    };

    struct OratorChannel
    {
        static constexpr std::string_view Name = "OratorChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Channel";
        struct Offsets
        {
            static constexpr std::uintptr_t Connection = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Connection", 0x28, "ObjectProperty"},
        }};
    };

    struct OratorCheatManager
    {
        static constexpr std::string_view Name = "OratorCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OratorComponent
    {
        static constexpr std::string_view Name = "OratorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogCorrectionSettings = 0x1B0;
            static constexpr std::uintptr_t OnGeneratedUtterance = 0x240;
            static constexpr std::uintptr_t OnStartedToPerformUtterance = 0x250;
            static constexpr std::uintptr_t OnPerformedUtterance = 0x260;
            static constexpr std::uintptr_t OnClearedUtterance = 0x270;
            static constexpr std::uintptr_t OnCancelledUtterance = 0x280;
            static constexpr std::uintptr_t OnServerDialogueReady = 0x290;
            static constexpr std::uintptr_t OnServerModerationResolved = 0x2A0;
            static constexpr std::uintptr_t CurveSourceBindingName = 0x2B0;
            static constexpr std::uintptr_t CurveSyncOffset = 0x2B4;
            static constexpr std::uintptr_t DialogueStructDescriptor = 0x2B8;
            static constexpr std::uintptr_t bEnableAnimGeneration = 0x2C0;
            static constexpr std::uintptr_t AnimCurveNames = 0x2C8;
            static constexpr std::uintptr_t SubjectName = 0x2E8;
            static constexpr std::uintptr_t TextToSpeechProvider = 0x2F0;
            static constexpr std::uintptr_t SpeechAnimationProvider = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"DialogCorrectionSettings", 0x1B0, "StructProperty"},
            {"OnGeneratedUtterance", 0x240, "MulticastInlineDelegateProperty"},
            {"OnStartedToPerformUtterance", 0x250, "MulticastInlineDelegateProperty"},
            {"OnPerformedUtterance", 0x260, "MulticastInlineDelegateProperty"},
            {"OnClearedUtterance", 0x270, "MulticastInlineDelegateProperty"},
            {"OnCancelledUtterance", 0x280, "MulticastInlineDelegateProperty"},
            {"OnServerDialogueReady", 0x290, "MulticastInlineDelegateProperty"},
            {"OnServerModerationResolved", 0x2A0, "MulticastInlineDelegateProperty"},
            {"CurveSourceBindingName", 0x2B0, "NameProperty"},
            {"CurveSyncOffset", 0x2B4, "FloatProperty"},
            {"DialogueStructDescriptor", 0x2B8, "ObjectProperty"},
            {"bEnableAnimGeneration", 0x2C0, "BoolProperty"},
            {"AnimCurveNames", 0x2C8, "ArrayProperty"},
            {"SubjectName", 0x2E8, "NameProperty"},
            {"TextToSpeechProvider", 0x2F0, "ObjectProperty"},
            {"SpeechAnimationProvider", 0x2F8, "ObjectProperty"},
        }};
    };

    struct OratorControllerComponent
    {
        static constexpr std::string_view Name = "OratorControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
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

    struct OratorDialogueComponent
    {
        static constexpr std::string_view Name = "OratorDialogueComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogCorrectionSettings = 0x1A8;
            static constexpr std::uintptr_t OnGeneratedDialogue = 0x238;
            static constexpr std::uintptr_t OnStartedToPerformDialogue = 0x248;
            static constexpr std::uintptr_t OnPerformedDialogue = 0x258;
            static constexpr std::uintptr_t OnClearedDialogue = 0x268;
            static constexpr std::uintptr_t OnCancelledDialogue = 0x278;
            static constexpr std::uintptr_t DialogueProvider = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DialogCorrectionSettings", 0x1A8, "StructProperty"},
            {"OnGeneratedDialogue", 0x238, "MulticastInlineDelegateProperty"},
            {"OnStartedToPerformDialogue", 0x248, "MulticastInlineDelegateProperty"},
            {"OnPerformedDialogue", 0x258, "MulticastInlineDelegateProperty"},
            {"OnClearedDialogue", 0x268, "MulticastInlineDelegateProperty"},
            {"OnCancelledDialogue", 0x278, "MulticastInlineDelegateProperty"},
            {"DialogueProvider", 0x288, "ObjectProperty"},
        }};
    };

    struct OratorDialogueProvider
    {
        static constexpr std::string_view Name = "OratorDialogueProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorBaseAudioProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OratorDialogueStructDescriptor
    {
        static constexpr std::string_view Name = "OratorDialogueStructDescriptor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
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

    struct OratorInputControllerComponent
    {
        static constexpr std::string_view Name = "OratorInputControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStartVoiceCapture = 0xC0;
            static constexpr std::uintptr_t OnStopVoiceCapture = 0xD0;
            static constexpr std::uintptr_t OnCancelVoiceCapture = 0xE0;
            static constexpr std::uintptr_t OnClientLanguageChanged = 0xF0;
            static constexpr std::uintptr_t OnPlayerSaid = 0x100;
            static constexpr std::uintptr_t OnCaptureCooldownStarted = 0x110;
            static constexpr std::uintptr_t OnCaptureCooldownEnded = 0x120;
            static constexpr std::uintptr_t OnVoiceCaptureEnabledChanged = 0x130;
            static constexpr std::uintptr_t OnCanVoiceCaptureChanged = 0x140;
            static constexpr std::uintptr_t OnVoiceCaptureDecibelThreshold = 0x150;
            static constexpr std::uintptr_t OnTranscriptionComplete = 0x160;
            static constexpr std::uintptr_t OnTranscriptionFailed = 0x170;
            static constexpr std::uintptr_t ClientLanguage = 0x198;
            static constexpr std::uintptr_t AudioInputProvider = 0x1A8;
            static constexpr std::uintptr_t TranscriptionProvider = 0x1B0;
            static constexpr std::uintptr_t VoiceActivityProvider = 0x1B8;
            static constexpr std::uintptr_t TranscriptionPrompt = 0x1C0;
            static constexpr std::uintptr_t OratorSourceId = 0x1D8;
            static constexpr std::uintptr_t bVoiceCaptureEnabled = 0x1E8;
            static constexpr std::uintptr_t CooldownEndTime = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"OnStartVoiceCapture", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnStopVoiceCapture", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnCancelVoiceCapture", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnClientLanguageChanged", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnPlayerSaid", 0x100, "MulticastInlineDelegateProperty"},
            {"OnCaptureCooldownStarted", 0x110, "MulticastInlineDelegateProperty"},
            {"OnCaptureCooldownEnded", 0x120, "MulticastInlineDelegateProperty"},
            {"OnVoiceCaptureEnabledChanged", 0x130, "MulticastInlineDelegateProperty"},
            {"OnCanVoiceCaptureChanged", 0x140, "MulticastInlineDelegateProperty"},
            {"OnVoiceCaptureDecibelThreshold", 0x150, "MulticastInlineDelegateProperty"},
            {"OnTranscriptionComplete", 0x160, "MulticastInlineDelegateProperty"},
            {"OnTranscriptionFailed", 0x170, "MulticastInlineDelegateProperty"},
            {"ClientLanguage", 0x198, "TextProperty"},
            {"AudioInputProvider", 0x1A8, "ObjectProperty"},
            {"TranscriptionProvider", 0x1B0, "ObjectProperty"},
            {"VoiceActivityProvider", 0x1B8, "ObjectProperty"},
            {"TranscriptionPrompt", 0x1C0, "ObjectProperty"},
            {"OratorSourceId", 0x1D8, "StructProperty"},
            {"bVoiceCaptureEnabled", 0x1E8, "BoolProperty"},
            {"CooldownEndTime", 0x220, "DoubleProperty"},
        }};
    };

    struct OratorMusicComponent
    {
        static constexpr std::string_view Name = "OratorMusicComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGeneratedMusic = 0x1A8;
            static constexpr std::uintptr_t OnStartedToPerformMusic = 0x1B8;
            static constexpr std::uintptr_t OnPerformedMusic = 0x1C8;
            static constexpr std::uintptr_t OnClearedMusic = 0x1D8;
            static constexpr std::uintptr_t OnCancelledMusic = 0x1E8;
            static constexpr std::uintptr_t MusicProvider = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnGeneratedMusic", 0x1A8, "MulticastInlineDelegateProperty"},
            {"OnStartedToPerformMusic", 0x1B8, "MulticastInlineDelegateProperty"},
            {"OnPerformedMusic", 0x1C8, "MulticastInlineDelegateProperty"},
            {"OnClearedMusic", 0x1D8, "MulticastInlineDelegateProperty"},
            {"OnCancelledMusic", 0x1E8, "MulticastInlineDelegateProperty"},
            {"MusicProvider", 0x1F8, "ObjectProperty"},
        }};
    };

    struct OratorMusicProvider
    {
        static constexpr std::string_view Name = "OratorMusicProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorBaseAudioProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OratorReplayAnchor
    {
        static constexpr std::string_view Name = "OratorReplayAnchor";
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

    struct OratorSpeechAnimationProvider
    {
        static constexpr std::string_view Name = "OratorSpeechAnimationProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MutedCurveNames = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MutedCurveNames", 0x28, "ArrayProperty"},
        }};
    };

    struct OratorSubsystem
    {
        static constexpr std::string_view Name = "OratorSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSourceRegistrationChanged = 0x38;
            static constexpr std::uintptr_t ReplayAudioSinks = 0xF8;
            static constexpr std::uintptr_t AnalyticsEventNamespace = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnSourceRegistrationChanged", 0x38, "MulticastInlineDelegateProperty"},
            {"ReplayAudioSinks", 0xF8, "MapProperty"},
            {"AnalyticsEventNamespace", 0x230, "StrProperty"},
        }};
    };

    struct OratorTextToSpeechProvider
    {
        static constexpr std::string_view Name = "OratorTextToSpeechProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorBaseAudioProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OratorTranscriptionProvider
    {
        static constexpr std::string_view Name = "OratorTranscriptionProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OratorVoiceActivityProvider
    {
        static constexpr std::string_view Name = "OratorVoiceActivityProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
