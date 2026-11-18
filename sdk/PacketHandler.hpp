#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PacketHandler
{
    struct HandlerComponentFactory
    {
        static constexpr std::string_view Name = "HandlerComponentFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PacketHandlerProfileConfig
    {
        static constexpr std::string_view Name = "PacketHandlerProfileConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Components = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Components", 0x28, "ArrayProperty"},
        }};
    };

}
