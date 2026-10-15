/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/UI/DiscoveryShared/ActivityVideoCycleWidget_Tile
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/UI/DiscoveryShared/ActivityVideoCycleWidget_Tile.ActivityVideoCycleWidget_Tile_C
// Kind: WidgetBlueprintGeneratedClass; super: FortActivityVideoCycle
class UActivityVideoCycleWidget_Tile_C
{
public:
    std::uint8_t Pad_0000[0x3A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x03A0 (Size: 0x8, Type: StructProperty)
    void* AnimVideoOpacity; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOutroPlaying; // 0x03B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UActivityVideoCycleWidget_Tile_C, UberGraphFrame) == 928, "Offset mismatch for UActivityVideoCycleWidget_Tile_C::UberGraphFrame");
static_assert(offsetof(UActivityVideoCycleWidget_Tile_C, AnimVideoOpacity) == 936, "Offset mismatch for UActivityVideoCycleWidget_Tile_C::AnimVideoOpacity");
static_assert(offsetof(UActivityVideoCycleWidget_Tile_C, bOutroPlaying) == 944, "Offset mismatch for UActivityVideoCycleWidget_Tile_C::bOutroPlaying");
