/**
 * decamp dumper generated SDK
 * Package: /Script/ItemizationCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ItemizationCoreRuntime.InventoryProperties
// Kind: ScriptStruct; super: none
struct FInventoryProperties
{
public:
    FString InventoryName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t InventoryDisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t InventoryDescription[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::int64_t PickupPriority; // 0x0030 (Size: 0x8, Type: Int64Property)
    std::int64_t TotalSlotsOverride; // 0x0038 (Size: 0x8, Type: Int64Property)
    TSoftClassPtr<void> InventoryClass; // 0x0040 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FInventoryProperties, InventoryName) == 0, "Offset mismatch for FInventoryProperties::InventoryName");
static_assert(offsetof(FInventoryProperties, InventoryDisplayName) == 16, "Offset mismatch for FInventoryProperties::InventoryDisplayName");
static_assert(offsetof(FInventoryProperties, InventoryDescription) == 32, "Offset mismatch for FInventoryProperties::InventoryDescription");
static_assert(offsetof(FInventoryProperties, PickupPriority) == 48, "Offset mismatch for FInventoryProperties::PickupPriority");
static_assert(offsetof(FInventoryProperties, TotalSlotsOverride) == 56, "Offset mismatch for FInventoryProperties::TotalSlotsOverride");
static_assert(offsetof(FInventoryProperties, InventoryClass) == 64, "Offset mismatch for FInventoryProperties::InventoryClass");

// /Script/ItemizationCoreRuntime.InventoryStartingItem
// Kind: ScriptStruct; super: none
struct FInventoryStartingItem
{
public:
    std::uint8_t ItemDefinition[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t EntityClass[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    std::int64_t Amount; // 0x0040 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FInventoryStartingItem, ItemDefinition) == 0, "Offset mismatch for FInventoryStartingItem::ItemDefinition");
static_assert(offsetof(FInventoryStartingItem, EntityClass) == 32, "Offset mismatch for FInventoryStartingItem::EntityClass");
static_assert(offsetof(FInventoryStartingItem, Amount) == 64, "Offset mismatch for FInventoryStartingItem::Amount");

// /Script/ItemizationCoreRuntime.ItemAbilityBinding
// Kind: ScriptStruct; super: none
struct FItemAbilityBinding
{
public:
    std::uint8_t InputAction[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ActiveState; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    TArray<void*> Costs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Cooldowns; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FItemAbilityBinding, InputAction) == 0, "Offset mismatch for FItemAbilityBinding::InputAction");
static_assert(offsetof(FItemAbilityBinding, ActiveState) == 32, "Offset mismatch for FItemAbilityBinding::ActiveState");
static_assert(offsetof(FItemAbilityBinding, Costs) == 40, "Offset mismatch for FItemAbilityBinding::Costs");
static_assert(offsetof(FItemAbilityBinding, Cooldowns) == 56, "Offset mismatch for FItemAbilityBinding::Cooldowns");

// /Script/ItemizationCoreRuntime.ItemAbilityCooldownState
// Kind: ScriptStruct; super: none
struct FItemAbilityCooldownState
{
public:
    std::uint8_t bIsActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Progress; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PredictedTimeLeft; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float PredictedProgressPerSecond; // 0x000C (Size: 0x4, Type: FloatProperty)
    double TimeLastUpdated; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FItemAbilityCooldownState, bIsActive) == 0, "Offset mismatch for FItemAbilityCooldownState::bIsActive");
static_assert(offsetof(FItemAbilityCooldownState, Progress) == 4, "Offset mismatch for FItemAbilityCooldownState::Progress");
static_assert(offsetof(FItemAbilityCooldownState, PredictedTimeLeft) == 8, "Offset mismatch for FItemAbilityCooldownState::PredictedTimeLeft");
static_assert(offsetof(FItemAbilityCooldownState, PredictedProgressPerSecond) == 12, "Offset mismatch for FItemAbilityCooldownState::PredictedProgressPerSecond");
static_assert(offsetof(FItemAbilityCooldownState, TimeLastUpdated) == 16, "Offset mismatch for FItemAbilityCooldownState::TimeLastUpdated");

// /Script/ItemizationCoreRuntime.ItemAggregatedData
// Kind: ScriptStruct; super: none
struct FItemAggregatedData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationCoreRuntime.ItemComponentContainer
// Kind: ScriptStruct; super: none
struct FItemComponentContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationCoreRuntime.ItemComponentData
// Kind: ScriptStruct; super: none
struct FItemComponentData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationCoreRuntime.ItemComponentDataList
// Kind: ScriptStruct; super: none
struct FItemComponentDataList
{
public:
    TArray<void*> DataList; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FItemComponentDataList, DataList) == 0, "Offset mismatch for FItemComponentDataList::DataList");

// /Script/ItemizationCoreRuntime.ItemComponentData_Ability
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_Ability
{
public:
    TArray<void*> AbilityList; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FItemComponentData_Ability, AbilityList) == 0, "Offset mismatch for FItemComponentData_Ability::AbilityList");

// /Script/ItemizationCoreRuntime.ItemComponentData_Attach
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_Attach
{
public:
    TArray<void*> Attachments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FItemComponentData_Attach, Attachments) == 0, "Offset mismatch for FItemComponentData_Attach::Attachments");

// /Script/ItemizationCoreRuntime.ItemComponentData_Entity
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_Entity
{
public:
    void* Entity; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FItemComponentData_Entity, Entity) == 0, "Offset mismatch for FItemComponentData_Entity::Entity");

// /Script/ItemizationCoreRuntime.ItemComponentData_GameplayEffects
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_GameplayEffects
{
public:
    TArray<void*> GameplayEffects; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FItemComponentData_GameplayEffects, GameplayEffects) == 0, "Offset mismatch for FItemComponentData_GameplayEffects::GameplayEffects");

// /Script/ItemizationCoreRuntime.ItemComponentData_Icon
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_Icon
{
public:
    TSoftObjectPtr<void> Icon; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FItemComponentData_Icon, Icon) == 0, "Offset mismatch for FItemComponentData_Icon::Icon");

// /Script/ItemizationCoreRuntime.ItemComponentData_InventoryItemLimitByTag
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_InventoryItemLimitByTag
{
public:
    std::uint8_t LimitAmount[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t LimitTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FItemComponentData_InventoryItemLimitByTag, LimitAmount) == 0, "Offset mismatch for FItemComponentData_InventoryItemLimitByTag::LimitAmount");
static_assert(offsetof(FItemComponentData_InventoryItemLimitByTag, LimitTag) == 40, "Offset mismatch for FItemComponentData_InventoryItemLimitByTag::LimitTag");

// /Script/ItemizationCoreRuntime.ItemComponentData_MaxStackSize
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_MaxStackSize
{
public:
    std::uint8_t MaxStackSize[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FItemComponentData_MaxStackSize, MaxStackSize) == 0, "Offset mismatch for FItemComponentData_MaxStackSize::MaxStackSize");

// /Script/ItemizationCoreRuntime.ItemComponentData_OwnedGameplayTags
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_OwnedGameplayTags
{
public:
    std::uint8_t Tags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FItemComponentData_OwnedGameplayTags, Tags) == 0, "Offset mismatch for FItemComponentData_OwnedGameplayTags::Tags");

// /Script/ItemizationCoreRuntime.ItemComponentData_SlotSize
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_SlotSize
{
public:
    std::uint8_t SlotSize; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FItemComponentData_SlotSize, SlotSize) == 0, "Offset mismatch for FItemComponentData_SlotSize::SlotSize");

// /Script/ItemizationCoreRuntime.ItemComponentData_StackSize
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_StackSize
{
public:
    std::int64_t StackSize; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FItemComponentData_StackSize, StackSize) == 0, "Offset mismatch for FItemComponentData_StackSize::StackSize");

// /Script/ItemizationCoreRuntime.ItemComponentData_SuppressEntityOperations
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_SuppressEntityOperations
{
public:
    std::uint8_t bIsWriteSuppressed; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FItemComponentData_SuppressEntityOperations, bIsWriteSuppressed) == 0, "Offset mismatch for FItemComponentData_SuppressEntityOperations::bIsWriteSuppressed");

// /Script/ItemizationCoreRuntime.ItemComponentData_Tags
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_Tags
{
public:
    std::uint8_t ItemTags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FItemComponentData_Tags, ItemTags) == 0, "Offset mismatch for FItemComponentData_Tags::ItemTags");

// /Script/ItemizationCoreRuntime.ItemComponentData_Traits
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_Traits
{
public:
    std::uint8_t Traits[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FItemComponentData_Traits, Traits) == 0, "Offset mismatch for FItemComponentData_Traits::Traits");

// /Script/ItemizationCoreRuntime.ItemComponentData_WasLoadedFromSave
// Kind: ScriptStruct; super: ItemComponentData
struct FItemComponentData_WasLoadedFromSave
{
public:
    std::uint8_t bWasLoadedFromSave; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FItemComponentData_WasLoadedFromSave, bWasLoadedFromSave) == 0, "Offset mismatch for FItemComponentData_WasLoadedFromSave::bWasLoadedFromSave");

// /Script/ItemizationCoreRuntime.ItemEntityClassMapping
// Kind: ScriptStruct; super: none
struct FItemEntityClassMapping
{
public:
    FString ItemDefinition; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString EntityClass; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FItemEntityClassMapping, ItemDefinition) == 0, "Offset mismatch for FItemEntityClassMapping::ItemDefinition");
static_assert(offsetof(FItemEntityClassMapping, EntityClass) == 16, "Offset mismatch for FItemEntityClassMapping::EntityClass");

// /Script/ItemizationCoreRuntime.ItemEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FItemEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* ItemDefinition; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ItemEntryID[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t ItemData[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    TArray<void*> RemovedDataTypes; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SlotNumber; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0084
    TWeakObjectPtr<void> ParentObject; // 0x008C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FItemEntry, ItemDefinition) == 16, "Offset mismatch for FItemEntry::ItemDefinition");
static_assert(offsetof(FItemEntry, ItemEntryID) == 24, "Offset mismatch for FItemEntry::ItemEntryID");
static_assert(offsetof(FItemEntry, ItemData) == 40, "Offset mismatch for FItemEntry::ItemData");
static_assert(offsetof(FItemEntry, RemovedDataTypes) == 112, "Offset mismatch for FItemEntry::RemovedDataTypes");
static_assert(offsetof(FItemEntry, SlotNumber) == 128, "Offset mismatch for FItemEntry::SlotNumber");
static_assert(offsetof(FItemEntry, ParentObject) == 140, "Offset mismatch for FItemEntry::ParentObject");

// /Script/ItemizationCoreRuntime.ItemEntryList
// Kind: ScriptStruct; super: FastArraySerializer
struct FItemEntryList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> ItemList; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FItemEntryList, ItemList) == 72, "Offset mismatch for FItemEntryList::ItemList");

// /Script/ItemizationCoreRuntime.ItemID
// Kind: ScriptStruct; super: Guid
struct FItemID
{
public:
    std::int32_t A; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t B; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t C; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t D; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FItemID, A) == 0, "Offset mismatch for FItemID::A");
static_assert(offsetof(FItemID, B) == 4, "Offset mismatch for FItemID::B");
static_assert(offsetof(FItemID, C) == 8, "Offset mismatch for FItemID::C");
static_assert(offsetof(FItemID, D) == 12, "Offset mismatch for FItemID::D");

// /Script/ItemizationCoreRuntime.ItemSlotChangeEvent
// Kind: ScriptStruct; super: none
struct FItemSlotChangeEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationCoreRuntime.KeyedPropertyInterface
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FKeyedPropertyInterface
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int64_t Key; // 0x0010 (Size: 0x8, Type: Int64Property)
    TWeakObjectPtr<void> VersePropertyInterface; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ItemID[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FKeyedPropertyInterface, Key) == 16, "Offset mismatch for FKeyedPropertyInterface::Key");
static_assert(offsetof(FKeyedPropertyInterface, VersePropertyInterface) == 24, "Offset mismatch for FKeyedPropertyInterface::VersePropertyInterface");
static_assert(offsetof(FKeyedPropertyInterface, ItemID) == 32, "Offset mismatch for FKeyedPropertyInterface::ItemID");

// /Script/ItemizationCoreRuntime.KeyedPropertyInterfaceList
// Kind: ScriptStruct; super: FastArraySerializer
struct FKeyedPropertyInterfaceList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> KeyedPropertyInterfaces; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FKeyedPropertyInterfaceList, KeyedPropertyInterfaces) == 72, "Offset mismatch for FKeyedPropertyInterfaceList::KeyedPropertyInterfaces");

// /Script/ItemizationCoreRuntime.ControllerComponent_ItemizationInventory
// Kind: Class; super: ControllerComponent
class UControllerComponent_ItemizationInventory
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnInventoryComponentDestroyed; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* VerseInventoryClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* InventoryClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t InventorySetupData[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    TWeakObjectPtr<void> RootInventory; // 0x0100 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UControllerComponent_ItemizationInventory, OnInventoryComponentDestroyed) == 192, "Offset mismatch for UControllerComponent_ItemizationInventory::OnInventoryComponentDestroyed");
static_assert(offsetof(UControllerComponent_ItemizationInventory, VerseInventoryClass) == 208, "Offset mismatch for UControllerComponent_ItemizationInventory::VerseInventoryClass");
static_assert(offsetof(UControllerComponent_ItemizationInventory, InventoryClass) == 216, "Offset mismatch for UControllerComponent_ItemizationInventory::InventoryClass");
static_assert(offsetof(UControllerComponent_ItemizationInventory, InventorySetupData) == 224, "Offset mismatch for UControllerComponent_ItemizationInventory::InventorySetupData");
static_assert(offsetof(UControllerComponent_ItemizationInventory, RootInventory) == 256, "Offset mismatch for UControllerComponent_ItemizationInventory::RootInventory");

// /Script/ItemizationCoreRuntime.Inventory
// Kind: Class; super: Object
class UInventory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> EquippedItems; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreviouslyEquippedItems; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0048
    void* Owner; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* InventoryReplicator; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> VerseInventoryInternal; // 0x0060 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PropertyInterfaceList[0x60]; // 0x0068 (Size: 0x60, Type: StructProperty)
    std::int64_t TotalSlotCount; // 0x00C8 (Size: 0x8, Type: Int64Property)
    std::uint8_t Pad_0002[0x4]; // 0x00D0
    std::uint8_t InventorySubType[0x4]; // 0x00D4 (Size: 0x4, Type: StructProperty)
    std::uint8_t ItemEntryData[0x158]; // 0x00D8 (Size: 0x158, Type: StructProperty)
    TArray<void*> ChildInventoryList; // 0x0230 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInventory, EquippedItems) == 40, "Offset mismatch for UInventory::EquippedItems");
static_assert(offsetof(UInventory, PreviouslyEquippedItems) == 56, "Offset mismatch for UInventory::PreviouslyEquippedItems");
static_assert(offsetof(UInventory, Owner) == 80, "Offset mismatch for UInventory::Owner");
static_assert(offsetof(UInventory, InventoryReplicator) == 88, "Offset mismatch for UInventory::InventoryReplicator");
static_assert(offsetof(UInventory, VerseInventoryInternal) == 96, "Offset mismatch for UInventory::VerseInventoryInternal");
static_assert(offsetof(UInventory, PropertyInterfaceList) == 104, "Offset mismatch for UInventory::PropertyInterfaceList");
static_assert(offsetof(UInventory, TotalSlotCount) == 200, "Offset mismatch for UInventory::TotalSlotCount");
static_assert(offsetof(UInventory, InventorySubType) == 212, "Offset mismatch for UInventory::InventorySubType");
static_assert(offsetof(UInventory, ItemEntryData) == 216, "Offset mismatch for UInventory::ItemEntryData");
static_assert(offsetof(UInventory, ChildInventoryList) == 560, "Offset mismatch for UInventory::ChildInventoryList");

// /Script/ItemizationCoreRuntime.InventoryConfigurationAsset
// Kind: Class; super: PrimaryDataAsset
class UInventoryConfigurationAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* InventorySetup; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* DEBUG_InventorySetup; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInventoryConfigurationAsset, InventorySetup) == 40, "Offset mismatch for UInventoryConfigurationAsset::InventorySetup");
static_assert(offsetof(UInventoryConfigurationAsset, DEBUG_InventorySetup) == 48, "Offset mismatch for UInventoryConfigurationAsset::DEBUG_InventorySetup");

// /Script/ItemizationCoreRuntime.InventoryReplicator
// Kind: Class; super: Actor
class UInventoryReplicator
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* RootInventory; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInventoryReplicator, RootInventory) == 624, "Offset mismatch for UInventoryReplicator::RootInventory");

// /Script/ItemizationCoreRuntime.InventorySetupDataBase
// Kind: Class; super: Object
class UInventorySetupDataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationCoreRuntime.InventorySetupDataNativeBasic
// Kind: Class; super: InventorySetupDataBase
class UInventorySetupDataNativeBasic
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> InventoryList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StartingItemList; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInventorySetupDataNativeBasic, InventoryList) == 40, "Offset mismatch for UInventorySetupDataNativeBasic::InventoryList");
static_assert(offsetof(UInventorySetupDataNativeBasic, StartingItemList) == 56, "Offset mismatch for UInventorySetupDataNativeBasic::StartingItemList");

// /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset
// Kind: Class; super: PrimaryDataAsset
class UItemAbilityConfigurationAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* GameplayAbilityClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GameplayTags[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UItemAbilityConfigurationAsset, GameplayAbilityClass) == 40, "Offset mismatch for UItemAbilityConfigurationAsset::GameplayAbilityClass");
static_assert(offsetof(UItemAbilityConfigurationAsset, GameplayTags) == 48, "Offset mismatch for UItemAbilityConfigurationAsset::GameplayTags");

// /Script/ItemizationCoreRuntime.ItemAbilityCooldown
// Kind: Class; super: Object
class UItemAbilityCooldown
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bApplyOnStart; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UItemAbilityCooldown, bApplyOnStart) == 40, "Offset mismatch for UItemAbilityCooldown::bApplyOnStart");

// /Script/ItemizationCoreRuntime.ItemAbilityCooldownTime
// Kind: Class; super: ItemAbilityCooldown
class UItemAbilityCooldownTime
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float CooldownTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UItemAbilityCooldownTime, CooldownTime) == 48, "Offset mismatch for UItemAbilityCooldownTime::CooldownTime");

// /Script/ItemizationCoreRuntime.ItemAbilityCooldownVelocityBased
// Kind: Class; super: ItemAbilityCooldown
class UItemAbilityCooldownVelocityBased
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float CooldownTimeIfStationary; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float CooldownTimeScaleFactorIfMoving; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CooldownTimeIsResetToZeroWhenMoving; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UItemAbilityCooldownVelocityBased, CooldownTimeIfStationary) == 48, "Offset mismatch for UItemAbilityCooldownVelocityBased::CooldownTimeIfStationary");
static_assert(offsetof(UItemAbilityCooldownVelocityBased, CooldownTimeScaleFactorIfMoving) == 52, "Offset mismatch for UItemAbilityCooldownVelocityBased::CooldownTimeScaleFactorIfMoving");
static_assert(offsetof(UItemAbilityCooldownVelocityBased, CooldownTimeIsResetToZeroWhenMoving) == 56, "Offset mismatch for UItemAbilityCooldownVelocityBased::CooldownTimeIsResetToZeroWhenMoving");

// /Script/ItemizationCoreRuntime.ItemAbilityCost
// Kind: Class; super: Object
class UItemAbilityCost
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationCoreRuntime.ItemAbilityCostItem
// Kind: Class; super: ItemAbilityCost
class UItemAbilityCostItem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ItemDefinition[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::int64_t NumConsumed; // 0x0048 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(UItemAbilityCostItem, ItemDefinition) == 40, "Offset mismatch for UItemAbilityCostItem::ItemDefinition");
static_assert(offsetof(UItemAbilityCostItem, NumConsumed) == 72, "Offset mismatch for UItemAbilityCostItem::NumConsumed");

// /Script/ItemizationCoreRuntime.ItemAbilityEffectAsset
// Kind: Class; super: PrimaryDataAsset
class UItemAbilityEffectAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* GameplayEffectClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UItemAbilityEffectAsset, GameplayEffectClass) == 40, "Offset mismatch for UItemAbilityEffectAsset::GameplayEffectClass");

// /Script/ItemizationCoreRuntime.ItemAttachment
// Kind: Class; super: Actor
class UItemAttachment
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* Mesh; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* AttachmentData; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UItemAttachment, Mesh) == 624, "Offset mismatch for UItemAttachment::Mesh");
static_assert(offsetof(UItemAttachment, AttachmentData) == 632, "Offset mismatch for UItemAttachment::AttachmentData");

// /Script/ItemizationCoreRuntime.ItemAttachmentDefinition
// Kind: Class; super: Object
class UItemAttachmentDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AttachmentVisibility; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UItemAttachmentDefinition, AttachmentVisibility) == 40, "Offset mismatch for UItemAttachmentDefinition::AttachmentVisibility");

// /Script/ItemizationCoreRuntime.ItemComponentBase
// Kind: Class; super: Object
class UItemComponentBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationCoreRuntime.ItemDefinitionBase
// Kind: Class; super: McpItemDefinitionBase
class UItemDefinitionBase
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ItemName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t ItemDescription[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    std::uint8_t ItemShortDescription[0x10]; // 0x0058 (Size: 0x10, Type: TextProperty)
    TArray<void*> DataList; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UItemDefinitionBase, ItemName) == 56, "Offset mismatch for UItemDefinitionBase::ItemName");
static_assert(offsetof(UItemDefinitionBase, ItemDescription) == 72, "Offset mismatch for UItemDefinitionBase::ItemDescription");
static_assert(offsetof(UItemDefinitionBase, ItemShortDescription) == 88, "Offset mismatch for UItemDefinitionBase::ItemShortDescription");
static_assert(offsetof(UItemDefinitionBase, DataList) == 104, "Offset mismatch for UItemDefinitionBase::DataList");

// /Script/ItemizationCoreRuntime.ItemEntityClassSubsystem
// Kind: Class; super: EngineSubsystem
class UItemEntityClassSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Entries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UItemEntityClassSubsystem, Entries) == 48, "Offset mismatch for UItemEntityClassSubsystem::Entries");

// /Script/ItemizationCoreRuntime.ItemMeshAttachmentDefinition
// Kind: Class; super: ItemAttachmentDefinition
class UItemMeshAttachmentDefinition
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FName AttachToSocketName; // 0x0030 (Size: 0x8, Type: NameProperty)
    std::uint8_t OffsetLocation[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t OffsetRotation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t MeshScale[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UItemMeshAttachmentDefinition, AttachToSocketName) == 48, "Offset mismatch for UItemMeshAttachmentDefinition::AttachToSocketName");
static_assert(offsetof(UItemMeshAttachmentDefinition, OffsetLocation) == 56, "Offset mismatch for UItemMeshAttachmentDefinition::OffsetLocation");
static_assert(offsetof(UItemMeshAttachmentDefinition, OffsetRotation) == 80, "Offset mismatch for UItemMeshAttachmentDefinition::OffsetRotation");
static_assert(offsetof(UItemMeshAttachmentDefinition, MeshScale) == 104, "Offset mismatch for UItemMeshAttachmentDefinition::MeshScale");

// /Script/ItemizationCoreRuntime.ItemSkeletalMeshAttachmentDefinition
// Kind: Class; super: ItemMeshAttachmentDefinition
class UItemSkeletalMeshAttachmentDefinition
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t Mesh[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> Animation; // 0x00A0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UItemSkeletalMeshAttachmentDefinition, Mesh) == 128, "Offset mismatch for UItemSkeletalMeshAttachmentDefinition::Mesh");
static_assert(offsetof(UItemSkeletalMeshAttachmentDefinition, Animation) == 160, "Offset mismatch for UItemSkeletalMeshAttachmentDefinition::Animation");

// /Script/ItemizationCoreRuntime.ItemStaticMeshAttachmentDefinition
// Kind: Class; super: ItemMeshAttachmentDefinition
class UItemStaticMeshAttachmentDefinition
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TSoftObjectPtr<void> Mesh; // 0x0080 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UItemStaticMeshAttachmentDefinition, Mesh) == 128, "Offset mismatch for UItemStaticMeshAttachmentDefinition::Mesh");

// /Script/ItemizationCoreRuntime.ItemizationConfigurationAsset
// Kind: Class; super: PrimaryDataAsset
class UItemizationConfigurationAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PlayerInventorySetup[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AIInventorySetup[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsAlwaysExposedToVerse; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableCustomUI; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    std::uint8_t HUDWidgetClass[0x20]; // 0x0070 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t InventoryScreenWidgetClass[0x20]; // 0x0090 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> InputMappingContexts; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UItemizationConfigurationAsset, PlayerInventorySetup) == 40, "Offset mismatch for UItemizationConfigurationAsset::PlayerInventorySetup");
static_assert(offsetof(UItemizationConfigurationAsset, AIInventorySetup) == 72, "Offset mismatch for UItemizationConfigurationAsset::AIInventorySetup");
static_assert(offsetof(UItemizationConfigurationAsset, bIsAlwaysExposedToVerse) == 104, "Offset mismatch for UItemizationConfigurationAsset::bIsAlwaysExposedToVerse");
static_assert(offsetof(UItemizationConfigurationAsset, bEnableCustomUI) == 105, "Offset mismatch for UItemizationConfigurationAsset::bEnableCustomUI");
static_assert(offsetof(UItemizationConfigurationAsset, HUDWidgetClass) == 112, "Offset mismatch for UItemizationConfigurationAsset::HUDWidgetClass");
static_assert(offsetof(UItemizationConfigurationAsset, InventoryScreenWidgetClass) == 144, "Offset mismatch for UItemizationConfigurationAsset::InventoryScreenWidgetClass");
static_assert(offsetof(UItemizationConfigurationAsset, InputMappingContexts) == 176, "Offset mismatch for UItemizationConfigurationAsset::InputMappingContexts");

// /Script/ItemizationCoreRuntime.ItemizationCoreCheatManager
// Kind: Class; super: CheatManagerExtension
class UItemizationCoreCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* VerseDebugLibrary; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UItemizationCoreCheatManager, VerseDebugLibrary) == 40, "Offset mismatch for UItemizationCoreCheatManager::VerseDebugLibrary");

// /Script/ItemizationCoreRuntime.ItemizationCoreSubsystem
// Kind: Class; super: WorldSubsystem
class UItemizationCoreSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> InventoryList; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ItemEntryIDToInventoryMap; // 0x0078 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0088
    TArray<void*> Components; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UItemizationCoreSubsystem, InventoryList) == 104, "Offset mismatch for UItemizationCoreSubsystem::InventoryList");
static_assert(offsetof(UItemizationCoreSubsystem, ItemEntryIDToInventoryMap) == 120, "Offset mismatch for UItemizationCoreSubsystem::ItemEntryIDToInventoryMap");
static_assert(offsetof(UItemizationCoreSubsystem, Components) == 152, "Offset mismatch for UItemizationCoreSubsystem::Components");

// /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UItemizationFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationCoreRuntime.ItemizationSubsystemComponent
// Kind: Class; super: Object
class UItemizationSubsystemComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationCoreRuntime.ItemizationSubsystemComponent_Attach
// Kind: Class; super: ItemizationSubsystemComponent
class UItemizationSubsystemComponent_Attach
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationCoreRuntime.VerseItemizationSubsystem
// Kind: Class; super: WorldSubsystem
class UVerseItemizationSubsystem
{
public:
    std::uint8_t Opaque[1];
};
