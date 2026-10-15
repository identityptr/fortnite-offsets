/**
 * decamp dumper generated SDK
 * Package: /Script/HackSystemCore
 */
#pragma once
#include "Basic.h"

// /Script/HackSystemCore.FortHackDataMinimal
// Kind: Class; super: PrimaryDataAsset
class UFortHackDataMinimal
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HackTag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t HackDisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t HackDescription[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t HackRarity; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortHackDataMinimal, HackTag) == 40, "Offset mismatch for UFortHackDataMinimal::HackTag");
static_assert(offsetof(UFortHackDataMinimal, HackDisplayName) == 48, "Offset mismatch for UFortHackDataMinimal::HackDisplayName");
static_assert(offsetof(UFortHackDataMinimal, HackDescription) == 64, "Offset mismatch for UFortHackDataMinimal::HackDescription");
static_assert(offsetof(UFortHackDataMinimal, HackRarity) == 80, "Offset mismatch for UFortHackDataMinimal::HackRarity");
