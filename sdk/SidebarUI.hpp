#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SidebarUI
{
    struct FortFriendRequestsVM
    {
        static constexpr std::string_view Name = "FortFriendRequestsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGameFeatureAction_SidebarUICleanup
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_SidebarUICleanup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortLocalPlayerProfileVM
    {
        static constexpr std::string_view Name = "FortLocalPlayerProfileVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSocialUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnlineStatusVM = 0x78;
            static constexpr std::uintptr_t ParticipationSettingVM = 0x80;
            static constexpr std::uintptr_t FriendInvitePolicySettingVM = 0x88;
            static constexpr std::uintptr_t ShowMutualFriendsSettingVM = 0x90;
            static constexpr std::uintptr_t PartyJoinabilitySettingVM = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnlineStatusVM", 0x78, "ObjectProperty"},
            {"ParticipationSettingVM", 0x80, "ObjectProperty"},
            {"FriendInvitePolicySettingVM", 0x88, "ObjectProperty"},
            {"ShowMutualFriendsSettingVM", 0x90, "ObjectProperty"},
            {"PartyJoinabilitySettingVM", 0x98, "ObjectProperty"},
        }};
    };

    struct FortNicknameVM
    {
        static constexpr std::string_view Name = "FortNicknameVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSocialUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t NicknameText = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NicknameText", 0x78, "TextProperty"},
        }};
    };

    struct FortScrollNavigationPanel
    {
        static constexpr std::string_view Name = "FortScrollNavigationPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerticalBox";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slots", 0x168, "ArrayProperty"},
        }};
    };

    struct FortSidebarConfirmButtonVM
    {
        static constexpr std::string_view Name = "FortSidebarConfirmButtonVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x68;
            static constexpr std::uintptr_t ActionType = 0x78;
            static constexpr std::uintptr_t ActionButtonStyle = 0x79;
            static constexpr std::uintptr_t ActionID = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Text", 0x68, "TextProperty"},
            {"ActionType", 0x78, "EnumProperty"},
            {"ActionButtonStyle", 0x79, "EnumProperty"},
            {"ActionID", 0x7C, "NameProperty"},
        }};
    };

    struct FortSidebarConfirmPanelVM
    {
        static constexpr std::string_view Name = "FortSidebarConfirmPanelVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x68;
            static constexpr std::uintptr_t Description = 0x78;
            static constexpr std::uintptr_t SubDescription = 0x88;
            static constexpr std::uintptr_t Buttons = 0x98;
            static constexpr std::uintptr_t NavigateBackTag = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Title", 0x68, "TextProperty"},
            {"Description", 0x78, "TextProperty"},
            {"SubDescription", 0x88, "TextProperty"},
            {"Buttons", 0x98, "ArrayProperty"},
            {"NavigateBackTag", 0xA8, "StructProperty"},
        }};
    };

    struct FortSidebarNavigationPoint
    {
        static constexpr std::string_view Name = "FortSidebarNavigationPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NavigationTag = 0x28;
            static constexpr std::uintptr_t AnimationHints = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NavigationTag", 0x28, "StructProperty"},
            {"AnimationHints", 0x30, "StructProperty"},
        }};
    };

    struct FortSidebarNavigationVM
    {
        static constexpr std::string_view Name = "FortSidebarNavigationVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t NavigationStack = 0x78;
            static constexpr std::uintptr_t OverlayConfirmationActionID = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NavigationStack", 0x78, "ArrayProperty"},
            {"OverlayConfirmationActionID", 0x88, "NameProperty"},
        }};
    };

    struct FortSidebarWidgetLibrary
    {
        static constexpr std::string_view Name = "FortSidebarWidgetLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortSocialConversationPartyInviteInteractionVM
    {
        static constexpr std::string_view Name = "FortSocialConversationPartyInviteInteractionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSocialInteractionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractionType = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InteractionType", 0x78, "EnumProperty"},
        }};
    };

    struct FortSocialEpicPartyHeaderItemVM
    {
        static constexpr std::string_view Name = "FortSocialEpicPartyHeaderItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSocialHeaderItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t HeaderItemType = 0x98;
            static constexpr std::uintptr_t SocialItems = 0xA0;
            static constexpr std::uintptr_t UnfilteredSocialItems = 0xB0;
            static constexpr std::uintptr_t Interactions = 0xD0;
            static constexpr std::uintptr_t FilterTerm = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HeaderItemType", 0x98, "EnumProperty"},
            {"SocialItems", 0xA0, "ArrayProperty"},
            {"UnfilteredSocialItems", 0xB0, "ArrayProperty"},
            {"Interactions", 0xD0, "ArrayProperty"},
            {"FilterTerm", 0xE0, "StrProperty"},
        }};
    };

    struct FortSocialEpicPartyPendingInviteListVM
    {
        static constexpr std::string_view Name = "FortSocialEpicPartyPendingInviteListVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingInvites = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PendingInvites", 0x78, "ArrayProperty"},
        }};
    };

    struct FortSocialFriendsListVM
    {
        static constexpr std::string_view Name = "FortSocialFriendsListVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSocialHeaderListVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Headers = 0x78;
            static constexpr std::uintptr_t FilterTerm = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Headers", 0x78, "ArrayProperty"},
            {"FilterTerm", 0x88, "StrProperty"},
        }};
    };

    struct FortSocialHeaderItemVM
    {
        static constexpr std::string_view Name = "FortSocialHeaderItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t HeaderItemType = 0x98;
            static constexpr std::uintptr_t SocialItems = 0xA0;
            static constexpr std::uintptr_t UnfilteredSocialItems = 0xB0;
            static constexpr std::uintptr_t Interactions = 0xD0;
            static constexpr std::uintptr_t FilterTerm = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HeaderItemType", 0x98, "EnumProperty"},
            {"SocialItems", 0xA0, "ArrayProperty"},
            {"UnfilteredSocialItems", 0xB0, "ArrayProperty"},
            {"Interactions", 0xD0, "ArrayProperty"},
            {"FilterTerm", 0xE0, "StrProperty"},
        }};
    };

    struct FortSocialHeaderListVM
    {
        static constexpr std::string_view Name = "FortSocialHeaderListVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Headers = 0x78;
            static constexpr std::uintptr_t FilterTerm = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Headers", 0x78, "ArrayProperty"},
            {"FilterTerm", 0x88, "StrProperty"},
        }};
    };

    struct FortSocialInteractionVM
    {
        static constexpr std::string_view Name = "FortSocialInteractionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractionType = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InteractionType", 0x78, "EnumProperty"},
        }};
    };

    struct FortSocialItemVM
    {
        static constexpr std::string_view Name = "FortSocialItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetUser = 0x90;
            static constexpr std::uintptr_t ItemIndex = 0xA8;
            static constexpr std::uintptr_t HeaderItemType = 0xAC;
            static constexpr std::uintptr_t Interactions = 0xB0;
            static constexpr std::uintptr_t bIsChecked = 0xC0;
            static constexpr std::uintptr_t TargetConversation = 0xF0;
            static constexpr std::uintptr_t FriendRequests = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TargetUser", 0x90, "WeakObjectProperty"},
            {"ItemIndex", 0xA8, "IntProperty"},
            {"HeaderItemType", 0xAC, "EnumProperty"},
            {"Interactions", 0xB0, "ArrayProperty"},
            {"bIsChecked", 0xC0, "BoolProperty"},
            {"TargetConversation", 0xF0, "ObjectProperty"},
            {"FriendRequests", 0xF8, "ObjectProperty"},
        }};
    };

    struct FortSocialPlayerSearchVM
    {
        static constexpr std::string_view Name = "FortSocialPlayerSearchVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSocialHeaderListVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bSearchInProgress = 0xC8;
            static constexpr std::uintptr_t bFriendshipActionOnCooldown = 0xC9;
            static constexpr std::uintptr_t FriendshipActionAvailableAt = 0xD0;
            static constexpr std::uintptr_t UserSearchResultsHeader = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bSearchInProgress", 0xC8, "BoolProperty"},
            {"bFriendshipActionOnCooldown", 0xC9, "BoolProperty"},
            {"FriendshipActionAvailableAt", 0xD0, "StructProperty"},
            {"UserSearchResultsHeader", 0xD8, "ObjectProperty"},
        }};
    };

    struct FortSocialUserMutualFriendsVM
    {
        static constexpr std::string_view Name = "FortSocialUserMutualFriendsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSocialUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNumberOfDisplayedMutualFriends = 0x78;
            static constexpr std::uintptr_t MutualFriends = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxNumberOfDisplayedMutualFriends", 0x78, "IntProperty"},
            {"MutualFriends", 0x80, "ArrayProperty"},
        }};
    };

}
