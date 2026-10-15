/**
 * decamp dumper generated SDK
 * Package: /Script/FortMagpiePlayerInterfaceRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortMagpiePlayerInterfaceRuntime.FortMagpieEntitlementChange
// Kind: ScriptStruct; super: none
struct FFortMagpieEntitlementChange
{
public:
    FString ModuleId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString EntitlementId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int64_t Quantity; // 0x0020 (Size: 0x8, Type: Int64Property)
    std::int64_t QuantityDelta; // 0x0028 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FFortMagpieEntitlementChange, ModuleId) == 0, "Offset mismatch for FFortMagpieEntitlementChange::ModuleId");
static_assert(offsetof(FFortMagpieEntitlementChange, EntitlementId) == 16, "Offset mismatch for FFortMagpieEntitlementChange::EntitlementId");
static_assert(offsetof(FFortMagpieEntitlementChange, Quantity) == 32, "Offset mismatch for FFortMagpieEntitlementChange::Quantity");
static_assert(offsetof(FFortMagpieEntitlementChange, QuantityDelta) == 40, "Offset mismatch for FFortMagpieEntitlementChange::QuantityDelta");

// /Script/FortMagpiePlayerInterfaceRuntime.ModuleMetadataResult
// Kind: ScriptStruct; super: none
struct FModuleMetadataResult
{
public:
    FString MetadataBlob; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t MetadataSchemaVersion; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    TMap<void*, void*> EntitlementMetadata; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FModuleMetadataResult, MetadataBlob) == 0, "Offset mismatch for FModuleMetadataResult::MetadataBlob");
static_assert(offsetof(FModuleMetadataResult, MetadataSchemaVersion) == 16, "Offset mismatch for FModuleMetadataResult::MetadataSchemaVersion");
static_assert(offsetof(FModuleMetadataResult, EntitlementMetadata) == 24, "Offset mismatch for FModuleMetadataResult::EntitlementMetadata");

// /Script/FortMagpiePlayerInterfaceRuntime.FortMagpiePlayerInterfaceCheatManagerExtension
// Kind: Class; super: CheatManagerExtension
class UFortMagpiePlayerInterfaceCheatManagerExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortMagpiePlayerInterfaceRuntime.FortMagpiePlayerInterfaceSubsystem
// Kind: Class; super: WorldSubsystem
class UFortMagpiePlayerInterfaceSubsystem
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    float TickRate; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0104
    double QueryInventoryRetryBackoff; // 0x0108 (Size: 0x8, Type: DoubleProperty)
    std::int64_t MaxApplyOperationRetries; // 0x0110 (Size: 0x8, Type: Int64Property)
    TArray<void*> ApplyOperationRetryDenyList; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    FString ApplyOperationMaxCountExceededError; // 0x0128 (Size: 0x10, Type: StrProperty)
    std::int64_t ApplyOperationMaxPendingOperations; // 0x0138 (Size: 0x8, Type: Int64Property)
    float ApplyOperationMinimumInterval; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float ApplyOperationRetryDelay; // 0x0144 (Size: 0x4, Type: FloatProperty)
    std::int32_t ApplyOperationMaxInFlightRequests; // 0x0148 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x014C
    double CacheClearDelay; // 0x0150 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFortMagpiePlayerInterfaceSubsystem, TickRate) == 256, "Offset mismatch for UFortMagpiePlayerInterfaceSubsystem::TickRate");
static_assert(offsetof(UFortMagpiePlayerInterfaceSubsystem, QueryInventoryRetryBackoff) == 264, "Offset mismatch for UFortMagpiePlayerInterfaceSubsystem::QueryInventoryRetryBackoff");
static_assert(offsetof(UFortMagpiePlayerInterfaceSubsystem, MaxApplyOperationRetries) == 272, "Offset mismatch for UFortMagpiePlayerInterfaceSubsystem::MaxApplyOperationRetries");
static_assert(offsetof(UFortMagpiePlayerInterfaceSubsystem, ApplyOperationRetryDenyList) == 280, "Offset mismatch for UFortMagpiePlayerInterfaceSubsystem::ApplyOperationRetryDenyList");
static_assert(offsetof(UFortMagpiePlayerInterfaceSubsystem, ApplyOperationMaxCountExceededError) == 296, "Offset mismatch for UFortMagpiePlayerInterfaceSubsystem::ApplyOperationMaxCountExceededError");
static_assert(offsetof(UFortMagpiePlayerInterfaceSubsystem, ApplyOperationMaxPendingOperations) == 312, "Offset mismatch for UFortMagpiePlayerInterfaceSubsystem::ApplyOperationMaxPendingOperations");
static_assert(offsetof(UFortMagpiePlayerInterfaceSubsystem, ApplyOperationMinimumInterval) == 320, "Offset mismatch for UFortMagpiePlayerInterfaceSubsystem::ApplyOperationMinimumInterval");
static_assert(offsetof(UFortMagpiePlayerInterfaceSubsystem, ApplyOperationRetryDelay) == 324, "Offset mismatch for UFortMagpiePlayerInterfaceSubsystem::ApplyOperationRetryDelay");
static_assert(offsetof(UFortMagpiePlayerInterfaceSubsystem, ApplyOperationMaxInFlightRequests) == 328, "Offset mismatch for UFortMagpiePlayerInterfaceSubsystem::ApplyOperationMaxInFlightRequests");
static_assert(offsetof(UFortMagpiePlayerInterfaceSubsystem, CacheClearDelay) == 336, "Offset mismatch for UFortMagpiePlayerInterfaceSubsystem::CacheClearDelay");
