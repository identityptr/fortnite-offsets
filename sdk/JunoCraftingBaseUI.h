/**
 * decamp dumper generated SDK
 * Package: /Script/JunoCraftingBaseUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoCraftingBaseUI.JunoBuildingFrontendUIData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoBuildingFrontendUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> RequiredRecipes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoBuildingFrontendUIData, RequiredRecipes) == 8, "Offset mismatch for FJunoBuildingFrontendUIData::RequiredRecipes");

// /Script/JunoCraftingBaseUI.JunoCraftingIngredientShopUIData
// Kind: ScriptStruct; super: CraftingIngredientUIData
struct FJunoCraftingIngredientShopUIData
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t Rarity; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoCraftingIngredientShopUIData, DisplayName) == 80, "Offset mismatch for FJunoCraftingIngredientShopUIData::DisplayName");
static_assert(offsetof(FJunoCraftingIngredientShopUIData, Rarity) == 96, "Offset mismatch for FJunoCraftingIngredientShopUIData::Rarity");

// /Script/JunoCraftingBaseUI.JunoPropFrontendUIData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoPropFrontendUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FText DisplayName; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FJunoPropFrontendUIData, DisplayName) == 8, "Offset mismatch for FJunoPropFrontendUIData::DisplayName");
