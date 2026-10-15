/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticCompanionsUI
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticCompanionsUI.CompanionsItemDetailsVM
// Kind: Class; super: AthenaItemDetailsVM
class UCompanionsItemDetailsVM
{
public:
    std::uint8_t Pad_0000[0x228]; // 0x0000
    FString CompanionItemName; // 0x0228 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsCompanionItemNameValid; // 0x0238 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCompanionsItemDetailsVM, CompanionItemName) == 552, "Offset mismatch for UCompanionsItemDetailsVM::CompanionItemName");
static_assert(offsetof(UCompanionsItemDetailsVM, bIsCompanionItemNameValid) == 568, "Offset mismatch for UCompanionsItemDetailsVM::bIsCompanionItemNameValid");

// /Script/CosmeticCompanionsUI.CompanionsItemVM
// Kind: Class; super: AthenaItemVM
class UCompanionsItemVM
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* VariantItemDefinition; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCompanionsItemVM, VariantItemDefinition) == 224, "Offset mismatch for UCompanionsItemVM::VariantItemDefinition");

// /Script/CosmeticCompanionsUI.CompanionsLockerCategoryConfig
// Kind: Class; super: AthenaLockerCategoryConfig
class UCompanionsLockerCategoryConfig
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

static_assert(offsetof(UCompanionsLockerCategoryConfig, CustomWidgetClasses) == 40, "Offset mismatch for UCompanionsLockerCategoryConfig::CustomWidgetClasses");
static_assert(offsetof(UCompanionsLockerCategoryConfig, CustomActivatableWidgetClasses) == 56, "Offset mismatch for UCompanionsLockerCategoryConfig::CustomActivatableWidgetClasses");
static_assert(offsetof(UCompanionsLockerCategoryConfig, CustomDialogVMClasses) == 72, "Offset mismatch for UCompanionsLockerCategoryConfig::CustomDialogVMClasses");
static_assert(offsetof(UCompanionsLockerCategoryConfig, PrimaryProductTag) == 88, "Offset mismatch for UCompanionsLockerCategoryConfig::PrimaryProductTag");
static_assert(offsetof(UCompanionsLockerCategoryConfig, CompatibilityConfig) == 96, "Offset mismatch for UCompanionsLockerCategoryConfig::CompatibilityConfig");
static_assert(offsetof(UCompanionsLockerCategoryConfig, CustomCategoryItem) == 104, "Offset mismatch for UCompanionsLockerCategoryConfig::CustomCategoryItem");
static_assert(offsetof(UCompanionsLockerCategoryConfig, CustomItem) == 136, "Offset mismatch for UCompanionsLockerCategoryConfig::CustomItem");
static_assert(offsetof(UCompanionsLockerCategoryConfig, CustomCategoryEditor) == 168, "Offset mismatch for UCompanionsLockerCategoryConfig::CustomCategoryEditor");
static_assert(offsetof(UCompanionsLockerCategoryConfig, CustomItemDetails) == 200, "Offset mismatch for UCompanionsLockerCategoryConfig::CustomItemDetails");
static_assert(offsetof(UCompanionsLockerCategoryConfig, CustomInspectScreenBanner) == 232, "Offset mismatch for UCompanionsLockerCategoryConfig::CustomInspectScreenBanner");
static_assert(offsetof(UCompanionsLockerCategoryConfig, ItemShopTileImageRuleset) == 264, "Offset mismatch for UCompanionsLockerCategoryConfig::ItemShopTileImageRuleset");
static_assert(offsetof(UCompanionsLockerCategoryConfig, ItemShopTileImageRulesetForProduct) == 272, "Offset mismatch for UCompanionsLockerCategoryConfig::ItemShopTileImageRulesetForProduct");
static_assert(offsetof(UCompanionsLockerCategoryConfig, LoadingIcon2dPreview) == 288, "Offset mismatch for UCompanionsLockerCategoryConfig::LoadingIcon2dPreview");
static_assert(offsetof(UCompanionsLockerCategoryConfig, SlotInfo) == 320, "Offset mismatch for UCompanionsLockerCategoryConfig::SlotInfo");
static_assert(offsetof(UCompanionsLockerCategoryConfig, AdditionalSlotInfo) == 480, "Offset mismatch for UCompanionsLockerCategoryConfig::AdditionalSlotInfo");
static_assert(offsetof(UCompanionsLockerCategoryConfig, CategoryNameOverride) == 496, "Offset mismatch for UCompanionsLockerCategoryConfig::CategoryNameOverride");
static_assert(offsetof(UCompanionsLockerCategoryConfig, ItemUsageDescription) == 512, "Offset mismatch for UCompanionsLockerCategoryConfig::ItemUsageDescription");
static_assert(offsetof(UCompanionsLockerCategoryConfig, LoadoutSlots) == 528, "Offset mismatch for UCompanionsLockerCategoryConfig::LoadoutSlots");
static_assert(offsetof(UCompanionsLockerCategoryConfig, DefaultSortType) == 544, "Offset mismatch for UCompanionsLockerCategoryConfig::DefaultSortType");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bDefaultShowFavoritesOnly) == 545, "Offset mismatch for UCompanionsLockerCategoryConfig::bDefaultShowFavoritesOnly");
static_assert(offsetof(UCompanionsLockerCategoryConfig, SortConfigs) == 552, "Offset mismatch for UCompanionsLockerCategoryConfig::SortConfigs");
static_assert(offsetof(UCompanionsLockerCategoryConfig, FilterConfigs) == 568, "Offset mismatch for UCompanionsLockerCategoryConfig::FilterConfigs");
static_assert(offsetof(UCompanionsLockerCategoryConfig, SortFilterProvider) == 584, "Offset mismatch for UCompanionsLockerCategoryConfig::SortFilterProvider");
static_assert(offsetof(UCompanionsLockerCategoryConfig, GameplayTagFilterOutQuery) == 592, "Offset mismatch for UCompanionsLockerCategoryConfig::GameplayTagFilterOutQuery");
static_assert(offsetof(UCompanionsLockerCategoryConfig, RandomizationPriority) == 664, "Offset mismatch for UCompanionsLockerCategoryConfig::RandomizationPriority");
static_assert(offsetof(UCompanionsLockerCategoryConfig, PassIconPresentationScale) == 668, "Offset mismatch for UCompanionsLockerCategoryConfig::PassIconPresentationScale");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bAllowEmptySelection) == 672, "Offset mismatch for UCompanionsLockerCategoryConfig::bAllowEmptySelection");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bAllowDuplicatesDuringRandomization) == 673, "Offset mismatch for UCompanionsLockerCategoryConfig::bAllowDuplicatesDuringRandomization");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bAllowFallbackToDefaultProduct) == 674, "Offset mismatch for UCompanionsLockerCategoryConfig::bAllowFallbackToDefaultProduct");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bConditionallyFilterVariantToken) == 675, "Offset mismatch for UCompanionsLockerCategoryConfig::bConditionallyFilterVariantToken");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bReportContentGatedEquippedItems) == 676, "Offset mismatch for UCompanionsLockerCategoryConfig::bReportContentGatedEquippedItems");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bValidateCompatibility) == 677, "Offset mismatch for UCompanionsLockerCategoryConfig::bValidateCompatibility");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bShowCompatibility) == 678, "Offset mismatch for UCompanionsLockerCategoryConfig::bShowCompatibility");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bShowIfEmpty) == 679, "Offset mismatch for UCompanionsLockerCategoryConfig::bShowIfEmpty");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bShowStyleText) == 680, "Offset mismatch for UCompanionsLockerCategoryConfig::bShowStyleText");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bCanApplyToAll) == 681, "Offset mismatch for UCompanionsLockerCategoryConfig::bCanApplyToAll");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bDisplayAsModal) == 682, "Offset mismatch for UCompanionsLockerCategoryConfig::bDisplayAsModal");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bAreVariantsSupported) == 683, "Offset mismatch for UCompanionsLockerCategoryConfig::bAreVariantsSupported");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bShowSmallCategoryIcon) == 684, "Offset mismatch for UCompanionsLockerCategoryConfig::bShowSmallCategoryIcon");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bSecondaryEquipShowNumbers) == 685, "Offset mismatch for UCompanionsLockerCategoryConfig::bSecondaryEquipShowNumbers");
static_assert(offsetof(UCompanionsLockerCategoryConfig, bAllowCompatibleItemVmExpansion) == 686, "Offset mismatch for UCompanionsLockerCategoryConfig::bAllowCompatibleItemVmExpansion");

// /Script/CosmeticCompanionsUI.CompanionsLockerCategoryVM
// Kind: Class; super: AthenaLockerCategoryVM
class UCompanionsLockerCategoryVM
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

static_assert(offsetof(UCompanionsLockerCategoryVM, Prority) == 144, "Offset mismatch for UCompanionsLockerCategoryVM::Prority");
static_assert(offsetof(UCompanionsLockerCategoryVM, Config) == 152, "Offset mismatch for UCompanionsLockerCategoryVM::Config");
static_assert(offsetof(UCompanionsLockerCategoryVM, NewItemsInCategoryCount) == 160, "Offset mismatch for UCompanionsLockerCategoryVM::NewItemsInCategoryCount");
static_assert(offsetof(UCompanionsLockerCategoryVM, GatedItemsInCategoryCount) == 164, "Offset mismatch for UCompanionsLockerCategoryVM::GatedItemsInCategoryCount");
static_assert(offsetof(UCompanionsLockerCategoryVM, ArchivedItemsInCategoryCount) == 168, "Offset mismatch for UCompanionsLockerCategoryVM::ArchivedItemsInCategoryCount");
static_assert(offsetof(UCompanionsLockerCategoryVM, NonArchivedItemsInCategoryCount) == 172, "Offset mismatch for UCompanionsLockerCategoryVM::NonArchivedItemsInCategoryCount");
static_assert(offsetof(UCompanionsLockerCategoryVM, PendingFavoriteItems) == 176, "Offset mismatch for UCompanionsLockerCategoryVM::PendingFavoriteItems");
static_assert(offsetof(UCompanionsLockerCategoryVM, PendingArchivedItems) == 192, "Offset mismatch for UCompanionsLockerCategoryVM::PendingArchivedItems");
static_assert(offsetof(UCompanionsLockerCategoryVM, PendingSeenItems) == 208, "Offset mismatch for UCompanionsLockerCategoryVM::PendingSeenItems");
static_assert(offsetof(UCompanionsLockerCategoryVM, AllItemsInCategory) == 224, "Offset mismatch for UCompanionsLockerCategoryVM::AllItemsInCategory");
static_assert(offsetof(UCompanionsLockerCategoryVM, SortFilterProvider) == 240, "Offset mismatch for UCompanionsLockerCategoryVM::SortFilterProvider");
static_assert(offsetof(UCompanionsLockerCategoryVM, EquippedItems) == 248, "Offset mismatch for UCompanionsLockerCategoryVM::EquippedItems");
static_assert(offsetof(UCompanionsLockerCategoryVM, CosmeticUsageCache) == 300, "Offset mismatch for UCompanionsLockerCategoryVM::CosmeticUsageCache");
