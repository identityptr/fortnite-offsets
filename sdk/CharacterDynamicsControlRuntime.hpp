#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CharacterDynamicsControlRuntime
{
    struct CharacterDynamicsControlBPLibrary
    {
        static constexpr std::string_view Name = "CharacterDynamicsControlBPLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CharacterDynamicsControlGameFeatureData
    {
        static constexpr std::string_view Name = "CharacterDynamicsControlGameFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultStateLogic = 0x448;
            static constexpr std::uintptr_t DefaultParameters = 0x450;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultStateLogic", 0x448, "ObjectProperty"},
            {"DefaultParameters", 0x450, "ObjectProperty"},
        }};
    };

    struct FortCharacterDynamicsComponent
    {
        static constexpr std::string_view Name = "FortCharacterDynamicsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCharacterDynamicsComponentInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultStateLogic = 0xD0;
            static constexpr std::uintptr_t DefaultParameters = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultStateLogic", 0xD0, "ObjectProperty"},
            {"DefaultParameters", 0xD8, "ObjectProperty"},
        }};
    };

}
