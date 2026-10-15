/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/HUD/AthenaWatchers
 */
#pragma once
#include "Basic.h"

// /Game/Athena/HUD/AthenaWatchers.AthenaWatchers_C
// Kind: WidgetBlueprintGeneratedClass; super: AthenaWatchers
class UAthenaWatchers_C
{
public:
    std::uint8_t Pad_0000[0x380]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0380 (Size: 0x10, Type: StructProperty)
    void* OnValueChanged; // 0x0390 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaWatchers_C, UberGraphFrame) == 896, "Offset mismatch for UAthenaWatchers_C::UberGraphFrame");
static_assert(offsetof(UAthenaWatchers_C, OnValueChanged) == 912, "Offset mismatch for UAthenaWatchers_C::OnValueChanged");
