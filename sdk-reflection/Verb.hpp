#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Verb
{
    struct NativeVerbFilterListenerBase
    {
        static constexpr std::string_view Name = "NativeVerbFilterListenerBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NativeVerbListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x8, "SetProperty"},
        }};
    };

    struct NativeVerbFilterListener_Instanced
    {
        static constexpr std::string_view Name = "NativeVerbFilterListener_Instanced";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NativeVerbFilterListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x8, "SetProperty"},
        }};
    };

    struct NativeVerbFilterListener_Shared
    {
        static constexpr std::string_view Name = "NativeVerbFilterListener_Shared";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NativeVerbFilterListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x8, "SetProperty"},
        }};
    };

    struct NativeVerbFilterListener_Weak
    {
        static constexpr std::string_view Name = "NativeVerbFilterListener_Weak";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NativeVerbFilterListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x8, "SetProperty"},
        }};
    };

    struct NativeVerbListenerBase
    {
        static constexpr std::string_view Name = "NativeVerbListenerBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VerbListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x8, "SetProperty"},
        }};
    };

    struct NativeVerbMessageTypeListener
    {
        static constexpr std::string_view Name = "NativeVerbMessageTypeListener";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NativeVerbListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbMessageClass = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerbMessageClass", 0x50, "ObjectProperty"},
        }};
    };

    struct SceneEventVerbMessage
    {
        static constexpr std::string_view Name = "SceneEventVerbMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VerbMessageBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerbFilter
    {
        static constexpr std::string_view Name = "VerbFilter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerbHandleKey
    {
        static constexpr std::string_view Name = "VerbHandleKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerbListenerBase
    {
        static constexpr std::string_view Name = "VerbListenerBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x8, "SetProperty"},
        }};
    };

    struct VerbListenerCacheContainer
    {
        static constexpr std::string_view Name = "VerbListenerCacheContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerbListenerHandle
    {
        static constexpr std::string_view Name = "VerbListenerHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerbMessageBase
    {
        static constexpr std::string_view Name = "VerbMessageBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerbParticipant
    {
        static constexpr std::string_view Name = "VerbParticipant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerbParticipantKey
    {
        static constexpr std::string_view Name = "VerbParticipantKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerbSubsystem
    {
        static constexpr std::string_view Name = "VerbSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerCache = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerbListenerCache", 0x38, "StructProperty"},
        }};
    };

    struct VerseVerbFilter
    {
        static constexpr std::string_view Name = "VerseVerbFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseVerbFilterListenerBase
    {
        static constexpr std::string_view Name = "VerseVerbFilterListenerBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VerseVerbListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x8, "SetProperty"},
        }};
    };

    struct VerseVerbFilterListener_Shared
    {
        static constexpr std::string_view Name = "VerseVerbFilterListener_Shared";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VerseVerbFilterListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x8, "SetProperty"},
        }};
    };

    struct VerseVerbFilterListener_Weak
    {
        static constexpr std::string_view Name = "VerseVerbFilterListener_Weak";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VerseVerbFilterListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x8, "SetProperty"},
        }};
    };

    struct VerseVerbListenerBase
    {
        static constexpr std::string_view Name = "VerseVerbListenerBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VerbListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Participants = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Participants", 0x8, "SetProperty"},
        }};
    };

    struct VerseVerbListenerHandle
    {
        static constexpr std::string_view Name = "VerseVerbListenerHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseVerbMessageTypeListener
    {
        static constexpr std::string_view Name = "VerseVerbMessageTypeListener";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "VerseVerbListenerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbMessageClass = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerbMessageClass", 0x30, "ClassProperty"},
        }};
    };

}
