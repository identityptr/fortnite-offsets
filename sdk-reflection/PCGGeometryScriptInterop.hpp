#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PCGGeometryScriptInterop
{
    struct PCGAppendMeshesFromPointsSettings
    {
        static constexpr std::string_view Name = "PCGAppendMeshesFromPointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xA8;
            static constexpr std::uintptr_t Mesh = 0xB0;
            static constexpr std::uintptr_t MeshAttribute = 0xD0;
            static constexpr std::uintptr_t bExtractMaterials = 0x100;
            static constexpr std::uintptr_t RequestedLODType = 0x101;
            static constexpr std::uintptr_t RequestedLODIndex = 0x104;
            static constexpr std::uintptr_t bSynchronousLoad = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Mode", 0xA8, "EnumProperty"},
            {"Mesh", 0xB0, "SoftObjectProperty"},
            {"MeshAttribute", 0xD0, "StructProperty"},
            {"bExtractMaterials", 0x100, "BoolProperty"},
            {"RequestedLODType", 0x101, "EnumProperty"},
            {"RequestedLODIndex", 0x104, "IntProperty"},
            {"bSynchronousLoad", 0x108, "BoolProperty"},
        }};
    };

    struct PCGBooleanOperationSettings
    {
        static constexpr std::string_view Name = "PCGBooleanOperationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t BooleanOperation = 0xA8;
            static constexpr std::uintptr_t BooleanOperationOptions = 0xAC;
            static constexpr std::uintptr_t TagInheritanceMode = 0xB8;
            static constexpr std::uintptr_t Mode = 0xB9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BooleanOperation", 0xA8, "EnumProperty"},
            {"BooleanOperationOptions", 0xAC, "StructProperty"},
            {"TagInheritanceMode", 0xB8, "EnumProperty"},
            {"Mode", 0xB9, "EnumProperty"},
        }};
    };

    struct PCGCreateEmptyDynamicMeshSettings
    {
        static constexpr std::string_view Name = "PCGCreateEmptyDynamicMeshSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGDynamicMeshBaseSettings
    {
        static constexpr std::string_view Name = "PCGDynamicMeshBaseSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGDynamicMeshManagedComponent
    {
        static constexpr std::string_view Name = "PCGDynamicMeshManagedComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DataUID = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataUID", 0x58, "UInt64Property"},
        }};
    };

    struct PCGDynamicMeshTransformSettings
    {
        static constexpr std::string_view Name = "PCGDynamicMeshTransformSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transform", 0xB0, "StructProperty"},
        }};
    };

    struct PCGGeometryBlueprintElement
    {
        static constexpr std::string_view Name = "PCGGeometryBlueprintElement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGBlueprintBaseElement";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsCacheable = 0x28;
            static constexpr std::uintptr_t bComputeFullDataCrc = 0x29;
            static constexpr std::uintptr_t bRequiresGameThread = 0x2A;
            static constexpr std::uintptr_t CustomInputPins = 0x30;
            static constexpr std::uintptr_t CustomOutputPins = 0x40;
            static constexpr std::uintptr_t bHasDefaultInPin = 0x50;
            static constexpr std::uintptr_t bHasDefaultOutPin = 0x51;
            static constexpr std::uintptr_t bHasDynamicPins = 0x52;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsCacheable", 0x28, "BoolProperty"},
            {"bComputeFullDataCrc", 0x29, "BoolProperty"},
            {"bRequiresGameThread", 0x2A, "BoolProperty"},
            {"CustomInputPins", 0x30, "ArrayProperty"},
            {"CustomOutputPins", 0x40, "ArrayProperty"},
            {"bHasDefaultInPin", 0x50, "BoolProperty"},
            {"bHasDefaultOutPin", 0x51, "BoolProperty"},
            {"bHasDynamicPins", 0x52, "BoolProperty"},
        }};
    };

    struct PCGGetDynamicMeshDataSettings
    {
        static constexpr std::string_view Name = "PCGGetDynamicMeshDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataFromActorSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Options = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Options", 0x178, "StructProperty"},
        }};
    };

    struct PCGGetMaterialsDynamicMeshSettings
    {
        static constexpr std::string_view Name = "PCGGetMaterialsDynamicMeshSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGMergeDynamicMeshesSettings
    {
        static constexpr std::string_view Name = "PCGMergeDynamicMeshesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGMeshSamplerSettings
    {
        static constexpr std::string_view Name = "PCGMeshSamplerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bExtractMeshFromInput = 0xA8;
            static constexpr std::uintptr_t Mesh = 0xB0;
            static constexpr std::uintptr_t InputSource = 0xD0;
            static constexpr std::uintptr_t SamplingMethod = 0x100;
            static constexpr std::uintptr_t bUseColorChannelAsDensity = 0x101;
            static constexpr std::uintptr_t ColorChannelAsDensity = 0x104;
            static constexpr std::uintptr_t bHasDefaultColorOverride = 0x108;
            static constexpr std::uintptr_t DefaultColorOverride = 0x10C;
            static constexpr std::uintptr_t bVoxelize = 0x11C;
            static constexpr std::uintptr_t VoxelSize = 0x120;
            static constexpr std::uintptr_t bRemoveHiddenTriangles = 0x124;
            static constexpr std::uintptr_t RequestedLODType = 0x125;
            static constexpr std::uintptr_t RequestedLODIndex = 0x128;
            static constexpr std::uintptr_t SamplingOptions = 0x130;
            static constexpr std::uintptr_t NonUniformSamplingOptions = 0x150;
            static constexpr std::uintptr_t bExtractUVAsAttribute = 0x168;
            static constexpr std::uintptr_t UVAttributeName = 0x16C;
            static constexpr std::uintptr_t UVChannel = 0x170;
            static constexpr std::uintptr_t bOutputTriangleIds = 0x174;
            static constexpr std::uintptr_t TriangleIdAttributeName = 0x178;
            static constexpr std::uintptr_t bOutputMaterialInfo = 0x17C;
            static constexpr std::uintptr_t MaterialIdAttributeName = 0x180;
            static constexpr std::uintptr_t MaterialAttributeName = 0x184;
            static constexpr std::uintptr_t PointSteepness = 0x188;
            static constexpr std::uintptr_t bSynchronousLoad = 0x18C;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"bExtractMeshFromInput", 0xA8, "BoolProperty"},
            {"Mesh", 0xB0, "SoftObjectProperty"},
            {"InputSource", 0xD0, "StructProperty"},
            {"SamplingMethod", 0x100, "EnumProperty"},
            {"bUseColorChannelAsDensity", 0x101, "BoolProperty"},
            {"ColorChannelAsDensity", 0x104, "EnumProperty"},
            {"bHasDefaultColorOverride", 0x108, "BoolProperty"},
            {"DefaultColorOverride", 0x10C, "StructProperty"},
            {"bVoxelize", 0x11C, "BoolProperty"},
            {"VoxelSize", 0x120, "FloatProperty"},
            {"bRemoveHiddenTriangles", 0x124, "BoolProperty"},
            {"RequestedLODType", 0x125, "EnumProperty"},
            {"RequestedLODIndex", 0x128, "IntProperty"},
            {"SamplingOptions", 0x130, "StructProperty"},
            {"NonUniformSamplingOptions", 0x150, "StructProperty"},
            {"bExtractUVAsAttribute", 0x168, "BoolProperty"},
            {"UVAttributeName", 0x16C, "NameProperty"},
            {"UVChannel", 0x170, "IntProperty"},
            {"bOutputTriangleIds", 0x174, "BoolProperty"},
            {"TriangleIdAttributeName", 0x178, "NameProperty"},
            {"bOutputMaterialInfo", 0x17C, "BoolProperty"},
            {"MaterialIdAttributeName", 0x180, "NameProperty"},
            {"MaterialAttributeName", 0x184, "NameProperty"},
            {"PointSteepness", 0x188, "FloatProperty"},
            {"bSynchronousLoad", 0x18C, "BoolProperty"},
        }};
    };

    struct PCGMeshToDynamicMeshSettings
    {
        static constexpr std::string_view Name = "PCGMeshToDynamicMeshSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0xA8;
            static constexpr std::uintptr_t bExtractMaterials = 0xC8;
            static constexpr std::uintptr_t OverrideMaterials = 0xD0;
            static constexpr std::uintptr_t RequestedLODType = 0xE0;
            static constexpr std::uintptr_t RequestedLODIndex = 0xE4;
            static constexpr std::uintptr_t bSynchronousLoad = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Mesh", 0xA8, "SoftObjectProperty"},
            {"bExtractMaterials", 0xC8, "BoolProperty"},
            {"OverrideMaterials", 0xD0, "ArrayProperty"},
            {"RequestedLODType", 0xE0, "EnumProperty"},
            {"RequestedLODIndex", 0xE4, "IntProperty"},
            {"bSynchronousLoad", 0xE8, "BoolProperty"},
        }};
    };

    struct PCGPrimitiveCrossSectionSettings
    {
        static constexpr std::string_view Name = "PCGPrimitiveCrossSectionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SliceDirection = 0xA8;
            static constexpr std::uintptr_t ExtrusionVectorAttribute = 0xC0;
            static constexpr std::uintptr_t MinimumCoplanarVertices = 0xF0;
            static constexpr std::uintptr_t MaxMeshVertexCount = 0xF4;
            static constexpr std::uintptr_t bEnableTierMerging = 0xF8;
            static constexpr std::uintptr_t TierMergingThreshold = 0x100;
            static constexpr std::uintptr_t bEnableMinAreaCulling = 0x108;
            static constexpr std::uintptr_t MinAreaCullingThreshold = 0x110;
            static constexpr std::uintptr_t bEnableMinHeightCulling = 0x118;
            static constexpr std::uintptr_t MinHeightCullingThreshold = 0x120;
            static constexpr std::uintptr_t bRemoveRedundantSections = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SliceDirection", 0xA8, "StructProperty"},
            {"ExtrusionVectorAttribute", 0xC0, "StructProperty"},
            {"MinimumCoplanarVertices", 0xF0, "IntProperty"},
            {"MaxMeshVertexCount", 0xF4, "IntProperty"},
            {"bEnableTierMerging", 0xF8, "BoolProperty"},
            {"TierMergingThreshold", 0x100, "DoubleProperty"},
            {"bEnableMinAreaCulling", 0x108, "BoolProperty"},
            {"MinAreaCullingThreshold", 0x110, "DoubleProperty"},
            {"bEnableMinHeightCulling", 0x118, "BoolProperty"},
            {"MinHeightCullingThreshold", 0x120, "DoubleProperty"},
            {"bRemoveRedundantSections", 0x128, "BoolProperty"},
        }};
    };

    struct PCGSaveDynamicMeshToAssetSettings
    {
        static constexpr std::string_view Name = "PCGSaveDynamicMeshToAssetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ExportParams = 0xA8;
            static constexpr std::uintptr_t bExportMaterialsFromDynamicMesh = 0xD8;
            static constexpr std::uintptr_t CopyMeshToAssetOptions = 0xE0;
            static constexpr std::uintptr_t MeshWriteLOD = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ExportParams", 0xA8, "StructProperty"},
            {"bExportMaterialsFromDynamicMesh", 0xD8, "BoolProperty"},
            {"CopyMeshToAssetOptions", 0xE0, "StructProperty"},
            {"MeshWriteLOD", 0x198, "StructProperty"},
        }};
    };

    struct PCGSetMaterialsDynamicMeshSettings
    {
        static constexpr std::string_view Name = "PCGSetMaterialsDynamicMeshSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Materials = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Materials", 0xA8, "ArrayProperty"},
        }};
    };

    struct PCGSpawnDynamicMeshSettings
    {
        static constexpr std::string_view Name = "PCGSpawnDynamicMeshSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActor = 0xA8;
            static constexpr std::uintptr_t PostProcessFunctionNames = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetActor", 0xA8, "SoftObjectProperty"},
            {"PostProcessFunctionNames", 0xC8, "ArrayProperty"},
        }};
    };

    struct PCGSplineToMeshSettings
    {
        static constexpr std::string_view Name = "PCGSplineToMeshSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDynamicMeshBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorTolerance = 0xA8;
            static constexpr std::uintptr_t FlattenMethod = 0xB0;
            static constexpr std::uintptr_t Thickness = 0xB8;
            static constexpr std::uintptr_t ExtrusionVector = 0xC0;
            static constexpr std::uintptr_t bExtrudeInLocalSpace = 0xD8;
            static constexpr std::uintptr_t bFlipResult = 0xD9;
            static constexpr std::uintptr_t OpenCurves = 0xDA;
            static constexpr std::uintptr_t CurveOffset = 0xE0;
            static constexpr std::uintptr_t OffsetClosedCurves = 0xE8;
            static constexpr std::uintptr_t EndShapes = 0xE9;
            static constexpr std::uintptr_t JoinMethod = 0xEA;
            static constexpr std::uintptr_t MiterLimit = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ErrorTolerance", 0xA8, "DoubleProperty"},
            {"FlattenMethod", 0xB0, "EnumProperty"},
            {"Thickness", 0xB8, "DoubleProperty"},
            {"ExtrusionVector", 0xC0, "StructProperty"},
            {"bExtrudeInLocalSpace", 0xD8, "BoolProperty"},
            {"bFlipResult", 0xD9, "BoolProperty"},
            {"OpenCurves", 0xDA, "EnumProperty"},
            {"CurveOffset", 0xE0, "DoubleProperty"},
            {"OffsetClosedCurves", 0xE8, "EnumProperty"},
            {"EndShapes", 0xE9, "EnumProperty"},
            {"JoinMethod", 0xEA, "EnumProperty"},
            {"MiterLimit", 0xF0, "DoubleProperty"},
        }};
    };

}
