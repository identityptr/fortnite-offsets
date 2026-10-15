/**
 * decamp dumper generated SDK
 * Package: /Script/BugBiomeGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BugBiomeGameplayRuntime.BugBiomeSpawnerEncounterSet
// Kind: ScriptStruct; super: none
struct FBugBiomeSpawnerEncounterSet
{
public:
    std::uint8_t InitialEncounter[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SwarmEncounter[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> BomberEncounter; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FBugBiomeSpawnerEncounterSet, InitialEncounter) == 0, "Offset mismatch for FBugBiomeSpawnerEncounterSet::InitialEncounter");
static_assert(offsetof(FBugBiomeSpawnerEncounterSet, SwarmEncounter) == 32, "Offset mismatch for FBugBiomeSpawnerEncounterSet::SwarmEncounter");
static_assert(offsetof(FBugBiomeSpawnerEncounterSet, BomberEncounter) == 64, "Offset mismatch for FBugBiomeSpawnerEncounterSet::BomberEncounter");

// /Script/BugBiomeGameplayRuntime.BugBiomeSpawnerSettings
// Kind: ScriptStruct; super: none
struct FBugBiomeSpawnerSettings
{
public:
    std::uint8_t bAutomaticallyFindRewardActor; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float RewardActorRadius; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ConnectedRewardState; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bTriggerFromPlayerProximity; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000A
    float PlayerTriggerRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLinkWithNearbySpawners; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0011
    double NearbySpawnerLinkRadius; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FBugBiomeSpawnerSettings, bAutomaticallyFindRewardActor) == 0, "Offset mismatch for FBugBiomeSpawnerSettings::bAutomaticallyFindRewardActor");
static_assert(offsetof(FBugBiomeSpawnerSettings, RewardActorRadius) == 4, "Offset mismatch for FBugBiomeSpawnerSettings::RewardActorRadius");
static_assert(offsetof(FBugBiomeSpawnerSettings, ConnectedRewardState) == 8, "Offset mismatch for FBugBiomeSpawnerSettings::ConnectedRewardState");
static_assert(offsetof(FBugBiomeSpawnerSettings, bTriggerFromPlayerProximity) == 9, "Offset mismatch for FBugBiomeSpawnerSettings::bTriggerFromPlayerProximity");
static_assert(offsetof(FBugBiomeSpawnerSettings, PlayerTriggerRadius) == 12, "Offset mismatch for FBugBiomeSpawnerSettings::PlayerTriggerRadius");
static_assert(offsetof(FBugBiomeSpawnerSettings, bLinkWithNearbySpawners) == 16, "Offset mismatch for FBugBiomeSpawnerSettings::bLinkWithNearbySpawners");
static_assert(offsetof(FBugBiomeSpawnerSettings, NearbySpawnerLinkRadius) == 24, "Offset mismatch for FBugBiomeSpawnerSettings::NearbySpawnerLinkRadius");

// /Script/BugBiomeGameplayRuntime.FortBugBiomeSpawner
// Kind: Class; super: BuildingGameplayActor
class UFortBugBiomeSpawner
{
public:
    std::uint8_t Pad_0000[0x928]; // 0x0000
    TMap<void*, void*> TeamSizeToEncountersMap; // 0x0928 (Size: 0x10, Type: MapProperty)
    std::uint8_t DefaultEncounters[0x60]; // 0x0938 (Size: 0x60, Type: StructProperty)
    void* RewardActorClass; // 0x0998 (Size: 0x8, Type: ClassProperty)
    void* SphereCollision; // 0x09A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpawnSettings[0x20]; // 0x09A8 (Size: 0x20, Type: StructProperty)
    void* HitBoxBounds; // 0x09C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableAimAssist; // 0x09D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x09D1
    TArray<void*> LinkedSpawners; // 0x09D8 (Size: 0x10, Type: ArrayProperty)
    TSoftObjectPtr<void> ConnectedRewardActor; // 0x09E8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortBugBiomeSpawner, TeamSizeToEncountersMap) == 2344, "Offset mismatch for UFortBugBiomeSpawner::TeamSizeToEncountersMap");
static_assert(offsetof(UFortBugBiomeSpawner, DefaultEncounters) == 2360, "Offset mismatch for UFortBugBiomeSpawner::DefaultEncounters");
static_assert(offsetof(UFortBugBiomeSpawner, RewardActorClass) == 2456, "Offset mismatch for UFortBugBiomeSpawner::RewardActorClass");
static_assert(offsetof(UFortBugBiomeSpawner, SphereCollision) == 2464, "Offset mismatch for UFortBugBiomeSpawner::SphereCollision");
static_assert(offsetof(UFortBugBiomeSpawner, SpawnSettings) == 2472, "Offset mismatch for UFortBugBiomeSpawner::SpawnSettings");
static_assert(offsetof(UFortBugBiomeSpawner, HitBoxBounds) == 2504, "Offset mismatch for UFortBugBiomeSpawner::HitBoxBounds");
static_assert(offsetof(UFortBugBiomeSpawner, bEnableAimAssist) == 2512, "Offset mismatch for UFortBugBiomeSpawner::bEnableAimAssist");
static_assert(offsetof(UFortBugBiomeSpawner, LinkedSpawners) == 2520, "Offset mismatch for UFortBugBiomeSpawner::LinkedSpawners");
static_assert(offsetof(UFortBugBiomeSpawner, ConnectedRewardActor) == 2536, "Offset mismatch for UFortBugBiomeSpawner::ConnectedRewardActor");
