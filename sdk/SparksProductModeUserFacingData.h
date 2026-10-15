/**
 * decamp dumper generated SDK
 * Package: /SparksMatchmakingSettingsUI/Data/SparksProductModeUserFacingData
 */
#pragma once
#include "Basic.h"

// /SparksMatchmakingSettingsUI/Data/SparksProductModeUserFacingData.SparksProductModeUserFacingData_C
// Kind: BlueprintGeneratedClass; super: ProductModeUserFacingData
class USparksProductModeUserFacingData_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ProductModeValueMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USparksProductModeUserFacingData_C, ProductModeValueMap) == 40, "Offset mismatch for USparksProductModeUserFacingData_C::ProductModeValueMap");
