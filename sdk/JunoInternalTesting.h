/**
 * decamp dumper generated SDK
 * Package: /Script/JunoInternalTesting
 */
#pragma once
#include "Basic.h"

// /Script/JunoInternalTesting.JunoInternalTestingAsset
// Kind: Class; super: PrimaryDataAsset
class UJunoInternalTestingAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> TestMaps; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoInternalTestingAsset, TestMaps) == 40, "Offset mismatch for UJunoInternalTestingAsset::TestMaps");
