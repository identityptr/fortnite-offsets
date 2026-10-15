/**
 * decamp dumper generated SDK
 * Package: /Script/CreatorRefreshMyIslandUI
 */
#pragma once
#include "Basic.h"

// /Script/CreatorRefreshMyIslandUI.FortCreativeMyIslandSideNavWidget
// Kind: Class; super: CommonActivatableWidget
class UFortCreativeMyIslandSideNavWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t SearchInputActionRow[0x10]; // 0x04A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClearSearchInputActionRow[0x1]; // 0x04B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCreativeMyIslandSideNavWidget, SearchInputActionRow) == 1184, "Offset mismatch for UFortCreativeMyIslandSideNavWidget::SearchInputActionRow");
static_assert(offsetof(UFortCreativeMyIslandSideNavWidget, ClearSearchInputActionRow) == 1200, "Offset mismatch for UFortCreativeMyIslandSideNavWidget::ClearSearchInputActionRow");
