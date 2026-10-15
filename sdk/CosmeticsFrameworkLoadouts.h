/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticsFrameworkLoadouts
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadout
// Kind: ScriptStruct; super: none
struct FCosmeticBackendLoadout
{
public:
    FString ItemID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PresetId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t PresetIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t CreationTime[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    TArray<void*> Slots; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UserTags[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    FString DisplayName; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString FavoriteStatus; // 0x0070 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCosmeticBackendLoadout, ItemID) == 0, "Offset mismatch for FCosmeticBackendLoadout::ItemID");
static_assert(offsetof(FCosmeticBackendLoadout, PresetId) == 16, "Offset mismatch for FCosmeticBackendLoadout::PresetId");
static_assert(offsetof(FCosmeticBackendLoadout, PresetIndex) == 32, "Offset mismatch for FCosmeticBackendLoadout::PresetIndex");
static_assert(offsetof(FCosmeticBackendLoadout, CreationTime) == 40, "Offset mismatch for FCosmeticBackendLoadout::CreationTime");
static_assert(offsetof(FCosmeticBackendLoadout, Slots) == 48, "Offset mismatch for FCosmeticBackendLoadout::Slots");
static_assert(offsetof(FCosmeticBackendLoadout, UserTags) == 64, "Offset mismatch for FCosmeticBackendLoadout::UserTags");
static_assert(offsetof(FCosmeticBackendLoadout, DisplayName) == 96, "Offset mismatch for FCosmeticBackendLoadout::DisplayName");
static_assert(offsetof(FCosmeticBackendLoadout, FavoriteStatus) == 112, "Offset mismatch for FCosmeticBackendLoadout::FavoriteStatus");

// /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadoutGroup
// Kind: ScriptStruct; super: none
struct FCosmeticBackendLoadoutGroup
{
public:
    TMap<void*, void*> Slots; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ResolvedSlots; // 0x0010 (Size: 0x10, Type: MapProperty)
    FString ShuffleType; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString FavoriteStatus; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString DisplayName; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString ItemID; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString LinkedPresetId; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString PresetId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::int32_t PresetIndex; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0084
    std::uint8_t CreationTime[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticBackendLoadoutGroup, Slots) == 0, "Offset mismatch for FCosmeticBackendLoadoutGroup::Slots");
static_assert(offsetof(FCosmeticBackendLoadoutGroup, ResolvedSlots) == 16, "Offset mismatch for FCosmeticBackendLoadoutGroup::ResolvedSlots");
static_assert(offsetof(FCosmeticBackendLoadoutGroup, ShuffleType) == 32, "Offset mismatch for FCosmeticBackendLoadoutGroup::ShuffleType");
static_assert(offsetof(FCosmeticBackendLoadoutGroup, FavoriteStatus) == 48, "Offset mismatch for FCosmeticBackendLoadoutGroup::FavoriteStatus");
static_assert(offsetof(FCosmeticBackendLoadoutGroup, DisplayName) == 64, "Offset mismatch for FCosmeticBackendLoadoutGroup::DisplayName");
static_assert(offsetof(FCosmeticBackendLoadoutGroup, ItemID) == 80, "Offset mismatch for FCosmeticBackendLoadoutGroup::ItemID");
static_assert(offsetof(FCosmeticBackendLoadoutGroup, LinkedPresetId) == 96, "Offset mismatch for FCosmeticBackendLoadoutGroup::LinkedPresetId");
static_assert(offsetof(FCosmeticBackendLoadoutGroup, PresetId) == 112, "Offset mismatch for FCosmeticBackendLoadoutGroup::PresetId");
static_assert(offsetof(FCosmeticBackendLoadoutGroup, PresetIndex) == 128, "Offset mismatch for FCosmeticBackendLoadoutGroup::PresetIndex");
static_assert(offsetof(FCosmeticBackendLoadoutGroup, CreationTime) == 136, "Offset mismatch for FCosmeticBackendLoadoutGroup::CreationTime");

// /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadoutGroupSlot
// Kind: ScriptStruct; super: none
struct FCosmeticBackendLoadoutGroupSlot
{
public:
    FString LinkedPresetId; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Slots; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ResolvedSlots; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    FString ShuffleType; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCosmeticBackendLoadoutGroupSlot, LinkedPresetId) == 0, "Offset mismatch for FCosmeticBackendLoadoutGroupSlot::LinkedPresetId");
static_assert(offsetof(FCosmeticBackendLoadoutGroupSlot, Slots) == 16, "Offset mismatch for FCosmeticBackendLoadoutGroupSlot::Slots");
static_assert(offsetof(FCosmeticBackendLoadoutGroupSlot, ResolvedSlots) == 32, "Offset mismatch for FCosmeticBackendLoadoutGroupSlot::ResolvedSlots");
static_assert(offsetof(FCosmeticBackendLoadoutGroupSlot, ShuffleType) == 48, "Offset mismatch for FCosmeticBackendLoadoutGroupSlot::ShuffleType");

// /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadoutSlot
// Kind: ScriptStruct; super: none
struct FCosmeticBackendLoadoutSlot
{
public:
    std::uint8_t SlotTemplate[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t EquippedItem[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t ResolvedEquippedItem[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    FString InstanceID; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString ResolvedInstanceId; // 0x0028 (Size: 0x10, Type: StrProperty)
    TArray<void*> CustomizationInfo; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ResolvedCustomizationInfo; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticBackendLoadoutSlot, SlotTemplate) == 0, "Offset mismatch for FCosmeticBackendLoadoutSlot::SlotTemplate");
static_assert(offsetof(FCosmeticBackendLoadoutSlot, EquippedItem) == 8, "Offset mismatch for FCosmeticBackendLoadoutSlot::EquippedItem");
static_assert(offsetof(FCosmeticBackendLoadoutSlot, ResolvedEquippedItem) == 16, "Offset mismatch for FCosmeticBackendLoadoutSlot::ResolvedEquippedItem");
static_assert(offsetof(FCosmeticBackendLoadoutSlot, InstanceID) == 24, "Offset mismatch for FCosmeticBackendLoadoutSlot::InstanceID");
static_assert(offsetof(FCosmeticBackendLoadoutSlot, ResolvedInstanceId) == 40, "Offset mismatch for FCosmeticBackendLoadoutSlot::ResolvedInstanceId");
static_assert(offsetof(FCosmeticBackendLoadoutSlot, CustomizationInfo) == 56, "Offset mismatch for FCosmeticBackendLoadoutSlot::CustomizationInfo");
static_assert(offsetof(FCosmeticBackendLoadoutSlot, ResolvedCustomizationInfo) == 72, "Offset mismatch for FCosmeticBackendLoadoutSlot::ResolvedCustomizationInfo");

// /Script/CosmeticsFrameworkLoadouts.CosmeticCustomizationInfo
// Kind: ScriptStruct; super: none
struct FCosmeticCustomizationInfo
{
public:
    std::uint8_t ChannelTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t VariantTag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    FString AdditionalData; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCosmeticCustomizationInfo, ChannelTag) == 0, "Offset mismatch for FCosmeticCustomizationInfo::ChannelTag");
static_assert(offsetof(FCosmeticCustomizationInfo, VariantTag) == 4, "Offset mismatch for FCosmeticCustomizationInfo::VariantTag");
static_assert(offsetof(FCosmeticCustomizationInfo, AdditionalData) == 8, "Offset mismatch for FCosmeticCustomizationInfo::AdditionalData");

// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadout
// Kind: ScriptStruct; super: none
struct FCosmeticLoadout
{
public:
    std::uint8_t RandomHash[0x8]; // 0x0000 (Size: 0x8, Type: OptionalProperty)
    TArray<void*> Slots; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DesiredSlots; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticLoadout, RandomHash) == 0, "Offset mismatch for FCosmeticLoadout::RandomHash");
static_assert(offsetof(FCosmeticLoadout, Slots) == 8, "Offset mismatch for FCosmeticLoadout::Slots");
static_assert(offsetof(FCosmeticLoadout, DesiredSlots) == 24, "Offset mismatch for FCosmeticLoadout::DesiredSlots");

// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutActiveArchetype
// Kind: ScriptStruct; super: none
struct FCosmeticLoadoutActiveArchetype
{
public:
    std::uint8_t ArchetypeGroupTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ArchetypeTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticLoadoutActiveArchetype, ArchetypeGroupTag) == 0, "Offset mismatch for FCosmeticLoadoutActiveArchetype::ArchetypeGroupTag");
static_assert(offsetof(FCosmeticLoadoutActiveArchetype, ArchetypeTag) == 4, "Offset mismatch for FCosmeticLoadoutActiveArchetype::ArchetypeTag");

// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlot
// Kind: ScriptStruct; super: none
struct FCosmeticLoadoutSlot
{
public:
    void* SlotTemplate; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EquippedItemDefinitionId[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    void* EquippedItemDefinitionObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PendingEquippedItemDefinitionId[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    TArray<void*> CustomizationInfo; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    void* EquippedItemInstance; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FString EquippedItemInstanceId; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCosmeticLoadoutSlot, SlotTemplate) == 0, "Offset mismatch for FCosmeticLoadoutSlot::SlotTemplate");
static_assert(offsetof(FCosmeticLoadoutSlot, EquippedItemDefinitionId) == 8, "Offset mismatch for FCosmeticLoadoutSlot::EquippedItemDefinitionId");
static_assert(offsetof(FCosmeticLoadoutSlot, EquippedItemDefinitionObject) == 16, "Offset mismatch for FCosmeticLoadoutSlot::EquippedItemDefinitionObject");
static_assert(offsetof(FCosmeticLoadoutSlot, PendingEquippedItemDefinitionId) == 24, "Offset mismatch for FCosmeticLoadoutSlot::PendingEquippedItemDefinitionId");
static_assert(offsetof(FCosmeticLoadoutSlot, CustomizationInfo) == 32, "Offset mismatch for FCosmeticLoadoutSlot::CustomizationInfo");
static_assert(offsetof(FCosmeticLoadoutSlot, EquippedItemInstance) == 48, "Offset mismatch for FCosmeticLoadoutSlot::EquippedItemInstance");
static_assert(offsetof(FCosmeticLoadoutSlot, EquippedItemInstanceId) == 56, "Offset mismatch for FCosmeticLoadoutSlot::EquippedItemInstanceId");

// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotDownloadInfo
// Kind: ScriptStruct; super: none
struct FCosmeticLoadoutSlotDownloadInfo
{
public:
    std::uint8_t ItemDefinitionAssetPath[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t SlotTag[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticLoadoutSlotDownloadInfo, ItemDefinitionAssetPath) == 0, "Offset mismatch for FCosmeticLoadoutSlotDownloadInfo::ItemDefinitionAssetPath");
static_assert(offsetof(FCosmeticLoadoutSlotDownloadInfo, SlotTag) == 24, "Offset mismatch for FCosmeticLoadoutSlotDownloadInfo::SlotTag");

// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotRequirements
// Kind: ScriptStruct; super: none
struct FCosmeticLoadoutSlotRequirements
{
public:
    std::uint8_t RequiredTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t DeniedTags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    TArray<void*> AllowedItemTypes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticLoadoutSlotRequirements, RequiredTags) == 0, "Offset mismatch for FCosmeticLoadoutSlotRequirements::RequiredTags");
static_assert(offsetof(FCosmeticLoadoutSlotRequirements, DeniedTags) == 32, "Offset mismatch for FCosmeticLoadoutSlotRequirements::DeniedTags");
static_assert(offsetof(FCosmeticLoadoutSlotRequirements, AllowedItemTypes) == 64, "Offset mismatch for FCosmeticLoadoutSlotRequirements::AllowedItemTypes");

// /Script/CosmeticsFrameworkLoadouts.LockerServiceLoadoutSettings
// Kind: ScriptStruct; super: none
struct FLockerServiceLoadoutSettings
{
public:
    std::int32_t MaxPresetCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnablePreset; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLockerServiceLoadoutSettings, MaxPresetCount) == 0, "Offset mismatch for FLockerServiceLoadoutSettings::MaxPresetCount");
static_assert(offsetof(FLockerServiceLoadoutSettings, bEnablePreset) == 4, "Offset mismatch for FLockerServiceLoadoutSettings::bEnablePreset");

// /Script/CosmeticsFrameworkLoadouts.BasicCosmeticLoadoutContext
// Kind: Class; super: Object
class UBasicCosmeticLoadoutContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkLoadouts.CosmeticCustomizableItemDefinition
// Kind: Class; super: Interface
class UCosmeticCustomizableItemDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutArchetype
// Kind: Class; super: PrimaryDataAsset
class UCosmeticLoadoutArchetype
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsArchetypeActivatable; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    std::uint8_t ArchetypeGroupTag[0x4]; // 0x005C (Size: 0x4, Type: StructProperty)
    TArray<void*> DefaultSchemas; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RuntimeSchemas; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmeticLoadoutArchetype, DisplayName) == 40, "Offset mismatch for UCosmeticLoadoutArchetype::DisplayName");
static_assert(offsetof(UCosmeticLoadoutArchetype, Icon) == 56, "Offset mismatch for UCosmeticLoadoutArchetype::Icon");
static_assert(offsetof(UCosmeticLoadoutArchetype, bIsArchetypeActivatable) == 88, "Offset mismatch for UCosmeticLoadoutArchetype::bIsArchetypeActivatable");
static_assert(offsetof(UCosmeticLoadoutArchetype, ArchetypeGroupTag) == 92, "Offset mismatch for UCosmeticLoadoutArchetype::ArchetypeGroupTag");
static_assert(offsetof(UCosmeticLoadoutArchetype, DefaultSchemas) == 96, "Offset mismatch for UCosmeticLoadoutArchetype::DefaultSchemas");
static_assert(offsetof(UCosmeticLoadoutArchetype, RuntimeSchemas) == 112, "Offset mismatch for UCosmeticLoadoutArchetype::RuntimeSchemas");

// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutContext
// Kind: Class; super: Interface
class UCosmeticLoadoutContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutInstanceItemInterface
// Kind: Class; super: Interface
class UCosmeticLoadoutInstanceItemInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutItemDefinition
// Kind: Class; super: Interface
class UCosmeticLoadoutItemDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSchema
// Kind: Class; super: PrimaryDataAsset
class UCosmeticLoadoutSchema
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ArchetypeTag[0x4]; // 0x0060 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsSchemaActivatable; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0065
    TArray<void*> Slots; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LockerServiceSettings[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticLoadoutSchema, DisplayName) == 48, "Offset mismatch for UCosmeticLoadoutSchema::DisplayName");
static_assert(offsetof(UCosmeticLoadoutSchema, Icon) == 64, "Offset mismatch for UCosmeticLoadoutSchema::Icon");
static_assert(offsetof(UCosmeticLoadoutSchema, ArchetypeTag) == 96, "Offset mismatch for UCosmeticLoadoutSchema::ArchetypeTag");
static_assert(offsetof(UCosmeticLoadoutSchema, bIsSchemaActivatable) == 100, "Offset mismatch for UCosmeticLoadoutSchema::bIsSchemaActivatable");
static_assert(offsetof(UCosmeticLoadoutSchema, Slots) == 104, "Offset mismatch for UCosmeticLoadoutSchema::Slots");
static_assert(offsetof(UCosmeticLoadoutSchema, LockerServiceSettings) == 120, "Offset mismatch for UCosmeticLoadoutSchema::LockerServiceSettings");

// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate
// Kind: Class; super: PrimaryDataAsset
class UCosmeticLoadoutSlotTemplate
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SlotTag[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t MetaTags[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t Requirements[0x50]; // 0x0058 (Size: 0x50, Type: StructProperty)
    FString ShortName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t DefaultCosmeticItemId[0x8]; // 0x00B8 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAlwaysUseDefaultCosmeticItemId; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEquippable; // 0x00C1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCosmeticLoadoutSlotTemplate, SlotTag) == 48, "Offset mismatch for UCosmeticLoadoutSlotTemplate::SlotTag");
static_assert(offsetof(UCosmeticLoadoutSlotTemplate, MetaTags) == 56, "Offset mismatch for UCosmeticLoadoutSlotTemplate::MetaTags");
static_assert(offsetof(UCosmeticLoadoutSlotTemplate, Requirements) == 88, "Offset mismatch for UCosmeticLoadoutSlotTemplate::Requirements");
static_assert(offsetof(UCosmeticLoadoutSlotTemplate, ShortName) == 168, "Offset mismatch for UCosmeticLoadoutSlotTemplate::ShortName");
static_assert(offsetof(UCosmeticLoadoutSlotTemplate, DefaultCosmeticItemId) == 184, "Offset mismatch for UCosmeticLoadoutSlotTemplate::DefaultCosmeticItemId");
static_assert(offsetof(UCosmeticLoadoutSlotTemplate, bAlwaysUseDefaultCosmeticItemId) == 192, "Offset mismatch for UCosmeticLoadoutSlotTemplate::bAlwaysUseDefaultCosmeticItemId");
static_assert(offsetof(UCosmeticLoadoutSlotTemplate, bIsEquippable) == 193, "Offset mismatch for UCosmeticLoadoutSlotTemplate::bIsEquippable");

// /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UCosmeticLoadoutSubsystem
{
public:
    std::uint8_t Opaque[1];
};
