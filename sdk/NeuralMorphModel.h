/**
 * decamp dumper generated SDK
 * Package: /Script/NeuralMorphModel
 */
#pragma once
#include "Basic.h"

// /Script/NeuralMorphModel.NeuralMorphBoneGroup
// Kind: ScriptStruct; super: none
struct FNeuralMorphBoneGroup
{
public:
    FName GroupName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> BoneNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNeuralMorphBoneGroup, GroupName) == 0, "Offset mismatch for FNeuralMorphBoneGroup::GroupName");
static_assert(offsetof(FNeuralMorphBoneGroup, BoneNames) == 8, "Offset mismatch for FNeuralMorphBoneGroup::BoneNames");

// /Script/NeuralMorphModel.NeuralMorphCurveGroup
// Kind: ScriptStruct; super: none
struct FNeuralMorphCurveGroup
{
public:
    FName GroupName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> CurveNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNeuralMorphCurveGroup, GroupName) == 0, "Offset mismatch for FNeuralMorphCurveGroup::GroupName");
static_assert(offsetof(FNeuralMorphCurveGroup, CurveNames) == 8, "Offset mismatch for FNeuralMorphCurveGroup::CurveNames");

// /Script/NeuralMorphModel.NeuralMorphMaskInfo
// Kind: ScriptStruct; super: none
struct FNeuralMorphMaskInfo
{
public:
    TArray<void*> BoneNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaskMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    FName VertexAttributeName; // 0x0014 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNeuralMorphMaskInfo, BoneNames) == 0, "Offset mismatch for FNeuralMorphMaskInfo::BoneNames");
static_assert(offsetof(FNeuralMorphMaskInfo, MaskMode) == 16, "Offset mismatch for FNeuralMorphMaskInfo::MaskMode");
static_assert(offsetof(FNeuralMorphMaskInfo, VertexAttributeName) == 20, "Offset mismatch for FNeuralMorphMaskInfo::VertexAttributeName");

// /Script/NeuralMorphModel.NeuralMorphInputInfo
// Kind: Class; super: MLDeformerMorphModelInputInfo
class UNeuralMorphInputInfo
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> BoneGroups; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveGroups; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SkinningMode; // 0x0088 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNeuralMorphInputInfo, BoneGroups) == 104, "Offset mismatch for UNeuralMorphInputInfo::BoneGroups");
static_assert(offsetof(UNeuralMorphInputInfo, CurveGroups) == 120, "Offset mismatch for UNeuralMorphInputInfo::CurveGroups");
static_assert(offsetof(UNeuralMorphInputInfo, SkinningMode) == 136, "Offset mismatch for UNeuralMorphInputInfo::SkinningMode");

// /Script/NeuralMorphModel.NeuralMorphMLP
// Kind: Class; super: Object
class UNeuralMorphMLP
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Layers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNeuralMorphMLP, Layers) == 40, "Offset mismatch for UNeuralMorphMLP::Layers");

// /Script/NeuralMorphModel.NeuralMorphMLPLayer
// Kind: Class; super: Object
class UNeuralMorphMLPLayer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumInputs; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t NumOutputs; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t Depth; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    TArray<void*> Weights; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Biases; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNeuralMorphMLPLayer, NumInputs) == 40, "Offset mismatch for UNeuralMorphMLPLayer::NumInputs");
static_assert(offsetof(UNeuralMorphMLPLayer, NumOutputs) == 44, "Offset mismatch for UNeuralMorphMLPLayer::NumOutputs");
static_assert(offsetof(UNeuralMorphMLPLayer, Depth) == 48, "Offset mismatch for UNeuralMorphMLPLayer::Depth");
static_assert(offsetof(UNeuralMorphMLPLayer, Weights) == 56, "Offset mismatch for UNeuralMorphMLPLayer::Weights");
static_assert(offsetof(UNeuralMorphMLPLayer, Biases) == 72, "Offset mismatch for UNeuralMorphMLPLayer::Biases");

// /Script/NeuralMorphModel.NeuralMorphModel
// Kind: Class; super: MLDeformerMorphModel
class UNeuralMorphModel
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    TArray<void*> BoneGroups; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveGroups; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> BoneMaskInfos; // 0x0218 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> BoneGroupMaskInfos; // 0x0228 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> BoneMaskInfoMap; // 0x0238 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> BoneGroupMaskInfoMap; // 0x0248 (Size: 0x10, Type: MapProperty)
    std::uint8_t Mode; // 0x0258 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0259
    std::int32_t LocalNumMorphTargetsPerBone; // 0x025C (Size: 0x4, Type: IntProperty)
    std::int32_t GlobalNumMorphTargets; // 0x0260 (Size: 0x4, Type: IntProperty)
    std::int32_t NumIterations; // 0x0264 (Size: 0x4, Type: IntProperty)
    std::int32_t LocalNumHiddenLayers; // 0x0268 (Size: 0x4, Type: IntProperty)
    std::int32_t LocalNumNeuronsPerLayer; // 0x026C (Size: 0x4, Type: IntProperty)
    std::int32_t GlobalNumHiddenLayers; // 0x0270 (Size: 0x4, Type: IntProperty)
    std::int32_t GlobalNumNeuronsPerLayer; // 0x0274 (Size: 0x4, Type: IntProperty)
    std::int32_t BatchSize; // 0x0278 (Size: 0x4, Type: IntProperty)
    float LearningRate; // 0x027C (Size: 0x4, Type: FloatProperty)
    float RegularizationFactor; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableBoneMasks; // 0x0284 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0285
    float SmoothLossBeta; // 0x0288 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SkinningMode; // 0x028C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x028D
    void* NeuralMorphNetwork; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNeuralMorphModel, BoneGroups) == 504, "Offset mismatch for UNeuralMorphModel::BoneGroups");
static_assert(offsetof(UNeuralMorphModel, CurveGroups) == 520, "Offset mismatch for UNeuralMorphModel::CurveGroups");
static_assert(offsetof(UNeuralMorphModel, BoneMaskInfos) == 536, "Offset mismatch for UNeuralMorphModel::BoneMaskInfos");
static_assert(offsetof(UNeuralMorphModel, BoneGroupMaskInfos) == 552, "Offset mismatch for UNeuralMorphModel::BoneGroupMaskInfos");
static_assert(offsetof(UNeuralMorphModel, BoneMaskInfoMap) == 568, "Offset mismatch for UNeuralMorphModel::BoneMaskInfoMap");
static_assert(offsetof(UNeuralMorphModel, BoneGroupMaskInfoMap) == 584, "Offset mismatch for UNeuralMorphModel::BoneGroupMaskInfoMap");
static_assert(offsetof(UNeuralMorphModel, Mode) == 600, "Offset mismatch for UNeuralMorphModel::Mode");
static_assert(offsetof(UNeuralMorphModel, LocalNumMorphTargetsPerBone) == 604, "Offset mismatch for UNeuralMorphModel::LocalNumMorphTargetsPerBone");
static_assert(offsetof(UNeuralMorphModel, GlobalNumMorphTargets) == 608, "Offset mismatch for UNeuralMorphModel::GlobalNumMorphTargets");
static_assert(offsetof(UNeuralMorphModel, NumIterations) == 612, "Offset mismatch for UNeuralMorphModel::NumIterations");
static_assert(offsetof(UNeuralMorphModel, LocalNumHiddenLayers) == 616, "Offset mismatch for UNeuralMorphModel::LocalNumHiddenLayers");
static_assert(offsetof(UNeuralMorphModel, LocalNumNeuronsPerLayer) == 620, "Offset mismatch for UNeuralMorphModel::LocalNumNeuronsPerLayer");
static_assert(offsetof(UNeuralMorphModel, GlobalNumHiddenLayers) == 624, "Offset mismatch for UNeuralMorphModel::GlobalNumHiddenLayers");
static_assert(offsetof(UNeuralMorphModel, GlobalNumNeuronsPerLayer) == 628, "Offset mismatch for UNeuralMorphModel::GlobalNumNeuronsPerLayer");
static_assert(offsetof(UNeuralMorphModel, BatchSize) == 632, "Offset mismatch for UNeuralMorphModel::BatchSize");
static_assert(offsetof(UNeuralMorphModel, LearningRate) == 636, "Offset mismatch for UNeuralMorphModel::LearningRate");
static_assert(offsetof(UNeuralMorphModel, RegularizationFactor) == 640, "Offset mismatch for UNeuralMorphModel::RegularizationFactor");
static_assert(offsetof(UNeuralMorphModel, bEnableBoneMasks) == 644, "Offset mismatch for UNeuralMorphModel::bEnableBoneMasks");
static_assert(offsetof(UNeuralMorphModel, SmoothLossBeta) == 648, "Offset mismatch for UNeuralMorphModel::SmoothLossBeta");
static_assert(offsetof(UNeuralMorphModel, SkinningMode) == 652, "Offset mismatch for UNeuralMorphModel::SkinningMode");
static_assert(offsetof(UNeuralMorphModel, NeuralMorphNetwork) == 656, "Offset mismatch for UNeuralMorphModel::NeuralMorphNetwork");

// /Script/NeuralMorphModel.NeuralMorphModelInstance
// Kind: Class; super: MLDeformerMorphModelInstance
class UNeuralMorphModelInstance
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* NetworkInstance; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNeuralMorphModelInstance, NetworkInstance) == 144, "Offset mismatch for UNeuralMorphModelInstance::NetworkInstance");

// /Script/NeuralMorphModel.NeuralMorphModelVizSettings
// Kind: Class; super: MLDeformerMorphModelVizSettings
class UNeuralMorphModelVizSettings
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MaskVizMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNeuralMorphModelVizSettings, MaskVizMode) == 56, "Offset mismatch for UNeuralMorphModelVizSettings::MaskVizMode");

// /Script/NeuralMorphModel.NeuralMorphNetwork
// Kind: Class; super: Object
class UNeuralMorphNetwork
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MainMLP; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* GroupMLP; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* MainModelData; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0040
    void* GroupModelData; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0058
    TArray<void*> InputMeans; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputStd; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Mode; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0089
    std::int32_t NumMorphs; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t NumMorphsPerBone; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t NumBones; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::int32_t NumCurves; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::int32_t NumFloatsPerCurve; // 0x009C (Size: 0x4, Type: IntProperty)
    std::int32_t NumGroups; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t NumItemsPerGroup; // 0x00A4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNeuralMorphNetwork, MainMLP) == 40, "Offset mismatch for UNeuralMorphNetwork::MainMLP");
static_assert(offsetof(UNeuralMorphNetwork, GroupMLP) == 48, "Offset mismatch for UNeuralMorphNetwork::GroupMLP");
static_assert(offsetof(UNeuralMorphNetwork, MainModelData) == 56, "Offset mismatch for UNeuralMorphNetwork::MainModelData");
static_assert(offsetof(UNeuralMorphNetwork, GroupModelData) == 80, "Offset mismatch for UNeuralMorphNetwork::GroupModelData");
static_assert(offsetof(UNeuralMorphNetwork, InputMeans) == 104, "Offset mismatch for UNeuralMorphNetwork::InputMeans");
static_assert(offsetof(UNeuralMorphNetwork, InputStd) == 120, "Offset mismatch for UNeuralMorphNetwork::InputStd");
static_assert(offsetof(UNeuralMorphNetwork, Mode) == 136, "Offset mismatch for UNeuralMorphNetwork::Mode");
static_assert(offsetof(UNeuralMorphNetwork, NumMorphs) == 140, "Offset mismatch for UNeuralMorphNetwork::NumMorphs");
static_assert(offsetof(UNeuralMorphNetwork, NumMorphsPerBone) == 144, "Offset mismatch for UNeuralMorphNetwork::NumMorphsPerBone");
static_assert(offsetof(UNeuralMorphNetwork, NumBones) == 148, "Offset mismatch for UNeuralMorphNetwork::NumBones");
static_assert(offsetof(UNeuralMorphNetwork, NumCurves) == 152, "Offset mismatch for UNeuralMorphNetwork::NumCurves");
static_assert(offsetof(UNeuralMorphNetwork, NumFloatsPerCurve) == 156, "Offset mismatch for UNeuralMorphNetwork::NumFloatsPerCurve");
static_assert(offsetof(UNeuralMorphNetwork, NumGroups) == 160, "Offset mismatch for UNeuralMorphNetwork::NumGroups");
static_assert(offsetof(UNeuralMorphNetwork, NumItemsPerGroup) == 164, "Offset mismatch for UNeuralMorphNetwork::NumItemsPerGroup");

// /Script/NeuralMorphModel.NeuralMorphNetworkInstance
// Kind: Class; super: Object
class UNeuralMorphNetworkInstance
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Network; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNeuralMorphNetworkInstance, Network) == 120, "Offset mismatch for UNeuralMorphNetworkInstance::Network");
