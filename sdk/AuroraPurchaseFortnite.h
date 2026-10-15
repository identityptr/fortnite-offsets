/**
 * decamp dumper generated SDK
 * Package: /Script/AuroraPurchaseFortnite
 */
#pragma once
#include "Basic.h"

// /Script/AuroraPurchaseFortnite.AuroraPurchaseInvoicePayload
// Kind: ScriptStruct; super: none
struct FAuroraPurchaseInvoicePayload
{
public:
    FString WorkspaceId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString LinkMode; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString InvoiceId; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString UxTraceId; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAuroraPurchaseInvoicePayload, WorkspaceId) == 0, "Offset mismatch for FAuroraPurchaseInvoicePayload::WorkspaceId");
static_assert(offsetof(FAuroraPurchaseInvoicePayload, LinkMode) == 16, "Offset mismatch for FAuroraPurchaseInvoicePayload::LinkMode");
static_assert(offsetof(FAuroraPurchaseInvoicePayload, InvoiceId) == 32, "Offset mismatch for FAuroraPurchaseInvoicePayload::InvoiceId");
static_assert(offsetof(FAuroraPurchaseInvoicePayload, UxTraceId) == 48, "Offset mismatch for FAuroraPurchaseInvoicePayload::UxTraceId");

// /Script/AuroraPurchaseFortnite.AuroraReceiptFortnite
// Kind: ScriptStruct; super: AuroraReceipt
struct FAuroraReceiptFortnite
{
public:
    FString UxTraceId; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAuroraReceiptFortnite, UxTraceId) == 0, "Offset mismatch for FAuroraReceiptFortnite::UxTraceId");

// /Script/AuroraPurchaseFortnite.AuroraAnalyticsSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UAuroraAnalyticsSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float ChanceToSendUserExperienceEvent; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAuroraAnalyticsSubsystem, ChanceToSendUserExperienceEvent) == 48, "Offset mismatch for UAuroraAnalyticsSubsystem::ChanceToSendUserExperienceEvent");

// /Script/AuroraPurchaseFortnite.AuroraPurchaseFortnite
// Kind: Class; super: Object
class UAuroraPurchaseFortnite
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    float TickRate; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    double QueryInventoryRetryBackoff; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> ApplyOperationRetryDenyList; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::int64_t MaxApplyOperationRetries; // 0x0060 (Size: 0x8, Type: Int64Property)
    float ApplyOperationRetryDelay; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldApplyOperationReturnImmediately; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    std::int32_t ApplyOperationMaxInFlightRequests; // 0x0070 (Size: 0x4, Type: IntProperty)
    float ApplyOperationMinimumInterval; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyOperationPreserveCallOrder; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyOperationMustUseRepeatCount; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyOperationAllowImmediateExecution; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x5]; // 0x007B
    std::int64_t ApplyOperationMaxPendingOperations; // 0x0080 (Size: 0x8, Type: Int64Property)
    double CacheClearDelay; // 0x0088 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UAuroraPurchaseFortnite, TickRate) == 64, "Offset mismatch for UAuroraPurchaseFortnite::TickRate");
static_assert(offsetof(UAuroraPurchaseFortnite, QueryInventoryRetryBackoff) == 72, "Offset mismatch for UAuroraPurchaseFortnite::QueryInventoryRetryBackoff");
static_assert(offsetof(UAuroraPurchaseFortnite, ApplyOperationRetryDenyList) == 80, "Offset mismatch for UAuroraPurchaseFortnite::ApplyOperationRetryDenyList");
static_assert(offsetof(UAuroraPurchaseFortnite, MaxApplyOperationRetries) == 96, "Offset mismatch for UAuroraPurchaseFortnite::MaxApplyOperationRetries");
static_assert(offsetof(UAuroraPurchaseFortnite, ApplyOperationRetryDelay) == 104, "Offset mismatch for UAuroraPurchaseFortnite::ApplyOperationRetryDelay");
static_assert(offsetof(UAuroraPurchaseFortnite, bShouldApplyOperationReturnImmediately) == 108, "Offset mismatch for UAuroraPurchaseFortnite::bShouldApplyOperationReturnImmediately");
static_assert(offsetof(UAuroraPurchaseFortnite, ApplyOperationMaxInFlightRequests) == 112, "Offset mismatch for UAuroraPurchaseFortnite::ApplyOperationMaxInFlightRequests");
static_assert(offsetof(UAuroraPurchaseFortnite, ApplyOperationMinimumInterval) == 116, "Offset mismatch for UAuroraPurchaseFortnite::ApplyOperationMinimumInterval");
static_assert(offsetof(UAuroraPurchaseFortnite, bApplyOperationPreserveCallOrder) == 120, "Offset mismatch for UAuroraPurchaseFortnite::bApplyOperationPreserveCallOrder");
static_assert(offsetof(UAuroraPurchaseFortnite, bApplyOperationMustUseRepeatCount) == 121, "Offset mismatch for UAuroraPurchaseFortnite::bApplyOperationMustUseRepeatCount");
static_assert(offsetof(UAuroraPurchaseFortnite, bApplyOperationAllowImmediateExecution) == 122, "Offset mismatch for UAuroraPurchaseFortnite::bApplyOperationAllowImmediateExecution");
static_assert(offsetof(UAuroraPurchaseFortnite, ApplyOperationMaxPendingOperations) == 128, "Offset mismatch for UAuroraPurchaseFortnite::ApplyOperationMaxPendingOperations");
static_assert(offsetof(UAuroraPurchaseFortnite, CacheClearDelay) == 136, "Offset mismatch for UAuroraPurchaseFortnite::CacheClearDelay");
