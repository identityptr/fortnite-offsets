/**
 * decamp dumper generated SDK
 * Package: /Script/JunoElementalUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoElementalUI.JunoElementalAfflictionViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoElementalAfflictionViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bEarthAfflictionActive; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFireAfflictionActive; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIceAfflictionActive; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLightningAfflictionActive; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    void* RepresentedOwner; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoElementalAfflictionViewModel, bEarthAfflictionActive) == 104, "Offset mismatch for UJunoElementalAfflictionViewModel::bEarthAfflictionActive");
static_assert(offsetof(UJunoElementalAfflictionViewModel, bFireAfflictionActive) == 105, "Offset mismatch for UJunoElementalAfflictionViewModel::bFireAfflictionActive");
static_assert(offsetof(UJunoElementalAfflictionViewModel, bIceAfflictionActive) == 106, "Offset mismatch for UJunoElementalAfflictionViewModel::bIceAfflictionActive");
static_assert(offsetof(UJunoElementalAfflictionViewModel, bLightningAfflictionActive) == 107, "Offset mismatch for UJunoElementalAfflictionViewModel::bLightningAfflictionActive");
static_assert(offsetof(UJunoElementalAfflictionViewModel, RepresentedOwner) == 112, "Offset mismatch for UJunoElementalAfflictionViewModel::RepresentedOwner");
