/**
 * decamp dumper generated SDK
 * Package: /Script/PBIK
 */
#pragma once
#include "Basic.h"

// /Script/PBIK.PBIKBoneSetting
// Kind: ScriptStruct; super: none
struct FPBIKBoneSetting
{
public:
    std::uint8_t bone[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float RotationStiffness; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PositionStiffness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t X; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    float MinX; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxX; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Y; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    float MinY; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxY; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Z; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0025
    float MinZ; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MaxZ; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUsePreferredAngles; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0031
    std::uint8_t PreferredAngles[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPBIKBoneSetting, bone) == 0, "Offset mismatch for FPBIKBoneSetting::bone");
static_assert(offsetof(FPBIKBoneSetting, RotationStiffness) == 4, "Offset mismatch for FPBIKBoneSetting::RotationStiffness");
static_assert(offsetof(FPBIKBoneSetting, PositionStiffness) == 8, "Offset mismatch for FPBIKBoneSetting::PositionStiffness");
static_assert(offsetof(FPBIKBoneSetting, X) == 12, "Offset mismatch for FPBIKBoneSetting::X");
static_assert(offsetof(FPBIKBoneSetting, MinX) == 16, "Offset mismatch for FPBIKBoneSetting::MinX");
static_assert(offsetof(FPBIKBoneSetting, MaxX) == 20, "Offset mismatch for FPBIKBoneSetting::MaxX");
static_assert(offsetof(FPBIKBoneSetting, Y) == 24, "Offset mismatch for FPBIKBoneSetting::Y");
static_assert(offsetof(FPBIKBoneSetting, MinY) == 28, "Offset mismatch for FPBIKBoneSetting::MinY");
static_assert(offsetof(FPBIKBoneSetting, MaxY) == 32, "Offset mismatch for FPBIKBoneSetting::MaxY");
static_assert(offsetof(FPBIKBoneSetting, Z) == 36, "Offset mismatch for FPBIKBoneSetting::Z");
static_assert(offsetof(FPBIKBoneSetting, MinZ) == 40, "Offset mismatch for FPBIKBoneSetting::MinZ");
static_assert(offsetof(FPBIKBoneSetting, MaxZ) == 44, "Offset mismatch for FPBIKBoneSetting::MaxZ");
static_assert(offsetof(FPBIKBoneSetting, bUsePreferredAngles) == 48, "Offset mismatch for FPBIKBoneSetting::bUsePreferredAngles");
static_assert(offsetof(FPBIKBoneSetting, PreferredAngles) == 56, "Offset mismatch for FPBIKBoneSetting::PreferredAngles");

// /Script/PBIK.PBIKDebug
// Kind: ScriptStruct; super: none
struct FPBIKDebug
{
public:
    float DrawScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDrawDebug; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPBIKDebug, DrawScale) == 0, "Offset mismatch for FPBIKDebug::DrawScale");
static_assert(offsetof(FPBIKDebug, bDrawDebug) == 4, "Offset mismatch for FPBIKDebug::bDrawDebug");

// /Script/PBIK.PBIKEffector
// Kind: ScriptStruct; super: none
struct FPBIKEffector
{
public:
    FName bone; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    float PositionAlpha; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float RotationAlpha; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float StrengthAlpha; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::int32_t ChainDepth; // 0x007C (Size: 0x4, Type: IntProperty)
    float PullChainAlpha; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float PinRotation; // 0x0084 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPBIKEffector, bone) == 0, "Offset mismatch for FPBIKEffector::bone");
static_assert(offsetof(FPBIKEffector, Transform) == 16, "Offset mismatch for FPBIKEffector::Transform");
static_assert(offsetof(FPBIKEffector, PositionAlpha) == 112, "Offset mismatch for FPBIKEffector::PositionAlpha");
static_assert(offsetof(FPBIKEffector, RotationAlpha) == 116, "Offset mismatch for FPBIKEffector::RotationAlpha");
static_assert(offsetof(FPBIKEffector, StrengthAlpha) == 120, "Offset mismatch for FPBIKEffector::StrengthAlpha");
static_assert(offsetof(FPBIKEffector, ChainDepth) == 124, "Offset mismatch for FPBIKEffector::ChainDepth");
static_assert(offsetof(FPBIKEffector, PullChainAlpha) == 128, "Offset mismatch for FPBIKEffector::PullChainAlpha");
static_assert(offsetof(FPBIKEffector, PinRotation) == 132, "Offset mismatch for FPBIKEffector::PinRotation");

// /Script/PBIK.PBIKSolver
// Kind: ScriptStruct; super: none
struct FPBIKSolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PBIK.PBIKSolverSettings
// Kind: ScriptStruct; super: none
struct FPBIKSolverSettings
{
public:
    std::int32_t Iterations; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SubIterations; // 0x0004 (Size: 0x4, Type: IntProperty)
    float MassMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowStretch; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t RootBehavior; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000E
    std::uint8_t PrePullRootSettings[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    float GlobalPullChainAlpha; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MaxAngle; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float OverRelaxation; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStartSolveFromInputPose; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPBIKSolverSettings, Iterations) == 0, "Offset mismatch for FPBIKSolverSettings::Iterations");
static_assert(offsetof(FPBIKSolverSettings, SubIterations) == 4, "Offset mismatch for FPBIKSolverSettings::SubIterations");
static_assert(offsetof(FPBIKSolverSettings, MassMultiplier) == 8, "Offset mismatch for FPBIKSolverSettings::MassMultiplier");
static_assert(offsetof(FPBIKSolverSettings, bAllowStretch) == 12, "Offset mismatch for FPBIKSolverSettings::bAllowStretch");
static_assert(offsetof(FPBIKSolverSettings, RootBehavior) == 13, "Offset mismatch for FPBIKSolverSettings::RootBehavior");
static_assert(offsetof(FPBIKSolverSettings, PrePullRootSettings) == 16, "Offset mismatch for FPBIKSolverSettings::PrePullRootSettings");
static_assert(offsetof(FPBIKSolverSettings, GlobalPullChainAlpha) == 48, "Offset mismatch for FPBIKSolverSettings::GlobalPullChainAlpha");
static_assert(offsetof(FPBIKSolverSettings, MaxAngle) == 52, "Offset mismatch for FPBIKSolverSettings::MaxAngle");
static_assert(offsetof(FPBIKSolverSettings, OverRelaxation) == 56, "Offset mismatch for FPBIKSolverSettings::OverRelaxation");
static_assert(offsetof(FPBIKSolverSettings, bStartSolveFromInputPose) == 60, "Offset mismatch for FPBIKSolverSettings::bStartSolveFromInputPose");

// /Script/PBIK.PBIKWorkData
// Kind: ScriptStruct; super: none
struct FPBIKWorkData
{
public:
    std::uint8_t bNeedsInit; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint32_t HashInitializedWith; // 0x0004 (Size: 0x4, Type: UInt32Property)
    TArray<void*> BoneSettingToSolverBoneIndex; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SolverBoneToElementIndex; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Solver[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPBIKWorkData, bNeedsInit) == 0, "Offset mismatch for FPBIKWorkData::bNeedsInit");
static_assert(offsetof(FPBIKWorkData, HashInitializedWith) == 4, "Offset mismatch for FPBIKWorkData::HashInitializedWith");
static_assert(offsetof(FPBIKWorkData, BoneSettingToSolverBoneIndex) == 8, "Offset mismatch for FPBIKWorkData::BoneSettingToSolverBoneIndex");
static_assert(offsetof(FPBIKWorkData, SolverBoneToElementIndex) == 24, "Offset mismatch for FPBIKWorkData::SolverBoneToElementIndex");
static_assert(offsetof(FPBIKWorkData, Solver) == 40, "Offset mismatch for FPBIKWorkData::Solver");

// /Script/PBIK.RigUnit_PBIK
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_PBIK
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName Root; // 0x0010 (Size: 0x8, Type: NameProperty)
    TArray<void*> Effectors; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EffectorSolverIndices; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoneSettings; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludedBones; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Settings[0x40]; // 0x0058 (Size: 0x40, Type: StructProperty)
    std::uint8_t Debug[0x8]; // 0x0098 (Size: 0x8, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PBIK, Root) == 16, "Offset mismatch for FRigUnit_PBIK::Root");
static_assert(offsetof(FRigUnit_PBIK, Effectors) == 24, "Offset mismatch for FRigUnit_PBIK::Effectors");
static_assert(offsetof(FRigUnit_PBIK, EffectorSolverIndices) == 40, "Offset mismatch for FRigUnit_PBIK::EffectorSolverIndices");
static_assert(offsetof(FRigUnit_PBIK, BoneSettings) == 56, "Offset mismatch for FRigUnit_PBIK::BoneSettings");
static_assert(offsetof(FRigUnit_PBIK, ExcludedBones) == 72, "Offset mismatch for FRigUnit_PBIK::ExcludedBones");
static_assert(offsetof(FRigUnit_PBIK, Settings) == 88, "Offset mismatch for FRigUnit_PBIK::Settings");
static_assert(offsetof(FRigUnit_PBIK, Debug) == 152, "Offset mismatch for FRigUnit_PBIK::Debug");
static_assert(offsetof(FRigUnit_PBIK, WorkData) == 160, "Offset mismatch for FRigUnit_PBIK::WorkData");

// /Script/PBIK.RootPrePullSettings
// Kind: ScriptStruct; super: none
struct FRootPrePullSettings
{
public:
    float RotationAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RotationAlphaX; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float RotationAlphaY; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float RotationAlphaZ; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PositionAlpha; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float PositionAlphaX; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float PositionAlphaY; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float PositionAlphaZ; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRootPrePullSettings, RotationAlpha) == 0, "Offset mismatch for FRootPrePullSettings::RotationAlpha");
static_assert(offsetof(FRootPrePullSettings, RotationAlphaX) == 4, "Offset mismatch for FRootPrePullSettings::RotationAlphaX");
static_assert(offsetof(FRootPrePullSettings, RotationAlphaY) == 8, "Offset mismatch for FRootPrePullSettings::RotationAlphaY");
static_assert(offsetof(FRootPrePullSettings, RotationAlphaZ) == 12, "Offset mismatch for FRootPrePullSettings::RotationAlphaZ");
static_assert(offsetof(FRootPrePullSettings, PositionAlpha) == 16, "Offset mismatch for FRootPrePullSettings::PositionAlpha");
static_assert(offsetof(FRootPrePullSettings, PositionAlphaX) == 20, "Offset mismatch for FRootPrePullSettings::PositionAlphaX");
static_assert(offsetof(FRootPrePullSettings, PositionAlphaY) == 24, "Offset mismatch for FRootPrePullSettings::PositionAlphaY");
static_assert(offsetof(FRootPrePullSettings, PositionAlphaZ) == 28, "Offset mismatch for FRootPrePullSettings::PositionAlphaZ");
