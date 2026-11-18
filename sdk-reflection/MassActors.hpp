#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassActors
{
    struct MassActorPoolableInterface
    {
        static constexpr std::string_view Name = "MassActorPoolableInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassActorSpawnerSubsystem
    {
        static constexpr std::string_view Name = "MassActorSpawnerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnRequests = 0x40;
            static constexpr std::uintptr_t ActorsToDestroy = 0x50;
            static constexpr std::uintptr_t DeactivatedActorsToDestroy = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SpawnRequests", 0x40, "ArrayProperty"},
            {"ActorsToDestroy", 0x50, "ArrayProperty"},
            {"DeactivatedActorsToDestroy", 0x60, "ArrayProperty"},
        }};
    };

    struct MassActorSubsystem
    {
        static constexpr std::string_view Name = "MassActorSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassAgentCapsuleCollisionSyncTrait
    {
        static constexpr std::string_view Name = "MassAgentCapsuleCollisionSyncTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassAgentSyncTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t bSyncTransform = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bSyncTransform", 0x38, "BoolProperty"},
        }};
    };

    struct MassAgentComponent
    {
        static constexpr std::string_view Name = "MassAgentComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EntityConfig = 0x1E0;
            static constexpr std::uintptr_t NetID = 0x23C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntityConfig", 0x1E0, "StructProperty"},
            {"NetID", 0x23C, "StructProperty"},
        }};
    };

    struct MassAgentFeetLocationSyncTrait
    {
        static constexpr std::string_view Name = "MassAgentFeetLocationSyncTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassAgentSyncTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t SyncDirection = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SyncDirection", 0x30, "EnumProperty"},
        }};
    };

    struct MassAgentMovementSyncTrait
    {
        static constexpr std::string_view Name = "MassAgentMovementSyncTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassAgentSyncTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t SyncDirection = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SyncDirection", 0x30, "EnumProperty"},
        }};
    };

    struct MassAgentOrientationSyncTrait
    {
        static constexpr std::string_view Name = "MassAgentOrientationSyncTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassAgentSyncTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t SyncDirection = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SyncDirection", 0x30, "EnumProperty"},
        }};
    };

    struct MassAgentSubsystem
    {
        static constexpr std::string_view Name = "MassAgentSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnerSystem = 0x50;
            static constexpr std::uintptr_t SimulationSystem = 0x58;
            static constexpr std::uintptr_t PendingAgentEntities = 0x60;
            static constexpr std::uintptr_t PendingPuppets = 0x70;
            static constexpr std::uintptr_t NetworkSubsystem = 0x80;
            static constexpr std::uintptr_t ReplicationSubsystem = 0x88;
            static constexpr std::uintptr_t ReplicatedAgentComponents = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SpawnerSystem", 0x50, "ObjectProperty"},
            {"SimulationSystem", 0x58, "ObjectProperty"},
            {"PendingAgentEntities", 0x60, "MapProperty"},
            {"PendingPuppets", 0x70, "MapProperty"},
            {"NetworkSubsystem", 0x80, "ObjectProperty"},
            {"ReplicationSubsystem", 0x88, "ObjectProperty"},
            {"ReplicatedAgentComponents", 0x90, "MapProperty"},
        }};
    };

    struct MassAgentSyncTrait
    {
        static constexpr std::string_view Name = "MassAgentSyncTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SyncDirection = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SyncDirection", 0x30, "EnumProperty"},
        }};
    };

    struct MassCapsuleTransformToMassTranslator
    {
        static constexpr std::string_view Name = "MassCapsuleTransformToMassTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassCharacterMovementToActorTranslator
    {
        static constexpr std::string_view Name = "MassCharacterMovementToActorTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassCharacterMovementToMassTranslator
    {
        static constexpr std::string_view Name = "MassCharacterMovementToMassTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassCharacterOrientationToActorTranslator
    {
        static constexpr std::string_view Name = "MassCharacterOrientationToActorTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassCharacterOrientationToMassTranslator
    {
        static constexpr std::string_view Name = "MassCharacterOrientationToMassTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassSceneComponentLocationToActorTranslator
    {
        static constexpr std::string_view Name = "MassSceneComponentLocationToActorTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassSceneComponentLocationToMassTranslator
    {
        static constexpr std::string_view Name = "MassSceneComponentLocationToMassTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassSceneComponentVelocityToMassTranslator
    {
        static constexpr std::string_view Name = "MassSceneComponentVelocityToMassTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassTransformToActorCapsuleTranslator
    {
        static constexpr std::string_view Name = "MassTransformToActorCapsuleTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassTranslator_BehaviorTree
    {
        static constexpr std::string_view Name = "MassTranslator_BehaviorTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassTranslator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

}
