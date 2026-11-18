#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MusicEventSystem
{
    struct MusicEventController
    {
        static constexpr std::string_view Name = "MusicEventController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MusicEventData
    {
        static constexpr std::string_view Name = "MusicEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EventTag = 0x8;
            static constexpr std::uintptr_t ResolutionRule = 0xC;
            static constexpr std::uintptr_t FadeInTime = 0x10;
            static constexpr std::uintptr_t FadeOutTime = 0x14;
            static constexpr std::uintptr_t MaxConcurrentEvents = 0x18;
            static constexpr std::uintptr_t AttenuationEvalThreshold = 0x1C;
            static constexpr std::uintptr_t Description = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"EventTag", 0x8, "StructProperty"},
            {"ResolutionRule", 0xC, "EnumProperty"},
            {"FadeInTime", 0x10, "FloatProperty"},
            {"FadeOutTime", 0x14, "FloatProperty"},
            {"MaxConcurrentEvents", 0x18, "IntProperty"},
            {"AttenuationEvalThreshold", 0x1C, "FloatProperty"},
            {"Description", 0x20, "StrProperty"},
        }};
    };

    struct MusicEventInstance
    {
        static constexpr std::string_view Name = "MusicEventInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x28;
            static constexpr std::uintptr_t MusicClockComponent = 0x30;
            static constexpr std::uintptr_t Subsystem = 0xB0;
            static constexpr std::uintptr_t SubsystemData = 0xB8;
            static constexpr std::uintptr_t OnIsAudibleChanged = 0xC0;
            static constexpr std::uintptr_t OnIsDominantChanged = 0xD0;
            static constexpr std::uintptr_t OnWithinAttenuationChanged = 0xE0;
            static constexpr std::uintptr_t OnPriorityChanged = 0xF0;
            static constexpr std::uintptr_t OnClockChanged = 0x100;
            static constexpr std::uintptr_t OnPlaybackCompleted = 0x110;
            static constexpr std::uintptr_t VolumeCB = 0x160;
            static constexpr std::uintptr_t VolumeCBM = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Component", 0x28, "WeakObjectProperty"},
            {"MusicClockComponent", 0x30, "WeakObjectProperty"},
            {"Subsystem", 0xB0, "ObjectProperty"},
            {"SubsystemData", 0xB8, "ObjectProperty"},
            {"OnIsAudibleChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnIsDominantChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnWithinAttenuationChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnPriorityChanged", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnClockChanged", 0x100, "MulticastInlineDelegateProperty"},
            {"OnPlaybackCompleted", 0x110, "MulticastInlineDelegateProperty"},
            {"VolumeCB", 0x160, "ObjectProperty"},
            {"VolumeCBM", 0x168, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 21> FunctionNames{{
            "GetAsset",
            "GetAttenuationEval",
            "GetClock",
            "GetComponent",
            "GetControlBusValue",
            "GetDistSqToListener",
            "GetEventData",
            "GetGroup",
            "GetIsPlaying",
            "GetIsTickable",
            "GetIsWithinAttenuationThreshold",
            "GetMaxDistance",
            "GetOwner",
            "GetPriority",
            "GetVolume",
            "IsAudible",
            "IsDominant",
            "IsPreparingToBeDominant",
            "IsWithinAttenuation",
            "OnAudioComponentFinished",
            "OnComponentOwnerEndPlay",
        }};
    };

    struct MusicEventSubsystem
    {
        static constexpr std::string_view Name = "MusicEventSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SubsystemDataAssetPath = 0x58;
            static constexpr std::uintptr_t SubsystemData = 0x70;
            static constexpr std::uintptr_t OnHighestPriorityMusicEventChanged_BP = 0x78;
            static constexpr std::uintptr_t OnHighestPriorityEventWithClockChanged_BP = 0xA0;
            static constexpr std::uintptr_t OnHighestPriorityEventWithRunningClockChanged_BP = 0xC8;
            static constexpr std::uintptr_t OnHighestPriorityClockBeat_BP = 0xF0;
            static constexpr std::uintptr_t EventDataArray = 0x100;
            static constexpr std::uintptr_t EventInstances = 0x110;
            static constexpr std::uintptr_t EventInstancesFadingOut = 0x120;
            static constexpr std::uintptr_t TickingEventInstances = 0x130;
            static constexpr std::uintptr_t AllComponents = 0x140;
            static constexpr std::uintptr_t OwnedComponents = 0x150;
            static constexpr std::uintptr_t DebugWidget = 0x160;
            static constexpr std::uintptr_t EventInstancesWithClocks = 0x168;
            static constexpr std::uintptr_t HighestPriorityInstanceWithRunningClock = 0x178;
            static constexpr std::uintptr_t MaterialParameterCollectionInstance = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"SubsystemDataAssetPath", 0x58, "StructProperty"},
            {"SubsystemData", 0x70, "ObjectProperty"},
            {"OnHighestPriorityMusicEventChanged_BP", 0x78, "MulticastInlineDelegateProperty"},
            {"OnHighestPriorityEventWithClockChanged_BP", 0xA0, "MulticastInlineDelegateProperty"},
            {"OnHighestPriorityEventWithRunningClockChanged_BP", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnHighestPriorityClockBeat_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"EventDataArray", 0x100, "ArrayProperty"},
            {"EventInstances", 0x110, "ArrayProperty"},
            {"EventInstancesFadingOut", 0x120, "ArrayProperty"},
            {"TickingEventInstances", 0x130, "ArrayProperty"},
            {"AllComponents", 0x140, "ArrayProperty"},
            {"OwnedComponents", 0x150, "ArrayProperty"},
            {"DebugWidget", 0x160, "ObjectProperty"},
            {"EventInstancesWithClocks", 0x168, "ArrayProperty"},
            {"HighestPriorityInstanceWithRunningClock", 0x178, "ObjectProperty"},
            {"MaterialParameterCollectionInstance", 0x180, "WeakObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 23> FunctionNames{{
            "AddEvent",
            "AddEventByComponent",
            "AddEventBySynthComponent",
            "AddEventWithController",
            "BroadcastHighestPriBeatEvent",
            "ChangeEventCategory",
            "ChangeEventCategorySynthComponent",
            "ChangeEventGroup",
            "ChangeEventGroupSynthComponent",
            "ChangeEventMusicClock",
            "GetEventInstance",
            "GetHighestPriorityClock",
            "GetHighestPriorityInstance",
            "GetHighestPriorityInstanceWithClock",
            "GetHighestPriorityInstanceWithRunningClock",
            "GetHighestPriorityRunningClock",
            "IsEnabled",
            "OnEventInstancePlaybackCompleted",
            "OnInstanceClockStateChanged",
            "RemoveAllEvents",
            "RemoveEvent",
            "RemoveEventBySynthComponent",
            "RemoveEventCategory",
        }};
    };

    struct MusicEventSubsystemData
    {
        static constexpr std::string_view Name = "MusicEventSubsystemData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t EventDataRegistry = 0x28;
            static constexpr std::uintptr_t DebugWidgetClass = 0x30;
            static constexpr std::uintptr_t MusicClockMaterialParameters = 0x38;
            static constexpr std::uintptr_t MaterialParameterCollection = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EventDataRegistry", 0x28, "ObjectProperty"},
            {"DebugWidgetClass", 0x30, "ClassProperty"},
            {"MusicClockMaterialParameters", 0x38, "StructProperty"},
            {"MaterialParameterCollection", 0x98, "ObjectProperty"},
        }};
    };

    struct MusicEventSubsystemDebugWidget
    {
        static constexpr std::string_view Name = "MusicEventSubsystemDebugWidget";
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

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetEventClocks",
            "SetEventInstances",
        }};
    };

    struct SoundActionRegisterMusicEvent
    {
        static constexpr std::string_view Name = "SoundActionRegisterMusicEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorAction";
        struct Offsets
        {
            static constexpr std::uintptr_t EventTag = 0x8;
            static constexpr std::uintptr_t BehaviorTags = 0x10;
            static constexpr std::uintptr_t GroupName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EventTag", 0x8, "StructProperty"},
            {"BehaviorTags", 0x10, "StructProperty"},
            {"GroupName", 0x30, "NameProperty"},
        }};
    };

    struct SoundSelectorMusicEvent
    {
        static constexpr std::string_view Name = "SoundSelectorMusicEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorSelector";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicEventTagQuery = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MusicEventTagQuery", 0x8, "StructProperty"},
        }};
    };

}
