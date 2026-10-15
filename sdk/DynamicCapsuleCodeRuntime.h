/**
 * decamp dumper generated SDK
 * Package: /Script/DynamicCapsuleCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleEntry
// Kind: ScriptStruct; super: none
struct FDynamicCapsuleEntry
{
public:
    std::uint8_t Tag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t State[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDynamicCapsuleEntry, Tag) == 0, "Offset mismatch for FDynamicCapsuleEntry::Tag");
static_assert(offsetof(FDynamicCapsuleEntry, State) == 8, "Offset mismatch for FDynamicCapsuleEntry::State");

// /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleState
// Kind: ScriptStruct; super: none
struct FDynamicCapsuleState
{
public:
    float CapsuleRadius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CapsuleHalfHeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    double RelativeMeshHeight; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDynamicCapsuleState, CapsuleRadius) == 0, "Offset mismatch for FDynamicCapsuleState::CapsuleRadius");
static_assert(offsetof(FDynamicCapsuleState, CapsuleHalfHeight) == 4, "Offset mismatch for FDynamicCapsuleState::CapsuleHalfHeight");
static_assert(offsetof(FDynamicCapsuleState, RelativeMeshHeight) == 8, "Offset mismatch for FDynamicCapsuleState::RelativeMeshHeight");

// /Script/DynamicCapsuleCodeRuntime.AnimNotifyState_SetCapsuleSize
// Kind: Class; super: AnimNotifyState
class UAnimNotifyState_SetCapsuleSize
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float TargetCapsuleRadius; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float TargetCapsuleHalfHeight; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAdjustRelativeMeshHeight; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    float TargetRelativeMeshHeight; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CapsuleSizeTag[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAnimNotifyState_SetCapsuleSize, TargetCapsuleRadius) == 48, "Offset mismatch for UAnimNotifyState_SetCapsuleSize::TargetCapsuleRadius");
static_assert(offsetof(UAnimNotifyState_SetCapsuleSize, TargetCapsuleHalfHeight) == 52, "Offset mismatch for UAnimNotifyState_SetCapsuleSize::TargetCapsuleHalfHeight");
static_assert(offsetof(UAnimNotifyState_SetCapsuleSize, bAdjustRelativeMeshHeight) == 56, "Offset mismatch for UAnimNotifyState_SetCapsuleSize::bAdjustRelativeMeshHeight");
static_assert(offsetof(UAnimNotifyState_SetCapsuleSize, TargetRelativeMeshHeight) == 60, "Offset mismatch for UAnimNotifyState_SetCapsuleSize::TargetRelativeMeshHeight");
static_assert(offsetof(UAnimNotifyState_SetCapsuleSize, CapsuleSizeTag) == 64, "Offset mismatch for UAnimNotifyState_SetCapsuleSize::CapsuleSizeTag");

// /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
// Kind: Class; super: FortPawnComponent
class UDynamicCapsuleComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> DynamicCapsuleEntryStack; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ReplicatedCapsuleState[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDynamicCapsuleComponent, DynamicCapsuleEntryStack) == 200, "Offset mismatch for UDynamicCapsuleComponent::DynamicCapsuleEntryStack");
static_assert(offsetof(UDynamicCapsuleComponent, ReplicatedCapsuleState) == 216, "Offset mismatch for UDynamicCapsuleComponent::ReplicatedCapsuleState");
