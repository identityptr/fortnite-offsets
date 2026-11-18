#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EmoteWheelRuntime
{
    struct BuiltInEmoteWheelCategoryConfig
    {
        static constexpr std::string_view Name = "BuiltInEmoteWheelCategoryConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelLockerCategoryConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalEmotes = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExternalEmotes", 0xC8, "ArrayProperty"},
        }};
    };

    struct BuiltInEmoteWheelCategoryVM
    {
        static constexpr std::string_view Name = "BuiltInEmoteWheelCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelLockerCategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LockerCategoryVM = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LockerCategoryVM", 0xB0, "ObjectProperty"},
        }};
    };

    struct BuiltInEmoteWheelItemVM
    {
        static constexpr std::string_view Name = "BuiltInEmoteWheelItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelLockerItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LockerItemVM = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LockerItemVM", 0xB0, "ObjectProperty"},
        }};
    };

    struct EmoteWheelCategoryConfig
    {
        static constexpr std::string_view Name = "EmoteWheelCategoryConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductTag = 0x28;
            static constexpr std::uintptr_t Tag = 0x2C;
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t Overlay = 0x40;
            static constexpr std::uintptr_t CustomCollectionList = 0x60;
            static constexpr std::uintptr_t SortFilterConfigProvider = 0x80;
            static constexpr std::uintptr_t TextureScaleFactor = 0x88;
            static constexpr std::uintptr_t NumberOfItemsPerRowMobile = 0x8C;
            static constexpr std::uintptr_t NumberOfItemsPerRow = 0x90;
            static constexpr std::uintptr_t Priority = 0x94;
            static constexpr std::uintptr_t bCanOpenCollection = 0x98;
            static constexpr std::uintptr_t bEnableTextureReleasing = 0x99;
            static constexpr std::uintptr_t bAllowInteractionWithItemNames = 0x9A;
            static constexpr std::uintptr_t bEnableSubTabs = 0x9B;
            static constexpr std::uintptr_t bIsStandalone = 0x9C;
            static constexpr std::uintptr_t GameplayTagToBlockThisCategory = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ProductTag", 0x28, "StructProperty"},
            {"Tag", 0x2C, "StructProperty"},
            {"DisplayName", 0x30, "TextProperty"},
            {"Overlay", 0x40, "SoftClassProperty"},
            {"CustomCollectionList", 0x60, "SoftClassProperty"},
            {"SortFilterConfigProvider", 0x80, "ObjectProperty"},
            {"TextureScaleFactor", 0x88, "FloatProperty"},
            {"NumberOfItemsPerRowMobile", 0x8C, "IntProperty"},
            {"NumberOfItemsPerRow", 0x90, "IntProperty"},
            {"Priority", 0x94, "IntProperty"},
            {"bCanOpenCollection", 0x98, "BoolProperty"},
            {"bEnableTextureReleasing", 0x99, "BoolProperty"},
            {"bAllowInteractionWithItemNames", 0x9A, "BoolProperty"},
            {"bEnableSubTabs", 0x9B, "BoolProperty"},
            {"bIsStandalone", 0x9C, "BoolProperty"},
            {"GameplayTagToBlockThisCategory", 0xA0, "StructProperty"},
        }};
    };

    struct EmoteWheelCategoryVM
    {
        static constexpr std::string_view Name = "EmoteWheelCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0x78;
            static constexpr std::uintptr_t EquippedItems = 0x80;
            static constexpr std::uintptr_t SubTabs = 0x90;
            static constexpr std::uintptr_t ActiveSubTab = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Config", 0x78, "ObjectProperty"},
            {"EquippedItems", 0x80, "ArrayProperty"},
            {"SubTabs", 0x90, "ArrayProperty"},
            {"ActiveSubTab", 0xA0, "ObjectProperty"},
        }};
    };

    struct EmoteWheelCheatManager
    {
        static constexpr std::string_view Name = "EmoteWheelCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EmoteWheelCollectionNavigationWidget
    {
        static constexpr std::string_view Name = "EmoteWheelCollectionNavigationWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavigationWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBackHandler = 0x330;
            static constexpr std::uintptr_t bIsBackActionDisplayedInActionBar = 0x331;
            static constexpr std::uintptr_t OverrideBackActionDisplayName = 0x338;
            static constexpr std::uintptr_t bAutoActivate = 0x348;
            static constexpr std::uintptr_t bSupportsActivationFocus = 0x349;
            static constexpr std::uintptr_t bIsModal = 0x34A;
            static constexpr std::uintptr_t bAutoRestoreFocus = 0x34B;
            static constexpr std::uintptr_t bOverrideActionDomain = 0x34C;
            static constexpr std::uintptr_t InputMapping = 0x350;
            static constexpr std::uintptr_t InputMappingPriority = 0x358;
            static constexpr std::uintptr_t InputModeTagsToAdd = 0x360;
            static constexpr std::uintptr_t InputModeTagsToRemove = 0x380;
            static constexpr std::uintptr_t ActionDomainOverride = 0x3A0;
            static constexpr std::uintptr_t BP_OnWidgetActivated = 0x3C0;
            static constexpr std::uintptr_t BP_OnWidgetDeactivated = 0x3D0;
            static constexpr std::uintptr_t bIsActive = 0x3E0;
            static constexpr std::uintptr_t VisibilityBoundWidgets = 0x3E8;
            static constexpr std::uintptr_t bSetVisibilityOnActivated = 0x498;
            static constexpr std::uintptr_t ActivatedVisibility = 0x499;
            static constexpr std::uintptr_t bSetVisibilityOnDeactivated = 0x49A;
            static constexpr std::uintptr_t DeactivatedVisibility = 0x49B;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bIsBackHandler", 0x330, "BoolProperty"},
            {"bIsBackActionDisplayedInActionBar", 0x331, "BoolProperty"},
            {"OverrideBackActionDisplayName", 0x338, "TextProperty"},
            {"bAutoActivate", 0x348, "BoolProperty"},
            {"bSupportsActivationFocus", 0x349, "BoolProperty"},
            {"bIsModal", 0x34A, "BoolProperty"},
            {"bAutoRestoreFocus", 0x34B, "BoolProperty"},
            {"bOverrideActionDomain", 0x34C, "BoolProperty"},
            {"InputMapping", 0x350, "ObjectProperty"},
            {"InputMappingPriority", 0x358, "IntProperty"},
            {"InputModeTagsToAdd", 0x360, "StructProperty"},
            {"InputModeTagsToRemove", 0x380, "StructProperty"},
            {"ActionDomainOverride", 0x3A0, "SoftObjectProperty"},
            {"BP_OnWidgetActivated", 0x3C0, "MulticastInlineDelegateProperty"},
            {"BP_OnWidgetDeactivated", 0x3D0, "MulticastInlineDelegateProperty"},
            {"bIsActive", 0x3E0, "BoolProperty"},
            {"VisibilityBoundWidgets", 0x3E8, "ArrayProperty"},
            {"bSetVisibilityOnActivated", 0x498, "BoolProperty"},
            {"ActivatedVisibility", 0x499, "EnumProperty"},
            {"bSetVisibilityOnDeactivated", 0x49A, "BoolProperty"},
            {"DeactivatedVisibility", 0x49B, "EnumProperty"},
        }};
    };

    struct EmoteWheelConfig
    {
        static constexpr std::string_view Name = "EmoteWheelConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureActionSingletonAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t LegacyKBMActionBindingName = 0x28;
            static constexpr std::uintptr_t LegacyGamepadActionBindingName = 0x2C;
            static constexpr std::uintptr_t LegacySquadCommsKBMActionBindingName = 0x30;
            static constexpr std::uintptr_t LegacySquadCommsGamepadActionBindingName = 0x34;
            static constexpr std::uintptr_t DefaultCategories = 0x38;
            static constexpr std::uintptr_t CategoryConfigs = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LegacyKBMActionBindingName", 0x28, "NameProperty"},
            {"LegacyGamepadActionBindingName", 0x2C, "NameProperty"},
            {"LegacySquadCommsKBMActionBindingName", 0x30, "NameProperty"},
            {"LegacySquadCommsGamepadActionBindingName", 0x34, "NameProperty"},
            {"DefaultCategories", 0x38, "MapProperty"},
            {"CategoryConfigs", 0x48, "ArrayProperty"},
        }};
    };

    struct EmoteWheelConfigManager
    {
        static constexpr std::string_view Name = "EmoteWheelConfigManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryConfigs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CategoryConfigs", 0x28, "SetProperty"},
        }};
    };

    struct EmoteWheelExternalCategoryConfig
    {
        static constexpr std::string_view Name = "EmoteWheelExternalCategoryConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalEmotes = 0xA8;
            static constexpr std::uintptr_t bPostLockerCategory = 0xB8;
            static constexpr std::uintptr_t bIsExclusive = 0xB9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ExternalEmotes", 0xA8, "ArrayProperty"},
            {"bPostLockerCategory", 0xB8, "BoolProperty"},
            {"bIsExclusive", 0xB9, "BoolProperty"},
        }};
    };

    struct EmoteWheelExternalCategoryVM
    {
        static constexpr std::string_view Name = "EmoteWheelExternalCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0x78;
            static constexpr std::uintptr_t EquippedItems = 0x80;
            static constexpr std::uintptr_t SubTabs = 0x90;
            static constexpr std::uintptr_t ActiveSubTab = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Config", 0x78, "ObjectProperty"},
            {"EquippedItems", 0x80, "ArrayProperty"},
            {"SubTabs", 0x90, "ArrayProperty"},
            {"ActiveSubTab", 0xA0, "ObjectProperty"},
        }};
    };

    struct EmoteWheelExternalItemVM
    {
        static constexpr std::string_view Name = "EmoteWheelExternalItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t PickableItems = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PickableItems", 0xB0, "ArrayProperty"},
        }};
    };

    struct EmoteWheelItemDetailsVM
    {
        static constexpr std::string_view Name = "EmoteWheelItemDetailsVM";
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

    struct EmoteWheelItemSelectionVM
    {
        static constexpr std::string_view Name = "EmoteWheelItemSelectionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedItem = 0x78;
            static constexpr std::uintptr_t SelectedCategory = 0x80;
            static constexpr std::uintptr_t bIsCollectionShown = 0x88;
            static constexpr std::uintptr_t SelectedSlotIndex = 0x8C;
            static constexpr std::uintptr_t InitialLinearIndex = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SelectedItem", 0x78, "ObjectProperty"},
            {"SelectedCategory", 0x80, "ObjectProperty"},
            {"bIsCollectionShown", 0x88, "BoolProperty"},
            {"SelectedSlotIndex", 0x8C, "IntProperty"},
            {"InitialLinearIndex", 0x90, "IntProperty"},
        }};
    };

    struct EmoteWheelItemVM
    {
        static constexpr std::string_view Name = "EmoteWheelItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotIndex = 0x68;
            static constexpr std::uintptr_t DisplayName = 0x70;
            static constexpr std::uintptr_t Icon = 0x80;
            static constexpr std::uintptr_t CategoryConfig = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SlotIndex", 0x68, "IntProperty"},
            {"DisplayName", 0x70, "TextProperty"},
            {"Icon", 0x80, "SoftObjectProperty"},
            {"CategoryConfig", 0xA0, "ObjectProperty"},
        }};
    };

    struct EmoteWheelLockerCategoryConfig
    {
        static constexpr std::string_view Name = "EmoteWheelLockerCategoryConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t LockerCategoryConfig = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LockerCategoryConfig", 0xA8, "SoftObjectProperty"},
        }};
    };

    struct EmoteWheelLockerCategoryVM
    {
        static constexpr std::string_view Name = "EmoteWheelLockerCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LockerCategoryVM = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LockerCategoryVM", 0xB0, "ObjectProperty"},
        }};
    };

    struct EmoteWheelLockerItemVM
    {
        static constexpr std::string_view Name = "EmoteWheelLockerItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LockerItemVM = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LockerItemVM", 0xB0, "ObjectProperty"},
        }};
    };

    struct EmoteWheelPickerScreen
    {
        static constexpr std::string_view Name = "EmoteWheelPickerScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTags = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayTags", 0x4B0, "StructProperty"},
        }};
    };

    struct EmoteWheelSubTabConfig
    {
        static constexpr std::string_view Name = "EmoteWheelSubTabConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x28;
            static constexpr std::uintptr_t bUsePaging = 0x38;
            static constexpr std::uintptr_t MaxItemsPerPage = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x28, "TextProperty"},
            {"bUsePaging", 0x38, "BoolProperty"},
            {"MaxItemsPerPage", 0x3C, "IntProperty"},
        }};
    };

    struct EmoteWheelSubTabVM
    {
        static constexpr std::string_view Name = "EmoteWheelSubTabVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AllItems = 0x78;
            static constexpr std::uintptr_t VisibleItems = 0x88;
            static constexpr std::uintptr_t Config = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AllItems", 0x78, "ArrayProperty"},
            {"VisibleItems", 0x88, "ArrayProperty"},
            {"Config", 0x98, "ObjectProperty"},
        }};
    };

    struct EmoteWheelVM
    {
        static constexpr std::string_view Name = "EmoteWheelVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Categories = 0x78;
            static constexpr std::uintptr_t InputBindings = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Categories", 0x78, "ArrayProperty"},
            {"InputBindings", 0x88, "ArrayProperty"},
        }};
    };

    struct FollowersEmoteWheelCategoryConfig
    {
        static constexpr std::string_view Name = "FollowersEmoteWheelCategoryConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t ConvertedType = 0xA8;
            static constexpr std::uintptr_t Entries = 0xB0;
            static constexpr std::uintptr_t DefaultMultiFollowersName = 0xC0;
            static constexpr std::uintptr_t DefaultMultiFollowersIcon = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ConvertedType", 0xA8, "EnumProperty"},
            {"Entries", 0xB0, "ArrayProperty"},
            {"DefaultMultiFollowersName", 0xC0, "TextProperty"},
            {"DefaultMultiFollowersIcon", 0xD0, "SoftObjectProperty"},
        }};
    };

    struct FollowersEmoteWheelCategoryVM
    {
        static constexpr std::string_view Name = "FollowersEmoteWheelCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t AllyName = 0xB0;
            static constexpr std::uintptr_t AllyIcon = 0xC0;
            static constexpr std::uintptr_t bIsDismissCommandAvailable = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AllyName", 0xB0, "TextProperty"},
            {"AllyIcon", 0xC0, "SoftObjectProperty"},
            {"bIsDismissCommandAvailable", 0xE0, "BoolProperty"},
        }};
    };

    struct FollowersEmoteWheelItemVM
    {
        static constexpr std::string_view Name = "FollowersEmoteWheelItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Entry = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entry", 0xB0, "StructProperty"},
        }};
    };

    struct FortControllerComponent_EmoteWheelEnhancedInputs
    {
        static constexpr std::string_view Name = "FortControllerComponent_EmoteWheelEnhancedInputs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_EnhancedInputsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EmoteWheelInputData = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EmoteWheelInputData", 0xC8, "StructProperty"},
        }};
    };

    struct FortUIGameFeatureAction_EmoteWheelConfigModifier
    {
        static constexpr std::string_view Name = "FortUIGameFeatureAction_EmoteWheelConfigModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryConfigs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CategoryConfigs", 0x28, "ArrayProperty"},
        }};
    };

    struct GizmosWheelCategoryConfig
    {
        static constexpr std::string_view Name = "GizmosWheelCategoryConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductTag = 0x28;
            static constexpr std::uintptr_t Tag = 0x2C;
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t Overlay = 0x40;
            static constexpr std::uintptr_t CustomCollectionList = 0x60;
            static constexpr std::uintptr_t SortFilterConfigProvider = 0x80;
            static constexpr std::uintptr_t TextureScaleFactor = 0x88;
            static constexpr std::uintptr_t NumberOfItemsPerRowMobile = 0x8C;
            static constexpr std::uintptr_t NumberOfItemsPerRow = 0x90;
            static constexpr std::uintptr_t Priority = 0x94;
            static constexpr std::uintptr_t bCanOpenCollection = 0x98;
            static constexpr std::uintptr_t bEnableTextureReleasing = 0x99;
            static constexpr std::uintptr_t bAllowInteractionWithItemNames = 0x9A;
            static constexpr std::uintptr_t bEnableSubTabs = 0x9B;
            static constexpr std::uintptr_t bIsStandalone = 0x9C;
            static constexpr std::uintptr_t GameplayTagToBlockThisCategory = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ProductTag", 0x28, "StructProperty"},
            {"Tag", 0x2C, "StructProperty"},
            {"DisplayName", 0x30, "TextProperty"},
            {"Overlay", 0x40, "SoftClassProperty"},
            {"CustomCollectionList", 0x60, "SoftClassProperty"},
            {"SortFilterConfigProvider", 0x80, "ObjectProperty"},
            {"TextureScaleFactor", 0x88, "FloatProperty"},
            {"NumberOfItemsPerRowMobile", 0x8C, "IntProperty"},
            {"NumberOfItemsPerRow", 0x90, "IntProperty"},
            {"Priority", 0x94, "IntProperty"},
            {"bCanOpenCollection", 0x98, "BoolProperty"},
            {"bEnableTextureReleasing", 0x99, "BoolProperty"},
            {"bAllowInteractionWithItemNames", 0x9A, "BoolProperty"},
            {"bEnableSubTabs", 0x9B, "BoolProperty"},
            {"bIsStandalone", 0x9C, "BoolProperty"},
            {"GameplayTagToBlockThisCategory", 0xA0, "StructProperty"},
        }};
    };

    struct GizmosWheelCategoryVM
    {
        static constexpr std::string_view Name = "GizmosWheelCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0x78;
            static constexpr std::uintptr_t EquippedItems = 0x80;
            static constexpr std::uintptr_t SubTabs = 0x90;
            static constexpr std::uintptr_t ActiveSubTab = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Config", 0x78, "ObjectProperty"},
            {"EquippedItems", 0x80, "ArrayProperty"},
            {"SubTabs", 0x90, "ArrayProperty"},
            {"ActiveSubTab", 0xA0, "ObjectProperty"},
        }};
    };

    struct GizmosWheelGlobalSettings
    {
        static constexpr std::string_view Name = "GizmosWheelGlobalSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MinSlotCount = 0x28;
            static constexpr std::uintptr_t MaxSlotCount = 0x2C;
            static constexpr std::uintptr_t ExactSlotCount = 0x30;
            static constexpr std::uintptr_t bUseMockData = 0x34;
            static constexpr std::uintptr_t bUseSeasonEndTimeIfItemCalendarEventNull = 0x35;
            static constexpr std::uintptr_t MockItemPaths = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MinSlotCount", 0x28, "IntProperty"},
            {"MaxSlotCount", 0x2C, "IntProperty"},
            {"ExactSlotCount", 0x30, "IntProperty"},
            {"bUseMockData", 0x34, "BoolProperty"},
            {"bUseSeasonEndTimeIfItemCalendarEventNull", 0x35, "BoolProperty"},
            {"MockItemPaths", 0x38, "ArrayProperty"},
        }};
    };

    struct GizmosWheelItemVM
    {
        static constexpr std::string_view Name = "GizmosWheelItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0xB0;
            static constexpr std::uintptr_t ItemCooldownVM = 0xB8;
            static constexpr std::uintptr_t InventoryItemInstance = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemDefinition", 0xB0, "ObjectProperty"},
            {"ItemCooldownVM", 0xB8, "ObjectProperty"},
            {"InventoryItemInstance", 0xC0, "WeakObjectProperty"},
        }};
    };

    struct GizmosWheelVM
    {
        static constexpr std::string_view Name = "GizmosWheelVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Categories = 0x78;
            static constexpr std::uintptr_t InputBindings = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Categories", 0x78, "ArrayProperty"},
            {"InputBindings", 0x88, "ArrayProperty"},
        }};
    };

    struct RuntimeEmoteWheelConfig
    {
        static constexpr std::string_view Name = "RuntimeEmoteWheelConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Categories = 0x30;
            static constexpr std::uintptr_t ExclusiveCategory = 0x40;
            static constexpr std::uintptr_t ExternalCategories = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Categories", 0x30, "SetProperty"},
            {"ExclusiveCategory", 0x40, "ObjectProperty"},
            {"ExternalCategories", 0x48, "SetProperty"},
        }};
    };

    struct SquadCommsEmoteWheelCategoryConfig
    {
        static constexpr std::string_view Name = "SquadCommsEmoteWheelCategoryConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0xA8, "ArrayProperty"},
        }};
    };

    struct SquadCommsEmoteWheelCategoryVM
    {
        static constexpr std::string_view Name = "SquadCommsEmoteWheelCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0x78;
            static constexpr std::uintptr_t EquippedItems = 0x80;
            static constexpr std::uintptr_t SubTabs = 0x90;
            static constexpr std::uintptr_t ActiveSubTab = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Config", 0x78, "ObjectProperty"},
            {"EquippedItems", 0x80, "ArrayProperty"},
            {"SubTabs", 0x90, "ArrayProperty"},
            {"ActiveSubTab", 0xA0, "ObjectProperty"},
        }};
    };

    struct SquadCommsEmoteWheelItemVM
    {
        static constexpr std::string_view Name = "SquadCommsEmoteWheelItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Entry = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entry", 0xB0, "StructProperty"},
        }};
    };

}
