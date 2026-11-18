#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayStateMachine
{
    struct GameplayState
    {
        static constexpr std::string_view Name = "GameplayState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t StateRuntimeTags = 0x30;
            static constexpr std::uintptr_t bEvaluateTransition = 0x50;
            static constexpr std::uintptr_t bReplicates = 0x51;
            static constexpr std::uintptr_t bStateBegun = 0x52;
            static constexpr std::uintptr_t bStateEnded = 0x53;
            static constexpr std::uintptr_t InitializationServerTime = 0x54;
            static constexpr std::uintptr_t BeginStateDelay = 0x58;
            static constexpr std::uintptr_t CachedGameplayStateMachine = 0x60;
            static constexpr std::uintptr_t CachedStateMachineManager = 0x68;
            static constexpr std::uintptr_t Hack_StateToDelayProcess = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"StateId", 0x28, "StructProperty"},
            {"StateRuntimeTags", 0x30, "StructProperty"},
            {"bEvaluateTransition", 0x50, "BoolProperty"},
            {"bReplicates", 0x51, "BoolProperty"},
            {"bStateBegun", 0x52, "BoolProperty"},
            {"bStateEnded", 0x53, "BoolProperty"},
            {"InitializationServerTime", 0x54, "FloatProperty"},
            {"BeginStateDelay", 0x58, "FloatProperty"},
            {"CachedGameplayStateMachine", 0x60, "ObjectProperty"},
            {"CachedStateMachineManager", 0x68, "ObjectProperty"},
            {"Hack_StateToDelayProcess", 0x70, "ObjectProperty"},
        }};
    };

    struct GameplayStateMachine
    {
        static constexpr std::string_view Name = "GameplayStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateMachineId = 0x90;
            static constexpr std::uintptr_t ActiveGameplayStateData = 0x98;
            static constexpr std::uintptr_t GameplayStateSettings = 0xB0;
            static constexpr std::uintptr_t InitialGameplayStateId = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StateMachineId", 0x90, "StructProperty"},
            {"ActiveGameplayStateData", 0x98, "StructProperty"},
            {"GameplayStateSettings", 0xB0, "ArrayProperty"},
            {"InitialGameplayStateId", 0xC0, "StructProperty"},
        }};
    };

    struct GameplayStateMachineManager
    {
        static constexpr std::string_view Name = "GameplayStateMachineManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StateMachineList = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateMachineList", 0xC0, "StructProperty"},
        }};
    };

}
