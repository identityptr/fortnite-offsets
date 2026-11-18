#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoGameUI
{
    struct GameStateComponent_JunoFeedback
    {
        static constexpr std::string_view Name = "GameStateComponent_JunoFeedback";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent_PlayerFeedback";
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

    struct GridListDataInterface
    {
        static constexpr std::string_view Name = "GridListDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GridListView
    {
        static constexpr std::string_view Name = "GridListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonTileView";
        struct Offsets
        {
            static constexpr std::uintptr_t GridListViewInfo = 0x1010;
            static constexpr std::uintptr_t bAlwaysShowScrollbar = 0x1020;
            static constexpr std::uintptr_t bAlwaysShowScrollbarTrack = 0x1021;
            static constexpr std::uintptr_t ScrollbarThickness = 0x1028;
            static constexpr std::uintptr_t GeneratedGridListSlotInfo = 0x1038;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GridListViewInfo", 0x1010, "ArrayProperty"},
            {"bAlwaysShowScrollbar", 0x1020, "BoolProperty"},
            {"bAlwaysShowScrollbarTrack", 0x1021, "BoolProperty"},
            {"ScrollbarThickness", 0x1028, "StructProperty"},
            {"GeneratedGridListSlotInfo", 0x1038, "StructProperty"},
        }};
    };

    struct JunoActivatableWidget
    {
        static constexpr std::string_view Name = "JunoActivatableWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentInputType = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentInputType", 0x4A0, "EnumProperty"},
        }};
    };

    struct JunoActorIndicatorWidget
    {
        static constexpr std::string_view Name = "JunoActorIndicatorWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CloseScaleDistance = 0x4D0;
            static constexpr std::uintptr_t DistantScaleDistance = 0x4F8;
            static constexpr std::uintptr_t DistantIndicatorScale = 0x520;
            static constexpr std::uintptr_t CloseIndicatorScale = 0x530;
            static constexpr std::uintptr_t MobileDistantIndicatorScale = 0x540;
            static constexpr std::uintptr_t MobileCloseIndicatorScale = 0x550;
            static constexpr std::uintptr_t bUseDistanceScale = 0x570;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CloseScaleDistance", 0x4D0, "StructProperty"},
            {"DistantScaleDistance", 0x4F8, "StructProperty"},
            {"DistantIndicatorScale", 0x520, "StructProperty"},
            {"CloseIndicatorScale", 0x530, "StructProperty"},
            {"MobileDistantIndicatorScale", 0x540, "StructProperty"},
            {"MobileCloseIndicatorScale", 0x550, "StructProperty"},
            {"bUseDistanceScale", 0x570, "BoolProperty"},
        }};
    };

    struct JunoActorInventoryViewModel
    {
        static constexpr std::string_view Name = "JunoActorInventoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryGroups = 0x90;
            static constexpr std::uintptr_t NonEmptyInventorySlots = 0xA0;
            static constexpr std::uintptr_t WeakInventoryActor = 0xB0;
            static constexpr std::uintptr_t TypeListViewModel = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InventoryGroups", 0x90, "MapProperty"},
            {"NonEmptyInventorySlots", 0xA0, "SetProperty"},
            {"WeakInventoryActor", 0xB0, "WeakObjectProperty"},
            {"TypeListViewModel", 0xB8, "ObjectProperty"},
        }};
    };

    struct JunoAdjustableInventorySlot
    {
        static constexpr std::string_view Name = "JunoAdjustableInventorySlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_Increase = 0x368;
            static constexpr std::uintptr_t Button_Decrease = 0x370;
            static constexpr std::uintptr_t Container_InventorySlot = 0x378;
            static constexpr std::uintptr_t IncreaseAction = 0x380;
            static constexpr std::uintptr_t DecreaseAction = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Button_Increase", 0x368, "ObjectProperty"},
            {"Button_Decrease", 0x370, "ObjectProperty"},
            {"Container_InventorySlot", 0x378, "ObjectProperty"},
            {"IncreaseAction", 0x380, "StructProperty"},
            {"DecreaseAction", 0x390, "StructProperty"},
        }};
    };

    struct JunoAnimatedProgressBar
    {
        static constexpr std::string_view Name = "JunoAnimatedProgressBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ProgressMaterialBrush = 0x330;
            static constexpr std::uintptr_t FillEndParamName = 0x3E0;
            static constexpr std::uintptr_t FillStartParamName = 0x3E4;
            static constexpr std::uintptr_t FillPercentParamName = 0x3E8;
            static constexpr std::uintptr_t DeltaStartParamName = 0x3EC;
            static constexpr std::uintptr_t DeltaEndParamName = 0x3F0;
            static constexpr std::uintptr_t DeltaPercentParamName = 0x3F4;
            static constexpr std::uintptr_t Image_ProgressBar = 0x3F8;
            static constexpr std::uintptr_t CachedMID = 0x400;
            static constexpr std::uintptr_t BoundAnim_FillBar = 0x408;
            static constexpr std::uintptr_t BoundAnim_DeltaBar = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ProgressMaterialBrush", 0x330, "StructProperty"},
            {"FillEndParamName", 0x3E0, "NameProperty"},
            {"FillStartParamName", 0x3E4, "NameProperty"},
            {"FillPercentParamName", 0x3E8, "NameProperty"},
            {"DeltaStartParamName", 0x3EC, "NameProperty"},
            {"DeltaEndParamName", 0x3F0, "NameProperty"},
            {"DeltaPercentParamName", 0x3F4, "NameProperty"},
            {"Image_ProgressBar", 0x3F8, "ObjectProperty"},
            {"CachedMID", 0x400, "ObjectProperty"},
            {"BoundAnim_FillBar", 0x408, "ObjectProperty"},
            {"BoundAnim_DeltaBar", 0x410, "ObjectProperty"},
        }};
    };

    struct JunoAnnouncementBaseViewModel
    {
        static constexpr std::string_view Name = "JunoAnnouncementBaseViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AnnouncementType = 0x68;
            static constexpr std::uintptr_t Header = 0x70;
            static constexpr std::uintptr_t PrimaryText = 0x80;
            static constexpr std::uintptr_t SecondaryText = 0x90;
            static constexpr std::uintptr_t ItemDefinition = 0xA0;
            static constexpr std::uintptr_t Count = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AnnouncementType", 0x68, "EnumProperty"},
            {"Header", 0x70, "TextProperty"},
            {"PrimaryText", 0x80, "TextProperty"},
            {"SecondaryText", 0x90, "TextProperty"},
            {"ItemDefinition", 0xA0, "ObjectProperty"},
            {"Count", 0xA8, "IntProperty"},
        }};
    };

    struct JunoAnnouncementBiomeViewModel
    {
        static constexpr std::string_view Name = "JunoAnnouncementBiomeViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAnnouncementBaseViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t AnnouncementType = 0x68;
            static constexpr std::uintptr_t Header = 0x70;
            static constexpr std::uintptr_t PrimaryText = 0x80;
            static constexpr std::uintptr_t SecondaryText = 0x90;
            static constexpr std::uintptr_t ItemDefinition = 0xA0;
            static constexpr std::uintptr_t Count = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AnnouncementType", 0x68, "EnumProperty"},
            {"Header", 0x70, "TextProperty"},
            {"PrimaryText", 0x80, "TextProperty"},
            {"SecondaryText", 0x90, "TextProperty"},
            {"ItemDefinition", 0xA0, "ObjectProperty"},
            {"Count", 0xA8, "IntProperty"},
        }};
    };

    struct JunoAnnouncementQueueViewModel
    {
        static constexpr std::string_view Name = "JunoAnnouncementQueueViewModel";
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

    struct JunoAnnouncementQueueViewModelBase
    {
        static constexpr std::string_view Name = "JunoAnnouncementQueueViewModelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
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

    struct JunoBangWidget
    {
        static constexpr std::string_view Name = "JunoBangWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BangType = 0x308;
            static constexpr std::uintptr_t bCleanupBangWidgetWhenHidden = 0x309;
            static constexpr std::uintptr_t CurrentBangContainer = 0x310;
            static constexpr std::uintptr_t NamedSlot_BangWidgetContainer = 0x338;
            static constexpr std::uintptr_t CurrentBangClass = 0x340;
            static constexpr std::uintptr_t BangContainerClassMap = 0x348;
            static constexpr std::uintptr_t UnacquiredContainerClass = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BangType", 0x308, "EnumProperty"},
            {"bCleanupBangWidgetWhenHidden", 0x309, "BoolProperty"},
            {"CurrentBangContainer", 0x310, "ObjectProperty"},
            {"NamedSlot_BangWidgetContainer", 0x338, "ObjectProperty"},
            {"CurrentBangClass", 0x340, "ClassProperty"},
            {"BangContainerClassMap", 0x348, "MapProperty"},
            {"UnacquiredContainerClass", 0x358, "ClassProperty"},
        }};
    };

    struct JunoBaseIndicatorLayerManagerWidget
    {
        static constexpr std::string_view Name = "JunoBaseIndicatorLayerManagerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneralIndicators = 0x378;
            static constexpr std::uintptr_t LocalPlayerViewModel = 0x380;
            static constexpr std::uintptr_t ShowIndicatorForLocalPlayer = 0x388;
            static constexpr std::uintptr_t IndicatorPool = 0x390;
            static constexpr std::uintptr_t PlayerIndicatorPoolSize = 0x3D8;
            static constexpr std::uintptr_t PlayerIndicatorClass = 0x3E0;
            static constexpr std::uintptr_t PlayerIndicators = 0x3E8;
            static constexpr std::uintptr_t MinimumInFocusRadius = 0x3F0;
            static constexpr std::uintptr_t IndicatorClasses = 0x3F8;
            static constexpr std::uintptr_t LimitedCustomIndicators = 0x428;
            static constexpr std::uintptr_t LimitedCustomIndicatorsMap = 0x438;
            static constexpr std::uintptr_t BuildingHealthDisplayDuration = 0x450;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"GeneralIndicators", 0x378, "ObjectProperty"},
            {"LocalPlayerViewModel", 0x380, "ObjectProperty"},
            {"ShowIndicatorForLocalPlayer", 0x388, "BoolProperty"},
            {"IndicatorPool", 0x390, "StructProperty"},
            {"PlayerIndicatorPoolSize", 0x3D8, "IntProperty"},
            {"PlayerIndicatorClass", 0x3E0, "ClassProperty"},
            {"PlayerIndicators", 0x3E8, "ObjectProperty"},
            {"MinimumInFocusRadius", 0x3F0, "FloatProperty"},
            {"IndicatorClasses", 0x3F8, "MapProperty"},
            {"LimitedCustomIndicators", 0x428, "ArrayProperty"},
            {"LimitedCustomIndicatorsMap", 0x438, "MapProperty"},
            {"BuildingHealthDisplayDuration", 0x450, "FloatProperty"},
        }};
    };

    struct JunoBedAssignmentListEntry
    {
        static constexpr std::string_view Name = "JunoBedAssignmentListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t BedAssignmentListObject = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BedAssignmentListObject", 0x1628, "ObjectProperty"},
        }};
    };

    struct JunoBedAssignmentListObject
    {
        static constexpr std::string_view Name = "JunoBedAssignmentListObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NPCGameplayTag = 0x28;
            static constexpr std::uintptr_t NPCDisplayName = 0x30;
            static constexpr std::uintptr_t NPCIcon = 0x40;
            static constexpr std::uintptr_t bHasBed = 0x60;
            static constexpr std::uintptr_t PlayerNetId = 0x68;
            static constexpr std::uintptr_t bIsBed = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NPCGameplayTag", 0x28, "StructProperty"},
            {"NPCDisplayName", 0x30, "TextProperty"},
            {"NPCIcon", 0x40, "SoftObjectProperty"},
            {"bHasBed", 0x60, "BoolProperty"},
            {"PlayerNetId", 0x68, "StructProperty"},
            {"bIsBed", 0x98, "BoolProperty"},
        }};
    };

    struct JunoBedAssignmentScreen
    {
        static constexpr std::string_view Name = "JunoBedAssignmentScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AssignPlayerCharacterDisplayText = 0x4A8;
            static constexpr std::uintptr_t AssignPlayerCharacterIcon = 0x4B8;
            static constexpr std::uintptr_t BackButton = 0x4D8;
            static constexpr std::uintptr_t CloseButton = 0x4E0;
            static constexpr std::uintptr_t List_Characters = 0x4E8;
            static constexpr std::uintptr_t ThisBedListObject = 0x4F0;
            static constexpr std::uintptr_t BedObject = 0x4F8;
            static constexpr std::uintptr_t Button_Assign = 0x500;
            static constexpr std::uintptr_t AssignButtonText = 0x508;
            static constexpr std::uintptr_t UnassignButtonText = 0x518;
            static constexpr std::uintptr_t ReassignButtonText = 0x528;
            static constexpr std::uintptr_t ModalDescription = 0x538;
            static constexpr std::uintptr_t ListHeaderClass = 0x5A0;
            static constexpr std::uintptr_t ThisBedHeaderText = 0x5A8;
            static constexpr std::uintptr_t VillagersHeaderText = 0x5B8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"AssignPlayerCharacterDisplayText", 0x4A8, "TextProperty"},
            {"AssignPlayerCharacterIcon", 0x4B8, "SoftObjectProperty"},
            {"BackButton", 0x4D8, "ObjectProperty"},
            {"CloseButton", 0x4E0, "ObjectProperty"},
            {"List_Characters", 0x4E8, "ObjectProperty"},
            {"ThisBedListObject", 0x4F0, "ObjectProperty"},
            {"BedObject", 0x4F8, "ObjectProperty"},
            {"Button_Assign", 0x500, "ObjectProperty"},
            {"AssignButtonText", 0x508, "TextProperty"},
            {"UnassignButtonText", 0x518, "TextProperty"},
            {"ReassignButtonText", 0x528, "TextProperty"},
            {"ModalDescription", 0x538, "StructProperty"},
            {"ListHeaderClass", 0x5A0, "ClassProperty"},
            {"ThisBedHeaderText", 0x5A8, "TextProperty"},
            {"VillagersHeaderText", 0x5B8, "TextProperty"},
        }};
    };

    struct JunoBuildMenuCaptureExtension
    {
        static constexpr std::string_view Name = "JunoBuildMenuCaptureExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidgetExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuildMenuCaptureExtensionV2
    {
        static constexpr std::string_view Name = "JunoBuildMenuCaptureExtensionV2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidgetExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuildMenuFilterCaptureExtension
    {
        static constexpr std::string_view Name = "JunoBuildMenuFilterCaptureExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidgetExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuildMenuFilterEntry
    {
        static constexpr std::string_view Name = "JunoBuildMenuFilterEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterListObject = 0x15D8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FilterListObject", 0x15D8, "ObjectProperty"},
        }};
    };

    struct JunoBuildMenuFilterHeaderEntry
    {
        static constexpr std::string_view Name = "JunoBuildMenuFilterHeaderEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_Name = 0x15D8;
            static constexpr std::uintptr_t FilterListObject = 0x15E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text_Name", 0x15D8, "ObjectProperty"},
            {"FilterListObject", 0x15E0, "ObjectProperty"},
        }};
    };

    struct JunoBuildMenuFilterListObject
    {
        static constexpr std::string_view Name = "JunoBuildMenuFilterListObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingCategoryFilterViewModel = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CraftingCategoryFilterViewModel", 0x6C, "WeakObjectProperty"},
        }};
    };

    struct JunoBuildMenuFilterTab
    {
        static constexpr std::string_view Name = "JunoBuildMenuFilterTab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoBangWidget = 0x15D8;
            static constexpr std::uintptr_t CraftingCategoryFilterViewModel = 0x15E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"JunoBangWidget", 0x15D8, "ObjectProperty"},
            {"CraftingCategoryFilterViewModel", 0x15E0, "WeakObjectProperty"},
        }};
    };

    struct JunoBuildMenuFilteringScreen
    {
        static constexpr std::string_view Name = "JunoBuildMenuFilteringScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TabList_FilterTabs = 0x4A0;
            static constexpr std::uintptr_t GridListView_SubFilters = 0x4A8;
            static constexpr std::uintptr_t DynamicEntryBox_FilterTags = 0x4B0;
            static constexpr std::uintptr_t MaxNumFilterTagsDisplayed = 0x4B8;
            static constexpr std::uintptr_t FilterTabWidget = 0x4C0;
            static constexpr std::uintptr_t HeaderEntryType = 0x4C8;
            static constexpr std::uintptr_t SubCategoryEntryType = 0x4CC;
            static constexpr std::uintptr_t CurrentFilterListObjects = 0x4D0;
            static constexpr std::uintptr_t CraftingCategoryFilterViewModel = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TabList_FilterTabs", 0x4A0, "ObjectProperty"},
            {"GridListView_SubFilters", 0x4A8, "ObjectProperty"},
            {"DynamicEntryBox_FilterTags", 0x4B0, "ObjectProperty"},
            {"MaxNumFilterTagsDisplayed", 0x4B8, "IntProperty"},
            {"FilterTabWidget", 0x4C0, "ClassProperty"},
            {"HeaderEntryType", 0x4C8, "NameProperty"},
            {"SubCategoryEntryType", 0x4CC, "NameProperty"},
            {"CurrentFilterListObjects", 0x4D0, "ArrayProperty"},
            {"CraftingCategoryFilterViewModel", 0x4E0, "WeakObjectProperty"},
        }};
    };

    struct JunoBuildingCategoryBaseViewModel
    {
        static constexpr std::string_view Name = "JunoBuildingCategoryBaseViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x68;
            static constexpr std::uintptr_t DisplayName = 0x70;
            static constexpr std::uintptr_t IconResource = 0x80;
            static constexpr std::uintptr_t Entries = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Tag", 0x68, "StructProperty"},
            {"DisplayName", 0x70, "TextProperty"},
            {"IconResource", 0x80, "SoftObjectProperty"},
            {"Entries", 0xA0, "ArrayProperty"},
        }};
    };

    struct JunoBuildingCategoryRecentViewModel
    {
        static constexpr std::string_view Name = "JunoBuildingCategoryRecentViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingCategoryViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxRecentRecipes = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxRecentRecipes", 0xC0, "IntProperty"},
        }};
    };

    struct JunoBuildingCategoryViewModel
    {
        static constexpr std::string_view Name = "JunoBuildingCategoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingCategoryBaseViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SubCategories = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubCategories", 0xB0, "ArrayProperty"},
        }};
    };

    struct JunoBuildingDisplaySlot
    {
        static constexpr std::string_view Name = "JunoBuildingDisplaySlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingSlotData = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BuildingSlotData", 0x330, "StructProperty"},
        }};
    };

    struct JunoBuildingGroupViewModel
    {
        static constexpr std::string_view Name = "JunoBuildingGroupViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x68;
            static constexpr std::uintptr_t Categories = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DisplayName", 0x68, "TextProperty"},
            {"Categories", 0xC0, "ArrayProperty"},
        }};
    };

    struct JunoBuildingIngredientsGroup
    {
        static constexpr std::string_view Name = "JunoBuildingIngredientsGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PercentComplete = 0x370;
            static constexpr std::uintptr_t BuildablesRemaining = 0x374;
            static constexpr std::uintptr_t EntryBox_Ingredients = 0x378;
            static constexpr std::uintptr_t FilteredTags = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PercentComplete", 0x370, "FloatProperty"},
            {"BuildablesRemaining", 0x374, "IntProperty"},
            {"EntryBox_Ingredients", 0x378, "ObjectProperty"},
            {"FilteredTags", 0x380, "StructProperty"},
        }};
    };

    struct JunoBuildingLimitComponent
    {
        static constexpr std::string_view Name = "JunoBuildingLimitComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
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

    struct JunoBuildingRecipeDetails
    {
        static constexpr std::string_view Name = "JunoBuildingRecipeDetails";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoRecipeDetailsWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_GuidedBuildingIngredients = 0x3C8;
            static constexpr std::uintptr_t LoadingMinimumWaitTimeSeconds = 0x3D0;
            static constexpr std::uintptr_t ActorClassToBuild = 0x3D8;
            static constexpr std::uintptr_t ScrollBox_Requirements = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EntryBox_GuidedBuildingIngredients", 0x3C8, "ObjectProperty"},
            {"LoadingMinimumWaitTimeSeconds", 0x3D0, "FloatProperty"},
            {"ActorClassToBuild", 0x3D8, "SoftClassProperty"},
            {"ScrollBox_Requirements", 0x410, "ObjectProperty"},
        }};
    };

    struct JunoBuildingScreen
    {
        static constexpr std::string_view Name = "JunoBuildingScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoRecipeScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewRecipe = 0x578;
            static constexpr std::uintptr_t Button_ItemShop = 0x580;
            static constexpr std::uintptr_t bSortPriorityAscending = 0x588;
            static constexpr std::uintptr_t TabList_PrimaryCategories = 0x590;
            static constexpr std::uintptr_t TabList_SecondaryCategories = 0x598;
            static constexpr std::uintptr_t CloseScreenAction = 0x5A0;
            static constexpr std::uintptr_t PreviewWaitTime = 0x5B0;
            static constexpr std::uintptr_t DefaultSortingPreferences = 0x5B8;
            static constexpr std::uintptr_t CraftingCategoryFilterViewModel = 0x6D0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PreviewRecipe", 0x578, "NameProperty"},
            {"Button_ItemShop", 0x580, "ObjectProperty"},
            {"bSortPriorityAscending", 0x588, "BoolProperty"},
            {"TabList_PrimaryCategories", 0x590, "ObjectProperty"},
            {"TabList_SecondaryCategories", 0x598, "ObjectProperty"},
            {"CloseScreenAction", 0x5A0, "StructProperty"},
            {"PreviewWaitTime", 0x5B0, "FloatProperty"},
            {"DefaultSortingPreferences", 0x5B8, "ArrayProperty"},
            {"CraftingCategoryFilterViewModel", 0x6D0, "WeakObjectProperty"},
        }};
    };

    struct JunoBuildingScreenV2
    {
        static constexpr std::string_view Name = "JunoBuildingScreenV2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CloseScreenAction = 0x4A8;
            static constexpr std::uintptr_t PreviewWaitTime = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CloseScreenAction", 0x4A8, "StructProperty"},
            {"PreviewWaitTime", 0x4B8, "FloatProperty"},
        }};
    };

    struct JunoBuildingSubCategorySavedBuildsViewModel
    {
        static constexpr std::string_view Name = "JunoBuildingSubCategorySavedBuildsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingSubCategoryViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryTag = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CategoryTag", 0xB0, "StructProperty"},
        }};
    };

    struct JunoBuildingSubCategoryViewModel
    {
        static constexpr std::string_view Name = "JunoBuildingSubCategoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingCategoryBaseViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryTag = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CategoryTag", 0xB0, "StructProperty"},
        }};
    };

    struct JunoBuildingSubmenuListObject
    {
        static constexpr std::string_view Name = "JunoBuildingSubmenuListObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoRecipeListObject";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingObject = 0x30;
            static constexpr std::uintptr_t RecipeScreen = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CraftingObject", 0x30, "WeakObjectProperty"},
            {"RecipeScreen", 0x38, "WeakObjectProperty"},
        }};
    };

    struct JunoBuildingViewModel
    {
        static constexpr std::string_view Name = "JunoBuildingViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingGroups = 0xE8;
            static constexpr std::uintptr_t SelectedGroup = 0xF8;
            static constexpr std::uintptr_t FilteredCategories = 0x100;
            static constexpr std::uintptr_t SelectedCategory = 0x110;
            static constexpr std::uintptr_t FilteredSubCategories = 0x118;
            static constexpr std::uintptr_t SelectedSubCategory = 0x128;
            static constexpr std::uintptr_t FilteredRecipeEntries = 0x130;
            static constexpr std::uintptr_t SelectedRecipeEntry = 0x140;
            static constexpr std::uintptr_t bInfoPanelIsVisible = 0x148;
            static constexpr std::uintptr_t CategoryRecent = 0x150;
            static constexpr std::uintptr_t SubCategorySavedBuilds = 0x158;
            static constexpr std::uintptr_t DefaultSortingPreferences = 0x1B8;
            static constexpr std::uintptr_t bSortPriorityAscending = 0x1C8;
            static constexpr std::uintptr_t HeaderTagPrefix = 0x1CC;
            static constexpr std::uintptr_t HeaderEntryType = 0x1D0;
            static constexpr std::uintptr_t RecipeEntryType = 0x1D4;
            static constexpr std::uintptr_t SavedBuildEntryType = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"BuildingGroups", 0xE8, "ArrayProperty"},
            {"SelectedGroup", 0xF8, "ObjectProperty"},
            {"FilteredCategories", 0x100, "ArrayProperty"},
            {"SelectedCategory", 0x110, "ObjectProperty"},
            {"FilteredSubCategories", 0x118, "ArrayProperty"},
            {"SelectedSubCategory", 0x128, "ObjectProperty"},
            {"FilteredRecipeEntries", 0x130, "ArrayProperty"},
            {"SelectedRecipeEntry", 0x140, "ObjectProperty"},
            {"bInfoPanelIsVisible", 0x148, "BoolProperty"},
            {"CategoryRecent", 0x150, "ObjectProperty"},
            {"SubCategorySavedBuilds", 0x158, "ObjectProperty"},
            {"DefaultSortingPreferences", 0x1B8, "ArrayProperty"},
            {"bSortPriorityAscending", 0x1C8, "BoolProperty"},
            {"HeaderTagPrefix", 0x1CC, "NameProperty"},
            {"HeaderEntryType", 0x1D0, "NameProperty"},
            {"RecipeEntryType", 0x1D4, "NameProperty"},
            {"SavedBuildEntryType", 0x1D8, "NameProperty"},
        }};
    };

    struct JunoButtonBehaviorComponentTagContainerMonitor_InventoryGroup
    {
        static constexpr std::string_view Name = "JunoButtonBehaviorComponentTagContainerMonitor_InventoryGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ButtonBehaviorComponentTagContainerMonitor";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupSlots = 0x40;
            static constexpr std::uintptr_t InventoryGroup = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GroupSlots", 0x40, "ArrayProperty"},
            {"InventoryGroup", 0x50, "StructProperty"},
        }};
    };

    struct JunoCheatManager_UI
    {
        static constexpr std::string_view Name = "JunoCheatManager_UI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoChestSettingsViewModel
    {
        static constexpr std::string_view Name = "JunoChestSettingsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCompassWidget
    {
        static constexpr std::string_view Name = "JunoCompassWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCompassWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CompassWidth = 0x4C8;
            static constexpr std::uintptr_t MarkerSize = 0x4CC;
            static constexpr std::uintptr_t MobileMarkerSize = 0x4D4;
            static constexpr std::uintptr_t MinMarkerScaleDistanceCutOff = 0x4DC;
            static constexpr std::uintptr_t MaxMarkerScaleCutOff = 0x4E0;
            static constexpr std::uintptr_t MarkerScaleCurve = 0x4E8;
            static constexpr std::uintptr_t MarkerDistanceOffset = 0x530;
            static constexpr std::uintptr_t MobileMarkerDistanceOffset = 0x534;
            static constexpr std::uintptr_t AdvancedCompassTag = 0x538;
            static constexpr std::uintptr_t MarkerDistanceTextFont = 0x540;
            static constexpr std::uintptr_t MarkerDistanceTextFont_Mobile = 0x598;
            static constexpr std::uintptr_t PreviousSpawnPointMarkerRow = 0x5F0;
            static constexpr std::uintptr_t ActiveMarkers = 0x600;
            static constexpr std::uintptr_t AvailableMaterialInstances = 0x610;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"CompassWidth", 0x4C8, "FloatProperty"},
            {"MarkerSize", 0x4CC, "StructProperty"},
            {"MobileMarkerSize", 0x4D4, "StructProperty"},
            {"MinMarkerScaleDistanceCutOff", 0x4DC, "FloatProperty"},
            {"MaxMarkerScaleCutOff", 0x4E0, "FloatProperty"},
            {"MarkerScaleCurve", 0x4E8, "StructProperty"},
            {"MarkerDistanceOffset", 0x530, "FloatProperty"},
            {"MobileMarkerDistanceOffset", 0x534, "FloatProperty"},
            {"AdvancedCompassTag", 0x538, "StructProperty"},
            {"MarkerDistanceTextFont", 0x540, "StructProperty"},
            {"MarkerDistanceTextFont_Mobile", 0x598, "StructProperty"},
            {"PreviousSpawnPointMarkerRow", 0x5F0, "StructProperty"},
            {"ActiveMarkers", 0x600, "MapProperty"},
            {"AvailableMaterialInstances", 0x610, "MapProperty"},
        }};
    };

    struct JunoComposterScreen
    {
        static constexpr std::string_view Name = "JunoComposterScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoDisassemblingScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoMultiCraftingComponent = 0x610;
            static constexpr std::uintptr_t CurrentStationInventoryState = 0x618;
            static constexpr std::uintptr_t CurrentCraftingProcesses = 0x620;
            static constexpr std::uintptr_t InventoryGroup_Processing = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"JunoMultiCraftingComponent", 0x610, "ObjectProperty"},
            {"CurrentStationInventoryState", 0x618, "EnumProperty"},
            {"CurrentCraftingProcesses", 0x620, "ArrayProperty"},
            {"InventoryGroup_Processing", 0x630, "ObjectProperty"},
        }};
    };

    struct JunoConnectedVillageChestViewModel
    {
        static constexpr std::string_view Name = "JunoConnectedVillageChestViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBuildingInventorySlotChangedDelegate = 0x78;
            static constexpr std::uintptr_t WeakCraftingObject = 0x88;
            static constexpr std::uintptr_t ConnectedInventoryCount = 0x90;
            static constexpr std::uintptr_t RelevantInventoryComponents = 0x98;
            static constexpr std::uintptr_t InventoryAggregateComponents = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnBuildingInventorySlotChangedDelegate", 0x78, "MulticastInlineDelegateProperty"},
            {"WeakCraftingObject", 0x88, "WeakObjectProperty"},
            {"ConnectedInventoryCount", 0x90, "IntProperty"},
            {"RelevantInventoryComponents", 0x98, "ArrayProperty"},
            {"InventoryAggregateComponents", 0xA8, "ArrayProperty"},
        }};
    };

    struct JunoContentModeration_ModifyToxicityReport
    {
        static constexpr std::string_view Name = "JunoContentModeration_ModifyToxicityReport";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction_ModifyToxicityReport";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoControllerComponent_Indicators
    {
        static constexpr std::string_view Name = "JunoControllerComponent_Indicators";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingHealthBarDisplayMaxDuration = 0xC8;
            static constexpr std::uintptr_t BuildingShowDistance = 0xCC;
            static constexpr std::uintptr_t BuildingHideDistance = 0xD0;
            static constexpr std::uintptr_t HealthIndicatorPrefixTag = 0xD4;
            static constexpr std::uintptr_t DefaultHealthIndicatorTag = 0xD8;
            static constexpr std::uintptr_t DefaultArmorIndicatorTag = 0xDC;
            static constexpr std::uintptr_t SingleActorHealthShown = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BuildingHealthBarDisplayMaxDuration", 0xC8, "FloatProperty"},
            {"BuildingShowDistance", 0xCC, "FloatProperty"},
            {"BuildingHideDistance", 0xD0, "FloatProperty"},
            {"HealthIndicatorPrefixTag", 0xD4, "StructProperty"},
            {"DefaultHealthIndicatorTag", 0xD8, "StructProperty"},
            {"DefaultArmorIndicatorTag", 0xDC, "StructProperty"},
            {"SingleActorHealthShown", 0x138, "StructProperty"},
        }};
    };

    struct JunoControllerComponent_InteractionInfoViewModelCollection
    {
        static constexpr std::string_view Name = "JunoControllerComponent_InteractionInfoViewModelCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractionInfoViewModelMonitors = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InteractionInfoViewModelMonitors", 0xC0, "MapProperty"},
        }};
    };

    struct JunoConversationMarker
    {
        static constexpr std::string_view Name = "JunoConversationMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Keybind_Interact = 0x4D8;
            static constexpr std::uintptr_t MessageBubbleDuration = 0x4E0;
            static constexpr std::uintptr_t LastTextBubbleDuration = 0x4E4;
            static constexpr std::uintptr_t bSetCustomInteractionWidgetOnlyWhenNeeded = 0x4E8;
            static constexpr std::uintptr_t ActiveNPCStateMap = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Keybind_Interact", 0x4D8, "ObjectProperty"},
            {"MessageBubbleDuration", 0x4E0, "FloatProperty"},
            {"LastTextBubbleDuration", 0x4E4, "FloatProperty"},
            {"bSetCustomInteractionWidgetOnlyWhenNeeded", 0x4E8, "BoolProperty"},
            {"ActiveNPCStateMap", 0x4F8, "MapProperty"},
        }};
    };

    struct JunoConversationOption
    {
        static constexpr std::string_view Name = "JunoConversationOption";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RepresentedOption = 0x15D8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RepresentedOption", 0x15D8, "StructProperty"},
        }};
    };

    struct JunoConversationScreen
    {
        static constexpr std::string_view Name = "JunoConversationScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Group_Options = 0x4A0;
            static constexpr std::uintptr_t EntryBox_Options = 0x4A8;
            static constexpr std::uintptr_t LastEntryHovered = 0x4B0;
            static constexpr std::uintptr_t CloseScreenAction = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Group_Options", 0x4A0, "ObjectProperty"},
            {"EntryBox_Options", 0x4A8, "ObjectProperty"},
            {"LastEntryHovered", 0x4B0, "ObjectProperty"},
            {"CloseScreenAction", 0x4B8, "StructProperty"},
        }};
    };

    struct JunoCraftingCategoryFilterViewModel
    {
        static constexpr std::string_view Name = "JunoCraftingCategoryFilterViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t UIData = 0x78;
            static constexpr std::uintptr_t LastSelectedTab = 0x80;
            static constexpr std::uintptr_t SelectedFilterIds = 0x88;
            static constexpr std::uintptr_t Filters = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"UIData", 0x78, "WeakObjectProperty"},
            {"LastSelectedTab", 0x80, "StructProperty"},
            {"SelectedFilterIds", 0x88, "SetProperty"},
            {"Filters", 0x98, "MapProperty"},
        }};
    };

    struct JunoDebugWatermark
    {
        static constexpr std::string_view Name = "JunoDebugWatermark";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct JunoDisassemblingScreen
    {
        static constexpr std::string_view Name = "JunoDisassemblingScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t StationInventoryState = 0x4D8;
            static constexpr std::uintptr_t CraftingObject = 0x500;
            static constexpr std::uintptr_t Container_PlayerInventory = 0x508;
            static constexpr std::uintptr_t InventoryGroup_Input = 0x510;
            static constexpr std::uintptr_t InventoryGroup_Output = 0x518;
            static constexpr std::uintptr_t Button_Close = 0x520;
            static constexpr std::uintptr_t Button_Back = 0x528;
            static constexpr std::uintptr_t Button_TakeStack = 0x530;
            static constexpr std::uintptr_t Button_DepositStack = 0x538;
            static constexpr std::uintptr_t Button_MoreActions = 0x540;
            static constexpr std::uintptr_t Button_TakeAll = 0x548;
            static constexpr std::uintptr_t ButtonGroup_AllSlots = 0x550;
            static constexpr std::uintptr_t CancelAction = 0x558;
            static constexpr std::uintptr_t BackAction = 0x568;
            static constexpr std::uintptr_t LastSelectedSlot = 0x578;
            static constexpr std::uintptr_t LastClickedSlot = 0x580;
            static constexpr std::uintptr_t JunoPassiveCraftingComponent = 0x588;
            static constexpr std::uintptr_t JunoInventoryDragAndDropHandler = 0x590;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"StationInventoryState", 0x4D8, "EnumProperty"},
            {"CraftingObject", 0x500, "ObjectProperty"},
            {"Container_PlayerInventory", 0x508, "ObjectProperty"},
            {"InventoryGroup_Input", 0x510, "ObjectProperty"},
            {"InventoryGroup_Output", 0x518, "ObjectProperty"},
            {"Button_Close", 0x520, "ObjectProperty"},
            {"Button_Back", 0x528, "ObjectProperty"},
            {"Button_TakeStack", 0x530, "ObjectProperty"},
            {"Button_DepositStack", 0x538, "ObjectProperty"},
            {"Button_MoreActions", 0x540, "ObjectProperty"},
            {"Button_TakeAll", 0x548, "ObjectProperty"},
            {"ButtonGroup_AllSlots", 0x550, "ObjectProperty"},
            {"CancelAction", 0x558, "StructProperty"},
            {"BackAction", 0x568, "StructProperty"},
            {"LastSelectedSlot", 0x578, "ObjectProperty"},
            {"LastClickedSlot", 0x580, "ObjectProperty"},
            {"JunoPassiveCraftingComponent", 0x588, "ObjectProperty"},
            {"JunoInventoryDragAndDropHandler", 0x590, "ObjectProperty"},
        }};
    };

    struct JunoDistanceTrackerInterface
    {
        static constexpr std::string_view Name = "JunoDistanceTrackerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoDurabilityCountdown
    {
        static constexpr std::string_view Name = "JunoDurabilityCountdown";
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

    struct JunoDynamicControlPromptsWidget
    {
        static constexpr std::string_view Name = "JunoDynamicControlPromptsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntryBox", 0x370, "ObjectProperty"},
        }};
    };

    struct JunoDynamicUIDirector
    {
        static constexpr std::string_view Name = "JunoDynamicUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WaitForEventRouterAction = 0x2A8;
            static constexpr std::uintptr_t MapViewModelClasses = 0x2B0;
            static constexpr std::uintptr_t MapViewModels = 0x2C0;
            static constexpr std::uintptr_t HideWithMenuTags = 0x2D0;
            static constexpr std::uintptr_t DisallowMenuTags = 0x2F0;
            static constexpr std::uintptr_t TaggedWidgetSceneData = 0x310;
            static constexpr std::uintptr_t TaggedWidgetScenes = 0x318;
            static constexpr std::uintptr_t TaggedWidgets = 0x328;
            static constexpr std::uintptr_t CurrentModalSceneOperation = 0x3B8;
            static constexpr std::uintptr_t CurrentMenuOperationParams = 0x3D0;
            static constexpr std::uintptr_t CurrentMenuOperationParamBoundObject = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"WaitForEventRouterAction", 0x2A8, "ObjectProperty"},
            {"MapViewModelClasses", 0x2B0, "MapProperty"},
            {"MapViewModels", 0x2C0, "MapProperty"},
            {"HideWithMenuTags", 0x2D0, "StructProperty"},
            {"DisallowMenuTags", 0x2F0, "StructProperty"},
            {"TaggedWidgetSceneData", 0x310, "ObjectProperty"},
            {"TaggedWidgetScenes", 0x318, "MapProperty"},
            {"TaggedWidgets", 0x328, "MapProperty"},
            {"CurrentModalSceneOperation", 0x3B8, "OptionalProperty"},
            {"CurrentMenuOperationParams", 0x3D0, "OptionalProperty"},
            {"CurrentMenuOperationParamBoundObject", 0x3F0, "ObjectProperty"},
        }};
    };

    struct JunoDynamicUIDirectorComponent
    {
        static constexpr std::string_view Name = "JunoDynamicUIDirectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoEnchantmentWidget
    {
        static constexpr std::string_view Name = "JunoEnchantmentWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Enchantment = 0x330;
            static constexpr std::uintptr_t EnchantmentState = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Enchantment", 0x330, "ObjectProperty"},
            {"EnchantmentState", 0x338, "EnumProperty"},
        }};
    };

    struct JunoEnchantmentsWidget
    {
        static constexpr std::string_view Name = "JunoEnchantmentsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_Enchantments = 0x330;
            static constexpr std::uintptr_t RepresentedItem = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntryBox_Enchantments", 0x330, "ObjectProperty"},
            {"RepresentedItem", 0x338, "ObjectProperty"},
        }};
    };

    struct JunoEquipmentWidget
    {
        static constexpr std::string_view Name = "JunoEquipmentWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InventorySlot_Item = 0x370;
            static constexpr std::uintptr_t ItemSlotData = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InventorySlot_Item", 0x370, "ObjectProperty"},
            {"ItemSlotData", 0x378, "StructProperty"},
        }};
    };

    struct JunoEquippedItemViewModel
    {
        static constexpr std::string_view Name = "JunoEquippedItemViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActionText = 0x68;
            static constexpr std::uintptr_t SecondaryActionText = 0x78;
            static constexpr std::uintptr_t ShowOffhandPromptFirst = 0x88;
            static constexpr std::uintptr_t HideOffhandPrompt = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PrimaryActionText", 0x68, "TextProperty"},
            {"SecondaryActionText", 0x78, "TextProperty"},
            {"ShowOffhandPromptFirst", 0x88, "BoolProperty"},
            {"HideOffhandPrompt", 0x89, "BoolProperty"},
        }};
    };

    struct JunoFilterTagWidget
    {
        static constexpr std::string_view Name = "JunoFilterTagWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisplayInActionBar = 0x308;
            static constexpr std::uintptr_t bConsumePointerInput = 0x309;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bDisplayInActionBar", 0x308, "BoolProperty"},
            {"bConsumePointerInput", 0x309, "BoolProperty"},
        }};
    };

    struct JunoFortItemViewModel
    {
        static constexpr std::string_view Name = "JunoFortItemViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t RepresentedItem = 0x78;
            static constexpr std::uintptr_t MaxAllowedItemAlterations = 0x80;
            static constexpr std::uintptr_t MaxAllowedNonFocusItemAlterations = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RepresentedItem", 0x78, "ObjectProperty"},
            {"MaxAllowedItemAlterations", 0x80, "IntProperty"},
            {"MaxAllowedNonFocusItemAlterations", 0x84, "IntProperty"},
        }};
    };

    struct JunoFreeBuildCategoryUIData
    {
        static constexpr std::string_view Name = "JunoFreeBuildCategoryUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Categories = 0x28;
            static constexpr std::uintptr_t SubCategories = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Categories", 0x28, "ArrayProperty"},
            {"SubCategories", 0x38, "ArrayProperty"},
        }};
    };

    struct JunoFullScreenMap
    {
        static constexpr std::string_view Name = "JunoFullScreenMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
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

    struct JunoGameEventStreamEntryWidget
    {
        static constexpr std::string_view Name = "JunoGameEventStreamEntryWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnHideAnimComplete = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnHideAnimComplete", 0x308, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoGameEventStreamWidget
    {
        static constexpr std::string_view Name = "JunoGameEventStreamWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GameEvents = 0x370;
            static constexpr std::uintptr_t MaxDisplayedItems = 0x39C;
            static constexpr std::uintptr_t ExpirationTime = 0x3A0;
            static constexpr std::uintptr_t EntryBox_GameEvents = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GameEvents", 0x370, "ArrayProperty"},
            {"MaxDisplayedItems", 0x39C, "IntProperty"},
            {"ExpirationTime", 0x3A0, "FloatProperty"},
            {"EntryBox_GameEvents", 0x3A8, "ObjectProperty"},
        }};
    };

    struct JunoGameStateComponent_InventoryUIData
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_InventoryUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoGameStateComponent_UIDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryUIData = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InventoryUIData", 0xF0, "ObjectProperty"},
        }};
    };

    struct JunoGameStateComponent_UIData
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_UIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoGameStateComponent_UIDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingCategoryUIData = 0xF0;
            static constexpr std::uintptr_t VillageUIData = 0xF8;
            static constexpr std::uintptr_t WeaponEssenceDataRegistryType = 0x100;
            static constexpr std::uintptr_t BiomeUIDataRegistryType = 0x104;
            static constexpr std::uintptr_t CraftingFormulaRegistryType = 0x108;
            static constexpr std::uintptr_t CraftingCategoryFilterRegistryType = 0x10C;
            static constexpr std::uintptr_t CraftingIngredientRegistryType = 0x110;
            static constexpr std::uintptr_t DistanceRegistryType = 0x114;
            static constexpr std::uintptr_t CraftingRegistryType = 0x118;
            static constexpr std::uintptr_t CurrencyDataRegistryType = 0x11C;
            static constexpr std::uintptr_t InteractDecoratorRegistryType = 0x120;
            static constexpr std::uintptr_t BuildMenuExclusionRegistryType = 0x124;
            static constexpr std::uintptr_t ContextActionRegistryType = 0x128;
            static constexpr std::uintptr_t AlterationMappingRegistryType = 0x12C;
            static constexpr std::uintptr_t DefaultDistanceDataTag = 0x130;
            static constexpr std::uintptr_t TypeTagPrefix = 0x134;
            static constexpr std::uintptr_t FreeBuildTypeTagPrefix = 0x138;
            static constexpr std::uintptr_t BuildingRecipeCategoryPrefix = 0x158;
            static constexpr std::uintptr_t BuildingRecipeSubCategoryPrefix = 0x15C;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"CraftingCategoryUIData", 0xF0, "ObjectProperty"},
            {"VillageUIData", 0xF8, "ObjectProperty"},
            {"WeaponEssenceDataRegistryType", 0x100, "StructProperty"},
            {"BiomeUIDataRegistryType", 0x104, "StructProperty"},
            {"CraftingFormulaRegistryType", 0x108, "StructProperty"},
            {"CraftingCategoryFilterRegistryType", 0x10C, "StructProperty"},
            {"CraftingIngredientRegistryType", 0x110, "StructProperty"},
            {"DistanceRegistryType", 0x114, "StructProperty"},
            {"CraftingRegistryType", 0x118, "StructProperty"},
            {"CurrencyDataRegistryType", 0x11C, "StructProperty"},
            {"InteractDecoratorRegistryType", 0x120, "StructProperty"},
            {"BuildMenuExclusionRegistryType", 0x124, "StructProperty"},
            {"ContextActionRegistryType", 0x128, "StructProperty"},
            {"AlterationMappingRegistryType", 0x12C, "StructProperty"},
            {"DefaultDistanceDataTag", 0x130, "StructProperty"},
            {"TypeTagPrefix", 0x134, "StructProperty"},
            {"FreeBuildTypeTagPrefix", 0x138, "StructProperty"},
            {"BuildingRecipeCategoryPrefix", 0x158, "StructProperty"},
            {"BuildingRecipeSubCategoryPrefix", 0x15C, "StructProperty"},
        }};
    };

    struct JunoGameStateComponent_UIDataBase
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_UIDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoGameStateComponent_DataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantStateRegistryType = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParticipantStateRegistryType", 0xD8, "StructProperty"},
        }};
    };

    struct JunoGliderWidget
    {
        static constexpr std::string_view Name = "JunoGliderWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MainContent = 0x370;
            static constexpr std::uintptr_t Overlay_MainContent = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MainContent", 0x370, "ObjectProperty"},
            {"Overlay_MainContent", 0x378, "ObjectProperty"},
        }};
    };

    struct JunoGuidedBuildingHudStateWidget
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingHudStateWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentGuidedBuildingActor = 0x330;
            static constexpr std::uintptr_t AutoHideTimeLength = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentGuidedBuildingActor", 0x330, "WeakObjectProperty"},
            {"AutoHideTimeLength", 0x338, "FloatProperty"},
        }};
    };

    struct JunoHUDMenuTabButton
    {
        static constexpr std::string_view Name = "JunoHUDMenuTabButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClickEvent = 0x330;
            static constexpr std::uintptr_t MinWidth = 0x334;
            static constexpr std::uintptr_t MinHeight = 0x338;
            static constexpr std::uintptr_t MaxWidth = 0x33C;
            static constexpr std::uintptr_t MaxHeight = 0x340;
            static constexpr std::uintptr_t Style = 0x348;
            static constexpr std::uintptr_t bHideInputAction = 0x350;
            static constexpr std::uintptr_t PressedSlateSoundOverride = 0x358;
            static constexpr std::uintptr_t ClickedSlateSoundOverride = 0x370;
            static constexpr std::uintptr_t HoveredSlateSoundOverride = 0x388;
            static constexpr std::uintptr_t SelectedPressedSlateSoundOverride = 0x3A0;
            static constexpr std::uintptr_t SelectedClickedSlateSoundOverride = 0x3B8;
            static constexpr std::uintptr_t SelectedHoveredSlateSoundOverride = 0x3D0;
            static constexpr std::uintptr_t LockedPressedSlateSoundOverride = 0x3E8;
            static constexpr std::uintptr_t LockedClickedSlateSoundOverride = 0x400;
            static constexpr std::uintptr_t LockedHoveredSlateSoundOverride = 0x418;
            static constexpr std::uintptr_t bApplyAlphaOnDisable = 0x430;
            static constexpr std::uintptr_t bDisplayInputActionWhenNotInteractable = 0x430;
            static constexpr std::uintptr_t bInteractableWhenSelected = 0x430;
            static constexpr std::uintptr_t bLocked = 0x430;
            static constexpr std::uintptr_t bSelectable = 0x430;
            static constexpr std::uintptr_t bShouldSelectUponReceivingFocus = 0x430;
            static constexpr std::uintptr_t bToggleable = 0x430;
            static constexpr std::uintptr_t bTriggerClickedAfterSelection = 0x430;
            static constexpr std::uintptr_t bHideInputActionWithKeyboard = 0x431;
            static constexpr std::uintptr_t bRequiresHold = 0x431;
            static constexpr std::uintptr_t bShouldUseFallbackDefaultInputAction = 0x431;
            static constexpr std::uintptr_t HoldData = 0x438;
            static constexpr std::uintptr_t bSimulateHoverOnTouchInput = 0x440;
            static constexpr std::uintptr_t ClickMethod = 0x443;
            static constexpr std::uintptr_t TouchMethod = 0x444;
            static constexpr std::uintptr_t PressMethod = 0x445;
            static constexpr std::uintptr_t InputPriority = 0x448;
            static constexpr std::uintptr_t TriggeringInputAction = 0x450;
            static constexpr std::uintptr_t TriggeringEnhancedInputAction = 0x460;
            static constexpr std::uintptr_t bNavigateToNextWidgetOnDisable = 0x478;
            static constexpr std::uintptr_t OnSelectedChangedBase = 0x480;
            static constexpr std::uintptr_t OnButtonBaseClicked = 0x490;
            static constexpr std::uintptr_t OnButtonBaseDoubleClicked = 0x4A0;
            static constexpr std::uintptr_t OnButtonBaseHovered = 0x4B0;
            static constexpr std::uintptr_t OnButtonBaseUnhovered = 0x4C0;
            static constexpr std::uintptr_t OnButtonBaseFocused = 0x4D0;
            static constexpr std::uintptr_t OnButtonBaseUnfocused = 0x4E0;
            static constexpr std::uintptr_t OnButtonBaseLockClicked = 0x4F0;
            static constexpr std::uintptr_t OnButtonBaseLockDoubleClicked = 0x500;
            static constexpr std::uintptr_t OnButtonBaseSelected = 0x510;
            static constexpr std::uintptr_t OnButtonBaseUnselected = 0x520;
            static constexpr std::uintptr_t OnButtonBaseDragDetected = 0x530;
            static constexpr std::uintptr_t OnButtonBaseDragEnter = 0x540;
            static constexpr std::uintptr_t OnButtonBaseDragLeave = 0x550;
            static constexpr std::uintptr_t OnButtonBaseDragOver = 0x560;
            static constexpr std::uintptr_t OnButtonBaseDrop = 0x570;
            static constexpr std::uintptr_t bIsPersistentBinding = 0x5B8;
            static constexpr std::uintptr_t InputModeOverride = 0x5B9;
            static constexpr std::uintptr_t SingleMaterialStyleMID = 0x5E0;
            static constexpr std::uintptr_t NormalStyle = 0x5F0;
            static constexpr std::uintptr_t SelectedStyle = 0x980;
            static constexpr std::uintptr_t DisabledStyle = 0xD10;
            static constexpr std::uintptr_t LockedStyle = 0x10A0;
            static constexpr std::uintptr_t bStopDoubleClickPropagation = 0x1430;
            static constexpr std::uintptr_t InputActionWidget = 0x15C8;
        };

        inline static constexpr std::array<PropertyInfo, 61> Properties{{
            {"ClickEvent", 0x330, "StructProperty"},
            {"MinWidth", 0x334, "IntProperty"},
            {"MinHeight", 0x338, "IntProperty"},
            {"MaxWidth", 0x33C, "IntProperty"},
            {"MaxHeight", 0x340, "IntProperty"},
            {"Style", 0x348, "ClassProperty"},
            {"bHideInputAction", 0x350, "BoolProperty"},
            {"PressedSlateSoundOverride", 0x358, "StructProperty"},
            {"ClickedSlateSoundOverride", 0x370, "StructProperty"},
            {"HoveredSlateSoundOverride", 0x388, "StructProperty"},
            {"SelectedPressedSlateSoundOverride", 0x3A0, "StructProperty"},
            {"SelectedClickedSlateSoundOverride", 0x3B8, "StructProperty"},
            {"SelectedHoveredSlateSoundOverride", 0x3D0, "StructProperty"},
            {"LockedPressedSlateSoundOverride", 0x3E8, "StructProperty"},
            {"LockedClickedSlateSoundOverride", 0x400, "StructProperty"},
            {"LockedHoveredSlateSoundOverride", 0x418, "StructProperty"},
            {"bApplyAlphaOnDisable", 0x430, "BoolProperty"},
            {"bDisplayInputActionWhenNotInteractable", 0x430, "BoolProperty"},
            {"bInteractableWhenSelected", 0x430, "BoolProperty"},
            {"bLocked", 0x430, "BoolProperty"},
            {"bSelectable", 0x430, "BoolProperty"},
            {"bShouldSelectUponReceivingFocus", 0x430, "BoolProperty"},
            {"bToggleable", 0x430, "BoolProperty"},
            {"bTriggerClickedAfterSelection", 0x430, "BoolProperty"},
            {"bHideInputActionWithKeyboard", 0x431, "BoolProperty"},
            {"bRequiresHold", 0x431, "BoolProperty"},
            {"bShouldUseFallbackDefaultInputAction", 0x431, "BoolProperty"},
            {"HoldData", 0x438, "ClassProperty"},
            {"bSimulateHoverOnTouchInput", 0x440, "BoolProperty"},
            {"ClickMethod", 0x443, "ByteProperty"},
            {"TouchMethod", 0x444, "ByteProperty"},
            {"PressMethod", 0x445, "ByteProperty"},
            {"InputPriority", 0x448, "IntProperty"},
            {"TriggeringInputAction", 0x450, "StructProperty"},
            {"TriggeringEnhancedInputAction", 0x460, "ObjectProperty"},
            {"bNavigateToNextWidgetOnDisable", 0x478, "BoolProperty"},
            {"OnSelectedChangedBase", 0x480, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseClicked", 0x490, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDoubleClicked", 0x4A0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseHovered", 0x4B0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnhovered", 0x4C0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseFocused", 0x4D0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnfocused", 0x4E0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseLockClicked", 0x4F0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseLockDoubleClicked", 0x500, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseSelected", 0x510, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnselected", 0x520, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragDetected", 0x530, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragEnter", 0x540, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragLeave", 0x550, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragOver", 0x560, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDrop", 0x570, "MulticastInlineDelegateProperty"},
            {"bIsPersistentBinding", 0x5B8, "BoolProperty"},
            {"InputModeOverride", 0x5B9, "EnumProperty"},
            {"SingleMaterialStyleMID", 0x5E0, "ObjectProperty"},
            {"NormalStyle", 0x5F0, "StructProperty"},
            {"SelectedStyle", 0x980, "StructProperty"},
            {"DisabledStyle", 0xD10, "StructProperty"},
            {"LockedStyle", 0x10A0, "StructProperty"},
            {"bStopDoubleClickPropagation", 0x1430, "BoolProperty"},
            {"InputActionWidget", 0x15C8, "ObjectProperty"},
        }};
    };

    struct JunoHudMenu
    {
        static constexpr std::string_view Name = "JunoHudMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoHudMenuBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_ItemShop = 0x520;
            static constexpr std::uintptr_t DefaultSelectedTabId = 0x528;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Button_ItemShop", 0x520, "ObjectProperty"},
            {"DefaultSelectedTabId", 0x528, "NameProperty"},
        }};
    };

    struct JunoHudMenuBase
    {
        static constexpr std::string_view Name = "JunoHudMenuBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TabList_MenuTabs = 0x4B0;
            static constexpr std::uintptr_t Switcher_Tabs = 0x4B8;
            static constexpr std::uintptr_t Button_Back = 0x4C0;
            static constexpr std::uintptr_t CloseHUDMenuAction = 0x4C8;
            static constexpr std::uintptr_t HudMenuBaseInitData = 0x4D8;
            static constexpr std::uintptr_t CurrentTabRequests = 0x4E0;
            static constexpr std::uintptr_t ModalSlot = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TabList_MenuTabs", 0x4B0, "ObjectProperty"},
            {"Switcher_Tabs", 0x4B8, "ObjectProperty"},
            {"Button_Back", 0x4C0, "ObjectProperty"},
            {"CloseHUDMenuAction", 0x4C8, "StructProperty"},
            {"HudMenuBaseInitData", 0x4D8, "ObjectProperty"},
            {"CurrentTabRequests", 0x4E0, "MapProperty"},
            {"ModalSlot", 0x4F8, "ObjectProperty"},
        }};
    };

    struct JunoHudMenuBaseInitData
    {
        static constexpr std::string_view Name = "JunoHudMenuBaseInitData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialHudMenuBaseTab = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InitialHudMenuBaseTab", 0x28, "NameProperty"},
        }};
    };

    struct JunoHudMenuContentInterface
    {
        static constexpr std::string_view Name = "JunoHudMenuContentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoHudMenuContentWidget
    {
        static constexpr std::string_view Name = "JunoHudMenuContentWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
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

    struct JunoInGameWorldSettingsScreen
    {
        static constexpr std::string_view Name = "JunoInGameWorldSettingsScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
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

    struct JunoInGameWorldSettingsViewModel
    {
        static constexpr std::string_view Name = "JunoInGameWorldSettingsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentWorldViewModel = 0x70;
            static constexpr std::uintptr_t SettingsDataTable = 0x78;
            static constexpr std::uintptr_t WorldImageDataTable = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentWorldViewModel", 0x70, "ObjectProperty"},
            {"SettingsDataTable", 0x78, "SoftObjectProperty"},
            {"WorldImageDataTable", 0x98, "SoftObjectProperty"},
        }};
    };

    struct JunoIndicatorLayerManagerWidget
    {
        static constexpr std::string_view Name = "JunoIndicatorLayerManagerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBaseIndicatorLayerManagerWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingHealthWidgetClass = 0x4C0;
            static constexpr std::uintptr_t BuildingHealthIndicatorWidget = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BuildingHealthWidgetClass", 0x4C0, "ClassProperty"},
            {"BuildingHealthIndicatorWidget", 0x4C8, "ObjectProperty"},
        }};
    };

    struct JunoIngredientWidget
    {
        static constexpr std::string_view Name = "JunoIngredientWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisableInfiniteIcon = 0x340;
            static constexpr std::uintptr_t StaticDescriptionText = 0x348;
            static constexpr std::uintptr_t CachedInfo = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bDisableInfiniteIcon", 0x340, "BoolProperty"},
            {"StaticDescriptionText", 0x348, "TextProperty"},
            {"CachedInfo", 0x358, "StructProperty"},
        }};
    };

    struct JunoInteractionIndicatorWidget
    {
        static constexpr std::string_view Name = "JunoInteractionIndicatorWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentContextInfo = 0x4D8;
            static constexpr std::uintptr_t LastReceivingActor = 0x4E0;
            static constexpr std::uintptr_t KeyBindWidget = 0x4E8;
            static constexpr std::uintptr_t KeyBindWidget_Second = 0x4F0;
            static constexpr std::uintptr_t Text_KeyBindName = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CurrentContextInfo", 0x4D8, "ObjectProperty"},
            {"LastReceivingActor", 0x4E0, "WeakObjectProperty"},
            {"KeyBindWidget", 0x4E8, "ObjectProperty"},
            {"KeyBindWidget_Second", 0x4F0, "ObjectProperty"},
            {"Text_KeyBindName", 0x4F8, "ObjectProperty"},
        }};
    };

    struct JunoInteractionInfoMonitorBase
    {
        static constexpr std::string_view Name = "JunoInteractionInfoMonitorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0x28;
            static constexpr std::uintptr_t InteractionInfoViewModel = 0x30;
            static constexpr std::uintptr_t WeakTrackedActor = 0x38;
            static constexpr std::uintptr_t InteractionLongUseMonitor = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerController", 0x28, "ObjectProperty"},
            {"InteractionInfoViewModel", 0x30, "ObjectProperty"},
            {"WeakTrackedActor", 0x38, "WeakObjectProperty"},
            {"InteractionLongUseMonitor", 0x40, "ObjectProperty"},
        }};
    };

    struct JunoInteractionInfoMonitorConversation
    {
        static constexpr std::string_view Name = "JunoInteractionInfoMonitorConversation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInteractionInfoMonitorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0x28;
            static constexpr std::uintptr_t InteractionInfoViewModel = 0x30;
            static constexpr std::uintptr_t WeakTrackedActor = 0x38;
            static constexpr std::uintptr_t InteractionLongUseMonitor = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerController", 0x28, "ObjectProperty"},
            {"InteractionInfoViewModel", 0x30, "ObjectProperty"},
            {"WeakTrackedActor", 0x38, "WeakObjectProperty"},
            {"InteractionLongUseMonitor", 0x40, "ObjectProperty"},
        }};
    };

    struct JunoInteractionInfoMonitorPrimary
    {
        static constexpr std::string_view Name = "JunoInteractionInfoMonitorPrimary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInteractionInfoMonitorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0x28;
            static constexpr std::uintptr_t InteractionInfoViewModel = 0x30;
            static constexpr std::uintptr_t WeakTrackedActor = 0x38;
            static constexpr std::uintptr_t InteractionLongUseMonitor = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerController", 0x28, "ObjectProperty"},
            {"InteractionInfoViewModel", 0x30, "ObjectProperty"},
            {"WeakTrackedActor", 0x38, "WeakObjectProperty"},
            {"InteractionLongUseMonitor", 0x40, "ObjectProperty"},
        }};
    };

    struct JunoInteractionInfoMonitorSecondary
    {
        static constexpr std::string_view Name = "JunoInteractionInfoMonitorSecondary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInteractionInfoMonitorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0x28;
            static constexpr std::uintptr_t InteractionInfoViewModel = 0x30;
            static constexpr std::uintptr_t WeakTrackedActor = 0x38;
            static constexpr std::uintptr_t InteractionLongUseMonitor = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerController", 0x28, "ObjectProperty"},
            {"InteractionInfoViewModel", 0x30, "ObjectProperty"},
            {"WeakTrackedActor", 0x38, "WeakObjectProperty"},
            {"InteractionLongUseMonitor", 0x40, "ObjectProperty"},
        }};
    };

    struct JunoInteractionInfoViewModel
    {
        static constexpr std::string_view Name = "JunoInteractionInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractionText = 0x68;
            static constexpr std::uintptr_t InteractionErrorText = 0x78;
            static constexpr std::uintptr_t ActionName = 0x88;
            static constexpr std::uintptr_t InputAction = 0x90;
            static constexpr std::uintptr_t InteractionDuration = 0x98;
            static constexpr std::uintptr_t OnInteractionLongUseStartDelegate = 0xA0;
            static constexpr std::uintptr_t OnInteractionLongUseStopDelegate = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InteractionText", 0x68, "TextProperty"},
            {"InteractionErrorText", 0x78, "TextProperty"},
            {"ActionName", 0x88, "NameProperty"},
            {"InputAction", 0x90, "ObjectProperty"},
            {"InteractionDuration", 0x98, "FloatProperty"},
            {"OnInteractionLongUseStartDelegate", 0xA0, "MulticastInlineDelegateProperty"},
            {"OnInteractionLongUseStopDelegate", 0xB0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoInteractionInfoViewModelResolver
    {
        static constexpr std::string_view Name = "JunoInteractionInfoViewModelResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelContextResolver";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractionInfoMonitorClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InteractionInfoMonitorClass", 0x28, "ClassProperty"},
        }};
    };

    struct JunoInteractionPin
    {
        static constexpr std::string_view Name = "JunoInteractionPin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInteractionPinStateChangedDelegate = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnInteractionPinStateChangedDelegate", 0x330, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoInteractionTouchButtonsViewModel
    {
        static constexpr std::string_view Name = "JunoInteractionTouchButtonsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x78;
            static constexpr std::uintptr_t InteractionInfoPrimaryViewModel = 0x88;
            static constexpr std::uintptr_t InteractionInfoSecondaryViewModel = 0x90;
            static constexpr std::uintptr_t InteractionInfoConversationViewModel = 0x98;
            static constexpr std::uintptr_t InteractionInfoViewModelClass = 0xA0;
            static constexpr std::uintptr_t PrimaryMonitorClass = 0xA8;
            static constexpr std::uintptr_t SecondaryMonitorClass = 0xB0;
            static constexpr std::uintptr_t ConversationMonitorClass = 0xB8;
            static constexpr std::uintptr_t InteractionPrimaryActionName = 0xC0;
            static constexpr std::uintptr_t InteractionPrimaryInputAction = 0xC8;
            static constexpr std::uintptr_t InteractionSecondaryActionName = 0xD0;
            static constexpr std::uintptr_t InteractionSecondaryInputAction = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Entries", 0x78, "ArrayProperty"},
            {"InteractionInfoPrimaryViewModel", 0x88, "ObjectProperty"},
            {"InteractionInfoSecondaryViewModel", 0x90, "ObjectProperty"},
            {"InteractionInfoConversationViewModel", 0x98, "ObjectProperty"},
            {"InteractionInfoViewModelClass", 0xA0, "ClassProperty"},
            {"PrimaryMonitorClass", 0xA8, "ClassProperty"},
            {"SecondaryMonitorClass", 0xB0, "ClassProperty"},
            {"ConversationMonitorClass", 0xB8, "ClassProperty"},
            {"InteractionPrimaryActionName", 0xC0, "NameProperty"},
            {"InteractionPrimaryInputAction", 0xC8, "ObjectProperty"},
            {"InteractionSecondaryActionName", 0xD0, "NameProperty"},
            {"InteractionSecondaryInputAction", 0xD8, "ObjectProperty"},
        }};
    };

    struct JunoInventoryDragAndDropHandler
    {
        static constexpr std::string_view Name = "JunoInventoryDragAndDropHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakButtonGroup_InventorySlots = 0xD4;
            static constexpr std::uintptr_t WeakEquipSlots = 0xE0;
            static constexpr std::uintptr_t WeakOwningPlayer = 0xF0;
            static constexpr std::uintptr_t SourceInventorySlot = 0x100;
            static constexpr std::uintptr_t DestinationInventorySlot = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WeakButtonGroup_InventorySlots", 0xD4, "WeakObjectProperty"},
            {"WeakEquipSlots", 0xE0, "ArrayProperty"},
            {"WeakOwningPlayer", 0xF0, "WeakObjectProperty"},
            {"SourceInventorySlot", 0x100, "ObjectProperty"},
            {"DestinationInventorySlot", 0x108, "ObjectProperty"},
        }};
    };

    struct JunoInventoryFilterItemViewModel
    {
        static constexpr std::string_view Name = "JunoInventoryFilterItemViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0x80;
            static constexpr std::uintptr_t Count = 0x88;
            static constexpr std::uintptr_t RequiredCount = 0x8C;
            static constexpr std::uintptr_t bHasDiscoveredItem = 0x90;
            static constexpr std::uintptr_t bAccountForFreeBuildCostFiltering = 0x91;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ItemDefinition", 0x80, "ObjectProperty"},
            {"Count", 0x88, "IntProperty"},
            {"RequiredCount", 0x8C, "IntProperty"},
            {"bHasDiscoveredItem", 0x90, "BoolProperty"},
            {"bAccountForFreeBuildCostFiltering", 0x91, "BoolProperty"},
        }};
    };

    struct JunoInventoryFilterViewModel
    {
        static constexpr std::string_view Name = "JunoInventoryFilterViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t FilteredItems = 0x78;
            static constexpr std::uintptr_t RelevantInventoryComponents = 0x88;
            static constexpr std::uintptr_t WeakInventoryAggregateComponents = 0x98;
            static constexpr std::uintptr_t FilteredItemSlots = 0xA8;
            static constexpr std::uintptr_t AlreadyUsedCounts = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FilteredItems", 0x78, "MapProperty"},
            {"RelevantInventoryComponents", 0x88, "ArrayProperty"},
            {"WeakInventoryAggregateComponents", 0x98, "ArrayProperty"},
            {"FilteredItemSlots", 0xA8, "MapProperty"},
            {"AlreadyUsedCounts", 0xB8, "MapProperty"},
        }};
    };

    struct JunoInventoryGroup
    {
        static constexpr std::string_view Name = "JunoInventoryGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackedInventorySlots = 0x330;
            static constexpr std::uintptr_t CraftingInputInventorySlots = 0x340;
            static constexpr std::uintptr_t GroupIcon = 0x368;
            static constexpr std::uintptr_t GridPanel_Slots = 0x398;
            static constexpr std::uintptr_t Button_Sort = 0x3A0;
            static constexpr std::uintptr_t InventorySlotClass = 0x3A8;
            static constexpr std::uintptr_t CraftingInputInventorySlotClass = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TrackedInventorySlots", 0x330, "ArrayProperty"},
            {"CraftingInputInventorySlots", 0x340, "ArrayProperty"},
            {"GroupIcon", 0x368, "SoftObjectProperty"},
            {"GridPanel_Slots", 0x398, "ObjectProperty"},
            {"Button_Sort", 0x3A0, "ObjectProperty"},
            {"InventorySlotClass", 0x3A8, "ClassProperty"},
            {"CraftingInputInventorySlotClass", 0x3B0, "ClassProperty"},
        }};
    };

    struct JunoInventoryGroupViewModel
    {
        static constexpr std::string_view Name = "JunoInventoryGroupViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupOwner = 0x78;
            static constexpr std::uintptr_t GroupUIData = 0x80;
            static constexpr std::uintptr_t InventorySlots = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GroupOwner", 0x78, "ObjectProperty"},
            {"GroupUIData", 0x80, "StructProperty"},
            {"InventorySlots", 0xB8, "ArrayProperty"},
        }};
    };

    struct JunoInventoryScreen
    {
        static constexpr std::string_view Name = "JunoInventoryScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveAllProgressTitle = 0x4D8;
            static constexpr std::uintptr_t MoveAllProgressDescription = 0x4E8;
            static constexpr std::uintptr_t MergeAllProgressTitle = 0x4F8;
            static constexpr std::uintptr_t MergeAllProgressDescription = 0x508;
            static constexpr std::uintptr_t LastSelectedSlot = 0x520;
            static constexpr std::uintptr_t LastHoveredSlot = 0x528;
            static constexpr std::uintptr_t LastClickedSlot = 0x530;
            static constexpr std::uintptr_t WeakOtherInventoryActor = 0x538;
            static constexpr std::uintptr_t Group_ObjectInventory = 0x540;
            static constexpr std::uintptr_t ButtonGroup_AllSlots = 0x548;
            static constexpr std::uintptr_t InventoryGroupClass = 0x550;
            static constexpr std::uintptr_t Button_Back = 0x558;
            static constexpr std::uintptr_t Button_MoreActions = 0x560;
            static constexpr std::uintptr_t Button_Equip = 0x568;
            static constexpr std::uintptr_t Button_Unequip = 0x570;
            static constexpr std::uintptr_t Button_MoveToInventory = 0x578;
            static constexpr std::uintptr_t Button_MoveToMainHand = 0x580;
            static constexpr std::uintptr_t Button_Drop = 0x588;
            static constexpr std::uintptr_t Button_DropOne = 0x590;
            static constexpr std::uintptr_t Button_MoveToOffHand = 0x598;
            static constexpr std::uintptr_t Button_TakeAll = 0x5A0;
            static constexpr std::uintptr_t Button_SmartDeposit = 0x5A8;
            static constexpr std::uintptr_t Button_TakeStack = 0x5B0;
            static constexpr std::uintptr_t Button_DepositStack = 0x5B8;
            static constexpr std::uintptr_t CancelAction = 0x5C0;
            static constexpr std::uintptr_t BackAction = 0x5D0;
            static constexpr std::uintptr_t CloseScreenAction = 0x5E0;
            static constexpr std::uintptr_t SortAction = 0x5F0;
            static constexpr std::uintptr_t Container_PlayerInventory = 0x600;
            static constexpr std::uintptr_t Group_PlayerGear = 0x608;
            static constexpr std::uintptr_t Group_OffHand = 0x610;
            static constexpr std::uintptr_t NamedSlot_ObjectInventory = 0x618;
            static constexpr std::uintptr_t NamedSlot_VirtualCurrency = 0x620;
            static constexpr std::uintptr_t VirtualCurrencyWidgetTag = 0x628;
            static constexpr std::uintptr_t ItemsModificationProgressMinimumWaitTimeSeconds = 0x62C;
            static constexpr std::uintptr_t SortOrder = 0x630;
            static constexpr std::uintptr_t JunoInventoryDragAndDropHandler = 0x6A0;
        };

        inline static constexpr std::array<PropertyInfo, 37> Properties{{
            {"MoveAllProgressTitle", 0x4D8, "TextProperty"},
            {"MoveAllProgressDescription", 0x4E8, "TextProperty"},
            {"MergeAllProgressTitle", 0x4F8, "TextProperty"},
            {"MergeAllProgressDescription", 0x508, "TextProperty"},
            {"LastSelectedSlot", 0x520, "ObjectProperty"},
            {"LastHoveredSlot", 0x528, "ObjectProperty"},
            {"LastClickedSlot", 0x530, "ObjectProperty"},
            {"WeakOtherInventoryActor", 0x538, "WeakObjectProperty"},
            {"Group_ObjectInventory", 0x540, "ObjectProperty"},
            {"ButtonGroup_AllSlots", 0x548, "ObjectProperty"},
            {"InventoryGroupClass", 0x550, "ClassProperty"},
            {"Button_Back", 0x558, "ObjectProperty"},
            {"Button_MoreActions", 0x560, "ObjectProperty"},
            {"Button_Equip", 0x568, "ObjectProperty"},
            {"Button_Unequip", 0x570, "ObjectProperty"},
            {"Button_MoveToInventory", 0x578, "ObjectProperty"},
            {"Button_MoveToMainHand", 0x580, "ObjectProperty"},
            {"Button_Drop", 0x588, "ObjectProperty"},
            {"Button_DropOne", 0x590, "ObjectProperty"},
            {"Button_MoveToOffHand", 0x598, "ObjectProperty"},
            {"Button_TakeAll", 0x5A0, "ObjectProperty"},
            {"Button_SmartDeposit", 0x5A8, "ObjectProperty"},
            {"Button_TakeStack", 0x5B0, "ObjectProperty"},
            {"Button_DepositStack", 0x5B8, "ObjectProperty"},
            {"CancelAction", 0x5C0, "StructProperty"},
            {"BackAction", 0x5D0, "StructProperty"},
            {"CloseScreenAction", 0x5E0, "StructProperty"},
            {"SortAction", 0x5F0, "StructProperty"},
            {"Container_PlayerInventory", 0x600, "ObjectProperty"},
            {"Group_PlayerGear", 0x608, "ObjectProperty"},
            {"Group_OffHand", 0x610, "ObjectProperty"},
            {"NamedSlot_ObjectInventory", 0x618, "ObjectProperty"},
            {"NamedSlot_VirtualCurrency", 0x620, "ObjectProperty"},
            {"VirtualCurrencyWidgetTag", 0x628, "StructProperty"},
            {"ItemsModificationProgressMinimumWaitTimeSeconds", 0x62C, "FloatProperty"},
            {"SortOrder", 0x630, "ArrayProperty"},
            {"JunoInventoryDragAndDropHandler", 0x6A0, "ObjectProperty"},
        }};
    };

    struct JunoInventoryScreenView
    {
        static constexpr std::string_view Name = "JunoInventoryScreenView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakOtherInventoryActor = 0x4D0;
            static constexpr std::uintptr_t Button_Back = 0x4D8;
            static constexpr std::uintptr_t CloseScreenAction = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WeakOtherInventoryActor", 0x4D0, "WeakObjectProperty"},
            {"Button_Back", 0x4D8, "ObjectProperty"},
            {"CloseScreenAction", 0x4E0, "StructProperty"},
        }};
    };

    struct JunoInventorySlot
    {
        static constexpr std::string_view Name = "JunoInventorySlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextMenuAnchor = 0x1648;
            static constexpr std::uintptr_t PreviewSlotWidget = 0x1650;
            static constexpr std::uintptr_t bCanShowItemDetails = 0x1658;
            static constexpr std::uintptr_t bSupportsTooltipDisplay = 0x1659;
            static constexpr std::uintptr_t bDragAndDropAllowed = 0x165A;
            static constexpr std::uintptr_t ContextMenuClass = 0x1660;
            static constexpr std::uintptr_t InventoryOwner = 0x1670;
            static constexpr std::uintptr_t InventoryGroupIcon = 0x1678;
            static constexpr std::uintptr_t MatchingItemIcon = 0x1698;
            static constexpr std::uintptr_t NamedSlot_PreviewSlot = 0x16B8;
            static constexpr std::uintptr_t PreviewSlotWidgetClass = 0x16C0;
            static constexpr std::uintptr_t SlotData = 0x16D0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ContextMenuAnchor", 0x1648, "ObjectProperty"},
            {"PreviewSlotWidget", 0x1650, "ObjectProperty"},
            {"bCanShowItemDetails", 0x1658, "BoolProperty"},
            {"bSupportsTooltipDisplay", 0x1659, "BoolProperty"},
            {"bDragAndDropAllowed", 0x165A, "BoolProperty"},
            {"ContextMenuClass", 0x1660, "ClassProperty"},
            {"InventoryOwner", 0x1670, "ObjectProperty"},
            {"InventoryGroupIcon", 0x1678, "SoftObjectProperty"},
            {"MatchingItemIcon", 0x1698, "SoftObjectProperty"},
            {"NamedSlot_PreviewSlot", 0x16B8, "ObjectProperty"},
            {"PreviewSlotWidgetClass", 0x16C0, "ClassProperty"},
            {"SlotData", 0x16D0, "StructProperty"},
        }};
    };

    struct JunoInventorySlotPickerViewModel
    {
        static constexpr std::string_view Name = "JunoInventorySlotPickerViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerInventoryViewModel = 0x78;
            static constexpr std::uintptr_t SlotsToView = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerInventoryViewModel", 0x78, "ObjectProperty"},
            {"SlotsToView", 0x80, "ArrayProperty"},
        }};
    };

    struct JunoInventorySlotViewModel
    {
        static constexpr std::string_view Name = "JunoInventorySlotViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnContextMenuSummoned = 0x80;
            static constexpr std::uintptr_t OnContextMenuActionTriggered = 0x90;
            static constexpr std::uintptr_t ItemSlot = 0xA0;
            static constexpr std::uintptr_t FakeSlotData = 0xF8;
            static constexpr std::uintptr_t SlotType = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnContextMenuSummoned", 0x80, "MulticastInlineDelegateProperty"},
            {"OnContextMenuActionTriggered", 0x90, "MulticastInlineDelegateProperty"},
            {"ItemSlot", 0xA0, "StructProperty"},
            {"FakeSlotData", 0xF8, "StructProperty"},
            {"SlotType", 0x108, "EnumProperty"},
        }};
    };

    struct JunoInventorySlotsInfo
    {
        static constexpr std::string_view Name = "JunoInventorySlotsInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakOptionalInventoryObject = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WeakOptionalInventoryObject", 0x330, "WeakObjectProperty"},
        }};
    };

    struct JunoInventoryTypeTagBaseViewModel
    {
        static constexpr std::string_view Name = "JunoInventoryTypeTagBaseViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x88;
            static constexpr std::uintptr_t DisplayText = 0x90;
            static constexpr std::uintptr_t DisplayIcon = 0xA0;
            static constexpr std::uintptr_t bIsActive = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Tag", 0x88, "StructProperty"},
            {"DisplayText", 0x90, "TextProperty"},
            {"DisplayIcon", 0xA0, "SoftObjectProperty"},
            {"bIsActive", 0xC0, "BoolProperty"},
        }};
    };

    struct JunoInventoryTypeTagCategoryViewModel
    {
        static constexpr std::string_view Name = "JunoInventoryTypeTagCategoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInventoryTypeTagBaseViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SpecialAllEntry = 0xD0;
            static constexpr std::uintptr_t EntryList = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpecialAllEntry", 0xD0, "ObjectProperty"},
            {"EntryList", 0xD8, "ArrayProperty"},
        }};
    };

    struct JunoInventoryTypeTagListViewModel
    {
        static constexpr std::string_view Name = "JunoInventoryTypeTagListViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TypeTagList = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TypeTagList", 0x68, "ArrayProperty"},
        }};
    };

    struct JunoInventoryTypeTagManagementViewModel
    {
        static constexpr std::string_view Name = "JunoInventoryTypeTagManagementViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryList = 0x78;
            static constexpr std::uintptr_t TypeTagListViewModel = 0x88;
            static constexpr std::uintptr_t PlayerInventoryComponent = 0x90;
            static constexpr std::uintptr_t StorageInventoryComponent = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CategoryList", 0x78, "ArrayProperty"},
            {"TypeTagListViewModel", 0x88, "ObjectProperty"},
            {"PlayerInventoryComponent", 0x90, "WeakObjectProperty"},
            {"StorageInventoryComponent", 0x98, "WeakObjectProperty"},
        }};
    };

    struct JunoInventoryUIData
    {
        static constexpr std::string_view Name = "JunoInventoryUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t IndividualInventoryGroupUIData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IndividualInventoryGroupUIData", 0x28, "MapProperty"},
        }};
    };

    struct JunoItemAlterationViewModel
    {
        static constexpr std::string_view Name = "JunoItemAlterationViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RecipeListObject = 0x68;
            static constexpr std::uintptr_t ItemDefinition = 0x70;
            static constexpr std::uintptr_t Cost = 0x78;
            static constexpr std::uintptr_t CanBeApplied = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RecipeListObject", 0x68, "ObjectProperty"},
            {"ItemDefinition", 0x70, "ObjectProperty"},
            {"Cost", 0x78, "IntProperty"},
            {"CanBeApplied", 0x7C, "BoolProperty"},
        }};
    };

    struct JunoItemDetailsWidget
    {
        static constexpr std::string_view Name = "JunoItemDetailsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t NamedSlot_AlterationInformation = 0x330;
            static constexpr std::uintptr_t AlterationInformationWidgetTag = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NamedSlot_AlterationInformation", 0x330, "ObjectProperty"},
            {"AlterationInformationWidgetTag", 0x338, "StructProperty"},
        }};
    };

    struct JunoItemImageViewModel
    {
        static constexpr std::string_view Name = "JunoItemImageViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentTextureSet = 0x80;
            static constexpr std::uintptr_t CurrentMaterialIcon = 0x120;
            static constexpr std::uintptr_t PendingMaterialIcon = 0x128;
            static constexpr std::uintptr_t CurrentIconImage = 0x148;
            static constexpr std::uintptr_t PendingIconImage = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CurrentTextureSet", 0x80, "StructProperty"},
            {"CurrentMaterialIcon", 0x120, "ObjectProperty"},
            {"PendingMaterialIcon", 0x128, "SoftObjectProperty"},
            {"CurrentIconImage", 0x148, "ObjectProperty"},
            {"PendingIconImage", 0x150, "SoftObjectProperty"},
        }};
    };

    struct JunoItemInfoViewModel
    {
        static constexpr std::string_view Name = "JunoItemInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakItemDefinition = 0x78;
            static constexpr std::uintptr_t ItemDisplayName = 0x80;
            static constexpr std::uintptr_t CurrentCount = 0x90;
            static constexpr std::uintptr_t StackCount = 0x94;
            static constexpr std::uintptr_t InventoryFilterViewModel = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WeakItemDefinition", 0x78, "WeakObjectProperty"},
            {"ItemDisplayName", 0x80, "TextProperty"},
            {"CurrentCount", 0x90, "IntProperty"},
            {"StackCount", 0x94, "IntProperty"},
            {"InventoryFilterViewModel", 0x98, "ObjectProperty"},
        }};
    };

    struct JunoItemStatsList
    {
        static constexpr std::string_view Name = "JunoItemStatsList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentItem = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentItem", 0x310, "ObjectProperty"},
        }};
    };

    struct JunoItemTextureInterface
    {
        static constexpr std::string_view Name = "JunoItemTextureInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoListViewHeaderObject
    {
        static constexpr std::string_view Name = "JunoListViewHeaderObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t HeaderText = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HeaderText", 0x28, "TextProperty"},
        }};
    };

    struct JunoLocalPlayerViewModel
    {
        static constexpr std::string_view Name = "JunoLocalPlayerViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedTeammatePlayerStates = 0x78;
            static constexpr std::uintptr_t CachedSquadMemberPlayerStates = 0x88;
            static constexpr std::uintptr_t CachedPartyMemberPlayerStates = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedTeammatePlayerStates", 0x78, "ArrayProperty"},
            {"CachedSquadMemberPlayerStates", 0x88, "ArrayProperty"},
            {"CachedPartyMemberPlayerStates", 0x98, "ArrayProperty"},
        }};
    };

    struct JunoMapElementProviderBase
    {
        static constexpr std::string_view Name = "JunoMapElementProviderBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LayerNames = 0x28;
            static constexpr std::uintptr_t TagQuery = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LayerNames", 0x28, "MapProperty"},
            {"TagQuery", 0x38, "StructProperty"},
        }};
    };

    struct JunoMapElementProvider_Markers
    {
        static constexpr std::string_view Name = "JunoMapElementProvider_Markers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultMarkerLayerName = 0xB0;
            static constexpr std::uintptr_t PendingIconPlaceholder = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultMarkerLayerName", 0xB0, "StrProperty"},
            {"PendingIconPlaceholder", 0xC0, "SoftObjectProperty"},
        }};
    };

    struct JunoMapElementProvider_Pings
    {
        static constexpr std::string_view Name = "JunoMapElementProvider_Pings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PingLayerName = 0xB0;
            static constexpr std::uintptr_t PingBrush = 0xC0;
            static constexpr std::uintptr_t PingDrawSize = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PingLayerName", 0xB0, "StrProperty"},
            {"PingBrush", 0xC0, "StructProperty"},
            {"PingDrawSize", 0x170, "FloatProperty"},
        }};
    };

    struct JunoMapElementProvider_Players
    {
        static constexpr std::string_view Name = "JunoMapElementProvider_Players";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerIconLayerName = 0xB0;
            static constexpr std::uintptr_t PlayerDrawSize = 0xC0;
            static constexpr std::uintptr_t LocalPlayerIconMaterial = 0xC8;
            static constexpr std::uintptr_t PartyMemberIconMaterial = 0xD0;
            static constexpr std::uintptr_t OtherPlayerIconMaterial = 0xD8;
            static constexpr std::uintptr_t ActorRotationParamName = 0xE0;
            static constexpr std::uintptr_t CameraRotationParamName = 0xE4;
            static constexpr std::uintptr_t AvatarParamName = 0xE8;
            static constexpr std::uintptr_t PlayerMIDs = 0xF0;
            static constexpr std::uintptr_t LocalPlayerViewModel = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PlayerIconLayerName", 0xB0, "StrProperty"},
            {"PlayerDrawSize", 0xC0, "FloatProperty"},
            {"LocalPlayerIconMaterial", 0xC8, "ObjectProperty"},
            {"PartyMemberIconMaterial", 0xD0, "ObjectProperty"},
            {"OtherPlayerIconMaterial", 0xD8, "ObjectProperty"},
            {"ActorRotationParamName", 0xE0, "NameProperty"},
            {"CameraRotationParamName", 0xE4, "NameProperty"},
            {"AvatarParamName", 0xE8, "NameProperty"},
            {"PlayerMIDs", 0xF0, "MapProperty"},
            {"LocalPlayerViewModel", 0x100, "ObjectProperty"},
        }};
    };

    struct JunoMapElementProvider_Storms
    {
        static constexpr std::string_view Name = "JunoMapElementProvider_Storms";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StormLayerName = 0xB0;
            static constexpr std::uintptr_t StormMaterial = 0xC0;
            static constexpr std::uintptr_t LargeStormWorldSize = 0xC8;
            static constexpr std::uintptr_t SmallStormWorldSize = 0xCC;
            static constexpr std::uintptr_t StormImageSize = 0xD0;
            static constexpr std::uintptr_t StormMapLayers = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StormLayerName", 0xB0, "StrProperty"},
            {"StormMaterial", 0xC0, "ObjectProperty"},
            {"LargeStormWorldSize", 0xC8, "FloatProperty"},
            {"SmallStormWorldSize", 0xCC, "FloatProperty"},
            {"StormImageSize", 0xD0, "StructProperty"},
            {"StormMapLayers", 0xD8, "StructProperty"},
        }};
    };

    struct JunoMapElementProvider_Terrain
    {
        static constexpr std::string_view Name = "JunoMapElementProvider_Terrain";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TerrainLayerName = 0xB8;
            static constexpr std::uintptr_t FogOfWarLayerName = 0xC8;
            static constexpr std::uintptr_t TerrainMaterial = 0xD8;
            static constexpr std::uintptr_t BiomeTagMaterialMap = 0xF8;
            static constexpr std::uintptr_t FogOfWarMaterial = 0x108;
            static constexpr std::uintptr_t MapTileRegistry = 0x128;
            static constexpr std::uintptr_t TerrainMapLayers = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TerrainLayerName", 0xB8, "StrProperty"},
            {"FogOfWarLayerName", 0xC8, "StrProperty"},
            {"TerrainMaterial", 0xD8, "SoftObjectProperty"},
            {"BiomeTagMaterialMap", 0xF8, "MapProperty"},
            {"FogOfWarMaterial", 0x108, "SoftObjectProperty"},
            {"MapTileRegistry", 0x128, "ObjectProperty"},
            {"TerrainMapLayers", 0x140, "StructProperty"},
        }};
    };

    struct JunoMapLegendWidget
    {
        static constexpr std::string_view Name = "JunoMapLegendWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_TeamPlayers = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntryBox_TeamPlayers", 0x330, "ObjectProperty"},
        }};
    };

    struct JunoMapMarkerCustomizationEntry
    {
        static constexpr std::string_view Name = "JunoMapMarkerCustomizationEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Icon = 0x15E0;
            static constexpr std::uintptr_t Image_MarkerIcon = 0x1610;
            static constexpr std::uintptr_t ColorBorder = 0x1618;
            static constexpr std::uintptr_t Checkmark = 0x1620;
            static constexpr std::uintptr_t IconEntryBackgroundColor = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Icon", 0x15E0, "SoftObjectProperty"},
            {"Image_MarkerIcon", 0x1610, "ObjectProperty"},
            {"ColorBorder", 0x1618, "ObjectProperty"},
            {"Checkmark", 0x1620, "ObjectProperty"},
            {"IconEntryBackgroundColor", 0x1628, "StructProperty"},
        }};
    };

    struct JunoMapMarkerCustomizationScreen
    {
        static constexpr std::string_view Name = "JunoMapMarkerCustomizationScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedColor = 0x4A8;
            static constexpr std::uintptr_t SelectedIcon = 0x4B0;
            static constexpr std::uintptr_t EntryClass = 0x4B8;
            static constexpr std::uintptr_t RandomCampNameRegistry = 0x4C0;
            static constexpr std::uintptr_t ColorParamName = 0x4C4;
            static constexpr std::uintptr_t ColorPanel = 0x4C8;
            static constexpr std::uintptr_t IconPanel = 0x4D0;
            static constexpr std::uintptr_t ConfirmButton = 0x4D8;
            static constexpr std::uintptr_t ButtonGroup_AllIconSlots = 0x4E0;
            static constexpr std::uintptr_t ButtonGroup_AllColorSlots = 0x4E8;
            static constexpr std::uintptr_t Image_PreviewMarker = 0x4F0;
            static constexpr std::uintptr_t InitData = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SelectedColor", 0x4A8, "ObjectProperty"},
            {"SelectedIcon", 0x4B0, "ObjectProperty"},
            {"EntryClass", 0x4B8, "ClassProperty"},
            {"RandomCampNameRegistry", 0x4C0, "StructProperty"},
            {"ColorParamName", 0x4C4, "NameProperty"},
            {"ColorPanel", 0x4C8, "ObjectProperty"},
            {"IconPanel", 0x4D0, "ObjectProperty"},
            {"ConfirmButton", 0x4D8, "ObjectProperty"},
            {"ButtonGroup_AllIconSlots", 0x4E0, "ObjectProperty"},
            {"ButtonGroup_AllColorSlots", 0x4E8, "ObjectProperty"},
            {"Image_PreviewMarker", 0x4F0, "ObjectProperty"},
            {"InitData", 0x4F8, "ObjectProperty"},
        }};
    };

    struct JunoMapViewModel
    {
        static constexpr std::string_view Name = "JunoMapViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamPlayerAvatarViewModels = 0x78;
            static constexpr std::uintptr_t LocalPlayerAvatarViewModel = 0x88;
            static constexpr std::uintptr_t MapMaterialParameterCollection = 0x90;
            static constexpr std::uintptr_t AnchoringArrowMaterial = 0x98;
            static constexpr std::uintptr_t FastTravelIconMaterial = 0xA0;
            static constexpr std::uintptr_t OffscreenParamName = 0xA8;
            static constexpr std::uintptr_t FogOfWarMaterialParameterName = 0xAC;
            static constexpr std::uintptr_t FogOfWarScaleParameterName = 0xB0;
            static constexpr std::uintptr_t FogOfWarOffsetParameterName = 0xB4;
            static constexpr std::uintptr_t RandomSignParameterName = 0xB8;
            static constexpr std::uintptr_t RandomIntensityParameterName = 0xBC;
            static constexpr std::uintptr_t TerrainMaterialParameterName = 0xC0;
            static constexpr std::uintptr_t SkyIslandMaterialParameterName = 0xC4;
            static constexpr std::uintptr_t ZoomLevelMaterialParameterName = 0xC8;
            static constexpr std::uintptr_t MapContainerSizeXParameterName = 0xCC;
            static constexpr std::uintptr_t MapContainerSizeYParameterName = 0xD0;
            static constexpr std::uintptr_t MapContainerVerticalOffsetParameterName = 0xD4;
            static constexpr std::uintptr_t MinZoomParameterName = 0xD8;
            static constexpr std::uintptr_t MaxZoomParameterName = 0xDC;
            static constexpr std::uintptr_t EnabledRoundedCornersParameterName = 0xE0;
            static constexpr std::uintptr_t AnchoringArrowIconSize = 0xE4;
            static constexpr std::uintptr_t AnchorMapPadding = 0xE8;
            static constexpr std::uintptr_t MarkerCyclingDisplayDuration = 0xEC;
            static constexpr std::uintptr_t InContainerIconDistance = 0xF0;
            static constexpr std::uintptr_t WorldMetersInWidth = 0xF4;
            static constexpr std::uintptr_t ViewOverscrollLimit = 0xF8;
            static constexpr std::uintptr_t FastTravelIconOffset = 0xFC;
            static constexpr std::uintptr_t FastTravelIconDrawSize = 0x104;
            static constexpr std::uintptr_t MapLegendEntries = 0x110;
            static constexpr std::uintptr_t RemovedMapLegendEntries = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"TeamPlayerAvatarViewModels", 0x78, "MapProperty"},
            {"LocalPlayerAvatarViewModel", 0x88, "ObjectProperty"},
            {"MapMaterialParameterCollection", 0x90, "ObjectProperty"},
            {"AnchoringArrowMaterial", 0x98, "ObjectProperty"},
            {"FastTravelIconMaterial", 0xA0, "ObjectProperty"},
            {"OffscreenParamName", 0xA8, "NameProperty"},
            {"FogOfWarMaterialParameterName", 0xAC, "NameProperty"},
            {"FogOfWarScaleParameterName", 0xB0, "NameProperty"},
            {"FogOfWarOffsetParameterName", 0xB4, "NameProperty"},
            {"RandomSignParameterName", 0xB8, "NameProperty"},
            {"RandomIntensityParameterName", 0xBC, "NameProperty"},
            {"TerrainMaterialParameterName", 0xC0, "NameProperty"},
            {"SkyIslandMaterialParameterName", 0xC4, "NameProperty"},
            {"ZoomLevelMaterialParameterName", 0xC8, "NameProperty"},
            {"MapContainerSizeXParameterName", 0xCC, "NameProperty"},
            {"MapContainerSizeYParameterName", 0xD0, "NameProperty"},
            {"MapContainerVerticalOffsetParameterName", 0xD4, "NameProperty"},
            {"MinZoomParameterName", 0xD8, "NameProperty"},
            {"MaxZoomParameterName", 0xDC, "NameProperty"},
            {"EnabledRoundedCornersParameterName", 0xE0, "NameProperty"},
            {"AnchoringArrowIconSize", 0xE4, "FloatProperty"},
            {"AnchorMapPadding", 0xE8, "FloatProperty"},
            {"MarkerCyclingDisplayDuration", 0xEC, "FloatProperty"},
            {"InContainerIconDistance", 0xF0, "FloatProperty"},
            {"WorldMetersInWidth", 0xF4, "FloatProperty"},
            {"ViewOverscrollLimit", 0xF8, "FloatProperty"},
            {"FastTravelIconOffset", 0xFC, "StructProperty"},
            {"FastTravelIconDrawSize", 0x104, "StructProperty"},
            {"MapLegendEntries", 0x110, "SetProperty"},
            {"RemovedMapLegendEntries", 0x120, "SetProperty"},
        }};
    };

    struct JunoMapWidget
    {
        static constexpr std::string_view Name = "JunoMapWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMapViewModelSet = 0x308;
            static constexpr std::uintptr_t ZoomBounds = 0x318;
            static constexpr std::uintptr_t IconHoverScale = 0x324;
            static constexpr std::uintptr_t NonSelectableIconColor = 0x328;
            static constexpr std::uintptr_t MapBackgroundBrush = 0x340;
            static constexpr std::uintptr_t GameplayTags = 0x3F0;
            static constexpr std::uintptr_t InteractionContextTags = 0x410;
            static constexpr std::uintptr_t MapKey = 0x430;
            static constexpr std::uintptr_t bShowVirtualCursorForKBM = 0x434;
            static constexpr std::uintptr_t MapElementProviders = 0x448;
            static constexpr std::uintptr_t OnMapDragBlocked = 0x458;
            static constexpr std::uintptr_t OnMapClickedDynamic = 0x468;
            static constexpr std::uintptr_t VirtualCursorMaterial = 0x478;
            static constexpr std::uintptr_t WeakMapViewModel = 0x480;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OnMapViewModelSet", 0x308, "MulticastInlineDelegateProperty"},
            {"ZoomBounds", 0x318, "StructProperty"},
            {"IconHoverScale", 0x324, "FloatProperty"},
            {"NonSelectableIconColor", 0x328, "StructProperty"},
            {"MapBackgroundBrush", 0x340, "StructProperty"},
            {"GameplayTags", 0x3F0, "StructProperty"},
            {"InteractionContextTags", 0x410, "StructProperty"},
            {"MapKey", 0x430, "StructProperty"},
            {"bShowVirtualCursorForKBM", 0x434, "BoolProperty"},
            {"MapElementProviders", 0x448, "ArrayProperty"},
            {"OnMapDragBlocked", 0x458, "MulticastInlineDelegateProperty"},
            {"OnMapClickedDynamic", 0x468, "MulticastInlineDelegateProperty"},
            {"VirtualCursorMaterial", 0x478, "ObjectProperty"},
            {"WeakMapViewModel", 0x480, "WeakObjectProperty"},
        }};
    };

    struct JunoMissingMcpUnlocksViewModel
    {
        static constexpr std::string_view Name = "JunoMissingMcpUnlocksViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MissingMcpUnlocks = 0x68;
            static constexpr std::uintptr_t MissingMcpUnlockItems = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MissingMcpUnlocks", 0x68, "ArrayProperty"},
            {"MissingMcpUnlockItems", 0x78, "ArrayProperty"},
        }};
    };

    struct JunoModalSelectionContext
    {
        static constexpr std::string_view Name = "JunoModalSelectionContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x28;
            static constexpr std::uintptr_t Description = 0x38;
            static constexpr std::uintptr_t Choices = 0x48;
            static constexpr std::uintptr_t TouchCloseDelegate = 0x58;
            static constexpr std::uintptr_t InitObject = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Title", 0x28, "TextProperty"},
            {"Description", 0x38, "TextProperty"},
            {"Choices", 0x48, "ArrayProperty"},
            {"TouchCloseDelegate", 0x58, "MulticastInlineDelegateProperty"},
            {"InitObject", 0x68, "ObjectProperty"},
        }};
    };

    struct JunoNPCStatusWidgetBase
    {
        static constexpr std::string_view Name = "JunoNPCStatusWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimatedProgressBar = 0x4D8;
            static constexpr std::uintptr_t MinRadius = 0x4E4;
            static constexpr std::uintptr_t MaxRadius = 0x4E8;
            static constexpr std::uintptr_t MinScalingDistance = 0x4EC;
            static constexpr std::uintptr_t MaxScalingDistance = 0x4F0;
            static constexpr std::uintptr_t BuildingStaticUIScaleFactor = 0x4F4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AnimatedProgressBar", 0x4D8, "ObjectProperty"},
            {"MinRadius", 0x4E4, "FloatProperty"},
            {"MaxRadius", 0x4E8, "FloatProperty"},
            {"MinScalingDistance", 0x4EC, "FloatProperty"},
            {"MaxScalingDistance", 0x4F0, "FloatProperty"},
            {"BuildingStaticUIScaleFactor", 0x4F4, "FloatProperty"},
        }};
    };

    struct JunoNotificationHostWidget
    {
        static constexpr std::string_view Name = "JunoNotificationHostWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetSwitcher = 0x3B8;
            static constexpr std::uintptr_t TagToWidgetClassMap = 0x3C0;
            static constexpr std::uintptr_t TagToWidgetMap = 0x3D0;
            static constexpr std::uintptr_t RecipeFilterTags = 0x3E0;
            static constexpr std::uintptr_t PrioritizationData = 0x400;
            static constexpr std::uintptr_t EventsBeingAsyncLoaded = 0x408;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WidgetSwitcher", 0x3B8, "ObjectProperty"},
            {"TagToWidgetClassMap", 0x3C0, "MapProperty"},
            {"TagToWidgetMap", 0x3D0, "MapProperty"},
            {"RecipeFilterTags", 0x3E0, "StructProperty"},
            {"PrioritizationData", 0x400, "StructProperty"},
            {"EventsBeingAsyncLoaded", 0x408, "ArrayProperty"},
        }};
    };

    struct JunoNotificationWidget
    {
        static constexpr std::string_view Name = "JunoNotificationWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PrioData = 0x4E8;
            static constexpr std::uintptr_t QueuedNotifications = 0x4F0;
            static constexpr std::uintptr_t TouchEnhancedInputInjector = 0x500;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PrioData", 0x4E8, "StructProperty"},
            {"QueuedNotifications", 0x4F0, "ArrayProperty"},
            {"TouchEnhancedInputInjector", 0x500, "StructProperty"},
        }};
    };

    struct JunoNpcArmorViewModel
    {
        static constexpr std::string_view Name = "JunoNpcArmorViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ScalingFactor = 0x80;
            static constexpr std::uintptr_t ArmorPercentage = 0x84;
            static constexpr std::uintptr_t TrackedArmorActor = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ScalingFactor", 0x80, "FloatProperty"},
            {"ArmorPercentage", 0x84, "FloatProperty"},
            {"TrackedArmorActor", 0x88, "WeakObjectProperty"},
        }};
    };

    struct JunoNpcHealthViewModel
    {
        static constexpr std::string_view Name = "JunoNpcHealthViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ScalingFactor = 0x80;
            static constexpr std::uintptr_t HealthPercentage = 0x84;
            static constexpr std::uintptr_t ShieldPercentage = 0x88;
            static constexpr std::uintptr_t NpcHealthState = 0x8C;
            static constexpr std::uintptr_t LastDamageAffinityEvent = 0x90;
            static constexpr std::uintptr_t TrackedNpcPawn = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ScalingFactor", 0x80, "FloatProperty"},
            {"HealthPercentage", 0x84, "FloatProperty"},
            {"ShieldPercentage", 0x88, "FloatProperty"},
            {"NpcHealthState", 0x8C, "EnumProperty"},
            {"LastDamageAffinityEvent", 0x90, "StructProperty"},
            {"TrackedNpcPawn", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct JunoNullHUD
    {
        static constexpr std::string_view Name = "JunoNullHUD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNullHUD";
        struct Offsets
        {
            static constexpr std::uintptr_t AthenaHudMenu = 0x550;
            static constexpr std::uintptr_t ActionBar_BottomBar = 0x558;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AthenaHudMenu", 0x550, "ObjectProperty"},
            {"ActionBar_BottomBar", 0x558, "ObjectProperty"},
        }};
    };

    struct JunoOffhandWidget
    {
        static constexpr std::string_view Name = "JunoOffhandWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t QuickBarTouchItemRules = 0x388;
            static constexpr std::uintptr_t EntryBox_Slots = 0x390;
            static constexpr std::uintptr_t CachedOffhandWidgetSlots = 0x398;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QuickBarTouchItemRules", 0x388, "ObjectProperty"},
            {"EntryBox_Slots", 0x390, "ObjectProperty"},
            {"CachedOffhandWidgetSlots", 0x398, "ArrayProperty"},
        }};
    };

    struct JunoOffhandWidgetSlot
    {
        static constexpr std::string_view Name = "JunoOffhandWidgetSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemSlotData = 0x380;
            static constexpr std::uintptr_t InventorySlot_Item = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemSlotData", 0x380, "StructProperty"},
            {"InventorySlot_Item", 0x3D8, "ObjectProperty"},
        }};
    };

    struct JunoPickupStream
    {
        static constexpr std::string_view Name = "JunoPickupStream";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PickupDisplayPool = 0x370;
            static constexpr std::uintptr_t Pickups = 0x3B8;
            static constexpr std::uintptr_t MaxDisplayedItems = 0x3C8;
            static constexpr std::uintptr_t PickupEntryWidgetClass = 0x3D0;
            static constexpr std::uintptr_t ExpirationTime = 0x3D8;
            static constexpr std::uintptr_t VerticalBox_PickupMessages = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PickupDisplayPool", 0x370, "StructProperty"},
            {"Pickups", 0x3B8, "ArrayProperty"},
            {"MaxDisplayedItems", 0x3C8, "IntProperty"},
            {"PickupEntryWidgetClass", 0x3D0, "ClassProperty"},
            {"ExpirationTime", 0x3D8, "FloatProperty"},
            {"VerticalBox_PickupMessages", 0x3E0, "ObjectProperty"},
        }};
    };

    struct JunoPlayerBuffManagerViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerBuffManagerViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBuffAdded = 0x78;
            static constexpr std::uintptr_t ActiveBuffViewModels = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnBuffAdded", 0x78, "MulticastInlineDelegateProperty"},
            {"ActiveBuffViewModels", 0xA0, "ArrayProperty"},
        }};
    };

    struct JunoPlayerBuffViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerBuffViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayEffectClass = 0x78;
            static constexpr std::uintptr_t bIsInhibited = 0x80;
            static constexpr std::uintptr_t BuffMagnitude = 0x84;
            static constexpr std::uintptr_t duration = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GameplayEffectClass", 0x78, "ClassProperty"},
            {"bIsInhibited", 0x80, "BoolProperty"},
            {"BuffMagnitude", 0x84, "FloatProperty"},
            {"duration", 0x88, "FloatProperty"},
        }};
    };

    struct JunoPlayerCurrenciesViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerCurrenciesViewModel";
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

    struct JunoPlayerCurrencyViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerCurrencyViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrencyItemDefinition = 0x80;
            static constexpr std::uintptr_t CurrentBalance = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrencyItemDefinition", 0x80, "SoftObjectProperty"},
            {"CurrentBalance", 0xA8, "IntProperty"},
        }};
    };

    struct JunoPlayerHealthViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerHealthViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentRawValue = 0x78;
            static constexpr std::uintptr_t PreviousRawValue = 0x7C;
            static constexpr std::uintptr_t MaxRawValue = 0x80;
            static constexpr std::uintptr_t BonusRawValue = 0x84;
            static constexpr std::uintptr_t CurrentPctValue = 0x88;
            static constexpr std::uintptr_t PreviousPctValue = 0x8C;
            static constexpr std::uintptr_t MinimumMaxHealthClampValue = 0x90;
            static constexpr std::uintptr_t LowHealthThresholdCurve = 0x98;
            static constexpr std::uintptr_t bLowHealth = 0xA8;
            static constexpr std::uintptr_t RevivalPercentComplete = 0xAC;
            static constexpr std::uintptr_t CurrentShield = 0xB0;
            static constexpr std::uintptr_t MaxShield = 0xB4;
            static constexpr std::uintptr_t bPermadeathOn = 0xB8;
            static constexpr std::uintptr_t PlayerState = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"CurrentRawValue", 0x78, "FloatProperty"},
            {"PreviousRawValue", 0x7C, "FloatProperty"},
            {"MaxRawValue", 0x80, "FloatProperty"},
            {"BonusRawValue", 0x84, "FloatProperty"},
            {"CurrentPctValue", 0x88, "FloatProperty"},
            {"PreviousPctValue", 0x8C, "FloatProperty"},
            {"MinimumMaxHealthClampValue", 0x90, "FloatProperty"},
            {"LowHealthThresholdCurve", 0x98, "StructProperty"},
            {"bLowHealth", 0xA8, "BoolProperty"},
            {"RevivalPercentComplete", 0xAC, "FloatProperty"},
            {"CurrentShield", 0xB0, "FloatProperty"},
            {"MaxShield", 0xB4, "FloatProperty"},
            {"bPermadeathOn", 0xB8, "BoolProperty"},
            {"PlayerState", 0xD0, "WeakObjectProperty"},
        }};
    };

    struct JunoPlayerIndicatorWidget
    {
        static constexpr std::string_view Name = "JunoPlayerIndicatorWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bCollapseInfoOnClamp = 0x4D0;
            static constexpr std::uintptr_t MinDistanceToDisplayInfo = 0x4D4;
            static constexpr std::uintptr_t Text_Distance = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bCollapseInfoOnClamp", 0x4D0, "BoolProperty"},
            {"MinDistanceToDisplayInfo", 0x4D4, "FloatProperty"},
            {"Text_Distance", 0x4E0, "ObjectProperty"},
        }};
    };

    struct JunoPlayerInventoryContainer
    {
        static constexpr std::string_view Name = "JunoPlayerInventoryContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningPlayer = 0x330;
            static constexpr std::uintptr_t Group_MainInventory = 0x338;
            static constexpr std::uintptr_t Group_MainHand = 0x340;
            static constexpr std::uintptr_t GroupList = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OwningPlayer", 0x330, "WeakObjectProperty"},
            {"Group_MainInventory", 0x338, "ObjectProperty"},
            {"Group_MainHand", 0x340, "ObjectProperty"},
            {"GroupList", 0x348, "ArrayProperty"},
        }};
    };

    struct JunoPlayerInventoryViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerInventoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoActorInventoryViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SwappingMethod = 0xC8;
            static constexpr std::uintptr_t SwappingSourceSlot = 0xD0;
            static constexpr std::uintptr_t SwappingDestinationSlot = 0xD8;
            static constexpr std::uintptr_t SelectedSlot = 0xE0;
            static constexpr std::uintptr_t ActiveContextMenuSlot = 0xE8;
            static constexpr std::uintptr_t SelectedQuickbarSlot = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SwappingMethod", 0xC8, "EnumProperty"},
            {"SwappingSourceSlot", 0xD0, "ObjectProperty"},
            {"SwappingDestinationSlot", 0xD8, "ObjectProperty"},
            {"SelectedSlot", 0xE0, "ObjectProperty"},
            {"ActiveContextMenuSlot", 0xE8, "ObjectProperty"},
            {"SelectedQuickbarSlot", 0xF0, "StructProperty"},
        }};
    };

    struct JunoPlayerManagementScreen
    {
        static constexpr std::string_view Name = "JunoPlayerManagementScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_Close = 0x4E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Button_Close", 0x4E8, "ObjectProperty"},
        }};
    };

    struct JunoPlayerStateComponent_UITutorialFlow
    {
        static constexpr std::string_view Name = "JunoPlayerStateComponent_UITutorialFlow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTutorialEnabledCVarChanged = 0xC0;
            static constexpr std::uintptr_t OnTutorialStageChanged = 0xD0;
            static constexpr std::uintptr_t OnTutorialFinished = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnTutorialEnabledCVarChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnTutorialStageChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnTutorialFinished", 0xE0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoPlayerStateComponent_UIViewModels
    {
        static constexpr std::string_view Name = "JunoPlayerStateComponent_UIViewModels";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewModels = 0xC0;
            static constexpr std::uintptr_t QuestViewModels = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ViewModels", 0xC0, "ArrayProperty"},
            {"QuestViewModels", 0xD0, "ArrayProperty"},
        }};
    };

    struct JunoPlayerStateUIViewModelsResolver
    {
        static constexpr std::string_view Name = "JunoPlayerStateUIViewModelsResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelContextResolver";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPooledWidget
    {
        static constexpr std::string_view Name = "JunoPooledWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoProcessingInventoryGroup
    {
        static constexpr std::string_view Name = "JunoProcessingInventoryGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ProcessingSlotClass = 0x330;
            static constexpr std::uintptr_t GroupTag = 0x338;
            static constexpr std::uintptr_t TrackedInventorySlots = 0x340;
            static constexpr std::uintptr_t GridPanel_Slots = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ProcessingSlotClass", 0x330, "ClassProperty"},
            {"GroupTag", 0x338, "StructProperty"},
            {"TrackedInventorySlots", 0x340, "ArrayProperty"},
            {"GridPanel_Slots", 0x350, "ObjectProperty"},
        }};
    };

    struct JunoProcessingSlot
    {
        static constexpr std::string_view Name = "JunoProcessingSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryOwner = 0x340;
            static constexpr std::uintptr_t SlotData = 0x348;
            static constexpr std::uintptr_t Image_SlotIcon = 0x3A8;
            static constexpr std::uintptr_t Image_Progress = 0x3B0;
            static constexpr std::uintptr_t CurrentCraftingProcess = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InventoryOwner", 0x340, "ObjectProperty"},
            {"SlotData", 0x348, "StructProperty"},
            {"Image_SlotIcon", 0x3A8, "ObjectProperty"},
            {"Image_Progress", 0x3B0, "ObjectProperty"},
            {"CurrentCraftingProcess", 0x3B8, "StructProperty"},
        }};
    };

    struct JunoQuickBuildRadialPicker
    {
        static constexpr std::string_view Name = "JunoQuickBuildRadialPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PickerOverlay_QuickBuildItems = 0x4A8;
            static constexpr std::uintptr_t EntryBox_Ingredients = 0x4B0;
            static constexpr std::uintptr_t QuickBuildSelectionData = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PickerOverlay_QuickBuildItems", 0x4A8, "ObjectProperty"},
            {"EntryBox_Ingredients", 0x4B0, "ObjectProperty"},
            {"QuickBuildSelectionData", 0x4B8, "ObjectProperty"},
        }};
    };

    struct JunoQuickBuildingHudStateWidget
    {
        static constexpr std::string_view Name = "JunoQuickBuildingHudStateWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentQuickBuildActor = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentQuickBuildActor", 0x330, "WeakObjectProperty"},
        }};
    };

    struct JunoQuickSlotRadialPicker
    {
        static constexpr std::string_view Name = "JunoQuickSlotRadialPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PickerOverlay_Items = 0x4A0;
            static constexpr std::uintptr_t CloseMenuAction = 0x4A8;
            static constexpr std::uintptr_t Text_ItemName = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PickerOverlay_Items", 0x4A0, "ObjectProperty"},
            {"CloseMenuAction", 0x4A8, "ObjectProperty"},
            {"Text_ItemName", 0x4B0, "ObjectProperty"},
        }};
    };

    struct JunoQuickbar
    {
        static constexpr std::string_view Name = "JunoQuickbar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnQuickbarSlotsInitialized = 0x370;
            static constexpr std::uintptr_t QuickBarTouchItemRules = 0x380;
            static constexpr std::uintptr_t JunoOffhandWidget = 0x388;
            static constexpr std::uintptr_t JunoInventoryDragAndDropHandler = 0x390;
            static constexpr std::uintptr_t ButtonGroup_AllSlots = 0x398;
            static constexpr std::uintptr_t EntryBox_Slots = 0x3A8;
            static constexpr std::uintptr_t CachedQuickbarSlots = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnQuickbarSlotsInitialized", 0x370, "MulticastInlineDelegateProperty"},
            {"QuickBarTouchItemRules", 0x380, "ObjectProperty"},
            {"JunoOffhandWidget", 0x388, "ObjectProperty"},
            {"JunoInventoryDragAndDropHandler", 0x390, "ObjectProperty"},
            {"ButtonGroup_AllSlots", 0x398, "ObjectProperty"},
            {"EntryBox_Slots", 0x3A8, "ObjectProperty"},
            {"CachedQuickbarSlots", 0x3B0, "ArrayProperty"},
        }};
    };

    struct JunoQuickbarItemRules
    {
        static constexpr std::string_view Name = "JunoQuickbarItemRules";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CanBeUsedInQuickbarQuery = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CanBeUsedInQuickbarQuery", 0x28, "StructProperty"},
        }};
    };

    struct JunoQuickbarSlot
    {
        static constexpr std::string_view Name = "JunoQuickbarSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InventorySlot_Item = 0x340;
            static constexpr std::uintptr_t Keybind_Keyboard = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InventorySlot_Item", 0x340, "ObjectProperty"},
            {"Keybind_Keyboard", 0x348, "ObjectProperty"},
        }};
    };

    struct JunoRadialItemPickerEntry
    {
        static constexpr std::string_view Name = "JunoRadialItemPickerEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRadialPickerEntry";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalBox_EntryName = 0x1670;
            static constexpr std::uintptr_t Text_Center = 0x1678;
            static constexpr std::uintptr_t HorizontalBox_CenterText = 0x1680;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HorizontalBox_EntryName", 0x1670, "ObjectProperty"},
            {"Text_Center", 0x1678, "ObjectProperty"},
            {"HorizontalBox_CenterText", 0x1680, "ObjectProperty"},
        }};
    };

    struct JunoRecipeCategoryViewModel
    {
        static constexpr std::string_view Name = "JunoRecipeCategoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryUIData = 0x78;
            static constexpr std::uintptr_t Recipes = 0xE0;
            static constexpr std::uintptr_t RecipesMap = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CategoryUIData", 0x78, "StructProperty"},
            {"Recipes", 0xE0, "ArrayProperty"},
            {"RecipesMap", 0xF0, "MapProperty"},
        }};
    };

    struct JunoRecipeCraftingCategoryUIData
    {
        static constexpr std::string_view Name = "JunoRecipeCraftingCategoryUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingCategoryUIData = 0x28;
            static constexpr std::uintptr_t CraftingStationUIDataRegistryType = 0x30;
            static constexpr std::uintptr_t IgnoredCraftingCategories = 0x38;
            static constexpr std::uintptr_t BuildingGroups = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CraftingCategoryUIData", 0x28, "ObjectProperty"},
            {"CraftingStationUIDataRegistryType", 0x30, "StructProperty"},
            {"IgnoredCraftingCategories", 0x38, "StructProperty"},
            {"BuildingGroups", 0x58, "ArrayProperty"},
        }};
    };

    struct JunoRecipeDetailsWidget
    {
        static constexpr std::string_view Name = "JunoRecipeDetailsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanCraft = 0x330;
            static constexpr std::uintptr_t bDisableInfiniteIcon = 0x331;
            static constexpr std::uintptr_t IngredientRequirements = 0x348;
            static constexpr std::uintptr_t CraftingObject = 0x358;
            static constexpr std::uintptr_t SelectedSavedBuildViewModel = 0x360;
            static constexpr std::uintptr_t CurrentRecipe = 0x368;
            static constexpr std::uintptr_t CurrentSavedBuildId = 0x36C;
            static constexpr std::uintptr_t EntryBox_Ingredients = 0x388;
            static constexpr std::uintptr_t ScrollBox_Ingredients = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bCanCraft", 0x330, "BoolProperty"},
            {"bDisableInfiniteIcon", 0x331, "BoolProperty"},
            {"IngredientRequirements", 0x348, "ArrayProperty"},
            {"CraftingObject", 0x358, "WeakObjectProperty"},
            {"SelectedSavedBuildViewModel", 0x360, "ObjectProperty"},
            {"CurrentRecipe", 0x368, "NameProperty"},
            {"CurrentSavedBuildId", 0x36C, "StructProperty"},
            {"EntryBox_Ingredients", 0x388, "ObjectProperty"},
            {"ScrollBox_Ingredients", 0x390, "ObjectProperty"},
        }};
    };

    struct JunoRecipeEntryViewModel
    {
        static constexpr std::string_view Name = "JunoRecipeEntryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingFormulaRowName = 0x78;
            static constexpr std::uintptr_t CraftingFormula = 0x80;
            static constexpr std::uintptr_t ItemDefinition = 0x170;
            static constexpr std::uintptr_t CraftedCount = 0x178;
            static constexpr std::uintptr_t IngredientRequirements = 0x180;
            static constexpr std::uintptr_t bHasMultipleCraftingResults = 0x190;
            static constexpr std::uintptr_t IsRecipeTracked = 0x191;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CraftingFormulaRowName", 0x78, "NameProperty"},
            {"CraftingFormula", 0x80, "StructProperty"},
            {"ItemDefinition", 0x170, "ObjectProperty"},
            {"CraftedCount", 0x178, "IntProperty"},
            {"IngredientRequirements", 0x180, "ArrayProperty"},
            {"bHasMultipleCraftingResults", 0x190, "BoolProperty"},
            {"IsRecipeTracked", 0x191, "BoolProperty"},
        }};
    };

    struct JunoRecipeFilterButton
    {
        static constexpr std::string_view Name = "JunoRecipeFilterButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingObject = 0x15D0;
            static constexpr std::uintptr_t JunoBangWidget = 0x15E8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CraftingObject", 0x15D0, "WeakObjectProperty"},
            {"JunoBangWidget", 0x15E8, "ObjectProperty"},
        }};
    };

    struct JunoRecipeHeaderWidget
    {
        static constexpr std::string_view Name = "JunoRecipeHeaderWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_Name = 0x15D8;
            static constexpr std::uintptr_t RecipeListObject = 0x15E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text_Name", 0x15D8, "ObjectProperty"},
            {"RecipeListObject", 0x15E0, "ObjectProperty"},
        }};
    };

    struct JunoRecipeListEntry
    {
        static constexpr std::string_view Name = "JunoRecipeListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextMenuAnchor = 0x15D8;
            static constexpr std::uintptr_t JunoBangWidget = 0x15E0;
            static constexpr std::uintptr_t RecipeListObject = 0x15E8;
            static constexpr std::uintptr_t ContextMenuClass = 0x1610;
            static constexpr std::uintptr_t MaxCraftCount = 0x1668;
            static constexpr std::uintptr_t bCanCraft = 0x166C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ContextMenuAnchor", 0x15D8, "ObjectProperty"},
            {"JunoBangWidget", 0x15E0, "ObjectProperty"},
            {"RecipeListObject", 0x15E8, "ObjectProperty"},
            {"ContextMenuClass", 0x1610, "ClassProperty"},
            {"MaxCraftCount", 0x1668, "IntProperty"},
            {"bCanCraft", 0x166C, "BoolProperty"},
        }};
    };

    struct JunoRecipeListObject
    {
        static constexpr std::string_view Name = "JunoRecipeListObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingObject = 0x30;
            static constexpr std::uintptr_t RecipeScreen = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CraftingObject", 0x30, "WeakObjectProperty"},
            {"RecipeScreen", 0x38, "WeakObjectProperty"},
        }};
    };

    struct JunoRecipeScreenBase
    {
        static constexpr std::string_view Name = "JunoRecipeScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakCraftingObject = 0x4D8;
            static constexpr std::uintptr_t RecipeDetailsWidget = 0x4E0;
            static constexpr std::uintptr_t Button_TouchSelect = 0x4E8;
            static constexpr std::uintptr_t Button_Back = 0x4F0;
            static constexpr std::uintptr_t Button_TouchClose = 0x4F8;
            static constexpr std::uintptr_t RecipeList = 0x500;
            static constexpr std::uintptr_t HeaderPrefix = 0x508;
            static constexpr std::uintptr_t SkipSortOnInventoryChange = 0x50C;
            static constexpr std::uintptr_t WeakSelectedRecipe = 0x510;
            static constexpr std::uintptr_t CurrentRecipes = 0x518;
            static constexpr std::uintptr_t FilterTabWidget = 0x528;
            static constexpr std::uintptr_t HeaderEntryType = 0x530;
            static constexpr std::uintptr_t RecipeEntryType = 0x534;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"WeakCraftingObject", 0x4D8, "WeakObjectProperty"},
            {"RecipeDetailsWidget", 0x4E0, "ObjectProperty"},
            {"Button_TouchSelect", 0x4E8, "ObjectProperty"},
            {"Button_Back", 0x4F0, "ObjectProperty"},
            {"Button_TouchClose", 0x4F8, "ObjectProperty"},
            {"RecipeList", 0x500, "ObjectProperty"},
            {"HeaderPrefix", 0x508, "StructProperty"},
            {"SkipSortOnInventoryChange", 0x50C, "BoolProperty"},
            {"WeakSelectedRecipe", 0x510, "WeakObjectProperty"},
            {"CurrentRecipes", 0x518, "ArrayProperty"},
            {"FilterTabWidget", 0x528, "ClassProperty"},
            {"HeaderEntryType", 0x530, "NameProperty"},
            {"RecipeEntryType", 0x534, "NameProperty"},
        }};
    };

    struct JunoRecipeVisibilityViewModel
    {
        static constexpr std::string_view Name = "JunoRecipeVisibilityViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoReticleContainerWidget
    {
        static constexpr std::string_view Name = "JunoReticleContainerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ReticleSwitcher = 0x378;
            static constexpr std::uintptr_t ReticleOverrideSlot = 0x380;
            static constexpr std::uintptr_t FortReticleWidget = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ReticleSwitcher", 0x378, "ObjectProperty"},
            {"ReticleOverrideSlot", 0x380, "ObjectProperty"},
            {"FortReticleWidget", 0x388, "ObjectProperty"},
        }};
    };

    struct JunoRewardBaseVM
    {
        static constexpr std::string_view Name = "JunoRewardBaseVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Icon = 0x78;
            static constexpr std::uintptr_t Name = 0x98;
            static constexpr std::uintptr_t Count = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Icon", 0x78, "SoftObjectProperty"},
            {"Name", 0x98, "TextProperty"},
            {"Count", 0xA8, "IntProperty"},
        }};
    };

    struct JunoRewardsBaseVM
    {
        static constexpr std::string_view Name = "JunoRewardsBaseVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t IndividualRewards = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IndividualRewards", 0x78, "ArrayProperty"},
        }};
    };

    struct JunoSavedBuildDraftViewModel
    {
        static constexpr std::string_view Name = "JunoSavedBuildDraftViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSaveFinished = 0x68;
            static constexpr std::uintptr_t DisplayName = 0x78;
            static constexpr std::uintptr_t IconRowName = 0x88;
            static constexpr std::uintptr_t IconColor = 0x8C;
            static constexpr std::uintptr_t bIsValid = 0x90;
            static constexpr std::uintptr_t bSaveInFlight = 0x91;
            static constexpr std::uintptr_t MissingMcpUnlocks = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnSaveFinished", 0x68, "MulticastInlineDelegateProperty"},
            {"DisplayName", 0x78, "StrProperty"},
            {"IconRowName", 0x88, "NameProperty"},
            {"IconColor", 0x8C, "StructProperty"},
            {"bIsValid", 0x90, "BoolProperty"},
            {"bSaveInFlight", 0x91, "BoolProperty"},
            {"MissingMcpUnlocks", 0x98, "ObjectProperty"},
        }};
    };

    struct JunoSavedBuildIconLibrary
    {
        static constexpr std::string_view Name = "JunoSavedBuildIconLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoSavedBuildListEntry
    {
        static constexpr std::string_view Name = "JunoSavedBuildListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RecipeListObject = 0x15D8;
            static constexpr std::uintptr_t SavedBuildViewModel = 0x15E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RecipeListObject", 0x15D8, "ObjectProperty"},
            {"SavedBuildViewModel", 0x15E0, "ObjectProperty"},
        }};
    };

    struct JunoSavedBuildViewModel
    {
        static constexpr std::string_view Name = "JunoSavedBuildViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDeleteFinished = 0x68;
            static constexpr std::uintptr_t OnUpdateDisplayInfoFinished = 0x78;
            static constexpr std::uintptr_t MissingMcpUnlocks = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnDeleteFinished", 0x68, "MulticastInlineDelegateProperty"},
            {"OnUpdateDisplayInfoFinished", 0x78, "MulticastInlineDelegateProperty"},
            {"MissingMcpUnlocks", 0x88, "ObjectProperty"},
        }};
    };

    struct JunoSelectionModal
    {
        static constexpr std::string_view Name = "JunoSelectionModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionButtonClass = 0x4A0;
            static constexpr std::uintptr_t Button_TouchClose = 0x4A8;
            static constexpr std::uintptr_t SelectionContext = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SelectionButtonClass", 0x4A0, "ClassProperty"},
            {"Button_TouchClose", 0x4A8, "ObjectProperty"},
            {"SelectionContext", 0x4B0, "ObjectProperty"},
        }};
    };

    struct JunoSimpleItemDefViewModel
    {
        static constexpr std::string_view Name = "JunoSimpleItemDefViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0x70;
            static constexpr std::uintptr_t bIsLoaded = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemDefinition", 0x70, "ObjectProperty"},
            {"bIsLoaded", 0x78, "BoolProperty"},
        }};
    };

    struct JunoTaggedWidgetData
    {
        static constexpr std::string_view Name = "JunoTaggedWidgetData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TaggedWidgetScenes = 0x28;
            static constexpr std::uintptr_t TaggedWidgets = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TaggedWidgetScenes", 0x28, "MapProperty"},
            {"TaggedWidgets", 0x38, "MapProperty"},
        }};
    };

    struct JunoTaskTrackingWidget
    {
        static constexpr std::string_view Name = "JunoTaskTrackingWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct JunoToyParametersEntryVM
    {
        static constexpr std::string_view Name = "JunoToyParametersEntryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterId = 0x68;
            static constexpr std::uintptr_t Title = 0x70;
            static constexpr std::uintptr_t ValueLabels = 0x80;
            static constexpr std::uintptr_t MapIndexValue = 0x90;
            static constexpr std::uintptr_t SelectedValueIndex = 0xA0;
            static constexpr std::uintptr_t ToyAbilities = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ParameterId", 0x68, "NameProperty"},
            {"Title", 0x70, "TextProperty"},
            {"ValueLabels", 0x80, "ArrayProperty"},
            {"MapIndexValue", 0x90, "ArrayProperty"},
            {"SelectedValueIndex", 0xA0, "IntProperty"},
            {"ToyAbilities", 0xA8, "SoftObjectProperty"},
        }};
    };

    struct JunoTrackRecipeWidget
    {
        static constexpr std::string_view Name = "JunoTrackRecipeWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_Ingredients = 0x390;
            static constexpr std::uintptr_t JunoIngredientWidgets = 0x3A0;
            static constexpr std::uintptr_t bWasAutoTracked = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EntryBox_Ingredients", 0x390, "ObjectProperty"},
            {"JunoIngredientWidgets", 0x3A0, "MapProperty"},
            {"bWasAutoTracked", 0x3B0, "BoolProperty"},
        }};
    };

    struct JunoTrackingWidgetViewModel
    {
        static constexpr std::string_view Name = "JunoTrackingWidgetViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveTrackedWidgets = 0x78;
            static constexpr std::uintptr_t bShowTrackingWidget = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveTrackedWidgets", 0x78, "MapProperty"},
            {"bShowTrackingWidget", 0x88, "BoolProperty"},
        }};
    };

    struct JunoUIFunctionLibrary
    {
        static constexpr std::string_view Name = "JunoUIFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoUIGameFeatureAction_AddHUDMenuTab
    {
        static constexpr std::string_view Name = "JunoUIGameFeatureAction_AddHUDMenuTab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t TabNameId = 0x28;
            static constexpr std::uintptr_t TabButtonType = 0x30;
            static constexpr std::uintptr_t TabContentType = 0x50;
            static constexpr std::uintptr_t TabButtonLabelInfo = 0x70;
            static constexpr std::uintptr_t Priority = 0x160;
            static constexpr std::uintptr_t bOnlyForWorldOwner = 0x164;
            static constexpr std::uintptr_t Style = 0x165;
            static constexpr std::uintptr_t OptionalBooleanGatingCVar = 0x168;
            static constexpr std::uintptr_t bOptionalBooleanGatingValue = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TabNameId", 0x28, "NameProperty"},
            {"TabButtonType", 0x30, "SoftClassProperty"},
            {"TabContentType", 0x50, "SoftClassProperty"},
            {"TabButtonLabelInfo", 0x70, "StructProperty"},
            {"Priority", 0x160, "IntProperty"},
            {"bOnlyForWorldOwner", 0x164, "BoolProperty"},
            {"Style", 0x165, "EnumProperty"},
            {"OptionalBooleanGatingCVar", 0x168, "StrProperty"},
            {"bOptionalBooleanGatingValue", 0x178, "BoolProperty"},
        }};
    };

    struct JunoUIGameFeatureAction_AddScheduledWidgetAlias
    {
        static constexpr std::string_view Name = "JunoUIGameFeatureAction_AddScheduledWidgetAlias";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction_AddWidgetAlias";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledFeatureRange = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnabledFeatureRange", 0x40, "StructProperty"},
        }};
    };

    struct JunoUIGameFeatureAction_ExcludeHUDMenuTabs
    {
        static constexpr std::string_view Name = "JunoUIGameFeatureAction_ExcludeHUDMenuTabs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t TabsToExclude = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TabsToExclude", 0x28, "SetProperty"},
        }};
    };

    struct JunoVillageMenuInitData
    {
        static constexpr std::string_view Name = "JunoVillageMenuInitData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoHudMenuBaseInitData";
        struct Offsets
        {
            static constexpr std::uintptr_t CampActor = 0x30;
            static constexpr std::uintptr_t CampActorMembershipActorComponent = 0x38;
            static constexpr std::uintptr_t AwesomeLevelComponent = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CampActor", 0x30, "ObjectProperty"},
            {"CampActorMembershipActorComponent", 0x38, "ObjectProperty"},
            {"AwesomeLevelComponent", 0x40, "ObjectProperty"},
        }};
    };

    struct JunoVillageRequiredAwesomePointsInterface
    {
        static constexpr std::string_view Name = "JunoVillageRequiredAwesomePointsInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoVillageRewardEntry
    {
        static constexpr std::string_view Name = "JunoVillageRewardEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VillageRewardEntryInfo = 0x15D8;
            static constexpr std::uintptr_t ParentVillageUIData = 0x1648;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VillageRewardEntryInfo", 0x15D8, "StructProperty"},
            {"ParentVillageUIData", 0x1648, "StructProperty"},
        }};
    };

    struct JunoVillageScreenBase
    {
        static constexpr std::string_view Name = "JunoVillageScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_Back = 0x4D0;
            static constexpr std::uintptr_t VillageUIData = 0x4D8;
            static constexpr std::uintptr_t CampActor = 0x700;
            static constexpr std::uintptr_t CampMembershipActorComponent = 0x708;
            static constexpr std::uintptr_t AwesomeLevelComponent = 0x710;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Button_Back", 0x4D0, "ObjectProperty"},
            {"VillageUIData", 0x4D8, "StructProperty"},
            {"CampActor", 0x700, "ObjectProperty"},
            {"CampMembershipActorComponent", 0x708, "ObjectProperty"},
            {"AwesomeLevelComponent", 0x710, "ObjectProperty"},
        }};
    };

    struct JunoVillageTownBuilderQuestEntry
    {
        static constexpr std::string_view Name = "JunoVillageTownBuilderQuestEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinitionTagQueryDescription = 0x338;
            static constexpr std::uintptr_t ItemDefinitionTagQueryTags = 0x348;
            static constexpr std::uintptr_t ItemDefinition = 0x358;
            static constexpr std::uintptr_t Name = 0x360;
            static constexpr std::uintptr_t Description = 0x370;
            static constexpr std::uintptr_t Icon = 0x380;
            static constexpr std::uintptr_t StepIndex = 0x3A0;
            static constexpr std::uintptr_t StepCount = 0x3A4;
            static constexpr std::uintptr_t bIsComplete = 0x3A8;
            static constexpr std::uintptr_t bIsOsirisCamp = 0x3A9;
            static constexpr std::uintptr_t bIsTownbuilder = 0x3AA;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ItemDefinitionTagQueryDescription", 0x338, "StrProperty"},
            {"ItemDefinitionTagQueryTags", 0x348, "ArrayProperty"},
            {"ItemDefinition", 0x358, "ObjectProperty"},
            {"Name", 0x360, "TextProperty"},
            {"Description", 0x370, "TextProperty"},
            {"Icon", 0x380, "SoftObjectProperty"},
            {"StepIndex", 0x3A0, "IntProperty"},
            {"StepCount", 0x3A4, "IntProperty"},
            {"bIsComplete", 0x3A8, "BoolProperty"},
            {"bIsOsirisCamp", 0x3A9, "BoolProperty"},
            {"bIsTownbuilder", 0x3AA, "BoolProperty"},
        }};
    };

    struct JunoVillageUIDataAsset
    {
        static constexpr std::string_view Name = "JunoVillageUIDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PerkTagToIcon = 0x28;
            static constexpr std::uintptr_t RoleTagToIcon = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PerkTagToIcon", 0x28, "MapProperty"},
            {"RoleTagToIcon", 0x38, "MapProperty"},
        }};
    };

    struct JunoVillageUpgradeCelebrationScreen
    {
        static constexpr std::string_view Name = "JunoVillageUpgradeCelebrationScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct JunoWeaponsBarViewModel
    {
        static constexpr std::string_view Name = "JunoWeaponsBarViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponSlots = 0x78;
            static constexpr std::uintptr_t AbilityWeaponSlots = 0x88;
            static constexpr std::uintptr_t bHasAbilityWeapons = 0x98;
            static constexpr std::uintptr_t ActiveWeapon = 0xA0;
            static constexpr std::uintptr_t bIsMarsPlaylist = 0xA8;
            static constexpr std::uintptr_t TemporaryWeaponSlot = 0xB0;
            static constexpr std::uintptr_t ActiveQuickbarSlotIndex = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"WeaponSlots", 0x78, "ArrayProperty"},
            {"AbilityWeaponSlots", 0x88, "ArrayProperty"},
            {"bHasAbilityWeapons", 0x98, "BoolProperty"},
            {"ActiveWeapon", 0xA0, "ObjectProperty"},
            {"bIsMarsPlaylist", 0xA8, "BoolProperty"},
            {"TemporaryWeaponSlot", 0xB0, "ObjectProperty"},
            {"ActiveQuickbarSlotIndex", 0xB8, "IntProperty"},
        }};
    };

    struct JunoWidgetPoolSubsystem
    {
        static constexpr std::string_view Name = "JunoWidgetPoolSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetPool = 0x30;
            static constexpr std::uintptr_t AcquiredWidgetsMapping = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WidgetPool", 0x30, "StructProperty"},
            {"AcquiredWidgetsMapping", 0x60, "MapProperty"},
        }};
    };

    struct JunoWorldManagementUIComponent
    {
        static constexpr std::string_view Name = "JunoWorldManagementUIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct Juno_GFA_AddMapElementProviders
    {
        static constexpr std::string_view Name = "Juno_GFA_AddMapElementProviders";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementProviders = 0x30;
            static constexpr std::uintptr_t LoadedElementProviders = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ElementProviders", 0x30, "ArrayProperty"},
            {"LoadedElementProviders", 0x40, "ArrayProperty"},
        }};
    };

    struct Juno_GFA_RegisterMapViewModelClasses
    {
        static constexpr std::string_view Name = "Juno_GFA_RegisterMapViewModelClasses";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t MapViewModelClasses = 0x30;
            static constexpr std::uintptr_t MapViewModelLoadedClassRefs = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MapViewModelClasses", 0x30, "MapProperty"},
            {"MapViewModelLoadedClassRefs", 0x40, "MapProperty"},
        }};
    };

    struct PermaDeathFlowInitData
    {
        static constexpr std::string_view Name = "PermaDeathFlowInitData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldOpenOnPlayerManagement = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShouldOpenOnPlayerManagement", 0x28, "BoolProperty"},
        }};
    };

    struct PermaDeathFlowScreen
    {
        static constexpr std::string_view Name = "PermaDeathFlowScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
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

}
