/**
 * decamp dumper generated SDK
 * Package: /Script/FabricSettingsUI
 */
#pragma once
#include "Basic.h"

// /Script/FabricSettingsUI.FortGameSettingRegistryExtension_Fabric
// Kind: Class; super: FortGameSettingRegistryExtension
class UFortGameSettingRegistryExtension_Fabric
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MarkupBase; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameSettingRegistryExtension_Fabric, MarkupBase) == 40, "Offset mismatch for UFortGameSettingRegistryExtension_Fabric::MarkupBase");

// /Script/FabricSettingsUI.FortSettingEditCondition_FabricEnabledForLinkEntry
// Kind: Class; super: FortSettingEditCondition
class UFortSettingEditCondition_FabricEnabledForLinkEntry
{
public:
    std::uint8_t Opaque[1];
};
