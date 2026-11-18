#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SimpleVotingOptionRuntime
{
    struct PlayspaceComponent_VotingDevice
    {
        static constexpr std::string_view Name = "PlayspaceComponent_VotingDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDeviceRegistered = 0x118;
            static constexpr std::uintptr_t OnDeviceUnregistered = 0x128;
            static constexpr std::uintptr_t RegisteredVotingDevices = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnDeviceRegistered", 0x118, "MulticastInlineDelegateProperty"},
            {"OnDeviceUnregistered", 0x128, "MulticastInlineDelegateProperty"},
            {"RegisteredVotingDevices", 0x138, "SetProperty"},
        }};
    };

    struct VotingDeviceBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "VotingDeviceBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VotingGroupViewModel
    {
        static constexpr std::string_view Name = "VotingGroupViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsCurrentlyTied = 0x68;
            static constexpr std::uintptr_t CurrentVoteCount = 0x6C;
            static constexpr std::uintptr_t TimeLimit = 0x70;
            static constexpr std::uintptr_t bIsVoteActive = 0x74;
            static constexpr std::uintptr_t VotingOptions = 0x78;
            static constexpr std::uintptr_t PollQuestion = 0x88;
            static constexpr std::uintptr_t VoteDescription = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIsCurrentlyTied", 0x68, "BoolProperty"},
            {"CurrentVoteCount", 0x6C, "IntProperty"},
            {"TimeLimit", 0x70, "IntProperty"},
            {"bIsVoteActive", 0x74, "BoolProperty"},
            {"VotingOptions", 0x78, "ArrayProperty"},
            {"PollQuestion", 0x88, "TextProperty"},
            {"VoteDescription", 0x98, "TextProperty"},
        }};
    };

    struct VotingOptionViewModel
    {
        static constexpr std::string_view Name = "VotingOptionViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VotingOptionText = 0x68;
            static constexpr std::uintptr_t VoteCount = 0x78;
            static constexpr std::uintptr_t Percentage = 0x7C;
            static constexpr std::uintptr_t bIsWinner = 0x80;
            static constexpr std::uintptr_t bPlayerSelectedVote = 0x81;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"VotingOptionText", 0x68, "TextProperty"},
            {"VoteCount", 0x78, "IntProperty"},
            {"Percentage", 0x7C, "FloatProperty"},
            {"bIsWinner", 0x80, "BoolProperty"},
            {"bPlayerSelectedVote", 0x81, "BoolProperty"},
        }};
    };

}
