/**
 * decamp dumper generated SDK
 * Package: /SparksSettings/BP_SparksSettingsMarkup
 */
#pragma once
#include "Basic.h"

// /SparksSettings/BP_SparksSettingsMarkup.BP_SparksSettingsMarkup_C
// Kind: BlueprintGeneratedClass; super: FortGameSettingRegistryMarkup
class UBP_SparksSettingsMarkup_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AudioSettings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBP_SparksSettingsMarkup_C, AudioSettings) == 40, "Offset mismatch for UBP_SparksSettingsMarkup_C::AudioSettings");
