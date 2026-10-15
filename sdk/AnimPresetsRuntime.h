/**
 * decamp dumper generated SDK
 * Package: /Script/AnimPresetsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AnimPresetsRuntime.AnimPreset_SingleAnimationData
// Kind: ScriptStruct; super: none
struct FAnimPreset_SingleAnimationData
{
public:
    void* Animation; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float PlayRate; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimPreset_SingleAnimationData, Animation) == 0, "Offset mismatch for FAnimPreset_SingleAnimationData::Animation");
static_assert(offsetof(FAnimPreset_SingleAnimationData, PlayRate) == 8, "Offset mismatch for FAnimPreset_SingleAnimationData::PlayRate");

// /Script/AnimPresetsRuntime.AnimPresetComponent
// Kind: Class; super: ActorComponent
class UAnimPresetComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TSoftClassPtr<void> AnimPreset; // 0x00C0 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UAnimPresetComponent, AnimPreset) == 192, "Offset mismatch for UAnimPresetComponent::AnimPreset");

// /Script/AnimPresetsRuntime.AnimPreset_BasicLocomotion
// Kind: Class; super: AnimPreset
class UAnimPreset_BasicLocomotion
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Idle[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t MoveForward[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t MoveBackward[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t MoveLeft[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t MoveRight[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAnimPreset_BasicLocomotion, Idle) == 40, "Offset mismatch for UAnimPreset_BasicLocomotion::Idle");
static_assert(offsetof(UAnimPreset_BasicLocomotion, MoveForward) == 56, "Offset mismatch for UAnimPreset_BasicLocomotion::MoveForward");
static_assert(offsetof(UAnimPreset_BasicLocomotion, MoveBackward) == 72, "Offset mismatch for UAnimPreset_BasicLocomotion::MoveBackward");
static_assert(offsetof(UAnimPreset_BasicLocomotion, MoveLeft) == 88, "Offset mismatch for UAnimPreset_BasicLocomotion::MoveLeft");
static_assert(offsetof(UAnimPreset_BasicLocomotion, MoveRight) == 104, "Offset mismatch for UAnimPreset_BasicLocomotion::MoveRight");

// /Script/AnimPresetsRuntime.GameFeatureAction_AnimPreset
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AnimPreset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftClassPtr<void> AnimBP_Preset_BasicLocomotion; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UGameFeatureAction_AnimPreset, AnimBP_Preset_BasicLocomotion) == 40, "Offset mismatch for UGameFeatureAction_AnimPreset::AnimBP_Preset_BasicLocomotion");
