#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortWaterAdvanced
{
    struct FortGameFeatureAction_InitPhysicsOverrides
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_InitPhysicsOverrides";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicsAssetOverrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PhysicsAssetOverrides", 0x28, "SoftObjectProperty"},
        }};
    };

    struct FortShallowWaterSubsystem
    {
        static constexpr std::string_view Name = "FortShallowWaterSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShallowWaterSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ShallowWaterNiagaraSimulation = 0x48;
            static constexpr std::uintptr_t WaterInfoTexture = 0x50;
            static constexpr std::uintptr_t NormalRT = 0x58;
            static constexpr std::uintptr_t VelocityRT = 0x60;
            static constexpr std::uintptr_t Settings = 0x68;
            static constexpr std::uintptr_t MPC = 0x70;
            static constexpr std::uintptr_t PreviousContexts = 0x138;
            static constexpr std::uintptr_t PendingContexts = 0x148;
            static constexpr std::uintptr_t VehicleCollisionProxies = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ShallowWaterNiagaraSimulation", 0x48, "ObjectProperty"},
            {"WaterInfoTexture", 0x50, "WeakObjectProperty"},
            {"NormalRT", 0x58, "ObjectProperty"},
            {"VelocityRT", 0x60, "ObjectProperty"},
            {"Settings", 0x68, "ObjectProperty"},
            {"MPC", 0x70, "ObjectProperty"},
            {"PreviousContexts", 0x138, "ArrayProperty"},
            {"PendingContexts", 0x148, "ArrayProperty"},
            {"VehicleCollisionProxies", 0x158, "MapProperty"},
        }};
    };

}
