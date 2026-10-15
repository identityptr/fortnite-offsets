/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeDynamicUIClient
 */
#pragma once
#include "Basic.h"

// /Script/CreativeDynamicUIClient.CreativeDynamicUIDirectorComponent
// Kind: Class; super: FortDynamicUIDirectorComponent
class UCreativeDynamicUIDirectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> CreativeScenesMap; // 0x00C0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00D0
    TArray<void*> MinigameStateScenes; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ActiveScenesMap; // 0x00F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCreativeDynamicUIDirectorComponent, CreativeScenesMap) == 192, "Offset mismatch for UCreativeDynamicUIDirectorComponent::CreativeScenesMap");
static_assert(offsetof(UCreativeDynamicUIDirectorComponent, MinigameStateScenes) == 224, "Offset mismatch for UCreativeDynamicUIDirectorComponent::MinigameStateScenes");
static_assert(offsetof(UCreativeDynamicUIDirectorComponent, ActiveScenesMap) == 240, "Offset mismatch for UCreativeDynamicUIDirectorComponent::ActiveScenesMap");

// /Script/CreativeDynamicUIClient.CreativeDynamicUILibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCreativeDynamicUILibrary
{
public:
    std::uint8_t Opaque[1];
};
