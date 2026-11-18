#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StatsigUnreal
{
    struct StatsigTestActorComponent
    {
        static constexpr std::string_view Name = "StatsigTestActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bInitializeAsync = 0xC0;
            static constexpr std::uintptr_t SDKKey = 0xC8;
            static constexpr std::uintptr_t UserId = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bInitializeAsync", 0xC0, "BoolProperty"},
            {"SDKKey", 0xC8, "StrProperty"},
            {"UserId", 0xD8, "StrProperty"},
        }};
    };

}
