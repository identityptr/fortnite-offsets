#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TakeRecorderSources
{
    struct TakeRecorderActorSource
    {
        static constexpr std::string_view Name = "TakeRecorderActorSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderSource";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x40;
            static constexpr std::uintptr_t RecordType = 0x60;
            static constexpr std::uintptr_t SpawnableOverwriteBehavior = 0x61;
            static constexpr std::uintptr_t bRecordParentHierarchy = 0x62;
            static constexpr std::uintptr_t AttachRecordBehaviour = 0x63;
            static constexpr std::uintptr_t bReduceKeys = 0x64;
            static constexpr std::uintptr_t RecordedProperties = 0x68;
            static constexpr std::uintptr_t IncludeAnimationNames = 0x70;
            static constexpr std::uintptr_t ExcludeAnimationNames = 0x80;
            static constexpr std::uintptr_t TargetLevelSequence = 0x90;
            static constexpr std::uintptr_t RootLevelSequence = 0x98;
            static constexpr std::uintptr_t FactorySettings = 0xA0;
            static constexpr std::uintptr_t TrackRecorders = 0xB0;
            static constexpr std::uintptr_t ParentSource = 0xC0;
            static constexpr std::uintptr_t bShowProgressDialog = 0xC8;
            static constexpr std::uintptr_t bTargetIsSequencerActor = 0x1A1;
            static constexpr std::uintptr_t bTargetLevelSequenceAllowsSpawnableObjects = 0x1A2;
            static constexpr std::uintptr_t CachedActorLabel = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Target", 0x40, "SoftObjectProperty"},
            {"RecordType", 0x60, "EnumProperty"},
            {"SpawnableOverwriteBehavior", 0x61, "EnumProperty"},
            {"bRecordParentHierarchy", 0x62, "BoolProperty"},
            {"AttachRecordBehaviour", 0x63, "EnumProperty"},
            {"bReduceKeys", 0x64, "BoolProperty"},
            {"RecordedProperties", 0x68, "ObjectProperty"},
            {"IncludeAnimationNames", 0x70, "ArrayProperty"},
            {"ExcludeAnimationNames", 0x80, "ArrayProperty"},
            {"TargetLevelSequence", 0x90, "ObjectProperty"},
            {"RootLevelSequence", 0x98, "ObjectProperty"},
            {"FactorySettings", 0xA0, "ArrayProperty"},
            {"TrackRecorders", 0xB0, "ArrayProperty"},
            {"ParentSource", 0xC0, "ObjectProperty"},
            {"bShowProgressDialog", 0xC8, "BoolProperty"},
            {"bTargetIsSequencerActor", 0x1A1, "BoolProperty"},
            {"bTargetLevelSequenceAllowsSpawnableObjects", 0x1A2, "BoolProperty"},
            {"CachedActorLabel", 0x1A8, "StrProperty"},
        }};
    };

    struct TakeRecorderCVarRecordingFunctionLibrary
    {
        static constexpr std::string_view Name = "TakeRecorderCVarRecordingFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TakeRecorderCVarsSource
    {
        static constexpr std::string_view Name = "TakeRecorderCVarsSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderSource";
        struct Offsets
        {
            static constexpr std::uintptr_t CVars = 0x38;
            static constexpr std::uintptr_t TrackRecorders = 0x48;
            static constexpr std::uintptr_t CVarsRecordedLastFrame = 0x58;
            static constexpr std::uintptr_t TargetLevelSequence = 0x68;
            static constexpr std::uintptr_t LastUsedFolder = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CVars", 0x38, "StructProperty"},
            {"TrackRecorders", 0x48, "ArrayProperty"},
            {"CVarsRecordedLastFrame", 0x58, "SetProperty"},
            {"TargetLevelSequence", 0x68, "WeakObjectProperty"},
            {"LastUsedFolder", 0x70, "WeakObjectProperty"},
        }};
    };

    struct TakeRecorderCameraCutSource
    {
        static constexpr std::string_view Name = "TakeRecorderCameraCutSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderSource";
        struct Offsets
        {
            static constexpr std::uintptr_t World = 0x38;
            static constexpr std::uintptr_t RootLevelSequence = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"World", 0x38, "ObjectProperty"},
            {"RootLevelSequence", 0x40, "ObjectProperty"},
        }};
    };

    struct TakeRecorderLevelSequenceSource
    {
        static constexpr std::string_view Name = "TakeRecorderLevelSequenceSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderSource";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelSequencesToTrigger = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LevelSequencesToTrigger", 0x38, "ArrayProperty"},
        }};
    };

    struct TakeRecorderLevelVisibilitySource
    {
        static constexpr std::string_view Name = "TakeRecorderLevelVisibilitySource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderLevelVisibilitySourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelVisibilityTrackName = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LevelVisibilityTrackName", 0x38, "TextProperty"},
        }};
    };

    struct TakeRecorderLevelVisibilitySourceSettings
    {
        static constexpr std::string_view Name = "TakeRecorderLevelVisibilitySourceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderSource";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelVisibilityTrackName = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LevelVisibilityTrackName", 0x38, "TextProperty"},
        }};
    };

    struct TakeRecorderMicrophoneAudioManager
    {
        static constexpr std::string_view Name = "TakeRecorderMicrophoneAudioManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderAudioInputSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioInputDevice = 0x40;
            static constexpr std::uintptr_t OnAudioInputDevicePropertyChanged = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AudioInputDevice", 0x40, "StructProperty"},
            {"OnAudioInputDevicePropertyChanged", 0x70, "MulticastInlineDelegateProperty"},
        }};
    };

    struct TakeRecorderMicrophoneAudioSource
    {
        static constexpr std::string_view Name = "TakeRecorderMicrophoneAudioSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderMicrophoneAudioSourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioGain = 0x78;
            static constexpr std::uintptr_t bReplaceRecordedAudio = 0x7C;
            static constexpr std::uintptr_t AudioChannel = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AudioGain", 0x78, "FloatProperty"},
            {"bReplaceRecordedAudio", 0x7C, "BoolProperty"},
            {"AudioChannel", 0x80, "StructProperty"},
        }};
    };

    struct TakeRecorderMicrophoneAudioSourceSettings
    {
        static constexpr std::string_view Name = "TakeRecorderMicrophoneAudioSourceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderSource";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioSourceName = 0x38;
            static constexpr std::uintptr_t AudioTrackName = 0x48;
            static constexpr std::uintptr_t AudioAssetName = 0x58;
            static constexpr std::uintptr_t AudioSubDirectory = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AudioSourceName", 0x38, "TextProperty"},
            {"AudioTrackName", 0x48, "TextProperty"},
            {"AudioAssetName", 0x58, "StrProperty"},
            {"AudioSubDirectory", 0x68, "StrProperty"},
        }};
    };

    struct TakeRecorderNearbySpawnedActorSource
    {
        static constexpr std::string_view Name = "TakeRecorderNearbySpawnedActorSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderSource";
        struct Offsets
        {
            static constexpr std::uintptr_t Proximity = 0x38;
            static constexpr std::uintptr_t bFilterSpawnedActors = 0x3C;
            static constexpr std::uintptr_t FilterTypes = 0x40;
            static constexpr std::uintptr_t ExcludeTypes = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Proximity", 0x38, "FloatProperty"},
            {"bFilterSpawnedActors", 0x3C, "BoolProperty"},
            {"FilterTypes", 0x40, "ArrayProperty"},
            {"ExcludeTypes", 0x50, "ArrayProperty"},
        }};
    };

    struct TakeRecorderPlayerSource
    {
        static constexpr std::string_view Name = "TakeRecorderPlayerSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderSource";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t TakeNumber = 0x2C;
            static constexpr std::uintptr_t TrackTint = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
            {"TakeNumber", 0x2C, "IntProperty"},
            {"TrackTint", 0x30, "StructProperty"},
        }};
    };

    struct TakeRecorderWorldSource
    {
        static constexpr std::string_view Name = "TakeRecorderWorldSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderWorldSourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bRecordWorldSettings = 0x38;
            static constexpr std::uintptr_t bAutotrackActors = 0x39;
            static constexpr std::uintptr_t bAllowEditorOnlyActors = 0x3A;
            static constexpr std::uintptr_t bOnlyRecordMoveableActors = 0x3B;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bRecordWorldSettings", 0x38, "BoolProperty"},
            {"bAutotrackActors", 0x39, "BoolProperty"},
            {"bAllowEditorOnlyActors", 0x3A, "BoolProperty"},
            {"bOnlyRecordMoveableActors", 0x3B, "BoolProperty"},
        }};
    };

    struct TakeRecorderWorldSourceSettings
    {
        static constexpr std::string_view Name = "TakeRecorderWorldSourceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TakeRecorderSource";
        struct Offsets
        {
            static constexpr std::uintptr_t bRecordWorldSettings = 0x38;
            static constexpr std::uintptr_t bAutotrackActors = 0x39;
            static constexpr std::uintptr_t bAllowEditorOnlyActors = 0x3A;
            static constexpr std::uintptr_t bOnlyRecordMoveableActors = 0x3B;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bRecordWorldSettings", 0x38, "BoolProperty"},
            {"bAutotrackActors", 0x39, "BoolProperty"},
            {"bAllowEditorOnlyActors", 0x3A, "BoolProperty"},
            {"bOnlyRecordMoveableActors", 0x3B, "BoolProperty"},
        }};
    };

}
