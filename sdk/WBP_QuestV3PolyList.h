/**
 * decamp dumper generated SDK
 * Package: /QuestUI/QuestScreen/V3/WBP_QuestV3PolyList
 */
#pragma once
#include "Basic.h"

// /QuestUI/QuestScreen/V3/WBP_QuestV3PolyList.WBP_QuestV3PolyList_C
// Kind: WidgetBlueprintGeneratedClass; super: FortMultiSourcePolymorphicListView
class UWBP_QuestV3PolyList_C
{
public:
    std::uint8_t Pad_0000[0x388]; // 0x0000
    std::uint8_t UberGraphFrame[0x60]; // 0x0388 (Size: 0x60, Type: StructProperty)
    FMulticastInlineDelegate OnListViewScrolled; // 0x03E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWBP_QuestV3PolyList_C, UberGraphFrame) == 904, "Offset mismatch for UWBP_QuestV3PolyList_C::UberGraphFrame");
static_assert(offsetof(UWBP_QuestV3PolyList_C, OnListViewScrolled) == 1000, "Offset mismatch for UWBP_QuestV3PolyList_C::OnListViewScrolled");
