/**
 * decamp dumper generated SDK
 * Package: /Script/WebSocketNetworking
 */
#pragma once
#include "Basic.h"

// /Script/WebSocketNetworking.WebSocketConnection
// Kind: Class; super: NetConnection
class UWebSocketConnection
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Children; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Driver; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* PackageMapClass; // 0x0060 (Size: 0x8, Type: ClassProperty)
    void* PackageMap; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OpenChannels; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SentTemporaries; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* ViewTarget; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* OwningActor; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaxPacket; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t InternalAck; // 0x00A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A5
    TMap<void*, void*> ChildrenLookup; // 0x00A8 (Size: 0x10, Type: MapProperty)
    void* CachedNoPawnPlayerController; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0xC0]; // 0x00C0
    std::uint8_t PlayerID[0x78]; // 0x0180 (Size: 0x78, Type: StructProperty)
    double LastReceiveTime; // 0x01F8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0003[0x11D4]; // 0x0200
    std::int32_t DefaultMaxChannelSize; // 0x13D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x170]; // 0x13D8
    TArray<void*> ChannelsToTick; // 0x1548 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWebSocketConnection, Children) == 72, "Offset mismatch for UWebSocketConnection::Children");
static_assert(offsetof(UWebSocketConnection, Driver) == 88, "Offset mismatch for UWebSocketConnection::Driver");
static_assert(offsetof(UWebSocketConnection, PackageMapClass) == 96, "Offset mismatch for UWebSocketConnection::PackageMapClass");
static_assert(offsetof(UWebSocketConnection, PackageMap) == 104, "Offset mismatch for UWebSocketConnection::PackageMap");
static_assert(offsetof(UWebSocketConnection, OpenChannels) == 112, "Offset mismatch for UWebSocketConnection::OpenChannels");
static_assert(offsetof(UWebSocketConnection, SentTemporaries) == 128, "Offset mismatch for UWebSocketConnection::SentTemporaries");
static_assert(offsetof(UWebSocketConnection, ViewTarget) == 144, "Offset mismatch for UWebSocketConnection::ViewTarget");
static_assert(offsetof(UWebSocketConnection, OwningActor) == 152, "Offset mismatch for UWebSocketConnection::OwningActor");
static_assert(offsetof(UWebSocketConnection, MaxPacket) == 160, "Offset mismatch for UWebSocketConnection::MaxPacket");
static_assert(offsetof(UWebSocketConnection, InternalAck) == 164, "Offset mismatch for UWebSocketConnection::InternalAck");
static_assert(offsetof(UWebSocketConnection, ChildrenLookup) == 168, "Offset mismatch for UWebSocketConnection::ChildrenLookup");
static_assert(offsetof(UWebSocketConnection, CachedNoPawnPlayerController) == 184, "Offset mismatch for UWebSocketConnection::CachedNoPawnPlayerController");
static_assert(offsetof(UWebSocketConnection, PlayerID) == 384, "Offset mismatch for UWebSocketConnection::PlayerID");
static_assert(offsetof(UWebSocketConnection, LastReceiveTime) == 504, "Offset mismatch for UWebSocketConnection::LastReceiveTime");
static_assert(offsetof(UWebSocketConnection, DefaultMaxChannelSize) == 5076, "Offset mismatch for UWebSocketConnection::DefaultMaxChannelSize");
static_assert(offsetof(UWebSocketConnection, ChannelsToTick) == 5448, "Offset mismatch for UWebSocketConnection::ChannelsToTick");

// /Script/WebSocketNetworking.WebSocketNetDriver
// Kind: Class; super: NetDriver
class UWebSocketNetDriver
{
public:
    std::uint8_t Pad_0000[0x618]; // 0x0000
    std::int32_t WebSocketPort; // 0x0618 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UWebSocketNetDriver, WebSocketPort) == 1560, "Offset mismatch for UWebSocketNetDriver::WebSocketPort");
