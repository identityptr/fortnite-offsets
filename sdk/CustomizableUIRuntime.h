/**
 * decamp dumper generated SDK
 * Package: /Script/CustomizableUIRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CustomizableUIRuntime.AvailableWidgetAllowData
// Kind: ScriptStruct; super: none
struct FAvailableWidgetAllowData
{
public:
    std::uint8_t ZOrder; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t CustomZOrder; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t ActionDomain[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ExcludeConditions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHUDScaleOverride; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bUseActionDomain (shared storage)
    // 0x0038 BoolProperty bUseExclude (shared storage)
    // 0x0038 BoolProperty bUseHUDScaleOverride (shared storage)
    // 0x0038 BoolProperty bUseLayerOverride (shared storage)
    // 0x0038 BoolProperty bUseMaxAspectRatio (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t MaxAspectRatio[0xC]; // 0x003C (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseSafeZone; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAvailableWidgetAllowData, ZOrder) == 0, "Offset mismatch for FAvailableWidgetAllowData::ZOrder");
static_assert(offsetof(FAvailableWidgetAllowData, CustomZOrder) == 4, "Offset mismatch for FAvailableWidgetAllowData::CustomZOrder");
static_assert(offsetof(FAvailableWidgetAllowData, ActionDomain) == 8, "Offset mismatch for FAvailableWidgetAllowData::ActionDomain");
static_assert(offsetof(FAvailableWidgetAllowData, ExcludeConditions) == 40, "Offset mismatch for FAvailableWidgetAllowData::ExcludeConditions");
static_assert(offsetof(FAvailableWidgetAllowData, bHUDScaleOverride) == 56, "Offset mismatch for FAvailableWidgetAllowData::bHUDScaleOverride");
static_assert(offsetof(FAvailableWidgetAllowData, MaxAspectRatio) == 60, "Offset mismatch for FAvailableWidgetAllowData::MaxAspectRatio");
static_assert(offsetof(FAvailableWidgetAllowData, bUseSafeZone) == 72, "Offset mismatch for FAvailableWidgetAllowData::bUseSafeZone");

// /Script/CustomizableUIRuntime.CustomUIModificationsContainer
// Kind: ScriptStruct; super: none
struct FCustomUIModificationsContainer
{
public:
    TMap<void*, void*> Modifications; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FCustomUIModificationsContainer, Modifications) == 0, "Offset mismatch for FCustomUIModificationsContainer::Modifications");

// /Script/CustomizableUIRuntime.CustomWidgetLayout
// Kind: ScriptStruct; super: none
struct FCustomWidgetLayout
{
public:
    std::uint8_t Anchor; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t HorizontalAlignment; // 0x0004 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0005 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0006
    std::uint8_t Offset[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t SizeOverride[0x8]; // 0x0018 (Size: 0x8, Type: OptionalProperty)
    TMap<void*, void*> CustomizableIntPropertyOverrides; // 0x0020 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CustomizableFloatPropertyOverrides; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CustomizableBoolPropertyOverrides; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FCustomWidgetLayout, Anchor) == 0, "Offset mismatch for FCustomWidgetLayout::Anchor");
static_assert(offsetof(FCustomWidgetLayout, HorizontalAlignment) == 4, "Offset mismatch for FCustomWidgetLayout::HorizontalAlignment");
static_assert(offsetof(FCustomWidgetLayout, VerticalAlignment) == 5, "Offset mismatch for FCustomWidgetLayout::VerticalAlignment");
static_assert(offsetof(FCustomWidgetLayout, Offset) == 8, "Offset mismatch for FCustomWidgetLayout::Offset");
static_assert(offsetof(FCustomWidgetLayout, SizeOverride) == 24, "Offset mismatch for FCustomWidgetLayout::SizeOverride");
static_assert(offsetof(FCustomWidgetLayout, CustomizableIntPropertyOverrides) == 32, "Offset mismatch for FCustomWidgetLayout::CustomizableIntPropertyOverrides");
static_assert(offsetof(FCustomWidgetLayout, CustomizableFloatPropertyOverrides) == 48, "Offset mismatch for FCustomWidgetLayout::CustomizableFloatPropertyOverrides");
static_assert(offsetof(FCustomWidgetLayout, CustomizableBoolPropertyOverrides) == 64, "Offset mismatch for FCustomWidgetLayout::CustomizableBoolPropertyOverrides");

// /Script/CustomizableUIRuntime.CustomizableUISceneDefinition
// Kind: ScriptStruct; super: none
struct FCustomizableUISceneDefinition
{
public:
    TMap<void*, void*> CustomizableWidgets; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LayoutPresetOverrides; // 0x0010 (Size: 0x10, Type: MapProperty)
    TArray<void*> SceneSets; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsGameFeaturePluginActive; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCustomizableUISceneDefinition, CustomizableWidgets) == 0, "Offset mismatch for FCustomizableUISceneDefinition::CustomizableWidgets");
static_assert(offsetof(FCustomizableUISceneDefinition, LayoutPresetOverrides) == 16, "Offset mismatch for FCustomizableUISceneDefinition::LayoutPresetOverrides");
static_assert(offsetof(FCustomizableUISceneDefinition, SceneSets) == 32, "Offset mismatch for FCustomizableUISceneDefinition::SceneSets");
static_assert(offsetof(FCustomizableUISceneDefinition, bIsGameFeaturePluginActive) == 48, "Offset mismatch for FCustomizableUISceneDefinition::bIsGameFeaturePluginActive");

// /Script/CustomizableUIRuntime.CustomizableUIUniqueId
// Kind: ScriptStruct; super: none
struct FCustomizableUIUniqueId
{
public:
    std::uint8_t UniqueID[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bHasUniqueID; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t ResolutionGuid[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomizableUIUniqueId, UniqueID) == 0, "Offset mismatch for FCustomizableUIUniqueId::UniqueID");
static_assert(offsetof(FCustomizableUIUniqueId, bHasUniqueID) == 4, "Offset mismatch for FCustomizableUIUniqueId::bHasUniqueID");
static_assert(offsetof(FCustomizableUIUniqueId, ResolutionGuid) == 8, "Offset mismatch for FCustomizableUIUniqueId::ResolutionGuid");

// /Script/CustomizableUIRuntime.CustomizableWidgetDefinitionData
// Kind: ScriptStruct; super: none
struct FCustomizableWidgetDefinitionData
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t WidgetProxyClass[0x20]; // 0x0010 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t WidgetTrayPreviewClass[0x20]; // 0x0030 (Size: 0x20, Type: SoftClassProperty)
    float RequiredOnScreenPercent; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WidgetCategory; // 0x0054 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDisplaySizeProperty; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0056
    std::uint8_t SizePropertyDefinition[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomizableWidgetDefinitionData, DisplayName) == 0, "Offset mismatch for FCustomizableWidgetDefinitionData::DisplayName");
static_assert(offsetof(FCustomizableWidgetDefinitionData, WidgetProxyClass) == 16, "Offset mismatch for FCustomizableWidgetDefinitionData::WidgetProxyClass");
static_assert(offsetof(FCustomizableWidgetDefinitionData, WidgetTrayPreviewClass) == 48, "Offset mismatch for FCustomizableWidgetDefinitionData::WidgetTrayPreviewClass");
static_assert(offsetof(FCustomizableWidgetDefinitionData, RequiredOnScreenPercent) == 80, "Offset mismatch for FCustomizableWidgetDefinitionData::RequiredOnScreenPercent");
static_assert(offsetof(FCustomizableWidgetDefinitionData, WidgetCategory) == 84, "Offset mismatch for FCustomizableWidgetDefinitionData::WidgetCategory");
static_assert(offsetof(FCustomizableWidgetDefinitionData, bDisplaySizeProperty) == 85, "Offset mismatch for FCustomizableWidgetDefinitionData::bDisplaySizeProperty");
static_assert(offsetof(FCustomizableWidgetDefinitionData, SizePropertyDefinition) == 88, "Offset mismatch for FCustomizableWidgetDefinitionData::SizePropertyDefinition");

// /Script/CustomizableUIRuntime.CustomizableWidgetId
// Kind: ScriptStruct; super: none
struct FCustomizableWidgetId
{
public:
    std::uint8_t DynamicUIWidgetId[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    std::uint8_t DynamicUIScene[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomizableWidgetId, DynamicUIWidgetId) == 0, "Offset mismatch for FCustomizableWidgetId::DynamicUIWidgetId");
static_assert(offsetof(FCustomizableWidgetId, DynamicUIScene) == 64, "Offset mismatch for FCustomizableWidgetId::DynamicUIScene");

// /Script/CustomizableUIRuntime.CustomizableWidgetRegistryEntry
// Kind: ScriptStruct; super: none
struct FCustomizableWidgetRegistryEntry
{
public:
    void* CustomizableWidgetDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CustomizableWidgetType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t AdditionalAvailableInstanceAmount; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t AddedByDefaultAdditionalInstances[0x10]; // 0x0010 (Size: 0x10, Type: SetProperty)
    std::uint8_t AvailableWidgetAllow[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomizableWidgetRegistryEntry, CustomizableWidgetDefinition) == 0, "Offset mismatch for FCustomizableWidgetRegistryEntry::CustomizableWidgetDefinition");
static_assert(offsetof(FCustomizableWidgetRegistryEntry, CustomizableWidgetType) == 8, "Offset mismatch for FCustomizableWidgetRegistryEntry::CustomizableWidgetType");
static_assert(offsetof(FCustomizableWidgetRegistryEntry, AdditionalAvailableInstanceAmount) == 12, "Offset mismatch for FCustomizableWidgetRegistryEntry::AdditionalAvailableInstanceAmount");
static_assert(offsetof(FCustomizableWidgetRegistryEntry, AddedByDefaultAdditionalInstances) == 16, "Offset mismatch for FCustomizableWidgetRegistryEntry::AddedByDefaultAdditionalInstances");
static_assert(offsetof(FCustomizableWidgetRegistryEntry, AvailableWidgetAllow) == 32, "Offset mismatch for FCustomizableWidgetRegistryEntry::AvailableWidgetAllow");

// /Script/CustomizableUIRuntime.DefaultWidgetLayoutDefinition
// Kind: ScriptStruct; super: none
struct FDefaultWidgetLayoutDefinition
{
public:
    std::uint8_t DefaultWidgetLayout[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> LayoutPresetOverrides; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FDefaultWidgetLayoutDefinition, DefaultWidgetLayout) == 0, "Offset mismatch for FDefaultWidgetLayoutDefinition::DefaultWidgetLayout");
static_assert(offsetof(FDefaultWidgetLayoutDefinition, LayoutPresetOverrides) == 16, "Offset mismatch for FDefaultWidgetLayoutDefinition::LayoutPresetOverrides");

// /Script/CustomizableUIRuntime.DefaultWidgetLayoutEntry
// Kind: ScriptStruct; super: none
struct FDefaultWidgetLayoutEntry
{
public:
    std::uint8_t bIsAddedByDefault; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* DefaultLayoutScene; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDefaultWidgetLayoutEntry, bIsAddedByDefault) == 0, "Offset mismatch for FDefaultWidgetLayoutEntry::bIsAddedByDefault");
static_assert(offsetof(FDefaultWidgetLayoutEntry, DefaultLayoutScene) == 8, "Offset mismatch for FDefaultWidgetLayoutEntry::DefaultLayoutScene");

// /Script/CustomizableUIRuntime.PersistedDynamicUISceneId
// Kind: ScriptStruct; super: none
struct FPersistedDynamicUISceneId
{
public:
    std::uint8_t DynamicUIScene[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ResolutionGuid[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPersistedDynamicUISceneId, DynamicUIScene) == 0, "Offset mismatch for FPersistedDynamicUISceneId::DynamicUIScene");
static_assert(offsetof(FPersistedDynamicUISceneId, ResolutionGuid) == 32, "Offset mismatch for FPersistedDynamicUISceneId::ResolutionGuid");

// /Script/CustomizableUIRuntime.PersistedDynamicUISceneModifications
// Kind: ScriptStruct; super: none
struct FPersistedDynamicUISceneModifications
{
public:
    TMap<void*, void*> AddedOrModifiedWidgets; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t RemovedWidgets[0x10]; // 0x0010 (Size: 0x10, Type: SetProperty)
    TSet<void*> UnlinkedWidgets; // 0x0020 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FPersistedDynamicUISceneModifications, AddedOrModifiedWidgets) == 0, "Offset mismatch for FPersistedDynamicUISceneModifications::AddedOrModifiedWidgets");
static_assert(offsetof(FPersistedDynamicUISceneModifications, RemovedWidgets) == 16, "Offset mismatch for FPersistedDynamicUISceneModifications::RemovedWidgets");
static_assert(offsetof(FPersistedDynamicUISceneModifications, UnlinkedWidgets) == 32, "Offset mismatch for FPersistedDynamicUISceneModifications::UnlinkedWidgets");

// /Script/CustomizableUIRuntime.PersistedDynamicUIWidgetId
// Kind: ScriptStruct; super: none
struct FPersistedDynamicUIWidgetId
{
public:
    std::uint8_t WidgetClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t UniqueID[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t bHasUniqueID; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    std::uint8_t ResolutionGuid[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPersistedDynamicUIWidgetId, WidgetClass) == 0, "Offset mismatch for FPersistedDynamicUIWidgetId::WidgetClass");
static_assert(offsetof(FPersistedDynamicUIWidgetId, UniqueID) == 32, "Offset mismatch for FPersistedDynamicUIWidgetId::UniqueID");
static_assert(offsetof(FPersistedDynamicUIWidgetId, bHasUniqueID) == 36, "Offset mismatch for FPersistedDynamicUIWidgetId::bHasUniqueID");
static_assert(offsetof(FPersistedDynamicUIWidgetId, ResolutionGuid) == 40, "Offset mismatch for FPersistedDynamicUIWidgetId::ResolutionGuid");

// /Script/CustomizableUIRuntime.SizePropertyDefinition
// Kind: ScriptStruct; super: none
struct FSizePropertyDefinition
{
public:
    float MinSize; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float StepSize; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxSize; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    FText SizePropertyDisplayName; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FSizePropertyDefinition, MinSize) == 0, "Offset mismatch for FSizePropertyDefinition::MinSize");
static_assert(offsetof(FSizePropertyDefinition, StepSize) == 4, "Offset mismatch for FSizePropertyDefinition::StepSize");
static_assert(offsetof(FSizePropertyDefinition, MaxSize) == 8, "Offset mismatch for FSizePropertyDefinition::MaxSize");
static_assert(offsetof(FSizePropertyDefinition, SizePropertyDisplayName) == 16, "Offset mismatch for FSizePropertyDefinition::SizePropertyDisplayName");

// /Script/CustomizableUIRuntime.CustomLayoutConsumerInterface
// Kind: Class; super: Interface
class UCustomLayoutConsumerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableUIRuntime.CustomizableUICategory
// Kind: Class; super: DataAsset
class UCustomizableUICategory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FText DisplayName; // 0x0028 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UCustomizableUICategory, DisplayName) == 40, "Offset mismatch for UCustomizableUICategory::DisplayName");

// /Script/CustomizableUIRuntime.CustomizableUIDatabase
// Kind: Class; super: Object
class UCustomizableUIDatabase
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TMap<void*, void*> CustomizableSceneRegistry; // 0x0058 (Size: 0x10, Type: MapProperty)
    void* ActiveCategory; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* InactiveCategory; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableUIDatabase, CustomizableSceneRegistry) == 88, "Offset mismatch for UCustomizableUIDatabase::CustomizableSceneRegistry");
static_assert(offsetof(UCustomizableUIDatabase, ActiveCategory) == 104, "Offset mismatch for UCustomizableUIDatabase::ActiveCategory");
static_assert(offsetof(UCustomizableUIDatabase, InactiveCategory) == 112, "Offset mismatch for UCustomizableUIDatabase::InactiveCategory");

// /Script/CustomizableUIRuntime.CustomizableUIDatabaseBuilder
// Kind: Class; super: GameInstanceSubsystem
class UCustomizableUIDatabaseBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableUIRuntime.CustomizableUIGameFeatureAlias
// Kind: Class; super: DataAsset
class UCustomizableUIGameFeatureAlias
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FText DisplayName; // 0x0028 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UCustomizableUIGameFeatureAlias, DisplayName) == 40, "Offset mismatch for UCustomizableUIGameFeatureAlias::DisplayName");

// /Script/CustomizableUIRuntime.CustomizableUIRegistry
// Kind: Class; super: DataAsset
class UCustomizableUIRegistry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> SceneRegistry; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCustomizableUIRegistry, SceneRegistry) == 40, "Offset mismatch for UCustomizableUIRegistry::SceneRegistry");

// /Script/CustomizableUIRuntime.CustomizableUIRegistryProvider
// Kind: Class; super: Interface
class UCustomizableUIRegistryProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableUIRuntime.CustomizableUISceneSet
// Kind: Class; super: DataAsset
class UCustomizableUISceneSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    void* GameFeatureAlias; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableUISceneSet, DisplayName) == 40, "Offset mismatch for UCustomizableUISceneSet::DisplayName");
static_assert(offsetof(UCustomizableUISceneSet, GameFeatureAlias) == 56, "Offset mismatch for UCustomizableUISceneSet::GameFeatureAlias");

// /Script/CustomizableUIRuntime.CustomizableWidgetDefinition
// Kind: Class; super: DataAsset
class UCustomizableWidgetDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CustomizableWidgetDefinitionData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCustomizableWidgetDefinition, CustomizableWidgetDefinitionData) == 40, "Offset mismatch for UCustomizableWidgetDefinition::CustomizableWidgetDefinitionData");

// /Script/CustomizableUIRuntime.CustomizableWidgetDefinition_Config
// Kind: Class; super: Object
class UCustomizableWidgetDefinition_Config
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableUIRuntime.CustomizableWidgetDefinition_Inline
// Kind: Class; super: CustomizableWidgetDefinition_Config
class UCustomizableWidgetDefinition_Inline
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CustomizableWidgetDefinitionData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCustomizableWidgetDefinition_Inline, CustomizableWidgetDefinitionData) == 40, "Offset mismatch for UCustomizableWidgetDefinition_Inline::CustomizableWidgetDefinitionData");

// /Script/CustomizableUIRuntime.CustomizableWidgetDefinition_Reference
// Kind: Class; super: CustomizableWidgetDefinition_Config
class UCustomizableWidgetDefinition_Reference
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CustomizableWidgetDefinition; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableWidgetDefinition_Reference, CustomizableWidgetDefinition) == 40, "Offset mismatch for UCustomizableWidgetDefinition_Reference::CustomizableWidgetDefinition");

// /Script/CustomizableUIRuntime.GameFeatureAction_AddCustomizableUIRegistries
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddCustomizableUIRegistries
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TSet<void*> RegistriesToAdd; // 0x0030 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UGameFeatureAction_AddCustomizableUIRegistries, RegistriesToAdd) == 48, "Offset mismatch for UGameFeatureAction_AddCustomizableUIRegistries::RegistriesToAdd");

// /Script/CustomizableUIRuntime.LayoutPreset
// Kind: Class; super: DataAsset
class ULayoutPreset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t RedirectTo[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsDeprecated; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULayoutPreset, DisplayName) == 40, "Offset mismatch for ULayoutPreset::DisplayName");
static_assert(offsetof(ULayoutPreset, RedirectTo) == 56, "Offset mismatch for ULayoutPreset::RedirectTo");
static_assert(offsetof(ULayoutPreset, bIsDeprecated) == 88, "Offset mismatch for ULayoutPreset::bIsDeprecated");
