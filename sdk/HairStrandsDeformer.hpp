#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HairStrandsDeformer
{
    struct OptimusGroomAssetComponentSource
    {
        static constexpr std::string_view Name = "OptimusGroomAssetComponentSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComponentSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusGroomAttributeReadDataInterface
    {
        static constexpr std::string_view Name = "OptimusGroomAttributeReadDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GroomAttributeName = 0x28;
            static constexpr std::uintptr_t GroomAttributeGroup = 0x2C;
            static constexpr std::uintptr_t GroomAttributeType = 0x2D;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GroomAttributeName", 0x28, "NameProperty"},
            {"GroomAttributeGroup", 0x2C, "EnumProperty"},
            {"GroomAttributeType", 0x2D, "EnumProperty"},
        }};
    };

    struct OptimusGroomAttributeReadDataProvider
    {
        static constexpr std::string_view Name = "OptimusGroomAttributeReadDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponent = 0x28;
            static constexpr std::uintptr_t GroomAttributeName = 0x30;
            static constexpr std::uintptr_t GroomAttributeGroup = 0x34;
            static constexpr std::uintptr_t GroomAttributeType = 0x35;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MeshComponent", 0x28, "ObjectProperty"},
            {"GroomAttributeName", 0x30, "NameProperty"},
            {"GroomAttributeGroup", 0x34, "EnumProperty"},
            {"GroomAttributeType", 0x35, "EnumProperty"},
        }};
    };

    struct OptimusGroomCollisionComponentSource
    {
        static constexpr std::string_view Name = "OptimusGroomCollisionComponentSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComponentSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusGroomCollisionReadDataInterface
    {
        static constexpr std::string_view Name = "OptimusGroomCollisionReadDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusGroomCollisionReadDataProvider
    {
        static constexpr std::string_view Name = "OptimusGroomCollisionReadDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t SolverComponent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SolverComponent", 0x28, "ObjectProperty"},
        }};
    };

    struct OptimusGroomExecDataInterface
    {
        static constexpr std::string_view Name = "OptimusGroomExecDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Domain = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Domain", 0x30, "EnumProperty"},
        }};
    };

    struct OptimusGroomExecDataProvider
    {
        static constexpr std::string_view Name = "OptimusGroomExecDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponent = 0x28;
            static constexpr std::uintptr_t Domain = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MeshComponent", 0x28, "ObjectProperty"},
            {"Domain", 0x30, "EnumProperty"},
        }};
    };

    struct OptimusGroomGuidesReadDataInterface
    {
        static constexpr std::string_view Name = "OptimusGroomGuidesReadDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusGroomGuidesReadDataProvider
    {
        static constexpr std::string_view Name = "OptimusGroomGuidesReadDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshComponent", 0x28, "ObjectProperty"},
        }};
    };

    struct OptimusGroomGuidesWriteDataInterface
    {
        static constexpr std::string_view Name = "OptimusGroomGuidesWriteDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusGroomGuidesWriteDataProvider
    {
        static constexpr std::string_view Name = "OptimusGroomGuidesWriteDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshComponent", 0x28, "ObjectProperty"},
        }};
    };

    struct OptimusGroomMeshesReadDataInterface
    {
        static constexpr std::string_view Name = "OptimusGroomMeshesReadDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusGroomMeshesReadDataProvider
    {
        static constexpr std::string_view Name = "OptimusGroomMeshesReadDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshComponent", 0x28, "ObjectProperty"},
        }};
    };

    struct OptimusGroomSolverComponentSource
    {
        static constexpr std::string_view Name = "OptimusGroomSolverComponentSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComponentSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusGroomSolverReadDataInterface
    {
        static constexpr std::string_view Name = "OptimusGroomSolverReadDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t ResetSimulationTrigger = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ResetSimulationTrigger", 0x28, "NameProperty"},
        }};
    };

    struct OptimusGroomSolverReadDataProvider
    {
        static constexpr std::string_view Name = "OptimusGroomSolverReadDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t SolverComponent = 0x30;
            static constexpr std::uintptr_t DeformerInstance = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SolverComponent", 0x30, "ObjectProperty"},
            {"DeformerInstance", 0x38, "ObjectProperty"},
        }};
    };

    struct OptimusGroomStrandsReadDataInterface
    {
        static constexpr std::string_view Name = "OptimusGroomStrandsReadDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusGroomStrandsReadDataProvider
    {
        static constexpr std::string_view Name = "OptimusGroomStrandsReadDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshComponent", 0x28, "ObjectProperty"},
        }};
    };

    struct OptimusGroomStrandsWriteDataInterface
    {
        static constexpr std::string_view Name = "OptimusGroomStrandsWriteDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OptimusGroomStrandsWriteDataProvider
    {
        static constexpr std::string_view Name = "OptimusGroomStrandsWriteDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshComponent", 0x28, "ObjectProperty"},
        }};
    };

}
