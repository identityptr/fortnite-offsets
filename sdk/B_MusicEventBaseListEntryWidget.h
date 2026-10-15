/**
 * decamp dumper generated SDK
 * Package: /Game/Sounds/MusicEventSubsystem/B_MusicEventBaseListEntryWidget
 */
#pragma once
#include "Basic.h"

// /Game/Sounds/MusicEventSubsystem/B_MusicEventBaseListEntryWidget.B_MusicEventBaseListEntryWidget_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UB_MusicEventBaseListEntryWidget_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* Text; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* DebugWidget; // 0x0318 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UB_MusicEventBaseListEntryWidget_C, UberGraphFrame) == 776, "Offset mismatch for UB_MusicEventBaseListEntryWidget_C::UberGraphFrame");
static_assert(offsetof(UB_MusicEventBaseListEntryWidget_C, Text) == 784, "Offset mismatch for UB_MusicEventBaseListEntryWidget_C::Text");
static_assert(offsetof(UB_MusicEventBaseListEntryWidget_C, DebugWidget) == 792, "Offset mismatch for UB_MusicEventBaseListEntryWidget_C::DebugWidget");
