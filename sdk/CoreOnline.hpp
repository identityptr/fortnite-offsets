#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CoreOnline
{
    struct JoinabilitySettings
    {
        static constexpr std::string_view Name = "JoinabilitySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionName = 0x0;
            static constexpr std::uintptr_t bPublicSearchable = 0x4;
            static constexpr std::uintptr_t bAllowInvites = 0x5;
            static constexpr std::uintptr_t bJoinViaPresence = 0x6;
            static constexpr std::uintptr_t bJoinViaPresenceFriendsOnly = 0x7;
            static constexpr std::uintptr_t MaxPlayers = 0x8;
            static constexpr std::uintptr_t MaxPartySize = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SessionName", 0x0, "NameProperty"},
            {"bPublicSearchable", 0x4, "BoolProperty"},
            {"bAllowInvites", 0x5, "BoolProperty"},
            {"bJoinViaPresence", 0x6, "BoolProperty"},
            {"bJoinViaPresenceFriendsOnly", 0x7, "BoolProperty"},
            {"MaxPlayers", 0x8, "IntProperty"},
            {"MaxPartySize", 0xC, "IntProperty"},
        }};
    };

    struct UniqueNetIdWrapper
    {
        static constexpr std::string_view Name = "UniqueNetIdWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
