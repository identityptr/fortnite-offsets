/**
 * decamp dumper generated SDK
 * Package: /Script/AnimationLayering
 */
#pragma once
#include "Basic.h"

// /Script/AnimationLayering.AnimNode_BoneMask
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_BoneMask
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BasePose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> BlendPoses; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlendWeights; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BoneMask[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    void* BoneMaskDefinitionDataAsset; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BodyParts; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurveBlendOption; // 0x0068 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bProcessMeshSpaceAsRootSpace; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    std::int32_t LODThreshold; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t bUpdateSkeletonDataOnDemand; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_BoneMask, BasePose) == 16, "Offset mismatch for FAnimNode_BoneMask::BasePose");
static_assert(offsetof(FAnimNode_BoneMask, BlendPoses) == 32, "Offset mismatch for FAnimNode_BoneMask::BlendPoses");
static_assert(offsetof(FAnimNode_BoneMask, BlendWeights) == 48, "Offset mismatch for FAnimNode_BoneMask::BlendWeights");
static_assert(offsetof(FAnimNode_BoneMask, BoneMask) == 64, "Offset mismatch for FAnimNode_BoneMask::BoneMask");
static_assert(offsetof(FAnimNode_BoneMask, BoneMaskDefinitionDataAsset) == 80, "Offset mismatch for FAnimNode_BoneMask::BoneMaskDefinitionDataAsset");
static_assert(offsetof(FAnimNode_BoneMask, BodyParts) == 88, "Offset mismatch for FAnimNode_BoneMask::BodyParts");
static_assert(offsetof(FAnimNode_BoneMask, CurveBlendOption) == 104, "Offset mismatch for FAnimNode_BoneMask::CurveBlendOption");
static_assert(offsetof(FAnimNode_BoneMask, bProcessMeshSpaceAsRootSpace) == 105, "Offset mismatch for FAnimNode_BoneMask::bProcessMeshSpaceAsRootSpace");
static_assert(offsetof(FAnimNode_BoneMask, LODThreshold) == 108, "Offset mismatch for FAnimNode_BoneMask::LODThreshold");
static_assert(offsetof(FAnimNode_BoneMask, bUpdateSkeletonDataOnDemand) == 112, "Offset mismatch for FAnimNode_BoneMask::bUpdateSkeletonDataOnDemand");

// /Script/AnimationLayering.AnimNode_CopyBoneAdvanced
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_CopyBoneAdvanced
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t SourceBone[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetBone[0xC]; // 0x00D4 (Size: 0xC, Type: StructProperty)
    std::uint8_t TranslationWeight[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    float RotationWeight; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float ScaleWeight; // 0x00FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t ControlSpace; // 0x0100 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0101
    std::uint8_t TranslationSpaceBone[0xC]; // 0x0104 (Size: 0xC, Type: StructProperty)
    std::uint8_t bTranslationInCustomBoneSpace; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPropagateToChildren; // 0x0111 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_CopyBoneAdvanced, SourceBone) == 200, "Offset mismatch for FAnimNode_CopyBoneAdvanced::SourceBone");
static_assert(offsetof(FAnimNode_CopyBoneAdvanced, TargetBone) == 212, "Offset mismatch for FAnimNode_CopyBoneAdvanced::TargetBone");
static_assert(offsetof(FAnimNode_CopyBoneAdvanced, TranslationWeight) == 224, "Offset mismatch for FAnimNode_CopyBoneAdvanced::TranslationWeight");
static_assert(offsetof(FAnimNode_CopyBoneAdvanced, RotationWeight) == 248, "Offset mismatch for FAnimNode_CopyBoneAdvanced::RotationWeight");
static_assert(offsetof(FAnimNode_CopyBoneAdvanced, ScaleWeight) == 252, "Offset mismatch for FAnimNode_CopyBoneAdvanced::ScaleWeight");
static_assert(offsetof(FAnimNode_CopyBoneAdvanced, ControlSpace) == 256, "Offset mismatch for FAnimNode_CopyBoneAdvanced::ControlSpace");
static_assert(offsetof(FAnimNode_CopyBoneAdvanced, TranslationSpaceBone) == 260, "Offset mismatch for FAnimNode_CopyBoneAdvanced::TranslationSpaceBone");
static_assert(offsetof(FAnimNode_CopyBoneAdvanced, bTranslationInCustomBoneSpace) == 272, "Offset mismatch for FAnimNode_CopyBoneAdvanced::bTranslationInCustomBoneSpace");
static_assert(offsetof(FAnimNode_CopyBoneAdvanced, bPropagateToChildren) == 273, "Offset mismatch for FAnimNode_CopyBoneAdvanced::bPropagateToChildren");

// /Script/AnimationLayering.AnimNode_CopyBoneMotion
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_CopyBoneMotion
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t BasePose[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t BasePoseReference[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseBasePose; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E9
    std::uint8_t PoseHistoryTag[0x4]; // 0x00EC (Size: 0x4, Type: NameProperty)
    float Delay; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SourceBone[0xC]; // 0x00F4 (Size: 0xC, Type: StructProperty)
    std::uint8_t BoneToModify[0xC]; // 0x0100 (Size: 0xC, Type: StructProperty)
    std::uint8_t CopySpace[0xC]; // 0x010C (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseRootSpace; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0119
    std::uint8_t ApplySpace[0xC]; // 0x011C (Size: 0xC, Type: StructProperty)
    std::uint8_t TranslationOffset[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationPivot[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurvePrefix[0x4]; // 0x0170 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetCurveName[0x4]; // 0x0174 (Size: 0x4, Type: NameProperty)
    float TargetCurveScale; // 0x0178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TargetCurveComponent; // 0x017C (Size: 0x1, Type: EnumProperty)
    std::uint8_t TargetCurveRotationAxis; // 0x017D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x2]; // 0x017E
    std::uint8_t TranslationX_CurveName[0x4]; // 0x0180 (Size: 0x4, Type: NameProperty)
    std::uint8_t TranslationY_CurveName[0x4]; // 0x0184 (Size: 0x4, Type: NameProperty)
    std::uint8_t TranslationZ_CurveName[0x4]; // 0x0188 (Size: 0x4, Type: NameProperty)
    std::uint8_t RotationRoll_CurveName[0x4]; // 0x018C (Size: 0x4, Type: NameProperty)
    std::uint8_t RotationPitch_CurveName[0x4]; // 0x0190 (Size: 0x4, Type: NameProperty)
    std::uint8_t RotationYaw_CurveName[0x4]; // 0x0194 (Size: 0x4, Type: NameProperty)
    std::uint8_t TranslationScale[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    float TranslationSmoothingTime; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x01B4
    void* TranslationRemapCurve; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    float RotationScale; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    float RotationSmoothingTime; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    void* RotationRemapCurve; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDeltaSmoothing; // 0x01D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_CopyBoneMotion, BasePose) == 200, "Offset mismatch for FAnimNode_CopyBoneMotion::BasePose");
static_assert(offsetof(FAnimNode_CopyBoneMotion, BasePoseReference) == 216, "Offset mismatch for FAnimNode_CopyBoneMotion::BasePoseReference");
static_assert(offsetof(FAnimNode_CopyBoneMotion, bUseBasePose) == 232, "Offset mismatch for FAnimNode_CopyBoneMotion::bUseBasePose");
static_assert(offsetof(FAnimNode_CopyBoneMotion, PoseHistoryTag) == 236, "Offset mismatch for FAnimNode_CopyBoneMotion::PoseHistoryTag");
static_assert(offsetof(FAnimNode_CopyBoneMotion, Delay) == 240, "Offset mismatch for FAnimNode_CopyBoneMotion::Delay");
static_assert(offsetof(FAnimNode_CopyBoneMotion, SourceBone) == 244, "Offset mismatch for FAnimNode_CopyBoneMotion::SourceBone");
static_assert(offsetof(FAnimNode_CopyBoneMotion, BoneToModify) == 256, "Offset mismatch for FAnimNode_CopyBoneMotion::BoneToModify");
static_assert(offsetof(FAnimNode_CopyBoneMotion, CopySpace) == 268, "Offset mismatch for FAnimNode_CopyBoneMotion::CopySpace");
static_assert(offsetof(FAnimNode_CopyBoneMotion, bUseRootSpace) == 280, "Offset mismatch for FAnimNode_CopyBoneMotion::bUseRootSpace");
static_assert(offsetof(FAnimNode_CopyBoneMotion, ApplySpace) == 284, "Offset mismatch for FAnimNode_CopyBoneMotion::ApplySpace");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TranslationOffset) == 296, "Offset mismatch for FAnimNode_CopyBoneMotion::TranslationOffset");
static_assert(offsetof(FAnimNode_CopyBoneMotion, RotationOffset) == 320, "Offset mismatch for FAnimNode_CopyBoneMotion::RotationOffset");
static_assert(offsetof(FAnimNode_CopyBoneMotion, RotationPivot) == 344, "Offset mismatch for FAnimNode_CopyBoneMotion::RotationPivot");
static_assert(offsetof(FAnimNode_CopyBoneMotion, CurvePrefix) == 368, "Offset mismatch for FAnimNode_CopyBoneMotion::CurvePrefix");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TargetCurveName) == 372, "Offset mismatch for FAnimNode_CopyBoneMotion::TargetCurveName");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TargetCurveScale) == 376, "Offset mismatch for FAnimNode_CopyBoneMotion::TargetCurveScale");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TargetCurveComponent) == 380, "Offset mismatch for FAnimNode_CopyBoneMotion::TargetCurveComponent");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TargetCurveRotationAxis) == 381, "Offset mismatch for FAnimNode_CopyBoneMotion::TargetCurveRotationAxis");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TranslationX_CurveName) == 384, "Offset mismatch for FAnimNode_CopyBoneMotion::TranslationX_CurveName");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TranslationY_CurveName) == 388, "Offset mismatch for FAnimNode_CopyBoneMotion::TranslationY_CurveName");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TranslationZ_CurveName) == 392, "Offset mismatch for FAnimNode_CopyBoneMotion::TranslationZ_CurveName");
static_assert(offsetof(FAnimNode_CopyBoneMotion, RotationRoll_CurveName) == 396, "Offset mismatch for FAnimNode_CopyBoneMotion::RotationRoll_CurveName");
static_assert(offsetof(FAnimNode_CopyBoneMotion, RotationPitch_CurveName) == 400, "Offset mismatch for FAnimNode_CopyBoneMotion::RotationPitch_CurveName");
static_assert(offsetof(FAnimNode_CopyBoneMotion, RotationYaw_CurveName) == 404, "Offset mismatch for FAnimNode_CopyBoneMotion::RotationYaw_CurveName");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TranslationScale) == 408, "Offset mismatch for FAnimNode_CopyBoneMotion::TranslationScale");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TranslationSmoothingTime) == 432, "Offset mismatch for FAnimNode_CopyBoneMotion::TranslationSmoothingTime");
static_assert(offsetof(FAnimNode_CopyBoneMotion, TranslationRemapCurve) == 440, "Offset mismatch for FAnimNode_CopyBoneMotion::TranslationRemapCurve");
static_assert(offsetof(FAnimNode_CopyBoneMotion, RotationScale) == 448, "Offset mismatch for FAnimNode_CopyBoneMotion::RotationScale");
static_assert(offsetof(FAnimNode_CopyBoneMotion, RotationSmoothingTime) == 452, "Offset mismatch for FAnimNode_CopyBoneMotion::RotationSmoothingTime");
static_assert(offsetof(FAnimNode_CopyBoneMotion, RotationRemapCurve) == 456, "Offset mismatch for FAnimNode_CopyBoneMotion::RotationRemapCurve");
static_assert(offsetof(FAnimNode_CopyBoneMotion, bDeltaSmoothing) == 464, "Offset mismatch for FAnimNode_CopyBoneMotion::bDeltaSmoothing");

// /Script/AnimationLayering.BoneMask
// Kind: ScriptStruct; super: none
struct FBoneMask
{
public:
    TMap<void*, void*> BoneMaskMap; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FBoneMask, BoneMaskMap) == 0, "Offset mismatch for FBoneMask::BoneMaskMap");

// /Script/AnimationLayering.BoneMaskBodyPartDefinition
// Kind: ScriptStruct; super: none
struct FBoneMaskBodyPartDefinition
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> BranchFilters; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkeletonPoseBoneWeights; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkeletonPoseChildBoneIndices; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBoneMaskBodyPartDefinition, Name) == 0, "Offset mismatch for FBoneMaskBodyPartDefinition::Name");
static_assert(offsetof(FBoneMaskBodyPartDefinition, BranchFilters) == 8, "Offset mismatch for FBoneMaskBodyPartDefinition::BranchFilters");
static_assert(offsetof(FBoneMaskBodyPartDefinition, SkeletonPoseBoneWeights) == 24, "Offset mismatch for FBoneMaskBodyPartDefinition::SkeletonPoseBoneWeights");
static_assert(offsetof(FBoneMaskBodyPartDefinition, SkeletonPoseChildBoneIndices) == 40, "Offset mismatch for FBoneMaskBodyPartDefinition::SkeletonPoseChildBoneIndices");

// /Script/AnimationLayering.BoneMaskBodyPartNameContainer
// Kind: ScriptStruct; super: none
struct FBoneMaskBodyPartNameContainer
{
public:
    TArray<void*> Names; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBoneMaskBodyPartNameContainer, Names) == 0, "Offset mismatch for FBoneMaskBodyPartNameContainer::Names");

// /Script/AnimationLayering.BoneMaskDefinition
// Kind: ScriptStruct; super: none
struct FBoneMaskDefinition
{
public:
    TArray<void*> BodyPartDefinitions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBoneMaskDefinition, BodyPartDefinitions) == 0, "Offset mismatch for FBoneMaskDefinition::BodyPartDefinitions");

// /Script/AnimationLayering.BoneMaskEntry
// Kind: ScriptStruct; super: none
struct FBoneMaskEntry
{
public:
    float LocalSpaceWeight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MeshSpaceWeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBoneMaskEntry, LocalSpaceWeight) == 0, "Offset mismatch for FBoneMaskEntry::LocalSpaceWeight");
static_assert(offsetof(FBoneMaskEntry, MeshSpaceWeight) == 4, "Offset mismatch for FBoneMaskEntry::MeshSpaceWeight");

// /Script/AnimationLayering.BoneMaskPerBoneData
// Kind: ScriptStruct; super: none
struct FBoneMaskPerBoneData
{
public:
    std::int32_t SkeletonPoseBoneIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    float BlendWeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBoneMaskPerBoneData, SkeletonPoseBoneIndex) == 0, "Offset mismatch for FBoneMaskPerBoneData::SkeletonPoseBoneIndex");
static_assert(offsetof(FBoneMaskPerBoneData, BlendWeight) == 4, "Offset mismatch for FBoneMaskPerBoneData::BlendWeight");

// /Script/AnimationLayering.BoneMaskUpdateMultiParam
// Kind: ScriptStruct; super: none
struct FBoneMaskUpdateMultiParam
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float LocalSpaceWeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MeshSpaceWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBoneMaskUpdateMultiParam, Name) == 0, "Offset mismatch for FBoneMaskUpdateMultiParam::Name");
static_assert(offsetof(FBoneMaskUpdateMultiParam, LocalSpaceWeight) == 4, "Offset mismatch for FBoneMaskUpdateMultiParam::LocalSpaceWeight");
static_assert(offsetof(FBoneMaskUpdateMultiParam, MeshSpaceWeight) == 8, "Offset mismatch for FBoneMaskUpdateMultiParam::MeshSpaceWeight");

// /Script/AnimationLayering.BoneMaskDefinitionDataAsset
// Kind: Class; super: DataAsset
class UBoneMaskDefinitionDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t BoneMaskDefinition[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBoneMaskDefinitionDataAsset, BoneMaskDefinition) == 40, "Offset mismatch for UBoneMaskDefinitionDataAsset::BoneMaskDefinition");
