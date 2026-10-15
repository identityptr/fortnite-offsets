/**
 * decamp dumper generated SDK
 * Package: /Script/GameFeatures
 */
#pragma once
#include "Basic.h"

// /Script/GameFeatures.DataRegistrySourceToAdd
// Kind: ScriptStruct; super: none
struct FDataRegistrySourceToAdd
{
public:
    std::uint8_t RegistryToAddTo[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t AssetPriority; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bClientSource; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bServerSource (shared storage)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    std::uint8_t DataTableToAdd[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> CurveTableToAdd; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FDataRegistrySourceToAdd, RegistryToAddTo) == 0, "Offset mismatch for FDataRegistrySourceToAdd::RegistryToAddTo");
static_assert(offsetof(FDataRegistrySourceToAdd, AssetPriority) == 4, "Offset mismatch for FDataRegistrySourceToAdd::AssetPriority");
static_assert(offsetof(FDataRegistrySourceToAdd, bClientSource) == 8, "Offset mismatch for FDataRegistrySourceToAdd::bClientSource");
static_assert(offsetof(FDataRegistrySourceToAdd, DataTableToAdd) == 16, "Offset mismatch for FDataRegistrySourceToAdd::DataTableToAdd");
static_assert(offsetof(FDataRegistrySourceToAdd, CurveTableToAdd) == 48, "Offset mismatch for FDataRegistrySourceToAdd::CurveTableToAdd");

// /Script/GameFeatures.GameFeatureComponentEntry
// Kind: ScriptStruct; super: none
struct FGameFeatureComponentEntry
{
public:
    std::uint8_t ActorClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ComponentClass[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bClientComponent; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bServerComponent (shared storage)
    std::uint8_t AdditionFlags; // 0x0041 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FGameFeatureComponentEntry, ActorClass) == 0, "Offset mismatch for FGameFeatureComponentEntry::ActorClass");
static_assert(offsetof(FGameFeatureComponentEntry, ComponentClass) == 32, "Offset mismatch for FGameFeatureComponentEntry::ComponentClass");
static_assert(offsetof(FGameFeatureComponentEntry, bClientComponent) == 64, "Offset mismatch for FGameFeatureComponentEntry::bClientComponent");
static_assert(offsetof(FGameFeatureComponentEntry, AdditionFlags) == 65, "Offset mismatch for FGameFeatureComponentEntry::AdditionFlags");

// /Script/GameFeatures.GameFeaturePluginIdentifier
// Kind: ScriptStruct; super: none
struct FGameFeaturePluginIdentifier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatures.GameFeaturePluginInfo
// Kind: ScriptStruct; super: none
struct FGameFeaturePluginInfo
{
public:
    FString GfpUri; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Dependencies; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ImplicitDependencies; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameFeaturePluginInfo, GfpUri) == 0, "Offset mismatch for FGameFeaturePluginInfo::GfpUri");
static_assert(offsetof(FGameFeaturePluginInfo, Dependencies) == 16, "Offset mismatch for FGameFeaturePluginInfo::Dependencies");
static_assert(offsetof(FGameFeaturePluginInfo, ImplicitDependencies) == 32, "Offset mismatch for FGameFeaturePluginInfo::ImplicitDependencies");

// /Script/GameFeatures.GameFeaturePluginStateMachineProperties
// Kind: ScriptStruct; super: none
struct FGameFeaturePluginStateMachineProperties
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* GameFeatureData; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameFeaturePluginStateMachineProperties, GameFeatureData) == 176, "Offset mismatch for FGameFeaturePluginStateMachineProperties::GameFeatureData");

// /Script/GameFeatures.InstallBundlePluginProtocolOptions
// Kind: ScriptStruct; super: none
struct FInstallBundlePluginProtocolOptions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatures.DefaultGameFeaturesProjectPolicies
// Kind: Class; super: GameFeaturesProjectPolicies
class UDefaultGameFeaturesProjectPolicies
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatures.GameFeatureAction
// Kind: Class; super: Object
class UGameFeatureAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatures.GameFeatureAction_AddActorFactory
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddActorFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatures.GameFeatureAction_AddCheats
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddCheats
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CheatManagers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bLoadCheatManagersAsync; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0039
    TArray<void*> SpawnedCheatManagers; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_AddCheats, CheatManagers) == 40, "Offset mismatch for UGameFeatureAction_AddCheats::CheatManagers");
static_assert(offsetof(UGameFeatureAction_AddCheats, bLoadCheatManagersAsync) == 56, "Offset mismatch for UGameFeatureAction_AddCheats::bLoadCheatManagersAsync");
static_assert(offsetof(UGameFeatureAction_AddCheats, SpawnedCheatManagers) == 72, "Offset mismatch for UGameFeatureAction_AddCheats::SpawnedCheatManagers");

// /Script/GameFeatures.GameFeatureAction_AddChunkOverride
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddChunkOverride
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatures.GameFeatureAction_AddComponents
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddComponents
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ComponentList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_AddComponents, ComponentList) == 40, "Offset mismatch for UGameFeatureAction_AddComponents::ComponentList");

// /Script/GameFeatures.GameFeatureAction_AddWPContent
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddWPContent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ContentBundleDescriptor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameFeatureAction_AddWPContent, ContentBundleDescriptor) == 40, "Offset mismatch for UGameFeatureAction_AddWPContent::ContentBundleDescriptor");

// /Script/GameFeatures.GameFeatureAction_AddWorldPartitionContent
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddWorldPartitionContent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ExternalDataLayerAsset; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FName RequiredCVar; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UGameFeatureAction_AddWorldPartitionContent, ExternalDataLayerAsset) == 40, "Offset mismatch for UGameFeatureAction_AddWorldPartitionContent::ExternalDataLayerAsset");
static_assert(offsetof(UGameFeatureAction_AddWorldPartitionContent, RequiredCVar) == 48, "Offset mismatch for UGameFeatureAction_AddWorldPartitionContent::RequiredCVar");

// /Script/GameFeatures.GameFeatureAction_AudioActionBase
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AudioActionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatures.GameFeatureAction_DataRegistry
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_DataRegistry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RegistriesToAdd; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bPreloadInEditor; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreloadInCommandlets; // 0x0039 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameFeatureAction_DataRegistry, RegistriesToAdd) == 40, "Offset mismatch for UGameFeatureAction_DataRegistry::RegistriesToAdd");
static_assert(offsetof(UGameFeatureAction_DataRegistry, bPreloadInEditor) == 56, "Offset mismatch for UGameFeatureAction_DataRegistry::bPreloadInEditor");
static_assert(offsetof(UGameFeatureAction_DataRegistry, bPreloadInCommandlets) == 57, "Offset mismatch for UGameFeatureAction_DataRegistry::bPreloadInCommandlets");

// /Script/GameFeatures.GameFeatureAction_DataRegistrySource
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_DataRegistrySource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SourcesToAdd; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bPreloadInEditor; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameFeatureAction_DataRegistrySource, SourcesToAdd) == 40, "Offset mismatch for UGameFeatureAction_DataRegistrySource::SourcesToAdd");
static_assert(offsetof(UGameFeatureAction_DataRegistrySource, bPreloadInEditor) == 56, "Offset mismatch for UGameFeatureAction_DataRegistrySource::bPreloadInEditor");

// /Script/GameFeatures.GameFeatureData
// Kind: Class; super: PrimaryDataAsset
class UGameFeatureData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Actions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PrimaryAssetTypesToScan; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureData, Actions) == 40, "Offset mismatch for UGameFeatureData::Actions");
static_assert(offsetof(UGameFeatureData, PrimaryAssetTypesToScan) == 56, "Offset mismatch for UGameFeatureData::PrimaryAssetTypesToScan");

// /Script/GameFeatures.GameFeatureOptionalContentInstaller
// Kind: Class; super: Object
class UGameFeatureOptionalContentInstaller
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatures.GameFeaturePluginStateMachine
// Kind: Class; super: Object
class UGameFeaturePluginStateMachine
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateProperties[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameFeaturePluginStateMachine, StateProperties) == 40, "Offset mismatch for UGameFeaturePluginStateMachine::StateProperties");

// /Script/GameFeatures.GameFeatureStateChangeObserver
// Kind: Class; super: Interface
class UGameFeatureStateChangeObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatures.GameFeatureVersePathMapperCommandlet
// Kind: Class; super: Commandlet
class UGameFeatureVersePathMapperCommandlet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString HelpDescription; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString HelpUsage; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString HelpWebLink; // 0x0048 (Size: 0x10, Type: StrProperty)
    TArray<void*> HelpParamNames; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HelpParamDescriptions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FastExit; // 0x0078 (Size: 0x1, Type: BoolProperty)
    // 0x0078 BoolProperty IsClient (shared storage)
    // 0x0078 BoolProperty IsEditor (shared storage)
    // 0x0078 BoolProperty IsServer (shared storage)
    // 0x0078 BoolProperty LogToConsole (shared storage)
    // 0x0078 BoolProperty ShowErrorCount (shared storage)
    // 0x0078 BoolProperty ShowProgress (shared storage)
    // 0x0078 BoolProperty UseCommandletResultAsExitCode (shared storage)
};

static_assert(offsetof(UGameFeatureVersePathMapperCommandlet, HelpDescription) == 40, "Offset mismatch for UGameFeatureVersePathMapperCommandlet::HelpDescription");
static_assert(offsetof(UGameFeatureVersePathMapperCommandlet, HelpUsage) == 56, "Offset mismatch for UGameFeatureVersePathMapperCommandlet::HelpUsage");
static_assert(offsetof(UGameFeatureVersePathMapperCommandlet, HelpWebLink) == 72, "Offset mismatch for UGameFeatureVersePathMapperCommandlet::HelpWebLink");
static_assert(offsetof(UGameFeatureVersePathMapperCommandlet, HelpParamNames) == 88, "Offset mismatch for UGameFeatureVersePathMapperCommandlet::HelpParamNames");
static_assert(offsetof(UGameFeatureVersePathMapperCommandlet, HelpParamDescriptions) == 104, "Offset mismatch for UGameFeatureVersePathMapperCommandlet::HelpParamDescriptions");
static_assert(offsetof(UGameFeatureVersePathMapperCommandlet, FastExit) == 120, "Offset mismatch for UGameFeatureVersePathMapperCommandlet::FastExit");

// /Script/GameFeatures.GameFeaturesProjectPolicies
// Kind: Class; super: Object
class UGameFeaturesProjectPolicies
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameFeatures.GameFeaturesSubsystem
// Kind: Class; super: EngineSubsystem
class UGameFeaturesSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> GameFeaturePluginStateMachines; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GameFeaturesByIdentifier; // 0x0040 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0050
    TArray<void*> TerminalGameFeaturePluginStateMachines; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x30]; // 0x0098
    TArray<void*> Observers; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    void* GameSpecificPolicies; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameFeaturesSubsystem, GameFeaturePluginStateMachines) == 48, "Offset mismatch for UGameFeaturesSubsystem::GameFeaturePluginStateMachines");
static_assert(offsetof(UGameFeaturesSubsystem, GameFeaturesByIdentifier) == 64, "Offset mismatch for UGameFeaturesSubsystem::GameFeaturesByIdentifier");
static_assert(offsetof(UGameFeaturesSubsystem, TerminalGameFeaturePluginStateMachines) == 136, "Offset mismatch for UGameFeaturesSubsystem::TerminalGameFeaturePluginStateMachines");
static_assert(offsetof(UGameFeaturesSubsystem, Observers) == 200, "Offset mismatch for UGameFeaturesSubsystem::Observers");
static_assert(offsetof(UGameFeaturesSubsystem, GameSpecificPolicies) == 216, "Offset mismatch for UGameFeaturesSubsystem::GameSpecificPolicies");

// /Script/GameFeatures.GameFeaturesSubsystemSettings
// Kind: Class; super: DeveloperSettings
class UGameFeaturesSubsystemSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t GameFeaturesManagerClassName[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    TArray<void*> EnabledPlugins; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DisabledPlugins; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AdditionalPluginMetadataKeys; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeaturesSubsystemSettings, GameFeaturesManagerClassName) == 48, "Offset mismatch for UGameFeaturesSubsystemSettings::GameFeaturesManagerClassName");
static_assert(offsetof(UGameFeaturesSubsystemSettings, EnabledPlugins) == 72, "Offset mismatch for UGameFeaturesSubsystemSettings::EnabledPlugins");
static_assert(offsetof(UGameFeaturesSubsystemSettings, DisabledPlugins) == 88, "Offset mismatch for UGameFeaturesSubsystemSettings::DisabledPlugins");
static_assert(offsetof(UGameFeaturesSubsystemSettings, AdditionalPluginMetadataKeys) == 104, "Offset mismatch for UGameFeaturesSubsystemSettings::AdditionalPluginMetadataKeys");

// /Script/GameFeatures.IrisFilterGameFeatureAction
// Kind: Class; super: GameFeatureAction
class UIrisFilterGameFeatureAction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t FilterDefinition[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UIrisFilterGameFeatureAction, FilterDefinition) == 40, "Offset mismatch for UIrisFilterGameFeatureAction::FilterDefinition");
