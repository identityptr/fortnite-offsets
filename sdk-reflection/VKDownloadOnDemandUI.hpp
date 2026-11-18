#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VKDownloadOnDemandUI
{
    struct DownloadOnDemandAddProjectModal
    {
        static constexpr std::string_view Name = "DownloadOnDemandAddProjectModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Project = 0x4A0;
            static constexpr std::uintptr_t EditableTextBox_DownloadLinkCode = 0x4B8;
            static constexpr std::uintptr_t Button_AddProject = 0x4C0;
            static constexpr std::uintptr_t Button_Cancel = 0x4C8;
            static constexpr std::uintptr_t ProjectTileImage_Preview = 0x4D0;
            static constexpr std::uintptr_t Overlay_ProjectTitle = 0x4D8;
            static constexpr std::uintptr_t TextBlock_ProjectTitle = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Project", 0x4A0, "ObjectProperty"},
            {"EditableTextBox_DownloadLinkCode", 0x4B8, "ObjectProperty"},
            {"Button_AddProject", 0x4C0, "ObjectProperty"},
            {"Button_Cancel", 0x4C8, "ObjectProperty"},
            {"ProjectTileImage_Preview", 0x4D0, "ObjectProperty"},
            {"Overlay_ProjectTitle", 0x4D8, "ObjectProperty"},
            {"TextBlock_ProjectTitle", 0x4E0, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandMessageModal
    {
        static constexpr std::string_view Name = "DownloadOnDemandMessageModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TextBlock_MessageTitle = 0x4A0;
            static constexpr std::uintptr_t TextBlock_Message = 0x4A8;
            static constexpr std::uintptr_t Button_Close = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TextBlock_MessageTitle", 0x4A0, "ObjectProperty"},
            {"TextBlock_Message", 0x4A8, "ObjectProperty"},
            {"Button_Close", 0x4B0, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandProjectAssetTile
    {
        static constexpr std::string_view Name = "DownloadOnDemandProjectAssetTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t Initializer = 0x1628;
            static constexpr std::uintptr_t Image_Item = 0x1640;
            static constexpr std::uintptr_t Image_Spinner = 0x1648;
            static constexpr std::uintptr_t NumericTextBlock_ItemCount = 0x1650;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Initializer", 0x1628, "ObjectProperty"},
            {"Image_Item", 0x1640, "ObjectProperty"},
            {"Image_Spinner", 0x1648, "ObjectProperty"},
            {"NumericTextBlock_ItemCount", 0x1650, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandProjectAssetTileInitializer
    {
        static constexpr std::string_view Name = "DownloadOnDemandProjectAssetTileInitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PropItemDefinition = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropItemDefinition", 0x30, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandProjectDetailsSidePanel
    {
        static constexpr std::string_view Name = "DownloadOnDemandProjectDetailsSidePanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DownloadOnDemandProjectTile_CurrentProjectEntry = 0x308;
            static constexpr std::uintptr_t ContentBrowserItemInfo_ItemDetails = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DownloadOnDemandProjectTile_CurrentProjectEntry", 0x308, "ObjectProperty"},
            {"ContentBrowserItemInfo_ItemDetails", 0x310, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandProjectManagementTab
    {
        static constexpr std::string_view Name = "DownloadOnDemandProjectManagementTab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Project = 0x338;
            static constexpr std::uintptr_t TextBlock_ProjectTitle = 0x350;
            static constexpr std::uintptr_t TextBlock_LinkCode = 0x358;
            static constexpr std::uintptr_t TextBlock_VersionNumber = 0x360;
            static constexpr std::uintptr_t TextBlock_LatestVersionNumber = 0x368;
            static constexpr std::uintptr_t Image_LatestVersionSpinner = 0x370;
            static constexpr std::uintptr_t TextBlock_Description = 0x378;
            static constexpr std::uintptr_t Button_RemoveProject = 0x380;
            static constexpr std::uintptr_t Button_UpdateProject = 0x388;
            static constexpr std::uintptr_t Switcher_Props = 0x390;
            static constexpr std::uintptr_t CommonTileView_ProjectAssetTiles = 0x398;
            static constexpr std::uintptr_t TextBlock_NoPropsMessage = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Project", 0x338, "ObjectProperty"},
            {"TextBlock_ProjectTitle", 0x350, "ObjectProperty"},
            {"TextBlock_LinkCode", 0x358, "ObjectProperty"},
            {"TextBlock_VersionNumber", 0x360, "ObjectProperty"},
            {"TextBlock_LatestVersionNumber", 0x368, "ObjectProperty"},
            {"Image_LatestVersionSpinner", 0x370, "ObjectProperty"},
            {"TextBlock_Description", 0x378, "ObjectProperty"},
            {"Button_RemoveProject", 0x380, "ObjectProperty"},
            {"Button_UpdateProject", 0x388, "ObjectProperty"},
            {"Switcher_Props", 0x390, "ObjectProperty"},
            {"CommonTileView_ProjectAssetTiles", 0x398, "ObjectProperty"},
            {"TextBlock_NoPropsMessage", 0x3A0, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandProjectTile
    {
        static constexpr std::string_view Name = "DownloadOnDemandProjectTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedHighlightBrush = 0x1630;
            static constexpr std::uintptr_t HoveredHighlightBrush = 0x16E0;
            static constexpr std::uintptr_t bIsSelected = 0x1790;
            static constexpr std::uintptr_t Project = 0x1798;
            static constexpr std::uintptr_t ProjectTileImage_Preview = 0x17B0;
            static constexpr std::uintptr_t Image_UpdatePending = 0x17B8;
            static constexpr std::uintptr_t Image_AddProject = 0x17C0;
            static constexpr std::uintptr_t Image_Spinner = 0x17C8;
            static constexpr std::uintptr_t Image_Error = 0x17D0;
            static constexpr std::uintptr_t SizeBox_Label = 0x17D8;
            static constexpr std::uintptr_t TextBlock_Label = 0x17E0;
            static constexpr std::uintptr_t Border_Highlight = 0x17E8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SelectedHighlightBrush", 0x1630, "StructProperty"},
            {"HoveredHighlightBrush", 0x16E0, "StructProperty"},
            {"bIsSelected", 0x1790, "BoolProperty"},
            {"Project", 0x1798, "ObjectProperty"},
            {"ProjectTileImage_Preview", 0x17B0, "ObjectProperty"},
            {"Image_UpdatePending", 0x17B8, "ObjectProperty"},
            {"Image_AddProject", 0x17C0, "ObjectProperty"},
            {"Image_Spinner", 0x17C8, "ObjectProperty"},
            {"Image_Error", 0x17D0, "ObjectProperty"},
            {"SizeBox_Label", 0x17D8, "ObjectProperty"},
            {"TextBlock_Label", 0x17E0, "ObjectProperty"},
            {"Border_Highlight", 0x17E8, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandProjectTileImage
    {
        static constexpr std::string_view Name = "DownloadOnDemandProjectTileImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EmptyProjectTexture = 0x308;
            static constexpr std::uintptr_t bOverrideGrayScale = 0x310;
            static constexpr std::uintptr_t GreyScaleOverride = 0x314;
            static constexpr std::uintptr_t Project = 0x318;
            static constexpr std::uintptr_t Image_ProjectPreview = 0x330;
            static constexpr std::uintptr_t Image_LoadingImageSpinner = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EmptyProjectTexture", 0x308, "ObjectProperty"},
            {"bOverrideGrayScale", 0x310, "BoolProperty"},
            {"GreyScaleOverride", 0x314, "FloatProperty"},
            {"Project", 0x318, "ObjectProperty"},
            {"Image_ProjectPreview", 0x330, "ObjectProperty"},
            {"Image_LoadingImageSpinner", 0x338, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandStatusFeed
    {
        static constexpr std::string_view Name = "DownloadOnDemandStatusFeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideOldStatusWithNewStatus = 0x308;
            static constexpr std::uintptr_t EntryBox_DownloadStatusContainer = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOverrideOldStatusWithNewStatus", 0x308, "BoolProperty"},
            {"EntryBox_DownloadStatusContainer", 0x310, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandStatusFeedLine
    {
        static constexpr std::string_view Name = "DownloadOnDemandStatusFeedLine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TextBlock_DownloadStatus = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TextBlock_DownloadStatus", 0x308, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandTabPanel
    {
        static constexpr std::string_view Name = "DownloadOnDemandTabPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeContentBrowserTabPanelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AddProjectWithLinkCodeInputRowHandle = 0x4E0;
            static constexpr std::uintptr_t AddSelectedProjectInputRowHandle = 0x4F0;
            static constexpr std::uintptr_t ManageSelectedProjectInputRowHandle = 0x500;
            static constexpr std::uintptr_t DownloadOnDemandProjectDetailsSidePanelClass = 0x510;
            static constexpr std::uintptr_t DownloadOnDemandAddProjectModalClass = 0x518;
            static constexpr std::uintptr_t DownloadOnDemandMessageModalClass = 0x520;
            static constexpr std::uintptr_t AddProjectsWithMnemonicEntitlementName = 0x528;
            static constexpr std::uintptr_t SelectedProject = 0x538;
            static constexpr std::uintptr_t Overlay_AddProjectParent = 0x550;
            static constexpr std::uintptr_t CommonTileView_ProjectTiles = 0x558;
            static constexpr std::uintptr_t Switcher_DownloadOnDemandPanels = 0x560;
            static constexpr std::uintptr_t Button_AddProject = 0x568;
            static constexpr std::uintptr_t HorizontalBox_EntitlementCheckMessage = 0x570;
            static constexpr std::uintptr_t HorizontalBox_EntitlementCheckFailed = 0x578;
            static constexpr std::uintptr_t ProjectManagementTab = 0x580;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"AddProjectWithLinkCodeInputRowHandle", 0x4E0, "StructProperty"},
            {"AddSelectedProjectInputRowHandle", 0x4F0, "StructProperty"},
            {"ManageSelectedProjectInputRowHandle", 0x500, "StructProperty"},
            {"DownloadOnDemandProjectDetailsSidePanelClass", 0x510, "ClassProperty"},
            {"DownloadOnDemandAddProjectModalClass", 0x518, "ClassProperty"},
            {"DownloadOnDemandMessageModalClass", 0x520, "ClassProperty"},
            {"AddProjectsWithMnemonicEntitlementName", 0x528, "StrProperty"},
            {"SelectedProject", 0x538, "ObjectProperty"},
            {"Overlay_AddProjectParent", 0x550, "ObjectProperty"},
            {"CommonTileView_ProjectTiles", 0x558, "ObjectProperty"},
            {"Switcher_DownloadOnDemandPanels", 0x560, "ObjectProperty"},
            {"Button_AddProject", 0x568, "ObjectProperty"},
            {"HorizontalBox_EntitlementCheckMessage", 0x570, "ObjectProperty"},
            {"HorizontalBox_EntitlementCheckFailed", 0x578, "ObjectProperty"},
            {"ProjectManagementTab", 0x580, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandTab_EntitlementCreationCondition
    {
        static constexpr std::string_view Name = "DownloadOnDemandTab_EntitlementCreationCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CreativeContentBrowserTab_CreationCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t EntitlementName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntitlementName", 0x28, "StrProperty"},
        }};
    };

}
