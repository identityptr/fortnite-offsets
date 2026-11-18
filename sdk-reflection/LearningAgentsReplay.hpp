#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LearningAgentsReplay
{
    struct AsyncAction_LearningAgentsQueryReplays
    {
        static constexpr std::string_view Name = "AsyncAction_LearningAgentsQueryReplays";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryComplete = 0x30;
            static constexpr std::uintptr_t ResultList = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QueryComplete", 0x30, "MulticastInlineDelegateProperty"},
            {"ResultList", 0x40, "ObjectProperty"},
        }};
    };

    struct LearningAgentsReplayList
    {
        static constexpr std::string_view Name = "LearningAgentsReplayList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ArrayProperty"},
        }};
    };

    struct LearningAgentsReplayListEntry
    {
        static constexpr std::string_view Name = "LearningAgentsReplayListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LearningAgentsReplaySubsystem
    {
        static constexpr std::string_view Name = "LearningAgentsReplaySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalPlayerDeletingReplays = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LocalPlayerDeletingReplays", 0x40, "ObjectProperty"},
        }};
    };

}
