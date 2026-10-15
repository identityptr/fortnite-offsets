/**
 * decamp dumper generated SDK
 * Package: /Script/AnimationLayeringInternalRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AnimationLayeringInternalRuntime.AnimNode_CopyMotion
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_CopyMotion
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
    std::uint8_t DynamicSourceBone[0x4]; // 0x0128 (Size: 0x4, Type: NameProperty)
    std::uint8_t DynamicCopySpace[0x4]; // 0x012C (Size: 0x4, Type: NameProperty)
    FName DynamicApplySpace; // 0x0130 (Size: 0x8, Type: NameProperty)
    std::uint8_t TranslationOffset[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationPivot[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurvePrefix[0x4]; // 0x0180 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetCurveName[0x4]; // 0x0184 (Size: 0x4, Type: NameProperty)
    float TargetCurveScale; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TargetCurveComponent; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t TargetCurveRotationAxis; // 0x018D (Size: 0x1, Type: ByteProperty)
    std::uint8_t bUseLegacyBehavior; // 0x018E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x018F
    std::uint8_t ApplySpaceOffset[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t TranslationX_CurveName[0x4]; // 0x01A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t TranslationY_CurveName[0x4]; // 0x01AC (Size: 0x4, Type: NameProperty)
    std::uint8_t TranslationZ_CurveName[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t RotationRoll_CurveName[0x4]; // 0x01B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t RotationPitch_CurveName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t RotationYaw_CurveName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    std::uint8_t TranslationScale[0x18]; // 0x01C0 (Size: 0x18, Type: StructProperty)
    float TranslationSmoothingTime; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x01DC
    void* TranslationRemapCurve; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    float RotationScale; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    float RotationSmoothingTime; // 0x01EC (Size: 0x4, Type: FloatProperty)
    void* RotationRemapCurve; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDeltaSmoothing; // 0x01F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_CopyMotion, BasePose) == 200, "Offset mismatch for FAnimNode_CopyMotion::BasePose");
static_assert(offsetof(FAnimNode_CopyMotion, BasePoseReference) == 216, "Offset mismatch for FAnimNode_CopyMotion::BasePoseReference");
static_assert(offsetof(FAnimNode_CopyMotion, bUseBasePose) == 232, "Offset mismatch for FAnimNode_CopyMotion::bUseBasePose");
static_assert(offsetof(FAnimNode_CopyMotion, PoseHistoryTag) == 236, "Offset mismatch for FAnimNode_CopyMotion::PoseHistoryTag");
static_assert(offsetof(FAnimNode_CopyMotion, Delay) == 240, "Offset mismatch for FAnimNode_CopyMotion::Delay");
static_assert(offsetof(FAnimNode_CopyMotion, SourceBone) == 244, "Offset mismatch for FAnimNode_CopyMotion::SourceBone");
static_assert(offsetof(FAnimNode_CopyMotion, BoneToModify) == 256, "Offset mismatch for FAnimNode_CopyMotion::BoneToModify");
static_assert(offsetof(FAnimNode_CopyMotion, CopySpace) == 268, "Offset mismatch for FAnimNode_CopyMotion::CopySpace");
static_assert(offsetof(FAnimNode_CopyMotion, bUseRootSpace) == 280, "Offset mismatch for FAnimNode_CopyMotion::bUseRootSpace");
static_assert(offsetof(FAnimNode_CopyMotion, ApplySpace) == 284, "Offset mismatch for FAnimNode_CopyMotion::ApplySpace");
static_assert(offsetof(FAnimNode_CopyMotion, DynamicSourceBone) == 296, "Offset mismatch for FAnimNode_CopyMotion::DynamicSourceBone");
static_assert(offsetof(FAnimNode_CopyMotion, DynamicCopySpace) == 300, "Offset mismatch for FAnimNode_CopyMotion::DynamicCopySpace");
static_assert(offsetof(FAnimNode_CopyMotion, DynamicApplySpace) == 304, "Offset mismatch for FAnimNode_CopyMotion::DynamicApplySpace");
static_assert(offsetof(FAnimNode_CopyMotion, TranslationOffset) == 312, "Offset mismatch for FAnimNode_CopyMotion::TranslationOffset");
static_assert(offsetof(FAnimNode_CopyMotion, RotationOffset) == 336, "Offset mismatch for FAnimNode_CopyMotion::RotationOffset");
static_assert(offsetof(FAnimNode_CopyMotion, RotationPivot) == 360, "Offset mismatch for FAnimNode_CopyMotion::RotationPivot");
static_assert(offsetof(FAnimNode_CopyMotion, CurvePrefix) == 384, "Offset mismatch for FAnimNode_CopyMotion::CurvePrefix");
static_assert(offsetof(FAnimNode_CopyMotion, TargetCurveName) == 388, "Offset mismatch for FAnimNode_CopyMotion::TargetCurveName");
static_assert(offsetof(FAnimNode_CopyMotion, TargetCurveScale) == 392, "Offset mismatch for FAnimNode_CopyMotion::TargetCurveScale");
static_assert(offsetof(FAnimNode_CopyMotion, TargetCurveComponent) == 396, "Offset mismatch for FAnimNode_CopyMotion::TargetCurveComponent");
static_assert(offsetof(FAnimNode_CopyMotion, TargetCurveRotationAxis) == 397, "Offset mismatch for FAnimNode_CopyMotion::TargetCurveRotationAxis");
static_assert(offsetof(FAnimNode_CopyMotion, bUseLegacyBehavior) == 398, "Offset mismatch for FAnimNode_CopyMotion::bUseLegacyBehavior");
static_assert(offsetof(FAnimNode_CopyMotion, ApplySpaceOffset) == 400, "Offset mismatch for FAnimNode_CopyMotion::ApplySpaceOffset");
static_assert(offsetof(FAnimNode_CopyMotion, TranslationX_CurveName) == 424, "Offset mismatch for FAnimNode_CopyMotion::TranslationX_CurveName");
static_assert(offsetof(FAnimNode_CopyMotion, TranslationY_CurveName) == 428, "Offset mismatch for FAnimNode_CopyMotion::TranslationY_CurveName");
static_assert(offsetof(FAnimNode_CopyMotion, TranslationZ_CurveName) == 432, "Offset mismatch for FAnimNode_CopyMotion::TranslationZ_CurveName");
static_assert(offsetof(FAnimNode_CopyMotion, RotationRoll_CurveName) == 436, "Offset mismatch for FAnimNode_CopyMotion::RotationRoll_CurveName");
static_assert(offsetof(FAnimNode_CopyMotion, RotationPitch_CurveName) == 440, "Offset mismatch for FAnimNode_CopyMotion::RotationPitch_CurveName");
static_assert(offsetof(FAnimNode_CopyMotion, RotationYaw_CurveName) == 444, "Offset mismatch for FAnimNode_CopyMotion::RotationYaw_CurveName");
static_assert(offsetof(FAnimNode_CopyMotion, TranslationScale) == 448, "Offset mismatch for FAnimNode_CopyMotion::TranslationScale");
static_assert(offsetof(FAnimNode_CopyMotion, TranslationSmoothingTime) == 472, "Offset mismatch for FAnimNode_CopyMotion::TranslationSmoothingTime");
static_assert(offsetof(FAnimNode_CopyMotion, TranslationRemapCurve) == 480, "Offset mismatch for FAnimNode_CopyMotion::TranslationRemapCurve");
static_assert(offsetof(FAnimNode_CopyMotion, RotationScale) == 488, "Offset mismatch for FAnimNode_CopyMotion::RotationScale");
static_assert(offsetof(FAnimNode_CopyMotion, RotationSmoothingTime) == 492, "Offset mismatch for FAnimNode_CopyMotion::RotationSmoothingTime");
static_assert(offsetof(FAnimNode_CopyMotion, RotationRemapCurve) == 496, "Offset mismatch for FAnimNode_CopyMotion::RotationRemapCurve");
static_assert(offsetof(FAnimNode_CopyMotion, bDeltaSmoothing) == 504, "Offset mismatch for FAnimNode_CopyMotion::bDeltaSmoothing");
