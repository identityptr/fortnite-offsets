#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortGameplayStateMachine
{
    struct FortGameplayState
    {
        static constexpr std::string_view Name = "FortGameplayState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateDisplayName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateDisplayName", 0x78, "TextProperty"},
        }};
    };

    struct FortGameplayStateMachine
    {
        static constexpr std::string_view Name = "FortGameplayStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayStateMachine";
        struct Offsets
        {
            static constexpr std::uintptr_t RootTransitionData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RootTransitionData", 0xE0, "StructProperty"},
        }};
    };

    struct FortGameplayStateMachineManager
    {
        static constexpr std::string_view Name = "FortGameplayStateMachineManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayStateMachineManager";
        struct Offsets
        {
            static constexpr std::uintptr_t StateMachineList = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateMachineList", 0xC0, "StructProperty"},
        }};
    };

}
