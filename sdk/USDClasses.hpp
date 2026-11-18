#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::USDClasses
{
    struct UsdAnimSequenceAssetImportData
    {
        static constexpr std::string_view Name = "UsdAnimSequenceAssetImportData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UsdAssetImportData";
        struct Offsets
        {
            static constexpr std::uintptr_t LayerStartOffsetSeconds = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LayerStartOffsetSeconds", 0x40, "FloatProperty"},
        }};
    };

    struct UsdAnimSequenceAssetUserData
    {
        static constexpr std::string_view Name = "UsdAnimSequenceAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UsdAssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t StageStartOffsetSeconds = 0x58;
            static constexpr std::uintptr_t StageScaleSeconds = 0x5C;
            static constexpr std::uintptr_t LayerStartOffsetSeconds = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StageStartOffsetSeconds", 0x58, "FloatProperty"},
            {"StageScaleSeconds", 0x5C, "FloatProperty"},
            {"LayerStartOffsetSeconds", 0x60, "FloatProperty"},
        }};
    };

    struct UsdAssetCache
    {
        static constexpr std::string_view Name = "UsdAssetCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TransientStorage = 0x28;
            static constexpr std::uintptr_t PersistentStorage = 0x38;
            static constexpr std::uintptr_t bAllowPersistentStorage = 0x48;
            static constexpr std::uintptr_t OwnedAssets = 0x50;
            static constexpr std::uintptr_t PrimPathToAssets = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TransientStorage", 0x28, "MapProperty"},
            {"PersistentStorage", 0x38, "MapProperty"},
            {"bAllowPersistentStorage", 0x48, "BoolProperty"},
            {"OwnedAssets", 0x50, "SetProperty"},
            {"PrimPathToAssets", 0x60, "MapProperty"},
        }};
    };

    struct UsdAssetCache2
    {
        static constexpr std::string_view Name = "UsdAssetCache2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UnreferencedAssetStorageSizeMB = 0x28;
            static constexpr std::uintptr_t PersistentAssetStorageSizeMB = 0x30;
            static constexpr std::uintptr_t AssetStorage = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UnreferencedAssetStorageSizeMB", 0x28, "DoubleProperty"},
            {"PersistentAssetStorageSizeMB", 0x30, "DoubleProperty"},
            {"AssetStorage", 0x38, "MapProperty"},
        }};
    };

    struct UsdAssetCache3
    {
        static constexpr std::string_view Name = "UsdAssetCache3";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetDirectory = 0x28;
            static constexpr std::uintptr_t bOnlyHandleAssetsWithinAssetDirectory = 0x38;
            static constexpr std::uintptr_t HashToAssetPaths = 0x40;
            static constexpr std::uintptr_t bCleanUpUnreferencedAssets = 0x50;
            static constexpr std::uintptr_t AssetPathToHashes = 0x58;
            static constexpr std::uintptr_t TransientObjectStorage = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AssetDirectory", 0x28, "StructProperty"},
            {"bOnlyHandleAssetsWithinAssetDirectory", 0x38, "BoolProperty"},
            {"HashToAssetPaths", 0x40, "MapProperty"},
            {"bCleanUpUnreferencedAssets", 0x50, "BoolProperty"},
            {"AssetPathToHashes", 0x58, "MapProperty"},
            {"TransientObjectStorage", 0x68, "MapProperty"},
        }};
    };

    struct UsdAssetImportData
    {
        static constexpr std::string_view Name = "UsdAssetImportData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetImportData";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimPath = 0x28;
            static constexpr std::uintptr_t ImportOptions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PrimPath", 0x28, "StrProperty"},
            {"ImportOptions", 0x38, "ObjectProperty"},
        }};
    };

    struct UsdAssetUserData
    {
        static constexpr std::string_view Name = "UsdAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimPaths = 0x28;
            static constexpr std::uintptr_t StageIdentifierToMetadata = 0x38;
            static constexpr std::uintptr_t OriginalHash = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PrimPaths", 0x28, "ArrayProperty"},
            {"StageIdentifierToMetadata", 0x38, "MapProperty"},
            {"OriginalHash", 0x48, "StrProperty"},
        }};
    };

    struct UsdDrawModeComponent
    {
        static constexpr std::string_view Name = "UsdDrawModeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundsMin = 0x560;
            static constexpr std::uintptr_t BoundsMax = 0x578;
            static constexpr std::uintptr_t DrawMode = 0x590;
            static constexpr std::uintptr_t BoundsColor = 0x594;
            static constexpr std::uintptr_t CardGeometry = 0x5A4;
            static constexpr std::uintptr_t CardTextureXPos = 0x5A8;
            static constexpr std::uintptr_t CardTextureYPos = 0x5B0;
            static constexpr std::uintptr_t CardTextureZPos = 0x5B8;
            static constexpr std::uintptr_t CardTextureXNeg = 0x5C0;
            static constexpr std::uintptr_t CardTextureYNeg = 0x5C8;
            static constexpr std::uintptr_t CardTextureZNeg = 0x5D0;
            static constexpr std::uintptr_t MaterialInstances = 0x5D8;
            static constexpr std::uintptr_t AuthoredFaces = 0x5E8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"BoundsMin", 0x560, "StructProperty"},
            {"BoundsMax", 0x578, "StructProperty"},
            {"DrawMode", 0x590, "EnumProperty"},
            {"BoundsColor", 0x594, "StructProperty"},
            {"CardGeometry", 0x5A4, "EnumProperty"},
            {"CardTextureXPos", 0x5A8, "ObjectProperty"},
            {"CardTextureYPos", 0x5B0, "ObjectProperty"},
            {"CardTextureZPos", 0x5B8, "ObjectProperty"},
            {"CardTextureXNeg", 0x5C0, "ObjectProperty"},
            {"CardTextureYNeg", 0x5C8, "ObjectProperty"},
            {"CardTextureZNeg", 0x5D0, "ObjectProperty"},
            {"MaterialInstances", 0x5D8, "ArrayProperty"},
            {"AuthoredFaces", 0x5E8, "IntProperty"},
        }};
    };

    struct UsdGeometryCacheAssetUserData
    {
        static constexpr std::string_view Name = "UsdGeometryCacheAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UsdMeshAssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t StageStartOffsetSeconds = 0x78;
            static constexpr std::uintptr_t LayerStartOffsetSeconds = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StageStartOffsetSeconds", 0x78, "FloatProperty"},
            {"LayerStartOffsetSeconds", 0x7C, "FloatProperty"},
        }};
    };

    struct UsdLevelSequenceAssetUserData
    {
        static constexpr std::string_view Name = "UsdLevelSequenceAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t LastCheckedSignature = 0x28;
            static constexpr std::uintptr_t HandledBindingGuids = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LastCheckedSignature", 0x28, "StructProperty"},
            {"HandledBindingGuids", 0x38, "SetProperty"},
        }};
    };

    struct UsdMaterialAssetUserData
    {
        static constexpr std::string_view Name = "UsdMaterialAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UsdAssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterToPrimvar = 0x58;
            static constexpr std::uintptr_t PrimvarToUVIndex = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParameterToPrimvar", 0x58, "MapProperty"},
            {"PrimvarToUVIndex", 0x68, "MapProperty"},
        }};
    };

    struct UsdMeshAssetImportData
    {
        static constexpr std::string_view Name = "UsdMeshAssetImportData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UsdAssetImportData";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialSlotToPrimPaths = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialSlotToPrimPaths", 0x40, "MapProperty"},
        }};
    };

    struct UsdMeshAssetUserData
    {
        static constexpr std::string_view Name = "UsdMeshAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UsdAssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialSlotToPrimPaths = 0x58;
            static constexpr std::uintptr_t PrimvarToUVIndex = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaterialSlotToPrimPaths", 0x58, "MapProperty"},
            {"PrimvarToUVIndex", 0x68, "MapProperty"},
        }};
    };

    struct UsdProjectSettings
    {
        static constexpr std::string_view Name = "UsdProjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalPluginDirectories = 0x30;
            static constexpr std::uintptr_t DefaultResolverSearchPath = 0x40;
            static constexpr std::uintptr_t AdditionalMaterialPurposes = 0x50;
            static constexpr std::uintptr_t AdditionalCustomSchemaNames = 0x60;
            static constexpr std::uintptr_t bLogUsdSdkErrors = 0x70;
            static constexpr std::uintptr_t bOptimizeUsdLog = 0x71;
            static constexpr std::uintptr_t DefaultAssetCache = 0x78;
            static constexpr std::uintptr_t bShowCreateDefaultAssetCacheDialog = 0x90;
            static constexpr std::uintptr_t bShowConfirmationWhenClearingLayers = 0x91;
            static constexpr std::uintptr_t bShowConfirmationWhenMutingDirtyLayers = 0x92;
            static constexpr std::uintptr_t bShowConfirmationWhenReloadingDirtyLayers = 0x93;
            static constexpr std::uintptr_t bShowOverriddenOpinionsWarning = 0x94;
            static constexpr std::uintptr_t EditInInstanceableBehavior = 0x95;
            static constexpr std::uintptr_t ReferencerTypeHandling = 0x96;
            static constexpr std::uintptr_t bShowWarningOnIncompleteDuplication = 0x97;
            static constexpr std::uintptr_t bShowTransformOnCameraComponentWarning = 0x98;
            static constexpr std::uintptr_t bShowTransformTrackOnCameraComponentWarning = 0x99;
            static constexpr std::uintptr_t bShowSubsectionSnappingWarning = 0x9A;
            static constexpr std::uintptr_t bShowInheritedVisibilityWarning = 0x9B;
            static constexpr std::uintptr_t ShowSaveLayersDialogWhenSaving = 0x9C;
            static constexpr std::uintptr_t ShowSaveLayersDialogWhenClosing = 0x9D;
            static constexpr std::uintptr_t DefaultSoundAttenuation = 0xA0;
            static constexpr std::uintptr_t ReferenceDefaultSVTMaterial = 0xB8;
            static constexpr std::uintptr_t ReferenceModelCardTextureMaterial = 0xD0;
            static constexpr std::uintptr_t ReferencePreviewSurfaceMaterial = 0xE8;
            static constexpr std::uintptr_t ReferencePreviewSurfaceTranslucentMaterial = 0x100;
            static constexpr std::uintptr_t ReferencePreviewSurfaceTwoSidedMaterial = 0x118;
            static constexpr std::uintptr_t ReferencePreviewSurfaceTranslucentTwoSidedMaterial = 0x130;
            static constexpr std::uintptr_t ReferencePreviewSurfaceVTMaterial = 0x148;
            static constexpr std::uintptr_t ReferencePreviewSurfaceTranslucentVTMaterial = 0x160;
            static constexpr std::uintptr_t ReferencePreviewSurfaceTwoSidedVTMaterial = 0x178;
            static constexpr std::uintptr_t ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial = 0x190;
            static constexpr std::uintptr_t ReferenceSubstratePreviewSurfaceMaterial = 0x1A8;
            static constexpr std::uintptr_t ReferenceSubstratePreviewSurfaceVTMaterial = 0x1C0;
            static constexpr std::uintptr_t ReferenceDisplayColorMaterial = 0x1D8;
            static constexpr std::uintptr_t ReferenceDisplayColorAndOpacityMaterial = 0x1F0;
            static constexpr std::uintptr_t ReferenceDisplayColorTwoSidedMaterial = 0x208;
            static constexpr std::uintptr_t ReferenceDisplayColorAndOpacityTwoSidedMaterial = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"AdditionalPluginDirectories", 0x30, "ArrayProperty"},
            {"DefaultResolverSearchPath", 0x40, "ArrayProperty"},
            {"AdditionalMaterialPurposes", 0x50, "ArrayProperty"},
            {"AdditionalCustomSchemaNames", 0x60, "ArrayProperty"},
            {"bLogUsdSdkErrors", 0x70, "BoolProperty"},
            {"bOptimizeUsdLog", 0x71, "BoolProperty"},
            {"DefaultAssetCache", 0x78, "StructProperty"},
            {"bShowCreateDefaultAssetCacheDialog", 0x90, "BoolProperty"},
            {"bShowConfirmationWhenClearingLayers", 0x91, "BoolProperty"},
            {"bShowConfirmationWhenMutingDirtyLayers", 0x92, "BoolProperty"},
            {"bShowConfirmationWhenReloadingDirtyLayers", 0x93, "BoolProperty"},
            {"bShowOverriddenOpinionsWarning", 0x94, "BoolProperty"},
            {"EditInInstanceableBehavior", 0x95, "EnumProperty"},
            {"ReferencerTypeHandling", 0x96, "EnumProperty"},
            {"bShowWarningOnIncompleteDuplication", 0x97, "BoolProperty"},
            {"bShowTransformOnCameraComponentWarning", 0x98, "BoolProperty"},
            {"bShowTransformTrackOnCameraComponentWarning", 0x99, "BoolProperty"},
            {"bShowSubsectionSnappingWarning", 0x9A, "BoolProperty"},
            {"bShowInheritedVisibilityWarning", 0x9B, "BoolProperty"},
            {"ShowSaveLayersDialogWhenSaving", 0x9C, "EnumProperty"},
            {"ShowSaveLayersDialogWhenClosing", 0x9D, "EnumProperty"},
            {"DefaultSoundAttenuation", 0xA0, "StructProperty"},
            {"ReferenceDefaultSVTMaterial", 0xB8, "StructProperty"},
            {"ReferenceModelCardTextureMaterial", 0xD0, "StructProperty"},
            {"ReferencePreviewSurfaceMaterial", 0xE8, "StructProperty"},
            {"ReferencePreviewSurfaceTranslucentMaterial", 0x100, "StructProperty"},
            {"ReferencePreviewSurfaceTwoSidedMaterial", 0x118, "StructProperty"},
            {"ReferencePreviewSurfaceTranslucentTwoSidedMaterial", 0x130, "StructProperty"},
            {"ReferencePreviewSurfaceVTMaterial", 0x148, "StructProperty"},
            {"ReferencePreviewSurfaceTranslucentVTMaterial", 0x160, "StructProperty"},
            {"ReferencePreviewSurfaceTwoSidedVTMaterial", 0x178, "StructProperty"},
            {"ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial", 0x190, "StructProperty"},
            {"ReferenceSubstratePreviewSurfaceMaterial", 0x1A8, "StructProperty"},
            {"ReferenceSubstratePreviewSurfaceVTMaterial", 0x1C0, "StructProperty"},
            {"ReferenceDisplayColorMaterial", 0x1D8, "StructProperty"},
            {"ReferenceDisplayColorAndOpacityMaterial", 0x1F0, "StructProperty"},
            {"ReferenceDisplayColorTwoSidedMaterial", 0x208, "StructProperty"},
            {"ReferenceDisplayColorAndOpacityTwoSidedMaterial", 0x220, "StructProperty"},
        }};
    };

    struct UsdReferenceOptions
    {
        static constexpr std::string_view Name = "UsdReferenceOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bInternalReference = 0x28;
            static constexpr std::uintptr_t TargetFile = 0x30;
            static constexpr std::uintptr_t bUseDefaultPrim = 0x40;
            static constexpr std::uintptr_t TargetPrimPath = 0x48;
            static constexpr std::uintptr_t TimeCodeOffset = 0x58;
            static constexpr std::uintptr_t TimeCodeScale = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bInternalReference", 0x28, "BoolProperty"},
            {"TargetFile", 0x30, "StructProperty"},
            {"bUseDefaultPrim", 0x40, "BoolProperty"},
            {"TargetPrimPath", 0x48, "StrProperty"},
            {"TimeCodeOffset", 0x58, "FloatProperty"},
            {"TimeCodeScale", 0x5C, "FloatProperty"},
        }};
    };

    struct UsdSparseVolumeTextureAssetUserData
    {
        static constexpr std::string_view Name = "UsdSparseVolumeTextureAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UsdAssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceOpenVDBAssetPrimPaths = 0x58;
            static constexpr std::uintptr_t TimeSamplePathTimeCodes = 0x68;
            static constexpr std::uintptr_t TimeSamplePathIndices = 0x78;
            static constexpr std::uintptr_t TimeSamplePaths = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SourceOpenVDBAssetPrimPaths", 0x58, "ArrayProperty"},
            {"TimeSamplePathTimeCodes", 0x68, "ArrayProperty"},
            {"TimeSamplePathIndices", 0x78, "ArrayProperty"},
            {"TimeSamplePaths", 0x88, "ArrayProperty"},
        }};
    };

}
