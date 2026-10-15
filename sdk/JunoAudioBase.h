/**
 * decamp dumper generated SDK
 * Package: /Script/JunoAudioBase
 */
#pragma once
#include "Basic.h"

// /Script/JunoAudioBase.JunoImpactSoundLibRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoImpactSoundLibRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Surface; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t SoundLibTag[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoImpactSoundLibRow, Surface) == 8, "Offset mismatch for FJunoImpactSoundLibRow::Surface");
static_assert(offsetof(FJunoImpactSoundLibRow, SoundLibTag) == 12, "Offset mismatch for FJunoImpactSoundLibRow::SoundLibTag");

// /Script/JunoAudioBase.JunoImpactSoundLibTagBasedRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoImpactSoundLibTagBasedRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Surface[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t SoundLibTag_Damage[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t SoundLibTag_NoDamage[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoImpactSoundLibTagBasedRow, Surface) == 8, "Offset mismatch for FJunoImpactSoundLibTagBasedRow::Surface");
static_assert(offsetof(FJunoImpactSoundLibTagBasedRow, SoundLibTag_Damage) == 40, "Offset mismatch for FJunoImpactSoundLibTagBasedRow::SoundLibTag_Damage");
static_assert(offsetof(FJunoImpactSoundLibTagBasedRow, SoundLibTag_NoDamage) == 44, "Offset mismatch for FJunoImpactSoundLibTagBasedRow::SoundLibTag_NoDamage");

// /Script/JunoAudioBase.JunoAudioBaseNativeFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoAudioBaseNativeFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
