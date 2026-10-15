/**
 * decamp dumper generated SDK
 * Package: /Script/JunoKlomboUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoKlomboUI.JunoKlomboCreatureViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoKlomboCreatureViewModel
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    float CurrentHealth; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float CurrentEnergy; // 0x008C (Size: 0x4, Type: FloatProperty)
    float RefreshTime; // 0x0090 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoKlomboCreatureViewModel, CurrentHealth) == 136, "Offset mismatch for UJunoKlomboCreatureViewModel::CurrentHealth");
static_assert(offsetof(UJunoKlomboCreatureViewModel, CurrentEnergy) == 140, "Offset mismatch for UJunoKlomboCreatureViewModel::CurrentEnergy");
static_assert(offsetof(UJunoKlomboCreatureViewModel, RefreshTime) == 144, "Offset mismatch for UJunoKlomboCreatureViewModel::RefreshTime");

// /Script/JunoKlomboUI.JunoMobileHUDElementKlombo
// Kind: Class; super: FortMobileHUDElement
class UJunoMobileHUDElementKlombo
{
public:
    std::uint8_t Pad_0000[0x3E0]; // 0x0000
    void* KlomboCreatureViewModel; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoMobileHUDElementKlombo, KlomboCreatureViewModel) == 992, "Offset mismatch for UJunoMobileHUDElementKlombo::KlomboCreatureViewModel");
