/**
 * decamp dumper generated SDK
 * Package: /Script/LiveLinkAnimationCore
 */
#pragma once
#include "Basic.h"

// /Script/LiveLinkAnimationCore.AnimNode_LiveLinkPose
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_LiveLinkPose
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InputPose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t LiveLinkSubjectName[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDoLiveLinkEvaluation; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    void* RetargetAsset; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* CurrentRetargetAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNode_LiveLinkPose, InputPose) == 16, "Offset mismatch for FAnimNode_LiveLinkPose::InputPose");
static_assert(offsetof(FAnimNode_LiveLinkPose, LiveLinkSubjectName) == 32, "Offset mismatch for FAnimNode_LiveLinkPose::LiveLinkSubjectName");
static_assert(offsetof(FAnimNode_LiveLinkPose, bDoLiveLinkEvaluation) == 36, "Offset mismatch for FAnimNode_LiveLinkPose::bDoLiveLinkEvaluation");
static_assert(offsetof(FAnimNode_LiveLinkPose, RetargetAsset) == 40, "Offset mismatch for FAnimNode_LiveLinkPose::RetargetAsset");
static_assert(offsetof(FAnimNode_LiveLinkPose, CurrentRetargetAsset) == 48, "Offset mismatch for FAnimNode_LiveLinkPose::CurrentRetargetAsset");

// /Script/LiveLinkAnimationCore.LiveLinkInstanceProxy
// Kind: ScriptStruct; super: AnimInstanceProxy
struct FLiveLinkInstanceProxy
{
public:
    std::uint8_t Pad_0000[0x480]; // 0x0000
    std::uint8_t PoseNode[0x1]; // 0x0480 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkInstanceProxy, PoseNode) == 1152, "Offset mismatch for FLiveLinkInstanceProxy::PoseNode");

// /Script/LiveLinkAnimationCore.LiveLinkInstance
// Kind: Class; super: AnimInstance
class ULiveLinkInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    void* CurrentRetargetAsset; // 0x0260 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULiveLinkInstance, CurrentRetargetAsset) == 608, "Offset mismatch for ULiveLinkInstance::CurrentRetargetAsset");

// /Script/LiveLinkAnimationCore.LiveLinkRemapAsset
// Kind: Class; super: LiveLinkRetargetAsset
class ULiveLinkRemapAsset
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkAnimationCore.LiveLinkRetargetAsset
// Kind: Class; super: Object
class ULiveLinkRetargetAsset
{
public:
    std::uint8_t Opaque[1];
};
