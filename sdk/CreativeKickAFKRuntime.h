/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeKickAFKRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CreativeKickAFKRuntime.FortCreativeKickAFKComponent
// Kind: Class; super: FortInputBasedAFKComponent
class UFortCreativeKickAFKComponent
{
public:
    std::uint8_t Pad_0000[0x1E8]; // 0x0000
    std::uint8_t AFKTableRowEntry[0x10]; // 0x01E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t KickAFKDetectionParameters[0x1]; // 0x01F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCreativeKickAFKComponent, AFKTableRowEntry) == 488, "Offset mismatch for UFortCreativeKickAFKComponent::AFKTableRowEntry");
static_assert(offsetof(UFortCreativeKickAFKComponent, KickAFKDetectionParameters) == 504, "Offset mismatch for UFortCreativeKickAFKComponent::KickAFKDetectionParameters");
