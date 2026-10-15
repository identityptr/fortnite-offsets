/**
 * decamp dumper generated SDK
 * Package: /Script/DelMarSettingsUI
 */
#pragma once
#include "Basic.h"

// /Script/DelMarSettingsUI.FortGameSettingRegistryExtension_DelMar
// Kind: Class; super: FortGameSettingRegistryExtension
class UFortGameSettingRegistryExtension_DelMar
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MarkupBase; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameSettingRegistryExtension_DelMar, MarkupBase) == 40, "Offset mismatch for UFortGameSettingRegistryExtension_DelMar::MarkupBase");
