#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseModifier
{
    struct VerseModifierImplInterface
    {
        static constexpr std::string_view Name = "VerseModifierImplInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseModifierStackBaseInternal
    {
        static constexpr std::string_view Name = "VerseModifierStackBaseInternal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ImplClass = 0x28;
            static constexpr std::uintptr_t Impl = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ImplClass", 0x28, "ClassProperty"},
            {"Impl", 0x30, "ObjectProperty"},
        }};
    };

    struct VerseModifierStackImpl
    {
        static constexpr std::string_view Name = "VerseModifierStackImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedEntries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedEntries", 0x28, "ArrayProperty"},
        }};
    };

}
