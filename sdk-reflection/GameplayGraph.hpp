#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayGraph
{
    struct Graph
    {
        static constexpr std::string_view Name = "Graph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Vertices = 0x88;
            static constexpr std::uintptr_t Islands = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Vertices", 0x88, "MapProperty"},
            {"Islands", 0x98, "MapProperty"},
        }};
    };

    struct GraphElement
    {
        static constexpr std::string_view Name = "GraphElement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementType = 0x28;
            static constexpr std::uintptr_t UniqueIndex = 0x2C;
            static constexpr std::uintptr_t ParentGraph = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ElementType", 0x28, "EnumProperty"},
            {"UniqueIndex", 0x2C, "StructProperty"},
            {"ParentGraph", 0x40, "WeakObjectProperty"},
        }};
    };

    struct GraphIsland
    {
        static constexpr std::string_view Name = "GraphIsland";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GraphElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Vertices = 0xA8;
            static constexpr std::uintptr_t AllowedOperations = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Vertices", 0xA8, "SetProperty"},
            {"AllowedOperations", 0xB8, "EnumProperty"},
        }};
    };

    struct GraphVertex
    {
        static constexpr std::string_view Name = "GraphVertex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GraphElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Edges = 0x78;
            static constexpr std::uintptr_t ParentIsland = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Edges", 0x78, "SetProperty"},
            {"ParentIsland", 0x88, "StructProperty"},
        }};
    };

}
