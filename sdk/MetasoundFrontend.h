/**
 * decamp dumper generated SDK
 * Package: /Script/MetasoundFrontend
 */
#pragma once
#include "Basic.h"

// /Script/MetasoundFrontend.CatCompositeDataSchema
// Kind: ScriptStruct; super: CatDataTypeSchema
struct FCatCompositeDataSchema
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BaseType[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName FamilyType; // 0x0008 (Size: 0x8, Type: NameProperty)
    FString FriendlyName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsAbstract; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsParentsDefault; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCatCompositeDataSchema, Name) == 0, "Offset mismatch for FCatCompositeDataSchema::Name");
static_assert(offsetof(FCatCompositeDataSchema, BaseType) == 4, "Offset mismatch for FCatCompositeDataSchema::BaseType");
static_assert(offsetof(FCatCompositeDataSchema, FamilyType) == 8, "Offset mismatch for FCatCompositeDataSchema::FamilyType");
static_assert(offsetof(FCatCompositeDataSchema, FriendlyName) == 16, "Offset mismatch for FCatCompositeDataSchema::FriendlyName");
static_assert(offsetof(FCatCompositeDataSchema, bIsAbstract) == 32, "Offset mismatch for FCatCompositeDataSchema::bIsAbstract");
static_assert(offsetof(FCatCompositeDataSchema, bIsParentsDefault) == 33, "Offset mismatch for FCatCompositeDataSchema::bIsParentsDefault");

// /Script/MetasoundFrontend.CatDataTypeSchema
// Kind: ScriptStruct; super: none
struct FCatDataTypeSchema
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BaseType[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName FamilyType; // 0x0008 (Size: 0x8, Type: NameProperty)
    FString FriendlyName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsAbstract; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsParentsDefault; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCatDataTypeSchema, Name) == 0, "Offset mismatch for FCatDataTypeSchema::Name");
static_assert(offsetof(FCatDataTypeSchema, BaseType) == 4, "Offset mismatch for FCatDataTypeSchema::BaseType");
static_assert(offsetof(FCatDataTypeSchema, FamilyType) == 8, "Offset mismatch for FCatDataTypeSchema::FamilyType");
static_assert(offsetof(FCatDataTypeSchema, FriendlyName) == 16, "Offset mismatch for FCatDataTypeSchema::FriendlyName");
static_assert(offsetof(FCatDataTypeSchema, bIsAbstract) == 32, "Offset mismatch for FCatDataTypeSchema::bIsAbstract");
static_assert(offsetof(FCatDataTypeSchema, bIsParentsDefault) == 33, "Offset mismatch for FCatDataTypeSchema::bIsParentsDefault");

// /Script/MetasoundFrontend.CatDiscreteChannel
// Kind: ScriptStruct; super: none
struct FCatDiscreteChannel
{
public:
    float ElevationDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AzimuthDegrees; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ID[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsSpatialized; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCatDiscreteChannel, ElevationDegrees) == 0, "Offset mismatch for FCatDiscreteChannel::ElevationDegrees");
static_assert(offsetof(FCatDiscreteChannel, AzimuthDegrees) == 4, "Offset mismatch for FCatDiscreteChannel::AzimuthDegrees");
static_assert(offsetof(FCatDiscreteChannel, ID) == 8, "Offset mismatch for FCatDiscreteChannel::ID");
static_assert(offsetof(FCatDiscreteChannel, bIsSpatialized) == 12, "Offset mismatch for FCatDiscreteChannel::bIsSpatialized");

// /Script/MetasoundFrontend.CatDiscreteDataSchema
// Kind: ScriptStruct; super: CatDataTypeSchema
struct FCatDiscreteDataSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t OrderPolicy; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> Order; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Speakers; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCatDiscreteDataSchema, OrderPolicy) == 40, "Offset mismatch for FCatDiscreteDataSchema::OrderPolicy");
static_assert(offsetof(FCatDiscreteDataSchema, Order) == 48, "Offset mismatch for FCatDiscreteDataSchema::Order");
static_assert(offsetof(FCatDiscreteDataSchema, Speakers) == 64, "Offset mismatch for FCatDiscreteDataSchema::Speakers");

// /Script/MetasoundFrontend.CatSoundfieldDataSchema
// Kind: ScriptStruct; super: CatDataTypeSchema
struct FCatSoundfieldDataSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumOrders; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCatSoundfieldDataSchema, NumOrders) == 40, "Offset mismatch for FCatSoundfieldDataSchema::NumOrders");

// /Script/MetasoundFrontend.MetaSoundAssetKey
// Kind: ScriptStruct; super: none
struct FMetaSoundAssetKey
{
public:
    std::uint8_t ClassName[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t Version[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetaSoundAssetKey, ClassName) == 0, "Offset mismatch for FMetaSoundAssetKey::ClassName");
static_assert(offsetof(FMetaSoundAssetKey, Version) == 12, "Offset mismatch for FMetaSoundAssetKey::Version");

// /Script/MetasoundFrontend.MetaSoundAssetTagClassCollections
// Kind: ScriptStruct; super: none
struct FMetaSoundAssetTagClassCollections
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetaSoundAssetTagCollections
// Kind: ScriptStruct; super: none
struct FMetaSoundAssetTagCollections
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetaSoundClassInterfaceInfo
// Kind: ScriptStruct; super: none
struct FMetaSoundClassInterfaceInfo
{
public:
    TArray<void*> DefinedInterfaces; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SearchInfo[0x40]; // 0x0010 (Size: 0x40, Type: StructProperty)
    TArray<void*> Inputs; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Outputs; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InheritedInterfaces; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetaSoundClassInterfaceInfo, DefinedInterfaces) == 0, "Offset mismatch for FMetaSoundClassInterfaceInfo::DefinedInterfaces");
static_assert(offsetof(FMetaSoundClassInterfaceInfo, SearchInfo) == 16, "Offset mismatch for FMetaSoundClassInterfaceInfo::SearchInfo");
static_assert(offsetof(FMetaSoundClassInterfaceInfo, Inputs) == 80, "Offset mismatch for FMetaSoundClassInterfaceInfo::Inputs");
static_assert(offsetof(FMetaSoundClassInterfaceInfo, Outputs) == 96, "Offset mismatch for FMetaSoundClassInterfaceInfo::Outputs");
static_assert(offsetof(FMetaSoundClassInterfaceInfo, InheritedInterfaces) == 112, "Offset mismatch for FMetaSoundClassInterfaceInfo::InheritedInterfaces");

// /Script/MetasoundFrontend.MetaSoundClassSearchInfo
// Kind: ScriptStruct; super: none
struct FMetaSoundClassSearchInfo
{
public:
    std::uint8_t ClassDisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t ClassDescription[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    TArray<void*> Hierarchy; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Keywords; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetaSoundClassSearchInfo, ClassDisplayName) == 0, "Offset mismatch for FMetaSoundClassSearchInfo::ClassDisplayName");
static_assert(offsetof(FMetaSoundClassSearchInfo, ClassDescription) == 16, "Offset mismatch for FMetaSoundClassSearchInfo::ClassDescription");
static_assert(offsetof(FMetaSoundClassSearchInfo, Hierarchy) == 32, "Offset mismatch for FMetaSoundClassSearchInfo::Hierarchy");
static_assert(offsetof(FMetaSoundClassSearchInfo, Keywords) == 48, "Offset mismatch for FMetaSoundClassSearchInfo::Keywords");

// /Script/MetasoundFrontend.MetaSoundClassVertexCollectionInfo
// Kind: ScriptStruct; super: none
struct FMetaSoundClassVertexCollectionInfo
{
public:
    TArray<void*> ClassVertexInfo; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetaSoundClassVertexCollectionInfo, ClassVertexInfo) == 0, "Offset mismatch for FMetaSoundClassVertexCollectionInfo::ClassVertexInfo");

// /Script/MetasoundFrontend.MetaSoundClassVertexInfo
// Kind: ScriptStruct; super: none
struct FMetaSoundClassVertexInfo
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t TypeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t AccessType; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMetaSoundClassVertexInfo, Name) == 0, "Offset mismatch for FMetaSoundClassVertexInfo::Name");
static_assert(offsetof(FMetaSoundClassVertexInfo, TypeName) == 4, "Offset mismatch for FMetaSoundClassVertexInfo::TypeName");
static_assert(offsetof(FMetaSoundClassVertexInfo, AccessType) == 8, "Offset mismatch for FMetaSoundClassVertexInfo::AccessType");

// /Script/MetasoundFrontend.MetaSoundDocumentInfo
// Kind: ScriptStruct; super: none
struct FMetaSoundDocumentInfo
{
public:
    std::uint8_t DocumentVersion[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> ReferencedAssetKeys; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsPreset; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMetaSoundDocumentInfo, DocumentVersion) == 0, "Offset mismatch for FMetaSoundDocumentInfo::DocumentVersion");
static_assert(offsetof(FMetaSoundDocumentInfo, ReferencedAssetKeys) == 8, "Offset mismatch for FMetaSoundDocumentInfo::ReferencedAssetKeys");
static_assert(offsetof(FMetaSoundDocumentInfo, bIsPreset) == 24, "Offset mismatch for FMetaSoundDocumentInfo::bIsPreset");

// /Script/MetasoundFrontend.MetaSoundDynamicInterfaceNodeConfiguration
// Kind: ScriptStruct; super: MetaSoundFrontendNodeConfiguration
struct FMetaSoundDynamicInterfaceNodeConfiguration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TMap<void*, void*> SubInterfaceCounts; // 0x0008 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> VariantSelections; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMetaSoundDynamicInterfaceNodeConfiguration, SubInterfaceCounts) == 8, "Offset mismatch for FMetaSoundDynamicInterfaceNodeConfiguration::SubInterfaceCounts");
static_assert(offsetof(FMetaSoundDynamicInterfaceNodeConfiguration, VariantSelections) == 24, "Offset mismatch for FMetaSoundDynamicInterfaceNodeConfiguration::VariantSelections");

// /Script/MetasoundFrontend.MetaSoundFrontendDocumentBuilder
// Kind: ScriptStruct; super: none
struct FMetaSoundFrontendDocumentBuilder
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TScriptInterface<void> DocumentInterface; // 0x0010 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t BuildPageID[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetaSoundFrontendDocumentBuilder, DocumentInterface) == 16, "Offset mismatch for FMetaSoundFrontendDocumentBuilder::DocumentInterface");
static_assert(offsetof(FMetaSoundFrontendDocumentBuilder, BuildPageID) == 32, "Offset mismatch for FMetaSoundFrontendDocumentBuilder::BuildPageID");

// /Script/MetasoundFrontend.MetaSoundFrontendDocumentTemplate
// Kind: ScriptStruct; super: none
struct FMetaSoundFrontendDocumentTemplate
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetaSoundFrontendDocumentTemplateVertexMetadata
// Kind: ScriptStruct; super: none
struct FMetaSoundFrontendDocumentTemplateVertexMetadata
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetaSoundFrontendDocumentVertexTemplate
// Kind: ScriptStruct; super: MetaSoundFrontendDocumentTemplate
struct FMetaSoundFrontendDocumentVertexTemplate
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TMap<void*, void*> VertexMetadata; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMetaSoundFrontendDocumentVertexTemplate, VertexMetadata) == 8, "Offset mismatch for FMetaSoundFrontendDocumentVertexTemplate::VertexMetadata");

// /Script/MetasoundFrontend.MetaSoundFrontendGraphComment
// Kind: ScriptStruct; super: none
struct FMetaSoundFrontendGraphComment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetaSoundFrontendNodeConfiguration
// Kind: ScriptStruct; super: none
struct FMetaSoundFrontendNodeConfiguration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetaSoundFrontendPresetTemplate
// Kind: ScriptStruct; super: MetaSoundFrontendDocumentVertexTemplate
struct FMetaSoundFrontendPresetTemplate
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TScriptInterface<void> Parent; // 0x0018 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FMetaSoundFrontendPresetTemplate, Parent) == 24, "Offset mismatch for FMetaSoundFrontendPresetTemplate::Parent");

// /Script/MetasoundFrontend.MetaSoundFrontendPresetVertexMetadata
// Kind: ScriptStruct; super: MetaSoundFrontendDocumentTemplateVertexMetadata
struct FMetaSoundFrontendPresetVertexMetadata
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bOverrideInheritedDefault; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMetaSoundFrontendPresetVertexMetadata, bOverrideInheritedDefault) == 8, "Offset mismatch for FMetaSoundFrontendPresetVertexMetadata::bOverrideInheritedDefault");

// /Script/MetasoundFrontend.MetaSoundFrontendTemplateNodeConfiguration
// Kind: ScriptStruct; super: MetaSoundFrontendNodeConfiguration
struct FMetaSoundFrontendTemplateNodeConfiguration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetasoundCommentNodeIntVector
// Kind: ScriptStruct; super: IntVector2
struct FMetasoundCommentNodeIntVector
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMetasoundCommentNodeIntVector, X) == 0, "Offset mismatch for FMetasoundCommentNodeIntVector::X");
static_assert(offsetof(FMetasoundCommentNodeIntVector, Y) == 4, "Offset mismatch for FMetasoundCommentNodeIntVector::Y");

// /Script/MetasoundFrontend.MetasoundFrontendClass
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendClass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t MetaData[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t Interface[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendClass, ID) == 8, "Offset mismatch for FMetasoundFrontendClass::ID");
static_assert(offsetof(FMetasoundFrontendClass, MetaData) == 24, "Offset mismatch for FMetasoundFrontendClass::MetaData");
static_assert(offsetof(FMetasoundFrontendClass, Interface) == 64, "Offset mismatch for FMetasoundFrontendClass::Interface");

// /Script/MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendClassEnvironmentVariable
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t TypeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsRequired; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMetasoundFrontendClassEnvironmentVariable, Name) == 0, "Offset mismatch for FMetasoundFrontendClassEnvironmentVariable::Name");
static_assert(offsetof(FMetasoundFrontendClassEnvironmentVariable, TypeName) == 4, "Offset mismatch for FMetasoundFrontendClassEnvironmentVariable::TypeName");
static_assert(offsetof(FMetasoundFrontendClassEnvironmentVariable, bIsRequired) == 8, "Offset mismatch for FMetasoundFrontendClassEnvironmentVariable::bIsRequired");

// /Script/MetasoundFrontend.MetasoundFrontendClassInput
// Kind: ScriptStruct; super: MetasoundFrontendClassVertex
struct FMetasoundFrontendClassInput
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Defaults; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetasoundFrontendClassInput, Defaults) == 48, "Offset mismatch for FMetasoundFrontendClassInput::Defaults");

// /Script/MetasoundFrontend.MetasoundFrontendClassInputDefault
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendClassInputDefault
{
public:
    std::uint8_t Literal[0x58]; // 0x0000 (Size: 0x58, Type: StructProperty)
    std::uint8_t PageId[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendClassInputDefault, Literal) == 0, "Offset mismatch for FMetasoundFrontendClassInputDefault::Literal");
static_assert(offsetof(FMetasoundFrontendClassInputDefault, PageId) == 88, "Offset mismatch for FMetasoundFrontendClassInputDefault::PageId");

// /Script/MetasoundFrontend.MetasoundFrontendClassInterface
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendClassInterface
{
public:
    TArray<void*> Inputs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Outputs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Environment; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ChangeID[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendClassInterface, Inputs) == 0, "Offset mismatch for FMetasoundFrontendClassInterface::Inputs");
static_assert(offsetof(FMetasoundFrontendClassInterface, Outputs) == 16, "Offset mismatch for FMetasoundFrontendClassInterface::Outputs");
static_assert(offsetof(FMetasoundFrontendClassInterface, Environment) == 32, "Offset mismatch for FMetasoundFrontendClassInterface::Environment");
static_assert(offsetof(FMetasoundFrontendClassInterface, ChangeID) == 48, "Offset mismatch for FMetasoundFrontendClassInterface::ChangeID");

// /Script/MetasoundFrontend.MetasoundFrontendClassMetadata
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendClassMetadata
{
public:
    std::uint8_t ClassName[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t Version[0x8]; // 0x000C (Size: 0x8, Type: StructProperty)
    std::uint8_t Type; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0015
    std::uint16_t AccessFlags; // 0x0016 (Size: 0x2, Type: UInt16Property)
    std::uint8_t ChangeID[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendClassMetadata, ClassName) == 0, "Offset mismatch for FMetasoundFrontendClassMetadata::ClassName");
static_assert(offsetof(FMetasoundFrontendClassMetadata, Version) == 12, "Offset mismatch for FMetasoundFrontendClassMetadata::Version");
static_assert(offsetof(FMetasoundFrontendClassMetadata, Type) == 20, "Offset mismatch for FMetasoundFrontendClassMetadata::Type");
static_assert(offsetof(FMetasoundFrontendClassMetadata, AccessFlags) == 22, "Offset mismatch for FMetasoundFrontendClassMetadata::AccessFlags");
static_assert(offsetof(FMetasoundFrontendClassMetadata, ChangeID) == 24, "Offset mismatch for FMetasoundFrontendClassMetadata::ChangeID");

// /Script/MetasoundFrontend.MetasoundFrontendClassName
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendClassName
{
public:
    std::uint8_t Namespace[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName Variant; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMetasoundFrontendClassName, Namespace) == 0, "Offset mismatch for FMetasoundFrontendClassName::Namespace");
static_assert(offsetof(FMetasoundFrontendClassName, Name) == 4, "Offset mismatch for FMetasoundFrontendClassName::Name");
static_assert(offsetof(FMetasoundFrontendClassName, Variant) == 8, "Offset mismatch for FMetasoundFrontendClassName::Variant");

// /Script/MetasoundFrontend.MetasoundFrontendClassOutput
// Kind: ScriptStruct; super: MetasoundFrontendClassVertex
struct FMetasoundFrontendClassOutput
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t NodeId[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t AccessType; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMetasoundFrontendClassOutput, NodeId) == 24, "Offset mismatch for FMetasoundFrontendClassOutput::NodeId");
static_assert(offsetof(FMetasoundFrontendClassOutput, AccessType) == 40, "Offset mismatch for FMetasoundFrontendClassOutput::AccessType");

// /Script/MetasoundFrontend.MetasoundFrontendClassStyle
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendClassStyle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetasoundFrontendClassStyleDisplay
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendClassStyleDisplay
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetasoundFrontendClassVariable
// Kind: ScriptStruct; super: MetasoundFrontendClassVertex
struct FMetasoundFrontendClassVariable
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultLiteral[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendClassVariable, DefaultLiteral) == 48, "Offset mismatch for FMetasoundFrontendClassVariable::DefaultLiteral");

// /Script/MetasoundFrontend.MetasoundFrontendClassVertex
// Kind: ScriptStruct; super: MetasoundFrontendVertex
struct FMetasoundFrontendClassVertex
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t NodeId[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t AccessType; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMetasoundFrontendClassVertex, NodeId) == 24, "Offset mismatch for FMetasoundFrontendClassVertex::NodeId");
static_assert(offsetof(FMetasoundFrontendClassVertex, AccessType) == 40, "Offset mismatch for FMetasoundFrontendClassVertex::AccessType");

// /Script/MetasoundFrontend.MetasoundFrontendDocument
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendDocument
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MetaData[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Interfaces[0x10]; // 0x0020 (Size: 0x10, Type: SetProperty)
    std::uint8_t RootGraph[0x90]; // 0x0030 (Size: 0x90, Type: StructProperty)
    TArray<void*> SubGraphs; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Dependencies; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Template[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint32_t IdCounter; // 0x00F0 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMetasoundFrontendDocument, MetaData) == 16, "Offset mismatch for FMetasoundFrontendDocument::MetaData");
static_assert(offsetof(FMetasoundFrontendDocument, Interfaces) == 32, "Offset mismatch for FMetasoundFrontendDocument::Interfaces");
static_assert(offsetof(FMetasoundFrontendDocument, RootGraph) == 48, "Offset mismatch for FMetasoundFrontendDocument::RootGraph");
static_assert(offsetof(FMetasoundFrontendDocument, SubGraphs) == 192, "Offset mismatch for FMetasoundFrontendDocument::SubGraphs");
static_assert(offsetof(FMetasoundFrontendDocument, Dependencies) == 208, "Offset mismatch for FMetasoundFrontendDocument::Dependencies");
static_assert(offsetof(FMetasoundFrontendDocument, Template) == 224, "Offset mismatch for FMetasoundFrontendDocument::Template");
static_assert(offsetof(FMetasoundFrontendDocument, IdCounter) == 240, "Offset mismatch for FMetasoundFrontendDocument::IdCounter");

// /Script/MetasoundFrontend.MetasoundFrontendDocumentMetadata
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendDocumentMetadata
{
public:
    std::uint8_t Version[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendDocumentMetadata, Version) == 0, "Offset mismatch for FMetasoundFrontendDocumentMetadata::Version");

// /Script/MetasoundFrontend.MetasoundFrontendEdge
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendEdge
{
public:
    std::uint8_t FromNodeID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t FromVertexID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToNodeID[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToVertexID[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendEdge, FromNodeID) == 0, "Offset mismatch for FMetasoundFrontendEdge::FromNodeID");
static_assert(offsetof(FMetasoundFrontendEdge, FromVertexID) == 16, "Offset mismatch for FMetasoundFrontendEdge::FromVertexID");
static_assert(offsetof(FMetasoundFrontendEdge, ToNodeID) == 32, "Offset mismatch for FMetasoundFrontendEdge::ToNodeID");
static_assert(offsetof(FMetasoundFrontendEdge, ToVertexID) == 48, "Offset mismatch for FMetasoundFrontendEdge::ToVertexID");

// /Script/MetasoundFrontend.MetasoundFrontendEdgeStyle
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendEdgeStyle
{
public:
    std::uint8_t NodeId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName OutputName; // 0x0010 (Size: 0x8, Type: NameProperty)
    TArray<void*> LiteralColorPairs; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetasoundFrontendEdgeStyle, NodeId) == 0, "Offset mismatch for FMetasoundFrontendEdgeStyle::NodeId");
static_assert(offsetof(FMetasoundFrontendEdgeStyle, OutputName) == 16, "Offset mismatch for FMetasoundFrontendEdgeStyle::OutputName");
static_assert(offsetof(FMetasoundFrontendEdgeStyle, LiteralColorPairs) == 24, "Offset mismatch for FMetasoundFrontendEdgeStyle::LiteralColorPairs");

// /Script/MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendEdgeStyleLiteralColorPair
{
public:
    std::uint8_t Value[0x58]; // 0x0000 (Size: 0x58, Type: StructProperty)
    std::uint8_t Color[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendEdgeStyleLiteralColorPair, Value) == 0, "Offset mismatch for FMetasoundFrontendEdgeStyleLiteralColorPair::Value");
static_assert(offsetof(FMetasoundFrontendEdgeStyleLiteralColorPair, Color) == 88, "Offset mismatch for FMetasoundFrontendEdgeStyleLiteralColorPair::Color");

// /Script/MetasoundFrontend.MetasoundFrontendGraph
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendGraph
{
public:
    TArray<void*> Nodes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Edges; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Variables; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PageId[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendGraph, Nodes) == 0, "Offset mismatch for FMetasoundFrontendGraph::Nodes");
static_assert(offsetof(FMetasoundFrontendGraph, Edges) == 16, "Offset mismatch for FMetasoundFrontendGraph::Edges");
static_assert(offsetof(FMetasoundFrontendGraph, Variables) == 32, "Offset mismatch for FMetasoundFrontendGraph::Variables");
static_assert(offsetof(FMetasoundFrontendGraph, PageId) == 48, "Offset mismatch for FMetasoundFrontendGraph::PageId");

// /Script/MetasoundFrontend.MetasoundFrontendGraphClass
// Kind: ScriptStruct; super: MetasoundFrontendClass
struct FMetasoundFrontendGraphClass
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> PagedGraphs; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetasoundFrontendGraphClass, PagedGraphs) == 128, "Offset mismatch for FMetasoundFrontendGraphClass::PagedGraphs");

// /Script/MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendGraphClassPresetOptions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetasoundFrontendGraphLayer
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendGraphLayer
{
public:
    TArray<void*> Dependencies; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Graph[0x40]; // 0x0010 (Size: 0x40, Type: StructProperty)
    TArray<void*> Inputs; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Outputs; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetasoundFrontendGraphLayer, Dependencies) == 0, "Offset mismatch for FMetasoundFrontendGraphLayer::Dependencies");
static_assert(offsetof(FMetasoundFrontendGraphLayer, Graph) == 16, "Offset mismatch for FMetasoundFrontendGraphLayer::Graph");
static_assert(offsetof(FMetasoundFrontendGraphLayer, Inputs) == 80, "Offset mismatch for FMetasoundFrontendGraphLayer::Inputs");
static_assert(offsetof(FMetasoundFrontendGraphLayer, Outputs) == 96, "Offset mismatch for FMetasoundFrontendGraphLayer::Outputs");

// /Script/MetasoundFrontend.MetasoundFrontendGraphStyle
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendGraphStyle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetasoundFrontendInterface
// Kind: ScriptStruct; super: MetasoundFrontendClassInterface
struct FMetasoundFrontendInterface
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t MetaData[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendInterface, MetaData) == 64, "Offset mismatch for FMetasoundFrontendInterface::MetaData");

// /Script/MetasoundFrontend.MetasoundFrontendInterfaceBinding
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendInterfaceBinding
{
public:
    std::uint8_t OutputInterfaceVersion[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t InputInterfaceVersion[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::int32_t BindingPriority; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    TArray<void*> VertexBindings; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetasoundFrontendInterfaceBinding, OutputInterfaceVersion) == 0, "Offset mismatch for FMetasoundFrontendInterfaceBinding::OutputInterfaceVersion");
static_assert(offsetof(FMetasoundFrontendInterfaceBinding, InputInterfaceVersion) == 12, "Offset mismatch for FMetasoundFrontendInterfaceBinding::InputInterfaceVersion");
static_assert(offsetof(FMetasoundFrontendInterfaceBinding, BindingPriority) == 24, "Offset mismatch for FMetasoundFrontendInterfaceBinding::BindingPriority");
static_assert(offsetof(FMetasoundFrontendInterfaceBinding, VertexBindings) == 32, "Offset mismatch for FMetasoundFrontendInterfaceBinding::VertexBindings");

// /Script/MetasoundFrontend.MetasoundFrontendInterfaceMetadata
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendInterfaceMetadata
{
public:
    std::uint8_t Version[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> UClassOptions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetasoundFrontendInterfaceMetadata, Version) == 0, "Offset mismatch for FMetasoundFrontendInterfaceMetadata::Version");
static_assert(offsetof(FMetasoundFrontendInterfaceMetadata, UClassOptions) == 16, "Offset mismatch for FMetasoundFrontendInterfaceMetadata::UClassOptions");

// /Script/MetasoundFrontend.MetasoundFrontendInterfaceStyle
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendInterfaceStyle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetasoundFrontendInterfaceUClassOptions
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendInterfaceUClassOptions
{
public:
    std::uint8_t ClassPath[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsModifiable; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDefault; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMetasoundFrontendInterfaceUClassOptions, ClassPath) == 0, "Offset mismatch for FMetasoundFrontendInterfaceUClassOptions::ClassPath");
static_assert(offsetof(FMetasoundFrontendInterfaceUClassOptions, bIsModifiable) == 8, "Offset mismatch for FMetasoundFrontendInterfaceUClassOptions::bIsModifiable");
static_assert(offsetof(FMetasoundFrontendInterfaceUClassOptions, bIsDefault) == 9, "Offset mismatch for FMetasoundFrontendInterfaceUClassOptions::bIsDefault");

// /Script/MetasoundFrontend.MetasoundFrontendInterfaceVertexBinding
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendInterfaceVertexBinding
{
public:
    std::uint8_t OutputName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName InputName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMetasoundFrontendInterfaceVertexBinding, OutputName) == 0, "Offset mismatch for FMetasoundFrontendInterfaceVertexBinding::OutputName");
static_assert(offsetof(FMetasoundFrontendInterfaceVertexBinding, InputName) == 4, "Offset mismatch for FMetasoundFrontendInterfaceVertexBinding::InputName");

// /Script/MetasoundFrontend.MetasoundFrontendLiteral
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendLiteral
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t AsNumDefault; // 0x0004 (Size: 0x4, Type: IntProperty)
    TArray<void*> AsBoolean; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AsInteger; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AsFloat; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AsString; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AsUObject; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetasoundFrontendLiteral, Type) == 0, "Offset mismatch for FMetasoundFrontendLiteral::Type");
static_assert(offsetof(FMetasoundFrontendLiteral, AsNumDefault) == 4, "Offset mismatch for FMetasoundFrontendLiteral::AsNumDefault");
static_assert(offsetof(FMetasoundFrontendLiteral, AsBoolean) == 8, "Offset mismatch for FMetasoundFrontendLiteral::AsBoolean");
static_assert(offsetof(FMetasoundFrontendLiteral, AsInteger) == 24, "Offset mismatch for FMetasoundFrontendLiteral::AsInteger");
static_assert(offsetof(FMetasoundFrontendLiteral, AsFloat) == 40, "Offset mismatch for FMetasoundFrontendLiteral::AsFloat");
static_assert(offsetof(FMetasoundFrontendLiteral, AsString) == 56, "Offset mismatch for FMetasoundFrontendLiteral::AsString");
static_assert(offsetof(FMetasoundFrontendLiteral, AsUObject) == 72, "Offset mismatch for FMetasoundFrontendLiteral::AsUObject");

// /Script/MetasoundFrontend.MetasoundFrontendNode
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendNode
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClassID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FName Name; // 0x0020 (Size: 0x8, Type: NameProperty)
    std::uint8_t Interface[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    TArray<void*> InputLiterals; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Configuration[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClassInterfaceOverride[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendNode, ID) == 0, "Offset mismatch for FMetasoundFrontendNode::ID");
static_assert(offsetof(FMetasoundFrontendNode, ClassID) == 16, "Offset mismatch for FMetasoundFrontendNode::ClassID");
static_assert(offsetof(FMetasoundFrontendNode, Name) == 32, "Offset mismatch for FMetasoundFrontendNode::Name");
static_assert(offsetof(FMetasoundFrontendNode, Interface) == 40, "Offset mismatch for FMetasoundFrontendNode::Interface");
static_assert(offsetof(FMetasoundFrontendNode, InputLiterals) == 88, "Offset mismatch for FMetasoundFrontendNode::InputLiterals");
static_assert(offsetof(FMetasoundFrontendNode, Configuration) == 104, "Offset mismatch for FMetasoundFrontendNode::Configuration");
static_assert(offsetof(FMetasoundFrontendNode, ClassInterfaceOverride) == 120, "Offset mismatch for FMetasoundFrontendNode::ClassInterfaceOverride");

// /Script/MetasoundFrontend.MetasoundFrontendNodeInterface
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendNodeInterface
{
public:
    TArray<void*> Inputs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Outputs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Environment; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetasoundFrontendNodeInterface, Inputs) == 0, "Offset mismatch for FMetasoundFrontendNodeInterface::Inputs");
static_assert(offsetof(FMetasoundFrontendNodeInterface, Outputs) == 16, "Offset mismatch for FMetasoundFrontendNodeInterface::Outputs");
static_assert(offsetof(FMetasoundFrontendNodeInterface, Environment) == 32, "Offset mismatch for FMetasoundFrontendNodeInterface::Environment");

// /Script/MetasoundFrontend.MetasoundFrontendNodeStyle
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendNodeStyle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendNodeStyleDisplay
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetasoundFrontendVariable
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendVariable
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t TypeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t Literal[0x58]; // 0x0008 (Size: 0x58, Type: StructProperty)
    std::uint8_t ID[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t VariableNodeID[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t MutatorNodeID[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    TArray<void*> AccessorNodeIDs; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeferredAccessorNodeIDs; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMetasoundFrontendVariable, Name) == 0, "Offset mismatch for FMetasoundFrontendVariable::Name");
static_assert(offsetof(FMetasoundFrontendVariable, TypeName) == 4, "Offset mismatch for FMetasoundFrontendVariable::TypeName");
static_assert(offsetof(FMetasoundFrontendVariable, Literal) == 8, "Offset mismatch for FMetasoundFrontendVariable::Literal");
static_assert(offsetof(FMetasoundFrontendVariable, ID) == 96, "Offset mismatch for FMetasoundFrontendVariable::ID");
static_assert(offsetof(FMetasoundFrontendVariable, VariableNodeID) == 112, "Offset mismatch for FMetasoundFrontendVariable::VariableNodeID");
static_assert(offsetof(FMetasoundFrontendVariable, MutatorNodeID) == 128, "Offset mismatch for FMetasoundFrontendVariable::MutatorNodeID");
static_assert(offsetof(FMetasoundFrontendVariable, AccessorNodeIDs) == 144, "Offset mismatch for FMetasoundFrontendVariable::AccessorNodeIDs");
static_assert(offsetof(FMetasoundFrontendVariable, DeferredAccessorNodeIDs) == 160, "Offset mismatch for FMetasoundFrontendVariable::DeferredAccessorNodeIDs");

// /Script/MetasoundFrontend.MetasoundFrontendVersion
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendVersion
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Number[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendVersion, Name) == 0, "Offset mismatch for FMetasoundFrontendVersion::Name");
static_assert(offsetof(FMetasoundFrontendVersion, Number) == 4, "Offset mismatch for FMetasoundFrontendVersion::Number");

// /Script/MetasoundFrontend.MetasoundFrontendVersionNumber
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendVersionNumber
{
public:
    std::int32_t Major; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Minor; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMetasoundFrontendVersionNumber, Major) == 0, "Offset mismatch for FMetasoundFrontendVersionNumber::Major");
static_assert(offsetof(FMetasoundFrontendVersionNumber, Minor) == 4, "Offset mismatch for FMetasoundFrontendVersionNumber::Minor");

// /Script/MetasoundFrontend.MetasoundFrontendVertex
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendVertex
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t TypeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t VertexID[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendVertex, Name) == 0, "Offset mismatch for FMetasoundFrontendVertex::Name");
static_assert(offsetof(FMetasoundFrontendVertex, TypeName) == 4, "Offset mismatch for FMetasoundFrontendVertex::TypeName");
static_assert(offsetof(FMetasoundFrontendVertex, VertexID) == 8, "Offset mismatch for FMetasoundFrontendVertex::VertexID");

// /Script/MetasoundFrontend.MetasoundFrontendVertexHandle
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendVertexHandle
{
public:
    std::uint8_t NodeId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t VertexID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendVertexHandle, NodeId) == 0, "Offset mismatch for FMetasoundFrontendVertexHandle::NodeId");
static_assert(offsetof(FMetasoundFrontendVertexHandle, VertexID) == 16, "Offset mismatch for FMetasoundFrontendVertexHandle::VertexID");

// /Script/MetasoundFrontend.MetasoundFrontendVertexLiteral
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendVertexLiteral
{
public:
    std::uint8_t VertexID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Value[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetasoundFrontendVertexLiteral, VertexID) == 0, "Offset mismatch for FMetasoundFrontendVertexLiteral::VertexID");
static_assert(offsetof(FMetasoundFrontendVertexLiteral, Value) == 16, "Offset mismatch for FMetasoundFrontendVertexLiteral::Value");

// /Script/MetasoundFrontend.MetasoundFrontendVertexMetadata
// Kind: ScriptStruct; super: none
struct FMetasoundFrontendVertexMetadata
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.NodeTemplateGenerateInterfaceParams
// Kind: ScriptStruct; super: none
struct FNodeTemplateGenerateInterfaceParams
{
public:
    TArray<void*> InputsToConnect; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputsToConnect; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNodeTemplateGenerateInterfaceParams, InputsToConnect) == 0, "Offset mismatch for FNodeTemplateGenerateInterfaceParams::InputsToConnect");
static_assert(offsetof(FNodeTemplateGenerateInterfaceParams, OutputsToConnect) == 16, "Offset mismatch for FNodeTemplateGenerateInterfaceParams::OutputsToConnect");

// /Script/MetasoundFrontend.MetaSoundBuilderDocument
// Kind: Class; super: Object
class UMetaSoundBuilderDocument
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Document[0xF8]; // 0x0030 (Size: 0xF8, Type: StructProperty)
    void* MetaSoundUClass; // 0x0128 (Size: 0x8, Type: ClassProperty)
    void* BuilderUClass; // 0x0130 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMetaSoundBuilderDocument, Document) == 48, "Offset mismatch for UMetaSoundBuilderDocument::Document");
static_assert(offsetof(UMetaSoundBuilderDocument, MetaSoundUClass) == 296, "Offset mismatch for UMetaSoundBuilderDocument::MetaSoundUClass");
static_assert(offsetof(UMetaSoundBuilderDocument, BuilderUClass) == 304, "Offset mismatch for UMetaSoundBuilderDocument::BuilderUClass");

// /Script/MetasoundFrontend.MetaSoundDocumentInterface
// Kind: Class; super: Interface
class UMetaSoundDocumentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetaSoundFrontendMemberMetadata
// Kind: Class; super: Object
class UMetaSoundFrontendMemberMetadata
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundFrontend.MetasoundParameterPack
// Kind: Class; super: Object
class UMetasoundParameterPack
{
public:
    std::uint8_t Opaque[1];
};
