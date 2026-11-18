#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortGameplayGraph
{
    struct FortConnectivityGraph
    {
        static constexpr std::string_view Name = "FortConnectivityGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Graph";
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

    struct FortConnectivityGraphIsland
    {
        static constexpr std::string_view Name = "FortConnectivityGraphIsland";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GraphIsland";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportNodes = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SupportNodes", 0xC0, "SetProperty"},
        }};
    };

    struct FortConnectivityGraphVertex
    {
        static constexpr std::string_view Name = "FortConnectivityGraphVertex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GraphVertex";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsIndependentlySupported = 0xC8;
            static constexpr std::uintptr_t ConnectionActor = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsIndependentlySupported", 0xC8, "BoolProperty"},
            {"ConnectionActor", 0xCC, "WeakObjectProperty"},
        }};
    };

}
