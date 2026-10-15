/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/TabScreens/Library/WBP_UI_Discover_Library_StorageLegendPin
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/TabScreens/Library/WBP_UI_Discover_Library_StorageLegendPin.WBP_UI_Discover_Library_StorageLegendPin_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_UI_Discover_Library_StorageLegendPin_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* Pin; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0318
    std::uint8_t Color1[0x10]; // 0x0320 (Size: 0x10, Type: StructProperty)
    std::uint8_t Color2[0x1]; // 0x0330 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_UI_Discover_Library_StorageLegendPin_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_UI_Discover_Library_StorageLegendPin_C::UberGraphFrame");
static_assert(offsetof(UWBP_UI_Discover_Library_StorageLegendPin_C, Pin) == 784, "Offset mismatch for UWBP_UI_Discover_Library_StorageLegendPin_C::Pin");
static_assert(offsetof(UWBP_UI_Discover_Library_StorageLegendPin_C, Color1) == 800, "Offset mismatch for UWBP_UI_Discover_Library_StorageLegendPin_C::Color1");
static_assert(offsetof(UWBP_UI_Discover_Library_StorageLegendPin_C, Color2) == 816, "Offset mismatch for UWBP_UI_Discover_Library_StorageLegendPin_C::Color2");
