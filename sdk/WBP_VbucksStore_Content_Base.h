/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/Frontend/StoreMain/WBP_VbucksStore_Content_Base
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/Frontend/StoreMain/WBP_VbucksStore_Content_Base.WBP_VbucksStore_Content_Base_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonActivatableWidget
class UWBP_VbucksStore_Content_Base_C
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x60]; // 0x04A0 (Size: 0x60, Type: StructProperty)
    FMulticastInlineDelegate SetIsPurchasing; // 0x0500 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWBP_VbucksStore_Content_Base_C, UberGraphFrame) == 1184, "Offset mismatch for UWBP_VbucksStore_Content_Base_C::UberGraphFrame");
static_assert(offsetof(UWBP_VbucksStore_Content_Base_C, SetIsPurchasing) == 1280, "Offset mismatch for UWBP_VbucksStore_Content_Base_C::SetIsPurchasing");
