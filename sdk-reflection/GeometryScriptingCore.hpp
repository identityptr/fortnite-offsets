#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GeometryScriptingCore
{
    struct GeometryScriptDebug
    {
        static constexpr std::string_view Name = "GeometryScriptDebug";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Messages = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Messages", 0x28, "ArrayProperty"},
        }};
    };

    struct GeometryScriptLibrary_BoxFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_BoxFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_CollisionFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_CollisionFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_ContainmentFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_ContainmentFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_ListUtilityFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_ListUtilityFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshBakeFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshBakeFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshBasicEditFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshBasicEditFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshBoneWeightFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshBoneWeightFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshBooleanFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshBooleanFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshComparisonFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshComparisonFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshDecompositionFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshDecompositionFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshDeformFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshDeformFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshGeodesicFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshGeodesicFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshMaterialFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshMaterialFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshModelingFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshModelingFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshNormalsFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshNormalsFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshPolygroupFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshPolygroupFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshPoolFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshPoolFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshPrimitiveFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshPrimitiveFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshQueryFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshQueryFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshRepairFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshRepairFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshSamplingFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshSamplingFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshSculptLayersFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshSculptLayersFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshSelectionFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshSelectionFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshSelectionQueryFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshSelectionQueryFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshSimplifyFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshSimplifyFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshSpatial
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshSpatial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshSubdivideFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshSubdivideFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshTransformFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshTransformFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshUVFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshUVFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshVertexColorFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshVertexColorFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshVoxelFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshVoxelFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_MeshWeightMapFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_MeshWeightMapFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_OrientedBoxFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_OrientedBoxFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_PointSetSamplingFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_PointSetSamplingFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_PolyPathFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_PolyPathFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_PolygonListFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_PolygonListFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_RayFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_RayFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_RemeshingFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_RemeshingFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_SceneUtilityFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_SceneUtilityFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_SimplePolygonFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_SimplePolygonFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_StaticMeshFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_StaticMeshFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_TextureMapFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_TextureMapFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_TransformFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_TransformFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_VectorMathFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_VectorMathFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryScriptLibrary_VolumeTextureBakeFunctions
    {
        static constexpr std::string_view Name = "GeometryScriptLibrary_VolumeTextureBakeFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
