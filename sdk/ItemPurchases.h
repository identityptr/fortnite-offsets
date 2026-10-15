/**
 * decamp dumper generated SDK
 * Package: /Script/ItemPurchases
 */
#pragma once
#include "Basic.h"

// /Script/ItemPurchases.PurchaseCostElement
// Kind: ScriptStruct; super: none
struct FPurchaseCostElement
{
public:
    std::uint8_t Item[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t Count; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPurchaseCostElement, Item) == 0, "Offset mismatch for FPurchaseCostElement::Item");
static_assert(offsetof(FPurchaseCostElement, Count) == 32, "Offset mismatch for FPurchaseCostElement::Count");

// /Script/ItemPurchases.PurchaseCostRow
// Kind: ScriptStruct; super: TableRowBase
struct FPurchaseCostRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Tag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> TotalCost; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPurchaseCostRow, Tag) == 8, "Offset mismatch for FPurchaseCostRow::Tag");
static_assert(offsetof(FPurchaseCostRow, TotalCost) == 16, "Offset mismatch for FPurchaseCostRow::TotalCost");

// /Script/ItemPurchases.PurchaseBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPurchaseBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};
