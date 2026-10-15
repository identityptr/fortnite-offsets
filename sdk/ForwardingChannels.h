/**
 * decamp dumper generated SDK
 * Package: /Script/ForwardingChannels
 */
#pragma once
#include "Basic.h"

// /Script/ForwardingChannels.ForwardingChannelFactory
// Kind: Class; super: Interface
class UForwardingChannelFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ForwardingChannels.ForwardingChannelsSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UForwardingChannelsSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> ForwardingChannelFactories; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UForwardingChannelsSubsystem, ForwardingChannelFactories) == 48, "Offset mismatch for UForwardingChannelsSubsystem::ForwardingChannelFactories");
