#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseInterface
{
    struct SolarisDebugMessage
    {
        static constexpr std::string_view Name = "SolarisDebugMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClientID = 0x0;
            static constexpr std::uintptr_t Command = 0x4;
            static constexpr std::uintptr_t MessageBodyUTF8 = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ClientID", 0x0, "EnumProperty"},
            {"Command", 0x4, "EnumProperty"},
            {"MessageBodyUTF8", 0x8, "ArrayProperty"},
        }};
    };

}
