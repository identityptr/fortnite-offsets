/**
 * decamp dumper generated SDK
 * Package: /Script/HarmonixPolyphonyInternal
 */
#pragma once
#include "Basic.h"

// /Script/HarmonixPolyphonyInternal.HarmonixPolyphonyEffectsChainNodeConfiguration
// Kind: ScriptStruct; super: MetaSoundFrontendNodeConfiguration
struct FHarmonixPolyphonyEffectsChainNodeConfiguration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t OutputFormat; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FHarmonixPolyphonyEffectsChainNodeConfiguration, OutputFormat) == 8, "Offset mismatch for FHarmonixPolyphonyEffectsChainNodeConfiguration::OutputFormat");
