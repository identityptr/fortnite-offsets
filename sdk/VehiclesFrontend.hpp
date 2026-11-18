#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VehiclesFrontend
{
    struct DelMarItemDetailsVM
    {
        static constexpr std::string_view Name = "DelMarItemDetailsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaItemDetailsVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x68;
            static constexpr std::uintptr_t AccessRestrictionDescription = 0x70;
            static constexpr std::uintptr_t RarityDisplayText = 0x80;
            static constexpr std::uintptr_t SeriesShortDisplayName = 0x90;
            static constexpr std::uintptr_t RarityColorPalette = 0xA0;
            static constexpr std::uintptr_t SeriesItemCardMaterial = 0xF0;
            static constexpr std::uintptr_t SeriesBackgroundMaterial = 0x110;
            static constexpr std::uintptr_t SeriesBackgroundTexture = 0x130;
            static constexpr std::uintptr_t SeriesIconTexture = 0x150;
            static constexpr std::uintptr_t InactivePreviewImage = 0x170;
            static constexpr std::uintptr_t WidePreviewImage = 0x190;
            static constexpr std::uintptr_t SmallPreviewImage = 0x1B0;
            static constexpr std::uintptr_t LargePreviewImage = 0x1D0;
            static constexpr std::uintptr_t UnlockRequirements = 0x1F0;
            static constexpr std::uintptr_t DirectAquisitionStyleDisclaimerOverride = 0x200;
            static constexpr std::uintptr_t bIsSeriesItem = 0x210;
            static constexpr std::uintptr_t bIsCrossStyle = 0x211;
            static constexpr std::uintptr_t bMoreDetailedFigureIncoming = 0x212;
            static constexpr std::uintptr_t bHasAccessRestriction = 0x213;
            static constexpr std::uintptr_t AccessRestrictionType = 0x214;
            static constexpr std::uintptr_t bIsAgeGated = 0x215;
            static constexpr std::uintptr_t bShouldShowRarity = 0x217;
            static constexpr std::uintptr_t bIsCompatibleWithActiveProduct = 0x218;
            static constexpr std::uintptr_t bIsLoadingImages = 0x219;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"Item", 0x68, "ObjectProperty"},
            {"AccessRestrictionDescription", 0x70, "TextProperty"},
            {"RarityDisplayText", 0x80, "TextProperty"},
            {"SeriesShortDisplayName", 0x90, "TextProperty"},
            {"RarityColorPalette", 0xA0, "StructProperty"},
            {"SeriesItemCardMaterial", 0xF0, "SoftObjectProperty"},
            {"SeriesBackgroundMaterial", 0x110, "SoftObjectProperty"},
            {"SeriesBackgroundTexture", 0x130, "SoftObjectProperty"},
            {"SeriesIconTexture", 0x150, "SoftObjectProperty"},
            {"InactivePreviewImage", 0x170, "SoftObjectProperty"},
            {"WidePreviewImage", 0x190, "SoftObjectProperty"},
            {"SmallPreviewImage", 0x1B0, "SoftObjectProperty"},
            {"LargePreviewImage", 0x1D0, "SoftObjectProperty"},
            {"UnlockRequirements", 0x1F0, "TextProperty"},
            {"DirectAquisitionStyleDisclaimerOverride", 0x200, "TextProperty"},
            {"bIsSeriesItem", 0x210, "BoolProperty"},
            {"bIsCrossStyle", 0x211, "BoolProperty"},
            {"bMoreDetailedFigureIncoming", 0x212, "BoolProperty"},
            {"bHasAccessRestriction", 0x213, "BoolProperty"},
            {"AccessRestrictionType", 0x214, "EnumProperty"},
            {"bIsAgeGated", 0x215, "BoolProperty"},
            {"bShouldShowRarity", 0x217, "BoolProperty"},
            {"bIsCompatibleWithActiveProduct", 0x218, "BoolProperty"},
            {"bIsLoadingImages", 0x219, "BoolProperty"},
        }};
    };

    struct DelMarItemVM
    {
        static constexpr std::string_view Name = "DelMarItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t VariantItemDefinition = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VariantItemDefinition", 0xE0, "ObjectProperty"},
        }};
    };

    struct DelMarLockerCategoryConfig
    {
        static constexpr std::string_view Name = "DelMarLockerCategoryConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaLockerCategoryConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomWidgetClasses = 0x28;
            static constexpr std::uintptr_t CustomActivatableWidgetClasses = 0x38;
            static constexpr std::uintptr_t CustomDialogVMClasses = 0x48;
            static constexpr std::uintptr_t GridDensityConfig = 0x58;
            static constexpr std::uintptr_t PrimaryProductTag = 0x60;
            static constexpr std::uintptr_t CompatibilityConfig = 0x68;
            static constexpr std::uintptr_t CustomCategoryItem = 0x70;
            static constexpr std::uintptr_t CustomItem = 0x90;
            static constexpr std::uintptr_t CustomCategoryEditor = 0xB0;
            static constexpr std::uintptr_t CustomItemDetails = 0xD0;
            static constexpr std::uintptr_t CustomInspectScreenBanner = 0xF0;
            static constexpr std::uintptr_t ItemShopTileImageRuleset = 0x110;
            static constexpr std::uintptr_t ItemShopTileImageRulesetForProduct = 0x118;
            static constexpr std::uintptr_t LoadingIcon2dPreview = 0x128;
            static constexpr std::uintptr_t SlotInfo = 0x148;
            static constexpr std::uintptr_t AdditionalSlotInfo = 0x1F8;
            static constexpr std::uintptr_t CategoryNameOverride = 0x208;
            static constexpr std::uintptr_t ItemUsageDescription = 0x218;
            static constexpr std::uintptr_t LoadoutSlots = 0x228;
            static constexpr std::uintptr_t DefaultSortType = 0x238;
            static constexpr std::uintptr_t bDefaultShowFavoritesOnly = 0x239;
            static constexpr std::uintptr_t SortConfigs = 0x240;
            static constexpr std::uintptr_t FilterConfigs = 0x250;
            static constexpr std::uintptr_t SortFilterProvider = 0x260;
            static constexpr std::uintptr_t GameplayTagFilterOutQuery = 0x268;
            static constexpr std::uintptr_t RandomizationPriority = 0x2B0;
            static constexpr std::uintptr_t PassIconPresentationScale = 0x2B4;
            static constexpr std::uintptr_t bAllowEmptySelection = 0x2B8;
            static constexpr std::uintptr_t bAllowDuplicatesDuringRandomization = 0x2B9;
            static constexpr std::uintptr_t bAllowFallbackToDefaultProduct = 0x2BA;
            static constexpr std::uintptr_t bConditionallyFilterVariantToken = 0x2BB;
            static constexpr std::uintptr_t bReportContentGatedEquippedItems = 0x2BC;
            static constexpr std::uintptr_t bValidateCompatibility = 0x2BD;
            static constexpr std::uintptr_t bShowCompatibility = 0x2BE;
            static constexpr std::uintptr_t bShowIfEmpty = 0x2BF;
            static constexpr std::uintptr_t bShowStyleText = 0x2C0;
            static constexpr std::uintptr_t bCanApplyToAll = 0x2C1;
            static constexpr std::uintptr_t bDisplayAsModal = 0x2C2;
            static constexpr std::uintptr_t bAreVariantsSupported = 0x2C3;
            static constexpr std::uintptr_t bShowSmallCategoryIcon = 0x2C4;
            static constexpr std::uintptr_t bSecondaryEquipShowNumbers = 0x2C5;
            static constexpr std::uintptr_t bAllowCompatibleItemVmExpansion = 0x2C6;
        };

        inline static constexpr std::array<PropertyInfo, 42> Properties{{
            {"CustomWidgetClasses", 0x28, "MapProperty"},
            {"CustomActivatableWidgetClasses", 0x38, "MapProperty"},
            {"CustomDialogVMClasses", 0x48, "MapProperty"},
            {"GridDensityConfig", 0x58, "ObjectProperty"},
            {"PrimaryProductTag", 0x60, "StructProperty"},
            {"CompatibilityConfig", 0x68, "ObjectProperty"},
            {"CustomCategoryItem", 0x70, "SoftClassProperty"},
            {"CustomItem", 0x90, "SoftClassProperty"},
            {"CustomCategoryEditor", 0xB0, "SoftClassProperty"},
            {"CustomItemDetails", 0xD0, "SoftClassProperty"},
            {"CustomInspectScreenBanner", 0xF0, "SoftClassProperty"},
            {"ItemShopTileImageRuleset", 0x110, "EnumProperty"},
            {"ItemShopTileImageRulesetForProduct", 0x118, "MapProperty"},
            {"LoadingIcon2dPreview", 0x128, "SoftObjectProperty"},
            {"SlotInfo", 0x148, "StructProperty"},
            {"AdditionalSlotInfo", 0x1F8, "ArrayProperty"},
            {"CategoryNameOverride", 0x208, "TextProperty"},
            {"ItemUsageDescription", 0x218, "TextProperty"},
            {"LoadoutSlots", 0x228, "ArrayProperty"},
            {"DefaultSortType", 0x238, "EnumProperty"},
            {"bDefaultShowFavoritesOnly", 0x239, "BoolProperty"},
            {"SortConfigs", 0x240, "ArrayProperty"},
            {"FilterConfigs", 0x250, "ArrayProperty"},
            {"SortFilterProvider", 0x260, "ObjectProperty"},
            {"GameplayTagFilterOutQuery", 0x268, "StructProperty"},
            {"RandomizationPriority", 0x2B0, "IntProperty"},
            {"PassIconPresentationScale", 0x2B4, "FloatProperty"},
            {"bAllowEmptySelection", 0x2B8, "BoolProperty"},
            {"bAllowDuplicatesDuringRandomization", 0x2B9, "BoolProperty"},
            {"bAllowFallbackToDefaultProduct", 0x2BA, "BoolProperty"},
            {"bConditionallyFilterVariantToken", 0x2BB, "BoolProperty"},
            {"bReportContentGatedEquippedItems", 0x2BC, "BoolProperty"},
            {"bValidateCompatibility", 0x2BD, "BoolProperty"},
            {"bShowCompatibility", 0x2BE, "BoolProperty"},
            {"bShowIfEmpty", 0x2BF, "BoolProperty"},
            {"bShowStyleText", 0x2C0, "BoolProperty"},
            {"bCanApplyToAll", 0x2C1, "BoolProperty"},
            {"bDisplayAsModal", 0x2C2, "BoolProperty"},
            {"bAreVariantsSupported", 0x2C3, "BoolProperty"},
            {"bShowSmallCategoryIcon", 0x2C4, "BoolProperty"},
            {"bSecondaryEquipShowNumbers", 0x2C5, "BoolProperty"},
            {"bAllowCompatibleItemVmExpansion", 0x2C6, "BoolProperty"},
        }};
    };

    struct DelMarLockerCategoryVM
    {
        static constexpr std::string_view Name = "DelMarLockerCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaLockerCategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Prority = 0x90;
            static constexpr std::uintptr_t Config = 0x98;
            static constexpr std::uintptr_t NewItemsInCategoryCount = 0xA0;
            static constexpr std::uintptr_t GatedItemsInCategoryCount = 0xA4;
            static constexpr std::uintptr_t ArchivedItemsInCategoryCount = 0xA8;
            static constexpr std::uintptr_t NonArchivedItemsInCategoryCount = 0xAC;
            static constexpr std::uintptr_t PendingFavoriteItems = 0xB0;
            static constexpr std::uintptr_t PendingArchivedItems = 0xC0;
            static constexpr std::uintptr_t PendingSeenItems = 0xD0;
            static constexpr std::uintptr_t AllItemsInCategory = 0xE0;
            static constexpr std::uintptr_t SortFilterProvider = 0xF0;
            static constexpr std::uintptr_t EquippedItems = 0xF8;
            static constexpr std::uintptr_t CosmeticUsageCache = 0x12C;
            static constexpr std::uintptr_t WeakLockerVM = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Prority", 0x90, "IntProperty"},
            {"Config", 0x98, "ObjectProperty"},
            {"NewItemsInCategoryCount", 0xA0, "IntProperty"},
            {"GatedItemsInCategoryCount", 0xA4, "IntProperty"},
            {"ArchivedItemsInCategoryCount", 0xA8, "IntProperty"},
            {"NonArchivedItemsInCategoryCount", 0xAC, "IntProperty"},
            {"PendingFavoriteItems", 0xB0, "MapProperty"},
            {"PendingArchivedItems", 0xC0, "MapProperty"},
            {"PendingSeenItems", 0xD0, "SetProperty"},
            {"AllItemsInCategory", 0xE0, "StructProperty"},
            {"SortFilterProvider", 0xF0, "ObjectProperty"},
            {"EquippedItems", 0xF8, "ArrayProperty"},
            {"CosmeticUsageCache", 0x12C, "WeakObjectProperty"},
            {"WeakLockerVM", 0x13C, "WeakObjectProperty"},
        }};
    };

}
