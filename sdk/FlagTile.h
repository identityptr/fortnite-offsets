/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Competitive/FlagTile
 */
#pragma once
#include "Basic.h"

// /Game/UI/Competitive/FlagTile.FlagTile_C
// Kind: WidgetBlueprintGeneratedClass; super: FortFlagTileButton
class UFlagTile_C
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    FName IconParamName; // 0x15F8 (Size: 0x8, Type: NameProperty)
    void* SourceObject; // 0x1600 (Size: 0x8, Type: ObjectProperty)
    void* FlagImage; // 0x1608 (Size: 0x8, Type: ObjectProperty)
    void* Image_Active; // 0x1610 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFlagTile_C, IconParamName) == 5624, "Offset mismatch for UFlagTile_C::IconParamName");
static_assert(offsetof(UFlagTile_C, SourceObject) == 5632, "Offset mismatch for UFlagTile_C::SourceObject");
static_assert(offsetof(UFlagTile_C, FlagImage) == 5640, "Offset mismatch for UFlagTile_C::FlagImage");
static_assert(offsetof(UFlagTile_C, Image_Active) == 5648, "Offset mismatch for UFlagTile_C::Image_Active");
