/**
 * decamp dumper generated SDK
 * Package: /Script/DelMarRendering
 */
#pragma once
#include "Basic.h"

// /Script/DelMarRendering.DelMarMaterialFXSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UDelMarMaterialFXSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* GameplayMPC; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarMaterialFXSubsystem, GameplayMPC) == 72, "Offset mismatch for UDelMarMaterialFXSubsystem::GameplayMPC");
