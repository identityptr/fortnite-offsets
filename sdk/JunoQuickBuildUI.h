/**
 * decamp dumper generated SDK
 * Package: /Script/JunoQuickBuildUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoQuickBuildUI.JunoQuickBuildTouchLayer
// Kind: Class; super: UserWidget
class UJunoQuickBuildTouchLayer
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    FMulticastInlineDelegate OnTouchTapDelegate; // 0x0308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t StartPosition[0x18]; // 0x0318 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x18]; // 0x0330 (Size: 0x18, Type: StructProperty)
    void* InputKey; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> InputActionsData; // 0x0350 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoQuickBuildTouchLayer, OnTouchTapDelegate) == 776, "Offset mismatch for UJunoQuickBuildTouchLayer::OnTouchTapDelegate");
static_assert(offsetof(UJunoQuickBuildTouchLayer, StartPosition) == 792, "Offset mismatch for UJunoQuickBuildTouchLayer::StartPosition");
static_assert(offsetof(UJunoQuickBuildTouchLayer, Direction) == 816, "Offset mismatch for UJunoQuickBuildTouchLayer::Direction");
static_assert(offsetof(UJunoQuickBuildTouchLayer, InputKey) == 840, "Offset mismatch for UJunoQuickBuildTouchLayer::InputKey");
static_assert(offsetof(UJunoQuickBuildTouchLayer, InputActionsData) == 848, "Offset mismatch for UJunoQuickBuildTouchLayer::InputActionsData");
