/**
 * decamp dumper generated SDK
 * Package: /Script/AssetRegistry
 */
#pragma once
#include "Basic.h"

// /Script/AssetRegistry.AssetRegistryDependencyOptions
// Kind: ScriptStruct; super: none
struct FAssetRegistryDependencyOptions
{
public:
    std::uint8_t bIncludeSoftPackageReferences; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeHardPackageReferences; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeGamePackageReferences; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeEditorOnlyPackageReferences; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeSearchableNames; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeSoftManagementReferences; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeHardManagementReferences; // 0x0006 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeSoftPackageReferences) == 0, "Offset mismatch for FAssetRegistryDependencyOptions::bIncludeSoftPackageReferences");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeHardPackageReferences) == 1, "Offset mismatch for FAssetRegistryDependencyOptions::bIncludeHardPackageReferences");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeGamePackageReferences) == 2, "Offset mismatch for FAssetRegistryDependencyOptions::bIncludeGamePackageReferences");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeEditorOnlyPackageReferences) == 3, "Offset mismatch for FAssetRegistryDependencyOptions::bIncludeEditorOnlyPackageReferences");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeSearchableNames) == 4, "Offset mismatch for FAssetRegistryDependencyOptions::bIncludeSearchableNames");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeSoftManagementReferences) == 5, "Offset mismatch for FAssetRegistryDependencyOptions::bIncludeSoftManagementReferences");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeHardManagementReferences) == 6, "Offset mismatch for FAssetRegistryDependencyOptions::bIncludeHardManagementReferences");

// /Script/AssetRegistry.TagAndValue
// Kind: ScriptStruct; super: none
struct FTagAndValue
{
public:
    FName Tag; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString Value; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTagAndValue, Tag) == 0, "Offset mismatch for FTagAndValue::Tag");
static_assert(offsetof(FTagAndValue, Value) == 8, "Offset mismatch for FTagAndValue::Value");

// /Script/AssetRegistry.AssetRegistry
// Kind: Class; super: Interface
class UAssetRegistry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AssetRegistry.AssetRegistryHelpers
// Kind: Class; super: Object
class UAssetRegistryHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AssetRegistry.AssetRegistryImpl
// Kind: Class; super: Object
class UAssetRegistryImpl
{
public:
    std::uint8_t Opaque[1];
};
