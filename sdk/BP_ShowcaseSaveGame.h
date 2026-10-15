/**
 * decamp dumper generated SDK
 * Package: /CareerShowcase/DataTables/BP_ShowcaseSaveGame
 */
#pragma once
#include "Basic.h"

// /CareerShowcase/DataTables/BP_ShowcaseSaveGame.BP_ShowcaseSaveGame_C
// Kind: BlueprintGeneratedClass; super: SaveGame
class UBP_ShowcaseSaveGame_C
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    double Rotation; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Nudge[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBP_ShowcaseSaveGame_C, Rotation) == 56, "Offset mismatch for UBP_ShowcaseSaveGame_C::Rotation");
static_assert(offsetof(UBP_ShowcaseSaveGame_C, Nudge) == 64, "Offset mismatch for UBP_ShowcaseSaveGame_C::Nudge");
