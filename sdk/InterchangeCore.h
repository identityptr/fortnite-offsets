/**
 * decamp dumper generated SDK
 * Package: /Script/InterchangeCore
 */
#pragma once
#include "Basic.h"

// /Script/InterchangeCore.InterchangeLODMeshData
// Kind: ScriptStruct; super: none
struct FInterchangeLODMeshData
{
public:
    FString MeshUid; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString SceneNodeName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t GeometricTransform[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t PivotTransform[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInterchangeLODMeshData, MeshUid) == 0, "Offset mismatch for FInterchangeLODMeshData::MeshUid");
static_assert(offsetof(FInterchangeLODMeshData, SceneNodeName) == 16, "Offset mismatch for FInterchangeLODMeshData::SceneNodeName");
static_assert(offsetof(FInterchangeLODMeshData, Transform) == 32, "Offset mismatch for FInterchangeLODMeshData::Transform");
static_assert(offsetof(FInterchangeLODMeshData, GeometricTransform) == 128, "Offset mismatch for FInterchangeLODMeshData::GeometricTransform");
static_assert(offsetof(FInterchangeLODMeshData, PivotTransform) == 224, "Offset mismatch for FInterchangeLODMeshData::PivotTransform");

// /Script/InterchangeCore.InterchangePipelineContextParams
// Kind: ScriptStruct; super: none
struct FInterchangePipelineContextParams
{
public:
    std::uint8_t ContextType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ImportObjectType; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* ReimportAsset; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* BaseNodeContainer; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FInterchangePipelineContextParams, ContextType) == 0, "Offset mismatch for FInterchangePipelineContextParams::ContextType");
static_assert(offsetof(FInterchangePipelineContextParams, ImportObjectType) == 8, "Offset mismatch for FInterchangePipelineContextParams::ImportObjectType");
static_assert(offsetof(FInterchangePipelineContextParams, ReimportAsset) == 16, "Offset mismatch for FInterchangePipelineContextParams::ReimportAsset");
static_assert(offsetof(FInterchangePipelineContextParams, BaseNodeContainer) == 24, "Offset mismatch for FInterchangePipelineContextParams::BaseNodeContainer");

// /Script/InterchangeCore.InterchangePipelinePropertyStatePerContext
// Kind: ScriptStruct; super: none
struct FInterchangePipelinePropertyStatePerContext
{
public:
    std::uint8_t bVisible; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FInterchangePipelinePropertyStatePerContext, bVisible) == 0, "Offset mismatch for FInterchangePipelinePropertyStatePerContext::bVisible");

// /Script/InterchangeCore.InterchangePipelinePropertyStates
// Kind: ScriptStruct; super: none
struct FInterchangePipelinePropertyStates
{
public:
    std::uint8_t bLocked; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreDialogReset; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BasicLayoutStates[0x1]; // 0x0002 (Size: 0x1, Type: StructProperty)
    std::uint8_t ImportStates[0x1]; // 0x0003 (Size: 0x1, Type: StructProperty)
    std::uint8_t ReimportStates[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInterchangePipelinePropertyStates, bLocked) == 0, "Offset mismatch for FInterchangePipelinePropertyStates::bLocked");
static_assert(offsetof(FInterchangePipelinePropertyStates, bPreDialogReset) == 1, "Offset mismatch for FInterchangePipelinePropertyStates::bPreDialogReset");
static_assert(offsetof(FInterchangePipelinePropertyStates, BasicLayoutStates) == 2, "Offset mismatch for FInterchangePipelinePropertyStates::BasicLayoutStates");
static_assert(offsetof(FInterchangePipelinePropertyStates, ImportStates) == 3, "Offset mismatch for FInterchangePipelinePropertyStates::ImportStates");
static_assert(offsetof(FInterchangePipelinePropertyStates, ReimportStates) == 4, "Offset mismatch for FInterchangePipelinePropertyStates::ReimportStates");

// /Script/InterchangeCore.InterchangeUserDefinedAttributeInfo
// Kind: ScriptStruct; super: none
struct FInterchangeUserDefinedAttributeInfo
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FInterchangeUserDefinedAttributeInfo, Name) == 0, "Offset mismatch for FInterchangeUserDefinedAttributeInfo::Name");

// /Script/InterchangeCore.InterchangeBaseNode
// Kind: Class; super: Object
class UInterchangeBaseNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeCore.InterchangeBaseNodeContainer
// Kind: Class; super: Object
class UInterchangeBaseNodeContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> Nodes; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UInterchangeBaseNodeContainer, Nodes) == 40, "Offset mismatch for UInterchangeBaseNodeContainer::Nodes");

// /Script/InterchangeCore.InterchangeFactoryBase
// Kind: Class; super: Object
class UInterchangeFactoryBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeFactoryBase, Results) == 40, "Offset mismatch for UInterchangeFactoryBase::Results");

// /Script/InterchangeCore.InterchangeFactoryBaseNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeFactoryBaseNode
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    TSet<void*> AttributesAppliedThroughDelegatesKeySet; // 0x00E8 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UInterchangeFactoryBaseNode, AttributesAppliedThroughDelegatesKeySet) == 232, "Offset mismatch for UInterchangeFactoryBaseNode::AttributesAppliedThroughDelegatesKeySet");

// /Script/InterchangeCore.InterchangePipelineBase
// Kind: Class; super: Object
class UInterchangePipelineBase
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

static_assert(offsetof(UInterchangePipelineBase, DestinationName) == 40, "Offset mismatch for UInterchangePipelineBase::DestinationName");
static_assert(offsetof(UInterchangePipelineBase, ContentImportPath) == 56, "Offset mismatch for UInterchangePipelineBase::ContentImportPath");
static_assert(offsetof(UInterchangePipelineBase, bAllowPropertyStatesEdition) == 72, "Offset mismatch for UInterchangePipelineBase::bAllowPropertyStatesEdition");
static_assert(offsetof(UInterchangePipelineBase, bIsReimportContext) == 73, "Offset mismatch for UInterchangePipelineBase::bIsReimportContext");
static_assert(offsetof(UInterchangePipelineBase, bIsShowEssentials) == 74, "Offset mismatch for UInterchangePipelineBase::bIsShowEssentials");
static_assert(offsetof(UInterchangePipelineBase, bFromReimportOrOverride) == 75, "Offset mismatch for UInterchangePipelineBase::bFromReimportOrOverride");
static_assert(offsetof(UInterchangePipelineBase, Results) == 80, "Offset mismatch for UInterchangePipelineBase::Results");
static_assert(offsetof(UInterchangePipelineBase, PropertiesStates) == 88, "Offset mismatch for UInterchangePipelineBase::PropertiesStates");
static_assert(offsetof(UInterchangePipelineBase, CachePropertiesStates) == 104, "Offset mismatch for UInterchangePipelineBase::CachePropertiesStates");
static_assert(offsetof(UInterchangePipelineBase, CacheContextParam) == 120, "Offset mismatch for UInterchangePipelineBase::CacheContextParam");

// /Script/InterchangeCore.InterchangeResult
// Kind: Class; super: Object
class UInterchangeResult
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString SourceAssetName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString DestinationAssetName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString AssetFriendlyName; // 0x0048 (Size: 0x10, Type: StrProperty)
    void* AssetType; // 0x0058 (Size: 0x8, Type: ClassProperty)
    FString InterchangeKey; // 0x0060 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeResult, SourceAssetName) == 40, "Offset mismatch for UInterchangeResult::SourceAssetName");
static_assert(offsetof(UInterchangeResult, DestinationAssetName) == 56, "Offset mismatch for UInterchangeResult::DestinationAssetName");
static_assert(offsetof(UInterchangeResult, AssetFriendlyName) == 72, "Offset mismatch for UInterchangeResult::AssetFriendlyName");
static_assert(offsetof(UInterchangeResult, AssetType) == 88, "Offset mismatch for UInterchangeResult::AssetType");
static_assert(offsetof(UInterchangeResult, InterchangeKey) == 96, "Offset mismatch for UInterchangeResult::InterchangeKey");

// /Script/InterchangeCore.InterchangeResultDisplay_Generic
// Kind: Class; super: InterchangeResultSuccess
class UInterchangeResultDisplay_Generic
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FText Text; // 0x0070 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UInterchangeResultDisplay_Generic, Text) == 112, "Offset mismatch for UInterchangeResultDisplay_Generic::Text");

// /Script/InterchangeCore.InterchangeResultError
// Kind: Class; super: InterchangeResult
class UInterchangeResultError
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString SourceAssetName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString DestinationAssetName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString AssetFriendlyName; // 0x0048 (Size: 0x10, Type: StrProperty)
    void* AssetType; // 0x0058 (Size: 0x8, Type: ClassProperty)
    FString InterchangeKey; // 0x0060 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeResultError, SourceAssetName) == 40, "Offset mismatch for UInterchangeResultError::SourceAssetName");
static_assert(offsetof(UInterchangeResultError, DestinationAssetName) == 56, "Offset mismatch for UInterchangeResultError::DestinationAssetName");
static_assert(offsetof(UInterchangeResultError, AssetFriendlyName) == 72, "Offset mismatch for UInterchangeResultError::AssetFriendlyName");
static_assert(offsetof(UInterchangeResultError, AssetType) == 88, "Offset mismatch for UInterchangeResultError::AssetType");
static_assert(offsetof(UInterchangeResultError, InterchangeKey) == 96, "Offset mismatch for UInterchangeResultError::InterchangeKey");

// /Script/InterchangeCore.InterchangeResultError_Generic
// Kind: Class; super: InterchangeResultError
class UInterchangeResultError_Generic
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FText Text; // 0x0070 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UInterchangeResultError_Generic, Text) == 112, "Offset mismatch for UInterchangeResultError_Generic::Text");

// /Script/InterchangeCore.InterchangeResultError_ReimportFail
// Kind: Class; super: InterchangeResultError
class UInterchangeResultError_ReimportFail
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString SourceAssetName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString DestinationAssetName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString AssetFriendlyName; // 0x0048 (Size: 0x10, Type: StrProperty)
    void* AssetType; // 0x0058 (Size: 0x8, Type: ClassProperty)
    FString InterchangeKey; // 0x0060 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeResultError_ReimportFail, SourceAssetName) == 40, "Offset mismatch for UInterchangeResultError_ReimportFail::SourceAssetName");
static_assert(offsetof(UInterchangeResultError_ReimportFail, DestinationAssetName) == 56, "Offset mismatch for UInterchangeResultError_ReimportFail::DestinationAssetName");
static_assert(offsetof(UInterchangeResultError_ReimportFail, AssetFriendlyName) == 72, "Offset mismatch for UInterchangeResultError_ReimportFail::AssetFriendlyName");
static_assert(offsetof(UInterchangeResultError_ReimportFail, AssetType) == 88, "Offset mismatch for UInterchangeResultError_ReimportFail::AssetType");
static_assert(offsetof(UInterchangeResultError_ReimportFail, InterchangeKey) == 96, "Offset mismatch for UInterchangeResultError_ReimportFail::InterchangeKey");

// /Script/InterchangeCore.InterchangeResultSuccess
// Kind: Class; super: InterchangeResult
class UInterchangeResultSuccess
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString SourceAssetName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString DestinationAssetName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString AssetFriendlyName; // 0x0048 (Size: 0x10, Type: StrProperty)
    void* AssetType; // 0x0058 (Size: 0x8, Type: ClassProperty)
    FString InterchangeKey; // 0x0060 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeResultSuccess, SourceAssetName) == 40, "Offset mismatch for UInterchangeResultSuccess::SourceAssetName");
static_assert(offsetof(UInterchangeResultSuccess, DestinationAssetName) == 56, "Offset mismatch for UInterchangeResultSuccess::DestinationAssetName");
static_assert(offsetof(UInterchangeResultSuccess, AssetFriendlyName) == 72, "Offset mismatch for UInterchangeResultSuccess::AssetFriendlyName");
static_assert(offsetof(UInterchangeResultSuccess, AssetType) == 88, "Offset mismatch for UInterchangeResultSuccess::AssetType");
static_assert(offsetof(UInterchangeResultSuccess, InterchangeKey) == 96, "Offset mismatch for UInterchangeResultSuccess::InterchangeKey");

// /Script/InterchangeCore.InterchangeResultWarning
// Kind: Class; super: InterchangeResult
class UInterchangeResultWarning
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString SourceAssetName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString DestinationAssetName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString AssetFriendlyName; // 0x0048 (Size: 0x10, Type: StrProperty)
    void* AssetType; // 0x0058 (Size: 0x8, Type: ClassProperty)
    FString InterchangeKey; // 0x0060 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeResultWarning, SourceAssetName) == 40, "Offset mismatch for UInterchangeResultWarning::SourceAssetName");
static_assert(offsetof(UInterchangeResultWarning, DestinationAssetName) == 56, "Offset mismatch for UInterchangeResultWarning::DestinationAssetName");
static_assert(offsetof(UInterchangeResultWarning, AssetFriendlyName) == 72, "Offset mismatch for UInterchangeResultWarning::AssetFriendlyName");
static_assert(offsetof(UInterchangeResultWarning, AssetType) == 88, "Offset mismatch for UInterchangeResultWarning::AssetType");
static_assert(offsetof(UInterchangeResultWarning, InterchangeKey) == 96, "Offset mismatch for UInterchangeResultWarning::InterchangeKey");

// /Script/InterchangeCore.InterchangeResultWarning_Generic
// Kind: Class; super: InterchangeResultWarning
class UInterchangeResultWarning_Generic
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FText Text; // 0x0070 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UInterchangeResultWarning_Generic, Text) == 112, "Offset mismatch for UInterchangeResultWarning_Generic::Text");

// /Script/InterchangeCore.InterchangeResultsContainer
// Kind: Class; super: Object
class UInterchangeResultsContainer
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> Results; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInterchangeResultsContainer, Results) == 80, "Offset mismatch for UInterchangeResultsContainer::Results");

// /Script/InterchangeCore.InterchangeSourceData
// Kind: Class; super: Object
class UInterchangeSourceData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Filename; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0038
    TMap<void*, void*> ContextObjectsByTag; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UInterchangeSourceData, Filename) == 40, "Offset mismatch for UInterchangeSourceData::Filename");
static_assert(offsetof(UInterchangeSourceData, ContextObjectsByTag) == 80, "Offset mismatch for UInterchangeSourceData::ContextObjectsByTag");

// /Script/InterchangeCore.InterchangeSourceNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeSourceNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeCore.InterchangeTranslatorBase
// Kind: Class; super: Object
class UInterchangeTranslatorBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeTranslatorBase, Results) == 40, "Offset mismatch for UInterchangeTranslatorBase::Results");
static_assert(offsetof(UInterchangeTranslatorBase, SourceData) == 48, "Offset mismatch for UInterchangeTranslatorBase::SourceData");

// /Script/InterchangeCore.InterchangeTranslatorSettings
// Kind: Class; super: Object
class UInterchangeTranslatorSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI
// Kind: Class; super: Object
class UInterchangeUserDefinedAttributesAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeCore.InterchangeWriterBase
// Kind: Class; super: Object
class UInterchangeWriterBase
{
public:
    std::uint8_t Opaque[1];
};
