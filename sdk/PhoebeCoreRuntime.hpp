#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PhoebeCoreRuntime
{
    struct FortAthenaAIBotEvaluator_ShockwaveTraversal
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_ShockwaveTraversal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator_BlueprintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x6F0;
            static constexpr std::uintptr_t ThrowDataTable = 0x8F8;
            static constexpr std::uintptr_t AimLocationKeyName = 0x900;
            static constexpr std::uintptr_t LaunchDirectionKeyName = 0x904;
            static constexpr std::uintptr_t CharacterLaunchedExecutionStatusKeyName = 0x908;
            static constexpr std::uintptr_t SelectedSequenceKeyName = 0x90C;
            static constexpr std::uintptr_t DigestedSettings = 0x918;
            static constexpr std::uintptr_t DigestedThrowTypeData = 0x950;
            static constexpr std::uintptr_t CachedPathFollowingComponent = 0x960;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Settings", 0x6F0, "StructProperty"},
            {"ThrowDataTable", 0x8F8, "ObjectProperty"},
            {"AimLocationKeyName", 0x900, "NameProperty"},
            {"LaunchDirectionKeyName", 0x904, "NameProperty"},
            {"CharacterLaunchedExecutionStatusKeyName", 0x908, "NameProperty"},
            {"SelectedSequenceKeyName", 0x90C, "NameProperty"},
            {"DigestedSettings", 0x918, "StructProperty"},
            {"DigestedThrowTypeData", 0x950, "ArrayProperty"},
            {"CachedPathFollowingComponent", 0x960, "ObjectProperty"},
        }};
    };

}
