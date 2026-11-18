#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LauncherSocialTypes
{
    struct ChatChromeColorScheme
    {
        static constexpr std::string_view Name = "ChatChromeColorScheme";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChatEntryBackgroundColor = 0x0;
            static constexpr std::uintptr_t NoneActiveTabColor = 0x10;
            static constexpr std::uintptr_t TabFontColor = 0x20;
            static constexpr std::uintptr_t TabFontColorInverted = 0x30;
            static constexpr std::uintptr_t ChatBackgroundColor = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ChatEntryBackgroundColor", 0x0, "StructProperty"},
            {"NoneActiveTabColor", 0x10, "StructProperty"},
            {"TabFontColor", 0x20, "StructProperty"},
            {"TabFontColorInverted", 0x30, "StructProperty"},
            {"ChatBackgroundColor", 0x40, "StructProperty"},
        }};
    };

    struct ChatChromeMargins
    {
        static constexpr std::string_view Name = "ChatChromeMargins";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TabWidth = 0x0;
            static constexpr std::uintptr_t TabPadding = 0x4;
            static constexpr std::uintptr_t ChatWindowPadding = 0x14;
            static constexpr std::uintptr_t ChatWindowToEntryMargin = 0x24;
            static constexpr std::uintptr_t ChatChannelPadding = 0x34;
            static constexpr std::uintptr_t UserListButtonPadding = 0x44;
            static constexpr std::uintptr_t UserListIconPadding = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TabWidth", 0x0, "FloatProperty"},
            {"TabPadding", 0x4, "StructProperty"},
            {"ChatWindowPadding", 0x14, "StructProperty"},
            {"ChatWindowToEntryMargin", 0x24, "StructProperty"},
            {"ChatChannelPadding", 0x34, "StructProperty"},
            {"UserListButtonPadding", 0x44, "StructProperty"},
            {"UserListIconPadding", 0x54, "StructProperty"},
        }};
    };

    struct ChatChromeStyle
    {
        static constexpr std::string_view Name = "ChatChromeStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UserListBrush = 0x0;
            static constexpr std::uintptr_t ChatBackgroundBrush = 0xB0;
            static constexpr std::uintptr_t ChatEntryBackgroundBrush = 0x160;
            static constexpr std::uintptr_t ChannelBackgroundBrush = 0x210;
            static constexpr std::uintptr_t TabBackgroundBrush = 0x2C0;
            static constexpr std::uintptr_t TabSelectorButtonStyle = 0x370;
            static constexpr std::uintptr_t TabOptionPadding = 0x700;
            static constexpr std::uintptr_t TabContentPadding = 0x710;
            static constexpr std::uintptr_t TabClosePadding = 0x720;
            static constexpr std::uintptr_t UserListButtonStyle = 0x730;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"UserListBrush", 0x0, "StructProperty"},
            {"ChatBackgroundBrush", 0xB0, "StructProperty"},
            {"ChatEntryBackgroundBrush", 0x160, "StructProperty"},
            {"ChannelBackgroundBrush", 0x210, "StructProperty"},
            {"TabBackgroundBrush", 0x2C0, "StructProperty"},
            {"TabSelectorButtonStyle", 0x370, "StructProperty"},
            {"TabOptionPadding", 0x700, "StructProperty"},
            {"TabContentPadding", 0x710, "StructProperty"},
            {"TabClosePadding", 0x720, "StructProperty"},
            {"UserListButtonStyle", 0x730, "StructProperty"},
        }};
    };

    struct ChatColorScheme
    {
        static constexpr std::string_view Name = "ChatColorScheme";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeStampColor = 0x0;
            static constexpr std::uintptr_t DefaultChatColor = 0x10;
            static constexpr std::uintptr_t WhisperChatColor = 0x20;
            static constexpr std::uintptr_t GameChatColor = 0x30;
            static constexpr std::uintptr_t TeamChatColor = 0x40;
            static constexpr std::uintptr_t PartyChatColor = 0x50;
            static constexpr std::uintptr_t AdminChatColor = 0x60;
            static constexpr std::uintptr_t GameAdminChatColor = 0x70;
            static constexpr std::uintptr_t WhisperHyperlinkChatColor = 0x80;
            static constexpr std::uintptr_t GameHyperlinkChatColor = 0x90;
            static constexpr std::uintptr_t TeamHyperlinkChatColor = 0xA0;
            static constexpr std::uintptr_t PartyHyperlinkChatColor = 0xB0;
            static constexpr std::uintptr_t EnemyColor = 0xC0;
            static constexpr std::uintptr_t FriendlyColor = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"TimeStampColor", 0x0, "StructProperty"},
            {"DefaultChatColor", 0x10, "StructProperty"},
            {"WhisperChatColor", 0x20, "StructProperty"},
            {"GameChatColor", 0x30, "StructProperty"},
            {"TeamChatColor", 0x40, "StructProperty"},
            {"PartyChatColor", 0x50, "StructProperty"},
            {"AdminChatColor", 0x60, "StructProperty"},
            {"GameAdminChatColor", 0x70, "StructProperty"},
            {"WhisperHyperlinkChatColor", 0x80, "StructProperty"},
            {"GameHyperlinkChatColor", 0x90, "StructProperty"},
            {"TeamHyperlinkChatColor", 0xA0, "StructProperty"},
            {"PartyHyperlinkChatColor", 0xB0, "StructProperty"},
            {"EnemyColor", 0xC0, "StructProperty"},
            {"FriendlyColor", 0xD0, "StructProperty"},
        }};
    };

    struct ChatMarkupStyle
    {
        static constexpr std::string_view Name = "ChatMarkupStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkupButtonStyle = 0x0;
            static constexpr std::uintptr_t MarkupTextStyle = 0x390;
            static constexpr std::uintptr_t MarkupBackground = 0x670;
            static constexpr std::uintptr_t ButtonColor = 0x720;
            static constexpr std::uintptr_t ButtonHoverColor = 0x734;
            static constexpr std::uintptr_t TipColor = 0x748;
            static constexpr std::uintptr_t SeperatorBrush = 0x760;
            static constexpr std::uintptr_t SeperatorThickness = 0x810;
            static constexpr std::uintptr_t MarkupPadding = 0x814;
            static constexpr std::uintptr_t ButtonPadding = 0x824;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"MarkupButtonStyle", 0x0, "StructProperty"},
            {"MarkupTextStyle", 0x390, "StructProperty"},
            {"MarkupBackground", 0x670, "StructProperty"},
            {"ButtonColor", 0x720, "StructProperty"},
            {"ButtonHoverColor", 0x734, "StructProperty"},
            {"TipColor", 0x748, "StructProperty"},
            {"SeperatorBrush", 0x760, "StructProperty"},
            {"SeperatorThickness", 0x810, "FloatProperty"},
            {"MarkupPadding", 0x814, "StructProperty"},
            {"ButtonPadding", 0x824, "StructProperty"},
        }};
    };

    struct ChatStyle
    {
        static constexpr std::string_view Name = "ChatStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChatEntryTextStyle = 0x0;
            static constexpr std::uintptr_t ChatDisplayTextStyle = 0xC80;
            static constexpr std::uintptr_t ScrollBorderStyle = 0x1900;
            static constexpr std::uintptr_t MessageNotificationBrush = 0x1BF0;
            static constexpr std::uintptr_t ChatEntryPadding = 0x1CA0;
            static constexpr std::uintptr_t ChatEntryHeight = 0x1CB0;
            static constexpr std::uintptr_t ChatMenuBackgroundBrush = 0x1CC0;
            static constexpr std::uintptr_t FriendActionPadding = 0x1D70;
            static constexpr std::uintptr_t FriendActionHeaderPadding = 0x1D80;
            static constexpr std::uintptr_t FriendActionStatusMargin = 0x1D90;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ChatEntryTextStyle", 0x0, "StructProperty"},
            {"ChatDisplayTextStyle", 0xC80, "StructProperty"},
            {"ScrollBorderStyle", 0x1900, "StructProperty"},
            {"MessageNotificationBrush", 0x1BF0, "StructProperty"},
            {"ChatEntryPadding", 0x1CA0, "StructProperty"},
            {"ChatEntryHeight", 0x1CB0, "FloatProperty"},
            {"ChatMenuBackgroundBrush", 0x1CC0, "StructProperty"},
            {"FriendActionPadding", 0x1D70, "StructProperty"},
            {"FriendActionHeaderPadding", 0x1D80, "StructProperty"},
            {"FriendActionStatusMargin", 0x1D90, "StructProperty"},
        }};
    };

    struct ProfanityData
    {
        static constexpr std::string_view Name = "ProfanityData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CountryCode = 0x0;
            static constexpr std::uintptr_t ProfanityList = 0x10;
            static constexpr std::uintptr_t Whitelist = 0x20;
            static constexpr std::uintptr_t bAutoAdd = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CountryCode", 0x0, "StrProperty"},
            {"ProfanityList", 0x10, "StrProperty"},
            {"Whitelist", 0x20, "StrProperty"},
            {"bAutoAdd", 0x30, "BoolProperty"},
        }};
    };

    struct SocialFontStyle
    {
        static constexpr std::string_view Name = "SocialFontStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FontSmall = 0x0;
            static constexpr std::uintptr_t FontSmallBold = 0x58;
            static constexpr std::uintptr_t FontNormal = 0xB0;
            static constexpr std::uintptr_t FontNormalBold = 0x108;
            static constexpr std::uintptr_t FontLarge = 0x160;
            static constexpr std::uintptr_t FontLargeBold = 0x1B8;
            static constexpr std::uintptr_t DefaultFontColor = 0x210;
            static constexpr std::uintptr_t InvertedFontColor = 0x220;
            static constexpr std::uintptr_t DefaultDullFontColor = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"FontSmall", 0x0, "StructProperty"},
            {"FontSmallBold", 0x58, "StructProperty"},
            {"FontNormal", 0xB0, "StructProperty"},
            {"FontNormalBold", 0x108, "StructProperty"},
            {"FontLarge", 0x160, "StructProperty"},
            {"FontLargeBold", 0x1B8, "StructProperty"},
            {"DefaultFontColor", 0x210, "StructProperty"},
            {"InvertedFontColor", 0x220, "StructProperty"},
            {"DefaultDullFontColor", 0x230, "StructProperty"},
        }};
    };

    struct SocialListMargins
    {
        static constexpr std::string_view Name = "SocialListMargins";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UserPresenceImageSize = 0x0;
            static constexpr std::uintptr_t HeaderButtonMargin = 0x10;
            static constexpr std::uintptr_t FriendsListMargin = 0x20;
            static constexpr std::uintptr_t FriendsListNoFriendsMargin = 0x30;
            static constexpr std::uintptr_t FriendsListHeaderMargin = 0x40;
            static constexpr std::uintptr_t FriendsListHeaderCountMargin = 0x50;
            static constexpr std::uintptr_t HeaderButtonContentMargin = 0x60;
            static constexpr std::uintptr_t FriendItemMargin = 0x70;
            static constexpr std::uintptr_t FriendItemStatusMargin = 0x80;
            static constexpr std::uintptr_t FriendTipStatusMargin = 0x90;
            static constexpr std::uintptr_t FriendItemPresenceMargin = 0xA0;
            static constexpr std::uintptr_t FriendItemPlatformMargin = 0xB0;
            static constexpr std::uintptr_t FriendItemTextScrollerMargin = 0xC0;
            static constexpr std::uintptr_t ConfirmationBorderMargin = 0xD0;
            static constexpr std::uintptr_t ConfirmationButtonMargin = 0xE0;
            static constexpr std::uintptr_t ConfirmationButtonContentMargin = 0xF0;
            static constexpr std::uintptr_t NoneFriendContentMargin = 0x100;
            static constexpr std::uintptr_t NoneFriendContentHeight = 0x110;
            static constexpr std::uintptr_t NoneFriendIconWidth = 0x114;
            static constexpr std::uintptr_t SubMenuBackIconMargin = 0x118;
            static constexpr std::uintptr_t SubMenuPageIconMargin = 0x128;
            static constexpr std::uintptr_t RadioSettingTitleMargin = 0x138;
            static constexpr std::uintptr_t SubMenuSearchIconMargin = 0x148;
            static constexpr std::uintptr_t SubMenuSearchTextMargin = 0x158;
            static constexpr std::uintptr_t SubMenuBackButtonMargin = 0x168;
            static constexpr std::uintptr_t SubMenuSettingButtonMargin = 0x178;
            static constexpr std::uintptr_t SubMenuListMargin = 0x188;
            static constexpr std::uintptr_t SubMenuSeperatorThickness = 0x198;
            static constexpr std::uintptr_t PresenceSeperatorThickness = 0x19C;
            static constexpr std::uintptr_t FriendTipMargin = 0x1A0;
            static constexpr std::uintptr_t FriendTipPresenceMargin = 0x1B0;
            static constexpr std::uintptr_t FriendTipSeperatorMargin = 0x1C0;
            static constexpr std::uintptr_t ToolTipMargin = 0x1D0;
            static constexpr std::uintptr_t TipStatusMargin = 0x1E0;
            static constexpr std::uintptr_t AddButtonMargin = 0x1F0;
            static constexpr std::uintptr_t AddButtonSpacing = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"UserPresenceImageSize", 0x0, "StructProperty"},
            {"HeaderButtonMargin", 0x10, "StructProperty"},
            {"FriendsListMargin", 0x20, "StructProperty"},
            {"FriendsListNoFriendsMargin", 0x30, "StructProperty"},
            {"FriendsListHeaderMargin", 0x40, "StructProperty"},
            {"FriendsListHeaderCountMargin", 0x50, "StructProperty"},
            {"HeaderButtonContentMargin", 0x60, "StructProperty"},
            {"FriendItemMargin", 0x70, "StructProperty"},
            {"FriendItemStatusMargin", 0x80, "StructProperty"},
            {"FriendTipStatusMargin", 0x90, "StructProperty"},
            {"FriendItemPresenceMargin", 0xA0, "StructProperty"},
            {"FriendItemPlatformMargin", 0xB0, "StructProperty"},
            {"FriendItemTextScrollerMargin", 0xC0, "StructProperty"},
            {"ConfirmationBorderMargin", 0xD0, "StructProperty"},
            {"ConfirmationButtonMargin", 0xE0, "StructProperty"},
            {"ConfirmationButtonContentMargin", 0xF0, "StructProperty"},
            {"NoneFriendContentMargin", 0x100, "StructProperty"},
            {"NoneFriendContentHeight", 0x110, "FloatProperty"},
            {"NoneFriendIconWidth", 0x114, "FloatProperty"},
            {"SubMenuBackIconMargin", 0x118, "StructProperty"},
            {"SubMenuPageIconMargin", 0x128, "StructProperty"},
            {"RadioSettingTitleMargin", 0x138, "StructProperty"},
            {"SubMenuSearchIconMargin", 0x148, "StructProperty"},
            {"SubMenuSearchTextMargin", 0x158, "StructProperty"},
            {"SubMenuBackButtonMargin", 0x168, "StructProperty"},
            {"SubMenuSettingButtonMargin", 0x178, "StructProperty"},
            {"SubMenuListMargin", 0x188, "StructProperty"},
            {"SubMenuSeperatorThickness", 0x198, "FloatProperty"},
            {"PresenceSeperatorThickness", 0x19C, "FloatProperty"},
            {"FriendTipMargin", 0x1A0, "StructProperty"},
            {"FriendTipPresenceMargin", 0x1B0, "StructProperty"},
            {"FriendTipSeperatorMargin", 0x1C0, "StructProperty"},
            {"ToolTipMargin", 0x1D0, "StructProperty"},
            {"TipStatusMargin", 0x1E0, "StructProperty"},
            {"AddButtonMargin", 0x1F0, "StructProperty"},
            {"AddButtonSpacing", 0x200, "StructProperty"},
        }};
    };

    struct SocialListStyle
    {
        static constexpr std::string_view Name = "SocialListStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FriendItemButtonStyle = 0x0;
            static constexpr std::uintptr_t ConfirmButtonStyle = 0x390;
            static constexpr std::uintptr_t CancelButtonStyle = 0x720;
            static constexpr std::uintptr_t ButtonContentColor = 0xAB0;
            static constexpr std::uintptr_t ButtonHoverContentColor = 0xAC4;
            static constexpr std::uintptr_t ActionMenuArrowBrush = 0xAE0;
            static constexpr std::uintptr_t ActionMenuArrowRightBrush = 0xB90;
            static constexpr std::uintptr_t ActionMenuBackgroundColor = 0xC40;
            static constexpr std::uintptr_t ToolTipArrowBrush = 0xC60;
            static constexpr std::uintptr_t BackButtonStyle = 0xD10;
            static constexpr std::uintptr_t HeaderButtonStyle = 0x10A0;
            static constexpr std::uintptr_t FriendListActionButtonStyle = 0x1430;
            static constexpr std::uintptr_t AddFriendButtonContentBrush = 0x17C0;
            static constexpr std::uintptr_t StatusIconBrush = 0x1870;
            static constexpr std::uintptr_t PCIconBrush = 0x1920;
            static constexpr std::uintptr_t ConsoleIconBrush = 0x19D0;
            static constexpr std::uintptr_t MobileIconBrush = 0x1A80;
            static constexpr std::uintptr_t FacebookIconBrush = 0x1B30;
            static constexpr std::uintptr_t EpicIconBrush = 0x1BE0;
            static constexpr std::uintptr_t FriendImageBrush = 0x1C90;
            static constexpr std::uintptr_t OfflineBrush = 0x1D40;
            static constexpr std::uintptr_t OnlineBrush = 0x1DF0;
            static constexpr std::uintptr_t AwayBrush = 0x1EA0;
            static constexpr std::uintptr_t SpectateBrush = 0x1F50;
            static constexpr std::uintptr_t FriendsContainerBackground = 0x2000;
            static constexpr std::uintptr_t FriendsListBackground = 0x20B0;
            static constexpr std::uintptr_t AddFriendEditableTextStyle = 0x2160;
            static constexpr std::uintptr_t BackBrush = 0x2DE0;
            static constexpr std::uintptr_t SelectedOptionBrush = 0x2E90;
            static constexpr std::uintptr_t SettingsBrush = 0x2F40;
            static constexpr std::uintptr_t SeperatorBrush = 0x2FF0;
            static constexpr std::uintptr_t PresenceSeperatorBrush = 0x30A0;
            static constexpr std::uintptr_t FontSizeBrush = 0x3150;
            static constexpr std::uintptr_t SearchBrush = 0x3200;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"FriendItemButtonStyle", 0x0, "StructProperty"},
            {"ConfirmButtonStyle", 0x390, "StructProperty"},
            {"CancelButtonStyle", 0x720, "StructProperty"},
            {"ButtonContentColor", 0xAB0, "StructProperty"},
            {"ButtonHoverContentColor", 0xAC4, "StructProperty"},
            {"ActionMenuArrowBrush", 0xAE0, "StructProperty"},
            {"ActionMenuArrowRightBrush", 0xB90, "StructProperty"},
            {"ActionMenuBackgroundColor", 0xC40, "StructProperty"},
            {"ToolTipArrowBrush", 0xC60, "StructProperty"},
            {"BackButtonStyle", 0xD10, "StructProperty"},
            {"HeaderButtonStyle", 0x10A0, "StructProperty"},
            {"FriendListActionButtonStyle", 0x1430, "StructProperty"},
            {"AddFriendButtonContentBrush", 0x17C0, "StructProperty"},
            {"StatusIconBrush", 0x1870, "StructProperty"},
            {"PCIconBrush", 0x1920, "StructProperty"},
            {"ConsoleIconBrush", 0x19D0, "StructProperty"},
            {"MobileIconBrush", 0x1A80, "StructProperty"},
            {"FacebookIconBrush", 0x1B30, "StructProperty"},
            {"EpicIconBrush", 0x1BE0, "StructProperty"},
            {"FriendImageBrush", 0x1C90, "StructProperty"},
            {"OfflineBrush", 0x1D40, "StructProperty"},
            {"OnlineBrush", 0x1DF0, "StructProperty"},
            {"AwayBrush", 0x1EA0, "StructProperty"},
            {"SpectateBrush", 0x1F50, "StructProperty"},
            {"FriendsContainerBackground", 0x2000, "StructProperty"},
            {"FriendsListBackground", 0x20B0, "StructProperty"},
            {"AddFriendEditableTextStyle", 0x2160, "StructProperty"},
            {"BackBrush", 0x2DE0, "StructProperty"},
            {"SelectedOptionBrush", 0x2E90, "StructProperty"},
            {"SettingsBrush", 0x2F40, "StructProperty"},
            {"SeperatorBrush", 0x2FF0, "StructProperty"},
            {"PresenceSeperatorBrush", 0x30A0, "StructProperty"},
            {"FontSizeBrush", 0x3150, "StructProperty"},
            {"SearchBrush", 0x3200, "StructProperty"},
        }};
    };

    struct SocialSoundSchema
    {
        static constexpr std::string_view Name = "SocialSoundSchema";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageReceivedSound = 0x0;
            static constexpr std::uintptr_t FriendInviteReceivedSound = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MessageReceivedSound", 0x0, "StructProperty"},
            {"FriendInviteReceivedSound", 0x18, "StructProperty"},
        }};
    };

    struct SocialStyle
    {
        static constexpr std::string_view Name = "SocialStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ScrollBarStyle = 0x0;
            static constexpr std::uintptr_t ActionButtonStyle = 0x650;
            static constexpr std::uintptr_t SmallFontStyle = 0x9E0;
            static constexpr std::uintptr_t NormalFontStyle = 0xC20;
            static constexpr std::uintptr_t LargeFontStyle = 0xE60;
            static constexpr std::uintptr_t ChatFontStyle = 0x10A0;
            static constexpr std::uintptr_t CheckBoxStyle = 0x12E0;
            static constexpr std::uintptr_t RadioBoxStyle = 0x1C30;
            static constexpr std::uintptr_t SocialListStyle = 0x2580;
            static constexpr std::uintptr_t SocialListMargins = 0x5830;
            static constexpr std::uintptr_t ChatStyle = 0x5A40;
            static constexpr std::uintptr_t ChatColorScheme = 0x77E0;
            static constexpr std::uintptr_t ChatChromeStyle = 0x78C0;
            static constexpr std::uintptr_t ChatChromeMargins = 0x8380;
            static constexpr std::uintptr_t ChatChromeColorScheme = 0x83E4;
            static constexpr std::uintptr_t ChatMarkupStyle = 0x8440;
            static constexpr std::uintptr_t SoundSchema = 0x8C80;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"ScrollBarStyle", 0x0, "StructProperty"},
            {"ActionButtonStyle", 0x650, "StructProperty"},
            {"SmallFontStyle", 0x9E0, "StructProperty"},
            {"NormalFontStyle", 0xC20, "StructProperty"},
            {"LargeFontStyle", 0xE60, "StructProperty"},
            {"ChatFontStyle", 0x10A0, "StructProperty"},
            {"CheckBoxStyle", 0x12E0, "StructProperty"},
            {"RadioBoxStyle", 0x1C30, "StructProperty"},
            {"SocialListStyle", 0x2580, "StructProperty"},
            {"SocialListMargins", 0x5830, "StructProperty"},
            {"ChatStyle", 0x5A40, "StructProperty"},
            {"ChatColorScheme", 0x77E0, "StructProperty"},
            {"ChatChromeStyle", 0x78C0, "StructProperty"},
            {"ChatChromeMargins", 0x8380, "StructProperty"},
            {"ChatChromeColorScheme", 0x83E4, "StructProperty"},
            {"ChatMarkupStyle", 0x8440, "StructProperty"},
            {"SoundSchema", 0x8C80, "StructProperty"},
        }};
    };

}
