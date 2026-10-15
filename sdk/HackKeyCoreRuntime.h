/**
 * decamp dumper generated SDK
 * Package: /Script/HackKeyCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HackKeyCoreRuntime.FortControllerComponent_HackKey
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_HackKey
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    TArray<void*> OwnedHackKeyIds; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortControllerComponent_HackKey, OwnedHackKeyIds) == 272, "Offset mismatch for UFortControllerComponent_HackKey::OwnedHackKeyIds");

// /Script/HackKeyCoreRuntime.FortHackKeyCoreData
// Kind: Class; super: PrimaryDataAsset
class UFortHackKeyCoreData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t KeyTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t Rarity; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t KeyName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    FText KeyDescription; // 0x0040 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortHackKeyCoreData, KeyTag) == 40, "Offset mismatch for UFortHackKeyCoreData::KeyTag");
static_assert(offsetof(UFortHackKeyCoreData, Rarity) == 44, "Offset mismatch for UFortHackKeyCoreData::Rarity");
static_assert(offsetof(UFortHackKeyCoreData, KeyName) == 48, "Offset mismatch for UFortHackKeyCoreData::KeyName");
static_assert(offsetof(UFortHackKeyCoreData, KeyDescription) == 64, "Offset mismatch for UFortHackKeyCoreData::KeyDescription");
