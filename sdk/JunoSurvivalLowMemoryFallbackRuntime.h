/**
 * decamp dumper generated SDK
 * Package: /Script/JunoSurvivalLowMemoryFallbackRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoSurvivalLowMemoryFallbackRuntime.JunoSurvivalLowMemoryFallbackWorldSubsystem
// Kind: Class; super: JunoLowMemoryFallbackWorldSubsystem
class UJunoSurvivalLowMemoryFallbackWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString PluginName; // 0x0038 (Size: 0x10, Type: StrProperty)
    TArray<void*> Thresholds; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ThresholdStates; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x2C]; // 0x0068
    std::int32_t MemoryRollingAverageSamples; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoSurvivalLowMemoryFallbackWorldSubsystem, PluginName) == 56, "Offset mismatch for UJunoSurvivalLowMemoryFallbackWorldSubsystem::PluginName");
static_assert(offsetof(UJunoSurvivalLowMemoryFallbackWorldSubsystem, Thresholds) == 72, "Offset mismatch for UJunoSurvivalLowMemoryFallbackWorldSubsystem::Thresholds");
static_assert(offsetof(UJunoSurvivalLowMemoryFallbackWorldSubsystem, ThresholdStates) == 88, "Offset mismatch for UJunoSurvivalLowMemoryFallbackWorldSubsystem::ThresholdStates");
static_assert(offsetof(UJunoSurvivalLowMemoryFallbackWorldSubsystem, MemoryRollingAverageSamples) == 148, "Offset mismatch for UJunoSurvivalLowMemoryFallbackWorldSubsystem::MemoryRollingAverageSamples");
