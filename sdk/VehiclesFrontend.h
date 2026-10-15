/**
 * decamp dumper generated SDK
 * Package: /Script/VehiclesFrontend
 */
#pragma once
#include "Basic.h"

// /Script/VehiclesFrontend.DelMarItemDetailsVM
// Kind: Class; super: AthenaItemDetailsVM
class UDelMarItemDetailsVM
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

static_assert(offsetof(UDelMarItemDetailsVM, Item) == 104, "Offset mismatch for UDelMarItemDetailsVM::Item");
static_assert(offsetof(UDelMarItemDetailsVM, AccessRestrictionDescription) == 112, "Offset mismatch for UDelMarItemDetailsVM::AccessRestrictionDescription");
static_assert(offsetof(UDelMarItemDetailsVM, RarityDisplayText) == 128, "Offset mismatch for UDelMarItemDetailsVM::RarityDisplayText");
static_assert(offsetof(UDelMarItemDetailsVM, SeriesShortDisplayName) == 144, "Offset mismatch for UDelMarItemDetailsVM::SeriesShortDisplayName");
static_assert(offsetof(UDelMarItemDetailsVM, RarityColorPalette) == 160, "Offset mismatch for UDelMarItemDetailsVM::RarityColorPalette");
static_assert(offsetof(UDelMarItemDetailsVM, SeriesItemCardMaterial) == 240, "Offset mismatch for UDelMarItemDetailsVM::SeriesItemCardMaterial");
static_assert(offsetof(UDelMarItemDetailsVM, SeriesBackgroundMaterial) == 272, "Offset mismatch for UDelMarItemDetailsVM::SeriesBackgroundMaterial");
static_assert(offsetof(UDelMarItemDetailsVM, SeriesBackgroundTexture) == 304, "Offset mismatch for UDelMarItemDetailsVM::SeriesBackgroundTexture");
static_assert(offsetof(UDelMarItemDetailsVM, SeriesIconTexture) == 336, "Offset mismatch for UDelMarItemDetailsVM::SeriesIconTexture");
static_assert(offsetof(UDelMarItemDetailsVM, InactivePreviewImage) == 368, "Offset mismatch for UDelMarItemDetailsVM::InactivePreviewImage");
static_assert(offsetof(UDelMarItemDetailsVM, WidePreviewImage) == 400, "Offset mismatch for UDelMarItemDetailsVM::WidePreviewImage");
static_assert(offsetof(UDelMarItemDetailsVM, SmallPreviewImage) == 432, "Offset mismatch for UDelMarItemDetailsVM::SmallPreviewImage");
static_assert(offsetof(UDelMarItemDetailsVM, LargePreviewImage) == 464, "Offset mismatch for UDelMarItemDetailsVM::LargePreviewImage");
static_assert(offsetof(UDelMarItemDetailsVM, UnlockRequirements) == 496, "Offset mismatch for UDelMarItemDetailsVM::UnlockRequirements");
static_assert(offsetof(UDelMarItemDetailsVM, DirectAquisitionStyleDisclaimerOverride) == 512, "Offset mismatch for UDelMarItemDetailsVM::DirectAquisitionStyleDisclaimerOverride");
static_assert(offsetof(UDelMarItemDetailsVM, bIsSeriesItem) == 528, "Offset mismatch for UDelMarItemDetailsVM::bIsSeriesItem");
static_assert(offsetof(UDelMarItemDetailsVM, bIsCrossStyle) == 529, "Offset mismatch for UDelMarItemDetailsVM::bIsCrossStyle");
static_assert(offsetof(UDelMarItemDetailsVM, bMoreDetailedFigureIncoming) == 530, "Offset mismatch for UDelMarItemDetailsVM::bMoreDetailedFigureIncoming");
static_assert(offsetof(UDelMarItemDetailsVM, bHasAccessRestriction) == 531, "Offset mismatch for UDelMarItemDetailsVM::bHasAccessRestriction");
static_assert(offsetof(UDelMarItemDetailsVM, AccessRestrictionType) == 532, "Offset mismatch for UDelMarItemDetailsVM::AccessRestrictionType");
static_assert(offsetof(UDelMarItemDetailsVM, bIsAgeGated) == 533, "Offset mismatch for UDelMarItemDetailsVM::bIsAgeGated");
static_assert(offsetof(UDelMarItemDetailsVM, bShouldShowRarity) == 535, "Offset mismatch for UDelMarItemDetailsVM::bShouldShowRarity");
static_assert(offsetof(UDelMarItemDetailsVM, bIsCompatibleWithActiveProduct) == 536, "Offset mismatch for UDelMarItemDetailsVM::bIsCompatibleWithActiveProduct");
static_assert(offsetof(UDelMarItemDetailsVM, bIsLoadingImages) == 537, "Offset mismatch for UDelMarItemDetailsVM::bIsLoadingImages");

// /Script/VehiclesFrontend.DelMarItemVM
// Kind: Class; super: AthenaItemVM
class UDelMarItemVM
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* VariantItemDefinition; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarItemVM, VariantItemDefinition) == 224, "Offset mismatch for UDelMarItemVM::VariantItemDefinition");

// /Script/VehiclesFrontend.DelMarLockerCategoryConfig
// Kind: Class; super: AthenaLockerCategoryConfig
class UDelMarLockerCategoryConfig
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

static_assert(offsetof(UDelMarLockerCategoryConfig, CustomWidgetClasses) == 40, "Offset mismatch for UDelMarLockerCategoryConfig::CustomWidgetClasses");
static_assert(offsetof(UDelMarLockerCategoryConfig, CustomActivatableWidgetClasses) == 56, "Offset mismatch for UDelMarLockerCategoryConfig::CustomActivatableWidgetClasses");
static_assert(offsetof(UDelMarLockerCategoryConfig, CustomDialogVMClasses) == 72, "Offset mismatch for UDelMarLockerCategoryConfig::CustomDialogVMClasses");
static_assert(offsetof(UDelMarLockerCategoryConfig, PrimaryProductTag) == 88, "Offset mismatch for UDelMarLockerCategoryConfig::PrimaryProductTag");
static_assert(offsetof(UDelMarLockerCategoryConfig, CompatibilityConfig) == 96, "Offset mismatch for UDelMarLockerCategoryConfig::CompatibilityConfig");
static_assert(offsetof(UDelMarLockerCategoryConfig, CustomCategoryItem) == 104, "Offset mismatch for UDelMarLockerCategoryConfig::CustomCategoryItem");
static_assert(offsetof(UDelMarLockerCategoryConfig, CustomItem) == 136, "Offset mismatch for UDelMarLockerCategoryConfig::CustomItem");
static_assert(offsetof(UDelMarLockerCategoryConfig, CustomCategoryEditor) == 168, "Offset mismatch for UDelMarLockerCategoryConfig::CustomCategoryEditor");
static_assert(offsetof(UDelMarLockerCategoryConfig, CustomItemDetails) == 200, "Offset mismatch for UDelMarLockerCategoryConfig::CustomItemDetails");
static_assert(offsetof(UDelMarLockerCategoryConfig, CustomInspectScreenBanner) == 232, "Offset mismatch for UDelMarLockerCategoryConfig::CustomInspectScreenBanner");
static_assert(offsetof(UDelMarLockerCategoryConfig, ItemShopTileImageRuleset) == 264, "Offset mismatch for UDelMarLockerCategoryConfig::ItemShopTileImageRuleset");
static_assert(offsetof(UDelMarLockerCategoryConfig, ItemShopTileImageRulesetForProduct) == 272, "Offset mismatch for UDelMarLockerCategoryConfig::ItemShopTileImageRulesetForProduct");
static_assert(offsetof(UDelMarLockerCategoryConfig, LoadingIcon2dPreview) == 288, "Offset mismatch for UDelMarLockerCategoryConfig::LoadingIcon2dPreview");
static_assert(offsetof(UDelMarLockerCategoryConfig, SlotInfo) == 320, "Offset mismatch for UDelMarLockerCategoryConfig::SlotInfo");
static_assert(offsetof(UDelMarLockerCategoryConfig, AdditionalSlotInfo) == 480, "Offset mismatch for UDelMarLockerCategoryConfig::AdditionalSlotInfo");
static_assert(offsetof(UDelMarLockerCategoryConfig, CategoryNameOverride) == 496, "Offset mismatch for UDelMarLockerCategoryConfig::CategoryNameOverride");
static_assert(offsetof(UDelMarLockerCategoryConfig, ItemUsageDescription) == 512, "Offset mismatch for UDelMarLockerCategoryConfig::ItemUsageDescription");
static_assert(offsetof(UDelMarLockerCategoryConfig, LoadoutSlots) == 528, "Offset mismatch for UDelMarLockerCategoryConfig::LoadoutSlots");
static_assert(offsetof(UDelMarLockerCategoryConfig, DefaultSortType) == 544, "Offset mismatch for UDelMarLockerCategoryConfig::DefaultSortType");
static_assert(offsetof(UDelMarLockerCategoryConfig, bDefaultShowFavoritesOnly) == 545, "Offset mismatch for UDelMarLockerCategoryConfig::bDefaultShowFavoritesOnly");
static_assert(offsetof(UDelMarLockerCategoryConfig, SortConfigs) == 552, "Offset mismatch for UDelMarLockerCategoryConfig::SortConfigs");
static_assert(offsetof(UDelMarLockerCategoryConfig, FilterConfigs) == 568, "Offset mismatch for UDelMarLockerCategoryConfig::FilterConfigs");
static_assert(offsetof(UDelMarLockerCategoryConfig, SortFilterProvider) == 584, "Offset mismatch for UDelMarLockerCategoryConfig::SortFilterProvider");
static_assert(offsetof(UDelMarLockerCategoryConfig, GameplayTagFilterOutQuery) == 592, "Offset mismatch for UDelMarLockerCategoryConfig::GameplayTagFilterOutQuery");
static_assert(offsetof(UDelMarLockerCategoryConfig, RandomizationPriority) == 664, "Offset mismatch for UDelMarLockerCategoryConfig::RandomizationPriority");
static_assert(offsetof(UDelMarLockerCategoryConfig, PassIconPresentationScale) == 668, "Offset mismatch for UDelMarLockerCategoryConfig::PassIconPresentationScale");
static_assert(offsetof(UDelMarLockerCategoryConfig, bAllowEmptySelection) == 672, "Offset mismatch for UDelMarLockerCategoryConfig::bAllowEmptySelection");
static_assert(offsetof(UDelMarLockerCategoryConfig, bAllowDuplicatesDuringRandomization) == 673, "Offset mismatch for UDelMarLockerCategoryConfig::bAllowDuplicatesDuringRandomization");
static_assert(offsetof(UDelMarLockerCategoryConfig, bAllowFallbackToDefaultProduct) == 674, "Offset mismatch for UDelMarLockerCategoryConfig::bAllowFallbackToDefaultProduct");
static_assert(offsetof(UDelMarLockerCategoryConfig, bConditionallyFilterVariantToken) == 675, "Offset mismatch for UDelMarLockerCategoryConfig::bConditionallyFilterVariantToken");
static_assert(offsetof(UDelMarLockerCategoryConfig, bReportContentGatedEquippedItems) == 676, "Offset mismatch for UDelMarLockerCategoryConfig::bReportContentGatedEquippedItems");
static_assert(offsetof(UDelMarLockerCategoryConfig, bValidateCompatibility) == 677, "Offset mismatch for UDelMarLockerCategoryConfig::bValidateCompatibility");
static_assert(offsetof(UDelMarLockerCategoryConfig, bShowCompatibility) == 678, "Offset mismatch for UDelMarLockerCategoryConfig::bShowCompatibility");
static_assert(offsetof(UDelMarLockerCategoryConfig, bShowIfEmpty) == 679, "Offset mismatch for UDelMarLockerCategoryConfig::bShowIfEmpty");
static_assert(offsetof(UDelMarLockerCategoryConfig, bShowStyleText) == 680, "Offset mismatch for UDelMarLockerCategoryConfig::bShowStyleText");
static_assert(offsetof(UDelMarLockerCategoryConfig, bCanApplyToAll) == 681, "Offset mismatch for UDelMarLockerCategoryConfig::bCanApplyToAll");
static_assert(offsetof(UDelMarLockerCategoryConfig, bDisplayAsModal) == 682, "Offset mismatch for UDelMarLockerCategoryConfig::bDisplayAsModal");
static_assert(offsetof(UDelMarLockerCategoryConfig, bAreVariantsSupported) == 683, "Offset mismatch for UDelMarLockerCategoryConfig::bAreVariantsSupported");
static_assert(offsetof(UDelMarLockerCategoryConfig, bShowSmallCategoryIcon) == 684, "Offset mismatch for UDelMarLockerCategoryConfig::bShowSmallCategoryIcon");
static_assert(offsetof(UDelMarLockerCategoryConfig, bSecondaryEquipShowNumbers) == 685, "Offset mismatch for UDelMarLockerCategoryConfig::bSecondaryEquipShowNumbers");
static_assert(offsetof(UDelMarLockerCategoryConfig, bAllowCompatibleItemVmExpansion) == 686, "Offset mismatch for UDelMarLockerCategoryConfig::bAllowCompatibleItemVmExpansion");

// /Script/VehiclesFrontend.DelMarLockerCategoryVM
// Kind: Class; super: AthenaLockerCategoryVM
class UDelMarLockerCategoryVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::int32_t Prority; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0094
    void* Config; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NewItemsInCategoryCount; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t GatedItemsInCategoryCount; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::int32_t ArchivedItemsInCategoryCount; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::int32_t NonArchivedItemsInCategoryCount; // 0x00AC (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> PendingFavoriteItems; // 0x00B0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PendingArchivedItems; // 0x00C0 (Size: 0x10, Type: MapProperty)
    std::uint8_t PendingSeenItems[0x10]; // 0x00D0 (Size: 0x10, Type: SetProperty)
    std::uint8_t AllItemsInCategory[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    void* SortFilterProvider; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EquippedItems; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x24]; // 0x0108
    TWeakObjectPtr<void> CosmeticUsageCache; // 0x012C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarLockerCategoryVM, Prority) == 144, "Offset mismatch for UDelMarLockerCategoryVM::Prority");
static_assert(offsetof(UDelMarLockerCategoryVM, Config) == 152, "Offset mismatch for UDelMarLockerCategoryVM::Config");
static_assert(offsetof(UDelMarLockerCategoryVM, NewItemsInCategoryCount) == 160, "Offset mismatch for UDelMarLockerCategoryVM::NewItemsInCategoryCount");
static_assert(offsetof(UDelMarLockerCategoryVM, GatedItemsInCategoryCount) == 164, "Offset mismatch for UDelMarLockerCategoryVM::GatedItemsInCategoryCount");
static_assert(offsetof(UDelMarLockerCategoryVM, ArchivedItemsInCategoryCount) == 168, "Offset mismatch for UDelMarLockerCategoryVM::ArchivedItemsInCategoryCount");
static_assert(offsetof(UDelMarLockerCategoryVM, NonArchivedItemsInCategoryCount) == 172, "Offset mismatch for UDelMarLockerCategoryVM::NonArchivedItemsInCategoryCount");
static_assert(offsetof(UDelMarLockerCategoryVM, PendingFavoriteItems) == 176, "Offset mismatch for UDelMarLockerCategoryVM::PendingFavoriteItems");
static_assert(offsetof(UDelMarLockerCategoryVM, PendingArchivedItems) == 192, "Offset mismatch for UDelMarLockerCategoryVM::PendingArchivedItems");
static_assert(offsetof(UDelMarLockerCategoryVM, PendingSeenItems) == 208, "Offset mismatch for UDelMarLockerCategoryVM::PendingSeenItems");
static_assert(offsetof(UDelMarLockerCategoryVM, AllItemsInCategory) == 224, "Offset mismatch for UDelMarLockerCategoryVM::AllItemsInCategory");
static_assert(offsetof(UDelMarLockerCategoryVM, SortFilterProvider) == 240, "Offset mismatch for UDelMarLockerCategoryVM::SortFilterProvider");
static_assert(offsetof(UDelMarLockerCategoryVM, EquippedItems) == 248, "Offset mismatch for UDelMarLockerCategoryVM::EquippedItems");
static_assert(offsetof(UDelMarLockerCategoryVM, CosmeticUsageCache) == 300, "Offset mismatch for UDelMarLockerCategoryVM::CosmeticUsageCache");
