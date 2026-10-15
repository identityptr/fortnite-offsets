/**
 * decamp dumper generated SDK
 * Package: /Script/Solaris
 */
#pragma once
#include "Basic.h"

// /Script/Solaris.GenericElementType
// Kind: ScriptStruct; super: none
struct FGenericElementType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.GenericKeyType
// Kind: ScriptStruct; super: none
struct FGenericKeyType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.GenericValueType
// Kind: ScriptStruct; super: none
struct FGenericValueType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.VerseAssetConfig
// Kind: ScriptStruct; super: none
struct FVerseAssetConfig
{
public:
    FString AssetType; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint32_t PublicVersion; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ParameterizedVersion; // 0x0014 (Size: 0x4, Type: UInt32Property)
    TArray<void*> ParameterConfigs; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVerseAssetConfig, AssetType) == 0, "Offset mismatch for FVerseAssetConfig::AssetType");
static_assert(offsetof(FVerseAssetConfig, PublicVersion) == 16, "Offset mismatch for FVerseAssetConfig::PublicVersion");
static_assert(offsetof(FVerseAssetConfig, ParameterizedVersion) == 20, "Offset mismatch for FVerseAssetConfig::ParameterizedVersion");
static_assert(offsetof(FVerseAssetConfig, ParameterConfigs) == 24, "Offset mismatch for FVerseAssetConfig::ParameterConfigs");

// /Script/Solaris.VerseAssetParameterConfig
// Kind: ScriptStruct; super: none
struct FVerseAssetParameterConfig
{
public:
    FString ParameterType; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint32_t PublicVersion; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FVerseAssetParameterConfig, ParameterType) == 0, "Offset mismatch for FVerseAssetParameterConfig::ParameterType");
static_assert(offsetof(FVerseAssetParameterConfig, PublicVersion) == 16, "Offset mismatch for FVerseAssetParameterConfig::PublicVersion");

// /Script/Solaris.VersePackageContainer
// Kind: ScriptStruct; super: none
struct FVersePackageContainer
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString DirPath; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t PackageType; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableVerseAssetReflection; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0022
    std::uint8_t Settings[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    TArray<void*> SourceFiles; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AssetDigest[0x40]; // 0x0080 (Size: 0x40, Type: OptionalProperty)
    TArray<void*> AssetDependencies; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVersePackageContainer, Name) == 0, "Offset mismatch for FVersePackageContainer::Name");
static_assert(offsetof(FVersePackageContainer, DirPath) == 16, "Offset mismatch for FVersePackageContainer::DirPath");
static_assert(offsetof(FVersePackageContainer, PackageType) == 32, "Offset mismatch for FVersePackageContainer::PackageType");
static_assert(offsetof(FVersePackageContainer, bEnableVerseAssetReflection) == 33, "Offset mismatch for FVersePackageContainer::bEnableVerseAssetReflection");
static_assert(offsetof(FVersePackageContainer, Settings) == 40, "Offset mismatch for FVersePackageContainer::Settings");
static_assert(offsetof(FVersePackageContainer, SourceFiles) == 112, "Offset mismatch for FVersePackageContainer::SourceFiles");
static_assert(offsetof(FVersePackageContainer, AssetDigest) == 128, "Offset mismatch for FVersePackageContainer::AssetDigest");
static_assert(offsetof(FVersePackageContainer, AssetDependencies) == 192, "Offset mismatch for FVersePackageContainer::AssetDependencies");

// /Script/Solaris.VersePackageContainerSettings
// Kind: ScriptStruct; super: none
struct FVersePackageContainerSettings
{
public:
    FString VersePath; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t VerseScope; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t VerseRole; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0012
    std::uint8_t VerseVersion[0xC]; // 0x0014 (Size: 0xC, Type: OptionalProperty)
    TArray<void*> DependencyPackages; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    FString VniDestDir; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAllowExperimental; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSceneGraph; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSceneGraphAnimation; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAssetRedirectorReflection; // 0x0043 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DefaultAssetAccessSpecifier; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableVNI; // 0x0045 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVersePackageContainerSettings, VersePath) == 0, "Offset mismatch for FVersePackageContainerSettings::VersePath");
static_assert(offsetof(FVersePackageContainerSettings, VerseScope) == 16, "Offset mismatch for FVersePackageContainerSettings::VerseScope");
static_assert(offsetof(FVersePackageContainerSettings, VerseRole) == 17, "Offset mismatch for FVersePackageContainerSettings::VerseRole");
static_assert(offsetof(FVersePackageContainerSettings, VerseVersion) == 20, "Offset mismatch for FVersePackageContainerSettings::VerseVersion");
static_assert(offsetof(FVersePackageContainerSettings, DependencyPackages) == 32, "Offset mismatch for FVersePackageContainerSettings::DependencyPackages");
static_assert(offsetof(FVersePackageContainerSettings, VniDestDir) == 48, "Offset mismatch for FVersePackageContainerSettings::VniDestDir");
static_assert(offsetof(FVersePackageContainerSettings, bAllowExperimental) == 64, "Offset mismatch for FVersePackageContainerSettings::bAllowExperimental");
static_assert(offsetof(FVersePackageContainerSettings, bEnableSceneGraph) == 65, "Offset mismatch for FVersePackageContainerSettings::bEnableSceneGraph");
static_assert(offsetof(FVersePackageContainerSettings, bEnableSceneGraphAnimation) == 66, "Offset mismatch for FVersePackageContainerSettings::bEnableSceneGraphAnimation");
static_assert(offsetof(FVersePackageContainerSettings, bEnableAssetRedirectorReflection) == 67, "Offset mismatch for FVersePackageContainerSettings::bEnableAssetRedirectorReflection");
static_assert(offsetof(FVersePackageContainerSettings, DefaultAssetAccessSpecifier) == 68, "Offset mismatch for FVersePackageContainerSettings::DefaultAssetAccessSpecifier");
static_assert(offsetof(FVersePackageContainerSettings, bEnableVNI) == 69, "Offset mismatch for FVersePackageContainerSettings::bEnableVNI");

// /Script/Solaris.VerseProjectContainer
// Kind: ScriptStruct; super: none
struct FVerseProjectContainer
{
public:
    TArray<void*> Packages; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVerseProjectContainer, Packages) == 0, "Offset mismatch for FVerseProjectContainer::Packages");

// /Script/Solaris.VerseSourceCode
// Kind: ScriptStruct; super: none
struct FVerseSourceCode
{
public:
    TArray<void*> Code; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVerseSourceCode, Code) == 0, "Offset mismatch for FVerseSourceCode::Code");

// /Script/Solaris.VerseSourceFile
// Kind: ScriptStruct; super: none
struct FVerseSourceFile
{
public:
    FString Filename; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> CodeChunks; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVerseSourceFile, Filename) == 0, "Offset mismatch for FVerseSourceFile::Filename");
static_assert(offsetof(FVerseSourceFile, CodeChunks) == 16, "Offset mismatch for FVerseSourceFile::CodeChunks");

// /Script/Solaris.SolarisArrayLibrary
// Kind: Class; super: Object
class USolarisArrayLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisCoroutineLibrary
// Kind: Class; super: Object
class USolarisCoroutineLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisGameFeatureObserver
// Kind: Class; super: Object
class USolarisGameFeatureObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisGameSettings
// Kind: Class; super: Object
class USolarisGameSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Blacklist; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxAllowedSize; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USolarisGameSettings, Blacklist) == 40, "Offset mismatch for USolarisGameSettings::Blacklist");
static_assert(offsetof(USolarisGameSettings, MaxAllowedSize) == 56, "Offset mismatch for USolarisGameSettings::MaxAllowedSize");

// /Script/Solaris.SolarisMapLibrary
// Kind: Class; super: Object
class USolarisMapLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisMathLibrary_Bool
// Kind: Class; super: Object
class USolarisMathLibrary_Bool
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisMathLibrary_Float
// Kind: Class; super: Object
class USolarisMathLibrary_Float
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisMathLibrary_Int
// Kind: Class; super: Object
class USolarisMathLibrary_Int
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisMathLibrary_Option
// Kind: Class; super: Object
class USolarisMathLibrary_Option
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisMathLibrary_Rational
// Kind: Class; super: Object
class USolarisMathLibrary_Rational
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisMathLibrary_String
// Kind: Class; super: Object
class USolarisMathLibrary_String
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisUtilLibrary
// Kind: Class; super: Object
class USolarisUtilLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.SolarisWeakMapLibrary
// Kind: Class; super: Object
class USolarisWeakMapLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.VerseAssetsConfig
// Kind: Class; super: Object
class UVerseAssetsConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AssetConfigs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseAssetsConfig, AssetConfigs) == 40, "Offset mismatch for UVerseAssetsConfig::AssetConfigs");

// /Script/Solaris.VerseDebugData
// Kind: Class; super: Object
class UVerseDebugData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.VerseDigest
// Kind: Class; super: Object
class UVerseDigest
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ProjectName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t Variant; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint32_t VerseVersion; // 0x003C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UVerseDigest, ProjectName) == 40, "Offset mismatch for UVerseDigest::ProjectName");
static_assert(offsetof(UVerseDigest, Variant) == 56, "Offset mismatch for UVerseDigest::Variant");
static_assert(offsetof(UVerseDigest, VerseVersion) == 60, "Offset mismatch for UVerseDigest::VerseVersion");

// /Script/Solaris.VerseDigestEditorOptionalData
// Kind: Class; super: Object
class UVerseDigestEditorOptionalData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Solaris.VerseDynamicallyTypedValueLibrary
// Kind: Class; super: Object
class UVerseDynamicallyTypedValueLibrary
{
public:
    std::uint8_t Opaque[1];
};
