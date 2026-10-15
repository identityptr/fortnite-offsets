/**
 * decamp dumper generated SDK
 * Package: /Script/SproutGameUI
 */
#pragma once
#include "Basic.h"

// /Script/SproutGameUI.PurchaseInteractionInfo
// Kind: ScriptStruct; super: none
struct FPurchaseInteractionInfo
{
public:
    std::uint8_t bIsPurchaseInteraction; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanPurchase; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t CurrencyTexture[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t ItemCost; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    FText ItemName; // 0x0030 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FPurchaseInteractionInfo, bIsPurchaseInteraction) == 0, "Offset mismatch for FPurchaseInteractionInfo::bIsPurchaseInteraction");
static_assert(offsetof(FPurchaseInteractionInfo, bCanPurchase) == 1, "Offset mismatch for FPurchaseInteractionInfo::bCanPurchase");
static_assert(offsetof(FPurchaseInteractionInfo, CurrencyTexture) == 8, "Offset mismatch for FPurchaseInteractionInfo::CurrencyTexture");
static_assert(offsetof(FPurchaseInteractionInfo, ItemCost) == 40, "Offset mismatch for FPurchaseInteractionInfo::ItemCost");
static_assert(offsetof(FPurchaseInteractionInfo, ItemName) == 48, "Offset mismatch for FPurchaseInteractionInfo::ItemName");

// /Script/SproutGameUI.SproutAppUIDataTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutAppUIDataTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t AppTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t AppTileName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t AppFullName[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t AppTileColor[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t AppTileIcon[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AppBackgroundOverride[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AppFrameImage[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bShowOnPhone; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00A1
    std::uint8_t TagQueryOnPlayerRequiredToBlockApp[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutAppUIDataTableRow, AppTag) == 8, "Offset mismatch for FSproutAppUIDataTableRow::AppTag");
static_assert(offsetof(FSproutAppUIDataTableRow, bEnabled) == 12, "Offset mismatch for FSproutAppUIDataTableRow::bEnabled");
static_assert(offsetof(FSproutAppUIDataTableRow, AppTileName) == 16, "Offset mismatch for FSproutAppUIDataTableRow::AppTileName");
static_assert(offsetof(FSproutAppUIDataTableRow, AppFullName) == 32, "Offset mismatch for FSproutAppUIDataTableRow::AppFullName");
static_assert(offsetof(FSproutAppUIDataTableRow, AppTileColor) == 48, "Offset mismatch for FSproutAppUIDataTableRow::AppTileColor");
static_assert(offsetof(FSproutAppUIDataTableRow, AppTileIcon) == 64, "Offset mismatch for FSproutAppUIDataTableRow::AppTileIcon");
static_assert(offsetof(FSproutAppUIDataTableRow, AppBackgroundOverride) == 96, "Offset mismatch for FSproutAppUIDataTableRow::AppBackgroundOverride");
static_assert(offsetof(FSproutAppUIDataTableRow, AppFrameImage) == 128, "Offset mismatch for FSproutAppUIDataTableRow::AppFrameImage");
static_assert(offsetof(FSproutAppUIDataTableRow, bShowOnPhone) == 160, "Offset mismatch for FSproutAppUIDataTableRow::bShowOnPhone");
static_assert(offsetof(FSproutAppUIDataTableRow, TagQueryOnPlayerRequiredToBlockApp) == 168, "Offset mismatch for FSproutAppUIDataTableRow::TagQueryOnPlayerRequiredToBlockApp");

// /Script/SproutGameUI.SproutChatWheelEntryTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutChatWheelEntryTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SubWheelTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t ParentTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t Text[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RadialPositionOverride; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0059
    std::uint8_t AssociatedItem[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    void* CustomSubWheelClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FSproutChatWheelEntryTableRow, SubWheelTag) == 8, "Offset mismatch for FSproutChatWheelEntryTableRow::SubWheelTag");
static_assert(offsetof(FSproutChatWheelEntryTableRow, ParentTag) == 12, "Offset mismatch for FSproutChatWheelEntryTableRow::ParentTag");
static_assert(offsetof(FSproutChatWheelEntryTableRow, Type) == 16, "Offset mismatch for FSproutChatWheelEntryTableRow::Type");
static_assert(offsetof(FSproutChatWheelEntryTableRow, Text) == 24, "Offset mismatch for FSproutChatWheelEntryTableRow::Text");
static_assert(offsetof(FSproutChatWheelEntryTableRow, Description) == 40, "Offset mismatch for FSproutChatWheelEntryTableRow::Description");
static_assert(offsetof(FSproutChatWheelEntryTableRow, Icon) == 56, "Offset mismatch for FSproutChatWheelEntryTableRow::Icon");
static_assert(offsetof(FSproutChatWheelEntryTableRow, RadialPositionOverride) == 88, "Offset mismatch for FSproutChatWheelEntryTableRow::RadialPositionOverride");
static_assert(offsetof(FSproutChatWheelEntryTableRow, AssociatedItem) == 96, "Offset mismatch for FSproutChatWheelEntryTableRow::AssociatedItem");
static_assert(offsetof(FSproutChatWheelEntryTableRow, CustomSubWheelClass) == 128, "Offset mismatch for FSproutChatWheelEntryTableRow::CustomSubWheelClass");

// /Script/SproutGameUI.SproutCurrencyUIData
// Kind: ScriptStruct; super: TableRowBase
struct FSproutCurrencyUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Enabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t CurrencyItemDefinition[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t SortingPriority; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutCurrencyUIData, Enabled) == 8, "Offset mismatch for FSproutCurrencyUIData::Enabled");
static_assert(offsetof(FSproutCurrencyUIData, CurrencyItemDefinition) == 16, "Offset mismatch for FSproutCurrencyUIData::CurrencyItemDefinition");
static_assert(offsetof(FSproutCurrencyUIData, SortingPriority) == 48, "Offset mismatch for FSproutCurrencyUIData::SortingPriority");

// /Script/SproutGameUI.SproutMailSenderUIData
// Kind: ScriptStruct; super: TableRowBase
struct FSproutMailSenderUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Sender[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t SenderDisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t AssembledMeshSchema[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> DisplayIconOverride; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSproutMailSenderUIData, Sender) == 8, "Offset mismatch for FSproutMailSenderUIData::Sender");
static_assert(offsetof(FSproutMailSenderUIData, SenderDisplayName) == 16, "Offset mismatch for FSproutMailSenderUIData::SenderDisplayName");
static_assert(offsetof(FSproutMailSenderUIData, AssembledMeshSchema) == 32, "Offset mismatch for FSproutMailSenderUIData::AssembledMeshSchema");
static_assert(offsetof(FSproutMailSenderUIData, DisplayIconOverride) == 64, "Offset mismatch for FSproutMailSenderUIData::DisplayIconOverride");

// /Script/SproutGameUI.SproutNotificationTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutNotificationTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TypeTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t TitleText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t DescriptionText[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bCanFireMultipleTimesPerSession; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutNotificationTableRow, TypeTag) == 8, "Offset mismatch for FSproutNotificationTableRow::TypeTag");
static_assert(offsetof(FSproutNotificationTableRow, TitleText) == 16, "Offset mismatch for FSproutNotificationTableRow::TitleText");
static_assert(offsetof(FSproutNotificationTableRow, DescriptionText) == 32, "Offset mismatch for FSproutNotificationTableRow::DescriptionText");
static_assert(offsetof(FSproutNotificationTableRow, Icon) == 48, "Offset mismatch for FSproutNotificationTableRow::Icon");
static_assert(offsetof(FSproutNotificationTableRow, bCanFireMultipleTimesPerSession) == 80, "Offset mismatch for FSproutNotificationTableRow::bCanFireMultipleTimesPerSession");

// /Script/SproutGameUI.SproutOnlinePollUIData
// Kind: ScriptStruct; super: TableRowBase
struct FSproutOnlinePollUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PollName[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t TieString[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t PollsClosedString[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    TArray<void*> VoteData; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutOnlinePollUIData, PollName) == 8, "Offset mismatch for FSproutOnlinePollUIData::PollName");
static_assert(offsetof(FSproutOnlinePollUIData, TieString) == 16, "Offset mismatch for FSproutOnlinePollUIData::TieString");
static_assert(offsetof(FSproutOnlinePollUIData, PollsClosedString) == 32, "Offset mismatch for FSproutOnlinePollUIData::PollsClosedString");
static_assert(offsetof(FSproutOnlinePollUIData, VoteData) == 48, "Offset mismatch for FSproutOnlinePollUIData::VoteData");

// /Script/SproutGameUI.SproutOnlinePollVoteUIData
// Kind: ScriptStruct; super: none
struct FSproutOnlinePollVoteUIData
{
public:
    std::uint8_t VoteName[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t WinString[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayColor[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    TSoftObjectPtr<void> DisplayIcon; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSproutOnlinePollVoteUIData, VoteName) == 0, "Offset mismatch for FSproutOnlinePollVoteUIData::VoteName");
static_assert(offsetof(FSproutOnlinePollVoteUIData, DisplayName) == 8, "Offset mismatch for FSproutOnlinePollVoteUIData::DisplayName");
static_assert(offsetof(FSproutOnlinePollVoteUIData, WinString) == 24, "Offset mismatch for FSproutOnlinePollVoteUIData::WinString");
static_assert(offsetof(FSproutOnlinePollVoteUIData, DisplayColor) == 40, "Offset mismatch for FSproutOnlinePollVoteUIData::DisplayColor");
static_assert(offsetof(FSproutOnlinePollVoteUIData, DisplayIcon) == 48, "Offset mismatch for FSproutOnlinePollVoteUIData::DisplayIcon");

// /Script/SproutGameUI.SproutPoseCategoryTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutPoseCategoryTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Category[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t CategoryTitle[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t CategoryIconBrush[0xB0]; // 0x0020 (Size: 0xB0, Type: StructProperty)
    std::uint8_t CategoryIconResource[0x20]; // 0x00D0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bHiddenInUI; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F1
    std::int32_t DisplaySortPriority; // 0x00F4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutPoseCategoryTableRow, Category) == 8, "Offset mismatch for FSproutPoseCategoryTableRow::Category");
static_assert(offsetof(FSproutPoseCategoryTableRow, CategoryTitle) == 16, "Offset mismatch for FSproutPoseCategoryTableRow::CategoryTitle");
static_assert(offsetof(FSproutPoseCategoryTableRow, CategoryIconBrush) == 32, "Offset mismatch for FSproutPoseCategoryTableRow::CategoryIconBrush");
static_assert(offsetof(FSproutPoseCategoryTableRow, CategoryIconResource) == 208, "Offset mismatch for FSproutPoseCategoryTableRow::CategoryIconResource");
static_assert(offsetof(FSproutPoseCategoryTableRow, bHiddenInUI) == 240, "Offset mismatch for FSproutPoseCategoryTableRow::bHiddenInUI");
static_assert(offsetof(FSproutPoseCategoryTableRow, DisplaySortPriority) == 244, "Offset mismatch for FSproutPoseCategoryTableRow::DisplaySortPriority");

// /Script/SproutGameUI.SproutPoseTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutPoseTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Category[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Emote[0x40]; // 0x0010 (Size: 0x40, Type: StructProperty)
    std::int32_t DisplaySortPriority; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutPoseTableRow, Category) == 8, "Offset mismatch for FSproutPoseTableRow::Category");
static_assert(offsetof(FSproutPoseTableRow, Emote) == 16, "Offset mismatch for FSproutPoseTableRow::Emote");
static_assert(offsetof(FSproutPoseTableRow, DisplaySortPriority) == 80, "Offset mismatch for FSproutPoseTableRow::DisplaySortPriority");

// /Script/SproutGameUI.SproutReactionGroupUIData
// Kind: ScriptStruct; super: TableRowBase
struct FSproutReactionGroupUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ReactionGroupTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> ReactionTypeTags; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutReactionGroupUIData, ReactionGroupTag) == 8, "Offset mismatch for FSproutReactionGroupUIData::ReactionGroupTag");
static_assert(offsetof(FSproutReactionGroupUIData, ReactionTypeTags) == 16, "Offset mismatch for FSproutReactionGroupUIData::ReactionTypeTags");

// /Script/SproutGameUI.SproutReactionUIData
// Kind: ScriptStruct; super: TableRowBase
struct FSproutReactionUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ReactionTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t PreviewIcon[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> ReactionSound; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSproutReactionUIData, ReactionTag) == 8, "Offset mismatch for FSproutReactionUIData::ReactionTag");
static_assert(offsetof(FSproutReactionUIData, DisplayName) == 16, "Offset mismatch for FSproutReactionUIData::DisplayName");
static_assert(offsetof(FSproutReactionUIData, PreviewIcon) == 32, "Offset mismatch for FSproutReactionUIData::PreviewIcon");
static_assert(offsetof(FSproutReactionUIData, ReactionSound) == 64, "Offset mismatch for FSproutReactionUIData::ReactionSound");

// /Script/SproutGameUI.SproutSmartObjectUICategoryData
// Kind: ScriptStruct; super: TableRowBase
struct FSproutSmartObjectUICategoryData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CategoryTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> PreviewIcon; // 0x0020 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSproutSmartObjectUICategoryData, CategoryTag) == 8, "Offset mismatch for FSproutSmartObjectUICategoryData::CategoryTag");
static_assert(offsetof(FSproutSmartObjectUICategoryData, DisplayName) == 16, "Offset mismatch for FSproutSmartObjectUICategoryData::DisplayName");
static_assert(offsetof(FSproutSmartObjectUICategoryData, PreviewIcon) == 32, "Offset mismatch for FSproutSmartObjectUICategoryData::PreviewIcon");

// /Script/SproutGameUI.SproutSmartObjectUITraitData
// Kind: ScriptStruct; super: TableRowBase
struct FSproutSmartObjectUITraitData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TraitTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t IsCurrency; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t PreviewIcon[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    FText DisabledReason; // 0x0040 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FSproutSmartObjectUITraitData, TraitTag) == 8, "Offset mismatch for FSproutSmartObjectUITraitData::TraitTag");
static_assert(offsetof(FSproutSmartObjectUITraitData, IsCurrency) == 12, "Offset mismatch for FSproutSmartObjectUITraitData::IsCurrency");
static_assert(offsetof(FSproutSmartObjectUITraitData, DisplayName) == 16, "Offset mismatch for FSproutSmartObjectUITraitData::DisplayName");
static_assert(offsetof(FSproutSmartObjectUITraitData, PreviewIcon) == 32, "Offset mismatch for FSproutSmartObjectUITraitData::PreviewIcon");
static_assert(offsetof(FSproutSmartObjectUITraitData, DisabledReason) == 64, "Offset mismatch for FSproutSmartObjectUITraitData::DisabledReason");

// /Script/SproutGameUI.SproutSmartObjectUIVariationData
// Kind: ScriptStruct; super: TableRowBase
struct FSproutSmartObjectUIVariationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t VariationTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t PreviewIcon[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> ItemDefinitionOverride; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSproutSmartObjectUIVariationData, VariationTags) == 8, "Offset mismatch for FSproutSmartObjectUIVariationData::VariationTags");
static_assert(offsetof(FSproutSmartObjectUIVariationData, DisplayName) == 40, "Offset mismatch for FSproutSmartObjectUIVariationData::DisplayName");
static_assert(offsetof(FSproutSmartObjectUIVariationData, PreviewIcon) == 56, "Offset mismatch for FSproutSmartObjectUIVariationData::PreviewIcon");
static_assert(offsetof(FSproutSmartObjectUIVariationData, ItemDefinitionOverride) == 88, "Offset mismatch for FSproutSmartObjectUIVariationData::ItemDefinitionOverride");

// /Script/SproutGameUI.FortAutomationRpcManager_SproutGameUI
// Kind: Class; super: FortAutomationRpcManager
class UFortAutomationRpcManager_SproutGameUI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutGameUI.GameStateComponent_SproutFeedback
// Kind: Class; super: GameStateComponent_PlayerFeedback
class UGameStateComponent_SproutFeedback
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* ReportedHouseItemDef; // 0x0128 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameStateComponent_SproutFeedback, ReportedHouseItemDef) == 296, "Offset mismatch for UGameStateComponent_SproutFeedback::ReportedHouseItemDef");

// /Script/SproutGameUI.SproutActionBarViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutActionBarViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> ActionBarControllerCache; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USproutActionBarViewModel, ActionBarControllerCache) == 120, "Offset mismatch for USproutActionBarViewModel::ActionBarControllerCache");

// /Script/SproutGameUI.SproutAnimalCareViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutAnimalCareViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnPetComplete; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPettingAttemptFailed; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRequestComplete; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> AnimalCareControllerCache; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USproutAnimalCareViewModel, OnPetComplete) == 120, "Offset mismatch for USproutAnimalCareViewModel::OnPetComplete");
static_assert(offsetof(USproutAnimalCareViewModel, OnPettingAttemptFailed) == 136, "Offset mismatch for USproutAnimalCareViewModel::OnPettingAttemptFailed");
static_assert(offsetof(USproutAnimalCareViewModel, OnRequestComplete) == 152, "Offset mismatch for USproutAnimalCareViewModel::OnRequestComplete");
static_assert(offsetof(USproutAnimalCareViewModel, AnimalCareControllerCache) == 168, "Offset mismatch for USproutAnimalCareViewModel::AnimalCareControllerCache");

// /Script/SproutGameUI.SproutAnnouncementQueueViewModel
// Kind: Class; super: JunoAnnouncementQueueViewModelBase
class USproutAnnouncementQueueViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> PriorityQueue; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurrentMessage[0x34]; // 0x0090 (Size: 0x34, Type: StructProperty)
    std::int32_t WidgetTimeoutDelay; // 0x00C4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USproutAnnouncementQueueViewModel, PriorityQueue) == 128, "Offset mismatch for USproutAnnouncementQueueViewModel::PriorityQueue");
static_assert(offsetof(USproutAnnouncementQueueViewModel, CurrentMessage) == 144, "Offset mismatch for USproutAnnouncementQueueViewModel::CurrentMessage");
static_assert(offsetof(USproutAnnouncementQueueViewModel, WidgetTimeoutDelay) == 196, "Offset mismatch for USproutAnnouncementQueueViewModel::WidgetTimeoutDelay");

// /Script/SproutGameUI.SproutAnnouncementViewModel
// Kind: Class; super: JunoAnnouncementBaseViewModel
class USproutAnnouncementViewModel
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CollectionUpdateType; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    std::uint8_t CollectionCategoryTag[0x1]; // 0x00C4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutAnnouncementViewModel, CollectionUpdateType) == 192, "Offset mismatch for USproutAnnouncementViewModel::CollectionUpdateType");
static_assert(offsetof(USproutAnnouncementViewModel, CollectionCategoryTag) == 196, "Offset mismatch for USproutAnnouncementViewModel::CollectionCategoryTag");

// /Script/SproutGameUI.SproutAppFrameWidget
// Kind: Class; super: CommonUserWidget
class USproutAppFrameWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* AppViewModel; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CloseAction[0x10]; // 0x0338 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackAction[0x1]; // 0x0348 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutAppFrameWidget, AppViewModel) == 816, "Offset mismatch for USproutAppFrameWidget::AppViewModel");
static_assert(offsetof(USproutAppFrameWidget, CloseAction) == 824, "Offset mismatch for USproutAppFrameWidget::CloseAction");
static_assert(offsetof(USproutAppFrameWidget, BackAction) == 840, "Offset mismatch for USproutAppFrameWidget::BackAction");

// /Script/SproutGameUI.SproutAppViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutAppViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t AppUIData[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutAppViewModel, AppUIData) == 120, "Offset mismatch for USproutAppViewModel::AppUIData");

// /Script/SproutGameUI.SproutAppWidget
// Kind: Class; super: CommonActivatableWidget
class USproutAppWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t AppTag[0x8]; // 0x04A0 (Size: 0x8, Type: StructProperty)
    void* AppViewModel; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* AppFrameWidget; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AltCloseAction[0x10]; // 0x04B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsSubView; // 0x04C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutAppWidget, AppTag) == 1184, "Offset mismatch for USproutAppWidget::AppTag");
static_assert(offsetof(USproutAppWidget, AppViewModel) == 1192, "Offset mismatch for USproutAppWidget::AppViewModel");
static_assert(offsetof(USproutAppWidget, AppFrameWidget) == 1200, "Offset mismatch for USproutAppWidget::AppFrameWidget");
static_assert(offsetof(USproutAppWidget, AltCloseAction) == 1208, "Offset mismatch for USproutAppWidget::AltCloseAction");
static_assert(offsetof(USproutAppWidget, bIsSubView) == 1224, "Offset mismatch for USproutAppWidget::bIsSubView");

// /Script/SproutGameUI.SproutBountyBoardCategoriesViewModel
// Kind: Class; super: MVVMViewModelBase
class USproutBountyBoardCategoriesViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> Categories; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutBountyBoardCategoriesViewModel, Categories) == 104, "Offset mismatch for USproutBountyBoardCategoriesViewModel::Categories");

// /Script/SproutGameUI.SproutBuildLimitViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutBuildLimitViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t Current; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t max; // 0x007C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USproutBuildLimitViewModel, Current) == 120, "Offset mismatch for USproutBuildLimitViewModel::Current");
static_assert(offsetof(USproutBuildLimitViewModel, max) == 124, "Offset mismatch for USproutBuildLimitViewModel::max");

// /Script/SproutGameUI.SproutCategoryViewModel
// Kind: Class; super: MVVMViewModelBase
class USproutCategoryViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Tag[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t IsEnabled; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A1
    std::int32_t SortPriority; // 0x00A4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USproutCategoryViewModel, Tag) == 104, "Offset mismatch for USproutCategoryViewModel::Tag");
static_assert(offsetof(USproutCategoryViewModel, DisplayName) == 112, "Offset mismatch for USproutCategoryViewModel::DisplayName");
static_assert(offsetof(USproutCategoryViewModel, Icon) == 128, "Offset mismatch for USproutCategoryViewModel::Icon");
static_assert(offsetof(USproutCategoryViewModel, IsEnabled) == 160, "Offset mismatch for USproutCategoryViewModel::IsEnabled");
static_assert(offsetof(USproutCategoryViewModel, SortPriority) == 164, "Offset mismatch for USproutCategoryViewModel::SortPriority");

// /Script/SproutGameUI.SproutChatWheelCustomSubWheel
// Kind: Class; super: Object
class USproutChatWheelCustomSubWheel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutGameUI.SproutChatWheelEntryViewModel
// Kind: Class; super: MVVMViewModelBase
class USproutChatWheelEntryViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Type; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t Text[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RadialPositionOverride; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00B1
    std::uint8_t AssociatedItem[0x20]; // 0x00B8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ChildEntries; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Cost; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t CanAfford; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x8B]; // 0x00ED
    void* CustomSubWheel; // 0x0178 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutChatWheelEntryViewModel, Type) == 104, "Offset mismatch for USproutChatWheelEntryViewModel::Type");
static_assert(offsetof(USproutChatWheelEntryViewModel, Text) == 112, "Offset mismatch for USproutChatWheelEntryViewModel::Text");
static_assert(offsetof(USproutChatWheelEntryViewModel, Description) == 128, "Offset mismatch for USproutChatWheelEntryViewModel::Description");
static_assert(offsetof(USproutChatWheelEntryViewModel, Icon) == 144, "Offset mismatch for USproutChatWheelEntryViewModel::Icon");
static_assert(offsetof(USproutChatWheelEntryViewModel, RadialPositionOverride) == 176, "Offset mismatch for USproutChatWheelEntryViewModel::RadialPositionOverride");
static_assert(offsetof(USproutChatWheelEntryViewModel, AssociatedItem) == 184, "Offset mismatch for USproutChatWheelEntryViewModel::AssociatedItem");
static_assert(offsetof(USproutChatWheelEntryViewModel, ChildEntries) == 216, "Offset mismatch for USproutChatWheelEntryViewModel::ChildEntries");
static_assert(offsetof(USproutChatWheelEntryViewModel, Cost) == 232, "Offset mismatch for USproutChatWheelEntryViewModel::Cost");
static_assert(offsetof(USproutChatWheelEntryViewModel, CanAfford) == 236, "Offset mismatch for USproutChatWheelEntryViewModel::CanAfford");
static_assert(offsetof(USproutChatWheelEntryViewModel, CustomSubWheel) == 376, "Offset mismatch for USproutChatWheelEntryViewModel::CustomSubWheel");

// /Script/SproutGameUI.SproutChatWheelViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutChatWheelViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> TopLevelEntries; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurrentEntries; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    void* ParentEntry; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutChatWheelViewModel, TopLevelEntries) == 120, "Offset mismatch for USproutChatWheelViewModel::TopLevelEntries");
static_assert(offsetof(USproutChatWheelViewModel, CurrentEntries) == 136, "Offset mismatch for USproutChatWheelViewModel::CurrentEntries");
static_assert(offsetof(USproutChatWheelViewModel, ParentEntry) == 152, "Offset mismatch for USproutChatWheelViewModel::ParentEntry");

// /Script/SproutGameUI.SproutCityFullScreenMap
// Kind: Class; super: JunoFullScreenMap
class USproutCityFullScreenMap
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    std::uint8_t CloseScreenAction[0x10]; // 0x04C8 (Size: 0x10, Type: StructProperty)
    void* Button_Back; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_PlaceMarker; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_ResetFocus; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* MapWidget; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* Text_EmptyList; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* HBox_MapPrompts; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* RT_Location; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* RT_Biome; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* RT_SubBiome; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Image_Biome; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* CommonActionWidget_Zoom_Gamepad; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* CommonActionWidget_Pan_Gamepad; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CaveIcon[0xB0]; // 0x0540 (Size: 0xB0, Type: StructProperty)
    float ZoomMouseWheelScale; // 0x05F0 (Size: 0x4, Type: FloatProperty)
    float TouchZoomSpeed; // 0x05F4 (Size: 0x4, Type: FloatProperty)
    float GamepadZoomSpeed; // 0x05F8 (Size: 0x4, Type: FloatProperty)
    float GamepadPanSpeed; // 0x05FC (Size: 0x4, Type: FloatProperty)
    float GamepadDeadZone; // 0x0600 (Size: 0x4, Type: FloatProperty)
    float VirtualCursorMoveSpeed; // 0x0604 (Size: 0x4, Type: FloatProperty)
    float VirtualCursorHoverSpeedMultiplier; // 0x0608 (Size: 0x4, Type: FloatProperty)
    float VirtualCursorAccelerationTime; // 0x060C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyHoveredIconMagnetism; // 0x0610 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVirtualCursorEnabled; // 0x0611 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0612
    float VirtualCursorMagnetismSpeed; // 0x0614 (Size: 0x4, Type: FloatProperty)
    void* VirtualCursorCurve; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VirtualCursorBlockingWidgets; // 0x0620 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanPlaceMapPings; // 0x0630 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutCityFullScreenMap, CloseScreenAction) == 1224, "Offset mismatch for USproutCityFullScreenMap::CloseScreenAction");
static_assert(offsetof(USproutCityFullScreenMap, Button_Back) == 1240, "Offset mismatch for USproutCityFullScreenMap::Button_Back");
static_assert(offsetof(USproutCityFullScreenMap, Button_CloseTouch) == 1248, "Offset mismatch for USproutCityFullScreenMap::Button_CloseTouch");
static_assert(offsetof(USproutCityFullScreenMap, Button_PlaceMarker) == 1256, "Offset mismatch for USproutCityFullScreenMap::Button_PlaceMarker");
static_assert(offsetof(USproutCityFullScreenMap, Button_ResetFocus) == 1264, "Offset mismatch for USproutCityFullScreenMap::Button_ResetFocus");
static_assert(offsetof(USproutCityFullScreenMap, MapWidget) == 1272, "Offset mismatch for USproutCityFullScreenMap::MapWidget");
static_assert(offsetof(USproutCityFullScreenMap, Text_EmptyList) == 1280, "Offset mismatch for USproutCityFullScreenMap::Text_EmptyList");
static_assert(offsetof(USproutCityFullScreenMap, HBox_MapPrompts) == 1288, "Offset mismatch for USproutCityFullScreenMap::HBox_MapPrompts");
static_assert(offsetof(USproutCityFullScreenMap, RT_Location) == 1296, "Offset mismatch for USproutCityFullScreenMap::RT_Location");
static_assert(offsetof(USproutCityFullScreenMap, RT_Biome) == 1304, "Offset mismatch for USproutCityFullScreenMap::RT_Biome");
static_assert(offsetof(USproutCityFullScreenMap, RT_SubBiome) == 1312, "Offset mismatch for USproutCityFullScreenMap::RT_SubBiome");
static_assert(offsetof(USproutCityFullScreenMap, Image_Biome) == 1320, "Offset mismatch for USproutCityFullScreenMap::Image_Biome");
static_assert(offsetof(USproutCityFullScreenMap, CommonActionWidget_Zoom_Gamepad) == 1328, "Offset mismatch for USproutCityFullScreenMap::CommonActionWidget_Zoom_Gamepad");
static_assert(offsetof(USproutCityFullScreenMap, CommonActionWidget_Pan_Gamepad) == 1336, "Offset mismatch for USproutCityFullScreenMap::CommonActionWidget_Pan_Gamepad");
static_assert(offsetof(USproutCityFullScreenMap, CaveIcon) == 1344, "Offset mismatch for USproutCityFullScreenMap::CaveIcon");
static_assert(offsetof(USproutCityFullScreenMap, ZoomMouseWheelScale) == 1520, "Offset mismatch for USproutCityFullScreenMap::ZoomMouseWheelScale");
static_assert(offsetof(USproutCityFullScreenMap, TouchZoomSpeed) == 1524, "Offset mismatch for USproutCityFullScreenMap::TouchZoomSpeed");
static_assert(offsetof(USproutCityFullScreenMap, GamepadZoomSpeed) == 1528, "Offset mismatch for USproutCityFullScreenMap::GamepadZoomSpeed");
static_assert(offsetof(USproutCityFullScreenMap, GamepadPanSpeed) == 1532, "Offset mismatch for USproutCityFullScreenMap::GamepadPanSpeed");
static_assert(offsetof(USproutCityFullScreenMap, GamepadDeadZone) == 1536, "Offset mismatch for USproutCityFullScreenMap::GamepadDeadZone");
static_assert(offsetof(USproutCityFullScreenMap, VirtualCursorMoveSpeed) == 1540, "Offset mismatch for USproutCityFullScreenMap::VirtualCursorMoveSpeed");
static_assert(offsetof(USproutCityFullScreenMap, VirtualCursorHoverSpeedMultiplier) == 1544, "Offset mismatch for USproutCityFullScreenMap::VirtualCursorHoverSpeedMultiplier");
static_assert(offsetof(USproutCityFullScreenMap, VirtualCursorAccelerationTime) == 1548, "Offset mismatch for USproutCityFullScreenMap::VirtualCursorAccelerationTime");
static_assert(offsetof(USproutCityFullScreenMap, bApplyHoveredIconMagnetism) == 1552, "Offset mismatch for USproutCityFullScreenMap::bApplyHoveredIconMagnetism");
static_assert(offsetof(USproutCityFullScreenMap, bIsVirtualCursorEnabled) == 1553, "Offset mismatch for USproutCityFullScreenMap::bIsVirtualCursorEnabled");
static_assert(offsetof(USproutCityFullScreenMap, VirtualCursorMagnetismSpeed) == 1556, "Offset mismatch for USproutCityFullScreenMap::VirtualCursorMagnetismSpeed");
static_assert(offsetof(USproutCityFullScreenMap, VirtualCursorCurve) == 1560, "Offset mismatch for USproutCityFullScreenMap::VirtualCursorCurve");
static_assert(offsetof(USproutCityFullScreenMap, VirtualCursorBlockingWidgets) == 1568, "Offset mismatch for USproutCityFullScreenMap::VirtualCursorBlockingWidgets");
static_assert(offsetof(USproutCityFullScreenMap, bCanPlaceMapPings) == 1584, "Offset mismatch for USproutCityFullScreenMap::bCanPlaceMapPings");

// /Script/SproutGameUI.SproutCityMapViewModel
// Kind: Class; super: JunoMapViewModel
class USproutCityMapViewModel
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    TSoftObjectPtr<void> MapTexture; // 0x0150 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USproutCityMapViewModel, MapTexture) == 336, "Offset mismatch for USproutCityMapViewModel::MapTexture");

// /Script/SproutGameUI.SproutCollectionsCategoryViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutCollectionsCategoryViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t CategoryTag[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    TArray<void*> Items; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DisplayName[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x00A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DetailsPanelWidget[0x20]; // 0x00C0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t DiscoverMoreHint[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShouldShowDescription; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutCollectionsCategoryViewModel, CategoryTag) == 120, "Offset mismatch for USproutCollectionsCategoryViewModel::CategoryTag");
static_assert(offsetof(USproutCollectionsCategoryViewModel, Items) == 128, "Offset mismatch for USproutCollectionsCategoryViewModel::Items");
static_assert(offsetof(USproutCollectionsCategoryViewModel, DisplayName) == 144, "Offset mismatch for USproutCollectionsCategoryViewModel::DisplayName");
static_assert(offsetof(USproutCollectionsCategoryViewModel, Icon) == 160, "Offset mismatch for USproutCollectionsCategoryViewModel::Icon");
static_assert(offsetof(USproutCollectionsCategoryViewModel, DetailsPanelWidget) == 192, "Offset mismatch for USproutCollectionsCategoryViewModel::DetailsPanelWidget");
static_assert(offsetof(USproutCollectionsCategoryViewModel, DiscoverMoreHint) == 224, "Offset mismatch for USproutCollectionsCategoryViewModel::DiscoverMoreHint");
static_assert(offsetof(USproutCollectionsCategoryViewModel, ShouldShowDescription) == 240, "Offset mismatch for USproutCollectionsCategoryViewModel::ShouldShowDescription");

// /Script/SproutGameUI.SproutCollectionsItemViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutCollectionsItemViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t ItemID[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> ParentCategoryVM; // 0x007C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0084
    std::uint8_t DisplayName[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargeImage[0x20]; // 0x00B8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargeImageUnknown[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Description[0x10]; // 0x00F8 (Size: 0x10, Type: TextProperty)
    std::uint8_t DescriptionUnknown[0x10]; // 0x0108 (Size: 0x10, Type: TextProperty)
    std::uint8_t SourceLocations[0x20]; // 0x0118 (Size: 0x20, Type: StructProperty)
    std::uint8_t SourceEvents[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t ItemSpecificTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t IsNew; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Rarity; // 0x0179 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Status; // 0x017A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USproutCollectionsItemViewModel, ItemID) == 120, "Offset mismatch for USproutCollectionsItemViewModel::ItemID");
static_assert(offsetof(USproutCollectionsItemViewModel, ParentCategoryVM) == 124, "Offset mismatch for USproutCollectionsItemViewModel::ParentCategoryVM");
static_assert(offsetof(USproutCollectionsItemViewModel, DisplayName) == 136, "Offset mismatch for USproutCollectionsItemViewModel::DisplayName");
static_assert(offsetof(USproutCollectionsItemViewModel, Icon) == 152, "Offset mismatch for USproutCollectionsItemViewModel::Icon");
static_assert(offsetof(USproutCollectionsItemViewModel, LargeImage) == 184, "Offset mismatch for USproutCollectionsItemViewModel::LargeImage");
static_assert(offsetof(USproutCollectionsItemViewModel, LargeImageUnknown) == 216, "Offset mismatch for USproutCollectionsItemViewModel::LargeImageUnknown");
static_assert(offsetof(USproutCollectionsItemViewModel, Description) == 248, "Offset mismatch for USproutCollectionsItemViewModel::Description");
static_assert(offsetof(USproutCollectionsItemViewModel, DescriptionUnknown) == 264, "Offset mismatch for USproutCollectionsItemViewModel::DescriptionUnknown");
static_assert(offsetof(USproutCollectionsItemViewModel, SourceLocations) == 280, "Offset mismatch for USproutCollectionsItemViewModel::SourceLocations");
static_assert(offsetof(USproutCollectionsItemViewModel, SourceEvents) == 312, "Offset mismatch for USproutCollectionsItemViewModel::SourceEvents");
static_assert(offsetof(USproutCollectionsItemViewModel, ItemSpecificTags) == 344, "Offset mismatch for USproutCollectionsItemViewModel::ItemSpecificTags");
static_assert(offsetof(USproutCollectionsItemViewModel, IsNew) == 376, "Offset mismatch for USproutCollectionsItemViewModel::IsNew");
static_assert(offsetof(USproutCollectionsItemViewModel, Rarity) == 377, "Offset mismatch for USproutCollectionsItemViewModel::Rarity");
static_assert(offsetof(USproutCollectionsItemViewModel, Status) == 378, "Offset mismatch for USproutCollectionsItemViewModel::Status");

// /Script/SproutGameUI.SproutCollectionsViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutCollectionsViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Categories; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutCollectionsViewModel, Categories) == 120, "Offset mismatch for USproutCollectionsViewModel::Categories");

// /Script/SproutGameUI.SproutContactsAppViewModel
// Kind: Class; super: SproutAppViewModel
class USproutContactsAppViewModel
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Players; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutContactsAppViewModel, Players) == 360, "Offset mismatch for USproutContactsAppViewModel::Players");

// /Script/SproutGameUI.SproutCurrentNeighborhoodInfoViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutCurrentNeighborhoodInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Members; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bVMInititialized; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutCurrentNeighborhoodInfoViewModel, Members) == 120, "Offset mismatch for USproutCurrentNeighborhoodInfoViewModel::Members");
static_assert(offsetof(USproutCurrentNeighborhoodInfoViewModel, bVMInititialized) == 136, "Offset mismatch for USproutCurrentNeighborhoodInfoViewModel::bVMInititialized");

// /Script/SproutGameUI.SproutDynamicUIDirectorComponent_Menu
// Kind: Class; super: JunoDynamicUIDirectorComponent
class USproutDynamicUIDirectorComponent_Menu
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* TaggedWidgetSceneData; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> HudLayoutScenes; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TArray<void*> WidgetPoolInitData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutDynamicUIDirectorComponent_Menu, TaggedWidgetSceneData) == 200, "Offset mismatch for USproutDynamicUIDirectorComponent_Menu::TaggedWidgetSceneData");
static_assert(offsetof(USproutDynamicUIDirectorComponent_Menu, HudLayoutScenes) == 208, "Offset mismatch for USproutDynamicUIDirectorComponent_Menu::HudLayoutScenes");
static_assert(offsetof(USproutDynamicUIDirectorComponent_Menu, WidgetPoolInitData) == 224, "Offset mismatch for USproutDynamicUIDirectorComponent_Menu::WidgetPoolInitData");

// /Script/SproutGameUI.SproutGameStateComponent_SmartObjectUIData
// Kind: Class; super: JunoGameStateComponent_UIDataBase
class USproutGameStateComponent_SmartObjectUIData
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t SmartObjectUICategoryDataRegistryType[0x4]; // 0x00F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t SmartObjectUIVariationDataRegistryType[0x4]; // 0x00F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t SmartObjectUITraitDataRegistryType[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutGameStateComponent_SmartObjectUIData, SmartObjectUICategoryDataRegistryType) == 240, "Offset mismatch for USproutGameStateComponent_SmartObjectUIData::SmartObjectUICategoryDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_SmartObjectUIData, SmartObjectUIVariationDataRegistryType) == 244, "Offset mismatch for USproutGameStateComponent_SmartObjectUIData::SmartObjectUIVariationDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_SmartObjectUIData, SmartObjectUITraitDataRegistryType) == 248, "Offset mismatch for USproutGameStateComponent_SmartObjectUIData::SmartObjectUITraitDataRegistryType");

// /Script/SproutGameUI.SproutGameStateComponent_UIData
// Kind: Class; super: JunoGameStateComponent_UIDataBase
class USproutGameStateComponent_UIData
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t AppDataRegistryType[0x4]; // 0x00F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t HousingDataRegistryType[0x4]; // 0x00F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t JobInfoUIDataRegistryType[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t PoseEmoteDataRegistryType[0x4]; // 0x00FC (Size: 0x4, Type: StructProperty)
    std::uint8_t PoseEmoteCategoryDataRegistryType[0x4]; // 0x0100 (Size: 0x4, Type: StructProperty)
    std::uint8_t ReactionDataRegistryType[0x4]; // 0x0104 (Size: 0x4, Type: StructProperty)
    std::uint8_t ReactionGroupDataRegistryType[0x4]; // 0x0108 (Size: 0x4, Type: StructProperty)
    std::uint8_t MailSenderDataRegisteryType[0x4]; // 0x010C (Size: 0x4, Type: StructProperty)
    std::uint8_t BountyBoardCategoryDataRegistryType[0x8]; // 0x0110 (Size: 0x8, Type: StructProperty)
    void* ShoppingCategoryUIData; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrencyDataRegistryType[0x4]; // 0x0120 (Size: 0x4, Type: StructProperty)
    std::uint8_t CollectionsCategoryRegistryType[0x4]; // 0x0124 (Size: 0x4, Type: StructProperty)
    std::uint8_t CollectionsItemRegistryType[0x4]; // 0x0128 (Size: 0x4, Type: StructProperty)
    std::uint8_t ChatWheelRegistryType[0x1]; // 0x012C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutGameStateComponent_UIData, AppDataRegistryType) == 240, "Offset mismatch for USproutGameStateComponent_UIData::AppDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, HousingDataRegistryType) == 244, "Offset mismatch for USproutGameStateComponent_UIData::HousingDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, JobInfoUIDataRegistryType) == 248, "Offset mismatch for USproutGameStateComponent_UIData::JobInfoUIDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, PoseEmoteDataRegistryType) == 252, "Offset mismatch for USproutGameStateComponent_UIData::PoseEmoteDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, PoseEmoteCategoryDataRegistryType) == 256, "Offset mismatch for USproutGameStateComponent_UIData::PoseEmoteCategoryDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, ReactionDataRegistryType) == 260, "Offset mismatch for USproutGameStateComponent_UIData::ReactionDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, ReactionGroupDataRegistryType) == 264, "Offset mismatch for USproutGameStateComponent_UIData::ReactionGroupDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, MailSenderDataRegisteryType) == 268, "Offset mismatch for USproutGameStateComponent_UIData::MailSenderDataRegisteryType");
static_assert(offsetof(USproutGameStateComponent_UIData, BountyBoardCategoryDataRegistryType) == 272, "Offset mismatch for USproutGameStateComponent_UIData::BountyBoardCategoryDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, ShoppingCategoryUIData) == 280, "Offset mismatch for USproutGameStateComponent_UIData::ShoppingCategoryUIData");
static_assert(offsetof(USproutGameStateComponent_UIData, CurrencyDataRegistryType) == 288, "Offset mismatch for USproutGameStateComponent_UIData::CurrencyDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, CollectionsCategoryRegistryType) == 292, "Offset mismatch for USproutGameStateComponent_UIData::CollectionsCategoryRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, CollectionsItemRegistryType) == 296, "Offset mismatch for USproutGameStateComponent_UIData::CollectionsItemRegistryType");
static_assert(offsetof(USproutGameStateComponent_UIData, ChatWheelRegistryType) == 300, "Offset mismatch for USproutGameStateComponent_UIData::ChatWheelRegistryType");

// /Script/SproutGameUI.SproutHUDWidgetBehaviorCondition_HasUnseenNotifications
// Kind: Class; super: HUDWidgetBehaviorConditionBase
class USproutHUDWidgetBehaviorCondition_HasUnseenNotifications
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* WidgetBehavior; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0030
    std::uint8_t bInverseCondition; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutHUDWidgetBehaviorCondition_HasUnseenNotifications, WidgetBehavior) == 40, "Offset mismatch for USproutHUDWidgetBehaviorCondition_HasUnseenNotifications::WidgetBehavior");
static_assert(offsetof(USproutHUDWidgetBehaviorCondition_HasUnseenNotifications, bInverseCondition) == 64, "Offset mismatch for USproutHUDWidgetBehaviorCondition_HasUnseenNotifications::bInverseCondition");

// /Script/SproutGameUI.SproutHousingInfoViewModel
// Kind: Class; super: SproutInfoViewModelBase
class USproutHousingInfoViewModel
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    FName GridListItemType; // 0x00E8 (Size: 0x8, Type: NameProperty)
    std::uint8_t HousingLotTags[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t HousingShellRow[0x50]; // 0x0110 (Size: 0x50, Type: StructProperty)
    std::uint8_t bIsSanctioned; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0161
    std::uint8_t HousingSaveID[0x10]; // 0x0164 (Size: 0x10, Type: StructProperty)
    std::uint8_t HousingShellPrimaryAssetId[0x8]; // 0x0174 (Size: 0x8, Type: StructProperty)
    std::uint8_t IsEnabledForLot; // 0x017C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x017D
    TWeakObjectPtr<void> HousingGameplayVolume; // 0x0180 (Size: 0x8, Type: WeakObjectProperty)
    void* HousingReactionsViewModel; // 0x0188 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FilterMode[0x4]; // 0x0190 (Size: 0x4, Type: StructProperty)
    std::uint8_t CurrentlyBuilt; // 0x0194 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsCurrentHouse; // 0x0195 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0196
    std::int32_t DecorCount; // 0x0198 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x019C
    TArray<void*> PlayersWithPermissionToEdit; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ListOfPlayersToOfferPermission; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEveryoneHasPermissionToEdit; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNeighborsHavePermissionToEdit; // 0x01C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPartiesHavePermissionToEdit; // 0x01C2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutHousingInfoViewModel, GridListItemType) == 232, "Offset mismatch for USproutHousingInfoViewModel::GridListItemType");
static_assert(offsetof(USproutHousingInfoViewModel, HousingLotTags) == 240, "Offset mismatch for USproutHousingInfoViewModel::HousingLotTags");
static_assert(offsetof(USproutHousingInfoViewModel, HousingShellRow) == 272, "Offset mismatch for USproutHousingInfoViewModel::HousingShellRow");
static_assert(offsetof(USproutHousingInfoViewModel, bIsSanctioned) == 352, "Offset mismatch for USproutHousingInfoViewModel::bIsSanctioned");
static_assert(offsetof(USproutHousingInfoViewModel, HousingSaveID) == 356, "Offset mismatch for USproutHousingInfoViewModel::HousingSaveID");
static_assert(offsetof(USproutHousingInfoViewModel, HousingShellPrimaryAssetId) == 372, "Offset mismatch for USproutHousingInfoViewModel::HousingShellPrimaryAssetId");
static_assert(offsetof(USproutHousingInfoViewModel, IsEnabledForLot) == 380, "Offset mismatch for USproutHousingInfoViewModel::IsEnabledForLot");
static_assert(offsetof(USproutHousingInfoViewModel, HousingGameplayVolume) == 384, "Offset mismatch for USproutHousingInfoViewModel::HousingGameplayVolume");
static_assert(offsetof(USproutHousingInfoViewModel, HousingReactionsViewModel) == 392, "Offset mismatch for USproutHousingInfoViewModel::HousingReactionsViewModel");
static_assert(offsetof(USproutHousingInfoViewModel, FilterMode) == 400, "Offset mismatch for USproutHousingInfoViewModel::FilterMode");
static_assert(offsetof(USproutHousingInfoViewModel, CurrentlyBuilt) == 404, "Offset mismatch for USproutHousingInfoViewModel::CurrentlyBuilt");
static_assert(offsetof(USproutHousingInfoViewModel, IsCurrentHouse) == 405, "Offset mismatch for USproutHousingInfoViewModel::IsCurrentHouse");
static_assert(offsetof(USproutHousingInfoViewModel, DecorCount) == 408, "Offset mismatch for USproutHousingInfoViewModel::DecorCount");
static_assert(offsetof(USproutHousingInfoViewModel, PlayersWithPermissionToEdit) == 416, "Offset mismatch for USproutHousingInfoViewModel::PlayersWithPermissionToEdit");
static_assert(offsetof(USproutHousingInfoViewModel, ListOfPlayersToOfferPermission) == 432, "Offset mismatch for USproutHousingInfoViewModel::ListOfPlayersToOfferPermission");
static_assert(offsetof(USproutHousingInfoViewModel, bEveryoneHasPermissionToEdit) == 448, "Offset mismatch for USproutHousingInfoViewModel::bEveryoneHasPermissionToEdit");
static_assert(offsetof(USproutHousingInfoViewModel, bNeighborsHavePermissionToEdit) == 449, "Offset mismatch for USproutHousingInfoViewModel::bNeighborsHavePermissionToEdit");
static_assert(offsetof(USproutHousingInfoViewModel, bPartiesHavePermissionToEdit) == 450, "Offset mismatch for USproutHousingInfoViewModel::bPartiesHavePermissionToEdit");

// /Script/SproutGameUI.SproutInfoViewModelBase
// Kind: Class; super: FortPerUserViewModel
class USproutInfoViewModelBase
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t ItemDefinition[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ShouldShowCost; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0099
    std::int32_t Cost; // 0x009C (Size: 0x4, Type: IntProperty)
    std::uint8_t DisplayName[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t PreviewImage[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t IsUnlocked; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutInfoViewModelBase, ItemDefinition) == 120, "Offset mismatch for USproutInfoViewModelBase::ItemDefinition");
static_assert(offsetof(USproutInfoViewModelBase, ShouldShowCost) == 152, "Offset mismatch for USproutInfoViewModelBase::ShouldShowCost");
static_assert(offsetof(USproutInfoViewModelBase, Cost) == 156, "Offset mismatch for USproutInfoViewModelBase::Cost");
static_assert(offsetof(USproutInfoViewModelBase, DisplayName) == 160, "Offset mismatch for USproutInfoViewModelBase::DisplayName");
static_assert(offsetof(USproutInfoViewModelBase, PreviewImage) == 176, "Offset mismatch for USproutInfoViewModelBase::PreviewImage");
static_assert(offsetof(USproutInfoViewModelBase, IsUnlocked) == 208, "Offset mismatch for USproutInfoViewModelBase::IsUnlocked");

// /Script/SproutGameUI.SproutInteractionInfoMonitorConversation
// Kind: Class; super: JunoInteractionInfoMonitorConversation
class USproutInteractionInfoMonitorConversation
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* SproutInteractionInfoViewModel; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutInteractionInfoMonitorConversation, SproutInteractionInfoViewModel) == 128, "Offset mismatch for USproutInteractionInfoMonitorConversation::SproutInteractionInfoViewModel");

// /Script/SproutGameUI.SproutInteractionInfoMonitorPrimary
// Kind: Class; super: JunoInteractionInfoMonitorPrimary
class USproutInteractionInfoMonitorPrimary
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* SproutInteractionInfoViewModel; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutInteractionInfoMonitorPrimary, SproutInteractionInfoViewModel) == 88, "Offset mismatch for USproutInteractionInfoMonitorPrimary::SproutInteractionInfoViewModel");

// /Script/SproutGameUI.SproutInteractionInfoViewModel
// Kind: Class; super: JunoInteractionInfoViewModel
class USproutInteractionInfoViewModel
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PurchaseInteractionInfo[0x40]; // 0x00C0 (Size: 0x40, Type: StructProperty)
    TSoftObjectPtr<void> JobIcon; // 0x0100 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USproutInteractionInfoViewModel, PurchaseInteractionInfo) == 192, "Offset mismatch for USproutInteractionInfoViewModel::PurchaseInteractionInfo");
static_assert(offsetof(USproutInteractionInfoViewModel, JobIcon) == 256, "Offset mismatch for USproutInteractionInfoViewModel::JobIcon");

// /Script/SproutGameUI.SproutJobInfoViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutJobInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t JobTag[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    std::uint8_t JobName[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t JobIcon[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t JobDesc[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bShowTaskGrantingUI; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    std::int32_t JobSortingPriority; // 0x00C4 (Size: 0x4, Type: IntProperty)
    FText KeepWorkingTextOverride; // 0x00C8 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(USproutJobInfoViewModel, JobTag) == 120, "Offset mismatch for USproutJobInfoViewModel::JobTag");
static_assert(offsetof(USproutJobInfoViewModel, JobName) == 128, "Offset mismatch for USproutJobInfoViewModel::JobName");
static_assert(offsetof(USproutJobInfoViewModel, JobIcon) == 144, "Offset mismatch for USproutJobInfoViewModel::JobIcon");
static_assert(offsetof(USproutJobInfoViewModel, JobDesc) == 176, "Offset mismatch for USproutJobInfoViewModel::JobDesc");
static_assert(offsetof(USproutJobInfoViewModel, bShowTaskGrantingUI) == 192, "Offset mismatch for USproutJobInfoViewModel::bShowTaskGrantingUI");
static_assert(offsetof(USproutJobInfoViewModel, JobSortingPriority) == 196, "Offset mismatch for USproutJobInfoViewModel::JobSortingPriority");
static_assert(offsetof(USproutJobInfoViewModel, KeepWorkingTextOverride) == 200, "Offset mismatch for USproutJobInfoViewModel::KeepWorkingTextOverride");

// /Script/SproutGameUI.SproutJobLevelRewardInfoViewModel
// Kind: Class; super: MVVMViewModelBase
class USproutJobLevelRewardInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t JobTag[0x4]; // 0x0068 (Size: 0x4, Type: StructProperty)
    std::int32_t JobLevel; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t JobTitle[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t RewardLootBundleTags[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t LootBundle[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutJobLevelRewardInfoViewModel, JobTag) == 104, "Offset mismatch for USproutJobLevelRewardInfoViewModel::JobTag");
static_assert(offsetof(USproutJobLevelRewardInfoViewModel, JobLevel) == 108, "Offset mismatch for USproutJobLevelRewardInfoViewModel::JobLevel");
static_assert(offsetof(USproutJobLevelRewardInfoViewModel, JobTitle) == 112, "Offset mismatch for USproutJobLevelRewardInfoViewModel::JobTitle");
static_assert(offsetof(USproutJobLevelRewardInfoViewModel, RewardLootBundleTags) == 128, "Offset mismatch for USproutJobLevelRewardInfoViewModel::RewardLootBundleTags");
static_assert(offsetof(USproutJobLevelRewardInfoViewModel, LootBundle) == 160, "Offset mismatch for USproutJobLevelRewardInfoViewModel::LootBundle");

// /Script/SproutGameUI.SproutMailInfoViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutMailInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TWeakObjectPtr<void> InventoryOverflowComponent; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t OverflowEntry[0x40]; // 0x0088 (Size: 0x40, Type: StructProperty)
    std::uint8_t SenderDisplayName[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t CachedSubjectMessage[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t CachedBodyMessage[0x10]; // 0x00E8 (Size: 0x10, Type: TextProperty)
    std::uint8_t SenderPreviewImage[0x20]; // 0x00F8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AssetDisplayName[0x10]; // 0x0118 (Size: 0x10, Type: TextProperty)
    std::uint8_t AssetPreviewImage[0x20]; // 0x0128 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> SenderAssembledMeshSchema; // 0x0148 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USproutMailInfoViewModel, InventoryOverflowComponent) == 128, "Offset mismatch for USproutMailInfoViewModel::InventoryOverflowComponent");
static_assert(offsetof(USproutMailInfoViewModel, OverflowEntry) == 136, "Offset mismatch for USproutMailInfoViewModel::OverflowEntry");
static_assert(offsetof(USproutMailInfoViewModel, SenderDisplayName) == 200, "Offset mismatch for USproutMailInfoViewModel::SenderDisplayName");
static_assert(offsetof(USproutMailInfoViewModel, CachedSubjectMessage) == 216, "Offset mismatch for USproutMailInfoViewModel::CachedSubjectMessage");
static_assert(offsetof(USproutMailInfoViewModel, CachedBodyMessage) == 232, "Offset mismatch for USproutMailInfoViewModel::CachedBodyMessage");
static_assert(offsetof(USproutMailInfoViewModel, SenderPreviewImage) == 248, "Offset mismatch for USproutMailInfoViewModel::SenderPreviewImage");
static_assert(offsetof(USproutMailInfoViewModel, AssetDisplayName) == 280, "Offset mismatch for USproutMailInfoViewModel::AssetDisplayName");
static_assert(offsetof(USproutMailInfoViewModel, AssetPreviewImage) == 296, "Offset mismatch for USproutMailInfoViewModel::AssetPreviewImage");
static_assert(offsetof(USproutMailInfoViewModel, SenderAssembledMeshSchema) == 328, "Offset mismatch for USproutMailInfoViewModel::SenderAssembledMeshSchema");

// /Script/SproutGameUI.SproutMapLegendWidget
// Kind: Class; super: JunoMapLegendWidget
class USproutMapLegendWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* EntryBox_TeamPlayers; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutMapLegendWidget, EntryBox_TeamPlayers) == 816, "Offset mismatch for USproutMapLegendWidget::EntryBox_TeamPlayers");

// /Script/SproutGameUI.SproutNeighborhoodsBrowserViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutNeighborhoodsBrowserViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> HomeNeighborhood; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FavoriteNeighborhoods; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InvitedToJoinNeighborhoods; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InvitedToVisitNeighborhoods; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RecentlyVisitedNeighborhoods; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HeardAboutNeighborhoods; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MatchmakingNeighborhoods; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutNeighborhoodsBrowserViewModel, HomeNeighborhood) == 120, "Offset mismatch for USproutNeighborhoodsBrowserViewModel::HomeNeighborhood");
static_assert(offsetof(USproutNeighborhoodsBrowserViewModel, FavoriteNeighborhoods) == 136, "Offset mismatch for USproutNeighborhoodsBrowserViewModel::FavoriteNeighborhoods");
static_assert(offsetof(USproutNeighborhoodsBrowserViewModel, InvitedToJoinNeighborhoods) == 152, "Offset mismatch for USproutNeighborhoodsBrowserViewModel::InvitedToJoinNeighborhoods");
static_assert(offsetof(USproutNeighborhoodsBrowserViewModel, InvitedToVisitNeighborhoods) == 168, "Offset mismatch for USproutNeighborhoodsBrowserViewModel::InvitedToVisitNeighborhoods");
static_assert(offsetof(USproutNeighborhoodsBrowserViewModel, RecentlyVisitedNeighborhoods) == 184, "Offset mismatch for USproutNeighborhoodsBrowserViewModel::RecentlyVisitedNeighborhoods");
static_assert(offsetof(USproutNeighborhoodsBrowserViewModel, HeardAboutNeighborhoods) == 200, "Offset mismatch for USproutNeighborhoodsBrowserViewModel::HeardAboutNeighborhoods");
static_assert(offsetof(USproutNeighborhoodsBrowserViewModel, MatchmakingNeighborhoods) == 216, "Offset mismatch for USproutNeighborhoodsBrowserViewModel::MatchmakingNeighborhoods");

// /Script/SproutGameUI.SproutNotificationsViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutNotificationsViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* ActiveNotification; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RecentNotifications; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NotificationHistory; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutNotificationsViewModel, ActiveNotification) == 120, "Offset mismatch for USproutNotificationsViewModel::ActiveNotification");
static_assert(offsetof(USproutNotificationsViewModel, RecentNotifications) == 128, "Offset mismatch for USproutNotificationsViewModel::RecentNotifications");
static_assert(offsetof(USproutNotificationsViewModel, NotificationHistory) == 144, "Offset mismatch for USproutNotificationsViewModel::NotificationHistory");

// /Script/SproutGameUI.SproutOnlinePollVoteViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutOnlinePollVoteViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t PollName[0x4]; // 0x0078 (Size: 0x4, Type: StructProperty)
    std::uint8_t VoteName[0x4]; // 0x007C (Size: 0x4, Type: StructProperty)
    std::int64_t VoteTotal; // 0x0080 (Size: 0x8, Type: Int64Property)
    std::int32_t VoteRank; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsInTie; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVotingAvailable; // 0x008D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x008E
    std::uint8_t DisplayName[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t WinString[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayColor[0x8]; // 0x00B0 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayIcon[0x20]; // 0x00B8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PollUIData[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutOnlinePollVoteViewModel, PollName) == 120, "Offset mismatch for USproutOnlinePollVoteViewModel::PollName");
static_assert(offsetof(USproutOnlinePollVoteViewModel, VoteName) == 124, "Offset mismatch for USproutOnlinePollVoteViewModel::VoteName");
static_assert(offsetof(USproutOnlinePollVoteViewModel, VoteTotal) == 128, "Offset mismatch for USproutOnlinePollVoteViewModel::VoteTotal");
static_assert(offsetof(USproutOnlinePollVoteViewModel, VoteRank) == 136, "Offset mismatch for USproutOnlinePollVoteViewModel::VoteRank");
static_assert(offsetof(USproutOnlinePollVoteViewModel, bIsInTie) == 140, "Offset mismatch for USproutOnlinePollVoteViewModel::bIsInTie");
static_assert(offsetof(USproutOnlinePollVoteViewModel, bIsVotingAvailable) == 141, "Offset mismatch for USproutOnlinePollVoteViewModel::bIsVotingAvailable");
static_assert(offsetof(USproutOnlinePollVoteViewModel, DisplayName) == 144, "Offset mismatch for USproutOnlinePollVoteViewModel::DisplayName");
static_assert(offsetof(USproutOnlinePollVoteViewModel, WinString) == 160, "Offset mismatch for USproutOnlinePollVoteViewModel::WinString");
static_assert(offsetof(USproutOnlinePollVoteViewModel, DisplayColor) == 176, "Offset mismatch for USproutOnlinePollVoteViewModel::DisplayColor");
static_assert(offsetof(USproutOnlinePollVoteViewModel, DisplayIcon) == 184, "Offset mismatch for USproutOnlinePollVoteViewModel::DisplayIcon");
static_assert(offsetof(USproutOnlinePollVoteViewModel, PollUIData) == 216, "Offset mismatch for USproutOnlinePollVoteViewModel::PollUIData");

// /Script/SproutGameUI.SproutPhoneViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPhoneViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> AppViewModels; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutPhoneViewModel, AppViewModels) == 120, "Offset mismatch for USproutPhoneViewModel::AppViewModels");

// /Script/SproutGameUI.SproutPhoneWidget
// Kind: Class; super: CommonActivatableWidget
class USproutPhoneWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t CloseAction[0x10]; // 0x04A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackAction[0x1]; // 0x04B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutPhoneWidget, CloseAction) == 1184, "Offset mismatch for USproutPhoneWidget::CloseAction");
static_assert(offsetof(USproutPhoneWidget, BackAction) == 1200, "Offset mismatch for USproutPhoneWidget::BackAction");

// /Script/SproutGameUI.SproutPlayerBountyBoardViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerBountyBoardViewModel
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    TArray<void*> BountiesFiltered; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> BountyPinned; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    void* Categories; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00B8
    std::int32_t NumClaimableBounties; // 0x00BC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USproutPlayerBountyBoardViewModel, BountiesFiltered) == 152, "Offset mismatch for USproutPlayerBountyBoardViewModel::BountiesFiltered");
static_assert(offsetof(USproutPlayerBountyBoardViewModel, BountyPinned) == 168, "Offset mismatch for USproutPlayerBountyBoardViewModel::BountyPinned");
static_assert(offsetof(USproutPlayerBountyBoardViewModel, Categories) == 176, "Offset mismatch for USproutPlayerBountyBoardViewModel::Categories");
static_assert(offsetof(USproutPlayerBountyBoardViewModel, NumClaimableBounties) == 188, "Offset mismatch for USproutPlayerBountyBoardViewModel::NumClaimableBounties");

// /Script/SproutGameUI.SproutPlayerChatBubbleMessageViewModel
// Kind: Class; super: FortTextChatMessageVM
class USproutPlayerChatBubbleMessageViewModel
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t IsWhisper; // 0x01B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutPlayerChatBubbleMessageViewModel, IsWhisper) == 432, "Offset mismatch for USproutPlayerChatBubbleMessageViewModel::IsWhisper");

// /Script/SproutGameUI.SproutPlayerChatBubbleViewModel
// Kind: Class; super: FortTextChatPlayerBaseVM
class USproutPlayerChatBubbleViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TWeakObjectPtr<void> TargetPlayerState; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> Messages; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutPlayerChatBubbleViewModel, TargetPlayerState) == 128, "Offset mismatch for USproutPlayerChatBubbleViewModel::TargetPlayerState");
static_assert(offsetof(USproutPlayerChatBubbleViewModel, Messages) == 136, "Offset mismatch for USproutPlayerChatBubbleViewModel::Messages");

// /Script/SproutGameUI.SproutPlayerCurrenciesViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerCurrenciesViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Currencies; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutPlayerCurrenciesViewModel, Currencies) == 120, "Offset mismatch for USproutPlayerCurrenciesViewModel::Currencies");

// /Script/SproutGameUI.SproutPlayerCurrencyViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerCurrencyViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t CurrencyItemDefinition[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t CurrentBalance; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USproutPlayerCurrencyViewModel, CurrencyItemDefinition) == 128, "Offset mismatch for USproutPlayerCurrencyViewModel::CurrencyItemDefinition");
static_assert(offsetof(USproutPlayerCurrencyViewModel, CurrentBalance) == 160, "Offset mismatch for USproutPlayerCurrencyViewModel::CurrentBalance");

// /Script/SproutGameUI.SproutPlayerHousingViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerHousingViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Mode[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    std::uint8_t HousingLotTags[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t PlayerHousingFilter[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    TArray<void*> PlayerHouses; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlayerHousesFiltered; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutPlayerHousingViewModel, Mode) == 120, "Offset mismatch for USproutPlayerHousingViewModel::Mode");
static_assert(offsetof(USproutPlayerHousingViewModel, HousingLotTags) == 128, "Offset mismatch for USproutPlayerHousingViewModel::HousingLotTags");
static_assert(offsetof(USproutPlayerHousingViewModel, PlayerHousingFilter) == 160, "Offset mismatch for USproutPlayerHousingViewModel::PlayerHousingFilter");
static_assert(offsetof(USproutPlayerHousingViewModel, PlayerHouses) == 192, "Offset mismatch for USproutPlayerHousingViewModel::PlayerHouses");
static_assert(offsetof(USproutPlayerHousingViewModel, PlayerHousesFiltered) == 208, "Offset mismatch for USproutPlayerHousingViewModel::PlayerHousesFiltered");

// /Script/SproutGameUI.SproutPlayerInfoViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerInfoViewModel
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    void* PlayerAvatarVM; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* PlayerJobVM; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* PlayerNeighborhoodVM; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* PlayerRoommateVM; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutPlayerInfoViewModel, PlayerAvatarVM) == 184, "Offset mismatch for USproutPlayerInfoViewModel::PlayerAvatarVM");
static_assert(offsetof(USproutPlayerInfoViewModel, PlayerJobVM) == 192, "Offset mismatch for USproutPlayerInfoViewModel::PlayerJobVM");
static_assert(offsetof(USproutPlayerInfoViewModel, PlayerNeighborhoodVM) == 200, "Offset mismatch for USproutPlayerInfoViewModel::PlayerNeighborhoodVM");
static_assert(offsetof(USproutPlayerInfoViewModel, PlayerRoommateVM) == 208, "Offset mismatch for USproutPlayerInfoViewModel::PlayerRoommateVM");

// /Script/SproutGameUI.SproutPlayerJobViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerJobViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnJobLevelChanged; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> TargetPlayerState; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t TargetJobTag[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    void* TargetJobInfoViewModel; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutPlayerJobViewModel, OnJobLevelChanged) == 120, "Offset mismatch for USproutPlayerJobViewModel::OnJobLevelChanged");
static_assert(offsetof(USproutPlayerJobViewModel, TargetPlayerState) == 136, "Offset mismatch for USproutPlayerJobViewModel::TargetPlayerState");
static_assert(offsetof(USproutPlayerJobViewModel, TargetJobTag) == 144, "Offset mismatch for USproutPlayerJobViewModel::TargetJobTag");
static_assert(offsetof(USproutPlayerJobViewModel, TargetJobInfoViewModel) == 152, "Offset mismatch for USproutPlayerJobViewModel::TargetJobInfoViewModel");

// /Script/SproutGameUI.SproutPlayerJobsViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerJobsViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> TargetPlayerState; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> PlayerJobs; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlayerCareers; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutPlayerJobsViewModel, TargetPlayerState) == 120, "Offset mismatch for USproutPlayerJobsViewModel::TargetPlayerState");
static_assert(offsetof(USproutPlayerJobsViewModel, PlayerJobs) == 128, "Offset mismatch for USproutPlayerJobsViewModel::PlayerJobs");
static_assert(offsetof(USproutPlayerJobsViewModel, PlayerCareers) == 144, "Offset mismatch for USproutPlayerJobsViewModel::PlayerCareers");

// /Script/SproutGameUI.SproutPlayerMailViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerMailViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnDestroyDenied; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClaimEntryAttachmentDenied; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> InventoryOverflowComponent; // 0x0098 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> PlayerMail; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutPlayerMailViewModel, OnDestroyDenied) == 120, "Offset mismatch for USproutPlayerMailViewModel::OnDestroyDenied");
static_assert(offsetof(USproutPlayerMailViewModel, OnClaimEntryAttachmentDenied) == 136, "Offset mismatch for USproutPlayerMailViewModel::OnClaimEntryAttachmentDenied");
static_assert(offsetof(USproutPlayerMailViewModel, InventoryOverflowComponent) == 152, "Offset mismatch for USproutPlayerMailViewModel::InventoryOverflowComponent");
static_assert(offsetof(USproutPlayerMailViewModel, PlayerMail) == 160, "Offset mismatch for USproutPlayerMailViewModel::PlayerMail");

// /Script/SproutGameUI.SproutPlayerNeighborhoodViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerNeighborhoodViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> TargetPlayerState; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USproutPlayerNeighborhoodViewModel, TargetPlayerState) == 120, "Offset mismatch for USproutPlayerNeighborhoodViewModel::TargetPlayerState");

// /Script/SproutGameUI.SproutPlayerRoommateViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerRoommateViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t TargetPlayerId[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutPlayerRoommateViewModel, TargetPlayerId) == 120, "Offset mismatch for USproutPlayerRoommateViewModel::TargetPlayerId");

// /Script/SproutGameUI.SproutPlayerSessionDataViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerSessionDataViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t PreviousApp[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutPlayerSessionDataViewModel, PreviousApp) == 120, "Offset mismatch for USproutPlayerSessionDataViewModel::PreviousApp");

// /Script/SproutGameUI.SproutPlayerShoppingViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerShoppingViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Mode[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    std::uint8_t Filter[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    TArray<void*> PlayerShoppingItems; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    void* PlayerInventoryViewModel; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PlayerInventorySlotViewModels; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutPlayerShoppingViewModel, Mode) == 120, "Offset mismatch for USproutPlayerShoppingViewModel::Mode");
static_assert(offsetof(USproutPlayerShoppingViewModel, Filter) == 128, "Offset mismatch for USproutPlayerShoppingViewModel::Filter");
static_assert(offsetof(USproutPlayerShoppingViewModel, PlayerShoppingItems) == 160, "Offset mismatch for USproutPlayerShoppingViewModel::PlayerShoppingItems");
static_assert(offsetof(USproutPlayerShoppingViewModel, PlayerInventoryViewModel) == 176, "Offset mismatch for USproutPlayerShoppingViewModel::PlayerInventoryViewModel");
static_assert(offsetof(USproutPlayerShoppingViewModel, PlayerInventorySlotViewModels) == 184, "Offset mismatch for USproutPlayerShoppingViewModel::PlayerInventorySlotViewModels");

// /Script/SproutGameUI.SproutPlayerStateComponent_QuestViewModelManager
// Kind: Class; super: PlayerStateComponent
class USproutPlayerStateComponent_QuestViewModelManager
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(USproutPlayerStateComponent_QuestViewModelManager, PrimaryComponentTick) == 56, "Offset mismatch for USproutPlayerStateComponent_QuestViewModelManager::PrimaryComponentTick");
static_assert(offsetof(USproutPlayerStateComponent_QuestViewModelManager, ComponentTags) == 104, "Offset mismatch for USproutPlayerStateComponent_QuestViewModelManager::ComponentTags");
static_assert(offsetof(USproutPlayerStateComponent_QuestViewModelManager, AssetUserData) == 120, "Offset mismatch for USproutPlayerStateComponent_QuestViewModelManager::AssetUserData");
static_assert(offsetof(USproutPlayerStateComponent_QuestViewModelManager, UCSSerializationIndex) == 144, "Offset mismatch for USproutPlayerStateComponent_QuestViewModelManager::UCSSerializationIndex");
static_assert(offsetof(USproutPlayerStateComponent_QuestViewModelManager, bNetAddressable) == 152, "Offset mismatch for USproutPlayerStateComponent_QuestViewModelManager::bNetAddressable");
static_assert(offsetof(USproutPlayerStateComponent_QuestViewModelManager, bAutoActivate) == 154, "Offset mismatch for USproutPlayerStateComponent_QuestViewModelManager::bAutoActivate");
static_assert(offsetof(USproutPlayerStateComponent_QuestViewModelManager, bIsEditorOnly) == 155, "Offset mismatch for USproutPlayerStateComponent_QuestViewModelManager::bIsEditorOnly");
static_assert(offsetof(USproutPlayerStateComponent_QuestViewModelManager, CreationMethod) == 185, "Offset mismatch for USproutPlayerStateComponent_QuestViewModelManager::CreationMethod");
static_assert(offsetof(USproutPlayerStateComponent_QuestViewModelManager, OnComponentActivated) == 186, "Offset mismatch for USproutPlayerStateComponent_QuestViewModelManager::OnComponentActivated");
static_assert(offsetof(USproutPlayerStateComponent_QuestViewModelManager, OnComponentDeactivated) == 187, "Offset mismatch for USproutPlayerStateComponent_QuestViewModelManager::OnComponentDeactivated");

// /Script/SproutGameUI.SproutPlayerVehiclesViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutPlayerVehiclesViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t PlayerVehiclesFilter; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    TArray<void*> PlayerVehicles; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlayerVehiclesFiltered; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutPlayerVehiclesViewModel, PlayerVehiclesFilter) == 120, "Offset mismatch for USproutPlayerVehiclesViewModel::PlayerVehiclesFilter");
static_assert(offsetof(USproutPlayerVehiclesViewModel, PlayerVehicles) == 128, "Offset mismatch for USproutPlayerVehiclesViewModel::PlayerVehicles");
static_assert(offsetof(USproutPlayerVehiclesViewModel, PlayerVehiclesFiltered) == 144, "Offset mismatch for USproutPlayerVehiclesViewModel::PlayerVehiclesFiltered");

// /Script/SproutGameUI.SproutPosePicker
// Kind: Class; super: CommonActivatableWidget
class USproutPosePicker
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    void* TabList_PoseCategories; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* PickerOverlay_Poses; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultEmoteCategoryTag[0x4]; // 0x04C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDisplayRegisteredEmoteCategories; // 0x04C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x04C5
    void* EmoteCategoryTabButtonType; // 0x04C8 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ExternalEmotes; // 0x04D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutPosePicker, TabList_PoseCategories) == 1200, "Offset mismatch for USproutPosePicker::TabList_PoseCategories");
static_assert(offsetof(USproutPosePicker, PickerOverlay_Poses) == 1208, "Offset mismatch for USproutPosePicker::PickerOverlay_Poses");
static_assert(offsetof(USproutPosePicker, DefaultEmoteCategoryTag) == 1216, "Offset mismatch for USproutPosePicker::DefaultEmoteCategoryTag");
static_assert(offsetof(USproutPosePicker, bDisplayRegisteredEmoteCategories) == 1220, "Offset mismatch for USproutPosePicker::bDisplayRegisteredEmoteCategories");
static_assert(offsetof(USproutPosePicker, EmoteCategoryTabButtonType) == 1224, "Offset mismatch for USproutPosePicker::EmoteCategoryTabButtonType");
static_assert(offsetof(USproutPosePicker, ExternalEmotes) == 1232, "Offset mismatch for USproutPosePicker::ExternalEmotes");

// /Script/SproutGameUI.SproutReactionInfoViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutReactionInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnRequestToggleReaction; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ReactionType[0x4]; // 0x0088 (Size: 0x4, Type: StructProperty)
    std::int32_t ReactionCount; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t IsCurrentReaction; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    std::uint8_t ReactionImage[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> ReactionSound; // 0x00B8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USproutReactionInfoViewModel, OnRequestToggleReaction) == 120, "Offset mismatch for USproutReactionInfoViewModel::OnRequestToggleReaction");
static_assert(offsetof(USproutReactionInfoViewModel, ReactionType) == 136, "Offset mismatch for USproutReactionInfoViewModel::ReactionType");
static_assert(offsetof(USproutReactionInfoViewModel, ReactionCount) == 140, "Offset mismatch for USproutReactionInfoViewModel::ReactionCount");
static_assert(offsetof(USproutReactionInfoViewModel, IsCurrentReaction) == 144, "Offset mismatch for USproutReactionInfoViewModel::IsCurrentReaction");
static_assert(offsetof(USproutReactionInfoViewModel, ReactionImage) == 152, "Offset mismatch for USproutReactionInfoViewModel::ReactionImage");
static_assert(offsetof(USproutReactionInfoViewModel, ReactionSound) == 184, "Offset mismatch for USproutReactionInfoViewModel::ReactionSound");

// /Script/SproutGameUI.SproutReactionsViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutReactionsViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnRequestToggleReaction; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ReactionGroupType[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    TArray<void*> Reactions; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutReactionsViewModel, OnRequestToggleReaction) == 120, "Offset mismatch for USproutReactionsViewModel::OnRequestToggleReaction");
static_assert(offsetof(USproutReactionsViewModel, ReactionGroupType) == 136, "Offset mismatch for USproutReactionsViewModel::ReactionGroupType");
static_assert(offsetof(USproutReactionsViewModel, Reactions) == 144, "Offset mismatch for USproutReactionsViewModel::Reactions");

// /Script/SproutGameUI.SproutShoppingCategoriesViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutShoppingCategoriesViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Categories; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutShoppingCategoriesViewModel, Categories) == 120, "Offset mismatch for USproutShoppingCategoriesViewModel::Categories");

// /Script/SproutGameUI.SproutShoppingCategoryViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutShoppingCategoryViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t CategoryEntry[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutShoppingCategoryViewModel, CategoryEntry) == 120, "Offset mismatch for USproutShoppingCategoryViewModel::CategoryEntry");

// /Script/SproutGameUI.SproutShoppingItemInfoViewModel
// Kind: Class; super: SproutInfoViewModelBase
class USproutShoppingItemInfoViewModel
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    FName GridListItemType; // 0x00E8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(USproutShoppingItemInfoViewModel, GridListItemType) == 232, "Offset mismatch for USproutShoppingItemInfoViewModel::GridListItemType");

// /Script/SproutGameUI.SproutSingleNeighborhoodBrowserViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutSingleNeighborhoodBrowserViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t NeighborhoodId[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutSingleNeighborhoodBrowserViewModel, NeighborhoodId) == 120, "Offset mismatch for USproutSingleNeighborhoodBrowserViewModel::NeighborhoodId");

// /Script/SproutGameUI.SproutSingleNotificationViewModel
// Kind: Class; super: FortPerUserViewModel
class USproutSingleNotificationViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Timestamp[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    std::uint8_t MessageId[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    std::uint8_t HasBeenViewed; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0089
    std::uint8_t NotificationTableRow[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutSingleNotificationViewModel, Timestamp) == 120, "Offset mismatch for USproutSingleNotificationViewModel::Timestamp");
static_assert(offsetof(USproutSingleNotificationViewModel, MessageId) == 128, "Offset mismatch for USproutSingleNotificationViewModel::MessageId");
static_assert(offsetof(USproutSingleNotificationViewModel, HasBeenViewed) == 136, "Offset mismatch for USproutSingleNotificationViewModel::HasBeenViewed");
static_assert(offsetof(USproutSingleNotificationViewModel, NotificationTableRow) == 144, "Offset mismatch for USproutSingleNotificationViewModel::NotificationTableRow");

// /Script/SproutGameUI.SproutUICheatManager
// Kind: Class; super: ChildCheatManager
class USproutUICheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutGameUI.SproutUIDirectorComponent_SmartObjectUI
// Kind: Class; super: JunoDynamicUIDirectorComponent
class USproutUIDirectorComponent_SmartObjectUI
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* TaggedWidgetSceneData; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> HudLayoutScenes; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TArray<void*> WidgetPoolInitData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutUIDirectorComponent_SmartObjectUI, TaggedWidgetSceneData) == 200, "Offset mismatch for USproutUIDirectorComponent_SmartObjectUI::TaggedWidgetSceneData");
static_assert(offsetof(USproutUIDirectorComponent_SmartObjectUI, HudLayoutScenes) == 208, "Offset mismatch for USproutUIDirectorComponent_SmartObjectUI::HudLayoutScenes");
static_assert(offsetof(USproutUIDirectorComponent_SmartObjectUI, WidgetPoolInitData) == 224, "Offset mismatch for USproutUIDirectorComponent_SmartObjectUI::WidgetPoolInitData");

// /Script/SproutGameUI.SproutUIFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USproutUIFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutGameUI.SproutUISelectionMemory
// Kind: Class; super: LocalPlayerSubsystem
class USproutUISelectionMemory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutGameUI.SproutVehicleInfoViewModel
// Kind: Class; super: SproutInfoViewModelBase
class USproutVehicleInfoViewModel
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    FName GridListItemType; // 0x00E8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(USproutVehicleInfoViewModel, GridListItemType) == 232, "Offset mismatch for USproutVehicleInfoViewModel::GridListItemType");
