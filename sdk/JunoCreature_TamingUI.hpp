#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoCreature_TamingUI
{
    struct JunoBarnAssignmentListEntry
    {
        static constexpr std::string_view Name = "JunoBarnAssignmentListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t BarnAssignmentListObject = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BarnAssignmentListObject", 0x1628, "ObjectProperty"},
        }};
    };

    struct JunoBarnAssignmentListObject
    {
        static constexpr std::string_view Name = "JunoBarnAssignmentListObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Icon = 0x50;
            static constexpr std::uintptr_t AnimalActor = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Icon", 0x50, "SoftObjectProperty"},
            {"AnimalActor", 0x74, "WeakObjectProperty"},
        }};
    };

    struct JunoBarnAssignmentMenuContainer
    {
        static constexpr std::string_view Name = "JunoBarnAssignmentMenuContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BarnAssignmentScreen = 0x4A8;
            static constexpr std::uintptr_t BarnNameAnimalScreen = 0x4B0;
            static constexpr std::uintptr_t WidgetSwitcher_Screens = 0x4B8;
            static constexpr std::uintptr_t JunoBarnAssignmentMenuInitData = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BarnAssignmentScreen", 0x4A8, "ObjectProperty"},
            {"BarnNameAnimalScreen", 0x4B0, "ObjectProperty"},
            {"WidgetSwitcher_Screens", 0x4B8, "ObjectProperty"},
            {"JunoBarnAssignmentMenuInitData", 0x4C0, "ObjectProperty"},
        }};
    };

    struct JunoBarnAssignmentScreen
    {
        static constexpr std::string_view Name = "JunoBarnAssignmentScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BackButton = 0x4D8;
            static constexpr std::uintptr_t CloseButton = 0x4E0;
            static constexpr std::uintptr_t List_Characters = 0x4E8;
            static constexpr std::uintptr_t ThisBedListObject = 0x4F0;
            static constexpr std::uintptr_t BarnObject = 0x4F8;
            static constexpr std::uintptr_t JunoCampRecruitmentComponent = 0x500;
            static constexpr std::uintptr_t JunoCampAIManagementComponent = 0x508;
            static constexpr std::uintptr_t Button_Assign = 0x510;
            static constexpr std::uintptr_t AssignedHeaderText = 0x518;
            static constexpr std::uintptr_t NoBarnHeaderText = 0x528;
            static constexpr std::uintptr_t NearbyAnimalsHeaderText = 0x538;
            static constexpr std::uintptr_t AssignButtonText = 0x548;
            static constexpr std::uintptr_t ReassignButtonText = 0x558;
            static constexpr std::uintptr_t ListHeaderClass = 0x568;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"BackButton", 0x4D8, "ObjectProperty"},
            {"CloseButton", 0x4E0, "ObjectProperty"},
            {"List_Characters", 0x4E8, "ObjectProperty"},
            {"ThisBedListObject", 0x4F0, "ObjectProperty"},
            {"BarnObject", 0x4F8, "ObjectProperty"},
            {"JunoCampRecruitmentComponent", 0x500, "ObjectProperty"},
            {"JunoCampAIManagementComponent", 0x508, "ObjectProperty"},
            {"Button_Assign", 0x510, "ObjectProperty"},
            {"AssignedHeaderText", 0x518, "TextProperty"},
            {"NoBarnHeaderText", 0x528, "TextProperty"},
            {"NearbyAnimalsHeaderText", 0x538, "TextProperty"},
            {"AssignButtonText", 0x548, "TextProperty"},
            {"ReassignButtonText", 0x558, "TextProperty"},
            {"ListHeaderClass", 0x568, "ClassProperty"},
        }};
    };

    struct JunoBarnNameAnimalScreen
    {
        static constexpr std::string_view Name = "JunoBarnNameAnimalScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BarnObject = 0x4D8;
            static constexpr std::uintptr_t JunoBarnAssignmentMenuInitData = 0x4E0;
            static constexpr std::uintptr_t Button_RandomName = 0x4E8;
            static constexpr std::uintptr_t BackButton = 0x4F0;
            static constexpr std::uintptr_t CloseButton = 0x4F8;
            static constexpr std::uintptr_t Button_Assign = 0x500;
            static constexpr std::uintptr_t UserGeneratedText_ParentalControls = 0x508;
            static constexpr std::uintptr_t UGCViewModel = 0x510;
            static constexpr std::uintptr_t AllAnimalNamesGameplayTag = 0x528;
            static constexpr std::uintptr_t AnimalNameRegistryName = 0x52C;
            static constexpr std::uintptr_t DefaultName = 0x530;
            static constexpr std::uintptr_t DefaultHintText = 0x540;
            static constexpr std::uintptr_t bAllowUserInput = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"BarnObject", 0x4D8, "ObjectProperty"},
            {"JunoBarnAssignmentMenuInitData", 0x4E0, "ObjectProperty"},
            {"Button_RandomName", 0x4E8, "ObjectProperty"},
            {"BackButton", 0x4F0, "ObjectProperty"},
            {"CloseButton", 0x4F8, "ObjectProperty"},
            {"Button_Assign", 0x500, "ObjectProperty"},
            {"UserGeneratedText_ParentalControls", 0x508, "ObjectProperty"},
            {"UGCViewModel", 0x510, "ObjectProperty"},
            {"AllAnimalNamesGameplayTag", 0x528, "StructProperty"},
            {"AnimalNameRegistryName", 0x52C, "NameProperty"},
            {"DefaultName", 0x530, "TextProperty"},
            {"DefaultHintText", 0x540, "TextProperty"},
            {"bAllowUserInput", 0x550, "BoolProperty"},
        }};
    };

    struct JunoBarnProcessorScreen
    {
        static constexpr std::string_view Name = "JunoBarnProcessorScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoDisassemblingScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoCampRecruitmentComponent = 0x610;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoCampRecruitmentComponent", 0x610, "ObjectProperty"},
        }};
    };

    struct JunoTamingMapMarkerIconScreen
    {
        static constexpr std::string_view Name = "JunoTamingMapMarkerIconScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryClass = 0x4A8;
            static constexpr std::uintptr_t ColorParamName = 0x4B0;
            static constexpr std::uintptr_t ColorPanel = 0x4B8;
            static constexpr std::uintptr_t IconPanel = 0x4C0;
            static constexpr std::uintptr_t ButtonGroup_AllIconSlots = 0x4C8;
            static constexpr std::uintptr_t ButtonGroup_AllColorSlots = 0x4D0;
            static constexpr std::uintptr_t Image_PreviewMarker = 0x4D8;
            static constexpr std::uintptr_t SelectedColor = 0x4E0;
            static constexpr std::uintptr_t SelectedIcon = 0x4E8;
            static constexpr std::uintptr_t InitData = 0x4F0;
            static constexpr std::uintptr_t CampRow = 0x4F8;
            static constexpr std::uintptr_t RandomCampNameRegistry = 0x508;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"EntryClass", 0x4A8, "ClassProperty"},
            {"ColorParamName", 0x4B0, "NameProperty"},
            {"ColorPanel", 0x4B8, "ObjectProperty"},
            {"IconPanel", 0x4C0, "ObjectProperty"},
            {"ButtonGroup_AllIconSlots", 0x4C8, "ObjectProperty"},
            {"ButtonGroup_AllColorSlots", 0x4D0, "ObjectProperty"},
            {"Image_PreviewMarker", 0x4D8, "ObjectProperty"},
            {"SelectedColor", 0x4E0, "ObjectProperty"},
            {"SelectedIcon", 0x4E8, "ObjectProperty"},
            {"InitData", 0x4F0, "ObjectProperty"},
            {"CampRow", 0x4F8, "StructProperty"},
            {"RandomCampNameRegistry", 0x508, "StructProperty"},
        }};
    };

    struct JunoTamingMapMarkerMenuContainer
    {
        static constexpr std::string_view Name = "JunoTamingMapMarkerMenuContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_Next = 0x4A8;
            static constexpr std::uintptr_t Button_Confirm = 0x4B0;
            static constexpr std::uintptr_t Button_Close = 0x4B8;
            static constexpr std::uintptr_t Button_Close_Touch = 0x4C0;
            static constexpr std::uintptr_t InitData = 0x4C8;
            static constexpr std::uintptr_t NameScreenTabName = 0x4D0;
            static constexpr std::uintptr_t IconScreenTabName = 0x4D4;
            static constexpr std::uintptr_t TabList_MenuTabs = 0x4D8;
            static constexpr std::uintptr_t Switcher_Tabs = 0x4E0;
            static constexpr std::uintptr_t Text_Title = 0x4E8;
            static constexpr std::uintptr_t UserGeneratedText_ParentalControls = 0x4F0;
            static constexpr std::uintptr_t CampRow = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Button_Next", 0x4A8, "ObjectProperty"},
            {"Button_Confirm", 0x4B0, "ObjectProperty"},
            {"Button_Close", 0x4B8, "ObjectProperty"},
            {"Button_Close_Touch", 0x4C0, "ObjectProperty"},
            {"InitData", 0x4C8, "ObjectProperty"},
            {"NameScreenTabName", 0x4D0, "NameProperty"},
            {"IconScreenTabName", 0x4D4, "NameProperty"},
            {"TabList_MenuTabs", 0x4D8, "ObjectProperty"},
            {"Switcher_Tabs", 0x4E0, "ObjectProperty"},
            {"Text_Title", 0x4E8, "ObjectProperty"},
            {"UserGeneratedText_ParentalControls", 0x4F0, "ObjectProperty"},
            {"CampRow", 0x4F8, "StructProperty"},
        }};
    };

    struct JunoTamingMapMarkerNameScreen
    {
        static constexpr std::string_view Name = "JunoTamingMapMarkerNameScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomizeButton = 0x4B8;
            static constexpr std::uintptr_t TextInputField = 0x4C0;
            static constexpr std::uintptr_t InitData = 0x4C8;
            static constexpr std::uintptr_t UGCViewModel = 0x4E8;
            static constexpr std::uintptr_t DefaultName = 0x4F0;
            static constexpr std::uintptr_t DefaultHintText = 0x500;
            static constexpr std::uintptr_t RandomCampNameRegistry = 0x510;
            static constexpr std::uintptr_t bAllowUserInput = 0x514;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"RandomizeButton", 0x4B8, "ObjectProperty"},
            {"TextInputField", 0x4C0, "ObjectProperty"},
            {"InitData", 0x4C8, "ObjectProperty"},
            {"UGCViewModel", 0x4E8, "ObjectProperty"},
            {"DefaultName", 0x4F0, "TextProperty"},
            {"DefaultHintText", 0x500, "TextProperty"},
            {"RandomCampNameRegistry", 0x510, "StructProperty"},
            {"bAllowUserInput", 0x514, "BoolProperty"},
        }};
    };

    struct JunoVillageTamingHubScreen
    {
        static constexpr std::string_view Name = "JunoVillageTamingHubScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoVillageScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ScrollBox_Ingredients = 0x718;
            static constexpr std::uintptr_t EntryBox_Ingredients = 0x720;
            static constexpr std::uintptr_t SpacerWidgetClass = 0x728;
            static constexpr std::uintptr_t TownBuilderQuestWidgetClass = 0x730;
            static constexpr std::uintptr_t IngredientWidgetClass = 0x738;
            static constexpr std::uintptr_t Button_Upgrade = 0x740;
            static constexpr std::uintptr_t Button_RemoveVillage = 0x748;
            static constexpr std::uintptr_t RemoveVillageModalScene = 0x750;
            static constexpr std::uintptr_t RemoveVillageConfirmationTitle = 0x758;
            static constexpr std::uintptr_t RemoveVillageConfirmationDescription = 0x768;
            static constexpr std::uintptr_t RemoveVillageConfirmButtonText = 0x778;
            static constexpr std::uintptr_t RemoveVillageCancelButtonText = 0x788;
            static constexpr std::uintptr_t RemoveModalConfirmAction = 0x798;
            static constexpr std::uintptr_t RemoveModalCancelAction = 0x7A8;
            static constexpr std::uintptr_t Button_EditVillage = 0x7B8;
            static constexpr std::uintptr_t JobToIconMap = 0x7C0;
            static constexpr std::uintptr_t StaticUpgradeItemDescription = 0x7D0;
            static constexpr std::uintptr_t AwesomePointsIngredientWidget = 0x7E0;
            static constexpr std::uintptr_t TownBuilderQuestWidgets = 0x7E8;
            static constexpr std::uintptr_t IngredientWidgetForIndex = 0x7F8;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"ScrollBox_Ingredients", 0x718, "ObjectProperty"},
            {"EntryBox_Ingredients", 0x720, "ObjectProperty"},
            {"SpacerWidgetClass", 0x728, "ClassProperty"},
            {"TownBuilderQuestWidgetClass", 0x730, "ClassProperty"},
            {"IngredientWidgetClass", 0x738, "ClassProperty"},
            {"Button_Upgrade", 0x740, "ObjectProperty"},
            {"Button_RemoveVillage", 0x748, "ObjectProperty"},
            {"RemoveVillageModalScene", 0x750, "ObjectProperty"},
            {"RemoveVillageConfirmationTitle", 0x758, "TextProperty"},
            {"RemoveVillageConfirmationDescription", 0x768, "TextProperty"},
            {"RemoveVillageConfirmButtonText", 0x778, "TextProperty"},
            {"RemoveVillageCancelButtonText", 0x788, "TextProperty"},
            {"RemoveModalConfirmAction", 0x798, "StructProperty"},
            {"RemoveModalCancelAction", 0x7A8, "StructProperty"},
            {"Button_EditVillage", 0x7B8, "ObjectProperty"},
            {"JobToIconMap", 0x7C0, "MapProperty"},
            {"StaticUpgradeItemDescription", 0x7D0, "TextProperty"},
            {"AwesomePointsIngredientWidget", 0x7E0, "ObjectProperty"},
            {"TownBuilderQuestWidgets", 0x7E8, "ArrayProperty"},
            {"IngredientWidgetForIndex", 0x7F8, "MapProperty"},
        }};
    };

    struct JunoVillageTamingLevelRewardsColumn
    {
        static constexpr std::string_view Name = "JunoVillageTamingLevelRewardsColumn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EntriesList = 0x15D8;
            static constexpr std::uintptr_t VillageRewardsColumnInfo = 0x15E0;
            static constexpr std::uintptr_t ParentVillageUIData = 0x15F8;
            static constexpr std::uintptr_t ScrollBox_RewardEntries = 0x1820;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EntriesList", 0x15D8, "ObjectProperty"},
            {"VillageRewardsColumnInfo", 0x15E0, "StructProperty"},
            {"ParentVillageUIData", 0x15F8, "StructProperty"},
            {"ScrollBox_RewardEntries", 0x1820, "ObjectProperty"},
        }};
    };

    struct JunoVillageTamingLevelRewardsEntry
    {
        static constexpr std::string_view Name = "JunoVillageTamingLevelRewardsEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t VillageRewardsEntryInfo = 0x330;
            static constexpr std::uintptr_t ParentVillageUIData = 0x398;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VillageRewardsEntryInfo", 0x330, "StructProperty"},
            {"ParentVillageUIData", 0x398, "StructProperty"},
        }};
    };

    struct JunoVillageTamingLevelRewardsScreen
    {
        static constexpr std::string_view Name = "JunoVillageTamingLevelRewardsScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoVillageScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardsList = 0x718;
            static constexpr std::uintptr_t LastHoveredEntry = 0x720;
            static constexpr std::uintptr_t ButtonGroup_AllRewards = 0x728;
            static constexpr std::uintptr_t Button_Previous = 0x730;
            static constexpr std::uintptr_t Button_Next = 0x738;
            static constexpr std::uintptr_t ScrollBox = 0x740;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RewardsList", 0x718, "ObjectProperty"},
            {"LastHoveredEntry", 0x720, "ObjectProperty"},
            {"ButtonGroup_AllRewards", 0x728, "ObjectProperty"},
            {"Button_Previous", 0x730, "ObjectProperty"},
            {"Button_Next", 0x738, "ObjectProperty"},
            {"ScrollBox", 0x740, "ObjectProperty"},
        }};
    };

    struct JunoVillageTamingMenuContainer
    {
        static constexpr std::string_view Name = "JunoVillageTamingMenuContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoHudMenuBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VillagersTabName = 0x520;
            static constexpr std::uintptr_t HubTabName = 0x524;
            static constexpr std::uintptr_t RewardsTabName = 0x528;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VillagersTabName", 0x520, "NameProperty"},
            {"HubTabName", 0x524, "NameProperty"},
            {"RewardsTabName", 0x528, "NameProperty"},
        }};
    };

    struct JunoVillageTamingVillagerEntry
    {
        static constexpr std::string_view Name = "JunoVillageTamingVillagerEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VillagerInfo = 0x15D8;
            static constexpr std::uintptr_t ParentVillageUIData = 0x1710;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VillagerInfo", 0x15D8, "StructProperty"},
            {"ParentVillageUIData", 0x1710, "StructProperty"},
        }};
    };

    struct JunoVillageTamingVillagersScreen
    {
        static constexpr std::string_view Name = "JunoVillageTamingVillagersScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoVillageScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VillageInhabitantsList = 0x718;
            static constexpr std::uintptr_t Button_AskToLeave = 0x720;
            static constexpr std::uintptr_t Button_ChangeName = 0x728;
            static constexpr std::uintptr_t ButtonGroup_AllVillagers = 0x730;
            static constexpr std::uintptr_t LastHoveredEntry = 0x738;
            static constexpr std::uintptr_t AskToLeaveModalScene = 0x740;
            static constexpr std::uintptr_t AskToLeaveConfirmationTitle = 0x748;
            static constexpr std::uintptr_t AskToLeaveConfirmationDescription = 0x758;
            static constexpr std::uintptr_t AskToLeaveConfirmButtonText = 0x768;
            static constexpr std::uintptr_t AskToLeaveCancelButtonText = 0x778;
            static constexpr std::uintptr_t ModalConfirmAction = 0x788;
            static constexpr std::uintptr_t ModalCancelAction = 0x798;
            static constexpr std::uintptr_t OsirisVillagerSlotCount = 0x7A8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"VillageInhabitantsList", 0x718, "ObjectProperty"},
            {"Button_AskToLeave", 0x720, "ObjectProperty"},
            {"Button_ChangeName", 0x728, "ObjectProperty"},
            {"ButtonGroup_AllVillagers", 0x730, "ObjectProperty"},
            {"LastHoveredEntry", 0x738, "ObjectProperty"},
            {"AskToLeaveModalScene", 0x740, "ObjectProperty"},
            {"AskToLeaveConfirmationTitle", 0x748, "TextProperty"},
            {"AskToLeaveConfirmationDescription", 0x758, "TextProperty"},
            {"AskToLeaveConfirmButtonText", 0x768, "TextProperty"},
            {"AskToLeaveCancelButtonText", 0x778, "TextProperty"},
            {"ModalConfirmAction", 0x788, "StructProperty"},
            {"ModalCancelAction", 0x798, "StructProperty"},
            {"OsirisVillagerSlotCount", 0x7A8, "IntProperty"},
        }};
    };

}
