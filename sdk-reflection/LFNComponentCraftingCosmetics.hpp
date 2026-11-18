#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LFNComponentCraftingCosmetics
{
    struct LFNBoostItemDefinition
    {
        static constexpr std::string_view Name = "LFNBoostItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAlterationItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t AlterationMaterial = 0x788;
            static constexpr std::uintptr_t AlterationNiagaraColorIndex = 0x7A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AlterationMaterial", 0x788, "SoftObjectProperty"},
            {"AlterationNiagaraColorIndex", 0x7A8, "IntProperty"},
        }};
    };

    struct LFNComponentCosmeticLibrary
    {
        static constexpr std::string_view Name = "LFNComponentCosmeticLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
