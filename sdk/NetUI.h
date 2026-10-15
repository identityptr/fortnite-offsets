/**
 * decamp dumper generated SDK
 * Package: /Script/NetUI
 */
#pragma once
#include "Basic.h"

// /Script/NetUI.BadNetworkIndicatorVM
// Kind: Class; super: FortPerUserViewModel
class UBadNetworkIndicatorVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bEnabled; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    float MinimumDisplayTime; // 0x007C (Size: 0x4, Type: FloatProperty)
    float UpdateTime; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float InitialDelay; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HasBadPing; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasBadPacketLoss; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasSeverePing; // 0x008A (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasSeverePacketLoss; // 0x008B (Size: 0x1, Type: BoolProperty)
    std::uint8_t OverrideStrobe; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldDisplay; // 0x008D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBadNetworkIndicatorVM, bEnabled) == 120, "Offset mismatch for UBadNetworkIndicatorVM::bEnabled");
static_assert(offsetof(UBadNetworkIndicatorVM, MinimumDisplayTime) == 124, "Offset mismatch for UBadNetworkIndicatorVM::MinimumDisplayTime");
static_assert(offsetof(UBadNetworkIndicatorVM, UpdateTime) == 128, "Offset mismatch for UBadNetworkIndicatorVM::UpdateTime");
static_assert(offsetof(UBadNetworkIndicatorVM, InitialDelay) == 132, "Offset mismatch for UBadNetworkIndicatorVM::InitialDelay");
static_assert(offsetof(UBadNetworkIndicatorVM, HasBadPing) == 136, "Offset mismatch for UBadNetworkIndicatorVM::HasBadPing");
static_assert(offsetof(UBadNetworkIndicatorVM, HasBadPacketLoss) == 137, "Offset mismatch for UBadNetworkIndicatorVM::HasBadPacketLoss");
static_assert(offsetof(UBadNetworkIndicatorVM, HasSeverePing) == 138, "Offset mismatch for UBadNetworkIndicatorVM::HasSeverePing");
static_assert(offsetof(UBadNetworkIndicatorVM, HasSeverePacketLoss) == 139, "Offset mismatch for UBadNetworkIndicatorVM::HasSeverePacketLoss");
static_assert(offsetof(UBadNetworkIndicatorVM, OverrideStrobe) == 140, "Offset mismatch for UBadNetworkIndicatorVM::OverrideStrobe");
static_assert(offsetof(UBadNetworkIndicatorVM, ShouldDisplay) == 141, "Offset mismatch for UBadNetworkIndicatorVM::ShouldDisplay");

// /Script/NetUI.NetDebugWidget
// Kind: Class; super: UserWidget
class UNetDebugWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* PingUI; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* PacketInRateUI; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* PacketOutRateUI; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* PacketInLossUI; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* PacketOutLossUI; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* UpBandwidthUI; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* DownBandwidthUI; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNetDebugWidget, PingUI) == 776, "Offset mismatch for UNetDebugWidget::PingUI");
static_assert(offsetof(UNetDebugWidget, PacketInRateUI) == 784, "Offset mismatch for UNetDebugWidget::PacketInRateUI");
static_assert(offsetof(UNetDebugWidget, PacketOutRateUI) == 792, "Offset mismatch for UNetDebugWidget::PacketOutRateUI");
static_assert(offsetof(UNetDebugWidget, PacketInLossUI) == 800, "Offset mismatch for UNetDebugWidget::PacketInLossUI");
static_assert(offsetof(UNetDebugWidget, PacketOutLossUI) == 808, "Offset mismatch for UNetDebugWidget::PacketOutLossUI");
static_assert(offsetof(UNetDebugWidget, UpBandwidthUI) == 816, "Offset mismatch for UNetDebugWidget::UpBandwidthUI");
static_assert(offsetof(UNetDebugWidget, DownBandwidthUI) == 824, "Offset mismatch for UNetDebugWidget::DownBandwidthUI");

// /Script/NetUI.NetGraph
// Kind: Class; super: UserWidget
class UNetGraph
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t BackgroundColor[0x4]; // 0x0308 (Size: 0x4, Type: StructProperty)
    std::uint8_t PingLineColor[0x4]; // 0x030C (Size: 0x4, Type: StructProperty)
    std::uint8_t QueuedBunchesLineColor[0x4]; // 0x0310 (Size: 0x4, Type: StructProperty)
    std::uint8_t PacketLossLineColor[0x4]; // 0x0314 (Size: 0x4, Type: StructProperty)
    std::uint8_t DesiredSize[0x10]; // 0x0318 (Size: 0x10, Type: StructProperty)
    float MaxPingToGraph; // 0x0328 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNetGraph, BackgroundColor) == 776, "Offset mismatch for UNetGraph::BackgroundColor");
static_assert(offsetof(UNetGraph, PingLineColor) == 780, "Offset mismatch for UNetGraph::PingLineColor");
static_assert(offsetof(UNetGraph, QueuedBunchesLineColor) == 784, "Offset mismatch for UNetGraph::QueuedBunchesLineColor");
static_assert(offsetof(UNetGraph, PacketLossLineColor) == 788, "Offset mismatch for UNetGraph::PacketLossLineColor");
static_assert(offsetof(UNetGraph, DesiredSize) == 792, "Offset mismatch for UNetGraph::DesiredSize");
static_assert(offsetof(UNetGraph, MaxPingToGraph) == 808, "Offset mismatch for UNetGraph::MaxPingToGraph");
