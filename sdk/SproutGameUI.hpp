#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutGameUI
{
    struct FortAutomationRpcManager_SproutGameUI
    {
        static constexpr std::string_view Name = "FortAutomationRpcManager_SproutGameUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAutomationRpcManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameStateComponent_SproutFeedback
    {
        static constexpr std::string_view Name = "GameStateComponent_SproutFeedback";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent_PlayerFeedback";
        struct Offsets
        {
            static constexpr std::uintptr_t ReportedHouseItemDef = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReportedHouseItemDef", 0x128, "ObjectProperty"},
        }};
    };

    struct SproutActionBarViewModel
    {
        static constexpr std::string_view Name = "SproutActionBarViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionBarControllerCache = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActionBarControllerCache", 0x78, "WeakObjectProperty"},
        }};
    };

    struct SproutAnimalCareViewModel
    {
        static constexpr std::string_view Name = "SproutAnimalCareViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPetComplete = 0x78;
            static constexpr std::uintptr_t OnPettingAttemptFailed = 0x88;
            static constexpr std::uintptr_t OnRequestComplete = 0x98;
            static constexpr std::uintptr_t AnimalCareControllerCache = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnPetComplete", 0x78, "MulticastInlineDelegateProperty"},
            {"OnPettingAttemptFailed", 0x88, "MulticastInlineDelegateProperty"},
            {"OnRequestComplete", 0x98, "MulticastInlineDelegateProperty"},
            {"AnimalCareControllerCache", 0xA8, "WeakObjectProperty"},
        }};
    };

    struct SproutAnnouncementQueueViewModel
    {
        static constexpr std::string_view Name = "SproutAnnouncementQueueViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAnnouncementQueueViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PriorityQueue = 0x80;
            static constexpr std::uintptr_t CurrentMessage = 0x90;
            static constexpr std::uintptr_t WidgetTimeoutDelay = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PriorityQueue", 0x80, "ArrayProperty"},
            {"CurrentMessage", 0x90, "StructProperty"},
            {"WidgetTimeoutDelay", 0xCC, "IntProperty"},
        }};
    };

    struct SproutAnnouncementViewModel
    {
        static constexpr std::string_view Name = "SproutAnnouncementViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAnnouncementBaseViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CollectionUpdateType = 0xC0;
            static constexpr std::uintptr_t CollectionCategoryTag = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CollectionUpdateType", 0xC0, "EnumProperty"},
            {"CollectionCategoryTag", 0xC4, "StructProperty"},
        }};
    };

    struct SproutAppFrameWidget
    {
        static constexpr std::string_view Name = "SproutAppFrameWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AppViewModel = 0x330;
            static constexpr std::uintptr_t CloseAction = 0x338;
            static constexpr std::uintptr_t BackAction = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AppViewModel", 0x330, "ObjectProperty"},
            {"CloseAction", 0x338, "StructProperty"},
            {"BackAction", 0x348, "StructProperty"},
        }};
    };

    struct SproutAppViewModel
    {
        static constexpr std::string_view Name = "SproutAppViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t AppUIData = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AppUIData", 0x78, "StructProperty"},
        }};
    };

    struct SproutAppWidget
    {
        static constexpr std::string_view Name = "SproutAppWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AppTag = 0x4A0;
            static constexpr std::uintptr_t AppViewModel = 0x4A8;
            static constexpr std::uintptr_t AppFrameWidget = 0x4B0;
            static constexpr std::uintptr_t AltCloseAction = 0x4B8;
            static constexpr std::uintptr_t bIsSubView = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AppTag", 0x4A0, "StructProperty"},
            {"AppViewModel", 0x4A8, "ObjectProperty"},
            {"AppFrameWidget", 0x4B0, "ObjectProperty"},
            {"AltCloseAction", 0x4B8, "StructProperty"},
            {"bIsSubView", 0x4C8, "BoolProperty"},
        }};
    };

    struct SproutBountyBoardCategoriesViewModel
    {
        static constexpr std::string_view Name = "SproutBountyBoardCategoriesViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Categories = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Categories", 0x68, "ArrayProperty"},
        }};
    };

    struct SproutBuildLimitViewModel
    {
        static constexpr std::string_view Name = "SproutBuildLimitViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Current = 0x78;
            static constexpr std::uintptr_t max = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Current", 0x78, "IntProperty"},
            {"max", 0x7C, "IntProperty"},
        }};
    };

    struct SproutCategoryViewModel
    {
        static constexpr std::string_view Name = "SproutCategoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x68;
            static constexpr std::uintptr_t DisplayName = 0x70;
            static constexpr std::uintptr_t Icon = 0x80;
            static constexpr std::uintptr_t IsEnabled = 0xA0;
            static constexpr std::uintptr_t SortPriority = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Tag", 0x68, "StructProperty"},
            {"DisplayName", 0x70, "TextProperty"},
            {"Icon", 0x80, "SoftObjectProperty"},
            {"IsEnabled", 0xA0, "BoolProperty"},
            {"SortPriority", 0xA4, "IntProperty"},
        }};
    };

    struct SproutChatWheelCustomSubWheel
    {
        static constexpr std::string_view Name = "SproutChatWheelCustomSubWheel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutChatWheelEntryViewModel
    {
        static constexpr std::string_view Name = "SproutChatWheelEntryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x68;
            static constexpr std::uintptr_t Text = 0x70;
            static constexpr std::uintptr_t Description = 0x80;
            static constexpr std::uintptr_t Icon = 0x90;
            static constexpr std::uintptr_t RadialPositionOverride = 0xB0;
            static constexpr std::uintptr_t AssociatedItem = 0xB8;
            static constexpr std::uintptr_t ChildEntries = 0xD8;
            static constexpr std::uintptr_t Cost = 0xE8;
            static constexpr std::uintptr_t CanAfford = 0xEC;
            static constexpr std::uintptr_t CustomSubWheel = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Type", 0x68, "EnumProperty"},
            {"Text", 0x70, "TextProperty"},
            {"Description", 0x80, "TextProperty"},
            {"Icon", 0x90, "SoftObjectProperty"},
            {"RadialPositionOverride", 0xB0, "EnumProperty"},
            {"AssociatedItem", 0xB8, "SoftObjectProperty"},
            {"ChildEntries", 0xD8, "ArrayProperty"},
            {"Cost", 0xE8, "IntProperty"},
            {"CanAfford", 0xEC, "BoolProperty"},
            {"CustomSubWheel", 0x178, "ObjectProperty"},
        }};
    };

    struct SproutChatWheelViewModel
    {
        static constexpr std::string_view Name = "SproutChatWheelViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t TopLevelEntries = 0x78;
            static constexpr std::uintptr_t CurrentEntries = 0x88;
            static constexpr std::uintptr_t ParentEntry = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TopLevelEntries", 0x78, "ArrayProperty"},
            {"CurrentEntries", 0x88, "ArrayProperty"},
            {"ParentEntry", 0x98, "ObjectProperty"},
        }};
    };

    struct SproutCityFullScreenMap
    {
        static constexpr std::string_view Name = "SproutCityFullScreenMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoFullScreenMap";
        struct Offsets
        {
            static constexpr std::uintptr_t CloseScreenAction = 0x4C8;
            static constexpr std::uintptr_t Button_Back = 0x4D8;
            static constexpr std::uintptr_t Button_CloseTouch = 0x4E0;
            static constexpr std::uintptr_t Button_PlaceMarker = 0x4E8;
            static constexpr std::uintptr_t Button_ResetFocus = 0x4F0;
            static constexpr std::uintptr_t MapWidget = 0x4F8;
            static constexpr std::uintptr_t Text_EmptyList = 0x500;
            static constexpr std::uintptr_t HBox_MapPrompts = 0x508;
            static constexpr std::uintptr_t RT_Location = 0x510;
            static constexpr std::uintptr_t RT_Biome = 0x518;
            static constexpr std::uintptr_t RT_SubBiome = 0x520;
            static constexpr std::uintptr_t Image_Biome = 0x528;
            static constexpr std::uintptr_t CommonActionWidget_Zoom_Gamepad = 0x530;
            static constexpr std::uintptr_t CommonActionWidget_Pan_Gamepad = 0x538;
            static constexpr std::uintptr_t CaveIcon = 0x540;
            static constexpr std::uintptr_t ZoomMouseWheelScale = 0x5F0;
            static constexpr std::uintptr_t TouchZoomSpeed = 0x5F4;
            static constexpr std::uintptr_t GamepadZoomSpeed = 0x5F8;
            static constexpr std::uintptr_t GamepadPanSpeed = 0x5FC;
            static constexpr std::uintptr_t GamepadDeadZone = 0x600;
            static constexpr std::uintptr_t VirtualCursorMoveSpeed = 0x604;
            static constexpr std::uintptr_t VirtualCursorHoverSpeedMultiplier = 0x608;
            static constexpr std::uintptr_t VirtualCursorAccelerationTime = 0x60C;
            static constexpr std::uintptr_t bApplyHoveredIconMagnetism = 0x610;
            static constexpr std::uintptr_t bIsVirtualCursorEnabled = 0x611;
            static constexpr std::uintptr_t VirtualCursorMagnetismSpeed = 0x614;
            static constexpr std::uintptr_t VirtualCursorCurve = 0x618;
            static constexpr std::uintptr_t VirtualCursorBlockingWidgets = 0x620;
            static constexpr std::uintptr_t bCanPlaceMapPings = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"CloseScreenAction", 0x4C8, "StructProperty"},
            {"Button_Back", 0x4D8, "ObjectProperty"},
            {"Button_CloseTouch", 0x4E0, "ObjectProperty"},
            {"Button_PlaceMarker", 0x4E8, "ObjectProperty"},
            {"Button_ResetFocus", 0x4F0, "ObjectProperty"},
            {"MapWidget", 0x4F8, "ObjectProperty"},
            {"Text_EmptyList", 0x500, "ObjectProperty"},
            {"HBox_MapPrompts", 0x508, "ObjectProperty"},
            {"RT_Location", 0x510, "ObjectProperty"},
            {"RT_Biome", 0x518, "ObjectProperty"},
            {"RT_SubBiome", 0x520, "ObjectProperty"},
            {"Image_Biome", 0x528, "ObjectProperty"},
            {"CommonActionWidget_Zoom_Gamepad", 0x530, "ObjectProperty"},
            {"CommonActionWidget_Pan_Gamepad", 0x538, "ObjectProperty"},
            {"CaveIcon", 0x540, "StructProperty"},
            {"ZoomMouseWheelScale", 0x5F0, "FloatProperty"},
            {"TouchZoomSpeed", 0x5F4, "FloatProperty"},
            {"GamepadZoomSpeed", 0x5F8, "FloatProperty"},
            {"GamepadPanSpeed", 0x5FC, "FloatProperty"},
            {"GamepadDeadZone", 0x600, "FloatProperty"},
            {"VirtualCursorMoveSpeed", 0x604, "FloatProperty"},
            {"VirtualCursorHoverSpeedMultiplier", 0x608, "FloatProperty"},
            {"VirtualCursorAccelerationTime", 0x60C, "FloatProperty"},
            {"bApplyHoveredIconMagnetism", 0x610, "BoolProperty"},
            {"bIsVirtualCursorEnabled", 0x611, "BoolProperty"},
            {"VirtualCursorMagnetismSpeed", 0x614, "FloatProperty"},
            {"VirtualCursorCurve", 0x618, "ObjectProperty"},
            {"VirtualCursorBlockingWidgets", 0x620, "ArrayProperty"},
            {"bCanPlaceMapPings", 0x630, "BoolProperty"},
        }};
    };

    struct SproutCityMapViewModel
    {
        static constexpr std::string_view Name = "SproutCityMapViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMapViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t MapTexture = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MapTexture", 0x150, "SoftObjectProperty"},
        }};
    };

    struct SproutCollectionsCategoryViewModel
    {
        static constexpr std::string_view Name = "SproutCollectionsCategoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryTag = 0x78;
            static constexpr std::uintptr_t Items = 0x80;
            static constexpr std::uintptr_t DisplayName = 0x90;
            static constexpr std::uintptr_t Icon = 0xA0;
            static constexpr std::uintptr_t DetailsPanelWidget = 0xC0;
            static constexpr std::uintptr_t DiscoverMoreHint = 0xE0;
            static constexpr std::uintptr_t ShouldShowDescription = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CategoryTag", 0x78, "StructProperty"},
            {"Items", 0x80, "ArrayProperty"},
            {"DisplayName", 0x90, "TextProperty"},
            {"Icon", 0xA0, "SoftObjectProperty"},
            {"DetailsPanelWidget", 0xC0, "SoftClassProperty"},
            {"DiscoverMoreHint", 0xE0, "TextProperty"},
            {"ShouldShowDescription", 0xF0, "BoolProperty"},
        }};
    };

    struct SproutCollectionsItemViewModel
    {
        static constexpr std::string_view Name = "SproutCollectionsItemViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemID = 0x78;
            static constexpr std::uintptr_t ParentCategoryVM = 0x7C;
            static constexpr std::uintptr_t DisplayName = 0x88;
            static constexpr std::uintptr_t Icon = 0x98;
            static constexpr std::uintptr_t LargeImage = 0xB8;
            static constexpr std::uintptr_t LargeImageUnknown = 0xD8;
            static constexpr std::uintptr_t Description = 0xF8;
            static constexpr std::uintptr_t DescriptionUnknown = 0x108;
            static constexpr std::uintptr_t SourceLocations = 0x118;
            static constexpr std::uintptr_t SourceEvents = 0x138;
            static constexpr std::uintptr_t ItemSpecificTags = 0x158;
            static constexpr std::uintptr_t IsNew = 0x178;
            static constexpr std::uintptr_t Rarity = 0x179;
            static constexpr std::uintptr_t Status = 0x17A;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ItemID", 0x78, "NameProperty"},
            {"ParentCategoryVM", 0x7C, "WeakObjectProperty"},
            {"DisplayName", 0x88, "TextProperty"},
            {"Icon", 0x98, "SoftObjectProperty"},
            {"LargeImage", 0xB8, "SoftObjectProperty"},
            {"LargeImageUnknown", 0xD8, "SoftObjectProperty"},
            {"Description", 0xF8, "TextProperty"},
            {"DescriptionUnknown", 0x108, "TextProperty"},
            {"SourceLocations", 0x118, "StructProperty"},
            {"SourceEvents", 0x138, "StructProperty"},
            {"ItemSpecificTags", 0x158, "StructProperty"},
            {"IsNew", 0x178, "BoolProperty"},
            {"Rarity", 0x179, "EnumProperty"},
            {"Status", 0x17A, "EnumProperty"},
        }};
    };

    struct SproutCollectionsViewModel
    {
        static constexpr std::string_view Name = "SproutCollectionsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Categories = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Categories", 0x78, "ArrayProperty"},
        }};
    };

    struct SproutContactsAppViewModel
    {
        static constexpr std::string_view Name = "SproutContactsAppViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutAppViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Players = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Players", 0x168, "ArrayProperty"},
        }};
    };

    struct SproutCurrentNeighborhoodInfoViewModel
    {
        static constexpr std::string_view Name = "SproutCurrentNeighborhoodInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Members = 0x78;
            static constexpr std::uintptr_t bVMInititialized = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Members", 0x78, "ArrayProperty"},
            {"bVMInititialized", 0x88, "BoolProperty"},
        }};
    };

    struct SproutDynamicUIDirectorComponent_Menu
    {
        static constexpr std::string_view Name = "SproutDynamicUIDirectorComponent_Menu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoDynamicUIDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TaggedWidgetSceneData = 0xC8;
            static constexpr std::uintptr_t HudLayoutScenes = 0xD0;
            static constexpr std::uintptr_t WidgetPoolInitData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TaggedWidgetSceneData", 0xC8, "ObjectProperty"},
            {"HudLayoutScenes", 0xD0, "MapProperty"},
            {"WidgetPoolInitData", 0xE0, "ArrayProperty"},
        }};
    };

    struct SproutGameStateComponent_SmartObjectUIData
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_SmartObjectUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoGameStateComponent_UIDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectUICategoryDataRegistryType = 0xF0;
            static constexpr std::uintptr_t SmartObjectUIVariationDataRegistryType = 0xF4;
            static constexpr std::uintptr_t SmartObjectUITraitDataRegistryType = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SmartObjectUICategoryDataRegistryType", 0xF0, "StructProperty"},
            {"SmartObjectUIVariationDataRegistryType", 0xF4, "StructProperty"},
            {"SmartObjectUITraitDataRegistryType", 0xF8, "StructProperty"},
        }};
    };

    struct SproutGameStateComponent_UIData
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_UIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoGameStateComponent_UIDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AppDataRegistryType = 0xF0;
            static constexpr std::uintptr_t HousingDataRegistryType = 0xF4;
            static constexpr std::uintptr_t JobInfoUIDataRegistryType = 0xF8;
            static constexpr std::uintptr_t PoseEmoteDataRegistryType = 0xFC;
            static constexpr std::uintptr_t PoseEmoteCategoryDataRegistryType = 0x100;
            static constexpr std::uintptr_t ReactionDataRegistryType = 0x104;
            static constexpr std::uintptr_t ReactionGroupDataRegistryType = 0x108;
            static constexpr std::uintptr_t MailSenderDataRegisteryType = 0x10C;
            static constexpr std::uintptr_t BountyBoardCategoryDataRegistryType = 0x110;
            static constexpr std::uintptr_t ShoppingCategoryUIData = 0x118;
            static constexpr std::uintptr_t CurrencyDataRegistryType = 0x120;
            static constexpr std::uintptr_t CollectionsCategoryRegistryType = 0x124;
            static constexpr std::uintptr_t CollectionsItemRegistryType = 0x128;
            static constexpr std::uintptr_t ChatWheelRegistryType = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"AppDataRegistryType", 0xF0, "StructProperty"},
            {"HousingDataRegistryType", 0xF4, "StructProperty"},
            {"JobInfoUIDataRegistryType", 0xF8, "StructProperty"},
            {"PoseEmoteDataRegistryType", 0xFC, "StructProperty"},
            {"PoseEmoteCategoryDataRegistryType", 0x100, "StructProperty"},
            {"ReactionDataRegistryType", 0x104, "StructProperty"},
            {"ReactionGroupDataRegistryType", 0x108, "StructProperty"},
            {"MailSenderDataRegisteryType", 0x10C, "StructProperty"},
            {"BountyBoardCategoryDataRegistryType", 0x110, "StructProperty"},
            {"ShoppingCategoryUIData", 0x118, "ObjectProperty"},
            {"CurrencyDataRegistryType", 0x120, "StructProperty"},
            {"CollectionsCategoryRegistryType", 0x124, "StructProperty"},
            {"CollectionsItemRegistryType", 0x128, "StructProperty"},
            {"ChatWheelRegistryType", 0x12C, "StructProperty"},
        }};
    };

    struct SproutHUDWidgetBehaviorCondition_HasUnseenNotifications
    {
        static constexpr std::string_view Name = "SproutHUDWidgetBehaviorCondition_HasUnseenNotifications";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HUDWidgetBehaviorConditionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetBehavior = 0x28;
            static constexpr std::uintptr_t bInverseCondition = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WidgetBehavior", 0x28, "ObjectProperty"},
            {"bInverseCondition", 0x40, "BoolProperty"},
        }};
    };

    struct SproutHousingInfoViewModel
    {
        static constexpr std::string_view Name = "SproutHousingInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutInfoViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GridListItemType = 0xE8;
            static constexpr std::uintptr_t HousingLotTags = 0xF0;
            static constexpr std::uintptr_t HousingShellRow = 0x110;
            static constexpr std::uintptr_t bIsSanctioned = 0x160;
            static constexpr std::uintptr_t HousingSaveID = 0x164;
            static constexpr std::uintptr_t HousingShellPrimaryAssetId = 0x174;
            static constexpr std::uintptr_t IsEnabledForLot = 0x17C;
            static constexpr std::uintptr_t HousingGameplayVolume = 0x180;
            static constexpr std::uintptr_t HousingReactionsViewModel = 0x188;
            static constexpr std::uintptr_t FilterMode = 0x190;
            static constexpr std::uintptr_t CurrentlyBuilt = 0x194;
            static constexpr std::uintptr_t IsCurrentHouse = 0x195;
            static constexpr std::uintptr_t DecorCount = 0x198;
            static constexpr std::uintptr_t PlayersWithPermissionToEdit = 0x1A0;
            static constexpr std::uintptr_t ListOfPlayersToOfferPermission = 0x1B0;
            static constexpr std::uintptr_t bEveryoneHasPermissionToEdit = 0x1C0;
            static constexpr std::uintptr_t bNeighborsHavePermissionToEdit = 0x1C1;
            static constexpr std::uintptr_t bPartiesHavePermissionToEdit = 0x1C2;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"GridListItemType", 0xE8, "NameProperty"},
            {"HousingLotTags", 0xF0, "StructProperty"},
            {"HousingShellRow", 0x110, "StructProperty"},
            {"bIsSanctioned", 0x160, "BoolProperty"},
            {"HousingSaveID", 0x164, "StructProperty"},
            {"HousingShellPrimaryAssetId", 0x174, "StructProperty"},
            {"IsEnabledForLot", 0x17C, "BoolProperty"},
            {"HousingGameplayVolume", 0x180, "WeakObjectProperty"},
            {"HousingReactionsViewModel", 0x188, "ObjectProperty"},
            {"FilterMode", 0x190, "StructProperty"},
            {"CurrentlyBuilt", 0x194, "BoolProperty"},
            {"IsCurrentHouse", 0x195, "BoolProperty"},
            {"DecorCount", 0x198, "IntProperty"},
            {"PlayersWithPermissionToEdit", 0x1A0, "ArrayProperty"},
            {"ListOfPlayersToOfferPermission", 0x1B0, "ArrayProperty"},
            {"bEveryoneHasPermissionToEdit", 0x1C0, "BoolProperty"},
            {"bNeighborsHavePermissionToEdit", 0x1C1, "BoolProperty"},
            {"bPartiesHavePermissionToEdit", 0x1C2, "BoolProperty"},
        }};
    };

    struct SproutInfoViewModelBase
    {
        static constexpr std::string_view Name = "SproutInfoViewModelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0x78;
            static constexpr std::uintptr_t ShouldShowCost = 0x98;
            static constexpr std::uintptr_t Cost = 0x9C;
            static constexpr std::uintptr_t DisplayName = 0xA0;
            static constexpr std::uintptr_t PreviewImage = 0xB0;
            static constexpr std::uintptr_t IsUnlocked = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ItemDefinition", 0x78, "SoftObjectProperty"},
            {"ShouldShowCost", 0x98, "BoolProperty"},
            {"Cost", 0x9C, "IntProperty"},
            {"DisplayName", 0xA0, "TextProperty"},
            {"PreviewImage", 0xB0, "SoftObjectProperty"},
            {"IsUnlocked", 0xD0, "BoolProperty"},
        }};
    };

    struct SproutInteractionInfoMonitorConversation
    {
        static constexpr std::string_view Name = "SproutInteractionInfoMonitorConversation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInteractionInfoMonitorConversation";
        struct Offsets
        {
            static constexpr std::uintptr_t SproutInteractionInfoViewModel = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SproutInteractionInfoViewModel", 0x80, "ObjectProperty"},
        }};
    };

    struct SproutInteractionInfoMonitorPrimary
    {
        static constexpr std::string_view Name = "SproutInteractionInfoMonitorPrimary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInteractionInfoMonitorPrimary";
        struct Offsets
        {
            static constexpr std::uintptr_t SproutInteractionInfoViewModel = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SproutInteractionInfoViewModel", 0x58, "ObjectProperty"},
        }};
    };

    struct SproutInteractionInfoViewModel
    {
        static constexpr std::string_view Name = "SproutInteractionInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInteractionInfoViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PurchaseInteractionInfo = 0xC0;
            static constexpr std::uintptr_t JobIcon = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PurchaseInteractionInfo", 0xC0, "StructProperty"},
            {"JobIcon", 0x100, "SoftObjectProperty"},
        }};
    };

    struct SproutJobInfoViewModel
    {
        static constexpr std::string_view Name = "SproutJobInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t JobTag = 0x78;
            static constexpr std::uintptr_t JobName = 0x80;
            static constexpr std::uintptr_t JobIcon = 0x90;
            static constexpr std::uintptr_t JobDesc = 0xB0;
            static constexpr std::uintptr_t bShowTaskGrantingUI = 0xC0;
            static constexpr std::uintptr_t JobSortingPriority = 0xC4;
            static constexpr std::uintptr_t KeepWorkingTextOverride = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"JobTag", 0x78, "StructProperty"},
            {"JobName", 0x80, "TextProperty"},
            {"JobIcon", 0x90, "SoftObjectProperty"},
            {"JobDesc", 0xB0, "TextProperty"},
            {"bShowTaskGrantingUI", 0xC0, "BoolProperty"},
            {"JobSortingPriority", 0xC4, "IntProperty"},
            {"KeepWorkingTextOverride", 0xC8, "TextProperty"},
        }};
    };

    struct SproutJobLevelRewardInfoViewModel
    {
        static constexpr std::string_view Name = "SproutJobLevelRewardInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t JobTag = 0x68;
            static constexpr std::uintptr_t JobLevel = 0x6C;
            static constexpr std::uintptr_t JobTitle = 0x70;
            static constexpr std::uintptr_t RewardLootBundleTags = 0x80;
            static constexpr std::uintptr_t LootBundle = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"JobTag", 0x68, "StructProperty"},
            {"JobLevel", 0x6C, "IntProperty"},
            {"JobTitle", 0x70, "TextProperty"},
            {"RewardLootBundleTags", 0x80, "StructProperty"},
            {"LootBundle", 0xA0, "StructProperty"},
        }};
    };

    struct SproutMailInfoViewModel
    {
        static constexpr std::string_view Name = "SproutMailInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryOverflowComponent = 0x80;
            static constexpr std::uintptr_t OverflowEntry = 0x88;
            static constexpr std::uintptr_t SenderDisplayName = 0xC8;
            static constexpr std::uintptr_t CachedSubjectMessage = 0xD8;
            static constexpr std::uintptr_t CachedBodyMessage = 0xE8;
            static constexpr std::uintptr_t SenderPreviewImage = 0xF8;
            static constexpr std::uintptr_t AssetDisplayName = 0x118;
            static constexpr std::uintptr_t AssetPreviewImage = 0x128;
            static constexpr std::uintptr_t SenderAssembledMeshSchema = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"InventoryOverflowComponent", 0x80, "WeakObjectProperty"},
            {"OverflowEntry", 0x88, "StructProperty"},
            {"SenderDisplayName", 0xC8, "TextProperty"},
            {"CachedSubjectMessage", 0xD8, "TextProperty"},
            {"CachedBodyMessage", 0xE8, "TextProperty"},
            {"SenderPreviewImage", 0xF8, "SoftObjectProperty"},
            {"AssetDisplayName", 0x118, "TextProperty"},
            {"AssetPreviewImage", 0x128, "SoftObjectProperty"},
            {"SenderAssembledMeshSchema", 0x148, "SoftObjectProperty"},
        }};
    };

    struct SproutMapLegendWidget
    {
        static constexpr std::string_view Name = "SproutMapLegendWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMapLegendWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_TeamPlayers = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntryBox_TeamPlayers", 0x330, "ObjectProperty"},
        }};
    };

    struct SproutNeighborhoodsBrowserViewModel
    {
        static constexpr std::string_view Name = "SproutNeighborhoodsBrowserViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t HomeNeighborhood = 0x78;
            static constexpr std::uintptr_t FavoriteNeighborhoods = 0x88;
            static constexpr std::uintptr_t InvitedToJoinNeighborhoods = 0x98;
            static constexpr std::uintptr_t InvitedToVisitNeighborhoods = 0xA8;
            static constexpr std::uintptr_t RecentlyVisitedNeighborhoods = 0xB8;
            static constexpr std::uintptr_t HeardAboutNeighborhoods = 0xC8;
            static constexpr std::uintptr_t MatchmakingNeighborhoods = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"HomeNeighborhood", 0x78, "ArrayProperty"},
            {"FavoriteNeighborhoods", 0x88, "ArrayProperty"},
            {"InvitedToJoinNeighborhoods", 0x98, "ArrayProperty"},
            {"InvitedToVisitNeighborhoods", 0xA8, "ArrayProperty"},
            {"RecentlyVisitedNeighborhoods", 0xB8, "ArrayProperty"},
            {"HeardAboutNeighborhoods", 0xC8, "ArrayProperty"},
            {"MatchmakingNeighborhoods", 0xD8, "ArrayProperty"},
        }};
    };

    struct SproutNotificationsViewModel
    {
        static constexpr std::string_view Name = "SproutNotificationsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveNotification = 0x78;
            static constexpr std::uintptr_t RecentNotifications = 0x80;
            static constexpr std::uintptr_t NotificationHistory = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActiveNotification", 0x78, "ObjectProperty"},
            {"RecentNotifications", 0x80, "ArrayProperty"},
            {"NotificationHistory", 0x90, "ArrayProperty"},
        }};
    };

    struct SproutOnlinePollVoteViewModel
    {
        static constexpr std::string_view Name = "SproutOnlinePollVoteViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PollName = 0x78;
            static constexpr std::uintptr_t VoteName = 0x7C;
            static constexpr std::uintptr_t VoteTotal = 0x80;
            static constexpr std::uintptr_t VoteRank = 0x88;
            static constexpr std::uintptr_t bIsInTie = 0x8C;
            static constexpr std::uintptr_t bIsVotingAvailable = 0x8D;
            static constexpr std::uintptr_t DisplayName = 0x90;
            static constexpr std::uintptr_t WinString = 0xA0;
            static constexpr std::uintptr_t DisplayColor = 0xB0;
            static constexpr std::uintptr_t DisplayIcon = 0xB8;
            static constexpr std::uintptr_t PollUIData = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PollName", 0x78, "StructProperty"},
            {"VoteName", 0x7C, "StructProperty"},
            {"VoteTotal", 0x80, "Int64Property"},
            {"VoteRank", 0x88, "IntProperty"},
            {"bIsInTie", 0x8C, "BoolProperty"},
            {"bIsVotingAvailable", 0x8D, "BoolProperty"},
            {"DisplayName", 0x90, "TextProperty"},
            {"WinString", 0xA0, "TextProperty"},
            {"DisplayColor", 0xB0, "StructProperty"},
            {"DisplayIcon", 0xB8, "SoftObjectProperty"},
            {"PollUIData", 0xD8, "StructProperty"},
        }};
    };

    struct SproutPhoneViewModel
    {
        static constexpr std::string_view Name = "SproutPhoneViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t AppViewModels = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AppViewModels", 0x78, "ArrayProperty"},
        }};
    };

    struct SproutPhoneWidget
    {
        static constexpr std::string_view Name = "SproutPhoneWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CloseAction = 0x4A0;
            static constexpr std::uintptr_t BackAction = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CloseAction", 0x4A0, "StructProperty"},
            {"BackAction", 0x4B0, "StructProperty"},
        }};
    };

    struct SproutPlayerBountyBoardViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerBountyBoardViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t BountiesFiltered = 0x98;
            static constexpr std::uintptr_t BountyPinned = 0xA8;
            static constexpr std::uintptr_t Categories = 0xB0;
            static constexpr std::uintptr_t NumClaimableBounties = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BountiesFiltered", 0x98, "ArrayProperty"},
            {"BountyPinned", 0xA8, "WeakObjectProperty"},
            {"Categories", 0xB0, "ObjectProperty"},
            {"NumClaimableBounties", 0xBC, "IntProperty"},
        }};
    };

    struct SproutPlayerChatBubbleMessageViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerChatBubbleMessageViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTextChatMessageVM";
        struct Offsets
        {
            static constexpr std::uintptr_t IsWhisper = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IsWhisper", 0x1B0, "BoolProperty"},
        }};
    };

    struct SproutPlayerChatBubbleViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerChatBubbleViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTextChatPlayerBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPlayerState = 0x80;
            static constexpr std::uintptr_t Messages = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetPlayerState", 0x80, "WeakObjectProperty"},
            {"Messages", 0x88, "ArrayProperty"},
        }};
    };

    struct SproutPlayerCurrenciesViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerCurrenciesViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Currencies = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Currencies", 0x78, "ArrayProperty"},
        }};
    };

    struct SproutPlayerCurrencyViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerCurrencyViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrencyItemDefinition = 0x80;
            static constexpr std::uintptr_t CurrentBalance = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrencyItemDefinition", 0x80, "SoftObjectProperty"},
            {"CurrentBalance", 0xA0, "IntProperty"},
        }};
    };

    struct SproutPlayerHousingViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerHousingViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x78;
            static constexpr std::uintptr_t HousingLotTags = 0x80;
            static constexpr std::uintptr_t PlayerHousingFilter = 0xA0;
            static constexpr std::uintptr_t PlayerHouses = 0xC0;
            static constexpr std::uintptr_t PlayerHousesFiltered = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Mode", 0x78, "StructProperty"},
            {"HousingLotTags", 0x80, "StructProperty"},
            {"PlayerHousingFilter", 0xA0, "StructProperty"},
            {"PlayerHouses", 0xC0, "ArrayProperty"},
            {"PlayerHousesFiltered", 0xD0, "ArrayProperty"},
        }};
    };

    struct SproutPlayerInfoViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerAvatarVM = 0xB8;
            static constexpr std::uintptr_t PlayerJobVM = 0xC0;
            static constexpr std::uintptr_t PlayerNeighborhoodVM = 0xC8;
            static constexpr std::uintptr_t PlayerRoommateVM = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerAvatarVM", 0xB8, "ObjectProperty"},
            {"PlayerJobVM", 0xC0, "ObjectProperty"},
            {"PlayerNeighborhoodVM", 0xC8, "ObjectProperty"},
            {"PlayerRoommateVM", 0xD0, "ObjectProperty"},
        }};
    };

    struct SproutPlayerJobViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerJobViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJobLevelChanged = 0x78;
            static constexpr std::uintptr_t TargetPlayerState = 0x88;
            static constexpr std::uintptr_t TargetJobTag = 0x90;
            static constexpr std::uintptr_t TargetJobInfoViewModel = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnJobLevelChanged", 0x78, "MulticastInlineDelegateProperty"},
            {"TargetPlayerState", 0x88, "WeakObjectProperty"},
            {"TargetJobTag", 0x90, "StructProperty"},
            {"TargetJobInfoViewModel", 0x98, "ObjectProperty"},
        }};
    };

    struct SproutPlayerJobsViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerJobsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPlayerState = 0x78;
            static constexpr std::uintptr_t PlayerJobs = 0x80;
            static constexpr std::uintptr_t PlayerCareers = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetPlayerState", 0x78, "WeakObjectProperty"},
            {"PlayerJobs", 0x80, "ArrayProperty"},
            {"PlayerCareers", 0x90, "ArrayProperty"},
        }};
    };

    struct SproutPlayerMailViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerMailViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDestroyDenied = 0x78;
            static constexpr std::uintptr_t OnClaimEntryAttachmentDenied = 0x88;
            static constexpr std::uintptr_t InventoryOverflowComponent = 0x98;
            static constexpr std::uintptr_t PlayerMail = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnDestroyDenied", 0x78, "MulticastInlineDelegateProperty"},
            {"OnClaimEntryAttachmentDenied", 0x88, "MulticastInlineDelegateProperty"},
            {"InventoryOverflowComponent", 0x98, "WeakObjectProperty"},
            {"PlayerMail", 0xA0, "ArrayProperty"},
        }};
    };

    struct SproutPlayerNeighborhoodViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerNeighborhoodViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPlayerState = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetPlayerState", 0x78, "WeakObjectProperty"},
        }};
    };

    struct SproutPlayerRoommateViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerRoommateViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPlayerId = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetPlayerId", 0x78, "StructProperty"},
        }};
    };

    struct SproutPlayerSessionDataViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerSessionDataViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousApp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreviousApp", 0x78, "StructProperty"},
        }};
    };

    struct SproutPlayerShoppingViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerShoppingViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x78;
            static constexpr std::uintptr_t Filter = 0x80;
            static constexpr std::uintptr_t PlayerShoppingItems = 0xA0;
            static constexpr std::uintptr_t PlayerInventoryViewModel = 0xB0;
            static constexpr std::uintptr_t PlayerInventorySlotViewModels = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Mode", 0x78, "StructProperty"},
            {"Filter", 0x80, "StructProperty"},
            {"PlayerShoppingItems", 0xA0, "ArrayProperty"},
            {"PlayerInventoryViewModel", 0xB0, "ObjectProperty"},
            {"PlayerInventorySlotViewModels", 0xB8, "ArrayProperty"},
        }};
    };

    struct SproutPlayerStateComponent_QuestViewModelManager
    {
        static constexpr std::string_view Name = "SproutPlayerStateComponent_QuestViewModelManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct SproutPlayerVehiclesViewModel
    {
        static constexpr std::string_view Name = "SproutPlayerVehiclesViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerVehiclesFilter = 0x78;
            static constexpr std::uintptr_t PlayerVehicles = 0x80;
            static constexpr std::uintptr_t PlayerVehiclesFiltered = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PlayerVehiclesFilter", 0x78, "EnumProperty"},
            {"PlayerVehicles", 0x80, "ArrayProperty"},
            {"PlayerVehiclesFiltered", 0x90, "ArrayProperty"},
        }};
    };

    struct SproutPosePicker
    {
        static constexpr std::string_view Name = "SproutPosePicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TabList_PoseCategories = 0x4B0;
            static constexpr std::uintptr_t PickerOverlay_Poses = 0x4B8;
            static constexpr std::uintptr_t DefaultEmoteCategoryTag = 0x4C0;
            static constexpr std::uintptr_t bDisplayRegisteredEmoteCategories = 0x4C4;
            static constexpr std::uintptr_t EmoteCategoryTabButtonType = 0x4C8;
            static constexpr std::uintptr_t ExternalEmotes = 0x4D0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TabList_PoseCategories", 0x4B0, "ObjectProperty"},
            {"PickerOverlay_Poses", 0x4B8, "ObjectProperty"},
            {"DefaultEmoteCategoryTag", 0x4C0, "StructProperty"},
            {"bDisplayRegisteredEmoteCategories", 0x4C4, "BoolProperty"},
            {"EmoteCategoryTabButtonType", 0x4C8, "ClassProperty"},
            {"ExternalEmotes", 0x4D0, "ArrayProperty"},
        }};
    };

    struct SproutReactionInfoViewModel
    {
        static constexpr std::string_view Name = "SproutReactionInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRequestToggleReaction = 0x78;
            static constexpr std::uintptr_t ReactionType = 0x88;
            static constexpr std::uintptr_t ReactionCount = 0x8C;
            static constexpr std::uintptr_t IsCurrentReaction = 0x90;
            static constexpr std::uintptr_t ReactionImage = 0x98;
            static constexpr std::uintptr_t ReactionSound = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnRequestToggleReaction", 0x78, "MulticastInlineDelegateProperty"},
            {"ReactionType", 0x88, "StructProperty"},
            {"ReactionCount", 0x8C, "IntProperty"},
            {"IsCurrentReaction", 0x90, "BoolProperty"},
            {"ReactionImage", 0x98, "SoftObjectProperty"},
            {"ReactionSound", 0xB8, "SoftObjectProperty"},
        }};
    };

    struct SproutReactionsViewModel
    {
        static constexpr std::string_view Name = "SproutReactionsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRequestToggleReaction = 0x78;
            static constexpr std::uintptr_t ReactionGroupType = 0x88;
            static constexpr std::uintptr_t Reactions = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnRequestToggleReaction", 0x78, "MulticastInlineDelegateProperty"},
            {"ReactionGroupType", 0x88, "StructProperty"},
            {"Reactions", 0x90, "ArrayProperty"},
        }};
    };

    struct SproutShoppingCategoriesViewModel
    {
        static constexpr std::string_view Name = "SproutShoppingCategoriesViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Categories = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Categories", 0x78, "ArrayProperty"},
        }};
    };

    struct SproutShoppingCategoryViewModel
    {
        static constexpr std::string_view Name = "SproutShoppingCategoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryEntry = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CategoryEntry", 0x78, "StructProperty"},
        }};
    };

    struct SproutShoppingItemInfoViewModel
    {
        static constexpr std::string_view Name = "SproutShoppingItemInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutInfoViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GridListItemType = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GridListItemType", 0xE8, "NameProperty"},
        }};
    };

    struct SproutSingleNeighborhoodBrowserViewModel
    {
        static constexpr std::string_view Name = "SproutSingleNeighborhoodBrowserViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t NeighborhoodId = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NeighborhoodId", 0x78, "StructProperty"},
        }};
    };

    struct SproutSingleNotificationViewModel
    {
        static constexpr std::string_view Name = "SproutSingleNotificationViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Timestamp = 0x78;
            static constexpr std::uintptr_t MessageId = 0x80;
            static constexpr std::uintptr_t HasBeenViewed = 0x88;
            static constexpr std::uintptr_t NotificationTableRow = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Timestamp", 0x78, "StructProperty"},
            {"MessageId", 0x80, "StructProperty"},
            {"HasBeenViewed", 0x88, "BoolProperty"},
            {"NotificationTableRow", 0x90, "StructProperty"},
        }};
    };

    struct SproutUICheatManager
    {
        static constexpr std::string_view Name = "SproutUICheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutUIDirectorComponent_SmartObjectUI
    {
        static constexpr std::string_view Name = "SproutUIDirectorComponent_SmartObjectUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoDynamicUIDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TaggedWidgetSceneData = 0xC8;
            static constexpr std::uintptr_t HudLayoutScenes = 0xD0;
            static constexpr std::uintptr_t WidgetPoolInitData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TaggedWidgetSceneData", 0xC8, "ObjectProperty"},
            {"HudLayoutScenes", 0xD0, "MapProperty"},
            {"WidgetPoolInitData", 0xE0, "ArrayProperty"},
        }};
    };

    struct SproutUIFunctionLibrary
    {
        static constexpr std::string_view Name = "SproutUIFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutUISelectionMemory
    {
        static constexpr std::string_view Name = "SproutUISelectionMemory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocalPlayerSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutVehicleInfoViewModel
    {
        static constexpr std::string_view Name = "SproutVehicleInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutInfoViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GridListItemType = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GridListItemType", 0xE8, "NameProperty"},
        }};
    };

}
