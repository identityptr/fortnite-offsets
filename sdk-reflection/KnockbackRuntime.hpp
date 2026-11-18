#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::KnockbackRuntime
{
    struct FortAthenaMutator_Knockback
    {
        static constexpr std::string_view Name = "FortAthenaMutator_Knockback";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bStorePlayerKnockbackData = 0x2F0;
            static constexpr std::uintptr_t bReplicatePlayerKnockbackData = 0x2F1;
            static constexpr std::uintptr_t OnPlayerKnockbackDataChanged = 0x2F8;
            static constexpr std::uintptr_t AllPlayersKnockbackData = 0x308;
            static constexpr std::uintptr_t bDisplayKnockbackDamageNumbersAsPercentage = 0x368;
            static constexpr std::uintptr_t ConvertToKnockbackDamageMultiplier = 0x390;
            static constexpr std::uintptr_t PercentDamageLowMaxThreshold = 0x3B8;
            static constexpr std::uintptr_t PercentDamageMediumMaxThreshold = 0x3E0;
            static constexpr std::uintptr_t KnockbackMultiplierInitialValue = 0x408;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bStorePlayerKnockbackData", 0x2F0, "BoolProperty"},
            {"bReplicatePlayerKnockbackData", 0x2F1, "BoolProperty"},
            {"OnPlayerKnockbackDataChanged", 0x2F8, "MulticastInlineDelegateProperty"},
            {"AllPlayersKnockbackData", 0x308, "StructProperty"},
            {"bDisplayKnockbackDamageNumbersAsPercentage", 0x368, "StructProperty"},
            {"ConvertToKnockbackDamageMultiplier", 0x390, "StructProperty"},
            {"PercentDamageLowMaxThreshold", 0x3B8, "StructProperty"},
            {"PercentDamageMediumMaxThreshold", 0x3E0, "StructProperty"},
            {"KnockbackMultiplierInitialValue", 0x408, "FloatProperty"},
        }};
    };

    struct FortGameplayAbility_KnockbackMutator
    {
        static constexpr std::string_view Name = "FortGameplayAbility_KnockbackMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedMutator = 0xB40;
            static constexpr std::uintptr_t MutatorClassToGet = 0xB48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedMutator", 0xB40, "ObjectProperty"},
            {"MutatorClassToGet", 0xB48, "ClassProperty"},
        }};
    };

}
