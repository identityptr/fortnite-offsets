#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InterchangePipelines
{
    struct GLTFPipelineSettings
    {
        static constexpr std::string_view Name = "GLTFPipelineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialParents = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialParents", 0x30, "MapProperty"},
        }};
    };

    struct InterchangeGLTFPipeline
    {
        static constexpr std::string_view Name = "InterchangeGLTFPipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PipelineDisplayName = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PipelineDisplayName", 0xA8, "StrProperty"},
        }};
    };

    struct InterchangeGenericAnimationPipeline
    {
        static constexpr std::string_view Name = "InterchangeGenericAnimationPipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CommonSkeletalMeshesAndAnimationsProperties = 0xA8;
            static constexpr std::uintptr_t CommonMeshesProperties = 0xB0;
            static constexpr std::uintptr_t bImportAnimations = 0xB8;
            static constexpr std::uintptr_t bImportBoneTracks = 0xB9;
            static constexpr std::uintptr_t AnimationRange = 0xBA;
            static constexpr std::uintptr_t FrameImportRange = 0xBC;
            static constexpr std::uintptr_t bUse30HzToBakeBoneAnimation = 0xC4;
            static constexpr std::uintptr_t CustomBoneAnimationSampleRate = 0xC8;
            static constexpr std::uintptr_t FrameAlignment = 0xCC;
            static constexpr std::uintptr_t bSnapToClosestFrameBoundary = 0xCD;
            static constexpr std::uintptr_t bImportCustomAttribute = 0xCE;
            static constexpr std::uintptr_t bAddCurveMetadataToSkeleton = 0xCF;
            static constexpr std::uintptr_t bSetMaterialDriveParameterOnCustomAttribute = 0xD0;
            static constexpr std::uintptr_t MaterialCurveSuffixes = 0xD8;
            static constexpr std::uintptr_t bRemoveCurveRedundantKeys = 0xE8;
            static constexpr std::uintptr_t bDoNotImportCurveWithZero = 0xE9;
            static constexpr std::uintptr_t bDeleteExistingNonCurveCustomAttributes = 0xEA;
            static constexpr std::uintptr_t bDeleteExistingCustomAttributeCurves = 0xEB;
            static constexpr std::uintptr_t bDeleteExistingMorphTargetCurves = 0xEC;
            static constexpr std::uintptr_t SourceAnimationName = 0xF0;
            static constexpr std::uintptr_t bSceneImport = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"CommonSkeletalMeshesAndAnimationsProperties", 0xA8, "WeakObjectProperty"},
            {"CommonMeshesProperties", 0xB0, "WeakObjectProperty"},
            {"bImportAnimations", 0xB8, "BoolProperty"},
            {"bImportBoneTracks", 0xB9, "BoolProperty"},
            {"AnimationRange", 0xBA, "EnumProperty"},
            {"FrameImportRange", 0xBC, "StructProperty"},
            {"bUse30HzToBakeBoneAnimation", 0xC4, "BoolProperty"},
            {"CustomBoneAnimationSampleRate", 0xC8, "IntProperty"},
            {"FrameAlignment", 0xCC, "EnumProperty"},
            {"bSnapToClosestFrameBoundary", 0xCD, "BoolProperty"},
            {"bImportCustomAttribute", 0xCE, "BoolProperty"},
            {"bAddCurveMetadataToSkeleton", 0xCF, "BoolProperty"},
            {"bSetMaterialDriveParameterOnCustomAttribute", 0xD0, "BoolProperty"},
            {"MaterialCurveSuffixes", 0xD8, "ArrayProperty"},
            {"bRemoveCurveRedundantKeys", 0xE8, "BoolProperty"},
            {"bDoNotImportCurveWithZero", 0xE9, "BoolProperty"},
            {"bDeleteExistingNonCurveCustomAttributes", 0xEA, "BoolProperty"},
            {"bDeleteExistingCustomAttributeCurves", 0xEB, "BoolProperty"},
            {"bDeleteExistingMorphTargetCurves", 0xEC, "BoolProperty"},
            {"SourceAnimationName", 0xF0, "StrProperty"},
            {"bSceneImport", 0x100, "BoolProperty"},
        }};
    };

    struct InterchangeGenericAssetsPipeline
    {
        static constexpr std::string_view Name = "InterchangeGenericAssetsPipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PipelineDisplayName = 0xA8;
            static constexpr std::uintptr_t ReimportStrategy = 0xB8;
            static constexpr std::uintptr_t bUseSourceNameForAsset = 0xB9;
            static constexpr std::uintptr_t bSceneNameSubFolder = 0xBA;
            static constexpr std::uintptr_t bAssetTypeSubFolders = 0xBB;
            static constexpr std::uintptr_t AssetName = 0xC0;
            static constexpr std::uintptr_t ImportOffsetTranslation = 0xD0;
            static constexpr std::uintptr_t ImportOffsetRotation = 0xE8;
            static constexpr std::uintptr_t ImportOffsetUniformScale = 0x100;
            static constexpr std::uintptr_t CommonMeshesProperties = 0x108;
            static constexpr std::uintptr_t CommonSkeletalMeshesAndAnimationsProperties = 0x110;
            static constexpr std::uintptr_t MeshPipeline = 0x118;
            static constexpr std::uintptr_t AnimationPipeline = 0x120;
            static constexpr std::uintptr_t MaterialPipeline = 0x128;
            static constexpr std::uintptr_t GroomPipeline = 0x130;
            static constexpr std::uintptr_t SceneNameFolderPrefix = 0x138;
            static constexpr std::uintptr_t bImportOnlyAnimationAdjusted = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"PipelineDisplayName", 0xA8, "StrProperty"},
            {"ReimportStrategy", 0xB8, "EnumProperty"},
            {"bUseSourceNameForAsset", 0xB9, "BoolProperty"},
            {"bSceneNameSubFolder", 0xBA, "BoolProperty"},
            {"bAssetTypeSubFolders", 0xBB, "BoolProperty"},
            {"AssetName", 0xC0, "StrProperty"},
            {"ImportOffsetTranslation", 0xD0, "StructProperty"},
            {"ImportOffsetRotation", 0xE8, "StructProperty"},
            {"ImportOffsetUniformScale", 0x100, "FloatProperty"},
            {"CommonMeshesProperties", 0x108, "ObjectProperty"},
            {"CommonSkeletalMeshesAndAnimationsProperties", 0x110, "ObjectProperty"},
            {"MeshPipeline", 0x118, "ObjectProperty"},
            {"AnimationPipeline", 0x120, "ObjectProperty"},
            {"MaterialPipeline", 0x128, "ObjectProperty"},
            {"GroomPipeline", 0x130, "ObjectProperty"},
            {"SceneNameFolderPrefix", 0x138, "StrProperty"},
            {"bImportOnlyAnimationAdjusted", 0x148, "BoolProperty"},
        }};
    };

    struct InterchangeGenericAudioPipeline
    {
        static constexpr std::string_view Name = "InterchangeGenericAudioPipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PipelineDisplayName = 0xA8;
            static constexpr std::uintptr_t bImportSounds = 0xB8;
            static constexpr std::uintptr_t BaseNodeContainer = 0xC0;
            static constexpr std::uintptr_t SourceDatas = 0xC8;
            static constexpr std::uintptr_t SoundWaveNodes = 0xD8;
            static constexpr std::uintptr_t SoundWaveFactoryNodes = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PipelineDisplayName", 0xA8, "StrProperty"},
            {"bImportSounds", 0xB8, "BoolProperty"},
            {"BaseNodeContainer", 0xC0, "ObjectProperty"},
            {"SourceDatas", 0xC8, "ArrayProperty"},
            {"SoundWaveNodes", 0xD8, "ArrayProperty"},
            {"SoundWaveFactoryNodes", 0xE8, "ArrayProperty"},
        }};
    };

    struct InterchangeGenericCommonMeshesProperties
    {
        static constexpr std::string_view Name = "InterchangeGenericCommonMeshesProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ForceAllMeshAsType = 0xA8;
            static constexpr std::uintptr_t bConvertStaticsWithAnimatedTransformToSkeletals = 0xA9;
            static constexpr std::uintptr_t bConvertStaticsWithMorphTargetsToSkeletals = 0xAA;
            static constexpr std::uintptr_t bConvertStaticsInBoneHierarchyToSkeletals = 0xAB;
            static constexpr std::uintptr_t bSingleBoneSkeleton = 0xAC;
            static constexpr std::uintptr_t bImportLods = 0xAD;
            static constexpr std::uintptr_t bBakeMeshes = 0xAE;
            static constexpr std::uintptr_t bIsBakeMeshesForcedOff = 0xAF;
            static constexpr std::uintptr_t bBakePivotMeshes = 0xB0;
            static constexpr std::uintptr_t bKeepSectionsSeparate = 0xB1;
            static constexpr std::uintptr_t bRetainPolygons = 0xB2;
            static constexpr std::uintptr_t VertexColorImportOption = 0xB3;
            static constexpr std::uintptr_t VertexOverrideColor = 0xB4;
            static constexpr std::uintptr_t bImportSockets = 0xB8;
            static constexpr std::uintptr_t bRecomputeNormals = 0xB9;
            static constexpr std::uintptr_t bRecomputeTangents = 0xBA;
            static constexpr std::uintptr_t bUseMikkTSpace = 0xBB;
            static constexpr std::uintptr_t bComputeWeightedNormals = 0xBC;
            static constexpr std::uintptr_t bUseHighPrecisionTangentBasis = 0xBD;
            static constexpr std::uintptr_t bUseFullPrecisionUVs = 0xBE;
            static constexpr std::uintptr_t bUseBackwardsCompatibleF16TruncUVs = 0xBF;
            static constexpr std::uintptr_t bRemoveDegenerates = 0xC0;
            static constexpr std::uintptr_t bAutoDetectMeshType = 0xC1;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ForceAllMeshAsType", 0xA8, "EnumProperty"},
            {"bConvertStaticsWithAnimatedTransformToSkeletals", 0xA9, "BoolProperty"},
            {"bConvertStaticsWithMorphTargetsToSkeletals", 0xAA, "BoolProperty"},
            {"bConvertStaticsInBoneHierarchyToSkeletals", 0xAB, "BoolProperty"},
            {"bSingleBoneSkeleton", 0xAC, "BoolProperty"},
            {"bImportLods", 0xAD, "BoolProperty"},
            {"bBakeMeshes", 0xAE, "BoolProperty"},
            {"bIsBakeMeshesForcedOff", 0xAF, "BoolProperty"},
            {"bBakePivotMeshes", 0xB0, "BoolProperty"},
            {"bKeepSectionsSeparate", 0xB1, "BoolProperty"},
            {"bRetainPolygons", 0xB2, "BoolProperty"},
            {"VertexColorImportOption", 0xB3, "EnumProperty"},
            {"VertexOverrideColor", 0xB4, "StructProperty"},
            {"bImportSockets", 0xB8, "BoolProperty"},
            {"bRecomputeNormals", 0xB9, "BoolProperty"},
            {"bRecomputeTangents", 0xBA, "BoolProperty"},
            {"bUseMikkTSpace", 0xBB, "BoolProperty"},
            {"bComputeWeightedNormals", 0xBC, "BoolProperty"},
            {"bUseHighPrecisionTangentBasis", 0xBD, "BoolProperty"},
            {"bUseFullPrecisionUVs", 0xBE, "BoolProperty"},
            {"bUseBackwardsCompatibleF16TruncUVs", 0xBF, "BoolProperty"},
            {"bRemoveDegenerates", 0xC0, "BoolProperty"},
            {"bAutoDetectMeshType", 0xC1, "BoolProperty"},
        }};
    };

    struct InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
    {
        static constexpr std::string_view Name = "InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bImportOnlyAnimations = 0xA8;
            static constexpr std::uintptr_t bTryAutoSelectSkeleton = 0xA9;
            static constexpr std::uintptr_t skeleton = 0xB0;
            static constexpr std::uintptr_t bUseT0AsRefPose = 0xD0;
            static constexpr std::uintptr_t bAddCurveMetadataToSkeleton = 0xD1;
            static constexpr std::uintptr_t bImportMeshesInBoneHierarchy = 0xD2;
            static constexpr std::uintptr_t bConvertStaticsWithMorphTargetsToSkeletals = 0xD3;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bImportOnlyAnimations", 0xA8, "BoolProperty"},
            {"bTryAutoSelectSkeleton", 0xA9, "BoolProperty"},
            {"skeleton", 0xB0, "SoftObjectProperty"},
            {"bUseT0AsRefPose", 0xD0, "BoolProperty"},
            {"bAddCurveMetadataToSkeleton", 0xD1, "BoolProperty"},
            {"bImportMeshesInBoneHierarchy", 0xD2, "BoolProperty"},
            {"bConvertStaticsWithMorphTargetsToSkeletals", 0xD3, "BoolProperty"},
        }};
    };

    struct InterchangeGenericGroomPipeline
    {
        static constexpr std::string_view Name = "InterchangeGenericGroomPipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PipelineDisplayName = 0xA8;
            static constexpr std::uintptr_t bEnableGroomTypesImport = 0xB8;
            static constexpr std::uintptr_t bImportGrooms = 0xB9;
            static constexpr std::uintptr_t bImportGroomBindings = 0xBA;
            static constexpr std::uintptr_t GroupInterpolationSettings = 0xBC;
            static constexpr std::uintptr_t bImportGroomCaches = 0xE4;
            static constexpr std::uintptr_t GroomAsset = 0xE8;
            static constexpr std::uintptr_t ImportGroomCacheType = 0x100;
            static constexpr std::uintptr_t bOverrideTimeRange = 0x101;
            static constexpr std::uintptr_t FrameStart = 0x104;
            static constexpr std::uintptr_t FrameEnd = 0x108;
            static constexpr std::uintptr_t NumInterpolationPoints = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"PipelineDisplayName", 0xA8, "StrProperty"},
            {"bEnableGroomTypesImport", 0xB8, "BoolProperty"},
            {"bImportGrooms", 0xB9, "BoolProperty"},
            {"bImportGroomBindings", 0xBA, "BoolProperty"},
            {"GroupInterpolationSettings", 0xBC, "StructProperty"},
            {"bImportGroomCaches", 0xE4, "BoolProperty"},
            {"GroomAsset", 0xE8, "StructProperty"},
            {"ImportGroomCacheType", 0x100, "EnumProperty"},
            {"bOverrideTimeRange", 0x101, "BoolProperty"},
            {"FrameStart", 0x104, "IntProperty"},
            {"FrameEnd", 0x108, "IntProperty"},
            {"NumInterpolationPoints", 0x10C, "IntProperty"},
        }};
    };

    struct InterchangeGenericLevelPipeline
    {
        static constexpr std::string_view Name = "InterchangeGenericLevelPipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PipelineDisplayName = 0xA8;
            static constexpr std::uintptr_t ReimportPropertyStrategy = 0xB8;
            static constexpr std::uintptr_t SceneHierarchyType = 0xB9;
            static constexpr std::uintptr_t bDeleteMissingActors = 0xBA;
            static constexpr std::uintptr_t bForceReimportDeletedActors = 0xBB;
            static constexpr std::uintptr_t bForceReimportDeletedAssets = 0xBC;
            static constexpr std::uintptr_t bDeleteMissingAssets = 0xBD;
            static constexpr std::uintptr_t bUseHierarchicalISMComponents = 0xBE;
            static constexpr std::uintptr_t bUsePhysicalInsteadOfStandardPerspectiveCamera = 0xBF;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PipelineDisplayName", 0xA8, "StrProperty"},
            {"ReimportPropertyStrategy", 0xB8, "EnumProperty"},
            {"SceneHierarchyType", 0xB9, "EnumProperty"},
            {"bDeleteMissingActors", 0xBA, "BoolProperty"},
            {"bForceReimportDeletedActors", 0xBB, "BoolProperty"},
            {"bForceReimportDeletedAssets", 0xBC, "BoolProperty"},
            {"bDeleteMissingAssets", 0xBD, "BoolProperty"},
            {"bUseHierarchicalISMComponents", 0xBE, "BoolProperty"},
            {"bUsePhysicalInsteadOfStandardPerspectiveCamera", 0xBF, "BoolProperty"},
        }};
    };

    struct InterchangeGenericMaterialPipeline
    {
        static constexpr std::string_view Name = "InterchangeGenericMaterialPipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PipelineDisplayName = 0xA8;
            static constexpr std::uintptr_t AssetName = 0xB8;
            static constexpr std::uintptr_t bImportMaterials = 0xC8;
            static constexpr std::uintptr_t bReuseExistingMaterials = 0xC9;
            static constexpr std::uintptr_t SearchLocation = 0xCA;
            static constexpr std::uintptr_t bCreateNewMaterials = 0xCB;
            static constexpr std::uintptr_t MaterialImport = 0xCC;
            static constexpr std::uintptr_t bCreateMaterialInstanceForParent = 0xCD;
            static constexpr std::uintptr_t ParentMaterial = 0xD0;
            static constexpr std::uintptr_t bIdentifyDuplicateMaterials = 0xE8;
            static constexpr std::uintptr_t TexturePipeline = 0xF0;
            static constexpr std::uintptr_t SparseVolumeTexturePipeline = 0xF8;
            static constexpr std::uintptr_t bOverrideDisplacement = 0x100;
            static constexpr std::uintptr_t OverrideDisplacementCenter = 0x104;
            static constexpr std::uintptr_t BaseNodeContainer = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PipelineDisplayName", 0xA8, "StrProperty"},
            {"AssetName", 0xB8, "StrProperty"},
            {"bImportMaterials", 0xC8, "BoolProperty"},
            {"bReuseExistingMaterials", 0xC9, "BoolProperty"},
            {"SearchLocation", 0xCA, "EnumProperty"},
            {"bCreateNewMaterials", 0xCB, "BoolProperty"},
            {"MaterialImport", 0xCC, "EnumProperty"},
            {"bCreateMaterialInstanceForParent", 0xCD, "BoolProperty"},
            {"ParentMaterial", 0xD0, "StructProperty"},
            {"bIdentifyDuplicateMaterials", 0xE8, "BoolProperty"},
            {"TexturePipeline", 0xF0, "ObjectProperty"},
            {"SparseVolumeTexturePipeline", 0xF8, "ObjectProperty"},
            {"bOverrideDisplacement", 0x100, "BoolProperty"},
            {"OverrideDisplacementCenter", 0x104, "FloatProperty"},
            {"BaseNodeContainer", 0x108, "ObjectProperty"},
        }};
    };

    struct InterchangeGenericMeshPipeline
    {
        static constexpr std::string_view Name = "InterchangeGenericMeshPipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CommonMeshesProperties = 0xA8;
            static constexpr std::uintptr_t CommonSkeletalMeshesAndAnimationsProperties = 0xB0;
            static constexpr std::uintptr_t bImportStaticMeshes = 0xB8;
            static constexpr std::uintptr_t bCombineStaticMeshes = 0xB9;
            static constexpr std::uintptr_t CombineStaticMeshesBehavior = 0xBA;
            static constexpr std::uintptr_t LodGroup = 0xBC;
            static constexpr std::uintptr_t bAutoComputeLODScreenSizes = 0xC0;
            static constexpr std::uintptr_t LODScreenSizes = 0xC8;
            static constexpr std::uintptr_t bImportCollision = 0xD8;
            static constexpr std::uintptr_t bCollision = 0xD9;
            static constexpr std::uintptr_t bImportCollisionAccordingToMeshName = 0xDA;
            static constexpr std::uintptr_t bOneConvexHullPerUCX = 0xDB;
            static constexpr std::uintptr_t Collision = 0xDC;
            static constexpr std::uintptr_t bForceCollisionPrimitiveGeneration = 0xDD;
            static constexpr std::uintptr_t bBuildNanite = 0xDE;
            static constexpr std::uintptr_t NaniteTriangleThreshold = 0xE0;
            static constexpr std::uintptr_t bBuildReversedIndexBuffer = 0xE8;
            static constexpr std::uintptr_t bGenerateLightmapUVs = 0xE9;
            static constexpr std::uintptr_t bGenerateDistanceFieldAsIfTwoSided = 0xEA;
            static constexpr std::uintptr_t bSupportFaceRemap = 0xEB;
            static constexpr std::uintptr_t MinLightmapResolution = 0xEC;
            static constexpr std::uintptr_t SrcLightmapIndex = 0xF0;
            static constexpr std::uintptr_t DstLightmapIndex = 0xF4;
            static constexpr std::uintptr_t BuildScale3D = 0xF8;
            static constexpr std::uintptr_t DistanceFieldResolutionScale = 0x110;
            static constexpr std::uintptr_t DistanceFieldReplacementMesh = 0x118;
            static constexpr std::uintptr_t MaxLumenMeshCards = 0x138;
            static constexpr std::uintptr_t bImportSkeletalMeshes = 0x13C;
            static constexpr std::uintptr_t SkeletalMeshImportContentType = 0x13D;
            static constexpr std::uintptr_t LastSkeletalMeshImportContentType = 0x13E;
            static constexpr std::uintptr_t CombineSkeletalMeshesBehavior = 0x13F;
            static constexpr std::uintptr_t bImportMorphTargets = 0x140;
            static constexpr std::uintptr_t bMergeMorphTargetsWithSameName = 0x141;
            static constexpr std::uintptr_t bImportVertexAttributes = 0x142;
            static constexpr std::uintptr_t bUpdateSkeletonReferencePose = 0x143;
            static constexpr std::uintptr_t bCreatePhysicsAsset = 0x144;
            static constexpr std::uintptr_t PhysicsAsset = 0x148;
            static constexpr std::uintptr_t bUseHighPrecisionSkinWeights = 0x168;
            static constexpr std::uintptr_t ThresholdPosition = 0x16C;
            static constexpr std::uintptr_t ThresholdTangentNormal = 0x170;
            static constexpr std::uintptr_t ThresholdUV = 0x174;
            static constexpr std::uintptr_t MorphThresholdPosition = 0x178;
            static constexpr std::uintptr_t BoneInfluenceLimit = 0x17C;
            static constexpr std::uintptr_t bImportGeometryCaches = 0x180;
            static constexpr std::uintptr_t bFlattenTracks = 0x181;
            static constexpr std::uintptr_t CompressedPositionPrecision = 0x184;
            static constexpr std::uintptr_t CompressedTextureCoordinatesNumberOfBits = 0x188;
            static constexpr std::uintptr_t bOverrideTimeRange = 0x18C;
            static constexpr std::uintptr_t FrameStart = 0x190;
            static constexpr std::uintptr_t FrameEnd = 0x194;
            static constexpr std::uintptr_t MotionVectors = 0x198;
            static constexpr std::uintptr_t bApplyConstantTopologyOptimizations = 0x199;
            static constexpr std::uintptr_t bStoreImportedVertexNumbers = 0x19A;
            static constexpr std::uintptr_t bOptimizeIndexBuffers = 0x19B;
        };

        inline static constexpr std::array<PropertyInfo, 54> Properties{{
            {"CommonMeshesProperties", 0xA8, "WeakObjectProperty"},
            {"CommonSkeletalMeshesAndAnimationsProperties", 0xB0, "WeakObjectProperty"},
            {"bImportStaticMeshes", 0xB8, "BoolProperty"},
            {"bCombineStaticMeshes", 0xB9, "BoolProperty"},
            {"CombineStaticMeshesBehavior", 0xBA, "EnumProperty"},
            {"LodGroup", 0xBC, "NameProperty"},
            {"bAutoComputeLODScreenSizes", 0xC0, "BoolProperty"},
            {"LODScreenSizes", 0xC8, "ArrayProperty"},
            {"bImportCollision", 0xD8, "BoolProperty"},
            {"bCollision", 0xD9, "BoolProperty"},
            {"bImportCollisionAccordingToMeshName", 0xDA, "BoolProperty"},
            {"bOneConvexHullPerUCX", 0xDB, "BoolProperty"},
            {"Collision", 0xDC, "EnumProperty"},
            {"bForceCollisionPrimitiveGeneration", 0xDD, "BoolProperty"},
            {"bBuildNanite", 0xDE, "BoolProperty"},
            {"NaniteTriangleThreshold", 0xE0, "Int64Property"},
            {"bBuildReversedIndexBuffer", 0xE8, "BoolProperty"},
            {"bGenerateLightmapUVs", 0xE9, "BoolProperty"},
            {"bGenerateDistanceFieldAsIfTwoSided", 0xEA, "BoolProperty"},
            {"bSupportFaceRemap", 0xEB, "BoolProperty"},
            {"MinLightmapResolution", 0xEC, "IntProperty"},
            {"SrcLightmapIndex", 0xF0, "IntProperty"},
            {"DstLightmapIndex", 0xF4, "IntProperty"},
            {"BuildScale3D", 0xF8, "StructProperty"},
            {"DistanceFieldResolutionScale", 0x110, "FloatProperty"},
            {"DistanceFieldReplacementMesh", 0x118, "SoftObjectProperty"},
            {"MaxLumenMeshCards", 0x138, "IntProperty"},
            {"bImportSkeletalMeshes", 0x13C, "BoolProperty"},
            {"SkeletalMeshImportContentType", 0x13D, "EnumProperty"},
            {"LastSkeletalMeshImportContentType", 0x13E, "EnumProperty"},
            {"CombineSkeletalMeshesBehavior", 0x13F, "EnumProperty"},
            {"bImportMorphTargets", 0x140, "BoolProperty"},
            {"bMergeMorphTargetsWithSameName", 0x141, "BoolProperty"},
            {"bImportVertexAttributes", 0x142, "BoolProperty"},
            {"bUpdateSkeletonReferencePose", 0x143, "BoolProperty"},
            {"bCreatePhysicsAsset", 0x144, "BoolProperty"},
            {"PhysicsAsset", 0x148, "SoftObjectProperty"},
            {"bUseHighPrecisionSkinWeights", 0x168, "BoolProperty"},
            {"ThresholdPosition", 0x16C, "FloatProperty"},
            {"ThresholdTangentNormal", 0x170, "FloatProperty"},
            {"ThresholdUV", 0x174, "FloatProperty"},
            {"MorphThresholdPosition", 0x178, "FloatProperty"},
            {"BoneInfluenceLimit", 0x17C, "IntProperty"},
            {"bImportGeometryCaches", 0x180, "BoolProperty"},
            {"bFlattenTracks", 0x181, "BoolProperty"},
            {"CompressedPositionPrecision", 0x184, "FloatProperty"},
            {"CompressedTextureCoordinatesNumberOfBits", 0x188, "IntProperty"},
            {"bOverrideTimeRange", 0x18C, "BoolProperty"},
            {"FrameStart", 0x190, "IntProperty"},
            {"FrameEnd", 0x194, "IntProperty"},
            {"MotionVectors", 0x198, "EnumProperty"},
            {"bApplyConstantTopologyOptimizations", 0x199, "BoolProperty"},
            {"bStoreImportedVertexNumbers", 0x19A, "BoolProperty"},
            {"bOptimizeIndexBuffers", 0x19B, "BoolProperty"},
        }};
    };

    struct InterchangeGenericTexturePipeline
    {
        static constexpr std::string_view Name = "InterchangeGenericTexturePipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PipelineDisplayName = 0xA8;
            static constexpr std::uintptr_t bImportTextures = 0xB8;
            static constexpr std::uintptr_t AssetName = 0xC0;
            static constexpr std::uintptr_t bAllowNonPowerOfTwo = 0xD0;
            static constexpr std::uintptr_t BaseNodeContainer = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PipelineDisplayName", 0xA8, "StrProperty"},
            {"bImportTextures", 0xB8, "BoolProperty"},
            {"AssetName", 0xC0, "StrProperty"},
            {"bAllowNonPowerOfTwo", 0xD0, "BoolProperty"},
            {"BaseNodeContainer", 0xD8, "ObjectProperty"},
        }};
    };

    struct InterchangeMaterialXPipeline
    {
        static constexpr std::string_view Name = "InterchangeMaterialXPipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bVolumetricMaterial = 0xB0;
            static constexpr std::uintptr_t bRecomputeNormals = 0xB1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bVolumetricMaterial", 0xB0, "BoolProperty"},
            {"bRecomputeNormals", 0xB1, "BoolProperty"},
        }};
    };

    struct InterchangePipelineMeshesUtilities
    {
        static constexpr std::string_view Name = "InterchangePipelineMeshesUtilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeSparseVolumeTexturePipeline
    {
        static constexpr std::string_view Name = "InterchangeSparseVolumeTexturePipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PipelineDisplayName = 0xA8;
            static constexpr std::uintptr_t bImportSparseVolumeTextures = 0xB8;
            static constexpr std::uintptr_t bImportAnimatedSparseVolumeTextures = 0xB9;
            static constexpr std::uintptr_t AssetName = 0xC0;
            static constexpr std::uintptr_t BaseNodeContainer = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PipelineDisplayName", 0xA8, "StrProperty"},
            {"bImportSparseVolumeTextures", 0xB8, "BoolProperty"},
            {"bImportAnimatedSparseVolumeTextures", 0xB9, "BoolProperty"},
            {"AssetName", 0xC0, "StrProperty"},
            {"BaseNodeContainer", 0xD0, "ObjectProperty"},
        }};
    };

    struct MaterialXPipelineSettings
    {
        static constexpr std::string_view Name = "MaterialXPipelineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PredefinedSurfaceShaders = 0x30;
            static constexpr std::uintptr_t PredefinedBSDF = 0x40;
            static constexpr std::uintptr_t PredefinedEDF = 0x50;
            static constexpr std::uintptr_t PredefinedVDF = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PredefinedSurfaceShaders", 0x30, "MapProperty"},
            {"PredefinedBSDF", 0x40, "MapProperty"},
            {"PredefinedEDF", 0x50, "MapProperty"},
            {"PredefinedVDF", 0x60, "MapProperty"},
        }};
    };

}
