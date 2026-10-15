/**
 * decamp dumper generated SDK
 * Package: /Script/STW_HestiaBeautyUI
 */
#pragma once
#include "Basic.h"

// /Script/STW_HestiaBeautyUI.FortHestiaUIRequestsFeatureAction
// Kind: Class; super: FortUIGameFeatureAction
class UFortHestiaUIRequestsFeatureAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/STW_HestiaBeautyUI.FortUIStateWidget_STWFrontendHB
// Kind: Class; super: FortUIStateWidget_STWFrontend
class UFortUIStateWidget_STWFrontendHB
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    std::uint8_t CloseFrontendMenuActionRowHandle[0x18]; // 0x0620 (Size: 0x18, Type: StructProperty)
    std::uint8_t CloseFrontendMenuSRActionRowHandle[0x18]; // 0x0638 (Size: 0x18, Type: StructProperty)
    std::uint8_t CloseFrontendMenuDualActionRowHandle[0x1]; // 0x0650 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortUIStateWidget_STWFrontendHB, CloseFrontendMenuActionRowHandle) == 1568, "Offset mismatch for UFortUIStateWidget_STWFrontendHB::CloseFrontendMenuActionRowHandle");
static_assert(offsetof(UFortUIStateWidget_STWFrontendHB, CloseFrontendMenuSRActionRowHandle) == 1592, "Offset mismatch for UFortUIStateWidget_STWFrontendHB::CloseFrontendMenuSRActionRowHandle");
static_assert(offsetof(UFortUIStateWidget_STWFrontendHB, CloseFrontendMenuDualActionRowHandle) == 1616, "Offset mismatch for UFortUIStateWidget_STWFrontendHB::CloseFrontendMenuDualActionRowHandle");
