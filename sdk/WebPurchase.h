/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/Frontend/StoreMain/WebPurchase
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/Frontend/StoreMain/WebPurchase.WebPurchase_C
// Kind: WidgetBlueprintGeneratedClass; super: FortWebPurchaseScreen
class UWebPurchase_C
{
public:
    std::uint8_t Pad_0000[0x598]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0598 (Size: 0x8, Type: StructProperty)
    void* WBP_CaptureForPostBufferUpdate; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* Throbber; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x05B0
    void* Button_Back; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWebPurchase_C, UberGraphFrame) == 1432, "Offset mismatch for UWebPurchase_C::UberGraphFrame");
static_assert(offsetof(UWebPurchase_C, WBP_CaptureForPostBufferUpdate) == 1440, "Offset mismatch for UWebPurchase_C::WBP_CaptureForPostBufferUpdate");
static_assert(offsetof(UWebPurchase_C, Throbber) == 1448, "Offset mismatch for UWebPurchase_C::Throbber");
static_assert(offsetof(UWebPurchase_C, Button_Back) == 1464, "Offset mismatch for UWebPurchase_C::Button_Back");
