/**
 * decamp dumper generated SDK
 * Package: /Script/AuroraFortniteCore
 */
#pragma once
#include "Basic.h"

// /Script/AuroraFortniteCore.AuroraInvoiceFortnite
// Kind: ScriptStruct; super: AuroraInvoice
struct FAuroraInvoiceFortnite
{
public:
    FString InvoiceId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString UxTraceId; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString OfferId; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAuroraInvoiceFortnite, InvoiceId) == 0, "Offset mismatch for FAuroraInvoiceFortnite::InvoiceId");
static_assert(offsetof(FAuroraInvoiceFortnite, UxTraceId) == 16, "Offset mismatch for FAuroraInvoiceFortnite::UxTraceId");
static_assert(offsetof(FAuroraInvoiceFortnite, OfferId) == 32, "Offset mismatch for FAuroraInvoiceFortnite::OfferId");

// /Script/AuroraFortniteCore.AuroraPriceVbucks
// Kind: ScriptStruct; super: AuroraPriceDimension
struct FAuroraPriceVbucks
{
public:
    double Amount; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FAuroraPriceVbucks, Amount) == 0, "Offset mismatch for FAuroraPriceVbucks::Amount");
