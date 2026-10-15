/**
 * decamp dumper generated SDK
 * Package: /Script/FMDanceSpotlightUI
 */
#pragma once
#include "Basic.h"

// /Script/FMDanceSpotlightUI.SpotlightQuickMix
// Kind: Class; super: FortHUDElementWidget
class USpotlightQuickMix
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    TArray<void*> DanceSlots; // 0x0370 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentDanceIndex; // 0x0380 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0384
    void* FortPC; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* CurrentPawn; // 0x0390 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpotlightQuickMix, DanceSlots) == 880, "Offset mismatch for USpotlightQuickMix::DanceSlots");
static_assert(offsetof(USpotlightQuickMix, CurrentDanceIndex) == 896, "Offset mismatch for USpotlightQuickMix::CurrentDanceIndex");
static_assert(offsetof(USpotlightQuickMix, FortPC) == 904, "Offset mismatch for USpotlightQuickMix::FortPC");
static_assert(offsetof(USpotlightQuickMix, CurrentPawn) == 912, "Offset mismatch for USpotlightQuickMix::CurrentPawn");
