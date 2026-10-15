/**
 * decamp dumper generated SDK
 * Package: /GiftBox/UI/GiftBoxScreenHeader
 */
#pragma once
#include "Basic.h"

// /GiftBox/UI/GiftBoxScreenHeader.GiftBoxScreenHeader_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonUserWidget
class UGiftBoxScreenHeader_C
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0330 (Size: 0x8, Type: StructProperty)
    void* Text_SubHeader; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Text_Header; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Text_Body; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Image_Reward; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* AutoClaimStatus; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* IntroAnim; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* InitialState; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* FadeAnim; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* GiftBoxVM; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* GiftBoxItemVM; // 0x0380 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGiftBoxScreenHeader_C, UberGraphFrame) == 816, "Offset mismatch for UGiftBoxScreenHeader_C::UberGraphFrame");
static_assert(offsetof(UGiftBoxScreenHeader_C, Text_SubHeader) == 824, "Offset mismatch for UGiftBoxScreenHeader_C::Text_SubHeader");
static_assert(offsetof(UGiftBoxScreenHeader_C, Text_Header) == 832, "Offset mismatch for UGiftBoxScreenHeader_C::Text_Header");
static_assert(offsetof(UGiftBoxScreenHeader_C, Text_Body) == 840, "Offset mismatch for UGiftBoxScreenHeader_C::Text_Body");
static_assert(offsetof(UGiftBoxScreenHeader_C, Image_Reward) == 848, "Offset mismatch for UGiftBoxScreenHeader_C::Image_Reward");
static_assert(offsetof(UGiftBoxScreenHeader_C, AutoClaimStatus) == 856, "Offset mismatch for UGiftBoxScreenHeader_C::AutoClaimStatus");
static_assert(offsetof(UGiftBoxScreenHeader_C, IntroAnim) == 864, "Offset mismatch for UGiftBoxScreenHeader_C::IntroAnim");
static_assert(offsetof(UGiftBoxScreenHeader_C, InitialState) == 872, "Offset mismatch for UGiftBoxScreenHeader_C::InitialState");
static_assert(offsetof(UGiftBoxScreenHeader_C, FadeAnim) == 880, "Offset mismatch for UGiftBoxScreenHeader_C::FadeAnim");
static_assert(offsetof(UGiftBoxScreenHeader_C, GiftBoxVM) == 888, "Offset mismatch for UGiftBoxScreenHeader_C::GiftBoxVM");
static_assert(offsetof(UGiftBoxScreenHeader_C, GiftBoxItemVM) == 896, "Offset mismatch for UGiftBoxScreenHeader_C::GiftBoxItemVM");
