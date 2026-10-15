/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/HUD/Bacchus/CustomizableHUD/MobileHUDPresets
 */
#pragma once
#include "Basic.h"

// /Game/Athena/HUD/Bacchus/CustomizableHUD/MobileHUDPresets.MobileHUDPresets_C
// Kind: BlueprintGeneratedClass; super: FortMobileHUDPresetContainer
class UMobileHUDPresets_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HUDPresetContainerTag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    TArray<void*> HUDProfilePresets; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMobileHUDPresets_C, HUDPresetContainerTag) == 40, "Offset mismatch for UMobileHUDPresets_C::HUDPresetContainerTag");
static_assert(offsetof(UMobileHUDPresets_C, HUDProfilePresets) == 48, "Offset mismatch for UMobileHUDPresets_C::HUDProfilePresets");
