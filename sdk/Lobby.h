/**
 * decamp dumper generated SDK
 * Package: /Script/Lobby
 */
#pragma once
#include "Basic.h"

// /Script/Lobby.LobbyPlayerStateActorInfo
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FLobbyPlayerStateActorInfo
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* LobbyPlayerState; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLobbyPlayerStateActorInfo, LobbyPlayerState) == 16, "Offset mismatch for FLobbyPlayerStateActorInfo::LobbyPlayerState");

// /Script/Lobby.LobbyPlayerStateInfoArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FLobbyPlayerStateInfoArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Players; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* ParentState; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLobbyPlayerStateInfoArray, Players) == 72, "Offset mismatch for FLobbyPlayerStateInfoArray::Players");
static_assert(offsetof(FLobbyPlayerStateInfoArray, ParentState) == 88, "Offset mismatch for FLobbyPlayerStateInfoArray::ParentState");

// /Script/Lobby.LobbyBeaconClient
// Kind: Class; super: OnlineBeaconClient
class ULobbyBeaconClient
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* LobbyState; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* PlayerState; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0320
    std::uint8_t LobbyJoinServerState; // 0x0321 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(ULobbyBeaconClient, LobbyState) == 784, "Offset mismatch for ULobbyBeaconClient::LobbyState");
static_assert(offsetof(ULobbyBeaconClient, PlayerState) == 792, "Offset mismatch for ULobbyBeaconClient::PlayerState");
static_assert(offsetof(ULobbyBeaconClient, LobbyJoinServerState) == 801, "Offset mismatch for ULobbyBeaconClient::LobbyJoinServerState");

// /Script/Lobby.LobbyBeaconHost
// Kind: Class; super: OnlineBeaconHostObject
class ULobbyBeaconHost
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    std::uint8_t LobbyStateClass[0x20]; // 0x02A8 (Size: 0x20, Type: SoftClassProperty)
    void* LobbyState; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULobbyBeaconHost, LobbyStateClass) == 680, "Offset mismatch for ULobbyBeaconHost::LobbyStateClass");
static_assert(offsetof(ULobbyBeaconHost, LobbyState) == 712, "Offset mismatch for ULobbyBeaconHost::LobbyState");

// /Script/Lobby.LobbyBeaconPlayerState
// Kind: Class; super: Info
class ULobbyBeaconPlayerState
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0270 (Size: 0x10, Type: TextProperty)
    std::uint8_t UniqueID[0x30]; // 0x0280 (Size: 0x30, Type: StructProperty)
    std::uint8_t PartyOwnerUniqueId[0x30]; // 0x02B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bInLobby; // 0x02E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02E1
    void* ClientActor; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULobbyBeaconPlayerState, DisplayName) == 624, "Offset mismatch for ULobbyBeaconPlayerState::DisplayName");
static_assert(offsetof(ULobbyBeaconPlayerState, UniqueID) == 640, "Offset mismatch for ULobbyBeaconPlayerState::UniqueID");
static_assert(offsetof(ULobbyBeaconPlayerState, PartyOwnerUniqueId) == 688, "Offset mismatch for ULobbyBeaconPlayerState::PartyOwnerUniqueId");
static_assert(offsetof(ULobbyBeaconPlayerState, bInLobby) == 736, "Offset mismatch for ULobbyBeaconPlayerState::bInLobby");
static_assert(offsetof(ULobbyBeaconPlayerState, ClientActor) == 744, "Offset mismatch for ULobbyBeaconPlayerState::ClientActor");

// /Script/Lobby.LobbyBeaconState
// Kind: Class; super: Info
class ULobbyBeaconState
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::int32_t MaxPlayers; // 0x0270 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0274
    void* LobbyBeaconPlayerStateClass; // 0x0278 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0280
    std::uint8_t bLobbyStarted; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0289
    float WaitForPlayersTimeRemaining; // 0x028C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Players[0x1]; // 0x0290 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULobbyBeaconState, MaxPlayers) == 624, "Offset mismatch for ULobbyBeaconState::MaxPlayers");
static_assert(offsetof(ULobbyBeaconState, LobbyBeaconPlayerStateClass) == 632, "Offset mismatch for ULobbyBeaconState::LobbyBeaconPlayerStateClass");
static_assert(offsetof(ULobbyBeaconState, bLobbyStarted) == 648, "Offset mismatch for ULobbyBeaconState::bLobbyStarted");
static_assert(offsetof(ULobbyBeaconState, WaitForPlayersTimeRemaining) == 652, "Offset mismatch for ULobbyBeaconState::WaitForPlayersTimeRemaining");
static_assert(offsetof(ULobbyBeaconState, Players) == 656, "Offset mismatch for ULobbyBeaconState::Players");
