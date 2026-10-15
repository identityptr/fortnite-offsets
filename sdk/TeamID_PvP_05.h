/**
 * decamp dumper generated SDK
 * Package: /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP_05
 */
#pragma once
#include "Basic.h"

// /Game/Characters/CharacterColorSwatches/TeamIdentification/TeamID_PvP_05.TeamID_PvP_05_C
// Kind: BlueprintGeneratedClass; super: FortTeamIdentification
class UTeamID_PvP_05_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HUDColor[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    void* CharacterAccessoryColorSwatch; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTeamID_PvP_05_C, HUDColor) == 40, "Offset mismatch for UTeamID_PvP_05_C::HUDColor");
static_assert(offsetof(UTeamID_PvP_05_C, CharacterAccessoryColorSwatch) == 48, "Offset mismatch for UTeamID_PvP_05_C::CharacterAccessoryColorSwatch");
