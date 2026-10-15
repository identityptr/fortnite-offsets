/**
 * decamp dumper generated SDK
 * Package: /Script/FullBodyIK
 */
#pragma once
#include "Basic.h"

// /Script/FullBodyIK.FBIKBoneLimit
// Kind: ScriptStruct; super: none
struct FFBIKBoneLimit
{
public:
    std::uint8_t LimitType_X; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LimitType_Y; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LimitType_Z; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t Limit[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFBIKBoneLimit, LimitType_X) == 0, "Offset mismatch for FFBIKBoneLimit::LimitType_X");
static_assert(offsetof(FFBIKBoneLimit, LimitType_Y) == 1, "Offset mismatch for FFBIKBoneLimit::LimitType_Y");
static_assert(offsetof(FFBIKBoneLimit, LimitType_Z) == 2, "Offset mismatch for FFBIKBoneLimit::LimitType_Z");
static_assert(offsetof(FFBIKBoneLimit, Limit) == 8, "Offset mismatch for FFBIKBoneLimit::Limit");

// /Script/FullBodyIK.FBIKConstraintOption
// Kind: ScriptStruct; super: none
struct FFBIKConstraintOption
{
public:
    std::uint8_t Item[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseStiffness; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    std::uint8_t LinearStiffness[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularStiffness[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseAngularLimit; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    std::uint8_t AngularLimit[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUsePoleVector; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PoleVectorOption; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x006A
    std::uint8_t PoleVector[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t OffsetRotation[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFBIKConstraintOption, Item) == 0, "Offset mismatch for FFBIKConstraintOption::Item");
static_assert(offsetof(FFBIKConstraintOption, bEnabled) == 8, "Offset mismatch for FFBIKConstraintOption::bEnabled");
static_assert(offsetof(FFBIKConstraintOption, bUseStiffness) == 9, "Offset mismatch for FFBIKConstraintOption::bUseStiffness");
static_assert(offsetof(FFBIKConstraintOption, LinearStiffness) == 16, "Offset mismatch for FFBIKConstraintOption::LinearStiffness");
static_assert(offsetof(FFBIKConstraintOption, AngularStiffness) == 40, "Offset mismatch for FFBIKConstraintOption::AngularStiffness");
static_assert(offsetof(FFBIKConstraintOption, bUseAngularLimit) == 64, "Offset mismatch for FFBIKConstraintOption::bUseAngularLimit");
static_assert(offsetof(FFBIKConstraintOption, AngularLimit) == 72, "Offset mismatch for FFBIKConstraintOption::AngularLimit");
static_assert(offsetof(FFBIKConstraintOption, bUsePoleVector) == 104, "Offset mismatch for FFBIKConstraintOption::bUsePoleVector");
static_assert(offsetof(FFBIKConstraintOption, PoleVectorOption) == 105, "Offset mismatch for FFBIKConstraintOption::PoleVectorOption");
static_assert(offsetof(FFBIKConstraintOption, PoleVector) == 112, "Offset mismatch for FFBIKConstraintOption::PoleVector");
static_assert(offsetof(FFBIKConstraintOption, OffsetRotation) == 136, "Offset mismatch for FFBIKConstraintOption::OffsetRotation");

// /Script/FullBodyIK.FBIKDebugOption
// Kind: ScriptStruct; super: none
struct FFBIKDebugOption
{
public:
    std::uint8_t bDrawDebugHierarchy; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bColorAngularMotionStrength; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bColorLinearMotionStrength; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawDebugAxes; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawDebugEffector; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawDebugConstraints; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0xA]; // 0x0006
    std::uint8_t DrawWorldOffset[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    float DrawSize; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFBIKDebugOption, bDrawDebugHierarchy) == 0, "Offset mismatch for FFBIKDebugOption::bDrawDebugHierarchy");
static_assert(offsetof(FFBIKDebugOption, bColorAngularMotionStrength) == 1, "Offset mismatch for FFBIKDebugOption::bColorAngularMotionStrength");
static_assert(offsetof(FFBIKDebugOption, bColorLinearMotionStrength) == 2, "Offset mismatch for FFBIKDebugOption::bColorLinearMotionStrength");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugAxes) == 3, "Offset mismatch for FFBIKDebugOption::bDrawDebugAxes");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugEffector) == 4, "Offset mismatch for FFBIKDebugOption::bDrawDebugEffector");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugConstraints) == 5, "Offset mismatch for FFBIKDebugOption::bDrawDebugConstraints");
static_assert(offsetof(FFBIKDebugOption, DrawWorldOffset) == 16, "Offset mismatch for FFBIKDebugOption::DrawWorldOffset");
static_assert(offsetof(FFBIKDebugOption, DrawSize) == 112, "Offset mismatch for FFBIKDebugOption::DrawSize");

// /Script/FullBodyIK.FBIKEndEffector
// Kind: ScriptStruct; super: none
struct FFBIKEndEffector
{
public:
    std::uint8_t Item[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float PositionAlpha; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t PositionDepth; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0028
    std::uint8_t Rotation[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    float RotationAlpha; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::int32_t RotationDepth; // 0x0054 (Size: 0x4, Type: IntProperty)
    float Pull; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFBIKEndEffector, Item) == 0, "Offset mismatch for FFBIKEndEffector::Item");
static_assert(offsetof(FFBIKEndEffector, Position) == 8, "Offset mismatch for FFBIKEndEffector::Position");
static_assert(offsetof(FFBIKEndEffector, PositionAlpha) == 32, "Offset mismatch for FFBIKEndEffector::PositionAlpha");
static_assert(offsetof(FFBIKEndEffector, PositionDepth) == 36, "Offset mismatch for FFBIKEndEffector::PositionDepth");
static_assert(offsetof(FFBIKEndEffector, Rotation) == 48, "Offset mismatch for FFBIKEndEffector::Rotation");
static_assert(offsetof(FFBIKEndEffector, RotationAlpha) == 80, "Offset mismatch for FFBIKEndEffector::RotationAlpha");
static_assert(offsetof(FFBIKEndEffector, RotationDepth) == 84, "Offset mismatch for FFBIKEndEffector::RotationDepth");
static_assert(offsetof(FFBIKEndEffector, Pull) == 88, "Offset mismatch for FFBIKEndEffector::Pull");

// /Script/FullBodyIK.MotionProcessInput
// Kind: ScriptStruct; super: none
struct FMotionProcessInput
{
public:
    std::uint8_t bForceEffectorRotationTarget; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyApplyWhenReachedToTarget; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMotionProcessInput, bForceEffectorRotationTarget) == 0, "Offset mismatch for FMotionProcessInput::bForceEffectorRotationTarget");
static_assert(offsetof(FMotionProcessInput, bOnlyApplyWhenReachedToTarget) == 1, "Offset mismatch for FMotionProcessInput::bOnlyApplyWhenReachedToTarget");

// /Script/FullBodyIK.RigUnit_FullbodyIK
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_FullbodyIK
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Root[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    TArray<void*> Effectors; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Constraints; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SolverProperty[0x24]; // 0x0038 (Size: 0x24, Type: StructProperty)
    std::uint8_t MotionProperty[0x2]; // 0x005C (Size: 0x2, Type: StructProperty)
    std::uint8_t bPropagateToChildren; // 0x005E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x005F
    std::uint8_t DebugOption[0x80]; // 0x0060 (Size: 0x80, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_FullbodyIK, Root) == 16, "Offset mismatch for FRigUnit_FullbodyIK::Root");
static_assert(offsetof(FRigUnit_FullbodyIK, Effectors) == 24, "Offset mismatch for FRigUnit_FullbodyIK::Effectors");
static_assert(offsetof(FRigUnit_FullbodyIK, Constraints) == 40, "Offset mismatch for FRigUnit_FullbodyIK::Constraints");
static_assert(offsetof(FRigUnit_FullbodyIK, SolverProperty) == 56, "Offset mismatch for FRigUnit_FullbodyIK::SolverProperty");
static_assert(offsetof(FRigUnit_FullbodyIK, MotionProperty) == 92, "Offset mismatch for FRigUnit_FullbodyIK::MotionProperty");
static_assert(offsetof(FRigUnit_FullbodyIK, bPropagateToChildren) == 94, "Offset mismatch for FRigUnit_FullbodyIK::bPropagateToChildren");
static_assert(offsetof(FRigUnit_FullbodyIK, DebugOption) == 96, "Offset mismatch for FRigUnit_FullbodyIK::DebugOption");
static_assert(offsetof(FRigUnit_FullbodyIK, WorkData) == 224, "Offset mismatch for FRigUnit_FullbodyIK::WorkData");

// /Script/FullBodyIK.RigUnit_FullbodyIK_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_FullbodyIK_WorkData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FullBodyIK.SolverInput
// Kind: ScriptStruct; super: none
struct FSolverInput
{
public:
    float LinearMotionStrength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinLinearMotionStrength; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AngularMotionStrength; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinAngularMotionStrength; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DefaultTargetClamp; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Precision; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxIterations; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseJacobianTranspose; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSolverInput, LinearMotionStrength) == 0, "Offset mismatch for FSolverInput::LinearMotionStrength");
static_assert(offsetof(FSolverInput, MinLinearMotionStrength) == 4, "Offset mismatch for FSolverInput::MinLinearMotionStrength");
static_assert(offsetof(FSolverInput, AngularMotionStrength) == 8, "Offset mismatch for FSolverInput::AngularMotionStrength");
static_assert(offsetof(FSolverInput, MinAngularMotionStrength) == 12, "Offset mismatch for FSolverInput::MinAngularMotionStrength");
static_assert(offsetof(FSolverInput, DefaultTargetClamp) == 16, "Offset mismatch for FSolverInput::DefaultTargetClamp");
static_assert(offsetof(FSolverInput, Precision) == 20, "Offset mismatch for FSolverInput::Precision");
static_assert(offsetof(FSolverInput, Damping) == 24, "Offset mismatch for FSolverInput::Damping");
static_assert(offsetof(FSolverInput, MaxIterations) == 28, "Offset mismatch for FSolverInput::MaxIterations");
static_assert(offsetof(FSolverInput, bUseJacobianTranspose) == 32, "Offset mismatch for FSolverInput::bUseJacobianTranspose");
