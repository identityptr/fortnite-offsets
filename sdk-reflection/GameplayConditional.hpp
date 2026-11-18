#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayConditional
{
    struct GameplayConditional
    {
        static constexpr std::string_view Name = "GameplayConditional";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayConditionalAttribute
    {
        static constexpr std::string_view Name = "GameplayConditionalAttribute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayConditionalAttributeDefinition
    {
        static constexpr std::string_view Name = "GameplayConditionalAttributeDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayConditionalCacheContainer
    {
        static constexpr std::string_view Name = "GameplayConditionalCacheContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayConditionalContextBase
    {
        static constexpr std::string_view Name = "GameplayConditionalContextBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Instigator = 0x8;
            static constexpr std::uintptr_t Delta = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Instigator", 0x8, "ObjectProperty"},
            {"Delta", 0x10, "DoubleProperty"},
        }};
    };

    struct GameplayConditionalDefinition
    {
        static constexpr std::string_view Name = "GameplayConditionalDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeDefinitions = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributeDefinitions", 0x8, "ArrayProperty"},
        }};
    };

    struct GameplayConditionalHandle
    {
        static constexpr std::string_view Name = "GameplayConditionalHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayConditionalHandleKey
    {
        static constexpr std::string_view Name = "GameplayConditionalHandleKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayConditionalListenerBase
    {
        static constexpr std::string_view Name = "GameplayConditionalListenerBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x18, "SetProperty"},
        }};
    };

    struct GameplayConditionalParticipant
    {
        static constexpr std::string_view Name = "GameplayConditionalParticipant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NativeGameplayConditionalListenerBase
    {
        static constexpr std::string_view Name = "NativeGameplayConditionalListenerBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayConditionalListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x18, "SetProperty"},
        }};
    };

    struct NativeGameplayConditionalListener_Instanced
    {
        static constexpr std::string_view Name = "NativeGameplayConditionalListener_Instanced";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NativeGameplayConditionalListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x18, "SetProperty"},
        }};
    };

    struct VerseGameplayConditional
    {
        static constexpr std::string_view Name = "VerseGameplayConditional";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseGameplayConditionalAttribute
    {
        static constexpr std::string_view Name = "VerseGameplayConditionalAttribute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseGameplayConditionalContext
    {
        static constexpr std::string_view Name = "VerseGameplayConditionalContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseGameplayConditionalContextWrapper
    {
        static constexpr std::string_view Name = "VerseGameplayConditionalContextWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayConditionalContextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Instigator = 0x8;
            static constexpr std::uintptr_t Delta = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Instigator", 0x8, "ObjectProperty"},
            {"Delta", 0x10, "DoubleProperty"},
        }};
    };

    struct VerseGameplayConditionalListenerBase
    {
        static constexpr std::string_view Name = "VerseGameplayConditionalListenerBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayConditionalListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x18, "SetProperty"},
        }};
    };

    struct VerseGameplayConditionalListenerHandle
    {
        static constexpr std::string_view Name = "VerseGameplayConditionalListenerHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseGameplayConditionalListener_Shared
    {
        static constexpr std::string_view Name = "VerseGameplayConditionalListener_Shared";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VerseGameplayConditionalListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x18, "SetProperty"},
        }};
    };

    struct VerseGameplayConditionalSubsystem
    {
        static constexpr std::string_view Name = "VerseGameplayConditionalSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayConditionalCache = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayConditionalCache", 0x38, "StructProperty"},
        }};
    };

}
