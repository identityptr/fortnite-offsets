/**
 * decamp dumper generated SDK
 * Package: /Script/YokeHopPlatterUI
 */
#pragma once
#include "Basic.h"

// /Script/YokeHopPlatterUI.FortControllerComponent_YokeHopPlatter
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_YokeHopPlatter
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> PhasesToShowSpawnLocationOnMap; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PhaseToResetMapFocusToCenter; // 0x00D8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortControllerComponent_YokeHopPlatter, PhasesToShowSpawnLocationOnMap) == 200, "Offset mismatch for UFortControllerComponent_YokeHopPlatter::PhasesToShowSpawnLocationOnMap");
static_assert(offsetof(UFortControllerComponent_YokeHopPlatter, PhaseToResetMapFocusToCenter) == 216, "Offset mismatch for UFortControllerComponent_YokeHopPlatter::PhaseToResetMapFocusToCenter");

// /Script/YokeHopPlatterUI.YokeHopPlatter_StormInfillVM
// Kind: Class; super: FortPerUserViewModel
class UYokeHopPlatter_StormInfillVM
{
public:
    std::uint8_t Opaque[1];
};
