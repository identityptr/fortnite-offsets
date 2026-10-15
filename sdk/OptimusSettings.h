/**
 * decamp dumper generated SDK
 * Package: /Script/OptimusSettings
 */
#pragma once
#include "Basic.h"

// /Script/OptimusSettings.OptimusSettings
// Kind: Class; super: DeveloperSettings
class UOptimusSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t DefaultDeformer[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> DefaultRecomputeTangentDeformer; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UOptimusSettings, DefaultMode) == 48, "Offset mismatch for UOptimusSettings::DefaultMode");
static_assert(offsetof(UOptimusSettings, DefaultDeformer) == 56, "Offset mismatch for UOptimusSettings::DefaultDeformer");
static_assert(offsetof(UOptimusSettings, DefaultRecomputeTangentDeformer) == 88, "Offset mismatch for UOptimusSettings::DefaultRecomputeTangentDeformer");
