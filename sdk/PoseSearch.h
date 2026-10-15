/**
 * decamp dumper generated SDK
 * Package: /Script/PoseSearch
 */
#pragma once
#include "Basic.h"

// /Script/PoseSearch.AnimNode_MotionMatching
// Kind: ScriptStruct; super: AnimNode_BlendStack_Standalone
struct FAnimNode_MotionMatching
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* Database; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    float BlendTime; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00DC
    void* BlendProfile; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlendOption; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E9
    std::uint8_t PoseJumpThresholdTime[0x8]; // 0x00EC (Size: 0x8, Type: StructProperty)
    float PoseReselectHistory; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float SearchThrottleTime; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PlayRate[0x8]; // 0x00FC (Size: 0x8, Type: StructProperty)
    float PlayRateMultiplier; // 0x0104 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseInertialBlend; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetOnBecomingRelevant; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSearch; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldUseCachedChannelData; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t EventToSearch[0x14]; // 0x010C (Size: 0x14, Type: StructProperty)
    std::uint8_t MotionMatchingState[0xA0]; // 0x0120 (Size: 0xA0, Type: StructProperty)
    TArray<void*> DatabasesToSearch; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x8]; // 0x01D0
    TArray<void*> Availabilities; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bValidateResultAgainstAvailabilities; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepInteractionAlive; // 0x01E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableWarp; // 0x01EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWarpUsingRootBone; // 0x01EB (Size: 0x1, Type: BoolProperty)
    float WarpingTranslationRatio; // 0x01EC (Size: 0x4, Type: FloatProperty)
    float WarpingRotationRatio; // 0x01F0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_MotionMatching, Database) == 208, "Offset mismatch for FAnimNode_MotionMatching::Database");
static_assert(offsetof(FAnimNode_MotionMatching, BlendTime) == 216, "Offset mismatch for FAnimNode_MotionMatching::BlendTime");
static_assert(offsetof(FAnimNode_MotionMatching, BlendProfile) == 224, "Offset mismatch for FAnimNode_MotionMatching::BlendProfile");
static_assert(offsetof(FAnimNode_MotionMatching, BlendOption) == 232, "Offset mismatch for FAnimNode_MotionMatching::BlendOption");
static_assert(offsetof(FAnimNode_MotionMatching, PoseJumpThresholdTime) == 236, "Offset mismatch for FAnimNode_MotionMatching::PoseJumpThresholdTime");
static_assert(offsetof(FAnimNode_MotionMatching, PoseReselectHistory) == 244, "Offset mismatch for FAnimNode_MotionMatching::PoseReselectHistory");
static_assert(offsetof(FAnimNode_MotionMatching, SearchThrottleTime) == 248, "Offset mismatch for FAnimNode_MotionMatching::SearchThrottleTime");
static_assert(offsetof(FAnimNode_MotionMatching, PlayRate) == 252, "Offset mismatch for FAnimNode_MotionMatching::PlayRate");
static_assert(offsetof(FAnimNode_MotionMatching, PlayRateMultiplier) == 260, "Offset mismatch for FAnimNode_MotionMatching::PlayRateMultiplier");
static_assert(offsetof(FAnimNode_MotionMatching, bUseInertialBlend) == 264, "Offset mismatch for FAnimNode_MotionMatching::bUseInertialBlend");
static_assert(offsetof(FAnimNode_MotionMatching, bResetOnBecomingRelevant) == 265, "Offset mismatch for FAnimNode_MotionMatching::bResetOnBecomingRelevant");
static_assert(offsetof(FAnimNode_MotionMatching, bShouldSearch) == 266, "Offset mismatch for FAnimNode_MotionMatching::bShouldSearch");
static_assert(offsetof(FAnimNode_MotionMatching, bShouldUseCachedChannelData) == 267, "Offset mismatch for FAnimNode_MotionMatching::bShouldUseCachedChannelData");
static_assert(offsetof(FAnimNode_MotionMatching, EventToSearch) == 268, "Offset mismatch for FAnimNode_MotionMatching::EventToSearch");
static_assert(offsetof(FAnimNode_MotionMatching, MotionMatchingState) == 288, "Offset mismatch for FAnimNode_MotionMatching::MotionMatchingState");
static_assert(offsetof(FAnimNode_MotionMatching, DatabasesToSearch) == 448, "Offset mismatch for FAnimNode_MotionMatching::DatabasesToSearch");
static_assert(offsetof(FAnimNode_MotionMatching, Availabilities) == 472, "Offset mismatch for FAnimNode_MotionMatching::Availabilities");
static_assert(offsetof(FAnimNode_MotionMatching, bValidateResultAgainstAvailabilities) == 488, "Offset mismatch for FAnimNode_MotionMatching::bValidateResultAgainstAvailabilities");
static_assert(offsetof(FAnimNode_MotionMatching, bKeepInteractionAlive) == 489, "Offset mismatch for FAnimNode_MotionMatching::bKeepInteractionAlive");
static_assert(offsetof(FAnimNode_MotionMatching, bEnableWarp) == 490, "Offset mismatch for FAnimNode_MotionMatching::bEnableWarp");
static_assert(offsetof(FAnimNode_MotionMatching, bWarpUsingRootBone) == 491, "Offset mismatch for FAnimNode_MotionMatching::bWarpUsingRootBone");
static_assert(offsetof(FAnimNode_MotionMatching, WarpingTranslationRatio) == 492, "Offset mismatch for FAnimNode_MotionMatching::WarpingTranslationRatio");
static_assert(offsetof(FAnimNode_MotionMatching, WarpingRotationRatio) == 496, "Offset mismatch for FAnimNode_MotionMatching::WarpingRotationRatio");

// /Script/PoseSearch.AnimNode_PoseSearchComponentSpaceHistoryCollector
// Kind: ScriptStruct; super: AnimNode_PoseSearchHistoryCollector_Base
struct FAnimNode_PoseSearchComponentSpaceHistoryCollector
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t Source[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_PoseSearchComponentSpaceHistoryCollector, Source) == 320, "Offset mismatch for FAnimNode_PoseSearchComponentSpaceHistoryCollector::Source");

// /Script/PoseSearch.AnimNode_PoseSearchHistoryCollector
// Kind: ScriptStruct; super: AnimNode_PoseSearchHistoryCollector_Base
struct FAnimNode_PoseSearchHistoryCollector
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t Source[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector, Source) == 320, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector::Source");

// /Script/PoseSearch.AnimNode_PoseSearchHistoryCollector_Base
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_PoseSearchHistoryCollector_Base
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t PoseCount; // 0x0010 (Size: 0x4, Type: IntProperty)
    float SamplingInterval; // 0x0014 (Size: 0x4, Type: FloatProperty)
    TArray<void*> CollectedBones; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollectedCurves; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bInitializeWithRefPose; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetOnBecomingRelevant; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStoreScales; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x003B
    float RootBoneRecoveryTime; // 0x003C (Size: 0x4, Type: FloatProperty)
    float RootBoneTranslationRecoveryRatio; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float RootBoneRotationRecoveryRatio; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0048
    std::uint8_t bGenerateTrajectory; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0059
    std::uint8_t TransformTrajectory[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    float TrajectorySpeedMultiplier; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::int32_t TrajectoryHistoryCount; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::int32_t TrajectoryPredictionCount; // 0x0078 (Size: 0x4, Type: IntProperty)
    float PredictionSamplingInterval; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TrajectoryData[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, PoseCount) == 16, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::PoseCount");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, SamplingInterval) == 20, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::SamplingInterval");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, CollectedBones) == 24, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::CollectedBones");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, CollectedCurves) == 40, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::CollectedCurves");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, bInitializeWithRefPose) == 56, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::bInitializeWithRefPose");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, bResetOnBecomingRelevant) == 57, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::bResetOnBecomingRelevant");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, bStoreScales) == 58, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::bStoreScales");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, RootBoneRecoveryTime) == 60, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::RootBoneRecoveryTime");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, RootBoneTranslationRecoveryRatio) == 64, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::RootBoneTranslationRecoveryRatio");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, RootBoneRotationRecoveryRatio) == 68, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::RootBoneRotationRecoveryRatio");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, bGenerateTrajectory) == 88, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::bGenerateTrajectory");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, TransformTrajectory) == 96, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::TransformTrajectory");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, TrajectorySpeedMultiplier) == 112, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::TrajectorySpeedMultiplier");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, TrajectoryHistoryCount) == 116, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::TrajectoryHistoryCount");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, TrajectoryPredictionCount) == 120, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::TrajectoryPredictionCount");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, PredictionSamplingInterval) == 124, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::PredictionSamplingInterval");
static_assert(offsetof(FAnimNode_PoseSearchHistoryCollector_Base, TrajectoryData) == 128, "Offset mismatch for FAnimNode_PoseSearchHistoryCollector_Base::TrajectoryData");

// /Script/PoseSearch.ChooserParameterPoseHistoryBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterPoseHistoryBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.MotionMatchingAnimNodeReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FMotionMatchingAnimNodeReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.MotionMatchingBlueprintBlendSettings
// Kind: ScriptStruct; super: none
struct FMotionMatchingBlueprintBlendSettings
{
public:
    float BlendTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* BlendProfile; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlendOption; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseInertialBlend; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMotionMatchingBlueprintBlendSettings, BlendTime) == 0, "Offset mismatch for FMotionMatchingBlueprintBlendSettings::BlendTime");
static_assert(offsetof(FMotionMatchingBlueprintBlendSettings, BlendProfile) == 8, "Offset mismatch for FMotionMatchingBlueprintBlendSettings::BlendProfile");
static_assert(offsetof(FMotionMatchingBlueprintBlendSettings, BlendOption) == 16, "Offset mismatch for FMotionMatchingBlueprintBlendSettings::BlendOption");
static_assert(offsetof(FMotionMatchingBlueprintBlendSettings, bUseInertialBlend) == 17, "Offset mismatch for FMotionMatchingBlueprintBlendSettings::bUseInertialBlend");

// /Script/PoseSearch.MotionMatchingState
// Kind: ScriptStruct; super: none
struct FMotionMatchingState
{
public:
    std::uint8_t SearchResult[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMotionMatchingState, SearchResult) == 0, "Offset mismatch for FMotionMatchingState::SearchResult");

// /Script/PoseSearch.PoseHistoryAnimationAttribute
// Kind: ScriptStruct; super: none
struct FPoseHistoryAnimationAttribute
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseHistoryContextProperty
// Kind: ScriptStruct; super: ChooserParameterPoseHistoryBase
struct FPoseHistoryContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Binding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPoseHistoryContextProperty, Binding) == 8, "Offset mismatch for FPoseHistoryContextProperty::Binding");

// /Script/PoseSearch.PoseHistoryReference
// Kind: ScriptStruct; super: none
struct FPoseHistoryReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchAnimContextRoles
// Kind: ScriptStruct; super: none
struct FPoseSearchAnimContextRoles
{
public:
    void* AnimContext; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Roles; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPoseSearchAnimContextRoles, AnimContext) == 0, "Offset mismatch for FPoseSearchAnimContextRoles::AnimContext");
static_assert(offsetof(FPoseSearchAnimContextRoles, Roles) == 8, "Offset mismatch for FPoseSearchAnimContextRoles::Roles");

// /Script/PoseSearch.PoseSearchAssetSamplerInput
// Kind: ScriptStruct; super: none
struct FPoseSearchAssetSamplerInput
{
public:
    void* Animation; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float AnimationTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t RootTransformOrigin[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t bMirrored; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    void* MirrorDataTable; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlendParameters[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPoseSearchAssetSamplerInput, Animation) == 0, "Offset mismatch for FPoseSearchAssetSamplerInput::Animation");
static_assert(offsetof(FPoseSearchAssetSamplerInput, AnimationTime) == 8, "Offset mismatch for FPoseSearchAssetSamplerInput::AnimationTime");
static_assert(offsetof(FPoseSearchAssetSamplerInput, RootTransformOrigin) == 16, "Offset mismatch for FPoseSearchAssetSamplerInput::RootTransformOrigin");
static_assert(offsetof(FPoseSearchAssetSamplerInput, bMirrored) == 112, "Offset mismatch for FPoseSearchAssetSamplerInput::bMirrored");
static_assert(offsetof(FPoseSearchAssetSamplerInput, MirrorDataTable) == 120, "Offset mismatch for FPoseSearchAssetSamplerInput::MirrorDataTable");
static_assert(offsetof(FPoseSearchAssetSamplerInput, BlendParameters) == 128, "Offset mismatch for FPoseSearchAssetSamplerInput::BlendParameters");

// /Script/PoseSearch.PoseSearchAssetSamplerPose
// Kind: ScriptStruct; super: none
struct FPoseSearchAssetSamplerPose
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchBlueprintResult
// Kind: ScriptStruct; super: none
struct FPoseSearchBlueprintResult
{
public:
    void* SelectedAnim; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float SelectedTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsContinuingPoseSearch; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    float WantedPlayRate; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLoop; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMirrored; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    std::uint8_t BlendParameters[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    void* SelectedDatabase; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float SearchCost; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInteraction; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x003D
    std::uint8_t Role[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::int32_t RoleIndex; // 0x0044 (Size: 0x4, Type: IntProperty)
    TArray<void*> ActorRootTransforms; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorRootBoneTransforms; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimContexts; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPoseSearchBlueprintResult, SelectedAnim) == 0, "Offset mismatch for FPoseSearchBlueprintResult::SelectedAnim");
static_assert(offsetof(FPoseSearchBlueprintResult, SelectedTime) == 8, "Offset mismatch for FPoseSearchBlueprintResult::SelectedTime");
static_assert(offsetof(FPoseSearchBlueprintResult, bIsContinuingPoseSearch) == 12, "Offset mismatch for FPoseSearchBlueprintResult::bIsContinuingPoseSearch");
static_assert(offsetof(FPoseSearchBlueprintResult, WantedPlayRate) == 16, "Offset mismatch for FPoseSearchBlueprintResult::WantedPlayRate");
static_assert(offsetof(FPoseSearchBlueprintResult, bLoop) == 20, "Offset mismatch for FPoseSearchBlueprintResult::bLoop");
static_assert(offsetof(FPoseSearchBlueprintResult, bIsMirrored) == 21, "Offset mismatch for FPoseSearchBlueprintResult::bIsMirrored");
static_assert(offsetof(FPoseSearchBlueprintResult, BlendParameters) == 24, "Offset mismatch for FPoseSearchBlueprintResult::BlendParameters");
static_assert(offsetof(FPoseSearchBlueprintResult, SelectedDatabase) == 48, "Offset mismatch for FPoseSearchBlueprintResult::SelectedDatabase");
static_assert(offsetof(FPoseSearchBlueprintResult, SearchCost) == 56, "Offset mismatch for FPoseSearchBlueprintResult::SearchCost");
static_assert(offsetof(FPoseSearchBlueprintResult, bIsInteraction) == 60, "Offset mismatch for FPoseSearchBlueprintResult::bIsInteraction");
static_assert(offsetof(FPoseSearchBlueprintResult, Role) == 64, "Offset mismatch for FPoseSearchBlueprintResult::Role");
static_assert(offsetof(FPoseSearchBlueprintResult, RoleIndex) == 68, "Offset mismatch for FPoseSearchBlueprintResult::RoleIndex");
static_assert(offsetof(FPoseSearchBlueprintResult, ActorRootTransforms) == 72, "Offset mismatch for FPoseSearchBlueprintResult::ActorRootTransforms");
static_assert(offsetof(FPoseSearchBlueprintResult, ActorRootBoneTransforms) == 88, "Offset mismatch for FPoseSearchBlueprintResult::ActorRootBoneTransforms");
static_assert(offsetof(FPoseSearchBlueprintResult, AnimContexts) == 104, "Offset mismatch for FPoseSearchBlueprintResult::AnimContexts");

// /Script/PoseSearch.PoseSearchBone
// Kind: ScriptStruct; super: none
struct FPoseSearchBone
{
public:
    std::uint8_t Reference[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::int32_t Flags; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPoseSearchBone, Reference) == 0, "Offset mismatch for FPoseSearchBone::Reference");
static_assert(offsetof(FPoseSearchBone, Flags) == 12, "Offset mismatch for FPoseSearchBone::Flags");

// /Script/PoseSearch.PoseSearchColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FPoseSearchColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> RowValues; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FallbackValue[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    void* Chooser; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0038
    float PoseReselectHistory; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumberOfResults; // 0x004C (Size: 0x4, Type: IntProperty)
    std::uint8_t InterruptMode[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t InputValue[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutputStartTime[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutputMirror[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutputForceBlendTo[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutputCost[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPoseSearchColumn, RowValues) == 8, "Offset mismatch for FPoseSearchColumn::RowValues");
static_assert(offsetof(FPoseSearchColumn, FallbackValue) == 24, "Offset mismatch for FPoseSearchColumn::FallbackValue");
static_assert(offsetof(FPoseSearchColumn, Chooser) == 48, "Offset mismatch for FPoseSearchColumn::Chooser");
static_assert(offsetof(FPoseSearchColumn, PoseReselectHistory) == 72, "Offset mismatch for FPoseSearchColumn::PoseReselectHistory");
static_assert(offsetof(FPoseSearchColumn, MaxNumberOfResults) == 76, "Offset mismatch for FPoseSearchColumn::MaxNumberOfResults");
static_assert(offsetof(FPoseSearchColumn, InterruptMode) == 80, "Offset mismatch for FPoseSearchColumn::InterruptMode");
static_assert(offsetof(FPoseSearchColumn, InputValue) == 96, "Offset mismatch for FPoseSearchColumn::InputValue");
static_assert(offsetof(FPoseSearchColumn, OutputStartTime) == 112, "Offset mismatch for FPoseSearchColumn::OutputStartTime");
static_assert(offsetof(FPoseSearchColumn, OutputMirror) == 128, "Offset mismatch for FPoseSearchColumn::OutputMirror");
static_assert(offsetof(FPoseSearchColumn, OutputForceBlendTo) == 144, "Offset mismatch for FPoseSearchColumn::OutputForceBlendTo");
static_assert(offsetof(FPoseSearchColumn, OutputCost) == 160, "Offset mismatch for FPoseSearchColumn::OutputCost");

// /Script/PoseSearch.PoseSearchColumnRow
// Kind: ScriptStruct; super: none
struct FPoseSearchColumnRow
{
public:
    std::uint8_t Data[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* Database; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPoseSearchColumnRow, Data) == 0, "Offset mismatch for FPoseSearchColumnRow::Data");
static_assert(offsetof(FPoseSearchColumnRow, Database) == 16, "Offset mismatch for FPoseSearchColumnRow::Database");

// /Script/PoseSearch.PoseSearchColumnRowReflection
// Kind: ScriptStruct; super: PoseSearchColumnRow
struct FPoseSearchColumnRowReflection
{
public:
    std::uint8_t Data[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* Database; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPoseSearchColumnRowReflection, Data) == 0, "Offset mismatch for FPoseSearchColumnRowReflection::Data");
static_assert(offsetof(FPoseSearchColumnRowReflection, Database) == 16, "Offset mismatch for FPoseSearchColumnRowReflection::Database");

// /Script/PoseSearch.PoseSearchConstraint
// Kind: ScriptStruct; super: none
struct FPoseSearchConstraint
{
public:
    std::uint8_t FromSocketName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t FromSocketRole[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t ToSocketName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t ToSocketRole[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    float TranslationWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float RotationWeight; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float RampUpTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float CooldownTime; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FromSocketTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t ToSocketTransform[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    float DesiredReach; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseSearchConstraint, FromSocketName) == 0, "Offset mismatch for FPoseSearchConstraint::FromSocketName");
static_assert(offsetof(FPoseSearchConstraint, FromSocketRole) == 4, "Offset mismatch for FPoseSearchConstraint::FromSocketRole");
static_assert(offsetof(FPoseSearchConstraint, ToSocketName) == 8, "Offset mismatch for FPoseSearchConstraint::ToSocketName");
static_assert(offsetof(FPoseSearchConstraint, ToSocketRole) == 12, "Offset mismatch for FPoseSearchConstraint::ToSocketRole");
static_assert(offsetof(FPoseSearchConstraint, TranslationWeight) == 16, "Offset mismatch for FPoseSearchConstraint::TranslationWeight");
static_assert(offsetof(FPoseSearchConstraint, RotationWeight) == 20, "Offset mismatch for FPoseSearchConstraint::RotationWeight");
static_assert(offsetof(FPoseSearchConstraint, RampUpTime) == 24, "Offset mismatch for FPoseSearchConstraint::RampUpTime");
static_assert(offsetof(FPoseSearchConstraint, CooldownTime) == 28, "Offset mismatch for FPoseSearchConstraint::CooldownTime");
static_assert(offsetof(FPoseSearchConstraint, FromSocketTransform) == 32, "Offset mismatch for FPoseSearchConstraint::FromSocketTransform");
static_assert(offsetof(FPoseSearchConstraint, ToSocketTransform) == 128, "Offset mismatch for FPoseSearchConstraint::ToSocketTransform");
static_assert(offsetof(FPoseSearchConstraint, DesiredReach) == 224, "Offset mismatch for FPoseSearchConstraint::DesiredReach");

// /Script/PoseSearch.PoseSearchContinuingProperties
// Kind: ScriptStruct; super: none
struct FPoseSearchContinuingProperties
{
public:
    void* PlayingAsset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float PlayingAssetAccumulatedTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPlayingAssetMirrored; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t PlayingAssetBlendParameters[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t InterruptMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsContinuingInteraction; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsContinuingContextInteraction; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x002B
    void* PlayingAssetDatabase; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPoseSearchContinuingProperties, PlayingAsset) == 0, "Offset mismatch for FPoseSearchContinuingProperties::PlayingAsset");
static_assert(offsetof(FPoseSearchContinuingProperties, PlayingAssetAccumulatedTime) == 8, "Offset mismatch for FPoseSearchContinuingProperties::PlayingAssetAccumulatedTime");
static_assert(offsetof(FPoseSearchContinuingProperties, bIsPlayingAssetMirrored) == 12, "Offset mismatch for FPoseSearchContinuingProperties::bIsPlayingAssetMirrored");
static_assert(offsetof(FPoseSearchContinuingProperties, PlayingAssetBlendParameters) == 16, "Offset mismatch for FPoseSearchContinuingProperties::PlayingAssetBlendParameters");
static_assert(offsetof(FPoseSearchContinuingProperties, InterruptMode) == 40, "Offset mismatch for FPoseSearchContinuingProperties::InterruptMode");
static_assert(offsetof(FPoseSearchContinuingProperties, bIsContinuingInteraction) == 41, "Offset mismatch for FPoseSearchContinuingProperties::bIsContinuingInteraction");
static_assert(offsetof(FPoseSearchContinuingProperties, bIsContinuingContextInteraction) == 42, "Offset mismatch for FPoseSearchContinuingProperties::bIsContinuingContextInteraction");
static_assert(offsetof(FPoseSearchContinuingProperties, PlayingAssetDatabase) == 48, "Offset mismatch for FPoseSearchContinuingProperties::PlayingAssetDatabase");

// /Script/PoseSearch.PoseSearchCost
// Kind: ScriptStruct; super: none
struct FPoseSearchCost
{
public:
    float TotalCost; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseSearchCost, TotalCost) == 0, "Offset mismatch for FPoseSearchCost::TotalCost");

// /Script/PoseSearch.PoseSearchDatabaseAnimComposite
// Kind: ScriptStruct; super: PoseSearchDatabaseAnimationAssetBase
struct FPoseSearchDatabaseAnimComposite
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* AnimComposite; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPoseSearchDatabaseAnimComposite, AnimComposite) == 8, "Offset mismatch for FPoseSearchDatabaseAnimComposite::AnimComposite");

// /Script/PoseSearch.PoseSearchDatabaseAnimMontage
// Kind: ScriptStruct; super: PoseSearchDatabaseAnimationAssetBase
struct FPoseSearchDatabaseAnimMontage
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* AnimMontage; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPoseSearchDatabaseAnimMontage, AnimMontage) == 8, "Offset mismatch for FPoseSearchDatabaseAnimMontage::AnimMontage");

// /Script/PoseSearch.PoseSearchDatabaseAnimationAsset
// Kind: ScriptStruct; super: PoseSearchDatabaseAnimationAssetBase
struct FPoseSearchDatabaseAnimationAsset
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* AnimAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPoseSearchDatabaseAnimationAsset, AnimAsset) == 8, "Offset mismatch for FPoseSearchDatabaseAnimationAsset::AnimAsset");

// /Script/PoseSearch.PoseSearchDatabaseAnimationAssetBase
// Kind: ScriptStruct; super: none
struct FPoseSearchDatabaseAnimationAssetBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchDatabaseBlendSpace
// Kind: ScriptStruct; super: PoseSearchDatabaseAnimationAssetBase
struct FPoseSearchDatabaseBlendSpace
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* BlendSpace; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPoseSearchDatabaseBlendSpace, BlendSpace) == 8, "Offset mismatch for FPoseSearchDatabaseBlendSpace::BlendSpace");

// /Script/PoseSearch.PoseSearchDatabaseMultiAnimAsset
// Kind: ScriptStruct; super: PoseSearchDatabaseAnimationAssetBase
struct FPoseSearchDatabaseMultiAnimAsset
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* MultiAnimAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPoseSearchDatabaseMultiAnimAsset, MultiAnimAsset) == 8, "Offset mismatch for FPoseSearchDatabaseMultiAnimAsset::MultiAnimAsset");

// /Script/PoseSearch.PoseSearchDatabaseSequence
// Kind: ScriptStruct; super: PoseSearchDatabaseAnimationAssetBase
struct FPoseSearchDatabaseSequence
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Sequence; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPoseSearchDatabaseSequence, Sequence) == 8, "Offset mismatch for FPoseSearchDatabaseSequence::Sequence");

// /Script/PoseSearch.PoseSearchEvent
// Kind: ScriptStruct; super: none
struct FPoseSearchEvent
{
public:
    std::uint8_t EventTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float TimeToEvent; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnablePoseFilters; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsePlayRateRangeOverride; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000A
    std::uint8_t PlayRateRangeOverride[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPoseSearchEvent, EventTag) == 0, "Offset mismatch for FPoseSearchEvent::EventTag");
static_assert(offsetof(FPoseSearchEvent, TimeToEvent) == 4, "Offset mismatch for FPoseSearchEvent::TimeToEvent");
static_assert(offsetof(FPoseSearchEvent, bEnablePoseFilters) == 8, "Offset mismatch for FPoseSearchEvent::bEnablePoseFilters");
static_assert(offsetof(FPoseSearchEvent, bUsePlayRateRangeOverride) == 9, "Offset mismatch for FPoseSearchEvent::bUsePlayRateRangeOverride");
static_assert(offsetof(FPoseSearchEvent, PlayRateRangeOverride) == 12, "Offset mismatch for FPoseSearchEvent::PlayRateRangeOverride");

// /Script/PoseSearch.PoseSearchFilter
// Kind: ScriptStruct; super: none
struct FPoseSearchFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchFilterMaxPosition
// Kind: ScriptStruct; super: PoseSearchFilter
struct FPoseSearchFilterMaxPosition
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float MaxPositionDistanceSquared; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseSearchFilterMaxPosition, MaxPositionDistanceSquared) == 8, "Offset mismatch for FPoseSearchFilterMaxPosition::MaxPositionDistanceSquared");

// /Script/PoseSearch.PoseSearchFilterPadding
// Kind: ScriptStruct; super: PoseSearchFilter
struct FPoseSearchFilterPadding
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchFilterWedge
// Kind: ScriptStruct; super: PoseSearchFilter
struct FPoseSearchFilterWedge
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RadiusOffsets[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    float WedgeWidthInDegrees; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseSearchFilterWedge, RadiusOffsets) == 8, "Offset mismatch for FPoseSearchFilterWedge::RadiusOffsets");
static_assert(offsetof(FPoseSearchFilterWedge, WedgeWidthInDegrees) == 16, "Offset mismatch for FPoseSearchFilterWedge::WedgeWidthInDegrees");

// /Script/PoseSearch.PoseSearchFutureProperties
// Kind: ScriptStruct; super: none
struct FPoseSearchFutureProperties
{
public:
    void* Animation; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float AnimationTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float IntervalTime; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseSearchFutureProperties, Animation) == 0, "Offset mismatch for FPoseSearchFutureProperties::Animation");
static_assert(offsetof(FPoseSearchFutureProperties, AnimationTime) == 8, "Offset mismatch for FPoseSearchFutureProperties::AnimationTime");
static_assert(offsetof(FPoseSearchFutureProperties, IntervalTime) == 12, "Offset mismatch for FPoseSearchFutureProperties::IntervalTime");

// /Script/PoseSearch.PoseSearchHistory
// Kind: ScriptStruct; super: none
struct FPoseSearchHistory
{
public:
    std::uint8_t Trajectory[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t MaxNumPoses; // 0x0010 (Size: 0x4, Type: IntProperty)
    float SamplingInterval; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float TrajectorySpeedMultiplier; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseSearchHistory, Trajectory) == 0, "Offset mismatch for FPoseSearchHistory::Trajectory");
static_assert(offsetof(FPoseSearchHistory, MaxNumPoses) == 16, "Offset mismatch for FPoseSearchHistory::MaxNumPoses");
static_assert(offsetof(FPoseSearchHistory, SamplingInterval) == 20, "Offset mismatch for FPoseSearchHistory::SamplingInterval");
static_assert(offsetof(FPoseSearchHistory, TrajectorySpeedMultiplier) == 24, "Offset mismatch for FPoseSearchHistory::TrajectorySpeedMultiplier");

// /Script/PoseSearch.PoseSearchHistoryCollectorAnimNodeReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FPoseSearchHistoryCollectorAnimNodeReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchInteractionAssetItem
// Kind: ScriptStruct; super: none
struct FPoseSearchInteractionAssetItem
{
public:
    void* Animation; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Role[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float WarpingWeightRotation; // 0x000C (Size: 0x4, Type: FloatProperty)
    float WarpingWeightTranslation; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0014
    std::uint8_t origin[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPoseSearchInteractionAssetItem, Animation) == 0, "Offset mismatch for FPoseSearchInteractionAssetItem::Animation");
static_assert(offsetof(FPoseSearchInteractionAssetItem, Role) == 8, "Offset mismatch for FPoseSearchInteractionAssetItem::Role");
static_assert(offsetof(FPoseSearchInteractionAssetItem, WarpingWeightRotation) == 12, "Offset mismatch for FPoseSearchInteractionAssetItem::WarpingWeightRotation");
static_assert(offsetof(FPoseSearchInteractionAssetItem, WarpingWeightTranslation) == 16, "Offset mismatch for FPoseSearchInteractionAssetItem::WarpingWeightTranslation");
static_assert(offsetof(FPoseSearchInteractionAssetItem, origin) == 32, "Offset mismatch for FPoseSearchInteractionAssetItem::origin");

// /Script/PoseSearch.PoseSearchInteractionAvailability
// Kind: ScriptStruct; super: none
struct FPoseSearchInteractionAvailability
{
public:
    void* Database; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName Tag; // 0x0008 (Size: 0x8, Type: NameProperty)
    TArray<void*> RolesFilter; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float BroadPhaseRadius; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float BroadPhaseRadiusIncrementOnInteraction; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableCollisions; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0029
    std::int32_t TickPriority; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPoseSearchInteractionAvailability, Database) == 0, "Offset mismatch for FPoseSearchInteractionAvailability::Database");
static_assert(offsetof(FPoseSearchInteractionAvailability, Tag) == 8, "Offset mismatch for FPoseSearchInteractionAvailability::Tag");
static_assert(offsetof(FPoseSearchInteractionAvailability, RolesFilter) == 16, "Offset mismatch for FPoseSearchInteractionAvailability::RolesFilter");
static_assert(offsetof(FPoseSearchInteractionAvailability, BroadPhaseRadius) == 32, "Offset mismatch for FPoseSearchInteractionAvailability::BroadPhaseRadius");
static_assert(offsetof(FPoseSearchInteractionAvailability, BroadPhaseRadiusIncrementOnInteraction) == 36, "Offset mismatch for FPoseSearchInteractionAvailability::BroadPhaseRadiusIncrementOnInteraction");
static_assert(offsetof(FPoseSearchInteractionAvailability, bDisableCollisions) == 40, "Offset mismatch for FPoseSearchInteractionAvailability::bDisableCollisions");
static_assert(offsetof(FPoseSearchInteractionAvailability, TickPriority) == 44, "Offset mismatch for FPoseSearchInteractionAvailability::TickPriority");

// /Script/PoseSearch.PoseSearchMotionMatchMultiQuery
// Kind: ScriptStruct; super: none
struct FPoseSearchMotionMatchMultiQuery
{
public:
    void* Database; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimContextsRoles; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPoseSearchMotionMatchMultiQuery, Database) == 0, "Offset mismatch for FPoseSearchMotionMatchMultiQuery::Database");
static_assert(offsetof(FPoseSearchMotionMatchMultiQuery, AnimContextsRoles) == 8, "Offset mismatch for FPoseSearchMotionMatchMultiQuery::AnimContextsRoles");

// /Script/PoseSearch.PoseSearchQueryTrajectory
// Kind: ScriptStruct; super: none
struct FPoseSearchQueryTrajectory
{
public:
    TArray<void*> Samples; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPoseSearchQueryTrajectory, Samples) == 0, "Offset mismatch for FPoseSearchQueryTrajectory::Samples");

// /Script/PoseSearch.PoseSearchQueryTrajectorySample
// Kind: ScriptStruct; super: none
struct FPoseSearchQueryTrajectorySample
{
public:
    std::uint8_t Facing[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float AccumulatedSeconds; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseSearchQueryTrajectorySample, Facing) == 0, "Offset mismatch for FPoseSearchQueryTrajectorySample::Facing");
static_assert(offsetof(FPoseSearchQueryTrajectorySample, Position) == 32, "Offset mismatch for FPoseSearchQueryTrajectorySample::Position");
static_assert(offsetof(FPoseSearchQueryTrajectorySample, AccumulatedSeconds) == 56, "Offset mismatch for FPoseSearchQueryTrajectorySample::AccumulatedSeconds");

// /Script/PoseSearch.PoseSearchRoledSkeleton
// Kind: ScriptStruct; super: none
struct FPoseSearchRoledSkeleton
{
public:
    void* skeleton; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* MirrorDataTable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FName Role; // 0x0010 (Size: 0x8, Type: NameProperty)
    TArray<void*> BoneReferences; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RequiredCurves; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPoseSearchRoledSkeleton, skeleton) == 0, "Offset mismatch for FPoseSearchRoledSkeleton::skeleton");
static_assert(offsetof(FPoseSearchRoledSkeleton, MirrorDataTable) == 8, "Offset mismatch for FPoseSearchRoledSkeleton::MirrorDataTable");
static_assert(offsetof(FPoseSearchRoledSkeleton, Role) == 16, "Offset mismatch for FPoseSearchRoledSkeleton::Role");
static_assert(offsetof(FPoseSearchRoledSkeleton, BoneReferences) == 24, "Offset mismatch for FPoseSearchRoledSkeleton::BoneReferences");
static_assert(offsetof(FPoseSearchRoledSkeleton, RequiredCurves) == 40, "Offset mismatch for FPoseSearchRoledSkeleton::RequiredCurves");

// /Script/PoseSearch.PoseSearchTrajectoryData
// Kind: ScriptStruct; super: none
struct FPoseSearchTrajectoryData
{
public:
    float RotateTowardsMovementSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxControllerYawRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BendVelocityTowardsAcceleration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSpeedRemappingCurve; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t SpeedRemappingCurve[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUseAccelerationRemappingCurve; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    std::uint8_t AccelerationRemappingCurve[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPoseSearchTrajectoryData, RotateTowardsMovementSpeed) == 0, "Offset mismatch for FPoseSearchTrajectoryData::RotateTowardsMovementSpeed");
static_assert(offsetof(FPoseSearchTrajectoryData, MaxControllerYawRate) == 4, "Offset mismatch for FPoseSearchTrajectoryData::MaxControllerYawRate");
static_assert(offsetof(FPoseSearchTrajectoryData, BendVelocityTowardsAcceleration) == 8, "Offset mismatch for FPoseSearchTrajectoryData::BendVelocityTowardsAcceleration");
static_assert(offsetof(FPoseSearchTrajectoryData, bUseSpeedRemappingCurve) == 12, "Offset mismatch for FPoseSearchTrajectoryData::bUseSpeedRemappingCurve");
static_assert(offsetof(FPoseSearchTrajectoryData, SpeedRemappingCurve) == 16, "Offset mismatch for FPoseSearchTrajectoryData::SpeedRemappingCurve");
static_assert(offsetof(FPoseSearchTrajectoryData, bUseAccelerationRemappingCurve) == 88, "Offset mismatch for FPoseSearchTrajectoryData::bUseAccelerationRemappingCurve");
static_assert(offsetof(FPoseSearchTrajectoryData, AccelerationRemappingCurve) == 96, "Offset mismatch for FPoseSearchTrajectoryData::AccelerationRemappingCurve");

// /Script/PoseSearch.PoseSearchTrajectorySample
// Kind: ScriptStruct; super: none
struct FPoseSearchTrajectorySample
{
public:
    float Offset; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t Flags; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPoseSearchTrajectorySample, Offset) == 0, "Offset mismatch for FPoseSearchTrajectorySample::Offset");
static_assert(offsetof(FPoseSearchTrajectorySample, Flags) == 4, "Offset mismatch for FPoseSearchTrajectorySample::Flags");

// /Script/PoseSearch.PoseSearchTrajectory_WorldCollisionResults
// Kind: ScriptStruct; super: none
struct FPoseSearchTrajectory_WorldCollisionResults
{
public:
    float TimeToLand; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LandSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseSearchTrajectory_WorldCollisionResults, TimeToLand) == 0, "Offset mismatch for FPoseSearchTrajectory_WorldCollisionResults::TimeToLand");
static_assert(offsetof(FPoseSearchTrajectory_WorldCollisionResults, LandSpeed) == 4, "Offset mismatch for FPoseSearchTrajectory_WorldCollisionResults::LandSpeed");

// /Script/PoseSearch.AnimNotifyState_PoseSearchBase
// Kind: Class; super: AnimNotifyState
class UAnimNotifyState_PoseSearchBase
{
public:
    std::uint8_t Pad_0000[0x29]; // 0x0000
    std::uint8_t NotifyStateBehaviorFlags; // 0x0029 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchBase, NotifyStateBehaviorFlags) == 41, "Offset mismatch for UAnimNotifyState_PoseSearchBase::NotifyStateBehaviorFlags");

// /Script/PoseSearch.AnimNotifyState_PoseSearchBlockTransition
// Kind: Class; super: AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchBlockTransition
{
public:
    std::uint8_t Pad_0000[0x29]; // 0x0000
    std::uint8_t NotifyStateBehaviorFlags; // 0x0029 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchBlockTransition, NotifyStateBehaviorFlags) == 41, "Offset mismatch for UAnimNotifyState_PoseSearchBlockTransition::NotifyStateBehaviorFlags");

// /Script/PoseSearch.AnimNotifyState_PoseSearchBranchIn
// Kind: Class; super: AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchBranchIn
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Database; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchBranchIn, Database) == 48, "Offset mismatch for UAnimNotifyState_PoseSearchBranchIn::Database");

// /Script/PoseSearch.AnimNotifyState_PoseSearchConstraint
// Kind: Class; super: AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchConstraint
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t FromSocketName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t FromSocketRole[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    std::uint8_t ToSocketName[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t ToSocketRole[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    float TranslationWeight; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float RotationWeight; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float RampUpTime; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float CooldownTime; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchConstraint, FromSocketName) == 48, "Offset mismatch for UAnimNotifyState_PoseSearchConstraint::FromSocketName");
static_assert(offsetof(UAnimNotifyState_PoseSearchConstraint, FromSocketRole) == 52, "Offset mismatch for UAnimNotifyState_PoseSearchConstraint::FromSocketRole");
static_assert(offsetof(UAnimNotifyState_PoseSearchConstraint, ToSocketName) == 56, "Offset mismatch for UAnimNotifyState_PoseSearchConstraint::ToSocketName");
static_assert(offsetof(UAnimNotifyState_PoseSearchConstraint, ToSocketRole) == 60, "Offset mismatch for UAnimNotifyState_PoseSearchConstraint::ToSocketRole");
static_assert(offsetof(UAnimNotifyState_PoseSearchConstraint, TranslationWeight) == 64, "Offset mismatch for UAnimNotifyState_PoseSearchConstraint::TranslationWeight");
static_assert(offsetof(UAnimNotifyState_PoseSearchConstraint, RotationWeight) == 68, "Offset mismatch for UAnimNotifyState_PoseSearchConstraint::RotationWeight");
static_assert(offsetof(UAnimNotifyState_PoseSearchConstraint, RampUpTime) == 72, "Offset mismatch for UAnimNotifyState_PoseSearchConstraint::RampUpTime");
static_assert(offsetof(UAnimNotifyState_PoseSearchConstraint, CooldownTime) == 76, "Offset mismatch for UAnimNotifyState_PoseSearchConstraint::CooldownTime");

// /Script/PoseSearch.AnimNotifyState_PoseSearchExcludeFromDatabase
// Kind: Class; super: AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchExcludeFromDatabase
{
public:
    std::uint8_t Pad_0000[0x29]; // 0x0000
    std::uint8_t NotifyStateBehaviorFlags; // 0x0029 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchExcludeFromDatabase, NotifyStateBehaviorFlags) == 41, "Offset mismatch for UAnimNotifyState_PoseSearchExcludeFromDatabase::NotifyStateBehaviorFlags");

// /Script/PoseSearch.AnimNotifyState_PoseSearchModifyCost
// Kind: Class; super: AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchModifyCost
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float CostAddend; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchModifyCost, CostAddend) == 48, "Offset mismatch for UAnimNotifyState_PoseSearchModifyCost::CostAddend");

// /Script/PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingContextInteractionCostBias
// Kind: Class; super: AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchOverrideContinuingContextInteractionCostBias
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float CostAddend; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchOverrideContinuingContextInteractionCostBias, CostAddend) == 48, "Offset mismatch for UAnimNotifyState_PoseSearchOverrideContinuingContextInteractionCostBias::CostAddend");

// /Script/PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingInteractionPoseCostBias
// Kind: Class; super: AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchOverrideContinuingInteractionPoseCostBias
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float CostAddend; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchOverrideContinuingInteractionPoseCostBias, CostAddend) == 48, "Offset mismatch for UAnimNotifyState_PoseSearchOverrideContinuingInteractionPoseCostBias::CostAddend");

// /Script/PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
// Kind: Class; super: AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float CostAddend; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias, CostAddend) == 48, "Offset mismatch for UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::CostAddend");

// /Script/PoseSearch.AnimNotifyState_PoseSearchSamplingAttribute
// Kind: Class; super: AnimNotifyState_PoseSearchSamplingEvent
class UAnimNotifyState_PoseSearchSamplingAttribute
{
public:
    std::uint8_t Pad_0000[0x29]; // 0x0000
    std::uint8_t NotifyStateBehaviorFlags; // 0x0029 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchSamplingAttribute, NotifyStateBehaviorFlags) == 41, "Offset mismatch for UAnimNotifyState_PoseSearchSamplingAttribute::NotifyStateBehaviorFlags");

// /Script/PoseSearch.AnimNotifyState_PoseSearchSamplingEvent
// Kind: Class; super: AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchSamplingEvent
{
public:
    std::uint8_t Pad_0000[0x29]; // 0x0000
    std::uint8_t NotifyStateBehaviorFlags; // 0x0029 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchSamplingEvent, NotifyStateBehaviorFlags) == 41, "Offset mismatch for UAnimNotifyState_PoseSearchSamplingEvent::NotifyStateBehaviorFlags");

// /Script/PoseSearch.AnimNotifyState_PoseSearchSamplingRange
// Kind: Class; super: AnimNotifyState_PoseSearchBase
class UAnimNotifyState_PoseSearchSamplingRange
{
public:
    std::uint8_t Pad_0000[0x29]; // 0x0000
    std::uint8_t NotifyStateBehaviorFlags; // 0x0029 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UAnimNotifyState_PoseSearchSamplingRange, NotifyStateBehaviorFlags) == 41, "Offset mismatch for UAnimNotifyState_PoseSearchSamplingRange::NotifyStateBehaviorFlags");

// /Script/PoseSearch.AnimNotify_PoseSearchBase
// Kind: Class; super: AnimNotify
class UAnimNotify_PoseSearchBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.AnimNotify_PoseSearchEvent
// Kind: Class; super: AnimNotify_PoseSearchBase
class UAnimNotify_PoseSearchEvent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t EventTag[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAnimNotify_PoseSearchEvent, EventTag) == 56, "Offset mismatch for UAnimNotify_PoseSearchEvent::EventTag");

// /Script/PoseSearch.MotionMatchingAnimNodeLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMotionMatchingAnimNodeLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.MultiAnimAsset
// Kind: Class; super: Object
class UMultiAnimAsset
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchAssetSamplerLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPoseSearchAssetSamplerLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchDatabase
// Kind: Class; super: DataAsset
class UPoseSearchDatabase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Schema; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    float ContinuingPoseCostBias; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float BaseCostBias; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float LoopingCostBias; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float ContinuingInteractionCostBias; // 0x003C (Size: 0x4, Type: FloatProperty)
    float ContinuingContextInteractionCostBias; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    TArray<void*> AnimationAssets; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DatabaseAnimationAssets; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Tags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PoseSearchMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0079
    std::int32_t KDTreeQueryNumNeighbors; // 0x007C (Size: 0x4, Type: IntProperty)
    std::int32_t KDTreeQueryNumNeighborsWithDuplicates; // 0x0080 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPoseSearchDatabase, Schema) == 40, "Offset mismatch for UPoseSearchDatabase::Schema");
static_assert(offsetof(UPoseSearchDatabase, ContinuingPoseCostBias) == 48, "Offset mismatch for UPoseSearchDatabase::ContinuingPoseCostBias");
static_assert(offsetof(UPoseSearchDatabase, BaseCostBias) == 52, "Offset mismatch for UPoseSearchDatabase::BaseCostBias");
static_assert(offsetof(UPoseSearchDatabase, LoopingCostBias) == 56, "Offset mismatch for UPoseSearchDatabase::LoopingCostBias");
static_assert(offsetof(UPoseSearchDatabase, ContinuingInteractionCostBias) == 60, "Offset mismatch for UPoseSearchDatabase::ContinuingInteractionCostBias");
static_assert(offsetof(UPoseSearchDatabase, ContinuingContextInteractionCostBias) == 64, "Offset mismatch for UPoseSearchDatabase::ContinuingContextInteractionCostBias");
static_assert(offsetof(UPoseSearchDatabase, AnimationAssets) == 72, "Offset mismatch for UPoseSearchDatabase::AnimationAssets");
static_assert(offsetof(UPoseSearchDatabase, DatabaseAnimationAssets) == 88, "Offset mismatch for UPoseSearchDatabase::DatabaseAnimationAssets");
static_assert(offsetof(UPoseSearchDatabase, Tags) == 104, "Offset mismatch for UPoseSearchDatabase::Tags");
static_assert(offsetof(UPoseSearchDatabase, PoseSearchMode) == 120, "Offset mismatch for UPoseSearchDatabase::PoseSearchMode");
static_assert(offsetof(UPoseSearchDatabase, KDTreeQueryNumNeighbors) == 124, "Offset mismatch for UPoseSearchDatabase::KDTreeQueryNumNeighbors");
static_assert(offsetof(UPoseSearchDatabase, KDTreeQueryNumNeighborsWithDuplicates) == 128, "Offset mismatch for UPoseSearchDatabase::KDTreeQueryNumNeighborsWithDuplicates");

// /Script/PoseSearch.PoseSearchEventLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPoseSearchEventLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchFeatureChannel
// Kind: Class; super: Object
class UPoseSearchFeatureChannel
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t ChannelDataOffset; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t ChannelCardinality; // 0x003C (Size: 0x4, Type: IntProperty)
    TArray<void*> Filters; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel, ChannelDataOffset) == 56, "Offset mismatch for UPoseSearchFeatureChannel::ChannelDataOffset");
static_assert(offsetof(UPoseSearchFeatureChannel, ChannelCardinality) == 60, "Offset mismatch for UPoseSearchFeatureChannel::ChannelCardinality");
static_assert(offsetof(UPoseSearchFeatureChannel, Filters) == 64, "Offset mismatch for UPoseSearchFeatureChannel::Filters");

// /Script/PoseSearch.PoseSearchFeatureChannel_Curve
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_Curve
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t CurveName[0x4]; // 0x0050 (Size: 0x4, Type: NameProperty)
    std::uint8_t SampleRole[0x4]; // 0x0054 (Size: 0x4, Type: NameProperty)
    std::int8_t CurveIdx; // 0x0058 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    float SampleTimeOffset; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t InputQueryPose; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_Curve, CurveName) == 80, "Offset mismatch for UPoseSearchFeatureChannel_Curve::CurveName");
static_assert(offsetof(UPoseSearchFeatureChannel_Curve, SampleRole) == 84, "Offset mismatch for UPoseSearchFeatureChannel_Curve::SampleRole");
static_assert(offsetof(UPoseSearchFeatureChannel_Curve, CurveIdx) == 88, "Offset mismatch for UPoseSearchFeatureChannel_Curve::CurveIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Curve, SampleTimeOffset) == 92, "Offset mismatch for UPoseSearchFeatureChannel_Curve::SampleTimeOffset");
static_assert(offsetof(UPoseSearchFeatureChannel_Curve, InputQueryPose) == 96, "Offset mismatch for UPoseSearchFeatureChannel_Curve::InputQueryPose");

// /Script/PoseSearch.PoseSearchFeatureChannel_Distance
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_Distance
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t bDefaultWithRootBone; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    std::uint8_t bone[0xC]; // 0x0054 (Size: 0xC, Type: StructProperty)
    std::uint8_t SampleRole[0x4]; // 0x0060 (Size: 0x4, Type: NameProperty)
    std::uint8_t OriginBone[0xC]; // 0x0064 (Size: 0xC, Type: StructProperty)
    std::uint8_t OriginRole[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    float MaxDistance; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::int32_t SamplingAttributeId; // 0x0078 (Size: 0x4, Type: IntProperty)
    float SampleTimeOffset; // 0x007C (Size: 0x4, Type: FloatProperty)
    float OriginTimeOffset; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::int8_t SchemaBoneIdx; // 0x0084 (Size: 0x1, Type: Int8Property)
    std::int8_t SchemaOriginBoneIdx; // 0x0085 (Size: 0x1, Type: Int8Property)
    std::uint8_t InputQueryPose; // 0x0086 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PermutationTimeType; // 0x0087 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_Distance, bDefaultWithRootBone) == 80, "Offset mismatch for UPoseSearchFeatureChannel_Distance::bDefaultWithRootBone");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, bone) == 84, "Offset mismatch for UPoseSearchFeatureChannel_Distance::bone");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, SampleRole) == 96, "Offset mismatch for UPoseSearchFeatureChannel_Distance::SampleRole");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, OriginBone) == 100, "Offset mismatch for UPoseSearchFeatureChannel_Distance::OriginBone");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, OriginRole) == 112, "Offset mismatch for UPoseSearchFeatureChannel_Distance::OriginRole");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, MaxDistance) == 116, "Offset mismatch for UPoseSearchFeatureChannel_Distance::MaxDistance");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, SamplingAttributeId) == 120, "Offset mismatch for UPoseSearchFeatureChannel_Distance::SamplingAttributeId");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, SampleTimeOffset) == 124, "Offset mismatch for UPoseSearchFeatureChannel_Distance::SampleTimeOffset");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, OriginTimeOffset) == 128, "Offset mismatch for UPoseSearchFeatureChannel_Distance::OriginTimeOffset");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, SchemaBoneIdx) == 132, "Offset mismatch for UPoseSearchFeatureChannel_Distance::SchemaBoneIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, SchemaOriginBoneIdx) == 133, "Offset mismatch for UPoseSearchFeatureChannel_Distance::SchemaOriginBoneIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, InputQueryPose) == 134, "Offset mismatch for UPoseSearchFeatureChannel_Distance::InputQueryPose");
static_assert(offsetof(UPoseSearchFeatureChannel_Distance, PermutationTimeType) == 135, "Offset mismatch for UPoseSearchFeatureChannel_Distance::PermutationTimeType");

// /Script/PoseSearch.PoseSearchFeatureChannel_FilterCrashingLegs
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_FilterCrashingLegs
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t LeftThigh[0xC]; // 0x0050 (Size: 0xC, Type: StructProperty)
    std::uint8_t RightThigh[0xC]; // 0x005C (Size: 0xC, Type: StructProperty)
    std::uint8_t LeftFoot[0xC]; // 0x0068 (Size: 0xC, Type: StructProperty)
    std::uint8_t RightFoot[0xC]; // 0x0074 (Size: 0xC, Type: StructProperty)
    std::uint8_t SampleRole[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::int8_t LeftThighIdx; // 0x0088 (Size: 0x1, Type: Int8Property)
    std::int8_t RightThighIdx; // 0x0089 (Size: 0x1, Type: Int8Property)
    std::int8_t LeftFootIdx; // 0x008A (Size: 0x1, Type: Int8Property)
    std::int8_t RightFootIdx; // 0x008B (Size: 0x1, Type: Int8Property)
    std::uint8_t InputQueryPose; // 0x008C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x008D
    float AllowedTolerance; // 0x0090 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, LeftThigh) == 80, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::LeftThigh");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, RightThigh) == 92, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::RightThigh");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, LeftFoot) == 104, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::LeftFoot");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, RightFoot) == 116, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::RightFoot");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, SampleRole) == 128, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::SampleRole");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, Weight) == 132, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::Weight");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, LeftThighIdx) == 136, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::LeftThighIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, RightThighIdx) == 137, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::RightThighIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, LeftFootIdx) == 138, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::LeftFootIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, RightFootIdx) == 139, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::RightFootIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, InputQueryPose) == 140, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::InputQueryPose");
static_assert(offsetof(UPoseSearchFeatureChannel_FilterCrashingLegs, AllowedTolerance) == 144, "Offset mismatch for UPoseSearchFeatureChannel_FilterCrashingLegs::AllowedTolerance");

// /Script/PoseSearch.PoseSearchFeatureChannel_Group
// Kind: Class; super: PoseSearchFeatureChannel_GroupBase
class UPoseSearchFeatureChannel_Group
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> SubChannels; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_Group, SubChannels) == 88, "Offset mismatch for UPoseSearchFeatureChannel_Group::SubChannels");

// /Script/PoseSearch.PoseSearchFeatureChannel_GroupBase
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_GroupBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t SampleRole[0x4]; // 0x0050 (Size: 0x4, Type: NameProperty)
    std::int32_t DebugWeightGroupID; // 0x0054 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_GroupBase, SampleRole) == 80, "Offset mismatch for UPoseSearchFeatureChannel_GroupBase::SampleRole");
static_assert(offsetof(UPoseSearchFeatureChannel_GroupBase, DebugWeightGroupID) == 84, "Offset mismatch for UPoseSearchFeatureChannel_GroupBase::DebugWeightGroupID");

// /Script/PoseSearch.PoseSearchFeatureChannel_Heading
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_Heading
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t bDefaultWithRootBone; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    std::uint8_t bone[0xC]; // 0x0054 (Size: 0xC, Type: StructProperty)
    std::uint8_t SampleRole[0x4]; // 0x0060 (Size: 0x4, Type: NameProperty)
    std::uint8_t OriginBone[0xC]; // 0x0064 (Size: 0xC, Type: StructProperty)
    std::uint8_t OriginRole[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::int32_t SamplingAttributeId; // 0x0074 (Size: 0x4, Type: IntProperty)
    float SampleTimeOffset; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float OriginTimeOffset; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t HeadingAxis; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::int8_t SchemaBoneIdx; // 0x0081 (Size: 0x1, Type: Int8Property)
    std::int8_t SchemaOriginBoneIdx; // 0x0082 (Size: 0x1, Type: Int8Property)
    std::uint8_t InputQueryPose; // 0x0083 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ComponentStripping; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PermutationTimeType; // 0x0085 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_Heading, bDefaultWithRootBone) == 80, "Offset mismatch for UPoseSearchFeatureChannel_Heading::bDefaultWithRootBone");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, bone) == 84, "Offset mismatch for UPoseSearchFeatureChannel_Heading::bone");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, SampleRole) == 96, "Offset mismatch for UPoseSearchFeatureChannel_Heading::SampleRole");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, OriginBone) == 100, "Offset mismatch for UPoseSearchFeatureChannel_Heading::OriginBone");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, OriginRole) == 112, "Offset mismatch for UPoseSearchFeatureChannel_Heading::OriginRole");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, SamplingAttributeId) == 116, "Offset mismatch for UPoseSearchFeatureChannel_Heading::SamplingAttributeId");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, SampleTimeOffset) == 120, "Offset mismatch for UPoseSearchFeatureChannel_Heading::SampleTimeOffset");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, OriginTimeOffset) == 124, "Offset mismatch for UPoseSearchFeatureChannel_Heading::OriginTimeOffset");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, HeadingAxis) == 128, "Offset mismatch for UPoseSearchFeatureChannel_Heading::HeadingAxis");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, SchemaBoneIdx) == 129, "Offset mismatch for UPoseSearchFeatureChannel_Heading::SchemaBoneIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, SchemaOriginBoneIdx) == 130, "Offset mismatch for UPoseSearchFeatureChannel_Heading::SchemaOriginBoneIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, InputQueryPose) == 131, "Offset mismatch for UPoseSearchFeatureChannel_Heading::InputQueryPose");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, ComponentStripping) == 132, "Offset mismatch for UPoseSearchFeatureChannel_Heading::ComponentStripping");
static_assert(offsetof(UPoseSearchFeatureChannel_Heading, PermutationTimeType) == 133, "Offset mismatch for UPoseSearchFeatureChannel_Heading::PermutationTimeType");

// /Script/PoseSearch.PoseSearchFeatureChannel_Padding
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_Padding
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t PaddingSize; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_Padding, PaddingSize) == 80, "Offset mismatch for UPoseSearchFeatureChannel_Padding::PaddingSize");

// /Script/PoseSearch.PoseSearchFeatureChannel_PermutationTime
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_PermutationTime
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t ChannelDataOffset; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t ChannelCardinality; // 0x003C (Size: 0x4, Type: IntProperty)
    TArray<void*> Filters; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_PermutationTime, ChannelDataOffset) == 56, "Offset mismatch for UPoseSearchFeatureChannel_PermutationTime::ChannelDataOffset");
static_assert(offsetof(UPoseSearchFeatureChannel_PermutationTime, ChannelCardinality) == 60, "Offset mismatch for UPoseSearchFeatureChannel_PermutationTime::ChannelCardinality");
static_assert(offsetof(UPoseSearchFeatureChannel_PermutationTime, Filters) == 64, "Offset mismatch for UPoseSearchFeatureChannel_PermutationTime::Filters");

// /Script/PoseSearch.PoseSearchFeatureChannel_Phase
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_Phase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t bone[0xC]; // 0x0050 (Size: 0xC, Type: StructProperty)
    std::uint8_t SampleRole[0x4]; // 0x005C (Size: 0x4, Type: NameProperty)
    std::int8_t SchemaBoneIdx; // 0x0060 (Size: 0x1, Type: Int8Property)
    std::uint8_t InputQueryPose; // 0x0061 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_Phase, bone) == 80, "Offset mismatch for UPoseSearchFeatureChannel_Phase::bone");
static_assert(offsetof(UPoseSearchFeatureChannel_Phase, SampleRole) == 92, "Offset mismatch for UPoseSearchFeatureChannel_Phase::SampleRole");
static_assert(offsetof(UPoseSearchFeatureChannel_Phase, SchemaBoneIdx) == 96, "Offset mismatch for UPoseSearchFeatureChannel_Phase::SchemaBoneIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Phase, InputQueryPose) == 97, "Offset mismatch for UPoseSearchFeatureChannel_Phase::InputQueryPose");

// /Script/PoseSearch.PoseSearchFeatureChannel_Pose
// Kind: Class; super: PoseSearchFeatureChannel_GroupBase
class UPoseSearchFeatureChannel_Pose
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> SampledBones; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SchemaBoneIdx; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InputQueryPose; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseCharacterSpaceVelocities; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PermutationTimeType; // 0x007A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x007B
    TArray<void*> SubChannels; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_Pose, SampledBones) == 88, "Offset mismatch for UPoseSearchFeatureChannel_Pose::SampledBones");
static_assert(offsetof(UPoseSearchFeatureChannel_Pose, SchemaBoneIdx) == 104, "Offset mismatch for UPoseSearchFeatureChannel_Pose::SchemaBoneIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Pose, InputQueryPose) == 120, "Offset mismatch for UPoseSearchFeatureChannel_Pose::InputQueryPose");
static_assert(offsetof(UPoseSearchFeatureChannel_Pose, bUseCharacterSpaceVelocities) == 121, "Offset mismatch for UPoseSearchFeatureChannel_Pose::bUseCharacterSpaceVelocities");
static_assert(offsetof(UPoseSearchFeatureChannel_Pose, PermutationTimeType) == 122, "Offset mismatch for UPoseSearchFeatureChannel_Pose::PermutationTimeType");
static_assert(offsetof(UPoseSearchFeatureChannel_Pose, SubChannels) == 128, "Offset mismatch for UPoseSearchFeatureChannel_Pose::SubChannels");

// /Script/PoseSearch.PoseSearchFeatureChannel_Position
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_Position
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t bDefaultWithRootBone; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    std::uint8_t bone[0xC]; // 0x0054 (Size: 0xC, Type: StructProperty)
    std::uint8_t SampleRole[0x4]; // 0x0060 (Size: 0x4, Type: NameProperty)
    std::uint8_t OriginBone[0xC]; // 0x0064 (Size: 0xC, Type: StructProperty)
    std::uint8_t OriginRole[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::int32_t SamplingAttributeId; // 0x0074 (Size: 0x4, Type: IntProperty)
    float SampleTimeOffset; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float OriginTimeOffset; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::int8_t SchemaBoneIdx; // 0x0080 (Size: 0x1, Type: Int8Property)
    std::int8_t SchemaOriginBoneIdx; // 0x0081 (Size: 0x1, Type: Int8Property)
    std::uint8_t InputQueryPose; // 0x0082 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ComponentStripping; // 0x0083 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PermutationTimeType; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bNormalizeDisplacement; // 0x0085 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_Position, bDefaultWithRootBone) == 80, "Offset mismatch for UPoseSearchFeatureChannel_Position::bDefaultWithRootBone");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, bone) == 84, "Offset mismatch for UPoseSearchFeatureChannel_Position::bone");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, SampleRole) == 96, "Offset mismatch for UPoseSearchFeatureChannel_Position::SampleRole");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, OriginBone) == 100, "Offset mismatch for UPoseSearchFeatureChannel_Position::OriginBone");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, OriginRole) == 112, "Offset mismatch for UPoseSearchFeatureChannel_Position::OriginRole");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, SamplingAttributeId) == 116, "Offset mismatch for UPoseSearchFeatureChannel_Position::SamplingAttributeId");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, SampleTimeOffset) == 120, "Offset mismatch for UPoseSearchFeatureChannel_Position::SampleTimeOffset");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, OriginTimeOffset) == 124, "Offset mismatch for UPoseSearchFeatureChannel_Position::OriginTimeOffset");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, SchemaBoneIdx) == 128, "Offset mismatch for UPoseSearchFeatureChannel_Position::SchemaBoneIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, SchemaOriginBoneIdx) == 129, "Offset mismatch for UPoseSearchFeatureChannel_Position::SchemaOriginBoneIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, InputQueryPose) == 130, "Offset mismatch for UPoseSearchFeatureChannel_Position::InputQueryPose");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, ComponentStripping) == 131, "Offset mismatch for UPoseSearchFeatureChannel_Position::ComponentStripping");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, PermutationTimeType) == 132, "Offset mismatch for UPoseSearchFeatureChannel_Position::PermutationTimeType");
static_assert(offsetof(UPoseSearchFeatureChannel_Position, bNormalizeDisplacement) == 133, "Offset mismatch for UPoseSearchFeatureChannel_Position::bNormalizeDisplacement");

// /Script/PoseSearch.PoseSearchFeatureChannel_SamplingTime
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_SamplingTime
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float Weight; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float TimeToMatch; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_SamplingTime, Weight) == 80, "Offset mismatch for UPoseSearchFeatureChannel_SamplingTime::Weight");
static_assert(offsetof(UPoseSearchFeatureChannel_SamplingTime, TimeToMatch) == 84, "Offset mismatch for UPoseSearchFeatureChannel_SamplingTime::TimeToMatch");

// /Script/PoseSearch.PoseSearchFeatureChannel_TimeToEvent
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_TimeToEvent
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float Weight; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::int32_t SamplingAttributeId; // 0x0054 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_TimeToEvent, Weight) == 80, "Offset mismatch for UPoseSearchFeatureChannel_TimeToEvent::Weight");
static_assert(offsetof(UPoseSearchFeatureChannel_TimeToEvent, SamplingAttributeId) == 84, "Offset mismatch for UPoseSearchFeatureChannel_TimeToEvent::SamplingAttributeId");

// /Script/PoseSearch.PoseSearchFeatureChannel_Trajectory
// Kind: Class; super: PoseSearchFeatureChannel_GroupBase
class UPoseSearchFeatureChannel_Trajectory
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Samples; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SubChannels; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_Trajectory, Samples) == 88, "Offset mismatch for UPoseSearchFeatureChannel_Trajectory::Samples");
static_assert(offsetof(UPoseSearchFeatureChannel_Trajectory, SubChannels) == 104, "Offset mismatch for UPoseSearchFeatureChannel_Trajectory::SubChannels");

// /Script/PoseSearch.PoseSearchFeatureChannel_Velocity
// Kind: Class; super: PoseSearchFeatureChannel
class UPoseSearchFeatureChannel_Velocity
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t bDefaultWithRootBone; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    std::uint8_t bone[0xC]; // 0x0054 (Size: 0xC, Type: StructProperty)
    std::uint8_t SampleRole[0x4]; // 0x0060 (Size: 0x4, Type: NameProperty)
    std::uint8_t OriginBone[0xC]; // 0x0064 (Size: 0xC, Type: StructProperty)
    std::uint8_t OriginRole[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::int32_t SamplingAttributeId; // 0x0074 (Size: 0x4, Type: IntProperty)
    float SampleTimeOffset; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float OriginTimeOffset; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::int8_t SchemaBoneIdx; // 0x0080 (Size: 0x1, Type: Int8Property)
    std::int8_t SchemaOriginBoneIdx; // 0x0081 (Size: 0x1, Type: Int8Property)
    std::uint8_t InputQueryPose; // 0x0082 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseCharacterSpaceVelocities; // 0x0083 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNormalize; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ComponentStripping; // 0x0085 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PermutationTimeType; // 0x0086 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, bDefaultWithRootBone) == 80, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::bDefaultWithRootBone");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, bone) == 84, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::bone");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, SampleRole) == 96, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::SampleRole");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, OriginBone) == 100, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::OriginBone");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, OriginRole) == 112, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::OriginRole");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, SamplingAttributeId) == 116, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::SamplingAttributeId");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, SampleTimeOffset) == 120, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::SampleTimeOffset");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, OriginTimeOffset) == 124, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::OriginTimeOffset");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, SchemaBoneIdx) == 128, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::SchemaBoneIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, SchemaOriginBoneIdx) == 129, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::SchemaOriginBoneIdx");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, InputQueryPose) == 130, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::InputQueryPose");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, bUseCharacterSpaceVelocities) == 131, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::bUseCharacterSpaceVelocities");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, bNormalize) == 132, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::bNormalize");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, ComponentStripping) == 133, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::ComponentStripping");
static_assert(offsetof(UPoseSearchFeatureChannel_Velocity, PermutationTimeType) == 134, "Offset mismatch for UPoseSearchFeatureChannel_Velocity::PermutationTimeType");

// /Script/PoseSearch.PoseSearchHistoryCollectorAnimNodeLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPoseSearchHistoryCollectorAnimNodeLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchInteractionAsset
// Kind: Class; super: MultiAnimAsset
class UPoseSearchInteractionAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Items; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float WarpingBankingWeight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float MinimalTranslationWeight; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPoseSearchInteractionAsset, Items) == 40, "Offset mismatch for UPoseSearchInteractionAsset::Items");
static_assert(offsetof(UPoseSearchInteractionAsset, WarpingBankingWeight) == 56, "Offset mismatch for UPoseSearchInteractionAsset::WarpingBankingWeight");
static_assert(offsetof(UPoseSearchInteractionAsset, MinimalTranslationWeight) == 60, "Offset mismatch for UPoseSearchInteractionAsset::MinimalTranslationWeight");

// /Script/PoseSearch.PoseSearchInteractionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPoseSearchInteractionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchInteractionSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UPoseSearchInteractionSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPoseSearchLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchNormalizationSet
// Kind: Class; super: DataAsset
class UPoseSearchNormalizationSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Databases; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPoseSearchNormalizationSet, Databases) == 40, "Offset mismatch for UPoseSearchNormalizationSet::Databases");

// /Script/PoseSearch.PoseSearchSchema
// Kind: Class; super: DataAsset
class UPoseSearchSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t SampleRate; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> Skeletons; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Channels; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FinalizedChannels; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SchemaCardinality; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAddDataPadding; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInjectAdditionalDebugChannels; // 0x0065 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPoseSearchSchema, SampleRate) == 40, "Offset mismatch for UPoseSearchSchema::SampleRate");
static_assert(offsetof(UPoseSearchSchema, Skeletons) == 48, "Offset mismatch for UPoseSearchSchema::Skeletons");
static_assert(offsetof(UPoseSearchSchema, Channels) == 64, "Offset mismatch for UPoseSearchSchema::Channels");
static_assert(offsetof(UPoseSearchSchema, FinalizedChannels) == 80, "Offset mismatch for UPoseSearchSchema::FinalizedChannels");
static_assert(offsetof(UPoseSearchSchema, SchemaCardinality) == 96, "Offset mismatch for UPoseSearchSchema::SchemaCardinality");
static_assert(offsetof(UPoseSearchSchema, bAddDataPadding) == 100, "Offset mismatch for UPoseSearchSchema::bAddDataPadding");
static_assert(offsetof(UPoseSearchSchema, bInjectAdditionalDebugChannels) == 101, "Offset mismatch for UPoseSearchSchema::bInjectAdditionalDebugChannels");

// /Script/PoseSearch.PoseSearchSettings
// Kind: Class; super: DeveloperSettings
class UPoseSearchSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t AvailabilitiesBufferSize; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxDatabaseEditorPreviewActors; // 0x0034 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPoseSearchSettings, AvailabilitiesBufferSize) == 48, "Offset mismatch for UPoseSearchSettings::AvailabilitiesBufferSize");
static_assert(offsetof(UPoseSearchSettings, MaxDatabaseEditorPreviewActors) == 52, "Offset mismatch for UPoseSearchSettings::MaxDatabaseEditorPreviewActors");

// /Script/PoseSearch.PoseSearchTrajectoryLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPoseSearchTrajectoryLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PoseSearch.PoseSearchTrajectoryPredictorInterface
// Kind: Class; super: Interface
class UPoseSearchTrajectoryPredictorInterface
{
public:
    std::uint8_t Opaque[1];
};
