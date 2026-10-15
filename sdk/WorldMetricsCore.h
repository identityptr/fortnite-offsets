/**
 * decamp dumper generated SDK
 * Package: /Script/WorldMetricsCore
 */
#pragma once
#include "Basic.h"

// /Script/WorldMetricsCore.WorldMetricCollection
// Kind: ScriptStruct; super: none
struct FWorldMetricCollection
{
public:
    TArray<void*> Metrics; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> Subsystem; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsEnabled; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FWorldMetricCollection, Metrics) == 0, "Offset mismatch for FWorldMetricCollection::Metrics");
static_assert(offsetof(FWorldMetricCollection, Subsystem) == 16, "Offset mismatch for FWorldMetricCollection::Subsystem");
static_assert(offsetof(FWorldMetricCollection, bIsEnabled) == 24, "Offset mismatch for FWorldMetricCollection::bIsEnabled");

// /Script/WorldMetricsCore.WorldMetricInterface
// Kind: Class; super: Object
class UWorldMetricInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WorldMetricsCore.WorldMetricsActorTracker
// Kind: Class; super: WorldMetricsExtension
class UWorldMetricsActorTracker
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WorldMetricsCore.WorldMetricsActorTrackerSubscriber
// Kind: Class; super: Interface
class UWorldMetricsActorTrackerSubscriber
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WorldMetricsCore.WorldMetricsExtension
// Kind: Class; super: Object
class UWorldMetricsExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WorldMetricsCore.WorldMetricsSubsystem
// Kind: Class; super: WorldSubsystem
class UWorldMetricsSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Metrics; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18C8]; // 0x0058
    float UpdateRateInSeconds; // 0x1920 (Size: 0x4, Type: FloatProperty)
    std::int32_t WarmUpFrames; // 0x1924 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UWorldMetricsSubsystem, Metrics) == 72, "Offset mismatch for UWorldMetricsSubsystem::Metrics");
static_assert(offsetof(UWorldMetricsSubsystem, UpdateRateInSeconds) == 6432, "Offset mismatch for UWorldMetricsSubsystem::UpdateRateInSeconds");
static_assert(offsetof(UWorldMetricsSubsystem, WarmUpFrames) == 6436, "Offset mismatch for UWorldMetricsSubsystem::WarmUpFrames");
