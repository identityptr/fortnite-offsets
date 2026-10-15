/**
 * decamp dumper generated SDK
 * Package: /Script/SideloadedAnimationRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SideloadedAnimationRuntime.AnimSequenceSideloaded
// Kind: Class; super: AnimSequence
class UAnimSequenceSideloaded
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* BoneCompressionSettings; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* CurveCompressionSettings; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x70]; // 0x00C0
    void* VariableFrameStrippingSettings; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AdditiveAnimType; // 0x0138 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RefPoseType; // 0x0139 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x2]; // 0x013A
    std::int32_t RefFrameIndex; // 0x013C (Size: 0x4, Type: IntProperty)
    void* RefPoseSeq; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    FName RetargetSource; // 0x0148 (Size: 0x8, Type: NameProperty)
    TArray<void*> RetargetSourceAssetReferencePose; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Interpolation; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableRootMotion; // 0x0161 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RootMotionRootLock; // 0x0162 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceRootLock; // 0x0163 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseNormalizedRootMotionScale; // 0x0164 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRootMotionSettingsCopiedFromMontage; // 0x0165 (Size: 0x1, Type: BoolProperty)
    std::uint8_t StripAnimDataOnDedicatedServer; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0167
    TArray<void*> AuthoredSyncMarkers; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0178
    std::uint8_t PlatformTargetFrameRate[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> AttributeCurves; // 0x01A0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UAnimSequenceSideloaded, BoneCompressionSettings) == 176, "Offset mismatch for UAnimSequenceSideloaded::BoneCompressionSettings");
static_assert(offsetof(UAnimSequenceSideloaded, CurveCompressionSettings) == 184, "Offset mismatch for UAnimSequenceSideloaded::CurveCompressionSettings");
static_assert(offsetof(UAnimSequenceSideloaded, VariableFrameStrippingSettings) == 304, "Offset mismatch for UAnimSequenceSideloaded::VariableFrameStrippingSettings");
static_assert(offsetof(UAnimSequenceSideloaded, AdditiveAnimType) == 312, "Offset mismatch for UAnimSequenceSideloaded::AdditiveAnimType");
static_assert(offsetof(UAnimSequenceSideloaded, RefPoseType) == 313, "Offset mismatch for UAnimSequenceSideloaded::RefPoseType");
static_assert(offsetof(UAnimSequenceSideloaded, RefFrameIndex) == 316, "Offset mismatch for UAnimSequenceSideloaded::RefFrameIndex");
static_assert(offsetof(UAnimSequenceSideloaded, RefPoseSeq) == 320, "Offset mismatch for UAnimSequenceSideloaded::RefPoseSeq");
static_assert(offsetof(UAnimSequenceSideloaded, RetargetSource) == 328, "Offset mismatch for UAnimSequenceSideloaded::RetargetSource");
static_assert(offsetof(UAnimSequenceSideloaded, RetargetSourceAssetReferencePose) == 336, "Offset mismatch for UAnimSequenceSideloaded::RetargetSourceAssetReferencePose");
static_assert(offsetof(UAnimSequenceSideloaded, Interpolation) == 352, "Offset mismatch for UAnimSequenceSideloaded::Interpolation");
static_assert(offsetof(UAnimSequenceSideloaded, bEnableRootMotion) == 353, "Offset mismatch for UAnimSequenceSideloaded::bEnableRootMotion");
static_assert(offsetof(UAnimSequenceSideloaded, RootMotionRootLock) == 354, "Offset mismatch for UAnimSequenceSideloaded::RootMotionRootLock");
static_assert(offsetof(UAnimSequenceSideloaded, bForceRootLock) == 355, "Offset mismatch for UAnimSequenceSideloaded::bForceRootLock");
static_assert(offsetof(UAnimSequenceSideloaded, bUseNormalizedRootMotionScale) == 356, "Offset mismatch for UAnimSequenceSideloaded::bUseNormalizedRootMotionScale");
static_assert(offsetof(UAnimSequenceSideloaded, bRootMotionSettingsCopiedFromMontage) == 357, "Offset mismatch for UAnimSequenceSideloaded::bRootMotionSettingsCopiedFromMontage");
static_assert(offsetof(UAnimSequenceSideloaded, StripAnimDataOnDedicatedServer) == 358, "Offset mismatch for UAnimSequenceSideloaded::StripAnimDataOnDedicatedServer");
static_assert(offsetof(UAnimSequenceSideloaded, AuthoredSyncMarkers) == 360, "Offset mismatch for UAnimSequenceSideloaded::AuthoredSyncMarkers");
static_assert(offsetof(UAnimSequenceSideloaded, PlatformTargetFrameRate) == 392, "Offset mismatch for UAnimSequenceSideloaded::PlatformTargetFrameRate");
static_assert(offsetof(UAnimSequenceSideloaded, AttributeCurves) == 416, "Offset mismatch for UAnimSequenceSideloaded::AttributeCurves");
