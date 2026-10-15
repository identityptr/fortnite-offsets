/**
 * decamp dumper generated SDK
 * Package: /Game/AI/NavAreas/FortNavArea_JumpDown
 */
#pragma once
#include "Basic.h"

// /Game/AI/NavAreas/FortNavArea_JumpDown.FortNavArea_JumpDown_C
// Kind: BlueprintGeneratedClass; super: FortNavArea
class UFortNavArea_JumpDown_C
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bObstacle; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bSmashable (shared storage)
};

static_assert(offsetof(UFortNavArea_JumpDown_C, bObstacle) == 72, "Offset mismatch for UFortNavArea_JumpDown_C::bObstacle");
