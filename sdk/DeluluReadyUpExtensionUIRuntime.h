/**
 * decamp dumper generated SDK
 * Package: /Script/DeluluReadyUpExtensionUIRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DeluluReadyUpExtensionUIRuntime.DeluluReadyUpErrorUI
// Kind: Class; super: ReadyUpErrorUI
class UDeluluReadyUpErrorUI
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    TSoftClassPtr<void> PopupWidgetClass; // 0x00E8 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UDeluluReadyUpErrorUI, PopupWidgetClass) == 232, "Offset mismatch for UDeluluReadyUpErrorUI::PopupWidgetClass");
