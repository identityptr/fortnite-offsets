/**
 * decamp dumper generated SDK
 * Package: /Itemization/Director/BP_Itemization_UIDirectorComponent
 */
#pragma once
#include "Basic.h"

// /Itemization/Director/BP_Itemization_UIDirectorComponent.BP_Itemization_UIDirectorComponent_C
// Kind: BlueprintGeneratedClass; super: ItemizationDynamicUIDirectorComponent
class UBP_Itemization_UIDirectorComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> ItemizationScenes; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    void* InventoryScreenOverrideScene; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_Itemization_UIDirectorComponent_C, ItemizationScenes) == 192, "Offset mismatch for UBP_Itemization_UIDirectorComponent_C::ItemizationScenes");
static_assert(offsetof(UBP_Itemization_UIDirectorComponent_C, InventoryScreenOverrideScene) == 208, "Offset mismatch for UBP_Itemization_UIDirectorComponent_C::InventoryScreenOverrideScene");
