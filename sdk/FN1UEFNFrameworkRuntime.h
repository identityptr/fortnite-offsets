/**
 * decamp dumper generated SDK
 * Package: /Script/FN1UEFNFrameworkRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FN1UEFNFrameworkRuntime.FortUserOptionComponent_TickRate
// Kind: Class; super: FortUserOptionContainerComponent
class UFortUserOptionComponent_TickRate
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t DesiredTickRate; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DesiredPhysicsTickRate; // 0x0151 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortUserOptionComponent_TickRate, DesiredTickRate) == 336, "Offset mismatch for UFortUserOptionComponent_TickRate::DesiredTickRate");
static_assert(offsetof(UFortUserOptionComponent_TickRate, DesiredPhysicsTickRate) == 337, "Offset mismatch for UFortUserOptionComponent_TickRate::DesiredPhysicsTickRate");
