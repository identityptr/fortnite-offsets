/**
 * decamp dumper generated SDK
 * Package: /Script/MeltUI
 */
#pragma once
#include "Basic.h"

// /Script/MeltUI.MeltWidgetBase
// Kind: Class; super: LTMWidgetBase
class UMeltWidgetBase
{
public:
    std::uint8_t Pad_0000[0x3E0]; // 0x0000
    void* CachedFillMutator; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeltWidgetBase, CachedFillMutator) == 992, "Offset mismatch for UMeltWidgetBase::CachedFillMutator");
