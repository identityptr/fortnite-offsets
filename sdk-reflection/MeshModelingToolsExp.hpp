#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MeshModelingToolsExp
{
    struct AddPatchTool
    {
        static constexpr std::string_view Name = "AddPatchTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleClickTool";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeSettings = 0xC0;
            static constexpr std::uintptr_t MaterialProperties = 0xC8;
            static constexpr std::uintptr_t PreviewMesh = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ShapeSettings", 0xC0, "ObjectProperty"},
            {"MaterialProperties", 0xC8, "ObjectProperty"},
            {"PreviewMesh", 0xD0, "ObjectProperty"},
        }};
    };

    struct AddPatchToolBuilder
    {
        static constexpr std::string_view Name = "AddPatchToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AddPatchToolProperties
    {
        static constexpr std::string_view Name = "AddPatchToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Width = 0x68;
            static constexpr std::uintptr_t Rotation = 0x6C;
            static constexpr std::uintptr_t Subdivisions = 0x70;
            static constexpr std::uintptr_t Shift = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Width", 0x68, "FloatProperty"},
            {"Rotation", 0x6C, "FloatProperty"},
            {"Subdivisions", 0x70, "IntProperty"},
            {"Shift", 0x74, "FloatProperty"},
        }};
    };

    struct AlignObjectsTool
    {
        static constexpr std::string_view Name = "AlignObjectsTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t AlignProps = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AlignProps", 0xD8, "ObjectProperty"},
        }};
    };

    struct AlignObjectsToolBuilder
    {
        static constexpr std::string_view Name = "AlignObjectsToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AlignObjectsToolProperties
    {
        static constexpr std::string_view Name = "AlignObjectsToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t AlignType = 0x68;
            static constexpr std::uintptr_t AlignTo = 0x6C;
            static constexpr std::uintptr_t BoxPosition = 0x70;
            static constexpr std::uintptr_t bAlignX = 0x74;
            static constexpr std::uintptr_t bAlignY = 0x75;
            static constexpr std::uintptr_t bAlignZ = 0x76;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AlignType", 0x68, "EnumProperty"},
            {"AlignTo", 0x6C, "EnumProperty"},
            {"BoxPosition", 0x70, "EnumProperty"},
            {"bAlignX", 0x74, "BoolProperty"},
            {"bAlignY", 0x75, "BoolProperty"},
            {"bAlignZ", 0x76, "BoolProperty"},
        }};
    };

    struct BakeCurvatureMapToolProperties
    {
        static constexpr std::string_view Name = "BakeCurvatureMapToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CurvatureType = 0x68;
            static constexpr std::uintptr_t ColorMapping = 0x6C;
            static constexpr std::uintptr_t ColorRangeMultiplier = 0x70;
            static constexpr std::uintptr_t MinRangeMultiplier = 0x74;
            static constexpr std::uintptr_t Clamping = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CurvatureType", 0x68, "EnumProperty"},
            {"ColorMapping", 0x6C, "EnumProperty"},
            {"ColorRangeMultiplier", 0x70, "FloatProperty"},
            {"MinRangeMultiplier", 0x74, "FloatProperty"},
            {"Clamping", 0x78, "EnumProperty"},
        }};
    };

    struct BakeHeightMapToolProperties
    {
        static constexpr std::string_view Name = "BakeHeightMapToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t HeightRangeMode = 0x68;
            static constexpr std::uintptr_t InnerDistance = 0x6C;
            static constexpr std::uintptr_t OuterDistance = 0x70;
            static constexpr std::uintptr_t InnerBoundsDistance = 0x74;
            static constexpr std::uintptr_t OuterBoundsDistance = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HeightRangeMode", 0x68, "EnumProperty"},
            {"InnerDistance", 0x6C, "FloatProperty"},
            {"OuterDistance", 0x70, "FloatProperty"},
            {"InnerBoundsDistance", 0x74, "FloatProperty"},
            {"OuterBoundsDistance", 0x78, "FloatProperty"},
        }};
    };

    struct BakeInputMeshProperties
    {
        static constexpr std::string_view Name = "BakeInputMeshProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetStaticMesh = 0x68;
            static constexpr std::uintptr_t TargetSkeletalMesh = 0x70;
            static constexpr std::uintptr_t TargetDynamicMesh = 0x78;
            static constexpr std::uintptr_t TargetUVLayer = 0x80;
            static constexpr std::uintptr_t bHasTargetUVLayer = 0x90;
            static constexpr std::uintptr_t SourceStaticMesh = 0x98;
            static constexpr std::uintptr_t SourceSkeletalMesh = 0xA0;
            static constexpr std::uintptr_t SourceDynamicMesh = 0xA8;
            static constexpr std::uintptr_t bHideSourceMesh = 0xB0;
            static constexpr std::uintptr_t SourceNormalMap = 0xB8;
            static constexpr std::uintptr_t SourceNormalMapUVLayer = 0xC0;
            static constexpr std::uintptr_t SourceNormalSpace = 0xD0;
            static constexpr std::uintptr_t bHasSourceNormalMap = 0xD4;
            static constexpr std::uintptr_t ProjectionDistance = 0xD8;
            static constexpr std::uintptr_t bProjectionInWorldSpace = 0xDC;
            static constexpr std::uintptr_t TargetUVLayerNamesList = 0xE0;
            static constexpr std::uintptr_t SourceUVLayerNamesList = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"TargetStaticMesh", 0x68, "ObjectProperty"},
            {"TargetSkeletalMesh", 0x70, "ObjectProperty"},
            {"TargetDynamicMesh", 0x78, "ObjectProperty"},
            {"TargetUVLayer", 0x80, "StrProperty"},
            {"bHasTargetUVLayer", 0x90, "BoolProperty"},
            {"SourceStaticMesh", 0x98, "ObjectProperty"},
            {"SourceSkeletalMesh", 0xA0, "ObjectProperty"},
            {"SourceDynamicMesh", 0xA8, "ObjectProperty"},
            {"bHideSourceMesh", 0xB0, "BoolProperty"},
            {"SourceNormalMap", 0xB8, "ObjectProperty"},
            {"SourceNormalMapUVLayer", 0xC0, "StrProperty"},
            {"SourceNormalSpace", 0xD0, "EnumProperty"},
            {"bHasSourceNormalMap", 0xD4, "BoolProperty"},
            {"ProjectionDistance", 0xD8, "FloatProperty"},
            {"bProjectionInWorldSpace", 0xDC, "BoolProperty"},
            {"TargetUVLayerNamesList", 0xE0, "ArrayProperty"},
            {"SourceUVLayerNamesList", 0xF0, "ArrayProperty"},
        }};
    };

    struct BakeMeshAttributeMapsResultToolProperties
    {
        static constexpr std::string_view Name = "BakeMeshAttributeMapsResultToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Result", 0x68, "MapProperty"},
        }};
    };

    struct BakeMeshAttributeMapsTool
    {
        static constexpr std::string_view Name = "BakeMeshAttributeMapsTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BakeMeshAttributeMapsToolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMeshSettings = 0x320;
            static constexpr std::uintptr_t Settings = 0x328;
            static constexpr std::uintptr_t ResultSettings = 0x330;
            static constexpr std::uintptr_t UVShellSettings = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputMeshSettings", 0x320, "ObjectProperty"},
            {"Settings", 0x328, "ObjectProperty"},
            {"ResultSettings", 0x330, "ObjectProperty"},
            {"UVShellSettings", 0x338, "ObjectProperty"},
        }};
    };

    struct BakeMeshAttributeMapsToolBase
    {
        static constexpr std::string_view Name = "BakeMeshAttributeMapsToolBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BakeMeshAttributeTool";
        struct Offsets
        {
            static constexpr std::uintptr_t VisualizationProps = 0x1F0;
            static constexpr std::uintptr_t PreviewMesh = 0x1F8;
            static constexpr std::uintptr_t PreviewMaterial = 0x200;
            static constexpr std::uintptr_t BentNormalPreviewMaterial = 0x208;
            static constexpr std::uintptr_t CachedMaps = 0x260;
            static constexpr std::uintptr_t EmptyNormalMap = 0x308;
            static constexpr std::uintptr_t EmptyColorMapBlack = 0x310;
            static constexpr std::uintptr_t EmptyColorMapWhite = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VisualizationProps", 0x1F0, "ObjectProperty"},
            {"PreviewMesh", 0x1F8, "ObjectProperty"},
            {"PreviewMaterial", 0x200, "ObjectProperty"},
            {"BentNormalPreviewMaterial", 0x208, "ObjectProperty"},
            {"CachedMaps", 0x260, "MapProperty"},
            {"EmptyNormalMap", 0x308, "ObjectProperty"},
            {"EmptyColorMapBlack", 0x310, "ObjectProperty"},
            {"EmptyColorMapWhite", 0x318, "ObjectProperty"},
        }};
    };

    struct BakeMeshAttributeMapsToolBuilder
    {
        static constexpr std::string_view Name = "BakeMeshAttributeMapsToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BakeMeshAttributeMapsToolProperties
    {
        static constexpr std::string_view Name = "BakeMeshAttributeMapsToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t MapTypes = 0x68;
            static constexpr std::uintptr_t MapPreview = 0x70;
            static constexpr std::uintptr_t Resolution = 0x80;
            static constexpr std::uintptr_t BitDepth = 0x84;
            static constexpr std::uintptr_t SamplesPerPixel = 0x88;
            static constexpr std::uintptr_t SampleFilterMask = 0x90;
            static constexpr std::uintptr_t MapPreviewNamesList = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MapTypes", 0x68, "IntProperty"},
            {"MapPreview", 0x70, "StrProperty"},
            {"Resolution", 0x80, "EnumProperty"},
            {"BitDepth", 0x84, "EnumProperty"},
            {"SamplesPerPixel", 0x88, "EnumProperty"},
            {"SampleFilterMask", 0x90, "ObjectProperty"},
            {"MapPreviewNamesList", 0x98, "ArrayProperty"},
        }};
    };

    struct BakeMeshAttributeTool
    {
        static constexpr std::string_view Name = "BakeMeshAttributeTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OcclusionSettings = 0xE0;
            static constexpr std::uintptr_t CurvatureSettings = 0xE8;
            static constexpr std::uintptr_t TextureSettings = 0xF0;
            static constexpr std::uintptr_t MultiTextureSettings = 0xF8;
            static constexpr std::uintptr_t HeightSettings = 0x100;
            static constexpr std::uintptr_t WorkingPreviewMaterial = 0x108;
            static constexpr std::uintptr_t ErrorPreviewMaterial = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OcclusionSettings", 0xE0, "ObjectProperty"},
            {"CurvatureSettings", 0xE8, "ObjectProperty"},
            {"TextureSettings", 0xF0, "ObjectProperty"},
            {"MultiTextureSettings", 0xF8, "ObjectProperty"},
            {"HeightSettings", 0x100, "ObjectProperty"},
            {"WorkingPreviewMaterial", 0x108, "ObjectProperty"},
            {"ErrorPreviewMaterial", 0x110, "ObjectProperty"},
        }};
    };

    struct BakeMeshAttributeVertexTool
    {
        static constexpr std::string_view Name = "BakeMeshAttributeVertexTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BakeMeshAttributeTool";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMeshSettings = 0x1F0;
            static constexpr std::uintptr_t Settings = 0x1F8;
            static constexpr std::uintptr_t PreviewMesh = 0x200;
            static constexpr std::uintptr_t PreviewMaterial = 0x208;
            static constexpr std::uintptr_t PreviewAlphaMaterial = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InputMeshSettings", 0x1F0, "ObjectProperty"},
            {"Settings", 0x1F8, "ObjectProperty"},
            {"PreviewMesh", 0x200, "ObjectProperty"},
            {"PreviewMaterial", 0x208, "ObjectProperty"},
            {"PreviewAlphaMaterial", 0x210, "ObjectProperty"},
        }};
    };

    struct BakeMeshAttributeVertexToolBuilder
    {
        static constexpr std::string_view Name = "BakeMeshAttributeVertexToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BakeMeshAttributeVertexToolProperties
    {
        static constexpr std::string_view Name = "BakeMeshAttributeVertexToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputMode = 0x68;
            static constexpr std::uintptr_t OutputType = 0x6C;
            static constexpr std::uintptr_t OutputTypeR = 0x70;
            static constexpr std::uintptr_t OutputTypeG = 0x74;
            static constexpr std::uintptr_t OutputTypeB = 0x78;
            static constexpr std::uintptr_t OutputTypeA = 0x7C;
            static constexpr std::uintptr_t PreviewMode = 0x80;
            static constexpr std::uintptr_t TopologyMode = 0x84;
            static constexpr std::uintptr_t bSplitAtNormalSeams = 0x88;
            static constexpr std::uintptr_t bSplitAtUVSeams = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OutputMode", 0x68, "EnumProperty"},
            {"OutputType", 0x6C, "IntProperty"},
            {"OutputTypeR", 0x70, "IntProperty"},
            {"OutputTypeG", 0x74, "IntProperty"},
            {"OutputTypeB", 0x78, "IntProperty"},
            {"OutputTypeA", 0x7C, "IntProperty"},
            {"PreviewMode", 0x80, "EnumProperty"},
            {"TopologyMode", 0x84, "EnumProperty"},
            {"bSplitAtNormalSeams", 0x88, "BoolProperty"},
            {"bSplitAtUVSeams", 0x89, "BoolProperty"},
        }};
    };

    struct BakeMultiMeshAttributeMapsTool
    {
        static constexpr std::string_view Name = "BakeMultiMeshAttributeMapsTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BakeMeshAttributeMapsToolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x320;
            static constexpr std::uintptr_t InputMeshSettings = 0x328;
            static constexpr std::uintptr_t ResultSettings = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Settings", 0x320, "ObjectProperty"},
            {"InputMeshSettings", 0x328, "ObjectProperty"},
            {"ResultSettings", 0x330, "ObjectProperty"},
        }};
    };

    struct BakeMultiMeshAttributeMapsToolBuilder
    {
        static constexpr std::string_view Name = "BakeMultiMeshAttributeMapsToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BakeMultiMeshAttributeMapsToolProperties
    {
        static constexpr std::string_view Name = "BakeMultiMeshAttributeMapsToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t MapTypes = 0x68;
            static constexpr std::uintptr_t MapPreview = 0x70;
            static constexpr std::uintptr_t Resolution = 0x80;
            static constexpr std::uintptr_t BitDepth = 0x84;
            static constexpr std::uintptr_t SamplesPerPixel = 0x88;
            static constexpr std::uintptr_t SampleFilterMask = 0x90;
            static constexpr std::uintptr_t MapPreviewNamesList = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MapTypes", 0x68, "IntProperty"},
            {"MapPreview", 0x70, "StrProperty"},
            {"Resolution", 0x80, "EnumProperty"},
            {"BitDepth", 0x84, "EnumProperty"},
            {"SamplesPerPixel", 0x88, "EnumProperty"},
            {"SampleFilterMask", 0x90, "ObjectProperty"},
            {"MapPreviewNamesList", 0x98, "ArrayProperty"},
        }};
    };

    struct BakeMultiMeshInputToolProperties
    {
        static constexpr std::string_view Name = "BakeMultiMeshInputToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetStaticMesh = 0x68;
            static constexpr std::uintptr_t TargetSkeletalMesh = 0x70;
            static constexpr std::uintptr_t TargetDynamicMesh = 0x78;
            static constexpr std::uintptr_t TargetUVLayer = 0x80;
            static constexpr std::uintptr_t SourceMeshes = 0x90;
            static constexpr std::uintptr_t ProjectionDistance = 0xA0;
            static constexpr std::uintptr_t TargetUVLayerNamesList = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TargetStaticMesh", 0x68, "ObjectProperty"},
            {"TargetSkeletalMesh", 0x70, "ObjectProperty"},
            {"TargetDynamicMesh", 0x78, "ObjectProperty"},
            {"TargetUVLayer", 0x80, "StrProperty"},
            {"SourceMeshes", 0x90, "ArrayProperty"},
            {"ProjectionDistance", 0xA0, "FloatProperty"},
            {"TargetUVLayerNamesList", 0xA8, "ArrayProperty"},
        }};
    };

    struct BakeMultiTexture2DProperties
    {
        static constexpr std::string_view Name = "BakeMultiTexture2DProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialIDSourceTextures = 0x68;
            static constexpr std::uintptr_t UVLayer = 0x78;
            static constexpr std::uintptr_t UVLayerNamesList = 0x88;
            static constexpr std::uintptr_t AllSourceTextures = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaterialIDSourceTextures", 0x68, "ArrayProperty"},
            {"UVLayer", 0x78, "StrProperty"},
            {"UVLayerNamesList", 0x88, "ArrayProperty"},
            {"AllSourceTextures", 0x98, "ArrayProperty"},
        }};
    };

    struct BakeNormalMapToolProperties
    {
        static constexpr std::string_view Name = "BakeNormalMapToolProperties";
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

    struct BakeOcclusionMapToolProperties
    {
        static constexpr std::string_view Name = "BakeOcclusionMapToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t OcclusionRays = 0x68;
            static constexpr std::uintptr_t MaxDistance = 0x6C;
            static constexpr std::uintptr_t SpreadAngle = 0x70;
            static constexpr std::uintptr_t BiasAngle = 0x74;
            static constexpr std::uintptr_t NormalSpace = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OcclusionRays", 0x68, "IntProperty"},
            {"MaxDistance", 0x6C, "FloatProperty"},
            {"SpreadAngle", 0x70, "FloatProperty"},
            {"BiasAngle", 0x74, "FloatProperty"},
            {"NormalSpace", 0x78, "EnumProperty"},
        }};
    };

    struct BakeTexture2DProperties
    {
        static constexpr std::string_view Name = "BakeTexture2DProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceTexture = 0x68;
            static constexpr std::uintptr_t UVLayer = 0x70;
            static constexpr std::uintptr_t UVLayerNamesList = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceTexture", 0x68, "ObjectProperty"},
            {"UVLayer", 0x70, "StrProperty"},
            {"UVLayerNamesList", 0x80, "ArrayProperty"},
        }};
    };

    struct BakeTransformTool
    {
        static constexpr std::string_view Name = "BakeTransformTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BasicProperties = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BasicProperties", 0xD8, "ObjectProperty"},
        }};
    };

    struct BakeTransformToolBuilder
    {
        static constexpr std::string_view Name = "BakeTransformToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BakeTransformToolProperties
    {
        static constexpr std::string_view Name = "BakeTransformToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyToAllLODs = 0x68;
            static constexpr std::uintptr_t bBakeRotation = 0x69;
            static constexpr std::uintptr_t BakeScale = 0x6A;
            static constexpr std::uintptr_t bRecenterPivot = 0x6B;
            static constexpr std::uintptr_t bAllowNoScale = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bApplyToAllLODs", 0x68, "BoolProperty"},
            {"bBakeRotation", 0x69, "BoolProperty"},
            {"BakeScale", 0x6A, "EnumProperty"},
            {"bRecenterPivot", 0x6B, "BoolProperty"},
            {"bAllowNoScale", 0x6C, "BoolProperty"},
        }};
    };

    struct BakeUVShellMapToolProperties
    {
        static constexpr std::string_view Name = "BakeUVShellMapToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t UVLayer = 0x68;
            static constexpr std::uintptr_t WireframeThickness = 0x6C;
            static constexpr std::uintptr_t WireframeColor = 0x70;
            static constexpr std::uintptr_t ShellColor = 0x80;
            static constexpr std::uintptr_t BackgroundColor = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"UVLayer", 0x68, "IntProperty"},
            {"WireframeThickness", 0x6C, "FloatProperty"},
            {"WireframeColor", 0x70, "StructProperty"},
            {"ShellColor", 0x80, "StructProperty"},
            {"BackgroundColor", 0x90, "StructProperty"},
        }};
    };

    struct BakeVisualizationProperties
    {
        static constexpr std::string_view Name = "BakeVisualizationProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bPreviewAsMaterial = 0x68;
            static constexpr std::uintptr_t Brightness = 0x6C;
            static constexpr std::uintptr_t AOMultiplier = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bPreviewAsMaterial", 0x68, "BoolProperty"},
            {"Brightness", 0x6C, "FloatProperty"},
            {"AOMultiplier", 0x70, "FloatProperty"},
        }};
    };

    struct BaseMeshFromSplinesTool
    {
        static constexpr std::string_view Name = "BaseMeshFromSplinesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xC0;
            static constexpr std::uintptr_t MaterialProperties = 0xC8;
            static constexpr std::uintptr_t Preview = 0xD0;
            static constexpr std::uintptr_t TargetWorld = 0xD8;
            static constexpr std::uintptr_t ActorsWithSplines = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OutputTypeProperties", 0xC0, "ObjectProperty"},
            {"MaterialProperties", 0xC8, "ObjectProperty"},
            {"Preview", 0xD0, "ObjectProperty"},
            {"TargetWorld", 0xD8, "WeakObjectProperty"},
            {"ActorsWithSplines", 0xE0, "ArrayProperty"},
        }};
    };

    struct BaseMeshFromSplinesToolBuilder
    {
        static constexpr std::string_view Name = "BaseMeshFromSplinesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CollisionGeometryVisualizationProperties
    {
        static constexpr std::string_view Name = "CollisionGeometryVisualizationProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowCollision = 0x68;
            static constexpr std::uintptr_t bShowSolid = 0x69;
            static constexpr std::uintptr_t LineThickness = 0x6C;
            static constexpr std::uintptr_t bShowHidden = 0x70;
            static constexpr std::uintptr_t bRandomColors = 0x71;
            static constexpr std::uintptr_t Color = 0x74;
            static constexpr std::uintptr_t LineMaterial = 0x78;
            static constexpr std::uintptr_t LineMaterialShowingHidden = 0x80;
            static constexpr std::uintptr_t TriangleMaterial = 0x88;
            static constexpr std::uintptr_t bEnableShowCollision = 0x90;
            static constexpr std::uintptr_t bEnableShowSolid = 0x91;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bShowCollision", 0x68, "BoolProperty"},
            {"bShowSolid", 0x69, "BoolProperty"},
            {"LineThickness", 0x6C, "FloatProperty"},
            {"bShowHidden", 0x70, "BoolProperty"},
            {"bRandomColors", 0x71, "BoolProperty"},
            {"Color", 0x74, "StructProperty"},
            {"LineMaterial", 0x78, "ObjectProperty"},
            {"LineMaterialShowingHidden", 0x80, "ObjectProperty"},
            {"TriangleMaterial", 0x88, "ObjectProperty"},
            {"bEnableShowCollision", 0x90, "BoolProperty"},
            {"bEnableShowSolid", 0x91, "BoolProperty"},
        }};
    };

    struct ConvertMeshesTool
    {
        static constexpr std::string_view Name = "ConvertMeshesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BasicProperties = 0xB8;
            static constexpr std::uintptr_t OutputTypeProperties = 0xC0;
            static constexpr std::uintptr_t Inputs = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BasicProperties", 0xB8, "ObjectProperty"},
            {"OutputTypeProperties", 0xC0, "ObjectProperty"},
            {"Inputs", 0xC8, "ArrayProperty"},
        }};
    };

    struct ConvertMeshesToolBuilder
    {
        static constexpr std::string_view Name = "ConvertMeshesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ConvertMeshesToolProperties
    {
        static constexpr std::string_view Name = "ConvertMeshesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bTransferMaterials = 0x68;
            static constexpr std::uintptr_t bShowTransferMaterials = 0x69;
            static constexpr std::uintptr_t bTransferCollision = 0x6A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bTransferMaterials", 0x68, "BoolProperty"},
            {"bShowTransferMaterials", 0x69, "BoolProperty"},
            {"bTransferCollision", 0x6A, "BoolProperty"},
        }};
    };

    struct CubeGridTool
    {
        static constexpr std::string_view Name = "CubeGridTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t GridGizmo = 0xD8;
            static constexpr std::uintptr_t GridGizmoAlignmentMechanic = 0xE0;
            static constexpr std::uintptr_t GridGizmoTransformProxy = 0xE8;
            static constexpr std::uintptr_t LineSets = 0xF0;
            static constexpr std::uintptr_t ClickDragBehavior = 0xF8;
            static constexpr std::uintptr_t HoverBehavior = 0x100;
            static constexpr std::uintptr_t CtrlMiddleClickBehavior = 0x108;
            static constexpr std::uintptr_t MiddleClickDragBehavior = 0x110;
            static constexpr std::uintptr_t Settings = 0x118;
            static constexpr std::uintptr_t ToolActions = 0x120;
            static constexpr std::uintptr_t MaterialProperties = 0x128;
            static constexpr std::uintptr_t OutputTypeProperties = 0x130;
            static constexpr std::uintptr_t Target = 0x138;
            static constexpr std::uintptr_t Preview = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GridGizmo", 0xD8, "ObjectProperty"},
            {"GridGizmoAlignmentMechanic", 0xE0, "ObjectProperty"},
            {"GridGizmoTransformProxy", 0xE8, "ObjectProperty"},
            {"LineSets", 0xF0, "ObjectProperty"},
            {"ClickDragBehavior", 0xF8, "ObjectProperty"},
            {"HoverBehavior", 0x100, "ObjectProperty"},
            {"CtrlMiddleClickBehavior", 0x108, "ObjectProperty"},
            {"MiddleClickDragBehavior", 0x110, "ObjectProperty"},
            {"Settings", 0x118, "ObjectProperty"},
            {"ToolActions", 0x120, "ObjectProperty"},
            {"MaterialProperties", 0x128, "ObjectProperty"},
            {"OutputTypeProperties", 0x130, "ObjectProperty"},
            {"Target", 0x138, "ObjectProperty"},
            {"Preview", 0x2C0, "ObjectProperty"},
        }};
    };

    struct CubeGridToolActions
    {
        static constexpr std::string_view Name = "CubeGridToolActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t GridSourceActor = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GridSourceActor", 0x70, "ObjectProperty"},
        }};
    };

    struct CubeGridToolBuilder
    {
        static constexpr std::string_view Name = "CubeGridToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolWithToolTargetsBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CubeGridToolProperties
    {
        static constexpr std::string_view Name = "CubeGridToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t GridFrameOrigin = 0x68;
            static constexpr std::uintptr_t GridFrameOrientation = 0x80;
            static constexpr std::uintptr_t bShowGrid = 0x98;
            static constexpr std::uintptr_t bShowGizmo = 0x99;
            static constexpr std::uintptr_t GridPower = 0xA8;
            static constexpr std::uintptr_t CurrentBlockSize = 0xB0;
            static constexpr std::uintptr_t BlocksPerStep = 0xB8;
            static constexpr std::uintptr_t bPowerOfTwoBlockSizes = 0xBC;
            static constexpr std::uintptr_t BlockBaseSize = 0xC0;
            static constexpr std::uintptr_t bCrosswiseDiagonal = 0xC8;
            static constexpr std::uintptr_t bKeepSideGroups = 0xC9;
            static constexpr std::uintptr_t bShowSelectionMeasurements = 0xCA;
            static constexpr std::uintptr_t PlaneTolerance = 0xD0;
            static constexpr std::uintptr_t bHitUnrelatedGeometry = 0xD8;
            static constexpr std::uintptr_t bHitGridGroundPlaneIfCloser = 0xD9;
            static constexpr std::uintptr_t FaceSelectionMode = 0xDC;
            static constexpr std::uintptr_t ToggleCornerMode = 0xE0;
            static constexpr std::uintptr_t PushPull = 0xF0;
            static constexpr std::uintptr_t ResizeGrid = 0x100;
            static constexpr std::uintptr_t FlipSelection = 0x120;
            static constexpr std::uintptr_t GridGizmo = 0x130;
            static constexpr std::uintptr_t QuickShiftGizmo = 0x140;
            static constexpr std::uintptr_t AlignGizmo = 0x150;
            static constexpr std::uintptr_t bInCornerMode = 0x160;
            static constexpr std::uintptr_t bAllowedToEditGrid = 0x161;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"GridFrameOrigin", 0x68, "StructProperty"},
            {"GridFrameOrientation", 0x80, "StructProperty"},
            {"bShowGrid", 0x98, "BoolProperty"},
            {"bShowGizmo", 0x99, "BoolProperty"},
            {"GridPower", 0xA8, "ByteProperty"},
            {"CurrentBlockSize", 0xB0, "DoubleProperty"},
            {"BlocksPerStep", 0xB8, "IntProperty"},
            {"bPowerOfTwoBlockSizes", 0xBC, "BoolProperty"},
            {"BlockBaseSize", 0xC0, "DoubleProperty"},
            {"bCrosswiseDiagonal", 0xC8, "BoolProperty"},
            {"bKeepSideGroups", 0xC9, "BoolProperty"},
            {"bShowSelectionMeasurements", 0xCA, "BoolProperty"},
            {"PlaneTolerance", 0xD0, "DoubleProperty"},
            {"bHitUnrelatedGeometry", 0xD8, "BoolProperty"},
            {"bHitGridGroundPlaneIfCloser", 0xD9, "BoolProperty"},
            {"FaceSelectionMode", 0xDC, "EnumProperty"},
            {"ToggleCornerMode", 0xE0, "StrProperty"},
            {"PushPull", 0xF0, "StrProperty"},
            {"ResizeGrid", 0x100, "StrProperty"},
            {"FlipSelection", 0x120, "StrProperty"},
            {"GridGizmo", 0x130, "StrProperty"},
            {"QuickShiftGizmo", 0x140, "StrProperty"},
            {"AlignGizmo", 0x150, "StrProperty"},
            {"bInCornerMode", 0x160, "BoolProperty"},
            {"bAllowedToEditGrid", 0x161, "BoolProperty"},
        }};
    };

    struct DrawPolyPathExtrudeProperties
    {
        static constexpr std::string_view Name = "DrawPolyPathExtrudeProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Direction = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Direction", 0x68, "EnumProperty"},
        }};
    };

    struct DrawPolyPathProperties
    {
        static constexpr std::string_view Name = "DrawPolyPathProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t WidthMode = 0x68;
            static constexpr std::uintptr_t Width = 0x6C;
            static constexpr std::uintptr_t bRoundedCorners = 0x70;
            static constexpr std::uintptr_t RadiusMode = 0x74;
            static constexpr std::uintptr_t CornerRadius = 0x78;
            static constexpr std::uintptr_t RadialSlices = 0x7C;
            static constexpr std::uintptr_t bSinglePolyGroup = 0x80;
            static constexpr std::uintptr_t ExtrudeMode = 0x84;
            static constexpr std::uintptr_t ExtrudeHeight = 0x88;
            static constexpr std::uintptr_t RampStartRatio = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"WidthMode", 0x68, "EnumProperty"},
            {"Width", 0x6C, "FloatProperty"},
            {"bRoundedCorners", 0x70, "BoolProperty"},
            {"RadiusMode", 0x74, "EnumProperty"},
            {"CornerRadius", 0x78, "FloatProperty"},
            {"RadialSlices", 0x7C, "IntProperty"},
            {"bSinglePolyGroup", 0x80, "BoolProperty"},
            {"ExtrudeMode", 0x84, "EnumProperty"},
            {"ExtrudeHeight", 0x88, "FloatProperty"},
            {"RampStartRatio", 0x8C, "FloatProperty"},
        }};
    };

    struct DrawPolyPathTool
    {
        static constexpr std::string_view Name = "DrawPolyPathTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xD0;
            static constexpr std::uintptr_t TransformProps = 0xD8;
            static constexpr std::uintptr_t ExtrudeProperties = 0xE0;
            static constexpr std::uintptr_t MaterialProperties = 0xE8;
            static constexpr std::uintptr_t PlaneMechanic = 0x1D0;
            static constexpr std::uintptr_t EditPreview = 0x298;
            static constexpr std::uintptr_t ExtrudeHeightMechanic = 0x2A0;
            static constexpr std::uintptr_t CurveDistMechanic = 0x2A8;
            static constexpr std::uintptr_t SurfacePathMechanic = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OutputTypeProperties", 0xD0, "ObjectProperty"},
            {"TransformProps", 0xD8, "ObjectProperty"},
            {"ExtrudeProperties", 0xE0, "ObjectProperty"},
            {"MaterialProperties", 0xE8, "ObjectProperty"},
            {"PlaneMechanic", 0x1D0, "ObjectProperty"},
            {"EditPreview", 0x298, "ObjectProperty"},
            {"ExtrudeHeightMechanic", 0x2A0, "ObjectProperty"},
            {"CurveDistMechanic", 0x2A8, "ObjectProperty"},
            {"SurfacePathMechanic", 0x2B0, "ObjectProperty"},
        }};
    };

    struct DrawPolyPathToolBuilder
    {
        static constexpr std::string_view Name = "DrawPolyPathToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditNormalsOperatorFactory
    {
        static constexpr std::string_view Name = "EditNormalsOperatorFactory";
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

    struct EditNormalsTool
    {
        static constexpr std::string_view Name = "EditNormalsTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BasicProperties = 0xD8;
            static constexpr std::uintptr_t PolygroupLayerProperties = 0xE0;
            static constexpr std::uintptr_t Previews = 0xE8;
            static constexpr std::uintptr_t GeometrySelectionVizProperties = 0x190;
            static constexpr std::uintptr_t GeometrySelectionViz = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BasicProperties", 0xD8, "ObjectProperty"},
            {"PolygroupLayerProperties", 0xE0, "ObjectProperty"},
            {"Previews", 0xE8, "ArrayProperty"},
            {"GeometrySelectionVizProperties", 0x190, "ObjectProperty"},
            {"GeometrySelectionViz", 0x198, "ObjectProperty"},
        }};
    };

    struct EditNormalsToolBuilder
    {
        static constexpr std::string_view Name = "EditNormalsToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditNormalsToolProperties
    {
        static constexpr std::string_view Name = "EditNormalsToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bRecomputeNormals = 0x68;
            static constexpr std::uintptr_t NormalCalculationMethod = 0x69;
            static constexpr std::uintptr_t bFixInconsistentNormals = 0x6A;
            static constexpr std::uintptr_t bInvertNormals = 0x6B;
            static constexpr std::uintptr_t SplitNormalMethod = 0x6C;
            static constexpr std::uintptr_t SharpEdgeAngleThreshold = 0x70;
            static constexpr std::uintptr_t bAllowSharpVertices = 0x74;
            static constexpr std::uintptr_t bToolHasSelection = 0x75;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bRecomputeNormals", 0x68, "BoolProperty"},
            {"NormalCalculationMethod", 0x69, "EnumProperty"},
            {"bFixInconsistentNormals", 0x6A, "BoolProperty"},
            {"bInvertNormals", 0x6B, "BoolProperty"},
            {"SplitNormalMethod", 0x6C, "EnumProperty"},
            {"SharpEdgeAngleThreshold", 0x70, "FloatProperty"},
            {"bAllowSharpVertices", 0x74, "BoolProperty"},
            {"bToolHasSelection", 0x75, "BoolProperty"},
        }};
    };

    struct EditPivotTool
    {
        static constexpr std::string_view Name = "EditPivotTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformProps = 0xE0;
            static constexpr std::uintptr_t EditPivotActions = 0xE8;
            static constexpr std::uintptr_t ActiveGizmos = 0x230;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TransformProps", 0xE0, "ObjectProperty"},
            {"EditPivotActions", 0xE8, "ObjectProperty"},
            {"ActiveGizmos", 0x230, "ArrayProperty"},
            {"DragAlignmentMechanic", 0x240, "ObjectProperty"},
        }};
    };

    struct EditPivotToolActionPropertySet
    {
        static constexpr std::string_view Name = "EditPivotToolActionPropertySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseWorldBox = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseWorldBox", 0x70, "BoolProperty"},
        }};
    };

    struct EditPivotToolBuilder
    {
        static constexpr std::string_view Name = "EditPivotToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EditPivotToolProperties
    {
        static constexpr std::string_view Name = "EditPivotToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyToAllLODs = 0x68;
            static constexpr std::uintptr_t bSnapDragPosition = 0x69;
            static constexpr std::uintptr_t bSnapDragRotation = 0x6A;
            static constexpr std::uintptr_t RotationMode = 0x6B;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bApplyToAllLODs", 0x68, "BoolProperty"},
            {"bSnapDragPosition", 0x69, "BoolProperty"},
            {"bSnapDragRotation", 0x6A, "BoolProperty"},
            {"RotationMode", 0x6B, "EnumProperty"},
        }};
    };

    struct EditUVIslandsTool
    {
        static constexpr std::string_view Name = "EditUVIslandsTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointTool";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialSettings = 0x120;
            static constexpr std::uintptr_t CheckerMaterial = 0x128;
            static constexpr std::uintptr_t PreviewMeshActor = 0x130;
            static constexpr std::uintptr_t DynamicMeshComponent = 0x138;
            static constexpr std::uintptr_t SelectionMechanic = 0x140;
            static constexpr std::uintptr_t TransformGizmo = 0x150;
            static constexpr std::uintptr_t TransformProxy = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MaterialSettings", 0x120, "ObjectProperty"},
            {"CheckerMaterial", 0x128, "ObjectProperty"},
            {"PreviewMeshActor", 0x130, "ObjectProperty"},
            {"DynamicMeshComponent", 0x138, "ObjectProperty"},
            {"SelectionMechanic", 0x140, "ObjectProperty"},
            {"TransformGizmo", 0x150, "ObjectProperty"},
            {"TransformProxy", 0x158, "ObjectProperty"},
        }};
    };

    struct EditUVIslandsToolBuilder
    {
        static constexpr std::string_view Name = "EditUVIslandsToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractCollisionGeometryTool
    {
        static constexpr std::string_view Name = "ExtractCollisionGeometryTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0xC8;
            static constexpr std::uintptr_t Settings = 0xD0;
            static constexpr std::uintptr_t VizSettings = 0xD8;
            static constexpr std::uintptr_t ObjectProps = 0xE0;
            static constexpr std::uintptr_t PreviewElements = 0xE8;
            static constexpr std::uintptr_t PreviewMesh = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OutputTypeProperties", 0xC8, "ObjectProperty"},
            {"Settings", 0xD0, "ObjectProperty"},
            {"VizSettings", 0xD8, "ObjectProperty"},
            {"ObjectProps", 0xE0, "ObjectProperty"},
            {"PreviewElements", 0xE8, "ObjectProperty"},
            {"PreviewMesh", 0xF0, "ObjectProperty"},
        }};
    };

    struct ExtractCollisionGeometryToolBuilder
    {
        static constexpr std::string_view Name = "ExtractCollisionGeometryToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractCollisionToolProperties
    {
        static constexpr std::string_view Name = "ExtractCollisionToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionType = 0x68;
            static constexpr std::uintptr_t bOutputSeparateMeshes = 0x69;
            static constexpr std::uintptr_t bShowPreview = 0x6A;
            static constexpr std::uintptr_t bShowInputMesh = 0x6B;
            static constexpr std::uintptr_t bWeldEdges = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CollisionType", 0x68, "EnumProperty"},
            {"bOutputSeparateMeshes", 0x69, "BoolProperty"},
            {"bShowPreview", 0x6A, "BoolProperty"},
            {"bShowInputMesh", 0x6B, "BoolProperty"},
            {"bWeldEdges", 0x6C, "BoolProperty"},
        }};
    };

    struct ExtractSplineTool
    {
        static constexpr std::string_view Name = "ExtractSplineTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xC8;
            static constexpr std::uintptr_t PlaneMechanic = 0xD0;
            static constexpr std::uintptr_t SelectionMechanic = 0xD8;
            static constexpr std::uintptr_t Preview = 0xF8;
            static constexpr std::uintptr_t Factory = 0x110;
            static constexpr std::uintptr_t CutlineGeometry = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Settings", 0xC8, "ObjectProperty"},
            {"PlaneMechanic", 0xD0, "ObjectProperty"},
            {"SelectionMechanic", 0xD8, "ObjectProperty"},
            {"Preview", 0xF8, "ObjectProperty"},
            {"Factory", 0x110, "ObjectProperty"},
            {"CutlineGeometry", 0x150, "ObjectProperty"},
        }};
    };

    struct ExtractSplineToolBuilder
    {
        static constexpr std::string_view Name = "ExtractSplineToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractSplineToolProperties
    {
        static constexpr std::string_view Name = "ExtractSplineToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtractionMode = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExtractionMode", 0x68, "EnumProperty"},
        }};
    };

    struct ExtrudeMeshSelectionTool
    {
        static constexpr std::string_view Name = "ExtrudeMeshSelectionTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtrudeProperties = 0x108;
            static constexpr std::uintptr_t SourcePreview = 0x790;
            static constexpr std::uintptr_t EditCompute = 0x798;
            static constexpr std::uintptr_t TransformGizmo = 0x7A0;
            static constexpr std::uintptr_t TransformProxy = 0x7A8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExtrudeProperties", 0x108, "ObjectProperty"},
            {"SourcePreview", 0x790, "ObjectProperty"},
            {"EditCompute", 0x798, "ObjectProperty"},
            {"TransformGizmo", 0x7A0, "ObjectProperty"},
            {"TransformProxy", 0x7A8, "ObjectProperty"},
        }};
    };

    struct ExtrudeMeshSelectionToolBuilder
    {
        static constexpr std::string_view Name = "ExtrudeMeshSelectionToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtrudeMeshSelectionToolProperties
    {
        static constexpr std::string_view Name = "ExtrudeMeshSelectionToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMode = 0x68;
            static constexpr std::uintptr_t ExtrudeDistance = 0x70;
            static constexpr std::uintptr_t RegionMode = 0x78;
            static constexpr std::uintptr_t NumSubdivisions = 0x7C;
            static constexpr std::uintptr_t CreaseAngle = 0x80;
            static constexpr std::uintptr_t RaycastMaxDistance = 0x88;
            static constexpr std::uintptr_t bShellsToSolids = 0x90;
            static constexpr std::uintptr_t bInferGroupsFromNbrs = 0x91;
            static constexpr std::uintptr_t bGroupPerSubdivision = 0x92;
            static constexpr std::uintptr_t bReplaceSelectionGroups = 0x93;
            static constexpr std::uintptr_t UVScale = 0x98;
            static constexpr std::uintptr_t bUVIslandPerGroup = 0xA0;
            static constexpr std::uintptr_t bInferMaterialID = 0xA1;
            static constexpr std::uintptr_t SetMaterialID = 0xA4;
            static constexpr std::uintptr_t bShowInputMaterials = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"InputMode", 0x68, "EnumProperty"},
            {"ExtrudeDistance", 0x70, "DoubleProperty"},
            {"RegionMode", 0x78, "EnumProperty"},
            {"NumSubdivisions", 0x7C, "IntProperty"},
            {"CreaseAngle", 0x80, "DoubleProperty"},
            {"RaycastMaxDistance", 0x88, "DoubleProperty"},
            {"bShellsToSolids", 0x90, "BoolProperty"},
            {"bInferGroupsFromNbrs", 0x91, "BoolProperty"},
            {"bGroupPerSubdivision", 0x92, "BoolProperty"},
            {"bReplaceSelectionGroups", 0x93, "BoolProperty"},
            {"UVScale", 0x98, "DoubleProperty"},
            {"bUVIslandPerGroup", 0xA0, "BoolProperty"},
            {"bInferMaterialID", 0xA1, "BoolProperty"},
            {"SetMaterialID", 0xA4, "IntProperty"},
            {"bShowInputMaterials", 0xA8, "BoolProperty"},
        }};
    };

    struct MeshAnalysisProperties
    {
        static constexpr std::string_view Name = "MeshAnalysisProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SurfaceArea = 0x68;
            static constexpr std::uintptr_t Volume = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SurfaceArea", 0x68, "StrProperty"},
            {"Volume", 0x78, "StrProperty"},
        }};
    };

    struct MeshBoundaryToolBase
    {
        static constexpr std::string_view Name = "MeshBoundaryToolBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionMechanic = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SelectionMechanic", 0x1A0, "ObjectProperty"},
        }};
    };

    struct MeshInspectorMaterialProperties
    {
        static constexpr std::string_view Name = "MeshInspectorMaterialProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialMode = 0x68;
            static constexpr std::uintptr_t CheckerDensity = 0x6C;
            static constexpr std::uintptr_t OverrideMaterial = 0x70;
            static constexpr std::uintptr_t UVChannel = 0x78;
            static constexpr std::uintptr_t UVChannelNamesList = 0x88;
            static constexpr std::uintptr_t bFlatShading = 0x98;
            static constexpr std::uintptr_t Color = 0x9C;
            static constexpr std::uintptr_t Opacity = 0xB0;
            static constexpr std::uintptr_t TransparentMaterialColor = 0xB8;
            static constexpr std::uintptr_t bTwoSided = 0xC8;
            static constexpr std::uintptr_t CheckerMaterial = 0xD0;
            static constexpr std::uintptr_t ActiveCustomMaterial = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"MaterialMode", 0x68, "EnumProperty"},
            {"CheckerDensity", 0x6C, "FloatProperty"},
            {"OverrideMaterial", 0x70, "ObjectProperty"},
            {"UVChannel", 0x78, "StrProperty"},
            {"UVChannelNamesList", 0x88, "ArrayProperty"},
            {"bFlatShading", 0x98, "BoolProperty"},
            {"Color", 0x9C, "StructProperty"},
            {"Opacity", 0xB0, "DoubleProperty"},
            {"TransparentMaterialColor", 0xB8, "StructProperty"},
            {"bTwoSided", 0xC8, "BoolProperty"},
            {"CheckerMaterial", 0xD0, "ObjectProperty"},
            {"ActiveCustomMaterial", 0xD8, "ObjectProperty"},
        }};
    };

    struct MeshInspectorProperties
    {
        static constexpr std::string_view Name = "MeshInspectorProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bWireframe = 0x68;
            static constexpr std::uintptr_t bBoundaryEdges = 0x69;
            static constexpr std::uintptr_t bBowtieVertices = 0x6A;
            static constexpr std::uintptr_t bPolygonBorders = 0x6B;
            static constexpr std::uintptr_t bUVSeams = 0x6C;
            static constexpr std::uintptr_t bUVBowties = 0x6D;
            static constexpr std::uintptr_t bMissingUVs = 0x6E;
            static constexpr std::uintptr_t bNormalSeams = 0x6F;
            static constexpr std::uintptr_t bTangentSeams = 0x70;
            static constexpr std::uintptr_t bNormalVectors = 0x71;
            static constexpr std::uintptr_t bTangentVectors = 0x72;
            static constexpr std::uintptr_t bDrawHiddenEdgesAndSeams = 0x73;
            static constexpr std::uintptr_t NormalLength = 0x74;
            static constexpr std::uintptr_t TangentLength = 0x78;
            static constexpr std::uintptr_t ShowIndices = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bWireframe", 0x68, "BoolProperty"},
            {"bBoundaryEdges", 0x69, "BoolProperty"},
            {"bBowtieVertices", 0x6A, "BoolProperty"},
            {"bPolygonBorders", 0x6B, "BoolProperty"},
            {"bUVSeams", 0x6C, "BoolProperty"},
            {"bUVBowties", 0x6D, "BoolProperty"},
            {"bMissingUVs", 0x6E, "BoolProperty"},
            {"bNormalSeams", 0x6F, "BoolProperty"},
            {"bTangentSeams", 0x70, "BoolProperty"},
            {"bNormalVectors", 0x71, "BoolProperty"},
            {"bTangentVectors", 0x72, "BoolProperty"},
            {"bDrawHiddenEdgesAndSeams", 0x73, "BoolProperty"},
            {"NormalLength", 0x74, "FloatProperty"},
            {"TangentLength", 0x78, "FloatProperty"},
            {"ShowIndices", 0x7C, "EnumProperty"},
        }};
    };

    struct MeshInspectorTool
    {
        static constexpr std::string_view Name = "MeshInspectorTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xD0;
            static constexpr std::uintptr_t PolygroupLayerProperties = 0xD8;
            static constexpr std::uintptr_t MaterialSettings = 0xE0;
            static constexpr std::uintptr_t PreviewMesh = 0xF0;
            static constexpr std::uintptr_t DrawnLineSet = 0xF8;
            static constexpr std::uintptr_t DefaultMaterial = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Settings", 0xD0, "ObjectProperty"},
            {"PolygroupLayerProperties", 0xD8, "ObjectProperty"},
            {"MaterialSettings", 0xE0, "ObjectProperty"},
            {"PreviewMesh", 0xF0, "ObjectProperty"},
            {"DrawnLineSet", 0xF8, "ObjectProperty"},
            {"DefaultMaterial", 0x100, "ObjectProperty"},
        }};
    };

    struct MeshInspectorToolBuilder
    {
        static constexpr std::string_view Name = "MeshInspectorToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshSelectionEditActions
    {
        static constexpr std::string_view Name = "MeshSelectionEditActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSelectionToolActionPropertySet";
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

    struct MeshSelectionMeshEditActions
    {
        static constexpr std::string_view Name = "MeshSelectionMeshEditActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSelectionToolActionPropertySet";
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

    struct MeshSelectionTool
    {
        static constexpr std::string_view Name = "MeshSelectionTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicMeshBrushTool";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionProps = 0x3B0;
            static constexpr std::uintptr_t SelectionActions = 0x3B8;
            static constexpr std::uintptr_t EditActions = 0x3C0;
            static constexpr std::uintptr_t MeshStatisticsProperties = 0x3C8;
            static constexpr std::uintptr_t MeshElementsDisplay = 0x3D0;
            static constexpr std::uintptr_t UVChannelProperties = 0x3D8;
            static constexpr std::uintptr_t PolygroupLayerProperties = 0x3E0;
            static constexpr std::uintptr_t Selection = 0x410;
            static constexpr std::uintptr_t SpawnedActors = 0x418;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SelectionProps", 0x3B0, "ObjectProperty"},
            {"SelectionActions", 0x3B8, "ObjectProperty"},
            {"EditActions", 0x3C0, "ObjectProperty"},
            {"MeshStatisticsProperties", 0x3C8, "ObjectProperty"},
            {"MeshElementsDisplay", 0x3D0, "ObjectProperty"},
            {"UVChannelProperties", 0x3D8, "ObjectProperty"},
            {"PolygroupLayerProperties", 0x3E0, "ObjectProperty"},
            {"Selection", 0x410, "ObjectProperty"},
            {"SpawnedActors", 0x418, "ArrayProperty"},
        }};
    };

    struct MeshSelectionToolActionPropertySet
    {
        static constexpr std::string_view Name = "MeshSelectionToolActionPropertySet";
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

    struct MeshSelectionToolBuilder
    {
        static constexpr std::string_view Name = "MeshSelectionToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshSelectionToolProperties
    {
        static constexpr std::string_view Name = "MeshSelectionToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionMode = 0x68;
            static constexpr std::uintptr_t AngleTolerance = 0x6C;
            static constexpr std::uintptr_t bHitBackFaces = 0x70;
            static constexpr std::uintptr_t bShowPoints = 0x71;
            static constexpr std::uintptr_t FaceColorMode = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SelectionMode", 0x68, "EnumProperty"},
            {"AngleTolerance", 0x6C, "FloatProperty"},
            {"bHitBackFaces", 0x70, "BoolProperty"},
            {"bShowPoints", 0x71, "BoolProperty"},
            {"FaceColorMode", 0x74, "EnumProperty"},
        }};
    };

    struct MirrorOperatorFactory
    {
        static constexpr std::string_view Name = "MirrorOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MirrorTool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MirrorTool", 0x30, "ObjectProperty"},
        }};
    };

    struct MirrorTool
    {
        static constexpr std::string_view Name = "MirrorTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xD8;
            static constexpr std::uintptr_t OutputTypeProperties = 0xE0;
            static constexpr std::uintptr_t HandleSourcesProperties = 0xE8;
            static constexpr std::uintptr_t ToolActions = 0xF0;
            static constexpr std::uintptr_t MeshesToMirror = 0xF8;
            static constexpr std::uintptr_t Previews = 0x108;
            static constexpr std::uintptr_t PlaneMechanic = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Settings", 0xD8, "ObjectProperty"},
            {"OutputTypeProperties", 0xE0, "ObjectProperty"},
            {"HandleSourcesProperties", 0xE8, "ObjectProperty"},
            {"ToolActions", 0xF0, "ObjectProperty"},
            {"MeshesToMirror", 0xF8, "ArrayProperty"},
            {"Previews", 0x108, "ArrayProperty"},
            {"PlaneMechanic", 0x148, "ObjectProperty"},
        }};
    };

    struct MirrorToolActionPropertySet
    {
        static constexpr std::string_view Name = "MirrorToolActionPropertySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bButtonsOnlyChangeOrientation = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bButtonsOnlyChangeOrientation", 0x70, "BoolProperty"},
        }};
    };

    struct MirrorToolBuilder
    {
        static constexpr std::string_view Name = "MirrorToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MirrorToolProperties
    {
        static constexpr std::string_view Name = "MirrorToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t OperationMode = 0x68;
            static constexpr std::uintptr_t bCropAlongMirrorPlaneFirst = 0x69;
            static constexpr std::uintptr_t bSimplifyAlongCrop = 0x6A;
            static constexpr std::uintptr_t bWeldVerticesOnMirrorPlane = 0x6B;
            static constexpr std::uintptr_t WeldVerticesNormalMode = 0x6C;
            static constexpr std::uintptr_t PlaneTolerance = 0x70;
            static constexpr std::uintptr_t bAllowBowtieVertexCreation = 0x78;
            static constexpr std::uintptr_t bShowPreview = 0x79;
            static constexpr std::uintptr_t WriteTo = 0x7A;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OperationMode", 0x68, "EnumProperty"},
            {"bCropAlongMirrorPlaneFirst", 0x69, "BoolProperty"},
            {"bSimplifyAlongCrop", 0x6A, "BoolProperty"},
            {"bWeldVerticesOnMirrorPlane", 0x6B, "BoolProperty"},
            {"WeldVerticesNormalMode", 0x6C, "EnumProperty"},
            {"PlaneTolerance", 0x70, "DoubleProperty"},
            {"bAllowBowtieVertexCreation", 0x78, "BoolProperty"},
            {"bShowPreview", 0x79, "BoolProperty"},
            {"WriteTo", 0x7A, "EnumProperty"},
        }};
    };

    struct OffsetMeshSelectionTool
    {
        static constexpr std::string_view Name = "OffsetMeshSelectionTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetProperties = 0x108;
            static constexpr std::uintptr_t SourcePreview = 0x790;
            static constexpr std::uintptr_t EditCompute = 0x798;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OffsetProperties", 0x108, "ObjectProperty"},
            {"SourcePreview", 0x790, "ObjectProperty"},
            {"EditCompute", 0x798, "ObjectProperty"},
        }};
    };

    struct OffsetMeshSelectionToolBuilder
    {
        static constexpr std::string_view Name = "OffsetMeshSelectionToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OffsetMeshSelectionToolProperties
    {
        static constexpr std::string_view Name = "OffsetMeshSelectionToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetDistance = 0x68;
            static constexpr std::uintptr_t Direction = 0x70;
            static constexpr std::uintptr_t NumSubdivisions = 0x74;
            static constexpr std::uintptr_t CreaseAngle = 0x78;
            static constexpr std::uintptr_t bShellsToSolids = 0x80;
            static constexpr std::uintptr_t bInferGroupsFromNbrs = 0x81;
            static constexpr std::uintptr_t bGroupPerSubdivision = 0x82;
            static constexpr std::uintptr_t bReplaceSelectionGroups = 0x83;
            static constexpr std::uintptr_t UVScale = 0x88;
            static constexpr std::uintptr_t bUVIslandPerGroup = 0x90;
            static constexpr std::uintptr_t bInferMaterialID = 0x91;
            static constexpr std::uintptr_t SetMaterialID = 0x94;
            static constexpr std::uintptr_t bShowInputMaterials = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"OffsetDistance", 0x68, "DoubleProperty"},
            {"Direction", 0x70, "EnumProperty"},
            {"NumSubdivisions", 0x74, "IntProperty"},
            {"CreaseAngle", 0x78, "DoubleProperty"},
            {"bShellsToSolids", 0x80, "BoolProperty"},
            {"bInferGroupsFromNbrs", 0x81, "BoolProperty"},
            {"bGroupPerSubdivision", 0x82, "BoolProperty"},
            {"bReplaceSelectionGroups", 0x83, "BoolProperty"},
            {"UVScale", 0x88, "DoubleProperty"},
            {"bUVIslandPerGroup", 0x90, "BoolProperty"},
            {"bInferMaterialID", 0x91, "BoolProperty"},
            {"SetMaterialID", 0x94, "IntProperty"},
            {"bShowInputMaterials", 0x98, "BoolProperty"},
        }};
    };

    struct PatternTool
    {
        static constexpr std::string_view Name = "PatternTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xD0;
            static constexpr std::uintptr_t BoundingBoxSettings = 0xD8;
            static constexpr std::uintptr_t LinearSettings = 0xE0;
            static constexpr std::uintptr_t GridSettings = 0xE8;
            static constexpr std::uintptr_t RadialSettings = 0xF0;
            static constexpr std::uintptr_t RotationSettings = 0xF8;
            static constexpr std::uintptr_t TranslationSettings = 0x100;
            static constexpr std::uintptr_t ScaleSettings = 0x108;
            static constexpr std::uintptr_t OutputSettings = 0x168;
            static constexpr std::uintptr_t PatternGizmoProxy = 0x170;
            static constexpr std::uintptr_t PatternGizmo = 0x178;
            static constexpr std::uintptr_t PatternGizmoComponent = 0x180;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0x1A0;
            static constexpr std::uintptr_t PlaneMechanic = 0x1A8;
            static constexpr std::uintptr_t AllComponents = 0x3B8;
            static constexpr std::uintptr_t PreviewGeometry = 0x3E8;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Settings", 0xD0, "ObjectProperty"},
            {"BoundingBoxSettings", 0xD8, "ObjectProperty"},
            {"LinearSettings", 0xE0, "ObjectProperty"},
            {"GridSettings", 0xE8, "ObjectProperty"},
            {"RadialSettings", 0xF0, "ObjectProperty"},
            {"RotationSettings", 0xF8, "ObjectProperty"},
            {"TranslationSettings", 0x100, "ObjectProperty"},
            {"ScaleSettings", 0x108, "ObjectProperty"},
            {"OutputSettings", 0x168, "ObjectProperty"},
            {"PatternGizmoProxy", 0x170, "ObjectProperty"},
            {"PatternGizmo", 0x178, "ObjectProperty"},
            {"PatternGizmoComponent", 0x180, "ObjectProperty"},
            {"DragAlignmentMechanic", 0x1A0, "ObjectProperty"},
            {"PlaneMechanic", 0x1A8, "ObjectProperty"},
            {"AllComponents", 0x3B8, "SetProperty"},
            {"PreviewGeometry", 0x3E8, "ObjectProperty"},
        }};
    };

    struct PatternToolBuilder
    {
        static constexpr std::string_view Name = "PatternToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PatternToolSettings
    {
        static constexpr std::string_view Name = "PatternToolSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x68;
            static constexpr std::uintptr_t bProjectElementsDown = 0x6C;
            static constexpr std::uintptr_t ProjectionOffset = 0x70;
            static constexpr std::uintptr_t bHideSources = 0x74;
            static constexpr std::uintptr_t bUseRelativeTransforms = 0x75;
            static constexpr std::uintptr_t bRandomlyPickElements = 0x76;
            static constexpr std::uintptr_t Shape = 0x77;
            static constexpr std::uintptr_t SingleAxis = 0x78;
            static constexpr std::uintptr_t SinglePlane = 0x79;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Seed", 0x68, "IntProperty"},
            {"bProjectElementsDown", 0x6C, "BoolProperty"},
            {"ProjectionOffset", 0x70, "FloatProperty"},
            {"bHideSources", 0x74, "BoolProperty"},
            {"bUseRelativeTransforms", 0x75, "BoolProperty"},
            {"bRandomlyPickElements", 0x76, "BoolProperty"},
            {"Shape", 0x77, "EnumProperty"},
            {"SingleAxis", 0x78, "EnumProperty"},
            {"SinglePlane", 0x79, "EnumProperty"},
        }};
    };

    struct PatternTool_BoundingBoxSettings
    {
        static constexpr std::string_view Name = "PatternTool_BoundingBoxSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreTransforms = 0x68;
            static constexpr std::uintptr_t Adjustment = 0x6C;
            static constexpr std::uintptr_t bVisualize = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIgnoreTransforms", 0x68, "BoolProperty"},
            {"Adjustment", 0x6C, "FloatProperty"},
            {"bVisualize", 0x70, "BoolProperty"},
        }};
    };

    struct PatternTool_GridSettings
    {
        static constexpr std::string_view Name = "PatternTool_GridSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SpacingX = 0x68;
            static constexpr std::uintptr_t CountX = 0x6C;
            static constexpr std::uintptr_t StepSizeX = 0x70;
            static constexpr std::uintptr_t ExtentX = 0x78;
            static constexpr std::uintptr_t bCenteredX = 0x80;
            static constexpr std::uintptr_t SpacingY = 0x81;
            static constexpr std::uintptr_t CountY = 0x84;
            static constexpr std::uintptr_t StepSizeY = 0x88;
            static constexpr std::uintptr_t ExtentY = 0x90;
            static constexpr std::uintptr_t bCenteredY = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SpacingX", 0x68, "EnumProperty"},
            {"CountX", 0x6C, "IntProperty"},
            {"StepSizeX", 0x70, "DoubleProperty"},
            {"ExtentX", 0x78, "DoubleProperty"},
            {"bCenteredX", 0x80, "BoolProperty"},
            {"SpacingY", 0x81, "EnumProperty"},
            {"CountY", 0x84, "IntProperty"},
            {"StepSizeY", 0x88, "DoubleProperty"},
            {"ExtentY", 0x90, "DoubleProperty"},
            {"bCenteredY", 0x98, "BoolProperty"},
        }};
    };

    struct PatternTool_LinearSettings
    {
        static constexpr std::string_view Name = "PatternTool_LinearSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SpacingMode = 0x68;
            static constexpr std::uintptr_t Count = 0x6C;
            static constexpr std::uintptr_t StepSize = 0x70;
            static constexpr std::uintptr_t Extent = 0x78;
            static constexpr std::uintptr_t bCentered = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SpacingMode", 0x68, "EnumProperty"},
            {"Count", 0x6C, "IntProperty"},
            {"StepSize", 0x70, "DoubleProperty"},
            {"Extent", 0x78, "DoubleProperty"},
            {"bCentered", 0x80, "BoolProperty"},
        }};
    };

    struct PatternTool_OutputSettings
    {
        static constexpr std::string_view Name = "PatternTool_OutputSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bSeparateActors = 0x68;
            static constexpr std::uintptr_t bConvertToDynamic = 0x69;
            static constexpr std::uintptr_t bCreateISMCs = 0x6A;
            static constexpr std::uintptr_t bHaveStaticMeshes = 0x6B;
            static constexpr std::uintptr_t bEnableCreateISMCs = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bSeparateActors", 0x68, "BoolProperty"},
            {"bConvertToDynamic", 0x69, "BoolProperty"},
            {"bCreateISMCs", 0x6A, "BoolProperty"},
            {"bHaveStaticMeshes", 0x6B, "BoolProperty"},
            {"bEnableCreateISMCs", 0x6C, "BoolProperty"},
        }};
    };

    struct PatternTool_RadialSettings
    {
        static constexpr std::string_view Name = "PatternTool_RadialSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SpacingMode = 0x68;
            static constexpr std::uintptr_t Count = 0x6C;
            static constexpr std::uintptr_t StepSize = 0x70;
            static constexpr std::uintptr_t Radius = 0x78;
            static constexpr std::uintptr_t StartAngle = 0x80;
            static constexpr std::uintptr_t EndAngle = 0x88;
            static constexpr std::uintptr_t AngleShift = 0x90;
            static constexpr std::uintptr_t bOriented = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SpacingMode", 0x68, "EnumProperty"},
            {"Count", 0x6C, "IntProperty"},
            {"StepSize", 0x70, "DoubleProperty"},
            {"Radius", 0x78, "DoubleProperty"},
            {"StartAngle", 0x80, "DoubleProperty"},
            {"EndAngle", 0x88, "DoubleProperty"},
            {"AngleShift", 0x90, "DoubleProperty"},
            {"bOriented", 0x98, "BoolProperty"},
        }};
    };

    struct PatternTool_RotationSettings
    {
        static constexpr std::string_view Name = "PatternTool_RotationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bInterpolate = 0x68;
            static constexpr std::uintptr_t bJitter = 0x69;
            static constexpr std::uintptr_t StartRotation = 0x70;
            static constexpr std::uintptr_t EndRotation = 0x88;
            static constexpr std::uintptr_t jitter = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bInterpolate", 0x68, "BoolProperty"},
            {"bJitter", 0x69, "BoolProperty"},
            {"StartRotation", 0x70, "StructProperty"},
            {"EndRotation", 0x88, "StructProperty"},
            {"jitter", 0xA0, "StructProperty"},
        }};
    };

    struct PatternTool_ScaleSettings
    {
        static constexpr std::string_view Name = "PatternTool_ScaleSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bProportional = 0x68;
            static constexpr std::uintptr_t bInterpolate = 0x69;
            static constexpr std::uintptr_t bJitter = 0x6A;
            static constexpr std::uintptr_t StartScale = 0x70;
            static constexpr std::uintptr_t EndScale = 0x88;
            static constexpr std::uintptr_t jitter = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bProportional", 0x68, "BoolProperty"},
            {"bInterpolate", 0x69, "BoolProperty"},
            {"bJitter", 0x6A, "BoolProperty"},
            {"StartScale", 0x70, "StructProperty"},
            {"EndScale", 0x88, "StructProperty"},
            {"jitter", 0xA0, "StructProperty"},
        }};
    };

    struct PatternTool_TranslationSettings
    {
        static constexpr std::string_view Name = "PatternTool_TranslationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bInterpolate = 0x68;
            static constexpr std::uintptr_t bJitter = 0x69;
            static constexpr std::uintptr_t StartTranslation = 0x70;
            static constexpr std::uintptr_t EndTranslation = 0x88;
            static constexpr std::uintptr_t jitter = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bInterpolate", 0x68, "BoolProperty"},
            {"bJitter", 0x69, "BoolProperty"},
            {"StartTranslation", 0x70, "StructProperty"},
            {"EndTranslation", 0x88, "StructProperty"},
            {"jitter", 0xA0, "StructProperty"},
        }};
    };

    struct PhysicsInspectorTool
    {
        static constexpr std::string_view Name = "PhysicsInspectorTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t VizSettings = 0xD8;
            static constexpr std::uintptr_t Settings = 0xE0;
            static constexpr std::uintptr_t ObjectData = 0xE8;
            static constexpr std::uintptr_t PreviewElements = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VizSettings", 0xD8, "ObjectProperty"},
            {"Settings", 0xE0, "ObjectProperty"},
            {"ObjectData", 0xE8, "ArrayProperty"},
            {"PreviewElements", 0xF8, "ArrayProperty"},
        }};
    };

    struct PhysicsInspectorToolBuilder
    {
        static constexpr std::string_view Name = "PhysicsInspectorToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PhysicsInspectorToolProperties
    {
        static constexpr std::string_view Name = "PhysicsInspectorToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowTargetMesh = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bShowTargetMesh", 0x68, "BoolProperty"},
        }};
    };

    struct PhysicsObjectToolPropertySet
    {
        static constexpr std::string_view Name = "PhysicsObjectToolPropertySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectName = 0x68;
            static constexpr std::uintptr_t CollisionType = 0x78;
            static constexpr std::uintptr_t Spheres = 0x80;
            static constexpr std::uintptr_t Boxes = 0x90;
            static constexpr std::uintptr_t Capsules = 0xA0;
            static constexpr std::uintptr_t Convexes = 0xB0;
            static constexpr std::uintptr_t LevelSets = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ObjectName", 0x68, "StrProperty"},
            {"CollisionType", 0x78, "EnumProperty"},
            {"Spheres", 0x80, "ArrayProperty"},
            {"Boxes", 0x90, "ArrayProperty"},
            {"Capsules", 0xA0, "ArrayProperty"},
            {"Convexes", 0xB0, "ArrayProperty"},
            {"LevelSets", 0xC0, "ArrayProperty"},
        }};
    };

    struct PlaneCutOperatorFactory
    {
        static constexpr std::string_view Name = "PlaneCutOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CutTool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CutTool", 0x30, "ObjectProperty"},
        }};
    };

    struct PlaneCutTool
    {
        static constexpr std::string_view Name = "PlaneCutTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BasicProperties = 0xD0;
            static constexpr std::uintptr_t Previews = 0xD8;
            static constexpr std::uintptr_t MeshesToCut = 0xE8;
            static constexpr std::uintptr_t PlaneMechanic = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BasicProperties", 0xD0, "ObjectProperty"},
            {"Previews", 0xD8, "ArrayProperty"},
            {"MeshesToCut", 0xE8, "ArrayProperty"},
            {"PlaneMechanic", 0xF8, "ObjectProperty"},
        }};
    };

    struct PlaneCutToolBuilder
    {
        static constexpr std::string_view Name = "PlaneCutToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlaneCutToolProperties
    {
        static constexpr std::string_view Name = "PlaneCutToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bKeepBothHalves = 0x68;
            static constexpr std::uintptr_t SpacingBetweenHalves = 0x6C;
            static constexpr std::uintptr_t bExportSeparatedPiecesAsNewMeshAssets = 0x70;
            static constexpr std::uintptr_t bShowPreview = 0x71;
            static constexpr std::uintptr_t bFillCutHole = 0x72;
            static constexpr std::uintptr_t bFillSpans = 0x73;
            static constexpr std::uintptr_t bSimplifyAlongCut = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bKeepBothHalves", 0x68, "BoolProperty"},
            {"SpacingBetweenHalves", 0x6C, "FloatProperty"},
            {"bExportSeparatedPiecesAsNewMeshAssets", 0x70, "BoolProperty"},
            {"bShowPreview", 0x71, "BoolProperty"},
            {"bFillCutHole", 0x72, "BoolProperty"},
            {"bFillSpans", 0x73, "BoolProperty"},
            {"bSimplifyAlongCut", 0x74, "BoolProperty"},
        }};
    };

    struct RevolveBoundaryOperatorFactory
    {
        static constexpr std::string_view Name = "RevolveBoundaryOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RevolveBoundaryTool = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RevolveBoundaryTool", 0x30, "ObjectProperty"},
        }};
    };

    struct RevolveBoundaryTool
    {
        static constexpr std::string_view Name = "RevolveBoundaryTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshBoundaryToolBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTypeProperties = 0x1C8;
            static constexpr std::uintptr_t Settings = 0x1D0;
            static constexpr std::uintptr_t MaterialProperties = 0x1D8;
            static constexpr std::uintptr_t PlaneMechanic = 0x1E0;
            static constexpr std::uintptr_t Preview = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OutputTypeProperties", 0x1C8, "ObjectProperty"},
            {"Settings", 0x1D0, "ObjectProperty"},
            {"MaterialProperties", 0x1D8, "ObjectProperty"},
            {"PlaneMechanic", 0x1E0, "ObjectProperty"},
            {"Preview", 0x1E8, "ObjectProperty"},
        }};
    };

    struct RevolveBoundaryToolBuilder
    {
        static constexpr std::string_view Name = "RevolveBoundaryToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RevolveBoundaryToolProperties
    {
        static constexpr std::string_view Name = "RevolveBoundaryToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RevolveProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t CapFillMode = 0xD8;
            static constexpr std::uintptr_t bDisplayInputMesh = 0xD9;
            static constexpr std::uintptr_t AxisOrigin = 0xE0;
            static constexpr std::uintptr_t AxisOrientation = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CapFillMode", 0xD8, "EnumProperty"},
            {"bDisplayInputMesh", 0xD9, "BoolProperty"},
            {"AxisOrigin", 0xE0, "StructProperty"},
            {"AxisOrientation", 0xF8, "StructProperty"},
        }};
    };

    struct RevolveSplineTool
    {
        static constexpr std::string_view Name = "RevolveSplineTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMeshFromSplinesTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x118;
            static constexpr std::uintptr_t ToolActions = 0x120;
            static constexpr std::uintptr_t PlaneMechanic = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Settings", 0x118, "ObjectProperty"},
            {"ToolActions", 0x120, "ObjectProperty"},
            {"PlaneMechanic", 0x128, "ObjectProperty"},
        }};
    };

    struct RevolveSplineToolActionPropertySet
    {
        static constexpr std::string_view Name = "RevolveSplineToolActionPropertySet";
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

    struct RevolveSplineToolBuilder
    {
        static constexpr std::string_view Name = "RevolveSplineToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMeshFromSplinesToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RevolveSplineToolProperties
    {
        static constexpr std::string_view Name = "RevolveSplineToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RevolveProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t SampleMode = 0xD8;
            static constexpr std::uintptr_t ErrorTolerance = 0xE0;
            static constexpr std::uintptr_t MaxSampleDistance = 0xE8;
            static constexpr std::uintptr_t CapFillMode = 0xF0;
            static constexpr std::uintptr_t bClosePathToAxis = 0xF1;
            static constexpr std::uintptr_t AxisOrigin = 0xF8;
            static constexpr std::uintptr_t AxisOrientation = 0x110;
            static constexpr std::uintptr_t bResetAxisOnStart = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SampleMode", 0xD8, "EnumProperty"},
            {"ErrorTolerance", 0xE0, "DoubleProperty"},
            {"MaxSampleDistance", 0xE8, "DoubleProperty"},
            {"CapFillMode", 0xF0, "EnumProperty"},
            {"bClosePathToAxis", 0xF1, "BoolProperty"},
            {"AxisOrigin", 0xF8, "StructProperty"},
            {"AxisOrientation", 0x110, "StructProperty"},
            {"bResetAxisOnStart", 0x120, "BoolProperty"},
        }};
    };

    struct SeamSculptTool
    {
        static constexpr std::string_view Name = "SeamSculptTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicMeshBrushTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x3B0;
            static constexpr std::uintptr_t PreviewGeom = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x3B0, "ObjectProperty"},
            {"PreviewGeom", 0x3B8, "ObjectProperty"},
        }};
    };

    struct SeamSculptToolBuilder
    {
        static constexpr std::string_view Name = "SeamSculptToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SeamSculptToolProperties
    {
        static constexpr std::string_view Name = "SeamSculptToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowWireframe = 0x68;
            static constexpr std::uintptr_t bHitBackFaces = 0x69;
            static constexpr std::uintptr_t PathSimilarityWeight = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bShowWireframe", 0x68, "BoolProperty"},
            {"bHitBackFaces", 0x69, "BoolProperty"},
            {"PathSimilarityWeight", 0x70, "DoubleProperty"},
        }};
    };

    struct SelfUnionMeshesTool
    {
        static constexpr std::string_view Name = "SelfUnionMeshesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCreateFromSelectedTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0x120;
            static constexpr std::uintptr_t DrawnLineSet = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Properties", 0x120, "ObjectProperty"},
            {"DrawnLineSet", 0x128, "ObjectProperty"},
        }};
    };

    struct SelfUnionMeshesToolBuilder
    {
        static constexpr std::string_view Name = "SelfUnionMeshesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCreateFromSelectedToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SelfUnionMeshesToolProperties
    {
        static constexpr std::string_view Name = "SelfUnionMeshesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bTrimFlaps = 0x68;
            static constexpr std::uintptr_t bTryFixHoles = 0x69;
            static constexpr std::uintptr_t bTryCollapseEdges = 0x6A;
            static constexpr std::uintptr_t WindingThreshold = 0x6C;
            static constexpr std::uintptr_t bShowNewBoundaryEdges = 0x70;
            static constexpr std::uintptr_t bOnlyUseFirstMeshMaterials = 0x71;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bTrimFlaps", 0x68, "BoolProperty"},
            {"bTryFixHoles", 0x69, "BoolProperty"},
            {"bTryCollapseEdges", 0x6A, "BoolProperty"},
            {"WindingThreshold", 0x6C, "FloatProperty"},
            {"bShowNewBoundaryEdges", 0x70, "BoolProperty"},
            {"bOnlyUseFirstMeshMaterials", 0x71, "BoolProperty"},
        }};
    };

    struct SetCollisionGeometryTool
    {
        static constexpr std::string_view Name = "SetCollisionGeometryTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xE0;
            static constexpr std::uintptr_t PolygroupLayerProperties = 0xE8;
            static constexpr std::uintptr_t VizSettings = 0xF0;
            static constexpr std::uintptr_t CollisionProps = 0xF8;
            static constexpr std::uintptr_t PreviewGeom = 0x108;
            static constexpr std::uintptr_t GeometrySelectionVizProperties = 0x350;
            static constexpr std::uintptr_t GeometrySelectionViz = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Settings", 0xE0, "ObjectProperty"},
            {"PolygroupLayerProperties", 0xE8, "ObjectProperty"},
            {"VizSettings", 0xF0, "ObjectProperty"},
            {"CollisionProps", 0xF8, "ObjectProperty"},
            {"PreviewGeom", 0x108, "ObjectProperty"},
            {"GeometrySelectionVizProperties", 0x350, "ObjectProperty"},
            {"GeometrySelectionViz", 0x358, "ObjectProperty"},
        }};
    };

    struct SetCollisionGeometryToolBuilder
    {
        static constexpr std::string_view Name = "SetCollisionGeometryToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SetCollisionGeometryToolProperties
    {
        static constexpr std::string_view Name = "SetCollisionGeometryToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryType = 0x68;
            static constexpr std::uintptr_t bAppendToExisting = 0x6C;
            static constexpr std::uintptr_t bUseWorldSpace = 0x6D;
            static constexpr std::uintptr_t InputMode = 0x70;
            static constexpr std::uintptr_t bRemoveContained = 0x74;
            static constexpr std::uintptr_t bEnableMaxCount = 0x75;
            static constexpr std::uintptr_t MaxCount = 0x78;
            static constexpr std::uintptr_t MinThickness = 0x7C;
            static constexpr std::uintptr_t bDetectBoxes = 0x80;
            static constexpr std::uintptr_t bDetectSpheres = 0x81;
            static constexpr std::uintptr_t bDetectCapsules = 0x82;
            static constexpr std::uintptr_t bMergeCollisionShapes = 0x83;
            static constexpr std::uintptr_t MergeAboveCount = 0x84;
            static constexpr std::uintptr_t bUseNegativeSpaceInMerge = 0x88;
            static constexpr std::uintptr_t bSimplifyHulls = 0x89;
            static constexpr std::uintptr_t HullTargetFaceCount = 0x8C;
            static constexpr std::uintptr_t HullSimplifyGeometryTolerance = 0x90;
            static constexpr std::uintptr_t bPreSimplifyToEdgeLength = 0x98;
            static constexpr std::uintptr_t DecompositionTargetEdgeLength = 0xA0;
            static constexpr std::uintptr_t DecompositionMethod = 0xA8;
            static constexpr std::uintptr_t bLimitHullsPerShape = 0xAC;
            static constexpr std::uintptr_t MaxHullsPerShape = 0xB0;
            static constexpr std::uintptr_t ConvexDecompositionSearchFactor = 0xB4;
            static constexpr std::uintptr_t AddHullsErrorTolerance = 0xB8;
            static constexpr std::uintptr_t MinPartThickness = 0xBC;
            static constexpr std::uintptr_t NegativeSpaceTolerance = 0xC0;
            static constexpr std::uintptr_t NegativeSpaceMinRadius = 0xC8;
            static constexpr std::uintptr_t bIgnoreInternalNegativeSpace = 0xD0;
            static constexpr std::uintptr_t HullTolerance = 0xD4;
            static constexpr std::uintptr_t SweepAxis = 0xD8;
            static constexpr std::uintptr_t LevelSetResolution = 0xDC;
            static constexpr std::uintptr_t SetCollisionType = 0xE0;
            static constexpr std::uintptr_t bShowTargetMesh = 0xE4;
            static constexpr std::uintptr_t bUsingMultipleInputs = 0xE5;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"GeometryType", 0x68, "EnumProperty"},
            {"bAppendToExisting", 0x6C, "BoolProperty"},
            {"bUseWorldSpace", 0x6D, "BoolProperty"},
            {"InputMode", 0x70, "EnumProperty"},
            {"bRemoveContained", 0x74, "BoolProperty"},
            {"bEnableMaxCount", 0x75, "BoolProperty"},
            {"MaxCount", 0x78, "IntProperty"},
            {"MinThickness", 0x7C, "FloatProperty"},
            {"bDetectBoxes", 0x80, "BoolProperty"},
            {"bDetectSpheres", 0x81, "BoolProperty"},
            {"bDetectCapsules", 0x82, "BoolProperty"},
            {"bMergeCollisionShapes", 0x83, "BoolProperty"},
            {"MergeAboveCount", 0x84, "IntProperty"},
            {"bUseNegativeSpaceInMerge", 0x88, "BoolProperty"},
            {"bSimplifyHulls", 0x89, "BoolProperty"},
            {"HullTargetFaceCount", 0x8C, "IntProperty"},
            {"HullSimplifyGeometryTolerance", 0x90, "DoubleProperty"},
            {"bPreSimplifyToEdgeLength", 0x98, "BoolProperty"},
            {"DecompositionTargetEdgeLength", 0xA0, "DoubleProperty"},
            {"DecompositionMethod", 0xA8, "EnumProperty"},
            {"bLimitHullsPerShape", 0xAC, "BoolProperty"},
            {"MaxHullsPerShape", 0xB0, "IntProperty"},
            {"ConvexDecompositionSearchFactor", 0xB4, "FloatProperty"},
            {"AddHullsErrorTolerance", 0xB8, "FloatProperty"},
            {"MinPartThickness", 0xBC, "FloatProperty"},
            {"NegativeSpaceTolerance", 0xC0, "DoubleProperty"},
            {"NegativeSpaceMinRadius", 0xC8, "DoubleProperty"},
            {"bIgnoreInternalNegativeSpace", 0xD0, "BoolProperty"},
            {"HullTolerance", 0xD4, "FloatProperty"},
            {"SweepAxis", 0xD8, "EnumProperty"},
            {"LevelSetResolution", 0xDC, "IntProperty"},
            {"SetCollisionType", 0xE0, "EnumProperty"},
            {"bShowTargetMesh", 0xE4, "BoolProperty"},
            {"bUsingMultipleInputs", 0xE5, "BoolProperty"},
        }};
    };

    struct SimpleCollisionEditorTool
    {
        static constexpr std::string_view Name = "SimpleCollisionEditorTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionProperties = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActionProperties", 0xD0, "ObjectProperty"},
        }};
    };

    struct SimpleCollisionEditorToolActionProperties
    {
        static constexpr std::string_view Name = "SimpleCollisionEditorToolActionProperties";
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

    struct SimpleCollisionEditorToolBuilder
    {
        static constexpr std::string_view Name = "SimpleCollisionEditorToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SplitMeshesTool
    {
        static constexpr std::string_view Name = "SplitMeshesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BasicProperties = 0x100;
            static constexpr std::uintptr_t OutputTypeProperties = 0x108;
            static constexpr std::uintptr_t PerTargetPreviews = 0x138;
            static constexpr std::uintptr_t PreviewMaterial = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BasicProperties", 0x100, "ObjectProperty"},
            {"OutputTypeProperties", 0x108, "ObjectProperty"},
            {"PerTargetPreviews", 0x138, "ArrayProperty"},
            {"PreviewMaterial", 0x148, "ObjectProperty"},
        }};
    };

    struct SplitMeshesToolBuilder
    {
        static constexpr std::string_view Name = "SplitMeshesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SplitMeshesToolProperties
    {
        static constexpr std::string_view Name = "SplitMeshesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t SplitMethod = 0x68;
            static constexpr std::uintptr_t ConnectVerticesThreshold = 0x70;
            static constexpr std::uintptr_t bTransferMaterials = 0x78;
            static constexpr std::uintptr_t bShowPreview = 0x79;
            static constexpr std::uintptr_t bIsInSelectionMode = 0x7A;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SplitMethod", 0x68, "EnumProperty"},
            {"ConnectVerticesThreshold", 0x70, "DoubleProperty"},
            {"bTransferMaterials", 0x78, "BoolProperty"},
            {"bShowPreview", 0x79, "BoolProperty"},
            {"bIsInSelectionMode", 0x7A, "BoolProperty"},
        }};
    };

    struct TransferMeshTool
    {
        static constexpr std::string_view Name = "TransferMeshTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BasicProperties = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BasicProperties", 0xD8, "ObjectProperty"},
        }};
    };

    struct TransferMeshToolBuilder
    {
        static constexpr std::string_view Name = "TransferMeshToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TransferMeshToolProperties
    {
        static constexpr std::string_view Name = "TransferMeshToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bTransferMaterials = 0x68;
            static constexpr std::uintptr_t bTransferCollision = 0x69;
            static constexpr std::uintptr_t SourceLOD = 0x70;
            static constexpr std::uintptr_t TargetLOD = 0x80;
            static constexpr std::uintptr_t bIsStaticMeshSource = 0x90;
            static constexpr std::uintptr_t SourceLODNamesList = 0x98;
            static constexpr std::uintptr_t TargetLODNamesList = 0xB8;
            static constexpr std::uintptr_t bIsStaticMeshTarget = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bTransferMaterials", 0x68, "BoolProperty"},
            {"bTransferCollision", 0x69, "BoolProperty"},
            {"SourceLOD", 0x70, "StrProperty"},
            {"TargetLOD", 0x80, "StrProperty"},
            {"bIsStaticMeshSource", 0x90, "BoolProperty"},
            {"SourceLODNamesList", 0x98, "ArrayProperty"},
            {"TargetLODNamesList", 0xB8, "ArrayProperty"},
            {"bIsStaticMeshTarget", 0xD8, "BoolProperty"},
        }};
    };

    struct TransformMeshesTool
    {
        static constexpr std::string_view Name = "TransformMeshesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingTool";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformProps = 0xE0;
            static constexpr std::uintptr_t ActiveGizmos = 0xE8;
            static constexpr std::uintptr_t DragAlignmentMechanic = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TransformProps", 0xE0, "ObjectProperty"},
            {"ActiveGizmos", 0xE8, "ArrayProperty"},
            {"DragAlignmentMechanic", 0xF8, "ObjectProperty"},
        }};
    };

    struct TransformMeshesToolBuilder
    {
        static constexpr std::string_view Name = "TransformMeshesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiSelectionMeshEditingToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TransformMeshesToolProperties
    {
        static constexpr std::string_view Name = "TransformMeshesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformMode = 0x68;
            static constexpr std::uintptr_t bApplyToInstances = 0x69;
            static constexpr std::uintptr_t bSetPivotMode = 0x6A;
            static constexpr std::uintptr_t bEnableSnapDragging = 0x6B;
            static constexpr std::uintptr_t SnapDragSource = 0x6C;
            static constexpr std::uintptr_t RotationMode = 0x6D;
            static constexpr std::uintptr_t bHaveInstances = 0x6E;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TransformMode", 0x68, "EnumProperty"},
            {"bApplyToInstances", 0x69, "BoolProperty"},
            {"bSetPivotMode", 0x6A, "BoolProperty"},
            {"bEnableSnapDragging", 0x6B, "BoolProperty"},
            {"SnapDragSource", 0x6C, "EnumProperty"},
            {"RotationMode", 0x6D, "EnumProperty"},
            {"bHaveInstances", 0x6E, "BoolProperty"},
        }};
    };

    struct TriangulateSplinesTool
    {
        static constexpr std::string_view Name = "TriangulateSplinesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMeshFromSplinesTool";
        struct Offsets
        {
            static constexpr std::uintptr_t TriangulateProperties = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TriangulateProperties", 0x118, "ObjectProperty"},
        }};
    };

    struct TriangulateSplinesToolBuilder
    {
        static constexpr std::string_view Name = "TriangulateSplinesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMeshFromSplinesToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TriangulateSplinesToolProperties
    {
        static constexpr std::string_view Name = "TriangulateSplinesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorTolerance = 0x68;
            static constexpr std::uintptr_t FlattenMethod = 0x70;
            static constexpr std::uintptr_t CombineMethod = 0x71;
            static constexpr std::uintptr_t Thickness = 0x78;
            static constexpr std::uintptr_t bFlipResult = 0x80;
            static constexpr std::uintptr_t OpenCurves = 0x81;
            static constexpr std::uintptr_t CurveOffset = 0x88;
            static constexpr std::uintptr_t OffsetClosedCurves = 0x90;
            static constexpr std::uintptr_t EndShapes = 0x91;
            static constexpr std::uintptr_t JoinMethod = 0x92;
            static constexpr std::uintptr_t MiterLimit = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ErrorTolerance", 0x68, "DoubleProperty"},
            {"FlattenMethod", 0x70, "EnumProperty"},
            {"CombineMethod", 0x71, "EnumProperty"},
            {"Thickness", 0x78, "DoubleProperty"},
            {"bFlipResult", 0x80, "BoolProperty"},
            {"OpenCurves", 0x81, "EnumProperty"},
            {"CurveOffset", 0x88, "DoubleProperty"},
            {"OffsetClosedCurves", 0x90, "EnumProperty"},
            {"EndShapes", 0x91, "EnumProperty"},
            {"JoinMethod", 0x92, "EnumProperty"},
            {"MiterLimit", 0x98, "DoubleProperty"},
        }};
    };

    struct UVTransferTool
    {
        static constexpr std::string_view Name = "UVTransferTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiTargetWithSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x110;
            static constexpr std::uintptr_t DestinationMaterialSettings = 0x118;
            static constexpr std::uintptr_t DestinationPreview = 0x120;
            static constexpr std::uintptr_t SourcePreview = 0x128;
            static constexpr std::uintptr_t SourceSeamVisualizer = 0x130;
            static constexpr std::uintptr_t DestinationSeamVisualizer = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Settings", 0x110, "ObjectProperty"},
            {"DestinationMaterialSettings", 0x118, "ObjectProperty"},
            {"DestinationPreview", 0x120, "ObjectProperty"},
            {"SourcePreview", 0x128, "ObjectProperty"},
            {"SourceSeamVisualizer", 0x130, "ObjectProperty"},
            {"DestinationSeamVisualizer", 0x138, "ObjectProperty"},
        }};
    };

    struct UVTransferToolBuilder
    {
        static constexpr std::string_view Name = "UVTransferToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiTargetWithSelectionToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UVTransferToolProperties
    {
        static constexpr std::string_view Name = "UVTransferToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bReverseDirection = 0x68;
            static constexpr std::uintptr_t bTransferSeamsOnly = 0x69;
            static constexpr std::uintptr_t bClearExistingSeams = 0x6A;
            static constexpr std::uintptr_t PathSimilarityWeight = 0x70;
            static constexpr std::uintptr_t bShowWireframes = 0x78;
            static constexpr std::uintptr_t bShowSeams = 0x79;
            static constexpr std::uintptr_t VertexSearchDistance = 0x80;
            static constexpr std::uintptr_t SourceUVChannel = 0x88;
            static constexpr std::uintptr_t bSameDestinationChannel = 0x98;
            static constexpr std::uintptr_t DestUVChannel = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bReverseDirection", 0x68, "BoolProperty"},
            {"bTransferSeamsOnly", 0x69, "BoolProperty"},
            {"bClearExistingSeams", 0x6A, "BoolProperty"},
            {"PathSimilarityWeight", 0x70, "DoubleProperty"},
            {"bShowWireframes", 0x78, "BoolProperty"},
            {"bShowSeams", 0x79, "BoolProperty"},
            {"VertexSearchDistance", 0x80, "DoubleProperty"},
            {"SourceUVChannel", 0x88, "StrProperty"},
            {"bSameDestinationChannel", 0x98, "BoolProperty"},
            {"DestUVChannel", 0xA0, "StrProperty"},
        }};
    };

    struct VolumeToMeshTool
    {
        static constexpr std::string_view Name = "VolumeToMeshTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xB0;
            static constexpr std::uintptr_t OutputTypeProperties = 0xB8;
            static constexpr std::uintptr_t PreviewMesh = 0xC0;
            static constexpr std::uintptr_t TargetVolume = 0xC8;
            static constexpr std::uintptr_t VolumeEdgesSet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Settings", 0xB0, "ObjectProperty"},
            {"OutputTypeProperties", 0xB8, "ObjectProperty"},
            {"PreviewMesh", 0xC0, "ObjectProperty"},
            {"TargetVolume", 0xC8, "SoftObjectProperty"},
            {"VolumeEdgesSet", 0xE8, "ObjectProperty"},
        }};
    };

    struct VolumeToMeshToolBuilder
    {
        static constexpr std::string_view Name = "VolumeToMeshToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VolumeToMeshToolProperties
    {
        static constexpr std::string_view Name = "VolumeToMeshToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bWeldEdges = 0x68;
            static constexpr std::uintptr_t bAutoRepair = 0x69;
            static constexpr std::uintptr_t bOptimizeMesh = 0x6A;
            static constexpr std::uintptr_t bShowWireframe = 0x6B;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bWeldEdges", 0x68, "BoolProperty"},
            {"bAutoRepair", 0x69, "BoolProperty"},
            {"bOptimizeMesh", 0x6A, "BoolProperty"},
            {"bShowWireframe", 0x6B, "BoolProperty"},
        }};
    };

    struct VoxelBlendMeshesTool
    {
        static constexpr std::string_view Name = "VoxelBlendMeshesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseVoxelTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendProperties = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlendProperties", 0x138, "ObjectProperty"},
        }};
    };

    struct VoxelBlendMeshesToolBuilder
    {
        static constexpr std::string_view Name = "VoxelBlendMeshesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCreateFromSelectedToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VoxelBlendMeshesToolProperties
    {
        static constexpr std::string_view Name = "VoxelBlendMeshesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendPower = 0x68;
            static constexpr std::uintptr_t BlendFalloff = 0x70;
            static constexpr std::uintptr_t Operation = 0x78;
            static constexpr std::uintptr_t bVoxWrap = 0x79;
            static constexpr std::uintptr_t bRemoveInternalsAfterVoxWrap = 0x7A;
            static constexpr std::uintptr_t ThickenShells = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BlendPower", 0x68, "DoubleProperty"},
            {"BlendFalloff", 0x70, "DoubleProperty"},
            {"Operation", 0x78, "EnumProperty"},
            {"bVoxWrap", 0x79, "BoolProperty"},
            {"bRemoveInternalsAfterVoxWrap", 0x7A, "BoolProperty"},
            {"ThickenShells", 0x80, "DoubleProperty"},
        }};
    };

    struct VoxelMorphologyMeshesTool
    {
        static constexpr std::string_view Name = "VoxelMorphologyMeshesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseVoxelTool";
        struct Offsets
        {
            static constexpr std::uintptr_t MorphologyProperties = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MorphologyProperties", 0x138, "ObjectProperty"},
        }};
    };

    struct VoxelMorphologyMeshesToolBuilder
    {
        static constexpr std::string_view Name = "VoxelMorphologyMeshesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCreateFromSelectedToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VoxelMorphologyMeshesToolProperties
    {
        static constexpr std::string_view Name = "VoxelMorphologyMeshesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x68;
            static constexpr std::uintptr_t Distance = 0x70;
            static constexpr std::uintptr_t bVoxWrap = 0x78;
            static constexpr std::uintptr_t bRemoveInternalsAfterVoxWrap = 0x79;
            static constexpr std::uintptr_t ThickenShells = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Operation", 0x68, "EnumProperty"},
            {"Distance", 0x70, "DoubleProperty"},
            {"bVoxWrap", 0x78, "BoolProperty"},
            {"bRemoveInternalsAfterVoxWrap", 0x79, "BoolProperty"},
            {"ThickenShells", 0x80, "DoubleProperty"},
        }};
    };

    struct VoxelSolidifyMeshesTool
    {
        static constexpr std::string_view Name = "VoxelSolidifyMeshesTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseVoxelTool";
        struct Offsets
        {
            static constexpr std::uintptr_t SolidifyProperties = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SolidifyProperties", 0x138, "ObjectProperty"},
        }};
    };

    struct VoxelSolidifyMeshesToolBuilder
    {
        static constexpr std::string_view Name = "VoxelSolidifyMeshesToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCreateFromSelectedToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VoxelSolidifyMeshesToolProperties
    {
        static constexpr std::string_view Name = "VoxelSolidifyMeshesToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t WindingThreshold = 0x68;
            static constexpr std::uintptr_t ExtendBounds = 0x70;
            static constexpr std::uintptr_t SurfaceSearchSteps = 0x78;
            static constexpr std::uintptr_t bSolidAtBoundaries = 0x7C;
            static constexpr std::uintptr_t bApplyThickenShells = 0x7D;
            static constexpr std::uintptr_t ThickenShells = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WindingThreshold", 0x68, "DoubleProperty"},
            {"ExtendBounds", 0x70, "DoubleProperty"},
            {"SurfaceSearchSteps", 0x78, "IntProperty"},
            {"bSolidAtBoundaries", 0x7C, "BoolProperty"},
            {"bApplyThickenShells", 0x7D, "BoolProperty"},
            {"ThickenShells", 0x80, "DoubleProperty"},
        }};
    };

}
