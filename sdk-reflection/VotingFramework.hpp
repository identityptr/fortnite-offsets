#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VotingFramework
{
    struct VoteBroadcasterComponent
    {
        static constexpr std::string_view Name = "VoteBroadcasterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshNetworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VoteSessionSettingsList = 0xF0;
            static constexpr std::uintptr_t VoteSessionRuntimeList = 0x100;
            static constexpr std::uintptr_t VoteRuntimeList = 0x160;
            static constexpr std::uintptr_t VoteResultsList = 0x1C0;
            static constexpr std::uintptr_t PlayerCastedVotesMap = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"VoteSessionSettingsList", 0xF0, "ArrayProperty"},
            {"VoteSessionRuntimeList", 0x100, "StructProperty"},
            {"VoteRuntimeList", 0x160, "StructProperty"},
            {"VoteResultsList", 0x1C0, "StructProperty"},
            {"PlayerCastedVotesMap", 0x220, "MapProperty"},
        }};
    };

    struct VoteDispatchSubsystem
    {
        static constexpr std::string_view Name = "VoteDispatchSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t VotingResults = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VotingResults", 0xC0, "ArrayProperty"},
        }};
    };

    struct VoteInitiationActor
    {
        static constexpr std::string_view Name = "VoteInitiationActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t VoteBroadcasterComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VoteBroadcasterComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct VoteListenerComponent
    {
        static constexpr std::string_view Name = "VoteListenerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnVoteSessionSetupEvent = 0xC0;
            static constexpr std::uintptr_t OnVoteSessionVotingEvent = 0xD0;
            static constexpr std::uintptr_t OnVoteSetupEvent = 0xE0;
            static constexpr std::uintptr_t OnVoteStartEvent = 0xF0;
            static constexpr std::uintptr_t OnVoteChangeEvent = 0x100;
            static constexpr std::uintptr_t OnVoteEndEvent = 0x110;
            static constexpr std::uintptr_t OnVoteSessionCompleteEvent = 0x120;
            static constexpr std::uintptr_t OnVoteSessionShutdownEvent = 0x130;
            static constexpr std::uintptr_t RequestedVoteSessionIds = 0x140;
            static constexpr std::uintptr_t RequestedVoteIds = 0x160;
            static constexpr std::uintptr_t RequestedVoteSelectionIds = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnVoteSessionSetupEvent", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnVoteSessionVotingEvent", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnVoteSetupEvent", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnVoteStartEvent", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnVoteChangeEvent", 0x100, "MulticastInlineDelegateProperty"},
            {"OnVoteEndEvent", 0x110, "MulticastInlineDelegateProperty"},
            {"OnVoteSessionCompleteEvent", 0x120, "MulticastInlineDelegateProperty"},
            {"OnVoteSessionShutdownEvent", 0x130, "MulticastInlineDelegateProperty"},
            {"RequestedVoteSessionIds", 0x140, "StructProperty"},
            {"RequestedVoteIds", 0x160, "StructProperty"},
            {"RequestedVoteSelectionIds", 0x180, "StructProperty"},
        }};
    };

    struct VoteResponderComponent
    {
        static constexpr std::string_view Name = "VoteResponderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VoteListenerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedVoteSelections = 0x1A0;
            static constexpr std::uintptr_t bShouldLockVotingAfterCasted = 0x1B0;
            static constexpr std::uintptr_t PlayerCastedVotesMap = 0x1B8;
            static constexpr std::uintptr_t ActiveVoteSessionId = 0x1C8;
            static constexpr std::uintptr_t ActiveVoteId = 0x1CC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SupportedVoteSelections", 0x1A0, "ArrayProperty"},
            {"bShouldLockVotingAfterCasted", 0x1B0, "BoolProperty"},
            {"PlayerCastedVotesMap", 0x1B8, "MapProperty"},
            {"ActiveVoteSessionId", 0x1C8, "NameProperty"},
            {"ActiveVoteId", 0x1CC, "NameProperty"},
        }};
    };

}
