/**
 * decamp dumper generated SDK
 * Package: /Script/SocialUMG
 */
#pragma once
#include "Basic.h"

// /Script/SocialUMG.SocialChatMessageEntryStyle
// Kind: ScriptStruct; super: none
struct FSocialChatMessageEntryStyle
{
public:
    std::uint8_t SenderNameStyle[0x68]; // 0x0000 (Size: 0x68, Type: StructProperty)
    std::uint8_t ChannelNameStyle[0x68]; // 0x0068 (Size: 0x68, Type: StructProperty)
    std::uint8_t MessageTextStyle[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSocialChatMessageEntryStyle, SenderNameStyle) == 0, "Offset mismatch for FSocialChatMessageEntryStyle::SenderNameStyle");
static_assert(offsetof(FSocialChatMessageEntryStyle, ChannelNameStyle) == 104, "Offset mismatch for FSocialChatMessageEntryStyle::ChannelNameStyle");
static_assert(offsetof(FSocialChatMessageEntryStyle, MessageTextStyle) == 208, "Offset mismatch for FSocialChatMessageEntryStyle::MessageTextStyle");

// /Script/SocialUMG.SocialChatMessageEntryTextStyle
// Kind: ScriptStruct; super: none
struct FSocialChatMessageEntryTextStyle
{
public:
    std::uint8_t FontInfo[0x58]; // 0x0000 (Size: 0x58, Type: StructProperty)
    std::uint8_t ColorAndOpacity[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSocialChatMessageEntryTextStyle, FontInfo) == 0, "Offset mismatch for FSocialChatMessageEntryTextStyle::FontInfo");
static_assert(offsetof(FSocialChatMessageEntryTextStyle, ColorAndOpacity) == 88, "Offset mismatch for FSocialChatMessageEntryTextStyle::ColorAndOpacity");

// /Script/SocialUMG.DesignerPreviewChatChannel
// Kind: Class; super: SocialChatChannel
class UDesignerPreviewChatChannel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SocialUMG.SocialActionMenu
// Kind: Class; super: CommonActivatableWidget
class USocialActionMenu
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USocialActionMenu, bIsBackHandler) == 816, "Offset mismatch for USocialActionMenu::bIsBackHandler");
static_assert(offsetof(USocialActionMenu, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for USocialActionMenu::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(USocialActionMenu, OverrideBackActionDisplayName) == 824, "Offset mismatch for USocialActionMenu::OverrideBackActionDisplayName");
static_assert(offsetof(USocialActionMenu, bAutoActivate) == 840, "Offset mismatch for USocialActionMenu::bAutoActivate");
static_assert(offsetof(USocialActionMenu, bSupportsActivationFocus) == 841, "Offset mismatch for USocialActionMenu::bSupportsActivationFocus");
static_assert(offsetof(USocialActionMenu, bIsModal) == 842, "Offset mismatch for USocialActionMenu::bIsModal");
static_assert(offsetof(USocialActionMenu, bAutoRestoreFocus) == 843, "Offset mismatch for USocialActionMenu::bAutoRestoreFocus");
static_assert(offsetof(USocialActionMenu, bOverrideActionDomain) == 844, "Offset mismatch for USocialActionMenu::bOverrideActionDomain");
static_assert(offsetof(USocialActionMenu, InputMapping) == 848, "Offset mismatch for USocialActionMenu::InputMapping");
static_assert(offsetof(USocialActionMenu, InputMappingPriority) == 856, "Offset mismatch for USocialActionMenu::InputMappingPriority");
static_assert(offsetof(USocialActionMenu, InputModeTagsToAdd) == 864, "Offset mismatch for USocialActionMenu::InputModeTagsToAdd");
static_assert(offsetof(USocialActionMenu, InputModeTagsToRemove) == 896, "Offset mismatch for USocialActionMenu::InputModeTagsToRemove");
static_assert(offsetof(USocialActionMenu, ActionDomainOverride) == 928, "Offset mismatch for USocialActionMenu::ActionDomainOverride");
static_assert(offsetof(USocialActionMenu, BP_OnWidgetActivated) == 960, "Offset mismatch for USocialActionMenu::BP_OnWidgetActivated");
static_assert(offsetof(USocialActionMenu, BP_OnWidgetDeactivated) == 976, "Offset mismatch for USocialActionMenu::BP_OnWidgetDeactivated");
static_assert(offsetof(USocialActionMenu, bIsActive) == 992, "Offset mismatch for USocialActionMenu::bIsActive");
static_assert(offsetof(USocialActionMenu, VisibilityBoundWidgets) == 1000, "Offset mismatch for USocialActionMenu::VisibilityBoundWidgets");
static_assert(offsetof(USocialActionMenu, bSetVisibilityOnActivated) == 1176, "Offset mismatch for USocialActionMenu::bSetVisibilityOnActivated");
static_assert(offsetof(USocialActionMenu, ActivatedVisibility) == 1177, "Offset mismatch for USocialActionMenu::ActivatedVisibility");
static_assert(offsetof(USocialActionMenu, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for USocialActionMenu::bSetVisibilityOnDeactivated");
static_assert(offsetof(USocialActionMenu, DeactivatedVisibility) == 1179, "Offset mismatch for USocialActionMenu::DeactivatedVisibility");

// /Script/SocialUMG.SocialChatChannelTab
// Kind: Class; super: CommonButtonLegacy
class USocialChatChannelTab
{
public:
    std::uint8_t Pad_0000[0x15F0]; // 0x0000
    void* ChatChannel; // 0x15F0 (Size: 0x8, Type: ObjectProperty)
    void* CommonText_ChannelName; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialChatChannelTab, ChatChannel) == 5616, "Offset mismatch for USocialChatChannelTab::ChatChannel");
static_assert(offsetof(USocialChatChannelTab, CommonText_ChannelName) == 5624, "Offset mismatch for USocialChatChannelTab::CommonText_ChannelName");

// /Script/SocialUMG.SocialChatContainer
// Kind: Class; super: UserWidget
class USocialChatContainer
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* ChatManager; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> JoinedChannels; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    void* ActiveChannel; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* TabButtonGroup; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0330
    void* ChatList_Messages; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* ChatEditableText_MessageEntry; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Button_SendMessage; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_JoinedChannels; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_Channels; // 0x0358 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialChatContainer, ChatManager) == 776, "Offset mismatch for USocialChatContainer::ChatManager");
static_assert(offsetof(USocialChatContainer, JoinedChannels) == 784, "Offset mismatch for USocialChatContainer::JoinedChannels");
static_assert(offsetof(USocialChatContainer, ActiveChannel) == 800, "Offset mismatch for USocialChatContainer::ActiveChannel");
static_assert(offsetof(USocialChatContainer, TabButtonGroup) == 808, "Offset mismatch for USocialChatContainer::TabButtonGroup");
static_assert(offsetof(USocialChatContainer, ChatList_Messages) == 824, "Offset mismatch for USocialChatContainer::ChatList_Messages");
static_assert(offsetof(USocialChatContainer, ChatEditableText_MessageEntry) == 832, "Offset mismatch for USocialChatContainer::ChatEditableText_MessageEntry");
static_assert(offsetof(USocialChatContainer, Button_SendMessage) == 840, "Offset mismatch for USocialChatContainer::Button_SendMessage");
static_assert(offsetof(USocialChatContainer, EntryBox_JoinedChannels) == 848, "Offset mismatch for USocialChatContainer::EntryBox_JoinedChannels");
static_assert(offsetof(USocialChatContainer, ScrollBox_Channels) == 856, "Offset mismatch for USocialChatContainer::ScrollBox_Channels");

// /Script/SocialUMG.SocialChatEditableText
// Kind: Class; super: Widget
class USocialChatEditableText
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t EditableTextStyle[0x2C0]; // 0x0180 (Size: 0x2C0, Type: StructProperty)
    std::uint8_t AutoCompleteStyle[0x1]; // 0x0440 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USocialChatEditableText, EditableTextStyle) == 384, "Offset mismatch for USocialChatEditableText::EditableTextStyle");
static_assert(offsetof(USocialChatEditableText, AutoCompleteStyle) == 1088, "Offset mismatch for USocialChatEditableText::AutoCompleteStyle");

// /Script/SocialUMG.SocialChatMessageEntry
// Kind: Class; super: UserWidget
class USocialChatMessageEntry
{
public:
    std::uint8_t Pad_0000[0x320]; // 0x0000
    std::uint8_t DefaultStyle[0x138]; // 0x0320 (Size: 0x138, Type: StructProperty)
    void* RichText_Message; // 0x0458 (Size: 0x8, Type: ObjectProperty)
    void* Button_MessageButton; // 0x0460 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialChatMessageEntry, DefaultStyle) == 800, "Offset mismatch for USocialChatMessageEntry::DefaultStyle");
static_assert(offsetof(USocialChatMessageEntry, RichText_Message) == 1112, "Offset mismatch for USocialChatMessageEntry::RichText_Message");
static_assert(offsetof(USocialChatMessageEntry, Button_MessageButton) == 1120, "Offset mismatch for USocialChatMessageEntry::Button_MessageButton");

// /Script/SocialUMG.SocialChatMessageList
// Kind: Class; super: ListViewBase
class USocialChatMessageList
{
public:
    std::uint8_t Pad_0000[0x458]; // 0x0000
    std::uint8_t bIsFocusable; // 0x0458 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0459
    void* ActiveChannel; // 0x0460 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialChatMessageList, bIsFocusable) == 1112, "Offset mismatch for USocialChatMessageList::bIsFocusable");
static_assert(offsetof(USocialChatMessageList, ActiveChannel) == 1120, "Offset mismatch for USocialChatMessageList::ActiveChannel");

// /Script/SocialUMG.SocialGroupListEntry
// Kind: Class; super: CommonButtonLegacy
class USocialGroupListEntry
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    void* ActionMenuClass; // 0x15F8 (Size: 0x8, Type: ClassProperty)
    void* SocialGroup; // 0x1600 (Size: 0x8, Type: ObjectProperty)
    void* Text_GroupName; // 0x1608 (Size: 0x8, Type: ObjectProperty)
    void* MenuAnchor_Actions; // 0x1610 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialGroupListEntry, ActionMenuClass) == 5624, "Offset mismatch for USocialGroupListEntry::ActionMenuClass");
static_assert(offsetof(USocialGroupListEntry, SocialGroup) == 5632, "Offset mismatch for USocialGroupListEntry::SocialGroup");
static_assert(offsetof(USocialGroupListEntry, Text_GroupName) == 5640, "Offset mismatch for USocialGroupListEntry::Text_GroupName");
static_assert(offsetof(USocialGroupListEntry, MenuAnchor_Actions) == 5648, "Offset mismatch for USocialGroupListEntry::MenuAnchor_Actions");

// /Script/SocialUMG.SocialGroupTreeView
// Kind: Class; super: TreeView
class USocialGroupTreeView
{
public:
    std::uint8_t Pad_0000[0x1040]; // 0x0000
    void* GroupEntryWidgetClass; // 0x1040 (Size: 0x8, Type: ClassProperty)
    void* UserEntryWidgetClass; // 0x1048 (Size: 0x8, Type: ClassProperty)
    void* ActionMenuClass; // 0x1050 (Size: 0x8, Type: ClassProperty)
    void* ActionMenu; // 0x1058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialGroupTreeView, GroupEntryWidgetClass) == 4160, "Offset mismatch for USocialGroupTreeView::GroupEntryWidgetClass");
static_assert(offsetof(USocialGroupTreeView, UserEntryWidgetClass) == 4168, "Offset mismatch for USocialGroupTreeView::UserEntryWidgetClass");
static_assert(offsetof(USocialGroupTreeView, ActionMenuClass) == 4176, "Offset mismatch for USocialGroupTreeView::ActionMenuClass");
static_assert(offsetof(USocialGroupTreeView, ActionMenu) == 4184, "Offset mismatch for USocialGroupTreeView::ActionMenu");

// /Script/SocialUMG.SocialInteractionButton
// Kind: Class; super: CommonButtonLegacy
class USocialInteractionButton
{
public:
    std::uint8_t Pad_0000[0x15F0]; // 0x0000
    std::uint8_t DefaultIndicatorColor[0x10]; // 0x15F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t AlertingIndicatorColor[0x50]; // 0x1600 (Size: 0x50, Type: StructProperty)
    void* Text_InteractionName; // 0x1650 (Size: 0x8, Type: ObjectProperty)
    void* Border_InteractionIndicator; // 0x1658 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialInteractionButton, DefaultIndicatorColor) == 5616, "Offset mismatch for USocialInteractionButton::DefaultIndicatorColor");
static_assert(offsetof(USocialInteractionButton, AlertingIndicatorColor) == 5632, "Offset mismatch for USocialInteractionButton::AlertingIndicatorColor");
static_assert(offsetof(USocialInteractionButton, Text_InteractionName) == 5712, "Offset mismatch for USocialInteractionButton::Text_InteractionName");
static_assert(offsetof(USocialInteractionButton, Border_InteractionIndicator) == 5720, "Offset mismatch for USocialInteractionButton::Border_InteractionIndicator");

// /Script/SocialUMG.SocialInteractionMenu
// Kind: Class; super: SocialActionMenu
class USocialInteractionMenu
{
public:
    std::uint8_t Pad_0000[0x510]; // 0x0000
    void* EntryBox_PositiveInteractions; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_NegativeInteractions; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* Spacer_InteractionSeparator; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Confirmation; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* Text_ConfirmationLabel; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* Button_Confirm; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* Button_Decline; // 0x0540 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialInteractionMenu, EntryBox_PositiveInteractions) == 1296, "Offset mismatch for USocialInteractionMenu::EntryBox_PositiveInteractions");
static_assert(offsetof(USocialInteractionMenu, EntryBox_NegativeInteractions) == 1304, "Offset mismatch for USocialInteractionMenu::EntryBox_NegativeInteractions");
static_assert(offsetof(USocialInteractionMenu, Spacer_InteractionSeparator) == 1312, "Offset mismatch for USocialInteractionMenu::Spacer_InteractionSeparator");
static_assert(offsetof(USocialInteractionMenu, Switcher_Confirmation) == 1320, "Offset mismatch for USocialInteractionMenu::Switcher_Confirmation");
static_assert(offsetof(USocialInteractionMenu, Text_ConfirmationLabel) == 1328, "Offset mismatch for USocialInteractionMenu::Text_ConfirmationLabel");
static_assert(offsetof(USocialInteractionMenu, Button_Confirm) == 1336, "Offset mismatch for USocialInteractionMenu::Button_Confirm");
static_assert(offsetof(USocialInteractionMenu, Button_Decline) == 1344, "Offset mismatch for USocialInteractionMenu::Button_Decline");

// /Script/SocialUMG.SocialListEntryBase
// Kind: Class; super: CommonButtonLegacy
class USocialListEntryBase
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    FMulticastInlineDelegate OnSelectedChanged; // 0x15A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonClicked; // 0x15B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonDoubleClicked; // 0x15C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonHovered; // 0x15D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonUnhovered; // 0x15E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USocialListEntryBase, OnSelectedChanged) == 5536, "Offset mismatch for USocialListEntryBase::OnSelectedChanged");
static_assert(offsetof(USocialListEntryBase, OnButtonClicked) == 5552, "Offset mismatch for USocialListEntryBase::OnButtonClicked");
static_assert(offsetof(USocialListEntryBase, OnButtonDoubleClicked) == 5568, "Offset mismatch for USocialListEntryBase::OnButtonDoubleClicked");
static_assert(offsetof(USocialListEntryBase, OnButtonHovered) == 5584, "Offset mismatch for USocialListEntryBase::OnButtonHovered");
static_assert(offsetof(USocialListEntryBase, OnButtonUnhovered) == 5600, "Offset mismatch for USocialListEntryBase::OnButtonUnhovered");

// /Script/SocialUMG.SocialListInteractableEntryBase
// Kind: Class; super: SocialListEntryBase
class USocialListInteractableEntryBase
{
public:
    std::uint8_t Pad_0000[0x1610]; // 0x0000
    void* ActionMenuClass; // 0x1610 (Size: 0x8, Type: ClassProperty)
    void* MenuAnchor_Actions; // 0x1618 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialListInteractableEntryBase, ActionMenuClass) == 5648, "Offset mismatch for USocialListInteractableEntryBase::ActionMenuClass");
static_assert(offsetof(USocialListInteractableEntryBase, MenuAnchor_Actions) == 5656, "Offset mismatch for USocialListInteractableEntryBase::MenuAnchor_Actions");

// /Script/SocialUMG.SocialListUserEntryBase
// Kind: Class; super: SocialListInteractableEntryBase
class USocialListUserEntryBase
{
public:
    std::uint8_t Pad_0000[0x1628]; // 0x0000
    void* Text_SocialName; // 0x1628 (Size: 0x8, Type: ObjectProperty)
    void* Text_SocialName_Hover; // 0x1630 (Size: 0x8, Type: ObjectProperty)
    void* Text_RichPresence; // 0x1638 (Size: 0x8, Type: ObjectProperty)
    void* Text_RichPresence_Hover; // 0x1640 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialListUserEntryBase, Text_SocialName) == 5672, "Offset mismatch for USocialListUserEntryBase::Text_SocialName");
static_assert(offsetof(USocialListUserEntryBase, Text_SocialName_Hover) == 5680, "Offset mismatch for USocialListUserEntryBase::Text_SocialName_Hover");
static_assert(offsetof(USocialListUserEntryBase, Text_RichPresence) == 5688, "Offset mismatch for USocialListUserEntryBase::Text_RichPresence");
static_assert(offsetof(USocialListUserEntryBase, Text_RichPresence_Hover) == 5696, "Offset mismatch for USocialListUserEntryBase::Text_RichPresence_Hover");

// /Script/SocialUMG.SocialNameTextBlock
// Kind: Class; super: CommonRichTextBlock
class USocialNameTextBlock
{
public:
    std::uint8_t Pad_0000[0x7F0]; // 0x0000
    void* SocialUser; // 0x07F0 (Size: 0x8, Type: ObjectProperty)
    float MinDesiredSize; // 0x07F8 (Size: 0x4, Type: FloatProperty)
    float MaxDesiredSize; // 0x07FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowSecondName; // 0x0800 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PlatformIconDisplayRule; // 0x0801 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWrapToNextLine; // 0x0802 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0803
    std::uint8_t SecondNameColor[0x4]; // 0x0804 (Size: 0x4, Type: StructProperty)
    std::int32_t SecondNameFontSize; // 0x0808 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USocialNameTextBlock, SocialUser) == 2032, "Offset mismatch for USocialNameTextBlock::SocialUser");
static_assert(offsetof(USocialNameTextBlock, MinDesiredSize) == 2040, "Offset mismatch for USocialNameTextBlock::MinDesiredSize");
static_assert(offsetof(USocialNameTextBlock, MaxDesiredSize) == 2044, "Offset mismatch for USocialNameTextBlock::MaxDesiredSize");
static_assert(offsetof(USocialNameTextBlock, bShowSecondName) == 2048, "Offset mismatch for USocialNameTextBlock::bShowSecondName");
static_assert(offsetof(USocialNameTextBlock, PlatformIconDisplayRule) == 2049, "Offset mismatch for USocialNameTextBlock::PlatformIconDisplayRule");
static_assert(offsetof(USocialNameTextBlock, bWrapToNextLine) == 2050, "Offset mismatch for USocialNameTextBlock::bWrapToNextLine");
static_assert(offsetof(USocialNameTextBlock, SecondNameColor) == 2052, "Offset mismatch for USocialNameTextBlock::SecondNameColor");
static_assert(offsetof(USocialNameTextBlock, SecondNameFontSize) == 2056, "Offset mismatch for USocialNameTextBlock::SecondNameFontSize");

// /Script/SocialUMG.SocialUserListHeaderEntry
// Kind: Class; super: SocialListEntryBase
class USocialUserListHeaderEntry
{
public:
    std::uint8_t Pad_0000[0x1610]; // 0x0000
    void* Text_ListName; // 0x1610 (Size: 0x8, Type: ObjectProperty)
    void* Text_NumEntries; // 0x1618 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialUserListHeaderEntry, Text_ListName) == 5648, "Offset mismatch for USocialUserListHeaderEntry::Text_ListName");
static_assert(offsetof(USocialUserListHeaderEntry, Text_NumEntries) == 5656, "Offset mismatch for USocialUserListHeaderEntry::Text_NumEntries");

// /Script/SocialUMG.SocialUserListView
// Kind: Class; super: SocialUserListViewBase
class USocialUserListView
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    void* ActiveActionMenu; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CachedActionMenuPool; // 0x04D0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USocialUserListView, ActiveActionMenu) == 1224, "Offset mismatch for USocialUserListView::ActiveActionMenu");
static_assert(offsetof(USocialUserListView, CachedActionMenuPool) == 1232, "Offset mismatch for USocialUserListView::CachedActionMenuPool");

// /Script/SocialUMG.SocialUserListViewBase
// Kind: Class; super: ListViewBase
class USocialUserListViewBase
{
public:
    std::uint8_t Pad_0000[0x478]; // 0x0000
    float EntrySpacing; // 0x0478 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USocialUserListViewBase, EntrySpacing) == 1144, "Offset mismatch for USocialUserListViewBase::EntrySpacing");

// /Script/SocialUMG.SocialUserTreeView
// Kind: Class; super: SocialUserListView
class USocialUserTreeView
{
public:
    std::uint8_t Pad_0000[0x510]; // 0x0000
    void* UserEntryWidgetClass; // 0x0510 (Size: 0x8, Type: ClassProperty)
    void* InviteEntryWidgetClass; // 0x0518 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USocialUserTreeView, UserEntryWidgetClass) == 1296, "Offset mismatch for USocialUserTreeView::UserEntryWidgetClass");
static_assert(offsetof(USocialUserTreeView, InviteEntryWidgetClass) == 1304, "Offset mismatch for USocialUserTreeView::InviteEntryWidgetClass");
