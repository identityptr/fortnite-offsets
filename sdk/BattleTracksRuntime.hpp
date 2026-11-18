#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BattleTracksRuntime
{
    struct BattleTracksPlayerComponent
    {
        static constexpr std::string_view Name = "BattleTracksPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0xC8;
            static constexpr std::uintptr_t PlayerPawn = 0xD0;
            static constexpr std::uintptr_t SparksCosmeticComponent = 0xD8;
            static constexpr std::uintptr_t MusicPlayer = 0xE0;
            static constexpr std::uintptr_t MomentMixes = 0xF8;
            static constexpr std::uintptr_t ActiveMomentMix = 0x108;
            static constexpr std::uintptr_t CurrentMomentMixTag = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PlayerController", 0xC8, "ObjectProperty"},
            {"PlayerPawn", 0xD0, "ObjectProperty"},
            {"SparksCosmeticComponent", 0xD8, "ObjectProperty"},
            {"MusicPlayer", 0xE0, "ObjectProperty"},
            {"MomentMixes", 0xF8, "MapProperty"},
            {"ActiveMomentMix", 0x108, "ObjectProperty"},
            {"CurrentMomentMixTag", 0x110, "StructProperty"},
        }};
    };

}
