#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SoundLibrary
{
    struct AnimNotifyState_SoundLibrary
    {
        static constexpr std::string_view Name = "AnimNotifyState_SoundLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundContext = 0x30;
            static constexpr std::uintptr_t NotifyHelper = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SoundContext", 0x30, "ObjectProperty"},
            {"NotifyHelper", 0x38, "ObjectProperty"},
        }};
    };

    struct AnimNotify_SoundLibrary
    {
        static constexpr std::string_view Name = "AnimNotify_SoundLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundContext = 0x38;
            static constexpr std::uintptr_t NotifyHelper = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SoundContext", 0x38, "ObjectProperty"},
            {"NotifyHelper", 0x40, "ObjectProperty"},
        }};
    };

    struct GameFeatureAction_AddSoundLibraryCollection
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddSoundLibraryCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t CollectionList = 0x28;
            static constexpr std::uintptr_t ProtoCollectionList = 0x38;
            static constexpr std::uintptr_t TrackedSubsystems = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CollectionList", 0x28, "ArrayProperty"},
            {"ProtoCollectionList", 0x38, "ArrayProperty"},
            {"TrackedSubsystems", 0x48, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceSoundLibraryPlayer
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSoundLibraryPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t EventName = 0x38;
            static constexpr std::uintptr_t bForwardToActorOwner = 0x3C;
            static constexpr std::uintptr_t bForwardToAttachedActors = 0x3D;
            static constexpr std::uintptr_t bAttachedSound = 0x3E;
            static constexpr std::uintptr_t AttachComponentTag = 0x40;
            static constexpr std::uintptr_t AttachName = 0x44;
            static constexpr std::uintptr_t bStopWhenAttachedDestroyed = 0x48;
            static constexpr std::uintptr_t bAutoDestroy = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EventName", 0x38, "StructProperty"},
            {"bForwardToActorOwner", 0x3C, "BoolProperty"},
            {"bForwardToAttachedActors", 0x3D, "BoolProperty"},
            {"bAttachedSound", 0x3E, "BoolProperty"},
            {"AttachComponentTag", 0x40, "NameProperty"},
            {"AttachName", 0x44, "NameProperty"},
            {"bStopWhenAttachedDestroyed", 0x48, "BoolProperty"},
            {"bAutoDestroy", 0x49, "BoolProperty"},
        }};
    };

    struct RichSoundLibrary
    {
        static constexpr std::string_view Name = "RichSoundLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundLibrary";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Data", 0x190, "MapProperty"},
        }};
    };

    struct SoundLibrary
    {
        static constexpr std::string_view Name = "SoundLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Sounds = 0x28;
            static constexpr std::uintptr_t LibraryRequirements = 0x38;
            static constexpr std::uintptr_t Channel = 0x88;
            static constexpr std::uintptr_t Priority = 0x8C;
            static constexpr std::uintptr_t MetaData = 0x90;
            static constexpr std::uintptr_t PrimeOnLoadEvents = 0xB0;
            static constexpr std::uintptr_t FullLibrary = 0xC0;
            static constexpr std::uintptr_t FullRichLibrary = 0xD0;
            static constexpr std::uintptr_t FullPrimeOnLoadEvents = 0xE0;
            static constexpr std::uintptr_t RuntimeSounds = 0xF0;
            static constexpr std::uintptr_t LoadedSoundObjects = 0x100;
            static constexpr std::uintptr_t LoadedRichObjects = 0x110;
            static constexpr std::uintptr_t PrimeOnLoadSoundObjects = 0x120;
            static constexpr std::uintptr_t PrimeOnLoadRichObjects = 0x130;
            static constexpr std::uintptr_t Assets = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Sounds", 0x28, "MapProperty"},
            {"LibraryRequirements", 0x38, "StructProperty"},
            {"Channel", 0x88, "StructProperty"},
            {"Priority", 0x8C, "IntProperty"},
            {"MetaData", 0x90, "StructProperty"},
            {"PrimeOnLoadEvents", 0xB0, "ArrayProperty"},
            {"FullLibrary", 0xC0, "MapProperty"},
            {"FullRichLibrary", 0xD0, "MapProperty"},
            {"FullPrimeOnLoadEvents", 0xE0, "ArrayProperty"},
            {"RuntimeSounds", 0xF0, "MapProperty"},
            {"LoadedSoundObjects", 0x100, "ArrayProperty"},
            {"LoadedRichObjects", 0x110, "ArrayProperty"},
            {"PrimeOnLoadSoundObjects", 0x120, "ArrayProperty"},
            {"PrimeOnLoadRichObjects", 0x130, "ArrayProperty"},
            {"Assets", 0x140, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AddSound",
            "FindSound",
            "SetChannel",
            "SetPriority",
        }};
    };

    struct SoundLibraryActorData
    {
        static constexpr std::string_view Name = "SoundLibraryActorData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundLibraries = 0x20;
            static constexpr std::uintptr_t SoundLibraryContexts = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SoundLibraries", 0x20, "ArrayProperty"},
            {"SoundLibraryContexts", 0x30, "ArrayProperty"},
        }};
    };

    struct SoundLibraryAnimContext
    {
        static constexpr std::string_view Name = "SoundLibraryAnimContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundLibraryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimSettings = 0x60;
            static constexpr std::uintptr_t DefaultOffset = 0x98;
            static constexpr std::uintptr_t Animation = 0xB0;
            static constexpr std::uintptr_t MeshComponent = 0xB8;
            static constexpr std::uintptr_t bSupportsNotifyEnd = 0xC0;
            static constexpr std::uintptr_t AnimRate = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AnimSettings", 0x60, "StructProperty"},
            {"DefaultOffset", 0x98, "StructProperty"},
            {"Animation", 0xB0, "WeakObjectProperty"},
            {"MeshComponent", 0xB8, "WeakObjectProperty"},
            {"bSupportsNotifyEnd", 0xC0, "BoolProperty"},
            {"AnimRate", 0xC4, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ConfigureContext",
        }};
    };

    struct SoundLibraryAnimContextSettings
    {
        static constexpr std::string_view Name = "SoundLibraryAnimContextSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimRateThreshold = 0x0;
            static constexpr std::uintptr_t EventName = 0x8;
            static constexpr std::uintptr_t bOnThisActor = 0xC;
            static constexpr std::uintptr_t bAttachToActor = 0xD;
            static constexpr std::uintptr_t bStopWhenAttachedDestroyed = 0xE;
            static constexpr std::uintptr_t Offset = 0x10;
            static constexpr std::uintptr_t AttachName = 0x28;
            static constexpr std::uintptr_t FadeTime = 0x2C;
            static constexpr std::uintptr_t NotifyTriggerChance = 0x30;
            static constexpr std::uintptr_t VolumeMultiplier = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"AnimRateThreshold", 0x0, "StructProperty"},
            {"EventName", 0x8, "StructProperty"},
            {"bOnThisActor", 0xC, "BoolProperty"},
            {"bAttachToActor", 0xD, "BoolProperty"},
            {"bStopWhenAttachedDestroyed", 0xE, "BoolProperty"},
            {"Offset", 0x10, "StructProperty"},
            {"AttachName", 0x28, "NameProperty"},
            {"FadeTime", 0x2C, "FloatProperty"},
            {"NotifyTriggerChance", 0x30, "FloatProperty"},
            {"VolumeMultiplier", 0x34, "FloatProperty"},
        }};
    };

    struct SoundLibraryAnimNotifyHelper
    {
        static constexpr std::string_view Name = "SoundLibraryAnimNotifyHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoundLibraryBaseEventData
    {
        static constexpr std::string_view Name = "SoundLibraryBaseEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sound = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sound", 0x0, "SoftObjectProperty"},
        }};
    };

    struct SoundLibraryCollection
    {
        static constexpr std::string_view Name = "SoundLibraryCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Libraries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Libraries", 0x28, "MapProperty"},
        }};
    };

    struct SoundLibraryComponent
    {
        static constexpr std::string_view Name = "SoundLibraryComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentTag = 0xD0;
            static constexpr std::uintptr_t ContextClass = 0xD8;
            static constexpr std::uintptr_t Libraries = 0xE0;
            static constexpr std::uintptr_t OnSoundLibraryPlayEvent = 0xF0;
            static constexpr std::uintptr_t OnEventPlayedDelegate = 0x100;
            static constexpr std::uintptr_t OnEventStoppedDelegate = 0x110;
            static constexpr std::uintptr_t Context = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ComponentTag", 0xD0, "StructProperty"},
            {"ContextClass", 0xD8, "ClassProperty"},
            {"Libraries", 0xE0, "ArrayProperty"},
            {"OnSoundLibraryPlayEvent", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnEventPlayedDelegate", 0x100, "MulticastInlineDelegateProperty"},
            {"OnEventStoppedDelegate", 0x110, "MulticastInlineDelegateProperty"},
            {"Context", 0x130, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "AddLibraries",
            "AddLibrary",
            "GetContext",
            "IsEventActive",
            "OnEventPlayed",
            "OnEventStopped",
            "OnSoundPlayed",
            "OnSoundStopped",
            "PlayEvent",
            "RemoveLibraries",
            "RemoveLibrary",
            "StopAllEvents",
            "StopEvent",
            "StopMultipleEvents",
        }};
    };

    struct SoundLibraryContext
    {
        static constexpr std::string_view Name = "SoundLibraryContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x28;
            static constexpr std::uintptr_t BaseEventName = 0x30;
            static constexpr std::uintptr_t bForwardToActorOwner = 0x34;
            static constexpr std::uintptr_t bForwardToAttachedActors = 0x35;
            static constexpr std::uintptr_t bAutoResetContext = 0x36;
            static constexpr std::uintptr_t PlaybackTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Actor", 0x28, "WeakObjectProperty"},
            {"BaseEventName", 0x30, "StructProperty"},
            {"bForwardToActorOwner", 0x34, "BoolProperty"},
            {"bForwardToAttachedActors", 0x35, "BoolProperty"},
            {"bAutoResetContext", 0x36, "BoolProperty"},
            {"PlaybackTags", 0x38, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "CreateEventName",
            "GatherActorTargets",
            "OnAddedToActor",
            "OnRemovedFromActor",
            "Play",
        }};
    };

    struct SoundLibraryContextEventInput
    {
        static constexpr std::string_view Name = "SoundLibraryContextEventInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sound = 0x0;
            static constexpr std::uintptr_t Owner = 0x8;
            static constexpr std::uintptr_t EventTag = 0x10;
            static constexpr std::uintptr_t LibraryTags = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Sound", 0x0, "ObjectProperty"},
            {"Owner", 0x8, "ObjectProperty"},
            {"EventTag", 0x10, "StructProperty"},
            {"LibraryTags", 0x18, "StructProperty"},
        }};
    };

    struct SoundLibraryNiagaraContext
    {
        static constexpr std::string_view Name = "SoundLibraryNiagaraContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundLibraryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x28;
            static constexpr std::uintptr_t BaseEventName = 0x30;
            static constexpr std::uintptr_t bForwardToActorOwner = 0x34;
            static constexpr std::uintptr_t bForwardToAttachedActors = 0x35;
            static constexpr std::uintptr_t bAutoResetContext = 0x36;
            static constexpr std::uintptr_t PlaybackTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Actor", 0x28, "WeakObjectProperty"},
            {"BaseEventName", 0x30, "StructProperty"},
            {"bForwardToActorOwner", 0x34, "BoolProperty"},
            {"bForwardToAttachedActors", 0x35, "BoolProperty"},
            {"bAutoResetContext", 0x36, "BoolProperty"},
            {"PlaybackTags", 0x38, "StructProperty"},
        }};
    };

    struct SoundLibraryPlayResult
    {
        static constexpr std::string_view Name = "SoundLibraryPlayResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventName = 0x0;
            static constexpr std::uintptr_t bWasBlocked = 0x4;
            static constexpr std::uintptr_t bSuccess = 0x5;
            static constexpr std::uintptr_t AudioComponents = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EventName", 0x0, "StructProperty"},
            {"bWasBlocked", 0x4, "BoolProperty"},
            {"bSuccess", 0x5, "BoolProperty"},
            {"AudioComponents", 0x8, "ArrayProperty"},
        }};
    };

    struct SoundLibraryProviderInterface
    {
        static constexpr std::string_view Name = "SoundLibraryProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoundLibrarySet
    {
        static constexpr std::string_view Name = "SoundLibrarySet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LibrarySet = 0x0;
            static constexpr std::uintptr_t SelectionType = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LibrarySet", 0x0, "SetProperty"},
            {"SelectionType", 0x10, "EnumProperty"},
        }};
    };

    struct SoundLibrarySettings
    {
        static constexpr std::string_view Name = "SoundLibrarySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t CommonLibraries = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CommonLibraries", 0x30, "SoftObjectProperty"},
        }};
    };

    struct SoundLibrarySimpleContext
    {
        static constexpr std::string_view Name = "SoundLibrarySimpleContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundLibraryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x60, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ConfigureContext",
        }};
    };

    struct SoundLibrarySubsystem
    {
        static constexpr std::string_view Name = "SoundLibrarySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t LibraryCollections = 0x80;
            static constexpr std::uintptr_t SimpleContext = 0x90;
            static constexpr std::uintptr_t NiagaraContext = 0x98;
            static constexpr std::uintptr_t SoundLibraryRefCount = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LibraryCollections", 0x80, "ArrayProperty"},
            {"SimpleContext", 0x90, "ObjectProperty"},
            {"NiagaraContext", 0x98, "ObjectProperty"},
            {"SoundLibraryRefCount", 0xB0, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 13> FunctionNames{{
            "AddContext",
            "AddLibraries",
            "AddLibrariesFromCollections",
            "AddLibrary",
            "DisableEventsForActor",
            "EnableEventsForActor",
            "GetContext",
            "PlaySound",
            "PlaySoundSimple",
            "RemoveContext",
            "RemoveLibraries",
            "RemoveLibrariesFromCollections",
            "RemoveLibrary",
        }};
    };

    struct SoundLibraryTag
    {
        static constexpr std::string_view Name = "SoundLibraryTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayTag";
        struct Offsets
        {
            static constexpr std::uintptr_t TagName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagName", 0x0, "NameProperty"},
        }};
    };

    struct SoundLibraryTagHelperFunctions
    {
        static constexpr std::string_view Name = "SoundLibraryTagHelperFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "MakeSoundLibraryTag",
        }};
    };

    struct SoundlibrarySimpleContextSettings
    {
        static constexpr std::string_view Name = "SoundlibrarySimpleContextSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventName = 0x0;
            static constexpr std::uintptr_t bAttachedSound = 0x4;
            static constexpr std::uintptr_t bStopWhenAttachedDestroyed = 0x5;
            static constexpr std::uintptr_t bAutoDestroy = 0x6;
            static constexpr std::uintptr_t bForceComponentCreation = 0x7;
            static constexpr std::uintptr_t VolumeMultiplier = 0x8;
            static constexpr std::uintptr_t PitchMultiplier = 0xC;
            static constexpr std::uintptr_t StartTime = 0x10;
            static constexpr std::uintptr_t ConcurrencySettings = 0x18;
            static constexpr std::uintptr_t AttenuationSettings = 0x20;
            static constexpr std::uintptr_t AttachName = 0x28;
            static constexpr std::uintptr_t AttachToComponent = 0x2C;
            static constexpr std::uintptr_t LocationType = 0x34;
            static constexpr std::uintptr_t Location = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"EventName", 0x0, "StructProperty"},
            {"bAttachedSound", 0x4, "BoolProperty"},
            {"bStopWhenAttachedDestroyed", 0x5, "BoolProperty"},
            {"bAutoDestroy", 0x6, "BoolProperty"},
            {"bForceComponentCreation", 0x7, "BoolProperty"},
            {"VolumeMultiplier", 0x8, "FloatProperty"},
            {"PitchMultiplier", 0xC, "FloatProperty"},
            {"StartTime", 0x10, "FloatProperty"},
            {"ConcurrencySettings", 0x18, "ObjectProperty"},
            {"AttenuationSettings", 0x20, "ObjectProperty"},
            {"AttachName", 0x28, "NameProperty"},
            {"AttachToComponent", 0x2C, "WeakObjectProperty"},
            {"LocationType", 0x34, "ByteProperty"},
            {"Location", 0x38, "StructProperty"},
        }};
    };

}
