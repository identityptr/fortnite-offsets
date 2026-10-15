/**
 * decamp dumper generated SDK
 * Package: /Script/CorruptionGameplayCodeUI
 */
#pragma once
#include "Basic.h"

// /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
// Kind: Class; super: FortWeaponReticleExtensionWidgetBase
class UFortPowerupReticleExtensionWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    std::uint8_t LastPowerupHeatState; // 0x03A8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortPowerupReticleExtensionWidget, LastPowerupHeatState) == 936, "Offset mismatch for UFortPowerupReticleExtensionWidget::LastPowerupHeatState");
