/**
 * decamp dumper generated SDK
 * Package: /Script/VKDownloadOnDemandUI
 */
#pragma once
#include "Basic.h"

// /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
// Kind: Class; super: CommonActivatableWidget
class UDownloadOnDemandAddProjectModal
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* Project; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x04A8
    void* EditableTextBox_DownloadLinkCode; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Button_AddProject; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Cancel; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* ProjectTileImage_Preview; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_ProjectTitle; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* TextBlock_ProjectTitle; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandAddProjectModal, Project) == 1184, "Offset mismatch for UDownloadOnDemandAddProjectModal::Project");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, EditableTextBox_DownloadLinkCode) == 1208, "Offset mismatch for UDownloadOnDemandAddProjectModal::EditableTextBox_DownloadLinkCode");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, Button_AddProject) == 1216, "Offset mismatch for UDownloadOnDemandAddProjectModal::Button_AddProject");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, Button_Cancel) == 1224, "Offset mismatch for UDownloadOnDemandAddProjectModal::Button_Cancel");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, ProjectTileImage_Preview) == 1232, "Offset mismatch for UDownloadOnDemandAddProjectModal::ProjectTileImage_Preview");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, Overlay_ProjectTitle) == 1240, "Offset mismatch for UDownloadOnDemandAddProjectModal::Overlay_ProjectTitle");
static_assert(offsetof(UDownloadOnDemandAddProjectModal, TextBlock_ProjectTitle) == 1248, "Offset mismatch for UDownloadOnDemandAddProjectModal::TextBlock_ProjectTitle");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandMessageModal
// Kind: Class; super: CommonActivatableWidget
class UDownloadOnDemandMessageModal
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* TextBlock_MessageTitle; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* TextBlock_Message; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Close; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandMessageModal, TextBlock_MessageTitle) == 1184, "Offset mismatch for UDownloadOnDemandMessageModal::TextBlock_MessageTitle");
static_assert(offsetof(UDownloadOnDemandMessageModal, TextBlock_Message) == 1192, "Offset mismatch for UDownloadOnDemandMessageModal::TextBlock_Message");
static_assert(offsetof(UDownloadOnDemandMessageModal, Button_Close) == 1200, "Offset mismatch for UDownloadOnDemandMessageModal::Button_Close");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile
// Kind: Class; super: CommonButtonLegacy
class UDownloadOnDemandProjectAssetTile
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    void* Initializer; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x1600
    void* Image_Item; // 0x1610 (Size: 0x8, Type: ObjectProperty)
    void* Image_Spinner; // 0x1618 (Size: 0x8, Type: ObjectProperty)
    void* NumericTextBlock_ItemCount; // 0x1620 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandProjectAssetTile, Initializer) == 5624, "Offset mismatch for UDownloadOnDemandProjectAssetTile::Initializer");
static_assert(offsetof(UDownloadOnDemandProjectAssetTile, Image_Item) == 5648, "Offset mismatch for UDownloadOnDemandProjectAssetTile::Image_Item");
static_assert(offsetof(UDownloadOnDemandProjectAssetTile, Image_Spinner) == 5656, "Offset mismatch for UDownloadOnDemandProjectAssetTile::Image_Spinner");
static_assert(offsetof(UDownloadOnDemandProjectAssetTile, NumericTextBlock_ItemCount) == 5664, "Offset mismatch for UDownloadOnDemandProjectAssetTile::NumericTextBlock_ItemCount");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer
// Kind: Class; super: Object
class UDownloadOnDemandProjectAssetTileInitializer
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* PropItemDefinition; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandProjectAssetTileInitializer, PropItemDefinition) == 48, "Offset mismatch for UDownloadOnDemandProjectAssetTileInitializer::PropItemDefinition");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel
// Kind: Class; super: UserWidget
class UDownloadOnDemandProjectDetailsSidePanel
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* DownloadOnDemandProjectTile_CurrentProjectEntry; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* ContentBrowserItemInfo_ItemDetails; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandProjectDetailsSidePanel, DownloadOnDemandProjectTile_CurrentProjectEntry) == 776, "Offset mismatch for UDownloadOnDemandProjectDetailsSidePanel::DownloadOnDemandProjectTile_CurrentProjectEntry");
static_assert(offsetof(UDownloadOnDemandProjectDetailsSidePanel, ContentBrowserItemInfo_ItemDetails) == 784, "Offset mismatch for UDownloadOnDemandProjectDetailsSidePanel::ContentBrowserItemInfo_ItemDetails");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab
// Kind: Class; super: UserWidget
class UDownloadOnDemandProjectManagementTab
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* Project; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0340
    void* TextBlock_ProjectTitle; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* TextBlock_LinkCode; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* TextBlock_VersionNumber; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* TextBlock_LatestVersionNumber; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Image_LatestVersionSpinner; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* TextBlock_Description; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* Button_RemoveProject; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Button_UpdateProject; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Props; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* CommonTileView_ProjectAssetTiles; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* TextBlock_NoPropsMessage; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandProjectManagementTab, Project) == 824, "Offset mismatch for UDownloadOnDemandProjectManagementTab::Project");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_ProjectTitle) == 848, "Offset mismatch for UDownloadOnDemandProjectManagementTab::TextBlock_ProjectTitle");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_LinkCode) == 856, "Offset mismatch for UDownloadOnDemandProjectManagementTab::TextBlock_LinkCode");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_VersionNumber) == 864, "Offset mismatch for UDownloadOnDemandProjectManagementTab::TextBlock_VersionNumber");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_LatestVersionNumber) == 872, "Offset mismatch for UDownloadOnDemandProjectManagementTab::TextBlock_LatestVersionNumber");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, Image_LatestVersionSpinner) == 880, "Offset mismatch for UDownloadOnDemandProjectManagementTab::Image_LatestVersionSpinner");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_Description) == 888, "Offset mismatch for UDownloadOnDemandProjectManagementTab::TextBlock_Description");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, Button_RemoveProject) == 896, "Offset mismatch for UDownloadOnDemandProjectManagementTab::Button_RemoveProject");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, Button_UpdateProject) == 904, "Offset mismatch for UDownloadOnDemandProjectManagementTab::Button_UpdateProject");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, Switcher_Props) == 912, "Offset mismatch for UDownloadOnDemandProjectManagementTab::Switcher_Props");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, CommonTileView_ProjectAssetTiles) == 920, "Offset mismatch for UDownloadOnDemandProjectManagementTab::CommonTileView_ProjectAssetTiles");
static_assert(offsetof(UDownloadOnDemandProjectManagementTab, TextBlock_NoPropsMessage) == 928, "Offset mismatch for UDownloadOnDemandProjectManagementTab::TextBlock_NoPropsMessage");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile
// Kind: Class; super: CommonButtonLegacy
class UDownloadOnDemandProjectTile
{
public:
    std::uint8_t Pad_0000[0x1600]; // 0x0000
    std::uint8_t SelectedHighlightBrush[0xB0]; // 0x1600 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HoveredHighlightBrush[0xB0]; // 0x16B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t bIsSelected; // 0x1760 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x1761
    void* Project; // 0x1768 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x1770
    void* ProjectTileImage_Preview; // 0x1780 (Size: 0x8, Type: ObjectProperty)
    void* Image_UpdatePending; // 0x1788 (Size: 0x8, Type: ObjectProperty)
    void* Image_AddProject; // 0x1790 (Size: 0x8, Type: ObjectProperty)
    void* Image_Spinner; // 0x1798 (Size: 0x8, Type: ObjectProperty)
    void* Image_Error; // 0x17A0 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_Label; // 0x17A8 (Size: 0x8, Type: ObjectProperty)
    void* TextBlock_Label; // 0x17B0 (Size: 0x8, Type: ObjectProperty)
    void* Border_Highlight; // 0x17B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandProjectTile, SelectedHighlightBrush) == 5632, "Offset mismatch for UDownloadOnDemandProjectTile::SelectedHighlightBrush");
static_assert(offsetof(UDownloadOnDemandProjectTile, HoveredHighlightBrush) == 5808, "Offset mismatch for UDownloadOnDemandProjectTile::HoveredHighlightBrush");
static_assert(offsetof(UDownloadOnDemandProjectTile, bIsSelected) == 5984, "Offset mismatch for UDownloadOnDemandProjectTile::bIsSelected");
static_assert(offsetof(UDownloadOnDemandProjectTile, Project) == 5992, "Offset mismatch for UDownloadOnDemandProjectTile::Project");
static_assert(offsetof(UDownloadOnDemandProjectTile, ProjectTileImage_Preview) == 6016, "Offset mismatch for UDownloadOnDemandProjectTile::ProjectTileImage_Preview");
static_assert(offsetof(UDownloadOnDemandProjectTile, Image_UpdatePending) == 6024, "Offset mismatch for UDownloadOnDemandProjectTile::Image_UpdatePending");
static_assert(offsetof(UDownloadOnDemandProjectTile, Image_AddProject) == 6032, "Offset mismatch for UDownloadOnDemandProjectTile::Image_AddProject");
static_assert(offsetof(UDownloadOnDemandProjectTile, Image_Spinner) == 6040, "Offset mismatch for UDownloadOnDemandProjectTile::Image_Spinner");
static_assert(offsetof(UDownloadOnDemandProjectTile, Image_Error) == 6048, "Offset mismatch for UDownloadOnDemandProjectTile::Image_Error");
static_assert(offsetof(UDownloadOnDemandProjectTile, SizeBox_Label) == 6056, "Offset mismatch for UDownloadOnDemandProjectTile::SizeBox_Label");
static_assert(offsetof(UDownloadOnDemandProjectTile, TextBlock_Label) == 6064, "Offset mismatch for UDownloadOnDemandProjectTile::TextBlock_Label");
static_assert(offsetof(UDownloadOnDemandProjectTile, Border_Highlight) == 6072, "Offset mismatch for UDownloadOnDemandProjectTile::Border_Highlight");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTileImage
// Kind: Class; super: UserWidget
class UDownloadOnDemandProjectTileImage
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* EmptyProjectTexture; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOverrideGrayScale; // 0x0310 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0311
    float GreyScaleOverride; // 0x0314 (Size: 0x4, Type: FloatProperty)
    void* Project; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0320
    void* Image_ProjectPreview; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* Image_LoadingImageSpinner; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandProjectTileImage, EmptyProjectTexture) == 776, "Offset mismatch for UDownloadOnDemandProjectTileImage::EmptyProjectTexture");
static_assert(offsetof(UDownloadOnDemandProjectTileImage, bOverrideGrayScale) == 784, "Offset mismatch for UDownloadOnDemandProjectTileImage::bOverrideGrayScale");
static_assert(offsetof(UDownloadOnDemandProjectTileImage, GreyScaleOverride) == 788, "Offset mismatch for UDownloadOnDemandProjectTileImage::GreyScaleOverride");
static_assert(offsetof(UDownloadOnDemandProjectTileImage, Project) == 792, "Offset mismatch for UDownloadOnDemandProjectTileImage::Project");
static_assert(offsetof(UDownloadOnDemandProjectTileImage, Image_ProjectPreview) == 816, "Offset mismatch for UDownloadOnDemandProjectTileImage::Image_ProjectPreview");
static_assert(offsetof(UDownloadOnDemandProjectTileImage, Image_LoadingImageSpinner) == 824, "Offset mismatch for UDownloadOnDemandProjectTileImage::Image_LoadingImageSpinner");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandStatusFeed
// Kind: Class; super: UserWidget
class UDownloadOnDemandStatusFeed
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bOverrideOldStatusWithNewStatus; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0309
    void* EntryBox_DownloadStatusContainer; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandStatusFeed, bOverrideOldStatusWithNewStatus) == 776, "Offset mismatch for UDownloadOnDemandStatusFeed::bOverrideOldStatusWithNewStatus");
static_assert(offsetof(UDownloadOnDemandStatusFeed, EntryBox_DownloadStatusContainer) == 784, "Offset mismatch for UDownloadOnDemandStatusFeed::EntryBox_DownloadStatusContainer");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine
// Kind: Class; super: UserWidget
class UDownloadOnDemandStatusFeedLine
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* TextBlock_DownloadStatus; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandStatusFeedLine, TextBlock_DownloadStatus) == 776, "Offset mismatch for UDownloadOnDemandStatusFeedLine::TextBlock_DownloadStatus");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandTabPanel
// Kind: Class; super: FortCreativeContentBrowserTabPanelBase
class UDownloadOnDemandTabPanel
{
public:
    std::uint8_t Pad_0000[0x4E0]; // 0x0000
    std::uint8_t AddProjectWithLinkCodeInputRowHandle[0x10]; // 0x04E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t AddSelectedProjectInputRowHandle[0x10]; // 0x04F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ManageSelectedProjectInputRowHandle[0x10]; // 0x0500 (Size: 0x10, Type: StructProperty)
    void* DownloadOnDemandProjectDetailsSidePanelClass; // 0x0510 (Size: 0x8, Type: ClassProperty)
    void* DownloadOnDemandAddProjectModalClass; // 0x0518 (Size: 0x8, Type: ClassProperty)
    void* DownloadOnDemandMessageModalClass; // 0x0520 (Size: 0x8, Type: ClassProperty)
    FString AddProjectsWithMnemonicEntitlementName; // 0x0528 (Size: 0x10, Type: StrProperty)
    void* SelectedProject; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0540
    void* Overlay_AddProjectParent; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* CommonTileView_ProjectTiles; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_DownloadOnDemandPanels; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* Button_AddProject; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox_EntitlementCheckMessage; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox_EntitlementCheckFailed; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* ProjectManagementTab; // 0x0580 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDownloadOnDemandTabPanel, AddProjectWithLinkCodeInputRowHandle) == 1248, "Offset mismatch for UDownloadOnDemandTabPanel::AddProjectWithLinkCodeInputRowHandle");
static_assert(offsetof(UDownloadOnDemandTabPanel, AddSelectedProjectInputRowHandle) == 1264, "Offset mismatch for UDownloadOnDemandTabPanel::AddSelectedProjectInputRowHandle");
static_assert(offsetof(UDownloadOnDemandTabPanel, ManageSelectedProjectInputRowHandle) == 1280, "Offset mismatch for UDownloadOnDemandTabPanel::ManageSelectedProjectInputRowHandle");
static_assert(offsetof(UDownloadOnDemandTabPanel, DownloadOnDemandProjectDetailsSidePanelClass) == 1296, "Offset mismatch for UDownloadOnDemandTabPanel::DownloadOnDemandProjectDetailsSidePanelClass");
static_assert(offsetof(UDownloadOnDemandTabPanel, DownloadOnDemandAddProjectModalClass) == 1304, "Offset mismatch for UDownloadOnDemandTabPanel::DownloadOnDemandAddProjectModalClass");
static_assert(offsetof(UDownloadOnDemandTabPanel, DownloadOnDemandMessageModalClass) == 1312, "Offset mismatch for UDownloadOnDemandTabPanel::DownloadOnDemandMessageModalClass");
static_assert(offsetof(UDownloadOnDemandTabPanel, AddProjectsWithMnemonicEntitlementName) == 1320, "Offset mismatch for UDownloadOnDemandTabPanel::AddProjectsWithMnemonicEntitlementName");
static_assert(offsetof(UDownloadOnDemandTabPanel, SelectedProject) == 1336, "Offset mismatch for UDownloadOnDemandTabPanel::SelectedProject");
static_assert(offsetof(UDownloadOnDemandTabPanel, Overlay_AddProjectParent) == 1360, "Offset mismatch for UDownloadOnDemandTabPanel::Overlay_AddProjectParent");
static_assert(offsetof(UDownloadOnDemandTabPanel, CommonTileView_ProjectTiles) == 1368, "Offset mismatch for UDownloadOnDemandTabPanel::CommonTileView_ProjectTiles");
static_assert(offsetof(UDownloadOnDemandTabPanel, Switcher_DownloadOnDemandPanels) == 1376, "Offset mismatch for UDownloadOnDemandTabPanel::Switcher_DownloadOnDemandPanels");
static_assert(offsetof(UDownloadOnDemandTabPanel, Button_AddProject) == 1384, "Offset mismatch for UDownloadOnDemandTabPanel::Button_AddProject");
static_assert(offsetof(UDownloadOnDemandTabPanel, HorizontalBox_EntitlementCheckMessage) == 1392, "Offset mismatch for UDownloadOnDemandTabPanel::HorizontalBox_EntitlementCheckMessage");
static_assert(offsetof(UDownloadOnDemandTabPanel, HorizontalBox_EntitlementCheckFailed) == 1400, "Offset mismatch for UDownloadOnDemandTabPanel::HorizontalBox_EntitlementCheckFailed");
static_assert(offsetof(UDownloadOnDemandTabPanel, ProjectManagementTab) == 1408, "Offset mismatch for UDownloadOnDemandTabPanel::ProjectManagementTab");

// /Script/VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition
// Kind: Class; super: CreativeContentBrowserTab_CreationCondition
class UDownloadOnDemandTab_EntitlementCreationCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString EntitlementName; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDownloadOnDemandTab_EntitlementCreationCondition, EntitlementName) == 40, "Offset mismatch for UDownloadOnDemandTab_EntitlementCreationCondition::EntitlementName");
