/**
 * decamp dumper generated SDK
 * Package: /Script/VkEngineTypes
 */
#pragma once
#include "Basic.h"

// /Script/VkEngineTypes.AuroraEntitlementValidationMessage
// Kind: ScriptStruct; super: none
struct FAuroraEntitlementValidationMessage
{
public:
    FString Type; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString At; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Message; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString Code; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t Detail[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAuroraEntitlementValidationMessage, Type) == 0, "Offset mismatch for FAuroraEntitlementValidationMessage::Type");
static_assert(offsetof(FAuroraEntitlementValidationMessage, At) == 16, "Offset mismatch for FAuroraEntitlementValidationMessage::At");
static_assert(offsetof(FAuroraEntitlementValidationMessage, Message) == 32, "Offset mismatch for FAuroraEntitlementValidationMessage::Message");
static_assert(offsetof(FAuroraEntitlementValidationMessage, Code) == 48, "Offset mismatch for FAuroraEntitlementValidationMessage::Code");
static_assert(offsetof(FAuroraEntitlementValidationMessage, Detail) == 64, "Offset mismatch for FAuroraEntitlementValidationMessage::Detail");

// /Script/VkEngineTypes.AuroraEntitlementValidationResponse
// Kind: ScriptStruct; super: none
struct FAuroraEntitlementValidationResponse
{
public:
    std::uint8_t Success; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> Messages; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAuroraEntitlementValidationResponse, Success) == 0, "Offset mismatch for FAuroraEntitlementValidationResponse::Success");
static_assert(offsetof(FAuroraEntitlementValidationResponse, Messages) == 8, "Offset mismatch for FAuroraEntitlementValidationResponse::Messages");

// /Script/VkEngineTypes.GameFeaturePluginDescriptor
// Kind: ScriptStruct; super: none
struct FGameFeaturePluginDescriptor
{
public:
    std::uint8_t BuiltInAutoActivate; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameFeaturePluginDescriptor, BuiltInAutoActivate) == 0, "Offset mismatch for FGameFeaturePluginDescriptor::BuiltInAutoActivate");

// /Script/VkEngineTypes.VKModuleVersion
// Kind: ScriptStruct; super: none
struct FVKModuleVersion
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVKModuleVersion, ModuleId) == 0, "Offset mismatch for FVKModuleVersion::ModuleId");
static_assert(offsetof(FVKModuleVersion, Version) == 16, "Offset mismatch for FVKModuleVersion::Version");

// /Script/VkEngineTypes.VKProjectMetadataValidateResponse
// Kind: ScriptStruct; super: none
struct FVKProjectMetadataValidateResponse
{
public:
    std::uint8_t IsValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> InvalidProperties; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVKProjectMetadataValidateResponse, IsValid) == 0, "Offset mismatch for FVKProjectMetadataValidateResponse::IsValid");
static_assert(offsetof(FVKProjectMetadataValidateResponse, InvalidProperties) == 8, "Offset mismatch for FVKProjectMetadataValidateResponse::InvalidProperties");

// /Script/VkEngineTypes.VKProjectMetadataValidationError
// Kind: ScriptStruct; super: none
struct FVKProjectMetadataValidationError
{
public:
    FString Property; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ErrorCode; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVKProjectMetadataValidationError, Property) == 0, "Offset mismatch for FVKProjectMetadataValidationError::Property");
static_assert(offsetof(FVKProjectMetadataValidationError, ErrorCode) == 16, "Offset mismatch for FVKProjectMetadataValidationError::ErrorCode");

// /Script/VkEngineTypes.ValkyriePluginDescriptor
// Kind: ScriptStruct; super: none
struct FValkyriePluginDescriptor
{
public:
    std::uint8_t ValkyrieSettings[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t GameFeaturePluginDescriptor[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FValkyriePluginDescriptor, ValkyrieSettings) == 0, "Offset mismatch for FValkyriePluginDescriptor::ValkyrieSettings");
static_assert(offsetof(FValkyriePluginDescriptor, GameFeaturePluginDescriptor) == 24, "Offset mismatch for FValkyriePluginDescriptor::GameFeaturePluginDescriptor");

// /Script/VkEngineTypes.ValkyriePluginReferenceDescriptor
// Kind: ScriptStruct; super: none
struct FValkyriePluginReferenceDescriptor
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsRoot; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPublic; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FValkyriePluginReferenceDescriptor, Name) == 0, "Offset mismatch for FValkyriePluginReferenceDescriptor::Name");
static_assert(offsetof(FValkyriePluginReferenceDescriptor, bIsRoot) == 16, "Offset mismatch for FValkyriePluginReferenceDescriptor::bIsRoot");
static_assert(offsetof(FValkyriePluginReferenceDescriptor, bIsPublic) == 17, "Offset mismatch for FValkyriePluginReferenceDescriptor::bIsPublic");

// /Script/VkEngineTypes.ValkyriePluginSettings
// Kind: ScriptStruct; super: none
struct FValkyriePluginSettings
{
public:
    std::uint8_t LibraryFolderMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString LibraryCustomPath; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FValkyriePluginSettings, LibraryFolderMode) == 0, "Offset mismatch for FValkyriePluginSettings::LibraryFolderMode");
static_assert(offsetof(FValkyriePluginSettings, LibraryCustomPath) == 8, "Offset mismatch for FValkyriePluginSettings::LibraryCustomPath");

// /Script/VkEngineTypes.ValkyrieProjectBindingsDescriptor
// Kind: ScriptStruct; super: none
struct FValkyrieProjectBindingsDescriptor
{
public:
    std::uint8_t ProjectID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> Modules; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::uint8_t bSuppressAutomaticVersePathAssignment; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    FString ProjectVersePath; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FValkyrieProjectBindingsDescriptor, ProjectID) == 0, "Offset mismatch for FValkyrieProjectBindingsDescriptor::ProjectID");
static_assert(offsetof(FValkyrieProjectBindingsDescriptor, Modules) == 16, "Offset mismatch for FValkyrieProjectBindingsDescriptor::Modules");
static_assert(offsetof(FValkyrieProjectBindingsDescriptor, bSuppressAutomaticVersePathAssignment) == 32, "Offset mismatch for FValkyrieProjectBindingsDescriptor::bSuppressAutomaticVersePathAssignment");
static_assert(offsetof(FValkyrieProjectBindingsDescriptor, ProjectVersePath) == 40, "Offset mismatch for FValkyrieProjectBindingsDescriptor::ProjectVersePath");

// /Script/VkEngineTypes.ValkyrieProjectDescriptor
// Kind: ScriptStruct; super: none
struct FValkyrieProjectDescriptor
{
public:
    std::uint8_t FileVersion; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString Title; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString KeyArt; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString DocsUrl; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t ApiAccess; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t DefaultAssetAccessSpecifier; // 0x004C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    FString CompatibilityVersion; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString RequiredRedirectorStartingVersion; // 0x0060 (Size: 0x10, Type: StrProperty)
    std::uint8_t EditorPermissions[0x10]; // 0x0070 (Size: 0x10, Type: SetProperty)
    FString EpicApp; // 0x0080 (Size: 0x10, Type: StrProperty)
    float SortPriority; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0094
    FString FeatureSet; // 0x0098 (Size: 0x10, Type: StrProperty)
    TArray<void*> Plugins; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DataSets; // 0x00B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0004[0x48]; // 0x00C8
    std::uint8_t Bindings[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FValkyrieProjectDescriptor, FileVersion) == 0, "Offset mismatch for FValkyrieProjectDescriptor::FileVersion");
static_assert(offsetof(FValkyrieProjectDescriptor, Title) == 8, "Offset mismatch for FValkyrieProjectDescriptor::Title");
static_assert(offsetof(FValkyrieProjectDescriptor, Description) == 24, "Offset mismatch for FValkyrieProjectDescriptor::Description");
static_assert(offsetof(FValkyrieProjectDescriptor, KeyArt) == 40, "Offset mismatch for FValkyrieProjectDescriptor::KeyArt");
static_assert(offsetof(FValkyrieProjectDescriptor, DocsUrl) == 56, "Offset mismatch for FValkyrieProjectDescriptor::DocsUrl");
static_assert(offsetof(FValkyrieProjectDescriptor, ApiAccess) == 72, "Offset mismatch for FValkyrieProjectDescriptor::ApiAccess");
static_assert(offsetof(FValkyrieProjectDescriptor, DefaultAssetAccessSpecifier) == 76, "Offset mismatch for FValkyrieProjectDescriptor::DefaultAssetAccessSpecifier");
static_assert(offsetof(FValkyrieProjectDescriptor, CompatibilityVersion) == 80, "Offset mismatch for FValkyrieProjectDescriptor::CompatibilityVersion");
static_assert(offsetof(FValkyrieProjectDescriptor, RequiredRedirectorStartingVersion) == 96, "Offset mismatch for FValkyrieProjectDescriptor::RequiredRedirectorStartingVersion");
static_assert(offsetof(FValkyrieProjectDescriptor, EditorPermissions) == 112, "Offset mismatch for FValkyrieProjectDescriptor::EditorPermissions");
static_assert(offsetof(FValkyrieProjectDescriptor, EpicApp) == 128, "Offset mismatch for FValkyrieProjectDescriptor::EpicApp");
static_assert(offsetof(FValkyrieProjectDescriptor, SortPriority) == 144, "Offset mismatch for FValkyrieProjectDescriptor::SortPriority");
static_assert(offsetof(FValkyrieProjectDescriptor, FeatureSet) == 152, "Offset mismatch for FValkyrieProjectDescriptor::FeatureSet");
static_assert(offsetof(FValkyrieProjectDescriptor, Plugins) == 168, "Offset mismatch for FValkyrieProjectDescriptor::Plugins");
static_assert(offsetof(FValkyrieProjectDescriptor, DataSets) == 184, "Offset mismatch for FValkyrieProjectDescriptor::DataSets");
static_assert(offsetof(FValkyrieProjectDescriptor, Bindings) == 272, "Offset mismatch for FValkyrieProjectDescriptor::Bindings");

// /Script/VkEngineTypes.ValkyrieProjectDescriptorIOContext
// Kind: ScriptStruct; super: none
struct FValkyrieProjectDescriptorIOContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VkEngineTypes.ValkyrieProjectReferenceDescriptor
// Kind: ScriptStruct; super: none
struct FValkyrieProjectReferenceDescriptor
{
public:
    std::uint8_t FileVersion; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString ID; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0018
    std::uint8_t ProjectID[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FValkyrieProjectReferenceDescriptor, FileVersion) == 0, "Offset mismatch for FValkyrieProjectReferenceDescriptor::FileVersion");
static_assert(offsetof(FValkyrieProjectReferenceDescriptor, ID) == 8, "Offset mismatch for FValkyrieProjectReferenceDescriptor::ID");
static_assert(offsetof(FValkyrieProjectReferenceDescriptor, ProjectID) == 40, "Offset mismatch for FValkyrieProjectReferenceDescriptor::ProjectID");
static_assert(offsetof(FValkyrieProjectReferenceDescriptor, bEnabled) == 56, "Offset mismatch for FValkyrieProjectReferenceDescriptor::bEnabled");

// /Script/VkEngineTypes.VkAccessControl
// Kind: ScriptStruct; super: none
struct FVkAccessControl
{
public:
    std::uint8_t Admin; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Edit; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operate; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Publish; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVkAccessControl, Admin) == 0, "Offset mismatch for FVkAccessControl::Admin");
static_assert(offsetof(FVkAccessControl, Edit) == 1, "Offset mismatch for FVkAccessControl::Edit");
static_assert(offsetof(FVkAccessControl, Operate) == 2, "Offset mismatch for FVkAccessControl::Operate");
static_assert(offsetof(FVkAccessControl, Publish) == 3, "Offset mismatch for FVkAccessControl::Publish");

// /Script/VkEngineTypes.VkArtifactOption
// Kind: ScriptStruct; super: none
struct FVkArtifactOption
{
public:
    FString ArtifactId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Role; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t Filter[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkArtifactOption, ArtifactId) == 0, "Offset mismatch for FVkArtifactOption::ArtifactId");
static_assert(offsetof(FVkArtifactOption, Role) == 16, "Offset mismatch for FVkArtifactOption::Role");
static_assert(offsetof(FVkArtifactOption, Filter) == 24, "Offset mismatch for FVkArtifactOption::Filter");

// /Script/VkEngineTypes.VkAutoLocalizationJobInput
// Kind: ScriptStruct; super: none
struct FVkAutoLocalizationJobInput
{
public:
    FString SourceLanguage; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> LocalizedLanguages; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourceStrings; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkAutoLocalizationJobInput, SourceLanguage) == 0, "Offset mismatch for FVkAutoLocalizationJobInput::SourceLanguage");
static_assert(offsetof(FVkAutoLocalizationJobInput, LocalizedLanguages) == 16, "Offset mismatch for FVkAutoLocalizationJobInput::LocalizedLanguages");
static_assert(offsetof(FVkAutoLocalizationJobInput, SourceStrings) == 32, "Offset mismatch for FVkAutoLocalizationJobInput::SourceStrings");

// /Script/VkEngineTypes.VkAutoLocalizationJobResultString
// Kind: ScriptStruct; super: none
struct FVkAutoLocalizationJobResultString
{
public:
    FString Source; // 0x0000 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> Translations; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Signatures; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkAutoLocalizationJobResultString, Source) == 0, "Offset mismatch for FVkAutoLocalizationJobResultString::Source");
static_assert(offsetof(FVkAutoLocalizationJobResultString, Translations) == 16, "Offset mismatch for FVkAutoLocalizationJobResultString::Translations");
static_assert(offsetof(FVkAutoLocalizationJobResultString, Signatures) == 32, "Offset mismatch for FVkAutoLocalizationJobResultString::Signatures");

// /Script/VkEngineTypes.VkAutoLocalizationJobSourceString
// Kind: ScriptStruct; super: none
struct FVkAutoLocalizationJobSourceString
{
public:
    FString Source; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> LocalizedLanguages; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkAutoLocalizationJobSourceString, Source) == 0, "Offset mismatch for FVkAutoLocalizationJobSourceString::Source");
static_assert(offsetof(FVkAutoLocalizationJobSourceString, LocalizedLanguages) == 16, "Offset mismatch for FVkAutoLocalizationJobSourceString::LocalizedLanguages");

// /Script/VkEngineTypes.VkAutoLocalizationJobStatusInfo
// Kind: ScriptStruct; super: none
struct FVkAutoLocalizationJobStatusInfo
{
public:
    FString ExecutionId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString SourceLanguage; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString KeyId; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t Status; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0031
    TArray<void*> Result; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkAutoLocalizationJobStatusInfo, ExecutionId) == 0, "Offset mismatch for FVkAutoLocalizationJobStatusInfo::ExecutionId");
static_assert(offsetof(FVkAutoLocalizationJobStatusInfo, SourceLanguage) == 16, "Offset mismatch for FVkAutoLocalizationJobStatusInfo::SourceLanguage");
static_assert(offsetof(FVkAutoLocalizationJobStatusInfo, KeyId) == 32, "Offset mismatch for FVkAutoLocalizationJobStatusInfo::KeyId");
static_assert(offsetof(FVkAutoLocalizationJobStatusInfo, Status) == 48, "Offset mismatch for FVkAutoLocalizationJobStatusInfo::Status");
static_assert(offsetof(FVkAutoLocalizationJobStatusInfo, Result) == 56, "Offset mismatch for FVkAutoLocalizationJobStatusInfo::Result");

// /Script/VkEngineTypes.VkBuildCode
// Kind: ScriptStruct; super: none
struct FVkBuildCode
{
public:
    FString LinkCode; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t LinkVersion; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint8_t LastPublished[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t PublishedBy[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    FString base; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString CommitMessage; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t ProfileResult[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkBuildCode, LinkCode) == 0, "Offset mismatch for FVkBuildCode::LinkCode");
static_assert(offsetof(FVkBuildCode, LinkVersion) == 16, "Offset mismatch for FVkBuildCode::LinkVersion");
static_assert(offsetof(FVkBuildCode, LastPublished) == 24, "Offset mismatch for FVkBuildCode::LastPublished");
static_assert(offsetof(FVkBuildCode, PublishedBy) == 32, "Offset mismatch for FVkBuildCode::PublishedBy");
static_assert(offsetof(FVkBuildCode, base) == 56, "Offset mismatch for FVkBuildCode::base");
static_assert(offsetof(FVkBuildCode, CommitMessage) == 72, "Offset mismatch for FVkBuildCode::CommitMessage");
static_assert(offsetof(FVkBuildCode, ProfileResult) == 88, "Offset mismatch for FVkBuildCode::ProfileResult");

// /Script/VkEngineTypes.VkBuildVersion
// Kind: ScriptStruct; super: none
struct FVkBuildVersion
{
public:
    FString Major; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Minor; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t Patch; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkBuildVersion, Major) == 0, "Offset mismatch for FVkBuildVersion::Major");
static_assert(offsetof(FVkBuildVersion, Minor) == 16, "Offset mismatch for FVkBuildVersion::Minor");
static_assert(offsetof(FVkBuildVersion, Patch) == 20, "Offset mismatch for FVkBuildVersion::Patch");

// /Script/VkEngineTypes.VkCommitInfo
// Kind: ScriptStruct; super: none
struct FVkCommitInfo
{
public:
    std::uint8_t UefnVersion[0x10]; // 0x0000 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t Change[0x10]; // 0x0010 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t BuiltLocalization[0x1]; // 0x0020 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FVkCommitInfo, UefnVersion) == 0, "Offset mismatch for FVkCommitInfo::UefnVersion");
static_assert(offsetof(FVkCommitInfo, Change) == 16, "Offset mismatch for FVkCommitInfo::Change");
static_assert(offsetof(FVkCommitInfo, BuiltLocalization) == 32, "Offset mismatch for FVkCommitInfo::BuiltLocalization");

// /Script/VkEngineTypes.VkContentFilter
// Kind: ScriptStruct; super: none
struct FVkContentFilter
{
public:
    FString Platform; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString BuildVersion; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ShaderFormat; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkContentFilter, Platform) == 0, "Offset mismatch for FVkContentFilter::Platform");
static_assert(offsetof(FVkContentFilter, BuildVersion) == 16, "Offset mismatch for FVkContentFilter::BuildVersion");
static_assert(offsetof(FVkContentFilter, ShaderFormat) == 32, "Offset mismatch for FVkContentFilter::ShaderFormat");

// /Script/VkEngineTypes.VkContentManifest
// Kind: ScriptStruct; super: none
struct FVkContentManifest
{
public:
    TArray<void*> Content; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkContentManifest, Content) == 0, "Offset mismatch for FVkContentManifest::Content");

// /Script/VkEngineTypes.VkContentPackage
// Kind: ScriptStruct; super: none
struct FVkContentPackage
{
public:
    std::uint8_t ProjectID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> ProjectFlags; // 0x0010 (Size: 0x10, Type: MapProperty)
    TArray<void*> Content; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Resolved[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    std::uint8_t ResolutionId[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t IsEncrypted; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0079
    TMap<void*, void*> ModuleExtensions; // 0x0080 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkContentPackage, ProjectID) == 0, "Offset mismatch for FVkContentPackage::ProjectID");
static_assert(offsetof(FVkContentPackage, ProjectFlags) == 16, "Offset mismatch for FVkContentPackage::ProjectFlags");
static_assert(offsetof(FVkContentPackage, Content) == 32, "Offset mismatch for FVkContentPackage::Content");
static_assert(offsetof(FVkContentPackage, Resolved) == 48, "Offset mismatch for FVkContentPackage::Resolved");
static_assert(offsetof(FVkContentPackage, ResolutionId) == 104, "Offset mismatch for FVkContentPackage::ResolutionId");
static_assert(offsetof(FVkContentPackage, IsEncrypted) == 120, "Offset mismatch for FVkContentPackage::IsEncrypted");
static_assert(offsetof(FVkContentPackage, ModuleExtensions) == 128, "Offset mismatch for FVkContentPackage::ModuleExtensions");

// /Script/VkEngineTypes.VkContentPackageModuleExtension
// Kind: ScriptStruct; super: none
struct FVkContentPackageModuleExtension
{
public:
    std::uint8_t ForkId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ProjectID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> DirectDeps; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StaticDeps; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PublishInfo[0x50]; // 0x0040 (Size: 0x50, Type: StructProperty)
    std::uint8_t PublishMetadata[0x48]; // 0x0090 (Size: 0x48, Type: StructProperty)
    std::uint8_t Access; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x00D9
    std::uint8_t Created[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkContentPackageModuleExtension, ForkId) == 0, "Offset mismatch for FVkContentPackageModuleExtension::ForkId");
static_assert(offsetof(FVkContentPackageModuleExtension, ProjectID) == 16, "Offset mismatch for FVkContentPackageModuleExtension::ProjectID");
static_assert(offsetof(FVkContentPackageModuleExtension, DirectDeps) == 32, "Offset mismatch for FVkContentPackageModuleExtension::DirectDeps");
static_assert(offsetof(FVkContentPackageModuleExtension, StaticDeps) == 48, "Offset mismatch for FVkContentPackageModuleExtension::StaticDeps");
static_assert(offsetof(FVkContentPackageModuleExtension, PublishInfo) == 64, "Offset mismatch for FVkContentPackageModuleExtension::PublishInfo");
static_assert(offsetof(FVkContentPackageModuleExtension, PublishMetadata) == 144, "Offset mismatch for FVkContentPackageModuleExtension::PublishMetadata");
static_assert(offsetof(FVkContentPackageModuleExtension, Access) == 216, "Offset mismatch for FVkContentPackageModuleExtension::Access");
static_assert(offsetof(FVkContentPackageModuleExtension, Created) == 224, "Offset mismatch for FVkContentPackageModuleExtension::Created");

// /Script/VkEngineTypes.VkContentPackageRequest
// Kind: ScriptStruct; super: VkResolvedContent
struct FVkContentPackageRequest
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ProjectID[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkContentPackageRequest, ProjectID) == 56, "Offset mismatch for FVkContentPackageRequest::ProjectID");

// /Script/VkEngineTypes.VkContentResolutionId
// Kind: ScriptStruct; super: VkContentServiceId
struct FVkContentResolutionId
{
public:
    std::int32_t A; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t B; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t C; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t D; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkContentResolutionId, A) == 0, "Offset mismatch for FVkContentResolutionId::A");
static_assert(offsetof(FVkContentResolutionId, B) == 4, "Offset mismatch for FVkContentResolutionId::B");
static_assert(offsetof(FVkContentResolutionId, C) == 8, "Offset mismatch for FVkContentResolutionId::C");
static_assert(offsetof(FVkContentResolutionId, D) == 12, "Offset mismatch for FVkContentResolutionId::D");

// /Script/VkEngineTypes.VkContentServiceId
// Kind: ScriptStruct; super: Guid
struct FVkContentServiceId
{
public:
    std::int32_t A; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t B; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t C; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t D; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkContentServiceId, A) == 0, "Offset mismatch for FVkContentServiceId::A");
static_assert(offsetof(FVkContentServiceId, B) == 4, "Offset mismatch for FVkContentServiceId::B");
static_assert(offsetof(FVkContentServiceId, C) == 8, "Offset mismatch for FVkContentServiceId::C");
static_assert(offsetof(FVkContentServiceId, D) == 12, "Offset mismatch for FVkContentServiceId::D");

// /Script/VkEngineTypes.VkCookedContentPackage
// Kind: ScriptStruct; super: none
struct FVkCookedContentPackage
{
public:
    std::uint8_t ProjectID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> Content; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Resolved[0x38]; // 0x0020 (Size: 0x38, Type: StructProperty)
    FString ResolutionPolicyToken; // 0x0058 (Size: 0x10, Type: StrProperty)
    std::uint8_t IsEncrypted; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0069
    TMap<void*, void*> ModuleExtensions; // 0x0070 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkCookedContentPackage, ProjectID) == 0, "Offset mismatch for FVkCookedContentPackage::ProjectID");
static_assert(offsetof(FVkCookedContentPackage, Content) == 16, "Offset mismatch for FVkCookedContentPackage::Content");
static_assert(offsetof(FVkCookedContentPackage, Resolved) == 32, "Offset mismatch for FVkCookedContentPackage::Resolved");
static_assert(offsetof(FVkCookedContentPackage, ResolutionPolicyToken) == 88, "Offset mismatch for FVkCookedContentPackage::ResolutionPolicyToken");
static_assert(offsetof(FVkCookedContentPackage, IsEncrypted) == 104, "Offset mismatch for FVkCookedContentPackage::IsEncrypted");
static_assert(offsetof(FVkCookedContentPackage, ModuleExtensions) == 112, "Offset mismatch for FVkCookedContentPackage::ModuleExtensions");

// /Script/VkEngineTypes.VkCookedContentUpdate
// Kind: ScriptStruct; super: none
struct FVkCookedContentUpdate
{
public:
    std::int32_t PendingCookRequests; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Resolved[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    TArray<void*> Modules; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkCookedContentUpdate, PendingCookRequests) == 0, "Offset mismatch for FVkCookedContentUpdate::PendingCookRequests");
static_assert(offsetof(FVkCookedContentUpdate, Resolved) == 8, "Offset mismatch for FVkCookedContentUpdate::Resolved");
static_assert(offsetof(FVkCookedContentUpdate, Modules) == 64, "Offset mismatch for FVkCookedContentUpdate::Modules");

// /Script/VkEngineTypes.VkCookedModuleUpdate
// Kind: ScriptStruct; super: VKModuleVersion
struct FVkCookedModuleUpdate
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FString ArtifactId; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString CookJobId; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t IsComplete; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVkCookedModuleUpdate, ArtifactId) == 24, "Offset mismatch for FVkCookedModuleUpdate::ArtifactId");
static_assert(offsetof(FVkCookedModuleUpdate, CookJobId) == 40, "Offset mismatch for FVkCookedModuleUpdate::CookJobId");
static_assert(offsetof(FVkCookedModuleUpdate, IsComplete) == 56, "Offset mismatch for FVkCookedModuleUpdate::IsComplete");

// /Script/VkEngineTypes.VkCreateForkRequest
// Kind: ScriptStruct; super: none
struct FVkCreateForkRequest
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Notes; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Owner[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t ParentId[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkCreateForkRequest, Name) == 0, "Offset mismatch for FVkCreateForkRequest::Name");
static_assert(offsetof(FVkCreateForkRequest, Notes) == 16, "Offset mismatch for FVkCreateForkRequest::Notes");
static_assert(offsetof(FVkCreateForkRequest, Owner) == 32, "Offset mismatch for FVkCreateForkRequest::Owner");
static_assert(offsetof(FVkCreateForkRequest, ParentId) == 56, "Offset mismatch for FVkCreateForkRequest::ParentId");

// /Script/VkEngineTypes.VkCreateModuleRequest
// Kind: ScriptStruct; super: none
struct FVkCreateModuleRequest
{
public:
    FString ModuleName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Meta[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    FString ContentType; // 0x0030 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> Relevance; // 0x0040 (Size: 0x10, Type: MapProperty)
    std::uint8_t DesiredModuleId[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkCreateModuleRequest, ModuleName) == 0, "Offset mismatch for FVkCreateModuleRequest::ModuleName");
static_assert(offsetof(FVkCreateModuleRequest, Meta) == 16, "Offset mismatch for FVkCreateModuleRequest::Meta");
static_assert(offsetof(FVkCreateModuleRequest, ContentType) == 48, "Offset mismatch for FVkCreateModuleRequest::ContentType");
static_assert(offsetof(FVkCreateModuleRequest, Relevance) == 64, "Offset mismatch for FVkCreateModuleRequest::Relevance");
static_assert(offsetof(FVkCreateModuleRequest, DesiredModuleId) == 80, "Offset mismatch for FVkCreateModuleRequest::DesiredModuleId");

// /Script/VkEngineTypes.VkCreateModuleVersionRequest
// Kind: ScriptStruct; super: none
struct FVkCreateModuleVersionRequest
{
public:
    TMap<void*, void*> RawFiles; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> InputRepositories; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Dependencies; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StaticDependencies; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Meta[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    FString Checksum; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString ManifestLink; // 0x0070 (Size: 0x10, Type: StrProperty)
    TArray<void*> GameFeaturesets; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkCreateModuleVersionRequest, RawFiles) == 0, "Offset mismatch for FVkCreateModuleVersionRequest::RawFiles");
static_assert(offsetof(FVkCreateModuleVersionRequest, InputRepositories) == 16, "Offset mismatch for FVkCreateModuleVersionRequest::InputRepositories");
static_assert(offsetof(FVkCreateModuleVersionRequest, Dependencies) == 32, "Offset mismatch for FVkCreateModuleVersionRequest::Dependencies");
static_assert(offsetof(FVkCreateModuleVersionRequest, StaticDependencies) == 48, "Offset mismatch for FVkCreateModuleVersionRequest::StaticDependencies");
static_assert(offsetof(FVkCreateModuleVersionRequest, Meta) == 64, "Offset mismatch for FVkCreateModuleVersionRequest::Meta");
static_assert(offsetof(FVkCreateModuleVersionRequest, Checksum) == 96, "Offset mismatch for FVkCreateModuleVersionRequest::Checksum");
static_assert(offsetof(FVkCreateModuleVersionRequest, ManifestLink) == 112, "Offset mismatch for FVkCreateModuleVersionRequest::ManifestLink");
static_assert(offsetof(FVkCreateModuleVersionRequest, GameFeaturesets) == 128, "Offset mismatch for FVkCreateModuleVersionRequest::GameFeaturesets");

// /Script/VkEngineTypes.VkCreateProjectRequest
// Kind: ScriptStruct; super: none
struct FVkCreateProjectRequest
{
public:
    std::uint8_t DesiredProjectId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString TeamId; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString RequiredRedirectorStartingVersion; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t Meta[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    TArray<void*> GameFeaturesets; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkCreateProjectRequest, DesiredProjectId) == 0, "Offset mismatch for FVkCreateProjectRequest::DesiredProjectId");
static_assert(offsetof(FVkCreateProjectRequest, TeamId) == 16, "Offset mismatch for FVkCreateProjectRequest::TeamId");
static_assert(offsetof(FVkCreateProjectRequest, RequiredRedirectorStartingVersion) == 32, "Offset mismatch for FVkCreateProjectRequest::RequiredRedirectorStartingVersion");
static_assert(offsetof(FVkCreateProjectRequest, Meta) == 48, "Offset mismatch for FVkCreateProjectRequest::Meta");
static_assert(offsetof(FVkCreateProjectRequest, GameFeaturesets) == 80, "Offset mismatch for FVkCreateProjectRequest::GameFeaturesets");

// /Script/VkEngineTypes.VkCreateValidationSessionRequest
// Kind: ScriptStruct; super: none
struct FVkCreateValidationSessionRequest
{
public:
    TArray<void*> Candidates; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ForkId[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> Resolutions; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkCreateValidationSessionRequest, Candidates) == 0, "Offset mismatch for FVkCreateValidationSessionRequest::Candidates");
static_assert(offsetof(FVkCreateValidationSessionRequest, ForkId) == 16, "Offset mismatch for FVkCreateValidationSessionRequest::ForkId");
static_assert(offsetof(FVkCreateValidationSessionRequest, Resolutions) == 32, "Offset mismatch for FVkCreateValidationSessionRequest::Resolutions");

// /Script/VkEngineTypes.VkCreateValidationSessionResponse
// Kind: ScriptStruct; super: none
struct FVkCreateValidationSessionResponse
{
public:
    FString SessionID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Limits[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkCreateValidationSessionResponse, SessionID) == 0, "Offset mismatch for FVkCreateValidationSessionResponse::SessionID");
static_assert(offsetof(FVkCreateValidationSessionResponse, Limits) == 16, "Offset mismatch for FVkCreateValidationSessionResponse::Limits");

// /Script/VkEngineTypes.VkEncryptionKey
// Kind: ScriptStruct; super: none
struct FVkEncryptionKey
{
public:
    FString Guid; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Key; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkEncryptionKey, Guid) == 0, "Offset mismatch for FVkEncryptionKey::Guid");
static_assert(offsetof(FVkEncryptionKey, Key) == 16, "Offset mismatch for FVkEncryptionKey::Key");

// /Script/VkEngineTypes.VkEncryptionKeyBatchResponseItem
// Kind: ScriptStruct; super: VkEncryptionKeyResponse
struct FVkEncryptionKeyBatchResponseItem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ModuleId[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkEncryptionKeyBatchResponseItem, ModuleId) == 48, "Offset mismatch for FVkEncryptionKeyBatchResponseItem::ModuleId");

// /Script/VkEngineTypes.VkEncryptionKeyResponse
// Kind: ScriptStruct; super: none
struct FVkEncryptionKeyResponse
{
public:
    FString Type; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Key[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkEncryptionKeyResponse, Type) == 0, "Offset mismatch for FVkEncryptionKeyResponse::Type");
static_assert(offsetof(FVkEncryptionKeyResponse, Key) == 16, "Offset mismatch for FVkEncryptionKeyResponse::Key");

// /Script/VkEngineTypes.VkExportedMetadataEntry
// Kind: ScriptStruct; super: none
struct FVkExportedMetadataEntry
{
public:
    FString Category; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Key; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString SourceFilePath; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkExportedMetadataEntry, Category) == 0, "Offset mismatch for FVkExportedMetadataEntry::Category");
static_assert(offsetof(FVkExportedMetadataEntry, Key) == 16, "Offset mismatch for FVkExportedMetadataEntry::Key");
static_assert(offsetof(FVkExportedMetadataEntry, Value) == 32, "Offset mismatch for FVkExportedMetadataEntry::Value");
static_assert(offsetof(FVkExportedMetadataEntry, SourceFilePath) == 48, "Offset mismatch for FVkExportedMetadataEntry::SourceFilePath");

// /Script/VkEngineTypes.VkExtendedError
// Kind: ScriptStruct; super: none
struct FVkExtendedError
{
public:
    FString FormatKey; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString FormatNs; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Message; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString MessageNoVerbosityOrCategory; // 0x0030 (Size: 0x10, Type: StrProperty)
    TArray<void*> Params; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkExtendedError, FormatKey) == 0, "Offset mismatch for FVkExtendedError::FormatKey");
static_assert(offsetof(FVkExtendedError, FormatNs) == 16, "Offset mismatch for FVkExtendedError::FormatNs");
static_assert(offsetof(FVkExtendedError, Message) == 32, "Offset mismatch for FVkExtendedError::Message");
static_assert(offsetof(FVkExtendedError, MessageNoVerbosityOrCategory) == 48, "Offset mismatch for FVkExtendedError::MessageNoVerbosityOrCategory");
static_assert(offsetof(FVkExtendedError, Params) == 64, "Offset mismatch for FVkExtendedError::Params");

// /Script/VkEngineTypes.VkExtendedErrorInformation
// Kind: ScriptStruct; super: none
struct FVkExtendedErrorInformation
{
public:
    FString ErrorCode; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ErrorMessage; // 0x0010 (Size: 0x10, Type: StrProperty)
    TArray<void*> AdditionalErrors; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkExtendedErrorInformation, ErrorCode) == 0, "Offset mismatch for FVkExtendedErrorInformation::ErrorCode");
static_assert(offsetof(FVkExtendedErrorInformation, ErrorMessage) == 16, "Offset mismatch for FVkExtendedErrorInformation::ErrorMessage");
static_assert(offsetof(FVkExtendedErrorInformation, AdditionalErrors) == 32, "Offset mismatch for FVkExtendedErrorInformation::AdditionalErrors");

// /Script/VkEngineTypes.VkExtendedErrorParam
// Kind: ScriptStruct; super: none
struct FVkExtendedErrorParam
{
public:
    FString Key; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkExtendedErrorParam, Key) == 0, "Offset mismatch for FVkExtendedErrorParam::Key");
static_assert(offsetof(FVkExtendedErrorParam, Value) == 16, "Offset mismatch for FVkExtendedErrorParam::Value");

// /Script/VkEngineTypes.VkFileSize
// Kind: ScriptStruct; super: none
struct FVkFileSize
{
public:
    TArray<void*> Types; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int64_t SourceSize; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::int64_t UncompressedSize; // 0x0018 (Size: 0x8, Type: Int64Property)
    std::int64_t CompressedSize; // 0x0020 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FVkFileSize, Types) == 0, "Offset mismatch for FVkFileSize::Types");
static_assert(offsetof(FVkFileSize, SourceSize) == 16, "Offset mismatch for FVkFileSize::SourceSize");
static_assert(offsetof(FVkFileSize, UncompressedSize) == 24, "Offset mismatch for FVkFileSize::UncompressedSize");
static_assert(offsetof(FVkFileSize, CompressedSize) == 32, "Offset mismatch for FVkFileSize::CompressedSize");

// /Script/VkEngineTypes.VkFileSizes
// Kind: ScriptStruct; super: none
struct FVkFileSizes
{
public:
    TMap<void*, void*> FileSizeMap; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkFileSizes, FileSizeMap) == 0, "Offset mismatch for FVkFileSizes::FileSizeMap");

// /Script/VkEngineTypes.VkForkId
// Kind: ScriptStruct; super: VkContentServiceId
struct FVkForkId
{
public:
    std::int32_t A; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t B; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t C; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t D; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkForkId, A) == 0, "Offset mismatch for FVkForkId::A");
static_assert(offsetof(FVkForkId, B) == 4, "Offset mismatch for FVkForkId::B");
static_assert(offsetof(FVkForkId, C) == 8, "Offset mismatch for FVkForkId::C");
static_assert(offsetof(FVkForkId, D) == 12, "Offset mismatch for FVkForkId::D");

// /Script/VkEngineTypes.VkForkInfo
// Kind: ScriptStruct; super: none
struct FVkForkInfo
{
public:
    std::uint8_t ForkId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParentId[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FString Name; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t Owner[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    FString OwnerName; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t Created[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t Creator[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t Modified[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    FString Notes; // 0x0080 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkForkInfo, ForkId) == 0, "Offset mismatch for FVkForkInfo::ForkId");
static_assert(offsetof(FVkForkInfo, ParentId) == 16, "Offset mismatch for FVkForkInfo::ParentId");
static_assert(offsetof(FVkForkInfo, Name) == 32, "Offset mismatch for FVkForkInfo::Name");
static_assert(offsetof(FVkForkInfo, Owner) == 48, "Offset mismatch for FVkForkInfo::Owner");
static_assert(offsetof(FVkForkInfo, OwnerName) == 72, "Offset mismatch for FVkForkInfo::OwnerName");
static_assert(offsetof(FVkForkInfo, Created) == 88, "Offset mismatch for FVkForkInfo::Created");
static_assert(offsetof(FVkForkInfo, Creator) == 96, "Offset mismatch for FVkForkInfo::Creator");
static_assert(offsetof(FVkForkInfo, Modified) == 120, "Offset mismatch for FVkForkInfo::Modified");
static_assert(offsetof(FVkForkInfo, Notes) == 128, "Offset mismatch for FVkForkInfo::Notes");

// /Script/VkEngineTypes.VkForkPublishRecord
// Kind: ScriptStruct; super: none
struct FVkForkPublishRecord
{
public:
    std::uint8_t ForkId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ProjectID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FString VersePath; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t Content[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    std::uint8_t Publishing[0x50]; // 0x0068 (Size: 0x50, Type: StructProperty)
    std::uint8_t MetaData[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkForkPublishRecord, ForkId) == 0, "Offset mismatch for FVkForkPublishRecord::ForkId");
static_assert(offsetof(FVkForkPublishRecord, ProjectID) == 16, "Offset mismatch for FVkForkPublishRecord::ProjectID");
static_assert(offsetof(FVkForkPublishRecord, VersePath) == 32, "Offset mismatch for FVkForkPublishRecord::VersePath");
static_assert(offsetof(FVkForkPublishRecord, Content) == 48, "Offset mismatch for FVkForkPublishRecord::Content");
static_assert(offsetof(FVkForkPublishRecord, Publishing) == 104, "Offset mismatch for FVkForkPublishRecord::Publishing");
static_assert(offsetof(FVkForkPublishRecord, MetaData) == 184, "Offset mismatch for FVkForkPublishRecord::MetaData");

// /Script/VkEngineTypes.VkForkPublishRecordContent
// Kind: ScriptStruct; super: none
struct FVkForkPublishRecordContent
{
public:
    std::uint8_t Root[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> Public_Modules; // 0x0018 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Project_Modules; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkForkPublishRecordContent, Root) == 0, "Offset mismatch for FVkForkPublishRecordContent::Root");
static_assert(offsetof(FVkForkPublishRecordContent, Public_Modules) == 24, "Offset mismatch for FVkForkPublishRecordContent::Public_Modules");
static_assert(offsetof(FVkForkPublishRecordContent, Project_Modules) == 40, "Offset mismatch for FVkForkPublishRecordContent::Project_Modules");

// /Script/VkEngineTypes.VkFoundMatchingArtifact
// Kind: ScriptStruct; super: none
struct FVkFoundMatchingArtifact
{
public:
    FString ArtifactId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Name; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Filter[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkFoundMatchingArtifact, ArtifactId) == 0, "Offset mismatch for FVkFoundMatchingArtifact::ArtifactId");
static_assert(offsetof(FVkFoundMatchingArtifact, Name) == 16, "Offset mismatch for FVkFoundMatchingArtifact::Name");
static_assert(offsetof(FVkFoundMatchingArtifact, Filter) == 32, "Offset mismatch for FVkFoundMatchingArtifact::Filter");

// /Script/VkEngineTypes.VkGenerateBuildCodeRequest
// Kind: ScriptStruct; super: none
struct FVkGenerateBuildCodeRequest
{
public:
    std::uint8_t Content[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    FString CommitMessage; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommitInfo[0x30]; // 0x0048 (Size: 0x30, Type: OptionalProperty)
    std::uint8_t MatchmakingConfig[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    FString SourceControlBase; // 0x0098 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkGenerateBuildCodeRequest, Content) == 0, "Offset mismatch for FVkGenerateBuildCodeRequest::Content");
static_assert(offsetof(FVkGenerateBuildCodeRequest, CommitMessage) == 56, "Offset mismatch for FVkGenerateBuildCodeRequest::CommitMessage");
static_assert(offsetof(FVkGenerateBuildCodeRequest, CommitInfo) == 72, "Offset mismatch for FVkGenerateBuildCodeRequest::CommitInfo");
static_assert(offsetof(FVkGenerateBuildCodeRequest, MatchmakingConfig) == 120, "Offset mismatch for FVkGenerateBuildCodeRequest::MatchmakingConfig");
static_assert(offsetof(FVkGenerateBuildCodeRequest, SourceControlBase) == 152, "Offset mismatch for FVkGenerateBuildCodeRequest::SourceControlBase");

// /Script/VkEngineTypes.VkGeneratedModuleInfo
// Kind: ScriptStruct; super: none
struct FVkGeneratedModuleInfo
{
public:
    TArray<void*> Dependencies; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StaticDependencies; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GameFeaturesets; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CandidateDependencies; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ModuleIdToPluginURLs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkGeneratedModuleInfo, Dependencies) == 0, "Offset mismatch for FVkGeneratedModuleInfo::Dependencies");
static_assert(offsetof(FVkGeneratedModuleInfo, StaticDependencies) == 16, "Offset mismatch for FVkGeneratedModuleInfo::StaticDependencies");
static_assert(offsetof(FVkGeneratedModuleInfo, GameFeaturesets) == 32, "Offset mismatch for FVkGeneratedModuleInfo::GameFeaturesets");
static_assert(offsetof(FVkGeneratedModuleInfo, CandidateDependencies) == 48, "Offset mismatch for FVkGeneratedModuleInfo::CandidateDependencies");
static_assert(offsetof(FVkGeneratedModuleInfo, ModuleIdToPluginURLs) == 64, "Offset mismatch for FVkGeneratedModuleInfo::ModuleIdToPluginURLs");

// /Script/VkEngineTypes.VkInstallMetadata
// Kind: ScriptStruct; super: none
struct FVkInstallMetadata
{
public:
    FString PluginName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString GameFeaturePluginUri; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t VerseDiagnostics[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkInstallMetadata, PluginName) == 0, "Offset mismatch for FVkInstallMetadata::PluginName");
static_assert(offsetof(FVkInstallMetadata, GameFeaturePluginUri) == 16, "Offset mismatch for FVkInstallMetadata::GameFeaturePluginUri");
static_assert(offsetof(FVkInstallMetadata, VerseDiagnostics) == 32, "Offset mismatch for FVkInstallMetadata::VerseDiagnostics");

// /Script/VkEngineTypes.VkJobErrorDetail
// Kind: ScriptStruct; super: none
struct FVkJobErrorDetail
{
public:
    FString JobID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ModuleId[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int32_t ModuleVersion; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    FString ArtifactId; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString ErrorCode; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkJobErrorDetail, JobID) == 0, "Offset mismatch for FVkJobErrorDetail::JobID");
static_assert(offsetof(FVkJobErrorDetail, ModuleId) == 16, "Offset mismatch for FVkJobErrorDetail::ModuleId");
static_assert(offsetof(FVkJobErrorDetail, ModuleVersion) == 32, "Offset mismatch for FVkJobErrorDetail::ModuleVersion");
static_assert(offsetof(FVkJobErrorDetail, ArtifactId) == 40, "Offset mismatch for FVkJobErrorDetail::ArtifactId");
static_assert(offsetof(FVkJobErrorDetail, ErrorCode) == 56, "Offset mismatch for FVkJobErrorDetail::ErrorCode");

// /Script/VkEngineTypes.VkJobErrorDetails
// Kind: ScriptStruct; super: none
struct FVkJobErrorDetails
{
public:
    TArray<void*> JobErrors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkJobErrorDetails, JobErrors) == 0, "Offset mismatch for FVkJobErrorDetails::JobErrors");

// /Script/VkEngineTypes.VkJobOutput
// Kind: ScriptStruct; super: none
struct FVkJobOutput
{
public:
    FString BaseUrl; // 0x0000 (Size: 0x10, Type: StrProperty)
    double TotalSizeKb; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double UserContentTotalSizeKb; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> Files; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    FString Manifest; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkJobOutput, BaseUrl) == 0, "Offset mismatch for FVkJobOutput::BaseUrl");
static_assert(offsetof(FVkJobOutput, TotalSizeKb) == 16, "Offset mismatch for FVkJobOutput::TotalSizeKb");
static_assert(offsetof(FVkJobOutput, UserContentTotalSizeKb) == 24, "Offset mismatch for FVkJobOutput::UserContentTotalSizeKb");
static_assert(offsetof(FVkJobOutput, Files) == 32, "Offset mismatch for FVkJobOutput::Files");
static_assert(offsetof(FVkJobOutput, Manifest) == 48, "Offset mismatch for FVkJobOutput::Manifest");

// /Script/VkEngineTypes.VkLaunchData_JoinIPAddress
// Kind: ScriptStruct; super: none
struct FVkLaunchData_JoinIPAddress
{
public:
    FString IpAddress; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkLaunchData_JoinIPAddress, IpAddress) == 0, "Offset mismatch for FVkLaunchData_JoinIPAddress::IpAddress");

// /Script/VkEngineTypes.VkLaunchData_JoinMatchmakingSession
// Kind: ScriptStruct; super: none
struct FVkLaunchData_JoinMatchmakingSession
{
public:
    FString SessionID; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkLaunchData_JoinMatchmakingSession, SessionID) == 0, "Offset mismatch for FVkLaunchData_JoinMatchmakingSession::SessionID");

// /Script/VkEngineTypes.VkLaunchData_Link
// Kind: ScriptStruct; super: none
struct FVkLaunchData_Link
{
public:
    FString LinkCode; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkLaunchData_Link, LinkCode) == 0, "Offset mismatch for FVkLaunchData_Link::LinkCode");
static_assert(offsetof(FVkLaunchData_Link, Version) == 16, "Offset mismatch for FVkLaunchData_Link::Version");

// /Script/VkEngineTypes.VkLinkActivationHistoryEntry
// Kind: ScriptStruct; super: none
struct FVkLinkActivationHistoryEntry
{
public:
    FString Mnemonic; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint8_t Activated[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkLinkActivationHistoryEntry, Mnemonic) == 0, "Offset mismatch for FVkLinkActivationHistoryEntry::Mnemonic");
static_assert(offsetof(FVkLinkActivationHistoryEntry, Version) == 16, "Offset mismatch for FVkLinkActivationHistoryEntry::Version");
static_assert(offsetof(FVkLinkActivationHistoryEntry, Activated) == 24, "Offset mismatch for FVkLinkActivationHistoryEntry::Activated");

// /Script/VkEngineTypes.VkLinkCodeInfo
// Kind: ScriptStruct; super: none
struct FVkLinkCodeInfo
{
public:
    FString LinkCode; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    FString Type; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t IsActive; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t ProjectID[0x14]; // 0x002C (Size: 0x14, Type: StructProperty)
    FString CreatorName; // 0x0040 (Size: 0x10, Type: StrProperty)
    std::uint8_t MetaData[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkLinkCodeInfo, LinkCode) == 0, "Offset mismatch for FVkLinkCodeInfo::LinkCode");
static_assert(offsetof(FVkLinkCodeInfo, Version) == 16, "Offset mismatch for FVkLinkCodeInfo::Version");
static_assert(offsetof(FVkLinkCodeInfo, Type) == 24, "Offset mismatch for FVkLinkCodeInfo::Type");
static_assert(offsetof(FVkLinkCodeInfo, IsActive) == 40, "Offset mismatch for FVkLinkCodeInfo::IsActive");
static_assert(offsetof(FVkLinkCodeInfo, ProjectID) == 44, "Offset mismatch for FVkLinkCodeInfo::ProjectID");
static_assert(offsetof(FVkLinkCodeInfo, CreatorName) == 64, "Offset mismatch for FVkLinkCodeInfo::CreatorName");
static_assert(offsetof(FVkLinkCodeInfo, MetaData) == 80, "Offset mismatch for FVkLinkCodeInfo::MetaData");

// /Script/VkEngineTypes.VkLinkCodeMnemonicPluginName
// Kind: ScriptStruct; super: none
struct FVkLinkCodeMnemonicPluginName
{
public:
    FString LinkCodeMnemonic; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PluginName; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkLinkCodeMnemonicPluginName, LinkCodeMnemonic) == 0, "Offset mismatch for FVkLinkCodeMnemonicPluginName::LinkCodeMnemonic");
static_assert(offsetof(FVkLinkCodeMnemonicPluginName, PluginName) == 16, "Offset mismatch for FVkLinkCodeMnemonicPluginName::PluginName");

// /Script/VkEngineTypes.VkLinkCodeMnemonicPluginNameMapping
// Kind: ScriptStruct; super: none
struct FVkLinkCodeMnemonicPluginNameMapping
{
public:
    TArray<void*> LinkCodeMnemonicToPluginName; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkLinkCodeMnemonicPluginNameMapping, LinkCodeMnemonicToPluginName) == 0, "Offset mismatch for FVkLinkCodeMnemonicPluginNameMapping::LinkCodeMnemonicToPluginName");

// /Script/VkEngineTypes.VkMetaDataFlags
// Kind: ScriptStruct; super: none
struct FVkMetaDataFlags
{
public:
    TMap<void*, void*> validation_flags; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkMetaDataFlags, validation_flags) == 0, "Offset mismatch for FVkMetaDataFlags::validation_flags");

// /Script/VkEngineTypes.VkModuleBinaries
// Kind: ScriptStruct; super: none
struct FVkModuleBinaries
{
public:
    FString BaseUrl; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Manifest; // 0x0010 (Size: 0x10, Type: StrProperty)
    TArray<void*> Files; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    double TotalSizeKb; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double ManifestSizeKb; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double ManifestDiskSizeKb; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double ManifestDownloadSizeKb; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double IoStoreOnDemandManifestSizeKb; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    double IoStoreOnDemandInstalledTotalChunksSizeKb; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double IoStoreOnDemandStreamingTotalChunksSizeKb; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> InstallMetadata; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkModuleBinaries, BaseUrl) == 0, "Offset mismatch for FVkModuleBinaries::BaseUrl");
static_assert(offsetof(FVkModuleBinaries, Manifest) == 16, "Offset mismatch for FVkModuleBinaries::Manifest");
static_assert(offsetof(FVkModuleBinaries, Files) == 32, "Offset mismatch for FVkModuleBinaries::Files");
static_assert(offsetof(FVkModuleBinaries, TotalSizeKb) == 48, "Offset mismatch for FVkModuleBinaries::TotalSizeKb");
static_assert(offsetof(FVkModuleBinaries, ManifestSizeKb) == 56, "Offset mismatch for FVkModuleBinaries::ManifestSizeKb");
static_assert(offsetof(FVkModuleBinaries, ManifestDiskSizeKb) == 64, "Offset mismatch for FVkModuleBinaries::ManifestDiskSizeKb");
static_assert(offsetof(FVkModuleBinaries, ManifestDownloadSizeKb) == 72, "Offset mismatch for FVkModuleBinaries::ManifestDownloadSizeKb");
static_assert(offsetof(FVkModuleBinaries, IoStoreOnDemandManifestSizeKb) == 80, "Offset mismatch for FVkModuleBinaries::IoStoreOnDemandManifestSizeKb");
static_assert(offsetof(FVkModuleBinaries, IoStoreOnDemandInstalledTotalChunksSizeKb) == 88, "Offset mismatch for FVkModuleBinaries::IoStoreOnDemandInstalledTotalChunksSizeKb");
static_assert(offsetof(FVkModuleBinaries, IoStoreOnDemandStreamingTotalChunksSizeKb) == 96, "Offset mismatch for FVkModuleBinaries::IoStoreOnDemandStreamingTotalChunksSizeKb");
static_assert(offsetof(FVkModuleBinaries, InstallMetadata) == 104, "Offset mismatch for FVkModuleBinaries::InstallMetadata");

// /Script/VkEngineTypes.VkModuleDoc
// Kind: ScriptStruct; super: none
struct FVkModuleDoc
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Created[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Updated[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t Author[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t ProjectID[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    FString ModuleName; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString ContentType; // 0x0058 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> Relevance; // 0x0068 (Size: 0x10, Type: MapProperty)
    FString AliasForModuleId; // 0x0078 (Size: 0x10, Type: StrProperty)
    std::uint8_t Meta[0x20]; // 0x0088 (Size: 0x20, Type: StructProperty)
    std::int32_t LatestVersion; // 0x00A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkModuleDoc, ModuleId) == 0, "Offset mismatch for FVkModuleDoc::ModuleId");
static_assert(offsetof(FVkModuleDoc, Created) == 16, "Offset mismatch for FVkModuleDoc::Created");
static_assert(offsetof(FVkModuleDoc, Updated) == 24, "Offset mismatch for FVkModuleDoc::Updated");
static_assert(offsetof(FVkModuleDoc, Author) == 32, "Offset mismatch for FVkModuleDoc::Author");
static_assert(offsetof(FVkModuleDoc, ProjectID) == 56, "Offset mismatch for FVkModuleDoc::ProjectID");
static_assert(offsetof(FVkModuleDoc, ModuleName) == 72, "Offset mismatch for FVkModuleDoc::ModuleName");
static_assert(offsetof(FVkModuleDoc, ContentType) == 88, "Offset mismatch for FVkModuleDoc::ContentType");
static_assert(offsetof(FVkModuleDoc, Relevance) == 104, "Offset mismatch for FVkModuleDoc::Relevance");
static_assert(offsetof(FVkModuleDoc, AliasForModuleId) == 120, "Offset mismatch for FVkModuleDoc::AliasForModuleId");
static_assert(offsetof(FVkModuleDoc, Meta) == 136, "Offset mismatch for FVkModuleDoc::Meta");
static_assert(offsetof(FVkModuleDoc, LatestVersion) == 168, "Offset mismatch for FVkModuleDoc::LatestVersion");

// /Script/VkEngineTypes.VkModuleId
// Kind: ScriptStruct; super: VkContentServiceId
struct FVkModuleId
{
public:
    std::int32_t A; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t B; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t C; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t D; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkModuleId, A) == 0, "Offset mismatch for FVkModuleId::A");
static_assert(offsetof(FVkModuleId, B) == 4, "Offset mismatch for FVkModuleId::B");
static_assert(offsetof(FVkModuleId, C) == 8, "Offset mismatch for FVkModuleId::C");
static_assert(offsetof(FVkModuleId, D) == 12, "Offset mismatch for FVkModuleId::D");

// /Script/VkEngineTypes.VkModuleIdToPluginURL
// Kind: ScriptStruct; super: none
struct FVkModuleIdToPluginURL
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString PluginURL; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkModuleIdToPluginURL, ModuleId) == 0, "Offset mismatch for FVkModuleIdToPluginURL::ModuleId");
static_assert(offsetof(FVkModuleIdToPluginURL, PluginURL) == 16, "Offset mismatch for FVkModuleIdToPluginURL::PluginURL");

// /Script/VkEngineTypes.VkModuleVersionDependency
// Kind: ScriptStruct; super: VKModuleVersion
struct FVkModuleVersionDependency
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkModuleVersionDependency, ModuleId) == 0, "Offset mismatch for FVkModuleVersionDependency::ModuleId");
static_assert(offsetof(FVkModuleVersionDependency, Version) == 16, "Offset mismatch for FVkModuleVersionDependency::Version");

// /Script/VkEngineTypes.VkModuleVersionDoc
// Kind: ScriptStruct; super: none
struct FVkModuleVersionDoc
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t ProjectID[0x10]; // 0x0014 (Size: 0x10, Type: StructProperty)
    std::uint8_t Access; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    std::uint8_t Created[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Author[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Meta[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t SysMeta[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    TArray<void*> Dependencies; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StagedFiles[0x40]; // 0x0098 (Size: 0x40, Type: StructProperty)
    std::uint8_t SourceVersion[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    FString ContentType; // 0x00F0 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> Relevance; // 0x0100 (Size: 0x10, Type: MapProperty)
    FString ArtifactKey; // 0x0110 (Size: 0x10, Type: StrProperty)
    FString Checksum; // 0x0120 (Size: 0x10, Type: StrProperty)
    TArray<void*> Artifacts; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkModuleVersionDoc, ModuleId) == 0, "Offset mismatch for FVkModuleVersionDoc::ModuleId");
static_assert(offsetof(FVkModuleVersionDoc, Version) == 16, "Offset mismatch for FVkModuleVersionDoc::Version");
static_assert(offsetof(FVkModuleVersionDoc, ProjectID) == 20, "Offset mismatch for FVkModuleVersionDoc::ProjectID");
static_assert(offsetof(FVkModuleVersionDoc, Access) == 36, "Offset mismatch for FVkModuleVersionDoc::Access");
static_assert(offsetof(FVkModuleVersionDoc, Created) == 40, "Offset mismatch for FVkModuleVersionDoc::Created");
static_assert(offsetof(FVkModuleVersionDoc, Author) == 48, "Offset mismatch for FVkModuleVersionDoc::Author");
static_assert(offsetof(FVkModuleVersionDoc, Meta) == 72, "Offset mismatch for FVkModuleVersionDoc::Meta");
static_assert(offsetof(FVkModuleVersionDoc, SysMeta) == 104, "Offset mismatch for FVkModuleVersionDoc::SysMeta");
static_assert(offsetof(FVkModuleVersionDoc, Dependencies) == 136, "Offset mismatch for FVkModuleVersionDoc::Dependencies");
static_assert(offsetof(FVkModuleVersionDoc, StagedFiles) == 152, "Offset mismatch for FVkModuleVersionDoc::StagedFiles");
static_assert(offsetof(FVkModuleVersionDoc, SourceVersion) == 216, "Offset mismatch for FVkModuleVersionDoc::SourceVersion");
static_assert(offsetof(FVkModuleVersionDoc, ContentType) == 240, "Offset mismatch for FVkModuleVersionDoc::ContentType");
static_assert(offsetof(FVkModuleVersionDoc, Relevance) == 256, "Offset mismatch for FVkModuleVersionDoc::Relevance");
static_assert(offsetof(FVkModuleVersionDoc, ArtifactKey) == 272, "Offset mismatch for FVkModuleVersionDoc::ArtifactKey");
static_assert(offsetof(FVkModuleVersionDoc, Checksum) == 288, "Offset mismatch for FVkModuleVersionDoc::Checksum");
static_assert(offsetof(FVkModuleVersionDoc, Artifacts) == 304, "Offset mismatch for FVkModuleVersionDoc::Artifacts");

// /Script/VkEngineTypes.VkModuleVersionModerationStatus
// Kind: ScriptStruct; super: none
struct FVkModuleVersionModerationStatus
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    FString MoreInfoUrl; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t PublishStatus; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SafetyStatus; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ModerationSource; // 0x002A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FVkModuleVersionModerationStatus, ModuleId) == 0, "Offset mismatch for FVkModuleVersionModerationStatus::ModuleId");
static_assert(offsetof(FVkModuleVersionModerationStatus, Version) == 16, "Offset mismatch for FVkModuleVersionModerationStatus::Version");
static_assert(offsetof(FVkModuleVersionModerationStatus, MoreInfoUrl) == 24, "Offset mismatch for FVkModuleVersionModerationStatus::MoreInfoUrl");
static_assert(offsetof(FVkModuleVersionModerationStatus, PublishStatus) == 40, "Offset mismatch for FVkModuleVersionModerationStatus::PublishStatus");
static_assert(offsetof(FVkModuleVersionModerationStatus, SafetyStatus) == 41, "Offset mismatch for FVkModuleVersionModerationStatus::SafetyStatus");
static_assert(offsetof(FVkModuleVersionModerationStatus, ModerationSource) == 42, "Offset mismatch for FVkModuleVersionModerationStatus::ModerationSource");

// /Script/VkEngineTypes.VkModuleVersionWithArtifacts
// Kind: ScriptStruct; super: VKModuleVersion
struct FVkModuleVersionWithArtifacts
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Artifacts; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    FString VersePath; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkModuleVersionWithArtifacts, Artifacts) == 24, "Offset mismatch for FVkModuleVersionWithArtifacts::Artifacts");
static_assert(offsetof(FVkModuleVersionWithArtifacts, VersePath) == 40, "Offset mismatch for FVkModuleVersionWithArtifacts::VersePath");

// /Script/VkEngineTypes.VkModuleVersionWithDiagnostics
// Kind: ScriptStruct; super: none
struct FVkModuleVersionWithDiagnostics
{
public:
    std::uint8_t Version[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    std::uint8_t Diagnostics[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkModuleVersionWithDiagnostics, Version) == 0, "Offset mismatch for FVkModuleVersionWithDiagnostics::Version");
static_assert(offsetof(FVkModuleVersionWithDiagnostics, Diagnostics) == 20, "Offset mismatch for FVkModuleVersionWithDiagnostics::Diagnostics");

// /Script/VkEngineTypes.VkModuleViolation
// Kind: ScriptStruct; super: none
struct FVkModuleViolation
{
public:
    FString AssetPath; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString AssetHash; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Type; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString TosReference; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString PolicyUrl; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString PolicySummary; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString PolicyDescription; // 0x0060 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkModuleViolation, AssetPath) == 0, "Offset mismatch for FVkModuleViolation::AssetPath");
static_assert(offsetof(FVkModuleViolation, AssetHash) == 16, "Offset mismatch for FVkModuleViolation::AssetHash");
static_assert(offsetof(FVkModuleViolation, Type) == 32, "Offset mismatch for FVkModuleViolation::Type");
static_assert(offsetof(FVkModuleViolation, TosReference) == 48, "Offset mismatch for FVkModuleViolation::TosReference");
static_assert(offsetof(FVkModuleViolation, PolicyUrl) == 64, "Offset mismatch for FVkModuleViolation::PolicyUrl");
static_assert(offsetof(FVkModuleViolation, PolicySummary) == 80, "Offset mismatch for FVkModuleViolation::PolicySummary");
static_assert(offsetof(FVkModuleViolation, PolicyDescription) == 96, "Offset mismatch for FVkModuleViolation::PolicyDescription");

// /Script/VkEngineTypes.VkNamedId
// Kind: ScriptStruct; super: none
struct FVkNamedId
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ID; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkNamedId, Name) == 0, "Offset mismatch for FVkNamedId::Name");
static_assert(offsetof(FVkNamedId, ID) == 16, "Offset mismatch for FVkNamedId::ID");

// /Script/VkEngineTypes.VkOrganizationId
// Kind: ScriptStruct; super: VkContentServiceId
struct FVkOrganizationId
{
public:
    std::int32_t A; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t B; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t C; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t D; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkOrganizationId, A) == 0, "Offset mismatch for FVkOrganizationId::A");
static_assert(offsetof(FVkOrganizationId, B) == 4, "Offset mismatch for FVkOrganizationId::B");
static_assert(offsetof(FVkOrganizationId, C) == 8, "Offset mismatch for FVkOrganizationId::C");
static_assert(offsetof(FVkOrganizationId, D) == 12, "Offset mismatch for FVkOrganizationId::D");

// /Script/VkEngineTypes.VkOrganizationInfo
// Kind: ScriptStruct; super: none
struct FVkOrganizationInfo
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString Name; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkOrganizationInfo, ID) == 0, "Offset mismatch for FVkOrganizationInfo::ID");
static_assert(offsetof(FVkOrganizationInfo, Name) == 16, "Offset mismatch for FVkOrganizationInfo::Name");

// /Script/VkEngineTypes.VkOwnerId
// Kind: ScriptStruct; super: none
struct FVkOwnerId
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString ID; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkOwnerId, Type) == 0, "Offset mismatch for FVkOwnerId::Type");
static_assert(offsetof(FVkOwnerId, ID) == 8, "Offset mismatch for FVkOwnerId::ID");

// /Script/VkEngineTypes.VkOwnerInfo
// Kind: ScriptStruct; super: none
struct FVkOwnerInfo
{
public:
    FString Owner; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Brand; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkOwnerInfo, Owner) == 0, "Offset mismatch for FVkOwnerInfo::Owner");
static_assert(offsetof(FVkOwnerInfo, Brand) == 16, "Offset mismatch for FVkOwnerInfo::Brand");

// /Script/VkEngineTypes.VkPendingModuleVersion
// Kind: ScriptStruct; super: none
struct FVkPendingModuleVersion
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString TicketId; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkPendingModuleVersion, ModuleId) == 0, "Offset mismatch for FVkPendingModuleVersion::ModuleId");
static_assert(offsetof(FVkPendingModuleVersion, TicketId) == 16, "Offset mismatch for FVkPendingModuleVersion::TicketId");

// /Script/VkEngineTypes.VkProfileBuildResult
// Kind: ScriptStruct; super: none
struct FVkProfileBuildResult
{
public:
    float Score; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString SessionID; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t duration[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t Server[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    TArray<void*> Clients; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkProfileBuildResult, Score) == 0, "Offset mismatch for FVkProfileBuildResult::Score");
static_assert(offsetof(FVkProfileBuildResult, SessionID) == 8, "Offset mismatch for FVkProfileBuildResult::SessionID");
static_assert(offsetof(FVkProfileBuildResult, duration) == 24, "Offset mismatch for FVkProfileBuildResult::duration");
static_assert(offsetof(FVkProfileBuildResult, Server) == 40, "Offset mismatch for FVkProfileBuildResult::Server");
static_assert(offsetof(FVkProfileBuildResult, Clients) == 88, "Offset mismatch for FVkProfileBuildResult::Clients");

// /Script/VkEngineTypes.VkProfileBuildResult_Client
// Kind: ScriptStruct; super: none
struct FVkProfileBuildResult_Client
{
public:
    FString AccountID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString BuildID; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Platform; // 0x0020 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> Stat; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkProfileBuildResult_Client, AccountID) == 0, "Offset mismatch for FVkProfileBuildResult_Client::AccountID");
static_assert(offsetof(FVkProfileBuildResult_Client, BuildID) == 16, "Offset mismatch for FVkProfileBuildResult_Client::BuildID");
static_assert(offsetof(FVkProfileBuildResult_Client, Platform) == 32, "Offset mismatch for FVkProfileBuildResult_Client::Platform");
static_assert(offsetof(FVkProfileBuildResult_Client, Stat) == 48, "Offset mismatch for FVkProfileBuildResult_Client::Stat");

// /Script/VkEngineTypes.VkProfileBuildResult_Duration
// Kind: ScriptStruct; super: none
struct FVkProfileBuildResult_Duration
{
public:
    std::uint8_t Start[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t End[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkProfileBuildResult_Duration, Start) == 0, "Offset mismatch for FVkProfileBuildResult_Duration::Start");
static_assert(offsetof(FVkProfileBuildResult_Duration, End) == 8, "Offset mismatch for FVkProfileBuildResult_Duration::End");

// /Script/VkEngineTypes.VkProfileBuildResult_Server
// Kind: ScriptStruct; super: none
struct FVkProfileBuildResult_Server
{
public:
    FString BuildID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Platform; // 0x0010 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> Stat; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkProfileBuildResult_Server, BuildID) == 0, "Offset mismatch for FVkProfileBuildResult_Server::BuildID");
static_assert(offsetof(FVkProfileBuildResult_Server, Platform) == 16, "Offset mismatch for FVkProfileBuildResult_Server::Platform");
static_assert(offsetof(FVkProfileBuildResult_Server, Stat) == 32, "Offset mismatch for FVkProfileBuildResult_Server::Stat");

// /Script/VkEngineTypes.VkProjectAccessControl
// Kind: ScriptStruct; super: none
struct FVkProjectAccessControl
{
public:
    std::uint8_t Read; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Edit; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operate; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Publish; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Admin; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVkProjectAccessControl, Read) == 0, "Offset mismatch for FVkProjectAccessControl::Read");
static_assert(offsetof(FVkProjectAccessControl, Edit) == 1, "Offset mismatch for FVkProjectAccessControl::Edit");
static_assert(offsetof(FVkProjectAccessControl, Operate) == 2, "Offset mismatch for FVkProjectAccessControl::Operate");
static_assert(offsetof(FVkProjectAccessControl, Publish) == 3, "Offset mismatch for FVkProjectAccessControl::Publish");
static_assert(offsetof(FVkProjectAccessControl, Admin) == 4, "Offset mismatch for FVkProjectAccessControl::Admin");

// /Script/VkEngineTypes.VkProjectDoc
// Kind: ScriptStruct; super: none
struct FVkProjectDoc
{
public:
    std::uint8_t ProjectID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Created[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Author[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Owner[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Meta[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t SysMeta[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    std::uint8_t LiveLink[0xC0]; // 0x0088 (Size: 0xC0, Type: StructProperty)
    std::uint8_t ReservedLink[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkProjectDoc, ProjectID) == 0, "Offset mismatch for FVkProjectDoc::ProjectID");
static_assert(offsetof(FVkProjectDoc, Created) == 16, "Offset mismatch for FVkProjectDoc::Created");
static_assert(offsetof(FVkProjectDoc, Author) == 24, "Offset mismatch for FVkProjectDoc::Author");
static_assert(offsetof(FVkProjectDoc, Owner) == 48, "Offset mismatch for FVkProjectDoc::Owner");
static_assert(offsetof(FVkProjectDoc, Meta) == 72, "Offset mismatch for FVkProjectDoc::Meta");
static_assert(offsetof(FVkProjectDoc, SysMeta) == 104, "Offset mismatch for FVkProjectDoc::SysMeta");
static_assert(offsetof(FVkProjectDoc, LiveLink) == 136, "Offset mismatch for FVkProjectDoc::LiveLink");
static_assert(offsetof(FVkProjectDoc, ReservedLink) == 328, "Offset mismatch for FVkProjectDoc::ReservedLink");

// /Script/VkEngineTypes.VkProjectId
// Kind: ScriptStruct; super: VkContentServiceId
struct FVkProjectId
{
public:
    std::int32_t A; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t B; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t C; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t D; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkProjectId, A) == 0, "Offset mismatch for FVkProjectId::A");
static_assert(offsetof(FVkProjectId, B) == 4, "Offset mismatch for FVkProjectId::B");
static_assert(offsetof(FVkProjectId, C) == 8, "Offset mismatch for FVkProjectId::C");
static_assert(offsetof(FVkProjectId, D) == 12, "Offset mismatch for FVkProjectId::D");

// /Script/VkEngineTypes.VkProjectInfoSlim
// Kind: ScriptStruct; super: none
struct FVkProjectInfoSlim
{
public:
    std::uint8_t Owner[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    FString Title; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString LinkCode; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString RcsProvider; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t SysMeta[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkProjectInfoSlim, Owner) == 0, "Offset mismatch for FVkProjectInfoSlim::Owner");
static_assert(offsetof(FVkProjectInfoSlim, Title) == 24, "Offset mismatch for FVkProjectInfoSlim::Title");
static_assert(offsetof(FVkProjectInfoSlim, Description) == 40, "Offset mismatch for FVkProjectInfoSlim::Description");
static_assert(offsetof(FVkProjectInfoSlim, LinkCode) == 56, "Offset mismatch for FVkProjectInfoSlim::LinkCode");
static_assert(offsetof(FVkProjectInfoSlim, RcsProvider) == 72, "Offset mismatch for FVkProjectInfoSlim::RcsProvider");
static_assert(offsetof(FVkProjectInfoSlim, SysMeta) == 88, "Offset mismatch for FVkProjectInfoSlim::SysMeta");

// /Script/VkEngineTypes.VkProjectLimitsDoc
// Kind: ScriptStruct; super: none
struct FVkProjectLimitsDoc
{
public:
    std::int64_t PublishingMemorySize; // 0x0000 (Size: 0x8, Type: Int64Property)
    std::int64_t PublishingDownloadSize; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::int64_t ProjectUploadSize; // 0x0010 (Size: 0x8, Type: Int64Property)
    std::int32_t ModuleUploadConcurrencyLimit; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::int64_t FileCount; // 0x0020 (Size: 0x8, Type: Int64Property)
    std::int64_t IndividualFileSizeKb; // 0x0028 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FVkProjectLimitsDoc, PublishingMemorySize) == 0, "Offset mismatch for FVkProjectLimitsDoc::PublishingMemorySize");
static_assert(offsetof(FVkProjectLimitsDoc, PublishingDownloadSize) == 8, "Offset mismatch for FVkProjectLimitsDoc::PublishingDownloadSize");
static_assert(offsetof(FVkProjectLimitsDoc, ProjectUploadSize) == 16, "Offset mismatch for FVkProjectLimitsDoc::ProjectUploadSize");
static_assert(offsetof(FVkProjectLimitsDoc, ModuleUploadConcurrencyLimit) == 24, "Offset mismatch for FVkProjectLimitsDoc::ModuleUploadConcurrencyLimit");
static_assert(offsetof(FVkProjectLimitsDoc, FileCount) == 32, "Offset mismatch for FVkProjectLimitsDoc::FileCount");
static_assert(offsetof(FVkProjectLimitsDoc, IndividualFileSizeKb) == 40, "Offset mismatch for FVkProjectLimitsDoc::IndividualFileSizeKb");

// /Script/VkEngineTypes.VkProjectPlaytestAccessRequest
// Kind: ScriptStruct; super: none
struct FVkProjectPlaytestAccessRequest
{
public:
    TArray<void*> Users; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    FString PlaytestGroupId; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkProjectPlaytestAccessRequest, Users) == 0, "Offset mismatch for FVkProjectPlaytestAccessRequest::Users");
static_assert(offsetof(FVkProjectPlaytestAccessRequest, PlaytestGroupId) == 16, "Offset mismatch for FVkProjectPlaytestAccessRequest::PlaytestGroupId");

// /Script/VkEngineTypes.VkProjectPlaytestAccessResult
// Kind: ScriptStruct; super: none
struct FVkProjectPlaytestAccessResult
{
public:
    TMap<void*, void*> Playtesters; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkProjectPlaytestAccessResult, Playtesters) == 0, "Offset mismatch for FVkProjectPlaytestAccessResult::Playtesters");

// /Script/VkEngineTypes.VkProjectSearchResult
// Kind: ScriptStruct; super: none
struct FVkProjectSearchResult
{
public:
    std::uint8_t ProjectID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Created[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Accessed[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t Meta[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t SysMeta[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    FString LinkCode; // 0x0060 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkProjectSearchResult, ProjectID) == 0, "Offset mismatch for FVkProjectSearchResult::ProjectID");
static_assert(offsetof(FVkProjectSearchResult, Created) == 16, "Offset mismatch for FVkProjectSearchResult::Created");
static_assert(offsetof(FVkProjectSearchResult, Accessed) == 24, "Offset mismatch for FVkProjectSearchResult::Accessed");
static_assert(offsetof(FVkProjectSearchResult, Meta) == 32, "Offset mismatch for FVkProjectSearchResult::Meta");
static_assert(offsetof(FVkProjectSearchResult, SysMeta) == 64, "Offset mismatch for FVkProjectSearchResult::SysMeta");
static_assert(offsetof(FVkProjectSearchResult, LinkCode) == 96, "Offset mismatch for FVkProjectSearchResult::LinkCode");

// /Script/VkEngineTypes.VkProjectSearchResultSlim
// Kind: ScriptStruct; super: none
struct FVkProjectSearchResultSlim
{
public:
    std::uint8_t ProjectID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Date[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Info[0x78]; // 0x0018 (Size: 0x78, Type: StructProperty)
    std::uint8_t is_starred; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t is_new; // 0x0091 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVkProjectSearchResultSlim, ProjectID) == 0, "Offset mismatch for FVkProjectSearchResultSlim::ProjectID");
static_assert(offsetof(FVkProjectSearchResultSlim, Date) == 16, "Offset mismatch for FVkProjectSearchResultSlim::Date");
static_assert(offsetof(FVkProjectSearchResultSlim, Info) == 24, "Offset mismatch for FVkProjectSearchResultSlim::Info");
static_assert(offsetof(FVkProjectSearchResultSlim, is_starred) == 144, "Offset mismatch for FVkProjectSearchResultSlim::is_starred");
static_assert(offsetof(FVkProjectSearchResultSlim, is_new) == 145, "Offset mismatch for FVkProjectSearchResultSlim::is_new");

// /Script/VkEngineTypes.VkProjectSnapshot
// Kind: ScriptStruct; super: none
struct FVkProjectSnapshot
{
public:
    FString UniqueID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ProjectID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FString AccountID; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t CreatedAt[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::int32_t DeltaFileIndex; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x003C
    std::uint8_t Content[0x38]; // 0x0040 (Size: 0x38, Type: StructProperty)
    FString MapPath; // 0x0078 (Size: 0x10, Type: StrProperty)
    std::uint8_t MatchmakingConfig[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkProjectSnapshot, UniqueID) == 0, "Offset mismatch for FVkProjectSnapshot::UniqueID");
static_assert(offsetof(FVkProjectSnapshot, ProjectID) == 16, "Offset mismatch for FVkProjectSnapshot::ProjectID");
static_assert(offsetof(FVkProjectSnapshot, AccountID) == 32, "Offset mismatch for FVkProjectSnapshot::AccountID");
static_assert(offsetof(FVkProjectSnapshot, CreatedAt) == 48, "Offset mismatch for FVkProjectSnapshot::CreatedAt");
static_assert(offsetof(FVkProjectSnapshot, DeltaFileIndex) == 56, "Offset mismatch for FVkProjectSnapshot::DeltaFileIndex");
static_assert(offsetof(FVkProjectSnapshot, Content) == 64, "Offset mismatch for FVkProjectSnapshot::Content");
static_assert(offsetof(FVkProjectSnapshot, MapPath) == 120, "Offset mismatch for FVkProjectSnapshot::MapPath");
static_assert(offsetof(FVkProjectSnapshot, MatchmakingConfig) == 136, "Offset mismatch for FVkProjectSnapshot::MatchmakingConfig");

// /Script/VkEngineTypes.VkProjectUserInfo
// Kind: ScriptStruct; super: none
struct FVkProjectUserInfo
{
public:
    std::uint8_t ProjectID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString AccountID; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Title; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t HasStar; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsNew; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Access[0x6]; // 0x0032 (Size: 0x6, Type: StructProperty)
    TArray<void*> permissions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkProjectUserInfo, ProjectID) == 0, "Offset mismatch for FVkProjectUserInfo::ProjectID");
static_assert(offsetof(FVkProjectUserInfo, AccountID) == 16, "Offset mismatch for FVkProjectUserInfo::AccountID");
static_assert(offsetof(FVkProjectUserInfo, Title) == 32, "Offset mismatch for FVkProjectUserInfo::Title");
static_assert(offsetof(FVkProjectUserInfo, HasStar) == 48, "Offset mismatch for FVkProjectUserInfo::HasStar");
static_assert(offsetof(FVkProjectUserInfo, IsNew) == 49, "Offset mismatch for FVkProjectUserInfo::IsNew");
static_assert(offsetof(FVkProjectUserInfo, Access) == 50, "Offset mismatch for FVkProjectUserInfo::Access");
static_assert(offsetof(FVkProjectUserInfo, permissions) == 56, "Offset mismatch for FVkProjectUserInfo::permissions");

// /Script/VkEngineTypes.VkProjectUserInfoAccessControl
// Kind: ScriptStruct; super: VkAccessControl
struct FVkProjectUserInfoAccessControl
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    std::uint8_t Read; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Owner; // 0x0005 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVkProjectUserInfoAccessControl, Read) == 4, "Offset mismatch for FVkProjectUserInfoAccessControl::Read");
static_assert(offsetof(FVkProjectUserInfoAccessControl, Owner) == 5, "Offset mismatch for FVkProjectUserInfoAccessControl::Owner");

// /Script/VkEngineTypes.VkPublicLinkCodeData
// Kind: ScriptStruct; super: none
struct FVkPublicLinkCodeData
{
public:
    FString LinkCode; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    FString Type; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString Category; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString OwnerID; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString CreatorName; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t IsActive; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Disabled; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ModerationApproved; // 0x005A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x005B
    FString LinkState; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString DiscoveryIntent; // 0x0070 (Size: 0x10, Type: StrProperty)
    TArray<void*> DescriptionTags; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    FString UniverseId; // 0x0090 (Size: 0x10, Type: StrProperty)
    std::uint8_t Published[0x8]; // 0x00A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Created[0x8]; // 0x00A8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Updated[0x8]; // 0x00B0 (Size: 0x8, Type: StructProperty)
    std::uint8_t LastActivatedDate[0x8]; // 0x00B8 (Size: 0x8, Type: StructProperty)
    TArray<void*> ActivationHistory; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkPublicLinkCodeData, LinkCode) == 0, "Offset mismatch for FVkPublicLinkCodeData::LinkCode");
static_assert(offsetof(FVkPublicLinkCodeData, Version) == 16, "Offset mismatch for FVkPublicLinkCodeData::Version");
static_assert(offsetof(FVkPublicLinkCodeData, Type) == 24, "Offset mismatch for FVkPublicLinkCodeData::Type");
static_assert(offsetof(FVkPublicLinkCodeData, Category) == 40, "Offset mismatch for FVkPublicLinkCodeData::Category");
static_assert(offsetof(FVkPublicLinkCodeData, OwnerID) == 56, "Offset mismatch for FVkPublicLinkCodeData::OwnerID");
static_assert(offsetof(FVkPublicLinkCodeData, CreatorName) == 72, "Offset mismatch for FVkPublicLinkCodeData::CreatorName");
static_assert(offsetof(FVkPublicLinkCodeData, IsActive) == 88, "Offset mismatch for FVkPublicLinkCodeData::IsActive");
static_assert(offsetof(FVkPublicLinkCodeData, Disabled) == 89, "Offset mismatch for FVkPublicLinkCodeData::Disabled");
static_assert(offsetof(FVkPublicLinkCodeData, ModerationApproved) == 90, "Offset mismatch for FVkPublicLinkCodeData::ModerationApproved");
static_assert(offsetof(FVkPublicLinkCodeData, LinkState) == 96, "Offset mismatch for FVkPublicLinkCodeData::LinkState");
static_assert(offsetof(FVkPublicLinkCodeData, DiscoveryIntent) == 112, "Offset mismatch for FVkPublicLinkCodeData::DiscoveryIntent");
static_assert(offsetof(FVkPublicLinkCodeData, DescriptionTags) == 128, "Offset mismatch for FVkPublicLinkCodeData::DescriptionTags");
static_assert(offsetof(FVkPublicLinkCodeData, UniverseId) == 144, "Offset mismatch for FVkPublicLinkCodeData::UniverseId");
static_assert(offsetof(FVkPublicLinkCodeData, Published) == 160, "Offset mismatch for FVkPublicLinkCodeData::Published");
static_assert(offsetof(FVkPublicLinkCodeData, Created) == 168, "Offset mismatch for FVkPublicLinkCodeData::Created");
static_assert(offsetof(FVkPublicLinkCodeData, Updated) == 176, "Offset mismatch for FVkPublicLinkCodeData::Updated");
static_assert(offsetof(FVkPublicLinkCodeData, LastActivatedDate) == 184, "Offset mismatch for FVkPublicLinkCodeData::LastActivatedDate");
static_assert(offsetof(FVkPublicLinkCodeData, ActivationHistory) == 192, "Offset mismatch for FVkPublicLinkCodeData::ActivationHistory");

// /Script/VkEngineTypes.VkPublishInfo
// Kind: ScriptStruct; super: none
struct FVkPublishInfo
{
public:
    FString Title; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ImageSmall; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString ImageMedium; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString ImageLarge; // 0x0040 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkPublishInfo, Title) == 0, "Offset mismatch for FVkPublishInfo::Title");
static_assert(offsetof(FVkPublishInfo, Description) == 16, "Offset mismatch for FVkPublishInfo::Description");
static_assert(offsetof(FVkPublishInfo, ImageSmall) == 32, "Offset mismatch for FVkPublishInfo::ImageSmall");
static_assert(offsetof(FVkPublishInfo, ImageMedium) == 48, "Offset mismatch for FVkPublishInfo::ImageMedium");
static_assert(offsetof(FVkPublishInfo, ImageLarge) == 64, "Offset mismatch for FVkPublishInfo::ImageLarge");

// /Script/VkEngineTypes.VkPublishMetadata
// Kind: ScriptStruct; super: none
struct FVkPublishMetadata
{
public:
    FString PublisherAccountId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PublisherName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t AddedTime[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    FString SystemComment; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString UserComment; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkPublishMetadata, PublisherAccountId) == 0, "Offset mismatch for FVkPublishMetadata::PublisherAccountId");
static_assert(offsetof(FVkPublishMetadata, PublisherName) == 16, "Offset mismatch for FVkPublishMetadata::PublisherName");
static_assert(offsetof(FVkPublishMetadata, AddedTime) == 32, "Offset mismatch for FVkPublishMetadata::AddedTime");
static_assert(offsetof(FVkPublishMetadata, SystemComment) == 40, "Offset mismatch for FVkPublishMetadata::SystemComment");
static_assert(offsetof(FVkPublishMetadata, UserComment) == 56, "Offset mismatch for FVkPublishMetadata::UserComment");

// /Script/VkEngineTypes.VkPublishToForkItem
// Kind: ScriptStruct; super: none
struct FVkPublishToForkItem
{
public:
    std::uint8_t Root[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Publishing[0x50]; // 0x0018 (Size: 0x50, Type: StructProperty)
    FString CommitMessage; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString SystemComment; // 0x0078 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkPublishToForkItem, Root) == 0, "Offset mismatch for FVkPublishToForkItem::Root");
static_assert(offsetof(FVkPublishToForkItem, Publishing) == 24, "Offset mismatch for FVkPublishToForkItem::Publishing");
static_assert(offsetof(FVkPublishToForkItem, CommitMessage) == 104, "Offset mismatch for FVkPublishToForkItem::CommitMessage");
static_assert(offsetof(FVkPublishToForkItem, SystemComment) == 120, "Offset mismatch for FVkPublishToForkItem::SystemComment");

// /Script/VkEngineTypes.VkPublishToForkItemResult
// Kind: ScriptStruct; super: none
struct FVkPublishToForkItemResult
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ProjectID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FString Status; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString ErrorCode; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString Message; // 0x0040 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkPublishToForkItemResult, ModuleId) == 0, "Offset mismatch for FVkPublishToForkItemResult::ModuleId");
static_assert(offsetof(FVkPublishToForkItemResult, ProjectID) == 16, "Offset mismatch for FVkPublishToForkItemResult::ProjectID");
static_assert(offsetof(FVkPublishToForkItemResult, Status) == 32, "Offset mismatch for FVkPublishToForkItemResult::Status");
static_assert(offsetof(FVkPublishToForkItemResult, ErrorCode) == 48, "Offset mismatch for FVkPublishToForkItemResult::ErrorCode");
static_assert(offsetof(FVkPublishToForkItemResult, Message) == 64, "Offset mismatch for FVkPublishToForkItemResult::Message");

// /Script/VkEngineTypes.VkPublishToForkLimits
// Kind: ScriptStruct; super: none
struct FVkPublishToForkLimits
{
public:
    std::int32_t MaxItemsPerBatch; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxTransactionItems; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkPublishToForkLimits, MaxItemsPerBatch) == 0, "Offset mismatch for FVkPublishToForkLimits::MaxItemsPerBatch");
static_assert(offsetof(FVkPublishToForkLimits, MaxTransactionItems) == 4, "Offset mismatch for FVkPublishToForkLimits::MaxTransactionItems");

// /Script/VkEngineTypes.VkPublishToForkRequest
// Kind: ScriptStruct; super: none
struct FVkPublishToForkRequest
{
public:
    TArray<void*> Items; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkPublishToForkRequest, Items) == 0, "Offset mismatch for FVkPublishToForkRequest::Items");

// /Script/VkEngineTypes.VkRedirectResolution
// Kind: ScriptStruct; super: none
struct FVkRedirectResolution
{
public:
    TMap<void*, void*> Paths; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> Dependencies; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    FString LatestSnapshotVersion; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkRedirectResolution, Paths) == 0, "Offset mismatch for FVkRedirectResolution::Paths");
static_assert(offsetof(FVkRedirectResolution, Dependencies) == 16, "Offset mismatch for FVkRedirectResolution::Dependencies");
static_assert(offsetof(FVkRedirectResolution, LatestSnapshotVersion) == 32, "Offset mismatch for FVkRedirectResolution::LatestSnapshotVersion");

// /Script/VkEngineTypes.VkRedirectResolutionDependency
// Kind: ScriptStruct; super: none
struct FVkRedirectResolutionDependency
{
public:
    FString VersePath; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString MountPoint; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkRedirectResolutionDependency, VersePath) == 0, "Offset mismatch for FVkRedirectResolutionDependency::VersePath");
static_assert(offsetof(FVkRedirectResolutionDependency, MountPoint) == 16, "Offset mismatch for FVkRedirectResolutionDependency::MountPoint");

// /Script/VkEngineTypes.VkRedirectResolutionOptions
// Kind: ScriptStruct; super: none
struct FVkRedirectResolutionOptions
{
public:
    std::uint8_t bCollapse; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInclusiveMinVersion; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExclusiveMaxVersion; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    TArray<void*> SourceObjectPathFilter; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkRedirectResolutionOptions, bCollapse) == 0, "Offset mismatch for FVkRedirectResolutionOptions::bCollapse");
static_assert(offsetof(FVkRedirectResolutionOptions, bInclusiveMinVersion) == 1, "Offset mismatch for FVkRedirectResolutionOptions::bInclusiveMinVersion");
static_assert(offsetof(FVkRedirectResolutionOptions, bExclusiveMaxVersion) == 2, "Offset mismatch for FVkRedirectResolutionOptions::bExclusiveMaxVersion");
static_assert(offsetof(FVkRedirectResolutionOptions, SourceObjectPathFilter) == 8, "Offset mismatch for FVkRedirectResolutionOptions::SourceObjectPathFilter");

// /Script/VkEngineTypes.VkRedirectResolutionResult
// Kind: ScriptStruct; super: none
struct FVkRedirectResolutionResult
{
public:
    FString Url; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkRedirectResolutionResult, Url) == 0, "Offset mismatch for FVkRedirectResolutionResult::Url");

// /Script/VkEngineTypes.VkResolvedContent
// Kind: ScriptStruct; super: none
struct FVkResolvedContent
{
public:
    std::uint8_t Root[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> Resolutions; // 0x0018 (Size: 0x10, Type: MapProperty)
    TArray<void*> DependencyOrderedResolutions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkResolvedContent, Root) == 0, "Offset mismatch for FVkResolvedContent::Root");
static_assert(offsetof(FVkResolvedContent, Resolutions) == 24, "Offset mismatch for FVkResolvedContent::Resolutions");
static_assert(offsetof(FVkResolvedContent, DependencyOrderedResolutions) == 40, "Offset mismatch for FVkResolvedContent::DependencyOrderedResolutions");

// /Script/VkEngineTypes.VkResolvedModule
// Kind: ScriptStruct; super: none
struct FVkResolvedModule
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    FString BinaryVersion; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString ArtifactId; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString CookJobId; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t Binaries[0x78]; // 0x0048 (Size: 0x78, Type: StructProperty)
    std::uint8_t IsOpaqueContent; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVkResolvedModule, ModuleId) == 0, "Offset mismatch for FVkResolvedModule::ModuleId");
static_assert(offsetof(FVkResolvedModule, Version) == 16, "Offset mismatch for FVkResolvedModule::Version");
static_assert(offsetof(FVkResolvedModule, BinaryVersion) == 24, "Offset mismatch for FVkResolvedModule::BinaryVersion");
static_assert(offsetof(FVkResolvedModule, ArtifactId) == 40, "Offset mismatch for FVkResolvedModule::ArtifactId");
static_assert(offsetof(FVkResolvedModule, CookJobId) == 56, "Offset mismatch for FVkResolvedModule::CookJobId");
static_assert(offsetof(FVkResolvedModule, Binaries) == 72, "Offset mismatch for FVkResolvedModule::Binaries");
static_assert(offsetof(FVkResolvedModule, IsOpaqueContent) == 192, "Offset mismatch for FVkResolvedModule::IsOpaqueContent");

// /Script/VkEngineTypes.VkResolvedVersePath
// Kind: ScriptStruct; super: VkVersePath
struct FVkResolvedVersePath
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ProjectID[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    FString PrimaryVersePath; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t Reference[0x40]; // 0x0048 (Size: 0x40, Type: StructProperty)
    std::uint8_t Fork[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkResolvedVersePath, ProjectID) == 40, "Offset mismatch for FVkResolvedVersePath::ProjectID");
static_assert(offsetof(FVkResolvedVersePath, PrimaryVersePath) == 56, "Offset mismatch for FVkResolvedVersePath::PrimaryVersePath");
static_assert(offsetof(FVkResolvedVersePath, Reference) == 72, "Offset mismatch for FVkResolvedVersePath::Reference");
static_assert(offsetof(FVkResolvedVersePath, Fork) == 136, "Offset mismatch for FVkResolvedVersePath::Fork");

// /Script/VkEngineTypes.VkResolvedVersePathFork
// Kind: ScriptStruct; super: none
struct FVkResolvedVersePathFork
{
public:
    FString ID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Content[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::uint8_t Publishing[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkResolvedVersePathFork, ID) == 0, "Offset mismatch for FVkResolvedVersePathFork::ID");
static_assert(offsetof(FVkResolvedVersePathFork, Content) == 16, "Offset mismatch for FVkResolvedVersePathFork::Content");
static_assert(offsetof(FVkResolvedVersePathFork, Publishing) == 56, "Offset mismatch for FVkResolvedVersePathFork::Publishing");

// /Script/VkEngineTypes.VkResolvedVersePathForkContent
// Kind: ScriptStruct; super: none
struct FVkResolvedVersePathForkContent
{
public:
    std::uint8_t Root[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> PublicModules; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkResolvedVersePathForkContent, Root) == 0, "Offset mismatch for FVkResolvedVersePathForkContent::Root");
static_assert(offsetof(FVkResolvedVersePathForkContent, PublicModules) == 24, "Offset mismatch for FVkResolvedVersePathForkContent::PublicModules");

// /Script/VkEngineTypes.VkResolvedVersePathReference
// Kind: ScriptStruct; super: none
struct FVkResolvedVersePathReference
{
public:
    FString Owner; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Domain; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ProjectName; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString Resource; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkResolvedVersePathReference, Owner) == 0, "Offset mismatch for FVkResolvedVersePathReference::Owner");
static_assert(offsetof(FVkResolvedVersePathReference, Domain) == 16, "Offset mismatch for FVkResolvedVersePathReference::Domain");
static_assert(offsetof(FVkResolvedVersePathReference, ProjectName) == 32, "Offset mismatch for FVkResolvedVersePathReference::ProjectName");
static_assert(offsetof(FVkResolvedVersePathReference, Resource) == 48, "Offset mismatch for FVkResolvedVersePathReference::Resource");

// /Script/VkEngineTypes.VkScratchRepositoryRef
// Kind: ScriptStruct; super: none
struct FVkScratchRepositoryRef
{
public:
    FString Path; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Revision; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkScratchRepositoryRef, Path) == 0, "Offset mismatch for FVkScratchRepositoryRef::Path");
static_assert(offsetof(FVkScratchRepositoryRef, Revision) == 16, "Offset mismatch for FVkScratchRepositoryRef::Revision");

// /Script/VkEngineTypes.VkSnapshotDeltaFiles
// Kind: ScriptStruct; super: none
struct FVkSnapshotDeltaFiles
{
public:
    FString SnapshotId; // 0x0000 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> DeltaFileLinks; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVkSnapshotDeltaFiles, SnapshotId) == 0, "Offset mismatch for FVkSnapshotDeltaFiles::SnapshotId");
static_assert(offsetof(FVkSnapshotDeltaFiles, DeltaFileLinks) == 16, "Offset mismatch for FVkSnapshotDeltaFiles::DeltaFileLinks");

// /Script/VkEngineTypes.VkSnapshotSaveRequest
// Kind: ScriptStruct; super: none
struct FVkSnapshotSaveRequest
{
public:
    std::uint8_t Content[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    FString MapPath; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MatchmakingConfig[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t ForkId[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkSnapshotSaveRequest, Content) == 0, "Offset mismatch for FVkSnapshotSaveRequest::Content");
static_assert(offsetof(FVkSnapshotSaveRequest, MapPath) == 56, "Offset mismatch for FVkSnapshotSaveRequest::MapPath");
static_assert(offsetof(FVkSnapshotSaveRequest, MatchmakingConfig) == 72, "Offset mismatch for FVkSnapshotSaveRequest::MatchmakingConfig");
static_assert(offsetof(FVkSnapshotSaveRequest, ForkId) == 104, "Offset mismatch for FVkSnapshotSaveRequest::ForkId");

// /Script/VkEngineTypes.VkStagedFileEntry
// Kind: ScriptStruct; super: none
struct FVkStagedFileEntry
{
public:
    FString Path; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int64_t Size; // 0x0010 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FVkStagedFileEntry, Path) == 0, "Offset mismatch for FVkStagedFileEntry::Path");
static_assert(offsetof(FVkStagedFileEntry, Size) == 16, "Offset mismatch for FVkStagedFileEntry::Size");

// /Script/VkEngineTypes.VkStagedFilesPage
// Kind: ScriptStruct; super: none
struct FVkStagedFilesPage
{
public:
    FString PathPrefix; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Files; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    FString NextCursor; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkStagedFilesPage, PathPrefix) == 0, "Offset mismatch for FVkStagedFilesPage::PathPrefix");
static_assert(offsetof(FVkStagedFilesPage, Files) == 16, "Offset mismatch for FVkStagedFilesPage::Files");
static_assert(offsetof(FVkStagedFilesPage, NextCursor) == 32, "Offset mismatch for FVkStagedFilesPage::NextCursor");

// /Script/VkEngineTypes.VkStartPublishToForkRequest
// Kind: ScriptStruct; super: none
struct FVkStartPublishToForkRequest
{
public:
    FString CommitMessage; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString SystemComment; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkStartPublishToForkRequest, CommitMessage) == 0, "Offset mismatch for FVkStartPublishToForkRequest::CommitMessage");
static_assert(offsetof(FVkStartPublishToForkRequest, SystemComment) == 16, "Offset mismatch for FVkStartPublishToForkRequest::SystemComment");

// /Script/VkEngineTypes.VkTeamAccessControl
// Kind: ScriptStruct; super: VkAccessControl
struct FVkTeamAccessControl
{
public:
    std::uint8_t Admin; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Edit; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operate; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Publish; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVkTeamAccessControl, Admin) == 0, "Offset mismatch for FVkTeamAccessControl::Admin");
static_assert(offsetof(FVkTeamAccessControl, Edit) == 1, "Offset mismatch for FVkTeamAccessControl::Edit");
static_assert(offsetof(FVkTeamAccessControl, Operate) == 2, "Offset mismatch for FVkTeamAccessControl::Operate");
static_assert(offsetof(FVkTeamAccessControl, Publish) == 3, "Offset mismatch for FVkTeamAccessControl::Publish");

// /Script/VkEngineTypes.VkTeamAuthorizedEmailDomain
// Kind: ScriptStruct; super: none
struct FVkTeamAuthorizedEmailDomain
{
public:
    FString Domain; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Access[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkTeamAuthorizedEmailDomain, Domain) == 0, "Offset mismatch for FVkTeamAuthorizedEmailDomain::Domain");
static_assert(offsetof(FVkTeamAuthorizedEmailDomain, Access) == 16, "Offset mismatch for FVkTeamAuthorizedEmailDomain::Access");

// /Script/VkEngineTypes.VkTeamDoc
// Kind: ScriptStruct; super: none
struct FVkTeamDoc
{
public:
    FString TeamId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Created[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Updated[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t Owner[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t PublicProps[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::int32_t MemberCount; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x006C
    std::uint8_t SysMeta[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkTeamDoc, TeamId) == 0, "Offset mismatch for FVkTeamDoc::TeamId");
static_assert(offsetof(FVkTeamDoc, Created) == 16, "Offset mismatch for FVkTeamDoc::Created");
static_assert(offsetof(FVkTeamDoc, Updated) == 24, "Offset mismatch for FVkTeamDoc::Updated");
static_assert(offsetof(FVkTeamDoc, Owner) == 32, "Offset mismatch for FVkTeamDoc::Owner");
static_assert(offsetof(FVkTeamDoc, PublicProps) == 56, "Offset mismatch for FVkTeamDoc::PublicProps");
static_assert(offsetof(FVkTeamDoc, MemberCount) == 104, "Offset mismatch for FVkTeamDoc::MemberCount");
static_assert(offsetof(FVkTeamDoc, SysMeta) == 112, "Offset mismatch for FVkTeamDoc::SysMeta");

// /Script/VkEngineTypes.VkTeamInvitation
// Kind: ScriptStruct; super: none
struct FVkTeamInvitation
{
public:
    FString TeamId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Owner[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t PublicProps[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t Resources[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint8_t Team[0x90]; // 0x0078 (Size: 0x90, Type: StructProperty)
    std::uint8_t Membership[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkTeamInvitation, TeamId) == 0, "Offset mismatch for FVkTeamInvitation::TeamId");
static_assert(offsetof(FVkTeamInvitation, Owner) == 16, "Offset mismatch for FVkTeamInvitation::Owner");
static_assert(offsetof(FVkTeamInvitation, PublicProps) == 40, "Offset mismatch for FVkTeamInvitation::PublicProps");
static_assert(offsetof(FVkTeamInvitation, Resources) == 88, "Offset mismatch for FVkTeamInvitation::Resources");
static_assert(offsetof(FVkTeamInvitation, Team) == 120, "Offset mismatch for FVkTeamInvitation::Team");
static_assert(offsetof(FVkTeamInvitation, Membership) == 264, "Offset mismatch for FVkTeamInvitation::Membership");

// /Script/VkEngineTypes.VkTeamInvitationResource
// Kind: ScriptStruct; super: none
struct FVkTeamInvitationResource
{
public:
    std::int32_t Count; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Limit; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkTeamInvitationResource, Count) == 0, "Offset mismatch for FVkTeamInvitationResource::Count");
static_assert(offsetof(FVkTeamInvitationResource, Limit) == 4, "Offset mismatch for FVkTeamInvitationResource::Limit");

// /Script/VkEngineTypes.VkTeamInvitationResources
// Kind: ScriptStruct; super: none
struct FVkTeamInvitationResources
{
public:
    std::uint8_t Members[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Playtesters[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Playtest_Groups[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Join_Codes[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkTeamInvitationResources, Members) == 0, "Offset mismatch for FVkTeamInvitationResources::Members");
static_assert(offsetof(FVkTeamInvitationResources, Playtesters) == 8, "Offset mismatch for FVkTeamInvitationResources::Playtesters");
static_assert(offsetof(FVkTeamInvitationResources, Playtest_Groups) == 16, "Offset mismatch for FVkTeamInvitationResources::Playtest_Groups");
static_assert(offsetof(FVkTeamInvitationResources, Join_Codes) == 24, "Offset mismatch for FVkTeamInvitationResources::Join_Codes");

// /Script/VkEngineTypes.VkTeamMemberAccessControl
// Kind: ScriptStruct; super: VkAccessControl
struct FVkTeamMemberAccessControl
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    std::uint8_t Owner; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVkTeamMemberAccessControl, Owner) == 4, "Offset mismatch for FVkTeamMemberAccessControl::Owner");

// /Script/VkEngineTypes.VkTeamMemberPrefs
// Kind: ScriptStruct; super: none
struct FVkTeamMemberPrefs
{
public:
    std::uint8_t WatchTeam; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVkTeamMemberPrefs, WatchTeam) == 0, "Offset mismatch for FVkTeamMemberPrefs::WatchTeam");

// /Script/VkEngineTypes.VkTeamMembershipResult
// Kind: ScriptStruct; super: none
struct FVkTeamMembershipResult
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Access[0x5]; // 0x0010 (Size: 0x5, Type: StructProperty)
    std::uint8_t Status; // 0x0015 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0016
    FString MembershipId; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString TeamId; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString AccountID; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t Updated[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t Created[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t Prefs[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkTeamMembershipResult, Name) == 0, "Offset mismatch for FVkTeamMembershipResult::Name");
static_assert(offsetof(FVkTeamMembershipResult, Access) == 16, "Offset mismatch for FVkTeamMembershipResult::Access");
static_assert(offsetof(FVkTeamMembershipResult, Status) == 21, "Offset mismatch for FVkTeamMembershipResult::Status");
static_assert(offsetof(FVkTeamMembershipResult, MembershipId) == 24, "Offset mismatch for FVkTeamMembershipResult::MembershipId");
static_assert(offsetof(FVkTeamMembershipResult, TeamId) == 40, "Offset mismatch for FVkTeamMembershipResult::TeamId");
static_assert(offsetof(FVkTeamMembershipResult, AccountID) == 56, "Offset mismatch for FVkTeamMembershipResult::AccountID");
static_assert(offsetof(FVkTeamMembershipResult, Updated) == 72, "Offset mismatch for FVkTeamMembershipResult::Updated");
static_assert(offsetof(FVkTeamMembershipResult, Created) == 80, "Offset mismatch for FVkTeamMembershipResult::Created");
static_assert(offsetof(FVkTeamMembershipResult, Prefs) == 88, "Offset mismatch for FVkTeamMembershipResult::Prefs");

// /Script/VkEngineTypes.VkTeamPublicProperties
// Kind: ScriptStruct; super: none
struct FVkTeamPublicProperties
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0010 (Size: 0x10, Type: StrProperty)
    TArray<void*> EmailDomains; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkTeamPublicProperties, Name) == 0, "Offset mismatch for FVkTeamPublicProperties::Name");
static_assert(offsetof(FVkTeamPublicProperties, Description) == 16, "Offset mismatch for FVkTeamPublicProperties::Description");
static_assert(offsetof(FVkTeamPublicProperties, EmailDomains) == 32, "Offset mismatch for FVkTeamPublicProperties::EmailDomains");

// /Script/VkEngineTypes.VkTicketDetails
// Kind: ScriptStruct; super: none
struct FVkTicketDetails
{
public:
    std::uint8_t Status; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t StartDate[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t EndDate[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    FString CorrelationId; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t Error[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkTicketDetails, Status) == 0, "Offset mismatch for FVkTicketDetails::Status");
static_assert(offsetof(FVkTicketDetails, StartDate) == 8, "Offset mismatch for FVkTicketDetails::StartDate");
static_assert(offsetof(FVkTicketDetails, EndDate) == 16, "Offset mismatch for FVkTicketDetails::EndDate");
static_assert(offsetof(FVkTicketDetails, CorrelationId) == 24, "Offset mismatch for FVkTicketDetails::CorrelationId");
static_assert(offsetof(FVkTicketDetails, Error) == 40, "Offset mismatch for FVkTicketDetails::Error");

// /Script/VkEngineTypes.VkTransferProjectRequest
// Kind: ScriptStruct; super: none
struct FVkTransferProjectRequest
{
public:
    FString TeamId; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkTransferProjectRequest, TeamId) == 0, "Offset mismatch for FVkTransferProjectRequest::TeamId");

// /Script/VkEngineTypes.VkTriggerValidationSessionCandidateRequest
// Kind: ScriptStruct; super: VkCreateModuleVersionRequest
struct FVkTriggerValidationSessionCandidateRequest
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> CandidateDependencies; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IgnoreExternalAssetLooseFiles; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A1
    std::uint8_t Untrusted[0x1]; // 0x00A8 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FVkTriggerValidationSessionCandidateRequest, CandidateDependencies) == 144, "Offset mismatch for FVkTriggerValidationSessionCandidateRequest::CandidateDependencies");
static_assert(offsetof(FVkTriggerValidationSessionCandidateRequest, IgnoreExternalAssetLooseFiles) == 160, "Offset mismatch for FVkTriggerValidationSessionCandidateRequest::IgnoreExternalAssetLooseFiles");
static_assert(offsetof(FVkTriggerValidationSessionCandidateRequest, Untrusted) == 168, "Offset mismatch for FVkTriggerValidationSessionCandidateRequest::Untrusted");

// /Script/VkEngineTypes.VkUntrustedClaims
// Kind: ScriptStruct; super: none
struct FVkUntrustedClaims
{
public:
    std::uint8_t MutatorsV1[0x1]; // 0x0000 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FVkUntrustedClaims, MutatorsV1) == 0, "Offset mismatch for FVkUntrustedClaims::MutatorsV1");

// /Script/VkEngineTypes.VkUpdateForkInfoRequest
// Kind: ScriptStruct; super: none
struct FVkUpdateForkInfoRequest
{
public:
    std::uint8_t Name[0x10]; // 0x0000 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t Notes[0x1]; // 0x0010 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FVkUpdateForkInfoRequest, Name) == 0, "Offset mismatch for FVkUpdateForkInfoRequest::Name");
static_assert(offsetof(FVkUpdateForkInfoRequest, Notes) == 16, "Offset mismatch for FVkUpdateForkInfoRequest::Notes");

// /Script/VkEngineTypes.VkValidationSessionCandidate
// Kind: ScriptStruct; super: none
struct FVkValidationSessionCandidate
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString PluginName; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ApiUrl; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString InternalApiUrl; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkValidationSessionCandidate, ModuleId) == 0, "Offset mismatch for FVkValidationSessionCandidate::ModuleId");
static_assert(offsetof(FVkValidationSessionCandidate, PluginName) == 16, "Offset mismatch for FVkValidationSessionCandidate::PluginName");
static_assert(offsetof(FVkValidationSessionCandidate, ApiUrl) == 32, "Offset mismatch for FVkValidationSessionCandidate::ApiUrl");
static_assert(offsetof(FVkValidationSessionCandidate, InternalApiUrl) == 48, "Offset mismatch for FVkValidationSessionCandidate::InternalApiUrl");

// /Script/VkEngineTypes.VkValidationSessionCandidateFailure
// Kind: ScriptStruct; super: none
struct FVkValidationSessionCandidateFailure
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString ErrorCode; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ErrorMessage; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString TicketId; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkValidationSessionCandidateFailure, ModuleId) == 0, "Offset mismatch for FVkValidationSessionCandidateFailure::ModuleId");
static_assert(offsetof(FVkValidationSessionCandidateFailure, ErrorCode) == 16, "Offset mismatch for FVkValidationSessionCandidateFailure::ErrorCode");
static_assert(offsetof(FVkValidationSessionCandidateFailure, ErrorMessage) == 32, "Offset mismatch for FVkValidationSessionCandidateFailure::ErrorMessage");
static_assert(offsetof(FVkValidationSessionCandidateFailure, TicketId) == 48, "Offset mismatch for FVkValidationSessionCandidateFailure::TicketId");

// /Script/VkEngineTypes.VkValidationSessionCandidateResults
// Kind: ScriptStruct; super: none
struct FVkValidationSessionCandidateResults
{
public:
    TArray<void*> Created; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Failed; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVkValidationSessionCandidateResults, Created) == 0, "Offset mismatch for FVkValidationSessionCandidateResults::Created");
static_assert(offsetof(FVkValidationSessionCandidateResults, Failed) == 16, "Offset mismatch for FVkValidationSessionCandidateResults::Failed");

// /Script/VkEngineTypes.VkValidationSessionCandidateStatus
// Kind: ScriptStruct; super: none
struct FVkValidationSessionCandidateStatus
{
public:
    FString SessionID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Candidate[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkValidationSessionCandidateStatus, SessionID) == 0, "Offset mismatch for FVkValidationSessionCandidateStatus::SessionID");
static_assert(offsetof(FVkValidationSessionCandidateStatus, Candidate) == 16, "Offset mismatch for FVkValidationSessionCandidateStatus::Candidate");

// /Script/VkEngineTypes.VkValidationSessionCandidateSuccess
// Kind: ScriptStruct; super: none
struct FVkValidationSessionCandidateSuccess
{
public:
    std::uint8_t ModuleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Doc[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkValidationSessionCandidateSuccess, ModuleId) == 0, "Offset mismatch for FVkValidationSessionCandidateSuccess::ModuleId");
static_assert(offsetof(FVkValidationSessionCandidateSuccess, Doc) == 16, "Offset mismatch for FVkValidationSessionCandidateSuccess::Doc");

// /Script/VkEngineTypes.VkValidationSessionLimits
// Kind: ScriptStruct; super: none
struct FVkValidationSessionLimits
{
public:
    std::int32_t ConcurrencyLimit; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkValidationSessionLimits, ConcurrencyLimit) == 0, "Offset mismatch for FVkValidationSessionLimits::ConcurrencyLimit");

// /Script/VkEngineTypes.VkValidationSessionResult
// Kind: ScriptStruct; super: none
struct FVkValidationSessionResult
{
public:
    std::uint8_t Success; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString SessionID; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString OwnerAccountId; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t Results[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVkValidationSessionResult, Success) == 0, "Offset mismatch for FVkValidationSessionResult::Success");
static_assert(offsetof(FVkValidationSessionResult, SessionID) == 8, "Offset mismatch for FVkValidationSessionResult::SessionID");
static_assert(offsetof(FVkValidationSessionResult, OwnerAccountId) == 24, "Offset mismatch for FVkValidationSessionResult::OwnerAccountId");
static_assert(offsetof(FVkValidationSessionResult, Results) == 40, "Offset mismatch for FVkValidationSessionResult::Results");

// /Script/VkEngineTypes.VkVerseDiagnostics
// Kind: ScriptStruct; super: none
struct FVkVerseDiagnostics
{
public:
    std::int32_t NumPersistentWeakMaps; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NumPersistentExternalWriteWeakMaps; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t NumMarketplaceEntitlements; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkVerseDiagnostics, NumPersistentWeakMaps) == 0, "Offset mismatch for FVkVerseDiagnostics::NumPersistentWeakMaps");
static_assert(offsetof(FVkVerseDiagnostics, NumPersistentExternalWriteWeakMaps) == 4, "Offset mismatch for FVkVerseDiagnostics::NumPersistentExternalWriteWeakMaps");
static_assert(offsetof(FVkVerseDiagnostics, NumMarketplaceEntitlements) == 8, "Offset mismatch for FVkVerseDiagnostics::NumMarketplaceEntitlements");

// /Script/VkEngineTypes.VkVersePath
// Kind: ScriptStruct; super: none
struct FVkVersePath
{
public:
    FString VersePath; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Url; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Primary; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVkVersePath, VersePath) == 0, "Offset mismatch for FVkVersePath::VersePath");
static_assert(offsetof(FVkVersePath, Url) == 16, "Offset mismatch for FVkVersePath::Url");
static_assert(offsetof(FVkVersePath, Primary) == 32, "Offset mismatch for FVkVersePath::Primary");

// /Script/VkEngineTypes.VkVersionedLinkCode
// Kind: ScriptStruct; super: none
struct FVkVersionedLinkCode
{
public:
    FString Mnemonic; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVkVersionedLinkCode, Mnemonic) == 0, "Offset mismatch for FVkVersionedLinkCode::Mnemonic");
static_assert(offsetof(FVkVersionedLinkCode, Version) == 16, "Offset mismatch for FVkVersionedLinkCode::Version");
