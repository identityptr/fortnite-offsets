/**
 * decamp dumper generated SDK
 * Package: /SeasonPass/Widgets/Reboot/WBP_SeasonPassBubble
 */
#pragma once
#include "Basic.h"

// /SeasonPass/Widgets/Reboot/WBP_SeasonPassBubble.WBP_SeasonPassBubble_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_SeasonPassBubble_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* WBP_UIKit_Backplate; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* TimedIcon; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* Text; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* LockedIcon; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0328
    void* HorizontalBox; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_SeasonPassBubble_C, WBP_UIKit_Backplate) == 776, "Offset mismatch for UWBP_SeasonPassBubble_C::WBP_UIKit_Backplate");
static_assert(offsetof(UWBP_SeasonPassBubble_C, TimedIcon) == 784, "Offset mismatch for UWBP_SeasonPassBubble_C::TimedIcon");
static_assert(offsetof(UWBP_SeasonPassBubble_C, Text) == 792, "Offset mismatch for UWBP_SeasonPassBubble_C::Text");
static_assert(offsetof(UWBP_SeasonPassBubble_C, LockedIcon) == 800, "Offset mismatch for UWBP_SeasonPassBubble_C::LockedIcon");
static_assert(offsetof(UWBP_SeasonPassBubble_C, HorizontalBox) == 816, "Offset mismatch for UWBP_SeasonPassBubble_C::HorizontalBox");
