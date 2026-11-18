#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NetUI
{
    struct BadNetworkIndicatorVM
    {
        static constexpr std::string_view Name = "BadNetworkIndicatorVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x78;
            static constexpr std::uintptr_t MinimumDisplayTime = 0x7C;
            static constexpr std::uintptr_t UpdateTime = 0x80;
            static constexpr std::uintptr_t InitialDelay = 0x84;
            static constexpr std::uintptr_t HasBadPing = 0x88;
            static constexpr std::uintptr_t HasBadPacketLoss = 0x89;
            static constexpr std::uintptr_t HasSeverePing = 0x8A;
            static constexpr std::uintptr_t HasSeverePacketLoss = 0x8B;
            static constexpr std::uintptr_t OverrideStrobe = 0x8C;
            static constexpr std::uintptr_t ShouldDisplay = 0x8D;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bEnabled", 0x78, "BoolProperty"},
            {"MinimumDisplayTime", 0x7C, "FloatProperty"},
            {"UpdateTime", 0x80, "FloatProperty"},
            {"InitialDelay", 0x84, "FloatProperty"},
            {"HasBadPing", 0x88, "BoolProperty"},
            {"HasBadPacketLoss", 0x89, "BoolProperty"},
            {"HasSeverePing", 0x8A, "BoolProperty"},
            {"HasSeverePacketLoss", 0x8B, "BoolProperty"},
            {"OverrideStrobe", 0x8C, "BoolProperty"},
            {"ShouldDisplay", 0x8D, "BoolProperty"},
        }};
    };

    struct NetDebugWidget
    {
        static constexpr std::string_view Name = "NetDebugWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PingUI = 0x308;
            static constexpr std::uintptr_t PacketInRateUI = 0x310;
            static constexpr std::uintptr_t PacketOutRateUI = 0x318;
            static constexpr std::uintptr_t PacketInLossUI = 0x320;
            static constexpr std::uintptr_t PacketOutLossUI = 0x328;
            static constexpr std::uintptr_t UpBandwidthUI = 0x330;
            static constexpr std::uintptr_t DownBandwidthUI = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PingUI", 0x308, "ObjectProperty"},
            {"PacketInRateUI", 0x310, "ObjectProperty"},
            {"PacketOutRateUI", 0x318, "ObjectProperty"},
            {"PacketInLossUI", 0x320, "ObjectProperty"},
            {"PacketOutLossUI", 0x328, "ObjectProperty"},
            {"UpBandwidthUI", 0x330, "ObjectProperty"},
            {"DownBandwidthUI", 0x338, "ObjectProperty"},
        }};
    };

    struct NetGraph
    {
        static constexpr std::string_view Name = "NetGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BackgroundColor = 0x308;
            static constexpr std::uintptr_t PingLineColor = 0x30C;
            static constexpr std::uintptr_t QueuedBunchesLineColor = 0x310;
            static constexpr std::uintptr_t PacketLossLineColor = 0x314;
            static constexpr std::uintptr_t DesiredSize = 0x318;
            static constexpr std::uintptr_t MaxPingToGraph = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BackgroundColor", 0x308, "StructProperty"},
            {"PingLineColor", 0x30C, "StructProperty"},
            {"QueuedBunchesLineColor", 0x310, "StructProperty"},
            {"PacketLossLineColor", 0x314, "StructProperty"},
            {"DesiredSize", 0x318, "StructProperty"},
            {"MaxPingToGraph", 0x328, "FloatProperty"},
        }};
    };

}
