#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseTags
{
    struct TagRegistrationHandler
    {
        static constexpr std::string_view Name = "TagRegistrationHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TaggedObjectQueryWorldSubsystemBase
    {
        static constexpr std::string_view Name = "TaggedObjectQueryWorldSubsystemBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseTagBase
    {
        static constexpr std::string_view Name = "VerseTagBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseTagContainerBase
    {
        static constexpr std::string_view Name = "VerseTagContainerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseTagInstanceContainer
    {
        static constexpr std::string_view Name = "VerseTagInstanceContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalTags = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalTags", 0x0, "MapProperty"},
        }};
    };

    struct VerseTagMarkupComponent
    {
        static constexpr std::string_view Name = "VerseTagMarkupComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalTags = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalTags", 0xC0, "StructProperty"},
        }};
    };

    struct VerseTagTypeInfo
    {
        static constexpr std::string_view Name = "VerseTagTypeInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalTag = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalTag", 0x0, "ClassProperty"},
        }};
    };

    struct VerseTagTypeInfoContainer
    {
        static constexpr std::string_view Name = "VerseTagTypeInfoContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalTags = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalTags", 0x0, "ArrayProperty"},
        }};
    };

}
