/**
 * decamp dumper generated SDK
 * Package: /Script/IKRigUAF
 */
#pragma once
#include "Basic.h"

// /Script/IKRigUAF.IKRetargetWorkData
// Kind: ScriptStruct; super: none
struct FIKRetargetWorkData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/IKRigUAF.RigUnit_UAFIKRetargeter
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_UAFIKRetargeter
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SourcePose[0xE0]; // 0x0008 (Size: 0xE0, Type: StructProperty)
    std::uint8_t TargetAnimGraphRefPose[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    void* IKRetargetAsset; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CustomRetargetProfile[0xD8]; // 0x00F8 (Size: 0xD8, Type: StructProperty)
    TArray<void*> OverrideSetNames; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetPose[0xE0]; // 0x01E0 (Size: 0xE0, Type: StructProperty)
    std::uint8_t ExecuteContext[0x110]; // 0x02C0 (Size: 0x110, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x03D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_UAFIKRetargeter, SourcePose) == 8, "Offset mismatch for FRigUnit_UAFIKRetargeter::SourcePose");
static_assert(offsetof(FRigUnit_UAFIKRetargeter, TargetAnimGraphRefPose) == 232, "Offset mismatch for FRigUnit_UAFIKRetargeter::TargetAnimGraphRefPose");
static_assert(offsetof(FRigUnit_UAFIKRetargeter, IKRetargetAsset) == 240, "Offset mismatch for FRigUnit_UAFIKRetargeter::IKRetargetAsset");
static_assert(offsetof(FRigUnit_UAFIKRetargeter, CustomRetargetProfile) == 248, "Offset mismatch for FRigUnit_UAFIKRetargeter::CustomRetargetProfile");
static_assert(offsetof(FRigUnit_UAFIKRetargeter, OverrideSetNames) == 464, "Offset mismatch for FRigUnit_UAFIKRetargeter::OverrideSetNames");
static_assert(offsetof(FRigUnit_UAFIKRetargeter, TargetPose) == 480, "Offset mismatch for FRigUnit_UAFIKRetargeter::TargetPose");
static_assert(offsetof(FRigUnit_UAFIKRetargeter, ExecuteContext) == 704, "Offset mismatch for FRigUnit_UAFIKRetargeter::ExecuteContext");
static_assert(offsetof(FRigUnit_UAFIKRetargeter, WorkData) == 976, "Offset mismatch for FRigUnit_UAFIKRetargeter::WorkData");

// /Script/IKRigUAF.RigUnit_UAFIKRetargeter_v2
// Kind: ScriptStruct; super: RigUnit_AnimNextBase
struct FRigUnit_UAFIKRetargeter_v2
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SourceValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    void* IKRetargetAsset; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CustomRetargetProfile[0xD8]; // 0x0020 (Size: 0xD8, Type: StructProperty)
    TArray<void*> OverrideSetNames; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Result[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExecuteContext[0x110]; // 0x0120 (Size: 0x110, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0230 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_UAFIKRetargeter_v2, SourceValue) == 8, "Offset mismatch for FRigUnit_UAFIKRetargeter_v2::SourceValue");
static_assert(offsetof(FRigUnit_UAFIKRetargeter_v2, IKRetargetAsset) == 24, "Offset mismatch for FRigUnit_UAFIKRetargeter_v2::IKRetargetAsset");
static_assert(offsetof(FRigUnit_UAFIKRetargeter_v2, CustomRetargetProfile) == 32, "Offset mismatch for FRigUnit_UAFIKRetargeter_v2::CustomRetargetProfile");
static_assert(offsetof(FRigUnit_UAFIKRetargeter_v2, OverrideSetNames) == 248, "Offset mismatch for FRigUnit_UAFIKRetargeter_v2::OverrideSetNames");
static_assert(offsetof(FRigUnit_UAFIKRetargeter_v2, Result) == 264, "Offset mismatch for FRigUnit_UAFIKRetargeter_v2::Result");
static_assert(offsetof(FRigUnit_UAFIKRetargeter_v2, ExecuteContext) == 288, "Offset mismatch for FRigUnit_UAFIKRetargeter_v2::ExecuteContext");
static_assert(offsetof(FRigUnit_UAFIKRetargeter_v2, WorkData) == 560, "Offset mismatch for FRigUnit_UAFIKRetargeter_v2::WorkData");

// /Script/IKRigUAF.UAFIKRigRetargetAnimOp
// Kind: ScriptStruct; super: UAFAnimOp
struct FUAFIKRigRetargetAnimOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NumInputs; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumOutputs; // 0x0009 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUAFIKRigRetargetAnimOp, NumInputs) == 8, "Offset mismatch for FUAFIKRigRetargetAnimOp::NumInputs");
static_assert(offsetof(FUAFIKRigRetargetAnimOp, NumOutputs) == 9, "Offset mismatch for FUAFIKRigRetargetAnimOp::NumOutputs");

// /Script/IKRigUAF.UAFIKRigRetargetMethodDesc
// Kind: ScriptStruct; super: UAFRetargetMethodDesc
struct FUAFIKRigRetargetMethodDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t IKRetargeter[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t VariableBindings[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFIKRigRetargetMethodDesc, IKRetargeter) == 8, "Offset mismatch for FUAFIKRigRetargetMethodDesc::IKRetargeter");
static_assert(offsetof(FUAFIKRigRetargetMethodDesc, VariableBindings) == 32, "Offset mismatch for FUAFIKRigRetargetMethodDesc::VariableBindings");
