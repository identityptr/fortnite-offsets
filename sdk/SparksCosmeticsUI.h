/**
 * decamp dumper generated SDK
 * Package: /Script/SparksCosmeticsUI
 */
#pragma once
#include "Basic.h"

// /Script/SparksCosmeticsUI.SparksCosmeticsDebugPickerWidget
// Kind: Class; super: UserWidget
class USparksCosmeticsDebugPickerWidget
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksCosmeticsDebugPickerWidget, ColorAndOpacity) == 416, "Offset mismatch for USparksCosmeticsDebugPickerWidget::ColorAndOpacity");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, ColorAndOpacityDelegate) == 432, "Offset mismatch for USparksCosmeticsDebugPickerWidget::ColorAndOpacityDelegate");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, ForegroundColor) == 444, "Offset mismatch for USparksCosmeticsDebugPickerWidget::ForegroundColor");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, ForegroundColorDelegate) == 464, "Offset mismatch for USparksCosmeticsDebugPickerWidget::ForegroundColorDelegate");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, OnVisibilityChanged) == 480, "Offset mismatch for USparksCosmeticsDebugPickerWidget::OnVisibilityChanged");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, Padding) == 544, "Offset mismatch for USparksCosmeticsDebugPickerWidget::Padding");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, Priority) == 560, "Offset mismatch for USparksCosmeticsDebugPickerWidget::Priority");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for USparksCosmeticsDebugPickerWidget::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for USparksCosmeticsDebugPickerWidget::QueuedWidgetAnimationTransitions");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, ActiveSequencePlayers) == 584, "Offset mismatch for USparksCosmeticsDebugPickerWidget::ActiveSequencePlayers");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, AnimationTickManager) == 600, "Offset mismatch for USparksCosmeticsDebugPickerWidget::AnimationTickManager");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, StoppedSequencePlayers) == 608, "Offset mismatch for USparksCosmeticsDebugPickerWidget::StoppedSequencePlayers");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, NamedSlotBindings) == 648, "Offset mismatch for USparksCosmeticsDebugPickerWidget::NamedSlotBindings");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, Extensions) == 664, "Offset mismatch for USparksCosmeticsDebugPickerWidget::Extensions");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, WidgetTree) == 680, "Offset mismatch for USparksCosmeticsDebugPickerWidget::WidgetTree");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, bHasScriptImplementedPaint) == 688, "Offset mismatch for USparksCosmeticsDebugPickerWidget::bHasScriptImplementedPaint");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, TickFrequency) == 712, "Offset mismatch for USparksCosmeticsDebugPickerWidget::TickFrequency");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, DesiredFocusWidget) == 716, "Offset mismatch for USparksCosmeticsDebugPickerWidget::DesiredFocusWidget");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, InputComponent) == 728, "Offset mismatch for USparksCosmeticsDebugPickerWidget::InputComponent");
static_assert(offsetof(USparksCosmeticsDebugPickerWidget, AnimationCallbacks) == 736, "Offset mismatch for USparksCosmeticsDebugPickerWidget::AnimationCallbacks");

// /Script/SparksCosmeticsUI.SparksItemLockerCategoryConfig
// Kind: Class; super: AthenaLockerCategoryConfig
class USparksItemLockerCategoryConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> CustomWidgetClasses; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CustomActivatableWidgetClasses; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CustomDialogVMClasses; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t PrimaryProductTag[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    void* CompatibilityConfig; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CustomCategoryItem[0x20]; // 0x0068 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomItem[0x20]; // 0x0088 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomCategoryEditor[0x20]; // 0x00A8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomItemDetails[0x20]; // 0x00C8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomInspectScreenBanner[0x20]; // 0x00E8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ItemShopTileImageRuleset; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    TMap<void*, void*> ItemShopTileImageRulesetForProduct; // 0x0110 (Size: 0x10, Type: MapProperty)
    std::uint8_t LoadingIcon2dPreview[0x20]; // 0x0120 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SlotInfo[0xA0]; // 0x0140 (Size: 0xA0, Type: StructProperty)
    TArray<void*> AdditionalSlotInfo; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CategoryNameOverride[0x10]; // 0x01F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ItemUsageDescription[0x10]; // 0x0200 (Size: 0x10, Type: TextProperty)
    TArray<void*> LoadoutSlots; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultSortType; // 0x0220 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDefaultShowFavoritesOnly; // 0x0221 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0222
    TArray<void*> SortConfigs; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FilterConfigs; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    void* SortFilterProvider; // 0x0248 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GameplayTagFilterOutQuery[0x48]; // 0x0250 (Size: 0x48, Type: StructProperty)
    std::int32_t RandomizationPriority; // 0x0298 (Size: 0x4, Type: IntProperty)
    float PassIconPresentationScale; // 0x029C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowEmptySelection; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowDuplicatesDuringRandomization; // 0x02A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowFallbackToDefaultProduct; // 0x02A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConditionallyFilterVariantToken; // 0x02A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReportContentGatedEquippedItems; // 0x02A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValidateCompatibility; // 0x02A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowCompatibility; // 0x02A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowIfEmpty; // 0x02A7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowStyleText; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanApplyToAll; // 0x02A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayAsModal; // 0x02AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAreVariantsSupported; // 0x02AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSmallCategoryIcon; // 0x02AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSecondaryEquipShowNumbers; // 0x02AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowCompatibleItemVmExpansion; // 0x02AE (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksItemLockerCategoryConfig, CustomWidgetClasses) == 40, "Offset mismatch for USparksItemLockerCategoryConfig::CustomWidgetClasses");
static_assert(offsetof(USparksItemLockerCategoryConfig, CustomActivatableWidgetClasses) == 56, "Offset mismatch for USparksItemLockerCategoryConfig::CustomActivatableWidgetClasses");
static_assert(offsetof(USparksItemLockerCategoryConfig, CustomDialogVMClasses) == 72, "Offset mismatch for USparksItemLockerCategoryConfig::CustomDialogVMClasses");
static_assert(offsetof(USparksItemLockerCategoryConfig, PrimaryProductTag) == 88, "Offset mismatch for USparksItemLockerCategoryConfig::PrimaryProductTag");
static_assert(offsetof(USparksItemLockerCategoryConfig, CompatibilityConfig) == 96, "Offset mismatch for USparksItemLockerCategoryConfig::CompatibilityConfig");
static_assert(offsetof(USparksItemLockerCategoryConfig, CustomCategoryItem) == 104, "Offset mismatch for USparksItemLockerCategoryConfig::CustomCategoryItem");
static_assert(offsetof(USparksItemLockerCategoryConfig, CustomItem) == 136, "Offset mismatch for USparksItemLockerCategoryConfig::CustomItem");
static_assert(offsetof(USparksItemLockerCategoryConfig, CustomCategoryEditor) == 168, "Offset mismatch for USparksItemLockerCategoryConfig::CustomCategoryEditor");
static_assert(offsetof(USparksItemLockerCategoryConfig, CustomItemDetails) == 200, "Offset mismatch for USparksItemLockerCategoryConfig::CustomItemDetails");
static_assert(offsetof(USparksItemLockerCategoryConfig, CustomInspectScreenBanner) == 232, "Offset mismatch for USparksItemLockerCategoryConfig::CustomInspectScreenBanner");
static_assert(offsetof(USparksItemLockerCategoryConfig, ItemShopTileImageRuleset) == 264, "Offset mismatch for USparksItemLockerCategoryConfig::ItemShopTileImageRuleset");
static_assert(offsetof(USparksItemLockerCategoryConfig, ItemShopTileImageRulesetForProduct) == 272, "Offset mismatch for USparksItemLockerCategoryConfig::ItemShopTileImageRulesetForProduct");
static_assert(offsetof(USparksItemLockerCategoryConfig, LoadingIcon2dPreview) == 288, "Offset mismatch for USparksItemLockerCategoryConfig::LoadingIcon2dPreview");
static_assert(offsetof(USparksItemLockerCategoryConfig, SlotInfo) == 320, "Offset mismatch for USparksItemLockerCategoryConfig::SlotInfo");
static_assert(offsetof(USparksItemLockerCategoryConfig, AdditionalSlotInfo) == 480, "Offset mismatch for USparksItemLockerCategoryConfig::AdditionalSlotInfo");
static_assert(offsetof(USparksItemLockerCategoryConfig, CategoryNameOverride) == 496, "Offset mismatch for USparksItemLockerCategoryConfig::CategoryNameOverride");
static_assert(offsetof(USparksItemLockerCategoryConfig, ItemUsageDescription) == 512, "Offset mismatch for USparksItemLockerCategoryConfig::ItemUsageDescription");
static_assert(offsetof(USparksItemLockerCategoryConfig, LoadoutSlots) == 528, "Offset mismatch for USparksItemLockerCategoryConfig::LoadoutSlots");
static_assert(offsetof(USparksItemLockerCategoryConfig, DefaultSortType) == 544, "Offset mismatch for USparksItemLockerCategoryConfig::DefaultSortType");
static_assert(offsetof(USparksItemLockerCategoryConfig, bDefaultShowFavoritesOnly) == 545, "Offset mismatch for USparksItemLockerCategoryConfig::bDefaultShowFavoritesOnly");
static_assert(offsetof(USparksItemLockerCategoryConfig, SortConfigs) == 552, "Offset mismatch for USparksItemLockerCategoryConfig::SortConfigs");
static_assert(offsetof(USparksItemLockerCategoryConfig, FilterConfigs) == 568, "Offset mismatch for USparksItemLockerCategoryConfig::FilterConfigs");
static_assert(offsetof(USparksItemLockerCategoryConfig, SortFilterProvider) == 584, "Offset mismatch for USparksItemLockerCategoryConfig::SortFilterProvider");
static_assert(offsetof(USparksItemLockerCategoryConfig, GameplayTagFilterOutQuery) == 592, "Offset mismatch for USparksItemLockerCategoryConfig::GameplayTagFilterOutQuery");
static_assert(offsetof(USparksItemLockerCategoryConfig, RandomizationPriority) == 664, "Offset mismatch for USparksItemLockerCategoryConfig::RandomizationPriority");
static_assert(offsetof(USparksItemLockerCategoryConfig, PassIconPresentationScale) == 668, "Offset mismatch for USparksItemLockerCategoryConfig::PassIconPresentationScale");
static_assert(offsetof(USparksItemLockerCategoryConfig, bAllowEmptySelection) == 672, "Offset mismatch for USparksItemLockerCategoryConfig::bAllowEmptySelection");
static_assert(offsetof(USparksItemLockerCategoryConfig, bAllowDuplicatesDuringRandomization) == 673, "Offset mismatch for USparksItemLockerCategoryConfig::bAllowDuplicatesDuringRandomization");
static_assert(offsetof(USparksItemLockerCategoryConfig, bAllowFallbackToDefaultProduct) == 674, "Offset mismatch for USparksItemLockerCategoryConfig::bAllowFallbackToDefaultProduct");
static_assert(offsetof(USparksItemLockerCategoryConfig, bConditionallyFilterVariantToken) == 675, "Offset mismatch for USparksItemLockerCategoryConfig::bConditionallyFilterVariantToken");
static_assert(offsetof(USparksItemLockerCategoryConfig, bReportContentGatedEquippedItems) == 676, "Offset mismatch for USparksItemLockerCategoryConfig::bReportContentGatedEquippedItems");
static_assert(offsetof(USparksItemLockerCategoryConfig, bValidateCompatibility) == 677, "Offset mismatch for USparksItemLockerCategoryConfig::bValidateCompatibility");
static_assert(offsetof(USparksItemLockerCategoryConfig, bShowCompatibility) == 678, "Offset mismatch for USparksItemLockerCategoryConfig::bShowCompatibility");
static_assert(offsetof(USparksItemLockerCategoryConfig, bShowIfEmpty) == 679, "Offset mismatch for USparksItemLockerCategoryConfig::bShowIfEmpty");
static_assert(offsetof(USparksItemLockerCategoryConfig, bShowStyleText) == 680, "Offset mismatch for USparksItemLockerCategoryConfig::bShowStyleText");
static_assert(offsetof(USparksItemLockerCategoryConfig, bCanApplyToAll) == 681, "Offset mismatch for USparksItemLockerCategoryConfig::bCanApplyToAll");
static_assert(offsetof(USparksItemLockerCategoryConfig, bDisplayAsModal) == 682, "Offset mismatch for USparksItemLockerCategoryConfig::bDisplayAsModal");
static_assert(offsetof(USparksItemLockerCategoryConfig, bAreVariantsSupported) == 683, "Offset mismatch for USparksItemLockerCategoryConfig::bAreVariantsSupported");
static_assert(offsetof(USparksItemLockerCategoryConfig, bShowSmallCategoryIcon) == 684, "Offset mismatch for USparksItemLockerCategoryConfig::bShowSmallCategoryIcon");
static_assert(offsetof(USparksItemLockerCategoryConfig, bSecondaryEquipShowNumbers) == 685, "Offset mismatch for USparksItemLockerCategoryConfig::bSecondaryEquipShowNumbers");
static_assert(offsetof(USparksItemLockerCategoryConfig, bAllowCompatibleItemVmExpansion) == 686, "Offset mismatch for USparksItemLockerCategoryConfig::bAllowCompatibleItemVmExpansion");

// /Script/SparksCosmeticsUI.SparksItemVM
// Kind: Class; super: AthenaItemVM
class USparksItemVM
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* VariantItemDefinition; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksItemVM, VariantItemDefinition) == 224, "Offset mismatch for USparksItemVM::VariantItemDefinition");
