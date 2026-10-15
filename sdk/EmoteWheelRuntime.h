/**
 * decamp dumper generated SDK
 * Package: /Script/EmoteWheelRuntime
 */
#pragma once
#include "Basic.h"

// /Script/EmoteWheelRuntime.ExternalEmote
// Kind: ScriptStruct; super: none
struct FExternalEmote
{
public:
    TArray<void*> Emotes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FExternalEmote, Emotes) == 0, "Offset mismatch for FExternalEmote::Emotes");

// /Script/EmoteWheelRuntime.FollowerCommandEntry
// Kind: ScriptStruct; super: none
struct FFollowerCommandEntry
{
public:
    std::uint8_t Label[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Brush[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CommandType; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFollowerCommandEntry, Label) == 0, "Offset mismatch for FFollowerCommandEntry::Label");
static_assert(offsetof(FFollowerCommandEntry, Brush) == 16, "Offset mismatch for FFollowerCommandEntry::Brush");
static_assert(offsetof(FFollowerCommandEntry, CommandType) == 48, "Offset mismatch for FFollowerCommandEntry::CommandType");

// /Script/EmoteWheelRuntime.FortPlayerControllerEnhancedInputEmoteWheel
// Kind: ScriptStruct; super: none
struct FFortPlayerControllerEnhancedInputEmoteWheel
{
public:
    std::uint8_t InputAction_OpenEmotePicker[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InputMappingData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortPlayerControllerEnhancedInputEmoteWheel, InputAction_OpenEmotePicker) == 0, "Offset mismatch for FFortPlayerControllerEnhancedInputEmoteWheel::InputAction_OpenEmotePicker");
static_assert(offsetof(FFortPlayerControllerEnhancedInputEmoteWheel, InputMappingData) == 32, "Offset mismatch for FFortPlayerControllerEnhancedInputEmoteWheel::InputMappingData");

// /Script/EmoteWheelRuntime.SquadCommsEntry
// Kind: ScriptStruct; super: none
struct FSquadCommsEntry
{
public:
    std::uint8_t Label[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Brush[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Action; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MarkerType; // 0x0031 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSquadCommsEntry, Label) == 0, "Offset mismatch for FSquadCommsEntry::Label");
static_assert(offsetof(FSquadCommsEntry, Brush) == 16, "Offset mismatch for FSquadCommsEntry::Brush");
static_assert(offsetof(FSquadCommsEntry, Action) == 48, "Offset mismatch for FSquadCommsEntry::Action");
static_assert(offsetof(FSquadCommsEntry, MarkerType) == 49, "Offset mismatch for FSquadCommsEntry::MarkerType");

// /Script/EmoteWheelRuntime.BuiltInEmoteWheelCategoryConfig
// Kind: Class; super: EmoteWheelLockerCategoryConfig
class UBuiltInEmoteWheelCategoryConfig
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> ExternalEmotes; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBuiltInEmoteWheelCategoryConfig, ExternalEmotes) == 200, "Offset mismatch for UBuiltInEmoteWheelCategoryConfig::ExternalEmotes");

// /Script/EmoteWheelRuntime.BuiltInEmoteWheelCategoryVM
// Kind: Class; super: EmoteWheelLockerCategoryVM
class UBuiltInEmoteWheelCategoryVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* LockerCategoryVM; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBuiltInEmoteWheelCategoryVM, LockerCategoryVM) == 176, "Offset mismatch for UBuiltInEmoteWheelCategoryVM::LockerCategoryVM");

// /Script/EmoteWheelRuntime.BuiltInEmoteWheelItemVM
// Kind: Class; super: EmoteWheelLockerItemVM
class UBuiltInEmoteWheelItemVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* LockerItemVM; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBuiltInEmoteWheelItemVM, LockerItemVM) == 176, "Offset mismatch for UBuiltInEmoteWheelItemVM::LockerItemVM");

// /Script/EmoteWheelRuntime.EmoteWheelCategoryConfig
// Kind: Class; super: DataAsset
class UEmoteWheelCategoryConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ProductTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t Tag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Overlay[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomCollectionList[0x20]; // 0x0060 (Size: 0x20, Type: SoftClassProperty)
    void* SortFilterConfigProvider; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    float TextureScaleFactor; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumberOfItemsPerRowMobile; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfItemsPerRow; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t Priority; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCanOpenCollection; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableTextureReleasing; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInteractionWithItemNames; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSubTabs; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStandalone; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x009D
    std::uint8_t GameplayTagToBlockThisCategory[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEmoteWheelCategoryConfig, ProductTag) == 40, "Offset mismatch for UEmoteWheelCategoryConfig::ProductTag");
static_assert(offsetof(UEmoteWheelCategoryConfig, Tag) == 44, "Offset mismatch for UEmoteWheelCategoryConfig::Tag");
static_assert(offsetof(UEmoteWheelCategoryConfig, DisplayName) == 48, "Offset mismatch for UEmoteWheelCategoryConfig::DisplayName");
static_assert(offsetof(UEmoteWheelCategoryConfig, Overlay) == 64, "Offset mismatch for UEmoteWheelCategoryConfig::Overlay");
static_assert(offsetof(UEmoteWheelCategoryConfig, CustomCollectionList) == 96, "Offset mismatch for UEmoteWheelCategoryConfig::CustomCollectionList");
static_assert(offsetof(UEmoteWheelCategoryConfig, SortFilterConfigProvider) == 128, "Offset mismatch for UEmoteWheelCategoryConfig::SortFilterConfigProvider");
static_assert(offsetof(UEmoteWheelCategoryConfig, TextureScaleFactor) == 136, "Offset mismatch for UEmoteWheelCategoryConfig::TextureScaleFactor");
static_assert(offsetof(UEmoteWheelCategoryConfig, NumberOfItemsPerRowMobile) == 140, "Offset mismatch for UEmoteWheelCategoryConfig::NumberOfItemsPerRowMobile");
static_assert(offsetof(UEmoteWheelCategoryConfig, NumberOfItemsPerRow) == 144, "Offset mismatch for UEmoteWheelCategoryConfig::NumberOfItemsPerRow");
static_assert(offsetof(UEmoteWheelCategoryConfig, Priority) == 148, "Offset mismatch for UEmoteWheelCategoryConfig::Priority");
static_assert(offsetof(UEmoteWheelCategoryConfig, bCanOpenCollection) == 152, "Offset mismatch for UEmoteWheelCategoryConfig::bCanOpenCollection");
static_assert(offsetof(UEmoteWheelCategoryConfig, bEnableTextureReleasing) == 153, "Offset mismatch for UEmoteWheelCategoryConfig::bEnableTextureReleasing");
static_assert(offsetof(UEmoteWheelCategoryConfig, bAllowInteractionWithItemNames) == 154, "Offset mismatch for UEmoteWheelCategoryConfig::bAllowInteractionWithItemNames");
static_assert(offsetof(UEmoteWheelCategoryConfig, bEnableSubTabs) == 155, "Offset mismatch for UEmoteWheelCategoryConfig::bEnableSubTabs");
static_assert(offsetof(UEmoteWheelCategoryConfig, bIsStandalone) == 156, "Offset mismatch for UEmoteWheelCategoryConfig::bIsStandalone");
static_assert(offsetof(UEmoteWheelCategoryConfig, GameplayTagToBlockThisCategory) == 160, "Offset mismatch for UEmoteWheelCategoryConfig::GameplayTagToBlockThisCategory");

// /Script/EmoteWheelRuntime.EmoteWheelCategoryVM
// Kind: Class; super: FortPerUserViewModel
class UEmoteWheelCategoryVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Config; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EquippedItems; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SubTabs; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* ActiveSubTab; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEmoteWheelCategoryVM, Config) == 120, "Offset mismatch for UEmoteWheelCategoryVM::Config");
static_assert(offsetof(UEmoteWheelCategoryVM, EquippedItems) == 128, "Offset mismatch for UEmoteWheelCategoryVM::EquippedItems");
static_assert(offsetof(UEmoteWheelCategoryVM, SubTabs) == 144, "Offset mismatch for UEmoteWheelCategoryVM::SubTabs");
static_assert(offsetof(UEmoteWheelCategoryVM, ActiveSubTab) == 160, "Offset mismatch for UEmoteWheelCategoryVM::ActiveSubTab");

// /Script/EmoteWheelRuntime.EmoteWheelCheatManager
// Kind: Class; super: ChildCheatManager
class UEmoteWheelCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EmoteWheelRuntime.EmoteWheelCollectionNavigationWidget
// Kind: Class; super: FortNavigationWidgetBase
class UEmoteWheelCollectionNavigationWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, bIsBackHandler) == 816, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::bIsBackHandler");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, OverrideBackActionDisplayName) == 824, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::OverrideBackActionDisplayName");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, bAutoActivate) == 840, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::bAutoActivate");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, bSupportsActivationFocus) == 841, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::bSupportsActivationFocus");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, bIsModal) == 842, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::bIsModal");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, bAutoRestoreFocus) == 843, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::bAutoRestoreFocus");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, bOverrideActionDomain) == 844, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::bOverrideActionDomain");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, InputMapping) == 848, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::InputMapping");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, InputMappingPriority) == 856, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::InputMappingPriority");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, InputModeTagsToAdd) == 864, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::InputModeTagsToAdd");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, InputModeTagsToRemove) == 896, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::InputModeTagsToRemove");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, ActionDomainOverride) == 928, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::ActionDomainOverride");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, BP_OnWidgetActivated) == 960, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::BP_OnWidgetActivated");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::BP_OnWidgetDeactivated");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, bIsActive) == 992, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::bIsActive");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, VisibilityBoundWidgets) == 1000, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::VisibilityBoundWidgets");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::bSetVisibilityOnActivated");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, ActivatedVisibility) == 1177, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::ActivatedVisibility");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::bSetVisibilityOnDeactivated");
static_assert(offsetof(UEmoteWheelCollectionNavigationWidget, DeactivatedVisibility) == 1179, "Offset mismatch for UEmoteWheelCollectionNavigationWidget::DeactivatedVisibility");

// /Script/EmoteWheelRuntime.EmoteWheelConfig
// Kind: Class; super: FortGameFeatureActionSingletonAsset
class UEmoteWheelConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LegacyKBMActionBindingName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t LegacyGamepadActionBindingName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t LegacySquadCommsKBMActionBindingName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t LegacySquadCommsGamepadActionBindingName[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    TMap<void*, void*> DefaultCategories; // 0x0038 (Size: 0x10, Type: MapProperty)
    TArray<void*> CategoryConfigs; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEmoteWheelConfig, LegacyKBMActionBindingName) == 40, "Offset mismatch for UEmoteWheelConfig::LegacyKBMActionBindingName");
static_assert(offsetof(UEmoteWheelConfig, LegacyGamepadActionBindingName) == 44, "Offset mismatch for UEmoteWheelConfig::LegacyGamepadActionBindingName");
static_assert(offsetof(UEmoteWheelConfig, LegacySquadCommsKBMActionBindingName) == 48, "Offset mismatch for UEmoteWheelConfig::LegacySquadCommsKBMActionBindingName");
static_assert(offsetof(UEmoteWheelConfig, LegacySquadCommsGamepadActionBindingName) == 52, "Offset mismatch for UEmoteWheelConfig::LegacySquadCommsGamepadActionBindingName");
static_assert(offsetof(UEmoteWheelConfig, DefaultCategories) == 56, "Offset mismatch for UEmoteWheelConfig::DefaultCategories");
static_assert(offsetof(UEmoteWheelConfig, CategoryConfigs) == 72, "Offset mismatch for UEmoteWheelConfig::CategoryConfigs");

// /Script/EmoteWheelRuntime.EmoteWheelConfigManager
// Kind: Class; super: Object
class UEmoteWheelConfigManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSet<void*> CategoryConfigs; // 0x0028 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UEmoteWheelConfigManager, CategoryConfigs) == 40, "Offset mismatch for UEmoteWheelConfigManager::CategoryConfigs");

// /Script/EmoteWheelRuntime.EmoteWheelExternalCategoryConfig
// Kind: Class; super: EmoteWheelCategoryConfig
class UEmoteWheelExternalCategoryConfig
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> ExternalEmotes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bPostLockerCategory; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsExclusive; // 0x00B9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEmoteWheelExternalCategoryConfig, ExternalEmotes) == 168, "Offset mismatch for UEmoteWheelExternalCategoryConfig::ExternalEmotes");
static_assert(offsetof(UEmoteWheelExternalCategoryConfig, bPostLockerCategory) == 184, "Offset mismatch for UEmoteWheelExternalCategoryConfig::bPostLockerCategory");
static_assert(offsetof(UEmoteWheelExternalCategoryConfig, bIsExclusive) == 185, "Offset mismatch for UEmoteWheelExternalCategoryConfig::bIsExclusive");

// /Script/EmoteWheelRuntime.EmoteWheelExternalCategoryVM
// Kind: Class; super: EmoteWheelCategoryVM
class UEmoteWheelExternalCategoryVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Config; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EquippedItems; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SubTabs; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* ActiveSubTab; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEmoteWheelExternalCategoryVM, Config) == 120, "Offset mismatch for UEmoteWheelExternalCategoryVM::Config");
static_assert(offsetof(UEmoteWheelExternalCategoryVM, EquippedItems) == 128, "Offset mismatch for UEmoteWheelExternalCategoryVM::EquippedItems");
static_assert(offsetof(UEmoteWheelExternalCategoryVM, SubTabs) == 144, "Offset mismatch for UEmoteWheelExternalCategoryVM::SubTabs");
static_assert(offsetof(UEmoteWheelExternalCategoryVM, ActiveSubTab) == 160, "Offset mismatch for UEmoteWheelExternalCategoryVM::ActiveSubTab");

// /Script/EmoteWheelRuntime.EmoteWheelExternalItemVM
// Kind: Class; super: EmoteWheelItemVM
class UEmoteWheelExternalItemVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TArray<void*> PickableItems; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEmoteWheelExternalItemVM, PickableItems) == 176, "Offset mismatch for UEmoteWheelExternalItemVM::PickableItems");

// /Script/EmoteWheelRuntime.EmoteWheelItemDetailsVM
// Kind: Class; super: AthenaItemDetailsVM
class UEmoteWheelItemDetailsVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* Item; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AccessRestrictionDescription[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t RarityDisplayText[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t SeriesShortDisplayName[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t RarityColorPalette[0x50]; // 0x00A0 (Size: 0x50, Type: StructProperty)
    std::uint8_t SeriesItemCardMaterial[0x20]; // 0x00F0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SeriesBackgroundMaterial[0x20]; // 0x0110 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SeriesBackgroundTexture[0x20]; // 0x0130 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SeriesIconTexture[0x20]; // 0x0150 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InactivePreviewImage[0x20]; // 0x0170 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t WidePreviewImage[0x20]; // 0x0190 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SmallPreviewImage[0x20]; // 0x01B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargePreviewImage[0x20]; // 0x01D0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t UnlockRequirements[0x10]; // 0x01F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DirectAquisitionStyleDisclaimerOverride[0x10]; // 0x0200 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsSeriesItem; // 0x0210 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCrossStyle; // 0x0211 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMoreDetailedFigureIncoming; // 0x0212 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasAccessRestriction; // 0x0213 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AccessRestrictionType; // 0x0214 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsAgeGated; // 0x0215 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0216
    std::uint8_t bShouldShowRarity; // 0x0217 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCompatibleWithActiveProduct; // 0x0218 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLoadingImages; // 0x0219 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEmoteWheelItemDetailsVM, Item) == 104, "Offset mismatch for UEmoteWheelItemDetailsVM::Item");
static_assert(offsetof(UEmoteWheelItemDetailsVM, AccessRestrictionDescription) == 112, "Offset mismatch for UEmoteWheelItemDetailsVM::AccessRestrictionDescription");
static_assert(offsetof(UEmoteWheelItemDetailsVM, RarityDisplayText) == 128, "Offset mismatch for UEmoteWheelItemDetailsVM::RarityDisplayText");
static_assert(offsetof(UEmoteWheelItemDetailsVM, SeriesShortDisplayName) == 144, "Offset mismatch for UEmoteWheelItemDetailsVM::SeriesShortDisplayName");
static_assert(offsetof(UEmoteWheelItemDetailsVM, RarityColorPalette) == 160, "Offset mismatch for UEmoteWheelItemDetailsVM::RarityColorPalette");
static_assert(offsetof(UEmoteWheelItemDetailsVM, SeriesItemCardMaterial) == 240, "Offset mismatch for UEmoteWheelItemDetailsVM::SeriesItemCardMaterial");
static_assert(offsetof(UEmoteWheelItemDetailsVM, SeriesBackgroundMaterial) == 272, "Offset mismatch for UEmoteWheelItemDetailsVM::SeriesBackgroundMaterial");
static_assert(offsetof(UEmoteWheelItemDetailsVM, SeriesBackgroundTexture) == 304, "Offset mismatch for UEmoteWheelItemDetailsVM::SeriesBackgroundTexture");
static_assert(offsetof(UEmoteWheelItemDetailsVM, SeriesIconTexture) == 336, "Offset mismatch for UEmoteWheelItemDetailsVM::SeriesIconTexture");
static_assert(offsetof(UEmoteWheelItemDetailsVM, InactivePreviewImage) == 368, "Offset mismatch for UEmoteWheelItemDetailsVM::InactivePreviewImage");
static_assert(offsetof(UEmoteWheelItemDetailsVM, WidePreviewImage) == 400, "Offset mismatch for UEmoteWheelItemDetailsVM::WidePreviewImage");
static_assert(offsetof(UEmoteWheelItemDetailsVM, SmallPreviewImage) == 432, "Offset mismatch for UEmoteWheelItemDetailsVM::SmallPreviewImage");
static_assert(offsetof(UEmoteWheelItemDetailsVM, LargePreviewImage) == 464, "Offset mismatch for UEmoteWheelItemDetailsVM::LargePreviewImage");
static_assert(offsetof(UEmoteWheelItemDetailsVM, UnlockRequirements) == 496, "Offset mismatch for UEmoteWheelItemDetailsVM::UnlockRequirements");
static_assert(offsetof(UEmoteWheelItemDetailsVM, DirectAquisitionStyleDisclaimerOverride) == 512, "Offset mismatch for UEmoteWheelItemDetailsVM::DirectAquisitionStyleDisclaimerOverride");
static_assert(offsetof(UEmoteWheelItemDetailsVM, bIsSeriesItem) == 528, "Offset mismatch for UEmoteWheelItemDetailsVM::bIsSeriesItem");
static_assert(offsetof(UEmoteWheelItemDetailsVM, bIsCrossStyle) == 529, "Offset mismatch for UEmoteWheelItemDetailsVM::bIsCrossStyle");
static_assert(offsetof(UEmoteWheelItemDetailsVM, bMoreDetailedFigureIncoming) == 530, "Offset mismatch for UEmoteWheelItemDetailsVM::bMoreDetailedFigureIncoming");
static_assert(offsetof(UEmoteWheelItemDetailsVM, bHasAccessRestriction) == 531, "Offset mismatch for UEmoteWheelItemDetailsVM::bHasAccessRestriction");
static_assert(offsetof(UEmoteWheelItemDetailsVM, AccessRestrictionType) == 532, "Offset mismatch for UEmoteWheelItemDetailsVM::AccessRestrictionType");
static_assert(offsetof(UEmoteWheelItemDetailsVM, bIsAgeGated) == 533, "Offset mismatch for UEmoteWheelItemDetailsVM::bIsAgeGated");
static_assert(offsetof(UEmoteWheelItemDetailsVM, bShouldShowRarity) == 535, "Offset mismatch for UEmoteWheelItemDetailsVM::bShouldShowRarity");
static_assert(offsetof(UEmoteWheelItemDetailsVM, bIsCompatibleWithActiveProduct) == 536, "Offset mismatch for UEmoteWheelItemDetailsVM::bIsCompatibleWithActiveProduct");
static_assert(offsetof(UEmoteWheelItemDetailsVM, bIsLoadingImages) == 537, "Offset mismatch for UEmoteWheelItemDetailsVM::bIsLoadingImages");

// /Script/EmoteWheelRuntime.EmoteWheelItemSelectionVM
// Kind: Class; super: FortPerUserViewModel
class UEmoteWheelItemSelectionVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* SelectedItem; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SelectedCategory; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsCollectionShown; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0089
    std::int32_t SelectedSlotIndex; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t InitialLinearIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UEmoteWheelItemSelectionVM, SelectedItem) == 120, "Offset mismatch for UEmoteWheelItemSelectionVM::SelectedItem");
static_assert(offsetof(UEmoteWheelItemSelectionVM, SelectedCategory) == 128, "Offset mismatch for UEmoteWheelItemSelectionVM::SelectedCategory");
static_assert(offsetof(UEmoteWheelItemSelectionVM, bIsCollectionShown) == 136, "Offset mismatch for UEmoteWheelItemSelectionVM::bIsCollectionShown");
static_assert(offsetof(UEmoteWheelItemSelectionVM, SelectedSlotIndex) == 140, "Offset mismatch for UEmoteWheelItemSelectionVM::SelectedSlotIndex");
static_assert(offsetof(UEmoteWheelItemSelectionVM, InitialLinearIndex) == 144, "Offset mismatch for UEmoteWheelItemSelectionVM::InitialLinearIndex");

// /Script/EmoteWheelRuntime.EmoteWheelItemVM
// Kind: Class; super: MVVMViewModelBase
class UEmoteWheelItemVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t SlotIndex; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    std::uint8_t DisplayName[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    void* CategoryConfig; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEmoteWheelItemVM, SlotIndex) == 104, "Offset mismatch for UEmoteWheelItemVM::SlotIndex");
static_assert(offsetof(UEmoteWheelItemVM, DisplayName) == 112, "Offset mismatch for UEmoteWheelItemVM::DisplayName");
static_assert(offsetof(UEmoteWheelItemVM, Icon) == 128, "Offset mismatch for UEmoteWheelItemVM::Icon");
static_assert(offsetof(UEmoteWheelItemVM, CategoryConfig) == 160, "Offset mismatch for UEmoteWheelItemVM::CategoryConfig");

// /Script/EmoteWheelRuntime.EmoteWheelLockerCategoryConfig
// Kind: Class; super: EmoteWheelCategoryConfig
class UEmoteWheelLockerCategoryConfig
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TSoftObjectPtr<void> LockerCategoryConfig; // 0x00A8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UEmoteWheelLockerCategoryConfig, LockerCategoryConfig) == 168, "Offset mismatch for UEmoteWheelLockerCategoryConfig::LockerCategoryConfig");

// /Script/EmoteWheelRuntime.EmoteWheelLockerCategoryVM
// Kind: Class; super: EmoteWheelCategoryVM
class UEmoteWheelLockerCategoryVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* LockerCategoryVM; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEmoteWheelLockerCategoryVM, LockerCategoryVM) == 176, "Offset mismatch for UEmoteWheelLockerCategoryVM::LockerCategoryVM");

// /Script/EmoteWheelRuntime.EmoteWheelLockerItemVM
// Kind: Class; super: EmoteWheelItemVM
class UEmoteWheelLockerItemVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* LockerItemVM; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEmoteWheelLockerItemVM, LockerItemVM) == 176, "Offset mismatch for UEmoteWheelLockerItemVM::LockerItemVM");

// /Script/EmoteWheelRuntime.EmoteWheelPickerScreen
// Kind: Class; super: CommonActivatableWidget
class UEmoteWheelPickerScreen
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    std::uint8_t GameplayTags[0x1]; // 0x04B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEmoteWheelPickerScreen, GameplayTags) == 1200, "Offset mismatch for UEmoteWheelPickerScreen::GameplayTags");

// /Script/EmoteWheelRuntime.EmoteWheelSubTabConfig
// Kind: Class; super: DataAsset
class UEmoteWheelSubTabConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Name[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t bUsePaging; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t MaxItemsPerPage; // 0x003C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UEmoteWheelSubTabConfig, Name) == 40, "Offset mismatch for UEmoteWheelSubTabConfig::Name");
static_assert(offsetof(UEmoteWheelSubTabConfig, bUsePaging) == 56, "Offset mismatch for UEmoteWheelSubTabConfig::bUsePaging");
static_assert(offsetof(UEmoteWheelSubTabConfig, MaxItemsPerPage) == 60, "Offset mismatch for UEmoteWheelSubTabConfig::MaxItemsPerPage");

// /Script/EmoteWheelRuntime.EmoteWheelSubTabVM
// Kind: Class; super: MVVMViewModelBase
class UEmoteWheelSubTabVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> AllItems; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VisibleItems; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    void* Config; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEmoteWheelSubTabVM, AllItems) == 120, "Offset mismatch for UEmoteWheelSubTabVM::AllItems");
static_assert(offsetof(UEmoteWheelSubTabVM, VisibleItems) == 136, "Offset mismatch for UEmoteWheelSubTabVM::VisibleItems");
static_assert(offsetof(UEmoteWheelSubTabVM, Config) == 152, "Offset mismatch for UEmoteWheelSubTabVM::Config");

// /Script/EmoteWheelRuntime.EmoteWheelVM
// Kind: Class; super: FortPerUserViewModel
class UEmoteWheelVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Categories; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputBindings; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEmoteWheelVM, Categories) == 120, "Offset mismatch for UEmoteWheelVM::Categories");
static_assert(offsetof(UEmoteWheelVM, InputBindings) == 136, "Offset mismatch for UEmoteWheelVM::InputBindings");

// /Script/EmoteWheelRuntime.FollowersEmoteWheelCategoryConfig
// Kind: Class; super: EmoteWheelCategoryConfig
class UFollowersEmoteWheelCategoryConfig
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ConvertedType; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    TArray<void*> Entries; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultMultiFollowersName[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> DefaultMultiFollowersIcon; // 0x00D0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFollowersEmoteWheelCategoryConfig, ConvertedType) == 168, "Offset mismatch for UFollowersEmoteWheelCategoryConfig::ConvertedType");
static_assert(offsetof(UFollowersEmoteWheelCategoryConfig, Entries) == 176, "Offset mismatch for UFollowersEmoteWheelCategoryConfig::Entries");
static_assert(offsetof(UFollowersEmoteWheelCategoryConfig, DefaultMultiFollowersName) == 192, "Offset mismatch for UFollowersEmoteWheelCategoryConfig::DefaultMultiFollowersName");
static_assert(offsetof(UFollowersEmoteWheelCategoryConfig, DefaultMultiFollowersIcon) == 208, "Offset mismatch for UFollowersEmoteWheelCategoryConfig::DefaultMultiFollowersIcon");

// /Script/EmoteWheelRuntime.FollowersEmoteWheelCategoryVM
// Kind: Class; super: EmoteWheelCategoryVM
class UFollowersEmoteWheelCategoryVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t AllyName[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t AllyIcon[0x20]; // 0x00C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsDismissCommandAvailable; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFollowersEmoteWheelCategoryVM, AllyName) == 176, "Offset mismatch for UFollowersEmoteWheelCategoryVM::AllyName");
static_assert(offsetof(UFollowersEmoteWheelCategoryVM, AllyIcon) == 192, "Offset mismatch for UFollowersEmoteWheelCategoryVM::AllyIcon");
static_assert(offsetof(UFollowersEmoteWheelCategoryVM, bIsDismissCommandAvailable) == 224, "Offset mismatch for UFollowersEmoteWheelCategoryVM::bIsDismissCommandAvailable");

// /Script/EmoteWheelRuntime.FollowersEmoteWheelItemVM
// Kind: Class; super: EmoteWheelItemVM
class UFollowersEmoteWheelItemVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Entry[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFollowersEmoteWheelItemVM, Entry) == 176, "Offset mismatch for UFollowersEmoteWheelItemVM::Entry");

// /Script/EmoteWheelRuntime.FortControllerComponent_EmoteWheelEnhancedInputs
// Kind: Class; super: FortControllerComponent_EnhancedInputsBase
class UFortControllerComponent_EmoteWheelEnhancedInputs
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t EmoteWheelInputData[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_EmoteWheelEnhancedInputs, EmoteWheelInputData) == 200, "Offset mismatch for UFortControllerComponent_EmoteWheelEnhancedInputs::EmoteWheelInputData");

// /Script/EmoteWheelRuntime.FortUIGameFeatureAction_EmoteWheelConfigModifier
// Kind: Class; super: FortUIGameFeatureAction
class UFortUIGameFeatureAction_EmoteWheelConfigModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CategoryConfigs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortUIGameFeatureAction_EmoteWheelConfigModifier, CategoryConfigs) == 40, "Offset mismatch for UFortUIGameFeatureAction_EmoteWheelConfigModifier::CategoryConfigs");

// /Script/EmoteWheelRuntime.GizmosWheelCategoryConfig
// Kind: Class; super: EmoteWheelCategoryConfig
class UGizmosWheelCategoryConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ProductTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t Tag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Overlay[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomCollectionList[0x20]; // 0x0060 (Size: 0x20, Type: SoftClassProperty)
    void* SortFilterConfigProvider; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    float TextureScaleFactor; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumberOfItemsPerRowMobile; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfItemsPerRow; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t Priority; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCanOpenCollection; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableTextureReleasing; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInteractionWithItemNames; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSubTabs; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStandalone; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x009D
    std::uint8_t GameplayTagToBlockThisCategory[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmosWheelCategoryConfig, ProductTag) == 40, "Offset mismatch for UGizmosWheelCategoryConfig::ProductTag");
static_assert(offsetof(UGizmosWheelCategoryConfig, Tag) == 44, "Offset mismatch for UGizmosWheelCategoryConfig::Tag");
static_assert(offsetof(UGizmosWheelCategoryConfig, DisplayName) == 48, "Offset mismatch for UGizmosWheelCategoryConfig::DisplayName");
static_assert(offsetof(UGizmosWheelCategoryConfig, Overlay) == 64, "Offset mismatch for UGizmosWheelCategoryConfig::Overlay");
static_assert(offsetof(UGizmosWheelCategoryConfig, CustomCollectionList) == 96, "Offset mismatch for UGizmosWheelCategoryConfig::CustomCollectionList");
static_assert(offsetof(UGizmosWheelCategoryConfig, SortFilterConfigProvider) == 128, "Offset mismatch for UGizmosWheelCategoryConfig::SortFilterConfigProvider");
static_assert(offsetof(UGizmosWheelCategoryConfig, TextureScaleFactor) == 136, "Offset mismatch for UGizmosWheelCategoryConfig::TextureScaleFactor");
static_assert(offsetof(UGizmosWheelCategoryConfig, NumberOfItemsPerRowMobile) == 140, "Offset mismatch for UGizmosWheelCategoryConfig::NumberOfItemsPerRowMobile");
static_assert(offsetof(UGizmosWheelCategoryConfig, NumberOfItemsPerRow) == 144, "Offset mismatch for UGizmosWheelCategoryConfig::NumberOfItemsPerRow");
static_assert(offsetof(UGizmosWheelCategoryConfig, Priority) == 148, "Offset mismatch for UGizmosWheelCategoryConfig::Priority");
static_assert(offsetof(UGizmosWheelCategoryConfig, bCanOpenCollection) == 152, "Offset mismatch for UGizmosWheelCategoryConfig::bCanOpenCollection");
static_assert(offsetof(UGizmosWheelCategoryConfig, bEnableTextureReleasing) == 153, "Offset mismatch for UGizmosWheelCategoryConfig::bEnableTextureReleasing");
static_assert(offsetof(UGizmosWheelCategoryConfig, bAllowInteractionWithItemNames) == 154, "Offset mismatch for UGizmosWheelCategoryConfig::bAllowInteractionWithItemNames");
static_assert(offsetof(UGizmosWheelCategoryConfig, bEnableSubTabs) == 155, "Offset mismatch for UGizmosWheelCategoryConfig::bEnableSubTabs");
static_assert(offsetof(UGizmosWheelCategoryConfig, bIsStandalone) == 156, "Offset mismatch for UGizmosWheelCategoryConfig::bIsStandalone");
static_assert(offsetof(UGizmosWheelCategoryConfig, GameplayTagToBlockThisCategory) == 160, "Offset mismatch for UGizmosWheelCategoryConfig::GameplayTagToBlockThisCategory");

// /Script/EmoteWheelRuntime.GizmosWheelCategoryVM
// Kind: Class; super: EmoteWheelCategoryVM
class UGizmosWheelCategoryVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Config; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EquippedItems; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SubTabs; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* ActiveSubTab; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGizmosWheelCategoryVM, Config) == 120, "Offset mismatch for UGizmosWheelCategoryVM::Config");
static_assert(offsetof(UGizmosWheelCategoryVM, EquippedItems) == 128, "Offset mismatch for UGizmosWheelCategoryVM::EquippedItems");
static_assert(offsetof(UGizmosWheelCategoryVM, SubTabs) == 144, "Offset mismatch for UGizmosWheelCategoryVM::SubTabs");
static_assert(offsetof(UGizmosWheelCategoryVM, ActiveSubTab) == 160, "Offset mismatch for UGizmosWheelCategoryVM::ActiveSubTab");

// /Script/EmoteWheelRuntime.GizmosWheelGlobalSettings
// Kind: Class; super: Object
class UGizmosWheelGlobalSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t MinSlotCount; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSlotCount; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t ExactSlotCount; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseMockData; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSeasonEndTimeIfItemCalendarEventNull; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0036
    TArray<void*> MockItemPaths; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGizmosWheelGlobalSettings, MinSlotCount) == 40, "Offset mismatch for UGizmosWheelGlobalSettings::MinSlotCount");
static_assert(offsetof(UGizmosWheelGlobalSettings, MaxSlotCount) == 44, "Offset mismatch for UGizmosWheelGlobalSettings::MaxSlotCount");
static_assert(offsetof(UGizmosWheelGlobalSettings, ExactSlotCount) == 48, "Offset mismatch for UGizmosWheelGlobalSettings::ExactSlotCount");
static_assert(offsetof(UGizmosWheelGlobalSettings, bUseMockData) == 52, "Offset mismatch for UGizmosWheelGlobalSettings::bUseMockData");
static_assert(offsetof(UGizmosWheelGlobalSettings, bUseSeasonEndTimeIfItemCalendarEventNull) == 53, "Offset mismatch for UGizmosWheelGlobalSettings::bUseSeasonEndTimeIfItemCalendarEventNull");
static_assert(offsetof(UGizmosWheelGlobalSettings, MockItemPaths) == 56, "Offset mismatch for UGizmosWheelGlobalSettings::MockItemPaths");

// /Script/EmoteWheelRuntime.GizmosWheelItemVM
// Kind: Class; super: EmoteWheelItemVM
class UGizmosWheelItemVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* ItemDefinition; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* ItemCooldownVM; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> InventoryItemInstance; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UGizmosWheelItemVM, ItemDefinition) == 176, "Offset mismatch for UGizmosWheelItemVM::ItemDefinition");
static_assert(offsetof(UGizmosWheelItemVM, ItemCooldownVM) == 184, "Offset mismatch for UGizmosWheelItemVM::ItemCooldownVM");
static_assert(offsetof(UGizmosWheelItemVM, InventoryItemInstance) == 192, "Offset mismatch for UGizmosWheelItemVM::InventoryItemInstance");

// /Script/EmoteWheelRuntime.GizmosWheelVM
// Kind: Class; super: EmoteWheelVM
class UGizmosWheelVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Categories; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputBindings; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGizmosWheelVM, Categories) == 120, "Offset mismatch for UGizmosWheelVM::Categories");
static_assert(offsetof(UGizmosWheelVM, InputBindings) == 136, "Offset mismatch for UGizmosWheelVM::InputBindings");

// /Script/EmoteWheelRuntime.RuntimeEmoteWheelConfig
// Kind: Class; super: FortLocalPlayerSubsystem
class URuntimeEmoteWheelConfig
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Categories[0x10]; // 0x0030 (Size: 0x10, Type: SetProperty)
    void* ExclusiveCategory; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TSet<void*> ExternalCategories; // 0x0048 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(URuntimeEmoteWheelConfig, Categories) == 48, "Offset mismatch for URuntimeEmoteWheelConfig::Categories");
static_assert(offsetof(URuntimeEmoteWheelConfig, ExclusiveCategory) == 64, "Offset mismatch for URuntimeEmoteWheelConfig::ExclusiveCategory");
static_assert(offsetof(URuntimeEmoteWheelConfig, ExternalCategories) == 72, "Offset mismatch for URuntimeEmoteWheelConfig::ExternalCategories");

// /Script/EmoteWheelRuntime.SquadCommsEmoteWheelCategoryConfig
// Kind: Class; super: EmoteWheelCategoryConfig
class USquadCommsEmoteWheelCategoryConfig
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> Entries; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USquadCommsEmoteWheelCategoryConfig, Entries) == 168, "Offset mismatch for USquadCommsEmoteWheelCategoryConfig::Entries");

// /Script/EmoteWheelRuntime.SquadCommsEmoteWheelCategoryVM
// Kind: Class; super: EmoteWheelCategoryVM
class USquadCommsEmoteWheelCategoryVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Config; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EquippedItems; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SubTabs; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* ActiveSubTab; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USquadCommsEmoteWheelCategoryVM, Config) == 120, "Offset mismatch for USquadCommsEmoteWheelCategoryVM::Config");
static_assert(offsetof(USquadCommsEmoteWheelCategoryVM, EquippedItems) == 128, "Offset mismatch for USquadCommsEmoteWheelCategoryVM::EquippedItems");
static_assert(offsetof(USquadCommsEmoteWheelCategoryVM, SubTabs) == 144, "Offset mismatch for USquadCommsEmoteWheelCategoryVM::SubTabs");
static_assert(offsetof(USquadCommsEmoteWheelCategoryVM, ActiveSubTab) == 160, "Offset mismatch for USquadCommsEmoteWheelCategoryVM::ActiveSubTab");

// /Script/EmoteWheelRuntime.SquadCommsEmoteWheelItemVM
// Kind: Class; super: EmoteWheelItemVM
class USquadCommsEmoteWheelItemVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Entry[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USquadCommsEmoteWheelItemVM, Entry) == 176, "Offset mismatch for USquadCommsEmoteWheelItemVM::Entry");
