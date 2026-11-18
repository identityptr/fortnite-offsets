#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SubsonicEngine
{
    struct SubsonicAudioComponentSubscriber
    {
        static constexpr std::string_view Name = "SubsonicAudioComponentSubscriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SubsonicEventSubscriberBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SubsonicEventCollection
    {
        static constexpr std::string_view Name = "SubsonicEventCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CollectionDefinition = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CollectionDefinition", 0x30, "StructProperty"},
        }};
    };

    struct SubsonicEventCollectionExecutor
    {
        static constexpr std::string_view Name = "SubsonicEventCollectionExecutor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Collection", 0x28, "ObjectProperty"},
        }};
    };

    struct SubsonicEventDispatchSubscriber
    {
        static constexpr std::string_view Name = "SubsonicEventDispatchSubscriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SubsonicEventSubscriberBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SubsonicEventSubscriberBase
    {
        static constexpr std::string_view Name = "SubsonicEventSubscriberBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMixerEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SubsonicGeneratorSourceSubscriber
    {
        static constexpr std::string_view Name = "SubsonicGeneratorSourceSubscriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SubsonicEventSubscriberBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SubsonicSubsystem
    {
        static constexpr std::string_view Name = "SubsonicSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SubsonicSubsystemBlueprintLibrary
    {
        static constexpr std::string_view Name = "SubsonicSubsystemBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
