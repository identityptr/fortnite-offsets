/**
 * decamp dumper generated SDK
 * Package: /Script/PoseBuilder
 */
#pragma once
#include "Basic.h"

// /Script/PoseBuilder.PoseBuilderActiveEdit
// Kind: ScriptStruct; super: none
struct FPoseBuilderActiveEdit
{
public:
    std::uint8_t Mode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t SlotIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t EntryIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPoseBuilderActiveEdit, Mode) == 0, "Offset mismatch for FPoseBuilderActiveEdit::Mode");
static_assert(offsetof(FPoseBuilderActiveEdit, SlotIndex) == 4, "Offset mismatch for FPoseBuilderActiveEdit::SlotIndex");
static_assert(offsetof(FPoseBuilderActiveEdit, EntryIndex) == 8, "Offset mismatch for FPoseBuilderActiveEdit::EntryIndex");

// /Script/PoseBuilder.PoseBuilderAimMathDrivenConfig
// Kind: ScriptStruct; super: none
struct FPoseBuilderAimMathDrivenConfig
{
public:
    std::uint8_t Primary[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t Secondary[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    float Weight; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bMaintainOffset; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysOn; // 0x0095 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0096
    float RemapMin; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float RemapMax; // 0x009C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseBuilderAimMathDrivenConfig, Primary) == 0, "Offset mismatch for FPoseBuilderAimMathDrivenConfig::Primary");
static_assert(offsetof(FPoseBuilderAimMathDrivenConfig, Secondary) == 72, "Offset mismatch for FPoseBuilderAimMathDrivenConfig::Secondary");
static_assert(offsetof(FPoseBuilderAimMathDrivenConfig, Weight) == 144, "Offset mismatch for FPoseBuilderAimMathDrivenConfig::Weight");
static_assert(offsetof(FPoseBuilderAimMathDrivenConfig, bMaintainOffset) == 148, "Offset mismatch for FPoseBuilderAimMathDrivenConfig::bMaintainOffset");
static_assert(offsetof(FPoseBuilderAimMathDrivenConfig, bAlwaysOn) == 149, "Offset mismatch for FPoseBuilderAimMathDrivenConfig::bAlwaysOn");
static_assert(offsetof(FPoseBuilderAimMathDrivenConfig, RemapMin) == 152, "Offset mismatch for FPoseBuilderAimMathDrivenConfig::RemapMin");
static_assert(offsetof(FPoseBuilderAimMathDrivenConfig, RemapMax) == 156, "Offset mismatch for FPoseBuilderAimMathDrivenConfig::RemapMax");

// /Script/PoseBuilder.PoseBuilderAimMathTarget
// Kind: ScriptStruct; super: none
struct FPoseBuilderAimMathTarget
{
public:
    float Weight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Axis[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Target[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsLocationTarget; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t TargetSpace[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPoseBuilderAimMathTarget, Weight) == 0, "Offset mismatch for FPoseBuilderAimMathTarget::Weight");
static_assert(offsetof(FPoseBuilderAimMathTarget, Axis) == 8, "Offset mismatch for FPoseBuilderAimMathTarget::Axis");
static_assert(offsetof(FPoseBuilderAimMathTarget, Target) == 32, "Offset mismatch for FPoseBuilderAimMathTarget::Target");
static_assert(offsetof(FPoseBuilderAimMathTarget, bIsLocationTarget) == 56, "Offset mismatch for FPoseBuilderAimMathTarget::bIsLocationTarget");
static_assert(offsetof(FPoseBuilderAimMathTarget, TargetSpace) == 60, "Offset mismatch for FPoseBuilderAimMathTarget::TargetSpace");

// /Script/PoseBuilder.PoseBuilderAimOperation
// Kind: ScriptStruct; super: none
struct FPoseBuilderAimOperation
{
public:
    std::uint8_t AimBone[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetItem[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t AimAxisLocal[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float InputMin; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float InputMax; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInvert; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPoseBuilderAimOperation, AimBone) == 0, "Offset mismatch for FPoseBuilderAimOperation::AimBone");
static_assert(offsetof(FPoseBuilderAimOperation, TargetItem) == 8, "Offset mismatch for FPoseBuilderAimOperation::TargetItem");
static_assert(offsetof(FPoseBuilderAimOperation, AimAxisLocal) == 16, "Offset mismatch for FPoseBuilderAimOperation::AimAxisLocal");
static_assert(offsetof(FPoseBuilderAimOperation, InputMin) == 40, "Offset mismatch for FPoseBuilderAimOperation::InputMin");
static_assert(offsetof(FPoseBuilderAimOperation, InputMax) == 44, "Offset mismatch for FPoseBuilderAimOperation::InputMax");
static_assert(offsetof(FPoseBuilderAimOperation, bInvert) == 48, "Offset mismatch for FPoseBuilderAimOperation::bInvert");

// /Script/PoseBuilder.PoseBuilderAlphaInterpConfig
// Kind: ScriptStruct; super: none
struct FPoseBuilderAlphaInterpConfig
{
public:
    float SpeedIncreasing; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SpeedDecreasing; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendType; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPoseBuilderAlphaInterpConfig, SpeedIncreasing) == 0, "Offset mismatch for FPoseBuilderAlphaInterpConfig::SpeedIncreasing");
static_assert(offsetof(FPoseBuilderAlphaInterpConfig, SpeedDecreasing) == 4, "Offset mismatch for FPoseBuilderAlphaInterpConfig::SpeedDecreasing");
static_assert(offsetof(FPoseBuilderAlphaInterpConfig, BlendType) == 8, "Offset mismatch for FPoseBuilderAlphaInterpConfig::BlendType");

// /Script/PoseBuilder.PoseBuilderAxisProjectionOperation
// Kind: ScriptStruct; super: none
struct FPoseBuilderAxisProjectionOperation
{
public:
    std::uint8_t DriverBone[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetBone[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t AxisFrame[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Axis; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInvert; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x001A
    float RemapMin; // 0x001C (Size: 0x4, Type: FloatProperty)
    float RemapMax; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseBuilderAxisProjectionOperation, DriverBone) == 0, "Offset mismatch for FPoseBuilderAxisProjectionOperation::DriverBone");
static_assert(offsetof(FPoseBuilderAxisProjectionOperation, TargetBone) == 8, "Offset mismatch for FPoseBuilderAxisProjectionOperation::TargetBone");
static_assert(offsetof(FPoseBuilderAxisProjectionOperation, AxisFrame) == 16, "Offset mismatch for FPoseBuilderAxisProjectionOperation::AxisFrame");
static_assert(offsetof(FPoseBuilderAxisProjectionOperation, Axis) == 24, "Offset mismatch for FPoseBuilderAxisProjectionOperation::Axis");
static_assert(offsetof(FPoseBuilderAxisProjectionOperation, bInvert) == 25, "Offset mismatch for FPoseBuilderAxisProjectionOperation::bInvert");
static_assert(offsetof(FPoseBuilderAxisProjectionOperation, RemapMin) == 28, "Offset mismatch for FPoseBuilderAxisProjectionOperation::RemapMin");
static_assert(offsetof(FPoseBuilderAxisProjectionOperation, RemapMax) == 32, "Offset mismatch for FPoseBuilderAxisProjectionOperation::RemapMax");

// /Script/PoseBuilder.PoseBuilderCurveMathOp
// Kind: ScriptStruct; super: none
struct FPoseBuilderCurveMathOp
{
public:
    std::uint8_t Op; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float A; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float B; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float C; // 0x000C (Size: 0x4, Type: FloatProperty)
    float D; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampRemap; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPoseBuilderCurveMathOp, Op) == 0, "Offset mismatch for FPoseBuilderCurveMathOp::Op");
static_assert(offsetof(FPoseBuilderCurveMathOp, A) == 4, "Offset mismatch for FPoseBuilderCurveMathOp::A");
static_assert(offsetof(FPoseBuilderCurveMathOp, B) == 8, "Offset mismatch for FPoseBuilderCurveMathOp::B");
static_assert(offsetof(FPoseBuilderCurveMathOp, C) == 12, "Offset mismatch for FPoseBuilderCurveMathOp::C");
static_assert(offsetof(FPoseBuilderCurveMathOp, D) == 16, "Offset mismatch for FPoseBuilderCurveMathOp::D");
static_assert(offsetof(FPoseBuilderCurveMathOp, bClampRemap) == 20, "Offset mismatch for FPoseBuilderCurveMathOp::bClampRemap");

// /Script/PoseBuilder.PoseBuilderDeltaRefDriverConfig
// Kind: ScriptStruct; super: none
struct FPoseBuilderDeltaRefDriverConfig
{
public:
    std::uint8_t DeltaRefBase[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t ComponentType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float InputMin; // 0x000C (Size: 0x4, Type: FloatProperty)
    float InputMax; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float OutputMin; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float OutputMax; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t TwistAxis[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t EulerRotationOrder; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0039
    TArray<void*> PostRemapOps; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPoseBuilderDeltaRefDriverConfig, DeltaRefBase) == 0, "Offset mismatch for FPoseBuilderDeltaRefDriverConfig::DeltaRefBase");
static_assert(offsetof(FPoseBuilderDeltaRefDriverConfig, ComponentType) == 8, "Offset mismatch for FPoseBuilderDeltaRefDriverConfig::ComponentType");
static_assert(offsetof(FPoseBuilderDeltaRefDriverConfig, InputMin) == 12, "Offset mismatch for FPoseBuilderDeltaRefDriverConfig::InputMin");
static_assert(offsetof(FPoseBuilderDeltaRefDriverConfig, InputMax) == 16, "Offset mismatch for FPoseBuilderDeltaRefDriverConfig::InputMax");
static_assert(offsetof(FPoseBuilderDeltaRefDriverConfig, OutputMin) == 20, "Offset mismatch for FPoseBuilderDeltaRefDriverConfig::OutputMin");
static_assert(offsetof(FPoseBuilderDeltaRefDriverConfig, OutputMax) == 24, "Offset mismatch for FPoseBuilderDeltaRefDriverConfig::OutputMax");
static_assert(offsetof(FPoseBuilderDeltaRefDriverConfig, TwistAxis) == 32, "Offset mismatch for FPoseBuilderDeltaRefDriverConfig::TwistAxis");
static_assert(offsetof(FPoseBuilderDeltaRefDriverConfig, EulerRotationOrder) == 56, "Offset mismatch for FPoseBuilderDeltaRefDriverConfig::EulerRotationOrder");
static_assert(offsetof(FPoseBuilderDeltaRefDriverConfig, PostRemapOps) == 64, "Offset mismatch for FPoseBuilderDeltaRefDriverConfig::PostRemapOps");

// /Script/PoseBuilder.PoseBuilderDistanceOperation
// Kind: ScriptStruct; super: none
struct FPoseBuilderDistanceOperation
{
public:
    std::uint8_t DriverBone[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t ReferenceBone[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    float RemapMin; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float RemapMax; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInvert; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Mode; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x001A
    float RestDistance; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseBuilderDistanceOperation, DriverBone) == 0, "Offset mismatch for FPoseBuilderDistanceOperation::DriverBone");
static_assert(offsetof(FPoseBuilderDistanceOperation, ReferenceBone) == 8, "Offset mismatch for FPoseBuilderDistanceOperation::ReferenceBone");
static_assert(offsetof(FPoseBuilderDistanceOperation, RemapMin) == 16, "Offset mismatch for FPoseBuilderDistanceOperation::RemapMin");
static_assert(offsetof(FPoseBuilderDistanceOperation, RemapMax) == 20, "Offset mismatch for FPoseBuilderDistanceOperation::RemapMax");
static_assert(offsetof(FPoseBuilderDistanceOperation, bInvert) == 24, "Offset mismatch for FPoseBuilderDistanceOperation::bInvert");
static_assert(offsetof(FPoseBuilderDistanceOperation, Mode) == 25, "Offset mismatch for FPoseBuilderDistanceOperation::Mode");
static_assert(offsetof(FPoseBuilderDistanceOperation, RestDistance) == 28, "Offset mismatch for FPoseBuilderDistanceOperation::RestDistance");

// /Script/PoseBuilder.PoseBuilderDrivenBone
// Kind: ScriptStruct; super: none
struct FPoseBuilderDrivenBone
{
public:
    std::uint8_t DrivenBone[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t bTransformSet; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0xF]; // 0x0071
    std::uint8_t RestTransform[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t bRestSet; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DrivenMode; // 0x00E1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAdditive; // 0x00E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00E3
    TArray<void*> ParentConstraintConfig; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AimMathConfig; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPoseBuilderDrivenBone, DrivenBone) == 0, "Offset mismatch for FPoseBuilderDrivenBone::DrivenBone");
static_assert(offsetof(FPoseBuilderDrivenBone, Transform) == 16, "Offset mismatch for FPoseBuilderDrivenBone::Transform");
static_assert(offsetof(FPoseBuilderDrivenBone, bTransformSet) == 112, "Offset mismatch for FPoseBuilderDrivenBone::bTransformSet");
static_assert(offsetof(FPoseBuilderDrivenBone, RestTransform) == 128, "Offset mismatch for FPoseBuilderDrivenBone::RestTransform");
static_assert(offsetof(FPoseBuilderDrivenBone, bRestSet) == 224, "Offset mismatch for FPoseBuilderDrivenBone::bRestSet");
static_assert(offsetof(FPoseBuilderDrivenBone, DrivenMode) == 225, "Offset mismatch for FPoseBuilderDrivenBone::DrivenMode");
static_assert(offsetof(FPoseBuilderDrivenBone, bAdditive) == 226, "Offset mismatch for FPoseBuilderDrivenBone::bAdditive");
static_assert(offsetof(FPoseBuilderDrivenBone, ParentConstraintConfig) == 232, "Offset mismatch for FPoseBuilderDrivenBone::ParentConstraintConfig");
static_assert(offsetof(FPoseBuilderDrivenBone, AimMathConfig) == 248, "Offset mismatch for FPoseBuilderDrivenBone::AimMathConfig");

// /Script/PoseBuilder.PoseBuilderDriverCurveEntry
// Kind: ScriptStruct; super: none
struct FPoseBuilderDriverCurveEntry
{
public:
    std::uint8_t CurveName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float InputMin; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float InputMax; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInvert; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operator; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000E
    float OperatorThreshold; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInterpResult; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    float InterpResultSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x001C
    TArray<void*> PostRemapOps; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowPoseOverride; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPoseBuilderDriverCurveEntry, CurveName) == 0, "Offset mismatch for FPoseBuilderDriverCurveEntry::CurveName");
static_assert(offsetof(FPoseBuilderDriverCurveEntry, InputMin) == 4, "Offset mismatch for FPoseBuilderDriverCurveEntry::InputMin");
static_assert(offsetof(FPoseBuilderDriverCurveEntry, InputMax) == 8, "Offset mismatch for FPoseBuilderDriverCurveEntry::InputMax");
static_assert(offsetof(FPoseBuilderDriverCurveEntry, bInvert) == 12, "Offset mismatch for FPoseBuilderDriverCurveEntry::bInvert");
static_assert(offsetof(FPoseBuilderDriverCurveEntry, Operator) == 13, "Offset mismatch for FPoseBuilderDriverCurveEntry::Operator");
static_assert(offsetof(FPoseBuilderDriverCurveEntry, OperatorThreshold) == 16, "Offset mismatch for FPoseBuilderDriverCurveEntry::OperatorThreshold");
static_assert(offsetof(FPoseBuilderDriverCurveEntry, bInterpResult) == 20, "Offset mismatch for FPoseBuilderDriverCurveEntry::bInterpResult");
static_assert(offsetof(FPoseBuilderDriverCurveEntry, InterpResultSpeed) == 24, "Offset mismatch for FPoseBuilderDriverCurveEntry::InterpResultSpeed");
static_assert(offsetof(FPoseBuilderDriverCurveEntry, PostRemapOps) == 32, "Offset mismatch for FPoseBuilderDriverCurveEntry::PostRemapOps");
static_assert(offsetof(FPoseBuilderDriverCurveEntry, bAllowPoseOverride) == 48, "Offset mismatch for FPoseBuilderDriverCurveEntry::bAllowPoseOverride");

// /Script/PoseBuilder.PoseBuilderDriverEntry
// Kind: ScriptStruct; super: none
struct FPoseBuilderDriverEntry
{
public:
    std::uint8_t DriverBone[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t CapturedTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t bTransformSet; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0xF]; // 0x0071
    std::uint8_t RestTransform[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t bRestSet; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DriverMode; // 0x00E1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bExcludeFromActivation; // 0x00E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00E3
    TArray<void*> SPRConfig; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeltaRefConfig; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPoseBuilderDriverEntry, DriverBone) == 0, "Offset mismatch for FPoseBuilderDriverEntry::DriverBone");
static_assert(offsetof(FPoseBuilderDriverEntry, CapturedTransform) == 16, "Offset mismatch for FPoseBuilderDriverEntry::CapturedTransform");
static_assert(offsetof(FPoseBuilderDriverEntry, bTransformSet) == 112, "Offset mismatch for FPoseBuilderDriverEntry::bTransformSet");
static_assert(offsetof(FPoseBuilderDriverEntry, RestTransform) == 128, "Offset mismatch for FPoseBuilderDriverEntry::RestTransform");
static_assert(offsetof(FPoseBuilderDriverEntry, bRestSet) == 224, "Offset mismatch for FPoseBuilderDriverEntry::bRestSet");
static_assert(offsetof(FPoseBuilderDriverEntry, DriverMode) == 225, "Offset mismatch for FPoseBuilderDriverEntry::DriverMode");
static_assert(offsetof(FPoseBuilderDriverEntry, bExcludeFromActivation) == 226, "Offset mismatch for FPoseBuilderDriverEntry::bExcludeFromActivation");
static_assert(offsetof(FPoseBuilderDriverEntry, SPRConfig) == 232, "Offset mismatch for FPoseBuilderDriverEntry::SPRConfig");
static_assert(offsetof(FPoseBuilderDriverEntry, DeltaRefConfig) == 248, "Offset mismatch for FPoseBuilderDriverEntry::DeltaRefConfig");

// /Script/PoseBuilder.PoseBuilderDriverKey
// Kind: ScriptStruct; super: none
struct FPoseBuilderDriverKey
{
public:
    std::int32_t Slot; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Driver; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPoseBuilderDriverKey, Slot) == 0, "Offset mismatch for FPoseBuilderDriverKey::Slot");
static_assert(offsetof(FPoseBuilderDriverKey, Driver) == 4, "Offset mismatch for FPoseBuilderDriverKey::Driver");

// /Script/PoseBuilder.PoseBuilderEditorState
// Kind: ScriptStruct; super: none
struct FPoseBuilderEditorState
{
public:
    std::int32_t EditModePoseSlot; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t EditModePoseDrivenIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bGlobalBlendEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float GlobalBlendTimeConstant; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ActiveEdit[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::int32_t SPRDebugSlotIndex; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t SPRDebugDriverIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSuppressDebug; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ManifoldMode; // 0x0025 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDetailsLocked; // 0x0026 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsolateDriverBoneEdit; // 0x0027 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsolateDrivenBoneEdit; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsolateDriverCurveEdit; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsolateDriverOperationEdit; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x002B
    TArray<void*> DriverOperationEditOverrideSnapshot; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::int32_t DriverOperationEditOverrideSnapshotSlot; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0044
    TArray<void*> EditBoneTransformCurveOverrideSnapshot; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EditBoneTransformOpOverrideSnapshot; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::int32_t EditBoneTransformOverrideSnapshotSlot; // 0x0068 (Size: 0x4, Type: IntProperty)
    float EditBoneTransformPoseWeightSnapshot; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEditBoneTransformPoseWeightWasOverridden; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0071
    std::uint8_t EditBoneTransformPoseWeightVariableSnapshot[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEditBoneTransformPoseWeightVariableWasOverridden; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0079
    TMap<void*, void*> PoseBlendWeights; // 0x0080 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PoseActivationWeights; // 0x0090 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DeltaRefRawValues; // 0x00A0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DriverActivationWeights; // 0x00B0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DrivenBoneAppliedAlphas; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DriverCurveActivationWeights; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DriverOperationActivationWeights; // 0x00E0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DistanceOperationRawValues; // 0x00F0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DistanceOperationCurrentDistances; // 0x0100 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AxisProjectionOperationProjectedValues; // 0x0110 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DriverInterpedAlphas; // 0x0120 (Size: 0x10, Type: MapProperty)
    std::uint8_t VisibleBlendManifolds[0x10]; // 0x0130 (Size: 0x10, Type: SetProperty)
    std::uint8_t SessionPublicOpEyeOn[0x10]; // 0x0140 (Size: 0x10, Type: SetProperty)
    std::uint8_t SessionAimDebugDraw[0x10]; // 0x0150 (Size: 0x10, Type: SetProperty)
    std::uint32_t ReorderVersion; // 0x0160 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0005[0x4]; // 0x0164
    std::uint8_t CollapsedGroups[0x10]; // 0x0168 (Size: 0x10, Type: SetProperty)
    std::int32_t RenamingPoseSlot; // 0x0178 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0006[0x4]; // 0x017C
    std::uint8_t RenameBuffer[0x10]; // 0x0180 (Size: 0x10, Type: TextProperty)
    std::int32_t RenamingOperationSlotIndex; // 0x0190 (Size: 0x4, Type: IntProperty)
    std::int32_t RenamingOperationIndex; // 0x0194 (Size: 0x4, Type: IntProperty)
    std::uint8_t RenameOperationBuffer[0x10]; // 0x0198 (Size: 0x10, Type: TextProperty)
    std::int32_t RenamingDriverBoneSlot; // 0x01A8 (Size: 0x4, Type: IntProperty)
    std::int32_t RenamingDriverBoneIndex; // 0x01AC (Size: 0x4, Type: IntProperty)
    std::int32_t RenamingDrivenBoneSlot; // 0x01B0 (Size: 0x4, Type: IntProperty)
    std::int32_t RenamingDrivenBoneIndex; // 0x01B4 (Size: 0x4, Type: IntProperty)
    std::int32_t RenamingDriverCurveSlot; // 0x01B8 (Size: 0x4, Type: IntProperty)
    std::int32_t RenamingDriverCurveIndex; // 0x01BC (Size: 0x4, Type: IntProperty)
    std::int32_t RenamingDrivenCurveSlot; // 0x01C0 (Size: 0x4, Type: IntProperty)
    std::int32_t RenamingDrivenCurveIndex; // 0x01C4 (Size: 0x4, Type: IntProperty)
    std::int32_t RenamingPoseWeightSlot; // 0x01C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t RenamingGroupName[0x4]; // 0x01CC (Size: 0x4, Type: NameProperty)
    std::uint8_t RenameGroupBuffer[0x10]; // 0x01D0 (Size: 0x10, Type: TextProperty)
    std::int32_t ExpandedPoseSlot; // 0x01E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0007[0x4]; // 0x01E4
    std::uint8_t ExpandedPinnedPoseSlots[0x10]; // 0x01E8 (Size: 0x10, Type: SetProperty)
    std::uint8_t PoseFilterText[0x10]; // 0x01F8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bFilterActiveOnly; // 0x0208 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0209
    std::uint8_t FilterActiveSnapshot[0x10]; // 0x0210 (Size: 0x10, Type: SetProperty)
    std::uint8_t bIsolateExpandedPose; // 0x0220 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFilterBySelectedBones; // 0x0221 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x6]; // 0x0222
    std::uint8_t FilterSelectedBoneSnapshot[0x10]; // 0x0228 (Size: 0x10, Type: SetProperty)
    TArray<void*> PinnedPoseSlots; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IsolatedDriverBoneIndices[0x10]; // 0x0248 (Size: 0x10, Type: SetProperty)
    std::uint8_t IsolatedDrivenBoneIndices[0x10]; // 0x0258 (Size: 0x10, Type: SetProperty)
    std::uint8_t bSPRParamsExpanded; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeltaRefExpanded; // 0x0269 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bParentConstraintExpanded; // 0x026A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimSectionExpanded; // 0x026B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOperationsSectionExpanded; // 0x026C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlphaInterpExpanded; // 0x026D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOperationsExpanded; // 0x026E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampExpanded; // 0x026F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPublicOperatorsGroupCollapsed; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStaticPosesGroupCollapsed; // 0x0271 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SoftIsolateMode; // 0x0272 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x1]; // 0x0273
    std::int32_t SoftIsolateSourceSlot; // 0x0274 (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> SoftIsolateSnapshot; // 0x0278 (Size: 0x10, Type: MapProperty)
    std::uint8_t DriverBonesAddBarSlots[0x10]; // 0x0288 (Size: 0x10, Type: SetProperty)
    std::uint8_t DriverCurvesAddBarSlots[0x10]; // 0x0298 (Size: 0x10, Type: SetProperty)
    std::uint8_t DriverOperationsAddBarSlots[0x10]; // 0x02A8 (Size: 0x10, Type: SetProperty)
    std::uint8_t DrivenBonesAddBarSlots[0x10]; // 0x02B8 (Size: 0x10, Type: SetProperty)
    std::uint8_t DrivenCurvesAddBarSlots[0x10]; // 0x02C8 (Size: 0x10, Type: SetProperty)
    std::uint8_t bDrivenBoneAdvancedExpanded; // 0x02D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransformSectionExpanded; // 0x02D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x6]; // 0x02DA
    std::uint8_t ActivatedPoseBlendSlots[0x10]; // 0x02E0 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> DrivenIsolateBlendSnapshot; // 0x02F0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerBoneEditBlendSnapshot; // 0x0300 (Size: 0x10, Type: MapProperty)
    TArray<void*> FullActivationHistory; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ListLayoutMode; // 0x0320 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000C[0x7]; // 0x0321
    TMap<void*, void*> EvalOrderPositionBySlot; // 0x0328 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPoseBuilderEditorState, EditModePoseSlot) == 0, "Offset mismatch for FPoseBuilderEditorState::EditModePoseSlot");
static_assert(offsetof(FPoseBuilderEditorState, EditModePoseDrivenIndex) == 4, "Offset mismatch for FPoseBuilderEditorState::EditModePoseDrivenIndex");
static_assert(offsetof(FPoseBuilderEditorState, bGlobalBlendEnabled) == 8, "Offset mismatch for FPoseBuilderEditorState::bGlobalBlendEnabled");
static_assert(offsetof(FPoseBuilderEditorState, GlobalBlendTimeConstant) == 12, "Offset mismatch for FPoseBuilderEditorState::GlobalBlendTimeConstant");
static_assert(offsetof(FPoseBuilderEditorState, ActiveEdit) == 16, "Offset mismatch for FPoseBuilderEditorState::ActiveEdit");
static_assert(offsetof(FPoseBuilderEditorState, SPRDebugSlotIndex) == 28, "Offset mismatch for FPoseBuilderEditorState::SPRDebugSlotIndex");
static_assert(offsetof(FPoseBuilderEditorState, SPRDebugDriverIndex) == 32, "Offset mismatch for FPoseBuilderEditorState::SPRDebugDriverIndex");
static_assert(offsetof(FPoseBuilderEditorState, bSuppressDebug) == 36, "Offset mismatch for FPoseBuilderEditorState::bSuppressDebug");
static_assert(offsetof(FPoseBuilderEditorState, ManifoldMode) == 37, "Offset mismatch for FPoseBuilderEditorState::ManifoldMode");
static_assert(offsetof(FPoseBuilderEditorState, bDetailsLocked) == 38, "Offset mismatch for FPoseBuilderEditorState::bDetailsLocked");
static_assert(offsetof(FPoseBuilderEditorState, bIsolateDriverBoneEdit) == 39, "Offset mismatch for FPoseBuilderEditorState::bIsolateDriverBoneEdit");
static_assert(offsetof(FPoseBuilderEditorState, bIsolateDrivenBoneEdit) == 40, "Offset mismatch for FPoseBuilderEditorState::bIsolateDrivenBoneEdit");
static_assert(offsetof(FPoseBuilderEditorState, bIsolateDriverCurveEdit) == 41, "Offset mismatch for FPoseBuilderEditorState::bIsolateDriverCurveEdit");
static_assert(offsetof(FPoseBuilderEditorState, bIsolateDriverOperationEdit) == 42, "Offset mismatch for FPoseBuilderEditorState::bIsolateDriverOperationEdit");
static_assert(offsetof(FPoseBuilderEditorState, DriverOperationEditOverrideSnapshot) == 48, "Offset mismatch for FPoseBuilderEditorState::DriverOperationEditOverrideSnapshot");
static_assert(offsetof(FPoseBuilderEditorState, DriverOperationEditOverrideSnapshotSlot) == 64, "Offset mismatch for FPoseBuilderEditorState::DriverOperationEditOverrideSnapshotSlot");
static_assert(offsetof(FPoseBuilderEditorState, EditBoneTransformCurveOverrideSnapshot) == 72, "Offset mismatch for FPoseBuilderEditorState::EditBoneTransformCurveOverrideSnapshot");
static_assert(offsetof(FPoseBuilderEditorState, EditBoneTransformOpOverrideSnapshot) == 88, "Offset mismatch for FPoseBuilderEditorState::EditBoneTransformOpOverrideSnapshot");
static_assert(offsetof(FPoseBuilderEditorState, EditBoneTransformOverrideSnapshotSlot) == 104, "Offset mismatch for FPoseBuilderEditorState::EditBoneTransformOverrideSnapshotSlot");
static_assert(offsetof(FPoseBuilderEditorState, EditBoneTransformPoseWeightSnapshot) == 108, "Offset mismatch for FPoseBuilderEditorState::EditBoneTransformPoseWeightSnapshot");
static_assert(offsetof(FPoseBuilderEditorState, bEditBoneTransformPoseWeightWasOverridden) == 112, "Offset mismatch for FPoseBuilderEditorState::bEditBoneTransformPoseWeightWasOverridden");
static_assert(offsetof(FPoseBuilderEditorState, EditBoneTransformPoseWeightVariableSnapshot) == 116, "Offset mismatch for FPoseBuilderEditorState::EditBoneTransformPoseWeightVariableSnapshot");
static_assert(offsetof(FPoseBuilderEditorState, bEditBoneTransformPoseWeightVariableWasOverridden) == 120, "Offset mismatch for FPoseBuilderEditorState::bEditBoneTransformPoseWeightVariableWasOverridden");
static_assert(offsetof(FPoseBuilderEditorState, PoseBlendWeights) == 128, "Offset mismatch for FPoseBuilderEditorState::PoseBlendWeights");
static_assert(offsetof(FPoseBuilderEditorState, PoseActivationWeights) == 144, "Offset mismatch for FPoseBuilderEditorState::PoseActivationWeights");
static_assert(offsetof(FPoseBuilderEditorState, DeltaRefRawValues) == 160, "Offset mismatch for FPoseBuilderEditorState::DeltaRefRawValues");
static_assert(offsetof(FPoseBuilderEditorState, DriverActivationWeights) == 176, "Offset mismatch for FPoseBuilderEditorState::DriverActivationWeights");
static_assert(offsetof(FPoseBuilderEditorState, DrivenBoneAppliedAlphas) == 192, "Offset mismatch for FPoseBuilderEditorState::DrivenBoneAppliedAlphas");
static_assert(offsetof(FPoseBuilderEditorState, DriverCurveActivationWeights) == 208, "Offset mismatch for FPoseBuilderEditorState::DriverCurveActivationWeights");
static_assert(offsetof(FPoseBuilderEditorState, DriverOperationActivationWeights) == 224, "Offset mismatch for FPoseBuilderEditorState::DriverOperationActivationWeights");
static_assert(offsetof(FPoseBuilderEditorState, DistanceOperationRawValues) == 240, "Offset mismatch for FPoseBuilderEditorState::DistanceOperationRawValues");
static_assert(offsetof(FPoseBuilderEditorState, DistanceOperationCurrentDistances) == 256, "Offset mismatch for FPoseBuilderEditorState::DistanceOperationCurrentDistances");
static_assert(offsetof(FPoseBuilderEditorState, AxisProjectionOperationProjectedValues) == 272, "Offset mismatch for FPoseBuilderEditorState::AxisProjectionOperationProjectedValues");
static_assert(offsetof(FPoseBuilderEditorState, DriverInterpedAlphas) == 288, "Offset mismatch for FPoseBuilderEditorState::DriverInterpedAlphas");
static_assert(offsetof(FPoseBuilderEditorState, VisibleBlendManifolds) == 304, "Offset mismatch for FPoseBuilderEditorState::VisibleBlendManifolds");
static_assert(offsetof(FPoseBuilderEditorState, SessionPublicOpEyeOn) == 320, "Offset mismatch for FPoseBuilderEditorState::SessionPublicOpEyeOn");
static_assert(offsetof(FPoseBuilderEditorState, SessionAimDebugDraw) == 336, "Offset mismatch for FPoseBuilderEditorState::SessionAimDebugDraw");
static_assert(offsetof(FPoseBuilderEditorState, ReorderVersion) == 352, "Offset mismatch for FPoseBuilderEditorState::ReorderVersion");
static_assert(offsetof(FPoseBuilderEditorState, CollapsedGroups) == 360, "Offset mismatch for FPoseBuilderEditorState::CollapsedGroups");
static_assert(offsetof(FPoseBuilderEditorState, RenamingPoseSlot) == 376, "Offset mismatch for FPoseBuilderEditorState::RenamingPoseSlot");
static_assert(offsetof(FPoseBuilderEditorState, RenameBuffer) == 384, "Offset mismatch for FPoseBuilderEditorState::RenameBuffer");
static_assert(offsetof(FPoseBuilderEditorState, RenamingOperationSlotIndex) == 400, "Offset mismatch for FPoseBuilderEditorState::RenamingOperationSlotIndex");
static_assert(offsetof(FPoseBuilderEditorState, RenamingOperationIndex) == 404, "Offset mismatch for FPoseBuilderEditorState::RenamingOperationIndex");
static_assert(offsetof(FPoseBuilderEditorState, RenameOperationBuffer) == 408, "Offset mismatch for FPoseBuilderEditorState::RenameOperationBuffer");
static_assert(offsetof(FPoseBuilderEditorState, RenamingDriverBoneSlot) == 424, "Offset mismatch for FPoseBuilderEditorState::RenamingDriverBoneSlot");
static_assert(offsetof(FPoseBuilderEditorState, RenamingDriverBoneIndex) == 428, "Offset mismatch for FPoseBuilderEditorState::RenamingDriverBoneIndex");
static_assert(offsetof(FPoseBuilderEditorState, RenamingDrivenBoneSlot) == 432, "Offset mismatch for FPoseBuilderEditorState::RenamingDrivenBoneSlot");
static_assert(offsetof(FPoseBuilderEditorState, RenamingDrivenBoneIndex) == 436, "Offset mismatch for FPoseBuilderEditorState::RenamingDrivenBoneIndex");
static_assert(offsetof(FPoseBuilderEditorState, RenamingDriverCurveSlot) == 440, "Offset mismatch for FPoseBuilderEditorState::RenamingDriverCurveSlot");
static_assert(offsetof(FPoseBuilderEditorState, RenamingDriverCurveIndex) == 444, "Offset mismatch for FPoseBuilderEditorState::RenamingDriverCurveIndex");
static_assert(offsetof(FPoseBuilderEditorState, RenamingDrivenCurveSlot) == 448, "Offset mismatch for FPoseBuilderEditorState::RenamingDrivenCurveSlot");
static_assert(offsetof(FPoseBuilderEditorState, RenamingDrivenCurveIndex) == 452, "Offset mismatch for FPoseBuilderEditorState::RenamingDrivenCurveIndex");
static_assert(offsetof(FPoseBuilderEditorState, RenamingPoseWeightSlot) == 456, "Offset mismatch for FPoseBuilderEditorState::RenamingPoseWeightSlot");
static_assert(offsetof(FPoseBuilderEditorState, RenamingGroupName) == 460, "Offset mismatch for FPoseBuilderEditorState::RenamingGroupName");
static_assert(offsetof(FPoseBuilderEditorState, RenameGroupBuffer) == 464, "Offset mismatch for FPoseBuilderEditorState::RenameGroupBuffer");
static_assert(offsetof(FPoseBuilderEditorState, ExpandedPoseSlot) == 480, "Offset mismatch for FPoseBuilderEditorState::ExpandedPoseSlot");
static_assert(offsetof(FPoseBuilderEditorState, ExpandedPinnedPoseSlots) == 488, "Offset mismatch for FPoseBuilderEditorState::ExpandedPinnedPoseSlots");
static_assert(offsetof(FPoseBuilderEditorState, PoseFilterText) == 504, "Offset mismatch for FPoseBuilderEditorState::PoseFilterText");
static_assert(offsetof(FPoseBuilderEditorState, bFilterActiveOnly) == 520, "Offset mismatch for FPoseBuilderEditorState::bFilterActiveOnly");
static_assert(offsetof(FPoseBuilderEditorState, FilterActiveSnapshot) == 528, "Offset mismatch for FPoseBuilderEditorState::FilterActiveSnapshot");
static_assert(offsetof(FPoseBuilderEditorState, bIsolateExpandedPose) == 544, "Offset mismatch for FPoseBuilderEditorState::bIsolateExpandedPose");
static_assert(offsetof(FPoseBuilderEditorState, bFilterBySelectedBones) == 545, "Offset mismatch for FPoseBuilderEditorState::bFilterBySelectedBones");
static_assert(offsetof(FPoseBuilderEditorState, FilterSelectedBoneSnapshot) == 552, "Offset mismatch for FPoseBuilderEditorState::FilterSelectedBoneSnapshot");
static_assert(offsetof(FPoseBuilderEditorState, PinnedPoseSlots) == 568, "Offset mismatch for FPoseBuilderEditorState::PinnedPoseSlots");
static_assert(offsetof(FPoseBuilderEditorState, IsolatedDriverBoneIndices) == 584, "Offset mismatch for FPoseBuilderEditorState::IsolatedDriverBoneIndices");
static_assert(offsetof(FPoseBuilderEditorState, IsolatedDrivenBoneIndices) == 600, "Offset mismatch for FPoseBuilderEditorState::IsolatedDrivenBoneIndices");
static_assert(offsetof(FPoseBuilderEditorState, bSPRParamsExpanded) == 616, "Offset mismatch for FPoseBuilderEditorState::bSPRParamsExpanded");
static_assert(offsetof(FPoseBuilderEditorState, bDeltaRefExpanded) == 617, "Offset mismatch for FPoseBuilderEditorState::bDeltaRefExpanded");
static_assert(offsetof(FPoseBuilderEditorState, bParentConstraintExpanded) == 618, "Offset mismatch for FPoseBuilderEditorState::bParentConstraintExpanded");
static_assert(offsetof(FPoseBuilderEditorState, bAimSectionExpanded) == 619, "Offset mismatch for FPoseBuilderEditorState::bAimSectionExpanded");
static_assert(offsetof(FPoseBuilderEditorState, bOperationsSectionExpanded) == 620, "Offset mismatch for FPoseBuilderEditorState::bOperationsSectionExpanded");
static_assert(offsetof(FPoseBuilderEditorState, bAlphaInterpExpanded) == 621, "Offset mismatch for FPoseBuilderEditorState::bAlphaInterpExpanded");
static_assert(offsetof(FPoseBuilderEditorState, bOperationsExpanded) == 622, "Offset mismatch for FPoseBuilderEditorState::bOperationsExpanded");
static_assert(offsetof(FPoseBuilderEditorState, bClampExpanded) == 623, "Offset mismatch for FPoseBuilderEditorState::bClampExpanded");
static_assert(offsetof(FPoseBuilderEditorState, bPublicOperatorsGroupCollapsed) == 624, "Offset mismatch for FPoseBuilderEditorState::bPublicOperatorsGroupCollapsed");
static_assert(offsetof(FPoseBuilderEditorState, bStaticPosesGroupCollapsed) == 625, "Offset mismatch for FPoseBuilderEditorState::bStaticPosesGroupCollapsed");
static_assert(offsetof(FPoseBuilderEditorState, SoftIsolateMode) == 626, "Offset mismatch for FPoseBuilderEditorState::SoftIsolateMode");
static_assert(offsetof(FPoseBuilderEditorState, SoftIsolateSourceSlot) == 628, "Offset mismatch for FPoseBuilderEditorState::SoftIsolateSourceSlot");
static_assert(offsetof(FPoseBuilderEditorState, SoftIsolateSnapshot) == 632, "Offset mismatch for FPoseBuilderEditorState::SoftIsolateSnapshot");
static_assert(offsetof(FPoseBuilderEditorState, DriverBonesAddBarSlots) == 648, "Offset mismatch for FPoseBuilderEditorState::DriverBonesAddBarSlots");
static_assert(offsetof(FPoseBuilderEditorState, DriverCurvesAddBarSlots) == 664, "Offset mismatch for FPoseBuilderEditorState::DriverCurvesAddBarSlots");
static_assert(offsetof(FPoseBuilderEditorState, DriverOperationsAddBarSlots) == 680, "Offset mismatch for FPoseBuilderEditorState::DriverOperationsAddBarSlots");
static_assert(offsetof(FPoseBuilderEditorState, DrivenBonesAddBarSlots) == 696, "Offset mismatch for FPoseBuilderEditorState::DrivenBonesAddBarSlots");
static_assert(offsetof(FPoseBuilderEditorState, DrivenCurvesAddBarSlots) == 712, "Offset mismatch for FPoseBuilderEditorState::DrivenCurvesAddBarSlots");
static_assert(offsetof(FPoseBuilderEditorState, bDrivenBoneAdvancedExpanded) == 728, "Offset mismatch for FPoseBuilderEditorState::bDrivenBoneAdvancedExpanded");
static_assert(offsetof(FPoseBuilderEditorState, bTransformSectionExpanded) == 729, "Offset mismatch for FPoseBuilderEditorState::bTransformSectionExpanded");
static_assert(offsetof(FPoseBuilderEditorState, ActivatedPoseBlendSlots) == 736, "Offset mismatch for FPoseBuilderEditorState::ActivatedPoseBlendSlots");
static_assert(offsetof(FPoseBuilderEditorState, DrivenIsolateBlendSnapshot) == 752, "Offset mismatch for FPoseBuilderEditorState::DrivenIsolateBlendSnapshot");
static_assert(offsetof(FPoseBuilderEditorState, PerBoneEditBlendSnapshot) == 768, "Offset mismatch for FPoseBuilderEditorState::PerBoneEditBlendSnapshot");
static_assert(offsetof(FPoseBuilderEditorState, FullActivationHistory) == 784, "Offset mismatch for FPoseBuilderEditorState::FullActivationHistory");
static_assert(offsetof(FPoseBuilderEditorState, ListLayoutMode) == 800, "Offset mismatch for FPoseBuilderEditorState::ListLayoutMode");
static_assert(offsetof(FPoseBuilderEditorState, EvalOrderPositionBySlot) == 808, "Offset mismatch for FPoseBuilderEditorState::EvalOrderPositionBySlot");

// /Script/PoseBuilder.PoseBuilderKeyPose
// Kind: ScriptStruct; super: none
struct FPoseBuilderKeyPose
{
public:
    FName PoseName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> DriverBones; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DriverCurveEntries; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOperationEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    TArray<void*> Operations; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DrivenBones; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Priority; // 0x0050 (Size: 0x4, Type: IntProperty)
    float PoseWeight; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PoseWeightVariable[0x4]; // 0x0058 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupName[0x4]; // 0x005C (Size: 0x4, Type: NameProperty)
    std::uint8_t PoseState; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    TArray<void*> DrivenCurves; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AlphaInterpConfig; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bStatic; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressConflictAnalysis; // 0x0089 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPoseBuilderKeyPose, PoseName) == 0, "Offset mismatch for FPoseBuilderKeyPose::PoseName");
static_assert(offsetof(FPoseBuilderKeyPose, DriverBones) == 8, "Offset mismatch for FPoseBuilderKeyPose::DriverBones");
static_assert(offsetof(FPoseBuilderKeyPose, DriverCurveEntries) == 24, "Offset mismatch for FPoseBuilderKeyPose::DriverCurveEntries");
static_assert(offsetof(FPoseBuilderKeyPose, bOperationEnabled) == 40, "Offset mismatch for FPoseBuilderKeyPose::bOperationEnabled");
static_assert(offsetof(FPoseBuilderKeyPose, Operations) == 48, "Offset mismatch for FPoseBuilderKeyPose::Operations");
static_assert(offsetof(FPoseBuilderKeyPose, DrivenBones) == 64, "Offset mismatch for FPoseBuilderKeyPose::DrivenBones");
static_assert(offsetof(FPoseBuilderKeyPose, Priority) == 80, "Offset mismatch for FPoseBuilderKeyPose::Priority");
static_assert(offsetof(FPoseBuilderKeyPose, PoseWeight) == 84, "Offset mismatch for FPoseBuilderKeyPose::PoseWeight");
static_assert(offsetof(FPoseBuilderKeyPose, PoseWeightVariable) == 88, "Offset mismatch for FPoseBuilderKeyPose::PoseWeightVariable");
static_assert(offsetof(FPoseBuilderKeyPose, GroupName) == 92, "Offset mismatch for FPoseBuilderKeyPose::GroupName");
static_assert(offsetof(FPoseBuilderKeyPose, PoseState) == 96, "Offset mismatch for FPoseBuilderKeyPose::PoseState");
static_assert(offsetof(FPoseBuilderKeyPose, DrivenCurves) == 104, "Offset mismatch for FPoseBuilderKeyPose::DrivenCurves");
static_assert(offsetof(FPoseBuilderKeyPose, AlphaInterpConfig) == 120, "Offset mismatch for FPoseBuilderKeyPose::AlphaInterpConfig");
static_assert(offsetof(FPoseBuilderKeyPose, bStatic) == 136, "Offset mismatch for FPoseBuilderKeyPose::bStatic");
static_assert(offsetof(FPoseBuilderKeyPose, bSuppressConflictAnalysis) == 137, "Offset mismatch for FPoseBuilderKeyPose::bSuppressConflictAnalysis");

// /Script/PoseBuilder.PoseBuilderOperation
// Kind: ScriptStruct; super: none
struct FPoseBuilderOperation
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDebugEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPublic; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPoseOverride; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x000B
    TArray<void*> DistanceConfig; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AxisProjectionConfig; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReferenceConfig; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AimConfig; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPoseBuilderOperation, Type) == 0, "Offset mismatch for FPoseBuilderOperation::Type");
static_assert(offsetof(FPoseBuilderOperation, Name) == 4, "Offset mismatch for FPoseBuilderOperation::Name");
static_assert(offsetof(FPoseBuilderOperation, bDebugEnabled) == 8, "Offset mismatch for FPoseBuilderOperation::bDebugEnabled");
static_assert(offsetof(FPoseBuilderOperation, bIsPublic) == 9, "Offset mismatch for FPoseBuilderOperation::bIsPublic");
static_assert(offsetof(FPoseBuilderOperation, bAllowPoseOverride) == 10, "Offset mismatch for FPoseBuilderOperation::bAllowPoseOverride");
static_assert(offsetof(FPoseBuilderOperation, DistanceConfig) == 16, "Offset mismatch for FPoseBuilderOperation::DistanceConfig");
static_assert(offsetof(FPoseBuilderOperation, AxisProjectionConfig) == 32, "Offset mismatch for FPoseBuilderOperation::AxisProjectionConfig");
static_assert(offsetof(FPoseBuilderOperation, ReferenceConfig) == 48, "Offset mismatch for FPoseBuilderOperation::ReferenceConfig");
static_assert(offsetof(FPoseBuilderOperation, AimConfig) == 64, "Offset mismatch for FPoseBuilderOperation::AimConfig");

// /Script/PoseBuilder.PoseBuilderParentBoneEntry
// Kind: ScriptStruct; super: none
struct FPoseBuilderParentBoneEntry
{
public:
    std::uint8_t ParentBone[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float Weight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseBuilderParentBoneEntry, ParentBone) == 0, "Offset mismatch for FPoseBuilderParentBoneEntry::ParentBone");
static_assert(offsetof(FPoseBuilderParentBoneEntry, Weight) == 8, "Offset mismatch for FPoseBuilderParentBoneEntry::Weight");

// /Script/PoseBuilder.PoseBuilderParentConstraintConfig
// Kind: ScriptStruct; super: none
struct FPoseBuilderParentConstraintConfig
{
public:
    std::uint8_t bConstrainTranslationX; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConstrainTranslationY; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConstrainTranslationZ; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConstrainRotationX; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConstrainRotationY; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConstrainRotationZ; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConstrainScaleX; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConstrainScaleY; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConstrainScaleZ; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    TArray<void*> ParentBones; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InterpolationType; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationOrder; // 0x0021 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0022
    float Multiplier; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float RemapMin; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float RemapMax; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAlwaysOn; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMaintainOffset; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xE]; // 0x0032
    std::uint8_t AdditiveLocal[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t bAdditiveSet; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00A1
    std::uint8_t AdditiveLocalDeltaTranslation[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAdditiveDeltaTranslationSet; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPoseBuilderParentConstraintConfig, bConstrainTranslationX) == 0, "Offset mismatch for FPoseBuilderParentConstraintConfig::bConstrainTranslationX");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bConstrainTranslationY) == 1, "Offset mismatch for FPoseBuilderParentConstraintConfig::bConstrainTranslationY");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bConstrainTranslationZ) == 2, "Offset mismatch for FPoseBuilderParentConstraintConfig::bConstrainTranslationZ");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bConstrainRotationX) == 3, "Offset mismatch for FPoseBuilderParentConstraintConfig::bConstrainRotationX");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bConstrainRotationY) == 4, "Offset mismatch for FPoseBuilderParentConstraintConfig::bConstrainRotationY");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bConstrainRotationZ) == 5, "Offset mismatch for FPoseBuilderParentConstraintConfig::bConstrainRotationZ");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bConstrainScaleX) == 6, "Offset mismatch for FPoseBuilderParentConstraintConfig::bConstrainScaleX");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bConstrainScaleY) == 7, "Offset mismatch for FPoseBuilderParentConstraintConfig::bConstrainScaleY");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bConstrainScaleZ) == 8, "Offset mismatch for FPoseBuilderParentConstraintConfig::bConstrainScaleZ");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, ParentBones) == 16, "Offset mismatch for FPoseBuilderParentConstraintConfig::ParentBones");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, InterpolationType) == 32, "Offset mismatch for FPoseBuilderParentConstraintConfig::InterpolationType");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, RotationOrder) == 33, "Offset mismatch for FPoseBuilderParentConstraintConfig::RotationOrder");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, Multiplier) == 36, "Offset mismatch for FPoseBuilderParentConstraintConfig::Multiplier");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, RemapMin) == 40, "Offset mismatch for FPoseBuilderParentConstraintConfig::RemapMin");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, RemapMax) == 44, "Offset mismatch for FPoseBuilderParentConstraintConfig::RemapMax");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bAlwaysOn) == 48, "Offset mismatch for FPoseBuilderParentConstraintConfig::bAlwaysOn");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bMaintainOffset) == 49, "Offset mismatch for FPoseBuilderParentConstraintConfig::bMaintainOffset");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, AdditiveLocal) == 64, "Offset mismatch for FPoseBuilderParentConstraintConfig::AdditiveLocal");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bAdditiveSet) == 160, "Offset mismatch for FPoseBuilderParentConstraintConfig::bAdditiveSet");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, AdditiveLocalDeltaTranslation) == 168, "Offset mismatch for FPoseBuilderParentConstraintConfig::AdditiveLocalDeltaTranslation");
static_assert(offsetof(FPoseBuilderParentConstraintConfig, bAdditiveDeltaTranslationSet) == 192, "Offset mismatch for FPoseBuilderParentConstraintConfig::bAdditiveDeltaTranslationSet");

// /Script/PoseBuilder.PoseBuilderReferenceOperation
// Kind: ScriptStruct; super: none
struct FPoseBuilderReferenceOperation
{
public:
    FName PublicOpName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPoseBuilderReferenceOperation, PublicOpName) == 0, "Offset mismatch for FPoseBuilderReferenceOperation::PublicOpName");

// /Script/PoseBuilder.PoseBuilderSPRDriverConfig
// Kind: ScriptStruct; super: none
struct FPoseBuilderSPRDriverConfig
{
public:
    float ActiveRegionSize; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FalloffSize; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriverAxis[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t ActiveRegionScaleFactors[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t FalloffRegionScaleFactors[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bFlipWidthScaling; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlipHeightScaling; // 0x0059 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPoseBuilderSPRDriverConfig, ActiveRegionSize) == 0, "Offset mismatch for FPoseBuilderSPRDriverConfig::ActiveRegionSize");
static_assert(offsetof(FPoseBuilderSPRDriverConfig, FalloffSize) == 4, "Offset mismatch for FPoseBuilderSPRDriverConfig::FalloffSize");
static_assert(offsetof(FPoseBuilderSPRDriverConfig, DriverAxis) == 8, "Offset mismatch for FPoseBuilderSPRDriverConfig::DriverAxis");
static_assert(offsetof(FPoseBuilderSPRDriverConfig, RotationOffset) == 32, "Offset mismatch for FPoseBuilderSPRDriverConfig::RotationOffset");
static_assert(offsetof(FPoseBuilderSPRDriverConfig, ActiveRegionScaleFactors) == 56, "Offset mismatch for FPoseBuilderSPRDriverConfig::ActiveRegionScaleFactors");
static_assert(offsetof(FPoseBuilderSPRDriverConfig, FalloffRegionScaleFactors) == 72, "Offset mismatch for FPoseBuilderSPRDriverConfig::FalloffRegionScaleFactors");
static_assert(offsetof(FPoseBuilderSPRDriverConfig, bFlipWidthScaling) == 88, "Offset mismatch for FPoseBuilderSPRDriverConfig::bFlipWidthScaling");
static_assert(offsetof(FPoseBuilderSPRDriverConfig, bFlipHeightScaling) == 89, "Offset mismatch for FPoseBuilderSPRDriverConfig::bFlipHeightScaling");

// /Script/PoseBuilder.PoseBuilderScaleFactors
// Kind: ScriptStruct; super: none
struct FPoseBuilderScaleFactors
{
public:
    float PositiveWidth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float NegativeWidth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PositiveHeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float NegativeHeight; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPoseBuilderScaleFactors, PositiveWidth) == 0, "Offset mismatch for FPoseBuilderScaleFactors::PositiveWidth");
static_assert(offsetof(FPoseBuilderScaleFactors, NegativeWidth) == 4, "Offset mismatch for FPoseBuilderScaleFactors::NegativeWidth");
static_assert(offsetof(FPoseBuilderScaleFactors, PositiveHeight) == 8, "Offset mismatch for FPoseBuilderScaleFactors::PositiveHeight");
static_assert(offsetof(FPoseBuilderScaleFactors, NegativeHeight) == 12, "Offset mismatch for FPoseBuilderScaleFactors::NegativeHeight");

// /Script/PoseBuilder.RigUnit_PoseBuilder
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_PoseBuilder
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* PoseBuilderAsset; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WorkData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PoseBuilder, PoseBuilderAsset) == 16, "Offset mismatch for FRigUnit_PoseBuilder::PoseBuilderAsset");
static_assert(offsetof(FRigUnit_PoseBuilder, WorkData) == 24, "Offset mismatch for FRigUnit_PoseBuilder::WorkData");

// /Script/PoseBuilder.RigUnit_PoseBuilder_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_PoseBuilder_WorkData
{
public:
    TArray<void*> CachedDrivers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedDriven; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedDeltaRefBases; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOperationDrivers; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOperationRelatives; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOperationRefSpaces; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0060
    TArray<void*> CachedCurves; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedDriverCurves; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedParentBones; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParentBoneOffset; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bInitialized; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    void* LastAsset; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t LastTotalDrivers; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::int32_t LastTotalDriven; // 0x00C4 (Size: 0x4, Type: IntProperty)
    std::int32_t LastTotalCurves; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::int32_t LastTotalDriverCurves; // 0x00CC (Size: 0x4, Type: IntProperty)
    std::int32_t LastTotalParentBones; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::uint32_t LastReorderVersion; // 0x00D4 (Size: 0x4, Type: UInt32Property)
    std::uint32_t LastBoneKeyHash; // 0x00D8 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, CachedDrivers) == 0, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::CachedDrivers");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, CachedDriven) == 16, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::CachedDriven");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, CachedDeltaRefBases) == 32, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::CachedDeltaRefBases");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, CachedOperationDrivers) == 48, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::CachedOperationDrivers");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, CachedOperationRelatives) == 64, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::CachedOperationRelatives");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, CachedOperationRefSpaces) == 80, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::CachedOperationRefSpaces");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, CachedCurves) == 112, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::CachedCurves");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, CachedDriverCurves) == 128, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::CachedDriverCurves");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, CachedParentBones) == 144, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::CachedParentBones");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, ParentBoneOffset) == 160, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::ParentBoneOffset");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, bInitialized) == 176, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::bInitialized");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, LastAsset) == 184, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::LastAsset");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, LastTotalDrivers) == 192, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::LastTotalDrivers");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, LastTotalDriven) == 196, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::LastTotalDriven");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, LastTotalCurves) == 200, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::LastTotalCurves");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, LastTotalDriverCurves) == 204, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::LastTotalDriverCurves");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, LastTotalParentBones) == 208, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::LastTotalParentBones");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, LastReorderVersion) == 212, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::LastReorderVersion");
static_assert(offsetof(FRigUnit_PoseBuilder_WorkData, LastBoneKeyHash) == 216, "Offset mismatch for FRigUnit_PoseBuilder_WorkData::LastBoneKeyHash");

// /Script/PoseBuilder.PoseBuilderAsset
// Kind: Class; super: DataAsset
class UPoseBuilderAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> KeyPoses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EditorState[0x338]; // 0x0038 (Size: 0x338, Type: StructProperty)
    std::uint8_t bMigratedLegacyPCOnLoad; // 0x0370 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPoseBuilderAsset, KeyPoses) == 40, "Offset mismatch for UPoseBuilderAsset::KeyPoses");
static_assert(offsetof(UPoseBuilderAsset, EditorState) == 56, "Offset mismatch for UPoseBuilderAsset::EditorState");
static_assert(offsetof(UPoseBuilderAsset, bMigratedLegacyPCOnLoad) == 880, "Offset mismatch for UPoseBuilderAsset::bMigratedLegacyPCOnLoad");
