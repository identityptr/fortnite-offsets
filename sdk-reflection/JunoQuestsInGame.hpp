#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoQuestsInGame
{
    struct JunoControllerComponent_QuestEventTracker
    {
        static constexpr std::string_view Name = "JunoControllerComponent_QuestEventTracker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTrackedFTUEQuestsEnabled = 0xD8;
            static constexpr std::uintptr_t TrackedFTUEQuests = 0xE8;
            static constexpr std::uintptr_t FTUEQuestBundles = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnTrackedFTUEQuestsEnabled", 0xD8, "MulticastInlineDelegateProperty"},
            {"TrackedFTUEQuests", 0xE8, "ArrayProperty"},
            {"FTUEQuestBundles", 0xF8, "ArrayProperty"},
        }};
    };

    struct JunoQuestCheatManager
    {
        static constexpr std::string_view Name = "JunoQuestCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
