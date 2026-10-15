/**
 * decamp dumper generated SDK
 * Package: /Script/ControlRigSpline
 */
#pragma once
#include "Basic.h"

// /Script/ControlRigSpline.ControlRigSpline
// Kind: ScriptStruct; super: none
struct FControlRigSpline
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRigSpline.ControlRigSplineImpl
// Kind: ScriptStruct; super: none
struct FControlRigSplineImpl
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBase
struct FRigUnit_ClosestParameterFromControlRigSpline
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Spline[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float U; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, Spline) == 8, "Offset mismatch for FRigUnit_ClosestParameterFromControlRigSpline::Spline");
static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, Position) == 32, "Offset mismatch for FRigUnit_ClosestParameterFromControlRigSpline::Position");
static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, U) == 56, "Offset mismatch for FRigUnit_ClosestParameterFromControlRigSpline::U");

// /Script/ControlRigSpline.RigUnit_ControlRigSplineBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ControlRigSplineBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRigSpline.RigUnit_ControlRigSplineBaseMutable
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_ControlRigSplineBaseMutable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ControlRigSplineBaseMutable, ExecutePin) == 8, "Offset mismatch for FRigUnit_ControlRigSplineBaseMutable::ExecutePin");

// /Script/ControlRigSpline.RigUnit_ControlRigSplineFromPoints
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBase
struct FRigUnit_ControlRigSplineFromPoints
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Points; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SplineMode; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bClosed; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001A
    std::int32_t SamplesPerSegment; // 0x001C (Size: 0x4, Type: IntProperty)
    float Compression; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Stretch; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Spline[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Points) == 8, "Offset mismatch for FRigUnit_ControlRigSplineFromPoints::Points");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, SplineMode) == 24, "Offset mismatch for FRigUnit_ControlRigSplineFromPoints::SplineMode");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, bClosed) == 25, "Offset mismatch for FRigUnit_ControlRigSplineFromPoints::bClosed");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, SamplesPerSegment) == 28, "Offset mismatch for FRigUnit_ControlRigSplineFromPoints::SamplesPerSegment");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Compression) == 32, "Offset mismatch for FRigUnit_ControlRigSplineFromPoints::Compression");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Stretch) == 36, "Offset mismatch for FRigUnit_ControlRigSplineFromPoints::Stretch");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Spline) == 40, "Offset mismatch for FRigUnit_ControlRigSplineFromPoints::Spline");

// /Script/ControlRigSpline.RigUnit_ControlRigSplineFromTransforms
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBase
struct FRigUnit_ControlRigSplineFromTransforms
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Transforms; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SplineMode; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bClosed; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001A
    std::int32_t SamplesPerSegment; // 0x001C (Size: 0x4, Type: IntProperty)
    float Compression; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Stretch; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Spline[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ControlRigSplineFromTransforms, Transforms) == 8, "Offset mismatch for FRigUnit_ControlRigSplineFromTransforms::Transforms");
static_assert(offsetof(FRigUnit_ControlRigSplineFromTransforms, SplineMode) == 24, "Offset mismatch for FRigUnit_ControlRigSplineFromTransforms::SplineMode");
static_assert(offsetof(FRigUnit_ControlRigSplineFromTransforms, bClosed) == 25, "Offset mismatch for FRigUnit_ControlRigSplineFromTransforms::bClosed");
static_assert(offsetof(FRigUnit_ControlRigSplineFromTransforms, SamplesPerSegment) == 28, "Offset mismatch for FRigUnit_ControlRigSplineFromTransforms::SamplesPerSegment");
static_assert(offsetof(FRigUnit_ControlRigSplineFromTransforms, Compression) == 32, "Offset mismatch for FRigUnit_ControlRigSplineFromTransforms::Compression");
static_assert(offsetof(FRigUnit_ControlRigSplineFromTransforms, Stretch) == 36, "Offset mismatch for FRigUnit_ControlRigSplineFromTransforms::Stretch");
static_assert(offsetof(FRigUnit_ControlRigSplineFromTransforms, Spline) == 40, "Offset mismatch for FRigUnit_ControlRigSplineFromTransforms::Spline");

// /Script/ControlRigSpline.RigUnit_DrawControlRigSpline
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBaseMutable
struct FRigUnit_DrawControlRigSpline
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Spline[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::int32_t Detail; // 0x003C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_DrawControlRigSpline, Spline) == 16, "Offset mismatch for FRigUnit_DrawControlRigSpline::Spline");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Color) == 40, "Offset mismatch for FRigUnit_DrawControlRigSpline::Color");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Thickness) == 56, "Offset mismatch for FRigUnit_DrawControlRigSpline::Thickness");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Detail) == 60, "Offset mismatch for FRigUnit_DrawControlRigSpline::Detail");

// /Script/ControlRigSpline.RigUnit_FitChainToSplineCurve
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBaseMutable
struct FRigUnit_FitChainToSplineCurve
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Spline[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Alignment; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    float Minimum; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Maximum; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::int32_t SamplingPrecision; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleVectorPosition[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    TArray<void*> Rotations; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RotationEaseType; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00A1
    float Weight; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00A9
    std::uint8_t DebugSettings[0x90]; // 0x00B0 (Size: 0x90, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Items) == 16, "Offset mismatch for FRigUnit_FitChainToSplineCurve::Items");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Spline) == 32, "Offset mismatch for FRigUnit_FitChainToSplineCurve::Spline");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Alignment) == 56, "Offset mismatch for FRigUnit_FitChainToSplineCurve::Alignment");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Minimum) == 60, "Offset mismatch for FRigUnit_FitChainToSplineCurve::Minimum");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Maximum) == 64, "Offset mismatch for FRigUnit_FitChainToSplineCurve::Maximum");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, SamplingPrecision) == 68, "Offset mismatch for FRigUnit_FitChainToSplineCurve::SamplingPrecision");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, PrimaryAxis) == 72, "Offset mismatch for FRigUnit_FitChainToSplineCurve::PrimaryAxis");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, SecondaryAxis) == 96, "Offset mismatch for FRigUnit_FitChainToSplineCurve::SecondaryAxis");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, PoleVectorPosition) == 120, "Offset mismatch for FRigUnit_FitChainToSplineCurve::PoleVectorPosition");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Rotations) == 144, "Offset mismatch for FRigUnit_FitChainToSplineCurve::Rotations");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, RotationEaseType) == 160, "Offset mismatch for FRigUnit_FitChainToSplineCurve::RotationEaseType");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Weight) == 164, "Offset mismatch for FRigUnit_FitChainToSplineCurve::Weight");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, bPropagateToChildren) == 168, "Offset mismatch for FRigUnit_FitChainToSplineCurve::bPropagateToChildren");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, DebugSettings) == 176, "Offset mismatch for FRigUnit_FitChainToSplineCurve::DebugSettings");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, WorkData) == 320, "Offset mismatch for FRigUnit_FitChainToSplineCurve::WorkData");

// /Script/ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBaseMutable
struct FRigUnit_FitChainToSplineCurveItemArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Spline[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Alignment; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    float Minimum; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Maximum; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::int32_t SamplingPrecision; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleVectorPosition[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    TArray<void*> Rotations; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RotationEaseType; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00A1
    float Weight; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00A9
    std::uint8_t DebugSettings[0x90]; // 0x00B0 (Size: 0x90, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Items) == 16, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::Items");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Spline) == 32, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::Spline");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Alignment) == 56, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::Alignment");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Minimum) == 60, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::Minimum");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Maximum) == 64, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::Maximum");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, SamplingPrecision) == 68, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::SamplingPrecision");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, PrimaryAxis) == 72, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::PrimaryAxis");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, SecondaryAxis) == 96, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::SecondaryAxis");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, PoleVectorPosition) == 120, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::PoleVectorPosition");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Rotations) == 144, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::Rotations");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, RotationEaseType) == 160, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::RotationEaseType");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Weight) == 164, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::Weight");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, bPropagateToChildren) == 168, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::bPropagateToChildren");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, DebugSettings) == 176, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::DebugSettings");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, WorkData) == 320, "Offset mismatch for FRigUnit_FitChainToSplineCurveItemArray::WorkData");

// /Script/ControlRigSpline.RigUnit_FitSplineCurveToChain
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBaseMutable
struct FRigUnit_FitSplineCurveToChain
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Spline[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_FitSplineCurveToChain, Items) == 16, "Offset mismatch for FRigUnit_FitSplineCurveToChain::Items");
static_assert(offsetof(FRigUnit_FitSplineCurveToChain, Spline) == 32, "Offset mismatch for FRigUnit_FitSplineCurveToChain::Spline");

// /Script/ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBaseMutable
struct FRigUnit_FitSplineCurveToChainItemArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Spline[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_FitSplineCurveToChainItemArray, Items) == 16, "Offset mismatch for FRigUnit_FitSplineCurveToChainItemArray::Items");
static_assert(offsetof(FRigUnit_FitSplineCurveToChainItemArray, Spline) == 32, "Offset mismatch for FRigUnit_FitSplineCurveToChainItemArray::Spline");

// /Script/ControlRigSpline.RigUnit_GetLengthAtParamControlRigSpline
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBase
struct FRigUnit_GetLengthAtParamControlRigSpline
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Spline[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float U; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Length; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_GetLengthAtParamControlRigSpline, Spline) == 8, "Offset mismatch for FRigUnit_GetLengthAtParamControlRigSpline::Spline");
static_assert(offsetof(FRigUnit_GetLengthAtParamControlRigSpline, U) == 32, "Offset mismatch for FRigUnit_GetLengthAtParamControlRigSpline::U");
static_assert(offsetof(FRigUnit_GetLengthAtParamControlRigSpline, Length) == 36, "Offset mismatch for FRigUnit_GetLengthAtParamControlRigSpline::Length");

// /Script/ControlRigSpline.RigUnit_GetLengthControlRigSpline
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBase
struct FRigUnit_GetLengthControlRigSpline
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Spline[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float Length; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_GetLengthControlRigSpline, Spline) == 8, "Offset mismatch for FRigUnit_GetLengthControlRigSpline::Spline");
static_assert(offsetof(FRigUnit_GetLengthControlRigSpline, Length) == 32, "Offset mismatch for FRigUnit_GetLengthControlRigSpline::Length");

// /Script/ControlRigSpline.RigUnit_ParameterAtPercentage
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBase
struct FRigUnit_ParameterAtPercentage
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Spline[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float Percentage; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float U; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_ParameterAtPercentage, Spline) == 8, "Offset mismatch for FRigUnit_ParameterAtPercentage::Spline");
static_assert(offsetof(FRigUnit_ParameterAtPercentage, Percentage) == 32, "Offset mismatch for FRigUnit_ParameterAtPercentage::Percentage");
static_assert(offsetof(FRigUnit_ParameterAtPercentage, U) == 36, "Offset mismatch for FRigUnit_ParameterAtPercentage::U");

// /Script/ControlRigSpline.RigUnit_PositionFromControlRigSpline
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBase
struct FRigUnit_PositionFromControlRigSpline
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Spline[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float U; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    std::uint8_t Position[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, Spline) == 8, "Offset mismatch for FRigUnit_PositionFromControlRigSpline::Spline");
static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, U) == 32, "Offset mismatch for FRigUnit_PositionFromControlRigSpline::U");
static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, Position) == 40, "Offset mismatch for FRigUnit_PositionFromControlRigSpline::Position");

// /Script/ControlRigSpline.RigUnit_SetSplinePoints
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBaseMutable
struct FRigUnit_SetSplinePoints
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Points; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Spline[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetSplinePoints, Points) == 16, "Offset mismatch for FRigUnit_SetSplinePoints::Points");
static_assert(offsetof(FRigUnit_SetSplinePoints, Spline) == 32, "Offset mismatch for FRigUnit_SetSplinePoints::Spline");

// /Script/ControlRigSpline.RigUnit_SetSplineTransforms
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBaseMutable
struct FRigUnit_SetSplineTransforms
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Transforms; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Spline[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetSplineTransforms, Transforms) == 16, "Offset mismatch for FRigUnit_SetSplineTransforms::Transforms");
static_assert(offsetof(FRigUnit_SetSplineTransforms, Spline) == 32, "Offset mismatch for FRigUnit_SetSplineTransforms::Spline");

// /Script/ControlRigSpline.RigUnit_SplineConstraint
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBaseMutable
struct FRigUnit_SplineConstraint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Spline[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Alignment; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    float Minimum; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Maximum; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0044
    std::uint8_t PrimaryAxis[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t bPropagateToChildren; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0079
    std::uint8_t WorkData[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SplineConstraint, Items) == 16, "Offset mismatch for FRigUnit_SplineConstraint::Items");
static_assert(offsetof(FRigUnit_SplineConstraint, Spline) == 32, "Offset mismatch for FRigUnit_SplineConstraint::Spline");
static_assert(offsetof(FRigUnit_SplineConstraint, Alignment) == 56, "Offset mismatch for FRigUnit_SplineConstraint::Alignment");
static_assert(offsetof(FRigUnit_SplineConstraint, Minimum) == 60, "Offset mismatch for FRigUnit_SplineConstraint::Minimum");
static_assert(offsetof(FRigUnit_SplineConstraint, Maximum) == 64, "Offset mismatch for FRigUnit_SplineConstraint::Maximum");
static_assert(offsetof(FRigUnit_SplineConstraint, PrimaryAxis) == 72, "Offset mismatch for FRigUnit_SplineConstraint::PrimaryAxis");
static_assert(offsetof(FRigUnit_SplineConstraint, SecondaryAxis) == 96, "Offset mismatch for FRigUnit_SplineConstraint::SecondaryAxis");
static_assert(offsetof(FRigUnit_SplineConstraint, bPropagateToChildren) == 120, "Offset mismatch for FRigUnit_SplineConstraint::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SplineConstraint, WorkData) == 128, "Offset mismatch for FRigUnit_SplineConstraint::WorkData");

// /Script/ControlRigSpline.RigUnit_SplineConstraint_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_SplineConstraint_WorkData
{
public:
    float ChainLength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> ItemTransforms; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemSegments; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedItems; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SplineConstraint_WorkData, ChainLength) == 0, "Offset mismatch for FRigUnit_SplineConstraint_WorkData::ChainLength");
static_assert(offsetof(FRigUnit_SplineConstraint_WorkData, ItemTransforms) == 8, "Offset mismatch for FRigUnit_SplineConstraint_WorkData::ItemTransforms");
static_assert(offsetof(FRigUnit_SplineConstraint_WorkData, ItemSegments) == 24, "Offset mismatch for FRigUnit_SplineConstraint_WorkData::ItemSegments");
static_assert(offsetof(FRigUnit_SplineConstraint_WorkData, CachedItems) == 40, "Offset mismatch for FRigUnit_SplineConstraint_WorkData::CachedItems");

// /Script/ControlRigSpline.RigUnit_TangentFromControlRigSpline
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBase
struct FRigUnit_TangentFromControlRigSpline
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Spline[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float U; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    std::uint8_t Tangent[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, Spline) == 8, "Offset mismatch for FRigUnit_TangentFromControlRigSpline::Spline");
static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, U) == 32, "Offset mismatch for FRigUnit_TangentFromControlRigSpline::U");
static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, Tangent) == 40, "Offset mismatch for FRigUnit_TangentFromControlRigSpline::Tangent");

// /Script/ControlRigSpline.RigUnit_TransformFromControlRigSpline
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBase
struct FRigUnit_TransformFromControlRigSpline
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Spline[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t UpVector[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float Roll; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float U; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Transform[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Spline) == 8, "Offset mismatch for FRigUnit_TransformFromControlRigSpline::Spline");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, UpVector) == 32, "Offset mismatch for FRigUnit_TransformFromControlRigSpline::UpVector");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Roll) == 56, "Offset mismatch for FRigUnit_TransformFromControlRigSpline::Roll");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, U) == 60, "Offset mismatch for FRigUnit_TransformFromControlRigSpline::U");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Transform) == 64, "Offset mismatch for FRigUnit_TransformFromControlRigSpline::Transform");

// /Script/ControlRigSpline.RigUnit_TransformFromControlRigSpline2
// Kind: ScriptStruct; super: RigUnit_ControlRigSplineBase
struct FRigUnit_TransformFromControlRigSpline2
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Spline[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float U; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    std::uint8_t PrimaryAxis[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t Transform[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TransformFromControlRigSpline2, Spline) == 8, "Offset mismatch for FRigUnit_TransformFromControlRigSpline2::Spline");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline2, U) == 32, "Offset mismatch for FRigUnit_TransformFromControlRigSpline2::U");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline2, PrimaryAxis) == 40, "Offset mismatch for FRigUnit_TransformFromControlRigSpline2::PrimaryAxis");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline2, SecondaryAxis) == 64, "Offset mismatch for FRigUnit_TransformFromControlRigSpline2::SecondaryAxis");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline2, Transform) == 96, "Offset mismatch for FRigUnit_TransformFromControlRigSpline2::Transform");
