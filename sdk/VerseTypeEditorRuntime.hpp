#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseTypeEditorRuntime
{
    struct VerseEvent
    {
        static constexpr std::string_view Name = "VerseEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseTypeEditorClassSettings
    {
        static constexpr std::string_view Name = "VerseTypeEditorClassSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Access = 0x28;
            static constexpr std::uintptr_t ConstructorAccess = 0x29;
            static constexpr std::uintptr_t ClassSpecifiers = 0x30;
            static constexpr std::uintptr_t EffectSpecifiers = 0x40;
            static constexpr std::uintptr_t Parent = 0x50;
            static constexpr std::uintptr_t Interfaces = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Access", 0x28, "EnumProperty"},
            {"ConstructorAccess", 0x29, "EnumProperty"},
            {"ClassSpecifiers", 0x30, "ArrayProperty"},
            {"EffectSpecifiers", 0x40, "ArrayProperty"},
            {"Parent", 0x50, "ClassProperty"},
            {"Interfaces", 0x68, "ArrayProperty"},
        }};
    };

}
