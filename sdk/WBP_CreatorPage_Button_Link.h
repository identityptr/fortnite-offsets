/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/CreatorProfile/WBP_CreatorPage_Button_Link
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/CreatorProfile/WBP_CreatorPage_Button_Link.WBP_CreatorPage_Button_Link_C
// Kind: WidgetBlueprintGeneratedClass; super: WBP_UIKit_Button_Generic_C
class UWBP_CreatorPage_Button_Link_C
{
public:
    std::uint8_t Pad_0000[0x19A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x19A0 (Size: 0x8, Type: StructProperty)
    FString Url; // 0x19A8 (Size: 0x10, Type: StrProperty)
    FString Platform; // 0x19B8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UWBP_CreatorPage_Button_Link_C, UberGraphFrame) == 6560, "Offset mismatch for UWBP_CreatorPage_Button_Link_C::UberGraphFrame");
static_assert(offsetof(UWBP_CreatorPage_Button_Link_C, Url) == 6568, "Offset mismatch for UWBP_CreatorPage_Button_Link_C::Url");
static_assert(offsetof(UWBP_CreatorPage_Button_Link_C, Platform) == 6584, "Offset mismatch for UWBP_CreatorPage_Button_Link_C::Platform");
