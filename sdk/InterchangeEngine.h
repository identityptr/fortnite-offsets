/**
 * decamp dumper generated SDK
 * Package: /Script/InterchangeEngine
 */
#pragma once
#include "Basic.h"

// /Script/InterchangeEngine.ImportAssetParameters
// Kind: ScriptStruct; super: none
struct FImportAssetParameters
{
public:
    void* ReimportAsset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ReimportSourceIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsAutomated; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFollowRedirectors; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000E
    TArray<void*> OverridePipelines; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    void* ImportLevel; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    FString DestinationName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bReplaceExisting; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceShowDialog; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003A
    FScriptDelegate OnAssetDone; // 0x003C (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0002[0xC]; // 0x004C
    FScriptDelegate OnAssetsImportDone; // 0x0058 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0068
    FScriptDelegate OnSceneObjectDone; // 0x0078 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0088
    FScriptDelegate OnSceneImportDone; // 0x0098 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FImportAssetParameters, ReimportAsset) == 0, "Offset mismatch for FImportAssetParameters::ReimportAsset");
static_assert(offsetof(FImportAssetParameters, ReimportSourceIndex) == 8, "Offset mismatch for FImportAssetParameters::ReimportSourceIndex");
static_assert(offsetof(FImportAssetParameters, bIsAutomated) == 12, "Offset mismatch for FImportAssetParameters::bIsAutomated");
static_assert(offsetof(FImportAssetParameters, bFollowRedirectors) == 13, "Offset mismatch for FImportAssetParameters::bFollowRedirectors");
static_assert(offsetof(FImportAssetParameters, OverridePipelines) == 16, "Offset mismatch for FImportAssetParameters::OverridePipelines");
static_assert(offsetof(FImportAssetParameters, ImportLevel) == 32, "Offset mismatch for FImportAssetParameters::ImportLevel");
static_assert(offsetof(FImportAssetParameters, DestinationName) == 40, "Offset mismatch for FImportAssetParameters::DestinationName");
static_assert(offsetof(FImportAssetParameters, bReplaceExisting) == 56, "Offset mismatch for FImportAssetParameters::bReplaceExisting");
static_assert(offsetof(FImportAssetParameters, bForceShowDialog) == 57, "Offset mismatch for FImportAssetParameters::bForceShowDialog");
static_assert(offsetof(FImportAssetParameters, OnAssetDone) == 60, "Offset mismatch for FImportAssetParameters::OnAssetDone");
static_assert(offsetof(FImportAssetParameters, OnAssetsImportDone) == 88, "Offset mismatch for FImportAssetParameters::OnAssetsImportDone");
static_assert(offsetof(FImportAssetParameters, OnSceneObjectDone) == 120, "Offset mismatch for FImportAssetParameters::OnSceneObjectDone");
static_assert(offsetof(FImportAssetParameters, OnSceneImportDone) == 152, "Offset mismatch for FImportAssetParameters::OnSceneImportDone");

// /Script/InterchangeEngine.InterchangeContentImportSettings
// Kind: ScriptStruct; super: InterchangeImportSettings
struct FInterchangeContentImportSettings
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TMap<void*, void*> DefaultPipelineStackOverride; // 0x0040 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ShowImportDialogOverride; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FInterchangeContentImportSettings, DefaultPipelineStackOverride) == 64, "Offset mismatch for FInterchangeContentImportSettings::DefaultPipelineStackOverride");
static_assert(offsetof(FInterchangeContentImportSettings, ShowImportDialogOverride) == 80, "Offset mismatch for FInterchangeContentImportSettings::ShowImportDialogOverride");

// /Script/InterchangeEngine.InterchangeDialogOverride
// Kind: ScriptStruct; super: none
struct FInterchangeDialogOverride
{
public:
    std::uint8_t bShowImportDialog; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowReimportDialog; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    TArray<void*> PerTranslatorImportDialogOverride; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInterchangeDialogOverride, bShowImportDialog) == 0, "Offset mismatch for FInterchangeDialogOverride::bShowImportDialog");
static_assert(offsetof(FInterchangeDialogOverride, bShowReimportDialog) == 1, "Offset mismatch for FInterchangeDialogOverride::bShowReimportDialog");
static_assert(offsetof(FInterchangeDialogOverride, PerTranslatorImportDialogOverride) == 8, "Offset mismatch for FInterchangeDialogOverride::PerTranslatorImportDialogOverride");

// /Script/InterchangeEngine.InterchangeFilePickerParameters
// Kind: ScriptStruct; super: none
struct FInterchangeFilePickerParameters
{
public:
    std::uint8_t bAllowMultipleFiles; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Title[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    FString DefaultPath; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bShowAllFactoriesExtension; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> ExtraFormats; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInterchangeFilePickerParameters, bAllowMultipleFiles) == 0, "Offset mismatch for FInterchangeFilePickerParameters::bAllowMultipleFiles");
static_assert(offsetof(FInterchangeFilePickerParameters, Title) == 8, "Offset mismatch for FInterchangeFilePickerParameters::Title");
static_assert(offsetof(FInterchangeFilePickerParameters, DefaultPath) == 24, "Offset mismatch for FInterchangeFilePickerParameters::DefaultPath");
static_assert(offsetof(FInterchangeFilePickerParameters, bShowAllFactoriesExtension) == 40, "Offset mismatch for FInterchangeFilePickerParameters::bShowAllFactoriesExtension");
static_assert(offsetof(FInterchangeFilePickerParameters, ExtraFormats) == 48, "Offset mismatch for FInterchangeFilePickerParameters::ExtraFormats");

// /Script/InterchangeEngine.InterchangeGroup
// Kind: ScriptStruct; super: none
struct FInterchangeGroup
{
public:
    std::uint8_t DisplayName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t UniqueID[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultPipelineStack[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    TMap<void*, void*> DefaultPipelineStackOverride; // 0x0018 (Size: 0x10, Type: MapProperty)
    std::uint8_t bShowImportDialog; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowReimportDialog; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x002A
    TMap<void*, void*> ShowImportDialogOverride; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FInterchangeGroup, DisplayName) == 0, "Offset mismatch for FInterchangeGroup::DisplayName");
static_assert(offsetof(FInterchangeGroup, UniqueID) == 4, "Offset mismatch for FInterchangeGroup::UniqueID");
static_assert(offsetof(FInterchangeGroup, DefaultPipelineStack) == 20, "Offset mismatch for FInterchangeGroup::DefaultPipelineStack");
static_assert(offsetof(FInterchangeGroup, DefaultPipelineStackOverride) == 24, "Offset mismatch for FInterchangeGroup::DefaultPipelineStackOverride");
static_assert(offsetof(FInterchangeGroup, bShowImportDialog) == 40, "Offset mismatch for FInterchangeGroup::bShowImportDialog");
static_assert(offsetof(FInterchangeGroup, bShowReimportDialog) == 41, "Offset mismatch for FInterchangeGroup::bShowReimportDialog");
static_assert(offsetof(FInterchangeGroup, ShowImportDialogOverride) == 48, "Offset mismatch for FInterchangeGroup::ShowImportDialogOverride");

// /Script/InterchangeEngine.InterchangeImportSettings
// Kind: ScriptStruct; super: none
struct FInterchangeImportSettings
{
public:
    TMap<void*, void*> PipelineStacks; // 0x0000 (Size: 0x10, Type: MapProperty)
    FName DefaultPipelineStack; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t ImportDialogClass[0x20]; // 0x0018 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bShowImportDialog; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowReimportDialog; // 0x0039 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FInterchangeImportSettings, PipelineStacks) == 0, "Offset mismatch for FInterchangeImportSettings::PipelineStacks");
static_assert(offsetof(FInterchangeImportSettings, DefaultPipelineStack) == 16, "Offset mismatch for FInterchangeImportSettings::DefaultPipelineStack");
static_assert(offsetof(FInterchangeImportSettings, ImportDialogClass) == 24, "Offset mismatch for FInterchangeImportSettings::ImportDialogClass");
static_assert(offsetof(FInterchangeImportSettings, bShowImportDialog) == 56, "Offset mismatch for FInterchangeImportSettings::bShowImportDialog");
static_assert(offsetof(FInterchangeImportSettings, bShowReimportDialog) == 57, "Offset mismatch for FInterchangeImportSettings::bShowReimportDialog");

// /Script/InterchangeEngine.InterchangePerTranslatorDialogOverride
// Kind: ScriptStruct; super: none
struct FInterchangePerTranslatorDialogOverride
{
public:
    std::uint8_t Translator[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bShowImportDialog; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowReimportDialog; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FInterchangePerTranslatorDialogOverride, Translator) == 0, "Offset mismatch for FInterchangePerTranslatorDialogOverride::Translator");
static_assert(offsetof(FInterchangePerTranslatorDialogOverride, bShowImportDialog) == 32, "Offset mismatch for FInterchangePerTranslatorDialogOverride::bShowImportDialog");
static_assert(offsetof(FInterchangePerTranslatorDialogOverride, bShowReimportDialog) == 33, "Offset mismatch for FInterchangePerTranslatorDialogOverride::bShowReimportDialog");

// /Script/InterchangeEngine.InterchangePipelineStack
// Kind: ScriptStruct; super: none
struct FInterchangePipelineStack
{
public:
    TArray<void*> Pipelines; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerTranslatorPipelines; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInterchangePipelineStack, Pipelines) == 0, "Offset mismatch for FInterchangePipelineStack::Pipelines");
static_assert(offsetof(FInterchangePipelineStack, PerTranslatorPipelines) == 16, "Offset mismatch for FInterchangePipelineStack::PerTranslatorPipelines");

// /Script/InterchangeEngine.InterchangeSceneImportSettings
// Kind: ScriptStruct; super: InterchangeImportSettings
struct FInterchangeSceneImportSettings
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> PerTranslatorDialogOverride; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInterchangeSceneImportSettings, PerTranslatorDialogOverride) == 64, "Offset mismatch for FInterchangeSceneImportSettings::PerTranslatorDialogOverride");

// /Script/InterchangeEngine.InterchangeStackInfo
// Kind: ScriptStruct; super: none
struct FInterchangeStackInfo
{
public:
    FName StackName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Pipelines; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInterchangeStackInfo, StackName) == 0, "Offset mismatch for FInterchangeStackInfo::StackName");
static_assert(offsetof(FInterchangeStackInfo, Pipelines) == 8, "Offset mismatch for FInterchangeStackInfo::Pipelines");

// /Script/InterchangeEngine.InterchangeTranslatorPipelines
// Kind: ScriptStruct; super: none
struct FInterchangeTranslatorPipelines
{
public:
    std::uint8_t Translator[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> Pipelines; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInterchangeTranslatorPipelines, Translator) == 0, "Offset mismatch for FInterchangeTranslatorPipelines::Translator");
static_assert(offsetof(FInterchangeTranslatorPipelines, Pipelines) == 32, "Offset mismatch for FInterchangeTranslatorPipelines::Pipelines");

// /Script/InterchangeEngine.PropertyData
// Kind: ScriptStruct; super: none
struct FPropertyData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeEngine.InterchangeAnalyticsHandlerBase
// Kind: Class; super: Object
class UInterchangeAnalyticsHandlerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeEngine.InterchangeAssetImportData
// Kind: Class; super: AssetImportData
class UInterchangeAssetImportData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SceneImportAsset[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    FString NodeUniqueID; // 0x0040 (Size: 0x10, Type: StrProperty)
    void* NodeContainer; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Pipelines; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    void* TransientNodeContainer; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TransientPipelines; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    void* TransientTranslatorSettings; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeAssetImportData, SceneImportAsset) == 40, "Offset mismatch for UInterchangeAssetImportData::SceneImportAsset");
static_assert(offsetof(UInterchangeAssetImportData, NodeUniqueID) == 64, "Offset mismatch for UInterchangeAssetImportData::NodeUniqueID");
static_assert(offsetof(UInterchangeAssetImportData, NodeContainer) == 80, "Offset mismatch for UInterchangeAssetImportData::NodeContainer");
static_assert(offsetof(UInterchangeAssetImportData, Pipelines) == 88, "Offset mismatch for UInterchangeAssetImportData::Pipelines");
static_assert(offsetof(UInterchangeAssetImportData, TransientNodeContainer) == 104, "Offset mismatch for UInterchangeAssetImportData::TransientNodeContainer");
static_assert(offsetof(UInterchangeAssetImportData, TransientPipelines) == 112, "Offset mismatch for UInterchangeAssetImportData::TransientPipelines");
static_assert(offsetof(UInterchangeAssetImportData, TransientTranslatorSettings) == 128, "Offset mismatch for UInterchangeAssetImportData::TransientTranslatorSettings");

// /Script/InterchangeEngine.InterchangeAssetImportDataConverterBase
// Kind: Class; super: Object
class UInterchangeAssetImportDataConverterBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeEngine.InterchangeBlueprintPipelineBase
// Kind: Class; super: Blueprint
class UInterchangeBlueprintPipelineBase
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* ParentClass; // 0x0058 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BlueprintType; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bHasBeenRegenerated; // 0x0061 (Size: 0x1, Type: BoolProperty)
    // 0x0061 BoolProperty bIsRegeneratingOnLoad (shared storage)
    // 0x0061 BoolProperty bRecompileOnLoad (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x0062
    std::int32_t BlueprintSystemVersion; // 0x0064 (Size: 0x4, Type: IntProperty)
    void* SimpleConstructionScript; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ComponentTemplates; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Timelines; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentClassOverrides; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* InheritableComponentHandler; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeBlueprintPipelineBase, ParentClass) == 88, "Offset mismatch for UInterchangeBlueprintPipelineBase::ParentClass");
static_assert(offsetof(UInterchangeBlueprintPipelineBase, BlueprintType) == 96, "Offset mismatch for UInterchangeBlueprintPipelineBase::BlueprintType");
static_assert(offsetof(UInterchangeBlueprintPipelineBase, bHasBeenRegenerated) == 97, "Offset mismatch for UInterchangeBlueprintPipelineBase::bHasBeenRegenerated");
static_assert(offsetof(UInterchangeBlueprintPipelineBase, BlueprintSystemVersion) == 100, "Offset mismatch for UInterchangeBlueprintPipelineBase::BlueprintSystemVersion");
static_assert(offsetof(UInterchangeBlueprintPipelineBase, SimpleConstructionScript) == 104, "Offset mismatch for UInterchangeBlueprintPipelineBase::SimpleConstructionScript");
static_assert(offsetof(UInterchangeBlueprintPipelineBase, ComponentTemplates) == 112, "Offset mismatch for UInterchangeBlueprintPipelineBase::ComponentTemplates");
static_assert(offsetof(UInterchangeBlueprintPipelineBase, Timelines) == 128, "Offset mismatch for UInterchangeBlueprintPipelineBase::Timelines");
static_assert(offsetof(UInterchangeBlueprintPipelineBase, ComponentClassOverrides) == 144, "Offset mismatch for UInterchangeBlueprintPipelineBase::ComponentClassOverrides");
static_assert(offsetof(UInterchangeBlueprintPipelineBase, InheritableComponentHandler) == 160, "Offset mismatch for UInterchangeBlueprintPipelineBase::InheritableComponentHandler");

// /Script/InterchangeEngine.InterchangeEditorSettings
// Kind: Class; super: DeveloperSettings
class UInterchangeEditorSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bShowImportDialogAtReimport; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t UsedGroupName[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    std::uint8_t UsedGroupUID[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInterchangeEditorSettings, bShowImportDialogAtReimport) == 48, "Offset mismatch for UInterchangeEditorSettings::bShowImportDialogAtReimport");
static_assert(offsetof(UInterchangeEditorSettings, UsedGroupName) == 52, "Offset mismatch for UInterchangeEditorSettings::UsedGroupName");
static_assert(offsetof(UInterchangeEditorSettings, UsedGroupUID) == 56, "Offset mismatch for UInterchangeEditorSettings::UsedGroupUID");

// /Script/InterchangeEngine.InterchangeEditorUtilitiesBase
// Kind: Class; super: Object
class UInterchangeEditorUtilitiesBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeEngine.InterchangeFilePickerBase
// Kind: Class; super: Object
class UInterchangeFilePickerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeEngine.InterchangeImportPresetAsset
// Kind: Class; super: Object
class UInterchangeImportPresetAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DisplayName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t ImportType; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t TranslatorAssetType; // 0x002D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002E
    std::uint8_t TranslatorClassPath[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t TranslatorSettingsClassPath[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    TArray<void*> ImportPipelineClassPaths; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    void* TranslatorClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
    void* TranslatorSettings; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ImportPipelines; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInterchangeImportPresetAsset, DisplayName) == 40, "Offset mismatch for UInterchangeImportPresetAsset::DisplayName");
static_assert(offsetof(UInterchangeImportPresetAsset, ImportType) == 44, "Offset mismatch for UInterchangeImportPresetAsset::ImportType");
static_assert(offsetof(UInterchangeImportPresetAsset, TranslatorAssetType) == 45, "Offset mismatch for UInterchangeImportPresetAsset::TranslatorAssetType");
static_assert(offsetof(UInterchangeImportPresetAsset, TranslatorClassPath) == 48, "Offset mismatch for UInterchangeImportPresetAsset::TranslatorClassPath");
static_assert(offsetof(UInterchangeImportPresetAsset, TranslatorSettingsClassPath) == 72, "Offset mismatch for UInterchangeImportPresetAsset::TranslatorSettingsClassPath");
static_assert(offsetof(UInterchangeImportPresetAsset, ImportPipelineClassPaths) == 96, "Offset mismatch for UInterchangeImportPresetAsset::ImportPipelineClassPaths");
static_assert(offsetof(UInterchangeImportPresetAsset, TranslatorClass) == 112, "Offset mismatch for UInterchangeImportPresetAsset::TranslatorClass");
static_assert(offsetof(UInterchangeImportPresetAsset, TranslatorSettings) == 120, "Offset mismatch for UInterchangeImportPresetAsset::TranslatorSettings");
static_assert(offsetof(UInterchangeImportPresetAsset, ImportPipelines) == 128, "Offset mismatch for UInterchangeImportPresetAsset::ImportPipelines");

// /Script/InterchangeEngine.InterchangeManager
// Kind: Class; super: Object
class UInterchangeManager
{
public:
    std::uint8_t Pad_0000[0x1E8]; // 0x0000
    std::uint8_t RegisteredTranslatorsClass[0x10]; // 0x01E8 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> RegisteredFactoryClasses; // 0x01F8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> RegisteredWriters; // 0x0208 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> RegisteredConverters; // 0x0218 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UInterchangeManager, RegisteredTranslatorsClass) == 488, "Offset mismatch for UInterchangeManager::RegisteredTranslatorsClass");
static_assert(offsetof(UInterchangeManager, RegisteredFactoryClasses) == 504, "Offset mismatch for UInterchangeManager::RegisteredFactoryClasses");
static_assert(offsetof(UInterchangeManager, RegisteredWriters) == 520, "Offset mismatch for UInterchangeManager::RegisteredWriters");
static_assert(offsetof(UInterchangeManager, RegisteredConverters) == 536, "Offset mismatch for UInterchangeManager::RegisteredConverters");

// /Script/InterchangeEngine.InterchangeMeshUtilities
// Kind: Class; super: Object
class UInterchangeMeshUtilities
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeEngine.InterchangePipelineConfigurationBase
// Kind: Class; super: Object
class UInterchangePipelineConfigurationBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeEngine.InterchangePipelineStackOverride
// Kind: Class; super: Object
class UInterchangePipelineStackOverride
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> OverridePipelines; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInterchangePipelineStackOverride, OverridePipelines) == 40, "Offset mismatch for UInterchangePipelineStackOverride::OverridePipelines");

// /Script/InterchangeEngine.InterchangeProjectSettings
// Kind: Class; super: DeveloperSettings
class UInterchangeProjectSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ContentImportSettings[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t SceneImportSettings[0x50]; // 0x0090 (Size: 0x50, Type: StructProperty)
    std::uint8_t FilePickerClass[0x20]; // 0x00E0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    std::uint8_t GenericPipelineClass[0x20]; // 0x0108 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ConverterDefaultPipeline[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    TArray<void*> InterchangeGroups; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInterchangeProjectSettings, ContentImportSettings) == 48, "Offset mismatch for UInterchangeProjectSettings::ContentImportSettings");
static_assert(offsetof(UInterchangeProjectSettings, SceneImportSettings) == 144, "Offset mismatch for UInterchangeProjectSettings::SceneImportSettings");
static_assert(offsetof(UInterchangeProjectSettings, FilePickerClass) == 224, "Offset mismatch for UInterchangeProjectSettings::FilePickerClass");
static_assert(offsetof(UInterchangeProjectSettings, bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing) == 256, "Offset mismatch for UInterchangeProjectSettings::bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing");
static_assert(offsetof(UInterchangeProjectSettings, GenericPipelineClass) == 264, "Offset mismatch for UInterchangeProjectSettings::GenericPipelineClass");
static_assert(offsetof(UInterchangeProjectSettings, ConverterDefaultPipeline) == 296, "Offset mismatch for UInterchangeProjectSettings::ConverterDefaultPipeline");
static_assert(offsetof(UInterchangeProjectSettings, InterchangeGroups) == 320, "Offset mismatch for UInterchangeProjectSettings::InterchangeGroups");

// /Script/InterchangeEngine.InterchangeProjectSettingsScript
// Kind: Class; super: Object
class UInterchangeProjectSettingsScript
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeEngine.InterchangePythonPipelineAsset
// Kind: Class; super: Object
class UInterchangePythonPipelineAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PythonClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    void* GeneratedPipeline; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    FString JsonDefaultProperties; // 0x0050 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangePythonPipelineAsset, PythonClass) == 40, "Offset mismatch for UInterchangePythonPipelineAsset::PythonClass");
static_assert(offsetof(UInterchangePythonPipelineAsset, GeneratedPipeline) == 72, "Offset mismatch for UInterchangePythonPipelineAsset::GeneratedPipeline");
static_assert(offsetof(UInterchangePythonPipelineAsset, JsonDefaultProperties) == 80, "Offset mismatch for UInterchangePythonPipelineAsset::JsonDefaultProperties");

// /Script/InterchangeEngine.InterchangePythonPipelineBase
// Kind: Class; super: InterchangePipelineBase
class UInterchangePythonPipelineBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString DestinationName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString ContentImportPath; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAllowPropertyStatesEdition; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReimportContext; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsShowEssentials; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFromReimportOrOverride; // 0x004B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    void* Results; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PropertiesStates; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CachePropertiesStates; // 0x0068 (Size: 0x10, Type: MapProperty)
    std::uint8_t CacheContextParam[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInterchangePythonPipelineBase, DestinationName) == 40, "Offset mismatch for UInterchangePythonPipelineBase::DestinationName");
static_assert(offsetof(UInterchangePythonPipelineBase, ContentImportPath) == 56, "Offset mismatch for UInterchangePythonPipelineBase::ContentImportPath");
static_assert(offsetof(UInterchangePythonPipelineBase, bAllowPropertyStatesEdition) == 72, "Offset mismatch for UInterchangePythonPipelineBase::bAllowPropertyStatesEdition");
static_assert(offsetof(UInterchangePythonPipelineBase, bIsReimportContext) == 73, "Offset mismatch for UInterchangePythonPipelineBase::bIsReimportContext");
static_assert(offsetof(UInterchangePythonPipelineBase, bIsShowEssentials) == 74, "Offset mismatch for UInterchangePythonPipelineBase::bIsShowEssentials");
static_assert(offsetof(UInterchangePythonPipelineBase, bFromReimportOrOverride) == 75, "Offset mismatch for UInterchangePythonPipelineBase::bFromReimportOrOverride");
static_assert(offsetof(UInterchangePythonPipelineBase, Results) == 80, "Offset mismatch for UInterchangePythonPipelineBase::Results");
static_assert(offsetof(UInterchangePythonPipelineBase, PropertiesStates) == 88, "Offset mismatch for UInterchangePythonPipelineBase::PropertiesStates");
static_assert(offsetof(UInterchangePythonPipelineBase, CachePropertiesStates) == 104, "Offset mismatch for UInterchangePythonPipelineBase::CachePropertiesStates");
static_assert(offsetof(UInterchangePythonPipelineBase, CacheContextParam) == 120, "Offset mismatch for UInterchangePythonPipelineBase::CacheContextParam");

// /Script/InterchangeEngine.InterchangeSceneImportAsset
// Kind: Class; super: Object
class UInterchangeSceneImportAsset
{
public:
    std::uint8_t Opaque[1];
};
