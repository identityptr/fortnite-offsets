/**
 * decamp dumper generated SDK
 * Package: /Script/AccoladesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AccoladesRuntime.FortAccoladeCollectionData
// Kind: ScriptStruct; super: none
struct FFortAccoladeCollectionData
{
public:
    std::uint32_t AchievedCount; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bAcknowledged; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAccoladeCollectionData, AchievedCount) == 0, "Offset mismatch for FFortAccoladeCollectionData::AchievedCount");
static_assert(offsetof(FFortAccoladeCollectionData, bAcknowledged) == 4, "Offset mismatch for FFortAccoladeCollectionData::bAcknowledged");

// /Script/AccoladesRuntime.FortAccoladeCollectionDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FFortAccoladeCollectionDataArray
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> AccoladeCollectionData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAccoladeCollectionDataArray, AccoladeCollectionData) == 80, "Offset mismatch for FFortAccoladeCollectionDataArray::AccoladeCollectionData");

// /Script/AccoladesRuntime.FortAccoladeCollectionDataItem
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FFortAccoladeCollectionDataItem
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t AccoladeName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t CollectionData[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAccoladeCollectionDataItem, AccoladeName) == 12, "Offset mismatch for FFortAccoladeCollectionDataItem::AccoladeName");
static_assert(offsetof(FFortAccoladeCollectionDataItem, CollectionData) == 16, "Offset mismatch for FFortAccoladeCollectionDataItem::CollectionData");

// /Script/AccoladesRuntime.FortAccoladeSessionData
// Kind: ScriptStruct; super: none
struct FFortAccoladeSessionData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AccoladesRuntime.FortAccoladesTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortAccoladesTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EventConditional[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> EventRewards; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OneTimeEventRewards; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayDescription[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    std::int32_t DisplayOrder; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t AccoladeType; // 0x005C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Priority; // 0x005D (Size: 0x1, Type: EnumProperty)
    std::uint8_t AccoladeTier; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x005F
    std::uint8_t AwardedSoundCue[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PreviewImage[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t MaxMatchCount; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPlayerCount; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Tags[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t ProductCompatibilityQuery[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAccoladesTableRow, EventConditional) == 8, "Offset mismatch for FFortAccoladesTableRow::EventConditional");
static_assert(offsetof(FFortAccoladesTableRow, EventRewards) == 24, "Offset mismatch for FFortAccoladesTableRow::EventRewards");
static_assert(offsetof(FFortAccoladesTableRow, OneTimeEventRewards) == 40, "Offset mismatch for FFortAccoladesTableRow::OneTimeEventRewards");
static_assert(offsetof(FFortAccoladesTableRow, DisplayName) == 56, "Offset mismatch for FFortAccoladesTableRow::DisplayName");
static_assert(offsetof(FFortAccoladesTableRow, DisplayDescription) == 72, "Offset mismatch for FFortAccoladesTableRow::DisplayDescription");
static_assert(offsetof(FFortAccoladesTableRow, DisplayOrder) == 88, "Offset mismatch for FFortAccoladesTableRow::DisplayOrder");
static_assert(offsetof(FFortAccoladesTableRow, AccoladeType) == 92, "Offset mismatch for FFortAccoladesTableRow::AccoladeType");
static_assert(offsetof(FFortAccoladesTableRow, Priority) == 93, "Offset mismatch for FFortAccoladesTableRow::Priority");
static_assert(offsetof(FFortAccoladesTableRow, AccoladeTier) == 94, "Offset mismatch for FFortAccoladesTableRow::AccoladeTier");
static_assert(offsetof(FFortAccoladesTableRow, AwardedSoundCue) == 96, "Offset mismatch for FFortAccoladesTableRow::AwardedSoundCue");
static_assert(offsetof(FFortAccoladesTableRow, PreviewImage) == 128, "Offset mismatch for FFortAccoladesTableRow::PreviewImage");
static_assert(offsetof(FFortAccoladesTableRow, MaxMatchCount) == 160, "Offset mismatch for FFortAccoladesTableRow::MaxMatchCount");
static_assert(offsetof(FFortAccoladesTableRow, MaxPlayerCount) == 164, "Offset mismatch for FFortAccoladesTableRow::MaxPlayerCount");
static_assert(offsetof(FFortAccoladesTableRow, Tags) == 168, "Offset mismatch for FFortAccoladesTableRow::Tags");
static_assert(offsetof(FFortAccoladesTableRow, ProductCompatibilityQuery) == 200, "Offset mismatch for FFortAccoladesTableRow::ProductCompatibilityQuery");

// /Script/AccoladesRuntime.FortCompletedAccoladeData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FFortCompletedAccoladeData
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t AccoladeRowName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint32_t XPAwarded; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint8_t AccoladeType; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortCompletedAccoladeData, AccoladeRowName) == 12, "Offset mismatch for FFortCompletedAccoladeData::AccoladeRowName");
static_assert(offsetof(FFortCompletedAccoladeData, XPAwarded) == 16, "Offset mismatch for FFortCompletedAccoladeData::XPAwarded");
static_assert(offsetof(FFortCompletedAccoladeData, AccoladeType) == 20, "Offset mismatch for FFortCompletedAccoladeData::AccoladeType");

// /Script/AccoladesRuntime.FortCompletedAccoladeDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FFortCompletedAccoladeDataArray
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> CompletedAccolades; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortCompletedAccoladeDataArray, CompletedAccolades) == 80, "Offset mismatch for FFortCompletedAccoladeDataArray::CompletedAccolades");

// /Script/AccoladesRuntime.FortTriggeredAccoladeData
// Kind: ScriptStruct; super: none
struct FFortTriggeredAccoladeData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AccoladesRuntime.FortUpdatedTrackedAccoladeData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FFortUpdatedTrackedAccoladeData
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t AccoladeRowName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint32_t Count; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FFortUpdatedTrackedAccoladeData, AccoladeRowName) == 12, "Offset mismatch for FFortUpdatedTrackedAccoladeData::AccoladeRowName");
static_assert(offsetof(FFortUpdatedTrackedAccoladeData, Count) == 16, "Offset mismatch for FFortUpdatedTrackedAccoladeData::Count");

// /Script/AccoladesRuntime.FortUpdatedTrackedAccoladeDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FFortUpdatedTrackedAccoladeDataArray
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> UpdatedTrackedAccolades; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortUpdatedTrackedAccoladeDataArray, UpdatedTrackedAccolades) == 80, "Offset mismatch for FFortUpdatedTrackedAccoladeDataArray::UpdatedTrackedAccolades");

// /Script/AccoladesRuntime.PFWAccoladeCollection_AchievedAccolade_PersistentInfoData
// Kind: ScriptStruct; super: none
struct FPFWAccoladeCollection_AchievedAccolade_PersistentInfoData
{
public:
    FString AccoladeName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint32_t AccoladeCount; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FPFWAccoladeCollection_AchievedAccolade_PersistentInfoData, AccoladeName) == 0, "Offset mismatch for FPFWAccoladeCollection_AchievedAccolade_PersistentInfoData::AccoladeName");
static_assert(offsetof(FPFWAccoladeCollection_AchievedAccolade_PersistentInfoData, AccoladeCount) == 16, "Offset mismatch for FPFWAccoladeCollection_AchievedAccolade_PersistentInfoData::AccoladeCount");

// /Script/AccoladesRuntime.PFWAccoladeCollection_PersistentInfo
// Kind: ScriptStruct; super: none
struct FPFWAccoladeCollection_PersistentInfo
{
public:
    TArray<void*> AccoladeCollection_AchievedAccolades; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AccoladeCollection_PinnedAccolade[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t AccoladeCollection_UnacknowledgedAccolades[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPFWAccoladeCollection_PersistentInfo, AccoladeCollection_AchievedAccolades) == 0, "Offset mismatch for FPFWAccoladeCollection_PersistentInfo::AccoladeCollection_AchievedAccolades");
static_assert(offsetof(FPFWAccoladeCollection_PersistentInfo, AccoladeCollection_PinnedAccolade) == 16, "Offset mismatch for FPFWAccoladeCollection_PersistentInfo::AccoladeCollection_PinnedAccolade");
static_assert(offsetof(FPFWAccoladeCollection_PersistentInfo, AccoladeCollection_UnacknowledgedAccolades) == 32, "Offset mismatch for FPFWAccoladeCollection_PersistentInfo::AccoladeCollection_UnacknowledgedAccolades");

// /Script/AccoladesRuntime.PFWAccoladeCollection_PinnedAccolade_PersistentInfoData
// Kind: ScriptStruct; super: none
struct FPFWAccoladeCollection_PinnedAccolade_PersistentInfoData
{
public:
    FString AccoladeName; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPFWAccoladeCollection_PinnedAccolade_PersistentInfoData, AccoladeName) == 0, "Offset mismatch for FPFWAccoladeCollection_PinnedAccolade_PersistentInfoData::AccoladeName");

// /Script/AccoladesRuntime.PFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData
// Kind: ScriptStruct; super: none
struct FPFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData
{
public:
    TArray<void*> AccoladeNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData, AccoladeNames) == 0, "Offset mismatch for FPFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData::AccoladeNames");

// /Script/AccoladesRuntime.FortAccoladeCollectionFeatureCollector
// Kind: Class; super: Object
class UFortAccoladeCollectionFeatureCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AccoladesRuntime.FortCheatManager_Accolades
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_Accolades
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_AccoladeCollection
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    FName PinnedAccoladeName; // 0x0118 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0120
    std::uint8_t SaveControl[0x10]; // 0x0150 (Size: 0x10, Type: StructProperty)
    std::uint8_t AccoladeCollectionDataArray[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_AccoladeCollection, PinnedAccoladeName) == 280, "Offset mismatch for UFortControllerComponent_AccoladeCollection::PinnedAccoladeName");
static_assert(offsetof(UFortControllerComponent_AccoladeCollection, SaveControl) == 336, "Offset mismatch for UFortControllerComponent_AccoladeCollection::SaveControl");
static_assert(offsetof(UFortControllerComponent_AccoladeCollection, AccoladeCollectionDataArray) == 352, "Offset mismatch for UFortControllerComponent_AccoladeCollection::AccoladeCollectionDataArray");

// /Script/AccoladesRuntime.FortControllerComponent_Accolades
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_Accolades
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    std::uint8_t UpdatedTrackedAccoladeDataArray[0x60]; // 0x0188 (Size: 0x60, Type: StructProperty)
    std::uint8_t CompletedAccoladeDataArray[0x1]; // 0x01E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_Accolades, UpdatedTrackedAccoladeDataArray) == 392, "Offset mismatch for UFortControllerComponent_Accolades::UpdatedTrackedAccoladeDataArray");
static_assert(offsetof(UFortControllerComponent_Accolades, CompletedAccoladeDataArray) == 488, "Offset mismatch for UFortControllerComponent_Accolades::CompletedAccoladeDataArray");

// /Script/AccoladesRuntime.FortGameStateComponent_AccoladeCollection
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_AccoladeCollection
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

static_assert(offsetof(UFortGameStateComponent_AccoladeCollection, PrimaryComponentTick) == 56, "Offset mismatch for UFortGameStateComponent_AccoladeCollection::PrimaryComponentTick");
static_assert(offsetof(UFortGameStateComponent_AccoladeCollection, ComponentTags) == 104, "Offset mismatch for UFortGameStateComponent_AccoladeCollection::ComponentTags");
static_assert(offsetof(UFortGameStateComponent_AccoladeCollection, AssetUserData) == 120, "Offset mismatch for UFortGameStateComponent_AccoladeCollection::AssetUserData");
static_assert(offsetof(UFortGameStateComponent_AccoladeCollection, UCSSerializationIndex) == 144, "Offset mismatch for UFortGameStateComponent_AccoladeCollection::UCSSerializationIndex");
static_assert(offsetof(UFortGameStateComponent_AccoladeCollection, bNetAddressable) == 152, "Offset mismatch for UFortGameStateComponent_AccoladeCollection::bNetAddressable");
static_assert(offsetof(UFortGameStateComponent_AccoladeCollection, bAutoActivate) == 154, "Offset mismatch for UFortGameStateComponent_AccoladeCollection::bAutoActivate");
static_assert(offsetof(UFortGameStateComponent_AccoladeCollection, bIsEditorOnly) == 155, "Offset mismatch for UFortGameStateComponent_AccoladeCollection::bIsEditorOnly");
static_assert(offsetof(UFortGameStateComponent_AccoladeCollection, CreationMethod) == 185, "Offset mismatch for UFortGameStateComponent_AccoladeCollection::CreationMethod");
static_assert(offsetof(UFortGameStateComponent_AccoladeCollection, OnComponentActivated) == 186, "Offset mismatch for UFortGameStateComponent_AccoladeCollection::OnComponentActivated");
static_assert(offsetof(UFortGameStateComponent_AccoladeCollection, OnComponentDeactivated) == 187, "Offset mismatch for UFortGameStateComponent_AccoladeCollection::OnComponentDeactivated");

// /Script/AccoladesRuntime.FortGameStateComponent_Accolades
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_Accolades
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

static_assert(offsetof(UFortGameStateComponent_Accolades, PrimaryComponentTick) == 56, "Offset mismatch for UFortGameStateComponent_Accolades::PrimaryComponentTick");
static_assert(offsetof(UFortGameStateComponent_Accolades, ComponentTags) == 104, "Offset mismatch for UFortGameStateComponent_Accolades::ComponentTags");
static_assert(offsetof(UFortGameStateComponent_Accolades, AssetUserData) == 120, "Offset mismatch for UFortGameStateComponent_Accolades::AssetUserData");
static_assert(offsetof(UFortGameStateComponent_Accolades, UCSSerializationIndex) == 144, "Offset mismatch for UFortGameStateComponent_Accolades::UCSSerializationIndex");
static_assert(offsetof(UFortGameStateComponent_Accolades, bNetAddressable) == 152, "Offset mismatch for UFortGameStateComponent_Accolades::bNetAddressable");
static_assert(offsetof(UFortGameStateComponent_Accolades, bAutoActivate) == 154, "Offset mismatch for UFortGameStateComponent_Accolades::bAutoActivate");
static_assert(offsetof(UFortGameStateComponent_Accolades, bIsEditorOnly) == 155, "Offset mismatch for UFortGameStateComponent_Accolades::bIsEditorOnly");
static_assert(offsetof(UFortGameStateComponent_Accolades, CreationMethod) == 185, "Offset mismatch for UFortGameStateComponent_Accolades::CreationMethod");
static_assert(offsetof(UFortGameStateComponent_Accolades, OnComponentActivated) == 186, "Offset mismatch for UFortGameStateComponent_Accolades::OnComponentActivated");
static_assert(offsetof(UFortGameStateComponent_Accolades, OnComponentDeactivated) == 187, "Offset mismatch for UFortGameStateComponent_Accolades::OnComponentDeactivated");

// /Script/AccoladesRuntime.GameFeatureAction_AddAccoladeTables
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddAccoladeTables
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AccoladeTables; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_AddAccoladeTables, AccoladeTables) == 40, "Offset mismatch for UGameFeatureAction_AddAccoladeTables::AccoladeTables");

// /Script/AccoladesRuntime.PFWAccoladeCollection_Container
// Kind: Class; super: PersistenceFrameworkContainer
class UPFWAccoladeCollection_Container
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

static_assert(offsetof(UPFWAccoladeCollection_Container, GameplayTagContainer) == 40, "Offset mismatch for UPFWAccoladeCollection_Container::GameplayTagContainer");
static_assert(offsetof(UPFWAccoladeCollection_Container, RestoreVersionInfo) == 72, "Offset mismatch for UPFWAccoladeCollection_Container::RestoreVersionInfo");
static_assert(offsetof(UPFWAccoladeCollection_Container, SupportedVersionsTable) == 88, "Offset mismatch for UPFWAccoladeCollection_Container::SupportedVersionsTable");
static_assert(offsetof(UPFWAccoladeCollection_Container, RestoreAttemptCount) == 120, "Offset mismatch for UPFWAccoladeCollection_Container::RestoreAttemptCount");
static_assert(offsetof(UPFWAccoladeCollection_Container, SaveAttemptCount) == 128, "Offset mismatch for UPFWAccoladeCollection_Container::SaveAttemptCount");
static_assert(offsetof(UPFWAccoladeCollection_Container, DeleteAttemptCount) == 136, "Offset mismatch for UPFWAccoladeCollection_Container::DeleteAttemptCount");
static_assert(offsetof(UPFWAccoladeCollection_Container, ServiceData) == 144, "Offset mismatch for UPFWAccoladeCollection_Container::ServiceData");
static_assert(offsetof(UPFWAccoladeCollection_Container, BackendRequestsQueue) == 152, "Offset mismatch for UPFWAccoladeCollection_Container::BackendRequestsQueue");
static_assert(offsetof(UPFWAccoladeCollection_Container, PersistentClassName) == 160, "Offset mismatch for UPFWAccoladeCollection_Container::PersistentClassName");
static_assert(offsetof(UPFWAccoladeCollection_Container, PersistentName) == 168, "Offset mismatch for UPFWAccoladeCollection_Container::PersistentName");
static_assert(offsetof(UPFWAccoladeCollection_Container, Description) == 216, "Offset mismatch for UPFWAccoladeCollection_Container::Description");
static_assert(offsetof(UPFWAccoladeCollection_Container, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UPFWAccoladeCollection_Container::MakeReadyForPersistenceProcess");
static_assert(offsetof(UPFWAccoladeCollection_Container, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UPFWAccoladeCollection_Container::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UPFWAccoladeCollection_Container, DeinitProcess) == 248, "Offset mismatch for UPFWAccoladeCollection_Container::DeinitProcess");

// /Script/AccoladesRuntime.PFWAccoladeCollection_FilteredListContainer
// Kind: Class; super: PersistenceFrameworkFilteredListContainer
class UPFWAccoladeCollection_FilteredListContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AccoladesRuntime.PFWAccoladeCollection_Module
// Kind: Class; super: PersistenceFrameworkModule
class UPFWAccoladeCollection_Module
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

static_assert(offsetof(UPFWAccoladeCollection_Module, GameplayTagContainer) == 40, "Offset mismatch for UPFWAccoladeCollection_Module::GameplayTagContainer");
static_assert(offsetof(UPFWAccoladeCollection_Module, Containers) == 72, "Offset mismatch for UPFWAccoladeCollection_Module::Containers");
static_assert(offsetof(UPFWAccoladeCollection_Module, ServiceData) == 88, "Offset mismatch for UPFWAccoladeCollection_Module::ServiceData");
static_assert(offsetof(UPFWAccoladeCollection_Module, PersistentName) == 96, "Offset mismatch for UPFWAccoladeCollection_Module::PersistentName");
static_assert(offsetof(UPFWAccoladeCollection_Module, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UPFWAccoladeCollection_Module::MakeReadyForPersistenceProcess");
static_assert(offsetof(UPFWAccoladeCollection_Module, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UPFWAccoladeCollection_Module::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UPFWAccoladeCollection_Module, DeinitProcess) == 128, "Offset mismatch for UPFWAccoladeCollection_Module::DeinitProcess");
static_assert(offsetof(UPFWAccoladeCollection_Module, Description) == 136, "Offset mismatch for UPFWAccoladeCollection_Module::Description");

// /Script/AccoladesRuntime.PFWAccoladeCollection_Trigger
// Kind: Class; super: PersistenceFrameworkSaveTrigger_Manual
class UPFWAccoladeCollection_Trigger
{
public:
    std::uint8_t Opaque[1];
};
