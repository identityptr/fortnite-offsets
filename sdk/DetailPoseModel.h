/**
 * decamp dumper generated SDK
 * Package: /Script/DetailPoseModel
 */
#pragma once
#include "Basic.h"

// /Script/DetailPoseModel.DetailPoseModelDetailPose
// Kind: ScriptStruct; super: none
struct FDetailPoseModelDetailPose
{
public:
    TArray<void*> PoseValues; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDetailPoseModelDetailPose, PoseValues) == 0, "Offset mismatch for FDetailPoseModelDetailPose::PoseValues");

// /Script/DetailPoseModel.DetailPoseModel
// Kind: Class; super: NeuralMorphModel
class UDetailPoseModel
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    TArray<void*> DetailPoses; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    float BlendSpeed; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseRBF; // 0x02AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02AD
    float RBFRange; // 0x02B0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDetailPoseModel, DetailPoses) == 664, "Offset mismatch for UDetailPoseModel::DetailPoses");
static_assert(offsetof(UDetailPoseModel, BlendSpeed) == 680, "Offset mismatch for UDetailPoseModel::BlendSpeed");
static_assert(offsetof(UDetailPoseModel, bUseRBF) == 684, "Offset mismatch for UDetailPoseModel::bUseRBF");
static_assert(offsetof(UDetailPoseModel, RBFRange) == 688, "Offset mismatch for UDetailPoseModel::RBFRange");

// /Script/DetailPoseModel.DetailPoseModelInputInfo
// Kind: Class; super: NeuralMorphInputInfo
class UDetailPoseModelInputInfo
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::int32_t NumGlobalMorphTargets; // 0x0090 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDetailPoseModelInputInfo, NumGlobalMorphTargets) == 144, "Offset mismatch for UDetailPoseModelInputInfo::NumGlobalMorphTargets");

// /Script/DetailPoseModel.DetailPoseModelInstance
// Kind: Class; super: NeuralMorphModelInstance
class UDetailPoseModelInstance
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* NetworkInstance; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDetailPoseModelInstance, NetworkInstance) == 144, "Offset mismatch for UDetailPoseModelInstance::NetworkInstance");

// /Script/DetailPoseModel.DetailPoseModelVizSettings
// Kind: Class; super: NeuralMorphModelVizSettings
class UDetailPoseModelVizSettings
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MaskVizMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDetailPoseModelVizSettings, MaskVizMode) == 56, "Offset mismatch for UDetailPoseModelVizSettings::MaskVizMode");
