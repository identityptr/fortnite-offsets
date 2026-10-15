/**
 * decamp dumper generated SDK
 * Package: /Script/UAFAnimGraph
 */
#pragma once
#include "Basic.h"

// /Script/UAFAnimGraph.AlphaInputTraitArgs
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAlphaInputTraitArgs
{
public:
    float Alpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t AlphaScaleBiasClamp[0x30]; // 0x000C (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x003D
    std::uint8_t AlphaBoolBlend[0x48]; // 0x0040 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaInputType; // 0x008C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAlphaInputTraitArgs, Alpha) == 0, "Offset mismatch for FAlphaInputTraitArgs::Alpha");
static_assert(offsetof(FAlphaInputTraitArgs, AlphaScaleBias) == 4, "Offset mismatch for FAlphaInputTraitArgs::AlphaScaleBias");
static_assert(offsetof(FAlphaInputTraitArgs, AlphaScaleBiasClamp) == 12, "Offset mismatch for FAlphaInputTraitArgs::AlphaScaleBiasClamp");
static_assert(offsetof(FAlphaInputTraitArgs, bAlphaBoolEnabled) == 60, "Offset mismatch for FAlphaInputTraitArgs::bAlphaBoolEnabled");
static_assert(offsetof(FAlphaInputTraitArgs, AlphaBoolBlend) == 64, "Offset mismatch for FAlphaInputTraitArgs::AlphaBoolBlend");
static_assert(offsetof(FAlphaInputTraitArgs, AlphaCurveName) == 136, "Offset mismatch for FAlphaInputTraitArgs::AlphaCurveName");
static_assert(offsetof(FAlphaInputTraitArgs, AlphaInputType) == 140, "Offset mismatch for FAlphaInputTraitArgs::AlphaInputType");

// /Script/UAFAnimGraph.AnimNextAnimGraph
// Kind: ScriptStruct; super: none
struct FAnimNextAnimGraph
{
public:
    void* Asset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InjectionData[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    void* HostGraph; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNextAnimGraph, Asset) == 0, "Offset mismatch for FAnimNextAnimGraph::Asset");
static_assert(offsetof(FAnimNextAnimGraph, InjectionData) == 8, "Offset mismatch for FAnimNextAnimGraph::InjectionData");
static_assert(offsetof(FAnimNextAnimGraph, HostGraph) == 32, "Offset mismatch for FAnimNextAnimGraph::HostGraph");

// /Script/UAFAnimGraph.AnimNextAnimGraphBuilder
// Kind: ScriptStruct; super: none
struct FAnimNextAnimGraphBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextAnimSequenceKeyframeTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextAnimSequenceKeyframeTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TWeakObjectPtr<void> AnimSequence; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0010
    double SampleTime; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::uint32_t KeyframeIndex; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bInterpolate; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExtractTrajectory; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLooping; // 0x002E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextAnimSequenceKeyframeTask, AnimSequence) == 8, "Offset mismatch for FAnimNextAnimSequenceKeyframeTask::AnimSequence");
static_assert(offsetof(FAnimNextAnimSequenceKeyframeTask, SampleTime) == 32, "Offset mismatch for FAnimNextAnimSequenceKeyframeTask::SampleTime");
static_assert(offsetof(FAnimNextAnimSequenceKeyframeTask, KeyframeIndex) == 40, "Offset mismatch for FAnimNextAnimSequenceKeyframeTask::KeyframeIndex");
static_assert(offsetof(FAnimNextAnimSequenceKeyframeTask, bInterpolate) == 44, "Offset mismatch for FAnimNextAnimSequenceKeyframeTask::bInterpolate");
static_assert(offsetof(FAnimNextAnimSequenceKeyframeTask, bExtractTrajectory) == 45, "Offset mismatch for FAnimNextAnimSequenceKeyframeTask::bExtractTrajectory");
static_assert(offsetof(FAnimNextAnimSequenceKeyframeTask, bLooping) == 46, "Offset mismatch for FAnimNextAnimSequenceKeyframeTask::bLooping");

// /Script/UAFAnimGraph.AnimNextApplyAdditiveKeyframeTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextApplyAdditiveKeyframeTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float BlendWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextApplyAdditiveKeyframeTask, BlendWeight) == 8, "Offset mismatch for FAnimNextApplyAdditiveKeyframeTask::BlendWeight");

// /Script/UAFAnimGraph.AnimNextApplyAdditiveTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextApplyAdditiveTraitSharedData
{
public:
    std::uint8_t base[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Additive[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    float Alpha; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextApplyAdditiveTraitSharedData, base) == 0, "Offset mismatch for FAnimNextApplyAdditiveTraitSharedData::base");
static_assert(offsetof(FAnimNextApplyAdditiveTraitSharedData, Additive) == 4, "Offset mismatch for FAnimNextApplyAdditiveTraitSharedData::Additive");
static_assert(offsetof(FAnimNextApplyAdditiveTraitSharedData, Alpha) == 8, "Offset mismatch for FAnimNextApplyAdditiveTraitSharedData::Alpha");

// /Script/UAFAnimGraph.AnimNextBlendAddKeyframePerBoneWithScaleTask
// Kind: ScriptStruct; super: AnimNextBlendAddKeyframeWithScaleTask
struct FAnimNextBlendAddKeyframePerBoneWithScaleTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ScaleFactor; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextBlendAddKeyframePerBoneWithScaleTask, ScaleFactor) == 8, "Offset mismatch for FAnimNextBlendAddKeyframePerBoneWithScaleTask::ScaleFactor");

// /Script/UAFAnimGraph.AnimNextBlendAddKeyframeWithScaleTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextBlendAddKeyframeWithScaleTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ScaleFactor; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextBlendAddKeyframeWithScaleTask, ScaleFactor) == 8, "Offset mismatch for FAnimNextBlendAddKeyframeWithScaleTask::ScaleFactor");

// /Script/UAFAnimGraph.AnimNextBlendByBoolTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextBlendByBoolTraitSharedData
{
public:
    std::uint8_t TrueChild[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t FalseChild[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCondition; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysUpdateTrueChild; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextBlendByBoolTraitSharedData, TrueChild) == 0, "Offset mismatch for FAnimNextBlendByBoolTraitSharedData::TrueChild");
static_assert(offsetof(FAnimNextBlendByBoolTraitSharedData, FalseChild) == 4, "Offset mismatch for FAnimNextBlendByBoolTraitSharedData::FalseChild");
static_assert(offsetof(FAnimNextBlendByBoolTraitSharedData, bCondition) == 8, "Offset mismatch for FAnimNextBlendByBoolTraitSharedData::bCondition");
static_assert(offsetof(FAnimNextBlendByBoolTraitSharedData, bAlwaysUpdateTrueChild) == 9, "Offset mismatch for FAnimNextBlendByBoolTraitSharedData::bAlwaysUpdateTrueChild");

// /Script/UAFAnimGraph.AnimNextBlendInertializerCoreTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextBlendInertializerCoreTraitSharedData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextBlendInertializerTraitSharedData
// Kind: ScriptStruct; super: AnimNextBlendInertializerCoreTraitSharedData
struct FAnimNextBlendInertializerTraitSharedData
{
public:
    float BlendTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextBlendInertializerTraitSharedData, BlendTime) == 0, "Offset mismatch for FAnimNextBlendInertializerTraitSharedData::BlendTime");

// /Script/UAFAnimGraph.AnimNextBlendKeyframePerBoneWithScaleTask
// Kind: ScriptStruct; super: AnimNextBlendAddKeyframeWithScaleTask
struct FAnimNextBlendKeyframePerBoneWithScaleTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ScaleFactor; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextBlendKeyframePerBoneWithScaleTask, ScaleFactor) == 8, "Offset mismatch for FAnimNextBlendKeyframePerBoneWithScaleTask::ScaleFactor");

// /Script/UAFAnimGraph.AnimNextBlendOverwriteKeyframePerBoneWithScaleTask
// Kind: ScriptStruct; super: AnimNextBlendOverwriteKeyframeWithScaleTask
struct FAnimNextBlendOverwriteKeyframePerBoneWithScaleTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ScaleFactor; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextBlendOverwriteKeyframePerBoneWithScaleTask, ScaleFactor) == 8, "Offset mismatch for FAnimNextBlendOverwriteKeyframePerBoneWithScaleTask::ScaleFactor");

// /Script/UAFAnimGraph.AnimNextBlendOverwriteKeyframeWithScaleTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextBlendOverwriteKeyframeWithScaleTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ScaleFactor; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextBlendOverwriteKeyframeWithScaleTask, ScaleFactor) == 8, "Offset mismatch for FAnimNextBlendOverwriteKeyframeWithScaleTask::ScaleFactor");

// /Script/UAFAnimGraph.AnimNextBlendSmootherCoreTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextBlendSmootherCoreTraitSharedData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextBlendSmootherPerBoneCoreTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextBlendSmootherPerBoneCoreTraitSharedData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextBlendSmootherTraitSharedData
// Kind: ScriptStruct; super: AnimNextBlendSmootherCoreTraitSharedData
struct FAnimNextBlendSmootherTraitSharedData
{
public:
    TArray<void*> BlendTimes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BlendType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    void* CustomBlendCurve; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNextBlendSmootherTraitSharedData, BlendTimes) == 0, "Offset mismatch for FAnimNextBlendSmootherTraitSharedData::BlendTimes");
static_assert(offsetof(FAnimNextBlendSmootherTraitSharedData, BlendType) == 16, "Offset mismatch for FAnimNextBlendSmootherTraitSharedData::BlendType");
static_assert(offsetof(FAnimNextBlendSmootherTraitSharedData, CustomBlendCurve) == 24, "Offset mismatch for FAnimNextBlendSmootherTraitSharedData::CustomBlendCurve");

// /Script/UAFAnimGraph.AnimNextBlendSpacePlayerTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextBlendSpacePlayerTraitSharedData
{
public:
    void* BlendSpace; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float XAxisSamplePoint; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float YAxisSamplePoint; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float StartPosition; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LoopMode; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNextBlendSpacePlayerTraitSharedData, BlendSpace) == 0, "Offset mismatch for FAnimNextBlendSpacePlayerTraitSharedData::BlendSpace");
static_assert(offsetof(FAnimNextBlendSpacePlayerTraitSharedData, XAxisSamplePoint) == 8, "Offset mismatch for FAnimNextBlendSpacePlayerTraitSharedData::XAxisSamplePoint");
static_assert(offsetof(FAnimNextBlendSpacePlayerTraitSharedData, YAxisSamplePoint) == 12, "Offset mismatch for FAnimNextBlendSpacePlayerTraitSharedData::YAxisSamplePoint");
static_assert(offsetof(FAnimNextBlendSpacePlayerTraitSharedData, PlayRate) == 16, "Offset mismatch for FAnimNextBlendSpacePlayerTraitSharedData::PlayRate");
static_assert(offsetof(FAnimNextBlendSpacePlayerTraitSharedData, StartPosition) == 20, "Offset mismatch for FAnimNextBlendSpacePlayerTraitSharedData::StartPosition");
static_assert(offsetof(FAnimNextBlendSpacePlayerTraitSharedData, LoopMode) == 24, "Offset mismatch for FAnimNextBlendSpacePlayerTraitSharedData::LoopMode");

// /Script/UAFAnimGraph.AnimNextBlendStackCoreTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextBlendStackCoreTraitSharedData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextBlendStackRequesterTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextBlendStackRequesterTraitSharedData
{
public:
    void* Object; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float BlendTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceBlend; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextBlendStackRequesterTraitSharedData, Object) == 0, "Offset mismatch for FAnimNextBlendStackRequesterTraitSharedData::Object");
static_assert(offsetof(FAnimNextBlendStackRequesterTraitSharedData, BlendTime) == 8, "Offset mismatch for FAnimNextBlendStackRequesterTraitSharedData::BlendTime");
static_assert(offsetof(FAnimNextBlendStackRequesterTraitSharedData, bForceBlend) == 12, "Offset mismatch for FAnimNextBlendStackRequesterTraitSharedData::bForceBlend");

// /Script/UAFAnimGraph.AnimNextBlendStackTraitSharedData
// Kind: ScriptStruct; super: AnimNextBlendStackCoreTraitSharedData
struct FAnimNextBlendStackTraitSharedData
{
public:
    void* Object; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float BlendTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceBlend; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextBlendStackTraitSharedData, Object) == 0, "Offset mismatch for FAnimNextBlendStackTraitSharedData::Object");
static_assert(offsetof(FAnimNextBlendStackTraitSharedData, BlendTime) == 8, "Offset mismatch for FAnimNextBlendStackTraitSharedData::BlendTime");
static_assert(offsetof(FAnimNextBlendStackTraitSharedData, bForceBlend) == 12, "Offset mismatch for FAnimNextBlendStackTraitSharedData::bForceBlend");

// /Script/UAFAnimGraph.AnimNextBlendTwoKeyframesTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextBlendTwoKeyframesTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float InterpolationAlpha; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextBlendTwoKeyframesTask, InterpolationAlpha) == 8, "Offset mismatch for FAnimNextBlendTwoKeyframesTask::InterpolationAlpha");

// /Script/UAFAnimGraph.AnimNextBlendTwoWayTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextBlendTwoWayTraitSharedData
{
public:
    std::uint8_t ChildA[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ChildB[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    float BlendWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetChildOnActivation; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysUpdateChildren; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextBlendTwoWayTraitSharedData, ChildA) == 0, "Offset mismatch for FAnimNextBlendTwoWayTraitSharedData::ChildA");
static_assert(offsetof(FAnimNextBlendTwoWayTraitSharedData, ChildB) == 4, "Offset mismatch for FAnimNextBlendTwoWayTraitSharedData::ChildB");
static_assert(offsetof(FAnimNextBlendTwoWayTraitSharedData, BlendWeight) == 8, "Offset mismatch for FAnimNextBlendTwoWayTraitSharedData::BlendWeight");
static_assert(offsetof(FAnimNextBlendTwoWayTraitSharedData, bResetChildOnActivation) == 12, "Offset mismatch for FAnimNextBlendTwoWayTraitSharedData::bResetChildOnActivation");
static_assert(offsetof(FAnimNextBlendTwoWayTraitSharedData, bAlwaysUpdateChildren) == 13, "Offset mismatch for FAnimNextBlendTwoWayTraitSharedData::bAlwaysUpdateChildren");

// /Script/UAFAnimGraph.AnimNextBoneMapping
// Kind: ScriptStruct; super: none
struct FAnimNextBoneMapping
{
public:
    std::uint8_t SourceBone[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName TargetBone; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAnimNextBoneMapping, SourceBone) == 0, "Offset mismatch for FAnimNextBoneMapping::SourceBone");
static_assert(offsetof(FAnimNextBoneMapping, TargetBone) == 4, "Offset mismatch for FAnimNextBoneMapping::TargetBone");

// /Script/UAFAnimGraph.AnimNextCallFunctionSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextCallFunctionSharedData
{
public:
    std::uint8_t FunctionReference[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t CallSite; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNextCallFunctionSharedData, FunctionReference) == 0, "Offset mismatch for FAnimNextCallFunctionSharedData::FunctionReference");
static_assert(offsetof(FAnimNextCallFunctionSharedData, CallSite) == 24, "Offset mismatch for FAnimNextCallFunctionSharedData::CallSite");

// /Script/UAFAnimGraph.AnimNextConvertRotationsToLocalSpaceTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextConvertRotationsToLocalSpaceTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t NumPoses; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNextConvertRotationsToLocalSpaceTask, NumPoses) == 8, "Offset mismatch for FAnimNextConvertRotationsToLocalSpaceTask::NumPoses");

// /Script/UAFAnimGraph.AnimNextConvertRotationsToMeshSpaceTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextConvertRotationsToMeshSpaceTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t NumPoses; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNextConvertRotationsToMeshSpaceTask, NumPoses) == 8, "Offset mismatch for FAnimNextConvertRotationsToMeshSpaceTask::NumPoses");

// /Script/UAFAnimGraph.AnimNextCopyBonesComponentSpaceTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextCopyBonesComponentSpaceTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextCopyBonesComponentSpaceTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextCopyBonesComponentSpaceTraitSharedData
{
public:
    TArray<void*> BoneMapping; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNextCopyBonesComponentSpaceTraitSharedData, BoneMapping) == 0, "Offset mismatch for FAnimNextCopyBonesComponentSpaceTraitSharedData::BoneMapping");

// /Script/UAFAnimGraph.AnimNextDeadBlendingApplyTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextDeadBlendingApplyTask
{
public:
    std::uint8_t Pad_0000[0x1C]; // 0x0000
    TWeakObjectPtr<void> CustomBlendCurve; // 0x001C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FAnimNextDeadBlendingApplyTask, CustomBlendCurve) == 28, "Offset mismatch for FAnimNextDeadBlendingApplyTask::CustomBlendCurve");

// /Script/UAFAnimGraph.AnimNextDeadBlendingTransitionTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextDeadBlendingTransitionTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextDuplicateTopKeyframeTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextDuplicateTopKeyframeTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextEntryPointHandle
// Kind: ScriptStruct; super: none
struct FAnimNextEntryPointHandle
{
public:
    std::uint32_t PackedTraitIndexAndNodeHandle; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FAnimNextEntryPointHandle, PackedTraitIndexAndNodeHandle) == 0, "Offset mismatch for FAnimNextEntryPointHandle::PackedTraitIndexAndNodeHandle");

// /Script/UAFAnimGraph.AnimNextEvaluationTask
// Kind: ScriptStruct; super: none
struct FAnimNextEvaluationTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextExecuteProgramTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextExecuteProgramTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextFactoryParams
// Kind: ScriptStruct; super: none
struct FAnimNextFactoryParams
{
public:
    std::uint8_t Builder[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextFactoryParams, Builder) == 0, "Offset mismatch for FAnimNextFactoryParams::Builder");

// /Script/UAFAnimGraph.AnimNextGraphContextData
// Kind: ScriptStruct; super: UAFAssetContextData
struct FAnimNextGraphContextData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextGraphEntryPoint
// Kind: ScriptStruct; super: none
struct FAnimNextGraphEntryPoint
{
public:
    std::uint8_t EntryPointName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t RootTraitHandle[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextGraphEntryPoint, EntryPointName) == 0, "Offset mismatch for FAnimNextGraphEntryPoint::EntryPointName");
static_assert(offsetof(FAnimNextGraphEntryPoint, RootTraitHandle) == 4, "Offset mismatch for FAnimNextGraphEntryPoint::RootTraitHandle");

// /Script/UAFAnimGraph.AnimNextGraphEvaluatorExecuteArgument
// Kind: ScriptStruct; super: none
struct FAnimNextGraphEvaluatorExecuteArgument
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString CPPType; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAnimNextGraphEvaluatorExecuteArgument, Name) == 0, "Offset mismatch for FAnimNextGraphEvaluatorExecuteArgument::Name");
static_assert(offsetof(FAnimNextGraphEvaluatorExecuteArgument, CPPType) == 16, "Offset mismatch for FAnimNextGraphEvaluatorExecuteArgument::CPPType");

// /Script/UAFAnimGraph.AnimNextGraphEvaluatorExecuteDefinition
// Kind: ScriptStruct; super: none
struct FAnimNextGraphEvaluatorExecuteDefinition
{
public:
    std::uint32_t Hash; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString MethodName; // 0x0008 (Size: 0x10, Type: StrProperty)
    TArray<void*> Arguments; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNextGraphEvaluatorExecuteDefinition, Hash) == 0, "Offset mismatch for FAnimNextGraphEvaluatorExecuteDefinition::Hash");
static_assert(offsetof(FAnimNextGraphEvaluatorExecuteDefinition, MethodName) == 8, "Offset mismatch for FAnimNextGraphEvaluatorExecuteDefinition::MethodName");
static_assert(offsetof(FAnimNextGraphEvaluatorExecuteDefinition, Arguments) == 24, "Offset mismatch for FAnimNextGraphEvaluatorExecuteDefinition::Arguments");

// /Script/UAFAnimGraph.AnimNextGraphInjectionData
// Kind: ScriptStruct; super: none
struct FAnimNextGraphInjectionData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextGraphInstance
// Kind: ScriptStruct; super: UAFAssetInstance
struct FAnimNextGraphInstance
{
public:
    TArray<void*> Components; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Variables[0x50]; // 0x0010 (Size: 0x50, Type: StructProperty)
    void* Asset; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* ScriptStruct; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNextGraphInstance, Components) == 0, "Offset mismatch for FAnimNextGraphInstance::Components");
static_assert(offsetof(FAnimNextGraphInstance, Variables) == 16, "Offset mismatch for FAnimNextGraphInstance::Variables");
static_assert(offsetof(FAnimNextGraphInstance, Asset) == 96, "Offset mismatch for FAnimNextGraphInstance::Asset");
static_assert(offsetof(FAnimNextGraphInstance, ScriptStruct) == 104, "Offset mismatch for FAnimNextGraphInstance::ScriptStruct");

// /Script/UAFAnimGraph.AnimNextGraphLatentPropertiesContextData
// Kind: ScriptStruct; super: AnimNextGraphContextData
struct FAnimNextGraphLatentPropertiesContextData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextInertializationDeadBlendTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextInertializationDeadBlendTraitSharedData
{
public:
    float DefaultBlendDuration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultBlendMode; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    void* DefaultCustomBlendCurve; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float ExtrapolationHalfLife; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ExtrapolationHalfLifeMin; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float ExtrapolationHalfLifeMax; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaximumTranslationVelocity; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaximumRotationVelocity; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaximumScaleVelocity; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MaximumCurveVelocity; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextInertializationDeadBlendTraitSharedData, DefaultBlendDuration) == 0, "Offset mismatch for FAnimNextInertializationDeadBlendTraitSharedData::DefaultBlendDuration");
static_assert(offsetof(FAnimNextInertializationDeadBlendTraitSharedData, DefaultBlendMode) == 4, "Offset mismatch for FAnimNextInertializationDeadBlendTraitSharedData::DefaultBlendMode");
static_assert(offsetof(FAnimNextInertializationDeadBlendTraitSharedData, DefaultCustomBlendCurve) == 8, "Offset mismatch for FAnimNextInertializationDeadBlendTraitSharedData::DefaultCustomBlendCurve");
static_assert(offsetof(FAnimNextInertializationDeadBlendTraitSharedData, ExtrapolationHalfLife) == 16, "Offset mismatch for FAnimNextInertializationDeadBlendTraitSharedData::ExtrapolationHalfLife");
static_assert(offsetof(FAnimNextInertializationDeadBlendTraitSharedData, ExtrapolationHalfLifeMin) == 20, "Offset mismatch for FAnimNextInertializationDeadBlendTraitSharedData::ExtrapolationHalfLifeMin");
static_assert(offsetof(FAnimNextInertializationDeadBlendTraitSharedData, ExtrapolationHalfLifeMax) == 24, "Offset mismatch for FAnimNextInertializationDeadBlendTraitSharedData::ExtrapolationHalfLifeMax");
static_assert(offsetof(FAnimNextInertializationDeadBlendTraitSharedData, MaximumTranslationVelocity) == 28, "Offset mismatch for FAnimNextInertializationDeadBlendTraitSharedData::MaximumTranslationVelocity");
static_assert(offsetof(FAnimNextInertializationDeadBlendTraitSharedData, MaximumRotationVelocity) == 32, "Offset mismatch for FAnimNextInertializationDeadBlendTraitSharedData::MaximumRotationVelocity");
static_assert(offsetof(FAnimNextInertializationDeadBlendTraitSharedData, MaximumScaleVelocity) == 36, "Offset mismatch for FAnimNextInertializationDeadBlendTraitSharedData::MaximumScaleVelocity");
static_assert(offsetof(FAnimNextInertializationDeadBlendTraitSharedData, MaximumCurveVelocity) == 40, "Offset mismatch for FAnimNextInertializationDeadBlendTraitSharedData::MaximumCurveVelocity");

// /Script/UAFAnimGraph.AnimNextInertializationRequestEvent
// Kind: ScriptStruct; super: AnimNextTraitEvent
struct FAnimNextInertializationRequestEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextInjectionBlendSettings
// Kind: ScriptStruct; super: none
struct FAnimNextInjectionBlendSettings
{
public:
    std::uint8_t Blend[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlendMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNextInjectionBlendSettings, Blend) == 0, "Offset mismatch for FAnimNextInjectionBlendSettings::Blend");
static_assert(offsetof(FAnimNextInjectionBlendSettings, BlendMode) == 16, "Offset mismatch for FAnimNextInjectionBlendSettings::BlendMode");

// /Script/UAFAnimGraph.AnimNextInjectionRequestArgs
// Kind: ScriptStruct; super: none
struct FAnimNextInjectionRequestArgs
{
public:
    std::uint8_t Site[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t BlendInSettings[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t BlendOutSettings[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    void* Object; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0070
    std::uint8_t Type; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LifetimeType; // 0x0081 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bTrackTimelineProgress; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0083
    std::uint8_t FactoryParams[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextInjectionRequestArgs, Site) == 0, "Offset mismatch for FAnimNextInjectionRequestArgs::Site");
static_assert(offsetof(FAnimNextInjectionRequestArgs, BlendInSettings) == 56, "Offset mismatch for FAnimNextInjectionRequestArgs::BlendInSettings");
static_assert(offsetof(FAnimNextInjectionRequestArgs, BlendOutSettings) == 80, "Offset mismatch for FAnimNextInjectionRequestArgs::BlendOutSettings");
static_assert(offsetof(FAnimNextInjectionRequestArgs, Object) == 104, "Offset mismatch for FAnimNextInjectionRequestArgs::Object");
static_assert(offsetof(FAnimNextInjectionRequestArgs, Type) == 128, "Offset mismatch for FAnimNextInjectionRequestArgs::Type");
static_assert(offsetof(FAnimNextInjectionRequestArgs, LifetimeType) == 129, "Offset mismatch for FAnimNextInjectionRequestArgs::LifetimeType");
static_assert(offsetof(FAnimNextInjectionRequestArgs, bTrackTimelineProgress) == 130, "Offset mismatch for FAnimNextInjectionRequestArgs::bTrackTimelineProgress");
static_assert(offsetof(FAnimNextInjectionRequestArgs, FactoryParams) == 136, "Offset mismatch for FAnimNextInjectionRequestArgs::FactoryParams");

// /Script/UAFAnimGraph.AnimNextInjectionSite
// Kind: ScriptStruct; super: none
struct FAnimNextInjectionSite
{
public:
    std::uint8_t DesiredSite[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseModuleFallback; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextInjectionSite, DesiredSite) == 0, "Offset mismatch for FAnimNextInjectionSite::DesiredSite");
static_assert(offsetof(FAnimNextInjectionSite, bUseModuleFallback) == 48, "Offset mismatch for FAnimNextInjectionSite::bUseModuleFallback");

// /Script/UAFAnimGraph.AnimNextInjectionSiteTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextInjectionSiteTraitSharedData
{
public:
    std::uint8_t Source[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Graph[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultBlendInSettings[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultBlendOutSettings[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextInjectionSiteTraitSharedData, Source) == 0, "Offset mismatch for FAnimNextInjectionSiteTraitSharedData::Source");
static_assert(offsetof(FAnimNextInjectionSiteTraitSharedData, Graph) == 8, "Offset mismatch for FAnimNextInjectionSiteTraitSharedData::Graph");
static_assert(offsetof(FAnimNextInjectionSiteTraitSharedData, DefaultBlendInSettings) == 48, "Offset mismatch for FAnimNextInjectionSiteTraitSharedData::DefaultBlendInSettings");
static_assert(offsetof(FAnimNextInjectionSiteTraitSharedData, DefaultBlendOutSettings) == 72, "Offset mismatch for FAnimNextInjectionSiteTraitSharedData::DefaultBlendOutSettings");

// /Script/UAFAnimGraph.AnimNextInputPoseTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextInputPoseTraitSharedData
{
public:
    std::uint8_t Input[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextInputPoseTraitSharedData, Input) == 0, "Offset mismatch for FAnimNextInputPoseTraitSharedData::Input");

// /Script/UAFAnimGraph.AnimNextModifyCurveTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextModifyCurveTraitSharedData
{
public:
    std::uint8_t ApplyMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> ModifyCurveParameters; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float Alpha; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNextModifyCurveTraitSharedData, ApplyMode) == 0, "Offset mismatch for FAnimNextModifyCurveTraitSharedData::ApplyMode");
static_assert(offsetof(FAnimNextModifyCurveTraitSharedData, ModifyCurveParameters) == 8, "Offset mismatch for FAnimNextModifyCurveTraitSharedData::ModifyCurveParameters");
static_assert(offsetof(FAnimNextModifyCurveTraitSharedData, Alpha) == 24, "Offset mismatch for FAnimNextModifyCurveTraitSharedData::Alpha");

// /Script/UAFAnimGraph.AnimNextModuleAnimGraphComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FAnimNextModuleAnimGraphComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextModuleInjectionComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FAnimNextModuleInjectionComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextNativeDataInterface_AnimSequencePlayer
// Kind: ScriptStruct; super: AnimNextNativeDataInterface
struct FAnimNextNativeDataInterface_AnimSequencePlayer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* AnimSequence; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    double PlayRate; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double StartPosition; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Loop; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextNativeDataInterface_AnimSequencePlayer, AnimSequence) == 8, "Offset mismatch for FAnimNextNativeDataInterface_AnimSequencePlayer::AnimSequence");
static_assert(offsetof(FAnimNextNativeDataInterface_AnimSequencePlayer, PlayRate) == 16, "Offset mismatch for FAnimNextNativeDataInterface_AnimSequencePlayer::PlayRate");
static_assert(offsetof(FAnimNextNativeDataInterface_AnimSequencePlayer, StartPosition) == 24, "Offset mismatch for FAnimNextNativeDataInterface_AnimSequencePlayer::StartPosition");
static_assert(offsetof(FAnimNextNativeDataInterface_AnimSequencePlayer, Loop) == 32, "Offset mismatch for FAnimNextNativeDataInterface_AnimSequencePlayer::Loop");

// /Script/UAFAnimGraph.AnimNextNativeDataInterface_BlendSpacePlayer
// Kind: ScriptStruct; super: AnimNextNativeDataInterface
struct FAnimNextNativeDataInterface_BlendSpacePlayer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* BlendSpace; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    double XAxisSamplePoint; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double YAxisSamplePoint; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double PlayRate; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double StartPosition; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Loop; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextNativeDataInterface_BlendSpacePlayer, BlendSpace) == 8, "Offset mismatch for FAnimNextNativeDataInterface_BlendSpacePlayer::BlendSpace");
static_assert(offsetof(FAnimNextNativeDataInterface_BlendSpacePlayer, XAxisSamplePoint) == 16, "Offset mismatch for FAnimNextNativeDataInterface_BlendSpacePlayer::XAxisSamplePoint");
static_assert(offsetof(FAnimNextNativeDataInterface_BlendSpacePlayer, YAxisSamplePoint) == 24, "Offset mismatch for FAnimNextNativeDataInterface_BlendSpacePlayer::YAxisSamplePoint");
static_assert(offsetof(FAnimNextNativeDataInterface_BlendSpacePlayer, PlayRate) == 32, "Offset mismatch for FAnimNextNativeDataInterface_BlendSpacePlayer::PlayRate");
static_assert(offsetof(FAnimNextNativeDataInterface_BlendSpacePlayer, StartPosition) == 40, "Offset mismatch for FAnimNextNativeDataInterface_BlendSpacePlayer::StartPosition");
static_assert(offsetof(FAnimNextNativeDataInterface_BlendSpacePlayer, Loop) == 48, "Offset mismatch for FAnimNextNativeDataInterface_BlendSpacePlayer::Loop");

// /Script/UAFAnimGraph.AnimNextNativeDataInterface_SynchronizeUsingGroups
// Kind: ScriptStruct; super: AnimNextNativeDataInterface
struct FAnimNextNativeDataInterface_SynchronizeUsingGroups
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t GroupName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupRole; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t SyncMode; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t MatchSyncPoint; // 0x000E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextNativeDataInterface_SynchronizeUsingGroups, GroupName) == 8, "Offset mismatch for FAnimNextNativeDataInterface_SynchronizeUsingGroups::GroupName");
static_assert(offsetof(FAnimNextNativeDataInterface_SynchronizeUsingGroups, GroupRole) == 12, "Offset mismatch for FAnimNextNativeDataInterface_SynchronizeUsingGroups::GroupRole");
static_assert(offsetof(FAnimNextNativeDataInterface_SynchronizeUsingGroups, SyncMode) == 13, "Offset mismatch for FAnimNextNativeDataInterface_SynchronizeUsingGroups::SyncMode");
static_assert(offsetof(FAnimNextNativeDataInterface_SynchronizeUsingGroups, MatchSyncPoint) == 14, "Offset mismatch for FAnimNextNativeDataInterface_SynchronizeUsingGroups::MatchSyncPoint");

// /Script/UAFAnimGraph.AnimNextNormalizeKeyframeRotationsTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextNormalizeKeyframeRotationsTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextNotifyDispatcherTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextNotifyDispatcherTraitSharedData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextNotifyFilterTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextNotifyFilterTraitSharedData
{
public:
    std::uint8_t bShouldDisableNotifies; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextNotifyFilterTraitSharedData, bShouldDisableNotifies) == 0, "Offset mismatch for FAnimNextNotifyFilterTraitSharedData::bShouldDisableNotifies");

// /Script/UAFAnimGraph.AnimNextPassthroughSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextPassthroughSharedData
{
public:
    std::uint8_t Input[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextPassthroughSharedData, Input) == 0, "Offset mismatch for FAnimNextPassthroughSharedData::Input");

// /Script/UAFAnimGraph.AnimNextPlayAnimSlotTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextPlayAnimSlotTraitSharedData
{
public:
    std::uint8_t Source[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    FName SlotName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAnimNextPlayAnimSlotTraitSharedData, Source) == 0, "Offset mismatch for FAnimNextPlayAnimSlotTraitSharedData::Source");
static_assert(offsetof(FAnimNextPlayAnimSlotTraitSharedData, SlotName) == 4, "Offset mismatch for FAnimNextPlayAnimSlotTraitSharedData::SlotName");

// /Script/UAFAnimGraph.AnimNextPushPoseTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextPushPoseTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextPushReferenceKeyframeTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextPushReferenceKeyframeTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsAdditive; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextPushReferenceKeyframeTask, bIsAdditive) == 8, "Offset mismatch for FAnimNextPushReferenceKeyframeTask::bIsAdditive");

// /Script/UAFAnimGraph.AnimNextReferencePoseTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextReferencePoseTraitSharedData
{
public:
    std::uint8_t ReferencePoseType; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNextReferencePoseTraitSharedData, ReferencePoseType) == 0, "Offset mismatch for FAnimNextReferencePoseTraitSharedData::ReferencePoseType");

// /Script/UAFAnimGraph.AnimNextRunGraphWorkData_v1
// Kind: ScriptStruct; super: none
struct FAnimNextRunGraphWorkData_v1
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextRunGraphWorkData_v2
// Kind: ScriptStruct; super: none
struct FAnimNextRunGraphWorkData_v2
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InjectedGraphReference[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextRunGraphWorkData_v2, InjectedGraphReference) == 16, "Offset mismatch for FAnimNextRunGraphWorkData_v2::InjectedGraphReference");

// /Script/UAFAnimGraph.AnimNextSequencePlayerTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextSequencePlayerTraitSharedData
{
public:
    void* AnimSequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float PlayRate; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float StartPosition; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t LoopMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNextSequencePlayerTraitSharedData, AnimSequence) == 0, "Offset mismatch for FAnimNextSequencePlayerTraitSharedData::AnimSequence");
static_assert(offsetof(FAnimNextSequencePlayerTraitSharedData, PlayRate) == 8, "Offset mismatch for FAnimNextSequencePlayerTraitSharedData::PlayRate");
static_assert(offsetof(FAnimNextSequencePlayerTraitSharedData, StartPosition) == 12, "Offset mismatch for FAnimNextSequencePlayerTraitSharedData::StartPosition");
static_assert(offsetof(FAnimNextSequencePlayerTraitSharedData, LoopMode) == 16, "Offset mismatch for FAnimNextSequencePlayerTraitSharedData::LoopMode");

// /Script/UAFAnimGraph.AnimNextSimpleAnimGraphBuilder
// Kind: ScriptStruct; super: AnimNextAnimGraphBuilder
struct FAnimNextSimpleAnimGraphBuilder
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Stacks; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariableStructs; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentStructs; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReferencedVariableRigVMAssets; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReferencedVariableAssets; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNextSimpleAnimGraphBuilder, Stacks) == 16, "Offset mismatch for FAnimNextSimpleAnimGraphBuilder::Stacks");
static_assert(offsetof(FAnimNextSimpleAnimGraphBuilder, VariableStructs) == 32, "Offset mismatch for FAnimNextSimpleAnimGraphBuilder::VariableStructs");
static_assert(offsetof(FAnimNextSimpleAnimGraphBuilder, ComponentStructs) == 48, "Offset mismatch for FAnimNextSimpleAnimGraphBuilder::ComponentStructs");
static_assert(offsetof(FAnimNextSimpleAnimGraphBuilder, ReferencedVariableRigVMAssets) == 64, "Offset mismatch for FAnimNextSimpleAnimGraphBuilder::ReferencedVariableRigVMAssets");
static_assert(offsetof(FAnimNextSimpleAnimGraphBuilder, ReferencedVariableAssets) == 80, "Offset mismatch for FAnimNextSimpleAnimGraphBuilder::ReferencedVariableAssets");

// /Script/UAFAnimGraph.AnimNextSimpleAnimGraphBuilderLinkDesc
// Kind: ScriptStruct; super: none
struct FAnimNextSimpleAnimGraphBuilderLinkDesc
{
public:
    std::int32_t StackIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TraitIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    FName ChildName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAnimNextSimpleAnimGraphBuilderLinkDesc, StackIndex) == 0, "Offset mismatch for FAnimNextSimpleAnimGraphBuilderLinkDesc::StackIndex");
static_assert(offsetof(FAnimNextSimpleAnimGraphBuilderLinkDesc, TraitIndex) == 4, "Offset mismatch for FAnimNextSimpleAnimGraphBuilderLinkDesc::TraitIndex");
static_assert(offsetof(FAnimNextSimpleAnimGraphBuilderLinkDesc, ChildName) == 8, "Offset mismatch for FAnimNextSimpleAnimGraphBuilderLinkDesc::ChildName");

// /Script/UAFAnimGraph.AnimNextSimpleAnimGraphBuilderTraitDesc
// Kind: ScriptStruct; super: none
struct FAnimNextSimpleAnimGraphBuilderTraitDesc
{
public:
    std::uint8_t TraitData[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> VariableMappings; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNextSimpleAnimGraphBuilderTraitDesc, TraitData) == 0, "Offset mismatch for FAnimNextSimpleAnimGraphBuilderTraitDesc::TraitData");
static_assert(offsetof(FAnimNextSimpleAnimGraphBuilderTraitDesc, VariableMappings) == 16, "Offset mismatch for FAnimNextSimpleAnimGraphBuilderTraitDesc::VariableMappings");

// /Script/UAFAnimGraph.AnimNextSimpleAnimGraphBuilderTraitStackDesc
// Kind: ScriptStruct; super: none
struct FAnimNextSimpleAnimGraphBuilderTraitStackDesc
{
public:
    TArray<void*> TraitDescs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Link[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNextSimpleAnimGraphBuilderTraitStackDesc, TraitDescs) == 0, "Offset mismatch for FAnimNextSimpleAnimGraphBuilderTraitStackDesc::TraitDescs");
static_assert(offsetof(FAnimNextSimpleAnimGraphBuilderTraitStackDesc, Link) == 16, "Offset mismatch for FAnimNextSimpleAnimGraphBuilderTraitStackDesc::Link");

// /Script/UAFAnimGraph.AnimNextSimpleAnimGraphBuilderVariableMapping
// Kind: ScriptStruct; super: none
struct FAnimNextSimpleAnimGraphBuilderVariableMapping
{
public:
    std::uint8_t VariableReference[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    FName PropertyName; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAnimNextSimpleAnimGraphBuilderVariableMapping, VariableReference) == 0, "Offset mismatch for FAnimNextSimpleAnimGraphBuilderVariableMapping::VariableReference");
static_assert(offsetof(FAnimNextSimpleAnimGraphBuilderVariableMapping, PropertyName) == 48, "Offset mismatch for FAnimNextSimpleAnimGraphBuilderVariableMapping::PropertyName");

// /Script/UAFAnimGraph.AnimNextStoreKeyframeTransformsTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextStoreKeyframeTransformsTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextSubGraphHostTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextSubGraphHostTraitSharedData
{
public:
    void* AnimationGraph; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReferencePoseChild[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    FName EntryPoint; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAnimNextSubGraphHostTraitSharedData, AnimationGraph) == 0, "Offset mismatch for FAnimNextSubGraphHostTraitSharedData::AnimationGraph");
static_assert(offsetof(FAnimNextSubGraphHostTraitSharedData, ReferencePoseChild) == 8, "Offset mismatch for FAnimNextSubGraphHostTraitSharedData::ReferencePoseChild");
static_assert(offsetof(FAnimNextSubGraphHostTraitSharedData, EntryPoint) == 12, "Offset mismatch for FAnimNextSubGraphHostTraitSharedData::EntryPoint");

// /Script/UAFAnimGraph.AnimNextSwapTransformsTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FAnimNextSwapTransformsTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextSynchronizeUsingGroupsTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FAnimNextSynchronizeUsingGroupsTraitSharedData
{
public:
    std::uint8_t GroupName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupRole; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SyncMode; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bMatchSyncPoint; // 0x0006 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNextSynchronizeUsingGroupsTraitSharedData, GroupName) == 0, "Offset mismatch for FAnimNextSynchronizeUsingGroupsTraitSharedData::GroupName");
static_assert(offsetof(FAnimNextSynchronizeUsingGroupsTraitSharedData, GroupRole) == 4, "Offset mismatch for FAnimNextSynchronizeUsingGroupsTraitSharedData::GroupRole");
static_assert(offsetof(FAnimNextSynchronizeUsingGroupsTraitSharedData, SyncMode) == 5, "Offset mismatch for FAnimNextSynchronizeUsingGroupsTraitSharedData::SyncMode");
static_assert(offsetof(FAnimNextSynchronizeUsingGroupsTraitSharedData, bMatchSyncPoint) == 6, "Offset mismatch for FAnimNextSynchronizeUsingGroupsTraitSharedData::bMatchSyncPoint");

// /Script/UAFAnimGraph.AnimNextTraitHandle
// Kind: ScriptStruct; super: none
struct FAnimNextTraitHandle
{
public:
    std::uint32_t PackedTraitIndexAndNodeHandle; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FAnimNextTraitHandle, PackedTraitIndexAndNodeHandle) == 0, "Offset mismatch for FAnimNextTraitHandle::PackedTraitIndexAndNodeHandle");

// /Script/UAFAnimGraph.AnimNextTraitSharedData
// Kind: ScriptStruct; super: none
struct FAnimNextTraitSharedData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNode_AnimNextGraph
// Kind: ScriptStruct; super: AnimNode_CustomProperty
struct FAnimNode_AnimNextGraph
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t SourceLink[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    void* AnimationGraph; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0070
    std::int32_t LODThreshold; // 0x0080 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNode_AnimNextGraph, SourceLink) == 88, "Offset mismatch for FAnimNode_AnimNextGraph::SourceLink");
static_assert(offsetof(FAnimNode_AnimNextGraph, AnimationGraph) == 104, "Offset mismatch for FAnimNode_AnimNextGraph::AnimationGraph");
static_assert(offsetof(FAnimNode_AnimNextGraph, LODThreshold) == 128, "Offset mismatch for FAnimNode_AnimNextGraph::LODThreshold");

// /Script/UAFAnimGraph.ApplyAdditivePerBoneTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FApplyAdditivePerBoneTraitSharedData
{
public:
    std::uint8_t base[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Additive[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    void* BlendMask; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float Alpha; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bMeshSpaceBlend; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FApplyAdditivePerBoneTraitSharedData, base) == 0, "Offset mismatch for FApplyAdditivePerBoneTraitSharedData::base");
static_assert(offsetof(FApplyAdditivePerBoneTraitSharedData, Additive) == 4, "Offset mismatch for FApplyAdditivePerBoneTraitSharedData::Additive");
static_assert(offsetof(FApplyAdditivePerBoneTraitSharedData, BlendMask) == 8, "Offset mismatch for FApplyAdditivePerBoneTraitSharedData::BlendMask");
static_assert(offsetof(FApplyAdditivePerBoneTraitSharedData, Alpha) == 16, "Offset mismatch for FApplyAdditivePerBoneTraitSharedData::Alpha");
static_assert(offsetof(FApplyAdditivePerBoneTraitSharedData, bMeshSpaceBlend) == 20, "Offset mismatch for FApplyAdditivePerBoneTraitSharedData::bMeshSpaceBlend");

// /Script/UAFAnimGraph.ApplyNamedSetSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FApplyNamedSetSharedData
{
public:
    std::uint8_t Input[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    FName SetName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FApplyNamedSetSharedData, Input) == 0, "Offset mismatch for FApplyNamedSetSharedData::Input");
static_assert(offsetof(FApplyNamedSetSharedData, SetName) == 4, "Offset mismatch for FApplyNamedSetSharedData::SetName");

// /Script/UAFAnimGraph.BoolAlphaInputTraitArgs
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FBoolAlphaInputTraitArgs
{
public:
    std::uint8_t bAlphaBoolEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t AlphaBoolBlend[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBoolAlphaInputTraitArgs, bAlphaBoolEnabled) == 0, "Offset mismatch for FBoolAlphaInputTraitArgs::bAlphaBoolEnabled");
static_assert(offsetof(FBoolAlphaInputTraitArgs, AlphaBoolBlend) == 8, "Offset mismatch for FBoolAlphaInputTraitArgs::AlphaBoolBlend");

// /Script/UAFAnimGraph.CurveAlphaInputTraitArgs
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FCurveAlphaInputTraitArgs
{
public:
    std::uint8_t AlphaScaleBiasClamp[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    FName AlphaCurveName; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCurveAlphaInputTraitArgs, AlphaScaleBiasClamp) == 0, "Offset mismatch for FCurveAlphaInputTraitArgs::AlphaScaleBiasClamp");
static_assert(offsetof(FCurveAlphaInputTraitArgs, AlphaCurveName) == 48, "Offset mismatch for FCurveAlphaInputTraitArgs::AlphaCurveName");

// /Script/UAFAnimGraph.FloatAlphaInputTraitArgs
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FFloatAlphaInputTraitArgs
{
public:
    float Alpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t AlphaScaleBiasClamp[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFloatAlphaInputTraitArgs, Alpha) == 0, "Offset mismatch for FFloatAlphaInputTraitArgs::Alpha");
static_assert(offsetof(FFloatAlphaInputTraitArgs, AlphaScaleBias) == 4, "Offset mismatch for FFloatAlphaInputTraitArgs::AlphaScaleBias");
static_assert(offsetof(FFloatAlphaInputTraitArgs, AlphaScaleBiasClamp) == 12, "Offset mismatch for FFloatAlphaInputTraitArgs::AlphaScaleBiasClamp");

// /Script/UAFAnimGraph.GraphInstanceInjectionComponent
// Kind: ScriptStruct; super: UAFGraphInstanceComponent
struct FGraphInstanceInjectionComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.MakeDynamicAdditiveTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FMakeDynamicAdditiveTraitSharedData
{
public:
    std::uint8_t base[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Additive[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t bMeshSpaceAdditive; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMakeDynamicAdditiveTraitSharedData, base) == 0, "Offset mismatch for FMakeDynamicAdditiveTraitSharedData::base");
static_assert(offsetof(FMakeDynamicAdditiveTraitSharedData, Additive) == 4, "Offset mismatch for FMakeDynamicAdditiveTraitSharedData::Additive");
static_assert(offsetof(FMakeDynamicAdditiveTraitSharedData, bMeshSpaceAdditive) == 8, "Offset mismatch for FMakeDynamicAdditiveTraitSharedData::bMeshSpaceAdditive");

// /Script/UAFAnimGraph.ModifyCurveParameters
// Kind: ScriptStruct; super: none
struct FModifyCurveParameters
{
public:
    std::uint8_t CurveName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float CurveValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FModifyCurveParameters, CurveName) == 0, "Offset mismatch for FModifyCurveParameters::CurveName");
static_assert(offsetof(FModifyCurveParameters, CurveValue) == 4, "Offset mismatch for FModifyCurveParameters::CurveValue");

// /Script/UAFAnimGraph.ModifyCurveTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FModifyCurveTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.PassthroughBlendTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FPassthroughBlendTraitSharedData
{
public:
    float Alpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaScaleBias[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t AlphaScaleBiasClamp[0x30]; // 0x000C (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x003D
    std::uint8_t AlphaBoolBlend[0x48]; // 0x0040 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaInputType; // 0x008C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPassthroughBlendTraitSharedData, Alpha) == 0, "Offset mismatch for FPassthroughBlendTraitSharedData::Alpha");
static_assert(offsetof(FPassthroughBlendTraitSharedData, AlphaScaleBias) == 4, "Offset mismatch for FPassthroughBlendTraitSharedData::AlphaScaleBias");
static_assert(offsetof(FPassthroughBlendTraitSharedData, AlphaScaleBiasClamp) == 12, "Offset mismatch for FPassthroughBlendTraitSharedData::AlphaScaleBiasClamp");
static_assert(offsetof(FPassthroughBlendTraitSharedData, bAlphaBoolEnabled) == 60, "Offset mismatch for FPassthroughBlendTraitSharedData::bAlphaBoolEnabled");
static_assert(offsetof(FPassthroughBlendTraitSharedData, AlphaBoolBlend) == 64, "Offset mismatch for FPassthroughBlendTraitSharedData::AlphaBoolBlend");
static_assert(offsetof(FPassthroughBlendTraitSharedData, AlphaCurveName) == 136, "Offset mismatch for FPassthroughBlendTraitSharedData::AlphaCurveName");
static_assert(offsetof(FPassthroughBlendTraitSharedData, AlphaInputType) == 140, "Offset mismatch for FPassthroughBlendTraitSharedData::AlphaInputType");

// /Script/UAFAnimGraph.PopNamedSetTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FPopNamedSetTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.PushNamedSetTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FPushNamedSetTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.RigDecorator_AnimNextCppDecorator
// Kind: ScriptStruct; super: RigVMTrait
struct FRigDecorator_AnimNextCppDecorator
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* DecoratorSharedDataStruct; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRigDecorator_AnimNextCppDecorator, DecoratorSharedDataStruct) == 24, "Offset mismatch for FRigDecorator_AnimNextCppDecorator::DecoratorSharedDataStruct");

// /Script/UAFAnimGraph.RigUnit_AnimNextGraphEvaluator
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextGraphEvaluator
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextGraphEvaluator, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextGraphEvaluator::ExecuteContext");

// /Script/UAFAnimGraph.RigUnit_AnimNextGraphRoot
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextGraphRoot
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Result[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExecuteContext[0x110]; // 0x0010 (Size: 0x110, Type: StructProperty)
    FName EntryPoint; // 0x0120 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_AnimNextGraphRoot, Result) == 8, "Offset mismatch for FRigUnit_AnimNextGraphRoot::Result");
static_assert(offsetof(FRigUnit_AnimNextGraphRoot, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextGraphRoot::ExecuteContext");
static_assert(offsetof(FRigUnit_AnimNextGraphRoot, EntryPoint) == 288, "Offset mismatch for FRigUnit_AnimNextGraphRoot::EntryPoint");

// /Script/UAFAnimGraph.RigUnit_AnimNextRunAnimationGraph_v1
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextRunAnimationGraph_v1
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Graph; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Instance[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::int32_t LOD; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    std::uint8_t ReferencePose[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    std::uint8_t Overrides[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t Result[0xE0]; // 0x0058 (Size: 0xE0, Type: StructProperty)
    std::uint8_t WorkData[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v1, Graph) == 8, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v1::Graph");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v1, Instance) == 16, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v1::Instance");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v1, LOD) == 56, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v1::LOD");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v1, ReferencePose) == 64, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v1::ReferencePose");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v1, Overrides) == 72, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v1::Overrides");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v1, Result) == 88, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v1::Result");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v1, WorkData) == 312, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v1::WorkData");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v1, ExecuteContext) == 336, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v1::ExecuteContext");

// /Script/UAFAnimGraph.RigUnit_AnimNextRunAnimationGraph_v2
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextRunAnimationGraph_v2
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Graph[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::int32_t LOD; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t ReferencePose[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    std::uint8_t Overrides[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    FName AttributeSet; // 0x0050 (Size: 0x8, Type: NameProperty)
    std::uint8_t Result[0xE0]; // 0x0058 (Size: 0xE0, Type: StructProperty)
    std::uint8_t WorkData[0x48]; // 0x0138 (Size: 0x48, Type: StructProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v2, Graph) == 8, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v2::Graph");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v2, LOD) == 48, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v2::LOD");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v2, ReferencePose) == 56, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v2::ReferencePose");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v2, Overrides) == 64, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v2::Overrides");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v2, AttributeSet) == 80, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v2::AttributeSet");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v2, Result) == 88, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v2::Result");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v2, WorkData) == 312, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v2::WorkData");
static_assert(offsetof(FRigUnit_AnimNextRunAnimationGraph_v2, ExecuteContext) == 384, "Offset mismatch for FRigUnit_AnimNextRunAnimationGraph_v2::ExecuteContext");

// /Script/UAFAnimGraph.RigUnit_AnimNextSetNotifyContext
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextSetNotifyContext
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SkeletalMeshComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextSetNotifyContext, SkeletalMeshComponent) == 8, "Offset mismatch for FRigUnit_AnimNextSetNotifyContext::SkeletalMeshComponent");
static_assert(offsetof(FRigUnit_AnimNextSetNotifyContext, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextSetNotifyContext::ExecuteContext");

// /Script/UAFAnimGraph.RigUnit_AnimNextShimRoot
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextShimRoot
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextShimRoot, ExecuteContext) == 16, "Offset mismatch for FRigUnit_AnimNextShimRoot::ExecuteContext");

// /Script/UAFAnimGraph.RigUnit_AnimNextTraitStack
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_AnimNextTraitStack
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Result[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AnimNextTraitStack, Result) == 8, "Offset mismatch for FRigUnit_AnimNextTraitStack::Result");

// /Script/UAFAnimGraph.RigUnit_GetPostProcessAnimation
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_GetPostProcessAnimation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SkeletalMeshComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t LODLevel; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t Graph[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldEvaluate; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0041
    std::int32_t LODThreshold; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0048
    std::uint8_t ExecuteContext[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetPostProcessAnimation, SkeletalMeshComponent) == 8, "Offset mismatch for FRigUnit_GetPostProcessAnimation::SkeletalMeshComponent");
static_assert(offsetof(FRigUnit_GetPostProcessAnimation, LODLevel) == 16, "Offset mismatch for FRigUnit_GetPostProcessAnimation::LODLevel");
static_assert(offsetof(FRigUnit_GetPostProcessAnimation, Graph) == 24, "Offset mismatch for FRigUnit_GetPostProcessAnimation::Graph");
static_assert(offsetof(FRigUnit_GetPostProcessAnimation, bShouldEvaluate) == 64, "Offset mismatch for FRigUnit_GetPostProcessAnimation::bShouldEvaluate");
static_assert(offsetof(FRigUnit_GetPostProcessAnimation, LODThreshold) == 68, "Offset mismatch for FRigUnit_GetPostProcessAnimation::LODThreshold");
static_assert(offsetof(FRigUnit_GetPostProcessAnimation, ExecuteContext) == 80, "Offset mismatch for FRigUnit_GetPostProcessAnimation::ExecuteContext");

// /Script/UAFAnimGraph.RigUnit_GetSlotLocalWeight
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_GetSlotLocalWeight
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SlotNodeName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float LocalWeight; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_GetSlotLocalWeight, SlotNodeName) == 8, "Offset mismatch for FRigUnit_GetSlotLocalWeight::SlotNodeName");
static_assert(offsetof(FRigUnit_GetSlotLocalWeight, LocalWeight) == 12, "Offset mismatch for FRigUnit_GetSlotLocalWeight::LocalWeight");

// /Script/UAFAnimGraph.RigUnit_HasValidEvaluationModifier
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_HasValidEvaluationModifier
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InjectionData[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bValue; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HasValidEvaluationModifier, InjectionData) == 8, "Offset mismatch for FRigUnit_HasValidEvaluationModifier::InjectionData");
static_assert(offsetof(FRigUnit_HasValidEvaluationModifier, bValue) == 32, "Offset mismatch for FRigUnit_HasValidEvaluationModifier::bValue");

// /Script/UAFAnimGraph.RigUnit_IsSlotActive
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_IsSlotActive
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SlotNodeName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Result; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_IsSlotActive, SlotNodeName) == 8, "Offset mismatch for FRigUnit_IsSlotActive::SlotNodeName");
static_assert(offsetof(FRigUnit_IsSlotActive, Result) == 12, "Offset mismatch for FRigUnit_IsSlotActive::Result");

// /Script/UAFAnimGraph.RigUnit_UAFRunAsset
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_UAFRunAsset
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Graph[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t Overrides[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    FName AttributeSet; // 0x0040 (Size: 0x8, Type: NameProperty)
    std::uint8_t Result[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t WorkData[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    std::uint8_t ExecuteContext[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_UAFRunAsset, Graph) == 8, "Offset mismatch for FRigUnit_UAFRunAsset::Graph");
static_assert(offsetof(FRigUnit_UAFRunAsset, Overrides) == 48, "Offset mismatch for FRigUnit_UAFRunAsset::Overrides");
static_assert(offsetof(FRigUnit_UAFRunAsset, AttributeSet) == 64, "Offset mismatch for FRigUnit_UAFRunAsset::AttributeSet");
static_assert(offsetof(FRigUnit_UAFRunAsset, Result) == 72, "Offset mismatch for FRigUnit_UAFRunAsset::Result");
static_assert(offsetof(FRigUnit_UAFRunAsset, WorkData) == 88, "Offset mismatch for FRigUnit_UAFRunAsset::WorkData");
static_assert(offsetof(FRigUnit_UAFRunAsset, ExecuteContext) == 160, "Offset mismatch for FRigUnit_UAFRunAsset::ExecuteContext");

// /Script/UAFAnimGraph.SerializableEvaluationProgram
// Kind: ScriptStruct; super: none
struct FSerializableEvaluationProgram
{
public:
    TArray<void*> Tasks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSerializableEvaluationProgram, Tasks) == 0, "Offset mismatch for FSerializableEvaluationProgram::Tasks");

// /Script/UAFAnimGraph.SimpleFloatAlphaInputTraitArgs
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FSimpleFloatAlphaInputTraitArgs
{
public:
    float Alpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSimpleFloatAlphaInputTraitArgs, Alpha) == 0, "Offset mismatch for FSimpleFloatAlphaInputTraitArgs::Alpha");

// /Script/UAFAnimGraph.SyncGroupGraphInstanceComponent
// Kind: ScriptStruct; super: UAFGraphInstanceComponent
struct FSyncGroupGraphInstanceComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.UAFAnimGraphInitializerComponent
// Kind: ScriptStruct; super: UAFGraphInstanceComponent
struct FUAFAnimGraphInitializerComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.UAFApplyAdditiveKeyframePerBoneTask
// Kind: ScriptStruct; super: AnimNextApplyAdditiveKeyframeTask
struct FUAFApplyAdditiveKeyframePerBoneTask
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float BlendWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFApplyAdditiveKeyframePerBoneTask, BlendWeight) == 8, "Offset mismatch for FUAFApplyAdditiveKeyframePerBoneTask::BlendWeight");

// /Script/UAFAnimGraph.UAFApplyAdditiveKeyframeWithBlendMaskTask
// Kind: ScriptStruct; super: AnimNextApplyAdditiveKeyframeTask
struct FUAFApplyAdditiveKeyframeWithBlendMaskTask
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* BlendMask; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFApplyAdditiveKeyframeWithBlendMaskTask, BlendMask) == 80, "Offset mismatch for FUAFApplyAdditiveKeyframeWithBlendMaskTask::BlendMask");

// /Script/UAFAnimGraph.UAFBlendLayerTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FUAFBlendLayerTraitSharedData
{
public:
    std::uint8_t ChildBase[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ChildBlend[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    float BlendWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* BlendMask; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bBlendInMeshSpace; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysUpdateChildBlend; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFBlendLayerTraitSharedData, ChildBase) == 0, "Offset mismatch for FUAFBlendLayerTraitSharedData::ChildBase");
static_assert(offsetof(FUAFBlendLayerTraitSharedData, ChildBlend) == 4, "Offset mismatch for FUAFBlendLayerTraitSharedData::ChildBlend");
static_assert(offsetof(FUAFBlendLayerTraitSharedData, BlendWeight) == 8, "Offset mismatch for FUAFBlendLayerTraitSharedData::BlendWeight");
static_assert(offsetof(FUAFBlendLayerTraitSharedData, BlendMask) == 16, "Offset mismatch for FUAFBlendLayerTraitSharedData::BlendMask");
static_assert(offsetof(FUAFBlendLayerTraitSharedData, bBlendInMeshSpace) == 24, "Offset mismatch for FUAFBlendLayerTraitSharedData::bBlendInMeshSpace");
static_assert(offsetof(FUAFBlendLayerTraitSharedData, bAlwaysUpdateChildBlend) == 25, "Offset mismatch for FUAFBlendLayerTraitSharedData::bAlwaysUpdateChildBlend");

// /Script/UAFAnimGraph.UAFBlendSmootherPerBoneTraitSharedData
// Kind: ScriptStruct; super: AnimNextBlendSmootherPerBoneCoreTraitSharedData
struct FUAFBlendSmootherPerBoneTraitSharedData
{
public:
    TArray<void*> BlendProfiles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUAFBlendSmootherPerBoneTraitSharedData, BlendProfiles) == 0, "Offset mismatch for FUAFBlendSmootherPerBoneTraitSharedData::BlendProfiles");

// /Script/UAFAnimGraph.UAFCallFunctionInfo
// Kind: ScriptStruct; super: none
struct FUAFCallFunctionInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.UAFGraphFactoryAsset_Animation
// Kind: ScriptStruct; super: UAFGraphFactoryAsset
struct FUAFGraphFactoryAsset_Animation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* AnimationSequence; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float PlayRate; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LoopMode; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StartTimeType; // 0x0015 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    float StartTimeSeconds; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float StartTimePercent; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFGraphFactoryAsset_Animation, AnimationSequence) == 8, "Offset mismatch for FUAFGraphFactoryAsset_Animation::AnimationSequence");
static_assert(offsetof(FUAFGraphFactoryAsset_Animation, PlayRate) == 16, "Offset mismatch for FUAFGraphFactoryAsset_Animation::PlayRate");
static_assert(offsetof(FUAFGraphFactoryAsset_Animation, LoopMode) == 20, "Offset mismatch for FUAFGraphFactoryAsset_Animation::LoopMode");
static_assert(offsetof(FUAFGraphFactoryAsset_Animation, StartTimeType) == 21, "Offset mismatch for FUAFGraphFactoryAsset_Animation::StartTimeType");
static_assert(offsetof(FUAFGraphFactoryAsset_Animation, StartTimeSeconds) == 24, "Offset mismatch for FUAFGraphFactoryAsset_Animation::StartTimeSeconds");
static_assert(offsetof(FUAFGraphFactoryAsset_Animation, StartTimePercent) == 28, "Offset mismatch for FUAFGraphFactoryAsset_Animation::StartTimePercent");

// /Script/UAFAnimGraph.UAFGraphFactoryAsset_BlendSpace
// Kind: ScriptStruct; super: UAFGraphFactoryAsset
struct FUAFGraphFactoryAsset_BlendSpace
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* BlendSpace; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float XAxisSamplePoint; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float YAxisSamplePoint; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUAFGraphFactoryAsset_BlendSpace, BlendSpace) == 8, "Offset mismatch for FUAFGraphFactoryAsset_BlendSpace::BlendSpace");
static_assert(offsetof(FUAFGraphFactoryAsset_BlendSpace, XAxisSamplePoint) == 16, "Offset mismatch for FUAFGraphFactoryAsset_BlendSpace::XAxisSamplePoint");
static_assert(offsetof(FUAFGraphFactoryAsset_BlendSpace, YAxisSamplePoint) == 20, "Offset mismatch for FUAFGraphFactoryAsset_BlendSpace::YAxisSamplePoint");
static_assert(offsetof(FUAFGraphFactoryAsset_BlendSpace, PlayRate) == 24, "Offset mismatch for FUAFGraphFactoryAsset_BlendSpace::PlayRate");

// /Script/UAFAnimGraph.UAFGraphFactoryAsset_Graph
// Kind: ScriptStruct; super: UAFGraphFactoryAsset
struct FUAFGraphFactoryAsset_Graph
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* AnimationGraph; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFGraphFactoryAsset_Graph, AnimationGraph) == 8, "Offset mismatch for FUAFGraphFactoryAsset_Graph::AnimationGraph");

// /Script/UAFAnimGraph.UAFGraphInstanceComponent
// Kind: ScriptStruct; super: UAFAssetInstanceComponent
struct FUAFGraphInstanceComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.UAFInlineSubGraphInputBinding
// Kind: ScriptStruct; super: none
struct FUAFInlineSubGraphInputBinding
{
public:
    std::uint8_t Input[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Variable[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFInlineSubGraphInputBinding, Input) == 0, "Offset mismatch for FUAFInlineSubGraphInputBinding::Input");
static_assert(offsetof(FUAFInlineSubGraphInputBinding, Variable) == 8, "Offset mismatch for FUAFInlineSubGraphInputBinding::Variable");

// /Script/UAFAnimGraph.UAFInlineSubGraphTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FUAFInlineSubGraphTraitSharedData
{
public:
    void* Graph; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReferencePoseChild[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> Inputs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUAFInlineSubGraphTraitSharedData, Graph) == 0, "Offset mismatch for FUAFInlineSubGraphTraitSharedData::Graph");
static_assert(offsetof(FUAFInlineSubGraphTraitSharedData, ReferencePoseChild) == 8, "Offset mismatch for FUAFInlineSubGraphTraitSharedData::ReferencePoseChild");
static_assert(offsetof(FUAFInlineSubGraphTraitSharedData, Inputs) == 16, "Offset mismatch for FUAFInlineSubGraphTraitSharedData::Inputs");

// /Script/UAFAnimGraph.UAFInputValueTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FUAFInputValueTraitSharedData
{
public:
    std::uint8_t Input[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFInputValueTraitSharedData, Input) == 0, "Offset mismatch for FUAFInputValueTraitSharedData::Input");

// /Script/UAFAnimGraph.UAFMakeDynamicAdditiveTask
// Kind: ScriptStruct; super: AnimNextEvaluationTask
struct FUAFMakeDynamicAdditiveTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.UAFMontageComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FUAFMontageComponent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> MontageEvalData; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ActiveSlotNotifies; // 0x0020 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ActiveInertializationRequests; // 0x0030 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0040
    FName TickMontagesBeforeEventName; // 0x0080 (Size: 0x8, Type: NameProperty)
    void* LegacyMontageAnimInstanceClass; // 0x0088 (Size: 0x8, Type: ClassProperty)
    FName TickDependencyEventName; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FUAFMontageComponent, MontageEvalData) == 16, "Offset mismatch for FUAFMontageComponent::MontageEvalData");
static_assert(offsetof(FUAFMontageComponent, ActiveSlotNotifies) == 32, "Offset mismatch for FUAFMontageComponent::ActiveSlotNotifies");
static_assert(offsetof(FUAFMontageComponent, ActiveInertializationRequests) == 48, "Offset mismatch for FUAFMontageComponent::ActiveInertializationRequests");
static_assert(offsetof(FUAFMontageComponent, TickMontagesBeforeEventName) == 128, "Offset mismatch for FUAFMontageComponent::TickMontagesBeforeEventName");
static_assert(offsetof(FUAFMontageComponent, LegacyMontageAnimInstanceClass) == 136, "Offset mismatch for FUAFMontageComponent::LegacyMontageAnimInstanceClass");
static_assert(offsetof(FUAFMontageComponent, TickDependencyEventName) == 144, "Offset mismatch for FUAFMontageComponent::TickDependencyEventName");

// /Script/UAFAnimGraph.UAFMontageEvalData
// Kind: ScriptStruct; super: none
struct FUAFMontageEvalData
{
public:
    void* Montage; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlendInfo[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    void* ActiveBlendProfile; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFMontageEvalData, Montage) == 0, "Offset mismatch for FUAFMontageEvalData::Montage");
static_assert(offsetof(FUAFMontageEvalData, BlendInfo) == 8, "Offset mismatch for FUAFMontageEvalData::BlendInfo");
static_assert(offsetof(FUAFMontageEvalData, ActiveBlendProfile) == 56, "Offset mismatch for FUAFMontageEvalData::ActiveBlendProfile");

// /Script/UAFAnimGraph.UAFMontageTraitSharedData
// Kind: ScriptStruct; super: AnimNextTraitSharedData
struct FUAFMontageTraitSharedData
{
public:
    std::uint8_t Source[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t SlotName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAlwaysUpdateSource; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableSynchronization; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUAFMontageTraitSharedData, Source) == 0, "Offset mismatch for FUAFMontageTraitSharedData::Source");
static_assert(offsetof(FUAFMontageTraitSharedData, SlotName) == 4, "Offset mismatch for FUAFMontageTraitSharedData::SlotName");
static_assert(offsetof(FUAFMontageTraitSharedData, bAlwaysUpdateSource) == 8, "Offset mismatch for FUAFMontageTraitSharedData::bAlwaysUpdateSource");
static_assert(offsetof(FUAFMontageTraitSharedData, bDisableSynchronization) == 9, "Offset mismatch for FUAFMontageTraitSharedData::bDisableSynchronization");

// /Script/UAFAnimGraph.UAFRunAssetWorkData
// Kind: ScriptStruct; super: none
struct FUAFRunAssetWorkData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InjectedGraphReference[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFRunAssetWorkData, InjectedGraphReference) == 16, "Offset mismatch for FUAFRunAssetWorkData::InjectedGraphReference");

// /Script/UAFAnimGraph.UAFSimplePrePhysicsGraphComponent
// Kind: ScriptStruct; super: UAFScriptComponent
struct FUAFSimplePrePhysicsGraphComponent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Output[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFSimplePrePhysicsGraphComponent, Output) == 16, "Offset mismatch for FUAFSimplePrePhysicsGraphComponent::Output");
static_assert(offsetof(FUAFSimplePrePhysicsGraphComponent, WorkData) == 32, "Offset mismatch for FUAFSimplePrePhysicsGraphComponent::WorkData");

// /Script/UAFAnimGraph.AnimNextAnimGraphSettings
// Kind: Class; super: Object
class UAnimNextAnimGraphSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.AnimNextSkeletalMeshComponentLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAnimNextSkeletalMeshComponentLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UAFAnimGraph.InjectionCallbackProxy
// Kind: Class; super: CancellableAsyncAction
class UInjectionCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnCompleted; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBlendOut; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterrupted; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UInjectionCallbackProxy, OnCompleted) == 48, "Offset mismatch for UInjectionCallbackProxy::OnCompleted");
static_assert(offsetof(UInjectionCallbackProxy, OnBlendOut) == 64, "Offset mismatch for UInjectionCallbackProxy::OnBlendOut");
static_assert(offsetof(UInjectionCallbackProxy, OnInterrupted) == 80, "Offset mismatch for UInjectionCallbackProxy::OnInterrupted");

// /Script/UAFAnimGraph.PlayAnimCallbackProxy
// Kind: Class; super: Object
class UPlayAnimCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnCompleted; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBlendOut; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterrupted; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPlayAnimCallbackProxy, OnCompleted) == 40, "Offset mismatch for UPlayAnimCallbackProxy::OnCompleted");
static_assert(offsetof(UPlayAnimCallbackProxy, OnBlendOut) == 56, "Offset mismatch for UPlayAnimCallbackProxy::OnBlendOut");
static_assert(offsetof(UPlayAnimCallbackProxy, OnInterrupted) == 72, "Offset mismatch for UPlayAnimCallbackProxy::OnInterrupted");

// /Script/UAFAnimGraph.PostProcessAnimationUserAssetData
// Kind: Class; super: AssetUserData
class UPostProcessAnimationUserAssetData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* AnimationAsset; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPostProcessAnimationUserAssetData, AnimationAsset) == 40, "Offset mismatch for UPostProcessAnimationUserAssetData::AnimationAsset");

// /Script/UAFAnimGraph.UAFAnimGraph
// Kind: Class; super: UAFSharedVariables
class UUAFAnimGraph
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t ExecuteDefinition[0x28]; // 0x0570 (Size: 0x28, Type: StructProperty)
    TArray<void*> EntryPoints; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x05A8
    TArray<void*> GraphReferencedObjects; // 0x05D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GraphReferencedSoftObjects; // 0x05E8 (Size: 0x10, Type: ArrayProperty)
    FName DefaultEntryPoint; // 0x05F8 (Size: 0x8, Type: NameProperty)
    std::uint8_t DefaultState[0x1]; // 0x0600 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUAFAnimGraph, ExecuteDefinition) == 1392, "Offset mismatch for UUAFAnimGraph::ExecuteDefinition");
static_assert(offsetof(UUAFAnimGraph, EntryPoints) == 1432, "Offset mismatch for UUAFAnimGraph::EntryPoints");
static_assert(offsetof(UUAFAnimGraph, GraphReferencedObjects) == 1496, "Offset mismatch for UUAFAnimGraph::GraphReferencedObjects");
static_assert(offsetof(UUAFAnimGraph, GraphReferencedSoftObjects) == 1512, "Offset mismatch for UUAFAnimGraph::GraphReferencedSoftObjects");
static_assert(offsetof(UUAFAnimGraph, DefaultEntryPoint) == 1528, "Offset mismatch for UUAFAnimGraph::DefaultEntryPoint");
static_assert(offsetof(UUAFAnimGraph, DefaultState) == 1536, "Offset mismatch for UUAFAnimGraph::DefaultState");

// /Script/UAFAnimGraph.UAFInjectionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UUAFInjectionLibrary
{
public:
    std::uint8_t Opaque[1];
};
