/**
 * decamp dumper generated SDK
 * Package: /Script/JunoBuildingCosmeticsUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoBuildingCosmeticsUI.JunoShopBuildPartInfo
// Kind: ScriptStruct; super: none
struct FJunoShopBuildPartInfo
{
public:
    std::uint8_t PartName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::int32_t PartQuantity; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoShopBuildPartInfo, PartName) == 0, "Offset mismatch for FJunoShopBuildPartInfo::PartName");
static_assert(offsetof(FJunoShopBuildPartInfo, PartQuantity) == 16, "Offset mismatch for FJunoShopBuildPartInfo::PartQuantity");

// /Script/JunoBuildingCosmeticsUI.JunoShopBuildResourceRequirement
// Kind: ScriptStruct; super: none
struct FJunoShopBuildResourceRequirement
{
public:
    std::uint8_t ResourceImage[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ResourceName[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::int32_t ResourceQuantity; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t ResourceRarity; // 0x0034 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoShopBuildResourceRequirement, ResourceImage) == 0, "Offset mismatch for FJunoShopBuildResourceRequirement::ResourceImage");
static_assert(offsetof(FJunoShopBuildResourceRequirement, ResourceName) == 32, "Offset mismatch for FJunoShopBuildResourceRequirement::ResourceName");
static_assert(offsetof(FJunoShopBuildResourceRequirement, ResourceQuantity) == 48, "Offset mismatch for FJunoShopBuildResourceRequirement::ResourceQuantity");
static_assert(offsetof(FJunoShopBuildResourceRequirement, ResourceRarity) == 52, "Offset mismatch for FJunoShopBuildResourceRequirement::ResourceRarity");

// /Script/JunoBuildingCosmeticsUI.JunoShopPropInfo
// Kind: ScriptStruct; super: none
struct FJunoShopPropInfo
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t IsInteractable; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoShopPropInfo, DisplayName) == 0, "Offset mismatch for FJunoShopPropInfo::DisplayName");
static_assert(offsetof(FJunoShopPropInfo, IsInteractable) == 16, "Offset mismatch for FJunoShopPropInfo::IsInteractable");

// /Script/JunoBuildingCosmeticsUI.JunoBuildSetLockerCategoryConfig
// Kind: Class; super: AthenaLockerCategoryConfig
class UJunoBuildSetLockerCategoryConfig
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

static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, CustomWidgetClasses) == 40, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::CustomWidgetClasses");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, CustomActivatableWidgetClasses) == 56, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::CustomActivatableWidgetClasses");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, CustomDialogVMClasses) == 72, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::CustomDialogVMClasses");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, PrimaryProductTag) == 88, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::PrimaryProductTag");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, CompatibilityConfig) == 96, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::CompatibilityConfig");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, CustomCategoryItem) == 104, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::CustomCategoryItem");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, CustomItem) == 136, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::CustomItem");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, CustomCategoryEditor) == 168, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::CustomCategoryEditor");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, CustomItemDetails) == 200, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::CustomItemDetails");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, CustomInspectScreenBanner) == 232, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::CustomInspectScreenBanner");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, ItemShopTileImageRuleset) == 264, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::ItemShopTileImageRuleset");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, ItemShopTileImageRulesetForProduct) == 272, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::ItemShopTileImageRulesetForProduct");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, LoadingIcon2dPreview) == 288, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::LoadingIcon2dPreview");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, SlotInfo) == 320, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::SlotInfo");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, AdditionalSlotInfo) == 480, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::AdditionalSlotInfo");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, CategoryNameOverride) == 496, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::CategoryNameOverride");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, ItemUsageDescription) == 512, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::ItemUsageDescription");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, LoadoutSlots) == 528, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::LoadoutSlots");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, DefaultSortType) == 544, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::DefaultSortType");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bDefaultShowFavoritesOnly) == 545, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bDefaultShowFavoritesOnly");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, SortConfigs) == 552, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::SortConfigs");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, FilterConfigs) == 568, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::FilterConfigs");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, SortFilterProvider) == 584, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::SortFilterProvider");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, GameplayTagFilterOutQuery) == 592, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::GameplayTagFilterOutQuery");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, RandomizationPriority) == 664, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::RandomizationPriority");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, PassIconPresentationScale) == 668, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::PassIconPresentationScale");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bAllowEmptySelection) == 672, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bAllowEmptySelection");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bAllowDuplicatesDuringRandomization) == 673, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bAllowDuplicatesDuringRandomization");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bAllowFallbackToDefaultProduct) == 674, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bAllowFallbackToDefaultProduct");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bConditionallyFilterVariantToken) == 675, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bConditionallyFilterVariantToken");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bReportContentGatedEquippedItems) == 676, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bReportContentGatedEquippedItems");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bValidateCompatibility) == 677, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bValidateCompatibility");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bShowCompatibility) == 678, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bShowCompatibility");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bShowIfEmpty) == 679, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bShowIfEmpty");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bShowStyleText) == 680, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bShowStyleText");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bCanApplyToAll) == 681, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bCanApplyToAll");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bDisplayAsModal) == 682, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bDisplayAsModal");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bAreVariantsSupported) == 683, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bAreVariantsSupported");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bShowSmallCategoryIcon) == 684, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bShowSmallCategoryIcon");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bSecondaryEquipShowNumbers) == 685, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bSecondaryEquipShowNumbers");
static_assert(offsetof(UJunoBuildSetLockerCategoryConfig, bAllowCompatibleItemVmExpansion) == 686, "Offset mismatch for UJunoBuildSetLockerCategoryConfig::bAllowCompatibleItemVmExpansion");

// /Script/JunoBuildingCosmeticsUI.JunoCollectiblesLockerCategoryVM
// Kind: Class; super: AthenaLockerCategoryVM
class UJunoCollectiblesLockerCategoryVM
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

static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, Prority) == 144, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::Prority");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, Config) == 152, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::Config");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, NewItemsInCategoryCount) == 160, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::NewItemsInCategoryCount");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, GatedItemsInCategoryCount) == 164, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::GatedItemsInCategoryCount");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, ArchivedItemsInCategoryCount) == 168, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::ArchivedItemsInCategoryCount");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, NonArchivedItemsInCategoryCount) == 172, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::NonArchivedItemsInCategoryCount");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, PendingFavoriteItems) == 176, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::PendingFavoriteItems");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, PendingArchivedItems) == 192, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::PendingArchivedItems");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, PendingSeenItems) == 208, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::PendingSeenItems");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, AllItemsInCategory) == 224, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::AllItemsInCategory");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, SortFilterProvider) == 240, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::SortFilterProvider");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, EquippedItems) == 248, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::EquippedItems");
static_assert(offsetof(UJunoCollectiblesLockerCategoryVM, CosmeticUsageCache) == 300, "Offset mismatch for UJunoCollectiblesLockerCategoryVM::CosmeticUsageCache");

// /Script/JunoBuildingCosmeticsUI.JunoPropBundleLockerCategoryConfig
// Kind: Class; super: AthenaLockerCategoryConfig
class UJunoPropBundleLockerCategoryConfig
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

static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, CustomWidgetClasses) == 40, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::CustomWidgetClasses");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, CustomActivatableWidgetClasses) == 56, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::CustomActivatableWidgetClasses");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, CustomDialogVMClasses) == 72, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::CustomDialogVMClasses");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, PrimaryProductTag) == 88, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::PrimaryProductTag");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, CompatibilityConfig) == 96, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::CompatibilityConfig");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, CustomCategoryItem) == 104, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::CustomCategoryItem");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, CustomItem) == 136, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::CustomItem");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, CustomCategoryEditor) == 168, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::CustomCategoryEditor");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, CustomItemDetails) == 200, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::CustomItemDetails");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, CustomInspectScreenBanner) == 232, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::CustomInspectScreenBanner");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, ItemShopTileImageRuleset) == 264, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::ItemShopTileImageRuleset");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, ItemShopTileImageRulesetForProduct) == 272, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::ItemShopTileImageRulesetForProduct");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, LoadingIcon2dPreview) == 288, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::LoadingIcon2dPreview");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, SlotInfo) == 320, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::SlotInfo");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, AdditionalSlotInfo) == 480, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::AdditionalSlotInfo");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, CategoryNameOverride) == 496, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::CategoryNameOverride");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, ItemUsageDescription) == 512, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::ItemUsageDescription");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, LoadoutSlots) == 528, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::LoadoutSlots");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, DefaultSortType) == 544, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::DefaultSortType");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bDefaultShowFavoritesOnly) == 545, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bDefaultShowFavoritesOnly");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, SortConfigs) == 552, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::SortConfigs");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, FilterConfigs) == 568, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::FilterConfigs");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, SortFilterProvider) == 584, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::SortFilterProvider");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, GameplayTagFilterOutQuery) == 592, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::GameplayTagFilterOutQuery");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, RandomizationPriority) == 664, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::RandomizationPriority");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, PassIconPresentationScale) == 668, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::PassIconPresentationScale");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bAllowEmptySelection) == 672, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bAllowEmptySelection");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bAllowDuplicatesDuringRandomization) == 673, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bAllowDuplicatesDuringRandomization");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bAllowFallbackToDefaultProduct) == 674, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bAllowFallbackToDefaultProduct");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bConditionallyFilterVariantToken) == 675, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bConditionallyFilterVariantToken");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bReportContentGatedEquippedItems) == 676, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bReportContentGatedEquippedItems");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bValidateCompatibility) == 677, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bValidateCompatibility");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bShowCompatibility) == 678, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bShowCompatibility");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bShowIfEmpty) == 679, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bShowIfEmpty");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bShowStyleText) == 680, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bShowStyleText");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bCanApplyToAll) == 681, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bCanApplyToAll");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bDisplayAsModal) == 682, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bDisplayAsModal");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bAreVariantsSupported) == 683, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bAreVariantsSupported");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bShowSmallCategoryIcon) == 684, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bShowSmallCategoryIcon");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bSecondaryEquipShowNumbers) == 685, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bSecondaryEquipShowNumbers");
static_assert(offsetof(UJunoPropBundleLockerCategoryConfig, bAllowCompatibleItemVmExpansion) == 686, "Offset mismatch for UJunoPropBundleLockerCategoryConfig::bAllowCompatibleItemVmExpansion");

// /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM
// Kind: Class; super: AthenaItemDetailsVM
class UJunoShopBuildSetItemDetailsVM
{
public:
    std::uint8_t Pad_0000[0x220]; // 0x0000
    TArray<void*> Parts; // 0x0220 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ResourceRequirements; // 0x0230 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoShopBuildSetItemDetailsVM, Parts) == 544, "Offset mismatch for UJunoShopBuildSetItemDetailsVM::Parts");
static_assert(offsetof(UJunoShopBuildSetItemDetailsVM, ResourceRequirements) == 560, "Offset mismatch for UJunoShopBuildSetItemDetailsVM::ResourceRequirements");

// /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetVM
// Kind: Class; super: AthenaItemVM
class UJunoShopBuildSetVM
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* VariantItemDefinition; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoShopBuildSetVM, VariantItemDefinition) == 224, "Offset mismatch for UJunoShopBuildSetVM::VariantItemDefinition");

// /Script/JunoBuildingCosmeticsUI.JunoShopPropBundleItemDetailsVM
// Kind: Class; super: AthenaItemDetailsVM
class UJunoShopPropBundleItemDetailsVM
{
public:
    std::uint8_t Pad_0000[0x220]; // 0x0000
    TArray<void*> Props; // 0x0220 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ResourceRequirements; // 0x0230 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoShopPropBundleItemDetailsVM, Props) == 544, "Offset mismatch for UJunoShopPropBundleItemDetailsVM::Props");
static_assert(offsetof(UJunoShopPropBundleItemDetailsVM, ResourceRequirements) == 560, "Offset mismatch for UJunoShopPropBundleItemDetailsVM::ResourceRequirements");

// /Script/JunoBuildingCosmeticsUI.JunoShopPropBundleVM
// Kind: Class; super: AthenaItemVM
class UJunoShopPropBundleVM
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* VariantItemDefinition; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoShopPropBundleVM, VariantItemDefinition) == 224, "Offset mismatch for UJunoShopPropBundleVM::VariantItemDefinition");
