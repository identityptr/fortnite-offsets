/**
 * decamp dumper generated SDK
 * Package: /Script/JunoCodexUI_CBC
 */
#pragma once
#include "Basic.h"

// /Script/JunoCodexUI_CBC.GameFeatureAction_AddCBCSupportToCodex
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddCBCSupportToCodex
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftClassPtr<void> ComponentSlotWidgetClass; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UGameFeatureAction_AddCBCSupportToCodex, ComponentSlotWidgetClass) == 40, "Offset mismatch for UGameFeatureAction_AddCBCSupportToCodex::ComponentSlotWidgetClass");

// /Script/JunoCodexUI_CBC.JunoCodexItemComponentSlot
// Kind: Class; super: CommonUserWidget
class UJunoCodexItemComponentSlot
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoCodexItemComponentSlot, bDisplayInActionBar) == 776, "Offset mismatch for UJunoCodexItemComponentSlot::bDisplayInActionBar");
static_assert(offsetof(UJunoCodexItemComponentSlot, bConsumePointerInput) == 777, "Offset mismatch for UJunoCodexItemComponentSlot::bConsumePointerInput");
