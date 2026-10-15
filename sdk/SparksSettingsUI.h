/**
 * decamp dumper generated SDK
 * Package: /Script/SparksSettingsUI
 */
#pragma once
#include "Basic.h"

// /Script/SparksSettingsUI.FortSettingRegistryExtension_Sparks
// Kind: Class; super: FortGameSettingRegistryExtension
class UFortSettingRegistryExtension_Sparks
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MarkupBase; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSettingRegistryExtension_Sparks, MarkupBase) == 40, "Offset mismatch for UFortSettingRegistryExtension_Sparks::MarkupBase");

// /Script/SparksSettingsUI.SparksSettingsUIGlobals
// Kind: Class; super: Object
class USparksSettingsUIGlobals
{
public:
    std::uint8_t Opaque[1];
};
