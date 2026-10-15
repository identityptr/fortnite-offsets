/**
 * decamp dumper generated SDK
 * Package: /Script/SocketSubsystemEOS
 */
#pragma once
#include "Basic.h"

// /Script/SocketSubsystemEOS.NetConnectionEOS
// Kind: Class; super: IpConnection
class UNetConnectionEOS
{
public:
    std::uint8_t Pad_0000[0x1A3C]; // 0x0000
    float SocketErrorDisconnectDelay; // 0x1A3C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNetConnectionEOS, SocketErrorDisconnectDelay) == 6716, "Offset mismatch for UNetConnectionEOS::SocketErrorDisconnectDelay");

// /Script/SocketSubsystemEOS.NetDriverEOS
// Kind: Class; super: IpNetDriver
class UNetDriverEOS
{
public:
    std::uint8_t Pad_0000[0x6F8]; // 0x0000
    std::uint8_t bIsPassthrough; // 0x06F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUsingP2PSockets; // 0x06F9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNetDriverEOS, bIsPassthrough) == 1784, "Offset mismatch for UNetDriverEOS::bIsPassthrough");
static_assert(offsetof(UNetDriverEOS, bIsUsingP2PSockets) == 1785, "Offset mismatch for UNetDriverEOS::bIsUsingP2PSockets");

// /Script/SocketSubsystemEOS.NetDriverEOSBase
// Kind: Class; super: NetDriverEOS
class UNetDriverEOSBase
{
public:
    std::uint8_t Pad_0000[0x6F8]; // 0x0000
    std::uint8_t bIsPassthrough; // 0x06F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUsingP2PSockets; // 0x06F9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNetDriverEOSBase, bIsPassthrough) == 1784, "Offset mismatch for UNetDriverEOSBase::bIsPassthrough");
static_assert(offsetof(UNetDriverEOSBase, bIsUsingP2PSockets) == 1785, "Offset mismatch for UNetDriverEOSBase::bIsUsingP2PSockets");
