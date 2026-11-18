#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamSessionRuntime
{
    struct ActorComponent_JamSessionNotifier
    {
        static constexpr std::string_view Name = "ActorComponent_JamSessionNotifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJamSessionChangedBP = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnJamSessionChangedBP", 0xD8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct ControllerComponent_JamAnalytics
    {
        static constexpr std::string_view Name = "ControllerComponent_JamAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinLoopLength = 0xE0;
            static constexpr std::uintptr_t LoopStartTimes = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinLoopLength", 0xE0, "StructProperty"},
            {"LoopStartTimes", 0x108, "MapProperty"},
        }};
    };

    struct EnhancedInputHelpers
    {
        static constexpr std::string_view Name = "EnhancedInputHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamAuraCheatManager
    {
        static constexpr std::string_view Name = "JamAuraCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamContentRefMetaData
    {
        static constexpr std::string_view Name = "JamContentRefMetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimMetaData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamControllerComponent_LoopPlayer
    {
        static constexpr std::string_view Name = "JamControllerComponent_LoopPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
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

    struct JamControllerComponent_UserSettings
    {
        static constexpr std::string_view Name = "JamControllerComponent_UserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
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

    struct JamMidiEventDriver
    {
        static constexpr std::string_view Name = "JamMidiEventDriver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakOwningMusicSlotPtr = 0x30;
            static constexpr std::uintptr_t ParsedMidiEventData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WeakOwningMusicSlotPtr", 0x30, "WeakObjectProperty"},
            {"ParsedMidiEventData", 0x38, "ObjectProperty"},
        }};
    };

    struct JamMusicSlot
    {
        static constexpr std::string_view Name = "JamMusicSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLoopStarted = 0x28;
            static constexpr std::uintptr_t OnLoopStopped = 0x38;
            static constexpr std::uintptr_t QuantizationMidiEventDriver = 0x68;
            static constexpr std::uintptr_t CurrentMidiFile = 0x70;
            static constexpr std::uintptr_t CurrentFusionPatch = 0x78;
            static constexpr std::uintptr_t CurrentSongPart = 0x80;
            static constexpr std::uintptr_t MidiEventDriver = 0x88;
            static constexpr std::uintptr_t LastSuccessfulLoadResult = 0x98;
            static constexpr std::uintptr_t CurrentPlayParams = 0x130;
            static constexpr std::uintptr_t LastStartedPlayParams = 0x1A0;
            static constexpr std::uintptr_t JamMusicManager = 0x210;
            static constexpr std::uintptr_t NthSlot = 0x218;
            static constexpr std::uintptr_t OwnedGameplayTags = 0x220;
            static constexpr std::uintptr_t StartAtSongSeconds = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OnLoopStarted", 0x28, "MulticastInlineDelegateProperty"},
            {"OnLoopStopped", 0x38, "MulticastInlineDelegateProperty"},
            {"QuantizationMidiEventDriver", 0x68, "ObjectProperty"},
            {"CurrentMidiFile", 0x70, "ObjectProperty"},
            {"CurrentFusionPatch", 0x78, "ObjectProperty"},
            {"CurrentSongPart", 0x80, "ObjectProperty"},
            {"MidiEventDriver", 0x88, "ObjectProperty"},
            {"LastSuccessfulLoadResult", 0x98, "StructProperty"},
            {"CurrentPlayParams", 0x130, "StructProperty"},
            {"LastStartedPlayParams", 0x1A0, "StructProperty"},
            {"JamMusicManager", 0x210, "ObjectProperty"},
            {"NthSlot", 0x218, "IntProperty"},
            {"OwnedGameplayTags", 0x220, "StructProperty"},
            {"StartAtSongSeconds", 0x240, "FloatProperty"},
        }};
    };

    struct JamMusicSlotCheatExtension
    {
        static constexpr std::string_view Name = "JamMusicSlotCheatExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamMusicSlotDebugMenu
    {
        static constexpr std::string_view Name = "JamMusicSlotDebugMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImGuiDebugMenuBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrivateLocalPlayerController = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrivateLocalPlayerController", 0x298, "ObjectProperty"},
        }};
    };

    struct JamPlayParamsUtilities
    {
        static constexpr std::string_view Name = "JamPlayParamsUtilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamSessionActor
    {
        static constexpr std::string_view Name = "JamSessionActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t JamPlayerManager = 0x2D0;
            static constexpr std::uintptr_t MusicClock_Looped = 0x2D8;
            static constexpr std::uintptr_t AudioState = 0x2E0;
            static constexpr std::uintptr_t MusicManager = 0x2E8;
            static constexpr std::uintptr_t ReactiveFXComponent = 0x2F0;
            static constexpr std::uintptr_t NetSyncComponent = 0x2F8;
            static constexpr std::uintptr_t LipSyncManager = 0x300;
            static constexpr std::uintptr_t MidiEventDataManager = 0x308;
            static constexpr std::uintptr_t MetasoundPlayer = 0x310;
            static constexpr std::uintptr_t JamAudioSource = 0x318;
            static constexpr std::uintptr_t MusicClock = 0x320;
            static constexpr std::uintptr_t SpecialLocationMarkerManager = 0x328;
            static constexpr std::uintptr_t EventRouter = 0x330;
            static constexpr std::uintptr_t InnerJamColliderComponent = 0x338;
            static constexpr std::uintptr_t OuterJamColliderComponent = 0x360;
            static constexpr std::uintptr_t JamSessionGuid = 0x388;
            static constexpr std::uintptr_t ExtraTags = 0x3B8;
            static constexpr std::uintptr_t bIsPersistent = 0x3E0;
            static constexpr std::uintptr_t bBlocksJamming = 0x3E1;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"JamPlayerManager", 0x2D0, "ObjectProperty"},
            {"MusicClock_Looped", 0x2D8, "ObjectProperty"},
            {"AudioState", 0x2E0, "ObjectProperty"},
            {"MusicManager", 0x2E8, "ObjectProperty"},
            {"ReactiveFXComponent", 0x2F0, "ObjectProperty"},
            {"NetSyncComponent", 0x2F8, "ObjectProperty"},
            {"LipSyncManager", 0x300, "ObjectProperty"},
            {"MidiEventDataManager", 0x308, "ObjectProperty"},
            {"MetasoundPlayer", 0x310, "ObjectProperty"},
            {"JamAudioSource", 0x318, "ObjectProperty"},
            {"MusicClock", 0x320, "ObjectProperty"},
            {"SpecialLocationMarkerManager", 0x328, "ObjectProperty"},
            {"EventRouter", 0x330, "ObjectProperty"},
            {"InnerJamColliderComponent", 0x338, "StructProperty"},
            {"OuterJamColliderComponent", 0x360, "StructProperty"},
            {"JamSessionGuid", 0x388, "StructProperty"},
            {"ExtraTags", 0x3B8, "StructProperty"},
            {"bIsPersistent", 0x3E0, "BoolProperty"},
            {"bBlocksJamming", 0x3E1, "BoolProperty"},
        }};
    };

    struct JamSessionBlocker
    {
        static constexpr std::string_view Name = "JamSessionBlocker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Behavior = 0x278;
            static constexpr std::uintptr_t ColliderTarget = 0x279;
            static constexpr std::uintptr_t BoundBlockingPrimitive = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Behavior", 0x278, "EnumProperty"},
            {"ColliderTarget", 0x279, "EnumProperty"},
            {"BoundBlockingPrimitive", 0x280, "ObjectProperty"},
        }};
    };

    struct JamSessionCheatManager
    {
        static constexpr std::string_view Name = "JamSessionCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t JamSessionToSpawn = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JamSessionToSpawn", 0x28, "ClassProperty"},
        }};
    };

    struct JamSessionComponentLibrary
    {
        static constexpr std::string_view Name = "JamSessionComponentLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamSessionComponent_AudioState
    {
        static constexpr std::string_view Name = "JamSessionComponent_AudioState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentKey = 0xC0;
            static constexpr std::uintptr_t CurrentMode = 0xC1;
            static constexpr std::uintptr_t CurrentTempo = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentKey", 0xC0, "EnumProperty"},
            {"CurrentMode", 0xC1, "EnumProperty"},
            {"CurrentTempo", 0xC4, "IntProperty"},
        }};
    };

    struct JamSessionComponent_ExternalSlotFiller
    {
        static constexpr std::string_view Name = "JamSessionComponent_ExternalSlotFiller";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Config", 0xC0, "StructProperty"},
        }};
    };

    struct JamSessionComponent_LipSyncAssetManager
    {
        static constexpr std::string_view Name = "JamSessionComponent_LipSyncAssetManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent_LipSyncAssetManager";
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

    struct JamSessionComponent_MidiEventDataManager
    {
        static constexpr std::string_view Name = "JamSessionComponent_MidiEventDataManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent_MidiEventDataManager";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMidiEventDriverChanged = 0xC0;
            static constexpr std::uintptr_t OnMidiEventDataParsed = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnMidiEventDriverChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMidiEventDataParsed", 0xE8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JamSessionComponent_MusicFXController
    {
        static constexpr std::string_view Name = "JamSessionComponent_MusicFXController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NumEffects = 0xC0;
            static constexpr std::uintptr_t MusicFXControl_Slot0 = 0xC8;
            static constexpr std::uintptr_t MusicFXControl_Slot1 = 0xD8;
            static constexpr std::uintptr_t MusicFXControl_Slot2 = 0xE8;
            static constexpr std::uintptr_t MusicFXControl_Slot3 = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NumEffects", 0xC0, "IntProperty"},
            {"MusicFXControl_Slot0", 0xC8, "ArrayProperty"},
            {"MusicFXControl_Slot1", 0xD8, "ArrayProperty"},
            {"MusicFXControl_Slot2", 0xE8, "ArrayProperty"},
            {"MusicFXControl_Slot3", 0xF8, "ArrayProperty"},
        }};
    };

    struct JamSessionComponent_MusicManager
    {
        static constexpr std::string_view Name = "JamSessionComponent_MusicManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLoopStarted = 0xF8;
            static constexpr std::uintptr_t OnLoopStopped = 0x108;
            static constexpr std::uintptr_t OnJamAudioSourceActiveStateChange = 0x118;
            static constexpr std::uintptr_t OnEmoteMusicSettingChanged = 0x198;
            static constexpr std::uintptr_t MusicSlots = 0x1D0;
            static constexpr std::uintptr_t KeyChangedEventHandle = 0x1E0;
            static constexpr std::uintptr_t ModeChangedEventHandle = 0x1FC;
            static constexpr std::uintptr_t TempoChangedEventHandle = 0x218;
            static constexpr std::uintptr_t ControlChangeEventHandle = 0x234;
            static constexpr std::uintptr_t LocalPlayerGainParam = 0x2C0;
            static constexpr std::uintptr_t StandardGainParam = 0x2C4;
            static constexpr std::uintptr_t CurrentJamPrivacy = 0x2C8;
            static constexpr std::uintptr_t MetasoundPlayer = 0x2D0;
            static constexpr std::uintptr_t CurrentMusicClock = 0x2D8;
            static constexpr std::uintptr_t LoopedMusicClock = 0x2E0;
            static constexpr std::uintptr_t MutingTags = 0x360;
            static constexpr std::uintptr_t MetasoundStoppingTags = 0x380;
            static constexpr std::uintptr_t MusicTimeNetSyncHandler = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"OnLoopStarted", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnLoopStopped", 0x108, "MulticastInlineDelegateProperty"},
            {"OnJamAudioSourceActiveStateChange", 0x118, "MulticastInlineDelegateProperty"},
            {"OnEmoteMusicSettingChanged", 0x198, "MulticastInlineDelegateProperty"},
            {"MusicSlots", 0x1D0, "ArrayProperty"},
            {"KeyChangedEventHandle", 0x1E0, "StructProperty"},
            {"ModeChangedEventHandle", 0x1FC, "StructProperty"},
            {"TempoChangedEventHandle", 0x218, "StructProperty"},
            {"ControlChangeEventHandle", 0x234, "StructProperty"},
            {"LocalPlayerGainParam", 0x2C0, "FloatProperty"},
            {"StandardGainParam", 0x2C4, "FloatProperty"},
            {"CurrentJamPrivacy", 0x2C8, "EnumProperty"},
            {"MetasoundPlayer", 0x2D0, "ObjectProperty"},
            {"CurrentMusicClock", 0x2D8, "ObjectProperty"},
            {"LoopedMusicClock", 0x2E0, "ObjectProperty"},
            {"MutingTags", 0x360, "StructProperty"},
            {"MetasoundStoppingTags", 0x380, "StructProperty"},
            {"MusicTimeNetSyncHandler", 0x3B8, "ObjectProperty"},
        }};
    };

    struct JamSessionComponent_PlayerManager
    {
        static constexpr std::string_view Name = "JamSessionComponent_PlayerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPersistentPartyChanged = 0xC0;
            static constexpr std::uintptr_t GameplayTagsToAdd_Server = 0xE0;
            static constexpr std::uintptr_t GameplayTagsToAdd_Clients = 0x100;
            static constexpr std::uintptr_t GameplayEffectsToApply = 0x120;
            static constexpr std::uintptr_t SpawnableComponents = 0x130;
            static constexpr std::uintptr_t PawnsInSession = 0x140;
            static constexpr std::uintptr_t OtherActorsInSession = 0x150;
            static constexpr std::uintptr_t ServerOnlySpawnedComponents = 0x160;
            static constexpr std::uintptr_t ControllerChangedPawnDelegateListeners = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnPersistentPartyChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"GameplayTagsToAdd_Server", 0xE0, "StructProperty"},
            {"GameplayTagsToAdd_Clients", 0x100, "StructProperty"},
            {"GameplayEffectsToApply", 0x120, "ArrayProperty"},
            {"SpawnableComponents", 0x130, "ArrayProperty"},
            {"PawnsInSession", 0x140, "ArrayProperty"},
            {"OtherActorsInSession", 0x150, "ArrayProperty"},
            {"ServerOnlySpawnedComponents", 0x160, "ArrayProperty"},
            {"ControllerChangedPawnDelegateListeners", 0x190, "ArrayProperty"},
        }};
    };

    struct JamSessionComponent_PlayerManagerDelegateListenerControllerChangedPossessedPawn
    {
        static constexpr std::string_view Name = "JamSessionComponent_PlayerManagerDelegateListenerControllerChangedPossessedPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamSessionComponent_ReactiveFX
    {
        static constexpr std::string_view Name = "JamSessionComponent_ReactiveFX";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReactiveFXState = 0xD8;
            static constexpr std::uintptr_t ReactiveMPC = 0x100;
            static constexpr std::uintptr_t bSetReactivityUpdateRateToTargetFPS = 0x108;
            static constexpr std::uintptr_t ReactivityUpdateRate = 0x10C;
            static constexpr std::uintptr_t PeakTamerValueReleaseTimeSec = 0x110;
            static constexpr std::uintptr_t LoopReactiveFX = 0x118;
            static constexpr std::uintptr_t DefaultPlayerFXToSpawn = 0x178;
            static constexpr std::uintptr_t DefaultPlayerDropFXToSpawn = 0x180;
            static constexpr std::uintptr_t DefaultLoopFXAmplitude = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ReactiveFXState", 0xD8, "StructProperty"},
            {"ReactiveMPC", 0x100, "ObjectProperty"},
            {"bSetReactivityUpdateRateToTargetFPS", 0x108, "BoolProperty"},
            {"ReactivityUpdateRate", 0x10C, "FloatProperty"},
            {"PeakTamerValueReleaseTimeSec", 0x110, "FloatProperty"},
            {"LoopReactiveFX", 0x118, "MapProperty"},
            {"DefaultPlayerFXToSpawn", 0x178, "ObjectProperty"},
            {"DefaultPlayerDropFXToSpawn", 0x180, "ObjectProperty"},
            {"DefaultLoopFXAmplitude", 0x188, "MapProperty"},
        }};
    };

    struct JamSessionComponent_SpecialLocationMarkerManager
    {
        static constexpr std::string_view Name = "JamSessionComponent_SpecialLocationMarkerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationMarkers = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LocationMarkers", 0xD0, "ArrayProperty"},
        }};
    };

    struct JamSessionDeciderCheatExtension
    {
        static constexpr std::string_view Name = "JamSessionDeciderCheatExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamSessionDeciderDebugMenu
    {
        static constexpr std::string_view Name = "JamSessionDeciderDebugMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImGuiReplicatedDebugMenuBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GlobalInfo = 0x460;
            static constexpr std::uintptr_t DeciderInfos = 0x480;
            static constexpr std::uintptr_t bShowAllPlayers = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GlobalInfo", 0x460, "StructProperty"},
            {"DeciderInfos", 0x480, "ArrayProperty"},
            {"bShowAllPlayers", 0x490, "BoolProperty"},
        }};
    };

    struct JamSessionInterface
    {
        static constexpr std::string_view Name = "JamSessionInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamSessionLibrary
    {
        static constexpr std::string_view Name = "JamSessionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamSessionManager
    {
        static constexpr std::string_view Name = "JamSessionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamSessionObserverInterface
    {
        static constexpr std::string_view Name = "JamSessionObserverInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JamSessionSpecialLocationMarker
    {
        static constexpr std::string_view Name = "JamSessionSpecialLocationMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationTags = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LocationTags", 0x240, "StructProperty"},
        }};
    };

    struct PlayerPawnComponent_JamSessionDecider
    {
        static constexpr std::string_view Name = "PlayerPawnComponent_JamSessionDecider";
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

}
