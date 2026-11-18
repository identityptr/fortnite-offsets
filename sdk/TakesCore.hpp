#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TakesCore
{
    struct ActorRecorderPropertyMap
    {
        static constexpr std::string_view Name = "ActorRecorderPropertyMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RecordedObject = 0x28;
            static constexpr std::uintptr_t Properties = 0x48;
            static constexpr std::uintptr_t Children = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RecordedObject", 0x28, "SoftObjectProperty"},
            {"Properties", 0x48, "ArrayProperty"},
            {"Children", 0x58, "ArrayProperty"},
        }};
    };

    struct TakeMetaData
    {
        static constexpr std::string_view Name = "TakeMetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsLocked = 0x30;
            static constexpr std::uintptr_t Slate = 0x38;
            static constexpr std::uintptr_t TakeNumber = 0x48;
            static constexpr std::uintptr_t Timestamp = 0x50;
            static constexpr std::uintptr_t TimecodeIn = 0x58;
            static constexpr std::uintptr_t TimecodeOut = 0x70;
            static constexpr std::uintptr_t duration = 0x88;
            static constexpr std::uintptr_t FrameRate = 0x90;
            static constexpr std::uintptr_t Description = 0x98;
            static constexpr std::uintptr_t PresetOrigin = 0xA8;
            static constexpr std::uintptr_t bFrameRateFromTimecode = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bIsLocked", 0x30, "BoolProperty"},
            {"Slate", 0x38, "StrProperty"},
            {"TakeNumber", 0x48, "IntProperty"},
            {"Timestamp", 0x50, "StructProperty"},
            {"TimecodeIn", 0x58, "StructProperty"},
            {"TimecodeOut", 0x70, "StructProperty"},
            {"duration", 0x88, "StructProperty"},
            {"FrameRate", 0x90, "StructProperty"},
            {"Description", 0x98, "StrProperty"},
            {"PresetOrigin", 0xA8, "SoftObjectProperty"},
            {"bFrameRateFromTimecode", 0xC8, "BoolProperty"},
        }};
    };

    struct TakePreset
    {
        static constexpr std::string_view Name = "TakePreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelSequence = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LevelSequence", 0x28, "ObjectProperty"},
        }};
    };

    struct TakePresetSettings
    {
        static constexpr std::string_view Name = "TakePresetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetRecordClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetRecordClass", 0x28, "StructProperty"},
        }};
    };

    struct TakeRecorderAudioInputSettings
    {
        static constexpr std::string_view Name = "TakeRecorderAudioInputSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TakeRecorderNamingTokensContext
    {
        static constexpr std::string_view Name = "TakeRecorderNamingTokensContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TakeMetaData = 0x28;
            static constexpr std::uintptr_t Actor = 0x30;
            static constexpr std::uintptr_t AudioInputDeviceChannel = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TakeMetaData", 0x28, "WeakObjectProperty"},
            {"Actor", 0x30, "WeakObjectProperty"},
            {"AudioInputDeviceChannel", 0x38, "IntProperty"},
        }};
    };

    struct TakeRecorderSource
    {
        static constexpr std::string_view Name = "TakeRecorderSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
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

    struct TakeRecorderSources
    {
        static constexpr std::string_view Name = "TakeRecorderSources";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Sources = 0x40;
            static constexpr std::uintptr_t SourceSubSequenceMap = 0x50;
            static constexpr std::uintptr_t SourceSubSectionMap = 0x60;
            static constexpr std::uintptr_t ActiveSubSections = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Sources", 0x40, "ArrayProperty"},
            {"SourceSubSequenceMap", 0x50, "MapProperty"},
            {"SourceSubSectionMap", 0x60, "MapProperty"},
            {"ActiveSubSections", 0x80, "ArrayProperty"},
        }};
    };

    struct TakeRecorderSourcesManager
    {
        static constexpr std::string_view Name = "TakeRecorderSourcesManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TakeRecorderSourcesManagerImpl
    {
        static constexpr std::string_view Name = "TakeRecorderSourcesManagerImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t RuntimeSources = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RuntimeSources", 0x38, "MapProperty"},
        }};
    };

    struct TakesCoreBlueprintLibrary
    {
        static constexpr std::string_view Name = "TakesCoreBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
