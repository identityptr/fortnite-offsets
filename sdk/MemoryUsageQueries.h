/**
 * decamp dumper generated SDK
 * Package: /Script/MemoryUsageQueries
 */
#pragma once
#include "Basic.h"

// /Script/MemoryUsageQueries.CollectionInfo
// Kind: ScriptStruct; super: none
struct FCollectionInfo
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Includes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Excludes; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    float BudgetMB; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCollectionInfo, Name) == 0, "Offset mismatch for FCollectionInfo::Name");
static_assert(offsetof(FCollectionInfo, Includes) == 16, "Offset mismatch for FCollectionInfo::Includes");
static_assert(offsetof(FCollectionInfo, Excludes) == 32, "Offset mismatch for FCollectionInfo::Excludes");
static_assert(offsetof(FCollectionInfo, BudgetMB) == 48, "Offset mismatch for FCollectionInfo::BudgetMB");

// /Script/MemoryUsageQueries.MemoryUsageQueriesConfig
// Kind: Class; super: Object
class UMemoryUsageQueriesConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Collections; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> SavingsPresets; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMemoryUsageQueriesConfig, Collections) == 40, "Offset mismatch for UMemoryUsageQueriesConfig::Collections");
static_assert(offsetof(UMemoryUsageQueriesConfig, SavingsPresets) == 56, "Offset mismatch for UMemoryUsageQueriesConfig::SavingsPresets");
