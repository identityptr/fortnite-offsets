#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MeshModelingTools
{
    struct AddArrowPrimitiveTool
    {
        static constexpr std::string_view Name = "AddArrowPrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AddPrimitiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct AddBoxPrimitiveTool
    {
        static constexpr std::string_view Name = "AddBoxPrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AddPrimitiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct AddCapsulePrimitiveTool
    {
        static constexpr std::string_view Name = "AddCapsulePrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AddPrimitiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct AddConePrimitiveTool
    {
        static constexpr std::string_view Name = "AddConePrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AddPrimitiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct AddCylinderPrimitiveTool
    {
        static constexpr std::string_view Name = "AddCylinderPrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AddPrimitiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct AddDiscPrimitiveTool
    {
        static constexpr std::string_view Name = "AddDiscPrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AddPrimitiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct AddPrimitiveTool
    {
        static constexpr std::string_view Name = "AddPrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleClickTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct AddPrimitiveToolBuilder
    {
        static constexpr std::string_view Name = "AddPrimitiveToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AddRectanglePrimitiveTool
    {
        static constexpr std::string_view Name = "AddRectanglePrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AddPrimitiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct AddSpherePrimitiveTool
    {
        static constexpr std::string_view Name = "AddSpherePrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AddPrimitiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct AddStairsPrimitiveTool
    {
        static constexpr std::string_view Name = "AddStairsPrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AddPrimitiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct AddTorusPrimitiveTool
    {
        static constexpr std::string_view Name = "AddTorusPrimitiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AddPrimitiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t ShapeSettings = 0xD8;
            static constexpr std::uintptr_t MaterialProperties = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xE8;
            static constexpr std::uintptr_t Gizmo = 0xF0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
            static constexpr std::uintptr_t AssetName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"ShapeSettings", 0xD8, "ObjectProperty"},
            {"MaterialProperties", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xE8, "ObjectProperty"},
            {"Gizmo", 0xF0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
            {"AssetName", 0x100, "StrProperty"},
        }};
    };

    struct BaseKelvinletBrushOpProps
    {
        static constexpr std::string_view Name = "BaseKelvinletBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Stiffness = 0x70;
            static constexpr std::uintptr_t Incompressiblity = 0x74;
            static constexpr std::uintptr_t BrushSteps = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Stiffness", 0x70, "FloatProperty"},
            {"Incompressiblity", 0x74, "FloatProperty"},
            {"BrushSteps", 0x78, "IntProperty"},
        }};
    };

    struct BasePlaneBrushOpProps
    {
        static constexpr std::string_view Name = "BasePlaneBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsStrengthPressureEnabled = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsStrengthPressureEnabled", 0x68, "BoolProperty"},
        }};
    };

    struct BaseSmoothBrushOpProps
    {
        static constexpr std::string_view Name = "BaseSmoothBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsStrengthPressureEnabled = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsStrengthPressureEnabled", 0x68, "BoolProperty"},
        }};
    };

    struct BrushRemeshProperties
    {
        static constexpr std::string_view Name = "BrushRemeshProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RemeshProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableRemeshing = 0x78;
            static constexpr std::uintptr_t TriangleSize = 0x7C;
            static constexpr std::uintptr_t PreserveDetail = 0x80;
            static constexpr std::uintptr_t Iterations = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnableRemeshing", 0x78, "BoolProperty"},
            {"TriangleSize", 0x7C, "IntProperty"},
            {"PreserveDetail", 0x80, "IntProperty"},
            {"Iterations", 0x84, "IntProperty"},
        }};
    };

    struct CSGMeshesTool
    {
        static constexpr std::string_view Name = "CSGMeshesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCreateFromSelectedTool";
        struct Offsets
        {
            static constexpr std::uintptr_t CSGProperties = 0x120;
            static constexpr std::uintptr_t TrimProperties = 0x128;
            static constexpr std::uintptr_t OriginalMeshPreviews = 0x140;
            static constexpr std::uintptr_t PreviewsGhostMaterial = 0x150;
            static constexpr std::uintptr_t DrawnLineSet = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CSGProperties", 0x120, "ObjectProperty"},
            {"TrimProperties", 0x128, "ObjectProperty"},
            {"OriginalMeshPreviews", 0x140, "ArrayProperty"},
            {"PreviewsGhostMaterial", 0x150, "ObjectProperty"},
            {"DrawnLineSet", 0x158, "ObjectProperty"},
        }};
    };

    struct CSGMeshesToolBuilder
    {
        static constexpr std::string_view Name = "CSGMeshesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCreateFromSelectedToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CSGMeshesToolProperties
    {
        static constexpr std::string_view Name = "CSGMeshesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x68;
            static constexpr std::uintptr_t bTryFixHoles = 0x69;
            static constexpr std::uintptr_t bTryCollapseEdges = 0x6A;
            static constexpr std::uintptr_t WindingThreshold = 0x6C;
            static constexpr std::uintptr_t bShowNewBoundaries = 0x70;
            static constexpr std::uintptr_t bShowSubtractedMesh = 0x71;
            static constexpr std::uintptr_t SubtractedMeshOpacity = 0x74;
            static constexpr std::uintptr_t SubtractedMeshColor = 0x78;
            static constexpr std::uintptr_t bUseFirstMeshMaterials = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Operation", 0x68, "EnumProperty"},
            {"bTryFixHoles", 0x69, "BoolProperty"},
            {"bTryCollapseEdges", 0x6A, "BoolProperty"},
            {"WindingThreshold", 0x6C, "FloatProperty"},
            {"bShowNewBoundaries", 0x70, "BoolProperty"},
            {"bShowSubtractedMesh", 0x71, "BoolProperty"},
            {"SubtractedMeshOpacity", 0x74, "FloatProperty"},
            {"SubtractedMeshColor", 0x78, "StructProperty"},
            {"bUseFirstMeshMaterials", 0x88, "BoolProperty"},
        }};
    };

    struct CombineMeshesTool
    {
        static constexpr std::string_view Name = "CombineMeshesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BasicProperties = 0xD8;
            static constexpr std::uintptr_t OutputTypeProperties = 0xE0;
            static constexpr std::uintptr_t HandleSourceProperties = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BasicProperties", 0xD8, "ObjectProperty"},
            {"OutputTypeProperties", 0xE0, "ObjectProperty"},
            {"HandleSourceProperties", 0xE8, "ObjectProperty"},
        }};
    };

    struct CombineMeshesToolBuilder
    {
        static constexpr std::string_view Name = "CombineMeshesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CombineMeshesToolProperties
    {
        static constexpr std::string_view Name = "CombineMeshesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsDuplicateMode = 0x68;
            static constexpr std::uintptr_t OutputWriteTo = 0x6C;
            static constexpr std::uintptr_t OutputNewName = 0x70;
            static constexpr std::uintptr_t OutputExistingName = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsDuplicateMode", 0x68, "BoolProperty"},
            {"OutputWriteTo", 0x6C, "EnumProperty"},
            {"OutputNewName", 0x70, "StrProperty"},
            {"OutputExistingName", 0x80, "StrProperty"},
        }};
    };

    struct ConvertToPolygonsOperatorFactory
    {
        static constexpr std::string_view Name = "ConvertToPolygonsOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ConvertToPolygonsTool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConvertToPolygonsTool", 0x30, "ObjectProperty"},
        }};
    };

    struct ConvertToPolygonsTool
    {
        static constexpr std::string_view Name = "ConvertToPolygonsTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x108;
            static constexpr std::uintptr_t CopyFromLayerProperties = 0x110;
            static constexpr std::uintptr_t PreviewCompute = 0x118;
            static constexpr std::uintptr_t PreviewGeometry = 0x120;
            static constexpr std::uintptr_t UnmodifiedAreaPreviewMesh = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Settings", 0x108, "ObjectProperty"},
            {"CopyFromLayerProperties", 0x110, "ObjectProperty"},
            {"PreviewCompute", 0x118, "ObjectProperty"},
            {"PreviewGeometry", 0x120, "ObjectProperty"},
            {"UnmodifiedAreaPreviewMesh", 0x128, "ObjectProperty"},
        }};
    };

    struct ConvertToPolygonsToolBuilder
    {
        static constexpr std::string_view Name = "ConvertToPolygonsToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ConvertToPolygonsToolProperties
    {
        static constexpr std::string_view Name = "ConvertToPolygonsToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversionMode = 0x68;
            static constexpr std::uintptr_t AngleTolerance = 0x6C;
            static constexpr std::uintptr_t bUseAverageGroupNormal = 0x70;
            static constexpr std::uintptr_t NumPoints = 0x74;
            static constexpr std::uintptr_t bSplitExisting = 0x78;
            static constexpr std::uintptr_t bNormalWeighted = 0x79;
            static constexpr std::uintptr_t NormalWeighting = 0x7C;
            static constexpr std::uintptr_t QuadAdjacencyWeight = 0x80;
            static constexpr std::uintptr_t QuadMetricClamp = 0x84;
            static constexpr std::uintptr_t QuadSearchRounds = 0x88;
            static constexpr std::uintptr_t bRespectUVSeams = 0x8C;
            static constexpr std::uintptr_t bRespectHardNormals = 0x8D;
            static constexpr std::uintptr_t MinGroupSize = 0x90;
            static constexpr std::uintptr_t bShowGroupColors = 0x94;
            static constexpr std::uintptr_t bCalculateNormals = 0x95;
            static constexpr std::uintptr_t GroupLayer = 0x98;
            static constexpr std::uintptr_t OptionsList = 0xA0;
            static constexpr std::uintptr_t bShowNewLayerName = 0xB0;
            static constexpr std::uintptr_t NewLayerName = 0xB8;
            static constexpr std::uintptr_t LayerType = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"ConversionMode", 0x68, "EnumProperty"},
            {"AngleTolerance", 0x6C, "FloatProperty"},
            {"bUseAverageGroupNormal", 0x70, "BoolProperty"},
            {"NumPoints", 0x74, "IntProperty"},
            {"bSplitExisting", 0x78, "BoolProperty"},
            {"bNormalWeighted", 0x79, "BoolProperty"},
            {"NormalWeighting", 0x7C, "FloatProperty"},
            {"QuadAdjacencyWeight", 0x80, "FloatProperty"},
            {"QuadMetricClamp", 0x84, "FloatProperty"},
            {"QuadSearchRounds", 0x88, "IntProperty"},
            {"bRespectUVSeams", 0x8C, "BoolProperty"},
            {"bRespectHardNormals", 0x8D, "BoolProperty"},
            {"MinGroupSize", 0x90, "IntProperty"},
            {"bShowGroupColors", 0x94, "BoolProperty"},
            {"bCalculateNormals", 0x95, "BoolProperty"},
            {"GroupLayer", 0x98, "NameProperty"},
            {"OptionsList", 0xA0, "ArrayProperty"},
            {"bShowNewLayerName", 0xB0, "BoolProperty"},
            {"NewLayerName", 0xB8, "StrProperty"},
            {"LayerType", 0xC8, "EnumProperty"},
        }};
    };

    struct CutMeshWithMeshTool
    {
        static constexpr std::string_view Name = "CutMeshWithMeshTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCreateFromSelectedTool";
        struct Offsets
        {
            static constexpr std::uintptr_t CutProperties = 0x120;
            static constexpr std::uintptr_t IntersectPreviewMesh = 0x128;
            static constexpr std::uintptr_t DrawnLineSet = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CutProperties", 0x120, "ObjectProperty"},
            {"IntersectPreviewMesh", 0x128, "ObjectProperty"},
            {"DrawnLineSet", 0x150, "ObjectProperty"},
        }};
    };

    struct CutMeshWithMeshToolBuilder
    {
        static constexpr std::string_view Name = "CutMeshWithMeshToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCreateFromSelectedToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CutMeshWithMeshToolProperties
    {
        static constexpr std::string_view Name = "CutMeshWithMeshToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bTryFixHoles = 0x68;
            static constexpr std::uintptr_t bTryCollapseEdges = 0x69;
            static constexpr std::uintptr_t WindingThreshold = 0x6C;
            static constexpr std::uintptr_t bShowNewBoundaries = 0x70;
            static constexpr std::uintptr_t bUseFirstMeshMaterials = 0x71;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bTryFixHoles", 0x68, "BoolProperty"},
            {"bTryCollapseEdges", 0x69, "BoolProperty"},
            {"WindingThreshold", 0x6C, "FloatProperty"},
            {"bShowNewBoundaries", 0x70, "BoolProperty"},
            {"bUseFirstMeshMaterials", 0x71, "BoolProperty"},
        }};
    };

    struct DeformMeshPolygonsTool
    {
        static constexpr std::string_view Name = "DeformMeshPolygonsTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointTool";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewMeshActor = 0x128;
            static constexpr std::uintptr_t DynamicMeshComponent = 0x130;
            static constexpr std::uintptr_t TransformProps = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PreviewMeshActor", 0x128, "ObjectProperty"},
            {"DynamicMeshComponent", 0x130, "ObjectProperty"},
            {"TransformProps", 0x138, "ObjectProperty"},
        }};
    };

    struct DeformMeshPolygonsToolBuilder
    {
        static constexpr std::string_view Name = "DeformMeshPolygonsToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DeformMeshPolygonsTransformProperties
    {
        static constexpr std::string_view Name = "DeformMeshPolygonsTransformProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t DeformationStrategy = 0x68;
            static constexpr std::uintptr_t TransformMode = 0x69;
            static constexpr std::uintptr_t bSelectFaces = 0x6A;
            static constexpr std::uintptr_t bSelectEdges = 0x6B;
            static constexpr std::uintptr_t bSelectVertices = 0x6C;
            static constexpr std::uintptr_t bShowWireframe = 0x6D;
            static constexpr std::uintptr_t SelectedWeightScheme = 0x70;
            static constexpr std::uintptr_t HandleWeight = 0x78;
            static constexpr std::uintptr_t bPostFixHandles = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DeformationStrategy", 0x68, "EnumProperty"},
            {"TransformMode", 0x69, "EnumProperty"},
            {"bSelectFaces", 0x6A, "BoolProperty"},
            {"bSelectEdges", 0x6B, "BoolProperty"},
            {"bSelectVertices", 0x6C, "BoolProperty"},
            {"bShowWireframe", 0x6D, "BoolProperty"},
            {"SelectedWeightScheme", 0x70, "EnumProperty"},
            {"HandleWeight", 0x78, "DoubleProperty"},
            {"bPostFixHandles", 0x80, "BoolProperty"},
        }};
    };

    struct DeleteGeometrySelectionCommand
    {
        static constexpr std::string_view Name = "DeleteGeometrySelectionCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GeometrySelectionEditCommand";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DiffusionSmoothProperties
    {
        static constexpr std::string_view Name = "DiffusionSmoothProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SmoothingPerStep = 0x68;
            static constexpr std::uintptr_t Steps = 0x6C;
            static constexpr std::uintptr_t bPreserveUVs = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SmoothingPerStep", 0x68, "FloatProperty"},
            {"Steps", 0x6C, "IntProperty"},
            {"bPreserveUVs", 0x70, "BoolProperty"},
        }};
    };

    struct DisconnectGeometrySelectionCommand
    {
        static constexpr std::string_view Name = "DisconnectGeometrySelectionCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GeometrySelectionEditCommand";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DisplaceMeshCommonProperties
    {
        static constexpr std::string_view Name = "DisplaceMeshCommonProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplacementType = 0x68;
            static constexpr std::uintptr_t DisplaceIntensity = 0x6C;
            static constexpr std::uintptr_t RandomSeed = 0x70;
            static constexpr std::uintptr_t SubdivisionType = 0x74;
            static constexpr std::uintptr_t Subdivisions = 0x78;
            static constexpr std::uintptr_t WeightMap = 0x7C;
            static constexpr std::uintptr_t WeightMapsList = 0x80;
            static constexpr std::uintptr_t bInvertWeightMap = 0x90;
            static constexpr std::uintptr_t bShowWireframe = 0x91;
            static constexpr std::uintptr_t bDisableSizeWarning = 0x92;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"DisplacementType", 0x68, "EnumProperty"},
            {"DisplaceIntensity", 0x6C, "FloatProperty"},
            {"RandomSeed", 0x70, "IntProperty"},
            {"SubdivisionType", 0x74, "EnumProperty"},
            {"Subdivisions", 0x78, "IntProperty"},
            {"WeightMap", 0x7C, "NameProperty"},
            {"WeightMapsList", 0x80, "ArrayProperty"},
            {"bInvertWeightMap", 0x90, "BoolProperty"},
            {"bShowWireframe", 0x91, "BoolProperty"},
            {"bDisableSizeWarning", 0x92, "BoolProperty"},
        }};
    };

    struct DisplaceMeshDirectionalFilterProperties
    {
        static constexpr std::string_view Name = "DisplaceMeshDirectionalFilterProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableFilter = 0x68;
            static constexpr std::uintptr_t FilterDirection = 0x70;
            static constexpr std::uintptr_t FilterWidth = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnableFilter", 0x68, "BoolProperty"},
            {"FilterDirection", 0x70, "StructProperty"},
            {"FilterWidth", 0x88, "FloatProperty"},
        }};
    };

    struct DisplaceMeshPerlinNoiseProperties
    {
        static constexpr std::string_view Name = "DisplaceMeshPerlinNoiseProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t PerlinLayerProperties = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PerlinLayerProperties", 0x68, "ArrayProperty"},
        }};
    };

    struct DisplaceMeshSineWaveProperties
    {
        static constexpr std::string_view Name = "DisplaceMeshSineWaveProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SineWaveFrequency = 0x68;
            static constexpr std::uintptr_t SineWavePhaseShift = 0x6C;
            static constexpr std::uintptr_t SineWaveDirection = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SineWaveFrequency", 0x68, "FloatProperty"},
            {"SineWavePhaseShift", 0x6C, "FloatProperty"},
            {"SineWaveDirection", 0x70, "StructProperty"},
        }};
    };

    struct DisplaceMeshTextureMapProperties
    {
        static constexpr std::string_view Name = "DisplaceMeshTextureMapProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplacementMap = 0x68;
            static constexpr std::uintptr_t Channel = 0x70;
            static constexpr std::uintptr_t DisplacementMapBaseValue = 0x74;
            static constexpr std::uintptr_t UVScale = 0x78;
            static constexpr std::uintptr_t UVOffset = 0x88;
            static constexpr std::uintptr_t bApplyAdjustmentCurve = 0x98;
            static constexpr std::uintptr_t AdjustmentCurve = 0xA0;
            static constexpr std::uintptr_t bRecalcNormals = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DisplacementMap", 0x68, "ObjectProperty"},
            {"Channel", 0x70, "EnumProperty"},
            {"DisplacementMapBaseValue", 0x74, "FloatProperty"},
            {"UVScale", 0x78, "StructProperty"},
            {"UVOffset", 0x88, "StructProperty"},
            {"bApplyAdjustmentCurve", 0x98, "BoolProperty"},
            {"AdjustmentCurve", 0xA0, "ObjectProperty"},
            {"bRecalcNormals", 0xA8, "BoolProperty"},
        }};
    };

    struct DisplaceMeshTool
    {
        static constexpr std::string_view Name = "DisplaceMeshTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t CommonProperties = 0x108;
            static constexpr std::uintptr_t DirectionalFilterProperties = 0x110;
            static constexpr std::uintptr_t TextureMapProperties = 0x118;
            static constexpr std::uintptr_t NoiseProperties = 0x120;
            static constexpr std::uintptr_t SineWaveProperties = 0x128;
            static constexpr std::uintptr_t SelectiveTessellationProperties = 0x130;
            static constexpr std::uintptr_t ActiveContrastCurveTarget = 0x138;
            static constexpr std::uintptr_t MeshStatistics = 0x140;
            static constexpr std::uintptr_t PreviewMeshActor = 0x498;
            static constexpr std::uintptr_t DynamicMeshComponent = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"CommonProperties", 0x108, "ObjectProperty"},
            {"DirectionalFilterProperties", 0x110, "ObjectProperty"},
            {"TextureMapProperties", 0x118, "ObjectProperty"},
            {"NoiseProperties", 0x120, "ObjectProperty"},
            {"SineWaveProperties", 0x128, "ObjectProperty"},
            {"SelectiveTessellationProperties", 0x130, "ObjectProperty"},
            {"ActiveContrastCurveTarget", 0x138, "ObjectProperty"},
            {"MeshStatistics", 0x140, "ObjectProperty"},
            {"PreviewMeshActor", 0x498, "ObjectProperty"},
            {"DynamicMeshComponent", 0x4A0, "ObjectProperty"},
        }};
    };

    struct DisplaceMeshToolBuilder
    {
        static constexpr std::string_view Name = "DisplaceMeshToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DrawAndRevolveTool
    {
        static constexpr std::string_view Name = "DrawAndRevolveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlPointsMechanic = 0x1A0;
            static constexpr std::uintptr_t PlaneMechanic = 0x1A8;
            static constexpr std::uintptr_t OutputTypeProperties = 0x1B0;
            static constexpr std::uintptr_t Settings = 0x1B8;
            static constexpr std::uintptr_t MaterialProperties = 0x1C0;
            static constexpr std::uintptr_t Preview = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ControlPointsMechanic", 0x1A0, "ObjectProperty"},
            {"PlaneMechanic", 0x1A8, "ObjectProperty"},
            {"OutputTypeProperties", 0x1B0, "ObjectProperty"},
            {"Settings", 0x1B8, "ObjectProperty"},
            {"MaterialProperties", 0x1C0, "ObjectProperty"},
            {"Preview", 0x1C8, "ObjectProperty"},
        }};
    };

    struct DrawAndRevolveToolBuilder
    {
        static constexpr std::string_view Name = "DrawAndRevolveToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DrawPolygonTool
    {
        static constexpr std::string_view Name = "DrawPolygonTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xC0;
            static constexpr std::uintptr_t PolygonProperties = 0xC8;
            static constexpr std::uintptr_t SnapProperties = 0xD0;
            static constexpr std::uintptr_t MaterialProperties = 0xD8;
            static constexpr std::uintptr_t PreviewMesh = 0x190;
            static constexpr std::uintptr_t HeightMechanic = 0x528;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0x530;
            static constexpr std::uintptr_t PlaneMechanic = 0x538;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OutputTypeProperties", 0xC0, "ObjectProperty"},
            {"PolygonProperties", 0xC8, "ObjectProperty"},
            {"SnapProperties", 0xD0, "ObjectProperty"},
            {"MaterialProperties", 0xD8, "ObjectProperty"},
            {"PreviewMesh", 0x190, "ObjectProperty"},
            {"HeightMechanic", 0x528, "ObjectProperty"},
            {"DragAlignmentMechanic", 0x530, "ObjectProperty"},
            {"PlaneMechanic", 0x538, "ObjectProperty"},
        }};
    };

    struct DrawPolygonToolBuilder
    {
        static constexpr std::string_view Name = "DrawPolygonToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DrawPolygonToolSnapProperties
    {
        static constexpr std::string_view Name = "DrawPolygonToolSnapProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableSnapping = 0x68;
            static constexpr std::uintptr_t bSnapToWorldGrid = 0x69;
            static constexpr std::uintptr_t bSnapToVertices = 0x6A;
            static constexpr std::uintptr_t bSnapToEdges = 0x6B;
            static constexpr std::uintptr_t bSnapToAxes = 0x6C;
            static constexpr std::uintptr_t bSnapToLengths = 0x6D;
            static constexpr std::uintptr_t bSnapToSurfaces = 0x6E;
            static constexpr std::uintptr_t SnapToSurfacesOffset = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bEnableSnapping", 0x68, "BoolProperty"},
            {"bSnapToWorldGrid", 0x69, "BoolProperty"},
            {"bSnapToVertices", 0x6A, "BoolProperty"},
            {"bSnapToEdges", 0x6B, "BoolProperty"},
            {"bSnapToAxes", 0x6C, "BoolProperty"},
            {"bSnapToLengths", 0x6D, "BoolProperty"},
            {"bSnapToSurfaces", 0x6E, "BoolProperty"},
            {"SnapToSurfacesOffset", 0x70, "FloatProperty"},
        }};
    };

    struct DrawPolygonToolStandardProperties
    {
        static constexpr std::string_view Name = "DrawPolygonToolStandardProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t PolygonDrawMode = 0x68;
            static constexpr std::uintptr_t bAllowSelfIntersections = 0x69;
            static constexpr std::uintptr_t FeatureSizeRatio = 0x6C;
            static constexpr std::uintptr_t RadialSlices = 0x70;
            static constexpr std::uintptr_t Distance = 0x74;
            static constexpr std::uintptr_t bShowGridGizmo = 0x78;
            static constexpr std::uintptr_t ExtrudeMode = 0x79;
            static constexpr std::uintptr_t ExtrudeHeight = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PolygonDrawMode", 0x68, "EnumProperty"},
            {"bAllowSelfIntersections", 0x69, "BoolProperty"},
            {"FeatureSizeRatio", 0x6C, "FloatProperty"},
            {"RadialSlices", 0x70, "IntProperty"},
            {"Distance", 0x74, "FloatProperty"},
            {"bShowGridGizmo", 0x78, "BoolProperty"},
            {"ExtrudeMode", 0x79, "EnumProperty"},
            {"ExtrudeHeight", 0x7C, "FloatProperty"},
        }};
    };

    struct DynamicMeshBrushProperties
    {
        static constexpr std::string_view Name = "DynamicMeshBrushProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushSize = 0x68;
            static constexpr std::uintptr_t BrushFalloffAmount = 0x80;
            static constexpr std::uintptr_t Depth = 0x84;
            static constexpr std::uintptr_t bHitBackFaces = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BrushSize", 0x68, "StructProperty"},
            {"BrushFalloffAmount", 0x80, "FloatProperty"},
            {"Depth", 0x84, "FloatProperty"},
            {"bHitBackFaces", 0x88, "BoolProperty"},
        }};
    };

    struct DynamicMeshBrushSculptProperties
    {
        static constexpr std::string_view Name = "DynamicMeshBrushSculptProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsRemeshingEnabled = 0x68;
            static constexpr std::uintptr_t PrimaryBrushType = 0x69;
            static constexpr std::uintptr_t PrimaryBrushSpeed = 0x6C;
            static constexpr std::uintptr_t bPreserveUVFlow = 0x70;
            static constexpr std::uintptr_t bFreezeTarget = 0x71;
            static constexpr std::uintptr_t SmoothBrushSpeed = 0x74;
            static constexpr std::uintptr_t bDetailPreservingSmooth = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIsRemeshingEnabled", 0x68, "BoolProperty"},
            {"PrimaryBrushType", 0x69, "EnumProperty"},
            {"PrimaryBrushSpeed", 0x6C, "FloatProperty"},
            {"bPreserveUVFlow", 0x70, "BoolProperty"},
            {"bFreezeTarget", 0x71, "BoolProperty"},
            {"SmoothBrushSpeed", 0x74, "FloatProperty"},
            {"bDetailPreservingSmooth", 0x78, "BoolProperty"},
        }};
    };

    struct DynamicMeshBrushTool
    {
        static constexpr std::string_view Name = "DynamicMeshBrushTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseBrushTool";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewMesh = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreviewMesh", 0x2B8, "ObjectProperty"},
        }};
    };

    struct DynamicMeshSculptTool
    {
        static constexpr std::string_view Name = "DynamicMeshSculptTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushProperties = 0x118;
            static constexpr std::uintptr_t SculptProperties = 0x120;
            static constexpr std::uintptr_t SculptMaxBrushProperties = 0x128;
            static constexpr std::uintptr_t KelvinBrushProperties = 0x130;
            static constexpr std::uintptr_t RemeshProperties = 0x138;
            static constexpr std::uintptr_t GizmoProperties = 0x140;
            static constexpr std::uintptr_t ViewProperties = 0x148;
            static constexpr std::uintptr_t SculptToolActions = 0x150;
            static constexpr std::uintptr_t BrushIndicator = 0x1D8;
            static constexpr std::uintptr_t BrushIndicatorMaterial = 0x1E0;
            static constexpr std::uintptr_t BrushIndicatorMesh = 0x1E8;
            static constexpr std::uintptr_t PreviewMeshActor = 0x1F0;
            static constexpr std::uintptr_t DynamicMeshComponent = 0x1F8;
            static constexpr std::uintptr_t ActiveOverrideMaterial = 0x200;
            static constexpr std::uintptr_t PlaneTransformGizmo = 0xDF8;
            static constexpr std::uintptr_t PlaneTransformProxy = 0xE00;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"BrushProperties", 0x118, "ObjectProperty"},
            {"SculptProperties", 0x120, "ObjectProperty"},
            {"SculptMaxBrushProperties", 0x128, "ObjectProperty"},
            {"KelvinBrushProperties", 0x130, "ObjectProperty"},
            {"RemeshProperties", 0x138, "ObjectProperty"},
            {"GizmoProperties", 0x140, "ObjectProperty"},
            {"ViewProperties", 0x148, "ObjectProperty"},
            {"SculptToolActions", 0x150, "ObjectProperty"},
            {"BrushIndicator", 0x1D8, "ObjectProperty"},
            {"BrushIndicatorMaterial", 0x1E0, "ObjectProperty"},
            {"BrushIndicatorMesh", 0x1E8, "ObjectProperty"},
            {"PreviewMeshActor", 0x1F0, "ObjectProperty"},
            {"DynamicMeshComponent", 0x1F8, "ObjectProperty"},
            {"ActiveOverrideMaterial", 0x200, "ObjectProperty"},
            {"PlaneTransformGizmo", 0xDF8, "ObjectProperty"},
            {"PlaneTransformProxy", 0xE00, "ObjectProperty"},
        }};
    };

    struct DynamicMeshSculptToolBuilder
    {
        static constexpr std::string_view Name = "DynamicMeshSculptToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicSculptToolActions
    {
        static constexpr std::string_view Name = "DynamicSculptToolActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct EdgeLoopInsertionProperties
    {
        static constexpr std::string_view Name = "EdgeLoopInsertionProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t PositionMode = 0x68;
            static constexpr std::uintptr_t InsertionMode = 0x6C;
            static constexpr std::uintptr_t NumLoops = 0x70;
            static constexpr std::uintptr_t ProportionOffset = 0x78;
            static constexpr std::uintptr_t DistanceOffset = 0x80;
            static constexpr std::uintptr_t bInteractive = 0x88;
            static constexpr std::uintptr_t bFlipOffsetDirection = 0x89;
            static constexpr std::uintptr_t bHighlightProblemGroups = 0x8A;
            static constexpr std::uintptr_t VertexTolerance = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PositionMode", 0x68, "EnumProperty"},
            {"InsertionMode", 0x6C, "EnumProperty"},
            {"NumLoops", 0x70, "IntProperty"},
            {"ProportionOffset", 0x78, "DoubleProperty"},
            {"DistanceOffset", 0x80, "DoubleProperty"},
            {"bInteractive", 0x88, "BoolProperty"},
            {"bFlipOffsetDirection", 0x89, "BoolProperty"},
            {"bHighlightProblemGroups", 0x8A, "BoolProperty"},
            {"VertexTolerance", 0x90, "DoubleProperty"},
        }};
    };

    struct EditMeshPolygonsActionModeToolBuilder
    {
        static constexpr std::string_view Name = "EditMeshPolygonsActionModeToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditMeshPolygonsToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditMeshPolygonsSelectionModeToolBuilder
    {
        static constexpr std::string_view Name = "EditMeshPolygonsSelectionModeToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditMeshPolygonsToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditMeshPolygonsTool
    {
        static constexpr std::string_view Name = "EditMeshPolygonsTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Preview = 0x128;
            static constexpr std::uintptr_t CommonProps = 0x130;
            static constexpr std::uintptr_t EditActions = 0x138;
            static constexpr std::uintptr_t EditActions_Triangles = 0x140;
            static constexpr std::uintptr_t EditEdgeActions = 0x148;
            static constexpr std::uintptr_t EditEdgeActions_Triangles = 0x150;
            static constexpr std::uintptr_t EditUVActions = 0x158;
            static constexpr std::uintptr_t TopologyProperties = 0x160;
            static constexpr std::uintptr_t ExtrudeActivity = 0x168;
            static constexpr std::uintptr_t InsetOutsetActivity = 0x170;
            static constexpr std::uintptr_t CutFacesActivity = 0x178;
            static constexpr std::uintptr_t PlanarProjectionUVActivity = 0x180;
            static constexpr std::uintptr_t InsertEdgeActivity = 0x188;
            static constexpr std::uintptr_t InsertEdgeLoopActivity = 0x190;
            static constexpr std::uintptr_t BevelEdgeActivity = 0x198;
            static constexpr std::uintptr_t ExtrudeEdgeActivity = 0x1A0;
            static constexpr std::uintptr_t ActivityContext = 0x200;
            static constexpr std::uintptr_t SelectionMechanic = 0x208;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0x210;
            static constexpr std::uintptr_t TransformGizmo = 0x218;
            static constexpr std::uintptr_t TransformProxy = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"Preview", 0x128, "ObjectProperty"},
            {"CommonProps", 0x130, "ObjectProperty"},
            {"EditActions", 0x138, "ObjectProperty"},
            {"EditActions_Triangles", 0x140, "ObjectProperty"},
            {"EditEdgeActions", 0x148, "ObjectProperty"},
            {"EditEdgeActions_Triangles", 0x150, "ObjectProperty"},
            {"EditUVActions", 0x158, "ObjectProperty"},
            {"TopologyProperties", 0x160, "ObjectProperty"},
            {"ExtrudeActivity", 0x168, "ObjectProperty"},
            {"InsetOutsetActivity", 0x170, "ObjectProperty"},
            {"CutFacesActivity", 0x178, "ObjectProperty"},
            {"PlanarProjectionUVActivity", 0x180, "ObjectProperty"},
            {"InsertEdgeActivity", 0x188, "ObjectProperty"},
            {"InsertEdgeLoopActivity", 0x190, "ObjectProperty"},
            {"BevelEdgeActivity", 0x198, "ObjectProperty"},
            {"ExtrudeEdgeActivity", 0x1A0, "ObjectProperty"},
            {"ActivityContext", 0x200, "ObjectProperty"},
            {"SelectionMechanic", 0x208, "ObjectProperty"},
            {"DragAlignmentMechanic", 0x210, "ObjectProperty"},
            {"TransformGizmo", 0x218, "ObjectProperty"},
            {"TransformProxy", 0x220, "ObjectProperty"},
        }};
    };

    struct EditMeshPolygonsToolActionPropertySet
    {
        static constexpr std::string_view Name = "EditMeshPolygonsToolActionPropertySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct EditMeshPolygonsToolActions
    {
        static constexpr std::string_view Name = "EditMeshPolygonsToolActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditMeshPolygonsToolActionPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct EditMeshPolygonsToolActions_Triangles
    {
        static constexpr std::string_view Name = "EditMeshPolygonsToolActions_Triangles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditMeshPolygonsToolActionPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct EditMeshPolygonsToolBuilder
    {
        static constexpr std::string_view Name = "EditMeshPolygonsToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditMeshPolygonsToolEdgeActions
    {
        static constexpr std::string_view Name = "EditMeshPolygonsToolEdgeActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditMeshPolygonsToolActionPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct EditMeshPolygonsToolEdgeActions_Triangles
    {
        static constexpr std::string_view Name = "EditMeshPolygonsToolEdgeActions_Triangles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditMeshPolygonsToolActionPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct EditMeshPolygonsToolUVActions
    {
        static constexpr std::string_view Name = "EditMeshPolygonsToolUVActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditMeshPolygonsToolActionPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct EraseBrushOpProps
    {
        static constexpr std::string_view Name = "EraseBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
        }};
    };

    struct EraseSculptLayerBrushOpProps
    {
        static constexpr std::string_view Name = "EraseSculptLayerBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
        }};
    };

    struct ExistingMeshMaterialProperties
    {
        static constexpr std::string_view Name = "ExistingMeshMaterialProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialMode = 0x68;
            static constexpr std::uintptr_t CheckerDensity = 0x6C;
            static constexpr std::uintptr_t OverrideMaterial = 0x70;
            static constexpr std::uintptr_t UVChannel = 0x78;
            static constexpr std::uintptr_t UVChannelNamesList = 0x88;
            static constexpr std::uintptr_t CheckerMaterial = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MaterialMode", 0x68, "EnumProperty"},
            {"CheckerDensity", 0x6C, "FloatProperty"},
            {"OverrideMaterial", 0x70, "ObjectProperty"},
            {"UVChannel", 0x78, "StrProperty"},
            {"UVChannelNamesList", 0x88, "ArrayProperty"},
            {"CheckerMaterial", 0x98, "ObjectProperty"},
        }};
    };

    struct FixedPlaneBrushOpProps
    {
        static constexpr std::string_view Name = "FixedPlaneBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BasePlaneBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t WhichSide = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"WhichSide", 0x78, "EnumProperty"},
        }};
    };

    struct FixedPlaneBrushProperties
    {
        static constexpr std::string_view Name = "FixedPlaneBrushProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bPropertySetEnabled = 0x68;
            static constexpr std::uintptr_t bShowGizmo = 0x69;
            static constexpr std::uintptr_t Position = 0x70;
            static constexpr std::uintptr_t Rotation = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bPropertySetEnabled", 0x68, "BoolProperty"},
            {"bShowGizmo", 0x69, "BoolProperty"},
            {"Position", 0x70, "StructProperty"},
            {"Rotation", 0x90, "StructProperty"},
        }};
    };

    struct FlattenBrushOpProps
    {
        static constexpr std::string_view Name = "FlattenBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t WhichSide = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"WhichSide", 0x78, "EnumProperty"},
        }};
    };

    struct GroupEdgeInsertionProperties
    {
        static constexpr std::string_view Name = "GroupEdgeInsertionProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t InsertionMode = 0x68;
            static constexpr std::uintptr_t bContinuousInsertion = 0x6C;
            static constexpr std::uintptr_t VertexTolerance = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InsertionMode", 0x68, "EnumProperty"},
            {"bContinuousInsertion", 0x6C, "BoolProperty"},
            {"VertexTolerance", 0x70, "DoubleProperty"},
        }};
    };

    struct GroupEraseBrushOpProps
    {
        static constexpr std::string_view Name = "GroupEraseBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Group = 0x70;
            static constexpr std::uintptr_t bOnlyEraseCurrent = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Group", 0x70, "IntProperty"},
            {"bOnlyEraseCurrent", 0x74, "BoolProperty"},
        }};
    };

    struct GroupPaintBrushFilterProperties
    {
        static constexpr std::string_view Name = "GroupPaintBrushFilterProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryBrushType = 0x68;
            static constexpr std::uintptr_t SubToolType = 0x69;
            static constexpr std::uintptr_t BrushSize = 0x6C;
            static constexpr std::uintptr_t BrushAreaMode = 0x70;
            static constexpr std::uintptr_t bHitBackFaces = 0x71;
            static constexpr std::uintptr_t SetGroup = 0x74;
            static constexpr std::uintptr_t SetLabel = 0x78;
            static constexpr std::uintptr_t bOnlySetUngrouped = 0x7C;
            static constexpr std::uintptr_t EraseGroup = 0x80;
            static constexpr std::uintptr_t EraseLabel = 0x84;
            static constexpr std::uintptr_t bOnlyEraseCurrent = 0x88;
            static constexpr std::uintptr_t AngleThreshold = 0x8C;
            static constexpr std::uintptr_t bUVSeams = 0x90;
            static constexpr std::uintptr_t bNormalSeams = 0x91;
            static constexpr std::uintptr_t VisibilityFilter = 0x92;
            static constexpr std::uintptr_t bIsolateGeometrySelection = 0x93;
            static constexpr std::uintptr_t bToolHasSelection = 0x94;
            static constexpr std::uintptr_t MinTriVertCount = 0x98;
            static constexpr std::uintptr_t bShowHitGroup = 0x9C;
            static constexpr std::uintptr_t bShowAllGroups = 0x9D;
            static constexpr std::uintptr_t bPaintingLabels = 0x9E;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"PrimaryBrushType", 0x68, "EnumProperty"},
            {"SubToolType", 0x69, "EnumProperty"},
            {"BrushSize", 0x6C, "FloatProperty"},
            {"BrushAreaMode", 0x70, "EnumProperty"},
            {"bHitBackFaces", 0x71, "BoolProperty"},
            {"SetGroup", 0x74, "IntProperty"},
            {"SetLabel", 0x78, "NameProperty"},
            {"bOnlySetUngrouped", 0x7C, "BoolProperty"},
            {"EraseGroup", 0x80, "IntProperty"},
            {"EraseLabel", 0x84, "NameProperty"},
            {"bOnlyEraseCurrent", 0x88, "BoolProperty"},
            {"AngleThreshold", 0x8C, "FloatProperty"},
            {"bUVSeams", 0x90, "BoolProperty"},
            {"bNormalSeams", 0x91, "BoolProperty"},
            {"VisibilityFilter", 0x92, "EnumProperty"},
            {"bIsolateGeometrySelection", 0x93, "BoolProperty"},
            {"bToolHasSelection", 0x94, "BoolProperty"},
            {"MinTriVertCount", 0x98, "IntProperty"},
            {"bShowHitGroup", 0x9C, "BoolProperty"},
            {"bShowAllGroups", 0x9D, "BoolProperty"},
            {"bPaintingLabels", 0x9E, "BoolProperty"},
        }};
    };

    struct GroupPaintBrushOpProps
    {
        static constexpr std::string_view Name = "GroupPaintBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Group = 0x70;
            static constexpr std::uintptr_t bOnlyPaintUngrouped = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Group", 0x70, "IntProperty"},
            {"bOnlyPaintUngrouped", 0x74, "BoolProperty"},
        }};
    };

    struct GroupPaintSymmetryProperties
    {
        static constexpr std::string_view Name = "GroupPaintSymmetryProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableSymmetry = 0x68;
            static constexpr std::uintptr_t bPaintingLabels = 0x69;
            static constexpr std::uintptr_t LeftString = 0x70;
            static constexpr std::uintptr_t RightString = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnableSymmetry", 0x68, "BoolProperty"},
            {"bPaintingLabels", 0x69, "BoolProperty"},
            {"LeftString", 0x70, "StrProperty"},
            {"RightString", 0x80, "StrProperty"},
        }};
    };

    struct HoleFillOperatorFactory
    {
        static constexpr std::string_view Name = "HoleFillOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FillTool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FillTool", 0x30, "ObjectProperty"},
        }};
    };

    struct HoleFillStatisticsProperties
    {
        static constexpr std::string_view Name = "HoleFillStatisticsProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialHoles = 0x68;
            static constexpr std::uintptr_t SelectedHoles = 0x78;
            static constexpr std::uintptr_t SuccessfulFills = 0x88;
            static constexpr std::uintptr_t FailedFills = 0x98;
            static constexpr std::uintptr_t RemainingHoles = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InitialHoles", 0x68, "StrProperty"},
            {"SelectedHoles", 0x78, "StrProperty"},
            {"SuccessfulFills", 0x88, "StrProperty"},
            {"FailedFills", 0x98, "StrProperty"},
            {"RemainingHoles", 0xA8, "StrProperty"},
        }};
    };

    struct HoleFillTool
    {
        static constexpr std::string_view Name = "HoleFillTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t SmoothHoleFillProperties = 0xC8;
            static constexpr std::uintptr_t Properties = 0xD0;
            static constexpr std::uintptr_t Actions = 0xD8;
            static constexpr std::uintptr_t Statistics = 0xE0;
            static constexpr std::uintptr_t Preview = 0xE8;
            static constexpr std::uintptr_t SelectionMechanic = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SmoothHoleFillProperties", 0xC8, "ObjectProperty"},
            {"Properties", 0xD0, "ObjectProperty"},
            {"Actions", 0xD8, "ObjectProperty"},
            {"Statistics", 0xE0, "ObjectProperty"},
            {"Preview", 0xE8, "ObjectProperty"},
            {"SelectionMechanic", 0xF0, "ObjectProperty"},
        }};
    };

    struct HoleFillToolActions
    {
        static constexpr std::string_view Name = "HoleFillToolActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct HoleFillToolBuilder
    {
        static constexpr std::string_view Name = "HoleFillToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HoleFillToolProperties
    {
        static constexpr std::string_view Name = "HoleFillToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t FillType = 0x68;
            static constexpr std::uintptr_t bRemoveIsolatedTriangles = 0x69;
            static constexpr std::uintptr_t bQuickFillSmallHoles = 0x6A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FillType", 0x68, "EnumProperty"},
            {"bRemoveIsolatedTriangles", 0x69, "BoolProperty"},
            {"bQuickFillSmallHoles", 0x6A, "BoolProperty"},
        }};
    };

    struct ImplicitOffsetProperties
    {
        static constexpr std::string_view Name = "ImplicitOffsetProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Smoothness = 0x68;
            static constexpr std::uintptr_t bPreserveUVs = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Smoothness", 0x68, "FloatProperty"},
            {"bPreserveUVs", 0x6C, "BoolProperty"},
        }};
    };

    struct ImplicitSmoothProperties
    {
        static constexpr std::string_view Name = "ImplicitSmoothProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SmoothSpeed = 0x68;
            static constexpr std::uintptr_t Smoothness = 0x6C;
            static constexpr std::uintptr_t bPreserveUVs = 0x70;
            static constexpr std::uintptr_t VolumeCorrection = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SmoothSpeed", 0x68, "FloatProperty"},
            {"Smoothness", 0x6C, "FloatProperty"},
            {"bPreserveUVs", 0x70, "BoolProperty"},
            {"VolumeCorrection", 0x74, "FloatProperty"},
        }};
    };

    struct InflateBrushOpProps
    {
        static constexpr std::string_view Name = "InflateBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
        }};
    };

    struct IterativeOffsetProperties
    {
        static constexpr std::string_view Name = "IterativeOffsetProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Steps = 0x68;
            static constexpr std::uintptr_t bOffsetBoundaries = 0x6C;
            static constexpr std::uintptr_t SmoothingPerStep = 0x70;
            static constexpr std::uintptr_t bReprojectSmooth = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Steps", 0x68, "IntProperty"},
            {"bOffsetBoundaries", 0x6C, "BoolProperty"},
            {"SmoothingPerStep", 0x70, "FloatProperty"},
            {"bReprojectSmooth", 0x74, "BoolProperty"},
        }};
    };

    struct IterativeSmoothProperties
    {
        static constexpr std::string_view Name = "IterativeSmoothProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SmoothingPerStep = 0x68;
            static constexpr std::uintptr_t Steps = 0x6C;
            static constexpr std::uintptr_t bSmoothBoundary = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SmoothingPerStep", 0x68, "FloatProperty"},
            {"Steps", 0x6C, "IntProperty"},
            {"bSmoothBoundary", 0x70, "BoolProperty"},
        }};
    };

    struct KelvinBrushProperties
    {
        static constexpr std::string_view Name = "KelvinBrushProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t FallOffDistance = 0x68;
            static constexpr std::uintptr_t Stiffness = 0x6C;
            static constexpr std::uintptr_t Incompressiblity = 0x70;
            static constexpr std::uintptr_t BrushSteps = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FallOffDistance", 0x68, "FloatProperty"},
            {"Stiffness", 0x6C, "FloatProperty"},
            {"Incompressiblity", 0x70, "FloatProperty"},
            {"BrushSteps", 0x74, "IntProperty"},
        }};
    };

    struct LatticeDeformerOperatorFactory
    {
        static constexpr std::string_view Name = "LatticeDeformerOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LatticeDeformerTool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LatticeDeformerTool", 0x30, "ObjectProperty"},
        }};
    };

    struct LatticeDeformerTool
    {
        static constexpr std::string_view Name = "LatticeDeformerTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlPointsMechanic = 0x1A0;
            static constexpr std::uintptr_t Settings = 0x1A8;
            static constexpr std::uintptr_t Preview = 0x1B0;
            static constexpr std::uintptr_t SculptLayerProperties = 0x1B8;
            static constexpr std::uintptr_t LatticeStorage = 0x1C0;
            static constexpr std::uintptr_t bLatticeDeformed = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ControlPointsMechanic", 0x1A0, "ObjectProperty"},
            {"Settings", 0x1A8, "ObjectProperty"},
            {"Preview", 0x1B0, "ObjectProperty"},
            {"SculptLayerProperties", 0x1B8, "ObjectProperty"},
            {"LatticeStorage", 0x1C0, "InterfaceProperty"},
            {"bLatticeDeformed", 0x1D0, "BoolProperty"},
        }};
    };

    struct LatticeDeformerToolBuilder
    {
        static constexpr std::string_view Name = "LatticeDeformerToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LatticeDeformerToolProperties
    {
        static constexpr std::string_view Name = "LatticeDeformerToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t XAxisResolution = 0x70;
            static constexpr std::uintptr_t YAxisResolution = 0x74;
            static constexpr std::uintptr_t ZAxisResolution = 0x78;
            static constexpr std::uintptr_t Padding = 0x7C;
            static constexpr std::uintptr_t InterpolationType = 0x80;
            static constexpr std::uintptr_t bDeformNormals = 0x81;
            static constexpr std::uintptr_t bCanChangeResolution = 0x82;
            static constexpr std::uintptr_t GizmoCoordinateSystem = 0x83;
            static constexpr std::uintptr_t bSetPivotMode = 0x84;
            static constexpr std::uintptr_t bSoftDeformation = 0x85;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"XAxisResolution", 0x70, "IntProperty"},
            {"YAxisResolution", 0x74, "IntProperty"},
            {"ZAxisResolution", 0x78, "IntProperty"},
            {"Padding", 0x7C, "FloatProperty"},
            {"InterpolationType", 0x80, "EnumProperty"},
            {"bDeformNormals", 0x81, "BoolProperty"},
            {"bCanChangeResolution", 0x82, "BoolProperty"},
            {"GizmoCoordinateSystem", 0x83, "EnumProperty"},
            {"bSetPivotMode", 0x84, "BoolProperty"},
            {"bSoftDeformation", 0x85, "BoolProperty"},
        }};
    };

    struct MeshAttributePaintBrushOperationProperties
    {
        static constexpr std::string_view Name = "MeshAttributePaintBrushOperationProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsolateGeometrySelection = 0x68;
            static constexpr std::uintptr_t bToolHasSelection = 0x69;
            static constexpr std::uintptr_t BrushAction = 0x6C;
            static constexpr std::uintptr_t BrushValue = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsolateGeometrySelection", 0x68, "BoolProperty"},
            {"bToolHasSelection", 0x69, "BoolProperty"},
            {"BrushAction", 0x6C, "EnumProperty"},
            {"BrushValue", 0x70, "FloatProperty"},
        }};
    };

    struct MeshAttributePaintEditActions
    {
        static constexpr std::string_view Name = "MeshAttributePaintEditActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct MeshAttributePaintTool
    {
        static constexpr std::string_view Name = "MeshAttributePaintTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicMeshBrushTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushActionProps = 0x3B0;
            static constexpr std::uintptr_t AttribProps = 0x3B8;
            static constexpr std::uintptr_t ViewProperties = 0x3C0;
            static constexpr std::uintptr_t ActiveOverrideMaterial = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BrushActionProps", 0x3B0, "ObjectProperty"},
            {"AttribProps", 0x3B8, "ObjectProperty"},
            {"ViewProperties", 0x3C0, "ObjectProperty"},
            {"ActiveOverrideMaterial", 0x440, "ObjectProperty"},
        }};
    };

    struct MeshAttributePaintToolBuilder
    {
        static constexpr std::string_view Name = "MeshAttributePaintToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshAttributePaintToolProperties
    {
        static constexpr std::string_view Name = "MeshAttributePaintToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Attribute = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Attribute", 0x68, "StrProperty"},
        }};
    };

    struct MeshAttributePaintToolVisualizationProperties
    {
        static constexpr std::string_view Name = "MeshAttributePaintToolVisualizationProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialMode = 0x68;
            static constexpr std::uintptr_t bFlatShading = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaterialMode", 0x68, "EnumProperty"},
            {"bFlatShading", 0x6C, "BoolProperty"},
        }};
    };

    struct MeshConstraintProperties
    {
        static constexpr std::string_view Name = "MeshConstraintProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bPreserveSharpEdges = 0x68;
            static constexpr std::uintptr_t MeshBoundaryConstraint = 0x69;
            static constexpr std::uintptr_t GroupBoundaryConstraint = 0x6A;
            static constexpr std::uintptr_t MaterialBoundaryConstraint = 0x6B;
            static constexpr std::uintptr_t bPreventNormalFlips = 0x6C;
            static constexpr std::uintptr_t bPreventTinyTriangles = 0x6D;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bPreserveSharpEdges", 0x68, "BoolProperty"},
            {"MeshBoundaryConstraint", 0x69, "EnumProperty"},
            {"GroupBoundaryConstraint", 0x6A, "EnumProperty"},
            {"MaterialBoundaryConstraint", 0x6B, "EnumProperty"},
            {"bPreventNormalFlips", 0x6C, "BoolProperty"},
            {"bPreventTinyTriangles", 0x6D, "BoolProperty"},
        }};
    };

    struct MeshEditingViewProperties
    {
        static constexpr std::string_view Name = "MeshEditingViewProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowWireframe = 0x68;
            static constexpr std::uintptr_t MaterialMode = 0x6C;
            static constexpr std::uintptr_t bFlatShading = 0x70;
            static constexpr std::uintptr_t Color = 0x74;
            static constexpr std::uintptr_t Image = 0x88;
            static constexpr std::uintptr_t Opacity = 0x90;
            static constexpr std::uintptr_t TransparentMaterialColor = 0x98;
            static constexpr std::uintptr_t bTwoSided = 0xA8;
            static constexpr std::uintptr_t CustomMaterial = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bShowWireframe", 0x68, "BoolProperty"},
            {"MaterialMode", 0x6C, "EnumProperty"},
            {"bFlatShading", 0x70, "BoolProperty"},
            {"Color", 0x74, "StructProperty"},
            {"Image", 0x88, "ObjectProperty"},
            {"Opacity", 0x90, "DoubleProperty"},
            {"TransparentMaterialColor", 0x98, "StructProperty"},
            {"bTwoSided", 0xA8, "BoolProperty"},
            {"CustomMaterial", 0xAC, "WeakObjectProperty"},
        }};
    };

    struct MeshGroupPaintTool
    {
        static constexpr std::string_view Name = "MeshGroupPaintTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptToolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PolygroupLayerProperties = 0xB18;
            static constexpr std::uintptr_t FilterProperties = 0xB20;
            static constexpr std::uintptr_t SymmetryProperties = 0xB28;
            static constexpr std::uintptr_t PaintBrushOpProperties = 0xB30;
            static constexpr std::uintptr_t EraseBrushOpProperties = 0xB38;
            static constexpr std::uintptr_t FreezeActions = 0xB40;
            static constexpr std::uintptr_t PolyLassoMechanic = 0xB50;
            static constexpr std::uintptr_t PreviewMeshActor = 0xB58;
            static constexpr std::uintptr_t DynamicMeshComponent = 0xB60;
            static constexpr std::uintptr_t MeshElementsDisplay = 0xB68;
            static constexpr std::uintptr_t MirrorBrushIndicator = 0xE70;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PolygroupLayerProperties", 0xB18, "ObjectProperty"},
            {"FilterProperties", 0xB20, "ObjectProperty"},
            {"SymmetryProperties", 0xB28, "ObjectProperty"},
            {"PaintBrushOpProperties", 0xB30, "ObjectProperty"},
            {"EraseBrushOpProperties", 0xB38, "ObjectProperty"},
            {"FreezeActions", 0xB40, "ObjectProperty"},
            {"PolyLassoMechanic", 0xB50, "ObjectProperty"},
            {"PreviewMeshActor", 0xB58, "ObjectProperty"},
            {"DynamicMeshComponent", 0xB60, "ObjectProperty"},
            {"MeshElementsDisplay", 0xB68, "ObjectProperty"},
            {"MirrorBrushIndicator", 0xE70, "ObjectProperty"},
        }};
    };

    struct MeshGroupPaintToolActionPropertySet
    {
        static constexpr std::string_view Name = "MeshGroupPaintToolActionPropertySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct MeshGroupPaintToolBuilder
    {
        static constexpr std::string_view Name = "MeshGroupPaintToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshGroupPaintToolFreezeActions
    {
        static constexpr std::string_view Name = "MeshGroupPaintToolFreezeActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshGroupPaintToolActionPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct MeshSculptBrushOpProps
    {
        static constexpr std::string_view Name = "MeshSculptBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsStrengthPressureEnabled = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsStrengthPressureEnabled", 0x68, "BoolProperty"},
        }};
    };

    struct MeshSculptLayerProperties
    {
        static constexpr std::string_view Name = "MeshSculptLayerProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveLayer = 0x28;
            static constexpr std::uintptr_t LayerWeights = 0x30;
            static constexpr std::uintptr_t bCanEditLayers = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActiveLayer", 0x28, "IntProperty"},
            {"LayerWeights", 0x30, "ArrayProperty"},
            {"bCanEditLayers", 0x40, "BoolProperty"},
        }};
    };

    struct MeshSculptToolBase
    {
        static constexpr std::string_view Name = "MeshSculptToolBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushProperties = 0x118;
            static constexpr std::uintptr_t GizmoProperties = 0x120;
            static constexpr std::uintptr_t BrushOpPropSets = 0x260;
            static constexpr std::uintptr_t SecondaryBrushOpPropSets = 0x280;
            static constexpr std::uintptr_t StrokeGeometry = 0x450;
            static constexpr std::uintptr_t ViewProperties = 0x9B0;
            static constexpr std::uintptr_t ActiveOverrideMaterial = 0x9B8;
            static constexpr std::uintptr_t BrushIndicator = 0x9C0;
            static constexpr std::uintptr_t bIsVolumetricIndicator = 0x9C8;
            static constexpr std::uintptr_t BrushIndicatorMaterial = 0x9D0;
            static constexpr std::uintptr_t BrushIndicatorMesh = 0x9D8;
            static constexpr std::uintptr_t PlaneTransformGizmo = 0x9E8;
            static constexpr std::uintptr_t PlaneTransformProxy = 0x9F0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"BrushProperties", 0x118, "ObjectProperty"},
            {"GizmoProperties", 0x120, "ObjectProperty"},
            {"BrushOpPropSets", 0x260, "MapProperty"},
            {"SecondaryBrushOpPropSets", 0x280, "MapProperty"},
            {"StrokeGeometry", 0x450, "ObjectProperty"},
            {"ViewProperties", 0x9B0, "ObjectProperty"},
            {"ActiveOverrideMaterial", 0x9B8, "ObjectProperty"},
            {"BrushIndicator", 0x9C0, "ObjectProperty"},
            {"bIsVolumetricIndicator", 0x9C8, "BoolProperty"},
            {"BrushIndicatorMaterial", 0x9D0, "ObjectProperty"},
            {"BrushIndicatorMesh", 0x9D8, "ObjectProperty"},
            {"PlaneTransformGizmo", 0x9E8, "ObjectProperty"},
            {"PlaneTransformProxy", 0x9F0, "ObjectProperty"},
        }};
    };

    struct MeshSpaceDeformerTool
    {
        static constexpr std::string_view Name = "MeshSpaceDeformerTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xD0;
            static constexpr std::uintptr_t ToolActions = 0xD8;
            static constexpr std::uintptr_t StateTarget = 0xE0;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xE8;
            static constexpr std::uintptr_t Preview = 0xF0;
            static constexpr std::uintptr_t OriginalMeshPreview = 0x108;
            static constexpr std::uintptr_t IntervalGizmo = 0x110;
            static constexpr std::uintptr_t TransformGizmo = 0x118;
            static constexpr std::uintptr_t TransformProxy = 0x120;
            static constexpr std::uintptr_t UpIntervalSource = 0x128;
            static constexpr std::uintptr_t DownIntervalSource = 0x130;
            static constexpr std::uintptr_t ForwardIntervalSource = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Settings", 0xD0, "ObjectProperty"},
            {"ToolActions", 0xD8, "ObjectProperty"},
            {"StateTarget", 0xE0, "ObjectProperty"},
            {"DragAlignmentMechanic", 0xE8, "ObjectProperty"},
            {"Preview", 0xF0, "ObjectProperty"},
            {"OriginalMeshPreview", 0x108, "ObjectProperty"},
            {"IntervalGizmo", 0x110, "ObjectProperty"},
            {"TransformGizmo", 0x118, "ObjectProperty"},
            {"TransformProxy", 0x120, "ObjectProperty"},
            {"UpIntervalSource", 0x128, "ObjectProperty"},
            {"DownIntervalSource", 0x130, "ObjectProperty"},
            {"ForwardIntervalSource", 0x138, "ObjectProperty"},
        }};
    };

    struct MeshSpaceDeformerToolActionPropertySet
    {
        static constexpr std::string_view Name = "MeshSpaceDeformerToolActionPropertySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct MeshSpaceDeformerToolBuilder
    {
        static constexpr std::string_view Name = "MeshSpaceDeformerToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshSpaceDeformerToolProperties
    {
        static constexpr std::string_view Name = "MeshSpaceDeformerToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedOperationType = 0x68;
            static constexpr std::uintptr_t UpperBoundsInterval = 0x6C;
            static constexpr std::uintptr_t LowerBoundsInterval = 0x70;
            static constexpr std::uintptr_t BendDegrees = 0x74;
            static constexpr std::uintptr_t TwistDegrees = 0x78;
            static constexpr std::uintptr_t FlareProfileType = 0x7C;
            static constexpr std::uintptr_t FlarePercentY = 0x80;
            static constexpr std::uintptr_t bLockXAndYFlaring = 0x84;
            static constexpr std::uintptr_t FlarePercentX = 0x88;
            static constexpr std::uintptr_t bLockBottom = 0x8C;
            static constexpr std::uintptr_t bShowOriginalMesh = 0x8D;
            static constexpr std::uintptr_t bDrawVisualization = 0x8E;
            static constexpr std::uintptr_t bAlignToNormalOnCtrlClick = 0x8F;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SelectedOperationType", 0x68, "EnumProperty"},
            {"UpperBoundsInterval", 0x6C, "FloatProperty"},
            {"LowerBoundsInterval", 0x70, "FloatProperty"},
            {"BendDegrees", 0x74, "FloatProperty"},
            {"TwistDegrees", 0x78, "FloatProperty"},
            {"FlareProfileType", 0x7C, "EnumProperty"},
            {"FlarePercentY", 0x80, "FloatProperty"},
            {"bLockXAndYFlaring", 0x84, "BoolProperty"},
            {"FlarePercentX", 0x88, "FloatProperty"},
            {"bLockBottom", 0x8C, "BoolProperty"},
            {"bShowOriginalMesh", 0x8D, "BoolProperty"},
            {"bDrawVisualization", 0x8E, "BoolProperty"},
            {"bAlignToNormalOnCtrlClick", 0x8F, "BoolProperty"},
        }};
    };

    struct MeshStatisticsProperties
    {
        static constexpr std::string_view Name = "MeshStatisticsProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x68;
            static constexpr std::uintptr_t UV = 0x78;
            static constexpr std::uintptr_t Attributes = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Mesh", 0x68, "StrProperty"},
            {"UV", 0x78, "StrProperty"},
            {"Attributes", 0x88, "StrProperty"},
        }};
    };

    struct MeshSymmetryProperties
    {
        static constexpr std::string_view Name = "MeshSymmetryProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableSymmetry = 0x68;
            static constexpr std::uintptr_t bSymmetryCanBeEnabled = 0x69;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bEnableSymmetry", 0x68, "BoolProperty"},
            {"bSymmetryCanBeEnabled", 0x69, "BoolProperty"},
        }};
    };

    struct MeshUVChannelProperties
    {
        static constexpr std::string_view Name = "MeshUVChannelProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t UVChannel = 0x68;
            static constexpr std::uintptr_t UVChannelNamesList = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UVChannel", 0x68, "StrProperty"},
            {"UVChannelNamesList", 0x78, "ArrayProperty"},
        }};
    };

    struct MeshVertexPaintTool
    {
        static constexpr std::string_view Name = "MeshVertexPaintTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptToolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PolygroupLayerProperties = 0xB18;
            static constexpr std::uintptr_t BasicProperties = 0xB20;
            static constexpr std::uintptr_t FilterProperties = 0xB28;
            static constexpr std::uintptr_t SymmetryProperties = 0xB30;
            static constexpr std::uintptr_t PaintBrushOpProperties = 0xB38;
            static constexpr std::uintptr_t EraseBrushOpProperties = 0xB40;
            static constexpr std::uintptr_t QuickActions = 0xB48;
            static constexpr std::uintptr_t UtilityActions = 0xB50;
            static constexpr std::uintptr_t PolyLassoMechanic = 0xB60;
            static constexpr std::uintptr_t PreviewMeshActor = 0xB68;
            static constexpr std::uintptr_t DynamicMeshComponent = 0xB70;
            static constexpr std::uintptr_t MeshElementsDisplay = 0xB78;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"PolygroupLayerProperties", 0xB18, "ObjectProperty"},
            {"BasicProperties", 0xB20, "ObjectProperty"},
            {"FilterProperties", 0xB28, "ObjectProperty"},
            {"SymmetryProperties", 0xB30, "ObjectProperty"},
            {"PaintBrushOpProperties", 0xB38, "ObjectProperty"},
            {"EraseBrushOpProperties", 0xB40, "ObjectProperty"},
            {"QuickActions", 0xB48, "ObjectProperty"},
            {"UtilityActions", 0xB50, "ObjectProperty"},
            {"PolyLassoMechanic", 0xB60, "ObjectProperty"},
            {"PreviewMeshActor", 0xB68, "ObjectProperty"},
            {"DynamicMeshComponent", 0xB70, "ObjectProperty"},
            {"MeshElementsDisplay", 0xB78, "ObjectProperty"},
        }};
    };

    struct MeshVertexPaintToolActionPropertySet
    {
        static constexpr std::string_view Name = "MeshVertexPaintToolActionPropertySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct MeshVertexPaintToolBuilder
    {
        static constexpr std::string_view Name = "MeshVertexPaintToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshVertexPaintToolQuickActions
    {
        static constexpr std::string_view Name = "MeshVertexPaintToolQuickActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshVertexPaintToolActionPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct MeshVertexPaintToolUtilityActions
    {
        static constexpr std::string_view Name = "MeshVertexPaintToolUtilityActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshVertexPaintToolActionPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x70;
            static constexpr std::uintptr_t SourceChannel = 0x74;
            static constexpr std::uintptr_t SourceValue = 0x78;
            static constexpr std::uintptr_t WeightMap = 0x7C;
            static constexpr std::uintptr_t WeightMapsList = 0x80;
            static constexpr std::uintptr_t TargetChannels = 0x90;
            static constexpr std::uintptr_t TargetChannel = 0x94;
            static constexpr std::uintptr_t bCopyToHiRes = 0x95;
            static constexpr std::uintptr_t CopyToLODName = 0x98;
            static constexpr std::uintptr_t LODNamesList = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Operation", 0x70, "EnumProperty"},
            {"SourceChannel", 0x74, "EnumProperty"},
            {"SourceValue", 0x78, "FloatProperty"},
            {"WeightMap", 0x7C, "NameProperty"},
            {"WeightMapsList", 0x80, "ArrayProperty"},
            {"TargetChannels", 0x90, "StructProperty"},
            {"TargetChannel", 0x94, "EnumProperty"},
            {"bCopyToHiRes", 0x95, "BoolProperty"},
            {"CopyToLODName", 0x98, "StrProperty"},
            {"LODNamesList", 0xA8, "ArrayProperty"},
        }};
    };

    struct MeshVertexSculptTool
    {
        static constexpr std::string_view Name = "MeshVertexSculptTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptToolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SculptProperties = 0xB20;
            static constexpr std::uintptr_t AlphaProperties = 0xB28;
            static constexpr std::uintptr_t BrushAlpha = 0xB30;
            static constexpr std::uintptr_t SymmetryProperties = 0xB38;
            static constexpr std::uintptr_t SculptLayerProperties = 0xB40;
            static constexpr std::uintptr_t PreviewMeshActor = 0xB60;
            static constexpr std::uintptr_t DynamicMeshComponent = 0xB68;
            static constexpr std::uintptr_t OctreeGeometry = 0x1460;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SculptProperties", 0xB20, "ObjectProperty"},
            {"AlphaProperties", 0xB28, "ObjectProperty"},
            {"BrushAlpha", 0xB30, "ObjectProperty"},
            {"SymmetryProperties", 0xB38, "ObjectProperty"},
            {"SculptLayerProperties", 0xB40, "ObjectProperty"},
            {"PreviewMeshActor", 0xB60, "ObjectProperty"},
            {"DynamicMeshComponent", 0xB68, "ObjectProperty"},
            {"OctreeGeometry", 0x1460, "ObjectProperty"},
        }};
    };

    struct MeshVertexSculptToolBuilder
    {
        static constexpr std::string_view Name = "MeshVertexSculptToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshWeightChannelDensityProperties
    {
        static constexpr std::string_view Name = "MeshWeightChannelDensityProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseWeightMap = 0x68;
            static constexpr std::uintptr_t SelectedAttribute = 0x6C;
            static constexpr std::uintptr_t RelativeDensity = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseWeightMap", 0x68, "BoolProperty"},
            {"SelectedAttribute", 0x6C, "NameProperty"},
            {"RelativeDensity", 0x80, "FloatProperty"},
        }};
    };

    struct ModifyGeometrySelectionCommand
    {
        static constexpr std::string_view Name = "ModifyGeometrySelectionCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GeometrySelectionEditCommand";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModifyGeometrySelectionCommand_Contract
    {
        static constexpr std::string_view Name = "ModifyGeometrySelectionCommand_Contract";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ModifyGeometrySelectionCommand";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModifyGeometrySelectionCommand_Expand
    {
        static constexpr std::string_view Name = "ModifyGeometrySelectionCommand_Expand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ModifyGeometrySelectionCommand";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModifyGeometrySelectionCommand_ExpandToConnected
    {
        static constexpr std::string_view Name = "ModifyGeometrySelectionCommand_ExpandToConnected";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ModifyGeometrySelectionCommand";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModifyGeometrySelectionCommand_Invert
    {
        static constexpr std::string_view Name = "ModifyGeometrySelectionCommand_Invert";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ModifyGeometrySelectionCommand";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModifyGeometrySelectionCommand_InvertConnected
    {
        static constexpr std::string_view Name = "ModifyGeometrySelectionCommand_InvertConnected";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ModifyGeometrySelectionCommand";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MoveBrushOpProps
    {
        static constexpr std::string_view Name = "MoveBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t AxisFilters = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"AxisFilters", 0x78, "StructProperty"},
        }};
    };

    struct MultiGridSmoothBrushOpProps
    {
        static constexpr std::string_view Name = "MultiGridSmoothBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseSmoothBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t Iterations = 0x78;
            static constexpr std::uintptr_t bPreserveUVFlow = 0x7C;
            static constexpr std::uintptr_t FalloffStiffness = 0x80;
            static constexpr std::uintptr_t FalloffStiffnessCurve = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"Iterations", 0x78, "IntProperty"},
            {"bPreserveUVFlow", 0x7C, "BoolProperty"},
            {"FalloffStiffness", 0x80, "FloatProperty"},
            {"FalloffStiffnessCurve", 0x84, "FloatProperty"},
        }};
    };

    struct NewMeshMaterialProperties
    {
        static constexpr std::string_view Name = "NewMeshMaterialProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x68;
            static constexpr std::uintptr_t UVScale = 0x70;
            static constexpr std::uintptr_t bWorldSpaceUVScale = 0x74;
            static constexpr std::uintptr_t bShowWireframe = 0x75;
            static constexpr std::uintptr_t bShowExtendedOptions = 0x76;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Material", 0x68, "WeakObjectProperty"},
            {"UVScale", 0x70, "FloatProperty"},
            {"bWorldSpaceUVScale", 0x74, "BoolProperty"},
            {"bShowWireframe", 0x75, "BoolProperty"},
            {"bShowExtendedOptions", 0x76, "BoolProperty"},
        }};
    };

    struct OffsetMeshTool
    {
        static constexpr std::string_view Name = "OffsetMeshTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMeshProcessingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetProperties = 0x460;
            static constexpr std::uintptr_t IterativeProperties = 0x468;
            static constexpr std::uintptr_t ImplicitProperties = 0x470;
            static constexpr std::uintptr_t WeightMapProperties = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OffsetProperties", 0x460, "ObjectProperty"},
            {"IterativeProperties", 0x468, "ObjectProperty"},
            {"ImplicitProperties", 0x470, "ObjectProperty"},
            {"WeightMapProperties", 0x478, "ObjectProperty"},
        }};
    };

    struct OffsetMeshToolBuilder
    {
        static constexpr std::string_view Name = "OffsetMeshToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMeshProcessingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OffsetMeshToolProperties
    {
        static constexpr std::string_view Name = "OffsetMeshToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetType = 0x68;
            static constexpr std::uintptr_t Distance = 0x6C;
            static constexpr std::uintptr_t bCreateShell = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OffsetType", 0x68, "EnumProperty"},
            {"Distance", 0x6C, "FloatProperty"},
            {"bCreateShell", 0x70, "BoolProperty"},
        }};
    };

    struct OffsetWeightMapSetProperties
    {
        static constexpr std::string_view Name = "OffsetWeightMapSetProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WeightMapSetProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDistance = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MinDistance", 0x88, "FloatProperty"},
        }};
    };

    struct PinchBrushOpProps
    {
        static constexpr std::string_view Name = "PinchBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t Depth = 0x78;
            static constexpr std::uintptr_t bPerpDamping = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"Depth", 0x78, "FloatProperty"},
            {"bPerpDamping", 0x7C, "BoolProperty"},
        }};
    };

    struct PlaneBrushOpProps
    {
        static constexpr std::string_view Name = "PlaneBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BasePlaneBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t Depth = 0x78;
            static constexpr std::uintptr_t WhichSide = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"Depth", 0x78, "FloatProperty"},
            {"WhichSide", 0x7C, "EnumProperty"},
        }};
    };

    struct PolyEditActivityContext
    {
        static constexpr std::string_view Name = "PolyEditActivityContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CommonProperties = 0x28;
            static constexpr std::uintptr_t Preview = 0x40;
            static constexpr std::uintptr_t SelectionMechanic = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CommonProperties", 0x28, "ObjectProperty"},
            {"Preview", 0x40, "ObjectProperty"},
            {"SelectionMechanic", 0x70, "ObjectProperty"},
        }};
    };

    struct PolyEditBevelEdgeActivity
    {
        static constexpr std::string_view Name = "PolyEditBevelEdgeActivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolActivity";
        struct Offsets
        {
            static constexpr std::uintptr_t BevelProperties = 0x38;
            static constexpr std::uintptr_t ActivityContext = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BevelProperties", 0x38, "ObjectProperty"},
            {"ActivityContext", 0x40, "ObjectProperty"},
        }};
    };

    struct PolyEditBevelEdgeProperties
    {
        static constexpr std::string_view Name = "PolyEditBevelEdgeProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t BevelDistance = 0x68;
            static constexpr std::uintptr_t Subdivisions = 0x70;
            static constexpr std::uintptr_t RoundWeight = 0x74;
            static constexpr std::uintptr_t bInferMaterialID = 0x78;
            static constexpr std::uintptr_t SetMaterialID = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BevelDistance", 0x68, "DoubleProperty"},
            {"Subdivisions", 0x70, "IntProperty"},
            {"RoundWeight", 0x74, "FloatProperty"},
            {"bInferMaterialID", 0x78, "BoolProperty"},
            {"SetMaterialID", 0x7C, "IntProperty"},
        }};
    };

    struct PolyEditCommonProperties
    {
        static constexpr std::string_view Name = "PolyEditCommonProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowWireframe = 0x68;
            static constexpr std::uintptr_t bShowSelectableCorners = 0x69;
            static constexpr std::uintptr_t bGizmoVisible = 0x6A;
            static constexpr std::uintptr_t LocalFrameMode = 0x6C;
            static constexpr std::uintptr_t bLockRotation = 0x70;
            static constexpr std::uintptr_t bLocalCoordSystem = 0x71;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bShowWireframe", 0x68, "BoolProperty"},
            {"bShowSelectableCorners", 0x69, "BoolProperty"},
            {"bGizmoVisible", 0x6A, "BoolProperty"},
            {"LocalFrameMode", 0x6C, "EnumProperty"},
            {"bLockRotation", 0x70, "BoolProperty"},
            {"bLocalCoordSystem", 0x71, "BoolProperty"},
        }};
    };

    struct PolyEditCutFacesActivity
    {
        static constexpr std::string_view Name = "PolyEditCutFacesActivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolActivity";
        struct Offsets
        {
            static constexpr std::uintptr_t CutProperties = 0x40;
            static constexpr std::uintptr_t EditPreview = 0x48;
            static constexpr std::uintptr_t SurfacePathMechanic = 0x50;
            static constexpr std::uintptr_t ActivityContext = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CutProperties", 0x40, "ObjectProperty"},
            {"EditPreview", 0x48, "ObjectProperty"},
            {"SurfacePathMechanic", 0x50, "ObjectProperty"},
            {"ActivityContext", 0x58, "ObjectProperty"},
        }};
    };

    struct PolyEditCutProperties
    {
        static constexpr std::string_view Name = "PolyEditCutProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t orientation = 0x68;
            static constexpr std::uintptr_t bSnapToVertices = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"orientation", 0x68, "EnumProperty"},
            {"bSnapToVertices", 0x6C, "BoolProperty"},
        }};
    };

    struct PolyEditExtrudeActivity
    {
        static constexpr std::string_view Name = "PolyEditExtrudeActivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolActivity";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtrudeProperties = 0x50;
            static constexpr std::uintptr_t OffsetProperties = 0x58;
            static constexpr std::uintptr_t PushPullProperties = 0x60;
            static constexpr std::uintptr_t ExtrudeHeightMechanic = 0x68;
            static constexpr std::uintptr_t ActivityContext = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExtrudeProperties", 0x50, "ObjectProperty"},
            {"OffsetProperties", 0x58, "ObjectProperty"},
            {"PushPullProperties", 0x60, "ObjectProperty"},
            {"ExtrudeHeightMechanic", 0x68, "ObjectProperty"},
            {"ActivityContext", 0x70, "ObjectProperty"},
        }};
    };

    struct PolyEditExtrudeEdgeActivity
    {
        static constexpr std::string_view Name = "PolyEditExtrudeEdgeActivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolActivity";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x38;
            static constexpr std::uintptr_t ActivityContext = 0x40;
            static constexpr std::uintptr_t ExtrudeFrameProxy = 0x48;
            static constexpr std::uintptr_t ExtrudeFrameGizmo = 0x50;
            static constexpr std::uintptr_t SingleDirectionProxy = 0x58;
            static constexpr std::uintptr_t SingleDirectionGizmo = 0x60;
            static constexpr std::uintptr_t PreviewGeometry = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Settings", 0x38, "ObjectProperty"},
            {"ActivityContext", 0x40, "ObjectProperty"},
            {"ExtrudeFrameProxy", 0x48, "ObjectProperty"},
            {"ExtrudeFrameGizmo", 0x50, "ObjectProperty"},
            {"SingleDirectionProxy", 0x58, "ObjectProperty"},
            {"SingleDirectionGizmo", 0x60, "ObjectProperty"},
            {"PreviewGeometry", 0x68, "ObjectProperty"},
        }};
    };

    struct PolyEditExtrudeEdgeActivityProperties
    {
        static constexpr std::string_view Name = "PolyEditExtrudeEdgeActivityProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectionMode = 0x68;
            static constexpr std::uintptr_t DistanceMode = 0x6C;
            static constexpr std::uintptr_t Distance = 0x70;
            static constexpr std::uintptr_t bUseUnselectedForFrames = 0x78;
            static constexpr std::uintptr_t bAdjustToExtrudeEvenly = 0x79;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DirectionMode", 0x68, "EnumProperty"},
            {"DistanceMode", 0x6C, "EnumProperty"},
            {"Distance", 0x70, "DoubleProperty"},
            {"bUseUnselectedForFrames", 0x78, "BoolProperty"},
            {"bAdjustToExtrudeEvenly", 0x79, "BoolProperty"},
        }};
    };

    struct PolyEditExtrudeProperties
    {
        static constexpr std::string_view Name = "PolyEditExtrudeProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceMode = 0x68;
            static constexpr std::uintptr_t Distance = 0x70;
            static constexpr std::uintptr_t DirectionMode = 0x78;
            static constexpr std::uintptr_t Direction = 0x7C;
            static constexpr std::uintptr_t MaxDistanceScaleFactor = 0x80;
            static constexpr std::uintptr_t bShellsToSolids = 0x88;
            static constexpr std::uintptr_t MeasureDirection = 0x8C;
            static constexpr std::uintptr_t bUseColinearityForSettingBorderGroups = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DistanceMode", 0x68, "EnumProperty"},
            {"Distance", 0x70, "DoubleProperty"},
            {"DirectionMode", 0x78, "EnumProperty"},
            {"Direction", 0x7C, "EnumProperty"},
            {"MaxDistanceScaleFactor", 0x80, "DoubleProperty"},
            {"bShellsToSolids", 0x88, "BoolProperty"},
            {"MeasureDirection", 0x8C, "EnumProperty"},
            {"bUseColinearityForSettingBorderGroups", 0x90, "BoolProperty"},
        }};
    };

    struct PolyEditInsertEdgeActivity
    {
        static constexpr std::string_view Name = "PolyEditInsertEdgeActivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolActivity";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x48;
            static constexpr std::uintptr_t ActivityContext = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x48, "ObjectProperty"},
            {"ActivityContext", 0x50, "ObjectProperty"},
        }};
    };

    struct PolyEditInsertEdgeLoopActivity
    {
        static constexpr std::string_view Name = "PolyEditInsertEdgeLoopActivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolActivity";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x48;
            static constexpr std::uintptr_t ActivityContext = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x48, "ObjectProperty"},
            {"ActivityContext", 0x50, "ObjectProperty"},
        }};
    };

    struct PolyEditInsetOutsetActivity
    {
        static constexpr std::string_view Name = "PolyEditInsetOutsetActivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolActivity";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x40;
            static constexpr std::uintptr_t EditPreview = 0x50;
            static constexpr std::uintptr_t CurveDistMechanic = 0x58;
            static constexpr std::uintptr_t ActivityContext = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Settings", 0x40, "ObjectProperty"},
            {"EditPreview", 0x50, "ObjectProperty"},
            {"CurveDistMechanic", 0x58, "ObjectProperty"},
            {"ActivityContext", 0x60, "ObjectProperty"},
        }};
    };

    struct PolyEditInsetOutsetProperties
    {
        static constexpr std::string_view Name = "PolyEditInsetOutsetProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Softness = 0x68;
            static constexpr std::uintptr_t bBoundaryOnly = 0x6C;
            static constexpr std::uintptr_t AreaScale = 0x70;
            static constexpr std::uintptr_t bReproject = 0x74;
            static constexpr std::uintptr_t bOutset = 0x75;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Softness", 0x68, "FloatProperty"},
            {"bBoundaryOnly", 0x6C, "BoolProperty"},
            {"AreaScale", 0x70, "FloatProperty"},
            {"bReproject", 0x74, "BoolProperty"},
            {"bOutset", 0x75, "BoolProperty"},
        }};
    };

    struct PolyEditOffsetProperties
    {
        static constexpr std::string_view Name = "PolyEditOffsetProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceMode = 0x68;
            static constexpr std::uintptr_t Distance = 0x70;
            static constexpr std::uintptr_t DirectionMode = 0x78;
            static constexpr std::uintptr_t MaxDistanceScaleFactor = 0x80;
            static constexpr std::uintptr_t bShellsToSolids = 0x88;
            static constexpr std::uintptr_t MeasureDirection = 0x8C;
            static constexpr std::uintptr_t bUseColinearityForSettingBorderGroups = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DistanceMode", 0x68, "EnumProperty"},
            {"Distance", 0x70, "DoubleProperty"},
            {"DirectionMode", 0x78, "EnumProperty"},
            {"MaxDistanceScaleFactor", 0x80, "DoubleProperty"},
            {"bShellsToSolids", 0x88, "BoolProperty"},
            {"MeasureDirection", 0x8C, "EnumProperty"},
            {"bUseColinearityForSettingBorderGroups", 0x90, "BoolProperty"},
        }};
    };

    struct PolyEditPlanarProjectionUVActivity
    {
        static constexpr std::string_view Name = "PolyEditPlanarProjectionUVActivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolActivity";
        struct Offsets
        {
            static constexpr std::uintptr_t SetUVProperties = 0x40;
            static constexpr std::uintptr_t EditPreview = 0x48;
            static constexpr std::uintptr_t SurfacePathMechanic = 0x50;
            static constexpr std::uintptr_t ActivityContext = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SetUVProperties", 0x40, "ObjectProperty"},
            {"EditPreview", 0x48, "ObjectProperty"},
            {"SurfacePathMechanic", 0x50, "ObjectProperty"},
            {"ActivityContext", 0x58, "ObjectProperty"},
        }};
    };

    struct PolyEditPushPullProperties
    {
        static constexpr std::string_view Name = "PolyEditPushPullProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceMode = 0x68;
            static constexpr std::uintptr_t Distance = 0x70;
            static constexpr std::uintptr_t DirectionMode = 0x78;
            static constexpr std::uintptr_t SingleDirection = 0x7C;
            static constexpr std::uintptr_t MaxDistanceScaleFactor = 0x80;
            static constexpr std::uintptr_t bShellsToSolids = 0x88;
            static constexpr std::uintptr_t MeasureDirection = 0x8C;
            static constexpr std::uintptr_t bUseColinearityForSettingBorderGroups = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DistanceMode", 0x68, "EnumProperty"},
            {"Distance", 0x70, "DoubleProperty"},
            {"DirectionMode", 0x78, "EnumProperty"},
            {"SingleDirection", 0x7C, "EnumProperty"},
            {"MaxDistanceScaleFactor", 0x80, "DoubleProperty"},
            {"bShellsToSolids", 0x88, "BoolProperty"},
            {"MeasureDirection", 0x8C, "EnumProperty"},
            {"bUseColinearityForSettingBorderGroups", 0x90, "BoolProperty"},
        }};
    };

    struct PolyEditSetUVProperties
    {
        static constexpr std::string_view Name = "PolyEditSetUVProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowMaterial = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bShowMaterial", 0x68, "BoolProperty"},
        }};
    };

    struct PolyEditTopologyProperties
    {
        static constexpr std::string_view Name = "PolyEditTopologyProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EditMeshPolygonsToolActionPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bAddExtraCorners = 0x70;
            static constexpr std::uintptr_t ExtraCornerAngleThresholdDegrees = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAddExtraCorners", 0x70, "BoolProperty"},
            {"ExtraCornerAngleThresholdDegrees", 0x78, "DoubleProperty"},
        }};
    };

    struct ProceduralArrowToolProperties
    {
        static constexpr std::string_view Name = "ProceduralArrowToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralShapeToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t ShaftRadius = 0x78;
            static constexpr std::uintptr_t ShaftHeight = 0x7C;
            static constexpr std::uintptr_t HeadRadius = 0x80;
            static constexpr std::uintptr_t HeadHeight = 0x84;
            static constexpr std::uintptr_t RadialSlices = 0x88;
            static constexpr std::uintptr_t HeightSubdivisions = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ShaftRadius", 0x78, "FloatProperty"},
            {"ShaftHeight", 0x7C, "FloatProperty"},
            {"HeadRadius", 0x80, "FloatProperty"},
            {"HeadHeight", 0x84, "FloatProperty"},
            {"RadialSlices", 0x88, "IntProperty"},
            {"HeightSubdivisions", 0x8C, "IntProperty"},
        }};
    };

    struct ProceduralBoxToolProperties
    {
        static constexpr std::string_view Name = "ProceduralBoxToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralShapeToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t Width = 0x78;
            static constexpr std::uintptr_t Depth = 0x7C;
            static constexpr std::uintptr_t Height = 0x80;
            static constexpr std::uintptr_t WidthSubdivisions = 0x84;
            static constexpr std::uintptr_t DepthSubdivisions = 0x88;
            static constexpr std::uintptr_t HeightSubdivisions = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Width", 0x78, "FloatProperty"},
            {"Depth", 0x7C, "FloatProperty"},
            {"Height", 0x80, "FloatProperty"},
            {"WidthSubdivisions", 0x84, "IntProperty"},
            {"DepthSubdivisions", 0x88, "IntProperty"},
            {"HeightSubdivisions", 0x8C, "IntProperty"},
        }};
    };

    struct ProceduralCapsuleToolProperties
    {
        static constexpr std::string_view Name = "ProceduralCapsuleToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralShapeToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x78;
            static constexpr std::uintptr_t CylinderLength = 0x7C;
            static constexpr std::uintptr_t HemisphereSlices = 0x80;
            static constexpr std::uintptr_t CylinderSlices = 0x84;
            static constexpr std::uintptr_t CylinderSubdivisions = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Radius", 0x78, "FloatProperty"},
            {"CylinderLength", 0x7C, "FloatProperty"},
            {"HemisphereSlices", 0x80, "IntProperty"},
            {"CylinderSlices", 0x84, "IntProperty"},
            {"CylinderSubdivisions", 0x88, "IntProperty"},
        }};
    };

    struct ProceduralConeToolProperties
    {
        static constexpr std::string_view Name = "ProceduralConeToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralShapeToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x78;
            static constexpr std::uintptr_t Height = 0x7C;
            static constexpr std::uintptr_t RadialSlices = 0x80;
            static constexpr std::uintptr_t HeightSubdivisions = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Radius", 0x78, "FloatProperty"},
            {"Height", 0x7C, "FloatProperty"},
            {"RadialSlices", 0x80, "IntProperty"},
            {"HeightSubdivisions", 0x84, "IntProperty"},
        }};
    };

    struct ProceduralCylinderToolProperties
    {
        static constexpr std::string_view Name = "ProceduralCylinderToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralShapeToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x78;
            static constexpr std::uintptr_t Height = 0x7C;
            static constexpr std::uintptr_t RadialSlices = 0x80;
            static constexpr std::uintptr_t HeightSubdivisions = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Radius", 0x78, "FloatProperty"},
            {"Height", 0x7C, "FloatProperty"},
            {"RadialSlices", 0x80, "IntProperty"},
            {"HeightSubdivisions", 0x84, "IntProperty"},
        }};
    };

    struct ProceduralDiscToolProperties
    {
        static constexpr std::string_view Name = "ProceduralDiscToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralShapeToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t DiscType = 0x78;
            static constexpr std::uintptr_t Radius = 0x7C;
            static constexpr std::uintptr_t RadialSlices = 0x80;
            static constexpr std::uintptr_t RadialSubdivisions = 0x84;
            static constexpr std::uintptr_t HoleRadius = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DiscType", 0x78, "EnumProperty"},
            {"Radius", 0x7C, "FloatProperty"},
            {"RadialSlices", 0x80, "IntProperty"},
            {"RadialSubdivisions", 0x84, "IntProperty"},
            {"HoleRadius", 0x88, "FloatProperty"},
        }};
    };

    struct ProceduralRectangleToolProperties
    {
        static constexpr std::string_view Name = "ProceduralRectangleToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralShapeToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t RectangleType = 0x78;
            static constexpr std::uintptr_t Width = 0x7C;
            static constexpr std::uintptr_t Depth = 0x80;
            static constexpr std::uintptr_t WidthSubdivisions = 0x84;
            static constexpr std::uintptr_t DepthSubdivisions = 0x88;
            static constexpr std::uintptr_t bMaintainDimension = 0x8C;
            static constexpr std::uintptr_t CornerRadius = 0x90;
            static constexpr std::uintptr_t CornerSlices = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"RectangleType", 0x78, "EnumProperty"},
            {"Width", 0x7C, "FloatProperty"},
            {"Depth", 0x80, "FloatProperty"},
            {"WidthSubdivisions", 0x84, "IntProperty"},
            {"DepthSubdivisions", 0x88, "IntProperty"},
            {"bMaintainDimension", 0x8C, "BoolProperty"},
            {"CornerRadius", 0x90, "FloatProperty"},
            {"CornerSlices", 0x94, "IntProperty"},
        }};
    };

    struct ProceduralShapeToolProperties
    {
        static constexpr std::string_view Name = "ProceduralShapeToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t PolygroupMode = 0x68;
            static constexpr std::uintptr_t TargetSurface = 0x69;
            static constexpr std::uintptr_t PivotLocation = 0x6A;
            static constexpr std::uintptr_t Rotation = 0x6C;
            static constexpr std::uintptr_t bAlignToNormal = 0x70;
            static constexpr std::uintptr_t bShowGizmo = 0x71;
            static constexpr std::uintptr_t bShowGizmoOptions = 0x72;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PolygroupMode", 0x68, "EnumProperty"},
            {"TargetSurface", 0x69, "EnumProperty"},
            {"PivotLocation", 0x6A, "EnumProperty"},
            {"Rotation", 0x6C, "FloatProperty"},
            {"bAlignToNormal", 0x70, "BoolProperty"},
            {"bShowGizmo", 0x71, "BoolProperty"},
            {"bShowGizmoOptions", 0x72, "BoolProperty"},
        }};
    };

    struct ProceduralSphereToolProperties
    {
        static constexpr std::string_view Name = "ProceduralSphereToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralShapeToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x78;
            static constexpr std::uintptr_t SubdivisionType = 0x7C;
            static constexpr std::uintptr_t Subdivisions = 0x80;
            static constexpr std::uintptr_t HorizontalSlices = 0x84;
            static constexpr std::uintptr_t VerticalSlices = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Radius", 0x78, "FloatProperty"},
            {"SubdivisionType", 0x7C, "EnumProperty"},
            {"Subdivisions", 0x80, "IntProperty"},
            {"HorizontalSlices", 0x84, "IntProperty"},
            {"VerticalSlices", 0x88, "IntProperty"},
        }};
    };

    struct ProceduralStairsToolProperties
    {
        static constexpr std::string_view Name = "ProceduralStairsToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralShapeToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t StairsType = 0x78;
            static constexpr std::uintptr_t NumSteps = 0x7C;
            static constexpr std::uintptr_t StepWidth = 0x80;
            static constexpr std::uintptr_t StepHeight = 0x84;
            static constexpr std::uintptr_t StepDepth = 0x88;
            static constexpr std::uintptr_t CurveAngle = 0x8C;
            static constexpr std::uintptr_t SpiralAngle = 0x90;
            static constexpr std::uintptr_t InnerRadius = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StairsType", 0x78, "EnumProperty"},
            {"NumSteps", 0x7C, "IntProperty"},
            {"StepWidth", 0x80, "FloatProperty"},
            {"StepHeight", 0x84, "FloatProperty"},
            {"StepDepth", 0x88, "FloatProperty"},
            {"CurveAngle", 0x8C, "FloatProperty"},
            {"SpiralAngle", 0x90, "FloatProperty"},
            {"InnerRadius", 0x94, "FloatProperty"},
        }};
    };

    struct ProceduralTorusToolProperties
    {
        static constexpr std::string_view Name = "ProceduralTorusToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralShapeToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t MajorRadius = 0x78;
            static constexpr std::uintptr_t MinorRadius = 0x7C;
            static constexpr std::uintptr_t MajorSlices = 0x80;
            static constexpr std::uintptr_t MinorSlices = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MajorRadius", 0x78, "FloatProperty"},
            {"MinorRadius", 0x7C, "FloatProperty"},
            {"MajorSlices", 0x80, "IntProperty"},
            {"MinorSlices", 0x84, "IntProperty"},
        }};
    };

    struct ProjectToTargetTool
    {
        static constexpr std::string_view Name = "ProjectToTargetTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RemeshMeshTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BasicProperties = 0xD8;
            static constexpr std::uintptr_t WeightMapProperties = 0xE0;
            static constexpr std::uintptr_t MeshStatisticsProperties = 0xE8;
            static constexpr std::uintptr_t Preview = 0xF0;
            static constexpr std::uintptr_t MeshElementsDisplay = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BasicProperties", 0xD8, "ObjectProperty"},
            {"WeightMapProperties", 0xE0, "ObjectProperty"},
            {"MeshStatisticsProperties", 0xE8, "ObjectProperty"},
            {"Preview", 0xF0, "ObjectProperty"},
            {"MeshElementsDisplay", 0xF8, "ObjectProperty"},
        }};
    };

    struct ProjectToTargetToolBuilder
    {
        static constexpr std::string_view Name = "ProjectToTargetToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ProjectToTargetToolProperties
    {
        static constexpr std::string_view Name = "ProjectToTargetToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RemeshMeshToolProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t bWorldSpace = 0xA0;
            static constexpr std::uintptr_t bParallel = 0xA1;
            static constexpr std::uintptr_t FaceProjectionPassesPerRemeshIteration = 0xA4;
            static constexpr std::uintptr_t SurfaceProjectionSpeed = 0xA8;
            static constexpr std::uintptr_t NormalAlignmentSpeed = 0xAC;
            static constexpr std::uintptr_t bSmoothInFillAreas = 0xB0;
            static constexpr std::uintptr_t FillAreaDistanceMultiplier = 0xB4;
            static constexpr std::uintptr_t FillAreaSmoothMultiplier = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bWorldSpace", 0xA0, "BoolProperty"},
            {"bParallel", 0xA1, "BoolProperty"},
            {"FaceProjectionPassesPerRemeshIteration", 0xA4, "IntProperty"},
            {"SurfaceProjectionSpeed", 0xA8, "FloatProperty"},
            {"NormalAlignmentSpeed", 0xAC, "FloatProperty"},
            {"bSmoothInFillAreas", 0xB0, "BoolProperty"},
            {"FillAreaDistanceMultiplier", 0xB4, "FloatProperty"},
            {"FillAreaSmoothMultiplier", 0xB8, "FloatProperty"},
        }};
    };

    struct PullKelvinletBrushOpProps
    {
        static constexpr std::string_view Name = "PullKelvinletBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseKelvinletBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Falloff = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Falloff", 0x80, "FloatProperty"},
        }};
    };

    struct RecomputeUVsTool
    {
        static constexpr std::string_view Name = "RecomputeUVsTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t UVChannelProperties = 0xD0;
            static constexpr std::uintptr_t Settings = 0xD8;
            static constexpr std::uintptr_t PolygroupLayerProperties = 0xE0;
            static constexpr std::uintptr_t MaterialSettings = 0xE8;
            static constexpr std::uintptr_t bCreateUVLayoutViewOnSetup = 0xF0;
            static constexpr std::uintptr_t UVLayoutView = 0xF8;
            static constexpr std::uintptr_t RecomputeUVsOpFactory = 0x100;
            static constexpr std::uintptr_t Preview = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"UVChannelProperties", 0xD0, "ObjectProperty"},
            {"Settings", 0xD8, "ObjectProperty"},
            {"PolygroupLayerProperties", 0xE0, "ObjectProperty"},
            {"MaterialSettings", 0xE8, "ObjectProperty"},
            {"bCreateUVLayoutViewOnSetup", 0xF0, "BoolProperty"},
            {"UVLayoutView", 0xF8, "ObjectProperty"},
            {"RecomputeUVsOpFactory", 0x100, "ObjectProperty"},
            {"Preview", 0x108, "ObjectProperty"},
        }};
    };

    struct RecomputeUVsToolBuilder
    {
        static constexpr std::string_view Name = "RecomputeUVsToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RemeshMeshTool
    {
        static constexpr std::string_view Name = "RemeshMeshTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BasicProperties = 0xD8;
            static constexpr std::uintptr_t WeightMapProperties = 0xE0;
            static constexpr std::uintptr_t MeshStatisticsProperties = 0xE8;
            static constexpr std::uintptr_t Preview = 0xF0;
            static constexpr std::uintptr_t MeshElementsDisplay = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BasicProperties", 0xD8, "ObjectProperty"},
            {"WeightMapProperties", 0xE0, "ObjectProperty"},
            {"MeshStatisticsProperties", 0xE8, "ObjectProperty"},
            {"Preview", 0xF0, "ObjectProperty"},
            {"MeshElementsDisplay", 0xF8, "ObjectProperty"},
        }};
    };

    struct RemeshMeshToolBuilder
    {
        static constexpr std::string_view Name = "RemeshMeshToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RemeshMeshToolProperties
    {
        static constexpr std::string_view Name = "RemeshMeshToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RemeshProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetTriangleCount = 0x78;
            static constexpr std::uintptr_t SmoothingType = 0x7C;
            static constexpr std::uintptr_t bDiscardAttributes = 0x7D;
            static constexpr std::uintptr_t bShowGroupColors = 0x7E;
            static constexpr std::uintptr_t RemeshType = 0x7F;
            static constexpr std::uintptr_t RemeshIterations = 0x80;
            static constexpr std::uintptr_t MaxRemeshIterations = 0x84;
            static constexpr std::uintptr_t ExtraProjectionIterations = 0x88;
            static constexpr std::uintptr_t bUseTargetEdgeLength = 0x8C;
            static constexpr std::uintptr_t TargetEdgeLength = 0x90;
            static constexpr std::uintptr_t bReproject = 0x94;
            static constexpr std::uintptr_t bReprojectConstraints = 0x95;
            static constexpr std::uintptr_t BoundaryCornerAngleThreshold = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"TargetTriangleCount", 0x78, "IntProperty"},
            {"SmoothingType", 0x7C, "EnumProperty"},
            {"bDiscardAttributes", 0x7D, "BoolProperty"},
            {"bShowGroupColors", 0x7E, "BoolProperty"},
            {"RemeshType", 0x7F, "EnumProperty"},
            {"RemeshIterations", 0x80, "IntProperty"},
            {"MaxRemeshIterations", 0x84, "IntProperty"},
            {"ExtraProjectionIterations", 0x88, "IntProperty"},
            {"bUseTargetEdgeLength", 0x8C, "BoolProperty"},
            {"TargetEdgeLength", 0x90, "FloatProperty"},
            {"bReproject", 0x94, "BoolProperty"},
            {"bReprojectConstraints", 0x95, "BoolProperty"},
            {"BoundaryCornerAngleThreshold", 0x98, "FloatProperty"},
        }};
    };

    struct RemeshProperties
    {
        static constexpr std::string_view Name = "RemeshProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshConstraintProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t SmoothingStrength = 0x70;
            static constexpr std::uintptr_t bFlips = 0x74;
            static constexpr std::uintptr_t bSplits = 0x75;
            static constexpr std::uintptr_t bCollapses = 0x76;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SmoothingStrength", 0x70, "FloatProperty"},
            {"bFlips", 0x74, "BoolProperty"},
            {"bSplits", 0x75, "BoolProperty"},
            {"bCollapses", 0x76, "BoolProperty"},
        }};
    };

    struct RemoveOccludedTrianglesAdvancedProperties
    {
        static constexpr std::string_view Name = "RemoveOccludedTrianglesAdvancedProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct RemoveOccludedTrianglesOperatorFactory
    {
        static constexpr std::string_view Name = "RemoveOccludedTrianglesOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Tool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tool", 0x30, "ObjectProperty"},
        }};
    };

    struct RemoveOccludedTrianglesTool
    {
        static constexpr std::string_view Name = "RemoveOccludedTrianglesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BasicProperties = 0xD0;
            static constexpr std::uintptr_t PolygroupLayersProperties = 0xD8;
            static constexpr std::uintptr_t AdvancedProperties = 0xE0;
            static constexpr std::uintptr_t Previews = 0xE8;
            static constexpr std::uintptr_t PreviewCopies = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BasicProperties", 0xD0, "ObjectProperty"},
            {"PolygroupLayersProperties", 0xD8, "ObjectProperty"},
            {"AdvancedProperties", 0xE0, "ObjectProperty"},
            {"Previews", 0xE8, "ArrayProperty"},
            {"PreviewCopies", 0xF8, "ArrayProperty"},
        }};
    };

    struct RemoveOccludedTrianglesToolBuilder
    {
        static constexpr std::string_view Name = "RemoveOccludedTrianglesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RemoveOccludedTrianglesToolProperties
    {
        static constexpr std::string_view Name = "RemoveOccludedTrianglesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t OcclusionTestMethod = 0x68;
            static constexpr std::uintptr_t TriangleSampling = 0x69;
            static constexpr std::uintptr_t WindingIsoValue = 0x70;
            static constexpr std::uintptr_t AddRandomRays = 0x78;
            static constexpr std::uintptr_t AddTriangleSamples = 0x7C;
            static constexpr std::uintptr_t bOnlySelfOcclude = 0x80;
            static constexpr std::uintptr_t ShrinkRemoval = 0x84;
            static constexpr std::uintptr_t MinAreaIsland = 0x88;
            static constexpr std::uintptr_t MinTriCountIsland = 0x90;
            static constexpr std::uintptr_t Action = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OcclusionTestMethod", 0x68, "EnumProperty"},
            {"TriangleSampling", 0x69, "EnumProperty"},
            {"WindingIsoValue", 0x70, "DoubleProperty"},
            {"AddRandomRays", 0x78, "IntProperty"},
            {"AddTriangleSamples", 0x7C, "IntProperty"},
            {"bOnlySelfOcclude", 0x80, "BoolProperty"},
            {"ShrinkRemoval", 0x84, "IntProperty"},
            {"MinAreaIsland", 0x88, "DoubleProperty"},
            {"MinTriCountIsland", 0x90, "IntProperty"},
            {"Action", 0x94, "EnumProperty"},
        }};
    };

    struct RetriangulateGeometrySelectionCommand
    {
        static constexpr std::string_view Name = "RetriangulateGeometrySelectionCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GeometrySelectionEditCommand";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RevolveOperatorFactory
    {
        static constexpr std::string_view Name = "RevolveOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RevolveTool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RevolveTool", 0x30, "ObjectProperty"},
        }};
    };

    struct RevolveProperties
    {
        static constexpr std::string_view Name = "RevolveProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t RevolveDegreesClamped = 0x68;
            static constexpr std::uintptr_t RevolveDegrees = 0x70;
            static constexpr std::uintptr_t RevolveDegreesOffset = 0x78;
            static constexpr std::uintptr_t StepsMaxDegrees = 0x80;
            static constexpr std::uintptr_t bExplicitSteps = 0x88;
            static constexpr std::uintptr_t NumExplicitSteps = 0x8C;
            static constexpr std::uintptr_t HeightOffsetPerDegree = 0x90;
            static constexpr std::uintptr_t bReverseRevolutionDirection = 0x98;
            static constexpr std::uintptr_t bFlipMesh = 0x99;
            static constexpr std::uintptr_t bSharpNormals = 0x9A;
            static constexpr std::uintptr_t SharpNormalsDegreeThreshold = 0xA0;
            static constexpr std::uintptr_t bPathAtMidpointOfStep = 0xA8;
            static constexpr std::uintptr_t PolygroupMode = 0xA9;
            static constexpr std::uintptr_t QuadSplitMode = 0xAA;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"RevolveDegreesClamped", 0x68, "DoubleProperty"},
            {"RevolveDegrees", 0x70, "DoubleProperty"},
            {"RevolveDegreesOffset", 0x78, "DoubleProperty"},
            {"StepsMaxDegrees", 0x80, "DoubleProperty"},
            {"bExplicitSteps", 0x88, "BoolProperty"},
            {"NumExplicitSteps", 0x8C, "IntProperty"},
            {"HeightOffsetPerDegree", 0x90, "DoubleProperty"},
            {"bReverseRevolutionDirection", 0x98, "BoolProperty"},
            {"bFlipMesh", 0x99, "BoolProperty"},
            {"bSharpNormals", 0x9A, "BoolProperty"},
            {"SharpNormalsDegreeThreshold", 0xA0, "DoubleProperty"},
            {"bPathAtMidpointOfStep", 0xA8, "BoolProperty"},
            {"PolygroupMode", 0xA9, "EnumProperty"},
            {"QuadSplitMode", 0xAA, "EnumProperty"},
        }};
    };

    struct RevolveToolProperties
    {
        static constexpr std::string_view Name = "RevolveToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RevolveProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t CapFillMode = 0xD8;
            static constexpr std::uintptr_t bClosePathToAxis = 0xD9;
            static constexpr std::uintptr_t DrawPlaneOrigin = 0xE0;
            static constexpr std::uintptr_t DrawPlaneOrientation = 0xF8;
            static constexpr std::uintptr_t bEnableSnapping = 0x110;
            static constexpr std::uintptr_t bAllowedToEditDrawPlane = 0x111;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CapFillMode", 0xD8, "EnumProperty"},
            {"bClosePathToAxis", 0xD9, "BoolProperty"},
            {"DrawPlaneOrigin", 0xE0, "StructProperty"},
            {"DrawPlaneOrientation", 0xF8, "StructProperty"},
            {"bEnableSnapping", 0x110, "BoolProperty"},
            {"bAllowedToEditDrawPlane", 0x111, "BoolProperty"},
        }};
    };

    struct ScaleKelvinletBrushOpProps
    {
        static constexpr std::string_view Name = "ScaleKelvinletBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseKelvinletBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x80;
            static constexpr std::uintptr_t Falloff = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Strength", 0x80, "FloatProperty"},
            {"Falloff", 0x84, "FloatProperty"},
        }};
    };

    struct SculptBrushProperties
    {
        static constexpr std::string_view Name = "SculptBrushProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t StrokeType = 0x68;
            static constexpr std::uintptr_t BrushSize = 0x6C;
            static constexpr std::uintptr_t BrushFalloffAmount = 0x84;
            static constexpr std::uintptr_t bShowFalloff = 0x88;
            static constexpr std::uintptr_t Depth = 0x8C;
            static constexpr std::uintptr_t bHitBackFaces = 0x90;
            static constexpr std::uintptr_t FlowRate = 0x94;
            static constexpr std::uintptr_t RayDensity = 0x98;
            static constexpr std::uintptr_t Spacing = 0x9C;
            static constexpr std::uintptr_t Lazyness = 0xA0;
            static constexpr std::uintptr_t bShowPerBrushProps = 0xA4;
            static constexpr std::uintptr_t bShowLazyness = 0xA5;
            static constexpr std::uintptr_t bShowFlowRate = 0xA6;
            static constexpr std::uintptr_t bShowSpacing = 0xA7;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"StrokeType", 0x68, "EnumProperty"},
            {"BrushSize", 0x6C, "StructProperty"},
            {"BrushFalloffAmount", 0x84, "FloatProperty"},
            {"bShowFalloff", 0x88, "BoolProperty"},
            {"Depth", 0x8C, "FloatProperty"},
            {"bHitBackFaces", 0x90, "BoolProperty"},
            {"FlowRate", 0x94, "FloatProperty"},
            {"RayDensity", 0x98, "FloatProperty"},
            {"Spacing", 0x9C, "FloatProperty"},
            {"Lazyness", 0xA0, "FloatProperty"},
            {"bShowPerBrushProps", 0xA4, "BoolProperty"},
            {"bShowLazyness", 0xA5, "BoolProperty"},
            {"bShowFlowRate", 0xA6, "BoolProperty"},
            {"bShowSpacing", 0xA7, "BoolProperty"},
        }};
    };

    struct SculptMaxBrushOpProps
    {
        static constexpr std::string_view Name = "SculptMaxBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t MaxHeight = 0x78;
            static constexpr std::uintptr_t bUseFixedHeight = 0x7C;
            static constexpr std::uintptr_t FixedHeight = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"MaxHeight", 0x78, "FloatProperty"},
            {"bUseFixedHeight", 0x7C, "BoolProperty"},
            {"FixedHeight", 0x80, "FloatProperty"},
        }};
    };

    struct SculptMaxBrushProperties
    {
        static constexpr std::string_view Name = "SculptMaxBrushProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxHeight = 0x68;
            static constexpr std::uintptr_t bFreezeCurrentHeight = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxHeight", 0x68, "FloatProperty"},
            {"bFreezeCurrentHeight", 0x6C, "BoolProperty"},
        }};
    };

    struct SecondarySmoothBrushOpProps
    {
        static constexpr std::string_view Name = "SecondarySmoothBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseSmoothBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t Iterations = 0x78;
            static constexpr std::uintptr_t bPreserveUVFlow = 0x7C;
            static constexpr std::uintptr_t bFavorPolyGroupEdges = 0x7D;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"Iterations", 0x78, "IntProperty"},
            {"bPreserveUVFlow", 0x7C, "BoolProperty"},
            {"bFavorPolyGroupEdges", 0x7D, "BoolProperty"},
        }};
    };

    struct SelectiveTessellationProperties
    {
        static constexpr std::string_view Name = "SelectiveTessellationProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionType = 0x68;
            static constexpr std::uintptr_t ActiveMaterial = 0x6C;
            static constexpr std::uintptr_t MaterialIDList = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SelectionType", 0x68, "EnumProperty"},
            {"ActiveMaterial", 0x6C, "NameProperty"},
            {"MaterialIDList", 0x70, "ArrayProperty"},
        }};
    };

    struct SharpPullKelvinletBrushOpProps
    {
        static constexpr std::string_view Name = "SharpPullKelvinletBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseKelvinletBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Falloff = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Falloff", 0x80, "FloatProperty"},
        }};
    };

    struct SmoothBrushOpProps
    {
        static constexpr std::string_view Name = "SmoothBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseSmoothBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t Iterations = 0x78;
            static constexpr std::uintptr_t bPreserveUVFlow = 0x7C;
            static constexpr std::uintptr_t bFavorPolyGroupEdges = 0x7D;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"Iterations", 0x78, "IntProperty"},
            {"bPreserveUVFlow", 0x7C, "BoolProperty"},
            {"bFavorPolyGroupEdges", 0x7D, "BoolProperty"},
        }};
    };

    struct SmoothFillBrushOpProps
    {
        static constexpr std::string_view Name = "SmoothFillBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseSmoothBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t bPreserveUVFlow = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"bPreserveUVFlow", 0x78, "BoolProperty"},
        }};
    };

    struct SmoothHoleFillProperties
    {
        static constexpr std::string_view Name = "SmoothHoleFillProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bConstrainToHoleInterior = 0x68;
            static constexpr std::uintptr_t RemeshingExteriorRegionWidth = 0x6C;
            static constexpr std::uintptr_t SmoothingExteriorRegionWidth = 0x70;
            static constexpr std::uintptr_t SmoothingInteriorRegionWidth = 0x74;
            static constexpr std::uintptr_t InteriorSmoothness = 0x78;
            static constexpr std::uintptr_t FillDensityScalar = 0x80;
            static constexpr std::uintptr_t bProjectDuringRemesh = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bConstrainToHoleInterior", 0x68, "BoolProperty"},
            {"RemeshingExteriorRegionWidth", 0x6C, "IntProperty"},
            {"SmoothingExteriorRegionWidth", 0x70, "IntProperty"},
            {"SmoothingInteriorRegionWidth", 0x74, "IntProperty"},
            {"InteriorSmoothness", 0x78, "FloatProperty"},
            {"FillDensityScalar", 0x80, "DoubleProperty"},
            {"bProjectDuringRemesh", 0x88, "BoolProperty"},
        }};
    };

    struct SmoothMeshTool
    {
        static constexpr std::string_view Name = "SmoothMeshTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMeshProcessingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t SmoothProperties = 0x468;
            static constexpr std::uintptr_t IterativeProperties = 0x470;
            static constexpr std::uintptr_t DiffusionProperties = 0x478;
            static constexpr std::uintptr_t ImplicitProperties = 0x480;
            static constexpr std::uintptr_t WeightMapProperties = 0x488;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SmoothProperties", 0x468, "ObjectProperty"},
            {"IterativeProperties", 0x470, "ObjectProperty"},
            {"DiffusionProperties", 0x478, "ObjectProperty"},
            {"ImplicitProperties", 0x480, "ObjectProperty"},
            {"WeightMapProperties", 0x488, "ObjectProperty"},
        }};
    };

    struct SmoothMeshToolBuilder
    {
        static constexpr std::string_view Name = "SmoothMeshToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMeshProcessingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SmoothMeshToolProperties
    {
        static constexpr std::string_view Name = "SmoothMeshToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SmoothingType = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SmoothingType", 0x68, "EnumProperty"},
        }};
    };

    struct SmoothWeightMapSetProperties
    {
        static constexpr std::string_view Name = "SmoothWeightMapSetProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WeightMapSetProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t MinSmoothMultiplier = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MinSmoothMultiplier", 0x88, "FloatProperty"},
        }};
    };

    struct SpaceDeformerOperatorFactory
    {
        static constexpr std::string_view Name = "SpaceDeformerOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SpaceDeformerTool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpaceDeformerTool", 0x30, "ObjectProperty"},
        }};
    };

    struct StandardSculptBrushOpProps
    {
        static constexpr std::string_view Name = "StandardSculptBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
        }};
    };

    struct TrimMeshesToolProperties
    {
        static constexpr std::string_view Name = "TrimMeshesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t WhichMesh = 0x68;
            static constexpr std::uintptr_t TrimSide = 0x69;
            static constexpr std::uintptr_t WindingThreshold = 0x6C;
            static constexpr std::uintptr_t bShowTrimmingMesh = 0x70;
            static constexpr std::uintptr_t OpacityOfTrimmingMesh = 0x74;
            static constexpr std::uintptr_t ColorOfTrimmingMesh = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WhichMesh", 0x68, "EnumProperty"},
            {"TrimSide", 0x69, "EnumProperty"},
            {"WindingThreshold", 0x6C, "FloatProperty"},
            {"bShowTrimmingMesh", 0x70, "BoolProperty"},
            {"OpacityOfTrimmingMesh", 0x74, "FloatProperty"},
            {"ColorOfTrimmingMesh", 0x78, "StructProperty"},
        }};
    };

    struct TwistKelvinletBrushOpProps
    {
        static constexpr std::string_view Name = "TwistKelvinletBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseKelvinletBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x80;
            static constexpr std::uintptr_t Falloff = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Strength", 0x80, "FloatProperty"},
            {"Falloff", 0x84, "FloatProperty"},
        }};
    };

    struct UVLayoutTool
    {
        static constexpr std::string_view Name = "UVLayoutTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t UVChannelProperties = 0xD8;
            static constexpr std::uintptr_t BasicProperties = 0xE0;
            static constexpr std::uintptr_t MaterialSettings = 0xE8;
            static constexpr std::uintptr_t Previews = 0xF0;
            static constexpr std::uintptr_t Factories = 0x100;
            static constexpr std::uintptr_t UVLayoutView = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"UVChannelProperties", 0xD8, "ObjectProperty"},
            {"BasicProperties", 0xE0, "ObjectProperty"},
            {"MaterialSettings", 0xE8, "ObjectProperty"},
            {"Previews", 0xF0, "ArrayProperty"},
            {"Factories", 0x100, "ArrayProperty"},
            {"UVLayoutView", 0x190, "ObjectProperty"},
        }};
    };

    struct UVLayoutToolBuilder
    {
        static constexpr std::string_view Name = "UVLayoutToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UVProjectionOperatorFactory
    {
        static constexpr std::string_view Name = "UVProjectionOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Tool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tool", 0x30, "ObjectProperty"},
        }};
    };

    struct UVProjectionTool
    {
        static constexpr std::string_view Name = "UVProjectionTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t UVChannelProperties = 0x108;
            static constexpr std::uintptr_t BasicProperties = 0x110;
            static constexpr std::uintptr_t EditActions = 0x118;
            static constexpr std::uintptr_t MaterialSettings = 0x120;
            static constexpr std::uintptr_t Preview = 0x128;
            static constexpr std::uintptr_t CheckerMaterial = 0x130;
            static constexpr std::uintptr_t TransformGizmo = 0x138;
            static constexpr std::uintptr_t TransformProxy = 0x140;
            static constexpr std::uintptr_t OperatorFactory = 0x148;
            static constexpr std::uintptr_t EdgeRenderer = 0x150;
            static constexpr std::uintptr_t ClickToSetPlaneBehavior = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"UVChannelProperties", 0x108, "ObjectProperty"},
            {"BasicProperties", 0x110, "ObjectProperty"},
            {"EditActions", 0x118, "ObjectProperty"},
            {"MaterialSettings", 0x120, "ObjectProperty"},
            {"Preview", 0x128, "ObjectProperty"},
            {"CheckerMaterial", 0x130, "ObjectProperty"},
            {"TransformGizmo", 0x138, "ObjectProperty"},
            {"TransformProxy", 0x140, "ObjectProperty"},
            {"OperatorFactory", 0x148, "ObjectProperty"},
            {"EdgeRenderer", 0x150, "ObjectProperty"},
            {"ClickToSetPlaneBehavior", 0x4A8, "ObjectProperty"},
        }};
    };

    struct UVProjectionToolBuilder
    {
        static constexpr std::string_view Name = "UVProjectionToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UVProjectionToolEditActions
    {
        static constexpr std::string_view Name = "UVProjectionToolEditActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct UVProjectionToolProperties
    {
        static constexpr std::string_view Name = "UVProjectionToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectionType = 0x68;
            static constexpr std::uintptr_t Dimensions = 0x70;
            static constexpr std::uintptr_t bProportionalDimensions = 0x88;
            static constexpr std::uintptr_t Initialization = 0x8C;
            static constexpr std::uintptr_t CylinderSplitAngle = 0x90;
            static constexpr std::uintptr_t ExpMapNormalBlending = 0x94;
            static constexpr std::uintptr_t ExpMapSmoothingSteps = 0x98;
            static constexpr std::uintptr_t ExpMapSmoothingAlpha = 0x9C;
            static constexpr std::uintptr_t Rotation = 0xA0;
            static constexpr std::uintptr_t Scale = 0xA8;
            static constexpr std::uintptr_t Translation = 0xB8;
            static constexpr std::uintptr_t SavedDimensions = 0xC8;
            static constexpr std::uintptr_t bSavedProportionalDimensions = 0xE0;
            static constexpr std::uintptr_t SavedTransform = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ProjectionType", 0x68, "EnumProperty"},
            {"Dimensions", 0x70, "StructProperty"},
            {"bProportionalDimensions", 0x88, "BoolProperty"},
            {"Initialization", 0x8C, "EnumProperty"},
            {"CylinderSplitAngle", 0x90, "FloatProperty"},
            {"ExpMapNormalBlending", 0x94, "FloatProperty"},
            {"ExpMapSmoothingSteps", 0x98, "IntProperty"},
            {"ExpMapSmoothingAlpha", 0x9C, "FloatProperty"},
            {"Rotation", 0xA0, "FloatProperty"},
            {"Scale", 0xA8, "StructProperty"},
            {"Translation", 0xB8, "StructProperty"},
            {"SavedDimensions", 0xC8, "StructProperty"},
            {"bSavedProportionalDimensions", 0xE0, "BoolProperty"},
            {"SavedTransform", 0xF0, "StructProperty"},
        }};
    };

    struct VertexBrushAlphaProperties
    {
        static constexpr std::string_view Name = "VertexBrushAlphaProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Alpha = 0x68;
            static constexpr std::uintptr_t RotationAngle = 0x70;
            static constexpr std::uintptr_t bRandomize = 0x74;
            static constexpr std::uintptr_t RandomRange = 0x78;
            static constexpr std::uintptr_t Tool = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Alpha", 0x68, "ObjectProperty"},
            {"RotationAngle", 0x70, "FloatProperty"},
            {"bRandomize", 0x74, "BoolProperty"},
            {"RandomRange", 0x78, "FloatProperty"},
            {"Tool", 0x7C, "WeakObjectProperty"},
        }};
    };

    struct VertexBrushSculptProperties
    {
        static constexpr std::string_view Name = "VertexBrushSculptProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryBrushType = 0x68;
            static constexpr std::uintptr_t PrimaryBrushID = 0x6C;
            static constexpr std::uintptr_t PrimaryFalloffType = 0x70;
            static constexpr std::uintptr_t BrushFilter = 0x71;
            static constexpr std::uintptr_t bFreezeTarget = 0x72;
            static constexpr std::uintptr_t bLockBoundaries = 0x73;
            static constexpr std::uintptr_t StampOpacity = 0x74;
            static constexpr std::uintptr_t bCanFreezeTarget = 0x78;
            static constexpr std::uintptr_t Tool = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PrimaryBrushType", 0x68, "EnumProperty"},
            {"PrimaryBrushID", 0x6C, "IntProperty"},
            {"PrimaryFalloffType", 0x70, "EnumProperty"},
            {"BrushFilter", 0x71, "EnumProperty"},
            {"bFreezeTarget", 0x72, "BoolProperty"},
            {"bLockBoundaries", 0x73, "BoolProperty"},
            {"StampOpacity", 0x74, "FloatProperty"},
            {"bCanFreezeTarget", 0x78, "BoolProperty"},
            {"Tool", 0x7C, "WeakObjectProperty"},
        }};
    };

    struct VertexColorBaseBrushOpProps
    {
        static constexpr std::string_view Name = "VertexColorBaseBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t BlendMode = 0x78;
            static constexpr std::uintptr_t bApplyFalloff = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"BlendMode", 0x78, "EnumProperty"},
            {"bApplyFalloff", 0x7C, "BoolProperty"},
        }};
    };

    struct VertexColorPaintBrushOpProps
    {
        static constexpr std::string_view Name = "VertexColorPaintBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VertexColorBaseBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Color = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Color", 0x80, "StructProperty"},
        }};
    };

    struct VertexColorSmoothBrushOpProps
    {
        static constexpr std::string_view Name = "VertexColorSmoothBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VertexColorBaseBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t BlendMode = 0x78;
            static constexpr std::uintptr_t bApplyFalloff = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"BlendMode", 0x78, "EnumProperty"},
            {"bApplyFalloff", 0x7C, "BoolProperty"},
        }};
    };

    struct VertexColorSoftenBrushOpProps
    {
        static constexpr std::string_view Name = "VertexColorSoftenBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VertexColorBaseBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t BlendMode = 0x78;
            static constexpr std::uintptr_t bApplyFalloff = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"BlendMode", 0x78, "EnumProperty"},
            {"bApplyFalloff", 0x7C, "BoolProperty"},
        }};
    };

    struct VertexPaintBasicProperties
    {
        static constexpr std::string_view Name = "VertexPaintBasicProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryBrushType = 0x68;
            static constexpr std::uintptr_t SubToolType = 0x69;
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t PaintColor = 0x78;
            static constexpr std::uintptr_t bIsPaintPressureEnabled = 0x88;
            static constexpr std::uintptr_t BlendMode = 0x89;
            static constexpr std::uintptr_t SecondaryActionType = 0x8A;
            static constexpr std::uintptr_t EraseColor = 0x8C;
            static constexpr std::uintptr_t bIsErasePressureEnabled = 0x9C;
            static constexpr std::uintptr_t SmoothStrength = 0xA0;
            static constexpr std::uintptr_t ChannelFilter = 0xA4;
            static constexpr std::uintptr_t bHardEdges = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"PrimaryBrushType", 0x68, "EnumProperty"},
            {"SubToolType", 0x69, "EnumProperty"},
            {"Strength", 0x70, "DoubleProperty"},
            {"PaintColor", 0x78, "StructProperty"},
            {"bIsPaintPressureEnabled", 0x88, "BoolProperty"},
            {"BlendMode", 0x89, "EnumProperty"},
            {"SecondaryActionType", 0x8A, "EnumProperty"},
            {"EraseColor", 0x8C, "StructProperty"},
            {"bIsErasePressureEnabled", 0x9C, "BoolProperty"},
            {"SmoothStrength", 0xA0, "FloatProperty"},
            {"ChannelFilter", 0xA4, "StructProperty"},
            {"bHardEdges", 0xA8, "BoolProperty"},
        }};
    };

    struct VertexPaintBrushFilterProperties
    {
        static constexpr std::string_view Name = "VertexPaintBrushFilterProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushAreaMode = 0x68;
            static constexpr std::uintptr_t AngleThreshold = 0x6C;
            static constexpr std::uintptr_t bUVSeams = 0x70;
            static constexpr std::uintptr_t bNormalSeams = 0x71;
            static constexpr std::uintptr_t VisibilityFilter = 0x72;
            static constexpr std::uintptr_t bIsolateGeometrySelection = 0x73;
            static constexpr std::uintptr_t bToolHasSelection = 0x74;
            static constexpr std::uintptr_t MinTriVertCount = 0x78;
            static constexpr std::uintptr_t MaterialMode = 0x7C;
            static constexpr std::uintptr_t bShowHitColor = 0x7D;
            static constexpr std::uintptr_t CurrentSubToolType = 0x7E;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"BrushAreaMode", 0x68, "EnumProperty"},
            {"AngleThreshold", 0x6C, "FloatProperty"},
            {"bUVSeams", 0x70, "BoolProperty"},
            {"bNormalSeams", 0x71, "BoolProperty"},
            {"VisibilityFilter", 0x72, "EnumProperty"},
            {"bIsolateGeometrySelection", 0x73, "BoolProperty"},
            {"bToolHasSelection", 0x74, "BoolProperty"},
            {"MinTriVertCount", 0x78, "IntProperty"},
            {"MaterialMode", 0x7C, "EnumProperty"},
            {"bShowHitColor", 0x7D, "BoolProperty"},
            {"CurrentSubToolType", 0x7E, "EnumProperty"},
        }};
    };

    struct ViewAlignedPlaneBrushOpProps
    {
        static constexpr std::string_view Name = "ViewAlignedPlaneBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BasePlaneBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
            static constexpr std::uintptr_t Depth = 0x78;
            static constexpr std::uintptr_t WhichSide = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
            {"Depth", 0x78, "FloatProperty"},
            {"WhichSide", 0x7C, "EnumProperty"},
        }};
    };

    struct ViewAlignedSculptBrushOpProps
    {
        static constexpr std::string_view Name = "ViewAlignedSculptBrushOpProps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSculptBrushOpProps";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t Falloff = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Strength", 0x70, "FloatProperty"},
            {"Falloff", 0x74, "FloatProperty"},
        }};
    };

    struct WeldMeshEdgesOperatorFactory
    {
        static constexpr std::string_view Name = "WeldMeshEdgesOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WeldMeshEdgesTool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WeldMeshEdgesTool", 0x30, "ObjectProperty"},
        }};
    };

    struct WeldMeshEdgesTool
    {
        static constexpr std::string_view Name = "WeldMeshEdgesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x108;
            static constexpr std::uintptr_t PreviewCompute = 0x110;
            static constexpr std::uintptr_t MeshElementsDisplay = 0x118;
            static constexpr std::uintptr_t OperatorFactory = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Settings", 0x108, "ObjectProperty"},
            {"PreviewCompute", 0x110, "ObjectProperty"},
            {"MeshElementsDisplay", 0x118, "ObjectProperty"},
            {"OperatorFactory", 0x120, "ObjectProperty"},
        }};
    };

    struct WeldMeshEdgesToolBuilder
    {
        static constexpr std::string_view Name = "WeldMeshEdgesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WeldMeshEdgesToolProperties
    {
        static constexpr std::string_view Name = "WeldMeshEdgesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Tolerance = 0x68;
            static constexpr std::uintptr_t bOnlyUnique = 0x6C;
            static constexpr std::uintptr_t bResolveTJunctions = 0x6D;
            static constexpr std::uintptr_t bSplitBowties = 0x6E;
            static constexpr std::uintptr_t InitialEdges = 0x70;
            static constexpr std::uintptr_t RemainingEdges = 0x74;
            static constexpr std::uintptr_t AttrWeldingMode = 0x78;
            static constexpr std::uintptr_t SplitNormalThreshold = 0x7C;
            static constexpr std::uintptr_t SplitTangentsThreshold = 0x80;
            static constexpr std::uintptr_t SplitUVThreshold = 0x84;
            static constexpr std::uintptr_t SplitColorThreshold = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Tolerance", 0x68, "FloatProperty"},
            {"bOnlyUnique", 0x6C, "BoolProperty"},
            {"bResolveTJunctions", 0x6D, "BoolProperty"},
            {"bSplitBowties", 0x6E, "BoolProperty"},
            {"InitialEdges", 0x70, "IntProperty"},
            {"RemainingEdges", 0x74, "IntProperty"},
            {"AttrWeldingMode", 0x78, "EnumProperty"},
            {"SplitNormalThreshold", 0x7C, "FloatProperty"},
            {"SplitTangentsThreshold", 0x80, "FloatProperty"},
            {"SplitUVThreshold", 0x84, "FloatProperty"},
            {"SplitColorThreshold", 0x88, "FloatProperty"},
        }};
    };

    struct WorkPlaneProperties
    {
        static constexpr std::string_view Name = "WorkPlaneProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bPropertySetEnabled = 0x68;
            static constexpr std::uintptr_t bShowGizmo = 0x69;
            static constexpr std::uintptr_t bShowPlane = 0x6A;
            static constexpr std::uintptr_t Position = 0x70;
            static constexpr std::uintptr_t Rotation = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bPropertySetEnabled", 0x68, "BoolProperty"},
            {"bShowGizmo", 0x69, "BoolProperty"},
            {"bShowPlane", 0x6A, "BoolProperty"},
            {"Position", 0x70, "StructProperty"},
            {"Rotation", 0x90, "StructProperty"},
        }};
    };

}
