/**
 * decamp dumper generated SDK
 * Package: /Script/PlayAsVillainUI
 */
#pragma once
#include "Basic.h"

// /Script/PlayAsVillainUI.PlayAsVillainHUDPortraitVM
// Kind: Class; super: FortPerUserViewModel
class UPlayAsVillainHUDPortraitVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t PortraitTexture[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    TWeakObjectPtr<void> WeakPlayerState; // 0x0098 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPlayAsVillainHUDPortraitVM, PortraitTexture) == 120, "Offset mismatch for UPlayAsVillainHUDPortraitVM::PortraitTexture");
static_assert(offsetof(UPlayAsVillainHUDPortraitVM, WeakPlayerState) == 152, "Offset mismatch for UPlayAsVillainHUDPortraitVM::WeakPlayerState");
