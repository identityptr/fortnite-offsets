#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UdpMessaging
{
    struct UdpMessagingSettings
    {
        static constexpr std::string_view Name = "UdpMessagingSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledByDefault = 0x28;
            static constexpr std::uintptr_t EnableTransport = 0x29;
            static constexpr std::uintptr_t bAutoRepair = 0x2A;
            static constexpr std::uintptr_t MaxSendRate = 0x2C;
            static constexpr std::uintptr_t AutoRepairAttemptLimit = 0x30;
            static constexpr std::uintptr_t WorkQueueSize = 0x34;
            static constexpr std::uintptr_t MaxPacketSize = 0x36;
            static constexpr std::uintptr_t bSegmentationOffload = 0x38;
            static constexpr std::uintptr_t ReliableQueuePriority = 0x3C;
            static constexpr std::uintptr_t bStopServiceWhenAppDeactivates = 0x40;
            static constexpr std::uintptr_t UnicastEndpoint = 0x48;
            static constexpr std::uintptr_t MulticastEndpoint = 0x58;
            static constexpr std::uintptr_t MessageFormat = 0x68;
            static constexpr std::uintptr_t MulticastTimeToLive = 0x69;
            static constexpr std::uintptr_t StaticEndpoints = 0x70;
            static constexpr std::uintptr_t ExcludedEndpoints = 0x80;
            static constexpr std::uintptr_t bShareKnownNodesWithActiveConnections = 0x90;
            static constexpr std::uintptr_t MaxConcurrentDeserializationTasks = 0x94;
            static constexpr std::uintptr_t ConnectionTimeoutPeriod = 0x98;
            static constexpr std::uintptr_t EnableTunnel = 0x9C;
            static constexpr std::uintptr_t TunnelUnicastEndpoint = 0xA0;
            static constexpr std::uintptr_t TunnelMulticastEndpoint = 0xB0;
            static constexpr std::uintptr_t RemoteTunnelEndpoints = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"EnabledByDefault", 0x28, "BoolProperty"},
            {"EnableTransport", 0x29, "BoolProperty"},
            {"bAutoRepair", 0x2A, "BoolProperty"},
            {"MaxSendRate", 0x2C, "FloatProperty"},
            {"AutoRepairAttemptLimit", 0x30, "UInt32Property"},
            {"WorkQueueSize", 0x34, "UInt16Property"},
            {"MaxPacketSize", 0x36, "UInt16Property"},
            {"bSegmentationOffload", 0x38, "BoolProperty"},
            {"ReliableQueuePriority", 0x3C, "FloatProperty"},
            {"bStopServiceWhenAppDeactivates", 0x40, "BoolProperty"},
            {"UnicastEndpoint", 0x48, "StrProperty"},
            {"MulticastEndpoint", 0x58, "StrProperty"},
            {"MessageFormat", 0x68, "EnumProperty"},
            {"MulticastTimeToLive", 0x69, "ByteProperty"},
            {"StaticEndpoints", 0x70, "ArrayProperty"},
            {"ExcludedEndpoints", 0x80, "ArrayProperty"},
            {"bShareKnownNodesWithActiveConnections", 0x90, "BoolProperty"},
            {"MaxConcurrentDeserializationTasks", 0x94, "UInt32Property"},
            {"ConnectionTimeoutPeriod", 0x98, "FloatProperty"},
            {"EnableTunnel", 0x9C, "BoolProperty"},
            {"TunnelUnicastEndpoint", 0xA0, "StrProperty"},
            {"TunnelMulticastEndpoint", 0xB0, "StrProperty"},
            {"RemoteTunnelEndpoints", 0xC0, "ArrayProperty"},
        }};
    };

}
