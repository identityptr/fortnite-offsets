#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DiscordRPC
{
    struct DiscordRuntimeSettings
    {
        static constexpr std::string_view Name = "DiscordRuntimeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableJoinSecrets = 0x28;
            static constexpr std::uintptr_t GameApplicationId = 0x30;
            static constexpr std::uintptr_t UefnApplicationId = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnableJoinSecrets", 0x28, "BoolProperty"},
            {"GameApplicationId", 0x30, "StrProperty"},
            {"UefnApplicationId", 0x40, "StrProperty"},
        }};
    };

}
