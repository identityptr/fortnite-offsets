/**
 * decamp dumper generated SDK
 * Package: /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition
 */
#pragma once
#include "Basic.h"

// /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C
// Kind: BlueprintGeneratedClass; super: Actor
class UCameraAnimationTransition_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    void* DefaultSceneRoot; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0280
    std::uint8_t CameraState; // 0x0290 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCameraAnimationTransition_C, UberGraphFrame) == 624, "Offset mismatch for UCameraAnimationTransition_C::UberGraphFrame");
static_assert(offsetof(UCameraAnimationTransition_C, DefaultSceneRoot) == 632, "Offset mismatch for UCameraAnimationTransition_C::DefaultSceneRoot");
static_assert(offsetof(UCameraAnimationTransition_C, CameraState) == 656, "Offset mismatch for UCameraAnimationTransition_C::CameraState");
