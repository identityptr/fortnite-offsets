/**
 * decamp dumper generated SDK
 * Package: /Script/LiveTrace
 */
#pragma once
#include "Basic.h"

// /Script/LiveTrace.LiveTraceDiscovery
// Kind: ScriptStruct; super: none
struct FLiveTraceDiscovery
{
public:
    std::uint8_t SessionID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t UserNetId[0x30]; // 0x0020 (Size: 0x30, Type: StructProperty)
    std::uint8_t bIsServer; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLiveTraceDiscovery, SessionID) == 0, "Offset mismatch for FLiveTraceDiscovery::SessionID");
static_assert(offsetof(FLiveTraceDiscovery, InstanceID) == 16, "Offset mismatch for FLiveTraceDiscovery::InstanceID");
static_assert(offsetof(FLiveTraceDiscovery, UserNetId) == 32, "Offset mismatch for FLiveTraceDiscovery::UserNetId");
static_assert(offsetof(FLiveTraceDiscovery, bIsServer) == 80, "Offset mismatch for FLiveTraceDiscovery::bIsServer");

// /Script/LiveTrace.LiveTraceDiscoveryPing
// Kind: ScriptStruct; super: none
struct FLiveTraceDiscoveryPing
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveTrace.LiveTraceDataChannel
// Kind: Class; super: Channel
class ULiveTraceDataChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Connection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULiveTraceDataChannel, Connection) == 40, "Offset mismatch for ULiveTraceDataChannel::Connection");
