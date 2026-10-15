/**
 * decamp dumper generated SDK
 * Package: /Script/USDClasses
 */
#pragma once
#include "Basic.h"

// /Script/USDClasses.UsdCombinedPrimMetadata
// Kind: ScriptStruct; super: none
struct FUsdCombinedPrimMetadata
{
public:
    TMap<void*, void*> PrimPathToMetadata; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FUsdCombinedPrimMetadata, PrimPathToMetadata) == 0, "Offset mismatch for FUsdCombinedPrimMetadata::PrimPathToMetadata");

// /Script/USDClasses.UsdMetadataImportOptions
// Kind: ScriptStruct; super: none
struct FUsdMetadataImportOptions
{
public:
    std::uint8_t bCollectMetadata; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCollectFromEntireSubtrees; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCollectOnComponents; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    TArray<void*> BlockedPrefixFilters; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bInvertFilters; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUsdMetadataImportOptions, bCollectMetadata) == 0, "Offset mismatch for FUsdMetadataImportOptions::bCollectMetadata");
static_assert(offsetof(FUsdMetadataImportOptions, bCollectFromEntireSubtrees) == 1, "Offset mismatch for FUsdMetadataImportOptions::bCollectFromEntireSubtrees");
static_assert(offsetof(FUsdMetadataImportOptions, bCollectOnComponents) == 2, "Offset mismatch for FUsdMetadataImportOptions::bCollectOnComponents");
static_assert(offsetof(FUsdMetadataImportOptions, BlockedPrefixFilters) == 8, "Offset mismatch for FUsdMetadataImportOptions::BlockedPrefixFilters");
static_assert(offsetof(FUsdMetadataImportOptions, bInvertFilters) == 24, "Offset mismatch for FUsdMetadataImportOptions::bInvertFilters");

// /Script/USDClasses.UsdMetadataValue
// Kind: ScriptStruct; super: none
struct FUsdMetadataValue
{
public:
    FString TypeName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString StringifiedValue; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FUsdMetadataValue, TypeName) == 0, "Offset mismatch for FUsdMetadataValue::TypeName");
static_assert(offsetof(FUsdMetadataValue, StringifiedValue) == 16, "Offset mismatch for FUsdMetadataValue::StringifiedValue");

// /Script/USDClasses.UsdPrimMetadata
// Kind: ScriptStruct; super: none
struct FUsdPrimMetadata
{
public:
    TMap<void*, void*> MetaData; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FUsdPrimMetadata, MetaData) == 0, "Offset mismatch for FUsdPrimMetadata::MetaData");

// /Script/USDClasses.UsdPrimPathList
// Kind: ScriptStruct; super: none
struct FUsdPrimPathList
{
public:
    TArray<void*> PrimPaths; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUsdPrimPathList, PrimPaths) == 0, "Offset mismatch for FUsdPrimPathList::PrimPaths");

// /Script/USDClasses.UsdStageOptions
// Kind: ScriptStruct; super: none
struct FUsdStageOptions
{
public:
    double MetersPerUnit; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t UpAxis; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUsdStageOptions, MetersPerUnit) == 0, "Offset mismatch for FUsdStageOptions::MetersPerUnit");
static_assert(offsetof(FUsdStageOptions, UpAxis) == 8, "Offset mismatch for FUsdStageOptions::UpAxis");

// /Script/USDClasses.UsdUnrealAssetInfo
// Kind: ScriptStruct; super: none
struct FUsdUnrealAssetInfo
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Identifier; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Version; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString UnrealContentPath; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString UnrealAssetType; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString UnrealExportTime; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString UnrealEngineVersion; // 0x0060 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FUsdUnrealAssetInfo, Name) == 0, "Offset mismatch for FUsdUnrealAssetInfo::Name");
static_assert(offsetof(FUsdUnrealAssetInfo, Identifier) == 16, "Offset mismatch for FUsdUnrealAssetInfo::Identifier");
static_assert(offsetof(FUsdUnrealAssetInfo, Version) == 32, "Offset mismatch for FUsdUnrealAssetInfo::Version");
static_assert(offsetof(FUsdUnrealAssetInfo, UnrealContentPath) == 48, "Offset mismatch for FUsdUnrealAssetInfo::UnrealContentPath");
static_assert(offsetof(FUsdUnrealAssetInfo, UnrealAssetType) == 64, "Offset mismatch for FUsdUnrealAssetInfo::UnrealAssetType");
static_assert(offsetof(FUsdUnrealAssetInfo, UnrealExportTime) == 80, "Offset mismatch for FUsdUnrealAssetInfo::UnrealExportTime");
static_assert(offsetof(FUsdUnrealAssetInfo, UnrealEngineVersion) == 96, "Offset mismatch for FUsdUnrealAssetInfo::UnrealEngineVersion");

// /Script/USDClasses.UsdAnimSequenceAssetImportData
// Kind: Class; super: UsdAssetImportData
class UUsdAnimSequenceAssetImportData
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    float LayerStartOffsetSeconds; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UUsdAnimSequenceAssetImportData, LayerStartOffsetSeconds) == 64, "Offset mismatch for UUsdAnimSequenceAssetImportData::LayerStartOffsetSeconds");

// /Script/USDClasses.UsdAnimSequenceAssetUserData
// Kind: Class; super: UsdAssetUserData
class UUsdAnimSequenceAssetUserData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    float StageStartOffsetSeconds; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float StageScaleSeconds; // 0x005C (Size: 0x4, Type: FloatProperty)
    float LayerStartOffsetSeconds; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UUsdAnimSequenceAssetUserData, StageStartOffsetSeconds) == 88, "Offset mismatch for UUsdAnimSequenceAssetUserData::StageStartOffsetSeconds");
static_assert(offsetof(UUsdAnimSequenceAssetUserData, StageScaleSeconds) == 92, "Offset mismatch for UUsdAnimSequenceAssetUserData::StageScaleSeconds");
static_assert(offsetof(UUsdAnimSequenceAssetUserData, LayerStartOffsetSeconds) == 96, "Offset mismatch for UUsdAnimSequenceAssetUserData::LayerStartOffsetSeconds");

// /Script/USDClasses.UsdAssetCache
// Kind: Class; super: Object
class UUsdAssetCache
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> TransientStorage; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PersistentStorage; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bAllowPersistentStorage; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    std::uint8_t OwnedAssets[0x10]; // 0x0050 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> PrimPathToAssets; // 0x0060 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UUsdAssetCache, TransientStorage) == 40, "Offset mismatch for UUsdAssetCache::TransientStorage");
static_assert(offsetof(UUsdAssetCache, PersistentStorage) == 56, "Offset mismatch for UUsdAssetCache::PersistentStorage");
static_assert(offsetof(UUsdAssetCache, bAllowPersistentStorage) == 72, "Offset mismatch for UUsdAssetCache::bAllowPersistentStorage");
static_assert(offsetof(UUsdAssetCache, OwnedAssets) == 80, "Offset mismatch for UUsdAssetCache::OwnedAssets");
static_assert(offsetof(UUsdAssetCache, PrimPathToAssets) == 96, "Offset mismatch for UUsdAssetCache::PrimPathToAssets");

// /Script/USDClasses.UsdAssetCache2
// Kind: Class; super: Object
class UUsdAssetCache2
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double UnreferencedAssetStorageSizeMB; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double PersistentAssetStorageSizeMB; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    TMap<void*, void*> AssetStorage; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UUsdAssetCache2, UnreferencedAssetStorageSizeMB) == 40, "Offset mismatch for UUsdAssetCache2::UnreferencedAssetStorageSizeMB");
static_assert(offsetof(UUsdAssetCache2, PersistentAssetStorageSizeMB) == 48, "Offset mismatch for UUsdAssetCache2::PersistentAssetStorageSizeMB");
static_assert(offsetof(UUsdAssetCache2, AssetStorage) == 56, "Offset mismatch for UUsdAssetCache2::AssetStorage");

// /Script/USDClasses.UsdAssetCache3
// Kind: Class; super: Object
class UUsdAssetCache3
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AssetDirectory[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t bOnlyHandleAssetsWithinAssetDirectory; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    TMap<void*, void*> HashToAssetPaths; // 0x0040 (Size: 0x10, Type: MapProperty)
    std::uint8_t bCleanUpUnreferencedAssets; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0051
    TMap<void*, void*> AssetPathToHashes; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TransientObjectStorage; // 0x0068 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UUsdAssetCache3, AssetDirectory) == 40, "Offset mismatch for UUsdAssetCache3::AssetDirectory");
static_assert(offsetof(UUsdAssetCache3, bOnlyHandleAssetsWithinAssetDirectory) == 56, "Offset mismatch for UUsdAssetCache3::bOnlyHandleAssetsWithinAssetDirectory");
static_assert(offsetof(UUsdAssetCache3, HashToAssetPaths) == 64, "Offset mismatch for UUsdAssetCache3::HashToAssetPaths");
static_assert(offsetof(UUsdAssetCache3, bCleanUpUnreferencedAssets) == 80, "Offset mismatch for UUsdAssetCache3::bCleanUpUnreferencedAssets");
static_assert(offsetof(UUsdAssetCache3, AssetPathToHashes) == 88, "Offset mismatch for UUsdAssetCache3::AssetPathToHashes");
static_assert(offsetof(UUsdAssetCache3, TransientObjectStorage) == 104, "Offset mismatch for UUsdAssetCache3::TransientObjectStorage");

// /Script/USDClasses.UsdAssetImportData
// Kind: Class; super: AssetImportData
class UUsdAssetImportData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString PrimPath; // 0x0028 (Size: 0x10, Type: StrProperty)
    void* ImportOptions; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUsdAssetImportData, PrimPath) == 40, "Offset mismatch for UUsdAssetImportData::PrimPath");
static_assert(offsetof(UUsdAssetImportData, ImportOptions) == 56, "Offset mismatch for UUsdAssetImportData::ImportOptions");

// /Script/USDClasses.UsdAssetUserData
// Kind: Class; super: AssetUserData
class UUsdAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PrimPaths; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> StageIdentifierToMetadata; // 0x0038 (Size: 0x10, Type: MapProperty)
    FString OriginalHash; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UUsdAssetUserData, PrimPaths) == 40, "Offset mismatch for UUsdAssetUserData::PrimPaths");
static_assert(offsetof(UUsdAssetUserData, StageIdentifierToMetadata) == 56, "Offset mismatch for UUsdAssetUserData::StageIdentifierToMetadata");
static_assert(offsetof(UUsdAssetUserData, OriginalHash) == 72, "Offset mismatch for UUsdAssetUserData::OriginalHash");

// /Script/USDClasses.UsdDrawModeComponent
// Kind: Class; super: PrimitiveComponent
class UUsdDrawModeComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t BoundsMin[0x18]; // 0x0570 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundsMax[0x18]; // 0x0588 (Size: 0x18, Type: StructProperty)
    std::uint8_t DrawMode; // 0x05A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x05A1
    std::uint8_t BoundsColor[0x10]; // 0x05A4 (Size: 0x10, Type: StructProperty)
    std::uint8_t CardGeometry; // 0x05B4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x05B5
    void* CardTextureXPos; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    void* CardTextureYPos; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* CardTextureZPos; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    void* CardTextureXNeg; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* CardTextureYNeg; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    void* CardTextureZNeg; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialInstances; // 0x05E8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t AuthoredFaces; // 0x05F8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UUsdDrawModeComponent, BoundsMin) == 1392, "Offset mismatch for UUsdDrawModeComponent::BoundsMin");
static_assert(offsetof(UUsdDrawModeComponent, BoundsMax) == 1416, "Offset mismatch for UUsdDrawModeComponent::BoundsMax");
static_assert(offsetof(UUsdDrawModeComponent, DrawMode) == 1440, "Offset mismatch for UUsdDrawModeComponent::DrawMode");
static_assert(offsetof(UUsdDrawModeComponent, BoundsColor) == 1444, "Offset mismatch for UUsdDrawModeComponent::BoundsColor");
static_assert(offsetof(UUsdDrawModeComponent, CardGeometry) == 1460, "Offset mismatch for UUsdDrawModeComponent::CardGeometry");
static_assert(offsetof(UUsdDrawModeComponent, CardTextureXPos) == 1464, "Offset mismatch for UUsdDrawModeComponent::CardTextureXPos");
static_assert(offsetof(UUsdDrawModeComponent, CardTextureYPos) == 1472, "Offset mismatch for UUsdDrawModeComponent::CardTextureYPos");
static_assert(offsetof(UUsdDrawModeComponent, CardTextureZPos) == 1480, "Offset mismatch for UUsdDrawModeComponent::CardTextureZPos");
static_assert(offsetof(UUsdDrawModeComponent, CardTextureXNeg) == 1488, "Offset mismatch for UUsdDrawModeComponent::CardTextureXNeg");
static_assert(offsetof(UUsdDrawModeComponent, CardTextureYNeg) == 1496, "Offset mismatch for UUsdDrawModeComponent::CardTextureYNeg");
static_assert(offsetof(UUsdDrawModeComponent, CardTextureZNeg) == 1504, "Offset mismatch for UUsdDrawModeComponent::CardTextureZNeg");
static_assert(offsetof(UUsdDrawModeComponent, MaterialInstances) == 1512, "Offset mismatch for UUsdDrawModeComponent::MaterialInstances");
static_assert(offsetof(UUsdDrawModeComponent, AuthoredFaces) == 1528, "Offset mismatch for UUsdDrawModeComponent::AuthoredFaces");

// /Script/USDClasses.UsdGeometryCacheAssetUserData
// Kind: Class; super: UsdMeshAssetUserData
class UUsdGeometryCacheAssetUserData
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float StageStartOffsetSeconds; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float LayerStartOffsetSeconds; // 0x007C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UUsdGeometryCacheAssetUserData, StageStartOffsetSeconds) == 120, "Offset mismatch for UUsdGeometryCacheAssetUserData::StageStartOffsetSeconds");
static_assert(offsetof(UUsdGeometryCacheAssetUserData, LayerStartOffsetSeconds) == 124, "Offset mismatch for UUsdGeometryCacheAssetUserData::LayerStartOffsetSeconds");

// /Script/USDClasses.UsdLevelSequenceAssetUserData
// Kind: Class; super: AssetUserData
class UUsdLevelSequenceAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LastCheckedSignature[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    TSet<void*> HandledBindingGuids; // 0x0038 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UUsdLevelSequenceAssetUserData, LastCheckedSignature) == 40, "Offset mismatch for UUsdLevelSequenceAssetUserData::LastCheckedSignature");
static_assert(offsetof(UUsdLevelSequenceAssetUserData, HandledBindingGuids) == 56, "Offset mismatch for UUsdLevelSequenceAssetUserData::HandledBindingGuids");

// /Script/USDClasses.UsdMaterialAssetUserData
// Kind: Class; super: UsdAssetUserData
class UUsdMaterialAssetUserData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TMap<void*, void*> ParameterToPrimvar; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PrimvarToUVIndex; // 0x0068 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UUsdMaterialAssetUserData, ParameterToPrimvar) == 88, "Offset mismatch for UUsdMaterialAssetUserData::ParameterToPrimvar");
static_assert(offsetof(UUsdMaterialAssetUserData, PrimvarToUVIndex) == 104, "Offset mismatch for UUsdMaterialAssetUserData::PrimvarToUVIndex");

// /Script/USDClasses.UsdMeshAssetImportData
// Kind: Class; super: UsdAssetImportData
class UUsdMeshAssetImportData
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TMap<void*, void*> MaterialSlotToPrimPaths; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UUsdMeshAssetImportData, MaterialSlotToPrimPaths) == 64, "Offset mismatch for UUsdMeshAssetImportData::MaterialSlotToPrimPaths");

// /Script/USDClasses.UsdMeshAssetUserData
// Kind: Class; super: UsdAssetUserData
class UUsdMeshAssetUserData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TMap<void*, void*> MaterialSlotToPrimPaths; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PrimvarToUVIndex; // 0x0068 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UUsdMeshAssetUserData, MaterialSlotToPrimPaths) == 88, "Offset mismatch for UUsdMeshAssetUserData::MaterialSlotToPrimPaths");
static_assert(offsetof(UUsdMeshAssetUserData, PrimvarToUVIndex) == 104, "Offset mismatch for UUsdMeshAssetUserData::PrimvarToUVIndex");

// /Script/USDClasses.UsdProjectSettings
// Kind: Class; super: DeveloperSettings
class UUsdProjectSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> AdditionalPluginDirectories; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DefaultResolverSearchPath; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AdditionalMaterialPurposes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AdditionalCustomSchemaNames; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bLogUsdSdkErrors; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOptimizeUsdLog; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0072
    std::uint8_t DefaultAssetCache[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t bShowCreateDefaultAssetCacheDialog; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowConfirmationWhenClearingLayers; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowConfirmationWhenMutingDirtyLayers; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowConfirmationWhenReloadingDirtyLayers; // 0x0093 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowOverriddenOpinionsWarning; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EditInInstanceableBehavior; // 0x0095 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ReferencerTypeHandling; // 0x0096 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShowWarningOnIncompleteDuplication; // 0x0097 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowTransformOnCameraComponentWarning; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowTransformTrackOnCameraComponentWarning; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSubsectionSnappingWarning; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowInheritedVisibilityWarning; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowSaveLayersDialogWhenSaving; // 0x009C (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShowSaveLayersDialogWhenClosing; // 0x009D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x009E
    std::uint8_t DefaultSoundAttenuation[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferenceDefaultSVTMaterial[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferenceModelCardTextureMaterial[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferencePreviewSurfaceMaterial[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferencePreviewSurfaceTranslucentMaterial[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferencePreviewSurfaceTwoSidedMaterial[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferencePreviewSurfaceTranslucentTwoSidedMaterial[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferencePreviewSurfaceVTMaterial[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferencePreviewSurfaceTranslucentVTMaterial[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferencePreviewSurfaceTwoSidedVTMaterial[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferenceSubstratePreviewSurfaceMaterial[0x18]; // 0x01A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferenceSubstratePreviewSurfaceVTMaterial[0x18]; // 0x01C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferenceDisplayColorMaterial[0x18]; // 0x01D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferenceDisplayColorAndOpacityMaterial[0x18]; // 0x01F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferenceDisplayColorTwoSidedMaterial[0x18]; // 0x0208 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferenceDisplayColorAndOpacityTwoSidedMaterial[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUsdProjectSettings, AdditionalPluginDirectories) == 48, "Offset mismatch for UUsdProjectSettings::AdditionalPluginDirectories");
static_assert(offsetof(UUsdProjectSettings, DefaultResolverSearchPath) == 64, "Offset mismatch for UUsdProjectSettings::DefaultResolverSearchPath");
static_assert(offsetof(UUsdProjectSettings, AdditionalMaterialPurposes) == 80, "Offset mismatch for UUsdProjectSettings::AdditionalMaterialPurposes");
static_assert(offsetof(UUsdProjectSettings, AdditionalCustomSchemaNames) == 96, "Offset mismatch for UUsdProjectSettings::AdditionalCustomSchemaNames");
static_assert(offsetof(UUsdProjectSettings, bLogUsdSdkErrors) == 112, "Offset mismatch for UUsdProjectSettings::bLogUsdSdkErrors");
static_assert(offsetof(UUsdProjectSettings, bOptimizeUsdLog) == 113, "Offset mismatch for UUsdProjectSettings::bOptimizeUsdLog");
static_assert(offsetof(UUsdProjectSettings, DefaultAssetCache) == 120, "Offset mismatch for UUsdProjectSettings::DefaultAssetCache");
static_assert(offsetof(UUsdProjectSettings, bShowCreateDefaultAssetCacheDialog) == 144, "Offset mismatch for UUsdProjectSettings::bShowCreateDefaultAssetCacheDialog");
static_assert(offsetof(UUsdProjectSettings, bShowConfirmationWhenClearingLayers) == 145, "Offset mismatch for UUsdProjectSettings::bShowConfirmationWhenClearingLayers");
static_assert(offsetof(UUsdProjectSettings, bShowConfirmationWhenMutingDirtyLayers) == 146, "Offset mismatch for UUsdProjectSettings::bShowConfirmationWhenMutingDirtyLayers");
static_assert(offsetof(UUsdProjectSettings, bShowConfirmationWhenReloadingDirtyLayers) == 147, "Offset mismatch for UUsdProjectSettings::bShowConfirmationWhenReloadingDirtyLayers");
static_assert(offsetof(UUsdProjectSettings, bShowOverriddenOpinionsWarning) == 148, "Offset mismatch for UUsdProjectSettings::bShowOverriddenOpinionsWarning");
static_assert(offsetof(UUsdProjectSettings, EditInInstanceableBehavior) == 149, "Offset mismatch for UUsdProjectSettings::EditInInstanceableBehavior");
static_assert(offsetof(UUsdProjectSettings, ReferencerTypeHandling) == 150, "Offset mismatch for UUsdProjectSettings::ReferencerTypeHandling");
static_assert(offsetof(UUsdProjectSettings, bShowWarningOnIncompleteDuplication) == 151, "Offset mismatch for UUsdProjectSettings::bShowWarningOnIncompleteDuplication");
static_assert(offsetof(UUsdProjectSettings, bShowTransformOnCameraComponentWarning) == 152, "Offset mismatch for UUsdProjectSettings::bShowTransformOnCameraComponentWarning");
static_assert(offsetof(UUsdProjectSettings, bShowTransformTrackOnCameraComponentWarning) == 153, "Offset mismatch for UUsdProjectSettings::bShowTransformTrackOnCameraComponentWarning");
static_assert(offsetof(UUsdProjectSettings, bShowSubsectionSnappingWarning) == 154, "Offset mismatch for UUsdProjectSettings::bShowSubsectionSnappingWarning");
static_assert(offsetof(UUsdProjectSettings, bShowInheritedVisibilityWarning) == 155, "Offset mismatch for UUsdProjectSettings::bShowInheritedVisibilityWarning");
static_assert(offsetof(UUsdProjectSettings, ShowSaveLayersDialogWhenSaving) == 156, "Offset mismatch for UUsdProjectSettings::ShowSaveLayersDialogWhenSaving");
static_assert(offsetof(UUsdProjectSettings, ShowSaveLayersDialogWhenClosing) == 157, "Offset mismatch for UUsdProjectSettings::ShowSaveLayersDialogWhenClosing");
static_assert(offsetof(UUsdProjectSettings, DefaultSoundAttenuation) == 160, "Offset mismatch for UUsdProjectSettings::DefaultSoundAttenuation");
static_assert(offsetof(UUsdProjectSettings, ReferenceDefaultSVTMaterial) == 184, "Offset mismatch for UUsdProjectSettings::ReferenceDefaultSVTMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferenceModelCardTextureMaterial) == 208, "Offset mismatch for UUsdProjectSettings::ReferenceModelCardTextureMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferencePreviewSurfaceMaterial) == 232, "Offset mismatch for UUsdProjectSettings::ReferencePreviewSurfaceMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentMaterial) == 256, "Offset mismatch for UUsdProjectSettings::ReferencePreviewSurfaceTranslucentMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferencePreviewSurfaceTwoSidedMaterial) == 280, "Offset mismatch for UUsdProjectSettings::ReferencePreviewSurfaceTwoSidedMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentTwoSidedMaterial) == 304, "Offset mismatch for UUsdProjectSettings::ReferencePreviewSurfaceTranslucentTwoSidedMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferencePreviewSurfaceVTMaterial) == 328, "Offset mismatch for UUsdProjectSettings::ReferencePreviewSurfaceVTMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentVTMaterial) == 352, "Offset mismatch for UUsdProjectSettings::ReferencePreviewSurfaceTranslucentVTMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferencePreviewSurfaceTwoSidedVTMaterial) == 376, "Offset mismatch for UUsdProjectSettings::ReferencePreviewSurfaceTwoSidedVTMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial) == 400, "Offset mismatch for UUsdProjectSettings::ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferenceSubstratePreviewSurfaceMaterial) == 424, "Offset mismatch for UUsdProjectSettings::ReferenceSubstratePreviewSurfaceMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferenceSubstratePreviewSurfaceVTMaterial) == 448, "Offset mismatch for UUsdProjectSettings::ReferenceSubstratePreviewSurfaceVTMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferenceDisplayColorMaterial) == 472, "Offset mismatch for UUsdProjectSettings::ReferenceDisplayColorMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferenceDisplayColorAndOpacityMaterial) == 496, "Offset mismatch for UUsdProjectSettings::ReferenceDisplayColorAndOpacityMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferenceDisplayColorTwoSidedMaterial) == 520, "Offset mismatch for UUsdProjectSettings::ReferenceDisplayColorTwoSidedMaterial");
static_assert(offsetof(UUsdProjectSettings, ReferenceDisplayColorAndOpacityTwoSidedMaterial) == 544, "Offset mismatch for UUsdProjectSettings::ReferenceDisplayColorAndOpacityTwoSidedMaterial");

// /Script/USDClasses.UsdReferenceOptions
// Kind: Class; super: Object
class UUsdReferenceOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInternalReference; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t TargetFile[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseDefaultPrim; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    FString TargetPrimPath; // 0x0048 (Size: 0x10, Type: StrProperty)
    float TimeCodeOffset; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float TimeCodeScale; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UUsdReferenceOptions, bInternalReference) == 40, "Offset mismatch for UUsdReferenceOptions::bInternalReference");
static_assert(offsetof(UUsdReferenceOptions, TargetFile) == 48, "Offset mismatch for UUsdReferenceOptions::TargetFile");
static_assert(offsetof(UUsdReferenceOptions, bUseDefaultPrim) == 64, "Offset mismatch for UUsdReferenceOptions::bUseDefaultPrim");
static_assert(offsetof(UUsdReferenceOptions, TargetPrimPath) == 72, "Offset mismatch for UUsdReferenceOptions::TargetPrimPath");
static_assert(offsetof(UUsdReferenceOptions, TimeCodeOffset) == 88, "Offset mismatch for UUsdReferenceOptions::TimeCodeOffset");
static_assert(offsetof(UUsdReferenceOptions, TimeCodeScale) == 92, "Offset mismatch for UUsdReferenceOptions::TimeCodeScale");

// /Script/USDClasses.UsdSparseVolumeTextureAssetUserData
// Kind: Class; super: UsdAssetUserData
class UUsdSparseVolumeTextureAssetUserData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> SourceOpenVDBAssetPrimPaths; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TimeSamplePathTimeCodes; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TimeSamplePathIndices; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TimeSamplePaths; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUsdSparseVolumeTextureAssetUserData, SourceOpenVDBAssetPrimPaths) == 88, "Offset mismatch for UUsdSparseVolumeTextureAssetUserData::SourceOpenVDBAssetPrimPaths");
static_assert(offsetof(UUsdSparseVolumeTextureAssetUserData, TimeSamplePathTimeCodes) == 104, "Offset mismatch for UUsdSparseVolumeTextureAssetUserData::TimeSamplePathTimeCodes");
static_assert(offsetof(UUsdSparseVolumeTextureAssetUserData, TimeSamplePathIndices) == 120, "Offset mismatch for UUsdSparseVolumeTextureAssetUserData::TimeSamplePathIndices");
static_assert(offsetof(UUsdSparseVolumeTextureAssetUserData, TimeSamplePaths) == 136, "Offset mismatch for UUsdSparseVolumeTextureAssetUserData::TimeSamplePaths");
