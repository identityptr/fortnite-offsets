/**
 * decamp dumper generated SDK
 * Package: /Script/MLDeformerFramework
 */
#pragma once
#include "Basic.h"

// /Script/MLDeformerFramework.MLDeformerCompareActor
// Kind: ScriptStruct; super: none
struct FMLDeformerCompareActor
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> DeformerAsset; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FMLDeformerCompareActor, Name) == 0, "Offset mismatch for FMLDeformerCompareActor::Name");
static_assert(offsetof(FMLDeformerCompareActor, DeformerAsset) == 8, "Offset mismatch for FMLDeformerCompareActor::DeformerAsset");

// /Script/MLDeformerFramework.MLDeformerCurveReference
// Kind: ScriptStruct; super: none
struct FMLDeformerCurveReference
{
public:
    FName CurveName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMLDeformerCurveReference, CurveName) == 0, "Offset mismatch for FMLDeformerCurveReference::CurveName");

// /Script/MLDeformerFramework.MLDeformerGeomCacheTrainingInputAnim
// Kind: ScriptStruct; super: MLDeformerTrainingInputAnim
struct FMLDeformerGeomCacheTrainingInputAnim
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MLDeformerFramework.MLDeformerMaskInfo
// Kind: ScriptStruct; super: none
struct FMLDeformerMaskInfo
{
public:
    TArray<void*> BoneNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaskMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    FName VertexAttributeName; // 0x0014 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMLDeformerMaskInfo, BoneNames) == 0, "Offset mismatch for FMLDeformerMaskInfo::BoneNames");
static_assert(offsetof(FMLDeformerMaskInfo, MaskMode) == 16, "Offset mismatch for FMLDeformerMaskInfo::MaskMode");
static_assert(offsetof(FMLDeformerMaskInfo, VertexAttributeName) == 20, "Offset mismatch for FMLDeformerMaskInfo::VertexAttributeName");

// /Script/MLDeformerFramework.MLDeformerMorphModelQualityLevel
// Kind: ScriptStruct; super: none
struct FMLDeformerMorphModelQualityLevel
{
public:
    std::int32_t MaxActiveMorphs; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMLDeformerMorphModelQualityLevel, MaxActiveMorphs) == 0, "Offset mismatch for FMLDeformerMorphModelQualityLevel::MaxActiveMorphs");

// /Script/MLDeformerFramework.MLDeformerTrainingDataProcessorAnim
// Kind: ScriptStruct; super: none
struct FMLDeformerTrainingDataProcessorAnim
{
public:
    std::uint8_t AnimSequence[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMLDeformerTrainingDataProcessorAnim, AnimSequence) == 0, "Offset mismatch for FMLDeformerTrainingDataProcessorAnim::AnimSequence");
static_assert(offsetof(FMLDeformerTrainingDataProcessorAnim, bEnabled) == 32, "Offset mismatch for FMLDeformerTrainingDataProcessorAnim::bEnabled");

// /Script/MLDeformerFramework.MLDeformerTrainingDataProcessorBoneGroup
// Kind: ScriptStruct; super: none
struct FMLDeformerTrainingDataProcessorBoneGroup
{
public:
    FString GroupName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> BoneNames; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMLDeformerTrainingDataProcessorBoneGroup, GroupName) == 0, "Offset mismatch for FMLDeformerTrainingDataProcessorBoneGroup::GroupName");
static_assert(offsetof(FMLDeformerTrainingDataProcessorBoneGroup, BoneNames) == 16, "Offset mismatch for FMLDeformerTrainingDataProcessorBoneGroup::BoneNames");

// /Script/MLDeformerFramework.MLDeformerTrainingDataProcessorBoneGroupsList
// Kind: ScriptStruct; super: none
struct FMLDeformerTrainingDataProcessorBoneGroupsList
{
public:
    TArray<void*> Groups; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMLDeformerTrainingDataProcessorBoneGroupsList, Groups) == 0, "Offset mismatch for FMLDeformerTrainingDataProcessorBoneGroupsList::Groups");

// /Script/MLDeformerFramework.MLDeformerTrainingDataProcessorBoneList
// Kind: ScriptStruct; super: none
struct FMLDeformerTrainingDataProcessorBoneList
{
public:
    TArray<void*> BoneNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMLDeformerTrainingDataProcessorBoneList, BoneNames) == 0, "Offset mismatch for FMLDeformerTrainingDataProcessorBoneList::BoneNames");

// /Script/MLDeformerFramework.MLDeformerTrainingInputAnim
// Kind: ScriptStruct; super: none
struct FMLDeformerTrainingInputAnim
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MLDeformerFramework.DeformerGraphSkeletonWithWeightedQuatsDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UDeformerGraphSkeletonWithWeightedQuatsDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MLDeformerFramework.DeformerGraphSkeletonWithWeightedQuatsDataProvider
// Kind: Class; super: ComputeDataProvider
class UDeformerGraphSkeletonWithWeightedQuatsDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SkinnedMesh; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDeformerGraphSkeletonWithWeightedQuatsDataProvider, SkinnedMesh) == 40, "Offset mismatch for UDeformerGraphSkeletonWithWeightedQuatsDataProvider::SkinnedMesh");

// /Script/MLDeformerFramework.MLDeformerAsset
// Kind: Class; super: Object
class UMLDeformerAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Model; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMLDeformerAsset, Model) == 40, "Offset mismatch for UMLDeformerAsset::Model");

// /Script/MLDeformerFramework.MLDeformerComponent
// Kind: Class; super: ActorComponent
class UMLDeformerComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* DeformerAsset; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    float Weight; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t QualityLevel; // 0x00EC (Size: 0x4, Type: IntProperty)
    void* ModelInstance; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMLDeformerComponent, DeformerAsset) == 224, "Offset mismatch for UMLDeformerComponent::DeformerAsset");
static_assert(offsetof(UMLDeformerComponent, Weight) == 232, "Offset mismatch for UMLDeformerComponent::Weight");
static_assert(offsetof(UMLDeformerComponent, QualityLevel) == 236, "Offset mismatch for UMLDeformerComponent::QualityLevel");
static_assert(offsetof(UMLDeformerComponent, ModelInstance) == 240, "Offset mismatch for UMLDeformerComponent::ModelInstance");

// /Script/MLDeformerFramework.MLDeformerComponentSource
// Kind: Class; super: OptimusComponentSource
class UMLDeformerComponentSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MLDeformerFramework.MLDeformerGeomCacheModel
// Kind: Class; super: MLDeformerModel
class UMLDeformerGeomCacheModel
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::int32_t NumBaseMeshVerts; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTargetMeshVerts; // 0x00F4 (Size: 0x4, Type: IntProperty)
    FString TrainingDevice; // 0x00F8 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0108
    std::int32_t MaxNumLODs; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x011C
    void* InputInfo; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VertexMap; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    void* TrainingDataProcessorSettings; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* SkeletalMesh; // 0x0140 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMLDeformerGeomCacheModel, NumBaseMeshVerts) == 240, "Offset mismatch for UMLDeformerGeomCacheModel::NumBaseMeshVerts");
static_assert(offsetof(UMLDeformerGeomCacheModel, NumTargetMeshVerts) == 244, "Offset mismatch for UMLDeformerGeomCacheModel::NumTargetMeshVerts");
static_assert(offsetof(UMLDeformerGeomCacheModel, TrainingDevice) == 248, "Offset mismatch for UMLDeformerGeomCacheModel::TrainingDevice");
static_assert(offsetof(UMLDeformerGeomCacheModel, MaxNumLODs) == 280, "Offset mismatch for UMLDeformerGeomCacheModel::MaxNumLODs");
static_assert(offsetof(UMLDeformerGeomCacheModel, InputInfo) == 288, "Offset mismatch for UMLDeformerGeomCacheModel::InputInfo");
static_assert(offsetof(UMLDeformerGeomCacheModel, VertexMap) == 296, "Offset mismatch for UMLDeformerGeomCacheModel::VertexMap");
static_assert(offsetof(UMLDeformerGeomCacheModel, TrainingDataProcessorSettings) == 312, "Offset mismatch for UMLDeformerGeomCacheModel::TrainingDataProcessorSettings");
static_assert(offsetof(UMLDeformerGeomCacheModel, SkeletalMesh) == 320, "Offset mismatch for UMLDeformerGeomCacheModel::SkeletalMesh");

// /Script/MLDeformerFramework.MLDeformerGeomCacheVizSettings
// Kind: Class; super: MLDeformerVizSettings
class UMLDeformerGeomCacheVizSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MLDeformerFramework.MLDeformerGraphDebugDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UMLDeformerGraphDebugDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MLDeformerFramework.MLDeformerGraphDebugDataProvider
// Kind: Class; super: ComputeDataProvider
class UMLDeformerGraphDebugDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DeformerComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* DeformerAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMLDeformerGraphDebugDataProvider, DeformerComponent) == 40, "Offset mismatch for UMLDeformerGraphDebugDataProvider::DeformerComponent");
static_assert(offsetof(UMLDeformerGraphDebugDataProvider, DeformerAsset) == 48, "Offset mismatch for UMLDeformerGraphDebugDataProvider::DeformerAsset");

// /Script/MLDeformerFramework.MLDeformerInputInfo
// Kind: Class; super: Object
class UMLDeformerInputInfo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SkeletalMesh[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    TArray<void*> BoneNames; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveNames; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumBaseMeshVertices; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTargetMeshVertices; // 0x0064 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMLDeformerInputInfo, SkeletalMesh) == 40, "Offset mismatch for UMLDeformerInputInfo::SkeletalMesh");
static_assert(offsetof(UMLDeformerInputInfo, BoneNames) == 64, "Offset mismatch for UMLDeformerInputInfo::BoneNames");
static_assert(offsetof(UMLDeformerInputInfo, CurveNames) == 80, "Offset mismatch for UMLDeformerInputInfo::CurveNames");
static_assert(offsetof(UMLDeformerInputInfo, NumBaseMeshVertices) == 96, "Offset mismatch for UMLDeformerInputInfo::NumBaseMeshVertices");
static_assert(offsetof(UMLDeformerInputInfo, NumTargetMeshVertices) == 100, "Offset mismatch for UMLDeformerInputInfo::NumTargetMeshVertices");

// /Script/MLDeformerFramework.MLDeformerModel
// Kind: Class; super: Object
class UMLDeformerModel
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::int32_t NumBaseMeshVerts; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTargetMeshVerts; // 0x00F4 (Size: 0x4, Type: IntProperty)
    FString TrainingDevice; // 0x00F8 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0108
    std::int32_t MaxNumLODs; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x011C
    void* InputInfo; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VertexMap; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    void* TrainingDataProcessorSettings; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* SkeletalMesh; // 0x0140 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMLDeformerModel, NumBaseMeshVerts) == 240, "Offset mismatch for UMLDeformerModel::NumBaseMeshVerts");
static_assert(offsetof(UMLDeformerModel, NumTargetMeshVerts) == 244, "Offset mismatch for UMLDeformerModel::NumTargetMeshVerts");
static_assert(offsetof(UMLDeformerModel, TrainingDevice) == 248, "Offset mismatch for UMLDeformerModel::TrainingDevice");
static_assert(offsetof(UMLDeformerModel, MaxNumLODs) == 280, "Offset mismatch for UMLDeformerModel::MaxNumLODs");
static_assert(offsetof(UMLDeformerModel, InputInfo) == 288, "Offset mismatch for UMLDeformerModel::InputInfo");
static_assert(offsetof(UMLDeformerModel, VertexMap) == 296, "Offset mismatch for UMLDeformerModel::VertexMap");
static_assert(offsetof(UMLDeformerModel, TrainingDataProcessorSettings) == 312, "Offset mismatch for UMLDeformerModel::TrainingDataProcessorSettings");
static_assert(offsetof(UMLDeformerModel, SkeletalMesh) == 320, "Offset mismatch for UMLDeformerModel::SkeletalMesh");

// /Script/MLDeformerFramework.MLDeformerModelInstance
// Kind: Class; super: Object
class UMLDeformerModelInstance
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Model; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* SkeletalMeshComponent; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMLDeformerModelInstance, Model) == 48, "Offset mismatch for UMLDeformerModelInstance::Model");
static_assert(offsetof(UMLDeformerModelInstance, SkeletalMeshComponent) == 56, "Offset mismatch for UMLDeformerModelInstance::SkeletalMeshComponent");

// /Script/MLDeformerFramework.MLDeformerMorphModel
// Kind: Class; super: MLDeformerGeomCacheModel
class UMLDeformerMorphModel
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    std::uint8_t bClampMorphWeights; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0159
    TArray<void*> MorphTargetDeltas; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumMorphTargets; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0174
    std::uint64_t CompressedMorphDataSizeInBytes; // 0x0178 (Size: 0x8, Type: UInt64Property)
    std::uint64_t UncompressedMorphDataSizeInBytes; // 0x0180 (Size: 0x8, Type: UInt64Property)
    TArray<void*> MorphTargetErrorOrder; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MorphTargetErrors; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaxMorphWeights; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MorphTargetsMinMaxWeights; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QualityLevels; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIncludeNormals; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x01D9
    float MorphDeltaZeroThreshold; // 0x01DC (Size: 0x4, Type: FloatProperty)
    float MorphCompressionLevel; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaskChannel; // 0x01E4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInvertMaskChannel; // 0x01E5 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMLDeformerMorphModel, bClampMorphWeights) == 344, "Offset mismatch for UMLDeformerMorphModel::bClampMorphWeights");
static_assert(offsetof(UMLDeformerMorphModel, MorphTargetDeltas) == 352, "Offset mismatch for UMLDeformerMorphModel::MorphTargetDeltas");
static_assert(offsetof(UMLDeformerMorphModel, NumMorphTargets) == 368, "Offset mismatch for UMLDeformerMorphModel::NumMorphTargets");
static_assert(offsetof(UMLDeformerMorphModel, CompressedMorphDataSizeInBytes) == 376, "Offset mismatch for UMLDeformerMorphModel::CompressedMorphDataSizeInBytes");
static_assert(offsetof(UMLDeformerMorphModel, UncompressedMorphDataSizeInBytes) == 384, "Offset mismatch for UMLDeformerMorphModel::UncompressedMorphDataSizeInBytes");
static_assert(offsetof(UMLDeformerMorphModel, MorphTargetErrorOrder) == 392, "Offset mismatch for UMLDeformerMorphModel::MorphTargetErrorOrder");
static_assert(offsetof(UMLDeformerMorphModel, MorphTargetErrors) == 408, "Offset mismatch for UMLDeformerMorphModel::MorphTargetErrors");
static_assert(offsetof(UMLDeformerMorphModel, MaxMorphWeights) == 424, "Offset mismatch for UMLDeformerMorphModel::MaxMorphWeights");
static_assert(offsetof(UMLDeformerMorphModel, MorphTargetsMinMaxWeights) == 440, "Offset mismatch for UMLDeformerMorphModel::MorphTargetsMinMaxWeights");
static_assert(offsetof(UMLDeformerMorphModel, QualityLevels) == 456, "Offset mismatch for UMLDeformerMorphModel::QualityLevels");
static_assert(offsetof(UMLDeformerMorphModel, bIncludeNormals) == 472, "Offset mismatch for UMLDeformerMorphModel::bIncludeNormals");
static_assert(offsetof(UMLDeformerMorphModel, MorphDeltaZeroThreshold) == 476, "Offset mismatch for UMLDeformerMorphModel::MorphDeltaZeroThreshold");
static_assert(offsetof(UMLDeformerMorphModel, MorphCompressionLevel) == 480, "Offset mismatch for UMLDeformerMorphModel::MorphCompressionLevel");
static_assert(offsetof(UMLDeformerMorphModel, MaskChannel) == 484, "Offset mismatch for UMLDeformerMorphModel::MaskChannel");
static_assert(offsetof(UMLDeformerMorphModel, bInvertMaskChannel) == 485, "Offset mismatch for UMLDeformerMorphModel::bInvertMaskChannel");

// /Script/MLDeformerFramework.MLDeformerMorphModelInputInfo
// Kind: Class; super: MLDeformerInputInfo
class UMLDeformerMorphModelInputInfo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SkeletalMesh[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    TArray<void*> BoneNames; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveNames; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumBaseMeshVertices; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTargetMeshVertices; // 0x0064 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMLDeformerMorphModelInputInfo, SkeletalMesh) == 40, "Offset mismatch for UMLDeformerMorphModelInputInfo::SkeletalMesh");
static_assert(offsetof(UMLDeformerMorphModelInputInfo, BoneNames) == 64, "Offset mismatch for UMLDeformerMorphModelInputInfo::BoneNames");
static_assert(offsetof(UMLDeformerMorphModelInputInfo, CurveNames) == 80, "Offset mismatch for UMLDeformerMorphModelInputInfo::CurveNames");
static_assert(offsetof(UMLDeformerMorphModelInputInfo, NumBaseMeshVertices) == 96, "Offset mismatch for UMLDeformerMorphModelInputInfo::NumBaseMeshVertices");
static_assert(offsetof(UMLDeformerMorphModelInputInfo, NumTargetMeshVertices) == 100, "Offset mismatch for UMLDeformerMorphModelInputInfo::NumTargetMeshVertices");

// /Script/MLDeformerFramework.MLDeformerMorphModelInstance
// Kind: Class; super: MLDeformerModelInstance
class UMLDeformerMorphModelInstance
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Model; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* SkeletalMeshComponent; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMLDeformerMorphModelInstance, Model) == 48, "Offset mismatch for UMLDeformerMorphModelInstance::Model");
static_assert(offsetof(UMLDeformerMorphModelInstance, SkeletalMeshComponent) == 56, "Offset mismatch for UMLDeformerMorphModelInstance::SkeletalMeshComponent");

// /Script/MLDeformerFramework.MLDeformerMorphModelVizSettings
// Kind: Class; super: MLDeformerGeomCacheVizSettings
class UMLDeformerMorphModelVizSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float MorphTargetDeltaThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::int32_t MorphTargetNumber; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t bDrawMorphTargets; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMLDeformerMorphModelVizSettings, MorphTargetDeltaThreshold) == 40, "Offset mismatch for UMLDeformerMorphModelVizSettings::MorphTargetDeltaThreshold");
static_assert(offsetof(UMLDeformerMorphModelVizSettings, MorphTargetNumber) == 44, "Offset mismatch for UMLDeformerMorphModelVizSettings::MorphTargetNumber");
static_assert(offsetof(UMLDeformerMorphModelVizSettings, bDrawMorphTargets) == 48, "Offset mismatch for UMLDeformerMorphModelVizSettings::bDrawMorphTargets");

// /Script/MLDeformerFramework.MLDeformerTrainingDataProcessorSettings
// Kind: Class; super: Object
class UMLDeformerTrainingDataProcessorSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AnimList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BoneList[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t BoneGroups[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::int32_t NumOutputFrames; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t bReduceFrames; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemixPoses; // 0x005D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x005E
    std::int32_t RandomSeed; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0064
    TSoftObjectPtr<void> OutputAnimSequence; // 0x0068 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UMLDeformerTrainingDataProcessorSettings, AnimList) == 40, "Offset mismatch for UMLDeformerTrainingDataProcessorSettings::AnimList");
static_assert(offsetof(UMLDeformerTrainingDataProcessorSettings, BoneList) == 56, "Offset mismatch for UMLDeformerTrainingDataProcessorSettings::BoneList");
static_assert(offsetof(UMLDeformerTrainingDataProcessorSettings, BoneGroups) == 72, "Offset mismatch for UMLDeformerTrainingDataProcessorSettings::BoneGroups");
static_assert(offsetof(UMLDeformerTrainingDataProcessorSettings, NumOutputFrames) == 88, "Offset mismatch for UMLDeformerTrainingDataProcessorSettings::NumOutputFrames");
static_assert(offsetof(UMLDeformerTrainingDataProcessorSettings, bReduceFrames) == 92, "Offset mismatch for UMLDeformerTrainingDataProcessorSettings::bReduceFrames");
static_assert(offsetof(UMLDeformerTrainingDataProcessorSettings, bRemixPoses) == 93, "Offset mismatch for UMLDeformerTrainingDataProcessorSettings::bRemixPoses");
static_assert(offsetof(UMLDeformerTrainingDataProcessorSettings, RandomSeed) == 96, "Offset mismatch for UMLDeformerTrainingDataProcessorSettings::RandomSeed");
static_assert(offsetof(UMLDeformerTrainingDataProcessorSettings, OutputAnimSequence) == 104, "Offset mismatch for UMLDeformerTrainingDataProcessorSettings::OutputAnimSequence");

// /Script/MLDeformerFramework.MLDeformerVizSettings
// Kind: Class; super: Object
class UMLDeformerVizSettings
{
public:
    std::uint8_t Opaque[1];
};
