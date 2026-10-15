/**
 * decamp dumper generated SDK
 * Package: /Script/LauncherSocialTypes
 */
#pragma once
#include "Basic.h"

// /Script/LauncherSocialTypes.ChatChromeColorScheme
// Kind: ScriptStruct; super: none
struct FChatChromeColorScheme
{
public:
    std::uint8_t ChatEntryBackgroundColor[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t NoneActiveTabColor[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t TabFontColor[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t TabFontColorInverted[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t ChatBackgroundColor[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatChromeColorScheme, ChatEntryBackgroundColor) == 0, "Offset mismatch for FChatChromeColorScheme::ChatEntryBackgroundColor");
static_assert(offsetof(FChatChromeColorScheme, NoneActiveTabColor) == 16, "Offset mismatch for FChatChromeColorScheme::NoneActiveTabColor");
static_assert(offsetof(FChatChromeColorScheme, TabFontColor) == 32, "Offset mismatch for FChatChromeColorScheme::TabFontColor");
static_assert(offsetof(FChatChromeColorScheme, TabFontColorInverted) == 48, "Offset mismatch for FChatChromeColorScheme::TabFontColorInverted");
static_assert(offsetof(FChatChromeColorScheme, ChatBackgroundColor) == 64, "Offset mismatch for FChatChromeColorScheme::ChatBackgroundColor");

// /Script/LauncherSocialTypes.ChatChromeMargins
// Kind: ScriptStruct; super: none
struct FChatChromeMargins
{
public:
    float TabWidth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TabPadding[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    std::uint8_t ChatWindowPadding[0x10]; // 0x0014 (Size: 0x10, Type: StructProperty)
    std::uint8_t ChatWindowToEntryMargin[0x10]; // 0x0024 (Size: 0x10, Type: StructProperty)
    std::uint8_t ChatChannelPadding[0x10]; // 0x0034 (Size: 0x10, Type: StructProperty)
    std::uint8_t UserListButtonPadding[0x10]; // 0x0044 (Size: 0x10, Type: StructProperty)
    std::uint8_t UserListIconPadding[0x1]; // 0x0054 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatChromeMargins, TabWidth) == 0, "Offset mismatch for FChatChromeMargins::TabWidth");
static_assert(offsetof(FChatChromeMargins, TabPadding) == 4, "Offset mismatch for FChatChromeMargins::TabPadding");
static_assert(offsetof(FChatChromeMargins, ChatWindowPadding) == 20, "Offset mismatch for FChatChromeMargins::ChatWindowPadding");
static_assert(offsetof(FChatChromeMargins, ChatWindowToEntryMargin) == 36, "Offset mismatch for FChatChromeMargins::ChatWindowToEntryMargin");
static_assert(offsetof(FChatChromeMargins, ChatChannelPadding) == 52, "Offset mismatch for FChatChromeMargins::ChatChannelPadding");
static_assert(offsetof(FChatChromeMargins, UserListButtonPadding) == 68, "Offset mismatch for FChatChromeMargins::UserListButtonPadding");
static_assert(offsetof(FChatChromeMargins, UserListIconPadding) == 84, "Offset mismatch for FChatChromeMargins::UserListIconPadding");

// /Script/LauncherSocialTypes.ChatChromeStyle
// Kind: ScriptStruct; super: none
struct FChatChromeStyle
{
public:
    std::uint8_t UserListBrush[0xB0]; // 0x0000 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ChatBackgroundBrush[0xB0]; // 0x00B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ChatEntryBackgroundBrush[0xB0]; // 0x0160 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ChannelBackgroundBrush[0xB0]; // 0x0210 (Size: 0xB0, Type: StructProperty)
    std::uint8_t TabBackgroundBrush[0xB0]; // 0x02C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t TabSelectorButtonStyle[0x390]; // 0x0370 (Size: 0x390, Type: StructProperty)
    std::uint8_t TabOptionPadding[0x10]; // 0x0700 (Size: 0x10, Type: StructProperty)
    std::uint8_t TabContentPadding[0x10]; // 0x0710 (Size: 0x10, Type: StructProperty)
    std::uint8_t TabClosePadding[0x10]; // 0x0720 (Size: 0x10, Type: StructProperty)
    std::uint8_t UserListButtonStyle[0x1]; // 0x0730 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatChromeStyle, UserListBrush) == 0, "Offset mismatch for FChatChromeStyle::UserListBrush");
static_assert(offsetof(FChatChromeStyle, ChatBackgroundBrush) == 176, "Offset mismatch for FChatChromeStyle::ChatBackgroundBrush");
static_assert(offsetof(FChatChromeStyle, ChatEntryBackgroundBrush) == 352, "Offset mismatch for FChatChromeStyle::ChatEntryBackgroundBrush");
static_assert(offsetof(FChatChromeStyle, ChannelBackgroundBrush) == 528, "Offset mismatch for FChatChromeStyle::ChannelBackgroundBrush");
static_assert(offsetof(FChatChromeStyle, TabBackgroundBrush) == 704, "Offset mismatch for FChatChromeStyle::TabBackgroundBrush");
static_assert(offsetof(FChatChromeStyle, TabSelectorButtonStyle) == 880, "Offset mismatch for FChatChromeStyle::TabSelectorButtonStyle");
static_assert(offsetof(FChatChromeStyle, TabOptionPadding) == 1792, "Offset mismatch for FChatChromeStyle::TabOptionPadding");
static_assert(offsetof(FChatChromeStyle, TabContentPadding) == 1808, "Offset mismatch for FChatChromeStyle::TabContentPadding");
static_assert(offsetof(FChatChromeStyle, TabClosePadding) == 1824, "Offset mismatch for FChatChromeStyle::TabClosePadding");
static_assert(offsetof(FChatChromeStyle, UserListButtonStyle) == 1840, "Offset mismatch for FChatChromeStyle::UserListButtonStyle");

// /Script/LauncherSocialTypes.ChatColorScheme
// Kind: ScriptStruct; super: none
struct FChatColorScheme
{
public:
    std::uint8_t TimeStampColor[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultChatColor[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t WhisperChatColor[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t GameChatColor[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t TeamChatColor[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t PartyChatColor[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t AdminChatColor[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t GameAdminChatColor[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t WhisperHyperlinkChatColor[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t GameHyperlinkChatColor[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t TeamHyperlinkChatColor[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PartyHyperlinkChatColor[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t EnemyColor[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendlyColor[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatColorScheme, TimeStampColor) == 0, "Offset mismatch for FChatColorScheme::TimeStampColor");
static_assert(offsetof(FChatColorScheme, DefaultChatColor) == 16, "Offset mismatch for FChatColorScheme::DefaultChatColor");
static_assert(offsetof(FChatColorScheme, WhisperChatColor) == 32, "Offset mismatch for FChatColorScheme::WhisperChatColor");
static_assert(offsetof(FChatColorScheme, GameChatColor) == 48, "Offset mismatch for FChatColorScheme::GameChatColor");
static_assert(offsetof(FChatColorScheme, TeamChatColor) == 64, "Offset mismatch for FChatColorScheme::TeamChatColor");
static_assert(offsetof(FChatColorScheme, PartyChatColor) == 80, "Offset mismatch for FChatColorScheme::PartyChatColor");
static_assert(offsetof(FChatColorScheme, AdminChatColor) == 96, "Offset mismatch for FChatColorScheme::AdminChatColor");
static_assert(offsetof(FChatColorScheme, GameAdminChatColor) == 112, "Offset mismatch for FChatColorScheme::GameAdminChatColor");
static_assert(offsetof(FChatColorScheme, WhisperHyperlinkChatColor) == 128, "Offset mismatch for FChatColorScheme::WhisperHyperlinkChatColor");
static_assert(offsetof(FChatColorScheme, GameHyperlinkChatColor) == 144, "Offset mismatch for FChatColorScheme::GameHyperlinkChatColor");
static_assert(offsetof(FChatColorScheme, TeamHyperlinkChatColor) == 160, "Offset mismatch for FChatColorScheme::TeamHyperlinkChatColor");
static_assert(offsetof(FChatColorScheme, PartyHyperlinkChatColor) == 176, "Offset mismatch for FChatColorScheme::PartyHyperlinkChatColor");
static_assert(offsetof(FChatColorScheme, EnemyColor) == 192, "Offset mismatch for FChatColorScheme::EnemyColor");
static_assert(offsetof(FChatColorScheme, FriendlyColor) == 208, "Offset mismatch for FChatColorScheme::FriendlyColor");

// /Script/LauncherSocialTypes.ChatMarkupStyle
// Kind: ScriptStruct; super: none
struct FChatMarkupStyle
{
public:
    std::uint8_t MarkupButtonStyle[0x390]; // 0x0000 (Size: 0x390, Type: StructProperty)
    std::uint8_t MarkupTextStyle[0x2E0]; // 0x0390 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t MarkupBackground[0xB0]; // 0x0670 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ButtonColor[0x14]; // 0x0720 (Size: 0x14, Type: StructProperty)
    std::uint8_t ButtonHoverColor[0x14]; // 0x0734 (Size: 0x14, Type: StructProperty)
    std::uint8_t TipColor[0x18]; // 0x0748 (Size: 0x18, Type: StructProperty)
    std::uint8_t SeperatorBrush[0xB0]; // 0x0760 (Size: 0xB0, Type: StructProperty)
    float SeperatorThickness; // 0x0810 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MarkupPadding[0x10]; // 0x0814 (Size: 0x10, Type: StructProperty)
    std::uint8_t ButtonPadding[0x1]; // 0x0824 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatMarkupStyle, MarkupButtonStyle) == 0, "Offset mismatch for FChatMarkupStyle::MarkupButtonStyle");
static_assert(offsetof(FChatMarkupStyle, MarkupTextStyle) == 912, "Offset mismatch for FChatMarkupStyle::MarkupTextStyle");
static_assert(offsetof(FChatMarkupStyle, MarkupBackground) == 1648, "Offset mismatch for FChatMarkupStyle::MarkupBackground");
static_assert(offsetof(FChatMarkupStyle, ButtonColor) == 1824, "Offset mismatch for FChatMarkupStyle::ButtonColor");
static_assert(offsetof(FChatMarkupStyle, ButtonHoverColor) == 1844, "Offset mismatch for FChatMarkupStyle::ButtonHoverColor");
static_assert(offsetof(FChatMarkupStyle, TipColor) == 1864, "Offset mismatch for FChatMarkupStyle::TipColor");
static_assert(offsetof(FChatMarkupStyle, SeperatorBrush) == 1888, "Offset mismatch for FChatMarkupStyle::SeperatorBrush");
static_assert(offsetof(FChatMarkupStyle, SeperatorThickness) == 2064, "Offset mismatch for FChatMarkupStyle::SeperatorThickness");
static_assert(offsetof(FChatMarkupStyle, MarkupPadding) == 2068, "Offset mismatch for FChatMarkupStyle::MarkupPadding");
static_assert(offsetof(FChatMarkupStyle, ButtonPadding) == 2084, "Offset mismatch for FChatMarkupStyle::ButtonPadding");

// /Script/LauncherSocialTypes.ChatStyle
// Kind: ScriptStruct; super: none
struct FChatStyle
{
public:
    std::uint8_t ChatEntryTextStyle[0xC80]; // 0x0000 (Size: 0xC80, Type: StructProperty)
    std::uint8_t ChatDisplayTextStyle[0xC80]; // 0x0C80 (Size: 0xC80, Type: StructProperty)
    std::uint8_t ScrollBorderStyle[0x2F0]; // 0x1900 (Size: 0x2F0, Type: StructProperty)
    std::uint8_t MessageNotificationBrush[0xB0]; // 0x1BF0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ChatEntryPadding[0x10]; // 0x1CA0 (Size: 0x10, Type: StructProperty)
    float ChatEntryHeight; // 0x1CB0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x1CB4
    std::uint8_t ChatMenuBackgroundBrush[0xB0]; // 0x1CC0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t FriendActionPadding[0x10]; // 0x1D70 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendActionHeaderPadding[0x10]; // 0x1D80 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendActionStatusMargin[0x1]; // 0x1D90 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChatStyle, ChatEntryTextStyle) == 0, "Offset mismatch for FChatStyle::ChatEntryTextStyle");
static_assert(offsetof(FChatStyle, ChatDisplayTextStyle) == 3200, "Offset mismatch for FChatStyle::ChatDisplayTextStyle");
static_assert(offsetof(FChatStyle, ScrollBorderStyle) == 6400, "Offset mismatch for FChatStyle::ScrollBorderStyle");
static_assert(offsetof(FChatStyle, MessageNotificationBrush) == 7152, "Offset mismatch for FChatStyle::MessageNotificationBrush");
static_assert(offsetof(FChatStyle, ChatEntryPadding) == 7328, "Offset mismatch for FChatStyle::ChatEntryPadding");
static_assert(offsetof(FChatStyle, ChatEntryHeight) == 7344, "Offset mismatch for FChatStyle::ChatEntryHeight");
static_assert(offsetof(FChatStyle, ChatMenuBackgroundBrush) == 7360, "Offset mismatch for FChatStyle::ChatMenuBackgroundBrush");
static_assert(offsetof(FChatStyle, FriendActionPadding) == 7536, "Offset mismatch for FChatStyle::FriendActionPadding");
static_assert(offsetof(FChatStyle, FriendActionHeaderPadding) == 7552, "Offset mismatch for FChatStyle::FriendActionHeaderPadding");
static_assert(offsetof(FChatStyle, FriendActionStatusMargin) == 7568, "Offset mismatch for FChatStyle::FriendActionStatusMargin");

// /Script/LauncherSocialTypes.ProfanityData
// Kind: ScriptStruct; super: none
struct FProfanityData
{
public:
    FString CountryCode; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ProfanityList; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Whitelist; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAutoAdd; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FProfanityData, CountryCode) == 0, "Offset mismatch for FProfanityData::CountryCode");
static_assert(offsetof(FProfanityData, ProfanityList) == 16, "Offset mismatch for FProfanityData::ProfanityList");
static_assert(offsetof(FProfanityData, Whitelist) == 32, "Offset mismatch for FProfanityData::Whitelist");
static_assert(offsetof(FProfanityData, bAutoAdd) == 48, "Offset mismatch for FProfanityData::bAutoAdd");

// /Script/LauncherSocialTypes.SocialFontStyle
// Kind: ScriptStruct; super: none
struct FSocialFontStyle
{
public:
    std::uint8_t FontSmall[0x58]; // 0x0000 (Size: 0x58, Type: StructProperty)
    std::uint8_t FontSmallBold[0x58]; // 0x0058 (Size: 0x58, Type: StructProperty)
    std::uint8_t FontNormal[0x58]; // 0x00B0 (Size: 0x58, Type: StructProperty)
    std::uint8_t FontNormalBold[0x58]; // 0x0108 (Size: 0x58, Type: StructProperty)
    std::uint8_t FontLarge[0x58]; // 0x0160 (Size: 0x58, Type: StructProperty)
    std::uint8_t FontLargeBold[0x58]; // 0x01B8 (Size: 0x58, Type: StructProperty)
    std::uint8_t DefaultFontColor[0x10]; // 0x0210 (Size: 0x10, Type: StructProperty)
    std::uint8_t InvertedFontColor[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultDullFontColor[0x1]; // 0x0230 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSocialFontStyle, FontSmall) == 0, "Offset mismatch for FSocialFontStyle::FontSmall");
static_assert(offsetof(FSocialFontStyle, FontSmallBold) == 88, "Offset mismatch for FSocialFontStyle::FontSmallBold");
static_assert(offsetof(FSocialFontStyle, FontNormal) == 176, "Offset mismatch for FSocialFontStyle::FontNormal");
static_assert(offsetof(FSocialFontStyle, FontNormalBold) == 264, "Offset mismatch for FSocialFontStyle::FontNormalBold");
static_assert(offsetof(FSocialFontStyle, FontLarge) == 352, "Offset mismatch for FSocialFontStyle::FontLarge");
static_assert(offsetof(FSocialFontStyle, FontLargeBold) == 440, "Offset mismatch for FSocialFontStyle::FontLargeBold");
static_assert(offsetof(FSocialFontStyle, DefaultFontColor) == 528, "Offset mismatch for FSocialFontStyle::DefaultFontColor");
static_assert(offsetof(FSocialFontStyle, InvertedFontColor) == 544, "Offset mismatch for FSocialFontStyle::InvertedFontColor");
static_assert(offsetof(FSocialFontStyle, DefaultDullFontColor) == 560, "Offset mismatch for FSocialFontStyle::DefaultDullFontColor");

// /Script/LauncherSocialTypes.SocialListMargins
// Kind: ScriptStruct; super: none
struct FSocialListMargins
{
public:
    std::uint8_t UserPresenceImageSize[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t HeaderButtonMargin[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendsListMargin[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendsListNoFriendsMargin[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendsListHeaderMargin[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendsListHeaderCountMargin[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t HeaderButtonContentMargin[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendItemMargin[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendItemStatusMargin[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendTipStatusMargin[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendItemPresenceMargin[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendItemPlatformMargin[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendItemTextScrollerMargin[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ConfirmationBorderMargin[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ConfirmationButtonMargin[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ConfirmationButtonContentMargin[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NoneFriendContentMargin[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    float NoneFriendContentHeight; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float NoneFriendIconWidth; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SubMenuBackIconMargin[0x10]; // 0x0118 (Size: 0x10, Type: StructProperty)
    std::uint8_t SubMenuPageIconMargin[0x10]; // 0x0128 (Size: 0x10, Type: StructProperty)
    std::uint8_t RadioSettingTitleMargin[0x10]; // 0x0138 (Size: 0x10, Type: StructProperty)
    std::uint8_t SubMenuSearchIconMargin[0x10]; // 0x0148 (Size: 0x10, Type: StructProperty)
    std::uint8_t SubMenuSearchTextMargin[0x10]; // 0x0158 (Size: 0x10, Type: StructProperty)
    std::uint8_t SubMenuBackButtonMargin[0x10]; // 0x0168 (Size: 0x10, Type: StructProperty)
    std::uint8_t SubMenuSettingButtonMargin[0x10]; // 0x0178 (Size: 0x10, Type: StructProperty)
    std::uint8_t SubMenuListMargin[0x10]; // 0x0188 (Size: 0x10, Type: StructProperty)
    float SubMenuSeperatorThickness; // 0x0198 (Size: 0x4, Type: FloatProperty)
    float PresenceSeperatorThickness; // 0x019C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FriendTipMargin[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendTipPresenceMargin[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t FriendTipSeperatorMargin[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToolTipMargin[0x10]; // 0x01D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t TipStatusMargin[0x10]; // 0x01E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t AddButtonMargin[0x10]; // 0x01F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t AddButtonSpacing[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSocialListMargins, UserPresenceImageSize) == 0, "Offset mismatch for FSocialListMargins::UserPresenceImageSize");
static_assert(offsetof(FSocialListMargins, HeaderButtonMargin) == 16, "Offset mismatch for FSocialListMargins::HeaderButtonMargin");
static_assert(offsetof(FSocialListMargins, FriendsListMargin) == 32, "Offset mismatch for FSocialListMargins::FriendsListMargin");
static_assert(offsetof(FSocialListMargins, FriendsListNoFriendsMargin) == 48, "Offset mismatch for FSocialListMargins::FriendsListNoFriendsMargin");
static_assert(offsetof(FSocialListMargins, FriendsListHeaderMargin) == 64, "Offset mismatch for FSocialListMargins::FriendsListHeaderMargin");
static_assert(offsetof(FSocialListMargins, FriendsListHeaderCountMargin) == 80, "Offset mismatch for FSocialListMargins::FriendsListHeaderCountMargin");
static_assert(offsetof(FSocialListMargins, HeaderButtonContentMargin) == 96, "Offset mismatch for FSocialListMargins::HeaderButtonContentMargin");
static_assert(offsetof(FSocialListMargins, FriendItemMargin) == 112, "Offset mismatch for FSocialListMargins::FriendItemMargin");
static_assert(offsetof(FSocialListMargins, FriendItemStatusMargin) == 128, "Offset mismatch for FSocialListMargins::FriendItemStatusMargin");
static_assert(offsetof(FSocialListMargins, FriendTipStatusMargin) == 144, "Offset mismatch for FSocialListMargins::FriendTipStatusMargin");
static_assert(offsetof(FSocialListMargins, FriendItemPresenceMargin) == 160, "Offset mismatch for FSocialListMargins::FriendItemPresenceMargin");
static_assert(offsetof(FSocialListMargins, FriendItemPlatformMargin) == 176, "Offset mismatch for FSocialListMargins::FriendItemPlatformMargin");
static_assert(offsetof(FSocialListMargins, FriendItemTextScrollerMargin) == 192, "Offset mismatch for FSocialListMargins::FriendItemTextScrollerMargin");
static_assert(offsetof(FSocialListMargins, ConfirmationBorderMargin) == 208, "Offset mismatch for FSocialListMargins::ConfirmationBorderMargin");
static_assert(offsetof(FSocialListMargins, ConfirmationButtonMargin) == 224, "Offset mismatch for FSocialListMargins::ConfirmationButtonMargin");
static_assert(offsetof(FSocialListMargins, ConfirmationButtonContentMargin) == 240, "Offset mismatch for FSocialListMargins::ConfirmationButtonContentMargin");
static_assert(offsetof(FSocialListMargins, NoneFriendContentMargin) == 256, "Offset mismatch for FSocialListMargins::NoneFriendContentMargin");
static_assert(offsetof(FSocialListMargins, NoneFriendContentHeight) == 272, "Offset mismatch for FSocialListMargins::NoneFriendContentHeight");
static_assert(offsetof(FSocialListMargins, NoneFriendIconWidth) == 276, "Offset mismatch for FSocialListMargins::NoneFriendIconWidth");
static_assert(offsetof(FSocialListMargins, SubMenuBackIconMargin) == 280, "Offset mismatch for FSocialListMargins::SubMenuBackIconMargin");
static_assert(offsetof(FSocialListMargins, SubMenuPageIconMargin) == 296, "Offset mismatch for FSocialListMargins::SubMenuPageIconMargin");
static_assert(offsetof(FSocialListMargins, RadioSettingTitleMargin) == 312, "Offset mismatch for FSocialListMargins::RadioSettingTitleMargin");
static_assert(offsetof(FSocialListMargins, SubMenuSearchIconMargin) == 328, "Offset mismatch for FSocialListMargins::SubMenuSearchIconMargin");
static_assert(offsetof(FSocialListMargins, SubMenuSearchTextMargin) == 344, "Offset mismatch for FSocialListMargins::SubMenuSearchTextMargin");
static_assert(offsetof(FSocialListMargins, SubMenuBackButtonMargin) == 360, "Offset mismatch for FSocialListMargins::SubMenuBackButtonMargin");
static_assert(offsetof(FSocialListMargins, SubMenuSettingButtonMargin) == 376, "Offset mismatch for FSocialListMargins::SubMenuSettingButtonMargin");
static_assert(offsetof(FSocialListMargins, SubMenuListMargin) == 392, "Offset mismatch for FSocialListMargins::SubMenuListMargin");
static_assert(offsetof(FSocialListMargins, SubMenuSeperatorThickness) == 408, "Offset mismatch for FSocialListMargins::SubMenuSeperatorThickness");
static_assert(offsetof(FSocialListMargins, PresenceSeperatorThickness) == 412, "Offset mismatch for FSocialListMargins::PresenceSeperatorThickness");
static_assert(offsetof(FSocialListMargins, FriendTipMargin) == 416, "Offset mismatch for FSocialListMargins::FriendTipMargin");
static_assert(offsetof(FSocialListMargins, FriendTipPresenceMargin) == 432, "Offset mismatch for FSocialListMargins::FriendTipPresenceMargin");
static_assert(offsetof(FSocialListMargins, FriendTipSeperatorMargin) == 448, "Offset mismatch for FSocialListMargins::FriendTipSeperatorMargin");
static_assert(offsetof(FSocialListMargins, ToolTipMargin) == 464, "Offset mismatch for FSocialListMargins::ToolTipMargin");
static_assert(offsetof(FSocialListMargins, TipStatusMargin) == 480, "Offset mismatch for FSocialListMargins::TipStatusMargin");
static_assert(offsetof(FSocialListMargins, AddButtonMargin) == 496, "Offset mismatch for FSocialListMargins::AddButtonMargin");
static_assert(offsetof(FSocialListMargins, AddButtonSpacing) == 512, "Offset mismatch for FSocialListMargins::AddButtonSpacing");

// /Script/LauncherSocialTypes.SocialListStyle
// Kind: ScriptStruct; super: none
struct FSocialListStyle
{
public:
    std::uint8_t FriendItemButtonStyle[0x390]; // 0x0000 (Size: 0x390, Type: StructProperty)
    std::uint8_t ConfirmButtonStyle[0x390]; // 0x0390 (Size: 0x390, Type: StructProperty)
    std::uint8_t CancelButtonStyle[0x390]; // 0x0720 (Size: 0x390, Type: StructProperty)
    std::uint8_t ButtonContentColor[0x14]; // 0x0AB0 (Size: 0x14, Type: StructProperty)
    std::uint8_t ButtonHoverContentColor[0x1C]; // 0x0AC4 (Size: 0x1C, Type: StructProperty)
    std::uint8_t ActionMenuArrowBrush[0xB0]; // 0x0AE0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ActionMenuArrowRightBrush[0xB0]; // 0x0B90 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ActionMenuBackgroundColor[0x20]; // 0x0C40 (Size: 0x20, Type: StructProperty)
    std::uint8_t ToolTipArrowBrush[0xB0]; // 0x0C60 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackButtonStyle[0x390]; // 0x0D10 (Size: 0x390, Type: StructProperty)
    std::uint8_t HeaderButtonStyle[0x390]; // 0x10A0 (Size: 0x390, Type: StructProperty)
    std::uint8_t FriendListActionButtonStyle[0x390]; // 0x1430 (Size: 0x390, Type: StructProperty)
    std::uint8_t AddFriendButtonContentBrush[0xB0]; // 0x17C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t StatusIconBrush[0xB0]; // 0x1870 (Size: 0xB0, Type: StructProperty)
    std::uint8_t PCIconBrush[0xB0]; // 0x1920 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ConsoleIconBrush[0xB0]; // 0x19D0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MobileIconBrush[0xB0]; // 0x1A80 (Size: 0xB0, Type: StructProperty)
    std::uint8_t FacebookIconBrush[0xB0]; // 0x1B30 (Size: 0xB0, Type: StructProperty)
    std::uint8_t EpicIconBrush[0xB0]; // 0x1BE0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t FriendImageBrush[0xB0]; // 0x1C90 (Size: 0xB0, Type: StructProperty)
    std::uint8_t OfflineBrush[0xB0]; // 0x1D40 (Size: 0xB0, Type: StructProperty)
    std::uint8_t OnlineBrush[0xB0]; // 0x1DF0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t AwayBrush[0xB0]; // 0x1EA0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SpectateBrush[0xB0]; // 0x1F50 (Size: 0xB0, Type: StructProperty)
    std::uint8_t FriendsContainerBackground[0xB0]; // 0x2000 (Size: 0xB0, Type: StructProperty)
    std::uint8_t FriendsListBackground[0xB0]; // 0x20B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t AddFriendEditableTextStyle[0xC80]; // 0x2160 (Size: 0xC80, Type: StructProperty)
    std::uint8_t BackBrush[0xB0]; // 0x2DE0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SelectedOptionBrush[0xB0]; // 0x2E90 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SettingsBrush[0xB0]; // 0x2F40 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SeperatorBrush[0xB0]; // 0x2FF0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t PresenceSeperatorBrush[0xB0]; // 0x30A0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t FontSizeBrush[0xB0]; // 0x3150 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SearchBrush[0x1]; // 0x3200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSocialListStyle, FriendItemButtonStyle) == 0, "Offset mismatch for FSocialListStyle::FriendItemButtonStyle");
static_assert(offsetof(FSocialListStyle, ConfirmButtonStyle) == 912, "Offset mismatch for FSocialListStyle::ConfirmButtonStyle");
static_assert(offsetof(FSocialListStyle, CancelButtonStyle) == 1824, "Offset mismatch for FSocialListStyle::CancelButtonStyle");
static_assert(offsetof(FSocialListStyle, ButtonContentColor) == 2736, "Offset mismatch for FSocialListStyle::ButtonContentColor");
static_assert(offsetof(FSocialListStyle, ButtonHoverContentColor) == 2756, "Offset mismatch for FSocialListStyle::ButtonHoverContentColor");
static_assert(offsetof(FSocialListStyle, ActionMenuArrowBrush) == 2784, "Offset mismatch for FSocialListStyle::ActionMenuArrowBrush");
static_assert(offsetof(FSocialListStyle, ActionMenuArrowRightBrush) == 2960, "Offset mismatch for FSocialListStyle::ActionMenuArrowRightBrush");
static_assert(offsetof(FSocialListStyle, ActionMenuBackgroundColor) == 3136, "Offset mismatch for FSocialListStyle::ActionMenuBackgroundColor");
static_assert(offsetof(FSocialListStyle, ToolTipArrowBrush) == 3168, "Offset mismatch for FSocialListStyle::ToolTipArrowBrush");
static_assert(offsetof(FSocialListStyle, BackButtonStyle) == 3344, "Offset mismatch for FSocialListStyle::BackButtonStyle");
static_assert(offsetof(FSocialListStyle, HeaderButtonStyle) == 4256, "Offset mismatch for FSocialListStyle::HeaderButtonStyle");
static_assert(offsetof(FSocialListStyle, FriendListActionButtonStyle) == 5168, "Offset mismatch for FSocialListStyle::FriendListActionButtonStyle");
static_assert(offsetof(FSocialListStyle, AddFriendButtonContentBrush) == 6080, "Offset mismatch for FSocialListStyle::AddFriendButtonContentBrush");
static_assert(offsetof(FSocialListStyle, StatusIconBrush) == 6256, "Offset mismatch for FSocialListStyle::StatusIconBrush");
static_assert(offsetof(FSocialListStyle, PCIconBrush) == 6432, "Offset mismatch for FSocialListStyle::PCIconBrush");
static_assert(offsetof(FSocialListStyle, ConsoleIconBrush) == 6608, "Offset mismatch for FSocialListStyle::ConsoleIconBrush");
static_assert(offsetof(FSocialListStyle, MobileIconBrush) == 6784, "Offset mismatch for FSocialListStyle::MobileIconBrush");
static_assert(offsetof(FSocialListStyle, FacebookIconBrush) == 6960, "Offset mismatch for FSocialListStyle::FacebookIconBrush");
static_assert(offsetof(FSocialListStyle, EpicIconBrush) == 7136, "Offset mismatch for FSocialListStyle::EpicIconBrush");
static_assert(offsetof(FSocialListStyle, FriendImageBrush) == 7312, "Offset mismatch for FSocialListStyle::FriendImageBrush");
static_assert(offsetof(FSocialListStyle, OfflineBrush) == 7488, "Offset mismatch for FSocialListStyle::OfflineBrush");
static_assert(offsetof(FSocialListStyle, OnlineBrush) == 7664, "Offset mismatch for FSocialListStyle::OnlineBrush");
static_assert(offsetof(FSocialListStyle, AwayBrush) == 7840, "Offset mismatch for FSocialListStyle::AwayBrush");
static_assert(offsetof(FSocialListStyle, SpectateBrush) == 8016, "Offset mismatch for FSocialListStyle::SpectateBrush");
static_assert(offsetof(FSocialListStyle, FriendsContainerBackground) == 8192, "Offset mismatch for FSocialListStyle::FriendsContainerBackground");
static_assert(offsetof(FSocialListStyle, FriendsListBackground) == 8368, "Offset mismatch for FSocialListStyle::FriendsListBackground");
static_assert(offsetof(FSocialListStyle, AddFriendEditableTextStyle) == 8544, "Offset mismatch for FSocialListStyle::AddFriendEditableTextStyle");
static_assert(offsetof(FSocialListStyle, BackBrush) == 11744, "Offset mismatch for FSocialListStyle::BackBrush");
static_assert(offsetof(FSocialListStyle, SelectedOptionBrush) == 11920, "Offset mismatch for FSocialListStyle::SelectedOptionBrush");
static_assert(offsetof(FSocialListStyle, SettingsBrush) == 12096, "Offset mismatch for FSocialListStyle::SettingsBrush");
static_assert(offsetof(FSocialListStyle, SeperatorBrush) == 12272, "Offset mismatch for FSocialListStyle::SeperatorBrush");
static_assert(offsetof(FSocialListStyle, PresenceSeperatorBrush) == 12448, "Offset mismatch for FSocialListStyle::PresenceSeperatorBrush");
static_assert(offsetof(FSocialListStyle, FontSizeBrush) == 12624, "Offset mismatch for FSocialListStyle::FontSizeBrush");
static_assert(offsetof(FSocialListStyle, SearchBrush) == 12800, "Offset mismatch for FSocialListStyle::SearchBrush");

// /Script/LauncherSocialTypes.SocialSoundSchema
// Kind: ScriptStruct; super: none
struct FSocialSoundSchema
{
public:
    std::uint8_t MessageReceivedSound[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t FriendInviteReceivedSound[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSocialSoundSchema, MessageReceivedSound) == 0, "Offset mismatch for FSocialSoundSchema::MessageReceivedSound");
static_assert(offsetof(FSocialSoundSchema, FriendInviteReceivedSound) == 24, "Offset mismatch for FSocialSoundSchema::FriendInviteReceivedSound");

// /Script/LauncherSocialTypes.SocialStyle
// Kind: ScriptStruct; super: none
struct FSocialStyle
{
public:
    std::uint8_t ScrollBarStyle[0x650]; // 0x0000 (Size: 0x650, Type: StructProperty)
    std::uint8_t ActionButtonStyle[0x390]; // 0x0650 (Size: 0x390, Type: StructProperty)
    std::uint8_t SmallFontStyle[0x240]; // 0x09E0 (Size: 0x240, Type: StructProperty)
    std::uint8_t NormalFontStyle[0x240]; // 0x0C20 (Size: 0x240, Type: StructProperty)
    std::uint8_t LargeFontStyle[0x240]; // 0x0E60 (Size: 0x240, Type: StructProperty)
    std::uint8_t ChatFontStyle[0x240]; // 0x10A0 (Size: 0x240, Type: StructProperty)
    std::uint8_t CheckBoxStyle[0x950]; // 0x12E0 (Size: 0x950, Type: StructProperty)
    std::uint8_t RadioBoxStyle[0x950]; // 0x1C30 (Size: 0x950, Type: StructProperty)
    std::uint8_t SocialListStyle[0x32B0]; // 0x2580 (Size: 0x32B0, Type: StructProperty)
    std::uint8_t SocialListMargins[0x210]; // 0x5830 (Size: 0x210, Type: StructProperty)
    std::uint8_t ChatStyle[0x1DA0]; // 0x5A40 (Size: 0x1DA0, Type: StructProperty)
    std::uint8_t ChatColorScheme[0xE0]; // 0x77E0 (Size: 0xE0, Type: StructProperty)
    std::uint8_t ChatChromeStyle[0xAC0]; // 0x78C0 (Size: 0xAC0, Type: StructProperty)
    std::uint8_t ChatChromeMargins[0x64]; // 0x8380 (Size: 0x64, Type: StructProperty)
    std::uint8_t ChatChromeColorScheme[0x5C]; // 0x83E4 (Size: 0x5C, Type: StructProperty)
    std::uint8_t ChatMarkupStyle[0x840]; // 0x8440 (Size: 0x840, Type: StructProperty)
    std::uint8_t SoundSchema[0x1]; // 0x8C80 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSocialStyle, ScrollBarStyle) == 0, "Offset mismatch for FSocialStyle::ScrollBarStyle");
static_assert(offsetof(FSocialStyle, ActionButtonStyle) == 1616, "Offset mismatch for FSocialStyle::ActionButtonStyle");
static_assert(offsetof(FSocialStyle, SmallFontStyle) == 2528, "Offset mismatch for FSocialStyle::SmallFontStyle");
static_assert(offsetof(FSocialStyle, NormalFontStyle) == 3104, "Offset mismatch for FSocialStyle::NormalFontStyle");
static_assert(offsetof(FSocialStyle, LargeFontStyle) == 3680, "Offset mismatch for FSocialStyle::LargeFontStyle");
static_assert(offsetof(FSocialStyle, ChatFontStyle) == 4256, "Offset mismatch for FSocialStyle::ChatFontStyle");
static_assert(offsetof(FSocialStyle, CheckBoxStyle) == 4832, "Offset mismatch for FSocialStyle::CheckBoxStyle");
static_assert(offsetof(FSocialStyle, RadioBoxStyle) == 7216, "Offset mismatch for FSocialStyle::RadioBoxStyle");
static_assert(offsetof(FSocialStyle, SocialListStyle) == 9600, "Offset mismatch for FSocialStyle::SocialListStyle");
static_assert(offsetof(FSocialStyle, SocialListMargins) == 22576, "Offset mismatch for FSocialStyle::SocialListMargins");
static_assert(offsetof(FSocialStyle, ChatStyle) == 23104, "Offset mismatch for FSocialStyle::ChatStyle");
static_assert(offsetof(FSocialStyle, ChatColorScheme) == 30688, "Offset mismatch for FSocialStyle::ChatColorScheme");
static_assert(offsetof(FSocialStyle, ChatChromeStyle) == 30912, "Offset mismatch for FSocialStyle::ChatChromeStyle");
static_assert(offsetof(FSocialStyle, ChatChromeMargins) == 33664, "Offset mismatch for FSocialStyle::ChatChromeMargins");
static_assert(offsetof(FSocialStyle, ChatChromeColorScheme) == 33764, "Offset mismatch for FSocialStyle::ChatChromeColorScheme");
static_assert(offsetof(FSocialStyle, ChatMarkupStyle) == 33856, "Offset mismatch for FSocialStyle::ChatMarkupStyle");
static_assert(offsetof(FSocialStyle, SoundSchema) == 35968, "Offset mismatch for FSocialStyle::SoundSchema");
