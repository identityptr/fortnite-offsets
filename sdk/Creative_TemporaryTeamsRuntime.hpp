#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Creative_TemporaryTeamsRuntime
{
    struct FortAthenaMutator_TemporaryTeams
    {
        static constexpr std::string_view Name = "FortAthenaMutator_TemporaryTeams";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_AdHocSquads";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerJoinedAdHocSquad = 0x2E8;
            static constexpr std::uintptr_t OnPlayersAboutToSquadUp = 0x2F8;
            static constexpr std::uintptr_t OnPlayersSquadUp = 0x308;
            static constexpr std::uintptr_t OnPlayerLeftAdHocSquad = 0x318;
            static constexpr std::uintptr_t bInitializeInAllGamePhases = 0x338;
            static constexpr std::uintptr_t MaxAdHocSquadSize = 0x340;
            static constexpr std::uintptr_t bVoiceChatSquaddingEnabled = 0x368;
            static constexpr std::uintptr_t MaxDistInviteNotificationCanBeReceived = 0x390;
            static constexpr std::uintptr_t MinimumDistInviteNotificationIsLost = 0x3B8;
            static constexpr std::uintptr_t ForceDisplaySquadInfoDuringGamePhases = 0x3E0;
            static constexpr std::uintptr_t SquadsTooBigToMergeText = 0x3E8;
            static constexpr std::uintptr_t MergeSquadsText = 0x3F8;
            static constexpr std::uintptr_t JoinOwnSquadText = 0x408;
            static constexpr std::uintptr_t AdHocSquadsControllerComponentClass = 0x418;
            static constexpr std::uintptr_t AdHocSquadDataClass = 0x420;
            static constexpr std::uintptr_t bMaintainSquadDataForNonAdHocSquads = 0x428;
            static constexpr std::uintptr_t bForceAllPlayersOntoIndividualTeams = 0x430;
            static constexpr std::uintptr_t bFollowingPlayerAutomaticallyLeavesCurrentSquadWhenSquadingUp = 0x458;
            static constexpr std::uintptr_t bSquadingUpMergesSquads = 0x480;
            static constexpr std::uintptr_t bEnsureOnOutsideTeamOrSquadChanged = 0x4A8;
            static constexpr std::uintptr_t bBreakUpSocialPartiesOnInit = 0x4D0;
            static constexpr std::uintptr_t bShouldAllowRequestsBeforePlayerInitialAssignments = 0x4F8;
            static constexpr std::uintptr_t HUDElementTags = 0x520;
            static constexpr std::uintptr_t FirstAdHocTeamAndSquadId = 0x540;
            static constexpr std::uintptr_t AdHocSquadDataMap = 0x560;
            static constexpr std::uintptr_t InviteDataArray = 0x580;
            static constexpr std::uintptr_t LocalClientInviteDataArray = 0x5E0;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"OnPlayerJoinedAdHocSquad", 0x2E8, "MulticastInlineDelegateProperty"},
            {"OnPlayersAboutToSquadUp", 0x2F8, "MulticastInlineDelegateProperty"},
            {"OnPlayersSquadUp", 0x308, "MulticastInlineDelegateProperty"},
            {"OnPlayerLeftAdHocSquad", 0x318, "MulticastInlineDelegateProperty"},
            {"bInitializeInAllGamePhases", 0x338, "BoolProperty"},
            {"MaxAdHocSquadSize", 0x340, "StructProperty"},
            {"bVoiceChatSquaddingEnabled", 0x368, "StructProperty"},
            {"MaxDistInviteNotificationCanBeReceived", 0x390, "StructProperty"},
            {"MinimumDistInviteNotificationIsLost", 0x3B8, "StructProperty"},
            {"ForceDisplaySquadInfoDuringGamePhases", 0x3E0, "IntProperty"},
            {"SquadsTooBigToMergeText", 0x3E8, "TextProperty"},
            {"MergeSquadsText", 0x3F8, "TextProperty"},
            {"JoinOwnSquadText", 0x408, "TextProperty"},
            {"AdHocSquadsControllerComponentClass", 0x418, "ClassProperty"},
            {"AdHocSquadDataClass", 0x420, "ClassProperty"},
            {"bMaintainSquadDataForNonAdHocSquads", 0x428, "BoolProperty"},
            {"bForceAllPlayersOntoIndividualTeams", 0x430, "StructProperty"},
            {"bFollowingPlayerAutomaticallyLeavesCurrentSquadWhenSquadingUp", 0x458, "StructProperty"},
            {"bSquadingUpMergesSquads", 0x480, "StructProperty"},
            {"bEnsureOnOutsideTeamOrSquadChanged", 0x4A8, "StructProperty"},
            {"bBreakUpSocialPartiesOnInit", 0x4D0, "StructProperty"},
            {"bShouldAllowRequestsBeforePlayerInitialAssignments", 0x4F8, "StructProperty"},
            {"HUDElementTags", 0x520, "StructProperty"},
            {"FirstAdHocTeamAndSquadId", 0x540, "ByteProperty"},
            {"AdHocSquadDataMap", 0x560, "MapProperty"},
            {"InviteDataArray", 0x580, "StructProperty"},
            {"LocalClientInviteDataArray", 0x5E0, "ArrayProperty"},
        }};
    };

    struct FortUserOptionComponent_TemporaryTeams
    {
        static constexpr std::string_view Name = "FortUserOptionComponent_TemporaryTeams";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionNotifyComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowTemporaryTeamInvites = 0x168;
            static constexpr std::uintptr_t bAllowTemporaryTeamLeave = 0x169;
            static constexpr std::uintptr_t AllowTemporaryTeamInvites_DataRegistry = 0x170;
            static constexpr std::uintptr_t AllowTemporaryTeamLeave_DataRegistry = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bAllowTemporaryTeamInvites", 0x168, "BoolProperty"},
            {"bAllowTemporaryTeamLeave", 0x169, "BoolProperty"},
            {"AllowTemporaryTeamInvites_DataRegistry", 0x170, "StructProperty"},
            {"AllowTemporaryTeamLeave_DataRegistry", 0x198, "StructProperty"},
        }};
    };

    struct FortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory
    {
        static constexpr std::string_view Name = "FortUserOptionComponent_TemporaryTeams_TeamSettingsAndInventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionNotifyComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowTemporaryTeamInvites_Override = 0x170;
            static constexpr std::uintptr_t bAllowTemporaryTeamInvites = 0x171;
            static constexpr std::uintptr_t bAllowTemporaryTeamLeave_Override = 0x172;
            static constexpr std::uintptr_t bAllowTemporaryTeamLeave = 0x173;
            static constexpr std::uintptr_t AllowTemporaryTeamInvites_DataRegistry = 0x178;
            static constexpr std::uintptr_t AllowTemporaryTeamLeave_DataRegistry = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bAllowTemporaryTeamInvites_Override", 0x170, "BoolProperty"},
            {"bAllowTemporaryTeamInvites", 0x171, "BoolProperty"},
            {"bAllowTemporaryTeamLeave_Override", 0x172, "BoolProperty"},
            {"bAllowTemporaryTeamLeave", 0x173, "BoolProperty"},
            {"AllowTemporaryTeamInvites_DataRegistry", 0x178, "StructProperty"},
            {"AllowTemporaryTeamLeave_DataRegistry", 0x1A0, "StructProperty"},
        }};
    };

    struct PlayspaceComponent_TemporaryTeamsEmotes
    {
        static constexpr std::string_view Name = "PlayspaceComponent_TemporaryTeamsEmotes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_CreativeModifyEmotes";
        struct Offsets
        {
            static constexpr std::uintptr_t EmoteDataRegistryName = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EmoteDataRegistryName", 0x158, "NameProperty"},
        }};
    };

    struct TemporaryTeamData
    {
        static constexpr std::string_view Name = "TemporaryTeamData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AdHocSquadData";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerStates = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerStates", 0x30, "ArrayProperty"},
        }};
    };

}
