#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortRuntimeLandscape
{
    struct FortRuntimeLandscapeCachedComponentData
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeCachedComponentData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PrecachedData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrecachedData", 0x28, "MapProperty"},
        }};
    };

    struct FortRuntimeLandscapeCachingComponent
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeCachingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRuntimeLandscapeComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrecacheSettings = 0x2D0;
            static constexpr std::uintptr_t PrecachedData = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PrecacheSettings", 0x2D0, "StructProperty"},
            {"PrecachedData", 0x2F0, "StructProperty"},
        }};
    };

    struct FortRuntimeLandscapeCombinedMaterial
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeCombinedMaterial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LayerNames = 0x28;
            static constexpr std::uintptr_t LandscapeInfos = 0x38;
            static constexpr std::uintptr_t MaterialBase = 0x48;
            static constexpr std::uintptr_t CPUReadbackMaterialBase = 0x50;
            static constexpr std::uintptr_t MaterialInstances = 0x58;
            static constexpr std::uintptr_t GrassAndPhysicsTypes = 0x68;
            static constexpr std::uintptr_t bAllowRenderMaterials = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LayerNames", 0x28, "ArrayProperty"},
            {"LandscapeInfos", 0x38, "ArrayProperty"},
            {"MaterialBase", 0x48, "ObjectProperty"},
            {"CPUReadbackMaterialBase", 0x50, "ObjectProperty"},
            {"MaterialInstances", 0x58, "MapProperty"},
            {"GrassAndPhysicsTypes", 0x68, "ArrayProperty"},
            {"bAllowRenderMaterials", 0x78, "BoolProperty"},
        }};
    };

    struct FortRuntimeLandscapeComponent
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRuntimeLandscapeCachingComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableLandscapeModifications = 0x3C0;
            static constexpr std::uintptr_t TargetCachingComponent = 0x3C4;
            static constexpr std::uintptr_t CombinedMaterial = 0x3CC;
            static constexpr std::uintptr_t MaterialLibrary = 0x3D8;
            static constexpr std::uintptr_t CPUReadbackMID = 0x3E0;
            static constexpr std::uintptr_t DefaultMaterialKey = 0x3E8;
            static constexpr std::uintptr_t CachedDynamicMaterials = 0x400;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bEnableLandscapeModifications", 0x3C0, "BoolProperty"},
            {"TargetCachingComponent", 0x3C4, "WeakObjectProperty"},
            {"CombinedMaterial", 0x3CC, "WeakObjectProperty"},
            {"MaterialLibrary", 0x3D8, "ObjectProperty"},
            {"CPUReadbackMID", 0x3E0, "ObjectProperty"},
            {"DefaultMaterialKey", 0x3E8, "StructProperty"},
            {"CachedDynamicMaterials", 0x400, "MapProperty"},
        }};
    };

    struct FortRuntimeLandscapeComponentBase
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PairedLandscapeProxy = 0x240;
            static constexpr std::uintptr_t PairedLandscapeComponent = 0x248;
            static constexpr std::uintptr_t PairedLandscapeCollisionComponent = 0x250;
            static constexpr std::uintptr_t CachedLocalBox = 0x258;
            static constexpr std::uintptr_t ComponentKey = 0x290;
            static constexpr std::uintptr_t ComponentBase = 0x298;
            static constexpr std::uintptr_t SubTextureOffset = 0x2A0;
            static constexpr std::uintptr_t SubTextureSize = 0x2A8;
            static constexpr std::uintptr_t ComponentQuadSize = 0x2B0;
            static constexpr std::uintptr_t ComponentVertSize = 0x2B4;
            static constexpr std::uintptr_t DebugString = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PairedLandscapeProxy", 0x240, "WeakObjectProperty"},
            {"PairedLandscapeComponent", 0x248, "WeakObjectProperty"},
            {"PairedLandscapeCollisionComponent", 0x250, "WeakObjectProperty"},
            {"CachedLocalBox", 0x258, "StructProperty"},
            {"ComponentKey", 0x290, "StructProperty"},
            {"ComponentBase", 0x298, "StructProperty"},
            {"SubTextureOffset", 0x2A0, "StructProperty"},
            {"SubTextureSize", 0x2A8, "StructProperty"},
            {"ComponentQuadSize", 0x2B0, "IntProperty"},
            {"ComponentVertSize", 0x2B4, "IntProperty"},
            {"DebugString", 0x2B8, "StrProperty"},
        }};
    };

    struct FortRuntimeLandscapeCustomMaterial
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeCustomMaterial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Material";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysMaterial = 0x128;
            static constexpr std::uintptr_t PhysMaterialMask = 0x130;
            static constexpr std::uintptr_t PhysicalMaterialMap = 0x138;
            static constexpr std::uintptr_t RenderTracePhysicalMaterialOutputs = 0x178;
            static constexpr std::uintptr_t MaterialDomain = 0x188;
            static constexpr std::uintptr_t BlendMode = 0x189;
            static constexpr std::uintptr_t DecalBlendMode = 0x18A;
            static constexpr std::uintptr_t MaterialDecalResponse = 0x18B;
            static constexpr std::uintptr_t NaniteOverrideMaterial = 0x190;
            static constexpr std::uintptr_t DisplacementScaling = 0x1C0;
            static constexpr std::uintptr_t DisplacementFadeRange = 0x1C8;
            static constexpr std::uintptr_t ShadingModel = 0x1D0;
            static constexpr std::uintptr_t bCastDynamicShadowAsMasked = 0x1D1;
            static constexpr std::uintptr_t ShadingModels = 0x1D2;
            static constexpr std::uintptr_t OpacityMaskClipValue = 0x1D4;
            static constexpr std::uintptr_t DitherOpacityMask = 0x1D8;
            static constexpr std::uintptr_t DitheredLODTransition = 0x1D8;
            static constexpr std::uintptr_t TwoSided = 0x1D8;
            static constexpr std::uintptr_t bContactShadows = 0x1D8;
            static constexpr std::uintptr_t bEnableResponsiveAA = 0x1D8;
            static constexpr std::uintptr_t bEnableSeparateTranslucency = 0x1D8;
            static constexpr std::uintptr_t bIsThinSurface = 0x1D8;
            static constexpr std::uintptr_t bScreenSpaceReflections = 0x1D8;
            static constexpr std::uintptr_t bAllowNegativeEmissiveColor = 0x1D9;
            static constexpr std::uintptr_t bEnableDisplacementFade = 0x1D9;
            static constexpr std::uintptr_t bEnableTessellation = 0x1D9;
            static constexpr std::uintptr_t bHasPixelAnimation = 0x1D9;
            static constexpr std::uintptr_t TranslucencyPass = 0x1DA;
            static constexpr std::uintptr_t TranslucencyLightingMode = 0x1DB;
            static constexpr std::uintptr_t bEnableMobileSeparateTranslucency = 0x1DC;
            static constexpr std::uintptr_t NumCustomizedUVs = 0x1E0;
            static constexpr std::uintptr_t TranslucencyDirectionalLightingIntensity = 0x1E4;
            static constexpr std::uintptr_t TranslucentShadowDensityScale = 0x1E8;
            static constexpr std::uintptr_t TranslucentSelfShadowDensityScale = 0x1EC;
            static constexpr std::uintptr_t TranslucentSelfShadowSecondDensityScale = 0x1F0;
            static constexpr std::uintptr_t TranslucentSelfShadowSecondOpacity = 0x1F4;
            static constexpr std::uintptr_t TranslucentBackscatteringExponent = 0x1F8;
            static constexpr std::uintptr_t TranslucentMultipleScatteringExtinction = 0x1FC;
            static constexpr std::uintptr_t TranslucentShadowStartOffset = 0x20C;
            static constexpr std::uintptr_t bDisableDepthTest = 0x210;
            static constexpr std::uintptr_t bGenerateSphericalParticleNormals = 0x210;
            static constexpr std::uintptr_t bSubstrateRoughnessTracking = 0x210;
            static constexpr std::uintptr_t bTangentSpaceNormal = 0x210;
            static constexpr std::uintptr_t bUseEmissiveForDynamicAreaLighting = 0x210;
            static constexpr std::uintptr_t bUsedAsSpecialEngineMaterial = 0x210;
            static constexpr std::uintptr_t bUsedWithSkeletalMesh = 0x210;
            static constexpr std::uintptr_t bWriteOnlyAlpha = 0x210;
            static constexpr std::uintptr_t bUsedWithBeamTrails = 0x211;
            static constexpr std::uintptr_t bUsedWithEditorCompositing = 0x211;
            static constexpr std::uintptr_t bUsedWithMeshDeformer = 0x211;
            static constexpr std::uintptr_t bUsedWithMeshParticles = 0x211;
            static constexpr std::uintptr_t bUsedWithNiagaraMeshParticles = 0x211;
            static constexpr std::uintptr_t bUsedWithNiagaraRibbons = 0x211;
            static constexpr std::uintptr_t bUsedWithNiagaraSprites = 0x211;
            static constexpr std::uintptr_t bUsedWithParticleSprites = 0x211;
            static constexpr std::uintptr_t bRootNodeOverridesDefaultDistortion = 0x212;
            static constexpr std::uintptr_t bUsedWithGeometryCache = 0x212;
            static constexpr std::uintptr_t bUsedWithGeometryCollections = 0x212;
            static constexpr std::uintptr_t bUsedWithInstancedStaticMeshes = 0x212;
            static constexpr std::uintptr_t bUsedWithMorphTargets = 0x212;
            static constexpr std::uintptr_t bUsedWithSplineMeshes = 0x212;
            static constexpr std::uintptr_t bUsedWithStaticLighting = 0x212;
            static constexpr std::uintptr_t bUsesDistortion = 0x212;
            static constexpr std::uintptr_t bUsedWithClothing = 0x213;
            static constexpr std::uintptr_t bUsedWithHairStrands = 0x214;
            static constexpr std::uintptr_t bUsedWithLidarPointCloud = 0x214;
            static constexpr std::uintptr_t bUsedWithNanite = 0x214;
            static constexpr std::uintptr_t bUsedWithVirtualHeightfieldMesh = 0x214;
            static constexpr std::uintptr_t bUsedWithWater = 0x214;
            static constexpr std::uintptr_t bUsedWithCurves = 0x218;
            static constexpr std::uintptr_t bUsedWithGridSampleGrass = 0x218;
            static constexpr std::uintptr_t bUsedWithNaniteAssemblies = 0x218;
            static constexpr std::uintptr_t bUsedWithVoxels = 0x218;
            static constexpr std::uintptr_t bUsedWithHeterogeneousVolumes = 0x21C;
            static constexpr std::uintptr_t bUsedWithInstancedSkinnedMesh = 0x21C;
            static constexpr std::uintptr_t bUsedWithStaticMesh = 0x21C;
            static constexpr std::uintptr_t bUsedWithVolumetricCloud = 0x21C;
            static constexpr std::uintptr_t bAutomaticallySetUsageInEditor = 0x220;
            static constexpr std::uintptr_t bForceCompatibleWithLightFunctionAtlas = 0x220;
            static constexpr std::uintptr_t bFullyRough = 0x220;
            static constexpr std::uintptr_t bUseFullPrecision = 0x220;
            static constexpr std::uintptr_t bUsedWithUI = 0x220;
            static constexpr std::uintptr_t FloatPrecisionMode = 0x221;
            static constexpr std::uintptr_t bUseAlphaToCoverage = 0x222;
            static constexpr std::uintptr_t bUseLightmapDirectionality = 0x222;
            static constexpr std::uintptr_t bForwardRenderUsePreintegratedGFForSimpleIBL = 0x224;
            static constexpr std::uintptr_t AllowTranslucentCustomDepthWrites = 0x228;
            static constexpr std::uintptr_t Wireframe = 0x228;
            static constexpr std::uintptr_t bAllowFrontLayerTranslucency = 0x228;
            static constexpr std::uintptr_t bCompatibleWithLumenCardSharing = 0x228;
            static constexpr std::uintptr_t bForwardBlendsSkyLightCubemaps = 0x228;
            static constexpr std::uintptr_t bNormalCurvatureToRoughness = 0x228;
            static constexpr std::uintptr_t bUseHQForwardReflections = 0x228;
            static constexpr std::uintptr_t bUsePlanarForwardReflections = 0x228;
            static constexpr std::uintptr_t bAllowTranslucentLocalLightShadow = 0x229;
            static constexpr std::uintptr_t TranslucentLocalLightShadowQuality = 0x22C;
            static constexpr std::uintptr_t TranslucentDirectionalLightShadowQuality = 0x230;
            static constexpr std::uintptr_t ShadingRate = 0x234;
            static constexpr std::uintptr_t bAllowVariableRateShading = 0x235;
            static constexpr std::uintptr_t bCanMaskedBeAssumedOpaque = 0x235;
            static constexpr std::uintptr_t bEnableExecWire = 0x235;
            static constexpr std::uintptr_t bEnableNewHLSLGenerator = 0x235;
            static constexpr std::uintptr_t bIsFunctionPreviewMaterial = 0x235;
            static constexpr std::uintptr_t bIsMasked = 0x235;
            static constexpr std::uintptr_t bIsPreviewMaterial = 0x235;
            static constexpr std::uintptr_t bUseMaterialAttributes = 0x235;
            static constexpr std::uintptr_t bEnableNewHLSLGeneratorOverridden = 0x236;
            static constexpr std::uintptr_t bMaterialTranslatorProfileOverridden = 0x236;
            static constexpr std::uintptr_t MaterialTranslatorProfile = 0x237;
            static constexpr std::uintptr_t bAllowDevelopmentShaderCompile = 0x238;
            static constexpr std::uintptr_t bApplyCloudFogging = 0x238;
            static constexpr std::uintptr_t bCastRayTracedShadows = 0x238;
            static constexpr std::uintptr_t bComputeFogPerPixel = 0x238;
            static constexpr std::uintptr_t bIsSky = 0x238;
            static constexpr std::uintptr_t bIsTranslucencyVelocityFromDepth = 0x238;
            static constexpr std::uintptr_t bOutputTranslucentVelocity = 0x238;
            static constexpr std::uintptr_t bUseTranslucencyVertexFog = 0x238;
            static constexpr std::uintptr_t bIsMaterialEditorStatsMaterial = 0x239;
            static constexpr std::uintptr_t bRelaxRuntimeVirtualTextureRestrictions = 0x239;
            static constexpr std::uintptr_t BlendableLocation = 0x23A;
            static constexpr std::uintptr_t BlendableOutputAlpha = 0x23B;
            static constexpr std::uintptr_t UserSceneTexture = 0x23C;
            static constexpr std::uintptr_t UserTextureDivisor = 0x240;
            static constexpr std::uintptr_t ResolutionRelativeToInput = 0x248;
            static constexpr std::uintptr_t bDisablePreExposureScale = 0x24C;
            static constexpr std::uintptr_t bEnableStencilTest = 0x24C;
            static constexpr std::uintptr_t bUsedWithNeuralNetworks = 0x24C;
            static constexpr std::uintptr_t StencilCompare = 0x24D;
            static constexpr std::uintptr_t StencilRefValue = 0x24E;
            static constexpr std::uintptr_t NeuralProfileId = 0x24F;
            static constexpr std::uintptr_t RefractionMode = 0x250;
            static constexpr std::uintptr_t RefractionMethod = 0x251;
            static constexpr std::uintptr_t RefractionCoverageMode = 0x252;
            static constexpr std::uintptr_t PixelDepthOffsetMode = 0x253;
            static constexpr std::uintptr_t BlendablePriority = 0x254;
            static constexpr std::uintptr_t bIsBlendable = 0x258;
            static constexpr std::uintptr_t PreshaderGap = 0x25A;
            static constexpr std::uintptr_t RefractionDepthBias = 0x25C;
            static constexpr std::uintptr_t MaxWorldPositionOffsetDisplacement = 0x260;
            static constexpr std::uintptr_t bAlwaysEvaluateWorldPositionOffset = 0x264;
            static constexpr std::uintptr_t StateId = 0x26C;
        };

        inline static constexpr std::array<PropertyInfo, 141> Properties{{
            {"PhysMaterial", 0x128, "ObjectProperty"},
            {"PhysMaterialMask", 0x130, "ObjectProperty"},
            {"PhysicalMaterialMap", 0x138, "ObjectProperty"},
            {"RenderTracePhysicalMaterialOutputs", 0x178, "ArrayProperty"},
            {"MaterialDomain", 0x188, "ByteProperty"},
            {"BlendMode", 0x189, "ByteProperty"},
            {"DecalBlendMode", 0x18A, "ByteProperty"},
            {"MaterialDecalResponse", 0x18B, "ByteProperty"},
            {"NaniteOverrideMaterial", 0x190, "StructProperty"},
            {"DisplacementScaling", 0x1C0, "StructProperty"},
            {"DisplacementFadeRange", 0x1C8, "StructProperty"},
            {"ShadingModel", 0x1D0, "ByteProperty"},
            {"bCastDynamicShadowAsMasked", 0x1D1, "BoolProperty"},
            {"ShadingModels", 0x1D2, "StructProperty"},
            {"OpacityMaskClipValue", 0x1D4, "FloatProperty"},
            {"DitherOpacityMask", 0x1D8, "BoolProperty"},
            {"DitheredLODTransition", 0x1D8, "BoolProperty"},
            {"TwoSided", 0x1D8, "BoolProperty"},
            {"bContactShadows", 0x1D8, "BoolProperty"},
            {"bEnableResponsiveAA", 0x1D8, "BoolProperty"},
            {"bEnableSeparateTranslucency", 0x1D8, "BoolProperty"},
            {"bIsThinSurface", 0x1D8, "BoolProperty"},
            {"bScreenSpaceReflections", 0x1D8, "BoolProperty"},
            {"bAllowNegativeEmissiveColor", 0x1D9, "BoolProperty"},
            {"bEnableDisplacementFade", 0x1D9, "BoolProperty"},
            {"bEnableTessellation", 0x1D9, "BoolProperty"},
            {"bHasPixelAnimation", 0x1D9, "BoolProperty"},
            {"TranslucencyPass", 0x1DA, "ByteProperty"},
            {"TranslucencyLightingMode", 0x1DB, "ByteProperty"},
            {"bEnableMobileSeparateTranslucency", 0x1DC, "BoolProperty"},
            {"NumCustomizedUVs", 0x1E0, "IntProperty"},
            {"TranslucencyDirectionalLightingIntensity", 0x1E4, "FloatProperty"},
            {"TranslucentShadowDensityScale", 0x1E8, "FloatProperty"},
            {"TranslucentSelfShadowDensityScale", 0x1EC, "FloatProperty"},
            {"TranslucentSelfShadowSecondDensityScale", 0x1F0, "FloatProperty"},
            {"TranslucentSelfShadowSecondOpacity", 0x1F4, "FloatProperty"},
            {"TranslucentBackscatteringExponent", 0x1F8, "FloatProperty"},
            {"TranslucentMultipleScatteringExtinction", 0x1FC, "StructProperty"},
            {"TranslucentShadowStartOffset", 0x20C, "FloatProperty"},
            {"bDisableDepthTest", 0x210, "BoolProperty"},
            {"bGenerateSphericalParticleNormals", 0x210, "BoolProperty"},
            {"bSubstrateRoughnessTracking", 0x210, "BoolProperty"},
            {"bTangentSpaceNormal", 0x210, "BoolProperty"},
            {"bUseEmissiveForDynamicAreaLighting", 0x210, "BoolProperty"},
            {"bUsedAsSpecialEngineMaterial", 0x210, "BoolProperty"},
            {"bUsedWithSkeletalMesh", 0x210, "BoolProperty"},
            {"bWriteOnlyAlpha", 0x210, "BoolProperty"},
            {"bUsedWithBeamTrails", 0x211, "BoolProperty"},
            {"bUsedWithEditorCompositing", 0x211, "BoolProperty"},
            {"bUsedWithMeshDeformer", 0x211, "BoolProperty"},
            {"bUsedWithMeshParticles", 0x211, "BoolProperty"},
            {"bUsedWithNiagaraMeshParticles", 0x211, "BoolProperty"},
            {"bUsedWithNiagaraRibbons", 0x211, "BoolProperty"},
            {"bUsedWithNiagaraSprites", 0x211, "BoolProperty"},
            {"bUsedWithParticleSprites", 0x211, "BoolProperty"},
            {"bRootNodeOverridesDefaultDistortion", 0x212, "BoolProperty"},
            {"bUsedWithGeometryCache", 0x212, "BoolProperty"},
            {"bUsedWithGeometryCollections", 0x212, "BoolProperty"},
            {"bUsedWithInstancedStaticMeshes", 0x212, "BoolProperty"},
            {"bUsedWithMorphTargets", 0x212, "BoolProperty"},
            {"bUsedWithSplineMeshes", 0x212, "BoolProperty"},
            {"bUsedWithStaticLighting", 0x212, "BoolProperty"},
            {"bUsesDistortion", 0x212, "BoolProperty"},
            {"bUsedWithClothing", 0x213, "BoolProperty"},
            {"bUsedWithHairStrands", 0x214, "BoolProperty"},
            {"bUsedWithLidarPointCloud", 0x214, "BoolProperty"},
            {"bUsedWithNanite", 0x214, "BoolProperty"},
            {"bUsedWithVirtualHeightfieldMesh", 0x214, "BoolProperty"},
            {"bUsedWithWater", 0x214, "BoolProperty"},
            {"bUsedWithCurves", 0x218, "BoolProperty"},
            {"bUsedWithGridSampleGrass", 0x218, "BoolProperty"},
            {"bUsedWithNaniteAssemblies", 0x218, "BoolProperty"},
            {"bUsedWithVoxels", 0x218, "BoolProperty"},
            {"bUsedWithHeterogeneousVolumes", 0x21C, "BoolProperty"},
            {"bUsedWithInstancedSkinnedMesh", 0x21C, "BoolProperty"},
            {"bUsedWithStaticMesh", 0x21C, "BoolProperty"},
            {"bUsedWithVolumetricCloud", 0x21C, "BoolProperty"},
            {"bAutomaticallySetUsageInEditor", 0x220, "BoolProperty"},
            {"bForceCompatibleWithLightFunctionAtlas", 0x220, "BoolProperty"},
            {"bFullyRough", 0x220, "BoolProperty"},
            {"bUseFullPrecision", 0x220, "BoolProperty"},
            {"bUsedWithUI", 0x220, "BoolProperty"},
            {"FloatPrecisionMode", 0x221, "ByteProperty"},
            {"bUseAlphaToCoverage", 0x222, "BoolProperty"},
            {"bUseLightmapDirectionality", 0x222, "BoolProperty"},
            {"bForwardRenderUsePreintegratedGFForSimpleIBL", 0x224, "BoolProperty"},
            {"AllowTranslucentCustomDepthWrites", 0x228, "BoolProperty"},
            {"Wireframe", 0x228, "BoolProperty"},
            {"bAllowFrontLayerTranslucency", 0x228, "BoolProperty"},
            {"bCompatibleWithLumenCardSharing", 0x228, "BoolProperty"},
            {"bForwardBlendsSkyLightCubemaps", 0x228, "BoolProperty"},
            {"bNormalCurvatureToRoughness", 0x228, "BoolProperty"},
            {"bUseHQForwardReflections", 0x228, "BoolProperty"},
            {"bUsePlanarForwardReflections", 0x228, "BoolProperty"},
            {"bAllowTranslucentLocalLightShadow", 0x229, "BoolProperty"},
            {"TranslucentLocalLightShadowQuality", 0x22C, "FloatProperty"},
            {"TranslucentDirectionalLightShadowQuality", 0x230, "FloatProperty"},
            {"ShadingRate", 0x234, "ByteProperty"},
            {"bAllowVariableRateShading", 0x235, "BoolProperty"},
            {"bCanMaskedBeAssumedOpaque", 0x235, "BoolProperty"},
            {"bEnableExecWire", 0x235, "BoolProperty"},
            {"bEnableNewHLSLGenerator", 0x235, "BoolProperty"},
            {"bIsFunctionPreviewMaterial", 0x235, "BoolProperty"},
            {"bIsMasked", 0x235, "BoolProperty"},
            {"bIsPreviewMaterial", 0x235, "BoolProperty"},
            {"bUseMaterialAttributes", 0x235, "BoolProperty"},
            {"bEnableNewHLSLGeneratorOverridden", 0x236, "BoolProperty"},
            {"bMaterialTranslatorProfileOverridden", 0x236, "BoolProperty"},
            {"MaterialTranslatorProfile", 0x237, "EnumProperty"},
            {"bAllowDevelopmentShaderCompile", 0x238, "BoolProperty"},
            {"bApplyCloudFogging", 0x238, "BoolProperty"},
            {"bCastRayTracedShadows", 0x238, "BoolProperty"},
            {"bComputeFogPerPixel", 0x238, "BoolProperty"},
            {"bIsSky", 0x238, "BoolProperty"},
            {"bIsTranslucencyVelocityFromDepth", 0x238, "BoolProperty"},
            {"bOutputTranslucentVelocity", 0x238, "BoolProperty"},
            {"bUseTranslucencyVertexFog", 0x238, "BoolProperty"},
            {"bIsMaterialEditorStatsMaterial", 0x239, "BoolProperty"},
            {"bRelaxRuntimeVirtualTextureRestrictions", 0x239, "BoolProperty"},
            {"BlendableLocation", 0x23A, "ByteProperty"},
            {"BlendableOutputAlpha", 0x23B, "BoolProperty"},
            {"UserSceneTexture", 0x23C, "NameProperty"},
            {"UserTextureDivisor", 0x240, "StructProperty"},
            {"ResolutionRelativeToInput", 0x248, "NameProperty"},
            {"bDisablePreExposureScale", 0x24C, "BoolProperty"},
            {"bEnableStencilTest", 0x24C, "BoolProperty"},
            {"bUsedWithNeuralNetworks", 0x24C, "BoolProperty"},
            {"StencilCompare", 0x24D, "ByteProperty"},
            {"StencilRefValue", 0x24E, "ByteProperty"},
            {"NeuralProfileId", 0x24F, "Int8Property"},
            {"RefractionMode", 0x250, "ByteProperty"},
            {"RefractionMethod", 0x251, "ByteProperty"},
            {"RefractionCoverageMode", 0x252, "ByteProperty"},
            {"PixelDepthOffsetMode", 0x253, "ByteProperty"},
            {"BlendablePriority", 0x254, "IntProperty"},
            {"bIsBlendable", 0x258, "BoolProperty"},
            {"PreshaderGap", 0x25A, "UInt16Property"},
            {"RefractionDepthBias", 0x25C, "FloatProperty"},
            {"MaxWorldPositionOffsetDisplacement", 0x260, "FloatProperty"},
            {"bAlwaysEvaluateWorldPositionOffset", 0x264, "BoolProperty"},
            {"StateId", 0x26C, "StructProperty"},
        }};
    };

    struct FortRuntimeLandscapeDynamicMaterialComponent
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeDynamicMaterialComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPrimitiveComponent = 0xC0;
            static constexpr std::uintptr_t SourceMaterial = 0xE8;
            static constexpr std::uintptr_t GridSize = 0xF0;
            static constexpr std::uintptr_t bSamplesHeightmap = 0xF8;
            static constexpr std::uintptr_t bUpdateOnTransformUpdates = 0xF9;
            static constexpr std::uintptr_t LayerSamples = 0x100;
            static constexpr std::uintptr_t BoundComponent = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TargetPrimitiveComponent", 0xC0, "StructProperty"},
            {"SourceMaterial", 0xE8, "ObjectProperty"},
            {"GridSize", 0xF0, "StructProperty"},
            {"bSamplesHeightmap", 0xF8, "BoolProperty"},
            {"bUpdateOnTransformUpdates", 0xF9, "BoolProperty"},
            {"LayerSamples", 0x100, "ArrayProperty"},
            {"BoundComponent", 0x110, "WeakObjectProperty"},
        }};
    };

    struct FortRuntimeLandscapeExternalMaterialsCollector
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeExternalMaterialsCollector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortRuntimeLandscapeGrassContributorComponent
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeGrassContributorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRuntimeLandscapeModificationComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x660;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Material", 0x660, "ObjectProperty"},
        }};
    };

    struct FortRuntimeLandscapeMaterialExpressionAssetUserData
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeMaterialExpressionAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t WeightmapNames = 0x28;
            static constexpr std::uintptr_t bHasConnectedCustomMips = 0x38;
            static constexpr std::uintptr_t BlendOperation = 0x39;
            static constexpr std::uintptr_t ResultType = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WeightmapNames", 0x28, "SetProperty"},
            {"bHasConnectedCustomMips", 0x38, "BoolProperty"},
            {"BlendOperation", 0x39, "EnumProperty"},
            {"ResultType", 0x3C, "EnumProperty"},
        }};
    };

    struct FortRuntimeLandscapeMaterialInstanceConstant
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeMaterialInstanceConstant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialInstanceConstant";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysMaterialMask = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PhysMaterialMask", 0x358, "ObjectProperty"},
        }};
    };

    struct FortRuntimeLandscapeMaterialLibrary
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeMaterialLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalMaterialGatherer = 0x28;
            static constexpr std::uintptr_t LandscapeMaterial = 0x30;
            static constexpr std::uintptr_t AllLayerInfos = 0x38;
            static constexpr std::uintptr_t StripLayerInfos = 0x48;
            static constexpr std::uintptr_t LayerInfoDirectories = 0x58;
            static constexpr std::uintptr_t SortedLayerNames = 0x68;
            static constexpr std::uintptr_t SortedLayerInfos = 0x78;
            static constexpr std::uintptr_t LayersFromMaterial = 0x88;
            static constexpr std::uintptr_t AllMaterials = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ExternalMaterialGatherer", 0x28, "ClassProperty"},
            {"LandscapeMaterial", 0x30, "ObjectProperty"},
            {"AllLayerInfos", 0x38, "MapProperty"},
            {"StripLayerInfos", 0x48, "SetProperty"},
            {"LayerInfoDirectories", 0x58, "ArrayProperty"},
            {"SortedLayerNames", 0x68, "ArrayProperty"},
            {"SortedLayerInfos", 0x78, "ArrayProperty"},
            {"LayersFromMaterial", 0x88, "SetProperty"},
            {"AllMaterials", 0x98, "StructProperty"},
        }};
    };

    struct FortRuntimeLandscapeModificationComponent
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeModificationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Modifications = 0x560;
            static constexpr std::uintptr_t bPrimitivesVisibleInEditor = 0x570;
            static constexpr std::uintptr_t bUseSortPriority = 0x571;
            static constexpr std::uintptr_t SortPriority = 0x574;
            static constexpr std::uintptr_t NextModificationID = 0x578;
            static constexpr std::uintptr_t RuntimeLandscapeSubsystem = 0x57C;
            static constexpr std::uintptr_t CurrentInitializationComponents = 0x588;
            static constexpr std::uintptr_t bUserEnableModifications = 0x598;
            static constexpr std::uintptr_t TrackingID = 0x5A4;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Modifications", 0x560, "ArrayProperty"},
            {"bPrimitivesVisibleInEditor", 0x570, "BoolProperty"},
            {"bUseSortPriority", 0x571, "BoolProperty"},
            {"SortPriority", 0x574, "IntProperty"},
            {"NextModificationID", 0x578, "IntProperty"},
            {"RuntimeLandscapeSubsystem", 0x57C, "WeakObjectProperty"},
            {"CurrentInitializationComponents", 0x588, "SetProperty"},
            {"bUserEnableModifications", 0x598, "BoolProperty"},
            {"TrackingID", 0x5A4, "StructProperty"},
        }};
    };

    struct FortRuntimeLandscapePatchComponent
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapePatchComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ModificationComponent = 0x240;
            static constexpr std::uintptr_t PatchMeshComponent = 0x248;
            static constexpr std::uintptr_t bModifyHeightmap = 0x250;
            static constexpr std::uintptr_t HeightmapTexture = 0x258;
            static constexpr std::uintptr_t HeightmapUVScale = 0x260;
            static constexpr std::uintptr_t HeightmapBlendFactor = 0x264;
            static constexpr std::uintptr_t LayerMaskTexture = 0x268;
            static constexpr std::uintptr_t LayerMaskUVScale = 0x270;
            static constexpr std::uintptr_t LayerMaskBlendFactor = 0x274;
            static constexpr std::uintptr_t FalloffRadius = 0x278;
            static constexpr std::uintptr_t FalloffAmount = 0x27C;
            static constexpr std::uintptr_t HeightMaterial = 0x280;
            static constexpr std::uintptr_t OverrideHeightMaterial = 0x2A0;
            static constexpr std::uintptr_t LayerMaterial = 0x2C0;
            static constexpr std::uintptr_t OverrideLayerMaterial = 0x2E0;
            static constexpr std::uintptr_t LayerName = 0x300;
            static constexpr std::uintptr_t ModificationVisualization = 0x304;
            static constexpr std::uintptr_t PatchSize = 0x308;
            static constexpr std::uintptr_t HeightMaterialInstance = 0x318;
            static constexpr std::uintptr_t LayerMaterialInstance = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"ModificationComponent", 0x240, "ObjectProperty"},
            {"PatchMeshComponent", 0x248, "ObjectProperty"},
            {"bModifyHeightmap", 0x250, "BoolProperty"},
            {"HeightmapTexture", 0x258, "ObjectProperty"},
            {"HeightmapUVScale", 0x260, "FloatProperty"},
            {"HeightmapBlendFactor", 0x264, "FloatProperty"},
            {"LayerMaskTexture", 0x268, "ObjectProperty"},
            {"LayerMaskUVScale", 0x270, "FloatProperty"},
            {"LayerMaskBlendFactor", 0x274, "FloatProperty"},
            {"FalloffRadius", 0x278, "FloatProperty"},
            {"FalloffAmount", 0x27C, "FloatProperty"},
            {"HeightMaterial", 0x280, "SoftObjectProperty"},
            {"OverrideHeightMaterial", 0x2A0, "SoftObjectProperty"},
            {"LayerMaterial", 0x2C0, "SoftObjectProperty"},
            {"OverrideLayerMaterial", 0x2E0, "SoftObjectProperty"},
            {"LayerName", 0x300, "NameProperty"},
            {"ModificationVisualization", 0x304, "EnumProperty"},
            {"PatchSize", 0x308, "StructProperty"},
            {"HeightMaterialInstance", 0x318, "ObjectProperty"},
            {"LayerMaterialInstance", 0x320, "ObjectProperty"},
        }};
    };

    struct FortRuntimeLandscapeProxy
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedLocalBounds = 0x278;
            static constexpr std::uintptr_t CachingComponents = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedLocalBounds", 0x278, "StructProperty"},
            {"CachingComponents", 0x2B0, "ArrayProperty"},
        }};
    };

    struct FortRuntimeLandscapeProxyComponent
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeProxyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRuntimeLandscapeComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x2D1;
            static constexpr std::uintptr_t LayerStorageLocation = 0x2D2;
            static constexpr std::uintptr_t MaterialLibrary = 0x2D8;
            static constexpr std::uintptr_t CachedDataStorageLocation = 0x2F8;
            static constexpr std::uintptr_t CachedComponentData = 0x300;
            static constexpr std::uintptr_t LandscapeActorProxyComponent = 0x320;
            static constexpr std::uintptr_t RuntimeMaterialLibrary = 0x328;
            static constexpr std::uintptr_t RuntimeCachedComponentData = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bEnabled", 0x2D1, "BoolProperty"},
            {"LayerStorageLocation", 0x2D2, "EnumProperty"},
            {"MaterialLibrary", 0x2D8, "SoftObjectProperty"},
            {"CachedDataStorageLocation", 0x2F8, "EnumProperty"},
            {"CachedComponentData", 0x300, "SoftObjectProperty"},
            {"LandscapeActorProxyComponent", 0x320, "WeakObjectProperty"},
            {"RuntimeMaterialLibrary", 0x328, "ObjectProperty"},
            {"RuntimeCachedComponentData", 0x330, "ObjectProperty"},
        }};
    };

    struct FortRuntimeLandscapeSpline
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeSpline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComponent = 0x278;
            static constexpr std::uintptr_t TerrainModificationComponent = 0x280;
            static constexpr std::uintptr_t ModificationComponent = 0x288;
            static constexpr std::uintptr_t SplineMeshComponents = 0x290;
            static constexpr std::uintptr_t TargetLandscapeSplineOwner = 0x2A0;
            static constexpr std::uintptr_t bUpdatesHeightmap = 0x2A8;
            static constexpr std::uintptr_t LayerName = 0x2AC;
            static constexpr std::uintptr_t DefaultHalfWidth = 0x2B0;
            static constexpr std::uintptr_t DefaultLayerWidthScale = 0x2B4;
            static constexpr std::uintptr_t DefaultFalloffWidth = 0x2B8;
            static constexpr std::uintptr_t DefaultLayerFalloffScale = 0x2BC;
            static constexpr std::uintptr_t DefaultEndFalloff = 0x2C0;
            static constexpr std::uintptr_t SectionIndex = 0x2C4;
            static constexpr std::uintptr_t ModificationVisualization = 0x2C8;
            static constexpr std::uintptr_t HeightMaterial = 0x2D0;
            static constexpr std::uintptr_t LayerMaterial = 0x2F0;
            static constexpr std::uintptr_t Mesh = 0x310;
            static constexpr std::uintptr_t bUseAdaptiveSplineMesh = 0x330;
            static constexpr std::uintptr_t AdaptiveSplineResolution = 0x334;
            static constexpr std::uintptr_t HeightMaterialInstances = 0x338;
            static constexpr std::uintptr_t LayerMaterialInstances = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"SplineComponent", 0x278, "ObjectProperty"},
            {"TerrainModificationComponent", 0x280, "ObjectProperty"},
            {"ModificationComponent", 0x288, "ObjectProperty"},
            {"SplineMeshComponents", 0x290, "ArrayProperty"},
            {"TargetLandscapeSplineOwner", 0x2A0, "ObjectProperty"},
            {"bUpdatesHeightmap", 0x2A8, "BoolProperty"},
            {"LayerName", 0x2AC, "NameProperty"},
            {"DefaultHalfWidth", 0x2B0, "FloatProperty"},
            {"DefaultLayerWidthScale", 0x2B4, "FloatProperty"},
            {"DefaultFalloffWidth", 0x2B8, "FloatProperty"},
            {"DefaultLayerFalloffScale", 0x2BC, "FloatProperty"},
            {"DefaultEndFalloff", 0x2C0, "FloatProperty"},
            {"SectionIndex", 0x2C4, "IntProperty"},
            {"ModificationVisualization", 0x2C8, "EnumProperty"},
            {"HeightMaterial", 0x2D0, "SoftObjectProperty"},
            {"LayerMaterial", 0x2F0, "SoftObjectProperty"},
            {"Mesh", 0x310, "SoftObjectProperty"},
            {"bUseAdaptiveSplineMesh", 0x330, "BoolProperty"},
            {"AdaptiveSplineResolution", 0x334, "FloatProperty"},
            {"HeightMaterialInstances", 0x338, "ArrayProperty"},
            {"LayerMaterialInstances", 0x348, "ArrayProperty"},
        }};
    };

    struct FortRuntimeLandscapeSplineComponent
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeSplineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineMetadata = 0x6C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SplineMetadata", 0x6C0, "ObjectProperty"},
        }};
    };

    struct FortRuntimeLandscapeSplineMetadata
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeSplineMetadata";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t HalfWidth = 0x28;
            static constexpr std::uintptr_t LayerWidthScale = 0x40;
            static constexpr std::uintptr_t SideFalloffWidth = 0x58;
            static constexpr std::uintptr_t LayerSideFalloffScale = 0x70;
            static constexpr std::uintptr_t StartFalloffFraction = 0x88;
            static constexpr std::uintptr_t EndFalloffFraction = 0xA0;
            static constexpr std::uintptr_t SortPriority = 0xB8;
            static constexpr std::uintptr_t bHasInvalidStartStopFalloffs = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"HalfWidth", 0x28, "StructProperty"},
            {"LayerWidthScale", 0x40, "StructProperty"},
            {"SideFalloffWidth", 0x58, "StructProperty"},
            {"LayerSideFalloffScale", 0x70, "StructProperty"},
            {"StartFalloffFraction", 0x88, "StructProperty"},
            {"EndFalloffFraction", 0xA0, "StructProperty"},
            {"SortPriority", 0xB8, "StructProperty"},
            {"bHasInvalidStartStopFalloffs", 0xD0, "BoolProperty"},
        }};
    };

    struct FortRuntimeLandscapeSubsystem
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t LandscapeContainer = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LandscapeContainer", 0x170, "StructProperty"},
        }};
    };

    struct FortRuntimeLandscapeTextureDebugDraw
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeTextureDebugDraw";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortRuntimeLandscapeTextureReferenceData
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeTextureReferenceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortRuntimeLandscapeTextureStorageProviderFactory
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapeTextureStorageProviderFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TextureMipDataProviderFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x28;
            static constexpr std::uintptr_t LandscapeSubsystem = 0x30;
            static constexpr std::uintptr_t LandscapeComponent = 0x48;
            static constexpr std::uintptr_t ExistingFactory = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Texture", 0x28, "ObjectProperty"},
            {"LandscapeSubsystem", 0x30, "WeakObjectProperty"},
            {"LandscapeComponent", 0x48, "WeakObjectProperty"},
            {"ExistingFactory", 0x60, "ObjectProperty"},
        }};
    };

    struct MaterialExpressionFortRuntimeLandscapeCustomMaterialCustomMipIndex
    {
        static constexpr std::string_view Name = "MaterialExpressionFortRuntimeLandscapeCustomMaterialCustomMipIndex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomExpression = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomExpression", 0xB0, "ObjectProperty"},
        }};
    };

    struct MaterialExpressionFortRuntimeLandscapeCustomMaterialGetUVOffset
    {
        static constexpr std::string_view Name = "MaterialExpressionFortRuntimeLandscapeCustomMaterialGetUVOffset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t UV = 0xB0;
            static constexpr std::uintptr_t ScaledOffset = 0xD8;
            static constexpr std::uintptr_t CustomExpression = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UV", 0xB0, "StructProperty"},
            {"ScaledOffset", 0xD8, "StructProperty"},
            {"CustomExpression", 0x100, "ObjectProperty"},
        }};
    };

    struct MaterialExpressionFortRuntimeLandscapeCustomMaterialSampleParentMIP
    {
        static constexpr std::string_view Name = "MaterialExpressionFortRuntimeLandscapeCustomMaterialSampleParentMIP";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t UV = 0xB0;
            static constexpr std::uintptr_t CustomExpression = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UV", 0xB0, "StructProperty"},
            {"CustomExpression", 0xD8, "ObjectProperty"},
        }};
    };

    struct MaterialExpressionFortRuntimeLandscapeCustomOutput
    {
        static constexpr std::string_view Name = "MaterialExpressionFortRuntimeLandscapeCustomOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionCustomOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0xB0;
            static constexpr std::uintptr_t HeightBlend = 0xD8;
            static constexpr std::uintptr_t WorldNormal = 0x100;
            static constexpr std::uintptr_t CustomMipResult = 0x128;
            static constexpr std::uintptr_t BlendOperation = 0x150;
            static constexpr std::uintptr_t ResultType = 0x154;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Result", 0xB0, "StructProperty"},
            {"HeightBlend", 0xD8, "StructProperty"},
            {"WorldNormal", 0x100, "StructProperty"},
            {"CustomMipResult", 0x128, "StructProperty"},
            {"BlendOperation", 0x150, "EnumProperty"},
            {"ResultType", 0x154, "EnumProperty"},
        }};
    };

    struct MaterialExpressionFortRuntimeLandscapeCustomOutputProxy
    {
        static constexpr std::string_view Name = "MaterialExpressionFortRuntimeLandscapeCustomOutputProxy";
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

    struct MaterialExpressionFortRuntimeLandscapeDynamicHeightSample
    {
        static constexpr std::string_view Name = "MaterialExpressionFortRuntimeLandscapeDynamicHeightSample";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionFortRuntimeLandscapeDynamicSample";
        struct Offsets
        {
            static constexpr std::uintptr_t HeightmapOutput = 0xF0;
            static constexpr std::uintptr_t NormalOutput = 0xF4;
            static constexpr std::uintptr_t PreviewMip = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HeightmapOutput", 0xF0, "EnumProperty"},
            {"NormalOutput", 0xF4, "EnumProperty"},
            {"PreviewMip", 0xF8, "IntProperty"},
        }};
    };

    struct MaterialExpressionFortRuntimeLandscapeDynamicLayerSample
    {
        static constexpr std::string_view Name = "MaterialExpressionFortRuntimeLandscapeDynamicLayerSample";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionFortRuntimeLandscapeDynamicSample";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0xF0;
            static constexpr std::uintptr_t PreviewWeight = 0xF4;
            static constexpr std::uintptr_t PreviewMip = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ParameterName", 0xF0, "NameProperty"},
            {"PreviewWeight", 0xF4, "FloatProperty"},
            {"PreviewMip", 0xF8, "IntProperty"},
        }};
    };

    struct MaterialExpressionFortRuntimeLandscapeDynamicSample
    {
        static constexpr std::string_view Name = "MaterialExpressionFortRuntimeLandscapeDynamicSample";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t XYOffset = 0xB0;
            static constexpr std::uintptr_t bForceEnableXYOffset = 0xD8;
            static constexpr std::uintptr_t GridSize = 0xDC;
            static constexpr std::uintptr_t CustomGridSize = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"XYOffset", 0xB0, "StructProperty"},
            {"bForceEnableXYOffset", 0xD8, "BoolProperty"},
            {"GridSize", 0xDC, "EnumProperty"},
            {"CustomGridSize", 0xE0, "StructProperty"},
        }};
    };

    struct MaterialExpressionFortRuntimeLandscapeOutputPass
    {
        static constexpr std::string_view Name = "MaterialExpressionFortRuntimeLandscapeOutputPass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionCustomOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t GrassMaterialExpression = 0xB0;
            static constexpr std::uintptr_t PhysicsMaterialExpression = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GrassMaterialExpression", 0xB0, "ObjectProperty"},
            {"PhysicsMaterialExpression", 0xB8, "ObjectProperty"},
        }};
    };

    struct MaterialExpressionFortRuntimeLandscapeOutputPassPreInit
    {
        static constexpr std::string_view Name = "MaterialExpressionFortRuntimeLandscapeOutputPassPreInit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionCustomOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputPassExpressions = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutputPassExpressions", 0xB0, "ObjectProperty"},
        }};
    };

}
