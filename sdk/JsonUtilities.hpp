#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JsonUtilities
{
    struct JsonObjectWrapper
    {
        static constexpr std::string_view Name = "JsonObjectWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t JSONString = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JSONString", 0x0, "StrProperty"},
        }};
    };

    struct JsonUtilitiesDummyObject
    {
        static constexpr std::string_view Name = "JsonUtilitiesDummyObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
