/**
 * decamp dumper generated SDK
 * Package: /Script/InterchangePipelines
 */
#pragma once
#include "Basic.h"

// /Script/InterchangePipelines.InterchangeMeshGeometry
// Kind: ScriptStruct; super: none
struct FInterchangeMeshGeometry
{
public:
    void* MeshBaseNode; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> UidsOfInstancingNodes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AttachedSocketUids; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasTransformAnimationTrack; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    TArray<void*> UidsOfConsumingAssetNodes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInterchangeMeshGeometry, MeshBaseNode) == 0, "Offset mismatch for FInterchangeMeshGeometry::MeshBaseNode");
static_assert(offsetof(FInterchangeMeshGeometry, UidsOfInstancingNodes) == 8, "Offset mismatch for FInterchangeMeshGeometry::UidsOfInstancingNodes");
static_assert(offsetof(FInterchangeMeshGeometry, AttachedSocketUids) == 24, "Offset mismatch for FInterchangeMeshGeometry::AttachedSocketUids");
static_assert(offsetof(FInterchangeMeshGeometry, bHasTransformAnimationTrack) == 40, "Offset mismatch for FInterchangeMeshGeometry::bHasTransformAnimationTrack");
static_assert(offsetof(FInterchangeMeshGeometry, UidsOfConsumingAssetNodes) == 48, "Offset mismatch for FInterchangeMeshGeometry::UidsOfConsumingAssetNodes");

// /Script/InterchangePipelines.InterchangeMeshInstance
// Kind: ScriptStruct; super: none
struct FInterchangeMeshInstance
{
public:
    std::uint8_t ReferenceMeshSkinComposition; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bReferenceMorphTarget; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasMorphTargets; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGeometryCache; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTransformAnimationTrack; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    void* InstancingNode; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FString ReferencingMeshGeometryUID; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FInterchangeMeshInstance, ReferenceMeshSkinComposition) == 0, "Offset mismatch for FInterchangeMeshInstance::ReferenceMeshSkinComposition");
static_assert(offsetof(FInterchangeMeshInstance, bReferenceMorphTarget) == 1, "Offset mismatch for FInterchangeMeshInstance::bReferenceMorphTarget");
static_assert(offsetof(FInterchangeMeshInstance, bHasMorphTargets) == 2, "Offset mismatch for FInterchangeMeshInstance::bHasMorphTargets");
static_assert(offsetof(FInterchangeMeshInstance, bIsGeometryCache) == 3, "Offset mismatch for FInterchangeMeshInstance::bIsGeometryCache");
static_assert(offsetof(FInterchangeMeshInstance, bHasTransformAnimationTrack) == 4, "Offset mismatch for FInterchangeMeshInstance::bHasTransformAnimationTrack");
static_assert(offsetof(FInterchangeMeshInstance, bIsVisible) == 5, "Offset mismatch for FInterchangeMeshInstance::bIsVisible");
static_assert(offsetof(FInterchangeMeshInstance, InstancingNode) == 8, "Offset mismatch for FInterchangeMeshInstance::InstancingNode");
static_assert(offsetof(FInterchangeMeshInstance, ReferencingMeshGeometryUID) == 16, "Offset mismatch for FInterchangeMeshInstance::ReferencingMeshGeometryUID");

// /Script/InterchangePipelines.InterchangePipelineMeshesUtilitiesContext
// Kind: ScriptStruct; super: none
struct FInterchangePipelineMeshesUtilitiesContext
{
public:
    std::uint8_t ForceMeshType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bConvertStaticsWithAnimatedTransformToSkeletals; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConvertStaticsWithMorphTargetsToSkeletals; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConvertStaticsInBoneHierarchyToSkeletals; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bQueryGeometryOnlyIfNoInstance; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreGeometryCaches; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportMeshesInBoneHierarchy; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConvertStaticMeshToSkeletalMesh; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConvertSkeletalMeshToStaticMesh; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreStaticMeshes; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, ForceMeshType) == 0, "Offset mismatch for FInterchangePipelineMeshesUtilitiesContext::ForceMeshType");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bConvertStaticsWithAnimatedTransformToSkeletals) == 1, "Offset mismatch for FInterchangePipelineMeshesUtilitiesContext::bConvertStaticsWithAnimatedTransformToSkeletals");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bConvertStaticsWithMorphTargetsToSkeletals) == 2, "Offset mismatch for FInterchangePipelineMeshesUtilitiesContext::bConvertStaticsWithMorphTargetsToSkeletals");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bConvertStaticsInBoneHierarchyToSkeletals) == 3, "Offset mismatch for FInterchangePipelineMeshesUtilitiesContext::bConvertStaticsInBoneHierarchyToSkeletals");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bQueryGeometryOnlyIfNoInstance) == 4, "Offset mismatch for FInterchangePipelineMeshesUtilitiesContext::bQueryGeometryOnlyIfNoInstance");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bIgnoreGeometryCaches) == 5, "Offset mismatch for FInterchangePipelineMeshesUtilitiesContext::bIgnoreGeometryCaches");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bImportMeshesInBoneHierarchy) == 6, "Offset mismatch for FInterchangePipelineMeshesUtilitiesContext::bImportMeshesInBoneHierarchy");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bConvertStaticMeshToSkeletalMesh) == 7, "Offset mismatch for FInterchangePipelineMeshesUtilitiesContext::bConvertStaticMeshToSkeletalMesh");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bConvertSkeletalMeshToStaticMesh) == 8, "Offset mismatch for FInterchangePipelineMeshesUtilitiesContext::bConvertSkeletalMeshToStaticMesh");
static_assert(offsetof(FInterchangePipelineMeshesUtilitiesContext, bIgnoreStaticMeshes) == 9, "Offset mismatch for FInterchangePipelineMeshesUtilitiesContext::bIgnoreStaticMeshes");

// /Script/InterchangePipelines.GLTFPipelineSettings
// Kind: Class; super: DeveloperSettings
class UGLTFPipelineSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> MaterialParents; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGLTFPipelineSettings, MaterialParents) == 48, "Offset mismatch for UGLTFPipelineSettings::MaterialParents");

// /Script/InterchangePipelines.InterchangeGLTFPipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGLTFPipeline
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString PipelineDisplayName; // 0x00A8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeGLTFPipeline, PipelineDisplayName) == 168, "Offset mismatch for UInterchangeGLTFPipeline::PipelineDisplayName");

// /Script/InterchangePipelines.InterchangeGenericAnimationPipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGenericAnimationPipeline
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> CommonSkeletalMeshesAndAnimationsProperties; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CommonMeshesProperties; // 0x00B0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bImportAnimations; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportBoneTracks; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AnimationRange; // 0x00BA (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00BB
    std::uint8_t FrameImportRange[0x8]; // 0x00BC (Size: 0x8, Type: StructProperty)
    std::uint8_t bUse30HzToBakeBoneAnimation; // 0x00C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00C5
    std::int32_t CustomBoneAnimationSampleRate; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t FrameAlignment; // 0x00CC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSnapToClosestFrameBoundary; // 0x00CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportCustomAttribute; // 0x00CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddCurveMetadataToSkeleton; // 0x00CF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetMaterialDriveParameterOnCustomAttribute; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00D1
    TArray<void*> MaterialCurveSuffixes; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRemoveCurveRedundantKeys; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoNotImportCurveWithZero; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeleteExistingNonCurveCustomAttributes; // 0x00EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeleteExistingCustomAttributeCurves; // 0x00EB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeleteExistingMorphTargetCurves; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00ED
    FString SourceAnimationName; // 0x00F0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSceneImport; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInterchangeGenericAnimationPipeline, CommonSkeletalMeshesAndAnimationsProperties) == 168, "Offset mismatch for UInterchangeGenericAnimationPipeline::CommonSkeletalMeshesAndAnimationsProperties");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, CommonMeshesProperties) == 176, "Offset mismatch for UInterchangeGenericAnimationPipeline::CommonMeshesProperties");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bImportAnimations) == 184, "Offset mismatch for UInterchangeGenericAnimationPipeline::bImportAnimations");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bImportBoneTracks) == 185, "Offset mismatch for UInterchangeGenericAnimationPipeline::bImportBoneTracks");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, AnimationRange) == 186, "Offset mismatch for UInterchangeGenericAnimationPipeline::AnimationRange");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, FrameImportRange) == 188, "Offset mismatch for UInterchangeGenericAnimationPipeline::FrameImportRange");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bUse30HzToBakeBoneAnimation) == 196, "Offset mismatch for UInterchangeGenericAnimationPipeline::bUse30HzToBakeBoneAnimation");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, CustomBoneAnimationSampleRate) == 200, "Offset mismatch for UInterchangeGenericAnimationPipeline::CustomBoneAnimationSampleRate");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, FrameAlignment) == 204, "Offset mismatch for UInterchangeGenericAnimationPipeline::FrameAlignment");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bSnapToClosestFrameBoundary) == 205, "Offset mismatch for UInterchangeGenericAnimationPipeline::bSnapToClosestFrameBoundary");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bImportCustomAttribute) == 206, "Offset mismatch for UInterchangeGenericAnimationPipeline::bImportCustomAttribute");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bAddCurveMetadataToSkeleton) == 207, "Offset mismatch for UInterchangeGenericAnimationPipeline::bAddCurveMetadataToSkeleton");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bSetMaterialDriveParameterOnCustomAttribute) == 208, "Offset mismatch for UInterchangeGenericAnimationPipeline::bSetMaterialDriveParameterOnCustomAttribute");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, MaterialCurveSuffixes) == 216, "Offset mismatch for UInterchangeGenericAnimationPipeline::MaterialCurveSuffixes");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bRemoveCurveRedundantKeys) == 232, "Offset mismatch for UInterchangeGenericAnimationPipeline::bRemoveCurveRedundantKeys");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bDoNotImportCurveWithZero) == 233, "Offset mismatch for UInterchangeGenericAnimationPipeline::bDoNotImportCurveWithZero");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bDeleteExistingNonCurveCustomAttributes) == 234, "Offset mismatch for UInterchangeGenericAnimationPipeline::bDeleteExistingNonCurveCustomAttributes");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bDeleteExistingCustomAttributeCurves) == 235, "Offset mismatch for UInterchangeGenericAnimationPipeline::bDeleteExistingCustomAttributeCurves");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bDeleteExistingMorphTargetCurves) == 236, "Offset mismatch for UInterchangeGenericAnimationPipeline::bDeleteExistingMorphTargetCurves");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, SourceAnimationName) == 240, "Offset mismatch for UInterchangeGenericAnimationPipeline::SourceAnimationName");
static_assert(offsetof(UInterchangeGenericAnimationPipeline, bSceneImport) == 256, "Offset mismatch for UInterchangeGenericAnimationPipeline::bSceneImport");

// /Script/InterchangePipelines.InterchangeGenericAssetsPipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGenericAssetsPipeline
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString PipelineDisplayName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t ReimportStrategy; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseSourceNameForAsset; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSceneNameSubFolder; // 0x00BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAssetTypeSubFolders; // 0x00BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00BC
    FString AssetName; // 0x00C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t ImportOffsetTranslation[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ImportOffsetRotation[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    float ImportOffsetUniformScale; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0104
    void* CommonMeshesProperties; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* CommonSkeletalMeshesAndAnimationsProperties; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* MeshPipeline; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* AnimationPipeline; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* MaterialPipeline; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* GroomPipeline; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    FString SceneNameFolderPrefix; // 0x0138 (Size: 0x10, Type: StrProperty)
    std::uint8_t bImportOnlyAnimationAdjusted; // 0x0148 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInterchangeGenericAssetsPipeline, PipelineDisplayName) == 168, "Offset mismatch for UInterchangeGenericAssetsPipeline::PipelineDisplayName");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, ReimportStrategy) == 184, "Offset mismatch for UInterchangeGenericAssetsPipeline::ReimportStrategy");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, bUseSourceNameForAsset) == 185, "Offset mismatch for UInterchangeGenericAssetsPipeline::bUseSourceNameForAsset");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, bSceneNameSubFolder) == 186, "Offset mismatch for UInterchangeGenericAssetsPipeline::bSceneNameSubFolder");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, bAssetTypeSubFolders) == 187, "Offset mismatch for UInterchangeGenericAssetsPipeline::bAssetTypeSubFolders");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, AssetName) == 192, "Offset mismatch for UInterchangeGenericAssetsPipeline::AssetName");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, ImportOffsetTranslation) == 208, "Offset mismatch for UInterchangeGenericAssetsPipeline::ImportOffsetTranslation");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, ImportOffsetRotation) == 232, "Offset mismatch for UInterchangeGenericAssetsPipeline::ImportOffsetRotation");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, ImportOffsetUniformScale) == 256, "Offset mismatch for UInterchangeGenericAssetsPipeline::ImportOffsetUniformScale");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, CommonMeshesProperties) == 264, "Offset mismatch for UInterchangeGenericAssetsPipeline::CommonMeshesProperties");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, CommonSkeletalMeshesAndAnimationsProperties) == 272, "Offset mismatch for UInterchangeGenericAssetsPipeline::CommonSkeletalMeshesAndAnimationsProperties");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, MeshPipeline) == 280, "Offset mismatch for UInterchangeGenericAssetsPipeline::MeshPipeline");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, AnimationPipeline) == 288, "Offset mismatch for UInterchangeGenericAssetsPipeline::AnimationPipeline");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, MaterialPipeline) == 296, "Offset mismatch for UInterchangeGenericAssetsPipeline::MaterialPipeline");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, GroomPipeline) == 304, "Offset mismatch for UInterchangeGenericAssetsPipeline::GroomPipeline");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, SceneNameFolderPrefix) == 312, "Offset mismatch for UInterchangeGenericAssetsPipeline::SceneNameFolderPrefix");
static_assert(offsetof(UInterchangeGenericAssetsPipeline, bImportOnlyAnimationAdjusted) == 328, "Offset mismatch for UInterchangeGenericAssetsPipeline::bImportOnlyAnimationAdjusted");

// /Script/InterchangePipelines.InterchangeGenericAudioPipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGenericAudioPipeline
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString PipelineDisplayName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bImportSounds; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    void* BaseNodeContainer; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SourceDatas; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SoundWaveNodes; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SoundWaveFactoryNodes; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInterchangeGenericAudioPipeline, PipelineDisplayName) == 168, "Offset mismatch for UInterchangeGenericAudioPipeline::PipelineDisplayName");
static_assert(offsetof(UInterchangeGenericAudioPipeline, bImportSounds) == 184, "Offset mismatch for UInterchangeGenericAudioPipeline::bImportSounds");
static_assert(offsetof(UInterchangeGenericAudioPipeline, BaseNodeContainer) == 192, "Offset mismatch for UInterchangeGenericAudioPipeline::BaseNodeContainer");
static_assert(offsetof(UInterchangeGenericAudioPipeline, SourceDatas) == 200, "Offset mismatch for UInterchangeGenericAudioPipeline::SourceDatas");
static_assert(offsetof(UInterchangeGenericAudioPipeline, SoundWaveNodes) == 216, "Offset mismatch for UInterchangeGenericAudioPipeline::SoundWaveNodes");
static_assert(offsetof(UInterchangeGenericAudioPipeline, SoundWaveFactoryNodes) == 232, "Offset mismatch for UInterchangeGenericAudioPipeline::SoundWaveFactoryNodes");

// /Script/InterchangePipelines.InterchangeGenericCommonMeshesProperties
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGenericCommonMeshesProperties
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ForceAllMeshAsType; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bConvertStaticsWithAnimatedTransformToSkeletals; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConvertStaticsWithMorphTargetsToSkeletals; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConvertStaticsInBoneHierarchyToSkeletals; // 0x00AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSingleBoneSkeleton; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportLods; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBakeMeshes; // 0x00AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBakePivotMeshes; // 0x00AF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepSectionsSeparate; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t VertexColorImportOption; // 0x00B1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00B2
    std::uint8_t VertexOverrideColor[0x4]; // 0x00B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t bImportSockets; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecomputeNormals; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecomputeTangents; // 0x00BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseMikkTSpace; // 0x00BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComputeWeightedNormals; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseHighPrecisionTangentBasis; // 0x00BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseFullPrecisionUVs; // 0x00BE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseBackwardsCompatibleF16TruncUVs; // 0x00BF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveDegenerates; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoDetectMeshType; // 0x00C1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, ForceAllMeshAsType) == 168, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::ForceAllMeshAsType");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bConvertStaticsWithAnimatedTransformToSkeletals) == 169, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bConvertStaticsWithAnimatedTransformToSkeletals");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bConvertStaticsWithMorphTargetsToSkeletals) == 170, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bConvertStaticsWithMorphTargetsToSkeletals");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bConvertStaticsInBoneHierarchyToSkeletals) == 171, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bConvertStaticsInBoneHierarchyToSkeletals");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bSingleBoneSkeleton) == 172, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bSingleBoneSkeleton");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bImportLods) == 173, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bImportLods");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bBakeMeshes) == 174, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bBakeMeshes");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bBakePivotMeshes) == 175, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bBakePivotMeshes");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bKeepSectionsSeparate) == 176, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bKeepSectionsSeparate");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, VertexColorImportOption) == 177, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::VertexColorImportOption");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, VertexOverrideColor) == 180, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::VertexOverrideColor");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bImportSockets) == 184, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bImportSockets");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bRecomputeNormals) == 185, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bRecomputeNormals");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bRecomputeTangents) == 186, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bRecomputeTangents");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bUseMikkTSpace) == 187, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bUseMikkTSpace");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bComputeWeightedNormals) == 188, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bComputeWeightedNormals");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bUseHighPrecisionTangentBasis) == 189, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bUseHighPrecisionTangentBasis");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bUseFullPrecisionUVs) == 190, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bUseFullPrecisionUVs");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bUseBackwardsCompatibleF16TruncUVs) == 191, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bUseBackwardsCompatibleF16TruncUVs");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bRemoveDegenerates) == 192, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bRemoveDegenerates");
static_assert(offsetof(UInterchangeGenericCommonMeshesProperties, bAutoDetectMeshType) == 193, "Offset mismatch for UInterchangeGenericCommonMeshesProperties::bAutoDetectMeshType");

// /Script/InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bImportOnlyAnimations; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryAutoSelectSkeleton; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00AA
    std::uint8_t skeleton[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bUseT0AsRefPose; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddCurveMetadataToSkeleton; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportMeshesInBoneHierarchy; // 0x00D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConvertStaticsWithMorphTargetsToSkeletals; // 0x00D3 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, bImportOnlyAnimations) == 168, "Offset mismatch for UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::bImportOnlyAnimations");
static_assert(offsetof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, bTryAutoSelectSkeleton) == 169, "Offset mismatch for UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::bTryAutoSelectSkeleton");
static_assert(offsetof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, skeleton) == 176, "Offset mismatch for UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::skeleton");
static_assert(offsetof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, bUseT0AsRefPose) == 208, "Offset mismatch for UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::bUseT0AsRefPose");
static_assert(offsetof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, bAddCurveMetadataToSkeleton) == 209, "Offset mismatch for UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::bAddCurveMetadataToSkeleton");
static_assert(offsetof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, bImportMeshesInBoneHierarchy) == 210, "Offset mismatch for UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::bImportMeshesInBoneHierarchy");
static_assert(offsetof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, bConvertStaticsWithMorphTargetsToSkeletals) == 211, "Offset mismatch for UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::bConvertStaticsWithMorphTargetsToSkeletals");

// /Script/InterchangePipelines.InterchangeGenericGroomPipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGenericGroomPipeline
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString PipelineDisplayName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnableGroomTypesImport; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportGrooms; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportGroomBindings; // 0x00BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00BB
    std::uint8_t GroupInterpolationSettings[0x28]; // 0x00BC (Size: 0x28, Type: StructProperty)
    std::uint8_t bImportGroomCaches; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E5
    std::uint8_t GroomAsset[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ImportGroomCacheType; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOverrideTimeRange; // 0x0101 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0102
    std::int32_t FrameStart; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::int32_t FrameEnd; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::int32_t NumInterpolationPoints; // 0x010C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UInterchangeGenericGroomPipeline, PipelineDisplayName) == 168, "Offset mismatch for UInterchangeGenericGroomPipeline::PipelineDisplayName");
static_assert(offsetof(UInterchangeGenericGroomPipeline, bEnableGroomTypesImport) == 184, "Offset mismatch for UInterchangeGenericGroomPipeline::bEnableGroomTypesImport");
static_assert(offsetof(UInterchangeGenericGroomPipeline, bImportGrooms) == 185, "Offset mismatch for UInterchangeGenericGroomPipeline::bImportGrooms");
static_assert(offsetof(UInterchangeGenericGroomPipeline, bImportGroomBindings) == 186, "Offset mismatch for UInterchangeGenericGroomPipeline::bImportGroomBindings");
static_assert(offsetof(UInterchangeGenericGroomPipeline, GroupInterpolationSettings) == 188, "Offset mismatch for UInterchangeGenericGroomPipeline::GroupInterpolationSettings");
static_assert(offsetof(UInterchangeGenericGroomPipeline, bImportGroomCaches) == 228, "Offset mismatch for UInterchangeGenericGroomPipeline::bImportGroomCaches");
static_assert(offsetof(UInterchangeGenericGroomPipeline, GroomAsset) == 232, "Offset mismatch for UInterchangeGenericGroomPipeline::GroomAsset");
static_assert(offsetof(UInterchangeGenericGroomPipeline, ImportGroomCacheType) == 256, "Offset mismatch for UInterchangeGenericGroomPipeline::ImportGroomCacheType");
static_assert(offsetof(UInterchangeGenericGroomPipeline, bOverrideTimeRange) == 257, "Offset mismatch for UInterchangeGenericGroomPipeline::bOverrideTimeRange");
static_assert(offsetof(UInterchangeGenericGroomPipeline, FrameStart) == 260, "Offset mismatch for UInterchangeGenericGroomPipeline::FrameStart");
static_assert(offsetof(UInterchangeGenericGroomPipeline, FrameEnd) == 264, "Offset mismatch for UInterchangeGenericGroomPipeline::FrameEnd");
static_assert(offsetof(UInterchangeGenericGroomPipeline, NumInterpolationPoints) == 268, "Offset mismatch for UInterchangeGenericGroomPipeline::NumInterpolationPoints");

// /Script/InterchangePipelines.InterchangeGenericLevelPipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGenericLevelPipeline
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString PipelineDisplayName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t ReimportPropertyStrategy; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SceneHierarchyType; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDeleteMissingActors; // 0x00BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceReimportDeletedActors; // 0x00BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceReimportDeletedAssets; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeleteMissingAssets; // 0x00BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseHierarchicalISMComponents; // 0x00BE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsePhysicalInsteadOfStandardPerspectiveCamera; // 0x00BF (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInterchangeGenericLevelPipeline, PipelineDisplayName) == 168, "Offset mismatch for UInterchangeGenericLevelPipeline::PipelineDisplayName");
static_assert(offsetof(UInterchangeGenericLevelPipeline, ReimportPropertyStrategy) == 184, "Offset mismatch for UInterchangeGenericLevelPipeline::ReimportPropertyStrategy");
static_assert(offsetof(UInterchangeGenericLevelPipeline, SceneHierarchyType) == 185, "Offset mismatch for UInterchangeGenericLevelPipeline::SceneHierarchyType");
static_assert(offsetof(UInterchangeGenericLevelPipeline, bDeleteMissingActors) == 186, "Offset mismatch for UInterchangeGenericLevelPipeline::bDeleteMissingActors");
static_assert(offsetof(UInterchangeGenericLevelPipeline, bForceReimportDeletedActors) == 187, "Offset mismatch for UInterchangeGenericLevelPipeline::bForceReimportDeletedActors");
static_assert(offsetof(UInterchangeGenericLevelPipeline, bForceReimportDeletedAssets) == 188, "Offset mismatch for UInterchangeGenericLevelPipeline::bForceReimportDeletedAssets");
static_assert(offsetof(UInterchangeGenericLevelPipeline, bDeleteMissingAssets) == 189, "Offset mismatch for UInterchangeGenericLevelPipeline::bDeleteMissingAssets");
static_assert(offsetof(UInterchangeGenericLevelPipeline, bUseHierarchicalISMComponents) == 190, "Offset mismatch for UInterchangeGenericLevelPipeline::bUseHierarchicalISMComponents");
static_assert(offsetof(UInterchangeGenericLevelPipeline, bUsePhysicalInsteadOfStandardPerspectiveCamera) == 191, "Offset mismatch for UInterchangeGenericLevelPipeline::bUsePhysicalInsteadOfStandardPerspectiveCamera");

// /Script/InterchangePipelines.InterchangeGenericMaterialPipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGenericMaterialPipeline
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString PipelineDisplayName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString AssetName; // 0x00B8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bImportMaterials; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReuseExistingMaterials; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SearchLocation; // 0x00CA (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCreateNewMaterials; // 0x00CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t MaterialImport; // 0x00CC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCreateMaterialInstanceForParent; // 0x00CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00CE
    std::uint8_t ParentMaterial[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIdentifyDuplicateMaterials; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E9
    void* TexturePipeline; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* SparseVolumeTexturePipeline; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOverrideDisplacement; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0101
    float OverrideDisplacementCenter; // 0x0104 (Size: 0x4, Type: FloatProperty)
    void* BaseNodeContainer; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeGenericMaterialPipeline, PipelineDisplayName) == 168, "Offset mismatch for UInterchangeGenericMaterialPipeline::PipelineDisplayName");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, AssetName) == 184, "Offset mismatch for UInterchangeGenericMaterialPipeline::AssetName");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, bImportMaterials) == 200, "Offset mismatch for UInterchangeGenericMaterialPipeline::bImportMaterials");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, bReuseExistingMaterials) == 201, "Offset mismatch for UInterchangeGenericMaterialPipeline::bReuseExistingMaterials");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, SearchLocation) == 202, "Offset mismatch for UInterchangeGenericMaterialPipeline::SearchLocation");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, bCreateNewMaterials) == 203, "Offset mismatch for UInterchangeGenericMaterialPipeline::bCreateNewMaterials");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, MaterialImport) == 204, "Offset mismatch for UInterchangeGenericMaterialPipeline::MaterialImport");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, bCreateMaterialInstanceForParent) == 205, "Offset mismatch for UInterchangeGenericMaterialPipeline::bCreateMaterialInstanceForParent");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, ParentMaterial) == 208, "Offset mismatch for UInterchangeGenericMaterialPipeline::ParentMaterial");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, bIdentifyDuplicateMaterials) == 232, "Offset mismatch for UInterchangeGenericMaterialPipeline::bIdentifyDuplicateMaterials");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, TexturePipeline) == 240, "Offset mismatch for UInterchangeGenericMaterialPipeline::TexturePipeline");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, SparseVolumeTexturePipeline) == 248, "Offset mismatch for UInterchangeGenericMaterialPipeline::SparseVolumeTexturePipeline");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, bOverrideDisplacement) == 256, "Offset mismatch for UInterchangeGenericMaterialPipeline::bOverrideDisplacement");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, OverrideDisplacementCenter) == 260, "Offset mismatch for UInterchangeGenericMaterialPipeline::OverrideDisplacementCenter");
static_assert(offsetof(UInterchangeGenericMaterialPipeline, BaseNodeContainer) == 264, "Offset mismatch for UInterchangeGenericMaterialPipeline::BaseNodeContainer");

// /Script/InterchangePipelines.InterchangeGenericMeshPipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGenericMeshPipeline
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> CommonMeshesProperties; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CommonSkeletalMeshesAndAnimationsProperties; // 0x00B0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bImportStaticMeshes; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCombineStaticMeshes; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CombineStaticMeshesBehavior; // 0x00BA (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00BB
    std::uint8_t LodGroup[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t bAutoComputeLODScreenSizes; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00C1
    TArray<void*> LODScreenSizes; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bImportCollision; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCollision; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportCollisionAccordingToMeshName; // 0x00DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOneConvexHullPerUCX; // 0x00DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Collision; // 0x00DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bForceCollisionPrimitiveGeneration; // 0x00DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBuildNanite; // 0x00DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x00DF
    std::int64_t NaniteTriangleThreshold; // 0x00E0 (Size: 0x8, Type: Int64Property)
    std::uint8_t bBuildReversedIndexBuffer; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateLightmapUVs; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateDistanceFieldAsIfTwoSided; // 0x00EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportFaceRemap; // 0x00EB (Size: 0x1, Type: BoolProperty)
    std::int32_t MinLightmapResolution; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t SrcLightmapIndex; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t DstLightmapIndex; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t BuildScale3D[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    float DistanceFieldResolutionScale; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0114
    std::uint8_t DistanceFieldReplacementMesh[0x20]; // 0x0118 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t MaxLumenMeshCards; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::uint8_t bImportSkeletalMeshes; // 0x013C (Size: 0x1, Type: BoolProperty)
    std::uint8_t SkeletalMeshImportContentType; // 0x013D (Size: 0x1, Type: EnumProperty)
    std::uint8_t LastSkeletalMeshImportContentType; // 0x013E (Size: 0x1, Type: EnumProperty)
    std::uint8_t CombineSkeletalMeshesBehavior; // 0x013F (Size: 0x1, Type: EnumProperty)
    std::uint8_t bImportMorphTargets; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMergeMorphTargetsWithSameName; // 0x0141 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportVertexAttributes; // 0x0142 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateSkeletonReferencePose; // 0x0143 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCreatePhysicsAsset; // 0x0144 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0145
    std::uint8_t PhysicsAsset[0x20]; // 0x0148 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bUseHighPrecisionSkinWeights; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0169
    float ThresholdPosition; // 0x016C (Size: 0x4, Type: FloatProperty)
    float ThresholdTangentNormal; // 0x0170 (Size: 0x4, Type: FloatProperty)
    float ThresholdUV; // 0x0174 (Size: 0x4, Type: FloatProperty)
    float MorphThresholdPosition; // 0x0178 (Size: 0x4, Type: FloatProperty)
    std::int32_t BoneInfluenceLimit; // 0x017C (Size: 0x4, Type: IntProperty)
    std::uint8_t bImportGeometryCaches; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlattenTracks; // 0x0181 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x0182
    float CompressedPositionPrecision; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::int32_t CompressedTextureCoordinatesNumberOfBits; // 0x0188 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOverrideTimeRange; // 0x018C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x018D
    std::int32_t FrameStart; // 0x0190 (Size: 0x4, Type: IntProperty)
    std::int32_t FrameEnd; // 0x0194 (Size: 0x4, Type: IntProperty)
    std::uint8_t MotionVectors; // 0x0198 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyConstantTopologyOptimizations; // 0x0199 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStoreImportedVertexNumbers; // 0x019A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOptimizeIndexBuffers; // 0x019B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInterchangeGenericMeshPipeline, CommonMeshesProperties) == 168, "Offset mismatch for UInterchangeGenericMeshPipeline::CommonMeshesProperties");
static_assert(offsetof(UInterchangeGenericMeshPipeline, CommonSkeletalMeshesAndAnimationsProperties) == 176, "Offset mismatch for UInterchangeGenericMeshPipeline::CommonSkeletalMeshesAndAnimationsProperties");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bImportStaticMeshes) == 184, "Offset mismatch for UInterchangeGenericMeshPipeline::bImportStaticMeshes");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bCombineStaticMeshes) == 185, "Offset mismatch for UInterchangeGenericMeshPipeline::bCombineStaticMeshes");
static_assert(offsetof(UInterchangeGenericMeshPipeline, CombineStaticMeshesBehavior) == 186, "Offset mismatch for UInterchangeGenericMeshPipeline::CombineStaticMeshesBehavior");
static_assert(offsetof(UInterchangeGenericMeshPipeline, LodGroup) == 188, "Offset mismatch for UInterchangeGenericMeshPipeline::LodGroup");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bAutoComputeLODScreenSizes) == 192, "Offset mismatch for UInterchangeGenericMeshPipeline::bAutoComputeLODScreenSizes");
static_assert(offsetof(UInterchangeGenericMeshPipeline, LODScreenSizes) == 200, "Offset mismatch for UInterchangeGenericMeshPipeline::LODScreenSizes");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bImportCollision) == 216, "Offset mismatch for UInterchangeGenericMeshPipeline::bImportCollision");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bCollision) == 217, "Offset mismatch for UInterchangeGenericMeshPipeline::bCollision");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bImportCollisionAccordingToMeshName) == 218, "Offset mismatch for UInterchangeGenericMeshPipeline::bImportCollisionAccordingToMeshName");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bOneConvexHullPerUCX) == 219, "Offset mismatch for UInterchangeGenericMeshPipeline::bOneConvexHullPerUCX");
static_assert(offsetof(UInterchangeGenericMeshPipeline, Collision) == 220, "Offset mismatch for UInterchangeGenericMeshPipeline::Collision");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bForceCollisionPrimitiveGeneration) == 221, "Offset mismatch for UInterchangeGenericMeshPipeline::bForceCollisionPrimitiveGeneration");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bBuildNanite) == 222, "Offset mismatch for UInterchangeGenericMeshPipeline::bBuildNanite");
static_assert(offsetof(UInterchangeGenericMeshPipeline, NaniteTriangleThreshold) == 224, "Offset mismatch for UInterchangeGenericMeshPipeline::NaniteTriangleThreshold");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bBuildReversedIndexBuffer) == 232, "Offset mismatch for UInterchangeGenericMeshPipeline::bBuildReversedIndexBuffer");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bGenerateLightmapUVs) == 233, "Offset mismatch for UInterchangeGenericMeshPipeline::bGenerateLightmapUVs");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bGenerateDistanceFieldAsIfTwoSided) == 234, "Offset mismatch for UInterchangeGenericMeshPipeline::bGenerateDistanceFieldAsIfTwoSided");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bSupportFaceRemap) == 235, "Offset mismatch for UInterchangeGenericMeshPipeline::bSupportFaceRemap");
static_assert(offsetof(UInterchangeGenericMeshPipeline, MinLightmapResolution) == 236, "Offset mismatch for UInterchangeGenericMeshPipeline::MinLightmapResolution");
static_assert(offsetof(UInterchangeGenericMeshPipeline, SrcLightmapIndex) == 240, "Offset mismatch for UInterchangeGenericMeshPipeline::SrcLightmapIndex");
static_assert(offsetof(UInterchangeGenericMeshPipeline, DstLightmapIndex) == 244, "Offset mismatch for UInterchangeGenericMeshPipeline::DstLightmapIndex");
static_assert(offsetof(UInterchangeGenericMeshPipeline, BuildScale3D) == 248, "Offset mismatch for UInterchangeGenericMeshPipeline::BuildScale3D");
static_assert(offsetof(UInterchangeGenericMeshPipeline, DistanceFieldResolutionScale) == 272, "Offset mismatch for UInterchangeGenericMeshPipeline::DistanceFieldResolutionScale");
static_assert(offsetof(UInterchangeGenericMeshPipeline, DistanceFieldReplacementMesh) == 280, "Offset mismatch for UInterchangeGenericMeshPipeline::DistanceFieldReplacementMesh");
static_assert(offsetof(UInterchangeGenericMeshPipeline, MaxLumenMeshCards) == 312, "Offset mismatch for UInterchangeGenericMeshPipeline::MaxLumenMeshCards");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bImportSkeletalMeshes) == 316, "Offset mismatch for UInterchangeGenericMeshPipeline::bImportSkeletalMeshes");
static_assert(offsetof(UInterchangeGenericMeshPipeline, SkeletalMeshImportContentType) == 317, "Offset mismatch for UInterchangeGenericMeshPipeline::SkeletalMeshImportContentType");
static_assert(offsetof(UInterchangeGenericMeshPipeline, LastSkeletalMeshImportContentType) == 318, "Offset mismatch for UInterchangeGenericMeshPipeline::LastSkeletalMeshImportContentType");
static_assert(offsetof(UInterchangeGenericMeshPipeline, CombineSkeletalMeshesBehavior) == 319, "Offset mismatch for UInterchangeGenericMeshPipeline::CombineSkeletalMeshesBehavior");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bImportMorphTargets) == 320, "Offset mismatch for UInterchangeGenericMeshPipeline::bImportMorphTargets");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bMergeMorphTargetsWithSameName) == 321, "Offset mismatch for UInterchangeGenericMeshPipeline::bMergeMorphTargetsWithSameName");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bImportVertexAttributes) == 322, "Offset mismatch for UInterchangeGenericMeshPipeline::bImportVertexAttributes");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bUpdateSkeletonReferencePose) == 323, "Offset mismatch for UInterchangeGenericMeshPipeline::bUpdateSkeletonReferencePose");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bCreatePhysicsAsset) == 324, "Offset mismatch for UInterchangeGenericMeshPipeline::bCreatePhysicsAsset");
static_assert(offsetof(UInterchangeGenericMeshPipeline, PhysicsAsset) == 328, "Offset mismatch for UInterchangeGenericMeshPipeline::PhysicsAsset");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bUseHighPrecisionSkinWeights) == 360, "Offset mismatch for UInterchangeGenericMeshPipeline::bUseHighPrecisionSkinWeights");
static_assert(offsetof(UInterchangeGenericMeshPipeline, ThresholdPosition) == 364, "Offset mismatch for UInterchangeGenericMeshPipeline::ThresholdPosition");
static_assert(offsetof(UInterchangeGenericMeshPipeline, ThresholdTangentNormal) == 368, "Offset mismatch for UInterchangeGenericMeshPipeline::ThresholdTangentNormal");
static_assert(offsetof(UInterchangeGenericMeshPipeline, ThresholdUV) == 372, "Offset mismatch for UInterchangeGenericMeshPipeline::ThresholdUV");
static_assert(offsetof(UInterchangeGenericMeshPipeline, MorphThresholdPosition) == 376, "Offset mismatch for UInterchangeGenericMeshPipeline::MorphThresholdPosition");
static_assert(offsetof(UInterchangeGenericMeshPipeline, BoneInfluenceLimit) == 380, "Offset mismatch for UInterchangeGenericMeshPipeline::BoneInfluenceLimit");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bImportGeometryCaches) == 384, "Offset mismatch for UInterchangeGenericMeshPipeline::bImportGeometryCaches");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bFlattenTracks) == 385, "Offset mismatch for UInterchangeGenericMeshPipeline::bFlattenTracks");
static_assert(offsetof(UInterchangeGenericMeshPipeline, CompressedPositionPrecision) == 388, "Offset mismatch for UInterchangeGenericMeshPipeline::CompressedPositionPrecision");
static_assert(offsetof(UInterchangeGenericMeshPipeline, CompressedTextureCoordinatesNumberOfBits) == 392, "Offset mismatch for UInterchangeGenericMeshPipeline::CompressedTextureCoordinatesNumberOfBits");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bOverrideTimeRange) == 396, "Offset mismatch for UInterchangeGenericMeshPipeline::bOverrideTimeRange");
static_assert(offsetof(UInterchangeGenericMeshPipeline, FrameStart) == 400, "Offset mismatch for UInterchangeGenericMeshPipeline::FrameStart");
static_assert(offsetof(UInterchangeGenericMeshPipeline, FrameEnd) == 404, "Offset mismatch for UInterchangeGenericMeshPipeline::FrameEnd");
static_assert(offsetof(UInterchangeGenericMeshPipeline, MotionVectors) == 408, "Offset mismatch for UInterchangeGenericMeshPipeline::MotionVectors");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bApplyConstantTopologyOptimizations) == 409, "Offset mismatch for UInterchangeGenericMeshPipeline::bApplyConstantTopologyOptimizations");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bStoreImportedVertexNumbers) == 410, "Offset mismatch for UInterchangeGenericMeshPipeline::bStoreImportedVertexNumbers");
static_assert(offsetof(UInterchangeGenericMeshPipeline, bOptimizeIndexBuffers) == 411, "Offset mismatch for UInterchangeGenericMeshPipeline::bOptimizeIndexBuffers");

// /Script/InterchangePipelines.InterchangeGenericTexturePipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeGenericTexturePipeline
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString PipelineDisplayName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bImportTextures; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    FString AssetName; // 0x00C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAllowNonPowerOfTwo; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00D1
    void* BaseNodeContainer; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeGenericTexturePipeline, PipelineDisplayName) == 168, "Offset mismatch for UInterchangeGenericTexturePipeline::PipelineDisplayName");
static_assert(offsetof(UInterchangeGenericTexturePipeline, bImportTextures) == 184, "Offset mismatch for UInterchangeGenericTexturePipeline::bImportTextures");
static_assert(offsetof(UInterchangeGenericTexturePipeline, AssetName) == 192, "Offset mismatch for UInterchangeGenericTexturePipeline::AssetName");
static_assert(offsetof(UInterchangeGenericTexturePipeline, bAllowNonPowerOfTwo) == 208, "Offset mismatch for UInterchangeGenericTexturePipeline::bAllowNonPowerOfTwo");
static_assert(offsetof(UInterchangeGenericTexturePipeline, BaseNodeContainer) == 216, "Offset mismatch for UInterchangeGenericTexturePipeline::BaseNodeContainer");

// /Script/InterchangePipelines.InterchangeMaterialXPipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeMaterialXPipeline
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bVolumetricMaterial; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecomputeNormals; // 0x00B1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInterchangeMaterialXPipeline, bVolumetricMaterial) == 176, "Offset mismatch for UInterchangeMaterialXPipeline::bVolumetricMaterial");
static_assert(offsetof(UInterchangeMaterialXPipeline, bRecomputeNormals) == 177, "Offset mismatch for UInterchangeMaterialXPipeline::bRecomputeNormals");

// /Script/InterchangePipelines.InterchangePipelineMeshesUtilities
// Kind: Class; super: Object
class UInterchangePipelineMeshesUtilities
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangePipelines.InterchangeSparseVolumeTexturePipeline
// Kind: Class; super: InterchangePipelineBase
class UInterchangeSparseVolumeTexturePipeline
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString PipelineDisplayName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bImportSparseVolumeTextures; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportAnimatedSparseVolumeTextures; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00BA
    FString AssetName; // 0x00C0 (Size: 0x10, Type: StrProperty)
    void* BaseNodeContainer; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeSparseVolumeTexturePipeline, PipelineDisplayName) == 168, "Offset mismatch for UInterchangeSparseVolumeTexturePipeline::PipelineDisplayName");
static_assert(offsetof(UInterchangeSparseVolumeTexturePipeline, bImportSparseVolumeTextures) == 184, "Offset mismatch for UInterchangeSparseVolumeTexturePipeline::bImportSparseVolumeTextures");
static_assert(offsetof(UInterchangeSparseVolumeTexturePipeline, bImportAnimatedSparseVolumeTextures) == 185, "Offset mismatch for UInterchangeSparseVolumeTexturePipeline::bImportAnimatedSparseVolumeTextures");
static_assert(offsetof(UInterchangeSparseVolumeTexturePipeline, AssetName) == 192, "Offset mismatch for UInterchangeSparseVolumeTexturePipeline::AssetName");
static_assert(offsetof(UInterchangeSparseVolumeTexturePipeline, BaseNodeContainer) == 208, "Offset mismatch for UInterchangeSparseVolumeTexturePipeline::BaseNodeContainer");

// /Script/InterchangePipelines.MaterialXPipelineSettings
// Kind: Class; super: DeveloperSettings
class UMaterialXPipelineSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> PredefinedSurfaceShaders; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PredefinedBSDF; // 0x0040 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PredefinedEDF; // 0x0050 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PredefinedVDF; // 0x0060 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMaterialXPipelineSettings, PredefinedSurfaceShaders) == 48, "Offset mismatch for UMaterialXPipelineSettings::PredefinedSurfaceShaders");
static_assert(offsetof(UMaterialXPipelineSettings, PredefinedBSDF) == 64, "Offset mismatch for UMaterialXPipelineSettings::PredefinedBSDF");
static_assert(offsetof(UMaterialXPipelineSettings, PredefinedEDF) == 80, "Offset mismatch for UMaterialXPipelineSettings::PredefinedEDF");
static_assert(offsetof(UMaterialXPipelineSettings, PredefinedVDF) == 96, "Offset mismatch for UMaterialXPipelineSettings::PredefinedVDF");
