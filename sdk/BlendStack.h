/**
 * decamp dumper generated SDK
 * Package: /Script/BlendStack
 */
#pragma once
#include "Basic.h"

// /Script/BlendStack.AnimNode_BlendStack
// Kind: ScriptStruct; super: AnimNode_BlendStack_Standalone
struct FAnimNode_BlendStack
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* AnimationAsset; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    float AnimationTime; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float ActivationDelayTime; // 0x00DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLoop; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMirrored; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00E2
    float WantedPlayRate; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float BlendTime; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float MaxAnimationDeltaTime; // 0x00EC (Size: 0x4, Type: FloatProperty)
    void* BlendProfile; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlendOption; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BlendspaceUpdateMode; // 0x00F9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00FA
    std::uint8_t BlendParameters[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    void* MirrorDataTable; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    float BlendParametersDeltaThreshold; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceBlendTo; // 0x0124 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseInertialBlend; // 0x0125 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0126
    std::uint8_t InertialBlendNodeTag[0x4]; // 0x0128 (Size: 0x4, Type: NameProperty)
    std::uint8_t bResetOnBecomingRelevant; // 0x012C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_BlendStack, AnimationAsset) == 208, "Offset mismatch for FAnimNode_BlendStack::AnimationAsset");
static_assert(offsetof(FAnimNode_BlendStack, AnimationTime) == 216, "Offset mismatch for FAnimNode_BlendStack::AnimationTime");
static_assert(offsetof(FAnimNode_BlendStack, ActivationDelayTime) == 220, "Offset mismatch for FAnimNode_BlendStack::ActivationDelayTime");
static_assert(offsetof(FAnimNode_BlendStack, bLoop) == 224, "Offset mismatch for FAnimNode_BlendStack::bLoop");
static_assert(offsetof(FAnimNode_BlendStack, bMirrored) == 225, "Offset mismatch for FAnimNode_BlendStack::bMirrored");
static_assert(offsetof(FAnimNode_BlendStack, WantedPlayRate) == 228, "Offset mismatch for FAnimNode_BlendStack::WantedPlayRate");
static_assert(offsetof(FAnimNode_BlendStack, BlendTime) == 232, "Offset mismatch for FAnimNode_BlendStack::BlendTime");
static_assert(offsetof(FAnimNode_BlendStack, MaxAnimationDeltaTime) == 236, "Offset mismatch for FAnimNode_BlendStack::MaxAnimationDeltaTime");
static_assert(offsetof(FAnimNode_BlendStack, BlendProfile) == 240, "Offset mismatch for FAnimNode_BlendStack::BlendProfile");
static_assert(offsetof(FAnimNode_BlendStack, BlendOption) == 248, "Offset mismatch for FAnimNode_BlendStack::BlendOption");
static_assert(offsetof(FAnimNode_BlendStack, BlendspaceUpdateMode) == 249, "Offset mismatch for FAnimNode_BlendStack::BlendspaceUpdateMode");
static_assert(offsetof(FAnimNode_BlendStack, BlendParameters) == 256, "Offset mismatch for FAnimNode_BlendStack::BlendParameters");
static_assert(offsetof(FAnimNode_BlendStack, MirrorDataTable) == 280, "Offset mismatch for FAnimNode_BlendStack::MirrorDataTable");
static_assert(offsetof(FAnimNode_BlendStack, BlendParametersDeltaThreshold) == 288, "Offset mismatch for FAnimNode_BlendStack::BlendParametersDeltaThreshold");
static_assert(offsetof(FAnimNode_BlendStack, bForceBlendTo) == 292, "Offset mismatch for FAnimNode_BlendStack::bForceBlendTo");
static_assert(offsetof(FAnimNode_BlendStack, bUseInertialBlend) == 293, "Offset mismatch for FAnimNode_BlendStack::bUseInertialBlend");
static_assert(offsetof(FAnimNode_BlendStack, InertialBlendNodeTag) == 296, "Offset mismatch for FAnimNode_BlendStack::InertialBlendNodeTag");
static_assert(offsetof(FAnimNode_BlendStack, bResetOnBecomingRelevant) == 300, "Offset mismatch for FAnimNode_BlendStack::bResetOnBecomingRelevant");

// /Script/BlendStack.AnimNode_BlendStackInput
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_BlendStackInput
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t SampleIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t BlendStackAllocationIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOverridePlayRate; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    float PlayRate; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_BlendStackInput, SampleIndex) == 16, "Offset mismatch for FAnimNode_BlendStackInput::SampleIndex");
static_assert(offsetof(FAnimNode_BlendStackInput, BlendStackAllocationIndex) == 20, "Offset mismatch for FAnimNode_BlendStackInput::BlendStackAllocationIndex");
static_assert(offsetof(FAnimNode_BlendStackInput, bOverridePlayRate) == 24, "Offset mismatch for FAnimNode_BlendStackInput::bOverridePlayRate");
static_assert(offsetof(FAnimNode_BlendStackInput, PlayRate) == 28, "Offset mismatch for FAnimNode_BlendStackInput::PlayRate");

// /Script/BlendStack.AnimNode_BlendStack_Standalone
// Kind: ScriptStruct; super: AnimNode_AssetPlayerBase
struct FAnimNode_BlendStack_Standalone
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> PerSampleGraphPoseLinks; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0060
    TArray<void*> AnimPlayers; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldFilterNotifies; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0079
    void* StitchDatabase; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    float StitchBlendTime; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float StitchBlendMaxCost; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxActiveBlends; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t bStoreBlendedPose; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x23]; // 0x0095
    float NotifyRecencyTimeOut; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float MaxBlendInTimeToOverrideAnimation; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float PlayerDepthBlendInTimeMultiplier; // 0x00C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_BlendStack_Standalone, PerSampleGraphPoseLinks) == 80, "Offset mismatch for FAnimNode_BlendStack_Standalone::PerSampleGraphPoseLinks");
static_assert(offsetof(FAnimNode_BlendStack_Standalone, AnimPlayers) == 104, "Offset mismatch for FAnimNode_BlendStack_Standalone::AnimPlayers");
static_assert(offsetof(FAnimNode_BlendStack_Standalone, bShouldFilterNotifies) == 120, "Offset mismatch for FAnimNode_BlendStack_Standalone::bShouldFilterNotifies");
static_assert(offsetof(FAnimNode_BlendStack_Standalone, StitchDatabase) == 128, "Offset mismatch for FAnimNode_BlendStack_Standalone::StitchDatabase");
static_assert(offsetof(FAnimNode_BlendStack_Standalone, StitchBlendTime) == 136, "Offset mismatch for FAnimNode_BlendStack_Standalone::StitchBlendTime");
static_assert(offsetof(FAnimNode_BlendStack_Standalone, StitchBlendMaxCost) == 140, "Offset mismatch for FAnimNode_BlendStack_Standalone::StitchBlendMaxCost");
static_assert(offsetof(FAnimNode_BlendStack_Standalone, MaxActiveBlends) == 144, "Offset mismatch for FAnimNode_BlendStack_Standalone::MaxActiveBlends");
static_assert(offsetof(FAnimNode_BlendStack_Standalone, bStoreBlendedPose) == 148, "Offset mismatch for FAnimNode_BlendStack_Standalone::bStoreBlendedPose");
static_assert(offsetof(FAnimNode_BlendStack_Standalone, NotifyRecencyTimeOut) == 184, "Offset mismatch for FAnimNode_BlendStack_Standalone::NotifyRecencyTimeOut");
static_assert(offsetof(FAnimNode_BlendStack_Standalone, MaxBlendInTimeToOverrideAnimation) == 188, "Offset mismatch for FAnimNode_BlendStack_Standalone::MaxBlendInTimeToOverrideAnimation");
static_assert(offsetof(FAnimNode_BlendStack_Standalone, PlayerDepthBlendInTimeMultiplier) == 192, "Offset mismatch for FAnimNode_BlendStack_Standalone::PlayerDepthBlendInTimeMultiplier");

// /Script/BlendStack.BlendStackAnimNodeReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FBlendStackAnimNodeReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BlendStack.BlendStackAnimPlayer
// Kind: ScriptStruct; super: none
struct FBlendStackAnimPlayer
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t SequencePlayerNode[0x98]; // 0x0020 (Size: 0x98, Type: StructProperty)
    std::uint8_t BlendSpacePlayerNode[0x98]; // 0x00B8 (Size: 0x98, Type: StructProperty)
    std::uint8_t MirrorNode[0x230]; // 0x0150 (Size: 0x230, Type: StructProperty)
    void* BlendProfile; // 0x0380 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBlendStackAnimPlayer, SequencePlayerNode) == 32, "Offset mismatch for FBlendStackAnimPlayer::SequencePlayerNode");
static_assert(offsetof(FBlendStackAnimPlayer, BlendSpacePlayerNode) == 184, "Offset mismatch for FBlendStackAnimPlayer::BlendSpacePlayerNode");
static_assert(offsetof(FBlendStackAnimPlayer, MirrorNode) == 336, "Offset mismatch for FBlendStackAnimPlayer::MirrorNode");
static_assert(offsetof(FBlendStackAnimPlayer, BlendProfile) == 896, "Offset mismatch for FBlendStackAnimPlayer::BlendProfile");

// /Script/BlendStack.BlendStackInputAnimNodeReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FBlendStackInputAnimNodeReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BlendStack.BlendStackAnimNodeLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlendStackAnimNodeLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BlendStack.BlendStackInputAnimNodeLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlendStackInputAnimNodeLibrary
{
public:
    std::uint8_t Opaque[1];
};
