/**
 * decamp dumper generated SDK
 * Package: /Script/VerseNative
 */
#pragma once
#include "Basic.h"

// /Script/VerseNative.VerseIntRange
// Kind: ScriptStruct; super: none
struct FVerseIntRange
{
public:
    std::int64_t Left; // 0x0000 (Size: 0x8, Type: Int64Property)
    std::int64_t Right; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FVerseIntRange, Left) == 0, "Offset mismatch for FVerseIntRange::Left");
static_assert(offsetof(FVerseIntRange, Right) == 8, "Offset mismatch for FVerseIntRange::Right");

// /Script/VerseNative.VersionedDigestCode
// Kind: ScriptStruct; super: none
struct FVersionedDigestCode
{
public:
    FString ProjectName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Code; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t EffectiveVerseVersion; // 0x0020 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    TArray<void*> DependencyPackageNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVersionedDigestCode, ProjectName) == 0, "Offset mismatch for FVersionedDigestCode::ProjectName");
static_assert(offsetof(FVersionedDigestCode, Code) == 16, "Offset mismatch for FVersionedDigestCode::Code");
static_assert(offsetof(FVersionedDigestCode, EffectiveVerseVersion) == 32, "Offset mismatch for FVersionedDigestCode::EffectiveVerseVersion");
static_assert(offsetof(FVersionedDigestCode, DependencyPackageNames) == 40, "Offset mismatch for FVersionedDigestCode::DependencyPackageNames");

// /Script/VerseNative.akeType
// Kind: ScriptStruct; super: none
struct FakeType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseNative.SolarisProfilingLibrary
// Kind: Class; super: Object
class USolarisProfilingLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseNative.VerseAsset
// Kind: Class; super: Object
class UVerseAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* AssetClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UVerseAsset, AssetClass) == 40, "Offset mismatch for UVerseAsset::AssetClass");

// /Script/VerseNative.VerseNativeGameFeatureObserver
// Kind: Class; super: Object
class UVerseNativeGameFeatureObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseNative.VersePersistentVarWeakMapKey
// Kind: Class; super: Interface
class UVersePersistentVarWeakMapKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseNative.VerseStmLibrary
// Kind: Class; super: Object
class UVerseStmLibrary
{
public:
    std::uint8_t Opaque[1];
};
