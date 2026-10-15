/**
 * decamp dumper generated SDK
 * Package: /SparksSettings/BP_FortSettingVolumeMarkup_SparksMusic
 */
#pragma once
#include "Basic.h"

// /SparksSettings/BP_FortSettingVolumeMarkup_SparksMusic.BP_FortSettingVolumeMarkup_SparksMusic_C
// Kind: BlueprintGeneratedClass; super: FortSettingVolumeMarkup
class UBP_FortSettingVolumeMarkup_SparksMusic_C
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    double DefaultValue; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    void* ControlBus; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_FortSettingVolumeMarkup_SparksMusic_C, DefaultValue) == 136, "Offset mismatch for UBP_FortSettingVolumeMarkup_SparksMusic_C::DefaultValue");
static_assert(offsetof(UBP_FortSettingVolumeMarkup_SparksMusic_C, ControlBus) == 144, "Offset mismatch for UBP_FortSettingVolumeMarkup_SparksMusic_C::ControlBus");
