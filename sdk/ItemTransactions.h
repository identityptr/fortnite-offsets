/**
 * decamp dumper generated SDK
 * Package: /Script/ItemTransactions
 */
#pragma once
#include "Basic.h"

// /Script/ItemTransactions.ItemComponentData_Transaction
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_Transaction
{
public:
    std::uint8_t Tag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FItemComponentData_Transaction, Tag) == 0, "Offset mismatch for FItemComponentData_Transaction::Tag");

// /Script/ItemTransactions.ItemTransactionCost
// Kind: ScriptStruct; super: none
struct FItemTransactionCost
{
public:
    void* Item; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Count; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FItemTransactionCost, Item) == 0, "Offset mismatch for FItemTransactionCost::Item");
static_assert(offsetof(FItemTransactionCost, Count) == 8, "Offset mismatch for FItemTransactionCost::Count");

// /Script/ItemTransactions.ItemTransactionRow
// Kind: ScriptStruct; super: TableRowBase
struct FItemTransactionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Tag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> TotalCost; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FItemTransactionRow, Tag) == 8, "Offset mismatch for FItemTransactionRow::Tag");
static_assert(offsetof(FItemTransactionRow, TotalCost) == 16, "Offset mismatch for FItemTransactionRow::TotalCost");

// /Script/ItemTransactions.ItemTransactionComponent
// Kind: Class; super: ActorComponent
class UItemTransactionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnTransactionComplete; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TransactionData[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UItemTransactionComponent, OnTransactionComplete) == 192, "Offset mismatch for UItemTransactionComponent::OnTransactionComplete");
static_assert(offsetof(UItemTransactionComponent, TransactionData) == 208, "Offset mismatch for UItemTransactionComponent::TransactionData");

// /Script/ItemTransactions.TransactionBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UTransactionBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};
