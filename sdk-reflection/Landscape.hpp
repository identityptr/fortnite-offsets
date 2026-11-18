#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Landscape
{
    struct ControlPointMeshActor
    {
        static constexpr std::string_view Name = "ControlPointMeshActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlPointMeshComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ControlPointMeshComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct ControlPointMeshComponent
    {
        static constexpr std::string_view Name = "ControlPointMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VirtualTextureMainPassMaxDrawDistance = 0x6A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VirtualTextureMainPassMaxDrawDistance", 0x6A0, "FloatProperty"},
        }};
    };

    struct ForeignControlPointData
    {
        static constexpr std::string_view Name = "ForeignControlPointData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ForeignSplineSegmentData
    {
        static constexpr std::string_view Name = "ForeignSplineSegmentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ForeignWorldSplineData
    {
        static constexpr std::string_view Name = "ForeignWorldSplineData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GizmoSelectData
    {
        static constexpr std::string_view Name = "GizmoSelectData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GrassInput
    {
        static constexpr std::string_view Name = "GrassInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t GrassType = 0x8;
            static constexpr std::uintptr_t Input = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"GrassType", 0x8, "ObjectProperty"},
            {"Input", 0x10, "StructProperty"},
        }};
    };

    struct GrassVariety
    {
        static constexpr std::string_view Name = "GrassVariety";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GrassMesh = 0x0;
            static constexpr std::uintptr_t OverrideMaterials = 0x8;
            static constexpr std::uintptr_t GrassDensity = 0x18;
            static constexpr std::uintptr_t GrassDensityQuality = 0x30;
            static constexpr std::uintptr_t bUseGrid = 0x58;
            static constexpr std::uintptr_t PlacementJitter = 0x5C;
            static constexpr std::uintptr_t StartCullDistance = 0x60;
            static constexpr std::uintptr_t StartCullDistanceQuality = 0x78;
            static constexpr std::uintptr_t EndCullDistance = 0xA0;
            static constexpr std::uintptr_t EndCullDistanceQuality = 0xB8;
            static constexpr std::uintptr_t MinLOD = 0xE0;
            static constexpr std::uintptr_t AllowedDensityRange = 0xE4;
            static constexpr std::uintptr_t Scaling = 0xEC;
            static constexpr std::uintptr_t ScaleX = 0xF0;
            static constexpr std::uintptr_t ScaleY = 0xF8;
            static constexpr std::uintptr_t ScaleZ = 0x100;
            static constexpr std::uintptr_t bWeightAttenuatesMaxScale = 0x108;
            static constexpr std::uintptr_t MaxScaleWeightAttenuation = 0x10C;
            static constexpr std::uintptr_t RandomRotation = 0x110;
            static constexpr std::uintptr_t AlignToSurface = 0x111;
            static constexpr std::uintptr_t bAlignToTriangleNormals = 0x112;
            static constexpr std::uintptr_t bUseLandscapeLightmap = 0x113;
            static constexpr std::uintptr_t LightingChannels = 0x114;
            static constexpr std::uintptr_t bReceivesDecals = 0x115;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x116;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x117;
            static constexpr std::uintptr_t bCastContactShadow = 0x118;
            static constexpr std::uintptr_t bKeepInstanceBufferCPUCopy = 0x119;
            static constexpr std::uintptr_t InstanceWorldPositionOffsetDisableDistance = 0x11C;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"GrassMesh", 0x0, "ObjectProperty"},
            {"OverrideMaterials", 0x8, "ArrayProperty"},
            {"GrassDensity", 0x18, "StructProperty"},
            {"GrassDensityQuality", 0x30, "StructProperty"},
            {"bUseGrid", 0x58, "BoolProperty"},
            {"PlacementJitter", 0x5C, "FloatProperty"},
            {"StartCullDistance", 0x60, "StructProperty"},
            {"StartCullDistanceQuality", 0x78, "StructProperty"},
            {"EndCullDistance", 0xA0, "StructProperty"},
            {"EndCullDistanceQuality", 0xB8, "StructProperty"},
            {"MinLOD", 0xE0, "IntProperty"},
            {"AllowedDensityRange", 0xE4, "StructProperty"},
            {"Scaling", 0xEC, "EnumProperty"},
            {"ScaleX", 0xF0, "StructProperty"},
            {"ScaleY", 0xF8, "StructProperty"},
            {"ScaleZ", 0x100, "StructProperty"},
            {"bWeightAttenuatesMaxScale", 0x108, "BoolProperty"},
            {"MaxScaleWeightAttenuation", 0x10C, "FloatProperty"},
            {"RandomRotation", 0x110, "BoolProperty"},
            {"AlignToSurface", 0x111, "BoolProperty"},
            {"bAlignToTriangleNormals", 0x112, "BoolProperty"},
            {"bUseLandscapeLightmap", 0x113, "BoolProperty"},
            {"LightingChannels", 0x114, "StructProperty"},
            {"bReceivesDecals", 0x115, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x116, "BoolProperty"},
            {"bCastDynamicShadow", 0x117, "BoolProperty"},
            {"bCastContactShadow", 0x118, "BoolProperty"},
            {"bKeepInstanceBufferCPUCopy", 0x119, "BoolProperty"},
            {"InstanceWorldPositionOffsetDisableDistance", 0x11C, "UInt32Property"},
            {"ShadowCacheInvalidationBehavior", 0x120, "EnumProperty"},
        }};
    };

    struct HeightmapData
    {
        static constexpr std::string_view Name = "HeightmapData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Texture", 0x0, "ObjectProperty"},
        }};
    };

    struct HeightmapTextureEdgeSnapshot
    {
        static constexpr std::string_view Name = "HeightmapTextureEdgeSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Landscape
    {
        static constexpr std::string_view Name = "Landscape";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bGrassEnabled = 0x690;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bGrassEnabled", 0x690, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "GetEditLayerByNameBP",
            "GetEditLayersBP",
            "GetTargetLayerNames",
            "PrepareEditLayersResourcesBP",
            "RenderHeightmap",
            "RenderWeightmap",
            "RenderWeightmaps",
        }};
    };

    struct LandscapeBlueprintBrushBase
    {
        static constexpr std::string_view Name = "LandscapeBlueprintBrushBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateOnPropertyChange = 0x278;
            static constexpr std::uintptr_t AffectHeightmap = 0x279;
            static constexpr std::uintptr_t AffectWeightmap = 0x27A;
            static constexpr std::uintptr_t AffectVisibilityLayer = 0x27B;
            static constexpr std::uintptr_t AffectedWeightmapLayers = 0x280;
            static constexpr std::uintptr_t bUsePowerOfTwoRenderTarget = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"UpdateOnPropertyChange", 0x278, "BoolProperty"},
            {"AffectHeightmap", 0x279, "BoolProperty"},
            {"AffectWeightmap", 0x27A, "BoolProperty"},
            {"AffectVisibilityLayer", 0x27B, "BoolProperty"},
            {"AffectedWeightmapLayers", 0x280, "ArrayProperty"},
            {"bUsePowerOfTwoRenderTarget", 0x290, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetBlueprintRenderDependencies",
            "Initialize",
            "Render",
            "RenderLayer",
            "RequestLandscapeUpdate",
        }};
    };

    struct LandscapeBrushParameters
    {
        static constexpr std::string_view Name = "LandscapeBrushParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderAreaWorldTransform = 0x0;
            static constexpr std::uintptr_t RenderAreaSize = 0x60;
            static constexpr std::uintptr_t CombinedResult = 0x68;
            static constexpr std::uintptr_t LayerType = 0x70;
            static constexpr std::uintptr_t WeightmapLayerName = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RenderAreaWorldTransform", 0x0, "StructProperty"},
            {"RenderAreaSize", 0x60, "StructProperty"},
            {"CombinedResult", 0x68, "ObjectProperty"},
            {"LayerType", 0x70, "EnumProperty"},
            {"WeightmapLayerName", 0x74, "NameProperty"},
        }};
    };

    struct LandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_DEPRECATED
    {
        static constexpr std::string_view Name = "LandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport_DEPRECATED";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeComponent
    {
        static constexpr std::string_view Name = "LandscapeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionBaseX = 0x560;
            static constexpr std::uintptr_t SectionBaseY = 0x564;
            static constexpr std::uintptr_t ComponentSizeQuads = 0x568;
            static constexpr std::uintptr_t SubsectionSizeQuads = 0x56C;
            static constexpr std::uintptr_t NumSubsections = 0x570;
            static constexpr std::uintptr_t OverrideMaterial = 0x578;
            static constexpr std::uintptr_t OverrideHoleMaterial = 0x580;
            static constexpr std::uintptr_t MaterialInstances = 0x588;
            static constexpr std::uintptr_t MaterialInstancesDynamic = 0x598;
            static constexpr std::uintptr_t LODIndexToMaterialIndex = 0x5A8;
            static constexpr std::uintptr_t XYOffsetmapTexture = 0x5B8;
            static constexpr std::uintptr_t WeightmapScaleBias = 0x5C0;
            static constexpr std::uintptr_t WeightmapSubsectionOffset = 0x5E0;
            static constexpr std::uintptr_t HeightmapScaleBias = 0x5F0;
            static constexpr std::uintptr_t CachedLocalBox = 0x610;
            static constexpr std::uintptr_t MipToMipMaxDeltas = 0x648;
            static constexpr std::uintptr_t CollisionComponentRef = 0x658;
            static constexpr std::uintptr_t bUserTriggeredChangeRequested = 0x660;
            static constexpr std::uintptr_t bNaniteActive = 0x661;
            static constexpr std::uintptr_t HeightmapTexture = 0x668;
            static constexpr std::uintptr_t WeightmapLayerAllocations = 0x670;
            static constexpr std::uintptr_t WeightmapTextures = 0x680;
            static constexpr std::uintptr_t PerLODOverrideMaterials = 0x690;
            static constexpr std::uintptr_t NamedGrassTypes = 0x6A0;
            static constexpr std::uintptr_t MapBuildDataId = 0x6C0;
            static constexpr std::uintptr_t CollisionMipLevel = 0x6D0;
            static constexpr std::uintptr_t SimpleCollisionMipLevel = 0x6D4;
            static constexpr std::uintptr_t NegativeZBoundsExtension = 0x6D8;
            static constexpr std::uintptr_t PositiveZBoundsExtension = 0x6DC;
            static constexpr std::uintptr_t StaticLightingResolution = 0x6E0;
            static constexpr std::uintptr_t ForcedLod = 0x6E4;
            static constexpr std::uintptr_t LODBias = 0x6E8;
            static constexpr std::uintptr_t RegisteredEdgeFixup = 0x6F0;
            static constexpr std::uintptr_t MobileMaterialInterfaces = 0x700;
            static constexpr std::uintptr_t MobileWeightmapTextures = 0x710;
            static constexpr std::uintptr_t MobileWeightmapTextureArray = 0x720;
            static constexpr std::uintptr_t MobileWeightmapLayerAllocations = 0x728;
        };

        inline static constexpr std::array<PropertyInfo, 37> Properties{{
            {"SectionBaseX", 0x560, "IntProperty"},
            {"SectionBaseY", 0x564, "IntProperty"},
            {"ComponentSizeQuads", 0x568, "IntProperty"},
            {"SubsectionSizeQuads", 0x56C, "IntProperty"},
            {"NumSubsections", 0x570, "IntProperty"},
            {"OverrideMaterial", 0x578, "ObjectProperty"},
            {"OverrideHoleMaterial", 0x580, "ObjectProperty"},
            {"MaterialInstances", 0x588, "ArrayProperty"},
            {"MaterialInstancesDynamic", 0x598, "ArrayProperty"},
            {"LODIndexToMaterialIndex", 0x5A8, "ArrayProperty"},
            {"XYOffsetmapTexture", 0x5B8, "ObjectProperty"},
            {"WeightmapScaleBias", 0x5C0, "StructProperty"},
            {"WeightmapSubsectionOffset", 0x5E0, "FloatProperty"},
            {"HeightmapScaleBias", 0x5F0, "StructProperty"},
            {"CachedLocalBox", 0x610, "StructProperty"},
            {"MipToMipMaxDeltas", 0x648, "ArrayProperty"},
            {"CollisionComponentRef", 0x658, "ObjectProperty"},
            {"bUserTriggeredChangeRequested", 0x660, "BoolProperty"},
            {"bNaniteActive", 0x661, "BoolProperty"},
            {"HeightmapTexture", 0x668, "ObjectProperty"},
            {"WeightmapLayerAllocations", 0x670, "ArrayProperty"},
            {"WeightmapTextures", 0x680, "ArrayProperty"},
            {"PerLODOverrideMaterials", 0x690, "ArrayProperty"},
            {"NamedGrassTypes", 0x6A0, "MapProperty"},
            {"MapBuildDataId", 0x6C0, "StructProperty"},
            {"CollisionMipLevel", 0x6D0, "IntProperty"},
            {"SimpleCollisionMipLevel", 0x6D4, "IntProperty"},
            {"NegativeZBoundsExtension", 0x6D8, "FloatProperty"},
            {"PositiveZBoundsExtension", 0x6DC, "FloatProperty"},
            {"StaticLightingResolution", 0x6E0, "FloatProperty"},
            {"ForcedLod", 0x6E4, "IntProperty"},
            {"LODBias", 0x6E8, "IntProperty"},
            {"RegisteredEdgeFixup", 0x6F0, "ObjectProperty"},
            {"MobileMaterialInterfaces", 0x700, "ArrayProperty"},
            {"MobileWeightmapTextures", 0x710, "ArrayProperty"},
            {"MobileWeightmapTextureArray", 0x720, "ObjectProperty"},
            {"MobileWeightmapLayerAllocations", 0x728, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "EditorGetPaintLayerWeightAtLocation",
            "EditorGetPaintLayerWeightByNameAtLocation",
            "GetGrassTypesBP",
            "GetMaterialInstanceDynamic",
            "SetForcedLOD",
            "SetLODBias",
        }};
    };

    struct LandscapeComponentMaterialOverride
    {
        static constexpr std::string_view Name = "LandscapeComponentMaterialOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LODIndex = 0x0;
            static constexpr std::uintptr_t Material = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LODIndex", 0x0, "StructProperty"},
            {"Material", 0x18, "ObjectProperty"},
        }};
    };

    struct LandscapeDefaultEditLayerRenderer
    {
        static constexpr std::string_view Name = "LandscapeDefaultEditLayerRenderer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeEditLayer
    {
        static constexpr std::string_view Name = "LandscapeEditLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeEditLayerPersistent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeEditLayerBase
    {
        static constexpr std::string_view Name = "LandscapeEditLayerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetNameBP",
        }};
    };

    struct LandscapeEditLayerMergeRenderBlackboardItem
    {
        static constexpr std::string_view Name = "LandscapeEditLayerMergeRenderBlackboardItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeEditLayerPersistent
    {
        static constexpr std::string_view Name = "LandscapeEditLayerPersistent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeEditLayerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeEditLayerProcedural
    {
        static constexpr std::string_view Name = "LandscapeEditLayerProcedural";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeEditLayerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeEditLayerRenderer
    {
        static constexpr std::string_view Name = "LandscapeEditLayerRenderer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeEditLayerSplines
    {
        static constexpr std::string_view Name = "LandscapeEditLayerSplines";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeEditLayerPersistent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeEditResourcesSubsystem
    {
        static constexpr std::string_view Name = "LandscapeEditResourcesSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ScratchRenderTargets = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScratchRenderTargets", 0x30, "ArrayProperty"},
        }};
    };

    struct LandscapeEditToolRenderData
    {
        static constexpr std::string_view Name = "LandscapeEditToolRenderData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ToolMaterial = 0x0;
            static constexpr std::uintptr_t GizmoMaterial = 0x8;
            static constexpr std::uintptr_t SelectedType = 0x10;
            static constexpr std::uintptr_t DebugChannelR = 0x14;
            static constexpr std::uintptr_t DebugChannelG = 0x18;
            static constexpr std::uintptr_t DebugChannelB = 0x1C;
            static constexpr std::uintptr_t DataTexture = 0x20;
            static constexpr std::uintptr_t LayerContributionTexture = 0x28;
            static constexpr std::uintptr_t DirtyTexture = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ToolMaterial", 0x0, "ObjectProperty"},
            {"GizmoMaterial", 0x8, "ObjectProperty"},
            {"SelectedType", 0x10, "IntProperty"},
            {"DebugChannelR", 0x14, "IntProperty"},
            {"DebugChannelG", 0x18, "IntProperty"},
            {"DebugChannelB", 0x1C, "IntProperty"},
            {"DataTexture", 0x20, "ObjectProperty"},
            {"LayerContributionTexture", 0x28, "ObjectProperty"},
            {"DirtyTexture", 0x30, "ObjectProperty"},
        }};
    };

    struct LandscapeEditorLayerSettings
    {
        static constexpr std::string_view Name = "LandscapeEditorLayerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeGizmoActiveActor
    {
        static constexpr std::string_view Name = "LandscapeGizmoActiveActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeGizmoActor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct LandscapeGizmoActor
    {
        static constexpr std::string_view Name = "LandscapeGizmoActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct LandscapeGizmoRenderComponent
    {
        static constexpr std::string_view Name = "LandscapeGizmoRenderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDrawDistance = 0x278;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x27C;
            static constexpr std::uintptr_t CachedMaxDrawDistance = 0x280;
            static constexpr std::uintptr_t DepthPriorityGroup = 0x284;
            static constexpr std::uintptr_t ViewOwnerDepthPriorityGroup = 0x285;
            static constexpr std::uintptr_t IndirectLightingCacheQuality = 0x286;
            static constexpr std::uintptr_t LightmapType = 0x287;
            static constexpr std::uintptr_t HLODBatchingPolicy = 0x288;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x289;
            static constexpr std::uintptr_t bAlwaysCreatePhysicsState = 0x28A;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x28A;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x28A;
            static constexpr std::uintptr_t bIsActorTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bIsValidTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bMultiBodyOverlap = 0x28A;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x28A;
            static constexpr std::uintptr_t bAllowCullDistanceVolume = 0x28B;
            static constexpr std::uintptr_t bReturnMaterialOnMove = 0x28B;
            static constexpr std::uintptr_t bTraceComplexOnMove = 0x28B;
            static constexpr std::uintptr_t bUseViewOwnerDepthPriorityGroup = 0x28B;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x28B;
            static constexpr std::uintptr_t bVisibleInRealTimeSkyCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflectionCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflections = 0x28B;
            static constexpr std::uintptr_t bHoldout = 0x28C;
            static constexpr std::uintptr_t bOnlyOwnerSee = 0x28C;
            static constexpr std::uintptr_t bOwnerNoSee = 0x28C;
            static constexpr std::uintptr_t bReceivesDecals = 0x28C;
            static constexpr std::uintptr_t bRenderInDepthPass = 0x28C;
            static constexpr std::uintptr_t bRenderInMainPass = 0x28C;
            static constexpr std::uintptr_t bTreatAsBackgroundForOcclusion = 0x28C;
            static constexpr std::uintptr_t bUseAsOccluder = 0x28C;
            static constexpr std::uintptr_t CastShadow = 0x28D;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x28D;
            static constexpr std::uintptr_t bEmissiveLightSource = 0x28D;
            static constexpr std::uintptr_t bForceMipStreaming = 0x28D;
            static constexpr std::uintptr_t bHasPerInstanceHitProxies = 0x28D;
            static constexpr std::uintptr_t bSelectable = 0x28D;
            static constexpr std::uintptr_t bWantsEditorEffects = 0x28D;
            static constexpr std::uintptr_t bWantsSelectionOutline = 0x28D;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x28E;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x28E;
            static constexpr std::uintptr_t bCastContactShadow = 0x28E;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x28E;
            static constexpr std::uintptr_t bCastFarShadow = 0x28E;
            static constexpr std::uintptr_t bCastStaticShadow = 0x28E;
            static constexpr std::uintptr_t bCastVolumetricTranslucentShadow = 0x28E;
            static constexpr std::uintptr_t bSelfShadowOnly = 0x28E;
            static constexpr std::uintptr_t bCastCinematicShadow = 0x28F;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x28F;
            static constexpr std::uintptr_t bCastInsetShadow = 0x28F;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x28F;
            static constexpr std::uintptr_t bExcludeFromLightAttachmentGroup = 0x28F;
            static constexpr std::uintptr_t bLightAsIfStatic = 0x28F;
            static constexpr std::uintptr_t bLightAttachmentsAsGroup = 0x28F;
            static constexpr std::uintptr_t bReceiveMobileCSMShadows = 0x28F;
            static constexpr std::uintptr_t AlwaysLoadOnClient = 0x290;
            static constexpr std::uintptr_t bApplyImpulseOnDamage = 0x290;
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavmesh = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialForce = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialImpulse = 0x290;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x290;
            static constexpr std::uintptr_t bReplicatePhysicsToAutonomousProxy = 0x290;
            static constexpr std::uintptr_t bSingleSampleShadowFromStationaryLights = 0x290;
            static constexpr std::uintptr_t AlwaysLoadOnServer = 0x291;
            static constexpr std::uintptr_t bHiddenInSceneCapture = 0x291;
            static constexpr std::uintptr_t bIsBeingMovedByEditor = 0x291;
            static constexpr std::uintptr_t bLumenHeightfield = 0x291;
            static constexpr std::uintptr_t bRayTracingFarField = 0x291;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x291;
            static constexpr std::uintptr_t bUseEditorCompositing = 0x291;
            static constexpr std::uintptr_t bVisibleInSceneCaptureOnly = 0x291;
            static constexpr std::uintptr_t FirstPersonPrimitiveType = 0x292;
            static constexpr std::uintptr_t bHasNoStreamableTextures = 0x293;
            static constexpr std::uintptr_t bStaticWhenNotMoveable = 0x293;
            static constexpr std::uintptr_t bHasCustomNavigableGeometry = 0x294;
            static constexpr std::uintptr_t CanCharacterStepUpOn = 0x296;
            static constexpr std::uintptr_t LightingChannels = 0x297;
            static constexpr std::uintptr_t RayTracingGroupCullingPriority = 0x298;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x299;
            static constexpr std::uintptr_t ExcludeFromHLODLevels = 0x29A;
            static constexpr std::uintptr_t RayTracingGroupId = 0x29C;
            static constexpr std::uintptr_t VisibilityId = 0x2A0;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x2A4;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x2A8;
            static constexpr std::uintptr_t CustomPrimitiveDataInternal = 0x2B8;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x2E0;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x2E4;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x2E8;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x2F8;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x2F9;
            static constexpr std::uintptr_t VirtualTextureMinCoverage = 0x2FA;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x2FB;
            static constexpr std::uintptr_t BoundsScale = 0x348;
            static constexpr std::uintptr_t MoveIgnoreActors = 0x350;
            static constexpr std::uintptr_t MoveIgnoreComponents = 0x360;
            static constexpr std::uintptr_t BodyInstance = 0x380;
            static constexpr std::uintptr_t OnComponentHit = 0x528;
            static constexpr std::uintptr_t OnComponentBeginOverlap = 0x529;
            static constexpr std::uintptr_t OnComponentEndOverlap = 0x52A;
            static constexpr std::uintptr_t OnComponentWake = 0x52B;
            static constexpr std::uintptr_t OnComponentSleep = 0x52C;
            static constexpr std::uintptr_t OnComponentPhysicsStateChanged = 0x52E;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x52F;
            static constexpr std::uintptr_t OnEndCursorOver = 0x530;
            static constexpr std::uintptr_t OnClicked = 0x531;
            static constexpr std::uintptr_t OnReleased = 0x532;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x533;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x534;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x535;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x536;
            static constexpr std::uintptr_t OnTouchBegan = 0x537;
            static constexpr std::uintptr_t OnTouchEnded = 0x538;
            static constexpr std::uintptr_t OnTouchEntered = 0x539;
            static constexpr std::uintptr_t OnTouchExited = 0x53A;
            static constexpr std::uintptr_t LODParentPrimitive = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 116> Properties{{
            {"MinDrawDistance", 0x278, "FloatProperty"},
            {"LDMaxDrawDistance", 0x27C, "FloatProperty"},
            {"CachedMaxDrawDistance", 0x280, "FloatProperty"},
            {"DepthPriorityGroup", 0x284, "ByteProperty"},
            {"ViewOwnerDepthPriorityGroup", 0x285, "ByteProperty"},
            {"IndirectLightingCacheQuality", 0x286, "ByteProperty"},
            {"LightmapType", 0x287, "EnumProperty"},
            {"HLODBatchingPolicy", 0x288, "EnumProperty"},
            {"ShadowCacheInvalidationBehavior", 0x289, "EnumProperty"},
            {"bAlwaysCreatePhysicsState", 0x28A, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x28A, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x28A, "BoolProperty"},
            {"bIsActorTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bIsValidTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bMultiBodyOverlap", 0x28A, "BoolProperty"},
            {"bNeverDistanceCull", 0x28A, "BoolProperty"},
            {"bAllowCullDistanceVolume", 0x28B, "BoolProperty"},
            {"bReturnMaterialOnMove", 0x28B, "BoolProperty"},
            {"bTraceComplexOnMove", 0x28B, "BoolProperty"},
            {"bUseViewOwnerDepthPriorityGroup", 0x28B, "BoolProperty"},
            {"bVisibleInRayTracing", 0x28B, "BoolProperty"},
            {"bVisibleInRealTimeSkyCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflectionCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflections", 0x28B, "BoolProperty"},
            {"bHoldout", 0x28C, "BoolProperty"},
            {"bOnlyOwnerSee", 0x28C, "BoolProperty"},
            {"bOwnerNoSee", 0x28C, "BoolProperty"},
            {"bReceivesDecals", 0x28C, "BoolProperty"},
            {"bRenderInDepthPass", 0x28C, "BoolProperty"},
            {"bRenderInMainPass", 0x28C, "BoolProperty"},
            {"bTreatAsBackgroundForOcclusion", 0x28C, "BoolProperty"},
            {"bUseAsOccluder", 0x28C, "BoolProperty"},
            {"CastShadow", 0x28D, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x28D, "BoolProperty"},
            {"bEmissiveLightSource", 0x28D, "BoolProperty"},
            {"bForceMipStreaming", 0x28D, "BoolProperty"},
            {"bHasPerInstanceHitProxies", 0x28D, "BoolProperty"},
            {"bSelectable", 0x28D, "BoolProperty"},
            {"bWantsEditorEffects", 0x28D, "BoolProperty"},
            {"bWantsSelectionOutline", 0x28D, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x28E, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x28E, "BoolProperty"},
            {"bCastContactShadow", 0x28E, "BoolProperty"},
            {"bCastDynamicShadow", 0x28E, "BoolProperty"},
            {"bCastFarShadow", 0x28E, "BoolProperty"},
            {"bCastStaticShadow", 0x28E, "BoolProperty"},
            {"bCastVolumetricTranslucentShadow", 0x28E, "BoolProperty"},
            {"bSelfShadowOnly", 0x28E, "BoolProperty"},
            {"bCastCinematicShadow", 0x28F, "BoolProperty"},
            {"bCastHiddenShadow", 0x28F, "BoolProperty"},
            {"bCastInsetShadow", 0x28F, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x28F, "BoolProperty"},
            {"bExcludeFromLightAttachmentGroup", 0x28F, "BoolProperty"},
            {"bLightAsIfStatic", 0x28F, "BoolProperty"},
            {"bLightAttachmentsAsGroup", 0x28F, "BoolProperty"},
            {"bReceiveMobileCSMShadows", 0x28F, "BoolProperty"},
            {"AlwaysLoadOnClient", 0x290, "BoolProperty"},
            {"bApplyImpulseOnDamage", 0x290, "BoolProperty"},
            {"bFillCollisionUnderneathForNavmesh", 0x290, "BoolProperty"},
            {"bIgnoreRadialForce", 0x290, "BoolProperty"},
            {"bIgnoreRadialImpulse", 0x290, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x290, "BoolProperty"},
            {"bReplicatePhysicsToAutonomousProxy", 0x290, "BoolProperty"},
            {"bSingleSampleShadowFromStationaryLights", 0x290, "BoolProperty"},
            {"AlwaysLoadOnServer", 0x291, "BoolProperty"},
            {"bHiddenInSceneCapture", 0x291, "BoolProperty"},
            {"bIsBeingMovedByEditor", 0x291, "BoolProperty"},
            {"bLumenHeightfield", 0x291, "BoolProperty"},
            {"bRayTracingFarField", 0x291, "BoolProperty"},
            {"bRenderCustomDepth", 0x291, "BoolProperty"},
            {"bUseEditorCompositing", 0x291, "BoolProperty"},
            {"bVisibleInSceneCaptureOnly", 0x291, "BoolProperty"},
            {"FirstPersonPrimitiveType", 0x292, "EnumProperty"},
            {"bHasNoStreamableTextures", 0x293, "BoolProperty"},
            {"bStaticWhenNotMoveable", 0x293, "BoolProperty"},
            {"bHasCustomNavigableGeometry", 0x294, "ByteProperty"},
            {"CanCharacterStepUpOn", 0x296, "ByteProperty"},
            {"LightingChannels", 0x297, "StructProperty"},
            {"RayTracingGroupCullingPriority", 0x298, "EnumProperty"},
            {"CustomDepthStencilWriteMask", 0x299, "EnumProperty"},
            {"ExcludeFromHLODLevels", 0x29A, "ByteProperty"},
            {"RayTracingGroupId", 0x29C, "IntProperty"},
            {"VisibilityId", 0x2A0, "IntProperty"},
            {"CustomDepthStencilValue", 0x2A4, "IntProperty"},
            {"CustomPrimitiveData", 0x2A8, "StructProperty"},
            {"CustomPrimitiveDataInternal", 0x2B8, "StructProperty"},
            {"TranslucencySortPriority", 0x2E0, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x2E4, "FloatProperty"},
            {"RuntimeVirtualTextures", 0x2E8, "ArrayProperty"},
            {"VirtualTextureLodBias", 0x2F8, "Int8Property"},
            {"VirtualTextureCullMips", 0x2F9, "Int8Property"},
            {"VirtualTextureMinCoverage", 0x2FA, "Int8Property"},
            {"VirtualTextureRenderPassType", 0x2FB, "EnumProperty"},
            {"BoundsScale", 0x348, "FloatProperty"},
            {"MoveIgnoreActors", 0x350, "ArrayProperty"},
            {"MoveIgnoreComponents", 0x360, "ArrayProperty"},
            {"BodyInstance", 0x380, "StructProperty"},
            {"OnComponentHit", 0x528, "MulticastSparseDelegateProperty"},
            {"OnComponentBeginOverlap", 0x529, "MulticastSparseDelegateProperty"},
            {"OnComponentEndOverlap", 0x52A, "MulticastSparseDelegateProperty"},
            {"OnComponentWake", 0x52B, "MulticastSparseDelegateProperty"},
            {"OnComponentSleep", 0x52C, "MulticastSparseDelegateProperty"},
            {"OnComponentPhysicsStateChanged", 0x52E, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x52F, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x530, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x531, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x532, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x533, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x534, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x535, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x536, "MulticastSparseDelegateProperty"},
            {"OnTouchBegan", 0x537, "MulticastSparseDelegateProperty"},
            {"OnTouchEnded", 0x538, "MulticastSparseDelegateProperty"},
            {"OnTouchEntered", 0x539, "MulticastSparseDelegateProperty"},
            {"OnTouchExited", 0x53A, "MulticastSparseDelegateProperty"},
            {"LODParentPrimitive", 0x550, "ObjectProperty"},
        }};
    };

    struct LandscapeGrassName
    {
        static constexpr std::string_view Name = "LandscapeGrassName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct LandscapeGrassType
    {
        static constexpr std::string_view Name = "LandscapeGrassType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GrassVarieties = 0x28;
            static constexpr std::uintptr_t bEnableDensityScaling = 0x38;
            static constexpr std::uintptr_t StateHash = 0x3C;
            static constexpr std::uintptr_t GrassMesh = 0x40;
            static constexpr std::uintptr_t GrassDensity = 0x48;
            static constexpr std::uintptr_t PlacementJitter = 0x4C;
            static constexpr std::uintptr_t StartCullDistance = 0x50;
            static constexpr std::uintptr_t EndCullDistance = 0x54;
            static constexpr std::uintptr_t RandomRotation = 0x58;
            static constexpr std::uintptr_t AlignToSurface = 0x59;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"GrassVarieties", 0x28, "ArrayProperty"},
            {"bEnableDensityScaling", 0x38, "BoolProperty"},
            {"StateHash", 0x3C, "UInt32Property"},
            {"GrassMesh", 0x40, "ObjectProperty"},
            {"GrassDensity", 0x48, "FloatProperty"},
            {"PlacementJitter", 0x4C, "FloatProperty"},
            {"StartCullDistance", 0x50, "IntProperty"},
            {"EndCullDistance", 0x54, "IntProperty"},
            {"RandomRotation", 0x58, "BoolProperty"},
            {"AlignToSurface", 0x59, "BoolProperty"},
        }};
    };

    struct LandscapeHLODBuilder
    {
        static constexpr std::string_view Name = "LandscapeHLODBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HLODBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeHeightfieldCollisionComponent
    {
        static constexpr std::string_view Name = "LandscapeHeightfieldCollisionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentLayerInfos = 0x560;
            static constexpr std::uintptr_t SectionBaseX = 0x570;
            static constexpr std::uintptr_t SectionBaseY = 0x574;
            static constexpr std::uintptr_t CollisionSizeQuads = 0x578;
            static constexpr std::uintptr_t CollisionScale = 0x57C;
            static constexpr std::uintptr_t SimpleCollisionSizeQuads = 0x580;
            static constexpr std::uintptr_t CollisionQuadFlags = 0x588;
            static constexpr std::uintptr_t HeightfieldGuid = 0x598;
            static constexpr std::uintptr_t CachedLocalBox = 0x5A8;
            static constexpr std::uintptr_t RenderComponentRef = 0x5E0;
            static constexpr std::uintptr_t DeferredSnapFoliageInstanceBoxes = 0x5E8;
            static constexpr std::uintptr_t CookedPhysicalMaterials = 0x608;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ComponentLayerInfos", 0x560, "ArrayProperty"},
            {"SectionBaseX", 0x570, "IntProperty"},
            {"SectionBaseY", 0x574, "IntProperty"},
            {"CollisionSizeQuads", 0x578, "IntProperty"},
            {"CollisionScale", 0x57C, "FloatProperty"},
            {"SimpleCollisionSizeQuads", 0x580, "IntProperty"},
            {"CollisionQuadFlags", 0x588, "ArrayProperty"},
            {"HeightfieldGuid", 0x598, "StructProperty"},
            {"CachedLocalBox", 0x5A8, "StructProperty"},
            {"RenderComponentRef", 0x5E0, "ObjectProperty"},
            {"DeferredSnapFoliageInstanceBoxes", 0x5E8, "ArrayProperty"},
            {"CookedPhysicalMaterials", 0x608, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetRenderComponent",
        }};
    };

    struct LandscapeHeightmapNormalsEditLayerRenderer
    {
        static constexpr std::string_view Name = "LandscapeHeightmapNormalsEditLayerRenderer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeHeightmapTextureEdgeFixup
    {
        static constexpr std::string_view Name = "LandscapeHeightmapTextureEdgeFixup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeImportLayerInfo
    {
        static constexpr std::string_view Name = "LandscapeImportLayerInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeInfo
    {
        static constexpr std::string_view Name = "LandscapeInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LandscapeActor = 0x28;
            static constexpr std::uintptr_t LandscapeGuid = 0x30;
            static constexpr std::uintptr_t ComponentSizeQuads = 0x40;
            static constexpr std::uintptr_t SubsectionSizeQuads = 0x44;
            static constexpr std::uintptr_t ComponentNumSubsections = 0x48;
            static constexpr std::uintptr_t StreamingProxies = 0x70;
            static constexpr std::uintptr_t SortedStreamingProxies = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LandscapeActor", 0x28, "WeakObjectProperty"},
            {"LandscapeGuid", 0x30, "StructProperty"},
            {"ComponentSizeQuads", 0x40, "IntProperty"},
            {"SubsectionSizeQuads", 0x44, "IntProperty"},
            {"ComponentNumSubsections", 0x48, "IntProperty"},
            {"StreamingProxies", 0x70, "ArrayProperty"},
            {"SortedStreamingProxies", 0xC0, "ArrayProperty"},
        }};
    };

    struct LandscapeInfoLayerSettings
    {
        static constexpr std::string_view Name = "LandscapeInfoLayerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LayerInfoObj = 0x0;
            static constexpr std::uintptr_t LayerName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LayerInfoObj", 0x0, "ObjectProperty"},
            {"LayerName", 0x8, "NameProperty"},
        }};
    };

    struct LandscapeInfoMap
    {
        static constexpr std::string_view Name = "LandscapeInfoMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeLODStreamingProxy_DEPRECATED
    {
        static constexpr std::string_view Name = "LandscapeLODStreamingProxy_DEPRECATED";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StreamableRenderAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ForceMipLevelsToBeResidentTimestamp = 0x40;
            static constexpr std::uintptr_t NumCinematicMipLevels = 0x48;
            static constexpr std::uintptr_t NoRefStreamingLODBias = 0x50;
            static constexpr std::uintptr_t StreamingIndex = 0x78;
            static constexpr std::uintptr_t NeverStream = 0x88;
            static constexpr std::uintptr_t bForceMiplevelsToBeResident = 0x88;
            static constexpr std::uintptr_t bGlobalForceMipLevelsToBeResident = 0x88;
            static constexpr std::uintptr_t bHasStreamingUpdatePending = 0x88;
            static constexpr std::uintptr_t bIgnoreDynamicMipBias = 0x88;
            static constexpr std::uintptr_t bIgnoreStreamingMipBias = 0x88;
            static constexpr std::uintptr_t bMarkAsEditorStreamingPool = 0x88;
            static constexpr std::uintptr_t bUseCinematicMipLevels = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ForceMipLevelsToBeResidentTimestamp", 0x40, "DoubleProperty"},
            {"NumCinematicMipLevels", 0x48, "IntProperty"},
            {"NoRefStreamingLODBias", 0x50, "StructProperty"},
            {"StreamingIndex", 0x78, "IntProperty"},
            {"NeverStream", 0x88, "BoolProperty"},
            {"bForceMiplevelsToBeResident", 0x88, "BoolProperty"},
            {"bGlobalForceMipLevelsToBeResident", 0x88, "BoolProperty"},
            {"bHasStreamingUpdatePending", 0x88, "BoolProperty"},
            {"bIgnoreDynamicMipBias", 0x88, "BoolProperty"},
            {"bIgnoreStreamingMipBias", 0x88, "BoolProperty"},
            {"bMarkAsEditorStreamingPool", 0x88, "BoolProperty"},
            {"bUseCinematicMipLevels", 0x88, "BoolProperty"},
        }};
    };

    struct LandscapeLayer
    {
        static constexpr std::string_view Name = "LandscapeLayer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x8;
            static constexpr std::uintptr_t Name = 0x18;
            static constexpr std::uintptr_t bVisible = 0x1C;
            static constexpr std::uintptr_t bLocked = 0x1D;
            static constexpr std::uintptr_t HeightmapAlpha = 0x20;
            static constexpr std::uintptr_t WeightmapAlpha = 0x24;
            static constexpr std::uintptr_t BlendMode = 0x28;
            static constexpr std::uintptr_t Brushes = 0x30;
            static constexpr std::uintptr_t WeightmapLayerAllocationBlend = 0x40;
            static constexpr std::uintptr_t EditLayer = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Guid", 0x8, "StructProperty"},
            {"Name", 0x18, "NameProperty"},
            {"bVisible", 0x1C, "BoolProperty"},
            {"bLocked", 0x1D, "BoolProperty"},
            {"HeightmapAlpha", 0x20, "FloatProperty"},
            {"WeightmapAlpha", 0x24, "FloatProperty"},
            {"BlendMode", 0x28, "ByteProperty"},
            {"Brushes", 0x30, "ArrayProperty"},
            {"WeightmapLayerAllocationBlend", 0x40, "MapProperty"},
            {"EditLayer", 0x50, "ObjectProperty"},
        }};
    };

    struct LandscapeLayerBrush
    {
        static constexpr std::string_view Name = "LandscapeLayerBrush";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeLayerComponentData
    {
        static constexpr std::string_view Name = "LandscapeLayerComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t HeightmapData = 0x0;
            static constexpr std::uintptr_t WeightmapData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HeightmapData", 0x0, "StructProperty"},
            {"WeightmapData", 0x8, "StructProperty"},
        }};
    };

    struct LandscapeLayerInfoObject
    {
        static constexpr std::string_view Name = "LandscapeLayerInfoObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LayerName = 0x28;
            static constexpr std::uintptr_t PhysMaterial = 0x30;
            static constexpr std::uintptr_t Hardness = 0x38;
            static constexpr std::uintptr_t LayerUsageDebugColor = 0x3C;
            static constexpr std::uintptr_t BlendMethod = 0x4C;
            static constexpr std::uintptr_t BlendGroup = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LayerName", 0x28, "NameProperty"},
            {"PhysMaterial", 0x30, "ObjectProperty"},
            {"Hardness", 0x38, "FloatProperty"},
            {"LayerUsageDebugColor", 0x3C, "StructProperty"},
            {"BlendMethod", 0x4C, "EnumProperty"},
            {"BlendGroup", 0x50, "NameProperty"},
        }};
    };

    struct LandscapeMaterialInstanceConstant
    {
        static constexpr std::string_view Name = "LandscapeMaterialInstanceConstant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialInstanceConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureStreamingInfo = 0x360;
            static constexpr std::uintptr_t bDisableTessellation = 0x370;
            static constexpr std::uintptr_t bEditorToolUsage = 0x370;
            static constexpr std::uintptr_t bIsLayerThumbnail = 0x370;
            static constexpr std::uintptr_t bMobile = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TextureStreamingInfo", 0x360, "ArrayProperty"},
            {"bDisableTessellation", 0x370, "BoolProperty"},
            {"bEditorToolUsage", 0x370, "BoolProperty"},
            {"bIsLayerThumbnail", 0x370, "BoolProperty"},
            {"bMobile", 0x370, "BoolProperty"},
        }};
    };

    struct LandscapeMaterialTextureStreamingInfo
    {
        static constexpr std::string_view Name = "LandscapeMaterialTextureStreamingInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureName = 0x0;
            static constexpr std::uintptr_t TexelFactor = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TextureName", 0x0, "NameProperty"},
            {"TexelFactor", 0x4, "FloatProperty"},
        }};
    };

    struct LandscapeMeshCollisionComponent_DEPRECATED
    {
        static constexpr std::string_view Name = "LandscapeMeshCollisionComponent_DEPRECATED";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeHeightfieldCollisionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshGuid = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshGuid", 0x670, "StructProperty"},
        }};
    };

    struct LandscapeMeshProxyActor
    {
        static constexpr std::string_view Name = "LandscapeMeshProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t LandscapeMeshProxyComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LandscapeMeshProxyComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct LandscapeMeshProxyComponent
    {
        static constexpr std::string_view Name = "LandscapeMeshProxyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LandscapeGuid = 0x6A0;
            static constexpr std::uintptr_t ProxyComponentBases = 0x6B0;
            static constexpr std::uintptr_t ProxyComponentCentersObjectSpace = 0x6C0;
            static constexpr std::uintptr_t ComponentXVectorObjectSpace = 0x6D0;
            static constexpr std::uintptr_t ComponentYVectorObjectSpace = 0x6E8;
            static constexpr std::uintptr_t ComponentResolution = 0x700;
            static constexpr std::uintptr_t ProxyLOD = 0x704;
            static constexpr std::uintptr_t LODGroupKey = 0x708;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"LandscapeGuid", 0x6A0, "StructProperty"},
            {"ProxyComponentBases", 0x6B0, "ArrayProperty"},
            {"ProxyComponentCentersObjectSpace", 0x6C0, "ArrayProperty"},
            {"ComponentXVectorObjectSpace", 0x6D0, "StructProperty"},
            {"ComponentYVectorObjectSpace", 0x6E8, "StructProperty"},
            {"ComponentResolution", 0x700, "IntProperty"},
            {"ProxyLOD", 0x704, "Int8Property"},
            {"LODGroupKey", 0x708, "UInt32Property"},
        }};
    };

    struct LandscapeNaniteComponent
    {
        static constexpr std::string_view Name = "LandscapeNaniteComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ProxyContentId = 0x6A0;
            static constexpr std::uintptr_t bEnabled = 0x6B0;
            static constexpr std::uintptr_t SourceLandscapeComponents = 0x6B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ProxyContentId", 0x6A0, "StructProperty"},
            {"bEnabled", 0x6B0, "BoolProperty"},
            {"SourceLandscapeComponents", 0x6B8, "ArrayProperty"},
        }};
    };

    struct LandscapePerLODMaterialOverride
    {
        static constexpr std::string_view Name = "LandscapePerLODMaterialOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LODIndex = 0x0;
            static constexpr std::uintptr_t Material = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LODIndex", 0x0, "IntProperty"},
            {"Material", 0x8, "ObjectProperty"},
        }};
    };

    struct LandscapeProxy
    {
        static constexpr std::string_view Name = "LandscapeProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PartitionActor";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComponent = 0x280;
            static constexpr std::uintptr_t LandscapeGuid = 0x288;
            static constexpr std::uintptr_t OriginalLandscapeGuid = 0x298;
            static constexpr std::uintptr_t bEnableNanite = 0x2A8;
            static constexpr std::uintptr_t PerLODOverrideMaterials = 0x2B0;
            static constexpr std::uintptr_t bDisableRuntimeGrassMapGeneration = 0x2C0;
            static constexpr std::uintptr_t bEnableGrass = 0x2C1;
            static constexpr std::uintptr_t MaxLODLevel = 0x2C4;
            static constexpr std::uintptr_t LOD0ScreenSize = 0x2C8;
            static constexpr std::uintptr_t LODGroupKey = 0x2CC;
            static constexpr std::uintptr_t LOD0DistributionSetting = 0x2D0;
            static constexpr std::uintptr_t LODDistributionSetting = 0x2D4;
            static constexpr std::uintptr_t ScalableLOD0ScreenSize = 0x2D8;
            static constexpr std::uintptr_t ScalableLOD0DistributionSetting = 0x300;
            static constexpr std::uintptr_t ScalableLODDistributionSetting = 0x328;
            static constexpr std::uintptr_t bUseScalableLODSettings = 0x350;
            static constexpr std::uintptr_t LODBlendRange = 0x354;
            static constexpr std::uintptr_t StaticLightingLOD = 0x358;
            static constexpr std::uintptr_t DefaultPhysMaterial = 0x360;
            static constexpr std::uintptr_t StreamingDistanceMultiplier = 0x368;
            static constexpr std::uintptr_t LandscapeMaterial = 0x370;
            static constexpr std::uintptr_t LandscapeHoleMaterial = 0x378;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x380;
            static constexpr std::uintptr_t bSetCreateRuntimeVirtualTextureVolumes = 0x390;
            static constexpr std::uintptr_t bVirtualTextureRenderWithQuad = 0x391;
            static constexpr std::uintptr_t bVirtualTextureRenderWithQuadHQ = 0x392;
            static constexpr std::uintptr_t VirtualTextureNumLods = 0x394;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x398;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x39C;
            static constexpr std::uintptr_t NegativeZBoundsExtension = 0x3A0;
            static constexpr std::uintptr_t PositiveZBoundsExtension = 0x3A4;
            static constexpr std::uintptr_t LandscapeComponents = 0x3A8;
            static constexpr std::uintptr_t CollisionComponents = 0x3B8;
            static constexpr std::uintptr_t FoliageComponents = 0x3C8;
            static constexpr std::uintptr_t NaniteComponent = 0x3D8;
            static constexpr std::uintptr_t NaniteComponents = 0x3E0;
            static constexpr std::uintptr_t GrassTypesMaxDiscardDistance = 0x414;
            static constexpr std::uintptr_t StaticLightingResolution = 0x428;
            static constexpr std::uintptr_t CastShadow = 0x42C;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x42C;
            static constexpr std::uintptr_t bCastStaticShadow = 0x42C;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x42D;
            static constexpr std::uintptr_t bCastContactShadow = 0x42E;
            static constexpr std::uintptr_t bCastFarShadow = 0x430;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x434;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x438;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x43C;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x43C;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x43C;
            static constexpr std::uintptr_t LightingChannels = 0x43D;
            static constexpr std::uintptr_t bUseMaterialPositionOffsetInStaticLighting = 0x440;
            static constexpr std::uintptr_t NonNaniteVirtualShadowMapConstantDepthBias = 0x444;
            static constexpr std::uintptr_t NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold = 0x448;
            static constexpr std::uintptr_t NonNaniteVirtualShadowMapInvalidationScreenSizeLimit = 0x44C;
            static constexpr std::uintptr_t bHoldout = 0x450;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x454;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x458;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x45C;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x460;
            static constexpr std::uintptr_t LightmassSettings = 0x464;
            static constexpr std::uintptr_t GrassTypesOverrides = 0x480;
            static constexpr std::uintptr_t CollisionMipLevel = 0x490;
            static constexpr std::uintptr_t SimpleCollisionMipLevel = 0x494;
            static constexpr std::uintptr_t BodyInstance = 0x498;
            static constexpr std::uintptr_t bBakeMaterialPositionOffsetIntoCollision = 0x640;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x640;
            static constexpr std::uintptr_t RegisteredToSubsystem = 0x648;
            static constexpr std::uintptr_t ComponentSizeQuads = 0x650;
            static constexpr std::uintptr_t SubsectionSizeQuads = 0x654;
            static constexpr std::uintptr_t NumSubsections = 0x658;
            static constexpr std::uintptr_t bFillCollisionUnderLandscapeForNavmesh = 0x65C;
            static constexpr std::uintptr_t bUsedForNavigation = 0x65C;
            static constexpr std::uintptr_t NavigationGeometryGatheringMode = 0x660;
            static constexpr std::uintptr_t bUseDynamicMaterialInstance = 0x661;
            static constexpr std::uintptr_t bUseLandscapeForCullingInvisibleHLODVertices = 0x662;
            static constexpr std::uintptr_t bHasLayersContent = 0x663;
            static constexpr std::uintptr_t bStripPhysicsWhenCookedClient = 0x666;
            static constexpr std::uintptr_t bStripPhysicsWhenCookedServer = 0x667;
            static constexpr std::uintptr_t bStripGrassWhenCookedClient = 0x668;
            static constexpr std::uintptr_t bStripGrassWhenCookedServer = 0x669;
            static constexpr std::uintptr_t TargetLayers = 0x670;
            static constexpr std::uintptr_t SectionBase = 0x680;
        };

        inline static constexpr std::array<PropertyInfo, 82> Properties{{
            {"SplineComponent", 0x280, "ObjectProperty"},
            {"LandscapeGuid", 0x288, "StructProperty"},
            {"OriginalLandscapeGuid", 0x298, "StructProperty"},
            {"bEnableNanite", 0x2A8, "BoolProperty"},
            {"PerLODOverrideMaterials", 0x2B0, "ArrayProperty"},
            {"bDisableRuntimeGrassMapGeneration", 0x2C0, "BoolProperty"},
            {"bEnableGrass", 0x2C1, "BoolProperty"},
            {"MaxLODLevel", 0x2C4, "IntProperty"},
            {"LOD0ScreenSize", 0x2C8, "FloatProperty"},
            {"LODGroupKey", 0x2CC, "UInt32Property"},
            {"LOD0DistributionSetting", 0x2D0, "FloatProperty"},
            {"LODDistributionSetting", 0x2D4, "FloatProperty"},
            {"ScalableLOD0ScreenSize", 0x2D8, "StructProperty"},
            {"ScalableLOD0DistributionSetting", 0x300, "StructProperty"},
            {"ScalableLODDistributionSetting", 0x328, "StructProperty"},
            {"bUseScalableLODSettings", 0x350, "BoolProperty"},
            {"LODBlendRange", 0x354, "FloatProperty"},
            {"StaticLightingLOD", 0x358, "IntProperty"},
            {"DefaultPhysMaterial", 0x360, "ObjectProperty"},
            {"StreamingDistanceMultiplier", 0x368, "FloatProperty"},
            {"LandscapeMaterial", 0x370, "ObjectProperty"},
            {"LandscapeHoleMaterial", 0x378, "ObjectProperty"},
            {"RuntimeVirtualTextures", 0x380, "ArrayProperty"},
            {"bSetCreateRuntimeVirtualTextureVolumes", 0x390, "BoolProperty"},
            {"bVirtualTextureRenderWithQuad", 0x391, "BoolProperty"},
            {"bVirtualTextureRenderWithQuadHQ", 0x392, "BoolProperty"},
            {"VirtualTextureNumLods", 0x394, "IntProperty"},
            {"VirtualTextureLodBias", 0x398, "IntProperty"},
            {"VirtualTextureRenderPassType", 0x39C, "EnumProperty"},
            {"NegativeZBoundsExtension", 0x3A0, "FloatProperty"},
            {"PositiveZBoundsExtension", 0x3A4, "FloatProperty"},
            {"LandscapeComponents", 0x3A8, "ArrayProperty"},
            {"CollisionComponents", 0x3B8, "ArrayProperty"},
            {"FoliageComponents", 0x3C8, "ArrayProperty"},
            {"NaniteComponent", 0x3D8, "ObjectProperty"},
            {"NaniteComponents", 0x3E0, "ArrayProperty"},
            {"GrassTypesMaxDiscardDistance", 0x414, "FloatProperty"},
            {"StaticLightingResolution", 0x428, "FloatProperty"},
            {"CastShadow", 0x42C, "BoolProperty"},
            {"bCastDynamicShadow", 0x42C, "BoolProperty"},
            {"bCastStaticShadow", 0x42C, "BoolProperty"},
            {"ShadowCacheInvalidationBehavior", 0x42D, "EnumProperty"},
            {"bCastContactShadow", 0x42E, "BoolProperty"},
            {"bCastFarShadow", 0x430, "BoolProperty"},
            {"bCastHiddenShadow", 0x434, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x438, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x43C, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x43C, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x43C, "BoolProperty"},
            {"LightingChannels", 0x43D, "StructProperty"},
            {"bUseMaterialPositionOffsetInStaticLighting", 0x440, "BoolProperty"},
            {"NonNaniteVirtualShadowMapConstantDepthBias", 0x444, "FloatProperty"},
            {"NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold", 0x448, "FloatProperty"},
            {"NonNaniteVirtualShadowMapInvalidationScreenSizeLimit", 0x44C, "FloatProperty"},
            {"bHoldout", 0x450, "BoolProperty"},
            {"bRenderCustomDepth", 0x454, "BoolProperty"},
            {"CustomDepthStencilWriteMask", 0x458, "EnumProperty"},
            {"CustomDepthStencilValue", 0x45C, "IntProperty"},
            {"LDMaxDrawDistance", 0x460, "FloatProperty"},
            {"LightmassSettings", 0x464, "StructProperty"},
            {"GrassTypesOverrides", 0x480, "MapProperty"},
            {"CollisionMipLevel", 0x490, "IntProperty"},
            {"SimpleCollisionMipLevel", 0x494, "IntProperty"},
            {"BodyInstance", 0x498, "StructProperty"},
            {"bBakeMaterialPositionOffsetIntoCollision", 0x640, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x640, "BoolProperty"},
            {"RegisteredToSubsystem", 0x648, "ObjectProperty"},
            {"ComponentSizeQuads", 0x650, "IntProperty"},
            {"SubsectionSizeQuads", 0x654, "IntProperty"},
            {"NumSubsections", 0x658, "IntProperty"},
            {"bFillCollisionUnderLandscapeForNavmesh", 0x65C, "BoolProperty"},
            {"bUsedForNavigation", 0x65C, "BoolProperty"},
            {"NavigationGeometryGatheringMode", 0x660, "EnumProperty"},
            {"bUseDynamicMaterialInstance", 0x661, "BoolProperty"},
            {"bUseLandscapeForCullingInvisibleHLODVertices", 0x662, "BoolProperty"},
            {"bHasLayersContent", 0x663, "BoolProperty"},
            {"bStripPhysicsWhenCookedClient", 0x666, "BoolProperty"},
            {"bStripPhysicsWhenCookedServer", 0x667, "BoolProperty"},
            {"bStripGrassWhenCookedClient", 0x668, "BoolProperty"},
            {"bStripGrassWhenCookedServer", 0x669, "BoolProperty"},
            {"TargetLayers", 0x670, "MapProperty"},
            {"SectionBase", 0x680, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "ChangeComponentScreenSizeToUseSubSections",
            "ChangeLODDistanceFactor",
            "EditorApplySpline",
            "EditorSetLandscapeMaterial",
            "EnableGrass",
            "GetLandscapeActor",
            "IsGrassEnabled",
            "LandscapeExportHeightmapToRenderTarget",
            "SetLandscapeMaterialScalarParameterValue",
            "SetLandscapeMaterialTextureParameterValue",
            "SetLandscapeMaterialVectorParameterValue",
            "SetVirtualTextureRenderPassType",
        }};
    };

    struct LandscapeProxyMaterialOverride
    {
        static constexpr std::string_view Name = "LandscapeProxyMaterialOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LODIndex = 0x0;
            static constexpr std::uintptr_t Material = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LODIndex", 0x0, "StructProperty"},
            {"Material", 0x18, "ObjectProperty"},
        }};
    };

    struct LandscapeScratchRenderTarget
    {
        static constexpr std::string_view Name = "LandscapeScratchRenderTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderTarget = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RenderTarget", 0x28, "ObjectProperty"},
        }};
    };

    struct LandscapeSettings
    {
        static constexpr std::string_view Name = "LandscapeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNumberOfLayers = 0x30;
            static constexpr std::uintptr_t bShowDialogForAutomaticLayerCreation = 0x34;
            static constexpr std::uintptr_t MaxComponents = 0x38;
            static constexpr std::uintptr_t MaxImageImportCacheSizeMegaBytes = 0x3C;
            static constexpr std::uintptr_t PaintStrengthGamma = 0x40;
            static constexpr std::uintptr_t bDisablePaintingStartupSlowdown = 0x44;
            static constexpr std::uintptr_t LandscapeDirtyingMode = 0x45;
            static constexpr std::uintptr_t SideResolutionLimit = 0x48;
            static constexpr std::uintptr_t DefaultLandscapeMaterial = 0x50;
            static constexpr std::uintptr_t DefaultLayerInfoObject = 0x70;
            static constexpr std::uintptr_t BrushSizeUIMax = 0x90;
            static constexpr std::uintptr_t BrushSizeClampMax = 0x94;
            static constexpr std::uintptr_t HLODMaxTextureSize = 0x98;
            static constexpr std::uintptr_t bShouldUpdateEditLayersDuringInteractiveChanges = 0x9C;
            static constexpr std::uintptr_t LandscapeEditLayerUpdateDebounceTimeMs = 0xA0;
            static constexpr std::uintptr_t FoliageLandscapeSnappingMode = 0xA4;
            static constexpr std::uintptr_t bRestrictiveMode = 0xA5;
            static constexpr std::uintptr_t SplineIconWorldZOffset = 0xA8;
            static constexpr std::uintptr_t SplineIconScale = 0xAC;
            static constexpr std::uintptr_t bDisplayTargetLayerThumbnails = 0xB0;
            static constexpr std::uintptr_t bDisableTemporalAntiAliasingInLandscapeMode = 0xB1;
            static constexpr std::uintptr_t TargetLayerDefaultBlendMethod = 0xB2;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"MaxNumberOfLayers", 0x30, "IntProperty"},
            {"bShowDialogForAutomaticLayerCreation", 0x34, "BoolProperty"},
            {"MaxComponents", 0x38, "IntProperty"},
            {"MaxImageImportCacheSizeMegaBytes", 0x3C, "UInt32Property"},
            {"PaintStrengthGamma", 0x40, "FloatProperty"},
            {"bDisablePaintingStartupSlowdown", 0x44, "BoolProperty"},
            {"LandscapeDirtyingMode", 0x45, "EnumProperty"},
            {"SideResolutionLimit", 0x48, "IntProperty"},
            {"DefaultLandscapeMaterial", 0x50, "SoftObjectProperty"},
            {"DefaultLayerInfoObject", 0x70, "SoftObjectProperty"},
            {"BrushSizeUIMax", 0x90, "FloatProperty"},
            {"BrushSizeClampMax", 0x94, "FloatProperty"},
            {"HLODMaxTextureSize", 0x98, "IntProperty"},
            {"bShouldUpdateEditLayersDuringInteractiveChanges", 0x9C, "BoolProperty"},
            {"LandscapeEditLayerUpdateDebounceTimeMs", 0xA0, "IntProperty"},
            {"FoliageLandscapeSnappingMode", 0xA4, "EnumProperty"},
            {"bRestrictiveMode", 0xA5, "BoolProperty"},
            {"SplineIconWorldZOffset", 0xA8, "FloatProperty"},
            {"SplineIconScale", 0xAC, "FloatProperty"},
            {"bDisplayTargetLayerThumbnails", 0xB0, "BoolProperty"},
            {"bDisableTemporalAntiAliasingInLandscapeMode", 0xB1, "BoolProperty"},
            {"TargetLayerDefaultBlendMethod", 0xB2, "EnumProperty"},
        }};
    };

    struct LandscapeSplineActor
    {
        static constexpr std::string_view Name = "LandscapeSplineActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t LandscapeGuid = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LandscapeGuid", 0x280, "StructProperty"},
        }};
    };

    struct LandscapeSplineConnection
    {
        static constexpr std::string_view Name = "LandscapeSplineConnection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Segment = 0x0;
            static constexpr std::uintptr_t End = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Segment", 0x0, "ObjectProperty"},
            {"End", 0x8, "BoolProperty"},
        }};
    };

    struct LandscapeSplineControlPoint
    {
        static constexpr std::string_view Name = "LandscapeSplineControlPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x28;
            static constexpr std::uintptr_t Rotation = 0x40;
            static constexpr std::uintptr_t Width = 0x58;
            static constexpr std::uintptr_t LayerWidthRatio = 0x5C;
            static constexpr std::uintptr_t SideFalloff = 0x60;
            static constexpr std::uintptr_t LeftSideFalloffFactor = 0x64;
            static constexpr std::uintptr_t RightSideFalloffFactor = 0x68;
            static constexpr std::uintptr_t LeftSideLayerFalloffFactor = 0x6C;
            static constexpr std::uintptr_t RightSideLayerFalloffFactor = 0x70;
            static constexpr std::uintptr_t EndFalloff = 0x74;
            static constexpr std::uintptr_t ConnectedSegments = 0x78;
            static constexpr std::uintptr_t Points = 0x88;
            static constexpr std::uintptr_t Bounds = 0x98;
            static constexpr std::uintptr_t LocalMeshComponent = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Location", 0x28, "StructProperty"},
            {"Rotation", 0x40, "StructProperty"},
            {"Width", 0x58, "FloatProperty"},
            {"LayerWidthRatio", 0x5C, "FloatProperty"},
            {"SideFalloff", 0x60, "FloatProperty"},
            {"LeftSideFalloffFactor", 0x64, "FloatProperty"},
            {"RightSideFalloffFactor", 0x68, "FloatProperty"},
            {"LeftSideLayerFalloffFactor", 0x6C, "FloatProperty"},
            {"RightSideLayerFalloffFactor", 0x70, "FloatProperty"},
            {"EndFalloff", 0x74, "FloatProperty"},
            {"ConnectedSegments", 0x78, "ArrayProperty"},
            {"Points", 0x88, "ArrayProperty"},
            {"Bounds", 0x98, "StructProperty"},
            {"LocalMeshComponent", 0xD0, "ObjectProperty"},
        }};
    };

    struct LandscapeSplineInterface
    {
        static constexpr std::string_view Name = "LandscapeSplineInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeSplineInterpPoint
    {
        static constexpr std::string_view Name = "LandscapeSplineInterpPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x0;
            static constexpr std::uintptr_t Left = 0x18;
            static constexpr std::uintptr_t Right = 0x30;
            static constexpr std::uintptr_t FalloffLeft = 0x48;
            static constexpr std::uintptr_t FalloffRight = 0x60;
            static constexpr std::uintptr_t LayerLeft = 0x78;
            static constexpr std::uintptr_t LayerRight = 0x90;
            static constexpr std::uintptr_t LayerFalloffLeft = 0xA8;
            static constexpr std::uintptr_t LayerFalloffRight = 0xC0;
            static constexpr std::uintptr_t StartEndFalloff = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Center", 0x0, "StructProperty"},
            {"Left", 0x18, "StructProperty"},
            {"Right", 0x30, "StructProperty"},
            {"FalloffLeft", 0x48, "StructProperty"},
            {"FalloffRight", 0x60, "StructProperty"},
            {"LayerLeft", 0x78, "StructProperty"},
            {"LayerRight", 0x90, "StructProperty"},
            {"LayerFalloffLeft", 0xA8, "StructProperty"},
            {"LayerFalloffRight", 0xC0, "StructProperty"},
            {"StartEndFalloff", 0xD8, "FloatProperty"},
        }};
    };

    struct LandscapeSplineMeshEntry
    {
        static constexpr std::string_view Name = "LandscapeSplineMeshEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x0;
            static constexpr std::uintptr_t MaterialOverrides = 0x8;
            static constexpr std::uintptr_t bCenterH = 0x18;
            static constexpr std::uintptr_t CenterAdjust = 0x20;
            static constexpr std::uintptr_t bNoZScaling = 0x30;
            static constexpr std::uintptr_t bScaleToWidth = 0x30;
            static constexpr std::uintptr_t Scale = 0x38;
            static constexpr std::uintptr_t orientation = 0x50;
            static constexpr std::uintptr_t ForwardAxis = 0x51;
            static constexpr std::uintptr_t UpAxis = 0x52;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Mesh", 0x0, "ObjectProperty"},
            {"MaterialOverrides", 0x8, "ArrayProperty"},
            {"bCenterH", 0x18, "BoolProperty"},
            {"CenterAdjust", 0x20, "StructProperty"},
            {"bNoZScaling", 0x30, "BoolProperty"},
            {"bScaleToWidth", 0x30, "BoolProperty"},
            {"Scale", 0x38, "StructProperty"},
            {"orientation", 0x50, "ByteProperty"},
            {"ForwardAxis", 0x51, "ByteProperty"},
            {"UpAxis", 0x52, "ByteProperty"},
        }};
    };

    struct LandscapeSplineMeshesActor
    {
        static constexpr std::string_view Name = "LandscapeSplineMeshesActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PartitionActor";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshComponents = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StaticMeshComponents", 0x278, "ArrayProperty"},
        }};
    };

    struct LandscapeSplineSegment
    {
        static constexpr std::string_view Name = "LandscapeSplineSegment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Connections = 0x28;
            static constexpr std::uintptr_t SplineInfo = 0x48;
            static constexpr std::uintptr_t Points = 0x60;
            static constexpr std::uintptr_t Bounds = 0x70;
            static constexpr std::uintptr_t LocalMeshComponents = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Connections", 0x28, "StructProperty"},
            {"SplineInfo", 0x48, "StructProperty"},
            {"Points", 0x60, "ArrayProperty"},
            {"Bounds", 0x70, "StructProperty"},
            {"LocalMeshComponents", 0xA8, "ArrayProperty"},
        }};
    };

    struct LandscapeSplineSegmentConnection
    {
        static constexpr std::string_view Name = "LandscapeSplineSegmentConnection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlPoint = 0x0;
            static constexpr std::uintptr_t TangentLen = 0x8;
            static constexpr std::uintptr_t SocketName = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ControlPoint", 0x0, "ObjectProperty"},
            {"TangentLen", 0x8, "FloatProperty"},
            {"SocketName", 0xC, "NameProperty"},
        }};
    };

    struct LandscapeSplinesComponent
    {
        static constexpr std::string_view Name = "LandscapeSplinesComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlPoints = 0x560;
            static constexpr std::uintptr_t Segments = 0x570;
            static constexpr std::uintptr_t CookedForeignMeshComponents = 0x580;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ControlPoints", 0x560, "ArrayProperty"},
            {"Segments", 0x570, "ArrayProperty"},
            {"CookedForeignMeshComponents", 0x580, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetSplineMeshComponents",
        }};
    };

    struct LandscapeStreamingProxy
    {
        static constexpr std::string_view Name = "LandscapeStreamingProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LandscapeActorRef = 0x690;
            static constexpr std::uintptr_t OverriddenSharedProperties = 0x6B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LandscapeActorRef", 0x690, "SoftObjectProperty"},
            {"OverriddenSharedProperties", 0x6B0, "SetProperty"},
        }};
    };

    struct LandscapeSubsystem
    {
        static constexpr std::string_view Name = "LandscapeSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamingProxiesNeedingReregister = 0x58;
            static constexpr std::uintptr_t LandscapeActors = 0x70;
            static constexpr std::uintptr_t Proxies = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StreamingProxiesNeedingReregister", 0x58, "SetProperty"},
            {"LandscapeActors", 0x70, "ArrayProperty"},
            {"Proxies", 0x80, "ArrayProperty"},
        }};
    };

    struct LandscapeTargetLayerSettings
    {
        static constexpr std::string_view Name = "LandscapeTargetLayerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LayerInfoObj = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LayerInfoObj", 0x0, "ObjectProperty"},
        }};
    };

    struct LandscapeTexture2DMipMap
    {
        static constexpr std::string_view Name = "LandscapeTexture2DMipMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SizeX = 0x0;
            static constexpr std::uintptr_t SizeY = 0x4;
            static constexpr std::uintptr_t bCompressed = 0x8;
            static constexpr std::uintptr_t StorageFormat = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SizeX", 0x0, "IntProperty"},
            {"SizeY", 0x4, "IntProperty"},
            {"bCompressed", 0x8, "BoolProperty"},
            {"StorageFormat", 0x9, "EnumProperty"},
        }};
    };

    struct LandscapeTextureHash
    {
        static constexpr std::string_view Name = "LandscapeTextureHash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureHashGUID = 0x28;
            static constexpr std::uintptr_t LastSourceID = 0x38;
            static constexpr std::uintptr_t TextureType = 0x48;
            static constexpr std::uintptr_t TextureUsage = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TextureHashGUID", 0x28, "StructProperty"},
            {"LastSourceID", 0x38, "StructProperty"},
            {"TextureType", 0x48, "EnumProperty"},
            {"TextureUsage", 0x49, "EnumProperty"},
        }};
    };

    struct LandscapeTextureMipEdgeOverrideFactory
    {
        static constexpr std::string_view Name = "LandscapeTextureMipEdgeOverrideFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TextureMipDataProviderFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapeTextureStorageProviderFactory
    {
        static constexpr std::string_view Name = "LandscapeTextureStorageProviderFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TextureAllMipDataProviderFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundaryOffset = 0x48;
            static constexpr std::uintptr_t BoundaryCountX = 0x4C;
            static constexpr std::uintptr_t BoundaryCountY = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BoundaryOffset", 0x48, "IntProperty"},
            {"BoundaryCountX", 0x4C, "IntProperty"},
            {"BoundaryCountY", 0x50, "IntProperty"},
        }};
    };

    struct LandscapeWeightmapUsage
    {
        static constexpr std::string_view Name = "LandscapeWeightmapUsage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelUsage = 0x28;
            static constexpr std::uintptr_t LayerGuid = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ChannelUsage", 0x28, "ObjectProperty"},
            {"LayerGuid", 0x48, "StructProperty"},
        }};
    };

    struct LandscapeWeightmapWeightBlendedLayersRenderer
    {
        static constexpr std::string_view Name = "LandscapeWeightmapWeightBlendedLayersRenderer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LayerBlendInput
    {
        static constexpr std::string_view Name = "LayerBlendInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LayerName = 0x0;
            static constexpr std::uintptr_t BlendType = 0x4;
            static constexpr std::uintptr_t LayerInput = 0x8;
            static constexpr std::uintptr_t HeightInput = 0x30;
            static constexpr std::uintptr_t PreviewWeight = 0x58;
            static constexpr std::uintptr_t ConstLayerInput = 0x60;
            static constexpr std::uintptr_t ConstHeightInput = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LayerName", 0x0, "NameProperty"},
            {"BlendType", 0x4, "ByteProperty"},
            {"LayerInput", 0x8, "StructProperty"},
            {"HeightInput", 0x30, "StructProperty"},
            {"PreviewWeight", 0x58, "FloatProperty"},
            {"ConstLayerInput", 0x60, "StructProperty"},
            {"ConstHeightInput", 0x78, "FloatProperty"},
        }};
    };

    struct MaterialExpressionLandscapeGrassOutput
    {
        static constexpr std::string_view Name = "MaterialExpressionLandscapeGrassOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionCustomOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t GrassTypes = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GrassTypes", 0xB0, "ArrayProperty"},
        }};
    };

    struct MaterialExpressionLandscapeLayerBlend
    {
        static constexpr std::string_view Name = "MaterialExpressionLandscapeLayerBlend";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultInput = 0xB0;
            static constexpr std::uintptr_t Layers = 0xD8;
            static constexpr std::uintptr_t LegacyBlendBehavior = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultInput", 0xB0, "StructProperty"},
            {"Layers", 0xD8, "ArrayProperty"},
            {"LegacyBlendBehavior", 0xE8, "EnumProperty"},
        }};
    };

    struct MaterialExpressionLandscapeLayerCoords
    {
        static constexpr std::string_view Name = "MaterialExpressionLandscapeLayerCoords";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t MappingType = 0xB0;
            static constexpr std::uintptr_t CustomUVType = 0xB1;
            static constexpr std::uintptr_t MappingScale = 0xB4;
            static constexpr std::uintptr_t MappingRotation = 0xB8;
            static constexpr std::uintptr_t MappingPanU = 0xBC;
            static constexpr std::uintptr_t MappingPanV = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MappingType", 0xB0, "ByteProperty"},
            {"CustomUVType", 0xB1, "ByteProperty"},
            {"MappingScale", 0xB4, "FloatProperty"},
            {"MappingRotation", 0xB8, "FloatProperty"},
            {"MappingPanU", 0xBC, "FloatProperty"},
            {"MappingPanV", 0xC0, "FloatProperty"},
        }};
    };

    struct MaterialExpressionLandscapeLayerSample
    {
        static constexpr std::string_view Name = "MaterialExpressionLandscapeLayerSample";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0xB0;
            static constexpr std::uintptr_t PreviewWeight = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParameterName", 0xB0, "NameProperty"},
            {"PreviewWeight", 0xB4, "FloatProperty"},
        }};
    };

    struct MaterialExpressionLandscapeLayerSwitch
    {
        static constexpr std::string_view Name = "MaterialExpressionLandscapeLayerSwitch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t LayerUsed = 0xB0;
            static constexpr std::uintptr_t LayerNotUsed = 0xD8;
            static constexpr std::uintptr_t ParameterName = 0x100;
            static constexpr std::uintptr_t PreviewUsed = 0x104;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LayerUsed", 0xB0, "StructProperty"},
            {"LayerNotUsed", 0xD8, "StructProperty"},
            {"ParameterName", 0x100, "NameProperty"},
            {"PreviewUsed", 0x104, "BoolProperty"},
        }};
    };

    struct MaterialExpressionLandscapeLayerWeight
    {
        static constexpr std::string_view Name = "MaterialExpressionLandscapeLayerWeight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t base = 0xB0;
            static constexpr std::uintptr_t Layer = 0xD8;
            static constexpr std::uintptr_t ParameterName = 0x100;
            static constexpr std::uintptr_t PreviewWeight = 0x104;
            static constexpr std::uintptr_t ConstBase = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"base", 0xB0, "StructProperty"},
            {"Layer", 0xD8, "StructProperty"},
            {"ParameterName", 0x100, "NameProperty"},
            {"PreviewWeight", 0x104, "FloatProperty"},
            {"ConstBase", 0x108, "StructProperty"},
        }};
    };

    struct MaterialExpressionLandscapePhysicalMaterialOutput
    {
        static constexpr std::string_view Name = "MaterialExpressionLandscapePhysicalMaterialOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionCustomOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t Inputs = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Inputs", 0xB0, "ArrayProperty"},
        }};
    };

    struct MaterialExpressionLandscapeVisibilityMask
    {
        static constexpr std::string_view Name = "MaterialExpressionLandscapeVisibilityMask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialExpressionEditorX = 0x28;
            static constexpr std::uintptr_t MaterialExpressionEditorY = 0x2C;
            static constexpr std::uintptr_t GraphNode = 0x30;
            static constexpr std::uintptr_t SubgraphExpression = 0x38;
            static constexpr std::uintptr_t MaterialExpressionGuid = 0x50;
            static constexpr std::uintptr_t Material = 0x60;
            static constexpr std::uintptr_t Function = 0x68;
            static constexpr std::uintptr_t Desc = 0x70;
            static constexpr std::uintptr_t Precision = 0x80;
            static constexpr std::uintptr_t bNeedToUpdatePreview = 0x84;
            static constexpr std::uintptr_t bRealtimePreview = 0x84;
            static constexpr std::uintptr_t bIsParameterExpression = 0x88;
            static constexpr std::uintptr_t bCollapsed = 0x8C;
            static constexpr std::uintptr_t bCommentBubbleVisible = 0x8C;
            static constexpr std::uintptr_t bHidePreviewWindow = 0x8C;
            static constexpr std::uintptr_t bShaderInputData = 0x8C;
            static constexpr std::uintptr_t bShowInputs = 0x8C;
            static constexpr std::uintptr_t bShowMaskColorsOnPin = 0x8C;
            static constexpr std::uintptr_t bShowOutputNameOnPin = 0x8C;
            static constexpr std::uintptr_t bShowOutputs = 0x8C;
            static constexpr std::uintptr_t MenuCategories = 0x90;
            static constexpr std::uintptr_t Outputs = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"MaterialExpressionEditorX", 0x28, "IntProperty"},
            {"MaterialExpressionEditorY", 0x2C, "IntProperty"},
            {"GraphNode", 0x30, "ObjectProperty"},
            {"SubgraphExpression", 0x38, "ObjectProperty"},
            {"MaterialExpressionGuid", 0x50, "StructProperty"},
            {"Material", 0x60, "ObjectProperty"},
            {"Function", 0x68, "ObjectProperty"},
            {"Desc", 0x70, "StrProperty"},
            {"Precision", 0x80, "EnumProperty"},
            {"bNeedToUpdatePreview", 0x84, "BoolProperty"},
            {"bRealtimePreview", 0x84, "BoolProperty"},
            {"bIsParameterExpression", 0x88, "BoolProperty"},
            {"bCollapsed", 0x8C, "BoolProperty"},
            {"bCommentBubbleVisible", 0x8C, "BoolProperty"},
            {"bHidePreviewWindow", 0x8C, "BoolProperty"},
            {"bShaderInputData", 0x8C, "BoolProperty"},
            {"bShowInputs", 0x8C, "BoolProperty"},
            {"bShowMaskColorsOnPin", 0x8C, "BoolProperty"},
            {"bShowOutputNameOnPin", 0x8C, "BoolProperty"},
            {"bShowOutputs", 0x8C, "BoolProperty"},
            {"MenuCategories", 0x90, "ArrayProperty"},
            {"Outputs", 0xA0, "ArrayProperty"},
        }};
    };

    struct PhysicalMaterialInput
    {
        static constexpr std::string_view Name = "PhysicalMaterialInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicalMaterial = 0x0;
            static constexpr std::uintptr_t Input = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PhysicalMaterial", 0x0, "ObjectProperty"},
            {"Input", 0x8, "StructProperty"},
        }};
    };

    struct TargetLayerBlendGroup
    {
        static constexpr std::string_view Name = "TargetLayerBlendGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t BlendMethod = 0x4;
            static constexpr std::uintptr_t TargetLayers = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"BlendMethod", 0x4, "EnumProperty"},
            {"TargetLayers", 0x8, "SetProperty"},
        }};
    };

    struct WeightmapData
    {
        static constexpr std::string_view Name = "WeightmapData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Textures = 0x0;
            static constexpr std::uintptr_t LayerAllocations = 0x10;
            static constexpr std::uintptr_t TextureUsages = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Textures", 0x0, "ArrayProperty"},
            {"LayerAllocations", 0x10, "ArrayProperty"},
            {"TextureUsages", 0x20, "ArrayProperty"},
        }};
    };

    struct WeightmapLayerAllocationInfo
    {
        static constexpr std::string_view Name = "WeightmapLayerAllocationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LayerInfo = 0x0;
            static constexpr std::uintptr_t WeightmapTextureIndex = 0x8;
            static constexpr std::uintptr_t WeightmapTextureChannel = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LayerInfo", 0x0, "ObjectProperty"},
            {"WeightmapTextureIndex", 0x8, "ByteProperty"},
            {"WeightmapTextureChannel", 0x9, "ByteProperty"},
        }};
    };

}
