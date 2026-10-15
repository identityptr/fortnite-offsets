/**
 * decamp dumper generated SDK
 * Package: /Script/DiamondCurrencyUI
 */
#pragma once
#include "Basic.h"

// /Script/DiamondCurrencyUI.FortDiamondHUDWidget
// Kind: Class; super: FortHUDElementWidget
class UFortDiamondHUDWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* Panel_BoundVisibility; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* ResourceItemDefinition; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DiamondSpendablesActorTags[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    float OverlapDiamondSpendableSphereRadius; // 0x03A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDiamondHUDWidget, Panel_BoundVisibility) == 880, "Offset mismatch for UFortDiamondHUDWidget::Panel_BoundVisibility");
static_assert(offsetof(UFortDiamondHUDWidget, ResourceItemDefinition) == 888, "Offset mismatch for UFortDiamondHUDWidget::ResourceItemDefinition");
static_assert(offsetof(UFortDiamondHUDWidget, DiamondSpendablesActorTags) == 896, "Offset mismatch for UFortDiamondHUDWidget::DiamondSpendablesActorTags");
static_assert(offsetof(UFortDiamondHUDWidget, OverlapDiamondSpendableSphereRadius) == 928, "Offset mismatch for UFortDiamondHUDWidget::OverlapDiamondSpendableSphereRadius");
