#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MeshDescription
{
    struct EdgeID
    {
        static constexpr std::string_view Name = "EdgeID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ElementID";
        struct Offsets
        {
            static constexpr std::uintptr_t IDValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDValue", 0x0, "IntProperty"},
        }};
    };

    struct ElementID
    {
        static constexpr std::string_view Name = "ElementID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IDValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDValue", 0x0, "IntProperty"},
        }};
    };

    struct MeshDescriptionBase
    {
        static constexpr std::string_view Name = "MeshDescriptionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 91> FunctionNames{{
            "ComputePolygonTriangulation",
            "CreateEdge",
            "CreateEdgeWithID",
            "CreatePolygon",
            "CreatePolygonGroup",
            "CreatePolygonGroupWithID",
            "CreatePolygonWithID",
            "CreateTriangle",
            "CreateTriangleWithID",
            "CreateVertex",
            "CreateVertexInstance",
            "CreateVertexInstanceWithID",
            "CreateVertexWithID",
            "DeleteEdge",
            "DeletePolygon",
            "DeletePolygonGroup",
            "DeleteTriangle",
            "DeleteVertex",
            "DeleteVertexInstance",
            "Empty",
            "GetEdgeConnectedPolygons",
            "GetEdgeConnectedTriangles",
            "GetEdgeCount",
            "GetEdgeVertex",
            "GetEdgeVertices",
            "GetNumEdgeConnectedPolygons",
            "GetNumEdgeConnectedTriangles",
            "GetNumPolygonGroupPolygons",
            "GetNumPolygonInternalEdges",
            "GetNumPolygonTriangles",
            "GetNumPolygonVertices",
            "GetNumVertexConnectedEdges",
            "GetNumVertexConnectedPolygons",
            "GetNumVertexConnectedTriangles",
            "GetNumVertexInstanceConnectedPolygons",
            "GetNumVertexInstanceConnectedTriangles",
            "GetNumVertexVertexInstances",
            "GetPolygonAdjacentPolygons",
            "GetPolygonCount",
            "GetPolygonGroupCount",
            "GetPolygonGroupPolygons",
            "GetPolygonInternalEdges",
            "GetPolygonPerimeterEdges",
            "GetPolygonPolygonGroup",
            "GetPolygonTriangles",
            "GetPolygonVertexInstances",
            "GetPolygonVertices",
            "GetTriangleAdjacentTriangles",
            "GetTriangleCount",
            "GetTriangleEdges",
            "GetTrianglePolygon",
            "GetTrianglePolygonGroup",
            "GetTriangleVertexInstance",
            "GetTriangleVertexInstances",
            "GetTriangleVertices",
            "GetVertexAdjacentVertices",
            "GetVertexConnectedEdges",
            "GetVertexConnectedPolygons",
            "GetVertexConnectedTriangles",
            "GetVertexCount",
            "GetVertexInstanceConnectedPolygons",
            "GetVertexInstanceConnectedTriangles",
            "GetVertexInstanceCount",
            "GetVertexInstanceForPolygonVertex",
            "GetVertexInstanceForTriangleVertex",
            "GetVertexInstancePairEdge",
            "GetVertexInstanceVertex",
            "GetVertexPairEdge",
            "GetVertexPosition",
            "GetVertexVertexInstances",
            "IsEdgeInternal",
            "IsEdgeInternalToPolygon",
            "IsEdgeValid",
            "IsEmpty",
            "IsPolygonGroupValid",
            "IsPolygonValid",
            "IsTrianglePartOfNgon",
            "IsTriangleValid",
            "IsVertexInstanceValid",
            "IsVertexOrphaned",
            "IsVertexValid",
            "ReserveNewEdges",
            "ReserveNewPolygonGroups",
            "ReserveNewPolygons",
            "ReserveNewTriangles",
            "ReserveNewVertexInstances",
            "ReserveNewVertices",
            "ReversePolygonFacing",
            "SetPolygonPolygonGroup",
            "SetPolygonVertexInstances",
            "SetVertexPosition",
        }};
    };

    struct MeshDescriptionBaseBulkData
    {
        static constexpr std::string_view Name = "MeshDescriptionBaseBulkData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PolygonGroupID
    {
        static constexpr std::string_view Name = "PolygonGroupID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ElementID";
        struct Offsets
        {
            static constexpr std::uintptr_t IDValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDValue", 0x0, "IntProperty"},
        }};
    };

    struct PolygonID
    {
        static constexpr std::string_view Name = "PolygonID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ElementID";
        struct Offsets
        {
            static constexpr std::uintptr_t IDValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDValue", 0x0, "IntProperty"},
        }};
    };

    struct TriangleID
    {
        static constexpr std::string_view Name = "TriangleID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ElementID";
        struct Offsets
        {
            static constexpr std::uintptr_t IDValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDValue", 0x0, "IntProperty"},
        }};
    };

    struct UVID
    {
        static constexpr std::string_view Name = "UVID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ElementID";
        struct Offsets
        {
            static constexpr std::uintptr_t IDValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDValue", 0x0, "IntProperty"},
        }};
    };

    struct VertexID
    {
        static constexpr std::string_view Name = "VertexID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ElementID";
        struct Offsets
        {
            static constexpr std::uintptr_t IDValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDValue", 0x0, "IntProperty"},
        }};
    };

    struct VertexInstanceID
    {
        static constexpr std::string_view Name = "VertexInstanceID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ElementID";
        struct Offsets
        {
            static constexpr std::uintptr_t IDValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDValue", 0x0, "IntProperty"},
        }};
    };

}
