#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HairStrandsSolver
{
    struct GroomSolverComponent
    {
        static constexpr std::string_view Name = "GroomSolverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SolverSettings = 0x5C8;
            static constexpr std::uintptr_t SimulationAsset = 0x628;
            static constexpr std::uintptr_t GroomComponents = 0x640;
            static constexpr std::uintptr_t MeshDeformer = 0x650;
            static constexpr std::uintptr_t DeformerInstance = 0x658;
            static constexpr std::uintptr_t DeformerSettings = 0x660;
            static constexpr std::uintptr_t CollisionComponents = 0x720;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SolverSettings", 0x5C8, "StructProperty"},
            {"SimulationAsset", 0x628, "StructProperty"},
            {"GroomComponents", 0x640, "SetProperty"},
            {"MeshDeformer", 0x650, "ObjectProperty"},
            {"DeformerInstance", 0x658, "ObjectProperty"},
            {"DeformerSettings", 0x660, "ObjectProperty"},
            {"CollisionComponents", 0x720, "MapProperty"},
        }};
    };

}
