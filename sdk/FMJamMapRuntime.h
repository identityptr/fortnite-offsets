/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamMapRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMJamMapRuntime.FMJamMapInputBasedAFKComponent
// Kind: Class; super: FortInputBasedAFKComponent
class UFMJamMapInputBasedAFKComponent
{
public:
    std::uint8_t Pad_0000[0x1D8]; // 0x0000
    std::uint8_t AFKTableRowEntry[0x10]; // 0x01D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CachedAFKDetectionParameters[0x1]; // 0x01E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFMJamMapInputBasedAFKComponent, AFKTableRowEntry) == 472, "Offset mismatch for UFMJamMapInputBasedAFKComponent::AFKTableRowEntry");
static_assert(offsetof(UFMJamMapInputBasedAFKComponent, CachedAFKDetectionParameters) == 488, "Offset mismatch for UFMJamMapInputBasedAFKComponent::CachedAFKDetectionParameters");

// /Script/FMJamMapRuntime.FortAthenaMutator_FMJamPlayerIndicators
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_FMJamPlayerIndicators
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_FMJamPlayerIndicators, bMutatesGameMode) == 688, "Offset mismatch for UFortAthenaMutator_FMJamPlayerIndicators::bMutatesGameMode");
static_assert(offsetof(UFortAthenaMutator_FMJamPlayerIndicators, CachedGameMode) == 696, "Offset mismatch for UFortAthenaMutator_FMJamPlayerIndicators::CachedGameMode");
static_assert(offsetof(UFortAthenaMutator_FMJamPlayerIndicators, CachedGameState) == 704, "Offset mismatch for UFortAthenaMutator_FMJamPlayerIndicators::CachedGameState");
static_assert(offsetof(UFortAthenaMutator_FMJamPlayerIndicators, InitializedPlayerControllers) == 712, "Offset mismatch for UFortAthenaMutator_FMJamPlayerIndicators::InitializedPlayerControllers");
static_assert(offsetof(UFortAthenaMutator_FMJamPlayerIndicators, OverridePriority) == 732, "Offset mismatch for UFortAthenaMutator_FMJamPlayerIndicators::OverridePriority");
static_assert(offsetof(UFortAthenaMutator_FMJamPlayerIndicators, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortAthenaMutator_FMJamPlayerIndicators::bOnlyRunOnGameThread");

// /Script/FMJamMapRuntime.JamIslandPlayspaceComponent_ServerExpiration
// Kind: Class; super: PlayspaceComponent_ServerExpiration
class UJamIslandPlayspaceComponent_ServerExpiration
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    std::int32_t ReplicatedShutdownTimeInSeconds; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t StartShutdownTimerOnGracefulShutdownRequest; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableBackfillBeforeExpiration; // 0x015D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableBackfillOnGracefulShutdown; // 0x015E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x015F
    TArray<void*> AlertDataList; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ServerShutdownTimeInSeconds; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::int32_t DisableBackfillBeforeExpireTimeInSeconds; // 0x0174 (Size: 0x4, Type: IntProperty)
    std::int32_t PostShutdownForceRestartTimeInSeconds; // 0x0178 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x017C
    TSoftObjectPtr<void> UINotificationIcon; // 0x0180 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0003[0x48]; // 0x01A8
    std::uint8_t GracefulShutdownInitiatedEventHandle[0x20]; // 0x01F0 (Size: 0x20, Type: StructProperty)
    TArray<void*> ShutdownTimeOverrides; // 0x0210 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, ReplicatedShutdownTimeInSeconds) == 344, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::ReplicatedShutdownTimeInSeconds");
static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, StartShutdownTimerOnGracefulShutdownRequest) == 348, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::StartShutdownTimerOnGracefulShutdownRequest");
static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, bDisableBackfillBeforeExpiration) == 349, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::bDisableBackfillBeforeExpiration");
static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, bDisableBackfillOnGracefulShutdown) == 350, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::bDisableBackfillOnGracefulShutdown");
static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, AlertDataList) == 352, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::AlertDataList");
static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, ServerShutdownTimeInSeconds) == 368, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::ServerShutdownTimeInSeconds");
static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, DisableBackfillBeforeExpireTimeInSeconds) == 372, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::DisableBackfillBeforeExpireTimeInSeconds");
static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, PostShutdownForceRestartTimeInSeconds) == 376, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::PostShutdownForceRestartTimeInSeconds");
static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, UINotificationIcon) == 384, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::UINotificationIcon");
static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, GracefulShutdownInitiatedEventHandle) == 496, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::GracefulShutdownInitiatedEventHandle");
static_assert(offsetof(UJamIslandPlayspaceComponent_ServerExpiration, ShutdownTimeOverrides) == 528, "Offset mismatch for UJamIslandPlayspaceComponent_ServerExpiration::ShutdownTimeOverrides");
