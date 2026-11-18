#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassCommon
{
    struct AgentHeightFragment
    {
        static constexpr std::string_view Name = "AgentHeightFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t Height = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Height", 0x0, "FloatProperty"},
        }};
    };

    struct AgentRadiusFragment
    {
        static constexpr std::string_view Name = "AgentRadiusFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Radius", 0x0, "FloatProperty"},
        }};
    };

    struct MassGameplaySettings
    {
        static constexpr std::string_view Name = "MassGameplaySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassModuleSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bLogSpawnLocations = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bLogSpawnLocations", 0x28, "BoolProperty"},
        }};
    };

    struct MassInt16Real
    {
        static constexpr std::string_view Name = "MassInt16Real";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "Int16Property"},
        }};
    };

    struct MassInt16Real10
    {
        static constexpr std::string_view Name = "MassInt16Real10";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "Int16Property"},
        }};
    };

    struct MassInt16Vector
    {
        static constexpr std::string_view Name = "MassInt16Vector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x2;
            static constexpr std::uintptr_t Z = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "Int16Property"},
            {"Y", 0x2, "Int16Property"},
            {"Z", 0x4, "Int16Property"},
        }};
    };

    struct MassInt16Vector2D
    {
        static constexpr std::string_view Name = "MassInt16Vector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "Int16Property"},
            {"Y", 0x2, "Int16Property"},
        }};
    };

    struct MassNetworkID
    {
        static constexpr std::string_view Name = "MassNetworkID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SequentialIDBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct MassSnorm8Vector
    {
        static constexpr std::string_view Name = "MassSnorm8Vector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x1;
            static constexpr std::uintptr_t Z = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "Int8Property"},
            {"Y", 0x1, "Int8Property"},
            {"Z", 0x2, "Int8Property"},
        }};
    };

    struct MassSnorm8Vector2D
    {
        static constexpr std::string_view Name = "MassSnorm8Vector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "Int8Property"},
            {"Y", 0x1, "Int8Property"},
        }};
    };

    struct MassUnorm8Real
    {
        static constexpr std::string_view Name = "MassUnorm8Real";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "ByteProperty"},
        }};
    };

    struct ObjectWrapperFragment
    {
        static constexpr std::string_view Name = "ObjectWrapperFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
