/**
 * decamp dumper generated SDK
 * Package: /Script/PurchaseFlow
 */
#pragma once
#include "Basic.h"

// /Script/PurchaseFlow.PurchaseFlowItem
// Kind: ScriptStruct; super: none
struct FPurchaseFlowItem
{
public:
    FString ItemID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString EntitlementId; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ValidationInfo; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPurchaseFlowItem, ItemID) == 0, "Offset mismatch for FPurchaseFlowItem::ItemID");
static_assert(offsetof(FPurchaseFlowItem, EntitlementId) == 16, "Offset mismatch for FPurchaseFlowItem::EntitlementId");
static_assert(offsetof(FPurchaseFlowItem, ValidationInfo) == 32, "Offset mismatch for FPurchaseFlowItem::ValidationInfo");

// /Script/PurchaseFlow.PurchaseFlowOffer
// Kind: ScriptStruct; super: none
struct FPurchaseFlowOffer
{
public:
    FString OfferNamespace; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString OfferId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t Quantity; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    TArray<void*> Items; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPurchaseFlowOffer, OfferNamespace) == 0, "Offset mismatch for FPurchaseFlowOffer::OfferNamespace");
static_assert(offsetof(FPurchaseFlowOffer, OfferId) == 16, "Offset mismatch for FPurchaseFlowOffer::OfferId");
static_assert(offsetof(FPurchaseFlowOffer, Quantity) == 32, "Offset mismatch for FPurchaseFlowOffer::Quantity");
static_assert(offsetof(FPurchaseFlowOffer, Items) == 40, "Offset mismatch for FPurchaseFlowOffer::Items");

// /Script/PurchaseFlow.PurchaseFlowReceiptParam
// Kind: ScriptStruct; super: none
struct FPurchaseFlowReceiptParam
{
public:
    FString TransactionId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString TransactionState; // 0x0010 (Size: 0x10, Type: StrProperty)
    TArray<void*> Offers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPurchaseFlowReceiptParam, TransactionId) == 0, "Offset mismatch for FPurchaseFlowReceiptParam::TransactionId");
static_assert(offsetof(FPurchaseFlowReceiptParam, TransactionState) == 16, "Offset mismatch for FPurchaseFlowReceiptParam::TransactionState");
static_assert(offsetof(FPurchaseFlowReceiptParam, Offers) == 32, "Offset mismatch for FPurchaseFlowReceiptParam::Offers");

// /Script/PurchaseFlow.PurchaseFlowJSBridge
// Kind: Class; super: Object
class UPurchaseFlowJSBridge
{
public:
    std::uint8_t Opaque[1];
};
