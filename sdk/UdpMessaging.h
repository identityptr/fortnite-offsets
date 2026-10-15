/**
 * decamp dumper generated SDK
 * Package: /Script/UdpMessaging
 */
#pragma once
#include "Basic.h"

// /Script/UdpMessaging.UdpMockMessage
// Kind: ScriptStruct; super: none
struct FUdpMockMessage
{
public:
    TArray<void*> Data; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUdpMockMessage, Data) == 0, "Offset mismatch for FUdpMockMessage::Data");

// /Script/UdpMessaging.UdpMessagingSettings
// Kind: Class; super: Object
class UUdpMessagingSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EnabledByDefault; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnableTransport; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRepair; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002B
    float MaxSendRate; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint32_t AutoRepairAttemptLimit; // 0x0030 (Size: 0x4, Type: UInt32Property)
    std::uint16_t WorkQueueSize; // 0x0034 (Size: 0x2, Type: UInt16Property)
    std::uint16_t MaxPacketSize; // 0x0036 (Size: 0x2, Type: UInt16Property)
    std::uint8_t bSegmentationOffload; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0039
    float ReliableQueuePriority; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStopServiceWhenAppDeactivates; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0041
    FString UnicastEndpoint; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString MulticastEndpoint; // 0x0058 (Size: 0x10, Type: StrProperty)
    std::uint8_t MessageFormat; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MulticastTimeToLive; // 0x0069 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x6]; // 0x006A
    TArray<void*> StaticEndpoints; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludedEndpoints; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShareKnownNodesWithActiveConnections; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0091
    std::uint32_t MaxConcurrentDeserializationTasks; // 0x0094 (Size: 0x4, Type: UInt32Property)
    float ConnectionTimeoutPeriod; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EnableTunnel; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x009D
    FString TunnelUnicastEndpoint; // 0x00A0 (Size: 0x10, Type: StrProperty)
    FString TunnelMulticastEndpoint; // 0x00B0 (Size: 0x10, Type: StrProperty)
    TArray<void*> RemoteTunnelEndpoints; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUdpMessagingSettings, EnabledByDefault) == 40, "Offset mismatch for UUdpMessagingSettings::EnabledByDefault");
static_assert(offsetof(UUdpMessagingSettings, EnableTransport) == 41, "Offset mismatch for UUdpMessagingSettings::EnableTransport");
static_assert(offsetof(UUdpMessagingSettings, bAutoRepair) == 42, "Offset mismatch for UUdpMessagingSettings::bAutoRepair");
static_assert(offsetof(UUdpMessagingSettings, MaxSendRate) == 44, "Offset mismatch for UUdpMessagingSettings::MaxSendRate");
static_assert(offsetof(UUdpMessagingSettings, AutoRepairAttemptLimit) == 48, "Offset mismatch for UUdpMessagingSettings::AutoRepairAttemptLimit");
static_assert(offsetof(UUdpMessagingSettings, WorkQueueSize) == 52, "Offset mismatch for UUdpMessagingSettings::WorkQueueSize");
static_assert(offsetof(UUdpMessagingSettings, MaxPacketSize) == 54, "Offset mismatch for UUdpMessagingSettings::MaxPacketSize");
static_assert(offsetof(UUdpMessagingSettings, bSegmentationOffload) == 56, "Offset mismatch for UUdpMessagingSettings::bSegmentationOffload");
static_assert(offsetof(UUdpMessagingSettings, ReliableQueuePriority) == 60, "Offset mismatch for UUdpMessagingSettings::ReliableQueuePriority");
static_assert(offsetof(UUdpMessagingSettings, bStopServiceWhenAppDeactivates) == 64, "Offset mismatch for UUdpMessagingSettings::bStopServiceWhenAppDeactivates");
static_assert(offsetof(UUdpMessagingSettings, UnicastEndpoint) == 72, "Offset mismatch for UUdpMessagingSettings::UnicastEndpoint");
static_assert(offsetof(UUdpMessagingSettings, MulticastEndpoint) == 88, "Offset mismatch for UUdpMessagingSettings::MulticastEndpoint");
static_assert(offsetof(UUdpMessagingSettings, MessageFormat) == 104, "Offset mismatch for UUdpMessagingSettings::MessageFormat");
static_assert(offsetof(UUdpMessagingSettings, MulticastTimeToLive) == 105, "Offset mismatch for UUdpMessagingSettings::MulticastTimeToLive");
static_assert(offsetof(UUdpMessagingSettings, StaticEndpoints) == 112, "Offset mismatch for UUdpMessagingSettings::StaticEndpoints");
static_assert(offsetof(UUdpMessagingSettings, ExcludedEndpoints) == 128, "Offset mismatch for UUdpMessagingSettings::ExcludedEndpoints");
static_assert(offsetof(UUdpMessagingSettings, bShareKnownNodesWithActiveConnections) == 144, "Offset mismatch for UUdpMessagingSettings::bShareKnownNodesWithActiveConnections");
static_assert(offsetof(UUdpMessagingSettings, MaxConcurrentDeserializationTasks) == 148, "Offset mismatch for UUdpMessagingSettings::MaxConcurrentDeserializationTasks");
static_assert(offsetof(UUdpMessagingSettings, ConnectionTimeoutPeriod) == 152, "Offset mismatch for UUdpMessagingSettings::ConnectionTimeoutPeriod");
static_assert(offsetof(UUdpMessagingSettings, EnableTunnel) == 156, "Offset mismatch for UUdpMessagingSettings::EnableTunnel");
static_assert(offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint) == 160, "Offset mismatch for UUdpMessagingSettings::TunnelUnicastEndpoint");
static_assert(offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint) == 176, "Offset mismatch for UUdpMessagingSettings::TunnelMulticastEndpoint");
static_assert(offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints) == 192, "Offset mismatch for UUdpMessagingSettings::RemoteTunnelEndpoints");
