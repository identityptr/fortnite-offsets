/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Systems/ItemShopTile/WBP_Price_PlatformStoreIcon
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Systems/ItemShopTile/WBP_Price_PlatformStoreIcon.WBP_Price_PlatformStoreIcon_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_Price_PlatformStoreIcon_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x11]; // 0x0308 (Size: 0x11, Type: StructProperty)
    std::uint8_t Currency; // 0x0319 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x031A
    std::uint8_t ImageSize[0x1]; // 0x0320 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_Price_PlatformStoreIcon_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_Price_PlatformStoreIcon_C::UberGraphFrame");
static_assert(offsetof(UWBP_Price_PlatformStoreIcon_C, Currency) == 793, "Offset mismatch for UWBP_Price_PlatformStoreIcon_C::Currency");
static_assert(offsetof(UWBP_Price_PlatformStoreIcon_C, ImageSize) == 800, "Offset mismatch for UWBP_Price_PlatformStoreIcon_C::ImageSize");
