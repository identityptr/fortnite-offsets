#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GeometryFramework
{
    struct BaseDynamicMeshComponent
    {
        static constexpr std::string_view Name = "BaseDynamicMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bExplicitShowWireframe = 0x5E0;
            static constexpr std::uintptr_t WireframeColor = 0x5E4;
            static constexpr std::uintptr_t ColorMode = 0x5F4;
            static constexpr std::uintptr_t ConstantColor = 0x5F8;
            static constexpr std::uintptr_t ColorSpaceMode = 0x5FC;
            static constexpr std::uintptr_t bTwoSided = 0x5FD;
            static constexpr std::uintptr_t bEnableFlatShading = 0x5FE;
            static constexpr std::uintptr_t bEnableViewModeOverrides = 0x5FF;
            static constexpr std::uintptr_t OverrideRenderMaterial = 0x600;
            static constexpr std::uintptr_t SecondaryRenderMaterial = 0x608;
            static constexpr std::uintptr_t WireframeMaterialOverride = 0x618;
            static constexpr std::uintptr_t SecondaryWireframeMaterialOverride = 0x620;
            static constexpr std::uintptr_t bEnableRayTracing = 0x628;
            static constexpr std::uintptr_t DrawPath = 0x629;
            static constexpr std::uintptr_t DistanceFieldMode = 0x62A;
            static constexpr std::uintptr_t BaseMaterials = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bExplicitShowWireframe", 0x5E0, "BoolProperty"},
            {"WireframeColor", 0x5E4, "StructProperty"},
            {"ColorMode", 0x5F4, "EnumProperty"},
            {"ConstantColor", 0x5F8, "StructProperty"},
            {"ColorSpaceMode", 0x5FC, "EnumProperty"},
            {"bTwoSided", 0x5FD, "BoolProperty"},
            {"bEnableFlatShading", 0x5FE, "BoolProperty"},
            {"bEnableViewModeOverrides", 0x5FF, "BoolProperty"},
            {"OverrideRenderMaterial", 0x600, "ObjectProperty"},
            {"SecondaryRenderMaterial", 0x608, "ObjectProperty"},
            {"WireframeMaterialOverride", 0x618, "ObjectProperty"},
            {"SecondaryWireframeMaterialOverride", 0x620, "ObjectProperty"},
            {"bEnableRayTracing", 0x628, "BoolProperty"},
            {"DrawPath", 0x629, "EnumProperty"},
            {"DistanceFieldMode", 0x62A, "EnumProperty"},
            {"BaseMaterials", 0x630, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 36> FunctionNames{{
            "ClearOverrideRenderMaterial",
            "ClearOverrideSecondaryWireframeRenderMaterial",
            "ClearOverrideWireframeRenderMaterial",
            "ClearSecondaryRenderMaterial",
            "GetColorOverrideMode",
            "GetConstantOverrideColor",
            "GetDistanceFieldMode",
            "GetDynamicMesh",
            "GetEnableRaytracing",
            "GetEnableWireframeRenderPass",
            "GetFlatShadingEnabled",
            "GetMeshDrawPath",
            "GetOverrideRenderMaterial",
            "GetOverrideSecondaryWireframeRenderMaterial",
            "GetOverrideWireframeRenderMaterial",
            "GetSecondaryBuffersVisibility",
            "GetSecondaryRenderMaterial",
            "GetShadowsEnabled",
            "GetVertexColorSpaceTransformMode",
            "GetViewModeOverridesEnabled",
            "HasOverrideRenderMaterial",
            "SetColorOverrideMode",
            "SetConstantOverrideColor",
            "SetDistanceFieldMode",
            "SetEnableFlatShading",
            "SetEnableRaytracing",
            "SetEnableWireframeRenderPass",
            "SetMeshDrawPath",
            "SetOverrideRenderMaterial",
            "SetOverrideSecondaryWireframeRenderMaterial",
            "SetOverrideWireframeRenderMaterial",
            "SetSecondaryBuffersVisibility",
            "SetSecondaryRenderMaterial",
            "SetShadowsEnabled",
            "SetVertexColorSpaceTransformMode",
            "SetViewModeOverridesEnabled",
        }};
    };

    struct DynamicMesh
    {
        static constexpr std::string_view Name = "DynamicMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshModifiedBPEvent = 0x70;
            static constexpr std::uintptr_t MeshGenerator = 0xA0;
            static constexpr std::uintptr_t bEnableMeshGenerator = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MeshModifiedBPEvent", 0x70, "MulticastInlineDelegateProperty"},
            {"MeshGenerator", 0xA0, "ObjectProperty"},
            {"bEnableMeshGenerator", 0xA8, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetTriangleCount",
            "IsEmpty",
            "Reset",
            "ResetToCube",
        }};
    };

    struct DynamicMeshActor
    {
        static constexpr std::string_view Name = "DynamicMeshActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicMeshComponent = 0x278;
            static constexpr std::uintptr_t bEnableComputeMeshPool = 0x280;
            static constexpr std::uintptr_t DynamicMeshPool = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DynamicMeshComponent", 0x278, "ObjectProperty"},
            {"bEnableComputeMeshPool", 0x280, "BoolProperty"},
            {"DynamicMeshPool", 0x288, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "AllocateComputeMesh",
            "FreeAllComputeMeshes",
            "GetComputeMeshPool",
            "GetDynamicMeshComponent",
            "ReleaseAllComputeMeshes",
            "ReleaseComputeMesh",
        }};
    };

    struct DynamicMeshChangeInfo
    {
        static constexpr std::string_view Name = "DynamicMeshChangeInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Flags = 0x1;
            static constexpr std::uintptr_t bIsRevertChange = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"Flags", 0x1, "EnumProperty"},
            {"bIsRevertChange", 0x2, "BoolProperty"},
        }};
    };

    struct DynamicMeshComponent
    {
        static constexpr std::string_view Name = "DynamicMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseDynamicMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshObject = 0x648;
            static constexpr std::uintptr_t bAllowsGeometrySelection = 0x6A9;
            static constexpr std::uintptr_t TangentsType = 0x770;
            static constexpr std::uintptr_t CollisionType = 0x860;
            static constexpr std::uintptr_t bUseAsyncCooking = 0x861;
            static constexpr std::uintptr_t bEnableComplexCollision = 0x862;
            static constexpr std::uintptr_t bDeferCollisionUpdates = 0x863;
            static constexpr std::uintptr_t bDisableMeshUVHitResults = 0x864;
            static constexpr std::uintptr_t MeshBodySetup = 0x868;
            static constexpr std::uintptr_t AggGeom = 0x8A8;
            static constexpr std::uintptr_t AsyncBodySetupQueue = 0x948;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MeshObject", 0x648, "ObjectProperty"},
            {"bAllowsGeometrySelection", 0x6A9, "BoolProperty"},
            {"TangentsType", 0x770, "EnumProperty"},
            {"CollisionType", 0x860, "ByteProperty"},
            {"bUseAsyncCooking", 0x861, "BoolProperty"},
            {"bEnableComplexCollision", 0x862, "BoolProperty"},
            {"bDeferCollisionUpdates", 0x863, "BoolProperty"},
            {"bDisableMeshUVHitResults", 0x864, "BoolProperty"},
            {"MeshBodySetup", 0x868, "ObjectProperty"},
            {"AggGeom", 0x8A8, "StructProperty"},
            {"AsyncBodySetupQueue", 0x948, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "AllowsGeometrySelection",
            "ConfigureMaterialSet",
            "EnableComplexAsSimpleCollision",
            "GetTangentsType",
            "GetTangentsTypePure",
            "NotifyMeshModified",
            "NotifyMeshVertexAttributesModified",
            "SetAllowsGeometrySelection",
            "SetComplexAsSimpleCollisionEnabled",
            "SetDeferredCollisionUpdatesEnabled",
            "SetDynamicMesh",
            "SetTangentsType",
            "UpdateCollision",
            "ValidateMaterialSlots",
        }};
    };

    struct DynamicMeshGenerator
    {
        static constexpr std::string_view Name = "DynamicMeshGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicMeshPool
    {
        static constexpr std::string_view Name = "DynamicMeshPool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedMeshes = 0x28;
            static constexpr std::uintptr_t AllCreatedMeshes = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedMeshes", 0x28, "ArrayProperty"},
            {"AllCreatedMeshes", 0x38, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "FreeAllMeshes",
            "RequestMesh",
            "ReturnAllMeshes",
            "ReturnMesh",
        }};
    };

    struct DynamicMeshProcessorBlueprint
    {
        static constexpr std::string_view Name = "DynamicMeshProcessorBlueprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bRequiresGameThread = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRequiresGameThread", 0x28, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ProcessDynamicMesh",
        }};
    };

    struct MeshCommandChangeTarget
    {
        static constexpr std::string_view Name = "MeshCommandChangeTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshReplacementCommandChangeTarget
    {
        static constexpr std::string_view Name = "MeshReplacementCommandChangeTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshVertexCommandChangeTarget
    {
        static constexpr std::string_view Name = "MeshVertexCommandChangeTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
