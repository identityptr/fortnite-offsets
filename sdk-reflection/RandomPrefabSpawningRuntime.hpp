#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RandomPrefabSpawningRuntime
{
    struct FortPrefabSpawner
    {
        static constexpr std::string_view Name = "FortPrefabSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredProperties = 0x280;
            static constexpr std::uintptr_t bWorldReadyCalled = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RequiredProperties", 0x280, "StructProperty"},
            {"bWorldReadyCalled", 0x2A0, "BoolProperty"},
        }};
    };

    struct FortRandomPrefabSpawnHelper
    {
        static constexpr std::string_view Name = "FortRandomPrefabSpawnHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AllPrefabs = 0xD0;
            static constexpr std::uintptr_t PrefabPool = 0xE0;
            static constexpr std::uintptr_t bAcceptDuplicatesWhenOutOfUniquePrefabs = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AllPrefabs", 0xD0, "ArrayProperty"},
            {"PrefabPool", 0xE0, "ArrayProperty"},
            {"bAcceptDuplicatesWhenOutOfUniquePrefabs", 0xF8, "StructProperty"},
        }};
    };

}
