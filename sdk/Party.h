/**
 * decamp dumper generated SDK
 * Package: /Script/Party
 */
#pragma once
#include "Basic.h"

// /Script/Party.OnlinePartyRepDataBase
// Kind: ScriptStruct; super: none
struct FOnlinePartyRepDataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Party.PartyMemberJoinInProgressData
// Kind: ScriptStruct; super: none
struct FPartyMemberJoinInProgressData
{
public:
    std::uint8_t Request[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    TArray<void*> Responses; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPartyMemberJoinInProgressData, Request) == 0, "Offset mismatch for FPartyMemberJoinInProgressData::Request");
static_assert(offsetof(FPartyMemberJoinInProgressData, Responses) == 56, "Offset mismatch for FPartyMemberJoinInProgressData::Responses");

// /Script/Party.PartyMemberJoinInProgressRequest
// Kind: ScriptStruct; super: none
struct FPartyMemberJoinInProgressRequest
{
public:
    std::uint8_t Target[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::int64_t time; // 0x0030 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FPartyMemberJoinInProgressRequest, Target) == 0, "Offset mismatch for FPartyMemberJoinInProgressRequest::Target");
static_assert(offsetof(FPartyMemberJoinInProgressRequest, time) == 48, "Offset mismatch for FPartyMemberJoinInProgressRequest::time");

// /Script/Party.PartyMemberJoinInProgressResponse
// Kind: ScriptStruct; super: none
struct FPartyMemberJoinInProgressResponse
{
public:
    std::uint8_t Requester[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::int64_t RequestTime; // 0x0030 (Size: 0x8, Type: Int64Property)
    std::int64_t ResponseTime; // 0x0038 (Size: 0x8, Type: Int64Property)
    std::uint8_t DenialReason; // 0x0040 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FPartyMemberJoinInProgressResponse, Requester) == 0, "Offset mismatch for FPartyMemberJoinInProgressResponse::Requester");
static_assert(offsetof(FPartyMemberJoinInProgressResponse, RequestTime) == 48, "Offset mismatch for FPartyMemberJoinInProgressResponse::RequestTime");
static_assert(offsetof(FPartyMemberJoinInProgressResponse, ResponseTime) == 56, "Offset mismatch for FPartyMemberJoinInProgressResponse::ResponseTime");
static_assert(offsetof(FPartyMemberJoinInProgressResponse, DenialReason) == 64, "Offset mismatch for FPartyMemberJoinInProgressResponse::DenialReason");

// /Script/Party.PartyMemberPlatformData
// Kind: ScriptStruct; super: none
struct FPartyMemberPlatformData
{
public:
    std::uint8_t Platform[0x58]; // 0x0000 (Size: 0x58, Type: StructProperty)
    std::uint8_t UniqueID[0x30]; // 0x0058 (Size: 0x30, Type: StructProperty)
    FString SessionID; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPartyMemberPlatformData, Platform) == 0, "Offset mismatch for FPartyMemberPlatformData::Platform");
static_assert(offsetof(FPartyMemberPlatformData, UniqueID) == 88, "Offset mismatch for FPartyMemberPlatformData::UniqueID");
static_assert(offsetof(FPartyMemberPlatformData, SessionID) == 136, "Offset mismatch for FPartyMemberPlatformData::SessionID");

// /Script/Party.PartyMemberRepData
// Kind: ScriptStruct; super: OnlinePartyRepDataBase
struct FPartyMemberRepData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PlatformData[0x128]; // 0x0028 (Size: 0x128, Type: StructProperty)
    std::uint8_t CrossplayPreference; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x37]; // 0x0151
    FString JoinMethod; // 0x0188 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x30]; // 0x0198
    std::uint8_t JoinInProgressData[0x1]; // 0x01C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPartyMemberRepData, PlatformData) == 40, "Offset mismatch for FPartyMemberRepData::PlatformData");
static_assert(offsetof(FPartyMemberRepData, CrossplayPreference) == 336, "Offset mismatch for FPartyMemberRepData::CrossplayPreference");
static_assert(offsetof(FPartyMemberRepData, JoinMethod) == 392, "Offset mismatch for FPartyMemberRepData::JoinMethod");
static_assert(offsetof(FPartyMemberRepData, JoinInProgressData) == 456, "Offset mismatch for FPartyMemberRepData::JoinInProgressData");

// /Script/Party.PartyPlatformSessionInfo
// Kind: ScriptStruct; super: none
struct FPartyPlatformSessionInfo
{
public:
    FString SessionType; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString SessionID; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t OwnerPrimaryId[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPartyPlatformSessionInfo, SessionType) == 0, "Offset mismatch for FPartyPlatformSessionInfo::SessionType");
static_assert(offsetof(FPartyPlatformSessionInfo, SessionID) == 16, "Offset mismatch for FPartyPlatformSessionInfo::SessionID");
static_assert(offsetof(FPartyPlatformSessionInfo, OwnerPrimaryId) == 32, "Offset mismatch for FPartyPlatformSessionInfo::OwnerPrimaryId");

// /Script/Party.PartyPrivacySettings
// Kind: ScriptStruct; super: none
struct FPartyPrivacySettings
{
public:
    std::uint8_t PartyType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PartyInviteRestriction; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyLeaderFriendsCanJoin; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPartyPrivacySettings, PartyType) == 0, "Offset mismatch for FPartyPrivacySettings::PartyType");
static_assert(offsetof(FPartyPrivacySettings, PartyInviteRestriction) == 1, "Offset mismatch for FPartyPrivacySettings::PartyInviteRestriction");
static_assert(offsetof(FPartyPrivacySettings, bOnlyLeaderFriendsCanJoin) == 2, "Offset mismatch for FPartyPrivacySettings::bOnlyLeaderFriendsCanJoin");

// /Script/Party.PartyRepData
// Kind: ScriptStruct; super: OnlinePartyRepDataBase
struct FPartyRepData
{
public:
    std::uint8_t Pad_0000[0x21]; // 0x0000
    std::uint8_t PrivacySettings[0x37]; // 0x0021 (Size: 0x37, Type: StructProperty)
    TArray<void*> PlatformSessions; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPartyRepData, PrivacySettings) == 33, "Offset mismatch for FPartyRepData::PrivacySettings");
static_assert(offsetof(FPartyRepData, PlatformSessions) == 88, "Offset mismatch for FPartyRepData::PlatformSessions");

// /Script/Party.SocialChatChannelConfig
// Kind: ScriptStruct; super: none
struct FSocialChatChannelConfig
{
public:
    void* SocialUser; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0008
    TArray<void*> ListenChannels; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSocialChatChannelConfig, SocialUser) == 0, "Offset mismatch for FSocialChatChannelConfig::SocialUser");
static_assert(offsetof(FSocialChatChannelConfig, ListenChannels) == 24, "Offset mismatch for FSocialChatChannelConfig::ListenChannels");

// /Script/Party.SocialPlatformDescription
// Kind: ScriptStruct; super: none
struct FSocialPlatformDescription
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PlatformType; // 0x0010 (Size: 0x10, Type: StrProperty)
    FName OnlineSubsystem; // 0x0020 (Size: 0x8, Type: NameProperty)
    FString SessionType; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString ExternalAccountType; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString CrossplayPool; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSocialPlatformDescription, Name) == 0, "Offset mismatch for FSocialPlatformDescription::Name");
static_assert(offsetof(FSocialPlatformDescription, PlatformType) == 16, "Offset mismatch for FSocialPlatformDescription::PlatformType");
static_assert(offsetof(FSocialPlatformDescription, OnlineSubsystem) == 32, "Offset mismatch for FSocialPlatformDescription::OnlineSubsystem");
static_assert(offsetof(FSocialPlatformDescription, SessionType) == 40, "Offset mismatch for FSocialPlatformDescription::SessionType");
static_assert(offsetof(FSocialPlatformDescription, ExternalAccountType) == 56, "Offset mismatch for FSocialPlatformDescription::ExternalAccountType");
static_assert(offsetof(FSocialPlatformDescription, CrossplayPool) == 72, "Offset mismatch for FSocialPlatformDescription::CrossplayPool");

// /Script/Party.UserPlatform
// Kind: ScriptStruct; super: none
struct FUserPlatform
{
public:
    std::uint8_t PlatformDescription[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUserPlatform, PlatformDescription) == 0, "Offset mismatch for FUserPlatform::PlatformDescription");

// /Script/Party.Chatroom
// Kind: Class; super: Object
class UChatroom
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CurrentChatRoomId; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::int32_t MaxChatRoomRetries; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t NumChatRoomRetries; // 0x003C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UChatroom, CurrentChatRoomId) == 40, "Offset mismatch for UChatroom::CurrentChatRoomId");
static_assert(offsetof(UChatroom, MaxChatRoomRetries) == 56, "Offset mismatch for UChatroom::MaxChatRoomRetries");
static_assert(offsetof(UChatroom, NumChatRoomRetries) == 60, "Offset mismatch for UChatroom::NumChatRoomRetries");

// /Script/Party.PartyMember
// Kind: Class; super: Object
class UPartyMember
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* DefaultSocialUser; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0090
    std::uint8_t bEnableDebugInitializer; // 0x0091 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPartyMember, DefaultSocialUser) == 136, "Offset mismatch for UPartyMember::DefaultSocialUser");
static_assert(offsetof(UPartyMember, bEnableDebugInitializer) == 145, "Offset mismatch for UPartyMember::bEnableDebugInitializer");

// /Script/Party.SocialChatChannel
// Kind: Class; super: Object
class USocialChatChannel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Party.SocialChatManager
// Kind: Class; super: Object
class USocialChatManager
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> DirectChannelsByTargetUser; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ChatRoomsById; // 0x0048 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ReadOnlyChannelsByDisplayName; // 0x0058 (Size: 0x10, Type: MapProperty)
    std::uint8_t bEnableChatSlashCommands; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    TMap<void*, void*> GroupChannels; // 0x0070 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USocialChatManager, DirectChannelsByTargetUser) == 56, "Offset mismatch for USocialChatManager::DirectChannelsByTargetUser");
static_assert(offsetof(USocialChatManager, ChatRoomsById) == 72, "Offset mismatch for USocialChatManager::ChatRoomsById");
static_assert(offsetof(USocialChatManager, ReadOnlyChannelsByDisplayName) == 88, "Offset mismatch for USocialChatManager::ReadOnlyChannelsByDisplayName");
static_assert(offsetof(USocialChatManager, bEnableChatSlashCommands) == 104, "Offset mismatch for USocialChatManager::bEnableChatSlashCommands");
static_assert(offsetof(USocialChatManager, GroupChannels) == 112, "Offset mismatch for USocialChatManager::GroupChannels");

// /Script/Party.SocialChatRoom
// Kind: Class; super: SocialChatChannel
class USocialChatRoom
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Party.SocialDebugTools
// Kind: Class; super: Object
class USocialDebugTools
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Party.SocialGroupChannel
// Kind: Class; super: Object
class USocialGroupChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SocialUser; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GroupID[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0060 (Size: 0x10, Type: TextProperty)
    TArray<void*> Members; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USocialGroupChannel, SocialUser) == 40, "Offset mismatch for USocialGroupChannel::SocialUser");
static_assert(offsetof(USocialGroupChannel, GroupID) == 48, "Offset mismatch for USocialGroupChannel::GroupID");
static_assert(offsetof(USocialGroupChannel, DisplayName) == 96, "Offset mismatch for USocialGroupChannel::DisplayName");
static_assert(offsetof(USocialGroupChannel, Members) == 112, "Offset mismatch for USocialGroupChannel::Members");

// /Script/Party.SocialManager
// Kind: Class; super: Object
class USocialManager
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> SocialToolkits; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    void* SocialDebugTools; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PresenceFrameworkInstance[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t PresenceFrameworkAdapterInstance[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAcceptInvitationsFromAwayUsers; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USocialManager, SocialToolkits) == 88, "Offset mismatch for USocialManager::SocialToolkits");
static_assert(offsetof(USocialManager, SocialDebugTools) == 104, "Offset mismatch for USocialManager::SocialDebugTools");
static_assert(offsetof(USocialManager, PresenceFrameworkInstance) == 112, "Offset mismatch for USocialManager::PresenceFrameworkInstance");
static_assert(offsetof(USocialManager, PresenceFrameworkAdapterInstance) == 116, "Offset mismatch for USocialManager::PresenceFrameworkAdapterInstance");
static_assert(offsetof(USocialManager, bAcceptInvitationsFromAwayUsers) == 120, "Offset mismatch for USocialManager::bAcceptInvitationsFromAwayUsers");

// /Script/Party.SocialParty
// Kind: Class; super: Object
class USocialParty
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* ReservationBeaconClientClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
    void* SpectatorBeaconClientClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0088
    std::uint8_t OwningLocalUserId[0x30]; // 0x0098 (Size: 0x30, Type: StructProperty)
    std::uint8_t CurrentLeaderId[0x30]; // 0x00C8 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> PartyMembersById; // 0x00F8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0108
    double PlatformUserInviteCooldown; // 0x0118 (Size: 0x8, Type: DoubleProperty)
    double PrimaryUserInviteCooldown; // 0x0120 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0003[0x60]; // 0x0128
    TWeakObjectPtr<void> ReservationBeaconClient; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0190
    TWeakObjectPtr<void> SpectatorBeaconClient; // 0x0194 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0005[0x2C]; // 0x019C
    float JoinInProgressTimerRate; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::int32_t JoinInProgressRequestTimeout; // 0x01CC (Size: 0x4, Type: IntProperty)
    std::int32_t JoinInProgressResponseTimeout; // 0x01D0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxJoinInProgressResponses; // 0x01D4 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxJoinInProgressResponsesPerMember; // 0x01D8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USocialParty, ReservationBeaconClientClass) == 120, "Offset mismatch for USocialParty::ReservationBeaconClientClass");
static_assert(offsetof(USocialParty, SpectatorBeaconClientClass) == 128, "Offset mismatch for USocialParty::SpectatorBeaconClientClass");
static_assert(offsetof(USocialParty, OwningLocalUserId) == 152, "Offset mismatch for USocialParty::OwningLocalUserId");
static_assert(offsetof(USocialParty, CurrentLeaderId) == 200, "Offset mismatch for USocialParty::CurrentLeaderId");
static_assert(offsetof(USocialParty, PartyMembersById) == 248, "Offset mismatch for USocialParty::PartyMembersById");
static_assert(offsetof(USocialParty, PlatformUserInviteCooldown) == 280, "Offset mismatch for USocialParty::PlatformUserInviteCooldown");
static_assert(offsetof(USocialParty, PrimaryUserInviteCooldown) == 288, "Offset mismatch for USocialParty::PrimaryUserInviteCooldown");
static_assert(offsetof(USocialParty, ReservationBeaconClient) == 392, "Offset mismatch for USocialParty::ReservationBeaconClient");
static_assert(offsetof(USocialParty, SpectatorBeaconClient) == 404, "Offset mismatch for USocialParty::SpectatorBeaconClient");
static_assert(offsetof(USocialParty, JoinInProgressTimerRate) == 456, "Offset mismatch for USocialParty::JoinInProgressTimerRate");
static_assert(offsetof(USocialParty, JoinInProgressRequestTimeout) == 460, "Offset mismatch for USocialParty::JoinInProgressRequestTimeout");
static_assert(offsetof(USocialParty, JoinInProgressResponseTimeout) == 464, "Offset mismatch for USocialParty::JoinInProgressResponseTimeout");
static_assert(offsetof(USocialParty, MaxJoinInProgressResponses) == 468, "Offset mismatch for USocialParty::MaxJoinInProgressResponses");
static_assert(offsetof(USocialParty, MaxJoinInProgressResponsesPerMember) == 472, "Offset mismatch for USocialParty::MaxJoinInProgressResponsesPerMember");

// /Script/Party.SocialPartyChatRoom
// Kind: Class; super: SocialChatRoom
class USocialPartyChatRoom
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Party.SocialPrivateMessageChannel
// Kind: Class; super: SocialChatChannel
class USocialPrivateMessageChannel
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TargetUser; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USocialPrivateMessageChannel, TargetUser) == 224, "Offset mismatch for USocialPrivateMessageChannel::TargetUser");

// /Script/Party.SocialReadOnlyChatChannel
// Kind: Class; super: SocialChatChannel
class USocialReadOnlyChatChannel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Party.SocialSettings
// Kind: Class; super: Object
class USocialSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> OssNamesWithEnvironmentIdPrefix; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::int32_t DefaultMaxPartySize; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t bPreferPlatformInvites; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMustSendPrimaryInvites; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMustAlwaysSendPlatformInvites; // 0x003E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLeavePartyOnDisconnect; // 0x003F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetDesiredPrivacyOnLocalPlayerBecomesLeader; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    float UserListAutoUpdateRate; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinNicknameLength; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNicknameLength; // 0x004C (Size: 0x4, Type: IntProperty)
    TArray<void*> SocialPlatformDescriptions; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SonyOSSNames; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USocialSettings, OssNamesWithEnvironmentIdPrefix) == 40, "Offset mismatch for USocialSettings::OssNamesWithEnvironmentIdPrefix");
static_assert(offsetof(USocialSettings, DefaultMaxPartySize) == 56, "Offset mismatch for USocialSettings::DefaultMaxPartySize");
static_assert(offsetof(USocialSettings, bPreferPlatformInvites) == 60, "Offset mismatch for USocialSettings::bPreferPlatformInvites");
static_assert(offsetof(USocialSettings, bMustSendPrimaryInvites) == 61, "Offset mismatch for USocialSettings::bMustSendPrimaryInvites");
static_assert(offsetof(USocialSettings, bMustAlwaysSendPlatformInvites) == 62, "Offset mismatch for USocialSettings::bMustAlwaysSendPlatformInvites");
static_assert(offsetof(USocialSettings, bLeavePartyOnDisconnect) == 63, "Offset mismatch for USocialSettings::bLeavePartyOnDisconnect");
static_assert(offsetof(USocialSettings, bSetDesiredPrivacyOnLocalPlayerBecomesLeader) == 64, "Offset mismatch for USocialSettings::bSetDesiredPrivacyOnLocalPlayerBecomesLeader");
static_assert(offsetof(USocialSettings, UserListAutoUpdateRate) == 68, "Offset mismatch for USocialSettings::UserListAutoUpdateRate");
static_assert(offsetof(USocialSettings, MinNicknameLength) == 72, "Offset mismatch for USocialSettings::MinNicknameLength");
static_assert(offsetof(USocialSettings, MaxNicknameLength) == 76, "Offset mismatch for USocialSettings::MaxNicknameLength");
static_assert(offsetof(USocialSettings, SocialPlatformDescriptions) == 80, "Offset mismatch for USocialSettings::SocialPlatformDescriptions");
static_assert(offsetof(USocialSettings, SonyOSSNames) == 96, "Offset mismatch for USocialSettings::SonyOSSNames");

// /Script/Party.SocialSettingsXbl
// Kind: Class; super: Object
class USocialSettingsXbl
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bApplyPlatformInvitePermissionsLive; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyPlatformInvitePermissionsCrossplay; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USocialSettingsXbl, bApplyPlatformInvitePermissionsLive) == 40, "Offset mismatch for USocialSettingsXbl::bApplyPlatformInvitePermissionsLive");
static_assert(offsetof(USocialSettingsXbl, bApplyPlatformInvitePermissionsCrossplay) == 41, "Offset mismatch for USocialSettingsXbl::bApplyPlatformInvitePermissionsCrossplay");

// /Script/Party.SocialToolkit
// Kind: Class; super: Object
class USocialToolkit
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* SocialChatManager; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* LocalUser; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AllUsers; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00A0
    std::uint8_t bRemoveInvalidatedUserFromMaps; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00C1
    TWeakObjectPtr<void> LocalPlayerOwner; // 0x00C4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USocialToolkit, SocialChatManager) == 128, "Offset mismatch for USocialToolkit::SocialChatManager");
static_assert(offsetof(USocialToolkit, LocalUser) == 136, "Offset mismatch for USocialToolkit::LocalUser");
static_assert(offsetof(USocialToolkit, AllUsers) == 144, "Offset mismatch for USocialToolkit::AllUsers");
static_assert(offsetof(USocialToolkit, bRemoveInvalidatedUserFromMaps) == 192, "Offset mismatch for USocialToolkit::bRemoveInvalidatedUserFromMaps");
static_assert(offsetof(USocialToolkit, LocalPlayerOwner) == 196, "Offset mismatch for USocialToolkit::LocalPlayerOwner");

// /Script/Party.SocialUser
// Kind: Class; super: Object
class USocialUser
{
public:
    std::uint8_t Opaque[1];
};
