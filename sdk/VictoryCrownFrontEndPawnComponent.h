/**
 * decamp dumper generated SDK
 * Package: /VictoryCrownsAmbience/Items/VictoryCrownFrontEndPawnComponent
 */
#pragma once
#include "Basic.h"

// /VictoryCrownsAmbience/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C
// Kind: BlueprintGeneratedClass; super: FortPawnComponent_VictoryCrownsFrontEnd
class UVictoryCrownFrontEndPawnComponent_C
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t CrownFXCueTag[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    void* AthenaPawn; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AccountHasCrown; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AppliedCrownFX; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WatchingStat; // 0x00FA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, UberGraphFrame) == 224, "Offset mismatch for UVictoryCrownFrontEndPawnComponent_C::UberGraphFrame");
static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, CrownFXCueTag) == 232, "Offset mismatch for UVictoryCrownFrontEndPawnComponent_C::CrownFXCueTag");
static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, AthenaPawn) == 240, "Offset mismatch for UVictoryCrownFrontEndPawnComponent_C::AthenaPawn");
static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, AccountHasCrown) == 248, "Offset mismatch for UVictoryCrownFrontEndPawnComponent_C::AccountHasCrown");
static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, AppliedCrownFX) == 249, "Offset mismatch for UVictoryCrownFrontEndPawnComponent_C::AppliedCrownFX");
static_assert(offsetof(UVictoryCrownFrontEndPawnComponent_C, WatchingStat) == 250, "Offset mismatch for UVictoryCrownFrontEndPawnComponent_C::WatchingStat");
