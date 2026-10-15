/**
 * decamp dumper generated SDK
 * Package: /Script/MetasoundEngine
 */
#pragma once
#include "Basic.h"

// /Script/MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
// Kind: ScriptStruct; super: none
struct FDefaultMetaSoundAssetAutoUpdateSettings
{
public:
    std::uint8_t Metasound[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDefaultMetaSoundAssetAutoUpdateSettings, Metasound) == 0, "Offset mismatch for FDefaultMetaSoundAssetAutoUpdateSettings::Metasound");

// /Script/MetasoundEngine.MetaSoundAssetDirectory
// Kind: ScriptStruct; super: none
struct FMetaSoundAssetDirectory
{
public:
    std::uint8_t Directory[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetaSoundAssetDirectory, Directory) == 0, "Offset mismatch for FMetaSoundAssetDirectory::Directory");

// /Script/MetasoundEngine.MetaSoundAsyncAssetDependencies
// Kind: ScriptStruct; super: none
struct FMetaSoundAsyncAssetDependencies
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundEngine.MetaSoundBuilderNodeInputHandle
// Kind: ScriptStruct; super: MetasoundFrontendVertexHandle
struct FMetaSoundBuilderNodeInputHandle
{
public:
    std::uint8_t NodeId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t VertexID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetaSoundBuilderNodeInputHandle, NodeId) == 0, "Offset mismatch for FMetaSoundBuilderNodeInputHandle::NodeId");
static_assert(offsetof(FMetaSoundBuilderNodeInputHandle, VertexID) == 16, "Offset mismatch for FMetaSoundBuilderNodeInputHandle::VertexID");

// /Script/MetasoundEngine.MetaSoundBuilderNodeOutputHandle
// Kind: ScriptStruct; super: MetasoundFrontendVertexHandle
struct FMetaSoundBuilderNodeOutputHandle
{
public:
    std::uint8_t NodeId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t VertexID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetaSoundBuilderNodeOutputHandle, NodeId) == 0, "Offset mismatch for FMetaSoundBuilderNodeOutputHandle::NodeId");
static_assert(offsetof(FMetaSoundBuilderNodeOutputHandle, VertexID) == 16, "Offset mismatch for FMetaSoundBuilderNodeOutputHandle::VertexID");

// /Script/MetasoundEngine.MetaSoundBuilderOptions
// Kind: ScriptStruct; super: none
struct FMetaSoundBuilderOptions
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bForceUniqueClassName; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddToRegistry; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    TScriptInterface<void> ExistingMetaSound; // 0x0008 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FMetaSoundBuilderOptions, Name) == 0, "Offset mismatch for FMetaSoundBuilderOptions::Name");
static_assert(offsetof(FMetaSoundBuilderOptions, bForceUniqueClassName) == 4, "Offset mismatch for FMetaSoundBuilderOptions::bForceUniqueClassName");
static_assert(offsetof(FMetaSoundBuilderOptions, bAddToRegistry) == 5, "Offset mismatch for FMetaSoundBuilderOptions::bAddToRegistry");
static_assert(offsetof(FMetaSoundBuilderOptions, ExistingMetaSound) == 8, "Offset mismatch for FMetaSoundBuilderOptions::ExistingMetaSound");

// /Script/MetasoundEngine.MetaSoundNodeHandle
// Kind: ScriptStruct; super: none
struct FMetaSoundNodeHandle
{
public:
    std::uint8_t NodeId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetaSoundNodeHandle, NodeId) == 0, "Offset mismatch for FMetaSoundNodeHandle::NodeId");

// /Script/MetasoundEngine.MetaSoundOutput
// Kind: ScriptStruct; super: SoundGeneratorOutput
struct FMetaSoundOutput
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMetaSoundOutput, Name) == 0, "Offset mismatch for FMetaSoundOutput::Name");

// /Script/MetasoundEngine.MetaSoundPageSettings
// Kind: ScriptStruct; super: none
struct FMetaSoundPageSettings
{
public:
    std::uint8_t UniqueID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName Name; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMetaSoundPageSettings, UniqueID) == 0, "Offset mismatch for FMetaSoundPageSettings::UniqueID");
static_assert(offsetof(FMetaSoundPageSettings, Name) == 16, "Offset mismatch for FMetaSoundPageSettings::Name");

// /Script/MetasoundEngine.MetaSoundParameterOverride
// Kind: ScriptStruct; super: none
struct FMetaSoundParameterOverride
{
public:
    FString Asset; // 0x0000 (Size: 0x10, Type: StrProperty)
    FName Input; // 0x0010 (Size: 0x8, Type: NameProperty)
    FString Value; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMetaSoundParameterOverride, Asset) == 0, "Offset mismatch for FMetaSoundParameterOverride::Asset");
static_assert(offsetof(FMetaSoundParameterOverride, Input) == 16, "Offset mismatch for FMetaSoundParameterOverride::Input");
static_assert(offsetof(FMetaSoundParameterOverride, Value) == 24, "Offset mismatch for FMetaSoundParameterOverride::Value");

// /Script/MetasoundEngine.MetaSoundQualitySettings
// Kind: ScriptStruct; super: none
struct FMetaSoundQualitySettings
{
public:
    std::uint8_t UniqueID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName Name; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t SampleRate[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t BlockRate[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetaSoundQualitySettings, UniqueID) == 0, "Offset mismatch for FMetaSoundQualitySettings::UniqueID");
static_assert(offsetof(FMetaSoundQualitySettings, Name) == 16, "Offset mismatch for FMetaSoundQualitySettings::Name");
static_assert(offsetof(FMetaSoundQualitySettings, SampleRate) == 24, "Offset mismatch for FMetaSoundQualitySettings::SampleRate");
static_assert(offsetof(FMetaSoundQualitySettings, BlockRate) == 48, "Offset mismatch for FMetaSoundQualitySettings::BlockRate");

// /Script/MetasoundEngine.MetaSoundRandomizerTemplate
// Kind: ScriptStruct; super: MetaSoundFrontendDocumentTemplate
struct FMetaSoundRandomizerTemplate
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsOneShot; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    TArray<void*> Sounds; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pitch[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetaSoundRandomizerTemplate, bIsOneShot) == 8, "Offset mismatch for FMetaSoundRandomizerTemplate::bIsOneShot");
static_assert(offsetof(FMetaSoundRandomizerTemplate, Sounds) == 16, "Offset mismatch for FMetaSoundRandomizerTemplate::Sounds");
static_assert(offsetof(FMetaSoundRandomizerTemplate, Pitch) == 32, "Offset mismatch for FMetaSoundRandomizerTemplate::Pitch");

// /Script/MetasoundEngine.MetaSoundAssetSubsystem
// Kind: Class; super: EngineSubsystem
class UMetaSoundAssetSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundEngine.MetaSoundBuilderBase
// Kind: Class; super: Object
class UMetaSoundBuilderBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Builder[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMetaSoundBuilderBase, Builder) == 40, "Offset mismatch for UMetaSoundBuilderBase::Builder");

// /Script/MetasoundEngine.MetaSoundBuilderSubsystem
// Kind: Class; super: EngineSubsystem
class UMetaSoundBuilderSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> NamedBuilders; // 0x0030 (Size: 0x10, Type: MapProperty)
    void* ParameterOverrides; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMetaSoundBuilderSubsystem, NamedBuilders) == 48, "Offset mismatch for UMetaSoundBuilderSubsystem::NamedBuilders");
static_assert(offsetof(UMetaSoundBuilderSubsystem, ParameterOverrides) == 64, "Offset mismatch for UMetaSoundBuilderSubsystem::ParameterOverrides");

// /Script/MetasoundEngine.MetaSoundCacheSubsystem
// Kind: Class; super: AudioEngineSubsystem
class UMetaSoundCacheSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundEngine.MetaSoundOutputSubsystem
// Kind: Class; super: WorldSubsystem
class UMetaSoundOutputSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundEngine.MetaSoundParameterOverrides
// Kind: Class; super: Object
class UMetaSoundParameterOverrides
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Overrides; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMetaSoundParameterOverrides, Overrides) == 40, "Offset mismatch for UMetaSoundParameterOverrides::Overrides");

// /Script/MetasoundEngine.MetaSoundPatch
// Kind: Class; super: Object
class UMetaSoundPatch
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t RootMetaSoundDocument[0xF8]; // 0x0070 (Size: 0xF8, Type: StructProperty)
    std::uint8_t ReferencedAssetClassKeys[0x10]; // 0x0168 (Size: 0x10, Type: SetProperty)
    TSet<void*> ReferencedAssetClassObjects; // 0x0178 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UMetaSoundPatch, RootMetaSoundDocument) == 112, "Offset mismatch for UMetaSoundPatch::RootMetaSoundDocument");
static_assert(offsetof(UMetaSoundPatch, ReferencedAssetClassKeys) == 360, "Offset mismatch for UMetaSoundPatch::ReferencedAssetClassKeys");
static_assert(offsetof(UMetaSoundPatch, ReferencedAssetClassObjects) == 376, "Offset mismatch for UMetaSoundPatch::ReferencedAssetClassObjects");

// /Script/MetasoundEngine.MetaSoundPatchBuilder
// Kind: Class; super: MetaSoundBuilderBase
class UMetaSoundPatchBuilder
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Builder[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMetaSoundPatchBuilder, Builder) == 40, "Offset mismatch for UMetaSoundPatchBuilder::Builder");

// /Script/MetasoundEngine.MetaSoundQualityHelper
// Kind: Class; super: Object
class UMetaSoundQualityHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundEngine.MetaSoundSettings
// Kind: Class; super: DeveloperSettings
class UMetaSoundSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bAutoUpdateLogWarningOnDroppedConnection; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    TArray<void*> DirectoriesToRegister; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetPageName[0x4]; // 0x0048 (Size: 0x4, Type: NameProperty)
    std::uint8_t DefaultPageSettings[0x14]; // 0x004C (Size: 0x14, Type: StructProperty)
    TArray<void*> PageSettings; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QualitySettings; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMetaSoundSettings, bAutoUpdateLogWarningOnDroppedConnection) == 48, "Offset mismatch for UMetaSoundSettings::bAutoUpdateLogWarningOnDroppedConnection");
static_assert(offsetof(UMetaSoundSettings, DirectoriesToRegister) == 56, "Offset mismatch for UMetaSoundSettings::DirectoriesToRegister");
static_assert(offsetof(UMetaSoundSettings, TargetPageName) == 72, "Offset mismatch for UMetaSoundSettings::TargetPageName");
static_assert(offsetof(UMetaSoundSettings, DefaultPageSettings) == 76, "Offset mismatch for UMetaSoundSettings::DefaultPageSettings");
static_assert(offsetof(UMetaSoundSettings, PageSettings) == 96, "Offset mismatch for UMetaSoundSettings::PageSettings");
static_assert(offsetof(UMetaSoundSettings, QualitySettings) == 112, "Offset mismatch for UMetaSoundSettings::QualitySettings");

// /Script/MetasoundEngine.MetaSoundSource
// Kind: Class; super: SoundWaveProcedural
class UMetaSoundSource
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t RootMetaSoundDocument[0xF8]; // 0x0338 (Size: 0xF8, Type: StructProperty)
    std::uint8_t ReferencedAssetClassKeys[0x10]; // 0x0430 (Size: 0x10, Type: SetProperty)
    std::uint8_t ReferencedAssetClassObjects[0x10]; // 0x0440 (Size: 0x10, Type: SetProperty)
    std::uint8_t OutputFormat; // 0x0450 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ChannelAgnosticFormatChooser; // 0x0451 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0452
    FName ChannelAgnosticCustomFormat; // 0x0454 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMetaSoundSource, RootMetaSoundDocument) == 824, "Offset mismatch for UMetaSoundSource::RootMetaSoundDocument");
static_assert(offsetof(UMetaSoundSource, ReferencedAssetClassKeys) == 1072, "Offset mismatch for UMetaSoundSource::ReferencedAssetClassKeys");
static_assert(offsetof(UMetaSoundSource, ReferencedAssetClassObjects) == 1088, "Offset mismatch for UMetaSoundSource::ReferencedAssetClassObjects");
static_assert(offsetof(UMetaSoundSource, OutputFormat) == 1104, "Offset mismatch for UMetaSoundSource::OutputFormat");
static_assert(offsetof(UMetaSoundSource, ChannelAgnosticFormatChooser) == 1105, "Offset mismatch for UMetaSoundSource::ChannelAgnosticFormatChooser");
static_assert(offsetof(UMetaSoundSource, ChannelAgnosticCustomFormat) == 1108, "Offset mismatch for UMetaSoundSource::ChannelAgnosticCustomFormat");

// /Script/MetasoundEngine.MetaSoundSourceBuilder
// Kind: Class; super: MetaSoundBuilderBase
class UMetaSoundSourceBuilder
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Builder[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMetaSoundSourceBuilder, Builder) == 40, "Offset mismatch for UMetaSoundSourceBuilder::Builder");

// /Script/MetasoundEngine.MetasoundEditorGraphBase
// Kind: Class; super: EdGraph
class UMetasoundEditorGraphBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Schema; // 0x0028 (Size: 0x8, Type: ClassProperty)
    TArray<void*> Nodes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowDeletion; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bAllowRenaming (shared storage)
    // 0x0040 BoolProperty bEditable (shared storage)
};

static_assert(offsetof(UMetasoundEditorGraphBase, Schema) == 40, "Offset mismatch for UMetasoundEditorGraphBase::Schema");
static_assert(offsetof(UMetasoundEditorGraphBase, Nodes) == 48, "Offset mismatch for UMetasoundEditorGraphBase::Nodes");
static_assert(offsetof(UMetasoundEditorGraphBase, bAllowDeletion) == 64, "Offset mismatch for UMetasoundEditorGraphBase::bAllowDeletion");

// /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess
// Kind: Class; super: BlueprintFunctionLibrary
class UMetasoundFrontendLiteralBlueprintAccess
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundEngine.MetasoundGeneratorHandle
// Kind: Class; super: Object
class UMetasoundGeneratorHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MetasoundEngine.MetasoundOutputBlueprintAccess
// Kind: Class; super: BlueprintFunctionLibrary
class UMetasoundOutputBlueprintAccess
{
public:
    std::uint8_t Opaque[1];
};
