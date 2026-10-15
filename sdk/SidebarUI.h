/**
 * decamp dumper generated SDK
 * Package: /Script/SidebarUI
 */
#pragma once
#include "Basic.h"

// /Script/SidebarUI.FortFriendRequestsVM
// Kind: Class; super: MVVMViewModelBase
class UFortFriendRequestsVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SidebarUI.FortGameFeatureAction_SidebarUICleanup
// Kind: Class; super: FortUIGameFeatureAction
class UFortGameFeatureAction_SidebarUICleanup
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SidebarUI.FortLocalPlayerProfileVM
// Kind: Class; super: FortSocialUserViewModel
class UFortLocalPlayerProfileVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* OnlineStatusVM; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* ParticipationSettingVM; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* FriendInvitePolicySettingVM; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* ShowMutualFriendsSettingVM; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* PartyJoinabilitySettingVM; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortLocalPlayerProfileVM, OnlineStatusVM) == 120, "Offset mismatch for UFortLocalPlayerProfileVM::OnlineStatusVM");
static_assert(offsetof(UFortLocalPlayerProfileVM, ParticipationSettingVM) == 128, "Offset mismatch for UFortLocalPlayerProfileVM::ParticipationSettingVM");
static_assert(offsetof(UFortLocalPlayerProfileVM, FriendInvitePolicySettingVM) == 136, "Offset mismatch for UFortLocalPlayerProfileVM::FriendInvitePolicySettingVM");
static_assert(offsetof(UFortLocalPlayerProfileVM, ShowMutualFriendsSettingVM) == 144, "Offset mismatch for UFortLocalPlayerProfileVM::ShowMutualFriendsSettingVM");
static_assert(offsetof(UFortLocalPlayerProfileVM, PartyJoinabilitySettingVM) == 152, "Offset mismatch for UFortLocalPlayerProfileVM::PartyJoinabilitySettingVM");

// /Script/SidebarUI.FortNicknameVM
// Kind: Class; super: FortSocialUserViewModel
class UFortNicknameVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FText NicknameText; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortNicknameVM, NicknameText) == 120, "Offset mismatch for UFortNicknameVM::NicknameText");

// /Script/SidebarUI.FortScrollNavigationPanel
// Kind: Class; super: VerticalBox
class UFortScrollNavigationPanel
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Slots; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortScrollNavigationPanel, Slots) == 360, "Offset mismatch for UFortScrollNavigationPanel::Slots");

// /Script/SidebarUI.FortSidebarConfirmButtonVM
// Kind: Class; super: MVVMViewModelBase
class UFortSidebarConfirmButtonVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Text[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t ActionType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ActionButtonStyle; // 0x0079 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x007A
    FName ActionID; // 0x007C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortSidebarConfirmButtonVM, Text) == 104, "Offset mismatch for UFortSidebarConfirmButtonVM::Text");
static_assert(offsetof(UFortSidebarConfirmButtonVM, ActionType) == 120, "Offset mismatch for UFortSidebarConfirmButtonVM::ActionType");
static_assert(offsetof(UFortSidebarConfirmButtonVM, ActionButtonStyle) == 121, "Offset mismatch for UFortSidebarConfirmButtonVM::ActionButtonStyle");
static_assert(offsetof(UFortSidebarConfirmButtonVM, ActionID) == 124, "Offset mismatch for UFortSidebarConfirmButtonVM::ActionID");

// /Script/SidebarUI.FortSidebarConfirmPanelVM
// Kind: Class; super: MVVMViewModelBase
class UFortSidebarConfirmPanelVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Title[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t SubDescription[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    TArray<void*> Buttons; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NavigateBackTag[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortSidebarConfirmPanelVM, Title) == 104, "Offset mismatch for UFortSidebarConfirmPanelVM::Title");
static_assert(offsetof(UFortSidebarConfirmPanelVM, Description) == 120, "Offset mismatch for UFortSidebarConfirmPanelVM::Description");
static_assert(offsetof(UFortSidebarConfirmPanelVM, SubDescription) == 136, "Offset mismatch for UFortSidebarConfirmPanelVM::SubDescription");
static_assert(offsetof(UFortSidebarConfirmPanelVM, Buttons) == 152, "Offset mismatch for UFortSidebarConfirmPanelVM::Buttons");
static_assert(offsetof(UFortSidebarConfirmPanelVM, NavigateBackTag) == 168, "Offset mismatch for UFortSidebarConfirmPanelVM::NavigateBackTag");

// /Script/SidebarUI.FortSidebarNavigationPoint
// Kind: Class; super: Object
class UFortSidebarNavigationPoint
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NavigationTag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimationHints[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortSidebarNavigationPoint, NavigationTag) == 40, "Offset mismatch for UFortSidebarNavigationPoint::NavigationTag");
static_assert(offsetof(UFortSidebarNavigationPoint, AnimationHints) == 48, "Offset mismatch for UFortSidebarNavigationPoint::AnimationHints");

// /Script/SidebarUI.FortSidebarNavigationVM
// Kind: Class; super: FortPerUserViewModel
class UFortSidebarNavigationVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> NavigationStack; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    FName OverlayConfirmationActionID; // 0x0088 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortSidebarNavigationVM, NavigationStack) == 120, "Offset mismatch for UFortSidebarNavigationVM::NavigationStack");
static_assert(offsetof(UFortSidebarNavigationVM, OverlayConfirmationActionID) == 136, "Offset mismatch for UFortSidebarNavigationVM::OverlayConfirmationActionID");

// /Script/SidebarUI.FortSocialConversationPartyInviteInteractionVM
// Kind: Class; super: FortSocialInteractionVM
class UFortSocialConversationPartyInviteInteractionVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t InteractionType; // 0x0078 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortSocialConversationPartyInviteInteractionVM, InteractionType) == 120, "Offset mismatch for UFortSocialConversationPartyInviteInteractionVM::InteractionType");

// /Script/SidebarUI.FortSocialEpicPartyHeaderItemVM
// Kind: Class; super: FortSocialHeaderItemVM
class UFortSocialEpicPartyHeaderItemVM
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t HeaderItemType; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0099
    TArray<void*> SocialItems; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnfilteredSocialItems; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x00C0
    TArray<void*> Interactions; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    FString FilterTerm; // 0x00E0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortSocialEpicPartyHeaderItemVM, HeaderItemType) == 152, "Offset mismatch for UFortSocialEpicPartyHeaderItemVM::HeaderItemType");
static_assert(offsetof(UFortSocialEpicPartyHeaderItemVM, SocialItems) == 160, "Offset mismatch for UFortSocialEpicPartyHeaderItemVM::SocialItems");
static_assert(offsetof(UFortSocialEpicPartyHeaderItemVM, UnfilteredSocialItems) == 176, "Offset mismatch for UFortSocialEpicPartyHeaderItemVM::UnfilteredSocialItems");
static_assert(offsetof(UFortSocialEpicPartyHeaderItemVM, Interactions) == 208, "Offset mismatch for UFortSocialEpicPartyHeaderItemVM::Interactions");
static_assert(offsetof(UFortSocialEpicPartyHeaderItemVM, FilterTerm) == 224, "Offset mismatch for UFortSocialEpicPartyHeaderItemVM::FilterTerm");

// /Script/SidebarUI.FortSocialEpicPartyPendingInviteListVM
// Kind: Class; super: FortPerUserViewModel
class UFortSocialEpicPartyPendingInviteListVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> PendingInvites; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSocialEpicPartyPendingInviteListVM, PendingInvites) == 120, "Offset mismatch for UFortSocialEpicPartyPendingInviteListVM::PendingInvites");

// /Script/SidebarUI.FortSocialFriendsListVM
// Kind: Class; super: FortSocialHeaderListVM
class UFortSocialFriendsListVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Headers; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    FString FilterTerm; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortSocialFriendsListVM, Headers) == 120, "Offset mismatch for UFortSocialFriendsListVM::Headers");
static_assert(offsetof(UFortSocialFriendsListVM, FilterTerm) == 136, "Offset mismatch for UFortSocialFriendsListVM::FilterTerm");

// /Script/SidebarUI.FortSocialHeaderItemVM
// Kind: Class; super: FortPerUserViewModel
class UFortSocialHeaderItemVM
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t HeaderItemType; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0099
    TArray<void*> SocialItems; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnfilteredSocialItems; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x00C0
    TArray<void*> Interactions; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    FString FilterTerm; // 0x00E0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortSocialHeaderItemVM, HeaderItemType) == 152, "Offset mismatch for UFortSocialHeaderItemVM::HeaderItemType");
static_assert(offsetof(UFortSocialHeaderItemVM, SocialItems) == 160, "Offset mismatch for UFortSocialHeaderItemVM::SocialItems");
static_assert(offsetof(UFortSocialHeaderItemVM, UnfilteredSocialItems) == 176, "Offset mismatch for UFortSocialHeaderItemVM::UnfilteredSocialItems");
static_assert(offsetof(UFortSocialHeaderItemVM, Interactions) == 208, "Offset mismatch for UFortSocialHeaderItemVM::Interactions");
static_assert(offsetof(UFortSocialHeaderItemVM, FilterTerm) == 224, "Offset mismatch for UFortSocialHeaderItemVM::FilterTerm");

// /Script/SidebarUI.FortSocialHeaderListVM
// Kind: Class; super: FortPerUserViewModel
class UFortSocialHeaderListVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Headers; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    FString FilterTerm; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortSocialHeaderListVM, Headers) == 120, "Offset mismatch for UFortSocialHeaderListVM::Headers");
static_assert(offsetof(UFortSocialHeaderListVM, FilterTerm) == 136, "Offset mismatch for UFortSocialHeaderListVM::FilterTerm");

// /Script/SidebarUI.FortSocialInteractionVM
// Kind: Class; super: FortPerUserViewModel
class UFortSocialInteractionVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t InteractionType; // 0x0078 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortSocialInteractionVM, InteractionType) == 120, "Offset mismatch for UFortSocialInteractionVM::InteractionType");

// /Script/SidebarUI.FortSocialItemVM
// Kind: Class; super: FortPerUserViewModel
class UFortSocialItemVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TWeakObjectPtr<void> TargetUser; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0098
    std::int32_t ItemIndex; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t HeaderItemType; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00AD
    TArray<void*> Interactions; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsChecked; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2F]; // 0x00C1
    void* TargetConversation; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* FriendRequests; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSocialItemVM, TargetUser) == 144, "Offset mismatch for UFortSocialItemVM::TargetUser");
static_assert(offsetof(UFortSocialItemVM, ItemIndex) == 168, "Offset mismatch for UFortSocialItemVM::ItemIndex");
static_assert(offsetof(UFortSocialItemVM, HeaderItemType) == 172, "Offset mismatch for UFortSocialItemVM::HeaderItemType");
static_assert(offsetof(UFortSocialItemVM, Interactions) == 176, "Offset mismatch for UFortSocialItemVM::Interactions");
static_assert(offsetof(UFortSocialItemVM, bIsChecked) == 192, "Offset mismatch for UFortSocialItemVM::bIsChecked");
static_assert(offsetof(UFortSocialItemVM, TargetConversation) == 240, "Offset mismatch for UFortSocialItemVM::TargetConversation");
static_assert(offsetof(UFortSocialItemVM, FriendRequests) == 248, "Offset mismatch for UFortSocialItemVM::FriendRequests");

// /Script/SidebarUI.FortSocialPlayerSearchVM
// Kind: Class; super: FortSocialHeaderListVM
class UFortSocialPlayerSearchVM
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bSearchInProgress; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFriendshipActionOnCooldown; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00C2
    std::uint8_t FriendshipActionAvailableAt[0x8]; // 0x00C8 (Size: 0x8, Type: StructProperty)
    void* UserSearchResultsHeader; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSocialPlayerSearchVM, bSearchInProgress) == 192, "Offset mismatch for UFortSocialPlayerSearchVM::bSearchInProgress");
static_assert(offsetof(UFortSocialPlayerSearchVM, bFriendshipActionOnCooldown) == 193, "Offset mismatch for UFortSocialPlayerSearchVM::bFriendshipActionOnCooldown");
static_assert(offsetof(UFortSocialPlayerSearchVM, FriendshipActionAvailableAt) == 200, "Offset mismatch for UFortSocialPlayerSearchVM::FriendshipActionAvailableAt");
static_assert(offsetof(UFortSocialPlayerSearchVM, UserSearchResultsHeader) == 208, "Offset mismatch for UFortSocialPlayerSearchVM::UserSearchResultsHeader");

// /Script/SidebarUI.FortSocialUserMutualFriendsVM
// Kind: Class; super: FortSocialUserViewModel
class UFortSocialUserMutualFriendsVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t MaxNumberOfDisplayedMutualFriends; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x007C
    TArray<void*> MutualFriends; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSocialUserMutualFriendsVM, MaxNumberOfDisplayedMutualFriends) == 120, "Offset mismatch for UFortSocialUserMutualFriendsVM::MaxNumberOfDisplayedMutualFriends");
static_assert(offsetof(UFortSocialUserMutualFriendsVM, MutualFriends) == 128, "Offset mismatch for UFortSocialUserMutualFriendsVM::MutualFriends");
