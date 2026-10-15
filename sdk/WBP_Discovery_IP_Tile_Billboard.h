/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/Tiles/Billboard/WBP_Discovery_IP_Tile_Billboard
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/Tiles/Billboard/WBP_Discovery_IP_Tile_Billboard.WBP_Discovery_IP_Tile_Billboard_C
// Kind: WidgetBlueprintGeneratedClass; super: FortActivityTileDetailsDisplay
class UWBP_Discovery_IP_Tile_Billboard_C
{
public:
    std::uint8_t Pad_0000[0x1840]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1840 (Size: 0x8, Type: StructProperty)
    void* WBP_CaptureForPostBufferUpdate; // 0x1848 (Size: 0x8, Type: ObjectProperty)
    void* SqueegeeInjectionSlot; // 0x1850 (Size: 0x8, Type: ObjectProperty)
    void* MinSize; // 0x1858 (Size: 0x8, Type: ObjectProperty)
    void* GP_Root; // 0x1860 (Size: 0x8, Type: ObjectProperty)
    void* Billboard_Title; // 0x1868 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x1870
    void* Billboard_Description; // 0x1880 (Size: 0x8, Type: ObjectProperty)
    void* Billboard_Countdown; // 0x1888 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x1890
    void* Billboard_CCU; // 0x1898 (Size: 0x8, Type: ObjectProperty)
    void* Billboard_Button; // 0x18A0 (Size: 0x8, Type: ObjectProperty)
    void* Billboard_Background_LiveEffect; // 0x18A8 (Size: 0x8, Type: ObjectProperty)
    void* Billboard_Background_Image; // 0x18B0 (Size: 0x8, Type: ObjectProperty)
    void* FortCountdownTimerVM; // 0x18B8 (Size: 0x8, Type: ObjectProperty)
    void* FortDiscoverSurfaceTileItemVM; // 0x18C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x18C8
    void* BackgroundDynamicMaterial; // 0x18D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x18E0
    FText LiveText; // 0x18E8 (Size: 0x18, Type: TextProperty)
    FString ParentPanelName; // 0x1900 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0005[0x8]; // 0x1910
    void* Unfavorited_Sound; // 0x1918 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, UberGraphFrame) == 6208, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::UberGraphFrame");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, WBP_CaptureForPostBufferUpdate) == 6216, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::WBP_CaptureForPostBufferUpdate");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, SqueegeeInjectionSlot) == 6224, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::SqueegeeInjectionSlot");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, MinSize) == 6232, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::MinSize");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, GP_Root) == 6240, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::GP_Root");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, Billboard_Title) == 6248, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::Billboard_Title");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, Billboard_Description) == 6272, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::Billboard_Description");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, Billboard_Countdown) == 6280, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::Billboard_Countdown");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, Billboard_CCU) == 6296, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::Billboard_CCU");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, Billboard_Button) == 6304, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::Billboard_Button");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, Billboard_Background_LiveEffect) == 6312, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::Billboard_Background_LiveEffect");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, Billboard_Background_Image) == 6320, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::Billboard_Background_Image");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, FortCountdownTimerVM) == 6328, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::FortCountdownTimerVM");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, FortDiscoverSurfaceTileItemVM) == 6336, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::FortDiscoverSurfaceTileItemVM");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, BackgroundDynamicMaterial) == 6360, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::BackgroundDynamicMaterial");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, LiveText) == 6376, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::LiveText");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, ParentPanelName) == 6400, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::ParentPanelName");
static_assert(offsetof(UWBP_Discovery_IP_Tile_Billboard_C, Unfavorited_Sound) == 6424, "Offset mismatch for UWBP_Discovery_IP_Tile_Billboard_C::Unfavorited_Sound");
