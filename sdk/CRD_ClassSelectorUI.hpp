#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_ClassSelectorUI
{
    struct ClassSelectorLoadoutContainer
    {
        static constexpr std::string_view Name = "ClassSelectorLoadoutContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WrapBox = 0x330;
            static constexpr std::uintptr_t EntryWidgetClass = 0x338;
            static constexpr std::uintptr_t EntryWidgets = 0x340;
            static constexpr std::uintptr_t PreviewItemDef = 0x350;
            static constexpr std::uintptr_t NumPreviewEntries = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WrapBox", 0x330, "ObjectProperty"},
            {"EntryWidgetClass", 0x338, "ClassProperty"},
            {"EntryWidgets", 0x340, "ArrayProperty"},
            {"PreviewItemDef", 0x350, "ObjectProperty"},
            {"NumPreviewEntries", 0x358, "IntProperty"},
        }};
    };

    struct ClassSelectorTabButtons
    {
        static constexpr std::string_view Name = "ClassSelectorTabButtons";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftActionWidget = 0x330;
            static constexpr std::uintptr_t RightActionWidget = 0x338;
            static constexpr std::uintptr_t TabButtonsScrollBox = 0x340;
            static constexpr std::uintptr_t LeftButton = 0x348;
            static constexpr std::uintptr_t RightButton = 0x350;
            static constexpr std::uintptr_t LeftInputAction = 0x358;
            static constexpr std::uintptr_t RightInputAction = 0x370;
            static constexpr std::uintptr_t TabButtons = 0x388;
            static constexpr std::uintptr_t TabButtonClass = 0x398;
            static constexpr std::uintptr_t TabButtonPadding = 0x3A0;
            static constexpr std::uintptr_t DesignerPreviewTabNames = 0x3B8;
            static constexpr std::uintptr_t ButtonScrollAmount = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"LeftActionWidget", 0x330, "ObjectProperty"},
            {"RightActionWidget", 0x338, "ObjectProperty"},
            {"TabButtonsScrollBox", 0x340, "ObjectProperty"},
            {"LeftButton", 0x348, "ObjectProperty"},
            {"RightButton", 0x350, "ObjectProperty"},
            {"LeftInputAction", 0x358, "StructProperty"},
            {"RightInputAction", 0x370, "StructProperty"},
            {"TabButtons", 0x388, "ArrayProperty"},
            {"TabButtonClass", 0x398, "ClassProperty"},
            {"TabButtonPadding", 0x3A0, "StructProperty"},
            {"DesignerPreviewTabNames", 0x3B8, "ArrayProperty"},
            {"ButtonScrollAmount", 0x3C8, "FloatProperty"},
        }};
    };

    struct ClassSelectorTeamInfoWidget
    {
        static constexpr std::string_view Name = "ClassSelectorTeamInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamName = 0x308;
            static constexpr std::uintptr_t TeamCountText = 0x310;
            static constexpr std::uintptr_t TeamDescription = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TeamName", 0x308, "ObjectProperty"},
            {"TeamCountText", 0x310, "ObjectProperty"},
            {"TeamDescription", 0x318, "ObjectProperty"},
        }};
    };

    struct ClassSelectorTeamTile
    {
        static constexpr std::string_view Name = "ClassSelectorTeamTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CreativeClassSelectorButton";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerCount = 0x1690;
            static constexpr std::uintptr_t TeamIconImage = 0x1698;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerCount", 0x1690, "ObjectProperty"},
            {"TeamIconImage", 0x1698, "ObjectProperty"},
        }};
    };

    struct ClassSelectorTeamTiles
    {
        static constexpr std::string_view Name = "ClassSelectorTeamTiles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamTiles = 0x338;
            static constexpr std::uintptr_t RootPanel = 0x348;
            static constexpr std::uintptr_t EntryClass = 0x350;
            static constexpr std::uintptr_t DesignerPreviewEntries = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TeamTiles", 0x338, "ArrayProperty"},
            {"RootPanel", 0x348, "ObjectProperty"},
            {"EntryClass", 0x350, "ClassProperty"},
            {"DesignerPreviewEntries", 0x358, "IntProperty"},
        }};
    };

    struct CreativeClassEntry
    {
        static constexpr std::string_view Name = "CreativeClassEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CreativeClassSelectorButton";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemInfo = 0x1618;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemInfo", 0x1618, "ObjectProperty"},
        }};
    };

    struct CreativeClassItemInfo
    {
        static constexpr std::string_view Name = "CreativeClassItemInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassSlot = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClassSlot", 0x28, "StructProperty"},
        }};
    };

    struct CreativeClassSelector
    {
        static constexpr std::string_view Name = "CreativeClassSelector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TabButtons_TeamSelection = 0x4B0;
            static constexpr std::uintptr_t ListView_Classes = 0x4B8;
            static constexpr std::uintptr_t ClassItemInfos = 0x4C0;
            static constexpr std::uintptr_t LoadoutScrollBox = 0x4D0;
            static constexpr std::uintptr_t LoadoutContainer_Inventory = 0x4D8;
            static constexpr std::uintptr_t LoadoutContainer_Resources = 0x4E0;
            static constexpr std::uintptr_t Button_SelectLoadout = 0x4E8;
            static constexpr std::uintptr_t Button_RandomClass = 0x4F0;
            static constexpr std::uintptr_t Switcher_Descriptions = 0x4F8;
            static constexpr std::uintptr_t ClassAndTeamDescriptionContainer = 0x500;
            static constexpr std::uintptr_t ItemDescriptionContainer = 0x508;
            static constexpr std::uintptr_t InventoryPanel = 0x510;
            static constexpr std::uintptr_t ResourcesPanel = 0x518;
            static constexpr std::uintptr_t ItemRarity = 0x520;
            static constexpr std::uintptr_t ItemName = 0x528;
            static constexpr std::uintptr_t ItemDescription = 0x530;
            static constexpr std::uintptr_t TeamDescriptionContainer = 0x538;
            static constexpr std::uintptr_t TeamInfoWidget_FullView = 0x540;
            static constexpr std::uintptr_t TeamInfoWidget_TeamsOnly = 0x548;
            static constexpr std::uintptr_t DisplaySwitcher = 0x550;
            static constexpr std::uintptr_t ClassAndTeamSelectionContainer = 0x558;
            static constexpr std::uintptr_t OnlyTeamSelectionContainer = 0x560;
            static constexpr std::uintptr_t InvalidDataContainer = 0x568;
            static constexpr std::uintptr_t TeamTiles = 0x570;
            static constexpr std::uintptr_t TeamSelectionTabClass = 0x578;
            static constexpr std::uintptr_t bIsModalVersion = 0x580;
            static constexpr std::uintptr_t bEnableModalTimeLimit = 0x581;
            static constexpr std::uintptr_t ModalTimeLimitInSeconds = 0x584;
            static constexpr std::uintptr_t DisplayMode = 0x5A0;
            static constexpr std::uintptr_t bDeferRespawn = 0x5A1;
            static constexpr std::uintptr_t ReturnToClassSelectionInputAction = 0x5A8;
            static constexpr std::uintptr_t LoadoutScrollPadding = 0x5B8;
            static constexpr std::uintptr_t SelectedClassItemInfo = 0x5D8;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"TabButtons_TeamSelection", 0x4B0, "ObjectProperty"},
            {"ListView_Classes", 0x4B8, "ObjectProperty"},
            {"ClassItemInfos", 0x4C0, "ArrayProperty"},
            {"LoadoutScrollBox", 0x4D0, "ObjectProperty"},
            {"LoadoutContainer_Inventory", 0x4D8, "ObjectProperty"},
            {"LoadoutContainer_Resources", 0x4E0, "ObjectProperty"},
            {"Button_SelectLoadout", 0x4E8, "ObjectProperty"},
            {"Button_RandomClass", 0x4F0, "ObjectProperty"},
            {"Switcher_Descriptions", 0x4F8, "ObjectProperty"},
            {"ClassAndTeamDescriptionContainer", 0x500, "ObjectProperty"},
            {"ItemDescriptionContainer", 0x508, "ObjectProperty"},
            {"InventoryPanel", 0x510, "ObjectProperty"},
            {"ResourcesPanel", 0x518, "ObjectProperty"},
            {"ItemRarity", 0x520, "ObjectProperty"},
            {"ItemName", 0x528, "ObjectProperty"},
            {"ItemDescription", 0x530, "ObjectProperty"},
            {"TeamDescriptionContainer", 0x538, "ObjectProperty"},
            {"TeamInfoWidget_FullView", 0x540, "ObjectProperty"},
            {"TeamInfoWidget_TeamsOnly", 0x548, "ObjectProperty"},
            {"DisplaySwitcher", 0x550, "ObjectProperty"},
            {"ClassAndTeamSelectionContainer", 0x558, "ObjectProperty"},
            {"OnlyTeamSelectionContainer", 0x560, "ObjectProperty"},
            {"InvalidDataContainer", 0x568, "ObjectProperty"},
            {"TeamTiles", 0x570, "ObjectProperty"},
            {"TeamSelectionTabClass", 0x578, "ClassProperty"},
            {"bIsModalVersion", 0x580, "BoolProperty"},
            {"bEnableModalTimeLimit", 0x581, "BoolProperty"},
            {"ModalTimeLimitInSeconds", 0x584, "IntProperty"},
            {"DisplayMode", 0x5A0, "EnumProperty"},
            {"bDeferRespawn", 0x5A1, "BoolProperty"},
            {"ReturnToClassSelectionInputAction", 0x5A8, "StructProperty"},
            {"LoadoutScrollPadding", 0x5B8, "FloatProperty"},
            {"SelectedClassItemInfo", 0x5D8, "ObjectProperty"},
        }};
    };

    struct CreativeClassSelectorButton
    {
        static constexpr std::string_view Name = "CreativeClassSelectorButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ButtonTextBlock = 0x15D0;
            static constexpr std::uintptr_t ActionWidget = 0x15D8;
            static constexpr std::uintptr_t ButtonText = 0x15E0;
            static constexpr std::uintptr_t ButtonInputAction = 0x15F0;
            static constexpr std::uintptr_t bAutoCapitalize = 0x1600;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ButtonTextBlock", 0x15D0, "ObjectProperty"},
            {"ActionWidget", 0x15D8, "ObjectProperty"},
            {"ButtonText", 0x15E0, "TextProperty"},
            {"ButtonInputAction", 0x15F0, "StructProperty"},
            {"bAutoCapitalize", 0x1600, "BoolProperty"},
        }};
    };

    struct CreativeClassSelectorMapTab
    {
        static constexpr std::string_view Name = "CreativeClassSelectorMapTab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MapTabInfo = 0x4C8;
            static constexpr std::uintptr_t CreativeClassSelector = 0x508;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MapTabInfo", 0x4C8, "StructProperty"},
            {"CreativeClassSelector", 0x508, "ObjectProperty"},
        }};
    };

    struct Mutator_ClassSelectorUI
    {
        static constexpr std::string_view Name = "Mutator_ClassSelectorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

}
