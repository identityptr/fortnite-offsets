/**
 * decamp dumper generated SDK
 * Package: /Script/NearestNeighborModel
 */
#pragma once
#include "Basic.h"

// /Script/NearestNeighborModel.ClothPartData
// Kind: ScriptStruct; super: none
struct FClothPartData
{
public:
    std::int32_t PCACoeffNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint32_t PCACoeffStart; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t NumVertices; // 0x0008 (Size: 0x4, Type: UInt32Property)
    std::uint32_t NumNeighbors; // 0x000C (Size: 0x4, Type: UInt32Property)
    TArray<void*> VertexMap; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PCABasis; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VertexMean; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetNeighborCoeffs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetNeighborOffsets; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetNeighborIndexMap; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NeighborCoeffs; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FClothPartData, PCACoeffNum) == 0, "Offset mismatch for FClothPartData::PCACoeffNum");
static_assert(offsetof(FClothPartData, PCACoeffStart) == 4, "Offset mismatch for FClothPartData::PCACoeffStart");
static_assert(offsetof(FClothPartData, NumVertices) == 8, "Offset mismatch for FClothPartData::NumVertices");
static_assert(offsetof(FClothPartData, NumNeighbors) == 12, "Offset mismatch for FClothPartData::NumNeighbors");
static_assert(offsetof(FClothPartData, VertexMap) == 16, "Offset mismatch for FClothPartData::VertexMap");
static_assert(offsetof(FClothPartData, PCABasis) == 32, "Offset mismatch for FClothPartData::PCABasis");
static_assert(offsetof(FClothPartData, VertexMean) == 48, "Offset mismatch for FClothPartData::VertexMean");
static_assert(offsetof(FClothPartData, AssetNeighborCoeffs) == 64, "Offset mismatch for FClothPartData::AssetNeighborCoeffs");
static_assert(offsetof(FClothPartData, AssetNeighborOffsets) == 80, "Offset mismatch for FClothPartData::AssetNeighborOffsets");
static_assert(offsetof(FClothPartData, AssetNeighborIndexMap) == 96, "Offset mismatch for FClothPartData::AssetNeighborIndexMap");
static_assert(offsetof(FClothPartData, NeighborCoeffs) == 112, "Offset mismatch for FClothPartData::NeighborCoeffs");

// /Script/NearestNeighborModel.NearestNeighborNetworkParameter
// Kind: ScriptStruct; super: none
struct FNearestNeighborNetworkParameter
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Shape; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNearestNeighborNetworkParameter, Values) == 0, "Offset mismatch for FNearestNeighborNetworkParameter::Values");
static_assert(offsetof(FNearestNeighborNetworkParameter, Shape) == 16, "Offset mismatch for FNearestNeighborNetworkParameter::Shape");

// /Script/NearestNeighborModel.NearestNeighborModel
// Kind: Class; super: MLDeformerMorphModel
class UNearestNeighborModel
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::int32_t InputDim; // 0x01F8 (Size: 0x4, Type: IntProperty)
    std::int32_t OutputDim; // 0x01FC (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseInputMultipliers; // 0x0200 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0201
    TArray<void*> InputMultipliers; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputsMin; // 0x0218 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputsMax; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUsePCA; // 0x0238 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0239
    std::int32_t NumBasisPerSection; // 0x023C (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseDualQuaternionDeltas; // 0x0240 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0241
    float DecayFactor; // 0x0244 (Size: 0x4, Type: FloatProperty)
    float NearestNeighborOffsetWeight; // 0x0248 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseRBF; // 0x024C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x024D
    float RBFSigma; // 0x0250 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0254
    TArray<void*> Sections; // 0x0258 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PCACoeffStarts; // 0x0268 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsReadyForTraining; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReadyForInference; // 0x0279 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x6]; // 0x027A
    void* OptimizedNetwork; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNearestNeighborModel, InputDim) == 504, "Offset mismatch for UNearestNeighborModel::InputDim");
static_assert(offsetof(UNearestNeighborModel, OutputDim) == 508, "Offset mismatch for UNearestNeighborModel::OutputDim");
static_assert(offsetof(UNearestNeighborModel, bUseInputMultipliers) == 512, "Offset mismatch for UNearestNeighborModel::bUseInputMultipliers");
static_assert(offsetof(UNearestNeighborModel, InputMultipliers) == 520, "Offset mismatch for UNearestNeighborModel::InputMultipliers");
static_assert(offsetof(UNearestNeighborModel, InputsMin) == 536, "Offset mismatch for UNearestNeighborModel::InputsMin");
static_assert(offsetof(UNearestNeighborModel, InputsMax) == 552, "Offset mismatch for UNearestNeighborModel::InputsMax");
static_assert(offsetof(UNearestNeighborModel, bUsePCA) == 568, "Offset mismatch for UNearestNeighborModel::bUsePCA");
static_assert(offsetof(UNearestNeighborModel, NumBasisPerSection) == 572, "Offset mismatch for UNearestNeighborModel::NumBasisPerSection");
static_assert(offsetof(UNearestNeighborModel, bUseDualQuaternionDeltas) == 576, "Offset mismatch for UNearestNeighborModel::bUseDualQuaternionDeltas");
static_assert(offsetof(UNearestNeighborModel, DecayFactor) == 580, "Offset mismatch for UNearestNeighborModel::DecayFactor");
static_assert(offsetof(UNearestNeighborModel, NearestNeighborOffsetWeight) == 584, "Offset mismatch for UNearestNeighborModel::NearestNeighborOffsetWeight");
static_assert(offsetof(UNearestNeighborModel, bUseRBF) == 588, "Offset mismatch for UNearestNeighborModel::bUseRBF");
static_assert(offsetof(UNearestNeighborModel, RBFSigma) == 592, "Offset mismatch for UNearestNeighborModel::RBFSigma");
static_assert(offsetof(UNearestNeighborModel, Sections) == 600, "Offset mismatch for UNearestNeighborModel::Sections");
static_assert(offsetof(UNearestNeighborModel, PCACoeffStarts) == 616, "Offset mismatch for UNearestNeighborModel::PCACoeffStarts");
static_assert(offsetof(UNearestNeighborModel, bIsReadyForTraining) == 632, "Offset mismatch for UNearestNeighborModel::bIsReadyForTraining");
static_assert(offsetof(UNearestNeighborModel, bIsReadyForInference) == 633, "Offset mismatch for UNearestNeighborModel::bIsReadyForInference");
static_assert(offsetof(UNearestNeighborModel, OptimizedNetwork) == 640, "Offset mismatch for UNearestNeighborModel::OptimizedNetwork");

// /Script/NearestNeighborModel.NearestNeighborModelInputInfo
// Kind: Class; super: MLDeformerMorphModelInputInfo
class UNearestNeighborModelInputInfo
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> RefBoneRotations; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNearestNeighborModelInputInfo, RefBoneRotations) == 104, "Offset mismatch for UNearestNeighborModelInputInfo::RefBoneRotations");

// /Script/NearestNeighborModel.NearestNeighborModelInstance
// Kind: Class; super: MLDeformerMorphModelInstance
class UNearestNeighborModelInstance
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    void* OptimizedNetworkInstance; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNearestNeighborModelInstance, OptimizedNetworkInstance) == 184, "Offset mismatch for UNearestNeighborModelInstance::OptimizedNetworkInstance");

// /Script/NearestNeighborModel.NearestNeighborModelSection
// Kind: Class; super: Object
class UNearestNeighborModelSection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumPCACoeffs; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t NumVertices; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t RuntimeNumNeighbors; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    TArray<void*> RuntimeNeighborCoeffs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsReadyForTraining; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReadyForInference; // 0x0049 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNearestNeighborModelSection, NumPCACoeffs) == 40, "Offset mismatch for UNearestNeighborModelSection::NumPCACoeffs");
static_assert(offsetof(UNearestNeighborModelSection, NumVertices) == 44, "Offset mismatch for UNearestNeighborModelSection::NumVertices");
static_assert(offsetof(UNearestNeighborModelSection, RuntimeNumNeighbors) == 48, "Offset mismatch for UNearestNeighborModelSection::RuntimeNumNeighbors");
static_assert(offsetof(UNearestNeighborModelSection, RuntimeNeighborCoeffs) == 56, "Offset mismatch for UNearestNeighborModelSection::RuntimeNeighborCoeffs");
static_assert(offsetof(UNearestNeighborModelSection, bIsReadyForTraining) == 72, "Offset mismatch for UNearestNeighborModelSection::bIsReadyForTraining");
static_assert(offsetof(UNearestNeighborModelSection, bIsReadyForInference) == 73, "Offset mismatch for UNearestNeighborModelSection::bIsReadyForInference");

// /Script/NearestNeighborModel.NearestNeighborModelVizSettings
// Kind: Class; super: MLDeformerMorphModelVizSettings
class UNearestNeighborModelVizSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float MorphTargetDeltaThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::int32_t MorphTargetNumber; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t bDrawMorphTargets; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNearestNeighborModelVizSettings, MorphTargetDeltaThreshold) == 40, "Offset mismatch for UNearestNeighborModelVizSettings::MorphTargetDeltaThreshold");
static_assert(offsetof(UNearestNeighborModelVizSettings, MorphTargetNumber) == 44, "Offset mismatch for UNearestNeighborModelVizSettings::MorphTargetNumber");
static_assert(offsetof(UNearestNeighborModelVizSettings, bDrawMorphTargets) == 48, "Offset mismatch for UNearestNeighborModelVizSettings::bDrawMorphTargets");

// /Script/NearestNeighborModel.NearestNeighborNetworkLayer
// Kind: Class; super: Object
class UNearestNeighborNetworkLayer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumInputs; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t NumOutputs; // 0x002C (Size: 0x4, Type: IntProperty)
    TArray<void*> Parameters; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNearestNeighborNetworkLayer, NumInputs) == 40, "Offset mismatch for UNearestNeighborNetworkLayer::NumInputs");
static_assert(offsetof(UNearestNeighborNetworkLayer, NumOutputs) == 44, "Offset mismatch for UNearestNeighborNetworkLayer::NumOutputs");
static_assert(offsetof(UNearestNeighborNetworkLayer, Parameters) == 48, "Offset mismatch for UNearestNeighborNetworkLayer::Parameters");

// /Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm
// Kind: Class; super: NearestNeighborNetworkLayer
class UNearestNeighborNetworkLayer_Gemm
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumInputs; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t NumOutputs; // 0x002C (Size: 0x4, Type: IntProperty)
    TArray<void*> Parameters; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNearestNeighborNetworkLayer_Gemm, NumInputs) == 40, "Offset mismatch for UNearestNeighborNetworkLayer_Gemm::NumInputs");
static_assert(offsetof(UNearestNeighborNetworkLayer_Gemm, NumOutputs) == 44, "Offset mismatch for UNearestNeighborNetworkLayer_Gemm::NumOutputs");
static_assert(offsetof(UNearestNeighborNetworkLayer_Gemm, Parameters) == 48, "Offset mismatch for UNearestNeighborNetworkLayer_Gemm::Parameters");

// /Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm_Prelu
// Kind: Class; super: NearestNeighborNetworkLayer
class UNearestNeighborNetworkLayer_Gemm_Prelu
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumInputs; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t NumOutputs; // 0x002C (Size: 0x4, Type: IntProperty)
    TArray<void*> Parameters; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNearestNeighborNetworkLayer_Gemm_Prelu, NumInputs) == 40, "Offset mismatch for UNearestNeighborNetworkLayer_Gemm_Prelu::NumInputs");
static_assert(offsetof(UNearestNeighborNetworkLayer_Gemm_Prelu, NumOutputs) == 44, "Offset mismatch for UNearestNeighborNetworkLayer_Gemm_Prelu::NumOutputs");
static_assert(offsetof(UNearestNeighborNetworkLayer_Gemm_Prelu, Parameters) == 48, "Offset mismatch for UNearestNeighborNetworkLayer_Gemm_Prelu::Parameters");

// /Script/NearestNeighborModel.NearestNeighborOptimizedNetwork
// Kind: Class; super: Object
class UNearestNeighborOptimizedNetwork
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ModelData; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0030
    std::int32_t NumInputs; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t NumOutputs; // 0x0044 (Size: 0x4, Type: IntProperty)
    TArray<void*> Layers; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNearestNeighborOptimizedNetwork, ModelData) == 40, "Offset mismatch for UNearestNeighborOptimizedNetwork::ModelData");
static_assert(offsetof(UNearestNeighborOptimizedNetwork, NumInputs) == 64, "Offset mismatch for UNearestNeighborOptimizedNetwork::NumInputs");
static_assert(offsetof(UNearestNeighborOptimizedNetwork, NumOutputs) == 68, "Offset mismatch for UNearestNeighborOptimizedNetwork::NumOutputs");
static_assert(offsetof(UNearestNeighborOptimizedNetwork, Layers) == 72, "Offset mismatch for UNearestNeighborOptimizedNetwork::Layers");

// /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkInstance
// Kind: Class; super: Object
class UNearestNeighborOptimizedNetworkInstance
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* Network; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNearestNeighborOptimizedNetworkInstance, Network) == 88, "Offset mismatch for UNearestNeighborOptimizedNetworkInstance::Network");

// /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader
// Kind: Class; super: Object
class UNearestNeighborOptimizedNetworkLoader
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusSkeletonWithQuatsDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusSkeletonWithQuatsDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SkinnedMesh; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusSkeletonWithQuatsDataProvider, SkinnedMesh) == 40, "Offset mismatch for UOptimusSkeletonWithQuatsDataProvider::SkinnedMesh");
