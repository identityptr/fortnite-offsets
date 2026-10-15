/**
 * decamp dumper generated SDK
 * Package: /Script/MoonFlaxWarBusUI
 */
#pragma once
#include "Basic.h"

// /Script/MoonFlaxWarBusUI.MoonFlaxWarBusActionWidget
// Kind: Class; super: UserWidget
class UMoonFlaxWarBusActionWidget
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t ActionActiveTag[0x4]; // 0x0348 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActionCooldownTag[0x1]; // 0x034C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMoonFlaxWarBusActionWidget, ActionActiveTag) == 840, "Offset mismatch for UMoonFlaxWarBusActionWidget::ActionActiveTag");
static_assert(offsetof(UMoonFlaxWarBusActionWidget, ActionCooldownTag) == 844, "Offset mismatch for UMoonFlaxWarBusActionWidget::ActionCooldownTag");
