/**
 * decamp dumper generated SDK
 * Package: /Script/GameHubRuntime
 */
#pragma once
#include "Basic.h"

// /Script/GameHubRuntime.GameHubBaseMutator
// Kind: Class; super: FortAthenaMutator
class UGameHubBaseMutator
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

static_assert(offsetof(UGameHubBaseMutator, bMutatesGameMode) == 688, "Offset mismatch for UGameHubBaseMutator::bMutatesGameMode");
static_assert(offsetof(UGameHubBaseMutator, CachedGameMode) == 696, "Offset mismatch for UGameHubBaseMutator::CachedGameMode");
static_assert(offsetof(UGameHubBaseMutator, CachedGameState) == 704, "Offset mismatch for UGameHubBaseMutator::CachedGameState");
static_assert(offsetof(UGameHubBaseMutator, InitializedPlayerControllers) == 712, "Offset mismatch for UGameHubBaseMutator::InitializedPlayerControllers");
static_assert(offsetof(UGameHubBaseMutator, OverridePriority) == 732, "Offset mismatch for UGameHubBaseMutator::OverridePriority");
static_assert(offsetof(UGameHubBaseMutator, bOnlyRunOnGameThread) == 733, "Offset mismatch for UGameHubBaseMutator::bOnlyRunOnGameThread");

// /Script/GameHubRuntime.GameHubPlayerSpawningComponent
// Kind: Class; super: PlayspaceComponent_PlayerSpawning
class UGameHubPlayerSpawningComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t PlayerStartRequirements[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameHubPlayerSpawningComponent, PlayerStartRequirements) == 208, "Offset mismatch for UGameHubPlayerSpawningComponent::PlayerStartRequirements");

// /Script/GameHubRuntime.GameHubPlayspace
// Kind: Class; super: FortPlayspace
class UGameHubPlayspace
{
public:
    std::uint8_t Pad_0000[0x658]; // 0x0000
    std::uint8_t bSimulatePlayerDamage; // 0x0658 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0659
    std::uint8_t PlayerStartRequirements[0x1]; // 0x0660 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameHubPlayspace, bSimulatePlayerDamage) == 1624, "Offset mismatch for UGameHubPlayspace::bSimulatePlayerDamage");
static_assert(offsetof(UGameHubPlayspace, PlayerStartRequirements) == 1632, "Offset mismatch for UGameHubPlayspace::PlayerStartRequirements");
