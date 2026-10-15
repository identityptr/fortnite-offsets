/**
 * decamp dumper generated SDK
 * Package: /GiftBox/GiftPurchase/UI/GiftingWrapOptionEntry
 */
#pragma once
#include "Basic.h"

// /GiftBox/GiftPurchase/UI/GiftingWrapOptionEntry.GiftingWrapOptionEntry_C
// Kind: WidgetBlueprintGeneratedClass; super: FortGiftingFlowWrapOptionListEntry
class UGiftingWrapOptionEntry_C
{
public:
    std::uint8_t Pad_0000[0x1610]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1610 (Size: 0x8, Type: StructProperty)
    void* Image_Selected; // 0x1618 (Size: 0x8, Type: ObjectProperty)
    void* Hover; // 0x1620 (Size: 0x8, Type: ObjectProperty)
    void* Selected; // 0x1628 (Size: 0x8, Type: ObjectProperty)
    void* Unselected; // 0x1630 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGiftingWrapOptionEntry_C, UberGraphFrame) == 5648, "Offset mismatch for UGiftingWrapOptionEntry_C::UberGraphFrame");
static_assert(offsetof(UGiftingWrapOptionEntry_C, Image_Selected) == 5656, "Offset mismatch for UGiftingWrapOptionEntry_C::Image_Selected");
static_assert(offsetof(UGiftingWrapOptionEntry_C, Hover) == 5664, "Offset mismatch for UGiftingWrapOptionEntry_C::Hover");
static_assert(offsetof(UGiftingWrapOptionEntry_C, Selected) == 5672, "Offset mismatch for UGiftingWrapOptionEntry_C::Selected");
static_assert(offsetof(UGiftingWrapOptionEntry_C, Unselected) == 5680, "Offset mismatch for UGiftingWrapOptionEntry_C::Unselected");
