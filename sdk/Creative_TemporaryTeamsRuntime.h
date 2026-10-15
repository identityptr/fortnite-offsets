/**
 * decamp dumper generated SDK
 * Package: /Script/Creative_TemporaryTeamsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/Creative_TemporaryTeamsRuntime.FortAthenaMutator_TemporaryTeams
// Kind: Class; super: FortAthenaMutator_AdHocSquads
class UFortAthenaMutator_TemporaryTeams
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    FMulticastInlineDelegate OnPlayerJoinedAdHocSquad; // 0x02E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayersAboutToSquadUp; // 0x02F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayersSquadUp; // 0x0300 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerLeftAdHocSquad; // 0x0310 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0320
    std::uint8_t bInitializeInAllGamePhases; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0331
    std::uint8_t MaxAdHocSquadSize[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t bVoiceChatSquaddingEnabled[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDistInviteNotificationCanBeReceived[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumDistInviteNotificationIsLost[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::int32_t ForceDisplaySquadInfoDuringGamePhases; // 0x03D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x03DC
    std::uint8_t SquadsTooBigToMergeText[0x10]; // 0x03E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t MergeSquadsText[0x10]; // 0x03F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t JoinOwnSquadText[0x10]; // 0x0400 (Size: 0x10, Type: TextProperty)
    void* AdHocSquadsControllerComponentClass; // 0x0410 (Size: 0x8, Type: ClassProperty)
    void* AdHocSquadDataClass; // 0x0418 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bMaintainSquadDataForNonAdHocSquads; // 0x0420 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0421
    std::uint8_t bForceAllPlayersOntoIndividualTeams[0x28]; // 0x0428 (Size: 0x28, Type: StructProperty)
    std::uint8_t bFollowingPlayerAutomaticallyLeavesCurrentSquadWhenSquadingUp[0x28]; // 0x0450 (Size: 0x28, Type: StructProperty)
    std::uint8_t bSquadingUpMergesSquads[0x28]; // 0x0478 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnsureOnOutsideTeamOrSquadChanged[0x28]; // 0x04A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bBreakUpSocialPartiesOnInit[0x28]; // 0x04C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldAllowRequestsBeforePlayerInitialAssignments[0x28]; // 0x04F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HUDElementTags[0x20]; // 0x0518 (Size: 0x20, Type: StructProperty)
    std::uint8_t FirstAdHocTeamAndSquadId; // 0x0538 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x1F]; // 0x0539
    TMap<void*, void*> AdHocSquadDataMap; // 0x0558 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0006[0x10]; // 0x0568
    std::uint8_t InviteDataArray[0x60]; // 0x0578 (Size: 0x60, Type: StructProperty)
    TArray<void*> LocalClientInviteDataArray; // 0x05D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, OnPlayerJoinedAdHocSquad) == 736, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::OnPlayerJoinedAdHocSquad");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, OnPlayersAboutToSquadUp) == 752, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::OnPlayersAboutToSquadUp");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, OnPlayersSquadUp) == 768, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::OnPlayersSquadUp");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, OnPlayerLeftAdHocSquad) == 784, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::OnPlayerLeftAdHocSquad");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, bInitializeInAllGamePhases) == 816, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::bInitializeInAllGamePhases");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, MaxAdHocSquadSize) == 824, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::MaxAdHocSquadSize");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, bVoiceChatSquaddingEnabled) == 864, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::bVoiceChatSquaddingEnabled");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, MaxDistInviteNotificationCanBeReceived) == 904, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::MaxDistInviteNotificationCanBeReceived");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, MinimumDistInviteNotificationIsLost) == 944, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::MinimumDistInviteNotificationIsLost");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, ForceDisplaySquadInfoDuringGamePhases) == 984, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::ForceDisplaySquadInfoDuringGamePhases");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, SquadsTooBigToMergeText) == 992, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::SquadsTooBigToMergeText");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, MergeSquadsText) == 1008, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::MergeSquadsText");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, JoinOwnSquadText) == 1024, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::JoinOwnSquadText");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, AdHocSquadsControllerComponentClass) == 1040, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::AdHocSquadsControllerComponentClass");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, AdHocSquadDataClass) == 1048, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::AdHocSquadDataClass");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, bMaintainSquadDataForNonAdHocSquads) == 1056, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::bMaintainSquadDataForNonAdHocSquads");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, bForceAllPlayersOntoIndividualTeams) == 1064, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::bForceAllPlayersOntoIndividualTeams");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, bFollowingPlayerAutomaticallyLeavesCurrentSquadWhenSquadingUp) == 1104, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::bFollowingPlayerAutomaticallyLeavesCurrentSquadWhenSquadingUp");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, bSquadingUpMergesSquads) == 1144, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::bSquadingUpMergesSquads");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, bEnsureOnOutsideTeamOrSquadChanged) == 1184, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::bEnsureOnOutsideTeamOrSquadChanged");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, bBreakUpSocialPartiesOnInit) == 1224, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::bBreakUpSocialPartiesOnInit");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, bShouldAllowRequestsBeforePlayerInitialAssignments) == 1264, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::bShouldAllowRequestsBeforePlayerInitialAssignments");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, HUDElementTags) == 1304, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::HUDElementTags");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, FirstAdHocTeamAndSquadId) == 1336, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::FirstAdHocTeamAndSquadId");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, AdHocSquadDataMap) == 1368, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::AdHocSquadDataMap");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, InviteDataArray) == 1400, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::InviteDataArray");
static_assert(offsetof(UFortAthenaMutator_TemporaryTeams, LocalClientInviteDataArray) == 1496, "Offset mismatch for UFortAthenaMutator_TemporaryTeams::LocalClientInviteDataArray");

// /Script/Creative_TemporaryTeamsRuntime.FortUserOptionComponent_TemporaryTeams
// Kind: Class; super: FortUserOptionNotifyComponent
class UFortUserOptionComponent_TemporaryTeams
{
public:
    std::uint8_t Pad_0000[0x160]; // 0x0000
    std::uint8_t bAllowTemporaryTeamInvites; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowTemporaryTeamLeave; // 0x0161 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0162
    std::uint8_t AllowTemporaryTeamInvites_DataRegistry[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowTemporaryTeamLeave_DataRegistry[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortUserOptionComponent_TemporaryTeams, bAllowTemporaryTeamInvites) == 352, "Offset mismatch for UFortUserOptionComponent_TemporaryTeams::bAllowTemporaryTeamInvites");
static_assert(offsetof(UFortUserOptionComponent_TemporaryTeams, bAllowTemporaryTeamLeave) == 353, "Offset mismatch for UFortUserOptionComponent_TemporaryTeams::bAllowTemporaryTeamLeave");
static_assert(offsetof(UFortUserOptionComponent_TemporaryTeams, AllowTemporaryTeamInvites_DataRegistry) == 360, "Offset mismatch for UFortUserOptionComponent_TemporaryTeams::AllowTemporaryTeamInvites_DataRegistry");
static_assert(offsetof(UFortUserOptionComponent_TemporaryTeams, AllowTemporaryTeamLeave_DataRegistry) == 400, "Offset mismatch for UFortUserOptionComponent_TemporaryTeams::AllowTemporaryTeamLeave_DataRegistry");

// /Script/Creative_TemporaryTeamsRuntime.FortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory
// Kind: Class; super: FortUserOptionNotifyComponent
class UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t bAllowTemporaryTeamInvites_Override; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowTemporaryTeamInvites; // 0x0169 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowTemporaryTeamLeave_Override; // 0x016A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowTemporaryTeamLeave; // 0x016B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x016C
    std::uint8_t AllowTemporaryTeamInvites_DataRegistry[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowTemporaryTeamLeave_DataRegistry[0x1]; // 0x0198 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory, bAllowTemporaryTeamInvites_Override) == 360, "Offset mismatch for UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory::bAllowTemporaryTeamInvites_Override");
static_assert(offsetof(UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory, bAllowTemporaryTeamInvites) == 361, "Offset mismatch for UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory::bAllowTemporaryTeamInvites");
static_assert(offsetof(UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory, bAllowTemporaryTeamLeave_Override) == 362, "Offset mismatch for UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory::bAllowTemporaryTeamLeave_Override");
static_assert(offsetof(UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory, bAllowTemporaryTeamLeave) == 363, "Offset mismatch for UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory::bAllowTemporaryTeamLeave");
static_assert(offsetof(UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory, AllowTemporaryTeamInvites_DataRegistry) == 368, "Offset mismatch for UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory::AllowTemporaryTeamInvites_DataRegistry");
static_assert(offsetof(UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory, AllowTemporaryTeamLeave_DataRegistry) == 408, "Offset mismatch for UFortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory::AllowTemporaryTeamLeave_DataRegistry");

// /Script/Creative_TemporaryTeamsRuntime.PlayspaceComponent_TemporaryTeamsEmotes
// Kind: Class; super: PlayspaceComponent_CreativeModifyEmotes
class UPlayspaceComponent_TemporaryTeamsEmotes
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    FName EmoteDataRegistryName; // 0x0158 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPlayspaceComponent_TemporaryTeamsEmotes, EmoteDataRegistryName) == 344, "Offset mismatch for UPlayspaceComponent_TemporaryTeamsEmotes::EmoteDataRegistryName");

// /Script/Creative_TemporaryTeamsRuntime.TemporaryTeamData
// Kind: Class; super: AdHocSquadData
class UTemporaryTeamData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> PlayerStates; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTemporaryTeamData, PlayerStates) == 48, "Offset mismatch for UTemporaryTeamData::PlayerStates");
