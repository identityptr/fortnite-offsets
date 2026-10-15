/**
 * decamp dumper generated SDK
 * Package: /FortRuntimeLandscape/Landscape/DA_RuntimeLandscapeSystemAssets
 */
#pragma once
#include "Basic.h"

// /FortRuntimeLandscape/Landscape/DA_RuntimeLandscapeSystemAssets.DA_RuntimeLandscapeSystemAssets_C
// Kind: BlueprintGeneratedClass; super: PrimaryDataAsset
class UDA_RuntimeLandscapeSystemAssets_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SystemMaterials; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SystemTextures; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Meshes; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDA_RuntimeLandscapeSystemAssets_C, SystemMaterials) == 40, "Offset mismatch for UDA_RuntimeLandscapeSystemAssets_C::SystemMaterials");
static_assert(offsetof(UDA_RuntimeLandscapeSystemAssets_C, SystemTextures) == 56, "Offset mismatch for UDA_RuntimeLandscapeSystemAssets_C::SystemTextures");
static_assert(offsetof(UDA_RuntimeLandscapeSystemAssets_C, Meshes) == 72, "Offset mismatch for UDA_RuntimeLandscapeSystemAssets_C::Meshes");
