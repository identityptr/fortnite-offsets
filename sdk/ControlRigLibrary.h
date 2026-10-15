/**
 * decamp dumper generated SDK
 * Package: /Script/ControlRigLibrary
 */
#pragma once
#include "Basic.h"

// /Script/ControlRigLibrary.RigUnit_JunoFitChainToSplineCurveItemArray
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBaseMutable
struct FRigUnit_JunoFitChainToSplineCurveItemArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Spline[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float MaximumStretch; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float MinimumStretch; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Minimum; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float Maximum; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::int32_t SamplingPrecision; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t PrimaryAxis[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleVectorPosition[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    TArray<void*> Rotations; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RotationEaseType; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00A9
    float Weight; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xF]; // 0x00B1
    std::uint8_t DebugSettings[0x90]; // 0x00C0 (Size: 0x90, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, Items) == 16, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::Items");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, Spline) == 32, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::Spline");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, MaximumStretch) == 56, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::MaximumStretch");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, MinimumStretch) == 60, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::MinimumStretch");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, Minimum) == 64, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::Minimum");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, Maximum) == 68, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::Maximum");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, SamplingPrecision) == 72, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::SamplingPrecision");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, PrimaryAxis) == 80, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::PrimaryAxis");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, SecondaryAxis) == 104, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::SecondaryAxis");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, PoleVectorPosition) == 128, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::PoleVectorPosition");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, Rotations) == 152, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::Rotations");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, RotationEaseType) == 168, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::RotationEaseType");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, Weight) == 172, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::Weight");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, bPropagateToChildren) == 176, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::bPropagateToChildren");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, DebugSettings) == 192, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::DebugSettings");
static_assert(offsetof(FRigUnit_JunoFitChainToSplineCurveItemArray, WorkData) == 336, "Offset mismatch for FRigUnit_JunoFitChainToSplineCurveItemArray::WorkData");

// /Script/ControlRigLibrary.RigUnit_JunoLocalChainDynamics
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_JunoLocalChainDynamics
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Bones; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    float Strength; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Force[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    float BlendStart; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float BlendEnd; // 0x0074 (Size: 0x4, Type: FloatProperty)
    TArray<void*> SimulatedResults; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpringStates; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_JunoLocalChainDynamics, Bones) == 16, "Offset mismatch for FRigUnit_JunoLocalChainDynamics::Bones");
static_assert(offsetof(FRigUnit_JunoLocalChainDynamics, PrimaryAxis) == 32, "Offset mismatch for FRigUnit_JunoLocalChainDynamics::PrimaryAxis");
static_assert(offsetof(FRigUnit_JunoLocalChainDynamics, SecondaryAxis) == 56, "Offset mismatch for FRigUnit_JunoLocalChainDynamics::SecondaryAxis");
static_assert(offsetof(FRigUnit_JunoLocalChainDynamics, Strength) == 80, "Offset mismatch for FRigUnit_JunoLocalChainDynamics::Strength");
static_assert(offsetof(FRigUnit_JunoLocalChainDynamics, Damping) == 84, "Offset mismatch for FRigUnit_JunoLocalChainDynamics::Damping");
static_assert(offsetof(FRigUnit_JunoLocalChainDynamics, Force) == 88, "Offset mismatch for FRigUnit_JunoLocalChainDynamics::Force");
static_assert(offsetof(FRigUnit_JunoLocalChainDynamics, BlendStart) == 112, "Offset mismatch for FRigUnit_JunoLocalChainDynamics::BlendStart");
static_assert(offsetof(FRigUnit_JunoLocalChainDynamics, BlendEnd) == 116, "Offset mismatch for FRigUnit_JunoLocalChainDynamics::BlendEnd");
static_assert(offsetof(FRigUnit_JunoLocalChainDynamics, SimulatedResults) == 120, "Offset mismatch for FRigUnit_JunoLocalChainDynamics::SimulatedResults");
static_assert(offsetof(FRigUnit_JunoLocalChainDynamics, SpringStates) == 136, "Offset mismatch for FRigUnit_JunoLocalChainDynamics::SpringStates");

// /Script/ControlRigLibrary.RigUnit_JunoRuntine_RootAlignment
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_JunoRuntine_RootAlignment
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t CachedItem[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitLocation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float SideRotationFactor; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float CrouchingAmount; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInitialized; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_JunoRuntine_RootAlignment, Item) == 16, "Offset mismatch for FRigUnit_JunoRuntine_RootAlignment::Item");
static_assert(offsetof(FRigUnit_JunoRuntine_RootAlignment, CachedItem) == 24, "Offset mismatch for FRigUnit_JunoRuntine_RootAlignment::CachedItem");
static_assert(offsetof(FRigUnit_JunoRuntine_RootAlignment, HitLocation) == 48, "Offset mismatch for FRigUnit_JunoRuntine_RootAlignment::HitLocation");
static_assert(offsetof(FRigUnit_JunoRuntine_RootAlignment, HitNormal) == 72, "Offset mismatch for FRigUnit_JunoRuntine_RootAlignment::HitNormal");
static_assert(offsetof(FRigUnit_JunoRuntine_RootAlignment, SideRotationFactor) == 96, "Offset mismatch for FRigUnit_JunoRuntine_RootAlignment::SideRotationFactor");
static_assert(offsetof(FRigUnit_JunoRuntine_RootAlignment, CrouchingAmount) == 100, "Offset mismatch for FRigUnit_JunoRuntine_RootAlignment::CrouchingAmount");
static_assert(offsetof(FRigUnit_JunoRuntine_RootAlignment, bIsInitialized) == 104, "Offset mismatch for FRigUnit_JunoRuntine_RootAlignment::bIsInitialized");

// /Script/ControlRigLibrary.RigUnit_JunoRuntine_SolveIKTwoBones
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_JunoRuntine_SolveIKTwoBones
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BoneA[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t BoneB[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t BoneC[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t CachedBoneA[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedBoneB[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedBoneC[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t Effector[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    float InitialLength; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PullEffector; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D5
    std::uint8_t PrimaryAxis[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsInitialized; // 0x0108 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, BoneA) == 16, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::BoneA");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, BoneB) == 24, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::BoneB");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, BoneC) == 32, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::BoneC");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, CachedBoneA) == 40, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::CachedBoneA");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, CachedBoneB) == 64, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::CachedBoneB");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, CachedBoneC) == 88, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::CachedBoneC");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, Effector) == 112, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::Effector");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, InitialLength) == 208, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::InitialLength");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, PullEffector) == 212, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::PullEffector");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, PrimaryAxis) == 216, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::PrimaryAxis");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, SecondaryAxis) == 240, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::SecondaryAxis");
static_assert(offsetof(FRigUnit_JunoRuntine_SolveIKTwoBones, bIsInitialized) == 264, "Offset mismatch for FRigUnit_JunoRuntine_SolveIKTwoBones::bIsInitialized");

// /Script/ControlRigLibrary.RigUnit_ProjectItemOnPlane
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_ProjectItemOnPlane
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t CachedItem[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Original[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t PlanePoint[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlaneNormal[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    float ProjectAlongNormal; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SetItem; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    std::uint8_t Result[0x60]; // 0x00D0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bIsInitialized; // 0x0130 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_ProjectItemOnPlane, Item) == 16, "Offset mismatch for FRigUnit_ProjectItemOnPlane::Item");
static_assert(offsetof(FRigUnit_ProjectItemOnPlane, CachedItem) == 24, "Offset mismatch for FRigUnit_ProjectItemOnPlane::CachedItem");
static_assert(offsetof(FRigUnit_ProjectItemOnPlane, Original) == 48, "Offset mismatch for FRigUnit_ProjectItemOnPlane::Original");
static_assert(offsetof(FRigUnit_ProjectItemOnPlane, PlanePoint) == 144, "Offset mismatch for FRigUnit_ProjectItemOnPlane::PlanePoint");
static_assert(offsetof(FRigUnit_ProjectItemOnPlane, PlaneNormal) == 168, "Offset mismatch for FRigUnit_ProjectItemOnPlane::PlaneNormal");
static_assert(offsetof(FRigUnit_ProjectItemOnPlane, ProjectAlongNormal) == 192, "Offset mismatch for FRigUnit_ProjectItemOnPlane::ProjectAlongNormal");
static_assert(offsetof(FRigUnit_ProjectItemOnPlane, Weight) == 196, "Offset mismatch for FRigUnit_ProjectItemOnPlane::Weight");
static_assert(offsetof(FRigUnit_ProjectItemOnPlane, SetItem) == 200, "Offset mismatch for FRigUnit_ProjectItemOnPlane::SetItem");
static_assert(offsetof(FRigUnit_ProjectItemOnPlane, Result) == 208, "Offset mismatch for FRigUnit_ProjectItemOnPlane::Result");
static_assert(offsetof(FRigUnit_ProjectItemOnPlane, bIsInitialized) == 304, "Offset mismatch for FRigUnit_ProjectItemOnPlane::bIsInitialized");
