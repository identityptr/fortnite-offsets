/**
 * decamp dumper generated SDK
 * Package: /Script/OnlineFrameworkUsabilityExperiment
 */
#pragma once
#include "Basic.h"

// /Script/OnlineFrameworkUsabilityExperiment.UsabilityExperimentNameHotfix
// Kind: ScriptStruct; super: none
struct FUsabilityExperimentNameHotfix
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Override; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FUsabilityExperimentNameHotfix, Name) == 0, "Offset mismatch for FUsabilityExperimentNameHotfix::Name");
static_assert(offsetof(FUsabilityExperimentNameHotfix, Override) == 16, "Offset mismatch for FUsabilityExperimentNameHotfix::Override");

// /Script/OnlineFrameworkUsabilityExperiment.UsabilityExperimentSubsystem
// Kind: Class; super: LocalPlayerSubsystem
class UUsabilityExperimentSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> FeatureGateNameHotfixes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DynamicConfigNameHotfixes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExperimentNameHotfixes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LayerNameHotfixes; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUsabilityExperimentSubsystem, FeatureGateNameHotfixes) == 48, "Offset mismatch for UUsabilityExperimentSubsystem::FeatureGateNameHotfixes");
static_assert(offsetof(UUsabilityExperimentSubsystem, DynamicConfigNameHotfixes) == 64, "Offset mismatch for UUsabilityExperimentSubsystem::DynamicConfigNameHotfixes");
static_assert(offsetof(UUsabilityExperimentSubsystem, ExperimentNameHotfixes) == 80, "Offset mismatch for UUsabilityExperimentSubsystem::ExperimentNameHotfixes");
static_assert(offsetof(UUsabilityExperimentSubsystem, LayerNameHotfixes) == 96, "Offset mismatch for UUsabilityExperimentSubsystem::LayerNameHotfixes");
