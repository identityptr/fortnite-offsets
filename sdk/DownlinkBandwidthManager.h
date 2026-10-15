/**
 * decamp dumper generated SDK
 * Package: /Script/DownlinkBandwidthManager
 */
#pragma once
#include "Basic.h"

// /Script/DownlinkBandwidthManager.DownlinkBandwidthManagerConfig
// Kind: Class; super: Object
class UDownlinkBandwidthManagerConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t MinimumGameplayReservedBandwidthInKbps; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDownlinkBandwidthManagerConfig, MinimumGameplayReservedBandwidthInKbps) == 40, "Offset mismatch for UDownlinkBandwidthManagerConfig::MinimumGameplayReservedBandwidthInKbps");
