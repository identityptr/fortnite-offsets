/**
 * decamp dumper generated SDK
 * Package: /Script/FortSpatialMetrics
 */
#pragma once
#include "Basic.h"

// /Script/FortSpatialMetrics.FortSpatialMetricsActorCount
// Kind: Class; super: SpatialMetricsQuantityMetric
class UFortSpatialMetricsActorCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortSpatialMetricsActorCount, QuantityProperties) == 1168, "Offset mismatch for UFortSpatialMetricsActorCount::QuantityProperties");

// /Script/FortSpatialMetrics.FortSpatialMetricsBuildingCount
// Kind: Class; super: FortSpatialMetricsActorCount
class UFortSpatialMetricsBuildingCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortSpatialMetricsBuildingCount, QuantityProperties) == 1168, "Offset mismatch for UFortSpatialMetricsBuildingCount::QuantityProperties");

// /Script/FortSpatialMetrics.FortSpatialMetricsLootContainerCount
// Kind: Class; super: FortSpatialMetricsActorCount
class UFortSpatialMetricsLootContainerCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortSpatialMetricsLootContainerCount, QuantityProperties) == 1168, "Offset mismatch for UFortSpatialMetricsLootContainerCount::QuantityProperties");

// /Script/FortSpatialMetrics.FortSpatialMetricsPickupCount
// Kind: Class; super: FortSpatialMetricsActorCount
class UFortSpatialMetricsPickupCount
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t QuantityProperties[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortSpatialMetricsPickupCount, QuantityProperties) == 1168, "Offset mismatch for UFortSpatialMetricsPickupCount::QuantityProperties");
