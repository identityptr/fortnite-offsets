/**
 * decamp dumper generated SDK
 * Package: /Script/HierarchyTableAnimationRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HierarchyTableAnimationRuntime.AnimNode_BlendProfileLayeredBlend
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_BlendProfileLayeredBlend
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BasePose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlendPose[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    void* BlendProfileAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RotationBlendSpace; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCustomCurveBlending; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurveBlendingOption; // 0x003A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x003B
    std::uint8_t SkeletonGuid[0x10]; // 0x003C (Size: 0x10, Type: StructProperty)
    std::uint8_t VirtualBoneGuid[0x10]; // 0x004C (Size: 0x10, Type: StructProperty)
    std::uint8_t MaskTableGuid[0x14]; // 0x005C (Size: 0x14, Type: StructProperty)
    float BlendWeight; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBlendRootMotionBasedOnRootBone; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x23]; // 0x0075
    void* CachedBlendProfile; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, BasePose) == 16, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::BasePose");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, BlendPose) == 32, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::BlendPose");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, BlendProfileAsset) == 48, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::BlendProfileAsset");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, RotationBlendSpace) == 56, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::RotationBlendSpace");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, bCustomCurveBlending) == 57, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::bCustomCurveBlending");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, CurveBlendingOption) == 58, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::CurveBlendingOption");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, SkeletonGuid) == 60, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::SkeletonGuid");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, VirtualBoneGuid) == 76, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::VirtualBoneGuid");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, MaskTableGuid) == 92, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::MaskTableGuid");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, BlendWeight) == 112, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::BlendWeight");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, bBlendRootMotionBasedOnRootBone) == 116, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::bBlendRootMotionBasedOnRootBone");
static_assert(offsetof(FAnimNode_BlendProfileLayeredBlend, CachedBlendProfile) == 152, "Offset mismatch for FAnimNode_BlendProfileLayeredBlend::CachedBlendProfile");

// /Script/HierarchyTableAnimationRuntime.BlendProfileStandaloneCachedData
// Kind: ScriptStruct; super: none
struct FBlendProfileStandaloneCachedData
{
public:
    void* skeleton; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BoneBlendWeights; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SerializedCurveBlendWeights; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SerializedAttributeBlendWeights; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Mode; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FBlendProfileStandaloneCachedData, skeleton) == 0, "Offset mismatch for FBlendProfileStandaloneCachedData::skeleton");
static_assert(offsetof(FBlendProfileStandaloneCachedData, BoneBlendWeights) == 8, "Offset mismatch for FBlendProfileStandaloneCachedData::BoneBlendWeights");
static_assert(offsetof(FBlendProfileStandaloneCachedData, SerializedCurveBlendWeights) == 24, "Offset mismatch for FBlendProfileStandaloneCachedData::SerializedCurveBlendWeights");
static_assert(offsetof(FBlendProfileStandaloneCachedData, SerializedAttributeBlendWeights) == 40, "Offset mismatch for FBlendProfileStandaloneCachedData::SerializedAttributeBlendWeights");
static_assert(offsetof(FBlendProfileStandaloneCachedData, Mode) == 56, "Offset mismatch for FBlendProfileStandaloneCachedData::Mode");

// /Script/HierarchyTableAnimationRuntime.HierarchyTable_ElementType_Mask
// Kind: ScriptStruct; super: HierarchyTable_ElementType
struct FHierarchyTable_ElementType_Mask
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHierarchyTable_ElementType_Mask, Value) == 0, "Offset mismatch for FHierarchyTable_ElementType_Mask::Value");

// /Script/HierarchyTableAnimationRuntime.HierarchyTable_TablePayloadType_Skeleton
// Kind: ScriptStruct; super: HierarchyTable_TablePayloadType
struct FHierarchyTable_TablePayloadType_Skeleton
{
public:
    std::uint8_t EntryType; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FHierarchyTable_TablePayloadType_Skeleton, EntryType) == 0, "Offset mismatch for FHierarchyTable_TablePayloadType_Skeleton::EntryType");

// /Script/HierarchyTableAnimationRuntime.HierarchyTable_TableType_Skeleton
// Kind: ScriptStruct; super: HierarchyTable_TableType
struct FHierarchyTable_TableType_Skeleton
{
public:
    void* skeleton; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FHierarchyTable_TableType_Skeleton, skeleton) == 0, "Offset mismatch for FHierarchyTable_TableType_Skeleton::skeleton");

// /Script/HierarchyTableAnimationRuntime.MaskedAttributeWeightSerialised
// Kind: ScriptStruct; super: none
struct FMaskedAttributeWeightSerialised
{
public:
    std::uint8_t AttributeNamespace[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::int32_t AttributeIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    float Weight; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMaskedAttributeWeightSerialised, AttributeNamespace) == 0, "Offset mismatch for FMaskedAttributeWeightSerialised::AttributeNamespace");
static_assert(offsetof(FMaskedAttributeWeightSerialised, AttributeName) == 4, "Offset mismatch for FMaskedAttributeWeightSerialised::AttributeName");
static_assert(offsetof(FMaskedAttributeWeightSerialised, AttributeIndex) == 8, "Offset mismatch for FMaskedAttributeWeightSerialised::AttributeIndex");
static_assert(offsetof(FMaskedAttributeWeightSerialised, Weight) == 12, "Offset mismatch for FMaskedAttributeWeightSerialised::Weight");

// /Script/HierarchyTableAnimationRuntime.MaskedCurveWeightSerialised
// Kind: ScriptStruct; super: none
struct FMaskedCurveWeightSerialised
{
public:
    std::uint8_t CurveName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMaskedCurveWeightSerialised, CurveName) == 0, "Offset mismatch for FMaskedCurveWeightSerialised::CurveName");
static_assert(offsetof(FMaskedCurveWeightSerialised, Weight) == 4, "Offset mismatch for FMaskedCurveWeightSerialised::Weight");

// /Script/HierarchyTableAnimationRuntime.BlendProfileStandalone
// Kind: Class; super: Object
class UBlendProfileStandalone
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Type; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t CachedBlendProfileData[0x68]; // 0x0030 (Size: 0x68, Type: StructProperty)
    void* skeleton; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SkeletonHierarchyGuid[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SkeletonVirtualBonesHierarchyGuid[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBlendProfileStandalone, Type) == 40, "Offset mismatch for UBlendProfileStandalone::Type");
static_assert(offsetof(UBlendProfileStandalone, CachedBlendProfileData) == 48, "Offset mismatch for UBlendProfileStandalone::CachedBlendProfileData");
static_assert(offsetof(UBlendProfileStandalone, skeleton) == 152, "Offset mismatch for UBlendProfileStandalone::skeleton");
static_assert(offsetof(UBlendProfileStandalone, SkeletonHierarchyGuid) == 160, "Offset mismatch for UBlendProfileStandalone::SkeletonHierarchyGuid");
static_assert(offsetof(UBlendProfileStandalone, SkeletonVirtualBonesHierarchyGuid) == 176, "Offset mismatch for UBlendProfileStandalone::SkeletonVirtualBonesHierarchyGuid");
