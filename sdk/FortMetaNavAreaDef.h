/**
 * decamp dumper generated SDK
 * Package: /Game/Building/NavigationAreas/FortMetaNavAreaDef
 */
#pragma once
#include "Basic.h"

// /Game/Building/NavigationAreas/FortMetaNavAreaDef.FortMetaNavAreaDef_C
// Kind: BlueprintGeneratedClass; super: FortMetaNavArea
class UFortMetaNavAreaDef_C
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> AgentData; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMetaNavAreaDef_C, AgentData) == 72, "Offset mismatch for UFortMetaNavAreaDef_C::AgentData");
