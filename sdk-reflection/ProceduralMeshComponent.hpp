#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ProceduralMeshComponent
{
    struct KismetProceduralMeshLibrary
    {
        static constexpr std::string_view Name = "KismetProceduralMeshLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ProceduralMeshComponent
    {
        static constexpr std::string_view Name = "ProceduralMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseComplexAsSimpleCollision = 0x5C8;
            static constexpr std::uintptr_t bUseAsyncCooking = 0x5C9;
            static constexpr std::uintptr_t ProcMeshBodySetup = 0x5D0;
            static constexpr std::uintptr_t ProcMeshSections = 0x5D8;
            static constexpr std::uintptr_t CollisionConvexElems = 0x5E8;
            static constexpr std::uintptr_t LocalBounds = 0x5F8;
            static constexpr std::uintptr_t AsyncBodySetupQueue = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bUseComplexAsSimpleCollision", 0x5C8, "BoolProperty"},
            {"bUseAsyncCooking", 0x5C9, "BoolProperty"},
            {"ProcMeshBodySetup", 0x5D0, "ObjectProperty"},
            {"ProcMeshSections", 0x5D8, "ArrayProperty"},
            {"CollisionConvexElems", 0x5E8, "ArrayProperty"},
            {"LocalBounds", 0x5F8, "StructProperty"},
            {"AsyncBodySetupQueue", 0x630, "ArrayProperty"},
        }};
    };

}
