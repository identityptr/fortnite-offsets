#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Party
{
    struct Chatroom
    {
        static constexpr std::string_view Name = "Chatroom";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentChatRoomId = 0x28;
            static constexpr std::uintptr_t MaxChatRoomRetries = 0x38;
            static constexpr std::uintptr_t NumChatRoomRetries = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentChatRoomId", 0x28, "StrProperty"},
            {"MaxChatRoomRetries", 0x38, "IntProperty"},
            {"NumChatRoomRetries", 0x3C, "IntProperty"},
        }};
    };

    struct OnlinePartyRepDataBase
    {
        static constexpr std::string_view Name = "OnlinePartyRepDataBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PartyMember
    {
        static constexpr std::string_view Name = "PartyMember";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSocialUser = 0x88;
            static constexpr std::uintptr_t bEnableDebugInitializer = 0x91;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultSocialUser", 0x88, "ObjectProperty"},
            {"bEnableDebugInitializer", 0x91, "BoolProperty"},
        }};
    };

    struct PartyMemberJoinInProgressData
    {
        static constexpr std::string_view Name = "PartyMemberJoinInProgressData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Request = 0x0;
            static constexpr std::uintptr_t Responses = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Request", 0x0, "StructProperty"},
            {"Responses", 0x38, "ArrayProperty"},
        }};
    };

    struct PartyMemberJoinInProgressRequest
    {
        static constexpr std::string_view Name = "PartyMemberJoinInProgressRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t time = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"time", 0x30, "Int64Property"},
        }};
    };

    struct PartyMemberJoinInProgressResponse
    {
        static constexpr std::string_view Name = "PartyMemberJoinInProgressResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Requester = 0x0;
            static constexpr std::uintptr_t RequestTime = 0x30;
            static constexpr std::uintptr_t ResponseTime = 0x38;
            static constexpr std::uintptr_t DenialReason = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Requester", 0x0, "StructProperty"},
            {"RequestTime", 0x30, "Int64Property"},
            {"ResponseTime", 0x38, "Int64Property"},
            {"DenialReason", 0x40, "ByteProperty"},
        }};
    };

    struct PartyMemberPlatformData
    {
        static constexpr std::string_view Name = "PartyMemberPlatformData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Platform = 0x0;
            static constexpr std::uintptr_t UniqueID = 0x58;
            static constexpr std::uintptr_t SessionID = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Platform", 0x0, "StructProperty"},
            {"UniqueID", 0x58, "StructProperty"},
            {"SessionID", 0x88, "StrProperty"},
        }};
    };

    struct PartyMemberRepData
    {
        static constexpr std::string_view Name = "PartyMemberRepData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OnlinePartyRepDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlatformData = 0x28;
            static constexpr std::uintptr_t CrossplayPreference = 0x150;
            static constexpr std::uintptr_t JoinMethod = 0x188;
            static constexpr std::uintptr_t JoinInProgressData = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlatformData", 0x28, "StructProperty"},
            {"CrossplayPreference", 0x150, "EnumProperty"},
            {"JoinMethod", 0x188, "StrProperty"},
            {"JoinInProgressData", 0x1C8, "StructProperty"},
        }};
    };

    struct PartyPlatformSessionInfo
    {
        static constexpr std::string_view Name = "PartyPlatformSessionInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionType = 0x0;
            static constexpr std::uintptr_t SessionID = 0x10;
            static constexpr std::uintptr_t OwnerPrimaryId = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SessionType", 0x0, "StrProperty"},
            {"SessionID", 0x10, "StrProperty"},
            {"OwnerPrimaryId", 0x20, "StructProperty"},
        }};
    };

    struct PartyPrivacySettings
    {
        static constexpr std::string_view Name = "PartyPrivacySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PartyType = 0x0;
            static constexpr std::uintptr_t PartyInviteRestriction = 0x1;
            static constexpr std::uintptr_t bOnlyLeaderFriendsCanJoin = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PartyType", 0x0, "EnumProperty"},
            {"PartyInviteRestriction", 0x1, "EnumProperty"},
            {"bOnlyLeaderFriendsCanJoin", 0x2, "BoolProperty"},
        }};
    };

    struct PartyRepData
    {
        static constexpr std::string_view Name = "PartyRepData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OnlinePartyRepDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrivacySettings = 0x21;
            static constexpr std::uintptr_t PlatformSessions = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PrivacySettings", 0x21, "StructProperty"},
            {"PlatformSessions", 0x58, "ArrayProperty"},
        }};
    };

    struct SocialChatChannel
    {
        static constexpr std::string_view Name = "SocialChatChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SocialChatChannelConfig
    {
        static constexpr std::string_view Name = "SocialChatChannelConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SocialUser = 0x0;
            static constexpr std::uintptr_t ListenChannels = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SocialUser", 0x0, "ObjectProperty"},
            {"ListenChannels", 0x18, "ArrayProperty"},
        }};
    };

    struct SocialChatManager
    {
        static constexpr std::string_view Name = "SocialChatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectChannelsByTargetUser = 0x38;
            static constexpr std::uintptr_t ChatRoomsById = 0x48;
            static constexpr std::uintptr_t ReadOnlyChannelsByDisplayName = 0x58;
            static constexpr std::uintptr_t bEnableChatSlashCommands = 0x68;
            static constexpr std::uintptr_t GroupChannels = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DirectChannelsByTargetUser", 0x38, "MapProperty"},
            {"ChatRoomsById", 0x48, "MapProperty"},
            {"ReadOnlyChannelsByDisplayName", 0x58, "MapProperty"},
            {"bEnableChatSlashCommands", 0x68, "BoolProperty"},
            {"GroupChannels", 0x70, "MapProperty"},
        }};
    };

    struct SocialChatRoom
    {
        static constexpr std::string_view Name = "SocialChatRoom";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialChatChannel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SocialDebugTools
    {
        static constexpr std::string_view Name = "SocialDebugTools";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SocialGroupChannel
    {
        static constexpr std::string_view Name = "SocialGroupChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SocialUser = 0x28;
            static constexpr std::uintptr_t GroupID = 0x30;
            static constexpr std::uintptr_t DisplayName = 0x60;
            static constexpr std::uintptr_t Members = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SocialUser", 0x28, "ObjectProperty"},
            {"GroupID", 0x30, "StructProperty"},
            {"DisplayName", 0x60, "TextProperty"},
            {"Members", 0x70, "ArrayProperty"},
        }};
    };

    struct SocialManager
    {
        static constexpr std::string_view Name = "SocialManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SocialToolkits = 0x58;
            static constexpr std::uintptr_t SocialDebugTools = 0x68;
            static constexpr std::uintptr_t PresenceFrameworkInstance = 0x70;
            static constexpr std::uintptr_t PresenceFrameworkAdapterInstance = 0x74;
            static constexpr std::uintptr_t bAcceptInvitationsFromAwayUsers = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SocialToolkits", 0x58, "ArrayProperty"},
            {"SocialDebugTools", 0x68, "ObjectProperty"},
            {"PresenceFrameworkInstance", 0x70, "NameProperty"},
            {"PresenceFrameworkAdapterInstance", 0x74, "NameProperty"},
            {"bAcceptInvitationsFromAwayUsers", 0x78, "BoolProperty"},
        }};
    };

    struct SocialParty
    {
        static constexpr std::string_view Name = "SocialParty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ReservationBeaconClientClass = 0x78;
            static constexpr std::uintptr_t SpectatorBeaconClientClass = 0x80;
            static constexpr std::uintptr_t OwningLocalUserId = 0x98;
            static constexpr std::uintptr_t CurrentLeaderId = 0xC8;
            static constexpr std::uintptr_t PartyMembersById = 0xF8;
            static constexpr std::uintptr_t PlatformUserInviteCooldown = 0x118;
            static constexpr std::uintptr_t PrimaryUserInviteCooldown = 0x120;
            static constexpr std::uintptr_t ReservationBeaconClient = 0x188;
            static constexpr std::uintptr_t SpectatorBeaconClient = 0x194;
            static constexpr std::uintptr_t JoinInProgressTimerRate = 0x1D0;
            static constexpr std::uintptr_t JoinInProgressRequestTimeout = 0x1D4;
            static constexpr std::uintptr_t JoinInProgressResponseTimeout = 0x1D8;
            static constexpr std::uintptr_t MaxJoinInProgressResponses = 0x1DC;
            static constexpr std::uintptr_t MaxJoinInProgressResponsesPerMember = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ReservationBeaconClientClass", 0x78, "ClassProperty"},
            {"SpectatorBeaconClientClass", 0x80, "ClassProperty"},
            {"OwningLocalUserId", 0x98, "StructProperty"},
            {"CurrentLeaderId", 0xC8, "StructProperty"},
            {"PartyMembersById", 0xF8, "MapProperty"},
            {"PlatformUserInviteCooldown", 0x118, "DoubleProperty"},
            {"PrimaryUserInviteCooldown", 0x120, "DoubleProperty"},
            {"ReservationBeaconClient", 0x188, "WeakObjectProperty"},
            {"SpectatorBeaconClient", 0x194, "WeakObjectProperty"},
            {"JoinInProgressTimerRate", 0x1D0, "FloatProperty"},
            {"JoinInProgressRequestTimeout", 0x1D4, "IntProperty"},
            {"JoinInProgressResponseTimeout", 0x1D8, "IntProperty"},
            {"MaxJoinInProgressResponses", 0x1DC, "IntProperty"},
            {"MaxJoinInProgressResponsesPerMember", 0x1E0, "IntProperty"},
        }};
    };

    struct SocialPartyChatRoom
    {
        static constexpr std::string_view Name = "SocialPartyChatRoom";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialChatRoom";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SocialPlatformDescription
    {
        static constexpr std::string_view Name = "SocialPlatformDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t PlatformType = 0x10;
            static constexpr std::uintptr_t OnlineSubsystem = 0x20;
            static constexpr std::uintptr_t SessionType = 0x28;
            static constexpr std::uintptr_t ExternalAccountType = 0x38;
            static constexpr std::uintptr_t CrossplayPool = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"PlatformType", 0x10, "StrProperty"},
            {"OnlineSubsystem", 0x20, "NameProperty"},
            {"SessionType", 0x28, "StrProperty"},
            {"ExternalAccountType", 0x38, "StrProperty"},
            {"CrossplayPool", 0x48, "StrProperty"},
        }};
    };

    struct SocialPrivateMessageChannel
    {
        static constexpr std::string_view Name = "SocialPrivateMessageChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialChatChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetUser = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetUser", 0xE0, "ObjectProperty"},
        }};
    };

    struct SocialReadOnlyChatChannel
    {
        static constexpr std::string_view Name = "SocialReadOnlyChatChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialChatChannel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SocialSettings
    {
        static constexpr std::string_view Name = "SocialSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OssNamesWithEnvironmentIdPrefix = 0x28;
            static constexpr std::uintptr_t DefaultMaxPartySize = 0x38;
            static constexpr std::uintptr_t bPreferPlatformInvites = 0x3C;
            static constexpr std::uintptr_t bMustSendPrimaryInvites = 0x3D;
            static constexpr std::uintptr_t bMustAlwaysSendPlatformInvites = 0x3E;
            static constexpr std::uintptr_t bLeavePartyOnDisconnect = 0x3F;
            static constexpr std::uintptr_t bSetDesiredPrivacyOnLocalPlayerBecomesLeader = 0x40;
            static constexpr std::uintptr_t UserListAutoUpdateRate = 0x44;
            static constexpr std::uintptr_t MinNicknameLength = 0x48;
            static constexpr std::uintptr_t MaxNicknameLength = 0x4C;
            static constexpr std::uintptr_t SocialPlatformDescriptions = 0x50;
            static constexpr std::uintptr_t SonyOSSNames = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OssNamesWithEnvironmentIdPrefix", 0x28, "ArrayProperty"},
            {"DefaultMaxPartySize", 0x38, "IntProperty"},
            {"bPreferPlatformInvites", 0x3C, "BoolProperty"},
            {"bMustSendPrimaryInvites", 0x3D, "BoolProperty"},
            {"bMustAlwaysSendPlatformInvites", 0x3E, "BoolProperty"},
            {"bLeavePartyOnDisconnect", 0x3F, "BoolProperty"},
            {"bSetDesiredPrivacyOnLocalPlayerBecomesLeader", 0x40, "BoolProperty"},
            {"UserListAutoUpdateRate", 0x44, "FloatProperty"},
            {"MinNicknameLength", 0x48, "IntProperty"},
            {"MaxNicknameLength", 0x4C, "IntProperty"},
            {"SocialPlatformDescriptions", 0x50, "ArrayProperty"},
            {"SonyOSSNames", 0x60, "ArrayProperty"},
        }};
    };

    struct SocialSettingsXbl
    {
        static constexpr std::string_view Name = "SocialSettingsXbl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyPlatformInvitePermissionsLive = 0x28;
            static constexpr std::uintptr_t bApplyPlatformInvitePermissionsCrossplay = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bApplyPlatformInvitePermissionsLive", 0x28, "BoolProperty"},
            {"bApplyPlatformInvitePermissionsCrossplay", 0x29, "BoolProperty"},
        }};
    };

    struct SocialToolkit
    {
        static constexpr std::string_view Name = "SocialToolkit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SocialChatManager = 0x80;
            static constexpr std::uintptr_t LocalUser = 0x88;
            static constexpr std::uintptr_t AllUsers = 0x90;
            static constexpr std::uintptr_t bRemoveInvalidatedUserFromMaps = 0xC0;
            static constexpr std::uintptr_t LocalPlayerOwner = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SocialChatManager", 0x80, "ObjectProperty"},
            {"LocalUser", 0x88, "ObjectProperty"},
            {"AllUsers", 0x90, "ArrayProperty"},
            {"bRemoveInvalidatedUserFromMaps", 0xC0, "BoolProperty"},
            {"LocalPlayerOwner", 0xC4, "WeakObjectProperty"},
        }};
    };

    struct SocialUser
    {
        static constexpr std::string_view Name = "SocialUser";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UserPlatform
    {
        static constexpr std::string_view Name = "UserPlatform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlatformDescription = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlatformDescription", 0x0, "StructProperty"},
        }};
    };

}
