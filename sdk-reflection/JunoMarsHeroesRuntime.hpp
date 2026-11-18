#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoMarsHeroesRuntime
{
    struct JunoMarsHeroesCheatManager
    {
        static constexpr std::string_view Name = "JunoMarsHeroesCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMappingDataA = 0x28;
            static constexpr std::uintptr_t InputMappingDataB = 0x30;
            static constexpr std::uintptr_t InputMappingDataC = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputMappingDataA", 0x28, "ObjectProperty"},
            {"InputMappingDataB", 0x30, "ObjectProperty"},
            {"InputMappingDataC", 0x38, "ObjectProperty"},
        }};
    };

}
