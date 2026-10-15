/**
 * decamp dumper generated SDK
 * Package: /Script/CsvMetrics
 */
#pragma once
#include "Basic.h"

// /Script/CsvMetrics.CsvActorCountMetric
// Kind: Class; super: WorldMetricInterface
class UCsvActorCountMetric
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CsvMetrics.CsvMetricsSubsystem
// Kind: Class; super: WorldSubsystem
class UCsvMetricsSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> MetricClasses; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCsvMetricsSubsystem, MetricClasses) == 56, "Offset mismatch for UCsvMetricsSubsystem::MetricClasses");
