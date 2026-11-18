#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SocketSubsystemEOS
{
    struct NetConnectionEOS
    {
        static constexpr std::string_view Name = "NetConnectionEOS";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IpConnection";
        struct Offsets
        {
            static constexpr std::uintptr_t SocketErrorDisconnectDelay = 0x1A3C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SocketErrorDisconnectDelay", 0x1A3C, "FloatProperty"},
        }};
    };

    struct NetDriverEOS
    {
        static constexpr std::string_view Name = "NetDriverEOS";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IpNetDriver";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsPassthrough = 0x6F8;
            static constexpr std::uintptr_t bIsUsingP2PSockets = 0x6F9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsPassthrough", 0x6F8, "BoolProperty"},
            {"bIsUsingP2PSockets", 0x6F9, "BoolProperty"},
        }};
    };

    struct NetDriverEOSBase
    {
        static constexpr std::string_view Name = "NetDriverEOSBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetDriverEOS";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsPassthrough = 0x6F8;
            static constexpr std::uintptr_t bIsUsingP2PSockets = 0x6F9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsPassthrough", 0x6F8, "BoolProperty"},
            {"bIsUsingP2PSockets", 0x6F9, "BoolProperty"},
        }};
    };

}
