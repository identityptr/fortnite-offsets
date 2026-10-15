/**
 * decamp dumper generated SDK
 * Package: /Script/LiveLinkControlRig
 */
#pragma once
#include "Basic.h"

// /Script/LiveLinkControlRig.RigUnit_LiveLinkBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_LiveLinkBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluateBasicValue
// Kind: ScriptStruct; super: RigUnit_LiveLinkBase
struct FRigUnit_LiveLinkEvaluateBasicValue
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SubjectName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t PropertyName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    float Value; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_LiveLinkEvaluateBasicValue, SubjectName) == 8, "Offset mismatch for FRigUnit_LiveLinkEvaluateBasicValue::SubjectName");
static_assert(offsetof(FRigUnit_LiveLinkEvaluateBasicValue, PropertyName) == 12, "Offset mismatch for FRigUnit_LiveLinkEvaluateBasicValue::PropertyName");
static_assert(offsetof(FRigUnit_LiveLinkEvaluateBasicValue, Value) == 16, "Offset mismatch for FRigUnit_LiveLinkEvaluateBasicValue::Value");

// /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluateInputDeviceValue
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_LiveLinkEvaluateInputDeviceValue
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName SubjectName; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t InputDeviceData[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_LiveLinkEvaluateInputDeviceValue, SubjectName) == 8, "Offset mismatch for FRigUnit_LiveLinkEvaluateInputDeviceValue::SubjectName");
static_assert(offsetof(FRigUnit_LiveLinkEvaluateInputDeviceValue, InputDeviceData) == 16, "Offset mismatch for FRigUnit_LiveLinkEvaluateInputDeviceValue::InputDeviceData");

// /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
// Kind: ScriptStruct; super: RigUnit_LiveLinkBase
struct FRigUnit_LiveLinkEvaluteFrameAnimation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SubjectName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDrawDebug; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t DebugColor[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t DebugDrawOffset[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t SubjectFrame[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameAnimation, SubjectName) == 8, "Offset mismatch for FRigUnit_LiveLinkEvaluteFrameAnimation::SubjectName");
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameAnimation, bDrawDebug) == 12, "Offset mismatch for FRigUnit_LiveLinkEvaluteFrameAnimation::bDrawDebug");
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameAnimation, DebugColor) == 16, "Offset mismatch for FRigUnit_LiveLinkEvaluteFrameAnimation::DebugColor");
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameAnimation, DebugDrawOffset) == 32, "Offset mismatch for FRigUnit_LiveLinkEvaluteFrameAnimation::DebugDrawOffset");
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameAnimation, SubjectFrame) == 128, "Offset mismatch for FRigUnit_LiveLinkEvaluteFrameAnimation::SubjectFrame");

// /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
// Kind: ScriptStruct; super: RigUnit_LiveLinkBase
struct FRigUnit_LiveLinkEvaluteFrameTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SubjectName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDrawDebug; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t DebugColor[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t DebugDrawOffset[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Transform[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameTransform, SubjectName) == 8, "Offset mismatch for FRigUnit_LiveLinkEvaluteFrameTransform::SubjectName");
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameTransform, bDrawDebug) == 12, "Offset mismatch for FRigUnit_LiveLinkEvaluteFrameTransform::bDrawDebug");
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameTransform, DebugColor) == 16, "Offset mismatch for FRigUnit_LiveLinkEvaluteFrameTransform::DebugColor");
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameTransform, DebugDrawOffset) == 32, "Offset mismatch for FRigUnit_LiveLinkEvaluteFrameTransform::DebugDrawOffset");
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameTransform, Transform) == 128, "Offset mismatch for FRigUnit_LiveLinkEvaluteFrameTransform::Transform");

// /Script/LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
// Kind: ScriptStruct; super: RigUnit_LiveLinkBase
struct FRigUnit_LiveLinkGetParameterValueByName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SubjectFrame[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ParameterName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    float Value; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_LiveLinkGetParameterValueByName, SubjectFrame) == 8, "Offset mismatch for FRigUnit_LiveLinkGetParameterValueByName::SubjectFrame");
static_assert(offsetof(FRigUnit_LiveLinkGetParameterValueByName, ParameterName) == 32, "Offset mismatch for FRigUnit_LiveLinkGetParameterValueByName::ParameterName");
static_assert(offsetof(FRigUnit_LiveLinkGetParameterValueByName, Value) == 36, "Offset mismatch for FRigUnit_LiveLinkGetParameterValueByName::Value");

// /Script/LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
// Kind: ScriptStruct; super: RigUnit_LiveLinkBase
struct FRigUnit_LiveLinkGetTransformByName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SubjectFrame[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t TransformName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t Space; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0025
    std::uint8_t Transform[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_LiveLinkGetTransformByName, SubjectFrame) == 8, "Offset mismatch for FRigUnit_LiveLinkGetTransformByName::SubjectFrame");
static_assert(offsetof(FRigUnit_LiveLinkGetTransformByName, TransformName) == 32, "Offset mismatch for FRigUnit_LiveLinkGetTransformByName::TransformName");
static_assert(offsetof(FRigUnit_LiveLinkGetTransformByName, Space) == 36, "Offset mismatch for FRigUnit_LiveLinkGetTransformByName::Space");
static_assert(offsetof(FRigUnit_LiveLinkGetTransformByName, Transform) == 48, "Offset mismatch for FRigUnit_LiveLinkGetTransformByName::Transform");
