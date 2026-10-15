/**
 * decamp dumper generated SDK
 * Package: /Script/JunoReplayUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoReplayUI.FortGameSettingRegistryExtension_JunoReplay
// Kind: Class; super: FortGameSettingRegistryExtension
class UFortGameSettingRegistryExtension_JunoReplay
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MarkupBase; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameSettingRegistryExtension_JunoReplay, MarkupBase) == 40, "Offset mismatch for UFortGameSettingRegistryExtension_JunoReplay::MarkupBase");

// /Script/JunoReplayUI.JunoReplayUIGlobals
// Kind: Class; super: Object
class UJunoReplayUIGlobals
{
public:
    std::uint8_t Opaque[1];
};
