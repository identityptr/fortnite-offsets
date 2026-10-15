/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_ClassSelectorUI
 */
#pragma once
#include "Basic.h"

// /Script/CRD_ClassSelectorUI.ClassSelectorLoadoutContainer
// Kind: Class; super: CommonUserWidget
class UClassSelectorLoadoutContainer
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* WrapBox; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* EntryWidgetClass; // 0x0338 (Size: 0x8, Type: ClassProperty)
    TArray<void*> EntryWidgets; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    void* PreviewItemDef; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumPreviewEntries; // 0x0358 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UClassSelectorLoadoutContainer, WrapBox) == 816, "Offset mismatch for UClassSelectorLoadoutContainer::WrapBox");
static_assert(offsetof(UClassSelectorLoadoutContainer, EntryWidgetClass) == 824, "Offset mismatch for UClassSelectorLoadoutContainer::EntryWidgetClass");
static_assert(offsetof(UClassSelectorLoadoutContainer, EntryWidgets) == 832, "Offset mismatch for UClassSelectorLoadoutContainer::EntryWidgets");
static_assert(offsetof(UClassSelectorLoadoutContainer, PreviewItemDef) == 848, "Offset mismatch for UClassSelectorLoadoutContainer::PreviewItemDef");
static_assert(offsetof(UClassSelectorLoadoutContainer, NumPreviewEntries) == 856, "Offset mismatch for UClassSelectorLoadoutContainer::NumPreviewEntries");

// /Script/CRD_ClassSelectorUI.ClassSelectorTabButtons
// Kind: Class; super: CommonUserWidget
class UClassSelectorTabButtons
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* LeftActionWidget; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* RightActionWidget; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* TabButtonsScrollBox; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* LeftButton; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* RightButton; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LeftInputAction[0x18]; // 0x0358 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightInputAction[0x18]; // 0x0370 (Size: 0x18, Type: StructProperty)
    TArray<void*> TabButtons; // 0x0388 (Size: 0x10, Type: ArrayProperty)
    void* TabButtonClass; // 0x0398 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TabButtonPadding[0x18]; // 0x03A0 (Size: 0x18, Type: StructProperty)
    TArray<void*> DesignerPreviewTabNames; // 0x03B8 (Size: 0x10, Type: ArrayProperty)
    float ButtonScrollAmount; // 0x03C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UClassSelectorTabButtons, LeftActionWidget) == 816, "Offset mismatch for UClassSelectorTabButtons::LeftActionWidget");
static_assert(offsetof(UClassSelectorTabButtons, RightActionWidget) == 824, "Offset mismatch for UClassSelectorTabButtons::RightActionWidget");
static_assert(offsetof(UClassSelectorTabButtons, TabButtonsScrollBox) == 832, "Offset mismatch for UClassSelectorTabButtons::TabButtonsScrollBox");
static_assert(offsetof(UClassSelectorTabButtons, LeftButton) == 840, "Offset mismatch for UClassSelectorTabButtons::LeftButton");
static_assert(offsetof(UClassSelectorTabButtons, RightButton) == 848, "Offset mismatch for UClassSelectorTabButtons::RightButton");
static_assert(offsetof(UClassSelectorTabButtons, LeftInputAction) == 856, "Offset mismatch for UClassSelectorTabButtons::LeftInputAction");
static_assert(offsetof(UClassSelectorTabButtons, RightInputAction) == 880, "Offset mismatch for UClassSelectorTabButtons::RightInputAction");
static_assert(offsetof(UClassSelectorTabButtons, TabButtons) == 904, "Offset mismatch for UClassSelectorTabButtons::TabButtons");
static_assert(offsetof(UClassSelectorTabButtons, TabButtonClass) == 920, "Offset mismatch for UClassSelectorTabButtons::TabButtonClass");
static_assert(offsetof(UClassSelectorTabButtons, TabButtonPadding) == 928, "Offset mismatch for UClassSelectorTabButtons::TabButtonPadding");
static_assert(offsetof(UClassSelectorTabButtons, DesignerPreviewTabNames) == 952, "Offset mismatch for UClassSelectorTabButtons::DesignerPreviewTabNames");
static_assert(offsetof(UClassSelectorTabButtons, ButtonScrollAmount) == 968, "Offset mismatch for UClassSelectorTabButtons::ButtonScrollAmount");

// /Script/CRD_ClassSelectorUI.ClassSelectorTeamInfoWidget
// Kind: Class; super: UserWidget
class UClassSelectorTeamInfoWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* TeamName; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* TeamCountText; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* TeamDescription; // 0x0318 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UClassSelectorTeamInfoWidget, TeamName) == 776, "Offset mismatch for UClassSelectorTeamInfoWidget::TeamName");
static_assert(offsetof(UClassSelectorTeamInfoWidget, TeamCountText) == 784, "Offset mismatch for UClassSelectorTeamInfoWidget::TeamCountText");
static_assert(offsetof(UClassSelectorTeamInfoWidget, TeamDescription) == 792, "Offset mismatch for UClassSelectorTeamInfoWidget::TeamDescription");

// /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile
// Kind: Class; super: CreativeClassSelectorButton
class UClassSelectorTeamTile
{
public:
    std::uint8_t Pad_0000[0x1660]; // 0x0000
    void* PlayerCount; // 0x1660 (Size: 0x8, Type: ObjectProperty)
    void* TeamIconImage; // 0x1668 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UClassSelectorTeamTile, PlayerCount) == 5728, "Offset mismatch for UClassSelectorTeamTile::PlayerCount");
static_assert(offsetof(UClassSelectorTeamTile, TeamIconImage) == 5736, "Offset mismatch for UClassSelectorTeamTile::TeamIconImage");

// /Script/CRD_ClassSelectorUI.ClassSelectorTeamTiles
// Kind: Class; super: CommonUserWidget
class UClassSelectorTeamTiles
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    TArray<void*> TeamTiles; // 0x0338 (Size: 0x10, Type: ArrayProperty)
    void* RootPanel; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* EntryClass; // 0x0350 (Size: 0x8, Type: ClassProperty)
    std::int32_t DesignerPreviewEntries; // 0x0358 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UClassSelectorTeamTiles, TeamTiles) == 824, "Offset mismatch for UClassSelectorTeamTiles::TeamTiles");
static_assert(offsetof(UClassSelectorTeamTiles, RootPanel) == 840, "Offset mismatch for UClassSelectorTeamTiles::RootPanel");
static_assert(offsetof(UClassSelectorTeamTiles, EntryClass) == 848, "Offset mismatch for UClassSelectorTeamTiles::EntryClass");
static_assert(offsetof(UClassSelectorTeamTiles, DesignerPreviewEntries) == 856, "Offset mismatch for UClassSelectorTeamTiles::DesignerPreviewEntries");

// /Script/CRD_ClassSelectorUI.CreativeClassEntry
// Kind: Class; super: CreativeClassSelectorButton
class UCreativeClassEntry
{
public:
    std::uint8_t Pad_0000[0x15E8]; // 0x0000
    void* ItemInfo; // 0x15E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCreativeClassEntry, ItemInfo) == 5608, "Offset mismatch for UCreativeClassEntry::ItemInfo");

// /Script/CRD_ClassSelectorUI.CreativeClassItemInfo
// Kind: Class; super: Object
class UCreativeClassItemInfo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ClassSlot[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCreativeClassItemInfo, ClassSlot) == 40, "Offset mismatch for UCreativeClassItemInfo::ClassSlot");

// /Script/CRD_ClassSelectorUI.CreativeClassSelector
// Kind: Class; super: CommonActivatableWidget
class UCreativeClassSelector
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    void* TabButtons_TeamSelection; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* ListView_Classes; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ClassItemInfos; // 0x04C0 (Size: 0x10, Type: ArrayProperty)
    void* LoadoutScrollBox; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* LoadoutContainer_Inventory; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* LoadoutContainer_Resources; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_SelectLoadout; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_RandomClass; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Descriptions; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* ClassAndTeamDescriptionContainer; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* ItemDescriptionContainer; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* InventoryPanel; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* ResourcesPanel; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* ItemRarity; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* ItemName; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* ItemDescription; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* TeamDescriptionContainer; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* TeamInfoWidget_FullView; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* TeamInfoWidget_TeamsOnly; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* DisplaySwitcher; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* ClassAndTeamSelectionContainer; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    void* OnlyTeamSelectionContainer; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* InvalidDataContainer; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* TeamTiles; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* TeamSelectionTabClass; // 0x0578 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bIsModalVersion; // 0x0580 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableModalTimeLimit; // 0x0581 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0582
    std::int32_t ModalTimeLimitInSeconds; // 0x0584 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0588
    std::uint8_t DisplayMode; // 0x0598 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDeferRespawn; // 0x0599 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x059A
    std::uint8_t ReturnToClassSelectionInputAction[0x10]; // 0x05A0 (Size: 0x10, Type: StructProperty)
    float LoadoutScrollPadding; // 0x05B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x1C]; // 0x05B4
    void* SelectedClassItemInfo; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCreativeClassSelector, TabButtons_TeamSelection) == 1200, "Offset mismatch for UCreativeClassSelector::TabButtons_TeamSelection");
static_assert(offsetof(UCreativeClassSelector, ListView_Classes) == 1208, "Offset mismatch for UCreativeClassSelector::ListView_Classes");
static_assert(offsetof(UCreativeClassSelector, ClassItemInfos) == 1216, "Offset mismatch for UCreativeClassSelector::ClassItemInfos");
static_assert(offsetof(UCreativeClassSelector, LoadoutScrollBox) == 1232, "Offset mismatch for UCreativeClassSelector::LoadoutScrollBox");
static_assert(offsetof(UCreativeClassSelector, LoadoutContainer_Inventory) == 1240, "Offset mismatch for UCreativeClassSelector::LoadoutContainer_Inventory");
static_assert(offsetof(UCreativeClassSelector, LoadoutContainer_Resources) == 1248, "Offset mismatch for UCreativeClassSelector::LoadoutContainer_Resources");
static_assert(offsetof(UCreativeClassSelector, Button_SelectLoadout) == 1256, "Offset mismatch for UCreativeClassSelector::Button_SelectLoadout");
static_assert(offsetof(UCreativeClassSelector, Button_RandomClass) == 1264, "Offset mismatch for UCreativeClassSelector::Button_RandomClass");
static_assert(offsetof(UCreativeClassSelector, Switcher_Descriptions) == 1272, "Offset mismatch for UCreativeClassSelector::Switcher_Descriptions");
static_assert(offsetof(UCreativeClassSelector, ClassAndTeamDescriptionContainer) == 1280, "Offset mismatch for UCreativeClassSelector::ClassAndTeamDescriptionContainer");
static_assert(offsetof(UCreativeClassSelector, ItemDescriptionContainer) == 1288, "Offset mismatch for UCreativeClassSelector::ItemDescriptionContainer");
static_assert(offsetof(UCreativeClassSelector, InventoryPanel) == 1296, "Offset mismatch for UCreativeClassSelector::InventoryPanel");
static_assert(offsetof(UCreativeClassSelector, ResourcesPanel) == 1304, "Offset mismatch for UCreativeClassSelector::ResourcesPanel");
static_assert(offsetof(UCreativeClassSelector, ItemRarity) == 1312, "Offset mismatch for UCreativeClassSelector::ItemRarity");
static_assert(offsetof(UCreativeClassSelector, ItemName) == 1320, "Offset mismatch for UCreativeClassSelector::ItemName");
static_assert(offsetof(UCreativeClassSelector, ItemDescription) == 1328, "Offset mismatch for UCreativeClassSelector::ItemDescription");
static_assert(offsetof(UCreativeClassSelector, TeamDescriptionContainer) == 1336, "Offset mismatch for UCreativeClassSelector::TeamDescriptionContainer");
static_assert(offsetof(UCreativeClassSelector, TeamInfoWidget_FullView) == 1344, "Offset mismatch for UCreativeClassSelector::TeamInfoWidget_FullView");
static_assert(offsetof(UCreativeClassSelector, TeamInfoWidget_TeamsOnly) == 1352, "Offset mismatch for UCreativeClassSelector::TeamInfoWidget_TeamsOnly");
static_assert(offsetof(UCreativeClassSelector, DisplaySwitcher) == 1360, "Offset mismatch for UCreativeClassSelector::DisplaySwitcher");
static_assert(offsetof(UCreativeClassSelector, ClassAndTeamSelectionContainer) == 1368, "Offset mismatch for UCreativeClassSelector::ClassAndTeamSelectionContainer");
static_assert(offsetof(UCreativeClassSelector, OnlyTeamSelectionContainer) == 1376, "Offset mismatch for UCreativeClassSelector::OnlyTeamSelectionContainer");
static_assert(offsetof(UCreativeClassSelector, InvalidDataContainer) == 1384, "Offset mismatch for UCreativeClassSelector::InvalidDataContainer");
static_assert(offsetof(UCreativeClassSelector, TeamTiles) == 1392, "Offset mismatch for UCreativeClassSelector::TeamTiles");
static_assert(offsetof(UCreativeClassSelector, TeamSelectionTabClass) == 1400, "Offset mismatch for UCreativeClassSelector::TeamSelectionTabClass");
static_assert(offsetof(UCreativeClassSelector, bIsModalVersion) == 1408, "Offset mismatch for UCreativeClassSelector::bIsModalVersion");
static_assert(offsetof(UCreativeClassSelector, bEnableModalTimeLimit) == 1409, "Offset mismatch for UCreativeClassSelector::bEnableModalTimeLimit");
static_assert(offsetof(UCreativeClassSelector, ModalTimeLimitInSeconds) == 1412, "Offset mismatch for UCreativeClassSelector::ModalTimeLimitInSeconds");
static_assert(offsetof(UCreativeClassSelector, DisplayMode) == 1432, "Offset mismatch for UCreativeClassSelector::DisplayMode");
static_assert(offsetof(UCreativeClassSelector, bDeferRespawn) == 1433, "Offset mismatch for UCreativeClassSelector::bDeferRespawn");
static_assert(offsetof(UCreativeClassSelector, ReturnToClassSelectionInputAction) == 1440, "Offset mismatch for UCreativeClassSelector::ReturnToClassSelectionInputAction");
static_assert(offsetof(UCreativeClassSelector, LoadoutScrollPadding) == 1456, "Offset mismatch for UCreativeClassSelector::LoadoutScrollPadding");
static_assert(offsetof(UCreativeClassSelector, SelectedClassItemInfo) == 1488, "Offset mismatch for UCreativeClassSelector::SelectedClassItemInfo");

// /Script/CRD_ClassSelectorUI.CreativeClassSelectorButton
// Kind: Class; super: CommonButtonBase
class UCreativeClassSelectorButton
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    void* ButtonTextBlock; // 0x15A0 (Size: 0x8, Type: ObjectProperty)
    void* ActionWidget; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ButtonText[0x10]; // 0x15B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ButtonInputAction[0x10]; // 0x15C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAutoCapitalize; // 0x15D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCreativeClassSelectorButton, ButtonTextBlock) == 5536, "Offset mismatch for UCreativeClassSelectorButton::ButtonTextBlock");
static_assert(offsetof(UCreativeClassSelectorButton, ActionWidget) == 5544, "Offset mismatch for UCreativeClassSelectorButton::ActionWidget");
static_assert(offsetof(UCreativeClassSelectorButton, ButtonText) == 5552, "Offset mismatch for UCreativeClassSelectorButton::ButtonText");
static_assert(offsetof(UCreativeClassSelectorButton, ButtonInputAction) == 5568, "Offset mismatch for UCreativeClassSelectorButton::ButtonInputAction");
static_assert(offsetof(UCreativeClassSelectorButton, bAutoCapitalize) == 5584, "Offset mismatch for UCreativeClassSelectorButton::bAutoCapitalize");

// /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab
// Kind: Class; super: CommonActivatableWidget
class UCreativeClassSelectorMapTab
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    std::uint8_t MapTabInfo[0x40]; // 0x04C8 (Size: 0x40, Type: StructProperty)
    void* CreativeClassSelector; // 0x0508 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCreativeClassSelectorMapTab, MapTabInfo) == 1224, "Offset mismatch for UCreativeClassSelectorMapTab::MapTabInfo");
static_assert(offsetof(UCreativeClassSelectorMapTab, CreativeClassSelector) == 1288, "Offset mismatch for UCreativeClassSelectorMapTab::CreativeClassSelector");

// /Script/CRD_ClassSelectorUI.Mutator_ClassSelectorUI
// Kind: Class; super: FortAthenaMutator
class UMutator_ClassSelectorUI
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMutator_ClassSelectorUI, bMutatesGameMode) == 688, "Offset mismatch for UMutator_ClassSelectorUI::bMutatesGameMode");
static_assert(offsetof(UMutator_ClassSelectorUI, CachedGameMode) == 696, "Offset mismatch for UMutator_ClassSelectorUI::CachedGameMode");
static_assert(offsetof(UMutator_ClassSelectorUI, CachedGameState) == 704, "Offset mismatch for UMutator_ClassSelectorUI::CachedGameState");
static_assert(offsetof(UMutator_ClassSelectorUI, InitializedPlayerControllers) == 712, "Offset mismatch for UMutator_ClassSelectorUI::InitializedPlayerControllers");
static_assert(offsetof(UMutator_ClassSelectorUI, OverridePriority) == 732, "Offset mismatch for UMutator_ClassSelectorUI::OverridePriority");
static_assert(offsetof(UMutator_ClassSelectorUI, bOnlyRunOnGameThread) == 733, "Offset mismatch for UMutator_ClassSelectorUI::bOnlyRunOnGameThread");
