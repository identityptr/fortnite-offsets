/**
 * decamp dumper generated SDK
 * Package: /GiftBox/GiftPurchase/UI/GiftRecipientSearchBar
 */
#pragma once
#include "Basic.h"

// /GiftBox/GiftPurchase/UI/GiftRecipientSearchBar.GiftRecipientSearchBar_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonUserWidget
class UGiftRecipientSearchBar_C
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0330 (Size: 0x10, Type: StructProperty)
    void* InputActionWidget; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* EditableText_SearchFriends; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0350
    void* Button_SubmitQuery; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Button_ClearQuery; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* OnHovered; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Error; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* GiftBoxPurchaseVM; // 0x0378 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGiftRecipientSearchBar_C, UberGraphFrame) == 816, "Offset mismatch for UGiftRecipientSearchBar_C::UberGraphFrame");
static_assert(offsetof(UGiftRecipientSearchBar_C, InputActionWidget) == 832, "Offset mismatch for UGiftRecipientSearchBar_C::InputActionWidget");
static_assert(offsetof(UGiftRecipientSearchBar_C, EditableText_SearchFriends) == 840, "Offset mismatch for UGiftRecipientSearchBar_C::EditableText_SearchFriends");
static_assert(offsetof(UGiftRecipientSearchBar_C, Button_SubmitQuery) == 856, "Offset mismatch for UGiftRecipientSearchBar_C::Button_SubmitQuery");
static_assert(offsetof(UGiftRecipientSearchBar_C, Button_ClearQuery) == 864, "Offset mismatch for UGiftRecipientSearchBar_C::Button_ClearQuery");
static_assert(offsetof(UGiftRecipientSearchBar_C, OnHovered) == 872, "Offset mismatch for UGiftRecipientSearchBar_C::OnHovered");
static_assert(offsetof(UGiftRecipientSearchBar_C, Error) == 880, "Offset mismatch for UGiftRecipientSearchBar_C::Error");
static_assert(offsetof(UGiftRecipientSearchBar_C, GiftBoxPurchaseVM) == 888, "Offset mismatch for UGiftRecipientSearchBar_C::GiftBoxPurchaseVM");
