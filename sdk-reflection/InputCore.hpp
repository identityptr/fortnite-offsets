#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InputCore
{
    struct InputCoreTypes
    {
        static constexpr std::string_view Name = "InputCoreTypes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Key
    {
        static constexpr std::string_view Name = "Key";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"KeyName", 0x0, "NameProperty"},
        }};
    };

    struct TouchId
    {
        static constexpr std::string_view Name = "TouchId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceID = 0x0;
            static constexpr std::uintptr_t TouchIndex = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DeviceID", 0x0, "StructProperty"},
            {"TouchIndex", 0x4, "ByteProperty"},
        }};
    };

}
