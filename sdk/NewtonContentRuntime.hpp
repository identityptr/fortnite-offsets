#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NewtonContentRuntime
{
    struct FortAthenaMutator_NewtonCVarOverrides
    {
        static constexpr std::string_view Name = "FortAthenaMutator_NewtonCVarOverrides";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideCVars = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverrideCVars", 0x2E8, "MapProperty"},
        }};
    };

    struct FortAthenaMutator_NewtonPawnMovementOverrides
    {
        static constexpr std::string_view Name = "FortAthenaMutator_NewtonPawnMovementOverrides";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementOverrideData = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MovementOverrideData", 0x2F8, "ObjectProperty"},
        }};
    };

    struct FortAthenaMutator_NewtonPlayerPawn
    {
        static constexpr std::string_view Name = "FortAthenaMutator_NewtonPlayerPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t OverridePawnClass = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverridePawnClass", 0x2E8, "SoftClassProperty"},
        }};
    };

    struct FortAthenaMutator_NewtonRespawn
    {
        static constexpr std::string_view Name = "FortAthenaMutator_NewtonRespawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

}
