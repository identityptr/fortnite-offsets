/**
 * decamp dumper generated SDK
 * Package: /Script/BuildPatchServices
 */
#pragma once
#include "Basic.h"

// /Script/BuildPatchServices.ChunkInfoData
// Kind: ScriptStruct; super: none
struct FChunkInfoData
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint64_t Hash; // 0x0010 (Size: 0x8, Type: UInt64Property)
    std::uint8_t ShaHash[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::int64_t FileSize; // 0x0030 (Size: 0x8, Type: Int64Property)
    std::uint8_t GroupNumber; // 0x0038 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FChunkInfoData, Guid) == 0, "Offset mismatch for FChunkInfoData::Guid");
static_assert(offsetof(FChunkInfoData, Hash) == 16, "Offset mismatch for FChunkInfoData::Hash");
static_assert(offsetof(FChunkInfoData, ShaHash) == 24, "Offset mismatch for FChunkInfoData::ShaHash");
static_assert(offsetof(FChunkInfoData, FileSize) == 48, "Offset mismatch for FChunkInfoData::FileSize");
static_assert(offsetof(FChunkInfoData, GroupNumber) == 56, "Offset mismatch for FChunkInfoData::GroupNumber");

// /Script/BuildPatchServices.ChunkPartData
// Kind: ScriptStruct; super: none
struct FChunkPartData
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint32_t Offset; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Size; // 0x0014 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FChunkPartData, Guid) == 0, "Offset mismatch for FChunkPartData::Guid");
static_assert(offsetof(FChunkPartData, Offset) == 16, "Offset mismatch for FChunkPartData::Offset");
static_assert(offsetof(FChunkPartData, Size) == 20, "Offset mismatch for FChunkPartData::Size");

// /Script/BuildPatchServices.CustomFieldData
// Kind: ScriptStruct; super: none
struct FCustomFieldData
{
public:
    FString Key; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCustomFieldData, Key) == 0, "Offset mismatch for FCustomFieldData::Key");
static_assert(offsetof(FCustomFieldData, Value) == 16, "Offset mismatch for FCustomFieldData::Value");

// /Script/BuildPatchServices.FileManifestData
// Kind: ScriptStruct; super: none
struct FFileManifestData
{
public:
    FString Filename; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t FileHash[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    TArray<void*> FileChunkParts; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstallTags; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsUnixExecutable; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0049
    FString SymlinkTarget; // 0x0050 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsReadOnly; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCompressed; // 0x0061 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFileManifestData, Filename) == 0, "Offset mismatch for FFileManifestData::Filename");
static_assert(offsetof(FFileManifestData, FileHash) == 16, "Offset mismatch for FFileManifestData::FileHash");
static_assert(offsetof(FFileManifestData, FileChunkParts) == 40, "Offset mismatch for FFileManifestData::FileChunkParts");
static_assert(offsetof(FFileManifestData, InstallTags) == 56, "Offset mismatch for FFileManifestData::InstallTags");
static_assert(offsetof(FFileManifestData, bIsUnixExecutable) == 72, "Offset mismatch for FFileManifestData::bIsUnixExecutable");
static_assert(offsetof(FFileManifestData, SymlinkTarget) == 80, "Offset mismatch for FFileManifestData::SymlinkTarget");
static_assert(offsetof(FFileManifestData, bIsReadOnly) == 96, "Offset mismatch for FFileManifestData::bIsReadOnly");
static_assert(offsetof(FFileManifestData, bIsCompressed) == 97, "Offset mismatch for FFileManifestData::bIsCompressed");

// /Script/BuildPatchServices.SHAHashData
// Kind: ScriptStruct; super: none
struct FSHAHashData
{
public:
    std::uint8_t Hash; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FSHAHashData, Hash) == 0, "Offset mismatch for FSHAHashData::Hash");

// /Script/BuildPatchServices.BuildPatchManifest
// Kind: Class; super: Object
class UBuildPatchManifest
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ManifestFileVersion; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsFileData; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint32_t AppID; // 0x002C (Size: 0x4, Type: UInt32Property)
    FString AppName; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString BuildVersion; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString LaunchExe; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString LaunchCommand; // 0x0060 (Size: 0x10, Type: StrProperty)
    std::uint8_t PrereqIds[0x10]; // 0x0070 (Size: 0x10, Type: SetProperty)
    FString PrereqName; // 0x0080 (Size: 0x10, Type: StrProperty)
    FString PrereqPath; // 0x0090 (Size: 0x10, Type: StrProperty)
    FString PrereqArgs; // 0x00A0 (Size: 0x10, Type: StrProperty)
    TArray<void*> FileManifestList; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChunkList; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CustomFields; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBuildPatchManifest, ManifestFileVersion) == 40, "Offset mismatch for UBuildPatchManifest::ManifestFileVersion");
static_assert(offsetof(UBuildPatchManifest, bIsFileData) == 41, "Offset mismatch for UBuildPatchManifest::bIsFileData");
static_assert(offsetof(UBuildPatchManifest, AppID) == 44, "Offset mismatch for UBuildPatchManifest::AppID");
static_assert(offsetof(UBuildPatchManifest, AppName) == 48, "Offset mismatch for UBuildPatchManifest::AppName");
static_assert(offsetof(UBuildPatchManifest, BuildVersion) == 64, "Offset mismatch for UBuildPatchManifest::BuildVersion");
static_assert(offsetof(UBuildPatchManifest, LaunchExe) == 80, "Offset mismatch for UBuildPatchManifest::LaunchExe");
static_assert(offsetof(UBuildPatchManifest, LaunchCommand) == 96, "Offset mismatch for UBuildPatchManifest::LaunchCommand");
static_assert(offsetof(UBuildPatchManifest, PrereqIds) == 112, "Offset mismatch for UBuildPatchManifest::PrereqIds");
static_assert(offsetof(UBuildPatchManifest, PrereqName) == 128, "Offset mismatch for UBuildPatchManifest::PrereqName");
static_assert(offsetof(UBuildPatchManifest, PrereqPath) == 144, "Offset mismatch for UBuildPatchManifest::PrereqPath");
static_assert(offsetof(UBuildPatchManifest, PrereqArgs) == 160, "Offset mismatch for UBuildPatchManifest::PrereqArgs");
static_assert(offsetof(UBuildPatchManifest, FileManifestList) == 176, "Offset mismatch for UBuildPatchManifest::FileManifestList");
static_assert(offsetof(UBuildPatchManifest, ChunkList) == 192, "Offset mismatch for UBuildPatchManifest::ChunkList");
static_assert(offsetof(UBuildPatchManifest, CustomFields) == 208, "Offset mismatch for UBuildPatchManifest::CustomFields");
