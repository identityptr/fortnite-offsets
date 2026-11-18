#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DynamicRollTablesRuntime
{
    struct FortControllerComponent_DynamicRollPlayerComponent
    {
        static constexpr std::string_view Name = "FortControllerComponent_DynamicRollPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AssociatedManagerClass = 0xC8;
            static constexpr std::uintptr_t Enabled = 0xD0;
            static constexpr std::uintptr_t TableManager = 0xF8;
            static constexpr std::uintptr_t SeededRNG = 0x124;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AssociatedManagerClass", 0xC8, "ClassProperty"},
            {"Enabled", 0xD0, "StructProperty"},
            {"TableManager", 0xF8, "ObjectProperty"},
            {"SeededRNG", 0x124, "StructProperty"},
        }};
    };

    struct FortGamestateComponent_DynamicRollTableManager
    {
        static constexpr std::string_view Name = "FortGamestateComponent_DynamicRollTableManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DataRegistryType_BaseWeights = 0xF0;
            static constexpr std::uintptr_t DataRegistryType_WeightModifiers = 0xF4;
            static constexpr std::uintptr_t Enabled = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DataRegistryType_BaseWeights", 0xF0, "StructProperty"},
            {"DataRegistryType_WeightModifiers", 0xF4, "StructProperty"},
            {"Enabled", 0xF8, "StructProperty"},
        }};
    };

}
