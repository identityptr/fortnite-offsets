/**
 * decamp dumper generated SDK
 * Package: /RidingContent/Components/CreatureBaseRidableComponent
 */
#pragma once
#include "Basic.h"

// /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C
// Kind: BlueprintGeneratedClass; super: ControllableRidableComponent
class UCreatureBaseRidableComponent_C
{
public:
    std::uint8_t None[0x970]; // 0x0000 (Size: 0x970, Type: UnknownProperty)
    std::uint8_t UberGraphFrame[0x8]; // 0x0970 (Size: 0x8, Type: StructProperty)
    std::uint8_t T_CreatureIsBeingRidden[0x20]; // 0x0978 (Size: 0x20, Type: StructProperty)
    void* GE_CreatureIsBeingRidden; // 0x0998 (Size: 0x8, Type: ClassProperty)
    void* GE_CreatureIsBeingRidden_Passive; // 0x09A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDebugDisplay; // 0x09A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x09A9
    double DebugTickRate; // 0x09B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DebugServerRiderLocation[0x18]; // 0x09B8 (Size: 0x18, Type: StructProperty)
    double CapsuleRadiusOffset; // 0x09D0 (Size: 0x8, Type: DoubleProperty)
    double CapsuleHalfHeightOffset; // 0x09D8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t T_RidingSpecialAbility[0x20]; // 0x09E0 (Size: 0x20, Type: StructProperty)
    void* IdleAnim_Add; // 0x0A00 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCreatureBaseRidableComponent_C, None) == 0, "Offset mismatch for UCreatureBaseRidableComponent_C::None");
static_assert(offsetof(UCreatureBaseRidableComponent_C, UberGraphFrame) == 2416, "Offset mismatch for UCreatureBaseRidableComponent_C::UberGraphFrame");
static_assert(offsetof(UCreatureBaseRidableComponent_C, T_CreatureIsBeingRidden) == 2424, "Offset mismatch for UCreatureBaseRidableComponent_C::T_CreatureIsBeingRidden");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_CreatureIsBeingRidden) == 2456, "Offset mismatch for UCreatureBaseRidableComponent_C::GE_CreatureIsBeingRidden");
static_assert(offsetof(UCreatureBaseRidableComponent_C, GE_CreatureIsBeingRidden_Passive) == 2464, "Offset mismatch for UCreatureBaseRidableComponent_C::GE_CreatureIsBeingRidden_Passive");
static_assert(offsetof(UCreatureBaseRidableComponent_C, bDebugDisplay) == 2472, "Offset mismatch for UCreatureBaseRidableComponent_C::bDebugDisplay");
static_assert(offsetof(UCreatureBaseRidableComponent_C, DebugTickRate) == 2480, "Offset mismatch for UCreatureBaseRidableComponent_C::DebugTickRate");
static_assert(offsetof(UCreatureBaseRidableComponent_C, DebugServerRiderLocation) == 2488, "Offset mismatch for UCreatureBaseRidableComponent_C::DebugServerRiderLocation");
static_assert(offsetof(UCreatureBaseRidableComponent_C, CapsuleRadiusOffset) == 2512, "Offset mismatch for UCreatureBaseRidableComponent_C::CapsuleRadiusOffset");
static_assert(offsetof(UCreatureBaseRidableComponent_C, CapsuleHalfHeightOffset) == 2520, "Offset mismatch for UCreatureBaseRidableComponent_C::CapsuleHalfHeightOffset");
static_assert(offsetof(UCreatureBaseRidableComponent_C, T_RidingSpecialAbility) == 2528, "Offset mismatch for UCreatureBaseRidableComponent_C::T_RidingSpecialAbility");
static_assert(offsetof(UCreatureBaseRidableComponent_C, IdleAnim_Add) == 2560, "Offset mismatch for UCreatureBaseRidableComponent_C::IdleAnim_Add");
