/**
 * decamp dumper generated SDK
 * Package: /Script/Sprites_AirSpriteRuntime
 */
#pragma once
#include "Basic.h"

// /Script/Sprites_AirSpriteRuntime.SpriteAirCreatureAnimInstance
// Kind: Class; super: SpriteCreatureAnimInstance
class USpriteAirCreatureAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bIsFleeing; // 0x0260 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackpack_Idle; // 0x0261 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEquipped_Idle; // 0x0262 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCooldown; // 0x0263 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPawnSkydiving; // 0x0264 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving; // 0x0265 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableSprings; // 0x0266 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0267
    double WalkPlayrate; // 0x0268 (Size: 0x8, Type: DoubleProperty)
    double RunPlayrate; // 0x0270 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEnterRun; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterWalk; // 0x0279 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterIdle; // 0x027A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpriteAirCreatureAnimInstance, bIsFleeing) == 608, "Offset mismatch for USpriteAirCreatureAnimInstance::bIsFleeing");
static_assert(offsetof(USpriteAirCreatureAnimInstance, bIsBackpack_Idle) == 609, "Offset mismatch for USpriteAirCreatureAnimInstance::bIsBackpack_Idle");
static_assert(offsetof(USpriteAirCreatureAnimInstance, bIsEquipped_Idle) == 610, "Offset mismatch for USpriteAirCreatureAnimInstance::bIsEquipped_Idle");
static_assert(offsetof(USpriteAirCreatureAnimInstance, bIsCooldown) == 611, "Offset mismatch for USpriteAirCreatureAnimInstance::bIsCooldown");
static_assert(offsetof(USpriteAirCreatureAnimInstance, bIsPawnSkydiving) == 612, "Offset mismatch for USpriteAirCreatureAnimInstance::bIsPawnSkydiving");
static_assert(offsetof(USpriteAirCreatureAnimInstance, bIsMoving) == 613, "Offset mismatch for USpriteAirCreatureAnimInstance::bIsMoving");
static_assert(offsetof(USpriteAirCreatureAnimInstance, bDisableSprings) == 614, "Offset mismatch for USpriteAirCreatureAnimInstance::bDisableSprings");
static_assert(offsetof(USpriteAirCreatureAnimInstance, WalkPlayrate) == 616, "Offset mismatch for USpriteAirCreatureAnimInstance::WalkPlayrate");
static_assert(offsetof(USpriteAirCreatureAnimInstance, RunPlayrate) == 624, "Offset mismatch for USpriteAirCreatureAnimInstance::RunPlayrate");
static_assert(offsetof(USpriteAirCreatureAnimInstance, bEnterRun) == 632, "Offset mismatch for USpriteAirCreatureAnimInstance::bEnterRun");
static_assert(offsetof(USpriteAirCreatureAnimInstance, bEnterWalk) == 633, "Offset mismatch for USpriteAirCreatureAnimInstance::bEnterWalk");
static_assert(offsetof(USpriteAirCreatureAnimInstance, bEnterIdle) == 634, "Offset mismatch for USpriteAirCreatureAnimInstance::bEnterIdle");
