/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteGameTelemetry
 */
#pragma once
#include "Basic.h"

// /Script/FortniteGameTelemetry.PackageReadsTelemetryConfig
// Kind: ScriptStruct; super: none
struct FPackageReadsTelemetryConfig
{
public:
    std::uint8_t AssetCollectionEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t SampleSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxExpectedReads; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPackageReadsTelemetryConfig, AssetCollectionEnabled) == 0, "Offset mismatch for FPackageReadsTelemetryConfig::AssetCollectionEnabled");
static_assert(offsetof(FPackageReadsTelemetryConfig, SampleSize) == 4, "Offset mismatch for FPackageReadsTelemetryConfig::SampleSize");
static_assert(offsetof(FPackageReadsTelemetryConfig, MaxExpectedReads) == 8, "Offset mismatch for FPackageReadsTelemetryConfig::MaxExpectedReads");
