#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SequencerScripting
{
    struct MovieSceneBindingExtensions
    {
        static constexpr std::string_view Name = "MovieSceneBindingExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneBindingTagExtensions
    {
        static constexpr std::string_view Name = "MovieSceneBindingTagExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneConditionExtensions
    {
        static constexpr std::string_view Name = "MovieSceneConditionExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneDoubleVectorTrackExtensions
    {
        static constexpr std::string_view Name = "MovieSceneDoubleVectorTrackExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneEventTrackExtensions
    {
        static constexpr std::string_view Name = "MovieSceneEventTrackExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneFloatVectorTrackExtensions
    {
        static constexpr std::string_view Name = "MovieSceneFloatVectorTrackExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneFolderExtensions
    {
        static constexpr std::string_view Name = "MovieSceneFolderExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneMaterialTrackExtensions
    {
        static constexpr std::string_view Name = "MovieSceneMaterialTrackExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieScenePrimitiveMaterialTrackExtensions
    {
        static constexpr std::string_view Name = "MovieScenePrimitiveMaterialTrackExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieScenePropertyTrackExtensions
    {
        static constexpr std::string_view Name = "MovieScenePropertyTrackExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingActorReferenceChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingActorReferenceChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingActorReferenceKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingActorReferenceKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingActualFloatKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingActualFloatKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingFloatKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingBoolChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingBoolChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingBoolKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingBoolKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingByteChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingByteChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingByteKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingByteKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingDoubleAsFloatKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingDoubleAsFloatKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingFloatKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingDoubleChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingDoubleChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingDoubleKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingDoubleKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingEventChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingEventChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingEventKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingEventKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingFloatChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingFloatChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingFloatKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingFloatKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingIntegerChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingIntegerChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingIntegerKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingIntegerKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingObjectPathChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingObjectPathChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingObjectPathKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingObjectPathKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingParticleChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingParticleChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingParticleKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingParticleKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingStringChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingStringChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingStringKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingStringKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneScriptingTextChannel
    {
        static constexpr std::string_view Name = "MovieSceneScriptingTextChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelName", 0x28, "NameProperty"},
        }};
    };

    struct MovieSceneScriptingTextKey
    {
        static constexpr std::string_view Name = "MovieSceneScriptingTextKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneScriptingKey";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSectionEasingExtensions
    {
        static constexpr std::string_view Name = "MovieSceneSectionEasingExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSectionExtensions
    {
        static constexpr std::string_view Name = "MovieSceneSectionExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSequenceExtensions
    {
        static constexpr std::string_view Name = "MovieSceneSequenceExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneTimeWarpExtensions
    {
        static constexpr std::string_view Name = "MovieSceneTimeWarpExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneTrackExtensions
    {
        static constexpr std::string_view Name = "MovieSceneTrackExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SequencerScriptingRangeExtensions
    {
        static constexpr std::string_view Name = "SequencerScriptingRangeExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
