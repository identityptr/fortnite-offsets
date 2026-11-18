#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoRidableRuntime
{
    struct JunoRidableBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoRidableBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoRidableCheatManager
    {
        static constexpr std::string_view Name = "JunoRidableCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t CreatureRidableComponentClass = 0x28;
            static constexpr std::uintptr_t GenericRiderAbilitySet = 0x48;
            static constexpr std::uintptr_t StartRidingEventTag = 0x68;
            static constexpr std::uintptr_t GenericAbilitySetHandle = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CreatureRidableComponentClass", 0x28, "SoftClassProperty"},
            {"GenericRiderAbilitySet", 0x48, "SoftObjectProperty"},
            {"StartRidingEventTag", 0x68, "StructProperty"},
            {"GenericAbilitySetHandle", 0x70, "StructProperty"},
        }};
    };

}
