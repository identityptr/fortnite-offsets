/**
 * decamp dumper generated SDK
 * Package: /Script/PCG
 */
#pragma once
#include "Basic.h"

// /Script/PCG.DeterminismTestResult
// Kind: ScriptStruct; super: none
struct FDeterminismTestResult
{
public:
    std::int64_t Index; // 0x0000 (Size: 0x8, Type: Int64Property)
    FName TestResultTitle; // 0x0008 (Size: 0x8, Type: NameProperty)
    FString TestResultName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t Seed; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t DataTypesTested[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> TestResults; // 0x0040 (Size: 0x10, Type: MapProperty)
    TArray<void*> AdditionalDetails; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bFlagRaised; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDeterminismTestResult, Index) == 0, "Offset mismatch for FDeterminismTestResult::Index");
static_assert(offsetof(FDeterminismTestResult, TestResultTitle) == 8, "Offset mismatch for FDeterminismTestResult::TestResultTitle");
static_assert(offsetof(FDeterminismTestResult, TestResultName) == 16, "Offset mismatch for FDeterminismTestResult::TestResultName");
static_assert(offsetof(FDeterminismTestResult, Seed) == 32, "Offset mismatch for FDeterminismTestResult::Seed");
static_assert(offsetof(FDeterminismTestResult, DataTypesTested) == 40, "Offset mismatch for FDeterminismTestResult::DataTypesTested");
static_assert(offsetof(FDeterminismTestResult, TestResults) == 64, "Offset mismatch for FDeterminismTestResult::TestResults");
static_assert(offsetof(FDeterminismTestResult, AdditionalDetails) == 80, "Offset mismatch for FDeterminismTestResult::AdditionalDetails");
static_assert(offsetof(FDeterminismTestResult, bFlagRaised) == 96, "Offset mismatch for FDeterminismTestResult::bFlagRaised");

// /Script/PCG.DynamicTrackedKeyInstanceData
// Kind: ScriptStruct; super: none
struct FDynamicTrackedKeyInstanceData
{
public:
    std::uint8_t SelectionKey[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    std::uint8_t Settings[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bValue; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDynamicTrackedKeyInstanceData, SelectionKey) == 0, "Offset mismatch for FDynamicTrackedKeyInstanceData::SelectionKey");
static_assert(offsetof(FDynamicTrackedKeyInstanceData, Settings) == 112, "Offset mismatch for FDynamicTrackedKeyInstanceData::Settings");
static_assert(offsetof(FDynamicTrackedKeyInstanceData, bValue) == 144, "Offset mismatch for FDynamicTrackedKeyInstanceData::bValue");

// /Script/PCG.EnumSelector
// Kind: ScriptStruct; super: none
struct FEnumSelector
{
public:
    void* Class; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int64_t Value; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FEnumSelector, Class) == 0, "Offset mismatch for FEnumSelector::Class");
static_assert(offsetof(FEnumSelector, Value) == 8, "Offset mismatch for FEnumSelector::Value");

// /Script/PCG.PCGActorPropertyOverride
// Kind: ScriptStruct; super: none
struct FPCGActorPropertyOverride
{
public:
    std::uint8_t InputSource[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    FString PropertyTarget; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPCGActorPropertyOverride, InputSource) == 0, "Offset mismatch for FPCGActorPropertyOverride::InputSource");
static_assert(offsetof(FPCGActorPropertyOverride, PropertyTarget) == 48, "Offset mismatch for FPCGActorPropertyOverride::PropertyTarget");

// /Script/PCG.PCGActorSelectorSettings
// Kind: ScriptStruct; super: none
struct FPCGActorSelectorSettings
{
public:
    std::uint8_t ActorFilter; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bMustOverlapSelf; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeChildren; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IncludeIsolatedActors; // 0x0003 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDisableFilter; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActorSelection; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    FName ActorSelectionTag; // 0x0008 (Size: 0x8, Type: NameProperty)
    void* ActorSelectionClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ActorReferenceSelector[0x30]; // 0x0018 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSelectMultiple; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreSelfAndChildren; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowActorFilter; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowIncludeChildren; // 0x004B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowActorSelection; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowActorSelectionClass; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSelectMultiple; // 0x004E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowIgnoreSelfAndChildren; // 0x004F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGActorSelectorSettings, ActorFilter) == 0, "Offset mismatch for FPCGActorSelectorSettings::ActorFilter");
static_assert(offsetof(FPCGActorSelectorSettings, bMustOverlapSelf) == 1, "Offset mismatch for FPCGActorSelectorSettings::bMustOverlapSelf");
static_assert(offsetof(FPCGActorSelectorSettings, bIncludeChildren) == 2, "Offset mismatch for FPCGActorSelectorSettings::bIncludeChildren");
static_assert(offsetof(FPCGActorSelectorSettings, IncludeIsolatedActors) == 3, "Offset mismatch for FPCGActorSelectorSettings::IncludeIsolatedActors");
static_assert(offsetof(FPCGActorSelectorSettings, bDisableFilter) == 4, "Offset mismatch for FPCGActorSelectorSettings::bDisableFilter");
static_assert(offsetof(FPCGActorSelectorSettings, ActorSelection) == 5, "Offset mismatch for FPCGActorSelectorSettings::ActorSelection");
static_assert(offsetof(FPCGActorSelectorSettings, ActorSelectionTag) == 8, "Offset mismatch for FPCGActorSelectorSettings::ActorSelectionTag");
static_assert(offsetof(FPCGActorSelectorSettings, ActorSelectionClass) == 16, "Offset mismatch for FPCGActorSelectorSettings::ActorSelectionClass");
static_assert(offsetof(FPCGActorSelectorSettings, ActorReferenceSelector) == 24, "Offset mismatch for FPCGActorSelectorSettings::ActorReferenceSelector");
static_assert(offsetof(FPCGActorSelectorSettings, bSelectMultiple) == 72, "Offset mismatch for FPCGActorSelectorSettings::bSelectMultiple");
static_assert(offsetof(FPCGActorSelectorSettings, bIgnoreSelfAndChildren) == 73, "Offset mismatch for FPCGActorSelectorSettings::bIgnoreSelfAndChildren");
static_assert(offsetof(FPCGActorSelectorSettings, bShowActorFilter) == 74, "Offset mismatch for FPCGActorSelectorSettings::bShowActorFilter");
static_assert(offsetof(FPCGActorSelectorSettings, bShowIncludeChildren) == 75, "Offset mismatch for FPCGActorSelectorSettings::bShowIncludeChildren");
static_assert(offsetof(FPCGActorSelectorSettings, bShowActorSelection) == 76, "Offset mismatch for FPCGActorSelectorSettings::bShowActorSelection");
static_assert(offsetof(FPCGActorSelectorSettings, bShowActorSelectionClass) == 77, "Offset mismatch for FPCGActorSelectorSettings::bShowActorSelectionClass");
static_assert(offsetof(FPCGActorSelectorSettings, bShowSelectMultiple) == 78, "Offset mismatch for FPCGActorSelectorSettings::bShowSelectMultiple");
static_assert(offsetof(FPCGActorSelectorSettings, bShowIgnoreSelfAndChildren) == 79, "Offset mismatch for FPCGActorSelectorSettings::bShowIgnoreSelfAndChildren");

// /Script/PCG.PCGAlignPointsAxisSettings
// Kind: ScriptStruct; super: none
struct FPCGAlignPointsAxisSettings
{
public:
    std::uint8_t bApplyToAxis; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SourceReferential; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TargetReferential; // 0x0002 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGAlignPointsAxisSettings, bApplyToAxis) == 0, "Offset mismatch for FPCGAlignPointsAxisSettings::bApplyToAxis");
static_assert(offsetof(FPCGAlignPointsAxisSettings, SourceReferential) == 1, "Offset mismatch for FPCGAlignPointsAxisSettings::SourceReferential");
static_assert(offsetof(FPCGAlignPointsAxisSettings, TargetReferential) == 2, "Offset mismatch for FPCGAlignPointsAxisSettings::TargetReferential");

// /Script/PCG.PCGAnimBankDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FPCGAnimBankDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Mesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Bank; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint32_t SequenceIndex; // 0x0018 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FPCGAnimBankDataRow, Mesh) == 8, "Offset mismatch for FPCGAnimBankDataRow::Mesh");
static_assert(offsetof(FPCGAnimBankDataRow, Bank) == 16, "Offset mismatch for FPCGAnimBankDataRow::Bank");
static_assert(offsetof(FPCGAnimBankDataRow, SequenceIndex) == 24, "Offset mismatch for FPCGAnimBankDataRow::SequenceIndex");

// /Script/PCG.PCGAssetCachedPins
// Kind: ScriptStruct; super: none
struct FPCGAssetCachedPins
{
public:
    TArray<void*> InputPins; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputPins; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasCachedPins; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGAssetCachedPins, InputPins) == 0, "Offset mismatch for FPCGAssetCachedPins::InputPins");
static_assert(offsetof(FPCGAssetCachedPins, OutputPins) == 16, "Offset mismatch for FPCGAssetCachedPins::OutputPins");
static_assert(offsetof(FPCGAssetCachedPins, bHasCachedPins) == 32, "Offset mismatch for FPCGAssetCachedPins::bHasCachedPins");

// /Script/PCG.PCGAssetExporterParameters
// Kind: ScriptStruct; super: none
struct FPCGAssetExporterParameters
{
public:
    std::uint8_t bOpenSaveDialog; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString AssetName; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString AssetPath; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSaveOnExportEnded; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGAssetExporterParameters, bOpenSaveDialog) == 0, "Offset mismatch for FPCGAssetExporterParameters::bOpenSaveDialog");
static_assert(offsetof(FPCGAssetExporterParameters, AssetName) == 8, "Offset mismatch for FPCGAssetExporterParameters::AssetName");
static_assert(offsetof(FPCGAssetExporterParameters, AssetPath) == 24, "Offset mismatch for FPCGAssetExporterParameters::AssetPath");
static_assert(offsetof(FPCGAssetExporterParameters, bSaveOnExportEnded) == 40, "Offset mismatch for FPCGAssetExporterParameters::bSaveOnExportEnded");

// /Script/PCG.PCGAttributeExtractorTestStruct
// Kind: ScriptStruct; super: none
struct FPCGAttributeExtractorTestStruct
{
public:
    std::uint8_t DepthStruct[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Object; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGAttributeExtractorTestStruct, DepthStruct) == 0, "Offset mismatch for FPCGAttributeExtractorTestStruct::DepthStruct");
static_assert(offsetof(FPCGAttributeExtractorTestStruct, Object) == 8, "Offset mismatch for FPCGAttributeExtractorTestStruct::Object");

// /Script/PCG.PCGAttributeExtractorTestStructDepth1
// Kind: ScriptStruct; super: none
struct FPCGAttributeExtractorTestStructDepth1
{
public:
    std::uint8_t Depth2Struct[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float FloatValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPCGAttributeExtractorTestStructDepth1, Depth2Struct) == 0, "Offset mismatch for FPCGAttributeExtractorTestStructDepth1::Depth2Struct");
static_assert(offsetof(FPCGAttributeExtractorTestStructDepth1, FloatValue) == 4, "Offset mismatch for FPCGAttributeExtractorTestStructDepth1::FloatValue");

// /Script/PCG.PCGAttributeExtractorTestStructDepth2
// Kind: ScriptStruct; super: none
struct FPCGAttributeExtractorTestStructDepth2
{
public:
    std::int32_t IntValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGAttributeExtractorTestStructDepth2, IntValue) == 0, "Offset mismatch for FPCGAttributeExtractorTestStructDepth2::IntValue");

// /Script/PCG.PCGAttributeFilterThresholdSettings
// Kind: ScriptStruct; super: none
struct FPCGAttributeFilterThresholdSettings
{
public:
    std::uint8_t bInclusive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseConstantThreshold; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t ThresholdAttribute[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseSpatialQuery; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFilterEachInputWithEachFilterDataRespectively; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x003A
    std::uint8_t AttributeTypes[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGAttributeFilterThresholdSettings, bInclusive) == 0, "Offset mismatch for FPCGAttributeFilterThresholdSettings::bInclusive");
static_assert(offsetof(FPCGAttributeFilterThresholdSettings, bUseConstantThreshold) == 1, "Offset mismatch for FPCGAttributeFilterThresholdSettings::bUseConstantThreshold");
static_assert(offsetof(FPCGAttributeFilterThresholdSettings, ThresholdAttribute) == 8, "Offset mismatch for FPCGAttributeFilterThresholdSettings::ThresholdAttribute");
static_assert(offsetof(FPCGAttributeFilterThresholdSettings, bUseSpatialQuery) == 56, "Offset mismatch for FPCGAttributeFilterThresholdSettings::bUseSpatialQuery");
static_assert(offsetof(FPCGAttributeFilterThresholdSettings, bFilterEachInputWithEachFilterDataRespectively) == 57, "Offset mismatch for FPCGAttributeFilterThresholdSettings::bFilterEachInputWithEachFilterDataRespectively");
static_assert(offsetof(FPCGAttributeFilterThresholdSettings, AttributeTypes) == 64, "Offset mismatch for FPCGAttributeFilterThresholdSettings::AttributeTypes");

// /Script/PCG.PCGAttributeIdentifier
// Kind: ScriptStruct; super: none
struct FPCGAttributeIdentifier
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t MetadataDomain[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGAttributeIdentifier, Name) == 0, "Offset mismatch for FPCGAttributeIdentifier::Name");
static_assert(offsetof(FPCGAttributeIdentifier, MetadataDomain) == 4, "Offset mismatch for FPCGAttributeIdentifier::MetadataDomain");

// /Script/PCG.PCGAttributePropertyInputSelector
// Kind: ScriptStruct; super: PCGAttributePropertySelector
struct FPCGAttributePropertyInputSelector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Selection; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t DomainName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t PropertyName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    TArray<void*> ExtraNames; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExtraProperty; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGAttributePropertyInputSelector, Selection) == 8, "Offset mismatch for FPCGAttributePropertyInputSelector::Selection");
static_assert(offsetof(FPCGAttributePropertyInputSelector, DomainName) == 12, "Offset mismatch for FPCGAttributePropertyInputSelector::DomainName");
static_assert(offsetof(FPCGAttributePropertyInputSelector, AttributeName) == 16, "Offset mismatch for FPCGAttributePropertyInputSelector::AttributeName");
static_assert(offsetof(FPCGAttributePropertyInputSelector, PropertyName) == 20, "Offset mismatch for FPCGAttributePropertyInputSelector::PropertyName");
static_assert(offsetof(FPCGAttributePropertyInputSelector, ExtraNames) == 24, "Offset mismatch for FPCGAttributePropertyInputSelector::ExtraNames");
static_assert(offsetof(FPCGAttributePropertyInputSelector, ExtraProperty) == 40, "Offset mismatch for FPCGAttributePropertyInputSelector::ExtraProperty");

// /Script/PCG.PCGAttributePropertyOutputNoSourceSelector
// Kind: ScriptStruct; super: PCGAttributePropertySelector
struct FPCGAttributePropertyOutputNoSourceSelector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Selection; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t DomainName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t PropertyName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    TArray<void*> ExtraNames; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExtraProperty; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGAttributePropertyOutputNoSourceSelector, Selection) == 8, "Offset mismatch for FPCGAttributePropertyOutputNoSourceSelector::Selection");
static_assert(offsetof(FPCGAttributePropertyOutputNoSourceSelector, DomainName) == 12, "Offset mismatch for FPCGAttributePropertyOutputNoSourceSelector::DomainName");
static_assert(offsetof(FPCGAttributePropertyOutputNoSourceSelector, AttributeName) == 16, "Offset mismatch for FPCGAttributePropertyOutputNoSourceSelector::AttributeName");
static_assert(offsetof(FPCGAttributePropertyOutputNoSourceSelector, PropertyName) == 20, "Offset mismatch for FPCGAttributePropertyOutputNoSourceSelector::PropertyName");
static_assert(offsetof(FPCGAttributePropertyOutputNoSourceSelector, ExtraNames) == 24, "Offset mismatch for FPCGAttributePropertyOutputNoSourceSelector::ExtraNames");
static_assert(offsetof(FPCGAttributePropertyOutputNoSourceSelector, ExtraProperty) == 40, "Offset mismatch for FPCGAttributePropertyOutputNoSourceSelector::ExtraProperty");

// /Script/PCG.PCGAttributePropertyOutputSelector
// Kind: ScriptStruct; super: PCGAttributePropertyOutputNoSourceSelector
struct FPCGAttributePropertyOutputSelector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Selection; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t DomainName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t PropertyName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    TArray<void*> ExtraNames; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExtraProperty; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGAttributePropertyOutputSelector, Selection) == 8, "Offset mismatch for FPCGAttributePropertyOutputSelector::Selection");
static_assert(offsetof(FPCGAttributePropertyOutputSelector, DomainName) == 12, "Offset mismatch for FPCGAttributePropertyOutputSelector::DomainName");
static_assert(offsetof(FPCGAttributePropertyOutputSelector, AttributeName) == 16, "Offset mismatch for FPCGAttributePropertyOutputSelector::AttributeName");
static_assert(offsetof(FPCGAttributePropertyOutputSelector, PropertyName) == 20, "Offset mismatch for FPCGAttributePropertyOutputSelector::PropertyName");
static_assert(offsetof(FPCGAttributePropertyOutputSelector, ExtraNames) == 24, "Offset mismatch for FPCGAttributePropertyOutputSelector::ExtraNames");
static_assert(offsetof(FPCGAttributePropertyOutputSelector, ExtraProperty) == 40, "Offset mismatch for FPCGAttributePropertyOutputSelector::ExtraProperty");

// /Script/PCG.PCGAttributePropertySelector
// Kind: ScriptStruct; super: none
struct FPCGAttributePropertySelector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Selection; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t DomainName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t AttributeName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t PropertyName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    TArray<void*> ExtraNames; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExtraProperty; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGAttributePropertySelector, Selection) == 8, "Offset mismatch for FPCGAttributePropertySelector::Selection");
static_assert(offsetof(FPCGAttributePropertySelector, DomainName) == 12, "Offset mismatch for FPCGAttributePropertySelector::DomainName");
static_assert(offsetof(FPCGAttributePropertySelector, AttributeName) == 16, "Offset mismatch for FPCGAttributePropertySelector::AttributeName");
static_assert(offsetof(FPCGAttributePropertySelector, PropertyName) == 20, "Offset mismatch for FPCGAttributePropertySelector::PropertyName");
static_assert(offsetof(FPCGAttributePropertySelector, ExtraNames) == 24, "Offset mismatch for FPCGAttributePropertySelector::ExtraNames");
static_assert(offsetof(FPCGAttributePropertySelector, ExtraProperty) == 40, "Offset mismatch for FPCGAttributePropertySelector::ExtraProperty");

// /Script/PCG.PCGBakeMeshAttributesParams
// Kind: ScriptStruct; super: none
struct FPCGBakeMeshAttributesParams
{
public:
    std::uint8_t Resolution[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Format; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Attribute; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000A
    std::int32_t Padding; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t UVChannelIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGBakeMeshAttributesParams, Resolution) == 0, "Offset mismatch for FPCGBakeMeshAttributesParams::Resolution");
static_assert(offsetof(FPCGBakeMeshAttributesParams, Format) == 8, "Offset mismatch for FPCGBakeMeshAttributesParams::Format");
static_assert(offsetof(FPCGBakeMeshAttributesParams, Attribute) == 9, "Offset mismatch for FPCGBakeMeshAttributesParams::Attribute");
static_assert(offsetof(FPCGBakeMeshAttributesParams, Padding) == 12, "Offset mismatch for FPCGBakeMeshAttributesParams::Padding");
static_assert(offsetof(FPCGBakeMeshAttributesParams, UVChannelIndex) == 16, "Offset mismatch for FPCGBakeMeshAttributesParams::UVChannelIndex");

// /Script/PCG.PCGBlueprintContextHandle
// Kind: ScriptStruct; super: none
struct FPCGBlueprintContextHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGCollisionShape
// Kind: ScriptStruct; super: none
struct FPCGCollisionShape
{
public:
    std::uint8_t ShapeType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t BoxHalfExtent[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float SphereRadius; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float CapsuleRadius; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float CapsuleHalfHeight; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t ShapeRotation[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGCollisionShape, ShapeType) == 0, "Offset mismatch for FPCGCollisionShape::ShapeType");
static_assert(offsetof(FPCGCollisionShape, BoxHalfExtent) == 8, "Offset mismatch for FPCGCollisionShape::BoxHalfExtent");
static_assert(offsetof(FPCGCollisionShape, SphereRadius) == 32, "Offset mismatch for FPCGCollisionShape::SphereRadius");
static_assert(offsetof(FPCGCollisionShape, CapsuleRadius) == 36, "Offset mismatch for FPCGCollisionShape::CapsuleRadius");
static_assert(offsetof(FPCGCollisionShape, CapsuleHalfHeight) == 40, "Offset mismatch for FPCGCollisionShape::CapsuleHalfHeight");
static_assert(offsetof(FPCGCollisionShape, ShapeRotation) == 48, "Offset mismatch for FPCGCollisionShape::ShapeRotation");

// /Script/PCG.PCGComponentInstanceData
// Kind: ScriptStruct; super: ActorComponentInstanceData
struct FPCGComponentInstanceData
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* SourceComponent; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGComponentInstanceData, SourceComponent) == 104, "Offset mismatch for FPCGComponentInstanceData::SourceComponent");

// /Script/PCG.PCGComponentSelectorSettings
// Kind: ScriptStruct; super: none
struct FPCGComponentSelectorSettings
{
public:
    std::uint8_t ComponentSelection; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t ComponentSelectionTag[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* ComponentSelectionClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bShowComponentSelection; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowComponentSelectionClass; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGComponentSelectorSettings, ComponentSelection) == 0, "Offset mismatch for FPCGComponentSelectorSettings::ComponentSelection");
static_assert(offsetof(FPCGComponentSelectorSettings, ComponentSelectionTag) == 4, "Offset mismatch for FPCGComponentSelectorSettings::ComponentSelectionTag");
static_assert(offsetof(FPCGComponentSelectorSettings, ComponentSelectionClass) == 8, "Offset mismatch for FPCGComponentSelectorSettings::ComponentSelectionClass");
static_assert(offsetof(FPCGComponentSelectorSettings, bShowComponentSelection) == 16, "Offset mismatch for FPCGComponentSelectorSettings::bShowComponentSelection");
static_assert(offsetof(FPCGComponentSelectorSettings, bShowComponentSelectionClass) == 17, "Offset mismatch for FPCGComponentSelectorSettings::bShowComponentSelectionClass");

// /Script/PCG.PCGComputeGraphs
// Kind: ScriptStruct; super: none
struct FPCGComputeGraphs
{
public:
    TArray<void*> ComputeGraphs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGComputeGraphs, ComputeGraphs) == 0, "Offset mismatch for FPCGComputeGraphs::ComputeGraphs");

// /Script/PCG.PCGContext
// Kind: ScriptStruct; super: none
struct FPCGContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGCrc
// Kind: ScriptStruct; super: none
struct FPCGCrc
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bValid; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGCrc, Value) == 0, "Offset mismatch for FPCGCrc::Value");
static_assert(offsetof(FPCGCrc, bValid) == 4, "Offset mismatch for FPCGCrc::bValid");

// /Script/PCG.PCGCustomHLSLParsedSource
// Kind: ScriptStruct; super: none
struct FPCGCustomHLSLParsedSource
{
public:
    TArray<void*> AttributeFunctions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGCustomHLSLParsedSource, AttributeFunctions) == 0, "Offset mismatch for FPCGCustomHLSLParsedSource::AttributeFunctions");

// /Script/PCG.PCGCustomSelectionKey
// Kind: ScriptStruct; super: none
struct FPCGCustomSelectionKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataAssetCachedPins
// Kind: ScriptStruct; super: none
struct FPCGDataAssetCachedPins
{
public:
    TArray<void*> CachedPins; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasCachedPins; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGDataAssetCachedPins, CachedPins) == 0, "Offset mismatch for FPCGDataAssetCachedPins::CachedPins");
static_assert(offsetof(FPCGDataAssetCachedPins, bHasCachedPins) == 16, "Offset mismatch for FPCGDataAssetCachedPins::bHasCachedPins");

// /Script/PCG.PCGDataCollection
// Kind: ScriptStruct; super: none
struct FPCGDataCollection
{
public:
    TArray<void*> TaggedData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCancelExecutionOnEmpty; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGDataCollection, TaggedData) == 0, "Offset mismatch for FPCGDataCollection::TaggedData");
static_assert(offsetof(FPCGDataCollection, bCancelExecutionOnEmpty) == 16, "Offset mismatch for FPCGDataCollection::bCancelExecutionOnEmpty");

// /Script/PCG.PCGDataLabels
// Kind: ScriptStruct; super: none
struct FPCGDataLabels
{
public:
    TArray<void*> Labels; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGDataLabels, Labels) == 0, "Offset mismatch for FPCGDataLabels::Labels");

// /Script/PCG.PCGDataLayerReferenceSelector
// Kind: ScriptStruct; super: none
struct FPCGDataLayerReferenceSelector
{
public:
    std::uint8_t bAsInput; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Attribute[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    TArray<void*> DataLayers; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGDataLayerReferenceSelector, bAsInput) == 0, "Offset mismatch for FPCGDataLayerReferenceSelector::bAsInput");
static_assert(offsetof(FPCGDataLayerReferenceSelector, Attribute) == 8, "Offset mismatch for FPCGDataLayerReferenceSelector::Attribute");
static_assert(offsetof(FPCGDataLayerReferenceSelector, DataLayers) == 56, "Offset mismatch for FPCGDataLayerReferenceSelector::DataLayers");

// /Script/PCG.PCGDataLayerSettings
// Kind: ScriptStruct; super: none
struct FPCGDataLayerSettings
{
public:
    std::uint8_t DataLayerSourceType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t DataLayerReferenceAttribute[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t IncludedDataLayers[0x48]; // 0x0038 (Size: 0x48, Type: StructProperty)
    std::uint8_t ExcludedDataLayers[0x48]; // 0x0080 (Size: 0x48, Type: StructProperty)
    std::uint8_t AddDataLayers[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGDataLayerSettings, DataLayerSourceType) == 0, "Offset mismatch for FPCGDataLayerSettings::DataLayerSourceType");
static_assert(offsetof(FPCGDataLayerSettings, DataLayerReferenceAttribute) == 8, "Offset mismatch for FPCGDataLayerSettings::DataLayerReferenceAttribute");
static_assert(offsetof(FPCGDataLayerSettings, IncludedDataLayers) == 56, "Offset mismatch for FPCGDataLayerSettings::IncludedDataLayers");
static_assert(offsetof(FPCGDataLayerSettings, ExcludedDataLayers) == 128, "Offset mismatch for FPCGDataLayerSettings::ExcludedDataLayers");
static_assert(offsetof(FPCGDataLayerSettings, AddDataLayers) == 200, "Offset mismatch for FPCGDataLayerSettings::AddDataLayers");

// /Script/PCG.PCGDataPtrWrapper
// Kind: ScriptStruct; super: none
struct FPCGDataPtrWrapper
{
public:
    void* Data; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGDataPtrWrapper, Data) == 0, "Offset mismatch for FPCGDataPtrWrapper::Data");

// /Script/PCG.PCGDataTableRowToParamDataTestStruct
// Kind: ScriptStruct; super: none
struct FPCGDataTableRowToParamDataTestStruct
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString String; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t I32; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::int64_t I64; // 0x0020 (Size: 0x8, Type: Int64Property)
    float F32; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    double F64; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t V2[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t V3[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t V4[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t SoftPath[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGDataTableRowToParamDataTestStruct, Name) == 0, "Offset mismatch for FPCGDataTableRowToParamDataTestStruct::Name");
static_assert(offsetof(FPCGDataTableRowToParamDataTestStruct, String) == 8, "Offset mismatch for FPCGDataTableRowToParamDataTestStruct::String");
static_assert(offsetof(FPCGDataTableRowToParamDataTestStruct, I32) == 24, "Offset mismatch for FPCGDataTableRowToParamDataTestStruct::I32");
static_assert(offsetof(FPCGDataTableRowToParamDataTestStruct, I64) == 32, "Offset mismatch for FPCGDataTableRowToParamDataTestStruct::I64");
static_assert(offsetof(FPCGDataTableRowToParamDataTestStruct, F32) == 40, "Offset mismatch for FPCGDataTableRowToParamDataTestStruct::F32");
static_assert(offsetof(FPCGDataTableRowToParamDataTestStruct, F64) == 48, "Offset mismatch for FPCGDataTableRowToParamDataTestStruct::F64");
static_assert(offsetof(FPCGDataTableRowToParamDataTestStruct, V2) == 56, "Offset mismatch for FPCGDataTableRowToParamDataTestStruct::V2");
static_assert(offsetof(FPCGDataTableRowToParamDataTestStruct, V3) == 72, "Offset mismatch for FPCGDataTableRowToParamDataTestStruct::V3");
static_assert(offsetof(FPCGDataTableRowToParamDataTestStruct, V4) == 96, "Offset mismatch for FPCGDataTableRowToParamDataTestStruct::V4");
static_assert(offsetof(FPCGDataTableRowToParamDataTestStruct, SoftPath) == 128, "Offset mismatch for FPCGDataTableRowToParamDataTestStruct::SoftPath");

// /Script/PCG.PCGDataToDebug
// Kind: ScriptStruct; super: none
struct FPCGDataToDebug
{
public:
    void* Data; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* DataPendingInit; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> ProducerSettings; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PinLabel[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t PinLabelAlias[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t Tags[0x10]; // 0x0020 (Size: 0x10, Type: SetProperty)
    TSet<void*> AdditionalTags; // 0x0030 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FPCGDataToDebug, Data) == 0, "Offset mismatch for FPCGDataToDebug::Data");
static_assert(offsetof(FPCGDataToDebug, DataPendingInit) == 8, "Offset mismatch for FPCGDataToDebug::DataPendingInit");
static_assert(offsetof(FPCGDataToDebug, ProducerSettings) == 16, "Offset mismatch for FPCGDataToDebug::ProducerSettings");
static_assert(offsetof(FPCGDataToDebug, PinLabel) == 24, "Offset mismatch for FPCGDataToDebug::PinLabel");
static_assert(offsetof(FPCGDataToDebug, PinLabelAlias) == 28, "Offset mismatch for FPCGDataToDebug::PinLabelAlias");
static_assert(offsetof(FPCGDataToDebug, Tags) == 32, "Offset mismatch for FPCGDataToDebug::Tags");
static_assert(offsetof(FPCGDataToDebug, AdditionalTags) == 48, "Offset mismatch for FPCGDataToDebug::AdditionalTags");

// /Script/PCG.PCGDataTypeBaseId
// Kind: ScriptStruct; super: none
struct FPCGDataTypeBaseId
{
public:
    void* Struct; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGDataTypeBaseId, Struct) == 0, "Offset mismatch for FPCGDataTypeBaseId::Struct");

// /Script/PCG.PCGDataTypeIdentifier
// Kind: ScriptStruct; super: none
struct FPCGDataTypeIdentifier
{
public:
    TArray<void*> IDs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CustomSubtype; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGDataTypeIdentifier, IDs) == 0, "Offset mismatch for FPCGDataTypeIdentifier::IDs");
static_assert(offsetof(FPCGDataTypeIdentifier, CustomSubtype) == 16, "Offset mismatch for FPCGDataTypeIdentifier::CustomSubtype");

// /Script/PCG.PCGDataTypeInfo
// Kind: ScriptStruct; super: none
struct FPCGDataTypeInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoComposite
// Kind: ScriptStruct; super: PCGDataTypeInfoSpatial
struct FPCGDataTypeInfoComposite
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoConcrete
// Kind: ScriptStruct; super: PCGDataTypeInfoSpatial
struct FPCGDataTypeInfoConcrete
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoDataView
// Kind: ScriptStruct; super: PCGDataTypeInfo
struct FPCGDataTypeInfoDataView
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoDynamicMesh
// Kind: ScriptStruct; super: PCGDataTypeInfoConcrete
struct FPCGDataTypeInfoDynamicMesh
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoLandscape
// Kind: ScriptStruct; super: PCGDataTypeInfoSurface
struct FPCGDataTypeInfoLandscape
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoLandscapeSpline
// Kind: ScriptStruct; super: PCGDataTypeInfoPolyline
struct FPCGDataTypeInfoLandscapeSpline
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoOther
// Kind: ScriptStruct; super: PCGDataTypeInfo
struct FPCGDataTypeInfoOther
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoParam
// Kind: ScriptStruct; super: PCGDataTypeInfo
struct FPCGDataTypeInfoParam
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoPoint
// Kind: ScriptStruct; super: PCGDataTypeInfoConcrete
struct FPCGDataTypeInfoPoint
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoPolygon2D
// Kind: ScriptStruct; super: PCGDataTypeInfoPolyline
struct FPCGDataTypeInfoPolygon2D
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoPolyline
// Kind: ScriptStruct; super: PCGDataTypeInfoConcrete
struct FPCGDataTypeInfoPolyline
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoPrimitive
// Kind: ScriptStruct; super: PCGDataTypeInfoConcrete
struct FPCGDataTypeInfoPrimitive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoProxyForGPU
// Kind: ScriptStruct; super: PCGDataTypeInfo
struct FPCGDataTypeInfoProxyForGPU
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoRawBuffer
// Kind: ScriptStruct; super: PCGDataTypeInfo
struct FPCGDataTypeInfoRawBuffer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoRenderTarget2D
// Kind: ScriptStruct; super: PCGDataTypeInfoTexture2DSingleBase
struct FPCGDataTypeInfoRenderTarget2D
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoResource
// Kind: ScriptStruct; super: PCGDataTypeInfo
struct FPCGDataTypeInfoResource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoSettings
// Kind: ScriptStruct; super: PCGDataTypeInfo
struct FPCGDataTypeInfoSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoSpatial
// Kind: ScriptStruct; super: PCGDataTypeInfo
struct FPCGDataTypeInfoSpatial
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoSpline
// Kind: ScriptStruct; super: PCGDataTypeInfoPolyline
struct FPCGDataTypeInfoSpline
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoStaticMeshResource
// Kind: ScriptStruct; super: PCGDataTypeInfoResource
struct FPCGDataTypeInfoStaticMeshResource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoSurface
// Kind: ScriptStruct; super: PCGDataTypeInfoConcrete
struct FPCGDataTypeInfoSurface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoTexture2D
// Kind: ScriptStruct; super: PCGDataTypeInfoTexture2DSingleBase
struct FPCGDataTypeInfoTexture2D
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoTexture2DArray
// Kind: ScriptStruct; super: PCGDataTypeInfoTexture2DBase
struct FPCGDataTypeInfoTexture2DArray
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoTexture2DBase
// Kind: ScriptStruct; super: PCGDataTypeInfoSurface
struct FPCGDataTypeInfoTexture2DBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoTexture2DSingleBase
// Kind: ScriptStruct; super: PCGDataTypeInfoTexture2DBase
struct FPCGDataTypeInfoTexture2DSingleBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoVirtualTexture
// Kind: ScriptStruct; super: PCGDataTypeInfoSurface
struct FPCGDataTypeInfoVirtualTexture
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataTypeInfoVolume
// Kind: ScriptStruct; super: PCGDataTypeInfoConcrete
struct FPCGDataTypeInfoVolume
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataView
// Kind: ScriptStruct; super: none
struct FPCGDataView
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ViewedData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Selection[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGDataView, ViewedData) == 8, "Offset mismatch for FPCGDataView::ViewedData");
static_assert(offsetof(FPCGDataView, Selection) == 16, "Offset mismatch for FPCGDataView::Selection");

// /Script/PCG.PCGDataViewCSVOutput
// Kind: ScriptStruct; super: none
struct FPCGDataViewCSVOutput
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataViewCSVParameters
// Kind: ScriptStruct; super: none
struct FPCGDataViewCSVParameters
{
public:
    std::uint8_t Output; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString NameValueSeparator; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString ValueDelimiter; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString AttributeDelimiter; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bOmitDomain; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGDataViewCSVParameters, Output) == 0, "Offset mismatch for FPCGDataViewCSVParameters::Output");
static_assert(offsetof(FPCGDataViewCSVParameters, NameValueSeparator) == 8, "Offset mismatch for FPCGDataViewCSVParameters::NameValueSeparator");
static_assert(offsetof(FPCGDataViewCSVParameters, ValueDelimiter) == 24, "Offset mismatch for FPCGDataViewCSVParameters::ValueDelimiter");
static_assert(offsetof(FPCGDataViewCSVParameters, AttributeDelimiter) == 40, "Offset mismatch for FPCGDataViewCSVParameters::AttributeDelimiter");
static_assert(offsetof(FPCGDataViewCSVParameters, bOmitDomain) == 56, "Offset mismatch for FPCGDataViewCSVParameters::bOmitDomain");

// /Script/PCG.PCGDataViewJsonOutput
// Kind: ScriptStruct; super: none
struct FPCGDataViewJsonOutput
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataViewJsonParameters
// Kind: ScriptStruct; super: none
struct FPCGDataViewJsonParameters
{
public:
    std::uint8_t AttributeLayout; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPrettyJson; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGDataViewJsonParameters, AttributeLayout) == 0, "Offset mismatch for FPCGDataViewJsonParameters::AttributeLayout");
static_assert(offsetof(FPCGDataViewJsonParameters, bPrettyJson) == 1, "Offset mismatch for FPCGDataViewJsonParameters::bPrettyJson");

// /Script/PCG.PCGDataViewSelection
// Kind: ScriptStruct; super: none
struct FPCGDataViewSelection
{
public:
    std::uint8_t bAllAttributes; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLimitByDomain; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreProperties; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    TArray<void*> Attributes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    FName Domain; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPCGDataViewSelection, bAllAttributes) == 0, "Offset mismatch for FPCGDataViewSelection::bAllAttributes");
static_assert(offsetof(FPCGDataViewSelection, bLimitByDomain) == 1, "Offset mismatch for FPCGDataViewSelection::bLimitByDomain");
static_assert(offsetof(FPCGDataViewSelection, bIgnoreProperties) == 2, "Offset mismatch for FPCGDataViewSelection::bIgnoreProperties");
static_assert(offsetof(FPCGDataViewSelection, Attributes) == 8, "Offset mismatch for FPCGDataViewSelection::Attributes");
static_assert(offsetof(FPCGDataViewSelection, Domain) == 24, "Offset mismatch for FPCGDataViewSelection::Domain");

// /Script/PCG.PCGDebugVisualizationSettings
// Kind: ScriptStruct; super: none
struct FPCGDebugVisualizationSettings
{
public:
    float PointScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScaleMethod; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t PointMesh[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> MaterialOverride; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGDebugVisualizationSettings, PointScale) == 0, "Offset mismatch for FPCGDebugVisualizationSettings::PointScale");
static_assert(offsetof(FPCGDebugVisualizationSettings, ScaleMethod) == 4, "Offset mismatch for FPCGDebugVisualizationSettings::ScaleMethod");
static_assert(offsetof(FPCGDebugVisualizationSettings, PointMesh) == 8, "Offset mismatch for FPCGDebugVisualizationSettings::PointMesh");
static_assert(offsetof(FPCGDebugVisualizationSettings, MaterialOverride) == 40, "Offset mismatch for FPCGDebugVisualizationSettings::MaterialOverride");

// /Script/PCG.PCGDefaultValueContainer
// Kind: ScriptStruct; super: none
struct FPCGDefaultValueContainer
{
public:
    std::uint8_t ActivatedProperties[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    std::uint8_t PropertyBag[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGDefaultValueContainer, ActivatedProperties) == 0, "Offset mismatch for FPCGDefaultValueContainer::ActivatedProperties");
static_assert(offsetof(FPCGDefaultValueContainer, PropertyBag) == 16, "Offset mismatch for FPCGDefaultValueContainer::PropertyBag");

// /Script/PCG.PCGDeltaBase
// Kind: ScriptStruct; super: none
struct FPCGDeltaBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDeltaCollection
// Kind: ScriptStruct; super: none
struct FPCGDeltaCollection
{
public:
    std::uint8_t Settings[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> Deltas; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPCGDeltaCollection, Settings) == 0, "Offset mismatch for FPCGDeltaCollection::Settings");
static_assert(offsetof(FPCGDeltaCollection, Deltas) == 24, "Offset mismatch for FPCGDeltaCollection::Deltas");

// /Script/PCG.PCGDeltaKey
// Kind: ScriptStruct; super: none
struct FPCGDeltaKey
{
public:
    std::uint64_t Hash; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FPCGDeltaKey, Hash) == 0, "Offset mismatch for FPCGDeltaKey::Hash");

// /Script/PCG.PCGDeltaSettings
// Kind: ScriptStruct; super: none
struct FPCGDeltaSettings
{
public:
    std::uint8_t KeyPolicy; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t AttributeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t PinLabel[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t KeyTarget; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    double SpatialTolerance; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FPCGDeltaSettings, KeyPolicy) == 0, "Offset mismatch for FPCGDeltaSettings::KeyPolicy");
static_assert(offsetof(FPCGDeltaSettings, AttributeName) == 4, "Offset mismatch for FPCGDeltaSettings::AttributeName");
static_assert(offsetof(FPCGDeltaSettings, PinLabel) == 8, "Offset mismatch for FPCGDeltaSettings::PinLabel");
static_assert(offsetof(FPCGDeltaSettings, KeyTarget) == 12, "Offset mismatch for FPCGDeltaSettings::KeyTarget");
static_assert(offsetof(FPCGDeltaSettings, SpatialTolerance) == 16, "Offset mismatch for FPCGDeltaSettings::SpatialTolerance");

// /Script/PCG.PCGDeterminismSettings
// Kind: ScriptStruct; super: none
struct FPCGDeterminismSettings
{
public:
    std::uint8_t bNativeTests; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseBlueprintDeterminismTest; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    void* DeterminismTestBlueprint; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FPCGDeterminismSettings, bNativeTests) == 0, "Offset mismatch for FPCGDeterminismSettings::bNativeTests");
static_assert(offsetof(FPCGDeterminismSettings, bUseBlueprintDeterminismTest) == 1, "Offset mismatch for FPCGDeterminismSettings::bUseBlueprintDeterminismTest");
static_assert(offsetof(FPCGDeterminismSettings, DeterminismTestBlueprint) == 8, "Offset mismatch for FPCGDeterminismSettings::DeterminismTestBlueprint");

// /Script/PCG.PCGDummyGetPropertyLevel2Struct
// Kind: ScriptStruct; super: none
struct FPCGDummyGetPropertyLevel2Struct
{
public:
    TArray<void*> DoubleArrayProperty; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGDummyGetPropertyLevel2Struct, DoubleArrayProperty) == 0, "Offset mismatch for FPCGDummyGetPropertyLevel2Struct::DoubleArrayProperty");

// /Script/PCG.PCGDummyGetPropertyStruct
// Kind: ScriptStruct; super: none
struct FPCGDummyGetPropertyStruct
{
public:
    TArray<void*> IntArrayProperty; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float FloatProperty; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint8_t Level2Struct[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGDummyGetPropertyStruct, IntArrayProperty) == 0, "Offset mismatch for FPCGDummyGetPropertyStruct::IntArrayProperty");
static_assert(offsetof(FPCGDummyGetPropertyStruct, FloatProperty) == 16, "Offset mismatch for FPCGDummyGetPropertyStruct::FloatProperty");
static_assert(offsetof(FPCGDummyGetPropertyStruct, Level2Struct) == 24, "Offset mismatch for FPCGDummyGetPropertyStruct::Level2Struct");

// /Script/PCG.PCGDynamicPinContainer
// Kind: ScriptStruct; super: none
struct FPCGDynamicPinContainer
{
public:
    TArray<void*> PinProperties; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGDynamicPinContainer, PinProperties) == 0, "Offset mismatch for FPCGDynamicPinContainer::PinProperties");

// /Script/PCG.PCGFilterByAttributeThresholdSettings
// Kind: ScriptStruct; super: none
struct FPCGFilterByAttributeThresholdSettings
{
public:
    std::uint8_t bUseConstantThreshold; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ThresholdAttribute[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    std::uint8_t AttributeTypes[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGFilterByAttributeThresholdSettings, bUseConstantThreshold) == 0, "Offset mismatch for FPCGFilterByAttributeThresholdSettings::bUseConstantThreshold");
static_assert(offsetof(FPCGFilterByAttributeThresholdSettings, ThresholdAttribute) == 8, "Offset mismatch for FPCGFilterByAttributeThresholdSettings::ThresholdAttribute");
static_assert(offsetof(FPCGFilterByAttributeThresholdSettings, AttributeTypes) == 64, "Offset mismatch for FPCGFilterByAttributeThresholdSettings::AttributeTypes");

// /Script/PCG.PCGFilterByAttributeThresholdSettingsRange
// Kind: ScriptStruct; super: PCGFilterByAttributeThresholdSettings
struct FPCGFilterByAttributeThresholdSettingsRange
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t bInclusive; // 0x01A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGFilterByAttributeThresholdSettingsRange, bInclusive) == 416, "Offset mismatch for FPCGFilterByAttributeThresholdSettingsRange::bInclusive");

// /Script/PCG.PCGGrammarSelection
// Kind: ScriptStruct; super: none
struct FPCGGrammarSelection
{
public:
    std::uint8_t bGrammarAsAttribute; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString GrammarString; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t GrammarAttribute[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGGrammarSelection, bGrammarAsAttribute) == 0, "Offset mismatch for FPCGGrammarSelection::bGrammarAsAttribute");
static_assert(offsetof(FPCGGrammarSelection, GrammarString) == 8, "Offset mismatch for FPCGGrammarSelection::GrammarString");
static_assert(offsetof(FPCGGrammarSelection, GrammarAttribute) == 24, "Offset mismatch for FPCGGrammarSelection::GrammarAttribute");

// /Script/PCG.PCGGraphCommentNodeData
// Kind: ScriptStruct; super: none
struct FPCGGraphCommentNodeData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGGraphDocumentInfo
// Kind: ScriptStruct; super: none
struct FPCGGraphDocumentInfo
{
public:
    std::uint8_t EditedObjectPath[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t SavedViewOffset[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    float SavedZoomAmount; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPCGGraphDocumentInfo, EditedObjectPath) == 0, "Offset mismatch for FPCGGraphDocumentInfo::EditedObjectPath");
static_assert(offsetof(FPCGGraphDocumentInfo, SavedViewOffset) == 24, "Offset mismatch for FPCGGraphDocumentInfo::SavedViewOffset");
static_assert(offsetof(FPCGGraphDocumentInfo, SavedZoomAmount) == 32, "Offset mismatch for FPCGGraphDocumentInfo::SavedZoomAmount");

// /Script/PCG.PCGGraphEditorCustomization
// Kind: ScriptStruct; super: none
struct FPCGGraphEditorCustomization
{
public:
    std::uint8_t bFilterNodesByCategory; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t NodeFilterType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0005
    std::uint8_t FilteredCategories[0x10]; // 0x0008 (Size: 0x10, Type: SetProperty)
    std::uint8_t bFilterSubgraphs; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0019
    std::uint8_t SubgraphFilterType; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x001D
    std::uint8_t FilteredSubgraphTypes[0x10]; // 0x0020 (Size: 0x10, Type: SetProperty)
    std::uint8_t bFilterSettings; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0031
    std::uint8_t SettingsFilterType; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0035
    TArray<void*> FilteredSettingsTypes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGGraphEditorCustomization, bFilterNodesByCategory) == 0, "Offset mismatch for FPCGGraphEditorCustomization::bFilterNodesByCategory");
static_assert(offsetof(FPCGGraphEditorCustomization, NodeFilterType) == 4, "Offset mismatch for FPCGGraphEditorCustomization::NodeFilterType");
static_assert(offsetof(FPCGGraphEditorCustomization, FilteredCategories) == 8, "Offset mismatch for FPCGGraphEditorCustomization::FilteredCategories");
static_assert(offsetof(FPCGGraphEditorCustomization, bFilterSubgraphs) == 24, "Offset mismatch for FPCGGraphEditorCustomization::bFilterSubgraphs");
static_assert(offsetof(FPCGGraphEditorCustomization, SubgraphFilterType) == 28, "Offset mismatch for FPCGGraphEditorCustomization::SubgraphFilterType");
static_assert(offsetof(FPCGGraphEditorCustomization, FilteredSubgraphTypes) == 32, "Offset mismatch for FPCGGraphEditorCustomization::FilteredSubgraphTypes");
static_assert(offsetof(FPCGGraphEditorCustomization, bFilterSettings) == 48, "Offset mismatch for FPCGGraphEditorCustomization::bFilterSettings");
static_assert(offsetof(FPCGGraphEditorCustomization, SettingsFilterType) == 52, "Offset mismatch for FPCGGraphEditorCustomization::SettingsFilterType");
static_assert(offsetof(FPCGGraphEditorCustomization, FilteredSettingsTypes) == 56, "Offset mismatch for FPCGGraphEditorCustomization::FilteredSettingsTypes");

// /Script/PCG.PCGGraphInstanceToolDataOverrides
// Kind: ScriptStruct; super: none
struct FPCGGraphInstanceToolDataOverrides
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t ToolTip[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsPreset; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGGraphInstanceToolDataOverrides, DisplayName) == 0, "Offset mismatch for FPCGGraphInstanceToolDataOverrides::DisplayName");
static_assert(offsetof(FPCGGraphInstanceToolDataOverrides, ToolTip) == 16, "Offset mismatch for FPCGGraphInstanceToolDataOverrides::ToolTip");
static_assert(offsetof(FPCGGraphInstanceToolDataOverrides, bIsPreset) == 32, "Offset mismatch for FPCGGraphInstanceToolDataOverrides::bIsPreset");

// /Script/PCG.PCGGraphTask
// Kind: ScriptStruct; super: none
struct FPCGGraphTask
{
public:
    TArray<void*> Inputs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ElementSource; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t NodePtr[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    void* CookedSettings; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint64_t NodeId; // 0x0040 (Size: 0x8, Type: UInt64Property)
    std::uint64_t CompiledTaskId; // 0x0048 (Size: 0x8, Type: UInt64Property)
    std::uint64_t ParentId; // 0x0050 (Size: 0x8, Type: UInt64Property)
    std::uint8_t PinDependency[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::int32_t StackIndex; // 0x0068 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGGraphTask, Inputs) == 0, "Offset mismatch for FPCGGraphTask::Inputs");
static_assert(offsetof(FPCGGraphTask, ElementSource) == 16, "Offset mismatch for FPCGGraphTask::ElementSource");
static_assert(offsetof(FPCGGraphTask, NodePtr) == 24, "Offset mismatch for FPCGGraphTask::NodePtr");
static_assert(offsetof(FPCGGraphTask, CookedSettings) == 56, "Offset mismatch for FPCGGraphTask::CookedSettings");
static_assert(offsetof(FPCGGraphTask, NodeId) == 64, "Offset mismatch for FPCGGraphTask::NodeId");
static_assert(offsetof(FPCGGraphTask, CompiledTaskId) == 72, "Offset mismatch for FPCGGraphTask::CompiledTaskId");
static_assert(offsetof(FPCGGraphTask, ParentId) == 80, "Offset mismatch for FPCGGraphTask::ParentId");
static_assert(offsetof(FPCGGraphTask, PinDependency) == 88, "Offset mismatch for FPCGGraphTask::PinDependency");
static_assert(offsetof(FPCGGraphTask, StackIndex) == 104, "Offset mismatch for FPCGGraphTask::StackIndex");

// /Script/PCG.PCGGraphTaskInput
// Kind: ScriptStruct; super: none
struct FPCGGraphTaskInput
{
public:
    std::uint64_t TaskID; // 0x0000 (Size: 0x8, Type: UInt64Property)
    std::uint8_t UpstreamPin[0x30]; // 0x0008 (Size: 0x30, Type: OptionalProperty)
    std::uint8_t DownstreamPin[0x30]; // 0x0038 (Size: 0x30, Type: OptionalProperty)
    std::uint8_t bProvideData; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUsedMultipleTimes; // 0x0069 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGGraphTaskInput, TaskID) == 0, "Offset mismatch for FPCGGraphTaskInput::TaskID");
static_assert(offsetof(FPCGGraphTaskInput, UpstreamPin) == 8, "Offset mismatch for FPCGGraphTaskInput::UpstreamPin");
static_assert(offsetof(FPCGGraphTaskInput, DownstreamPin) == 56, "Offset mismatch for FPCGGraphTaskInput::DownstreamPin");
static_assert(offsetof(FPCGGraphTaskInput, bProvideData) == 104, "Offset mismatch for FPCGGraphTaskInput::bProvideData");
static_assert(offsetof(FPCGGraphTaskInput, bIsUsedMultipleTimes) == 105, "Offset mismatch for FPCGGraphTaskInput::bIsUsedMultipleTimes");

// /Script/PCG.PCGGraphTasks
// Kind: ScriptStruct; super: none
struct FPCGGraphTasks
{
public:
    TArray<void*> GraphTasks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGGraphTasks, GraphTasks) == 0, "Offset mismatch for FPCGGraphTasks::GraphTasks");

// /Script/PCG.PCGGraphToolData
// Kind: ScriptStruct; super: none
struct FPCGGraphToolData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t ToolTip[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    TArray<void*> CompatibleToolTags; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* InitialActorClassToSpawn; // 0x0038 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NewActorLabel[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsPreset; // 0x0044 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGGraphToolData, DisplayName) == 8, "Offset mismatch for FPCGGraphToolData::DisplayName");
static_assert(offsetof(FPCGGraphToolData, ToolTip) == 24, "Offset mismatch for FPCGGraphToolData::ToolTip");
static_assert(offsetof(FPCGGraphToolData, CompatibleToolTags) == 40, "Offset mismatch for FPCGGraphToolData::CompatibleToolTags");
static_assert(offsetof(FPCGGraphToolData, InitialActorClassToSpawn) == 56, "Offset mismatch for FPCGGraphToolData::InitialActorClassToSpawn");
static_assert(offsetof(FPCGGraphToolData, NewActorLabel) == 64, "Offset mismatch for FPCGGraphToolData::NewActorLabel");
static_assert(offsetof(FPCGGraphToolData, bIsPreset) == 68, "Offset mismatch for FPCGGraphToolData::bIsPreset");

// /Script/PCG.PCGGridCellDescriptor
// Kind: ScriptStruct; super: none
struct FPCGGridCellDescriptor
{
public:
    std::uint8_t Descriptor[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    std::uint8_t GridCoords[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGGridCellDescriptor, Descriptor) == 0, "Offset mismatch for FPCGGridCellDescriptor::Descriptor");
static_assert(offsetof(FPCGGridCellDescriptor, GridCoords) == 20, "Offset mismatch for FPCGGridCellDescriptor::GridCoords");

// /Script/PCG.PCGGridDescriptor
// Kind: ScriptStruct; super: none
struct FPCGGridDescriptor
{
public:
    std::uint32_t GridSize; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bIs2DGrid; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRuntime; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    std::uint32_t RuntimeHash; // 0x0008 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FPCGGridDescriptor, GridSize) == 0, "Offset mismatch for FPCGGridDescriptor::GridSize");
static_assert(offsetof(FPCGGridDescriptor, bIs2DGrid) == 4, "Offset mismatch for FPCGGridDescriptor::bIs2DGrid");
static_assert(offsetof(FPCGGridDescriptor, bIsRuntime) == 5, "Offset mismatch for FPCGGridDescriptor::bIsRuntime");
static_assert(offsetof(FPCGGridDescriptor, RuntimeHash) == 8, "Offset mismatch for FPCGGridDescriptor::RuntimeHash");

// /Script/PCG.PCGHLODSettings
// Kind: ScriptStruct; super: none
struct FPCGHLODSettings
{
public:
    std::uint8_t HLODSourceType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* HLODLayer; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGHLODSettings, HLODSourceType) == 0, "Offset mismatch for FPCGHLODSettings::HLODSourceType");
static_assert(offsetof(FPCGHLODSettings, HLODLayer) == 8, "Offset mismatch for FPCGHLODSettings::HLODLayer");

// /Script/PCG.PCGInitializeFromDataParams
// Kind: ScriptStruct; super: none
struct FPCGInitializeFromDataParams
{
public:
    void* Source; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SourceOverride; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInheritMetadata; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInheritAttributes; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInheritSpatialData; // 0x0012 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGInitializeFromDataParams, Source) == 0, "Offset mismatch for FPCGInitializeFromDataParams::Source");
static_assert(offsetof(FPCGInitializeFromDataParams, SourceOverride) == 8, "Offset mismatch for FPCGInitializeFromDataParams::SourceOverride");
static_assert(offsetof(FPCGInitializeFromDataParams, bInheritMetadata) == 16, "Offset mismatch for FPCGInitializeFromDataParams::bInheritMetadata");
static_assert(offsetof(FPCGInitializeFromDataParams, bInheritAttributes) == 17, "Offset mismatch for FPCGInitializeFromDataParams::bInheritAttributes");
static_assert(offsetof(FPCGInitializeFromDataParams, bInheritSpatialData) == 18, "Offset mismatch for FPCGInitializeFromDataParams::bInheritSpatialData");

// /Script/PCG.PCGInlineConstantState
// Kind: ScriptStruct; super: none
struct FPCGInlineConstantState
{
public:
    TMap<void*, void*> DefaultValueMap; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t DefaultValues[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGInlineConstantState, DefaultValueMap) == 0, "Offset mismatch for FPCGInlineConstantState::DefaultValueMap");
static_assert(offsetof(FPCGInlineConstantState, DefaultValues) == 16, "Offset mismatch for FPCGInlineConstantState::DefaultValues");

// /Script/PCG.PCGInteractiveToolDataContainer
// Kind: ScriptStruct; super: none
struct FPCGInteractiveToolDataContainer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> ToolData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGInteractiveToolDataContainer, ToolData) == 8, "Offset mismatch for FPCGInteractiveToolDataContainer::ToolData");

// /Script/PCG.PCGInteractiveToolWorkingBaseData
// Kind: ScriptStruct; super: none
struct FPCGInteractiveToolWorkingBaseData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName WorkingDataIdentifier; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPCGInteractiveToolWorkingBaseData, WorkingDataIdentifier) == 8, "Offset mismatch for FPCGInteractiveToolWorkingBaseData::WorkingDataIdentifier");

// /Script/PCG.PCGInteractiveToolWorkingData
// Kind: ScriptStruct; super: PCGInteractiveToolWorkingBaseData
struct FPCGInteractiveToolWorkingData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName WorkingDataIdentifier; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPCGInteractiveToolWorkingData, WorkingDataIdentifier) == 8, "Offset mismatch for FPCGInteractiveToolWorkingData::WorkingDataIdentifier");

// /Script/PCG.PCGInteractiveToolWorkingDataContext
// Kind: ScriptStruct; super: none
struct FPCGInteractiveToolWorkingDataContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGInteractiveToolWorkingDataGeneratedResources
// Kind: ScriptStruct; super: none
struct FPCGInteractiveToolWorkingDataGeneratedResources
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGInteractiveToolWorkingData_Actors
// Kind: ScriptStruct; super: PCGInteractiveToolWorkingData
struct FPCGInteractiveToolWorkingData_Actors
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* SelectedActorsData; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGInteractiveToolWorkingData_Actors, SelectedActorsData) == 16, "Offset mismatch for FPCGInteractiveToolWorkingData_Actors::SelectedActorsData");

// /Script/PCG.PCGInteractiveToolWorkingData_PointArrayData
// Kind: ScriptStruct; super: PCGInteractiveToolWorkingData
struct FPCGInteractiveToolWorkingData_PointArrayData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* GeneratedPointData; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGInteractiveToolWorkingData_PointArrayData, GeneratedPointData) == 16, "Offset mismatch for FPCGInteractiveToolWorkingData_PointArrayData::GeneratedPointData");

// /Script/PCG.PCGInteractiveToolWorkingData_Spline
// Kind: ScriptStruct; super: PCGInteractiveToolWorkingData
struct FPCGInteractiveToolWorkingData_Spline
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TSoftObjectPtr<void> SplineComponent; // 0x0010 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGInteractiveToolWorkingData_Spline, SplineComponent) == 16, "Offset mismatch for FPCGInteractiveToolWorkingData_Spline::SplineComponent");

// /Script/PCG.PCGInteractiveToolWorkingData_SplineSurface
// Kind: ScriptStruct; super: PCGInteractiveToolWorkingData_Spline
struct FPCGInteractiveToolWorkingData_SplineSurface
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TSoftObjectPtr<void> SplineComponent; // 0x0010 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGInteractiveToolWorkingData_SplineSurface, SplineComponent) == 16, "Offset mismatch for FPCGInteractiveToolWorkingData_SplineSurface::SplineComponent");

// /Script/PCG.PCGInteractiveToolWorkingData_Volume
// Kind: ScriptStruct; super: PCGInteractiveToolWorkingData
struct FPCGInteractiveToolWorkingData_Volume
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* Volume; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BrushComponent[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> BoxComponent; // 0x0038 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGInteractiveToolWorkingData_Volume, Volume) == 16, "Offset mismatch for FPCGInteractiveToolWorkingData_Volume::Volume");
static_assert(offsetof(FPCGInteractiveToolWorkingData_Volume, BrushComponent) == 24, "Offset mismatch for FPCGInteractiveToolWorkingData_Volume::BrushComponent");
static_assert(offsetof(FPCGInteractiveToolWorkingData_Volume, BoxComponent) == 56, "Offset mismatch for FPCGInteractiveToolWorkingData_Volume::BoxComponent");

// /Script/PCG.PCGKernelAttributeKey
// Kind: ScriptStruct; super: none
struct FPCGKernelAttributeKey
{
public:
    std::uint8_t Identifier[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t Name[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGKernelAttributeKey, Identifier) == 0, "Offset mismatch for FPCGKernelAttributeKey::Identifier");
static_assert(offsetof(FPCGKernelAttributeKey, Type) == 16, "Offset mismatch for FPCGKernelAttributeKey::Type");
static_assert(offsetof(FPCGKernelAttributeKey, Name) == 24, "Offset mismatch for FPCGKernelAttributeKey::Name");

// /Script/PCG.PCGKernelAttributeKeyList
// Kind: ScriptStruct; super: none
struct FPCGKernelAttributeKeyList
{
public:
    TArray<void*> Keys; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGKernelAttributeKeyList, Keys) == 0, "Offset mismatch for FPCGKernelAttributeKeyList::Keys");

// /Script/PCG.PCGKernelAttributeTable
// Kind: ScriptStruct; super: none
struct FPCGKernelAttributeTable
{
public:
    TArray<void*> AttributeTable; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGKernelAttributeTable, AttributeTable) == 0, "Offset mismatch for FPCGKernelAttributeTable::AttributeTable");

// /Script/PCG.PCGKernelLogEntry
// Kind: ScriptStruct; super: none
struct FPCGKernelLogEntry
{
public:
    std::uint8_t Message[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Verbosity; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGKernelLogEntry, Message) == 0, "Offset mismatch for FPCGKernelLogEntry::Message");
static_assert(offsetof(FPCGKernelLogEntry, Verbosity) == 16, "Offset mismatch for FPCGKernelLogEntry::Verbosity");

// /Script/PCG.PCGKernelOverridableParam
// Kind: ScriptStruct; super: none
struct FPCGKernelOverridableParam
{
public:
    FName Label; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> PropertiesNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequiresGPUReadback; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPropertyOverriddenByPin; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UnderlyingType; // 0x001A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGKernelOverridableParam, Label) == 0, "Offset mismatch for FPCGKernelOverridableParam::Label");
static_assert(offsetof(FPCGKernelOverridableParam, PropertiesNames) == 8, "Offset mismatch for FPCGKernelOverridableParam::PropertiesNames");
static_assert(offsetof(FPCGKernelOverridableParam, bRequiresGPUReadback) == 24, "Offset mismatch for FPCGKernelOverridableParam::bRequiresGPUReadback");
static_assert(offsetof(FPCGKernelOverridableParam, bIsPropertyOverriddenByPin) == 25, "Offset mismatch for FPCGKernelOverridableParam::bIsPropertyOverriddenByPin");
static_assert(offsetof(FPCGKernelOverridableParam, UnderlyingType) == 26, "Offset mismatch for FPCGKernelOverridableParam::UnderlyingType");

// /Script/PCG.PCGKernelPin
// Kind: ScriptStruct; super: none
struct FPCGKernelPin
{
public:
    std::int32_t KernelIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t PinLabel[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsInput; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGKernelPin, KernelIndex) == 0, "Offset mismatch for FPCGKernelPin::KernelIndex");
static_assert(offsetof(FPCGKernelPin, PinLabel) == 4, "Offset mismatch for FPCGKernelPin::PinLabel");
static_assert(offsetof(FPCGKernelPin, bIsInput) == 8, "Offset mismatch for FPCGKernelPin::bIsInput");

// /Script/PCG.PCGLandscapeDataProps
// Kind: ScriptStruct; super: none
struct FPCGLandscapeDataProps
{
public:
    std::uint8_t bGetHeightOnly; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetLayerWeights; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetActorReference; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetPhysicalMaterial; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetComponentCoordinates; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSampleVirtualTextures; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSampleVirtualTextureNormals; // 0x0006 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGLandscapeDataProps, bGetHeightOnly) == 0, "Offset mismatch for FPCGLandscapeDataProps::bGetHeightOnly");
static_assert(offsetof(FPCGLandscapeDataProps, bGetLayerWeights) == 1, "Offset mismatch for FPCGLandscapeDataProps::bGetLayerWeights");
static_assert(offsetof(FPCGLandscapeDataProps, bGetActorReference) == 2, "Offset mismatch for FPCGLandscapeDataProps::bGetActorReference");
static_assert(offsetof(FPCGLandscapeDataProps, bGetPhysicalMaterial) == 3, "Offset mismatch for FPCGLandscapeDataProps::bGetPhysicalMaterial");
static_assert(offsetof(FPCGLandscapeDataProps, bGetComponentCoordinates) == 4, "Offset mismatch for FPCGLandscapeDataProps::bGetComponentCoordinates");
static_assert(offsetof(FPCGLandscapeDataProps, bSampleVirtualTextures) == 5, "Offset mismatch for FPCGLandscapeDataProps::bSampleVirtualTextures");
static_assert(offsetof(FPCGLandscapeDataProps, bSampleVirtualTextureNormals) == 6, "Offset mismatch for FPCGLandscapeDataProps::bSampleVirtualTextureNormals");

// /Script/PCG.PCGLandscapeLayerWeight
// Kind: ScriptStruct; super: none
struct FPCGLandscapeLayerWeight
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPCGLandscapeLayerWeight, Name) == 0, "Offset mismatch for FPCGLandscapeLayerWeight::Name");
static_assert(offsetof(FPCGLandscapeLayerWeight, Weight) == 4, "Offset mismatch for FPCGLandscapeLayerWeight::Weight");

// /Script/PCG.PCGManagedResourceContainer
// Kind: ScriptStruct; super: none
struct FPCGManagedResourceContainer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> GeneratedResources; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGManagedResourceContainer, GeneratedResources) == 8, "Offset mismatch for FPCGManagedResourceContainer::GeneratedResources");

// /Script/PCG.PCGMatchAndSetByAttributeEntry
// Kind: ScriptStruct; super: none
struct FPCGMatchAndSetByAttributeEntry
{
public:
    std::uint8_t ValueToMatch[0x160]; // 0x0000 (Size: 0x160, Type: StructProperty)
    std::uint8_t Value[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGMatchAndSetByAttributeEntry, ValueToMatch) == 0, "Offset mismatch for FPCGMatchAndSetByAttributeEntry::ValueToMatch");
static_assert(offsetof(FPCGMatchAndSetByAttributeEntry, Value) == 352, "Offset mismatch for FPCGMatchAndSetByAttributeEntry::Value");

// /Script/PCG.PCGMatchAndSetWeightedByCategoryEntryList
// Kind: ScriptStruct; super: none
struct FPCGMatchAndSetWeightedByCategoryEntryList
{
public:
    std::uint8_t CategoryValue[0x160]; // 0x0000 (Size: 0x160, Type: StructProperty)
    std::uint8_t bIsDefault; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0161
    TArray<void*> WeightedEntries; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGMatchAndSetWeightedByCategoryEntryList, CategoryValue) == 0, "Offset mismatch for FPCGMatchAndSetWeightedByCategoryEntryList::CategoryValue");
static_assert(offsetof(FPCGMatchAndSetWeightedByCategoryEntryList, bIsDefault) == 352, "Offset mismatch for FPCGMatchAndSetWeightedByCategoryEntryList::bIsDefault");
static_assert(offsetof(FPCGMatchAndSetWeightedByCategoryEntryList, WeightedEntries) == 360, "Offset mismatch for FPCGMatchAndSetWeightedByCategoryEntryList::WeightedEntries");

// /Script/PCG.PCGMatchAndSetWeightedEntry
// Kind: ScriptStruct; super: none
struct FPCGMatchAndSetWeightedEntry
{
public:
    std::uint8_t Value[0x160]; // 0x0000 (Size: 0x160, Type: StructProperty)
    std::int32_t Weight; // 0x0160 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGMatchAndSetWeightedEntry, Value) == 0, "Offset mismatch for FPCGMatchAndSetWeightedEntry::Value");
static_assert(offsetof(FPCGMatchAndSetWeightedEntry, Weight) == 352, "Offset mismatch for FPCGMatchAndSetWeightedEntry::Weight");

// /Script/PCG.PCGMeshDescriptorWrapperBase
// Kind: ScriptStruct; super: none
struct FPCGMeshDescriptorWrapperBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGMeshInstanceList
// Kind: ScriptStruct; super: none
struct FPCGMeshInstanceList
{
public:
    std::uint8_t DescriptorWrapper[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> Instances; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0020
    TWeakObjectPtr<void> PointData; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> InstancesIndices; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CustomPrimitiveData; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimationIndices; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGMeshInstanceList, DescriptorWrapper) == 0, "Offset mismatch for FPCGMeshInstanceList::DescriptorWrapper");
static_assert(offsetof(FPCGMeshInstanceList, Instances) == 16, "Offset mismatch for FPCGMeshInstanceList::Instances");
static_assert(offsetof(FPCGMeshInstanceList, PointData) == 40, "Offset mismatch for FPCGMeshInstanceList::PointData");
static_assert(offsetof(FPCGMeshInstanceList, InstancesIndices) == 48, "Offset mismatch for FPCGMeshInstanceList::InstancesIndices");
static_assert(offsetof(FPCGMeshInstanceList, CustomPrimitiveData) == 64, "Offset mismatch for FPCGMeshInstanceList::CustomPrimitiveData");
static_assert(offsetof(FPCGMeshInstanceList, AnimationIndices) == 80, "Offset mismatch for FPCGMeshInstanceList::AnimationIndices");

// /Script/PCG.PCGMeshSelectorByAttributeStruct
// Kind: ScriptStruct; super: PCGMeshSelectorStructBase
struct FPCGMeshSelectorByAttributeStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MeshAttribute[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t TemplateDescriptor[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseAttributeMaterialOverrides; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    TArray<void*> MaterialOverrideAttributes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SequenceIndexAttribute[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGMeshSelectorByAttributeStruct, MeshAttribute) == 8, "Offset mismatch for FPCGMeshSelectorByAttributeStruct::MeshAttribute");
static_assert(offsetof(FPCGMeshSelectorByAttributeStruct, TemplateDescriptor) == 56, "Offset mismatch for FPCGMeshSelectorByAttributeStruct::TemplateDescriptor");
static_assert(offsetof(FPCGMeshSelectorByAttributeStruct, bUseAttributeMaterialOverrides) == 72, "Offset mismatch for FPCGMeshSelectorByAttributeStruct::bUseAttributeMaterialOverrides");
static_assert(offsetof(FPCGMeshSelectorByAttributeStruct, MaterialOverrideAttributes) == 80, "Offset mismatch for FPCGMeshSelectorByAttributeStruct::MaterialOverrideAttributes");
static_assert(offsetof(FPCGMeshSelectorByAttributeStruct, SequenceIndexAttribute) == 96, "Offset mismatch for FPCGMeshSelectorByAttributeStruct::SequenceIndexAttribute");

// /Script/PCG.PCGMeshSelectorPrimitiveDataStruct
// Kind: ScriptStruct; super: PCGMeshSelectorStructBase
struct FPCGMeshSelectorPrimitiveDataStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TemplateDescriptor[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t PrimitiveIndexAttribute[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t MeshAttribute[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    TArray<void*> MaterialOverrideAttributes; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PrimitiveOverrideAttributes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CustomPrimitiveDataAttributes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGMeshSelectorPrimitiveDataStruct, TemplateDescriptor) == 8, "Offset mismatch for FPCGMeshSelectorPrimitiveDataStruct::TemplateDescriptor");
static_assert(offsetof(FPCGMeshSelectorPrimitiveDataStruct, PrimitiveIndexAttribute) == 24, "Offset mismatch for FPCGMeshSelectorPrimitiveDataStruct::PrimitiveIndexAttribute");
static_assert(offsetof(FPCGMeshSelectorPrimitiveDataStruct, MeshAttribute) == 28, "Offset mismatch for FPCGMeshSelectorPrimitiveDataStruct::MeshAttribute");
static_assert(offsetof(FPCGMeshSelectorPrimitiveDataStruct, MaterialOverrideAttributes) == 32, "Offset mismatch for FPCGMeshSelectorPrimitiveDataStruct::MaterialOverrideAttributes");
static_assert(offsetof(FPCGMeshSelectorPrimitiveDataStruct, PrimitiveOverrideAttributes) == 48, "Offset mismatch for FPCGMeshSelectorPrimitiveDataStruct::PrimitiveOverrideAttributes");
static_assert(offsetof(FPCGMeshSelectorPrimitiveDataStruct, CustomPrimitiveDataAttributes) == 64, "Offset mismatch for FPCGMeshSelectorPrimitiveDataStruct::CustomPrimitiveDataAttributes");

// /Script/PCG.PCGMeshSelectorStructBase
// Kind: ScriptStruct; super: none
struct FPCGMeshSelectorStructBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGMeshSelectorWeightedByCategoryStruct
// Kind: ScriptStruct; super: PCGMeshSelectorStructBase
struct FPCGMeshSelectorWeightedByCategoryStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName CategoryAttribute; // 0x0008 (Size: 0x8, Type: NameProperty)
    TArray<void*> Entries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseAttributeMaterialOverrides; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    TArray<void*> MaterialOverrideAttributes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGMeshSelectorWeightedByCategoryStruct, CategoryAttribute) == 8, "Offset mismatch for FPCGMeshSelectorWeightedByCategoryStruct::CategoryAttribute");
static_assert(offsetof(FPCGMeshSelectorWeightedByCategoryStruct, Entries) == 16, "Offset mismatch for FPCGMeshSelectorWeightedByCategoryStruct::Entries");
static_assert(offsetof(FPCGMeshSelectorWeightedByCategoryStruct, bUseAttributeMaterialOverrides) == 32, "Offset mismatch for FPCGMeshSelectorWeightedByCategoryStruct::bUseAttributeMaterialOverrides");
static_assert(offsetof(FPCGMeshSelectorWeightedByCategoryStruct, MaterialOverrideAttributes) == 40, "Offset mismatch for FPCGMeshSelectorWeightedByCategoryStruct::MaterialOverrideAttributes");

// /Script/PCG.PCGMeshSelectorWeightedEntry
// Kind: ScriptStruct; super: none
struct FPCGMeshSelectorWeightedEntry
{
public:
    std::uint8_t Descriptor[0x290]; // 0x0000 (Size: 0x290, Type: StructProperty)
    std::int32_t Weight; // 0x0290 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGMeshSelectorWeightedEntry, Descriptor) == 0, "Offset mismatch for FPCGMeshSelectorWeightedEntry::Descriptor");
static_assert(offsetof(FPCGMeshSelectorWeightedEntry, Weight) == 656, "Offset mismatch for FPCGMeshSelectorWeightedEntry::Weight");

// /Script/PCG.PCGMeshSelectorWeightedStruct
// Kind: ScriptStruct; super: PCGMeshSelectorStructBase
struct FPCGMeshSelectorWeightedStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> MeshEntries; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseAttributeMaterialOverrides; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    TArray<void*> MaterialOverrideAttributes; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGMeshSelectorWeightedStruct, MeshEntries) == 8, "Offset mismatch for FPCGMeshSelectorWeightedStruct::MeshEntries");
static_assert(offsetof(FPCGMeshSelectorWeightedStruct, bUseAttributeMaterialOverrides) == 24, "Offset mismatch for FPCGMeshSelectorWeightedStruct::bUseAttributeMaterialOverrides");
static_assert(offsetof(FPCGMeshSelectorWeightedStruct, MaterialOverrideAttributes) == 32, "Offset mismatch for FPCGMeshSelectorWeightedStruct::MaterialOverrideAttributes");

// /Script/PCG.PCGMeshSelectorWeightedStructEntry
// Kind: ScriptStruct; super: none
struct FPCGMeshSelectorWeightedStructEntry
{
public:
    std::uint8_t Descriptor[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t Weight; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGMeshSelectorWeightedStructEntry, Descriptor) == 0, "Offset mismatch for FPCGMeshSelectorWeightedStructEntry::Descriptor");
static_assert(offsetof(FPCGMeshSelectorWeightedStructEntry, Weight) == 16, "Offset mismatch for FPCGMeshSelectorWeightedStructEntry::Weight");

// /Script/PCG.PCGMeshSpawnerContextBase
// Kind: ScriptStruct; super: PCGContext
struct FPCGMeshSpawnerContextBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGMetadataAttributeDesc
// Kind: ScriptStruct; super: none
struct FPCGMetadataAttributeDesc
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ValueType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TArray<void*> ContainerTypes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* ValueTypeObject; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t KeyType; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    void* KeyTypeObject; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGMetadataAttributeDesc, Name) == 0, "Offset mismatch for FPCGMetadataAttributeDesc::Name");
static_assert(offsetof(FPCGMetadataAttributeDesc, ValueType) == 4, "Offset mismatch for FPCGMetadataAttributeDesc::ValueType");
static_assert(offsetof(FPCGMetadataAttributeDesc, ContainerTypes) == 8, "Offset mismatch for FPCGMetadataAttributeDesc::ContainerTypes");
static_assert(offsetof(FPCGMetadataAttributeDesc, ValueTypeObject) == 24, "Offset mismatch for FPCGMetadataAttributeDesc::ValueTypeObject");
static_assert(offsetof(FPCGMetadataAttributeDesc, KeyType) == 32, "Offset mismatch for FPCGMetadataAttributeDesc::KeyType");
static_assert(offsetof(FPCGMetadataAttributeDesc, KeyTypeObject) == 40, "Offset mismatch for FPCGMetadataAttributeDesc::KeyTypeObject");

// /Script/PCG.PCGMetadataDomainHandle
// Kind: ScriptStruct; super: none
struct FPCGMetadataDomainHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGMetadataDomainID
// Kind: ScriptStruct; super: none
struct FPCGMetadataDomainID
{
public:
    std::uint8_t Flag; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t CustomFlag; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGMetadataDomainID, Flag) == 0, "Offset mismatch for FPCGMetadataDomainID::Flag");
static_assert(offsetof(FPCGMetadataDomainID, CustomFlag) == 4, "Offset mismatch for FPCGMetadataDomainID::CustomFlag");

// /Script/PCG.PCGMetadataTypesConstantStruct
// Kind: ScriptStruct; super: none
struct FPCGMetadataTypesConstantStruct
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t StringMode; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0005
    float FloatValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t Int32Value; // 0x000C (Size: 0x4, Type: IntProperty)
    double DoubleValue; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::int64_t IntValue; // 0x0018 (Size: 0x8, Type: Int64Property)
    std::uint8_t Vector2Value[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t VectorValue[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t Vector4Value[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    std::uint8_t QuatValue[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t TransformValue[0x60]; // 0x0090 (Size: 0x60, Type: StructProperty)
    FString StringValue; // 0x00F0 (Size: 0x10, Type: StrProperty)
    std::uint8_t BoolValue; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0101
    std::uint8_t RotatorValue[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    FName NameValue; // 0x0120 (Size: 0x8, Type: NameProperty)
    std::uint8_t SoftClassPathValue[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t SoftObjectPathValue[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowsTypeChange; // 0x0158 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGMetadataTypesConstantStruct, Type) == 0, "Offset mismatch for FPCGMetadataTypesConstantStruct::Type");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, StringMode) == 4, "Offset mismatch for FPCGMetadataTypesConstantStruct::StringMode");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, FloatValue) == 8, "Offset mismatch for FPCGMetadataTypesConstantStruct::FloatValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, Int32Value) == 12, "Offset mismatch for FPCGMetadataTypesConstantStruct::Int32Value");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, DoubleValue) == 16, "Offset mismatch for FPCGMetadataTypesConstantStruct::DoubleValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, IntValue) == 24, "Offset mismatch for FPCGMetadataTypesConstantStruct::IntValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, Vector2Value) == 32, "Offset mismatch for FPCGMetadataTypesConstantStruct::Vector2Value");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, VectorValue) == 48, "Offset mismatch for FPCGMetadataTypesConstantStruct::VectorValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, Vector4Value) == 80, "Offset mismatch for FPCGMetadataTypesConstantStruct::Vector4Value");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, QuatValue) == 112, "Offset mismatch for FPCGMetadataTypesConstantStruct::QuatValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, TransformValue) == 144, "Offset mismatch for FPCGMetadataTypesConstantStruct::TransformValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, StringValue) == 240, "Offset mismatch for FPCGMetadataTypesConstantStruct::StringValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, BoolValue) == 256, "Offset mismatch for FPCGMetadataTypesConstantStruct::BoolValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, RotatorValue) == 264, "Offset mismatch for FPCGMetadataTypesConstantStruct::RotatorValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, NameValue) == 288, "Offset mismatch for FPCGMetadataTypesConstantStruct::NameValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, SoftClassPathValue) == 296, "Offset mismatch for FPCGMetadataTypesConstantStruct::SoftClassPathValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, SoftObjectPathValue) == 320, "Offset mismatch for FPCGMetadataTypesConstantStruct::SoftObjectPathValue");
static_assert(offsetof(FPCGMetadataTypesConstantStruct, bAllowsTypeChange) == 344, "Offset mismatch for FPCGMetadataTypesConstantStruct::bAllowsTypeChange");

// /Script/PCG.PCGObjectPropertyOverrideDescription
// Kind: ScriptStruct; super: none
struct FPCGObjectPropertyOverrideDescription
{
public:
    std::uint8_t InputSource[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    FString PropertyTarget; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPCGObjectPropertyOverrideDescription, InputSource) == 0, "Offset mismatch for FPCGObjectPropertyOverrideDescription::InputSource");
static_assert(offsetof(FPCGObjectPropertyOverrideDescription, PropertyTarget) == 48, "Offset mismatch for FPCGObjectPropertyOverrideDescription::PropertyTarget");

// /Script/PCG.PCGOverrideInstancedPropertyBag
// Kind: ScriptStruct; super: none
struct FPCGOverrideInstancedPropertyBag
{
public:
    std::uint8_t Parameters[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TSet<void*> PropertiesIDsOverridden; // 0x0010 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FPCGOverrideInstancedPropertyBag, Parameters) == 0, "Offset mismatch for FPCGOverrideInstancedPropertyBag::Parameters");
static_assert(offsetof(FPCGOverrideInstancedPropertyBag, PropertiesIDsOverridden) == 16, "Offset mismatch for FPCGOverrideInstancedPropertyBag::PropertiesIDsOverridden");

// /Script/PCG.PCGPackedCustomData
// Kind: ScriptStruct; super: none
struct FPCGPackedCustomData
{
public:
    std::int32_t NumCustomDataFloats; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> CustomData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGPackedCustomData, NumCustomDataFloats) == 0, "Offset mismatch for FPCGPackedCustomData::NumCustomDataFloats");
static_assert(offsetof(FPCGPackedCustomData, CustomData) == 8, "Offset mismatch for FPCGPackedCustomData::CustomData");

// /Script/PCG.PCGParsedAttributeFunction
// Kind: ScriptStruct; super: none
struct FPCGParsedAttributeFunction
{
public:
    FString PinLabel; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString FunctionName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int64_t AttributeType; // 0x0020 (Size: 0x8, Type: Int64Property)
    FString AttributeName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::int32_t MatchBeginning; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGParsedAttributeFunction, PinLabel) == 0, "Offset mismatch for FPCGParsedAttributeFunction::PinLabel");
static_assert(offsetof(FPCGParsedAttributeFunction, FunctionName) == 16, "Offset mismatch for FPCGParsedAttributeFunction::FunctionName");
static_assert(offsetof(FPCGParsedAttributeFunction, AttributeType) == 32, "Offset mismatch for FPCGParsedAttributeFunction::AttributeType");
static_assert(offsetof(FPCGParsedAttributeFunction, AttributeName) == 40, "Offset mismatch for FPCGParsedAttributeFunction::AttributeName");
static_assert(offsetof(FPCGParsedAttributeFunction, MatchBeginning) == 56, "Offset mismatch for FPCGParsedAttributeFunction::MatchBeginning");

// /Script/PCG.PCGParsedCopyElementFunction
// Kind: ScriptStruct; super: none
struct FPCGParsedCopyElementFunction
{
public:
    FString SourcePin; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString TargetPin; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPCGParsedCopyElementFunction, SourcePin) == 0, "Offset mismatch for FPCGParsedCopyElementFunction::SourcePin");
static_assert(offsetof(FPCGParsedCopyElementFunction, TargetPin) == 16, "Offset mismatch for FPCGParsedCopyElementFunction::TargetPin");

// /Script/PCG.PCGPartitionActorRecord
// Kind: ScriptStruct; super: none
struct FPCGPartitionActorRecord
{
public:
    std::uint8_t GridGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint32_t GridSize; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint8_t GridCoords[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGPartitionActorRecord, GridGuid) == 0, "Offset mismatch for FPCGPartitionActorRecord::GridGuid");
static_assert(offsetof(FPCGPartitionActorRecord, GridSize) == 16, "Offset mismatch for FPCGPartitionActorRecord::GridSize");
static_assert(offsetof(FPCGPartitionActorRecord, GridCoords) == 20, "Offset mismatch for FPCGPartitionActorRecord::GridCoords");

// /Script/PCG.PCGPerExecutionCacheBounds
// Kind: ScriptStruct; super: PCGPerExecutionCacheData
struct FPCGPerExecutionCacheBounds
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGPerExecutionCacheData
// Kind: ScriptStruct; super: none
struct FPCGPerExecutionCacheData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGPerExecutionCachePCGData
// Kind: ScriptStruct; super: PCGPerExecutionCacheData
struct FPCGPerExecutionCachePCGData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGPinDataLabels
// Kind: ScriptStruct; super: none
struct FPCGPinDataLabels
{
public:
    TMap<void*, void*> PinToDataLabels; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPCGPinDataLabels, PinToDataLabels) == 0, "Offset mismatch for FPCGPinDataLabels::PinToDataLabels");

// /Script/PCG.PCGPinDefaultValueInfo
// Kind: ScriptStruct; super: none
struct FPCGPinDefaultValueInfo
{
public:
    std::uint8_t CurrentType; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGPinDefaultValueInfo, CurrentType) == 0, "Offset mismatch for FPCGPinDefaultValueInfo::CurrentType");

// /Script/PCG.PCGPinDependencyExpression
// Kind: ScriptStruct; super: none
struct FPCGPinDependencyExpression
{
public:
    TArray<void*> Expression; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGPinDependencyExpression, Expression) == 0, "Offset mismatch for FPCGPinDependencyExpression::Expression");

// /Script/PCG.PCGPinProperties
// Kind: ScriptStruct; super: none
struct FPCGPinProperties
{
public:
    std::uint8_t Label[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Usage; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t AllowedTypes[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowMultipleData; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PinStatus; // 0x0021 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInvisiblePin; // 0x0022 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMultipleConnections; // 0x0023 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGPinProperties, Label) == 0, "Offset mismatch for FPCGPinProperties::Label");
static_assert(offsetof(FPCGPinProperties, Usage) == 4, "Offset mismatch for FPCGPinProperties::Usage");
static_assert(offsetof(FPCGPinProperties, AllowedTypes) == 8, "Offset mismatch for FPCGPinProperties::AllowedTypes");
static_assert(offsetof(FPCGPinProperties, bAllowMultipleData) == 32, "Offset mismatch for FPCGPinProperties::bAllowMultipleData");
static_assert(offsetof(FPCGPinProperties, PinStatus) == 33, "Offset mismatch for FPCGPinProperties::PinStatus");
static_assert(offsetof(FPCGPinProperties, bInvisiblePin) == 34, "Offset mismatch for FPCGPinProperties::bInvisiblePin");
static_assert(offsetof(FPCGPinProperties, bAllowMultipleConnections) == 35, "Offset mismatch for FPCGPinProperties::bAllowMultipleConnections");

// /Script/PCG.PCGPinPropertiesGPU
// Kind: ScriptStruct; super: PCGPinProperties
struct FPCGPinPropertiesGPU
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t PropertiesGPU[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGPinPropertiesGPU, PropertiesGPU) == 48, "Offset mismatch for FPCGPinPropertiesGPU::PropertiesGPU");

// /Script/PCG.PCGPinPropertiesGPUStruct
// Kind: ScriptStruct; super: none
struct FPCGPinPropertiesGPUStruct
{
public:
    std::uint8_t InitializationMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> PinsToInititalizeFrom; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DataCountMode; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DataMultiplicity; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001A
    std::int32_t DataCount; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t ElementCountMode; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ElementMultiplicity; // 0x0021 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0022
    std::int32_t ElementCount; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t NumElements2D[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t TextureFormatInheritanceMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextureFormat; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInitializeTextureTransformFromGenerationVolume; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TextureTransformInheritanceMode; // 0x0033 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0xC]; // 0x0034
    std::uint8_t TextureTransform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t TextureFilterInheritanceMode; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextureFilter; // 0x00A1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextureArraySizeInheritanceMode; // 0x00A2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x1]; // 0x00A3
    std::int32_t TextureArraySize; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::int32_t ElementCountMultiplier; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bInitializeToZero; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoInitializeOutput; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t AttributeInheritanceMode; // 0x00AE (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x1]; // 0x00AF
    TArray<void*> CreatedKernelAttributeKeys; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGPinPropertiesGPUStruct, InitializationMode) == 0, "Offset mismatch for FPCGPinPropertiesGPUStruct::InitializationMode");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, PinsToInititalizeFrom) == 8, "Offset mismatch for FPCGPinPropertiesGPUStruct::PinsToInititalizeFrom");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, DataCountMode) == 24, "Offset mismatch for FPCGPinPropertiesGPUStruct::DataCountMode");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, DataMultiplicity) == 25, "Offset mismatch for FPCGPinPropertiesGPUStruct::DataMultiplicity");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, DataCount) == 28, "Offset mismatch for FPCGPinPropertiesGPUStruct::DataCount");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, ElementCountMode) == 32, "Offset mismatch for FPCGPinPropertiesGPUStruct::ElementCountMode");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, ElementMultiplicity) == 33, "Offset mismatch for FPCGPinPropertiesGPUStruct::ElementMultiplicity");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, ElementCount) == 36, "Offset mismatch for FPCGPinPropertiesGPUStruct::ElementCount");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, NumElements2D) == 40, "Offset mismatch for FPCGPinPropertiesGPUStruct::NumElements2D");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, TextureFormatInheritanceMode) == 48, "Offset mismatch for FPCGPinPropertiesGPUStruct::TextureFormatInheritanceMode");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, TextureFormat) == 49, "Offset mismatch for FPCGPinPropertiesGPUStruct::TextureFormat");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, bInitializeTextureTransformFromGenerationVolume) == 50, "Offset mismatch for FPCGPinPropertiesGPUStruct::bInitializeTextureTransformFromGenerationVolume");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, TextureTransformInheritanceMode) == 51, "Offset mismatch for FPCGPinPropertiesGPUStruct::TextureTransformInheritanceMode");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, TextureTransform) == 64, "Offset mismatch for FPCGPinPropertiesGPUStruct::TextureTransform");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, TextureFilterInheritanceMode) == 160, "Offset mismatch for FPCGPinPropertiesGPUStruct::TextureFilterInheritanceMode");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, TextureFilter) == 161, "Offset mismatch for FPCGPinPropertiesGPUStruct::TextureFilter");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, TextureArraySizeInheritanceMode) == 162, "Offset mismatch for FPCGPinPropertiesGPUStruct::TextureArraySizeInheritanceMode");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, TextureArraySize) == 164, "Offset mismatch for FPCGPinPropertiesGPUStruct::TextureArraySize");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, ElementCountMultiplier) == 168, "Offset mismatch for FPCGPinPropertiesGPUStruct::ElementCountMultiplier");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, bInitializeToZero) == 172, "Offset mismatch for FPCGPinPropertiesGPUStruct::bInitializeToZero");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, bAutoInitializeOutput) == 173, "Offset mismatch for FPCGPinPropertiesGPUStruct::bAutoInitializeOutput");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, AttributeInheritanceMode) == 174, "Offset mismatch for FPCGPinPropertiesGPUStruct::AttributeInheritanceMode");
static_assert(offsetof(FPCGPinPropertiesGPUStruct, CreatedKernelAttributeKeys) == 176, "Offset mismatch for FPCGPinPropertiesGPUStruct::CreatedKernelAttributeKeys");

// /Script/PCG.PCGPoint
// Kind: ScriptStruct; super: none
struct FPCGPoint
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    float Density; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0064
    std::uint8_t BoundsMin[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundsMax[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t Color[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    float Steepness; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::int32_t Seed; // 0x00C4 (Size: 0x4, Type: IntProperty)
    std::int64_t MetadataEntry; // 0x00C8 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FPCGPoint, Transform) == 0, "Offset mismatch for FPCGPoint::Transform");
static_assert(offsetof(FPCGPoint, Density) == 96, "Offset mismatch for FPCGPoint::Density");
static_assert(offsetof(FPCGPoint, BoundsMin) == 104, "Offset mismatch for FPCGPoint::BoundsMin");
static_assert(offsetof(FPCGPoint, BoundsMax) == 128, "Offset mismatch for FPCGPoint::BoundsMax");
static_assert(offsetof(FPCGPoint, Color) == 160, "Offset mismatch for FPCGPoint::Color");
static_assert(offsetof(FPCGPoint, Steepness) == 192, "Offset mismatch for FPCGPoint::Steepness");
static_assert(offsetof(FPCGPoint, Seed) == 196, "Offset mismatch for FPCGPoint::Seed");
static_assert(offsetof(FPCGPoint, MetadataEntry) == 200, "Offset mismatch for FPCGPoint::MetadataEntry");

// /Script/PCG.PCGPointArray
// Kind: ScriptStruct; super: none
struct FPCGPointArray
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGPointDataCache
// Kind: ScriptStruct; super: none
struct FPCGPointDataCache
{
public:
    void* CachedPointData; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CachedBoundedPointDataBoxes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedBoundedPointData; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGPointDataCache, CachedPointData) == 0, "Offset mismatch for FPCGPointDataCache::CachedPointData");
static_assert(offsetof(FPCGPointDataCache, CachedBoundedPointDataBoxes) == 8, "Offset mismatch for FPCGPointDataCache::CachedBoundedPointDataBoxes");
static_assert(offsetof(FPCGPointDataCache, CachedBoundedPointData) == 24, "Offset mismatch for FPCGPointDataCache::CachedBoundedPointData");

// /Script/PCG.PCGPointDeletionDelta
// Kind: ScriptStruct; super: PCGPointDeltaBase
struct FPCGPointDeletionDelta
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t OriginalTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Bounds[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGPointDeletionDelta, OriginalTransform) == 16, "Offset mismatch for FPCGPointDeletionDelta::OriginalTransform");
static_assert(offsetof(FPCGPointDeletionDelta, Bounds) == 112, "Offset mismatch for FPCGPointDeletionDelta::Bounds");

// /Script/PCG.PCGPointDeltaBase
// Kind: ScriptStruct; super: PCGDeltaBase
struct FPCGPointDeltaBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t OriginalTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Bounds[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGPointDeltaBase, OriginalTransform) == 16, "Offset mismatch for FPCGPointDeltaBase::OriginalTransform");
static_assert(offsetof(FPCGPointDeltaBase, Bounds) == 112, "Offset mismatch for FPCGPointDeltaBase::Bounds");

// /Script/PCG.PCGPointInputRange
// Kind: ScriptStruct; super: none
struct FPCGPointInputRange
{
public:
    void* PointData; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t RangeStartIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t RangeSize; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGPointInputRange, PointData) == 0, "Offset mismatch for FPCGPointInputRange::PointData");
static_assert(offsetof(FPCGPointInputRange, RangeStartIndex) == 8, "Offset mismatch for FPCGPointInputRange::RangeStartIndex");
static_assert(offsetof(FPCGPointInputRange, RangeSize) == 12, "Offset mismatch for FPCGPointInputRange::RangeSize");

// /Script/PCG.PCGPointInsertionDelta
// Kind: ScriptStruct; super: PCGDeltaBase
struct FPCGPointInsertionDelta
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> InsertedPoints; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGPointInsertionDelta, InsertedPoints) == 8, "Offset mismatch for FPCGPointInsertionDelta::InsertedPoints");

// /Script/PCG.PCGPointOutputRange
// Kind: ScriptStruct; super: none
struct FPCGPointOutputRange
{
public:
    void* PointData; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t RangeStartIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t RangeSize; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGPointOutputRange, PointData) == 0, "Offset mismatch for FPCGPointOutputRange::PointData");
static_assert(offsetof(FPCGPointOutputRange, RangeStartIndex) == 8, "Offset mismatch for FPCGPointOutputRange::RangeStartIndex");
static_assert(offsetof(FPCGPointOutputRange, RangeSize) == 12, "Offset mismatch for FPCGPointOutputRange::RangeSize");

// /Script/PCG.PCGPointTransformDelta
// Kind: ScriptStruct; super: PCGPointDeltaBase
struct FPCGPointTransformDelta
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t TransformOverride[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bOverridePosition; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideRotation; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideScale; // 0x0112 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGPointTransformDelta, TransformOverride) == 176, "Offset mismatch for FPCGPointTransformDelta::TransformOverride");
static_assert(offsetof(FPCGPointTransformDelta, bOverridePosition) == 272, "Offset mismatch for FPCGPointTransformDelta::bOverridePosition");
static_assert(offsetof(FPCGPointTransformDelta, bOverrideRotation) == 273, "Offset mismatch for FPCGPointTransformDelta::bOverrideRotation");
static_assert(offsetof(FPCGPointTransformDelta, bOverrideScale) == 274, "Offset mismatch for FPCGPointTransformDelta::bOverrideScale");

// /Script/PCG.PCGPointTransformOffsetDelta
// Kind: ScriptStruct; super: PCGPointDeltaBase
struct FPCGPointTransformOffsetDelta
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t TransformOffset[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bOffsetPosition; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOffsetRotation; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOffsetScale; // 0x0112 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGPointTransformOffsetDelta, TransformOffset) == 176, "Offset mismatch for FPCGPointTransformOffsetDelta::TransformOffset");
static_assert(offsetof(FPCGPointTransformOffsetDelta, bOffsetPosition) == 272, "Offset mismatch for FPCGPointTransformOffsetDelta::bOffsetPosition");
static_assert(offsetof(FPCGPointTransformOffsetDelta, bOffsetRotation) == 273, "Offset mismatch for FPCGPointTransformOffsetDelta::bOffsetRotation");
static_assert(offsetof(FPCGPointTransformOffsetDelta, bOffsetScale) == 274, "Offset mismatch for FPCGPointTransformOffsetDelta::bOffsetScale");

// /Script/PCG.PCGPolygon2DDataDelta
// Kind: ScriptStruct; super: PCGDeltaBase
struct FPCGPolygon2DDataDelta
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t OriginalStartTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    void* PolygonOverride; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGPolygon2DDataDelta, OriginalStartTransform) == 16, "Offset mismatch for FPCGPolygon2DDataDelta::OriginalStartTransform");
static_assert(offsetof(FPCGPolygon2DDataDelta, PolygonOverride) == 112, "Offset mismatch for FPCGPolygon2DDataDelta::PolygonOverride");

// /Script/PCG.PCGPreConfiguredSettingsInfo
// Kind: ScriptStruct; super: PCGPreconfiguredInfo
struct FPCGPreConfiguredSettingsInfo
{
public:
    std::int32_t PreconfiguredIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FText Label; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FPCGPreConfiguredSettingsInfo, PreconfiguredIndex) == 0, "Offset mismatch for FPCGPreConfiguredSettingsInfo::PreconfiguredIndex");
static_assert(offsetof(FPCGPreConfiguredSettingsInfo, Label) == 8, "Offset mismatch for FPCGPreConfiguredSettingsInfo::Label");

// /Script/PCG.PCGPreconfiguredInfo
// Kind: ScriptStruct; super: none
struct FPCGPreconfiguredInfo
{
public:
    std::int32_t PreconfiguredIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FText Label; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FPCGPreconfiguredInfo, PreconfiguredIndex) == 0, "Offset mismatch for FPCGPreconfiguredInfo::PreconfiguredIndex");
static_assert(offsetof(FPCGPreconfiguredInfo, Label) == 8, "Offset mismatch for FPCGPreconfiguredInfo::Label");

// /Script/PCG.PCGProceduralISMComponentDescriptor
// Kind: ScriptStruct; super: ProceduralISMComponentDescriptor
struct FPCGProceduralISMComponentDescriptor
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> ComponentTags; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGProceduralISMComponentDescriptor, ComponentTags) == 200, "Offset mismatch for FPCGProceduralISMComponentDescriptor::ComponentTags");

// /Script/PCG.PCGProjectionParams
// Kind: ScriptStruct; super: none
struct FPCGProjectionParams
{
public:
    std::uint8_t bProjectPositions; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProjectRotations; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProjectScales; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ColorBlendMode; // 0x0003 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString AttributeList; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t AttributeMode; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AttributeMergeOperation; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TagMergeOperation; // 0x001A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGProjectionParams, bProjectPositions) == 0, "Offset mismatch for FPCGProjectionParams::bProjectPositions");
static_assert(offsetof(FPCGProjectionParams, bProjectRotations) == 1, "Offset mismatch for FPCGProjectionParams::bProjectRotations");
static_assert(offsetof(FPCGProjectionParams, bProjectScales) == 2, "Offset mismatch for FPCGProjectionParams::bProjectScales");
static_assert(offsetof(FPCGProjectionParams, ColorBlendMode) == 3, "Offset mismatch for FPCGProjectionParams::ColorBlendMode");
static_assert(offsetof(FPCGProjectionParams, AttributeList) == 8, "Offset mismatch for FPCGProjectionParams::AttributeList");
static_assert(offsetof(FPCGProjectionParams, AttributeMode) == 24, "Offset mismatch for FPCGProjectionParams::AttributeMode");
static_assert(offsetof(FPCGProjectionParams, AttributeMergeOperation) == 25, "Offset mismatch for FPCGProjectionParams::AttributeMergeOperation");
static_assert(offsetof(FPCGProjectionParams, TagMergeOperation) == 26, "Offset mismatch for FPCGProjectionParams::TagMergeOperation");

// /Script/PCG.PCGPropertyAliases
// Kind: ScriptStruct; super: none
struct FPCGPropertyAliases
{
public:
    TArray<void*> Aliases; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGPropertyAliases, Aliases) == 0, "Offset mismatch for FPCGPropertyAliases::Aliases");

// /Script/PCG.PCGRuntimeGenerationRadii
// Kind: ScriptStruct; super: none
struct FPCGRuntimeGenerationRadii
{
public:
    std::uint8_t RadiusUnbounded[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius400[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius800[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius1600[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius3200[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius6400[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius12800[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius25600[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius51200[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius102400[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius204800[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t CleanupRadiusScalar[0x30]; // 0x01B8 (Size: 0x30, Type: StructProperty)
    double GenerationRadius; // 0x01E8 (Size: 0x8, Type: DoubleProperty)
    double GenerationRadius400; // 0x01F0 (Size: 0x8, Type: DoubleProperty)
    double GenerationRadius800; // 0x01F8 (Size: 0x8, Type: DoubleProperty)
    double GenerationRadius1600; // 0x0200 (Size: 0x8, Type: DoubleProperty)
    double GenerationRadius3200; // 0x0208 (Size: 0x8, Type: DoubleProperty)
    double GenerationRadius6400; // 0x0210 (Size: 0x8, Type: DoubleProperty)
    double GenerationRadius12800; // 0x0218 (Size: 0x8, Type: DoubleProperty)
    double GenerationRadius25600; // 0x0220 (Size: 0x8, Type: DoubleProperty)
    double GenerationRadius51200; // 0x0228 (Size: 0x8, Type: DoubleProperty)
    double GenerationRadius102400; // 0x0230 (Size: 0x8, Type: DoubleProperty)
    double GenerationRadius204800; // 0x0238 (Size: 0x8, Type: DoubleProperty)
    double CleanupRadiusMultiplier; // 0x0240 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FPCGRuntimeGenerationRadii, RadiusUnbounded) == 0, "Offset mismatch for FPCGRuntimeGenerationRadii::RadiusUnbounded");
static_assert(offsetof(FPCGRuntimeGenerationRadii, Radius400) == 40, "Offset mismatch for FPCGRuntimeGenerationRadii::Radius400");
static_assert(offsetof(FPCGRuntimeGenerationRadii, Radius800) == 80, "Offset mismatch for FPCGRuntimeGenerationRadii::Radius800");
static_assert(offsetof(FPCGRuntimeGenerationRadii, Radius1600) == 120, "Offset mismatch for FPCGRuntimeGenerationRadii::Radius1600");
static_assert(offsetof(FPCGRuntimeGenerationRadii, Radius3200) == 160, "Offset mismatch for FPCGRuntimeGenerationRadii::Radius3200");
static_assert(offsetof(FPCGRuntimeGenerationRadii, Radius6400) == 200, "Offset mismatch for FPCGRuntimeGenerationRadii::Radius6400");
static_assert(offsetof(FPCGRuntimeGenerationRadii, Radius12800) == 240, "Offset mismatch for FPCGRuntimeGenerationRadii::Radius12800");
static_assert(offsetof(FPCGRuntimeGenerationRadii, Radius25600) == 280, "Offset mismatch for FPCGRuntimeGenerationRadii::Radius25600");
static_assert(offsetof(FPCGRuntimeGenerationRadii, Radius51200) == 320, "Offset mismatch for FPCGRuntimeGenerationRadii::Radius51200");
static_assert(offsetof(FPCGRuntimeGenerationRadii, Radius102400) == 360, "Offset mismatch for FPCGRuntimeGenerationRadii::Radius102400");
static_assert(offsetof(FPCGRuntimeGenerationRadii, Radius204800) == 400, "Offset mismatch for FPCGRuntimeGenerationRadii::Radius204800");
static_assert(offsetof(FPCGRuntimeGenerationRadii, CleanupRadiusScalar) == 440, "Offset mismatch for FPCGRuntimeGenerationRadii::CleanupRadiusScalar");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius) == 488, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius400) == 496, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius400");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius800) == 504, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius800");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius1600) == 512, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius1600");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius3200) == 520, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius3200");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius6400) == 528, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius6400");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius12800) == 536, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius12800");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius25600) == 544, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius25600");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius51200) == 552, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius51200");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius102400) == 560, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius102400");
static_assert(offsetof(FPCGRuntimeGenerationRadii, GenerationRadius204800) == 568, "Offset mismatch for FPCGRuntimeGenerationRadii::GenerationRadius204800");
static_assert(offsetof(FPCGRuntimeGenerationRadii, CleanupRadiusMultiplier) == 576, "Offset mismatch for FPCGRuntimeGenerationRadii::CleanupRadiusMultiplier");

// /Script/PCG.PCGSelectGrammarCriteriaAttributeNames
// Kind: ScriptStruct; super: none
struct FPCGSelectGrammarCriteriaAttributeNames
{
public:
    std::uint8_t KeyAttributeName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ComparatorAttributeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t FirstValueAttributeName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t SecondValueAttributeName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    FName GrammarAttributeName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPCGSelectGrammarCriteriaAttributeNames, KeyAttributeName) == 0, "Offset mismatch for FPCGSelectGrammarCriteriaAttributeNames::KeyAttributeName");
static_assert(offsetof(FPCGSelectGrammarCriteriaAttributeNames, ComparatorAttributeName) == 4, "Offset mismatch for FPCGSelectGrammarCriteriaAttributeNames::ComparatorAttributeName");
static_assert(offsetof(FPCGSelectGrammarCriteriaAttributeNames, FirstValueAttributeName) == 8, "Offset mismatch for FPCGSelectGrammarCriteriaAttributeNames::FirstValueAttributeName");
static_assert(offsetof(FPCGSelectGrammarCriteriaAttributeNames, SecondValueAttributeName) == 12, "Offset mismatch for FPCGSelectGrammarCriteriaAttributeNames::SecondValueAttributeName");
static_assert(offsetof(FPCGSelectGrammarCriteriaAttributeNames, GrammarAttributeName) == 16, "Offset mismatch for FPCGSelectGrammarCriteriaAttributeNames::GrammarAttributeName");

// /Script/PCG.PCGSelectGrammarCriterion
// Kind: ScriptStruct; super: none
struct FPCGSelectGrammarCriterion
{
public:
    std::uint8_t Key[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Comparator; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    double FirstValue; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double SecondValue; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    FString Grammar; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPCGSelectGrammarCriterion, Key) == 0, "Offset mismatch for FPCGSelectGrammarCriterion::Key");
static_assert(offsetof(FPCGSelectGrammarCriterion, Comparator) == 4, "Offset mismatch for FPCGSelectGrammarCriterion::Comparator");
static_assert(offsetof(FPCGSelectGrammarCriterion, FirstValue) == 8, "Offset mismatch for FPCGSelectGrammarCriterion::FirstValue");
static_assert(offsetof(FPCGSelectGrammarCriterion, SecondValue) == 16, "Offset mismatch for FPCGSelectGrammarCriterion::SecondValue");
static_assert(offsetof(FPCGSelectGrammarCriterion, Grammar) == 24, "Offset mismatch for FPCGSelectGrammarCriterion::Grammar");

// /Script/PCG.PCGSelectionKey
// Kind: ScriptStruct; super: none
struct FPCGSelectionKey
{
public:
    std::uint8_t ActorFilter; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Selection; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t Tag[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* SelectionClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ObjectPath[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    void* OptionalExtraDependency; // 0x0028 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CustomKey[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    TArray<void*> OptionalBounds; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGSelectionKey, ActorFilter) == 0, "Offset mismatch for FPCGSelectionKey::ActorFilter");
static_assert(offsetof(FPCGSelectionKey, Selection) == 1, "Offset mismatch for FPCGSelectionKey::Selection");
static_assert(offsetof(FPCGSelectionKey, Tag) == 4, "Offset mismatch for FPCGSelectionKey::Tag");
static_assert(offsetof(FPCGSelectionKey, SelectionClass) == 8, "Offset mismatch for FPCGSelectionKey::SelectionClass");
static_assert(offsetof(FPCGSelectionKey, ObjectPath) == 16, "Offset mismatch for FPCGSelectionKey::ObjectPath");
static_assert(offsetof(FPCGSelectionKey, OptionalExtraDependency) == 40, "Offset mismatch for FPCGSelectionKey::OptionalExtraDependency");
static_assert(offsetof(FPCGSelectionKey, CustomKey) == 48, "Offset mismatch for FPCGSelectionKey::CustomKey");
static_assert(offsetof(FPCGSelectionKey, OptionalBounds) == 64, "Offset mismatch for FPCGSelectionKey::OptionalBounds");

// /Script/PCG.PCGSelfPruningParameters
// Kind: ScriptStruct; super: none
struct FPCGSelfPruningParameters
{
public:
    std::uint8_t PruningType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ComparisonSource[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    float RadiusSimilarityFactor; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRandomizedPruning; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCollisionAttribute; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003E
    std::uint8_t CollisionAttribute[0x30]; // 0x0040 (Size: 0x30, Type: StructProperty)
    std::uint8_t CollisionQueryFlag; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGSelfPruningParameters, PruningType) == 0, "Offset mismatch for FPCGSelfPruningParameters::PruningType");
static_assert(offsetof(FPCGSelfPruningParameters, ComparisonSource) == 8, "Offset mismatch for FPCGSelfPruningParameters::ComparisonSource");
static_assert(offsetof(FPCGSelfPruningParameters, RadiusSimilarityFactor) == 56, "Offset mismatch for FPCGSelfPruningParameters::RadiusSimilarityFactor");
static_assert(offsetof(FPCGSelfPruningParameters, bRandomizedPruning) == 60, "Offset mismatch for FPCGSelfPruningParameters::bRandomizedPruning");
static_assert(offsetof(FPCGSelfPruningParameters, bUseCollisionAttribute) == 61, "Offset mismatch for FPCGSelfPruningParameters::bUseCollisionAttribute");
static_assert(offsetof(FPCGSelfPruningParameters, CollisionAttribute) == 64, "Offset mismatch for FPCGSelfPruningParameters::CollisionAttribute");
static_assert(offsetof(FPCGSelfPruningParameters, CollisionQueryFlag) == 112, "Offset mismatch for FPCGSelfPruningParameters::CollisionQueryFlag");

// /Script/PCG.PCGSettingsOverridableParam
// Kind: ScriptStruct; super: none
struct FPCGSettingsOverridableParam
{
public:
    FName Label; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> PropertiesNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* PropertyClass; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> MapOfAliases; // 0x0020 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasNameClash; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsGPU; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresGPUReadback; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0033
    std::int32_t NumContainers; // 0x0034 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGSettingsOverridableParam, Label) == 0, "Offset mismatch for FPCGSettingsOverridableParam::Label");
static_assert(offsetof(FPCGSettingsOverridableParam, PropertiesNames) == 8, "Offset mismatch for FPCGSettingsOverridableParam::PropertiesNames");
static_assert(offsetof(FPCGSettingsOverridableParam, PropertyClass) == 24, "Offset mismatch for FPCGSettingsOverridableParam::PropertyClass");
static_assert(offsetof(FPCGSettingsOverridableParam, MapOfAliases) == 32, "Offset mismatch for FPCGSettingsOverridableParam::MapOfAliases");
static_assert(offsetof(FPCGSettingsOverridableParam, bHasNameClash) == 48, "Offset mismatch for FPCGSettingsOverridableParam::bHasNameClash");
static_assert(offsetof(FPCGSettingsOverridableParam, bSupportsGPU) == 49, "Offset mismatch for FPCGSettingsOverridableParam::bSupportsGPU");
static_assert(offsetof(FPCGSettingsOverridableParam, bRequiresGPUReadback) == 50, "Offset mismatch for FPCGSettingsOverridableParam::bRequiresGPUReadback");
static_assert(offsetof(FPCGSettingsOverridableParam, NumContainers) == 52, "Offset mismatch for FPCGSettingsOverridableParam::NumContainers");

// /Script/PCG.PCGSettingsPropertyDefinition
// Kind: ScriptStruct; super: none
struct FPCGSettingsPropertyDefinition
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString FullName; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ToolTip; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString CPPType; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPCGSettingsPropertyDefinition, Name) == 0, "Offset mismatch for FPCGSettingsPropertyDefinition::Name");
static_assert(offsetof(FPCGSettingsPropertyDefinition, FullName) == 16, "Offset mismatch for FPCGSettingsPropertyDefinition::FullName");
static_assert(offsetof(FPCGSettingsPropertyDefinition, ToolTip) == 32, "Offset mismatch for FPCGSettingsPropertyDefinition::ToolTip");
static_assert(offsetof(FPCGSettingsPropertyDefinition, CPPType) == 48, "Offset mismatch for FPCGSettingsPropertyDefinition::CPPType");

// /Script/PCG.PCGSkinnedMeshDescriptorWrapper
// Kind: ScriptStruct; super: PCGMeshDescriptorWrapperBase
struct FPCGSkinnedMeshDescriptorWrapper
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Descriptor[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGSkinnedMeshDescriptorWrapper, Descriptor) == 8, "Offset mismatch for FPCGSkinnedMeshDescriptorWrapper::Descriptor");

// /Script/PCG.PCGSkinnedMeshInstance
// Kind: ScriptStruct; super: none
struct FPCGSkinnedMeshInstance
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGSkinnedMeshInstanceList
// Kind: ScriptStruct; super: none
struct FPCGSkinnedMeshInstanceList
{
public:
    std::uint8_t Descriptor[0x2A0]; // 0x0000 (Size: 0x2A0, Type: StructProperty)
    TArray<void*> Instances; // 0x02A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x8]; // 0x02B0
    TWeakObjectPtr<void> PointData; // 0x02B8 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> InstancePointIndices; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGSkinnedMeshInstanceList, Descriptor) == 0, "Offset mismatch for FPCGSkinnedMeshInstanceList::Descriptor");
static_assert(offsetof(FPCGSkinnedMeshInstanceList, Instances) == 672, "Offset mismatch for FPCGSkinnedMeshInstanceList::Instances");
static_assert(offsetof(FPCGSkinnedMeshInstanceList, PointData) == 696, "Offset mismatch for FPCGSkinnedMeshInstanceList::PointData");
static_assert(offsetof(FPCGSkinnedMeshInstanceList, InstancePointIndices) == 704, "Offset mismatch for FPCGSkinnedMeshInstanceList::InstancePointIndices");

// /Script/PCG.PCGSkinnedMeshPackedCustomData
// Kind: ScriptStruct; super: none
struct FPCGSkinnedMeshPackedCustomData
{
public:
    std::int32_t SequenceIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NumCustomDataFloats; // 0x0004 (Size: 0x4, Type: IntProperty)
    TArray<void*> CustomData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGSkinnedMeshPackedCustomData, SequenceIndex) == 0, "Offset mismatch for FPCGSkinnedMeshPackedCustomData::SequenceIndex");
static_assert(offsetof(FPCGSkinnedMeshPackedCustomData, NumCustomDataFloats) == 4, "Offset mismatch for FPCGSkinnedMeshPackedCustomData::NumCustomDataFloats");
static_assert(offsetof(FPCGSkinnedMeshPackedCustomData, CustomData) == 8, "Offset mismatch for FPCGSkinnedMeshPackedCustomData::CustomData");

// /Script/PCG.PCGSoftGraphExecutionSource
// Kind: ScriptStruct; super: none
struct FPCGSoftGraphExecutionSource
{
public:
    TSoftObjectPtr<void> SoftObjectPtr; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGSoftGraphExecutionSource, SoftObjectPtr) == 0, "Offset mismatch for FPCGSoftGraphExecutionSource::SoftObjectPtr");

// /Script/PCG.PCGSoftISMComponentDescriptor
// Kind: ScriptStruct; super: SoftISMComponentDescriptor
struct FPCGSoftISMComponentDescriptor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> ComponentTags; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    FString AdditionalCommaSeparatedTags; // 0x0280 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPCGSoftISMComponentDescriptor, ComponentTags) == 624, "Offset mismatch for FPCGSoftISMComponentDescriptor::ComponentTags");
static_assert(offsetof(FPCGSoftISMComponentDescriptor, AdditionalCommaSeparatedTags) == 640, "Offset mismatch for FPCGSoftISMComponentDescriptor::AdditionalCommaSeparatedTags");

// /Script/PCG.PCGSoftSkinnedMeshComponentDescriptor
// Kind: ScriptStruct; super: SoftSkinnedMeshComponentDescriptor
struct FPCGSoftSkinnedMeshComponentDescriptor
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    TArray<void*> ComponentTags; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    FString AdditionalCommaSeparatedTags; // 0x0290 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPCGSoftSkinnedMeshComponentDescriptor, ComponentTags) == 640, "Offset mismatch for FPCGSoftSkinnedMeshComponentDescriptor::ComponentTags");
static_assert(offsetof(FPCGSoftSkinnedMeshComponentDescriptor, AdditionalCommaSeparatedTags) == 656, "Offset mismatch for FPCGSoftSkinnedMeshComponentDescriptor::AdditionalCommaSeparatedTags");

// /Script/PCG.PCGSortAttributeEntry
// Kind: ScriptStruct; super: none
struct FPCGSortAttributeEntry
{
public:
    std::uint8_t InputSource[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t SortMethod; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGSortAttributeEntry, InputSource) == 0, "Offset mismatch for FPCGSortAttributeEntry::InputSource");
static_assert(offsetof(FPCGSortAttributeEntry, SortMethod) == 48, "Offset mismatch for FPCGSortAttributeEntry::SortMethod");

// /Script/PCG.PCGSourceDataContainer
// Kind: ScriptStruct; super: none
struct FPCGSourceDataContainer
{
public:
    TMap<void*, void*> DataStorage; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0010
    std::uint32_t DirtyGeneration; // 0x0014 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FPCGSourceDataContainer, DataStorage) == 0, "Offset mismatch for FPCGSourceDataContainer::DataStorage");
static_assert(offsetof(FPCGSourceDataContainer, DirtyGeneration) == 20, "Offset mismatch for FPCGSourceDataContainer::DirtyGeneration");

// /Script/PCG.PCGSourceDataStorageKey
// Kind: ScriptStruct; super: none
struct FPCGSourceDataStorageKey
{
public:
    FName Label; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint64_t Hash; // 0x0008 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FPCGSourceDataStorageKey, Label) == 0, "Offset mismatch for FPCGSourceDataStorageKey::Label");
static_assert(offsetof(FPCGSourceDataStorageKey, Hash) == 8, "Offset mismatch for FPCGSourceDataStorageKey::Hash");

// /Script/PCG.PCGSourceDataStorageValue
// Kind: ScriptStruct; super: none
struct FPCGSourceDataStorageValue
{
public:
    std::uint8_t Data[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGSourceDataStorageValue, Data) == 0, "Offset mismatch for FPCGSourceDataStorageValue::Data");

// /Script/PCG.PCGSpawnerPrimitives
// Kind: ScriptStruct; super: none
struct FPCGSpawnerPrimitives
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGSplineDataDelta
// Kind: ScriptStruct; super: PCGDeltaBase
struct FPCGSplineDataDelta
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t OriginalStartTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    void* SplineOverride; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPCGSplineDataDelta, OriginalStartTransform) == 16, "Offset mismatch for FPCGSplineDataDelta::OriginalStartTransform");
static_assert(offsetof(FPCGSplineDataDelta, SplineOverride) == 112, "Offset mismatch for FPCGSplineDataDelta::SplineOverride");

// /Script/PCG.PCGSplineMeshParams
// Kind: ScriptStruct; super: none
struct FPCGSplineMeshParams
{
public:
    std::uint8_t ForwardAxis; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t bScaleMeshToBounds; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScaleMeshToLandscapeSplineFullWidth; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0006
    std::uint8_t SplineUpDir[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float NaniteClusterBoundsScale; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SplineBoundaryMin; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float SplineBoundaryMax; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSmoothInterpRollScale; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x002D
    std::uint8_t StartOffset[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t EndOffset[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t StartPosition[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartTangent[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    float StartRollDegrees; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0084
    std::uint8_t StartScale[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t EndPosition[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndTangent[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    float EndRollDegrees; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00CC
    std::uint8_t EndScale[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGSplineMeshParams, ForwardAxis) == 0, "Offset mismatch for FPCGSplineMeshParams::ForwardAxis");
static_assert(offsetof(FPCGSplineMeshParams, bScaleMeshToBounds) == 4, "Offset mismatch for FPCGSplineMeshParams::bScaleMeshToBounds");
static_assert(offsetof(FPCGSplineMeshParams, bScaleMeshToLandscapeSplineFullWidth) == 5, "Offset mismatch for FPCGSplineMeshParams::bScaleMeshToLandscapeSplineFullWidth");
static_assert(offsetof(FPCGSplineMeshParams, SplineUpDir) == 8, "Offset mismatch for FPCGSplineMeshParams::SplineUpDir");
static_assert(offsetof(FPCGSplineMeshParams, NaniteClusterBoundsScale) == 32, "Offset mismatch for FPCGSplineMeshParams::NaniteClusterBoundsScale");
static_assert(offsetof(FPCGSplineMeshParams, SplineBoundaryMin) == 36, "Offset mismatch for FPCGSplineMeshParams::SplineBoundaryMin");
static_assert(offsetof(FPCGSplineMeshParams, SplineBoundaryMax) == 40, "Offset mismatch for FPCGSplineMeshParams::SplineBoundaryMax");
static_assert(offsetof(FPCGSplineMeshParams, bSmoothInterpRollScale) == 44, "Offset mismatch for FPCGSplineMeshParams::bSmoothInterpRollScale");
static_assert(offsetof(FPCGSplineMeshParams, StartOffset) == 48, "Offset mismatch for FPCGSplineMeshParams::StartOffset");
static_assert(offsetof(FPCGSplineMeshParams, EndOffset) == 64, "Offset mismatch for FPCGSplineMeshParams::EndOffset");
static_assert(offsetof(FPCGSplineMeshParams, StartPosition) == 80, "Offset mismatch for FPCGSplineMeshParams::StartPosition");
static_assert(offsetof(FPCGSplineMeshParams, StartTangent) == 104, "Offset mismatch for FPCGSplineMeshParams::StartTangent");
static_assert(offsetof(FPCGSplineMeshParams, StartRollDegrees) == 128, "Offset mismatch for FPCGSplineMeshParams::StartRollDegrees");
static_assert(offsetof(FPCGSplineMeshParams, StartScale) == 136, "Offset mismatch for FPCGSplineMeshParams::StartScale");
static_assert(offsetof(FPCGSplineMeshParams, EndPosition) == 152, "Offset mismatch for FPCGSplineMeshParams::EndPosition");
static_assert(offsetof(FPCGSplineMeshParams, EndTangent) == 176, "Offset mismatch for FPCGSplineMeshParams::EndTangent");
static_assert(offsetof(FPCGSplineMeshParams, EndRollDegrees) == 200, "Offset mismatch for FPCGSplineMeshParams::EndRollDegrees");
static_assert(offsetof(FPCGSplineMeshParams, EndScale) == 208, "Offset mismatch for FPCGSplineMeshParams::EndScale");

// /Script/PCG.PCGSplineSamplerParams
// Kind: ScriptStruct; super: none
struct FPCGSplineSamplerParams
{
public:
    std::uint8_t Dimension; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Mode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Fill; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t SubdivisionsPerSegment; // 0x0004 (Size: 0x4, Type: IntProperty)
    float DistanceIncrement; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSamples; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t NumPlanarSubdivisions; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t NumHeightSubdivisions; // 0x0014 (Size: 0x4, Type: IntProperty)
    float StartOffset; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float EndOffset; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxRandomOffsetNormalized; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFitToCurve; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    float InteriorSampleSpacing; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float InteriorBorderSampleSpacing; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTreatSplineAsPolyline; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InteriorOrientation; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bProjectOntoSurface; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x0033
    std::uint8_t InteriorDensityFalloffCurve[0x48]; // 0x0038 (Size: 0x48, Type: StructProperty)
    std::uint8_t bComputeDirectionDelta; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0081
    std::uint8_t NextDirectionDeltaAttribute[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    std::uint8_t bComputeCurvature; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0089
    std::uint8_t CurvatureAttribute[0x4]; // 0x008C (Size: 0x4, Type: NameProperty)
    std::uint8_t bComputeSegmentIndex; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0091
    std::uint8_t SegmentIndexAttribute[0x4]; // 0x0094 (Size: 0x4, Type: NameProperty)
    std::uint8_t bComputeSubsegmentIndex; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0099
    std::uint8_t SubsegmentIndexAttribute[0x4]; // 0x009C (Size: 0x4, Type: NameProperty)
    std::uint8_t bComputeTangents; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x00A1
    std::uint8_t ArriveTangentAttribute[0x4]; // 0x00A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeaveTangentAttribute[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bComputeAlpha; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x00AD
    std::uint8_t AlphaAttribute[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bComputeDistance; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x00B5
    std::uint8_t DistanceAttribute[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bComputeInputKey; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x3]; // 0x00BD
    std::uint8_t InputKeyAttribute[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUnbounded; // 0x00C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x3]; // 0x00C5
    float PointSteepness; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SeedingMode; // 0x00CC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSeedFromLocalPosition; // 0x00CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSeedFrom2DPosition; // 0x00CE (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGSplineSamplerParams, Dimension) == 0, "Offset mismatch for FPCGSplineSamplerParams::Dimension");
static_assert(offsetof(FPCGSplineSamplerParams, Mode) == 1, "Offset mismatch for FPCGSplineSamplerParams::Mode");
static_assert(offsetof(FPCGSplineSamplerParams, Fill) == 2, "Offset mismatch for FPCGSplineSamplerParams::Fill");
static_assert(offsetof(FPCGSplineSamplerParams, SubdivisionsPerSegment) == 4, "Offset mismatch for FPCGSplineSamplerParams::SubdivisionsPerSegment");
static_assert(offsetof(FPCGSplineSamplerParams, DistanceIncrement) == 8, "Offset mismatch for FPCGSplineSamplerParams::DistanceIncrement");
static_assert(offsetof(FPCGSplineSamplerParams, NumSamples) == 12, "Offset mismatch for FPCGSplineSamplerParams::NumSamples");
static_assert(offsetof(FPCGSplineSamplerParams, NumPlanarSubdivisions) == 16, "Offset mismatch for FPCGSplineSamplerParams::NumPlanarSubdivisions");
static_assert(offsetof(FPCGSplineSamplerParams, NumHeightSubdivisions) == 20, "Offset mismatch for FPCGSplineSamplerParams::NumHeightSubdivisions");
static_assert(offsetof(FPCGSplineSamplerParams, StartOffset) == 24, "Offset mismatch for FPCGSplineSamplerParams::StartOffset");
static_assert(offsetof(FPCGSplineSamplerParams, EndOffset) == 28, "Offset mismatch for FPCGSplineSamplerParams::EndOffset");
static_assert(offsetof(FPCGSplineSamplerParams, MaxRandomOffsetNormalized) == 32, "Offset mismatch for FPCGSplineSamplerParams::MaxRandomOffsetNormalized");
static_assert(offsetof(FPCGSplineSamplerParams, bFitToCurve) == 36, "Offset mismatch for FPCGSplineSamplerParams::bFitToCurve");
static_assert(offsetof(FPCGSplineSamplerParams, InteriorSampleSpacing) == 40, "Offset mismatch for FPCGSplineSamplerParams::InteriorSampleSpacing");
static_assert(offsetof(FPCGSplineSamplerParams, InteriorBorderSampleSpacing) == 44, "Offset mismatch for FPCGSplineSamplerParams::InteriorBorderSampleSpacing");
static_assert(offsetof(FPCGSplineSamplerParams, bTreatSplineAsPolyline) == 48, "Offset mismatch for FPCGSplineSamplerParams::bTreatSplineAsPolyline");
static_assert(offsetof(FPCGSplineSamplerParams, InteriorOrientation) == 49, "Offset mismatch for FPCGSplineSamplerParams::InteriorOrientation");
static_assert(offsetof(FPCGSplineSamplerParams, bProjectOntoSurface) == 50, "Offset mismatch for FPCGSplineSamplerParams::bProjectOntoSurface");
static_assert(offsetof(FPCGSplineSamplerParams, InteriorDensityFalloffCurve) == 56, "Offset mismatch for FPCGSplineSamplerParams::InteriorDensityFalloffCurve");
static_assert(offsetof(FPCGSplineSamplerParams, bComputeDirectionDelta) == 128, "Offset mismatch for FPCGSplineSamplerParams::bComputeDirectionDelta");
static_assert(offsetof(FPCGSplineSamplerParams, NextDirectionDeltaAttribute) == 132, "Offset mismatch for FPCGSplineSamplerParams::NextDirectionDeltaAttribute");
static_assert(offsetof(FPCGSplineSamplerParams, bComputeCurvature) == 136, "Offset mismatch for FPCGSplineSamplerParams::bComputeCurvature");
static_assert(offsetof(FPCGSplineSamplerParams, CurvatureAttribute) == 140, "Offset mismatch for FPCGSplineSamplerParams::CurvatureAttribute");
static_assert(offsetof(FPCGSplineSamplerParams, bComputeSegmentIndex) == 144, "Offset mismatch for FPCGSplineSamplerParams::bComputeSegmentIndex");
static_assert(offsetof(FPCGSplineSamplerParams, SegmentIndexAttribute) == 148, "Offset mismatch for FPCGSplineSamplerParams::SegmentIndexAttribute");
static_assert(offsetof(FPCGSplineSamplerParams, bComputeSubsegmentIndex) == 152, "Offset mismatch for FPCGSplineSamplerParams::bComputeSubsegmentIndex");
static_assert(offsetof(FPCGSplineSamplerParams, SubsegmentIndexAttribute) == 156, "Offset mismatch for FPCGSplineSamplerParams::SubsegmentIndexAttribute");
static_assert(offsetof(FPCGSplineSamplerParams, bComputeTangents) == 160, "Offset mismatch for FPCGSplineSamplerParams::bComputeTangents");
static_assert(offsetof(FPCGSplineSamplerParams, ArriveTangentAttribute) == 164, "Offset mismatch for FPCGSplineSamplerParams::ArriveTangentAttribute");
static_assert(offsetof(FPCGSplineSamplerParams, LeaveTangentAttribute) == 168, "Offset mismatch for FPCGSplineSamplerParams::LeaveTangentAttribute");
static_assert(offsetof(FPCGSplineSamplerParams, bComputeAlpha) == 172, "Offset mismatch for FPCGSplineSamplerParams::bComputeAlpha");
static_assert(offsetof(FPCGSplineSamplerParams, AlphaAttribute) == 176, "Offset mismatch for FPCGSplineSamplerParams::AlphaAttribute");
static_assert(offsetof(FPCGSplineSamplerParams, bComputeDistance) == 180, "Offset mismatch for FPCGSplineSamplerParams::bComputeDistance");
static_assert(offsetof(FPCGSplineSamplerParams, DistanceAttribute) == 184, "Offset mismatch for FPCGSplineSamplerParams::DistanceAttribute");
static_assert(offsetof(FPCGSplineSamplerParams, bComputeInputKey) == 188, "Offset mismatch for FPCGSplineSamplerParams::bComputeInputKey");
static_assert(offsetof(FPCGSplineSamplerParams, InputKeyAttribute) == 192, "Offset mismatch for FPCGSplineSamplerParams::InputKeyAttribute");
static_assert(offsetof(FPCGSplineSamplerParams, bUnbounded) == 196, "Offset mismatch for FPCGSplineSamplerParams::bUnbounded");
static_assert(offsetof(FPCGSplineSamplerParams, PointSteepness) == 200, "Offset mismatch for FPCGSplineSamplerParams::PointSteepness");
static_assert(offsetof(FPCGSplineSamplerParams, SeedingMode) == 204, "Offset mismatch for FPCGSplineSamplerParams::SeedingMode");
static_assert(offsetof(FPCGSplineSamplerParams, bSeedFromLocalPosition) == 205, "Offset mismatch for FPCGSplineSamplerParams::bSeedFromLocalPosition");
static_assert(offsetof(FPCGSplineSamplerParams, bSeedFrom2DPosition) == 206, "Offset mismatch for FPCGSplineSamplerParams::bSeedFrom2DPosition");

// /Script/PCG.PCGSplineStruct
// Kind: ScriptStruct; super: none
struct FPCGSplineStruct
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t DefaultUpVector[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::int32_t ReparamStepsPerSegment; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bClosedLoop; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x007D
    std::uint8_t LocalBounds[0x38]; // 0x0080 (Size: 0x38, Type: StructProperty)
    std::uint8_t Bounds[0x38]; // 0x00B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t SplineCurves[0x68]; // 0x00F0 (Size: 0x68, Type: StructProperty)
    TArray<void*> ControlPointsEntryKeys; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Spline[0x1]; // 0x0168 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGSplineStruct, Transform) == 0, "Offset mismatch for FPCGSplineStruct::Transform");
static_assert(offsetof(FPCGSplineStruct, DefaultUpVector) == 96, "Offset mismatch for FPCGSplineStruct::DefaultUpVector");
static_assert(offsetof(FPCGSplineStruct, ReparamStepsPerSegment) == 120, "Offset mismatch for FPCGSplineStruct::ReparamStepsPerSegment");
static_assert(offsetof(FPCGSplineStruct, bClosedLoop) == 124, "Offset mismatch for FPCGSplineStruct::bClosedLoop");
static_assert(offsetof(FPCGSplineStruct, LocalBounds) == 128, "Offset mismatch for FPCGSplineStruct::LocalBounds");
static_assert(offsetof(FPCGSplineStruct, Bounds) == 184, "Offset mismatch for FPCGSplineStruct::Bounds");
static_assert(offsetof(FPCGSplineStruct, SplineCurves) == 240, "Offset mismatch for FPCGSplineStruct::SplineCurves");
static_assert(offsetof(FPCGSplineStruct, ControlPointsEntryKeys) == 344, "Offset mismatch for FPCGSplineStruct::ControlPointsEntryKeys");
static_assert(offsetof(FPCGSplineStruct, Spline) == 360, "Offset mismatch for FPCGSplineStruct::Spline");

// /Script/PCG.PCGStack
// Kind: ScriptStruct; super: none
struct FPCGStack
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> StackFrames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGStack, StackFrames) == 8, "Offset mismatch for FPCGStack::StackFrames");

// /Script/PCG.PCGStackContext
// Kind: ScriptStruct; super: none
struct FPCGStackContext
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Stacks; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentStackIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGStackContext, Stacks) == 8, "Offset mismatch for FPCGStackContext::Stacks");
static_assert(offsetof(FPCGStackContext, CurrentStackIndex) == 24, "Offset mismatch for FPCGStackContext::CurrentStackIndex");

// /Script/PCG.PCGStackFrame
// Kind: ScriptStruct; super: none
struct FPCGStackFrame
{
public:
    std::uint8_t Object[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t LoopIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGStackFrame, Object) == 0, "Offset mismatch for FPCGStackFrame::Object");
static_assert(offsetof(FPCGStackFrame, LoopIndex) == 32, "Offset mismatch for FPCGStackFrame::LoopIndex");

// /Script/PCG.PCGStaticMeshDescriptorWrapper
// Kind: ScriptStruct; super: PCGMeshDescriptorWrapperBase
struct FPCGStaticMeshDescriptorWrapper
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Descriptor[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGStaticMeshDescriptorWrapper, Descriptor) == 8, "Offset mismatch for FPCGStaticMeshDescriptorWrapper::Descriptor");

// /Script/PCG.PCGStaticMeshSpawnerContext
// Kind: ScriptStruct; super: PCGMeshSpawnerContextBase
struct FPCGStaticMeshSpawnerContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGSubdivisionModuleAttributeNames
// Kind: ScriptStruct; super: none
struct FPCGSubdivisionModuleAttributeNames
{
public:
    std::uint8_t SymbolAttributeName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SizeAttributeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bProvideScalable; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t ScalableAttributeName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t bProvideDebugColor; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    FName DebugColorAttributeName; // 0x0014 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPCGSubdivisionModuleAttributeNames, SymbolAttributeName) == 0, "Offset mismatch for FPCGSubdivisionModuleAttributeNames::SymbolAttributeName");
static_assert(offsetof(FPCGSubdivisionModuleAttributeNames, SizeAttributeName) == 4, "Offset mismatch for FPCGSubdivisionModuleAttributeNames::SizeAttributeName");
static_assert(offsetof(FPCGSubdivisionModuleAttributeNames, bProvideScalable) == 8, "Offset mismatch for FPCGSubdivisionModuleAttributeNames::bProvideScalable");
static_assert(offsetof(FPCGSubdivisionModuleAttributeNames, ScalableAttributeName) == 12, "Offset mismatch for FPCGSubdivisionModuleAttributeNames::ScalableAttributeName");
static_assert(offsetof(FPCGSubdivisionModuleAttributeNames, bProvideDebugColor) == 16, "Offset mismatch for FPCGSubdivisionModuleAttributeNames::bProvideDebugColor");
static_assert(offsetof(FPCGSubdivisionModuleAttributeNames, DebugColorAttributeName) == 20, "Offset mismatch for FPCGSubdivisionModuleAttributeNames::DebugColorAttributeName");

// /Script/PCG.PCGSubdivisionSubmodule
// Kind: ScriptStruct; super: none
struct FPCGSubdivisionSubmodule
{
public:
    FName Symbol; // 0x0000 (Size: 0x8, Type: NameProperty)
    double Size; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bScalable; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0xF]; // 0x0011
    std::uint8_t DebugColor[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPCGSubdivisionSubmodule, Symbol) == 0, "Offset mismatch for FPCGSubdivisionSubmodule::Symbol");
static_assert(offsetof(FPCGSubdivisionSubmodule, Size) == 8, "Offset mismatch for FPCGSubdivisionSubmodule::Size");
static_assert(offsetof(FPCGSubdivisionSubmodule, bScalable) == 16, "Offset mismatch for FPCGSubdivisionSubmodule::bScalable");
static_assert(offsetof(FPCGSubdivisionSubmodule, DebugColor) == 32, "Offset mismatch for FPCGSubdivisionSubmodule::DebugColor");

// /Script/PCG.PCGTaggedData
// Kind: ScriptStruct; super: none
struct FPCGTaggedData
{
public:
    std::uint8_t Data[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Tags[0x10]; // 0x0010 (Size: 0x10, Type: SetProperty)
    std::uint8_t Pin[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t bPinlessData; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUsedMultipleTimes; // 0x0025 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGTaggedData, Data) == 0, "Offset mismatch for FPCGTaggedData::Data");
static_assert(offsetof(FPCGTaggedData, Tags) == 16, "Offset mismatch for FPCGTaggedData::Tags");
static_assert(offsetof(FPCGTaggedData, Pin) == 32, "Offset mismatch for FPCGTaggedData::Pin");
static_assert(offsetof(FPCGTaggedData, bPinlessData) == 36, "Offset mismatch for FPCGTaggedData::bPinlessData");
static_assert(offsetof(FPCGTaggedData, bIsUsedMultipleTimes) == 37, "Offset mismatch for FPCGTaggedData::bIsUsedMultipleTimes");

// /Script/PCG.PCGTestMyColorStruct
// Kind: ScriptStruct; super: none
struct FPCGTestMyColorStruct
{
public:
    double B; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double G; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double R; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double A; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FPCGTestMyColorStruct, B) == 0, "Offset mismatch for FPCGTestMyColorStruct::B");
static_assert(offsetof(FPCGTestMyColorStruct, G) == 8, "Offset mismatch for FPCGTestMyColorStruct::G");
static_assert(offsetof(FPCGTestMyColorStruct, R) == 16, "Offset mismatch for FPCGTestMyColorStruct::R");
static_assert(offsetof(FPCGTestMyColorStruct, A) == 24, "Offset mismatch for FPCGTestMyColorStruct::A");

// /Script/PCG.PCGTrackedKeyInstanceData
// Kind: ScriptStruct; super: none
struct FPCGTrackedKeyInstanceData
{
public:
    std::uint8_t SelectionKey[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    std::uint8_t Settings[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bValue; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGTrackedKeyInstanceData, SelectionKey) == 0, "Offset mismatch for FPCGTrackedKeyInstanceData::SelectionKey");
static_assert(offsetof(FPCGTrackedKeyInstanceData, Settings) == 112, "Offset mismatch for FPCGTrackedKeyInstanceData::Settings");
static_assert(offsetof(FPCGTrackedKeyInstanceData, bValue) == 144, "Offset mismatch for FPCGTrackedKeyInstanceData::bValue");

// /Script/PCG.PCGVirtualTexturePrimingInfo
// Kind: ScriptStruct; super: none
struct FPCGVirtualTexturePrimingInfo
{
public:
    std::uint8_t VirtualTexture[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Grid; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    float WorldTexelSize; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPCGVirtualTexturePrimingInfo, VirtualTexture) == 0, "Offset mismatch for FPCGVirtualTexturePrimingInfo::VirtualTexture");
static_assert(offsetof(FPCGVirtualTexturePrimingInfo, Grid) == 32, "Offset mismatch for FPCGVirtualTexturePrimingInfo::Grid");
static_assert(offsetof(FPCGVirtualTexturePrimingInfo, WorldTexelSize) == 36, "Offset mismatch for FPCGVirtualTexturePrimingInfo::WorldTexelSize");

// /Script/PCG.PCGWeightedByCategoryEntryList
// Kind: ScriptStruct; super: none
struct FPCGWeightedByCategoryEntryList
{
public:
    FString CategoryEntry; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t IsDefault; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    TArray<void*> WeightedMeshEntries; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGWeightedByCategoryEntryList, CategoryEntry) == 0, "Offset mismatch for FPCGWeightedByCategoryEntryList::CategoryEntry");
static_assert(offsetof(FPCGWeightedByCategoryEntryList, IsDefault) == 16, "Offset mismatch for FPCGWeightedByCategoryEntryList::IsDefault");
static_assert(offsetof(FPCGWeightedByCategoryEntryList, WeightedMeshEntries) == 24, "Offset mismatch for FPCGWeightedByCategoryEntryList::WeightedMeshEntries");

// /Script/PCG.PCGWeightedByCategoryStructEntryList
// Kind: ScriptStruct; super: none
struct FPCGWeightedByCategoryStructEntryList
{
public:
    FString CategoryEntry; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t IsDefault; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    TArray<void*> WeightedMeshEntries; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGWeightedByCategoryStructEntryList, CategoryEntry) == 0, "Offset mismatch for FPCGWeightedByCategoryStructEntryList::CategoryEntry");
static_assert(offsetof(FPCGWeightedByCategoryStructEntryList, IsDefault) == 16, "Offset mismatch for FPCGWeightedByCategoryStructEntryList::IsDefault");
static_assert(offsetof(FPCGWeightedByCategoryStructEntryList, WeightedMeshEntries) == 24, "Offset mismatch for FPCGWeightedByCategoryStructEntryList::WeightedMeshEntries");

// /Script/PCG.PCGWorldCommonQueryParams
// Kind: ScriptStruct; super: none
struct FPCGWorldCommonQueryParams
{
public:
    std::uint8_t bIgnorePCGHits; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreSelfHits; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CollisionChannel; // 0x0002 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bTraceComplex; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActorTagFilter; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    FString ActorTagsList; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t ActorClassFilter; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    void* ActorClass; // 0x0020 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ActorFilterFromInput; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0029
    std::uint8_t ActorFilterInputSource[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t SelectLandscapeHits; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bGetReferenceToActorHit; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetReferenceToPhysicalMaterial; // 0x0062 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x5]; // 0x0063
    TSet<void*> ParsedActorTagsList; // 0x0068 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FPCGWorldCommonQueryParams, bIgnorePCGHits) == 0, "Offset mismatch for FPCGWorldCommonQueryParams::bIgnorePCGHits");
static_assert(offsetof(FPCGWorldCommonQueryParams, bIgnoreSelfHits) == 1, "Offset mismatch for FPCGWorldCommonQueryParams::bIgnoreSelfHits");
static_assert(offsetof(FPCGWorldCommonQueryParams, CollisionChannel) == 2, "Offset mismatch for FPCGWorldCommonQueryParams::CollisionChannel");
static_assert(offsetof(FPCGWorldCommonQueryParams, bTraceComplex) == 3, "Offset mismatch for FPCGWorldCommonQueryParams::bTraceComplex");
static_assert(offsetof(FPCGWorldCommonQueryParams, ActorTagFilter) == 4, "Offset mismatch for FPCGWorldCommonQueryParams::ActorTagFilter");
static_assert(offsetof(FPCGWorldCommonQueryParams, ActorTagsList) == 8, "Offset mismatch for FPCGWorldCommonQueryParams::ActorTagsList");
static_assert(offsetof(FPCGWorldCommonQueryParams, ActorClassFilter) == 24, "Offset mismatch for FPCGWorldCommonQueryParams::ActorClassFilter");
static_assert(offsetof(FPCGWorldCommonQueryParams, ActorClass) == 32, "Offset mismatch for FPCGWorldCommonQueryParams::ActorClass");
static_assert(offsetof(FPCGWorldCommonQueryParams, ActorFilterFromInput) == 40, "Offset mismatch for FPCGWorldCommonQueryParams::ActorFilterFromInput");
static_assert(offsetof(FPCGWorldCommonQueryParams, ActorFilterInputSource) == 48, "Offset mismatch for FPCGWorldCommonQueryParams::ActorFilterInputSource");
static_assert(offsetof(FPCGWorldCommonQueryParams, SelectLandscapeHits) == 96, "Offset mismatch for FPCGWorldCommonQueryParams::SelectLandscapeHits");
static_assert(offsetof(FPCGWorldCommonQueryParams, bGetReferenceToActorHit) == 97, "Offset mismatch for FPCGWorldCommonQueryParams::bGetReferenceToActorHit");
static_assert(offsetof(FPCGWorldCommonQueryParams, bGetReferenceToPhysicalMaterial) == 98, "Offset mismatch for FPCGWorldCommonQueryParams::bGetReferenceToPhysicalMaterial");
static_assert(offsetof(FPCGWorldCommonQueryParams, ParsedActorTagsList) == 104, "Offset mismatch for FPCGWorldCommonQueryParams::ParsedActorTagsList");

// /Script/PCG.PCGWorldQueryActorFilterCache
// Kind: ScriptStruct; super: none
struct FPCGWorldQueryActorFilterCache
{
public:
    TArray<void*> FilterActors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPCGWorldQueryActorFilterCache, FilterActors) == 0, "Offset mismatch for FPCGWorldQueryActorFilterCache::FilterActors");

// /Script/PCG.PCGWorldRayHitQueryParams
// Kind: ScriptStruct; super: PCGWorldRaycastQueryParams
struct FPCGWorldRayHitQueryParams
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t bOverrideDefaultParams; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0089
    std::uint8_t RayOrigin[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t RayDirection[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    double RayLength; // 0x00C0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FPCGWorldRayHitQueryParams, bOverrideDefaultParams) == 136, "Offset mismatch for FPCGWorldRayHitQueryParams::bOverrideDefaultParams");
static_assert(offsetof(FPCGWorldRayHitQueryParams, RayOrigin) == 144, "Offset mismatch for FPCGWorldRayHitQueryParams::RayOrigin");
static_assert(offsetof(FPCGWorldRayHitQueryParams, RayDirection) == 168, "Offset mismatch for FPCGWorldRayHitQueryParams::RayDirection");
static_assert(offsetof(FPCGWorldRayHitQueryParams, RayLength) == 192, "Offset mismatch for FPCGWorldRayHitQueryParams::RayLength");

// /Script/PCG.PCGWorldRaycastQueryParams
// Kind: ScriptStruct; super: PCGWorldCommonQueryParams
struct FPCGWorldRaycastQueryParams
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bGetDistance; // 0x0078 (Size: 0x1, Type: BoolProperty)
    // 0x0078 BoolProperty bGetImpact (shared storage)
    // 0x0078 BoolProperty bGetImpactNormal (shared storage)
    // 0x0078 BoolProperty bGetImpactPoint (shared storage)
    // 0x0078 BoolProperty bGetLocalImpactPoint (shared storage)
    // 0x0078 BoolProperty bGetReferenceToRenderMaterial (shared storage)
    // 0x0078 BoolProperty bGetReflection (shared storage)
    // 0x0078 BoolProperty bIgnoreBackfaceHits (shared storage)
    std::uint8_t bApplyMetadataFromLandscape; // 0x0079 (Size: 0x1, Type: BoolProperty)
    // 0x0079 BoolProperty bGetElementIndex (shared storage)
    // 0x0079 BoolProperty bGetFaceIndex (shared storage)
    // 0x0079 BoolProperty bGetReferenceToStaticMesh (shared storage)
    // 0x0079 BoolProperty bGetSectionIndex (shared storage)
    // 0x0079 BoolProperty bGetUVCoords (shared storage)
    // 0x0079 BoolProperty bUseRenderMaterialIndex (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x007A
    std::int32_t RenderMaterialIndex; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t bGetRenderMaterialIndex; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0081
    std::int32_t UVChannel; // 0x0084 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPCGWorldRaycastQueryParams, bGetDistance) == 120, "Offset mismatch for FPCGWorldRaycastQueryParams::bGetDistance");
static_assert(offsetof(FPCGWorldRaycastQueryParams, bApplyMetadataFromLandscape) == 121, "Offset mismatch for FPCGWorldRaycastQueryParams::bApplyMetadataFromLandscape");
static_assert(offsetof(FPCGWorldRaycastQueryParams, RenderMaterialIndex) == 124, "Offset mismatch for FPCGWorldRaycastQueryParams::RenderMaterialIndex");
static_assert(offsetof(FPCGWorldRaycastQueryParams, bGetRenderMaterialIndex) == 128, "Offset mismatch for FPCGWorldRaycastQueryParams::bGetRenderMaterialIndex");
static_assert(offsetof(FPCGWorldRaycastQueryParams, UVChannel) == 132, "Offset mismatch for FPCGWorldRaycastQueryParams::UVChannel");

// /Script/PCG.PCGWorldVolumetricQueryParams
// Kind: ScriptStruct; super: PCGWorldCommonQueryParams
struct FPCGWorldVolumetricQueryParams
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bSearchForOverlap; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPCGWorldVolumetricQueryParams, bSearchForOverlap) == 120, "Offset mismatch for FPCGWorldVolumetricQueryParams::bSearchForOverlap");

// /Script/PCG.PCGActorHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGActorHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGAddAttributeSettings
// Kind: Class; super: PCGSettings
class UPCGAddAttributeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputTarget[0x38]; // 0x00D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t AttributeTypes[0x160]; // 0x0110 (Size: 0x160, Type: StructProperty)
    std::uint8_t bCopyAllAttributes; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyAllDomains; // 0x0271 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0272
    TMap<void*, void*> MetadataDomainsMapping; // 0x0278 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPCGAddAttributeSettings, InputSource) == 168, "Offset mismatch for UPCGAddAttributeSettings::InputSource");
static_assert(offsetof(UPCGAddAttributeSettings, OutputTarget) == 216, "Offset mismatch for UPCGAddAttributeSettings::OutputTarget");
static_assert(offsetof(UPCGAddAttributeSettings, AttributeTypes) == 272, "Offset mismatch for UPCGAddAttributeSettings::AttributeTypes");
static_assert(offsetof(UPCGAddAttributeSettings, bCopyAllAttributes) == 624, "Offset mismatch for UPCGAddAttributeSettings::bCopyAllAttributes");
static_assert(offsetof(UPCGAddAttributeSettings, bCopyAllDomains) == 625, "Offset mismatch for UPCGAddAttributeSettings::bCopyAllDomains");
static_assert(offsetof(UPCGAddAttributeSettings, MetadataDomainsMapping) == 632, "Offset mismatch for UPCGAddAttributeSettings::MetadataDomainsMapping");

// /Script/PCG.PCGAddComplexConstantSettings
// Kind: Class; super: PCGCreateComplexConstantSettings
class UPCGAddComplexConstantSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Properties[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    FName TargetMetadataDomain; // 0x00B8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGAddComplexConstantSettings, Properties) == 168, "Offset mismatch for UPCGAddComplexConstantSettings::Properties");
static_assert(offsetof(UPCGAddComplexConstantSettings, TargetMetadataDomain) == 184, "Offset mismatch for UPCGAddComplexConstantSettings::TargetMetadataDomain");

// /Script/PCG.PCGAddComponentSettings
// Kind: Class; super: PCGSettings
class UPCGAddComponentSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bUseClassAttribute; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t ClassAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    void* TemplateComponentClass; // 0x00E0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowTemplateComponentEditing; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E9
    void* TemplateComponent; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActorReferenceAttribute[0x30]; // 0x00F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t ComponentReferenceAttribute[0x30]; // 0x0128 (Size: 0x30, Type: StructProperty)
    TArray<void*> PropertyOverrideDescriptions; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGAddComponentSettings, bUseClassAttribute) == 168, "Offset mismatch for UPCGAddComponentSettings::bUseClassAttribute");
static_assert(offsetof(UPCGAddComponentSettings, ClassAttribute) == 176, "Offset mismatch for UPCGAddComponentSettings::ClassAttribute");
static_assert(offsetof(UPCGAddComponentSettings, TemplateComponentClass) == 224, "Offset mismatch for UPCGAddComponentSettings::TemplateComponentClass");
static_assert(offsetof(UPCGAddComponentSettings, bAllowTemplateComponentEditing) == 232, "Offset mismatch for UPCGAddComponentSettings::bAllowTemplateComponentEditing");
static_assert(offsetof(UPCGAddComponentSettings, TemplateComponent) == 240, "Offset mismatch for UPCGAddComponentSettings::TemplateComponent");
static_assert(offsetof(UPCGAddComponentSettings, ActorReferenceAttribute) == 248, "Offset mismatch for UPCGAddComponentSettings::ActorReferenceAttribute");
static_assert(offsetof(UPCGAddComponentSettings, ComponentReferenceAttribute) == 296, "Offset mismatch for UPCGAddComponentSettings::ComponentReferenceAttribute");
static_assert(offsetof(UPCGAddComponentSettings, PropertyOverrideDescriptions) == 344, "Offset mismatch for UPCGAddComponentSettings::PropertyOverrideDescriptions");

// /Script/PCG.PCGAddTagSettings
// Kind: Class; super: PCGSettings
class UPCGAddTagSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString TagsToAdd; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString Prefix; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FString Suffix; // 0x00C8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIgnoreTagValueParsing; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTokenizeOnWhiteSpace; // 0x00D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGAddTagSettings, TagsToAdd) == 168, "Offset mismatch for UPCGAddTagSettings::TagsToAdd");
static_assert(offsetof(UPCGAddTagSettings, Prefix) == 184, "Offset mismatch for UPCGAddTagSettings::Prefix");
static_assert(offsetof(UPCGAddTagSettings, Suffix) == 200, "Offset mismatch for UPCGAddTagSettings::Suffix");
static_assert(offsetof(UPCGAddTagSettings, bIgnoreTagValueParsing) == 216, "Offset mismatch for UPCGAddTagSettings::bIgnoreTagValueParsing");
static_assert(offsetof(UPCGAddTagSettings, bTokenizeOnWhiteSpace) == 217, "Offset mismatch for UPCGAddTagSettings::bTokenizeOnWhiteSpace");

// /Script/PCG.PCGAlignPointsSettings
// Kind: Class; super: PCGSettings
class UPCGAlignPointsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SpatialReferential; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t XAxis[0x3]; // 0x00A9 (Size: 0x3, Type: StructProperty)
    std::uint8_t YAxis[0x3]; // 0x00AC (Size: 0x3, Type: StructProperty)
    std::uint8_t ZAxis[0x1]; // 0x00AF (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGAlignPointsSettings, SpatialReferential) == 168, "Offset mismatch for UPCGAlignPointsSettings::SpatialReferential");
static_assert(offsetof(UPCGAlignPointsSettings, XAxis) == 169, "Offset mismatch for UPCGAlignPointsSettings::XAxis");
static_assert(offsetof(UPCGAlignPointsSettings, YAxis) == 172, "Offset mismatch for UPCGAlignPointsSettings::YAxis");
static_assert(offsetof(UPCGAlignPointsSettings, ZAxis) == 175, "Offset mismatch for UPCGAlignPointsSettings::ZAxis");

// /Script/PCG.PCGApplyHierarchySettings
// Kind: Class; super: PCGSettings
class UPCGApplyHierarchySettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> PointKeyAttributes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParentKeyAttributes; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t HierarchyDepthAttribute[0x30]; // 0x00C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t RelativeTransformAttribute[0x30]; // 0x00F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t ApplyParentRotation; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0129
    std::uint8_t ApplyParentRotationAttribute[0x30]; // 0x0130 (Size: 0x30, Type: StructProperty)
    std::uint8_t ApplyParentScale; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0161
    std::uint8_t ApplyParentScaleAttribute[0x30]; // 0x0168 (Size: 0x30, Type: StructProperty)
    std::uint8_t ApplyHierarchy; // 0x0198 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0199
    std::uint8_t ApplyHierarchyAttribute[0x30]; // 0x01A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bWarnOnPointsWithInvalidParent; // 0x01D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGApplyHierarchySettings, PointKeyAttributes) == 168, "Offset mismatch for UPCGApplyHierarchySettings::PointKeyAttributes");
static_assert(offsetof(UPCGApplyHierarchySettings, ParentKeyAttributes) == 184, "Offset mismatch for UPCGApplyHierarchySettings::ParentKeyAttributes");
static_assert(offsetof(UPCGApplyHierarchySettings, HierarchyDepthAttribute) == 200, "Offset mismatch for UPCGApplyHierarchySettings::HierarchyDepthAttribute");
static_assert(offsetof(UPCGApplyHierarchySettings, RelativeTransformAttribute) == 248, "Offset mismatch for UPCGApplyHierarchySettings::RelativeTransformAttribute");
static_assert(offsetof(UPCGApplyHierarchySettings, ApplyParentRotation) == 296, "Offset mismatch for UPCGApplyHierarchySettings::ApplyParentRotation");
static_assert(offsetof(UPCGApplyHierarchySettings, ApplyParentRotationAttribute) == 304, "Offset mismatch for UPCGApplyHierarchySettings::ApplyParentRotationAttribute");
static_assert(offsetof(UPCGApplyHierarchySettings, ApplyParentScale) == 352, "Offset mismatch for UPCGApplyHierarchySettings::ApplyParentScale");
static_assert(offsetof(UPCGApplyHierarchySettings, ApplyParentScaleAttribute) == 360, "Offset mismatch for UPCGApplyHierarchySettings::ApplyParentScaleAttribute");
static_assert(offsetof(UPCGApplyHierarchySettings, ApplyHierarchy) == 408, "Offset mismatch for UPCGApplyHierarchySettings::ApplyHierarchy");
static_assert(offsetof(UPCGApplyHierarchySettings, ApplyHierarchyAttribute) == 416, "Offset mismatch for UPCGApplyHierarchySettings::ApplyHierarchyAttribute");
static_assert(offsetof(UPCGApplyHierarchySettings, bWarnOnPointsWithInvalidParent) == 464, "Offset mismatch for UPCGApplyHierarchySettings::bWarnOnPointsWithInvalidParent");

// /Script/PCG.PCGApplyOnActorSettings
// Kind: Class; super: PCGSettings
class UPCGApplyOnActorSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ObjectReferenceAttribute[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    TArray<void*> TagsToAddOnActors; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyOverrideDescriptions; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PostProcessFunctionNames; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseOneOverrideDataPerElement; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceErrorOnEmptyObjectPath; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSynchronousLoad; // 0x010A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGApplyOnActorSettings, ObjectReferenceAttribute) == 168, "Offset mismatch for UPCGApplyOnActorSettings::ObjectReferenceAttribute");
static_assert(offsetof(UPCGApplyOnActorSettings, TagsToAddOnActors) == 216, "Offset mismatch for UPCGApplyOnActorSettings::TagsToAddOnActors");
static_assert(offsetof(UPCGApplyOnActorSettings, PropertyOverrideDescriptions) == 232, "Offset mismatch for UPCGApplyOnActorSettings::PropertyOverrideDescriptions");
static_assert(offsetof(UPCGApplyOnActorSettings, PostProcessFunctionNames) == 248, "Offset mismatch for UPCGApplyOnActorSettings::PostProcessFunctionNames");
static_assert(offsetof(UPCGApplyOnActorSettings, bUseOneOverrideDataPerElement) == 264, "Offset mismatch for UPCGApplyOnActorSettings::bUseOneOverrideDataPerElement");
static_assert(offsetof(UPCGApplyOnActorSettings, bSilenceErrorOnEmptyObjectPath) == 265, "Offset mismatch for UPCGApplyOnActorSettings::bSilenceErrorOnEmptyObjectPath");
static_assert(offsetof(UPCGApplyOnActorSettings, bSynchronousLoad) == 266, "Offset mismatch for UPCGApplyOnActorSettings::bSynchronousLoad");

// /Script/PCG.PCGApplyScaleToBoundsSettings
// Kind: Class; super: PCGSettings
class UPCGApplyScaleToBoundsSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGApplyScaleToBoundsSettings, Seed) == 80, "Offset mismatch for UPCGApplyScaleToBoundsSettings::Seed");
static_assert(offsetof(UPCGApplyScaleToBoundsSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGApplyScaleToBoundsSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGApplyScaleToBoundsSettings, bUseSeed) == 96, "Offset mismatch for UPCGApplyScaleToBoundsSettings::bUseSeed");
static_assert(offsetof(UPCGApplyScaleToBoundsSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGApplyScaleToBoundsSettings::CachedOverridableParams");
static_assert(offsetof(UPCGApplyScaleToBoundsSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGApplyScaleToBoundsSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGApplyScaleToBoundsSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGApplyScaleToBoundsSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGApplyScaleToBoundsSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGApplyScaleToBoundsSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGApplyScaleToBoundsSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGApplyScaleToBoundsSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGApplyScaleToBoundsSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGApplyScaleToBoundsSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGApplyScaleToBoundsSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGApplyScaleToBoundsSettings::DebugBufferSize");

// /Script/PCG.PCGApplySplineToComponentSettings
// Kind: Class; super: PCGSettings
class UPCGApplySplineToComponentSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ComponentReferenceAttribute[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSilenceWarningOnUnresolvedPath; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGApplySplineToComponentSettings, ComponentReferenceAttribute) == 168, "Offset mismatch for UPCGApplySplineToComponentSettings::ComponentReferenceAttribute");
static_assert(offsetof(UPCGApplySplineToComponentSettings, bSilenceWarningOnUnresolvedPath) == 216, "Offset mismatch for UPCGApplySplineToComponentSettings::bSilenceWarningOnUnresolvedPath");

// /Script/PCG.PCGAssetExporter
// Kind: Class; super: Object
class UPCGAssetExporter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGAssetExporterUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGAssetExporterUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGAttractSettings
// Kind: Class; super: PCGSettings
class UPCGAttractSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t AttractorIndexAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    double Distance; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bRemoveUnattractedPoints; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E9
    std::uint8_t TargetAttribute[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseSourceWeight; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0121
    std::uint8_t SourceWeightAttribute[0x30]; // 0x0128 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseTargetWeight; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0159
    std::uint8_t TargetWeightAttribute[0x30]; // 0x0160 (Size: 0x30, Type: StructProperty)
    double Weight; // 0x0190 (Size: 0x8, Type: DoubleProperty)
    TMap<void*, void*> SourceAndTargetAttributeMapping; // 0x0198 (Size: 0x10, Type: MapProperty)
    std::uint8_t bCopyAllAttributesFromTarget; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputAttractIndex; // 0x01A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x6]; // 0x01AA
    std::uint8_t OutputAttractIndexAttribute[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGAttractSettings, Mode) == 168, "Offset mismatch for UPCGAttractSettings::Mode");
static_assert(offsetof(UPCGAttractSettings, AttractorIndexAttribute) == 176, "Offset mismatch for UPCGAttractSettings::AttractorIndexAttribute");
static_assert(offsetof(UPCGAttractSettings, Distance) == 224, "Offset mismatch for UPCGAttractSettings::Distance");
static_assert(offsetof(UPCGAttractSettings, bRemoveUnattractedPoints) == 232, "Offset mismatch for UPCGAttractSettings::bRemoveUnattractedPoints");
static_assert(offsetof(UPCGAttractSettings, TargetAttribute) == 240, "Offset mismatch for UPCGAttractSettings::TargetAttribute");
static_assert(offsetof(UPCGAttractSettings, bUseSourceWeight) == 288, "Offset mismatch for UPCGAttractSettings::bUseSourceWeight");
static_assert(offsetof(UPCGAttractSettings, SourceWeightAttribute) == 296, "Offset mismatch for UPCGAttractSettings::SourceWeightAttribute");
static_assert(offsetof(UPCGAttractSettings, bUseTargetWeight) == 344, "Offset mismatch for UPCGAttractSettings::bUseTargetWeight");
static_assert(offsetof(UPCGAttractSettings, TargetWeightAttribute) == 352, "Offset mismatch for UPCGAttractSettings::TargetWeightAttribute");
static_assert(offsetof(UPCGAttractSettings, Weight) == 400, "Offset mismatch for UPCGAttractSettings::Weight");
static_assert(offsetof(UPCGAttractSettings, SourceAndTargetAttributeMapping) == 408, "Offset mismatch for UPCGAttractSettings::SourceAndTargetAttributeMapping");
static_assert(offsetof(UPCGAttractSettings, bCopyAllAttributesFromTarget) == 424, "Offset mismatch for UPCGAttractSettings::bCopyAllAttributesFromTarget");
static_assert(offsetof(UPCGAttractSettings, bOutputAttractIndex) == 425, "Offset mismatch for UPCGAttractSettings::bOutputAttractIndex");
static_assert(offsetof(UPCGAttractSettings, OutputAttractIndexAttribute) == 432, "Offset mismatch for UPCGAttractSettings::OutputAttractIndexAttribute");

// /Script/PCG.PCGAttributeAnalysisKernelBase
// Kind: Class; super: PCGComputeKernel
class UPCGAttributeAnalysisKernelBase
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t AttributeName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::int32_t MaxIntValue; // 0x00BC (Size: 0x4, Type: IntProperty)
    std::uint8_t bEmitPerDataCounts; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputRawBuffer; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MaxNumUniqueValuesSource; // 0x00C2 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGAttributeAnalysisKernelBase, AttributeName) == 184, "Offset mismatch for UPCGAttributeAnalysisKernelBase::AttributeName");
static_assert(offsetof(UPCGAttributeAnalysisKernelBase, MaxIntValue) == 188, "Offset mismatch for UPCGAttributeAnalysisKernelBase::MaxIntValue");
static_assert(offsetof(UPCGAttributeAnalysisKernelBase, bEmitPerDataCounts) == 192, "Offset mismatch for UPCGAttributeAnalysisKernelBase::bEmitPerDataCounts");
static_assert(offsetof(UPCGAttributeAnalysisKernelBase, bOutputRawBuffer) == 193, "Offset mismatch for UPCGAttributeAnalysisKernelBase::bOutputRawBuffer");
static_assert(offsetof(UPCGAttributeAnalysisKernelBase, MaxNumUniqueValuesSource) == 194, "Offset mismatch for UPCGAttributeAnalysisKernelBase::MaxNumUniqueValuesSource");

// /Script/PCG.PCGAttributeCastSettings
// Kind: Class; super: PCGSettings
class UPCGAttributeCastSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputType; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    std::uint8_t OutputTarget[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGAttributeCastSettings, InputSource) == 168, "Offset mismatch for UPCGAttributeCastSettings::InputSource");
static_assert(offsetof(UPCGAttributeCastSettings, OutputType) == 216, "Offset mismatch for UPCGAttributeCastSettings::OutputType");
static_assert(offsetof(UPCGAttributeCastSettings, OutputTarget) == 224, "Offset mismatch for UPCGAttributeCastSettings::OutputTarget");

// /Script/PCG.PCGAttributeExtractorTestObject
// Kind: Class; super: Object
class UPCGAttributeExtractorTestObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double DoubleValue; // 0x0028 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPCGAttributeExtractorTestObject, DoubleValue) == 40, "Offset mismatch for UPCGAttributeExtractorTestObject::DoubleValue");

// /Script/PCG.PCGAttributeFilteringRangeSettings
// Kind: Class; super: PCGSettings
class UPCGAttributeFilteringRangeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t TargetAttribute[0x38]; // 0x00A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t MinThreshold[0x1A0]; // 0x00E0 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t MaxThreshold[0x1A0]; // 0x0280 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t bWarnOnDataMissingAttribute; // 0x0420 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateOutputDataEvenIfEmpty; // 0x0421 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasSpatialToPointDeprecation; // 0x0422 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGAttributeFilteringRangeSettings, TargetAttribute) == 168, "Offset mismatch for UPCGAttributeFilteringRangeSettings::TargetAttribute");
static_assert(offsetof(UPCGAttributeFilteringRangeSettings, MinThreshold) == 224, "Offset mismatch for UPCGAttributeFilteringRangeSettings::MinThreshold");
static_assert(offsetof(UPCGAttributeFilteringRangeSettings, MaxThreshold) == 640, "Offset mismatch for UPCGAttributeFilteringRangeSettings::MaxThreshold");
static_assert(offsetof(UPCGAttributeFilteringRangeSettings, bWarnOnDataMissingAttribute) == 1056, "Offset mismatch for UPCGAttributeFilteringRangeSettings::bWarnOnDataMissingAttribute");
static_assert(offsetof(UPCGAttributeFilteringRangeSettings, bGenerateOutputDataEvenIfEmpty) == 1057, "Offset mismatch for UPCGAttributeFilteringRangeSettings::bGenerateOutputDataEvenIfEmpty");
static_assert(offsetof(UPCGAttributeFilteringRangeSettings, bHasSpatialToPointDeprecation) == 1058, "Offset mismatch for UPCGAttributeFilteringRangeSettings::bHasSpatialToPointDeprecation");

// /Script/PCG.PCGAttributeFilteringSettings
// Kind: Class; super: PCGSettings
class UPCGAttributeFilteringSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Operator; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t TargetAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseConstantThreshold; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    std::uint8_t ThresholdAttribute[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseSpatialQuery; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFilterEachInputWithEachFilterDataRespectively; // 0x0119 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x011A
    std::uint8_t AttributeTypes[0x160]; // 0x0120 (Size: 0x160, Type: StructProperty)
    std::uint8_t bWarnOnDataMissingAttribute; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateOutputDataEvenIfEmpty; // 0x0281 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasSpatialToPointDeprecation; // 0x0282 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGAttributeFilteringSettings, Operator) == 168, "Offset mismatch for UPCGAttributeFilteringSettings::Operator");
static_assert(offsetof(UPCGAttributeFilteringSettings, TargetAttribute) == 176, "Offset mismatch for UPCGAttributeFilteringSettings::TargetAttribute");
static_assert(offsetof(UPCGAttributeFilteringSettings, bUseConstantThreshold) == 224, "Offset mismatch for UPCGAttributeFilteringSettings::bUseConstantThreshold");
static_assert(offsetof(UPCGAttributeFilteringSettings, ThresholdAttribute) == 232, "Offset mismatch for UPCGAttributeFilteringSettings::ThresholdAttribute");
static_assert(offsetof(UPCGAttributeFilteringSettings, bUseSpatialQuery) == 280, "Offset mismatch for UPCGAttributeFilteringSettings::bUseSpatialQuery");
static_assert(offsetof(UPCGAttributeFilteringSettings, bFilterEachInputWithEachFilterDataRespectively) == 281, "Offset mismatch for UPCGAttributeFilteringSettings::bFilterEachInputWithEachFilterDataRespectively");
static_assert(offsetof(UPCGAttributeFilteringSettings, AttributeTypes) == 288, "Offset mismatch for UPCGAttributeFilteringSettings::AttributeTypes");
static_assert(offsetof(UPCGAttributeFilteringSettings, bWarnOnDataMissingAttribute) == 640, "Offset mismatch for UPCGAttributeFilteringSettings::bWarnOnDataMissingAttribute");
static_assert(offsetof(UPCGAttributeFilteringSettings, bGenerateOutputDataEvenIfEmpty) == 641, "Offset mismatch for UPCGAttributeFilteringSettings::bGenerateOutputDataEvenIfEmpty");
static_assert(offsetof(UPCGAttributeFilteringSettings, bHasSpatialToPointDeprecation) == 642, "Offset mismatch for UPCGAttributeFilteringSettings::bHasSpatialToPointDeprecation");

// /Script/PCG.PCGAttributeGetFromIndexSettings
// Kind: Class; super: PCGSettings
class UPCGAttributeGetFromIndexSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::int32_t Index; // 0x00A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGAttributeGetFromIndexSettings, Index) == 168, "Offset mismatch for UPCGAttributeGetFromIndexSettings::Index");

// /Script/PCG.PCGAttributeGetFromPointIndexSettings
// Kind: Class; super: PCGSettings
class UPCGAttributeGetFromPointIndexSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::int32_t Index; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00DC
    std::uint8_t OutputAttributeName[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bForceOutputAttributeToBeInElementsDomain; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGAttributeGetFromPointIndexSettings, InputSource) == 168, "Offset mismatch for UPCGAttributeGetFromPointIndexSettings::InputSource");
static_assert(offsetof(UPCGAttributeGetFromPointIndexSettings, Index) == 216, "Offset mismatch for UPCGAttributeGetFromPointIndexSettings::Index");
static_assert(offsetof(UPCGAttributeGetFromPointIndexSettings, OutputAttributeName) == 224, "Offset mismatch for UPCGAttributeGetFromPointIndexSettings::OutputAttributeName");
static_assert(offsetof(UPCGAttributeGetFromPointIndexSettings, bForceOutputAttributeToBeInElementsDomain) == 272, "Offset mismatch for UPCGAttributeGetFromPointIndexSettings::bForceOutputAttributeToBeInElementsDomain");

// /Script/PCG.PCGAttributeNoiseSettings
// Kind: Class; super: PCGSettings
class UPCGAttributeNoiseSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputTarget[0x30]; // 0x00D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Mode; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0109
    float NoiseMin; // 0x010C (Size: 0x4, Type: FloatProperty)
    float NoiseMax; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInvertSource; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampResult; // 0x0115 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasCustomSeedSource; // 0x0116 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0117
    std::uint8_t CustomSeedSource[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    std::uint8_t bHasSpatialToPointDeprecation; // 0x0148 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGAttributeNoiseSettings, InputSource) == 168, "Offset mismatch for UPCGAttributeNoiseSettings::InputSource");
static_assert(offsetof(UPCGAttributeNoiseSettings, OutputTarget) == 216, "Offset mismatch for UPCGAttributeNoiseSettings::OutputTarget");
static_assert(offsetof(UPCGAttributeNoiseSettings, Mode) == 264, "Offset mismatch for UPCGAttributeNoiseSettings::Mode");
static_assert(offsetof(UPCGAttributeNoiseSettings, NoiseMin) == 268, "Offset mismatch for UPCGAttributeNoiseSettings::NoiseMin");
static_assert(offsetof(UPCGAttributeNoiseSettings, NoiseMax) == 272, "Offset mismatch for UPCGAttributeNoiseSettings::NoiseMax");
static_assert(offsetof(UPCGAttributeNoiseSettings, bInvertSource) == 276, "Offset mismatch for UPCGAttributeNoiseSettings::bInvertSource");
static_assert(offsetof(UPCGAttributeNoiseSettings, bClampResult) == 277, "Offset mismatch for UPCGAttributeNoiseSettings::bClampResult");
static_assert(offsetof(UPCGAttributeNoiseSettings, bHasCustomSeedSource) == 278, "Offset mismatch for UPCGAttributeNoiseSettings::bHasCustomSeedSource");
static_assert(offsetof(UPCGAttributeNoiseSettings, CustomSeedSource) == 280, "Offset mismatch for UPCGAttributeNoiseSettings::CustomSeedSource");
static_assert(offsetof(UPCGAttributeNoiseSettings, bHasSpatialToPointDeprecation) == 328, "Offset mismatch for UPCGAttributeNoiseSettings::bHasSpatialToPointDeprecation");

// /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGAttributePropertySelectorBlueprintHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGAttributeReduceSettings
// Kind: Class; super: PCGSettings
class UPCGAttributeReduceSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bWriteToDataDomain; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D9
    std::uint8_t OutputAttributeName[0x4]; // 0x00DC (Size: 0x4, Type: NameProperty)
    std::uint8_t Operation; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    FString JoinDelimiter; // 0x00E8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bMergeOutputAttributes; // 0x00F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGAttributeReduceSettings, InputSource) == 168, "Offset mismatch for UPCGAttributeReduceSettings::InputSource");
static_assert(offsetof(UPCGAttributeReduceSettings, bWriteToDataDomain) == 216, "Offset mismatch for UPCGAttributeReduceSettings::bWriteToDataDomain");
static_assert(offsetof(UPCGAttributeReduceSettings, OutputAttributeName) == 220, "Offset mismatch for UPCGAttributeReduceSettings::OutputAttributeName");
static_assert(offsetof(UPCGAttributeReduceSettings, Operation) == 224, "Offset mismatch for UPCGAttributeReduceSettings::Operation");
static_assert(offsetof(UPCGAttributeReduceSettings, JoinDelimiter) == 232, "Offset mismatch for UPCGAttributeReduceSettings::JoinDelimiter");
static_assert(offsetof(UPCGAttributeReduceSettings, bMergeOutputAttributes) == 248, "Offset mismatch for UPCGAttributeReduceSettings::bMergeOutputAttributes");

// /Script/PCG.PCGAttributeRemapSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGAttributeRemapSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Mode; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    std::uint8_t InputSource[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    double InRangeMin; // 0x0140 (Size: 0x8, Type: DoubleProperty)
    double InRangeMax; // 0x0148 (Size: 0x8, Type: DoubleProperty)
    double OutRangeMin; // 0x0150 (Size: 0x8, Type: DoubleProperty)
    double OutRangeMax; // 0x0158 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bClampToUnitRange; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreValuesOutsideInputRange; // 0x0161 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInverseRange; // 0x0162 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x0163
    std::uint8_t Curve[0x1]; // 0x0168 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGAttributeRemapSettings, Mode) == 264, "Offset mismatch for UPCGAttributeRemapSettings::Mode");
static_assert(offsetof(UPCGAttributeRemapSettings, InputSource) == 272, "Offset mismatch for UPCGAttributeRemapSettings::InputSource");
static_assert(offsetof(UPCGAttributeRemapSettings, InRangeMin) == 320, "Offset mismatch for UPCGAttributeRemapSettings::InRangeMin");
static_assert(offsetof(UPCGAttributeRemapSettings, InRangeMax) == 328, "Offset mismatch for UPCGAttributeRemapSettings::InRangeMax");
static_assert(offsetof(UPCGAttributeRemapSettings, OutRangeMin) == 336, "Offset mismatch for UPCGAttributeRemapSettings::OutRangeMin");
static_assert(offsetof(UPCGAttributeRemapSettings, OutRangeMax) == 344, "Offset mismatch for UPCGAttributeRemapSettings::OutRangeMax");
static_assert(offsetof(UPCGAttributeRemapSettings, bClampToUnitRange) == 352, "Offset mismatch for UPCGAttributeRemapSettings::bClampToUnitRange");
static_assert(offsetof(UPCGAttributeRemapSettings, bIgnoreValuesOutsideInputRange) == 353, "Offset mismatch for UPCGAttributeRemapSettings::bIgnoreValuesOutsideInputRange");
static_assert(offsetof(UPCGAttributeRemapSettings, bAllowInverseRange) == 354, "Offset mismatch for UPCGAttributeRemapSettings::bAllowInverseRange");
static_assert(offsetof(UPCGAttributeRemapSettings, Curve) == 360, "Offset mismatch for UPCGAttributeRemapSettings::Curve");

// /Script/PCG.PCGAttributeRemoveDuplicatesSettings
// Kind: Class; super: PCGSettings
class UPCGAttributeRemoveDuplicatesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> AttributeSelectors; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    FString AttributeNamesToRemoveDuplicates; // 0x00B8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPCGAttributeRemoveDuplicatesSettings, AttributeSelectors) == 168, "Offset mismatch for UPCGAttributeRemoveDuplicatesSettings::AttributeSelectors");
static_assert(offsetof(UPCGAttributeRemoveDuplicatesSettings, AttributeNamesToRemoveDuplicates) == 184, "Offset mismatch for UPCGAttributeRemoveDuplicatesSettings::AttributeNamesToRemoveDuplicates");

// /Script/PCG.PCGAttributeSelectSettings
// Kind: Class; super: PCGSettings
class UPCGAttributeSelectSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputAttributeName[0x4]; // 0x00D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t Operation; // 0x00DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00DD
    std::uint8_t Axis; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0xF]; // 0x00E1
    std::uint8_t CustomAxis[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGAttributeSelectSettings, InputSource) == 168, "Offset mismatch for UPCGAttributeSelectSettings::InputSource");
static_assert(offsetof(UPCGAttributeSelectSettings, OutputAttributeName) == 216, "Offset mismatch for UPCGAttributeSelectSettings::OutputAttributeName");
static_assert(offsetof(UPCGAttributeSelectSettings, Operation) == 220, "Offset mismatch for UPCGAttributeSelectSettings::Operation");
static_assert(offsetof(UPCGAttributeSelectSettings, Axis) == 224, "Offset mismatch for UPCGAttributeSelectSettings::Axis");
static_assert(offsetof(UPCGAttributeSelectSettings, CustomAxis) == 240, "Offset mismatch for UPCGAttributeSelectSettings::CustomAxis");

// /Script/PCG.PCGAttributeTransferSettings
// Kind: Class; super: PCGCopyAttributesSettings
class UPCGAttributeTransferSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Operation; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t bCopyAllAttributes; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyAllDomains; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00AE
    TMap<void*, void*> MetadataDomainsMapping; // 0x00B0 (Size: 0x10, Type: MapProperty)
    std::uint8_t InputSource[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputTarget[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGAttributeTransferSettings, Operation) == 168, "Offset mismatch for UPCGAttributeTransferSettings::Operation");
static_assert(offsetof(UPCGAttributeTransferSettings, bCopyAllAttributes) == 172, "Offset mismatch for UPCGAttributeTransferSettings::bCopyAllAttributes");
static_assert(offsetof(UPCGAttributeTransferSettings, bCopyAllDomains) == 173, "Offset mismatch for UPCGAttributeTransferSettings::bCopyAllDomains");
static_assert(offsetof(UPCGAttributeTransferSettings, MetadataDomainsMapping) == 176, "Offset mismatch for UPCGAttributeTransferSettings::MetadataDomainsMapping");
static_assert(offsetof(UPCGAttributeTransferSettings, InputSource) == 192, "Offset mismatch for UPCGAttributeTransferSettings::InputSource");
static_assert(offsetof(UPCGAttributeTransferSettings, OutputTarget) == 240, "Offset mismatch for UPCGAttributeTransferSettings::OutputTarget");

// /Script/PCG.PCGBadOutputsNodeSettings
// Kind: Class; super: PCGSettings
class UPCGBadOutputsNodeSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGBadOutputsNodeSettings, Seed) == 80, "Offset mismatch for UPCGBadOutputsNodeSettings::Seed");
static_assert(offsetof(UPCGBadOutputsNodeSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGBadOutputsNodeSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGBadOutputsNodeSettings, bUseSeed) == 96, "Offset mismatch for UPCGBadOutputsNodeSettings::bUseSeed");
static_assert(offsetof(UPCGBadOutputsNodeSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGBadOutputsNodeSettings::CachedOverridableParams");
static_assert(offsetof(UPCGBadOutputsNodeSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGBadOutputsNodeSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGBadOutputsNodeSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGBadOutputsNodeSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGBadOutputsNodeSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGBadOutputsNodeSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGBadOutputsNodeSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGBadOutputsNodeSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGBadOutputsNodeSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGBadOutputsNodeSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGBadOutputsNodeSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGBadOutputsNodeSettings::DebugBufferSize");

// /Script/PCG.PCGBakeStaticMeshAttributesSettings
// Kind: Class; super: PCGSettings
class UPCGBakeStaticMeshAttributesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t StaticMesh[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BakeParams[0x14]; // 0x00C8 (Size: 0x14, Type: StructProperty)
    std::uint8_t bSynchronousLoad; // 0x00DC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGBakeStaticMeshAttributesSettings, StaticMesh) == 168, "Offset mismatch for UPCGBakeStaticMeshAttributesSettings::StaticMesh");
static_assert(offsetof(UPCGBakeStaticMeshAttributesSettings, BakeParams) == 200, "Offset mismatch for UPCGBakeStaticMeshAttributesSettings::BakeParams");
static_assert(offsetof(UPCGBakeStaticMeshAttributesSettings, bSynchronousLoad) == 220, "Offset mismatch for UPCGBakeStaticMeshAttributesSettings::bSynchronousLoad");

// /Script/PCG.PCGBasePointData
// Kind: Class; super: PCGSpatialData
class UPCGBasePointData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TWeakObjectPtr<void> TargetActor; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bKeepZeroDensityPoints; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasCachedLastSelector; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    std::uint8_t CachedLastSelector[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGBasePointData, TargetActor) == 72, "Offset mismatch for UPCGBasePointData::TargetActor");
static_assert(offsetof(UPCGBasePointData, bKeepZeroDensityPoints) == 80, "Offset mismatch for UPCGBasePointData::bKeepZeroDensityPoints");
static_assert(offsetof(UPCGBasePointData, bHasCachedLastSelector) == 81, "Offset mismatch for UPCGBasePointData::bHasCachedLastSelector");
static_assert(offsetof(UPCGBasePointData, CachedLastSelector) == 88, "Offset mismatch for UPCGBasePointData::CachedLastSelector");

// /Script/PCG.PCGBaseSubgraphNode
// Kind: Class; super: PCGNode
class UPCGBaseSubgraphNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName NodeTitle; // 0x0028 (Size: 0x8, Type: NameProperty)
    void* SettingsInterface; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OutboundNodes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InboundEdges; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutboundEdges; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputPins; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputPins; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGBaseSubgraphNode, NodeTitle) == 40, "Offset mismatch for UPCGBaseSubgraphNode::NodeTitle");
static_assert(offsetof(UPCGBaseSubgraphNode, SettingsInterface) == 48, "Offset mismatch for UPCGBaseSubgraphNode::SettingsInterface");
static_assert(offsetof(UPCGBaseSubgraphNode, OutboundNodes) == 56, "Offset mismatch for UPCGBaseSubgraphNode::OutboundNodes");
static_assert(offsetof(UPCGBaseSubgraphNode, InboundEdges) == 72, "Offset mismatch for UPCGBaseSubgraphNode::InboundEdges");
static_assert(offsetof(UPCGBaseSubgraphNode, OutboundEdges) == 88, "Offset mismatch for UPCGBaseSubgraphNode::OutboundEdges");
static_assert(offsetof(UPCGBaseSubgraphNode, InputPins) == 104, "Offset mismatch for UPCGBaseSubgraphNode::InputPins");
static_assert(offsetof(UPCGBaseSubgraphNode, OutputPins) == 120, "Offset mismatch for UPCGBaseSubgraphNode::OutputPins");

// /Script/PCG.PCGBaseSubgraphSettings
// Kind: Class; super: PCGSettings
class UPCGBaseSubgraphSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGBaseSubgraphSettings, Seed) == 80, "Offset mismatch for UPCGBaseSubgraphSettings::Seed");
static_assert(offsetof(UPCGBaseSubgraphSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGBaseSubgraphSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGBaseSubgraphSettings, bUseSeed) == 96, "Offset mismatch for UPCGBaseSubgraphSettings::bUseSeed");
static_assert(offsetof(UPCGBaseSubgraphSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGBaseSubgraphSettings::CachedOverridableParams");
static_assert(offsetof(UPCGBaseSubgraphSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGBaseSubgraphSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGBaseSubgraphSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGBaseSubgraphSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGBaseSubgraphSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGBaseSubgraphSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGBaseSubgraphSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGBaseSubgraphSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGBaseSubgraphSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGBaseSubgraphSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGBaseSubgraphSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGBaseSubgraphSettings::DebugBufferSize");

// /Script/PCG.PCGBaseSubsystem
// Kind: Class; super: Interface
class UPCGBaseSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGBaseTextureData
// Kind: Class; super: PCGTexture2DBaseData
class UPCGBaseTextureData
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t Format; // 0x0180 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumMips; // 0x0181 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Filter; // 0x0182 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xD]; // 0x0183
    std::uint8_t Bounds[0x38]; // 0x0190 (Size: 0x38, Type: StructProperty)
    TArray<void*> ColorData; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGBaseTextureData, Format) == 384, "Offset mismatch for UPCGBaseTextureData::Format");
static_assert(offsetof(UPCGBaseTextureData, NumMips) == 385, "Offset mismatch for UPCGBaseTextureData::NumMips");
static_assert(offsetof(UPCGBaseTextureData, Filter) == 386, "Offset mismatch for UPCGBaseTextureData::Filter");
static_assert(offsetof(UPCGBaseTextureData, Bounds) == 400, "Offset mismatch for UPCGBaseTextureData::Bounds");
static_assert(offsetof(UPCGBaseTextureData, ColorData) == 456, "Offset mismatch for UPCGBaseTextureData::ColorData");

// /Script/PCG.PCGBlueprintBaseElement
// Kind: Class; super: Object
class UPCGBlueprintBaseElement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsCacheable; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComputeFullDataCrc; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresGameThread; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x002B
    TArray<void*> CustomInputPins; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CustomOutputPins; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasDefaultInPin; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDefaultOutPin; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDynamicPins; // 0x0052 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGBlueprintBaseElement, bIsCacheable) == 40, "Offset mismatch for UPCGBlueprintBaseElement::bIsCacheable");
static_assert(offsetof(UPCGBlueprintBaseElement, bComputeFullDataCrc) == 41, "Offset mismatch for UPCGBlueprintBaseElement::bComputeFullDataCrc");
static_assert(offsetof(UPCGBlueprintBaseElement, bRequiresGameThread) == 42, "Offset mismatch for UPCGBlueprintBaseElement::bRequiresGameThread");
static_assert(offsetof(UPCGBlueprintBaseElement, CustomInputPins) == 48, "Offset mismatch for UPCGBlueprintBaseElement::CustomInputPins");
static_assert(offsetof(UPCGBlueprintBaseElement, CustomOutputPins) == 64, "Offset mismatch for UPCGBlueprintBaseElement::CustomOutputPins");
static_assert(offsetof(UPCGBlueprintBaseElement, bHasDefaultInPin) == 80, "Offset mismatch for UPCGBlueprintBaseElement::bHasDefaultInPin");
static_assert(offsetof(UPCGBlueprintBaseElement, bHasDefaultOutPin) == 81, "Offset mismatch for UPCGBlueprintBaseElement::bHasDefaultOutPin");
static_assert(offsetof(UPCGBlueprintBaseElement, bHasDynamicPins) == 82, "Offset mismatch for UPCGBlueprintBaseElement::bHasDynamicPins");

// /Script/PCG.PCGBlueprintElement
// Kind: Class; super: PCGBlueprintBaseElement
class UPCGBlueprintElement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsCacheable; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComputeFullDataCrc; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresGameThread; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x002B
    TArray<void*> CustomInputPins; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CustomOutputPins; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasDefaultInPin; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDefaultOutPin; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDynamicPins; // 0x0052 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGBlueprintElement, bIsCacheable) == 40, "Offset mismatch for UPCGBlueprintElement::bIsCacheable");
static_assert(offsetof(UPCGBlueprintElement, bComputeFullDataCrc) == 41, "Offset mismatch for UPCGBlueprintElement::bComputeFullDataCrc");
static_assert(offsetof(UPCGBlueprintElement, bRequiresGameThread) == 42, "Offset mismatch for UPCGBlueprintElement::bRequiresGameThread");
static_assert(offsetof(UPCGBlueprintElement, CustomInputPins) == 48, "Offset mismatch for UPCGBlueprintElement::CustomInputPins");
static_assert(offsetof(UPCGBlueprintElement, CustomOutputPins) == 64, "Offset mismatch for UPCGBlueprintElement::CustomOutputPins");
static_assert(offsetof(UPCGBlueprintElement, bHasDefaultInPin) == 80, "Offset mismatch for UPCGBlueprintElement::bHasDefaultInPin");
static_assert(offsetof(UPCGBlueprintElement, bHasDefaultOutPin) == 81, "Offset mismatch for UPCGBlueprintElement::bHasDefaultOutPin");
static_assert(offsetof(UPCGBlueprintElement, bHasDynamicPins) == 82, "Offset mismatch for UPCGBlueprintElement::bHasDynamicPins");

// /Script/PCG.PCGBlueprintHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGBlueprintHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGBlueprintPinHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGBlueprintPinHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGBlueprintPointProcessorElement
// Kind: Class; super: PCGBlueprintBaseElement
class UPCGBlueprintPointProcessorElement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsCacheable; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComputeFullDataCrc; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresGameThread; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x002B
    TArray<void*> CustomInputPins; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CustomOutputPins; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasDefaultInPin; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDefaultOutPin; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDynamicPins; // 0x0052 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGBlueprintPointProcessorElement, bIsCacheable) == 40, "Offset mismatch for UPCGBlueprintPointProcessorElement::bIsCacheable");
static_assert(offsetof(UPCGBlueprintPointProcessorElement, bComputeFullDataCrc) == 41, "Offset mismatch for UPCGBlueprintPointProcessorElement::bComputeFullDataCrc");
static_assert(offsetof(UPCGBlueprintPointProcessorElement, bRequiresGameThread) == 42, "Offset mismatch for UPCGBlueprintPointProcessorElement::bRequiresGameThread");
static_assert(offsetof(UPCGBlueprintPointProcessorElement, CustomInputPins) == 48, "Offset mismatch for UPCGBlueprintPointProcessorElement::CustomInputPins");
static_assert(offsetof(UPCGBlueprintPointProcessorElement, CustomOutputPins) == 64, "Offset mismatch for UPCGBlueprintPointProcessorElement::CustomOutputPins");
static_assert(offsetof(UPCGBlueprintPointProcessorElement, bHasDefaultInPin) == 80, "Offset mismatch for UPCGBlueprintPointProcessorElement::bHasDefaultInPin");
static_assert(offsetof(UPCGBlueprintPointProcessorElement, bHasDefaultOutPin) == 81, "Offset mismatch for UPCGBlueprintPointProcessorElement::bHasDefaultOutPin");
static_assert(offsetof(UPCGBlueprintPointProcessorElement, bHasDynamicPins) == 82, "Offset mismatch for UPCGBlueprintPointProcessorElement::bHasDynamicPins");

// /Script/PCG.PCGBlueprintPointProcessorSimpleElement
// Kind: Class; super: PCGBlueprintBaseElement
class UPCGBlueprintPointProcessorSimpleElement
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bInheritMetadata; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInheritSpatialData; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    std::int32_t PropertiesToAllocate; // 0x006C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGBlueprintPointProcessorSimpleElement, bInheritMetadata) == 104, "Offset mismatch for UPCGBlueprintPointProcessorSimpleElement::bInheritMetadata");
static_assert(offsetof(UPCGBlueprintPointProcessorSimpleElement, bInheritSpatialData) == 105, "Offset mismatch for UPCGBlueprintPointProcessorSimpleElement::bInheritSpatialData");
static_assert(offsetof(UPCGBlueprintPointProcessorSimpleElement, PropertiesToAllocate) == 108, "Offset mismatch for UPCGBlueprintPointProcessorSimpleElement::PropertiesToAllocate");

// /Script/PCG.PCGBlueprintSettings
// Kind: Class; super: PCGSettings
class UPCGBlueprintSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* BlueprintElementType; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    void* BlueprintElementInstance; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGBlueprintSettings, BlueprintElementType) == 168, "Offset mismatch for UPCGBlueprintSettings::BlueprintElementType");
static_assert(offsetof(UPCGBlueprintSettings, BlueprintElementInstance) == 176, "Offset mismatch for UPCGBlueprintSettings::BlueprintElementInstance");

// /Script/PCG.PCGBlurSettings
// Kind: Class; super: PCGSettings
class UPCGBlurSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputTarget[0x30]; // 0x00D8 (Size: 0x30, Type: StructProperty)
    std::int32_t NumIterations; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x010C
    double SearchDistance; // 0x0110 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t BlurMode; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0119
    std::uint8_t bUseCustomStandardDeviation; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    double CustomStandardDeviation; // 0x0120 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPCGBlurSettings, InputSource) == 168, "Offset mismatch for UPCGBlurSettings::InputSource");
static_assert(offsetof(UPCGBlurSettings, OutputTarget) == 216, "Offset mismatch for UPCGBlurSettings::OutputTarget");
static_assert(offsetof(UPCGBlurSettings, NumIterations) == 264, "Offset mismatch for UPCGBlurSettings::NumIterations");
static_assert(offsetof(UPCGBlurSettings, SearchDistance) == 272, "Offset mismatch for UPCGBlurSettings::SearchDistance");
static_assert(offsetof(UPCGBlurSettings, BlurMode) == 280, "Offset mismatch for UPCGBlurSettings::BlurMode");
static_assert(offsetof(UPCGBlurSettings, bUseCustomStandardDeviation) == 284, "Offset mismatch for UPCGBlurSettings::bUseCustomStandardDeviation");
static_assert(offsetof(UPCGBlurSettings, CustomStandardDeviation) == 288, "Offset mismatch for UPCGBlurSettings::CustomStandardDeviation");

// /Script/PCG.PCGBooleanSelectSettings
// Kind: Class; super: PCGControlFlowSettings
class UPCGBooleanSelectSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bUseInputB; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGBooleanSelectSettings, bUseInputB) == 168, "Offset mismatch for UPCGBooleanSelectSettings::bUseInputB");

// /Script/PCG.PCGBoundsFromMeshSettings
// Kind: Class; super: PCGSettings
class UPCGBoundsFromMeshSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t MeshAttribute[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSilenceAttributeNotFoundErrors; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSynchronousLoad; // 0x00D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGBoundsFromMeshSettings, MeshAttribute) == 168, "Offset mismatch for UPCGBoundsFromMeshSettings::MeshAttribute");
static_assert(offsetof(UPCGBoundsFromMeshSettings, bSilenceAttributeNotFoundErrors) == 216, "Offset mismatch for UPCGBoundsFromMeshSettings::bSilenceAttributeNotFoundErrors");
static_assert(offsetof(UPCGBoundsFromMeshSettings, bSynchronousLoad) == 217, "Offset mismatch for UPCGBoundsFromMeshSettings::bSynchronousLoad");

// /Script/PCG.PCGBoundsModifierSettings
// Kind: Class; super: PCGSettings
class UPCGBoundsModifierSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t BoundsMin[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundsMax[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAffectSteepness; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E1
    float Steepness; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPCGBoundsModifierSettings, Mode) == 168, "Offset mismatch for UPCGBoundsModifierSettings::Mode");
static_assert(offsetof(UPCGBoundsModifierSettings, BoundsMin) == 176, "Offset mismatch for UPCGBoundsModifierSettings::BoundsMin");
static_assert(offsetof(UPCGBoundsModifierSettings, BoundsMax) == 200, "Offset mismatch for UPCGBoundsModifierSettings::BoundsMax");
static_assert(offsetof(UPCGBoundsModifierSettings, bAffectSteepness) == 224, "Offset mismatch for UPCGBoundsModifierSettings::bAffectSteepness");
static_assert(offsetof(UPCGBoundsModifierSettings, Steepness) == 228, "Offset mismatch for UPCGBoundsModifierSettings::Steepness");

// /Script/PCG.PCGBranchSettings
// Kind: Class; super: PCGControlFlowSettings
class UPCGBranchSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bOutputToB; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGBranchSettings, bOutputToB) == 168, "Offset mismatch for UPCGBranchSettings::bOutputToB");

// /Script/PCG.PCGBuilderVolume
// Kind: Class; super: Volume
class UPCGBuilderVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t BrushType; // 0x0270 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0271
    std::uint8_t BrushColor[0x4]; // 0x0274 (Size: 0x4, Type: StructProperty)
    std::int32_t PolyFlags; // 0x0278 (Size: 0x4, Type: IntProperty)
    std::uint8_t bColored; // 0x027C (Size: 0x1, Type: BoolProperty)
    // 0x027C BoolProperty bNotForClientOrServer (shared storage)
    // 0x027C BoolProperty bPlaceableFromClassBrowser (shared storage)
    // 0x027C BoolProperty bSolidWhenSelected (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x027D
    void* Brush; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* BrushComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInManipulation; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0291
    TArray<void*> SavedSelections; // 0x0298 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGBuilderVolume, BrushType) == 624, "Offset mismatch for UPCGBuilderVolume::BrushType");
static_assert(offsetof(UPCGBuilderVolume, BrushColor) == 628, "Offset mismatch for UPCGBuilderVolume::BrushColor");
static_assert(offsetof(UPCGBuilderVolume, PolyFlags) == 632, "Offset mismatch for UPCGBuilderVolume::PolyFlags");
static_assert(offsetof(UPCGBuilderVolume, bColored) == 636, "Offset mismatch for UPCGBuilderVolume::bColored");
static_assert(offsetof(UPCGBuilderVolume, Brush) == 640, "Offset mismatch for UPCGBuilderVolume::Brush");
static_assert(offsetof(UPCGBuilderVolume, BrushComponent) == 648, "Offset mismatch for UPCGBuilderVolume::BrushComponent");
static_assert(offsetof(UPCGBuilderVolume, bInManipulation) == 656, "Offset mismatch for UPCGBuilderVolume::bInManipulation");
static_assert(offsetof(UPCGBuilderVolume, SavedSelections) == 664, "Offset mismatch for UPCGBuilderVolume::SavedSelections");

// /Script/PCG.PCGCleanSplineSettings
// Kind: Class; super: PCGSettings
class UPCGCleanSplineSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bFuseColocatedControlPoints; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    double ColocationDistanceThreshold; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUseSplineLocalSpace; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B9
    std::uint8_t FuseMode; // 0x00BC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00BD
    std::uint8_t bRemoveCollinearControlPoints; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x00C1
    double CollinearAngleThreshold; // 0x00C8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUseRadians; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGCleanSplineSettings, bFuseColocatedControlPoints) == 168, "Offset mismatch for UPCGCleanSplineSettings::bFuseColocatedControlPoints");
static_assert(offsetof(UPCGCleanSplineSettings, ColocationDistanceThreshold) == 176, "Offset mismatch for UPCGCleanSplineSettings::ColocationDistanceThreshold");
static_assert(offsetof(UPCGCleanSplineSettings, bUseSplineLocalSpace) == 184, "Offset mismatch for UPCGCleanSplineSettings::bUseSplineLocalSpace");
static_assert(offsetof(UPCGCleanSplineSettings, FuseMode) == 188, "Offset mismatch for UPCGCleanSplineSettings::FuseMode");
static_assert(offsetof(UPCGCleanSplineSettings, bRemoveCollinearControlPoints) == 192, "Offset mismatch for UPCGCleanSplineSettings::bRemoveCollinearControlPoints");
static_assert(offsetof(UPCGCleanSplineSettings, CollinearAngleThreshold) == 200, "Offset mismatch for UPCGCleanSplineSettings::CollinearAngleThreshold");
static_assert(offsetof(UPCGCleanSplineSettings, bUseRadians) == 208, "Offset mismatch for UPCGCleanSplineSettings::bUseRadians");

// /Script/PCG.PCGClipPathsSettings
// Kind: Class; super: PCGSettings
class UPCGClipPathsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Operation; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    double SplineMaxDiscretizationError; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPCGClipPathsSettings, Operation) == 168, "Offset mismatch for UPCGClipPathsSettings::Operation");
static_assert(offsetof(UPCGClipPathsSettings, SplineMaxDiscretizationError) == 176, "Offset mismatch for UPCGClipPathsSettings::SplineMaxDiscretizationError");

// /Script/PCG.PCGClusterSettings
// Kind: Class; super: PCGSettings
class UPCGClusterSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Algorithm; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t NumClusters; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::uint8_t ClusterAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    std::int32_t MaxIterations; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00E4
    double Tolerance; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bOutputFinalCentroids; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputFinalCentroidElementCount; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x00F2
    std::uint8_t FinalCentroidElementCountAttribute[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGClusterSettings, Algorithm) == 168, "Offset mismatch for UPCGClusterSettings::Algorithm");
static_assert(offsetof(UPCGClusterSettings, NumClusters) == 172, "Offset mismatch for UPCGClusterSettings::NumClusters");
static_assert(offsetof(UPCGClusterSettings, ClusterAttribute) == 176, "Offset mismatch for UPCGClusterSettings::ClusterAttribute");
static_assert(offsetof(UPCGClusterSettings, MaxIterations) == 224, "Offset mismatch for UPCGClusterSettings::MaxIterations");
static_assert(offsetof(UPCGClusterSettings, Tolerance) == 232, "Offset mismatch for UPCGClusterSettings::Tolerance");
static_assert(offsetof(UPCGClusterSettings, bOutputFinalCentroids) == 240, "Offset mismatch for UPCGClusterSettings::bOutputFinalCentroids");
static_assert(offsetof(UPCGClusterSettings, bOutputFinalCentroidElementCount) == 241, "Offset mismatch for UPCGClusterSettings::bOutputFinalCentroidElementCount");
static_assert(offsetof(UPCGClusterSettings, FinalCentroidElementCountAttribute) == 248, "Offset mismatch for UPCGClusterSettings::FinalCentroidElementCountAttribute");

// /Script/PCG.PCGCodeEditorTextProvider
// Kind: Class; super: Interface
class UPCGCodeEditorTextProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGCollapsePointsSettings
// Kind: Class; super: PCGSettings
class UPCGCollapsePointsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    double DistanceThreshold; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Mode; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ComparisonMode; // 0x00B1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t VisitOrder; // 0x00B2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00B3
    std::uint8_t VisitOrderAttribute[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseMergeWeightAttribute; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E9
    std::uint8_t MergeWeightAttribute[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    TArray<void*> AttributesToMerge; // 0x0120 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGCollapsePointsSettings, DistanceThreshold) == 168, "Offset mismatch for UPCGCollapsePointsSettings::DistanceThreshold");
static_assert(offsetof(UPCGCollapsePointsSettings, Mode) == 176, "Offset mismatch for UPCGCollapsePointsSettings::Mode");
static_assert(offsetof(UPCGCollapsePointsSettings, ComparisonMode) == 177, "Offset mismatch for UPCGCollapsePointsSettings::ComparisonMode");
static_assert(offsetof(UPCGCollapsePointsSettings, VisitOrder) == 178, "Offset mismatch for UPCGCollapsePointsSettings::VisitOrder");
static_assert(offsetof(UPCGCollapsePointsSettings, VisitOrderAttribute) == 184, "Offset mismatch for UPCGCollapsePointsSettings::VisitOrderAttribute");
static_assert(offsetof(UPCGCollapsePointsSettings, bUseMergeWeightAttribute) == 232, "Offset mismatch for UPCGCollapsePointsSettings::bUseMergeWeightAttribute");
static_assert(offsetof(UPCGCollapsePointsSettings, MergeWeightAttribute) == 240, "Offset mismatch for UPCGCollapsePointsSettings::MergeWeightAttribute");
static_assert(offsetof(UPCGCollapsePointsSettings, AttributesToMerge) == 288, "Offset mismatch for UPCGCollapsePointsSettings::AttributesToMerge");

// /Script/PCG.PCGCollapseSettings
// Kind: Class; super: PCGSettings
class UPCGCollapseSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bPassThroughEmptyAttributeSets; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGCollapseSettings, bPassThroughEmptyAttributeSets) == 168, "Offset mismatch for UPCGCollapseSettings::bPassThroughEmptyAttributeSets");

// /Script/PCG.PCGCollisionShapeData
// Kind: Class; super: PCGSpatialDataWithPointCache
class UPCGCollisionShapeData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Transform[0x78]; // 0x00E0 (Size: 0x78, Type: StructProperty)
    std::uint8_t CachedBounds[0x38]; // 0x0158 (Size: 0x38, Type: StructProperty)
    std::uint8_t CachedStrictBounds[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGCollisionShapeData, Transform) == 224, "Offset mismatch for UPCGCollisionShapeData::Transform");
static_assert(offsetof(UPCGCollisionShapeData, CachedBounds) == 344, "Offset mismatch for UPCGCollisionShapeData::CachedBounds");
static_assert(offsetof(UPCGCollisionShapeData, CachedStrictBounds) == 400, "Offset mismatch for UPCGCollisionShapeData::CachedStrictBounds");

// /Script/PCG.PCGCollisionWrapperData
// Kind: Class; super: PCGSpatialData
class UPCGCollisionWrapperData
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* PointData; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CollisionSelector[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t CollisionQueryFlag; // 0x00C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGCollisionWrapperData, PointData) == 136, "Offset mismatch for UPCGCollisionWrapperData::PointData");
static_assert(offsetof(UPCGCollisionWrapperData, CollisionSelector) == 144, "Offset mismatch for UPCGCollisionWrapperData::CollisionSelector");
static_assert(offsetof(UPCGCollisionWrapperData, CollisionQueryFlag) == 192, "Offset mismatch for UPCGCollisionWrapperData::CollisionQueryFlag");

// /Script/PCG.PCGCombinePointsSettings
// Kind: Class; super: PCGSettings
class UPCGCombinePointsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bCenterPivot; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseFirstPointTransform; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00AA
    std::uint8_t PointTransform[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGCombinePointsSettings, bCenterPivot) == 168, "Offset mismatch for UPCGCombinePointsSettings::bCenterPivot");
static_assert(offsetof(UPCGCombinePointsSettings, bUseFirstPointTransform) == 169, "Offset mismatch for UPCGCombinePointsSettings::bUseFirstPointTransform");
static_assert(offsetof(UPCGCombinePointsSettings, PointTransform) == 176, "Offset mismatch for UPCGCombinePointsSettings::PointTransform");

// /Script/PCG.PCGComponent
// Kind: Class; super: ActorComponent
class UPCGComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::int32_t Seed; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bActivated; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsComponentPartitioned; // 0x00CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t GenerationTrigger; // 0x00CE (Size: 0x1, Type: EnumProperty)
    std::uint8_t bGenerateOnDropWhenTriggerOnDemand; // 0x00CF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideGenerationRadii; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D1
    std::uint8_t GenerationRadii[0x248]; // 0x00D8 (Size: 0x248, Type: StructProperty)
    void* SchedulingPolicyClass; // 0x0320 (Size: 0x8, Type: ClassProperty)
    void* SchedulingPolicy; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ToolDataContainer[0x78]; // 0x0330 (Size: 0x78, Type: StructProperty)
    FMulticastInlineDelegate OnPCGGraphStartGeneratingExternal; // 0x03A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPCGGraphCancelledExternal; // 0x03B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPCGGraphGeneratedExternal; // 0x03C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPCGGraphCleanedExternal; // 0x03D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPCGLinkClearedExternal; // 0x03E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bGenerated; // 0x03F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRuntimeGenerated; // 0x03F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x03FA
    TArray<void*> PostGenerateFunctionNames; // 0x0400 (Size: 0x10, Type: ArrayProperty)
    void* GraphInstance; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    std::uint32_t GenerationGridSize; // 0x0418 (Size: 0x4, Type: UInt32Property)
    std::uint8_t CurrentEditingMode; // 0x041C (Size: 0x1, Type: EnumProperty)
    std::uint8_t SerializedEditingMode; // 0x041D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2]; // 0x041E
    std::uint8_t InputType; // 0x0420 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bParseActorComponents; // 0x0421 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0422
    std::uint32_t RuntimeGridDescriptorHash; // 0x0424 (Size: 0x4, Type: UInt32Property)
    void* CachedPCGData; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    void* CachedInputData; // 0x0430 (Size: 0x8, Type: ObjectProperty)
    void* CachedActorData; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    void* CachedLandscapeData; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    void* CachedLandscapeHeightData; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ManagedResourceContainer[0x18]; // 0x0450 (Size: 0x18, Type: StructProperty)
    TArray<void*> GeneratedResources; // 0x0468 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x8]; // 0x0478
    std::uint8_t LastGeneratedBounds[0x38]; // 0x0480 (Size: 0x38, Type: StructProperty)
    std::uint8_t GeneratedGraphOutput[0x30]; // 0x04B8 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> PerPinGeneratedOutput; // 0x04E8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0006[0x18]; // 0x04F8
    std::uint8_t bIsComponentLocal; // 0x0510 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProceduralInstancesInUse; // 0x0511 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2E]; // 0x0512
    std::uint8_t bOverrideUseActorComponentlessGeneration; // 0x0540 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseActorComponentlessGeneration; // 0x0541 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x6]; // 0x0542
    std::uint8_t SourceDataContainer[0x1]; // 0x0548 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGComponent, Seed) == 200, "Offset mismatch for UPCGComponent::Seed");
static_assert(offsetof(UPCGComponent, bActivated) == 204, "Offset mismatch for UPCGComponent::bActivated");
static_assert(offsetof(UPCGComponent, bIsComponentPartitioned) == 205, "Offset mismatch for UPCGComponent::bIsComponentPartitioned");
static_assert(offsetof(UPCGComponent, GenerationTrigger) == 206, "Offset mismatch for UPCGComponent::GenerationTrigger");
static_assert(offsetof(UPCGComponent, bGenerateOnDropWhenTriggerOnDemand) == 207, "Offset mismatch for UPCGComponent::bGenerateOnDropWhenTriggerOnDemand");
static_assert(offsetof(UPCGComponent, bOverrideGenerationRadii) == 208, "Offset mismatch for UPCGComponent::bOverrideGenerationRadii");
static_assert(offsetof(UPCGComponent, GenerationRadii) == 216, "Offset mismatch for UPCGComponent::GenerationRadii");
static_assert(offsetof(UPCGComponent, SchedulingPolicyClass) == 800, "Offset mismatch for UPCGComponent::SchedulingPolicyClass");
static_assert(offsetof(UPCGComponent, SchedulingPolicy) == 808, "Offset mismatch for UPCGComponent::SchedulingPolicy");
static_assert(offsetof(UPCGComponent, ToolDataContainer) == 816, "Offset mismatch for UPCGComponent::ToolDataContainer");
static_assert(offsetof(UPCGComponent, OnPCGGraphStartGeneratingExternal) == 936, "Offset mismatch for UPCGComponent::OnPCGGraphStartGeneratingExternal");
static_assert(offsetof(UPCGComponent, OnPCGGraphCancelledExternal) == 952, "Offset mismatch for UPCGComponent::OnPCGGraphCancelledExternal");
static_assert(offsetof(UPCGComponent, OnPCGGraphGeneratedExternal) == 968, "Offset mismatch for UPCGComponent::OnPCGGraphGeneratedExternal");
static_assert(offsetof(UPCGComponent, OnPCGGraphCleanedExternal) == 984, "Offset mismatch for UPCGComponent::OnPCGGraphCleanedExternal");
static_assert(offsetof(UPCGComponent, OnPCGLinkClearedExternal) == 1000, "Offset mismatch for UPCGComponent::OnPCGLinkClearedExternal");
static_assert(offsetof(UPCGComponent, bGenerated) == 1016, "Offset mismatch for UPCGComponent::bGenerated");
static_assert(offsetof(UPCGComponent, bRuntimeGenerated) == 1017, "Offset mismatch for UPCGComponent::bRuntimeGenerated");
static_assert(offsetof(UPCGComponent, PostGenerateFunctionNames) == 1024, "Offset mismatch for UPCGComponent::PostGenerateFunctionNames");
static_assert(offsetof(UPCGComponent, GraphInstance) == 1040, "Offset mismatch for UPCGComponent::GraphInstance");
static_assert(offsetof(UPCGComponent, GenerationGridSize) == 1048, "Offset mismatch for UPCGComponent::GenerationGridSize");
static_assert(offsetof(UPCGComponent, CurrentEditingMode) == 1052, "Offset mismatch for UPCGComponent::CurrentEditingMode");
static_assert(offsetof(UPCGComponent, SerializedEditingMode) == 1053, "Offset mismatch for UPCGComponent::SerializedEditingMode");
static_assert(offsetof(UPCGComponent, InputType) == 1056, "Offset mismatch for UPCGComponent::InputType");
static_assert(offsetof(UPCGComponent, bParseActorComponents) == 1057, "Offset mismatch for UPCGComponent::bParseActorComponents");
static_assert(offsetof(UPCGComponent, RuntimeGridDescriptorHash) == 1060, "Offset mismatch for UPCGComponent::RuntimeGridDescriptorHash");
static_assert(offsetof(UPCGComponent, CachedPCGData) == 1064, "Offset mismatch for UPCGComponent::CachedPCGData");
static_assert(offsetof(UPCGComponent, CachedInputData) == 1072, "Offset mismatch for UPCGComponent::CachedInputData");
static_assert(offsetof(UPCGComponent, CachedActorData) == 1080, "Offset mismatch for UPCGComponent::CachedActorData");
static_assert(offsetof(UPCGComponent, CachedLandscapeData) == 1088, "Offset mismatch for UPCGComponent::CachedLandscapeData");
static_assert(offsetof(UPCGComponent, CachedLandscapeHeightData) == 1096, "Offset mismatch for UPCGComponent::CachedLandscapeHeightData");
static_assert(offsetof(UPCGComponent, ManagedResourceContainer) == 1104, "Offset mismatch for UPCGComponent::ManagedResourceContainer");
static_assert(offsetof(UPCGComponent, GeneratedResources) == 1128, "Offset mismatch for UPCGComponent::GeneratedResources");
static_assert(offsetof(UPCGComponent, LastGeneratedBounds) == 1152, "Offset mismatch for UPCGComponent::LastGeneratedBounds");
static_assert(offsetof(UPCGComponent, GeneratedGraphOutput) == 1208, "Offset mismatch for UPCGComponent::GeneratedGraphOutput");
static_assert(offsetof(UPCGComponent, PerPinGeneratedOutput) == 1256, "Offset mismatch for UPCGComponent::PerPinGeneratedOutput");
static_assert(offsetof(UPCGComponent, bIsComponentLocal) == 1296, "Offset mismatch for UPCGComponent::bIsComponentLocal");
static_assert(offsetof(UPCGComponent, bProceduralInstancesInUse) == 1297, "Offset mismatch for UPCGComponent::bProceduralInstancesInUse");
static_assert(offsetof(UPCGComponent, bOverrideUseActorComponentlessGeneration) == 1344, "Offset mismatch for UPCGComponent::bOverrideUseActorComponentlessGeneration");
static_assert(offsetof(UPCGComponent, bUseActorComponentlessGeneration) == 1345, "Offset mismatch for UPCGComponent::bUseActorComponentlessGeneration");
static_assert(offsetof(UPCGComponent, SourceDataContainer) == 1352, "Offset mismatch for UPCGComponent::SourceDataContainer");

// /Script/PCG.PCGComputeDataInterface
// Kind: Class; super: ComputeDataInterface
class UPCGComputeDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGComputeDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGComputeDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGComputeDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGComputeDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGComputeDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGComputeDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGComputeDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGComputeDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGComputeDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGComputeDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGComputeDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGComputeDataInterface::ProducerKernel");
static_assert(offsetof(UPCGComputeDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGComputeDataInterface::ProducerSettings");

// /Script/PCG.PCGComputeDataProvider
// Kind: Class; super: ComputeDataProvider
class UPCGComputeDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGComputeDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGComputeDataProvider::ProducerKernel");
static_assert(offsetof(UPCGComputeDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGComputeDataProvider::ProducerSettings");

// /Script/PCG.PCGComputeGraph
// Kind: Class; super: ComputeGraph
class UPCGComputeGraph
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TArray<void*> KernelToNode; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StaticMeshSpawners; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bLogDataDescriptions; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    TMap<void*, void*> KernelBindingToPinLabel; // 0x00F8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DownstreamToUpstreamBinding; // 0x0108 (Size: 0x10, Type: MapProperty)
    std::uint8_t StaticAttributeTable[0x10]; // 0x0118 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> StaticDataLabelsTable; // 0x0128 (Size: 0x10, Type: MapProperty)
    TArray<void*> StringTable; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> KernelPinToFirstBinding; // 0x0148 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CPUDataBindingToVirtualPinLabel; // 0x0158 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> KernelPinToVirtualPinLabel; // 0x0168 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> VirtualInputPinToType; // 0x0178 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPCGComputeGraph, KernelToNode) == 208, "Offset mismatch for UPCGComputeGraph::KernelToNode");
static_assert(offsetof(UPCGComputeGraph, StaticMeshSpawners) == 224, "Offset mismatch for UPCGComputeGraph::StaticMeshSpawners");
static_assert(offsetof(UPCGComputeGraph, bLogDataDescriptions) == 240, "Offset mismatch for UPCGComputeGraph::bLogDataDescriptions");
static_assert(offsetof(UPCGComputeGraph, KernelBindingToPinLabel) == 248, "Offset mismatch for UPCGComputeGraph::KernelBindingToPinLabel");
static_assert(offsetof(UPCGComputeGraph, DownstreamToUpstreamBinding) == 264, "Offset mismatch for UPCGComputeGraph::DownstreamToUpstreamBinding");
static_assert(offsetof(UPCGComputeGraph, StaticAttributeTable) == 280, "Offset mismatch for UPCGComputeGraph::StaticAttributeTable");
static_assert(offsetof(UPCGComputeGraph, StaticDataLabelsTable) == 296, "Offset mismatch for UPCGComputeGraph::StaticDataLabelsTable");
static_assert(offsetof(UPCGComputeGraph, StringTable) == 312, "Offset mismatch for UPCGComputeGraph::StringTable");
static_assert(offsetof(UPCGComputeGraph, KernelPinToFirstBinding) == 328, "Offset mismatch for UPCGComputeGraph::KernelPinToFirstBinding");
static_assert(offsetof(UPCGComputeGraph, CPUDataBindingToVirtualPinLabel) == 344, "Offset mismatch for UPCGComputeGraph::CPUDataBindingToVirtualPinLabel");
static_assert(offsetof(UPCGComputeGraph, KernelPinToVirtualPinLabel) == 360, "Offset mismatch for UPCGComputeGraph::KernelPinToVirtualPinLabel");
static_assert(offsetof(UPCGComputeGraph, VirtualInputPinToType) == 376, "Offset mismatch for UPCGComputeGraph::VirtualInputPinToType");

// /Script/PCG.PCGComputeGraphSettings
// Kind: Class; super: PCGSettings
class UPCGComputeGraphSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::int32_t ComputeGraphIndex; // 0x00A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGComputeGraphSettings, ComputeGraphIndex) == 168, "Offset mismatch for UPCGComputeGraphSettings::ComputeGraphIndex");

// /Script/PCG.PCGComputeKernel
// Kind: Class; super: ComputeKernel
class UPCGComputeKernel
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PCGKernelFlags; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t KernelIndex; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t SettingsPath[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NodePath[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bInitialized; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    TArray<void*> StaticLogEntries; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOverridableParams; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGComputeKernel, PCGKernelFlags) == 56, "Offset mismatch for UPCGComputeKernel::PCGKernelFlags");
static_assert(offsetof(UPCGComputeKernel, KernelIndex) == 60, "Offset mismatch for UPCGComputeKernel::KernelIndex");
static_assert(offsetof(UPCGComputeKernel, SettingsPath) == 64, "Offset mismatch for UPCGComputeKernel::SettingsPath");
static_assert(offsetof(UPCGComputeKernel, NodePath) == 96, "Offset mismatch for UPCGComputeKernel::NodePath");
static_assert(offsetof(UPCGComputeKernel, bInitialized) == 128, "Offset mismatch for UPCGComputeKernel::bInitialized");
static_assert(offsetof(UPCGComputeKernel, StaticLogEntries) == 136, "Offset mismatch for UPCGComputeKernel::StaticLogEntries");
static_assert(offsetof(UPCGComputeKernel, CachedOverridableParams) == 152, "Offset mismatch for UPCGComputeKernel::CachedOverridableParams");

// /Script/PCG.PCGComputeKernelSource
// Kind: Class; super: ComputeKernelSource
class UPCGComputeKernelSource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString EntryPoint; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t GroupSize[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGComputeKernelSource, EntryPoint) == 40, "Offset mismatch for UPCGComputeKernelSource::EntryPoint");
static_assert(offsetof(UPCGComputeKernelSource, GroupSize) == 56, "Offset mismatch for UPCGComputeKernelSource::GroupSize");

// /Script/PCG.PCGComputeSource
// Kind: Class; super: ComputeSource
class UPCGComputeSource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AdditionalSources; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGComputeSource, AdditionalSources) == 40, "Offset mismatch for UPCGComputeSource::AdditionalSources");

// /Script/PCG.PCGConcaveHullSettings
// Kind: Class; super: PCGSettings
class UPCGConcaveHullSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    double Fitness; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPCGConcaveHullSettings, Fitness) == 168, "Offset mismatch for UPCGConcaveHullSettings::Fitness");

// /Script/PCG.PCGControlFlowSettings
// Kind: Class; super: PCGSettings
class UPCGControlFlowSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGControlFlowSettings, Seed) == 80, "Offset mismatch for UPCGControlFlowSettings::Seed");
static_assert(offsetof(UPCGControlFlowSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGControlFlowSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGControlFlowSettings, bUseSeed) == 96, "Offset mismatch for UPCGControlFlowSettings::bUseSeed");
static_assert(offsetof(UPCGControlFlowSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGControlFlowSettings::CachedOverridableParams");
static_assert(offsetof(UPCGControlFlowSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGControlFlowSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGControlFlowSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGControlFlowSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGControlFlowSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGControlFlowSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGControlFlowSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGControlFlowSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGControlFlowSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGControlFlowSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGControlFlowSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGControlFlowSettings::DebugBufferSize");

// /Script/PCG.PCGConvertToAttributeSetSettings
// Kind: Class; super: PCGSettings
class UPCGConvertToAttributeSetSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TMap<void*, void*> PropertiesToConvert; // 0x00A8 (Size: 0x10, Type: MapProperty)
    std::uint8_t bOverrideExistingAttributes; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGConvertToAttributeSetSettings, PropertiesToConvert) == 168, "Offset mismatch for UPCGConvertToAttributeSetSettings::PropertiesToConvert");
static_assert(offsetof(UPCGConvertToAttributeSetSettings, bOverrideExistingAttributes) == 184, "Offset mismatch for UPCGConvertToAttributeSetSettings::bOverrideExistingAttributes");

// /Script/PCG.PCGConvertToDataViewSettings
// Kind: Class; super: PCGSettings
class UPCGConvertToDataViewSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bSelectionAsInput; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    FString SelectionSources; // 0x00B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t Selection[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGConvertToDataViewSettings, bSelectionAsInput) == 168, "Offset mismatch for UPCGConvertToDataViewSettings::bSelectionAsInput");
static_assert(offsetof(UPCGConvertToDataViewSettings, SelectionSources) == 176, "Offset mismatch for UPCGConvertToDataViewSettings::SelectionSources");
static_assert(offsetof(UPCGConvertToDataViewSettings, Selection) == 192, "Offset mismatch for UPCGConvertToDataViewSettings::Selection");

// /Script/PCG.PCGConvertToPointDataSettings
// Kind: Class; super: PCGCollapseSettings
class UPCGConvertToPointDataSettings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bMatchAttributeNamesWithPropertyNames; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    TMap<void*, void*> AttributeToConvert; // 0x00B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t bDeleteOriginalRemappedAttribute; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGConvertToPointDataSettings, bMatchAttributeNamesWithPropertyNames) == 176, "Offset mismatch for UPCGConvertToPointDataSettings::bMatchAttributeNamesWithPropertyNames");
static_assert(offsetof(UPCGConvertToPointDataSettings, AttributeToConvert) == 184, "Offset mismatch for UPCGConvertToPointDataSettings::AttributeToConvert");
static_assert(offsetof(UPCGConvertToPointDataSettings, bDeleteOriginalRemappedAttribute) == 200, "Offset mismatch for UPCGConvertToPointDataSettings::bDeleteOriginalRemappedAttribute");

// /Script/PCG.PCGConvexHull2DSettings
// Kind: Class; super: PCGSettings
class UPCGConvexHull2DSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGConvexHull2DSettings, Seed) == 80, "Offset mismatch for UPCGConvexHull2DSettings::Seed");
static_assert(offsetof(UPCGConvexHull2DSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGConvexHull2DSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGConvexHull2DSettings, bUseSeed) == 96, "Offset mismatch for UPCGConvexHull2DSettings::bUseSeed");
static_assert(offsetof(UPCGConvexHull2DSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGConvexHull2DSettings::CachedOverridableParams");
static_assert(offsetof(UPCGConvexHull2DSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGConvexHull2DSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGConvexHull2DSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGConvexHull2DSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGConvexHull2DSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGConvexHull2DSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGConvexHull2DSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGConvexHull2DSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGConvexHull2DSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGConvexHull2DSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGConvexHull2DSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGConvexHull2DSettings::DebugBufferSize");

// /Script/PCG.PCGCopyAttributesSettings
// Kind: Class; super: PCGSettings
class UPCGCopyAttributesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Operation; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t bCopyAllAttributes; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyAllDomains; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00AE
    TMap<void*, void*> MetadataDomainsMapping; // 0x00B0 (Size: 0x10, Type: MapProperty)
    std::uint8_t InputSource[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputTarget[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGCopyAttributesSettings, Operation) == 168, "Offset mismatch for UPCGCopyAttributesSettings::Operation");
static_assert(offsetof(UPCGCopyAttributesSettings, bCopyAllAttributes) == 172, "Offset mismatch for UPCGCopyAttributesSettings::bCopyAllAttributes");
static_assert(offsetof(UPCGCopyAttributesSettings, bCopyAllDomains) == 173, "Offset mismatch for UPCGCopyAttributesSettings::bCopyAllDomains");
static_assert(offsetof(UPCGCopyAttributesSettings, MetadataDomainsMapping) == 176, "Offset mismatch for UPCGCopyAttributesSettings::MetadataDomainsMapping");
static_assert(offsetof(UPCGCopyAttributesSettings, InputSource) == 192, "Offset mismatch for UPCGCopyAttributesSettings::InputSource");
static_assert(offsetof(UPCGCopyAttributesSettings, OutputTarget) == 240, "Offset mismatch for UPCGCopyAttributesSettings::OutputTarget");

// /Script/PCG.PCGCopyPointsAnalysisDataInterface
// Kind: Class; super: PCGKernelParamsDataInterface
class UPCGCopyPointsAnalysisDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGCopyPointsAnalysisDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGCopyPointsAnalysisDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGCopyPointsAnalysisDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGCopyPointsAnalysisDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGCopyPointsAnalysisDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGCopyPointsAnalysisDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGCopyPointsAnalysisDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGCopyPointsAnalysisDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGCopyPointsAnalysisDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGCopyPointsAnalysisDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGCopyPointsAnalysisDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGCopyPointsAnalysisDataInterface::ProducerKernel");
static_assert(offsetof(UPCGCopyPointsAnalysisDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGCopyPointsAnalysisDataInterface::ProducerSettings");

// /Script/PCG.PCGCopyPointsAnalysisDataProvider
// Kind: Class; super: PCGKernelParamsDataProvider
class UPCGCopyPointsAnalysisDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGCopyPointsAnalysisDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGCopyPointsAnalysisDataProvider::ProducerKernel");
static_assert(offsetof(UPCGCopyPointsAnalysisDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGCopyPointsAnalysisDataProvider::ProducerSettings");

// /Script/PCG.PCGCopyPointsAnalysisKernel
// Kind: Class; super: PCGComputeKernel
class UPCGCopyPointsAnalysisKernel
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PCGKernelFlags; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t KernelIndex; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t SettingsPath[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NodePath[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bInitialized; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    TArray<void*> StaticLogEntries; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOverridableParams; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGCopyPointsAnalysisKernel, PCGKernelFlags) == 56, "Offset mismatch for UPCGCopyPointsAnalysisKernel::PCGKernelFlags");
static_assert(offsetof(UPCGCopyPointsAnalysisKernel, KernelIndex) == 60, "Offset mismatch for UPCGCopyPointsAnalysisKernel::KernelIndex");
static_assert(offsetof(UPCGCopyPointsAnalysisKernel, SettingsPath) == 64, "Offset mismatch for UPCGCopyPointsAnalysisKernel::SettingsPath");
static_assert(offsetof(UPCGCopyPointsAnalysisKernel, NodePath) == 96, "Offset mismatch for UPCGCopyPointsAnalysisKernel::NodePath");
static_assert(offsetof(UPCGCopyPointsAnalysisKernel, bInitialized) == 128, "Offset mismatch for UPCGCopyPointsAnalysisKernel::bInitialized");
static_assert(offsetof(UPCGCopyPointsAnalysisKernel, StaticLogEntries) == 136, "Offset mismatch for UPCGCopyPointsAnalysisKernel::StaticLogEntries");
static_assert(offsetof(UPCGCopyPointsAnalysisKernel, CachedOverridableParams) == 152, "Offset mismatch for UPCGCopyPointsAnalysisKernel::CachedOverridableParams");

// /Script/PCG.PCGCopyPointsDataInterface
// Kind: Class; super: PCGKernelParamsDataInterface
class UPCGCopyPointsDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGCopyPointsDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGCopyPointsDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGCopyPointsDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGCopyPointsDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGCopyPointsDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGCopyPointsDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGCopyPointsDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGCopyPointsDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGCopyPointsDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGCopyPointsDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGCopyPointsDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGCopyPointsDataInterface::ProducerKernel");
static_assert(offsetof(UPCGCopyPointsDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGCopyPointsDataInterface::ProducerSettings");

// /Script/PCG.PCGCopyPointsDataProvider
// Kind: Class; super: PCGKernelParamsDataProvider
class UPCGCopyPointsDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGCopyPointsDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGCopyPointsDataProvider::ProducerKernel");
static_assert(offsetof(UPCGCopyPointsDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGCopyPointsDataProvider::ProducerSettings");

// /Script/PCG.PCGCopyPointsKernel
// Kind: Class; super: PCGComputeKernel
class UPCGCopyPointsKernel
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t bMatchBasedOnAttribute; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGCopyPointsKernel, bMatchBasedOnAttribute) == 184, "Offset mismatch for UPCGCopyPointsKernel::bMatchBasedOnAttribute");

// /Script/PCG.PCGCopyPointsSettings
// Kind: Class; super: PCGSettings
class UPCGCopyPointsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t RotationInheritance; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyTargetRotationToPositions; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ScaleInheritance; // 0x00AA (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyTargetScaleToPositions; // 0x00AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t ColorInheritance; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t SeedInheritance; // 0x00AD (Size: 0x1, Type: EnumProperty)
    std::uint8_t AttributeInheritance; // 0x00AE (Size: 0x1, Type: EnumProperty)
    std::uint8_t TagInheritance; // 0x00AF (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCopyEachSourceOnEveryTarget; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMatchBasedOnAttribute; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00B2
    FName MatchAttribute; // 0x00B4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGCopyPointsSettings, RotationInheritance) == 168, "Offset mismatch for UPCGCopyPointsSettings::RotationInheritance");
static_assert(offsetof(UPCGCopyPointsSettings, bApplyTargetRotationToPositions) == 169, "Offset mismatch for UPCGCopyPointsSettings::bApplyTargetRotationToPositions");
static_assert(offsetof(UPCGCopyPointsSettings, ScaleInheritance) == 170, "Offset mismatch for UPCGCopyPointsSettings::ScaleInheritance");
static_assert(offsetof(UPCGCopyPointsSettings, bApplyTargetScaleToPositions) == 171, "Offset mismatch for UPCGCopyPointsSettings::bApplyTargetScaleToPositions");
static_assert(offsetof(UPCGCopyPointsSettings, ColorInheritance) == 172, "Offset mismatch for UPCGCopyPointsSettings::ColorInheritance");
static_assert(offsetof(UPCGCopyPointsSettings, SeedInheritance) == 173, "Offset mismatch for UPCGCopyPointsSettings::SeedInheritance");
static_assert(offsetof(UPCGCopyPointsSettings, AttributeInheritance) == 174, "Offset mismatch for UPCGCopyPointsSettings::AttributeInheritance");
static_assert(offsetof(UPCGCopyPointsSettings, TagInheritance) == 175, "Offset mismatch for UPCGCopyPointsSettings::TagInheritance");
static_assert(offsetof(UPCGCopyPointsSettings, bCopyEachSourceOnEveryTarget) == 176, "Offset mismatch for UPCGCopyPointsSettings::bCopyEachSourceOnEveryTarget");
static_assert(offsetof(UPCGCopyPointsSettings, bMatchBasedOnAttribute) == 177, "Offset mismatch for UPCGCopyPointsSettings::bMatchBasedOnAttribute");
static_assert(offsetof(UPCGCopyPointsSettings, MatchAttribute) == 180, "Offset mismatch for UPCGCopyPointsSettings::MatchAttribute");

// /Script/PCG.PCGCopyToRenderTargetSettings
// Kind: Class; super: PCGSettings
class UPCGCopyToRenderTargetSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bOverrideFromInput; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    TArray<void*> RenderTargets; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RenderTargetAttribute[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSynchronousLoad; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGCopyToRenderTargetSettings, bOverrideFromInput) == 168, "Offset mismatch for UPCGCopyToRenderTargetSettings::bOverrideFromInput");
static_assert(offsetof(UPCGCopyToRenderTargetSettings, RenderTargets) == 176, "Offset mismatch for UPCGCopyToRenderTargetSettings::RenderTargets");
static_assert(offsetof(UPCGCopyToRenderTargetSettings, RenderTargetAttribute) == 192, "Offset mismatch for UPCGCopyToRenderTargetSettings::RenderTargetAttribute");
static_assert(offsetof(UPCGCopyToRenderTargetSettings, bSynchronousLoad) == 240, "Offset mismatch for UPCGCopyToRenderTargetSettings::bSynchronousLoad");

// /Script/PCG.PCGCountUniqueAttributeValuesDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGCountUniqueAttributeValuesDataInterface
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t AttributeToCountName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEmitPerDataCounts; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputRawBuffer; // 0x0085 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGCountUniqueAttributeValuesDataInterface, AttributeToCountName) == 128, "Offset mismatch for UPCGCountUniqueAttributeValuesDataInterface::AttributeToCountName");
static_assert(offsetof(UPCGCountUniqueAttributeValuesDataInterface, bEmitPerDataCounts) == 132, "Offset mismatch for UPCGCountUniqueAttributeValuesDataInterface::bEmitPerDataCounts");
static_assert(offsetof(UPCGCountUniqueAttributeValuesDataInterface, bOutputRawBuffer) == 133, "Offset mismatch for UPCGCountUniqueAttributeValuesDataInterface::bOutputRawBuffer");

// /Script/PCG.PCGCountUniqueAttributeValuesDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGCountUniqueAttributeValuesDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGCountUniqueAttributeValuesDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGCountUniqueAttributeValuesDataProvider::ProducerKernel");
static_assert(offsetof(UPCGCountUniqueAttributeValuesDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGCountUniqueAttributeValuesDataProvider::ProducerSettings");

// /Script/PCG.PCGCountUniqueAttributeValuesKernel
// Kind: Class; super: PCGAttributeAnalysisKernelBase
class UPCGCountUniqueAttributeValuesKernel
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t AttributeName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::int32_t MaxIntValue; // 0x00BC (Size: 0x4, Type: IntProperty)
    std::uint8_t bEmitPerDataCounts; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputRawBuffer; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MaxNumUniqueValuesSource; // 0x00C2 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGCountUniqueAttributeValuesKernel, AttributeName) == 184, "Offset mismatch for UPCGCountUniqueAttributeValuesKernel::AttributeName");
static_assert(offsetof(UPCGCountUniqueAttributeValuesKernel, MaxIntValue) == 188, "Offset mismatch for UPCGCountUniqueAttributeValuesKernel::MaxIntValue");
static_assert(offsetof(UPCGCountUniqueAttributeValuesKernel, bEmitPerDataCounts) == 192, "Offset mismatch for UPCGCountUniqueAttributeValuesKernel::bEmitPerDataCounts");
static_assert(offsetof(UPCGCountUniqueAttributeValuesKernel, bOutputRawBuffer) == 193, "Offset mismatch for UPCGCountUniqueAttributeValuesKernel::bOutputRawBuffer");
static_assert(offsetof(UPCGCountUniqueAttributeValuesKernel, MaxNumUniqueValuesSource) == 194, "Offset mismatch for UPCGCountUniqueAttributeValuesKernel::MaxNumUniqueValuesSource");

// /Script/PCG.PCGCreateAttributeSetSettings
// Kind: Class; super: PCGSettings
class UPCGCreateAttributeSetSettings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t AttributeTypes[0x160]; // 0x00B0 (Size: 0x160, Type: StructProperty)
    std::uint8_t OutputTarget[0x1]; // 0x0210 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGCreateAttributeSetSettings, AttributeTypes) == 176, "Offset mismatch for UPCGCreateAttributeSetSettings::AttributeTypes");
static_assert(offsetof(UPCGCreateAttributeSetSettings, OutputTarget) == 528, "Offset mismatch for UPCGCreateAttributeSetSettings::OutputTarget");

// /Script/PCG.PCGCreateCollisionDataSettings
// Kind: Class; super: PCGSettings
class UPCGCreateCollisionDataSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t CollisionAttribute[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t CollisionQueryFlag; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWarnIfAttributeCouldNotBeUsed; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSynchronousLoad; // 0x00DA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGCreateCollisionDataSettings, CollisionAttribute) == 168, "Offset mismatch for UPCGCreateCollisionDataSettings::CollisionAttribute");
static_assert(offsetof(UPCGCreateCollisionDataSettings, CollisionQueryFlag) == 216, "Offset mismatch for UPCGCreateCollisionDataSettings::CollisionQueryFlag");
static_assert(offsetof(UPCGCreateCollisionDataSettings, bWarnIfAttributeCouldNotBeUsed) == 217, "Offset mismatch for UPCGCreateCollisionDataSettings::bWarnIfAttributeCouldNotBeUsed");
static_assert(offsetof(UPCGCreateCollisionDataSettings, bSynchronousLoad) == 218, "Offset mismatch for UPCGCreateCollisionDataSettings::bSynchronousLoad");

// /Script/PCG.PCGCreateComplexConstantSettings
// Kind: Class; super: PCGSettings
class UPCGCreateComplexConstantSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Properties[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    FName TargetMetadataDomain; // 0x00B8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGCreateComplexConstantSettings, Properties) == 168, "Offset mismatch for UPCGCreateComplexConstantSettings::Properties");
static_assert(offsetof(UPCGCreateComplexConstantSettings, TargetMetadataDomain) == 184, "Offset mismatch for UPCGCreateComplexConstantSettings::TargetMetadataDomain");

// /Script/PCG.PCGCreatePointsGridSettings
// Kind: Class; super: PCGSettings
class UPCGCreatePointsGridSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t GridExtents[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CellSize[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    float PointSteepness; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CoordinateSpace; // 0x00DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetPointsBounds; // 0x00DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCullPointsOutsideVolume; // 0x00DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t PointPosition; // 0x00DF (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGCreatePointsGridSettings, GridExtents) == 168, "Offset mismatch for UPCGCreatePointsGridSettings::GridExtents");
static_assert(offsetof(UPCGCreatePointsGridSettings, CellSize) == 192, "Offset mismatch for UPCGCreatePointsGridSettings::CellSize");
static_assert(offsetof(UPCGCreatePointsGridSettings, PointSteepness) == 216, "Offset mismatch for UPCGCreatePointsGridSettings::PointSteepness");
static_assert(offsetof(UPCGCreatePointsGridSettings, CoordinateSpace) == 220, "Offset mismatch for UPCGCreatePointsGridSettings::CoordinateSpace");
static_assert(offsetof(UPCGCreatePointsGridSettings, bSetPointsBounds) == 221, "Offset mismatch for UPCGCreatePointsGridSettings::bSetPointsBounds");
static_assert(offsetof(UPCGCreatePointsGridSettings, bCullPointsOutsideVolume) == 222, "Offset mismatch for UPCGCreatePointsGridSettings::bCullPointsOutsideVolume");
static_assert(offsetof(UPCGCreatePointsGridSettings, PointPosition) == 223, "Offset mismatch for UPCGCreatePointsGridSettings::PointPosition");

// /Script/PCG.PCGCreatePointsSettings
// Kind: Class; super: PCGSettings
class UPCGCreatePointsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> PointsToCreate; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CoordinateSpace; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCullPointsOutsideVolume; // 0x00B9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGCreatePointsSettings, PointsToCreate) == 168, "Offset mismatch for UPCGCreatePointsSettings::PointsToCreate");
static_assert(offsetof(UPCGCreatePointsSettings, CoordinateSpace) == 184, "Offset mismatch for UPCGCreatePointsSettings::CoordinateSpace");
static_assert(offsetof(UPCGCreatePointsSettings, bCullPointsOutsideVolume) == 185, "Offset mismatch for UPCGCreatePointsSettings::bCullPointsOutsideVolume");

// /Script/PCG.PCGCreatePointsSphereSettings
// Kind: Class; super: PCGSettings
class UPCGCreatePointsSphereSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SphereGeneration; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CoordinateSpace; // 0x00A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PointOrientation; // 0x00AA (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00AB
    std::uint8_t origin[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    double Radius; // 0x00C8 (Size: 0x8, Type: DoubleProperty)
    std::int32_t GeodesicSubdivisions; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00D4
    double Theta; // 0x00D8 (Size: 0x8, Type: DoubleProperty)
    double Phi; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    std::int32_t LatitudinalSegments; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t LongitudinalSegments; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t SampleCount; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00F4
    double PoissonDistance; // 0x00F8 (Size: 0x8, Type: DoubleProperty)
    std::int32_t PoissonMaxAttempts; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0104
    double LatitudinalStartAngle; // 0x0108 (Size: 0x8, Type: DoubleProperty)
    double LatitudinalEndAngle; // 0x0110 (Size: 0x8, Type: DoubleProperty)
    double LongitudinalStartAngle; // 0x0118 (Size: 0x8, Type: DoubleProperty)
    double LongitudinalEndAngle; // 0x0120 (Size: 0x8, Type: DoubleProperty)
    double jitter; // 0x0128 (Size: 0x8, Type: DoubleProperty)
    float PointSteepness; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCullPointsOutsideVolume; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0135
    std::int32_t PointLimit; // 0x0138 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGCreatePointsSphereSettings, SphereGeneration) == 168, "Offset mismatch for UPCGCreatePointsSphereSettings::SphereGeneration");
static_assert(offsetof(UPCGCreatePointsSphereSettings, CoordinateSpace) == 169, "Offset mismatch for UPCGCreatePointsSphereSettings::CoordinateSpace");
static_assert(offsetof(UPCGCreatePointsSphereSettings, PointOrientation) == 170, "Offset mismatch for UPCGCreatePointsSphereSettings::PointOrientation");
static_assert(offsetof(UPCGCreatePointsSphereSettings, origin) == 176, "Offset mismatch for UPCGCreatePointsSphereSettings::origin");
static_assert(offsetof(UPCGCreatePointsSphereSettings, Radius) == 200, "Offset mismatch for UPCGCreatePointsSphereSettings::Radius");
static_assert(offsetof(UPCGCreatePointsSphereSettings, GeodesicSubdivisions) == 208, "Offset mismatch for UPCGCreatePointsSphereSettings::GeodesicSubdivisions");
static_assert(offsetof(UPCGCreatePointsSphereSettings, Theta) == 216, "Offset mismatch for UPCGCreatePointsSphereSettings::Theta");
static_assert(offsetof(UPCGCreatePointsSphereSettings, Phi) == 224, "Offset mismatch for UPCGCreatePointsSphereSettings::Phi");
static_assert(offsetof(UPCGCreatePointsSphereSettings, LatitudinalSegments) == 232, "Offset mismatch for UPCGCreatePointsSphereSettings::LatitudinalSegments");
static_assert(offsetof(UPCGCreatePointsSphereSettings, LongitudinalSegments) == 236, "Offset mismatch for UPCGCreatePointsSphereSettings::LongitudinalSegments");
static_assert(offsetof(UPCGCreatePointsSphereSettings, SampleCount) == 240, "Offset mismatch for UPCGCreatePointsSphereSettings::SampleCount");
static_assert(offsetof(UPCGCreatePointsSphereSettings, PoissonDistance) == 248, "Offset mismatch for UPCGCreatePointsSphereSettings::PoissonDistance");
static_assert(offsetof(UPCGCreatePointsSphereSettings, PoissonMaxAttempts) == 256, "Offset mismatch for UPCGCreatePointsSphereSettings::PoissonMaxAttempts");
static_assert(offsetof(UPCGCreatePointsSphereSettings, LatitudinalStartAngle) == 264, "Offset mismatch for UPCGCreatePointsSphereSettings::LatitudinalStartAngle");
static_assert(offsetof(UPCGCreatePointsSphereSettings, LatitudinalEndAngle) == 272, "Offset mismatch for UPCGCreatePointsSphereSettings::LatitudinalEndAngle");
static_assert(offsetof(UPCGCreatePointsSphereSettings, LongitudinalStartAngle) == 280, "Offset mismatch for UPCGCreatePointsSphereSettings::LongitudinalStartAngle");
static_assert(offsetof(UPCGCreatePointsSphereSettings, LongitudinalEndAngle) == 288, "Offset mismatch for UPCGCreatePointsSphereSettings::LongitudinalEndAngle");
static_assert(offsetof(UPCGCreatePointsSphereSettings, jitter) == 296, "Offset mismatch for UPCGCreatePointsSphereSettings::jitter");
static_assert(offsetof(UPCGCreatePointsSphereSettings, PointSteepness) == 304, "Offset mismatch for UPCGCreatePointsSphereSettings::PointSteepness");
static_assert(offsetof(UPCGCreatePointsSphereSettings, bCullPointsOutsideVolume) == 308, "Offset mismatch for UPCGCreatePointsSphereSettings::bCullPointsOutsideVolume");
static_assert(offsetof(UPCGCreatePointsSphereSettings, PointLimit) == 312, "Offset mismatch for UPCGCreatePointsSphereSettings::PointLimit");

// /Script/PCG.PCGCreatePolygon2DSettings
// Kind: Class; super: PCGSettings
class UPCGCreatePolygon2DSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputType; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseHoleAttribute; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00AA
    std::uint8_t HoleIndexAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUsePolygonWidthAttribute; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    std::uint8_t PolygonWidthAttribute[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    double OpenPolygonWidth; // 0x0118 (Size: 0x8, Type: DoubleProperty)
    double SplineMaxDiscretizationError; // 0x0120 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DefaultPolygonNormal[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultPolygonNormalBehavior; // 0x0140 (Size: 0x1, Type: EnumProperty)
    std::uint8_t JoinType; // 0x0141 (Size: 0x1, Type: EnumProperty)
    std::uint8_t EndType; // 0x0142 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGCreatePolygon2DSettings, InputType) == 168, "Offset mismatch for UPCGCreatePolygon2DSettings::InputType");
static_assert(offsetof(UPCGCreatePolygon2DSettings, bUseHoleAttribute) == 169, "Offset mismatch for UPCGCreatePolygon2DSettings::bUseHoleAttribute");
static_assert(offsetof(UPCGCreatePolygon2DSettings, HoleIndexAttribute) == 176, "Offset mismatch for UPCGCreatePolygon2DSettings::HoleIndexAttribute");
static_assert(offsetof(UPCGCreatePolygon2DSettings, bUsePolygonWidthAttribute) == 224, "Offset mismatch for UPCGCreatePolygon2DSettings::bUsePolygonWidthAttribute");
static_assert(offsetof(UPCGCreatePolygon2DSettings, PolygonWidthAttribute) == 232, "Offset mismatch for UPCGCreatePolygon2DSettings::PolygonWidthAttribute");
static_assert(offsetof(UPCGCreatePolygon2DSettings, OpenPolygonWidth) == 280, "Offset mismatch for UPCGCreatePolygon2DSettings::OpenPolygonWidth");
static_assert(offsetof(UPCGCreatePolygon2DSettings, SplineMaxDiscretizationError) == 288, "Offset mismatch for UPCGCreatePolygon2DSettings::SplineMaxDiscretizationError");
static_assert(offsetof(UPCGCreatePolygon2DSettings, DefaultPolygonNormal) == 296, "Offset mismatch for UPCGCreatePolygon2DSettings::DefaultPolygonNormal");
static_assert(offsetof(UPCGCreatePolygon2DSettings, DefaultPolygonNormalBehavior) == 320, "Offset mismatch for UPCGCreatePolygon2DSettings::DefaultPolygonNormalBehavior");
static_assert(offsetof(UPCGCreatePolygon2DSettings, JoinType) == 321, "Offset mismatch for UPCGCreatePolygon2DSettings::JoinType");
static_assert(offsetof(UPCGCreatePolygon2DSettings, EndType) == 322, "Offset mismatch for UPCGCreatePolygon2DSettings::EndType");

// /Script/PCG.PCGCreateSplineSettings
// Kind: Class; super: PCGSettings
class UPCGCreateSplineSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bClosedLoop; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLinear; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyCustomTangents; // 0x00AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t ArriveTangentAttribute[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t LeaveTangentAttribute[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUseInterpTypeAttribute; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B5
    FName InterpTypeAttribute; // 0x00B8 (Size: 0x8, Type: NameProperty)
    TArray<void*> TagsToAddOnComponents; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetActor[0x20]; // 0x00D0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> PostProcessFunctionNames; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGCreateSplineSettings, Mode) == 168, "Offset mismatch for UPCGCreateSplineSettings::Mode");
static_assert(offsetof(UPCGCreateSplineSettings, bClosedLoop) == 169, "Offset mismatch for UPCGCreateSplineSettings::bClosedLoop");
static_assert(offsetof(UPCGCreateSplineSettings, bLinear) == 170, "Offset mismatch for UPCGCreateSplineSettings::bLinear");
static_assert(offsetof(UPCGCreateSplineSettings, bApplyCustomTangents) == 171, "Offset mismatch for UPCGCreateSplineSettings::bApplyCustomTangents");
static_assert(offsetof(UPCGCreateSplineSettings, ArriveTangentAttribute) == 172, "Offset mismatch for UPCGCreateSplineSettings::ArriveTangentAttribute");
static_assert(offsetof(UPCGCreateSplineSettings, LeaveTangentAttribute) == 176, "Offset mismatch for UPCGCreateSplineSettings::LeaveTangentAttribute");
static_assert(offsetof(UPCGCreateSplineSettings, bUseInterpTypeAttribute) == 180, "Offset mismatch for UPCGCreateSplineSettings::bUseInterpTypeAttribute");
static_assert(offsetof(UPCGCreateSplineSettings, InterpTypeAttribute) == 184, "Offset mismatch for UPCGCreateSplineSettings::InterpTypeAttribute");
static_assert(offsetof(UPCGCreateSplineSettings, TagsToAddOnComponents) == 192, "Offset mismatch for UPCGCreateSplineSettings::TagsToAddOnComponents");
static_assert(offsetof(UPCGCreateSplineSettings, TargetActor) == 208, "Offset mismatch for UPCGCreateSplineSettings::TargetActor");
static_assert(offsetof(UPCGCreateSplineSettings, PostProcessFunctionNames) == 240, "Offset mismatch for UPCGCreateSplineSettings::PostProcessFunctionNames");

// /Script/PCG.PCGCreateSurfaceFromPolygon2DSettings
// Kind: Class; super: PCGSettings
class UPCGCreateSurfaceFromPolygon2DSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGCreateSurfaceFromPolygon2DSettings, Seed) == 80, "Offset mismatch for UPCGCreateSurfaceFromPolygon2DSettings::Seed");
static_assert(offsetof(UPCGCreateSurfaceFromPolygon2DSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGCreateSurfaceFromPolygon2DSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGCreateSurfaceFromPolygon2DSettings, bUseSeed) == 96, "Offset mismatch for UPCGCreateSurfaceFromPolygon2DSettings::bUseSeed");
static_assert(offsetof(UPCGCreateSurfaceFromPolygon2DSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGCreateSurfaceFromPolygon2DSettings::CachedOverridableParams");
static_assert(offsetof(UPCGCreateSurfaceFromPolygon2DSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGCreateSurfaceFromPolygon2DSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGCreateSurfaceFromPolygon2DSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGCreateSurfaceFromPolygon2DSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGCreateSurfaceFromPolygon2DSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGCreateSurfaceFromPolygon2DSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGCreateSurfaceFromPolygon2DSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGCreateSurfaceFromPolygon2DSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGCreateSurfaceFromPolygon2DSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGCreateSurfaceFromPolygon2DSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGCreateSurfaceFromPolygon2DSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGCreateSurfaceFromPolygon2DSettings::DebugBufferSize");

// /Script/PCG.PCGCreateSurfaceFromSplineSettings
// Kind: Class; super: PCGSettings
class UPCGCreateSurfaceFromSplineSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGCreateSurfaceFromSplineSettings, Seed) == 80, "Offset mismatch for UPCGCreateSurfaceFromSplineSettings::Seed");
static_assert(offsetof(UPCGCreateSurfaceFromSplineSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGCreateSurfaceFromSplineSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGCreateSurfaceFromSplineSettings, bUseSeed) == 96, "Offset mismatch for UPCGCreateSurfaceFromSplineSettings::bUseSeed");
static_assert(offsetof(UPCGCreateSurfaceFromSplineSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGCreateSurfaceFromSplineSettings::CachedOverridableParams");
static_assert(offsetof(UPCGCreateSurfaceFromSplineSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGCreateSurfaceFromSplineSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGCreateSurfaceFromSplineSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGCreateSurfaceFromSplineSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGCreateSurfaceFromSplineSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGCreateSurfaceFromSplineSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGCreateSurfaceFromSplineSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGCreateSurfaceFromSplineSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGCreateSurfaceFromSplineSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGCreateSurfaceFromSplineSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGCreateSurfaceFromSplineSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGCreateSurfaceFromSplineSettings::DebugBufferSize");

// /Script/PCG.PCGCreateTargetActor
// Kind: Class; super: PCGSettings
class UPCGCreateTargetActor
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* TemplateActor; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AttachOptions; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t RootActor[0x20]; // 0x00B8 (Size: 0x20, Type: SoftObjectProperty)
    FString ActorLabel; // 0x00D8 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00E8
    std::uint8_t ActorPivot[0x60]; // 0x00F0 (Size: 0x60, Type: StructProperty)
    FString CommaSeparatedActorTags; // 0x0150 (Size: 0x10, Type: StrProperty)
    TArray<void*> TagsToAddOnActor; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyOverrideDescriptions; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PostProcessFunctionNames; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DataLayerSettings[0x110]; // 0x0190 (Size: 0x110, Type: StructProperty)
    std::uint8_t HLODSettings[0x10]; // 0x02A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bDeleteActorsBeforeGeneration; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x02B1
    void* OverrideTemplateActorClass; // 0x02B8 (Size: 0x8, Type: ClassProperty)
    void* TemplateActorClass; // 0x02C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowTemplateActorEditing; // 0x02C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGCreateTargetActor, TemplateActor) == 168, "Offset mismatch for UPCGCreateTargetActor::TemplateActor");
static_assert(offsetof(UPCGCreateTargetActor, AttachOptions) == 176, "Offset mismatch for UPCGCreateTargetActor::AttachOptions");
static_assert(offsetof(UPCGCreateTargetActor, RootActor) == 184, "Offset mismatch for UPCGCreateTargetActor::RootActor");
static_assert(offsetof(UPCGCreateTargetActor, ActorLabel) == 216, "Offset mismatch for UPCGCreateTargetActor::ActorLabel");
static_assert(offsetof(UPCGCreateTargetActor, ActorPivot) == 240, "Offset mismatch for UPCGCreateTargetActor::ActorPivot");
static_assert(offsetof(UPCGCreateTargetActor, CommaSeparatedActorTags) == 336, "Offset mismatch for UPCGCreateTargetActor::CommaSeparatedActorTags");
static_assert(offsetof(UPCGCreateTargetActor, TagsToAddOnActor) == 352, "Offset mismatch for UPCGCreateTargetActor::TagsToAddOnActor");
static_assert(offsetof(UPCGCreateTargetActor, PropertyOverrideDescriptions) == 368, "Offset mismatch for UPCGCreateTargetActor::PropertyOverrideDescriptions");
static_assert(offsetof(UPCGCreateTargetActor, PostProcessFunctionNames) == 384, "Offset mismatch for UPCGCreateTargetActor::PostProcessFunctionNames");
static_assert(offsetof(UPCGCreateTargetActor, DataLayerSettings) == 400, "Offset mismatch for UPCGCreateTargetActor::DataLayerSettings");
static_assert(offsetof(UPCGCreateTargetActor, HLODSettings) == 672, "Offset mismatch for UPCGCreateTargetActor::HLODSettings");
static_assert(offsetof(UPCGCreateTargetActor, bDeleteActorsBeforeGeneration) == 688, "Offset mismatch for UPCGCreateTargetActor::bDeleteActorsBeforeGeneration");
static_assert(offsetof(UPCGCreateTargetActor, OverrideTemplateActorClass) == 696, "Offset mismatch for UPCGCreateTargetActor::OverrideTemplateActorClass");
static_assert(offsetof(UPCGCreateTargetActor, TemplateActorClass) == 704, "Offset mismatch for UPCGCreateTargetActor::TemplateActorClass");
static_assert(offsetof(UPCGCreateTargetActor, bAllowTemplateActorEditing) == 712, "Offset mismatch for UPCGCreateTargetActor::bAllowTemplateActorEditing");

// /Script/PCG.PCGCullPointsOutsideActorBoundsDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGCullPointsOutsideActorBoundsDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGCullPointsOutsideActorBoundsDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGCullPointsOutsideActorBoundsDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGCullPointsOutsideActorBoundsDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGCullPointsOutsideActorBoundsDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGCullPointsOutsideActorBoundsDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGCullPointsOutsideActorBoundsDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGCullPointsOutsideActorBoundsDataInterface::ProducerKernel");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGCullPointsOutsideActorBoundsDataInterface::ProducerSettings");

// /Script/PCG.PCGCullPointsOutsideActorBoundsDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGCullPointsOutsideActorBoundsDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGCullPointsOutsideActorBoundsDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGCullPointsOutsideActorBoundsDataProvider::ProducerKernel");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGCullPointsOutsideActorBoundsDataProvider::ProducerSettings");

// /Script/PCG.PCGCullPointsOutsideActorBoundsKernel
// Kind: Class; super: PCGComputeKernel
class UPCGCullPointsOutsideActorBoundsKernel
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PCGKernelFlags; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t KernelIndex; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t SettingsPath[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NodePath[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bInitialized; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    TArray<void*> StaticLogEntries; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOverridableParams; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGCullPointsOutsideActorBoundsKernel, PCGKernelFlags) == 56, "Offset mismatch for UPCGCullPointsOutsideActorBoundsKernel::PCGKernelFlags");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsKernel, KernelIndex) == 60, "Offset mismatch for UPCGCullPointsOutsideActorBoundsKernel::KernelIndex");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsKernel, SettingsPath) == 64, "Offset mismatch for UPCGCullPointsOutsideActorBoundsKernel::SettingsPath");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsKernel, NodePath) == 96, "Offset mismatch for UPCGCullPointsOutsideActorBoundsKernel::NodePath");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsKernel, bInitialized) == 128, "Offset mismatch for UPCGCullPointsOutsideActorBoundsKernel::bInitialized");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsKernel, StaticLogEntries) == 136, "Offset mismatch for UPCGCullPointsOutsideActorBoundsKernel::StaticLogEntries");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsKernel, CachedOverridableParams) == 152, "Offset mismatch for UPCGCullPointsOutsideActorBoundsKernel::CachedOverridableParams");

// /Script/PCG.PCGCullPointsOutsideActorBoundsSettings
// Kind: Class; super: PCGSettings
class UPCGCullPointsOutsideActorBoundsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    float BoundsExpansion; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Mode; // 0x00AC (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGCullPointsOutsideActorBoundsSettings, BoundsExpansion) == 168, "Offset mismatch for UPCGCullPointsOutsideActorBoundsSettings::BoundsExpansion");
static_assert(offsetof(UPCGCullPointsOutsideActorBoundsSettings, Mode) == 172, "Offset mismatch for UPCGCullPointsOutsideActorBoundsSettings::Mode");

// /Script/PCG.PCGCustomComputeKernelDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGCustomComputeKernelDataProvider
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* Kernel; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGCustomComputeKernelDataProvider, Kernel) == 104, "Offset mismatch for UPCGCustomComputeKernelDataProvider::Kernel");

// /Script/PCG.PCGCustomHLSLDataInterface
// Kind: Class; super: PCGKernelParamsDataInterface
class UPCGCustomHLSLDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGCustomHLSLDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGCustomHLSLDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGCustomHLSLDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGCustomHLSLDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGCustomHLSLDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGCustomHLSLDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGCustomHLSLDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGCustomHLSLDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGCustomHLSLDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGCustomHLSLDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGCustomHLSLDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGCustomHLSLDataInterface::ProducerKernel");
static_assert(offsetof(UPCGCustomHLSLDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGCustomHLSLDataInterface::ProducerSettings");

// /Script/PCG.PCGCustomHLSLDataProvider
// Kind: Class; super: PCGKernelParamsDataProvider
class UPCGCustomHLSLDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGCustomHLSLDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGCustomHLSLDataProvider::ProducerKernel");
static_assert(offsetof(UPCGCustomHLSLDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGCustomHLSLDataProvider::ProducerSettings");

// /Script/PCG.PCGCustomHLSLKernel
// Kind: Class; super: PCGComputeKernel
class UPCGCustomHLSLKernel
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    TArray<void*> ParsedSources; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KernelAttributeKeys; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PinDataLabels[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> PinCreatedAttributeKeys; // 0x00E8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PinToPropertiesWithSetters; // 0x00F8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PinToPropertiesWithSingleConstantSetters; // 0x0108 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PinWrittenTransformSetters; // 0x0118 (Size: 0x10, Type: MapProperty)
    TArray<void*> PinsRequiringZeroInitialization; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGCustomHLSLKernel, ParsedSources) == 184, "Offset mismatch for UPCGCustomHLSLKernel::ParsedSources");
static_assert(offsetof(UPCGCustomHLSLKernel, KernelAttributeKeys) == 200, "Offset mismatch for UPCGCustomHLSLKernel::KernelAttributeKeys");
static_assert(offsetof(UPCGCustomHLSLKernel, PinDataLabels) == 216, "Offset mismatch for UPCGCustomHLSLKernel::PinDataLabels");
static_assert(offsetof(UPCGCustomHLSLKernel, PinCreatedAttributeKeys) == 232, "Offset mismatch for UPCGCustomHLSLKernel::PinCreatedAttributeKeys");
static_assert(offsetof(UPCGCustomHLSLKernel, PinToPropertiesWithSetters) == 248, "Offset mismatch for UPCGCustomHLSLKernel::PinToPropertiesWithSetters");
static_assert(offsetof(UPCGCustomHLSLKernel, PinToPropertiesWithSingleConstantSetters) == 264, "Offset mismatch for UPCGCustomHLSLKernel::PinToPropertiesWithSingleConstantSetters");
static_assert(offsetof(UPCGCustomHLSLKernel, PinWrittenTransformSetters) == 280, "Offset mismatch for UPCGCustomHLSLKernel::PinWrittenTransformSetters");
static_assert(offsetof(UPCGCustomHLSLKernel, PinsRequiringZeroInitialization) == 296, "Offset mismatch for UPCGCustomHLSLKernel::PinsRequiringZeroInitialization");

// /Script/PCG.PCGCustomHLSLSettings
// Kind: Class; super: PCGSettings
class UPCGCustomHLSLSettings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t KernelType; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    std::int32_t NumElements; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::int32_t NumElementsX; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::int32_t NumElementsY; // 0x00BC (Size: 0x4, Type: IntProperty)
    std::int32_t NumElementsZ; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t TextureFormat; // 0x00C4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextureFilter; // 0x00C5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOverrideTextureTransform; // 0x00C6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x9]; // 0x00C7
    std::uint8_t TextureTransform[0x60]; // 0x00D0 (Size: 0x60, Type: StructProperty)
    std::uint8_t DispatchThreadCount; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0131
    std::int32_t ThreadCountMultiplier; // 0x0134 (Size: 0x4, Type: IntProperty)
    std::int32_t FixedThreadCount; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x013C
    TArray<void*> ThreadCountInputPinLabels; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputPins; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputPins; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bMuteUnwrittenPinDataErrors; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPerPinAttributeCreationSettings; // 0x0171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLegacyDataCollectionAPI; // 0x0172 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGCustomHLSLSettings, KernelType) == 176, "Offset mismatch for UPCGCustomHLSLSettings::KernelType");
static_assert(offsetof(UPCGCustomHLSLSettings, NumElements) == 180, "Offset mismatch for UPCGCustomHLSLSettings::NumElements");
static_assert(offsetof(UPCGCustomHLSLSettings, NumElementsX) == 184, "Offset mismatch for UPCGCustomHLSLSettings::NumElementsX");
static_assert(offsetof(UPCGCustomHLSLSettings, NumElementsY) == 188, "Offset mismatch for UPCGCustomHLSLSettings::NumElementsY");
static_assert(offsetof(UPCGCustomHLSLSettings, NumElementsZ) == 192, "Offset mismatch for UPCGCustomHLSLSettings::NumElementsZ");
static_assert(offsetof(UPCGCustomHLSLSettings, TextureFormat) == 196, "Offset mismatch for UPCGCustomHLSLSettings::TextureFormat");
static_assert(offsetof(UPCGCustomHLSLSettings, TextureFilter) == 197, "Offset mismatch for UPCGCustomHLSLSettings::TextureFilter");
static_assert(offsetof(UPCGCustomHLSLSettings, bOverrideTextureTransform) == 198, "Offset mismatch for UPCGCustomHLSLSettings::bOverrideTextureTransform");
static_assert(offsetof(UPCGCustomHLSLSettings, TextureTransform) == 208, "Offset mismatch for UPCGCustomHLSLSettings::TextureTransform");
static_assert(offsetof(UPCGCustomHLSLSettings, DispatchThreadCount) == 304, "Offset mismatch for UPCGCustomHLSLSettings::DispatchThreadCount");
static_assert(offsetof(UPCGCustomHLSLSettings, ThreadCountMultiplier) == 308, "Offset mismatch for UPCGCustomHLSLSettings::ThreadCountMultiplier");
static_assert(offsetof(UPCGCustomHLSLSettings, FixedThreadCount) == 312, "Offset mismatch for UPCGCustomHLSLSettings::FixedThreadCount");
static_assert(offsetof(UPCGCustomHLSLSettings, ThreadCountInputPinLabels) == 320, "Offset mismatch for UPCGCustomHLSLSettings::ThreadCountInputPinLabels");
static_assert(offsetof(UPCGCustomHLSLSettings, InputPins) == 336, "Offset mismatch for UPCGCustomHLSLSettings::InputPins");
static_assert(offsetof(UPCGCustomHLSLSettings, OutputPins) == 352, "Offset mismatch for UPCGCustomHLSLSettings::OutputPins");
static_assert(offsetof(UPCGCustomHLSLSettings, bMuteUnwrittenPinDataErrors) == 368, "Offset mismatch for UPCGCustomHLSLSettings::bMuteUnwrittenPinDataErrors");
static_assert(offsetof(UPCGCustomHLSLSettings, bPerPinAttributeCreationSettings) == 369, "Offset mismatch for UPCGCustomHLSLSettings::bPerPinAttributeCreationSettings");
static_assert(offsetof(UPCGCustomHLSLSettings, bUseLegacyDataCollectionAPI) == 370, "Offset mismatch for UPCGCustomHLSLSettings::bUseLegacyDataCollectionAPI");

// /Script/PCG.PCGCustomKernelDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGCustomKernelDataInterface
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* Kernel; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> Settings; // 0x0088 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGCustomKernelDataInterface, Kernel) == 128, "Offset mismatch for UPCGCustomKernelDataInterface::Kernel");
static_assert(offsetof(UPCGCustomKernelDataInterface, Settings) == 136, "Offset mismatch for UPCGCustomKernelDataInterface::Settings");

// /Script/PCG.PCGData
// Kind: Class; super: Object
class UPCGData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint64_t UID; // 0x0028 (Size: 0x8, Type: UInt64Property)
    std::uint8_t Pad_0001[0x8]; // 0x0030
    void* MetaData; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGData, UID) == 40, "Offset mismatch for UPCGData::UID");
static_assert(offsetof(UPCGData, MetaData) == 56, "Offset mismatch for UPCGData::MetaData");

// /Script/PCG.PCGDataAsset
// Kind: Class; super: Object
class UPCGDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Data[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    FString Name; // 0x0058 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPCGDataAsset, Data) == 40, "Offset mismatch for UPCGDataAsset::Data");
static_assert(offsetof(UPCGDataAsset, Name) == 88, "Offset mismatch for UPCGDataAsset::Name");

// /Script/PCG.PCGDataAttributesAndTagsSettingsBase
// Kind: Class; super: PCGSettings
class UPCGDataAttributesAndTagsSettingsBase
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TMap<void*, void*> AttributesTagsMapping; // 0x00A8 (Size: 0x10, Type: MapProperty)
    std::uint8_t bDeleteInputsAfterOperation; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDataAttributesAndTagsSettingsBase, AttributesTagsMapping) == 168, "Offset mismatch for UPCGDataAttributesAndTagsSettingsBase::AttributesTagsMapping");
static_assert(offsetof(UPCGDataAttributesAndTagsSettingsBase, bDeleteInputsAfterOperation) == 184, "Offset mismatch for UPCGDataAttributesAndTagsSettingsBase::bDeleteInputsAfterOperation");

// /Script/PCG.PCGDataAttributesToTagsSettings
// Kind: Class; super: PCGDataAttributesAndTagsSettingsBase
class UPCGDataAttributesToTagsSettings
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bDiscardNonParseableAttributeTypes; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDiscardAttributeValue; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTreatStringAttributesAsTags; // 0x00C2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDataAttributesToTagsSettings, bDiscardNonParseableAttributeTypes) == 192, "Offset mismatch for UPCGDataAttributesToTagsSettings::bDiscardNonParseableAttributeTypes");
static_assert(offsetof(UPCGDataAttributesToTagsSettings, bDiscardAttributeValue) == 193, "Offset mismatch for UPCGDataAttributesToTagsSettings::bDiscardAttributeValue");
static_assert(offsetof(UPCGDataAttributesToTagsSettings, bTreatStringAttributesAsTags) == 194, "Offset mismatch for UPCGDataAttributesToTagsSettings::bTreatStringAttributesAsTags");

// /Script/PCG.PCGDataBinding
// Kind: Class; super: Object
class UPCGDataBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Graph; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InputDataCollection[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputDataCollection[0x30]; // 0x0060 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> MeshSpawnersToPrimitives; // 0x0090 (Size: 0x10, Type: MapProperty)
    TArray<void*> CompletedMeshSpawners; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataToDebug; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataToInspect; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataToLog; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00E0
    std::uint8_t AttributeTable[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    TArray<void*> StringTable; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGDataBinding, Graph) == 40, "Offset mismatch for UPCGDataBinding::Graph");
static_assert(offsetof(UPCGDataBinding, InputDataCollection) == 48, "Offset mismatch for UPCGDataBinding::InputDataCollection");
static_assert(offsetof(UPCGDataBinding, OutputDataCollection) == 96, "Offset mismatch for UPCGDataBinding::OutputDataCollection");
static_assert(offsetof(UPCGDataBinding, MeshSpawnersToPrimitives) == 144, "Offset mismatch for UPCGDataBinding::MeshSpawnersToPrimitives");
static_assert(offsetof(UPCGDataBinding, CompletedMeshSpawners) == 160, "Offset mismatch for UPCGDataBinding::CompletedMeshSpawners");
static_assert(offsetof(UPCGDataBinding, DataToDebug) == 176, "Offset mismatch for UPCGDataBinding::DataToDebug");
static_assert(offsetof(UPCGDataBinding, DataToInspect) == 192, "Offset mismatch for UPCGDataBinding::DataToInspect");
static_assert(offsetof(UPCGDataBinding, DataToLog) == 208, "Offset mismatch for UPCGDataBinding::DataToLog");
static_assert(offsetof(UPCGDataBinding, AttributeTable) == 240, "Offset mismatch for UPCGDataBinding::AttributeTable");
static_assert(offsetof(UPCGDataBinding, StringTable) == 256, "Offset mismatch for UPCGDataBinding::StringTable");

// /Script/PCG.PCGDataCollectionDataInterface
// Kind: Class; super: PCGExportableDataInterface
class UPCGDataCollectionDataInterface
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t bRequiresZeroInitialization; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0089
    std::uint32_t ElementCountMultiplier; // 0x008C (Size: 0x4, Type: UInt32Property)
    std::uint8_t bLegacyAllowSettersOnInputs; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDataCollectionDataInterface, bRequiresZeroInitialization) == 136, "Offset mismatch for UPCGDataCollectionDataInterface::bRequiresZeroInitialization");
static_assert(offsetof(UPCGDataCollectionDataInterface, ElementCountMultiplier) == 140, "Offset mismatch for UPCGDataCollectionDataInterface::ElementCountMultiplier");
static_assert(offsetof(UPCGDataCollectionDataInterface, bLegacyAllowSettersOnInputs) == 144, "Offset mismatch for UPCGDataCollectionDataInterface::bLegacyAllowSettersOnInputs");

// /Script/PCG.PCGDataCollectionDataProvider
// Kind: Class; super: PCGExportableDataProvider
class UPCGDataCollectionDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGDataCollectionDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGDataCollectionDataProvider::ProducerKernel");
static_assert(offsetof(UPCGDataCollectionDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGDataCollectionDataProvider::ProducerSettings");

// /Script/PCG.PCGDataCollectionExporter
// Kind: Class; super: PCGAssetExporter
class UPCGDataCollectionExporter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Data[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGDataCollectionExporter, Data) == 40, "Offset mismatch for UPCGDataCollectionExporter::Data");

// /Script/PCG.PCGDataFromActorSettings
// Kind: Class; super: PCGSettings
class UPCGDataFromActorSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ActorSelector[0x68]; // 0x00A8 (Size: 0x68, Type: StructProperty)
    std::uint8_t ComponentSelector[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t Mode; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnorePCGGeneratedComponents; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlsoOutputSinglePointData; // 0x0152 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComponentsMustOverlapSelf; // 0x0153 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetDataOnAllGrids; // 0x0154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0155
    std::int32_t AllowedGrids; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMergeSinglePointData; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x015D
    TArray<void*> ExpectedPins; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropertyName[0x4]; // 0x0170 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAlwaysRequeryActors; // 0x0174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceSanitizedAttributeNameWarnings; // 0x0175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceReservedAttributeNameWarnings; // 0x0176 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayModeSettings; // 0x0177 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDataFromActorSettings, ActorSelector) == 168, "Offset mismatch for UPCGDataFromActorSettings::ActorSelector");
static_assert(offsetof(UPCGDataFromActorSettings, ComponentSelector) == 272, "Offset mismatch for UPCGDataFromActorSettings::ComponentSelector");
static_assert(offsetof(UPCGDataFromActorSettings, Mode) == 336, "Offset mismatch for UPCGDataFromActorSettings::Mode");
static_assert(offsetof(UPCGDataFromActorSettings, bIgnorePCGGeneratedComponents) == 337, "Offset mismatch for UPCGDataFromActorSettings::bIgnorePCGGeneratedComponents");
static_assert(offsetof(UPCGDataFromActorSettings, bAlsoOutputSinglePointData) == 338, "Offset mismatch for UPCGDataFromActorSettings::bAlsoOutputSinglePointData");
static_assert(offsetof(UPCGDataFromActorSettings, bComponentsMustOverlapSelf) == 339, "Offset mismatch for UPCGDataFromActorSettings::bComponentsMustOverlapSelf");
static_assert(offsetof(UPCGDataFromActorSettings, bGetDataOnAllGrids) == 340, "Offset mismatch for UPCGDataFromActorSettings::bGetDataOnAllGrids");
static_assert(offsetof(UPCGDataFromActorSettings, AllowedGrids) == 344, "Offset mismatch for UPCGDataFromActorSettings::AllowedGrids");
static_assert(offsetof(UPCGDataFromActorSettings, bMergeSinglePointData) == 348, "Offset mismatch for UPCGDataFromActorSettings::bMergeSinglePointData");
static_assert(offsetof(UPCGDataFromActorSettings, ExpectedPins) == 352, "Offset mismatch for UPCGDataFromActorSettings::ExpectedPins");
static_assert(offsetof(UPCGDataFromActorSettings, PropertyName) == 368, "Offset mismatch for UPCGDataFromActorSettings::PropertyName");
static_assert(offsetof(UPCGDataFromActorSettings, bAlwaysRequeryActors) == 372, "Offset mismatch for UPCGDataFromActorSettings::bAlwaysRequeryActors");
static_assert(offsetof(UPCGDataFromActorSettings, bSilenceSanitizedAttributeNameWarnings) == 373, "Offset mismatch for UPCGDataFromActorSettings::bSilenceSanitizedAttributeNameWarnings");
static_assert(offsetof(UPCGDataFromActorSettings, bSilenceReservedAttributeNameWarnings) == 374, "Offset mismatch for UPCGDataFromActorSettings::bSilenceReservedAttributeNameWarnings");
static_assert(offsetof(UPCGDataFromActorSettings, bDisplayModeSettings) == 375, "Offset mismatch for UPCGDataFromActorSettings::bDisplayModeSettings");

// /Script/PCG.PCGDataFromTool
// Kind: Class; super: PCGSettings
class UPCGDataFromTool
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ToolTag[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    FName DataInstance; // 0x00AC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGDataFromTool, ToolTag) == 168, "Offset mismatch for UPCGDataFromTool::ToolTag");
static_assert(offsetof(UPCGDataFromTool, DataInstance) == 172, "Offset mismatch for UPCGDataFromTool::DataInstance");

// /Script/PCG.PCGDataFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGDataFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataLabelResolverDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGDataLabelResolverDataInterface
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t PinLabel[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsInput; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0085
    void* Kernel; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGDataLabelResolverDataInterface, PinLabel) == 128, "Offset mismatch for UPCGDataLabelResolverDataInterface::PinLabel");
static_assert(offsetof(UPCGDataLabelResolverDataInterface, bIsInput) == 132, "Offset mismatch for UPCGDataLabelResolverDataInterface::bIsInput");
static_assert(offsetof(UPCGDataLabelResolverDataInterface, Kernel) == 136, "Offset mismatch for UPCGDataLabelResolverDataInterface::Kernel");

// /Script/PCG.PCGDataLabelResolverDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGDataLabelResolverDataProvider
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* Kernel; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PinLabel[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsInput; // 0x0074 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDataLabelResolverDataProvider, Kernel) == 104, "Offset mismatch for UPCGDataLabelResolverDataProvider::Kernel");
static_assert(offsetof(UPCGDataLabelResolverDataProvider, PinLabel) == 112, "Offset mismatch for UPCGDataLabelResolverDataProvider::PinLabel");
static_assert(offsetof(UPCGDataLabelResolverDataProvider, bIsInput) == 116, "Offset mismatch for UPCGDataLabelResolverDataProvider::bIsInput");

// /Script/PCG.PCGDataNumDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGDataNumDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGDataNumDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGDataNumDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGDataNumDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGDataNumDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGDataNumDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGDataNumDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGDataNumDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGDataNumDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGDataNumDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGDataNumDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGDataNumDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGDataNumDataInterface::ProducerKernel");
static_assert(offsetof(UPCGDataNumDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGDataNumDataInterface::ProducerSettings");

// /Script/PCG.PCGDataNumDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGDataNumDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGDataNumDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGDataNumDataProvider::ProducerKernel");
static_assert(offsetof(UPCGDataNumDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGDataNumDataProvider::ProducerSettings");

// /Script/PCG.PCGDataNumKernel
// Kind: Class; super: PCGComputeKernel
class UPCGDataNumKernel
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t OutCountAttributeKey[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGDataNumKernel, OutCountAttributeKey) == 184, "Offset mismatch for UPCGDataNumKernel::OutCountAttributeKey");

// /Script/PCG.PCGDataNumSettings
// Kind: Class; super: PCGSettings
class UPCGDataNumSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName OutputAttributeName; // 0x00A8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGDataNumSettings, OutputAttributeName) == 168, "Offset mismatch for UPCGDataNumSettings::OutputAttributeName");

// /Script/PCG.PCGDataTableRowToParamDataSettings
// Kind: Class; super: PCGSettings
class UPCGDataTableRowToParamDataSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName RowName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t DataTable[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bSynchronousLoad; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDataTableRowToParamDataSettings, RowName) == 168, "Offset mismatch for UPCGDataTableRowToParamDataSettings::RowName");
static_assert(offsetof(UPCGDataTableRowToParamDataSettings, DataTable) == 176, "Offset mismatch for UPCGDataTableRowToParamDataSettings::DataTable");
static_assert(offsetof(UPCGDataTableRowToParamDataSettings, bSynchronousLoad) == 208, "Offset mismatch for UPCGDataTableRowToParamDataSettings::bSynchronousLoad");

// /Script/PCG.PCGDataTypeIdentifierHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGDataTypeIdentifierHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataViewCSVConverter
// Kind: Class; super: PCGDataViewConverterBase
class UPCGDataViewCSVConverter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataViewConverterBase
// Kind: Class; super: Object
class UPCGDataViewConverterBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataViewData
// Kind: Class; super: PCGData
class UPCGDataViewData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t DataView[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGDataViewData, DataView) == 72, "Offset mismatch for UPCGDataViewData::DataView");

// /Script/PCG.PCGDataViewJsonConverter
// Kind: Class; super: PCGDataViewConverterBase
class UPCGDataViewJsonConverter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDataViewToStringSettings
// Kind: Class; super: PCGSettings
class UPCGDataViewToStringSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* ConverterClass; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ConverterParameters[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGDataViewToStringSettings, ConverterClass) == 168, "Offset mismatch for UPCGDataViewToStringSettings::ConverterClass");
static_assert(offsetof(UPCGDataViewToStringSettings, ConverterParameters) == 176, "Offset mismatch for UPCGDataViewToStringSettings::ConverterParameters");

// /Script/PCG.PCGDebugDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGDebugDataInterface
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint32_t DebugBufferSizeFloats; // 0x0080 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UPCGDebugDataInterface, DebugBufferSizeFloats) == 128, "Offset mismatch for UPCGDebugDataInterface::DebugBufferSizeFloats");

// /Script/PCG.PCGDebugDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGDebugDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGDebugDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGDebugDataProvider::ProducerKernel");
static_assert(offsetof(UPCGDebugDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGDebugDataProvider::ProducerSettings");

// /Script/PCG.PCGDebugDrawComponent
// Kind: Class; super: DebugDrawComponent
class UPCGDebugDrawComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGDebugDrawComponent, MinDrawDistance) == 632, "Offset mismatch for UPCGDebugDrawComponent::MinDrawDistance");
static_assert(offsetof(UPCGDebugDrawComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UPCGDebugDrawComponent::LDMaxDrawDistance");
static_assert(offsetof(UPCGDebugDrawComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UPCGDebugDrawComponent::CachedMaxDrawDistance");
static_assert(offsetof(UPCGDebugDrawComponent, DepthPriorityGroup) == 644, "Offset mismatch for UPCGDebugDrawComponent::DepthPriorityGroup");
static_assert(offsetof(UPCGDebugDrawComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UPCGDebugDrawComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UPCGDebugDrawComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UPCGDebugDrawComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UPCGDebugDrawComponent, LightmapType) == 647, "Offset mismatch for UPCGDebugDrawComponent::LightmapType");
static_assert(offsetof(UPCGDebugDrawComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UPCGDebugDrawComponent::HLODBatchingPolicy");
static_assert(offsetof(UPCGDebugDrawComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UPCGDebugDrawComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UPCGDebugDrawComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UPCGDebugDrawComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UPCGDebugDrawComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UPCGDebugDrawComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UPCGDebugDrawComponent, bHoldout) == 652, "Offset mismatch for UPCGDebugDrawComponent::bHoldout");
static_assert(offsetof(UPCGDebugDrawComponent, CastShadow) == 653, "Offset mismatch for UPCGDebugDrawComponent::CastShadow");
static_assert(offsetof(UPCGDebugDrawComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UPCGDebugDrawComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UPCGDebugDrawComponent, bCastCinematicShadow) == 655, "Offset mismatch for UPCGDebugDrawComponent::bCastCinematicShadow");
static_assert(offsetof(UPCGDebugDrawComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UPCGDebugDrawComponent::AlwaysLoadOnClient");
static_assert(offsetof(UPCGDebugDrawComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UPCGDebugDrawComponent::bHiddenInSceneCapture");
static_assert(offsetof(UPCGDebugDrawComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UPCGDebugDrawComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UPCGDebugDrawComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UPCGDebugDrawComponent::bHasNoStreamableTextures");
static_assert(offsetof(UPCGDebugDrawComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UPCGDebugDrawComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UPCGDebugDrawComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UPCGDebugDrawComponent::CanCharacterStepUpOn");
static_assert(offsetof(UPCGDebugDrawComponent, LightingChannels) == 663, "Offset mismatch for UPCGDebugDrawComponent::LightingChannels");
static_assert(offsetof(UPCGDebugDrawComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UPCGDebugDrawComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UPCGDebugDrawComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UPCGDebugDrawComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UPCGDebugDrawComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UPCGDebugDrawComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UPCGDebugDrawComponent, RayTracingGroupId) == 668, "Offset mismatch for UPCGDebugDrawComponent::RayTracingGroupId");
static_assert(offsetof(UPCGDebugDrawComponent, VisibilityId) == 672, "Offset mismatch for UPCGDebugDrawComponent::VisibilityId");
static_assert(offsetof(UPCGDebugDrawComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UPCGDebugDrawComponent::CustomDepthStencilValue");
static_assert(offsetof(UPCGDebugDrawComponent, CustomPrimitiveData) == 680, "Offset mismatch for UPCGDebugDrawComponent::CustomPrimitiveData");
static_assert(offsetof(UPCGDebugDrawComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UPCGDebugDrawComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UPCGDebugDrawComponent, TranslucencySortPriority) == 776, "Offset mismatch for UPCGDebugDrawComponent::TranslucencySortPriority");
static_assert(offsetof(UPCGDebugDrawComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UPCGDebugDrawComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UPCGDebugDrawComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UPCGDebugDrawComponent::RuntimeVirtualTextures");
static_assert(offsetof(UPCGDebugDrawComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UPCGDebugDrawComponent::VirtualTextureLodBias");
static_assert(offsetof(UPCGDebugDrawComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UPCGDebugDrawComponent::VirtualTextureCullMips");
static_assert(offsetof(UPCGDebugDrawComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UPCGDebugDrawComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UPCGDebugDrawComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UPCGDebugDrawComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UPCGDebugDrawComponent, BoundsScale) == 840, "Offset mismatch for UPCGDebugDrawComponent::BoundsScale");
static_assert(offsetof(UPCGDebugDrawComponent, MoveIgnoreActors) == 848, "Offset mismatch for UPCGDebugDrawComponent::MoveIgnoreActors");
static_assert(offsetof(UPCGDebugDrawComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UPCGDebugDrawComponent::MoveIgnoreComponents");
static_assert(offsetof(UPCGDebugDrawComponent, BodyInstance) == 896, "Offset mismatch for UPCGDebugDrawComponent::BodyInstance");
static_assert(offsetof(UPCGDebugDrawComponent, OnComponentHit) == 1320, "Offset mismatch for UPCGDebugDrawComponent::OnComponentHit");
static_assert(offsetof(UPCGDebugDrawComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UPCGDebugDrawComponent::OnComponentBeginOverlap");
static_assert(offsetof(UPCGDebugDrawComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UPCGDebugDrawComponent::OnComponentEndOverlap");
static_assert(offsetof(UPCGDebugDrawComponent, OnComponentWake) == 1323, "Offset mismatch for UPCGDebugDrawComponent::OnComponentWake");
static_assert(offsetof(UPCGDebugDrawComponent, OnComponentSleep) == 1324, "Offset mismatch for UPCGDebugDrawComponent::OnComponentSleep");
static_assert(offsetof(UPCGDebugDrawComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UPCGDebugDrawComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UPCGDebugDrawComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UPCGDebugDrawComponent::OnBeginCursorOver");
static_assert(offsetof(UPCGDebugDrawComponent, OnEndCursorOver) == 1328, "Offset mismatch for UPCGDebugDrawComponent::OnEndCursorOver");
static_assert(offsetof(UPCGDebugDrawComponent, OnClicked) == 1329, "Offset mismatch for UPCGDebugDrawComponent::OnClicked");
static_assert(offsetof(UPCGDebugDrawComponent, OnReleased) == 1330, "Offset mismatch for UPCGDebugDrawComponent::OnReleased");
static_assert(offsetof(UPCGDebugDrawComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UPCGDebugDrawComponent::OnInputTouchBegin");
static_assert(offsetof(UPCGDebugDrawComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UPCGDebugDrawComponent::OnInputTouchEnd");
static_assert(offsetof(UPCGDebugDrawComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UPCGDebugDrawComponent::OnInputTouchEnter");
static_assert(offsetof(UPCGDebugDrawComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UPCGDebugDrawComponent::OnInputTouchLeave");
static_assert(offsetof(UPCGDebugDrawComponent, OnTouchBegan) == 1335, "Offset mismatch for UPCGDebugDrawComponent::OnTouchBegan");
static_assert(offsetof(UPCGDebugDrawComponent, OnTouchEnded) == 1336, "Offset mismatch for UPCGDebugDrawComponent::OnTouchEnded");
static_assert(offsetof(UPCGDebugDrawComponent, OnTouchEntered) == 1337, "Offset mismatch for UPCGDebugDrawComponent::OnTouchEntered");
static_assert(offsetof(UPCGDebugDrawComponent, OnTouchExited) == 1338, "Offset mismatch for UPCGDebugDrawComponent::OnTouchExited");
static_assert(offsetof(UPCGDebugDrawComponent, LODParentPrimitive) == 1368, "Offset mismatch for UPCGDebugDrawComponent::LODParentPrimitive");

// /Script/PCG.PCGDebugSettings
// Kind: Class; super: PCGSettings
class UPCGDebugSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TSoftObjectPtr<void> TargetActor; // 0x00A8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGDebugSettings, TargetActor) == 168, "Offset mismatch for UPCGDebugSettings::TargetActor");

// /Script/PCG.PCGDefaultActorExecutionSource
// Kind: Class; super: PCGDefaultWorldObjectExecutionSource
class UPCGDefaultActorExecutionSource
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t ManagedResourceContainer[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGDefaultActorExecutionSource, ManagedResourceContainer) == 88, "Offset mismatch for UPCGDefaultActorExecutionSource::ManagedResourceContainer");

// /Script/PCG.PCGDefaultExecutionSource
// Kind: Class; super: Object
class UPCGDefaultExecutionSource
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* GraphInterface; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGDefaultExecutionSource, GraphInterface) == 56, "Offset mismatch for UPCGDefaultExecutionSource::GraphInterface");

// /Script/PCG.PCGDefaultWorldObjectExecutionSource
// Kind: Class; super: PCGDefaultExecutionSource
class UPCGDefaultWorldObjectExecutionSource
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t ManagedResourceContainer[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGDefaultWorldObjectExecutionSource, ManagedResourceContainer) == 88, "Offset mismatch for UPCGDefaultWorldObjectExecutionSource::ManagedResourceContainer");

// /Script/PCG.PCGDeleteAttributesSettings
// Kind: Class; super: PCGSettings
class UPCGDeleteAttributesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Operation; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t Operator; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00AD
    FString SelectedAttributes; // 0x00B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bTokenizeOnWhiteSpace; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00C1
    FName MetadataDomain; // 0x00C4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGDeleteAttributesSettings, Operation) == 168, "Offset mismatch for UPCGDeleteAttributesSettings::Operation");
static_assert(offsetof(UPCGDeleteAttributesSettings, Operator) == 172, "Offset mismatch for UPCGDeleteAttributesSettings::Operator");
static_assert(offsetof(UPCGDeleteAttributesSettings, SelectedAttributes) == 176, "Offset mismatch for UPCGDeleteAttributesSettings::SelectedAttributes");
static_assert(offsetof(UPCGDeleteAttributesSettings, bTokenizeOnWhiteSpace) == 192, "Offset mismatch for UPCGDeleteAttributesSettings::bTokenizeOnWhiteSpace");
static_assert(offsetof(UPCGDeleteAttributesSettings, MetadataDomain) == 196, "Offset mismatch for UPCGDeleteAttributesSettings::MetadataDomain");

// /Script/PCG.PCGDeleteTagsSettings
// Kind: Class; super: PCGSettings
class UPCGDeleteTagsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Operation; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t Operator; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00AD
    FString SelectedTags; // 0x00B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bTokenizeOnWhiteSpace; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDeleteTagsSettings, Operation) == 168, "Offset mismatch for UPCGDeleteTagsSettings::Operation");
static_assert(offsetof(UPCGDeleteTagsSettings, Operator) == 172, "Offset mismatch for UPCGDeleteTagsSettings::Operator");
static_assert(offsetof(UPCGDeleteTagsSettings, SelectedTags) == 176, "Offset mismatch for UPCGDeleteTagsSettings::SelectedTags");
static_assert(offsetof(UPCGDeleteTagsSettings, bTokenizeOnWhiteSpace) == 192, "Offset mismatch for UPCGDeleteTagsSettings::bTokenizeOnWhiteSpace");

// /Script/PCG.PCGDensityFilterSettings
// Kind: Class; super: PCGSettings
class UPCGDensityFilterSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    float LowerBound; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float UpperBound; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInvertFilter; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNormalizeOutputDensity; // 0x00B1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDensityFilterSettings, LowerBound) == 168, "Offset mismatch for UPCGDensityFilterSettings::LowerBound");
static_assert(offsetof(UPCGDensityFilterSettings, UpperBound) == 172, "Offset mismatch for UPCGDensityFilterSettings::UpperBound");
static_assert(offsetof(UPCGDensityFilterSettings, bInvertFilter) == 176, "Offset mismatch for UPCGDensityFilterSettings::bInvertFilter");
static_assert(offsetof(UPCGDensityFilterSettings, bNormalizeOutputDensity) == 177, "Offset mismatch for UPCGDensityFilterSettings::bNormalizeOutputDensity");

// /Script/PCG.PCGDensityRemapSettings
// Kind: Class; super: PCGSettings
class UPCGDensityRemapSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    float InRangeMin; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float InRangeMax; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float OutRangeMin; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float OutRangeMax; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bExcludeValuesOutsideInputRange; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDensityRemapSettings, InRangeMin) == 168, "Offset mismatch for UPCGDensityRemapSettings::InRangeMin");
static_assert(offsetof(UPCGDensityRemapSettings, InRangeMax) == 172, "Offset mismatch for UPCGDensityRemapSettings::InRangeMax");
static_assert(offsetof(UPCGDensityRemapSettings, OutRangeMin) == 176, "Offset mismatch for UPCGDensityRemapSettings::OutRangeMin");
static_assert(offsetof(UPCGDensityRemapSettings, OutRangeMax) == 180, "Offset mismatch for UPCGDensityRemapSettings::OutRangeMax");
static_assert(offsetof(UPCGDensityRemapSettings, bExcludeValuesOutsideInputRange) == 184, "Offset mismatch for UPCGDensityRemapSettings::bExcludeValuesOutsideInputRange");

// /Script/PCG.PCGDeterminismTestBlueprintBase
// Kind: Class; super: Object
class UPCGDeterminismTestBlueprintBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGDifferenceData
// Kind: Class; super: PCGSpatialDataWithPointCache
class UPCGDifferenceData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bDiffMetadata; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* Source; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Difference; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DifferencesUnion; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DensityFunction; // 0x0100 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGDifferenceData, bDiffMetadata) == 224, "Offset mismatch for UPCGDifferenceData::bDiffMetadata");
static_assert(offsetof(UPCGDifferenceData, Source) == 232, "Offset mismatch for UPCGDifferenceData::Source");
static_assert(offsetof(UPCGDifferenceData, Difference) == 240, "Offset mismatch for UPCGDifferenceData::Difference");
static_assert(offsetof(UPCGDifferenceData, DifferencesUnion) == 248, "Offset mismatch for UPCGDifferenceData::DifferencesUnion");
static_assert(offsetof(UPCGDifferenceData, DensityFunction) == 256, "Offset mismatch for UPCGDifferenceData::DensityFunction");

// /Script/PCG.PCGDifferenceSettings
// Kind: Class; super: PCGSettings
class UPCGDifferenceSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t DensityFunction; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Mode; // 0x00A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDiffMetadata; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepZeroDensityPoints; // 0x00AB (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDifferenceSettings, DensityFunction) == 168, "Offset mismatch for UPCGDifferenceSettings::DensityFunction");
static_assert(offsetof(UPCGDifferenceSettings, Mode) == 169, "Offset mismatch for UPCGDifferenceSettings::Mode");
static_assert(offsetof(UPCGDifferenceSettings, bDiffMetadata) == 170, "Offset mismatch for UPCGDifferenceSettings::bDiffMetadata");
static_assert(offsetof(UPCGDifferenceSettings, bKeepZeroDensityPoints) == 171, "Offset mismatch for UPCGDifferenceSettings::bKeepZeroDensityPoints");

// /Script/PCG.PCGDistanceSettings
// Kind: Class; super: PCGSettings
class UPCGDistanceSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bOutputToAttribute; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t OutputAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bOutputDistanceVector; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetDensity; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00E2
    double MaximumDistance; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t SourceShape; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00F1
    std::uint8_t TargetShape; // 0x00F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00F5
    std::uint8_t bCheckSourceAgainstRespectiveTarget; // 0x00F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDistanceSettings, bOutputToAttribute) == 168, "Offset mismatch for UPCGDistanceSettings::bOutputToAttribute");
static_assert(offsetof(UPCGDistanceSettings, OutputAttribute) == 176, "Offset mismatch for UPCGDistanceSettings::OutputAttribute");
static_assert(offsetof(UPCGDistanceSettings, bOutputDistanceVector) == 224, "Offset mismatch for UPCGDistanceSettings::bOutputDistanceVector");
static_assert(offsetof(UPCGDistanceSettings, bSetDensity) == 225, "Offset mismatch for UPCGDistanceSettings::bSetDensity");
static_assert(offsetof(UPCGDistanceSettings, MaximumDistance) == 232, "Offset mismatch for UPCGDistanceSettings::MaximumDistance");
static_assert(offsetof(UPCGDistanceSettings, SourceShape) == 240, "Offset mismatch for UPCGDistanceSettings::SourceShape");
static_assert(offsetof(UPCGDistanceSettings, TargetShape) == 244, "Offset mismatch for UPCGDistanceSettings::TargetShape");
static_assert(offsetof(UPCGDistanceSettings, bCheckSourceAgainstRespectiveTarget) == 248, "Offset mismatch for UPCGDistanceSettings::bCheckSourceAgainstRespectiveTarget");

// /Script/PCG.PCGDownloadFromGPUSettings
// Kind: Class; super: PCGSettings
class UPCGDownloadFromGPUSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGDownloadFromGPUSettings, Seed) == 80, "Offset mismatch for UPCGDownloadFromGPUSettings::Seed");
static_assert(offsetof(UPCGDownloadFromGPUSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGDownloadFromGPUSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGDownloadFromGPUSettings, bUseSeed) == 96, "Offset mismatch for UPCGDownloadFromGPUSettings::bUseSeed");
static_assert(offsetof(UPCGDownloadFromGPUSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGDownloadFromGPUSettings::CachedOverridableParams");
static_assert(offsetof(UPCGDownloadFromGPUSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGDownloadFromGPUSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGDownloadFromGPUSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGDownloadFromGPUSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGDownloadFromGPUSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGDownloadFromGPUSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGDownloadFromGPUSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGDownloadFromGPUSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGDownloadFromGPUSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGDownloadFromGPUSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGDownloadFromGPUSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGDownloadFromGPUSettings::DebugBufferSize");

// /Script/PCG.PCGDownsampleTextureSettings
// Kind: Class; super: PCGSettings
class UPCGDownsampleTextureSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPadResolutionToSquare; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPadResolutionToNextPowerOfTwo; // 0x00AA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDownsampleTextureSettings, Mode) == 168, "Offset mismatch for UPCGDownsampleTextureSettings::Mode");
static_assert(offsetof(UPCGDownsampleTextureSettings, bPadResolutionToSquare) == 169, "Offset mismatch for UPCGDownsampleTextureSettings::bPadResolutionToSquare");
static_assert(offsetof(UPCGDownsampleTextureSettings, bPadResolutionToNextPowerOfTwo) == 170, "Offset mismatch for UPCGDownsampleTextureSettings::bPadResolutionToNextPowerOfTwo");

// /Script/PCG.PCGDummyGetPropertyTest
// Kind: Class; super: Object
class UPCGDummyGetPropertyTest
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int64_t Int64Property; // 0x0028 (Size: 0x8, Type: Int64Property)
    double DoubleProperty; // 0x0030 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPCGDummyGetPropertyTest, Int64Property) == 40, "Offset mismatch for UPCGDummyGetPropertyTest::Int64Property");
static_assert(offsetof(UPCGDummyGetPropertyTest, DoubleProperty) == 48, "Offset mismatch for UPCGDummyGetPropertyTest::DoubleProperty");

// /Script/PCG.PCGDuplicateCrossSectionsSettings
// Kind: Class; super: PCGSubdivisionBaseSettings
class UPCGDuplicateCrossSectionsSettings
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    std::uint8_t bExtrudeVectorAsAttribute; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    std::uint8_t ExtrudeVector[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExtrudeVectorAttribute[0x30]; // 0x0198 (Size: 0x30, Type: StructProperty)
    std::uint8_t bExtraOutputAttributesOnDataDomain; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputSplineIndexAttribute; // 0x01C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x01CA
    std::uint8_t SplineIndexAttributeName[0x4]; // 0x01CC (Size: 0x4, Type: NameProperty)
    std::uint8_t bSilenceGrammarDoesNotFitErrors; // 0x01D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGDuplicateCrossSectionsSettings, bExtrudeVectorAsAttribute) == 376, "Offset mismatch for UPCGDuplicateCrossSectionsSettings::bExtrudeVectorAsAttribute");
static_assert(offsetof(UPCGDuplicateCrossSectionsSettings, ExtrudeVector) == 384, "Offset mismatch for UPCGDuplicateCrossSectionsSettings::ExtrudeVector");
static_assert(offsetof(UPCGDuplicateCrossSectionsSettings, ExtrudeVectorAttribute) == 408, "Offset mismatch for UPCGDuplicateCrossSectionsSettings::ExtrudeVectorAttribute");
static_assert(offsetof(UPCGDuplicateCrossSectionsSettings, bExtraOutputAttributesOnDataDomain) == 456, "Offset mismatch for UPCGDuplicateCrossSectionsSettings::bExtraOutputAttributesOnDataDomain");
static_assert(offsetof(UPCGDuplicateCrossSectionsSettings, bOutputSplineIndexAttribute) == 457, "Offset mismatch for UPCGDuplicateCrossSectionsSettings::bOutputSplineIndexAttribute");
static_assert(offsetof(UPCGDuplicateCrossSectionsSettings, SplineIndexAttributeName) == 460, "Offset mismatch for UPCGDuplicateCrossSectionsSettings::SplineIndexAttributeName");
static_assert(offsetof(UPCGDuplicateCrossSectionsSettings, bSilenceGrammarDoesNotFitErrors) == 464, "Offset mismatch for UPCGDuplicateCrossSectionsSettings::bSilenceGrammarDoesNotFitErrors");

// /Script/PCG.PCGDuplicatePointSettings
// Kind: Class; super: PCGSettings
class UPCGDuplicatePointSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::int32_t Iterations; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00AC
    std::uint8_t Direction[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDirectionAppliedInRelativeSpace; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputSourcePoint; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00CA
    std::uint8_t PointTransform[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGDuplicatePointSettings, Iterations) == 168, "Offset mismatch for UPCGDuplicatePointSettings::Iterations");
static_assert(offsetof(UPCGDuplicatePointSettings, Direction) == 176, "Offset mismatch for UPCGDuplicatePointSettings::Direction");
static_assert(offsetof(UPCGDuplicatePointSettings, bDirectionAppliedInRelativeSpace) == 200, "Offset mismatch for UPCGDuplicatePointSettings::bDirectionAppliedInRelativeSpace");
static_assert(offsetof(UPCGDuplicatePointSettings, bOutputSourcePoint) == 201, "Offset mismatch for UPCGDuplicatePointSettings::bOutputSourcePoint");
static_assert(offsetof(UPCGDuplicatePointSettings, PointTransform) == 208, "Offset mismatch for UPCGDuplicatePointSettings::PointTransform");

// /Script/PCG.PCGDynamicMeshData
// Kind: Class; super: PCGSpatialData
class UPCGDynamicMeshData
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* DynamicMesh; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Materials; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGDynamicMeshData, DynamicMesh) == 136, "Offset mismatch for UPCGDynamicMeshData::DynamicMesh");
static_assert(offsetof(UPCGDynamicMeshData, Materials) == 144, "Offset mismatch for UPCGDynamicMeshData::Materials");

// /Script/PCG.PCGDynamicPinsProvider
// Kind: Class; super: Interface
class UPCGDynamicPinsProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGEdge
// Kind: Class; super: Object
class UPCGEdge
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName InboundLabel; // 0x0028 (Size: 0x8, Type: NameProperty)
    void* InboundNode; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FName OutboundLabel; // 0x0038 (Size: 0x8, Type: NameProperty)
    void* OutboundNode; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* InputPin; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* OutputPin; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGEdge, InboundLabel) == 40, "Offset mismatch for UPCGEdge::InboundLabel");
static_assert(offsetof(UPCGEdge, InboundNode) == 48, "Offset mismatch for UPCGEdge::InboundNode");
static_assert(offsetof(UPCGEdge, OutboundLabel) == 56, "Offset mismatch for UPCGEdge::OutboundLabel");
static_assert(offsetof(UPCGEdge, OutboundNode) == 64, "Offset mismatch for UPCGEdge::OutboundNode");
static_assert(offsetof(UPCGEdge, InputPin) == 72, "Offset mismatch for UPCGEdge::InputPin");
static_assert(offsetof(UPCGEdge, OutputPin) == 80, "Offset mismatch for UPCGEdge::OutputPin");

// /Script/PCG.PCGEditPointsSettings
// Kind: Class; super: PCGSettings
class UPCGEditPointsSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGEditPointsSettings, Seed) == 80, "Offset mismatch for UPCGEditPointsSettings::Seed");
static_assert(offsetof(UPCGEditPointsSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGEditPointsSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGEditPointsSettings, bUseSeed) == 96, "Offset mismatch for UPCGEditPointsSettings::bUseSeed");
static_assert(offsetof(UPCGEditPointsSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGEditPointsSettings::CachedOverridableParams");
static_assert(offsetof(UPCGEditPointsSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGEditPointsSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGEditPointsSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGEditPointsSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGEditPointsSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGEditPointsSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGEditPointsSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGEditPointsSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGEditPointsSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGEditPointsSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGEditPointsSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGEditPointsSettings::DebugBufferSize");

// /Script/PCG.PCGElevationIsolinesSettings
// Kind: Class; super: PCGSettings
class UPCGElevationIsolinesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    double ElevationStart; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    double ElevationEnd; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    double ElevationIncrement; // 0x00B8 (Size: 0x8, Type: DoubleProperty)
    double Resolution; // 0x00C0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bAddTagOnOutputForSameElevation; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProjectSurfaceNormal; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputAsSpline; // 0x00CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLinearSpline; // 0x00CB (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGElevationIsolinesSettings, ElevationStart) == 168, "Offset mismatch for UPCGElevationIsolinesSettings::ElevationStart");
static_assert(offsetof(UPCGElevationIsolinesSettings, ElevationEnd) == 176, "Offset mismatch for UPCGElevationIsolinesSettings::ElevationEnd");
static_assert(offsetof(UPCGElevationIsolinesSettings, ElevationIncrement) == 184, "Offset mismatch for UPCGElevationIsolinesSettings::ElevationIncrement");
static_assert(offsetof(UPCGElevationIsolinesSettings, Resolution) == 192, "Offset mismatch for UPCGElevationIsolinesSettings::Resolution");
static_assert(offsetof(UPCGElevationIsolinesSettings, bAddTagOnOutputForSameElevation) == 200, "Offset mismatch for UPCGElevationIsolinesSettings::bAddTagOnOutputForSameElevation");
static_assert(offsetof(UPCGElevationIsolinesSettings, bProjectSurfaceNormal) == 201, "Offset mismatch for UPCGElevationIsolinesSettings::bProjectSurfaceNormal");
static_assert(offsetof(UPCGElevationIsolinesSettings, bOutputAsSpline) == 202, "Offset mismatch for UPCGElevationIsolinesSettings::bOutputAsSpline");
static_assert(offsetof(UPCGElevationIsolinesSettings, bLinearSpline) == 203, "Offset mismatch for UPCGElevationIsolinesSettings::bLinearSpline");

// /Script/PCG.PCGEngineSettings
// Kind: Class; super: DeveloperSettingsBackedByCVars
class UPCGEngineSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t VolumeScale[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bGenerateOnDrop; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayCullingStateWhenDebugging; // 0x0049 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGEngineSettings, VolumeScale) == 48, "Offset mismatch for UPCGEngineSettings::VolumeScale");
static_assert(offsetof(UPCGEngineSettings, bGenerateOnDrop) == 72, "Offset mismatch for UPCGEngineSettings::bGenerateOnDrop");
static_assert(offsetof(UPCGEngineSettings, bDisplayCullingStateWhenDebugging) == 73, "Offset mismatch for UPCGEngineSettings::bDisplayCullingStateWhenDebugging");

// /Script/PCG.PCGEngineSubsystem
// Kind: Class; super: EngineSubsystem
class UPCGEngineSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGExportSelectedAttributesSettings
// Kind: Class; super: PCGSettings
class UPCGExportSelectedAttributesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Format; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Layout; // 0x00A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00AA
    std::uint8_t Path[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    FString Filename; // 0x00C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bExportAllAttributes; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00D1
    TArray<void*> AttributeSelectors; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAddCustomDataVersion; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00E9
    std::int32_t CustomVersion; // 0x00EC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGExportSelectedAttributesSettings, Format) == 168, "Offset mismatch for UPCGExportSelectedAttributesSettings::Format");
static_assert(offsetof(UPCGExportSelectedAttributesSettings, Layout) == 169, "Offset mismatch for UPCGExportSelectedAttributesSettings::Layout");
static_assert(offsetof(UPCGExportSelectedAttributesSettings, Path) == 176, "Offset mismatch for UPCGExportSelectedAttributesSettings::Path");
static_assert(offsetof(UPCGExportSelectedAttributesSettings, Filename) == 192, "Offset mismatch for UPCGExportSelectedAttributesSettings::Filename");
static_assert(offsetof(UPCGExportSelectedAttributesSettings, bExportAllAttributes) == 208, "Offset mismatch for UPCGExportSelectedAttributesSettings::bExportAllAttributes");
static_assert(offsetof(UPCGExportSelectedAttributesSettings, AttributeSelectors) == 216, "Offset mismatch for UPCGExportSelectedAttributesSettings::AttributeSelectors");
static_assert(offsetof(UPCGExportSelectedAttributesSettings, bAddCustomDataVersion) == 232, "Offset mismatch for UPCGExportSelectedAttributesSettings::bAddCustomDataVersion");
static_assert(offsetof(UPCGExportSelectedAttributesSettings, CustomVersion) == 236, "Offset mismatch for UPCGExportSelectedAttributesSettings::CustomVersion");

// /Script/PCG.PCGExportToRayTracingDataInterface
// Kind: Class; super: PCGRawBufferDataInterface
class UPCGExportToRayTracingDataInterface
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    FName InputPointsPinLabel; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGExportToRayTracingDataInterface, InputPointsPinLabel) == 144, "Offset mismatch for UPCGExportToRayTracingDataInterface::InputPointsPinLabel");

// /Script/PCG.PCGExportToRayTracingDataProvider
// Kind: Class; super: PCGRawBufferDataProvider
class UPCGExportToRayTracingDataProvider
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* DataToUpload; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGExportToRayTracingDataProvider, DataToUpload) == 168, "Offset mismatch for UPCGExportToRayTracingDataProvider::DataToUpload");

// /Script/PCG.PCGExportableDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGExportableDataInterface
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t bRequiresExport; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGExportableDataInterface, bRequiresExport) == 128, "Offset mismatch for UPCGExportableDataInterface::bRequiresExport");

// /Script/PCG.PCGExportableDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGExportableDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGExportableDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGExportableDataProvider::ProducerKernel");
static_assert(offsetof(UPCGExportableDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGExportableDataProvider::ProducerSettings");

// /Script/PCG.PCGExternalDataSettings
// Kind: Class; super: PCGSettings
class UPCGExternalDataSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TMap<void*, void*> AttributeMapping; // 0x00A8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPCGExternalDataSettings, AttributeMapping) == 168, "Offset mismatch for UPCGExternalDataSettings::AttributeMapping");

// /Script/PCG.PCGExtractAttributeSettings
// Kind: Class; super: PCGSettings
class UPCGExtractAttributeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::int32_t Index; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00DC
    std::uint8_t OutputAttributeName[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bForceOutputAttributeToBeInElementsDomain; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGExtractAttributeSettings, InputSource) == 168, "Offset mismatch for UPCGExtractAttributeSettings::InputSource");
static_assert(offsetof(UPCGExtractAttributeSettings, Index) == 216, "Offset mismatch for UPCGExtractAttributeSettings::Index");
static_assert(offsetof(UPCGExtractAttributeSettings, OutputAttributeName) == 224, "Offset mismatch for UPCGExtractAttributeSettings::OutputAttributeName");
static_assert(offsetof(UPCGExtractAttributeSettings, bForceOutputAttributeToBeInElementsDomain) == 272, "Offset mismatch for UPCGExtractAttributeSettings::bForceOutputAttributeToBeInElementsDomain");

// /Script/PCG.PCGExtractMemberFromStructSettings
// Kind: Class; super: PCGSettings
class UPCGExtractMemberFromStructSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bExtractAll; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    std::uint8_t OutputAttributeName[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bDeleteSourceAttribute; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGExtractMemberFromStructSettings, InputSource) == 168, "Offset mismatch for UPCGExtractMemberFromStructSettings::InputSource");
static_assert(offsetof(UPCGExtractMemberFromStructSettings, bExtractAll) == 216, "Offset mismatch for UPCGExtractMemberFromStructSettings::bExtractAll");
static_assert(offsetof(UPCGExtractMemberFromStructSettings, OutputAttributeName) == 224, "Offset mismatch for UPCGExtractMemberFromStructSettings::OutputAttributeName");
static_assert(offsetof(UPCGExtractMemberFromStructSettings, bDeleteSourceAttribute) == 272, "Offset mismatch for UPCGExtractMemberFromStructSettings::bDeleteSourceAttribute");

// /Script/PCG.PCGFilterByAttributeSettings
// Kind: Class; super: PCGFilterDataBaseSettings
class UPCGFilterByAttributeSettings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t FilterMode; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    std::uint8_t Attribute[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t MetadataDomain[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t Operator; // 0x00BC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnoreProperties; // 0x00BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00BE
    std::uint8_t FilterByValueMode; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00C1
    std::uint8_t TargetAttribute[0x30]; // 0x00C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t FilterOperator; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x7]; // 0x00F9
    std::uint8_t Threshold[0x1A0]; // 0x0100 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t MinThreshold[0x1B0]; // 0x02A0 (Size: 0x1B0, Type: StructProperty)
    std::uint8_t MaxThreshold[0x1]; // 0x0450 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGFilterByAttributeSettings, FilterMode) == 176, "Offset mismatch for UPCGFilterByAttributeSettings::FilterMode");
static_assert(offsetof(UPCGFilterByAttributeSettings, Attribute) == 180, "Offset mismatch for UPCGFilterByAttributeSettings::Attribute");
static_assert(offsetof(UPCGFilterByAttributeSettings, MetadataDomain) == 184, "Offset mismatch for UPCGFilterByAttributeSettings::MetadataDomain");
static_assert(offsetof(UPCGFilterByAttributeSettings, Operator) == 188, "Offset mismatch for UPCGFilterByAttributeSettings::Operator");
static_assert(offsetof(UPCGFilterByAttributeSettings, bIgnoreProperties) == 189, "Offset mismatch for UPCGFilterByAttributeSettings::bIgnoreProperties");
static_assert(offsetof(UPCGFilterByAttributeSettings, FilterByValueMode) == 192, "Offset mismatch for UPCGFilterByAttributeSettings::FilterByValueMode");
static_assert(offsetof(UPCGFilterByAttributeSettings, TargetAttribute) == 200, "Offset mismatch for UPCGFilterByAttributeSettings::TargetAttribute");
static_assert(offsetof(UPCGFilterByAttributeSettings, FilterOperator) == 248, "Offset mismatch for UPCGFilterByAttributeSettings::FilterOperator");
static_assert(offsetof(UPCGFilterByAttributeSettings, Threshold) == 256, "Offset mismatch for UPCGFilterByAttributeSettings::Threshold");
static_assert(offsetof(UPCGFilterByAttributeSettings, MinThreshold) == 672, "Offset mismatch for UPCGFilterByAttributeSettings::MinThreshold");
static_assert(offsetof(UPCGFilterByAttributeSettings, MaxThreshold) == 1104, "Offset mismatch for UPCGFilterByAttributeSettings::MaxThreshold");

// /Script/PCG.PCGFilterByIndexSettings
// Kind: Class; super: PCGFilterDataBaseSettings
class UPCGFilterByIndexSettings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bInvertFilter; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    FString SelectedIndices; // 0x00B8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPCGFilterByIndexSettings, bInvertFilter) == 176, "Offset mismatch for UPCGFilterByIndexSettings::bInvertFilter");
static_assert(offsetof(UPCGFilterByIndexSettings, SelectedIndices) == 184, "Offset mismatch for UPCGFilterByIndexSettings::SelectedIndices");

// /Script/PCG.PCGFilterByTagSettings
// Kind: Class; super: PCGFilterDataBaseSettings
class UPCGFilterByTagSettings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Operation; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    std::uint8_t Operator; // 0x00B4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B5
    FString SelectedTags; // 0x00B8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bTokenizeOnWhiteSpace; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGFilterByTagSettings, Operation) == 176, "Offset mismatch for UPCGFilterByTagSettings::Operation");
static_assert(offsetof(UPCGFilterByTagSettings, Operator) == 180, "Offset mismatch for UPCGFilterByTagSettings::Operator");
static_assert(offsetof(UPCGFilterByTagSettings, SelectedTags) == 184, "Offset mismatch for UPCGFilterByTagSettings::SelectedTags");
static_assert(offsetof(UPCGFilterByTagSettings, bTokenizeOnWhiteSpace) == 200, "Offset mismatch for UPCGFilterByTagSettings::bTokenizeOnWhiteSpace");

// /Script/PCG.PCGFilterByTypeSettings
// Kind: Class; super: PCGFilterDataBaseSettings
class UPCGFilterByTypeSettings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t TargetType[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bShowOutsideFilter; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGFilterByTypeSettings, TargetType) == 176, "Offset mismatch for UPCGFilterByTypeSettings::TargetType");
static_assert(offsetof(UPCGFilterByTypeSettings, bShowOutsideFilter) == 200, "Offset mismatch for UPCGFilterByTypeSettings::bShowOutsideFilter");

// /Script/PCG.PCGFilterDataBaseSettings
// Kind: Class; super: PCGSettings
class UPCGFilterDataBaseSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bDisableEmptyOutputs; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGFilterDataBaseSettings, bDisableEmptyOutputs) == 168, "Offset mismatch for UPCGFilterDataBaseSettings::bDisableEmptyOutputs");

// /Script/PCG.PCGFilterElementsByIndexSettings
// Kind: Class; super: PCGSettings
class UPCGFilterElementsByIndexSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bSelectIndicesByInput; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t IndexSelectionAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    FString SelectedIndices; // 0x00E0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bOutputDiscardedElements; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInvertFilter; // 0x00F1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGFilterElementsByIndexSettings, bSelectIndicesByInput) == 168, "Offset mismatch for UPCGFilterElementsByIndexSettings::bSelectIndicesByInput");
static_assert(offsetof(UPCGFilterElementsByIndexSettings, IndexSelectionAttribute) == 176, "Offset mismatch for UPCGFilterElementsByIndexSettings::IndexSelectionAttribute");
static_assert(offsetof(UPCGFilterElementsByIndexSettings, SelectedIndices) == 224, "Offset mismatch for UPCGFilterElementsByIndexSettings::SelectedIndices");
static_assert(offsetof(UPCGFilterElementsByIndexSettings, bOutputDiscardedElements) == 240, "Offset mismatch for UPCGFilterElementsByIndexSettings::bOutputDiscardedElements");
static_assert(offsetof(UPCGFilterElementsByIndexSettings, bInvertFilter) == 241, "Offset mismatch for UPCGFilterElementsByIndexSettings::bInvertFilter");

// /Script/PCG.PCGFindClosestPointOnSplineSettings
// Kind: Class; super: PCGSettings
class UPCGFindClosestPointOnSplineSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputKeyAttributeName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaAttributeName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t LocationAttributeName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bCopyAttributesFromSpline; // 0x00B4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGFindClosestPointOnSplineSettings, InputKeyAttributeName) == 168, "Offset mismatch for UPCGFindClosestPointOnSplineSettings::InputKeyAttributeName");
static_assert(offsetof(UPCGFindClosestPointOnSplineSettings, AlphaAttributeName) == 172, "Offset mismatch for UPCGFindClosestPointOnSplineSettings::AlphaAttributeName");
static_assert(offsetof(UPCGFindClosestPointOnSplineSettings, LocationAttributeName) == 176, "Offset mismatch for UPCGFindClosestPointOnSplineSettings::LocationAttributeName");
static_assert(offsetof(UPCGFindClosestPointOnSplineSettings, bCopyAttributesFromSpline) == 180, "Offset mismatch for UPCGFindClosestPointOnSplineSettings::bCopyAttributesFromSpline");

// /Script/PCG.PCGFunctionPrototypes
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGFunctionPrototypes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGGatherSettings
// Kind: Class; super: PCGSettingsWithDynamicInputs
class UPCGGatherSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> DynamicInputPinProperties; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGGatherSettings, DynamicInputPinProperties) == 168, "Offset mismatch for UPCGGatherSettings::DynamicInputPinProperties");

// /Script/PCG.PCGGenSourceBase
// Kind: Class; super: Interface
class UPCGGenSourceBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGGenSourceComponent
// Kind: Class; super: ActorComponent
class UPCGGenSourceComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UPCGGenSourceComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPCGGenSourceComponent::PrimaryComponentTick");
static_assert(offsetof(UPCGGenSourceComponent, ComponentTags) == 104, "Offset mismatch for UPCGGenSourceComponent::ComponentTags");
static_assert(offsetof(UPCGGenSourceComponent, AssetUserData) == 120, "Offset mismatch for UPCGGenSourceComponent::AssetUserData");
static_assert(offsetof(UPCGGenSourceComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPCGGenSourceComponent::UCSSerializationIndex");
static_assert(offsetof(UPCGGenSourceComponent, bNetAddressable) == 152, "Offset mismatch for UPCGGenSourceComponent::bNetAddressable");
static_assert(offsetof(UPCGGenSourceComponent, bAutoActivate) == 154, "Offset mismatch for UPCGGenSourceComponent::bAutoActivate");
static_assert(offsetof(UPCGGenSourceComponent, bIsEditorOnly) == 155, "Offset mismatch for UPCGGenSourceComponent::bIsEditorOnly");
static_assert(offsetof(UPCGGenSourceComponent, CreationMethod) == 185, "Offset mismatch for UPCGGenSourceComponent::CreationMethod");
static_assert(offsetof(UPCGGenSourceComponent, OnComponentActivated) == 186, "Offset mismatch for UPCGGenSourceComponent::OnComponentActivated");
static_assert(offsetof(UPCGGenSourceComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPCGGenSourceComponent::OnComponentDeactivated");

// /Script/PCG.PCGGenSourceEditorCamera
// Kind: Class; super: Object
class UPCGGenSourceEditorCamera
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGGenSourcePlayer
// Kind: Class; super: Object
class UPCGGenSourcePlayer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGGenSourceWPStreamingSource
// Kind: Class; super: Object
class UPCGGenSourceWPStreamingSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGGenerateGraphAsync
// Kind: Class; super: BlueprintAsyncActionBase
class UPCGGenerateGraphAsync
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnCompleted; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* Graph; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Seed; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGGenerateGraphAsync, OnCompleted) == 48, "Offset mismatch for UPCGGenerateGraphAsync::OnCompleted");
static_assert(offsetof(UPCGGenerateGraphAsync, Graph) == 64, "Offset mismatch for UPCGGenerateGraphAsync::Graph");
static_assert(offsetof(UPCGGenerateGraphAsync, Seed) == 72, "Offset mismatch for UPCGGenerateGraphAsync::Seed");

// /Script/PCG.PCGGenerateGrassMapsSettings
// Kind: Class; super: PCGGenerateLandscapeTexturesSettings
class UPCGGenerateGrassMapsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> SelectedGrassTypes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideFromInput; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    std::uint8_t GrassTypesAttribute[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bExcludeSelectedGrassTypes; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputDataForEachSelectedGrassType; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateHeightMap; // 0x00F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputTextureArray; // 0x00F3 (Size: 0x1, Type: BoolProperty)
    std::int32_t NumLandscapeComponentsGeneratedPerFrame; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bTagDataWithLandscapeGrassTypeAssetNames; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipReadbackToCPU; // 0x00F9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGenerateGrassMapsSettings, SelectedGrassTypes) == 168, "Offset mismatch for UPCGGenerateGrassMapsSettings::SelectedGrassTypes");
static_assert(offsetof(UPCGGenerateGrassMapsSettings, bOverrideFromInput) == 184, "Offset mismatch for UPCGGenerateGrassMapsSettings::bOverrideFromInput");
static_assert(offsetof(UPCGGenerateGrassMapsSettings, GrassTypesAttribute) == 192, "Offset mismatch for UPCGGenerateGrassMapsSettings::GrassTypesAttribute");
static_assert(offsetof(UPCGGenerateGrassMapsSettings, bExcludeSelectedGrassTypes) == 240, "Offset mismatch for UPCGGenerateGrassMapsSettings::bExcludeSelectedGrassTypes");
static_assert(offsetof(UPCGGenerateGrassMapsSettings, bOutputDataForEachSelectedGrassType) == 241, "Offset mismatch for UPCGGenerateGrassMapsSettings::bOutputDataForEachSelectedGrassType");
static_assert(offsetof(UPCGGenerateGrassMapsSettings, bGenerateHeightMap) == 242, "Offset mismatch for UPCGGenerateGrassMapsSettings::bGenerateHeightMap");
static_assert(offsetof(UPCGGenerateGrassMapsSettings, bOutputTextureArray) == 243, "Offset mismatch for UPCGGenerateGrassMapsSettings::bOutputTextureArray");
static_assert(offsetof(UPCGGenerateGrassMapsSettings, NumLandscapeComponentsGeneratedPerFrame) == 244, "Offset mismatch for UPCGGenerateGrassMapsSettings::NumLandscapeComponentsGeneratedPerFrame");
static_assert(offsetof(UPCGGenerateGrassMapsSettings, bTagDataWithLandscapeGrassTypeAssetNames) == 248, "Offset mismatch for UPCGGenerateGrassMapsSettings::bTagDataWithLandscapeGrassTypeAssetNames");
static_assert(offsetof(UPCGGenerateGrassMapsSettings, bSkipReadbackToCPU) == 249, "Offset mismatch for UPCGGenerateGrassMapsSettings::bSkipReadbackToCPU");

// /Script/PCG.PCGGenerateLandscapeTexturesSettings
// Kind: Class; super: PCGSettings
class UPCGGenerateLandscapeTexturesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> SelectedGrassTypes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideFromInput; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    std::uint8_t GrassTypesAttribute[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bExcludeSelectedGrassTypes; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputDataForEachSelectedGrassType; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateHeightMap; // 0x00F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputTextureArray; // 0x00F3 (Size: 0x1, Type: BoolProperty)
    std::int32_t NumLandscapeComponentsGeneratedPerFrame; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bTagDataWithLandscapeGrassTypeAssetNames; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipReadbackToCPU; // 0x00F9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGenerateLandscapeTexturesSettings, SelectedGrassTypes) == 168, "Offset mismatch for UPCGGenerateLandscapeTexturesSettings::SelectedGrassTypes");
static_assert(offsetof(UPCGGenerateLandscapeTexturesSettings, bOverrideFromInput) == 184, "Offset mismatch for UPCGGenerateLandscapeTexturesSettings::bOverrideFromInput");
static_assert(offsetof(UPCGGenerateLandscapeTexturesSettings, GrassTypesAttribute) == 192, "Offset mismatch for UPCGGenerateLandscapeTexturesSettings::GrassTypesAttribute");
static_assert(offsetof(UPCGGenerateLandscapeTexturesSettings, bExcludeSelectedGrassTypes) == 240, "Offset mismatch for UPCGGenerateLandscapeTexturesSettings::bExcludeSelectedGrassTypes");
static_assert(offsetof(UPCGGenerateLandscapeTexturesSettings, bOutputDataForEachSelectedGrassType) == 241, "Offset mismatch for UPCGGenerateLandscapeTexturesSettings::bOutputDataForEachSelectedGrassType");
static_assert(offsetof(UPCGGenerateLandscapeTexturesSettings, bGenerateHeightMap) == 242, "Offset mismatch for UPCGGenerateLandscapeTexturesSettings::bGenerateHeightMap");
static_assert(offsetof(UPCGGenerateLandscapeTexturesSettings, bOutputTextureArray) == 243, "Offset mismatch for UPCGGenerateLandscapeTexturesSettings::bOutputTextureArray");
static_assert(offsetof(UPCGGenerateLandscapeTexturesSettings, NumLandscapeComponentsGeneratedPerFrame) == 244, "Offset mismatch for UPCGGenerateLandscapeTexturesSettings::NumLandscapeComponentsGeneratedPerFrame");
static_assert(offsetof(UPCGGenerateLandscapeTexturesSettings, bTagDataWithLandscapeGrassTypeAssetNames) == 248, "Offset mismatch for UPCGGenerateLandscapeTexturesSettings::bTagDataWithLandscapeGrassTypeAssetNames");
static_assert(offsetof(UPCGGenerateLandscapeTexturesSettings, bSkipReadbackToCPU) == 249, "Offset mismatch for UPCGGenerateLandscapeTexturesSettings::bSkipReadbackToCPU");

// /Script/PCG.PCGGenerateSeedSettings
// Kind: Class; super: PCGSettings
class UPCGGenerateSeedSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t GenerationSource; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    FString SourceString; // 0x00B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t SeedSource[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bResetSeedPerInput; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00F1
    std::uint8_t OutputTarget[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGGenerateSeedSettings, GenerationSource) == 168, "Offset mismatch for UPCGGenerateSeedSettings::GenerationSource");
static_assert(offsetof(UPCGGenerateSeedSettings, SourceString) == 176, "Offset mismatch for UPCGGenerateSeedSettings::SourceString");
static_assert(offsetof(UPCGGenerateSeedSettings, SeedSource) == 192, "Offset mismatch for UPCGGenerateSeedSettings::SeedSource");
static_assert(offsetof(UPCGGenerateSeedSettings, bResetSeedPerInput) == 240, "Offset mismatch for UPCGGenerateSeedSettings::bResetSeedPerInput");
static_assert(offsetof(UPCGGenerateSeedSettings, OutputTarget) == 248, "Offset mismatch for UPCGGenerateSeedSettings::OutputTarget");

// /Script/PCG.PCGGenericUserParameterGetSettings
// Kind: Class; super: PCGSettings
class UPCGGenericUserParameterGetSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString PropertyPath; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSanitizeOutputAttributeName; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B9
    std::uint8_t OutputAttributeName[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t Source; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bQuiet; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00C2
    std::uint8_t StructExtractorBehavior; // 0x00C4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00C5
    std::uint8_t ObjectExtractorBehavior; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00C9
    std::uint8_t ContainerExtractorBehavior; // 0x00CC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x00CD
    std::uint8_t bForceObjectAndStructExtraction; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGenericUserParameterGetSettings, PropertyPath) == 168, "Offset mismatch for UPCGGenericUserParameterGetSettings::PropertyPath");
static_assert(offsetof(UPCGGenericUserParameterGetSettings, bSanitizeOutputAttributeName) == 184, "Offset mismatch for UPCGGenericUserParameterGetSettings::bSanitizeOutputAttributeName");
static_assert(offsetof(UPCGGenericUserParameterGetSettings, OutputAttributeName) == 188, "Offset mismatch for UPCGGenericUserParameterGetSettings::OutputAttributeName");
static_assert(offsetof(UPCGGenericUserParameterGetSettings, Source) == 192, "Offset mismatch for UPCGGenericUserParameterGetSettings::Source");
static_assert(offsetof(UPCGGenericUserParameterGetSettings, bQuiet) == 193, "Offset mismatch for UPCGGenericUserParameterGetSettings::bQuiet");
static_assert(offsetof(UPCGGenericUserParameterGetSettings, StructExtractorBehavior) == 196, "Offset mismatch for UPCGGenericUserParameterGetSettings::StructExtractorBehavior");
static_assert(offsetof(UPCGGenericUserParameterGetSettings, ObjectExtractorBehavior) == 200, "Offset mismatch for UPCGGenericUserParameterGetSettings::ObjectExtractorBehavior");
static_assert(offsetof(UPCGGenericUserParameterGetSettings, ContainerExtractorBehavior) == 204, "Offset mismatch for UPCGGenericUserParameterGetSettings::ContainerExtractorBehavior");
static_assert(offsetof(UPCGGenericUserParameterGetSettings, bForceObjectAndStructExtraction) == 208, "Offset mismatch for UPCGGenericUserParameterGetSettings::bForceObjectAndStructExtraction");

// /Script/PCG.PCGGetActorDataLayersSettings
// Kind: Class; super: PCGSettings
class UPCGGetActorDataLayersSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ActorReferenceAttribute[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t DataLayerReferenceAttribute[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGGetActorDataLayersSettings, ActorReferenceAttribute) == 168, "Offset mismatch for UPCGGetActorDataLayersSettings::ActorReferenceAttribute");
static_assert(offsetof(UPCGGetActorDataLayersSettings, DataLayerReferenceAttribute) == 216, "Offset mismatch for UPCGGetActorDataLayersSettings::DataLayerReferenceAttribute");

// /Script/PCG.PCGGetActorPropertySettings
// Kind: Class; super: PCGSettings
class UPCGGetActorPropertySettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ActorSelector[0x68]; // 0x00A8 (Size: 0x68, Type: StructProperty)
    std::uint8_t bSelectComponent; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0111
    void* ComponentClass; // 0x0118 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bProcessAllComponents; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputComponentReference; // 0x0121 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0122
    std::uint8_t PropertyName[0x4]; // 0x0124 (Size: 0x4, Type: NameProperty)
    std::uint8_t OutputAttributeName[0x30]; // 0x0128 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSanitizeOutputAttributeName; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputActorReference; // 0x0159 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysRequeryActors; // 0x015A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x015B
    std::uint8_t StructExtractorBehavior; // 0x015C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x015D
    std::uint8_t ObjectExtractorBehavior; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0161
    std::uint8_t ContainerExtractorBehavior; // 0x0164 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0165
    std::uint8_t bForceObjectAndStructExtraction; // 0x0168 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetActorPropertySettings, ActorSelector) == 168, "Offset mismatch for UPCGGetActorPropertySettings::ActorSelector");
static_assert(offsetof(UPCGGetActorPropertySettings, bSelectComponent) == 272, "Offset mismatch for UPCGGetActorPropertySettings::bSelectComponent");
static_assert(offsetof(UPCGGetActorPropertySettings, ComponentClass) == 280, "Offset mismatch for UPCGGetActorPropertySettings::ComponentClass");
static_assert(offsetof(UPCGGetActorPropertySettings, bProcessAllComponents) == 288, "Offset mismatch for UPCGGetActorPropertySettings::bProcessAllComponents");
static_assert(offsetof(UPCGGetActorPropertySettings, bOutputComponentReference) == 289, "Offset mismatch for UPCGGetActorPropertySettings::bOutputComponentReference");
static_assert(offsetof(UPCGGetActorPropertySettings, PropertyName) == 292, "Offset mismatch for UPCGGetActorPropertySettings::PropertyName");
static_assert(offsetof(UPCGGetActorPropertySettings, OutputAttributeName) == 296, "Offset mismatch for UPCGGetActorPropertySettings::OutputAttributeName");
static_assert(offsetof(UPCGGetActorPropertySettings, bSanitizeOutputAttributeName) == 344, "Offset mismatch for UPCGGetActorPropertySettings::bSanitizeOutputAttributeName");
static_assert(offsetof(UPCGGetActorPropertySettings, bOutputActorReference) == 345, "Offset mismatch for UPCGGetActorPropertySettings::bOutputActorReference");
static_assert(offsetof(UPCGGetActorPropertySettings, bAlwaysRequeryActors) == 346, "Offset mismatch for UPCGGetActorPropertySettings::bAlwaysRequeryActors");
static_assert(offsetof(UPCGGetActorPropertySettings, StructExtractorBehavior) == 348, "Offset mismatch for UPCGGetActorPropertySettings::StructExtractorBehavior");
static_assert(offsetof(UPCGGetActorPropertySettings, ObjectExtractorBehavior) == 352, "Offset mismatch for UPCGGetActorPropertySettings::ObjectExtractorBehavior");
static_assert(offsetof(UPCGGetActorPropertySettings, ContainerExtractorBehavior) == 356, "Offset mismatch for UPCGGetActorPropertySettings::ContainerExtractorBehavior");
static_assert(offsetof(UPCGGetActorPropertySettings, bForceObjectAndStructExtraction) == 360, "Offset mismatch for UPCGGetActorPropertySettings::bForceObjectAndStructExtraction");

// /Script/PCG.PCGGetAssetListSettings
// Kind: Class; super: PCGSettings
class UPCGGetAssetListSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AssetListSource; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t Directory[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Collection[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bGetClassPath; // 0x00C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bQuiet; // 0x00C5 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetAssetListSettings, AssetListSource) == 168, "Offset mismatch for UPCGGetAssetListSettings::AssetListSource");
static_assert(offsetof(UPCGGetAssetListSettings, Directory) == 176, "Offset mismatch for UPCGGetAssetListSettings::Directory");
static_assert(offsetof(UPCGGetAssetListSettings, Collection) == 192, "Offset mismatch for UPCGGetAssetListSettings::Collection");
static_assert(offsetof(UPCGGetAssetListSettings, bGetClassPath) == 196, "Offset mismatch for UPCGGetAssetListSettings::bGetClassPath");
static_assert(offsetof(UPCGGetAssetListSettings, bQuiet) == 197, "Offset mismatch for UPCGGetAssetListSettings::bQuiet");

// /Script/PCG.PCGGetAttributesSettings
// Kind: Class; super: PCGSettings
class UPCGGetAttributesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bGetType; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetDefaultValue; // 0x00A9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetAttributesSettings, bGetType) == 168, "Offset mismatch for UPCGGetAttributesSettings::bGetType");
static_assert(offsetof(UPCGGetAttributesSettings, bGetDefaultValue) == 169, "Offset mismatch for UPCGGetAttributesSettings::bGetDefaultValue");

// /Script/PCG.PCGGetBoundsSettings
// Kind: Class; super: PCGSettings
class UPCGGetBoundsSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGGetBoundsSettings, Seed) == 80, "Offset mismatch for UPCGGetBoundsSettings::Seed");
static_assert(offsetof(UPCGGetBoundsSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGGetBoundsSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGGetBoundsSettings, bUseSeed) == 96, "Offset mismatch for UPCGGetBoundsSettings::bUseSeed");
static_assert(offsetof(UPCGGetBoundsSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGGetBoundsSettings::CachedOverridableParams");
static_assert(offsetof(UPCGGetBoundsSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGGetBoundsSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGGetBoundsSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGGetBoundsSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGGetBoundsSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGGetBoundsSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGGetBoundsSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGGetBoundsSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGGetBoundsSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGGetBoundsSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGGetBoundsSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGGetBoundsSettings::DebugBufferSize");

// /Script/PCG.PCGGetClassFromAttributeSettings
// Kind: Class; super: PCGSettings
class UPCGGetClassFromAttributeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputTarget[0x30]; // 0x00D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlsoOutputClassPath; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    std::uint8_t ClassPathOutputTarget[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSilenceClassNotFoundWarnings; // 0x0140 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetClassFromAttributeSettings, InputSource) == 168, "Offset mismatch for UPCGGetClassFromAttributeSettings::InputSource");
static_assert(offsetof(UPCGGetClassFromAttributeSettings, OutputTarget) == 216, "Offset mismatch for UPCGGetClassFromAttributeSettings::OutputTarget");
static_assert(offsetof(UPCGGetClassFromAttributeSettings, bAlsoOutputClassPath) == 264, "Offset mismatch for UPCGGetClassFromAttributeSettings::bAlsoOutputClassPath");
static_assert(offsetof(UPCGGetClassFromAttributeSettings, ClassPathOutputTarget) == 272, "Offset mismatch for UPCGGetClassFromAttributeSettings::ClassPathOutputTarget");
static_assert(offsetof(UPCGGetClassFromAttributeSettings, bSilenceClassNotFoundWarnings) == 320, "Offset mismatch for UPCGGetClassFromAttributeSettings::bSilenceClassNotFoundWarnings");

// /Script/PCG.PCGGetConsoleVariableSettings
// Kind: Class; super: PCGSettings
class UPCGGetConsoleVariableSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ConsoleVariableName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    FName OutputAttributeName; // 0x00AC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGGetConsoleVariableSettings, ConsoleVariableName) == 168, "Offset mismatch for UPCGGetConsoleVariableSettings::ConsoleVariableName");
static_assert(offsetof(UPCGGetConsoleVariableSettings, OutputAttributeName) == 172, "Offset mismatch for UPCGGetConsoleVariableSettings::OutputAttributeName");

// /Script/PCG.PCGGetEditorCamerasSettings
// Kind: Class; super: PCGSettings
class UPCGGetEditorCamerasSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGGetEditorCamerasSettings, Seed) == 80, "Offset mismatch for UPCGGetEditorCamerasSettings::Seed");
static_assert(offsetof(UPCGGetEditorCamerasSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGGetEditorCamerasSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGGetEditorCamerasSettings, bUseSeed) == 96, "Offset mismatch for UPCGGetEditorCamerasSettings::bUseSeed");
static_assert(offsetof(UPCGGetEditorCamerasSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGGetEditorCamerasSettings::CachedOverridableParams");
static_assert(offsetof(UPCGGetEditorCamerasSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGGetEditorCamerasSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGGetEditorCamerasSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGGetEditorCamerasSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGGetEditorCamerasSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGGetEditorCamerasSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGGetEditorCamerasSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGGetEditorCamerasSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGGetEditorCamerasSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGGetEditorCamerasSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGGetEditorCamerasSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGGetEditorCamerasSettings::DebugBufferSize");

// /Script/PCG.PCGGetEditorSelectionSettings
// Kind: Class; super: PCGSettings
class UPCGGetEditorSelectionSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bSilenceSanitizedAttributeNameWarnings; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetEditorSelectionSettings, bSilenceSanitizedAttributeNameWarnings) == 168, "Offset mismatch for UPCGGetEditorSelectionSettings::bSilenceSanitizedAttributeNameWarnings");

// /Script/PCG.PCGGetExecutionContextSettings
// Kind: Class; super: PCGSettings
class UPCGGetExecutionContextSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGGetExecutionContextSettings, Mode) == 168, "Offset mismatch for UPCGGetExecutionContextSettings::Mode");

// /Script/PCG.PCGGetLandscapeGrassTypesSettings
// Kind: Class; super: PCGSettings
class UPCGGetLandscapeGrassTypesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t GrassNameAttributeName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    FName GrassTypeAttributeName; // 0x00AC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGGetLandscapeGrassTypesSettings, GrassNameAttributeName) == 168, "Offset mismatch for UPCGGetLandscapeGrassTypesSettings::GrassNameAttributeName");
static_assert(offsetof(UPCGGetLandscapeGrassTypesSettings, GrassTypeAttributeName) == 172, "Offset mismatch for UPCGGetLandscapeGrassTypesSettings::GrassTypeAttributeName");

// /Script/PCG.PCGGetLandscapeSettings
// Kind: Class; super: PCGDataFromActorSettings
class UPCGGetLandscapeSettings
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    std::uint8_t SamplingProperties[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGGetLandscapeSettings, SamplingProperties) == 376, "Offset mismatch for UPCGGetLandscapeSettings::SamplingProperties");

// /Script/PCG.PCGGetLoopIndexSettings
// Kind: Class; super: PCGSettings
class UPCGGetLoopIndexSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bWarnIfCalledOutsideOfLoop; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetLoopIndexSettings, bWarnIfCalledOutsideOfLoop) == 168, "Offset mismatch for UPCGGetLoopIndexSettings::bWarnIfCalledOutsideOfLoop");

// /Script/PCG.PCGGetPCGComponentSettings
// Kind: Class; super: PCGDataFromActorSettings
class UPCGGetPCGComponentSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ActorSelector[0x68]; // 0x00A8 (Size: 0x68, Type: StructProperty)
    std::uint8_t ComponentSelector[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t Mode; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnorePCGGeneratedComponents; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlsoOutputSinglePointData; // 0x0152 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComponentsMustOverlapSelf; // 0x0153 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetDataOnAllGrids; // 0x0154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0155
    std::int32_t AllowedGrids; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMergeSinglePointData; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x015D
    TArray<void*> ExpectedPins; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropertyName[0x4]; // 0x0170 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAlwaysRequeryActors; // 0x0174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceSanitizedAttributeNameWarnings; // 0x0175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceReservedAttributeNameWarnings; // 0x0176 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayModeSettings; // 0x0177 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetPCGComponentSettings, ActorSelector) == 168, "Offset mismatch for UPCGGetPCGComponentSettings::ActorSelector");
static_assert(offsetof(UPCGGetPCGComponentSettings, ComponentSelector) == 272, "Offset mismatch for UPCGGetPCGComponentSettings::ComponentSelector");
static_assert(offsetof(UPCGGetPCGComponentSettings, Mode) == 336, "Offset mismatch for UPCGGetPCGComponentSettings::Mode");
static_assert(offsetof(UPCGGetPCGComponentSettings, bIgnorePCGGeneratedComponents) == 337, "Offset mismatch for UPCGGetPCGComponentSettings::bIgnorePCGGeneratedComponents");
static_assert(offsetof(UPCGGetPCGComponentSettings, bAlsoOutputSinglePointData) == 338, "Offset mismatch for UPCGGetPCGComponentSettings::bAlsoOutputSinglePointData");
static_assert(offsetof(UPCGGetPCGComponentSettings, bComponentsMustOverlapSelf) == 339, "Offset mismatch for UPCGGetPCGComponentSettings::bComponentsMustOverlapSelf");
static_assert(offsetof(UPCGGetPCGComponentSettings, bGetDataOnAllGrids) == 340, "Offset mismatch for UPCGGetPCGComponentSettings::bGetDataOnAllGrids");
static_assert(offsetof(UPCGGetPCGComponentSettings, AllowedGrids) == 344, "Offset mismatch for UPCGGetPCGComponentSettings::AllowedGrids");
static_assert(offsetof(UPCGGetPCGComponentSettings, bMergeSinglePointData) == 348, "Offset mismatch for UPCGGetPCGComponentSettings::bMergeSinglePointData");
static_assert(offsetof(UPCGGetPCGComponentSettings, ExpectedPins) == 352, "Offset mismatch for UPCGGetPCGComponentSettings::ExpectedPins");
static_assert(offsetof(UPCGGetPCGComponentSettings, PropertyName) == 368, "Offset mismatch for UPCGGetPCGComponentSettings::PropertyName");
static_assert(offsetof(UPCGGetPCGComponentSettings, bAlwaysRequeryActors) == 372, "Offset mismatch for UPCGGetPCGComponentSettings::bAlwaysRequeryActors");
static_assert(offsetof(UPCGGetPCGComponentSettings, bSilenceSanitizedAttributeNameWarnings) == 373, "Offset mismatch for UPCGGetPCGComponentSettings::bSilenceSanitizedAttributeNameWarnings");
static_assert(offsetof(UPCGGetPCGComponentSettings, bSilenceReservedAttributeNameWarnings) == 374, "Offset mismatch for UPCGGetPCGComponentSettings::bSilenceReservedAttributeNameWarnings");
static_assert(offsetof(UPCGGetPCGComponentSettings, bDisplayModeSettings) == 375, "Offset mismatch for UPCGGetPCGComponentSettings::bDisplayModeSettings");

// /Script/PCG.PCGGetPrimitiveSettings
// Kind: Class; super: PCGDataFromActorSettings
class UPCGGetPrimitiveSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ActorSelector[0x68]; // 0x00A8 (Size: 0x68, Type: StructProperty)
    std::uint8_t ComponentSelector[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t Mode; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnorePCGGeneratedComponents; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlsoOutputSinglePointData; // 0x0152 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComponentsMustOverlapSelf; // 0x0153 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetDataOnAllGrids; // 0x0154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0155
    std::int32_t AllowedGrids; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMergeSinglePointData; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x015D
    TArray<void*> ExpectedPins; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropertyName[0x4]; // 0x0170 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAlwaysRequeryActors; // 0x0174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceSanitizedAttributeNameWarnings; // 0x0175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceReservedAttributeNameWarnings; // 0x0176 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayModeSettings; // 0x0177 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetPrimitiveSettings, ActorSelector) == 168, "Offset mismatch for UPCGGetPrimitiveSettings::ActorSelector");
static_assert(offsetof(UPCGGetPrimitiveSettings, ComponentSelector) == 272, "Offset mismatch for UPCGGetPrimitiveSettings::ComponentSelector");
static_assert(offsetof(UPCGGetPrimitiveSettings, Mode) == 336, "Offset mismatch for UPCGGetPrimitiveSettings::Mode");
static_assert(offsetof(UPCGGetPrimitiveSettings, bIgnorePCGGeneratedComponents) == 337, "Offset mismatch for UPCGGetPrimitiveSettings::bIgnorePCGGeneratedComponents");
static_assert(offsetof(UPCGGetPrimitiveSettings, bAlsoOutputSinglePointData) == 338, "Offset mismatch for UPCGGetPrimitiveSettings::bAlsoOutputSinglePointData");
static_assert(offsetof(UPCGGetPrimitiveSettings, bComponentsMustOverlapSelf) == 339, "Offset mismatch for UPCGGetPrimitiveSettings::bComponentsMustOverlapSelf");
static_assert(offsetof(UPCGGetPrimitiveSettings, bGetDataOnAllGrids) == 340, "Offset mismatch for UPCGGetPrimitiveSettings::bGetDataOnAllGrids");
static_assert(offsetof(UPCGGetPrimitiveSettings, AllowedGrids) == 344, "Offset mismatch for UPCGGetPrimitiveSettings::AllowedGrids");
static_assert(offsetof(UPCGGetPrimitiveSettings, bMergeSinglePointData) == 348, "Offset mismatch for UPCGGetPrimitiveSettings::bMergeSinglePointData");
static_assert(offsetof(UPCGGetPrimitiveSettings, ExpectedPins) == 352, "Offset mismatch for UPCGGetPrimitiveSettings::ExpectedPins");
static_assert(offsetof(UPCGGetPrimitiveSettings, PropertyName) == 368, "Offset mismatch for UPCGGetPrimitiveSettings::PropertyName");
static_assert(offsetof(UPCGGetPrimitiveSettings, bAlwaysRequeryActors) == 372, "Offset mismatch for UPCGGetPrimitiveSettings::bAlwaysRequeryActors");
static_assert(offsetof(UPCGGetPrimitiveSettings, bSilenceSanitizedAttributeNameWarnings) == 373, "Offset mismatch for UPCGGetPrimitiveSettings::bSilenceSanitizedAttributeNameWarnings");
static_assert(offsetof(UPCGGetPrimitiveSettings, bSilenceReservedAttributeNameWarnings) == 374, "Offset mismatch for UPCGGetPrimitiveSettings::bSilenceReservedAttributeNameWarnings");
static_assert(offsetof(UPCGGetPrimitiveSettings, bDisplayModeSettings) == 375, "Offset mismatch for UPCGGetPrimitiveSettings::bDisplayModeSettings");

// /Script/PCG.PCGGetPropertyFromObjectPathSettings
// Kind: Class; super: PCGSettings
class UPCGGetPropertyFromObjectPathSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> ObjectPathsToExtract; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InputSource[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    FName PropertyName; // 0x00E8 (Size: 0x8, Type: NameProperty)
    std::uint8_t OutputAttributeName[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSanitizeOutputAttributeName; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSynchronousLoad; // 0x0121 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPersistAllData; // 0x0122 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceErrorOnEmptyObjectPath; // 0x0123 (Size: 0x1, Type: BoolProperty)
    std::uint8_t StructExtractorBehavior; // 0x0124 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0125
    std::uint8_t ObjectExtractorBehavior; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0129
    std::uint8_t ContainerExtractorBehavior; // 0x012C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x012D
    std::uint8_t bForceObjectAndStructExtraction; // 0x0130 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, ObjectPathsToExtract) == 168, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::ObjectPathsToExtract");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, InputSource) == 184, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::InputSource");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, PropertyName) == 232, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::PropertyName");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, OutputAttributeName) == 240, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::OutputAttributeName");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, bSanitizeOutputAttributeName) == 288, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::bSanitizeOutputAttributeName");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, bSynchronousLoad) == 289, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::bSynchronousLoad");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, bPersistAllData) == 290, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::bPersistAllData");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, bSilenceErrorOnEmptyObjectPath) == 291, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::bSilenceErrorOnEmptyObjectPath");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, StructExtractorBehavior) == 292, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::StructExtractorBehavior");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, ObjectExtractorBehavior) == 296, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::ObjectExtractorBehavior");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, ContainerExtractorBehavior) == 300, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::ContainerExtractorBehavior");
static_assert(offsetof(UPCGGetPropertyFromObjectPathSettings, bForceObjectAndStructExtraction) == 304, "Offset mismatch for UPCGGetPropertyFromObjectPathSettings::bForceObjectAndStructExtraction");

// /Script/PCG.PCGGetResourcePath
// Kind: Class; super: PCGSettings
class UPCGGetResourcePath
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGGetResourcePath, Seed) == 80, "Offset mismatch for UPCGGetResourcePath::Seed");
static_assert(offsetof(UPCGGetResourcePath, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGGetResourcePath::bExecutionDependencyRequired");
static_assert(offsetof(UPCGGetResourcePath, bUseSeed) == 96, "Offset mismatch for UPCGGetResourcePath::bUseSeed");
static_assert(offsetof(UPCGGetResourcePath, CachedOverridableParams) == 128, "Offset mismatch for UPCGGetResourcePath::CachedOverridableParams");
static_assert(offsetof(UPCGGetResourcePath, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGGetResourcePath::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGGetResourcePath, bExecuteOnGPU) == 153, "Offset mismatch for UPCGGetResourcePath::bExecuteOnGPU");
static_assert(offsetof(UPCGGetResourcePath, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGGetResourcePath::bDumpCookedHLSL");
static_assert(offsetof(UPCGGetResourcePath, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGGetResourcePath::bDumpDataDescriptions");
static_assert(offsetof(UPCGGetResourcePath, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGGetResourcePath::bPrintShaderDebugValues");
static_assert(offsetof(UPCGGetResourcePath, DebugBufferSize) == 160, "Offset mismatch for UPCGGetResourcePath::DebugBufferSize");

// /Script/PCG.PCGGetSegmentSettings
// Kind: Class; super: PCGSettings
class UPCGGetSegmentSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bUseInputSegmentData; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseInputHoleData; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputSplineData; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00AB
    std::uint8_t SegmentIndexAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    std::int32_t SegmentIndex; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00E4
    std::uint8_t HoleIndexAttribute[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::int32_t HoleIndex; // 0x0118 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGGetSegmentSettings, bUseInputSegmentData) == 168, "Offset mismatch for UPCGGetSegmentSettings::bUseInputSegmentData");
static_assert(offsetof(UPCGGetSegmentSettings, bUseInputHoleData) == 169, "Offset mismatch for UPCGGetSegmentSettings::bUseInputHoleData");
static_assert(offsetof(UPCGGetSegmentSettings, bOutputSplineData) == 170, "Offset mismatch for UPCGGetSegmentSettings::bOutputSplineData");
static_assert(offsetof(UPCGGetSegmentSettings, SegmentIndexAttribute) == 176, "Offset mismatch for UPCGGetSegmentSettings::SegmentIndexAttribute");
static_assert(offsetof(UPCGGetSegmentSettings, SegmentIndex) == 224, "Offset mismatch for UPCGGetSegmentSettings::SegmentIndex");
static_assert(offsetof(UPCGGetSegmentSettings, HoleIndexAttribute) == 232, "Offset mismatch for UPCGGetSegmentSettings::HoleIndexAttribute");
static_assert(offsetof(UPCGGetSegmentSettings, HoleIndex) == 280, "Offset mismatch for UPCGGetSegmentSettings::HoleIndex");

// /Script/PCG.PCGGetSplineControlPointsSettings
// Kind: Class; super: PCGSettings
class UPCGGetSplineControlPointsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ArriveTangentAttributeName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeaveTangentAttributeName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    FName InterpTypeAttributeName; // 0x00B0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGGetSplineControlPointsSettings, ArriveTangentAttributeName) == 168, "Offset mismatch for UPCGGetSplineControlPointsSettings::ArriveTangentAttributeName");
static_assert(offsetof(UPCGGetSplineControlPointsSettings, LeaveTangentAttributeName) == 172, "Offset mismatch for UPCGGetSplineControlPointsSettings::LeaveTangentAttributeName");
static_assert(offsetof(UPCGGetSplineControlPointsSettings, InterpTypeAttributeName) == 176, "Offset mismatch for UPCGGetSplineControlPointsSettings::InterpTypeAttributeName");

// /Script/PCG.PCGGetSplineSettings
// Kind: Class; super: PCGDataFromActorSettings
class UPCGGetSplineSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ActorSelector[0x68]; // 0x00A8 (Size: 0x68, Type: StructProperty)
    std::uint8_t ComponentSelector[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t Mode; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnorePCGGeneratedComponents; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlsoOutputSinglePointData; // 0x0152 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComponentsMustOverlapSelf; // 0x0153 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetDataOnAllGrids; // 0x0154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0155
    std::int32_t AllowedGrids; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMergeSinglePointData; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x015D
    TArray<void*> ExpectedPins; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropertyName[0x4]; // 0x0170 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAlwaysRequeryActors; // 0x0174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceSanitizedAttributeNameWarnings; // 0x0175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceReservedAttributeNameWarnings; // 0x0176 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayModeSettings; // 0x0177 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetSplineSettings, ActorSelector) == 168, "Offset mismatch for UPCGGetSplineSettings::ActorSelector");
static_assert(offsetof(UPCGGetSplineSettings, ComponentSelector) == 272, "Offset mismatch for UPCGGetSplineSettings::ComponentSelector");
static_assert(offsetof(UPCGGetSplineSettings, Mode) == 336, "Offset mismatch for UPCGGetSplineSettings::Mode");
static_assert(offsetof(UPCGGetSplineSettings, bIgnorePCGGeneratedComponents) == 337, "Offset mismatch for UPCGGetSplineSettings::bIgnorePCGGeneratedComponents");
static_assert(offsetof(UPCGGetSplineSettings, bAlsoOutputSinglePointData) == 338, "Offset mismatch for UPCGGetSplineSettings::bAlsoOutputSinglePointData");
static_assert(offsetof(UPCGGetSplineSettings, bComponentsMustOverlapSelf) == 339, "Offset mismatch for UPCGGetSplineSettings::bComponentsMustOverlapSelf");
static_assert(offsetof(UPCGGetSplineSettings, bGetDataOnAllGrids) == 340, "Offset mismatch for UPCGGetSplineSettings::bGetDataOnAllGrids");
static_assert(offsetof(UPCGGetSplineSettings, AllowedGrids) == 344, "Offset mismatch for UPCGGetSplineSettings::AllowedGrids");
static_assert(offsetof(UPCGGetSplineSettings, bMergeSinglePointData) == 348, "Offset mismatch for UPCGGetSplineSettings::bMergeSinglePointData");
static_assert(offsetof(UPCGGetSplineSettings, ExpectedPins) == 352, "Offset mismatch for UPCGGetSplineSettings::ExpectedPins");
static_assert(offsetof(UPCGGetSplineSettings, PropertyName) == 368, "Offset mismatch for UPCGGetSplineSettings::PropertyName");
static_assert(offsetof(UPCGGetSplineSettings, bAlwaysRequeryActors) == 372, "Offset mismatch for UPCGGetSplineSettings::bAlwaysRequeryActors");
static_assert(offsetof(UPCGGetSplineSettings, bSilenceSanitizedAttributeNameWarnings) == 373, "Offset mismatch for UPCGGetSplineSettings::bSilenceSanitizedAttributeNameWarnings");
static_assert(offsetof(UPCGGetSplineSettings, bSilenceReservedAttributeNameWarnings) == 374, "Offset mismatch for UPCGGetSplineSettings::bSilenceReservedAttributeNameWarnings");
static_assert(offsetof(UPCGGetSplineSettings, bDisplayModeSettings) == 375, "Offset mismatch for UPCGGetSplineSettings::bDisplayModeSettings");

// /Script/PCG.PCGGetStaticMeshResourceDataSettings
// Kind: Class; super: PCGSettings
class UPCGGetStaticMeshResourceDataSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> StaticMeshes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideFromInput; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    std::uint8_t MeshAttribute[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGGetStaticMeshResourceDataSettings, StaticMeshes) == 168, "Offset mismatch for UPCGGetStaticMeshResourceDataSettings::StaticMeshes");
static_assert(offsetof(UPCGGetStaticMeshResourceDataSettings, bOverrideFromInput) == 184, "Offset mismatch for UPCGGetStaticMeshResourceDataSettings::bOverrideFromInput");
static_assert(offsetof(UPCGGetStaticMeshResourceDataSettings, MeshAttribute) == 192, "Offset mismatch for UPCGGetStaticMeshResourceDataSettings::MeshAttribute");

// /Script/PCG.PCGGetSubgraphDepthSettings
// Kind: Class; super: PCGSettings
class UPCGGetSubgraphDepthSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t DistanceRelativeToUpstreamGraph; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::uint8_t bQuietInvalidDepthQueries; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetSubgraphDepthSettings, Mode) == 168, "Offset mismatch for UPCGGetSubgraphDepthSettings::Mode");
static_assert(offsetof(UPCGGetSubgraphDepthSettings, DistanceRelativeToUpstreamGraph) == 172, "Offset mismatch for UPCGGetSubgraphDepthSettings::DistanceRelativeToUpstreamGraph");
static_assert(offsetof(UPCGGetSubgraphDepthSettings, bQuietInvalidDepthQueries) == 176, "Offset mismatch for UPCGGetSubgraphDepthSettings::bQuietInvalidDepthQueries");

// /Script/PCG.PCGGetTagsSettings
// Kind: Class; super: PCGSettings
class UPCGGetTagsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bExtractTagValues; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExtractFullTagStrings; // 0x00A9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetTagsSettings, bExtractTagValues) == 168, "Offset mismatch for UPCGGetTagsSettings::bExtractTagValues");
static_assert(offsetof(UPCGGetTagsSettings, bExtractFullTagStrings) == 169, "Offset mismatch for UPCGGetTagsSettings::bExtractFullTagStrings");

// /Script/PCG.PCGGetTexture2DArrayDataSettings
// Kind: Class; super: PCGSettings
class UPCGGetTexture2DArrayDataSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Texture[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Filter; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSynchronousLoad; // 0x00C9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetTexture2DArrayDataSettings, Texture) == 168, "Offset mismatch for UPCGGetTexture2DArrayDataSettings::Texture");
static_assert(offsetof(UPCGGetTexture2DArrayDataSettings, Filter) == 200, "Offset mismatch for UPCGGetTexture2DArrayDataSettings::Filter");
static_assert(offsetof(UPCGGetTexture2DArrayDataSettings, bSynchronousLoad) == 201, "Offset mismatch for UPCGGetTexture2DArrayDataSettings::bSynchronousLoad");

// /Script/PCG.PCGGetTextureInfoSettings
// Kind: Class; super: PCGSettings
class UPCGGetTextureInfoSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bOutputWidth; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t WidthAttributeName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputHeight; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B1
    std::uint8_t HeightAttributeName[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputNumMips; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00B9
    std::uint8_t NumMipsAttributeName[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputArraySize; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00C1
    std::uint8_t ArraySizeAttributeName[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputFormat; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x00C9
    std::uint8_t FormatAttributeName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputFormatIndex; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x00D1
    std::uint8_t FormatIndexAttributeName[0x4]; // 0x00D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputComputeFormat; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x00D9
    std::uint8_t ComputeFormatAttributeName[0x4]; // 0x00DC (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputComputeFormatIndex; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x00E1
    FName ComputeFormatIndexAttributeName; // 0x00E4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGGetTextureInfoSettings, bOutputWidth) == 168, "Offset mismatch for UPCGGetTextureInfoSettings::bOutputWidth");
static_assert(offsetof(UPCGGetTextureInfoSettings, WidthAttributeName) == 172, "Offset mismatch for UPCGGetTextureInfoSettings::WidthAttributeName");
static_assert(offsetof(UPCGGetTextureInfoSettings, bOutputHeight) == 176, "Offset mismatch for UPCGGetTextureInfoSettings::bOutputHeight");
static_assert(offsetof(UPCGGetTextureInfoSettings, HeightAttributeName) == 180, "Offset mismatch for UPCGGetTextureInfoSettings::HeightAttributeName");
static_assert(offsetof(UPCGGetTextureInfoSettings, bOutputNumMips) == 184, "Offset mismatch for UPCGGetTextureInfoSettings::bOutputNumMips");
static_assert(offsetof(UPCGGetTextureInfoSettings, NumMipsAttributeName) == 188, "Offset mismatch for UPCGGetTextureInfoSettings::NumMipsAttributeName");
static_assert(offsetof(UPCGGetTextureInfoSettings, bOutputArraySize) == 192, "Offset mismatch for UPCGGetTextureInfoSettings::bOutputArraySize");
static_assert(offsetof(UPCGGetTextureInfoSettings, ArraySizeAttributeName) == 196, "Offset mismatch for UPCGGetTextureInfoSettings::ArraySizeAttributeName");
static_assert(offsetof(UPCGGetTextureInfoSettings, bOutputFormat) == 200, "Offset mismatch for UPCGGetTextureInfoSettings::bOutputFormat");
static_assert(offsetof(UPCGGetTextureInfoSettings, FormatAttributeName) == 204, "Offset mismatch for UPCGGetTextureInfoSettings::FormatAttributeName");
static_assert(offsetof(UPCGGetTextureInfoSettings, bOutputFormatIndex) == 208, "Offset mismatch for UPCGGetTextureInfoSettings::bOutputFormatIndex");
static_assert(offsetof(UPCGGetTextureInfoSettings, FormatIndexAttributeName) == 212, "Offset mismatch for UPCGGetTextureInfoSettings::FormatIndexAttributeName");
static_assert(offsetof(UPCGGetTextureInfoSettings, bOutputComputeFormat) == 216, "Offset mismatch for UPCGGetTextureInfoSettings::bOutputComputeFormat");
static_assert(offsetof(UPCGGetTextureInfoSettings, ComputeFormatAttributeName) == 220, "Offset mismatch for UPCGGetTextureInfoSettings::ComputeFormatAttributeName");
static_assert(offsetof(UPCGGetTextureInfoSettings, bOutputComputeFormatIndex) == 224, "Offset mismatch for UPCGGetTextureInfoSettings::bOutputComputeFormatIndex");
static_assert(offsetof(UPCGGetTextureInfoSettings, ComputeFormatIndexAttributeName) == 228, "Offset mismatch for UPCGGetTextureInfoSettings::ComputeFormatIndexAttributeName");

// /Script/PCG.PCGGetVirtualTextureSettings
// Kind: Class; super: PCGDataFromActorSettings
class UPCGGetVirtualTextureSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ActorSelector[0x68]; // 0x00A8 (Size: 0x68, Type: StructProperty)
    std::uint8_t ComponentSelector[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t Mode; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnorePCGGeneratedComponents; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlsoOutputSinglePointData; // 0x0152 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComponentsMustOverlapSelf; // 0x0153 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetDataOnAllGrids; // 0x0154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0155
    std::int32_t AllowedGrids; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMergeSinglePointData; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x015D
    TArray<void*> ExpectedPins; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropertyName[0x4]; // 0x0170 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAlwaysRequeryActors; // 0x0174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceSanitizedAttributeNameWarnings; // 0x0175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceReservedAttributeNameWarnings; // 0x0176 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayModeSettings; // 0x0177 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetVirtualTextureSettings, ActorSelector) == 168, "Offset mismatch for UPCGGetVirtualTextureSettings::ActorSelector");
static_assert(offsetof(UPCGGetVirtualTextureSettings, ComponentSelector) == 272, "Offset mismatch for UPCGGetVirtualTextureSettings::ComponentSelector");
static_assert(offsetof(UPCGGetVirtualTextureSettings, Mode) == 336, "Offset mismatch for UPCGGetVirtualTextureSettings::Mode");
static_assert(offsetof(UPCGGetVirtualTextureSettings, bIgnorePCGGeneratedComponents) == 337, "Offset mismatch for UPCGGetVirtualTextureSettings::bIgnorePCGGeneratedComponents");
static_assert(offsetof(UPCGGetVirtualTextureSettings, bAlsoOutputSinglePointData) == 338, "Offset mismatch for UPCGGetVirtualTextureSettings::bAlsoOutputSinglePointData");
static_assert(offsetof(UPCGGetVirtualTextureSettings, bComponentsMustOverlapSelf) == 339, "Offset mismatch for UPCGGetVirtualTextureSettings::bComponentsMustOverlapSelf");
static_assert(offsetof(UPCGGetVirtualTextureSettings, bGetDataOnAllGrids) == 340, "Offset mismatch for UPCGGetVirtualTextureSettings::bGetDataOnAllGrids");
static_assert(offsetof(UPCGGetVirtualTextureSettings, AllowedGrids) == 344, "Offset mismatch for UPCGGetVirtualTextureSettings::AllowedGrids");
static_assert(offsetof(UPCGGetVirtualTextureSettings, bMergeSinglePointData) == 348, "Offset mismatch for UPCGGetVirtualTextureSettings::bMergeSinglePointData");
static_assert(offsetof(UPCGGetVirtualTextureSettings, ExpectedPins) == 352, "Offset mismatch for UPCGGetVirtualTextureSettings::ExpectedPins");
static_assert(offsetof(UPCGGetVirtualTextureSettings, PropertyName) == 368, "Offset mismatch for UPCGGetVirtualTextureSettings::PropertyName");
static_assert(offsetof(UPCGGetVirtualTextureSettings, bAlwaysRequeryActors) == 372, "Offset mismatch for UPCGGetVirtualTextureSettings::bAlwaysRequeryActors");
static_assert(offsetof(UPCGGetVirtualTextureSettings, bSilenceSanitizedAttributeNameWarnings) == 373, "Offset mismatch for UPCGGetVirtualTextureSettings::bSilenceSanitizedAttributeNameWarnings");
static_assert(offsetof(UPCGGetVirtualTextureSettings, bSilenceReservedAttributeNameWarnings) == 374, "Offset mismatch for UPCGGetVirtualTextureSettings::bSilenceReservedAttributeNameWarnings");
static_assert(offsetof(UPCGGetVirtualTextureSettings, bDisplayModeSettings) == 375, "Offset mismatch for UPCGGetVirtualTextureSettings::bDisplayModeSettings");

// /Script/PCG.PCGGetVolumeSettings
// Kind: Class; super: PCGDataFromActorSettings
class UPCGGetVolumeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ActorSelector[0x68]; // 0x00A8 (Size: 0x68, Type: StructProperty)
    std::uint8_t ComponentSelector[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t Mode; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnorePCGGeneratedComponents; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlsoOutputSinglePointData; // 0x0152 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComponentsMustOverlapSelf; // 0x0153 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetDataOnAllGrids; // 0x0154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0155
    std::int32_t AllowedGrids; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMergeSinglePointData; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x015D
    TArray<void*> ExpectedPins; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PropertyName[0x4]; // 0x0170 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAlwaysRequeryActors; // 0x0174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceSanitizedAttributeNameWarnings; // 0x0175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceReservedAttributeNameWarnings; // 0x0176 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayModeSettings; // 0x0177 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetVolumeSettings, ActorSelector) == 168, "Offset mismatch for UPCGGetVolumeSettings::ActorSelector");
static_assert(offsetof(UPCGGetVolumeSettings, ComponentSelector) == 272, "Offset mismatch for UPCGGetVolumeSettings::ComponentSelector");
static_assert(offsetof(UPCGGetVolumeSettings, Mode) == 336, "Offset mismatch for UPCGGetVolumeSettings::Mode");
static_assert(offsetof(UPCGGetVolumeSettings, bIgnorePCGGeneratedComponents) == 337, "Offset mismatch for UPCGGetVolumeSettings::bIgnorePCGGeneratedComponents");
static_assert(offsetof(UPCGGetVolumeSettings, bAlsoOutputSinglePointData) == 338, "Offset mismatch for UPCGGetVolumeSettings::bAlsoOutputSinglePointData");
static_assert(offsetof(UPCGGetVolumeSettings, bComponentsMustOverlapSelf) == 339, "Offset mismatch for UPCGGetVolumeSettings::bComponentsMustOverlapSelf");
static_assert(offsetof(UPCGGetVolumeSettings, bGetDataOnAllGrids) == 340, "Offset mismatch for UPCGGetVolumeSettings::bGetDataOnAllGrids");
static_assert(offsetof(UPCGGetVolumeSettings, AllowedGrids) == 344, "Offset mismatch for UPCGGetVolumeSettings::AllowedGrids");
static_assert(offsetof(UPCGGetVolumeSettings, bMergeSinglePointData) == 348, "Offset mismatch for UPCGGetVolumeSettings::bMergeSinglePointData");
static_assert(offsetof(UPCGGetVolumeSettings, ExpectedPins) == 352, "Offset mismatch for UPCGGetVolumeSettings::ExpectedPins");
static_assert(offsetof(UPCGGetVolumeSettings, PropertyName) == 368, "Offset mismatch for UPCGGetVolumeSettings::PropertyName");
static_assert(offsetof(UPCGGetVolumeSettings, bAlwaysRequeryActors) == 372, "Offset mismatch for UPCGGetVolumeSettings::bAlwaysRequeryActors");
static_assert(offsetof(UPCGGetVolumeSettings, bSilenceSanitizedAttributeNameWarnings) == 373, "Offset mismatch for UPCGGetVolumeSettings::bSilenceSanitizedAttributeNameWarnings");
static_assert(offsetof(UPCGGetVolumeSettings, bSilenceReservedAttributeNameWarnings) == 374, "Offset mismatch for UPCGGetVolumeSettings::bSilenceReservedAttributeNameWarnings");
static_assert(offsetof(UPCGGetVolumeSettings, bDisplayModeSettings) == 375, "Offset mismatch for UPCGGetVolumeSettings::bDisplayModeSettings");

// /Script/PCG.PCGGraph
// Kind: Class; super: PCGGraphInterface
class UPCGGraph
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bLandscapeUsesMetadata; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> Nodes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    void* InputNode; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* OutputNode; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UserParameters[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    TArray<void*> EmbeddedSubgraphs; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseHierarchicalGeneration; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0071
    std::uint8_t HiGenGridSize; // 0x0074 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0075
    double HiGenGridSizeMultiplier; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUse2DGrid; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDefaultConstructedInputs; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x9E]; // 0x0082
    std::uint8_t ShouldCook[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    void* CookedCompilationData; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GenerationRadii[0x248]; // 0x0140 (Size: 0x248, Type: StructProperty)
    std::uint8_t bUseActorComponentlessGeneration; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0389
    TArray<void*> ConsoleVariablesTriggeringRefresh; // 0x0390 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRefreshOnRenderStateRefresh; // 0x03A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRefreshOnQualitySettingsChanged; // 0x03A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x26]; // 0x03A2
    std::uint8_t bIsEditorOnly; // 0x03C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x03C9
    std::uint32_t HiGenExponential; // 0x03CC (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UPCGGraph, bLandscapeUsesMetadata) == 40, "Offset mismatch for UPCGGraph::bLandscapeUsesMetadata");
static_assert(offsetof(UPCGGraph, Nodes) == 48, "Offset mismatch for UPCGGraph::Nodes");
static_assert(offsetof(UPCGGraph, InputNode) == 64, "Offset mismatch for UPCGGraph::InputNode");
static_assert(offsetof(UPCGGraph, OutputNode) == 72, "Offset mismatch for UPCGGraph::OutputNode");
static_assert(offsetof(UPCGGraph, UserParameters) == 80, "Offset mismatch for UPCGGraph::UserParameters");
static_assert(offsetof(UPCGGraph, EmbeddedSubgraphs) == 96, "Offset mismatch for UPCGGraph::EmbeddedSubgraphs");
static_assert(offsetof(UPCGGraph, bUseHierarchicalGeneration) == 112, "Offset mismatch for UPCGGraph::bUseHierarchicalGeneration");
static_assert(offsetof(UPCGGraph, HiGenGridSize) == 116, "Offset mismatch for UPCGGraph::HiGenGridSize");
static_assert(offsetof(UPCGGraph, HiGenGridSizeMultiplier) == 120, "Offset mismatch for UPCGGraph::HiGenGridSizeMultiplier");
static_assert(offsetof(UPCGGraph, bUse2DGrid) == 128, "Offset mismatch for UPCGGraph::bUse2DGrid");
static_assert(offsetof(UPCGGraph, bHasDefaultConstructedInputs) == 129, "Offset mismatch for UPCGGraph::bHasDefaultConstructedInputs");
static_assert(offsetof(UPCGGraph, ShouldCook) == 288, "Offset mismatch for UPCGGraph::ShouldCook");
static_assert(offsetof(UPCGGraph, CookedCompilationData) == 312, "Offset mismatch for UPCGGraph::CookedCompilationData");
static_assert(offsetof(UPCGGraph, GenerationRadii) == 320, "Offset mismatch for UPCGGraph::GenerationRadii");
static_assert(offsetof(UPCGGraph, bUseActorComponentlessGeneration) == 904, "Offset mismatch for UPCGGraph::bUseActorComponentlessGeneration");
static_assert(offsetof(UPCGGraph, ConsoleVariablesTriggeringRefresh) == 912, "Offset mismatch for UPCGGraph::ConsoleVariablesTriggeringRefresh");
static_assert(offsetof(UPCGGraph, bAutoRefreshOnRenderStateRefresh) == 928, "Offset mismatch for UPCGGraph::bAutoRefreshOnRenderStateRefresh");
static_assert(offsetof(UPCGGraph, bAutoRefreshOnQualitySettingsChanged) == 929, "Offset mismatch for UPCGGraph::bAutoRefreshOnQualitySettingsChanged");
static_assert(offsetof(UPCGGraph, bIsEditorOnly) == 968, "Offset mismatch for UPCGGraph::bIsEditorOnly");
static_assert(offsetof(UPCGGraph, HiGenExponential) == 972, "Offset mismatch for UPCGGraph::HiGenExponential");

// /Script/PCG.PCGGraphAuthoringTestHelperSettings
// Kind: Class; super: PCGSettings
class UPCGGraphAuthoringTestHelperSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGGraphAuthoringTestHelperSettings, Seed) == 80, "Offset mismatch for UPCGGraphAuthoringTestHelperSettings::Seed");
static_assert(offsetof(UPCGGraphAuthoringTestHelperSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGGraphAuthoringTestHelperSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGGraphAuthoringTestHelperSettings, bUseSeed) == 96, "Offset mismatch for UPCGGraphAuthoringTestHelperSettings::bUseSeed");
static_assert(offsetof(UPCGGraphAuthoringTestHelperSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGGraphAuthoringTestHelperSettings::CachedOverridableParams");
static_assert(offsetof(UPCGGraphAuthoringTestHelperSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGGraphAuthoringTestHelperSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGGraphAuthoringTestHelperSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGGraphAuthoringTestHelperSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGGraphAuthoringTestHelperSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGGraphAuthoringTestHelperSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGGraphAuthoringTestHelperSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGGraphAuthoringTestHelperSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGGraphAuthoringTestHelperSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGGraphAuthoringTestHelperSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGGraphAuthoringTestHelperSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGGraphAuthoringTestHelperSettings::DebugBufferSize");

// /Script/PCG.PCGGraphCompilationData
// Kind: Class; super: Object
class UPCGGraphCompilationData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> Tasks; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> StackContexts; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ComputeGraphs; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPCGGraphCompilationData, Tasks) == 40, "Offset mismatch for UPCGGraphCompilationData::Tasks");
static_assert(offsetof(UPCGGraphCompilationData, StackContexts) == 56, "Offset mismatch for UPCGGraphCompilationData::StackContexts");
static_assert(offsetof(UPCGGraphCompilationData, ComputeGraphs) == 72, "Offset mismatch for UPCGGraphCompilationData::ComputeGraphs");

// /Script/PCG.PCGGraphExecutionSource
// Kind: Class; super: Interface
class UPCGGraphExecutionSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGGraphInputOutputSettings
// Kind: Class; super: PCGSettings
class UPCGGraphInputOutputSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> Pins; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PinLabels[0x10]; // 0x00B8 (Size: 0x10, Type: SetProperty)
    TArray<void*> CustomPins; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasAddedDefaultPin; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGraphInputOutputSettings, Pins) == 168, "Offset mismatch for UPCGGraphInputOutputSettings::Pins");
static_assert(offsetof(UPCGGraphInputOutputSettings, PinLabels) == 184, "Offset mismatch for UPCGGraphInputOutputSettings::PinLabels");
static_assert(offsetof(UPCGGraphInputOutputSettings, CustomPins) == 200, "Offset mismatch for UPCGGraphInputOutputSettings::CustomPins");
static_assert(offsetof(UPCGGraphInputOutputSettings, bHasAddedDefaultPin) == 216, "Offset mismatch for UPCGGraphInputOutputSettings::bHasAddedDefaultPin");

// /Script/PCG.PCGGraphInstance
// Kind: Class; super: PCGGraphInterface
class UPCGGraphInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Graph; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ParametersOverrides[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGGraphInstance, Graph) == 40, "Offset mismatch for UPCGGraphInstance::Graph");
static_assert(offsetof(UPCGGraphInstance, ParametersOverrides) == 48, "Offset mismatch for UPCGGraphInstance::ParametersOverrides");

// /Script/PCG.PCGGraphInterface
// Kind: Class; super: Object
class UPCGGraphInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGGraphParametersHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGGraphParametersHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGGridLinkageSettings
// Kind: Class; super: PCGSettings
class UPCGGridLinkageSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint32_t FromGrid; // 0x00A8 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ToGrid; // 0x00AC (Size: 0x4, Type: UInt32Property)
    std::uint32_t GenerationGrid; // 0x00B0 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x00B4
    FString ResourceKey; // 0x00B8 (Size: 0x10, Type: StrProperty)
    TSoftObjectPtr<void> UpstreamPin; // 0x00C8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGGridLinkageSettings, FromGrid) == 168, "Offset mismatch for UPCGGridLinkageSettings::FromGrid");
static_assert(offsetof(UPCGGridLinkageSettings, ToGrid) == 172, "Offset mismatch for UPCGGridLinkageSettings::ToGrid");
static_assert(offsetof(UPCGGridLinkageSettings, GenerationGrid) == 176, "Offset mismatch for UPCGGridLinkageSettings::GenerationGrid");
static_assert(offsetof(UPCGGridLinkageSettings, ResourceKey) == 184, "Offset mismatch for UPCGGridLinkageSettings::ResourceKey");
static_assert(offsetof(UPCGGridLinkageSettings, UpstreamPin) == 200, "Offset mismatch for UPCGGridLinkageSettings::UpstreamPin");

// /Script/PCG.PCGHashAttributeSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGHashAttributeSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t InputSource1[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGHashAttributeSettings, InputSource1) == 264, "Offset mismatch for UPCGHashAttributeSettings::InputSource1");

// /Script/PCG.PCGHiGenGridSizeSettings
// Kind: Class; super: PCGSettings
class UPCGHiGenGridSizeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t HiGenGridSize; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t bShowInputPin; // 0x00AC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGHiGenGridSizeSettings, HiGenGridSize) == 168, "Offset mismatch for UPCGHiGenGridSizeSettings::HiGenGridSize");
static_assert(offsetof(UPCGHiGenGridSizeSettings, bShowInputPin) == 172, "Offset mismatch for UPCGHiGenGridSizeSettings::bShowInputPin");

// /Script/PCG.PCGIndirectionSettings
// Kind: Class; super: PCGSettings
class UPCGIndirectionSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ProxyInterfaceMode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    void* SettingsClass; // 0x00B0 (Size: 0x8, Type: ClassProperty)
    void* BlueprintElementClass; // 0x00B8 (Size: 0x8, Type: ClassProperty)
    void* Settings; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bTagOutputsBasedOnOutputPins; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGIndirectionSettings, ProxyInterfaceMode) == 168, "Offset mismatch for UPCGIndirectionSettings::ProxyInterfaceMode");
static_assert(offsetof(UPCGIndirectionSettings, SettingsClass) == 176, "Offset mismatch for UPCGIndirectionSettings::SettingsClass");
static_assert(offsetof(UPCGIndirectionSettings, BlueprintElementClass) == 184, "Offset mismatch for UPCGIndirectionSettings::BlueprintElementClass");
static_assert(offsetof(UPCGIndirectionSettings, Settings) == 192, "Offset mismatch for UPCGIndirectionSettings::Settings");
static_assert(offsetof(UPCGIndirectionSettings, bTagOutputsBasedOnOutputPins) == 200, "Offset mismatch for UPCGIndirectionSettings::bTagOutputsBasedOnOutputPins");

// /Script/PCG.PCGInnerIntersectionSettings
// Kind: Class; super: PCGSettings
class UPCGInnerIntersectionSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t DensityFunction; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bKeepZeroDensityPoints; // 0x00A9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGInnerIntersectionSettings, DensityFunction) == 168, "Offset mismatch for UPCGInnerIntersectionSettings::DensityFunction");
static_assert(offsetof(UPCGInnerIntersectionSettings, bKeepZeroDensityPoints) == 169, "Offset mismatch for UPCGInnerIntersectionSettings::bKeepZeroDensityPoints");

// /Script/PCG.PCGInstanceDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGInstanceDataInterface
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t InputPinProvidingData[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::int32_t CullingCellExtent; // 0x0084 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGInstanceDataInterface, InputPinProvidingData) == 128, "Offset mismatch for UPCGInstanceDataInterface::InputPinProvidingData");
static_assert(offsetof(UPCGInstanceDataInterface, CullingCellExtent) == 132, "Offset mismatch for UPCGInstanceDataInterface::CullingCellExtent");

// /Script/PCG.PCGInstanceDataPackerBase
// Kind: Class; super: Object
class UPCGInstanceDataPackerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGInstanceDataPackerByAttribute
// Kind: Class; super: PCGInstanceDataPackerBase
class UPCGInstanceDataPackerByAttribute
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AttributeSelectors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGInstanceDataPackerByAttribute, AttributeSelectors) == 40, "Offset mismatch for UPCGInstanceDataPackerByAttribute::AttributeSelectors");

// /Script/PCG.PCGInstanceDataPackerByRegex
// Kind: Class; super: PCGInstanceDataPackerBase
class UPCGInstanceDataPackerByRegex
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RegexPatterns; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGInstanceDataPackerByRegex, RegexPatterns) == 40, "Offset mismatch for UPCGInstanceDataPackerByRegex::RegexPatterns");

// /Script/PCG.PCGInstanceDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGInstanceDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGInstanceDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGInstanceDataProvider::ProducerKernel");
static_assert(offsetof(UPCGInstanceDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGInstanceDataProvider::ProducerSettings");

// /Script/PCG.PCGIntersectionData
// Kind: Class; super: PCGSpatialDataWithPointCache
class UPCGIntersectionData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t DensityFunction; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* A; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* B; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CachedBounds[0x38]; // 0x00F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t CachedStrictBounds[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGIntersectionData, DensityFunction) == 224, "Offset mismatch for UPCGIntersectionData::DensityFunction");
static_assert(offsetof(UPCGIntersectionData, A) == 232, "Offset mismatch for UPCGIntersectionData::A");
static_assert(offsetof(UPCGIntersectionData, B) == 240, "Offset mismatch for UPCGIntersectionData::B");
static_assert(offsetof(UPCGIntersectionData, CachedBounds) == 248, "Offset mismatch for UPCGIntersectionData::CachedBounds");
static_assert(offsetof(UPCGIntersectionData, CachedStrictBounds) == 304, "Offset mismatch for UPCGIntersectionData::CachedStrictBounds");

// /Script/PCG.PCGIsolatedActor
// Kind: Class; super: Actor
class UPCGIsolatedActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t Data[0x30]; // 0x0270 (Size: 0x30, Type: StructProperty)
    TSoftObjectPtr<void> origin; // 0x02A0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGIsolatedActor, Data) == 624, "Offset mismatch for UPCGIsolatedActor::Data");
static_assert(offsetof(UPCGIsolatedActor, origin) == 672, "Offset mismatch for UPCGIsolatedActor::origin");

// /Script/PCG.PCGKernelParamsDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGKernelParamsDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGKernelParamsDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGKernelParamsDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGKernelParamsDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGKernelParamsDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGKernelParamsDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGKernelParamsDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGKernelParamsDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGKernelParamsDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGKernelParamsDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGKernelParamsDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGKernelParamsDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGKernelParamsDataInterface::ProducerKernel");
static_assert(offsetof(UPCGKernelParamsDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGKernelParamsDataInterface::ProducerSettings");

// /Script/PCG.PCGKernelParamsDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGKernelParamsDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGKernelParamsDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGKernelParamsDataProvider::ProducerKernel");
static_assert(offsetof(UPCGKernelParamsDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGKernelParamsDataProvider::ProducerSettings");

// /Script/PCG.PCGLandscapeCache
// Kind: Class; super: Object
class UPCGLandscapeCache
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SerializationMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CookedSerializedContents; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x16]; // 0x002A
    TSet<void*> CachedLayerNames; // 0x0040 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UPCGLandscapeCache, SerializationMode) == 40, "Offset mismatch for UPCGLandscapeCache::SerializationMode");
static_assert(offsetof(UPCGLandscapeCache, CookedSerializedContents) == 41, "Offset mismatch for UPCGLandscapeCache::CookedSerializedContents");
static_assert(offsetof(UPCGLandscapeCache, CachedLayerNames) == 64, "Offset mismatch for UPCGLandscapeCache::CachedLayerNames");

// /Script/PCG.PCGLandscapeData
// Kind: Class; super: PCGSurfaceData
class UPCGLandscapeData
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    TArray<void*> Landscapes; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bounds[0x38]; // 0x0190 (Size: 0x38, Type: StructProperty)
    std::uint8_t DataProps[0x1]; // 0x01C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGLandscapeData, Landscapes) == 384, "Offset mismatch for UPCGLandscapeData::Landscapes");
static_assert(offsetof(UPCGLandscapeData, Bounds) == 400, "Offset mismatch for UPCGLandscapeData::Bounds");
static_assert(offsetof(UPCGLandscapeData, DataProps) == 456, "Offset mismatch for UPCGLandscapeData::DataProps");

// /Script/PCG.PCGLandscapeDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGLandscapeDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGLandscapeDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGLandscapeDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGLandscapeDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGLandscapeDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGLandscapeDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGLandscapeDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGLandscapeDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGLandscapeDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGLandscapeDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGLandscapeDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGLandscapeDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGLandscapeDataInterface::ProducerKernel");
static_assert(offsetof(UPCGLandscapeDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGLandscapeDataInterface::ProducerSettings");

// /Script/PCG.PCGLandscapeDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGLandscapeDataProvider
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* BaseColorVirtualTexture; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* HeightVirtualTexture; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* NormalVirtualTexture; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGLandscapeDataProvider, BaseColorVirtualTexture) == 104, "Offset mismatch for UPCGLandscapeDataProvider::BaseColorVirtualTexture");
static_assert(offsetof(UPCGLandscapeDataProvider, HeightVirtualTexture) == 112, "Offset mismatch for UPCGLandscapeDataProvider::HeightVirtualTexture");
static_assert(offsetof(UPCGLandscapeDataProvider, NormalVirtualTexture) == 120, "Offset mismatch for UPCGLandscapeDataProvider::NormalVirtualTexture");

// /Script/PCG.PCGLandscapeSplineData
// Kind: Class; super: PCGPolyLineData
class UPCGLandscapeSplineData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TWeakObjectPtr<void> Spline; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPCGLandscapeSplineData, Spline) == 224, "Offset mismatch for UPCGLandscapeSplineData::Spline");

// /Script/PCG.PCGLoadDataAssetSettings
// Kind: Class; super: PCGSettings
class UPCGLoadDataAssetSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Asset[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Pins; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    FString AssetName; // 0x00D8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bLoadFromInput; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t AssetReferenceSelector[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputIndexTag[0x4]; // 0x0120 (Size: 0x4, Type: NameProperty)
    std::uint8_t DataIndexTag[0x4]; // 0x0124 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSetDefaultAttributeOverridesFromInput; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0129
    TArray<void*> DefaultAttributeOverrides; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    FString CommaSeparatedDefaultAttributeOverrides; // 0x0140 (Size: 0x10, Type: StrProperty)
    std::uint8_t bWarnIfNoAsset; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTagOutputsBasedOnOutputPins; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSynchronousLoad; // 0x0152 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGLoadDataAssetSettings, Asset) == 168, "Offset mismatch for UPCGLoadDataAssetSettings::Asset");
static_assert(offsetof(UPCGLoadDataAssetSettings, Pins) == 200, "Offset mismatch for UPCGLoadDataAssetSettings::Pins");
static_assert(offsetof(UPCGLoadDataAssetSettings, AssetName) == 216, "Offset mismatch for UPCGLoadDataAssetSettings::AssetName");
static_assert(offsetof(UPCGLoadDataAssetSettings, bLoadFromInput) == 232, "Offset mismatch for UPCGLoadDataAssetSettings::bLoadFromInput");
static_assert(offsetof(UPCGLoadDataAssetSettings, AssetReferenceSelector) == 240, "Offset mismatch for UPCGLoadDataAssetSettings::AssetReferenceSelector");
static_assert(offsetof(UPCGLoadDataAssetSettings, InputIndexTag) == 288, "Offset mismatch for UPCGLoadDataAssetSettings::InputIndexTag");
static_assert(offsetof(UPCGLoadDataAssetSettings, DataIndexTag) == 292, "Offset mismatch for UPCGLoadDataAssetSettings::DataIndexTag");
static_assert(offsetof(UPCGLoadDataAssetSettings, bSetDefaultAttributeOverridesFromInput) == 296, "Offset mismatch for UPCGLoadDataAssetSettings::bSetDefaultAttributeOverridesFromInput");
static_assert(offsetof(UPCGLoadDataAssetSettings, DefaultAttributeOverrides) == 304, "Offset mismatch for UPCGLoadDataAssetSettings::DefaultAttributeOverrides");
static_assert(offsetof(UPCGLoadDataAssetSettings, CommaSeparatedDefaultAttributeOverrides) == 320, "Offset mismatch for UPCGLoadDataAssetSettings::CommaSeparatedDefaultAttributeOverrides");
static_assert(offsetof(UPCGLoadDataAssetSettings, bWarnIfNoAsset) == 336, "Offset mismatch for UPCGLoadDataAssetSettings::bWarnIfNoAsset");
static_assert(offsetof(UPCGLoadDataAssetSettings, bTagOutputsBasedOnOutputPins) == 337, "Offset mismatch for UPCGLoadDataAssetSettings::bTagOutputsBasedOnOutputPins");
static_assert(offsetof(UPCGLoadDataAssetSettings, bSynchronousLoad) == 338, "Offset mismatch for UPCGLoadDataAssetSettings::bSynchronousLoad");

// /Script/PCG.PCGLoadDataTableSettings
// Kind: Class; super: PCGExternalDataSettings
class UPCGLoadDataTableSettings
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t DataTable[0x20]; // 0x00B8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t OutputType; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSynchronousLoad; // 0x00D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGLoadDataTableSettings, DataTable) == 184, "Offset mismatch for UPCGLoadDataTableSettings::DataTable");
static_assert(offsetof(UPCGLoadDataTableSettings, OutputType) == 216, "Offset mismatch for UPCGLoadDataTableSettings::OutputType");
static_assert(offsetof(UPCGLoadDataTableSettings, bSynchronousLoad) == 217, "Offset mismatch for UPCGLoadDataTableSettings::bSynchronousLoad");

// /Script/PCG.PCGLoopSettings
// Kind: Class; super: PCGSubgraphSettings
class UPCGLoopSettings
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t bUseGraphDefaultPinUsage; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    FString LoopPins; // 0x00C0 (Size: 0x10, Type: StrProperty)
    FString FeedbackPins; // 0x00D0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bTokenizeOnWhiteSpace; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGLoopSettings, bUseGraphDefaultPinUsage) == 184, "Offset mismatch for UPCGLoopSettings::bUseGraphDefaultPinUsage");
static_assert(offsetof(UPCGLoopSettings, LoopPins) == 192, "Offset mismatch for UPCGLoopSettings::LoopPins");
static_assert(offsetof(UPCGLoopSettings, FeedbackPins) == 208, "Offset mismatch for UPCGLoopSettings::FeedbackPins");
static_assert(offsetof(UPCGLoopSettings, bTokenizeOnWhiteSpace) == 224, "Offset mismatch for UPCGLoopSettings::bTokenizeOnWhiteSpace");

// /Script/PCG.PCGMakeConcreteSettings
// Kind: Class; super: PCGSettings
class UPCGMakeConcreteSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGMakeConcreteSettings, Seed) == 80, "Offset mismatch for UPCGMakeConcreteSettings::Seed");
static_assert(offsetof(UPCGMakeConcreteSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGMakeConcreteSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGMakeConcreteSettings, bUseSeed) == 96, "Offset mismatch for UPCGMakeConcreteSettings::bUseSeed");
static_assert(offsetof(UPCGMakeConcreteSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGMakeConcreteSettings::CachedOverridableParams");
static_assert(offsetof(UPCGMakeConcreteSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGMakeConcreteSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGMakeConcreteSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGMakeConcreteSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGMakeConcreteSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGMakeConcreteSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGMakeConcreteSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGMakeConcreteSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGMakeConcreteSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGMakeConcreteSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGMakeConcreteSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGMakeConcreteSettings::DebugBufferSize");

// /Script/PCG.PCGManagedActors
// Kind: Class; super: PCGManagedResource
class UPCGManagedActors
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bSupportsReset; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t GeneratedActors[0x10]; // 0x0040 (Size: 0x10, Type: SetProperty)
    TArray<void*> GeneratedActorsArray; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGManagedActors, bSupportsReset) == 56, "Offset mismatch for UPCGManagedActors::bSupportsReset");
static_assert(offsetof(UPCGManagedActors, GeneratedActors) == 64, "Offset mismatch for UPCGManagedActors::GeneratedActors");
static_assert(offsetof(UPCGManagedActors, GeneratedActorsArray) == 80, "Offset mismatch for UPCGManagedActors::GeneratedActorsArray");

// /Script/PCG.PCGManagedComponent
// Kind: Class; super: PCGManagedComponentBase
class UPCGManagedComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TSoftObjectPtr<void> GeneratedComponent; // 0x0038 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGManagedComponent, GeneratedComponent) == 56, "Offset mismatch for UPCGManagedComponent::GeneratedComponent");

// /Script/PCG.PCGManagedComponentBase
// Kind: Class; super: PCGManagedResource
class UPCGManagedComponentBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Crc[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsMarkedUnused; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGManagedComponentBase, Crc) == 40, "Offset mismatch for UPCGManagedComponentBase::Crc");
static_assert(offsetof(UPCGManagedComponentBase, bIsMarkedUnused) == 48, "Offset mismatch for UPCGManagedComponentBase::bIsMarkedUnused");

// /Script/PCG.PCGManagedComponentDefaultList
// Kind: Class; super: PCGManagedComponentList
class UPCGManagedComponentDefaultList
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> GeneratedComponents; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGManagedComponentDefaultList, GeneratedComponents) == 56, "Offset mismatch for UPCGManagedComponentDefaultList::GeneratedComponents");

// /Script/PCG.PCGManagedComponentList
// Kind: Class; super: PCGManagedComponentBase
class UPCGManagedComponentList
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> GeneratedComponents; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGManagedComponentList, GeneratedComponents) == 56, "Offset mismatch for UPCGManagedComponentList::GeneratedComponents");

// /Script/PCG.PCGManagedDebugDrawComponent
// Kind: Class; super: PCGManagedComponent
class UPCGManagedDebugDrawComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TSoftObjectPtr<void> GeneratedComponent; // 0x0038 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGManagedDebugDrawComponent, GeneratedComponent) == 56, "Offset mismatch for UPCGManagedDebugDrawComponent::GeneratedComponent");

// /Script/PCG.PCGManagedDebugStringMessageKey
// Kind: Class; super: PCGManagedResource
class UPCGManagedDebugStringMessageKey
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint64_t HashKey; // 0x0038 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(UPCGManagedDebugStringMessageKey, HashKey) == 56, "Offset mismatch for UPCGManagedDebugStringMessageKey::HashKey");

// /Script/PCG.PCGManagedISKMComponent
// Kind: Class; super: PCGManagedComponent
class UPCGManagedISKMComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t bHasDescriptor; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    std::uint8_t Descriptor[0x250]; // 0x0060 (Size: 0x250, Type: StructProperty)
    std::uint8_t bHasRootLocation; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02B1
    std::uint8_t RootLocation[0x18]; // 0x02B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SettingsCrc[0x8]; // 0x02D0 (Size: 0x8, Type: StructProperty)
    std::int32_t CrcReuseCount; // 0x02D8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGManagedISKMComponent, bHasDescriptor) == 88, "Offset mismatch for UPCGManagedISKMComponent::bHasDescriptor");
static_assert(offsetof(UPCGManagedISKMComponent, Descriptor) == 96, "Offset mismatch for UPCGManagedISKMComponent::Descriptor");
static_assert(offsetof(UPCGManagedISKMComponent, bHasRootLocation) == 688, "Offset mismatch for UPCGManagedISKMComponent::bHasRootLocation");
static_assert(offsetof(UPCGManagedISKMComponent, RootLocation) == 696, "Offset mismatch for UPCGManagedISKMComponent::RootLocation");
static_assert(offsetof(UPCGManagedISKMComponent, SettingsCrc) == 720, "Offset mismatch for UPCGManagedISKMComponent::SettingsCrc");
static_assert(offsetof(UPCGManagedISKMComponent, CrcReuseCount) == 728, "Offset mismatch for UPCGManagedISKMComponent::CrcReuseCount");

// /Script/PCG.PCGManagedISMComponent
// Kind: Class; super: PCGManagedComponent
class UPCGManagedISMComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t bHasDescriptor; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    std::uint8_t Descriptor[0x2B0]; // 0x0060 (Size: 0x2B0, Type: StructProperty)
    std::uint8_t bHasRootLocation; // 0x0310 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0311
    std::uint8_t RootLocation[0x18]; // 0x0318 (Size: 0x18, Type: StructProperty)
    std::uint8_t SettingsCrc[0x8]; // 0x0330 (Size: 0x8, Type: StructProperty)
    std::uint8_t DataCrc[0x8]; // 0x0338 (Size: 0x8, Type: StructProperty)
    std::int32_t CrcReuseCount; // 0x0340 (Size: 0x4, Type: IntProperty)
    std::int32_t DataCrcReuseCount; // 0x0344 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGManagedISMComponent, bHasDescriptor) == 88, "Offset mismatch for UPCGManagedISMComponent::bHasDescriptor");
static_assert(offsetof(UPCGManagedISMComponent, Descriptor) == 96, "Offset mismatch for UPCGManagedISMComponent::Descriptor");
static_assert(offsetof(UPCGManagedISMComponent, bHasRootLocation) == 784, "Offset mismatch for UPCGManagedISMComponent::bHasRootLocation");
static_assert(offsetof(UPCGManagedISMComponent, RootLocation) == 792, "Offset mismatch for UPCGManagedISMComponent::RootLocation");
static_assert(offsetof(UPCGManagedISMComponent, SettingsCrc) == 816, "Offset mismatch for UPCGManagedISMComponent::SettingsCrc");
static_assert(offsetof(UPCGManagedISMComponent, DataCrc) == 824, "Offset mismatch for UPCGManagedISMComponent::DataCrc");
static_assert(offsetof(UPCGManagedISMComponent, CrcReuseCount) == 832, "Offset mismatch for UPCGManagedISMComponent::CrcReuseCount");
static_assert(offsetof(UPCGManagedISMComponent, DataCrcReuseCount) == 836, "Offset mismatch for UPCGManagedISMComponent::DataCrcReuseCount");

// /Script/PCG.PCGManagedProceduralISMComponent
// Kind: Class; super: PCGManagedComponent
class UPCGManagedProceduralISMComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t Descriptor[0xD8]; // 0x0058 (Size: 0xD8, Type: StructProperty)
    std::uint8_t bHasRootLocation; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0131
    std::uint8_t RootLocation[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint64_t SettingsUID; // 0x0150 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(UPCGManagedProceduralISMComponent, Descriptor) == 88, "Offset mismatch for UPCGManagedProceduralISMComponent::Descriptor");
static_assert(offsetof(UPCGManagedProceduralISMComponent, bHasRootLocation) == 304, "Offset mismatch for UPCGManagedProceduralISMComponent::bHasRootLocation");
static_assert(offsetof(UPCGManagedProceduralISMComponent, RootLocation) == 312, "Offset mismatch for UPCGManagedProceduralISMComponent::RootLocation");
static_assert(offsetof(UPCGManagedProceduralISMComponent, SettingsUID) == 336, "Offset mismatch for UPCGManagedProceduralISMComponent::SettingsUID");

// /Script/PCG.PCGManagedResource
// Kind: Class; super: Object
class UPCGManagedResource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Crc[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsMarkedUnused; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGManagedResource, Crc) == 40, "Offset mismatch for UPCGManagedResource::Crc");
static_assert(offsetof(UPCGManagedResource, bIsMarkedUnused) == 48, "Offset mismatch for UPCGManagedResource::bIsMarkedUnused");

// /Script/PCG.PCGManagedSplineMeshComponent
// Kind: Class; super: PCGManagedComponent
class UPCGManagedSplineMeshComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t Descriptor[0x230]; // 0x0058 (Size: 0x230, Type: StructProperty)
    std::uint8_t SplineMeshParams[0xE8]; // 0x0288 (Size: 0xE8, Type: StructProperty)
    std::uint8_t SettingsCrc[0x8]; // 0x0370 (Size: 0x8, Type: StructProperty)
    TWeakObjectPtr<void> CachedGeneratedComponent; // 0x0378 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPCGManagedSplineMeshComponent, Descriptor) == 88, "Offset mismatch for UPCGManagedSplineMeshComponent::Descriptor");
static_assert(offsetof(UPCGManagedSplineMeshComponent, SplineMeshParams) == 648, "Offset mismatch for UPCGManagedSplineMeshComponent::SplineMeshParams");
static_assert(offsetof(UPCGManagedSplineMeshComponent, SettingsCrc) == 880, "Offset mismatch for UPCGManagedSplineMeshComponent::SettingsCrc");
static_assert(offsetof(UPCGManagedSplineMeshComponent, CachedGeneratedComponent) == 888, "Offset mismatch for UPCGManagedSplineMeshComponent::CachedGeneratedComponent");

// /Script/PCG.PCGMatchAndSetAttributesSettings
// Kind: Class; super: PCGSettings
class UPCGMatchAndSetAttributesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bMatchAttributes; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t InputAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t MatchAttribute[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bKeepUnmatched; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFindNearest; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0112
    std::uint8_t MaxDistanceMode; // 0x0114 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0xB]; // 0x0115
    std::uint8_t MaxDistanceForNearestMatch[0x160]; // 0x0120 (Size: 0x160, Type: StructProperty)
    std::uint8_t MaxDistanceInputAttribute[0x30]; // 0x0280 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseInputWeightAttribute; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x02B1
    std::uint8_t InputWeightAttribute[0x30]; // 0x02B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseWeightAttribute; // 0x02E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x02E9
    std::uint8_t WeightAttribute[0x30]; // 0x02F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bWarnIfNoMatchData; // 0x0320 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWarnOnAttributeCast; // 0x0321 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGMatchAndSetAttributesSettings, bMatchAttributes) == 168, "Offset mismatch for UPCGMatchAndSetAttributesSettings::bMatchAttributes");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, InputAttribute) == 176, "Offset mismatch for UPCGMatchAndSetAttributesSettings::InputAttribute");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, MatchAttribute) == 224, "Offset mismatch for UPCGMatchAndSetAttributesSettings::MatchAttribute");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, bKeepUnmatched) == 272, "Offset mismatch for UPCGMatchAndSetAttributesSettings::bKeepUnmatched");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, bFindNearest) == 273, "Offset mismatch for UPCGMatchAndSetAttributesSettings::bFindNearest");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, MaxDistanceMode) == 276, "Offset mismatch for UPCGMatchAndSetAttributesSettings::MaxDistanceMode");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, MaxDistanceForNearestMatch) == 288, "Offset mismatch for UPCGMatchAndSetAttributesSettings::MaxDistanceForNearestMatch");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, MaxDistanceInputAttribute) == 640, "Offset mismatch for UPCGMatchAndSetAttributesSettings::MaxDistanceInputAttribute");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, bUseInputWeightAttribute) == 688, "Offset mismatch for UPCGMatchAndSetAttributesSettings::bUseInputWeightAttribute");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, InputWeightAttribute) == 696, "Offset mismatch for UPCGMatchAndSetAttributesSettings::InputWeightAttribute");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, bUseWeightAttribute) == 744, "Offset mismatch for UPCGMatchAndSetAttributesSettings::bUseWeightAttribute");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, WeightAttribute) == 752, "Offset mismatch for UPCGMatchAndSetAttributesSettings::WeightAttribute");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, bWarnIfNoMatchData) == 800, "Offset mismatch for UPCGMatchAndSetAttributesSettings::bWarnIfNoMatchData");
static_assert(offsetof(UPCGMatchAndSetAttributesSettings, bWarnOnAttributeCast) == 801, "Offset mismatch for UPCGMatchAndSetAttributesSettings::bWarnOnAttributeCast");

// /Script/PCG.PCGMatchAndSetBase
// Kind: Class; super: Object
class UPCGMatchAndSetBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Type; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t StringMode; // 0x002C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGMatchAndSetBase, Type) == 40, "Offset mismatch for UPCGMatchAndSetBase::Type");
static_assert(offsetof(UPCGMatchAndSetBase, StringMode) == 44, "Offset mismatch for UPCGMatchAndSetBase::StringMode");

// /Script/PCG.PCGMatchAndSetByAttribute
// Kind: Class; super: PCGMatchAndSetBase
class UPCGMatchAndSetByAttribute
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MatchSourceAttribute[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t MatchSourceType; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    std::uint8_t MatchSourceStringMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0039
    TArray<void*> Entries; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGMatchAndSetByAttribute, MatchSourceAttribute) == 48, "Offset mismatch for UPCGMatchAndSetByAttribute::MatchSourceAttribute");
static_assert(offsetof(UPCGMatchAndSetByAttribute, MatchSourceType) == 52, "Offset mismatch for UPCGMatchAndSetByAttribute::MatchSourceType");
static_assert(offsetof(UPCGMatchAndSetByAttribute, MatchSourceStringMode) == 56, "Offset mismatch for UPCGMatchAndSetByAttribute::MatchSourceStringMode");
static_assert(offsetof(UPCGMatchAndSetByAttribute, Entries) == 64, "Offset mismatch for UPCGMatchAndSetByAttribute::Entries");

// /Script/PCG.PCGMatchAndSetWeighted
// Kind: Class; super: PCGMatchAndSetBase
class UPCGMatchAndSetWeighted
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Entries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldMutateSeed; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGMatchAndSetWeighted, Entries) == 48, "Offset mismatch for UPCGMatchAndSetWeighted::Entries");
static_assert(offsetof(UPCGMatchAndSetWeighted, bShouldMutateSeed) == 64, "Offset mismatch for UPCGMatchAndSetWeighted::bShouldMutateSeed");

// /Script/PCG.PCGMatchAndSetWeightedByCategory
// Kind: Class; super: PCGMatchAndSetBase
class UPCGMatchAndSetWeightedByCategory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t CategoryAttribute[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t CategoryType; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    std::uint8_t CategoryStringMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0039
    TArray<void*> Categories; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldMutateSeed; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGMatchAndSetWeightedByCategory, CategoryAttribute) == 48, "Offset mismatch for UPCGMatchAndSetWeightedByCategory::CategoryAttribute");
static_assert(offsetof(UPCGMatchAndSetWeightedByCategory, CategoryType) == 52, "Offset mismatch for UPCGMatchAndSetWeightedByCategory::CategoryType");
static_assert(offsetof(UPCGMatchAndSetWeightedByCategory, CategoryStringMode) == 56, "Offset mismatch for UPCGMatchAndSetWeightedByCategory::CategoryStringMode");
static_assert(offsetof(UPCGMatchAndSetWeightedByCategory, Categories) == 64, "Offset mismatch for UPCGMatchAndSetWeightedByCategory::Categories");
static_assert(offsetof(UPCGMatchAndSetWeightedByCategory, bShouldMutateSeed) == 80, "Offset mismatch for UPCGMatchAndSetWeightedByCategory::bShouldMutateSeed");

// /Script/PCG.PCGMergeAttributesSettings
// Kind: Class; super: PCGSettingsWithDynamicInputs
class UPCGMergeAttributesSettings
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t MergeTagsMode; // 0x00B8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGMergeAttributesSettings, MergeTagsMode) == 184, "Offset mismatch for UPCGMergeAttributesSettings::MergeTagsMode");

// /Script/PCG.PCGMergeSettings
// Kind: Class; super: PCGSettingsWithDynamicInputs
class UPCGMergeSettings
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t bMergeMetadata; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MergeTagsMode; // 0x00B9 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGMergeSettings, bMergeMetadata) == 184, "Offset mismatch for UPCGMergeSettings::bMergeMetadata");
static_assert(offsetof(UPCGMergeSettings, MergeTagsMode) == 185, "Offset mismatch for UPCGMergeSettings::MergeTagsMode");

// /Script/PCG.PCGMeshSelectorBase
// Kind: Class; super: Object
class UPCGMeshSelectorBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGMeshSelectorByAttribute
// Kind: Class; super: PCGMeshSelectorBase
class UPCGMeshSelectorByAttribute
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName AttributeName; // 0x0028 (Size: 0x8, Type: NameProperty)
    std::uint8_t TemplateDescriptor[0x290]; // 0x0030 (Size: 0x290, Type: StructProperty)
    std::uint8_t bUseAttributeMaterialOverrides; // 0x02C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02C1
    TArray<void*> MaterialOverrideAttributes; // 0x02C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGMeshSelectorByAttribute, AttributeName) == 40, "Offset mismatch for UPCGMeshSelectorByAttribute::AttributeName");
static_assert(offsetof(UPCGMeshSelectorByAttribute, TemplateDescriptor) == 48, "Offset mismatch for UPCGMeshSelectorByAttribute::TemplateDescriptor");
static_assert(offsetof(UPCGMeshSelectorByAttribute, bUseAttributeMaterialOverrides) == 704, "Offset mismatch for UPCGMeshSelectorByAttribute::bUseAttributeMaterialOverrides");
static_assert(offsetof(UPCGMeshSelectorByAttribute, MaterialOverrideAttributes) == 712, "Offset mismatch for UPCGMeshSelectorByAttribute::MaterialOverrideAttributes");

// /Script/PCG.PCGMeshSelectorPrimitiveData
// Kind: Class; super: PCGMeshSelectorBase
class UPCGMeshSelectorPrimitiveData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TemplateDescriptor[0x290]; // 0x0028 (Size: 0x290, Type: StructProperty)
    std::uint8_t PrimitiveIndexAttribute[0x4]; // 0x02B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MeshAttribute[0x4]; // 0x02BC (Size: 0x4, Type: NameProperty)
    TArray<void*> MaterialOverrideAttributes; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PrimitiveOverrideAttributes; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CustomPrimitiveDataAttributes; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGMeshSelectorPrimitiveData, TemplateDescriptor) == 40, "Offset mismatch for UPCGMeshSelectorPrimitiveData::TemplateDescriptor");
static_assert(offsetof(UPCGMeshSelectorPrimitiveData, PrimitiveIndexAttribute) == 696, "Offset mismatch for UPCGMeshSelectorPrimitiveData::PrimitiveIndexAttribute");
static_assert(offsetof(UPCGMeshSelectorPrimitiveData, MeshAttribute) == 700, "Offset mismatch for UPCGMeshSelectorPrimitiveData::MeshAttribute");
static_assert(offsetof(UPCGMeshSelectorPrimitiveData, MaterialOverrideAttributes) == 704, "Offset mismatch for UPCGMeshSelectorPrimitiveData::MaterialOverrideAttributes");
static_assert(offsetof(UPCGMeshSelectorPrimitiveData, PrimitiveOverrideAttributes) == 720, "Offset mismatch for UPCGMeshSelectorPrimitiveData::PrimitiveOverrideAttributes");
static_assert(offsetof(UPCGMeshSelectorPrimitiveData, CustomPrimitiveDataAttributes) == 736, "Offset mismatch for UPCGMeshSelectorPrimitiveData::CustomPrimitiveDataAttributes");

// /Script/PCG.PCGMeshSelectorWeighted
// Kind: Class; super: PCGMeshSelectorBase
class UPCGMeshSelectorWeighted
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> MeshEntries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseAttributeMaterialOverrides; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    TArray<void*> MaterialOverrideAttributes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGMeshSelectorWeighted, MeshEntries) == 40, "Offset mismatch for UPCGMeshSelectorWeighted::MeshEntries");
static_assert(offsetof(UPCGMeshSelectorWeighted, bUseAttributeMaterialOverrides) == 56, "Offset mismatch for UPCGMeshSelectorWeighted::bUseAttributeMaterialOverrides");
static_assert(offsetof(UPCGMeshSelectorWeighted, MaterialOverrideAttributes) == 64, "Offset mismatch for UPCGMeshSelectorWeighted::MaterialOverrideAttributes");

// /Script/PCG.PCGMeshSelectorWeightedByCategory
// Kind: Class; super: PCGMeshSelectorBase
class UPCGMeshSelectorWeightedByCategory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName CategoryAttribute; // 0x0028 (Size: 0x8, Type: NameProperty)
    TArray<void*> Entries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseAttributeMaterialOverrides; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> MaterialOverrideAttributes; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGMeshSelectorWeightedByCategory, CategoryAttribute) == 40, "Offset mismatch for UPCGMeshSelectorWeightedByCategory::CategoryAttribute");
static_assert(offsetof(UPCGMeshSelectorWeightedByCategory, Entries) == 48, "Offset mismatch for UPCGMeshSelectorWeightedByCategory::Entries");
static_assert(offsetof(UPCGMeshSelectorWeightedByCategory, bUseAttributeMaterialOverrides) == 64, "Offset mismatch for UPCGMeshSelectorWeightedByCategory::bUseAttributeMaterialOverrides");
static_assert(offsetof(UPCGMeshSelectorWeightedByCategory, MaterialOverrideAttributes) == 72, "Offset mismatch for UPCGMeshSelectorWeightedByCategory::MaterialOverrideAttributes");

// /Script/PCG.PCGMeshSpawnerDataInterfaceBase
// Kind: Class; super: PCGComputeDataInterface
class UPCGMeshSpawnerDataInterfaceBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGMeshSpawnerDataInterfaceBase, GraphBindingIndex) == 40, "Offset mismatch for UPCGMeshSpawnerDataInterfaceBase::GraphBindingIndex");
static_assert(offsetof(UPCGMeshSpawnerDataInterfaceBase, OutputPinLabel) == 44, "Offset mismatch for UPCGMeshSpawnerDataInterfaceBase::OutputPinLabel");
static_assert(offsetof(UPCGMeshSpawnerDataInterfaceBase, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGMeshSpawnerDataInterfaceBase::OutputPinLabelAlias");
static_assert(offsetof(UPCGMeshSpawnerDataInterfaceBase, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGMeshSpawnerDataInterfaceBase::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGMeshSpawnerDataInterfaceBase, bProducedByCPU) == 72, "Offset mismatch for UPCGMeshSpawnerDataInterfaceBase::bProducedByCPU");
static_assert(offsetof(UPCGMeshSpawnerDataInterfaceBase, ProducerKernel) == 80, "Offset mismatch for UPCGMeshSpawnerDataInterfaceBase::ProducerKernel");
static_assert(offsetof(UPCGMeshSpawnerDataInterfaceBase, ProducerSettings) == 88, "Offset mismatch for UPCGMeshSpawnerDataInterfaceBase::ProducerSettings");

// /Script/PCG.PCGMeshSpawnerDataProviderBase
// Kind: Class; super: PCGComputeDataProvider
class UPCGMeshSpawnerDataProviderBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGMeshSpawnerDataProviderBase, ProducerKernel) == 80, "Offset mismatch for UPCGMeshSpawnerDataProviderBase::ProducerKernel");
static_assert(offsetof(UPCGMeshSpawnerDataProviderBase, ProducerSettings) == 88, "Offset mismatch for UPCGMeshSpawnerDataProviderBase::ProducerSettings");

// /Script/PCG.PCGMeshSpawnerSettingsBase
// Kind: Class; super: PCGSettings
class UPCGMeshSpawnerSettingsBase
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t MeshSelector[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    void* InstancePackerType; // 0x00B8 (Size: 0x8, Type: ClassProperty)
    void* InstancePackerParameters; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ComponentPropertyOverrides; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OutAttributeName[0x4]; // 0x00D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bApplyMeshBoundsToPoints; // 0x00DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00DD
    std::uint8_t TargetActor[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> PostProcessFunctionNames; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSynchronousLoad; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSilenceOverrideAttributeNotFoundErrors; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWarnOnIdenticalSpawn; // 0x0112 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGMeshSpawnerSettingsBase, MeshSelector) == 168, "Offset mismatch for UPCGMeshSpawnerSettingsBase::MeshSelector");
static_assert(offsetof(UPCGMeshSpawnerSettingsBase, InstancePackerType) == 184, "Offset mismatch for UPCGMeshSpawnerSettingsBase::InstancePackerType");
static_assert(offsetof(UPCGMeshSpawnerSettingsBase, InstancePackerParameters) == 192, "Offset mismatch for UPCGMeshSpawnerSettingsBase::InstancePackerParameters");
static_assert(offsetof(UPCGMeshSpawnerSettingsBase, ComponentPropertyOverrides) == 200, "Offset mismatch for UPCGMeshSpawnerSettingsBase::ComponentPropertyOverrides");
static_assert(offsetof(UPCGMeshSpawnerSettingsBase, OutAttributeName) == 216, "Offset mismatch for UPCGMeshSpawnerSettingsBase::OutAttributeName");
static_assert(offsetof(UPCGMeshSpawnerSettingsBase, bApplyMeshBoundsToPoints) == 220, "Offset mismatch for UPCGMeshSpawnerSettingsBase::bApplyMeshBoundsToPoints");
static_assert(offsetof(UPCGMeshSpawnerSettingsBase, TargetActor) == 224, "Offset mismatch for UPCGMeshSpawnerSettingsBase::TargetActor");
static_assert(offsetof(UPCGMeshSpawnerSettingsBase, PostProcessFunctionNames) == 256, "Offset mismatch for UPCGMeshSpawnerSettingsBase::PostProcessFunctionNames");
static_assert(offsetof(UPCGMeshSpawnerSettingsBase, bSynchronousLoad) == 272, "Offset mismatch for UPCGMeshSpawnerSettingsBase::bSynchronousLoad");
static_assert(offsetof(UPCGMeshSpawnerSettingsBase, bSilenceOverrideAttributeNotFoundErrors) == 273, "Offset mismatch for UPCGMeshSpawnerSettingsBase::bSilenceOverrideAttributeNotFoundErrors");
static_assert(offsetof(UPCGMeshSpawnerSettingsBase, bWarnOnIdenticalSpawn) == 274, "Offset mismatch for UPCGMeshSpawnerSettingsBase::bWarnOnIdenticalSpawn");

// /Script/PCG.PCGMetaDataPartitionDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGMetaDataPartitionDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGMetaDataPartitionDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGMetaDataPartitionDataProvider::ProducerKernel");
static_assert(offsetof(UPCGMetaDataPartitionDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGMetaDataPartitionDataProvider::ProducerSettings");

// /Script/PCG.PCGMetadata
// Kind: Class; super: Object
class UPCGMetadata
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Parent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGMetadata, Parent) == 40, "Offset mismatch for UPCGMetadata::Parent");

// /Script/PCG.PCGMetadataAccessorHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGMetadataAccessorHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGMetadataArrayOperationSettings
// Kind: Class; super: PCGSettings
class UPCGMetadataArrayOperationSettings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Operation; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t InputSource1[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource3[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputTarget[0x30]; // 0x0148 (Size: 0x30, Type: StructProperty)
    std::uint8_t DefaultValues[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataArrayOperationSettings, Operation) == 176, "Offset mismatch for UPCGMetadataArrayOperationSettings::Operation");
static_assert(offsetof(UPCGMetadataArrayOperationSettings, InputSource1) == 184, "Offset mismatch for UPCGMetadataArrayOperationSettings::InputSource1");
static_assert(offsetof(UPCGMetadataArrayOperationSettings, InputSource2) == 232, "Offset mismatch for UPCGMetadataArrayOperationSettings::InputSource2");
static_assert(offsetof(UPCGMetadataArrayOperationSettings, InputSource3) == 280, "Offset mismatch for UPCGMetadataArrayOperationSettings::InputSource3");
static_assert(offsetof(UPCGMetadataArrayOperationSettings, OutputTarget) == 328, "Offset mismatch for UPCGMetadataArrayOperationSettings::OutputTarget");
static_assert(offsetof(UPCGMetadataArrayOperationSettings, DefaultValues) == 376, "Offset mismatch for UPCGMetadataArrayOperationSettings::DefaultValues");

// /Script/PCG.PCGMetadataBitwiseSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataBitwiseSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Operation; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    std::uint8_t InputSource1[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataBitwiseSettings, Operation) == 264, "Offset mismatch for UPCGMetadataBitwiseSettings::Operation");
static_assert(offsetof(UPCGMetadataBitwiseSettings, InputSource1) == 272, "Offset mismatch for UPCGMetadataBitwiseSettings::InputSource1");
static_assert(offsetof(UPCGMetadataBitwiseSettings, InputSource2) == 320, "Offset mismatch for UPCGMetadataBitwiseSettings::InputSource2");

// /Script/PCG.PCGMetadataBooleanSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataBooleanSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Operation; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    std::uint8_t InputSource1[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataBooleanSettings, Operation) == 264, "Offset mismatch for UPCGMetadataBooleanSettings::Operation");
static_assert(offsetof(UPCGMetadataBooleanSettings, InputSource1) == 272, "Offset mismatch for UPCGMetadataBooleanSettings::InputSource1");
static_assert(offsetof(UPCGMetadataBooleanSettings, InputSource2) == 320, "Offset mismatch for UPCGMetadataBooleanSettings::InputSource2");

// /Script/PCG.PCGMetadataBreakTransformSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataBreakTransformSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t InputSource[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataBreakTransformSettings, InputSource) == 264, "Offset mismatch for UPCGMetadataBreakTransformSettings::InputSource");

// /Script/PCG.PCGMetadataBreakVectorSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataBreakVectorSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t InputSource[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataBreakVectorSettings, InputSource) == 264, "Offset mismatch for UPCGMetadataBreakVectorSettings::InputSource");

// /Script/PCG.PCGMetadataCompareSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataCompareSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Operation; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    std::uint8_t InputSource1[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    double Tolerance; // 0x0170 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPCGMetadataCompareSettings, Operation) == 264, "Offset mismatch for UPCGMetadataCompareSettings::Operation");
static_assert(offsetof(UPCGMetadataCompareSettings, InputSource1) == 272, "Offset mismatch for UPCGMetadataCompareSettings::InputSource1");
static_assert(offsetof(UPCGMetadataCompareSettings, InputSource2) == 320, "Offset mismatch for UPCGMetadataCompareSettings::InputSource2");
static_assert(offsetof(UPCGMetadataCompareSettings, Tolerance) == 368, "Offset mismatch for UPCGMetadataCompareSettings::Tolerance");

// /Script/PCG.PCGMetadataDomainLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGMetadataDomainLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGMetadataMakeRotatorSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataMakeRotatorSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t InputSource1[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x30]; // 0x0138 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource3[0x30]; // 0x0168 (Size: 0x30, Type: StructProperty)
    std::uint8_t Operation; // 0x0198 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGMetadataMakeRotatorSettings, InputSource1) == 264, "Offset mismatch for UPCGMetadataMakeRotatorSettings::InputSource1");
static_assert(offsetof(UPCGMetadataMakeRotatorSettings, InputSource2) == 312, "Offset mismatch for UPCGMetadataMakeRotatorSettings::InputSource2");
static_assert(offsetof(UPCGMetadataMakeRotatorSettings, InputSource3) == 360, "Offset mismatch for UPCGMetadataMakeRotatorSettings::InputSource3");
static_assert(offsetof(UPCGMetadataMakeRotatorSettings, Operation) == 408, "Offset mismatch for UPCGMetadataMakeRotatorSettings::Operation");

// /Script/PCG.PCGMetadataMakeTransformSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataMakeTransformSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t InputSource1[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x30]; // 0x0138 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource3[0x1]; // 0x0168 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataMakeTransformSettings, InputSource1) == 264, "Offset mismatch for UPCGMetadataMakeTransformSettings::InputSource1");
static_assert(offsetof(UPCGMetadataMakeTransformSettings, InputSource2) == 312, "Offset mismatch for UPCGMetadataMakeTransformSettings::InputSource2");
static_assert(offsetof(UPCGMetadataMakeTransformSettings, InputSource3) == 360, "Offset mismatch for UPCGMetadataMakeTransformSettings::InputSource3");

// /Script/PCG.PCGMetadataMakeVectorSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataMakeVectorSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t InputSource1[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x30]; // 0x0138 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource3[0x30]; // 0x0168 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource4[0x30]; // 0x0198 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputType; // 0x01C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MakeVector3Op; // 0x01C9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MakeVector4Op; // 0x01CA (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGMetadataMakeVectorSettings, InputSource1) == 264, "Offset mismatch for UPCGMetadataMakeVectorSettings::InputSource1");
static_assert(offsetof(UPCGMetadataMakeVectorSettings, InputSource2) == 312, "Offset mismatch for UPCGMetadataMakeVectorSettings::InputSource2");
static_assert(offsetof(UPCGMetadataMakeVectorSettings, InputSource3) == 360, "Offset mismatch for UPCGMetadataMakeVectorSettings::InputSource3");
static_assert(offsetof(UPCGMetadataMakeVectorSettings, InputSource4) == 408, "Offset mismatch for UPCGMetadataMakeVectorSettings::InputSource4");
static_assert(offsetof(UPCGMetadataMakeVectorSettings, OutputType) == 456, "Offset mismatch for UPCGMetadataMakeVectorSettings::OutputType");
static_assert(offsetof(UPCGMetadataMakeVectorSettings, MakeVector3Op) == 457, "Offset mismatch for UPCGMetadataMakeVectorSettings::MakeVector3Op");
static_assert(offsetof(UPCGMetadataMakeVectorSettings, MakeVector4Op) == 458, "Offset mismatch for UPCGMetadataMakeVectorSettings::MakeVector4Op");

// /Script/PCG.PCGMetadataMathsSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataMathsSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Operation; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0109
    std::uint8_t bForceRoundingOpToInt; // 0x010A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceOpToDouble; // 0x010B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x010C
    std::uint8_t InputSource1[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource3[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataMathsSettings, Operation) == 264, "Offset mismatch for UPCGMetadataMathsSettings::Operation");
static_assert(offsetof(UPCGMetadataMathsSettings, bForceRoundingOpToInt) == 266, "Offset mismatch for UPCGMetadataMathsSettings::bForceRoundingOpToInt");
static_assert(offsetof(UPCGMetadataMathsSettings, bForceOpToDouble) == 267, "Offset mismatch for UPCGMetadataMathsSettings::bForceOpToDouble");
static_assert(offsetof(UPCGMetadataMathsSettings, InputSource1) == 272, "Offset mismatch for UPCGMetadataMathsSettings::InputSource1");
static_assert(offsetof(UPCGMetadataMathsSettings, InputSource2) == 320, "Offset mismatch for UPCGMetadataMathsSettings::InputSource2");
static_assert(offsetof(UPCGMetadataMathsSettings, InputSource3) == 368, "Offset mismatch for UPCGMetadataMathsSettings::InputSource3");

// /Script/PCG.PCGMetadataOperationSettings
// Kind: Class; super: PCGCopyAttributesSettings
class UPCGMetadataOperationSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Operation; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t bCopyAllAttributes; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCopyAllDomains; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00AE
    TMap<void*, void*> MetadataDomainsMapping; // 0x00B0 (Size: 0x10, Type: MapProperty)
    std::uint8_t InputSource[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputTarget[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataOperationSettings, Operation) == 168, "Offset mismatch for UPCGMetadataOperationSettings::Operation");
static_assert(offsetof(UPCGMetadataOperationSettings, bCopyAllAttributes) == 172, "Offset mismatch for UPCGMetadataOperationSettings::bCopyAllAttributes");
static_assert(offsetof(UPCGMetadataOperationSettings, bCopyAllDomains) == 173, "Offset mismatch for UPCGMetadataOperationSettings::bCopyAllDomains");
static_assert(offsetof(UPCGMetadataOperationSettings, MetadataDomainsMapping) == 176, "Offset mismatch for UPCGMetadataOperationSettings::MetadataDomainsMapping");
static_assert(offsetof(UPCGMetadataOperationSettings, InputSource) == 192, "Offset mismatch for UPCGMetadataOperationSettings::InputSource");
static_assert(offsetof(UPCGMetadataOperationSettings, OutputTarget) == 240, "Offset mismatch for UPCGMetadataOperationSettings::OutputTarget");

// /Script/PCG.PCGMetadataPartitionDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGMetadataPartitionDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGMetadataPartitionDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGMetadataPartitionDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGMetadataPartitionDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGMetadataPartitionDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGMetadataPartitionDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGMetadataPartitionDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGMetadataPartitionDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGMetadataPartitionDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGMetadataPartitionDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGMetadataPartitionDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGMetadataPartitionDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGMetadataPartitionDataInterface::ProducerKernel");
static_assert(offsetof(UPCGMetadataPartitionDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGMetadataPartitionDataInterface::ProducerSettings");

// /Script/PCG.PCGMetadataPartitionKernel
// Kind: Class; super: PCGComputeKernel
class UPCGMetadataPartitionKernel
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PCGKernelFlags; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t KernelIndex; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t SettingsPath[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NodePath[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bInitialized; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    TArray<void*> StaticLogEntries; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOverridableParams; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGMetadataPartitionKernel, PCGKernelFlags) == 56, "Offset mismatch for UPCGMetadataPartitionKernel::PCGKernelFlags");
static_assert(offsetof(UPCGMetadataPartitionKernel, KernelIndex) == 60, "Offset mismatch for UPCGMetadataPartitionKernel::KernelIndex");
static_assert(offsetof(UPCGMetadataPartitionKernel, SettingsPath) == 64, "Offset mismatch for UPCGMetadataPartitionKernel::SettingsPath");
static_assert(offsetof(UPCGMetadataPartitionKernel, NodePath) == 96, "Offset mismatch for UPCGMetadataPartitionKernel::NodePath");
static_assert(offsetof(UPCGMetadataPartitionKernel, bInitialized) == 128, "Offset mismatch for UPCGMetadataPartitionKernel::bInitialized");
static_assert(offsetof(UPCGMetadataPartitionKernel, StaticLogEntries) == 136, "Offset mismatch for UPCGMetadataPartitionKernel::StaticLogEntries");
static_assert(offsetof(UPCGMetadataPartitionKernel, CachedOverridableParams) == 152, "Offset mismatch for UPCGMetadataPartitionKernel::CachedOverridableParams");

// /Script/PCG.PCGMetadataPartitionSettings
// Kind: Class; super: PCGSettings
class UPCGMetadataPartitionSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> PartitionAttributeSelectors; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    FString PartitionAttributeNames; // 0x00B8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bTokenizeOnWhiteSpace; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAssignIndexPartition; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoNotPartition; // 0x00CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00CB
    FName PartitionIndexAttributeName; // 0x00CC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGMetadataPartitionSettings, PartitionAttributeSelectors) == 168, "Offset mismatch for UPCGMetadataPartitionSettings::PartitionAttributeSelectors");
static_assert(offsetof(UPCGMetadataPartitionSettings, PartitionAttributeNames) == 184, "Offset mismatch for UPCGMetadataPartitionSettings::PartitionAttributeNames");
static_assert(offsetof(UPCGMetadataPartitionSettings, bTokenizeOnWhiteSpace) == 200, "Offset mismatch for UPCGMetadataPartitionSettings::bTokenizeOnWhiteSpace");
static_assert(offsetof(UPCGMetadataPartitionSettings, bAssignIndexPartition) == 201, "Offset mismatch for UPCGMetadataPartitionSettings::bAssignIndexPartition");
static_assert(offsetof(UPCGMetadataPartitionSettings, bDoNotPartition) == 202, "Offset mismatch for UPCGMetadataPartitionSettings::bDoNotPartition");
static_assert(offsetof(UPCGMetadataPartitionSettings, PartitionIndexAttributeName) == 204, "Offset mismatch for UPCGMetadataPartitionSettings::PartitionIndexAttributeName");

// /Script/PCG.PCGMetadataRenameSettings
// Kind: Class; super: PCGSettings
class UPCGMetadataRenameSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AttributeToRename[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FName NewAttributeName; // 0x00D8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGMetadataRenameSettings, AttributeToRename) == 168, "Offset mismatch for UPCGMetadataRenameSettings::AttributeToRename");
static_assert(offsetof(UPCGMetadataRenameSettings, NewAttributeName) == 216, "Offset mismatch for UPCGMetadataRenameSettings::NewAttributeName");

// /Script/PCG.PCGMetadataRotatorSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataRotatorSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Operation; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    std::uint8_t InputSource1[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource3[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataRotatorSettings, Operation) == 264, "Offset mismatch for UPCGMetadataRotatorSettings::Operation");
static_assert(offsetof(UPCGMetadataRotatorSettings, InputSource1) == 272, "Offset mismatch for UPCGMetadataRotatorSettings::InputSource1");
static_assert(offsetof(UPCGMetadataRotatorSettings, InputSource2) == 320, "Offset mismatch for UPCGMetadataRotatorSettings::InputSource2");
static_assert(offsetof(UPCGMetadataRotatorSettings, InputSource3) == 368, "Offset mismatch for UPCGMetadataRotatorSettings::InputSource3");

// /Script/PCG.PCGMetadataSettingsBase
// Kind: Class; super: PCGSettings
class UPCGMetadataSettingsBase
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t OutputTarget[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    FName OutputDataFromPin; // 0x00E0 (Size: 0x8, Type: NameProperty)
    std::uint8_t DefaultValues[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataSettingsBase, OutputTarget) == 176, "Offset mismatch for UPCGMetadataSettingsBase::OutputTarget");
static_assert(offsetof(UPCGMetadataSettingsBase, OutputDataFromPin) == 224, "Offset mismatch for UPCGMetadataSettingsBase::OutputDataFromPin");
static_assert(offsetof(UPCGMetadataSettingsBase, DefaultValues) == 232, "Offset mismatch for UPCGMetadataSettingsBase::DefaultValues");

// /Script/PCG.PCGMetadataStringOpSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataStringOpSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Operation; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0109
    std::uint8_t SearchCase; // 0x010A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x010B
    std::uint8_t InputSource1[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource3[0x30]; // 0x0170 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutputTypeAsString; // 0x01A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGMetadataStringOpSettings, Operation) == 264, "Offset mismatch for UPCGMetadataStringOpSettings::Operation");
static_assert(offsetof(UPCGMetadataStringOpSettings, SearchCase) == 266, "Offset mismatch for UPCGMetadataStringOpSettings::SearchCase");
static_assert(offsetof(UPCGMetadataStringOpSettings, InputSource1) == 272, "Offset mismatch for UPCGMetadataStringOpSettings::InputSource1");
static_assert(offsetof(UPCGMetadataStringOpSettings, InputSource2) == 320, "Offset mismatch for UPCGMetadataStringOpSettings::InputSource2");
static_assert(offsetof(UPCGMetadataStringOpSettings, InputSource3) == 368, "Offset mismatch for UPCGMetadataStringOpSettings::InputSource3");
static_assert(offsetof(UPCGMetadataStringOpSettings, OutputTypeAsString) == 416, "Offset mismatch for UPCGMetadataStringOpSettings::OutputTypeAsString");

// /Script/PCG.PCGMetadataTransformSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataTransformSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Operation; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0109
    std::uint8_t TransformLerpMode; // 0x010A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x5]; // 0x010B
    std::uint8_t InputSource1[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource3[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataTransformSettings, Operation) == 264, "Offset mismatch for UPCGMetadataTransformSettings::Operation");
static_assert(offsetof(UPCGMetadataTransformSettings, TransformLerpMode) == 266, "Offset mismatch for UPCGMetadataTransformSettings::TransformLerpMode");
static_assert(offsetof(UPCGMetadataTransformSettings, InputSource1) == 272, "Offset mismatch for UPCGMetadataTransformSettings::InputSource1");
static_assert(offsetof(UPCGMetadataTransformSettings, InputSource2) == 320, "Offset mismatch for UPCGMetadataTransformSettings::InputSource2");
static_assert(offsetof(UPCGMetadataTransformSettings, InputSource3) == 368, "Offset mismatch for UPCGMetadataTransformSettings::InputSource3");

// /Script/PCG.PCGMetadataTrigSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataTrigSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Operation; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    std::uint8_t InputSource1[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataTrigSettings, Operation) == 264, "Offset mismatch for UPCGMetadataTrigSettings::Operation");
static_assert(offsetof(UPCGMetadataTrigSettings, InputSource1) == 272, "Offset mismatch for UPCGMetadataTrigSettings::InputSource1");
static_assert(offsetof(UPCGMetadataTrigSettings, InputSource2) == 320, "Offset mismatch for UPCGMetadataTrigSettings::InputSource2");

// /Script/PCG.PCGMetadataVectorSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGMetadataVectorSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Operation; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    std::uint8_t InputSource1[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource2[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputSource3[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMetadataVectorSettings, Operation) == 264, "Offset mismatch for UPCGMetadataVectorSettings::Operation");
static_assert(offsetof(UPCGMetadataVectorSettings, InputSource1) == 272, "Offset mismatch for UPCGMetadataVectorSettings::InputSource1");
static_assert(offsetof(UPCGMetadataVectorSettings, InputSource2) == 320, "Offset mismatch for UPCGMetadataVectorSettings::InputSource2");
static_assert(offsetof(UPCGMetadataVectorSettings, InputSource3) == 368, "Offset mismatch for UPCGMetadataVectorSettings::InputSource3");

// /Script/PCG.PCGMultiSelectSettings
// Kind: Class; super: PCGControlFlowSettings
class UPCGMultiSelectSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SelectionMode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t IntegerSelection; // 0x00AC (Size: 0x4, Type: IntProperty)
    TArray<void*> IntOptions; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    FString StringSelection; // 0x00C0 (Size: 0x10, Type: StrProperty)
    TArray<void*> StringOptions; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EnumSelection[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> EnumValueToPinLabelMapping; // 0x00F0 (Size: 0x10, Type: MapProperty)
    TArray<void*> CachedPinLabels; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGMultiSelectSettings, SelectionMode) == 168, "Offset mismatch for UPCGMultiSelectSettings::SelectionMode");
static_assert(offsetof(UPCGMultiSelectSettings, IntegerSelection) == 172, "Offset mismatch for UPCGMultiSelectSettings::IntegerSelection");
static_assert(offsetof(UPCGMultiSelectSettings, IntOptions) == 176, "Offset mismatch for UPCGMultiSelectSettings::IntOptions");
static_assert(offsetof(UPCGMultiSelectSettings, StringSelection) == 192, "Offset mismatch for UPCGMultiSelectSettings::StringSelection");
static_assert(offsetof(UPCGMultiSelectSettings, StringOptions) == 208, "Offset mismatch for UPCGMultiSelectSettings::StringOptions");
static_assert(offsetof(UPCGMultiSelectSettings, EnumSelection) == 224, "Offset mismatch for UPCGMultiSelectSettings::EnumSelection");
static_assert(offsetof(UPCGMultiSelectSettings, EnumValueToPinLabelMapping) == 240, "Offset mismatch for UPCGMultiSelectSettings::EnumValueToPinLabelMapping");
static_assert(offsetof(UPCGMultiSelectSettings, CachedPinLabels) == 256, "Offset mismatch for UPCGMultiSelectSettings::CachedPinLabels");

// /Script/PCG.PCGMutateSeedSettings
// Kind: Class; super: PCGSettings
class UPCGMutateSeedSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGMutateSeedSettings, Seed) == 80, "Offset mismatch for UPCGMutateSeedSettings::Seed");
static_assert(offsetof(UPCGMutateSeedSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGMutateSeedSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGMutateSeedSettings, bUseSeed) == 96, "Offset mismatch for UPCGMutateSeedSettings::bUseSeed");
static_assert(offsetof(UPCGMutateSeedSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGMutateSeedSettings::CachedOverridableParams");
static_assert(offsetof(UPCGMutateSeedSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGMutateSeedSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGMutateSeedSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGMutateSeedSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGMutateSeedSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGMutateSeedSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGMutateSeedSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGMutateSeedSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGMutateSeedSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGMutateSeedSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGMutateSeedSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGMutateSeedSettings::DebugBufferSize");

// /Script/PCG.PCGNamedRerouteBaseSettings
// Kind: Class; super: PCGRerouteSettings
class UPCGNamedRerouteBaseSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGNamedRerouteBaseSettings, Seed) == 80, "Offset mismatch for UPCGNamedRerouteBaseSettings::Seed");
static_assert(offsetof(UPCGNamedRerouteBaseSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGNamedRerouteBaseSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGNamedRerouteBaseSettings, bUseSeed) == 96, "Offset mismatch for UPCGNamedRerouteBaseSettings::bUseSeed");
static_assert(offsetof(UPCGNamedRerouteBaseSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGNamedRerouteBaseSettings::CachedOverridableParams");
static_assert(offsetof(UPCGNamedRerouteBaseSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGNamedRerouteBaseSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGNamedRerouteBaseSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGNamedRerouteBaseSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGNamedRerouteBaseSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGNamedRerouteBaseSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGNamedRerouteBaseSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGNamedRerouteBaseSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGNamedRerouteBaseSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGNamedRerouteBaseSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGNamedRerouteBaseSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGNamedRerouteBaseSettings::DebugBufferSize");

// /Script/PCG.PCGNamedRerouteDeclarationSettings
// Kind: Class; super: PCGNamedRerouteBaseSettings
class UPCGNamedRerouteDeclarationSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGNamedRerouteDeclarationSettings, Seed) == 80, "Offset mismatch for UPCGNamedRerouteDeclarationSettings::Seed");
static_assert(offsetof(UPCGNamedRerouteDeclarationSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGNamedRerouteDeclarationSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGNamedRerouteDeclarationSettings, bUseSeed) == 96, "Offset mismatch for UPCGNamedRerouteDeclarationSettings::bUseSeed");
static_assert(offsetof(UPCGNamedRerouteDeclarationSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGNamedRerouteDeclarationSettings::CachedOverridableParams");
static_assert(offsetof(UPCGNamedRerouteDeclarationSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGNamedRerouteDeclarationSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGNamedRerouteDeclarationSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGNamedRerouteDeclarationSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGNamedRerouteDeclarationSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGNamedRerouteDeclarationSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGNamedRerouteDeclarationSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGNamedRerouteDeclarationSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGNamedRerouteDeclarationSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGNamedRerouteDeclarationSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGNamedRerouteDeclarationSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGNamedRerouteDeclarationSettings::DebugBufferSize");

// /Script/PCG.PCGNamedRerouteUsageSettings
// Kind: Class; super: PCGNamedRerouteBaseSettings
class UPCGNamedRerouteUsageSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* Declaration; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGNamedRerouteUsageSettings, Declaration) == 168, "Offset mismatch for UPCGNamedRerouteUsageSettings::Declaration");

// /Script/PCG.PCGNode
// Kind: Class; super: Object
class UPCGNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName NodeTitle; // 0x0028 (Size: 0x8, Type: NameProperty)
    void* SettingsInterface; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OutboundNodes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InboundEdges; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutboundEdges; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputPins; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputPins; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGNode, NodeTitle) == 40, "Offset mismatch for UPCGNode::NodeTitle");
static_assert(offsetof(UPCGNode, SettingsInterface) == 48, "Offset mismatch for UPCGNode::SettingsInterface");
static_assert(offsetof(UPCGNode, OutboundNodes) == 56, "Offset mismatch for UPCGNode::OutboundNodes");
static_assert(offsetof(UPCGNode, InboundEdges) == 72, "Offset mismatch for UPCGNode::InboundEdges");
static_assert(offsetof(UPCGNode, OutboundEdges) == 88, "Offset mismatch for UPCGNode::OutboundEdges");
static_assert(offsetof(UPCGNode, InputPins) == 104, "Offset mismatch for UPCGNode::InputPins");
static_assert(offsetof(UPCGNode, OutputPins) == 120, "Offset mismatch for UPCGNode::OutputPins");

// /Script/PCG.PCGNormalToDensityDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGNormalToDensityDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGNormalToDensityDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGNormalToDensityDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGNormalToDensityDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGNormalToDensityDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGNormalToDensityDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGNormalToDensityDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGNormalToDensityDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGNormalToDensityDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGNormalToDensityDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGNormalToDensityDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGNormalToDensityDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGNormalToDensityDataInterface::ProducerKernel");
static_assert(offsetof(UPCGNormalToDensityDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGNormalToDensityDataInterface::ProducerSettings");

// /Script/PCG.PCGNormalToDensityKernel
// Kind: Class; super: PCGComputeKernel
class UPCGNormalToDensityKernel
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PCGKernelFlags; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t KernelIndex; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t SettingsPath[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NodePath[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bInitialized; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    TArray<void*> StaticLogEntries; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOverridableParams; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGNormalToDensityKernel, PCGKernelFlags) == 56, "Offset mismatch for UPCGNormalToDensityKernel::PCGKernelFlags");
static_assert(offsetof(UPCGNormalToDensityKernel, KernelIndex) == 60, "Offset mismatch for UPCGNormalToDensityKernel::KernelIndex");
static_assert(offsetof(UPCGNormalToDensityKernel, SettingsPath) == 64, "Offset mismatch for UPCGNormalToDensityKernel::SettingsPath");
static_assert(offsetof(UPCGNormalToDensityKernel, NodePath) == 96, "Offset mismatch for UPCGNormalToDensityKernel::NodePath");
static_assert(offsetof(UPCGNormalToDensityKernel, bInitialized) == 128, "Offset mismatch for UPCGNormalToDensityKernel::bInitialized");
static_assert(offsetof(UPCGNormalToDensityKernel, StaticLogEntries) == 136, "Offset mismatch for UPCGNormalToDensityKernel::StaticLogEntries");
static_assert(offsetof(UPCGNormalToDensityKernel, CachedOverridableParams) == 152, "Offset mismatch for UPCGNormalToDensityKernel::CachedOverridableParams");

// /Script/PCG.PCGNormalToDensityProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGNormalToDensityProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGNormalToDensityProvider, ProducerKernel) == 80, "Offset mismatch for UPCGNormalToDensityProvider::ProducerKernel");
static_assert(offsetof(UPCGNormalToDensityProvider, ProducerSettings) == 88, "Offset mismatch for UPCGNormalToDensityProvider::ProducerSettings");

// /Script/PCG.PCGNormalToDensitySettings
// Kind: Class; super: PCGSettings
class UPCGNormalToDensitySettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Normal[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    double Offset; // 0x00C0 (Size: 0x8, Type: DoubleProperty)
    double Strength; // 0x00C8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DensityMode; // 0x00D0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGNormalToDensitySettings, Normal) == 168, "Offset mismatch for UPCGNormalToDensitySettings::Normal");
static_assert(offsetof(UPCGNormalToDensitySettings, Offset) == 192, "Offset mismatch for UPCGNormalToDensitySettings::Offset");
static_assert(offsetof(UPCGNormalToDensitySettings, Strength) == 200, "Offset mismatch for UPCGNormalToDensitySettings::Strength");
static_assert(offsetof(UPCGNormalToDensitySettings, DensityMode) == 208, "Offset mismatch for UPCGNormalToDensitySettings::DensityMode");

// /Script/PCG.PCGNumberOfElementsSettings
// Kind: Class; super: PCGSettings
class UPCGNumberOfElementsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName OutputAttributeName; // 0x00A8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGNumberOfElementsSettings, OutputAttributeName) == 168, "Offset mismatch for UPCGNumberOfElementsSettings::OutputAttributeName");

// /Script/PCG.PCGOctreeQueries
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGOctreeQueries
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGOffsetPolygon2DSettings
// Kind: Class; super: PCGSettings
class UPCGOffsetPolygon2DSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Operation; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t bInheritMetadata; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseOffsetFromInput; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00AE
    std::uint8_t OffsetAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    double Offset; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t JoinType; // 0x00E8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGOffsetPolygon2DSettings, Operation) == 168, "Offset mismatch for UPCGOffsetPolygon2DSettings::Operation");
static_assert(offsetof(UPCGOffsetPolygon2DSettings, bInheritMetadata) == 172, "Offset mismatch for UPCGOffsetPolygon2DSettings::bInheritMetadata");
static_assert(offsetof(UPCGOffsetPolygon2DSettings, bUseOffsetFromInput) == 173, "Offset mismatch for UPCGOffsetPolygon2DSettings::bUseOffsetFromInput");
static_assert(offsetof(UPCGOffsetPolygon2DSettings, OffsetAttribute) == 176, "Offset mismatch for UPCGOffsetPolygon2DSettings::OffsetAttribute");
static_assert(offsetof(UPCGOffsetPolygon2DSettings, Offset) == 224, "Offset mismatch for UPCGOffsetPolygon2DSettings::Offset");
static_assert(offsetof(UPCGOffsetPolygon2DSettings, JoinType) == 232, "Offset mismatch for UPCGOffsetPolygon2DSettings::JoinType");

// /Script/PCG.PCGOffsetSplineSettings
// Kind: Class; super: PCGSettings
class UPCGOffsetSplineSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t DirectionAttribute[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MagnitudeAttribute[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGOffsetSplineSettings, DirectionAttribute) == 168, "Offset mismatch for UPCGOffsetSplineSettings::DirectionAttribute");
static_assert(offsetof(UPCGOffsetSplineSettings, MagnitudeAttribute) == 216, "Offset mismatch for UPCGOffsetSplineSettings::MagnitudeAttribute");

// /Script/PCG.PCGOuterIntersectionSettings
// Kind: Class; super: PCGSettingsWithDynamicInputs
class UPCGOuterIntersectionSettings
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t DensityFunction; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnorePinsWithNoInput; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepZeroDensityPoints; // 0x00BA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGOuterIntersectionSettings, DensityFunction) == 184, "Offset mismatch for UPCGOuterIntersectionSettings::DensityFunction");
static_assert(offsetof(UPCGOuterIntersectionSettings, bIgnorePinsWithNoInput) == 185, "Offset mismatch for UPCGOuterIntersectionSettings::bIgnorePinsWithNoInput");
static_assert(offsetof(UPCGOuterIntersectionSettings, bKeepZeroDensityPoints) == 186, "Offset mismatch for UPCGOuterIntersectionSettings::bKeepZeroDensityPoints");

// /Script/PCG.PCGParamData
// Kind: Class; super: PCGData
class UPCGParamData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TMap<void*, void*> NameMap; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasCachedLastSelector; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    std::uint8_t CachedLastSelector[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGParamData, NameMap) == 72, "Offset mismatch for UPCGParamData::NameMap");
static_assert(offsetof(UPCGParamData, bHasCachedLastSelector) == 88, "Offset mismatch for UPCGParamData::bHasCachedLastSelector");
static_assert(offsetof(UPCGParamData, CachedLastSelector) == 96, "Offset mismatch for UPCGParamData::CachedLastSelector");

// /Script/PCG.PCGParseStringSettings
// Kind: Class; super: PCGMetadataSettingsBase
class UPCGParseStringSettings
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t InputSource[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetType; // 0x0138 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGParseStringSettings, InputSource) == 264, "Offset mismatch for UPCGParseStringSettings::InputSource");
static_assert(offsetof(UPCGParseStringSettings, TargetType) == 312, "Offset mismatch for UPCGParseStringSettings::TargetType");

// /Script/PCG.PCGPartitionActor
// Kind: Class; super: PartitionActor
class UPCGPartitionActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t PCGGuid[0x20]; // 0x0270 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> LocalToOriginal; // 0x0290 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LoadedPreviewComponents; // 0x02A0 (Size: 0x10, Type: MapProperty)
    std::uint32_t PCGGridSize; // 0x02B0 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bUse2DGrid; // 0x02B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02B5
    std::uint32_t RuntimeGridDescriptorHash; // 0x02B8 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UPCGPartitionActor, PCGGuid) == 624, "Offset mismatch for UPCGPartitionActor::PCGGuid");
static_assert(offsetof(UPCGPartitionActor, LocalToOriginal) == 656, "Offset mismatch for UPCGPartitionActor::LocalToOriginal");
static_assert(offsetof(UPCGPartitionActor, LoadedPreviewComponents) == 672, "Offset mismatch for UPCGPartitionActor::LoadedPreviewComponents");
static_assert(offsetof(UPCGPartitionActor, PCGGridSize) == 688, "Offset mismatch for UPCGPartitionActor::PCGGridSize");
static_assert(offsetof(UPCGPartitionActor, bUse2DGrid) == 692, "Offset mismatch for UPCGPartitionActor::bUse2DGrid");
static_assert(offsetof(UPCGPartitionActor, RuntimeGridDescriptorHash) == 696, "Offset mismatch for UPCGPartitionActor::RuntimeGridDescriptorHash");

// /Script/PCG.PCGPartitionByActorDataLayersSettings
// Kind: Class; super: PCGSettings
class UPCGPartitionByActorDataLayersSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ActorReferenceAttribute[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t DataLayerReferenceAttribute[0x30]; // 0x00D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t IncludedDataLayers[0x48]; // 0x0108 (Size: 0x48, Type: StructProperty)
    std::uint8_t ExcludedDataLayers[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGPartitionByActorDataLayersSettings, ActorReferenceAttribute) == 168, "Offset mismatch for UPCGPartitionByActorDataLayersSettings::ActorReferenceAttribute");
static_assert(offsetof(UPCGPartitionByActorDataLayersSettings, DataLayerReferenceAttribute) == 216, "Offset mismatch for UPCGPartitionByActorDataLayersSettings::DataLayerReferenceAttribute");
static_assert(offsetof(UPCGPartitionByActorDataLayersSettings, IncludedDataLayers) == 264, "Offset mismatch for UPCGPartitionByActorDataLayersSettings::IncludedDataLayers");
static_assert(offsetof(UPCGPartitionByActorDataLayersSettings, ExcludedDataLayers) == 336, "Offset mismatch for UPCGPartitionByActorDataLayersSettings::ExcludedDataLayers");

// /Script/PCG.PCGPathfindingSettings
// Kind: Class; super: PCGSettings
class UPCGPathfindingSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    double SearchDistance; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bStartLocationsAsInput; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t StartLocationAttribute[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Start[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bGoalLocationsAsInput; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0101
    std::uint8_t GoalLocationAttribute[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t Goal[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t GoalMappingMode; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0151
    double HeuristicWeight; // 0x0158 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t CostFunctionMode; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0161
    std::uint8_t CostAttribute[0x30]; // 0x0168 (Size: 0x30, Type: StructProperty)
    double MaximumFitnessPenaltyFactor; // 0x0198 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUsePathTraces; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x01A1
    std::uint8_t PathTraceParams[0x88]; // 0x01A8 (Size: 0x88, Type: StructProperty)
    std::uint8_t bAcceptPartialPath; // 0x0230 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputAsSpline; // 0x0231 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SplineMode; // 0x0232 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCopyOriginatingPoints; // 0x0233 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGPathfindingSettings, SearchDistance) == 168, "Offset mismatch for UPCGPathfindingSettings::SearchDistance");
static_assert(offsetof(UPCGPathfindingSettings, bStartLocationsAsInput) == 176, "Offset mismatch for UPCGPathfindingSettings::bStartLocationsAsInput");
static_assert(offsetof(UPCGPathfindingSettings, StartLocationAttribute) == 184, "Offset mismatch for UPCGPathfindingSettings::StartLocationAttribute");
static_assert(offsetof(UPCGPathfindingSettings, Start) == 232, "Offset mismatch for UPCGPathfindingSettings::Start");
static_assert(offsetof(UPCGPathfindingSettings, bGoalLocationsAsInput) == 256, "Offset mismatch for UPCGPathfindingSettings::bGoalLocationsAsInput");
static_assert(offsetof(UPCGPathfindingSettings, GoalLocationAttribute) == 264, "Offset mismatch for UPCGPathfindingSettings::GoalLocationAttribute");
static_assert(offsetof(UPCGPathfindingSettings, Goal) == 312, "Offset mismatch for UPCGPathfindingSettings::Goal");
static_assert(offsetof(UPCGPathfindingSettings, GoalMappingMode) == 336, "Offset mismatch for UPCGPathfindingSettings::GoalMappingMode");
static_assert(offsetof(UPCGPathfindingSettings, HeuristicWeight) == 344, "Offset mismatch for UPCGPathfindingSettings::HeuristicWeight");
static_assert(offsetof(UPCGPathfindingSettings, CostFunctionMode) == 352, "Offset mismatch for UPCGPathfindingSettings::CostFunctionMode");
static_assert(offsetof(UPCGPathfindingSettings, CostAttribute) == 360, "Offset mismatch for UPCGPathfindingSettings::CostAttribute");
static_assert(offsetof(UPCGPathfindingSettings, MaximumFitnessPenaltyFactor) == 408, "Offset mismatch for UPCGPathfindingSettings::MaximumFitnessPenaltyFactor");
static_assert(offsetof(UPCGPathfindingSettings, bUsePathTraces) == 416, "Offset mismatch for UPCGPathfindingSettings::bUsePathTraces");
static_assert(offsetof(UPCGPathfindingSettings, PathTraceParams) == 424, "Offset mismatch for UPCGPathfindingSettings::PathTraceParams");
static_assert(offsetof(UPCGPathfindingSettings, bAcceptPartialPath) == 560, "Offset mismatch for UPCGPathfindingSettings::bAcceptPartialPath");
static_assert(offsetof(UPCGPathfindingSettings, bOutputAsSpline) == 561, "Offset mismatch for UPCGPathfindingSettings::bOutputAsSpline");
static_assert(offsetof(UPCGPathfindingSettings, SplineMode) == 562, "Offset mismatch for UPCGPathfindingSettings::SplineMode");
static_assert(offsetof(UPCGPathfindingSettings, bCopyOriginatingPoints) == 563, "Offset mismatch for UPCGPathfindingSettings::bCopyOriginatingPoints");

// /Script/PCG.PCGPin
// Kind: Class; super: Object
class UPCGPin
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Node; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FName Label; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> Edges; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Properties[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGPin, Node) == 40, "Offset mismatch for UPCGPin::Node");
static_assert(offsetof(UPCGPin, Label) == 48, "Offset mismatch for UPCGPin::Label");
static_assert(offsetof(UPCGPin, Edges) == 56, "Offset mismatch for UPCGPin::Edges");
static_assert(offsetof(UPCGPin, Properties) == 72, "Offset mismatch for UPCGPin::Properties");

// /Script/PCG.PCGPinPropertiesBlueprintHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGPinPropertiesBlueprintHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGPlatformSwitchSettings
// Kind: Class; super: PCGPlatformSwitchSettingsBase
class UPCGPlatformSwitchSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> PlatformOutputs; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CookedPlatform[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    FName CookedPlatformGroup; // 0x00BC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGPlatformSwitchSettings, PlatformOutputs) == 168, "Offset mismatch for UPCGPlatformSwitchSettings::PlatformOutputs");
static_assert(offsetof(UPCGPlatformSwitchSettings, CookedPlatform) == 184, "Offset mismatch for UPCGPlatformSwitchSettings::CookedPlatform");
static_assert(offsetof(UPCGPlatformSwitchSettings, CookedPlatformGroup) == 188, "Offset mismatch for UPCGPlatformSwitchSettings::CookedPlatformGroup");

// /Script/PCG.PCGPlatformSwitchSettingsBase
// Kind: Class; super: PCGControlFlowSettings
class UPCGPlatformSwitchSettingsBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGPlatformSwitchSettingsBase, Seed) == 80, "Offset mismatch for UPCGPlatformSwitchSettingsBase::Seed");
static_assert(offsetof(UPCGPlatformSwitchSettingsBase, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGPlatformSwitchSettingsBase::bExecutionDependencyRequired");
static_assert(offsetof(UPCGPlatformSwitchSettingsBase, bUseSeed) == 96, "Offset mismatch for UPCGPlatformSwitchSettingsBase::bUseSeed");
static_assert(offsetof(UPCGPlatformSwitchSettingsBase, CachedOverridableParams) == 128, "Offset mismatch for UPCGPlatformSwitchSettingsBase::CachedOverridableParams");
static_assert(offsetof(UPCGPlatformSwitchSettingsBase, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGPlatformSwitchSettingsBase::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGPlatformSwitchSettingsBase, bExecuteOnGPU) == 153, "Offset mismatch for UPCGPlatformSwitchSettingsBase::bExecuteOnGPU");
static_assert(offsetof(UPCGPlatformSwitchSettingsBase, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGPlatformSwitchSettingsBase::bDumpCookedHLSL");
static_assert(offsetof(UPCGPlatformSwitchSettingsBase, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGPlatformSwitchSettingsBase::bDumpDataDescriptions");
static_assert(offsetof(UPCGPlatformSwitchSettingsBase, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGPlatformSwitchSettingsBase::bPrintShaderDebugValues");
static_assert(offsetof(UPCGPlatformSwitchSettingsBase, DebugBufferSize) == 160, "Offset mismatch for UPCGPlatformSwitchSettingsBase::DebugBufferSize");

// /Script/PCG.PCGPointArrayData
// Kind: Class; super: PCGBasePointData
class UPCGPointArrayData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t PointArray[0x1A0]; // 0x00E0 (Size: 0x1A0, Type: StructProperty)
    void* ParentData; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint32_t InheritedProperties; // 0x0288 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UPCGPointArrayData, PointArray) == 224, "Offset mismatch for UPCGPointArrayData::PointArray");
static_assert(offsetof(UPCGPointArrayData, ParentData) == 640, "Offset mismatch for UPCGPointArrayData::ParentData");
static_assert(offsetof(UPCGPointArrayData, InheritedProperties) == 648, "Offset mismatch for UPCGPointArrayData::InheritedProperties");

// /Script/PCG.PCGPointData
// Kind: Class; super: PCGBasePointData
class UPCGPointData
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TArray<void*> Points; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGPointData, Points) == 216, "Offset mismatch for UPCGPointData::Points");

// /Script/PCG.PCGPointExtentsModifierSettings
// Kind: Class; super: PCGSettings
class UPCGPointExtentsModifierSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Extents[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Mode; // 0x00C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGPointExtentsModifierSettings, Extents) == 168, "Offset mismatch for UPCGPointExtentsModifierSettings::Extents");
static_assert(offsetof(UPCGPointExtentsModifierSettings, Mode) == 192, "Offset mismatch for UPCGPointExtentsModifierSettings::Mode");

// /Script/PCG.PCGPointFromMeshSettings
// Kind: Class; super: PCGSettings
class UPCGPointFromMeshSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mesh[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MeshPathAttributeName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSynchronousLoad; // 0x00CC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGPointFromMeshSettings, Mesh) == 168, "Offset mismatch for UPCGPointFromMeshSettings::Mesh");
static_assert(offsetof(UPCGPointFromMeshSettings, MeshPathAttributeName) == 200, "Offset mismatch for UPCGPointFromMeshSettings::MeshPathAttributeName");
static_assert(offsetof(UPCGPointFromMeshSettings, bSynchronousLoad) == 204, "Offset mismatch for UPCGPointFromMeshSettings::bSynchronousLoad");

// /Script/PCG.PCGPointMatchAndSetSettings
// Kind: Class; super: PCGSettings
class UPCGPointMatchAndSetSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* MatchAndSetType; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    void* MatchAndSetInstance; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SetTarget[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SetTargetType; // 0x00E8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGPointMatchAndSetSettings, MatchAndSetType) == 168, "Offset mismatch for UPCGPointMatchAndSetSettings::MatchAndSetType");
static_assert(offsetof(UPCGPointMatchAndSetSettings, MatchAndSetInstance) == 176, "Offset mismatch for UPCGPointMatchAndSetSettings::MatchAndSetInstance");
static_assert(offsetof(UPCGPointMatchAndSetSettings, SetTarget) == 184, "Offset mismatch for UPCGPointMatchAndSetSettings::SetTarget");
static_assert(offsetof(UPCGPointMatchAndSetSettings, SetTargetType) == 232, "Offset mismatch for UPCGPointMatchAndSetSettings::SetTargetType");

// /Script/PCG.PCGPointNeighborhoodSettings
// Kind: Class; super: PCGSettings
class UPCGPointNeighborhoodSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    double SearchDistance; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bSetDistanceToAttribute; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    std::uint8_t DistanceAttribute[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSetAveragePositionToAttribute; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B9
    std::uint8_t AveragePositionAttribute[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t SetDensity; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00C1
    std::uint8_t bSetAveragePosition; // 0x00C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetAverageColor; // 0x00C5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWeightedAverage; // 0x00C6 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGPointNeighborhoodSettings, SearchDistance) == 168, "Offset mismatch for UPCGPointNeighborhoodSettings::SearchDistance");
static_assert(offsetof(UPCGPointNeighborhoodSettings, bSetDistanceToAttribute) == 176, "Offset mismatch for UPCGPointNeighborhoodSettings::bSetDistanceToAttribute");
static_assert(offsetof(UPCGPointNeighborhoodSettings, DistanceAttribute) == 180, "Offset mismatch for UPCGPointNeighborhoodSettings::DistanceAttribute");
static_assert(offsetof(UPCGPointNeighborhoodSettings, bSetAveragePositionToAttribute) == 184, "Offset mismatch for UPCGPointNeighborhoodSettings::bSetAveragePositionToAttribute");
static_assert(offsetof(UPCGPointNeighborhoodSettings, AveragePositionAttribute) == 188, "Offset mismatch for UPCGPointNeighborhoodSettings::AveragePositionAttribute");
static_assert(offsetof(UPCGPointNeighborhoodSettings, SetDensity) == 192, "Offset mismatch for UPCGPointNeighborhoodSettings::SetDensity");
static_assert(offsetof(UPCGPointNeighborhoodSettings, bSetAveragePosition) == 196, "Offset mismatch for UPCGPointNeighborhoodSettings::bSetAveragePosition");
static_assert(offsetof(UPCGPointNeighborhoodSettings, bSetAverageColor) == 197, "Offset mismatch for UPCGPointNeighborhoodSettings::bSetAverageColor");
static_assert(offsetof(UPCGPointNeighborhoodSettings, bWeightedAverage) == 198, "Offset mismatch for UPCGPointNeighborhoodSettings::bWeightedAverage");

// /Script/PCG.PCGPolyLineData
// Kind: Class; super: PCGSpatialDataWithPointCache
class UPCGPolyLineData
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t PointDataCache[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t PointArrayDataCache[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGPolyLineData, PointDataCache) == 136, "Offset mismatch for UPCGPolyLineData::PointDataCache");
static_assert(offsetof(UPCGPolyLineData, PointArrayDataCache) == 176, "Offset mismatch for UPCGPolyLineData::PointArrayDataCache");

// /Script/PCG.PCGPolygon2DData
// Kind: Class; super: PCGPolyLineData
class UPCGPolygon2DData
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    TArray<void*> VertexEntryKeys; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0118
    std::uint8_t Transform[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGPolygon2DData, VertexEntryKeys) == 264, "Offset mismatch for UPCGPolygon2DData::VertexEntryKeys");
static_assert(offsetof(UPCGPolygon2DData, Transform) == 288, "Offset mismatch for UPCGPolygon2DData::Transform");

// /Script/PCG.PCGPolygon2DInteriorSurfaceData
// Kind: Class; super: PCGSurfaceData
class UPCGPolygon2DInteriorSurfaceData
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    void* Polygon; // 0x0180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGPolygon2DInteriorSurfaceData, Polygon) == 384, "Offset mismatch for UPCGPolygon2DInteriorSurfaceData::Polygon");

// /Script/PCG.PCGPolygon2DOperationSettings
// Kind: Class; super: PCGSettings
class UPCGPolygon2DOperationSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Operation; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MetadataMode; // 0x00A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00AA
    double SplineMaxDiscretizationError; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bQuiet; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGPolygon2DOperationSettings, Operation) == 168, "Offset mismatch for UPCGPolygon2DOperationSettings::Operation");
static_assert(offsetof(UPCGPolygon2DOperationSettings, MetadataMode) == 169, "Offset mismatch for UPCGPolygon2DOperationSettings::MetadataMode");
static_assert(offsetof(UPCGPolygon2DOperationSettings, SplineMaxDiscretizationError) == 176, "Offset mismatch for UPCGPolygon2DOperationSettings::SplineMaxDiscretizationError");
static_assert(offsetof(UPCGPolygon2DOperationSettings, bQuiet) == 184, "Offset mismatch for UPCGPolygon2DOperationSettings::bQuiet");

// /Script/PCG.PCGPostRayTraceDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGPostRayTraceDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGPostRayTraceDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGPostRayTraceDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGPostRayTraceDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGPostRayTraceDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGPostRayTraceDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGPostRayTraceDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGPostRayTraceDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGPostRayTraceDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGPostRayTraceDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGPostRayTraceDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGPostRayTraceDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGPostRayTraceDataInterface::ProducerKernel");
static_assert(offsetof(UPCGPostRayTraceDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGPostRayTraceDataInterface::ProducerSettings");

// /Script/PCG.PCGPostRayTraceDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGPostRayTraceDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGPostRayTraceDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGPostRayTraceDataProvider::ProducerKernel");
static_assert(offsetof(UPCGPostRayTraceDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGPostRayTraceDataProvider::ProducerSettings");

// /Script/PCG.PCGPostRayTraceKernel
// Kind: Class; super: PCGComputeKernel
class UPCGPostRayTraceKernel
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PCGKernelFlags; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t KernelIndex; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t SettingsPath[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NodePath[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bInitialized; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    TArray<void*> StaticLogEntries; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOverridableParams; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGPostRayTraceKernel, PCGKernelFlags) == 56, "Offset mismatch for UPCGPostRayTraceKernel::PCGKernelFlags");
static_assert(offsetof(UPCGPostRayTraceKernel, KernelIndex) == 60, "Offset mismatch for UPCGPostRayTraceKernel::KernelIndex");
static_assert(offsetof(UPCGPostRayTraceKernel, SettingsPath) == 64, "Offset mismatch for UPCGPostRayTraceKernel::SettingsPath");
static_assert(offsetof(UPCGPostRayTraceKernel, NodePath) == 96, "Offset mismatch for UPCGPostRayTraceKernel::NodePath");
static_assert(offsetof(UPCGPostRayTraceKernel, bInitialized) == 128, "Offset mismatch for UPCGPostRayTraceKernel::bInitialized");
static_assert(offsetof(UPCGPostRayTraceKernel, StaticLogEntries) == 136, "Offset mismatch for UPCGPostRayTraceKernel::StaticLogEntries");
static_assert(offsetof(UPCGPostRayTraceKernel, CachedOverridableParams) == 152, "Offset mismatch for UPCGPostRayTraceKernel::CachedOverridableParams");

// /Script/PCG.PCGPreRayTraceKernel
// Kind: Class; super: PCGComputeKernel
class UPCGPreRayTraceKernel
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PCGKernelFlags; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t KernelIndex; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t SettingsPath[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NodePath[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bInitialized; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    TArray<void*> StaticLogEntries; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOverridableParams; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGPreRayTraceKernel, PCGKernelFlags) == 56, "Offset mismatch for UPCGPreRayTraceKernel::PCGKernelFlags");
static_assert(offsetof(UPCGPreRayTraceKernel, KernelIndex) == 60, "Offset mismatch for UPCGPreRayTraceKernel::KernelIndex");
static_assert(offsetof(UPCGPreRayTraceKernel, SettingsPath) == 64, "Offset mismatch for UPCGPreRayTraceKernel::SettingsPath");
static_assert(offsetof(UPCGPreRayTraceKernel, NodePath) == 96, "Offset mismatch for UPCGPreRayTraceKernel::NodePath");
static_assert(offsetof(UPCGPreRayTraceKernel, bInitialized) == 128, "Offset mismatch for UPCGPreRayTraceKernel::bInitialized");
static_assert(offsetof(UPCGPreRayTraceKernel, StaticLogEntries) == 136, "Offset mismatch for UPCGPreRayTraceKernel::StaticLogEntries");
static_assert(offsetof(UPCGPreRayTraceKernel, CachedOverridableParams) == 152, "Offset mismatch for UPCGPreRayTraceKernel::CachedOverridableParams");

// /Script/PCG.PCGPrimitiveData
// Kind: Class; super: PCGSpatialDataWithPointCache
class UPCGPrimitiveData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t VoxelSize[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> Primitive; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CachedBounds[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t CachedStrictBounds[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGPrimitiveData, VoxelSize) == 224, "Offset mismatch for UPCGPrimitiveData::VoxelSize");
static_assert(offsetof(UPCGPrimitiveData, Primitive) == 248, "Offset mismatch for UPCGPrimitiveData::Primitive");
static_assert(offsetof(UPCGPrimitiveData, CachedBounds) == 256, "Offset mismatch for UPCGPrimitiveData::CachedBounds");
static_assert(offsetof(UPCGPrimitiveData, CachedStrictBounds) == 312, "Offset mismatch for UPCGPrimitiveData::CachedStrictBounds");

// /Script/PCG.PCGPrintElementSettings
// Kind: Class; super: PCGSettings
class UPCGPrintElementSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString PrintString; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t Verbosity; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    FString CustomPrefix; // 0x00C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bDisplayOnNode; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintPerComponent; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrefixWithOwner; // 0x00D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrefixWithComponent; // 0x00D3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrefixWithGraph; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrefixWithNode; // 0x00D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnablePrint; // 0x00D6 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGPrintElementSettings, PrintString) == 168, "Offset mismatch for UPCGPrintElementSettings::PrintString");
static_assert(offsetof(UPCGPrintElementSettings, Verbosity) == 184, "Offset mismatch for UPCGPrintElementSettings::Verbosity");
static_assert(offsetof(UPCGPrintElementSettings, CustomPrefix) == 192, "Offset mismatch for UPCGPrintElementSettings::CustomPrefix");
static_assert(offsetof(UPCGPrintElementSettings, bDisplayOnNode) == 208, "Offset mismatch for UPCGPrintElementSettings::bDisplayOnNode");
static_assert(offsetof(UPCGPrintElementSettings, bPrintPerComponent) == 209, "Offset mismatch for UPCGPrintElementSettings::bPrintPerComponent");
static_assert(offsetof(UPCGPrintElementSettings, bPrefixWithOwner) == 210, "Offset mismatch for UPCGPrintElementSettings::bPrefixWithOwner");
static_assert(offsetof(UPCGPrintElementSettings, bPrefixWithComponent) == 211, "Offset mismatch for UPCGPrintElementSettings::bPrefixWithComponent");
static_assert(offsetof(UPCGPrintElementSettings, bPrefixWithGraph) == 212, "Offset mismatch for UPCGPrintElementSettings::bPrefixWithGraph");
static_assert(offsetof(UPCGPrintElementSettings, bPrefixWithNode) == 213, "Offset mismatch for UPCGPrintElementSettings::bPrefixWithNode");
static_assert(offsetof(UPCGPrintElementSettings, bEnablePrint) == 214, "Offset mismatch for UPCGPrintElementSettings::bEnablePrint");

// /Script/PCG.PCGPrintGrammarSettings
// Kind: Class; super: PCGSettings
class UPCGPrintGrammarSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString Grammar; // 0x00A8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPCGPrintGrammarSettings, Grammar) == 168, "Offset mismatch for UPCGPrintGrammarSettings::Grammar");

// /Script/PCG.PCGProceduralISMComponent
// Kind: Class; super: StaticMeshComponent
class UPCGProceduralISMComponent
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    std::int32_t NumInstances; // 0x06B0 (Size: 0x4, Type: IntProperty)
    std::int32_t NumCustomDataFloats; // 0x06B4 (Size: 0x4, Type: IntProperty)
    std::uint8_t WorldBounds[0x38]; // 0x06B8 (Size: 0x38, Type: StructProperty)
    std::int32_t InstanceMinDrawDistance; // 0x06F0 (Size: 0x4, Type: IntProperty)
    std::int32_t InstanceStartCullDistance; // 0x06F4 (Size: 0x4, Type: IntProperty)
    std::int32_t InstanceEndCullDistance; // 0x06F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x06FC
    std::uint8_t LocalBounds[0x1]; // 0x0700 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGProceduralISMComponent, NumInstances) == 1712, "Offset mismatch for UPCGProceduralISMComponent::NumInstances");
static_assert(offsetof(UPCGProceduralISMComponent, NumCustomDataFloats) == 1716, "Offset mismatch for UPCGProceduralISMComponent::NumCustomDataFloats");
static_assert(offsetof(UPCGProceduralISMComponent, WorldBounds) == 1720, "Offset mismatch for UPCGProceduralISMComponent::WorldBounds");
static_assert(offsetof(UPCGProceduralISMComponent, InstanceMinDrawDistance) == 1776, "Offset mismatch for UPCGProceduralISMComponent::InstanceMinDrawDistance");
static_assert(offsetof(UPCGProceduralISMComponent, InstanceStartCullDistance) == 1780, "Offset mismatch for UPCGProceduralISMComponent::InstanceStartCullDistance");
static_assert(offsetof(UPCGProceduralISMComponent, InstanceEndCullDistance) == 1784, "Offset mismatch for UPCGProceduralISMComponent::InstanceEndCullDistance");
static_assert(offsetof(UPCGProceduralISMComponent, LocalBounds) == 1792, "Offset mismatch for UPCGProceduralISMComponent::LocalBounds");

// /Script/PCG.PCGProjectionData
// Kind: Class; super: PCGSpatialDataWithPointCache
class UPCGProjectionData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* Source; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CachedBounds[0x38]; // 0x00F0 (Size: 0x38, Type: StructProperty)
    std::uint8_t CachedStrictBounds[0x38]; // 0x0128 (Size: 0x38, Type: StructProperty)
    std::uint8_t ProjectionParams[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGProjectionData, Source) == 224, "Offset mismatch for UPCGProjectionData::Source");
static_assert(offsetof(UPCGProjectionData, Target) == 232, "Offset mismatch for UPCGProjectionData::Target");
static_assert(offsetof(UPCGProjectionData, CachedBounds) == 240, "Offset mismatch for UPCGProjectionData::CachedBounds");
static_assert(offsetof(UPCGProjectionData, CachedStrictBounds) == 296, "Offset mismatch for UPCGProjectionData::CachedStrictBounds");
static_assert(offsetof(UPCGProjectionData, ProjectionParams) == 352, "Offset mismatch for UPCGProjectionData::ProjectionParams");

// /Script/PCG.PCGProjectionSettings
// Kind: Class; super: PCGSettings
class UPCGProjectionSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ProjectionParams[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bForceCollapseToPoint; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepZeroDensityPoints; // 0x00C9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGProjectionSettings, ProjectionParams) == 168, "Offset mismatch for UPCGProjectionSettings::ProjectionParams");
static_assert(offsetof(UPCGProjectionSettings, bForceCollapseToPoint) == 200, "Offset mismatch for UPCGProjectionSettings::bForceCollapseToPoint");
static_assert(offsetof(UPCGProjectionSettings, bKeepZeroDensityPoints) == 201, "Offset mismatch for UPCGProjectionSettings::bKeepZeroDensityPoints");

// /Script/PCG.PCGProxyForGPUData
// Kind: Class; super: PCGData
class UPCGProxyForGPUData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::int32_t DataIndexInCollection; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGProxyForGPUData, DataIndexInCollection) == 72, "Offset mismatch for UPCGProxyForGPUData::DataIndexInCollection");

// /Script/PCG.PCGQualityBranchSettings
// Kind: Class; super: PCGControlFlowSettings
class UPCGQualityBranchSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bUseLowPin; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseMediumPin; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseHighPin; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseEpicPin; // 0x00AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCinematicPin; // 0x00AC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGQualityBranchSettings, bUseLowPin) == 168, "Offset mismatch for UPCGQualityBranchSettings::bUseLowPin");
static_assert(offsetof(UPCGQualityBranchSettings, bUseMediumPin) == 169, "Offset mismatch for UPCGQualityBranchSettings::bUseMediumPin");
static_assert(offsetof(UPCGQualityBranchSettings, bUseHighPin) == 170, "Offset mismatch for UPCGQualityBranchSettings::bUseHighPin");
static_assert(offsetof(UPCGQualityBranchSettings, bUseEpicPin) == 171, "Offset mismatch for UPCGQualityBranchSettings::bUseEpicPin");
static_assert(offsetof(UPCGQualityBranchSettings, bUseCinematicPin) == 172, "Offset mismatch for UPCGQualityBranchSettings::bUseCinematicPin");

// /Script/PCG.PCGQualitySelectSettings
// Kind: Class; super: PCGControlFlowSettings
class UPCGQualitySelectSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bUseLowPin; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseMediumPin; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseHighPin; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseEpicPin; // 0x00AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCinematicPin; // 0x00AC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGQualitySelectSettings, bUseLowPin) == 168, "Offset mismatch for UPCGQualitySelectSettings::bUseLowPin");
static_assert(offsetof(UPCGQualitySelectSettings, bUseMediumPin) == 169, "Offset mismatch for UPCGQualitySelectSettings::bUseMediumPin");
static_assert(offsetof(UPCGQualitySelectSettings, bUseHighPin) == 170, "Offset mismatch for UPCGQualitySelectSettings::bUseHighPin");
static_assert(offsetof(UPCGQualitySelectSettings, bUseEpicPin) == 171, "Offset mismatch for UPCGQualitySelectSettings::bUseEpicPin");
static_assert(offsetof(UPCGQualitySelectSettings, bUseCinematicPin) == 172, "Offset mismatch for UPCGQualitySelectSettings::bUseCinematicPin");

// /Script/PCG.PCGRandomChoiceSettings
// Kind: Class; super: PCGSettings
class UPCGRandomChoiceSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bFixedMode; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t FixedNumber; // 0x00AC (Size: 0x4, Type: IntProperty)
    float Ratio; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOutputDiscardedEntries; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasCustomSeedSource; // 0x00B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00B6
    std::uint8_t CustomSeedSource[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseFirstAttributeOnly; // 0x00E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGRandomChoiceSettings, bFixedMode) == 168, "Offset mismatch for UPCGRandomChoiceSettings::bFixedMode");
static_assert(offsetof(UPCGRandomChoiceSettings, FixedNumber) == 172, "Offset mismatch for UPCGRandomChoiceSettings::FixedNumber");
static_assert(offsetof(UPCGRandomChoiceSettings, Ratio) == 176, "Offset mismatch for UPCGRandomChoiceSettings::Ratio");
static_assert(offsetof(UPCGRandomChoiceSettings, bOutputDiscardedEntries) == 180, "Offset mismatch for UPCGRandomChoiceSettings::bOutputDiscardedEntries");
static_assert(offsetof(UPCGRandomChoiceSettings, bHasCustomSeedSource) == 181, "Offset mismatch for UPCGRandomChoiceSettings::bHasCustomSeedSource");
static_assert(offsetof(UPCGRandomChoiceSettings, CustomSeedSource) == 184, "Offset mismatch for UPCGRandomChoiceSettings::CustomSeedSource");
static_assert(offsetof(UPCGRandomChoiceSettings, bUseFirstAttributeOnly) == 232, "Offset mismatch for UPCGRandomChoiceSettings::bUseFirstAttributeOnly");

// /Script/PCG.PCGRawBufferData
// Kind: Class; super: PCGData
class UPCGRawBufferData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Data; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGRawBufferData, Data) == 72, "Offset mismatch for UPCGRawBufferData::Data");

// /Script/PCG.PCGRawBufferDataInterface
// Kind: Class; super: PCGExportableDataInterface
class UPCGRawBufferDataInterface
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t bRequiresZeroInitialization; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGRawBufferDataInterface, bRequiresZeroInitialization) == 136, "Offset mismatch for UPCGRawBufferDataInterface::bRequiresZeroInitialization");

// /Script/PCG.PCGRawBufferDataProvider
// Kind: Class; super: PCGExportableDataProvider
class UPCGRawBufferDataProvider
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* DataToUpload; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGRawBufferDataProvider, DataToUpload) == 168, "Offset mismatch for UPCGRawBufferDataProvider::DataToUpload");

// /Script/PCG.PCGRemoveActorsFromWorldSettings
// Kind: Class; super: PCGSettings
class UPCGRemoveActorsFromWorldSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ActorReferenceAttribute[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSilenceActorNotFoundWarnings; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGRemoveActorsFromWorldSettings, ActorReferenceAttribute) == 168, "Offset mismatch for UPCGRemoveActorsFromWorldSettings::ActorReferenceAttribute");
static_assert(offsetof(UPCGRemoveActorsFromWorldSettings, bSilenceActorNotFoundWarnings) == 216, "Offset mismatch for UPCGRemoveActorsFromWorldSettings::bSilenceActorNotFoundWarnings");

// /Script/PCG.PCGRemoveEmptyDataSettings
// Kind: Class; super: PCGSettings
class UPCGRemoveEmptyDataSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGRemoveEmptyDataSettings, Seed) == 80, "Offset mismatch for UPCGRemoveEmptyDataSettings::Seed");
static_assert(offsetof(UPCGRemoveEmptyDataSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGRemoveEmptyDataSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGRemoveEmptyDataSettings, bUseSeed) == 96, "Offset mismatch for UPCGRemoveEmptyDataSettings::bUseSeed");
static_assert(offsetof(UPCGRemoveEmptyDataSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGRemoveEmptyDataSettings::CachedOverridableParams");
static_assert(offsetof(UPCGRemoveEmptyDataSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGRemoveEmptyDataSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGRemoveEmptyDataSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGRemoveEmptyDataSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGRemoveEmptyDataSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGRemoveEmptyDataSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGRemoveEmptyDataSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGRemoveEmptyDataSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGRemoveEmptyDataSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGRemoveEmptyDataSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGRemoveEmptyDataSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGRemoveEmptyDataSettings::DebugBufferSize");

// /Script/PCG.PCGRenderTargetData
// Kind: Class; super: PCGTexture2DSingleBaseData
class UPCGRenderTargetData
{
public:
    std::uint8_t Pad_0000[0x250]; // 0x0000
    void* RenderTarget; // 0x0250 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOwnsRenderTarget; // 0x0258 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGRenderTargetData, RenderTarget) == 592, "Offset mismatch for UPCGRenderTargetData::RenderTarget");
static_assert(offsetof(UPCGRenderTargetData, bOwnsRenderTarget) == 600, "Offset mismatch for UPCGRenderTargetData::bOwnsRenderTarget");

// /Script/PCG.PCGReplaceDataByTagSettings
// Kind: Class; super: PCGSettings
class UPCGReplaceDataByTagSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> Tags; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGReplaceDataByTagSettings, Tags) == 168, "Offset mismatch for UPCGReplaceDataByTagSettings::Tags");

// /Script/PCG.PCGReplaceTagsSettings
// Kind: Class; super: PCGSettings
class UPCGReplaceTagsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString SelectedTags; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString ReplacedTags; // 0x00B8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bTokenizeOnWhiteSpace; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGReplaceTagsSettings, SelectedTags) == 168, "Offset mismatch for UPCGReplaceTagsSettings::SelectedTags");
static_assert(offsetof(UPCGReplaceTagsSettings, ReplacedTags) == 184, "Offset mismatch for UPCGReplaceTagsSettings::ReplacedTags");
static_assert(offsetof(UPCGReplaceTagsSettings, bTokenizeOnWhiteSpace) == 200, "Offset mismatch for UPCGReplaceTagsSettings::bTokenizeOnWhiteSpace");

// /Script/PCG.PCGRerouteSettings
// Kind: Class; super: PCGSettings
class UPCGRerouteSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGRerouteSettings, Seed) == 80, "Offset mismatch for UPCGRerouteSettings::Seed");
static_assert(offsetof(UPCGRerouteSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGRerouteSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGRerouteSettings, bUseSeed) == 96, "Offset mismatch for UPCGRerouteSettings::bUseSeed");
static_assert(offsetof(UPCGRerouteSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGRerouteSettings::CachedOverridableParams");
static_assert(offsetof(UPCGRerouteSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGRerouteSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGRerouteSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGRerouteSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGRerouteSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGRerouteSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGRerouteSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGRerouteSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGRerouteSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGRerouteSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGRerouteSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGRerouteSettings::DebugBufferSize");

// /Script/PCG.PCGResetPointCenterSettings
// Kind: Class; super: PCGSettings
class UPCGResetPointCenterSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t PointCenterLocation[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGResetPointCenterSettings, PointCenterLocation) == 168, "Offset mismatch for UPCGResetPointCenterSettings::PointCenterLocation");

// /Script/PCG.PCGResourceData
// Kind: Class; super: PCGData
class UPCGResourceData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint64_t UID; // 0x0028 (Size: 0x8, Type: UInt64Property)
    std::uint8_t Pad_0001[0x8]; // 0x0030
    void* MetaData; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGResourceData, UID) == 40, "Offset mismatch for UPCGResourceData::UID");
static_assert(offsetof(UPCGResourceData, MetaData) == 56, "Offset mismatch for UPCGResourceData::MetaData");

// /Script/PCG.PCGReverseSplineSettings
// Kind: Class; super: PCGSettings
class UPCGReverseSplineSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Operation; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t bFlipClockwiseComputationResult; // 0x00AC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGReverseSplineSettings, Operation) == 168, "Offset mismatch for UPCGReverseSplineSettings::Operation");
static_assert(offsetof(UPCGReverseSplineSettings, bFlipClockwiseComputationResult) == 172, "Offset mismatch for UPCGReverseSplineSettings::bFlipClockwiseComputationResult");

// /Script/PCG.PCGRuntimeGenExecutionSource
// Kind: Class; super: Object
class UPCGRuntimeGenExecutionSource
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t LocalSources[0x20]; // 0x0060 (Size: 0x20, Type: SetProperty)
    TMap<void*, void*> PerPinGeneratedOutput; // 0x0080 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0090
    std::uint8_t ManagedResourceContainer[0x40]; // 0x0098 (Size: 0x40, Type: StructProperty)
    void* SelfData; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGRuntimeGenExecutionSource, LocalSources) == 96, "Offset mismatch for UPCGRuntimeGenExecutionSource::LocalSources");
static_assert(offsetof(UPCGRuntimeGenExecutionSource, PerPinGeneratedOutput) == 128, "Offset mismatch for UPCGRuntimeGenExecutionSource::PerPinGeneratedOutput");
static_assert(offsetof(UPCGRuntimeGenExecutionSource, ManagedResourceContainer) == 152, "Offset mismatch for UPCGRuntimeGenExecutionSource::ManagedResourceContainer");
static_assert(offsetof(UPCGRuntimeGenExecutionSource, SelfData) == 216, "Offset mismatch for UPCGRuntimeGenExecutionSource::SelfData");

// /Script/PCG.PCGSMSpawnerAnalysisDataInterface
// Kind: Class; super: PCGCountUniqueAttributeValuesDataInterface
class UPCGSMSpawnerAnalysisDataInterface
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::int32_t BucketingCellExtent; // 0x0088 (Size: 0x4, Type: IntProperty)
    FName MeshAttributeName; // 0x008C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGSMSpawnerAnalysisDataInterface, BucketingCellExtent) == 136, "Offset mismatch for UPCGSMSpawnerAnalysisDataInterface::BucketingCellExtent");
static_assert(offsetof(UPCGSMSpawnerAnalysisDataInterface, MeshAttributeName) == 140, "Offset mismatch for UPCGSMSpawnerAnalysisDataInterface::MeshAttributeName");

// /Script/PCG.PCGSMSpawnerAnalysisDataProvider
// Kind: Class; super: PCGCountUniqueAttributeValuesDataProvider
class UPCGSMSpawnerAnalysisDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGSMSpawnerAnalysisDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGSMSpawnerAnalysisDataProvider::ProducerKernel");
static_assert(offsetof(UPCGSMSpawnerAnalysisDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGSMSpawnerAnalysisDataProvider::ProducerSettings");

// /Script/PCG.PCGSMSpawnerAnalysisKernel
// Kind: Class; super: PCGAttributeAnalysisKernelBase
class UPCGSMSpawnerAnalysisKernel
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t MeshAttributeName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::int32_t CullingCellExtent; // 0x00CC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGSMSpawnerAnalysisKernel, MeshAttributeName) == 200, "Offset mismatch for UPCGSMSpawnerAnalysisKernel::MeshAttributeName");
static_assert(offsetof(UPCGSMSpawnerAnalysisKernel, CullingCellExtent) == 204, "Offset mismatch for UPCGSMSpawnerAnalysisKernel::CullingCellExtent");

// /Script/PCG.PCGSampleTextureSettings
// Kind: Class; super: PCGSettings
class UPCGSampleTextureSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t TextureMappingMethod; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t UVCoordinatesAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TilingMode; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DensityMergeFunction; // 0x00E1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bClampOutputDensity; // 0x00E2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSampleTextureSettings, TextureMappingMethod) == 168, "Offset mismatch for UPCGSampleTextureSettings::TextureMappingMethod");
static_assert(offsetof(UPCGSampleTextureSettings, UVCoordinatesAttribute) == 176, "Offset mismatch for UPCGSampleTextureSettings::UVCoordinatesAttribute");
static_assert(offsetof(UPCGSampleTextureSettings, TilingMode) == 224, "Offset mismatch for UPCGSampleTextureSettings::TilingMode");
static_assert(offsetof(UPCGSampleTextureSettings, DensityMergeFunction) == 225, "Offset mismatch for UPCGSampleTextureSettings::DensityMergeFunction");
static_assert(offsetof(UPCGSampleTextureSettings, bClampOutputDensity) == 226, "Offset mismatch for UPCGSampleTextureSettings::bClampOutputDensity");

// /Script/PCG.PCGSanityCheckPointDataSettings
// Kind: Class; super: PCGSettings
class UPCGSanityCheckPointDataSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::int32_t MinPointCount; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPointCount; // 0x00AC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGSanityCheckPointDataSettings, MinPointCount) == 168, "Offset mismatch for UPCGSanityCheckPointDataSettings::MinPointCount");
static_assert(offsetof(UPCGSanityCheckPointDataSettings, MaxPointCount) == 172, "Offset mismatch for UPCGSanityCheckPointDataSettings::MaxPointCount");

// /Script/PCG.PCGSaveDataAssetSettings
// Kind: Class; super: PCGSettings
class UPCGSaveDataAssetSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> Pins; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    void* CustomDataCollectionExporterClass; // 0x00B8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Params[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    FString AssetDescription; // 0x00F0 (Size: 0x10, Type: StrProperty)
    std::uint8_t AssetColor[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSaveDataAssetSettings, Pins) == 168, "Offset mismatch for UPCGSaveDataAssetSettings::Pins");
static_assert(offsetof(UPCGSaveDataAssetSettings, CustomDataCollectionExporterClass) == 184, "Offset mismatch for UPCGSaveDataAssetSettings::CustomDataCollectionExporterClass");
static_assert(offsetof(UPCGSaveDataAssetSettings, Params) == 192, "Offset mismatch for UPCGSaveDataAssetSettings::Params");
static_assert(offsetof(UPCGSaveDataAssetSettings, AssetDescription) == 240, "Offset mismatch for UPCGSaveDataAssetSettings::AssetDescription");
static_assert(offsetof(UPCGSaveDataAssetSettings, AssetColor) == 256, "Offset mismatch for UPCGSaveDataAssetSettings::AssetColor");

// /Script/PCG.PCGSaveDataViewSettings
// Kind: Class; super: PCGSettings
class UPCGSaveDataViewSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* ConverterClass; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ConverterParameters[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t FilePath[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bOverwriteExistingFile; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSaveDataViewSettings, ConverterClass) == 168, "Offset mismatch for UPCGSaveDataViewSettings::ConverterClass");
static_assert(offsetof(UPCGSaveDataViewSettings, ConverterParameters) == 176, "Offset mismatch for UPCGSaveDataViewSettings::ConverterParameters");
static_assert(offsetof(UPCGSaveDataViewSettings, FilePath) == 192, "Offset mismatch for UPCGSaveDataViewSettings::FilePath");
static_assert(offsetof(UPCGSaveDataViewSettings, bOverwriteExistingFile) == 208, "Offset mismatch for UPCGSaveDataViewSettings::bOverwriteExistingFile");

// /Script/PCG.PCGSaveTextureToAssetSettings
// Kind: Class; super: PCGSettings
class UPCGSaveTextureToAssetSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ExporterParams[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSaveTextureToAssetSettings, ExporterParams) == 168, "Offset mismatch for UPCGSaveTextureToAssetSettings::ExporterParams");

// /Script/PCG.PCGSceneCaptureSettings
// Kind: Class; super: PCGSettings
class UPCGSceneCaptureSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t PixelFormat; // 0x00A8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CaptureSource; // 0x00A9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bOnlyCaptureContentMatchingIncludedTags; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00AB
    TArray<void*> IncludedTags; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludedTags; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bExcludePCGContent; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OrientationMode; // 0x00D1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00D2
    std::uint8_t CaptureLocation[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CaptureRotation[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t CaptureHalfExtents[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCaptureFromTopOfExtents; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0129
    float TexelSize; // 0x012C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Filter; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSkipReadbackToCPU; // 0x0131 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSceneCaptureSettings, PixelFormat) == 168, "Offset mismatch for UPCGSceneCaptureSettings::PixelFormat");
static_assert(offsetof(UPCGSceneCaptureSettings, CaptureSource) == 169, "Offset mismatch for UPCGSceneCaptureSettings::CaptureSource");
static_assert(offsetof(UPCGSceneCaptureSettings, bOnlyCaptureContentMatchingIncludedTags) == 170, "Offset mismatch for UPCGSceneCaptureSettings::bOnlyCaptureContentMatchingIncludedTags");
static_assert(offsetof(UPCGSceneCaptureSettings, IncludedTags) == 176, "Offset mismatch for UPCGSceneCaptureSettings::IncludedTags");
static_assert(offsetof(UPCGSceneCaptureSettings, ExcludedTags) == 192, "Offset mismatch for UPCGSceneCaptureSettings::ExcludedTags");
static_assert(offsetof(UPCGSceneCaptureSettings, bExcludePCGContent) == 208, "Offset mismatch for UPCGSceneCaptureSettings::bExcludePCGContent");
static_assert(offsetof(UPCGSceneCaptureSettings, OrientationMode) == 209, "Offset mismatch for UPCGSceneCaptureSettings::OrientationMode");
static_assert(offsetof(UPCGSceneCaptureSettings, CaptureLocation) == 216, "Offset mismatch for UPCGSceneCaptureSettings::CaptureLocation");
static_assert(offsetof(UPCGSceneCaptureSettings, CaptureRotation) == 240, "Offset mismatch for UPCGSceneCaptureSettings::CaptureRotation");
static_assert(offsetof(UPCGSceneCaptureSettings, CaptureHalfExtents) == 272, "Offset mismatch for UPCGSceneCaptureSettings::CaptureHalfExtents");
static_assert(offsetof(UPCGSceneCaptureSettings, bCaptureFromTopOfExtents) == 296, "Offset mismatch for UPCGSceneCaptureSettings::bCaptureFromTopOfExtents");
static_assert(offsetof(UPCGSceneCaptureSettings, TexelSize) == 300, "Offset mismatch for UPCGSceneCaptureSettings::TexelSize");
static_assert(offsetof(UPCGSceneCaptureSettings, Filter) == 304, "Offset mismatch for UPCGSceneCaptureSettings::Filter");
static_assert(offsetof(UPCGSceneCaptureSettings, bSkipReadbackToCPU) == 305, "Offset mismatch for UPCGSceneCaptureSettings::bSkipReadbackToCPU");

// /Script/PCG.PCGSchedulingPolicyBase
// Kind: Class; super: Object
class UPCGSchedulingPolicyBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GridStreamingDependencyMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> GridsDependentOnWorldStreaming; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WorldPartitionTargetGrids[0x10]; // 0x0040 (Size: 0x10, Type: SetProperty)
    TArray<void*> WorldPartitionTargetDataLayers; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSchedulingPolicyBase, GridStreamingDependencyMode) == 40, "Offset mismatch for UPCGSchedulingPolicyBase::GridStreamingDependencyMode");
static_assert(offsetof(UPCGSchedulingPolicyBase, GridsDependentOnWorldStreaming) == 48, "Offset mismatch for UPCGSchedulingPolicyBase::GridsDependentOnWorldStreaming");
static_assert(offsetof(UPCGSchedulingPolicyBase, WorldPartitionTargetGrids) == 64, "Offset mismatch for UPCGSchedulingPolicyBase::WorldPartitionTargetGrids");
static_assert(offsetof(UPCGSchedulingPolicyBase, WorldPartitionTargetDataLayers) == 80, "Offset mismatch for UPCGSchedulingPolicyBase::WorldPartitionTargetDataLayers");

// /Script/PCG.PCGSchedulingPolicyDistanceAndDirection
// Kind: Class; super: PCGSchedulingPolicyBase
class UPCGSchedulingPolicyDistanceAndDirection
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bUseDistance; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseDirection; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0072
    float DirectionWeight; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseFrustumCulling; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0079
    float GenerateBoundsModifier; // 0x007C (Size: 0x4, Type: FloatProperty)
    float CleanupBoundsModifier; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NetworkMode; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0085
    float DistanceWeight; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPCGSchedulingPolicyDistanceAndDirection, bUseDistance) == 112, "Offset mismatch for UPCGSchedulingPolicyDistanceAndDirection::bUseDistance");
static_assert(offsetof(UPCGSchedulingPolicyDistanceAndDirection, bUseDirection) == 113, "Offset mismatch for UPCGSchedulingPolicyDistanceAndDirection::bUseDirection");
static_assert(offsetof(UPCGSchedulingPolicyDistanceAndDirection, DirectionWeight) == 116, "Offset mismatch for UPCGSchedulingPolicyDistanceAndDirection::DirectionWeight");
static_assert(offsetof(UPCGSchedulingPolicyDistanceAndDirection, bUseFrustumCulling) == 120, "Offset mismatch for UPCGSchedulingPolicyDistanceAndDirection::bUseFrustumCulling");
static_assert(offsetof(UPCGSchedulingPolicyDistanceAndDirection, GenerateBoundsModifier) == 124, "Offset mismatch for UPCGSchedulingPolicyDistanceAndDirection::GenerateBoundsModifier");
static_assert(offsetof(UPCGSchedulingPolicyDistanceAndDirection, CleanupBoundsModifier) == 128, "Offset mismatch for UPCGSchedulingPolicyDistanceAndDirection::CleanupBoundsModifier");
static_assert(offsetof(UPCGSchedulingPolicyDistanceAndDirection, NetworkMode) == 132, "Offset mismatch for UPCGSchedulingPolicyDistanceAndDirection::NetworkMode");
static_assert(offsetof(UPCGSchedulingPolicyDistanceAndDirection, DistanceWeight) == 136, "Offset mismatch for UPCGSchedulingPolicyDistanceAndDirection::DistanceWeight");

// /Script/PCG.PCGSelectGrammarSettings
// Kind: Class; super: PCGSettings
class UPCGSelectGrammarSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bKeyAsAttribute; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t Key[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t KeyAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ComparedValueAttribute[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bCriteriaAsInput; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0111
    TArray<void*> Criteria; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCopyKeyForUnselectedGrammar; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemapCriteriaAttributeNames; // 0x0129 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x012A
    std::uint8_t CriteriaAttributeNames[0x14]; // 0x012C (Size: 0x14, Type: StructProperty)
    std::uint8_t OutputGrammarAttribute[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSelectGrammarSettings, bKeyAsAttribute) == 168, "Offset mismatch for UPCGSelectGrammarSettings::bKeyAsAttribute");
static_assert(offsetof(UPCGSelectGrammarSettings, Key) == 172, "Offset mismatch for UPCGSelectGrammarSettings::Key");
static_assert(offsetof(UPCGSelectGrammarSettings, KeyAttribute) == 176, "Offset mismatch for UPCGSelectGrammarSettings::KeyAttribute");
static_assert(offsetof(UPCGSelectGrammarSettings, ComparedValueAttribute) == 224, "Offset mismatch for UPCGSelectGrammarSettings::ComparedValueAttribute");
static_assert(offsetof(UPCGSelectGrammarSettings, bCriteriaAsInput) == 272, "Offset mismatch for UPCGSelectGrammarSettings::bCriteriaAsInput");
static_assert(offsetof(UPCGSelectGrammarSettings, Criteria) == 280, "Offset mismatch for UPCGSelectGrammarSettings::Criteria");
static_assert(offsetof(UPCGSelectGrammarSettings, bCopyKeyForUnselectedGrammar) == 296, "Offset mismatch for UPCGSelectGrammarSettings::bCopyKeyForUnselectedGrammar");
static_assert(offsetof(UPCGSelectGrammarSettings, bRemapCriteriaAttributeNames) == 297, "Offset mismatch for UPCGSelectGrammarSettings::bRemapCriteriaAttributeNames");
static_assert(offsetof(UPCGSelectGrammarSettings, CriteriaAttributeNames) == 300, "Offset mismatch for UPCGSelectGrammarSettings::CriteriaAttributeNames");
static_assert(offsetof(UPCGSelectGrammarSettings, OutputGrammarAttribute) == 320, "Offset mismatch for UPCGSelectGrammarSettings::OutputGrammarAttribute");

// /Script/PCG.PCGSelectPointsSettings
// Kind: Class; super: PCGSettings
class UPCGSelectPointsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    float Ratio; // 0x00A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPCGSelectPointsSettings, Ratio) == 168, "Offset mismatch for UPCGSelectPointsSettings::Ratio");

// /Script/PCG.PCGSelfPruningSettings
// Kind: Class; super: PCGSettings
class UPCGSelfPruningSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Parameters[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSelfPruningSettings, Parameters) == 168, "Offset mismatch for UPCGSelfPruningSettings::Parameters");

// /Script/PCG.PCGSettings
// Kind: Class; super: PCGSettingsInterface
class UPCGSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGSettings, Seed) == 80, "Offset mismatch for UPCGSettings::Seed");
static_assert(offsetof(UPCGSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGSettings, bUseSeed) == 96, "Offset mismatch for UPCGSettings::bUseSeed");
static_assert(offsetof(UPCGSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGSettings::CachedOverridableParams");
static_assert(offsetof(UPCGSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGSettings::DebugBufferSize");

// /Script/PCG.PCGSettingsDefaultValueProvider
// Kind: Class; super: Interface
class UPCGSettingsDefaultValueProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGSettingsHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UPCGSettingsHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGSettingsInlineConstant
// Kind: Class; super: PCGSettingsDefaultValueProvider
class UPCGSettingsInlineConstant
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGSettingsInstance
// Kind: Class; super: PCGSettingsInterface
class UPCGSettingsInstance
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* Settings; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGSettingsInstance, Settings) == 80, "Offset mismatch for UPCGSettingsInstance::Settings");

// /Script/PCG.PCGSettingsInterface
// Kind: Class; super: PCGData
class UPCGSettingsInterface
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDebug; // 0x0049 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSettingsInterface, bEnabled) == 72, "Offset mismatch for UPCGSettingsInterface::bEnabled");
static_assert(offsetof(UPCGSettingsInterface, bDebug) == 73, "Offset mismatch for UPCGSettingsInterface::bDebug");

// /Script/PCG.PCGSettingsWithDynamicInputs
// Kind: Class; super: PCGSettings
class UPCGSettingsWithDynamicInputs
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> DynamicInputPinProperties; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSettingsWithDynamicInputs, DynamicInputPinProperties) == 168, "Offset mismatch for UPCGSettingsWithDynamicInputs::DynamicInputPinProperties");

// /Script/PCG.PCGShaderFeatureLevelSwitchSettings
// Kind: Class; super: PCGPlatformSwitchSettingsBase
class UPCGShaderFeatureLevelSwitchSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> RHIFeatureLevelOutputs; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CookedFeatureLevel; // 0x00B8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGShaderFeatureLevelSwitchSettings, RHIFeatureLevelOutputs) == 168, "Offset mismatch for UPCGShaderFeatureLevelSwitchSettings::RHIFeatureLevelOutputs");
static_assert(offsetof(UPCGShaderFeatureLevelSwitchSettings, CookedFeatureLevel) == 184, "Offset mismatch for UPCGShaderFeatureLevelSwitchSettings::CookedFeatureLevel");

// /Script/PCG.PCGSkinnedMeshInstanceDataPackerBase
// Kind: Class; super: Object
class UPCGSkinnedMeshInstanceDataPackerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGSkinnedMeshInstanceDataPackerByAttribute
// Kind: Class; super: PCGSkinnedMeshInstanceDataPackerBase
class UPCGSkinnedMeshInstanceDataPackerByAttribute
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AttributeSelectors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSkinnedMeshInstanceDataPackerByAttribute, AttributeSelectors) == 40, "Offset mismatch for UPCGSkinnedMeshInstanceDataPackerByAttribute::AttributeSelectors");

// /Script/PCG.PCGSkinnedMeshInstanceDataPackerByRegex
// Kind: Class; super: PCGSkinnedMeshInstanceDataPackerBase
class UPCGSkinnedMeshInstanceDataPackerByRegex
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RegexPatterns; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSkinnedMeshInstanceDataPackerByRegex, RegexPatterns) == 40, "Offset mismatch for UPCGSkinnedMeshInstanceDataPackerByRegex::RegexPatterns");

// /Script/PCG.PCGSkinnedMeshSelector
// Kind: Class; super: Object
class UPCGSkinnedMeshSelector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MeshAttribute[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t TemplateDescriptor[0x2A0]; // 0x0058 (Size: 0x2A0, Type: StructProperty)
    std::uint8_t bUseAttributeMaterialOverrides; // 0x02F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02F9
    TArray<void*> MaterialOverrideAttributes; // 0x0300 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SequenceIndexAttribute[0x1]; // 0x0310 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSkinnedMeshSelector, MeshAttribute) == 40, "Offset mismatch for UPCGSkinnedMeshSelector::MeshAttribute");
static_assert(offsetof(UPCGSkinnedMeshSelector, TemplateDescriptor) == 88, "Offset mismatch for UPCGSkinnedMeshSelector::TemplateDescriptor");
static_assert(offsetof(UPCGSkinnedMeshSelector, bUseAttributeMaterialOverrides) == 760, "Offset mismatch for UPCGSkinnedMeshSelector::bUseAttributeMaterialOverrides");
static_assert(offsetof(UPCGSkinnedMeshSelector, MaterialOverrideAttributes) == 768, "Offset mismatch for UPCGSkinnedMeshSelector::MaterialOverrideAttributes");
static_assert(offsetof(UPCGSkinnedMeshSelector, SequenceIndexAttribute) == 784, "Offset mismatch for UPCGSkinnedMeshSelector::SequenceIndexAttribute");

// /Script/PCG.PCGSkinnedMeshSpawnerDataInterface
// Kind: Class; super: PCGMeshSpawnerDataInterfaceBase
class UPCGSkinnedMeshSpawnerDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGSkinnedMeshSpawnerDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGSkinnedMeshSpawnerDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGSkinnedMeshSpawnerDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGSkinnedMeshSpawnerDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGSkinnedMeshSpawnerDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGSkinnedMeshSpawnerDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGSkinnedMeshSpawnerDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGSkinnedMeshSpawnerDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGSkinnedMeshSpawnerDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGSkinnedMeshSpawnerDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGSkinnedMeshSpawnerDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGSkinnedMeshSpawnerDataInterface::ProducerKernel");
static_assert(offsetof(UPCGSkinnedMeshSpawnerDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGSkinnedMeshSpawnerDataInterface::ProducerSettings");

// /Script/PCG.PCGSkinnedMeshSpawnerDataProvider
// Kind: Class; super: PCGMeshSpawnerDataProviderBase
class UPCGSkinnedMeshSpawnerDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGSkinnedMeshSpawnerDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGSkinnedMeshSpawnerDataProvider::ProducerKernel");
static_assert(offsetof(UPCGSkinnedMeshSpawnerDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGSkinnedMeshSpawnerDataProvider::ProducerSettings");

// /Script/PCG.PCGSkinnedMeshSpawnerKernel
// Kind: Class; super: PCGComputeKernel
class UPCGSkinnedMeshSpawnerKernel
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t bProduceOutputPoints; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSkinnedMeshSpawnerKernel, bProduceOutputPoints) == 184, "Offset mismatch for UPCGSkinnedMeshSpawnerKernel::bProduceOutputPoints");

// /Script/PCG.PCGSkinnedMeshSpawnerSettings
// Kind: Class; super: PCGMeshSpawnerSettingsBase
class UPCGSkinnedMeshSpawnerSettings
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* MeshSelectorParameters; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SkinnedMeshComponentPropertyOverrides; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    void* InstanceDataPackerType; // 0x0130 (Size: 0x8, Type: ClassProperty)
    void* InstanceDataPackerParameters; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGSkinnedMeshSpawnerSettings, MeshSelectorParameters) == 280, "Offset mismatch for UPCGSkinnedMeshSpawnerSettings::MeshSelectorParameters");
static_assert(offsetof(UPCGSkinnedMeshSpawnerSettings, SkinnedMeshComponentPropertyOverrides) == 288, "Offset mismatch for UPCGSkinnedMeshSpawnerSettings::SkinnedMeshComponentPropertyOverrides");
static_assert(offsetof(UPCGSkinnedMeshSpawnerSettings, InstanceDataPackerType) == 304, "Offset mismatch for UPCGSkinnedMeshSpawnerSettings::InstanceDataPackerType");
static_assert(offsetof(UPCGSkinnedMeshSpawnerSettings, InstanceDataPackerParameters) == 312, "Offset mismatch for UPCGSkinnedMeshSpawnerSettings::InstanceDataPackerParameters");

// /Script/PCG.PCGSortAttributesSettings
// Kind: Class; super: PCGSettings
class UPCGSortAttributesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> SortAttributes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseStableSort; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSortAttributesSettings, SortAttributes) == 168, "Offset mismatch for UPCGSortAttributesSettings::SortAttributes");
static_assert(offsetof(UPCGSortAttributesSettings, bUseStableSort) == 184, "Offset mismatch for UPCGSortAttributesSettings::bUseStableSort");

// /Script/PCG.PCGSortTagsSettings
// Kind: Class; super: PCGSettings
class UPCGSortTagsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Tag[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t SortMethod; // 0x00AC (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGSortTagsSettings, Tag) == 168, "Offset mismatch for UPCGSortTagsSettings::Tag");
static_assert(offsetof(UPCGSortTagsSettings, SortMethod) == 172, "Offset mismatch for UPCGSortTagsSettings::SortMethod");

// /Script/PCG.PCGSpatialData
// Kind: Class; super: PCGData
class UPCGSpatialData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TWeakObjectPtr<void> TargetActor; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bKeepZeroDensityPoints; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasCachedLastSelector; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    std::uint8_t CachedLastSelector[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSpatialData, TargetActor) == 72, "Offset mismatch for UPCGSpatialData::TargetActor");
static_assert(offsetof(UPCGSpatialData, bKeepZeroDensityPoints) == 80, "Offset mismatch for UPCGSpatialData::bKeepZeroDensityPoints");
static_assert(offsetof(UPCGSpatialData, bHasCachedLastSelector) == 81, "Offset mismatch for UPCGSpatialData::bHasCachedLastSelector");
static_assert(offsetof(UPCGSpatialData, CachedLastSelector) == 88, "Offset mismatch for UPCGSpatialData::CachedLastSelector");

// /Script/PCG.PCGSpatialDataWithPointCache
// Kind: Class; super: PCGSpatialData
class UPCGSpatialDataWithPointCache
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t PointDataCache[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t PointArrayDataCache[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSpatialDataWithPointCache, PointDataCache) == 136, "Offset mismatch for UPCGSpatialDataWithPointCache::PointDataCache");
static_assert(offsetof(UPCGSpatialDataWithPointCache, PointArrayDataCache) == 176, "Offset mismatch for UPCGSpatialDataWithPointCache::PointArrayDataCache");

// /Script/PCG.PCGSpatialNoiseSettings
// Kind: Class; super: PCGSettings
class UPCGSpatialNoiseSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t EdgeMask2DMode; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00AD
    std::int32_t Iterations; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bTiling; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00B5
    float Brightness; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float Contrast; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t ValueTarget[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t RandomOffset[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0110 (Size: 0x60, Type: StructProperty)
    double VoronoiCellRandomness; // 0x0170 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t VoronoiCellIDTarget[0x30]; // 0x0178 (Size: 0x30, Type: StructProperty)
    std::uint8_t bVoronoiOrientSamplesToCellEdge; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x01A9
    std::int32_t TiledVoronoiResolution; // 0x01AC (Size: 0x4, Type: IntProperty)
    std::int32_t TiledVoronoiEdgeBlendCellCount; // 0x01B0 (Size: 0x4, Type: IntProperty)
    float EdgeBlendDistance; // 0x01B4 (Size: 0x4, Type: FloatProperty)
    float EdgeBlendCurveOffset; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    float EdgeBlendCurveIntensity; // 0x01BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceNoUseSeed; // 0x01C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSpatialNoiseSettings, Mode) == 168, "Offset mismatch for UPCGSpatialNoiseSettings::Mode");
static_assert(offsetof(UPCGSpatialNoiseSettings, EdgeMask2DMode) == 172, "Offset mismatch for UPCGSpatialNoiseSettings::EdgeMask2DMode");
static_assert(offsetof(UPCGSpatialNoiseSettings, Iterations) == 176, "Offset mismatch for UPCGSpatialNoiseSettings::Iterations");
static_assert(offsetof(UPCGSpatialNoiseSettings, bTiling) == 180, "Offset mismatch for UPCGSpatialNoiseSettings::bTiling");
static_assert(offsetof(UPCGSpatialNoiseSettings, Brightness) == 184, "Offset mismatch for UPCGSpatialNoiseSettings::Brightness");
static_assert(offsetof(UPCGSpatialNoiseSettings, Contrast) == 188, "Offset mismatch for UPCGSpatialNoiseSettings::Contrast");
static_assert(offsetof(UPCGSpatialNoiseSettings, ValueTarget) == 192, "Offset mismatch for UPCGSpatialNoiseSettings::ValueTarget");
static_assert(offsetof(UPCGSpatialNoiseSettings, RandomOffset) == 240, "Offset mismatch for UPCGSpatialNoiseSettings::RandomOffset");
static_assert(offsetof(UPCGSpatialNoiseSettings, Transform) == 272, "Offset mismatch for UPCGSpatialNoiseSettings::Transform");
static_assert(offsetof(UPCGSpatialNoiseSettings, VoronoiCellRandomness) == 368, "Offset mismatch for UPCGSpatialNoiseSettings::VoronoiCellRandomness");
static_assert(offsetof(UPCGSpatialNoiseSettings, VoronoiCellIDTarget) == 376, "Offset mismatch for UPCGSpatialNoiseSettings::VoronoiCellIDTarget");
static_assert(offsetof(UPCGSpatialNoiseSettings, bVoronoiOrientSamplesToCellEdge) == 424, "Offset mismatch for UPCGSpatialNoiseSettings::bVoronoiOrientSamplesToCellEdge");
static_assert(offsetof(UPCGSpatialNoiseSettings, TiledVoronoiResolution) == 428, "Offset mismatch for UPCGSpatialNoiseSettings::TiledVoronoiResolution");
static_assert(offsetof(UPCGSpatialNoiseSettings, TiledVoronoiEdgeBlendCellCount) == 432, "Offset mismatch for UPCGSpatialNoiseSettings::TiledVoronoiEdgeBlendCellCount");
static_assert(offsetof(UPCGSpatialNoiseSettings, EdgeBlendDistance) == 436, "Offset mismatch for UPCGSpatialNoiseSettings::EdgeBlendDistance");
static_assert(offsetof(UPCGSpatialNoiseSettings, EdgeBlendCurveOffset) == 440, "Offset mismatch for UPCGSpatialNoiseSettings::EdgeBlendCurveOffset");
static_assert(offsetof(UPCGSpatialNoiseSettings, EdgeBlendCurveIntensity) == 444, "Offset mismatch for UPCGSpatialNoiseSettings::EdgeBlendCurveIntensity");
static_assert(offsetof(UPCGSpatialNoiseSettings, bForceNoUseSeed) == 448, "Offset mismatch for UPCGSpatialNoiseSettings::bForceNoUseSeed");

// /Script/PCG.PCGSpawnActorNode
// Kind: Class; super: PCGBaseSubgraphNode
class UPCGSpawnActorNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName NodeTitle; // 0x0028 (Size: 0x8, Type: NameProperty)
    void* SettingsInterface; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OutboundNodes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InboundEdges; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutboundEdges; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputPins; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputPins; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSpawnActorNode, NodeTitle) == 40, "Offset mismatch for UPCGSpawnActorNode::NodeTitle");
static_assert(offsetof(UPCGSpawnActorNode, SettingsInterface) == 48, "Offset mismatch for UPCGSpawnActorNode::SettingsInterface");
static_assert(offsetof(UPCGSpawnActorNode, OutboundNodes) == 56, "Offset mismatch for UPCGSpawnActorNode::OutboundNodes");
static_assert(offsetof(UPCGSpawnActorNode, InboundEdges) == 72, "Offset mismatch for UPCGSpawnActorNode::InboundEdges");
static_assert(offsetof(UPCGSpawnActorNode, OutboundEdges) == 88, "Offset mismatch for UPCGSpawnActorNode::OutboundEdges");
static_assert(offsetof(UPCGSpawnActorNode, InputPins) == 104, "Offset mismatch for UPCGSpawnActorNode::InputPins");
static_assert(offsetof(UPCGSpawnActorNode, OutputPins) == 120, "Offset mismatch for UPCGSpawnActorNode::OutputPins");

// /Script/PCG.PCGSpawnActorSettings
// Kind: Class; super: PCGBaseSubgraphSettings
class UPCGSpawnActorSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> PostSpawnFunctionNames; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Option; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bForceDisableActorParsing; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t GenerationTrigger; // 0x00BA (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInheritActorTags; // 0x00BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00BC
    TArray<void*> TagsToAddOnActors; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    FString ActorLabel; // 0x00D0 (Size: 0x10, Type: StrProperty)
    void* TemplateActor; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SpawnedActorPropertyOverrideDescriptions; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RootActor[0x20]; // 0x00F8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AttachOptions; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0119
    std::uint8_t bSpawnByAttribute; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x011D
    std::uint8_t SpawnAttribute[0x4]; // 0x0120 (Size: 0x4, Type: NameProperty)
    std::uint8_t bWarnOnIdenticalSpawn; // 0x0124 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeleteActorsBeforeGeneration; // 0x0125 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0126
    std::uint8_t DataLayerSettings[0x110]; // 0x0128 (Size: 0x110, Type: StructProperty)
    std::uint8_t HLODSettings[0x10]; // 0x0238 (Size: 0x10, Type: StructProperty)
    void* TemplateActorClass; // 0x0248 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowTemplateActorEditing; // 0x0250 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSpawnActorSettings, PostSpawnFunctionNames) == 168, "Offset mismatch for UPCGSpawnActorSettings::PostSpawnFunctionNames");
static_assert(offsetof(UPCGSpawnActorSettings, Option) == 184, "Offset mismatch for UPCGSpawnActorSettings::Option");
static_assert(offsetof(UPCGSpawnActorSettings, bForceDisableActorParsing) == 185, "Offset mismatch for UPCGSpawnActorSettings::bForceDisableActorParsing");
static_assert(offsetof(UPCGSpawnActorSettings, GenerationTrigger) == 186, "Offset mismatch for UPCGSpawnActorSettings::GenerationTrigger");
static_assert(offsetof(UPCGSpawnActorSettings, bInheritActorTags) == 187, "Offset mismatch for UPCGSpawnActorSettings::bInheritActorTags");
static_assert(offsetof(UPCGSpawnActorSettings, TagsToAddOnActors) == 192, "Offset mismatch for UPCGSpawnActorSettings::TagsToAddOnActors");
static_assert(offsetof(UPCGSpawnActorSettings, ActorLabel) == 208, "Offset mismatch for UPCGSpawnActorSettings::ActorLabel");
static_assert(offsetof(UPCGSpawnActorSettings, TemplateActor) == 224, "Offset mismatch for UPCGSpawnActorSettings::TemplateActor");
static_assert(offsetof(UPCGSpawnActorSettings, SpawnedActorPropertyOverrideDescriptions) == 232, "Offset mismatch for UPCGSpawnActorSettings::SpawnedActorPropertyOverrideDescriptions");
static_assert(offsetof(UPCGSpawnActorSettings, RootActor) == 248, "Offset mismatch for UPCGSpawnActorSettings::RootActor");
static_assert(offsetof(UPCGSpawnActorSettings, AttachOptions) == 280, "Offset mismatch for UPCGSpawnActorSettings::AttachOptions");
static_assert(offsetof(UPCGSpawnActorSettings, bSpawnByAttribute) == 284, "Offset mismatch for UPCGSpawnActorSettings::bSpawnByAttribute");
static_assert(offsetof(UPCGSpawnActorSettings, SpawnAttribute) == 288, "Offset mismatch for UPCGSpawnActorSettings::SpawnAttribute");
static_assert(offsetof(UPCGSpawnActorSettings, bWarnOnIdenticalSpawn) == 292, "Offset mismatch for UPCGSpawnActorSettings::bWarnOnIdenticalSpawn");
static_assert(offsetof(UPCGSpawnActorSettings, bDeleteActorsBeforeGeneration) == 293, "Offset mismatch for UPCGSpawnActorSettings::bDeleteActorsBeforeGeneration");
static_assert(offsetof(UPCGSpawnActorSettings, DataLayerSettings) == 296, "Offset mismatch for UPCGSpawnActorSettings::DataLayerSettings");
static_assert(offsetof(UPCGSpawnActorSettings, HLODSettings) == 568, "Offset mismatch for UPCGSpawnActorSettings::HLODSettings");
static_assert(offsetof(UPCGSpawnActorSettings, TemplateActorClass) == 584, "Offset mismatch for UPCGSpawnActorSettings::TemplateActorClass");
static_assert(offsetof(UPCGSpawnActorSettings, bAllowTemplateActorEditing) == 592, "Offset mismatch for UPCGSpawnActorSettings::bAllowTemplateActorEditing");

// /Script/PCG.PCGSpawnSplineMeshSettings
// Kind: Class; super: PCGSettings
class UPCGSpawnSplineMeshSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SplineMeshDescriptor[0x260]; // 0x00A8 (Size: 0x260, Type: StructProperty)
    std::uint8_t SplineMeshParams[0xE8]; // 0x0308 (Size: 0xE8, Type: StructProperty)
    std::uint8_t TargetActor[0x20]; // 0x03F0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> TagsToAddOnComponents; // 0x0410 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PostProcessFunctionNames; // 0x0420 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSynchronousLoad; // 0x0430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0431
    TArray<void*> SplineMeshOverrideDescriptions; // 0x0438 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SplineMeshParamsOverride; // 0x0448 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SplineMeshComponentOverride; // 0x0458 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSpawnSplineMeshSettings, SplineMeshDescriptor) == 168, "Offset mismatch for UPCGSpawnSplineMeshSettings::SplineMeshDescriptor");
static_assert(offsetof(UPCGSpawnSplineMeshSettings, SplineMeshParams) == 776, "Offset mismatch for UPCGSpawnSplineMeshSettings::SplineMeshParams");
static_assert(offsetof(UPCGSpawnSplineMeshSettings, TargetActor) == 1008, "Offset mismatch for UPCGSpawnSplineMeshSettings::TargetActor");
static_assert(offsetof(UPCGSpawnSplineMeshSettings, TagsToAddOnComponents) == 1040, "Offset mismatch for UPCGSpawnSplineMeshSettings::TagsToAddOnComponents");
static_assert(offsetof(UPCGSpawnSplineMeshSettings, PostProcessFunctionNames) == 1056, "Offset mismatch for UPCGSpawnSplineMeshSettings::PostProcessFunctionNames");
static_assert(offsetof(UPCGSpawnSplineMeshSettings, bSynchronousLoad) == 1072, "Offset mismatch for UPCGSpawnSplineMeshSettings::bSynchronousLoad");
static_assert(offsetof(UPCGSpawnSplineMeshSettings, SplineMeshOverrideDescriptions) == 1080, "Offset mismatch for UPCGSpawnSplineMeshSettings::SplineMeshOverrideDescriptions");
static_assert(offsetof(UPCGSpawnSplineMeshSettings, SplineMeshParamsOverride) == 1096, "Offset mismatch for UPCGSpawnSplineMeshSettings::SplineMeshParamsOverride");
static_assert(offsetof(UPCGSpawnSplineMeshSettings, SplineMeshComponentOverride) == 1112, "Offset mismatch for UPCGSpawnSplineMeshSettings::SplineMeshComponentOverride");

// /Script/PCG.PCGSpawnSplineSettings
// Kind: Class; super: PCGSettings
class UPCGSpawnSplineSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* SplineComponent; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bSpawnComponentFromAttribute; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t SpawnComponentFromAttributeName[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetActor[0x20]; // 0x00E8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> TagsToAddOnComponents; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PostProcessFunctionNames; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyOverrideDescriptions; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOutputSplineComponentReference; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0139
    FName ComponentReferenceAttributeName; // 0x013C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGSpawnSplineSettings, SplineComponent) == 168, "Offset mismatch for UPCGSpawnSplineSettings::SplineComponent");
static_assert(offsetof(UPCGSpawnSplineSettings, bSpawnComponentFromAttribute) == 176, "Offset mismatch for UPCGSpawnSplineSettings::bSpawnComponentFromAttribute");
static_assert(offsetof(UPCGSpawnSplineSettings, SpawnComponentFromAttributeName) == 184, "Offset mismatch for UPCGSpawnSplineSettings::SpawnComponentFromAttributeName");
static_assert(offsetof(UPCGSpawnSplineSettings, TargetActor) == 232, "Offset mismatch for UPCGSpawnSplineSettings::TargetActor");
static_assert(offsetof(UPCGSpawnSplineSettings, TagsToAddOnComponents) == 264, "Offset mismatch for UPCGSpawnSplineSettings::TagsToAddOnComponents");
static_assert(offsetof(UPCGSpawnSplineSettings, PostProcessFunctionNames) == 280, "Offset mismatch for UPCGSpawnSplineSettings::PostProcessFunctionNames");
static_assert(offsetof(UPCGSpawnSplineSettings, PropertyOverrideDescriptions) == 296, "Offset mismatch for UPCGSpawnSplineSettings::PropertyOverrideDescriptions");
static_assert(offsetof(UPCGSpawnSplineSettings, bOutputSplineComponentReference) == 312, "Offset mismatch for UPCGSpawnSplineSettings::bOutputSplineComponentReference");
static_assert(offsetof(UPCGSpawnSplineSettings, ComponentReferenceAttributeName) == 316, "Offset mismatch for UPCGSpawnSplineSettings::ComponentReferenceAttributeName");

// /Script/PCG.PCGSplineData
// Kind: Class; super: PCGPolyLineData
class UPCGSplineData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t SplineStruct[0x1A0]; // 0x00E0 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t CachedBounds[0x1]; // 0x0280 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSplineData, SplineStruct) == 224, "Offset mismatch for UPCGSplineData::SplineStruct");
static_assert(offsetof(UPCGSplineData, CachedBounds) == 640, "Offset mismatch for UPCGSplineData::CachedBounds");

// /Script/PCG.PCGSplineInteriorSurfaceData
// Kind: Class; super: PCGSurfaceData
class UPCGSplineInteriorSurfaceData
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t SplineStruct[0x1A0]; // 0x0180 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t CachedBounds[0x38]; // 0x0320 (Size: 0x38, Type: StructProperty)
    TArray<void*> CachedSplinePoints; // 0x0358 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedSplinePoints2D; // 0x0368 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSplineInteriorSurfaceData, SplineStruct) == 384, "Offset mismatch for UPCGSplineInteriorSurfaceData::SplineStruct");
static_assert(offsetof(UPCGSplineInteriorSurfaceData, CachedBounds) == 800, "Offset mismatch for UPCGSplineInteriorSurfaceData::CachedBounds");
static_assert(offsetof(UPCGSplineInteriorSurfaceData, CachedSplinePoints) == 856, "Offset mismatch for UPCGSplineInteriorSurfaceData::CachedSplinePoints");
static_assert(offsetof(UPCGSplineInteriorSurfaceData, CachedSplinePoints2D) == 872, "Offset mismatch for UPCGSplineInteriorSurfaceData::CachedSplinePoints2D");

// /Script/PCG.PCGSplineIntersectionSettings
// Kind: Class; super: PCGSettings
class UPCGSplineIntersectionSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Type; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Output; // 0x00A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOutputSplineIndices; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00AB
    std::uint8_t OriginatingSplineIndexAttribute[0x30]; // 0x00B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t IntersectingSplineIndexAttribute[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bOutputComplexIntersections; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputIntersectionType; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0112
    std::uint8_t IntersectionTypeAttribute[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    double DistanceThreshold; // 0x0148 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUseBestFitBox; // 0x0150 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSplineIntersectionSettings, Type) == 168, "Offset mismatch for UPCGSplineIntersectionSettings::Type");
static_assert(offsetof(UPCGSplineIntersectionSettings, Output) == 169, "Offset mismatch for UPCGSplineIntersectionSettings::Output");
static_assert(offsetof(UPCGSplineIntersectionSettings, bOutputSplineIndices) == 170, "Offset mismatch for UPCGSplineIntersectionSettings::bOutputSplineIndices");
static_assert(offsetof(UPCGSplineIntersectionSettings, OriginatingSplineIndexAttribute) == 176, "Offset mismatch for UPCGSplineIntersectionSettings::OriginatingSplineIndexAttribute");
static_assert(offsetof(UPCGSplineIntersectionSettings, IntersectingSplineIndexAttribute) == 224, "Offset mismatch for UPCGSplineIntersectionSettings::IntersectingSplineIndexAttribute");
static_assert(offsetof(UPCGSplineIntersectionSettings, bOutputComplexIntersections) == 272, "Offset mismatch for UPCGSplineIntersectionSettings::bOutputComplexIntersections");
static_assert(offsetof(UPCGSplineIntersectionSettings, bOutputIntersectionType) == 273, "Offset mismatch for UPCGSplineIntersectionSettings::bOutputIntersectionType");
static_assert(offsetof(UPCGSplineIntersectionSettings, IntersectionTypeAttribute) == 280, "Offset mismatch for UPCGSplineIntersectionSettings::IntersectionTypeAttribute");
static_assert(offsetof(UPCGSplineIntersectionSettings, DistanceThreshold) == 328, "Offset mismatch for UPCGSplineIntersectionSettings::DistanceThreshold");
static_assert(offsetof(UPCGSplineIntersectionSettings, bUseBestFitBox) == 336, "Offset mismatch for UPCGSplineIntersectionSettings::bUseBestFitBox");

// /Script/PCG.PCGSplineProjectionData
// Kind: Class; super: PCGProjectionData
class UPCGSplineProjectionData
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t ProjectedPosition[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSplineProjectionData, ProjectedPosition) == 384, "Offset mismatch for UPCGSplineProjectionData::ProjectedPosition");

// /Script/PCG.PCGSplineSamplerSettings
// Kind: Class; super: PCGSettings
class UPCGSplineSamplerSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SamplerParams[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSplineSamplerSettings, SamplerParams) == 168, "Offset mismatch for UPCGSplineSamplerSettings::SamplerParams");

// /Script/PCG.PCGSplineToSegmentSettings
// Kind: Class; super: PCGSettings
class UPCGSplineToSegmentSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bExtractTangents; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExtractAngles; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExtractConnectivityInfo; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExtractClockwiseInfo; // 0x00AB (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSplineToSegmentSettings, bExtractTangents) == 168, "Offset mismatch for UPCGSplineToSegmentSettings::bExtractTangents");
static_assert(offsetof(UPCGSplineToSegmentSettings, bExtractAngles) == 169, "Offset mismatch for UPCGSplineToSegmentSettings::bExtractAngles");
static_assert(offsetof(UPCGSplineToSegmentSettings, bExtractConnectivityInfo) == 170, "Offset mismatch for UPCGSplineToSegmentSettings::bExtractConnectivityInfo");
static_assert(offsetof(UPCGSplineToSegmentSettings, bExtractClockwiseInfo) == 171, "Offset mismatch for UPCGSplineToSegmentSettings::bExtractClockwiseInfo");

// /Script/PCG.PCGSplitPointsSettings
// Kind: Class; super: PCGSettings
class UPCGSplitPointsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    float SplitPosition; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SplitAxis; // 0x00AC (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGSplitPointsSettings, SplitPosition) == 168, "Offset mismatch for UPCGSplitPointsSettings::SplitPosition");
static_assert(offsetof(UPCGSplitPointsSettings, SplitAxis) == 172, "Offset mismatch for UPCGSplitPointsSettings::SplitAxis");

// /Script/PCG.PCGSplitSplinesSettings
// Kind: Class; super: PCGSettings
class UPCGSplitSplinesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t CutDataBehavior; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00AD
    std::uint8_t bUseConstant; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00B1
    double Constant; // 0x00B8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Attribute[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bShouldOutputOriginatingSplineIndex; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x00F1
    std::uint8_t OutputOriginatingSplineIndex[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSplitSplinesSettings, Mode) == 168, "Offset mismatch for UPCGSplitSplinesSettings::Mode");
static_assert(offsetof(UPCGSplitSplinesSettings, CutDataBehavior) == 172, "Offset mismatch for UPCGSplitSplinesSettings::CutDataBehavior");
static_assert(offsetof(UPCGSplitSplinesSettings, bUseConstant) == 176, "Offset mismatch for UPCGSplitSplinesSettings::bUseConstant");
static_assert(offsetof(UPCGSplitSplinesSettings, Constant) == 184, "Offset mismatch for UPCGSplitSplinesSettings::Constant");
static_assert(offsetof(UPCGSplitSplinesSettings, Attribute) == 192, "Offset mismatch for UPCGSplitSplinesSettings::Attribute");
static_assert(offsetof(UPCGSplitSplinesSettings, bShouldOutputOriginatingSplineIndex) == 240, "Offset mismatch for UPCGSplitSplinesSettings::bShouldOutputOriginatingSplineIndex");
static_assert(offsetof(UPCGSplitSplinesSettings, OutputOriginatingSplineIndex) == 248, "Offset mismatch for UPCGSplitSplinesSettings::OutputOriginatingSplineIndex");

// /Script/PCG.PCGStaticMeshDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGStaticMeshDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGStaticMeshDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGStaticMeshDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGStaticMeshDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGStaticMeshDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGStaticMeshDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGStaticMeshDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGStaticMeshDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGStaticMeshDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGStaticMeshDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGStaticMeshDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGStaticMeshDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGStaticMeshDataInterface::ProducerKernel");
static_assert(offsetof(UPCGStaticMeshDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGStaticMeshDataInterface::ProducerSettings");

// /Script/PCG.PCGStaticMeshDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGStaticMeshDataProvider
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* LoadedStaticMesh; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGStaticMeshDataProvider, LoadedStaticMesh) == 104, "Offset mismatch for UPCGStaticMeshDataProvider::LoadedStaticMesh");

// /Script/PCG.PCGStaticMeshResourceData
// Kind: Class; super: PCGResourceData
class UPCGStaticMeshResourceData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TSoftObjectPtr<void> StaticMesh; // 0x0048 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGStaticMeshResourceData, StaticMesh) == 72, "Offset mismatch for UPCGStaticMeshResourceData::StaticMesh");

// /Script/PCG.PCGStaticMeshSpawnerDataInterface
// Kind: Class; super: PCGMeshSpawnerDataInterfaceBase
class UPCGStaticMeshSpawnerDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGStaticMeshSpawnerDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGStaticMeshSpawnerDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGStaticMeshSpawnerDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGStaticMeshSpawnerDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGStaticMeshSpawnerDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGStaticMeshSpawnerDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGStaticMeshSpawnerDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGStaticMeshSpawnerDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGStaticMeshSpawnerDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGStaticMeshSpawnerDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGStaticMeshSpawnerDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGStaticMeshSpawnerDataInterface::ProducerKernel");
static_assert(offsetof(UPCGStaticMeshSpawnerDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGStaticMeshSpawnerDataInterface::ProducerSettings");

// /Script/PCG.PCGStaticMeshSpawnerDataProvider
// Kind: Class; super: PCGMeshSpawnerDataProviderBase
class UPCGStaticMeshSpawnerDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGStaticMeshSpawnerDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGStaticMeshSpawnerDataProvider::ProducerKernel");
static_assert(offsetof(UPCGStaticMeshSpawnerDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGStaticMeshSpawnerDataProvider::ProducerSettings");

// /Script/PCG.PCGStaticMeshSpawnerKernel
// Kind: Class; super: PCGComputeKernel
class UPCGStaticMeshSpawnerKernel
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t bUseRawInstanceCountsBuffer; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProduceOutputPoints; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00BA
    std::int32_t TargetCullingGridSize; // 0x00BC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGStaticMeshSpawnerKernel, bUseRawInstanceCountsBuffer) == 184, "Offset mismatch for UPCGStaticMeshSpawnerKernel::bUseRawInstanceCountsBuffer");
static_assert(offsetof(UPCGStaticMeshSpawnerKernel, bProduceOutputPoints) == 185, "Offset mismatch for UPCGStaticMeshSpawnerKernel::bProduceOutputPoints");
static_assert(offsetof(UPCGStaticMeshSpawnerKernel, TargetCullingGridSize) == 188, "Offset mismatch for UPCGStaticMeshSpawnerKernel::TargetCullingGridSize");

// /Script/PCG.PCGStaticMeshSpawnerSettings
// Kind: Class; super: PCGMeshSpawnerSettingsBase
class UPCGStaticMeshSpawnerSettings
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* MeshSelectorType; // 0x0118 (Size: 0x8, Type: ClassProperty)
    void* MeshSelectorParameters; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAllowDescriptorChanges; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMergeDifferentDataInSameInstancedComponents; // 0x0129 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetupCullingCells; // 0x012A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x012B
    std::int32_t CullingCellSize; // 0x012C (Size: 0x4, Type: IntProperty)
    TArray<void*> StaticMeshComponentPropertyOverrides; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    void* InstanceDataPackerType; // 0x0140 (Size: 0x8, Type: ClassProperty)
    void* InstanceDataPackerParameters; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGStaticMeshSpawnerSettings, MeshSelectorType) == 280, "Offset mismatch for UPCGStaticMeshSpawnerSettings::MeshSelectorType");
static_assert(offsetof(UPCGStaticMeshSpawnerSettings, MeshSelectorParameters) == 288, "Offset mismatch for UPCGStaticMeshSpawnerSettings::MeshSelectorParameters");
static_assert(offsetof(UPCGStaticMeshSpawnerSettings, bAllowDescriptorChanges) == 296, "Offset mismatch for UPCGStaticMeshSpawnerSettings::bAllowDescriptorChanges");
static_assert(offsetof(UPCGStaticMeshSpawnerSettings, bAllowMergeDifferentDataInSameInstancedComponents) == 297, "Offset mismatch for UPCGStaticMeshSpawnerSettings::bAllowMergeDifferentDataInSameInstancedComponents");
static_assert(offsetof(UPCGStaticMeshSpawnerSettings, bSetupCullingCells) == 298, "Offset mismatch for UPCGStaticMeshSpawnerSettings::bSetupCullingCells");
static_assert(offsetof(UPCGStaticMeshSpawnerSettings, CullingCellSize) == 300, "Offset mismatch for UPCGStaticMeshSpawnerSettings::CullingCellSize");
static_assert(offsetof(UPCGStaticMeshSpawnerSettings, StaticMeshComponentPropertyOverrides) == 304, "Offset mismatch for UPCGStaticMeshSpawnerSettings::StaticMeshComponentPropertyOverrides");
static_assert(offsetof(UPCGStaticMeshSpawnerSettings, InstanceDataPackerType) == 320, "Offset mismatch for UPCGStaticMeshSpawnerSettings::InstanceDataPackerType");
static_assert(offsetof(UPCGStaticMeshSpawnerSettings, InstanceDataPackerParameters) == 328, "Offset mismatch for UPCGStaticMeshSpawnerSettings::InstanceDataPackerParameters");

// /Script/PCG.PCGSubdivideSegmentSettings
// Kind: Class; super: PCGSubdivisionBaseSettings
class UPCGSubdivideSegmentSettings
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    std::uint8_t SubdivisionAxis; // 0x0178 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0179
    std::uint8_t bFlipAxisAsAttribute; // 0x017C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldFlipAxis; // 0x017D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x017E
    std::uint8_t FlipAxisAttribute[0x30]; // 0x0180 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAcceptIncompleteSubdivision; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputModuleIndexAttribute; // 0x01B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x01B2
    std::uint8_t ModuleIndexAttributeName[0x4]; // 0x01B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputExtremityAttributes; // 0x01B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x01B9
    std::uint8_t IsFirstAttributeName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    std::uint8_t IsFinalAttributeName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputExtremityNeighborIndexAttribute; // 0x01C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x01C5
    std::uint8_t ExtremityNeighborIndexAttributeName[0x4]; // 0x01C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSilenceGrammarDoesNotFitErrors; // 0x01CC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSubdivideSegmentSettings, SubdivisionAxis) == 376, "Offset mismatch for UPCGSubdivideSegmentSettings::SubdivisionAxis");
static_assert(offsetof(UPCGSubdivideSegmentSettings, bFlipAxisAsAttribute) == 380, "Offset mismatch for UPCGSubdivideSegmentSettings::bFlipAxisAsAttribute");
static_assert(offsetof(UPCGSubdivideSegmentSettings, bShouldFlipAxis) == 381, "Offset mismatch for UPCGSubdivideSegmentSettings::bShouldFlipAxis");
static_assert(offsetof(UPCGSubdivideSegmentSettings, FlipAxisAttribute) == 384, "Offset mismatch for UPCGSubdivideSegmentSettings::FlipAxisAttribute");
static_assert(offsetof(UPCGSubdivideSegmentSettings, bAcceptIncompleteSubdivision) == 432, "Offset mismatch for UPCGSubdivideSegmentSettings::bAcceptIncompleteSubdivision");
static_assert(offsetof(UPCGSubdivideSegmentSettings, bOutputModuleIndexAttribute) == 433, "Offset mismatch for UPCGSubdivideSegmentSettings::bOutputModuleIndexAttribute");
static_assert(offsetof(UPCGSubdivideSegmentSettings, ModuleIndexAttributeName) == 436, "Offset mismatch for UPCGSubdivideSegmentSettings::ModuleIndexAttributeName");
static_assert(offsetof(UPCGSubdivideSegmentSettings, bOutputExtremityAttributes) == 440, "Offset mismatch for UPCGSubdivideSegmentSettings::bOutputExtremityAttributes");
static_assert(offsetof(UPCGSubdivideSegmentSettings, IsFirstAttributeName) == 444, "Offset mismatch for UPCGSubdivideSegmentSettings::IsFirstAttributeName");
static_assert(offsetof(UPCGSubdivideSegmentSettings, IsFinalAttributeName) == 448, "Offset mismatch for UPCGSubdivideSegmentSettings::IsFinalAttributeName");
static_assert(offsetof(UPCGSubdivideSegmentSettings, bOutputExtremityNeighborIndexAttribute) == 452, "Offset mismatch for UPCGSubdivideSegmentSettings::bOutputExtremityNeighborIndexAttribute");
static_assert(offsetof(UPCGSubdivideSegmentSettings, ExtremityNeighborIndexAttributeName) == 456, "Offset mismatch for UPCGSubdivideSegmentSettings::ExtremityNeighborIndexAttributeName");
static_assert(offsetof(UPCGSubdivideSegmentSettings, bSilenceGrammarDoesNotFitErrors) == 460, "Offset mismatch for UPCGSubdivideSegmentSettings::bSilenceGrammarDoesNotFitErrors");

// /Script/PCG.PCGSubdivideSplineSettings
// Kind: Class; super: PCGSubdivisionBaseSettings
class UPCGSubdivideSplineSettings
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    std::uint8_t bAcceptIncompleteSubdivision; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bModuleHeightAsAttribute; // 0x0179 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x017A
    double ModuleHeight; // 0x0180 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ModuleHeightAttribute[0x30]; // 0x0188 (Size: 0x30, Type: StructProperty)
    std::uint8_t bOutputModuleIndexAttribute; // 0x01B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01B9
    std::uint8_t ModuleIndexAttributeName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputExtremityAttributes; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x01C1
    std::uint8_t IsFirstAttributeName[0x4]; // 0x01C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsFinalAttributeName[0x4]; // 0x01C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSilenceGrammarDoesNotFitErrors; // 0x01CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCenterBounds; // 0x01CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x01CE
    double ModulePlacementTolerance; // 0x01D0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPCGSubdivideSplineSettings, bAcceptIncompleteSubdivision) == 376, "Offset mismatch for UPCGSubdivideSplineSettings::bAcceptIncompleteSubdivision");
static_assert(offsetof(UPCGSubdivideSplineSettings, bModuleHeightAsAttribute) == 377, "Offset mismatch for UPCGSubdivideSplineSettings::bModuleHeightAsAttribute");
static_assert(offsetof(UPCGSubdivideSplineSettings, ModuleHeight) == 384, "Offset mismatch for UPCGSubdivideSplineSettings::ModuleHeight");
static_assert(offsetof(UPCGSubdivideSplineSettings, ModuleHeightAttribute) == 392, "Offset mismatch for UPCGSubdivideSplineSettings::ModuleHeightAttribute");
static_assert(offsetof(UPCGSubdivideSplineSettings, bOutputModuleIndexAttribute) == 440, "Offset mismatch for UPCGSubdivideSplineSettings::bOutputModuleIndexAttribute");
static_assert(offsetof(UPCGSubdivideSplineSettings, ModuleIndexAttributeName) == 444, "Offset mismatch for UPCGSubdivideSplineSettings::ModuleIndexAttributeName");
static_assert(offsetof(UPCGSubdivideSplineSettings, bOutputExtremityAttributes) == 448, "Offset mismatch for UPCGSubdivideSplineSettings::bOutputExtremityAttributes");
static_assert(offsetof(UPCGSubdivideSplineSettings, IsFirstAttributeName) == 452, "Offset mismatch for UPCGSubdivideSplineSettings::IsFirstAttributeName");
static_assert(offsetof(UPCGSubdivideSplineSettings, IsFinalAttributeName) == 456, "Offset mismatch for UPCGSubdivideSplineSettings::IsFinalAttributeName");
static_assert(offsetof(UPCGSubdivideSplineSettings, bSilenceGrammarDoesNotFitErrors) == 460, "Offset mismatch for UPCGSubdivideSplineSettings::bSilenceGrammarDoesNotFitErrors");
static_assert(offsetof(UPCGSubdivideSplineSettings, bCenterBounds) == 461, "Offset mismatch for UPCGSubdivideSplineSettings::bCenterBounds");
static_assert(offsetof(UPCGSubdivideSplineSettings, ModulePlacementTolerance) == 464, "Offset mismatch for UPCGSubdivideSplineSettings::ModulePlacementTolerance");

// /Script/PCG.PCGSubdivisionBaseSettings
// Kind: Class; super: PCGSettings
class UPCGSubdivisionBaseSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bModuleInfoAsInput; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    TArray<void*> ModulesInfo; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ModulesInfoAttributeNames[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t GrammarSelection[0x48]; // 0x00D8 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUseSeedAttribute; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0121
    std::uint8_t SeedAttribute[0x30]; // 0x0128 (Size: 0x30, Type: StructProperty)
    std::uint8_t bForwardAttributesFromModulesInfo; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0159
    std::uint8_t SymbolAttributeName[0x4]; // 0x015C (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputSizeAttribute; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0161
    std::uint8_t SizeAttributeName[0x4]; // 0x0164 (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputScalableAttribute; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0169
    std::uint8_t ScalableAttributeName[0x4]; // 0x016C (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputDebugColorAttribute; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0171
    FName DebugColorAttributeName; // 0x0174 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGSubdivisionBaseSettings, bModuleInfoAsInput) == 168, "Offset mismatch for UPCGSubdivisionBaseSettings::bModuleInfoAsInput");
static_assert(offsetof(UPCGSubdivisionBaseSettings, ModulesInfo) == 176, "Offset mismatch for UPCGSubdivisionBaseSettings::ModulesInfo");
static_assert(offsetof(UPCGSubdivisionBaseSettings, ModulesInfoAttributeNames) == 192, "Offset mismatch for UPCGSubdivisionBaseSettings::ModulesInfoAttributeNames");
static_assert(offsetof(UPCGSubdivisionBaseSettings, GrammarSelection) == 216, "Offset mismatch for UPCGSubdivisionBaseSettings::GrammarSelection");
static_assert(offsetof(UPCGSubdivisionBaseSettings, bUseSeedAttribute) == 288, "Offset mismatch for UPCGSubdivisionBaseSettings::bUseSeedAttribute");
static_assert(offsetof(UPCGSubdivisionBaseSettings, SeedAttribute) == 296, "Offset mismatch for UPCGSubdivisionBaseSettings::SeedAttribute");
static_assert(offsetof(UPCGSubdivisionBaseSettings, bForwardAttributesFromModulesInfo) == 344, "Offset mismatch for UPCGSubdivisionBaseSettings::bForwardAttributesFromModulesInfo");
static_assert(offsetof(UPCGSubdivisionBaseSettings, SymbolAttributeName) == 348, "Offset mismatch for UPCGSubdivisionBaseSettings::SymbolAttributeName");
static_assert(offsetof(UPCGSubdivisionBaseSettings, bOutputSizeAttribute) == 352, "Offset mismatch for UPCGSubdivisionBaseSettings::bOutputSizeAttribute");
static_assert(offsetof(UPCGSubdivisionBaseSettings, SizeAttributeName) == 356, "Offset mismatch for UPCGSubdivisionBaseSettings::SizeAttributeName");
static_assert(offsetof(UPCGSubdivisionBaseSettings, bOutputScalableAttribute) == 360, "Offset mismatch for UPCGSubdivisionBaseSettings::bOutputScalableAttribute");
static_assert(offsetof(UPCGSubdivisionBaseSettings, ScalableAttributeName) == 364, "Offset mismatch for UPCGSubdivisionBaseSettings::ScalableAttributeName");
static_assert(offsetof(UPCGSubdivisionBaseSettings, bOutputDebugColorAttribute) == 368, "Offset mismatch for UPCGSubdivisionBaseSettings::bOutputDebugColorAttribute");
static_assert(offsetof(UPCGSubdivisionBaseSettings, DebugColorAttributeName) == 372, "Offset mismatch for UPCGSubdivisionBaseSettings::DebugColorAttributeName");

// /Script/PCG.PCGSubgraphNode
// Kind: Class; super: PCGBaseSubgraphNode
class UPCGSubgraphNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName NodeTitle; // 0x0028 (Size: 0x8, Type: NameProperty)
    void* SettingsInterface; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OutboundNodes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InboundEdges; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutboundEdges; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputPins; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputPins; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSubgraphNode, NodeTitle) == 40, "Offset mismatch for UPCGSubgraphNode::NodeTitle");
static_assert(offsetof(UPCGSubgraphNode, SettingsInterface) == 48, "Offset mismatch for UPCGSubgraphNode::SettingsInterface");
static_assert(offsetof(UPCGSubgraphNode, OutboundNodes) == 56, "Offset mismatch for UPCGSubgraphNode::OutboundNodes");
static_assert(offsetof(UPCGSubgraphNode, InboundEdges) == 72, "Offset mismatch for UPCGSubgraphNode::InboundEdges");
static_assert(offsetof(UPCGSubgraphNode, OutboundEdges) == 88, "Offset mismatch for UPCGSubgraphNode::OutboundEdges");
static_assert(offsetof(UPCGSubgraphNode, InputPins) == 104, "Offset mismatch for UPCGSubgraphNode::InputPins");
static_assert(offsetof(UPCGSubgraphNode, OutputPins) == 120, "Offset mismatch for UPCGSubgraphNode::OutputPins");

// /Script/PCG.PCGSubgraphSettings
// Kind: Class; super: PCGBaseSubgraphSettings
class UPCGSubgraphSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* SubgraphInstance; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* SubgraphOverride; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGSubgraphSettings, SubgraphInstance) == 168, "Offset mismatch for UPCGSubgraphSettings::SubgraphInstance");
static_assert(offsetof(UPCGSubgraphSettings, SubgraphOverride) == 176, "Offset mismatch for UPCGSubgraphSettings::SubgraphOverride");

// /Script/PCG.PCGSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UPCGSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCG.PCGSurfaceData
// Kind: Class; super: PCGSpatialDataWithPointCache
class UPCGSurfaceData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x00E0 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalBounds[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSurfaceData, Transform) == 224, "Offset mismatch for UPCGSurfaceData::Transform");
static_assert(offsetof(UPCGSurfaceData, LocalBounds) == 320, "Offset mismatch for UPCGSurfaceData::LocalBounds");

// /Script/PCG.PCGSurfaceSamplerSettings
// Kind: Class; super: PCGSettings
class UPCGSurfaceSamplerSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    float PointsPerSquaredMeter; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00AC
    std::uint8_t PointExtents[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    float Looseness; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUnbounded; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyDensityToPoints; // 0x00CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00CE
    float PointSteepness; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseLegacyGridCreationMethod; // 0x00D4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGSurfaceSamplerSettings, PointsPerSquaredMeter) == 168, "Offset mismatch for UPCGSurfaceSamplerSettings::PointsPerSquaredMeter");
static_assert(offsetof(UPCGSurfaceSamplerSettings, PointExtents) == 176, "Offset mismatch for UPCGSurfaceSamplerSettings::PointExtents");
static_assert(offsetof(UPCGSurfaceSamplerSettings, Looseness) == 200, "Offset mismatch for UPCGSurfaceSamplerSettings::Looseness");
static_assert(offsetof(UPCGSurfaceSamplerSettings, bUnbounded) == 204, "Offset mismatch for UPCGSurfaceSamplerSettings::bUnbounded");
static_assert(offsetof(UPCGSurfaceSamplerSettings, bApplyDensityToPoints) == 205, "Offset mismatch for UPCGSurfaceSamplerSettings::bApplyDensityToPoints");
static_assert(offsetof(UPCGSurfaceSamplerSettings, PointSteepness) == 208, "Offset mismatch for UPCGSurfaceSamplerSettings::PointSteepness");
static_assert(offsetof(UPCGSurfaceSamplerSettings, bUseLegacyGridCreationMethod) == 212, "Offset mismatch for UPCGSurfaceSamplerSettings::bUseLegacyGridCreationMethod");

// /Script/PCG.PCGSwitchSettings
// Kind: Class; super: PCGControlFlowSettings
class UPCGSwitchSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SelectionMode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t IntegerSelection; // 0x00AC (Size: 0x4, Type: IntProperty)
    TArray<void*> IntOptions; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    FString StringSelection; // 0x00C0 (Size: 0x10, Type: StrProperty)
    TArray<void*> StringOptions; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EnumSelection[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> EnumValueToPinLabelMapping; // 0x00F0 (Size: 0x10, Type: MapProperty)
    TArray<void*> CachedPinLabels; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSwitchSettings, SelectionMode) == 168, "Offset mismatch for UPCGSwitchSettings::SelectionMode");
static_assert(offsetof(UPCGSwitchSettings, IntegerSelection) == 172, "Offset mismatch for UPCGSwitchSettings::IntegerSelection");
static_assert(offsetof(UPCGSwitchSettings, IntOptions) == 176, "Offset mismatch for UPCGSwitchSettings::IntOptions");
static_assert(offsetof(UPCGSwitchSettings, StringSelection) == 192, "Offset mismatch for UPCGSwitchSettings::StringSelection");
static_assert(offsetof(UPCGSwitchSettings, StringOptions) == 208, "Offset mismatch for UPCGSwitchSettings::StringOptions");
static_assert(offsetof(UPCGSwitchSettings, EnumSelection) == 224, "Offset mismatch for UPCGSwitchSettings::EnumSelection");
static_assert(offsetof(UPCGSwitchSettings, EnumValueToPinLabelMapping) == 240, "Offset mismatch for UPCGSwitchSettings::EnumValueToPinLabelMapping");
static_assert(offsetof(UPCGSwitchSettings, CachedPinLabels) == 256, "Offset mismatch for UPCGSwitchSettings::CachedPinLabels");

// /Script/PCG.PCGTagsToAttributeSetSettings
// Kind: Class; super: PCGSettings
class UPCGTagsToAttributeSetSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGTagsToAttributeSetSettings, Seed) == 80, "Offset mismatch for UPCGTagsToAttributeSetSettings::Seed");
static_assert(offsetof(UPCGTagsToAttributeSetSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGTagsToAttributeSetSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGTagsToAttributeSetSettings, bUseSeed) == 96, "Offset mismatch for UPCGTagsToAttributeSetSettings::bUseSeed");
static_assert(offsetof(UPCGTagsToAttributeSetSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGTagsToAttributeSetSettings::CachedOverridableParams");
static_assert(offsetof(UPCGTagsToAttributeSetSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGTagsToAttributeSetSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGTagsToAttributeSetSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGTagsToAttributeSetSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGTagsToAttributeSetSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGTagsToAttributeSetSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGTagsToAttributeSetSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGTagsToAttributeSetSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGTagsToAttributeSetSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGTagsToAttributeSetSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGTagsToAttributeSetSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGTagsToAttributeSetSettings::DebugBufferSize");

// /Script/PCG.PCGTagsToDataAttributesSettings
// Kind: Class; super: PCGDataAttributesAndTagsSettingsBase
class UPCGTagsToDataAttributesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TMap<void*, void*> AttributesTagsMapping; // 0x00A8 (Size: 0x10, Type: MapProperty)
    std::uint8_t bDeleteInputsAfterOperation; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGTagsToDataAttributesSettings, AttributesTagsMapping) == 168, "Offset mismatch for UPCGTagsToDataAttributesSettings::AttributesTagsMapping");
static_assert(offsetof(UPCGTagsToDataAttributesSettings, bDeleteInputsAfterOperation) == 184, "Offset mismatch for UPCGTagsToDataAttributesSettings::bDeleteInputsAfterOperation");

// /Script/PCG.PCGTeleportSettings
// Kind: Class; super: PCGSettings
class UPCGTeleportSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ObjectReferenceAttribute[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransformAttribute[0x30]; // 0x00D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSilenceWarningOnUnresolvedPath; // 0x0108 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGTeleportSettings, ObjectReferenceAttribute) == 168, "Offset mismatch for UPCGTeleportSettings::ObjectReferenceAttribute");
static_assert(offsetof(UPCGTeleportSettings, TransformAttribute) == 216, "Offset mismatch for UPCGTeleportSettings::TransformAttribute");
static_assert(offsetof(UPCGTeleportSettings, bSilenceWarningOnUnresolvedPath) == 264, "Offset mismatch for UPCGTeleportSettings::bSilenceWarningOnUnresolvedPath");

// /Script/PCG.PCGTexture2DArrayData
// Kind: Class; super: PCGTexture2DBaseData
class UPCGTexture2DArrayData
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    TWeakObjectPtr<void> Texture; // 0x01E0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ResourceType; // 0x01E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01E9
    std::uint8_t Resolution[0x8]; // 0x01EC (Size: 0x8, Type: StructProperty)
    std::uint16_t ArraySize; // 0x01F4 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(UPCGTexture2DArrayData, Texture) == 480, "Offset mismatch for UPCGTexture2DArrayData::Texture");
static_assert(offsetof(UPCGTexture2DArrayData, ResourceType) == 488, "Offset mismatch for UPCGTexture2DArrayData::ResourceType");
static_assert(offsetof(UPCGTexture2DArrayData, Resolution) == 492, "Offset mismatch for UPCGTexture2DArrayData::Resolution");
static_assert(offsetof(UPCGTexture2DArrayData, ArraySize) == 500, "Offset mismatch for UPCGTexture2DArrayData::ArraySize");

// /Script/PCG.PCGTexture2DArrayDataInterface
// Kind: Class; super: PCGExportableDataInterface
class UPCGTexture2DArrayDataInterface
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t bInitializeFromDataCollection; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGTexture2DArrayDataInterface, bInitializeFromDataCollection) == 136, "Offset mismatch for UPCGTexture2DArrayDataInterface::bInitializeFromDataCollection");

// /Script/PCG.PCGTexture2DArrayDataProvider
// Kind: Class; super: PCGExportableDataProvider
class UPCGTexture2DArrayDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGTexture2DArrayDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGTexture2DArrayDataProvider::ProducerKernel");
static_assert(offsetof(UPCGTexture2DArrayDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGTexture2DArrayDataProvider::ProducerSettings");

// /Script/PCG.PCGTexture2DBaseData
// Kind: Class; super: PCGSurfaceData
class UPCGTexture2DBaseData
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t Format; // 0x0180 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumMips; // 0x0181 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Filter; // 0x0182 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xD]; // 0x0183
    std::uint8_t Bounds[0x38]; // 0x0190 (Size: 0x38, Type: StructProperty)
    TArray<void*> ColorData; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGTexture2DBaseData, Format) == 384, "Offset mismatch for UPCGTexture2DBaseData::Format");
static_assert(offsetof(UPCGTexture2DBaseData, NumMips) == 385, "Offset mismatch for UPCGTexture2DBaseData::NumMips");
static_assert(offsetof(UPCGTexture2DBaseData, Filter) == 386, "Offset mismatch for UPCGTexture2DBaseData::Filter");
static_assert(offsetof(UPCGTexture2DBaseData, Bounds) == 400, "Offset mismatch for UPCGTexture2DBaseData::Bounds");
static_assert(offsetof(UPCGTexture2DBaseData, ColorData) == 456, "Offset mismatch for UPCGTexture2DBaseData::ColorData");

// /Script/PCG.PCGTexture2DSingleBaseData
// Kind: Class; super: PCGTexture2DBaseData
class UPCGTexture2DSingleBaseData
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    std::uint8_t bUseDensitySourceChannel; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ColorChannel; // 0x01E1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01E2
    float TexelSize; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAdvancedTiling; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01E9
    std::uint8_t Tiling[0x10]; // 0x01F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CenterOffset[0x10]; // 0x0200 (Size: 0x10, Type: StructProperty)
    float Rotation; // 0x0210 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseTileBounds; // 0x0214 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0215
    std::uint8_t TileBounds[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    std::int32_t Height; // 0x0240 (Size: 0x4, Type: IntProperty)
    std::int32_t Width; // 0x0244 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGTexture2DSingleBaseData, bUseDensitySourceChannel) == 480, "Offset mismatch for UPCGTexture2DSingleBaseData::bUseDensitySourceChannel");
static_assert(offsetof(UPCGTexture2DSingleBaseData, ColorChannel) == 481, "Offset mismatch for UPCGTexture2DSingleBaseData::ColorChannel");
static_assert(offsetof(UPCGTexture2DSingleBaseData, TexelSize) == 484, "Offset mismatch for UPCGTexture2DSingleBaseData::TexelSize");
static_assert(offsetof(UPCGTexture2DSingleBaseData, bUseAdvancedTiling) == 488, "Offset mismatch for UPCGTexture2DSingleBaseData::bUseAdvancedTiling");
static_assert(offsetof(UPCGTexture2DSingleBaseData, Tiling) == 496, "Offset mismatch for UPCGTexture2DSingleBaseData::Tiling");
static_assert(offsetof(UPCGTexture2DSingleBaseData, CenterOffset) == 512, "Offset mismatch for UPCGTexture2DSingleBaseData::CenterOffset");
static_assert(offsetof(UPCGTexture2DSingleBaseData, Rotation) == 528, "Offset mismatch for UPCGTexture2DSingleBaseData::Rotation");
static_assert(offsetof(UPCGTexture2DSingleBaseData, bUseTileBounds) == 532, "Offset mismatch for UPCGTexture2DSingleBaseData::bUseTileBounds");
static_assert(offsetof(UPCGTexture2DSingleBaseData, TileBounds) == 536, "Offset mismatch for UPCGTexture2DSingleBaseData::TileBounds");
static_assert(offsetof(UPCGTexture2DSingleBaseData, Height) == 576, "Offset mismatch for UPCGTexture2DSingleBaseData::Height");
static_assert(offsetof(UPCGTexture2DSingleBaseData, Width) == 580, "Offset mismatch for UPCGTexture2DSingleBaseData::Width");

// /Script/PCG.PCGTextureData
// Kind: Class; super: PCGTexture2DSingleBaseData
class UPCGTextureData
{
public:
    std::uint8_t Pad_0000[0x250]; // 0x0000
    TWeakObjectPtr<void> Texture; // 0x0250 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t TextureIndex; // 0x0258 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSuccessfullyInitialized; // 0x025C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x025D
    std::uint8_t ResourceType; // 0x025E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGTextureData, Texture) == 592, "Offset mismatch for UPCGTextureData::Texture");
static_assert(offsetof(UPCGTextureData, TextureIndex) == 600, "Offset mismatch for UPCGTextureData::TextureIndex");
static_assert(offsetof(UPCGTextureData, bSuccessfullyInitialized) == 604, "Offset mismatch for UPCGTextureData::bSuccessfullyInitialized");
static_assert(offsetof(UPCGTextureData, ResourceType) == 606, "Offset mismatch for UPCGTextureData::ResourceType");

// /Script/PCG.PCGTextureDataInterface
// Kind: Class; super: PCGExportableDataInterface
class UPCGTextureDataInterface
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t bInitializeFromDataCollection; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSingleData; // 0x0089 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGTextureDataInterface, bInitializeFromDataCollection) == 136, "Offset mismatch for UPCGTextureDataInterface::bInitializeFromDataCollection");
static_assert(offsetof(UPCGTextureDataInterface, bSingleData) == 137, "Offset mismatch for UPCGTextureDataInterface::bSingleData");

// /Script/PCG.PCGTextureDataProvider
// Kind: Class; super: PCGExportableDataProvider
class UPCGTextureDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGTextureDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGTextureDataProvider::ProducerKernel");
static_assert(offsetof(UPCGTextureDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGTextureDataProvider::ProducerSettings");

// /Script/PCG.PCGTextureSamplerSettings
// Kind: Class; super: PCGSettings
class UPCGTextureSamplerSettings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bUseAbsoluteTransform; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0111
    std::int32_t TextureArrayIndex; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseDensitySourceChannel; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ColorChannel; // 0x0119 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Filter; // 0x011A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x1]; // 0x011B
    float TexelSize; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAdvancedTiling; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0121
    std::uint8_t Tiling[0x10]; // 0x0128 (Size: 0x10, Type: StructProperty)
    std::uint8_t CenterOffset[0x10]; // 0x0138 (Size: 0x10, Type: StructProperty)
    float Rotation; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseTileBounds; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x014D
    std::uint8_t TileBoundsMin[0x10]; // 0x0150 (Size: 0x10, Type: StructProperty)
    std::uint8_t TileBoundsMax[0x10]; // 0x0160 (Size: 0x10, Type: StructProperty)
    std::uint8_t bKeepZeroDensityPoints; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSynchronousLoad; // 0x0171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x6]; // 0x0172
    std::uint8_t Texture[0x20]; // 0x0178 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bSkipReadbackToCPU; // 0x0198 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGTextureSamplerSettings, Transform) == 176, "Offset mismatch for UPCGTextureSamplerSettings::Transform");
static_assert(offsetof(UPCGTextureSamplerSettings, bUseAbsoluteTransform) == 272, "Offset mismatch for UPCGTextureSamplerSettings::bUseAbsoluteTransform");
static_assert(offsetof(UPCGTextureSamplerSettings, TextureArrayIndex) == 276, "Offset mismatch for UPCGTextureSamplerSettings::TextureArrayIndex");
static_assert(offsetof(UPCGTextureSamplerSettings, bUseDensitySourceChannel) == 280, "Offset mismatch for UPCGTextureSamplerSettings::bUseDensitySourceChannel");
static_assert(offsetof(UPCGTextureSamplerSettings, ColorChannel) == 281, "Offset mismatch for UPCGTextureSamplerSettings::ColorChannel");
static_assert(offsetof(UPCGTextureSamplerSettings, Filter) == 282, "Offset mismatch for UPCGTextureSamplerSettings::Filter");
static_assert(offsetof(UPCGTextureSamplerSettings, TexelSize) == 284, "Offset mismatch for UPCGTextureSamplerSettings::TexelSize");
static_assert(offsetof(UPCGTextureSamplerSettings, bUseAdvancedTiling) == 288, "Offset mismatch for UPCGTextureSamplerSettings::bUseAdvancedTiling");
static_assert(offsetof(UPCGTextureSamplerSettings, Tiling) == 296, "Offset mismatch for UPCGTextureSamplerSettings::Tiling");
static_assert(offsetof(UPCGTextureSamplerSettings, CenterOffset) == 312, "Offset mismatch for UPCGTextureSamplerSettings::CenterOffset");
static_assert(offsetof(UPCGTextureSamplerSettings, Rotation) == 328, "Offset mismatch for UPCGTextureSamplerSettings::Rotation");
static_assert(offsetof(UPCGTextureSamplerSettings, bUseTileBounds) == 332, "Offset mismatch for UPCGTextureSamplerSettings::bUseTileBounds");
static_assert(offsetof(UPCGTextureSamplerSettings, TileBoundsMin) == 336, "Offset mismatch for UPCGTextureSamplerSettings::TileBoundsMin");
static_assert(offsetof(UPCGTextureSamplerSettings, TileBoundsMax) == 352, "Offset mismatch for UPCGTextureSamplerSettings::TileBoundsMax");
static_assert(offsetof(UPCGTextureSamplerSettings, bKeepZeroDensityPoints) == 368, "Offset mismatch for UPCGTextureSamplerSettings::bKeepZeroDensityPoints");
static_assert(offsetof(UPCGTextureSamplerSettings, bSynchronousLoad) == 369, "Offset mismatch for UPCGTextureSamplerSettings::bSynchronousLoad");
static_assert(offsetof(UPCGTextureSamplerSettings, Texture) == 376, "Offset mismatch for UPCGTextureSamplerSettings::Texture");
static_assert(offsetof(UPCGTextureSamplerSettings, bSkipReadbackToCPU) == 408, "Offset mismatch for UPCGTextureSamplerSettings::bSkipReadbackToCPU");

// /Script/PCG.PCGTransformPointsDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGTransformPointsDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGTransformPointsDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGTransformPointsDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGTransformPointsDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGTransformPointsDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGTransformPointsDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGTransformPointsDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGTransformPointsDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGTransformPointsDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGTransformPointsDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGTransformPointsDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGTransformPointsDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGTransformPointsDataInterface::ProducerKernel");
static_assert(offsetof(UPCGTransformPointsDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGTransformPointsDataInterface::ProducerSettings");

// /Script/PCG.PCGTransformPointsDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGTransformPointsDataProvider
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t AttributeId; // 0x0068 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGTransformPointsDataProvider, AttributeId) == 104, "Offset mismatch for UPCGTransformPointsDataProvider::AttributeId");

// /Script/PCG.PCGTransformPointsKernel
// Kind: Class; super: PCGComputeKernel
class UPCGTransformPointsKernel
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PCGKernelFlags; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t KernelIndex; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t SettingsPath[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NodePath[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bInitialized; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    TArray<void*> StaticLogEntries; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedOverridableParams; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGTransformPointsKernel, PCGKernelFlags) == 56, "Offset mismatch for UPCGTransformPointsKernel::PCGKernelFlags");
static_assert(offsetof(UPCGTransformPointsKernel, KernelIndex) == 60, "Offset mismatch for UPCGTransformPointsKernel::KernelIndex");
static_assert(offsetof(UPCGTransformPointsKernel, SettingsPath) == 64, "Offset mismatch for UPCGTransformPointsKernel::SettingsPath");
static_assert(offsetof(UPCGTransformPointsKernel, NodePath) == 96, "Offset mismatch for UPCGTransformPointsKernel::NodePath");
static_assert(offsetof(UPCGTransformPointsKernel, bInitialized) == 128, "Offset mismatch for UPCGTransformPointsKernel::bInitialized");
static_assert(offsetof(UPCGTransformPointsKernel, StaticLogEntries) == 136, "Offset mismatch for UPCGTransformPointsKernel::StaticLogEntries");
static_assert(offsetof(UPCGTransformPointsKernel, CachedOverridableParams) == 152, "Offset mismatch for UPCGTransformPointsKernel::CachedOverridableParams");

// /Script/PCG.PCGTransformPointsSettings
// Kind: Class; super: PCGSettings
class UPCGTransformPointsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bApplyToAttribute; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t AttributeName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t OffsetMin[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t OffsetMax[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAbsoluteOffset; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    std::uint8_t RotationMin[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationMax[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAbsoluteRotation; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0119
    std::uint8_t ScaleMin[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScaleMax[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAbsoluteScale; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUniformScale; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecomputeSeed; // 0x0152 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGTransformPointsSettings, bApplyToAttribute) == 168, "Offset mismatch for UPCGTransformPointsSettings::bApplyToAttribute");
static_assert(offsetof(UPCGTransformPointsSettings, AttributeName) == 172, "Offset mismatch for UPCGTransformPointsSettings::AttributeName");
static_assert(offsetof(UPCGTransformPointsSettings, OffsetMin) == 176, "Offset mismatch for UPCGTransformPointsSettings::OffsetMin");
static_assert(offsetof(UPCGTransformPointsSettings, OffsetMax) == 200, "Offset mismatch for UPCGTransformPointsSettings::OffsetMax");
static_assert(offsetof(UPCGTransformPointsSettings, bAbsoluteOffset) == 224, "Offset mismatch for UPCGTransformPointsSettings::bAbsoluteOffset");
static_assert(offsetof(UPCGTransformPointsSettings, RotationMin) == 232, "Offset mismatch for UPCGTransformPointsSettings::RotationMin");
static_assert(offsetof(UPCGTransformPointsSettings, RotationMax) == 256, "Offset mismatch for UPCGTransformPointsSettings::RotationMax");
static_assert(offsetof(UPCGTransformPointsSettings, bAbsoluteRotation) == 280, "Offset mismatch for UPCGTransformPointsSettings::bAbsoluteRotation");
static_assert(offsetof(UPCGTransformPointsSettings, ScaleMin) == 288, "Offset mismatch for UPCGTransformPointsSettings::ScaleMin");
static_assert(offsetof(UPCGTransformPointsSettings, ScaleMax) == 312, "Offset mismatch for UPCGTransformPointsSettings::ScaleMax");
static_assert(offsetof(UPCGTransformPointsSettings, bAbsoluteScale) == 336, "Offset mismatch for UPCGTransformPointsSettings::bAbsoluteScale");
static_assert(offsetof(UPCGTransformPointsSettings, bUniformScale) == 337, "Offset mismatch for UPCGTransformPointsSettings::bUniformScale");
static_assert(offsetof(UPCGTransformPointsSettings, bRecomputeSeed) == 338, "Offset mismatch for UPCGTransformPointsSettings::bRecomputeSeed");

// /Script/PCG.PCGTrapezoidalDecompositionSettings
// Kind: Class; super: PCGSettings
class UPCGTrapezoidalDecompositionSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ProjectionAxis; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LocalOrientation; // 0x00A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00AA
    std::int32_t SubdivisionsPerSegment; // 0x00AC (Size: 0x4, Type: IntProperty)
    FName ShapeTypeAttributeName; // 0x00B0 (Size: 0x8, Type: NameProperty)
    double UnitMeshSize; // 0x00B8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPCGTrapezoidalDecompositionSettings, ProjectionAxis) == 168, "Offset mismatch for UPCGTrapezoidalDecompositionSettings::ProjectionAxis");
static_assert(offsetof(UPCGTrapezoidalDecompositionSettings, LocalOrientation) == 169, "Offset mismatch for UPCGTrapezoidalDecompositionSettings::LocalOrientation");
static_assert(offsetof(UPCGTrapezoidalDecompositionSettings, SubdivisionsPerSegment) == 172, "Offset mismatch for UPCGTrapezoidalDecompositionSettings::SubdivisionsPerSegment");
static_assert(offsetof(UPCGTrapezoidalDecompositionSettings, ShapeTypeAttributeName) == 176, "Offset mismatch for UPCGTrapezoidalDecompositionSettings::ShapeTypeAttributeName");
static_assert(offsetof(UPCGTrapezoidalDecompositionSettings, UnitMeshSize) == 184, "Offset mismatch for UPCGTrapezoidalDecompositionSettings::UnitMeshSize");

// /Script/PCG.PCGTrivialSettings
// Kind: Class; super: PCGSettings
class UPCGTrivialSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGTrivialSettings, Seed) == 80, "Offset mismatch for UPCGTrivialSettings::Seed");
static_assert(offsetof(UPCGTrivialSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGTrivialSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGTrivialSettings, bUseSeed) == 96, "Offset mismatch for UPCGTrivialSettings::bUseSeed");
static_assert(offsetof(UPCGTrivialSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGTrivialSettings::CachedOverridableParams");
static_assert(offsetof(UPCGTrivialSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGTrivialSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGTrivialSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGTrivialSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGTrivialSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGTrivialSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGTrivialSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGTrivialSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGTrivialSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGTrivialSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGTrivialSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGTrivialSettings::DebugBufferSize");

// /Script/PCG.PCGUnionData
// Kind: Class; super: PCGSpatialDataWithPointCache
class UPCGUnionData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Data; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* FirstNonTrivialTransformData; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UnionType; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DensityFunction; // 0x00F9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00FA
    std::uint8_t CachedBounds[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t CachedStrictBounds[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::int32_t CachedDimension; // 0x0170 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGUnionData, Data) == 224, "Offset mismatch for UPCGUnionData::Data");
static_assert(offsetof(UPCGUnionData, FirstNonTrivialTransformData) == 240, "Offset mismatch for UPCGUnionData::FirstNonTrivialTransformData");
static_assert(offsetof(UPCGUnionData, UnionType) == 248, "Offset mismatch for UPCGUnionData::UnionType");
static_assert(offsetof(UPCGUnionData, DensityFunction) == 249, "Offset mismatch for UPCGUnionData::DensityFunction");
static_assert(offsetof(UPCGUnionData, CachedBounds) == 256, "Offset mismatch for UPCGUnionData::CachedBounds");
static_assert(offsetof(UPCGUnionData, CachedStrictBounds) == 312, "Offset mismatch for UPCGUnionData::CachedStrictBounds");
static_assert(offsetof(UPCGUnionData, CachedDimension) == 368, "Offset mismatch for UPCGUnionData::CachedDimension");

// /Script/PCG.PCGUnionSettings
// Kind: Class; super: PCGSettingsWithDynamicInputs
class UPCGUnionSettings
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t Type; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DensityFunction; // 0x00B9 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGUnionSettings, Type) == 184, "Offset mismatch for UPCGUnionSettings::Type");
static_assert(offsetof(UPCGUnionSettings, DensityFunction) == 185, "Offset mismatch for UPCGUnionSettings::DensityFunction");

// /Script/PCG.PCGUnitTestDummyActor
// Kind: Class; super: Actor
class UPCGUnitTestDummyActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::int32_t IntProperty; // 0x0270 (Size: 0x4, Type: IntProperty)
    float FloatProperty; // 0x0274 (Size: 0x4, Type: FloatProperty)
    std::int64_t Int64Property; // 0x0278 (Size: 0x8, Type: Int64Property)
    double DoubleProperty; // 0x0280 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t BoolProperty; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0289
    std::uint8_t NameProperty[0x4]; // 0x028C (Size: 0x4, Type: NameProperty)
    FString StringProperty; // 0x0290 (Size: 0x10, Type: StrProperty)
    std::uint8_t EnumProperty; // 0x02A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02A1
    std::uint8_t VectorProperty[0x18]; // 0x02A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Vector4Property[0x20]; // 0x02C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TransformProperty[0x60]; // 0x02E0 (Size: 0x60, Type: StructProperty)
    std::uint8_t RotatorProperty[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t QuatProperty[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t SoftObjectPathProperty[0x18]; // 0x0380 (Size: 0x18, Type: StructProperty)
    std::uint8_t SoftClassPathProperty[0x18]; // 0x0398 (Size: 0x18, Type: StructProperty)
    void* ClassProperty; // 0x03B0 (Size: 0x8, Type: ClassProperty)
    void* ObjectProperty; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Vector2Property[0x10]; // 0x03C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorProperty[0x4]; // 0x03D0 (Size: 0x4, Type: StructProperty)
    std::uint8_t LinearColorProperty[0x14]; // 0x03D4 (Size: 0x14, Type: StructProperty)
    std::uint8_t PCGColorProperty[0x20]; // 0x03E8 (Size: 0x20, Type: StructProperty)
    TArray<void*> ArrayOfIntsProperty; // 0x0408 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ArrayOfVectorsProperty; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ArrayOfStructsProperty; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ArrayOfObjectsProperty; // 0x0438 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DummyStruct[0x28]; // 0x0448 (Size: 0x28, Type: StructProperty)
    TArray<void*> SetOfIntsProperty; // 0x0470 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGUnitTestDummyActor, IntProperty) == 624, "Offset mismatch for UPCGUnitTestDummyActor::IntProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, FloatProperty) == 628, "Offset mismatch for UPCGUnitTestDummyActor::FloatProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, Int64Property) == 632, "Offset mismatch for UPCGUnitTestDummyActor::Int64Property");
static_assert(offsetof(UPCGUnitTestDummyActor, DoubleProperty) == 640, "Offset mismatch for UPCGUnitTestDummyActor::DoubleProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, BoolProperty) == 648, "Offset mismatch for UPCGUnitTestDummyActor::BoolProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, NameProperty) == 652, "Offset mismatch for UPCGUnitTestDummyActor::NameProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, StringProperty) == 656, "Offset mismatch for UPCGUnitTestDummyActor::StringProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, EnumProperty) == 672, "Offset mismatch for UPCGUnitTestDummyActor::EnumProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, VectorProperty) == 680, "Offset mismatch for UPCGUnitTestDummyActor::VectorProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, Vector4Property) == 704, "Offset mismatch for UPCGUnitTestDummyActor::Vector4Property");
static_assert(offsetof(UPCGUnitTestDummyActor, TransformProperty) == 736, "Offset mismatch for UPCGUnitTestDummyActor::TransformProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, RotatorProperty) == 832, "Offset mismatch for UPCGUnitTestDummyActor::RotatorProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, QuatProperty) == 864, "Offset mismatch for UPCGUnitTestDummyActor::QuatProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, SoftObjectPathProperty) == 896, "Offset mismatch for UPCGUnitTestDummyActor::SoftObjectPathProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, SoftClassPathProperty) == 920, "Offset mismatch for UPCGUnitTestDummyActor::SoftClassPathProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, ClassProperty) == 944, "Offset mismatch for UPCGUnitTestDummyActor::ClassProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, ObjectProperty) == 952, "Offset mismatch for UPCGUnitTestDummyActor::ObjectProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, Vector2Property) == 960, "Offset mismatch for UPCGUnitTestDummyActor::Vector2Property");
static_assert(offsetof(UPCGUnitTestDummyActor, ColorProperty) == 976, "Offset mismatch for UPCGUnitTestDummyActor::ColorProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, LinearColorProperty) == 980, "Offset mismatch for UPCGUnitTestDummyActor::LinearColorProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, PCGColorProperty) == 1000, "Offset mismatch for UPCGUnitTestDummyActor::PCGColorProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, ArrayOfIntsProperty) == 1032, "Offset mismatch for UPCGUnitTestDummyActor::ArrayOfIntsProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, ArrayOfVectorsProperty) == 1048, "Offset mismatch for UPCGUnitTestDummyActor::ArrayOfVectorsProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, ArrayOfStructsProperty) == 1064, "Offset mismatch for UPCGUnitTestDummyActor::ArrayOfStructsProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, ArrayOfObjectsProperty) == 1080, "Offset mismatch for UPCGUnitTestDummyActor::ArrayOfObjectsProperty");
static_assert(offsetof(UPCGUnitTestDummyActor, DummyStruct) == 1096, "Offset mismatch for UPCGUnitTestDummyActor::DummyStruct");
static_assert(offsetof(UPCGUnitTestDummyActor, SetOfIntsProperty) == 1136, "Offset mismatch for UPCGUnitTestDummyActor::SetOfIntsProperty");

// /Script/PCG.PCGUnitTestDummyComponent
// Kind: Class; super: ActorComponent
class UPCGUnitTestDummyComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t IntProperty; // 0x00C0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGUnitTestDummyComponent, IntProperty) == 192, "Offset mismatch for UPCGUnitTestDummyComponent::IntProperty");

// /Script/PCG.PCGUserParameterGetSettings
// Kind: Class; super: PCGSettings
class UPCGUserParameterGetSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t PropertyGuid[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t PropertyName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSanitizeOutputAttributeName; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00BD
    std::uint8_t StructExtractorBehavior; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00C1
    std::uint8_t ObjectExtractorBehavior; // 0x00C4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00C5
    std::uint8_t ContainerExtractorBehavior; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00C9
    std::uint8_t bForceObjectAndStructExtraction; // 0x00CC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGUserParameterGetSettings, PropertyGuid) == 168, "Offset mismatch for UPCGUserParameterGetSettings::PropertyGuid");
static_assert(offsetof(UPCGUserParameterGetSettings, PropertyName) == 184, "Offset mismatch for UPCGUserParameterGetSettings::PropertyName");
static_assert(offsetof(UPCGUserParameterGetSettings, bSanitizeOutputAttributeName) == 188, "Offset mismatch for UPCGUserParameterGetSettings::bSanitizeOutputAttributeName");
static_assert(offsetof(UPCGUserParameterGetSettings, StructExtractorBehavior) == 192, "Offset mismatch for UPCGUserParameterGetSettings::StructExtractorBehavior");
static_assert(offsetof(UPCGUserParameterGetSettings, ObjectExtractorBehavior) == 196, "Offset mismatch for UPCGUserParameterGetSettings::ObjectExtractorBehavior");
static_assert(offsetof(UPCGUserParameterGetSettings, ContainerExtractorBehavior) == 200, "Offset mismatch for UPCGUserParameterGetSettings::ContainerExtractorBehavior");
static_assert(offsetof(UPCGUserParameterGetSettings, bForceObjectAndStructExtraction) == 204, "Offset mismatch for UPCGUserParameterGetSettings::bForceObjectAndStructExtraction");

// /Script/PCG.PCGUserParametersData
// Kind: Class; super: PCGData
class UPCGUserParametersData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t UserParameters[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    TSoftObjectPtr<void> UpstreamData; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGUserParametersData, UserParameters) == 72, "Offset mismatch for UPCGUserParametersData::UserParameters");
static_assert(offsetof(UPCGUserParametersData, UpstreamData) == 88, "Offset mismatch for UPCGUserParametersData::UpstreamData");

// /Script/PCG.PCGVirtualTextureData
// Kind: Class; super: PCGSurfaceData
class UPCGVirtualTextureData
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    void* RuntimeVirtualTexture; // 0x0180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGVirtualTextureData, RuntimeVirtualTexture) == 384, "Offset mismatch for UPCGVirtualTextureData::RuntimeVirtualTexture");

// /Script/PCG.PCGVirtualTextureDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGVirtualTextureDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGVirtualTextureDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGVirtualTextureDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGVirtualTextureDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGVirtualTextureDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGVirtualTextureDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGVirtualTextureDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGVirtualTextureDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGVirtualTextureDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGVirtualTextureDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGVirtualTextureDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGVirtualTextureDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGVirtualTextureDataInterface::ProducerKernel");
static_assert(offsetof(UPCGVirtualTextureDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGVirtualTextureDataInterface::ProducerSettings");

// /Script/PCG.PCGVirtualTextureDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGVirtualTextureDataProvider
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> VirtualTextures; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGVirtualTextureDataProvider, VirtualTextures) == 104, "Offset mismatch for UPCGVirtualTextureDataProvider::VirtualTextures");

// /Script/PCG.PCGVisualizeAttributeSettings
// Kind: Class; super: PCGSettings
class UPCGVisualizeAttributeSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AttributeSource[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString CustomPrefixString; // 0x00D8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bPrefixWithIndex; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrefixWithAttributeName; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00EA
    std::uint8_t LocalOffset[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Color[0x8]; // 0x0108 (Size: 0x8, Type: StructProperty)
    double duration; // 0x0110 (Size: 0x8, Type: DoubleProperty)
    std::int32_t PointLimit; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t bVisualizeEnabled; // 0x011C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGVisualizeAttributeSettings, AttributeSource) == 168, "Offset mismatch for UPCGVisualizeAttributeSettings::AttributeSource");
static_assert(offsetof(UPCGVisualizeAttributeSettings, CustomPrefixString) == 216, "Offset mismatch for UPCGVisualizeAttributeSettings::CustomPrefixString");
static_assert(offsetof(UPCGVisualizeAttributeSettings, bPrefixWithIndex) == 232, "Offset mismatch for UPCGVisualizeAttributeSettings::bPrefixWithIndex");
static_assert(offsetof(UPCGVisualizeAttributeSettings, bPrefixWithAttributeName) == 233, "Offset mismatch for UPCGVisualizeAttributeSettings::bPrefixWithAttributeName");
static_assert(offsetof(UPCGVisualizeAttributeSettings, LocalOffset) == 240, "Offset mismatch for UPCGVisualizeAttributeSettings::LocalOffset");
static_assert(offsetof(UPCGVisualizeAttributeSettings, Color) == 264, "Offset mismatch for UPCGVisualizeAttributeSettings::Color");
static_assert(offsetof(UPCGVisualizeAttributeSettings, duration) == 272, "Offset mismatch for UPCGVisualizeAttributeSettings::duration");
static_assert(offsetof(UPCGVisualizeAttributeSettings, PointLimit) == 280, "Offset mismatch for UPCGVisualizeAttributeSettings::PointLimit");
static_assert(offsetof(UPCGVisualizeAttributeSettings, bVisualizeEnabled) == 284, "Offset mismatch for UPCGVisualizeAttributeSettings::bVisualizeEnabled");

// /Script/PCG.PCGVolume
// Kind: Class; super: Volume
class UPCGVolume
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    void* PCGComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGVolume, PCGComponent) == 680, "Offset mismatch for UPCGVolume::PCGComponent");

// /Script/PCG.PCGVolumeData
// Kind: Class; super: PCGSpatialDataWithPointCache
class UPCGVolumeData
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t VoxelSize[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> Volume; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Bounds[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t StrictBounds[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGVolumeData, VoxelSize) == 224, "Offset mismatch for UPCGVolumeData::VoxelSize");
static_assert(offsetof(UPCGVolumeData, Volume) == 248, "Offset mismatch for UPCGVolumeData::Volume");
static_assert(offsetof(UPCGVolumeData, Bounds) == 256, "Offset mismatch for UPCGVolumeData::Bounds");
static_assert(offsetof(UPCGVolumeData, StrictBounds) == 312, "Offset mismatch for UPCGVolumeData::StrictBounds");

// /Script/PCG.PCGVolumeSamplerSettings
// Kind: Class; super: PCGSettings
class UPCGVolumeSamplerSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t VoxelSize[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUnbounded; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    float PointSteepness; // 0x00C4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPCGVolumeSamplerSettings, VoxelSize) == 168, "Offset mismatch for UPCGVolumeSamplerSettings::VoxelSize");
static_assert(offsetof(UPCGVolumeSamplerSettings, bUnbounded) == 192, "Offset mismatch for UPCGVolumeSamplerSettings::bUnbounded");
static_assert(offsetof(UPCGVolumeSamplerSettings, PointSteepness) == 196, "Offset mismatch for UPCGVolumeSamplerSettings::PointSteepness");

// /Script/PCG.PCGWaitLandscapeReadySettings
// Kind: Class; super: PCGSettings
class UPCGWaitLandscapeReadySettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGWaitLandscapeReadySettings, Seed) == 80, "Offset mismatch for UPCGWaitLandscapeReadySettings::Seed");
static_assert(offsetof(UPCGWaitLandscapeReadySettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGWaitLandscapeReadySettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGWaitLandscapeReadySettings, bUseSeed) == 96, "Offset mismatch for UPCGWaitLandscapeReadySettings::bUseSeed");
static_assert(offsetof(UPCGWaitLandscapeReadySettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGWaitLandscapeReadySettings::CachedOverridableParams");
static_assert(offsetof(UPCGWaitLandscapeReadySettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGWaitLandscapeReadySettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGWaitLandscapeReadySettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGWaitLandscapeReadySettings::bExecuteOnGPU");
static_assert(offsetof(UPCGWaitLandscapeReadySettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGWaitLandscapeReadySettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGWaitLandscapeReadySettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGWaitLandscapeReadySettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGWaitLandscapeReadySettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGWaitLandscapeReadySettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGWaitLandscapeReadySettings, DebugBufferSize) == 160, "Offset mismatch for UPCGWaitLandscapeReadySettings::DebugBufferSize");

// /Script/PCG.PCGWaitSettings
// Kind: Class; super: PCGSettings
class UPCGWaitSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    double WaitTimeInSeconds; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    std::int64_t WaitTimeInEngineFrames; // 0x00B0 (Size: 0x8, Type: Int64Property)
    std::int64_t WaitTimeInRenderFrames; // 0x00B8 (Size: 0x8, Type: Int64Property)
    std::uint8_t bEndWaitWhenAllConditionsAreMet; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGWaitSettings, WaitTimeInSeconds) == 168, "Offset mismatch for UPCGWaitSettings::WaitTimeInSeconds");
static_assert(offsetof(UPCGWaitSettings, WaitTimeInEngineFrames) == 176, "Offset mismatch for UPCGWaitSettings::WaitTimeInEngineFrames");
static_assert(offsetof(UPCGWaitSettings, WaitTimeInRenderFrames) == 184, "Offset mismatch for UPCGWaitSettings::WaitTimeInRenderFrames");
static_assert(offsetof(UPCGWaitSettings, bEndWaitWhenAllConditionsAreMet) == 192, "Offset mismatch for UPCGWaitSettings::bEndWaitWhenAllConditionsAreMet");

// /Script/PCG.PCGWorldActor
// Kind: Class; super: Actor
class UPCGWorldActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint32_t PartitionGridSize; // 0x0270 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x0274
    void* LandscapeCacheObject; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bTreatPlayerControllersAsGenerationSources; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableWorldPartitionGenerationSources; // 0x0281 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGWorldActor, PartitionGridSize) == 624, "Offset mismatch for UPCGWorldActor::PartitionGridSize");
static_assert(offsetof(UPCGWorldActor, LandscapeCacheObject) == 632, "Offset mismatch for UPCGWorldActor::LandscapeCacheObject");
static_assert(offsetof(UPCGWorldActor, bTreatPlayerControllersAsGenerationSources) == 640, "Offset mismatch for UPCGWorldActor::bTreatPlayerControllersAsGenerationSources");
static_assert(offsetof(UPCGWorldActor, bEnableWorldPartitionGenerationSources) == 641, "Offset mismatch for UPCGWorldActor::bEnableWorldPartitionGenerationSources");

// /Script/PCG.PCGWorldQuerySettings
// Kind: Class; super: PCGSettings
class UPCGWorldQuerySettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t QueryParams[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGWorldQuerySettings, QueryParams) == 168, "Offset mismatch for UPCGWorldQuerySettings::QueryParams");

// /Script/PCG.PCGWorldRayHitData
// Kind: Class; super: PCGSurfaceData
class UPCGWorldRayHitData
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t Bounds[0x38]; // 0x0180 (Size: 0x38, Type: StructProperty)
    std::uint8_t CollisionShape[0x48]; // 0x01B8 (Size: 0x48, Type: StructProperty)
    std::uint8_t QueryParams[0xC8]; // 0x0200 (Size: 0xC8, Type: StructProperty)
    std::uint8_t CachedLandscapeLayerNames[0x10]; // 0x02C8 (Size: 0x10, Type: SetProperty)
    std::uint8_t OriginatingObject[0x18]; // 0x02D8 (Size: 0x18, Type: StructProperty)
    TArray<void*> FilteredObjects; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0300
    TWeakObjectPtr<void> World; // 0x0318 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OriginatingComponent; // 0x0320 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ActorFilter[0x1]; // 0x0328 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGWorldRayHitData, Bounds) == 384, "Offset mismatch for UPCGWorldRayHitData::Bounds");
static_assert(offsetof(UPCGWorldRayHitData, CollisionShape) == 440, "Offset mismatch for UPCGWorldRayHitData::CollisionShape");
static_assert(offsetof(UPCGWorldRayHitData, QueryParams) == 512, "Offset mismatch for UPCGWorldRayHitData::QueryParams");
static_assert(offsetof(UPCGWorldRayHitData, CachedLandscapeLayerNames) == 712, "Offset mismatch for UPCGWorldRayHitData::CachedLandscapeLayerNames");
static_assert(offsetof(UPCGWorldRayHitData, OriginatingObject) == 728, "Offset mismatch for UPCGWorldRayHitData::OriginatingObject");
static_assert(offsetof(UPCGWorldRayHitData, FilteredObjects) == 752, "Offset mismatch for UPCGWorldRayHitData::FilteredObjects");
static_assert(offsetof(UPCGWorldRayHitData, World) == 792, "Offset mismatch for UPCGWorldRayHitData::World");
static_assert(offsetof(UPCGWorldRayHitData, OriginatingComponent) == 800, "Offset mismatch for UPCGWorldRayHitData::OriginatingComponent");
static_assert(offsetof(UPCGWorldRayHitData, ActorFilter) == 808, "Offset mismatch for UPCGWorldRayHitData::ActorFilter");

// /Script/PCG.PCGWorldRayHitSettings
// Kind: Class; super: PCGSettings
class UPCGWorldRayHitSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t CollisionShape[0x48]; // 0x00A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t QueryParams[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGWorldRayHitSettings, CollisionShape) == 168, "Offset mismatch for UPCGWorldRayHitSettings::CollisionShape");
static_assert(offsetof(UPCGWorldRayHitSettings, QueryParams) == 240, "Offset mismatch for UPCGWorldRayHitSettings::QueryParams");

// /Script/PCG.PCGWorldRaycastDataInterface
// Kind: Class; super: PCGComputeDataInterface
class UPCGWorldRaycastDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t GraphBindingIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputPinLabel[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    FName OutputPinLabelAlias; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> DownstreamInputPinLabelAliases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProducedByCPU; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> ProducerSettings; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPCGWorldRaycastDataInterface, GraphBindingIndex) == 40, "Offset mismatch for UPCGWorldRaycastDataInterface::GraphBindingIndex");
static_assert(offsetof(UPCGWorldRaycastDataInterface, OutputPinLabel) == 44, "Offset mismatch for UPCGWorldRaycastDataInterface::OutputPinLabel");
static_assert(offsetof(UPCGWorldRaycastDataInterface, OutputPinLabelAlias) == 48, "Offset mismatch for UPCGWorldRaycastDataInterface::OutputPinLabelAlias");
static_assert(offsetof(UPCGWorldRaycastDataInterface, DownstreamInputPinLabelAliases) == 56, "Offset mismatch for UPCGWorldRaycastDataInterface::DownstreamInputPinLabelAliases");
static_assert(offsetof(UPCGWorldRaycastDataInterface, bProducedByCPU) == 72, "Offset mismatch for UPCGWorldRaycastDataInterface::bProducedByCPU");
static_assert(offsetof(UPCGWorldRaycastDataInterface, ProducerKernel) == 80, "Offset mismatch for UPCGWorldRaycastDataInterface::ProducerKernel");
static_assert(offsetof(UPCGWorldRaycastDataInterface, ProducerSettings) == 88, "Offset mismatch for UPCGWorldRaycastDataInterface::ProducerSettings");

// /Script/PCG.PCGWorldRaycastDataProvider
// Kind: Class; super: PCGComputeDataProvider
class UPCGWorldRaycastDataProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ProducerKernel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ProducerSettings; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGWorldRaycastDataProvider, ProducerKernel) == 80, "Offset mismatch for UPCGWorldRaycastDataProvider::ProducerKernel");
static_assert(offsetof(UPCGWorldRaycastDataProvider, ProducerSettings) == 88, "Offset mismatch for UPCGWorldRaycastDataProvider::ProducerSettings");

// /Script/PCG.PCGWorldRaycastElementSettings
// Kind: Class; super: PCGSettings
class UPCGWorldRaycastElementSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t CollisionShape[0x48]; // 0x00A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t RaycastMode; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    std::uint8_t OriginInputAttribute[0x30]; // 0x00F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bOverrideRayDirections; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0129
    std::uint8_t RayDirection[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t RayDirectionAttribute[0x30]; // 0x0148 (Size: 0x30, Type: StructProperty)
    std::uint8_t EndPointAttribute[0x30]; // 0x0178 (Size: 0x30, Type: StructProperty)
    std::uint8_t bOverrideRayLengths; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x01A9
    double RayLength; // 0x01B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t RayLengthAttribute[0x30]; // 0x01B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t WorldQueryParams[0x88]; // 0x01E8 (Size: 0x88, Type: StructProperty)
    std::uint8_t bKeepOriginalPointOnMiss; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUnbounded; // 0x0271 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetTextureCoordinates; // 0x0272 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x0273
    std::int32_t TextureCoordinatesChannelIndex; // 0x0274 (Size: 0x4, Type: IntProperty)
    std::uint8_t bGetNormals; // 0x0278 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGWorldRaycastElementSettings, CollisionShape) == 168, "Offset mismatch for UPCGWorldRaycastElementSettings::CollisionShape");
static_assert(offsetof(UPCGWorldRaycastElementSettings, RaycastMode) == 240, "Offset mismatch for UPCGWorldRaycastElementSettings::RaycastMode");
static_assert(offsetof(UPCGWorldRaycastElementSettings, OriginInputAttribute) == 248, "Offset mismatch for UPCGWorldRaycastElementSettings::OriginInputAttribute");
static_assert(offsetof(UPCGWorldRaycastElementSettings, bOverrideRayDirections) == 296, "Offset mismatch for UPCGWorldRaycastElementSettings::bOverrideRayDirections");
static_assert(offsetof(UPCGWorldRaycastElementSettings, RayDirection) == 304, "Offset mismatch for UPCGWorldRaycastElementSettings::RayDirection");
static_assert(offsetof(UPCGWorldRaycastElementSettings, RayDirectionAttribute) == 328, "Offset mismatch for UPCGWorldRaycastElementSettings::RayDirectionAttribute");
static_assert(offsetof(UPCGWorldRaycastElementSettings, EndPointAttribute) == 376, "Offset mismatch for UPCGWorldRaycastElementSettings::EndPointAttribute");
static_assert(offsetof(UPCGWorldRaycastElementSettings, bOverrideRayLengths) == 424, "Offset mismatch for UPCGWorldRaycastElementSettings::bOverrideRayLengths");
static_assert(offsetof(UPCGWorldRaycastElementSettings, RayLength) == 432, "Offset mismatch for UPCGWorldRaycastElementSettings::RayLength");
static_assert(offsetof(UPCGWorldRaycastElementSettings, RayLengthAttribute) == 440, "Offset mismatch for UPCGWorldRaycastElementSettings::RayLengthAttribute");
static_assert(offsetof(UPCGWorldRaycastElementSettings, WorldQueryParams) == 488, "Offset mismatch for UPCGWorldRaycastElementSettings::WorldQueryParams");
static_assert(offsetof(UPCGWorldRaycastElementSettings, bKeepOriginalPointOnMiss) == 624, "Offset mismatch for UPCGWorldRaycastElementSettings::bKeepOriginalPointOnMiss");
static_assert(offsetof(UPCGWorldRaycastElementSettings, bUnbounded) == 625, "Offset mismatch for UPCGWorldRaycastElementSettings::bUnbounded");
static_assert(offsetof(UPCGWorldRaycastElementSettings, bGetTextureCoordinates) == 626, "Offset mismatch for UPCGWorldRaycastElementSettings::bGetTextureCoordinates");
static_assert(offsetof(UPCGWorldRaycastElementSettings, TextureCoordinatesChannelIndex) == 628, "Offset mismatch for UPCGWorldRaycastElementSettings::TextureCoordinatesChannelIndex");
static_assert(offsetof(UPCGWorldRaycastElementSettings, bGetNormals) == 632, "Offset mismatch for UPCGWorldRaycastElementSettings::bGetNormals");

// /Script/PCG.PCGWorldVolumetricData
// Kind: Class; super: PCGVolumeData
class UPCGWorldVolumetricData
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    std::uint8_t QueryParams[0x80]; // 0x0178 (Size: 0x80, Type: StructProperty)
    std::uint8_t OriginatingObject[0x18]; // 0x01F8 (Size: 0x18, Type: StructProperty)
    TArray<void*> FilteredObjects; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0220
    TWeakObjectPtr<void> World; // 0x0238 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OriginatingComponent; // 0x0240 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ActorFilter[0x1]; // 0x0248 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGWorldVolumetricData, QueryParams) == 376, "Offset mismatch for UPCGWorldVolumetricData::QueryParams");
static_assert(offsetof(UPCGWorldVolumetricData, OriginatingObject) == 504, "Offset mismatch for UPCGWorldVolumetricData::OriginatingObject");
static_assert(offsetof(UPCGWorldVolumetricData, FilteredObjects) == 528, "Offset mismatch for UPCGWorldVolumetricData::FilteredObjects");
static_assert(offsetof(UPCGWorldVolumetricData, World) == 568, "Offset mismatch for UPCGWorldVolumetricData::World");
static_assert(offsetof(UPCGWorldVolumetricData, OriginatingComponent) == 576, "Offset mismatch for UPCGWorldVolumetricData::OriginatingComponent");
static_assert(offsetof(UPCGWorldVolumetricData, ActorFilter) == 584, "Offset mismatch for UPCGWorldVolumetricData::ActorFilter");

// /Script/PCG.PCGWriteDataIndexSettings
// Kind: Class; super: PCGSettings
class UPCGWriteDataIndexSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bAddTag; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    FString IndexTag; // 0x00B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAddAttribute; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00C1
    std::uint8_t IndexAttribute[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGWriteDataIndexSettings, bAddTag) == 168, "Offset mismatch for UPCGWriteDataIndexSettings::bAddTag");
static_assert(offsetof(UPCGWriteDataIndexSettings, IndexTag) == 176, "Offset mismatch for UPCGWriteDataIndexSettings::IndexTag");
static_assert(offsetof(UPCGWriteDataIndexSettings, bAddAttribute) == 192, "Offset mismatch for UPCGWriteDataIndexSettings::bAddAttribute");
static_assert(offsetof(UPCGWriteDataIndexSettings, IndexAttribute) == 200, "Offset mismatch for UPCGWriteDataIndexSettings::IndexAttribute");
