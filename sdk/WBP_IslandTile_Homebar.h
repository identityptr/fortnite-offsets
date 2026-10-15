/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Homebar
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Homebar.WBP_IslandTile_Homebar_C
// Kind: WidgetBlueprintGeneratedClass; super: WBP_IslandTile_Minimal_C
class UWBP_IslandTile_Homebar_C
{
public:
    std::uint8_t Pad_0000[0x1A20]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1A20 (Size: 0x8, Type: StructProperty)
    void* Anim_Indicator; // 0x1A28 (Size: 0x8, Type: ObjectProperty)
    void* Divider; // 0x1A30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x1A38
    void* IndicatorImage; // 0x1A40 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IsTileHovered; // 0x1A48 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x1A49
    double IndicatorAnimValue; // 0x1A50 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UWBP_IslandTile_Homebar_C, UberGraphFrame) == 6688, "Offset mismatch for UWBP_IslandTile_Homebar_C::UberGraphFrame");
static_assert(offsetof(UWBP_IslandTile_Homebar_C, Anim_Indicator) == 6696, "Offset mismatch for UWBP_IslandTile_Homebar_C::Anim_Indicator");
static_assert(offsetof(UWBP_IslandTile_Homebar_C, Divider) == 6704, "Offset mismatch for UWBP_IslandTile_Homebar_C::Divider");
static_assert(offsetof(UWBP_IslandTile_Homebar_C, IndicatorImage) == 6720, "Offset mismatch for UWBP_IslandTile_Homebar_C::IndicatorImage");
static_assert(offsetof(UWBP_IslandTile_Homebar_C, IsTileHovered) == 6728, "Offset mismatch for UWBP_IslandTile_Homebar_C::IsTileHovered");
static_assert(offsetof(UWBP_IslandTile_Homebar_C, IndicatorAnimValue) == 6736, "Offset mismatch for UWBP_IslandTile_Homebar_C::IndicatorAnimValue");
