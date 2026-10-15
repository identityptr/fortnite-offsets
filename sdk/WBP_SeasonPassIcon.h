/**
 * decamp dumper generated SDK
 * Package: /QuestUI/QuestScreen/QuestTile/WBP_SeasonPassIcon
 */
#pragma once
#include "Basic.h"

// /QuestUI/QuestScreen/QuestTile/WBP_SeasonPassIcon.WBP_SeasonPassIcon_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_SeasonPassIcon_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* Icon; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_SeasonPassIcon_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_SeasonPassIcon_C::UberGraphFrame");
static_assert(offsetof(UWBP_SeasonPassIcon_C, Icon) == 784, "Offset mismatch for UWBP_SeasonPassIcon_C::Icon");
