/**
 * decamp dumper generated SDK
 * Package: /Script/LatencyUI
 */
#pragma once
#include "Basic.h"

// /Script/LatencyUI.LatencyGraph
// Kind: Class; super: UserWidget
class ULatencyGraph
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t TotalLatencyLineColor[0x4]; // 0x0308 (Size: 0x4, Type: StructProperty)
    std::uint8_t GameLatencyLineColor[0x4]; // 0x030C (Size: 0x4, Type: StructProperty)
    std::uint8_t RenderLatencyLineColor[0x4]; // 0x0310 (Size: 0x4, Type: StructProperty)
    std::uint8_t DriverLatencyLineColor[0x4]; // 0x0314 (Size: 0x4, Type: StructProperty)
    std::uint8_t OSWorkQueueLatencyLineColor[0x4]; // 0x0318 (Size: 0x4, Type: StructProperty)
    std::uint8_t GPURenderLatencyLineColor[0x4]; // 0x031C (Size: 0x4, Type: StructProperty)
    std::uint8_t BackgroundColor[0x4]; // 0x0320 (Size: 0x4, Type: StructProperty)
    float MaxLatencyToGraph; // 0x0324 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DesiredSize[0x1]; // 0x0328 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULatencyGraph, TotalLatencyLineColor) == 776, "Offset mismatch for ULatencyGraph::TotalLatencyLineColor");
static_assert(offsetof(ULatencyGraph, GameLatencyLineColor) == 780, "Offset mismatch for ULatencyGraph::GameLatencyLineColor");
static_assert(offsetof(ULatencyGraph, RenderLatencyLineColor) == 784, "Offset mismatch for ULatencyGraph::RenderLatencyLineColor");
static_assert(offsetof(ULatencyGraph, DriverLatencyLineColor) == 788, "Offset mismatch for ULatencyGraph::DriverLatencyLineColor");
static_assert(offsetof(ULatencyGraph, OSWorkQueueLatencyLineColor) == 792, "Offset mismatch for ULatencyGraph::OSWorkQueueLatencyLineColor");
static_assert(offsetof(ULatencyGraph, GPURenderLatencyLineColor) == 796, "Offset mismatch for ULatencyGraph::GPURenderLatencyLineColor");
static_assert(offsetof(ULatencyGraph, BackgroundColor) == 800, "Offset mismatch for ULatencyGraph::BackgroundColor");
static_assert(offsetof(ULatencyGraph, MaxLatencyToGraph) == 804, "Offset mismatch for ULatencyGraph::MaxLatencyToGraph");
static_assert(offsetof(ULatencyGraph, DesiredSize) == 808, "Offset mismatch for ULatencyGraph::DesiredSize");

// /Script/LatencyUI.LatencyWidget
// Kind: Class; super: UserWidget
class ULatencyWidget
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* TotalLatencyUI; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* GameLatencyUI; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* RenderLatencyUI; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* OSWorkLatencyUI; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* DriverLatencyUI; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* GPURenderLatencyUI; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* TweakLatencyUI; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULatencyWidget, TotalLatencyUI) == 784, "Offset mismatch for ULatencyWidget::TotalLatencyUI");
static_assert(offsetof(ULatencyWidget, GameLatencyUI) == 792, "Offset mismatch for ULatencyWidget::GameLatencyUI");
static_assert(offsetof(ULatencyWidget, RenderLatencyUI) == 800, "Offset mismatch for ULatencyWidget::RenderLatencyUI");
static_assert(offsetof(ULatencyWidget, OSWorkLatencyUI) == 808, "Offset mismatch for ULatencyWidget::OSWorkLatencyUI");
static_assert(offsetof(ULatencyWidget, DriverLatencyUI) == 816, "Offset mismatch for ULatencyWidget::DriverLatencyUI");
static_assert(offsetof(ULatencyWidget, GPURenderLatencyUI) == 824, "Offset mismatch for ULatencyWidget::GPURenderLatencyUI");
static_assert(offsetof(ULatencyWidget, TweakLatencyUI) == 832, "Offset mismatch for ULatencyWidget::TweakLatencyUI");
