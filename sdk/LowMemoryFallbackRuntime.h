/**
 * decamp dumper generated SDK
 * Package: /Script/LowMemoryFallbackRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LowMemoryFallbackRuntime.LowMemoryFallbackPressureBand
// Kind: ScriptStruct; super: none
struct FLowMemoryFallbackPressureBand
{
public:
    std::uint8_t min; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t max; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLowMemoryFallbackPressureBand, min) == 0, "Offset mismatch for FLowMemoryFallbackPressureBand::min");
static_assert(offsetof(FLowMemoryFallbackPressureBand, max) == 1, "Offset mismatch for FLowMemoryFallbackPressureBand::max");

// /Script/LowMemoryFallbackRuntime.LowMemoryFallbackThreshold
// Kind: ScriptStruct; super: none
struct FLowMemoryFallbackThreshold
{
public:
    std::uint8_t EnterRangeMB[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExitRangeMB[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    void* StrategyClass; // 0x0020 (Size: 0x8, Type: ClassProperty)
    float MinimumActivationTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EnterPressureBand[0x2]; // 0x002C (Size: 0x2, Type: StructProperty)
    std::uint8_t ExitPressureBand[0x1]; // 0x002E (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLowMemoryFallbackThreshold, EnterRangeMB) == 0, "Offset mismatch for FLowMemoryFallbackThreshold::EnterRangeMB");
static_assert(offsetof(FLowMemoryFallbackThreshold, ExitRangeMB) == 16, "Offset mismatch for FLowMemoryFallbackThreshold::ExitRangeMB");
static_assert(offsetof(FLowMemoryFallbackThreshold, StrategyClass) == 32, "Offset mismatch for FLowMemoryFallbackThreshold::StrategyClass");
static_assert(offsetof(FLowMemoryFallbackThreshold, MinimumActivationTime) == 40, "Offset mismatch for FLowMemoryFallbackThreshold::MinimumActivationTime");
static_assert(offsetof(FLowMemoryFallbackThreshold, EnterPressureBand) == 44, "Offset mismatch for FLowMemoryFallbackThreshold::EnterPressureBand");
static_assert(offsetof(FLowMemoryFallbackThreshold, ExitPressureBand) == 46, "Offset mismatch for FLowMemoryFallbackThreshold::ExitPressureBand");

// /Script/LowMemoryFallbackRuntime.LowMemoryFallbackThresholdState
// Kind: ScriptStruct; super: none
struct FLowMemoryFallbackThresholdState
{
public:
    void* Strategy; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLowMemoryFallbackThresholdState, Strategy) == 0, "Offset mismatch for FLowMemoryFallbackThresholdState::Strategy");

// /Script/LowMemoryFallbackRuntime.BootToFrontend_LowMemoryFallbackStrategy
// Kind: Class; super: LowMemoryFallbackStrategy
class UBootToFrontend_LowMemoryFallbackStrategy
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FText Message; // 0x0038 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UBootToFrontend_LowMemoryFallbackStrategy, Message) == 56, "Offset mismatch for UBootToFrontend_LowMemoryFallbackStrategy::Message");

// /Script/LowMemoryFallbackRuntime.LowMemoryFallbackStrategy
// Kind: Class; super: Object
class ULowMemoryFallbackStrategy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString FriendlyNameForAnalytics; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(ULowMemoryFallbackStrategy, FriendlyNameForAnalytics) == 40, "Offset mismatch for ULowMemoryFallbackStrategy::FriendlyNameForAnalytics");

// /Script/LowMemoryFallbackRuntime.LowMemoryFallbackWorldSubsystem
// Kind: Class; super: WorldSubsystem
class ULowMemoryFallbackWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString PluginName; // 0x0038 (Size: 0x10, Type: StrProperty)
    TArray<void*> Thresholds; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ThresholdStates; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x2C]; // 0x0068
    std::int32_t MemoryRollingAverageSamples; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(ULowMemoryFallbackWorldSubsystem, PluginName) == 56, "Offset mismatch for ULowMemoryFallbackWorldSubsystem::PluginName");
static_assert(offsetof(ULowMemoryFallbackWorldSubsystem, Thresholds) == 72, "Offset mismatch for ULowMemoryFallbackWorldSubsystem::Thresholds");
static_assert(offsetof(ULowMemoryFallbackWorldSubsystem, ThresholdStates) == 88, "Offset mismatch for ULowMemoryFallbackWorldSubsystem::ThresholdStates");
static_assert(offsetof(ULowMemoryFallbackWorldSubsystem, MemoryRollingAverageSamples) == 148, "Offset mismatch for ULowMemoryFallbackWorldSubsystem::MemoryRollingAverageSamples");

// /Script/LowMemoryFallbackRuntime.Toast_LowMemoryFallbackStrategy
// Kind: Class; super: LowMemoryFallbackStrategy
class UToast_LowMemoryFallbackStrategy
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ToastTitle[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t ToastDescription[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> ToastIcon; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UToast_LowMemoryFallbackStrategy, ToastTitle) == 56, "Offset mismatch for UToast_LowMemoryFallbackStrategy::ToastTitle");
static_assert(offsetof(UToast_LowMemoryFallbackStrategy, ToastDescription) == 72, "Offset mismatch for UToast_LowMemoryFallbackStrategy::ToastDescription");
static_assert(offsetof(UToast_LowMemoryFallbackStrategy, ToastIcon) == 88, "Offset mismatch for UToast_LowMemoryFallbackStrategy::ToastIcon");
