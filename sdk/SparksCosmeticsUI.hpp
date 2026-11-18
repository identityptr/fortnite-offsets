#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksCosmeticsUI
{
    struct SparksCosmeticsDebugPickerWidget
    {
        static constexpr std::string_view Name = "SparksCosmeticsDebugPickerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1B0;
            static constexpr std::uintptr_t ForegroundColor = 0x1BC;
            static constexpr std::uintptr_t ForegroundColorDelegate = 0x1D0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x1E0;
            static constexpr std::uintptr_t Padding = 0x220;
            static constexpr std::uintptr_t Priority = 0x230;
            static constexpr std::uintptr_t bAutomaticallyRegisterInputOnConstruction = 0x234;
            static constexpr std::uintptr_t bIsFocusable = 0x234;
            static constexpr std::uintptr_t bStopAction = 0x234;
            static constexpr std::uintptr_t QueuedWidgetAnimationTransitions = 0x238;
            static constexpr std::uintptr_t ActiveSequencePlayers = 0x248;
            static constexpr std::uintptr_t AnimationTickManager = 0x258;
            static constexpr std::uintptr_t StoppedSequencePlayers = 0x260;
            static constexpr std::uintptr_t NamedSlotBindings = 0x288;
            static constexpr std::uintptr_t Extensions = 0x298;
            static constexpr std::uintptr_t WidgetTree = 0x2A8;
            static constexpr std::uintptr_t bHasScriptImplementedPaint = 0x2B0;
            static constexpr std::uintptr_t bHasScriptImplementedTick = 0x2B0;
            static constexpr std::uintptr_t TickFrequency = 0x2C8;
            static constexpr std::uintptr_t DesiredFocusWidget = 0x2CC;
            static constexpr std::uintptr_t InputComponent = 0x2D8;
            static constexpr std::uintptr_t AnimationCallbacks = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ColorAndOpacity", 0x1A0, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1B0, "DelegateProperty"},
            {"ForegroundColor", 0x1BC, "StructProperty"},
            {"ForegroundColorDelegate", 0x1D0, "DelegateProperty"},
            {"OnVisibilityChanged", 0x1E0, "MulticastInlineDelegateProperty"},
            {"Padding", 0x220, "StructProperty"},
            {"Priority", 0x230, "IntProperty"},
            {"bAutomaticallyRegisterInputOnConstruction", 0x234, "BoolProperty"},
            {"bIsFocusable", 0x234, "BoolProperty"},
            {"bStopAction", 0x234, "BoolProperty"},
            {"QueuedWidgetAnimationTransitions", 0x238, "ArrayProperty"},
            {"ActiveSequencePlayers", 0x248, "ArrayProperty"},
            {"AnimationTickManager", 0x258, "ObjectProperty"},
            {"StoppedSequencePlayers", 0x260, "ArrayProperty"},
            {"NamedSlotBindings", 0x288, "ArrayProperty"},
            {"Extensions", 0x298, "ArrayProperty"},
            {"WidgetTree", 0x2A8, "ObjectProperty"},
            {"bHasScriptImplementedPaint", 0x2B0, "BoolProperty"},
            {"bHasScriptImplementedTick", 0x2B0, "BoolProperty"},
            {"TickFrequency", 0x2C8, "EnumProperty"},
            {"DesiredFocusWidget", 0x2CC, "StructProperty"},
            {"InputComponent", 0x2D8, "ObjectProperty"},
            {"AnimationCallbacks", 0x2E0, "ArrayProperty"},
        }};
    };

    struct SparksItemLockerCategoryConfig
    {
        static constexpr std::string_view Name = "SparksItemLockerCategoryConfig";
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

    struct SparksItemVM
    {
        static constexpr std::string_view Name = "SparksItemVM";
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

}
