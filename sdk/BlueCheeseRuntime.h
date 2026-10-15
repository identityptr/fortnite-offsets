/**
 * decamp dumper generated SDK
 * Package: /Script/BlueCheeseRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BlueCheeseRuntime.FortAthenaMutator_BlueCheese
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_BlueCheese
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

static_assert(offsetof(UFortAthenaMutator_BlueCheese, bMutatesGameMode) == 688, "Offset mismatch for UFortAthenaMutator_BlueCheese::bMutatesGameMode");
static_assert(offsetof(UFortAthenaMutator_BlueCheese, CachedGameMode) == 696, "Offset mismatch for UFortAthenaMutator_BlueCheese::CachedGameMode");
static_assert(offsetof(UFortAthenaMutator_BlueCheese, CachedGameState) == 704, "Offset mismatch for UFortAthenaMutator_BlueCheese::CachedGameState");
static_assert(offsetof(UFortAthenaMutator_BlueCheese, InitializedPlayerControllers) == 712, "Offset mismatch for UFortAthenaMutator_BlueCheese::InitializedPlayerControllers");
static_assert(offsetof(UFortAthenaMutator_BlueCheese, OverridePriority) == 732, "Offset mismatch for UFortAthenaMutator_BlueCheese::OverridePriority");
static_assert(offsetof(UFortAthenaMutator_BlueCheese, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortAthenaMutator_BlueCheese::bOnlyRunOnGameThread");
