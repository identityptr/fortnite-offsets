#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LocalizableMessage
{
    struct LocalizableMessage
    {
        static constexpr std::string_view Name = "LocalizableMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t DefaultText = 0x10;
            static constexpr std::uintptr_t Substitutions = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Key", 0x0, "StrProperty"},
            {"DefaultText", 0x10, "StrProperty"},
            {"Substitutions", 0x20, "ArrayProperty"},
        }};
    };

    struct LocalizableMessageParameterEntry
    {
        static constexpr std::string_view Name = "LocalizableMessageParameterEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "StrProperty"},
            {"Value", 0x10, "StructProperty"},
        }};
    };

    struct LocalizableMessageParameterFloat
    {
        static constexpr std::string_view Name = "LocalizableMessageParameterFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "DoubleProperty"},
        }};
    };

    struct LocalizableMessageParameterInt
    {
        static constexpr std::string_view Name = "LocalizableMessageParameterInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "Int64Property"},
        }};
    };

    struct LocalizableMessageParameterMessage
    {
        static constexpr std::string_view Name = "LocalizableMessageParameterMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct LocalizableMessageParameterString
    {
        static constexpr std::string_view Name = "LocalizableMessageParameterString";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StrProperty"},
        }};
    };

}
