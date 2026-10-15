/**
 * decamp dumper generated SDK
 * Package: /Script/GiftBox
 */
#pragma once
#include "Basic.h"

// /Script/GiftBox.FortGiftingFlowOwnershipInfo
// Kind: ScriptStruct; super: none
struct FFortGiftingFlowOwnershipInfo
{
public:
    FString TemplateId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Quantity; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortGiftingFlowOwnershipInfo, TemplateId) == 0, "Offset mismatch for FFortGiftingFlowOwnershipInfo::TemplateId");
static_assert(offsetof(FFortGiftingFlowOwnershipInfo, Quantity) == 16, "Offset mismatch for FFortGiftingFlowOwnershipInfo::Quantity");

// /Script/GiftBox.FortGiftingFlowRecipientState
// Kind: ScriptStruct; super: none
struct FFortGiftingFlowRecipientState
{
public:
    std::uint8_t Price[0x58]; // 0x0000 (Size: 0x58, Type: StructProperty)
    TArray<void*> Items; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Ownership; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortGiftingFlowRecipientState, Price) == 0, "Offset mismatch for FFortGiftingFlowRecipientState::Price");
static_assert(offsetof(FFortGiftingFlowRecipientState, Items) == 88, "Offset mismatch for FFortGiftingFlowRecipientState::Items");
static_assert(offsetof(FFortGiftingFlowRecipientState, Ownership) == 104, "Offset mismatch for FFortGiftingFlowRecipientState::Ownership");

// /Script/GiftBox.TestGiftBox
// Kind: ScriptStruct; super: none
struct FTestGiftBox
{
public:
    std::uint8_t GiftBoxDefinition[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Items; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    FString FromAccountId; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString JsonData; // 0x0040 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTestGiftBox, GiftBoxDefinition) == 0, "Offset mismatch for FTestGiftBox::GiftBoxDefinition");
static_assert(offsetof(FTestGiftBox, Items) == 32, "Offset mismatch for FTestGiftBox::Items");
static_assert(offsetof(FTestGiftBox, FromAccountId) == 48, "Offset mismatch for FTestGiftBox::FromAccountId");
static_assert(offsetof(FTestGiftBox, JsonData) == 64, "Offset mismatch for FTestGiftBox::JsonData");

// /Script/GiftBox.TestGiftBoxGroup
// Kind: ScriptStruct; super: none
struct FTestGiftBoxGroup
{
public:
    std::uint8_t Show; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString Description; // 0x0008 (Size: 0x10, Type: StrProperty)
    TArray<void*> GiftBoxes; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTestGiftBoxGroup, Show) == 0, "Offset mismatch for FTestGiftBoxGroup::Show");
static_assert(offsetof(FTestGiftBoxGroup, Description) == 8, "Offset mismatch for FTestGiftBoxGroup::Description");
static_assert(offsetof(FTestGiftBoxGroup, GiftBoxes) == 24, "Offset mismatch for FTestGiftBoxGroup::GiftBoxes");

// /Script/GiftBox.TestGiftItemEntry
// Kind: ScriptStruct; super: none
struct FTestGiftItemEntry
{
public:
    std::uint8_t Item[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t Quantity; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTestGiftItemEntry, Item) == 0, "Offset mismatch for FTestGiftItemEntry::Item");
static_assert(offsetof(FTestGiftItemEntry, Quantity) == 32, "Offset mismatch for FTestGiftItemEntry::Quantity");

// /Script/GiftBox.TestPurchases
// Kind: ScriptStruct; super: none
struct FTestPurchases
{
public:
    std::uint8_t Show; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> Items; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTestPurchases, Show) == 0, "Offset mismatch for FTestPurchases::Show");
static_assert(offsetof(FTestPurchases, Items) == 8, "Offset mismatch for FTestPurchases::Items");

// /Script/GiftBox.AthenaGiftFlowConfirmedPanel
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftFlowConfirmedPanel
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* Text_RecipientInfo; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftFlowConfirmedPanel, Text_RecipientInfo) == 1208, "Offset mismatch for UAthenaGiftFlowConfirmedPanel::Text_RecipientInfo");
static_assert(offsetof(UAthenaGiftFlowConfirmedPanel, Button_Back) == 1216, "Offset mismatch for UAthenaGiftFlowConfirmedPanel::Button_Back");
static_assert(offsetof(UAthenaGiftFlowConfirmedPanel, Button_CloseTouch) == 1224, "Offset mismatch for UAthenaGiftFlowConfirmedPanel::Button_CloseTouch");

// /Script/GiftBox.AthenaGiftingFlowConfirmationScreen
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingFlowConfirmationScreen
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    void* PresentedGiftableOfferInfo; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* PresentedOptionalTokenOfferInfo; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xD4]; // 0x04E0
    float MinGiftSubmissionDelay; // 0x05B4 (Size: 0x4, Type: FloatProperty)
    float MaxGiftSubmissionDelay; // 0x05B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x14]; // 0x05BC
    void* Button_WrapOptions; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_MtxWallet; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* Panel_GiftingPurchase; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* Panel_WrapOptions; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    void* Panel_GiftConfirmed; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* Panel_GiftingErrors; // 0x0608 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, PresentedGiftableOfferInfo) == 1232, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::PresentedGiftableOfferInfo");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, PresentedOptionalTokenOfferInfo) == 1240, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::PresentedOptionalTokenOfferInfo");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, MinGiftSubmissionDelay) == 1460, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::MinGiftSubmissionDelay");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, MaxGiftSubmissionDelay) == 1464, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::MaxGiftSubmissionDelay");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, Button_WrapOptions) == 1488, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::Button_WrapOptions");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, Button_Back) == 1496, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::Button_Back");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, Button_CloseTouch) == 1504, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::Button_CloseTouch");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, Button_MtxWallet) == 1512, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::Button_MtxWallet");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, Panel_GiftingPurchase) == 1520, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::Panel_GiftingPurchase");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, Panel_WrapOptions) == 1528, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::Panel_WrapOptions");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, Panel_GiftConfirmed) == 1536, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::Panel_GiftConfirmed");
static_assert(offsetof(UAthenaGiftingFlowConfirmationScreen, Panel_GiftingErrors) == 1544, "Offset mismatch for UAthenaGiftingFlowConfirmationScreen::Panel_GiftingErrors");

// /Script/GiftBox.AthenaGiftingFlowErrorsPanel
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingFlowErrorsPanel
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    void* Text_RecipientInfo; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* Text_Title; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Continue; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* TileView_Items; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingFlowErrorsPanel, Text_RecipientInfo) == 1232, "Offset mismatch for UAthenaGiftingFlowErrorsPanel::Text_RecipientInfo");
static_assert(offsetof(UAthenaGiftingFlowErrorsPanel, Text_Title) == 1240, "Offset mismatch for UAthenaGiftingFlowErrorsPanel::Text_Title");
static_assert(offsetof(UAthenaGiftingFlowErrorsPanel, Button_CloseTouch) == 1248, "Offset mismatch for UAthenaGiftingFlowErrorsPanel::Button_CloseTouch");
static_assert(offsetof(UAthenaGiftingFlowErrorsPanel, Button_Back) == 1256, "Offset mismatch for UAthenaGiftingFlowErrorsPanel::Button_Back");
static_assert(offsetof(UAthenaGiftingFlowErrorsPanel, Button_Continue) == 1264, "Offset mismatch for UAthenaGiftingFlowErrorsPanel::Button_Continue");
static_assert(offsetof(UAthenaGiftingFlowErrorsPanel, TileView_Items) == 1272, "Offset mismatch for UAthenaGiftingFlowErrorsPanel::TileView_Items");

// /Script/GiftBox.AthenaGiftingFlowPriceWidget
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingFlowPriceWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* Text_RealMoneyPrice; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* Text_FinalPrice; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Text_RegularPrice; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_SalePrice; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingFlowPriceWidget, Text_RealMoneyPrice) == 1184, "Offset mismatch for UAthenaGiftingFlowPriceWidget::Text_RealMoneyPrice");
static_assert(offsetof(UAthenaGiftingFlowPriceWidget, Text_FinalPrice) == 1192, "Offset mismatch for UAthenaGiftingFlowPriceWidget::Text_FinalPrice");
static_assert(offsetof(UAthenaGiftingFlowPriceWidget, Text_RegularPrice) == 1200, "Offset mismatch for UAthenaGiftingFlowPriceWidget::Text_RegularPrice");
static_assert(offsetof(UAthenaGiftingFlowPriceWidget, Overlay_SalePrice) == 1208, "Offset mismatch for UAthenaGiftingFlowPriceWidget::Overlay_SalePrice");

// /Script/GiftBox.AthenaGiftingFlowPurchaseButton
// Kind: Class; super: FortHoldableButton
class UAthenaGiftingFlowPurchaseButton
{
public:
    std::uint8_t Pad_0000[0x1640]; // 0x0000
    void* Widget_Price; // 0x1640 (Size: 0x8, Type: ObjectProperty)
    void* Text_Title; // 0x1648 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingFlowPurchaseButton, Widget_Price) == 5696, "Offset mismatch for UAthenaGiftingFlowPurchaseButton::Widget_Price");
static_assert(offsetof(UAthenaGiftingFlowPurchaseButton, Text_Title) == 5704, "Offset mismatch for UAthenaGiftingFlowPurchaseButton::Text_Title");

// /Script/GiftBox.AthenaGiftingFlowPurchasePanel
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingFlowPurchasePanel
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* Button_PurchaseGift; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Avatar_MemberIcon; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Text_SocialNameInfo; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* Text_ItemsCount; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* Text_OfferName; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* TileView_Items; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingFlowPurchasePanel, Button_PurchaseGift) == 1208, "Offset mismatch for UAthenaGiftingFlowPurchasePanel::Button_PurchaseGift");
static_assert(offsetof(UAthenaGiftingFlowPurchasePanel, Avatar_MemberIcon) == 1216, "Offset mismatch for UAthenaGiftingFlowPurchasePanel::Avatar_MemberIcon");
static_assert(offsetof(UAthenaGiftingFlowPurchasePanel, Text_SocialNameInfo) == 1224, "Offset mismatch for UAthenaGiftingFlowPurchasePanel::Text_SocialNameInfo");
static_assert(offsetof(UAthenaGiftingFlowPurchasePanel, Text_ItemsCount) == 1232, "Offset mismatch for UAthenaGiftingFlowPurchasePanel::Text_ItemsCount");
static_assert(offsetof(UAthenaGiftingFlowPurchasePanel, Text_OfferName) == 1240, "Offset mismatch for UAthenaGiftingFlowPurchasePanel::Text_OfferName");
static_assert(offsetof(UAthenaGiftingFlowPurchasePanel, TileView_Items) == 1248, "Offset mismatch for UAthenaGiftingFlowPurchasePanel::TileView_Items");

// /Script/GiftBox.AthenaGiftingFlowScreen
// Kind: Class; super: FortItemPreviewScreen
class UAthenaGiftingFlowScreen
{
public:
    std::uint8_t Pad_0000[0x7D0]; // 0x0000
    void* SearchWidget_SocialSearchWidget; // 0x07D0 (Size: 0x8, Type: ObjectProperty)
    void* ListView_Recipients; // 0x07D8 (Size: 0x8, Type: ObjectProperty)
    void* TileView_Items; // 0x07E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x07E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x07F0 (Size: 0x8, Type: ObjectProperty)
    void* Button_GiftingPolicy; // 0x07F8 (Size: 0x8, Type: ObjectProperty)
    void* Button_CameraControl; // 0x0800 (Size: 0x8, Type: ObjectProperty)
    void* Text_OfferName; // 0x0808 (Size: 0x8, Type: ObjectProperty)
    void* Text_VBucksOffCount; // 0x0810 (Size: 0x8, Type: ObjectProperty)
    void* Text_ShownItemIndex; // 0x0818 (Size: 0x8, Type: ObjectProperty)
    void* Text_NoContent; // 0x0820 (Size: 0x8, Type: ObjectProperty)
    void* RichText_OfferItemOwnedCount; // 0x0828 (Size: 0x8, Type: ObjectProperty)
    void* Container_VBucksOffViolator; // 0x0830 (Size: 0x8, Type: ObjectProperty)
    void* RichText_GiftCount; // 0x0838 (Size: 0x8, Type: ObjectProperty)
    void* Widget_Price; // 0x0840 (Size: 0x8, Type: ObjectProperty)
    void* Widget_ItemInfo; // 0x0848 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_FilterTabs; // 0x0850 (Size: 0x8, Type: ObjectProperty)
    void* ActionWidget_FilterTabsPrevious; // 0x0858 (Size: 0x8, Type: ObjectProperty)
    void* ActionWidget_FilterTabsNext; // 0x0860 (Size: 0x8, Type: ObjectProperty)
    void* ActivatableWidget_GiftingConfirmation; // 0x0868 (Size: 0x8, Type: ObjectProperty)
    float ItemCyclingInterval; // 0x0870 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0874
    std::uint8_t FilterTabsPreviousAction[0x10]; // 0x0878 (Size: 0x10, Type: StructProperty)
    std::uint8_t FilterTabsNextAction[0x10]; // 0x0888 (Size: 0x10, Type: StructProperty)
    std::uint8_t RegularGiftingPolicy[0x10]; // 0x0898 (Size: 0x10, Type: TextProperty)
    FText BattlePassGiftingPolicy; // 0x08A8 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0002[0x40]; // 0x08C0
    TMap<void*, void*> FilterMap; // 0x0900 (Size: 0x10, Type: MapProperty)
    void* FilterGroup; // 0x0910 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GiftableItems; // 0x0918 (Size: 0x10, Type: ArrayProperty)
    void* PresentedItemDefinition; // 0x0928 (Size: 0x8, Type: ObjectProperty)
    void* GiftBoxPurchaseVMInner; // 0x0930 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingFlowScreen, SearchWidget_SocialSearchWidget) == 2000, "Offset mismatch for UAthenaGiftingFlowScreen::SearchWidget_SocialSearchWidget");
static_assert(offsetof(UAthenaGiftingFlowScreen, ListView_Recipients) == 2008, "Offset mismatch for UAthenaGiftingFlowScreen::ListView_Recipients");
static_assert(offsetof(UAthenaGiftingFlowScreen, TileView_Items) == 2016, "Offset mismatch for UAthenaGiftingFlowScreen::TileView_Items");
static_assert(offsetof(UAthenaGiftingFlowScreen, Button_Back) == 2024, "Offset mismatch for UAthenaGiftingFlowScreen::Button_Back");
static_assert(offsetof(UAthenaGiftingFlowScreen, Button_CloseTouch) == 2032, "Offset mismatch for UAthenaGiftingFlowScreen::Button_CloseTouch");
static_assert(offsetof(UAthenaGiftingFlowScreen, Button_GiftingPolicy) == 2040, "Offset mismatch for UAthenaGiftingFlowScreen::Button_GiftingPolicy");
static_assert(offsetof(UAthenaGiftingFlowScreen, Button_CameraControl) == 2048, "Offset mismatch for UAthenaGiftingFlowScreen::Button_CameraControl");
static_assert(offsetof(UAthenaGiftingFlowScreen, Text_OfferName) == 2056, "Offset mismatch for UAthenaGiftingFlowScreen::Text_OfferName");
static_assert(offsetof(UAthenaGiftingFlowScreen, Text_VBucksOffCount) == 2064, "Offset mismatch for UAthenaGiftingFlowScreen::Text_VBucksOffCount");
static_assert(offsetof(UAthenaGiftingFlowScreen, Text_ShownItemIndex) == 2072, "Offset mismatch for UAthenaGiftingFlowScreen::Text_ShownItemIndex");
static_assert(offsetof(UAthenaGiftingFlowScreen, Text_NoContent) == 2080, "Offset mismatch for UAthenaGiftingFlowScreen::Text_NoContent");
static_assert(offsetof(UAthenaGiftingFlowScreen, RichText_OfferItemOwnedCount) == 2088, "Offset mismatch for UAthenaGiftingFlowScreen::RichText_OfferItemOwnedCount");
static_assert(offsetof(UAthenaGiftingFlowScreen, Container_VBucksOffViolator) == 2096, "Offset mismatch for UAthenaGiftingFlowScreen::Container_VBucksOffViolator");
static_assert(offsetof(UAthenaGiftingFlowScreen, RichText_GiftCount) == 2104, "Offset mismatch for UAthenaGiftingFlowScreen::RichText_GiftCount");
static_assert(offsetof(UAthenaGiftingFlowScreen, Widget_Price) == 2112, "Offset mismatch for UAthenaGiftingFlowScreen::Widget_Price");
static_assert(offsetof(UAthenaGiftingFlowScreen, Widget_ItemInfo) == 2120, "Offset mismatch for UAthenaGiftingFlowScreen::Widget_ItemInfo");
static_assert(offsetof(UAthenaGiftingFlowScreen, EntryBox_FilterTabs) == 2128, "Offset mismatch for UAthenaGiftingFlowScreen::EntryBox_FilterTabs");
static_assert(offsetof(UAthenaGiftingFlowScreen, ActionWidget_FilterTabsPrevious) == 2136, "Offset mismatch for UAthenaGiftingFlowScreen::ActionWidget_FilterTabsPrevious");
static_assert(offsetof(UAthenaGiftingFlowScreen, ActionWidget_FilterTabsNext) == 2144, "Offset mismatch for UAthenaGiftingFlowScreen::ActionWidget_FilterTabsNext");
static_assert(offsetof(UAthenaGiftingFlowScreen, ActivatableWidget_GiftingConfirmation) == 2152, "Offset mismatch for UAthenaGiftingFlowScreen::ActivatableWidget_GiftingConfirmation");
static_assert(offsetof(UAthenaGiftingFlowScreen, ItemCyclingInterval) == 2160, "Offset mismatch for UAthenaGiftingFlowScreen::ItemCyclingInterval");
static_assert(offsetof(UAthenaGiftingFlowScreen, FilterTabsPreviousAction) == 2168, "Offset mismatch for UAthenaGiftingFlowScreen::FilterTabsPreviousAction");
static_assert(offsetof(UAthenaGiftingFlowScreen, FilterTabsNextAction) == 2184, "Offset mismatch for UAthenaGiftingFlowScreen::FilterTabsNextAction");
static_assert(offsetof(UAthenaGiftingFlowScreen, RegularGiftingPolicy) == 2200, "Offset mismatch for UAthenaGiftingFlowScreen::RegularGiftingPolicy");
static_assert(offsetof(UAthenaGiftingFlowScreen, BattlePassGiftingPolicy) == 2216, "Offset mismatch for UAthenaGiftingFlowScreen::BattlePassGiftingPolicy");
static_assert(offsetof(UAthenaGiftingFlowScreen, FilterMap) == 2304, "Offset mismatch for UAthenaGiftingFlowScreen::FilterMap");
static_assert(offsetof(UAthenaGiftingFlowScreen, FilterGroup) == 2320, "Offset mismatch for UAthenaGiftingFlowScreen::FilterGroup");
static_assert(offsetof(UAthenaGiftingFlowScreen, GiftableItems) == 2328, "Offset mismatch for UAthenaGiftingFlowScreen::GiftableItems");
static_assert(offsetof(UAthenaGiftingFlowScreen, PresentedItemDefinition) == 2344, "Offset mismatch for UAthenaGiftingFlowScreen::PresentedItemDefinition");
static_assert(offsetof(UAthenaGiftingFlowScreen, GiftBoxPurchaseVMInner) == 2352, "Offset mismatch for UAthenaGiftingFlowScreen::GiftBoxPurchaseVMInner");

// /Script/GiftBox.AthenaGiftingFlowWrapOptionsPanel
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingFlowWrapOptionsPanel
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    TArray<void*> GiftBoxes; // 0x04C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GiftBoxItemDefs; // 0x04D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x04E8
    void* Button_ConfirmWrap; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* TileView_WrapOptions; // 0x0500 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingFlowWrapOptionsPanel, GiftBoxes) == 1224, "Offset mismatch for UAthenaGiftingFlowWrapOptionsPanel::GiftBoxes");
static_assert(offsetof(UAthenaGiftingFlowWrapOptionsPanel, GiftBoxItemDefs) == 1240, "Offset mismatch for UAthenaGiftingFlowWrapOptionsPanel::GiftBoxItemDefs");
static_assert(offsetof(UAthenaGiftingFlowWrapOptionsPanel, Button_ConfirmWrap) == 1272, "Offset mismatch for UAthenaGiftingFlowWrapOptionsPanel::Button_ConfirmWrap");
static_assert(offsetof(UAthenaGiftingFlowWrapOptionsPanel, TileView_WrapOptions) == 1280, "Offset mismatch for UAthenaGiftingFlowWrapOptionsPanel::TileView_WrapOptions");

// /Script/GiftBox.FortAsyncAction_GiftboxOperations
// Kind: Class; super: FortAsyncAction_FromFunctionBase
class UFortAsyncAction_GiftboxOperations
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnOperationCompleted; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortAsyncAction_GiftboxOperations, OnOperationCompleted) == 48, "Offset mismatch for UFortAsyncAction_GiftboxOperations::OnOperationCompleted");

// /Script/GiftBox.FortGiftingFlowSocialUserListEntry
// Kind: Class; super: SocialListEntryBase
class UFortGiftingFlowSocialUserListEntry
{
public:
    std::uint8_t Pad_0000[0x16E8]; // 0x0000
    void* Avatar_MemberIcon; // 0x16E8 (Size: 0x8, Type: ObjectProperty)
    void* Text_SocialName; // 0x16F0 (Size: 0x8, Type: ObjectProperty)
    void* RichText_EligibilityStatus; // 0x16F8 (Size: 0x8, Type: ObjectProperty)
    void* RichText_OwnedItems; // 0x1700 (Size: 0x8, Type: ObjectProperty)
    void* Widget_Price; // 0x1708 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGiftingFlowSocialUserListEntry, Avatar_MemberIcon) == 5864, "Offset mismatch for UFortGiftingFlowSocialUserListEntry::Avatar_MemberIcon");
static_assert(offsetof(UFortGiftingFlowSocialUserListEntry, Text_SocialName) == 5872, "Offset mismatch for UFortGiftingFlowSocialUserListEntry::Text_SocialName");
static_assert(offsetof(UFortGiftingFlowSocialUserListEntry, RichText_EligibilityStatus) == 5880, "Offset mismatch for UFortGiftingFlowSocialUserListEntry::RichText_EligibilityStatus");
static_assert(offsetof(UFortGiftingFlowSocialUserListEntry, RichText_OwnedItems) == 5888, "Offset mismatch for UFortGiftingFlowSocialUserListEntry::RichText_OwnedItems");
static_assert(offsetof(UFortGiftingFlowSocialUserListEntry, Widget_Price) == 5896, "Offset mismatch for UFortGiftingFlowSocialUserListEntry::Widget_Price");

// /Script/GiftBox.FortGiftingFlowSocialUserListView
// Kind: Class; super: SocialUserListViewBase
class UFortGiftingFlowSocialUserListView
{
public:
    std::uint8_t Pad_0000[0x480]; // 0x0000
    float RefreshRecipientStatusDelay; // 0x0480 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortGiftingFlowSocialUserListView, RefreshRecipientStatusDelay) == 1152, "Offset mismatch for UFortGiftingFlowSocialUserListView::RefreshRecipientStatusDelay");

// /Script/GiftBox.FortGiftingFlowWrapOptionListEntry
// Kind: Class; super: CommonButtonLegacy
class UFortGiftingFlowWrapOptionListEntry
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    void* GiftBoxDefinition; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
    void* Image_Gift; // 0x1600 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGiftingFlowWrapOptionListEntry, GiftBoxDefinition) == 5624, "Offset mismatch for UFortGiftingFlowWrapOptionListEntry::GiftBoxDefinition");
static_assert(offsetof(UFortGiftingFlowWrapOptionListEntry, Image_Gift) == 5632, "Offset mismatch for UFortGiftingFlowWrapOptionListEntry::Image_Gift");

// /Script/GiftBox.GiftBoxGameFeatureAction_SetGiftBoxData
// Kind: Class; super: FortUIGameFeatureAction_SetGiftBoxData
class UGiftBoxGameFeatureAction_SetGiftBoxData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GiftBoxScreenClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t UngiftMessageScreen[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t GiftReceivedMessage[0x20]; // 0x0068 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t GiftPurchaseScreenClass[0x20]; // 0x0088 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> AssetTypeOrder; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShowUnknownItemsFirst; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGiftBoxGameFeatureAction_SetGiftBoxData, GiftBoxScreenClass) == 40, "Offset mismatch for UGiftBoxGameFeatureAction_SetGiftBoxData::GiftBoxScreenClass");
static_assert(offsetof(UGiftBoxGameFeatureAction_SetGiftBoxData, UngiftMessageScreen) == 72, "Offset mismatch for UGiftBoxGameFeatureAction_SetGiftBoxData::UngiftMessageScreen");
static_assert(offsetof(UGiftBoxGameFeatureAction_SetGiftBoxData, GiftReceivedMessage) == 104, "Offset mismatch for UGiftBoxGameFeatureAction_SetGiftBoxData::GiftReceivedMessage");
static_assert(offsetof(UGiftBoxGameFeatureAction_SetGiftBoxData, GiftPurchaseScreenClass) == 136, "Offset mismatch for UGiftBoxGameFeatureAction_SetGiftBoxData::GiftPurchaseScreenClass");
static_assert(offsetof(UGiftBoxGameFeatureAction_SetGiftBoxData, AssetTypeOrder) == 168, "Offset mismatch for UGiftBoxGameFeatureAction_SetGiftBoxData::AssetTypeOrder");
static_assert(offsetof(UGiftBoxGameFeatureAction_SetGiftBoxData, bShowUnknownItemsFirst) == 184, "Offset mismatch for UGiftBoxGameFeatureAction_SetGiftBoxData::bShowUnknownItemsFirst");

// /Script/GiftBox.GiftBoxGroupVM
// Kind: Class; super: MVVMViewModelBase
class UGiftBoxGroupVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> GiftBoxes; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    void* ActivateSound; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* HoveredSoundOverride; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* PressedSoundOverride; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    TSoftClassPtr<void> PreMessageScreen; // 0x0090 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UGiftBoxGroupVM, GiftBoxes) == 104, "Offset mismatch for UGiftBoxGroupVM::GiftBoxes");
static_assert(offsetof(UGiftBoxGroupVM, ActivateSound) == 120, "Offset mismatch for UGiftBoxGroupVM::ActivateSound");
static_assert(offsetof(UGiftBoxGroupVM, HoveredSoundOverride) == 128, "Offset mismatch for UGiftBoxGroupVM::HoveredSoundOverride");
static_assert(offsetof(UGiftBoxGroupVM, PressedSoundOverride) == 136, "Offset mismatch for UGiftBoxGroupVM::PressedSoundOverride");
static_assert(offsetof(UGiftBoxGroupVM, PreMessageScreen) == 144, "Offset mismatch for UGiftBoxGroupVM::PreMessageScreen");

// /Script/GiftBox.GiftBoxItemVM
// Kind: Class; super: MVVMViewModelBase
class UGiftBoxItemVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ItemVM; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HeaderImage[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HeaderText[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t BannerText[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> BannerIcon; // 0x00B0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UGiftBoxItemVM, ItemVM) == 104, "Offset mismatch for UGiftBoxItemVM::ItemVM");
static_assert(offsetof(UGiftBoxItemVM, HeaderImage) == 112, "Offset mismatch for UGiftBoxItemVM::HeaderImage");
static_assert(offsetof(UGiftBoxItemVM, HeaderText) == 144, "Offset mismatch for UGiftBoxItemVM::HeaderText");
static_assert(offsetof(UGiftBoxItemVM, BannerText) == 160, "Offset mismatch for UGiftBoxItemVM::BannerText");
static_assert(offsetof(UGiftBoxItemVM, BannerIcon) == 176, "Offset mismatch for UGiftBoxItemVM::BannerIcon");

// /Script/GiftBox.GiftBoxPurchaseVM
// Kind: Class; super: MVVMViewModelBase
class UGiftBoxPurchaseVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bShowCameraControlButton; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    void* OfferVM; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* GiftableOfferInfo; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* OptionalTokenOfferInfo; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGiftBoxPurchaseVM, bShowCameraControlButton) == 104, "Offset mismatch for UGiftBoxPurchaseVM::bShowCameraControlButton");
static_assert(offsetof(UGiftBoxPurchaseVM, OfferVM) == 112, "Offset mismatch for UGiftBoxPurchaseVM::OfferVM");
static_assert(offsetof(UGiftBoxPurchaseVM, GiftableOfferInfo) == 120, "Offset mismatch for UGiftBoxPurchaseVM::GiftableOfferInfo");
static_assert(offsetof(UGiftBoxPurchaseVM, OptionalTokenOfferInfo) == 128, "Offset mismatch for UGiftBoxPurchaseVM::OptionalTokenOfferInfo");

// /Script/GiftBox.GiftBoxSystemVM
// Kind: Class; super: FortPerUserViewModel
class UGiftBoxSystemVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> GiftBoxGroups; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGiftBoxSystemVM, GiftBoxGroups) == 120, "Offset mismatch for UGiftBoxSystemVM::GiftBoxGroups");

// /Script/GiftBox.GiftBoxTestData
// Kind: Class; super: FortGameFeatureActionSingletonAsset
class UGiftBoxTestData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> TestGiftBoxGroups; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TestPurchases; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGiftBoxTestData, TestGiftBoxGroups) == 40, "Offset mismatch for UGiftBoxTestData::TestGiftBoxGroups");
static_assert(offsetof(UGiftBoxTestData, TestPurchases) == 56, "Offset mismatch for UGiftBoxTestData::TestPurchases");

// /Script/GiftBox.GiftBoxVM
// Kind: Class; super: MVVMViewModelBase
class UGiftBoxVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* GiftBoxItem; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Items; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TabText[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t HeaderText[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t SubHeaderText[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t HeaderBodyText[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t BadgeText[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t RewardImage[0x20]; // 0x00D0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HeaderImage[0x20]; // 0x00F0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TabIcon[0x20]; // 0x0110 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HeaderImageSize[0x10]; // 0x0130 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomHeaderWidget[0x20]; // 0x0140 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> CurrencyData; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ColorOverride[0x14]; // 0x0170 (Size: 0x14, Type: StructProperty)
    std::uint8_t VaultWorldOverrideTag[0x4]; // 0x0184 (Size: 0x4, Type: StructProperty)
    std::int32_t VaultWorldMaterialIndex; // 0x0188 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowVaultWorldPedestals; // 0x018C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFromSelf; // 0x018D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideColor; // 0x018E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGiftBoxVM, GiftBoxItem) == 104, "Offset mismatch for UGiftBoxVM::GiftBoxItem");
static_assert(offsetof(UGiftBoxVM, Items) == 112, "Offset mismatch for UGiftBoxVM::Items");
static_assert(offsetof(UGiftBoxVM, TabText) == 128, "Offset mismatch for UGiftBoxVM::TabText");
static_assert(offsetof(UGiftBoxVM, HeaderText) == 144, "Offset mismatch for UGiftBoxVM::HeaderText");
static_assert(offsetof(UGiftBoxVM, SubHeaderText) == 160, "Offset mismatch for UGiftBoxVM::SubHeaderText");
static_assert(offsetof(UGiftBoxVM, HeaderBodyText) == 176, "Offset mismatch for UGiftBoxVM::HeaderBodyText");
static_assert(offsetof(UGiftBoxVM, BadgeText) == 192, "Offset mismatch for UGiftBoxVM::BadgeText");
static_assert(offsetof(UGiftBoxVM, RewardImage) == 208, "Offset mismatch for UGiftBoxVM::RewardImage");
static_assert(offsetof(UGiftBoxVM, HeaderImage) == 240, "Offset mismatch for UGiftBoxVM::HeaderImage");
static_assert(offsetof(UGiftBoxVM, TabIcon) == 272, "Offset mismatch for UGiftBoxVM::TabIcon");
static_assert(offsetof(UGiftBoxVM, HeaderImageSize) == 304, "Offset mismatch for UGiftBoxVM::HeaderImageSize");
static_assert(offsetof(UGiftBoxVM, CustomHeaderWidget) == 320, "Offset mismatch for UGiftBoxVM::CustomHeaderWidget");
static_assert(offsetof(UGiftBoxVM, CurrencyData) == 352, "Offset mismatch for UGiftBoxVM::CurrencyData");
static_assert(offsetof(UGiftBoxVM, ColorOverride) == 368, "Offset mismatch for UGiftBoxVM::ColorOverride");
static_assert(offsetof(UGiftBoxVM, VaultWorldOverrideTag) == 388, "Offset mismatch for UGiftBoxVM::VaultWorldOverrideTag");
static_assert(offsetof(UGiftBoxVM, VaultWorldMaterialIndex) == 392, "Offset mismatch for UGiftBoxVM::VaultWorldMaterialIndex");
static_assert(offsetof(UGiftBoxVM, bShowVaultWorldPedestals) == 396, "Offset mismatch for UGiftBoxVM::bShowVaultWorldPedestals");
static_assert(offsetof(UGiftBoxVM, bFromSelf) == 397, "Offset mismatch for UGiftBoxVM::bFromSelf");
static_assert(offsetof(UGiftBoxVM, bOverrideColor) == 398, "Offset mismatch for UGiftBoxVM::bOverrideColor");
