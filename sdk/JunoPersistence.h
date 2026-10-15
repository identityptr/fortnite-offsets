/**
 * decamp dumper generated SDK
 * Package: /Script/JunoPersistence
 */
#pragma once
#include "Basic.h"

// /Script/JunoPersistence.JunoActorRedirectors
// Kind: ScriptStruct; super: none
struct FJunoActorRedirectors
{
public:
    TMap<void*, void*> ActorNameRedirectors; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoActorRedirectors, ActorNameRedirectors) == 0, "Offset mismatch for FJunoActorRedirectors::ActorNameRedirectors");

// /Script/JunoPersistence.JunoBinaryActorRecord
// Kind: ScriptStruct; super: none
struct FJunoBinaryActorRecord
{
public:
    void* DeltaFile; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoBinaryActorRecord, DeltaFile) == 0, "Offset mismatch for FJunoBinaryActorRecord::DeltaFile");

// /Script/JunoPersistence.JunoDeltasStorage_Index_PFW
// Kind: ScriptStruct; super: none
struct FJunoDeltasStorage_Index_PFW
{
public:
    std::int32_t WorldCompatibilityVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TMap<void*, void*> DeltasMetadata; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoDeltasStorage_Index_PFW, WorldCompatibilityVersion) == 0, "Offset mismatch for FJunoDeltasStorage_Index_PFW::WorldCompatibilityVersion");
static_assert(offsetof(FJunoDeltasStorage_Index_PFW, DeltasMetadata) == 8, "Offset mismatch for FJunoDeltasStorage_Index_PFW::DeltasMetadata");

// /Script/JunoPersistence.JunoDumpWorldPersistentContentsOptions
// Kind: ScriptStruct; super: none
struct FJunoDumpWorldPersistentContentsOptions
{
public:
    std::uint8_t Verbosity; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ProximityActorLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    void* ProximityActor; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    FString ProximityActorName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t ProximityActorID[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    float ProximityRadius; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreProximityZ; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreEmptyPlayspaces; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x004E
    TArray<void*> ActorNameFilters; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorIDFilters; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0070
    TArray<void*> ActorClassFilters; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorComponentNameFilters; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorComponentClassFilters; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorTagFilters; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x00C0
    std::uint8_t bIgnorePersistenceActors; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnorePersistenceFeatures; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x00D2
    TArray<void*> PersistenceFeatureNameFilters; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x00E8
    TArray<void*> PlayspaceIDFilters; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0006[0x10]; // 0x0108
    std::uint8_t bRoundCoordinates; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0119
    std::int32_t CoordinateRoundingDecimals; // 0x011C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, Verbosity) == 0, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::Verbosity");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ProximityActorLocation) == 8, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ProximityActorLocation");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ProximityActor) == 32, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ProximityActor");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ProximityActorName) == 40, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ProximityActorName");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ProximityActorID) == 56, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ProximityActorID");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ProximityRadius) == 72, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ProximityRadius");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, bIgnoreProximityZ) == 76, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::bIgnoreProximityZ");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, bIgnoreEmptyPlayspaces) == 77, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::bIgnoreEmptyPlayspaces");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ActorNameFilters) == 80, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ActorNameFilters");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ActorIDFilters) == 96, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ActorIDFilters");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ActorClassFilters) == 128, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ActorClassFilters");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ActorComponentNameFilters) == 144, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ActorComponentNameFilters");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ActorComponentClassFilters) == 160, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ActorComponentClassFilters");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, ActorTagFilters) == 176, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::ActorTagFilters");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, bIgnorePersistenceActors) == 208, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::bIgnorePersistenceActors");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, bIgnorePersistenceFeatures) == 209, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::bIgnorePersistenceFeatures");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, PersistenceFeatureNameFilters) == 216, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::PersistenceFeatureNameFilters");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, PlayspaceIDFilters) == 248, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::PlayspaceIDFilters");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, bRoundCoordinates) == 280, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::bRoundCoordinates");
static_assert(offsetof(FJunoDumpWorldPersistentContentsOptions, CoordinateRoundingDecimals) == 284, "Offset mismatch for FJunoDumpWorldPersistentContentsOptions::CoordinateRoundingDecimals");

// /Script/JunoPersistence.JunoPFWDeltaContentBase64
// Kind: ScriptStruct; super: none
struct FJunoPFWDeltaContentBase64
{
public:
    FString Content; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoPFWDeltaContentBase64, Content) == 0, "Offset mismatch for FJunoPFWDeltaContentBase64::Content");

// /Script/JunoPersistence.JunoPersistenceAssetInfo
// Kind: ScriptStruct; super: none
struct FJunoPersistenceAssetInfo
{
public:
    FString PackageName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString AssetName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t AssetClassPath[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    FString FilePath; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsInCook; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0039
    std::uint8_t CustomDump[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t SourceControlInfo[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPersistenceAssetInfo, PackageName) == 0, "Offset mismatch for FJunoPersistenceAssetInfo::PackageName");
static_assert(offsetof(FJunoPersistenceAssetInfo, AssetName) == 16, "Offset mismatch for FJunoPersistenceAssetInfo::AssetName");
static_assert(offsetof(FJunoPersistenceAssetInfo, AssetClassPath) == 32, "Offset mismatch for FJunoPersistenceAssetInfo::AssetClassPath");
static_assert(offsetof(FJunoPersistenceAssetInfo, FilePath) == 40, "Offset mismatch for FJunoPersistenceAssetInfo::FilePath");
static_assert(offsetof(FJunoPersistenceAssetInfo, bIsInCook) == 56, "Offset mismatch for FJunoPersistenceAssetInfo::bIsInCook");
static_assert(offsetof(FJunoPersistenceAssetInfo, CustomDump) == 64, "Offset mismatch for FJunoPersistenceAssetInfo::CustomDump");
static_assert(offsetof(FJunoPersistenceAssetInfo, SourceControlInfo) == 96, "Offset mismatch for FJunoPersistenceAssetInfo::SourceControlInfo");

// /Script/JunoPersistence.JunoPersistenceAssetSourceControlInfo
// Kind: ScriptStruct; super: none
struct FJunoPersistenceAssetSourceControlInfo
{
public:
    FString CurrentRevisionCheckInIdentifier; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString CurrentRevisionAction; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString CurrentRevisionUser; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoPersistenceAssetSourceControlInfo, CurrentRevisionCheckInIdentifier) == 0, "Offset mismatch for FJunoPersistenceAssetSourceControlInfo::CurrentRevisionCheckInIdentifier");
static_assert(offsetof(FJunoPersistenceAssetSourceControlInfo, CurrentRevisionAction) == 16, "Offset mismatch for FJunoPersistenceAssetSourceControlInfo::CurrentRevisionAction");
static_assert(offsetof(FJunoPersistenceAssetSourceControlInfo, CurrentRevisionUser) == 32, "Offset mismatch for FJunoPersistenceAssetSourceControlInfo::CurrentRevisionUser");

// /Script/JunoPersistence.JunoPersistenceFeatureClassPair
// Kind: ScriptStruct; super: none
struct FJunoPersistenceFeatureClassPair
{
public:
    void* PersistenceFeatureDataClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* PersistenceFeatureSourceImplementationDataClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FJunoPersistenceFeatureClassPair, PersistenceFeatureDataClass) == 0, "Offset mismatch for FJunoPersistenceFeatureClassPair::PersistenceFeatureDataClass");
static_assert(offsetof(FJunoPersistenceFeatureClassPair, PersistenceFeatureSourceImplementationDataClass) == 8, "Offset mismatch for FJunoPersistenceFeatureClassPair::PersistenceFeatureSourceImplementationDataClass");

// /Script/JunoPersistence.JunoPersistentPlayspaceLevelRegistryEntry
// Kind: ScriptStruct; super: none
struct FJunoPersistentPlayspaceLevelRegistryEntry
{
public:
    TWeakObjectPtr<void> PersistentPlayspaceWeakPtr; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoPersistentPlayspaceLevelRegistryEntry, PersistentPlayspaceWeakPtr) == 0, "Offset mismatch for FJunoPersistentPlayspaceLevelRegistryEntry::PersistentPlayspaceWeakPtr");

// /Script/JunoPersistence.JunoPersistentPlayspaceSaveHandlerContainerItem
// Kind: ScriptStruct; super: none
struct FJunoPersistentPlayspaceSaveHandlerContainerItem
{
public:
    void* JunoPersistentPlayspaceSaveHandler; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoPersistentPlayspaceSaveHandlerContainerItem, JunoPersistentPlayspaceSaveHandler) == 0, "Offset mismatch for FJunoPersistentPlayspaceSaveHandlerContainerItem::JunoPersistentPlayspaceSaveHandler");

// /Script/JunoPersistence.JunoPlayerAccountLockSaveData
// Kind: ScriptStruct; super: none
struct FJunoPlayerAccountLockSaveData
{
public:
    std::uint8_t LastLockTime[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FString LastLockedSessionId; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString LastLockedPlaylist; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoPlayerAccountLockSaveData, LastLockTime) == 0, "Offset mismatch for FJunoPlayerAccountLockSaveData::LastLockTime");
static_assert(offsetof(FJunoPlayerAccountLockSaveData, LastLockedSessionId) == 8, "Offset mismatch for FJunoPlayerAccountLockSaveData::LastLockedSessionId");
static_assert(offsetof(FJunoPlayerAccountLockSaveData, LastLockedPlaylist) == 24, "Offset mismatch for FJunoPlayerAccountLockSaveData::LastLockedPlaylist");

// /Script/JunoPersistence.JunoPlayspaceIndexNode
// Kind: ScriptStruct; super: none
struct FJunoPlayspaceIndexNode
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParentId[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> ChildrenIds; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    void* PlayspaceClassType; // 0x0030 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FJunoPlayspaceIndexNode, ID) == 0, "Offset mismatch for FJunoPlayspaceIndexNode::ID");
static_assert(offsetof(FJunoPlayspaceIndexNode, ParentId) == 16, "Offset mismatch for FJunoPlayspaceIndexNode::ParentId");
static_assert(offsetof(FJunoPlayspaceIndexNode, ChildrenIds) == 32, "Offset mismatch for FJunoPlayspaceIndexNode::ChildrenIds");
static_assert(offsetof(FJunoPlayspaceIndexNode, PlayspaceClassType) == 48, "Offset mismatch for FJunoPlayspaceIndexNode::PlayspaceClassType");

// /Script/JunoPersistence.JunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo
// Kind: ScriptStruct; super: none
struct FJunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo
{
public:
    std::uint8_t PlayspaceIndexSaveData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo, PlayspaceIndexSaveData) == 0, "Offset mismatch for FJunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo::PlayspaceIndexSaveData");

// /Script/JunoPersistence.JunoPlayspaceIndexSaveData
// Kind: ScriptStruct; super: none
struct FJunoPlayspaceIndexSaveData
{
public:
    TMap<void*, void*> PlayspaceNodes; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoPlayspaceIndexSaveData, PlayspaceNodes) == 0, "Offset mismatch for FJunoPlayspaceIndexSaveData::PlayspaceNodes");

// /Script/JunoPersistence.JunoPlayspacePersistenceFeature
// Kind: ScriptStruct; super: none
struct FJunoPlayspacePersistenceFeature
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Class; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CurrentCheckoutState; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t TargetCheckoutState; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    std::uint32_t CheckoutStateChangeRequestKey; // 0x0018 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0002[0x44]; // 0x001C
    void* ImplementationCustomStateObject; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> Data; // 0x0068 (Size: 0x10, Type: InterfaceProperty)
    void* SourceImplementationDataClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
    TScriptInterface<void> DifferentImplementationData; // 0x0080 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FJunoPlayspacePersistenceFeature, Name) == 0, "Offset mismatch for FJunoPlayspacePersistenceFeature::Name");
static_assert(offsetof(FJunoPlayspacePersistenceFeature, Class) == 8, "Offset mismatch for FJunoPlayspacePersistenceFeature::Class");
static_assert(offsetof(FJunoPlayspacePersistenceFeature, CurrentCheckoutState) == 16, "Offset mismatch for FJunoPlayspacePersistenceFeature::CurrentCheckoutState");
static_assert(offsetof(FJunoPlayspacePersistenceFeature, TargetCheckoutState) == 20, "Offset mismatch for FJunoPlayspacePersistenceFeature::TargetCheckoutState");
static_assert(offsetof(FJunoPlayspacePersistenceFeature, CheckoutStateChangeRequestKey) == 24, "Offset mismatch for FJunoPlayspacePersistenceFeature::CheckoutStateChangeRequestKey");
static_assert(offsetof(FJunoPlayspacePersistenceFeature, ImplementationCustomStateObject) == 96, "Offset mismatch for FJunoPlayspacePersistenceFeature::ImplementationCustomStateObject");
static_assert(offsetof(FJunoPlayspacePersistenceFeature, Data) == 104, "Offset mismatch for FJunoPlayspacePersistenceFeature::Data");
static_assert(offsetof(FJunoPlayspacePersistenceFeature, SourceImplementationDataClass) == 120, "Offset mismatch for FJunoPlayspacePersistenceFeature::SourceImplementationDataClass");
static_assert(offsetof(FJunoPlayspacePersistenceFeature, DifferentImplementationData) == 128, "Offset mismatch for FJunoPlayspacePersistenceFeature::DifferentImplementationData");

// /Script/JunoPersistence.JunoRetrievePersistenceAssetInfosSettings
// Kind: ScriptStruct; super: none
struct FJunoRetrievePersistenceAssetInfosSettings
{
public:
    std::uint8_t bInCookOnly; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateSourceControlInfo; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t GenerateAssetCustomDumpMode; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bGenerateTimingReport; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoRetrievePersistenceAssetInfosSettings, bInCookOnly) == 0, "Offset mismatch for FJunoRetrievePersistenceAssetInfosSettings::bInCookOnly");
static_assert(offsetof(FJunoRetrievePersistenceAssetInfosSettings, bGenerateSourceControlInfo) == 1, "Offset mismatch for FJunoRetrievePersistenceAssetInfosSettings::bGenerateSourceControlInfo");
static_assert(offsetof(FJunoRetrievePersistenceAssetInfosSettings, GenerateAssetCustomDumpMode) == 2, "Offset mismatch for FJunoRetrievePersistenceAssetInfosSettings::GenerateAssetCustomDumpMode");
static_assert(offsetof(FJunoRetrievePersistenceAssetInfosSettings, bGenerateTimingReport) == 3, "Offset mismatch for FJunoRetrievePersistenceAssetInfosSettings::bGenerateTimingReport");

// /Script/JunoPersistence.JunoRollbackBadCheckpointRange
// Kind: ScriptStruct; super: none
struct FJunoRollbackBadCheckpointRange
{
public:
    std::int32_t StartCL; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t EndCL; // 0x0004 (Size: 0x4, Type: IntProperty)
    FString StartTimestamp; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString EndTimestamp; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoRollbackBadCheckpointRange, StartCL) == 0, "Offset mismatch for FJunoRollbackBadCheckpointRange::StartCL");
static_assert(offsetof(FJunoRollbackBadCheckpointRange, EndCL) == 4, "Offset mismatch for FJunoRollbackBadCheckpointRange::EndCL");
static_assert(offsetof(FJunoRollbackBadCheckpointRange, StartTimestamp) == 8, "Offset mismatch for FJunoRollbackBadCheckpointRange::StartTimestamp");
static_assert(offsetof(FJunoRollbackBadCheckpointRange, EndTimestamp) == 24, "Offset mismatch for FJunoRollbackBadCheckpointRange::EndTimestamp");

// /Script/JunoPersistence.JunoUpdateAction
// Kind: ScriptStruct; super: none
struct FJunoUpdateAction
{
public:
    std::uint8_t ActorInstanceRecord[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoUpdateAction, ActorInstanceRecord) == 0, "Offset mismatch for FJunoUpdateAction::ActorInstanceRecord");

// /Script/JunoPersistence.PersistenceEvent_RootPlayspaceReady
// Kind: ScriptStruct; super: none
struct FPersistenceEvent_RootPlayspaceReady
{
public:
    TWeakObjectPtr<void> Playspace; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPersistenceEvent_RootPlayspaceReady, Playspace) == 0, "Offset mismatch for FPersistenceEvent_RootPlayspaceReady::Playspace");

// /Script/JunoPersistence.TestMappingArray
// Kind: ScriptStruct; super: none
struct FTestMappingArray
{
public:
    TArray<void*> TestArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TestContainerArray; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTestMappingArray, TestArray) == 0, "Offset mismatch for FTestMappingArray::TestArray");
static_assert(offsetof(FTestMappingArray, TestContainerArray) == 16, "Offset mismatch for FTestMappingArray::TestContainerArray");

// /Script/JunoPersistence.TestMappingMap
// Kind: ScriptStruct; super: none
struct FTestMappingMap
{
public:
    TMap<void*, void*> TestMap; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TestContainerMap; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FTestMappingMap, TestMap) == 0, "Offset mismatch for FTestMappingMap::TestMap");
static_assert(offsetof(FTestMappingMap, TestContainerMap) == 16, "Offset mismatch for FTestMappingMap::TestContainerMap");

// /Script/JunoPersistence.TestMappingProperty
// Kind: ScriptStruct; super: none
struct FTestMappingProperty
{
public:
    std::uint8_t TestProperty1[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t TestProperty2[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTestMappingProperty, TestProperty1) == 0, "Offset mismatch for FTestMappingProperty::TestProperty1");
static_assert(offsetof(FTestMappingProperty, TestProperty2) == 4, "Offset mismatch for FTestMappingProperty::TestProperty2");

// /Script/JunoPersistence.TestMappingPropertyContainer
// Kind: ScriptStruct; super: none
struct FTestMappingPropertyContainer
{
public:
    std::uint8_t TestContainer[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::int32_t ID; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTestMappingPropertyContainer, TestContainer) == 0, "Offset mismatch for FTestMappingPropertyContainer::TestContainer");
static_assert(offsetof(FTestMappingPropertyContainer, ID) == 8, "Offset mismatch for FTestMappingPropertyContainer::ID");

// /Script/JunoPersistence.TestMappingSet
// Kind: ScriptStruct; super: none
struct FTestMappingSet
{
public:
    std::uint8_t TestSet[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    TSet<void*> TestContainerSet; // 0x0010 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FTestMappingSet, TestSet) == 0, "Offset mismatch for FTestMappingSet::TestSet");
static_assert(offsetof(FTestMappingSet, TestContainerSet) == 16, "Offset mismatch for FTestMappingSet::TestContainerSet");

// /Script/JunoPersistence.TestPropertyToMap
// Kind: ScriptStruct; super: none
struct FTestPropertyToMap
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.BaseRootPersistentPlayspace
// Kind: Class; super: JunoPersistentPlayspace
class UBaseRootPersistentPlayspace
{
public:
    std::uint8_t Pad_0000[0x770]; // 0x0000
    void* JunoStateMachineClass; // 0x0770 (Size: 0x8, Type: ClassProperty)
    void* CurrentJunoWorld; // 0x0778 (Size: 0x8, Type: ObjectProperty)
    void* StateMachineManager; // 0x0780 (Size: 0x8, Type: ObjectProperty)
    void* JunoPlayerPersistenceComponent; // 0x0788 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bReadyToApplyPersistentData; // 0x0790 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x37]; // 0x0791
    std::uint8_t bRootPlayspaceReady; // 0x07C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBaseRootPersistentPlayspace, JunoStateMachineClass) == 1904, "Offset mismatch for UBaseRootPersistentPlayspace::JunoStateMachineClass");
static_assert(offsetof(UBaseRootPersistentPlayspace, CurrentJunoWorld) == 1912, "Offset mismatch for UBaseRootPersistentPlayspace::CurrentJunoWorld");
static_assert(offsetof(UBaseRootPersistentPlayspace, StateMachineManager) == 1920, "Offset mismatch for UBaseRootPersistentPlayspace::StateMachineManager");
static_assert(offsetof(UBaseRootPersistentPlayspace, JunoPlayerPersistenceComponent) == 1928, "Offset mismatch for UBaseRootPersistentPlayspace::JunoPlayerPersistenceComponent");
static_assert(offsetof(UBaseRootPersistentPlayspace, bReadyToApplyPersistentData) == 1936, "Offset mismatch for UBaseRootPersistentPlayspace::bReadyToApplyPersistentData");
static_assert(offsetof(UBaseRootPersistentPlayspace, bRootPlayspaceReady) == 1992, "Offset mismatch for UBaseRootPersistentPlayspace::bRootPlayspaceReady");

// /Script/JunoPersistence.JunoActorInstancesReportHandler
// Kind: Class; super: Object
class UJunoActorInstancesReportHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoBasePFWContainer
// Kind: Class; super: PersistenceFrameworkContainer
class UJunoBasePFWContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBasePFWContainer, GameplayTagContainer) == 40, "Offset mismatch for UJunoBasePFWContainer::GameplayTagContainer");
static_assert(offsetof(UJunoBasePFWContainer, RestoreVersionInfo) == 72, "Offset mismatch for UJunoBasePFWContainer::RestoreVersionInfo");
static_assert(offsetof(UJunoBasePFWContainer, SupportedVersionsTable) == 88, "Offset mismatch for UJunoBasePFWContainer::SupportedVersionsTable");
static_assert(offsetof(UJunoBasePFWContainer, RestoreAttemptCount) == 120, "Offset mismatch for UJunoBasePFWContainer::RestoreAttemptCount");
static_assert(offsetof(UJunoBasePFWContainer, SaveAttemptCount) == 128, "Offset mismatch for UJunoBasePFWContainer::SaveAttemptCount");
static_assert(offsetof(UJunoBasePFWContainer, DeleteAttemptCount) == 136, "Offset mismatch for UJunoBasePFWContainer::DeleteAttemptCount");
static_assert(offsetof(UJunoBasePFWContainer, ServiceData) == 144, "Offset mismatch for UJunoBasePFWContainer::ServiceData");
static_assert(offsetof(UJunoBasePFWContainer, BackendRequestsQueue) == 152, "Offset mismatch for UJunoBasePFWContainer::BackendRequestsQueue");
static_assert(offsetof(UJunoBasePFWContainer, PersistentClassName) == 160, "Offset mismatch for UJunoBasePFWContainer::PersistentClassName");
static_assert(offsetof(UJunoBasePFWContainer, PersistentName) == 168, "Offset mismatch for UJunoBasePFWContainer::PersistentName");
static_assert(offsetof(UJunoBasePFWContainer, Description) == 216, "Offset mismatch for UJunoBasePFWContainer::Description");
static_assert(offsetof(UJunoBasePFWContainer, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoBasePFWContainer::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoBasePFWContainer, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoBasePFWContainer::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoBasePFWContainer, DeinitProcess) == 248, "Offset mismatch for UJunoBasePFWContainer::DeinitProcess");

// /Script/JunoPersistence.JunoBasePFWPersistenceFeatureData
// Kind: Class; super: Object
class UJunoBasePFWPersistenceFeatureData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bTriggerErrorOnSetDirtyAfterCheckIn; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x17]; // 0x0039
    std::uint8_t bDirty; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransient; // 0x0051 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoBasePFWPersistenceFeatureData, bTriggerErrorOnSetDirtyAfterCheckIn) == 56, "Offset mismatch for UJunoBasePFWPersistenceFeatureData::bTriggerErrorOnSetDirtyAfterCheckIn");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureData, bDirty) == 80, "Offset mismatch for UJunoBasePFWPersistenceFeatureData::bDirty");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureData, bTransient) == 81, "Offset mismatch for UJunoBasePFWPersistenceFeatureData::bTransient");

// /Script/JunoPersistence.JunoBasePFWPersistenceFeatureDataContainer
// Kind: Class; super: JunoBasePFWContainer
class UJunoBasePFWPersistenceFeatureDataContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, GameplayTagContainer) == 40, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::GameplayTagContainer");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, RestoreVersionInfo) == 72, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::RestoreVersionInfo");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, SupportedVersionsTable) == 88, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::SupportedVersionsTable");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, RestoreAttemptCount) == 120, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::RestoreAttemptCount");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, SaveAttemptCount) == 128, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::SaveAttemptCount");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, DeleteAttemptCount) == 136, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::DeleteAttemptCount");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, ServiceData) == 144, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::ServiceData");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, BackendRequestsQueue) == 152, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::BackendRequestsQueue");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, PersistentClassName) == 160, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::PersistentClassName");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, PersistentName) == 168, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::PersistentName");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, Description) == 216, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::Description");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoBasePFWPersistenceFeatureDataContainer, DeinitProcess) == 248, "Offset mismatch for UJunoBasePFWPersistenceFeatureDataContainer::DeinitProcess");

// /Script/JunoPersistence.JunoBasePersistenceContainerGeneric
// Kind: Class; super: JunoBasePFWContainer
class UJunoBasePersistenceContainerGeneric
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    FString SaveFrameworkResourceId; // 0x0148 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoBasePersistenceContainerGeneric, SaveFrameworkResourceId) == 328, "Offset mismatch for UJunoBasePersistenceContainerGeneric::SaveFrameworkResourceId");

// /Script/JunoPersistence.JunoBasePersistenceSubsystem
// Kind: Class; super: WorldSubsystem
class UJunoBasePersistenceSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoDefaultWorldPersistence
// Kind: Class; super: Object
class UJunoDefaultWorldPersistence
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TScriptInterface<void> WorldMetadata; // 0x0030 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UJunoDefaultWorldPersistence, WorldMetadata) == 48, "Offset mismatch for UJunoDefaultWorldPersistence::WorldMetadata");

// /Script/JunoPersistence.JunoDeleteActionsReportHandler
// Kind: Class; super: Object
class UJunoDeleteActionsReportHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoDeltaFile
// Kind: Class; super: LevelSaveRecord
class UJunoDeltaFile
{
public:
    std::uint8_t Pad_0000[0x3C8]; // 0x0000
    FName UniquePackageName; // 0x03C8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> UpdateActions; // 0x03D0 (Size: 0x10, Type: MapProperty)
    TWeakObjectPtr<void> WeakPersistentPlayspaceToApplyTo; // 0x03E0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bDirty; // 0x03E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoDeltaFile, UniquePackageName) == 968, "Offset mismatch for UJunoDeltaFile::UniquePackageName");
static_assert(offsetof(UJunoDeltaFile, UpdateActions) == 976, "Offset mismatch for UJunoDeltaFile::UpdateActions");
static_assert(offsetof(UJunoDeltaFile, WeakPersistentPlayspaceToApplyTo) == 992, "Offset mismatch for UJunoDeltaFile::WeakPersistentPlayspaceToApplyTo");
static_assert(offsetof(UJunoDeltaFile, bDirty) == 1000, "Offset mismatch for UJunoDeltaFile::bDirty");

// /Script/JunoPersistence.JunoDeltaFileApplier
// Kind: Class; super: LevelRecordSpawner
class UJunoDeltaFileApplier
{
public:
    std::uint8_t Pad_0000[0x3B8]; // 0x0000
    TMap<void*, void*> UpdateActionMap; // 0x03B8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DeleteActionMap; // 0x03C8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoDeltaFileApplier, UpdateActionMap) == 952, "Offset mismatch for UJunoDeltaFileApplier::UpdateActionMap");
static_assert(offsetof(UJunoDeltaFileApplier, DeleteActionMap) == 968, "Offset mismatch for UJunoDeltaFileApplier::DeleteActionMap");

// /Script/JunoPersistence.JunoDeltasLevelSaveComponent
// Kind: Class; super: FortLevelSaveComponent
class UJunoDeltasLevelSaveComponent
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    FMulticastInlineDelegate OnClientSaveStateChanged; // 0x0268 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClientBackupSaveStateChanged; // 0x0278 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClientBackupRestoreStateChanged; // 0x0288 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClientCheckpointDateChanged; // 0x0298 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0xA8]; // 0x02A8
    TArray<void*> PaletteLinkCodes; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0360
    std::uint8_t CurrentVkProjectInfo[0x40]; // 0x0378 (Size: 0x40, Type: StructProperty)
    void* RestrictedPlotDefinition; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoLoadFromRestrictedPlotDefinition; // 0x03C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x03C1
    std::int32_t LinkCodeNumberToAutoLoad; // 0x03C4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bLoadRandomLinkCode; // 0x03C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoadMatchAssignedCode; // 0x03C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCuratedHub; // 0x03CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoadPlaysetFromPlot; // 0x03CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x4]; // 0x03CC
    std::uint8_t AccountIdOfOwner[0x30]; // 0x03D0 (Size: 0x30, Type: StructProperty)
    TArray<void*> OwnerCreativePermissions; // 0x0400 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0410
    void* LoadedPlot; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    FString LoadedGameFeatureSet; // 0x0428 (Size: 0x10, Type: StrProperty)
    std::uint8_t bPermissionsSaveInProgress; // 0x0438 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCurated; // 0x0439 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x6]; // 0x043A
    FString LoadedPlotInstanceId; // 0x0440 (Size: 0x10, Type: StrProperty)
    std::uint8_t LoadedLinkData[0x2E8]; // 0x0450 (Size: 0x2E8, Type: StructProperty)
    std::uint8_t CachedAnalyticsData[0x40]; // 0x0738 (Size: 0x40, Type: StructProperty)
    FString CachedGameFeatureSetName; // 0x0778 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsLoaded; // 0x0788 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAutoSaving; // 0x0789 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BackupSaveState; // 0x078A (Size: 0x1, Type: EnumProperty)
    std::uint8_t RestoringState; // 0x078B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x4]; // 0x078C
    std::uint8_t LastCheckpointDateUtc[0x50]; // 0x0790 (Size: 0x50, Type: StructProperty)
    std::uint8_t LevelInstanceList[0x10]; // 0x07E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bOptedInForDeviceUpgrades; // 0x07F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOptedInForMemorySystemUpgrades; // 0x07F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOptedInForVideoPlayerDeviceUpgrade; // 0x07F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOptedInForDaySequenceActorUpgrade; // 0x07F3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x6C]; // 0x07F4
    std::int32_t PublishRateLimitSeconds; // 0x0860 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0009[0xC]; // 0x0864
    std::int32_t BackupRateLimitSeconds; // 0x0870 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_000A[0xC]; // 0x0874
    std::int32_t RestoreRateLimitSeconds; // 0x0880 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_000B[0x4C]; // 0x0884
    TMap<void*, void*> ReporterUniqueIds; // 0x08D0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoDeltasLevelSaveComponent, OnClientSaveStateChanged) == 616, "Offset mismatch for UJunoDeltasLevelSaveComponent::OnClientSaveStateChanged");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, OnClientBackupSaveStateChanged) == 632, "Offset mismatch for UJunoDeltasLevelSaveComponent::OnClientBackupSaveStateChanged");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, OnClientBackupRestoreStateChanged) == 648, "Offset mismatch for UJunoDeltasLevelSaveComponent::OnClientBackupRestoreStateChanged");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, OnClientCheckpointDateChanged) == 664, "Offset mismatch for UJunoDeltasLevelSaveComponent::OnClientCheckpointDateChanged");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, PaletteLinkCodes) == 848, "Offset mismatch for UJunoDeltasLevelSaveComponent::PaletteLinkCodes");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, CurrentVkProjectInfo) == 888, "Offset mismatch for UJunoDeltasLevelSaveComponent::CurrentVkProjectInfo");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, RestrictedPlotDefinition) == 952, "Offset mismatch for UJunoDeltasLevelSaveComponent::RestrictedPlotDefinition");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bAutoLoadFromRestrictedPlotDefinition) == 960, "Offset mismatch for UJunoDeltasLevelSaveComponent::bAutoLoadFromRestrictedPlotDefinition");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, LinkCodeNumberToAutoLoad) == 964, "Offset mismatch for UJunoDeltasLevelSaveComponent::LinkCodeNumberToAutoLoad");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bLoadRandomLinkCode) == 968, "Offset mismatch for UJunoDeltasLevelSaveComponent::bLoadRandomLinkCode");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bLoadMatchAssignedCode) == 969, "Offset mismatch for UJunoDeltasLevelSaveComponent::bLoadMatchAssignedCode");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bCuratedHub) == 970, "Offset mismatch for UJunoDeltasLevelSaveComponent::bCuratedHub");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bLoadPlaysetFromPlot) == 971, "Offset mismatch for UJunoDeltasLevelSaveComponent::bLoadPlaysetFromPlot");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, AccountIdOfOwner) == 976, "Offset mismatch for UJunoDeltasLevelSaveComponent::AccountIdOfOwner");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, OwnerCreativePermissions) == 1024, "Offset mismatch for UJunoDeltasLevelSaveComponent::OwnerCreativePermissions");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, LoadedPlot) == 1056, "Offset mismatch for UJunoDeltasLevelSaveComponent::LoadedPlot");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, LoadedGameFeatureSet) == 1064, "Offset mismatch for UJunoDeltasLevelSaveComponent::LoadedGameFeatureSet");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bPermissionsSaveInProgress) == 1080, "Offset mismatch for UJunoDeltasLevelSaveComponent::bPermissionsSaveInProgress");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bCurated) == 1081, "Offset mismatch for UJunoDeltasLevelSaveComponent::bCurated");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, LoadedPlotInstanceId) == 1088, "Offset mismatch for UJunoDeltasLevelSaveComponent::LoadedPlotInstanceId");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, LoadedLinkData) == 1104, "Offset mismatch for UJunoDeltasLevelSaveComponent::LoadedLinkData");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, CachedAnalyticsData) == 1848, "Offset mismatch for UJunoDeltasLevelSaveComponent::CachedAnalyticsData");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, CachedGameFeatureSetName) == 1912, "Offset mismatch for UJunoDeltasLevelSaveComponent::CachedGameFeatureSetName");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bIsLoaded) == 1928, "Offset mismatch for UJunoDeltasLevelSaveComponent::bIsLoaded");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bIsAutoSaving) == 1929, "Offset mismatch for UJunoDeltasLevelSaveComponent::bIsAutoSaving");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, BackupSaveState) == 1930, "Offset mismatch for UJunoDeltasLevelSaveComponent::BackupSaveState");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, RestoringState) == 1931, "Offset mismatch for UJunoDeltasLevelSaveComponent::RestoringState");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, LastCheckpointDateUtc) == 1936, "Offset mismatch for UJunoDeltasLevelSaveComponent::LastCheckpointDateUtc");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, LevelInstanceList) == 2016, "Offset mismatch for UJunoDeltasLevelSaveComponent::LevelInstanceList");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bOptedInForDeviceUpgrades) == 2032, "Offset mismatch for UJunoDeltasLevelSaveComponent::bOptedInForDeviceUpgrades");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bOptedInForMemorySystemUpgrades) == 2033, "Offset mismatch for UJunoDeltasLevelSaveComponent::bOptedInForMemorySystemUpgrades");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bOptedInForVideoPlayerDeviceUpgrade) == 2034, "Offset mismatch for UJunoDeltasLevelSaveComponent::bOptedInForVideoPlayerDeviceUpgrade");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, bOptedInForDaySequenceActorUpgrade) == 2035, "Offset mismatch for UJunoDeltasLevelSaveComponent::bOptedInForDaySequenceActorUpgrade");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, PublishRateLimitSeconds) == 2144, "Offset mismatch for UJunoDeltasLevelSaveComponent::PublishRateLimitSeconds");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, BackupRateLimitSeconds) == 2160, "Offset mismatch for UJunoDeltasLevelSaveComponent::BackupRateLimitSeconds");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, RestoreRateLimitSeconds) == 2176, "Offset mismatch for UJunoDeltasLevelSaveComponent::RestoreRateLimitSeconds");
static_assert(offsetof(UJunoDeltasLevelSaveComponent, ReporterUniqueIds) == 2256, "Offset mismatch for UJunoDeltasLevelSaveComponent::ReporterUniqueIds");

// /Script/JunoPersistence.JunoDeltasSaveHandler
// Kind: Class; super: Object
class UJunoDeltasSaveHandler
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    void* SaveHandler; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoDeltasSaveHandler, SaveHandler) == 272, "Offset mismatch for UJunoDeltasSaveHandler::SaveHandler");

// /Script/JunoPersistence.JunoDeprecatedPersistentClasses
// Kind: Class; super: Object
class UJunoDeprecatedPersistentClasses
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DeprecatedPersistentClassPaths; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoDeprecatedPersistentClasses, DeprecatedPersistentClassPaths) == 40, "Offset mismatch for UJunoDeprecatedPersistentClasses::DeprecatedPersistentClassPaths");

// /Script/JunoPersistence.JunoDumpWorldPersistentContents
// Kind: Class; super: Interface
class UJunoDumpWorldPersistentContents
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoGlobalWorldPersistenceModel
// Kind: Class; super: JunoWorldPersistenceModel
class UJunoGlobalWorldPersistenceModel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString WorldId; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString WorldTitle; // 0x0038 (Size: 0x10, Type: StrProperty)
    TScriptInterface<void> WorldPersistence; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UJunoGlobalWorldPersistenceModel, WorldId) == 40, "Offset mismatch for UJunoGlobalWorldPersistenceModel::WorldId");
static_assert(offsetof(UJunoGlobalWorldPersistenceModel, WorldTitle) == 56, "Offset mismatch for UJunoGlobalWorldPersistenceModel::WorldTitle");
static_assert(offsetof(UJunoGlobalWorldPersistenceModel, WorldPersistence) == 72, "Offset mismatch for UJunoGlobalWorldPersistenceModel::WorldPersistence");

// /Script/JunoPersistence.JunoLevelProviderInterface
// Kind: Class; super: Interface
class UJunoLevelProviderInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPFWContainer_LevelDelta
// Kind: Class; super: PersistenceFrameworkContainer
class UJunoPFWContainer_LevelDelta
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPFWContainer_LevelDelta, GameplayTagContainer) == 40, "Offset mismatch for UJunoPFWContainer_LevelDelta::GameplayTagContainer");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, RestoreVersionInfo) == 72, "Offset mismatch for UJunoPFWContainer_LevelDelta::RestoreVersionInfo");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, SupportedVersionsTable) == 88, "Offset mismatch for UJunoPFWContainer_LevelDelta::SupportedVersionsTable");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, RestoreAttemptCount) == 120, "Offset mismatch for UJunoPFWContainer_LevelDelta::RestoreAttemptCount");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, SaveAttemptCount) == 128, "Offset mismatch for UJunoPFWContainer_LevelDelta::SaveAttemptCount");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, DeleteAttemptCount) == 136, "Offset mismatch for UJunoPFWContainer_LevelDelta::DeleteAttemptCount");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, ServiceData) == 144, "Offset mismatch for UJunoPFWContainer_LevelDelta::ServiceData");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, BackendRequestsQueue) == 152, "Offset mismatch for UJunoPFWContainer_LevelDelta::BackendRequestsQueue");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, PersistentClassName) == 160, "Offset mismatch for UJunoPFWContainer_LevelDelta::PersistentClassName");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, PersistentName) == 168, "Offset mismatch for UJunoPFWContainer_LevelDelta::PersistentName");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, Description) == 216, "Offset mismatch for UJunoPFWContainer_LevelDelta::Description");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoPFWContainer_LevelDelta::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoPFWContainer_LevelDelta::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPFWContainer_LevelDelta, DeinitProcess) == 248, "Offset mismatch for UJunoPFWContainer_LevelDelta::DeinitProcess");

// /Script/JunoPersistence.JunoPFWContainer_LevelDeltaIndex
// Kind: Class; super: JunoBasePFWContainer
class UJunoPFWContainer_LevelDeltaIndex
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, GameplayTagContainer) == 40, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::GameplayTagContainer");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, RestoreVersionInfo) == 72, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::RestoreVersionInfo");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, SupportedVersionsTable) == 88, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::SupportedVersionsTable");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, RestoreAttemptCount) == 120, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::RestoreAttemptCount");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, SaveAttemptCount) == 128, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::SaveAttemptCount");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, DeleteAttemptCount) == 136, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::DeleteAttemptCount");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, ServiceData) == 144, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::ServiceData");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, BackendRequestsQueue) == 152, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::BackendRequestsQueue");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, PersistentClassName) == 160, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::PersistentClassName");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, PersistentName) == 168, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::PersistentName");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, Description) == 216, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::Description");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPFWContainer_LevelDeltaIndex, DeinitProcess) == 248, "Offset mismatch for UJunoPFWContainer_LevelDeltaIndex::DeinitProcess");

// /Script/JunoPersistence.JunoPFWModule_LevelDeltas
// Kind: Class; super: PersistenceFrameworkModule
class UJunoPFWModule_LevelDeltas
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoPFWModule_LevelDeltas, GameplayTagContainer) == 40, "Offset mismatch for UJunoPFWModule_LevelDeltas::GameplayTagContainer");
static_assert(offsetof(UJunoPFWModule_LevelDeltas, Containers) == 72, "Offset mismatch for UJunoPFWModule_LevelDeltas::Containers");
static_assert(offsetof(UJunoPFWModule_LevelDeltas, ServiceData) == 88, "Offset mismatch for UJunoPFWModule_LevelDeltas::ServiceData");
static_assert(offsetof(UJunoPFWModule_LevelDeltas, PersistentName) == 96, "Offset mismatch for UJunoPFWModule_LevelDeltas::PersistentName");
static_assert(offsetof(UJunoPFWModule_LevelDeltas, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoPFWModule_LevelDeltas::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPFWModule_LevelDeltas, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoPFWModule_LevelDeltas::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPFWModule_LevelDeltas, DeinitProcess) == 128, "Offset mismatch for UJunoPFWModule_LevelDeltas::DeinitProcess");
static_assert(offsetof(UJunoPFWModule_LevelDeltas, Description) == 136, "Offset mismatch for UJunoPFWModule_LevelDeltas::Description");

// /Script/JunoPersistence.JunoPFWSaveFrameworkItemValueCustomSerializer
// Kind: Class; super: PFWExtension_SaveFramework_ItemValueCustomSerializer
class UJunoPFWSaveFrameworkItemValueCustomSerializer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPersistenceAnalytics
// Kind: Class; super: Object
class UJunoPersistenceAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPersistenceAssetPaths
// Kind: Class; super: Object
class UJunoPersistenceAssetPaths
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllowedPackagePathPrefixes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllowedPackagePaths; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPersistenceAssetPaths, AllowedPackagePathPrefixes) == 40, "Offset mismatch for UJunoPersistenceAssetPaths::AllowedPackagePathPrefixes");
static_assert(offsetof(UJunoPersistenceAssetPaths, AllowedPackagePaths) == 56, "Offset mismatch for UJunoPersistenceAssetPaths::AllowedPackagePaths");

// /Script/JunoPersistence.JunoPersistenceAssetType
// Kind: Class; super: Object
class UJunoPersistenceAssetType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPersistenceCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoPersistenceCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPersistenceDeveloperSettings
// Kind: Class; super: DeveloperSettings
class UJunoPersistenceDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t PersistenceType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t ReadOnly; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0035
    std::uint8_t bForceCreateNewEmptyWorldCheckpoint; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0039
    FString DevSettings; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString WorldId; // 0x0050 (Size: 0x10, Type: StrProperty)
    std::int32_t NewWorldAdventureSeed; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t Mode; // 0x0064 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HostileCreatures; // 0x0065 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FriendlyCreatures; // 0x0066 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DropInventoryOnDeath; // 0x0067 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StaminaDrain; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t NPCs; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Temperature; // 0x006A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Death; // 0x006B (Size: 0x1, Type: EnumProperty)
    std::uint8_t FriendlyFire; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t PowerSystem; // 0x006D (Size: 0x1, Type: EnumProperty)
    std::uint8_t RecruitedCreaturePermaDeath; // 0x006E (Size: 0x1, Type: EnumProperty)
    std::uint8_t EliteHostileCreatures; // 0x006F (Size: 0x1, Type: EnumProperty)
    std::uint8_t Difficulty; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Flying; // 0x0071 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ItemSpawner; // 0x0072 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FreeCrafting; // 0x0073 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Knowledge; // 0x0074 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoPersistenceDeveloperSettings, PersistenceType) == 48, "Offset mismatch for UJunoPersistenceDeveloperSettings::PersistenceType");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, ReadOnly) == 52, "Offset mismatch for UJunoPersistenceDeveloperSettings::ReadOnly");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, bForceCreateNewEmptyWorldCheckpoint) == 56, "Offset mismatch for UJunoPersistenceDeveloperSettings::bForceCreateNewEmptyWorldCheckpoint");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, DevSettings) == 64, "Offset mismatch for UJunoPersistenceDeveloperSettings::DevSettings");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, WorldId) == 80, "Offset mismatch for UJunoPersistenceDeveloperSettings::WorldId");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, NewWorldAdventureSeed) == 96, "Offset mismatch for UJunoPersistenceDeveloperSettings::NewWorldAdventureSeed");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, Mode) == 100, "Offset mismatch for UJunoPersistenceDeveloperSettings::Mode");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, HostileCreatures) == 101, "Offset mismatch for UJunoPersistenceDeveloperSettings::HostileCreatures");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, FriendlyCreatures) == 102, "Offset mismatch for UJunoPersistenceDeveloperSettings::FriendlyCreatures");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, DropInventoryOnDeath) == 103, "Offset mismatch for UJunoPersistenceDeveloperSettings::DropInventoryOnDeath");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, StaminaDrain) == 104, "Offset mismatch for UJunoPersistenceDeveloperSettings::StaminaDrain");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, NPCs) == 105, "Offset mismatch for UJunoPersistenceDeveloperSettings::NPCs");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, Temperature) == 106, "Offset mismatch for UJunoPersistenceDeveloperSettings::Temperature");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, Death) == 107, "Offset mismatch for UJunoPersistenceDeveloperSettings::Death");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, FriendlyFire) == 108, "Offset mismatch for UJunoPersistenceDeveloperSettings::FriendlyFire");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, PowerSystem) == 109, "Offset mismatch for UJunoPersistenceDeveloperSettings::PowerSystem");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, RecruitedCreaturePermaDeath) == 110, "Offset mismatch for UJunoPersistenceDeveloperSettings::RecruitedCreaturePermaDeath");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, EliteHostileCreatures) == 111, "Offset mismatch for UJunoPersistenceDeveloperSettings::EliteHostileCreatures");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, Difficulty) == 112, "Offset mismatch for UJunoPersistenceDeveloperSettings::Difficulty");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, Flying) == 113, "Offset mismatch for UJunoPersistenceDeveloperSettings::Flying");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, ItemSpawner) == 114, "Offset mismatch for UJunoPersistenceDeveloperSettings::ItemSpawner");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, FreeCrafting) == 115, "Offset mismatch for UJunoPersistenceDeveloperSettings::FreeCrafting");
static_assert(offsetof(UJunoPersistenceDeveloperSettings, Knowledge) == 116, "Offset mismatch for UJunoPersistenceDeveloperSettings::Knowledge");

// /Script/JunoPersistence.JunoPersistenceFeaturePFWState
// Kind: Class; super: Object
class UJunoPersistenceFeaturePFWState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> ContainerWeakPtr; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoPersistenceFeaturePFWState, ContainerWeakPtr) == 40, "Offset mismatch for UJunoPersistenceFeaturePFWState::ContainerWeakPtr");

// /Script/JunoPersistence.JunoPersistenceFeaturesReportHandler
// Kind: Class; super: Object
class UJunoPersistenceFeaturesReportHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPersistenceFlushManager
// Kind: Class; super: Object
class UJunoPersistenceFlushManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPersistenceGlobals
// Kind: Class; super: Object
class UJunoPersistenceGlobals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPersistenceReferenceableType
// Kind: Class; super: Interface
class UJunoPersistenceReferenceableType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPersistenceReportGenerator
// Kind: Class; super: Object
class UJunoPersistenceReportGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPersistenceSaveManager
// Kind: Class; super: Object
class UJunoPersistenceSaveManager
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float SavePeriodInSeconds; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float SavePeriodInSeconds_PIEOverride; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoPersistenceSaveManager, SavePeriodInSeconds) == 80, "Offset mismatch for UJunoPersistenceSaveManager::SavePeriodInSeconds");
static_assert(offsetof(UJunoPersistenceSaveManager, SavePeriodInSeconds_PIEOverride) == 84, "Offset mismatch for UJunoPersistenceSaveManager::SavePeriodInSeconds_PIEOverride");

// /Script/JunoPersistence.JunoPersistentPlayspace
// Kind: Class; super: FortPlayspace
class UJunoPersistentPlayspace
{
public:
    std::uint8_t Pad_0000[0x6B8]; // 0x0000
    TArray<void*> RequiredPersistenceFeatureDataClassesNative; // 0x06B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x06C8
    void* PersistenceComponent; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RequiredPersistenceFeatureDataClasses; // 0x06D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SpatialLoadingState; // 0x06E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x06E9
    std::uint8_t PersistenceMainLevelUniquePackageName[0x4]; // 0x06EC (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> PersistenceMainLevelWeakPtr; // 0x06F0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> JunoPersistentPlayspaceSaveHandler; // 0x06F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoPersistentPlayspace, RequiredPersistenceFeatureDataClassesNative) == 1720, "Offset mismatch for UJunoPersistentPlayspace::RequiredPersistenceFeatureDataClassesNative");
static_assert(offsetof(UJunoPersistentPlayspace, PersistenceComponent) == 1744, "Offset mismatch for UJunoPersistentPlayspace::PersistenceComponent");
static_assert(offsetof(UJunoPersistentPlayspace, RequiredPersistenceFeatureDataClasses) == 1752, "Offset mismatch for UJunoPersistentPlayspace::RequiredPersistenceFeatureDataClasses");
static_assert(offsetof(UJunoPersistentPlayspace, SpatialLoadingState) == 1768, "Offset mismatch for UJunoPersistentPlayspace::SpatialLoadingState");
static_assert(offsetof(UJunoPersistentPlayspace, PersistenceMainLevelUniquePackageName) == 1772, "Offset mismatch for UJunoPersistentPlayspace::PersistenceMainLevelUniquePackageName");
static_assert(offsetof(UJunoPersistentPlayspace, PersistenceMainLevelWeakPtr) == 1776, "Offset mismatch for UJunoPersistentPlayspace::PersistenceMainLevelWeakPtr");
static_assert(offsetof(UJunoPersistentPlayspace, JunoPersistentPlayspaceSaveHandler) == 1784, "Offset mismatch for UJunoPersistentPlayspace::JunoPersistentPlayspaceSaveHandler");

// /Script/JunoPersistence.JunoPersistentPlayspaceLevelRegistry
// Kind: Class; super: EngineSubsystem
class UJunoPersistentPlayspaceLevelRegistry
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> PersistentPlayspaceLevelMap; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoPersistentPlayspaceLevelRegistry, PersistentPlayspaceLevelMap) == 48, "Offset mismatch for UJunoPersistentPlayspaceLevelRegistry::PersistentPlayspaceLevelMap");

// /Script/JunoPersistence.JunoPersistentPlayspaceSaveHandler
// Kind: Class; super: Object
class UJunoPersistentPlayspaceSaveHandler
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> PersistenceFeatures; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPersistentPlayspaceSaveHandler, PersistenceFeatures) == 48, "Offset mismatch for UJunoPersistentPlayspaceSaveHandler::PersistenceFeatures");

// /Script/JunoPersistence.JunoPersistentPlayspaceSaveHandlerContainer
// Kind: Class; super: Object
class UJunoPersistentPlayspaceSaveHandlerContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> JunoPersistentPlayspaceSaveHandlers; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoPersistentPlayspaceSaveHandlerContainer, JunoPersistentPlayspaceSaveHandlers) == 40, "Offset mismatch for UJunoPersistentPlayspaceSaveHandlerContainer::JunoPersistentPlayspaceSaveHandlers");

// /Script/JunoPersistence.JunoPersistentPlayspaceTrackableInterface
// Kind: Class; super: Interface
class UJunoPersistentPlayspaceTrackableInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPlayerCheckpointHandler
// Kind: Class; super: Object
class UJunoPlayerCheckpointHandler
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    TArray<void*> BadCheckpointRanges; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPlayerCheckpointHandler, BadCheckpointRanges) == 280, "Offset mismatch for UJunoPlayerCheckpointHandler::BadCheckpointRanges");

// /Script/JunoPersistence.JunoPlayerCheckpointHandler_Default
// Kind: Class; super: JunoPlayerCheckpointHandler
class UJunoPlayerCheckpointHandler_Default
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    TArray<void*> BadCheckpointRanges; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPlayerCheckpointHandler_Default, BadCheckpointRanges) == 280, "Offset mismatch for UJunoPlayerCheckpointHandler_Default::BadCheckpointRanges");

// /Script/JunoPersistence.JunoPlayerLockPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoPlayerLockPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoPlayerLockPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoPlayerLockPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoPlayerLockPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoPlayerLockPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoPlayerLockPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoPlayerLockPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoPlayerLockPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoPlayerLockPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoPlayerLockPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoPlayerLockPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPlayerLockPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoPlayerLockPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPlayerLockPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoPlayerLockPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoPlayerLockPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoPlayerLockPersistenceFeatureModule::Description");

// /Script/JunoPersistence.JunoPlayerPersistence
// Kind: Class; super: Interface
class UJunoPlayerPersistence
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPlayerPersistenceBinaryContainerGeneric
// Kind: Class; super: JunoPlayerPersistenceContainerGeneric
class UJunoPlayerPersistenceBinaryContainerGeneric
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t PlayerInfo[0x68]; // 0x0170 (Size: 0x68, Type: StructProperty)
    std::uint8_t PlayerNetId[0x1]; // 0x01D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPlayerPersistenceBinaryContainerGeneric, PlayerInfo) == 368, "Offset mismatch for UJunoPlayerPersistenceBinaryContainerGeneric::PlayerInfo");
static_assert(offsetof(UJunoPlayerPersistenceBinaryContainerGeneric, PlayerNetId) == 472, "Offset mismatch for UJunoPlayerPersistenceBinaryContainerGeneric::PlayerNetId");

// /Script/JunoPersistence.JunoPlayerPersistenceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoPlayerPersistenceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPlayerPersistenceComponent, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UJunoPlayerPersistenceComponent::OnMeshNetworkReady_BP");
static_assert(offsetof(UJunoPlayerPersistenceComponent, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UJunoPlayerPersistenceComponent::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UJunoPlayerPersistenceComponent, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UJunoPlayerPersistenceComponent::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UJunoPlayerPersistenceComponent, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UJunoPlayerPersistenceComponent::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UJunoPlayerPersistenceComponent, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UJunoPlayerPersistenceComponent::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UJunoPlayerPersistenceComponent, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UJunoPlayerPersistenceComponent::bSubscribeToMeshNetwork");

// /Script/JunoPersistence.JunoPlayerPersistenceContainerGeneric
// Kind: Class; super: JunoBasePersistenceContainerGeneric
class UJunoPlayerPersistenceContainerGeneric
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t PlayerInfo[0x68]; // 0x0170 (Size: 0x68, Type: StructProperty)
    std::uint8_t PlayerNetId[0x1]; // 0x01D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPlayerPersistenceContainerGeneric, PlayerInfo) == 368, "Offset mismatch for UJunoPlayerPersistenceContainerGeneric::PlayerInfo");
static_assert(offsetof(UJunoPlayerPersistenceContainerGeneric, PlayerNetId) == 472, "Offset mismatch for UJunoPlayerPersistenceContainerGeneric::PlayerNetId");

// /Script/JunoPersistence.JunoPlayerPersistenceHandler
// Kind: Class; super: Object
class UJunoPlayerPersistenceHandler
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* PlayerPersistenceSettings; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* CheckpointHandler; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* FlushManager; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPlayerPersistenceHandler, PlayerPersistenceSettings) == 96, "Offset mismatch for UJunoPlayerPersistenceHandler::PlayerPersistenceSettings");
static_assert(offsetof(UJunoPlayerPersistenceHandler, CheckpointHandler) == 104, "Offset mismatch for UJunoPlayerPersistenceHandler::CheckpointHandler");
static_assert(offsetof(UJunoPlayerPersistenceHandler, FlushManager) == 112, "Offset mismatch for UJunoPlayerPersistenceHandler::FlushManager");

// /Script/JunoPersistence.JunoPlayerPersistenceManager
// Kind: Class; super: Object
class UJunoPlayerPersistenceManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PlayerPersistenceSettings; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* FlushManager; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ActivePlayers; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PendingPlayers; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoPlayerPersistenceManager, PlayerPersistenceSettings) == 40, "Offset mismatch for UJunoPlayerPersistenceManager::PlayerPersistenceSettings");
static_assert(offsetof(UJunoPlayerPersistenceManager, FlushManager) == 48, "Offset mismatch for UJunoPlayerPersistenceManager::FlushManager");
static_assert(offsetof(UJunoPlayerPersistenceManager, ActivePlayers) == 56, "Offset mismatch for UJunoPlayerPersistenceManager::ActivePlayers");
static_assert(offsetof(UJunoPlayerPersistenceManager, PendingPlayers) == 72, "Offset mismatch for UJunoPlayerPersistenceManager::PendingPlayers");

// /Script/JunoPersistence.JunoPlayerPersistenceSettings
// Kind: Class; super: DataAsset
class UJunoPlayerPersistenceSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CheckpointHandlerClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJunoPlayerPersistenceSettings, CheckpointHandlerClass) == 40, "Offset mismatch for UJunoPlayerPersistenceSettings::CheckpointHandlerClass");

// /Script/JunoPersistence.JunoPlayerPersistenceStorage
// Kind: Class; super: Interface
class UJunoPlayerPersistenceStorage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPlayspaceActorPersistentDataListener
// Kind: Class; super: Interface
class UJunoPlayspaceActorPersistentDataListener
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPlayspaceIndexPersistenceFeatureData
// Kind: Class; super: JunoBasePFWPersistenceFeatureData
class UJunoPlayspaceIndexPersistenceFeatureData
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t WorldTilePlayspaceClass[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    void* CachedWorldTilePlayspaceClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PlayspaceIndexSaveData[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData, WorldTilePlayspaceClass) == 88, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData::WorldTilePlayspaceClass");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData, CachedWorldTilePlayspaceClass) == 112, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData::CachedWorldTilePlayspaceClass");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData, PlayspaceIndexSaveData) == 120, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData::PlayspaceIndexSaveData");

// /Script/JunoPersistence.JunoPlayspaceIndexPersistenceFeatureData_Container
// Kind: Class; super: JunoBasePFWPersistenceFeatureDataContainer
class UJunoPlayspaceIndexPersistenceFeatureData_Container
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, GameplayTagContainer) == 40, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::GameplayTagContainer");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, RestoreVersionInfo) == 72, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::RestoreVersionInfo");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, SupportedVersionsTable) == 88, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::SupportedVersionsTable");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, RestoreAttemptCount) == 120, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::RestoreAttemptCount");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, SaveAttemptCount) == 128, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::SaveAttemptCount");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, DeleteAttemptCount) == 136, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::DeleteAttemptCount");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, ServiceData) == 144, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::ServiceData");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, BackendRequestsQueue) == 152, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::BackendRequestsQueue");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, PersistentClassName) == 160, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::PersistentClassName");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, PersistentName) == 168, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::PersistentName");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, Description) == 216, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::Description");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureData_Container, DeinitProcess) == 248, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureData_Container::DeinitProcess");

// /Script/JunoPersistence.JunoPlayspaceIndexPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoPlayspaceIndexPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoPlayspaceIndexPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoPlayspaceIndexPersistenceFeatureModule::Description");

// /Script/JunoPersistence.JunoPlayspacePersistenceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoPlayspacePersistenceComponent
{
public:
    std::uint8_t Pad_0000[0x11C]; // 0x0000
    TWeakObjectPtr<void> JunoPersistentPlayspaceSaveHandler; // 0x011C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoPlayspacePersistenceComponent, JunoPersistentPlayspaceSaveHandler) == 284, "Offset mismatch for UJunoPlayspacePersistenceComponent::JunoPersistentPlayspaceSaveHandler");

// /Script/JunoPersistence.JunoPlayspacePersistenceFeatureData
// Kind: Class; super: Interface
class UJunoPlayspacePersistenceFeatureData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoPlayspacePersistenceFeatureDataActor
// Kind: Class; super: Info
class UJunoPlayspacePersistenceFeatureDataActor
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    std::uint8_t SavedActorGuid[0x10]; // 0x0298 (Size: 0x10, Type: StructProperty)
    std::int32_t Version; // 0x02A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bTriggerErrorOnSetDirtyAfterCheckIn; // 0x02AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x13]; // 0x02AD
    std::uint8_t bSpawnedByLevelSaveRecord; // 0x02C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceDirty; // 0x02C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDirty; // 0x02C2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPlayspacePersistenceFeatureDataActor, SavedActorGuid) == 664, "Offset mismatch for UJunoPlayspacePersistenceFeatureDataActor::SavedActorGuid");
static_assert(offsetof(UJunoPlayspacePersistenceFeatureDataActor, Version) == 680, "Offset mismatch for UJunoPlayspacePersistenceFeatureDataActor::Version");
static_assert(offsetof(UJunoPlayspacePersistenceFeatureDataActor, bTriggerErrorOnSetDirtyAfterCheckIn) == 684, "Offset mismatch for UJunoPlayspacePersistenceFeatureDataActor::bTriggerErrorOnSetDirtyAfterCheckIn");
static_assert(offsetof(UJunoPlayspacePersistenceFeatureDataActor, bSpawnedByLevelSaveRecord) == 704, "Offset mismatch for UJunoPlayspacePersistenceFeatureDataActor::bSpawnedByLevelSaveRecord");
static_assert(offsetof(UJunoPlayspacePersistenceFeatureDataActor, bForceDirty) == 705, "Offset mismatch for UJunoPlayspacePersistenceFeatureDataActor::bForceDirty");
static_assert(offsetof(UJunoPlayspacePersistenceFeatureDataActor, bDirty) == 706, "Offset mismatch for UJunoPlayspacePersistenceFeatureDataActor::bDirty");

// /Script/JunoPersistence.JunoPlayspacePersistenceFeatureOwner
// Kind: Class; super: Interface
class UJunoPlayspacePersistenceFeatureOwner
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoReportHandler
// Kind: Class; super: Interface
class UJunoReportHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoRootPlayspacePersistenceComponent
// Kind: Class; super: JunoPlayspacePersistenceComponent
class UJunoRootPlayspacePersistenceComponent
{
public:
    std::uint8_t Pad_0000[0x11C]; // 0x0000
    TWeakObjectPtr<void> JunoPersistentPlayspaceSaveHandler; // 0x011C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoRootPlayspacePersistenceComponent, JunoPersistentPlayspaceSaveHandler) == 284, "Offset mismatch for UJunoRootPlayspacePersistenceComponent::JunoPersistentPlayspaceSaveHandler");

// /Script/JunoPersistence.JunoSubWorldPersistenceBinaryContainerGeneric
// Kind: Class; super: JunoSubWorldPersistenceContainerGeneric
class UJunoSubWorldPersistenceBinaryContainerGeneric
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t SubWorldId[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoSubWorldPersistenceBinaryContainerGeneric, SubWorldId) == 368, "Offset mismatch for UJunoSubWorldPersistenceBinaryContainerGeneric::SubWorldId");

// /Script/JunoPersistence.JunoSubWorldPersistenceConfig
// Kind: Class; super: Object
class UJunoSubWorldPersistenceConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> BadCheckpointRanges; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoSubWorldPersistenceConfig, BadCheckpointRanges) == 40, "Offset mismatch for UJunoSubWorldPersistenceConfig::BadCheckpointRanges");

// /Script/JunoPersistence.JunoSubWorldPersistenceContainerGeneric
// Kind: Class; super: JunoBasePersistenceContainerGeneric
class UJunoSubWorldPersistenceContainerGeneric
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t SubWorldId[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoSubWorldPersistenceContainerGeneric, SubWorldId) == 368, "Offset mismatch for UJunoSubWorldPersistenceContainerGeneric::SubWorldId");

// /Script/JunoPersistence.JunoTemplatesReportHandler
// Kind: Class; super: Object
class UJunoTemplatesReportHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoUpdateActionsReportHandler
// Kind: Class; super: Object
class UJunoUpdateActionsReportHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoWorldMetadataAdapter
// Kind: Class; super: Object
class UJunoWorldMetadataAdapter
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* LegacyJunoWorld; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldMetadataAdapter, LegacyJunoWorld) == 48, "Offset mismatch for UJunoWorldMetadataAdapter::LegacyJunoWorld");

// /Script/JunoPersistence.JunoWorldMetadataInterface
// Kind: Class; super: Interface
class UJunoWorldMetadataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoWorldPersistenceCheckpointManager
// Kind: Class; super: Object
class UJunoWorldPersistenceCheckpointManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t CheckpointIntervalSeconds; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t MinCheckpointIntervalSeconds; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxCheckpointCountWithinConfiguredInterval; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoWorldPersistenceCheckpointManager, CheckpointIntervalSeconds) == 40, "Offset mismatch for UJunoWorldPersistenceCheckpointManager::CheckpointIntervalSeconds");
static_assert(offsetof(UJunoWorldPersistenceCheckpointManager, MinCheckpointIntervalSeconds) == 44, "Offset mismatch for UJunoWorldPersistenceCheckpointManager::MinCheckpointIntervalSeconds");
static_assert(offsetof(UJunoWorldPersistenceCheckpointManager, MaxCheckpointCountWithinConfiguredInterval) == 48, "Offset mismatch for UJunoWorldPersistenceCheckpointManager::MaxCheckpointCountWithinConfiguredInterval");

// /Script/JunoPersistence.JunoWorldPersistenceHandler
// Kind: Class; super: Object
class UJunoWorldPersistenceHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoWorldPersistenceHandler_Deltas
// Kind: Class; super: JunoWorldPersistenceHandler
class UJunoWorldPersistenceHandler_Deltas
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t DeltasPeriodicSaveIntervalSeconds_Default; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t DeltasPeriodicSaveIntervalSeconds_PIEOverride; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x108]; // 0x0040
    void* DeltasSaveHandler; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> WorldSaveInterface; // 0x0150 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0160
    std::uint8_t DefaultDeltaFileClass[0x18]; // 0x0170 (Size: 0x18, Type: StructProperty)
    TArray<void*> RollbackBadCheckpointRanges; // 0x0188 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoWorldPersistenceHandler_Deltas, DeltasPeriodicSaveIntervalSeconds_Default) == 56, "Offset mismatch for UJunoWorldPersistenceHandler_Deltas::DeltasPeriodicSaveIntervalSeconds_Default");
static_assert(offsetof(UJunoWorldPersistenceHandler_Deltas, DeltasPeriodicSaveIntervalSeconds_PIEOverride) == 60, "Offset mismatch for UJunoWorldPersistenceHandler_Deltas::DeltasPeriodicSaveIntervalSeconds_PIEOverride");
static_assert(offsetof(UJunoWorldPersistenceHandler_Deltas, DeltasSaveHandler) == 328, "Offset mismatch for UJunoWorldPersistenceHandler_Deltas::DeltasSaveHandler");
static_assert(offsetof(UJunoWorldPersistenceHandler_Deltas, WorldSaveInterface) == 336, "Offset mismatch for UJunoWorldPersistenceHandler_Deltas::WorldSaveInterface");
static_assert(offsetof(UJunoWorldPersistenceHandler_Deltas, DefaultDeltaFileClass) == 368, "Offset mismatch for UJunoWorldPersistenceHandler_Deltas::DefaultDeltaFileClass");
static_assert(offsetof(UJunoWorldPersistenceHandler_Deltas, RollbackBadCheckpointRanges) == 392, "Offset mismatch for UJunoWorldPersistenceHandler_Deltas::RollbackBadCheckpointRanges");

// /Script/JunoPersistence.JunoWorldPersistenceHandler_Transient
// Kind: Class; super: JunoWorldPersistenceHandler
class UJunoWorldPersistenceHandler_Transient
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoWorldPersistenceInterface
// Kind: Class; super: Interface
class UJunoWorldPersistenceInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoWorldPersistenceManager
// Kind: Class; super: Object
class UJunoWorldPersistenceManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* WorldPersistenceSettings; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* WorldPersistenceModel; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldPersistenceManager, WorldPersistenceSettings) == 40, "Offset mismatch for UJunoWorldPersistenceManager::WorldPersistenceSettings");
static_assert(offsetof(UJunoWorldPersistenceManager, WorldPersistenceModel) == 48, "Offset mismatch for UJunoWorldPersistenceManager::WorldPersistenceModel");

// /Script/JunoPersistence.JunoWorldPersistenceModel
// Kind: Class; super: Object
class UJunoWorldPersistenceModel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoWorldPersistencePlayerManager
// Kind: Class; super: Object
class UJunoWorldPersistencePlayerManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoWorldPersistenceSaveHandler
// Kind: Class; super: Object
class UJunoWorldPersistenceSaveHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoWorldPersistenceSaveInterface
// Kind: Class; super: Interface
class UJunoWorldPersistenceSaveInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPersistence.JunoWorldPersistenceSettings
// Kind: Class; super: DataAsset
class UJunoWorldPersistenceSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ConfiguredPersistenceModel; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldPersistenceSettings, ConfiguredPersistenceModel) == 40, "Offset mismatch for UJunoWorldPersistenceSettings::ConfiguredPersistenceModel");

// /Script/JunoPersistence.JunoWorldPersistenceSubsystem
// Kind: Class; super: JunoBasePersistenceSubsystem
class UJunoWorldPersistenceSubsystem
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* WorldPersistenceHandler; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* WorldPersistencePlayerManager; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* SubsystemData; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* WorldCheckpointManager; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* WorldPersistenceManager; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* PlayerPersistenceManager; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* SaveManager; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* FlushManager; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PersistentPlayspaceMap; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TArray<void*> PersistentPlayspaceInsertionOrderArray; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WorldSaveDataState; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x17]; // 0x00F1
    std::uint8_t SubsystemDataAssetPath[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    void* ManualFlushAndCheckpointHelper; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0128
    TMap<void*, void*> ErrorCodeResponses; // 0x0140 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0xD0]; // 0x0150
    void* JunoPersistentPlayspaceSaveHandlerContainer; // 0x0220 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldPersistenceSubsystem, WorldPersistenceHandler) == 144, "Offset mismatch for UJunoWorldPersistenceSubsystem::WorldPersistenceHandler");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, WorldPersistencePlayerManager) == 152, "Offset mismatch for UJunoWorldPersistenceSubsystem::WorldPersistencePlayerManager");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, SubsystemData) == 160, "Offset mismatch for UJunoWorldPersistenceSubsystem::SubsystemData");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, WorldCheckpointManager) == 168, "Offset mismatch for UJunoWorldPersistenceSubsystem::WorldCheckpointManager");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, WorldPersistenceManager) == 176, "Offset mismatch for UJunoWorldPersistenceSubsystem::WorldPersistenceManager");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, PlayerPersistenceManager) == 184, "Offset mismatch for UJunoWorldPersistenceSubsystem::PlayerPersistenceManager");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, SaveManager) == 192, "Offset mismatch for UJunoWorldPersistenceSubsystem::SaveManager");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, FlushManager) == 200, "Offset mismatch for UJunoWorldPersistenceSubsystem::FlushManager");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, PersistentPlayspaceMap) == 208, "Offset mismatch for UJunoWorldPersistenceSubsystem::PersistentPlayspaceMap");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, PersistentPlayspaceInsertionOrderArray) == 224, "Offset mismatch for UJunoWorldPersistenceSubsystem::PersistentPlayspaceInsertionOrderArray");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, WorldSaveDataState) == 240, "Offset mismatch for UJunoWorldPersistenceSubsystem::WorldSaveDataState");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, SubsystemDataAssetPath) == 264, "Offset mismatch for UJunoWorldPersistenceSubsystem::SubsystemDataAssetPath");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, ManualFlushAndCheckpointHelper) == 288, "Offset mismatch for UJunoWorldPersistenceSubsystem::ManualFlushAndCheckpointHelper");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, ErrorCodeResponses) == 320, "Offset mismatch for UJunoWorldPersistenceSubsystem::ErrorCodeResponses");
static_assert(offsetof(UJunoWorldPersistenceSubsystem, JunoPersistentPlayspaceSaveHandlerContainer) == 544, "Offset mismatch for UJunoWorldPersistenceSubsystem::JunoPersistentPlayspaceSaveHandlerContainer");

// /Script/JunoPersistence.JunoWorldPersistenceSubsystemData
// Kind: Class; super: PrimaryDataAsset
class UJunoWorldPersistenceSubsystemData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DefaultWorldPersistenceHandlerClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* WorldPersistenceSettings; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* PlayerPersistenceSettings; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseModularSaveFlow; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnablePersistenceProcessor; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnablePlayerLocking; // 0x0042 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoWorldPersistenceSubsystemData, DefaultWorldPersistenceHandlerClass) == 40, "Offset mismatch for UJunoWorldPersistenceSubsystemData::DefaultWorldPersistenceHandlerClass");
static_assert(offsetof(UJunoWorldPersistenceSubsystemData, WorldPersistenceSettings) == 48, "Offset mismatch for UJunoWorldPersistenceSubsystemData::WorldPersistenceSettings");
static_assert(offsetof(UJunoWorldPersistenceSubsystemData, PlayerPersistenceSettings) == 56, "Offset mismatch for UJunoWorldPersistenceSubsystemData::PlayerPersistenceSettings");
static_assert(offsetof(UJunoWorldPersistenceSubsystemData, bUseModularSaveFlow) == 64, "Offset mismatch for UJunoWorldPersistenceSubsystemData::bUseModularSaveFlow");
static_assert(offsetof(UJunoWorldPersistenceSubsystemData, bEnablePersistenceProcessor) == 65, "Offset mismatch for UJunoWorldPersistenceSubsystemData::bEnablePersistenceProcessor");
static_assert(offsetof(UJunoWorldPersistenceSubsystemData, bEnablePlayerLocking) == 66, "Offset mismatch for UJunoWorldPersistenceSubsystemData::bEnablePlayerLocking");

// /Script/JunoPersistence.ManualFlushAndCheckpointHelper
// Kind: Class; super: Object
class UManualFlushAndCheckpointHelper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> WeakWorldPersistenceSubsystem; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UManualFlushAndCheckpointHelper, WeakWorldPersistenceSubsystem) == 40, "Offset mismatch for UManualFlushAndCheckpointHelper::WeakWorldPersistenceSubsystem");

// /Script/JunoPersistence.PFWSubsystemExtension_JunoGameNative
// Kind: Class; super: PersistenceFrameworkSubsystemExtension
class UPFWSubsystemExtension_JunoGameNative
{
public:
    std::uint8_t Opaque[1];
};
