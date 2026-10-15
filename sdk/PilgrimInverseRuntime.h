/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimInverseRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimInverseRuntime.PilgrimInverseEvent_UsePortraitModeChanged
// Kind: ScriptStruct; super: none
struct FPilgrimInverseEvent_UsePortraitModeChanged
{
public:
    std::uint8_t bIsUsingPortraitMode; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimInverseEvent_UsePortraitModeChanged, bIsUsingPortraitMode) == 0, "Offset mismatch for FPilgrimInverseEvent_UsePortraitModeChanged::bIsUsingPortraitMode");

// /Script/PilgrimInverseRuntime.FortControllerComponent_PilgrimInverse
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_PilgrimInverse
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* WaitForEventRouterAction; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* EventRouter; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* SourceHapticFeedbackConfig; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* DefaultOverdriveReadyToDeployForceFeedback; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultOverdriveDeployedForceFeedback; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* DefaultGemHitForceFeedback; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* CustomOverdriveReadyToDeployForceFeedback; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* CustomOverdriveDeployedForceFeedback; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* CustomGemHitForceFeedback; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_PilgrimInverse, WaitForEventRouterAction) == 200, "Offset mismatch for UFortControllerComponent_PilgrimInverse::WaitForEventRouterAction");
static_assert(offsetof(UFortControllerComponent_PilgrimInverse, EventRouter) == 208, "Offset mismatch for UFortControllerComponent_PilgrimInverse::EventRouter");
static_assert(offsetof(UFortControllerComponent_PilgrimInverse, SourceHapticFeedbackConfig) == 216, "Offset mismatch for UFortControllerComponent_PilgrimInverse::SourceHapticFeedbackConfig");
static_assert(offsetof(UFortControllerComponent_PilgrimInverse, DefaultOverdriveReadyToDeployForceFeedback) == 224, "Offset mismatch for UFortControllerComponent_PilgrimInverse::DefaultOverdriveReadyToDeployForceFeedback");
static_assert(offsetof(UFortControllerComponent_PilgrimInverse, DefaultOverdriveDeployedForceFeedback) == 232, "Offset mismatch for UFortControllerComponent_PilgrimInverse::DefaultOverdriveDeployedForceFeedback");
static_assert(offsetof(UFortControllerComponent_PilgrimInverse, DefaultGemHitForceFeedback) == 240, "Offset mismatch for UFortControllerComponent_PilgrimInverse::DefaultGemHitForceFeedback");
static_assert(offsetof(UFortControllerComponent_PilgrimInverse, CustomOverdriveReadyToDeployForceFeedback) == 248, "Offset mismatch for UFortControllerComponent_PilgrimInverse::CustomOverdriveReadyToDeployForceFeedback");
static_assert(offsetof(UFortControllerComponent_PilgrimInverse, CustomOverdriveDeployedForceFeedback) == 256, "Offset mismatch for UFortControllerComponent_PilgrimInverse::CustomOverdriveDeployedForceFeedback");
static_assert(offsetof(UFortControllerComponent_PilgrimInverse, CustomGemHitForceFeedback) == 264, "Offset mismatch for UFortControllerComponent_PilgrimInverse::CustomGemHitForceFeedback");

// /Script/PilgrimInverseRuntime.PilgrimInverseCommonBPFL
// Kind: Class; super: BlueprintFunctionLibrary
class UPilgrimInverseCommonBPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimInverseRuntime.PlayspaceComponent_PilgrimInverseManager
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_PilgrimInverseManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* GameplayOverridesConfig; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x58]; // 0x00C8
    TArray<void*> PawnsToHide; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    void* PerfConfigOverride; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0138
    void* DefaultGameplayOverridesConfig; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    void* DefaultPerfConfig; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlayspaceComponent_PilgrimInverseManager, GameplayOverridesConfig) == 192, "Offset mismatch for UPlayspaceComponent_PilgrimInverseManager::GameplayOverridesConfig");
static_assert(offsetof(UPlayspaceComponent_PilgrimInverseManager, PawnsToHide) == 288, "Offset mismatch for UPlayspaceComponent_PilgrimInverseManager::PawnsToHide");
static_assert(offsetof(UPlayspaceComponent_PilgrimInverseManager, PerfConfigOverride) == 304, "Offset mismatch for UPlayspaceComponent_PilgrimInverseManager::PerfConfigOverride");
static_assert(offsetof(UPlayspaceComponent_PilgrimInverseManager, DefaultGameplayOverridesConfig) == 320, "Offset mismatch for UPlayspaceComponent_PilgrimInverseManager::DefaultGameplayOverridesConfig");
static_assert(offsetof(UPlayspaceComponent_PilgrimInverseManager, DefaultPerfConfig) == 328, "Offset mismatch for UPlayspaceComponent_PilgrimInverseManager::DefaultPerfConfig");
