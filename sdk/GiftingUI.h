/**
 * decamp dumper generated SDK
 * Package: /Script/GiftingUI
 */
#pragma once
#include "Basic.h"

// /Script/GiftingUI.FortGiftingOwnershipInfo
// Kind: ScriptStruct; super: none
struct FFortGiftingOwnershipInfo
{
public:
    FString TemplateId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Quantity; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortGiftingOwnershipInfo, TemplateId) == 0, "Offset mismatch for FFortGiftingOwnershipInfo::TemplateId");
static_assert(offsetof(FFortGiftingOwnershipInfo, Quantity) == 16, "Offset mismatch for FFortGiftingOwnershipInfo::Quantity");

// /Script/GiftingUI.FortGiftingRecipientState
// Kind: ScriptStruct; super: none
struct FFortGiftingRecipientState
{
public:
    std::uint8_t Price[0x58]; // 0x0000 (Size: 0x58, Type: StructProperty)
    TArray<void*> Items; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Ownership; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortGiftingRecipientState, Price) == 0, "Offset mismatch for FFortGiftingRecipientState::Price");
static_assert(offsetof(FFortGiftingRecipientState, Items) == 88, "Offset mismatch for FFortGiftingRecipientState::Items");
static_assert(offsetof(FFortGiftingRecipientState, Ownership) == 104, "Offset mismatch for FFortGiftingRecipientState::Ownership");

// /Script/GiftingUI.AthenaGiftConfirmedPanel
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftConfirmedPanel
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* Text_RecipientInfo; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftConfirmedPanel, Text_RecipientInfo) == 1208, "Offset mismatch for UAthenaGiftConfirmedPanel::Text_RecipientInfo");
static_assert(offsetof(UAthenaGiftConfirmedPanel, Button_Back) == 1216, "Offset mismatch for UAthenaGiftConfirmedPanel::Button_Back");
static_assert(offsetof(UAthenaGiftConfirmedPanel, Button_CloseTouch) == 1224, "Offset mismatch for UAthenaGiftConfirmedPanel::Button_CloseTouch");

// /Script/GiftingUI.AthenaGiftingConfirmationScreen
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingConfirmationScreen
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    void* PresentedGiftableOfferInfo; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* PresentedOptionalTokenOfferInfo; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xDC]; // 0x04E0
    float MinGiftSubmissionDelay; // 0x05BC (Size: 0x4, Type: FloatProperty)
    float MaxGiftSubmissionDelay; // 0x05C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x14]; // 0x05C4
    void* Button_WrapOptions; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_MtxWallet; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* Panel_GiftingPurchase; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    void* Panel_WrapOptions; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* Panel_GiftConfirmed; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* Panel_GiftingErrors; // 0x0610 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingConfirmationScreen, PresentedGiftableOfferInfo) == 1232, "Offset mismatch for UAthenaGiftingConfirmationScreen::PresentedGiftableOfferInfo");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, PresentedOptionalTokenOfferInfo) == 1240, "Offset mismatch for UAthenaGiftingConfirmationScreen::PresentedOptionalTokenOfferInfo");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, MinGiftSubmissionDelay) == 1468, "Offset mismatch for UAthenaGiftingConfirmationScreen::MinGiftSubmissionDelay");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, MaxGiftSubmissionDelay) == 1472, "Offset mismatch for UAthenaGiftingConfirmationScreen::MaxGiftSubmissionDelay");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Button_WrapOptions) == 1496, "Offset mismatch for UAthenaGiftingConfirmationScreen::Button_WrapOptions");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Button_Back) == 1504, "Offset mismatch for UAthenaGiftingConfirmationScreen::Button_Back");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Button_CloseTouch) == 1512, "Offset mismatch for UAthenaGiftingConfirmationScreen::Button_CloseTouch");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Button_MtxWallet) == 1520, "Offset mismatch for UAthenaGiftingConfirmationScreen::Button_MtxWallet");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Panel_GiftingPurchase) == 1528, "Offset mismatch for UAthenaGiftingConfirmationScreen::Panel_GiftingPurchase");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Panel_WrapOptions) == 1536, "Offset mismatch for UAthenaGiftingConfirmationScreen::Panel_WrapOptions");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Panel_GiftConfirmed) == 1544, "Offset mismatch for UAthenaGiftingConfirmationScreen::Panel_GiftConfirmed");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Panel_GiftingErrors) == 1552, "Offset mismatch for UAthenaGiftingConfirmationScreen::Panel_GiftingErrors");

// /Script/GiftingUI.AthenaGiftingErrorsPanel
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingErrorsPanel
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

static_assert(offsetof(UAthenaGiftingErrorsPanel, Text_RecipientInfo) == 1232, "Offset mismatch for UAthenaGiftingErrorsPanel::Text_RecipientInfo");
static_assert(offsetof(UAthenaGiftingErrorsPanel, Text_Title) == 1240, "Offset mismatch for UAthenaGiftingErrorsPanel::Text_Title");
static_assert(offsetof(UAthenaGiftingErrorsPanel, Button_CloseTouch) == 1248, "Offset mismatch for UAthenaGiftingErrorsPanel::Button_CloseTouch");
static_assert(offsetof(UAthenaGiftingErrorsPanel, Button_Back) == 1256, "Offset mismatch for UAthenaGiftingErrorsPanel::Button_Back");
static_assert(offsetof(UAthenaGiftingErrorsPanel, Button_Continue) == 1264, "Offset mismatch for UAthenaGiftingErrorsPanel::Button_Continue");
static_assert(offsetof(UAthenaGiftingErrorsPanel, TileView_Items) == 1272, "Offset mismatch for UAthenaGiftingErrorsPanel::TileView_Items");

// /Script/GiftingUI.AthenaGiftingPriceWidget
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingPriceWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* Text_RealMoneyPrice; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* Text_FinalPrice; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Text_RegularPrice; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_SalePrice; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingPriceWidget, Text_RealMoneyPrice) == 1184, "Offset mismatch for UAthenaGiftingPriceWidget::Text_RealMoneyPrice");
static_assert(offsetof(UAthenaGiftingPriceWidget, Text_FinalPrice) == 1192, "Offset mismatch for UAthenaGiftingPriceWidget::Text_FinalPrice");
static_assert(offsetof(UAthenaGiftingPriceWidget, Text_RegularPrice) == 1200, "Offset mismatch for UAthenaGiftingPriceWidget::Text_RegularPrice");
static_assert(offsetof(UAthenaGiftingPriceWidget, Overlay_SalePrice) == 1208, "Offset mismatch for UAthenaGiftingPriceWidget::Overlay_SalePrice");

// /Script/GiftingUI.AthenaGiftingPurchaseButton
// Kind: Class; super: FortHoldableButton
class UAthenaGiftingPurchaseButton
{
public:
    std::uint8_t Pad_0000[0x1640]; // 0x0000
    void* Widget_Price; // 0x1640 (Size: 0x8, Type: ObjectProperty)
    void* Text_Title; // 0x1648 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingPurchaseButton, Widget_Price) == 5696, "Offset mismatch for UAthenaGiftingPurchaseButton::Widget_Price");
static_assert(offsetof(UAthenaGiftingPurchaseButton, Text_Title) == 5704, "Offset mismatch for UAthenaGiftingPurchaseButton::Text_Title");

// /Script/GiftingUI.AthenaGiftingPurchasePanel
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingPurchasePanel
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

static_assert(offsetof(UAthenaGiftingPurchasePanel, Button_PurchaseGift) == 1208, "Offset mismatch for UAthenaGiftingPurchasePanel::Button_PurchaseGift");
static_assert(offsetof(UAthenaGiftingPurchasePanel, Avatar_MemberIcon) == 1216, "Offset mismatch for UAthenaGiftingPurchasePanel::Avatar_MemberIcon");
static_assert(offsetof(UAthenaGiftingPurchasePanel, Text_SocialNameInfo) == 1224, "Offset mismatch for UAthenaGiftingPurchasePanel::Text_SocialNameInfo");
static_assert(offsetof(UAthenaGiftingPurchasePanel, Text_ItemsCount) == 1232, "Offset mismatch for UAthenaGiftingPurchasePanel::Text_ItemsCount");
static_assert(offsetof(UAthenaGiftingPurchasePanel, Text_OfferName) == 1240, "Offset mismatch for UAthenaGiftingPurchasePanel::Text_OfferName");
static_assert(offsetof(UAthenaGiftingPurchasePanel, TileView_Items) == 1248, "Offset mismatch for UAthenaGiftingPurchasePanel::TileView_Items");

// /Script/GiftingUI.AthenaGiftingScreen
// Kind: Class; super: FortItemPreviewScreen
class UAthenaGiftingScreen
{
public:
    std::uint8_t Pad_0000[0x898]; // 0x0000
    TSoftClassPtr<void> UpsellModalClass; // 0x0898 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x08C0
    void* SearchWidget_SocialSearchWidget; // 0x08C8 (Size: 0x8, Type: ObjectProperty)
    void* ListView_Recipients; // 0x08D0 (Size: 0x8, Type: ObjectProperty)
    void* TileView_Items; // 0x08D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x08E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x08E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_GiftingPolicy; // 0x08F0 (Size: 0x8, Type: ObjectProperty)
    void* Button_CameraControl; // 0x08F8 (Size: 0x8, Type: ObjectProperty)
    void* Text_OfferName; // 0x0900 (Size: 0x8, Type: ObjectProperty)
    void* Text_VBucksOffCount; // 0x0908 (Size: 0x8, Type: ObjectProperty)
    void* Text_ShownItemIndex; // 0x0910 (Size: 0x8, Type: ObjectProperty)
    void* Text_NoContent; // 0x0918 (Size: 0x8, Type: ObjectProperty)
    void* RichText_OfferItemOwnedCount; // 0x0920 (Size: 0x8, Type: ObjectProperty)
    void* Container_VBucksOffViolator; // 0x0928 (Size: 0x8, Type: ObjectProperty)
    void* RichText_GiftCount; // 0x0930 (Size: 0x8, Type: ObjectProperty)
    void* Widget_Price; // 0x0938 (Size: 0x8, Type: ObjectProperty)
    void* Widget_ItemInfo; // 0x0940 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_FilterTabs; // 0x0948 (Size: 0x8, Type: ObjectProperty)
    void* ActionWidget_FilterTabsPrevious; // 0x0950 (Size: 0x8, Type: ObjectProperty)
    void* ActionWidget_FilterTabsNext; // 0x0958 (Size: 0x8, Type: ObjectProperty)
    void* ActivatableWidget_GiftingConfirmation; // 0x0960 (Size: 0x8, Type: ObjectProperty)
    float ItemCyclingInterval; // 0x0968 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x096C
    std::uint8_t FilterTabsPreviousAction[0x10]; // 0x0970 (Size: 0x10, Type: StructProperty)
    std::uint8_t FilterTabsNextAction[0x10]; // 0x0980 (Size: 0x10, Type: StructProperty)
    std::uint8_t RegularGiftingPolicy[0x10]; // 0x0990 (Size: 0x10, Type: TextProperty)
    FText BattlePassGiftingPolicy; // 0x09A0 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0003[0x58]; // 0x09B8
    TMap<void*, void*> FilterMap; // 0x0A10 (Size: 0x10, Type: MapProperty)
    void* FilterGroup; // 0x0A20 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GiftableItems; // 0x0A28 (Size: 0x10, Type: ArrayProperty)
    void* PresentedItemDefinition; // 0x0A38 (Size: 0x8, Type: ObjectProperty)
    void* GiftableOfferInfo; // 0x0A40 (Size: 0x8, Type: ObjectProperty)
    void* OptionalTokenOfferInfo; // 0x0A48 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0A50
    void* OfferVM; // 0x0A58 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingScreen, UpsellModalClass) == 2200, "Offset mismatch for UAthenaGiftingScreen::UpsellModalClass");
static_assert(offsetof(UAthenaGiftingScreen, SearchWidget_SocialSearchWidget) == 2248, "Offset mismatch for UAthenaGiftingScreen::SearchWidget_SocialSearchWidget");
static_assert(offsetof(UAthenaGiftingScreen, ListView_Recipients) == 2256, "Offset mismatch for UAthenaGiftingScreen::ListView_Recipients");
static_assert(offsetof(UAthenaGiftingScreen, TileView_Items) == 2264, "Offset mismatch for UAthenaGiftingScreen::TileView_Items");
static_assert(offsetof(UAthenaGiftingScreen, Button_Back) == 2272, "Offset mismatch for UAthenaGiftingScreen::Button_Back");
static_assert(offsetof(UAthenaGiftingScreen, Button_CloseTouch) == 2280, "Offset mismatch for UAthenaGiftingScreen::Button_CloseTouch");
static_assert(offsetof(UAthenaGiftingScreen, Button_GiftingPolicy) == 2288, "Offset mismatch for UAthenaGiftingScreen::Button_GiftingPolicy");
static_assert(offsetof(UAthenaGiftingScreen, Button_CameraControl) == 2296, "Offset mismatch for UAthenaGiftingScreen::Button_CameraControl");
static_assert(offsetof(UAthenaGiftingScreen, Text_OfferName) == 2304, "Offset mismatch for UAthenaGiftingScreen::Text_OfferName");
static_assert(offsetof(UAthenaGiftingScreen, Text_VBucksOffCount) == 2312, "Offset mismatch for UAthenaGiftingScreen::Text_VBucksOffCount");
static_assert(offsetof(UAthenaGiftingScreen, Text_ShownItemIndex) == 2320, "Offset mismatch for UAthenaGiftingScreen::Text_ShownItemIndex");
static_assert(offsetof(UAthenaGiftingScreen, Text_NoContent) == 2328, "Offset mismatch for UAthenaGiftingScreen::Text_NoContent");
static_assert(offsetof(UAthenaGiftingScreen, RichText_OfferItemOwnedCount) == 2336, "Offset mismatch for UAthenaGiftingScreen::RichText_OfferItemOwnedCount");
static_assert(offsetof(UAthenaGiftingScreen, Container_VBucksOffViolator) == 2344, "Offset mismatch for UAthenaGiftingScreen::Container_VBucksOffViolator");
static_assert(offsetof(UAthenaGiftingScreen, RichText_GiftCount) == 2352, "Offset mismatch for UAthenaGiftingScreen::RichText_GiftCount");
static_assert(offsetof(UAthenaGiftingScreen, Widget_Price) == 2360, "Offset mismatch for UAthenaGiftingScreen::Widget_Price");
static_assert(offsetof(UAthenaGiftingScreen, Widget_ItemInfo) == 2368, "Offset mismatch for UAthenaGiftingScreen::Widget_ItemInfo");
static_assert(offsetof(UAthenaGiftingScreen, EntryBox_FilterTabs) == 2376, "Offset mismatch for UAthenaGiftingScreen::EntryBox_FilterTabs");
static_assert(offsetof(UAthenaGiftingScreen, ActionWidget_FilterTabsPrevious) == 2384, "Offset mismatch for UAthenaGiftingScreen::ActionWidget_FilterTabsPrevious");
static_assert(offsetof(UAthenaGiftingScreen, ActionWidget_FilterTabsNext) == 2392, "Offset mismatch for UAthenaGiftingScreen::ActionWidget_FilterTabsNext");
static_assert(offsetof(UAthenaGiftingScreen, ActivatableWidget_GiftingConfirmation) == 2400, "Offset mismatch for UAthenaGiftingScreen::ActivatableWidget_GiftingConfirmation");
static_assert(offsetof(UAthenaGiftingScreen, ItemCyclingInterval) == 2408, "Offset mismatch for UAthenaGiftingScreen::ItemCyclingInterval");
static_assert(offsetof(UAthenaGiftingScreen, FilterTabsPreviousAction) == 2416, "Offset mismatch for UAthenaGiftingScreen::FilterTabsPreviousAction");
static_assert(offsetof(UAthenaGiftingScreen, FilterTabsNextAction) == 2432, "Offset mismatch for UAthenaGiftingScreen::FilterTabsNextAction");
static_assert(offsetof(UAthenaGiftingScreen, RegularGiftingPolicy) == 2448, "Offset mismatch for UAthenaGiftingScreen::RegularGiftingPolicy");
static_assert(offsetof(UAthenaGiftingScreen, BattlePassGiftingPolicy) == 2464, "Offset mismatch for UAthenaGiftingScreen::BattlePassGiftingPolicy");
static_assert(offsetof(UAthenaGiftingScreen, FilterMap) == 2576, "Offset mismatch for UAthenaGiftingScreen::FilterMap");
static_assert(offsetof(UAthenaGiftingScreen, FilterGroup) == 2592, "Offset mismatch for UAthenaGiftingScreen::FilterGroup");
static_assert(offsetof(UAthenaGiftingScreen, GiftableItems) == 2600, "Offset mismatch for UAthenaGiftingScreen::GiftableItems");
static_assert(offsetof(UAthenaGiftingScreen, PresentedItemDefinition) == 2616, "Offset mismatch for UAthenaGiftingScreen::PresentedItemDefinition");
static_assert(offsetof(UAthenaGiftingScreen, GiftableOfferInfo) == 2624, "Offset mismatch for UAthenaGiftingScreen::GiftableOfferInfo");
static_assert(offsetof(UAthenaGiftingScreen, OptionalTokenOfferInfo) == 2632, "Offset mismatch for UAthenaGiftingScreen::OptionalTokenOfferInfo");
static_assert(offsetof(UAthenaGiftingScreen, OfferVM) == 2648, "Offset mismatch for UAthenaGiftingScreen::OfferVM");

// /Script/GiftingUI.AthenaGiftingUpsellModal
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingUpsellModal
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    FText RecipientDisplayName; // 0x04A0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UAthenaGiftingUpsellModal, RecipientDisplayName) == 1184, "Offset mismatch for UAthenaGiftingUpsellModal::RecipientDisplayName");

// /Script/GiftingUI.AthenaGiftingWrapOptionsPanel
// Kind: Class; super: CommonActivatableWidget
class UAthenaGiftingWrapOptionsPanel
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    TArray<void*> GiftBoxes; // 0x04C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GiftBoxItemDefs; // 0x04D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x04E8
    void* Button_ConfirmWrap; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* TileView_WrapOptions; // 0x0500 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaGiftingWrapOptionsPanel, GiftBoxes) == 1224, "Offset mismatch for UAthenaGiftingWrapOptionsPanel::GiftBoxes");
static_assert(offsetof(UAthenaGiftingWrapOptionsPanel, GiftBoxItemDefs) == 1240, "Offset mismatch for UAthenaGiftingWrapOptionsPanel::GiftBoxItemDefs");
static_assert(offsetof(UAthenaGiftingWrapOptionsPanel, Button_ConfirmWrap) == 1272, "Offset mismatch for UAthenaGiftingWrapOptionsPanel::Button_ConfirmWrap");
static_assert(offsetof(UAthenaGiftingWrapOptionsPanel, TileView_WrapOptions) == 1280, "Offset mismatch for UAthenaGiftingWrapOptionsPanel::TileView_WrapOptions");

// /Script/GiftingUI.FortGiftingData
// Kind: Class; super: FortGameFeatureData
class UFortGiftingData
{
public:
    std::uint8_t Pad_0000[0x448]; // 0x0000
    TSoftClassPtr<void> GiftingScreenClass; // 0x0448 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortGiftingData, GiftingScreenClass) == 1096, "Offset mismatch for UFortGiftingData::GiftingScreenClass");

// /Script/GiftingUI.FortGiftingSocialUserListEntry
// Kind: Class; super: SocialListEntryBase
class UFortGiftingSocialUserListEntry
{
public:
    std::uint8_t Pad_0000[0x16E8]; // 0x0000
    void* Avatar_MemberIcon; // 0x16E8 (Size: 0x8, Type: ObjectProperty)
    void* Text_SocialName; // 0x16F0 (Size: 0x8, Type: ObjectProperty)
    void* RichText_EligibilityStatus; // 0x16F8 (Size: 0x8, Type: ObjectProperty)
    void* RichText_OwnedItems; // 0x1700 (Size: 0x8, Type: ObjectProperty)
    void* Widget_Price; // 0x1708 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGiftingSocialUserListEntry, Avatar_MemberIcon) == 5864, "Offset mismatch for UFortGiftingSocialUserListEntry::Avatar_MemberIcon");
static_assert(offsetof(UFortGiftingSocialUserListEntry, Text_SocialName) == 5872, "Offset mismatch for UFortGiftingSocialUserListEntry::Text_SocialName");
static_assert(offsetof(UFortGiftingSocialUserListEntry, RichText_EligibilityStatus) == 5880, "Offset mismatch for UFortGiftingSocialUserListEntry::RichText_EligibilityStatus");
static_assert(offsetof(UFortGiftingSocialUserListEntry, RichText_OwnedItems) == 5888, "Offset mismatch for UFortGiftingSocialUserListEntry::RichText_OwnedItems");
static_assert(offsetof(UFortGiftingSocialUserListEntry, Widget_Price) == 5896, "Offset mismatch for UFortGiftingSocialUserListEntry::Widget_Price");

// /Script/GiftingUI.FortGiftingSocialUserListView
// Kind: Class; super: SocialUserListViewBase
class UFortGiftingSocialUserListView
{
public:
    std::uint8_t Pad_0000[0x480]; // 0x0000
    float RefreshRecipientStatusDelay; // 0x0480 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortGiftingSocialUserListView, RefreshRecipientStatusDelay) == 1152, "Offset mismatch for UFortGiftingSocialUserListView::RefreshRecipientStatusDelay");

// /Script/GiftingUI.FortGiftingUserSearchWidget
// Kind: Class; super: CommonUserWidget
class UFortGiftingUserSearchWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* EditableText_SearchFriends; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* Button_ClearQuery; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Button_SubmitQuery; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGiftingUserSearchWidget, EditableText_SearchFriends) == 816, "Offset mismatch for UFortGiftingUserSearchWidget::EditableText_SearchFriends");
static_assert(offsetof(UFortGiftingUserSearchWidget, Button_ClearQuery) == 824, "Offset mismatch for UFortGiftingUserSearchWidget::Button_ClearQuery");
static_assert(offsetof(UFortGiftingUserSearchWidget, Button_SubmitQuery) == 832, "Offset mismatch for UFortGiftingUserSearchWidget::Button_SubmitQuery");

// /Script/GiftingUI.FortGiftingWrapOptionListEntry
// Kind: Class; super: CommonButtonLegacy
class UFortGiftingWrapOptionListEntry
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    void* GiftBoxDefinition; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
    void* Image_Gift; // 0x1600 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGiftingWrapOptionListEntry, GiftBoxDefinition) == 5624, "Offset mismatch for UFortGiftingWrapOptionListEntry::GiftBoxDefinition");
static_assert(offsetof(UFortGiftingWrapOptionListEntry, Image_Gift) == 5632, "Offset mismatch for UFortGiftingWrapOptionListEntry::Image_Gift");

// /Script/GiftingUI.GiftingCheatManager
// Kind: Class; super: CheatManagerExtension
class UGiftingCheatManager
{
public:
    std::uint8_t Opaque[1];
};
