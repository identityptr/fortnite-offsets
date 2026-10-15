/**
 * decamp dumper generated SDK
 * Package: /Script/IAX
 */
#pragma once
#include "Basic.h"

// /Script/IAX.IadClassSeed
// Kind: ScriptStruct; super: none
struct FIadClassSeed
{
public:
    std::uint8_t Class[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bIncludeSubclasses; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeSeedInIad; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInstallBulkWithPackage; // 0x0022 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0023
    TArray<void*> IncludeDependencyClasses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIncludeDependencyClassSubclasses; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllMountPoints; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x003A
    TArray<void*> MountPoints; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludeMountPoints; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FIadClassSeed, Class) == 0, "Offset mismatch for FIadClassSeed::Class");
static_assert(offsetof(FIadClassSeed, bIncludeSubclasses) == 32, "Offset mismatch for FIadClassSeed::bIncludeSubclasses");
static_assert(offsetof(FIadClassSeed, bIncludeSeedInIad) == 33, "Offset mismatch for FIadClassSeed::bIncludeSeedInIad");
static_assert(offsetof(FIadClassSeed, bInstallBulkWithPackage) == 34, "Offset mismatch for FIadClassSeed::bInstallBulkWithPackage");
static_assert(offsetof(FIadClassSeed, IncludeDependencyClasses) == 40, "Offset mismatch for FIadClassSeed::IncludeDependencyClasses");
static_assert(offsetof(FIadClassSeed, bIncludeDependencyClassSubclasses) == 56, "Offset mismatch for FIadClassSeed::bIncludeDependencyClassSubclasses");
static_assert(offsetof(FIadClassSeed, bAllMountPoints) == 57, "Offset mismatch for FIadClassSeed::bAllMountPoints");
static_assert(offsetof(FIadClassSeed, MountPoints) == 64, "Offset mismatch for FIadClassSeed::MountPoints");
static_assert(offsetof(FIadClassSeed, ExcludeMountPoints) == 80, "Offset mismatch for FIadClassSeed::ExcludeMountPoints");

// /Script/IAX.IadQuerySeed
// Kind: ScriptStruct; super: none
struct FIadQuerySeed
{
public:
    std::uint8_t AssetType[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bIncludeSubclasses; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeSeedInIad; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInstallBulkWithPackage; // 0x0022 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0023
    TArray<void*> IncludeDependencyClasses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIncludeDependencyClassSubclasses; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    TArray<void*> SearchPath; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRecursive; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0051
    TArray<void*> ExcludeMountPoints; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FIadQuerySeed, AssetType) == 0, "Offset mismatch for FIadQuerySeed::AssetType");
static_assert(offsetof(FIadQuerySeed, bIncludeSubclasses) == 32, "Offset mismatch for FIadQuerySeed::bIncludeSubclasses");
static_assert(offsetof(FIadQuerySeed, bIncludeSeedInIad) == 33, "Offset mismatch for FIadQuerySeed::bIncludeSeedInIad");
static_assert(offsetof(FIadQuerySeed, bInstallBulkWithPackage) == 34, "Offset mismatch for FIadQuerySeed::bInstallBulkWithPackage");
static_assert(offsetof(FIadQuerySeed, IncludeDependencyClasses) == 40, "Offset mismatch for FIadQuerySeed::IncludeDependencyClasses");
static_assert(offsetof(FIadQuerySeed, bIncludeDependencyClassSubclasses) == 56, "Offset mismatch for FIadQuerySeed::bIncludeDependencyClassSubclasses");
static_assert(offsetof(FIadQuerySeed, SearchPath) == 64, "Offset mismatch for FIadQuerySeed::SearchPath");
static_assert(offsetof(FIadQuerySeed, bRecursive) == 80, "Offset mismatch for FIadQuerySeed::bRecursive");
static_assert(offsetof(FIadQuerySeed, ExcludeMountPoints) == 88, "Offset mismatch for FIadQuerySeed::ExcludeMountPoints");

// /Script/IAX.IndividualAssetDownloadSettings
// Kind: Class; super: DeveloperSettings
class UIndividualAssetDownloadSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> ClassSeeds; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QuerySeeds; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MountPoints; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludeMountPoints; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetExceptions; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludeNameRegex; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseIad; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UIndividualAssetDownloadSettings, ClassSeeds) == 48, "Offset mismatch for UIndividualAssetDownloadSettings::ClassSeeds");
static_assert(offsetof(UIndividualAssetDownloadSettings, QuerySeeds) == 64, "Offset mismatch for UIndividualAssetDownloadSettings::QuerySeeds");
static_assert(offsetof(UIndividualAssetDownloadSettings, MountPoints) == 80, "Offset mismatch for UIndividualAssetDownloadSettings::MountPoints");
static_assert(offsetof(UIndividualAssetDownloadSettings, ExcludeMountPoints) == 96, "Offset mismatch for UIndividualAssetDownloadSettings::ExcludeMountPoints");
static_assert(offsetof(UIndividualAssetDownloadSettings, AssetExceptions) == 112, "Offset mismatch for UIndividualAssetDownloadSettings::AssetExceptions");
static_assert(offsetof(UIndividualAssetDownloadSettings, ExcludeNameRegex) == 128, "Offset mismatch for UIndividualAssetDownloadSettings::ExcludeNameRegex");
static_assert(offsetof(UIndividualAssetDownloadSettings, bUseIad) == 144, "Offset mismatch for UIndividualAssetDownloadSettings::bUseIad");
