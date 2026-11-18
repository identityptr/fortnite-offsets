#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HookshotGameplayRuntime
{
    struct FortCheatManager_Hookshot
    {
        static constexpr std::string_view Name = "FortCheatManager_Hookshot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t HookShotGameplayEffectClass = 0x28;
            static constexpr std::uintptr_t HookShooterAISpawnerData = 0x48;
            static constexpr std::uintptr_t HookshotTypeName = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HookShotGameplayEffectClass", 0x28, "SoftClassProperty"},
            {"HookShooterAISpawnerData", 0x48, "SoftClassProperty"},
            {"HookshotTypeName", 0x68, "NameProperty"},
        }};
    };

}
