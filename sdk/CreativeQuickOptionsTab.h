/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeQuickOptionsTab
 */
#pragma once
#include "Basic.h"

// /Script/CreativeQuickOptionsTab.FortCreativeQuickOptionsTab
// Kind: Class; super: CommonActivatableWidget
class UFortCreativeQuickOptionsTab
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    std::uint8_t MapScreenContainerTabInfo[0x40]; // 0x04D0 (Size: 0x40, Type: StructProperty)
    FName QuickOptionsTabNameId; // 0x0510 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0518
    std::uint8_t TabButtonLabelInfo[0xF0]; // 0x0520 (Size: 0xF0, Type: StructProperty)
    std::uint8_t bIsDefaultActiveTab; // 0x0610 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCreativeQuickOptionsTab, MapScreenContainerTabInfo) == 1232, "Offset mismatch for UFortCreativeQuickOptionsTab::MapScreenContainerTabInfo");
static_assert(offsetof(UFortCreativeQuickOptionsTab, QuickOptionsTabNameId) == 1296, "Offset mismatch for UFortCreativeQuickOptionsTab::QuickOptionsTabNameId");
static_assert(offsetof(UFortCreativeQuickOptionsTab, TabButtonLabelInfo) == 1312, "Offset mismatch for UFortCreativeQuickOptionsTab::TabButtonLabelInfo");
static_assert(offsetof(UFortCreativeQuickOptionsTab, bIsDefaultActiveTab) == 1552, "Offset mismatch for UFortCreativeQuickOptionsTab::bIsDefaultActiveTab");
