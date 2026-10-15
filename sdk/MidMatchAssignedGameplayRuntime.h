/**
 * decamp dumper generated SDK
 * Package: /Script/MidMatchAssignedGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MidMatchAssignedGameplayRuntime.FortAssignedObjectiveData
// Kind: ScriptStruct; super: none
struct FFortAssignedObjectiveData
{
public:
    TArray<void*> AssignedSquadDataArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ObjectiveLocation[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAssignedObjectiveData, AssignedSquadDataArray) == 0, "Offset mismatch for FFortAssignedObjectiveData::AssignedSquadDataArray");
static_assert(offsetof(FFortAssignedObjectiveData, ObjectiveLocation) == 16, "Offset mismatch for FFortAssignedObjectiveData::ObjectiveLocation");

// /Script/MidMatchAssignedGameplayRuntime.FortAssignedObjectiveSquadData
// Kind: ScriptStruct; super: none
struct FFortAssignedObjectiveSquadData
{
public:
    std::uint8_t SquadId; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t CachedSquadAvgLocation[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAssignedObjectiveSquadData, SquadId) == 0, "Offset mismatch for FFortAssignedObjectiveSquadData::SquadId");
static_assert(offsetof(FFortAssignedObjectiveSquadData, CachedSquadAvgLocation) == 8, "Offset mismatch for FFortAssignedObjectiveSquadData::CachedSquadAvgLocation");

// /Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective
// Kind: Class; super: FortGameStateComponent_MidMatchObjectiveParent
class UFortGameStateComponent_AssignedObjective
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t IdealNumSquadsPerObjective[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAllowUnopposedSquads[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinPairedSquadDistForUnopposed[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t UnopposedSquad_FakeSquadMaxSafeZonePct[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t UnopposedSquad_FakeSquadMinDistToSquad[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnObjectivesInsideSafeZonePct[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t AssignedObjectiveLocationEnvQuery[0x20]; // 0x01B8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> AssignedObjectives; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameStateComponent_AssignedObjective, IdealNumSquadsPerObjective) == 200, "Offset mismatch for UFortGameStateComponent_AssignedObjective::IdealNumSquadsPerObjective");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, bAllowUnopposedSquads) == 240, "Offset mismatch for UFortGameStateComponent_AssignedObjective::bAllowUnopposedSquads");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, MinPairedSquadDistForUnopposed) == 280, "Offset mismatch for UFortGameStateComponent_AssignedObjective::MinPairedSquadDistForUnopposed");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, UnopposedSquad_FakeSquadMaxSafeZonePct) == 320, "Offset mismatch for UFortGameStateComponent_AssignedObjective::UnopposedSquad_FakeSquadMaxSafeZonePct");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, UnopposedSquad_FakeSquadMinDistToSquad) == 360, "Offset mismatch for UFortGameStateComponent_AssignedObjective::UnopposedSquad_FakeSquadMinDistToSquad");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, SpawnObjectivesInsideSafeZonePct) == 400, "Offset mismatch for UFortGameStateComponent_AssignedObjective::SpawnObjectivesInsideSafeZonePct");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, AssignedObjectiveLocationEnvQuery) == 440, "Offset mismatch for UFortGameStateComponent_AssignedObjective::AssignedObjectiveLocationEnvQuery");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, AssignedObjectives) == 472, "Offset mismatch for UFortGameStateComponent_AssignedObjective::AssignedObjectives");

// /Script/MidMatchAssignedGameplayRuntime.FortQueryContext_SpawnedObjectiveLocations
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_SpawnedObjectiveLocations
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MidMatchAssignedGameplayRuntime.FortQueryContext_SquadAvgLocationsForObjective
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_SquadAvgLocationsForObjective
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MidMatchAssignedGameplayRuntime.FortQueryTest_ClosestPlayersToObjectiveDeltaDistance
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bUseDistance2D; // 0x01F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance, bUseDistance2D) == 504, "Offset mismatch for UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance::bUseDistance2D");
