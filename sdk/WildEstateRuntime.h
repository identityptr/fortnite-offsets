/**
 * decamp dumper generated SDK
 * Package: /Script/WildEstateRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WildEstateRuntime.VoidSlideLayerAnimInstance
// Kind: Class; super: FortItemLayerAnimInstance
class UVoidSlideLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x5E0]; // 0x0000
    std::int32_t SeatIndex; // 0x05E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeat01SpawnProp; // 0x05E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSeat03SpawnProp; // 0x05E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSeat04SpawnProp; // 0x05E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSeatSwapped; // 0x05E7 (Size: 0x1, Type: BoolProperty)
    double TriggerTimeRemaining; // 0x05E8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bTriggerIdleBreak; // 0x05F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVoidSlideLayerAnimInstance, SeatIndex) == 1504, "Offset mismatch for UVoidSlideLayerAnimInstance::SeatIndex");
static_assert(offsetof(UVoidSlideLayerAnimInstance, bIsSeat01SpawnProp) == 1508, "Offset mismatch for UVoidSlideLayerAnimInstance::bIsSeat01SpawnProp");
static_assert(offsetof(UVoidSlideLayerAnimInstance, bIsSeat03SpawnProp) == 1509, "Offset mismatch for UVoidSlideLayerAnimInstance::bIsSeat03SpawnProp");
static_assert(offsetof(UVoidSlideLayerAnimInstance, bIsSeat04SpawnProp) == 1510, "Offset mismatch for UVoidSlideLayerAnimInstance::bIsSeat04SpawnProp");
static_assert(offsetof(UVoidSlideLayerAnimInstance, bSeatSwapped) == 1511, "Offset mismatch for UVoidSlideLayerAnimInstance::bSeatSwapped");
static_assert(offsetof(UVoidSlideLayerAnimInstance, TriggerTimeRemaining) == 1512, "Offset mismatch for UVoidSlideLayerAnimInstance::TriggerTimeRemaining");
static_assert(offsetof(UVoidSlideLayerAnimInstance, bTriggerIdleBreak) == 1520, "Offset mismatch for UVoidSlideLayerAnimInstance::bTriggerIdleBreak");

// /Script/WildEstateRuntime.VoidSlidePlayerComponentInterface
// Kind: Class; super: Interface
class UVoidSlidePlayerComponentInterface
{
public:
    std::uint8_t Opaque[1];
};
