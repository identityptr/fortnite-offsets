/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/WBP_Discovery_MessageNoResults
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/WBP_Discovery_MessageNoResults.WBP_Discovery_NoResultsMessage_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_Discovery_NoResultsMessage_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0308 (Size: 0x10, Type: StructProperty)
    void* Description; // 0x0318 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_Discovery_NoResultsMessage_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_Discovery_NoResultsMessage_C::UberGraphFrame");
static_assert(offsetof(UWBP_Discovery_NoResultsMessage_C, Description) == 792, "Offset mismatch for UWBP_Discovery_NoResultsMessage_C::Description");
