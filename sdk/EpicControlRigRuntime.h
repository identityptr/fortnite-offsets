/**
 * decamp dumper generated SDK
 * Package: /Script/EpicControlRigRuntime
 */
#pragma once
#include "Basic.h"

// /Script/EpicControlRigRuntime.RigUnit_TwoBoneIKOffPlane
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_TwoBoneIKOffPlane
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BoneA[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t BoneB[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t BoneC[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t BoneD[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Effector[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleVector[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::int32_t MaxIterations; // 0x0090 (Size: 0x4, Type: IntProperty)
    float Tolerance; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CachedBoneAIndex[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedBoneBIndex[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedBoneCIndex[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedBoneDIndex[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, BoneA) == 16, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::BoneA");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, BoneB) == 24, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::BoneB");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, BoneC) == 32, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::BoneC");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, BoneD) == 40, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::BoneD");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, Effector) == 48, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::Effector");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, PoleVector) == 72, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::PoleVector");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, PrimaryAxis) == 96, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::PrimaryAxis");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, SecondaryAxis) == 120, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::SecondaryAxis");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, MaxIterations) == 144, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::MaxIterations");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, Tolerance) == 148, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::Tolerance");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, CachedBoneAIndex) == 152, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::CachedBoneAIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, CachedBoneBIndex) == 176, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::CachedBoneBIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, CachedBoneCIndex) == 200, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::CachedBoneCIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKOffPlane, CachedBoneDIndex) == 224, "Offset mismatch for FRigUnit_TwoBoneIKOffPlane::CachedBoneDIndex");
