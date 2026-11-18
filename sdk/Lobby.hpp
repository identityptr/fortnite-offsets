#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Lobby
{
    struct LobbyBeaconClient
    {
        static constexpr std::string_view Name = "LobbyBeaconClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconClient";
        struct Offsets
        {
            static constexpr std::uintptr_t LobbyState = 0x320;
            static constexpr std::uintptr_t PlayerState = 0x328;
            static constexpr std::uintptr_t LobbyJoinServerState = 0x331;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LobbyState", 0x320, "ObjectProperty"},
            {"PlayerState", 0x328, "ObjectProperty"},
            {"LobbyJoinServerState", 0x331, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 13> FunctionNames{{
            "ClientAckJoiningServer",
            "ClientJoinGame",
            "ClientLoginComplete",
            "ClientPlayerJoined",
            "ClientPlayerLeft",
            "ClientSetInviteFlags",
            "ClientWasKicked",
            "ServerCheat",
            "ServerDisconnectFromLobby",
            "ServerKickPlayer",
            "ServerLoginPlayer",
            "ServerNotifyJoiningServer",
            "ServerSetPartyOwner",
        }};
    };

    struct LobbyBeaconHost
    {
        static constexpr std::string_view Name = "LobbyBeaconHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconHostObject";
        struct Offsets
        {
            static constexpr std::uintptr_t LobbyStateClass = 0x2B0;
            static constexpr std::uintptr_t LobbyState = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LobbyStateClass", 0x2B0, "SoftClassProperty"},
            {"LobbyState", 0x2D0, "ObjectProperty"},
        }};
    };

    struct LobbyBeaconPlayerState
    {
        static constexpr std::string_view Name = "LobbyBeaconPlayerState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x278;
            static constexpr std::uintptr_t UniqueID = 0x288;
            static constexpr std::uintptr_t PartyOwnerUniqueId = 0x2B8;
            static constexpr std::uintptr_t bInLobby = 0x2E8;
            static constexpr std::uintptr_t ClientActor = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DisplayName", 0x278, "TextProperty"},
            {"UniqueID", 0x288, "StructProperty"},
            {"PartyOwnerUniqueId", 0x2B8, "StructProperty"},
            {"bInLobby", 0x2E8, "BoolProperty"},
            {"ClientActor", 0x2F0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "OnRep_InLobby",
            "OnRep_PartyOwner",
            "OnRep_UniqueId",
        }};
    };

    struct LobbyBeaconState
    {
        static constexpr std::string_view Name = "LobbyBeaconState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxPlayers = 0x278;
            static constexpr std::uintptr_t LobbyBeaconPlayerStateClass = 0x280;
            static constexpr std::uintptr_t bLobbyStarted = 0x290;
            static constexpr std::uintptr_t WaitForPlayersTimeRemaining = 0x294;
            static constexpr std::uintptr_t Players = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MaxPlayers", 0x278, "IntProperty"},
            {"LobbyBeaconPlayerStateClass", 0x280, "ClassProperty"},
            {"bLobbyStarted", 0x290, "BoolProperty"},
            {"WaitForPlayersTimeRemaining", 0x294, "FloatProperty"},
            {"Players", 0x298, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnRep_LobbyStarted",
            "OnRep_WaitForPlayersTimeRemaining",
        }};
    };

    struct LobbyPlayerStateActorInfo
    {
        static constexpr std::string_view Name = "LobbyPlayerStateActorInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t LobbyPlayerState = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LobbyPlayerState", 0x10, "ObjectProperty"},
        }};
    };

    struct LobbyPlayerStateInfoArray
    {
        static constexpr std::string_view Name = "LobbyPlayerStateInfoArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Players = 0x48;
            static constexpr std::uintptr_t ParentState = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Players", 0x48, "ArrayProperty"},
            {"ParentState", 0x58, "ObjectProperty"},
        }};
    };

}
