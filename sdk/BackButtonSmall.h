/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Foundation/Buttons/BackButtonSmall
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Foundation/Buttons/BackButtonSmall.BackButtonSmall_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonButtonBase
class UBackButtonSmall_C
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x15A0 (Size: 0x8, Type: StructProperty)
    void* Image_Arrow; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x15B0
    void* OnHover; // 0x15C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBackButtonSmall_C, UberGraphFrame) == 5536, "Offset mismatch for UBackButtonSmall_C::UberGraphFrame");
static_assert(offsetof(UBackButtonSmall_C, Image_Arrow) == 5544, "Offset mismatch for UBackButtonSmall_C::Image_Arrow");
static_assert(offsetof(UBackButtonSmall_C, OnHover) == 5568, "Offset mismatch for UBackButtonSmall_C::OnHover");
