/**
 * decamp dumper generated SDK
 * Package: /Script/UAFAnimNode
 */
#pragma once
#include "Basic.h"

// /Script/UAFAnimNode.PhaseValue
// Kind: ScriptStruct; super: none
struct FPhaseValue
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsValid; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPhaseValue, Value) == 0, "Offset mismatch for FPhaseValue::Value");
static_assert(offsetof(FPhaseValue, bIsValid) == 4, "Offset mismatch for FPhaseValue::bIsValid");

// /Script/UAFAnimNode.RigUnit_RunAnimNode_v1
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_RunAnimNode_v1
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t AnimNode[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::int32_t LOD; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t ReferencePose[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    FName AttributeSet; // 0x0028 (Size: 0x8, Type: NameProperty)
    std::uint8_t Result[0xE0]; // 0x0030 (Size: 0xE0, Type: StructProperty)
    std::uint8_t WorkData[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_RunAnimNode_v1, AnimNode) == 8, "Offset mismatch for FRigUnit_RunAnimNode_v1::AnimNode");
static_assert(offsetof(FRigUnit_RunAnimNode_v1, LOD) == 24, "Offset mismatch for FRigUnit_RunAnimNode_v1::LOD");
static_assert(offsetof(FRigUnit_RunAnimNode_v1, ReferencePose) == 32, "Offset mismatch for FRigUnit_RunAnimNode_v1::ReferencePose");
static_assert(offsetof(FRigUnit_RunAnimNode_v1, AttributeSet) == 40, "Offset mismatch for FRigUnit_RunAnimNode_v1::AttributeSet");
static_assert(offsetof(FRigUnit_RunAnimNode_v1, Result) == 48, "Offset mismatch for FRigUnit_RunAnimNode_v1::Result");
static_assert(offsetof(FRigUnit_RunAnimNode_v1, WorkData) == 272, "Offset mismatch for FRigUnit_RunAnimNode_v1::WorkData");
static_assert(offsetof(FRigUnit_RunAnimNode_v1, ExecuteContext) == 304, "Offset mismatch for FRigUnit_RunAnimNode_v1::ExecuteContext");

// /Script/UAFAnimNode.RigUnit_RunAnimNode_v2
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_RunAnimNode_v2
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t AnimNode[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    FName AttributeSet; // 0x0018 (Size: 0x8, Type: NameProperty)
    std::uint8_t Result[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t WorkData[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_RunAnimNode_v2, AnimNode) == 8, "Offset mismatch for FRigUnit_RunAnimNode_v2::AnimNode");
static_assert(offsetof(FRigUnit_RunAnimNode_v2, AttributeSet) == 24, "Offset mismatch for FRigUnit_RunAnimNode_v2::AttributeSet");
static_assert(offsetof(FRigUnit_RunAnimNode_v2, Result) == 32, "Offset mismatch for FRigUnit_RunAnimNode_v2::Result");
static_assert(offsetof(FRigUnit_RunAnimNode_v2, WorkData) == 48, "Offset mismatch for FRigUnit_RunAnimNode_v2::WorkData");
static_assert(offsetof(FRigUnit_RunAnimNode_v2, ExecuteContext) == 80, "Offset mismatch for FRigUnit_RunAnimNode_v2::ExecuteContext");

// /Script/UAFAnimNode.RigUnit_UAFGetNotifyValueBundle
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_UAFGetNotifyValueBundle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_UAFGetNotifyValueBundle, Value) == 8, "Offset mismatch for FRigUnit_UAFGetNotifyValueBundle::Value");
static_assert(offsetof(FRigUnit_UAFGetNotifyValueBundle, ExecuteContext) == 32, "Offset mismatch for FRigUnit_UAFGetNotifyValueBundle::ExecuteContext");

// /Script/UAFAnimNode.RigUnit_UAFGetTimelineState
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_UAFGetTimelineState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TimelineState[0x1C]; // 0x0008 (Size: 0x1C, Type: StructProperty)
    std::uint8_t bValid; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_UAFGetTimelineState, TimelineState) == 8, "Offset mismatch for FRigUnit_UAFGetTimelineState::TimelineState");
static_assert(offsetof(FRigUnit_UAFGetTimelineState, bValid) == 36, "Offset mismatch for FRigUnit_UAFGetTimelineState::bValid");

// /Script/UAFAnimNode.RunAnimNodeWorkData_v1
// Kind: ScriptStruct; super: none
struct FRunAnimNodeWorkData_v1
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimNode.RunAnimNodeWorkData_v2
// Kind: ScriptStruct; super: none
struct FRunAnimNodeWorkData_v2
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimNode.UAFAnimNodeDesc
// Kind: ScriptStruct; super: none
struct FUAFAnimNodeDesc
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimNode.UAFAnimNodeDescEx
// Kind: ScriptStruct; super: none
struct FUAFAnimNodeDescEx
{
public:
    std::uint8_t BakedNode[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFAnimNodeDescEx, BakedNode) == 0, "Offset mismatch for FUAFAnimNodeDescEx::BakedNode");

// /Script/UAFAnimNode.UAFAnimNodeReference
// Kind: ScriptStruct; super: none
struct FUAFAnimNodeReference
{
public:
    std::uint8_t NodeData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFAnimNodeReference, NodeData) == 0, "Offset mismatch for FUAFAnimNodeReference::NodeData");

// /Script/UAFAnimNode.UAFAnimNodeTimelineState
// Kind: ScriptStruct; super: none
struct FUAFAnimNodeTimelineState
{
public:
    float CurrentTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentPhase[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t PhaseVelocity[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsLooping; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasLooped; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasFinished; // 0x001A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFAnimNodeTimelineState, CurrentTime) == 0, "Offset mismatch for FUAFAnimNodeTimelineState::CurrentTime");
static_assert(offsetof(FUAFAnimNodeTimelineState, duration) == 4, "Offset mismatch for FUAFAnimNodeTimelineState::duration");
static_assert(offsetof(FUAFAnimNodeTimelineState, CurrentPhase) == 8, "Offset mismatch for FUAFAnimNodeTimelineState::CurrentPhase");
static_assert(offsetof(FUAFAnimNodeTimelineState, PhaseVelocity) == 16, "Offset mismatch for FUAFAnimNodeTimelineState::PhaseVelocity");
static_assert(offsetof(FUAFAnimNodeTimelineState, bIsLooping) == 24, "Offset mismatch for FUAFAnimNodeTimelineState::bIsLooping");
static_assert(offsetof(FUAFAnimNodeTimelineState, bHasLooped) == 25, "Offset mismatch for FUAFAnimNodeTimelineState::bHasLooped");
static_assert(offsetof(FUAFAnimNodeTimelineState, bHasFinished) == 26, "Offset mismatch for FUAFAnimNodeTimelineState::bHasFinished");

// /Script/UAFAnimNode.UAFAnimOp
// Kind: ScriptStruct; super: none
struct FUAFAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFAnimOp, NumInputs) == 8, "Offset mismatch for FUAFAnimOp::NumInputs");
static_assert(offsetof(FUAFAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFAnimOpListBase
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFAnimOpListBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFAnimOpListBase, NumInputs) == 8, "Offset mismatch for FUAFAnimOpListBase::NumInputs");
static_assert(offsetof(FUAFAnimOpListBase, NumOutputs) == 9, "Offset mismatch for FUAFAnimOpListBase::NumOutputs");

// /Script/UAFAnimNode.UAFAnimStructDebugProperties
// Kind: ScriptStruct; super: none
struct FUAFAnimStructDebugProperties
{
public:
    std::int64_t ID; // 0x0000 (Size: 0x8, Type: Int64Property)
    std::int64_t GraphInstanceId; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FUAFAnimStructDebugProperties, ID) == 0, "Offset mismatch for FUAFAnimStructDebugProperties::ID");
static_assert(offsetof(FUAFAnimStructDebugProperties, GraphInstanceId) == 8, "Offset mismatch for FUAFAnimStructDebugProperties::GraphInstanceId");

// /Script/UAFAnimNode.UAFAnimTreeNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFAnimTreeNodeDesc
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* AnimTree; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFAnimTreeNodeDesc, AnimTree) == 16, "Offset mismatch for FUAFAnimTreeNodeDesc::AnimTree");

// /Script/UAFAnimNode.UAFAppendNotifiesAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFAppendNotifiesAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Notifies; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUAFAppendNotifiesAnimOp, Notifies) == 16, "Offset mismatch for FUAFAppendNotifiesAnimOp::Notifies");

// /Script/UAFAnimNode.UAFApplyAdditiveAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFApplyAdditiveAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* OptionalBlendMask; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float AdditiveWeight; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFApplyAdditiveAnimOp, OptionalBlendMask) == 16, "Offset mismatch for FUAFApplyAdditiveAnimOp::OptionalBlendMask");
static_assert(offsetof(FUAFApplyAdditiveAnimOp, AdditiveWeight) == 24, "Offset mismatch for FUAFApplyAdditiveAnimOp::AdditiveWeight");

// /Script/UAFAnimNode.UAFApplyAdditiveNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFApplyAdditiveNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BaseNode[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t AdditiveNode[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t AdditiveWeight[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* BlendMask; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFApplyAdditiveNodeDesc, BaseNode) == 8, "Offset mismatch for FUAFApplyAdditiveNodeDesc::BaseNode");
static_assert(offsetof(FUAFApplyAdditiveNodeDesc, AdditiveNode) == 24, "Offset mismatch for FUAFApplyAdditiveNodeDesc::AdditiveNode");
static_assert(offsetof(FUAFApplyAdditiveNodeDesc, AdditiveWeight) == 40, "Offset mismatch for FUAFApplyAdditiveNodeDesc::AdditiveWeight");
static_assert(offsetof(FUAFApplyAdditiveNodeDesc, BlendMask) == 56, "Offset mismatch for FUAFApplyAdditiveNodeDesc::BlendMask");

// /Script/UAFAnimNode.UAFAssetPlayerNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFAssetPlayerNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Asset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t EvaluationFrequency; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    std::uint8_t TRANSITION[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFAssetPlayerNodeDesc, Asset) == 8, "Offset mismatch for FUAFAssetPlayerNodeDesc::Asset");
static_assert(offsetof(FUAFAssetPlayerNodeDesc, EvaluationFrequency) == 32, "Offset mismatch for FUAFAssetPlayerNodeDesc::EvaluationFrequency");
static_assert(offsetof(FUAFAssetPlayerNodeDesc, TRANSITION) == 40, "Offset mismatch for FUAFAssetPlayerNodeDesc::TRANSITION");

// /Script/UAFAnimNode.UAFBlendAccumulateAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFBlendAccumulateAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float ScaleFactor; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFBlendAccumulateAnimOp, ScaleFactor) == 16, "Offset mismatch for FUAFBlendAccumulateAnimOp::ScaleFactor");

// /Script/UAFAnimNode.UAFBlendByBoolNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFBlendByBoolNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BoolValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t EvaluationFrequency; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t TrueNode[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t FalseNode[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t TRANSITION[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFBlendByBoolNodeDesc, BoolValue) == 8, "Offset mismatch for FUAFBlendByBoolNodeDesc::BoolValue");
static_assert(offsetof(FUAFBlendByBoolNodeDesc, EvaluationFrequency) == 24, "Offset mismatch for FUAFBlendByBoolNodeDesc::EvaluationFrequency");
static_assert(offsetof(FUAFBlendByBoolNodeDesc, TrueNode) == 32, "Offset mismatch for FUAFBlendByBoolNodeDesc::TrueNode");
static_assert(offsetof(FUAFBlendByBoolNodeDesc, FalseNode) == 48, "Offset mismatch for FUAFBlendByBoolNodeDesc::FalseNode");
static_assert(offsetof(FUAFBlendByBoolNodeDesc, TRANSITION) == 64, "Offset mismatch for FUAFBlendByBoolNodeDesc::TRANSITION");

// /Script/UAFAnimNode.UAFBlendLayerNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFBlendLayerNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t LayerNodeWeight[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t BaseNode[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t LayerNode[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlendMask[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t BlendOption; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUAFBlendLayerNodeDesc, LayerNodeWeight) == 8, "Offset mismatch for FUAFBlendLayerNodeDesc::LayerNodeWeight");
static_assert(offsetof(FUAFBlendLayerNodeDesc, BaseNode) == 24, "Offset mismatch for FUAFBlendLayerNodeDesc::BaseNode");
static_assert(offsetof(FUAFBlendLayerNodeDesc, LayerNode) == 40, "Offset mismatch for FUAFBlendLayerNodeDesc::LayerNode");
static_assert(offsetof(FUAFBlendLayerNodeDesc, BlendMask) == 56, "Offset mismatch for FUAFBlendLayerNodeDesc::BlendMask");
static_assert(offsetof(FUAFBlendLayerNodeDesc, BlendOption) == 80, "Offset mismatch for FUAFBlendLayerNodeDesc::BlendOption");

// /Script/UAFAnimNode.UAFBlendOverwriteAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFBlendOverwriteAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float ScaleFactor; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFBlendOverwriteAnimOp, ScaleFactor) == 16, "Offset mismatch for FUAFBlendOverwriteAnimOp::ScaleFactor");

// /Script/UAFAnimNode.UAFBlendProfileTransitionDesc
// Kind: ScriptStruct; super: UAFSimpleTransitionDesc
struct FUAFBlendProfileTransitionDesc
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* BlendProfile; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFBlendProfileTransitionDesc, BlendProfile) == 16, "Offset mismatch for FUAFBlendProfileTransitionDesc::BlendProfile");

// /Script/UAFAnimNode.UAFBlendSpacePlayerNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFBlendSpacePlayerNodeDesc
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BlendSpace[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t XAxisSamplePoint[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t YAxisSamplePoint[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t StartPosition[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t LoopMode[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFBlendSpacePlayerNodeDesc, BlendSpace) == 16, "Offset mismatch for FUAFBlendSpacePlayerNodeDesc::BlendSpace");
static_assert(offsetof(FUAFBlendSpacePlayerNodeDesc, XAxisSamplePoint) == 40, "Offset mismatch for FUAFBlendSpacePlayerNodeDesc::XAxisSamplePoint");
static_assert(offsetof(FUAFBlendSpacePlayerNodeDesc, YAxisSamplePoint) == 56, "Offset mismatch for FUAFBlendSpacePlayerNodeDesc::YAxisSamplePoint");
static_assert(offsetof(FUAFBlendSpacePlayerNodeDesc, StartPosition) == 72, "Offset mismatch for FUAFBlendSpacePlayerNodeDesc::StartPosition");
static_assert(offsetof(FUAFBlendSpacePlayerNodeDesc, LoopMode) == 88, "Offset mismatch for FUAFBlendSpacePlayerNodeDesc::LoopMode");

// /Script/UAFAnimNode.UAFBlendTwoAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFBlendTwoAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float DesiredInterpolationAlpha; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaSourceCurveName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::int8_t AlphaCurveInputIndex; // 0x0018 (Size: 0x1, Type: Int8Property)
    std::uint8_t BlendOption; // 0x0019 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUAFBlendTwoAnimOp, DesiredInterpolationAlpha) == 16, "Offset mismatch for FUAFBlendTwoAnimOp::DesiredInterpolationAlpha");
static_assert(offsetof(FUAFBlendTwoAnimOp, AlphaSourceCurveName) == 20, "Offset mismatch for FUAFBlendTwoAnimOp::AlphaSourceCurveName");
static_assert(offsetof(FUAFBlendTwoAnimOp, AlphaCurveInputIndex) == 24, "Offset mismatch for FUAFBlendTwoAnimOp::AlphaCurveInputIndex");
static_assert(offsetof(FUAFBlendTwoAnimOp, BlendOption) == 25, "Offset mismatch for FUAFBlendTwoAnimOp::BlendOption");

// /Script/UAFAnimNode.UAFBlendTwoPerValueAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFBlendTwoPerValueAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float GlobalLinearWeightB; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendOption; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPerValueWeightsSourceChanged; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    void* BlendProfile; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* BlendMask; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFBlendTwoPerValueAnimOp, GlobalLinearWeightB) == 16, "Offset mismatch for FUAFBlendTwoPerValueAnimOp::GlobalLinearWeightB");
static_assert(offsetof(FUAFBlendTwoPerValueAnimOp, BlendOption) == 20, "Offset mismatch for FUAFBlendTwoPerValueAnimOp::BlendOption");
static_assert(offsetof(FUAFBlendTwoPerValueAnimOp, bPerValueWeightsSourceChanged) == 21, "Offset mismatch for FUAFBlendTwoPerValueAnimOp::bPerValueWeightsSourceChanged");
static_assert(offsetof(FUAFBlendTwoPerValueAnimOp, BlendProfile) == 24, "Offset mismatch for FUAFBlendTwoPerValueAnimOp::BlendProfile");
static_assert(offsetof(FUAFBlendTwoPerValueAnimOp, BlendMask) == 32, "Offset mismatch for FUAFBlendTwoPerValueAnimOp::BlendMask");

// /Script/UAFAnimNode.UAFBoneAttributeRequest
// Kind: ScriptStruct; super: UAFPoseAttributeRequest
struct FUAFBoneAttributeRequest
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BoneLabel[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFBoneAttributeRequest, BoneLabel) == 16, "Offset mismatch for FUAFBoneAttributeRequest::BoneLabel");

// /Script/UAFAnimNode.UAFCachePoseAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFCachePoseAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFCachePoseAnimOp, NumInputs) == 8, "Offset mismatch for FUAFCachePoseAnimOp::NumInputs");
static_assert(offsetof(FUAFCachePoseAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFCachePoseAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFCachePoseNodeDesc
// Kind: ScriptStruct; super: UAFModifierAnimNodeDesc
struct FUAFCachePoseNodeDesc
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t CachedPoseName[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t bPushBackOntoStack; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFCachePoseNodeDesc, CachedPoseName) == 24, "Offset mismatch for FUAFCachePoseNodeDesc::CachedPoseName");
static_assert(offsetof(FUAFCachePoseNodeDesc, bPushBackOntoStack) == 40, "Offset mismatch for FUAFCachePoseNodeDesc::bPushBackOntoStack");

// /Script/UAFAnimNode.UAFCallFunctionNodeDesc
// Kind: ScriptStruct; super: UAFModifierAnimNodeDesc
struct FUAFCallFunctionNodeDesc
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t FunctionReference[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t CallSite; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUAFCallFunctionNodeDesc, FunctionReference) == 24, "Offset mismatch for FUAFCallFunctionNodeDesc::FunctionReference");
static_assert(offsetof(FUAFCallFunctionNodeDesc, CallSite) == 48, "Offset mismatch for FUAFCallFunctionNodeDesc::CallSite");

// /Script/UAFAnimNode.UAFCanonicalPhaseMarker
// Kind: ScriptStruct; super: none
struct FUAFCanonicalPhaseMarker
{
public:
    std::uint8_t MarkerName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Phase; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFCanonicalPhaseMarker, MarkerName) == 0, "Offset mismatch for FUAFCanonicalPhaseMarker::MarkerName");
static_assert(offsetof(FUAFCanonicalPhaseMarker, Phase) == 4, "Offset mismatch for FUAFCanonicalPhaseMarker::Phase");

// /Script/UAFAnimNode.UAFCurveSampleRequest
// Kind: ScriptStruct; super: UAFPoseAttributeRequest
struct FUAFCurveSampleRequest
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    FName CurveName; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FUAFCurveSampleRequest, CurveName) == 12, "Offset mismatch for FUAFCurveSampleRequest::CurveName");

// /Script/UAFAnimNode.UAFDeadBlendTransitionDesc
// Kind: ScriptStruct; super: UAFTransitionDesc
struct FUAFDeadBlendTransitionDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float duration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendOption; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t PhaseSync; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000E
    std::uint8_t ExtrapolationSettings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFDeadBlendTransitionDesc, duration) == 8, "Offset mismatch for FUAFDeadBlendTransitionDesc::duration");
static_assert(offsetof(FUAFDeadBlendTransitionDesc, BlendOption) == 12, "Offset mismatch for FUAFDeadBlendTransitionDesc::BlendOption");
static_assert(offsetof(FUAFDeadBlendTransitionDesc, PhaseSync) == 13, "Offset mismatch for FUAFDeadBlendTransitionDesc::PhaseSync");
static_assert(offsetof(FUAFDeadBlendTransitionDesc, ExtrapolationSettings) == 16, "Offset mismatch for FUAFDeadBlendTransitionDesc::ExtrapolationSettings");

// /Script/UAFAnimNode.UAFDecompressAnimSequenceAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFDecompressAnimSequenceAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* AnimSequence; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0018
    float CurrentTime; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float PreviousTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TimeAdvanceResult; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bInterpolate; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExtractTrajectory; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLooping; // 0x0033 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExtractNotifies; // 0x0034 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFDecompressAnimSequenceAnimOp, AnimSequence) == 16, "Offset mismatch for FUAFDecompressAnimSequenceAnimOp::AnimSequence");
static_assert(offsetof(FUAFDecompressAnimSequenceAnimOp, CurrentTime) == 36, "Offset mismatch for FUAFDecompressAnimSequenceAnimOp::CurrentTime");
static_assert(offsetof(FUAFDecompressAnimSequenceAnimOp, PreviousTime) == 40, "Offset mismatch for FUAFDecompressAnimSequenceAnimOp::PreviousTime");
static_assert(offsetof(FUAFDecompressAnimSequenceAnimOp, duration) == 44, "Offset mismatch for FUAFDecompressAnimSequenceAnimOp::duration");
static_assert(offsetof(FUAFDecompressAnimSequenceAnimOp, TimeAdvanceResult) == 48, "Offset mismatch for FUAFDecompressAnimSequenceAnimOp::TimeAdvanceResult");
static_assert(offsetof(FUAFDecompressAnimSequenceAnimOp, bInterpolate) == 49, "Offset mismatch for FUAFDecompressAnimSequenceAnimOp::bInterpolate");
static_assert(offsetof(FUAFDecompressAnimSequenceAnimOp, bExtractTrajectory) == 50, "Offset mismatch for FUAFDecompressAnimSequenceAnimOp::bExtractTrajectory");
static_assert(offsetof(FUAFDecompressAnimSequenceAnimOp, bIsLooping) == 51, "Offset mismatch for FUAFDecompressAnimSequenceAnimOp::bIsLooping");
static_assert(offsetof(FUAFDecompressAnimSequenceAnimOp, bExtractNotifies) == 52, "Offset mismatch for FUAFDecompressAnimSequenceAnimOp::bExtractNotifies");

// /Script/UAFAnimNode.UAFDuplicatePoseAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFDuplicatePoseAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFDuplicatePoseAnimOp, NumInputs) == 8, "Offset mismatch for FUAFDuplicatePoseAnimOp::NumInputs");
static_assert(offsetof(FUAFDuplicatePoseAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFDuplicatePoseAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFExtrapolateTowardsPoseAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFExtrapolateTowardsPoseAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFExtrapolateTowardsPoseAnimOp, NumInputs) == 8, "Offset mismatch for FUAFExtrapolateTowardsPoseAnimOp::NumInputs");
static_assert(offsetof(FUAFExtrapolateTowardsPoseAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFExtrapolateTowardsPoseAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFExtrapolateTowardsSettings
// Kind: ScriptStruct; super: none
struct FUAFExtrapolateTowardsSettings
{
public:
    float MinExtrapolationTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxExtrapolationTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxTranslationVelocity; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxRotationVelocity; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxScaleVelocity; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TranslationThreshold; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float RotationThreshold; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ScaleThreshold; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFExtrapolateTowardsSettings, MinExtrapolationTime) == 0, "Offset mismatch for FUAFExtrapolateTowardsSettings::MinExtrapolationTime");
static_assert(offsetof(FUAFExtrapolateTowardsSettings, MaxExtrapolationTime) == 4, "Offset mismatch for FUAFExtrapolateTowardsSettings::MaxExtrapolationTime");
static_assert(offsetof(FUAFExtrapolateTowardsSettings, MaxTranslationVelocity) == 8, "Offset mismatch for FUAFExtrapolateTowardsSettings::MaxTranslationVelocity");
static_assert(offsetof(FUAFExtrapolateTowardsSettings, MaxRotationVelocity) == 12, "Offset mismatch for FUAFExtrapolateTowardsSettings::MaxRotationVelocity");
static_assert(offsetof(FUAFExtrapolateTowardsSettings, MaxScaleVelocity) == 16, "Offset mismatch for FUAFExtrapolateTowardsSettings::MaxScaleVelocity");
static_assert(offsetof(FUAFExtrapolateTowardsSettings, TranslationThreshold) == 20, "Offset mismatch for FUAFExtrapolateTowardsSettings::TranslationThreshold");
static_assert(offsetof(FUAFExtrapolateTowardsSettings, RotationThreshold) == 24, "Offset mismatch for FUAFExtrapolateTowardsSettings::RotationThreshold");
static_assert(offsetof(FUAFExtrapolateTowardsSettings, ScaleThreshold) == 28, "Offset mismatch for FUAFExtrapolateTowardsSettings::ScaleThreshold");

// /Script/UAFAnimNode.UAFFreezeBlendTransitionDesc
// Kind: ScriptStruct; super: UAFTransitionDesc
struct FUAFFreezeBlendTransitionDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float duration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendOption; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t PhaseSync; // 0x000D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUAFFreezeBlendTransitionDesc, duration) == 8, "Offset mismatch for FUAFFreezeBlendTransitionDesc::duration");
static_assert(offsetof(FUAFFreezeBlendTransitionDesc, BlendOption) == 12, "Offset mismatch for FUAFFreezeBlendTransitionDesc::BlendOption");
static_assert(offsetof(FUAFFreezeBlendTransitionDesc, PhaseSync) == 13, "Offset mismatch for FUAFFreezeBlendTransitionDesc::PhaseSync");

// /Script/UAFAnimNode.UAFInertialBlendTransitionDesc
// Kind: ScriptStruct; super: UAFTransitionDesc
struct FUAFInertialBlendTransitionDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float duration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhaseSync; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUAFInertialBlendTransitionDesc, duration) == 8, "Offset mismatch for FUAFInertialBlendTransitionDesc::duration");
static_assert(offsetof(FUAFInertialBlendTransitionDesc, PhaseSync) == 12, "Offset mismatch for FUAFInertialBlendTransitionDesc::PhaseSync");

// /Script/UAFAnimNode.UAFInertializePoseAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFInertializePoseAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFInertializePoseAnimOp, NumInputs) == 8, "Offset mismatch for FUAFInertializePoseAnimOp::NumInputs");
static_assert(offsetof(FUAFInertializePoseAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFInertializePoseAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFInstancedAnimOpList
// Kind: ScriptStruct; super: none
struct FUAFInstancedAnimOpList
{
public:
    TArray<void*> AnimOps; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUAFInstancedAnimOpList, AnimOps) == 0, "Offset mismatch for FUAFInstancedAnimOpList::AnimOps");

// /Script/UAFAnimNode.UAFLoadPoseAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFLoadPoseAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFLoadPoseAnimOp, NumInputs) == 8, "Offset mismatch for FUAFLoadPoseAnimOp::NumInputs");
static_assert(offsetof(FUAFLoadPoseAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFLoadPoseAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFMakeAndCacheAdditivePoseNodeDesc
// Kind: ScriptStruct; super: UAFModifierAnimNodeDesc
struct FUAFMakeAndCacheAdditivePoseNodeDesc
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t AdditiveCachedPoseName[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t CachedPoseMakeAdditiveRole; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t CachedPoseName[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t bCreateMeshSpaceAdditive; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepPoseOnStack; // 0x0041 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFMakeAndCacheAdditivePoseNodeDesc, AdditiveCachedPoseName) == 24, "Offset mismatch for FUAFMakeAndCacheAdditivePoseNodeDesc::AdditiveCachedPoseName");
static_assert(offsetof(FUAFMakeAndCacheAdditivePoseNodeDesc, CachedPoseMakeAdditiveRole) == 40, "Offset mismatch for FUAFMakeAndCacheAdditivePoseNodeDesc::CachedPoseMakeAdditiveRole");
static_assert(offsetof(FUAFMakeAndCacheAdditivePoseNodeDesc, CachedPoseName) == 48, "Offset mismatch for FUAFMakeAndCacheAdditivePoseNodeDesc::CachedPoseName");
static_assert(offsetof(FUAFMakeAndCacheAdditivePoseNodeDesc, bCreateMeshSpaceAdditive) == 64, "Offset mismatch for FUAFMakeAndCacheAdditivePoseNodeDesc::bCreateMeshSpaceAdditive");
static_assert(offsetof(FUAFMakeAndCacheAdditivePoseNodeDesc, bKeepPoseOnStack) == 65, "Offset mismatch for FUAFMakeAndCacheAdditivePoseNodeDesc::bKeepPoseOnStack");

// /Script/UAFAnimNode.UAFMakeDynamicAdditiveAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFMakeDynamicAdditiveAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bMeshSpaceAdditive; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFMakeDynamicAdditiveAnimOp, bMeshSpaceAdditive) == 16, "Offset mismatch for FUAFMakeDynamicAdditiveAnimOp::bMeshSpaceAdditive");

// /Script/UAFAnimNode.UAFMakeDynamicAdditiveNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFMakeDynamicAdditiveNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BaseNode[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t SourceNode[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t bMeshSpaceAdditive; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFMakeDynamicAdditiveNodeDesc, BaseNode) == 8, "Offset mismatch for FUAFMakeDynamicAdditiveNodeDesc::BaseNode");
static_assert(offsetof(FUAFMakeDynamicAdditiveNodeDesc, SourceNode) == 24, "Offset mismatch for FUAFMakeDynamicAdditiveNodeDesc::SourceNode");
static_assert(offsetof(FUAFMakeDynamicAdditiveNodeDesc, bMeshSpaceAdditive) == 40, "Offset mismatch for FUAFMakeDynamicAdditiveNodeDesc::bMeshSpaceAdditive");

// /Script/UAFAnimNode.UAFModifierAnimNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFModifierAnimNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Input[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFModifierAnimNodeDesc, Input) == 8, "Offset mismatch for FUAFModifierAnimNodeDesc::Input");

// /Script/UAFAnimNode.UAFMontageSlotNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFMontageSlotNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Input[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    FName SlotName; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FUAFMontageSlotNodeDesc, Input) == 8, "Offset mismatch for FUAFMontageSlotNodeDesc::Input");
static_assert(offsetof(FUAFMontageSlotNodeDesc, SlotName) == 24, "Offset mismatch for FUAFMontageSlotNodeDesc::SlotName");

// /Script/UAFAnimNode.UAFNotifyInjectionSiteAnimNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFNotifyInjectionSiteAnimNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SiteTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t base[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFNotifyInjectionSiteAnimNodeDesc, SiteTag) == 8, "Offset mismatch for FUAFNotifyInjectionSiteAnimNodeDesc::SiteTag");
static_assert(offsetof(FUAFNotifyInjectionSiteAnimNodeDesc, base) == 16, "Offset mismatch for FUAFNotifyInjectionSiteAnimNodeDesc::base");

// /Script/UAFAnimNode.UAFNullAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFNullAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFNullAnimOp, NumInputs) == 8, "Offset mismatch for FUAFNullAnimOp::NumInputs");
static_assert(offsetof(FUAFNullAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFNullAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFOffsetRootBoneAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFOffsetRootBoneAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float DeltaTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Alpha; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t MeshComponentTransformWorld[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t TranslationMode; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationMode; // 0x0081 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0082
    float TranslationSmoothingTime; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float RotationSmoothingTime; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float MaxTranslationError; // 0x008C (Size: 0x4, Type: FloatProperty)
    float MaxRotationErrorDegrees; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOnGround; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0095
    std::uint8_t AnimatedGroundNormal[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t bClampToTranslationVelocity; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampToRotationVelocity; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x00B2
    float TranslationSpeedRatio; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float RotationSpeedRatio; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float TeleportDistanceThreshold; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetOnTeleport; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFOffsetRootBoneAnimOp, DeltaTime) == 16, "Offset mismatch for FUAFOffsetRootBoneAnimOp::DeltaTime");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, Alpha) == 20, "Offset mismatch for FUAFOffsetRootBoneAnimOp::Alpha");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, MeshComponentTransformWorld) == 32, "Offset mismatch for FUAFOffsetRootBoneAnimOp::MeshComponentTransformWorld");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, TranslationMode) == 128, "Offset mismatch for FUAFOffsetRootBoneAnimOp::TranslationMode");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, RotationMode) == 129, "Offset mismatch for FUAFOffsetRootBoneAnimOp::RotationMode");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, TranslationSmoothingTime) == 132, "Offset mismatch for FUAFOffsetRootBoneAnimOp::TranslationSmoothingTime");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, RotationSmoothingTime) == 136, "Offset mismatch for FUAFOffsetRootBoneAnimOp::RotationSmoothingTime");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, MaxTranslationError) == 140, "Offset mismatch for FUAFOffsetRootBoneAnimOp::MaxTranslationError");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, MaxRotationErrorDegrees) == 144, "Offset mismatch for FUAFOffsetRootBoneAnimOp::MaxRotationErrorDegrees");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, bOnGround) == 148, "Offset mismatch for FUAFOffsetRootBoneAnimOp::bOnGround");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, AnimatedGroundNormal) == 152, "Offset mismatch for FUAFOffsetRootBoneAnimOp::AnimatedGroundNormal");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, bClampToTranslationVelocity) == 176, "Offset mismatch for FUAFOffsetRootBoneAnimOp::bClampToTranslationVelocity");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, bClampToRotationVelocity) == 177, "Offset mismatch for FUAFOffsetRootBoneAnimOp::bClampToRotationVelocity");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, TranslationSpeedRatio) == 180, "Offset mismatch for FUAFOffsetRootBoneAnimOp::TranslationSpeedRatio");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, RotationSpeedRatio) == 184, "Offset mismatch for FUAFOffsetRootBoneAnimOp::RotationSpeedRatio");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, TeleportDistanceThreshold) == 188, "Offset mismatch for FUAFOffsetRootBoneAnimOp::TeleportDistanceThreshold");
static_assert(offsetof(FUAFOffsetRootBoneAnimOp, bResetOnTeleport) == 192, "Offset mismatch for FUAFOffsetRootBoneAnimOp::bResetOnTeleport");

// /Script/UAFAnimNode.UAFOffsetRootBoneNodeDesc
// Kind: ScriptStruct; super: UAFModifierAnimNodeDesc
struct FUAFOffsetRootBoneNodeDesc
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Alpha[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t TranslationMode[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationMode[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t TranslationSmoothingTime[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t RotationSmoothingTime[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxTranslationError[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxRotationErrorDegrees[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t bClampToTranslationVelocity; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampToRotationVelocity; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x009A
    float TranslationSpeedRatio; // 0x009C (Size: 0x4, Type: FloatProperty)
    float RotationSpeedRatio; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x00A4
    std::uint8_t MeshComponentTransformWorld[0x70]; // 0x00B0 (Size: 0x70, Type: StructProperty)
    std::uint8_t bOnGround[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t AnimatedGroundNormal[0x20]; // 0x0130 (Size: 0x20, Type: StructProperty)
    float TeleportDistanceThreshold; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetOnTeleport; // 0x0154 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, Alpha) == 24, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::Alpha");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, TranslationMode) == 40, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::TranslationMode");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, RotationMode) == 64, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::RotationMode");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, TranslationSmoothingTime) == 88, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::TranslationSmoothingTime");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, RotationSmoothingTime) == 104, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::RotationSmoothingTime");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, MaxTranslationError) == 120, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::MaxTranslationError");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, MaxRotationErrorDegrees) == 136, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::MaxRotationErrorDegrees");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, bClampToTranslationVelocity) == 152, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::bClampToTranslationVelocity");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, bClampToRotationVelocity) == 153, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::bClampToRotationVelocity");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, TranslationSpeedRatio) == 156, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::TranslationSpeedRatio");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, RotationSpeedRatio) == 160, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::RotationSpeedRatio");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, MeshComponentTransformWorld) == 176, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::MeshComponentTransformWorld");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, bOnGround) == 288, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::bOnGround");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, AnimatedGroundNormal) == 304, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::AnimatedGroundNormal");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, TeleportDistanceThreshold) == 336, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::TeleportDistanceThreshold");
static_assert(offsetof(FUAFOffsetRootBoneNodeDesc, bResetOnTeleport) == 340, "Offset mismatch for FUAFOffsetRootBoneNodeDesc::bResetOnTeleport");

// /Script/UAFAnimNode.UAFOverrideAssetRequest
// Kind: ScriptStruct; super: none
struct FUAFOverrideAssetRequest
{
public:
    void* Asset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t RequestID; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t BlendIn[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlendOut[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAutoBlendOut; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFOverrideAssetRequest, Asset) == 0, "Offset mismatch for FUAFOverrideAssetRequest::Asset");
static_assert(offsetof(FUAFOverrideAssetRequest, RequestID) == 8, "Offset mismatch for FUAFOverrideAssetRequest::RequestID");
static_assert(offsetof(FUAFOverrideAssetRequest, BlendIn) == 16, "Offset mismatch for FUAFOverrideAssetRequest::BlendIn");
static_assert(offsetof(FUAFOverrideAssetRequest, BlendOut) == 32, "Offset mismatch for FUAFOverrideAssetRequest::BlendOut");
static_assert(offsetof(FUAFOverrideAssetRequest, bAutoBlendOut) == 48, "Offset mismatch for FUAFOverrideAssetRequest::bAutoBlendOut");

// /Script/UAFAnimNode.UAFOverrideAssetSlotNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFOverrideAssetSlotNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Fallback[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Request[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    std::uint8_t DefaultBlendIn[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultBlendOut[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFOverrideAssetSlotNodeDesc, Fallback) == 8, "Offset mismatch for FUAFOverrideAssetSlotNodeDesc::Fallback");
static_assert(offsetof(FUAFOverrideAssetSlotNodeDesc, Request) == 24, "Offset mismatch for FUAFOverrideAssetSlotNodeDesc::Request");
static_assert(offsetof(FUAFOverrideAssetSlotNodeDesc, DefaultBlendIn) == 56, "Offset mismatch for FUAFOverrideAssetSlotNodeDesc::DefaultBlendIn");
static_assert(offsetof(FUAFOverrideAssetSlotNodeDesc, DefaultBlendOut) == 72, "Offset mismatch for FUAFOverrideAssetSlotNodeDesc::DefaultBlendOut");

// /Script/UAFAnimNode.UAFPerBoneApplyAdditiveAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFPerBoneApplyAdditiveAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* skeleton; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BoneWeights; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    float UniformWeight; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFPerBoneApplyAdditiveAnimOp, skeleton) == 16, "Offset mismatch for FUAFPerBoneApplyAdditiveAnimOp::skeleton");
static_assert(offsetof(FUAFPerBoneApplyAdditiveAnimOp, BoneWeights) == 24, "Offset mismatch for FUAFPerBoneApplyAdditiveAnimOp::BoneWeights");
static_assert(offsetof(FUAFPerBoneApplyAdditiveAnimOp, UniformWeight) == 40, "Offset mismatch for FUAFPerBoneApplyAdditiveAnimOp::UniformWeight");

// /Script/UAFAnimNode.UAFPerBoneBlendAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFPerBoneBlendAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* skeleton; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BoneWeights; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    float UniformWeight; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFPerBoneBlendAnimOp, skeleton) == 16, "Offset mismatch for FUAFPerBoneBlendAnimOp::skeleton");
static_assert(offsetof(FUAFPerBoneBlendAnimOp, BoneWeights) == 24, "Offset mismatch for FUAFPerBoneBlendAnimOp::BoneWeights");
static_assert(offsetof(FUAFPerBoneBlendAnimOp, UniformWeight) == 40, "Offset mismatch for FUAFPerBoneBlendAnimOp::UniformWeight");

// /Script/UAFAnimNode.UAFPhaseTrack
// Kind: ScriptStruct; super: none
struct FUAFPhaseTrack
{
public:
    FName PhaseID; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Points; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bLooping; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFPhaseTrack, PhaseID) == 0, "Offset mismatch for FUAFPhaseTrack::PhaseID");
static_assert(offsetof(FUAFPhaseTrack, Points) == 8, "Offset mismatch for FUAFPhaseTrack::Points");
static_assert(offsetof(FUAFPhaseTrack, bLooping) == 24, "Offset mismatch for FUAFPhaseTrack::bLooping");

// /Script/UAFAnimNode.UAFPhaseTrackPoint
// Kind: ScriptStruct; super: none
struct FUAFPhaseTrackPoint
{
public:
    float time; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Phase; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFPhaseTrackPoint, time) == 0, "Offset mismatch for FUAFPhaseTrackPoint::time");
static_assert(offsetof(FUAFPhaseTrackPoint, Phase) == 4, "Offset mismatch for FUAFPhaseTrackPoint::Phase");

// /Script/UAFAnimNode.UAFPhaseTypeDescription
// Kind: ScriptStruct; super: none
struct FUAFPhaseTypeDescription
{
public:
    FName PhaseID; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Markers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUAFPhaseTypeDescription, PhaseID) == 0, "Offset mismatch for FUAFPhaseTypeDescription::PhaseID");
static_assert(offsetof(FUAFPhaseTypeDescription, Markers) == 8, "Offset mismatch for FUAFPhaseTypeDescription::Markers");

// /Script/UAFAnimNode.UAFPopPoseAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFPopPoseAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFPopPoseAnimOp, NumInputs) == 8, "Offset mismatch for FUAFPopPoseAnimOp::NumInputs");
static_assert(offsetof(FUAFPopPoseAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFPopPoseAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFPoseAttributeRequest
// Kind: ScriptStruct; super: none
struct FUAFPoseAttributeRequest
{
public:
    std::uint8_t RequestName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float SampleOffsetTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Mode; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUAFPoseAttributeRequest, RequestName) == 0, "Offset mismatch for FUAFPoseAttributeRequest::RequestName");
static_assert(offsetof(FUAFPoseAttributeRequest, SampleOffsetTime) == 4, "Offset mismatch for FUAFPoseAttributeRequest::SampleOffsetTime");
static_assert(offsetof(FUAFPoseAttributeRequest, Mode) == 8, "Offset mismatch for FUAFPoseAttributeRequest::Mode");

// /Script/UAFAnimNode.UAFPoseAttributeRequestComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FUAFPoseAttributeRequestComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimNode.UAFPushCachedPoseAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFPushCachedPoseAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFPushCachedPoseAnimOp, NumInputs) == 8, "Offset mismatch for FUAFPushCachedPoseAnimOp::NumInputs");
static_assert(offsetof(FUAFPushCachedPoseAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFPushCachedPoseAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFPushCachedPoseNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFPushCachedPoseNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CachedPoseName[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFPushCachedPoseNodeDesc, CachedPoseName) == 8, "Offset mismatch for FUAFPushCachedPoseNodeDesc::CachedPoseName");

// /Script/UAFAnimNode.UAFRetargetMethodDesc
// Kind: ScriptStruct; super: none
struct FUAFRetargetMethodDesc
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimNode.UAFRootMotionDeltaRequest
// Kind: ScriptStruct; super: UAFPoseAttributeRequest
struct FUAFRootMotionDeltaRequest
{
public:
    std::uint8_t RequestName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float SampleOffsetTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Mode; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUAFRootMotionDeltaRequest, RequestName) == 0, "Offset mismatch for FUAFRootMotionDeltaRequest::RequestName");
static_assert(offsetof(FUAFRootMotionDeltaRequest, SampleOffsetTime) == 4, "Offset mismatch for FUAFRootMotionDeltaRequest::SampleOffsetTime");
static_assert(offsetof(FUAFRootMotionDeltaRequest, Mode) == 8, "Offset mismatch for FUAFRootMotionDeltaRequest::Mode");

// /Script/UAFAnimNode.UAFRunAnimNodeComponent
// Kind: ScriptStruct; super: UAFScriptComponent
struct FUAFRunAnimNodeComponent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Output[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFRunAnimNodeComponent, Output) == 16, "Offset mismatch for FUAFRunAnimNodeComponent::Output");
static_assert(offsetof(FUAFRunAnimNodeComponent, WorkData) == 32, "Offset mismatch for FUAFRunAnimNodeComponent::WorkData");

// /Script/UAFAnimNode.UAFRunAnimNodeData
// Kind: ScriptStruct; super: none
struct FUAFRunAnimNodeData
{
public:
    std::uint8_t Node[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName AttributeSet; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t InputPose[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlendTargetPose[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    float Weight; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFRunAnimNodeData, Node) == 0, "Offset mismatch for FUAFRunAnimNodeData::Node");
static_assert(offsetof(FUAFRunAnimNodeData, AttributeSet) == 16, "Offset mismatch for FUAFRunAnimNodeData::AttributeSet");
static_assert(offsetof(FUAFRunAnimNodeData, InputPose) == 24, "Offset mismatch for FUAFRunAnimNodeData::InputPose");
static_assert(offsetof(FUAFRunAnimNodeData, BlendTargetPose) == 40, "Offset mismatch for FUAFRunAnimNodeData::BlendTargetPose");
static_assert(offsetof(FUAFRunAnimNodeData, Weight) == 56, "Offset mismatch for FUAFRunAnimNodeData::Weight");

// /Script/UAFAnimNode.UAFSanitizeAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFSanitizeAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFSanitizeAnimOp, NumInputs) == 8, "Offset mismatch for FUAFSanitizeAnimOp::NumInputs");
static_assert(offsetof(FUAFSanitizeAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFSanitizeAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFScalePlayRateNodeDesc
// Kind: ScriptStruct; super: UAFModifierAnimNodeDesc
struct FUAFScalePlayRateNodeDesc
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t PlayRateMultiplier[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFScalePlayRateNodeDesc, PlayRateMultiplier) == 24, "Offset mismatch for FUAFScalePlayRateNodeDesc::PlayRateMultiplier");

// /Script/UAFAnimNode.UAFSequencePlayerNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFSequencePlayerNodeDesc
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* Sequence; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LoopMode; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    float StartTime; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFSequencePlayerNodeDesc, Sequence) == 16, "Offset mismatch for FUAFSequencePlayerNodeDesc::Sequence");
static_assert(offsetof(FUAFSequencePlayerNodeDesc, LoopMode) == 24, "Offset mismatch for FUAFSequencePlayerNodeDesc::LoopMode");
static_assert(offsetof(FUAFSequencePlayerNodeDesc, StartTime) == 28, "Offset mismatch for FUAFSequencePlayerNodeDesc::StartTime");

// /Script/UAFAnimNode.UAFSimpleTransitionDesc
// Kind: ScriptStruct; super: UAFTransitionDesc
struct FUAFSimpleTransitionDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float duration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendOption; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t PhaseSync; // 0x000D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUAFSimpleTransitionDesc, duration) == 8, "Offset mismatch for FUAFSimpleTransitionDesc::duration");
static_assert(offsetof(FUAFSimpleTransitionDesc, BlendOption) == 12, "Offset mismatch for FUAFSimpleTransitionDesc::BlendOption");
static_assert(offsetof(FUAFSimpleTransitionDesc, PhaseSync) == 13, "Offset mismatch for FUAFSimpleTransitionDesc::PhaseSync");

// /Script/UAFAnimNode.UAFSteeringAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFSteeringAnimOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float DeltaTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Alpha; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AngularVelocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetOrientation[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t RootBoneTransform[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    float ProceduralTargetTime; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float AnimatedTargetTime; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float DisableSteeringBelowSpeed; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float RootMotionAngleThresholdDegrees; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float DisableAdditiveBelowSpeed; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MinScaleRatio; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MaxScaleRatio; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFSteeringAnimOp, DeltaTime) == 16, "Offset mismatch for FUAFSteeringAnimOp::DeltaTime");
static_assert(offsetof(FUAFSteeringAnimOp, Alpha) == 20, "Offset mismatch for FUAFSteeringAnimOp::Alpha");
static_assert(offsetof(FUAFSteeringAnimOp, AngularVelocity) == 24, "Offset mismatch for FUAFSteeringAnimOp::AngularVelocity");
static_assert(offsetof(FUAFSteeringAnimOp, TargetOrientation) == 48, "Offset mismatch for FUAFSteeringAnimOp::TargetOrientation");
static_assert(offsetof(FUAFSteeringAnimOp, RootBoneTransform) == 80, "Offset mismatch for FUAFSteeringAnimOp::RootBoneTransform");
static_assert(offsetof(FUAFSteeringAnimOp, ProceduralTargetTime) == 176, "Offset mismatch for FUAFSteeringAnimOp::ProceduralTargetTime");
static_assert(offsetof(FUAFSteeringAnimOp, AnimatedTargetTime) == 180, "Offset mismatch for FUAFSteeringAnimOp::AnimatedTargetTime");
static_assert(offsetof(FUAFSteeringAnimOp, DisableSteeringBelowSpeed) == 184, "Offset mismatch for FUAFSteeringAnimOp::DisableSteeringBelowSpeed");
static_assert(offsetof(FUAFSteeringAnimOp, RootMotionAngleThresholdDegrees) == 188, "Offset mismatch for FUAFSteeringAnimOp::RootMotionAngleThresholdDegrees");
static_assert(offsetof(FUAFSteeringAnimOp, DisableAdditiveBelowSpeed) == 192, "Offset mismatch for FUAFSteeringAnimOp::DisableAdditiveBelowSpeed");
static_assert(offsetof(FUAFSteeringAnimOp, MinScaleRatio) == 196, "Offset mismatch for FUAFSteeringAnimOp::MinScaleRatio");
static_assert(offsetof(FUAFSteeringAnimOp, MaxScaleRatio) == 200, "Offset mismatch for FUAFSteeringAnimOp::MaxScaleRatio");

// /Script/UAFAnimNode.UAFSteeringNodeDesc
// Kind: ScriptStruct; super: UAFModifierAnimNodeDesc
struct FUAFSteeringNodeDesc
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Alpha[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetOrientation[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t RootBoneTransform[0x70]; // 0x0060 (Size: 0x70, Type: StructProperty)
    std::uint8_t ProceduralTargetTime[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t AnimatedTargetTime[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RootMotionAngleThresholdDegrees[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t MinScaleRatio[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxScaleRatio[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    std::uint8_t DisableAdditiveBelowSpeed[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t DisableSteeringBelowSpeed[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFSteeringNodeDesc, Alpha) == 24, "Offset mismatch for FUAFSteeringNodeDesc::Alpha");
static_assert(offsetof(FUAFSteeringNodeDesc, TargetOrientation) == 48, "Offset mismatch for FUAFSteeringNodeDesc::TargetOrientation");
static_assert(offsetof(FUAFSteeringNodeDesc, RootBoneTransform) == 96, "Offset mismatch for FUAFSteeringNodeDesc::RootBoneTransform");
static_assert(offsetof(FUAFSteeringNodeDesc, ProceduralTargetTime) == 208, "Offset mismatch for FUAFSteeringNodeDesc::ProceduralTargetTime");
static_assert(offsetof(FUAFSteeringNodeDesc, AnimatedTargetTime) == 224, "Offset mismatch for FUAFSteeringNodeDesc::AnimatedTargetTime");
static_assert(offsetof(FUAFSteeringNodeDesc, RootMotionAngleThresholdDegrees) == 240, "Offset mismatch for FUAFSteeringNodeDesc::RootMotionAngleThresholdDegrees");
static_assert(offsetof(FUAFSteeringNodeDesc, MinScaleRatio) == 256, "Offset mismatch for FUAFSteeringNodeDesc::MinScaleRatio");
static_assert(offsetof(FUAFSteeringNodeDesc, MaxScaleRatio) == 272, "Offset mismatch for FUAFSteeringNodeDesc::MaxScaleRatio");
static_assert(offsetof(FUAFSteeringNodeDesc, DisableAdditiveBelowSpeed) == 288, "Offset mismatch for FUAFSteeringNodeDesc::DisableAdditiveBelowSpeed");
static_assert(offsetof(FUAFSteeringNodeDesc, DisableSteeringBelowSpeed) == 304, "Offset mismatch for FUAFSteeringNodeDesc::DisableSteeringBelowSpeed");

// /Script/UAFAnimNode.UAFStorePoseAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFStorePoseAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFStorePoseAnimOp, NumInputs) == 8, "Offset mismatch for FUAFStorePoseAnimOp::NumInputs");
static_assert(offsetof(FUAFStorePoseAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFStorePoseAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFSwapPoseAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFSwapPoseAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFSwapPoseAnimOp, NumInputs) == 8, "Offset mismatch for FUAFSwapPoseAnimOp::NumInputs");
static_assert(offsetof(FUAFSwapPoseAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFSwapPoseAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFSystemFactoryAsset_AnimNode
// Kind: ScriptStruct; super: UAFSystemFactoryAsset
struct FUAFSystemFactoryAsset_AnimNode
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Node[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    FName AttributeSet; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FUAFSystemFactoryAsset_AnimNode, Node) == 8, "Offset mismatch for FUAFSystemFactoryAsset_AnimNode::Node");
static_assert(offsetof(FUAFSystemFactoryAsset_AnimNode, AttributeSet) == 24, "Offset mismatch for FUAFSystemFactoryAsset_AnimNode::AttributeSet");

// /Script/UAFAnimNode.UAFTimelineDebugState
// Kind: ScriptStruct; super: none
struct FUAFTimelineDebugState
{
public:
    float CurrentTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentPhase[0x8]; // 0x0008 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t PhaseVelocity[0x8]; // 0x0010 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t bIsLooping; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasLooped; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasFinished; // 0x001A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFTimelineDebugState, CurrentTime) == 0, "Offset mismatch for FUAFTimelineDebugState::CurrentTime");
static_assert(offsetof(FUAFTimelineDebugState, duration) == 4, "Offset mismatch for FUAFTimelineDebugState::duration");
static_assert(offsetof(FUAFTimelineDebugState, CurrentPhase) == 8, "Offset mismatch for FUAFTimelineDebugState::CurrentPhase");
static_assert(offsetof(FUAFTimelineDebugState, PhaseVelocity) == 16, "Offset mismatch for FUAFTimelineDebugState::PhaseVelocity");
static_assert(offsetof(FUAFTimelineDebugState, bIsLooping) == 24, "Offset mismatch for FUAFTimelineDebugState::bIsLooping");
static_assert(offsetof(FUAFTimelineDebugState, bHasLooped) == 25, "Offset mismatch for FUAFTimelineDebugState::bHasLooped");
static_assert(offsetof(FUAFTimelineDebugState, bHasFinished) == 26, "Offset mismatch for FUAFTimelineDebugState::bHasFinished");

// /Script/UAFAnimNode.UAFTransitionDesc
// Kind: ScriptStruct; super: none
struct FUAFTransitionDesc
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimNode.UAFTranslationRetargetAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFTranslationRetargetAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFTranslationRetargetAnimOp, NumInputs) == 8, "Offset mismatch for FUAFTranslationRetargetAnimOp::NumInputs");
static_assert(offsetof(FUAFTranslationRetargetAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFTranslationRetargetAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFTranslationRetargetMethodDesc
// Kind: ScriptStruct; super: UAFRetargetMethodDesc
struct FUAFTranslationRetargetMethodDesc
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimNode.UAFTwoWayBlendDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFTwoWayBlendDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputA[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t InputB[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t Alpha[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUpdateAlphaOnBlendOut; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSyncPhase; // 0x0039 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFTwoWayBlendDesc, InputA) == 8, "Offset mismatch for FUAFTwoWayBlendDesc::InputA");
static_assert(offsetof(FUAFTwoWayBlendDesc, InputB) == 24, "Offset mismatch for FUAFTwoWayBlendDesc::InputB");
static_assert(offsetof(FUAFTwoWayBlendDesc, Alpha) == 40, "Offset mismatch for FUAFTwoWayBlendDesc::Alpha");
static_assert(offsetof(FUAFTwoWayBlendDesc, bUpdateAlphaOnBlendOut) == 56, "Offset mismatch for FUAFTwoWayBlendDesc::bUpdateAlphaOnBlendOut");
static_assert(offsetof(FUAFTwoWayBlendDesc, bSyncPhase) == 57, "Offset mismatch for FUAFTwoWayBlendDesc::bSyncPhase");

// /Script/UAFAnimNode.UAFUseExternalPoseAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFUseExternalPoseAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFUseExternalPoseAnimOp, NumInputs) == 8, "Offset mismatch for FUAFUseExternalPoseAnimOp::NumInputs");
static_assert(offsetof(FUAFUseExternalPoseAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFUseExternalPoseAnimOp::NumOutputs");

// /Script/UAFAnimNode.UAFUseExternalPoseNodeDesc
// Kind: ScriptStruct; super: UAFAnimNodeDesc
struct FUAFUseExternalPoseNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputPose[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t RetargetMethod[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFUseExternalPoseNodeDesc, InputPose) == 8, "Offset mismatch for FUAFUseExternalPoseNodeDesc::InputPose");
static_assert(offsetof(FUAFUseExternalPoseNodeDesc, RetargetMethod) == 56, "Offset mismatch for FUAFUseExternalPoseNodeDesc::RetargetMethod");

// /Script/UAFAnimNode.UAFAnimTree
// Kind: Class; super: UAFSharedVariables
class UUAFAnimTree
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t NodeDesc[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUAFAnimTree, NodeDesc) == 1392, "Offset mismatch for UUAFAnimTree::NodeDesc");

// /Script/UAFAnimNode.UAFSpawnModifierNotifyHandler
// Kind: Class; super: UAFNotifyHandler
class UUAFSpawnModifierNotifyHandler
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t NotifyClass[0x20]; // 0x0570 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t FilterMode; // 0x0590 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0591
    float DebounceTime; // 0x0594 (Size: 0x4, Type: FloatProperty)
    std::uint8_t StateSwitchBehavior; // 0x0598 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShouldPredictNotify; // 0x0599 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImmediateNotify; // 0x059A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUAFSpawnModifierNotifyHandler, NotifyClass) == 1392, "Offset mismatch for UUAFSpawnModifierNotifyHandler::NotifyClass");
static_assert(offsetof(UUAFSpawnModifierNotifyHandler, FilterMode) == 1424, "Offset mismatch for UUAFSpawnModifierNotifyHandler::FilterMode");
static_assert(offsetof(UUAFSpawnModifierNotifyHandler, DebounceTime) == 1428, "Offset mismatch for UUAFSpawnModifierNotifyHandler::DebounceTime");
static_assert(offsetof(UUAFSpawnModifierNotifyHandler, StateSwitchBehavior) == 1432, "Offset mismatch for UUAFSpawnModifierNotifyHandler::StateSwitchBehavior");
static_assert(offsetof(UUAFSpawnModifierNotifyHandler, bShouldPredictNotify) == 1433, "Offset mismatch for UUAFSpawnModifierNotifyHandler::bShouldPredictNotify");
static_assert(offsetof(UUAFSpawnModifierNotifyHandler, bImmediateNotify) == 1434, "Offset mismatch for UUAFSpawnModifierNotifyHandler::bImmediateNotify");

// /Script/UAFAnimNode.UAFSpawnModifierNotifyState
// Kind: Class; super: UAFAnimNotifyState
class UUAFSpawnModifierNotifyState
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SiteTag[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUAFSpawnModifierNotifyState, SiteTag) == 56, "Offset mismatch for UUAFSpawnModifierNotifyState::SiteTag");

// /Script/UAFAnimNode.UAFSynchronizationData
// Kind: Class; super: AnimMetaData
class UUAFSynchronizationData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PhaseTracks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUAFSynchronizationData, PhaseTracks) == 40, "Offset mismatch for UUAFSynchronizationData::PhaseTracks");

// /Script/UAFAnimNode.UAFSynchronizationSettings
// Kind: Class; super: DataAsset
class UUAFSynchronizationSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PhaseTypeDescriptions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUAFSynchronizationSettings, PhaseTypeDescriptions) == 40, "Offset mismatch for UUAFSynchronizationSettings::PhaseTypeDescriptions");
