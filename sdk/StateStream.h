/**
 * decamp dumper generated SDK
 * Package: /Script/StateStream
 */
#pragma once
#include "Basic.h"

// /Script/StateStream.StateStreamHandle
// Kind: ScriptStruct; super: none
struct FStateStreamHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateStream.TransformDynamicState
// Kind: ScriptStruct; super: none
struct FTransformDynamicState
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t LocalTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    TArray<void*> BoneTransforms; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Parent[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t bVisible; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTransformDynamicState, LocalTransform) == 16, "Offset mismatch for FTransformDynamicState::LocalTransform");
static_assert(offsetof(FTransformDynamicState, BoneTransforms) == 112, "Offset mismatch for FTransformDynamicState::BoneTransforms");
static_assert(offsetof(FTransformDynamicState, Parent) == 128, "Offset mismatch for FTransformDynamicState::Parent");
static_assert(offsetof(FTransformDynamicState, bVisible) == 144, "Offset mismatch for FTransformDynamicState::bVisible");

// /Script/StateStream.TransformHandle
// Kind: ScriptStruct; super: StateStreamHandle
struct FTransformHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StateStream.TransformStaticState
// Kind: ScriptStruct; super: none
struct FTransformStaticState
{
public:
    std::uint8_t Opaque[1];
};
