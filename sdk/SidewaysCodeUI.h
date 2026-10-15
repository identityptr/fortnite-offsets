/**
 * decamp dumper generated SDK
 * Package: /Script/SidewaysCodeUI
 */
#pragma once
#include "Basic.h"

// /Script/SidewaysCodeUI.SidewaysWidgetBase
// Kind: Class; super: FortHUDElementWidget
class USidewaysWidgetBase
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* ReplicatedState; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentSidewaysState; // 0x0378 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USidewaysWidgetBase, ReplicatedState) == 880, "Offset mismatch for USidewaysWidgetBase::ReplicatedState");
static_assert(offsetof(USidewaysWidgetBase, CurrentSidewaysState) == 888, "Offset mismatch for USidewaysWidgetBase::CurrentSidewaysState");
