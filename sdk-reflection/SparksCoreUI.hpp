#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksCoreUI
{
    struct DynamicUISceneRequestCoordinatorComponent
    {
        static constexpr std::string_view Name = "DynamicUISceneRequestCoordinatorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AddedScenes = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AddedScenes", 0xC0, "ArrayProperty"},
        }};
    };

    struct DynamicUISceneRequestUtilities
    {
        static constexpr std::string_view Name = "DynamicUISceneRequestUtilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksCarouselView
    {
        static constexpr std::string_view Name = "SparksCarouselView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedIndex = 0x308;
            static constexpr std::uintptr_t EntryClass = 0x310;
            static constexpr std::uintptr_t MaxVisibleWidgets = 0x318;
            static constexpr std::uintptr_t Items = 0x320;
            static constexpr std::uintptr_t Widgets = 0x330;
            static constexpr std::uintptr_t bSelectOnTouchScroll = 0x340;
            static constexpr std::uintptr_t TouchSelectTriggerDistance = 0x344;
            static constexpr std::uintptr_t bDiscardTouchOnCrossAxisDistance = 0x348;
            static constexpr std::uintptr_t TouchDiscardCrossAxisTriggerDistance = 0x34C;
            static constexpr std::uintptr_t CarouselItemSpacing = 0x350;
            static constexpr std::uintptr_t CarouselStackSpacing = 0x354;
            static constexpr std::uintptr_t CarouselSideScale = 0x358;
            static constexpr std::uintptr_t CarouselStackScale = 0x35C;
            static constexpr std::uintptr_t CarouselSideTint = 0x360;
            static constexpr std::uintptr_t SnapCurve = 0x370;
            static constexpr std::uintptr_t SnapDuration = 0x3B8;
            static constexpr std::uintptr_t FlingDistanceTime = 0x3BC;
            static constexpr std::uintptr_t FlickCurve = 0x3C0;
            static constexpr std::uintptr_t FlickDuration = 0x408;
            static constexpr std::uintptr_t FlickMaxItems = 0x40C;
            static constexpr std::uintptr_t FlickMinItems = 0x410;
            static constexpr std::uintptr_t FlickSound = 0x418;
            static constexpr std::uintptr_t FlickSoundVolume = 0x420;
            static constexpr std::uintptr_t OnItemSelectionChanged = 0x428;
            static constexpr std::uintptr_t OnItemClicked = 0x438;
            static constexpr std::uintptr_t PressedScreenSpacePosition = 0x44C;
            static constexpr std::uintptr_t ScrollBox = 0x458;
            static constexpr std::uintptr_t CarouselPanel = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"SelectedIndex", 0x308, "IntProperty"},
            {"EntryClass", 0x310, "ClassProperty"},
            {"MaxVisibleWidgets", 0x318, "IntProperty"},
            {"Items", 0x320, "ArrayProperty"},
            {"Widgets", 0x330, "ArrayProperty"},
            {"bSelectOnTouchScroll", 0x340, "BoolProperty"},
            {"TouchSelectTriggerDistance", 0x344, "FloatProperty"},
            {"bDiscardTouchOnCrossAxisDistance", 0x348, "BoolProperty"},
            {"TouchDiscardCrossAxisTriggerDistance", 0x34C, "FloatProperty"},
            {"CarouselItemSpacing", 0x350, "FloatProperty"},
            {"CarouselStackSpacing", 0x354, "FloatProperty"},
            {"CarouselSideScale", 0x358, "FloatProperty"},
            {"CarouselStackScale", 0x35C, "FloatProperty"},
            {"CarouselSideTint", 0x360, "StructProperty"},
            {"SnapCurve", 0x370, "StructProperty"},
            {"SnapDuration", 0x3B8, "FloatProperty"},
            {"FlingDistanceTime", 0x3BC, "FloatProperty"},
            {"FlickCurve", 0x3C0, "StructProperty"},
            {"FlickDuration", 0x408, "FloatProperty"},
            {"FlickMaxItems", 0x40C, "IntProperty"},
            {"FlickMinItems", 0x410, "IntProperty"},
            {"FlickSound", 0x418, "ObjectProperty"},
            {"FlickSoundVolume", 0x420, "FloatProperty"},
            {"OnItemSelectionChanged", 0x428, "MulticastInlineDelegateProperty"},
            {"OnItemClicked", 0x438, "MulticastInlineDelegateProperty"},
            {"PressedScreenSpacePosition", 0x44C, "StructProperty"},
            {"ScrollBox", 0x458, "ObjectProperty"},
            {"CarouselPanel", 0x478, "ObjectProperty"},
        }};
    };

    struct SparksCarouselViewEntry
    {
        static constexpr std::string_view Name = "SparksCarouselViewEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksCoreUIGlobals
    {
        static constexpr std::string_view Name = "SparksCoreUIGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksDesignTimeLibrary
    {
        static constexpr std::string_view Name = "SparksDesignTimeLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksDynamicUIDirector
    {
        static constexpr std::string_view Name = "SparksDynamicUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultScenes = 0x278;
            static constexpr std::uintptr_t OwningLocalPlayer = 0x288;
            static constexpr std::uintptr_t bEnabledDuringReplay = 0x290;
            static constexpr std::uintptr_t ScenesManuallyAdded = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultScenes", 0x278, "ArrayProperty"},
            {"OwningLocalPlayer", 0x288, "WeakObjectProperty"},
            {"bEnabledDuringReplay", 0x290, "BoolProperty"},
            {"ScenesManuallyAdded", 0x298, "ArrayProperty"},
        }};
    };

    struct SparksEventDrivenForBlueprintVM
    {
        static constexpr std::string_view Name = "SparksEventDrivenForBlueprintVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ListenerHelper = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ListenerHelper", 0x88, "StructProperty"},
        }};
    };

    struct SparksEventDrivenVM
    {
        static constexpr std::string_view Name = "SparksEventDrivenVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksQuestScreenContainer
    {
        static constexpr std::string_view Name = "SparksQuestScreenContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestTabID = 0x330;
            static constexpr std::uintptr_t AthenaScreenContainer = 0x338;
            static constexpr std::uintptr_t bUseToggleSongMenuInputAction = 0x340;
            static constexpr std::uintptr_t ToggleSongMenuInputAction = 0x348;
            static constexpr std::uintptr_t ToggleSongMenuCooldown = 0x350;
            static constexpr std::uintptr_t EventRouter = 0x394;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"QuestTabID", 0x330, "NameProperty"},
            {"AthenaScreenContainer", 0x338, "ObjectProperty"},
            {"bUseToggleSongMenuInputAction", 0x340, "BoolProperty"},
            {"ToggleSongMenuInputAction", 0x348, "ObjectProperty"},
            {"ToggleSongMenuCooldown", 0x350, "DoubleProperty"},
            {"EventRouter", 0x394, "WeakObjectProperty"},
        }};
    };

    struct SparksScrollBox
    {
        static constexpr std::string_view Name = "SparksScrollBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ScrollBox";
        struct Offsets
        {
            static constexpr std::uintptr_t BP_OnScrollBoxTouchStarted = 0xBA0;
            static constexpr std::uintptr_t BP_OnScrollBoxTouchMoved = 0xBB0;
            static constexpr std::uintptr_t BP_OnScrollBoxTouchEnded = 0xBC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BP_OnScrollBoxTouchStarted", 0xBA0, "MulticastInlineDelegateProperty"},
            {"BP_OnScrollBoxTouchMoved", 0xBB0, "MulticastInlineDelegateProperty"},
            {"BP_OnScrollBoxTouchEnded", 0xBC0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SparksSocialAvatarIcon
    {
        static constexpr std::string_view Name = "SparksSocialAvatarIcon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSocialAvatarIcon";
        struct Offsets
        {
            static constexpr std::uintptr_t AvatarMaterial = 0x4C0;
            static constexpr std::uintptr_t InitialIconBrushResource = 0x4C8;
            static constexpr std::uintptr_t SocialUser = 0x4D0;
            static constexpr std::uintptr_t AvatarTexture = 0x4D8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AvatarMaterial", 0x4C0, "ObjectProperty"},
            {"InitialIconBrushResource", 0x4C8, "ObjectProperty"},
            {"SocialUser", 0x4D0, "WeakObjectProperty"},
            {"AvatarTexture", 0x4D8, "ObjectProperty"},
        }};
    };

    struct SparksSongAlphaSortVM
    {
        static constexpr std::string_view Name = "SparksSongAlphaSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksSongArtistSortVM
    {
        static constexpr std::string_view Name = "SparksSongArtistSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksSongFeaturedSortVM
    {
        static constexpr std::string_view Name = "SparksSongFeaturedSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksSongFilterAvailableVM
    {
        static constexpr std::string_view Name = "SparksSongFilterAvailableVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongFilterItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksSongFilterFeaturedVM
    {
        static constexpr std::string_view Name = "SparksSongFilterFeaturedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongFilterItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksSongFilterItemVM
    {
        static constexpr std::string_view Name = "SparksSongFilterItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortFilterItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksSongFilterOptionVM
    {
        static constexpr std::string_view Name = "SparksSongFilterOptionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortOptionItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksSongFilterOwnedVM
    {
        static constexpr std::string_view Name = "SparksSongFilterOwnedVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongFilterItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksSongFilterVM
    {
        static constexpr std::string_view Name = "SparksSongFilterVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SortFilter = 0x68;
            static constexpr std::uintptr_t FilteredCatalogItems = 0x70;
            static constexpr std::uintptr_t FilteredSongItems = 0x80;
            static constexpr std::uintptr_t OwningController = 0x90;
            static constexpr std::uintptr_t ItemVMClass = 0x98;
            static constexpr std::uintptr_t LockerConfig = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SortFilter", 0x68, "ObjectProperty"},
            {"FilteredCatalogItems", 0x70, "ArrayProperty"},
            {"FilteredSongItems", 0x80, "ArrayProperty"},
            {"OwningController", 0x90, "ObjectProperty"},
            {"ItemVMClass", 0x98, "ClassProperty"},
            {"LockerConfig", 0xA0, "ObjectProperty"},
        }};
    };

    struct SparksSongItemDetailsVM
    {
        static constexpr std::string_view Name = "SparksSongItemDetailsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaItemDetailsVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SongStatus = 0x222;
            static constexpr std::uintptr_t CachedSongData = 0x224;
            static constexpr std::uintptr_t CoverArt = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SongStatus", 0x222, "EnumProperty"},
            {"CachedSongData", 0x224, "WeakObjectProperty"},
            {"CoverArt", 0x230, "ObjectProperty"},
        }};
    };

    struct SparksSongItemVM
    {
        static constexpr std::string_view Name = "SparksSongItemVM";
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

    struct SparksSongLockerCategoryConfig
    {
        static constexpr std::string_view Name = "SparksSongLockerCategoryConfig";
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

    struct SparksSongLockerCategoryGroupCollectionVM
    {
        static constexpr std::string_view Name = "SparksSongLockerCategoryGroupCollectionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLockerCategoryGroupCollectionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0x68;
            static constexpr std::uintptr_t CollectionConfig = 0x70;
            static constexpr std::uintptr_t Icon = 0x78;
            static constexpr std::uintptr_t CategoryGroups = 0x80;
            static constexpr std::uintptr_t NewItemsCount = 0x90;
            static constexpr std::uintptr_t GatedItemsCount = 0x94;
            static constexpr std::uintptr_t ArchivedItemsCount = 0x98;
            static constexpr std::uintptr_t bIsShuffleArchetype = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PlayerController", 0x68, "WeakObjectProperty"},
            {"CollectionConfig", 0x70, "ObjectProperty"},
            {"Icon", 0x78, "ObjectProperty"},
            {"CategoryGroups", 0x80, "ArrayProperty"},
            {"NewItemsCount", 0x90, "IntProperty"},
            {"GatedItemsCount", 0x94, "IntProperty"},
            {"ArchivedItemsCount", 0x98, "IntProperty"},
            {"bIsShuffleArchetype", 0x9C, "BoolProperty"},
        }};
    };

    struct SparksSongOwnedSortVM
    {
        static constexpr std::string_view Name = "SparksSongOwnedSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongSortVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksSongSearchTextVM
    {
        static constexpr std::string_view Name = "SparksSongSearchTextVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSortFilterSearchTextVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchText = 0x68;
            static constexpr std::uintptr_t StringSuggestions = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SearchText", 0x68, "TextProperty"},
            {"StringSuggestions", 0x78, "ArrayProperty"},
        }};
    };

    struct SparksSongSecondaryFilterUnarchivedOnlyVM
    {
        static constexpr std::string_view Name = "SparksSongSecondaryFilterUnarchivedOnlyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongSecondaryFilterVM";
        struct Offsets
        {
            static constexpr std::uintptr_t OldProfile = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OldProfile", 0xC0, "ObjectProperty"},
        }};
    };

    struct SparksSongSecondaryFilterVM
    {
        static constexpr std::string_view Name = "SparksSongSecondaryFilterVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongFilterOptionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksSongSortVM
    {
        static constexpr std::string_view Name = "SparksSongSortVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSortItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x68;
            static constexpr std::uintptr_t Count = 0x78;
            static constexpr std::uintptr_t bIsSeparator = 0x7C;
            static constexpr std::uintptr_t bAutoHide = 0x7D;
            static constexpr std::uintptr_t bIsActive = 0x7E;
            static constexpr std::uintptr_t bIsVisible = 0x7F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Label", 0x68, "TextProperty"},
            {"Count", 0x78, "IntProperty"},
            {"bIsSeparator", 0x7C, "BoolProperty"},
            {"bAutoHide", 0x7D, "BoolProperty"},
            {"bIsActive", 0x7E, "BoolProperty"},
            {"bIsVisible", 0x7F, "BoolProperty"},
        }};
    };

    struct SparksTouchButtonBase
    {
        static constexpr std::string_view Name = "SparksTouchButtonBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PressAction = 0x338;
            static constexpr std::uintptr_t WidgetTransitionType = 0x340;
            static constexpr std::uintptr_t DeactivateInputActionIfDragOutsideHitbox = 0x341;
            static constexpr std::uintptr_t DeactivateInputActionIfCollapsed = 0x342;
            static constexpr std::uintptr_t PressedColor = 0x344;
            static constexpr std::uintptr_t ReleasedColor = 0x354;
            static constexpr std::uintptr_t Image_Icon = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PressAction", 0x338, "ObjectProperty"},
            {"WidgetTransitionType", 0x340, "EnumProperty"},
            {"DeactivateInputActionIfDragOutsideHitbox", 0x341, "BoolProperty"},
            {"DeactivateInputActionIfCollapsed", 0x342, "BoolProperty"},
            {"PressedColor", 0x344, "StructProperty"},
            {"ReleasedColor", 0x354, "StructProperty"},
            {"Image_Icon", 0x368, "ObjectProperty"},
        }};
    };

}
