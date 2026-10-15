/**
 * decamp dumper generated SDK
 * Package: /Script/AuroraPurchaseNull
 */
#pragma once
#include "Basic.h"

// /Script/AuroraPurchaseNull.AuroraInvoiceNull
// Kind: ScriptStruct; super: AuroraInvoice
struct FAuroraInvoiceNull
{
public:
    std::uint8_t InvoiceId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t offer[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAuroraInvoiceNull, InvoiceId) == 0, "Offset mismatch for FAuroraInvoiceNull::InvoiceId");
static_assert(offsetof(FAuroraInvoiceNull, offer) == 16, "Offset mismatch for FAuroraInvoiceNull::offer");

// /Script/AuroraPurchaseNull.AuroraReceiptNull
// Kind: ScriptStruct; super: AuroraReceipt
struct FAuroraReceiptNull
{
public:
    std::uint8_t InvoiceId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t offer[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAuroraReceiptNull, InvoiceId) == 0, "Offset mismatch for FAuroraReceiptNull::InvoiceId");
static_assert(offsetof(FAuroraReceiptNull, offer) == 16, "Offset mismatch for FAuroraReceiptNull::offer");

// /Script/AuroraPurchaseNull.AuroraPurchaseNull
// Kind: Class; super: Object
class UAuroraPurchaseNull
{
public:
    std::uint8_t Opaque[1];
};
