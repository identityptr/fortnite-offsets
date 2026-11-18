#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ORS
{
    struct ORSCheatManager
    {
        static constexpr std::string_view Name = "ORSCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSSubsystem
    {
        static constexpr std::string_view Name = "ORSSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentManager = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentManager", 0x60, "ObjectProperty"},
        }};
    };

    struct ORSSubsystemShutdown
    {
        static constexpr std::string_view Name = "ORSSubsystemShutdown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestObjectA
    {
        static constexpr std::string_view Name = "ORSTestObjectA";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ORSTestObjectBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestObjectA_Child
    {
        static constexpr std::string_view Name = "ORSTestObjectA_Child";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ORSTestObjectA";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestObjectB
    {
        static constexpr std::string_view Name = "ORSTestObjectB";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ORSTestObjectBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestObjectBase
    {
        static constexpr std::string_view Name = "ORSTestObjectBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestObjectC
    {
        static constexpr std::string_view Name = "ORSTestObjectC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ORSTestObjectBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestObjectD
    {
        static constexpr std::string_view Name = "ORSTestObjectD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ORSTestObjectBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestPS
    {
        static constexpr std::string_view Name = "ORSTestPS";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestPawn
    {
        static constexpr std::string_view Name = "ORSTestPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestPlayer
    {
        static constexpr std::string_view Name = "ORSTestPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestRoot
    {
        static constexpr std::string_view Name = "ORSTestRoot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestSubscriber
    {
        static constexpr std::string_view Name = "ORSTestSubscriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ORSTestObjectBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ORSTestWorld
    {
        static constexpr std::string_view Name = "ORSTestWorld";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
