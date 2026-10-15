/**
 * decamp dumper generated SDK
 * Package: /Script/AnimGraphRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AnimGraphRuntime.AngularRangeLimit
// Kind: ScriptStruct; super: none
struct FAngularRangeLimit
{
public:
    std::uint8_t LimitMin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LimitMax[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t bone[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAngularRangeLimit, LimitMin) == 0, "Offset mismatch for FAngularRangeLimit::LimitMin");
static_assert(offsetof(FAngularRangeLimit, LimitMax) == 24, "Offset mismatch for FAngularRangeLimit::LimitMax");
static_assert(offsetof(FAngularRangeLimit, bone) == 48, "Offset mismatch for FAngularRangeLimit::bone");

// /Script/AnimGraphRuntime.AnimLegIKData
// Kind: ScriptStruct; super: none
struct FAnimLegIKData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.AnimLegIKDefinition
// Kind: ScriptStruct; super: none
struct FAnimLegIKDefinition
{
public:
    std::uint8_t IKFootBone[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t FKFootBone[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::int32_t NumBonesInLimb; // 0x0018 (Size: 0x4, Type: IntProperty)
    float MinRotationAngle; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FootBoneForwardAxis; // 0x0020 (Size: 0x1, Type: ByteProperty)
    std::uint8_t HingeRotationAxis; // 0x0021 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bEnableRotationLimit; // 0x0022 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableKneeTwistCorrection; // 0x0023 (Size: 0x1, Type: BoolProperty)
    FName TwistOffsetCurveName; // 0x0024 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAnimLegIKDefinition, IKFootBone) == 0, "Offset mismatch for FAnimLegIKDefinition::IKFootBone");
static_assert(offsetof(FAnimLegIKDefinition, FKFootBone) == 12, "Offset mismatch for FAnimLegIKDefinition::FKFootBone");
static_assert(offsetof(FAnimLegIKDefinition, NumBonesInLimb) == 24, "Offset mismatch for FAnimLegIKDefinition::NumBonesInLimb");
static_assert(offsetof(FAnimLegIKDefinition, MinRotationAngle) == 28, "Offset mismatch for FAnimLegIKDefinition::MinRotationAngle");
static_assert(offsetof(FAnimLegIKDefinition, FootBoneForwardAxis) == 32, "Offset mismatch for FAnimLegIKDefinition::FootBoneForwardAxis");
static_assert(offsetof(FAnimLegIKDefinition, HingeRotationAxis) == 33, "Offset mismatch for FAnimLegIKDefinition::HingeRotationAxis");
static_assert(offsetof(FAnimLegIKDefinition, bEnableRotationLimit) == 34, "Offset mismatch for FAnimLegIKDefinition::bEnableRotationLimit");
static_assert(offsetof(FAnimLegIKDefinition, bEnableKneeTwistCorrection) == 35, "Offset mismatch for FAnimLegIKDefinition::bEnableKneeTwistCorrection");
static_assert(offsetof(FAnimLegIKDefinition, TwistOffsetCurveName) == 36, "Offset mismatch for FAnimLegIKDefinition::TwistOffsetCurveName");

// /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Kind: ScriptStruct; super: AnimNode_BlendSpacePlayer
struct FAnimNode_AimOffsetLookAt
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t BasePose[0x10]; // 0x0140 (Size: 0x10, Type: StructProperty)
    std::int32_t LODThreshold; // 0x0150 (Size: 0x4, Type: IntProperty)
    std::uint8_t SourceSocketName[0x4]; // 0x0154 (Size: 0x4, Type: NameProperty)
    FName PivotSocketName; // 0x0158 (Size: 0x8, Type: NameProperty)
    std::uint8_t LookAtLocation[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t SocketAxis[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    float Alpha; // 0x0190 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_AimOffsetLookAt, BasePose) == 320, "Offset mismatch for FAnimNode_AimOffsetLookAt::BasePose");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, LODThreshold) == 336, "Offset mismatch for FAnimNode_AimOffsetLookAt::LODThreshold");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, SourceSocketName) == 340, "Offset mismatch for FAnimNode_AimOffsetLookAt::SourceSocketName");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, PivotSocketName) == 344, "Offset mismatch for FAnimNode_AimOffsetLookAt::PivotSocketName");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, LookAtLocation) == 352, "Offset mismatch for FAnimNode_AimOffsetLookAt::LookAtLocation");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, SocketAxis) == 376, "Offset mismatch for FAnimNode_AimOffsetLookAt::SocketAxis");
static_assert(offsetof(FAnimNode_AimOffsetLookAt, Alpha) == 400, "Offset mismatch for FAnimNode_AimOffsetLookAt::Alpha");

// /Script/AnimGraphRuntime.AnimNode_AnimDynamics
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_AnimDynamics
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float LinearDampingOverride; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float AngularDampingOverride; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x120]; // 0x00D0
    std::uint8_t RelativeSpaceBone[0xC]; // 0x01F0 (Size: 0xC, Type: StructProperty)
    std::uint8_t BoundBone[0xC]; // 0x01FC (Size: 0xC, Type: StructProperty)
    std::uint8_t ChainEnd[0x10]; // 0x0208 (Size: 0x10, Type: StructProperty)
    TArray<void*> PhysicsBodyDefinitions; // 0x0218 (Size: 0x10, Type: ArrayProperty)
    float GravityScale; // 0x0228 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x022C
    std::uint8_t GravityOverride[0x18]; // 0x0230 (Size: 0x18, Type: StructProperty)
    float LinearSpringConstant; // 0x0248 (Size: 0x4, Type: FloatProperty)
    float AngularSpringConstant; // 0x024C (Size: 0x4, Type: FloatProperty)
    float WorldSpaceMinimumScale; // 0x0250 (Size: 0x4, Type: FloatProperty)
    float WindScale; // 0x0254 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ComponentLinearAccScale[0x18]; // 0x0258 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentLinearVelScale[0x18]; // 0x0270 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentAppliedLinearAccClamp[0x18]; // 0x0288 (Size: 0x18, Type: StructProperty)
    std::uint8_t SimSpaceSettings[0x28]; // 0x02A0 (Size: 0x28, Type: StructProperty)
    float AngularBiasOverride; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSolverIterationsPreUpdate; // 0x02CC (Size: 0x4, Type: IntProperty)
    std::int32_t NumSolverIterationsPostUpdate; // 0x02D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x02D4
    TArray<void*> SphericalLimits; // 0x02D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExternalForce[0x18]; // 0x02E8 (Size: 0x18, Type: StructProperty)
    TArray<void*> PlanarLimits; // 0x0300 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SimulationSpace; // 0x0310 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0311
    std::uint8_t bDoEval; // 0x0313 (Size: 0x1, Type: BoolProperty)
    // 0x0313 BoolProperty bDoUpdate (shared storage)
    // 0x0313 BoolProperty bEnableWind (shared storage)
    // 0x0313 BoolProperty bOverrideAngularBias (shared storage)
    // 0x0313 BoolProperty bOverrideAngularDamping (shared storage)
    // 0x0313 BoolProperty bOverrideLinearDamping (shared storage)
    // 0x0313 BoolProperty bUsePlanarLimit (shared storage)
    // 0x0313 BoolProperty bUseSphericalLimits (shared storage)
    std::uint8_t bAngularSpring; // 0x0314 (Size: 0x1, Type: BoolProperty)
    // 0x0314 BoolProperty bChain (shared storage)
    // 0x0314 BoolProperty bGravityOverrideInSimSpace (shared storage)
    // 0x0314 BoolProperty bLinearSpring (shared storage)
    // 0x0314 BoolProperty bUseGravityOverride (shared storage)
    std::uint8_t Pad_0005[0xB]; // 0x0315
    std::uint8_t RetargetingSettings[0x1]; // 0x0320 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_AnimDynamics, LinearDampingOverride) == 200, "Offset mismatch for FAnimNode_AnimDynamics::LinearDampingOverride");
static_assert(offsetof(FAnimNode_AnimDynamics, AngularDampingOverride) == 204, "Offset mismatch for FAnimNode_AnimDynamics::AngularDampingOverride");
static_assert(offsetof(FAnimNode_AnimDynamics, RelativeSpaceBone) == 496, "Offset mismatch for FAnimNode_AnimDynamics::RelativeSpaceBone");
static_assert(offsetof(FAnimNode_AnimDynamics, BoundBone) == 508, "Offset mismatch for FAnimNode_AnimDynamics::BoundBone");
static_assert(offsetof(FAnimNode_AnimDynamics, ChainEnd) == 520, "Offset mismatch for FAnimNode_AnimDynamics::ChainEnd");
static_assert(offsetof(FAnimNode_AnimDynamics, PhysicsBodyDefinitions) == 536, "Offset mismatch for FAnimNode_AnimDynamics::PhysicsBodyDefinitions");
static_assert(offsetof(FAnimNode_AnimDynamics, GravityScale) == 552, "Offset mismatch for FAnimNode_AnimDynamics::GravityScale");
static_assert(offsetof(FAnimNode_AnimDynamics, GravityOverride) == 560, "Offset mismatch for FAnimNode_AnimDynamics::GravityOverride");
static_assert(offsetof(FAnimNode_AnimDynamics, LinearSpringConstant) == 584, "Offset mismatch for FAnimNode_AnimDynamics::LinearSpringConstant");
static_assert(offsetof(FAnimNode_AnimDynamics, AngularSpringConstant) == 588, "Offset mismatch for FAnimNode_AnimDynamics::AngularSpringConstant");
static_assert(offsetof(FAnimNode_AnimDynamics, WorldSpaceMinimumScale) == 592, "Offset mismatch for FAnimNode_AnimDynamics::WorldSpaceMinimumScale");
static_assert(offsetof(FAnimNode_AnimDynamics, WindScale) == 596, "Offset mismatch for FAnimNode_AnimDynamics::WindScale");
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentLinearAccScale) == 600, "Offset mismatch for FAnimNode_AnimDynamics::ComponentLinearAccScale");
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentLinearVelScale) == 624, "Offset mismatch for FAnimNode_AnimDynamics::ComponentLinearVelScale");
static_assert(offsetof(FAnimNode_AnimDynamics, ComponentAppliedLinearAccClamp) == 648, "Offset mismatch for FAnimNode_AnimDynamics::ComponentAppliedLinearAccClamp");
static_assert(offsetof(FAnimNode_AnimDynamics, SimSpaceSettings) == 672, "Offset mismatch for FAnimNode_AnimDynamics::SimSpaceSettings");
static_assert(offsetof(FAnimNode_AnimDynamics, AngularBiasOverride) == 712, "Offset mismatch for FAnimNode_AnimDynamics::AngularBiasOverride");
static_assert(offsetof(FAnimNode_AnimDynamics, NumSolverIterationsPreUpdate) == 716, "Offset mismatch for FAnimNode_AnimDynamics::NumSolverIterationsPreUpdate");
static_assert(offsetof(FAnimNode_AnimDynamics, NumSolverIterationsPostUpdate) == 720, "Offset mismatch for FAnimNode_AnimDynamics::NumSolverIterationsPostUpdate");
static_assert(offsetof(FAnimNode_AnimDynamics, SphericalLimits) == 728, "Offset mismatch for FAnimNode_AnimDynamics::SphericalLimits");
static_assert(offsetof(FAnimNode_AnimDynamics, ExternalForce) == 744, "Offset mismatch for FAnimNode_AnimDynamics::ExternalForce");
static_assert(offsetof(FAnimNode_AnimDynamics, PlanarLimits) == 768, "Offset mismatch for FAnimNode_AnimDynamics::PlanarLimits");
static_assert(offsetof(FAnimNode_AnimDynamics, SimulationSpace) == 784, "Offset mismatch for FAnimNode_AnimDynamics::SimulationSpace");
static_assert(offsetof(FAnimNode_AnimDynamics, bDoEval) == 787, "Offset mismatch for FAnimNode_AnimDynamics::bDoEval");
static_assert(offsetof(FAnimNode_AnimDynamics, bAngularSpring) == 788, "Offset mismatch for FAnimNode_AnimDynamics::bAngularSpring");
static_assert(offsetof(FAnimNode_AnimDynamics, RetargetingSettings) == 800, "Offset mismatch for FAnimNode_AnimDynamics::RetargetingSettings");

// /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_ApplyAdditive
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t base[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Additive[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    float Alpha; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0x8]; // 0x0034 (Size: 0x8, Type: StructProperty)
    std::int32_t LODThreshold; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t AlphaBoolBlend[0x48]; // 0x0040 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaScaleBiasClamp[0x34]; // 0x008C (Size: 0x34, Type: StructProperty)
    std::uint8_t AlphaInputType; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x00C1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_ApplyAdditive, base) == 16, "Offset mismatch for FAnimNode_ApplyAdditive::base");
static_assert(offsetof(FAnimNode_ApplyAdditive, Additive) == 32, "Offset mismatch for FAnimNode_ApplyAdditive::Additive");
static_assert(offsetof(FAnimNode_ApplyAdditive, Alpha) == 48, "Offset mismatch for FAnimNode_ApplyAdditive::Alpha");
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaScaleBias) == 52, "Offset mismatch for FAnimNode_ApplyAdditive::AlphaScaleBias");
static_assert(offsetof(FAnimNode_ApplyAdditive, LODThreshold) == 60, "Offset mismatch for FAnimNode_ApplyAdditive::LODThreshold");
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaBoolBlend) == 64, "Offset mismatch for FAnimNode_ApplyAdditive::AlphaBoolBlend");
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaCurveName) == 136, "Offset mismatch for FAnimNode_ApplyAdditive::AlphaCurveName");
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaScaleBiasClamp) == 140, "Offset mismatch for FAnimNode_ApplyAdditive::AlphaScaleBiasClamp");
static_assert(offsetof(FAnimNode_ApplyAdditive, AlphaInputType) == 192, "Offset mismatch for FAnimNode_ApplyAdditive::AlphaInputType");
static_assert(offsetof(FAnimNode_ApplyAdditive, bAlphaBoolEnabled) == 193, "Offset mismatch for FAnimNode_ApplyAdditive::bAlphaBoolEnabled");

// /Script/AnimGraphRuntime.AnimNode_ApplyLimits
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_ApplyLimits
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> AngularRangeLimits; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AngularOffsets; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_ApplyLimits, AngularRangeLimits) == 200, "Offset mismatch for FAnimNode_ApplyLimits::AngularRangeLimits");
static_assert(offsetof(FAnimNode_ApplyLimits, AngularOffsets) == 216, "Offset mismatch for FAnimNode_ApplyLimits::AngularOffsets");

// /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_BlendBoneByChannel
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t A[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    TArray<void*> BoneDefinitions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0040
    float Alpha; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0054
    std::uint8_t AlphaScaleBias[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t TransformsSpace; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0061
    std::int32_t LODThreshold; // 0x0064 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNode_BlendBoneByChannel, A) == 16, "Offset mismatch for FAnimNode_BlendBoneByChannel::A");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, B) == 32, "Offset mismatch for FAnimNode_BlendBoneByChannel::B");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, BoneDefinitions) == 48, "Offset mismatch for FAnimNode_BlendBoneByChannel::BoneDefinitions");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, Alpha) == 80, "Offset mismatch for FAnimNode_BlendBoneByChannel::Alpha");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, AlphaScaleBias) == 88, "Offset mismatch for FAnimNode_BlendBoneByChannel::AlphaScaleBias");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, TransformsSpace) == 96, "Offset mismatch for FAnimNode_BlendBoneByChannel::TransformsSpace");
static_assert(offsetof(FAnimNode_BlendBoneByChannel, LODThreshold) == 100, "Offset mismatch for FAnimNode_BlendBoneByChannel::LODThreshold");

// /Script/AnimGraphRuntime.AnimNode_BlendListBase
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_BlendListBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> BlendPose; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0020
    std::int32_t LODThreshold; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNode_BlendListBase, BlendPose) == 16, "Offset mismatch for FAnimNode_BlendListBase::BlendPose");
static_assert(offsetof(FAnimNode_BlendListBase, LODThreshold) == 80, "Offset mismatch for FAnimNode_BlendListBase::LODThreshold");

// /Script/AnimGraphRuntime.AnimNode_BlendListByBool
// Kind: ScriptStruct; super: AnimNode_BlendListBase
struct FAnimNode_BlendListByBool
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> BlendPose; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0020
    std::int32_t LODThreshold; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNode_BlendListByBool, BlendPose) == 16, "Offset mismatch for FAnimNode_BlendListByBool::BlendPose");
static_assert(offsetof(FAnimNode_BlendListByBool, LODThreshold) == 80, "Offset mismatch for FAnimNode_BlendListByBool::LODThreshold");

// /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
// Kind: ScriptStruct; super: AnimNode_BlendListBase
struct FAnimNode_BlendListByEnum
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> BlendPose; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0020
    std::int32_t LODThreshold; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNode_BlendListByEnum, BlendPose) == 16, "Offset mismatch for FAnimNode_BlendListByEnum::BlendPose");
static_assert(offsetof(FAnimNode_BlendListByEnum, LODThreshold) == 80, "Offset mismatch for FAnimNode_BlendListByEnum::LODThreshold");

// /Script/AnimGraphRuntime.AnimNode_BlendListByInt
// Kind: ScriptStruct; super: AnimNode_BlendListBase
struct FAnimNode_BlendListByInt
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> BlendPose; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0020
    std::int32_t LODThreshold; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNode_BlendListByInt, BlendPose) == 16, "Offset mismatch for FAnimNode_BlendListByInt::BlendPose");
static_assert(offsetof(FAnimNode_BlendListByInt, LODThreshold) == 80, "Offset mismatch for FAnimNode_BlendListByInt::LODThreshold");

// /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Kind: ScriptStruct; super: AnimNode_BlendSpacePlayer
struct FAnimNode_BlendSpaceEvaluator
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float NormalizedTime; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTeleportToNormalizedTime; // 0x007C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_BlendSpaceEvaluator, NormalizedTime) == 120, "Offset mismatch for FAnimNode_BlendSpaceEvaluator::NormalizedTime");
static_assert(offsetof(FAnimNode_BlendSpaceEvaluator, bTeleportToNormalizedTime) == 124, "Offset mismatch for FAnimNode_BlendSpaceEvaluator::bTeleportToNormalizedTime");

// /Script/AnimGraphRuntime.AnimNode_BlendSpaceGraph
// Kind: ScriptStruct; super: AnimNode_BlendSpaceGraphBase
struct FAnimNode_BlendSpaceGraph
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float X; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GroupName[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupRole; // 0x001C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    void* BlendSpace; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SamplePoseLinks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_BlendSpaceGraph, X) == 16, "Offset mismatch for FAnimNode_BlendSpaceGraph::X");
static_assert(offsetof(FAnimNode_BlendSpaceGraph, Y) == 20, "Offset mismatch for FAnimNode_BlendSpaceGraph::Y");
static_assert(offsetof(FAnimNode_BlendSpaceGraph, GroupName) == 24, "Offset mismatch for FAnimNode_BlendSpaceGraph::GroupName");
static_assert(offsetof(FAnimNode_BlendSpaceGraph, GroupRole) == 28, "Offset mismatch for FAnimNode_BlendSpaceGraph::GroupRole");
static_assert(offsetof(FAnimNode_BlendSpaceGraph, BlendSpace) == 32, "Offset mismatch for FAnimNode_BlendSpaceGraph::BlendSpace");
static_assert(offsetof(FAnimNode_BlendSpaceGraph, SamplePoseLinks) == 40, "Offset mismatch for FAnimNode_BlendSpaceGraph::SamplePoseLinks");

// /Script/AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_BlendSpaceGraphBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float X; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GroupName[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupRole; // 0x001C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    void* BlendSpace; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SamplePoseLinks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, X) == 16, "Offset mismatch for FAnimNode_BlendSpaceGraphBase::X");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, Y) == 20, "Offset mismatch for FAnimNode_BlendSpaceGraphBase::Y");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, GroupName) == 24, "Offset mismatch for FAnimNode_BlendSpaceGraphBase::GroupName");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, GroupRole) == 28, "Offset mismatch for FAnimNode_BlendSpaceGraphBase::GroupRole");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, BlendSpace) == 32, "Offset mismatch for FAnimNode_BlendSpaceGraphBase::BlendSpace");
static_assert(offsetof(FAnimNode_BlendSpaceGraphBase, SamplePoseLinks) == 40, "Offset mismatch for FAnimNode_BlendSpaceGraphBase::SamplePoseLinks");

// /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Kind: ScriptStruct; super: AnimNode_BlendSpacePlayerBase
struct FAnimNode_BlendSpacePlayer
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* BlendSpace; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNode_BlendSpacePlayer, BlendSpace) == 112, "Offset mismatch for FAnimNode_BlendSpacePlayer::BlendSpace");

// /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
// Kind: ScriptStruct; super: AnimNode_AssetPlayerBase
struct FAnimNode_BlendSpacePlayerBase
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* PreviousBlendSpace; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNode_BlendSpacePlayerBase, PreviousBlendSpace) == 104, "Offset mismatch for FAnimNode_BlendSpacePlayerBase::PreviousBlendSpace");

// /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
// Kind: ScriptStruct; super: AnimNode_BlendSpacePlayerBase
struct FAnimNode_BlendSpacePlayer_Standalone
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t GroupName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupRole; // 0x0074 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bOverridePositionWhenJoiningSyncGroupAsLeader; // 0x0075 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Method; // 0x0076 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnoreForRelevancyTest; // 0x0077 (Size: 0x1, Type: BoolProperty)
    float X; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x007C (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLoop; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetPlayTimeWhenBlendSpaceChanges; // 0x0085 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0086
    float StartPosition; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x008C
    void* BlendSpace; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, GroupName) == 112, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::GroupName");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, GroupRole) == 116, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::GroupRole");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, bOverridePositionWhenJoiningSyncGroupAsLeader) == 117, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::bOverridePositionWhenJoiningSyncGroupAsLeader");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, Method) == 118, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::Method");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, bIgnoreForRelevancyTest) == 119, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::bIgnoreForRelevancyTest");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, X) == 120, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::X");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, Y) == 124, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::Y");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, PlayRate) == 128, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::PlayRate");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, bLoop) == 132, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::bLoop");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, bResetPlayTimeWhenBlendSpaceChanges) == 133, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::bResetPlayTimeWhenBlendSpaceChanges");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, StartPosition) == 136, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::StartPosition");
static_assert(offsetof(FAnimNode_BlendSpacePlayer_Standalone, BlendSpace) == 144, "Offset mismatch for FAnimNode_BlendSpacePlayer_Standalone::BlendSpace");

// /Script/AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
// Kind: ScriptStruct; super: AnimNode_Root
struct FAnimNode_BlendSpaceSampleResult
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Result[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_BlendSpaceSampleResult, Result) == 16, "Offset mismatch for FAnimNode_BlendSpaceSampleResult::Result");

// /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_BoneDrivenController
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t SourceBone[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    void* DrivingCurve; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    float Multiplier; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    double RangeMin; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    double RangeMax; // 0x00F0 (Size: 0x8, Type: DoubleProperty)
    double RemappedMin; // 0x00F8 (Size: 0x8, Type: DoubleProperty)
    double RemappedMax; // 0x0100 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ParameterName[0x4]; // 0x0108 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetBone[0xC]; // 0x010C (Size: 0xC, Type: StructProperty)
    std::uint8_t DestinationMode; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ModificationMode; // 0x0119 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SourceComponent; // 0x011A (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAffectTargetRotationX; // 0x011B (Size: 0x1, Type: BoolProperty)
    // 0x011B BoolProperty bAffectTargetRotationY (shared storage)
    // 0x011B BoolProperty bAffectTargetRotationZ (shared storage)
    // 0x011B BoolProperty bAffectTargetScaleX (shared storage)
    // 0x011B BoolProperty bAffectTargetTranslationX (shared storage)
    // 0x011B BoolProperty bAffectTargetTranslationY (shared storage)
    // 0x011B BoolProperty bAffectTargetTranslationZ (shared storage)
    // 0x011B BoolProperty bUseRange (shared storage)
    std::uint8_t bAffectTargetScaleY; // 0x011C (Size: 0x1, Type: BoolProperty)
    // 0x011C BoolProperty bAffectTargetScaleZ (shared storage)
};

static_assert(offsetof(FAnimNode_BoneDrivenController, SourceBone) == 200, "Offset mismatch for FAnimNode_BoneDrivenController::SourceBone");
static_assert(offsetof(FAnimNode_BoneDrivenController, DrivingCurve) == 216, "Offset mismatch for FAnimNode_BoneDrivenController::DrivingCurve");
static_assert(offsetof(FAnimNode_BoneDrivenController, Multiplier) == 224, "Offset mismatch for FAnimNode_BoneDrivenController::Multiplier");
static_assert(offsetof(FAnimNode_BoneDrivenController, RangeMin) == 232, "Offset mismatch for FAnimNode_BoneDrivenController::RangeMin");
static_assert(offsetof(FAnimNode_BoneDrivenController, RangeMax) == 240, "Offset mismatch for FAnimNode_BoneDrivenController::RangeMax");
static_assert(offsetof(FAnimNode_BoneDrivenController, RemappedMin) == 248, "Offset mismatch for FAnimNode_BoneDrivenController::RemappedMin");
static_assert(offsetof(FAnimNode_BoneDrivenController, RemappedMax) == 256, "Offset mismatch for FAnimNode_BoneDrivenController::RemappedMax");
static_assert(offsetof(FAnimNode_BoneDrivenController, ParameterName) == 264, "Offset mismatch for FAnimNode_BoneDrivenController::ParameterName");
static_assert(offsetof(FAnimNode_BoneDrivenController, TargetBone) == 268, "Offset mismatch for FAnimNode_BoneDrivenController::TargetBone");
static_assert(offsetof(FAnimNode_BoneDrivenController, DestinationMode) == 280, "Offset mismatch for FAnimNode_BoneDrivenController::DestinationMode");
static_assert(offsetof(FAnimNode_BoneDrivenController, ModificationMode) == 281, "Offset mismatch for FAnimNode_BoneDrivenController::ModificationMode");
static_assert(offsetof(FAnimNode_BoneDrivenController, SourceComponent) == 282, "Offset mismatch for FAnimNode_BoneDrivenController::SourceComponent");
static_assert(offsetof(FAnimNode_BoneDrivenController, bAffectTargetRotationX) == 283, "Offset mismatch for FAnimNode_BoneDrivenController::bAffectTargetRotationX");
static_assert(offsetof(FAnimNode_BoneDrivenController, bAffectTargetScaleY) == 284, "Offset mismatch for FAnimNode_BoneDrivenController::bAffectTargetScaleY");

// /Script/AnimGraphRuntime.AnimNode_CCDIK
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_CCDIK
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t EffectorLocation[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t EffectorLocationSpace; // 0x00E0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0xF]; // 0x00E1
    std::uint8_t EffectorTarget[0x80]; // 0x00F0 (Size: 0x80, Type: StructProperty)
    std::uint8_t TipBone[0xC]; // 0x0170 (Size: 0xC, Type: StructProperty)
    std::uint8_t RootBone[0xC]; // 0x017C (Size: 0xC, Type: StructProperty)
    float Precision; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxIterations; // 0x018C (Size: 0x4, Type: IntProperty)
    std::uint8_t bStartFromTail; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableRotationLimit; // 0x0191 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0192
    TArray<void*> RotationLimitPerJoints; // 0x0198 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_CCDIK, EffectorLocation) == 200, "Offset mismatch for FAnimNode_CCDIK::EffectorLocation");
static_assert(offsetof(FAnimNode_CCDIK, EffectorLocationSpace) == 224, "Offset mismatch for FAnimNode_CCDIK::EffectorLocationSpace");
static_assert(offsetof(FAnimNode_CCDIK, EffectorTarget) == 240, "Offset mismatch for FAnimNode_CCDIK::EffectorTarget");
static_assert(offsetof(FAnimNode_CCDIK, TipBone) == 368, "Offset mismatch for FAnimNode_CCDIK::TipBone");
static_assert(offsetof(FAnimNode_CCDIK, RootBone) == 380, "Offset mismatch for FAnimNode_CCDIK::RootBone");
static_assert(offsetof(FAnimNode_CCDIK, Precision) == 392, "Offset mismatch for FAnimNode_CCDIK::Precision");
static_assert(offsetof(FAnimNode_CCDIK, MaxIterations) == 396, "Offset mismatch for FAnimNode_CCDIK::MaxIterations");
static_assert(offsetof(FAnimNode_CCDIK, bStartFromTail) == 400, "Offset mismatch for FAnimNode_CCDIK::bStartFromTail");
static_assert(offsetof(FAnimNode_CCDIK, bEnableRotationLimit) == 401, "Offset mismatch for FAnimNode_CCDIK::bEnableRotationLimit");
static_assert(offsetof(FAnimNode_CCDIK, RotationLimitPerJoints) == 408, "Offset mismatch for FAnimNode_CCDIK::RotationLimitPerJoints");

// /Script/AnimGraphRuntime.AnimNode_CallFunction
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_CallFunction
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Source[0x24]; // 0x0010 (Size: 0x24, Type: StructProperty)
    std::uint8_t CallSite; // 0x0034 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNode_CallFunction, Source) == 16, "Offset mismatch for FAnimNode_CallFunction::Source");
static_assert(offsetof(FAnimNode_CallFunction, CallSite) == 52, "Offset mismatch for FAnimNode_CallFunction::CallSite");

// /Script/AnimGraphRuntime.AnimNode_Constraint
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_Constraint
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t BoneToModify[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    TArray<void*> ConstraintSetup; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConstraintWeights; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_Constraint, BoneToModify) == 200, "Offset mismatch for FAnimNode_Constraint::BoneToModify");
static_assert(offsetof(FAnimNode_Constraint, ConstraintSetup) == 216, "Offset mismatch for FAnimNode_Constraint::ConstraintSetup");
static_assert(offsetof(FAnimNode_Constraint, ConstraintWeights) == 232, "Offset mismatch for FAnimNode_Constraint::ConstraintWeights");

// /Script/AnimGraphRuntime.AnimNode_CopyBone
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_CopyBone
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t SourceBone[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetBone[0xC]; // 0x00D4 (Size: 0xC, Type: StructProperty)
    std::uint8_t bCopyTranslation; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyRotation; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyScale; // 0x00E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ControlSpace; // 0x00E3 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FAnimNode_CopyBone, SourceBone) == 200, "Offset mismatch for FAnimNode_CopyBone::SourceBone");
static_assert(offsetof(FAnimNode_CopyBone, TargetBone) == 212, "Offset mismatch for FAnimNode_CopyBone::TargetBone");
static_assert(offsetof(FAnimNode_CopyBone, bCopyTranslation) == 224, "Offset mismatch for FAnimNode_CopyBone::bCopyTranslation");
static_assert(offsetof(FAnimNode_CopyBone, bCopyRotation) == 225, "Offset mismatch for FAnimNode_CopyBone::bCopyRotation");
static_assert(offsetof(FAnimNode_CopyBone, bCopyScale) == 226, "Offset mismatch for FAnimNode_CopyBone::bCopyScale");
static_assert(offsetof(FAnimNode_CopyBone, ControlSpace) == 227, "Offset mismatch for FAnimNode_CopyBone::ControlSpace");

// /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_CopyBoneDelta
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t SourceBone[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetBone[0xC]; // 0x00D4 (Size: 0xC, Type: StructProperty)
    std::uint8_t bCopyTranslation; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyRotation; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyScale; // 0x00E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CopyMode; // 0x00E3 (Size: 0x1, Type: EnumProperty)
    float TranslationMultiplier; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float RotationMultiplier; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float ScaleMultiplier; // 0x00EC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_CopyBoneDelta, SourceBone) == 200, "Offset mismatch for FAnimNode_CopyBoneDelta::SourceBone");
static_assert(offsetof(FAnimNode_CopyBoneDelta, TargetBone) == 212, "Offset mismatch for FAnimNode_CopyBoneDelta::TargetBone");
static_assert(offsetof(FAnimNode_CopyBoneDelta, bCopyTranslation) == 224, "Offset mismatch for FAnimNode_CopyBoneDelta::bCopyTranslation");
static_assert(offsetof(FAnimNode_CopyBoneDelta, bCopyRotation) == 225, "Offset mismatch for FAnimNode_CopyBoneDelta::bCopyRotation");
static_assert(offsetof(FAnimNode_CopyBoneDelta, bCopyScale) == 226, "Offset mismatch for FAnimNode_CopyBoneDelta::bCopyScale");
static_assert(offsetof(FAnimNode_CopyBoneDelta, CopyMode) == 227, "Offset mismatch for FAnimNode_CopyBoneDelta::CopyMode");
static_assert(offsetof(FAnimNode_CopyBoneDelta, TranslationMultiplier) == 228, "Offset mismatch for FAnimNode_CopyBoneDelta::TranslationMultiplier");
static_assert(offsetof(FAnimNode_CopyBoneDelta, RotationMultiplier) == 232, "Offset mismatch for FAnimNode_CopyBoneDelta::RotationMultiplier");
static_assert(offsetof(FAnimNode_CopyBoneDelta, ScaleMultiplier) == 236, "Offset mismatch for FAnimNode_CopyBoneDelta::ScaleMultiplier");

// /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_CopyPoseFromMesh
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TWeakObjectPtr<void> SourceMeshComponent; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bCopyCurves; // 0x0018 (Size: 0x1, Type: BoolProperty)
    // 0x0018 BoolProperty bUseAttachedParent (shared storage)
    std::uint8_t bCopyCustomAttributes; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseMeshPose; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x001B
    FName RootBoneToCopy; // 0x001C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAnimNode_CopyPoseFromMesh, SourceMeshComponent) == 16, "Offset mismatch for FAnimNode_CopyPoseFromMesh::SourceMeshComponent");
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, bCopyCurves) == 24, "Offset mismatch for FAnimNode_CopyPoseFromMesh::bCopyCurves");
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, bCopyCustomAttributes) == 25, "Offset mismatch for FAnimNode_CopyPoseFromMesh::bCopyCustomAttributes");
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, bUseMeshPose) == 26, "Offset mismatch for FAnimNode_CopyPoseFromMesh::bUseMeshPose");
static_assert(offsetof(FAnimNode_CopyPoseFromMesh, RootBoneToCopy) == 28, "Offset mismatch for FAnimNode_CopyPoseFromMesh::RootBoneToCopy");

// /Script/AnimGraphRuntime.AnimNode_CurveSource
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_CurveSource
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SourcePose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t SourceBinding[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    float Alpha; // 0x0024 (Size: 0x4, Type: FloatProperty)
    TScriptInterface<void> CurveSource; // 0x0028 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FAnimNode_CurveSource, SourcePose) == 16, "Offset mismatch for FAnimNode_CurveSource::SourcePose");
static_assert(offsetof(FAnimNode_CurveSource, SourceBinding) == 32, "Offset mismatch for FAnimNode_CurveSource::SourceBinding");
static_assert(offsetof(FAnimNode_CurveSource, Alpha) == 36, "Offset mismatch for FAnimNode_CurveSource::Alpha");
static_assert(offsetof(FAnimNode_CurveSource, CurveSource) == 40, "Offset mismatch for FAnimNode_CurveSource::CurveSource");

// /Script/AnimGraphRuntime.AnimNode_Fabrik
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_Fabrik
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t EffectorTransform[0x60]; // 0x00D0 (Size: 0x60, Type: StructProperty)
    std::uint8_t EffectorTarget[0x80]; // 0x0130 (Size: 0x80, Type: StructProperty)
    std::uint8_t TipBone[0xC]; // 0x01B0 (Size: 0xC, Type: StructProperty)
    std::uint8_t RootBone[0xC]; // 0x01BC (Size: 0xC, Type: StructProperty)
    float Precision; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxIterations; // 0x01CC (Size: 0x4, Type: IntProperty)
    std::uint8_t EffectorTransformSpace; // 0x01D0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EffectorRotationSource; // 0x01D1 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FAnimNode_Fabrik, EffectorTransform) == 208, "Offset mismatch for FAnimNode_Fabrik::EffectorTransform");
static_assert(offsetof(FAnimNode_Fabrik, EffectorTarget) == 304, "Offset mismatch for FAnimNode_Fabrik::EffectorTarget");
static_assert(offsetof(FAnimNode_Fabrik, TipBone) == 432, "Offset mismatch for FAnimNode_Fabrik::TipBone");
static_assert(offsetof(FAnimNode_Fabrik, RootBone) == 444, "Offset mismatch for FAnimNode_Fabrik::RootBone");
static_assert(offsetof(FAnimNode_Fabrik, Precision) == 456, "Offset mismatch for FAnimNode_Fabrik::Precision");
static_assert(offsetof(FAnimNode_Fabrik, MaxIterations) == 460, "Offset mismatch for FAnimNode_Fabrik::MaxIterations");
static_assert(offsetof(FAnimNode_Fabrik, EffectorTransformSpace) == 464, "Offset mismatch for FAnimNode_Fabrik::EffectorTransformSpace");
static_assert(offsetof(FAnimNode_Fabrik, EffectorRotationSource) == 465, "Offset mismatch for FAnimNode_Fabrik::EffectorRotationSource");

// /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_HandIKRetargeting
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t RightHandFK[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t LeftHandFK[0xC]; // 0x00D4 (Size: 0xC, Type: StructProperty)
    std::uint8_t RightHandIK[0xC]; // 0x00E0 (Size: 0xC, Type: StructProperty)
    std::uint8_t LeftHandIK[0xC]; // 0x00EC (Size: 0xC, Type: StructProperty)
    TArray<void*> IKBonesToMove; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PerAxisAlpha[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    float HandFKWeight; // 0x0120 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_HandIKRetargeting, RightHandFK) == 200, "Offset mismatch for FAnimNode_HandIKRetargeting::RightHandFK");
static_assert(offsetof(FAnimNode_HandIKRetargeting, LeftHandFK) == 212, "Offset mismatch for FAnimNode_HandIKRetargeting::LeftHandFK");
static_assert(offsetof(FAnimNode_HandIKRetargeting, RightHandIK) == 224, "Offset mismatch for FAnimNode_HandIKRetargeting::RightHandIK");
static_assert(offsetof(FAnimNode_HandIKRetargeting, LeftHandIK) == 236, "Offset mismatch for FAnimNode_HandIKRetargeting::LeftHandIK");
static_assert(offsetof(FAnimNode_HandIKRetargeting, IKBonesToMove) == 248, "Offset mismatch for FAnimNode_HandIKRetargeting::IKBonesToMove");
static_assert(offsetof(FAnimNode_HandIKRetargeting, PerAxisAlpha) == 264, "Offset mismatch for FAnimNode_HandIKRetargeting::PerAxisAlpha");
static_assert(offsetof(FAnimNode_HandIKRetargeting, HandFKWeight) == 288, "Offset mismatch for FAnimNode_HandIKRetargeting::HandFKWeight");

// /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_LayeredBoneBlend
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BasePose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> BlendPoses; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BlendMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    TArray<void*> BlendMasks; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LayerSetup; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlendWeights; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0068
    TArray<void*> PerBoneBlendWeights; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x20]; // 0x0098
    std::uint8_t SkeletonGuid[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t VirtualBoneGuid[0x14]; // 0x00C8 (Size: 0x14, Type: StructProperty)
    std::int32_t LODThreshold; // 0x00DC (Size: 0x4, Type: IntProperty)
    std::uint8_t bMeshSpaceRotationBlend; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRootSpaceRotationBlend; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMeshSpaceScaleBlend; // 0x00E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurveBlendOption; // 0x00E3 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bBlendRootMotionBasedOnRootBone; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateBasePoseFirst; // 0x00E5 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_LayeredBoneBlend, BasePose) == 16, "Offset mismatch for FAnimNode_LayeredBoneBlend::BasePose");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendPoses) == 32, "Offset mismatch for FAnimNode_LayeredBoneBlend::BlendPoses");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendMode) == 48, "Offset mismatch for FAnimNode_LayeredBoneBlend::BlendMode");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendMasks) == 56, "Offset mismatch for FAnimNode_LayeredBoneBlend::BlendMasks");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, LayerSetup) == 72, "Offset mismatch for FAnimNode_LayeredBoneBlend::LayerSetup");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, BlendWeights) == 88, "Offset mismatch for FAnimNode_LayeredBoneBlend::BlendWeights");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, PerBoneBlendWeights) == 136, "Offset mismatch for FAnimNode_LayeredBoneBlend::PerBoneBlendWeights");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, SkeletonGuid) == 184, "Offset mismatch for FAnimNode_LayeredBoneBlend::SkeletonGuid");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, VirtualBoneGuid) == 200, "Offset mismatch for FAnimNode_LayeredBoneBlend::VirtualBoneGuid");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, LODThreshold) == 220, "Offset mismatch for FAnimNode_LayeredBoneBlend::LODThreshold");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, bMeshSpaceRotationBlend) == 224, "Offset mismatch for FAnimNode_LayeredBoneBlend::bMeshSpaceRotationBlend");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, bRootSpaceRotationBlend) == 225, "Offset mismatch for FAnimNode_LayeredBoneBlend::bRootSpaceRotationBlend");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, bMeshSpaceScaleBlend) == 226, "Offset mismatch for FAnimNode_LayeredBoneBlend::bMeshSpaceScaleBlend");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, CurveBlendOption) == 227, "Offset mismatch for FAnimNode_LayeredBoneBlend::CurveBlendOption");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, bBlendRootMotionBasedOnRootBone) == 228, "Offset mismatch for FAnimNode_LayeredBoneBlend::bBlendRootMotionBasedOnRootBone");
static_assert(offsetof(FAnimNode_LayeredBoneBlend, bUpdateBasePoseFirst) == 229, "Offset mismatch for FAnimNode_LayeredBoneBlend::bUpdateBasePoseFirst");

// /Script/AnimGraphRuntime.AnimNode_LegIK
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_LegIK
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float ReachPrecision; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxIterations; // 0x00CC (Size: 0x4, Type: IntProperty)
    float SoftPercentLength; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float SoftAlpha; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    TArray<void*> LegsDefinition; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_LegIK, ReachPrecision) == 200, "Offset mismatch for FAnimNode_LegIK::ReachPrecision");
static_assert(offsetof(FAnimNode_LegIK, MaxIterations) == 204, "Offset mismatch for FAnimNode_LegIK::MaxIterations");
static_assert(offsetof(FAnimNode_LegIK, SoftPercentLength) == 208, "Offset mismatch for FAnimNode_LegIK::SoftPercentLength");
static_assert(offsetof(FAnimNode_LegIK, SoftAlpha) == 212, "Offset mismatch for FAnimNode_LegIK::SoftAlpha");
static_assert(offsetof(FAnimNode_LegIK, LegsDefinition) == 216, "Offset mismatch for FAnimNode_LegIK::LegsDefinition");

// /Script/AnimGraphRuntime.AnimNode_LookAt
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_LookAt
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t BoneToModify[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LookAtTarget[0x80]; // 0x00E0 (Size: 0x80, Type: StructProperty)
    std::uint8_t LookAtLocation[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t LookAt_Axis[0x20]; // 0x0178 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUseLookUpAxis; // 0x0198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InterpolationType; // 0x0199 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x019A
    std::uint8_t LookUp_Axis[0x20]; // 0x01A0 (Size: 0x20, Type: StructProperty)
    float LookAtClamp; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    float InterpolationTime; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    float InterpolationTriggerThreashold; // 0x01C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_LookAt, BoneToModify) == 200, "Offset mismatch for FAnimNode_LookAt::BoneToModify");
static_assert(offsetof(FAnimNode_LookAt, LookAtTarget) == 224, "Offset mismatch for FAnimNode_LookAt::LookAtTarget");
static_assert(offsetof(FAnimNode_LookAt, LookAtLocation) == 352, "Offset mismatch for FAnimNode_LookAt::LookAtLocation");
static_assert(offsetof(FAnimNode_LookAt, LookAt_Axis) == 376, "Offset mismatch for FAnimNode_LookAt::LookAt_Axis");
static_assert(offsetof(FAnimNode_LookAt, bUseLookUpAxis) == 408, "Offset mismatch for FAnimNode_LookAt::bUseLookUpAxis");
static_assert(offsetof(FAnimNode_LookAt, InterpolationType) == 409, "Offset mismatch for FAnimNode_LookAt::InterpolationType");
static_assert(offsetof(FAnimNode_LookAt, LookUp_Axis) == 416, "Offset mismatch for FAnimNode_LookAt::LookUp_Axis");
static_assert(offsetof(FAnimNode_LookAt, LookAtClamp) == 448, "Offset mismatch for FAnimNode_LookAt::LookAtClamp");
static_assert(offsetof(FAnimNode_LookAt, InterpolationTime) == 452, "Offset mismatch for FAnimNode_LookAt::InterpolationTime");
static_assert(offsetof(FAnimNode_LookAt, InterpolationTriggerThreashold) == 456, "Offset mismatch for FAnimNode_LookAt::InterpolationTriggerThreashold");

// /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_MakeDynamicAdditive
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t base[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Additive[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t bMeshSpaceAdditive; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_MakeDynamicAdditive, base) == 16, "Offset mismatch for FAnimNode_MakeDynamicAdditive::base");
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, Additive) == 32, "Offset mismatch for FAnimNode_MakeDynamicAdditive::Additive");
static_assert(offsetof(FAnimNode_MakeDynamicAdditive, bMeshSpaceAdditive) == 48, "Offset mismatch for FAnimNode_MakeDynamicAdditive::bMeshSpaceAdditive");

// /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_MeshSpaceRefPose
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.AnimNode_Mirror
// Kind: ScriptStruct; super: AnimNode_MirrorBase
struct FAnimNode_Mirror
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Source[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_Mirror, Source) == 16, "Offset mismatch for FAnimNode_Mirror::Source");

// /Script/AnimGraphRuntime.AnimNode_MirrorBase
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_MirrorBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Source[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_MirrorBase, Source) == 16, "Offset mismatch for FAnimNode_MirrorBase::Source");

// /Script/AnimGraphRuntime.AnimNode_Mirror_Standalone
// Kind: ScriptStruct; super: AnimNode_MirrorBase
struct FAnimNode_Mirror_Standalone
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bMirror; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* MirrorDataTable; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    float BlendTime; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendType; // 0x008C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bResetChild; // 0x008D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoneMirroring; // 0x008E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCurveMirroring; // 0x008F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAttributeMirroring; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_Mirror_Standalone, bMirror) == 120, "Offset mismatch for FAnimNode_Mirror_Standalone::bMirror");
static_assert(offsetof(FAnimNode_Mirror_Standalone, MirrorDataTable) == 128, "Offset mismatch for FAnimNode_Mirror_Standalone::MirrorDataTable");
static_assert(offsetof(FAnimNode_Mirror_Standalone, BlendTime) == 136, "Offset mismatch for FAnimNode_Mirror_Standalone::BlendTime");
static_assert(offsetof(FAnimNode_Mirror_Standalone, BlendType) == 140, "Offset mismatch for FAnimNode_Mirror_Standalone::BlendType");
static_assert(offsetof(FAnimNode_Mirror_Standalone, bResetChild) == 141, "Offset mismatch for FAnimNode_Mirror_Standalone::bResetChild");
static_assert(offsetof(FAnimNode_Mirror_Standalone, bBoneMirroring) == 142, "Offset mismatch for FAnimNode_Mirror_Standalone::bBoneMirroring");
static_assert(offsetof(FAnimNode_Mirror_Standalone, bCurveMirroring) == 143, "Offset mismatch for FAnimNode_Mirror_Standalone::bCurveMirroring");
static_assert(offsetof(FAnimNode_Mirror_Standalone, bAttributeMirroring) == 144, "Offset mismatch for FAnimNode_Mirror_Standalone::bAttributeMirroring");

// /Script/AnimGraphRuntime.AnimNode_ModifyBone
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_ModifyBone
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t BoneToModify[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t Translation[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t TranslationMode; // 0x0120 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RotationMode; // 0x0121 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ScaleMode; // 0x0122 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TranslationSpace; // 0x0123 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RotationSpace; // 0x0124 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ScaleSpace; // 0x0125 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FAnimNode_ModifyBone, BoneToModify) == 200, "Offset mismatch for FAnimNode_ModifyBone::BoneToModify");
static_assert(offsetof(FAnimNode_ModifyBone, Translation) == 216, "Offset mismatch for FAnimNode_ModifyBone::Translation");
static_assert(offsetof(FAnimNode_ModifyBone, Rotation) == 240, "Offset mismatch for FAnimNode_ModifyBone::Rotation");
static_assert(offsetof(FAnimNode_ModifyBone, Scale) == 264, "Offset mismatch for FAnimNode_ModifyBone::Scale");
static_assert(offsetof(FAnimNode_ModifyBone, TranslationMode) == 288, "Offset mismatch for FAnimNode_ModifyBone::TranslationMode");
static_assert(offsetof(FAnimNode_ModifyBone, RotationMode) == 289, "Offset mismatch for FAnimNode_ModifyBone::RotationMode");
static_assert(offsetof(FAnimNode_ModifyBone, ScaleMode) == 290, "Offset mismatch for FAnimNode_ModifyBone::ScaleMode");
static_assert(offsetof(FAnimNode_ModifyBone, TranslationSpace) == 291, "Offset mismatch for FAnimNode_ModifyBone::TranslationSpace");
static_assert(offsetof(FAnimNode_ModifyBone, RotationSpace) == 292, "Offset mismatch for FAnimNode_ModifyBone::RotationSpace");
static_assert(offsetof(FAnimNode_ModifyBone, ScaleSpace) == 293, "Offset mismatch for FAnimNode_ModifyBone::ScaleSpace");

// /Script/AnimGraphRuntime.AnimNode_ModifyCurve
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_ModifyCurve
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SourcePose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> CurveMap; // 0x0020 (Size: 0x10, Type: MapProperty)
    TArray<void*> CurveValues; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveNames; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0050
    float Alpha; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ApplyMode; // 0x0074 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNode_ModifyCurve, SourcePose) == 16, "Offset mismatch for FAnimNode_ModifyCurve::SourcePose");
static_assert(offsetof(FAnimNode_ModifyCurve, CurveMap) == 32, "Offset mismatch for FAnimNode_ModifyCurve::CurveMap");
static_assert(offsetof(FAnimNode_ModifyCurve, CurveValues) == 48, "Offset mismatch for FAnimNode_ModifyCurve::CurveValues");
static_assert(offsetof(FAnimNode_ModifyCurve, CurveNames) == 64, "Offset mismatch for FAnimNode_ModifyCurve::CurveNames");
static_assert(offsetof(FAnimNode_ModifyCurve, Alpha) == 112, "Offset mismatch for FAnimNode_ModifyCurve::Alpha");
static_assert(offsetof(FAnimNode_ModifyCurve, ApplyMode) == 116, "Offset mismatch for FAnimNode_ModifyCurve::ApplyMode");

// /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_MultiWayBlend
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Poses; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DesiredAlphas; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0030
    std::uint8_t AlphaScaleBias[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAdditiveNode; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNormalizeAlpha; // 0x0049 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_MultiWayBlend, Poses) == 16, "Offset mismatch for FAnimNode_MultiWayBlend::Poses");
static_assert(offsetof(FAnimNode_MultiWayBlend, DesiredAlphas) == 32, "Offset mismatch for FAnimNode_MultiWayBlend::DesiredAlphas");
static_assert(offsetof(FAnimNode_MultiWayBlend, AlphaScaleBias) == 64, "Offset mismatch for FAnimNode_MultiWayBlend::AlphaScaleBias");
static_assert(offsetof(FAnimNode_MultiWayBlend, bAdditiveNode) == 72, "Offset mismatch for FAnimNode_MultiWayBlend::bAdditiveNode");
static_assert(offsetof(FAnimNode_MultiWayBlend, bNormalizeAlpha) == 73, "Offset mismatch for FAnimNode_MultiWayBlend::bNormalizeAlpha");

// /Script/AnimGraphRuntime.AnimNode_ObserveBone
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_ObserveBone
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t BoneToObserve[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t DisplaySpace; // 0x00D4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRelativeToRefPose; // 0x00D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00D6
    std::uint8_t Translation[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_ObserveBone, BoneToObserve) == 200, "Offset mismatch for FAnimNode_ObserveBone::BoneToObserve");
static_assert(offsetof(FAnimNode_ObserveBone, DisplaySpace) == 212, "Offset mismatch for FAnimNode_ObserveBone::DisplaySpace");
static_assert(offsetof(FAnimNode_ObserveBone, bRelativeToRefPose) == 213, "Offset mismatch for FAnimNode_ObserveBone::bRelativeToRefPose");
static_assert(offsetof(FAnimNode_ObserveBone, Translation) == 216, "Offset mismatch for FAnimNode_ObserveBone::Translation");
static_assert(offsetof(FAnimNode_ObserveBone, Rotation) == 240, "Offset mismatch for FAnimNode_ObserveBone::Rotation");
static_assert(offsetof(FAnimNode_ObserveBone, Scale) == 264, "Offset mismatch for FAnimNode_ObserveBone::Scale");

// /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
// Kind: ScriptStruct; super: AnimNode_PoseHandler
struct FAnimNode_PoseBlendNode
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SourcePose[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlendOption; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    void* CustomCurve; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIgnorePoseAssetSourceAnimationCurves; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00C9
    std::int32_t LODThreshold; // 0x00CC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNode_PoseBlendNode, SourcePose) == 168, "Offset mismatch for FAnimNode_PoseBlendNode::SourcePose");
static_assert(offsetof(FAnimNode_PoseBlendNode, BlendOption) == 184, "Offset mismatch for FAnimNode_PoseBlendNode::BlendOption");
static_assert(offsetof(FAnimNode_PoseBlendNode, CustomCurve) == 192, "Offset mismatch for FAnimNode_PoseBlendNode::CustomCurve");
static_assert(offsetof(FAnimNode_PoseBlendNode, bIgnorePoseAssetSourceAnimationCurves) == 200, "Offset mismatch for FAnimNode_PoseBlendNode::bIgnorePoseAssetSourceAnimationCurves");
static_assert(offsetof(FAnimNode_PoseBlendNode, LODThreshold) == 204, "Offset mismatch for FAnimNode_PoseBlendNode::LODThreshold");

// /Script/AnimGraphRuntime.AnimNode_PoseByName
// Kind: ScriptStruct; super: AnimNode_PoseHandler
struct FAnimNode_PoseByName
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t PoseName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    float PoseWeight; // 0x00AC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_PoseByName, PoseName) == 168, "Offset mismatch for FAnimNode_PoseByName::PoseName");
static_assert(offsetof(FAnimNode_PoseByName, PoseWeight) == 172, "Offset mismatch for FAnimNode_PoseByName::PoseWeight");

// /Script/AnimGraphRuntime.AnimNode_PoseDriver
// Kind: ScriptStruct; super: AnimNode_PoseHandler
struct FAnimNode_PoseDriver
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SourcePose[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    TArray<void*> SourceBones; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EvalSpaceBone[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t bEvalFromRefPose; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D5
    TArray<void*> OnlyDriveBones; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PoseTargets; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RBFParams[0x38]; // 0x00F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t DriveSource; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DriveOutput; // 0x0131 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x42]; // 0x0132
    std::int32_t LODThreshold; // 0x0174 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNode_PoseDriver, SourcePose) == 168, "Offset mismatch for FAnimNode_PoseDriver::SourcePose");
static_assert(offsetof(FAnimNode_PoseDriver, SourceBones) == 184, "Offset mismatch for FAnimNode_PoseDriver::SourceBones");
static_assert(offsetof(FAnimNode_PoseDriver, EvalSpaceBone) == 200, "Offset mismatch for FAnimNode_PoseDriver::EvalSpaceBone");
static_assert(offsetof(FAnimNode_PoseDriver, bEvalFromRefPose) == 212, "Offset mismatch for FAnimNode_PoseDriver::bEvalFromRefPose");
static_assert(offsetof(FAnimNode_PoseDriver, OnlyDriveBones) == 216, "Offset mismatch for FAnimNode_PoseDriver::OnlyDriveBones");
static_assert(offsetof(FAnimNode_PoseDriver, PoseTargets) == 232, "Offset mismatch for FAnimNode_PoseDriver::PoseTargets");
static_assert(offsetof(FAnimNode_PoseDriver, RBFParams) == 248, "Offset mismatch for FAnimNode_PoseDriver::RBFParams");
static_assert(offsetof(FAnimNode_PoseDriver, DriveSource) == 304, "Offset mismatch for FAnimNode_PoseDriver::DriveSource");
static_assert(offsetof(FAnimNode_PoseDriver, DriveOutput) == 305, "Offset mismatch for FAnimNode_PoseDriver::DriveOutput");
static_assert(offsetof(FAnimNode_PoseDriver, LODThreshold) == 372, "Offset mismatch for FAnimNode_PoseDriver::LODThreshold");

// /Script/AnimGraphRuntime.AnimNode_PoseHandler
// Kind: ScriptStruct; super: AnimNode_AssetPlayerBase
struct FAnimNode_PoseHandler
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* PoseAsset; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNode_PoseHandler, PoseAsset) == 64, "Offset mismatch for FAnimNode_PoseHandler::PoseAsset");

// /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_PoseSnapshot
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName SnapshotName; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Snapshot[0x30]; // 0x0018 (Size: 0x30, Type: StructProperty)
    std::uint8_t Mode; // 0x0048 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNode_PoseSnapshot, SnapshotName) == 16, "Offset mismatch for FAnimNode_PoseSnapshot::SnapshotName");
static_assert(offsetof(FAnimNode_PoseSnapshot, Snapshot) == 24, "Offset mismatch for FAnimNode_PoseSnapshot::Snapshot");
static_assert(offsetof(FAnimNode_PoseSnapshot, Mode) == 72, "Offset mismatch for FAnimNode_PoseSnapshot::Mode");

// /Script/AnimGraphRuntime.AnimNode_RandomPlayer
// Kind: ScriptStruct; super: AnimNode_AssetPlayerRelevancyBase
struct FAnimNode_RandomPlayer
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Entries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x50]; // 0x0020
    float BlendWeight; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShuffleMode; // 0x0074 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_RandomPlayer, Entries) == 16, "Offset mismatch for FAnimNode_RandomPlayer::Entries");
static_assert(offsetof(FAnimNode_RandomPlayer, BlendWeight) == 112, "Offset mismatch for FAnimNode_RandomPlayer::BlendWeight");
static_assert(offsetof(FAnimNode_RandomPlayer, bShuffleMode) == 116, "Offset mismatch for FAnimNode_RandomPlayer::bShuffleMode");

// /Script/AnimGraphRuntime.AnimNode_RefPose
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_RefPose
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.AnimNode_RemoveCurve
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_RemoveCurve
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SourcePose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RemoveMode; // 0x0021 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    std::uint8_t Curves[0x10]; // 0x0028 (Size: 0x10, Type: SetProperty)
    std::uint8_t bAffectMorphTargetCurves; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAffectMaterialCurves; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAffectRegularCurves; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x003B
    TArray<void*> MorphTargetCurveNames; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialCurveNames; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_RemoveCurve, SourcePose) == 16, "Offset mismatch for FAnimNode_RemoveCurve::SourcePose");
static_assert(offsetof(FAnimNode_RemoveCurve, bEnabled) == 32, "Offset mismatch for FAnimNode_RemoveCurve::bEnabled");
static_assert(offsetof(FAnimNode_RemoveCurve, RemoveMode) == 33, "Offset mismatch for FAnimNode_RemoveCurve::RemoveMode");
static_assert(offsetof(FAnimNode_RemoveCurve, Curves) == 40, "Offset mismatch for FAnimNode_RemoveCurve::Curves");
static_assert(offsetof(FAnimNode_RemoveCurve, bAffectMorphTargetCurves) == 56, "Offset mismatch for FAnimNode_RemoveCurve::bAffectMorphTargetCurves");
static_assert(offsetof(FAnimNode_RemoveCurve, bAffectMaterialCurves) == 57, "Offset mismatch for FAnimNode_RemoveCurve::bAffectMaterialCurves");
static_assert(offsetof(FAnimNode_RemoveCurve, bAffectRegularCurves) == 58, "Offset mismatch for FAnimNode_RemoveCurve::bAffectRegularCurves");
static_assert(offsetof(FAnimNode_RemoveCurve, MorphTargetCurveNames) == 64, "Offset mismatch for FAnimNode_RemoveCurve::MorphTargetCurveNames");
static_assert(offsetof(FAnimNode_RemoveCurve, MaterialCurveNames) == 80, "Offset mismatch for FAnimNode_RemoveCurve::MaterialCurveNames");

// /Script/AnimGraphRuntime.AnimNode_ResetRoot
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_ResetRoot
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ComponentPose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int32_t LODThreshold; // 0x0020 (Size: 0x4, Type: IntProperty)
    float ActualAlpha; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaInputType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    float Alpha; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t AlphaBoolBlend[0x48]; // 0x0038 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaScaleBiasClamp[0x1]; // 0x0084 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_ResetRoot, ComponentPose) == 16, "Offset mismatch for FAnimNode_ResetRoot::ComponentPose");
static_assert(offsetof(FAnimNode_ResetRoot, LODThreshold) == 32, "Offset mismatch for FAnimNode_ResetRoot::LODThreshold");
static_assert(offsetof(FAnimNode_ResetRoot, ActualAlpha) == 36, "Offset mismatch for FAnimNode_ResetRoot::ActualAlpha");
static_assert(offsetof(FAnimNode_ResetRoot, AlphaInputType) == 40, "Offset mismatch for FAnimNode_ResetRoot::AlphaInputType");
static_assert(offsetof(FAnimNode_ResetRoot, bAlphaBoolEnabled) == 41, "Offset mismatch for FAnimNode_ResetRoot::bAlphaBoolEnabled");
static_assert(offsetof(FAnimNode_ResetRoot, Alpha) == 44, "Offset mismatch for FAnimNode_ResetRoot::Alpha");
static_assert(offsetof(FAnimNode_ResetRoot, AlphaScaleBias) == 48, "Offset mismatch for FAnimNode_ResetRoot::AlphaScaleBias");
static_assert(offsetof(FAnimNode_ResetRoot, AlphaBoolBlend) == 56, "Offset mismatch for FAnimNode_ResetRoot::AlphaBoolBlend");
static_assert(offsetof(FAnimNode_ResetRoot, AlphaCurveName) == 128, "Offset mismatch for FAnimNode_ResetRoot::AlphaCurveName");
static_assert(offsetof(FAnimNode_ResetRoot, AlphaScaleBiasClamp) == 132, "Offset mismatch for FAnimNode_ResetRoot::AlphaScaleBiasClamp");

// /Script/AnimGraphRuntime.AnimNode_RigidBody
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_RigidBody
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* OverridePhysicsAsset; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDefaultToSkeletalMeshPhysicsAsset; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseDefaultAsSimulated; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x136]; // 0x00D2
    std::uint8_t bUseLocalLODThresholdOnly; // 0x0208 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0209
    std::uint8_t OverrideWorldGravity[0x18]; // 0x0210 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalForce[0x18]; // 0x0228 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentLinearAccScale[0x18]; // 0x0240 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentLinearVelScale[0x18]; // 0x0258 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentAppliedLinearAccClamp[0x18]; // 0x0270 (Size: 0x18, Type: StructProperty)
    std::uint8_t SimSpaceSettings[0x68]; // 0x0288 (Size: 0x68, Type: StructProperty)
    float CachedBoundsScale; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BaseBoneRef[0xC]; // 0x02F4 (Size: 0xC, Type: StructProperty)
    std::uint8_t OverlapChannel; // 0x0300 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SimulationSpace; // 0x0301 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bForceDisableCollisionBetweenConstraintBodies; // 0x0302 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseExternalClothCollision; // 0x0303 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0304
    std::uint8_t bAllowPoseScalePropagation; // 0x0305 (Size: 0x1, Type: BoolProperty)
    // 0x0305 BoolProperty bClampLinearTranslationLimitToRefPose (shared storage)
    // 0x0305 BoolProperty bEnableWorldGeometry (shared storage)
    // 0x0305 BoolProperty bFreezeIncomingPoseOnStart (shared storage)
    // 0x0305 BoolProperty bOverrideWorldGravity (shared storage)
    // 0x0305 BoolProperty bTransferBoneVelocities (shared storage)
    std::uint8_t Pad_0004[0x2]; // 0x0306
    float WorldSpaceMinimumScale; // 0x0308 (Size: 0x4, Type: FloatProperty)
    float EvaluationResetTime; // 0x030C (Size: 0x4, Type: FloatProperty)
    float BoundsVelocityMultiplier; // 0x0310 (Size: 0x4, Type: FloatProperty)
    float MaxVelocityBoundsExpansion; // 0x0314 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowCCD; // 0x0318 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x1]; // 0x0319
    std::uint8_t SimulationTiming; // 0x031A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNode_RigidBody, OverridePhysicsAsset) == 200, "Offset mismatch for FAnimNode_RigidBody::OverridePhysicsAsset");
static_assert(offsetof(FAnimNode_RigidBody, bDefaultToSkeletalMeshPhysicsAsset) == 208, "Offset mismatch for FAnimNode_RigidBody::bDefaultToSkeletalMeshPhysicsAsset");
static_assert(offsetof(FAnimNode_RigidBody, bUseDefaultAsSimulated) == 209, "Offset mismatch for FAnimNode_RigidBody::bUseDefaultAsSimulated");
static_assert(offsetof(FAnimNode_RigidBody, bUseLocalLODThresholdOnly) == 520, "Offset mismatch for FAnimNode_RigidBody::bUseLocalLODThresholdOnly");
static_assert(offsetof(FAnimNode_RigidBody, OverrideWorldGravity) == 528, "Offset mismatch for FAnimNode_RigidBody::OverrideWorldGravity");
static_assert(offsetof(FAnimNode_RigidBody, ExternalForce) == 552, "Offset mismatch for FAnimNode_RigidBody::ExternalForce");
static_assert(offsetof(FAnimNode_RigidBody, ComponentLinearAccScale) == 576, "Offset mismatch for FAnimNode_RigidBody::ComponentLinearAccScale");
static_assert(offsetof(FAnimNode_RigidBody, ComponentLinearVelScale) == 600, "Offset mismatch for FAnimNode_RigidBody::ComponentLinearVelScale");
static_assert(offsetof(FAnimNode_RigidBody, ComponentAppliedLinearAccClamp) == 624, "Offset mismatch for FAnimNode_RigidBody::ComponentAppliedLinearAccClamp");
static_assert(offsetof(FAnimNode_RigidBody, SimSpaceSettings) == 648, "Offset mismatch for FAnimNode_RigidBody::SimSpaceSettings");
static_assert(offsetof(FAnimNode_RigidBody, CachedBoundsScale) == 752, "Offset mismatch for FAnimNode_RigidBody::CachedBoundsScale");
static_assert(offsetof(FAnimNode_RigidBody, BaseBoneRef) == 756, "Offset mismatch for FAnimNode_RigidBody::BaseBoneRef");
static_assert(offsetof(FAnimNode_RigidBody, OverlapChannel) == 768, "Offset mismatch for FAnimNode_RigidBody::OverlapChannel");
static_assert(offsetof(FAnimNode_RigidBody, SimulationSpace) == 769, "Offset mismatch for FAnimNode_RigidBody::SimulationSpace");
static_assert(offsetof(FAnimNode_RigidBody, bForceDisableCollisionBetweenConstraintBodies) == 770, "Offset mismatch for FAnimNode_RigidBody::bForceDisableCollisionBetweenConstraintBodies");
static_assert(offsetof(FAnimNode_RigidBody, bUseExternalClothCollision) == 771, "Offset mismatch for FAnimNode_RigidBody::bUseExternalClothCollision");
static_assert(offsetof(FAnimNode_RigidBody, bAllowPoseScalePropagation) == 773, "Offset mismatch for FAnimNode_RigidBody::bAllowPoseScalePropagation");
static_assert(offsetof(FAnimNode_RigidBody, WorldSpaceMinimumScale) == 776, "Offset mismatch for FAnimNode_RigidBody::WorldSpaceMinimumScale");
static_assert(offsetof(FAnimNode_RigidBody, EvaluationResetTime) == 780, "Offset mismatch for FAnimNode_RigidBody::EvaluationResetTime");
static_assert(offsetof(FAnimNode_RigidBody, BoundsVelocityMultiplier) == 784, "Offset mismatch for FAnimNode_RigidBody::BoundsVelocityMultiplier");
static_assert(offsetof(FAnimNode_RigidBody, MaxVelocityBoundsExpansion) == 788, "Offset mismatch for FAnimNode_RigidBody::MaxVelocityBoundsExpansion");
static_assert(offsetof(FAnimNode_RigidBody, bAllowCCD) == 792, "Offset mismatch for FAnimNode_RigidBody::bAllowCCD");
static_assert(offsetof(FAnimNode_RigidBody, SimulationTiming) == 794, "Offset mismatch for FAnimNode_RigidBody::SimulationTiming");

// /Script/AnimGraphRuntime.AnimNode_RotateRootBone
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_RotateRootBone
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BasePose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float Pitch; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Yaw; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PitchScaleBiasClamp[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t YawScaleBiasClamp[0x30]; // 0x0058 (Size: 0x30, Type: StructProperty)
    std::uint8_t MeshToComponent[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRotateRootMotionAttribute; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_RotateRootBone, BasePose) == 16, "Offset mismatch for FAnimNode_RotateRootBone::BasePose");
static_assert(offsetof(FAnimNode_RotateRootBone, Pitch) == 32, "Offset mismatch for FAnimNode_RotateRootBone::Pitch");
static_assert(offsetof(FAnimNode_RotateRootBone, Yaw) == 36, "Offset mismatch for FAnimNode_RotateRootBone::Yaw");
static_assert(offsetof(FAnimNode_RotateRootBone, PitchScaleBiasClamp) == 40, "Offset mismatch for FAnimNode_RotateRootBone::PitchScaleBiasClamp");
static_assert(offsetof(FAnimNode_RotateRootBone, YawScaleBiasClamp) == 88, "Offset mismatch for FAnimNode_RotateRootBone::YawScaleBiasClamp");
static_assert(offsetof(FAnimNode_RotateRootBone, MeshToComponent) == 136, "Offset mismatch for FAnimNode_RotateRootBone::MeshToComponent");
static_assert(offsetof(FAnimNode_RotateRootBone, bRotateRootMotionAttribute) == 160, "Offset mismatch for FAnimNode_RotateRootBone::bRotateRootMotionAttribute");

// /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_RotationMultiplier
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t TargetBone[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t SourceBone[0xC]; // 0x00D4 (Size: 0xC, Type: StructProperty)
    float Multiplier; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotationAxisToRefer; // 0x00E4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsAdditive; // 0x00E5 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_RotationMultiplier, TargetBone) == 200, "Offset mismatch for FAnimNode_RotationMultiplier::TargetBone");
static_assert(offsetof(FAnimNode_RotationMultiplier, SourceBone) == 212, "Offset mismatch for FAnimNode_RotationMultiplier::SourceBone");
static_assert(offsetof(FAnimNode_RotationMultiplier, Multiplier) == 224, "Offset mismatch for FAnimNode_RotationMultiplier::Multiplier");
static_assert(offsetof(FAnimNode_RotationMultiplier, RotationAxisToRefer) == 228, "Offset mismatch for FAnimNode_RotationMultiplier::RotationAxisToRefer");
static_assert(offsetof(FAnimNode_RotationMultiplier, bIsAdditive) == 229, "Offset mismatch for FAnimNode_RotationMultiplier::bIsAdditive");

// /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Kind: ScriptStruct; super: AnimNode_BlendSpacePlayer
struct FAnimNode_RotationOffsetBlendSpace
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t BasePose[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t bApplyAdditiveInRootSpace; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0089
    std::int32_t LODThreshold; // 0x008C (Size: 0x4, Type: IntProperty)
    float Alpha; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0xC]; // 0x0094 (Size: 0xC, Type: StructProperty)
    std::uint8_t AlphaBoolBlend[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x00E8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaScaleBiasClamp[0x34]; // 0x00EC (Size: 0x34, Type: StructProperty)
    std::uint8_t AlphaInputType; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x0121 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, BasePose) == 120, "Offset mismatch for FAnimNode_RotationOffsetBlendSpace::BasePose");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, bApplyAdditiveInRootSpace) == 136, "Offset mismatch for FAnimNode_RotationOffsetBlendSpace::bApplyAdditiveInRootSpace");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, LODThreshold) == 140, "Offset mismatch for FAnimNode_RotationOffsetBlendSpace::LODThreshold");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, Alpha) == 144, "Offset mismatch for FAnimNode_RotationOffsetBlendSpace::Alpha");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBias) == 148, "Offset mismatch for FAnimNode_RotationOffsetBlendSpace::AlphaScaleBias");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaBoolBlend) == 160, "Offset mismatch for FAnimNode_RotationOffsetBlendSpace::AlphaBoolBlend");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaCurveName) == 232, "Offset mismatch for FAnimNode_RotationOffsetBlendSpace::AlphaCurveName");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaScaleBiasClamp) == 236, "Offset mismatch for FAnimNode_RotationOffsetBlendSpace::AlphaScaleBiasClamp");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, AlphaInputType) == 288, "Offset mismatch for FAnimNode_RotationOffsetBlendSpace::AlphaInputType");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpace, bAlphaBoolEnabled) == 289, "Offset mismatch for FAnimNode_RotationOffsetBlendSpace::bAlphaBoolEnabled");

// /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
// Kind: ScriptStruct; super: AnimNode_BlendSpaceGraphBase
struct FAnimNode_RotationOffsetBlendSpaceGraph
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t BasePose[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t bApplyAdditiveInRootSpace; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    std::int32_t LODThreshold; // 0x0074 (Size: 0x4, Type: IntProperty)
    float Alpha; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0xC]; // 0x007C (Size: 0xC, Type: StructProperty)
    std::uint8_t AlphaBoolBlend[0x48]; // 0x0088 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x00D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaScaleBiasClamp[0x34]; // 0x00D4 (Size: 0x34, Type: StructProperty)
    std::uint8_t AlphaInputType; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x0109 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, BasePose) == 96, "Offset mismatch for FAnimNode_RotationOffsetBlendSpaceGraph::BasePose");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, bApplyAdditiveInRootSpace) == 112, "Offset mismatch for FAnimNode_RotationOffsetBlendSpaceGraph::bApplyAdditiveInRootSpace");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, LODThreshold) == 116, "Offset mismatch for FAnimNode_RotationOffsetBlendSpaceGraph::LODThreshold");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, Alpha) == 120, "Offset mismatch for FAnimNode_RotationOffsetBlendSpaceGraph::Alpha");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaScaleBias) == 124, "Offset mismatch for FAnimNode_RotationOffsetBlendSpaceGraph::AlphaScaleBias");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaBoolBlend) == 136, "Offset mismatch for FAnimNode_RotationOffsetBlendSpaceGraph::AlphaBoolBlend");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaCurveName) == 208, "Offset mismatch for FAnimNode_RotationOffsetBlendSpaceGraph::AlphaCurveName");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaScaleBiasClamp) == 212, "Offset mismatch for FAnimNode_RotationOffsetBlendSpaceGraph::AlphaScaleBiasClamp");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaInputType) == 264, "Offset mismatch for FAnimNode_RotationOffsetBlendSpaceGraph::AlphaInputType");
static_assert(offsetof(FAnimNode_RotationOffsetBlendSpaceGraph, bAlphaBoolEnabled) == 265, "Offset mismatch for FAnimNode_RotationOffsetBlendSpaceGraph::bAlphaBoolEnabled");

// /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_ScaleChainLength
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InputPose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float DefaultChainLength; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ChainStartBone[0xC]; // 0x0024 (Size: 0xC, Type: StructProperty)
    std::uint8_t ChainEndBone[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetLocation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    float Alpha; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    std::uint8_t AlphaScaleBias[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::uint8_t ChainInitialLength; // 0x0068 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNode_ScaleChainLength, InputPose) == 16, "Offset mismatch for FAnimNode_ScaleChainLength::InputPose");
static_assert(offsetof(FAnimNode_ScaleChainLength, DefaultChainLength) == 32, "Offset mismatch for FAnimNode_ScaleChainLength::DefaultChainLength");
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainStartBone) == 36, "Offset mismatch for FAnimNode_ScaleChainLength::ChainStartBone");
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainEndBone) == 48, "Offset mismatch for FAnimNode_ScaleChainLength::ChainEndBone");
static_assert(offsetof(FAnimNode_ScaleChainLength, TargetLocation) == 64, "Offset mismatch for FAnimNode_ScaleChainLength::TargetLocation");
static_assert(offsetof(FAnimNode_ScaleChainLength, Alpha) == 88, "Offset mismatch for FAnimNode_ScaleChainLength::Alpha");
static_assert(offsetof(FAnimNode_ScaleChainLength, AlphaScaleBias) == 96, "Offset mismatch for FAnimNode_ScaleChainLength::AlphaScaleBias");
static_assert(offsetof(FAnimNode_ScaleChainLength, ChainInitialLength) == 104, "Offset mismatch for FAnimNode_ScaleChainLength::ChainInitialLength");

// /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
// Kind: ScriptStruct; super: AnimNode_SequenceEvaluatorBase
struct FAnimNode_SequenceEvaluator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float BlendWeight; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float InternalTimeAccumulator; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_SequenceEvaluator, BlendWeight) == 40, "Offset mismatch for FAnimNode_SequenceEvaluator::BlendWeight");
static_assert(offsetof(FAnimNode_SequenceEvaluator, InternalTimeAccumulator) == 44, "Offset mismatch for FAnimNode_SequenceEvaluator::InternalTimeAccumulator");

// /Script/AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
// Kind: ScriptStruct; super: AnimNode_AssetPlayerBase
struct FAnimNode_SequenceEvaluatorBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float BlendWeight; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float InternalTimeAccumulator; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_SequenceEvaluatorBase, BlendWeight) == 40, "Offset mismatch for FAnimNode_SequenceEvaluatorBase::BlendWeight");
static_assert(offsetof(FAnimNode_SequenceEvaluatorBase, InternalTimeAccumulator) == 44, "Offset mismatch for FAnimNode_SequenceEvaluatorBase::InternalTimeAccumulator");

// /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
// Kind: ScriptStruct; super: AnimNode_SequenceEvaluatorBase
struct FAnimNode_SequenceEvaluator_Standalone
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t GroupName[0x4]; // 0x0048 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupRole; // 0x004C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Method; // 0x004D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnoreForRelevancyTest; // 0x004E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x004F
    void* Sequence; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    float ExplicitTime; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseExplicitFrame; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x005D
    std::int32_t ExplicitFrame; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShouldLoop; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTeleportToExplicitTime; // 0x0065 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ReinitializationBehavior; // 0x0066 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0067
    float StartPosition; // 0x0068 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, GroupName) == 72, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::GroupName");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, GroupRole) == 76, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::GroupRole");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, Method) == 77, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::Method");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, bIgnoreForRelevancyTest) == 78, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::bIgnoreForRelevancyTest");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, Sequence) == 80, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::Sequence");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, ExplicitTime) == 88, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::ExplicitTime");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, bUseExplicitFrame) == 92, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::bUseExplicitFrame");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, ExplicitFrame) == 96, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::ExplicitFrame");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, bShouldLoop) == 100, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::bShouldLoop");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, bTeleportToExplicitTime) == 101, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::bTeleportToExplicitTime");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, ReinitializationBehavior) == 102, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::ReinitializationBehavior");
static_assert(offsetof(FAnimNode_SequenceEvaluator_Standalone, StartPosition) == 104, "Offset mismatch for FAnimNode_SequenceEvaluator_Standalone::StartPosition");

// /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_SkeletalControlBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ComponentPose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int32_t LODThreshold; // 0x0020 (Size: 0x4, Type: IntProperty)
    float ActualAlpha; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaInputType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    float Alpha; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t AlphaBoolBlend[0x48]; // 0x0038 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaScaleBiasClamp[0x1]; // 0x0084 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_SkeletalControlBase, ComponentPose) == 16, "Offset mismatch for FAnimNode_SkeletalControlBase::ComponentPose");
static_assert(offsetof(FAnimNode_SkeletalControlBase, LODThreshold) == 32, "Offset mismatch for FAnimNode_SkeletalControlBase::LODThreshold");
static_assert(offsetof(FAnimNode_SkeletalControlBase, ActualAlpha) == 36, "Offset mismatch for FAnimNode_SkeletalControlBase::ActualAlpha");
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaInputType) == 40, "Offset mismatch for FAnimNode_SkeletalControlBase::AlphaInputType");
static_assert(offsetof(FAnimNode_SkeletalControlBase, bAlphaBoolEnabled) == 41, "Offset mismatch for FAnimNode_SkeletalControlBase::bAlphaBoolEnabled");
static_assert(offsetof(FAnimNode_SkeletalControlBase, Alpha) == 44, "Offset mismatch for FAnimNode_SkeletalControlBase::Alpha");
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBias) == 48, "Offset mismatch for FAnimNode_SkeletalControlBase::AlphaScaleBias");
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaBoolBlend) == 56, "Offset mismatch for FAnimNode_SkeletalControlBase::AlphaBoolBlend");
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaCurveName) == 128, "Offset mismatch for FAnimNode_SkeletalControlBase::AlphaCurveName");
static_assert(offsetof(FAnimNode_SkeletalControlBase, AlphaScaleBiasClamp) == 132, "Offset mismatch for FAnimNode_SkeletalControlBase::AlphaScaleBiasClamp");

// /Script/AnimGraphRuntime.AnimNode_Slot
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_Slot
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Source[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t SlotName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAlwaysUpdateSourcePose; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_Slot, Source) == 16, "Offset mismatch for FAnimNode_Slot::Source");
static_assert(offsetof(FAnimNode_Slot, SlotName) == 32, "Offset mismatch for FAnimNode_Slot::SlotName");
static_assert(offsetof(FAnimNode_Slot, bAlwaysUpdateSourcePose) == 36, "Offset mismatch for FAnimNode_Slot::bAlwaysUpdateSourcePose");

// /Script/AnimGraphRuntime.AnimNode_SplineIK
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_SplineIK
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t StartBone[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t EndBone[0xC]; // 0x00D4 (Size: 0xC, Type: StructProperty)
    std::uint8_t BoneAxis; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAutoCalculateSpline; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00E2
    std::int32_t PointCount; // 0x00E4 (Size: 0x4, Type: IntProperty)
    TArray<void*> ControlPoints; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    float Roll; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float TwistStart; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float TwistEnd; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0104
    std::uint8_t TwistBlend[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    float Stretch; // 0x0138 (Size: 0x4, Type: FloatProperty)
    float Offset; // 0x013C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_SplineIK, StartBone) == 200, "Offset mismatch for FAnimNode_SplineIK::StartBone");
static_assert(offsetof(FAnimNode_SplineIK, EndBone) == 212, "Offset mismatch for FAnimNode_SplineIK::EndBone");
static_assert(offsetof(FAnimNode_SplineIK, BoneAxis) == 224, "Offset mismatch for FAnimNode_SplineIK::BoneAxis");
static_assert(offsetof(FAnimNode_SplineIK, bAutoCalculateSpline) == 225, "Offset mismatch for FAnimNode_SplineIK::bAutoCalculateSpline");
static_assert(offsetof(FAnimNode_SplineIK, PointCount) == 228, "Offset mismatch for FAnimNode_SplineIK::PointCount");
static_assert(offsetof(FAnimNode_SplineIK, ControlPoints) == 232, "Offset mismatch for FAnimNode_SplineIK::ControlPoints");
static_assert(offsetof(FAnimNode_SplineIK, Roll) == 248, "Offset mismatch for FAnimNode_SplineIK::Roll");
static_assert(offsetof(FAnimNode_SplineIK, TwistStart) == 252, "Offset mismatch for FAnimNode_SplineIK::TwistStart");
static_assert(offsetof(FAnimNode_SplineIK, TwistEnd) == 256, "Offset mismatch for FAnimNode_SplineIK::TwistEnd");
static_assert(offsetof(FAnimNode_SplineIK, TwistBlend) == 264, "Offset mismatch for FAnimNode_SplineIK::TwistBlend");
static_assert(offsetof(FAnimNode_SplineIK, Stretch) == 312, "Offset mismatch for FAnimNode_SplineIK::Stretch");
static_assert(offsetof(FAnimNode_SplineIK, Offset) == 316, "Offset mismatch for FAnimNode_SplineIK::Offset");

// /Script/AnimGraphRuntime.AnimNode_SpringBone
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_SpringBone
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t SpringBone[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    double MaxDisplacement; // 0x00D8 (Size: 0x8, Type: DoubleProperty)
    double SpringStiffness; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    double SpringDamping; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    double ErrorResetThresh; // 0x00F0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0001[0x6C]; // 0x00F8
    std::uint8_t bLimitDisplacement; // 0x0164 (Size: 0x1, Type: BoolProperty)
    // 0x0164 BoolProperty bRotateX (shared storage)
    // 0x0164 BoolProperty bRotateY (shared storage)
    // 0x0164 BoolProperty bRotateZ (shared storage)
    // 0x0164 BoolProperty bTranslateX (shared storage)
    // 0x0164 BoolProperty bTranslateY (shared storage)
    // 0x0164 BoolProperty bTranslateZ (shared storage)
    std::uint8_t bOverrideOwnerVelocity; // 0x0165 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0166
    std::uint8_t OwnerVelocityOverride[0x1]; // 0x0168 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_SpringBone, SpringBone) == 200, "Offset mismatch for FAnimNode_SpringBone::SpringBone");
static_assert(offsetof(FAnimNode_SpringBone, MaxDisplacement) == 216, "Offset mismatch for FAnimNode_SpringBone::MaxDisplacement");
static_assert(offsetof(FAnimNode_SpringBone, SpringStiffness) == 224, "Offset mismatch for FAnimNode_SpringBone::SpringStiffness");
static_assert(offsetof(FAnimNode_SpringBone, SpringDamping) == 232, "Offset mismatch for FAnimNode_SpringBone::SpringDamping");
static_assert(offsetof(FAnimNode_SpringBone, ErrorResetThresh) == 240, "Offset mismatch for FAnimNode_SpringBone::ErrorResetThresh");
static_assert(offsetof(FAnimNode_SpringBone, bLimitDisplacement) == 356, "Offset mismatch for FAnimNode_SpringBone::bLimitDisplacement");
static_assert(offsetof(FAnimNode_SpringBone, bOverrideOwnerVelocity) == 357, "Offset mismatch for FAnimNode_SpringBone::bOverrideOwnerVelocity");
static_assert(offsetof(FAnimNode_SpringBone, OwnerVelocityOverride) == 360, "Offset mismatch for FAnimNode_SpringBone::OwnerVelocityOverride");

// /Script/AnimGraphRuntime.AnimNode_Sync
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_Sync
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Source[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t GroupName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupRole; // 0x0024 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FAnimNode_Sync, Source) == 16, "Offset mismatch for FAnimNode_Sync::Source");
static_assert(offsetof(FAnimNode_Sync, GroupName) == 32, "Offset mismatch for FAnimNode_Sync::GroupName");
static_assert(offsetof(FAnimNode_Sync, GroupRole) == 36, "Offset mismatch for FAnimNode_Sync::GroupRole");

// /Script/AnimGraphRuntime.AnimNode_Trail
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_Trail
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::uint8_t TrailBone[0xC]; // 0x0130 (Size: 0xC, Type: StructProperty)
    std::int32_t ChainLength; // 0x013C (Size: 0x4, Type: IntProperty)
    std::uint8_t ChainBoneAxis; // 0x0140 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bActorSpaceFakeVel; // 0x0141 (Size: 0x1, Type: BoolProperty)
    // 0x0141 BoolProperty bInvertChainBoneAxis (shared storage)
    // 0x0141 BoolProperty bLimitRotation (shared storage)
    // 0x0141 BoolProperty bLimitStretch (shared storage)
    // 0x0141 BoolProperty bReorientParentToChild (shared storage)
    // 0x0141 BoolProperty bUsePlanarLimit (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x0142
    float MaxDeltaTime; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float RelaxationSpeedScale; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x014C
    std::uint8_t TrailRelaxationSpeed[0x48]; // 0x0150 (Size: 0x48, Type: StructProperty)
    std::uint8_t RelaxationSpeedScaleInputProcessor[0x30]; // 0x0198 (Size: 0x30, Type: StructProperty)
    TArray<void*> RotationLimits; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RotationOffsets; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlanarLimits; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
    float StretchLimit; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x01FC
    std::uint8_t FakeVelocity[0x18]; // 0x0200 (Size: 0x18, Type: StructProperty)
    std::uint8_t BaseJoint[0xC]; // 0x0218 (Size: 0xC, Type: StructProperty)
    float LastBoneRotationAnimAlphaBlend; // 0x0224 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_Trail, TrailBone) == 304, "Offset mismatch for FAnimNode_Trail::TrailBone");
static_assert(offsetof(FAnimNode_Trail, ChainLength) == 316, "Offset mismatch for FAnimNode_Trail::ChainLength");
static_assert(offsetof(FAnimNode_Trail, ChainBoneAxis) == 320, "Offset mismatch for FAnimNode_Trail::ChainBoneAxis");
static_assert(offsetof(FAnimNode_Trail, bActorSpaceFakeVel) == 321, "Offset mismatch for FAnimNode_Trail::bActorSpaceFakeVel");
static_assert(offsetof(FAnimNode_Trail, MaxDeltaTime) == 324, "Offset mismatch for FAnimNode_Trail::MaxDeltaTime");
static_assert(offsetof(FAnimNode_Trail, RelaxationSpeedScale) == 328, "Offset mismatch for FAnimNode_Trail::RelaxationSpeedScale");
static_assert(offsetof(FAnimNode_Trail, TrailRelaxationSpeed) == 336, "Offset mismatch for FAnimNode_Trail::TrailRelaxationSpeed");
static_assert(offsetof(FAnimNode_Trail, RelaxationSpeedScaleInputProcessor) == 408, "Offset mismatch for FAnimNode_Trail::RelaxationSpeedScaleInputProcessor");
static_assert(offsetof(FAnimNode_Trail, RotationLimits) == 456, "Offset mismatch for FAnimNode_Trail::RotationLimits");
static_assert(offsetof(FAnimNode_Trail, RotationOffsets) == 472, "Offset mismatch for FAnimNode_Trail::RotationOffsets");
static_assert(offsetof(FAnimNode_Trail, PlanarLimits) == 488, "Offset mismatch for FAnimNode_Trail::PlanarLimits");
static_assert(offsetof(FAnimNode_Trail, StretchLimit) == 504, "Offset mismatch for FAnimNode_Trail::StretchLimit");
static_assert(offsetof(FAnimNode_Trail, FakeVelocity) == 512, "Offset mismatch for FAnimNode_Trail::FakeVelocity");
static_assert(offsetof(FAnimNode_Trail, BaseJoint) == 536, "Offset mismatch for FAnimNode_Trail::BaseJoint");
static_assert(offsetof(FAnimNode_Trail, LastBoneRotationAnimAlphaBlend) == 548, "Offset mismatch for FAnimNode_Trail::LastBoneRotationAnimAlphaBlend");

// /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_TwistCorrectiveNode
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t BaseFrame[0x30]; // 0x00C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TwistFrame[0x30]; // 0x00F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TwistPlaneNormalAxis[0x20]; // 0x0128 (Size: 0x20, Type: StructProperty)
    float RangeMax; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float RemappedMin; // 0x014C (Size: 0x4, Type: FloatProperty)
    float RemappedMax; // 0x0150 (Size: 0x4, Type: FloatProperty)
    FName CurveName; // 0x0154 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAnimNode_TwistCorrectiveNode, BaseFrame) == 200, "Offset mismatch for FAnimNode_TwistCorrectiveNode::BaseFrame");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, TwistFrame) == 248, "Offset mismatch for FAnimNode_TwistCorrectiveNode::TwistFrame");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, TwistPlaneNormalAxis) == 296, "Offset mismatch for FAnimNode_TwistCorrectiveNode::TwistPlaneNormalAxis");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, RangeMax) == 328, "Offset mismatch for FAnimNode_TwistCorrectiveNode::RangeMax");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, RemappedMin) == 332, "Offset mismatch for FAnimNode_TwistCorrectiveNode::RemappedMin");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, RemappedMax) == 336, "Offset mismatch for FAnimNode_TwistCorrectiveNode::RemappedMax");
static_assert(offsetof(FAnimNode_TwistCorrectiveNode, CurveName) == 340, "Offset mismatch for FAnimNode_TwistCorrectiveNode::CurveName");

// /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_TwoBoneIK
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t IKBone[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    double StartStretchRatio; // 0x00D8 (Size: 0x8, Type: DoubleProperty)
    double MaxStretchScale; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t EffectorLocation[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EffectorTarget[0x80]; // 0x0110 (Size: 0x80, Type: StructProperty)
    std::uint8_t JointTargetLocation[0x20]; // 0x0190 (Size: 0x20, Type: StructProperty)
    std::uint8_t JointTarget[0x80]; // 0x01B0 (Size: 0x80, Type: StructProperty)
    std::uint8_t TwistAxis[0x20]; // 0x0230 (Size: 0x20, Type: StructProperty)
    std::uint8_t EffectorLocationSpace; // 0x0250 (Size: 0x1, Type: ByteProperty)
    std::uint8_t JointTargetLocationSpace; // 0x0251 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowStretching; // 0x0252 (Size: 0x1, Type: BoolProperty)
    // 0x0252 BoolProperty bAllowTwist (shared storage)
    // 0x0252 BoolProperty bMaintainEffectorRelRot (shared storage)
    // 0x0252 BoolProperty bTakeRotationFromEffectorSpace (shared storage)
};

static_assert(offsetof(FAnimNode_TwoBoneIK, IKBone) == 200, "Offset mismatch for FAnimNode_TwoBoneIK::IKBone");
static_assert(offsetof(FAnimNode_TwoBoneIK, StartStretchRatio) == 216, "Offset mismatch for FAnimNode_TwoBoneIK::StartStretchRatio");
static_assert(offsetof(FAnimNode_TwoBoneIK, MaxStretchScale) == 224, "Offset mismatch for FAnimNode_TwoBoneIK::MaxStretchScale");
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorLocation) == 232, "Offset mismatch for FAnimNode_TwoBoneIK::EffectorLocation");
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorTarget) == 272, "Offset mismatch for FAnimNode_TwoBoneIK::EffectorTarget");
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTargetLocation) == 400, "Offset mismatch for FAnimNode_TwoBoneIK::JointTargetLocation");
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTarget) == 432, "Offset mismatch for FAnimNode_TwoBoneIK::JointTarget");
static_assert(offsetof(FAnimNode_TwoBoneIK, TwistAxis) == 560, "Offset mismatch for FAnimNode_TwoBoneIK::TwistAxis");
static_assert(offsetof(FAnimNode_TwoBoneIK, EffectorLocationSpace) == 592, "Offset mismatch for FAnimNode_TwoBoneIK::EffectorLocationSpace");
static_assert(offsetof(FAnimNode_TwoBoneIK, JointTargetLocationSpace) == 593, "Offset mismatch for FAnimNode_TwoBoneIK::JointTargetLocationSpace");
static_assert(offsetof(FAnimNode_TwoBoneIK, bAllowStretching) == 594, "Offset mismatch for FAnimNode_TwoBoneIK::bAllowStretching");

// /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_TwoWayBlend
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t A[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t AlphaInputType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x0031 (Size: 0x1, Type: BoolProperty)
    // 0x0031 BoolProperty bAlwaysUpdateChildren (shared storage)
    // 0x0031 BoolProperty bResetChildOnActivation (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x0032
    float Alpha; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    std::uint8_t AlphaBoolBlend[0x48]; // 0x0040 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaScaleBiasClamp[0x1]; // 0x008C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_TwoWayBlend, A) == 16, "Offset mismatch for FAnimNode_TwoWayBlend::A");
static_assert(offsetof(FAnimNode_TwoWayBlend, B) == 32, "Offset mismatch for FAnimNode_TwoWayBlend::B");
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaInputType) == 48, "Offset mismatch for FAnimNode_TwoWayBlend::AlphaInputType");
static_assert(offsetof(FAnimNode_TwoWayBlend, bAlphaBoolEnabled) == 49, "Offset mismatch for FAnimNode_TwoWayBlend::bAlphaBoolEnabled");
static_assert(offsetof(FAnimNode_TwoWayBlend, Alpha) == 52, "Offset mismatch for FAnimNode_TwoWayBlend::Alpha");
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaScaleBias) == 56, "Offset mismatch for FAnimNode_TwoWayBlend::AlphaScaleBias");
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaBoolBlend) == 64, "Offset mismatch for FAnimNode_TwoWayBlend::AlphaBoolBlend");
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaCurveName) == 136, "Offset mismatch for FAnimNode_TwoWayBlend::AlphaCurveName");
static_assert(offsetof(FAnimNode_TwoWayBlend, AlphaScaleBiasClamp) == 140, "Offset mismatch for FAnimNode_TwoWayBlend::AlphaScaleBiasClamp");

// /Script/AnimGraphRuntime.AnimPhysBodyDefinition
// Kind: ScriptStruct; super: none
struct FAnimPhysBodyDefinition
{
public:
    std::uint8_t BoundBone[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t BoxExtents[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalJointOffset[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConstraintSetup[0x88]; // 0x0040 (Size: 0x88, Type: StructProperty)
    std::uint8_t CollisionType; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00C9
    float SphereCollisionRadius; // 0x00CC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimPhysBodyDefinition, BoundBone) == 0, "Offset mismatch for FAnimPhysBodyDefinition::BoundBone");
static_assert(offsetof(FAnimPhysBodyDefinition, BoxExtents) == 16, "Offset mismatch for FAnimPhysBodyDefinition::BoxExtents");
static_assert(offsetof(FAnimPhysBodyDefinition, LocalJointOffset) == 40, "Offset mismatch for FAnimPhysBodyDefinition::LocalJointOffset");
static_assert(offsetof(FAnimPhysBodyDefinition, ConstraintSetup) == 64, "Offset mismatch for FAnimPhysBodyDefinition::ConstraintSetup");
static_assert(offsetof(FAnimPhysBodyDefinition, CollisionType) == 200, "Offset mismatch for FAnimPhysBodyDefinition::CollisionType");
static_assert(offsetof(FAnimPhysBodyDefinition, SphereCollisionRadius) == 204, "Offset mismatch for FAnimPhysBodyDefinition::SphereCollisionRadius");

// /Script/AnimGraphRuntime.AnimPhysConstraintSetup
// Kind: ScriptStruct; super: none
struct FAnimPhysConstraintSetup
{
public:
    std::uint8_t LinearXLimitType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LinearYLimitType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LinearZLimitType; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t LinearAxesMin[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearAxesMax[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularConstraintType; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TwistAxis; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AngularTargetAxis; // 0x003A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x003B
    float ConeAngle; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t AngularLimitsMin[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularLimitsMax[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularTarget[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimPhysConstraintSetup, LinearXLimitType) == 0, "Offset mismatch for FAnimPhysConstraintSetup::LinearXLimitType");
static_assert(offsetof(FAnimPhysConstraintSetup, LinearYLimitType) == 1, "Offset mismatch for FAnimPhysConstraintSetup::LinearYLimitType");
static_assert(offsetof(FAnimPhysConstraintSetup, LinearZLimitType) == 2, "Offset mismatch for FAnimPhysConstraintSetup::LinearZLimitType");
static_assert(offsetof(FAnimPhysConstraintSetup, LinearAxesMin) == 8, "Offset mismatch for FAnimPhysConstraintSetup::LinearAxesMin");
static_assert(offsetof(FAnimPhysConstraintSetup, LinearAxesMax) == 32, "Offset mismatch for FAnimPhysConstraintSetup::LinearAxesMax");
static_assert(offsetof(FAnimPhysConstraintSetup, AngularConstraintType) == 56, "Offset mismatch for FAnimPhysConstraintSetup::AngularConstraintType");
static_assert(offsetof(FAnimPhysConstraintSetup, TwistAxis) == 57, "Offset mismatch for FAnimPhysConstraintSetup::TwistAxis");
static_assert(offsetof(FAnimPhysConstraintSetup, AngularTargetAxis) == 58, "Offset mismatch for FAnimPhysConstraintSetup::AngularTargetAxis");
static_assert(offsetof(FAnimPhysConstraintSetup, ConeAngle) == 60, "Offset mismatch for FAnimPhysConstraintSetup::ConeAngle");
static_assert(offsetof(FAnimPhysConstraintSetup, AngularLimitsMin) == 64, "Offset mismatch for FAnimPhysConstraintSetup::AngularLimitsMin");
static_assert(offsetof(FAnimPhysConstraintSetup, AngularLimitsMax) == 88, "Offset mismatch for FAnimPhysConstraintSetup::AngularLimitsMax");
static_assert(offsetof(FAnimPhysConstraintSetup, AngularTarget) == 112, "Offset mismatch for FAnimPhysConstraintSetup::AngularTarget");

// /Script/AnimGraphRuntime.AnimPhysPlanarLimit
// Kind: ScriptStruct; super: none
struct FAnimPhysPlanarLimit
{
public:
    std::uint8_t DrivingBone[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlaneTransform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimPhysPlanarLimit, DrivingBone) == 0, "Offset mismatch for FAnimPhysPlanarLimit::DrivingBone");
static_assert(offsetof(FAnimPhysPlanarLimit, PlaneTransform) == 16, "Offset mismatch for FAnimPhysPlanarLimit::PlaneTransform");

// /Script/AnimGraphRuntime.AnimPhysSimSpaceSettings
// Kind: ScriptStruct; super: none
struct FAnimPhysSimSpaceSettings
{
public:
    float SimSpaceAngularAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxAngularVelocity; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxAngularAcceleration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t ExternalAngularVelocity[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimPhysSimSpaceSettings, SimSpaceAngularAlpha) == 0, "Offset mismatch for FAnimPhysSimSpaceSettings::SimSpaceAngularAlpha");
static_assert(offsetof(FAnimPhysSimSpaceSettings, MaxAngularVelocity) == 4, "Offset mismatch for FAnimPhysSimSpaceSettings::MaxAngularVelocity");
static_assert(offsetof(FAnimPhysSimSpaceSettings, MaxAngularAcceleration) == 8, "Offset mismatch for FAnimPhysSimSpaceSettings::MaxAngularAcceleration");
static_assert(offsetof(FAnimPhysSimSpaceSettings, ExternalAngularVelocity) == 16, "Offset mismatch for FAnimPhysSimSpaceSettings::ExternalAngularVelocity");

// /Script/AnimGraphRuntime.AnimPhysSphericalLimit
// Kind: ScriptStruct; super: none
struct FAnimPhysSphericalLimit
{
public:
    std::uint8_t DrivingBone[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SphereLocalOffset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float LimitRadius; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LimitType; // 0x002C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimPhysSphericalLimit, DrivingBone) == 0, "Offset mismatch for FAnimPhysSphericalLimit::DrivingBone");
static_assert(offsetof(FAnimPhysSphericalLimit, SphereLocalOffset) == 16, "Offset mismatch for FAnimPhysSphericalLimit::SphereLocalOffset");
static_assert(offsetof(FAnimPhysSphericalLimit, LimitRadius) == 40, "Offset mismatch for FAnimPhysSphericalLimit::LimitRadius");
static_assert(offsetof(FAnimPhysSphericalLimit, LimitType) == 44, "Offset mismatch for FAnimPhysSphericalLimit::LimitType");

// /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
// Kind: ScriptStruct; super: AnimInstanceProxy
struct FAnimSequencerInstanceProxy
{
public:
    std::uint8_t Pad_0000[0x3F0]; // 0x0000
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x03F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FAnimSequencerInstanceProxy, SlotGroupInertializationRequestDataMap) == 1008, "Offset mismatch for FAnimSequencerInstanceProxy::SlotGroupInertializationRequestDataMap");

// /Script/AnimGraphRuntime.AnimationStateMachineReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FAnimationStateMachineReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.AnimationStateResultReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FAnimationStateResultReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.BlendBoneByChannelEntry
// Kind: ScriptStruct; super: none
struct FBlendBoneByChannelEntry
{
public:
    std::uint8_t SourceBone[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t TargetBone[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t bBlendTranslation; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlendRotation; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlendScale; // 0x001A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBlendBoneByChannelEntry, SourceBone) == 0, "Offset mismatch for FBlendBoneByChannelEntry::SourceBone");
static_assert(offsetof(FBlendBoneByChannelEntry, TargetBone) == 12, "Offset mismatch for FBlendBoneByChannelEntry::TargetBone");
static_assert(offsetof(FBlendBoneByChannelEntry, bBlendTranslation) == 24, "Offset mismatch for FBlendBoneByChannelEntry::bBlendTranslation");
static_assert(offsetof(FBlendBoneByChannelEntry, bBlendRotation) == 25, "Offset mismatch for FBlendBoneByChannelEntry::bBlendRotation");
static_assert(offsetof(FBlendBoneByChannelEntry, bBlendScale) == 26, "Offset mismatch for FBlendBoneByChannelEntry::bBlendScale");

// /Script/AnimGraphRuntime.BlendListBaseReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FBlendListBaseReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.BlendSpacePlayerReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FBlendSpacePlayerReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.BlendSpaceReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FBlendSpaceReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.Constraint
// Kind: ScriptStruct; super: none
struct FConstraint
{
public:
    std::uint8_t TargetBone[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t OffsetOption; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t TransformType; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t PerAxis[0x1]; // 0x000E (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConstraint, TargetBone) == 0, "Offset mismatch for FConstraint::TargetBone");
static_assert(offsetof(FConstraint, OffsetOption) == 12, "Offset mismatch for FConstraint::OffsetOption");
static_assert(offsetof(FConstraint, TransformType) == 13, "Offset mismatch for FConstraint::TransformType");
static_assert(offsetof(FConstraint, PerAxis) == 14, "Offset mismatch for FConstraint::PerAxis");

// /Script/AnimGraphRuntime.IKChain
// Kind: ScriptStruct; super: none
struct FIKChain
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.IKChainLink
// Kind: ScriptStruct; super: none
struct FIKChainLink
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.IKFootPelvisPullDownSolver
// Kind: ScriptStruct; super: none
struct FIKFootPelvisPullDownSolver
{
public:
    std::uint8_t PelvisAdjustmentInterp[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    double PelvisAdjustmentInterpAlpha; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    double PelvisAdjustmentMaxDistance; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double PelvisAdjustmentErrorTolerance; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::int32_t PelvisAdjustmentMaxIter; // 0x0078 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FIKFootPelvisPullDownSolver, PelvisAdjustmentInterp) == 0, "Offset mismatch for FIKFootPelvisPullDownSolver::PelvisAdjustmentInterp");
static_assert(offsetof(FIKFootPelvisPullDownSolver, PelvisAdjustmentInterpAlpha) == 96, "Offset mismatch for FIKFootPelvisPullDownSolver::PelvisAdjustmentInterpAlpha");
static_assert(offsetof(FIKFootPelvisPullDownSolver, PelvisAdjustmentMaxDistance) == 104, "Offset mismatch for FIKFootPelvisPullDownSolver::PelvisAdjustmentMaxDistance");
static_assert(offsetof(FIKFootPelvisPullDownSolver, PelvisAdjustmentErrorTolerance) == 112, "Offset mismatch for FIKFootPelvisPullDownSolver::PelvisAdjustmentErrorTolerance");
static_assert(offsetof(FIKFootPelvisPullDownSolver, PelvisAdjustmentMaxIter) == 120, "Offset mismatch for FIKFootPelvisPullDownSolver::PelvisAdjustmentMaxIter");

// /Script/AnimGraphRuntime.LayeredBoneBlendReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FLayeredBoneBlendReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.LinkedAnimGraphReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FLinkedAnimGraphReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.MirrorAnimNodeReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FMirrorAnimNodeReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.ModifyCurveAnimNodeReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FModifyCurveAnimNodeReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.PoseDriverTarget
// Kind: ScriptStruct; super: none
struct FPoseDriverTarget
{
public:
    TArray<void*> BoneTransforms; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetRotation[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float TargetScale; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DistanceMethod; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t FunctionType; // 0x002D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyCustomCurve; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x002F
    std::uint8_t CustomCurve[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    FName DrivenName; // 0x0070 (Size: 0x8, Type: NameProperty)
    std::uint8_t bIsHidden; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPoseDriverTarget, BoneTransforms) == 0, "Offset mismatch for FPoseDriverTarget::BoneTransforms");
static_assert(offsetof(FPoseDriverTarget, TargetRotation) == 16, "Offset mismatch for FPoseDriverTarget::TargetRotation");
static_assert(offsetof(FPoseDriverTarget, TargetScale) == 40, "Offset mismatch for FPoseDriverTarget::TargetScale");
static_assert(offsetof(FPoseDriverTarget, DistanceMethod) == 44, "Offset mismatch for FPoseDriverTarget::DistanceMethod");
static_assert(offsetof(FPoseDriverTarget, FunctionType) == 45, "Offset mismatch for FPoseDriverTarget::FunctionType");
static_assert(offsetof(FPoseDriverTarget, bApplyCustomCurve) == 46, "Offset mismatch for FPoseDriverTarget::bApplyCustomCurve");
static_assert(offsetof(FPoseDriverTarget, CustomCurve) == 48, "Offset mismatch for FPoseDriverTarget::CustomCurve");
static_assert(offsetof(FPoseDriverTarget, DrivenName) == 112, "Offset mismatch for FPoseDriverTarget::DrivenName");
static_assert(offsetof(FPoseDriverTarget, bIsHidden) == 120, "Offset mismatch for FPoseDriverTarget::bIsHidden");

// /Script/AnimGraphRuntime.PoseDriverTransform
// Kind: ScriptStruct; super: none
struct FPoseDriverTransform
{
public:
    std::uint8_t TargetTranslation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetRotation[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPoseDriverTransform, TargetTranslation) == 0, "Offset mismatch for FPoseDriverTransform::TargetTranslation");
static_assert(offsetof(FPoseDriverTransform, TargetRotation) == 24, "Offset mismatch for FPoseDriverTransform::TargetRotation");

// /Script/AnimGraphRuntime.PositionHistory
// Kind: ScriptStruct; super: none
struct FPositionHistory
{
public:
    TArray<void*> Positions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float Range; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPositionHistory, Positions) == 0, "Offset mismatch for FPositionHistory::Positions");
static_assert(offsetof(FPositionHistory, Range) == 16, "Offset mismatch for FPositionHistory::Range");

// /Script/AnimGraphRuntime.RBFEntry
// Kind: ScriptStruct; super: none
struct FRBFEntry
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRBFEntry, Values) == 0, "Offset mismatch for FRBFEntry::Values");

// /Script/AnimGraphRuntime.RBFParams
// Kind: ScriptStruct; super: none
struct FRBFParams
{
public:
    std::int32_t TargetDimensions; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t SolverType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float Radius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutomaticRadius; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Function; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t DistanceMethod; // 0x000E (Size: 0x1, Type: EnumProperty)
    std::uint8_t TwistAxis; // 0x000F (Size: 0x1, Type: ByteProperty)
    float WeightThreshold; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NormalizeMethod; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    std::uint8_t MedianReference[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float MedianMin; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MedianMax; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRBFParams, TargetDimensions) == 0, "Offset mismatch for FRBFParams::TargetDimensions");
static_assert(offsetof(FRBFParams, SolverType) == 4, "Offset mismatch for FRBFParams::SolverType");
static_assert(offsetof(FRBFParams, Radius) == 8, "Offset mismatch for FRBFParams::Radius");
static_assert(offsetof(FRBFParams, bAutomaticRadius) == 12, "Offset mismatch for FRBFParams::bAutomaticRadius");
static_assert(offsetof(FRBFParams, Function) == 13, "Offset mismatch for FRBFParams::Function");
static_assert(offsetof(FRBFParams, DistanceMethod) == 14, "Offset mismatch for FRBFParams::DistanceMethod");
static_assert(offsetof(FRBFParams, TwistAxis) == 15, "Offset mismatch for FRBFParams::TwistAxis");
static_assert(offsetof(FRBFParams, WeightThreshold) == 16, "Offset mismatch for FRBFParams::WeightThreshold");
static_assert(offsetof(FRBFParams, NormalizeMethod) == 20, "Offset mismatch for FRBFParams::NormalizeMethod");
static_assert(offsetof(FRBFParams, MedianReference) == 24, "Offset mismatch for FRBFParams::MedianReference");
static_assert(offsetof(FRBFParams, MedianMin) == 48, "Offset mismatch for FRBFParams::MedianMin");
static_assert(offsetof(FRBFParams, MedianMax) == 52, "Offset mismatch for FRBFParams::MedianMax");

// /Script/AnimGraphRuntime.RBFTarget
// Kind: ScriptStruct; super: RBFEntry
struct FRBFTarget
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float ScaleFactor; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyCustomCurve; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    std::uint8_t CustomCurve[0x40]; // 0x0018 (Size: 0x40, Type: StructProperty)
    std::uint8_t DistanceMethod; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FunctionType; // 0x0059 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRBFTarget, ScaleFactor) == 16, "Offset mismatch for FRBFTarget::ScaleFactor");
static_assert(offsetof(FRBFTarget, bApplyCustomCurve) == 20, "Offset mismatch for FRBFTarget::bApplyCustomCurve");
static_assert(offsetof(FRBFTarget, CustomCurve) == 24, "Offset mismatch for FRBFTarget::CustomCurve");
static_assert(offsetof(FRBFTarget, DistanceMethod) == 88, "Offset mismatch for FRBFTarget::DistanceMethod");
static_assert(offsetof(FRBFTarget, FunctionType) == 89, "Offset mismatch for FRBFTarget::FunctionType");

// /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
// Kind: ScriptStruct; super: none
struct FRandomPlayerSequenceEntry
{
public:
    void* Sequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float ChanceToPlay; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinLoopCount; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxLoopCount; // 0x0010 (Size: 0x4, Type: IntProperty)
    float MinPlayrate; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxPlayrate; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::uint8_t BlendIn[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRandomPlayerSequenceEntry, Sequence) == 0, "Offset mismatch for FRandomPlayerSequenceEntry::Sequence");
static_assert(offsetof(FRandomPlayerSequenceEntry, ChanceToPlay) == 8, "Offset mismatch for FRandomPlayerSequenceEntry::ChanceToPlay");
static_assert(offsetof(FRandomPlayerSequenceEntry, MinLoopCount) == 12, "Offset mismatch for FRandomPlayerSequenceEntry::MinLoopCount");
static_assert(offsetof(FRandomPlayerSequenceEntry, MaxLoopCount) == 16, "Offset mismatch for FRandomPlayerSequenceEntry::MaxLoopCount");
static_assert(offsetof(FRandomPlayerSequenceEntry, MinPlayrate) == 20, "Offset mismatch for FRandomPlayerSequenceEntry::MinPlayrate");
static_assert(offsetof(FRandomPlayerSequenceEntry, MaxPlayrate) == 24, "Offset mismatch for FRandomPlayerSequenceEntry::MaxPlayrate");
static_assert(offsetof(FRandomPlayerSequenceEntry, BlendIn) == 32, "Offset mismatch for FRandomPlayerSequenceEntry::BlendIn");

// /Script/AnimGraphRuntime.ReferenceBoneFrame
// Kind: ScriptStruct; super: none
struct FReferenceBoneFrame
{
public:
    std::uint8_t bone[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Axis[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReferenceBoneFrame, bone) == 0, "Offset mismatch for FReferenceBoneFrame::bone");
static_assert(offsetof(FReferenceBoneFrame, Axis) == 16, "Offset mismatch for FReferenceBoneFrame::Axis");

// /Script/AnimGraphRuntime.RigidBodyAnimNodeReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FRigidBodyAnimNodeReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.RotationLimit
// Kind: ScriptStruct; super: none
struct FRotationLimit
{
public:
    std::uint8_t LimitMin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LimitMax[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRotationLimit, LimitMin) == 0, "Offset mismatch for FRotationLimit::LimitMin");
static_assert(offsetof(FRotationLimit, LimitMax) == 24, "Offset mismatch for FRotationLimit::LimitMax");

// /Script/AnimGraphRuntime.RotationRetargetingInfo
// Kind: ScriptStruct; super: none
struct FRotationRetargetingInfo
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0xF]; // 0x0001
    std::uint8_t Source[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Target[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t RotationComponent; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D1
    std::uint8_t TwistAxis[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseAbsoluteAngle; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00F1
    float SourceMinimum; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float SourceMaximum; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float TargetMinimum; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float TargetMaximum; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EasingType; // 0x0104 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0105
    std::uint8_t CustomCurve[0x48]; // 0x0108 (Size: 0x48, Type: StructProperty)
    std::uint8_t bFlipEasing; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0151
    float EasingWeight; // 0x0154 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClamp; // 0x0158 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRotationRetargetingInfo, bEnabled) == 0, "Offset mismatch for FRotationRetargetingInfo::bEnabled");
static_assert(offsetof(FRotationRetargetingInfo, Source) == 16, "Offset mismatch for FRotationRetargetingInfo::Source");
static_assert(offsetof(FRotationRetargetingInfo, Target) == 112, "Offset mismatch for FRotationRetargetingInfo::Target");
static_assert(offsetof(FRotationRetargetingInfo, RotationComponent) == 208, "Offset mismatch for FRotationRetargetingInfo::RotationComponent");
static_assert(offsetof(FRotationRetargetingInfo, TwistAxis) == 216, "Offset mismatch for FRotationRetargetingInfo::TwistAxis");
static_assert(offsetof(FRotationRetargetingInfo, bUseAbsoluteAngle) == 240, "Offset mismatch for FRotationRetargetingInfo::bUseAbsoluteAngle");
static_assert(offsetof(FRotationRetargetingInfo, SourceMinimum) == 244, "Offset mismatch for FRotationRetargetingInfo::SourceMinimum");
static_assert(offsetof(FRotationRetargetingInfo, SourceMaximum) == 248, "Offset mismatch for FRotationRetargetingInfo::SourceMaximum");
static_assert(offsetof(FRotationRetargetingInfo, TargetMinimum) == 252, "Offset mismatch for FRotationRetargetingInfo::TargetMinimum");
static_assert(offsetof(FRotationRetargetingInfo, TargetMaximum) == 256, "Offset mismatch for FRotationRetargetingInfo::TargetMaximum");
static_assert(offsetof(FRotationRetargetingInfo, EasingType) == 260, "Offset mismatch for FRotationRetargetingInfo::EasingType");
static_assert(offsetof(FRotationRetargetingInfo, CustomCurve) == 264, "Offset mismatch for FRotationRetargetingInfo::CustomCurve");
static_assert(offsetof(FRotationRetargetingInfo, bFlipEasing) == 336, "Offset mismatch for FRotationRetargetingInfo::bFlipEasing");
static_assert(offsetof(FRotationRetargetingInfo, EasingWeight) == 340, "Offset mismatch for FRotationRetargetingInfo::EasingWeight");
static_assert(offsetof(FRotationRetargetingInfo, bClamp) == 344, "Offset mismatch for FRotationRetargetingInfo::bClamp");

// /Script/AnimGraphRuntime.SequenceEvaluatorReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FSequenceEvaluatorReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.SequencePlayerReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FSequencePlayerReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.SimSpaceSettings
// Kind: ScriptStruct; super: none
struct FSimSpaceSettings
{
public:
    float WorldAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float VelocityScaleZ; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DampingAlpha; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxLinearVelocity; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxAngularVelocity; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxLinearAcceleration; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxAngularAcceleration; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::uint8_t ExternalLinearDragV[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalLinearVelocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalAngularVelocity[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSimSpaceSettings, WorldAlpha) == 0, "Offset mismatch for FSimSpaceSettings::WorldAlpha");
static_assert(offsetof(FSimSpaceSettings, VelocityScaleZ) == 4, "Offset mismatch for FSimSpaceSettings::VelocityScaleZ");
static_assert(offsetof(FSimSpaceSettings, DampingAlpha) == 8, "Offset mismatch for FSimSpaceSettings::DampingAlpha");
static_assert(offsetof(FSimSpaceSettings, MaxLinearVelocity) == 12, "Offset mismatch for FSimSpaceSettings::MaxLinearVelocity");
static_assert(offsetof(FSimSpaceSettings, MaxAngularVelocity) == 16, "Offset mismatch for FSimSpaceSettings::MaxAngularVelocity");
static_assert(offsetof(FSimSpaceSettings, MaxLinearAcceleration) == 20, "Offset mismatch for FSimSpaceSettings::MaxLinearAcceleration");
static_assert(offsetof(FSimSpaceSettings, MaxAngularAcceleration) == 24, "Offset mismatch for FSimSpaceSettings::MaxAngularAcceleration");
static_assert(offsetof(FSimSpaceSettings, ExternalLinearDragV) == 32, "Offset mismatch for FSimSpaceSettings::ExternalLinearDragV");
static_assert(offsetof(FSimSpaceSettings, ExternalLinearVelocity) == 56, "Offset mismatch for FSimSpaceSettings::ExternalLinearVelocity");
static_assert(offsetof(FSimSpaceSettings, ExternalAngularVelocity) == 80, "Offset mismatch for FSimSpaceSettings::ExternalAngularVelocity");

// /Script/AnimGraphRuntime.SkeletalControlReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FSkeletalControlReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.SplineIKCachedBoneData
// Kind: ScriptStruct; super: none
struct FSplineIKCachedBoneData
{
public:
    std::uint8_t bone[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::int32_t RefSkeletonIndex; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSplineIKCachedBoneData, bone) == 0, "Offset mismatch for FSplineIKCachedBoneData::bone");
static_assert(offsetof(FSplineIKCachedBoneData, RefSkeletonIndex) == 12, "Offset mismatch for FSplineIKCachedBoneData::RefSkeletonIndex");

// /Script/AnimGraphRuntime.WarpingVectorValue
// Kind: ScriptStruct; super: none
struct FWarpingVectorValue
{
public:
    std::uint8_t Mode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWarpingVectorValue, Mode) == 0, "Offset mismatch for FWarpingVectorValue::Mode");
static_assert(offsetof(FWarpingVectorValue, Value) == 8, "Offset mismatch for FWarpingVectorValue::Value");

// /Script/AnimGraphRuntime.AnimExecutionContextLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAnimExecutionContextLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.AnimNodeRigidBodyLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAnimNodeRigidBodyLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Kind: Class; super: AnimNotify
class UAnimNotify_PlayMontageNotify
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FName NotifyName; // 0x0038 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UAnimNotify_PlayMontageNotify, NotifyName) == 56, "Offset mismatch for UAnimNotify_PlayMontageNotify::NotifyName");

// /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Kind: Class; super: AnimNotifyState
class UAnimNotify_PlayMontageNotifyWindow
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FName NotifyName; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UAnimNotify_PlayMontageNotifyWindow, NotifyName) == 48, "Offset mismatch for UAnimNotify_PlayMontageNotifyWindow::NotifyName");

// /Script/AnimGraphRuntime.AnimSequencerInstance
// Kind: Class; super: AnimInstance
class UAnimSequencerInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CurrentSkeleton; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RootMotionMode; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bPropagateNotifiesToLinkedInstances; // 0x0031 (Size: 0x1, Type: BoolProperty)
    // 0x0031 BoolProperty bReceiveNotifiesFromLinkedInstances (shared storage)
    // 0x0031 BoolProperty bUseMainInstanceMontageEvaluationData (shared storage)
    // 0x0031 BoolProperty bUseMultiThreadedAnimationUpdate (shared storage)
    // 0x0031 BoolProperty bUsingCopyPoseFromMesh (shared storage)
    std::uint8_t bQueueMontageEvents; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0033
    FMulticastInlineDelegate OnMontageBlendingOut; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageBlendedIn; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageStarted; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageEnded; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageSectionChanged; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0098
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x00B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x48]; // 0x00C8
    std::uint8_t NotifyQueue[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    TArray<void*> ActiveAnimNotifyState; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveAnimNotifyEventReference; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAnimSequencerInstance, CurrentSkeleton) == 40, "Offset mismatch for UAnimSequencerInstance::CurrentSkeleton");
static_assert(offsetof(UAnimSequencerInstance, RootMotionMode) == 48, "Offset mismatch for UAnimSequencerInstance::RootMotionMode");
static_assert(offsetof(UAnimSequencerInstance, bPropagateNotifiesToLinkedInstances) == 49, "Offset mismatch for UAnimSequencerInstance::bPropagateNotifiesToLinkedInstances");
static_assert(offsetof(UAnimSequencerInstance, bQueueMontageEvents) == 50, "Offset mismatch for UAnimSequencerInstance::bQueueMontageEvents");
static_assert(offsetof(UAnimSequencerInstance, OnMontageBlendingOut) == 56, "Offset mismatch for UAnimSequencerInstance::OnMontageBlendingOut");
static_assert(offsetof(UAnimSequencerInstance, OnMontageBlendedIn) == 72, "Offset mismatch for UAnimSequencerInstance::OnMontageBlendedIn");
static_assert(offsetof(UAnimSequencerInstance, OnMontageStarted) == 88, "Offset mismatch for UAnimSequencerInstance::OnMontageStarted");
static_assert(offsetof(UAnimSequencerInstance, OnMontageEnded) == 104, "Offset mismatch for UAnimSequencerInstance::OnMontageEnded");
static_assert(offsetof(UAnimSequencerInstance, OnAllMontageInstancesEnded) == 120, "Offset mismatch for UAnimSequencerInstance::OnAllMontageInstancesEnded");
static_assert(offsetof(UAnimSequencerInstance, OnMontageSectionChanged) == 136, "Offset mismatch for UAnimSequencerInstance::OnMontageSectionChanged");
static_assert(offsetof(UAnimSequencerInstance, SlotGroupInertializationRequestDataMap) == 184, "Offset mismatch for UAnimSequencerInstance::SlotGroupInertializationRequestDataMap");
static_assert(offsetof(UAnimSequencerInstance, NotifyQueue) == 272, "Offset mismatch for UAnimSequencerInstance::NotifyQueue");
static_assert(offsetof(UAnimSequencerInstance, ActiveAnimNotifyState) == 328, "Offset mismatch for UAnimSequencerInstance::ActiveAnimNotifyState");
static_assert(offsetof(UAnimSequencerInstance, ActiveAnimNotifyEventReference) == 344, "Offset mismatch for UAnimSequencerInstance::ActiveAnimNotifyEventReference");

// /Script/AnimGraphRuntime.AnimationStateMachineLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAnimationStateMachineLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.BlendListBaseLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlendListBaseLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.BlendSpaceLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlendSpaceLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.BlendSpacePlayerLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlendSpacePlayerLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.KismetAnimationLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UKismetAnimationLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.LayeredBoneBlendLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULayeredBoneBlendLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.LinkedAnimGraphLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULinkedAnimGraphLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.MirrorAnimLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMirrorAnimLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.ModifyCurveAnimLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UModifyCurveAnimLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.PlayMontageCallbackProxy
// Kind: Class; super: Object
class UPlayMontageCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnCompleted; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBlendOut; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterrupted; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNotifyBegin; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNotifyEnd; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPlayMontageCallbackProxy, OnCompleted) == 40, "Offset mismatch for UPlayMontageCallbackProxy::OnCompleted");
static_assert(offsetof(UPlayMontageCallbackProxy, OnBlendOut) == 56, "Offset mismatch for UPlayMontageCallbackProxy::OnBlendOut");
static_assert(offsetof(UPlayMontageCallbackProxy, OnInterrupted) == 72, "Offset mismatch for UPlayMontageCallbackProxy::OnInterrupted");
static_assert(offsetof(UPlayMontageCallbackProxy, OnNotifyBegin) == 88, "Offset mismatch for UPlayMontageCallbackProxy::OnNotifyBegin");
static_assert(offsetof(UPlayMontageCallbackProxy, OnNotifyEnd) == 104, "Offset mismatch for UPlayMontageCallbackProxy::OnNotifyEnd");

// /Script/AnimGraphRuntime.SequenceEvaluatorLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USequenceEvaluatorLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.SequencePlayerLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USequencePlayerLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.SequencerAnimationOverride
// Kind: Class; super: Interface
class USequencerAnimationOverride
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.SequencerAnimationSupport
// Kind: Class; super: Interface
class USequencerAnimationSupport
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimGraphRuntime.SkeletalControlLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USkeletalControlLibrary
{
public:
    std::uint8_t Opaque[1];
};
