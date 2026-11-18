#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoKlomboUI
{
    struct JunoKlomboCreatureViewModel
    {
        static constexpr std::string_view Name = "JunoKlomboCreatureViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentHealth = 0x90;
            static constexpr std::uintptr_t CurrentEnergy = 0x94;
            static constexpr std::uintptr_t RefreshTime = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentHealth", 0x90, "FloatProperty"},
            {"CurrentEnergy", 0x94, "FloatProperty"},
            {"RefreshTime", 0x98, "FloatProperty"},
        }};
    };

    struct JunoMobileHUDElementKlombo
    {
        static constexpr std::string_view Name = "JunoMobileHUDElementKlombo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileHUDElement";
        struct Offsets
        {
            static constexpr std::uintptr_t KlomboCreatureViewModel = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"KlomboCreatureViewModel", 0x3E0, "ObjectProperty"},
        }};
    };

}
