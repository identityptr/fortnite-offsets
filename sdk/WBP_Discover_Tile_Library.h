/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/WBP_Discover_Tile_Library
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/WBP_Discover_Tile_Library.WBP_Discover_Tile_Library_C
// Kind: WidgetBlueprintGeneratedClass; super: FortActivityBrowserLibraryTile
class UWBP_Discover_Tile_Library_C
{
public:
    std::uint8_t Pad_0000[0x1650]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1650 (Size: 0x8, Type: StructProperty)
    void* WBP_CaptureForPostBufferUpdate; // 0x1658 (Size: 0x8, Type: ObjectProperty)
    void* Button_Library; // 0x1660 (Size: 0x8, Type: ObjectProperty)
    void* FortLibraryStorageItemViewModel; // 0x1668 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnLibraryTileReleased; // 0x1670 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLibraryTileClicked; // 0x1680 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWBP_Discover_Tile_Library_C, UberGraphFrame) == 5712, "Offset mismatch for UWBP_Discover_Tile_Library_C::UberGraphFrame");
static_assert(offsetof(UWBP_Discover_Tile_Library_C, WBP_CaptureForPostBufferUpdate) == 5720, "Offset mismatch for UWBP_Discover_Tile_Library_C::WBP_CaptureForPostBufferUpdate");
static_assert(offsetof(UWBP_Discover_Tile_Library_C, Button_Library) == 5728, "Offset mismatch for UWBP_Discover_Tile_Library_C::Button_Library");
static_assert(offsetof(UWBP_Discover_Tile_Library_C, FortLibraryStorageItemViewModel) == 5736, "Offset mismatch for UWBP_Discover_Tile_Library_C::FortLibraryStorageItemViewModel");
static_assert(offsetof(UWBP_Discover_Tile_Library_C, OnLibraryTileReleased) == 5744, "Offset mismatch for UWBP_Discover_Tile_Library_C::OnLibraryTileReleased");
static_assert(offsetof(UWBP_Discover_Tile_Library_C, OnLibraryTileClicked) == 5760, "Offset mismatch for UWBP_Discover_Tile_Library_C::OnLibraryTileClicked");
