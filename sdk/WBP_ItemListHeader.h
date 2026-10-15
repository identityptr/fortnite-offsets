/**
 * decamp dumper generated SDK
 * Package: /Locker/MPL/ItemLists/WBP_ItemListHeader
 */
#pragma once
#include "Basic.h"

// /Locker/MPL/ItemLists/WBP_ItemListHeader.WBP_ItemListHeader_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_ItemListHeader_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* TitleText; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* ItemCountText; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* Divider; // 0x0318 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_ItemListHeader_C, TitleText) == 776, "Offset mismatch for UWBP_ItemListHeader_C::TitleText");
static_assert(offsetof(UWBP_ItemListHeader_C, ItemCountText) == 784, "Offset mismatch for UWBP_ItemListHeader_C::ItemCountText");
static_assert(offsetof(UWBP_ItemListHeader_C, Divider) == 792, "Offset mismatch for UWBP_ItemListHeader_C::Divider");
