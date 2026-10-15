/**
 * decamp dumper generated SDK
 * Package: /Script/VerseSimulationMetadata
 */
#pragma once
#include "Basic.h"

// /Script/VerseSimulationMetadata.VerseSimulationAttribConfig
// Kind: Class; super: Object
class UVerseSimulationAttribConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllowedEditablePropertyNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DisallowedEditablePropertyNames; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DisallowedObjectPropertyClasses; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowTuples; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMultidimensionalArrays; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFilterProperties; // 0x005A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFilterObjectProperties; // 0x005B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVerseSimulationAttribConfig, AllowedEditablePropertyNames) == 40, "Offset mismatch for UVerseSimulationAttribConfig::AllowedEditablePropertyNames");
static_assert(offsetof(UVerseSimulationAttribConfig, DisallowedEditablePropertyNames) == 56, "Offset mismatch for UVerseSimulationAttribConfig::DisallowedEditablePropertyNames");
static_assert(offsetof(UVerseSimulationAttribConfig, DisallowedObjectPropertyClasses) == 72, "Offset mismatch for UVerseSimulationAttribConfig::DisallowedObjectPropertyClasses");
static_assert(offsetof(UVerseSimulationAttribConfig, bAllowTuples) == 88, "Offset mismatch for UVerseSimulationAttribConfig::bAllowTuples");
static_assert(offsetof(UVerseSimulationAttribConfig, bAllowMultidimensionalArrays) == 89, "Offset mismatch for UVerseSimulationAttribConfig::bAllowMultidimensionalArrays");
static_assert(offsetof(UVerseSimulationAttribConfig, bFilterProperties) == 90, "Offset mismatch for UVerseSimulationAttribConfig::bFilterProperties");
static_assert(offsetof(UVerseSimulationAttribConfig, bFilterObjectProperties) == 91, "Offset mismatch for UVerseSimulationAttribConfig::bFilterObjectProperties");
