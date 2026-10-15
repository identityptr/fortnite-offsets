/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/Frontend/StoreMain/WBP_VbucksStore_OfferTile
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/Frontend/StoreMain/WBP_VbucksStore_OfferTile.WBP_VbucksStore_OfferTile_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonButtonBase
class UWBP_VbucksStore_OfferTile_C
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x18]; // 0x15A0 (Size: 0x18, Type: StructProperty)
    void* SizeBox; // 0x15B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x15C0
    void* Image_Icon; // 0x15D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x15E0
    void* Image_Background; // 0x15E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x20]; // 0x15F0
    void* Block_Outline; // 0x1610 (Size: 0x8, Type: ObjectProperty)
    void* Intro; // 0x1618 (Size: 0x8, Type: ObjectProperty)
    void* Hover; // 0x1620 (Size: 0x8, Type: ObjectProperty)
    void* FortMtxStoreOfferVM; // 0x1628 (Size: 0x8, Type: ObjectProperty)
    void* FortMtxStoreVM; // 0x1630 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x18]; // 0x1638
    void* MTXOfferTileIntroWhoosh; // 0x1650 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x30]; // 0x1658
    FMulticastInlineDelegate OnPurchaseComplete; // 0x1688 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* HoverSound; // 0x1698 (Size: 0x8, Type: ObjectProperty)
    void* PressedSound; // 0x16A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x16A8
    FText HighlightText; // 0x16B0 (Size: 0x18, Type: TextProperty)
    FMulticastInlineDelegate SetIsPurchasing; // 0x16C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, UberGraphFrame) == 5536, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::UberGraphFrame");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, SizeBox) == 5560, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::SizeBox");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, Image_Icon) == 5592, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::Image_Icon");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, Image_Background) == 5608, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::Image_Background");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, Block_Outline) == 5648, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::Block_Outline");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, Intro) == 5656, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::Intro");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, Hover) == 5664, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::Hover");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, FortMtxStoreOfferVM) == 5672, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::FortMtxStoreOfferVM");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, FortMtxStoreVM) == 5680, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::FortMtxStoreVM");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, MTXOfferTileIntroWhoosh) == 5712, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::MTXOfferTileIntroWhoosh");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, OnPurchaseComplete) == 5768, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::OnPurchaseComplete");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, HoverSound) == 5784, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::HoverSound");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, PressedSound) == 5792, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::PressedSound");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, HighlightText) == 5808, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::HighlightText");
static_assert(offsetof(UWBP_VbucksStore_OfferTile_C, SetIsPurchasing) == 5832, "Offset mismatch for UWBP_VbucksStore_OfferTile_C::SetIsPurchasing");
