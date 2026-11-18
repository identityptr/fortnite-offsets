#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioMutators
{
    struct AudioMutator
    {
        static constexpr std::string_view Name = "AudioMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMutatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Selectors = 0x28;
            static constexpr std::uintptr_t Actions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Selectors", 0x28, "ArrayProperty"},
            {"Actions", 0x38, "ArrayProperty"},
        }};
    };

    struct AudioMutatorAction
    {
        static constexpr std::string_view Name = "AudioMutatorAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorActionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMutatorActionBase
    {
        static constexpr std::string_view Name = "AudioMutatorActionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMutatorBase
    {
        static constexpr std::string_view Name = "AudioMutatorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMutatorParseParamAction
    {
        static constexpr std::string_view Name = "AudioMutatorParseParamAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorStatefulActionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMutatorSelector
    {
        static constexpr std::string_view Name = "AudioMutatorSelector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMutatorStatefulActionBase
    {
        static constexpr std::string_view Name = "AudioMutatorStatefulActionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorActionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMutatorStatefulSoundAction
    {
        static constexpr std::string_view Name = "AudioMutatorStatefulSoundAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorStatefulActionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMutatorsSubsystem
    {
        static constexpr std::string_view Name = "AudioMutatorsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "AddMutator",
            "RemoveMutator",
            "ReplaceMutator",
        }};
    };

    struct AudioOwnerRegistry
    {
        static constexpr std::string_view Name = "AudioOwnerRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BranchAudioMutator
    {
        static constexpr std::string_view Name = "BranchAudioMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMutatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationSelector = 0x28;
            static constexpr std::uintptr_t InclusionSelector = 0x38;
            static constexpr std::uintptr_t InclusionGroupActions = 0x48;
            static constexpr std::uintptr_t ExclusionGroupActions = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActivationSelector", 0x28, "StructProperty"},
            {"InclusionSelector", 0x38, "StructProperty"},
            {"InclusionGroupActions", 0x48, "ArrayProperty"},
            {"ExclusionGroupActions", 0x58, "ArrayProperty"},
        }};
    };

    struct GameFeatureAction_AddAudioMutators
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddAudioMutators";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction_AudioActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mutators = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mutators", 0x38, "ArrayProperty"},
        }};
    };

    struct SoundActionModulator
    {
        static constexpr std::string_view Name = "SoundActionModulator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Modulator = 0x8;
            static constexpr std::uintptr_t Destination = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Modulator", 0x8, "ObjectProperty"},
            {"Destination", 0x10, "EnumProperty"},
        }};
    };

    struct SoundActionPitch
    {
        static constexpr std::string_view Name = "SoundActionPitch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PitchMultiplier = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PitchMultiplier", 0x8, "FloatProperty"},
        }};
    };

    struct SoundActionRerouteSubmixSend
    {
        static constexpr std::string_view Name = "SoundActionRerouteSubmixSend";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SubmixToFind = 0x8;
            static constexpr std::uintptr_t ReplacementSubmix = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubmixToFind", 0x8, "SoftObjectProperty"},
            {"ReplacementSubmix", 0x28, "SoftObjectProperty"},
        }};
    };

    struct SoundActionSourceEffect
    {
        static constexpr std::string_view Name = "SoundActionSourceEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PresetChain = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PresetChain", 0x8, "ObjectProperty"},
        }};
    };

    struct SoundActionSubmixSend
    {
        static constexpr std::string_view Name = "SoundActionSubmixSend";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SubmixSends = 0x8;
            static constexpr std::uintptr_t bOverrideExistingSendLevels = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubmixSends", 0x8, "ArrayProperty"},
            {"bOverrideExistingSendLevels", 0x18, "BoolProperty"},
        }};
    };

    struct SoundActionVolume
    {
        static constexpr std::string_view Name = "SoundActionVolume";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorAction";
        struct Offsets
        {
            static constexpr std::uintptr_t VolumeMultiplier = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VolumeMultiplier", 0x8, "FloatProperty"},
        }};
    };

    struct SoundSelectorActorClass
    {
        static constexpr std::string_view Name = "SoundSelectorActorClass";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorSelector";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClass = 0x8;
            static constexpr std::uintptr_t bExactClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActorClass", 0x8, "ClassProperty"},
            {"bExactClass", 0x10, "BoolProperty"},
        }};
    };

    struct SoundSelectorActorInstance
    {
        static constexpr std::string_view Name = "SoundSelectorActorInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorSelector";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Actor", 0x8, "WeakObjectProperty"},
        }};
    };

    struct SoundSelectorAlways
    {
        static constexpr std::string_view Name = "SoundSelectorAlways";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SoundSelectorConditionalBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoundSelectorConditionalAll
    {
        static constexpr std::string_view Name = "SoundSelectorConditionalAll";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SoundSelectorConditionalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Selectors = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Selectors", 0x8, "ArrayProperty"},
        }};
    };

    struct SoundSelectorConditionalAny
    {
        static constexpr std::string_view Name = "SoundSelectorConditionalAny";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SoundSelectorConditionalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Selectors = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Selectors", 0x8, "ArrayProperty"},
        }};
    };

    struct SoundSelectorConditionalBase
    {
        static constexpr std::string_view Name = "SoundSelectorConditionalBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorSelector";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoundSelectorConditionalNone
    {
        static constexpr std::string_view Name = "SoundSelectorConditionalNone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SoundSelectorConditionalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Selectors = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Selectors", 0x8, "ArrayProperty"},
        }};
    };

    struct SoundSelectorOwnerTag
    {
        static constexpr std::string_view Name = "SoundSelectorOwnerTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorSelector";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x8;
            static constexpr std::uintptr_t bExactMatch = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tag", 0x8, "StructProperty"},
            {"bExactMatch", 0xC, "BoolProperty"},
        }};
    };

    struct SoundSelectorPreset
    {
        static constexpr std::string_view Name = "SoundSelectorPreset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorSelector";
        struct Offsets
        {
            static constexpr std::uintptr_t Preset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Preset", 0x8, "ObjectProperty"},
        }};
    };

    struct SoundSelectorPresetAsset
    {
        static constexpr std::string_view Name = "SoundSelectorPresetAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Selector = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Selector", 0x28, "StructProperty"},
        }};
    };

    struct SoundSelectorSoundBaseSubclass
    {
        static constexpr std::string_view Name = "SoundSelectorSoundBaseSubclass";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorSelector";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundBaseSubclass = 0x8;
            static constexpr std::uintptr_t bExactClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SoundBaseSubclass", 0x8, "ClassProperty"},
            {"bExactClass", 0x10, "BoolProperty"},
        }};
    };

    struct SoundSelectorSoundClass
    {
        static constexpr std::string_view Name = "SoundSelectorSoundClass";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorSelector";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundClass = 0x8;
            static constexpr std::uintptr_t bExactClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SoundClass", 0x8, "ObjectProperty"},
            {"bExactClass", 0x10, "BoolProperty"},
        }};
    };

    struct SoundSelectorTag
    {
        static constexpr std::string_view Name = "SoundSelectorTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorSelector";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x8;
            static constexpr std::uintptr_t bExactMatch = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tag", 0x8, "StructProperty"},
            {"bExactMatch", 0xC, "BoolProperty"},
        }};
    };

    struct StatefulActionModulator
    {
        static constexpr std::string_view Name = "StatefulActionModulator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorStatefulSoundAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Modulator = 0x8;
            static constexpr std::uintptr_t Destination = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Modulator", 0x8, "ObjectProperty"},
            {"Destination", 0x10, "EnumProperty"},
        }};
    };

    struct StatefulActionPitch
    {
        static constexpr std::string_view Name = "StatefulActionPitch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorParseParamAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PitchMultiplier = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PitchMultiplier", 0x8, "FloatProperty"},
        }};
    };

    struct StatefulActionSourceEffect
    {
        static constexpr std::string_view Name = "StatefulActionSourceEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorStatefulSoundAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PresetChain = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PresetChain", 0x8, "ObjectProperty"},
        }};
    };

    struct StatefulActionVolume
    {
        static constexpr std::string_view Name = "StatefulActionVolume";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AudioMutatorParseParamAction";
        struct Offsets
        {
            static constexpr std::uintptr_t VolumeMultiplier = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VolumeMultiplier", 0x8, "FloatProperty"},
        }};
    };

    struct StatefulAudioMutator
    {
        static constexpr std::string_view Name = "StatefulAudioMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMutatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Selector = 0x28;
            static constexpr std::uintptr_t Actions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Selector", 0x28, "StructProperty"},
            {"Actions", 0x38, "ArrayProperty"},
        }};
    };

}
