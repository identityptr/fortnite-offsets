/**
 * decamp dumper generated SDK
 * Package: /GiftBox/GiftPurchase/UI/GiftingScreen
 */
#pragma once
#include "Basic.h"

// /GiftBox/GiftPurchase/UI/GiftingScreen.GiftingScreen_C
// Kind: WidgetBlueprintGeneratedClass; super: AthenaGiftingFlowScreen
class UGiftingScreen_C
{
public:
    std::uint8_t Pad_0000[0x938]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0938 (Size: 0x8, Type: StructProperty)
    void* WBP_ItemPreview_2dPreview; // 0x0940 (Size: 0x8, Type: ObjectProperty)
    void* WBP_ContentPurchaseBlocker; // 0x0948 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x68]; // 0x0950
    void* Intro; // 0x09B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x30]; // 0x09C0
    void* FortItemShopOfferVM; // 0x09F0 (Size: 0x8, Type: ObjectProperty)
    void* GiftBoxPurchaseVM; // 0x09F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t All[0xB0]; // 0x0A00 (Size: 0xB0, Type: StructProperty)
    std::uint8_t Party[0xB8]; // 0x0AB0 (Size: 0xB8, Type: StructProperty)
    void* IntroSound; // 0x0B68 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGiftingScreen_C, UberGraphFrame) == 2360, "Offset mismatch for UGiftingScreen_C::UberGraphFrame");
static_assert(offsetof(UGiftingScreen_C, WBP_ItemPreview_2dPreview) == 2368, "Offset mismatch for UGiftingScreen_C::WBP_ItemPreview_2dPreview");
static_assert(offsetof(UGiftingScreen_C, WBP_ContentPurchaseBlocker) == 2376, "Offset mismatch for UGiftingScreen_C::WBP_ContentPurchaseBlocker");
static_assert(offsetof(UGiftingScreen_C, Intro) == 2488, "Offset mismatch for UGiftingScreen_C::Intro");
static_assert(offsetof(UGiftingScreen_C, FortItemShopOfferVM) == 2544, "Offset mismatch for UGiftingScreen_C::FortItemShopOfferVM");
static_assert(offsetof(UGiftingScreen_C, GiftBoxPurchaseVM) == 2552, "Offset mismatch for UGiftingScreen_C::GiftBoxPurchaseVM");
static_assert(offsetof(UGiftingScreen_C, All) == 2560, "Offset mismatch for UGiftingScreen_C::All");
static_assert(offsetof(UGiftingScreen_C, Party) == 2736, "Offset mismatch for UGiftingScreen_C::Party");
static_assert(offsetof(UGiftingScreen_C, IntroSound) == 2920, "Offset mismatch for UGiftingScreen_C::IntroSound");
