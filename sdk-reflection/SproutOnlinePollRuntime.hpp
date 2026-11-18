#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutOnlinePollRuntime
{
    struct AsyncAction_ListenToOnlinePoll
    {
        static constexpr std::string_view Name = "AsyncAction_ListenToOnlinePoll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnlinePollUpdated = 0x30;
            static constexpr std::uintptr_t TargetPollId = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnlinePollUpdated", 0x30, "MulticastInlineDelegateProperty"},
            {"TargetPollId", 0x40, "StructProperty"},
        }};
    };

    struct OnlinePollMeshNetUplinkComponent
    {
        static constexpr std::string_view Name = "OnlinePollMeshNetUplinkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshNetworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaDataKey = 0xF0;
            static constexpr std::uintptr_t PollTallies = 0xF8;
            static constexpr std::uintptr_t OnlinePollMetaData = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MetaDataKey", 0xF0, "NameProperty"},
            {"PollTallies", 0xF8, "StructProperty"},
            {"OnlinePollMetaData", 0x158, "StructProperty"},
        }};
    };

    struct SproutControllerComponent_OnlinePoll
    {
        static constexpr std::string_view Name = "SproutControllerComponent_OnlinePoll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTemplateVoteCast = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnTemplateVoteCast", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SproutGameStateComponent_OnlinePoll
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_OnlinePoll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPollTallyChanged = 0xC0;
            static constexpr std::uintptr_t OnOnlinePollingAvailable = 0xD0;
            static constexpr std::uintptr_t OnOnlineRegistryLoaded = 0xE0;
            static constexpr std::uintptr_t OnlinePollDatabaseRegistryType = 0xF0;
            static constexpr std::uintptr_t VoteCostData = 0xF4;
            static constexpr std::uintptr_t DedicatedTallies = 0xF8;
            static constexpr std::uintptr_t OnlinePolls = 0x158;
            static constexpr std::uintptr_t EncodedTagMap = 0x168;
            static constexpr std::uintptr_t bAreOnlinePollConfigsDigested = 0x178;
            static constexpr std::uintptr_t bIsPollingAvailable = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnPollTallyChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnOnlinePollingAvailable", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnOnlineRegistryLoaded", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnlinePollDatabaseRegistryType", 0xF0, "StructProperty"},
            {"VoteCostData", 0xF4, "StructProperty"},
            {"DedicatedTallies", 0xF8, "StructProperty"},
            {"OnlinePolls", 0x158, "MapProperty"},
            {"EncodedTagMap", 0x168, "MapProperty"},
            {"bAreOnlinePollConfigsDigested", 0x178, "BoolProperty"},
            {"bIsPollingAvailable", 0x198, "BoolProperty"},
        }};
    };

    struct SproutOnlinePollCheatManager
    {
        static constexpr std::string_view Name = "SproutOnlinePollCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
