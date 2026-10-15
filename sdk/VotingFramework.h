/**
 * decamp dumper generated SDK
 * Package: /Script/VotingFramework
 */
#pragma once
#include "Basic.h"

// /Script/VotingFramework.CastedVote
// Kind: ScriptStruct; super: none
struct FCastedVote
{
public:
    std::uint8_t VoteSessionId[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t VoteId[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName VoteSelectionId; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCastedVote, VoteSessionId) == 0, "Offset mismatch for FCastedVote::VoteSessionId");
static_assert(offsetof(FCastedVote, VoteId) == 4, "Offset mismatch for FCastedVote::VoteId");
static_assert(offsetof(FCastedVote, VoteSelectionId) == 8, "Offset mismatch for FCastedVote::VoteSelectionId");

// /Script/VotingFramework.VoteRuntime
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FVoteRuntime
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* WorldRef; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VoteSessionId[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t VoteId[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    TArray<void*> VoteSelectionIds; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t VoteState; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t VoteSelectionWinningResult[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    std::uint8_t Shadow_VoteSelectionWinningResult[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t Shadow_VoteState; // 0x003C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FVoteRuntime, WorldRef) == 16, "Offset mismatch for FVoteRuntime::WorldRef");
static_assert(offsetof(FVoteRuntime, VoteSessionId) == 24, "Offset mismatch for FVoteRuntime::VoteSessionId");
static_assert(offsetof(FVoteRuntime, VoteId) == 28, "Offset mismatch for FVoteRuntime::VoteId");
static_assert(offsetof(FVoteRuntime, VoteSelectionIds) == 32, "Offset mismatch for FVoteRuntime::VoteSelectionIds");
static_assert(offsetof(FVoteRuntime, VoteState) == 48, "Offset mismatch for FVoteRuntime::VoteState");
static_assert(offsetof(FVoteRuntime, VoteSelectionWinningResult) == 52, "Offset mismatch for FVoteRuntime::VoteSelectionWinningResult");
static_assert(offsetof(FVoteRuntime, Shadow_VoteSelectionWinningResult) == 56, "Offset mismatch for FVoteRuntime::Shadow_VoteSelectionWinningResult");
static_assert(offsetof(FVoteRuntime, Shadow_VoteState) == 60, "Offset mismatch for FVoteRuntime::Shadow_VoteState");

// /Script/VotingFramework.VoteRuntimeArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FVoteRuntimeArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* WorldRef; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VotingResults; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVoteRuntimeArray, WorldRef) == 72, "Offset mismatch for FVoteRuntimeArray::WorldRef");
static_assert(offsetof(FVoteRuntimeArray, VotingResults) == 80, "Offset mismatch for FVoteRuntimeArray::VotingResults");

// /Script/VotingFramework.VoteSelection
// Kind: ScriptStruct; super: none
struct FVoteSelection
{
public:
    std::uint8_t VoteSessionId[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t VoteId[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t VoteSelectionId[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVoteSelection, VoteSessionId) == 0, "Offset mismatch for FVoteSelection::VoteSessionId");
static_assert(offsetof(FVoteSelection, VoteId) == 4, "Offset mismatch for FVoteSelection::VoteId");
static_assert(offsetof(FVoteSelection, VoteSelectionId) == 8, "Offset mismatch for FVoteSelection::VoteSelectionId");

// /Script/VotingFramework.VoteSelectionResults
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FVoteSelectionResults
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* WorldRef; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VoteSessionId[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t VoteId[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t VoteSelectionId[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::int32_t ServerVoteTotal; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t AllServersVoteTotal; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t Shadow_ServerVoteTotal; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t Shadow_AllServersVoteTotal; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVoteSelectionResults, WorldRef) == 16, "Offset mismatch for FVoteSelectionResults::WorldRef");
static_assert(offsetof(FVoteSelectionResults, VoteSessionId) == 24, "Offset mismatch for FVoteSelectionResults::VoteSessionId");
static_assert(offsetof(FVoteSelectionResults, VoteId) == 28, "Offset mismatch for FVoteSelectionResults::VoteId");
static_assert(offsetof(FVoteSelectionResults, VoteSelectionId) == 32, "Offset mismatch for FVoteSelectionResults::VoteSelectionId");
static_assert(offsetof(FVoteSelectionResults, ServerVoteTotal) == 36, "Offset mismatch for FVoteSelectionResults::ServerVoteTotal");
static_assert(offsetof(FVoteSelectionResults, AllServersVoteTotal) == 40, "Offset mismatch for FVoteSelectionResults::AllServersVoteTotal");
static_assert(offsetof(FVoteSelectionResults, Shadow_ServerVoteTotal) == 44, "Offset mismatch for FVoteSelectionResults::Shadow_ServerVoteTotal");
static_assert(offsetof(FVoteSelectionResults, Shadow_AllServersVoteTotal) == 48, "Offset mismatch for FVoteSelectionResults::Shadow_AllServersVoteTotal");

// /Script/VotingFramework.VoteSelectionResultsArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FVoteSelectionResultsArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* WorldRef; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VoteSelectionResults; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVoteSelectionResultsArray, WorldRef) == 72, "Offset mismatch for FVoteSelectionResultsArray::WorldRef");
static_assert(offsetof(FVoteSelectionResultsArray, VoteSelectionResults) == 80, "Offset mismatch for FVoteSelectionResultsArray::VoteSelectionResults");

// /Script/VotingFramework.VoteSelectionSettings
// Kind: ScriptStruct; super: none
struct FVoteSelectionSettings
{
public:
    std::uint8_t VoteSelectionId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FText VoteSelectionText; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FVoteSelectionSettings, VoteSelectionId) == 0, "Offset mismatch for FVoteSelectionSettings::VoteSelectionId");
static_assert(offsetof(FVoteSelectionSettings, VoteSelectionText) == 8, "Offset mismatch for FVoteSelectionSettings::VoteSelectionText");

// /Script/VotingFramework.VoteSessionRuntime
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FVoteSessionRuntime
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t VoteSessionId[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t NetworkType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t VoteSessionState; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0012
    std::uint8_t CurrentVoteId[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    void* WorldRef; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Shadow_VoteSessionState; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FVoteSessionRuntime, VoteSessionId) == 12, "Offset mismatch for FVoteSessionRuntime::VoteSessionId");
static_assert(offsetof(FVoteSessionRuntime, NetworkType) == 16, "Offset mismatch for FVoteSessionRuntime::NetworkType");
static_assert(offsetof(FVoteSessionRuntime, VoteSessionState) == 17, "Offset mismatch for FVoteSessionRuntime::VoteSessionState");
static_assert(offsetof(FVoteSessionRuntime, CurrentVoteId) == 20, "Offset mismatch for FVoteSessionRuntime::CurrentVoteId");
static_assert(offsetof(FVoteSessionRuntime, WorldRef) == 24, "Offset mismatch for FVoteSessionRuntime::WorldRef");
static_assert(offsetof(FVoteSessionRuntime, Shadow_VoteSessionState) == 32, "Offset mismatch for FVoteSessionRuntime::Shadow_VoteSessionState");

// /Script/VotingFramework.VoteSessionRuntimeArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FVoteSessionRuntimeArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* WorldRef; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VotingSessions; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVoteSessionRuntimeArray, WorldRef) == 72, "Offset mismatch for FVoteSessionRuntimeArray::WorldRef");
static_assert(offsetof(FVoteSessionRuntimeArray, VotingSessions) == 80, "Offset mismatch for FVoteSessionRuntimeArray::VotingSessions");

// /Script/VotingFramework.VoteSessionSettings
// Kind: ScriptStruct; super: none
struct FVoteSessionSettings
{
public:
    std::uint8_t VoteSessionId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t VoteSessionText[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    TArray<void*> VoteSettingsList; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NetworkType; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FVoteSessionSettings, VoteSessionId) == 0, "Offset mismatch for FVoteSessionSettings::VoteSessionId");
static_assert(offsetof(FVoteSessionSettings, VoteSessionText) == 8, "Offset mismatch for FVoteSessionSettings::VoteSessionText");
static_assert(offsetof(FVoteSessionSettings, VoteSettingsList) == 24, "Offset mismatch for FVoteSessionSettings::VoteSettingsList");
static_assert(offsetof(FVoteSessionSettings, NetworkType) == 40, "Offset mismatch for FVoteSessionSettings::NetworkType");

// /Script/VotingFramework.VoteSettings
// Kind: ScriptStruct; super: none
struct FVoteSettings
{
public:
    std::uint8_t VoteId[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bLocksSelection; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t VoteText[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    TArray<void*> VoteSelections; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVoteSettings, VoteId) == 0, "Offset mismatch for FVoteSettings::VoteId");
static_assert(offsetof(FVoteSettings, bLocksSelection) == 4, "Offset mismatch for FVoteSettings::bLocksSelection");
static_assert(offsetof(FVoteSettings, VoteText) == 8, "Offset mismatch for FVoteSettings::VoteText");
static_assert(offsetof(FVoteSettings, VoteSelections) == 24, "Offset mismatch for FVoteSettings::VoteSelections");

// /Script/VotingFramework.VoteBroadcasterComponent
// Kind: Class; super: MeshNetworkComponent
class UVoteBroadcasterComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    TArray<void*> VoteSessionSettingsList; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t VoteSessionRuntimeList[0x60]; // 0x0100 (Size: 0x60, Type: StructProperty)
    std::uint8_t VoteRuntimeList[0x60]; // 0x0160 (Size: 0x60, Type: StructProperty)
    std::uint8_t VoteResultsList[0x60]; // 0x01C0 (Size: 0x60, Type: StructProperty)
    TMap<void*, void*> PlayerCastedVotesMap; // 0x0220 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVoteBroadcasterComponent, VoteSessionSettingsList) == 240, "Offset mismatch for UVoteBroadcasterComponent::VoteSessionSettingsList");
static_assert(offsetof(UVoteBroadcasterComponent, VoteSessionRuntimeList) == 256, "Offset mismatch for UVoteBroadcasterComponent::VoteSessionRuntimeList");
static_assert(offsetof(UVoteBroadcasterComponent, VoteRuntimeList) == 352, "Offset mismatch for UVoteBroadcasterComponent::VoteRuntimeList");
static_assert(offsetof(UVoteBroadcasterComponent, VoteResultsList) == 448, "Offset mismatch for UVoteBroadcasterComponent::VoteResultsList");
static_assert(offsetof(UVoteBroadcasterComponent, PlayerCastedVotesMap) == 544, "Offset mismatch for UVoteBroadcasterComponent::PlayerCastedVotesMap");

// /Script/VotingFramework.VoteDispatchSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UVoteDispatchSubsystem
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> VotingResults; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVoteDispatchSubsystem, VotingResults) == 192, "Offset mismatch for UVoteDispatchSubsystem::VotingResults");

// /Script/VotingFramework.VoteInitiationActor
// Kind: Class; super: Info
class UVoteInitiationActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* VoteBroadcasterComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVoteInitiationActor, VoteBroadcasterComponent) == 632, "Offset mismatch for UVoteInitiationActor::VoteBroadcasterComponent");

// /Script/VotingFramework.VoteListenerComponent
// Kind: Class; super: ActorComponent
class UVoteListenerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnVoteSessionSetupEvent; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVoteSessionVotingEvent; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVoteSetupEvent; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVoteStartEvent; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVoteChangeEvent; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVoteEndEvent; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVoteSessionCompleteEvent; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVoteSessionShutdownEvent; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t RequestedVoteSessionIds[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequestedVoteIds[0x20]; // 0x0160 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequestedVoteSelectionIds[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVoteListenerComponent, OnVoteSessionSetupEvent) == 192, "Offset mismatch for UVoteListenerComponent::OnVoteSessionSetupEvent");
static_assert(offsetof(UVoteListenerComponent, OnVoteSessionVotingEvent) == 208, "Offset mismatch for UVoteListenerComponent::OnVoteSessionVotingEvent");
static_assert(offsetof(UVoteListenerComponent, OnVoteSetupEvent) == 224, "Offset mismatch for UVoteListenerComponent::OnVoteSetupEvent");
static_assert(offsetof(UVoteListenerComponent, OnVoteStartEvent) == 240, "Offset mismatch for UVoteListenerComponent::OnVoteStartEvent");
static_assert(offsetof(UVoteListenerComponent, OnVoteChangeEvent) == 256, "Offset mismatch for UVoteListenerComponent::OnVoteChangeEvent");
static_assert(offsetof(UVoteListenerComponent, OnVoteEndEvent) == 272, "Offset mismatch for UVoteListenerComponent::OnVoteEndEvent");
static_assert(offsetof(UVoteListenerComponent, OnVoteSessionCompleteEvent) == 288, "Offset mismatch for UVoteListenerComponent::OnVoteSessionCompleteEvent");
static_assert(offsetof(UVoteListenerComponent, OnVoteSessionShutdownEvent) == 304, "Offset mismatch for UVoteListenerComponent::OnVoteSessionShutdownEvent");
static_assert(offsetof(UVoteListenerComponent, RequestedVoteSessionIds) == 320, "Offset mismatch for UVoteListenerComponent::RequestedVoteSessionIds");
static_assert(offsetof(UVoteListenerComponent, RequestedVoteIds) == 352, "Offset mismatch for UVoteListenerComponent::RequestedVoteIds");
static_assert(offsetof(UVoteListenerComponent, RequestedVoteSelectionIds) == 384, "Offset mismatch for UVoteListenerComponent::RequestedVoteSelectionIds");

// /Script/VotingFramework.VoteResponderComponent
// Kind: Class; super: VoteListenerComponent
class UVoteResponderComponent
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    TArray<void*> SupportedVoteSelections; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldLockVotingAfterCasted; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01B1
    TMap<void*, void*> PlayerCastedVotesMap; // 0x01B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t ActiveVoteSessionId[0x4]; // 0x01C8 (Size: 0x4, Type: NameProperty)
    FName ActiveVoteId; // 0x01CC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UVoteResponderComponent, SupportedVoteSelections) == 416, "Offset mismatch for UVoteResponderComponent::SupportedVoteSelections");
static_assert(offsetof(UVoteResponderComponent, bShouldLockVotingAfterCasted) == 432, "Offset mismatch for UVoteResponderComponent::bShouldLockVotingAfterCasted");
static_assert(offsetof(UVoteResponderComponent, PlayerCastedVotesMap) == 440, "Offset mismatch for UVoteResponderComponent::PlayerCastedVotesMap");
static_assert(offsetof(UVoteResponderComponent, ActiveVoteSessionId) == 456, "Offset mismatch for UVoteResponderComponent::ActiveVoteSessionId");
static_assert(offsetof(UVoteResponderComponent, ActiveVoteId) == 460, "Offset mismatch for UVoteResponderComponent::ActiveVoteId");
