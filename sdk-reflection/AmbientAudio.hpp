#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AmbientAudio
{
    struct AmbientAudioBase
    {
        static constexpr std::string_view Name = "AmbientAudioBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sound = 0x8;
            static constexpr std::uintptr_t PlaybackRequirements = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sound", 0x8, "SoftObjectProperty"},
            {"PlaybackRequirements", 0x28, "StructProperty"},
        }};
    };

    struct AmbientAudioComponent
    {
        static constexpr std::string_view Name = "AmbientAudioComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AmbientAsset = 0xD0;
            static constexpr std::uintptr_t Priority = 0xD8;
            static constexpr std::uintptr_t CrossfadeTime = 0xDC;
            static constexpr std::uintptr_t AmbientGuid = 0xE0;
            static constexpr std::uintptr_t DisplayName = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AmbientAsset", 0xD0, "ObjectProperty"},
            {"Priority", 0xD8, "IntProperty"},
            {"CrossfadeTime", 0xDC, "FloatProperty"},
            {"AmbientGuid", 0xE0, "StructProperty"},
            {"DisplayName", 0xF0, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetAmbientAsset",
            "SetCrossfadeTime",
            "SetPriority",
        }};
    };

    struct AmbientAudioDataAsset
    {
        static constexpr std::string_view Name = "AmbientAudioDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundArrays = 0x28;
            static constexpr std::uintptr_t TagCrossfadeTime = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SoundArrays", 0x28, "ArrayProperty"},
            {"TagCrossfadeTime", 0x38, "FloatProperty"},
        }};
    };

    struct AmbientAudioLoop
    {
        static constexpr std::string_view Name = "AmbientAudioLoop";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AmbientAudioBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Sound = 0x8;
            static constexpr std::uintptr_t PlaybackRequirements = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sound", 0x8, "SoftObjectProperty"},
            {"PlaybackRequirements", 0x28, "StructProperty"},
        }};
    };

    struct AmbientAudioOneShot
    {
        static constexpr std::string_view Name = "AmbientAudioOneShot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AmbientAudioBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RetriggerTimeRange = 0x78;
            static constexpr std::uintptr_t TriggerDistanceRange = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RetriggerTimeRange", 0x78, "StructProperty"},
            {"TriggerDistanceRange", 0x88, "StructProperty"},
        }};
    };

    struct AmbientAudioParameterActor
    {
        static constexpr std::string_view Name = "AmbientAudioParameterActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0x278, "ObjectProperty"},
        }};
    };

    struct AmbientAudioSubsystem
    {
        static constexpr std::string_view Name = "AmbientAudioSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTagChanged = 0x40;
            static constexpr std::uintptr_t OnEntryChanged = 0x50;
            static constexpr std::uintptr_t AmbientComponents = 0x60;
            static constexpr std::uintptr_t ParameterActor = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnTagChanged", 0x40, "MulticastInlineDelegateProperty"},
            {"OnEntryChanged", 0x50, "MulticastInlineDelegateProperty"},
            {"AmbientComponents", 0x60, "ArrayProperty"},
            {"ParameterActor", 0x70, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "AddAmbientEntry",
            "AddGameplayTag",
            "GetAudioParameterComponent",
            "RemoveAmbientEntry",
            "RemoveGameplayTag",
        }};
    };

    struct ArrayAmbientAudioBase
    {
        static constexpr std::string_view Name = "ArrayAmbientAudioBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ArrayAmbientAudioLoop
    {
        static constexpr std::string_view Name = "ArrayAmbientAudioLoop";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ArrayAmbientAudioBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Sounds = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sounds", 0x8, "ArrayProperty"},
        }};
    };

    struct ArrayAmbientAudioOneShot
    {
        static constexpr std::string_view Name = "ArrayAmbientAudioOneShot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ArrayAmbientAudioBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Sounds = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sounds", 0x8, "ArrayProperty"},
        }};
    };

}
