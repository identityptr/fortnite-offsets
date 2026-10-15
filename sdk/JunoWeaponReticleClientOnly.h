/**
 * decamp dumper generated SDK
 * Package: /Script/JunoWeaponReticleClientOnly
 */
#pragma once
#include "Basic.h"

// /Script/JunoWeaponReticleClientOnly.JunoReticleWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoReticleWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t ChargeTag[0x1]; // 0x0370 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoReticleWidget, ChargeTag) == 880, "Offset mismatch for UJunoReticleWidget::ChargeTag");
