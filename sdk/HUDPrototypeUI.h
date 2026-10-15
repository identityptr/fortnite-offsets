/**
 * decamp dumper generated SDK
 * Package: /Script/HUDPrototypeUI
 */
#pragma once
#include "Basic.h"

// /Script/HUDPrototypeUI.HUDPrototypeUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UHUDPrototypeUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    TArray<void*> PrototypeScenes; // 0x02A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHUDPrototypeUIDirector, PrototypeScenes) == 672, "Offset mismatch for UHUDPrototypeUIDirector::PrototypeScenes");
