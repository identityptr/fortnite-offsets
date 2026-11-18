#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ElectraProtronFactory
{
    struct ElectraProtronFactorySettings
    {
        static constexpr std::string_view Name = "ElectraProtronFactorySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bPreferProtronInEditor = 0x28;
            static constexpr std::uintptr_t bPreferProtronInGame = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bPreferProtronInEditor", 0x28, "BoolProperty"},
            {"bPreferProtronInGame", 0x29, "BoolProperty"},
        }};
    };

}
