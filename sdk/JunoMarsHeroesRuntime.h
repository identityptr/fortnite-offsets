/**
 * decamp dumper generated SDK
 * Package: /Script/JunoMarsHeroesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoMarsHeroesRuntime.JunoMarsHeroesCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoMarsHeroesCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* InputMappingDataA; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* InputMappingDataB; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* InputMappingDataC; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoMarsHeroesCheatManager, InputMappingDataA) == 40, "Offset mismatch for UJunoMarsHeroesCheatManager::InputMappingDataA");
static_assert(offsetof(UJunoMarsHeroesCheatManager, InputMappingDataB) == 48, "Offset mismatch for UJunoMarsHeroesCheatManager::InputMappingDataB");
static_assert(offsetof(UJunoMarsHeroesCheatManager, InputMappingDataC) == 56, "Offset mismatch for UJunoMarsHeroesCheatManager::InputMappingDataC");
