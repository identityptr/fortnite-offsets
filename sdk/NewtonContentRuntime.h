/**
 * decamp dumper generated SDK
 * Package: /Script/NewtonContentRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NewtonContentRuntime.FortAthenaMutator_NewtonCVarOverrides
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_NewtonCVarOverrides
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    TMap<void*, void*> OverrideCVars; // 0x02E0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortAthenaMutator_NewtonCVarOverrides, OverrideCVars) == 736, "Offset mismatch for UFortAthenaMutator_NewtonCVarOverrides::OverrideCVars");

// /Script/NewtonContentRuntime.FortAthenaMutator_NewtonPawnMovementOverrides
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_NewtonPawnMovementOverrides
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    void* MovementOverrideData; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaMutator_NewtonPawnMovementOverrides, MovementOverrideData) == 736, "Offset mismatch for UFortAthenaMutator_NewtonPawnMovementOverrides::MovementOverrideData");

// /Script/NewtonContentRuntime.FortAthenaMutator_NewtonPlayerPawn
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_NewtonPlayerPawn
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    TSoftClassPtr<void> OverridePawnClass; // 0x02E0 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortAthenaMutator_NewtonPlayerPawn, OverridePawnClass) == 736, "Offset mismatch for UFortAthenaMutator_NewtonPlayerPawn::OverridePawnClass");

// /Script/NewtonContentRuntime.FortAthenaMutator_NewtonRespawn
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_NewtonRespawn
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

static_assert(offsetof(UFortAthenaMutator_NewtonRespawn, bMutatesGameMode) == 688, "Offset mismatch for UFortAthenaMutator_NewtonRespawn::bMutatesGameMode");
static_assert(offsetof(UFortAthenaMutator_NewtonRespawn, CachedGameMode) == 696, "Offset mismatch for UFortAthenaMutator_NewtonRespawn::CachedGameMode");
static_assert(offsetof(UFortAthenaMutator_NewtonRespawn, CachedGameState) == 704, "Offset mismatch for UFortAthenaMutator_NewtonRespawn::CachedGameState");
static_assert(offsetof(UFortAthenaMutator_NewtonRespawn, InitializedPlayerControllers) == 712, "Offset mismatch for UFortAthenaMutator_NewtonRespawn::InitializedPlayerControllers");
static_assert(offsetof(UFortAthenaMutator_NewtonRespawn, OverridePriority) == 732, "Offset mismatch for UFortAthenaMutator_NewtonRespawn::OverridePriority");
static_assert(offsetof(UFortAthenaMutator_NewtonRespawn, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortAthenaMutator_NewtonRespawn::bOnlyRunOnGameThread");
