#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OnlineSubsystem
{
    struct NamedInterface
    {
        static constexpr std::string_view Name = "NamedInterface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InterfaceName = 0x0;
            static constexpr std::uintptr_t InterfaceObject = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InterfaceName", 0x0, "NameProperty"},
            {"InterfaceObject", 0x8, "ObjectProperty"},
        }};
    };

    struct NamedInterfaceDef
    {
        static constexpr std::string_view Name = "NamedInterfaceDef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InterfaceName = 0x0;
            static constexpr std::uintptr_t InterfaceClassName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InterfaceName", 0x0, "NameProperty"},
            {"InterfaceClassName", 0x8, "StrProperty"},
        }};
    };

    struct NamedInterfaces
    {
        static constexpr std::string_view Name = "NamedInterfaces";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NamedInterfaces = 0x28;
            static constexpr std::uintptr_t NamedInterfaceDefs = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NamedInterfaces", 0x28, "ArrayProperty"},
            {"NamedInterfaceDefs", 0x38, "ArrayProperty"},
        }};
    };

    struct TurnBasedMatchInterface
    {
        static constexpr std::string_view Name = "TurnBasedMatchInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnMatchEnded",
            "OnMatchReceivedTurn",
        }};
    };

}
