/**
 * decamp dumper generated SDK
 * Package: /Script/VkRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VkRuntime.MetadataPluginContext
// Kind: ScriptStruct; super: none
struct FMetadataPluginContext
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* DefinitionAsset; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMetadataPluginContext, DefinitionAsset) == 32, "Offset mismatch for FMetadataPluginContext::DefinitionAsset");

// /Script/VkRuntime.ValkyrieTemplateCategory
// Kind: ScriptStruct; super: none
struct FValkyrieTemplateCategory
{
public:
    FString CategoryID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t CategoryName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t CategoryFilterLabel[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t CategoryImage[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    float Priority; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0054
    TArray<void*> Sections; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FValkyrieTemplateCategory, CategoryID) == 0, "Offset mismatch for FValkyrieTemplateCategory::CategoryID");
static_assert(offsetof(FValkyrieTemplateCategory, CategoryName) == 16, "Offset mismatch for FValkyrieTemplateCategory::CategoryName");
static_assert(offsetof(FValkyrieTemplateCategory, CategoryFilterLabel) == 32, "Offset mismatch for FValkyrieTemplateCategory::CategoryFilterLabel");
static_assert(offsetof(FValkyrieTemplateCategory, CategoryImage) == 48, "Offset mismatch for FValkyrieTemplateCategory::CategoryImage");
static_assert(offsetof(FValkyrieTemplateCategory, Priority) == 80, "Offset mismatch for FValkyrieTemplateCategory::Priority");
static_assert(offsetof(FValkyrieTemplateCategory, Sections) == 88, "Offset mismatch for FValkyrieTemplateCategory::Sections");

// /Script/VkRuntime.ValkyrieTemplateCategoryExtension
// Kind: ScriptStruct; super: none
struct FValkyrieTemplateCategoryExtension
{
public:
    TArray<void*> AdditionalSections; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FValkyrieTemplateCategoryExtension, AdditionalSections) == 0, "Offset mismatch for FValkyrieTemplateCategoryExtension::AdditionalSections");

// /Script/VkRuntime.ValkyrieTemplateSection
// Kind: ScriptStruct; super: none
struct FValkyrieTemplateSection
{
public:
    FString SectionId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t SectionName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    float Priority; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    TArray<void*> InclusionPaths; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FValkyrieTemplateSection, SectionId) == 0, "Offset mismatch for FValkyrieTemplateSection::SectionId");
static_assert(offsetof(FValkyrieTemplateSection, SectionName) == 16, "Offset mismatch for FValkyrieTemplateSection::SectionName");
static_assert(offsetof(FValkyrieTemplateSection, Priority) == 32, "Offset mismatch for FValkyrieTemplateSection::Priority");
static_assert(offsetof(FValkyrieTemplateSection, InclusionPaths) == 40, "Offset mismatch for FValkyrieTemplateSection::InclusionPaths");

// /Script/VkRuntime.ValkyrieBlutilityCookList
// Kind: Class; super: PrimaryDataAsset
class UValkyrieBlutilityCookList
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VkRuntime.ValkyrieDevelopmentStatus
// Kind: Class; super: Interface
class UValkyrieDevelopmentStatus
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VkRuntime.ValkyrieEpicInternalIgnoreList
// Kind: Class; super: Object
class UValkyrieEpicInternalIgnoreList
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> EpicInternalIgnoreList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UValkyrieEpicInternalIgnoreList, EpicInternalIgnoreList) == 40, "Offset mismatch for UValkyrieEpicInternalIgnoreList::EpicInternalIgnoreList");

// /Script/VkRuntime.ValkyrieExperimentalDevelopmentStatusIgnoreList
// Kind: Class; super: Object
class UValkyrieExperimentalDevelopmentStatusIgnoreList
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ExperimentalDevelopmentStatusIgnoreList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UValkyrieExperimentalDevelopmentStatusIgnoreList, ExperimentalDevelopmentStatusIgnoreList) == 40, "Offset mismatch for UValkyrieExperimentalDevelopmentStatusIgnoreList::ExperimentalDevelopmentStatusIgnoreList");

// /Script/VkRuntime.ValkyrieGameFeatureSetDefinition
// Kind: Class; super: PrimaryDataAsset
class UValkyrieGameFeatureSetDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString GameFeatureSet; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    FString ContentGuidelinesURL; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString CreationAccessURL; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString BestPracticesURL; // 0x0078 (Size: 0x10, Type: StrProperty)
    TSet<void*> AllowedTemplates; // 0x0088 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UValkyrieGameFeatureSetDefinition, GameFeatureSet) == 40, "Offset mismatch for UValkyrieGameFeatureSetDefinition::GameFeatureSet");
static_assert(offsetof(UValkyrieGameFeatureSetDefinition, DisplayName) == 56, "Offset mismatch for UValkyrieGameFeatureSetDefinition::DisplayName");
static_assert(offsetof(UValkyrieGameFeatureSetDefinition, Description) == 72, "Offset mismatch for UValkyrieGameFeatureSetDefinition::Description");
static_assert(offsetof(UValkyrieGameFeatureSetDefinition, ContentGuidelinesURL) == 88, "Offset mismatch for UValkyrieGameFeatureSetDefinition::ContentGuidelinesURL");
static_assert(offsetof(UValkyrieGameFeatureSetDefinition, CreationAccessURL) == 104, "Offset mismatch for UValkyrieGameFeatureSetDefinition::CreationAccessURL");
static_assert(offsetof(UValkyrieGameFeatureSetDefinition, BestPracticesURL) == 120, "Offset mismatch for UValkyrieGameFeatureSetDefinition::BestPracticesURL");
static_assert(offsetof(UValkyrieGameFeatureSetDefinition, AllowedTemplates) == 136, "Offset mismatch for UValkyrieGameFeatureSetDefinition::AllowedTemplates");

// /Script/VkRuntime.ValkyrieGameFeatureSetMetadataSubsystem
// Kind: Class; super: EngineSubsystem
class UValkyrieGameFeatureSetMetadataSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TMap<void*, void*> MetadataPluginContexts; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UValkyrieGameFeatureSetMetadataSubsystem, MetadataPluginContexts) == 72, "Offset mismatch for UValkyrieGameFeatureSetMetadataSubsystem::MetadataPluginContexts");

// /Script/VkRuntime.ValkyrieTemplateCategorization
// Kind: Class; super: PrimaryDataAsset
class UValkyrieTemplateCategorization
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VkRuntime.ValkyrieUniverse
// Kind: Class; super: PrimaryDataAsset
class UValkyrieUniverse
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName UniverseName; // 0x0028 (Size: 0x8, Type: NameProperty)
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    TArray<void*> CategoryTags; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UValkyrieUniverse, UniverseName) == 40, "Offset mismatch for UValkyrieUniverse::UniverseName");
static_assert(offsetof(UValkyrieUniverse, DisplayName) == 48, "Offset mismatch for UValkyrieUniverse::DisplayName");
static_assert(offsetof(UValkyrieUniverse, CategoryTags) == 64, "Offset mismatch for UValkyrieUniverse::CategoryTags");

// /Script/VkRuntime.ValkyrieUniverseSubsystem
// Kind: Class; super: EngineSubsystem
class UValkyrieUniverseSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> Universes; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UValkyrieUniverseSubsystem, Universes) == 48, "Offset mismatch for UValkyrieUniverseSubsystem::Universes");
