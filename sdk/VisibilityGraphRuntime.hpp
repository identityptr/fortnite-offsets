#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VisibilityGraphRuntime
{
    struct DepthCaptureRenderComponent
    {
        static constexpr std::string_view Name = "DepthCaptureRenderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableVisualization = 0x560;
            static constexpr std::uintptr_t MaxDrawDistance = 0x564;
            static constexpr std::uintptr_t QuadSize = 0x568;
            static constexpr std::uintptr_t QuadRenderOffset = 0x570;
            static constexpr std::uintptr_t BaseMaterial = 0x588;
            static constexpr std::uintptr_t CaptureTextures = 0x590;
            static constexpr std::uintptr_t CaptureMaterials = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bEnableVisualization", 0x560, "BoolProperty"},
            {"MaxDrawDistance", 0x564, "FloatProperty"},
            {"QuadSize", 0x568, "FloatProperty"},
            {"QuadRenderOffset", 0x570, "StructProperty"},
            {"BaseMaterial", 0x588, "ObjectProperty"},
            {"CaptureTextures", 0x590, "ArrayProperty"},
            {"CaptureMaterials", 0x5A0, "ArrayProperty"},
        }};
    };

    struct DepthCaptureTestComponent
    {
        static constexpr std::string_view Name = "DepthCaptureTestComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DepthCaptureRenderComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CaptureParameters = 0x5E0;
            static constexpr std::uintptr_t bDrawFullResTextures = 0x600;
            static constexpr std::uintptr_t TestCaptureData = 0x608;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CaptureParameters", 0x5E0, "StructProperty"},
            {"bDrawFullResTextures", 0x600, "BoolProperty"},
            {"TestCaptureData", 0x608, "StructProperty"},
        }};
    };

    struct VisibilityGraphTestComponent
    {
        static constexpr std::string_view Name = "VisibilityGraphTestComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bLimitPolyGatherBounds = 0x560;
            static constexpr std::uintptr_t GatheringBounds = 0x568;
            static constexpr std::uintptr_t ExecuteStepByStep = 0x5A0;
            static constexpr std::uintptr_t ClusteringConfig = 0x5A8;
            static constexpr std::uintptr_t VisibilityGraphConfig = 0x638;
            static constexpr std::uintptr_t VisibilityGraph = 0x678;
            static constexpr std::uintptr_t bEnableDraw = 0x698;
            static constexpr std::uintptr_t ClusterDrawDistance = 0x69C;
            static constexpr std::uintptr_t bDrawPolygons = 0x6A0;
            static constexpr std::uintptr_t ColorMode = 0x6A1;
            static constexpr std::uintptr_t bDrawNeighborLines = 0x6A2;
            static constexpr std::uintptr_t bDrawClusterCentroids = 0x6A3;
            static constexpr std::uintptr_t DebugClusterCentroidSize = 0x6A4;
            static constexpr std::uintptr_t bDrawMembershipLines = 0x6A8;
            static constexpr std::uintptr_t bDrawGraph = 0x6A9;
            static constexpr std::uintptr_t EdgeFlagsToDraw = 0x6AA;
            static constexpr std::uintptr_t bDrawEdgesToInvisibleNodes = 0x6AB;
            static constexpr std::uintptr_t DebugDrawGraphNodeDistance = 0x6AC;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"bLimitPolyGatherBounds", 0x560, "BoolProperty"},
            {"GatheringBounds", 0x568, "StructProperty"},
            {"ExecuteStepByStep", 0x5A0, "UInt32Property"},
            {"ClusteringConfig", 0x5A8, "StructProperty"},
            {"VisibilityGraphConfig", 0x638, "StructProperty"},
            {"VisibilityGraph", 0x678, "StructProperty"},
            {"bEnableDraw", 0x698, "BoolProperty"},
            {"ClusterDrawDistance", 0x69C, "FloatProperty"},
            {"bDrawPolygons", 0x6A0, "BoolProperty"},
            {"ColorMode", 0x6A1, "EnumProperty"},
            {"bDrawNeighborLines", 0x6A2, "BoolProperty"},
            {"bDrawClusterCentroids", 0x6A3, "BoolProperty"},
            {"DebugClusterCentroidSize", 0x6A4, "FloatProperty"},
            {"bDrawMembershipLines", 0x6A8, "BoolProperty"},
            {"bDrawGraph", 0x6A9, "BoolProperty"},
            {"EdgeFlagsToDraw", 0x6AA, "ByteProperty"},
            {"bDrawEdgesToInvisibleNodes", 0x6AB, "BoolProperty"},
            {"DebugDrawGraphNodeDistance", 0x6AC, "FloatProperty"},
        }};
    };

}
