/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/Rows/WBP_Tag_Sponsored
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/Rows/WBP_Tag_Sponsored.WBP_Tag_Sponsored_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonUserWidget
class UWBP_Tag_Sponsored_C
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0330 (Size: 0x8, Type: StructProperty)
    void* Txt_Sponsored; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* B_SponsoredTag; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_Tag_Sponsored_C, UberGraphFrame) == 816, "Offset mismatch for UWBP_Tag_Sponsored_C::UberGraphFrame");
static_assert(offsetof(UWBP_Tag_Sponsored_C, Txt_Sponsored) == 824, "Offset mismatch for UWBP_Tag_Sponsored_C::Txt_Sponsored");
static_assert(offsetof(UWBP_Tag_Sponsored_C, B_SponsoredTag) == 832, "Offset mismatch for UWBP_Tag_Sponsored_C::B_SponsoredTag");
