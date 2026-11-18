#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ModelingComponents
{
    struct BaseCreateFromSelectedCollisionProperties
    {
        static constexpr std::string_view Name = "BaseCreateFromSelectedCollisionProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bTransferCollision = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bTransferCollision", 0x68, "BoolProperty"},
        }};
    };

    struct BaseCreateFromSelectedHandleSourceProperties
    {
        static constexpr std::string_view Name = "BaseCreateFromSelectedHandleSourceProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnAcceptHandleSourcesProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputWriteTo = 0x70;
            static constexpr std::uintptr_t OutputNewName = 0x78;
            static constexpr std::uintptr_t OutputExistingName = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OutputWriteTo", 0x70, "EnumProperty"},
            {"OutputNewName", 0x78, "StrProperty"},
            {"OutputExistingName", 0x88, "StrProperty"},
        }};
    };

    struct BaseCreateFromSelectedTool
    {
        static constexpr std::string_view Name = "BaseCreateFromSelectedTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformProperties = 0xD8;
            static constexpr std::uintptr_t OutputTypeProperties = 0xE0;
            static constexpr std::uintptr_t HandleSourcesProperties = 0xE8;
            static constexpr std::uintptr_t CollisionProperties = 0xF0;
            static constexpr std::uintptr_t Preview = 0xF8;
            static constexpr std::uintptr_t TransformProxies = 0x100;
            static constexpr std::uintptr_t TransformGizmos = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TransformProperties", 0xD8, "ObjectProperty"},
            {"OutputTypeProperties", 0xE0, "ObjectProperty"},
            {"HandleSourcesProperties", 0xE8, "ObjectProperty"},
            {"CollisionProperties", 0xF0, "ObjectProperty"},
            {"Preview", 0xF8, "ObjectProperty"},
            {"TransformProxies", 0x100, "ArrayProperty"},
            {"TransformGizmos", 0x110, "ArrayProperty"},
        }};
    };

    struct BaseCreateFromSelectedToolBuilder
    {
        static constexpr std::string_view Name = "BaseCreateFromSelectedToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BaseMeshProcessingTool
    {
        static constexpr std::string_view Name = "BaseMeshProcessingTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Preview = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Preview", 0x120, "ObjectProperty"},
        }};
    };

    struct BaseMeshProcessingToolBuilder
    {
        static constexpr std::string_view Name = "BaseMeshProcessingToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BaseVoxelTool
    {
        static constexpr std::string_view Name = "BaseVoxelTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCreateFromSelectedTool";
        struct Offsets
        {
            static constexpr std::uintptr_t VoxProperties = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VoxProperties", 0x120, "ObjectProperty"},
        }};
    };

    struct BoundarySelectionMechanic
    {
        static constexpr std::string_view Name = "BoundarySelectionMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshTopologySelectionMechanic";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x78;
            static constexpr std::uintptr_t HoverBehavior = 0xD0;
            static constexpr std::uintptr_t ClickOrDragBehavior = 0xD8;
            static constexpr std::uintptr_t MarqueeMechanic = 0xE0;
            static constexpr std::uintptr_t PolyLassoMechanic = 0xE8;
            static constexpr std::uintptr_t MarqueeSelectionUpdateType = 0xF0;
            static constexpr std::uintptr_t SelectionDragToolUpdateType = 0xF4;
            static constexpr std::uintptr_t PreviewGeometryActor = 0x370;
            static constexpr std::uintptr_t DrawnTriangleSetComponent = 0x378;
            static constexpr std::uintptr_t HighlightedFaceMaterial = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Properties", 0x78, "ObjectProperty"},
            {"HoverBehavior", 0xD0, "ObjectProperty"},
            {"ClickOrDragBehavior", 0xD8, "ObjectProperty"},
            {"MarqueeMechanic", 0xE0, "ObjectProperty"},
            {"PolyLassoMechanic", 0xE8, "ObjectProperty"},
            {"MarqueeSelectionUpdateType", 0xF0, "EnumProperty"},
            {"SelectionDragToolUpdateType", 0xF4, "EnumProperty"},
            {"PreviewGeometryActor", 0x370, "ObjectProperty"},
            {"DrawnTriangleSetComponent", 0x378, "ObjectProperty"},
            {"HighlightedFaceMaterial", 0x390, "ObjectProperty"},
        }};
    };

    struct CollectSurfacePathMechanic
    {
        static constexpr std::string_view Name = "CollectSurfacePathMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CollisionPrimitivesMechanic
    {
        static constexpr std::string_view Name = "CollisionPrimitivesMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewGeometry = 0x1E0;
            static constexpr std::uintptr_t DrawnPrimitiveEdges = 0x1E8;
            static constexpr std::uintptr_t TranslateTransformProxy = 0x2A0;
            static constexpr std::uintptr_t SphereTransformProxy = 0x2A8;
            static constexpr std::uintptr_t BoxTransformProxy = 0x2B0;
            static constexpr std::uintptr_t CapsuleTransformProxy = 0x2B8;
            static constexpr std::uintptr_t FullTransformProxy = 0x2C0;
            static constexpr std::uintptr_t CurrentActiveProxy = 0x2C8;
            static constexpr std::uintptr_t TranslateTransformGizmo = 0x2D0;
            static constexpr std::uintptr_t SphereTransformGizmo = 0x2D8;
            static constexpr std::uintptr_t BoxTransformGizmo = 0x2E0;
            static constexpr std::uintptr_t CapsuleTransformGizmo = 0x2E8;
            static constexpr std::uintptr_t FullTransformGizmo = 0x2F0;
            static constexpr std::uintptr_t BoxIntervalGizmo = 0x2F8;
            static constexpr std::uintptr_t BoxXIntervalSource = 0x300;
            static constexpr std::uintptr_t BoxYIntervalSource = 0x308;
            static constexpr std::uintptr_t BoxZIntervalSource = 0x310;
            static constexpr std::uintptr_t CapsuleIntervalGizmo = 0x318;
            static constexpr std::uintptr_t CapsuleRadiusIntervalSource = 0x320;
            static constexpr std::uintptr_t CapsuleLengthIntervalSource = 0x328;
            static constexpr std::uintptr_t MarqueeMechanic = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"PreviewGeometry", 0x1E0, "ObjectProperty"},
            {"DrawnPrimitiveEdges", 0x1E8, "ObjectProperty"},
            {"TranslateTransformProxy", 0x2A0, "ObjectProperty"},
            {"SphereTransformProxy", 0x2A8, "ObjectProperty"},
            {"BoxTransformProxy", 0x2B0, "ObjectProperty"},
            {"CapsuleTransformProxy", 0x2B8, "ObjectProperty"},
            {"FullTransformProxy", 0x2C0, "ObjectProperty"},
            {"CurrentActiveProxy", 0x2C8, "ObjectProperty"},
            {"TranslateTransformGizmo", 0x2D0, "ObjectProperty"},
            {"SphereTransformGizmo", 0x2D8, "ObjectProperty"},
            {"BoxTransformGizmo", 0x2E0, "ObjectProperty"},
            {"CapsuleTransformGizmo", 0x2E8, "ObjectProperty"},
            {"FullTransformGizmo", 0x2F0, "ObjectProperty"},
            {"BoxIntervalGizmo", 0x2F8, "ObjectProperty"},
            {"BoxXIntervalSource", 0x300, "ObjectProperty"},
            {"BoxYIntervalSource", 0x308, "ObjectProperty"},
            {"BoxZIntervalSource", 0x310, "ObjectProperty"},
            {"CapsuleIntervalGizmo", 0x318, "ObjectProperty"},
            {"CapsuleRadiusIntervalSource", 0x320, "ObjectProperty"},
            {"CapsuleLengthIntervalSource", 0x328, "ObjectProperty"},
            {"MarqueeMechanic", 0x378, "ObjectProperty"},
        }};
    };

    struct ConstructionPlaneMechanic
    {
        static constexpr std::string_view Name = "ConstructionPlaneMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaneTransformGizmo = 0xB8;
            static constexpr std::uintptr_t PlaneTransformProxy = 0xC0;
            static constexpr std::uintptr_t ClickToSetPlaneBehavior = 0xD0;
            static constexpr std::uintptr_t MiddleClickToSetGizmoBehavior = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlaneTransformGizmo", 0xB8, "ObjectProperty"},
            {"PlaneTransformProxy", 0xC0, "ObjectProperty"},
            {"ClickToSetPlaneBehavior", 0xD0, "ObjectProperty"},
            {"MiddleClickToSetGizmoBehavior", 0xD8, "ObjectProperty"},
        }};
    };

    struct CreateMeshObjectTypeProperties
    {
        static constexpr std::string_view Name = "CreateMeshObjectTypeProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputType = 0x68;
            static constexpr std::uintptr_t VolumeType = 0x78;
            static constexpr std::uintptr_t OutputTypeNamesList = 0x80;
            static constexpr std::uintptr_t bShowVolumeList = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OutputType", 0x68, "StrProperty"},
            {"VolumeType", 0x78, "ClassProperty"},
            {"OutputTypeNamesList", 0x80, "ArrayProperty"},
            {"bShowVolumeList", 0x90, "BoolProperty"},
        }};
    };

    struct CurveControlPointsMechanic
    {
        static constexpr std::string_view Name = "CurveControlPointsMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
            static constexpr std::uintptr_t ClickBehavior = 0x40;
            static constexpr std::uintptr_t HoverBehavior = 0x48;
            static constexpr std::uintptr_t PreviewGeometryActor = 0x3A8;
            static constexpr std::uintptr_t DrawnControlPoints = 0x3B0;
            static constexpr std::uintptr_t DrawnControlSegments = 0x3B8;
            static constexpr std::uintptr_t PreviewPoint = 0x3C0;
            static constexpr std::uintptr_t PreviewSegment = 0x3C8;
            static constexpr std::uintptr_t PointTransformProxy = 0x448;
            static constexpr std::uintptr_t PointTransformGizmo = 0x450;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ClickBehavior", 0x40, "ObjectProperty"},
            {"HoverBehavior", 0x48, "ObjectProperty"},
            {"PreviewGeometryActor", 0x3A8, "ObjectProperty"},
            {"DrawnControlPoints", 0x3B0, "ObjectProperty"},
            {"DrawnControlSegments", 0x3B8, "ObjectProperty"},
            {"PreviewPoint", 0x3C0, "ObjectProperty"},
            {"PreviewSegment", 0x3C8, "ObjectProperty"},
            {"PointTransformProxy", 0x448, "ObjectProperty"},
            {"PointTransformGizmo", 0x450, "ObjectProperty"},
        }};
    };

    struct DragAlignmentInteraction
    {
        static constexpr std::string_view Name = "DragAlignmentInteraction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DragAlignmentMechanic
    {
        static constexpr std::string_view Name = "DragAlignmentMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicMeshCommitter
    {
        static constexpr std::string_view Name = "DynamicMeshCommitter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicMeshProvider
    {
        static constexpr std::string_view Name = "DynamicMeshProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicMeshReplacementChangeTarget
    {
        static constexpr std::string_view Name = "DynamicMeshReplacementChangeTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometrySelectionEditCommand
    {
        static constexpr std::string_view Name = "GeometrySelectionEditCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveCommand";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometrySelectionEditCommandArguments
    {
        static constexpr std::string_view Name = "GeometrySelectionEditCommandArguments";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveCommandArguments";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometrySelectionEditCommandResult
    {
        static constexpr std::string_view Name = "GeometrySelectionEditCommandResult";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveCommandResult";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometrySelectionManager
    {
        static constexpr std::string_view Name = "GeometrySelectionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionArguments = 0x50;
            static constexpr std::uintptr_t ToolsContext = 0x68;
            static constexpr std::uintptr_t PreviewGeometry = 0xC8;
            static constexpr std::uintptr_t UnselectedParams = 0x1B8;
            static constexpr std::uintptr_t HoverOverSelectedParams = 0x200;
            static constexpr std::uintptr_t HoverOverUnselectedParams = 0x248;
            static constexpr std::uintptr_t SelectedParams = 0x290;
            static constexpr std::uintptr_t SoftSelectedParams = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SelectionArguments", 0x50, "ObjectProperty"},
            {"ToolsContext", 0x68, "ObjectProperty"},
            {"PreviewGeometry", 0xC8, "ObjectProperty"},
            {"UnselectedParams", 0x1B8, "StructProperty"},
            {"HoverOverSelectedParams", 0x200, "StructProperty"},
            {"HoverOverUnselectedParams", 0x248, "StructProperty"},
            {"SelectedParams", 0x290, "StructProperty"},
            {"SoftSelectedParams", 0x2D8, "StructProperty"},
        }};
    };

    struct GeometrySelectionVisualizationProperties
    {
        static constexpr std::string_view Name = "GeometrySelectionVisualizationProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableShowTriangleROIBorder = 0x68;
            static constexpr std::uintptr_t bEnableShowEdgeSelectionVertices = 0x69;
            static constexpr std::uintptr_t SelectionElementType = 0x6A;
            static constexpr std::uintptr_t SelectionTopologyType = 0x6B;
            static constexpr std::uintptr_t bShowSelection = 0x6C;
            static constexpr std::uintptr_t bShowTriangleROIBorder = 0x6D;
            static constexpr std::uintptr_t bShowHidden = 0x6E;
            static constexpr std::uintptr_t bShowEdgeSelectionVertices = 0x6F;
            static constexpr std::uintptr_t LineThickness = 0x70;
            static constexpr std::uintptr_t PointSize = 0x74;
            static constexpr std::uintptr_t DepthBias = 0x78;
            static constexpr std::uintptr_t FaceColor = 0x7C;
            static constexpr std::uintptr_t LineColor = 0x80;
            static constexpr std::uintptr_t PointColor = 0x84;
            static constexpr std::uintptr_t TriangleROIBorderColor = 0x88;
            static constexpr std::uintptr_t TriangleMaterial = 0x90;
            static constexpr std::uintptr_t LineMaterial = 0x98;
            static constexpr std::uintptr_t PointMaterial = 0xA0;
            static constexpr std::uintptr_t TriangleMaterialShowingHidden = 0xA8;
            static constexpr std::uintptr_t LineMaterialShowingHidden = 0xB0;
            static constexpr std::uintptr_t PointMaterialShowingHidden = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bEnableShowTriangleROIBorder", 0x68, "BoolProperty"},
            {"bEnableShowEdgeSelectionVertices", 0x69, "BoolProperty"},
            {"SelectionElementType", 0x6A, "EnumProperty"},
            {"SelectionTopologyType", 0x6B, "EnumProperty"},
            {"bShowSelection", 0x6C, "BoolProperty"},
            {"bShowTriangleROIBorder", 0x6D, "BoolProperty"},
            {"bShowHidden", 0x6E, "BoolProperty"},
            {"bShowEdgeSelectionVertices", 0x6F, "BoolProperty"},
            {"LineThickness", 0x70, "FloatProperty"},
            {"PointSize", 0x74, "FloatProperty"},
            {"DepthBias", 0x78, "FloatProperty"},
            {"FaceColor", 0x7C, "StructProperty"},
            {"LineColor", 0x80, "StructProperty"},
            {"PointColor", 0x84, "StructProperty"},
            {"TriangleROIBorderColor", 0x88, "StructProperty"},
            {"TriangleMaterial", 0x90, "ObjectProperty"},
            {"LineMaterial", 0x98, "ObjectProperty"},
            {"PointMaterial", 0xA0, "ObjectProperty"},
            {"TriangleMaterialShowingHidden", 0xA8, "ObjectProperty"},
            {"LineMaterialShowingHidden", 0xB0, "ObjectProperty"},
            {"PointMaterialShowingHidden", 0xB8, "ObjectProperty"},
        }};
    };

    struct InteractiveToolActivity
    {
        static constexpr std::string_view Name = "InteractiveToolActivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LatticeControlPointsMechanic
    {
        static constexpr std::string_view Name = "LatticeControlPointsMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewGeometryActor = 0x1C0;
            static constexpr std::uintptr_t DrawnControlPoints = 0x1C8;
            static constexpr std::uintptr_t DrawnLatticeEdges = 0x1D0;
            static constexpr std::uintptr_t PointTransformProxy = 0x260;
            static constexpr std::uintptr_t PointTransformGizmo = 0x268;
            static constexpr std::uintptr_t MarqueeMechanic = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PreviewGeometryActor", 0x1C0, "ObjectProperty"},
            {"DrawnControlPoints", 0x1C8, "ObjectProperty"},
            {"DrawnLatticeEdges", 0x1D0, "ObjectProperty"},
            {"PointTransformProxy", 0x260, "ObjectProperty"},
            {"PointTransformGizmo", 0x268, "ObjectProperty"},
            {"MarqueeMechanic", 0x2B8, "ObjectProperty"},
        }};
    };

    struct LatticeStateStorage
    {
        static constexpr std::string_view Name = "LatticeStateStorage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LineSetComponent
    {
        static constexpr std::string_view Name = "LineSetComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LineMaterial = 0x5C0;
            static constexpr std::uintptr_t Bounds = 0x5C8;
            static constexpr std::uintptr_t bBoundsDirty = 0x600;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LineMaterial", 0x5C0, "ObjectProperty"},
            {"Bounds", 0x5C8, "StructProperty"},
            {"bBoundsDirty", 0x600, "BoolProperty"},
        }};
    };

    struct MeshElementsVisualizer
    {
        static constexpr std::string_view Name = "MeshElementsVisualizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PreviewGeometry";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x60;
            static constexpr std::uintptr_t WireframeComponent = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x60, "ObjectProperty"},
            {"WireframeComponent", 0x68, "ObjectProperty"},
        }};
    };

    struct MeshElementsVisualizerProperties
    {
        static constexpr std::string_view Name = "MeshElementsVisualizerProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bVisible = 0x68;
            static constexpr std::uintptr_t bShowWireframe = 0x69;
            static constexpr std::uintptr_t bShowBorders = 0x6A;
            static constexpr std::uintptr_t bShowUVSeams = 0x6B;
            static constexpr std::uintptr_t bShowNormalSeams = 0x6C;
            static constexpr std::uintptr_t bShowTangentSeams = 0x6D;
            static constexpr std::uintptr_t bShowColorSeams = 0x6E;
            static constexpr std::uintptr_t bShowGroupBoundaries = 0x6F;
            static constexpr std::uintptr_t ThicknessScale = 0x70;
            static constexpr std::uintptr_t WireframeColor = 0x74;
            static constexpr std::uintptr_t BoundaryEdgeColor = 0x78;
            static constexpr std::uintptr_t UVSeamColor = 0x7C;
            static constexpr std::uintptr_t NormalSeamColor = 0x80;
            static constexpr std::uintptr_t TangentSeamColor = 0x84;
            static constexpr std::uintptr_t ColorSeamColor = 0x88;
            static constexpr std::uintptr_t GroupBoundaryColor = 0x8C;
            static constexpr std::uintptr_t DepthBias = 0x90;
            static constexpr std::uintptr_t bAdjustDepthBiasUsingMeshSize = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"bVisible", 0x68, "BoolProperty"},
            {"bShowWireframe", 0x69, "BoolProperty"},
            {"bShowBorders", 0x6A, "BoolProperty"},
            {"bShowUVSeams", 0x6B, "BoolProperty"},
            {"bShowNormalSeams", 0x6C, "BoolProperty"},
            {"bShowTangentSeams", 0x6D, "BoolProperty"},
            {"bShowColorSeams", 0x6E, "BoolProperty"},
            {"bShowGroupBoundaries", 0x6F, "BoolProperty"},
            {"ThicknessScale", 0x70, "FloatProperty"},
            {"WireframeColor", 0x74, "StructProperty"},
            {"BoundaryEdgeColor", 0x78, "StructProperty"},
            {"UVSeamColor", 0x7C, "StructProperty"},
            {"NormalSeamColor", 0x80, "StructProperty"},
            {"TangentSeamColor", 0x84, "StructProperty"},
            {"ColorSeamColor", 0x88, "StructProperty"},
            {"GroupBoundaryColor", 0x8C, "StructProperty"},
            {"DepthBias", 0x90, "FloatProperty"},
            {"bAdjustDepthBiasUsingMeshSize", 0x94, "BoolProperty"},
        }};
    };

    struct MeshOpPreviewWithBackgroundCompute
    {
        static constexpr std::string_view Name = "MeshOpPreviewWithBackgroundCompute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewMesh = 0x58;
            static constexpr std::uintptr_t StandardMaterials = 0x60;
            static constexpr std::uintptr_t OverrideMaterial = 0x70;
            static constexpr std::uintptr_t WorkingMaterial = 0x78;
            static constexpr std::uintptr_t SecondaryMaterial = 0x80;
            static constexpr std::uintptr_t PreviewWorld = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PreviewMesh", 0x58, "ObjectProperty"},
            {"StandardMaterials", 0x60, "ArrayProperty"},
            {"OverrideMaterial", 0x70, "ObjectProperty"},
            {"WorkingMaterial", 0x78, "ObjectProperty"},
            {"SecondaryMaterial", 0x80, "ObjectProperty"},
            {"PreviewWorld", 0x88, "WeakObjectProperty"},
        }};
    };

    struct MeshSculptLayersManager
    {
        static constexpr std::string_view Name = "MeshSculptLayersManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshSurfacePointMeshEditingToolBuilder
    {
        static constexpr std::string_view Name = "MeshSurfacePointMeshEditingToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshTopologySelectionMechanic
    {
        static constexpr std::string_view Name = "MeshTopologySelectionMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x78;
            static constexpr std::uintptr_t HoverBehavior = 0xD0;
            static constexpr std::uintptr_t ClickOrDragBehavior = 0xD8;
            static constexpr std::uintptr_t MarqueeMechanic = 0xE0;
            static constexpr std::uintptr_t PolyLassoMechanic = 0xE8;
            static constexpr std::uintptr_t MarqueeSelectionUpdateType = 0xF0;
            static constexpr std::uintptr_t SelectionDragToolUpdateType = 0xF4;
            static constexpr std::uintptr_t PreviewGeometryActor = 0x370;
            static constexpr std::uintptr_t DrawnTriangleSetComponent = 0x378;
            static constexpr std::uintptr_t HighlightedFaceMaterial = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Properties", 0x78, "ObjectProperty"},
            {"HoverBehavior", 0xD0, "ObjectProperty"},
            {"ClickOrDragBehavior", 0xD8, "ObjectProperty"},
            {"MarqueeMechanic", 0xE0, "ObjectProperty"},
            {"PolyLassoMechanic", 0xE8, "ObjectProperty"},
            {"MarqueeSelectionUpdateType", 0xF0, "EnumProperty"},
            {"SelectionDragToolUpdateType", 0xF4, "EnumProperty"},
            {"PreviewGeometryActor", 0x370, "ObjectProperty"},
            {"DrawnTriangleSetComponent", 0x378, "ObjectProperty"},
            {"HighlightedFaceMaterial", 0x390, "ObjectProperty"},
        }};
    };

    struct MeshTopologySelectionMechanicProperties
    {
        static constexpr std::string_view Name = "MeshTopologySelectionMechanicProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bSelectVertices = 0x68;
            static constexpr std::uintptr_t bSelectEdges = 0x69;
            static constexpr std::uintptr_t bSelectFaces = 0x6A;
            static constexpr std::uintptr_t bSelectEdgeLoops = 0x6B;
            static constexpr std::uintptr_t bSelectEdgeRings = 0x6C;
            static constexpr std::uintptr_t bHitBackFaces = 0x6D;
            static constexpr std::uintptr_t SelectionDragTool = 0x6E;
            static constexpr std::uintptr_t bIgnoreOcclusionForDragTools = 0x6F;
            static constexpr std::uintptr_t bPreferProjectedElement = 0x70;
            static constexpr std::uintptr_t bSelectDownRay = 0x71;
            static constexpr std::uintptr_t bIgnoreOcclusion = 0x72;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bSelectVertices", 0x68, "BoolProperty"},
            {"bSelectEdges", 0x69, "BoolProperty"},
            {"bSelectFaces", 0x6A, "BoolProperty"},
            {"bSelectEdgeLoops", 0x6B, "BoolProperty"},
            {"bSelectEdgeRings", 0x6C, "BoolProperty"},
            {"bHitBackFaces", 0x6D, "BoolProperty"},
            {"SelectionDragTool", 0x6E, "EnumProperty"},
            {"bIgnoreOcclusionForDragTools", 0x6F, "BoolProperty"},
            {"bPreferProjectedElement", 0x70, "BoolProperty"},
            {"bSelectDownRay", 0x71, "BoolProperty"},
            {"bIgnoreOcclusion", 0x72, "BoolProperty"},
        }};
    };

    struct MeshWireframeComponent
    {
        static constexpr std::string_view Name = "MeshWireframeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LineDepthBias = 0x5C0;
            static constexpr std::uintptr_t LineDepthBiasSizeScale = 0x5C4;
            static constexpr std::uintptr_t ThicknessScale = 0x5C8;
            static constexpr std::uintptr_t bEnableWireframe = 0x5CC;
            static constexpr std::uintptr_t WireframeColor = 0x5D0;
            static constexpr std::uintptr_t WireframeThickness = 0x5D4;
            static constexpr std::uintptr_t bEnableBoundaryEdges = 0x5D8;
            static constexpr std::uintptr_t BoundaryEdgeColor = 0x5DC;
            static constexpr std::uintptr_t BoundaryEdgeThickness = 0x5E0;
            static constexpr std::uintptr_t bEnableUVSeams = 0x5E4;
            static constexpr std::uintptr_t UVSeamColor = 0x5E8;
            static constexpr std::uintptr_t UVSeamThickness = 0x5EC;
            static constexpr std::uintptr_t bEnableNormalSeams = 0x5F0;
            static constexpr std::uintptr_t NormalSeamColor = 0x5F4;
            static constexpr std::uintptr_t NormalSeamThickness = 0x5F8;
            static constexpr std::uintptr_t bEnableTangentSeams = 0x5FC;
            static constexpr std::uintptr_t TangentSeamColor = 0x600;
            static constexpr std::uintptr_t TangentSeamThickness = 0x604;
            static constexpr std::uintptr_t bEnableColorSeams = 0x608;
            static constexpr std::uintptr_t ColorSeamColor = 0x60C;
            static constexpr std::uintptr_t ColorSeamThickness = 0x610;
            static constexpr std::uintptr_t bEnableGroupBoundaries = 0x614;
            static constexpr std::uintptr_t GroupBoundaryColor = 0x618;
            static constexpr std::uintptr_t GroupBoundaryThickness = 0x61C;
            static constexpr std::uintptr_t LineMaterial = 0x620;
            static constexpr std::uintptr_t LocalBounds = 0x628;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"LineDepthBias", 0x5C0, "FloatProperty"},
            {"LineDepthBiasSizeScale", 0x5C4, "FloatProperty"},
            {"ThicknessScale", 0x5C8, "FloatProperty"},
            {"bEnableWireframe", 0x5CC, "BoolProperty"},
            {"WireframeColor", 0x5D0, "StructProperty"},
            {"WireframeThickness", 0x5D4, "FloatProperty"},
            {"bEnableBoundaryEdges", 0x5D8, "BoolProperty"},
            {"BoundaryEdgeColor", 0x5DC, "StructProperty"},
            {"BoundaryEdgeThickness", 0x5E0, "FloatProperty"},
            {"bEnableUVSeams", 0x5E4, "BoolProperty"},
            {"UVSeamColor", 0x5E8, "StructProperty"},
            {"UVSeamThickness", 0x5EC, "FloatProperty"},
            {"bEnableNormalSeams", 0x5F0, "BoolProperty"},
            {"NormalSeamColor", 0x5F4, "StructProperty"},
            {"NormalSeamThickness", 0x5F8, "FloatProperty"},
            {"bEnableTangentSeams", 0x5FC, "BoolProperty"},
            {"TangentSeamColor", 0x600, "StructProperty"},
            {"TangentSeamThickness", 0x604, "FloatProperty"},
            {"bEnableColorSeams", 0x608, "BoolProperty"},
            {"ColorSeamColor", 0x60C, "StructProperty"},
            {"ColorSeamThickness", 0x610, "FloatProperty"},
            {"bEnableGroupBoundaries", 0x614, "BoolProperty"},
            {"GroupBoundaryColor", 0x618, "StructProperty"},
            {"GroupBoundaryThickness", 0x61C, "FloatProperty"},
            {"LineMaterial", 0x620, "ObjectProperty"},
            {"LocalBounds", 0x628, "StructProperty"},
        }};
    };

    struct ModelingComponentsEditorSettings
    {
        static constexpr std::string_view Name = "ModelingComponentsEditorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t GridMode = 0x30;
            static constexpr std::uintptr_t NumGridLines = 0x34;
            static constexpr std::uintptr_t GridSpacing = 0x38;
            static constexpr std::uintptr_t GridScale = 0x3C;
            static constexpr std::uintptr_t GridSize = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GridMode", 0x30, "EnumProperty"},
            {"NumGridLines", 0x34, "IntProperty"},
            {"GridSpacing", 0x38, "FloatProperty"},
            {"GridScale", 0x3C, "FloatProperty"},
            {"GridSize", 0x40, "FloatProperty"},
        }};
    };

    struct ModelingComponentsSettings
    {
        static constexpr std::string_view Name = "ModelingComponentsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableRayTracingWhileEditing = 0x30;
            static constexpr std::uintptr_t bEnableRayTracing = 0x31;
            static constexpr std::uintptr_t bGenerateLightmapUVs = 0x32;
            static constexpr std::uintptr_t bEnableCollision = 0x33;
            static constexpr std::uintptr_t CollisionMode = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bEnableRayTracingWhileEditing", 0x30, "BoolProperty"},
            {"bEnableRayTracing", 0x31, "BoolProperty"},
            {"bGenerateLightmapUVs", 0x32, "BoolProperty"},
            {"bEnableCollision", 0x33, "BoolProperty"},
            {"CollisionMode", 0x34, "ByteProperty"},
        }};
    };

    struct ModelingObjectsCreationAPI
    {
        static constexpr std::string_view Name = "ModelingObjectsCreationAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModelingSceneSnappingManager
    {
        static constexpr std::string_view Name = "ModelingSceneSnappingManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneSnappingManager";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentContext = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParentContext", 0x28, "ObjectProperty"},
        }};
    };

    struct ModelingToolExternalDynamicMeshUpdateAPI
    {
        static constexpr std::string_view Name = "ModelingToolExternalDynamicMeshUpdateAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MultiSelectionMeshEditingTool
    {
        static constexpr std::string_view Name = "MultiSelectionMeshEditingTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetWorld = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetWorld", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct MultiSelectionMeshEditingToolBuilder
    {
        static constexpr std::string_view Name = "MultiSelectionMeshEditingToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolWithToolTargetsBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MultiTargetWithSelectionTool
    {
        static constexpr std::string_view Name = "MultiTargetWithSelectionTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetWorld = 0xC8;
            static constexpr std::uintptr_t GeometrySelectionVizProperties = 0xF0;
            static constexpr std::uintptr_t GeometrySelectionViz = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetWorld", 0xC8, "WeakObjectProperty"},
            {"GeometrySelectionVizProperties", 0xF0, "ObjectProperty"},
            {"GeometrySelectionViz", 0xF8, "ObjectProperty"},
        }};
    };

    struct MultiTargetWithSelectionToolBuilder
    {
        static constexpr std::string_view Name = "MultiTargetWithSelectionToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolWithToolTargetsBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MultiTransformer
    {
        static constexpr std::string_view Name = "MultiTransformer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GizmoManager = 0x88;
            static constexpr std::uintptr_t TransformGizmo = 0x100;
            static constexpr std::uintptr_t TransformProxy = 0x108;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GizmoManager", 0x88, "ObjectProperty"},
            {"TransformGizmo", 0x100, "ObjectProperty"},
            {"TransformProxy", 0x108, "ObjectProperty"},
            {"DragAlignmentMechanic", 0x110, "ObjectProperty"},
        }};
    };

    struct OctreeDynamicMeshComponent
    {
        static constexpr std::string_view Name = "OctreeDynamicMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseDynamicMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshObject = 0x690;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshObject", 0x690, "ObjectProperty"},
        }};
    };

    struct OnAcceptHandleSourcesProperties
    {
        static constexpr std::string_view Name = "OnAcceptHandleSourcesProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnAcceptHandleSourcesPropertiesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HandleInputs = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HandleInputs", 0x68, "EnumProperty"},
        }};
    };

    struct OnAcceptHandleSourcesPropertiesBase
    {
        static constexpr std::string_view Name = "OnAcceptHandleSourcesPropertiesBase";
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

    struct OnAcceptHandleSourcesPropertiesSingle
    {
        static constexpr std::string_view Name = "OnAcceptHandleSourcesPropertiesSingle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnAcceptHandleSourcesPropertiesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HandleInputs = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HandleInputs", 0x68, "EnumProperty"},
        }};
    };

    struct PersistentDynamicMeshSource
    {
        static constexpr std::string_view Name = "PersistentDynamicMeshSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlaneDistanceFromHitMechanic
    {
        static constexpr std::string_view Name = "PlaneDistanceFromHitMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PointSetComponent
    {
        static constexpr std::string_view Name = "PointSetComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PointMaterial = 0x5C0;
            static constexpr std::uintptr_t Bounds = 0x5C8;
            static constexpr std::uintptr_t bBoundsDirty = 0x600;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PointMaterial", 0x5C0, "ObjectProperty"},
            {"Bounds", 0x5C8, "StructProperty"},
            {"bBoundsDirty", 0x600, "BoolProperty"},
        }};
    };

    struct PolyEditPreviewMesh
    {
        static constexpr std::string_view Name = "PolyEditPreviewMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PreviewMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t bBuildSpatialDataStructure = 0x40;
            static constexpr std::uintptr_t DynamicMeshComponent = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bBuildSpatialDataStructure", 0x40, "BoolProperty"},
            {"DynamicMeshComponent", 0x50, "ObjectProperty"},
        }};
    };

    struct PolyLassoMarqueeMechanic
    {
        static constexpr std::string_view Name = "PolyLassoMarqueeMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
            static constexpr std::uintptr_t SpacingTolerance = 0x88;
            static constexpr std::uintptr_t LineThickness = 0x8C;
            static constexpr std::uintptr_t LineColor = 0x90;
            static constexpr std::uintptr_t ClosedColor = 0xA0;
            static constexpr std::uintptr_t bEnableFreehandPolygons = 0xB0;
            static constexpr std::uintptr_t bEnableMultiClickPolygons = 0xB1;
            static constexpr std::uintptr_t ClickDragBehavior = 0xB8;
            static constexpr std::uintptr_t HoverBehavior = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SpacingTolerance", 0x88, "FloatProperty"},
            {"LineThickness", 0x8C, "FloatProperty"},
            {"LineColor", 0x90, "StructProperty"},
            {"ClosedColor", 0xA0, "StructProperty"},
            {"bEnableFreehandPolygons", 0xB0, "BoolProperty"},
            {"bEnableMultiClickPolygons", 0xB1, "BoolProperty"},
            {"ClickDragBehavior", 0xB8, "ObjectProperty"},
            {"HoverBehavior", 0xC0, "ObjectProperty"},
        }};
    };

    struct PolygonSelectionMechanic
    {
        static constexpr std::string_view Name = "PolygonSelectionMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshTopologySelectionMechanic";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x78;
            static constexpr std::uintptr_t HoverBehavior = 0xD0;
            static constexpr std::uintptr_t ClickOrDragBehavior = 0xD8;
            static constexpr std::uintptr_t MarqueeMechanic = 0xE0;
            static constexpr std::uintptr_t PolyLassoMechanic = 0xE8;
            static constexpr std::uintptr_t MarqueeSelectionUpdateType = 0xF0;
            static constexpr std::uintptr_t SelectionDragToolUpdateType = 0xF4;
            static constexpr std::uintptr_t PreviewGeometryActor = 0x370;
            static constexpr std::uintptr_t DrawnTriangleSetComponent = 0x378;
            static constexpr std::uintptr_t HighlightedFaceMaterial = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Properties", 0x78, "ObjectProperty"},
            {"HoverBehavior", 0xD0, "ObjectProperty"},
            {"ClickOrDragBehavior", 0xD8, "ObjectProperty"},
            {"MarqueeMechanic", 0xE0, "ObjectProperty"},
            {"PolyLassoMechanic", 0xE8, "ObjectProperty"},
            {"MarqueeSelectionUpdateType", 0xF0, "EnumProperty"},
            {"SelectionDragToolUpdateType", 0xF4, "EnumProperty"},
            {"PreviewGeometryActor", 0x370, "ObjectProperty"},
            {"DrawnTriangleSetComponent", 0x378, "ObjectProperty"},
            {"HighlightedFaceMaterial", 0x390, "ObjectProperty"},
        }};
    };

    struct PolygonSelectionMechanicProperties
    {
        static constexpr std::string_view Name = "PolygonSelectionMechanicProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshTopologySelectionMechanicProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t bSelectVertices = 0x68;
            static constexpr std::uintptr_t bSelectEdges = 0x69;
            static constexpr std::uintptr_t bSelectFaces = 0x6A;
            static constexpr std::uintptr_t bSelectEdgeLoops = 0x6B;
            static constexpr std::uintptr_t bSelectEdgeRings = 0x6C;
            static constexpr std::uintptr_t bHitBackFaces = 0x6D;
            static constexpr std::uintptr_t SelectionDragTool = 0x6E;
            static constexpr std::uintptr_t bIgnoreOcclusionForDragTools = 0x6F;
            static constexpr std::uintptr_t bPreferProjectedElement = 0x70;
            static constexpr std::uintptr_t bSelectDownRay = 0x71;
            static constexpr std::uintptr_t bIgnoreOcclusion = 0x72;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bSelectVertices", 0x68, "BoolProperty"},
            {"bSelectEdges", 0x69, "BoolProperty"},
            {"bSelectFaces", 0x6A, "BoolProperty"},
            {"bSelectEdgeLoops", 0x6B, "BoolProperty"},
            {"bSelectEdgeRings", 0x6C, "BoolProperty"},
            {"bHitBackFaces", 0x6D, "BoolProperty"},
            {"SelectionDragTool", 0x6E, "EnumProperty"},
            {"bIgnoreOcclusionForDragTools", 0x6F, "BoolProperty"},
            {"bPreferProjectedElement", 0x70, "BoolProperty"},
            {"bSelectDownRay", 0x71, "BoolProperty"},
            {"bIgnoreOcclusion", 0x72, "BoolProperty"},
        }};
    };

    struct PolygroupLayersProperties
    {
        static constexpr std::string_view Name = "PolygroupLayersProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveGroupLayer = 0x68;
            static constexpr std::uintptr_t GroupLayersList = 0x70;
            static constexpr std::uintptr_t bSupportLabels = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActiveGroupLayer", 0x68, "NameProperty"},
            {"GroupLayersList", 0x70, "ArrayProperty"},
            {"bSupportLabels", 0x80, "BoolProperty"},
        }};
    };

    struct PreviewGeometry
    {
        static constexpr std::string_view Name = "PreviewGeometry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentActor = 0x28;
            static constexpr std::uintptr_t TriangleSets = 0x30;
            static constexpr std::uintptr_t LineSets = 0x40;
            static constexpr std::uintptr_t PointSets = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParentActor", 0x28, "ObjectProperty"},
            {"TriangleSets", 0x30, "MapProperty"},
            {"LineSets", 0x40, "MapProperty"},
            {"PointSets", 0x50, "MapProperty"},
        }};
    };

    struct PreviewGeometryActor
    {
        static constexpr std::string_view Name = "PreviewGeometryActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InternalToolFrameworkActor";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSelectableInEditor = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsSelectableInEditor", 0x278, "BoolProperty"},
        }};
    };

    struct PreviewMesh
    {
        static constexpr std::string_view Name = "PreviewMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bBuildSpatialDataStructure = 0x40;
            static constexpr std::uintptr_t DynamicMeshComponent = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bBuildSpatialDataStructure", 0x40, "BoolProperty"},
            {"DynamicMeshComponent", 0x50, "ObjectProperty"},
        }};
    };

    struct PreviewMeshActor
    {
        static constexpr std::string_view Name = "PreviewMeshActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InternalToolFrameworkActor";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSelectableInEditor = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsSelectableInEditor", 0x278, "BoolProperty"},
        }};
    };

    struct RectangleMarqueeInteraction
    {
        static constexpr std::string_view Name = "RectangleMarqueeInteraction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RectangleMarqueeMechanic
    {
        static constexpr std::string_view Name = "RectangleMarqueeMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseExternalClickDragBehavior = 0x38;
            static constexpr std::uintptr_t bUseExternalUpdateCameraState = 0x39;
            static constexpr std::uintptr_t OnDragRectangleChangedDeferredThreshold = 0x70;
            static constexpr std::uintptr_t ClickDragBehavior = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseExternalClickDragBehavior", 0x38, "BoolProperty"},
            {"bUseExternalUpdateCameraState", 0x39, "BoolProperty"},
            {"OnDragRectangleChangedDeferredThreshold", 0x70, "DoubleProperty"},
            {"ClickDragBehavior", 0xC0, "ObjectProperty"},
        }};
    };

    struct SingleSelectionMeshEditingTool
    {
        static constexpr std::string_view Name = "SingleSelectionMeshEditingTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetWorld = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetWorld", 0xC0, "WeakObjectProperty"},
        }};
    };

    struct SingleSelectionMeshEditingToolBuilder
    {
        static constexpr std::string_view Name = "SingleSelectionMeshEditingToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolWithToolTargetsBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SingleTargetWithSelectionTool
    {
        static constexpr std::string_view Name = "SingleTargetWithSelectionTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetWorld = 0xC0;
            static constexpr std::uintptr_t GeometrySelectionVizProperties = 0xF8;
            static constexpr std::uintptr_t GeometrySelectionViz = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetWorld", 0xC0, "WeakObjectProperty"},
            {"GeometrySelectionVizProperties", 0xF8, "ObjectProperty"},
            {"GeometrySelectionViz", 0x100, "ObjectProperty"},
        }};
    };

    struct SingleTargetWithSelectionToolBuilder
    {
        static constexpr std::string_view Name = "SingleTargetWithSelectionToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolWithToolTargetsBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpaceCurveDeformationMechanic
    {
        static constexpr std::string_view Name = "SpaceCurveDeformationMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
            static constexpr std::uintptr_t ClickBehavior = 0x40;
            static constexpr std::uintptr_t HoverBehavior = 0x48;
            static constexpr std::uintptr_t TransformProperties = 0x68;
            static constexpr std::uintptr_t PreviewGeometryActor = 0xE8;
            static constexpr std::uintptr_t RenderPoints = 0xF0;
            static constexpr std::uintptr_t RenderSegments = 0xF8;
            static constexpr std::uintptr_t PointTransformProxy = 0x138;
            static constexpr std::uintptr_t PointTransformGizmo = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ClickBehavior", 0x40, "ObjectProperty"},
            {"HoverBehavior", 0x48, "ObjectProperty"},
            {"TransformProperties", 0x68, "ObjectProperty"},
            {"PreviewGeometryActor", 0xE8, "ObjectProperty"},
            {"RenderPoints", 0xF0, "ObjectProperty"},
            {"RenderSegments", 0xF8, "ObjectProperty"},
            {"PointTransformProxy", 0x138, "ObjectProperty"},
            {"PointTransformGizmo", 0x140, "ObjectProperty"},
        }};
    };

    struct SpaceCurveDeformationMechanicPropertySet
    {
        static constexpr std::string_view Name = "SpaceCurveDeformationMechanicPropertySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformMode = 0x68;
            static constexpr std::uintptr_t TransformOrigin = 0x6C;
            static constexpr std::uintptr_t Softness = 0x70;
            static constexpr std::uintptr_t SoftFalloff = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TransformMode", 0x68, "EnumProperty"},
            {"TransformOrigin", 0x6C, "EnumProperty"},
            {"Softness", 0x70, "FloatProperty"},
            {"SoftFalloff", 0x74, "EnumProperty"},
        }};
    };

    struct SpatialCurveDistanceMechanic
    {
        static constexpr std::string_view Name = "SpatialCurveDistanceMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionMechanic";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolActivityHost
    {
        static constexpr std::string_view Name = "ToolActivityHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolHostCustomizationAPI
    {
        static constexpr std::string_view Name = "ToolHostCustomizationAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TransformInputsToolProperties
    {
        static constexpr std::string_view Name = "TransformInputsToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowTransformGizmo = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bShowTransformGizmo", 0x68, "BoolProperty"},
        }};
    };

    struct TriangleSetComponent
    {
        static constexpr std::string_view Name = "TriangleSetComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Bounds = 0x5C0;
            static constexpr std::uintptr_t bBoundsDirty = 0x5F8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Bounds", 0x5C0, "StructProperty"},
            {"bBoundsDirty", 0x5F8, "BoolProperty"},
        }};
    };

    struct UVLayoutPreview
    {
        static constexpr std::string_view Name = "UVLayoutPreview";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
            static constexpr std::uintptr_t PreviewMesh = 0x30;
            static constexpr std::uintptr_t MeshElementsVisualizer = 0x38;
            static constexpr std::uintptr_t TriangleComponent = 0x40;
            static constexpr std::uintptr_t bShowBackingRectangle = 0x48;
            static constexpr std::uintptr_t BackingRectangleMaterial = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Settings", 0x28, "ObjectProperty"},
            {"PreviewMesh", 0x30, "ObjectProperty"},
            {"MeshElementsVisualizer", 0x38, "ObjectProperty"},
            {"TriangleComponent", 0x40, "ObjectProperty"},
            {"bShowBackingRectangle", 0x48, "BoolProperty"},
            {"BackingRectangleMaterial", 0x50, "ObjectProperty"},
        }};
    };

    struct UVLayoutPreviewProperties
    {
        static constexpr std::string_view Name = "UVLayoutPreviewProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x68;
            static constexpr std::uintptr_t Side = 0x6C;
            static constexpr std::uintptr_t Scale = 0x70;
            static constexpr std::uintptr_t Offset = 0x78;
            static constexpr std::uintptr_t bShowWireframe = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bEnabled", 0x68, "BoolProperty"},
            {"Side", 0x6C, "EnumProperty"},
            {"Scale", 0x70, "FloatProperty"},
            {"Offset", 0x78, "StructProperty"},
            {"bShowWireframe", 0x88, "BoolProperty"},
        }};
    };

    struct VolumetricBrushStampIndicator
    {
        static constexpr std::string_view Name = "VolumetricBrushStampIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BrushStampIndicator";
        struct Offsets
        {
            static constexpr std::uintptr_t SphereMesh = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SphereMesh", 0xD8, "ObjectProperty"},
        }};
    };

    struct VolumetricBrushStampIndicatorBuilder
    {
        static constexpr std::string_view Name = "VolumetricBrushStampIndicatorBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmoBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VoxelProperties
    {
        static constexpr std::string_view Name = "VoxelProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t VoxelCount = 0x68;
            static constexpr std::uintptr_t bAutoSimplify = 0x6C;
            static constexpr std::uintptr_t bRemoveInternalSurfaces = 0x6D;
            static constexpr std::uintptr_t SimplifyMaxErrorFactor = 0x70;
            static constexpr std::uintptr_t CubeRootMinComponentVolume = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"VoxelCount", 0x68, "IntProperty"},
            {"bAutoSimplify", 0x6C, "BoolProperty"},
            {"bRemoveInternalSurfaces", 0x6D, "BoolProperty"},
            {"SimplifyMaxErrorFactor", 0x70, "DoubleProperty"},
            {"CubeRootMinComponentVolume", 0x78, "DoubleProperty"},
        }};
    };

    struct WeightMapSetProperties
    {
        static constexpr std::string_view Name = "WeightMapSetProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t WeightMap = 0x68;
            static constexpr std::uintptr_t WeightMapsList = 0x70;
            static constexpr std::uintptr_t bInvertWeightMap = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WeightMap", 0x68, "NameProperty"},
            {"WeightMapsList", 0x70, "ArrayProperty"},
            {"bInvertWeightMap", 0x80, "BoolProperty"},
        }};
    };

}
