/**
 * decamp dumper generated SDK
 * Package: /Script/IKRig
 */
#pragma once
#include "Basic.h"

// /Script/IKRig.AnimNode_IKRig
// Kind: ScriptStruct; super: AnimNode_CustomProperty
struct FAnimNode_IKRig
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t Source[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    void* RigDefinitionAsset; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Goals; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bStartFromRefPose; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AlphaInputType; // 0x0081 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0083
    float Alpha; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t AlphaBoolBlend[0x48]; // 0x0090 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x00D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaScaleBiasClamp[0x12C]; // 0x00DC (Size: 0x12C, Type: StructProperty)
    TArray<void*> GoalCreators; // 0x0208 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_IKRig, Source) == 88, "Offset mismatch for FAnimNode_IKRig::Source");
static_assert(offsetof(FAnimNode_IKRig, RigDefinitionAsset) == 104, "Offset mismatch for FAnimNode_IKRig::RigDefinitionAsset");
static_assert(offsetof(FAnimNode_IKRig, Goals) == 112, "Offset mismatch for FAnimNode_IKRig::Goals");
static_assert(offsetof(FAnimNode_IKRig, bStartFromRefPose) == 128, "Offset mismatch for FAnimNode_IKRig::bStartFromRefPose");
static_assert(offsetof(FAnimNode_IKRig, AlphaInputType) == 129, "Offset mismatch for FAnimNode_IKRig::AlphaInputType");
static_assert(offsetof(FAnimNode_IKRig, bAlphaBoolEnabled) == 130, "Offset mismatch for FAnimNode_IKRig::bAlphaBoolEnabled");
static_assert(offsetof(FAnimNode_IKRig, Alpha) == 132, "Offset mismatch for FAnimNode_IKRig::Alpha");
static_assert(offsetof(FAnimNode_IKRig, AlphaScaleBias) == 136, "Offset mismatch for FAnimNode_IKRig::AlphaScaleBias");
static_assert(offsetof(FAnimNode_IKRig, AlphaBoolBlend) == 144, "Offset mismatch for FAnimNode_IKRig::AlphaBoolBlend");
static_assert(offsetof(FAnimNode_IKRig, AlphaCurveName) == 216, "Offset mismatch for FAnimNode_IKRig::AlphaCurveName");
static_assert(offsetof(FAnimNode_IKRig, AlphaScaleBiasClamp) == 220, "Offset mismatch for FAnimNode_IKRig::AlphaScaleBiasClamp");
static_assert(offsetof(FAnimNode_IKRig, GoalCreators) == 520, "Offset mismatch for FAnimNode_IKRig::GoalCreators");

// /Script/IKRig.AnimNode_RetargetPoseFromMesh
// Kind: ScriptStruct; super: AnimNode_CustomProperty
struct FAnimNode_RetargetPoseFromMesh
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t Source[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t RetargetFrom; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    TWeakObjectPtr<void> SourceMeshComponent; // 0x006C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0074
    void* IKRetargeterAsset; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CustomRetargetProfile[0xD8]; // 0x0080 (Size: 0xD8, Type: StructProperty)
    std::uint8_t bUseCustomOverrideSets; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0159
    TArray<void*> OverrideSetsToApply; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::int32_t LODThreshold; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::int32_t LODThresholdForIK; // 0x0174 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSuppressWarnings; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAttachedParent; // 0x0179 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x017A
    std::uint8_t RuntimeVariables[0x10]; // 0x0180 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> BoundCurveValues; // 0x0190 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, Source) == 88, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::Source");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, RetargetFrom) == 104, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::RetargetFrom");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, SourceMeshComponent) == 108, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::SourceMeshComponent");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, IKRetargeterAsset) == 120, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::IKRetargeterAsset");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, CustomRetargetProfile) == 128, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::CustomRetargetProfile");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, bUseCustomOverrideSets) == 344, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::bUseCustomOverrideSets");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, OverrideSetsToApply) == 352, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::OverrideSetsToApply");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, LODThreshold) == 368, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::LODThreshold");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, LODThresholdForIK) == 372, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::LODThresholdForIK");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, bSuppressWarnings) == 376, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::bSuppressWarnings");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, bUseAttachedParent) == 377, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::bUseAttachedParent");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, RuntimeVariables) == 384, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::RuntimeVariables");
static_assert(offsetof(FAnimNode_RetargetPoseFromMesh, BoundCurveValues) == 400, "Offset mismatch for FAnimNode_RetargetPoseFromMesh::BoundCurveValues");

// /Script/IKRig.BoneChain
// Kind: ScriptStruct; super: none
struct FBoneChain
{
public:
    std::uint8_t ChainName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t StartBone[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    std::uint8_t EndBone[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    FName IKGoalName; // 0x001C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FBoneChain, ChainName) == 0, "Offset mismatch for FBoneChain::ChainName");
static_assert(offsetof(FBoneChain, StartBone) == 4, "Offset mismatch for FBoneChain::StartBone");
static_assert(offsetof(FBoneChain, EndBone) == 16, "Offset mismatch for FBoneChain::EndBone");
static_assert(offsetof(FBoneChain, IKGoalName) == 28, "Offset mismatch for FBoneChain::IKGoalName");

// /Script/IKRig.CurveRemapPair
// Kind: ScriptStruct; super: none
struct FCurveRemapPair
{
public:
    std::uint8_t SourceCurve[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName TargetCurve; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCurveRemapPair, SourceCurve) == 0, "Offset mismatch for FCurveRemapPair::SourceCurve");
static_assert(offsetof(FCurveRemapPair, TargetCurve) == 4, "Offset mismatch for FCurveRemapPair::TargetCurve");

// /Script/IKRig.FilterBoneData
// Kind: ScriptStruct; super: none
struct FFilterBoneData
{
public:
    std::uint8_t TargetBone[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFilterBoneData, TargetBone) == 0, "Offset mismatch for FFilterBoneData::TargetBone");

// /Script/IKRig.FloorConstraintChainSettings
// Kind: ScriptStruct; super: IKRetargetOpSkeletonProvider
struct FFloorConstraintChainSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TargetChainName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t EnableFloorConstraint; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    double Alpha; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double MaintainHeightOffset; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUseFoot; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseToes; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0022
    std::uint8_t Foot[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t Toes[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFloorConstraintChainSettings, TargetChainName) == 8, "Offset mismatch for FFloorConstraintChainSettings::TargetChainName");
static_assert(offsetof(FFloorConstraintChainSettings, EnableFloorConstraint) == 12, "Offset mismatch for FFloorConstraintChainSettings::EnableFloorConstraint");
static_assert(offsetof(FFloorConstraintChainSettings, Alpha) == 16, "Offset mismatch for FFloorConstraintChainSettings::Alpha");
static_assert(offsetof(FFloorConstraintChainSettings, MaintainHeightOffset) == 24, "Offset mismatch for FFloorConstraintChainSettings::MaintainHeightOffset");
static_assert(offsetof(FFloorConstraintChainSettings, bUseFoot) == 32, "Offset mismatch for FFloorConstraintChainSettings::bUseFoot");
static_assert(offsetof(FFloorConstraintChainSettings, bUseToes) == 33, "Offset mismatch for FFloorConstraintChainSettings::bUseToes");
static_assert(offsetof(FFloorConstraintChainSettings, Foot) == 40, "Offset mismatch for FFloorConstraintChainSettings::Foot");
static_assert(offsetof(FFloorConstraintChainSettings, Toes) == 80, "Offset mismatch for FFloorConstraintChainSettings::Toes");

// /Script/IKRig.FloorConstraintFootDefinition
// Kind: ScriptStruct; super: none
struct FFloorConstraintFootDefinition
{
public:
    double MedialOffset; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double LateralOffset; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double HeelOffset; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double ToeOffset; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double VerticalOffset; // 0x0020 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFloorConstraintFootDefinition, MedialOffset) == 0, "Offset mismatch for FFloorConstraintFootDefinition::MedialOffset");
static_assert(offsetof(FFloorConstraintFootDefinition, LateralOffset) == 8, "Offset mismatch for FFloorConstraintFootDefinition::LateralOffset");
static_assert(offsetof(FFloorConstraintFootDefinition, HeelOffset) == 16, "Offset mismatch for FFloorConstraintFootDefinition::HeelOffset");
static_assert(offsetof(FFloorConstraintFootDefinition, ToeOffset) == 24, "Offset mismatch for FFloorConstraintFootDefinition::ToeOffset");
static_assert(offsetof(FFloorConstraintFootDefinition, VerticalOffset) == 32, "Offset mismatch for FFloorConstraintFootDefinition::VerticalOffset");

// /Script/IKRig.FloorConstraintToeDefinition
// Kind: ScriptStruct; super: none
struct FFloorConstraintToeDefinition
{
public:
    std::uint8_t ToeBone[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    double Length; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double YawOffset; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double VerticalOffset; // 0x0020 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFloorConstraintToeDefinition, ToeBone) == 0, "Offset mismatch for FFloorConstraintToeDefinition::ToeBone");
static_assert(offsetof(FFloorConstraintToeDefinition, Length) == 16, "Offset mismatch for FFloorConstraintToeDefinition::Length");
static_assert(offsetof(FFloorConstraintToeDefinition, YawOffset) == 24, "Offset mismatch for FFloorConstraintToeDefinition::YawOffset");
static_assert(offsetof(FFloorConstraintToeDefinition, VerticalOffset) == 32, "Offset mismatch for FFloorConstraintToeDefinition::VerticalOffset");

// /Script/IKRig.FloorConstraintToesDefinition
// Kind: ScriptStruct; super: none
struct FFloorConstraintToesDefinition
{
public:
    double Alpha; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    float Responsiveness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CutoffFrequency; // 0x000C (Size: 0x4, Type: FloatProperty)
    float VelocityCutoffFrequency; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    TArray<void*> AllToes; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFloorConstraintToesDefinition, Alpha) == 0, "Offset mismatch for FFloorConstraintToesDefinition::Alpha");
static_assert(offsetof(FFloorConstraintToesDefinition, Responsiveness) == 8, "Offset mismatch for FFloorConstraintToesDefinition::Responsiveness");
static_assert(offsetof(FFloorConstraintToesDefinition, CutoffFrequency) == 12, "Offset mismatch for FFloorConstraintToesDefinition::CutoffFrequency");
static_assert(offsetof(FFloorConstraintToesDefinition, VelocityCutoffFrequency) == 16, "Offset mismatch for FFloorConstraintToesDefinition::VelocityCutoffFrequency");
static_assert(offsetof(FFloorConstraintToesDefinition, AllToes) == 24, "Offset mismatch for FFloorConstraintToesDefinition::AllToes");

// /Script/IKRig.GoalBone
// Kind: ScriptStruct; super: none
struct FGoalBone
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetAdditivePoseOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetAdditivePoseOp
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetAdditivePoseOp, Settings) == 32, "Offset mismatch for FIKRetargetAdditivePoseOp::Settings");

// /Script/IKRig.IKRetargetAdditivePoseOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetAdditivePoseOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t PoseToApply[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    float Alpha; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FIKRetargetAdditivePoseOpSettings, PoseToApply) == 32, "Offset mismatch for FIKRetargetAdditivePoseOpSettings::PoseToApply");
static_assert(offsetof(FIKRetargetAdditivePoseOpSettings, Alpha) == 36, "Offset mismatch for FIKRetargetAdditivePoseOpSettings::Alpha");

// /Script/IKRig.IKRetargetAlignPoleVectorOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetAlignPoleVectorOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x40]; // 0x0018 (Size: 0x40, Type: StructProperty)
    std::uint8_t ChainMapping[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetAlignPoleVectorOp, Settings) == 24, "Offset mismatch for FIKRetargetAlignPoleVectorOp::Settings");
static_assert(offsetof(FIKRetargetAlignPoleVectorOp, ChainMapping) == 88, "Offset mismatch for FIKRetargetAlignPoleVectorOp::ChainMapping");

// /Script/IKRig.IKRetargetAlignPoleVectorOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetAlignPoleVectorOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* IKRigAsset; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ChainsToAlign; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    double Alpha; // 0x0038 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetAlignPoleVectorOpSettings, IKRigAsset) == 32, "Offset mismatch for FIKRetargetAlignPoleVectorOpSettings::IKRigAsset");
static_assert(offsetof(FIKRetargetAlignPoleVectorOpSettings, ChainsToAlign) == 40, "Offset mismatch for FIKRetargetAlignPoleVectorOpSettings::ChainsToAlign");
static_assert(offsetof(FIKRetargetAlignPoleVectorOpSettings, Alpha) == 56, "Offset mismatch for FIKRetargetAlignPoleVectorOpSettings::Alpha");

// /Script/IKRig.IKRetargetBlendToSourceChainSettings
// Kind: ScriptStruct; super: none
struct FIKRetargetBlendToSourceChainSettings
{
public:
    FName TargetChainName; // 0x0000 (Size: 0x8, Type: NameProperty)
    double BlendToSource; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double TranslationAlpha; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double RotationAlpha; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TranslationPerAxisAlpha[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    double ApplyPelvisOffset; // 0x0038 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetBlendToSourceChainSettings, TargetChainName) == 0, "Offset mismatch for FIKRetargetBlendToSourceChainSettings::TargetChainName");
static_assert(offsetof(FIKRetargetBlendToSourceChainSettings, BlendToSource) == 8, "Offset mismatch for FIKRetargetBlendToSourceChainSettings::BlendToSource");
static_assert(offsetof(FIKRetargetBlendToSourceChainSettings, TranslationAlpha) == 16, "Offset mismatch for FIKRetargetBlendToSourceChainSettings::TranslationAlpha");
static_assert(offsetof(FIKRetargetBlendToSourceChainSettings, RotationAlpha) == 24, "Offset mismatch for FIKRetargetBlendToSourceChainSettings::RotationAlpha");
static_assert(offsetof(FIKRetargetBlendToSourceChainSettings, TranslationPerAxisAlpha) == 32, "Offset mismatch for FIKRetargetBlendToSourceChainSettings::TranslationPerAxisAlpha");
static_assert(offsetof(FIKRetargetBlendToSourceChainSettings, ApplyPelvisOffset) == 56, "Offset mismatch for FIKRetargetBlendToSourceChainSettings::ApplyPelvisOffset");

// /Script/IKRig.IKRetargetBlendToSourceOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetBlendToSourceOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetBlendToSourceOp, Settings) == 24, "Offset mismatch for FIKRetargetBlendToSourceOp::Settings");

// /Script/IKRig.IKRetargetBlendToSourceOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetBlendToSourceOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Chains; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    double Alpha; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double DebugDrawSize; // 0x0038 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetBlendToSourceOpSettings, Chains) == 32, "Offset mismatch for FIKRetargetBlendToSourceOpSettings::Chains");
static_assert(offsetof(FIKRetargetBlendToSourceOpSettings, Alpha) == 48, "Offset mismatch for FIKRetargetBlendToSourceOpSettings::Alpha");
static_assert(offsetof(FIKRetargetBlendToSourceOpSettings, DebugDrawSize) == 56, "Offset mismatch for FIKRetargetBlendToSourceOpSettings::DebugDrawSize");

// /Script/IKRig.IKRetargetCopyBasePoseOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetCopyBasePoseOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetCopyBasePoseOp, Settings) == 24, "Offset mismatch for FIKRetargetCopyBasePoseOp::Settings");

// /Script/IKRig.IKRetargetCopyBasePoseOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetCopyBasePoseOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bCopyBasePose; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0021
    std::uint8_t CopyFromStart[0xC]; // 0x0024 (Size: 0xC, Type: StructProperty)
    TArray<void*> BonesToExclude; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    FName CopyBasePoseRoot; // 0x0040 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FIKRetargetCopyBasePoseOpSettings, bCopyBasePose) == 32, "Offset mismatch for FIKRetargetCopyBasePoseOpSettings::bCopyBasePose");
static_assert(offsetof(FIKRetargetCopyBasePoseOpSettings, CopyFromStart) == 36, "Offset mismatch for FIKRetargetCopyBasePoseOpSettings::CopyFromStart");
static_assert(offsetof(FIKRetargetCopyBasePoseOpSettings, BonesToExclude) == 48, "Offset mismatch for FIKRetargetCopyBasePoseOpSettings::BonesToExclude");
static_assert(offsetof(FIKRetargetCopyBasePoseOpSettings, CopyBasePoseRoot) == 64, "Offset mismatch for FIKRetargetCopyBasePoseOpSettings::CopyBasePoseRoot");

// /Script/IKRig.IKRetargetCurveRemapOp
// Kind: ScriptStruct; super: IKRetargetCurvesOpBase
struct FIKRetargetCurveRemapOp
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetCurveRemapOp, Settings) == 64, "Offset mismatch for FIKRetargetCurveRemapOp::Settings");

// /Script/IKRig.IKRetargetCurveRemapOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetCurveRemapOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bCopyAllSourceCurves; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemapCurves; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    TArray<void*> CurvesToRemap; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FIKRetargetCurveRemapOpSettings, bCopyAllSourceCurves) == 32, "Offset mismatch for FIKRetargetCurveRemapOpSettings::bCopyAllSourceCurves");
static_assert(offsetof(FIKRetargetCurveRemapOpSettings, bRemapCurves) == 33, "Offset mismatch for FIKRetargetCurveRemapOpSettings::bRemapCurves");
static_assert(offsetof(FIKRetargetCurveRemapOpSettings, CurvesToRemap) == 40, "Offset mismatch for FIKRetargetCurveRemapOpSettings::CurvesToRemap");

// /Script/IKRig.IKRetargetCurvesOpBase
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetCurvesOpBase
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bTakeInputCurvesFromSourceAnimInstance; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRetargetCurvesOpBase, bTakeInputCurvesFromSourceAnimInstance) == 56, "Offset mismatch for FIKRetargetCurvesOpBase::bTakeInputCurvesFromSourceAnimInstance");

// /Script/IKRig.IKRetargetFKChainsOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetFKChainsOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0xA0]; // 0x0018 (Size: 0xA0, Type: StructProperty)
    std::uint8_t ChainMapping[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetFKChainsOp, Settings) == 24, "Offset mismatch for FIKRetargetFKChainsOp::Settings");
static_assert(offsetof(FIKRetargetFKChainsOp, ChainMapping) == 184, "Offset mismatch for FIKRetargetFKChainsOp::ChainMapping");

// /Script/IKRig.IKRetargetFKChainsOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetFKChainsOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* IKRigAsset; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ChainsToRetarget; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDrawChainLines; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawSingleBoneChains; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x003A
    double ChainDrawThickness; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double ChainDrawSize; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ChainMapping[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetFKChainsOpSettings, IKRigAsset) == 32, "Offset mismatch for FIKRetargetFKChainsOpSettings::IKRigAsset");
static_assert(offsetof(FIKRetargetFKChainsOpSettings, ChainsToRetarget) == 40, "Offset mismatch for FIKRetargetFKChainsOpSettings::ChainsToRetarget");
static_assert(offsetof(FIKRetargetFKChainsOpSettings, bDrawChainLines) == 56, "Offset mismatch for FIKRetargetFKChainsOpSettings::bDrawChainLines");
static_assert(offsetof(FIKRetargetFKChainsOpSettings, bDrawSingleBoneChains) == 57, "Offset mismatch for FIKRetargetFKChainsOpSettings::bDrawSingleBoneChains");
static_assert(offsetof(FIKRetargetFKChainsOpSettings, ChainDrawThickness) == 64, "Offset mismatch for FIKRetargetFKChainsOpSettings::ChainDrawThickness");
static_assert(offsetof(FIKRetargetFKChainsOpSettings, ChainDrawSize) == 72, "Offset mismatch for FIKRetargetFKChainsOpSettings::ChainDrawSize");
static_assert(offsetof(FIKRetargetFKChainsOpSettings, ChainMapping) == 80, "Offset mismatch for FIKRetargetFKChainsOpSettings::ChainMapping");

// /Script/IKRig.IKRetargetFilterBoneOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetFilterBoneOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetFilterBoneOp, Settings) == 24, "Offset mismatch for FIKRetargetFilterBoneOp::Settings");

// /Script/IKRig.IKRetargetFilterBoneOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetFilterBoneOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> BonesToFilter; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    double Alpha; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FilterSettings[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bResetPlayback; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRetargetFilterBoneOpSettings, BonesToFilter) == 32, "Offset mismatch for FIKRetargetFilterBoneOpSettings::BonesToFilter");
static_assert(offsetof(FIKRetargetFilterBoneOpSettings, Alpha) == 48, "Offset mismatch for FIKRetargetFilterBoneOpSettings::Alpha");
static_assert(offsetof(FIKRetargetFilterBoneOpSettings, FilterSettings) == 56, "Offset mismatch for FIKRetargetFilterBoneOpSettings::FilterSettings");
static_assert(offsetof(FIKRetargetFilterBoneOpSettings, bResetPlayback) == 80, "Offset mismatch for FIKRetargetFilterBoneOpSettings::bResetPlayback");

// /Script/IKRig.IKRetargetFloorConstraintOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetFloorConstraintOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetFloorConstraintOp, Settings) == 24, "Offset mismatch for FIKRetargetFloorConstraintOp::Settings");

// /Script/IKRig.IKRetargetFloorConstraintOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetFloorConstraintOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> ChainsToAffect; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    double Alpha; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double HeightFalloffOffset; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double HeightFalloffDistance; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetFloorConstraintOpSettings, ChainsToAffect) == 32, "Offset mismatch for FIKRetargetFloorConstraintOpSettings::ChainsToAffect");
static_assert(offsetof(FIKRetargetFloorConstraintOpSettings, Alpha) == 48, "Offset mismatch for FIKRetargetFloorConstraintOpSettings::Alpha");
static_assert(offsetof(FIKRetargetFloorConstraintOpSettings, HeightFalloffOffset) == 56, "Offset mismatch for FIKRetargetFloorConstraintOpSettings::HeightFalloffOffset");
static_assert(offsetof(FIKRetargetFloorConstraintOpSettings, HeightFalloffDistance) == 64, "Offset mismatch for FIKRetargetFloorConstraintOpSettings::HeightFalloffDistance");

// /Script/IKRig.IKRetargetIKChainsOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetIKChainsOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetIKChainsOp, Settings) == 24, "Offset mismatch for FIKRetargetIKChainsOp::Settings");

// /Script/IKRig.IKRetargetIKChainsOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetIKChainsOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> ChainsToRetarget; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDrawFinalGoals; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawSourceLocations; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0032
    double GoalDrawSize; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double GoalDrawThickness; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetIKChainsOpSettings, ChainsToRetarget) == 32, "Offset mismatch for FIKRetargetIKChainsOpSettings::ChainsToRetarget");
static_assert(offsetof(FIKRetargetIKChainsOpSettings, bDrawFinalGoals) == 48, "Offset mismatch for FIKRetargetIKChainsOpSettings::bDrawFinalGoals");
static_assert(offsetof(FIKRetargetIKChainsOpSettings, bDrawSourceLocations) == 49, "Offset mismatch for FIKRetargetIKChainsOpSettings::bDrawSourceLocations");
static_assert(offsetof(FIKRetargetIKChainsOpSettings, GoalDrawSize) == 56, "Offset mismatch for FIKRetargetIKChainsOpSettings::GoalDrawSize");
static_assert(offsetof(FIKRetargetIKChainsOpSettings, GoalDrawThickness) == 64, "Offset mismatch for FIKRetargetIKChainsOpSettings::GoalDrawThickness");

// /Script/IKRig.IKRetargetOffsetGoalsChainSettings
// Kind: ScriptStruct; super: none
struct FIKRetargetOffsetGoalsChainSettings
{
public:
    FName TargetChainName; // 0x0000 (Size: 0x8, Type: NameProperty)
    double Alpha; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t GlobalTranslationOffset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalTranslationOffset[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlobalRotationOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalRotationOffset[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetOffsetGoalsChainSettings, TargetChainName) == 0, "Offset mismatch for FIKRetargetOffsetGoalsChainSettings::TargetChainName");
static_assert(offsetof(FIKRetargetOffsetGoalsChainSettings, Alpha) == 8, "Offset mismatch for FIKRetargetOffsetGoalsChainSettings::Alpha");
static_assert(offsetof(FIKRetargetOffsetGoalsChainSettings, GlobalTranslationOffset) == 16, "Offset mismatch for FIKRetargetOffsetGoalsChainSettings::GlobalTranslationOffset");
static_assert(offsetof(FIKRetargetOffsetGoalsChainSettings, LocalTranslationOffset) == 40, "Offset mismatch for FIKRetargetOffsetGoalsChainSettings::LocalTranslationOffset");
static_assert(offsetof(FIKRetargetOffsetGoalsChainSettings, GlobalRotationOffset) == 64, "Offset mismatch for FIKRetargetOffsetGoalsChainSettings::GlobalRotationOffset");
static_assert(offsetof(FIKRetargetOffsetGoalsChainSettings, LocalRotationOffset) == 88, "Offset mismatch for FIKRetargetOffsetGoalsChainSettings::LocalRotationOffset");

// /Script/IKRig.IKRetargetOffsetGoalsOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetOffsetGoalsOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetOffsetGoalsOp, Settings) == 24, "Offset mismatch for FIKRetargetOffsetGoalsOp::Settings");

// /Script/IKRig.IKRetargetOffsetGoalsOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetOffsetGoalsOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Chains; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    double Alpha; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double TranslationAlpha; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double RotationAlpha; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetOffsetGoalsOpSettings, Chains) == 32, "Offset mismatch for FIKRetargetOffsetGoalsOpSettings::Chains");
static_assert(offsetof(FIKRetargetOffsetGoalsOpSettings, Alpha) == 48, "Offset mismatch for FIKRetargetOffsetGoalsOpSettings::Alpha");
static_assert(offsetof(FIKRetargetOffsetGoalsOpSettings, TranslationAlpha) == 56, "Offset mismatch for FIKRetargetOffsetGoalsOpSettings::TranslationAlpha");
static_assert(offsetof(FIKRetargetOffsetGoalsOpSettings, RotationAlpha) == 64, "Offset mismatch for FIKRetargetOffsetGoalsOpSettings::RotationAlpha");

// /Script/IKRig.IKRetargetOpBase
// Kind: ScriptStruct; super: none
struct FIKRetargetOpBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParentOpName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRetargetOpBase, Name) == 8, "Offset mismatch for FIKRetargetOpBase::Name");
static_assert(offsetof(FIKRetargetOpBase, ParentOpName) == 12, "Offset mismatch for FIKRetargetOpBase::ParentOpName");
static_assert(offsetof(FIKRetargetOpBase, bIsEnabled) == 16, "Offset mismatch for FIKRetargetOpBase::bIsEnabled");

// /Script/IKRig.IKRetargetOpSettingsBase
// Kind: ScriptStruct; super: IKRetargetOpSkeletonProvider
struct FIKRetargetOpSettingsBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::int32_t LODThreshold; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bDebugDraw; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRetargetOpSettingsBase, bEnabled) == 8, "Offset mismatch for FIKRetargetOpSettingsBase::bEnabled");
static_assert(offsetof(FIKRetargetOpSettingsBase, LODThreshold) == 12, "Offset mismatch for FIKRetargetOpSettingsBase::LODThreshold");
static_assert(offsetof(FIKRetargetOpSettingsBase, bDebugDraw) == 16, "Offset mismatch for FIKRetargetOpSettingsBase::bDebugDraw");

// /Script/IKRig.IKRetargetOpSkeletonProvider
// Kind: ScriptStruct; super: none
struct FIKRetargetOpSkeletonProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetPelvisMotionOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetPelvisMotionOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetPelvisMotionOp, Settings) == 24, "Offset mismatch for FIKRetargetPelvisMotionOp::Settings");

// /Script/IKRig.IKRetargetPelvisMotionOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetPelvisMotionOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t SourcePelvisBone[0xC]; // 0x0020 (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetPelvisBone[0xC]; // 0x002C (Size: 0xC, Type: StructProperty)
    std::uint8_t BlendToAbsoluteOffset[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    double FloorConstraintWeight; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    double SourceCrotchOffset; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double TargetCrotchOffset; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUseGroundFalloff; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    double GroundFalloffHeightPercent; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double RotationAlpha; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t RotationOffsetLocal[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffsetGlobal[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    double TranslationAlpha; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TranslationOffsetLocal[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t TranslationOffsetGlobal[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    double BlendToSourceTranslation; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t BlendToSourceTranslationWeights[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    double ScaleHorizontal; // 0x0108 (Size: 0x8, Type: DoubleProperty)
    double ScaleVertical; // 0x0110 (Size: 0x8, Type: DoubleProperty)
    double AffectIKHorizontal; // 0x0118 (Size: 0x8, Type: DoubleProperty)
    double AffectIKVertical; // 0x0120 (Size: 0x8, Type: DoubleProperty)
    double DebugDrawSize; // 0x0128 (Size: 0x8, Type: DoubleProperty)
    double DebugDrawThickness; // 0x0130 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TranslationOffset[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnableDebugDraw; // 0x0168 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, SourcePelvisBone) == 32, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::SourcePelvisBone");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, TargetPelvisBone) == 44, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::TargetPelvisBone");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, BlendToAbsoluteOffset) == 56, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::BlendToAbsoluteOffset");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, FloorConstraintWeight) == 80, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::FloorConstraintWeight");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, SourceCrotchOffset) == 88, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::SourceCrotchOffset");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, TargetCrotchOffset) == 96, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::TargetCrotchOffset");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, bUseGroundFalloff) == 104, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::bUseGroundFalloff");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, GroundFalloffHeightPercent) == 112, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::GroundFalloffHeightPercent");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, RotationAlpha) == 120, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::RotationAlpha");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, RotationOffsetLocal) == 128, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::RotationOffsetLocal");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, RotationOffsetGlobal) == 152, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::RotationOffsetGlobal");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, TranslationAlpha) == 176, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::TranslationAlpha");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, TranslationOffsetLocal) == 184, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::TranslationOffsetLocal");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, TranslationOffsetGlobal) == 208, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::TranslationOffsetGlobal");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, BlendToSourceTranslation) == 232, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::BlendToSourceTranslation");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, BlendToSourceTranslationWeights) == 240, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::BlendToSourceTranslationWeights");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, ScaleHorizontal) == 264, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::ScaleHorizontal");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, ScaleVertical) == 272, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::ScaleVertical");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, AffectIKHorizontal) == 280, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::AffectIKHorizontal");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, AffectIKVertical) == 288, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::AffectIKVertical");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, DebugDrawSize) == 296, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::DebugDrawSize");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, DebugDrawThickness) == 304, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::DebugDrawThickness");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, TranslationOffset) == 312, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::TranslationOffset");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, RotationOffset) == 336, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::RotationOffset");
static_assert(offsetof(FIKRetargetPelvisMotionOpSettings, bEnableDebugDraw) == 360, "Offset mismatch for FIKRetargetPelvisMotionOpSettings::bEnableDebugDraw");

// /Script/IKRig.IKRetargetPinBoneOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetPinBoneOp
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetPinBoneOp, Settings) == 32, "Offset mismatch for FIKRetargetPinBoneOp::Settings");

// /Script/IKRig.IKRetargetPinBoneOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetPinBoneOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> BonesToPin; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SkeletonToCopyFrom; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCopyTranslation; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TranslationMode; // 0x0032 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCopyRotation; // 0x0033 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RotationMode; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCopyScale; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPropagateToChildren; // 0x0036 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x9]; // 0x0037
    std::uint8_t GlobalOffset[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalOffset[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetPinBoneOpSettings, BonesToPin) == 32, "Offset mismatch for FIKRetargetPinBoneOpSettings::BonesToPin");
static_assert(offsetof(FIKRetargetPinBoneOpSettings, SkeletonToCopyFrom) == 48, "Offset mismatch for FIKRetargetPinBoneOpSettings::SkeletonToCopyFrom");
static_assert(offsetof(FIKRetargetPinBoneOpSettings, bCopyTranslation) == 49, "Offset mismatch for FIKRetargetPinBoneOpSettings::bCopyTranslation");
static_assert(offsetof(FIKRetargetPinBoneOpSettings, TranslationMode) == 50, "Offset mismatch for FIKRetargetPinBoneOpSettings::TranslationMode");
static_assert(offsetof(FIKRetargetPinBoneOpSettings, bCopyRotation) == 51, "Offset mismatch for FIKRetargetPinBoneOpSettings::bCopyRotation");
static_assert(offsetof(FIKRetargetPinBoneOpSettings, RotationMode) == 52, "Offset mismatch for FIKRetargetPinBoneOpSettings::RotationMode");
static_assert(offsetof(FIKRetargetPinBoneOpSettings, bCopyScale) == 53, "Offset mismatch for FIKRetargetPinBoneOpSettings::bCopyScale");
static_assert(offsetof(FIKRetargetPinBoneOpSettings, bPropagateToChildren) == 54, "Offset mismatch for FIKRetargetPinBoneOpSettings::bPropagateToChildren");
static_assert(offsetof(FIKRetargetPinBoneOpSettings, GlobalOffset) == 64, "Offset mismatch for FIKRetargetPinBoneOpSettings::GlobalOffset");
static_assert(offsetof(FIKRetargetPinBoneOpSettings, LocalOffset) == 160, "Offset mismatch for FIKRetargetPinBoneOpSettings::LocalOffset");

// /Script/IKRig.IKRetargetPose
// Kind: ScriptStruct; super: none
struct FIKRetargetPose
{
public:
    std::uint8_t RootTranslationOffset[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> BoneRotationOffsets; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FIKRetargetPose, RootTranslationOffset) == 0, "Offset mismatch for FIKRetargetPose::RootTranslationOffset");
static_assert(offsetof(FIKRetargetPose, BoneRotationOffsets) == 24, "Offset mismatch for FIKRetargetPose::BoneRotationOffsets");

// /Script/IKRig.IKRetargetPoseOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetPoseOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetPoseOp, Settings) == 24, "Offset mismatch for FIKRetargetPoseOp::Settings");

// /Script/IKRig.IKRetargetPoseOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetPoseOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bOverrideSourcePose; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0021
    std::uint8_t SourcePoseToUse[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t bOverrideTargetPose; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0029
    FName TargetPoseToUse; // 0x002C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FIKRetargetPoseOpSettings, bOverrideSourcePose) == 32, "Offset mismatch for FIKRetargetPoseOpSettings::bOverrideSourcePose");
static_assert(offsetof(FIKRetargetPoseOpSettings, SourcePoseToUse) == 36, "Offset mismatch for FIKRetargetPoseOpSettings::SourcePoseToUse");
static_assert(offsetof(FIKRetargetPoseOpSettings, bOverrideTargetPose) == 40, "Offset mismatch for FIKRetargetPoseOpSettings::bOverrideTargetPose");
static_assert(offsetof(FIKRetargetPoseOpSettings, TargetPoseToUse) == 44, "Offset mismatch for FIKRetargetPoseOpSettings::TargetPoseToUse");

// /Script/IKRig.IKRetargetRootMotionOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetRootMotionOp
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetRootMotionOp, Settings) == 32, "Offset mismatch for FIKRetargetRootMotionOp::Settings");

// /Script/IKRig.IKRetargetRootMotionOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetRootMotionOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t SourceRoot[0xC]; // 0x0020 (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetRoot[0xC]; // 0x002C (Size: 0xC, Type: StructProperty)
    std::uint8_t RootMotionSource; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t TargetPelvis[0xC]; // 0x003C (Size: 0xC, Type: StructProperty)
    std::uint8_t bRotateWithPelvis; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RootHeightSource; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x004A
    std::uint8_t GlobalOffset[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    std::uint8_t bMaintainOffsetFromPelvis; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPropagateToNonRetargetedChildren; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x00B2
    std::uint8_t SourceRootBone[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetRootBone[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    FName TargetPelvisBone; // 0x00BC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FIKRetargetRootMotionOpSettings, SourceRoot) == 32, "Offset mismatch for FIKRetargetRootMotionOpSettings::SourceRoot");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, TargetRoot) == 44, "Offset mismatch for FIKRetargetRootMotionOpSettings::TargetRoot");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, RootMotionSource) == 56, "Offset mismatch for FIKRetargetRootMotionOpSettings::RootMotionSource");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, TargetPelvis) == 60, "Offset mismatch for FIKRetargetRootMotionOpSettings::TargetPelvis");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, bRotateWithPelvis) == 72, "Offset mismatch for FIKRetargetRootMotionOpSettings::bRotateWithPelvis");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, RootHeightSource) == 73, "Offset mismatch for FIKRetargetRootMotionOpSettings::RootHeightSource");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, GlobalOffset) == 80, "Offset mismatch for FIKRetargetRootMotionOpSettings::GlobalOffset");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, bMaintainOffsetFromPelvis) == 176, "Offset mismatch for FIKRetargetRootMotionOpSettings::bMaintainOffsetFromPelvis");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, bPropagateToNonRetargetedChildren) == 177, "Offset mismatch for FIKRetargetRootMotionOpSettings::bPropagateToNonRetargetedChildren");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, SourceRootBone) == 180, "Offset mismatch for FIKRetargetRootMotionOpSettings::SourceRootBone");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, TargetRootBone) == 184, "Offset mismatch for FIKRetargetRootMotionOpSettings::TargetRootBone");
static_assert(offsetof(FIKRetargetRootMotionOpSettings, TargetPelvisBone) == 188, "Offset mismatch for FIKRetargetRootMotionOpSettings::TargetPelvisBone");

// /Script/IKRig.IKRetargetRunIKRigChainSettings
// Kind: ScriptStruct; super: none
struct FIKRetargetRunIKRigChainSettings
{
public:
    std::uint8_t TargetChainName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnableIK; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    double ChainPositionAlpha; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double ChainRotationAlpha; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bOverrideGoalAlpha; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    double FinalPositionAlpha; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double FinalRotationAlpha; // 0x0028 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetRunIKRigChainSettings, TargetChainName) == 0, "Offset mismatch for FIKRetargetRunIKRigChainSettings::TargetChainName");
static_assert(offsetof(FIKRetargetRunIKRigChainSettings, bEnableIK) == 4, "Offset mismatch for FIKRetargetRunIKRigChainSettings::bEnableIK");
static_assert(offsetof(FIKRetargetRunIKRigChainSettings, ChainPositionAlpha) == 8, "Offset mismatch for FIKRetargetRunIKRigChainSettings::ChainPositionAlpha");
static_assert(offsetof(FIKRetargetRunIKRigChainSettings, ChainRotationAlpha) == 16, "Offset mismatch for FIKRetargetRunIKRigChainSettings::ChainRotationAlpha");
static_assert(offsetof(FIKRetargetRunIKRigChainSettings, bOverrideGoalAlpha) == 24, "Offset mismatch for FIKRetargetRunIKRigChainSettings::bOverrideGoalAlpha");
static_assert(offsetof(FIKRetargetRunIKRigChainSettings, FinalPositionAlpha) == 32, "Offset mismatch for FIKRetargetRunIKRigChainSettings::FinalPositionAlpha");
static_assert(offsetof(FIKRetargetRunIKRigChainSettings, FinalRotationAlpha) == 40, "Offset mismatch for FIKRetargetRunIKRigChainSettings::FinalRotationAlpha");

// /Script/IKRig.IKRetargetRunIKRigOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetRunIKRigOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x50]; // 0x0018 (Size: 0x50, Type: StructProperty)
    std::uint8_t ChainMapping[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetRunIKRigOp, Settings) == 24, "Offset mismatch for FIKRetargetRunIKRigOp::Settings");
static_assert(offsetof(FIKRetargetRunIKRigOp, ChainMapping) == 104, "Offset mismatch for FIKRetargetRunIKRigOp::ChainMapping");

// /Script/IKRig.IKRetargetRunIKRigOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetRunIKRigOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Chains; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    void* IKRigAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDrawGoals; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawGoalBoneLocations; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x003A
    double GoalDrawSize; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double GoalDrawThickness; // 0x0048 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetRunIKRigOpSettings, Chains) == 32, "Offset mismatch for FIKRetargetRunIKRigOpSettings::Chains");
static_assert(offsetof(FIKRetargetRunIKRigOpSettings, IKRigAsset) == 48, "Offset mismatch for FIKRetargetRunIKRigOpSettings::IKRigAsset");
static_assert(offsetof(FIKRetargetRunIKRigOpSettings, bDrawGoals) == 56, "Offset mismatch for FIKRetargetRunIKRigOpSettings::bDrawGoals");
static_assert(offsetof(FIKRetargetRunIKRigOpSettings, bDrawGoalBoneLocations) == 57, "Offset mismatch for FIKRetargetRunIKRigOpSettings::bDrawGoalBoneLocations");
static_assert(offsetof(FIKRetargetRunIKRigOpSettings, GoalDrawSize) == 64, "Offset mismatch for FIKRetargetRunIKRigOpSettings::GoalDrawSize");
static_assert(offsetof(FIKRetargetRunIKRigOpSettings, GoalDrawThickness) == 72, "Offset mismatch for FIKRetargetRunIKRigOpSettings::GoalDrawThickness");

// /Script/IKRig.IKRetargetScaleGoalsChainSettings
// Kind: ScriptStruct; super: none
struct FIKRetargetScaleGoalsChainSettings
{
public:
    FName TargetChainName; // 0x0000 (Size: 0x8, Type: NameProperty)
    double ScaleVertical; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double ScaleHorizontal; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double ScaleAlongChain; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetScaleGoalsChainSettings, TargetChainName) == 0, "Offset mismatch for FIKRetargetScaleGoalsChainSettings::TargetChainName");
static_assert(offsetof(FIKRetargetScaleGoalsChainSettings, ScaleVertical) == 8, "Offset mismatch for FIKRetargetScaleGoalsChainSettings::ScaleVertical");
static_assert(offsetof(FIKRetargetScaleGoalsChainSettings, ScaleHorizontal) == 16, "Offset mismatch for FIKRetargetScaleGoalsChainSettings::ScaleHorizontal");
static_assert(offsetof(FIKRetargetScaleGoalsChainSettings, ScaleAlongChain) == 24, "Offset mismatch for FIKRetargetScaleGoalsChainSettings::ScaleAlongChain");

// /Script/IKRig.IKRetargetScaleGoalsOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetScaleGoalsOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetScaleGoalsOp, Settings) == 24, "Offset mismatch for FIKRetargetScaleGoalsOp::Settings");

// /Script/IKRig.IKRetargetScaleGoalsOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetScaleGoalsOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Chains; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    double Alpha; // 0x0030 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetScaleGoalsOpSettings, Chains) == 32, "Offset mismatch for FIKRetargetScaleGoalsOpSettings::Chains");
static_assert(offsetof(FIKRetargetScaleGoalsOpSettings, Alpha) == 48, "Offset mismatch for FIKRetargetScaleGoalsOpSettings::Alpha");

// /Script/IKRig.IKRetargetScaleSourceOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetScaleSourceOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetScaleSourceOp, Settings) == 24, "Offset mismatch for FIKRetargetScaleSourceOp::Settings");

// /Script/IKRig.IKRetargetScaleSourceOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetScaleSourceOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    double SourceScaleFactor; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ScalePivot; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t ScalePivotBone[0xC]; // 0x002C (Size: 0xC, Type: StructProperty)
    std::uint8_t bProjectScalePivotToFloor; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRetargetScaleSourceOpSettings, SourceScaleFactor) == 32, "Offset mismatch for FIKRetargetScaleSourceOpSettings::SourceScaleFactor");
static_assert(offsetof(FIKRetargetScaleSourceOpSettings, ScalePivot) == 40, "Offset mismatch for FIKRetargetScaleSourceOpSettings::ScalePivot");
static_assert(offsetof(FIKRetargetScaleSourceOpSettings, ScalePivotBone) == 44, "Offset mismatch for FIKRetargetScaleSourceOpSettings::ScalePivotBone");
static_assert(offsetof(FIKRetargetScaleSourceOpSettings, bProjectScalePivotToFloor) == 56, "Offset mismatch for FIKRetargetScaleSourceOpSettings::bProjectScalePivotToFloor");

// /Script/IKRig.IKRetargetSpeedPlantingOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetSpeedPlantingOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetSpeedPlantingOp, Settings) == 24, "Offset mismatch for FIKRetargetSpeedPlantingOp::Settings");

// /Script/IKRig.IKRetargetSpeedPlantingOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetSpeedPlantingOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> ChainsToSpeedPlant; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    float Alpha; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    double SpeedThreshold; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t BlendMethod; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    double MaxBlendSpeed; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double TimeToMaxSpeed; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    double ArrivalSpeedGain; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double SpringStrength; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    double Stiffness; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double DebugDrawSize; // 0x0070 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRetargetSpeedPlantingOpSettings, ChainsToSpeedPlant) == 32, "Offset mismatch for FIKRetargetSpeedPlantingOpSettings::ChainsToSpeedPlant");
static_assert(offsetof(FIKRetargetSpeedPlantingOpSettings, Alpha) == 48, "Offset mismatch for FIKRetargetSpeedPlantingOpSettings::Alpha");
static_assert(offsetof(FIKRetargetSpeedPlantingOpSettings, SpeedThreshold) == 56, "Offset mismatch for FIKRetargetSpeedPlantingOpSettings::SpeedThreshold");
static_assert(offsetof(FIKRetargetSpeedPlantingOpSettings, BlendMethod) == 64, "Offset mismatch for FIKRetargetSpeedPlantingOpSettings::BlendMethod");
static_assert(offsetof(FIKRetargetSpeedPlantingOpSettings, MaxBlendSpeed) == 72, "Offset mismatch for FIKRetargetSpeedPlantingOpSettings::MaxBlendSpeed");
static_assert(offsetof(FIKRetargetSpeedPlantingOpSettings, TimeToMaxSpeed) == 80, "Offset mismatch for FIKRetargetSpeedPlantingOpSettings::TimeToMaxSpeed");
static_assert(offsetof(FIKRetargetSpeedPlantingOpSettings, ArrivalSpeedGain) == 88, "Offset mismatch for FIKRetargetSpeedPlantingOpSettings::ArrivalSpeedGain");
static_assert(offsetof(FIKRetargetSpeedPlantingOpSettings, SpringStrength) == 96, "Offset mismatch for FIKRetargetSpeedPlantingOpSettings::SpringStrength");
static_assert(offsetof(FIKRetargetSpeedPlantingOpSettings, Stiffness) == 104, "Offset mismatch for FIKRetargetSpeedPlantingOpSettings::Stiffness");
static_assert(offsetof(FIKRetargetSpeedPlantingOpSettings, DebugDrawSize) == 112, "Offset mismatch for FIKRetargetSpeedPlantingOpSettings::DebugDrawSize");

// /Script/IKRig.IKRetargetStretchChainOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetStretchChainOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x38]; // 0x0018 (Size: 0x38, Type: StructProperty)
    std::uint8_t ChainMapping[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetStretchChainOp, Settings) == 24, "Offset mismatch for FIKRetargetStretchChainOp::Settings");
static_assert(offsetof(FIKRetargetStretchChainOp, ChainMapping) == 80, "Offset mismatch for FIKRetargetStretchChainOp::ChainMapping");

// /Script/IKRig.IKRetargetStretchChainOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetStretchChainOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* IKRigAsset; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ChainsToStretch; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FIKRetargetStretchChainOpSettings, IKRigAsset) == 32, "Offset mismatch for FIKRetargetStretchChainOpSettings::IKRigAsset");
static_assert(offsetof(FIKRetargetStretchChainOpSettings, ChainsToStretch) == 40, "Offset mismatch for FIKRetargetStretchChainOpSettings::ChainsToStretch");

// /Script/IKRig.IKRetargetStrideWarpingOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetStrideWarpingOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetStrideWarpingOp, Settings) == 24, "Offset mismatch for FIKRetargetStrideWarpingOp::Settings");

// /Script/IKRig.IKRetargetStrideWarpingOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetStrideWarpingOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> ChainSettings; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    float Alpha; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DirectionSource; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    std::uint8_t ForwardDirection; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0039
    std::uint8_t DirectionChain[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    double WarpForwards; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double SidewaysOffset; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double WarpSplay; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    double DebugDrawSize; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double DebugDrawThickness; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEnableDebugDraw; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, ChainSettings) == 32, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::ChainSettings");
static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, Alpha) == 48, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::Alpha");
static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, DirectionSource) == 52, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::DirectionSource");
static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, ForwardDirection) == 56, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::ForwardDirection");
static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, DirectionChain) == 60, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::DirectionChain");
static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, WarpForwards) == 64, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::WarpForwards");
static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, SidewaysOffset) == 72, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::SidewaysOffset");
static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, WarpSplay) == 80, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::WarpSplay");
static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, DebugDrawSize) == 88, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::DebugDrawSize");
static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, DebugDrawThickness) == 96, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::DebugDrawThickness");
static_assert(offsetof(FIKRetargetStrideWarpingOpSettings, bEnableDebugDraw) == 104, "Offset mismatch for FIKRetargetStrideWarpingOpSettings::bEnableDebugDraw");

// /Script/IKRig.IKRetargetWeaponGoalOp
// Kind: ScriptStruct; super: IKRetargetOpBase
struct FIKRetargetWeaponGoalOp
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRetargetWeaponGoalOp, Settings) == 24, "Offset mismatch for FIKRetargetWeaponGoalOp::Settings");

// /Script/IKRig.IKRetargetWeaponGoalsOpSettings
// Kind: ScriptStruct; super: IKRetargetOpSettingsBase
struct FIKRetargetWeaponGoalsOpSettings
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t LeftWeaponBone[0xC]; // 0x0020 (Size: 0xC, Type: StructProperty)
    std::uint8_t RightWeaponBone[0xC]; // 0x002C (Size: 0xC, Type: StructProperty)
    std::uint8_t LeftHandAttachBone[0xC]; // 0x0038 (Size: 0xC, Type: StructProperty)
    std::uint8_t RightHandAttachBone[0xC]; // 0x0044 (Size: 0xC, Type: StructProperty)
    std::uint8_t LeftHandBone[0xC]; // 0x0050 (Size: 0xC, Type: StructProperty)
    std::uint8_t RightHandBone[0xC]; // 0x005C (Size: 0xC, Type: StructProperty)
    std::uint8_t IKHandLeftBone[0xC]; // 0x0068 (Size: 0xC, Type: StructProperty)
    std::uint8_t IKHandRightBone[0xC]; // 0x0074 (Size: 0xC, Type: StructProperty)
    std::uint8_t IKHandGun[0xC]; // 0x0080 (Size: 0xC, Type: StructProperty)
    float Alpha; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableWeaponScale; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    double WeaponScale; // 0x0098 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bSnapIKHandGun; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00A1
    double LeftRightHandIKAlpha; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    double LeftHandIKAlpha; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    double RightHandIKAlpha; // 0x00B8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bSuppressMissingBoneWarnings; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, LeftWeaponBone) == 32, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::LeftWeaponBone");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, RightWeaponBone) == 44, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::RightWeaponBone");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, LeftHandAttachBone) == 56, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::LeftHandAttachBone");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, RightHandAttachBone) == 68, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::RightHandAttachBone");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, LeftHandBone) == 80, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::LeftHandBone");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, RightHandBone) == 92, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::RightHandBone");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, IKHandLeftBone) == 104, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::IKHandLeftBone");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, IKHandRightBone) == 116, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::IKHandRightBone");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, IKHandGun) == 128, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::IKHandGun");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, Alpha) == 140, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::Alpha");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, bEnableWeaponScale) == 144, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::bEnableWeaponScale");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, WeaponScale) == 152, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::WeaponScale");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, bSnapIKHandGun) == 160, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::bSnapIKHandGun");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, LeftRightHandIKAlpha) == 168, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::LeftRightHandIKAlpha");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, LeftHandIKAlpha) == 176, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::LeftHandIKAlpha");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, RightHandIKAlpha) == 184, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::RightHandIKAlpha");
static_assert(offsetof(FIKRetargetWeaponGoalsOpSettings, bSuppressMissingBoneWarnings) == 192, "Offset mismatch for FIKRetargetWeaponGoalsOpSettings::bSuppressMissingBoneWarnings");

// /Script/IKRig.IKRigBodyMoverGoalSettings
// Kind: ScriptStruct; super: IKRigGoalSettingsBase
struct FIKRigBodyMoverGoalSettings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BoneName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float InfluenceMultiplier; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FIKRigBodyMoverGoalSettings, BoneName) == 16, "Offset mismatch for FIKRigBodyMoverGoalSettings::BoneName");
static_assert(offsetof(FIKRigBodyMoverGoalSettings, InfluenceMultiplier) == 20, "Offset mismatch for FIKRigBodyMoverGoalSettings::InfluenceMultiplier");

// /Script/IKRig.IKRigBodyMoverSettings
// Kind: ScriptStruct; super: IKRigSolverSettingsBase
struct FIKRigBodyMoverSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float PositionAlpha; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PositionPositiveX; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float PositionNegativeX; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float PositionPositiveY; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float PositionNegativeY; // 0x001C (Size: 0x4, Type: FloatProperty)
    float PositionPositiveZ; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float PositionNegativeZ; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float RotationAlpha; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float RotateXAlpha; // 0x002C (Size: 0x4, Type: FloatProperty)
    float RotateYAlpha; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float RotateZAlpha; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FIKRigBodyMoverSettings, StartBone) == 8, "Offset mismatch for FIKRigBodyMoverSettings::StartBone");
static_assert(offsetof(FIKRigBodyMoverSettings, PositionAlpha) == 12, "Offset mismatch for FIKRigBodyMoverSettings::PositionAlpha");
static_assert(offsetof(FIKRigBodyMoverSettings, PositionPositiveX) == 16, "Offset mismatch for FIKRigBodyMoverSettings::PositionPositiveX");
static_assert(offsetof(FIKRigBodyMoverSettings, PositionNegativeX) == 20, "Offset mismatch for FIKRigBodyMoverSettings::PositionNegativeX");
static_assert(offsetof(FIKRigBodyMoverSettings, PositionPositiveY) == 24, "Offset mismatch for FIKRigBodyMoverSettings::PositionPositiveY");
static_assert(offsetof(FIKRigBodyMoverSettings, PositionNegativeY) == 28, "Offset mismatch for FIKRigBodyMoverSettings::PositionNegativeY");
static_assert(offsetof(FIKRigBodyMoverSettings, PositionPositiveZ) == 32, "Offset mismatch for FIKRigBodyMoverSettings::PositionPositiveZ");
static_assert(offsetof(FIKRigBodyMoverSettings, PositionNegativeZ) == 36, "Offset mismatch for FIKRigBodyMoverSettings::PositionNegativeZ");
static_assert(offsetof(FIKRigBodyMoverSettings, RotationAlpha) == 40, "Offset mismatch for FIKRigBodyMoverSettings::RotationAlpha");
static_assert(offsetof(FIKRigBodyMoverSettings, RotateXAlpha) == 44, "Offset mismatch for FIKRigBodyMoverSettings::RotateXAlpha");
static_assert(offsetof(FIKRigBodyMoverSettings, RotateYAlpha) == 48, "Offset mismatch for FIKRigBodyMoverSettings::RotateYAlpha");
static_assert(offsetof(FIKRigBodyMoverSettings, RotateZAlpha) == 52, "Offset mismatch for FIKRigBodyMoverSettings::RotateZAlpha");

// /Script/IKRig.IKRigBodyMoverSolver
// Kind: ScriptStruct; super: IKRigSolverBase
struct FIKRigBodyMoverSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Settings[0x38]; // 0x0010 (Size: 0x38, Type: StructProperty)
    TArray<void*> AllGoalSettings; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FIKRigBodyMoverSolver, Settings) == 16, "Offset mismatch for FIKRigBodyMoverSolver::Settings");
static_assert(offsetof(FIKRigBodyMoverSolver, AllGoalSettings) == 72, "Offset mismatch for FIKRigBodyMoverSolver::AllGoalSettings");

// /Script/IKRig.IKRigBoneSettingsBase
// Kind: ScriptStruct; super: IKRigSettingsBase
struct FIKRigBoneSettingsBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName bone; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FIKRigBoneSettingsBase, bone) == 8, "Offset mismatch for FIKRigBoneSettingsBase::bone");

// /Script/IKRig.IKRigFBIKBoneSettings
// Kind: ScriptStruct; super: IKRigBoneSettingsBase
struct FIKRigFBIKBoneSettings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float RotationStiffness; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float PositionStiffness; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t X; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    float MinX; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxX; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Y; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0025
    float MinY; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MaxY; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Z; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0031
    float MinZ; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MaxZ; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUsePreferredAngles; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x003D
    std::uint8_t PreferredAngles[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRigFBIKBoneSettings, RotationStiffness) == 16, "Offset mismatch for FIKRigFBIKBoneSettings::RotationStiffness");
static_assert(offsetof(FIKRigFBIKBoneSettings, PositionStiffness) == 20, "Offset mismatch for FIKRigFBIKBoneSettings::PositionStiffness");
static_assert(offsetof(FIKRigFBIKBoneSettings, X) == 24, "Offset mismatch for FIKRigFBIKBoneSettings::X");
static_assert(offsetof(FIKRigFBIKBoneSettings, MinX) == 28, "Offset mismatch for FIKRigFBIKBoneSettings::MinX");
static_assert(offsetof(FIKRigFBIKBoneSettings, MaxX) == 32, "Offset mismatch for FIKRigFBIKBoneSettings::MaxX");
static_assert(offsetof(FIKRigFBIKBoneSettings, Y) == 36, "Offset mismatch for FIKRigFBIKBoneSettings::Y");
static_assert(offsetof(FIKRigFBIKBoneSettings, MinY) == 40, "Offset mismatch for FIKRigFBIKBoneSettings::MinY");
static_assert(offsetof(FIKRigFBIKBoneSettings, MaxY) == 44, "Offset mismatch for FIKRigFBIKBoneSettings::MaxY");
static_assert(offsetof(FIKRigFBIKBoneSettings, Z) == 48, "Offset mismatch for FIKRigFBIKBoneSettings::Z");
static_assert(offsetof(FIKRigFBIKBoneSettings, MinZ) == 52, "Offset mismatch for FIKRigFBIKBoneSettings::MinZ");
static_assert(offsetof(FIKRigFBIKBoneSettings, MaxZ) == 56, "Offset mismatch for FIKRigFBIKBoneSettings::MaxZ");
static_assert(offsetof(FIKRigFBIKBoneSettings, bUsePreferredAngles) == 60, "Offset mismatch for FIKRigFBIKBoneSettings::bUsePreferredAngles");
static_assert(offsetof(FIKRigFBIKBoneSettings, PreferredAngles) == 64, "Offset mismatch for FIKRigFBIKBoneSettings::PreferredAngles");

// /Script/IKRig.IKRigFBIKGoalSettings
// Kind: ScriptStruct; super: IKRigGoalSettingsBase
struct FIKRigFBIKGoalSettings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BoneName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::int32_t ChainDepth; // 0x0014 (Size: 0x4, Type: IntProperty)
    float StrengthAlpha; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float PullChainAlpha; // 0x001C (Size: 0x4, Type: FloatProperty)
    float PinRotation; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t IndexInSolver; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FIKRigFBIKGoalSettings, BoneName) == 16, "Offset mismatch for FIKRigFBIKGoalSettings::BoneName");
static_assert(offsetof(FIKRigFBIKGoalSettings, ChainDepth) == 20, "Offset mismatch for FIKRigFBIKGoalSettings::ChainDepth");
static_assert(offsetof(FIKRigFBIKGoalSettings, StrengthAlpha) == 24, "Offset mismatch for FIKRigFBIKGoalSettings::StrengthAlpha");
static_assert(offsetof(FIKRigFBIKGoalSettings, PullChainAlpha) == 28, "Offset mismatch for FIKRigFBIKGoalSettings::PullChainAlpha");
static_assert(offsetof(FIKRigFBIKGoalSettings, PinRotation) == 32, "Offset mismatch for FIKRigFBIKGoalSettings::PinRotation");
static_assert(offsetof(FIKRigFBIKGoalSettings, IndexInSolver) == 36, "Offset mismatch for FIKRigFBIKGoalSettings::IndexInSolver");

// /Script/IKRig.IKRigFBIKSettings
// Kind: ScriptStruct; super: IKRigSolverSettingsBase
struct FIKRigFBIKSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RootBone[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::int32_t Iterations; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t SubIterations; // 0x0010 (Size: 0x4, Type: IntProperty)
    float MassMultiplier; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowStretch; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RootBehavior; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001A
    std::uint8_t PrePullRootSettings[0x20]; // 0x001C (Size: 0x20, Type: StructProperty)
    float GlobalPullChainAlpha; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MaxAngle; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float OverRelaxation; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FIKRigFBIKSettings, RootBone) == 8, "Offset mismatch for FIKRigFBIKSettings::RootBone");
static_assert(offsetof(FIKRigFBIKSettings, Iterations) == 12, "Offset mismatch for FIKRigFBIKSettings::Iterations");
static_assert(offsetof(FIKRigFBIKSettings, SubIterations) == 16, "Offset mismatch for FIKRigFBIKSettings::SubIterations");
static_assert(offsetof(FIKRigFBIKSettings, MassMultiplier) == 20, "Offset mismatch for FIKRigFBIKSettings::MassMultiplier");
static_assert(offsetof(FIKRigFBIKSettings, bAllowStretch) == 24, "Offset mismatch for FIKRigFBIKSettings::bAllowStretch");
static_assert(offsetof(FIKRigFBIKSettings, RootBehavior) == 25, "Offset mismatch for FIKRigFBIKSettings::RootBehavior");
static_assert(offsetof(FIKRigFBIKSettings, PrePullRootSettings) == 28, "Offset mismatch for FIKRigFBIKSettings::PrePullRootSettings");
static_assert(offsetof(FIKRigFBIKSettings, GlobalPullChainAlpha) == 60, "Offset mismatch for FIKRigFBIKSettings::GlobalPullChainAlpha");
static_assert(offsetof(FIKRigFBIKSettings, MaxAngle) == 64, "Offset mismatch for FIKRigFBIKSettings::MaxAngle");
static_assert(offsetof(FIKRigFBIKSettings, OverRelaxation) == 68, "Offset mismatch for FIKRigFBIKSettings::OverRelaxation");

// /Script/IKRig.IKRigFullBodyIKSolver
// Kind: ScriptStruct; super: IKRigSolverBase
struct FIKRigFullBodyIKSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Settings[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    TArray<void*> AllGoalSettings; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllBoneSettings; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FIKRigFullBodyIKSolver, Settings) == 16, "Offset mismatch for FIKRigFullBodyIKSolver::Settings");
static_assert(offsetof(FIKRigFullBodyIKSolver, AllGoalSettings) == 88, "Offset mismatch for FIKRigFullBodyIKSolver::AllGoalSettings");
static_assert(offsetof(FIKRigFullBodyIKSolver, AllBoneSettings) == 104, "Offset mismatch for FIKRigFullBodyIKSolver::AllBoneSettings");

// /Script/IKRig.IKRigGoal
// Kind: ScriptStruct; super: none
struct FIKRigGoal
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t TransformSource; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t SourceBone[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float PositionAlpha; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float RotationAlpha; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PositionSpace; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationSpace; // 0x0051 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    std::uint8_t FinalBlendedPosition[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t FinalBlendedRotation[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRigGoal, Name) == 0, "Offset mismatch for FIKRigGoal::Name");
static_assert(offsetof(FIKRigGoal, BoneName) == 4, "Offset mismatch for FIKRigGoal::BoneName");
static_assert(offsetof(FIKRigGoal, TransformSource) == 8, "Offset mismatch for FIKRigGoal::TransformSource");
static_assert(offsetof(FIKRigGoal, SourceBone) == 12, "Offset mismatch for FIKRigGoal::SourceBone");
static_assert(offsetof(FIKRigGoal, Position) == 24, "Offset mismatch for FIKRigGoal::Position");
static_assert(offsetof(FIKRigGoal, Rotation) == 48, "Offset mismatch for FIKRigGoal::Rotation");
static_assert(offsetof(FIKRigGoal, PositionAlpha) == 72, "Offset mismatch for FIKRigGoal::PositionAlpha");
static_assert(offsetof(FIKRigGoal, RotationAlpha) == 76, "Offset mismatch for FIKRigGoal::RotationAlpha");
static_assert(offsetof(FIKRigGoal, PositionSpace) == 80, "Offset mismatch for FIKRigGoal::PositionSpace");
static_assert(offsetof(FIKRigGoal, RotationSpace) == 81, "Offset mismatch for FIKRigGoal::RotationSpace");
static_assert(offsetof(FIKRigGoal, FinalBlendedPosition) == 88, "Offset mismatch for FIKRigGoal::FinalBlendedPosition");
static_assert(offsetof(FIKRigGoal, FinalBlendedRotation) == 112, "Offset mismatch for FIKRigGoal::FinalBlendedRotation");
static_assert(offsetof(FIKRigGoal, bEnabled) == 144, "Offset mismatch for FIKRigGoal::bEnabled");

// /Script/IKRig.IKRigGoalContainer
// Kind: ScriptStruct; super: none
struct FIKRigGoalContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRigGoalInput
// Kind: ScriptStruct; super: none
struct FIKRigGoalInput
{
public:
    FName GoalName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    double PositionAlpha; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double RotationAlpha; // 0x0078 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRigGoalInput, GoalName) == 0, "Offset mismatch for FIKRigGoalInput::GoalName");
static_assert(offsetof(FIKRigGoalInput, Transform) == 16, "Offset mismatch for FIKRigGoalInput::Transform");
static_assert(offsetof(FIKRigGoalInput, PositionAlpha) == 112, "Offset mismatch for FIKRigGoalInput::PositionAlpha");
static_assert(offsetof(FIKRigGoalInput, RotationAlpha) == 120, "Offset mismatch for FIKRigGoalInput::RotationAlpha");

// /Script/IKRig.IKRigGoalSettingsBase
// Kind: ScriptStruct; super: IKRigSettingsBase
struct FIKRigGoalSettingsBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Goal; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FIKRigGoalSettingsBase, Goal) == 8, "Offset mismatch for FIKRigGoalSettingsBase::Goal");

// /Script/IKRig.IKRigInputSkeleton
// Kind: ScriptStruct; super: none
struct FIKRigInputSkeleton
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRigLimbSolver
// Kind: ScriptStruct; super: IKRigSolverBase
struct FIKRigLimbSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRigLimbSolver, Settings) == 16, "Offset mismatch for FIKRigLimbSolver::Settings");

// /Script/IKRig.IKRigLimbSolverSettings
// Kind: ScriptStruct; super: LimbSolverSettings
struct FIKRigLimbSolverSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t GoalName[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    FName EndBone; // 0x0038 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FIKRigLimbSolverSettings, StartBone) == 48, "Offset mismatch for FIKRigLimbSolverSettings::StartBone");
static_assert(offsetof(FIKRigLimbSolverSettings, GoalName) == 52, "Offset mismatch for FIKRigLimbSolverSettings::GoalName");
static_assert(offsetof(FIKRigLimbSolverSettings, EndBone) == 56, "Offset mismatch for FIKRigLimbSolverSettings::EndBone");

// /Script/IKRig.IKRigPoleSolver
// Kind: ScriptStruct; super: IKRigSolverBase
struct FIKRigPoleSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRigPoleSolver, Settings) == 16, "Offset mismatch for FIKRigPoleSolver::Settings");

// /Script/IKRig.IKRigPoleSolverSettings
// Kind: ScriptStruct; super: IKRigSolverSettingsBase
struct FIKRigPoleSolverSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t EndBone[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t AimAtGoal[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float Alpha; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FIKRigPoleSolverSettings, StartBone) == 8, "Offset mismatch for FIKRigPoleSolverSettings::StartBone");
static_assert(offsetof(FIKRigPoleSolverSettings, EndBone) == 12, "Offset mismatch for FIKRigPoleSolverSettings::EndBone");
static_assert(offsetof(FIKRigPoleSolverSettings, AimAtGoal) == 16, "Offset mismatch for FIKRigPoleSolverSettings::AimAtGoal");
static_assert(offsetof(FIKRigPoleSolverSettings, Alpha) == 20, "Offset mismatch for FIKRigPoleSolverSettings::Alpha");

// /Script/IKRig.IKRigSetTransform
// Kind: ScriptStruct; super: IKRigSolverBase
struct FIKRigSetTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRigSetTransform, Settings) == 16, "Offset mismatch for FIKRigSetTransform::Settings");

// /Script/IKRig.IKRigSetTransformSettings
// Kind: ScriptStruct; super: IKRigSolverSettingsBase
struct FIKRigSetTransformSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Goal[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneToAffect[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    float PositionAlpha; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float RotationAlpha; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Alpha; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRigSetTransformSettings, Goal) == 8, "Offset mismatch for FIKRigSetTransformSettings::Goal");
static_assert(offsetof(FIKRigSetTransformSettings, BoneToAffect) == 12, "Offset mismatch for FIKRigSetTransformSettings::BoneToAffect");
static_assert(offsetof(FIKRigSetTransformSettings, PositionAlpha) == 16, "Offset mismatch for FIKRigSetTransformSettings::PositionAlpha");
static_assert(offsetof(FIKRigSetTransformSettings, RotationAlpha) == 20, "Offset mismatch for FIKRigSetTransformSettings::RotationAlpha");
static_assert(offsetof(FIKRigSetTransformSettings, Alpha) == 24, "Offset mismatch for FIKRigSetTransformSettings::Alpha");
static_assert(offsetof(FIKRigSetTransformSettings, bPropagateToChildren) == 28, "Offset mismatch for FIKRigSetTransformSettings::bPropagateToChildren");

// /Script/IKRig.IKRigSettingsBase
// Kind: ScriptStruct; super: none
struct FIKRigSettingsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRigSkeleton
// Kind: ScriptStruct; super: none
struct FIKRigSkeleton
{
public:
    void* SkeletalMesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BoneNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParentIndices; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludedBones; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurrentPoseGlobal; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurrentPoseLocal; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RefPoseGlobal; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FIKRigSkeleton, SkeletalMesh) == 0, "Offset mismatch for FIKRigSkeleton::SkeletalMesh");
static_assert(offsetof(FIKRigSkeleton, BoneNames) == 8, "Offset mismatch for FIKRigSkeleton::BoneNames");
static_assert(offsetof(FIKRigSkeleton, ParentIndices) == 24, "Offset mismatch for FIKRigSkeleton::ParentIndices");
static_assert(offsetof(FIKRigSkeleton, ExcludedBones) == 40, "Offset mismatch for FIKRigSkeleton::ExcludedBones");
static_assert(offsetof(FIKRigSkeleton, CurrentPoseGlobal) == 56, "Offset mismatch for FIKRigSkeleton::CurrentPoseGlobal");
static_assert(offsetof(FIKRigSkeleton, CurrentPoseLocal) == 72, "Offset mismatch for FIKRigSkeleton::CurrentPoseLocal");
static_assert(offsetof(FIKRigSkeleton, RefPoseGlobal) == 88, "Offset mismatch for FIKRigSkeleton::RefPoseGlobal");

// /Script/IKRig.IKRigSolverBase
// Kind: ScriptStruct; super: none
struct FIKRigSolverBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FIKRigSolverBase, bIsEnabled) == 8, "Offset mismatch for FIKRigSolverBase::bIsEnabled");

// /Script/IKRig.IKRigSolverSettingsBase
// Kind: ScriptStruct; super: IKRigSettingsBase
struct FIKRigSolverSettingsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRigStretchLimbBoneSettings
// Kind: ScriptStruct; super: IKRigBoneSettingsBase
struct FIKRigStretchLimbBoneSettings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SquashDirection[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIKRigStretchLimbBoneSettings, SquashDirection) == 16, "Offset mismatch for FIKRigStretchLimbBoneSettings::SquashDirection");

// /Script/IKRig.IKRigStretchLimbSettings
// Kind: ScriptStruct; super: IKRigSolverSettingsBase
struct FIKRigStretchLimbSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t EndBone[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t Goal[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnableStretching; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    double MaximumStretchDistance; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double StretchStartPercent; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t RotationMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0029
    double RotateEndBoneWithGoal; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    std::int32_t Iterations; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t SquashMode; // 0x003C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x003D
    double SquashStrength; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FIKRigStretchLimbSettings, StartBone) == 8, "Offset mismatch for FIKRigStretchLimbSettings::StartBone");
static_assert(offsetof(FIKRigStretchLimbSettings, EndBone) == 12, "Offset mismatch for FIKRigStretchLimbSettings::EndBone");
static_assert(offsetof(FIKRigStretchLimbSettings, Goal) == 16, "Offset mismatch for FIKRigStretchLimbSettings::Goal");
static_assert(offsetof(FIKRigStretchLimbSettings, bEnableStretching) == 20, "Offset mismatch for FIKRigStretchLimbSettings::bEnableStretching");
static_assert(offsetof(FIKRigStretchLimbSettings, MaximumStretchDistance) == 24, "Offset mismatch for FIKRigStretchLimbSettings::MaximumStretchDistance");
static_assert(offsetof(FIKRigStretchLimbSettings, StretchStartPercent) == 32, "Offset mismatch for FIKRigStretchLimbSettings::StretchStartPercent");
static_assert(offsetof(FIKRigStretchLimbSettings, RotationMode) == 40, "Offset mismatch for FIKRigStretchLimbSettings::RotationMode");
static_assert(offsetof(FIKRigStretchLimbSettings, RotateEndBoneWithGoal) == 48, "Offset mismatch for FIKRigStretchLimbSettings::RotateEndBoneWithGoal");
static_assert(offsetof(FIKRigStretchLimbSettings, Iterations) == 56, "Offset mismatch for FIKRigStretchLimbSettings::Iterations");
static_assert(offsetof(FIKRigStretchLimbSettings, SquashMode) == 60, "Offset mismatch for FIKRigStretchLimbSettings::SquashMode");
static_assert(offsetof(FIKRigStretchLimbSettings, SquashStrength) == 64, "Offset mismatch for FIKRigStretchLimbSettings::SquashStrength");

// /Script/IKRig.IKRigStretchLimbSolver
// Kind: ScriptStruct; super: IKRigSolverBase
struct FIKRigStretchLimbSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Settings[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    TArray<void*> AllBoneSettings; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FIKRigStretchLimbSolver, Settings) == 16, "Offset mismatch for FIKRigStretchLimbSolver::Settings");
static_assert(offsetof(FIKRigStretchLimbSolver, AllBoneSettings) == 88, "Offset mismatch for FIKRigStretchLimbSolver::AllBoneSettings");

// /Script/IKRig.IKRigWorkData
// Kind: ScriptStruct; super: none
struct FIKRigWorkData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.LimbLink
// Kind: ScriptStruct; super: none
struct FLimbLink
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.LimbSolver
// Kind: ScriptStruct; super: none
struct FLimbSolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.LimbSolverSettings
// Kind: ScriptStruct; super: IKRigSolverSettingsBase
struct FLimbSolverSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ReachPrecision; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HingeRotationAxis; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::int32_t MaxIterations; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableLimit; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0015
    float MinRotationAngle; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAveragePull; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x001D
    float PullDistribution; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ReachStepAlpha; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableTwistCorrection; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndBoneForwardAxis; // 0x0029 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLimbSolverSettings, ReachPrecision) == 8, "Offset mismatch for FLimbSolverSettings::ReachPrecision");
static_assert(offsetof(FLimbSolverSettings, HingeRotationAxis) == 12, "Offset mismatch for FLimbSolverSettings::HingeRotationAxis");
static_assert(offsetof(FLimbSolverSettings, MaxIterations) == 16, "Offset mismatch for FLimbSolverSettings::MaxIterations");
static_assert(offsetof(FLimbSolverSettings, bEnableLimit) == 20, "Offset mismatch for FLimbSolverSettings::bEnableLimit");
static_assert(offsetof(FLimbSolverSettings, MinRotationAngle) == 24, "Offset mismatch for FLimbSolverSettings::MinRotationAngle");
static_assert(offsetof(FLimbSolverSettings, bAveragePull) == 28, "Offset mismatch for FLimbSolverSettings::bAveragePull");
static_assert(offsetof(FLimbSolverSettings, PullDistribution) == 32, "Offset mismatch for FLimbSolverSettings::PullDistribution");
static_assert(offsetof(FLimbSolverSettings, ReachStepAlpha) == 36, "Offset mismatch for FLimbSolverSettings::ReachStepAlpha");
static_assert(offsetof(FLimbSolverSettings, bEnableTwistCorrection) == 40, "Offset mismatch for FLimbSolverSettings::bEnableTwistCorrection");
static_assert(offsetof(FLimbSolverSettings, EndBoneForwardAxis) == 41, "Offset mismatch for FLimbSolverSettings::EndBoneForwardAxis");

// /Script/IKRig.OneEuroFilterSettings
// Kind: ScriptStruct; super: none
struct FOneEuroFilterSettings
{
public:
    double Responsiveness; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double CutoffFrequency; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double VelocityCutoffFrequency; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FOneEuroFilterSettings, Responsiveness) == 0, "Offset mismatch for FOneEuroFilterSettings::Responsiveness");
static_assert(offsetof(FOneEuroFilterSettings, CutoffFrequency) == 8, "Offset mismatch for FOneEuroFilterSettings::CutoffFrequency");
static_assert(offsetof(FOneEuroFilterSettings, VelocityCutoffFrequency) == 16, "Offset mismatch for FOneEuroFilterSettings::VelocityCutoffFrequency");

// /Script/IKRig.PinBoneData
// Kind: ScriptStruct; super: none
struct FPinBoneData
{
public:
    std::uint8_t BoneToCopyFrom[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t BoneToCopyTo[0x154]; // 0x000C (Size: 0x154, Type: StructProperty)
    std::uint8_t BoneToPin[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    FName BoneToPinTo; // 0x0164 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPinBoneData, BoneToCopyFrom) == 0, "Offset mismatch for FPinBoneData::BoneToCopyFrom");
static_assert(offsetof(FPinBoneData, BoneToCopyTo) == 12, "Offset mismatch for FPinBoneData::BoneToCopyTo");
static_assert(offsetof(FPinBoneData, BoneToPin) == 352, "Offset mismatch for FPinBoneData::BoneToPin");
static_assert(offsetof(FPinBoneData, BoneToPinTo) == 356, "Offset mismatch for FPinBoneData::BoneToPinTo");

// /Script/IKRig.RetargetChainMapping
// Kind: ScriptStruct; super: none
struct FRetargetChainMapping
{
public:
    TArray<void*> ChainMap; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* SourceIKRig; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* TargetIKRig; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRetargetChainMapping, ChainMap) == 0, "Offset mismatch for FRetargetChainMapping::ChainMap");
static_assert(offsetof(FRetargetChainMapping, SourceIKRig) == 16, "Offset mismatch for FRetargetChainMapping::SourceIKRig");
static_assert(offsetof(FRetargetChainMapping, TargetIKRig) == 24, "Offset mismatch for FRetargetChainMapping::TargetIKRig");

// /Script/IKRig.RetargetChainPair
// Kind: ScriptStruct; super: none
struct FRetargetChainPair
{
public:
    std::uint8_t TargetChainName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName SourceChainName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRetargetChainPair, TargetChainName) == 0, "Offset mismatch for FRetargetChainPair::TargetChainName");
static_assert(offsetof(FRetargetChainPair, SourceChainName) == 4, "Offset mismatch for FRetargetChainPair::SourceChainName");

// /Script/IKRig.RetargetDefinition
// Kind: ScriptStruct; super: none
struct FRetargetDefinition
{
public:
    std::uint8_t RootBone[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t PelvisBone[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    TArray<void*> BoneChains; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRetargetDefinition, RootBone) == 0, "Offset mismatch for FRetargetDefinition::RootBone");
static_assert(offsetof(FRetargetDefinition, PelvisBone) == 4, "Offset mismatch for FRetargetDefinition::PelvisBone");
static_assert(offsetof(FRetargetDefinition, BoneChains) == 8, "Offset mismatch for FRetargetDefinition::BoneChains");

// /Script/IKRig.RetargetFKChainSettings
// Kind: ScriptStruct; super: none
struct FRetargetFKChainSettings
{
public:
    std::uint8_t TargetChainName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t EnableFK; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RotationMode; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    double RotationAlpha; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TranslationMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    double TranslationAlpha; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRetargetFKChainSettings, TargetChainName) == 0, "Offset mismatch for FRetargetFKChainSettings::TargetChainName");
static_assert(offsetof(FRetargetFKChainSettings, EnableFK) == 4, "Offset mismatch for FRetargetFKChainSettings::EnableFK");
static_assert(offsetof(FRetargetFKChainSettings, RotationMode) == 5, "Offset mismatch for FRetargetFKChainSettings::RotationMode");
static_assert(offsetof(FRetargetFKChainSettings, RotationAlpha) == 8, "Offset mismatch for FRetargetFKChainSettings::RotationAlpha");
static_assert(offsetof(FRetargetFKChainSettings, TranslationMode) == 16, "Offset mismatch for FRetargetFKChainSettings::TranslationMode");
static_assert(offsetof(FRetargetFKChainSettings, TranslationAlpha) == 24, "Offset mismatch for FRetargetFKChainSettings::TranslationAlpha");

// /Script/IKRig.RetargetGlobalSettings
// Kind: ScriptStruct; super: none
struct FRetargetGlobalSettings
{
public:
    std::uint8_t bEnableRoot; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableFK; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableIK; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnablePost; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyBasePose; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t CopyBasePoseRoot[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float SourceScaleFactor; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWarping; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t DirectionSource; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0015
    std::uint8_t ForwardDirection; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0019
    std::uint8_t DirectionChain[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    float WarpForwards; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SidewaysOffset; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float WarpSplay; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRetargetGlobalSettings, bEnableRoot) == 0, "Offset mismatch for FRetargetGlobalSettings::bEnableRoot");
static_assert(offsetof(FRetargetGlobalSettings, bEnableFK) == 1, "Offset mismatch for FRetargetGlobalSettings::bEnableFK");
static_assert(offsetof(FRetargetGlobalSettings, bEnableIK) == 2, "Offset mismatch for FRetargetGlobalSettings::bEnableIK");
static_assert(offsetof(FRetargetGlobalSettings, bEnablePost) == 3, "Offset mismatch for FRetargetGlobalSettings::bEnablePost");
static_assert(offsetof(FRetargetGlobalSettings, bCopyBasePose) == 4, "Offset mismatch for FRetargetGlobalSettings::bCopyBasePose");
static_assert(offsetof(FRetargetGlobalSettings, CopyBasePoseRoot) == 8, "Offset mismatch for FRetargetGlobalSettings::CopyBasePoseRoot");
static_assert(offsetof(FRetargetGlobalSettings, SourceScaleFactor) == 12, "Offset mismatch for FRetargetGlobalSettings::SourceScaleFactor");
static_assert(offsetof(FRetargetGlobalSettings, bWarping) == 16, "Offset mismatch for FRetargetGlobalSettings::bWarping");
static_assert(offsetof(FRetargetGlobalSettings, DirectionSource) == 20, "Offset mismatch for FRetargetGlobalSettings::DirectionSource");
static_assert(offsetof(FRetargetGlobalSettings, ForwardDirection) == 24, "Offset mismatch for FRetargetGlobalSettings::ForwardDirection");
static_assert(offsetof(FRetargetGlobalSettings, DirectionChain) == 28, "Offset mismatch for FRetargetGlobalSettings::DirectionChain");
static_assert(offsetof(FRetargetGlobalSettings, WarpForwards) == 32, "Offset mismatch for FRetargetGlobalSettings::WarpForwards");
static_assert(offsetof(FRetargetGlobalSettings, SidewaysOffset) == 36, "Offset mismatch for FRetargetGlobalSettings::SidewaysOffset");
static_assert(offsetof(FRetargetGlobalSettings, WarpSplay) == 40, "Offset mismatch for FRetargetGlobalSettings::WarpSplay");

// /Script/IKRig.RetargetIKChainSettings
// Kind: ScriptStruct; super: none
struct FRetargetIKChainSettings
{
public:
    std::uint8_t TargetChainName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t EnableIK; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    double BlendToSource; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double BlendToSourceTranslation; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double BlendToSourceRotation; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t BlendToSourceWeights[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t ApplyPelvisOffsetToSourceGoals; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t StaticOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t StaticLocalOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t StaticRotationOffset[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    double ScaleVertical; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    double Extension; // 0x0090 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRetargetIKChainSettings, TargetChainName) == 0, "Offset mismatch for FRetargetIKChainSettings::TargetChainName");
static_assert(offsetof(FRetargetIKChainSettings, EnableIK) == 4, "Offset mismatch for FRetargetIKChainSettings::EnableIK");
static_assert(offsetof(FRetargetIKChainSettings, BlendToSource) == 8, "Offset mismatch for FRetargetIKChainSettings::BlendToSource");
static_assert(offsetof(FRetargetIKChainSettings, BlendToSourceTranslation) == 16, "Offset mismatch for FRetargetIKChainSettings::BlendToSourceTranslation");
static_assert(offsetof(FRetargetIKChainSettings, BlendToSourceRotation) == 24, "Offset mismatch for FRetargetIKChainSettings::BlendToSourceRotation");
static_assert(offsetof(FRetargetIKChainSettings, BlendToSourceWeights) == 32, "Offset mismatch for FRetargetIKChainSettings::BlendToSourceWeights");
static_assert(offsetof(FRetargetIKChainSettings, ApplyPelvisOffsetToSourceGoals) == 56, "Offset mismatch for FRetargetIKChainSettings::ApplyPelvisOffsetToSourceGoals");
static_assert(offsetof(FRetargetIKChainSettings, StaticOffset) == 64, "Offset mismatch for FRetargetIKChainSettings::StaticOffset");
static_assert(offsetof(FRetargetIKChainSettings, StaticLocalOffset) == 88, "Offset mismatch for FRetargetIKChainSettings::StaticLocalOffset");
static_assert(offsetof(FRetargetIKChainSettings, StaticRotationOffset) == 112, "Offset mismatch for FRetargetIKChainSettings::StaticRotationOffset");
static_assert(offsetof(FRetargetIKChainSettings, ScaleVertical) == 136, "Offset mismatch for FRetargetIKChainSettings::ScaleVertical");
static_assert(offsetof(FRetargetIKChainSettings, Extension) == 144, "Offset mismatch for FRetargetIKChainSettings::Extension");

// /Script/IKRig.RetargetOpOverrides
// Kind: ScriptStruct; super: none
struct FRetargetOpOverrides
{
public:
    FName OpName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> PropertyOverrides; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* ScriptStruct; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRetargetOpOverrides, OpName) == 0, "Offset mismatch for FRetargetOpOverrides::OpName");
static_assert(offsetof(FRetargetOpOverrides, PropertyOverrides) == 8, "Offset mismatch for FRetargetOpOverrides::PropertyOverrides");
static_assert(offsetof(FRetargetOpOverrides, ScriptStruct) == 24, "Offset mismatch for FRetargetOpOverrides::ScriptStruct");

// /Script/IKRig.RetargetOpProfile
// Kind: ScriptStruct; super: none
struct FRetargetOpProfile
{
public:
    FName OpToApplySettingsTo; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t SettingsToApply[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRetargetOpProfile, OpToApplySettingsTo) == 0, "Offset mismatch for FRetargetOpProfile::OpToApplySettingsTo");
static_assert(offsetof(FRetargetOpProfile, SettingsToApply) == 8, "Offset mismatch for FRetargetOpProfile::SettingsToApply");

// /Script/IKRig.RetargetOpPropertyOverride
// Kind: ScriptStruct; super: none
struct FRetargetOpPropertyOverride
{
public:
    FString PropertyPath; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint32_t PropertyPathHash; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    FString ValueAsString; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t BoundVariableName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    FName BoundCurveName; // 0x002C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRetargetOpPropertyOverride, PropertyPath) == 0, "Offset mismatch for FRetargetOpPropertyOverride::PropertyPath");
static_assert(offsetof(FRetargetOpPropertyOverride, PropertyPathHash) == 16, "Offset mismatch for FRetargetOpPropertyOverride::PropertyPathHash");
static_assert(offsetof(FRetargetOpPropertyOverride, ValueAsString) == 24, "Offset mismatch for FRetargetOpPropertyOverride::ValueAsString");
static_assert(offsetof(FRetargetOpPropertyOverride, BoundVariableName) == 40, "Offset mismatch for FRetargetOpPropertyOverride::BoundVariableName");
static_assert(offsetof(FRetargetOpPropertyOverride, BoundCurveName) == 44, "Offset mismatch for FRetargetOpPropertyOverride::BoundCurveName");

// /Script/IKRig.RetargetOverrideSet
// Kind: ScriptStruct; super: none
struct FRetargetOverrideSet
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParentName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    TArray<void*> OpOverrides; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bActiveByDefault; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    std::int32_t DisplayOrder; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRetargetOverrideSet, Name) == 0, "Offset mismatch for FRetargetOverrideSet::Name");
static_assert(offsetof(FRetargetOverrideSet, ParentName) == 4, "Offset mismatch for FRetargetOverrideSet::ParentName");
static_assert(offsetof(FRetargetOverrideSet, OpOverrides) == 8, "Offset mismatch for FRetargetOverrideSet::OpOverrides");
static_assert(offsetof(FRetargetOverrideSet, bActiveByDefault) == 24, "Offset mismatch for FRetargetOverrideSet::bActiveByDefault");
static_assert(offsetof(FRetargetOverrideSet, DisplayOrder) == 28, "Offset mismatch for FRetargetOverrideSet::DisplayOrder");

// /Script/IKRig.RetargetPoleVectorSettings
// Kind: ScriptStruct; super: none
struct FRetargetPoleVectorSettings
{
public:
    std::uint8_t TargetChainName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnabled; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    double AlignAlpha; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double StaticAngularOffset; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t MaintainOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRetargetPoleVectorSettings, TargetChainName) == 0, "Offset mismatch for FRetargetPoleVectorSettings::TargetChainName");
static_assert(offsetof(FRetargetPoleVectorSettings, bEnabled) == 4, "Offset mismatch for FRetargetPoleVectorSettings::bEnabled");
static_assert(offsetof(FRetargetPoleVectorSettings, AlignAlpha) == 8, "Offset mismatch for FRetargetPoleVectorSettings::AlignAlpha");
static_assert(offsetof(FRetargetPoleVectorSettings, StaticAngularOffset) == 16, "Offset mismatch for FRetargetPoleVectorSettings::StaticAngularOffset");
static_assert(offsetof(FRetargetPoleVectorSettings, MaintainOffset) == 24, "Offset mismatch for FRetargetPoleVectorSettings::MaintainOffset");

// /Script/IKRig.RetargetProfile
// Kind: ScriptStruct; super: none
struct FRetargetProfile
{
public:
    TArray<void*> RetargetOpProfiles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bApplyTargetRetargetPose; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t TargetRetargetPoseName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t bApplySourceRetargetPose; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    std::uint8_t SourceRetargetPoseName[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t bForceAllIKOff; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyChainSettings; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0022
    TMap<void*, void*> ChainSettings; // 0x0028 (Size: 0x10, Type: MapProperty)
    std::uint8_t bApplyRootSettings; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0039
    std::uint8_t RootSettings[0x68]; // 0x0040 (Size: 0x68, Type: StructProperty)
    std::uint8_t bApplyGlobalSettings; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00A9
    std::uint8_t GlobalSettings[0x1]; // 0x00AC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRetargetProfile, RetargetOpProfiles) == 0, "Offset mismatch for FRetargetProfile::RetargetOpProfiles");
static_assert(offsetof(FRetargetProfile, bApplyTargetRetargetPose) == 16, "Offset mismatch for FRetargetProfile::bApplyTargetRetargetPose");
static_assert(offsetof(FRetargetProfile, TargetRetargetPoseName) == 20, "Offset mismatch for FRetargetProfile::TargetRetargetPoseName");
static_assert(offsetof(FRetargetProfile, bApplySourceRetargetPose) == 24, "Offset mismatch for FRetargetProfile::bApplySourceRetargetPose");
static_assert(offsetof(FRetargetProfile, SourceRetargetPoseName) == 28, "Offset mismatch for FRetargetProfile::SourceRetargetPoseName");
static_assert(offsetof(FRetargetProfile, bForceAllIKOff) == 32, "Offset mismatch for FRetargetProfile::bForceAllIKOff");
static_assert(offsetof(FRetargetProfile, bApplyChainSettings) == 33, "Offset mismatch for FRetargetProfile::bApplyChainSettings");
static_assert(offsetof(FRetargetProfile, ChainSettings) == 40, "Offset mismatch for FRetargetProfile::ChainSettings");
static_assert(offsetof(FRetargetProfile, bApplyRootSettings) == 56, "Offset mismatch for FRetargetProfile::bApplyRootSettings");
static_assert(offsetof(FRetargetProfile, RootSettings) == 64, "Offset mismatch for FRetargetProfile::RootSettings");
static_assert(offsetof(FRetargetProfile, bApplyGlobalSettings) == 168, "Offset mismatch for FRetargetProfile::bApplyGlobalSettings");
static_assert(offsetof(FRetargetProfile, GlobalSettings) == 172, "Offset mismatch for FRetargetProfile::GlobalSettings");

// /Script/IKRig.RetargetSpeedPlantingSettings
// Kind: ScriptStruct; super: none
struct FRetargetSpeedPlantingSettings
{
public:
    std::uint8_t TargetChainName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Alpha; // 0x0004 (Size: 0x4, Type: FloatProperty)
    FName SpeedCurveName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRetargetSpeedPlantingSettings, TargetChainName) == 0, "Offset mismatch for FRetargetSpeedPlantingSettings::TargetChainName");
static_assert(offsetof(FRetargetSpeedPlantingSettings, Alpha) == 4, "Offset mismatch for FRetargetSpeedPlantingSettings::Alpha");
static_assert(offsetof(FRetargetSpeedPlantingSettings, SpeedCurveName) == 8, "Offset mismatch for FRetargetSpeedPlantingSettings::SpeedCurveName");

// /Script/IKRig.RetargetStretchChainSettings
// Kind: ScriptStruct; super: none
struct FRetargetStretchChainSettings
{
public:
    std::uint8_t TargetChainName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnabled; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    double MatchSourceLength; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double ScaleChainLength; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRetargetStretchChainSettings, TargetChainName) == 0, "Offset mismatch for FRetargetStretchChainSettings::TargetChainName");
static_assert(offsetof(FRetargetStretchChainSettings, bEnabled) == 4, "Offset mismatch for FRetargetStretchChainSettings::bEnabled");
static_assert(offsetof(FRetargetStretchChainSettings, MatchSourceLength) == 8, "Offset mismatch for FRetargetStretchChainSettings::MatchSourceLength");
static_assert(offsetof(FRetargetStretchChainSettings, ScaleChainLength) == 16, "Offset mismatch for FRetargetStretchChainSettings::ScaleChainLength");

// /Script/IKRig.RetargetStrideWarpChainSettings
// Kind: ScriptStruct; super: none
struct FRetargetStrideWarpChainSettings
{
public:
    std::uint8_t TargetChainName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t EnableStrideWarping; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float Alpha; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRetargetStrideWarpChainSettings, TargetChainName) == 0, "Offset mismatch for FRetargetStrideWarpChainSettings::TargetChainName");
static_assert(offsetof(FRetargetStrideWarpChainSettings, EnableStrideWarping) == 4, "Offset mismatch for FRetargetStrideWarpChainSettings::EnableStrideWarping");
static_assert(offsetof(FRetargetStrideWarpChainSettings, Alpha) == 8, "Offset mismatch for FRetargetStrideWarpChainSettings::Alpha");

// /Script/IKRig.RetargetVariableContainer
// Kind: ScriptStruct; super: none
struct FRetargetVariableContainer
{
public:
    std::uint8_t Bag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRetargetVariableContainer, Bag) == 0, "Offset mismatch for FRetargetVariableContainer::Bag");

// /Script/IKRig.RigUnit_IKRig
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_IKRig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* IKRigAsset; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Goals; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WorkData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_IKRig, IKRigAsset) == 16, "Offset mismatch for FRigUnit_IKRig::IKRigAsset");
static_assert(offsetof(FRigUnit_IKRig, Goals) == 24, "Offset mismatch for FRigUnit_IKRig::Goals");
static_assert(offsetof(FRigUnit_IKRig, WorkData) == 40, "Offset mismatch for FRigUnit_IKRig::WorkData");

// /Script/IKRig.TargetChainFKSettings
// Kind: ScriptStruct; super: none
struct FTargetChainFKSettings
{
public:
    std::uint8_t EnableFK; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RotationMode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float RotationAlpha; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TranslationMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float TranslationAlpha; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PoleVectorMatching; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PoleVectorMaintainOffset; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0015
    float PoleVectorOffset; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTargetChainFKSettings, EnableFK) == 0, "Offset mismatch for FTargetChainFKSettings::EnableFK");
static_assert(offsetof(FTargetChainFKSettings, RotationMode) == 1, "Offset mismatch for FTargetChainFKSettings::RotationMode");
static_assert(offsetof(FTargetChainFKSettings, RotationAlpha) == 4, "Offset mismatch for FTargetChainFKSettings::RotationAlpha");
static_assert(offsetof(FTargetChainFKSettings, TranslationMode) == 8, "Offset mismatch for FTargetChainFKSettings::TranslationMode");
static_assert(offsetof(FTargetChainFKSettings, TranslationAlpha) == 12, "Offset mismatch for FTargetChainFKSettings::TranslationAlpha");
static_assert(offsetof(FTargetChainFKSettings, PoleVectorMatching) == 16, "Offset mismatch for FTargetChainFKSettings::PoleVectorMatching");
static_assert(offsetof(FTargetChainFKSettings, PoleVectorMaintainOffset) == 20, "Offset mismatch for FTargetChainFKSettings::PoleVectorMaintainOffset");
static_assert(offsetof(FTargetChainFKSettings, PoleVectorOffset) == 24, "Offset mismatch for FTargetChainFKSettings::PoleVectorOffset");

// /Script/IKRig.TargetChainIKSettings
// Kind: ScriptStruct; super: none
struct FTargetChainIKSettings
{
public:
    std::uint8_t EnableIK; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float BlendToSource; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BlendToSourceTranslation; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BlendToSourceRotation; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendToSourceWeights[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t StaticOffset[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t StaticLocalOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t StaticRotationOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    float ScaleVertical; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Extension; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAffectedByIKWarping; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTargetChainIKSettings, EnableIK) == 0, "Offset mismatch for FTargetChainIKSettings::EnableIK");
static_assert(offsetof(FTargetChainIKSettings, BlendToSource) == 4, "Offset mismatch for FTargetChainIKSettings::BlendToSource");
static_assert(offsetof(FTargetChainIKSettings, BlendToSourceTranslation) == 8, "Offset mismatch for FTargetChainIKSettings::BlendToSourceTranslation");
static_assert(offsetof(FTargetChainIKSettings, BlendToSourceRotation) == 12, "Offset mismatch for FTargetChainIKSettings::BlendToSourceRotation");
static_assert(offsetof(FTargetChainIKSettings, BlendToSourceWeights) == 16, "Offset mismatch for FTargetChainIKSettings::BlendToSourceWeights");
static_assert(offsetof(FTargetChainIKSettings, StaticOffset) == 40, "Offset mismatch for FTargetChainIKSettings::StaticOffset");
static_assert(offsetof(FTargetChainIKSettings, StaticLocalOffset) == 64, "Offset mismatch for FTargetChainIKSettings::StaticLocalOffset");
static_assert(offsetof(FTargetChainIKSettings, StaticRotationOffset) == 88, "Offset mismatch for FTargetChainIKSettings::StaticRotationOffset");
static_assert(offsetof(FTargetChainIKSettings, ScaleVertical) == 112, "Offset mismatch for FTargetChainIKSettings::ScaleVertical");
static_assert(offsetof(FTargetChainIKSettings, Extension) == 116, "Offset mismatch for FTargetChainIKSettings::Extension");
static_assert(offsetof(FTargetChainIKSettings, bAffectedByIKWarping) == 120, "Offset mismatch for FTargetChainIKSettings::bAffectedByIKWarping");

// /Script/IKRig.TargetChainSettings
// Kind: ScriptStruct; super: none
struct FTargetChainSettings
{
public:
    std::uint8_t FK[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t IK[0x80]; // 0x0020 (Size: 0x80, Type: StructProperty)
    std::uint8_t SpeedPlanting[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTargetChainSettings, FK) == 0, "Offset mismatch for FTargetChainSettings::FK");
static_assert(offsetof(FTargetChainSettings, IK) == 32, "Offset mismatch for FTargetChainSettings::IK");
static_assert(offsetof(FTargetChainSettings, SpeedPlanting) == 160, "Offset mismatch for FTargetChainSettings::SpeedPlanting");

// /Script/IKRig.TargetChainSpeedPlantSettings
// Kind: ScriptStruct; super: none
struct FTargetChainSpeedPlantSettings
{
public:
    std::uint8_t EnableSpeedPlanting; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t SpeedCurveName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    float SpeedThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float UnplantStiffness; // 0x000C (Size: 0x4, Type: FloatProperty)
    float UnplantCriticalDamping; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTargetChainSpeedPlantSettings, EnableSpeedPlanting) == 0, "Offset mismatch for FTargetChainSpeedPlantSettings::EnableSpeedPlanting");
static_assert(offsetof(FTargetChainSpeedPlantSettings, SpeedCurveName) == 4, "Offset mismatch for FTargetChainSpeedPlantSettings::SpeedCurveName");
static_assert(offsetof(FTargetChainSpeedPlantSettings, SpeedThreshold) == 8, "Offset mismatch for FTargetChainSpeedPlantSettings::SpeedThreshold");
static_assert(offsetof(FTargetChainSpeedPlantSettings, UnplantStiffness) == 12, "Offset mismatch for FTargetChainSpeedPlantSettings::UnplantStiffness");
static_assert(offsetof(FTargetChainSpeedPlantSettings, UnplantCriticalDamping) == 16, "Offset mismatch for FTargetChainSpeedPlantSettings::UnplantCriticalDamping");

// /Script/IKRig.TargetRootSettings
// Kind: ScriptStruct; super: none
struct FTargetRootSettings
{
public:
    float RotationAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TranslationAlpha; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BlendToSource; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t BlendToSourceWeights[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float ScaleHorizontal; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float ScaleVertical; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TranslationOffset[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float AffectIKHorizontal; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float AffectIKVertical; // 0x0064 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTargetRootSettings, RotationAlpha) == 0, "Offset mismatch for FTargetRootSettings::RotationAlpha");
static_assert(offsetof(FTargetRootSettings, TranslationAlpha) == 4, "Offset mismatch for FTargetRootSettings::TranslationAlpha");
static_assert(offsetof(FTargetRootSettings, BlendToSource) == 8, "Offset mismatch for FTargetRootSettings::BlendToSource");
static_assert(offsetof(FTargetRootSettings, BlendToSourceWeights) == 16, "Offset mismatch for FTargetRootSettings::BlendToSourceWeights");
static_assert(offsetof(FTargetRootSettings, ScaleHorizontal) == 40, "Offset mismatch for FTargetRootSettings::ScaleHorizontal");
static_assert(offsetof(FTargetRootSettings, ScaleVertical) == 44, "Offset mismatch for FTargetRootSettings::ScaleVertical");
static_assert(offsetof(FTargetRootSettings, TranslationOffset) == 48, "Offset mismatch for FTargetRootSettings::TranslationOffset");
static_assert(offsetof(FTargetRootSettings, RotationOffset) == 72, "Offset mismatch for FTargetRootSettings::RotationOffset");
static_assert(offsetof(FTargetRootSettings, AffectIKHorizontal) == 96, "Offset mismatch for FTargetRootSettings::AffectIKHorizontal");
static_assert(offsetof(FTargetRootSettings, AffectIKVertical) == 100, "Offset mismatch for FTargetRootSettings::AffectIKVertical");

// /Script/IKRig.CurveRemapOp
// Kind: Class; super: RetargetOpBase
class UCurveRemapOp
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> CurvesToRemap; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCopyAllSourceCurves; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCurveRemapOp, CurvesToRemap) == 48, "Offset mismatch for UCurveRemapOp::CurvesToRemap");
static_assert(offsetof(UCurveRemapOp, bCopyAllSourceCurves) == 64, "Offset mismatch for UCurveRemapOp::bCopyAllSourceCurves");

// /Script/IKRig.IKGoalCreatorInterface
// Kind: Class; super: Interface
class UIKGoalCreatorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetAdditivePoseController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetAdditivePoseController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetAlignPoleVectorController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetAlignPoleVectorController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetBlendToSourceController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetBlendToSourceController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetCopyBasePoseController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetCopyBasePoseController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetCurveRemapController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetCurveRemapController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetFKChainsController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetFKChainsController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetFilterBoneController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetFilterBoneController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetFloorConstraintController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetFloorConstraintController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetGlobalSettings
// Kind: Class; super: Object
class UIKRetargetGlobalSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UIKRetargetGlobalSettings, Settings) == 40, "Offset mismatch for UIKRetargetGlobalSettings::Settings");

// /Script/IKRig.IKRetargetIKChainsController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetIKChainsController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetOffsetGoalsController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetOffsetGoalsController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetOpControllerBase
// Kind: Class; super: Object
class UIKRetargetOpControllerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetPelvisMotionController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetPelvisMotionController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetPinBoneController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetPinBoneController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetPoseController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetPoseController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetProcessor
// Kind: Class; super: Object
class UIKRetargetProcessor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetRootMotionController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetRootMotionController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetRunIKRigController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetRunIKRigController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetScaleGoalsController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetScaleGoalsController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetScaleSourceController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetScaleSourceController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetSpeedPlantingController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetSpeedPlantingController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetStretchChainController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetStretchChainController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetStrideWarpingController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetStrideWarpingController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargetWeaponGoalsOpController
// Kind: Class; super: IKRetargetOpControllerBase
class UIKRetargetWeaponGoalsOpController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRetargeter
// Kind: Class; super: Object
class UIKRetargeter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t Version; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    void* SourceIKRigAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* TargetIKRigAsset; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RetargetOps; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> Profiles; // 0x0050 (Size: 0x10, Type: MapProperty)
    FName CurrentProfile; // 0x0060 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> OverrideSets; // 0x0068 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0078
    std::uint8_t Variables[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> SourceRetargetPoses; // 0x00A0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TargetRetargetPoses; // 0x00B0 (Size: 0x10, Type: MapProperty)
    std::uint8_t CurrentSourceRetargetPose[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t CurrentTargetRetargetPose[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bRetargetRoot; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRetargetFK; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRetargetIK; // 0x00CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x00CB
    float TargetActorOffset; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float TargetActorScale; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00D4
    TMap<void*, void*> RetargetPoses; // 0x00D8 (Size: 0x10, Type: MapProperty)
    FName CurrentRetargetPose; // 0x00E8 (Size: 0x8, Type: NameProperty)
    std::uint8_t ChainMap[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    TArray<void*> ChainSettings; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    void* RootSettings; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* GlobalSettings; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* OpStack; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UIKRetargeter, Version) == 40, "Offset mismatch for UIKRetargeter::Version");
static_assert(offsetof(UIKRetargeter, SourceIKRigAsset) == 48, "Offset mismatch for UIKRetargeter::SourceIKRigAsset");
static_assert(offsetof(UIKRetargeter, TargetIKRigAsset) == 56, "Offset mismatch for UIKRetargeter::TargetIKRigAsset");
static_assert(offsetof(UIKRetargeter, RetargetOps) == 64, "Offset mismatch for UIKRetargeter::RetargetOps");
static_assert(offsetof(UIKRetargeter, Profiles) == 80, "Offset mismatch for UIKRetargeter::Profiles");
static_assert(offsetof(UIKRetargeter, CurrentProfile) == 96, "Offset mismatch for UIKRetargeter::CurrentProfile");
static_assert(offsetof(UIKRetargeter, OverrideSets) == 104, "Offset mismatch for UIKRetargeter::OverrideSets");
static_assert(offsetof(UIKRetargeter, Variables) == 144, "Offset mismatch for UIKRetargeter::Variables");
static_assert(offsetof(UIKRetargeter, SourceRetargetPoses) == 160, "Offset mismatch for UIKRetargeter::SourceRetargetPoses");
static_assert(offsetof(UIKRetargeter, TargetRetargetPoses) == 176, "Offset mismatch for UIKRetargeter::TargetRetargetPoses");
static_assert(offsetof(UIKRetargeter, CurrentSourceRetargetPose) == 192, "Offset mismatch for UIKRetargeter::CurrentSourceRetargetPose");
static_assert(offsetof(UIKRetargeter, CurrentTargetRetargetPose) == 196, "Offset mismatch for UIKRetargeter::CurrentTargetRetargetPose");
static_assert(offsetof(UIKRetargeter, bRetargetRoot) == 200, "Offset mismatch for UIKRetargeter::bRetargetRoot");
static_assert(offsetof(UIKRetargeter, bRetargetFK) == 201, "Offset mismatch for UIKRetargeter::bRetargetFK");
static_assert(offsetof(UIKRetargeter, bRetargetIK) == 202, "Offset mismatch for UIKRetargeter::bRetargetIK");
static_assert(offsetof(UIKRetargeter, TargetActorOffset) == 204, "Offset mismatch for UIKRetargeter::TargetActorOffset");
static_assert(offsetof(UIKRetargeter, TargetActorScale) == 208, "Offset mismatch for UIKRetargeter::TargetActorScale");
static_assert(offsetof(UIKRetargeter, RetargetPoses) == 216, "Offset mismatch for UIKRetargeter::RetargetPoses");
static_assert(offsetof(UIKRetargeter, CurrentRetargetPose) == 232, "Offset mismatch for UIKRetargeter::CurrentRetargetPose");
static_assert(offsetof(UIKRetargeter, ChainMap) == 240, "Offset mismatch for UIKRetargeter::ChainMap");
static_assert(offsetof(UIKRetargeter, ChainSettings) == 272, "Offset mismatch for UIKRetargeter::ChainSettings");
static_assert(offsetof(UIKRetargeter, RootSettings) == 288, "Offset mismatch for UIKRetargeter::RootSettings");
static_assert(offsetof(UIKRetargeter, GlobalSettings) == 296, "Offset mismatch for UIKRetargeter::GlobalSettings");
static_assert(offsetof(UIKRetargeter, OpStack) == 304, "Offset mismatch for UIKRetargeter::OpStack");

// /Script/IKRig.IKRigBodyMoverController
// Kind: Class; super: IKRigSolverControllerBase
class UIKRigBodyMoverController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRigComponent
// Kind: Class; super: ActorComponent
class UIKRigComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UIKRigComponent, PrimaryComponentTick) == 56, "Offset mismatch for UIKRigComponent::PrimaryComponentTick");
static_assert(offsetof(UIKRigComponent, ComponentTags) == 104, "Offset mismatch for UIKRigComponent::ComponentTags");
static_assert(offsetof(UIKRigComponent, AssetUserData) == 120, "Offset mismatch for UIKRigComponent::AssetUserData");
static_assert(offsetof(UIKRigComponent, UCSSerializationIndex) == 144, "Offset mismatch for UIKRigComponent::UCSSerializationIndex");
static_assert(offsetof(UIKRigComponent, bNetAddressable) == 152, "Offset mismatch for UIKRigComponent::bNetAddressable");
static_assert(offsetof(UIKRigComponent, bAutoActivate) == 154, "Offset mismatch for UIKRigComponent::bAutoActivate");
static_assert(offsetof(UIKRigComponent, bIsEditorOnly) == 155, "Offset mismatch for UIKRigComponent::bIsEditorOnly");
static_assert(offsetof(UIKRigComponent, CreationMethod) == 185, "Offset mismatch for UIKRigComponent::CreationMethod");
static_assert(offsetof(UIKRigComponent, OnComponentActivated) == 186, "Offset mismatch for UIKRigComponent::OnComponentActivated");
static_assert(offsetof(UIKRigComponent, OnComponentDeactivated) == 187, "Offset mismatch for UIKRigComponent::OnComponentDeactivated");

// /Script/IKRig.IKRigDefinition
// Kind: Class; super: Object
class UIKRigDefinition
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t PreviewSkeletalMesh[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t skeleton[0x78]; // 0x0050 (Size: 0x78, Type: StructProperty)
    TArray<void*> Goals; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SolverStack; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RetargetDefinition[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    TArray<void*> Solvers; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UIKRigDefinition, PreviewSkeletalMesh) == 48, "Offset mismatch for UIKRigDefinition::PreviewSkeletalMesh");
static_assert(offsetof(UIKRigDefinition, skeleton) == 80, "Offset mismatch for UIKRigDefinition::skeleton");
static_assert(offsetof(UIKRigDefinition, Goals) == 200, "Offset mismatch for UIKRigDefinition::Goals");
static_assert(offsetof(UIKRigDefinition, SolverStack) == 216, "Offset mismatch for UIKRigDefinition::SolverStack");
static_assert(offsetof(UIKRigDefinition, RetargetDefinition) == 232, "Offset mismatch for UIKRigDefinition::RetargetDefinition");
static_assert(offsetof(UIKRigDefinition, Solvers) == 256, "Offset mismatch for UIKRigDefinition::Solvers");

// /Script/IKRig.IKRigEffectorGoal
// Kind: Class; super: Object
class UIKRigEffectorGoal
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GoalName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    float PositionAlpha; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float RotationAlpha; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    std::uint8_t CurrentTransform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t InitialTransform[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UIKRigEffectorGoal, GoalName) == 40, "Offset mismatch for UIKRigEffectorGoal::GoalName");
static_assert(offsetof(UIKRigEffectorGoal, BoneName) == 44, "Offset mismatch for UIKRigEffectorGoal::BoneName");
static_assert(offsetof(UIKRigEffectorGoal, PositionAlpha) == 48, "Offset mismatch for UIKRigEffectorGoal::PositionAlpha");
static_assert(offsetof(UIKRigEffectorGoal, RotationAlpha) == 52, "Offset mismatch for UIKRigEffectorGoal::RotationAlpha");
static_assert(offsetof(UIKRigEffectorGoal, CurrentTransform) == 64, "Offset mismatch for UIKRigEffectorGoal::CurrentTransform");
static_assert(offsetof(UIKRigEffectorGoal, InitialTransform) == 160, "Offset mismatch for UIKRigEffectorGoal::InitialTransform");

// /Script/IKRig.IKRigFBIKController
// Kind: Class; super: IKRigSolverControllerBase
class UIKRigFBIKController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRigFBIKSolver
// Kind: Class; super: IKRigSolver
class UIKRigFBIKSolver
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RootBone[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::int32_t Iterations; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t SubIterations; // 0x0038 (Size: 0x4, Type: IntProperty)
    float MassMultiplier; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowStretch; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RootBehavior; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0042
    std::uint8_t PrePullRootSettings[0x20]; // 0x0044 (Size: 0x20, Type: StructProperty)
    float PullChainAlpha; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float MaxAngle; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float OverRelaxation; // 0x006C (Size: 0x4, Type: FloatProperty)
    TArray<void*> Effectors; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoneSettings; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UIKRigFBIKSolver, RootBone) == 48, "Offset mismatch for UIKRigFBIKSolver::RootBone");
static_assert(offsetof(UIKRigFBIKSolver, Iterations) == 52, "Offset mismatch for UIKRigFBIKSolver::Iterations");
static_assert(offsetof(UIKRigFBIKSolver, SubIterations) == 56, "Offset mismatch for UIKRigFBIKSolver::SubIterations");
static_assert(offsetof(UIKRigFBIKSolver, MassMultiplier) == 60, "Offset mismatch for UIKRigFBIKSolver::MassMultiplier");
static_assert(offsetof(UIKRigFBIKSolver, bAllowStretch) == 64, "Offset mismatch for UIKRigFBIKSolver::bAllowStretch");
static_assert(offsetof(UIKRigFBIKSolver, RootBehavior) == 65, "Offset mismatch for UIKRigFBIKSolver::RootBehavior");
static_assert(offsetof(UIKRigFBIKSolver, PrePullRootSettings) == 68, "Offset mismatch for UIKRigFBIKSolver::PrePullRootSettings");
static_assert(offsetof(UIKRigFBIKSolver, PullChainAlpha) == 100, "Offset mismatch for UIKRigFBIKSolver::PullChainAlpha");
static_assert(offsetof(UIKRigFBIKSolver, MaxAngle) == 104, "Offset mismatch for UIKRigFBIKSolver::MaxAngle");
static_assert(offsetof(UIKRigFBIKSolver, OverRelaxation) == 108, "Offset mismatch for UIKRigFBIKSolver::OverRelaxation");
static_assert(offsetof(UIKRigFBIKSolver, Effectors) == 112, "Offset mismatch for UIKRigFBIKSolver::Effectors");
static_assert(offsetof(UIKRigFBIKSolver, BoneSettings) == 128, "Offset mismatch for UIKRigFBIKSolver::BoneSettings");

// /Script/IKRig.IKRigLimbSolverController
// Kind: Class; super: IKRigSolverControllerBase
class UIKRigLimbSolverController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRigPoleSolverController
// Kind: Class; super: IKRigSolverControllerBase
class UIKRigPoleSolverController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRigProcessor
// Kind: Class; super: Object
class UIKRigProcessor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRigSetTransformController
// Kind: Class; super: IKRigSolverControllerBase
class UIKRigSetTransformController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRigSolver
// Kind: Class; super: Object
class UIKRigSolver
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UIKRigSolver, bIsEnabled) == 40, "Offset mismatch for UIKRigSolver::bIsEnabled");

// /Script/IKRig.IKRigSolverControllerBase
// Kind: Class; super: Object
class UIKRigSolverControllerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.IKRig_BodyMover
// Kind: Class; super: IKRigSolver
class UIKRig_BodyMover
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RootBone[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    float PositionAlpha; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float PositionPositiveX; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float PositionNegativeX; // 0x003C (Size: 0x4, Type: FloatProperty)
    float PositionPositiveY; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float PositionNegativeY; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float PositionPositiveZ; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float PositionNegativeZ; // 0x004C (Size: 0x4, Type: FloatProperty)
    float RotationAlpha; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float RotateXAlpha; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float RotateYAlpha; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float RotateZAlpha; // 0x005C (Size: 0x4, Type: FloatProperty)
    TArray<void*> Effectors; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UIKRig_BodyMover, RootBone) == 48, "Offset mismatch for UIKRig_BodyMover::RootBone");
static_assert(offsetof(UIKRig_BodyMover, PositionAlpha) == 52, "Offset mismatch for UIKRig_BodyMover::PositionAlpha");
static_assert(offsetof(UIKRig_BodyMover, PositionPositiveX) == 56, "Offset mismatch for UIKRig_BodyMover::PositionPositiveX");
static_assert(offsetof(UIKRig_BodyMover, PositionNegativeX) == 60, "Offset mismatch for UIKRig_BodyMover::PositionNegativeX");
static_assert(offsetof(UIKRig_BodyMover, PositionPositiveY) == 64, "Offset mismatch for UIKRig_BodyMover::PositionPositiveY");
static_assert(offsetof(UIKRig_BodyMover, PositionNegativeY) == 68, "Offset mismatch for UIKRig_BodyMover::PositionNegativeY");
static_assert(offsetof(UIKRig_BodyMover, PositionPositiveZ) == 72, "Offset mismatch for UIKRig_BodyMover::PositionPositiveZ");
static_assert(offsetof(UIKRig_BodyMover, PositionNegativeZ) == 76, "Offset mismatch for UIKRig_BodyMover::PositionNegativeZ");
static_assert(offsetof(UIKRig_BodyMover, RotationAlpha) == 80, "Offset mismatch for UIKRig_BodyMover::RotationAlpha");
static_assert(offsetof(UIKRig_BodyMover, RotateXAlpha) == 84, "Offset mismatch for UIKRig_BodyMover::RotateXAlpha");
static_assert(offsetof(UIKRig_BodyMover, RotateYAlpha) == 88, "Offset mismatch for UIKRig_BodyMover::RotateYAlpha");
static_assert(offsetof(UIKRig_BodyMover, RotateZAlpha) == 92, "Offset mismatch for UIKRig_BodyMover::RotateZAlpha");
static_assert(offsetof(UIKRig_BodyMover, Effectors) == 96, "Offset mismatch for UIKRig_BodyMover::Effectors");

// /Script/IKRig.IKRig_BodyMoverEffector
// Kind: Class; super: Object
class UIKRig_BodyMoverEffector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GoalName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    float InfluenceMultiplier; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UIKRig_BodyMoverEffector, GoalName) == 40, "Offset mismatch for UIKRig_BodyMoverEffector::GoalName");
static_assert(offsetof(UIKRig_BodyMoverEffector, BoneName) == 44, "Offset mismatch for UIKRig_BodyMoverEffector::BoneName");
static_assert(offsetof(UIKRig_BodyMoverEffector, InfluenceMultiplier) == 48, "Offset mismatch for UIKRig_BodyMoverEffector::InfluenceMultiplier");

// /Script/IKRig.IKRig_FBIKBoneSettings
// Kind: Class; super: Object
class UIKRig_FBIKBoneSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bone[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    float RotationStiffness; // 0x002C (Size: 0x4, Type: FloatProperty)
    float PositionStiffness; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t X; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    float MinX; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float MaxX; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Y; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0041
    float MinY; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MaxY; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Z; // 0x004C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x004D
    float MinZ; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float MaxZ; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUsePreferredAngles; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0059
    std::uint8_t PreferredAngles[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UIKRig_FBIKBoneSettings, bone) == 40, "Offset mismatch for UIKRig_FBIKBoneSettings::bone");
static_assert(offsetof(UIKRig_FBIKBoneSettings, RotationStiffness) == 44, "Offset mismatch for UIKRig_FBIKBoneSettings::RotationStiffness");
static_assert(offsetof(UIKRig_FBIKBoneSettings, PositionStiffness) == 48, "Offset mismatch for UIKRig_FBIKBoneSettings::PositionStiffness");
static_assert(offsetof(UIKRig_FBIKBoneSettings, X) == 52, "Offset mismatch for UIKRig_FBIKBoneSettings::X");
static_assert(offsetof(UIKRig_FBIKBoneSettings, MinX) == 56, "Offset mismatch for UIKRig_FBIKBoneSettings::MinX");
static_assert(offsetof(UIKRig_FBIKBoneSettings, MaxX) == 60, "Offset mismatch for UIKRig_FBIKBoneSettings::MaxX");
static_assert(offsetof(UIKRig_FBIKBoneSettings, Y) == 64, "Offset mismatch for UIKRig_FBIKBoneSettings::Y");
static_assert(offsetof(UIKRig_FBIKBoneSettings, MinY) == 68, "Offset mismatch for UIKRig_FBIKBoneSettings::MinY");
static_assert(offsetof(UIKRig_FBIKBoneSettings, MaxY) == 72, "Offset mismatch for UIKRig_FBIKBoneSettings::MaxY");
static_assert(offsetof(UIKRig_FBIKBoneSettings, Z) == 76, "Offset mismatch for UIKRig_FBIKBoneSettings::Z");
static_assert(offsetof(UIKRig_FBIKBoneSettings, MinZ) == 80, "Offset mismatch for UIKRig_FBIKBoneSettings::MinZ");
static_assert(offsetof(UIKRig_FBIKBoneSettings, MaxZ) == 84, "Offset mismatch for UIKRig_FBIKBoneSettings::MaxZ");
static_assert(offsetof(UIKRig_FBIKBoneSettings, bUsePreferredAngles) == 88, "Offset mismatch for UIKRig_FBIKBoneSettings::bUsePreferredAngles");
static_assert(offsetof(UIKRig_FBIKBoneSettings, PreferredAngles) == 96, "Offset mismatch for UIKRig_FBIKBoneSettings::PreferredAngles");

// /Script/IKRig.IKRig_FBIKEffector
// Kind: Class; super: Object
class UIKRig_FBIKEffector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GoalName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::int32_t ChainDepth; // 0x0030 (Size: 0x4, Type: IntProperty)
    float StrengthAlpha; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float PullChainAlpha; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float PinRotation; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UIKRig_FBIKEffector, GoalName) == 40, "Offset mismatch for UIKRig_FBIKEffector::GoalName");
static_assert(offsetof(UIKRig_FBIKEffector, BoneName) == 44, "Offset mismatch for UIKRig_FBIKEffector::BoneName");
static_assert(offsetof(UIKRig_FBIKEffector, ChainDepth) == 48, "Offset mismatch for UIKRig_FBIKEffector::ChainDepth");
static_assert(offsetof(UIKRig_FBIKEffector, StrengthAlpha) == 52, "Offset mismatch for UIKRig_FBIKEffector::StrengthAlpha");
static_assert(offsetof(UIKRig_FBIKEffector, PullChainAlpha) == 56, "Offset mismatch for UIKRig_FBIKEffector::PullChainAlpha");
static_assert(offsetof(UIKRig_FBIKEffector, PinRotation) == 60, "Offset mismatch for UIKRig_FBIKEffector::PinRotation");

// /Script/IKRig.IKRig_LimbEffector
// Kind: Class; super: Object
class UIKRig_LimbEffector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GoalName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    FName BoneName; // 0x002C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UIKRig_LimbEffector, GoalName) == 40, "Offset mismatch for UIKRig_LimbEffector::GoalName");
static_assert(offsetof(UIKRig_LimbEffector, BoneName) == 44, "Offset mismatch for UIKRig_LimbEffector::BoneName");

// /Script/IKRig.IKRig_LimbSolver
// Kind: Class; super: IKRigSolver
class UIKRig_LimbSolver
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RootName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    float ReachPrecision; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HingeRotationAxis; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t MaxIterations; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableLimit; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0041
    float MinRotationAngle; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAveragePull; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0049
    float PullDistribution; // 0x004C (Size: 0x4, Type: FloatProperty)
    float ReachStepAlpha; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableTwistCorrection; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndBoneForwardAxis; // 0x0055 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0056
    void* Effector; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UIKRig_LimbSolver, RootName) == 48, "Offset mismatch for UIKRig_LimbSolver::RootName");
static_assert(offsetof(UIKRig_LimbSolver, ReachPrecision) == 52, "Offset mismatch for UIKRig_LimbSolver::ReachPrecision");
static_assert(offsetof(UIKRig_LimbSolver, HingeRotationAxis) == 56, "Offset mismatch for UIKRig_LimbSolver::HingeRotationAxis");
static_assert(offsetof(UIKRig_LimbSolver, MaxIterations) == 60, "Offset mismatch for UIKRig_LimbSolver::MaxIterations");
static_assert(offsetof(UIKRig_LimbSolver, bEnableLimit) == 64, "Offset mismatch for UIKRig_LimbSolver::bEnableLimit");
static_assert(offsetof(UIKRig_LimbSolver, MinRotationAngle) == 68, "Offset mismatch for UIKRig_LimbSolver::MinRotationAngle");
static_assert(offsetof(UIKRig_LimbSolver, bAveragePull) == 72, "Offset mismatch for UIKRig_LimbSolver::bAveragePull");
static_assert(offsetof(UIKRig_LimbSolver, PullDistribution) == 76, "Offset mismatch for UIKRig_LimbSolver::PullDistribution");
static_assert(offsetof(UIKRig_LimbSolver, ReachStepAlpha) == 80, "Offset mismatch for UIKRig_LimbSolver::ReachStepAlpha");
static_assert(offsetof(UIKRig_LimbSolver, bEnableTwistCorrection) == 84, "Offset mismatch for UIKRig_LimbSolver::bEnableTwistCorrection");
static_assert(offsetof(UIKRig_LimbSolver, EndBoneForwardAxis) == 85, "Offset mismatch for UIKRig_LimbSolver::EndBoneForwardAxis");
static_assert(offsetof(UIKRig_LimbSolver, Effector) == 88, "Offset mismatch for UIKRig_LimbSolver::Effector");

// /Script/IKRig.IKRig_PoleSolver
// Kind: Class; super: IKRigSolver
class UIKRig_PoleSolver
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RootName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t EndName[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    void* Effector; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UIKRig_PoleSolver, RootName) == 48, "Offset mismatch for UIKRig_PoleSolver::RootName");
static_assert(offsetof(UIKRig_PoleSolver, EndName) == 52, "Offset mismatch for UIKRig_PoleSolver::EndName");
static_assert(offsetof(UIKRig_PoleSolver, Effector) == 56, "Offset mismatch for UIKRig_PoleSolver::Effector");

// /Script/IKRig.IKRig_PoleSolverEffector
// Kind: Class; super: Object
class UIKRig_PoleSolverEffector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GoalName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    float Alpha; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UIKRig_PoleSolverEffector, GoalName) == 40, "Offset mismatch for UIKRig_PoleSolverEffector::GoalName");
static_assert(offsetof(UIKRig_PoleSolverEffector, BoneName) == 44, "Offset mismatch for UIKRig_PoleSolverEffector::BoneName");
static_assert(offsetof(UIKRig_PoleSolverEffector, Alpha) == 48, "Offset mismatch for UIKRig_PoleSolverEffector::Alpha");

// /Script/IKRig.IKRig_SetTransform
// Kind: Class; super: IKRigSolver
class UIKRig_SetTransform
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Goal[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t RootBone[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    void* Effector; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UIKRig_SetTransform, Goal) == 48, "Offset mismatch for UIKRig_SetTransform::Goal");
static_assert(offsetof(UIKRig_SetTransform, RootBone) == 52, "Offset mismatch for UIKRig_SetTransform::RootBone");
static_assert(offsetof(UIKRig_SetTransform, Effector) == 56, "Offset mismatch for UIKRig_SetTransform::Effector");

// /Script/IKRig.IKRig_SetTransformEffector
// Kind: Class; super: Object
class UIKRig_SetTransformEffector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnablePosition; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableRotation; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    float Alpha; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UIKRig_SetTransformEffector, bEnablePosition) == 40, "Offset mismatch for UIKRig_SetTransformEffector::bEnablePosition");
static_assert(offsetof(UIKRig_SetTransformEffector, bEnableRotation) == 41, "Offset mismatch for UIKRig_SetTransformEffector::bEnableRotation");
static_assert(offsetof(UIKRig_SetTransformEffector, Alpha) == 44, "Offset mismatch for UIKRig_SetTransformEffector::Alpha");

// /Script/IKRig.PinBoneOp
// Kind: Class; super: RetargetOpBase
class UPinBoneOp
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> BonesToPin; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PinTo; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCopyTranslation; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyRotation; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyScale; // 0x0043 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TranslationMode; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationMode; // 0x0045 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xA]; // 0x0046
    std::uint8_t GlobalOffset[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalOffset[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bMaintainOffset; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PinType; // 0x0111 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPinBoneOp, BonesToPin) == 48, "Offset mismatch for UPinBoneOp::BonesToPin");
static_assert(offsetof(UPinBoneOp, PinTo) == 64, "Offset mismatch for UPinBoneOp::PinTo");
static_assert(offsetof(UPinBoneOp, bCopyTranslation) == 65, "Offset mismatch for UPinBoneOp::bCopyTranslation");
static_assert(offsetof(UPinBoneOp, bCopyRotation) == 66, "Offset mismatch for UPinBoneOp::bCopyRotation");
static_assert(offsetof(UPinBoneOp, bCopyScale) == 67, "Offset mismatch for UPinBoneOp::bCopyScale");
static_assert(offsetof(UPinBoneOp, TranslationMode) == 68, "Offset mismatch for UPinBoneOp::TranslationMode");
static_assert(offsetof(UPinBoneOp, RotationMode) == 69, "Offset mismatch for UPinBoneOp::RotationMode");
static_assert(offsetof(UPinBoneOp, GlobalOffset) == 80, "Offset mismatch for UPinBoneOp::GlobalOffset");
static_assert(offsetof(UPinBoneOp, LocalOffset) == 176, "Offset mismatch for UPinBoneOp::LocalOffset");
static_assert(offsetof(UPinBoneOp, bMaintainOffset) == 272, "Offset mismatch for UPinBoneOp::bMaintainOffset");
static_assert(offsetof(UPinBoneOp, PinType) == 273, "Offset mismatch for UPinBoneOp::PinType");

// /Script/IKRig.RetargetChainSettings
// Kind: Class; super: Object
class URetargetChainSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SourceChain[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetChain[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t Settings[0xB8]; // 0x0030 (Size: 0xB8, Type: StructProperty)
    std::uint8_t CopyPoseUsingFK; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RotationMode; // 0x00E9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00EA
    float RotationAlpha; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t TranslationMode; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00F1
    float TranslationAlpha; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriveIKGoal; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00F9
    float BlendToSource; // 0x00FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendToSourceWeights[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t StaticOffset[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t StaticLocalOffset[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t StaticRotationOffset[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    float Extension; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UseSpeedCurveToPlantIK; // 0x0164 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0165
    std::uint8_t SpeedCurveName[0x4]; // 0x0168 (Size: 0x4, Type: NameProperty)
    float VelocityThreshold; // 0x016C (Size: 0x4, Type: FloatProperty)
    float UnplantStiffness; // 0x0170 (Size: 0x4, Type: FloatProperty)
    float UnplantCriticalDamping; // 0x0174 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URetargetChainSettings, SourceChain) == 40, "Offset mismatch for URetargetChainSettings::SourceChain");
static_assert(offsetof(URetargetChainSettings, TargetChain) == 44, "Offset mismatch for URetargetChainSettings::TargetChain");
static_assert(offsetof(URetargetChainSettings, Settings) == 48, "Offset mismatch for URetargetChainSettings::Settings");
static_assert(offsetof(URetargetChainSettings, CopyPoseUsingFK) == 232, "Offset mismatch for URetargetChainSettings::CopyPoseUsingFK");
static_assert(offsetof(URetargetChainSettings, RotationMode) == 233, "Offset mismatch for URetargetChainSettings::RotationMode");
static_assert(offsetof(URetargetChainSettings, RotationAlpha) == 236, "Offset mismatch for URetargetChainSettings::RotationAlpha");
static_assert(offsetof(URetargetChainSettings, TranslationMode) == 240, "Offset mismatch for URetargetChainSettings::TranslationMode");
static_assert(offsetof(URetargetChainSettings, TranslationAlpha) == 244, "Offset mismatch for URetargetChainSettings::TranslationAlpha");
static_assert(offsetof(URetargetChainSettings, DriveIKGoal) == 248, "Offset mismatch for URetargetChainSettings::DriveIKGoal");
static_assert(offsetof(URetargetChainSettings, BlendToSource) == 252, "Offset mismatch for URetargetChainSettings::BlendToSource");
static_assert(offsetof(URetargetChainSettings, BlendToSourceWeights) == 256, "Offset mismatch for URetargetChainSettings::BlendToSourceWeights");
static_assert(offsetof(URetargetChainSettings, StaticOffset) == 280, "Offset mismatch for URetargetChainSettings::StaticOffset");
static_assert(offsetof(URetargetChainSettings, StaticLocalOffset) == 304, "Offset mismatch for URetargetChainSettings::StaticLocalOffset");
static_assert(offsetof(URetargetChainSettings, StaticRotationOffset) == 328, "Offset mismatch for URetargetChainSettings::StaticRotationOffset");
static_assert(offsetof(URetargetChainSettings, Extension) == 352, "Offset mismatch for URetargetChainSettings::Extension");
static_assert(offsetof(URetargetChainSettings, UseSpeedCurveToPlantIK) == 356, "Offset mismatch for URetargetChainSettings::UseSpeedCurveToPlantIK");
static_assert(offsetof(URetargetChainSettings, SpeedCurveName) == 360, "Offset mismatch for URetargetChainSettings::SpeedCurveName");
static_assert(offsetof(URetargetChainSettings, VelocityThreshold) == 364, "Offset mismatch for URetargetChainSettings::VelocityThreshold");
static_assert(offsetof(URetargetChainSettings, UnplantStiffness) == 368, "Offset mismatch for URetargetChainSettings::UnplantStiffness");
static_assert(offsetof(URetargetChainSettings, UnplantCriticalDamping) == 372, "Offset mismatch for URetargetChainSettings::UnplantCriticalDamping");

// /Script/IKRig.RetargetOpBase
// Kind: Class; super: Object
class URetargetOpBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URetargetOpBase, bIsEnabled) == 40, "Offset mismatch for URetargetOpBase::bIsEnabled");

// /Script/IKRig.RetargetOpStack
// Kind: Class; super: Object
class URetargetOpStack
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RetargetOps; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URetargetOpStack, RetargetOps) == 40, "Offset mismatch for URetargetOpStack::RetargetOps");

// /Script/IKRig.RetargetProfileLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class URetargetProfileLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRig.RetargetRootSettings
// Kind: Class; super: Object
class URetargetRootSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x68]; // 0x0028 (Size: 0x68, Type: StructProperty)
    std::uint8_t RetargetRootTranslation; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0091
    float GlobalScaleHorizontal; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float GlobalScaleVertical; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x009C
    std::uint8_t BlendToSource[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t StaticOffset[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t StaticRotationOffset[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URetargetRootSettings, Settings) == 40, "Offset mismatch for URetargetRootSettings::Settings");
static_assert(offsetof(URetargetRootSettings, RetargetRootTranslation) == 144, "Offset mismatch for URetargetRootSettings::RetargetRootTranslation");
static_assert(offsetof(URetargetRootSettings, GlobalScaleHorizontal) == 148, "Offset mismatch for URetargetRootSettings::GlobalScaleHorizontal");
static_assert(offsetof(URetargetRootSettings, GlobalScaleVertical) == 152, "Offset mismatch for URetargetRootSettings::GlobalScaleVertical");
static_assert(offsetof(URetargetRootSettings, BlendToSource) == 160, "Offset mismatch for URetargetRootSettings::BlendToSource");
static_assert(offsetof(URetargetRootSettings, StaticOffset) == 184, "Offset mismatch for URetargetRootSettings::StaticOffset");
static_assert(offsetof(URetargetRootSettings, StaticRotationOffset) == 208, "Offset mismatch for URetargetRootSettings::StaticRotationOffset");

// /Script/IKRig.RootMotionGeneratorOp
// Kind: Class; super: RetargetOpBase
class URootMotionGeneratorOp
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SourceRootBone[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetRootBone[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetPelvisBone[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t RootMotionSource; // 0x003C (Size: 0x1, Type: EnumProperty)
    std::uint8_t RootHeightSource; // 0x003D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPropagateToNonRetargetedChildren; // 0x003E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMaintainOffsetFromPelvis; // 0x003F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRotateWithPelvis; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0041
    std::uint8_t GlobalOffset[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URootMotionGeneratorOp, SourceRootBone) == 48, "Offset mismatch for URootMotionGeneratorOp::SourceRootBone");
static_assert(offsetof(URootMotionGeneratorOp, TargetRootBone) == 52, "Offset mismatch for URootMotionGeneratorOp::TargetRootBone");
static_assert(offsetof(URootMotionGeneratorOp, TargetPelvisBone) == 56, "Offset mismatch for URootMotionGeneratorOp::TargetPelvisBone");
static_assert(offsetof(URootMotionGeneratorOp, RootMotionSource) == 60, "Offset mismatch for URootMotionGeneratorOp::RootMotionSource");
static_assert(offsetof(URootMotionGeneratorOp, RootHeightSource) == 61, "Offset mismatch for URootMotionGeneratorOp::RootHeightSource");
static_assert(offsetof(URootMotionGeneratorOp, bPropagateToNonRetargetedChildren) == 62, "Offset mismatch for URootMotionGeneratorOp::bPropagateToNonRetargetedChildren");
static_assert(offsetof(URootMotionGeneratorOp, bMaintainOffsetFromPelvis) == 63, "Offset mismatch for URootMotionGeneratorOp::bMaintainOffsetFromPelvis");
static_assert(offsetof(URootMotionGeneratorOp, bRotateWithPelvis) == 64, "Offset mismatch for URootMotionGeneratorOp::bRotateWithPelvis");
static_assert(offsetof(URootMotionGeneratorOp, GlobalOffset) == 80, "Offset mismatch for URootMotionGeneratorOp::GlobalOffset");
