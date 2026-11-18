#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DuckSnacks
{
    struct FortGameplayAbility_DuckSnacks_CycleBuff
    {
        static constexpr std::string_view Name = "FortGameplayAbility_DuckSnacks_CycleBuff";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldEnableBuffCycling = 0xB40;
            static constexpr std::uintptr_t CycleInputAction = 0xB68;
            static constexpr std::uintptr_t CycleCooldown = 0xB70;
            static constexpr std::uintptr_t AllowInfiniteCycling = 0xB98;
            static constexpr std::uintptr_t BuffEffectMap = 0xBC0;
            static constexpr std::uintptr_t CachedCycleOrder = 0xBE0;
            static constexpr std::uintptr_t CachedActiveBuffTag = 0xBF8;
            static constexpr std::uintptr_t CachedNextBuffTag = 0xBFC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ShouldEnableBuffCycling", 0xB40, "StructProperty"},
            {"CycleInputAction", 0xB68, "ObjectProperty"},
            {"CycleCooldown", 0xB70, "StructProperty"},
            {"AllowInfiniteCycling", 0xB98, "StructProperty"},
            {"BuffEffectMap", 0xBC0, "MapProperty"},
            {"CachedCycleOrder", 0xBE0, "ArrayProperty"},
            {"CachedActiveBuffTag", 0xBF8, "StructProperty"},
            {"CachedNextBuffTag", 0xBFC, "StructProperty"},
        }};
    };

}
