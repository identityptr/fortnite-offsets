#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SocialUMG
{
    struct DesignerPreviewChatChannel
    {
        static constexpr std::string_view Name = "DesignerPreviewChatChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialChatChannel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SocialActionMenu
    {
        static constexpr std::string_view Name = "SocialActionMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBackHandler = 0x330;
            static constexpr std::uintptr_t bIsBackActionDisplayedInActionBar = 0x331;
            static constexpr std::uintptr_t OverrideBackActionDisplayName = 0x338;
            static constexpr std::uintptr_t bAutoActivate = 0x348;
            static constexpr std::uintptr_t bSupportsActivationFocus = 0x349;
            static constexpr std::uintptr_t bIsModal = 0x34A;
            static constexpr std::uintptr_t bAutoRestoreFocus = 0x34B;
            static constexpr std::uintptr_t bOverrideActionDomain = 0x34C;
            static constexpr std::uintptr_t InputMapping = 0x350;
            static constexpr std::uintptr_t InputMappingPriority = 0x358;
            static constexpr std::uintptr_t InputModeTagsToAdd = 0x360;
            static constexpr std::uintptr_t InputModeTagsToRemove = 0x380;
            static constexpr std::uintptr_t ActionDomainOverride = 0x3A0;
            static constexpr std::uintptr_t BP_OnWidgetActivated = 0x3C0;
            static constexpr std::uintptr_t BP_OnWidgetDeactivated = 0x3D0;
            static constexpr std::uintptr_t bIsActive = 0x3E0;
            static constexpr std::uintptr_t VisibilityBoundWidgets = 0x3E8;
            static constexpr std::uintptr_t bSetVisibilityOnActivated = 0x498;
            static constexpr std::uintptr_t ActivatedVisibility = 0x499;
            static constexpr std::uintptr_t bSetVisibilityOnDeactivated = 0x49A;
            static constexpr std::uintptr_t DeactivatedVisibility = 0x49B;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bIsBackHandler", 0x330, "BoolProperty"},
            {"bIsBackActionDisplayedInActionBar", 0x331, "BoolProperty"},
            {"OverrideBackActionDisplayName", 0x338, "TextProperty"},
            {"bAutoActivate", 0x348, "BoolProperty"},
            {"bSupportsActivationFocus", 0x349, "BoolProperty"},
            {"bIsModal", 0x34A, "BoolProperty"},
            {"bAutoRestoreFocus", 0x34B, "BoolProperty"},
            {"bOverrideActionDomain", 0x34C, "BoolProperty"},
            {"InputMapping", 0x350, "ObjectProperty"},
            {"InputMappingPriority", 0x358, "IntProperty"},
            {"InputModeTagsToAdd", 0x360, "StructProperty"},
            {"InputModeTagsToRemove", 0x380, "StructProperty"},
            {"ActionDomainOverride", 0x3A0, "SoftObjectProperty"},
            {"BP_OnWidgetActivated", 0x3C0, "MulticastInlineDelegateProperty"},
            {"BP_OnWidgetDeactivated", 0x3D0, "MulticastInlineDelegateProperty"},
            {"bIsActive", 0x3E0, "BoolProperty"},
            {"VisibilityBoundWidgets", 0x3E8, "ArrayProperty"},
            {"bSetVisibilityOnActivated", 0x498, "BoolProperty"},
            {"ActivatedVisibility", 0x499, "EnumProperty"},
            {"bSetVisibilityOnDeactivated", 0x49A, "BoolProperty"},
            {"DeactivatedVisibility", 0x49B, "EnumProperty"},
        }};
    };

    struct SocialChatChannelTab
    {
        static constexpr std::string_view Name = "SocialChatChannelTab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t ChatChannel = 0x1620;
            static constexpr std::uintptr_t CommonText_ChannelName = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ChatChannel", 0x1620, "ObjectProperty"},
            {"CommonText_ChannelName", 0x1628, "ObjectProperty"},
        }};
    };

    struct SocialChatContainer
    {
        static constexpr std::string_view Name = "SocialChatContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ChatManager = 0x308;
            static constexpr std::uintptr_t JoinedChannels = 0x310;
            static constexpr std::uintptr_t ActiveChannel = 0x320;
            static constexpr std::uintptr_t TabButtonGroup = 0x328;
            static constexpr std::uintptr_t ChatList_Messages = 0x338;
            static constexpr std::uintptr_t ChatEditableText_MessageEntry = 0x340;
            static constexpr std::uintptr_t Button_SendMessage = 0x348;
            static constexpr std::uintptr_t EntryBox_JoinedChannels = 0x350;
            static constexpr std::uintptr_t ScrollBox_Channels = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ChatManager", 0x308, "ObjectProperty"},
            {"JoinedChannels", 0x310, "ArrayProperty"},
            {"ActiveChannel", 0x320, "ObjectProperty"},
            {"TabButtonGroup", 0x328, "ObjectProperty"},
            {"ChatList_Messages", 0x338, "ObjectProperty"},
            {"ChatEditableText_MessageEntry", 0x340, "ObjectProperty"},
            {"Button_SendMessage", 0x348, "ObjectProperty"},
            {"EntryBox_JoinedChannels", 0x350, "ObjectProperty"},
            {"ScrollBox_Channels", 0x358, "ObjectProperty"},
        }};
    };

    struct SocialChatEditableText
    {
        static constexpr std::string_view Name = "SocialChatEditableText";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t EditableTextStyle = 0x180;
            static constexpr std::uintptr_t AutoCompleteStyle = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EditableTextStyle", 0x180, "StructProperty"},
            {"AutoCompleteStyle", 0x440, "StructProperty"},
        }};
    };

    struct SocialChatMessageEntry
    {
        static constexpr std::string_view Name = "SocialChatMessageEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultStyle = 0x320;
            static constexpr std::uintptr_t RichText_Message = 0x458;
            static constexpr std::uintptr_t Button_MessageButton = 0x460;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultStyle", 0x320, "StructProperty"},
            {"RichText_Message", 0x458, "ObjectProperty"},
            {"Button_MessageButton", 0x460, "ObjectProperty"},
        }};
    };

    struct SocialChatMessageList
    {
        static constexpr std::string_view Name = "SocialChatMessageList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListViewBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsFocusable = 0x458;
            static constexpr std::uintptr_t ActiveChannel = 0x460;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsFocusable", 0x458, "BoolProperty"},
            {"ActiveChannel", 0x460, "ObjectProperty"},
        }};
    };

    struct SocialGroupListEntry
    {
        static constexpr std::string_view Name = "SocialGroupListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionMenuClass = 0x1628;
            static constexpr std::uintptr_t SocialGroup = 0x1630;
            static constexpr std::uintptr_t Text_GroupName = 0x1638;
            static constexpr std::uintptr_t MenuAnchor_Actions = 0x1640;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActionMenuClass", 0x1628, "ClassProperty"},
            {"SocialGroup", 0x1630, "ObjectProperty"},
            {"Text_GroupName", 0x1638, "ObjectProperty"},
            {"MenuAnchor_Actions", 0x1640, "ObjectProperty"},
        }};
    };

    struct SocialGroupTreeView
    {
        static constexpr std::string_view Name = "SocialGroupTreeView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TreeView";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupEntryWidgetClass = 0x1040;
            static constexpr std::uintptr_t UserEntryWidgetClass = 0x1048;
            static constexpr std::uintptr_t ActionMenuClass = 0x1050;
            static constexpr std::uintptr_t ActionMenu = 0x1058;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GroupEntryWidgetClass", 0x1040, "ClassProperty"},
            {"UserEntryWidgetClass", 0x1048, "ClassProperty"},
            {"ActionMenuClass", 0x1050, "ClassProperty"},
            {"ActionMenu", 0x1058, "ObjectProperty"},
        }};
    };

    struct SocialInteractionButton
    {
        static constexpr std::string_view Name = "SocialInteractionButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultIndicatorColor = 0x1620;
            static constexpr std::uintptr_t AlertingIndicatorColor = 0x1630;
            static constexpr std::uintptr_t Text_InteractionName = 0x1680;
            static constexpr std::uintptr_t Border_InteractionIndicator = 0x1688;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultIndicatorColor", 0x1620, "StructProperty"},
            {"AlertingIndicatorColor", 0x1630, "StructProperty"},
            {"Text_InteractionName", 0x1680, "ObjectProperty"},
            {"Border_InteractionIndicator", 0x1688, "ObjectProperty"},
        }};
    };

    struct SocialInteractionMenu
    {
        static constexpr std::string_view Name = "SocialInteractionMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialActionMenu";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_PositiveInteractions = 0x510;
            static constexpr std::uintptr_t EntryBox_NegativeInteractions = 0x518;
            static constexpr std::uintptr_t Spacer_InteractionSeparator = 0x520;
            static constexpr std::uintptr_t Switcher_Confirmation = 0x528;
            static constexpr std::uintptr_t Text_ConfirmationLabel = 0x530;
            static constexpr std::uintptr_t Button_Confirm = 0x538;
            static constexpr std::uintptr_t Button_Decline = 0x540;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"EntryBox_PositiveInteractions", 0x510, "ObjectProperty"},
            {"EntryBox_NegativeInteractions", 0x518, "ObjectProperty"},
            {"Spacer_InteractionSeparator", 0x520, "ObjectProperty"},
            {"Switcher_Confirmation", 0x528, "ObjectProperty"},
            {"Text_ConfirmationLabel", 0x530, "ObjectProperty"},
            {"Button_Confirm", 0x538, "ObjectProperty"},
            {"Button_Decline", 0x540, "ObjectProperty"},
        }};
    };

    struct SocialListEntryBase
    {
        static constexpr std::string_view Name = "SocialListEntryBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSelectedChanged = 0x15D0;
            static constexpr std::uintptr_t OnButtonClicked = 0x15E0;
            static constexpr std::uintptr_t OnButtonDoubleClicked = 0x15F0;
            static constexpr std::uintptr_t OnButtonHovered = 0x1600;
            static constexpr std::uintptr_t OnButtonUnhovered = 0x1610;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnSelectedChanged", 0x15D0, "MulticastInlineDelegateProperty"},
            {"OnButtonClicked", 0x15E0, "MulticastInlineDelegateProperty"},
            {"OnButtonDoubleClicked", 0x15F0, "MulticastInlineDelegateProperty"},
            {"OnButtonHovered", 0x1600, "MulticastInlineDelegateProperty"},
            {"OnButtonUnhovered", 0x1610, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SocialListInteractableEntryBase
    {
        static constexpr std::string_view Name = "SocialListInteractableEntryBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialListEntryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionMenuClass = 0x1640;
            static constexpr std::uintptr_t MenuAnchor_Actions = 0x1648;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActionMenuClass", 0x1640, "ClassProperty"},
            {"MenuAnchor_Actions", 0x1648, "ObjectProperty"},
        }};
    };

    struct SocialListUserEntryBase
    {
        static constexpr std::string_view Name = "SocialListUserEntryBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialListInteractableEntryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_SocialName = 0x1658;
            static constexpr std::uintptr_t Text_SocialName_Hover = 0x1660;
            static constexpr std::uintptr_t Text_RichPresence = 0x1668;
            static constexpr std::uintptr_t Text_RichPresence_Hover = 0x1670;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Text_SocialName", 0x1658, "ObjectProperty"},
            {"Text_SocialName_Hover", 0x1660, "ObjectProperty"},
            {"Text_RichPresence", 0x1668, "ObjectProperty"},
            {"Text_RichPresence_Hover", 0x1670, "ObjectProperty"},
        }};
    };

    struct SocialNameTextBlock
    {
        static constexpr std::string_view Name = "SocialNameTextBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonRichTextBlock";
        struct Offsets
        {
            static constexpr std::uintptr_t SocialUser = 0x7F0;
            static constexpr std::uintptr_t MinDesiredSize = 0x7F8;
            static constexpr std::uintptr_t MaxDesiredSize = 0x7FC;
            static constexpr std::uintptr_t bShowSecondName = 0x800;
            static constexpr std::uintptr_t PlatformIconDisplayRule = 0x801;
            static constexpr std::uintptr_t bWrapToNextLine = 0x802;
            static constexpr std::uintptr_t SecondNameColor = 0x804;
            static constexpr std::uintptr_t SecondNameFontSize = 0x808;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SocialUser", 0x7F0, "ObjectProperty"},
            {"MinDesiredSize", 0x7F8, "FloatProperty"},
            {"MaxDesiredSize", 0x7FC, "FloatProperty"},
            {"bShowSecondName", 0x800, "BoolProperty"},
            {"PlatformIconDisplayRule", 0x801, "EnumProperty"},
            {"bWrapToNextLine", 0x802, "BoolProperty"},
            {"SecondNameColor", 0x804, "StructProperty"},
            {"SecondNameFontSize", 0x808, "IntProperty"},
        }};
    };

    struct SocialUserListHeaderEntry
    {
        static constexpr std::string_view Name = "SocialUserListHeaderEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialListEntryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_ListName = 0x1640;
            static constexpr std::uintptr_t Text_NumEntries = 0x1648;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text_ListName", 0x1640, "ObjectProperty"},
            {"Text_NumEntries", 0x1648, "ObjectProperty"},
        }};
    };

    struct SocialUserListView
    {
        static constexpr std::string_view Name = "SocialUserListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialUserListViewBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveActionMenu = 0x4C8;
            static constexpr std::uintptr_t CachedActionMenuPool = 0x4D0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveActionMenu", 0x4C8, "ObjectProperty"},
            {"CachedActionMenuPool", 0x4D0, "MapProperty"},
        }};
    };

    struct SocialUserListViewBase
    {
        static constexpr std::string_view Name = "SocialUserListViewBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListViewBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EntrySpacing = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntrySpacing", 0x478, "FloatProperty"},
        }};
    };

    struct SocialUserTreeView
    {
        static constexpr std::string_view Name = "SocialUserTreeView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialUserListView";
        struct Offsets
        {
            static constexpr std::uintptr_t UserEntryWidgetClass = 0x510;
            static constexpr std::uintptr_t InviteEntryWidgetClass = 0x518;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UserEntryWidgetClass", 0x510, "ClassProperty"},
            {"InviteEntryWidgetClass", 0x518, "ClassProperty"},
        }};
    };

}
