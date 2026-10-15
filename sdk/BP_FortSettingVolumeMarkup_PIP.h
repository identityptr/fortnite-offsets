/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Settings/BP_FortSettingVolumeMarkup_PIP
 */
#pragma once
#include "Basic.h"

// /Game/UI/Settings/BP_FortSettingVolumeMarkup_PIP.BP_FortSettingVolumeMarkup_PIP_C
// Kind: BlueprintGeneratedClass; super: FortSettingVolumeMarkup
class UBP_FortSettingVolumeMarkup_PIP_C
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    double DefaultValue; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    void* ControlBus; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_FortSettingVolumeMarkup_PIP_C, DefaultValue) == 136, "Offset mismatch for UBP_FortSettingVolumeMarkup_PIP_C::DefaultValue");
static_assert(offsetof(UBP_FortSettingVolumeMarkup_PIP_C, ControlBus) == 144, "Offset mismatch for UBP_FortSettingVolumeMarkup_PIP_C::ControlBus");
