#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DataflowSimulation
{
    struct AdvancePhysicsSolversDataflowNode
    {
        static constexpr std::string_view Name = "AdvancePhysicsSolversDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationTime = 0xE8;
            static constexpr std::uintptr_t PhysicsSolvers = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SimulationTime", 0xE8, "StructProperty"},
            {"PhysicsSolvers", 0xF8, "ArrayProperty"},
        }};
    };

    struct AdvanceRigidPhysicsSolverDataflowNode
    {
        static constexpr std::string_view Name = "AdvanceRigidPhysicsSolverDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationTime = 0xE8;
            static constexpr std::uintptr_t State = 0xF4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SimulationTime", 0xE8, "StructProperty"},
            {"State", 0xF4, "StructProperty"},
        }};
    };

    struct DataflowCollisionObjectInterface
    {
        static constexpr std::string_view Name = "DataflowCollisionObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataflowSimulationInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowCollisionObjectProxy
    {
        static constexpr std::string_view Name = "DataflowCollisionObjectProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationProxy";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowConstraintObjectInterface
    {
        static constexpr std::string_view Name = "DataflowConstraintObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataflowSimulationInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowConstraintObjectProxy
    {
        static constexpr std::string_view Name = "DataflowConstraintObjectProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationProxy";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowExecutionNode
    {
        static constexpr std::string_view Name = "DataflowExecutionNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideColor = 0x10;
            static constexpr std::uintptr_t OverrideColor = 0x14;
            static constexpr std::uintptr_t bActive = 0x88;
            static constexpr std::uintptr_t FrozenProperties = 0x90;
            static constexpr std::uintptr_t bIsFrozen = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bOverrideColor", 0x10, "BoolProperty"},
            {"OverrideColor", 0x14, "StructProperty"},
            {"bActive", 0x88, "BoolProperty"},
            {"FrozenProperties", 0x90, "StructProperty"},
            {"bIsFrozen", 0xA0, "BoolProperty"},
        }};
    };

    struct DataflowGeometryCachable
    {
        static constexpr std::string_view Name = "DataflowGeometryCachable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowInvalidNode
    {
        static constexpr std::string_view Name = "DataflowInvalidNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideColor = 0x10;
            static constexpr std::uintptr_t OverrideColor = 0x14;
            static constexpr std::uintptr_t bActive = 0x88;
            static constexpr std::uintptr_t FrozenProperties = 0x90;
            static constexpr std::uintptr_t bIsFrozen = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bOverrideColor", 0x10, "BoolProperty"},
            {"OverrideColor", 0x14, "StructProperty"},
            {"bActive", 0x88, "BoolProperty"},
            {"FrozenProperties", 0x90, "StructProperty"},
            {"bIsFrozen", 0xA0, "BoolProperty"},
        }};
    };

    struct DataflowPhysicsObjectInterface
    {
        static constexpr std::string_view Name = "DataflowPhysicsObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataflowSimulationInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowPhysicsObjectProxy
    {
        static constexpr std::string_view Name = "DataflowPhysicsObjectProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationProxy";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowPhysicsSolverInterface
    {
        static constexpr std::string_view Name = "DataflowPhysicsSolverInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataflowSimulationInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowPhysicsSolverProxy
    {
        static constexpr std::string_view Name = "DataflowPhysicsSolverProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationProxy";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowSimulationActor
    {
        static constexpr std::string_view Name = "DataflowSimulationActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "OnDataflowSimulationEnabledChanged",
            "PostDataflowSimulationTick",
            "PreDataflowSimulationTick",
        }};
    };

    struct DataflowSimulationAsset
    {
        static constexpr std::string_view Name = "DataflowSimulationAsset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataflowAsset = 0x0;
            static constexpr std::uintptr_t SimulationGroups = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataflowAsset", 0x0, "ObjectProperty"},
            {"SimulationGroups", 0x8, "SetProperty"},
        }};
    };

    struct DataflowSimulationInterface
    {
        static constexpr std::string_view Name = "DataflowSimulationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowSimulationManager
    {
        static constexpr std::string_view Name = "DataflowSimulationManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowSimulationNode
    {
        static constexpr std::string_view Name = "DataflowSimulationNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideColor = 0x10;
            static constexpr std::uintptr_t OverrideColor = 0x14;
            static constexpr std::uintptr_t bActive = 0x88;
            static constexpr std::uintptr_t FrozenProperties = 0x90;
            static constexpr std::uintptr_t bIsFrozen = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bOverrideColor", 0x10, "BoolProperty"},
            {"OverrideColor", 0x14, "StructProperty"},
            {"bActive", 0x88, "BoolProperty"},
            {"FrozenProperties", 0x90, "StructProperty"},
            {"bIsFrozen", 0xA0, "BoolProperty"},
        }};
    };

    struct DataflowSimulationProperty
    {
        static constexpr std::string_view Name = "DataflowSimulationProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowSimulationProxy
    {
        static constexpr std::string_view Name = "DataflowSimulationProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowSimulationTime
    {
        static constexpr std::string_view Name = "DataflowSimulationTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DeltaTime = 0x0;
            static constexpr std::uintptr_t CurrentTime = 0x4;
            static constexpr std::uintptr_t TimeOffset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DeltaTime", 0x0, "FloatProperty"},
            {"CurrentTime", 0x4, "FloatProperty"},
            {"TimeOffset", 0x8, "FloatProperty"},
        }};
    };

    struct FilterSimulationProxiesDataflowNode
    {
        static constexpr std::string_view Name = "FilterSimulationProxiesDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationProxies = 0xE8;
            static constexpr std::uintptr_t FilteredProxies = 0xF8;
            static constexpr std::uintptr_t SimulationGroups = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SimulationProxies", 0xE8, "ArrayProperty"},
            {"FilteredProxies", 0xF8, "ArrayProperty"},
            {"SimulationGroups", 0x108, "ArrayProperty"},
        }};
    };

    struct GetPhysicsSolversDataflowNode
    {
        static constexpr std::string_view Name = "GetPhysicsSolversDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowInvalidNode";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicsSolvers = 0xE8;
            static constexpr std::uintptr_t SimulationGroups = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PhysicsSolvers", 0xE8, "ArrayProperty"},
            {"SimulationGroups", 0xF8, "ArrayProperty"},
        }};
    };

    struct GetSimulationTimeDataflowNode
    {
        static constexpr std::string_view Name = "GetSimulationTimeDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowInvalidNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationTime = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SimulationTime", 0xE8, "StructProperty"},
        }};
    };

    struct RigidPhysicsSceneDataflowState
    {
        static constexpr std::string_view Name = "RigidPhysicsSceneDataflowState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigidSceneSetupDataflowNode
    {
        static constexpr std::string_view Name = "RigidSceneSetupDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"State", 0xE8, "StructProperty"},
        }};
    };

    struct RigidSceneSetupTerminalDataflowNode
    {
        static constexpr std::string_view Name = "RigidSceneSetupTerminalDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationNode";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"State", 0xE8, "StructProperty"},
        }};
    };

    struct SceneSimulationTerminalDataflowNode
    {
        static constexpr std::string_view Name = "SceneSimulationTerminalDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowSimulationNode";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"State", 0xE8, "StructProperty"},
        }};
    };

    struct SimulationProxiesTerminalDataflowNode
    {
        static constexpr std::string_view Name = "SimulationProxiesTerminalDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowExecutionNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationProxies = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SimulationProxies", 0xE8, "ArrayProperty"},
        }};
    };

}
