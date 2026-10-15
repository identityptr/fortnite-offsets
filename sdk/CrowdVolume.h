/**
 * decamp dumper generated SDK
 * Package: /Script/CrowdVolume
 */
#pragma once
#include "Basic.h"

// /Script/CrowdVolume.CrowdSpawner
// Kind: Class; super: SceneComponent
class UCrowdSpawner
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    TArray<void*> CharacterMeshes; // 0x0240 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCrowdSpawner, CharacterMeshes) == 576, "Offset mismatch for UCrowdSpawner::CharacterMeshes");
