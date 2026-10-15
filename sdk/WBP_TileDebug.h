/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/Tiles/WBP_TileDebug
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/Tiles/WBP_TileDebug.WBP_TileDebug_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_TileDebug_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* Text_Widget_State; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* Text_Widget_Impression_Countdown; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* Text_Widget_Impression_Count; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* Text_LinkCode; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* Text_Analytics_Visible; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* Text_Analytics_Selected; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* BorderVisible; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* FortDiscoverTileItemDebugVM; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Selected; // 0x0348 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_TileDebug_C, Text_Widget_State) == 776, "Offset mismatch for UWBP_TileDebug_C::Text_Widget_State");
static_assert(offsetof(UWBP_TileDebug_C, Text_Widget_Impression_Countdown) == 784, "Offset mismatch for UWBP_TileDebug_C::Text_Widget_Impression_Countdown");
static_assert(offsetof(UWBP_TileDebug_C, Text_Widget_Impression_Count) == 792, "Offset mismatch for UWBP_TileDebug_C::Text_Widget_Impression_Count");
static_assert(offsetof(UWBP_TileDebug_C, Text_LinkCode) == 800, "Offset mismatch for UWBP_TileDebug_C::Text_LinkCode");
static_assert(offsetof(UWBP_TileDebug_C, Text_Analytics_Visible) == 808, "Offset mismatch for UWBP_TileDebug_C::Text_Analytics_Visible");
static_assert(offsetof(UWBP_TileDebug_C, Text_Analytics_Selected) == 816, "Offset mismatch for UWBP_TileDebug_C::Text_Analytics_Selected");
static_assert(offsetof(UWBP_TileDebug_C, BorderVisible) == 824, "Offset mismatch for UWBP_TileDebug_C::BorderVisible");
static_assert(offsetof(UWBP_TileDebug_C, FortDiscoverTileItemDebugVM) == 832, "Offset mismatch for UWBP_TileDebug_C::FortDiscoverTileItemDebugVM");
static_assert(offsetof(UWBP_TileDebug_C, Selected) == 840, "Offset mismatch for UWBP_TileDebug_C::Selected");
