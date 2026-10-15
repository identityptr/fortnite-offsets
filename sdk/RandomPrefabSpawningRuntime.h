/**
 * decamp dumper generated SDK
 * Package: /Script/RandomPrefabSpawningRuntime
 */
#pragma once
#include "Basic.h"

// /Script/RandomPrefabSpawningRuntime.FortRandomPrefabData
// Kind: ScriptStruct; super: none
struct FFortRandomPrefabData
{
public:
    void* Prefab; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Tags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t bEnabled[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortRandomPrefabData, Prefab) == 0, "Offset mismatch for FFortRandomPrefabData::Prefab");
static_assert(offsetof(FFortRandomPrefabData, Tags) == 8, "Offset mismatch for FFortRandomPrefabData::Tags");
static_assert(offsetof(FFortRandomPrefabData, bEnabled) == 40, "Offset mismatch for FFortRandomPrefabData::bEnabled");

// /Script/RandomPrefabSpawningRuntime.FortPrefabSpawner
// Kind: Class; super: Actor
class UFortPrefabSpawner
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t RequiredProperties[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    std::uint8_t bWorldReadyCalled; // 0x0298 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPrefabSpawner, RequiredProperties) == 632, "Offset mismatch for UFortPrefabSpawner::RequiredProperties");
static_assert(offsetof(UFortPrefabSpawner, bWorldReadyCalled) == 664, "Offset mismatch for UFortPrefabSpawner::bWorldReadyCalled");

// /Script/RandomPrefabSpawningRuntime.FortRandomPrefabSpawnHelper
// Kind: Class; super: GameStateComponent
class UFortRandomPrefabSpawnHelper
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TArray<void*> AllPrefabs; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PrefabPool; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00F0
    std::uint8_t bAcceptDuplicatesWhenOutOfUniquePrefabs[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortRandomPrefabSpawnHelper, AllPrefabs) == 208, "Offset mismatch for UFortRandomPrefabSpawnHelper::AllPrefabs");
static_assert(offsetof(UFortRandomPrefabSpawnHelper, PrefabPool) == 224, "Offset mismatch for UFortRandomPrefabSpawnHelper::PrefabPool");
static_assert(offsetof(UFortRandomPrefabSpawnHelper, bAcceptDuplicatesWhenOutOfUniquePrefabs) == 248, "Offset mismatch for UFortRandomPrefabSpawnHelper::bAcceptDuplicatesWhenOutOfUniquePrefabs");
