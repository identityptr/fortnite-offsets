/**
 * decamp dumper generated SDK
 * Package: /Script/SproutLowMemoryFallbackRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SproutLowMemoryFallbackRuntime.SproutLowMemoryFallbackWorldSubsystem
// Kind: Class; super: JunoLowMemoryFallbackWorldSubsystem
class USproutLowMemoryFallbackWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString PluginName; // 0x0038 (Size: 0x10, Type: StrProperty)
    TArray<void*> Thresholds; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ThresholdStates; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x2C]; // 0x0068
    std::int32_t MemoryRollingAverageSamples; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USproutLowMemoryFallbackWorldSubsystem, PluginName) == 56, "Offset mismatch for USproutLowMemoryFallbackWorldSubsystem::PluginName");
static_assert(offsetof(USproutLowMemoryFallbackWorldSubsystem, Thresholds) == 72, "Offset mismatch for USproutLowMemoryFallbackWorldSubsystem::Thresholds");
static_assert(offsetof(USproutLowMemoryFallbackWorldSubsystem, ThresholdStates) == 88, "Offset mismatch for USproutLowMemoryFallbackWorldSubsystem::ThresholdStates");
static_assert(offsetof(USproutLowMemoryFallbackWorldSubsystem, MemoryRollingAverageSamples) == 148, "Offset mismatch for USproutLowMemoryFallbackWorldSubsystem::MemoryRollingAverageSamples");

// /Script/SproutLowMemoryFallbackRuntime.SproutSOStreamingDistance_LowMemoryFallbackStrategy
// Kind: Class; super: LowMemoryFallbackStrategy
class USproutSOStreamingDistance_LowMemoryFallbackStrategy
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float DistanceMultiplier; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USproutSOStreamingDistance_LowMemoryFallbackStrategy, DistanceMultiplier) == 56, "Offset mismatch for USproutSOStreamingDistance_LowMemoryFallbackStrategy::DistanceMultiplier");

// /Script/SproutLowMemoryFallbackRuntime.SproutUseAMUThrottling_LowMemoryFallbackStrategy
// Kind: Class; super: LowMemoryFallbackStrategy
class USproutUseAMUThrottling_LowMemoryFallbackStrategy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString FriendlyNameForAnalytics; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(USproutUseAMUThrottling_LowMemoryFallbackStrategy, FriendlyNameForAnalytics) == 40, "Offset mismatch for USproutUseAMUThrottling_LowMemoryFallbackStrategy::FriendlyNameForAnalytics");
