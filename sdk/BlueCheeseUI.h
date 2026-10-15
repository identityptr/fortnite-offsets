/**
 * decamp dumper generated SDK
 * Package: /Script/BlueCheeseUI
 */
#pragma once
#include "Basic.h"

// /Script/BlueCheeseUI.BlueCheeseWidgetBase
// Kind: Class; super: LTMWidgetBase
class UBlueCheeseWidgetBase
{
public:
    std::uint8_t Pad_0000[0x3E0]; // 0x0000
    void* CachedBlueCheeseMutator; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBlueCheeseWidgetBase, CachedBlueCheeseMutator) == 992, "Offset mismatch for UBlueCheeseWidgetBase::CachedBlueCheeseMutator");
