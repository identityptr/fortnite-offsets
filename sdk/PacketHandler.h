/**
 * decamp dumper generated SDK
 * Package: /Script/PacketHandler
 */
#pragma once
#include "Basic.h"

// /Script/PacketHandler.HandlerComponentFactory
// Kind: Class; super: Object
class UHandlerComponentFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PacketHandler.PacketHandlerProfileConfig
// Kind: Class; super: Object
class UPacketHandlerProfileConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Components; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPacketHandlerProfileConfig, Components) == 40, "Offset mismatch for UPacketHandlerProfileConfig::Components");
